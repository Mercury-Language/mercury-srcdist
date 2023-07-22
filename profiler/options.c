/*
** Automatically generated from `options.m'
** by the Mercury compiler,
** version rotd-2023-07-22
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


// :- module options.
// :- implementation.

/*
INIT mercury__options__init
ENDINIT
*/

#include "options.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "getopt.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"




static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_0;

static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_1;

static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_2;

static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_3;

static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_4;

static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_5;

static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_6;

static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_7;

static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_8;

static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_9;

static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_10;

static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_11;

static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_12;

static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_13;

static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_14;

static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_15;

static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_16;

static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_17;

static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_18;

static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_19;

static const MR_EnumFunctorDescPtr options__options__enum_ordinal_ordered_option_0[20];

static const MR_EnumFunctorDescPtr options__options__enum_name_ordered_option_0[20];

static const MR_Integer options__options__functor_number_map_option_0[20];

static const MR_FA_TypeInfo_Struct2 options__tree234__ti_tree234_2options__type_ctor_info_option_0getopt__type_ctor_info_option_data_0;

static MR_bool MR_CALL 
options____Unify____option_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
options____Compare____option_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
options____Unify____option_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
options____Compare____option_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box options_scalar_common_1[1][3];

static /* final */ const MR_Box options_scalar_common_2[3][1];

static /* final */ const MR_Box options_scalar_common_3[59][2];

static /* final */ const MR_Integer options_scalar_common_5[1][2];


struct options__vector_common_type_4_0_s {
  const MR_Word options__vector_common_type_4_0__vct_4_f_0;
};

static /* final */ const struct options__vector_common_type_4_0_s options_vector_common_4[72];

struct options__vector_common_type_6_0_s {
  const MR_Word options__vector_common_type_6_0__vct_6_f_0;
  const MR_Word options__vector_common_type_6_0__vct_6_f_1;
};

static /* final */ const struct options__vector_common_type_6_0_s options_vector_common_6[20];



static /* final */ const MR_Box options_scalar_common_1[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&options__options__type_ctor_info_option_0)),
    ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_data_0))
  },
};

static /* final */ const MR_Box options_scalar_common_2[3][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 0U) },
  /* row   1 */
  { (MR_Box) ((MR_Unsigned) 1U) },
  /* row   2 */
  { ((MR_Box) ((MR_String) "Invalid argument to \140--profile\' or \140-p\' option")) },
};

