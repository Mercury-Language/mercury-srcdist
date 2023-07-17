/*
** Automatically generated from `library.m'
** by the Mercury compiler,
** version rotd-2023-07-17
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
#include "exception.mih"
#include "fat_sparse_bitset.mih"
#include "fatter_sparse_bitset.mih"
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
#include "list.mih"
#include "map.mih"
#include "math.mih"
#include "maybe.mih"
#include "mercury_term_lexer.mih"
#include "mercury_term_parser.mih"
#include "multi_map.mih"
#include "mutvar.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "par_builtin.mih"
#include "parsing_utils.mih"
#include "pprint.mih"
#include "pqueue.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "profiling_builtin.mih"
#include "prolog.mih"
#include "psqueue.mih"
#include "queue.mih"
#include "ra_list.mih"
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
#include "term_context.mih"
#include "term_conversion.mih"
#include "term_int.mih"
#include "term_io.mih"
#include "term_size_prof_builtin.mih"
#include "term_subst.mih"
#include "term_to_xml.mih"
#include "term_unify.mih"
#include "term_vars.mih"
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
#include "io.call_system.mih"
#include "io.environment.mih"
#include "io.error_util.mih"
#include "io.file.mih"
#include "io.primitives_read.mih"
#include "io.primitives_write.mih"
#include "io.stream_db.mih"
#include "io.stream_ops.mih"
#include "io.text_read.mih"
#include "random.sfc16.mih"
#include "random.sfc32.mih"
#include "random.sfc64.mih"
#include "random.system_rng.mih"
#include "stream.string_writer.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"




static const MR_EnumFunctorDesc mercury__library__library__enum_functor_desc_doc_or_undoc_0_0;

static const MR_EnumFunctorDesc mercury__library__library__enum_functor_desc_doc_or_undoc_0_1;

static const MR_EnumFunctorDescPtr mercury__library__library__enum_ordinal_ordered_doc_or_undoc_0[2];

static const MR_EnumFunctorDescPtr mercury__library__library__enum_name_ordered_doc_or_undoc_0[2];

static const MR_Integer mercury__library__library__functor_number_map_doc_or_undoc_0[2];

static void MR_CALL 
mercury__library__std_library_finalize_2_p_0(void);

static void MR_CALL 
mercury__library__std_library_init_2_p_0(void);

static MR_bool MR_CALL 
mercury__library____Unify____doc_or_undoc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__library____Compare____doc_or_undoc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box mercury__library_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__library_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__library_scalar_common_3[1][5];


struct mercury__library__vector_common_type_4_0_s {
  const MR_Word mercury__library__vector_common_type_4_0__vct_4_f_0;
};

static /* final */ const struct mercury__library__vector_common_type_4_0_s mercury__library_vector_common_4[147];

struct mercury__library__vector_common_type_5_0_s {
  const MR_String mercury__library__vector_common_type_5_0__vct_5_f_0;
  const MR_Word mercury__library__vector_common_type_5_0__vct_5_f_1;
};

static /* final */ const struct mercury__library__vector_common_type_5_0_s mercury__library_vector_common_5[147];



