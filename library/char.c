/*
** Automatically generated from `char.m'
** by the Mercury compiler,
** version rotd-2023-05-17
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


// :- module char.
// :- implementation.

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
#include "exception.mih"
#include "float.mih"
#include "int.mih"
#include "int16.mih"
#include "int32.mih"
#include "int64.mih"
#include "int8.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mercury_term_lexer.mih"
#include "mercury_term_parser.mih"
#include "mutvar.mih"
#include "one_or_more.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "solutions.mih"
#include "stm_builtin.mih"
#include "store.mih"
#include "stream.mih"
#include "string.mih"
#include "table_builtin.mih"
#include "term.mih"
#include "term_context.mih"
#include "term_conversion.mih"
#include "term_int.mih"
#include "term_io.mih"
#include "term_subst.mih"
#include "term_unify.mih"
#include "term_vars.mih"
#include "time.mih"
#include "tree234.mih"
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
#include "io.call_system.mih"
#include "io.environment.mih"
#include "io.error_util.mih"
#include "io.file.mih"
#include "io.primitives_read.mih"
#include "io.primitives_write.mih"
#include "io.stream_db.mih"
#include "io.stream_ops.mih"
#include "io.text_read.mih"
#include "stream.string_writer.mih"
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"




static MR_bool MR_CALL 
mercury__char__to_utf8_code_units_6_p_0(
  MR_Char Char_7,
  MR_Integer * NumCodeUnits_8,
  uint8_t * A_9,
  uint8_t * B_10,
  uint8_t * C_11,
  uint8_t * D_12);

static MR_bool MR_CALL 
mercury__char____Unify____char_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__char____Compare____char_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_Box MR_CALL 
mercury__char__ClassMethod_for_enum__uenum____character__arity0______enum__to_uint_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
mercury__char__ClassMethod_for_enum__uenum____character__arity0______enum__from_uint_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
mercury__char__ClassMethod_for_enum__enum____character__arity0______enum__to_int_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
mercury__char__ClassMethod_for_enum__enum____character__arity0______enum__from_int_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);


static /* final */ const MR_Box mercury__char_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__char_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__char_scalar_common_3[2][5];

static /* final */ const MR_Integer mercury__char_scalar_common_5[1][3];

static /* final */ const MR_Integer mercury__char_scalar_common_6[2][2];


struct mercury__char__vector_common_type_4_0_s {
  const MR_Char mercury__char__vector_common_type_4_0__vct_4_f_0;
};

static /* final */ const struct mercury__char__vector_common_type_4_0_s mercury__char_vector_common_4[122];

struct mercury__char__vector_common_type_7_0_s {
  const MR_Integer mercury__char__vector_common_type_7_0__vct_7_f_0;
};

static /* final */ const struct mercury__char__vector_common_type_7_0_s mercury__char_vector_common_7[116];



static /* final */ const MR_Box mercury__char_scalar_common_1[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__char_scalar_common_2[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__char_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__char_scalar_common_3[2][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__char_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__char_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Integer mercury__char_scalar_common_5[1][3] = {
  /* row   0 */
  {
    (MR_Unsigned) 4294837247U,
    (MR_Unsigned) 4294871039U,
    (MR_Unsigned) 2047U
  },
};

static /* final */ const MR_Integer mercury__char_scalar_common_6[2][2] = {
  /* row   0 */
  {
    (MR_Unsigned) 8258559U,
    (MR_Unsigned) 8257536U
  },
  /* row   1 */
  {
    (MR_Unsigned) 4294837247U,
    (MR_Unsigned) 2047U
  },
};


static /* final */ const struct mercury__char__vector_common_type_4_0_s mercury__char_vector_common_4[122] = {
  /* row   0 */   { (MR_Char) 65 },
  /* row   1 */   { (MR_Char) 66 },
  /* row   2 */   { (MR_Char) 67 },
  /* row   3 */   { (MR_Char) 68 },
  /* row   4 */   { (MR_Char) 69 },
  /* row   5 */   { (MR_Char) 70 },
  /* row   6 */   { (MR_Char) 71 },
  /* row   7 */   { (MR_Char) 72 },
  /* row   8 */   { (MR_Char) 73 },
  /* row   9 */   { (MR_Char) 74 },
  /* row  10 */   { (MR_Char) 75 },
  /* row  11 */   { (MR_Char) 76 },
  /* row  12 */   { (MR_Char) 77 },
  /* row  13 */   { (MR_Char) 78 },
  /* row  14 */   { (MR_Char) 79 },
  /* row  15 */   { (MR_Char) 80 },
  /* row  16 */   { (MR_Char) 81 },
  /* row  17 */   { (MR_Char) 82 },
  /* row  18 */   { (MR_Char) 83 },
  /* row  19 */   { (MR_Char) 84 },
  /* row  20 */   { (MR_Char) 85 },
  /* row  21 */   { (MR_Char) 86 },
  /* row  22 */   { (MR_Char) 87 },
  /* row  23 */   { (MR_Char) 88 },
  /* row  24 */   { (MR_Char) 89 },
  /* row  25 */   { (MR_Char) 90 },
  /* row  26 */   { (MR_Char) 97 },
  /* row  27 */   { (MR_Char) 98 },
  /* row  28 */   { (MR_Char) 99 },
  /* row  29 */   { (MR_Char) 100 },
  /* row  30 */   { (MR_Char) 101 },
  /* row  31 */   { (MR_Char) 102 },
  /* row  32 */   { (MR_Char) 103 },
  /* row  33 */   { (MR_Char) 104 },
  /* row  34 */   { (MR_Char) 105 },
  /* row  35 */   { (MR_Char) 106 },
  /* row  36 */   { (MR_Char) 107 },
  /* row  37 */   { (MR_Char) 108 },
  /* row  38 */   { (MR_Char) 109 },
  /* row  39 */   { (MR_Char) 110 },
  /* row  40 */   { (MR_Char) 111 },
  /* row  41 */   { (MR_Char) 112 },
  /* row  42 */   { (MR_Char) 113 },
  /* row  43 */   { (MR_Char) 114 },
  /* row  44 */   { (MR_Char) 115 },
  /* row  45 */   { (MR_Char) 116 },
  /* row  46 */   { (MR_Char) 117 },
  /* row  47 */   { (MR_Char) 118 },
  /* row  48 */   { (MR_Char) 119 },
  /* row  49 */   { (MR_Char) 120 },
  /* row  50 */   { (MR_Char) 121 },
  /* row  51 */   { (MR_Char) 122 },
  /* row  52 */   { (MR_Char) 48 },
  /* row  53 */   { (MR_Char) 49 },
  /* row  54 */   { (MR_Char) 50 },
  /* row  55 */   { (MR_Char) 51 },
  /* row  56 */   { (MR_Char) 52 },
  /* row  57 */   { (MR_Char) 53 },
  /* row  58 */   { (MR_Char) 54 },
  /* row  59 */   { (MR_Char) 55 },
  /* row  60 */   { (MR_Char) 48 },
  /* row  61 */   { (MR_Char) 49 },
  /* row  62 */   { (MR_Char) 50 },
  /* row  63 */   { (MR_Char) 51 },
  /* row  64 */   { (MR_Char) 52 },
  /* row  65 */   { (MR_Char) 53 },
  /* row  66 */   { (MR_Char) 54 },
  /* row  67 */   { (MR_Char) 55 },
  /* row  68 */   { (MR_Char) 56 },
  /* row  69 */   { (MR_Char) 57 },
  /* row  70 */   { (MR_Char) 48 },
  /* row  71 */   { (MR_Char) 49 },
  /* row  72 */   { (MR_Char) 50 },
  /* row  73 */   { (MR_Char) 51 },
  /* row  74 */   { (MR_Char) 52 },
  /* row  75 */   { (MR_Char) 53 },
  /* row  76 */   { (MR_Char) 54 },
  /* row  77 */   { (MR_Char) 55 },
  /* row  78 */   { (MR_Char) 56 },
  /* row  79 */   { (MR_Char) 57 },
  /* row  80 */   { (MR_Char) 65 },
  /* row  81 */   { (MR_Char) 66 },
  /* row  82 */   { (MR_Char) 67 },
  /* row  83 */   { (MR_Char) 68 },
  /* row  84 */   { (MR_Char) 69 },
  /* row  85 */   { (MR_Char) 70 },
  /* row  86 */   { (MR_Char) 48 },
  /* row  87 */   { (MR_Char) 49 },
  /* row  88 */   { (MR_Char) 50 },
  /* row  89 */   { (MR_Char) 51 },
  /* row  90 */   { (MR_Char) 52 },
  /* row  91 */   { (MR_Char) 53 },
  /* row  92 */   { (MR_Char) 54 },
  /* row  93 */   { (MR_Char) 55 },
  /* row  94 */   { (MR_Char) 56 },
  /* row  95 */   { (MR_Char) 57 },
  /* row  96 */   { (MR_Char) 65 },
  /* row  97 */   { (MR_Char) 66 },
  /* row  98 */   { (MR_Char) 67 },
  /* row  99 */   { (MR_Char) 68 },
  /* row 100 */   { (MR_Char) 69 },
  /* row 101 */   { (MR_Char) 70 },
  /* row 102 */   { (MR_Char) 71 },
  /* row 103 */   { (MR_Char) 72 },
  /* row 104 */   { (MR_Char) 73 },
  /* row 105 */   { (MR_Char) 74 },
  /* row 106 */   { (MR_Char) 75 },
  /* row 107 */   { (MR_Char) 76 },
  /* row 108 */   { (MR_Char) 77 },
  /* row 109 */   { (MR_Char) 78 },
  /* row 110 */   { (MR_Char) 79 },
  /* row 111 */   { (MR_Char) 80 },
  /* row 112 */   { (MR_Char) 81 },
  /* row 113 */   { (MR_Char) 82 },
  /* row 114 */   { (MR_Char) 83 },
  /* row 115 */   { (MR_Char) 84 },
  /* row 116 */   { (MR_Char) 85 },
  /* row 117 */   { (MR_Char) 86 },
  /* row 118 */   { (MR_Char) 87 },
  /* row 119 */   { (MR_Char) 88 },
  /* row 120 */   { (MR_Char) 89 },
  /* row 121 */   { (MR_Char) 90 },
};

static /* final */ const struct mercury__char__vector_common_type_7_0_s mercury__char_vector_common_7[116] = {
  /* row   0 */   { (MR_Integer) 0 },
  /* row   1 */   { (MR_Integer) 1 },
  /* row   2 */   { (MR_Integer) 2 },
  /* row   3 */   { (MR_Integer) 3 },
  /* row   4 */   { (MR_Integer) 4 },
  /* row   5 */   { (MR_Integer) 5 },
  /* row   6 */   { (MR_Integer) 6 },
  /* row   7 */   { (MR_Integer) 7 },
  /* row   8 */   { (MR_Integer) 8 },
  /* row   9 */   { (MR_Integer) 9 },
  /* row  10 */   { (MR_Integer) 0 },
  /* row  11 */   { (MR_Integer) 0 },
  /* row  12 */   { (MR_Integer) 0 },
  /* row  13 */   { (MR_Integer) 0 },
  /* row  14 */   { (MR_Integer) 0 },
  /* row  15 */   { (MR_Integer) 0 },
  /* row  16 */   { (MR_Integer) 0 },
  /* row  17 */   { (MR_Integer) 10 },
  /* row  18 */   { (MR_Integer) 11 },
  /* row  19 */   { (MR_Integer) 12 },
  /* row  20 */   { (MR_Integer) 13 },
  /* row  21 */   { (MR_Integer) 14 },
  /* row  22 */   { (MR_Integer) 15 },
  /* row  23 */   { (MR_Integer) 16 },
  /* row  24 */   { (MR_Integer) 17 },
  /* row  25 */   { (MR_Integer) 18 },
  /* row  26 */   { (MR_Integer) 19 },
  /* row  27 */   { (MR_Integer) 20 },
  /* row  28 */   { (MR_Integer) 21 },
  /* row  29 */   { (MR_Integer) 22 },
  /* row  30 */   { (MR_Integer) 23 },
  /* row  31 */   { (MR_Integer) 24 },
  /* row  32 */   { (MR_Integer) 25 },
  /* row  33 */   { (MR_Integer) 26 },
  /* row  34 */   { (MR_Integer) 27 },
  /* row  35 */   { (MR_Integer) 28 },
  /* row  36 */   { (MR_Integer) 29 },
  /* row  37 */   { (MR_Integer) 30 },
  /* row  38 */   { (MR_Integer) 31 },
  /* row  39 */   { (MR_Integer) 32 },
  /* row  40 */   { (MR_Integer) 33 },
  /* row  41 */   { (MR_Integer) 34 },
  /* row  42 */   { (MR_Integer) 35 },
  /* row  43 */   { (MR_Integer) 0 },
  /* row  44 */   { (MR_Integer) 1 },
  /* row  45 */   { (MR_Integer) 2 },
  /* row  46 */   { (MR_Integer) 3 },
  /* row  47 */   { (MR_Integer) 4 },
  /* row  48 */   { (MR_Integer) 5 },
  /* row  49 */   { (MR_Integer) 6 },
  /* row  50 */   { (MR_Integer) 7 },
  /* row  51 */   { (MR_Integer) 0 },
  /* row  52 */   { (MR_Integer) 1 },
  /* row  53 */   { (MR_Integer) 2 },
  /* row  54 */   { (MR_Integer) 3 },
  /* row  55 */   { (MR_Integer) 4 },
  /* row  56 */   { (MR_Integer) 5 },
  /* row  57 */   { (MR_Integer) 6 },
  /* row  58 */   { (MR_Integer) 7 },
  /* row  59 */   { (MR_Integer) 8 },
  /* row  60 */   { (MR_Integer) 9 },
  /* row  61 */   { (MR_Integer) 0 },
  /* row  62 */   { (MR_Integer) 1 },
  /* row  63 */   { (MR_Integer) 2 },
  /* row  64 */   { (MR_Integer) 3 },
  /* row  65 */   { (MR_Integer) 4 },
  /* row  66 */   { (MR_Integer) 5 },
  /* row  67 */   { (MR_Integer) 6 },
  /* row  68 */   { (MR_Integer) 7 },
  /* row  69 */   { (MR_Integer) 8 },
  /* row  70 */   { (MR_Integer) 9 },
  /* row  71 */   { (MR_Integer) 0 },
  /* row  72 */   { (MR_Integer) 0 },
  /* row  73 */   { (MR_Integer) 0 },
  /* row  74 */   { (MR_Integer) 0 },
  /* row  75 */   { (MR_Integer) 0 },
  /* row  76 */   { (MR_Integer) 0 },
  /* row  77 */   { (MR_Integer) 0 },
  /* row  78 */   { (MR_Integer) 10 },
  /* row  79 */   { (MR_Integer) 11 },
  /* row  80 */   { (MR_Integer) 12 },
  /* row  81 */   { (MR_Integer) 13 },
  /* row  82 */   { (MR_Integer) 14 },
  /* row  83 */   { (MR_Integer) 15 },
  /* row  84 */   { (MR_Integer) 0 },
  /* row  85 */   { (MR_Integer) 0 },
  /* row  86 */   { (MR_Integer) 0 },
  /* row  87 */   { (MR_Integer) 0 },
  /* row  88 */   { (MR_Integer) 0 },
  /* row  89 */   { (MR_Integer) 0 },
  /* row  90 */   { (MR_Integer) 0 },
  /* row  91 */   { (MR_Integer) 0 },
  /* row  92 */   { (MR_Integer) 0 },
  /* row  93 */   { (MR_Integer) 0 },
  /* row  94 */   { (MR_Integer) 0 },
  /* row  95 */   { (MR_Integer) 0 },
  /* row  96 */   { (MR_Integer) 0 },
  /* row  97 */   { (MR_Integer) 0 },
  /* row  98 */   { (MR_Integer) 0 },
  /* row  99 */   { (MR_Integer) 0 },
  /* row 100 */   { (MR_Integer) 0 },
  /* row 101 */   { (MR_Integer) 0 },
  /* row 102 */   { (MR_Integer) 0 },
  /* row 103 */   { (MR_Integer) 0 },
  /* row 104 */   { (MR_Integer) 0 },
  /* row 105 */   { (MR_Integer) 0 },
  /* row 106 */   { (MR_Integer) 0 },
  /* row 107 */   { (MR_Integer) 0 },
  /* row 108 */   { (MR_Integer) 0 },
  /* row 109 */   { (MR_Integer) 0 },
  /* row 110 */   { (MR_Integer) 10 },
  /* row 111 */   { (MR_Integer) 11 },
  /* row 112 */   { (MR_Integer) 12 },
  /* row 113 */   { (MR_Integer) 13 },
  /* row 114 */   { (MR_Integer) 14 },
  /* row 115 */   { (MR_Integer) 15 },
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
#include "int16.mh"
#include "int32.mh"
#include "int64.mh"
#include "int8.mh"
#include "io.mh"
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
#include "uint16.mh"
#include "uint32.mh"
#include "uint64.mh"
#include "uint8.mh"
#include "version_array.mh"
#include "io.environment.mh"
#include "io.error_util.mh"
#include "io.file.mh"
#include "io.primitives_read.mh"
#include "io.primitives_write.mh"
#include "io.stream_db.mh"
#include "io.stream_ops.mh"
#include "io.text_read.mh"


const MR_TypeCtorInfo_Struct mercury__char__char__type_ctor_info_char_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__char____Unify____char_0_0_10001)),
  ((MR_Box) (mercury__char____Compare____char_0_0_10001)),
  (MR_String) "char",
  (MR_String) "char",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_character_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_BaseTypeclassInfo base_typeclass_info_enum__uenum__arity1__character__arity0__[7] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) (mercury__char__ClassMethod_for_enum__uenum____character__arity0______enum__to_uint_1_1_f_0_10001)),
  ((MR_Box) (mercury__char__ClassMethod_for_enum__uenum____character__arity0______enum__from_uint_2_2_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_enum__enum__arity1__character__arity0__[7] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) (mercury__char__ClassMethod_for_enum__enum____character__arity0______enum__to_int_1_1_f_0_10001)),
  ((MR_Box) (mercury__char__ClassMethod_for_enum__enum____character__arity0______enum__from_int_1_1_f_0_10001))
};