static /* final */ const MR_Box options_scalar_common_3[59][2] = {
  /* row   0 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "Prof.Counts"))
  },
  /* row   1 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "Prof.CallPair"))
  },
  /* row   2 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "Prof.Decl"))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) ""))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "Prof.Snapshots"))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "Prof.MemoryCells"))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "Prof.MemoryWords"))
  },
  /* row   7 */
  {
    ((MR_Box) ((MR_String) "\t\tOutput very verbose progress messages.\n")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   8 */
  {
    ((MR_Box) ((MR_String) "\t-V, --very-verbose\n")),
    ((MR_Box) (MR_mkword(1, &options_scalar_common_3[7])))
  },
  /* row   9 */
  {
    ((MR_Box) ((MR_String) "\t\tOutput progress messages at each stage.\n")),
    ((MR_Box) (MR_mkword(1, &options_scalar_common_3[8])))
  },
  /* row  10 */
  {
    ((MR_Box) ((MR_String) "\t-v, --verbose\n")),
    ((MR_Box) (MR_mkword(1, &options_scalar_common_3[9])))
  },
  /* row  11 */
  {
    ((MR_Box) ((MR_String) "Verbosity Options:\n")),
    ((MR_Box) (MR_mkword(1, &options_scalar_common_3[10])))
  },
  /* row  12 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) (MR_mkword(1, &options_scalar_common_3[11])))
  },
  /* row  13 */
  {
    ((MR_Box) ((MR_String) "\t\tprofile. These are excluded by default.\n")),
    ((MR_Box) (MR_mkword(1, &options_scalar_common_3[12])))
  },
  /* row  14 */
  {
    ((MR_Box) ((MR_String) "\t\tInclude internal Mercury runtime structures in the\n")),
    ((MR_Box) (MR_mkword(1, &options_scalar_common_3[13])))
  },
  /* row  15 */
  {
    ((MR_Box) ((MR_String) "\t-r, --snapshots-include-runtime\n")),
    ((MR_Box) (MR_mkword(1, &options_scalar_common_3[14])))
  },
  /* row  16 */
  {
    ((MR_Box) ((MR_String) "\t\tGenerate a brief profile.\n")),
    ((MR_Box) (MR_mkword(1, &options_scalar_common_3[15])))
  },
  /* row  17 */
  {
    ((MR_Box) ((MR_String) "\t-b, --snapshots-brief\n")),
    ((MR_Box) (MR_mkword(1, &options_scalar_common_3[16])))
  },
  /* row  18 */
  {
    ((MR_Box) ((MR_String) "\t\tGroup results by type.\n")),
    ((MR_Box) (MR_mkword(1, &options_scalar_common_3[17])))
  },
  /* row  19 */
  {
    ((MR_Box) ((MR_String) "\t-T, --snapshots-by-type\n")),
    ((MR_Box) (MR_mkword(1, &options_scalar_common_3[18])))
  },
  /* row  20 */
  {
    ((MR_Box) ((MR_String) "\t\tName of the snapshots file. Usually \140Prof.Snapshots\'.\n")),
    ((MR_Box) (MR_mkword(1, &options_scalar_common_3[19])))
  },
  /* row  21 */
  {
    ((MR_Box) ((MR_String) "\t--snapshots-file <file>\n")),
    ((MR_Box) (MR_mkword(1, &options_scalar_common_3[20])))
  },
  /* row  22 */
  {
    ((MR_Box) ((MR_String) "\t\tThis overrides other profiler modes.\n")),
    ((MR_Box) (MR_mkword(1, &options_scalar_common_3[21])))
  },
  /* row  23 */
  {
    ((MR_Box) ((MR_String) "\t\t\140benchmarking.report_memory_attribution\' was called.\n")),
    ((MR_Box) (MR_mkword(1, &options_scalar_common_3[22])))
  },
  /* row  24 */
  {
    ((MR_Box) ((MR_String) "\t\tShow summary of heap objects at the times\n")),
    ((MR_Box) (MR_mkword(1, &options_scalar_common_3[23])))
  },
  /* row  25 */
  {
    ((MR_Box) ((MR_String) "\t-s, --snapshots\n")),
    ((MR_Box) (MR_mkword(1, &options_scalar_common_3[24])))
  },
  /* row  26 */
  {
    ((MR_Box) ((MR_String) "Snapshot options:\n")),
    ((MR_Box) (MR_mkword(1, &options_scalar_common_3[25])))
  },
  /* row  27 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) (MR_mkword(1, &options_scalar_common_3[26])))
  },
  /* row  28 */
  {
    ((MR_Box) ((MR_String) "\t\tthe library modules.\n")),
    ((MR_Box) (MR_mkword(1, &options_scalar_common_3[27])))
  },
  /* row  29 */
  {
    ((MR_Box) ((MR_String) "\t\tName of the file which contains the call graph for\n")),
    ((MR_Box) (MR_mkword(1, &options_scalar_common_3[28])))
  },
  /* row  30 */
  {
    ((MR_Box) ((MR_String) "\t-L <file>, --library-callgraph <file>\n")),
    ((MR_Box) (MR_mkword(1, &options_scalar_common_3[29])))
  },
  /* row  31 */
  {
    ((MR_Box) ((MR_String) "\t\tName of the call-pair file. Usually \140Prof.CallPair\'.\n")),
    ((MR_Box) (MR_mkword(1, &options_scalar_common_3[30])))
  },
  /* row  32 */
  {
    ((MR_Box) ((MR_String) "\t-P <file>, --call-pair-file <file>\n")),
    ((MR_Box) (MR_mkword(1, &options_scalar_common_3[31])))
  },
  /* row  33 */
  {
    ((MR_Box) ((MR_String) "\t\tName of the declaration file. Usually \140Prof.Decl\'.\n")),
    ((MR_Box) (MR_mkword(1, &options_scalar_common_3[32])))
  },
  /* row  34 */
  {
    ((MR_Box) ((MR_String) "\t-D <file>, --declaration-file <file>\n")),
    ((MR_Box) (MR_mkword(1, &options_scalar_common_3[33])))
  },
  /* row  35 */
  {
    ((MR_Box) ((MR_String) "\t\t\140Prof.MemoryWords\', or \140Prof.MemoryCells\'.\n")),
    ((MR_Box) (MR_mkword(1, &options_scalar_common_3[34])))
  },
  /* row  36 */
  {
    ((MR_Box) ((MR_String) "\t\tName of the count file. Usually \140Prof.Counts\',\n")),
    ((MR_Box) (MR_mkword(1, &options_scalar_common_3[35])))
  },
  /* row  37 */
  {
    ((MR_Box) ((MR_String) "\t-C <file>, --count-file <file>\n")),
    ((MR_Box) (MR_mkword(1, &options_scalar_common_3[36])))
  },
  /* row  38 */
  {
    ((MR_Box) ((MR_String) "Filename Options:\n")),
    ((MR_Box) (MR_mkword(1, &options_scalar_common_3[37])))
  },
  /* row  39 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) (MR_mkword(1, &options_scalar_common_3[38])))
  },
  /* row  40 */
  {
    ((MR_Box) ((MR_String) "\t\tOutput the mangled predicate and function names.\n")),
    ((MR_Box) (MR_mkword(1, &options_scalar_common_3[39])))
  },
  /* row  41 */
  {
    ((MR_Box) ((MR_String) "\t--no-demangle\n")),
    ((MR_Box) (MR_mkword(1, &options_scalar_common_3[40])))
  },
  /* row  42 */
  {
    ((MR_Box) ((MR_String) "\t\tSame as \140--profile time\'.\n")),
    ((MR_Box) (MR_mkword(1, &options_scalar_common_3[41])))
  },
  /* row  43 */
  {
    ((MR_Box) ((MR_String) "\t-t\n")),
    ((MR_Box) (MR_mkword(1, &options_scalar_common_3[42])))
  },
  /* row  44 */
  {
    ((MR_Box) ((MR_String) "\t\tSame as \140--profile memory-cells\'.\n")),
    ((MR_Box) (MR_mkword(1, &options_scalar_common_3[43])))
  },
  /* row  45 */
  {
    ((MR_Box) ((MR_String) "\t-M\n")),
    ((MR_Box) (MR_mkword(1, &options_scalar_common_3[44])))
  },
  /* row  46 */
  {
    ((MR_Box) ((MR_String) "\t\tSame as \140--profile memory-words\'\n")),
    ((MR_Box) (MR_mkword(1, &options_scalar_common_3[45])))
  },
  /* row  47 */
  {
    ((MR_Box) ((MR_String) "\t-m\n")),
    ((MR_Box) (MR_mkword(1, &options_scalar_common_3[46])))
  },
  /* row  48 */
  {
    ((MR_Box) ((MR_String) "\t\tnumber of memory allocations (regardless of size).\n")),
    ((MR_Box) (MR_mkword(1, &options_scalar_common_3[47])))
  },
  /* row  49 */
  {
    ((MR_Box) ((MR_String) "\t\tSelect what to profile: time, amount of memory allocated, or\n")),
    ((MR_Box) (MR_mkword(1, &options_scalar_common_3[48])))
  },
  /* row  50 */
  {
    ((MR_Box) ((MR_String) "\t-p, --profile {time, memory-words, memory-cells}\n")),
    ((MR_Box) (MR_mkword(1, &options_scalar_common_3[49])))
  },
  /* row  51 */
  {
    ((MR_Box) ((MR_String) "\t\tBuild the call graph dynamically.\n")),
    ((MR_Box) (MR_mkword(1, &options_scalar_common_3[50])))
  },
  /* row  52 */
  {
    ((MR_Box) ((MR_String) "\t-d, --use-dynamic\n")),
    ((MR_Box) (MR_mkword(1, &options_scalar_common_3[51])))
  },
  /* row  53 */
  {
    ((MR_Box) ((MR_String) "\t\tInclude the call graph profile.\n")),
    ((MR_Box) (MR_mkword(1, &options_scalar_common_3[52])))
  },
  /* row  54 */
  {
    ((MR_Box) ((MR_String) "\t-c, --call-graph\n")),
    ((MR_Box) (MR_mkword(1, &options_scalar_common_3[53])))
  },
  /* row  55 */
  {
    ((MR_Box) ((MR_String) "Profiler Options:\n")),
    ((MR_Box) (MR_mkword(1, &options_scalar_common_3[54])))
  },
  /* row  56 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) (MR_mkword(1, &options_scalar_common_3[55])))
  },
  /* row  57 */
  {
    ((MR_Box) ((MR_String) "\t\tPrint this usage message.\n")),
    ((MR_Box) (MR_mkword(1, &options_scalar_common_3[56])))
  },
  /* row  58 */
  {
    ((MR_Box) ((MR_String) "-h, --help\n")),
    ((MR_Box) (MR_mkword(1, &options_scalar_common_3[57])))
  },
};

static /* final */ const MR_Integer options_scalar_common_5[1][2] = {
  /* row   0 */
  {
    (MR_Unsigned) 2148148739U,
    (MR_Unsigned) 762915U
  },
};


static /* final */ const struct options__vector_common_type_4_0_s options_vector_common_4[72] = {
  /* row   0 */   { (MR_Integer) 9 },
  /* row   1 */   { (MR_Integer) 11 },
  /* row   2 */   { (MR_Word) ((MR_Integer) 0) },
  /* row   3 */   { (MR_Word) ((MR_Integer) 0) },
  /* row   4 */   { (MR_Word) ((MR_Integer) 0) },
  /* row   5 */   { (MR_Word) ((MR_Integer) 0) },
  /* row   6 */   { (MR_Word) ((MR_Integer) 0) },
  /* row   7 */   { (MR_Word) ((MR_Integer) 0) },
  /* row   8 */   { (MR_Word) ((MR_Integer) 0) },
  /* row   9 */   { (MR_Integer) 12 },
  /* row  10 */   { (MR_Integer) 7 },
  /* row  11 */   { (MR_Word) ((MR_Integer) 0) },
  /* row  12 */   { (MR_Word) ((MR_Integer) 0) },
  /* row  13 */   { (MR_Integer) 10 },
  /* row  14 */   { (MR_Word) ((MR_Integer) 0) },
  /* row  15 */   { (MR_Word) ((MR_Integer) 0) },
  /* row  16 */   { (MR_Word) ((MR_Integer) 0) },
  /* row  17 */   { (MR_Integer) 15 },
  /* row  18 */   { (MR_Word) ((MR_Integer) 0) },
  /* row  19 */   { (MR_Integer) 1 },
  /* row  20 */   { (MR_Word) ((MR_Integer) 0) },
  /* row  21 */   { (MR_Word) ((MR_Integer) 0) },
  /* row  22 */   { (MR_Word) ((MR_Integer) 0) },
  /* row  23 */   { (MR_Word) ((MR_Integer) 0) },
  /* row  24 */   { (MR_Word) ((MR_Integer) 0) },
  /* row  25 */   { (MR_Word) ((MR_Integer) 0) },
  /* row  26 */   { (MR_Word) ((MR_Integer) 0) },
  /* row  27 */   { (MR_Word) ((MR_Integer) 0) },
  /* row  28 */   { (MR_Word) ((MR_Integer) 0) },
  /* row  29 */   { (MR_Word) ((MR_Integer) 0) },
  /* row  30 */   { (MR_Word) ((MR_Integer) 0) },
  /* row  31 */   { (MR_Integer) 16 },
  /* row  32 */   { (MR_Integer) 3 },
  /* row  33 */   { (MR_Integer) 2 },
  /* row  34 */   { (MR_Word) ((MR_Integer) 0) },
  /* row  35 */   { (MR_Word) ((MR_Integer) 0) },
  /* row  36 */   { (MR_Word) ((MR_Integer) 0) },
  /* row  37 */   { (MR_Integer) 19 },
  /* row  38 */   { (MR_Word) ((MR_Integer) 0) },
  /* row  39 */   { (MR_Word) ((MR_Integer) 0) },
  /* row  40 */   { (MR_Word) ((MR_Integer) 0) },
  /* row  41 */   { (MR_Word) ((MR_Integer) 0) },
  /* row  42 */   { (MR_Integer) 6 },
  /* row  43 */   { (MR_Word) ((MR_Integer) 0) },
  /* row  44 */   { (MR_Word) ((MR_Integer) 0) },
  /* row  45 */   { (MR_Integer) 4 },
  /* row  46 */   { (MR_Word) ((MR_Integer) 0) },
  /* row  47 */   { (MR_Integer) 17 },
  /* row  48 */   { (MR_Integer) 13 },
  /* row  49 */   { (MR_Integer) 5 },
  /* row  50 */   { (MR_Word) ((MR_Integer) 0) },
  /* row  51 */   { (MR_Integer) 0 },
  /* row  52 */   { (MR_Integer) 3 },
  /* row  53 */   { (MR_Integer) 10 },
  /* row  54 */   { (MR_Integer) 9 },
  /* row  55 */   { (MR_Integer) 11 },
  /* row  56 */   { (MR_Integer) 8 },
  /* row  57 */   { (MR_Integer) 19 },
  /* row  58 */   { (MR_Integer) 19 },
  /* row  59 */   { (MR_Integer) 4 },
  /* row  60 */   { (MR_Integer) 7 },
  /* row  61 */   { (MR_Integer) 6 },
  /* row  62 */   { (MR_Integer) 5 },
  /* row  63 */   { (MR_Integer) 13 },
  /* row  64 */   { (MR_Integer) 16 },
  /* row  65 */   { (MR_Integer) 15 },
  /* row  66 */   { (MR_Integer) 14 },
  /* row  67 */   { (MR_Integer) 17 },
  /* row  68 */   { (MR_Integer) 18 },
  /* row  69 */   { (MR_Integer) 2 },
  /* row  70 */   { (MR_Integer) 0 },
  /* row  71 */   { (MR_Integer) 1 },
};

static /* final */ const struct options__vector_common_type_6_0_s options_vector_common_6[20] = {
  /* row   0 */
  {
    (MR_Integer) 0,
    (MR_Word) (MR_mkword(1, &options_scalar_common_2[0]))
  },
  /* row   1 */
  {
    (MR_Integer) 1,
    (MR_Word) (MR_mkword(1, &options_scalar_common_2[0]))
  },
  /* row   2 */
  {
    (MR_Integer) 2,
    (MR_Word) (MR_mkword(1, &options_scalar_common_2[0]))
  },
  /* row   3 */
  {
    (MR_Integer) 3,
    (MR_Word) (MR_mkword(1, &options_scalar_common_2[0]))
  },
  /* row   4 */
  {
    (MR_Integer) 4,
    (MR_Word) ((MR_Unsigned) 12U)
  },
  /* row   5 */
  {
    (MR_Integer) 5,
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row   6 */
  {
    (MR_Integer) 6,
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row   7 */
  {
    (MR_Integer) 7,
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row   8 */
  {
    (MR_Integer) 9,
    (MR_Word) (MR_mkword(3, &options_scalar_common_3[0]))
  },
  /* row   9 */
  {
    (MR_Integer) 10,
    (MR_Word) (MR_mkword(3, &options_scalar_common_3[1]))
  },
  /* row  10 */
  {
    (MR_Integer) 11,
    (MR_Word) (MR_mkword(3, &options_scalar_common_3[2]))
  },
  /* row  11 */
  {
    (MR_Integer) 12,
    (MR_Word) (MR_mkword(3, &options_scalar_common_3[3]))
  },
  /* row  12 */
  {
    (MR_Integer) 8,
    (MR_Word) (MR_mkword(1, &options_scalar_common_2[1]))
  },
  /* row  13 */
  {
    (MR_Integer) 13,
    (MR_Word) (MR_mkword(1, &options_scalar_common_2[0]))
  },
  /* row  14 */
  {
    (MR_Integer) 14,
    (MR_Word) (MR_mkword(3, &options_scalar_common_3[4]))
  },
  /* row  15 */
  {
    (MR_Integer) 15,
    (MR_Word) (MR_mkword(1, &options_scalar_common_2[0]))
  },
  /* row  16 */
  {
    (MR_Integer) 16,
    (MR_Word) (MR_mkword(1, &options_scalar_common_2[0]))
  },
  /* row  17 */
  {
    (MR_Integer) 17,
    (MR_Word) (MR_mkword(1, &options_scalar_common_2[0]))
  },
  /* row  18 */
  {
    (MR_Integer) 18,
    (MR_Word) (MR_mkword(1, &options_scalar_common_2[1]))
  },
  /* row  19 */
  {
    (MR_Integer) 19,
    (MR_Word) (MR_mkword(1, &options_scalar_common_2[0]))
  },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_0 = {
  (MR_String) "verbose",
  INT32_C(0)
};

static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_1 = {
  (MR_String) "very_verbose",
  INT32_C(1)
};

static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_2 = {
  (MR_String) "dynamic_cg",
  INT32_C(2)
};

static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_3 = {
  (MR_String) "call_graph",
  INT32_C(3)
};

static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_4 = {
  (MR_String) "profile",
  INT32_C(4)
};

static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_5 = {
  (MR_String) "profile_time",
  INT32_C(5)
};

static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_6 = {
  (MR_String) "profile_memory_words",
  INT32_C(6)
};

static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_7 = {
  (MR_String) "profile_memory_cells",
  INT32_C(7)
};

static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_8 = {
  (MR_String) "demangle",
  INT32_C(8)
};

static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_9 = {
  (MR_String) "countfile",
  INT32_C(9)
};

static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_10 = {
  (MR_String) "pairfile",
  INT32_C(10)
};

static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_11 = {
  (MR_String) "declfile",
  INT32_C(11)
};

static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_12 = {
  (MR_String) "libraryfile",
  INT32_C(12)
};

static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_13 = {
  (MR_String) "snapshots",
  INT32_C(13)
};

static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_14 = {
  (MR_String) "snapshots_file",
  INT32_C(14)
};

static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_15 = {
  (MR_String) "snapshots_by_type",
  INT32_C(15)
};

static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_16 = {
  (MR_String) "snapshots_brief",
  INT32_C(16)
};

static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_17 = {
  (MR_String) "snapshots_include_runtime",
  INT32_C(17)
};

static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_18 = {
  (MR_String) "snapshots_recalc_size",
  INT32_C(18)
};

static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_19 = {
  (MR_String) "help",
  INT32_C(19)
};

static const MR_EnumFunctorDescPtr options__options__enum_ordinal_ordered_option_0[20] = {
  &options__options__enum_functor_desc_option_0_0,
  &options__options__enum_functor_desc_option_0_1,
  &options__options__enum_functor_desc_option_0_2,
  &options__options__enum_functor_desc_option_0_3,
  &options__options__enum_functor_desc_option_0_4,
  &options__options__enum_functor_desc_option_0_5,
  &options__options__enum_functor_desc_option_0_6,
  &options__options__enum_functor_desc_option_0_7,
  &options__options__enum_functor_desc_option_0_8,
  &options__options__enum_functor_desc_option_0_9,
  &options__options__enum_functor_desc_option_0_10,
  &options__options__enum_functor_desc_option_0_11,
  &options__options__enum_functor_desc_option_0_12,
  &options__options__enum_functor_desc_option_0_13,
  &options__options__enum_functor_desc_option_0_14,
  &options__options__enum_functor_desc_option_0_15,
  &options__options__enum_functor_desc_option_0_16,
  &options__options__enum_functor_desc_option_0_17,
  &options__options__enum_functor_desc_option_0_18,
  &options__options__enum_functor_desc_option_0_19
};

static const MR_EnumFunctorDescPtr options__options__enum_name_ordered_option_0[20] = {
  &options__options__enum_functor_desc_option_0_3,
  &options__options__enum_functor_desc_option_0_9,
  &options__options__enum_functor_desc_option_0_11,
  &options__options__enum_functor_desc_option_0_8,
  &options__options__enum_functor_desc_option_0_2,
  &options__options__enum_functor_desc_option_0_19,
  &options__options__enum_functor_desc_option_0_12,
  &options__options__enum_functor_desc_option_0_10,
  &options__options__enum_functor_desc_option_0_4,
  &options__options__enum_functor_desc_option_0_7,
  &options__options__enum_functor_desc_option_0_6,
  &options__options__enum_functor_desc_option_0_5,
  &options__options__enum_functor_desc_option_0_13,
  &options__options__enum_functor_desc_option_0_16,
  &options__options__enum_functor_desc_option_0_15,
  &options__options__enum_functor_desc_option_0_14,
  &options__options__enum_functor_desc_option_0_17,
  &options__options__enum_functor_desc_option_0_18,
  &options__options__enum_functor_desc_option_0_0,
  &options__options__enum_functor_desc_option_0_1
};

static const MR_Integer options__options__functor_number_map_option_0[20] = {
  (MR_Integer) 18,
  (MR_Integer) 19,
  (MR_Integer) 4,
  (MR_Integer) 0,
  (MR_Integer) 8,
  (MR_Integer) 11,
  (MR_Integer) 10,
  (MR_Integer) 9,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 7,
  (MR_Integer) 2,
  (MR_Integer) 6,
  (MR_Integer) 12,
  (MR_Integer) 15,
  (MR_Integer) 14,
  (MR_Integer) 13,
  (MR_Integer) 16,
  (MR_Integer) 17,
  (MR_Integer) 5
};

const MR_TypeCtorInfo_Struct options__options__type_ctor_info_option_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (options____Unify____option_0_0_10001)),
  ((MR_Box) (options____Compare____option_0_0_10001)),
  (MR_String) "options",
  (MR_String) "option",
  { options__options__enum_name_ordered_option_0 },
  { options__options__enum_ordinal_ordered_option_0 },
  (MR_Integer) 20,
  UINT16_C(12),
  options__options__functor_number_map_option_0,

};

static const MR_FA_TypeInfo_Struct2 options__tree234__ti_tree234_2options__type_ctor_info_option_0getopt__type_ctor_info_option_data_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&options__options__type_ctor_info_option_0),
    (MR_TypeInfo) (&mercury__getopt__getopt__type_ctor_info_option_data_0)
  }
};

const MR_TypeCtorInfo_Struct options__options__type_ctor_info_option_table_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (options____Unify____option_table_0_0_10001)),
  ((MR_Box) (options____Compare____option_table_0_0_10001)),
  (MR_String) "options",
  (MR_String) "option_table",
  { NULL },
  { (MR_PseudoTypeInfo) (&options__tree234__ti_tree234_2options__type_ctor_info_option_0getopt__type_ctor_info_option_data_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

void MR_CALL 
options____Compare____option_table_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&options_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
options____Unify____option_table_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&options_scalar_common_1[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
options____Compare____option_0_0(
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
options____Unify____option_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
options__maybe_flush_output_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  switch (HeadVar__2_2) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      mercury__io__flush_output_3_p_0(HeadVar__1_1);
      break;
  }
}

void MR_CALL 
options__maybe_write_string_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_String String_3)
{
  switch (HeadVar__2_2) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      mercury__io__write_string_4_p_0(HeadVar__1_1, String_3);
      break;
  }
}

