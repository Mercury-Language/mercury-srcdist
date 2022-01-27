/*
** Automatically generated from `options.m'
** by the Mercury compiler,
** version rotd-2017-01-16
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


/* :- module options. */
/* :- implementation. */

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
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
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

static const MR_EnumFunctorDescPtr options__options__enum_value_ordered_option_0[20];

static const MR_EnumFunctorDescPtr options__options__enum_name_ordered_option_0[20];

static const MR_Integer options__options__functor_number_map_option_0[20];

static const MR_FA_TypeInfo_Struct2 options__tree234__ti_tree234_2options__type_ctor_info_option_0getopt__type_ctor_info_option_data_0;

static MR_bool MR_CALL 
options____Unify____option_0_0_10001(
  MR_Box options__wrapper_arg_1,
  MR_Box options__wrapper_arg_2);

static void MR_CALL 
options____Compare____option_0_0_10001(
  MR_Box * options__wrapper_arg_1,
  MR_Box options__wrapper_arg_2,
  MR_Box options__wrapper_arg_3);

static MR_bool MR_CALL 
options____Unify____option_table_0_0_10001(
  MR_Box options__wrapper_arg_1,
  MR_Box options__wrapper_arg_2);

static void MR_CALL 
options____Compare____option_table_0_0_10001(
  MR_Box * options__wrapper_arg_1,
  MR_Box options__wrapper_arg_2,
  MR_Box options__wrapper_arg_3);


static /* final */ const MR_Box options_scalar_common_1[1][3];

static /* final */ const MR_Integer options_scalar_common_3[1][2];

static /* final */ const MR_Box options_scalar_common_4[3][1];

static /* final */ const MR_Box options_scalar_common_5[7][2];


/* sealed */ struct options__vector_common_type_2_0_s {
  const MR_Word options__vector_common_type_2_0__vct_2_f_0;
};

static /* final */ const struct options__vector_common_type_2_0_s options_vector_common_2[72];

/* sealed */ struct options__vector_common_type_6_0_s {
  const MR_Word options__vector_common_type_6_0__vct_6_f_0;
  const MR_Word options__vector_common_type_6_0__vct_6_f_1;
};

static /* final */ const struct options__vector_common_type_6_0_s options_vector_common_6[20];



static /* final */ const MR_Box options_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&options__options__type_ctor_info_option_0)),
    ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_data_0))
  },
};

static /* final */ const MR_Integer options_scalar_common_3[1][2] = {
  /* row 0 */
  {
    (MR_Integer) 2148148739,
    (MR_Integer) 762915
  },
};

static /* final */ const MR_Box options_scalar_common_4[3][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "Invalid argument to \140--profile\' or \140-p\' option"))
  },
};