MR_bool MR_CALL 
mercury__char__ClassMethod_for_enum__uenum____character__arity0______enum__from_uint_2_2_p_0(
  MR_Unsigned HeadVar__1_1,
  MR_Char * HeadVar__2_2)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__char__ClassMethod_for_enum__uenum____character__arity0______enum__from_uint_2_2_p_0

	MR_Unsigned UInt;
	MR_Char Character;
	MR_bool SUCCESS_INDICATOR;

	UInt = HeadVar__1_1 ;
		{

    Character = (MR_UnsignedChar) UInt;
    SUCCESS_INDICATOR = (UInt <= 0x10ffff);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	*HeadVar__2_2  = Character;
	}
succeeded  = SUCCESS_INDICATOR;
}
  return succeeded;
}

MR_Unsigned MR_CALL 
mercury__char__ClassMethod_for_enum__uenum____character__arity0______enum__to_uint_1_1_f_0(
  MR_Char HeadVar__1_1)
{
  MR_Unsigned HeadVar__2_2;
  MR_Integer Var_3;

{
#define MR_PROC_LABEL mercury__char__ClassMethod_for_enum__uenum____character__arity0______enum__to_uint_1_1_f_0

	MR_Char Character;
	MR_Integer Int;

	Character = HeadVar__1_1 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	Var_3  = Int;
}
{
#define MR_PROC_LABEL mercury__char__ClassMethod_for_enum__uenum____character__arity0______enum__to_uint_1_1_f_0

	MR_Integer I;
	MR_Unsigned U;

	I = Var_3 ;
		{

    U = (MR_Unsigned) I;


		;}
#undef MR_PROC_LABEL
	HeadVar__2_2  = U;
}
  return HeadVar__2_2;
}

MR_bool MR_CALL 
mercury__char__ClassMethod_for_enum__enum____character__arity0______enum__from_int_1_1_f_0(
  MR_Integer X_3,
  MR_Char * Y_4)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__char__ClassMethod_for_enum__enum____character__arity0______enum__from_int_1_1_f_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Int = X_3 ;
		{

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	*Y_4  = Character;
	}
succeeded  = SUCCESS_INDICATOR;
}
  return succeeded;
}

MR_Integer MR_CALL 
mercury__char__ClassMethod_for_enum__enum____character__arity0______enum__to_int_1_1_f_0(
  MR_Char X_3)
{
  MR_Integer Y_4;

{
#define MR_PROC_LABEL mercury__char__ClassMethod_for_enum__enum____character__arity0______enum__to_int_1_1_f_0

	MR_Char Character;
	MR_Integer Int;

	Character = X_3 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	Y_4  = Int;
}
  return Y_4;
}

void MR_CALL 
mercury__char____Compare____char_0_0(
  MR_Word * HeadVar__1_1,
  MR_Char HeadVar__2_2,
  MR_Char HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Char Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Char Cast_HeadVar2_5 = HeadVar__3_3;
  MR_Integer Var_7;
  MR_Integer Var_8;

{
#define MR_PROC_LABEL mercury__char____Compare____char_0_0

	MR_Char Character;
	MR_Integer Int;

	Character = Cast_HeadVar1_4 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	Var_7  = Int;
}
{
#define MR_PROC_LABEL mercury__char____Compare____char_0_0

	MR_Char Character;
	MR_Integer Int;

	Character = Cast_HeadVar2_5 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	Var_8  = Int;
}
  succeeded = (Var_7 < Var_8);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Var_7 == Var_8);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  }
}