void MR_CALL 
options__options_help_3_p_0(
  MR_Word OutputStream_4)
{
  mercury__io__write_strings_4_p_0(OutputStream_4, (MR_Word) (MR_mkword(1, &options_scalar_common_3[58])));
}

MR_bool MR_CALL 
options__special_handler_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_OptionTable_0_3,
  MR_Word * HeadVar__4_4)
{
  MR_bool succeeded;

  switch (HeadVar__1_1) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Integer) 4:
      {
        MR_String WhatToProfile_5;
        MR_String CountFile_8;

        succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
        if (succeeded)
        {
          WhatToProfile_5 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
          if ((strcmp(WhatToProfile_5, (MR_String) "time") == 0))
          {
            CountFile_8 = (MR_String) "Prof.Counts";
            succeeded = MR_TRUE;
          }
          else
          if ((strcmp(WhatToProfile_5, (MR_String) "memory-cells") == 0))
          {
            CountFile_8 = (MR_String) "Prof.MemoryCells";
            succeeded = MR_TRUE;
          }
          else
          if ((strcmp(WhatToProfile_5, (MR_String) "memory-words") == 0))
          {
            CountFile_8 = (MR_String) "Prof.MemoryWords";
            succeeded = MR_TRUE;
          }
          else
            succeeded = MR_FALSE;
          if (succeeded)
          {
            MR_Word Var_11;
            MR_Word STATE_VARIABLE_OptionTable_12_12;

            {
              Var_11 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_11, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, Var_11, 1) = ((MR_Box) (CountFile_8));
            }
            mercury__map__set_4_p_0((MR_Word) (&options__options__type_ctor_info_option_0), (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), ((MR_Box) ((MR_Integer) 9)), ((MR_Box) (Var_11)), STATE_VARIABLE_OptionTable_0_3, &STATE_VARIABLE_OptionTable_12_12);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *HeadVar__4_4 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (STATE_VARIABLE_OptionTable_12_12));
            }
          }
          else
            *HeadVar__4_4 = (MR_Word) (MR_mkword(1, &options_scalar_common_2[2]));
          succeeded = MR_TRUE;
        }
      }
      break;
    case (MR_Integer) 7:
      {
        MR_Word STATE_VARIABLE_OptionTable_25;

        mercury__map__set_4_p_0((MR_Word) (&options__options__type_ctor_info_option_0), (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), ((MR_Box) ((MR_Integer) 9)), ((MR_Box) (MR_mkword(3, &options_scalar_common_3[5]))), STATE_VARIABLE_OptionTable_0_3, &STATE_VARIABLE_OptionTable_25);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *HeadVar__4_4 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (STATE_VARIABLE_OptionTable_25));
        }
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Integer) 6:
      {
        MR_Word STATE_VARIABLE_OptionTable_17;

        mercury__map__set_4_p_0((MR_Word) (&options__options__type_ctor_info_option_0), (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), ((MR_Box) ((MR_Integer) 9)), ((MR_Box) (MR_mkword(3, &options_scalar_common_3[6]))), STATE_VARIABLE_OptionTable_0_3, &STATE_VARIABLE_OptionTable_17);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *HeadVar__4_4 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (STATE_VARIABLE_OptionTable_17));
        }
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Integer) 5:
      {
        MR_Word STATE_VARIABLE_OptionTable_33;

        mercury__map__set_4_p_0((MR_Word) (&options__options__type_ctor_info_option_0), (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), ((MR_Box) ((MR_Integer) 9)), ((MR_Box) (MR_mkword(3, &options_scalar_common_3[0]))), STATE_VARIABLE_OptionTable_0_3, &STATE_VARIABLE_OptionTable_33);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *HeadVar__4_4 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (STATE_VARIABLE_OptionTable_33));
        }
        succeeded = MR_TRUE;
      }
      break;
  }
  return succeeded;
}