static /* final */ const MR_Box options_scalar_common_5[7][2] = {
  /* row 0 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "Prof.Counts"))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "Prof.CallPair"))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "Prof.Decl"))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) ""))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "Prof.Snapshots"))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "Prof.MemoryCells"))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "Prof.MemoryWords"))
  },
};


static /* final */ const struct options__vector_common_type_2_0_s options_vector_common_2[72] = {
  /* row 0 */   {     (MR_Integer) 9 },
  /* row 1 */   {     (MR_Integer) 11 },
  /* row 2 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 3 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 4 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 5 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 6 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 7 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 8 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 9 */   {     (MR_Integer) 12 },
  /* row 10 */   {     (MR_Integer) 7 },
  /* row 11 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 12 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 13 */   {     (MR_Integer) 10 },
  /* row 14 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 15 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 16 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 17 */   {     (MR_Integer) 15 },
  /* row 18 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 19 */   {     (MR_Integer) 1 },
  /* row 20 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 21 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 22 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 23 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 24 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 25 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 26 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 27 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 28 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 29 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 30 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 31 */   {     (MR_Integer) 16 },
  /* row 32 */   {     (MR_Integer) 3 },
  /* row 33 */   {     (MR_Integer) 2 },
  /* row 34 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 35 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 36 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 37 */   {     (MR_Integer) 19 },
  /* row 38 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 39 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 40 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 41 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 42 */   {     (MR_Integer) 6 },
  /* row 43 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 44 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 45 */   {     (MR_Integer) 4 },
  /* row 46 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 47 */   {     (MR_Integer) 17 },
  /* row 48 */   {     (MR_Integer) 13 },
  /* row 49 */   {     (MR_Integer) 5 },
  /* row 50 */   {     (MR_Word) (MR_Integer) 0 },
  /* row 51 */   {     (MR_Integer) 0 },
  /* row 52 */   {     (MR_Integer) 3 },
  /* row 53 */   {     (MR_Integer) 10 },
  /* row 54 */   {     (MR_Integer) 9 },
  /* row 55 */   {     (MR_Integer) 11 },
  /* row 56 */   {     (MR_Integer) 8 },
  /* row 57 */   {     (MR_Integer) 19 },
  /* row 58 */   {     (MR_Integer) 19 },
  /* row 59 */   {     (MR_Integer) 4 },
  /* row 60 */   {     (MR_Integer) 7 },
  /* row 61 */   {     (MR_Integer) 6 },
  /* row 62 */   {     (MR_Integer) 5 },
  /* row 63 */   {     (MR_Integer) 13 },
  /* row 64 */   {     (MR_Integer) 16 },
  /* row 65 */   {     (MR_Integer) 15 },
  /* row 66 */   {     (MR_Integer) 14 },
  /* row 67 */   {     (MR_Integer) 17 },
  /* row 68 */   {     (MR_Integer) 18 },
  /* row 69 */   {     (MR_Integer) 2 },
  /* row 70 */   {     (MR_Integer) 0 },
  /* row 71 */   {     (MR_Integer) 1 },
};

static /* final */ const struct options__vector_common_type_6_0_s options_vector_common_6[20] = {
  /* row 0 */
  {
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &options_scalar_common_4[0])
  },
  /* row 1 */
  {
    (MR_Integer) 1,
    (MR_Word) MR_mkword(MR_mktag(1), &options_scalar_common_4[0])
  },
  /* row 2 */
  {
    (MR_Integer) 2,
    (MR_Word) MR_mkword(MR_mktag(1), &options_scalar_common_4[0])
  },
  /* row 3 */
  {
    (MR_Integer) 3,
    (MR_Word) MR_mkword(MR_mktag(1), &options_scalar_common_4[0])
  },
  /* row 4 */
  {
    (MR_Integer) 4,
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))
  },
  /* row 5 */
  {
    (MR_Integer) 5,
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 6 */
  {
    (MR_Integer) 6,
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 7 */
  {
    (MR_Integer) 7,
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 8 */
  {
    (MR_Integer) 9,
    (MR_Word) MR_mkword(MR_mktag(3), &options_scalar_common_5[0])
  },
  /* row 9 */
  {
    (MR_Integer) 10,
    (MR_Word) MR_mkword(MR_mktag(3), &options_scalar_common_5[1])
  },
  /* row 10 */
  {
    (MR_Integer) 11,
    (MR_Word) MR_mkword(MR_mktag(3), &options_scalar_common_5[2])
  },
  /* row 11 */
  {
    (MR_Integer) 12,
    (MR_Word) MR_mkword(MR_mktag(3), &options_scalar_common_5[3])
  },
  /* row 12 */
  {
    (MR_Integer) 8,
    (MR_Word) MR_mkword(MR_mktag(1), &options_scalar_common_4[1])
  },
  /* row 13 */
  {
    (MR_Integer) 13,
    (MR_Word) MR_mkword(MR_mktag(1), &options_scalar_common_4[0])
  },
  /* row 14 */
  {
    (MR_Integer) 14,
    (MR_Word) MR_mkword(MR_mktag(3), &options_scalar_common_5[4])
  },
  /* row 15 */
  {
    (MR_Integer) 15,
    (MR_Word) MR_mkword(MR_mktag(1), &options_scalar_common_4[0])
  },
  /* row 16 */
  {
    (MR_Integer) 16,
    (MR_Word) MR_mkword(MR_mktag(1), &options_scalar_common_4[0])
  },
  /* row 17 */
  {
    (MR_Integer) 17,
    (MR_Word) MR_mkword(MR_mktag(1), &options_scalar_common_4[0])
  },
  /* row 18 */
  {
    (MR_Integer) 18,
    (MR_Word) MR_mkword(MR_mktag(1), &options_scalar_common_4[1])
  },
  /* row 19 */
  {
    (MR_Integer) 19,
    (MR_Word) MR_mkword(MR_mktag(1), &options_scalar_common_4[0])
  },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_0 = {
  (MR_String) "verbose",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_1 = {
  (MR_String) "very_verbose",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_2 = {
  (MR_String) "dynamic_cg",
  (MR_Integer) 2
};

static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_3 = {
  (MR_String) "call_graph",
  (MR_Integer) 3
};

static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_4 = {
  (MR_String) "profile",
  (MR_Integer) 4
};

static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_5 = {
  (MR_String) "profile_time",
  (MR_Integer) 5
};

static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_6 = {
  (MR_String) "profile_memory_words",
  (MR_Integer) 6
};

static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_7 = {
  (MR_String) "profile_memory_cells",
  (MR_Integer) 7
};

static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_8 = {
  (MR_String) "demangle",
  (MR_Integer) 8
};

static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_9 = {
  (MR_String) "countfile",
  (MR_Integer) 9
};

static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_10 = {
  (MR_String) "pairfile",
  (MR_Integer) 10
};

static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_11 = {
  (MR_String) "declfile",
  (MR_Integer) 11
};

static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_12 = {
  (MR_String) "libraryfile",
  (MR_Integer) 12
};

static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_13 = {
  (MR_String) "snapshots",
  (MR_Integer) 13
};

static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_14 = {
  (MR_String) "snapshots_file",
  (MR_Integer) 14
};

static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_15 = {
  (MR_String) "snapshots_by_type",
  (MR_Integer) 15
};

static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_16 = {
  (MR_String) "snapshots_brief",
  (MR_Integer) 16
};

static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_17 = {
  (MR_String) "snapshots_include_runtime",
  (MR_Integer) 17
};

static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_18 = {
  (MR_String) "snapshots_recalc_size",
  (MR_Integer) 18
};

static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_19 = {
  (MR_String) "help",
  (MR_Integer) 19
};

static const MR_EnumFunctorDescPtr options__options__enum_value_ordered_option_0[20] = {
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (options____Unify____option_0_0_10001)),
  ((MR_Box) (options____Compare____option_0_0_10001)),
  (MR_String) "options",
  (MR_String) "option",
  {     options__options__enum_name_ordered_option_0 },
  {     options__options__enum_value_ordered_option_0 },
  (MR_Integer) 20,
  (MR_Integer) 4,
  options__options__functor_number_map_option_0
};

static const MR_FA_TypeInfo_Struct2 options__tree234__ti_tree234_2options__type_ctor_info_option_0getopt__type_ctor_info_option_data_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &options__options__type_ctor_info_option_0,
    (MR_TypeInfo) &mercury__getopt__getopt__type_ctor_info_option_data_0
  }
};

const MR_TypeCtorInfo_Struct options__options__type_ctor_info_option_table_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (options____Unify____option_table_0_0_10001)),
  ((MR_Box) (options____Compare____option_table_0_0_10001)),
  (MR_String) "options",
  (MR_String) "option_table",
  {     NULL },
  {     (MR_PseudoTypeInfo) &options__tree234__ti_tree234_2options__type_ctor_info_option_0getopt__type_ctor_info_option_data_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static MR_bool MR_CALL 
options____Unify____option_0_0_10001(
  MR_Box options__wrapper_arg_1,
  MR_Box options__wrapper_arg_2)
{
  {
    MR_bool options__succeeded;

    {
      options__succeeded = options____Unify____option_0_0(((MR_Word) options__wrapper_arg_1), ((MR_Word) options__wrapper_arg_2));
    }
    return options__succeeded;
  }
}

static void MR_CALL 
options____Compare____option_0_0_10001(
  MR_Box * options__wrapper_arg_1,
  MR_Box options__wrapper_arg_2,
  MR_Box options__wrapper_arg_3)
{
  {
    MR_Word options__conv0_HeadVar__1_1;

    {
      options____Compare____option_0_0(&options__conv0_HeadVar__1_1, ((MR_Word) options__wrapper_arg_2), ((MR_Word) options__wrapper_arg_3));
    }
    *options__wrapper_arg_1 = ((MR_Box) (options__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
options____Unify____option_table_0_0_10001(
  MR_Box options__wrapper_arg_1,
  MR_Box options__wrapper_arg_2)
{
  {
    MR_bool options__succeeded;

    {
      options__succeeded = options____Unify____option_table_0_0(((MR_Word) options__wrapper_arg_1), ((MR_Word) options__wrapper_arg_2));
    }
    return options__succeeded;
  }
}

static void MR_CALL 
options____Compare____option_table_0_0_10001(
  MR_Box * options__wrapper_arg_1,
  MR_Box options__wrapper_arg_2,
  MR_Box options__wrapper_arg_3)
{
  {
    MR_Word options__conv0_HeadVar__1_1;

    {
      options____Compare____option_table_0_0(&options__conv0_HeadVar__1_1, ((MR_Word) options__wrapper_arg_2), ((MR_Word) options__wrapper_arg_3));
    }
    *options__wrapper_arg_1 = ((MR_Box) (options__conv0_HeadVar__1_1));
  }
}

void MR_CALL 
options____Compare____option_table_0_0(
  MR_Word * options__HeadVar__1_1,
  MR_Word options__HeadVar__2_2,
  MR_Word options__HeadVar__3_3)
{
  {
    MR_bool options__succeeded;
    MR_Word options__Cast_HeadVar1_4 = options__HeadVar__2_2;
    MR_Word options__Cast_HeadVar2_5 = options__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &options_scalar_common_1[0], options__HeadVar__1_1, ((MR_Box) (options__Cast_HeadVar1_4)), ((MR_Box) (options__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
options____Unify____option_table_0_0(
  MR_Word options__HeadVar__1_1,
  MR_Word options__HeadVar__2_2)
{
  {
    MR_bool options__succeeded;
    MR_Word options__Cast_HeadVar1_3 = options__HeadVar__1_1;
    MR_Word options__Cast_HeadVar2_4 = options__HeadVar__2_2;

    {
      options__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &options_scalar_common_1[0], ((MR_Box) (options__Cast_HeadVar1_3)), ((MR_Box) (options__Cast_HeadVar2_4)));
    }
    return options__succeeded;
  }
}

void MR_CALL 
options____Compare____option_0_0(
  MR_Word * options__HeadVar__1_1,
  MR_Word options__HeadVar__2_2,
  MR_Word options__HeadVar__3_3)
{
  {
    MR_bool options__succeeded;
    MR_Integer options__Cast_HeadVar1_4 = (MR_Integer) options__HeadVar__2_2;
    MR_Integer options__Cast_HeadVar2_5 = (MR_Integer) options__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(options__HeadVar__1_1, options__Cast_HeadVar1_4, options__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
options____Unify____option_0_0(
  MR_Word options__HeadVar__2_1,
  MR_Word options__HeadVar__2_2)
{
  {
    MR_bool options__succeeded = (options__HeadVar__2_1 == options__HeadVar__2_2);

    return options__succeeded;
  }
}

void MR_CALL 
options__maybe_flush_output_3_p_0(
  MR_Word options__HeadVar__1_1)
{
  {
    MR_bool options__succeeded;

    switch (options__HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__io__flush_output_2_p_0();
        }
        break;
    }
  }
}

void MR_CALL 
options__maybe_write_string_4_p_0(
  MR_Word options__HeadVar__1_1,
  MR_String options__String_2)
{
  {
    MR_bool options__succeeded;

    switch (options__HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__io__write_string_3_p_0(options__String_2);
        }
        break;
    }
  }
}

void MR_CALL 
options__options_help_2_p_0(void)
{
  {
    MR_bool options__succeeded;

    {
      mercury__io__write_string_3_p_0((MR_String) "\t-h, --help\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\t\tPrint this usage message.\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\nProfiler Options:\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\t-c, --call-graph\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\t\tInclude the call graph profile.\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\t-d, --use-dynamic\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\t\tBuild the call graph dynamically.\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\t-p, --profile {time, memory-words, memory-cells}\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\t\tSelect what to profile: time, amount of memory allocated, or\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\t\tnumber of memory allocations (regardless of size).\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\t-m\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\t\tSame as \140--profile memory-words\'\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\t-M\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\t\tSame as \140--profile memory-cells\'.\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\t-t\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\t\tSame as \140--profile time\'.\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\t--no-demangle\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\t\tOutput the mangled predicate and function names.\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\nFilename Options:\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\t-C <file>, --count-file <file>\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\t\tName of the count file. Usually \140Prof.Counts\',\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\t\t\140Prof.MemoryWords\', or \140Prof.MemoryCells\'.\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\t-D <file>, --declaration-file <file>\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\t\tName of the declaration file. Usually \140Prof.Decl\'.\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\t-P <file>, --call-pair-file <file>\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\t\tName of the call-pair file. Usually \140Prof.CallPair\'.\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\t-L <file>, --library-callgraph <file>\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\t\tName of the file which contains the call graph for\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\t\tthe library modules.\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\nSnapshot options:\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\t-s, --snapshots\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\t\tShow summary of heap objects at the times\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\t\t\140benchmarking.report_memory_attribution\' was called.\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\t\tThis overrides other profiler modes.\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\t--snapshots-file <file>\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\t\tName of the snapshots file. Usually \140Prof.Snapshots\'.\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\t-T, --snapshots-by-type\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\t\tGroup results by type.\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\t-b, --snapshots-brief\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\t\tGenerate a brief profile.\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\t-r, --snapshots-include-runtime\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\t\tInclude internal Mercury runtime structures in the\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\t\tprofile. These are excluded by default.\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\nVerbosity Options:\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\t-v, --verbose\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\t\tOutput progress messages at each stage.\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\t-V, --very-verbose\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\t\tOutput very verbose progress messages.\n");
    }
  }
}

MR_bool MR_CALL 
options__special_handler_4_p_0(
  MR_Word options__HeadVar__1_1,
  MR_Word options__HeadVar__2_2,
  MR_Word options__STATE_VARIABLE_OptionTable_0_3,
  MR_Word * options__HeadVar__4_4)
{
  {
    MR_bool options__succeeded;

    switch (options__HeadVar__1_1) {
      default:
        options__succeeded = MR_FALSE;
        break;
      case (MR_Integer) 4:
        {
          MR_String options__WhatToProfile_5;
          MR_String options__CountFile_8;

          options__succeeded = ((((MR_tag((MR_Word) options__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), options__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
          if (options__succeeded)
            {
              options__WhatToProfile_5 = ((MR_String) (MR_hl_field(MR_mktag(3), options__HeadVar__2_2, (MR_Integer) 1)));
              if ((strcmp(options__WhatToProfile_5, (MR_String) "time") == 0))
                {
                  options__CountFile_8 = (MR_String) "Prof.Counts";
                  options__succeeded = MR_TRUE;
                }
              else
              if ((strcmp(options__WhatToProfile_5, (MR_String) "memory-cells") == 0))
                {
                  options__CountFile_8 = (MR_String) "Prof.MemoryCells";
                  options__succeeded = MR_TRUE;
                }
              else
              if ((strcmp(options__WhatToProfile_5, (MR_String) "memory-words") == 0))
                {
                  options__CountFile_8 = (MR_String) "Prof.MemoryWords";
                  options__succeeded = MR_TRUE;
                }
              else
                options__succeeded = MR_FALSE;
              if (options__succeeded)
                {
                  MR_Word options__V_11_11;
                  MR_Word options__STATE_VARIABLE_OptionTable_12_12;

                  {
                    options__V_11_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), options__V_11_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), options__V_11_11, 1) = ((MR_Box) (options__CountFile_8));
                  }
                  {
                    mercury__map__set_4_p_0((MR_Word) &options__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0, ((MR_Box) ((MR_Integer) 9)), ((MR_Box) (options__V_11_11)), options__STATE_VARIABLE_OptionTable_0_3, &options__STATE_VARIABLE_OptionTable_12_12);
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    *options__HeadVar__4_4 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (options__STATE_VARIABLE_OptionTable_12_12));
                  }
                }
              else
                {
                  *options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &options_scalar_common_4[2]);
                }
              options__succeeded = MR_TRUE;
            }
        }
        break;
      case (MR_Integer) 7:
        {
          MR_Word options__STATE_VARIABLE_OptionTable_27;

          {
            mercury__map__set_4_p_0((MR_Word) &options__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0, ((MR_Box) ((MR_Integer) 9)), ((MR_Box) (MR_mkword(MR_mktag(3), &options_scalar_common_5[5]))), options__STATE_VARIABLE_OptionTable_0_3, &options__STATE_VARIABLE_OptionTable_27);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            *options__HeadVar__4_4 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (options__STATE_VARIABLE_OptionTable_27));
          }
          options__succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 6:
        {
          MR_Word options__STATE_VARIABLE_OptionTable_19;

          {
            mercury__map__set_4_p_0((MR_Word) &options__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0, ((MR_Box) ((MR_Integer) 9)), ((MR_Box) (MR_mkword(MR_mktag(3), &options_scalar_common_5[6]))), options__STATE_VARIABLE_OptionTable_0_3, &options__STATE_VARIABLE_OptionTable_19);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            *options__HeadVar__4_4 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (options__STATE_VARIABLE_OptionTable_19));
          }
          options__succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 5:
        {
          MR_Word options__STATE_VARIABLE_OptionTable_35;

          {
            mercury__map__set_4_p_0((MR_Word) &options__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0, ((MR_Box) ((MR_Integer) 9)), ((MR_Box) (MR_mkword(MR_mktag(3), &options_scalar_common_5[0]))), options__STATE_VARIABLE_OptionTable_0_3, &options__STATE_VARIABLE_OptionTable_35);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            *options__HeadVar__4_4 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (options__STATE_VARIABLE_OptionTable_35));
          }
          options__succeeded = MR_TRUE;
        }
        break;
    }
    return options__succeeded;
  }
}

void MR_CALL 
options__option_default_2_p_0(
  MR_Word * options__HeadVar__1_1,
  MR_Word * options__HeadVar__2_2,
  MR_Cont options__cont,
  void * options__cont_env_ptr)
{
  {
    MR_bool options__succeeded;

    {
      MR_Integer options__slot_0 = (MR_Integer) 0;

      do
        {
          *options__HeadVar__1_1 = ((&options_vector_common_6[0 + options__slot_0]))->options__vector_common_type_6_0__vct_6_f_0;
          *options__HeadVar__2_2 = ((&options_vector_common_6[0 + options__slot_0]))->options__vector_common_type_6_0__vct_6_f_1;
          {
            options__cont(options__cont_env_ptr);
          }
          options__slot_0 = (options__slot_0 + (MR_Integer) 1);
        }
      while ((options__slot_0 < (MR_Integer) 20));
    }
  }
}

MR_bool MR_CALL 
options__long_option_2_p_0(
  MR_String options__HeadVar__1_1,
  MR_Word * options__HeadVar__2_2)
{
  {
    MR_bool options__succeeded;

    {
      MR_Integer options__case_num_0 = (MR_Integer) -1;

      switch (MR_nth_code_unit(options__HeadVar__1_1, 0)) {
        case (MR_Integer) 99:
          switch (MR_nth_code_unit(options__HeadVar__1_1, 1)) {
            case (MR_Integer) 97:
              if (((((((MR_nth_code_unit(options__HeadVar__1_1, 2)) == (MR_Integer) 108)) && (((MR_nth_code_unit(options__HeadVar__1_1, 3)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(options__HeadVar__1_1, 4)) == (MR_Integer) 45))))
                switch (MR_nth_code_unit(options__HeadVar__1_1, 5)) {
                  case (MR_Integer) 103:
                    if (MR_offset_streq(6, options__HeadVar__1_1, (MR_String) "call-graph"))
                      options__case_num_0 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 112:
                    if (MR_offset_streq(6, options__HeadVar__1_1, (MR_String) "call-pair-file"))
                      options__case_num_0 = (MR_Integer) 1;
                    break;
                }
              break;
            case (MR_Integer) 111:
              if (MR_offset_streq(2, options__HeadVar__1_1, (MR_String) "count-file"))
                options__case_num_0 = (MR_Integer) 2;
              break;
          }
          break;
        case (MR_Integer) 100:
          if (((MR_nth_code_unit(options__HeadVar__1_1, 1)) == (MR_Integer) 101))
            switch (MR_nth_code_unit(options__HeadVar__1_1, 2)) {
              case (MR_Integer) 99:
                if (MR_offset_streq(3, options__HeadVar__1_1, (MR_String) "declaration-file"))
                  options__case_num_0 = (MR_Integer) 3;
                break;
              case (MR_Integer) 109:
                if (MR_offset_streq(3, options__HeadVar__1_1, (MR_String) "demangle"))
                  options__case_num_0 = (MR_Integer) 4;
                break;
            }
          break;
        case (MR_Integer) 104:
          if (MR_offset_streq(1, options__HeadVar__1_1, (MR_String) "help"))
            options__case_num_0 = (MR_Integer) 5;
          break;
        case (MR_Integer) 108:
          if (MR_offset_streq(1, options__HeadVar__1_1, (MR_String) "library-callgraph"))
            options__case_num_0 = (MR_Integer) 6;
          break;
        case (MR_Integer) 112:
          if (((((((((((((MR_nth_code_unit(options__HeadVar__1_1, 1)) == (MR_Integer) 114)) && (((MR_nth_code_unit(options__HeadVar__1_1, 2)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(options__HeadVar__1_1, 3)) == (MR_Integer) 102)))) && (((MR_nth_code_unit(options__HeadVar__1_1, 4)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(options__HeadVar__1_1, 5)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(options__HeadVar__1_1, 6)) == (MR_Integer) 101))))
            switch (MR_nth_code_unit(options__HeadVar__1_1, 7)) {
              case (MR_Integer) 0:
                options__case_num_0 = (MR_Integer) 7;
                break;
              case (MR_Integer) 45:
                switch (MR_nth_code_unit(options__HeadVar__1_1, 8)) {
                  case (MR_Integer) 109:
                    if (((((((((((((MR_nth_code_unit(options__HeadVar__1_1, 9)) == (MR_Integer) 101)) && (((MR_nth_code_unit(options__HeadVar__1_1, 10)) == (MR_Integer) 109)))) && (((MR_nth_code_unit(options__HeadVar__1_1, 11)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(options__HeadVar__1_1, 12)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(options__HeadVar__1_1, 13)) == (MR_Integer) 121)))) && (((MR_nth_code_unit(options__HeadVar__1_1, 14)) == (MR_Integer) 45))))
                      switch (MR_nth_code_unit(options__HeadVar__1_1, 15)) {
                        case (MR_Integer) 99:
                          if (MR_offset_streq(16, options__HeadVar__1_1, (MR_String) "profile-memory-cells"))
                            options__case_num_0 = (MR_Integer) 8;
                          break;
                        case (MR_Integer) 119:
                          if (MR_offset_streq(16, options__HeadVar__1_1, (MR_String) "profile-memory-words"))
                            options__case_num_0 = (MR_Integer) 9;
                          break;
                      }
                    break;
                  case (MR_Integer) 116:
                    if (MR_offset_streq(9, options__HeadVar__1_1, (MR_String) "profile-time"))
                      options__case_num_0 = (MR_Integer) 10;
                    break;
                }
                break;
            }
          break;
        case (MR_Integer) 115:
          if (((((((((((((((((MR_nth_code_unit(options__HeadVar__1_1, 1)) == (MR_Integer) 110)) && (((MR_nth_code_unit(options__HeadVar__1_1, 2)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(options__HeadVar__1_1, 3)) == (MR_Integer) 112)))) && (((MR_nth_code_unit(options__HeadVar__1_1, 4)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(options__HeadVar__1_1, 5)) == (MR_Integer) 104)))) && (((MR_nth_code_unit(options__HeadVar__1_1, 6)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(options__HeadVar__1_1, 7)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(options__HeadVar__1_1, 8)) == (MR_Integer) 115))))
            switch (MR_nth_code_unit(options__HeadVar__1_1, 9)) {
              case (MR_Integer) 0:
                options__case_num_0 = (MR_Integer) 11;
                break;
              case (MR_Integer) 45:
                switch (MR_nth_code_unit(options__HeadVar__1_1, 10)) {
                  case (MR_Integer) 98:
                    switch (MR_nth_code_unit(options__HeadVar__1_1, 11)) {
                      case (MR_Integer) 114:
                        if (MR_offset_streq(12, options__HeadVar__1_1, (MR_String) "snapshots-brief"))
                          options__case_num_0 = (MR_Integer) 12;
                        break;
                      case (MR_Integer) 121:
                        if (MR_offset_streq(12, options__HeadVar__1_1, (MR_String) "snapshots-by-type"))
                          options__case_num_0 = (MR_Integer) 13;
                        break;
                    }
                    break;
                  case (MR_Integer) 102:
                    if (MR_offset_streq(11, options__HeadVar__1_1, (MR_String) "snapshots-file"))
                      options__case_num_0 = (MR_Integer) 14;
                    break;
                  case (MR_Integer) 105:
                    if (MR_offset_streq(11, options__HeadVar__1_1, (MR_String) "snapshots-include-runtime"))
                      options__case_num_0 = (MR_Integer) 15;
                    break;
                  case (MR_Integer) 114:
                    if (MR_offset_streq(11, options__HeadVar__1_1, (MR_String) "snapshots-recalc-size"))
                      options__case_num_0 = (MR_Integer) 16;
                    break;
                }
                break;
            }
          break;
        case (MR_Integer) 117:
          if (MR_offset_streq(1, options__HeadVar__1_1, (MR_String) "use-dynamic"))
            options__case_num_0 = (MR_Integer) 17;
          break;
        case (MR_Integer) 118:
          if (((((MR_nth_code_unit(options__HeadVar__1_1, 1)) == (MR_Integer) 101)) && (((MR_nth_code_unit(options__HeadVar__1_1, 2)) == (MR_Integer) 114))))
            switch (MR_nth_code_unit(options__HeadVar__1_1, 3)) {
              case (MR_Integer) 98:
                if (MR_offset_streq(4, options__HeadVar__1_1, (MR_String) "verbose"))
                  options__case_num_0 = (MR_Integer) 18;
                break;
              case (MR_Integer) 121:
                if (MR_offset_streq(4, options__HeadVar__1_1, (MR_String) "very-verbose"))
                  options__case_num_0 = (MR_Integer) 19;
                break;
            }
          break;
      }
      if ((options__case_num_0 < (MR_Integer) 0))
        options__succeeded = MR_FALSE;
      else
        {
          /* we found a match; look up the results */
          *options__HeadVar__2_2 = ((&options_vector_common_2[52 + options__case_num_0]))->options__vector_common_type_2_0__vct_2_f_0;
          options__succeeded = MR_TRUE;
        }
    }
    return options__succeeded;
  }
}

MR_bool MR_CALL 
options__short_option_2_p_0(
  MR_Char options__HeadVar__1_1,
  MR_Word * options__HeadVar__2_2)
{
  {
    MR_bool options__succeeded;

    if ((((MR_Unsigned) (options__HeadVar__1_1 - (MR_Integer) 67)) <= ((MR_Unsigned) (MR_Integer) 51)))
      if ((((options_scalar_common_3[0])[(((options__HeadVar__1_1 - (MR_Integer) 67)) >> (MR_Integer) 5)]) & (((MR_Integer) 1 << ((((options__HeadVar__1_1 - (MR_Integer) 67)) & (MR_Integer) 31))))))
        {
          *options__HeadVar__2_2 = ((&options_vector_common_2[0 + (options__HeadVar__1_1 - (MR_Integer) 67)]))->options__vector_common_type_2_0__vct_2_f_0;
          options__succeeded = MR_TRUE;
        }
      else
        options__succeeded = MR_FALSE;
    else
      options__succeeded = MR_FALSE;
    return options__succeeded;
  }
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

/* :- end_module options. */