MR_bool MR_CALL 
mercury__char____Unify____char_0_0(
  MR_Char HeadVar__1_1,
  MR_Char HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Char Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Char Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
mercury__char__hash_2_p_0(
  MR_Char C_3,
  MR_Integer * H_4)
{
  MR_Unsigned Var_5;
  MR_Integer Var_6;

{
#define MR_PROC_LABEL mercury__char__hash_2_p_0

	MR_Char Character;
	MR_Integer Int;

	Character = C_3 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	Var_6  = Int;
}
{
#define MR_PROC_LABEL mercury__char__hash_2_p_0

	MR_Integer I;
	MR_Unsigned U;

	I = Var_6 ;
		{

    U = (MR_Unsigned) I;


		;}
#undef MR_PROC_LABEL
	Var_5  = U;
}
  *H_4 = mercury__uint__hash_1_f_0(Var_5);
}

MR_Integer MR_CALL 
mercury__char__hash_1_f_0(
  MR_Char C_3)
{
  MR_Integer H_4;
  MR_Unsigned Var_5;
  MR_Integer Var_6;

{
#define MR_PROC_LABEL mercury__char__hash_1_f_0

	MR_Char Character;
	MR_Integer Int;

	Character = C_3 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	Var_6  = Int;
}
{
#define MR_PROC_LABEL mercury__char__hash_1_f_0

	MR_Integer I;
	MR_Unsigned U;

	I = Var_6 ;
		{

    U = (MR_Unsigned) I;


		;}
#undef MR_PROC_LABEL
	Var_5  = U;
}
  H_4 = mercury__uint__hash_1_f_0(Var_5);
  return H_4;
}

MR_bool MR_CALL 
mercury__char__int_to_hex_char_2_p_0(
  MR_Integer Int_3,
  MR_Char * Char_4)
{
  MR_bool succeeded;

  succeeded = mercury__char__int_to_hex_digit_2_p_0(Int_3, Char_4);
  return succeeded;
}

MR_bool MR_CALL 
mercury__char__is_hex_digit_2_p_0(
  MR_Char Digit_3,
  MR_Integer * Int_4)
{
  MR_bool succeeded;

  succeeded = mercury__char__hex_digit_to_int_2_p_0(Digit_3, Int_4);
  return succeeded;
}

MR_Word MR_CALL 
mercury__char__char_to_doc_1_f_0(
  MR_Char C_3)
{
  MR_Word HeadVar__2_2;
  MR_String Var_4;

  Var_4 = mercury__term_io__quoted_char_1_f_0(C_3);
  {
    HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (Var_4));
  }
  return HeadVar__2_2;
}