void MR_CALL 
options__option_default_2_p_0(
  MR_Word * HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Cont cont,
  void * cont_env_ptr)
{
  MR_Integer slot_0 = (MR_Integer) 0;

  do
  {
    *HeadVar__1_1 = ((&options_vector_common_6[0 + slot_0]))->options__vector_common_type_6_0__vct_6_f_0;
    *HeadVar__2_2 = ((&options_vector_common_6[0 + slot_0]))->options__vector_common_type_6_0__vct_6_f_1;
    cont(cont_env_ptr);
    slot_0 = (MR_Integer) ((MR_Unsigned) slot_0 + (MR_Unsigned) 1);
  }
  while ((slot_0 < (MR_Integer) 20));
}

MR_bool MR_CALL 
options__long_option_2_p_0(
  MR_String HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  MR_bool succeeded;

  {
    MR_Integer case_num_0 = (MR_Integer) -1;

    switch (MR_nth_code_unit(HeadVar__1_1, 0)) {
      case (MR_Integer) 99:
        switch (MR_nth_code_unit(HeadVar__1_1, 1)) {
          case (MR_Integer) 97:
            if (((((((MR_nth_code_unit(HeadVar__1_1, 2)) == (MR_Integer) 108)) && (((MR_nth_code_unit(HeadVar__1_1, 3)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(HeadVar__1_1, 4)) == (MR_Integer) 45))))
              switch (MR_nth_code_unit(HeadVar__1_1, 5)) {
                case (MR_Integer) 103:
                  if (MR_offset_streq(6, HeadVar__1_1, (MR_String) "call-graph"))
                    case_num_0 = (MR_Integer) 0;
                  break;
                case (MR_Integer) 112:
                  if (MR_offset_streq(6, HeadVar__1_1, (MR_String) "call-pair-file"))
                    case_num_0 = (MR_Integer) 1;
                  break;
              }
            break;
          case (MR_Integer) 111:
            if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "count-file"))
              case_num_0 = (MR_Integer) 2;
            break;
        }
        break;
      case (MR_Integer) 100:
        if (((MR_nth_code_unit(HeadVar__1_1, 1)) == (MR_Integer) 101))
          switch (MR_nth_code_unit(HeadVar__1_1, 2)) {
            case (MR_Integer) 99:
              if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "declaration-file"))
                case_num_0 = (MR_Integer) 3;
              break;
            case (MR_Integer) 109:
              if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "demangle"))
                case_num_0 = (MR_Integer) 4;
              break;
          }
        break;
      case (MR_Integer) 104:
        if (MR_offset_streq(1, HeadVar__1_1, (MR_String) "help"))
          case_num_0 = (MR_Integer) 5;
        break;
      case (MR_Integer) 108:
        if (MR_offset_streq(1, HeadVar__1_1, (MR_String) "library-callgraph"))
          case_num_0 = (MR_Integer) 6;
        break;
      case (MR_Integer) 112:
        if (((((((((((((MR_nth_code_unit(HeadVar__1_1, 1)) == (MR_Integer) 114)) && (((MR_nth_code_unit(HeadVar__1_1, 2)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(HeadVar__1_1, 3)) == (MR_Integer) 102)))) && (((MR_nth_code_unit(HeadVar__1_1, 4)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(HeadVar__1_1, 5)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(HeadVar__1_1, 6)) == (MR_Integer) 101))))
          switch (MR_nth_code_unit(HeadVar__1_1, 7)) {
            case (MR_Integer) 0:
              case_num_0 = (MR_Integer) 7;
              break;
            case (MR_Integer) 45:
              switch (MR_nth_code_unit(HeadVar__1_1, 8)) {
                case (MR_Integer) 109:
                  if (((((((((((((MR_nth_code_unit(HeadVar__1_1, 9)) == (MR_Integer) 101)) && (((MR_nth_code_unit(HeadVar__1_1, 10)) == (MR_Integer) 109)))) && (((MR_nth_code_unit(HeadVar__1_1, 11)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(HeadVar__1_1, 12)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(HeadVar__1_1, 13)) == (MR_Integer) 121)))) && (((MR_nth_code_unit(HeadVar__1_1, 14)) == (MR_Integer) 45))))
                    switch (MR_nth_code_unit(HeadVar__1_1, 15)) {
                      case (MR_Integer) 99:
                        if (MR_offset_streq(16, HeadVar__1_1, (MR_String) "profile-memory-cells"))
                          case_num_0 = (MR_Integer) 8;
                        break;
                      case (MR_Integer) 119:
                        if (MR_offset_streq(16, HeadVar__1_1, (MR_String) "profile-memory-words"))
                          case_num_0 = (MR_Integer) 9;
                        break;
                    }
                  break;
                case (MR_Integer) 116:
                  if (MR_offset_streq(9, HeadVar__1_1, (MR_String) "profile-time"))
                    case_num_0 = (MR_Integer) 10;
                  break;
              }
              break;
          }
        break;
      case (MR_Integer) 115:
        if (((((((((((((((((MR_nth_code_unit(HeadVar__1_1, 1)) == (MR_Integer) 110)) && (((MR_nth_code_unit(HeadVar__1_1, 2)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(HeadVar__1_1, 3)) == (MR_Integer) 112)))) && (((MR_nth_code_unit(HeadVar__1_1, 4)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(HeadVar__1_1, 5)) == (MR_Integer) 104)))) && (((MR_nth_code_unit(HeadVar__1_1, 6)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(HeadVar__1_1, 7)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(HeadVar__1_1, 8)) == (MR_Integer) 115))))
          switch (MR_nth_code_unit(HeadVar__1_1, 9)) {
            case (MR_Integer) 0:
              case_num_0 = (MR_Integer) 11;
              break;
            case (MR_Integer) 45:
              switch (MR_nth_code_unit(HeadVar__1_1, 10)) {
                case (MR_Integer) 98:
                  switch (MR_nth_code_unit(HeadVar__1_1, 11)) {
                    case (MR_Integer) 114:
                      if (MR_offset_streq(12, HeadVar__1_1, (MR_String) "snapshots-brief"))
                        case_num_0 = (MR_Integer) 12;
                      break;
                    case (MR_Integer) 121:
                      if (MR_offset_streq(12, HeadVar__1_1, (MR_String) "snapshots-by-type"))
                        case_num_0 = (MR_Integer) 13;
                      break;
                  }
                  break;
                case (MR_Integer) 102:
                  if (MR_offset_streq(11, HeadVar__1_1, (MR_String) "snapshots-file"))
                    case_num_0 = (MR_Integer) 14;
                  break;
                case (MR_Integer) 105:
                  if (MR_offset_streq(11, HeadVar__1_1, (MR_String) "snapshots-include-runtime"))
                    case_num_0 = (MR_Integer) 15;
                  break;
                case (MR_Integer) 114:
                  if (MR_offset_streq(11, HeadVar__1_1, (MR_String) "snapshots-recalc-size"))
                    case_num_0 = (MR_Integer) 16;
                  break;
              }
              break;
          }
        break;
      case (MR_Integer) 117:
        if (MR_offset_streq(1, HeadVar__1_1, (MR_String) "use-dynamic"))
          case_num_0 = (MR_Integer) 17;
        break;
      case (MR_Integer) 118:
        if (((((MR_nth_code_unit(HeadVar__1_1, 1)) == (MR_Integer) 101)) && (((MR_nth_code_unit(HeadVar__1_1, 2)) == (MR_Integer) 114))))
          switch (MR_nth_code_unit(HeadVar__1_1, 3)) {
            case (MR_Integer) 98:
              if (MR_offset_streq(4, HeadVar__1_1, (MR_String) "verbose"))
                case_num_0 = (MR_Integer) 18;
              break;
            case (MR_Integer) 121:
              if (MR_offset_streq(4, HeadVar__1_1, (MR_String) "very-verbose"))
                case_num_0 = (MR_Integer) 19;
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
      *HeadVar__2_2 = ((&options_vector_common_4[52 + case_num_0]))->options__vector_common_type_4_0__vct_4_f_0;
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
options__short_option_2_p_0(
  MR_Char HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  MR_bool succeeded;

  if ((((MR_Unsigned) ((MR_Integer) ((MR_Unsigned) HeadVar__1_1 - (MR_Unsigned) 67))) <= ((MR_Unsigned) 51)))
    if ((((options_scalar_common_5[0])[(((MR_Integer) ((MR_Unsigned) HeadVar__1_1 - (MR_Unsigned) 67)) >> 5)]) & (((MR_Integer) 1 << ((((MR_Integer) ((MR_Unsigned) HeadVar__1_1 - (MR_Unsigned) 67)) & (MR_Integer) 31))))))
    {
      *HeadVar__2_2 = ((&options_vector_common_4[0 + (MR_Integer) ((MR_Unsigned) HeadVar__1_1 - (MR_Unsigned) 67)]))->options__vector_common_type_4_0__vct_4_f_0;
      succeeded = MR_TRUE;
    }
    else
      succeeded = MR_FALSE;
  else
    succeeded = MR_FALSE;
  return succeeded;
}

static MR_bool MR_CALL 
options____Unify____option_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = options____Unify____option_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
options____Compare____option_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  options____Compare____option_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
options____Unify____option_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = options____Unify____option_table_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
options____Compare____option_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  options____Compare____option_table_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__options__init(void)
{
}

void mercury__options__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&options__options__type_ctor_info_option_0);
	MR_register_type_ctor_info(&options__options__type_ctor_info_option_table_0);
}

void mercury__options__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__options__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module options.