static /* final */ const MR_Box mercury__library_scalar_common_1[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__library_scalar_common_2[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__library_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__library_scalar_common_3[1][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__library_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};


static /* final */ const struct mercury__library__vector_common_type_4_0_s mercury__library_vector_common_4[147] = {
  /* row   0 */   { (MR_Integer) 0 },
  /* row   1 */   { (MR_Integer) 0 },
  /* row   2 */   { (MR_Integer) 0 },
  /* row   3 */   { (MR_Integer) 1 },
  /* row   4 */   { (MR_Integer) 0 },
  /* row   5 */   { (MR_Integer) 0 },
  /* row   6 */   { (MR_Integer) 0 },
  /* row   7 */   { (MR_Integer) 0 },
  /* row   8 */   { (MR_Integer) 0 },
  /* row   9 */   { (MR_Integer) 0 },
  /* row  10 */   { (MR_Integer) 0 },
  /* row  11 */   { (MR_Integer) 0 },
  /* row  12 */   { (MR_Integer) 0 },
  /* row  13 */   { (MR_Integer) 0 },
  /* row  14 */   { (MR_Integer) 0 },
  /* row  15 */   { (MR_Integer) 0 },
  /* row  16 */   { (MR_Integer) 0 },
  /* row  17 */   { (MR_Integer) 0 },
  /* row  18 */   { (MR_Integer) 0 },
  /* row  19 */   { (MR_Integer) 0 },
  /* row  20 */   { (MR_Integer) 0 },
  /* row  21 */   { (MR_Integer) 0 },
  /* row  22 */   { (MR_Integer) 0 },
  /* row  23 */   { (MR_Integer) 0 },
  /* row  24 */   { (MR_Integer) 0 },
  /* row  25 */   { (MR_Integer) 0 },
  /* row  26 */   { (MR_Integer) 0 },
  /* row  27 */   { (MR_Integer) 0 },
  /* row  28 */   { (MR_Integer) 0 },
  /* row  29 */   { (MR_Integer) 0 },
  /* row  30 */   { (MR_Integer) 0 },
  /* row  31 */   { (MR_Integer) 0 },
  /* row  32 */   { (MR_Integer) 0 },
  /* row  33 */   { (MR_Integer) 0 },
  /* row  34 */   { (MR_Integer) 0 },
  /* row  35 */   { (MR_Integer) 0 },
  /* row  36 */   { (MR_Integer) 0 },
  /* row  37 */   { (MR_Integer) 0 },
  /* row  38 */   { (MR_Integer) 0 },
  /* row  39 */   { (MR_Integer) 0 },
  /* row  40 */   { (MR_Integer) 0 },
  /* row  41 */   { (MR_Integer) 0 },
  /* row  42 */   { (MR_Integer) 0 },
  /* row  43 */   { (MR_Integer) 0 },
  /* row  44 */   { (MR_Integer) 1 },
  /* row  45 */   { (MR_Integer) 0 },
  /* row  46 */   { (MR_Integer) 1 },
  /* row  47 */   { (MR_Integer) 1 },
  /* row  48 */   { (MR_Integer) 1 },
  /* row  49 */   { (MR_Integer) 1 },
  /* row  50 */   { (MR_Integer) 1 },
  /* row  51 */   { (MR_Integer) 0 },
  /* row  52 */   { (MR_Integer) 0 },
  /* row  53 */   { (MR_Integer) 0 },
  /* row  54 */   { (MR_Integer) 0 },
  /* row  55 */   { (MR_Integer) 0 },
  /* row  56 */   { (MR_Integer) 0 },
  /* row  57 */   { (MR_Integer) 0 },
  /* row  58 */   { (MR_Integer) 0 },
  /* row  59 */   { (MR_Integer) 0 },
  /* row  60 */   { (MR_Integer) 0 },
  /* row  61 */   { (MR_Integer) 1 },
  /* row  62 */   { (MR_Integer) 0 },
  /* row  63 */   { (MR_Integer) 0 },
  /* row  64 */   { (MR_Integer) 0 },
  /* row  65 */   { (MR_Integer) 0 },
  /* row  66 */   { (MR_Integer) 1 },
  /* row  67 */   { (MR_Integer) 0 },
  /* row  68 */   { (MR_Integer) 0 },
  /* row  69 */   { (MR_Integer) 0 },
  /* row  70 */   { (MR_Integer) 0 },
  /* row  71 */   { (MR_Integer) 1 },
  /* row  72 */   { (MR_Integer) 1 },
  /* row  73 */   { (MR_Integer) 0 },
  /* row  74 */   { (MR_Integer) 0 },
  /* row  75 */   { (MR_Integer) 0 },
  /* row  76 */   { (MR_Integer) 0 },
  /* row  77 */   { (MR_Integer) 0 },
  /* row  78 */   { (MR_Integer) 0 },
  /* row  79 */   { (MR_Integer) 0 },
  /* row  80 */   { (MR_Integer) 0 },
  /* row  81 */   { (MR_Integer) 0 },
  /* row  82 */   { (MR_Integer) 0 },
  /* row  83 */   { (MR_Integer) 0 },
  /* row  84 */   { (MR_Integer) 0 },
  /* row  85 */   { (MR_Integer) 1 },
  /* row  86 */   { (MR_Integer) 0 },
  /* row  87 */   { (MR_Integer) 1 },
  /* row  88 */   { (MR_Integer) 0 },
  /* row  89 */   { (MR_Integer) 1 },
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
  /* row 100 */   { (MR_Integer) 1 },
  /* row 101 */   { (MR_Integer) 0 },
  /* row 102 */   { (MR_Integer) 0 },
  /* row 103 */   { (MR_Integer) 0 },
  /* row 104 */   { (MR_Integer) 0 },
  /* row 105 */   { (MR_Integer) 0 },
  /* row 106 */   { (MR_Integer) 1 },
  /* row 107 */   { (MR_Integer) 1 },
  /* row 108 */   { (MR_Integer) 1 },
  /* row 109 */   { (MR_Integer) 1 },
  /* row 110 */   { (MR_Integer) 1 },
  /* row 111 */   { (MR_Integer) 0 },
  /* row 112 */   { (MR_Integer) 0 },
  /* row 113 */   { (MR_Integer) 0 },
  /* row 114 */   { (MR_Integer) 0 },
  /* row 115 */   { (MR_Integer) 0 },
  /* row 116 */   { (MR_Integer) 0 },
  /* row 117 */   { (MR_Integer) 1 },
  /* row 118 */   { (MR_Integer) 0 },
  /* row 119 */   { (MR_Integer) 0 },
  /* row 120 */   { (MR_Integer) 0 },
  /* row 121 */   { (MR_Integer) 0 },
  /* row 122 */   { (MR_Integer) 1 },
  /* row 123 */   { (MR_Integer) 0 },
  /* row 124 */   { (MR_Integer) 0 },
  /* row 125 */   { (MR_Integer) 0 },
  /* row 126 */   { (MR_Integer) 0 },
  /* row 127 */   { (MR_Integer) 0 },
  /* row 128 */   { (MR_Integer) 0 },
  /* row 129 */   { (MR_Integer) 0 },
  /* row 130 */   { (MR_Integer) 0 },
  /* row 131 */   { (MR_Integer) 0 },
  /* row 132 */   { (MR_Integer) 0 },
  /* row 133 */   { (MR_Integer) 0 },
  /* row 134 */   { (MR_Integer) 0 },
  /* row 135 */   { (MR_Integer) 0 },
  /* row 136 */   { (MR_Integer) 0 },
  /* row 137 */   { (MR_Integer) 0 },
  /* row 138 */   { (MR_Integer) 0 },
  /* row 139 */   { (MR_Integer) 0 },
  /* row 140 */   { (MR_Integer) 0 },
  /* row 141 */   { (MR_Integer) 0 },
  /* row 142 */   { (MR_Integer) 0 },
  /* row 143 */   { (MR_Integer) 0 },
  /* row 144 */   { (MR_Integer) 0 },
  /* row 145 */   { (MR_Integer) 0 },
  /* row 146 */   { (MR_Integer) 0 },
};

static /* final */ const struct mercury__library__vector_common_type_5_0_s mercury__library_vector_common_5[147] = {
  /* row   0 */
  {
    (MR_String) "array",
    (MR_Integer) 0
  },
  /* row   1 */
  {
    (MR_String) "array2d",
    (MR_Integer) 0
  },
  /* row   2 */
  {
    (MR_String) "assoc_list",
    (MR_Integer) 0
  },
  /* row   3 */
  {
    (MR_String) "backjump",
    (MR_Integer) 1
  },
  /* row   4 */
  {
    (MR_String) "bag",
    (MR_Integer) 0
  },
  /* row   5 */
  {
    (MR_String) "benchmarking",
    (MR_Integer) 0
  },
  /* row   6 */
  {
    (MR_String) "bimap",
    (MR_Integer) 0
  },
  /* row   7 */
  {
    (MR_String) "bitmap",
    (MR_Integer) 0
  },
  /* row   8 */
  {
    (MR_String) "bit_buffer",
    (MR_Integer) 0
  },
  /* row   9 */
  {
    (MR_String) "bit_buffer.read",
    (MR_Integer) 0
  },
  /* row  10 */
  {
    (MR_String) "bit_buffer.write",
    (MR_Integer) 0
  },
  /* row  11 */
  {
    (MR_String) "bool",
    (MR_Integer) 0
  },
  /* row  12 */
  {
    (MR_String) "bt_array",
    (MR_Integer) 0
  },
  /* row  13 */
  {
    (MR_String) "builtin",
    (MR_Integer) 0
  },
  /* row  14 */
  {
    (MR_String) "calendar",
    (MR_Integer) 0
  },
  /* row  15 */
  {
    (MR_String) "char",
    (MR_Integer) 0
  },
  /* row  16 */
  {
    (MR_String) "construct",
    (MR_Integer) 0
  },
  /* row  17 */
  {
    (MR_String) "cord",
    (MR_Integer) 0
  },
  /* row  18 */
  {
    (MR_String) "counter",
    (MR_Integer) 0
  },
  /* row  19 */
  {
    (MR_String) "deconstruct",
    (MR_Integer) 0
  },
  /* row  20 */
  {
    (MR_String) "diet",
    (MR_Integer) 0
  },
  /* row  21 */
  {
    (MR_String) "digraph",
    (MR_Integer) 0
  },
  /* row  22 */
  {
    (MR_String) "dir",
    (MR_Integer) 0
  },
  /* row  23 */
  {
    (MR_String) "edit_seq",
    (MR_Integer) 0
  },
  /* row  24 */
  {
    (MR_String) "enum",
    (MR_Integer) 0
  },
  /* row  25 */
  {
    (MR_String) "eqvclass",
    (MR_Integer) 0
  },
  /* row  26 */
  {
    (MR_String) "exception",
    (MR_Integer) 0
  },
  /* row  27 */
  {
    (MR_String) "fat_sparse_bitset",
    (MR_Integer) 0
  },
  /* row  28 */
  {
    (MR_String) "fatter_sparse_bitset",
    (MR_Integer) 0
  },
  /* row  29 */
  {
    (MR_String) "float",
    (MR_Integer) 0
  },
  /* row  30 */
  {
    (MR_String) "gc",
    (MR_Integer) 0
  },
  /* row  31 */
  {
    (MR_String) "getopt",
    (MR_Integer) 0
  },
  /* row  32 */
  {
    (MR_String) "getopt_io",
    (MR_Integer) 0
  },
  /* row  33 */
  {
    (MR_String) "hash_table",
    (MR_Integer) 0
  },
  /* row  34 */
  {
    (MR_String) "injection",
    (MR_Integer) 0
  },
  /* row  35 */
  {
    (MR_String) "int",
    (MR_Integer) 0
  },
  /* row  36 */
  {
    (MR_String) "int8",
    (MR_Integer) 0
  },
  /* row  37 */
  {
    (MR_String) "int16",
    (MR_Integer) 0
  },
  /* row  38 */
  {
    (MR_String) "int32",
    (MR_Integer) 0
  },
  /* row  39 */
  {
    (MR_String) "int64",
    (MR_Integer) 0
  },
  /* row  40 */
  {
    (MR_String) "integer",
    (MR_Integer) 0
  },
  /* row  41 */
  {
    (MR_String) "io",
    (MR_Integer) 0
  },
  /* row  42 */
  {
    (MR_String) "io.call_system",
    (MR_Integer) 0
  },
  /* row  43 */
  {
    (MR_String) "io.environment",
    (MR_Integer) 0
  },
  /* row  44 */
  {
    (MR_String) "io.error_util",
    (MR_Integer) 1
  },
  /* row  45 */
  {
    (MR_String) "io.file",
    (MR_Integer) 0
  },
  /* row  46 */
  {
    (MR_String) "io.primitives_read",
    (MR_Integer) 1
  },
  /* row  47 */
  {
    (MR_String) "io.primitives_write",
    (MR_Integer) 1
  },
  /* row  48 */
  {
    (MR_String) "io.stream_db",
    (MR_Integer) 1
  },
  /* row  49 */
  {
    (MR_String) "io.stream_ops",
    (MR_Integer) 1
  },
  /* row  50 */
  {
    (MR_String) "io.text_read",
    (MR_Integer) 1
  },
  /* row  51 */
  {
    (MR_String) "kv_list",
    (MR_Integer) 0
  },
  /* row  52 */
  {
    (MR_String) "lazy",
    (MR_Integer) 0
  },
  /* row  53 */
  {
    (MR_String) "library",
    (MR_Integer) 0
  },
  /* row  54 */
  {
    (MR_String) "list",
    (MR_Integer) 0
  },
  /* row  55 */
  {
    (MR_String) "map",
    (MR_Integer) 0
  },
  /* row  56 */
  {
    (MR_String) "math",
    (MR_Integer) 0
  },
  /* row  57 */
  {
    (MR_String) "maybe",
    (MR_Integer) 0
  },
  /* row  58 */
  {
    (MR_String) "mercury_term_lexer",
    (MR_Integer) 0
  },
  /* row  59 */
  {
    (MR_String) "mercury_term_parser",
    (MR_Integer) 0
  },
  /* row  60 */
  {
    (MR_String) "multi_map",
    (MR_Integer) 0
  },
  /* row  61 */
  {
    (MR_String) "one_or_more",
    (MR_Integer) 0
  },
  /* row  62 */
  {
    (MR_String) "one_or_more_map",
    (MR_Integer) 0
  },
  /* row  63 */
  {
    (MR_String) "mutvar",
    (MR_Integer) 1
  },
  /* row  64 */
  {
    (MR_String) "ops",
    (MR_Integer) 0
  },
  /* row  65 */
  {
    (MR_String) "pair",
    (MR_Integer) 0
  },
  /* row  66 */
  {
    (MR_String) "par_builtin",
    (MR_Integer) 1
  },
  /* row  67 */
  {
    (MR_String) "parsing_utils",
    (MR_Integer) 0
  },
  /* row  68 */
  {
    (MR_String) "pprint",
    (MR_Integer) 0
  },
  /* row  69 */
  {
    (MR_String) "pqueue",
    (MR_Integer) 0
  },
  /* row  70 */
  {
    (MR_String) "pretty_printer",
    (MR_Integer) 0
  },
  /* row  71 */
  {
    (MR_String) "private_builtin",
    (MR_Integer) 1
  },
  /* row  72 */
  {
    (MR_String) "profiling_builtin",
    (MR_Integer) 1
  },
  /* row  73 */
  {
    (MR_String) "prolog",
    (MR_Integer) 0
  },
  /* row  74 */
  {
    (MR_String) "psqueue",
    (MR_Integer) 0
  },
  /* row  75 */
  {
    (MR_String) "queue",
    (MR_Integer) 0
  },
  /* row  76 */
  {
    (MR_String) "ra_list",
    (MR_Integer) 0
  },
  /* row  77 */
  {
    (MR_String) "random",
    (MR_Integer) 0
  },
  /* row  78 */
  {
    (MR_String) "random.sfc16",
    (MR_Integer) 0
  },
  /* row  79 */
  {
    (MR_String) "random.sfc32",
    (MR_Integer) 0
  },
  /* row  80 */
  {
    (MR_String) "random.sfc64",
    (MR_Integer) 0
  },
  /* row  81 */
  {
    (MR_String) "random.system_rng",
    (MR_Integer) 0
  },
  /* row  82 */
  {
    (MR_String) "ranges",
    (MR_Integer) 0
  },
  /* row  83 */
  {
    (MR_String) "rational",
    (MR_Integer) 0
  },
  /* row  84 */
  {
    (MR_String) "rbtree",
    (MR_Integer) 0
  },
  /* row  85 */
  {
    (MR_String) "region_builtin",
    (MR_Integer) 1
  },
  /* row  86 */
  {
    (MR_String) "require",
    (MR_Integer) 0
  },
  /* row  87 */
  {
    (MR_String) "robdd",
    (MR_Integer) 1
  },
  /* row  88 */
  {
    (MR_String) "rtree",
    (MR_Integer) 0
  },
  /* row  89 */
  {
    (MR_String) "rtti_implementation",
    (MR_Integer) 1
  },
  /* row  90 */
  {
    (MR_String) "set",
    (MR_Integer) 0
  },
  /* row  91 */
  {
    (MR_String) "set_bbbtree",
    (MR_Integer) 0
  },
  /* row  92 */
  {
    (MR_String) "set_ctree234",
    (MR_Integer) 0
  },
  /* row  93 */
  {
    (MR_String) "set_ordlist",
    (MR_Integer) 0
  },
  /* row  94 */
  {
    (MR_String) "set_tree234",
    (MR_Integer) 0
  },
  /* row  95 */
  {
    (MR_String) "set_unordlist",
    (MR_Integer) 0
  },
  /* row  96 */
  {
    (MR_String) "solutions",
    (MR_Integer) 0
  },
  /* row  97 */
  {
    (MR_String) "sparse_bitset",
    (MR_Integer) 0
  },
  /* row  98 */
  {
    (MR_String) "stack",
    (MR_Integer) 0
  },
  /* row  99 */
  {
    (MR_String) "std_util",
    (MR_Integer) 0
  },
  /* row 100 */
  {
    (MR_String) "stm_builtin",
    (MR_Integer) 1
  },
  /* row 101 */
  {
    (MR_String) "store",
    (MR_Integer) 0
  },
  /* row 102 */
  {
    (MR_String) "stream",
    (MR_Integer) 0
  },
  /* row 103 */
  {
    (MR_String) "stream.string_writer",
    (MR_Integer) 0
  },
  /* row 104 */
  {
    (MR_String) "string",
    (MR_Integer) 0
  },
  /* row 105 */
  {
    (MR_String) "string.builder",
    (MR_Integer) 0
  },
  /* row 106 */
  {
    (MR_String) "string.format",
    (MR_Integer) 1
  },
  /* row 107 */
  {
    (MR_String) "string.parse_runtime",
    (MR_Integer) 1
  },
  /* row 108 */
  {
    (MR_String) "string.parse_util",
    (MR_Integer) 1
  },
  /* row 109 */
  {
    (MR_String) "string.to_string",
    (MR_Integer) 1
  },
  /* row 110 */
  {
    (MR_String) "table_builtin",
    (MR_Integer) 1
  },
  /* row 111 */
  {
    (MR_String) "table_statistics",
    (MR_Integer) 0
  },
  /* row 112 */
  {
    (MR_String) "term",
    (MR_Integer) 0
  },
  /* row 113 */
  {
    (MR_String) "term_context",
    (MR_Integer) 0
  },
  /* row 114 */
  {
    (MR_String) "term_conversion",
    (MR_Integer) 0
  },
  /* row 115 */
  {
    (MR_String) "term_int",
    (MR_Integer) 0
  },
  /* row 116 */
  {
    (MR_String) "term_subst",
    (MR_Integer) 0
  },
  /* row 117 */
  {
    (MR_String) "term_unify",
    (MR_Integer) 0
  },
  /* row 118 */
  {
    (MR_String) "term_vars",
    (MR_Integer) 0
  },
  /* row 119 */
  {
    (MR_String) "term_io",
    (MR_Integer) 0
  },
  /* row 120 */
  {
    (MR_String) "term_size_prof_builtin",
    (MR_Integer) 1
  },
  /* row 121 */
  {
    (MR_String) "term_to_xml",
    (MR_Integer) 0
  },
  /* row 122 */
  {
    (MR_String) "test_bitset",
    (MR_Integer) 1
  },
  /* row 123 */
  {
    (MR_String) "time",
    (MR_Integer) 0
  },
  /* row 124 */
  {
    (MR_String) "thread",
    (MR_Integer) 0
  },
  /* row 125 */
  {
    (MR_String) "thread.barrier",
    (MR_Integer) 0
  },
  /* row 126 */
  {
    (MR_String) "thread.channel",
    (MR_Integer) 0
  },
  /* row 127 */
  {
    (MR_String) "thread.closeable_channel",
    (MR_Integer) 0
  },
  /* row 128 */
  {
    (MR_String) "thread.future",
    (MR_Integer) 0
  },
  /* row 129 */
  {
    (MR_String) "thread.mvar",
    (MR_Integer) 0
  },
  /* row 130 */
  {
    (MR_String) "thread.semaphore",
    (MR_Integer) 0
  },
  /* row 131 */
  {
    (MR_String) "tree234",
    (MR_Integer) 0
  },
  /* row 132 */
  {
    (MR_String) "tree_bitset",
    (MR_Integer) 0
  },
  /* row 133 */
  {
    (MR_String) "type_desc",
    (MR_Integer) 0
  },
  /* row 134 */
  {
    (MR_String) "uint",
    (MR_Integer) 0
  },
  /* row 135 */
  {
    (MR_String) "uint8",
    (MR_Integer) 0
  },
  /* row 136 */
  {
    (MR_String) "uint16",
    (MR_Integer) 0
  },
  /* row 137 */
  {
    (MR_String) "uint32",
    (MR_Integer) 0
  },
  /* row 138 */
  {
    (MR_String) "uint64",
    (MR_Integer) 0
  },
  /* row 139 */
  {
    (MR_String) "unit",
    (MR_Integer) 0
  },
  /* row 140 */
  {
    (MR_String) "univ",
    (MR_Integer) 0
  },
  /* row 141 */
  {
    (MR_String) "varset",
    (MR_Integer) 0
  },
  /* row 142 */
  {
    (MR_String) "version_array",
    (MR_Integer) 0
  },
  /* row 143 */
  {
    (MR_String) "version_array2d",
    (MR_Integer) 0
  },
  /* row 144 */
  {
    (MR_String) "version_bitmap",
    (MR_Integer) 0
  },
  /* row 145 */
  {
    (MR_String) "version_hash_table",
    (MR_Integer) 0
  },
  /* row 146 */
  {
    (MR_String) "version_store",
    (MR_Integer) 0
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
#include "io.environment.mh"
#include "io.error_util.mh"
#include "io.file.mh"
#include "io.primitives_read.mh"
#include "io.primitives_write.mh"
#include "io.stream_db.mh"
#include "io.stream_ops.mh"
#include "io.text_read.mh"
#include "random.system_rng.mh"

#line 426 "library.m"
void 
ML_std_library_init(void)
#line 426 "library.m"
{
#line 426 "library.m"
	mercury__library__std_library_init_2_p_0();
}

#line 443 "library.m"
void 
ML_std_library_finalize(void)
#line 443 "library.m"
{
#line 443 "library.m"
	mercury__library__std_library_finalize_2_p_0();
}


static const MR_EnumFunctorDesc mercury__library__library__enum_functor_desc_doc_or_undoc_0_0 = {
  (MR_String) "doc",
  INT32_C(0)
};

static const MR_EnumFunctorDesc mercury__library__library__enum_functor_desc_doc_or_undoc_0_1 = {
  (MR_String) "undoc",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr mercury__library__library__enum_ordinal_ordered_doc_or_undoc_0[2] = {
  &mercury__library__library__enum_functor_desc_doc_or_undoc_0_0,
  &mercury__library__library__enum_functor_desc_doc_or_undoc_0_1
};

static const MR_EnumFunctorDescPtr mercury__library__library__enum_name_ordered_doc_or_undoc_0[2] = {
  &mercury__library__library__enum_functor_desc_doc_or_undoc_0_0,
  &mercury__library__library__enum_functor_desc_doc_or_undoc_0_1
};

static const MR_Integer mercury__library__library__functor_number_map_doc_or_undoc_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mercury__library__library__type_ctor_info_doc_or_undoc_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__library____Unify____doc_or_undoc_0_0_10001)),
  ((MR_Box) (mercury__library____Compare____doc_or_undoc_0_0_10001)),
  (MR_String) "library",
  (MR_String) "doc_or_undoc",
  { mercury__library__library__enum_name_ordered_doc_or_undoc_0 },
  { mercury__library__library__enum_ordinal_ordered_doc_or_undoc_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  mercury__library__library__functor_number_map_doc_or_undoc_0,

};

void MR_CALL 
mercury__library____Compare____doc_or_undoc_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

MR_bool MR_CALL 
mercury__library____Unify____doc_or_undoc_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
mercury__library__std_library_finalize_2_p_0(void)
{
}

static void MR_CALL 
mercury__library__std_library_init_2_p_0(void)
{
  mercury__builtin__init_runtime_hooks_0_p_0();
  mercury__io__init_state_2_p_0();
}

void MR_CALL 
mercury__library__stdlib_module_doc_undoc_2_p_1(
  MR_String * HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Cont cont,
  void * cont_env_ptr)
{
  MR_Integer slot_0 = (MR_Integer) 0;

  do
  {
    *HeadVar__1_1 = ((&mercury__library_vector_common_5[0 + slot_0]))->mercury__library__vector_common_type_5_0__vct_5_f_0;
    *HeadVar__2_2 = ((&mercury__library_vector_common_5[0 + slot_0]))->mercury__library__vector_common_type_5_0__vct_5_f_1;
    cont(cont_env_ptr);
    slot_0 = (MR_Integer) ((MR_Unsigned) slot_0 + (MR_Unsigned) 1);
  }
  while ((slot_0 < (MR_Integer) 147));
}

MR_bool MR_CALL 
mercury__library__mercury_std_library_module_1_p_0(
  MR_String ModuleName_2)
{
  MR_bool succeeded;
  MR_Word Var_3;

  succeeded = mercury__library__stdlib_module_doc_undoc_2_p_0(ModuleName_2, &Var_3);
  return succeeded;
}

MR_bool MR_CALL 
mercury__library__stdlib_module_doc_undoc_2_p_0(
  MR_String HeadVar__1_1,
  MR_Word * HeadVar__2_2)
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
          case (MR_Integer) 120:
            if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "exception"))
              case_num_0 = (MR_Integer) 26;
            break;
        }
        break;
      case (MR_Integer) 102:
        switch (MR_nth_code_unit(HeadVar__1_1, 1)) {
          case (MR_Integer) 97:
            if (((MR_nth_code_unit(HeadVar__1_1, 2)) == (MR_Integer) 116))
              switch (MR_nth_code_unit(HeadVar__1_1, 3)) {
                case (MR_Integer) 95:
                  if (MR_offset_streq(4, HeadVar__1_1, (MR_String) "fat_sparse_bitset"))
                    case_num_0 = (MR_Integer) 27;
                  break;
                case (MR_Integer) 116:
                  if (MR_offset_streq(4, HeadVar__1_1, (MR_String) "fatter_sparse_bitset"))
                    case_num_0 = (MR_Integer) 28;
                  break;
              }
            break;
          case (MR_Integer) 108:
            if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "float"))
              case_num_0 = (MR_Integer) 29;
            break;
        }
        break;
      case (MR_Integer) 103:
        switch (MR_nth_code_unit(HeadVar__1_1, 1)) {
          case (MR_Integer) 99:
            if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "gc"))
              case_num_0 = (MR_Integer) 30;
            break;
          case (MR_Integer) 101:
            if (((((((((MR_nth_code_unit(HeadVar__1_1, 2)) == (MR_Integer) 116)) && (((MR_nth_code_unit(HeadVar__1_1, 3)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(HeadVar__1_1, 4)) == (MR_Integer) 112)))) && (((MR_nth_code_unit(HeadVar__1_1, 5)) == (MR_Integer) 116))))
              switch (MR_nth_code_unit(HeadVar__1_1, 6)) {
                case (MR_Integer) 0:
                  case_num_0 = (MR_Integer) 31;
                  break;
                case (MR_Integer) 95:
                  if (MR_offset_streq(7, HeadVar__1_1, (MR_String) "getopt_io"))
                    case_num_0 = (MR_Integer) 32;
                  break;
              }
            break;
        }
        break;
      case (MR_Integer) 104:
        if (MR_offset_streq(1, HeadVar__1_1, (MR_String) "hash_table"))
          case_num_0 = (MR_Integer) 33;
        break;
      case (MR_Integer) 105:
        switch (MR_nth_code_unit(HeadVar__1_1, 1)) {
          case (MR_Integer) 110:
            switch (MR_nth_code_unit(HeadVar__1_1, 2)) {
              case (MR_Integer) 106:
                if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "injection"))
                  case_num_0 = (MR_Integer) 34;
                break;
              case (MR_Integer) 116:
                switch (MR_nth_code_unit(HeadVar__1_1, 3)) {
                  case (MR_Integer) 0:
                    case_num_0 = (MR_Integer) 35;
                    break;
                  case (MR_Integer) 49:
                    if (MR_offset_streq(4, HeadVar__1_1, (MR_String) "int16"))
                      case_num_0 = (MR_Integer) 36;
                    break;
                  case (MR_Integer) 51:
                    if (MR_offset_streq(4, HeadVar__1_1, (MR_String) "int32"))
                      case_num_0 = (MR_Integer) 37;
                    break;
                  case (MR_Integer) 54:
                    if (MR_offset_streq(4, HeadVar__1_1, (MR_String) "int64"))
                      case_num_0 = (MR_Integer) 38;
                    break;
                  case (MR_Integer) 56:
                    if (MR_offset_streq(4, HeadVar__1_1, (MR_String) "int8"))
                      case_num_0 = (MR_Integer) 39;
                    break;
                  case (MR_Integer) 101:
                    if (MR_offset_streq(4, HeadVar__1_1, (MR_String) "integer"))
                      case_num_0 = (MR_Integer) 40;
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 111:
            switch (MR_nth_code_unit(HeadVar__1_1, 2)) {
              case (MR_Integer) 0:
                case_num_0 = (MR_Integer) 41;
                break;
              case (MR_Integer) 46:
                switch (MR_nth_code_unit(HeadVar__1_1, 3)) {
                  case (MR_Integer) 99:
                    if (MR_offset_streq(4, HeadVar__1_1, (MR_String) "io.call_system"))
                      case_num_0 = (MR_Integer) 42;
                    break;
                  case (MR_Integer) 101:
                    switch (MR_nth_code_unit(HeadVar__1_1, 4)) {
                      case (MR_Integer) 110:
                        if (MR_offset_streq(5, HeadVar__1_1, (MR_String) "io.environment"))
                          case_num_0 = (MR_Integer) 43;
                        break;
                      case (MR_Integer) 114:
                        if (MR_offset_streq(5, HeadVar__1_1, (MR_String) "io.error_util"))
                          case_num_0 = (MR_Integer) 44;
                        break;
                    }
                    break;
                  case (MR_Integer) 102:
                    if (MR_offset_streq(4, HeadVar__1_1, (MR_String) "io.file"))
                      case_num_0 = (MR_Integer) 45;
                    break;
                  case (MR_Integer) 112:
                    if (((((((((((((((((((((MR_nth_code_unit(HeadVar__1_1, 4)) == (MR_Integer) 114)) && (((MR_nth_code_unit(HeadVar__1_1, 5)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(HeadVar__1_1, 6)) == (MR_Integer) 109)))) && (((MR_nth_code_unit(HeadVar__1_1, 7)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(HeadVar__1_1, 8)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(HeadVar__1_1, 9)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(HeadVar__1_1, 10)) == (MR_Integer) 118)))) && (((MR_nth_code_unit(HeadVar__1_1, 11)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(HeadVar__1_1, 12)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(HeadVar__1_1, 13)) == (MR_Integer) 95))))
                      switch (MR_nth_code_unit(HeadVar__1_1, 14)) {
                        case (MR_Integer) 114:
                          if (MR_offset_streq(15, HeadVar__1_1, (MR_String) "io.primitives_read"))
                            case_num_0 = (MR_Integer) 46;
                          break;
                        case (MR_Integer) 119:
                          if (MR_offset_streq(15, HeadVar__1_1, (MR_String) "io.primitives_write"))
                            case_num_0 = (MR_Integer) 47;
                          break;
                      }
                    break;
                  case (MR_Integer) 115:
                    if (((((((((((((MR_nth_code_unit(HeadVar__1_1, 4)) == (MR_Integer) 116)) && (((MR_nth_code_unit(HeadVar__1_1, 5)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(HeadVar__1_1, 6)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(HeadVar__1_1, 7)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(HeadVar__1_1, 8)) == (MR_Integer) 109)))) && (((MR_nth_code_unit(HeadVar__1_1, 9)) == (MR_Integer) 95))))
                      switch (MR_nth_code_unit(HeadVar__1_1, 10)) {
                        case (MR_Integer) 100:
                          if (MR_offset_streq(11, HeadVar__1_1, (MR_String) "io.stream_db"))
                            case_num_0 = (MR_Integer) 48;
                          break;
                        case (MR_Integer) 111:
                          if (MR_offset_streq(11, HeadVar__1_1, (MR_String) "io.stream_ops"))
                            case_num_0 = (MR_Integer) 49;
                          break;
                      }
                    break;
                  case (MR_Integer) 116:
                    if (MR_offset_streq(4, HeadVar__1_1, (MR_String) "io.text_read"))
                      case_num_0 = (MR_Integer) 50;
                    break;
                }
                break;
            }
            break;
        }
        break;
      case (MR_Integer) 107:
        if (MR_offset_streq(1, HeadVar__1_1, (MR_String) "kv_list"))
          case_num_0 = (MR_Integer) 51;
        break;
      case (MR_Integer) 108:
        switch (MR_nth_code_unit(HeadVar__1_1, 1)) {
          case (MR_Integer) 97:
            if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "lazy"))
              case_num_0 = (MR_Integer) 52;
            break;
          case (MR_Integer) 105:
            switch (MR_nth_code_unit(HeadVar__1_1, 2)) {
              case (MR_Integer) 98:
                if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "library"))
                  case_num_0 = (MR_Integer) 53;
                break;
              case (MR_Integer) 115:
                if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "list"))
                  case_num_0 = (MR_Integer) 54;
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
                  case_num_0 = (MR_Integer) 55;
                break;
              case (MR_Integer) 116:
                if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "math"))
                  case_num_0 = (MR_Integer) 56;
                break;
              case (MR_Integer) 121:
                if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "maybe"))
                  case_num_0 = (MR_Integer) 57;
                break;
            }
            break;
          case (MR_Integer) 101:
            if (((((((((((((((((((((((MR_nth_code_unit(HeadVar__1_1, 2)) == (MR_Integer) 114)) && (((MR_nth_code_unit(HeadVar__1_1, 3)) == (MR_Integer) 99)))) && (((MR_nth_code_unit(HeadVar__1_1, 4)) == (MR_Integer) 117)))) && (((MR_nth_code_unit(HeadVar__1_1, 5)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(HeadVar__1_1, 6)) == (MR_Integer) 121)))) && (((MR_nth_code_unit(HeadVar__1_1, 7)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(HeadVar__1_1, 8)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(HeadVar__1_1, 9)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(HeadVar__1_1, 10)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(HeadVar__1_1, 11)) == (MR_Integer) 109)))) && (((MR_nth_code_unit(HeadVar__1_1, 12)) == (MR_Integer) 95))))
              switch (MR_nth_code_unit(HeadVar__1_1, 13)) {
                case (MR_Integer) 108:
                  if (MR_offset_streq(14, HeadVar__1_1, (MR_String) "mercury_term_lexer"))
                    case_num_0 = (MR_Integer) 58;
                  break;
                case (MR_Integer) 112:
                  if (MR_offset_streq(14, HeadVar__1_1, (MR_String) "mercury_term_parser"))
                    case_num_0 = (MR_Integer) 59;
                  break;
              }
            break;
          case (MR_Integer) 117:
            switch (MR_nth_code_unit(HeadVar__1_1, 2)) {
              case (MR_Integer) 108:
                if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "multi_map"))
                  case_num_0 = (MR_Integer) 60;
                break;
              case (MR_Integer) 116:
                if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "mutvar"))
                  case_num_0 = (MR_Integer) 61;
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
                  case_num_0 = (MR_Integer) 62;
                  break;
                case (MR_Integer) 95:
                  if (MR_offset_streq(12, HeadVar__1_1, (MR_String) "one_or_more_map"))
                    case_num_0 = (MR_Integer) 63;
                  break;
              }
            break;
          case (MR_Integer) 112:
            if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "ops"))
              case_num_0 = (MR_Integer) 64;
            break;
        }
        break;
      case (MR_Integer) 112:
        switch (MR_nth_code_unit(HeadVar__1_1, 1)) {
          case (MR_Integer) 97:
            switch (MR_nth_code_unit(HeadVar__1_1, 2)) {
              case (MR_Integer) 105:
                if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "pair"))
                  case_num_0 = (MR_Integer) 65;
                break;
              case (MR_Integer) 114:
                switch (MR_nth_code_unit(HeadVar__1_1, 3)) {
                  case (MR_Integer) 95:
                    if (MR_offset_streq(4, HeadVar__1_1, (MR_String) "par_builtin"))
                      case_num_0 = (MR_Integer) 66;
                    break;
                  case (MR_Integer) 115:
                    if (MR_offset_streq(4, HeadVar__1_1, (MR_String) "parsing_utils"))
                      case_num_0 = (MR_Integer) 67;
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 112:
            if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "pprint"))
              case_num_0 = (MR_Integer) 68;
            break;
          case (MR_Integer) 113:
            if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "pqueue"))
              case_num_0 = (MR_Integer) 69;
            break;
          case (MR_Integer) 114:
            switch (MR_nth_code_unit(HeadVar__1_1, 2)) {
              case (MR_Integer) 101:
                if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "pretty_printer"))
                  case_num_0 = (MR_Integer) 70;
                break;
              case (MR_Integer) 105:
                if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "private_builtin"))
                  case_num_0 = (MR_Integer) 71;
                break;
              case (MR_Integer) 111:
                switch (MR_nth_code_unit(HeadVar__1_1, 3)) {
                  case (MR_Integer) 102:
                    if (MR_offset_streq(4, HeadVar__1_1, (MR_String) "profiling_builtin"))
                      case_num_0 = (MR_Integer) 72;
                    break;
                  case (MR_Integer) 108:
                    if (MR_offset_streq(4, HeadVar__1_1, (MR_String) "prolog"))
                      case_num_0 = (MR_Integer) 73;
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 115:
            if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "psqueue"))
              case_num_0 = (MR_Integer) 74;
            break;
        }
        break;
      case (MR_Integer) 113:
        if (MR_offset_streq(1, HeadVar__1_1, (MR_String) "queue"))
          case_num_0 = (MR_Integer) 75;
        break;
      case (MR_Integer) 114:
        switch (MR_nth_code_unit(HeadVar__1_1, 1)) {
          case (MR_Integer) 97:
            switch (MR_nth_code_unit(HeadVar__1_1, 2)) {
              case (MR_Integer) 95:
                if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "ra_list"))
                  case_num_0 = (MR_Integer) 76;
                break;
              case (MR_Integer) 110:
                switch (MR_nth_code_unit(HeadVar__1_1, 3)) {
                  case (MR_Integer) 100:
                    if (((((MR_nth_code_unit(HeadVar__1_1, 4)) == (MR_Integer) 111)) && (((MR_nth_code_unit(HeadVar__1_1, 5)) == (MR_Integer) 109))))
                      switch (MR_nth_code_unit(HeadVar__1_1, 6)) {
                        case (MR_Integer) 0:
                          case_num_0 = (MR_Integer) 77;
                          break;
                        case (MR_Integer) 46:
                          if (((MR_nth_code_unit(HeadVar__1_1, 7)) == (MR_Integer) 115))
                            switch (MR_nth_code_unit(HeadVar__1_1, 8)) {
                              case (MR_Integer) 102:
                                if (((MR_nth_code_unit(HeadVar__1_1, 9)) == (MR_Integer) 99))
                                  switch (MR_nth_code_unit(HeadVar__1_1, 10)) {
                                    case (MR_Integer) 49:
                                      if (MR_offset_streq(11, HeadVar__1_1, (MR_String) "random.sfc16"))
                                        case_num_0 = (MR_Integer) 78;
                                      break;
                                    case (MR_Integer) 51:
                                      if (MR_offset_streq(11, HeadVar__1_1, (MR_String) "random.sfc32"))
                                        case_num_0 = (MR_Integer) 79;
                                      break;
                                    case (MR_Integer) 54:
                                      if (MR_offset_streq(11, HeadVar__1_1, (MR_String) "random.sfc64"))
                                        case_num_0 = (MR_Integer) 80;
                                      break;
                                  }
                                break;
                              case (MR_Integer) 121:
                                if (MR_offset_streq(9, HeadVar__1_1, (MR_String) "random.system_rng"))
                                  case_num_0 = (MR_Integer) 81;
                                break;
                            }
                          break;
                      }
                    break;
                  case (MR_Integer) 103:
                    if (MR_offset_streq(4, HeadVar__1_1, (MR_String) "ranges"))
                      case_num_0 = (MR_Integer) 82;
                    break;
                }
                break;
              case (MR_Integer) 116:
                if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "rational"))
                  case_num_0 = (MR_Integer) 83;
                break;
            }
            break;
          case (MR_Integer) 98:
            if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "rbtree"))
              case_num_0 = (MR_Integer) 84;
            break;
          case (MR_Integer) 101:
            switch (MR_nth_code_unit(HeadVar__1_1, 2)) {
              case (MR_Integer) 103:
                if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "region_builtin"))
                  case_num_0 = (MR_Integer) 85;
                break;
              case (MR_Integer) 113:
                if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "require"))
                  case_num_0 = (MR_Integer) 86;
                break;
            }
            break;
          case (MR_Integer) 111:
            if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "robdd"))
              case_num_0 = (MR_Integer) 87;
            break;
          case (MR_Integer) 116:
            switch (MR_nth_code_unit(HeadVar__1_1, 2)) {
              case (MR_Integer) 114:
                if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "rtree"))
                  case_num_0 = (MR_Integer) 88;
                break;
              case (MR_Integer) 116:
                if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "rtti_implementation"))
                  case_num_0 = (MR_Integer) 89;
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
                  case_num_0 = (MR_Integer) 90;
                  break;
                case (MR_Integer) 95:
                  switch (MR_nth_code_unit(HeadVar__1_1, 4)) {
                    case (MR_Integer) 98:
                      if (MR_offset_streq(5, HeadVar__1_1, (MR_String) "set_bbbtree"))
                        case_num_0 = (MR_Integer) 91;
                      break;
                    case (MR_Integer) 99:
                      if (MR_offset_streq(5, HeadVar__1_1, (MR_String) "set_ctree234"))
                        case_num_0 = (MR_Integer) 92;
                      break;
                    case (MR_Integer) 111:
                      if (MR_offset_streq(5, HeadVar__1_1, (MR_String) "set_ordlist"))
                        case_num_0 = (MR_Integer) 93;
                      break;
                    case (MR_Integer) 116:
                      if (MR_offset_streq(5, HeadVar__1_1, (MR_String) "set_tree234"))
                        case_num_0 = (MR_Integer) 94;
                      break;
                    case (MR_Integer) 117:
                      if (MR_offset_streq(5, HeadVar__1_1, (MR_String) "set_unordlist"))
                        case_num_0 = (MR_Integer) 95;
                      break;
                  }
                  break;
              }
            break;
          case (MR_Integer) 111:
            if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "solutions"))
              case_num_0 = (MR_Integer) 96;
            break;
          case (MR_Integer) 112:
            if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "sparse_bitset"))
              case_num_0 = (MR_Integer) 97;
            break;
          case (MR_Integer) 116:
            switch (MR_nth_code_unit(HeadVar__1_1, 2)) {
              case (MR_Integer) 97:
                if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "stack"))
                  case_num_0 = (MR_Integer) 98;
                break;
              case (MR_Integer) 100:
                if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "std_util"))
                  case_num_0 = (MR_Integer) 99;
                break;
              case (MR_Integer) 109:
                if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "stm_builtin"))
                  case_num_0 = (MR_Integer) 100;
                break;
              case (MR_Integer) 111:
                if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "store"))
                  case_num_0 = (MR_Integer) 101;
                break;
              case (MR_Integer) 114:
                switch (MR_nth_code_unit(HeadVar__1_1, 3)) {
                  case (MR_Integer) 101:
                    if (((((MR_nth_code_unit(HeadVar__1_1, 4)) == (MR_Integer) 97)) && (((MR_nth_code_unit(HeadVar__1_1, 5)) == (MR_Integer) 109))))
                      switch (MR_nth_code_unit(HeadVar__1_1, 6)) {
                        case (MR_Integer) 0:
                          case_num_0 = (MR_Integer) 102;
                          break;
                        case (MR_Integer) 46:
                          if (MR_offset_streq(7, HeadVar__1_1, (MR_String) "stream.string_writer"))
                            case_num_0 = (MR_Integer) 103;
                          break;
                      }
                    break;
                  case (MR_Integer) 105:
                    if (((((MR_nth_code_unit(HeadVar__1_1, 4)) == (MR_Integer) 110)) && (((MR_nth_code_unit(HeadVar__1_1, 5)) == (MR_Integer) 103))))
                      switch (MR_nth_code_unit(HeadVar__1_1, 6)) {
                        case (MR_Integer) 0:
                          case_num_0 = (MR_Integer) 104;
                          break;
                        case (MR_Integer) 46:
                          switch (MR_nth_code_unit(HeadVar__1_1, 7)) {
                            case (MR_Integer) 98:
                              if (MR_offset_streq(8, HeadVar__1_1, (MR_String) "string.builder"))
                                case_num_0 = (MR_Integer) 105;
                              break;
                            case (MR_Integer) 102:
                              if (MR_offset_streq(8, HeadVar__1_1, (MR_String) "string.format"))
                                case_num_0 = (MR_Integer) 106;
                              break;
                            case (MR_Integer) 112:
                              if (((((((((((MR_nth_code_unit(HeadVar__1_1, 8)) == (MR_Integer) 97)) && (((MR_nth_code_unit(HeadVar__1_1, 9)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(HeadVar__1_1, 10)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(HeadVar__1_1, 11)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(HeadVar__1_1, 12)) == (MR_Integer) 95))))
                                switch (MR_nth_code_unit(HeadVar__1_1, 13)) {
                                  case (MR_Integer) 114:
                                    if (MR_offset_streq(14, HeadVar__1_1, (MR_String) "string.parse_runtime"))
                                      case_num_0 = (MR_Integer) 107;
                                    break;
                                  case (MR_Integer) 117:
                                    if (MR_offset_streq(14, HeadVar__1_1, (MR_String) "string.parse_util"))
                                      case_num_0 = (MR_Integer) 108;
                                    break;
                                }
                              break;
                            case (MR_Integer) 116:
                              if (MR_offset_streq(8, HeadVar__1_1, (MR_String) "string.to_string"))
                                case_num_0 = (MR_Integer) 109;
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
                    case_num_0 = (MR_Integer) 110;
                  break;
                case (MR_Integer) 115:
                  if (MR_offset_streq(7, HeadVar__1_1, (MR_String) "table_statistics"))
                    case_num_0 = (MR_Integer) 111;
                  break;
              }
            break;
          case (MR_Integer) 101:
            switch (MR_nth_code_unit(HeadVar__1_1, 2)) {
              case (MR_Integer) 114:
                if (((MR_nth_code_unit(HeadVar__1_1, 3)) == (MR_Integer) 109))
                  switch (MR_nth_code_unit(HeadVar__1_1, 4)) {
                    case (MR_Integer) 0:
                      case_num_0 = (MR_Integer) 112;
                      break;
                    case (MR_Integer) 95:
                      switch (MR_nth_code_unit(HeadVar__1_1, 5)) {
                        case (MR_Integer) 99:
                          if (((((MR_nth_code_unit(HeadVar__1_1, 6)) == (MR_Integer) 111)) && (((MR_nth_code_unit(HeadVar__1_1, 7)) == (MR_Integer) 110))))
                            switch (MR_nth_code_unit(HeadVar__1_1, 8)) {
                              case (MR_Integer) 116:
                                if (MR_offset_streq(9, HeadVar__1_1, (MR_String) "term_context"))
                                  case_num_0 = (MR_Integer) 113;
                                break;
                              case (MR_Integer) 118:
                                if (MR_offset_streq(9, HeadVar__1_1, (MR_String) "term_conversion"))
                                  case_num_0 = (MR_Integer) 114;
                                break;
                            }
                          break;
                        case (MR_Integer) 105:
                          switch (MR_nth_code_unit(HeadVar__1_1, 6)) {
                            case (MR_Integer) 110:
                              if (MR_offset_streq(7, HeadVar__1_1, (MR_String) "term_int"))
                                case_num_0 = (MR_Integer) 115;
                              break;
                            case (MR_Integer) 111:
                              if (MR_offset_streq(7, HeadVar__1_1, (MR_String) "term_io"))
                                case_num_0 = (MR_Integer) 116;
                              break;
                          }
                          break;
                        case (MR_Integer) 115:
                          switch (MR_nth_code_unit(HeadVar__1_1, 6)) {
                            case (MR_Integer) 105:
                              if (MR_offset_streq(7, HeadVar__1_1, (MR_String) "term_size_prof_builtin"))
                                case_num_0 = (MR_Integer) 117;
                              break;
                            case (MR_Integer) 117:
                              if (MR_offset_streq(7, HeadVar__1_1, (MR_String) "term_subst"))
                                case_num_0 = (MR_Integer) 118;
                              break;
                          }
                          break;
                        case (MR_Integer) 116:
                          if (MR_offset_streq(6, HeadVar__1_1, (MR_String) "term_to_xml"))
                            case_num_0 = (MR_Integer) 119;
                          break;
                        case (MR_Integer) 117:
                          if (MR_offset_streq(6, HeadVar__1_1, (MR_String) "term_unify"))
                            case_num_0 = (MR_Integer) 120;
                          break;
                        case (MR_Integer) 118:
                          if (MR_offset_streq(6, HeadVar__1_1, (MR_String) "term_vars"))
                            case_num_0 = (MR_Integer) 121;
                          break;
                      }
                      break;
                  }
                break;
              case (MR_Integer) 115:
                if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "test_bitset"))
                  case_num_0 = (MR_Integer) 122;
                break;
            }
            break;
          case (MR_Integer) 104:
            if (((((((((MR_nth_code_unit(HeadVar__1_1, 2)) == (MR_Integer) 114)) && (((MR_nth_code_unit(HeadVar__1_1, 3)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(HeadVar__1_1, 4)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(HeadVar__1_1, 5)) == (MR_Integer) 100))))
              switch (MR_nth_code_unit(HeadVar__1_1, 6)) {
                case (MR_Integer) 0:
                  case_num_0 = (MR_Integer) 123;
                  break;
                case (MR_Integer) 46:
                  switch (MR_nth_code_unit(HeadVar__1_1, 7)) {
                    case (MR_Integer) 98:
                      if (MR_offset_streq(8, HeadVar__1_1, (MR_String) "thread.barrier"))
                        case_num_0 = (MR_Integer) 124;
                      break;
                    case (MR_Integer) 99:
                      switch (MR_nth_code_unit(HeadVar__1_1, 8)) {
                        case (MR_Integer) 104:
                          if (MR_offset_streq(9, HeadVar__1_1, (MR_String) "thread.channel"))
                            case_num_0 = (MR_Integer) 125;
                          break;
                        case (MR_Integer) 108:
                          if (MR_offset_streq(9, HeadVar__1_1, (MR_String) "thread.closeable_channel"))
                            case_num_0 = (MR_Integer) 126;
                          break;
                      }
                      break;
                    case (MR_Integer) 102:
                      if (MR_offset_streq(8, HeadVar__1_1, (MR_String) "thread.future"))
                        case_num_0 = (MR_Integer) 127;
                      break;
                    case (MR_Integer) 109:
                      if (MR_offset_streq(8, HeadVar__1_1, (MR_String) "thread.mvar"))
                        case_num_0 = (MR_Integer) 128;
                      break;
                    case (MR_Integer) 115:
                      if (MR_offset_streq(8, HeadVar__1_1, (MR_String) "thread.semaphore"))
                        case_num_0 = (MR_Integer) 129;
                      break;
                  }
                  break;
              }
            break;
          case (MR_Integer) 105:
            if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "time"))
              case_num_0 = (MR_Integer) 130;
            break;
          case (MR_Integer) 114:
            if (((((MR_nth_code_unit(HeadVar__1_1, 2)) == (MR_Integer) 101)) && (((MR_nth_code_unit(HeadVar__1_1, 3)) == (MR_Integer) 101))))
              switch (MR_nth_code_unit(HeadVar__1_1, 4)) {
                case (MR_Integer) 50:
                  if (MR_offset_streq(5, HeadVar__1_1, (MR_String) "tree234"))
                    case_num_0 = (MR_Integer) 131;
                  break;
                case (MR_Integer) 95:
                  if (MR_offset_streq(5, HeadVar__1_1, (MR_String) "tree_bitset"))
                    case_num_0 = (MR_Integer) 132;
                  break;
              }
            break;
          case (MR_Integer) 121:
            if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "type_desc"))
              case_num_0 = (MR_Integer) 133;
            break;
        }
        break;
      case (MR_Integer) 117:
        switch (MR_nth_code_unit(HeadVar__1_1, 1)) {
          case (MR_Integer) 105:
            if (((((MR_nth_code_unit(HeadVar__1_1, 2)) == (MR_Integer) 110)) && (((MR_nth_code_unit(HeadVar__1_1, 3)) == (MR_Integer) 116))))
              switch (MR_nth_code_unit(HeadVar__1_1, 4)) {
                case (MR_Integer) 0:
                  case_num_0 = (MR_Integer) 134;
                  break;
                case (MR_Integer) 49:
                  if (MR_offset_streq(5, HeadVar__1_1, (MR_String) "uint16"))
                    case_num_0 = (MR_Integer) 135;
                  break;
                case (MR_Integer) 51:
                  if (MR_offset_streq(5, HeadVar__1_1, (MR_String) "uint32"))
                    case_num_0 = (MR_Integer) 136;
                  break;
                case (MR_Integer) 54:
                  if (MR_offset_streq(5, HeadVar__1_1, (MR_String) "uint64"))
                    case_num_0 = (MR_Integer) 137;
                  break;
                case (MR_Integer) 56:
                  if (MR_offset_streq(5, HeadVar__1_1, (MR_String) "uint8"))
                    case_num_0 = (MR_Integer) 138;
                  break;
              }
            break;
          case (MR_Integer) 110:
            if (((MR_nth_code_unit(HeadVar__1_1, 2)) == (MR_Integer) 105))
              switch (MR_nth_code_unit(HeadVar__1_1, 3)) {
                case (MR_Integer) 116:
                  if (MR_offset_streq(4, HeadVar__1_1, (MR_String) "unit"))
                    case_num_0 = (MR_Integer) 139;
                  break;
                case (MR_Integer) 118:
                  if (MR_offset_streq(4, HeadVar__1_1, (MR_String) "univ"))
                    case_num_0 = (MR_Integer) 140;
                  break;
              }
            break;
        }
        break;
      case (MR_Integer) 118:
        switch (MR_nth_code_unit(HeadVar__1_1, 1)) {
          case (MR_Integer) 97:
            if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "varset"))
              case_num_0 = (MR_Integer) 141;
            break;
          case (MR_Integer) 101:
            if (((((((((((((MR_nth_code_unit(HeadVar__1_1, 2)) == (MR_Integer) 114)) && (((MR_nth_code_unit(HeadVar__1_1, 3)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(HeadVar__1_1, 4)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(HeadVar__1_1, 5)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(HeadVar__1_1, 6)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(HeadVar__1_1, 7)) == (MR_Integer) 95))))
              switch (MR_nth_code_unit(HeadVar__1_1, 8)) {
                case (MR_Integer) 97:
                  if (((((((((MR_nth_code_unit(HeadVar__1_1, 9)) == (MR_Integer) 114)) && (((MR_nth_code_unit(HeadVar__1_1, 10)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(HeadVar__1_1, 11)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(HeadVar__1_1, 12)) == (MR_Integer) 121))))
                    switch (MR_nth_code_unit(HeadVar__1_1, 13)) {
                      case (MR_Integer) 0:
                        case_num_0 = (MR_Integer) 142;
                        break;
                      case (MR_Integer) 50:
                        if (MR_offset_streq(14, HeadVar__1_1, (MR_String) "version_array2d"))
                          case_num_0 = (MR_Integer) 143;
                        break;
                    }
                  break;
                case (MR_Integer) 98:
                  if (MR_offset_streq(9, HeadVar__1_1, (MR_String) "version_bitmap"))
                    case_num_0 = (MR_Integer) 144;
                  break;
                case (MR_Integer) 104:
                  if (MR_offset_streq(9, HeadVar__1_1, (MR_String) "version_hash_table"))
                    case_num_0 = (MR_Integer) 145;
                  break;
                case (MR_Integer) 115:
                  if (MR_offset_streq(9, HeadVar__1_1, (MR_String) "version_store"))
                    case_num_0 = (MR_Integer) 146;
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
      *HeadVar__2_2 = ((&mercury__library_vector_common_4[0 + case_num_0]))->mercury__library__vector_common_type_4_0__vct_4_f_0;
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

void MR_CALL 
mercury__library__version_2_p_0(
  MR_String * Version_1,
  MR_String * Fullarch_2)
{
{
#define MR_PROC_LABEL mercury__library__version_2_p_0

	MR_String Version;
	MR_String Fullarch;

		{

    MR_ConstString version_string = MR_VERSION;
    MR_ConstString fullarch_string = MR_FULLARCH;

    // We need to cast away const here, because Mercury declares Version
    // and Fullarch to have type MR_String, not MR_ConstString.
    Version = (MR_String) (MR_Word) version_string;
    Fullarch = (MR_String) (MR_Word) fullarch_string;


		;}
#undef MR_PROC_LABEL
	*Version_1  = Version;
	*Fullarch_2  = Fullarch;
}
}

static MR_bool MR_CALL 
mercury__library____Unify____doc_or_undoc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__library____Unify____doc_or_undoc_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__library____Compare____doc_or_undoc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__library____Compare____doc_or_undoc_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__library__init(void)
{
}

void mercury__library__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__library__library__type_ctor_info_doc_or_undoc_0);
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