MR_bool MR_CALL 
mercury__char__is_private_use_1_p_0(
  MR_Char Char_2)
{
  MR_bool succeeded;
  MR_Integer Int_3;

{
#define MR_PROC_LABEL mercury__char__is_private_use_1_p_0

	MR_Char Character;
	MR_Integer Int;

	Character = Char_2 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	Int_3  = Int;
}
  {
    MR_Integer Var_5;

    succeeded = ((MR_Integer) 57344 <= Int_3);
    if (succeeded)
    {
      Var_5 = (MR_Integer) 63743;
      succeeded = (Int_3 <= Var_5);
    }
  }
  if (!(succeeded))
  {
    {
      MR_Integer Var_7;

      succeeded = ((MR_Integer) 983040 <= Int_3);
      if (succeeded)
      {
        Var_7 = (MR_Integer) 1048573;
        succeeded = (Int_3 <= Var_7);
      }
    }
    if (!(succeeded))
    {
      MR_Integer Var_9;

      succeeded = ((MR_Integer) 1048576 <= Int_3);
      if (succeeded)
      {
        Var_9 = (MR_Integer) 1114109;
        succeeded = (Int_3 <= Var_9);
      }
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__char__is_paragraph_separator_1_p_0(
  MR_Char Char_2)
{
  MR_bool succeeded;
  MR_Integer Var_4;

{
#define MR_PROC_LABEL mercury__char__is_paragraph_separator_1_p_0

	MR_Char Character;
	MR_Integer Int;

	Character = Char_2 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	Var_4  = Int;
}
  succeeded = ((MR_Integer) 8233 == Var_4);
  return succeeded;
}

MR_bool MR_CALL 
mercury__char__is_line_separator_1_p_0(
  MR_Char Char_2)
{
  MR_bool succeeded;
  MR_Integer Var_4;

{
#define MR_PROC_LABEL mercury__char__is_line_separator_1_p_0

	MR_Char Character;
	MR_Integer Int;

	Character = Char_2 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	Var_4  = Int;
}
  succeeded = ((MR_Integer) 8232 == Var_4);
  return succeeded;
}

MR_bool MR_CALL 
mercury__char__is_space_separator_1_p_0(
  MR_Char Char_2)
{
  MR_bool succeeded;
  MR_Integer Int_3;

{
#define MR_PROC_LABEL mercury__char__is_space_separator_1_p_0

	MR_Char Character;
	MR_Integer Int;

	Character = Char_2 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	Int_3  = Int;
}
  switch (Int_3) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Integer) 32:
      succeeded = MR_TRUE;
      break;
    case (MR_Integer) 160:
      succeeded = MR_TRUE;
      break;
    case (MR_Integer) 5760:
      succeeded = MR_TRUE;
      break;
    case (MR_Integer) 8239:
      succeeded = MR_TRUE;
      break;
    case (MR_Integer) 8287:
      succeeded = MR_TRUE;
      break;
    case (MR_Integer) 12288:
      succeeded = MR_TRUE;
      break;
  }
  if (!(succeeded))
  {
    MR_Integer Var_5;

    succeeded = ((MR_Integer) 8192 <= Int_3);
    if (succeeded)
    {
      Var_5 = (MR_Integer) 8202;
      succeeded = (Int_3 <= Var_5);
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__char__is_control_1_p_0(
  MR_Char Char_2)
{
  MR_bool succeeded;
  MR_Integer Int_3;

{
#define MR_PROC_LABEL mercury__char__is_control_1_p_0

	MR_Char Character;
	MR_Integer Int;

	Character = Char_2 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	Int_3  = Int;
}
  {
    MR_Integer Var_5;

    succeeded = ((MR_Integer) 0 <= Int_3);
    if (succeeded)
    {
      Var_5 = (MR_Integer) 31;
      succeeded = (Int_3 <= Var_5);
    }
  }
  if (!(succeeded))
  {
    MR_Integer Var_7;

    succeeded = ((MR_Integer) 127 <= Int_3);
    if (succeeded)
    {
      Var_7 = (MR_Integer) 159;
      succeeded = (Int_3 <= Var_7);
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__char__is_noncharacter_1_p_0(
  MR_Char Char_2)
{
  MR_bool succeeded;
  MR_Integer Int_3;

{
#define MR_PROC_LABEL mercury__char__is_noncharacter_1_p_0

	MR_Char Character;
	MR_Integer Int;

	Character = Char_2 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	Int_3  = Int;
}
  {
    MR_Integer Var_5;

    succeeded = ((MR_Integer) 64976 <= Int_3);
    if (succeeded)
    {
      Var_5 = (MR_Integer) 65007;
      succeeded = (Int_3 <= Var_5);
    }
  }
  if (!(succeeded))
  {
    MR_Integer Var_6 = (Int_3 & (MR_Integer) 65534);

    succeeded = (Var_6 == (MR_Integer) 65534);
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__char__is_trailing_surrogate_1_p_0(
  MR_Char Char_2)
{
  MR_bool succeeded;
  MR_Integer Int_3;
  MR_Integer Var_5;

{
#define MR_PROC_LABEL mercury__char__is_trailing_surrogate_1_p_0

	MR_Char Character;
	MR_Integer Int;

	Character = Char_2 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	Int_3  = Int;
}
  succeeded = (Int_3 >= (MR_Integer) 56320);
  if (succeeded)
  {
    Var_5 = (MR_Integer) 57343;
    succeeded = (Int_3 <= Var_5);
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__char__is_leading_surrogate_1_p_0(
  MR_Char Char_2)
{
  MR_bool succeeded;
  MR_Integer Int_3;
  MR_Integer Var_5;

{
#define MR_PROC_LABEL mercury__char__is_leading_surrogate_1_p_0

	MR_Char Character;
	MR_Integer Int;

	Character = Char_2 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	Int_3  = Int;
}
  succeeded = (Int_3 >= (MR_Integer) 55296);
  if (succeeded)
  {
    Var_5 = (MR_Integer) 56319;
    succeeded = (Int_3 <= Var_5);
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__char__is_surrogate_1_p_0(
  MR_Char Char_2)
{
  MR_bool succeeded;
  MR_Integer Int_3;
  MR_Integer Var_5;

{
#define MR_PROC_LABEL mercury__char__is_surrogate_1_p_0

	MR_Char Character;
	MR_Integer Int;

	Character = Char_2 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	Int_3  = Int;
}
  succeeded = (Int_3 >= (MR_Integer) 55296);
  if (succeeded)
  {
    Var_5 = (MR_Integer) 57343;
    succeeded = (Int_3 <= Var_5);
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__char__to_utf16_uint16_2_p_0(
  MR_Char Char_3,
  MR_Word * CodeUnits_4)
{
  MR_bool succeeded;
  MR_Integer NumCodeUnits_5;
  uint16_t A_6;
  uint16_t B_7;
  MR_Integer Int_11;

{
#define MR_PROC_LABEL mercury__char__to_utf16_uint16_2_p_0

	MR_Char Character;
	MR_Integer Int;

	Character = Char_3 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	Int_11  = Int;
}
  succeeded = (Int_11 < (MR_Integer) 55296);
  if (succeeded)
  {
{
#define MR_PROC_LABEL mercury__char__to_utf16_uint16_2_p_0

	MR_Integer I;
	uint16_t U16;

	I = Int_11 ;
		{

    U16 = (uint16_t) I;


		;}
#undef MR_PROC_LABEL
	A_6  = U16;
}
    B_7 = UINT16_C(0);
    NumCodeUnits_5 = (MR_Integer) 1;
    succeeded = MR_TRUE;
  }
  else
  {
    succeeded = (Int_11 <= (MR_Integer) 57343);
    if (succeeded)
      succeeded = MR_FALSE;
    else
    {
      succeeded = (Int_11 <= (MR_Integer) 65535);
      if (succeeded)
      {
{
#define MR_PROC_LABEL mercury__char__to_utf16_uint16_2_p_0

	MR_Integer I;
	uint16_t U16;

	I = Int_11 ;
		{

    U16 = (uint16_t) I;


		;}
#undef MR_PROC_LABEL
	A_6  = U16;
}
        B_7 = UINT16_C(0);
        NumCodeUnits_5 = (MR_Integer) 1;
      }
      else
      {
        succeeded = (Int_11 <= (MR_Integer) 1114111);
        if (succeeded)
        {
          MR_Integer U_12 = (MR_Integer) ((MR_Unsigned) Int_11 - (MR_Unsigned) 65536);
          MR_Integer Var_18;
          MR_Integer Var_20;
          MR_Integer Var_22;
          MR_Integer Var_24;

          Var_20 = mercury__int__f_62_62_2_f_0(U_12, (MR_Integer) 10);
          Var_18 = ((MR_Integer) 55296 | Var_20);
{
#define MR_PROC_LABEL mercury__char__to_utf16_uint16_2_p_0

	MR_Integer I;
	uint16_t U16;

	I = Var_18 ;
		{

    U16 = (uint16_t) I;


		;}
#undef MR_PROC_LABEL
	A_6  = U16;
}
          Var_24 = (U_12 & (MR_Integer) 1023);
          Var_22 = ((MR_Integer) 56320 | Var_24);
{
#define MR_PROC_LABEL mercury__char__to_utf16_uint16_2_p_0

	MR_Integer I;
	uint16_t U16;

	I = Var_22 ;
		{

    U16 = (uint16_t) I;


		;}
#undef MR_PROC_LABEL
	B_7  = U16;
}
          NumCodeUnits_5 = (MR_Integer) 2;
        }
        else
          mercury__require__error_2_p_0((MR_String) "predicate \140char.to_utf16_code_units\'/4", (MR_String) "illegal code point");
      }
      succeeded = MR_TRUE;
    }
  }
  if (succeeded)
  {
    switch (NumCodeUnits_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *CodeUnits_4 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (MR_Word) (A_6));
          MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_9;

          {
            Var_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_9, 0) = ((MR_Box) (MR_Word) (B_7));
            MR_hl_field(1, Var_9, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *CodeUnits_4 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (MR_Word) (A_6));
            MR_hl_field(1, base, 1) = ((MR_Box) (Var_9));
          }
        }
        break;
    }
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__char__to_utf16_2_p_0(
  MR_Char Char_3,
  MR_Word * CodeUnits_4)
{
  MR_bool succeeded;
  MR_Integer NumCodeUnits_5;
  uint16_t A_6;
  uint16_t B_7;
  MR_Integer Int_14;

{
#define MR_PROC_LABEL mercury__char__to_utf16_2_p_0

	MR_Char Character;
	MR_Integer Int;

	Character = Char_3 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	Int_14  = Int;
}
  succeeded = (Int_14 < (MR_Integer) 55296);
  if (succeeded)
  {
{
#define MR_PROC_LABEL mercury__char__to_utf16_2_p_0

	MR_Integer I;
	uint16_t U16;

	I = Int_14 ;
		{

    U16 = (uint16_t) I;


		;}
#undef MR_PROC_LABEL
	A_6  = U16;
}
    B_7 = UINT16_C(0);
    NumCodeUnits_5 = (MR_Integer) 1;
    succeeded = MR_TRUE;
  }
  else
  {
    succeeded = (Int_14 <= (MR_Integer) 57343);
    if (succeeded)
      succeeded = MR_FALSE;
    else
    {
      succeeded = (Int_14 <= (MR_Integer) 65535);
      if (succeeded)
      {
{
#define MR_PROC_LABEL mercury__char__to_utf16_2_p_0

	MR_Integer I;
	uint16_t U16;

	I = Int_14 ;
		{

    U16 = (uint16_t) I;


		;}
#undef MR_PROC_LABEL
	A_6  = U16;
}
        B_7 = UINT16_C(0);
        NumCodeUnits_5 = (MR_Integer) 1;
      }
      else
      {
        succeeded = (Int_14 <= (MR_Integer) 1114111);
        if (succeeded)
        {
          MR_Integer U_15 = (MR_Integer) ((MR_Unsigned) Int_14 - (MR_Unsigned) 65536);
          MR_Integer Var_21;
          MR_Integer Var_23;
          MR_Integer Var_25;
          MR_Integer Var_27;

          Var_23 = mercury__int__f_62_62_2_f_0(U_15, (MR_Integer) 10);
          Var_21 = ((MR_Integer) 55296 | Var_23);
{
#define MR_PROC_LABEL mercury__char__to_utf16_2_p_0

	MR_Integer I;
	uint16_t U16;

	I = Var_21 ;
		{

    U16 = (uint16_t) I;


		;}
#undef MR_PROC_LABEL
	A_6  = U16;
}
          Var_27 = (U_15 & (MR_Integer) 1023);
          Var_25 = ((MR_Integer) 56320 | Var_27);
{
#define MR_PROC_LABEL mercury__char__to_utf16_2_p_0

	MR_Integer I;
	uint16_t U16;

	I = Var_25 ;
		{

    U16 = (uint16_t) I;


		;}
#undef MR_PROC_LABEL
	B_7  = U16;
}
          NumCodeUnits_5 = (MR_Integer) 2;
        }
        else
          mercury__require__error_2_p_0((MR_String) "predicate \140char.to_utf16_code_units\'/4", (MR_String) "illegal code point");
      }
      succeeded = MR_TRUE;
    }
  }
  if (succeeded)
  {
    switch (NumCodeUnits_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Integer Var_8;

{
#define MR_PROC_LABEL mercury__char__to_utf16_2_p_0

	uint16_t U16;
	MR_Integer I;

	U16 = A_6 ;
		{

    I = U16;


		;}
#undef MR_PROC_LABEL
	Var_8  = I;
}
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *CodeUnits_4 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Var_8));
            MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer Var_10;
          MR_Word Var_11;
          MR_Integer Var_12;

{
#define MR_PROC_LABEL mercury__char__to_utf16_2_p_0

	uint16_t U16;
	MR_Integer I;

	U16 = A_6 ;
		{

    I = U16;


		;}
#undef MR_PROC_LABEL
	Var_10  = I;
}
{
#define MR_PROC_LABEL mercury__char__to_utf16_2_p_0

	uint16_t U16;
	MR_Integer I;

	U16 = B_7 ;
		{

    I = U16;


		;}
#undef MR_PROC_LABEL
	Var_12  = I;
}
          {
            Var_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_11, 0) = ((MR_Box) (Var_12));
            MR_hl_field(1, Var_11, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *CodeUnits_4 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Var_10));
            MR_hl_field(1, base, 1) = ((MR_Box) (Var_11));
          }
        }
        break;
    }
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__char__to_utf8_uint8_2_p_0(
  MR_Char Char_3,
  MR_Word * CodeUnits_4)
{
  MR_bool succeeded;
  MR_Integer NumCodeUnits_5;
  uint8_t A_6;
  uint8_t B_7;
  uint8_t C_8;
  uint8_t D_9;

  succeeded = mercury__char__to_utf8_code_units_6_p_0(Char_3, &NumCodeUnits_5, &A_6, &B_7, &C_8, &D_9);
  if (succeeded)
  {
    switch (NumCodeUnits_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *CodeUnits_4 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (MR_Word) (A_6));
          MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_11;

          {
            Var_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_11, 0) = ((MR_Box) (MR_Word) (B_7));
            MR_hl_field(1, Var_11, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *CodeUnits_4 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (MR_Word) (A_6));
            MR_hl_field(1, base, 1) = ((MR_Box) (Var_11));
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word Var_13;
          MR_Word Var_14;

          {
            Var_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_14, 0) = ((MR_Box) (MR_Word) (C_8));
            MR_hl_field(1, Var_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_13, 0) = ((MR_Box) (MR_Word) (B_7));
            MR_hl_field(1, Var_13, 1) = ((MR_Box) (Var_14));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *CodeUnits_4 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (MR_Word) (A_6));
            MR_hl_field(1, base, 1) = ((MR_Box) (Var_13));
          }
        }
        break;
      case (MR_Integer) 4:
        {
          MR_Word Var_16;
          MR_Word Var_17;
          MR_Word Var_18;

          {
            Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_18, 0) = ((MR_Box) (MR_Word) (D_9));
            MR_hl_field(1, Var_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_17, 0) = ((MR_Box) (MR_Word) (C_8));
            MR_hl_field(1, Var_17, 1) = ((MR_Box) (Var_18));
          }
          {
            Var_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_16, 0) = ((MR_Box) (MR_Word) (B_7));
            MR_hl_field(1, Var_16, 1) = ((MR_Box) (Var_17));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *CodeUnits_4 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (MR_Word) (A_6));
            MR_hl_field(1, base, 1) = ((MR_Box) (Var_16));
          }
        }
        break;
    }
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__char__to_utf8_2_p_0(
  MR_Char Char_3,
  MR_Word * CodeUnits_4)
{
  MR_bool succeeded;
  MR_Integer NumCodeUnits_5;
  uint8_t A_6;
  uint8_t B_7;
  uint8_t C_8;
  uint8_t D_9;

  succeeded = mercury__char__to_utf8_code_units_6_p_0(Char_3, &NumCodeUnits_5, &A_6, &B_7, &C_8, &D_9);
  if (succeeded)
  {
    switch (NumCodeUnits_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Integer Var_10;

{
#define MR_PROC_LABEL mercury__char__to_utf8_2_p_0

	uint8_t U8;
	MR_Integer I;

	U8 = A_6 ;
		{

    I = U8;


		;}
#undef MR_PROC_LABEL
	Var_10  = I;
}
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *CodeUnits_4 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Var_10));
            MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer Var_12;
          MR_Word Var_13;
          MR_Integer Var_14;

{
#define MR_PROC_LABEL mercury__char__to_utf8_2_p_0

	uint8_t U8;
	MR_Integer I;

	U8 = A_6 ;
		{

    I = U8;


		;}
#undef MR_PROC_LABEL
	Var_12  = I;
}
{
#define MR_PROC_LABEL mercury__char__to_utf8_2_p_0

	uint8_t U8;
	MR_Integer I;

	U8 = B_7 ;
		{

    I = U8;


		;}
#undef MR_PROC_LABEL
	Var_14  = I;
}
          {
            Var_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_13, 0) = ((MR_Box) (Var_14));
            MR_hl_field(1, Var_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *CodeUnits_4 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Var_12));
            MR_hl_field(1, base, 1) = ((MR_Box) (Var_13));
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Integer Var_16;
          MR_Word Var_17;
          MR_Integer Var_18;
          MR_Word Var_19;
          MR_Integer Var_20;

{
#define MR_PROC_LABEL mercury__char__to_utf8_2_p_0

	uint8_t U8;
	MR_Integer I;

	U8 = A_6 ;
		{

    I = U8;


		;}
#undef MR_PROC_LABEL
	Var_16  = I;
}
{
#define MR_PROC_LABEL mercury__char__to_utf8_2_p_0

	uint8_t U8;
	MR_Integer I;

	U8 = B_7 ;
		{

    I = U8;


		;}
#undef MR_PROC_LABEL
	Var_18  = I;
}
{
#define MR_PROC_LABEL mercury__char__to_utf8_2_p_0

	uint8_t U8;
	MR_Integer I;

	U8 = C_8 ;
		{

    I = U8;


		;}
#undef MR_PROC_LABEL
	Var_20  = I;
}
          {
            Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_19, 0) = ((MR_Box) (Var_20));
            MR_hl_field(1, Var_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_17, 0) = ((MR_Box) (Var_18));
            MR_hl_field(1, Var_17, 1) = ((MR_Box) (Var_19));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *CodeUnits_4 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Var_16));
            MR_hl_field(1, base, 1) = ((MR_Box) (Var_17));
          }
        }
        break;
      case (MR_Integer) 4:
        {
          MR_Integer Var_22;
          MR_Word Var_23;
          MR_Integer Var_24;
          MR_Word Var_25;
          MR_Integer Var_26;
          MR_Word Var_27;
          MR_Integer Var_28;

{
#define MR_PROC_LABEL mercury__char__to_utf8_2_p_0

	uint8_t U8;
	MR_Integer I;

	U8 = A_6 ;
		{

    I = U8;


		;}
#undef MR_PROC_LABEL
	Var_22  = I;
}
{
#define MR_PROC_LABEL mercury__char__to_utf8_2_p_0

	uint8_t U8;
	MR_Integer I;

	U8 = B_7 ;
		{

    I = U8;


		;}
#undef MR_PROC_LABEL
	Var_24  = I;
}
{
#define MR_PROC_LABEL mercury__char__to_utf8_2_p_0

	uint8_t U8;
	MR_Integer I;

	U8 = C_8 ;
		{

    I = U8;


		;}
#undef MR_PROC_LABEL
	Var_26  = I;
}
{
#define MR_PROC_LABEL mercury__char__to_utf8_2_p_0

	uint8_t U8;
	MR_Integer I;

	U8 = D_9 ;
		{

    I = U8;


		;}
#undef MR_PROC_LABEL
	Var_28  = I;
}
          {
            Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_27, 0) = ((MR_Box) (Var_28));
            MR_hl_field(1, Var_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_25, 0) = ((MR_Box) (Var_26));
            MR_hl_field(1, Var_25, 1) = ((MR_Box) (Var_27));
          }
          {
            Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_23, 0) = ((MR_Box) (Var_24));
            MR_hl_field(1, Var_23, 1) = ((MR_Box) (Var_25));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *CodeUnits_4 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Var_22));
            MR_hl_field(1, base, 1) = ((MR_Box) (Var_23));
          }
        }
        break;
    }
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
mercury__char__to_utf8_code_units_6_p_0(
  MR_Char Char_7,
  MR_Integer * NumCodeUnits_8,
  uint8_t * A_9,
  uint8_t * B_10,
  uint8_t * C_11,
  uint8_t * D_12)
{
  MR_bool succeeded;
  MR_Integer Int_13;

{
#define MR_PROC_LABEL mercury__char__to_utf8_code_units_6_p_0

	MR_Char Character;
	MR_Integer Int;

	Character = Char_7 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	Int_13  = Int;
}
  succeeded = (Int_13 <= (MR_Integer) 127);
  if (succeeded)
  {
{
#define MR_PROC_LABEL mercury__char__to_utf8_code_units_6_p_0

	MR_Integer I;
	uint8_t U8;

	I = Int_13 ;
		{

    U8 = (uint8_t) I;


		;}
#undef MR_PROC_LABEL
	*A_9  = U8;
}
    *B_10 = UINT8_C(0);
    *C_11 = UINT8_C(0);
    *D_12 = UINT8_C(0);
    *NumCodeUnits_8 = (MR_Integer) 1;
    succeeded = MR_TRUE;
  }
  else
  {
    succeeded = (Int_13 <= (MR_Integer) 2047);
    if (succeeded)
    {
      MR_Integer Var_16;
      MR_Integer Var_18;
      MR_Integer Var_19;
      MR_Integer Var_22;
      MR_Integer Var_24;

      Var_19 = mercury__int__f_62_62_2_f_0(Int_13, (MR_Integer) 6);
      Var_18 = (Var_19 & (MR_Integer) 31);
      Var_16 = ((MR_Integer) 192 | Var_18);
{
#define MR_PROC_LABEL mercury__char__to_utf8_code_units_6_p_0

	MR_Integer I;
	uint8_t U8;

	I = Var_16 ;
		{

    U8 = (uint8_t) I;


		;}
#undef MR_PROC_LABEL
	*A_9  = U8;
}
      Var_24 = (Int_13 & (MR_Integer) 63);
      Var_22 = ((MR_Integer) 128 | Var_24);
{
#define MR_PROC_LABEL mercury__char__to_utf8_code_units_6_p_0

	MR_Integer I;
	uint8_t U8;

	I = Var_22 ;
		{

    U8 = (uint8_t) I;


		;}
#undef MR_PROC_LABEL
	*B_10  = U8;
}
      *C_11 = UINT8_C(0);
      *D_12 = UINT8_C(0);
      *NumCodeUnits_8 = (MR_Integer) 2;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (Int_13 <= (MR_Integer) 65535);
      if (succeeded)
      {
        MR_Integer Var_27;
        MR_Integer Var_28;
        MR_Integer Var_29;
        MR_Integer Var_30;
        MR_Integer Var_31;
        MR_Integer Var_32;
        MR_Integer Var_33;
        MR_Integer Var_34;
        MR_Integer Var_35;
        MR_Integer Var_36;
        MR_Integer Var_37;
        MR_Integer Var_38;
        MR_Integer Var_39;
        MR_Integer Var_40;
        MR_Integer Var_41;
        MR_Integer Var_42;
        MR_Integer Int_68;
        MR_Integer Var_70;

{
#define MR_PROC_LABEL mercury__char__to_utf8_code_units_6_p_0

	MR_Char Character;
	MR_Integer Int;

	Character = Char_7 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	Int_68  = Int;
}
        succeeded = (Int_68 >= (MR_Integer) 55296);
        if (succeeded)
        {
          Var_70 = (MR_Integer) 57343;
          succeeded = (Int_68 <= Var_70);
        }
        succeeded = !(succeeded);
        if (succeeded)
        {
          Var_28 = (MR_Integer) 224;
          Var_31 = (MR_Integer) 12;
          Var_30 = mercury__int__f_62_62_2_f_0(Int_13, Var_31);
          Var_32 = (MR_Integer) 15;
          Var_29 = (Var_30 & Var_32);
          Var_27 = (Var_28 | Var_29);
{
#define MR_PROC_LABEL mercury__char__to_utf8_code_units_6_p_0

	MR_Integer I;
	uint8_t U8;

	I = Var_27 ;
		{

    U8 = (uint8_t) I;


		;}
#undef MR_PROC_LABEL
	*A_9  = U8;
}
          Var_34 = (MR_Integer) 128;
          Var_37 = (MR_Integer) 6;
          Var_36 = mercury__int__f_62_62_2_f_0(Int_13, Var_37);
          Var_38 = (MR_Integer) 63;
          Var_35 = (Var_36 & Var_38);
          Var_33 = (Var_34 | Var_35);
{
#define MR_PROC_LABEL mercury__char__to_utf8_code_units_6_p_0

	MR_Integer I;
	uint8_t U8;

	I = Var_33 ;
		{

    U8 = (uint8_t) I;


		;}
#undef MR_PROC_LABEL
	*B_10  = U8;
}
          Var_40 = (MR_Integer) 128;
          Var_42 = (MR_Integer) 63;
          Var_41 = (Int_13 & Var_42);
          Var_39 = (Var_40 | Var_41);
{
#define MR_PROC_LABEL mercury__char__to_utf8_code_units_6_p_0

	MR_Integer I;
	uint8_t U8;

	I = Var_39 ;
		{

    U8 = (uint8_t) I;


		;}
#undef MR_PROC_LABEL
	*C_11  = U8;
}
          *D_12 = UINT8_C(0);
          *NumCodeUnits_8 = (MR_Integer) 3;
          succeeded = MR_TRUE;
        }
      }
      else
      {
        succeeded = (Int_13 <= (MR_Integer) 1114111);
        if (succeeded)
        {
          MR_Integer Var_44;
          MR_Integer Var_46;
          MR_Integer Var_47;
          MR_Integer Var_50;
          MR_Integer Var_52;
          MR_Integer Var_53;
          MR_Integer Var_56;
          MR_Integer Var_58;
          MR_Integer Var_59;
          MR_Integer Var_62;
          MR_Integer Var_64;

          Var_47 = mercury__int__f_62_62_2_f_0(Int_13, (MR_Integer) 18);
          Var_46 = (Var_47 & (MR_Integer) 7);
          Var_44 = ((MR_Integer) 240 | Var_46);
{
#define MR_PROC_LABEL mercury__char__to_utf8_code_units_6_p_0

	MR_Integer I;
	uint8_t U8;

	I = Var_44 ;
		{

    U8 = (uint8_t) I;


		;}
#undef MR_PROC_LABEL
	*A_9  = U8;
}
          Var_53 = mercury__int__f_62_62_2_f_0(Int_13, (MR_Integer) 12);
          Var_52 = (Var_53 & (MR_Integer) 63);
          Var_50 = ((MR_Integer) 128 | Var_52);
{
#define MR_PROC_LABEL mercury__char__to_utf8_code_units_6_p_0

	MR_Integer I;
	uint8_t U8;

	I = Var_50 ;
		{

    U8 = (uint8_t) I;


		;}
#undef MR_PROC_LABEL
	*B_10  = U8;
}
          Var_59 = mercury__int__f_62_62_2_f_0(Int_13, (MR_Integer) 6);
          Var_58 = (Var_59 & (MR_Integer) 63);
          Var_56 = ((MR_Integer) 128 | Var_58);
{
#define MR_PROC_LABEL mercury__char__to_utf8_code_units_6_p_0

	MR_Integer I;
	uint8_t U8;

	I = Var_56 ;
		{

    U8 = (uint8_t) I;


		;}
#undef MR_PROC_LABEL
	*C_11  = U8;
}
          Var_64 = (Int_13 & (MR_Integer) 63);
          Var_62 = ((MR_Integer) 128 | Var_64);
{
#define MR_PROC_LABEL mercury__char__to_utf8_code_units_6_p_0

	MR_Integer I;
	uint8_t U8;

	I = Var_62 ;
		{

    U8 = (uint8_t) I;


		;}
#undef MR_PROC_LABEL
	*D_12  = U8;
}
          *NumCodeUnits_8 = (MR_Integer) 4;
        }
        else
          mercury__require__error_2_p_0((MR_String) "predicate \140char.to_utf8_code_units\'/6", (MR_String) "illegal code point");
        succeeded = MR_TRUE;
      }
    }
  }
  return succeeded;
}

MR_Char MR_CALL 
mercury__char__det_base_int_to_digit_2_f_0(
  MR_Integer Base_4,
  MR_Integer Int_5)
{
  MR_bool succeeded;
  MR_Char Digit_6;
  MR_Char DigitPrime_7;

  succeeded = mercury__char__base_int_to_digit_3_p_0(Base_4, Int_5, &DigitPrime_7);
  if (succeeded)
    Digit_6 = DigitPrime_7;
  else
    mercury__require__error_2_p_0((MR_String) "function \140char.det_base_int_to_digit\'/2", (MR_String) "char.base_int_to_digit failed");
  return Digit_6;
}

MR_bool MR_CALL 
mercury__char__base_int_to_digit_3_p_0(
  MR_Integer Base_4,
  MR_Integer Int_5,
  MR_Char * Digit_6)
{
  MR_bool succeeded = ((MR_Integer) 1 < Base_4);
  MR_Integer Var_8;

  if (succeeded)
  {
    Var_8 = (MR_Integer) 37;
    succeeded = (Base_4 < Var_8);
  }
  if (succeeded)
  {
    succeeded = (Int_5 < Base_4);
    if (succeeded)
      succeeded = mercury__char__int_to_extended_digit_2_p_0(Int_5, Digit_6);
  }
  else
  {
    mercury__require__error_2_p_0((MR_String) "predicate \140char.base_int_to_digit\'/3", (MR_String) "invalid base");
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__char__int_to_extended_digit_2_p_0(
  MR_Integer HeadVar__1_1,
  MR_Char * HeadVar__2_2)
{
  MR_bool succeeded;

  if ((((MR_Unsigned) HeadVar__1_1) <= ((MR_Unsigned) 35)))
  {
    *HeadVar__2_2 = ((&mercury__char_vector_common_4[86 + HeadVar__1_1]))->mercury__char__vector_common_type_4_0__vct_4_f_0;
    succeeded = MR_TRUE;
  }
  else
    succeeded = MR_FALSE;
  return succeeded;
}

MR_Char MR_CALL 
mercury__char__det_int_to_hex_digit_1_f_0(
  MR_Integer Int_3)
{
  MR_bool succeeded;
  MR_Char Digit_4;
  MR_Char DigitPrime_5;

  succeeded = mercury__char__int_to_hex_digit_2_p_0(Int_3, &DigitPrime_5);
  if (succeeded)
    Digit_4 = DigitPrime_5;
  else
    mercury__require__error_2_p_0((MR_String) "function \140char.det_int_to_hex_digit\'/1", (MR_String) "char.int_to_hex_digit failed");
  return Digit_4;
}

MR_bool MR_CALL 
mercury__char__int_to_hex_digit_2_p_0(
  MR_Integer HeadVar__1_1,
  MR_Char * HeadVar__2_2)
{
  MR_bool succeeded;

  if ((((MR_Unsigned) HeadVar__1_1) <= ((MR_Unsigned) 15)))
  {
    *HeadVar__2_2 = ((&mercury__char_vector_common_4[70 + HeadVar__1_1]))->mercury__char__vector_common_type_4_0__vct_4_f_0;
    succeeded = MR_TRUE;
  }
  else
    succeeded = MR_FALSE;
  return succeeded;
}

MR_Char MR_CALL 
mercury__char__det_int_to_decimal_digit_1_f_0(
  MR_Integer Int_3)
{
  MR_bool succeeded;
  MR_Char Digit_4;
  MR_Char DigitPrime_5;

  succeeded = mercury__char__int_to_decimal_digit_2_p_0(Int_3, &DigitPrime_5);
  if (succeeded)
    Digit_4 = DigitPrime_5;
  else
    mercury__require__error_2_p_0((MR_String) "function \140char.det_int_to_decimal_digit\'/1", (MR_String) "char.int_to_decimal_digit failed");
  return Digit_4;
}

MR_bool MR_CALL 
mercury__char__int_to_decimal_digit_2_p_0(
  MR_Integer HeadVar__1_1,
  MR_Char * HeadVar__2_2)
{
  MR_bool succeeded;

  if ((((MR_Unsigned) HeadVar__1_1) <= ((MR_Unsigned) 9)))
  {
    *HeadVar__2_2 = ((&mercury__char_vector_common_4[60 + HeadVar__1_1]))->mercury__char__vector_common_type_4_0__vct_4_f_0;
    succeeded = MR_TRUE;
  }
  else
    succeeded = MR_FALSE;
  return succeeded;
}

MR_Char MR_CALL 
mercury__char__det_int_to_octal_digit_1_f_0(
  MR_Integer Int_3)
{
  MR_bool succeeded;
  MR_Char Digit_4;
  MR_Char DigitPrime_5;

  succeeded = mercury__char__int_to_octal_digit_2_p_0(Int_3, &DigitPrime_5);
  if (succeeded)
    Digit_4 = DigitPrime_5;
  else
    mercury__require__error_2_p_0((MR_String) "function \140char.det_int_to_octal_digit\'/1", (MR_String) "char.int_to_octal_digit failed");
  return Digit_4;
}

MR_bool MR_CALL 
mercury__char__int_to_octal_digit_2_p_0(
  MR_Integer HeadVar__1_1,
  MR_Char * HeadVar__2_2)
{
  MR_bool succeeded;

  if ((((MR_Unsigned) HeadVar__1_1) <= ((MR_Unsigned) 7)))
  {
    *HeadVar__2_2 = ((&mercury__char_vector_common_4[52 + HeadVar__1_1]))->mercury__char__vector_common_type_4_0__vct_4_f_0;
    succeeded = MR_TRUE;
  }
  else
    succeeded = MR_FALSE;
  return succeeded;
}

MR_Char MR_CALL 
mercury__char__det_int_to_binary_digit_1_f_0(
  MR_Integer Int_3)
{
  MR_bool succeeded;
  MR_Char Digit_4;
  MR_Char DigitPrime_5;

  switch (Int_3) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Integer) 0:
      {
        DigitPrime_5 = (MR_Char) 48;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Integer) 1:
      {
        DigitPrime_5 = (MR_Char) 49;
        succeeded = MR_TRUE;
      }
      break;
  }
  if (succeeded)
    Digit_4 = DigitPrime_5;
  else
    mercury__require__error_2_p_0((MR_String) "function \140char.det_int_to_binary_digit\'/1", (MR_String) "char.int_to_binary_digit failed");
  return Digit_4;
}

MR_bool MR_CALL 
mercury__char__int_to_binary_digit_2_p_0(
  MR_Integer HeadVar__1_1,
  MR_Char * HeadVar__2_2)
{
  MR_bool succeeded;

  switch (HeadVar__1_1) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Integer) 0:
      {
        *HeadVar__2_2 = (MR_Char) 48;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Integer) 1:
      {
        *HeadVar__2_2 = (MR_Char) 49;
        succeeded = MR_TRUE;
      }
      break;
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__char__unsafe_base_digit_to_int_3_p_0(
  MR_Integer Base_4,
  MR_Char DigitStr0_5,
  MR_Integer * Int_6)
{
  MR_bool succeeded;
  MR_Char DigitStr_8;
  MR_Char UpperStr_7;

  succeeded = mercury__char__lower_upper_2_p_0(DigitStr0_5, &UpperStr_7);
  if (succeeded)
    DigitStr_8 = UpperStr_7;
  else
    DigitStr_8 = DigitStr0_5;
  succeeded = mercury__char__int_to_extended_digit_2_p_1(Int_6, DigitStr_8);
  if (succeeded)
    succeeded = (*Int_6 < Base_4);
  return succeeded;
}

MR_Integer MR_CALL 
mercury__char__det_base_digit_to_int_2_f_0(
  MR_Integer Base_4,
  MR_Char DigitStr_5)
{
  MR_bool succeeded;
  MR_Integer Int_6;
  MR_Integer IntPrime_7;

  succeeded = mercury__char__base_digit_to_int_3_p_0(Base_4, DigitStr_5, &IntPrime_7);
  if (succeeded)
    Int_6 = IntPrime_7;
  else
    mercury__require__error_2_p_0((MR_String) "function \140char.det_base_digit_to_int\'/2", (MR_String) "char.base_digit_to_int failed");
  return Int_6;
}

MR_Integer MR_CALL 
mercury__char__det_hex_digit_to_int_1_f_0(
  MR_Char DigitStr_3)
{
  MR_bool succeeded;
  MR_Integer Int_4;
  MR_Integer IntPrime_5;

  succeeded = mercury__char__hex_digit_to_int_2_p_0(DigitStr_3, &IntPrime_5);
  if (succeeded)
    Int_4 = IntPrime_5;
  else
    mercury__require__error_2_p_0((MR_String) "function \140char.det_hex_digit_to_int\'/1", (MR_String) "char.hex_digit_to_int failed");
  return Int_4;
}

MR_bool MR_CALL 
mercury__char__hex_digit_to_int_2_p_0(
  MR_Char HeadVar__1_1,
  MR_Integer * HeadVar__2_2)
{
  MR_bool succeeded;

  if ((((MR_Unsigned) ((MR_Integer) ((MR_Unsigned) HeadVar__1_1 - (MR_Unsigned) 48))) <= ((MR_Unsigned) 54)))
    if ((((mercury__char_scalar_common_6[0])[(((MR_Integer) ((MR_Unsigned) HeadVar__1_1 - (MR_Unsigned) 48)) >> 5)]) & (((MR_Integer) 1 << ((((MR_Integer) ((MR_Unsigned) HeadVar__1_1 - (MR_Unsigned) 48)) & (MR_Integer) 31))))))
    {
      *HeadVar__2_2 = ((&mercury__char_vector_common_7[61 + (MR_Integer) ((MR_Unsigned) HeadVar__1_1 - (MR_Unsigned) 48)]))->mercury__char__vector_common_type_7_0__vct_7_f_0;
      succeeded = MR_TRUE;
    }
    else
      succeeded = MR_FALSE;
  else
    succeeded = MR_FALSE;
  return succeeded;
}

MR_Integer MR_CALL 
mercury__char__det_decimal_digit_to_int_1_f_0(
  MR_Char Digit_3)
{
  MR_bool succeeded;
  MR_Integer Int_4;
  MR_Integer IntPrime_5;

  succeeded = mercury__char__decimal_digit_to_int_2_p_0(Digit_3, &IntPrime_5);
  if (succeeded)
    Int_4 = IntPrime_5;
  else
    mercury__require__error_2_p_0((MR_String) "function \140char.det_decimal_digit_to_int\'/1", (MR_String) "char.decimal_digit_to_int failed");
  return Int_4;
}

MR_bool MR_CALL 
mercury__char__decimal_digit_to_int_2_p_0(
  MR_Char HeadVar__1_1,
  MR_Integer * HeadVar__2_2)
{
  MR_bool succeeded;

  if ((((MR_Unsigned) ((MR_Integer) ((MR_Unsigned) HeadVar__1_1 - (MR_Unsigned) 48))) <= ((MR_Unsigned) 9)))
  {
    *HeadVar__2_2 = ((&mercury__char_vector_common_7[51 + (MR_Integer) ((MR_Unsigned) HeadVar__1_1 - (MR_Unsigned) 48)]))->mercury__char__vector_common_type_7_0__vct_7_f_0;
    succeeded = MR_TRUE;
  }
  else
    succeeded = MR_FALSE;
  return succeeded;
}

MR_Integer MR_CALL 
mercury__char__det_octal_digit_to_int_1_f_0(
  MR_Char Digit_3)
{
  MR_bool succeeded;
  MR_Integer Int_4;
  MR_Integer IntPrime_5;

  succeeded = mercury__char__octal_digit_to_int_2_p_0(Digit_3, &IntPrime_5);
  if (succeeded)
    Int_4 = IntPrime_5;
  else
    mercury__require__error_2_p_0((MR_String) "function \140char.det_octal_digit_to_int\'/1", (MR_String) "char.octal_digit_to_int failed");
  return Int_4;
}

MR_bool MR_CALL 
mercury__char__octal_digit_to_int_2_p_0(
  MR_Char HeadVar__1_1,
  MR_Integer * HeadVar__2_2)
{
  MR_bool succeeded;

  if ((((MR_Unsigned) ((MR_Integer) ((MR_Unsigned) HeadVar__1_1 - (MR_Unsigned) 48))) <= ((MR_Unsigned) 7)))
  {
    *HeadVar__2_2 = ((&mercury__char_vector_common_7[43 + (MR_Integer) ((MR_Unsigned) HeadVar__1_1 - (MR_Unsigned) 48)]))->mercury__char__vector_common_type_7_0__vct_7_f_0;
    succeeded = MR_TRUE;
  }
  else
    succeeded = MR_FALSE;
  return succeeded;
}

MR_Integer MR_CALL 
mercury__char__det_binary_digit_to_int_1_f_0(
  MR_Char Digit_3)
{
  MR_bool succeeded;
  MR_Integer Int_4;
  MR_Integer IntPrime_5;

  switch (Digit_3) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Char) 48:
      {
        IntPrime_5 = (MR_Integer) 0;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 49:
      {
        IntPrime_5 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      break;
  }
  if (succeeded)
    Int_4 = IntPrime_5;
  else
    mercury__require__error_2_p_0((MR_String) "function \140char.det_binary_digit_to_int\'/1", (MR_String) "char.binary_digit_to_int failed");
  return Int_4;
}

MR_bool MR_CALL 
mercury__char__binary_digit_to_int_2_p_0(
  MR_Char HeadVar__1_1,
  MR_Integer * HeadVar__2_2)
{
  MR_bool succeeded;

  switch (HeadVar__1_1) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Char) 48:
      {
        *HeadVar__2_2 = (MR_Integer) 0;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 49:
      {
        *HeadVar__2_2 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      break;
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__char__is_base_digit_2_p_0(
  MR_Integer Base_3,
  MR_Char Digit_4)
{
  MR_bool succeeded = ((MR_Integer) 2 <= Base_3);
  MR_Integer Var_7;

  if (succeeded)
  {
    Var_7 = (MR_Integer) 36;
    succeeded = (Base_3 <= Var_7);
  }
  if (succeeded)
  {
    MR_Integer _Int_5;

    succeeded = mercury__char__base_digit_to_int_3_p_0(Base_3, Digit_4, &_Int_5);
  }
  else
  {
    mercury__require__error_2_p_0((MR_String) "predicate \140char.is_base_digit\'/2", (MR_String) "invalid base");
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__char__base_digit_to_int_3_p_0(
  MR_Integer Base_4,
  MR_Char DigitStr_5,
  MR_Integer * Int_6)
{
  MR_bool succeeded = ((MR_Integer) 1 < Base_4);
  MR_Integer Var_8;

  if (succeeded)
  {
    Var_8 = (MR_Integer) 37;
    succeeded = (Base_4 < Var_8);
  }
  if (succeeded)
  {
    MR_Char DigitStr_12;
    MR_Char UpperStr_11;

    succeeded = mercury__char__lower_upper_2_p_0(DigitStr_5, &UpperStr_11);
    if (succeeded)
      DigitStr_12 = UpperStr_11;
    else
      DigitStr_12 = DigitStr_5;
    succeeded = mercury__char__int_to_extended_digit_2_p_1(Int_6, DigitStr_12);
    if (succeeded)
      succeeded = (*Int_6 < Base_4);
  }
  else
  {
    mercury__require__error_2_p_0((MR_String) "predicate \140char.base_digit_to_int\'/3", (MR_String) "base is not in the range 2 .. 36");
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__char__int_to_extended_digit_2_p_1(
  MR_Integer * HeadVar__1_1,
  MR_Char HeadVar__2_2)
{
  MR_bool succeeded;

  if ((((MR_Unsigned) ((MR_Integer) ((MR_Unsigned) HeadVar__2_2 - (MR_Unsigned) 48))) <= ((MR_Unsigned) 42)))
    if ((((mercury__char_scalar_common_6[1])[(((MR_Integer) ((MR_Unsigned) HeadVar__2_2 - (MR_Unsigned) 48)) >> 5)]) & (((MR_Integer) 1 << ((((MR_Integer) ((MR_Unsigned) HeadVar__2_2 - (MR_Unsigned) 48)) & (MR_Integer) 31))))))
    {
      *HeadVar__1_1 = ((&mercury__char_vector_common_7[0 + (MR_Integer) ((MR_Unsigned) HeadVar__2_2 - (MR_Unsigned) 48)]))->mercury__char__vector_common_type_7_0__vct_7_f_0;
      succeeded = MR_TRUE;
    }
    else
      succeeded = MR_FALSE;
  else
    succeeded = MR_FALSE;
  return succeeded;
}

MR_bool MR_CALL 
mercury__char__is_hex_digit_1_p_0(
  MR_Char HeadVar__1_1)
{
  MR_bool succeeded;

  if ((((MR_Unsigned) ((MR_Integer) ((MR_Unsigned) HeadVar__1_1 - (MR_Unsigned) 48))) <= ((MR_Unsigned) 54)))
    if ((((mercury__char_scalar_common_6[0])[(((MR_Integer) ((MR_Unsigned) HeadVar__1_1 - (MR_Unsigned) 48)) >> 5)]) & (((MR_Integer) 1 << ((((MR_Integer) ((MR_Unsigned) HeadVar__1_1 - (MR_Unsigned) 48)) & (MR_Integer) 31))))))
      succeeded = MR_TRUE;
    else
      succeeded = MR_FALSE;
  else
    succeeded = MR_FALSE;
  return succeeded;
}

MR_bool MR_CALL 
mercury__char__is_decimal_digit_1_p_0(
  MR_Char HeadVar__1_1)
{
  MR_bool succeeded;

  if ((((MR_Unsigned) ((MR_Integer) ((MR_Unsigned) HeadVar__1_1 - (MR_Unsigned) 48))) <= ((MR_Unsigned) 9)))
    succeeded = MR_TRUE;
  else
    succeeded = MR_FALSE;
  return succeeded;
}

MR_bool MR_CALL 
mercury__char__is_octal_digit_1_p_0(
  MR_Char HeadVar__1_1)
{
  MR_bool succeeded;

  if ((((MR_Unsigned) ((MR_Integer) ((MR_Unsigned) HeadVar__1_1 - (MR_Unsigned) 48))) <= ((MR_Unsigned) 7)))
    succeeded = MR_TRUE;
  else
    succeeded = MR_FALSE;
  return succeeded;
}

MR_bool MR_CALL 
mercury__char__is_binary_digit_1_p_0(
  MR_Char HeadVar__1_1)
{
  MR_bool succeeded;

  switch (HeadVar__1_1) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Char) 48:
      succeeded = MR_TRUE;
      break;
    case (MR_Char) 49:
      succeeded = MR_TRUE;
      break;
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__char__is_digit_1_p_0(
  MR_Char D_2)
{
  MR_bool succeeded;

  if ((((MR_Unsigned) ((MR_Integer) ((MR_Unsigned) D_2 - (MR_Unsigned) 48))) <= ((MR_Unsigned) 9)))
    succeeded = MR_TRUE;
  else
    succeeded = MR_FALSE;
  return succeeded;
}

MR_bool MR_CALL 
mercury__char__is_alnum_or_underscore_1_p_0(
  MR_Char Char_2)
{
  MR_bool succeeded;

  if ((((MR_Unsigned) ((MR_Integer) ((MR_Unsigned) Char_2 - (MR_Unsigned) 48))) <= ((MR_Unsigned) 74)))
    if ((((mercury__char_scalar_common_5[0])[(((MR_Integer) ((MR_Unsigned) Char_2 - (MR_Unsigned) 48)) >> 5)]) & (((MR_Integer) 1 << ((((MR_Integer) ((MR_Unsigned) Char_2 - (MR_Unsigned) 48)) & (MR_Integer) 31))))))
      succeeded = MR_TRUE;
    else
      succeeded = MR_FALSE;
  else
    succeeded = MR_FALSE;
  return succeeded;
}

MR_bool MR_CALL 
mercury__char__is_alpha_or_underscore_1_p_0(
  MR_Char Char_2)
{
  MR_bool succeeded = (Char_2 == (MR_Char) 95);

  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Char Var_3;

    succeeded = mercury__char__lower_upper_2_p_0(Char_2, &Var_3);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Char Var_4;

      succeeded = mercury__char__lower_upper_2_p_1(&Var_4, Char_2);
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__char__is_alnum_1_p_0(
  MR_Char Char_2)
{
  MR_bool succeeded;
  MR_Char Var_3;

  succeeded = mercury__char__lower_upper_2_p_0(Char_2, &Var_3);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Char Var_4;

    succeeded = mercury__char__lower_upper_2_p_1(&Var_4, Char_2);
  }
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if ((((MR_Unsigned) ((MR_Integer) ((MR_Unsigned) Char_2 - (MR_Unsigned) 48))) <= ((MR_Unsigned) 9)))
    succeeded = MR_TRUE;
  else
    succeeded = MR_FALSE;
  return succeeded;
}

MR_bool MR_CALL 
mercury__char__is_alpha_1_p_0(
  MR_Char Char_2)
{
  MR_bool succeeded;
  MR_Char Var_3;

  succeeded = mercury__char__lower_upper_2_p_0(Char_2, &Var_3);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Char Var_4;

    succeeded = mercury__char__lower_upper_2_p_1(&Var_4, Char_2);
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__char__is_whitespace_1_p_0(
  MR_Char HeadVar__1_1)
{
  MR_bool succeeded;

  switch (HeadVar__1_1) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Char) 9:
      succeeded = MR_TRUE;
      break;
    case (MR_Char) 10:
      succeeded = MR_TRUE;
      break;
    case (MR_Char) 11:
      succeeded = MR_TRUE;
      break;
    case (MR_Char) 12:
      succeeded = MR_TRUE;
      break;
    case (MR_Char) 13:
      succeeded = MR_TRUE;
      break;
    case (MR_Char) 32:
      succeeded = MR_TRUE;
      break;
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__char__is_ascii_1_p_0(
  MR_Char Char_2)
{
  MR_bool succeeded;
  MR_Integer Code_3;
  MR_Integer Var_5;

{
#define MR_PROC_LABEL mercury__char__is_ascii_1_p_0

	MR_Char Character;
	MR_Integer Int;

	Character = Char_2 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	Code_3  = Int;
}
  succeeded = (Code_3 >= (MR_Integer) 0);
  if (succeeded)
  {
    Var_5 = (MR_Integer) 127;
    succeeded = (Code_3 <= Var_5);
  }
  return succeeded;
}

void MR_CALL 
mercury__char__to_upper_2_p_0(
  MR_Char Char_3,
  MR_Char * Upper_4)
{
  MR_bool succeeded;
  MR_Char UpperChar_5;

  succeeded = mercury__char__lower_upper_2_p_0(Char_3, &UpperChar_5);
  if (succeeded)
    *Upper_4 = UpperChar_5;
  else
    *Upper_4 = Char_3;
}

MR_Char MR_CALL 
mercury__char__to_upper_1_f_0(
  MR_Char C1_3)
{
  MR_bool succeeded;
  MR_Char C2_4;
  MR_Char UpperChar_5;

  succeeded = mercury__char__lower_upper_2_p_0(C1_3, &UpperChar_5);
  if (succeeded)
    C2_4 = UpperChar_5;
  else
    C2_4 = C1_3;
  return C2_4;
}

void MR_CALL 
mercury__char__to_lower_2_p_0(
  MR_Char Char_3,
  MR_Char * Lower_4)
{
  MR_bool succeeded;
  MR_Char LowerChar_5;

  succeeded = mercury__char__lower_upper_2_p_1(&LowerChar_5, Char_3);
  if (succeeded)
    *Lower_4 = LowerChar_5;
  else
    *Lower_4 = Char_3;
}

MR_Char MR_CALL 
mercury__char__to_lower_1_f_0(
  MR_Char C1_3)
{
  MR_bool succeeded;
  MR_Char C2_4;
  MR_Char LowerChar_5;

  succeeded = mercury__char__lower_upper_2_p_1(&LowerChar_5, C1_3);
  if (succeeded)
    C2_4 = LowerChar_5;
  else
    C2_4 = C1_3;
  return C2_4;
}

MR_bool MR_CALL 
mercury__char__is_upper_1_p_0(
  MR_Char Upper_2)
{
  MR_bool succeeded;
  MR_Char Var_3;

  succeeded = mercury__char__lower_upper_2_p_1(&Var_3, Upper_2);
  return succeeded;
}

MR_bool MR_CALL 
mercury__char__lower_upper_2_p_1(
  MR_Char * HeadVar__1_1,
  MR_Char HeadVar__2_2)
{
  MR_bool succeeded;

  if ((((MR_Unsigned) ((MR_Integer) ((MR_Unsigned) HeadVar__2_2 - (MR_Unsigned) 65))) <= ((MR_Unsigned) 25)))
  {
    *HeadVar__1_1 = ((&mercury__char_vector_common_4[26 + (MR_Integer) ((MR_Unsigned) HeadVar__2_2 - (MR_Unsigned) 65)]))->mercury__char__vector_common_type_4_0__vct_4_f_0;
    succeeded = MR_TRUE;
  }
  else
    succeeded = MR_FALSE;
  return succeeded;
}

MR_bool MR_CALL 
mercury__char__is_lower_1_p_0(
  MR_Char Lower_2)
{
  MR_bool succeeded;
  MR_Char Var_3;

  succeeded = mercury__char__lower_upper_2_p_0(Lower_2, &Var_3);
  return succeeded;
}

MR_bool MR_CALL 
mercury__char__lower_upper_2_p_0(
  MR_Char HeadVar__1_1,
  MR_Char * HeadVar__2_2)
{
  MR_bool succeeded;

  if ((((MR_Unsigned) ((MR_Integer) ((MR_Unsigned) HeadVar__1_1 - (MR_Unsigned) 97))) <= ((MR_Unsigned) 25)))
  {
    *HeadVar__2_2 = ((&mercury__char_vector_common_4[0 + (MR_Integer) ((MR_Unsigned) HeadVar__1_1 - (MR_Unsigned) 97)]))->mercury__char__vector_common_type_4_0__vct_4_f_0;
    succeeded = MR_TRUE;
  }
  else
    succeeded = MR_FALSE;
  return succeeded;
}

void MR_CALL 
mercury__char__max_char_value_1_p_0(
  MR_Integer * Max_1)
{
{
#define MR_PROC_LABEL mercury__char__max_char_value_1_p_0

	MR_Integer Max;

		{

    Max = 0x10ffff;


		;}
#undef MR_PROC_LABEL
	*Max_1  = Max;
}
}

MR_Integer MR_CALL 
mercury__char__max_char_value_0_f_0(void)
{
  MR_Integer N_2;

{
#define MR_PROC_LABEL mercury__char__max_char_value_0_f_0

	MR_Integer Max;

		{

    Max = 0x10ffff;


		;}
#undef MR_PROC_LABEL
	N_2  = Max;
}
  return N_2;
}

void MR_CALL 
mercury__char__min_char_value_1_p_0(
  MR_Integer * HeadVar__1_1)
{
  *HeadVar__1_1 = (MR_Integer) 0;
}

MR_Integer MR_CALL 
mercury__char__min_char_value_0_f_0(void)
{
  return (MR_Integer) 0;
}

MR_Char MR_CALL 
mercury__char__det_from_uint_1_f_0(
  MR_Unsigned UInt_3)
{
  MR_bool succeeded;
  MR_Char Char_4;
  MR_Char CharPrime_5;

{
#define MR_PROC_LABEL mercury__char__det_from_uint_1_f_0

	MR_Unsigned UInt;
	MR_Char Character;
	MR_bool SUCCESS_INDICATOR;

	UInt = UInt_3 ;
		{

    Character = (MR_UnsignedChar) UInt;
    SUCCESS_INDICATOR = (UInt <= 0x10ffff);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	CharPrime_5  = Character;
	}
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
    Char_4 = CharPrime_5;
  else
    mercury__require__unexpected_2_p_0((MR_String) "function \140char.det_from_uint\'/1", (MR_String) "conversion failed");
  return Char_4;
}

MR_bool MR_CALL 
mercury__char__from_uint_2_p_0(
  MR_Unsigned UInt_1,
  MR_Char * Character_2)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__char__from_uint_2_p_0

	MR_Unsigned UInt;
	MR_Char Character;
	MR_bool SUCCESS_INDICATOR;

	UInt = UInt_1 ;
		{

    Character = (MR_UnsignedChar) UInt;
    SUCCESS_INDICATOR = (UInt <= 0x10ffff);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	*Character_2  = Character;
	}
succeeded  = SUCCESS_INDICATOR;
}
  return succeeded;
}

MR_Unsigned MR_CALL 
mercury__char__to_uint_1_f_0(
  MR_Char Char_3)
{
  MR_Unsigned UInt_4;
  MR_Integer Var_5;

{
#define MR_PROC_LABEL mercury__char__to_uint_1_f_0

	MR_Char Character;
	MR_Integer Int;

	Character = Char_3 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	Var_5  = Int;
}
{
#define MR_PROC_LABEL mercury__char__to_uint_1_f_0

	MR_Integer I;
	MR_Unsigned U;

	I = Var_5 ;
		{

    U = (MR_Unsigned) I;


		;}
#undef MR_PROC_LABEL
	UInt_4  = U;
}
  return UInt_4;
}

void MR_CALL 
mercury__char__det_from_int_2_p_0(
  MR_Integer Int_3,
  MR_Char * Char_4)
{
  MR_bool succeeded;
  MR_Char CharPrime_5;

{
#define MR_PROC_LABEL mercury__char__det_from_int_2_p_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Int = Int_3 ;
		{

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	CharPrime_5  = Character;
	}
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
    *Char_4 = CharPrime_5;
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140char.det_from_int\'/2", (MR_String) "conversion failed");
      return;
    }
}

MR_Char MR_CALL 
mercury__char__det_from_int_1_f_0(
  MR_Integer Int_3)
{
  MR_bool succeeded;
  MR_Char Char_4;
  MR_Char CharPrime_5;

{
#define MR_PROC_LABEL mercury__char__det_from_int_1_f_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Int = Int_3 ;
		{

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	CharPrime_5  = Character;
	}
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
    Char_4 = CharPrime_5;
  else
    mercury__require__unexpected_2_p_0((MR_String) "predicate \140char.det_from_int\'/2", (MR_String) "conversion failed");
  return Char_4;
}

MR_bool MR_CALL 
mercury__char__from_int_2_p_0(
  MR_Integer Int_3,
  MR_Char * Char_4)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__char__from_int_2_p_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Int = Int_3 ;
		{

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	*Char_4  = Character;
	}
succeeded  = SUCCESS_INDICATOR;
}
  return succeeded;
}

MR_bool MR_CALL 
mercury__char__to_int_2_p_2(
  MR_Char * Character_1,
  MR_Integer Int_2)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__char__to_int_2_p_2

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Int = Int_2 ;
		{

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	*Character_1  = Character;
	}
succeeded  = SUCCESS_INDICATOR;
}
  return succeeded;
}

MR_bool MR_CALL 
mercury__char__to_int_2_p_1(
  MR_Char Character_1,
  MR_Integer Int_2)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__char__to_int_2_p_1

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Character = Character_1 ;
	Int = Int_2 ;
		{

    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  return succeeded;
}

void MR_CALL 
mercury__char__to_int_2_p_0(
  MR_Char Character_1,
  MR_Integer * Int_2)
{
{
#define MR_PROC_LABEL mercury__char__to_int_2_p_0

	MR_Char Character;
	MR_Integer Int;

	Character = Character_1 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	*Int_2  = Int;
}
}

MR_Integer MR_CALL 
mercury__char__to_int_1_f_0(
  MR_Char C_3)
{
  MR_Integer N_4;

{
#define MR_PROC_LABEL mercury__char__to_int_1_f_0

	MR_Char Character;
	MR_Integer Int;

	Character = C_3 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	N_4  = Int;
}
  return N_4;
}

static MR_bool MR_CALL 
mercury__char____Unify____char_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__char____Unify____char_0_0(((MR_Char) (MR_Word) wrapper_arg_1), ((MR_Char) (MR_Word) wrapper_arg_2));
  return succeeded;
}

static void MR_CALL 
mercury__char____Compare____char_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__char____Compare____char_0_0(&conv0_HeadVar__1_1, ((MR_Char) (MR_Word) wrapper_arg_2), ((MR_Char) (MR_Word) wrapper_arg_3));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_Box MR_CALL 
mercury__char__ClassMethod_for_enum__uenum____character__arity0______enum__to_uint_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Unsigned conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = mercury__char__ClassMethod_for_enum__uenum____character__arity0______enum__to_uint_1_1_f_0(((MR_Char) (MR_Word) wrapper_arg_1));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
mercury__char__ClassMethod_for_enum__uenum____character__arity0______enum__from_uint_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Char conv0_HeadVar__2_2;

  succeeded = mercury__char__ClassMethod_for_enum__uenum____character__arity0______enum__from_uint_2_2_p_0(((MR_Unsigned) (wrapper_arg_1)), &conv0_HeadVar__2_2);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (MR_Word) (conv0_HeadVar__2_2));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_Box MR_CALL 
mercury__char__ClassMethod_for_enum__enum____character__arity0______enum__to_int_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Integer conv0_Y_4;

  conv0_Y_4 = mercury__char__ClassMethod_for_enum__enum____character__arity0______enum__to_int_1_1_f_0(((MR_Char) (MR_Word) wrapper_arg_1));
  wrapper_arg_2 = ((MR_Box) (conv0_Y_4));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
mercury__char__ClassMethod_for_enum__enum____character__arity0______enum__from_int_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Char conv0_Y_4;

  succeeded = mercury__char__ClassMethod_for_enum__enum____character__arity0______enum__from_int_1_1_f_0(((MR_Integer) (wrapper_arg_1)), &conv0_Y_4);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (MR_Word) (conv0_Y_4));
    succeeded = MR_TRUE;
  }
  return succeeded;
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

// :- end_module char.
