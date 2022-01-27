/*
** Automatically generated from `options.m'
** by the Mercury compiler,
** version rotd-2015-10-06
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




#line 64 "options.c"
static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_0;

#line 67 "options.c"
static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_1;

#line 70 "options.c"
static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_2;

#line 73 "options.c"
static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_3;

#line 76 "options.c"
static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_4;

#line 79 "options.c"
static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_5;

#line 82 "options.c"
static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_6;

#line 85 "options.c"
static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_7;

#line 88 "options.c"
static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_8;

#line 91 "options.c"
static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_9;

#line 94 "options.c"
static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_10;

#line 97 "options.c"
static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_11;

#line 100 "options.c"
static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_12;

#line 103 "options.c"
static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_13;

#line 106 "options.c"
static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_14;

#line 109 "options.c"
static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_15;

#line 112 "options.c"
static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_16;

#line 115 "options.c"
static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_17;

#line 118 "options.c"
static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_18;

#line 121 "options.c"
static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_19;

#line 124 "options.c"
static const MR_EnumFunctorDescPtr options__options__enum_value_ordered_option_0[20];

#line 127 "options.c"
static const MR_EnumFunctorDescPtr options__options__enum_name_ordered_option_0[20];

#line 130 "options.c"
static const MR_Integer options__options__functor_number_map_option_0[20];

#line 133 "options.c"
static const MR_FA_TypeInfo_Struct2 options__tree234__ti_tree234_2options__type_ctor_info_option_0getopt__type_ctor_info_option_data_0;

#line 136 "options.c"
static MR_bool MR_CALL 
options____Unify____option_0_0_10001(
#line 139 "options.c"
  MR_Box options__wrapper_arg_1,
#line 141 "options.c"
  MR_Box options__wrapper_arg_2);

#line 144 "options.c"
static void MR_CALL 
options____Compare____option_0_0_10001(
#line 147 "options.c"
  MR_Box * options__wrapper_arg_1,
#line 149 "options.c"
  MR_Box options__wrapper_arg_2,
#line 151 "options.c"
  MR_Box options__wrapper_arg_3);

#line 154 "options.c"
static MR_bool MR_CALL 
options____Unify____option_table_0_0_10001(
#line 157 "options.c"
  MR_Box options__wrapper_arg_1,
#line 159 "options.c"
  MR_Box options__wrapper_arg_2);

#line 162 "options.c"
static void MR_CALL 
options____Compare____option_table_0_0_10001(
#line 165 "options.c"
  MR_Box * options__wrapper_arg_1,
#line 167 "options.c"
  MR_Box options__wrapper_arg_2,
#line 169 "options.c"
  MR_Box options__wrapper_arg_3);


static /* final */ const MR_Box options_scalar_common_1[1][3];

static /* final */ const MR_Integer options_scalar_common_3[1][2];

static /* final */ const MR_Box options_scalar_common_4[3][1];

static /* final */ const MR_Box options_scalar_common_5[7][2];


#line 106 "options.m"
/* sealed */ struct options__vector_common_type_2_0_s {
#line 106 "options.m"
  const MR_Word options__vector_common_type_2_0__vct_2_f_0;
#line 106 "options.m"
};

static /* final */ const struct options__vector_common_type_2_0_s options_vector_common_2[72];

#line 79 "options.m"
/* sealed */ struct options__vector_common_type_6_0_s {
#line 79 "options.m"
  const MR_Word options__vector_common_type_6_0__vct_6_f_0;
#line 79 "options.m"
  const MR_Word options__vector_common_type_6_0__vct_6_f_1;
#line 79 "options.m"
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



#line 460 "options.c"
static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_0 = {
  (MR_String) "verbose",
  (MR_Integer) 0
};

#line 466 "options.c"
static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_1 = {
  (MR_String) "very_verbose",
  (MR_Integer) 1
};

#line 472 "options.c"
static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_2 = {
  (MR_String) "dynamic_cg",
  (MR_Integer) 2
};

#line 478 "options.c"
static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_3 = {
  (MR_String) "call_graph",
  (MR_Integer) 3
};

#line 484 "options.c"
static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_4 = {
  (MR_String) "profile",
  (MR_Integer) 4
};

#line 490 "options.c"
static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_5 = {
  (MR_String) "profile_time",
  (MR_Integer) 5
};

#line 496 "options.c"
static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_6 = {
  (MR_String) "profile_memory_words",
  (MR_Integer) 6
};

#line 502 "options.c"
static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_7 = {
  (MR_String) "profile_memory_cells",
  (MR_Integer) 7
};

#line 508 "options.c"
static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_8 = {
  (MR_String) "demangle",
  (MR_Integer) 8
};

#line 514 "options.c"
static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_9 = {
  (MR_String) "countfile",
  (MR_Integer) 9
};

#line 520 "options.c"
static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_10 = {
  (MR_String) "pairfile",
  (MR_Integer) 10
};

#line 526 "options.c"
static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_11 = {
  (MR_String) "declfile",
  (MR_Integer) 11
};

#line 532 "options.c"
static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_12 = {
  (MR_String) "libraryfile",
  (MR_Integer) 12
};

#line 538 "options.c"
static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_13 = {
  (MR_String) "snapshots",
  (MR_Integer) 13
};

#line 544 "options.c"
static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_14 = {
  (MR_String) "snapshots_file",
  (MR_Integer) 14
};

#line 550 "options.c"
static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_15 = {
  (MR_String) "snapshots_by_type",
  (MR_Integer) 15
};

#line 556 "options.c"
static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_16 = {
  (MR_String) "snapshots_brief",
  (MR_Integer) 16
};

#line 562 "options.c"
static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_17 = {
  (MR_String) "snapshots_include_runtime",
  (MR_Integer) 17
};

#line 568 "options.c"
static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_18 = {
  (MR_String) "snapshots_recalc_size",
  (MR_Integer) 18
};

#line 574 "options.c"
static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_19 = {
  (MR_String) "help",
  (MR_Integer) 19
};

#line 580 "options.c"
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

#line 604 "options.c"
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

#line 628 "options.c"
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

#line 652 "options.c"
const MR_TypeCtorInfo_Struct options__options__type_ctor_info_option_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 669 "options.c"
static const MR_FA_TypeInfo_Struct2 options__tree234__ti_tree234_2options__type_ctor_info_option_0getopt__type_ctor_info_option_data_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &options__options__type_ctor_info_option_0,
    (MR_TypeInfo) &mercury__getopt__getopt__type_ctor_info_option_data_0
  }
};

#line 678 "options.c"
const MR_TypeCtorInfo_Struct options__options__type_ctor_info_option_table_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 695 "options.c"
static MR_bool MR_CALL 
options____Unify____option_0_0_10001(
#line 698 "options.c"
  MR_Box options__wrapper_arg_1,
#line 700 "options.c"
  MR_Box options__wrapper_arg_2)
#line 702 "options.c"
{
#line 704 "options.c"
  {
#line 706 "options.c"
    MR_bool options__succeeded;

#line 709 "options.c"
    {
#line 711 "options.c"
      options__succeeded = options____Unify____option_0_0(((MR_Word) options__wrapper_arg_1), ((MR_Word) options__wrapper_arg_2));
    }
#line 714 "options.c"
    return options__succeeded;
#line 716 "options.c"
  }
#line 718 "options.c"
}

#line 721 "options.c"
static void MR_CALL 
options____Compare____option_0_0_10001(
#line 724 "options.c"
  MR_Box * options__wrapper_arg_1,
#line 726 "options.c"
  MR_Box options__wrapper_arg_2,
#line 728 "options.c"
  MR_Box options__wrapper_arg_3)
#line 730 "options.c"
{
#line 732 "options.c"
  {
#line 734 "options.c"
    MR_Word options__conv0_HeadVar__1_1;

#line 737 "options.c"
    {
#line 739 "options.c"
      options____Compare____option_0_0(&options__conv0_HeadVar__1_1, ((MR_Word) options__wrapper_arg_2), ((MR_Word) options__wrapper_arg_3));
    }
#line 742 "options.c"
    *options__wrapper_arg_1 = ((MR_Box) (options__conv0_HeadVar__1_1));
#line 744 "options.c"
  }
#line 746 "options.c"
}

#line 749 "options.c"
static MR_bool MR_CALL 
options____Unify____option_table_0_0_10001(
#line 752 "options.c"
  MR_Box options__wrapper_arg_1,
#line 754 "options.c"
  MR_Box options__wrapper_arg_2)
#line 756 "options.c"
{
#line 758 "options.c"
  {
#line 760 "options.c"
    MR_bool options__succeeded;

#line 763 "options.c"
    {
#line 765 "options.c"
      options__succeeded = options____Unify____option_table_0_0(((MR_Word) options__wrapper_arg_1), ((MR_Word) options__wrapper_arg_2));
    }
#line 768 "options.c"
    return options__succeeded;
#line 770 "options.c"
  }
#line 772 "options.c"
}

#line 775 "options.c"
static void MR_CALL 
options____Compare____option_table_0_0_10001(
#line 778 "options.c"
  MR_Box * options__wrapper_arg_1,
#line 780 "options.c"
  MR_Box options__wrapper_arg_2,
#line 782 "options.c"
  MR_Box options__wrapper_arg_3)
#line 784 "options.c"
{
#line 786 "options.c"
  {
#line 788 "options.c"
    MR_Word options__conv0_HeadVar__1_1;

#line 791 "options.c"
    {
#line 793 "options.c"
      options____Compare____option_table_0_0(&options__conv0_HeadVar__1_1, ((MR_Word) options__wrapper_arg_2), ((MR_Word) options__wrapper_arg_3));
    }
#line 796 "options.c"
    *options__wrapper_arg_1 = ((MR_Box) (options__conv0_HeadVar__1_1));
#line 798 "options.c"
  }
#line 800 "options.c"
}

#line 54 "options.m"
void MR_CALL 
options____Compare____option_table_0_0(
#line 54 "options.m"
  MR_Word * options__HeadVar__1_1,
#line 54 "options.m"
  MR_Word options__HeadVar__2_2,
#line 54 "options.m"
  MR_Word options__HeadVar__3_3)
#line 54 "options.m"
{
#line 54 "options.m"
  {
#line 54 "options.m"
    MR_bool options__succeeded;
#line 54 "options.m"
    MR_Word options__Cast_HeadVar1_4 = options__HeadVar__2_2;
#line 54 "options.m"
    MR_Word options__Cast_HeadVar2_5 = options__HeadVar__3_3;

#line 54 "options.m"
    {
#line 54 "options.m"
      mercury__builtin__compare_3_p_0((MR_Word) &options_scalar_common_1[0], options__HeadVar__1_1, ((MR_Box) (options__Cast_HeadVar1_4)), ((MR_Box) (options__Cast_HeadVar2_5)));
#line 54 "options.m"
      return;
    }
#line 54 "options.m"
  }
#line 54 "options.m"
}

#line 54 "options.m"
MR_bool MR_CALL 
options____Unify____option_table_0_0(
#line 54 "options.m"
  MR_Word options__HeadVar__1_1,
#line 54 "options.m"
  MR_Word options__HeadVar__2_2)
#line 54 "options.m"
{
#line 54 "options.m"
  {
#line 54 "options.m"
    MR_bool options__succeeded;
#line 54 "options.m"
    MR_Word options__Cast_HeadVar1_3 = options__HeadVar__1_1;
#line 54 "options.m"
    MR_Word options__Cast_HeadVar2_4 = options__HeadVar__2_2;

#line 54 "options.m"
    {
#line 54 "options.m"
      return options__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &options_scalar_common_1[0], ((MR_Box) (options__Cast_HeadVar1_3)), ((MR_Box) (options__Cast_HeadVar2_4)));
    }
#line 54 "options.m"
    return options__succeeded;
#line 54 "options.m"
  }
#line 54 "options.m"
}

#line 27 "options.m"
void MR_CALL 
options____Compare____option_0_0(
#line 27 "options.m"
  MR_Word * options__HeadVar__1_1,
#line 27 "options.m"
  MR_Word options__HeadVar__2_2,
#line 27 "options.m"
  MR_Word options__HeadVar__3_3)
#line 27 "options.m"
{
#line 27 "options.m"
  {
#line 27 "options.m"
    MR_bool options__succeeded;
#line 27 "options.m"
    MR_Integer options__Cast_HeadVar1_4 = (MR_Integer) options__HeadVar__2_2;
#line 27 "options.m"
    MR_Integer options__Cast_HeadVar2_5 = (MR_Integer) options__HeadVar__3_3;

#line 27 "options.m"
    {
#line 27 "options.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(options__HeadVar__1_1, options__Cast_HeadVar1_4, options__Cast_HeadVar2_5);
#line 27 "options.m"
      return;
    }
#line 27 "options.m"
  }
#line 27 "options.m"
}

#line 27 "options.m"
MR_bool MR_CALL 
options____Unify____option_0_0(
#line 27 "options.m"
  MR_Word options__HeadVar__2_1,
#line 27 "options.m"
  MR_Word options__HeadVar__2_2)
#line 27 "options.m"
{
#line 906 "options.c"
  {
#line 908 "options.c"
    MR_bool options__succeeded = (options__HeadVar__2_1 == options__HeadVar__2_2);

#line 911 "options.c"
    return options__succeeded;
#line 913 "options.c"
  }
#line 27 "options.m"
}

#line 67 "options.m"
void MR_CALL 
options__maybe_flush_output_3_p_0(
#line 67 "options.m"
  MR_Word options__HeadVar__1_1)
#line 67 "options.m"
{
#line 226 "options.m"
  {
#line 226 "options.m"
    MR_bool options__succeeded;

#line 226 "options.m"
#line 226 "options.m"
    switch (options__HeadVar__1_1) {
#line 226 "options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 226 "options.m"
      case (MR_Integer) 0:
#line 228 "options.m"
        {
#line 228 "options.m"
        }
#line 226 "options.m"
        break;
#line 226 "options.m"
      case (MR_Integer) 1:
#line 227 "options.m"
        {
#line 227 "options.m"
          mercury__io__flush_output_2_p_0();
#line 227 "options.m"
          return;
        }
#line 226 "options.m"
        break;
#line 226 "options.m"
    }
#line 226 "options.m"
  }
#line 67 "options.m"
}

#line 66 "options.m"
void MR_CALL 
options__maybe_write_string_4_p_0(
#line 66 "options.m"
  MR_Word options__HeadVar__1_1,
#line 66 "options.m"
  MR_String options__String_2)
#line 66 "options.m"
{
#line 222 "options.m"
  {
#line 222 "options.m"
    MR_bool options__succeeded;

#line 222 "options.m"
#line 222 "options.m"
    switch (options__HeadVar__1_1) {
#line 222 "options.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 222 "options.m"
      case (MR_Integer) 0:
#line 224 "options.m"
        {
#line 224 "options.m"
        }
#line 222 "options.m"
        break;
#line 222 "options.m"
      case (MR_Integer) 1:
#line 223 "options.m"
        {
#line 223 "options.m"
          mercury__io__write_string_3_p_0(options__String_2);
#line 223 "options.m"
          return;
        }
#line 222 "options.m"
        break;
#line 222 "options.m"
    }
#line 222 "options.m"
  }
#line 66 "options.m"
}

#line 62 "options.m"
void MR_CALL 
options__options_help_2_p_0(void)
#line 62 "options.m"
{
#line 166 "options.m"
  {
#line 166 "options.m"
    MR_bool options__succeeded;

#line 167 "options.m"
    {
#line 167 "options.m"
      mercury__io__write_string_3_p_0((MR_String) "\t-h, --help\n");
    }
#line 168 "options.m"
    {
#line 168 "options.m"
      mercury__io__write_string_3_p_0((MR_String) "\t\tPrint this usage message.\n");
    }
#line 170 "options.m"
    {
#line 170 "options.m"
      mercury__io__write_string_3_p_0((MR_String) "\nProfiler Options:\n");
    }
#line 171 "options.m"
    {
#line 171 "options.m"
      mercury__io__write_string_3_p_0((MR_String) "\t-c, --call-graph\n");
    }
#line 172 "options.m"
    {
#line 172 "options.m"
      mercury__io__write_string_3_p_0((MR_String) "\t\tInclude the call graph profile.\n");
    }
#line 173 "options.m"
    {
#line 173 "options.m"
      mercury__io__write_string_3_p_0((MR_String) "\t-d, --use-dynamic\n");
    }
#line 174 "options.m"
    {
#line 174 "options.m"
      mercury__io__write_string_3_p_0((MR_String) "\t\tBuild the call graph dynamically.\n");
    }
#line 175 "options.m"
    {
#line 175 "options.m"
      mercury__io__write_string_3_p_0((MR_String) "\t-p, --profile {time, memory-words, memory-cells}\n");
    }
#line 176 "options.m"
    {
#line 176 "options.m"
      mercury__io__write_string_3_p_0((MR_String) "\t\tSelect what to profile: time, amount of memory allocated, or\n");
    }
#line 177 "options.m"
    {
#line 177 "options.m"
      mercury__io__write_string_3_p_0((MR_String) "\t\tnumber of memory allocations (regardless of size).\n");
    }
#line 178 "options.m"
    {
#line 178 "options.m"
      mercury__io__write_string_3_p_0((MR_String) "\t-m\n");
    }
#line 179 "options.m"
    {
#line 179 "options.m"
      mercury__io__write_string_3_p_0((MR_String) "\t\tSame as \140--profile memory-words\'\n");
    }
#line 180 "options.m"
    {
#line 180 "options.m"
      mercury__io__write_string_3_p_0((MR_String) "\t-M\n");
    }
#line 181 "options.m"
    {
#line 181 "options.m"
      mercury__io__write_string_3_p_0((MR_String) "\t\tSame as \140--profile memory-cells\'.\n");
    }
#line 182 "options.m"
    {
#line 182 "options.m"
      mercury__io__write_string_3_p_0((MR_String) "\t-t\n");
    }
#line 183 "options.m"
    {
#line 183 "options.m"
      mercury__io__write_string_3_p_0((MR_String) "\t\tSame as \140--profile time\'.\n");
    }
#line 184 "options.m"
    {
#line 184 "options.m"
      mercury__io__write_string_3_p_0((MR_String) "\t--no-demangle\n");
    }
#line 185 "options.m"
    {
#line 185 "options.m"
      mercury__io__write_string_3_p_0((MR_String) "\t\tOutput the mangled predicate and function names.\n");
    }
#line 187 "options.m"
    {
#line 187 "options.m"
      mercury__io__write_string_3_p_0((MR_String) "\nFilename Options:\n");
    }
#line 188 "options.m"
    {
#line 188 "options.m"
      mercury__io__write_string_3_p_0((MR_String) "\t-C <file>, --count-file <file>\n");
    }
#line 189 "options.m"
    {
#line 189 "options.m"
      mercury__io__write_string_3_p_0((MR_String) "\t\tName of the count file. Usually \140Prof.Counts\',\n");
    }
#line 190 "options.m"
    {
#line 190 "options.m"
      mercury__io__write_string_3_p_0((MR_String) "\t\t\140Prof.MemoryWords\', or \140Prof.MemoryCells\'.\n");
    }
#line 191 "options.m"
    {
#line 191 "options.m"
      mercury__io__write_string_3_p_0((MR_String) "\t-D <file>, --declaration-file <file>\n");
    }
#line 192 "options.m"
    {
#line 192 "options.m"
      mercury__io__write_string_3_p_0((MR_String) "\t\tName of the declaration file. Usually \140Prof.Decl\'.\n");
    }
#line 193 "options.m"
    {
#line 193 "options.m"
      mercury__io__write_string_3_p_0((MR_String) "\t-P <file>, --call-pair-file <file>\n");
    }
#line 194 "options.m"
    {
#line 194 "options.m"
      mercury__io__write_string_3_p_0((MR_String) "\t\tName of the call-pair file. Usually \140Prof.CallPair\'.\n");
    }
#line 195 "options.m"
    {
#line 195 "options.m"
      mercury__io__write_string_3_p_0((MR_String) "\t-L <file>, --library-callgraph <file>\n");
    }
#line 196 "options.m"
    {
#line 196 "options.m"
      mercury__io__write_string_3_p_0((MR_String) "\t\tName of the file which contains the call graph for\n");
    }
#line 197 "options.m"
    {
#line 197 "options.m"
      mercury__io__write_string_3_p_0((MR_String) "\t\tthe library modules.\n");
    }
#line 199 "options.m"
    {
#line 199 "options.m"
      mercury__io__write_string_3_p_0((MR_String) "\nSnapshot options:\n");
    }
#line 200 "options.m"
    {
#line 200 "options.m"
      mercury__io__write_string_3_p_0((MR_String) "\t-s, --snapshots\n");
    }
#line 201 "options.m"
    {
#line 201 "options.m"
      mercury__io__write_string_3_p_0((MR_String) "\t\tShow summary of heap objects at the times\n");
    }
#line 202 "options.m"
    {
#line 202 "options.m"
      mercury__io__write_string_3_p_0((MR_String) "\t\t\140benchmarking.report_memory_attribution\' was called.\n");
    }
#line 203 "options.m"
    {
#line 203 "options.m"
      mercury__io__write_string_3_p_0((MR_String) "\t\tThis overrides other profiler modes.\n");
    }
#line 204 "options.m"
    {
#line 204 "options.m"
      mercury__io__write_string_3_p_0((MR_String) "\t--snapshots-file <file>\n");
    }
#line 205 "options.m"
    {
#line 205 "options.m"
      mercury__io__write_string_3_p_0((MR_String) "\t\tName of the snapshots file. Usually \140Prof.Snapshots\'.\n");
    }
#line 206 "options.m"
    {
#line 206 "options.m"
      mercury__io__write_string_3_p_0((MR_String) "\t-T, --snapshots-by-type\n");
    }
#line 207 "options.m"
    {
#line 207 "options.m"
      mercury__io__write_string_3_p_0((MR_String) "\t\tGroup results by type.\n");
    }
#line 208 "options.m"
    {
#line 208 "options.m"
      mercury__io__write_string_3_p_0((MR_String) "\t-b, --snapshots-brief\n");
    }
#line 209 "options.m"
    {
#line 209 "options.m"
      mercury__io__write_string_3_p_0((MR_String) "\t\tGenerate a brief profile.\n");
    }
#line 210 "options.m"
    {
#line 210 "options.m"
      mercury__io__write_string_3_p_0((MR_String) "\t-r, --snapshots-include-runtime\n");
    }
#line 211 "options.m"
    {
#line 211 "options.m"
      mercury__io__write_string_3_p_0((MR_String) "\t\tInclude internal Mercury runtime structures in the\n");
    }
#line 212 "options.m"
    {
#line 212 "options.m"
      mercury__io__write_string_3_p_0((MR_String) "\t\tprofile. These are excluded by default.\n");
    }
#line 214 "options.m"
    {
#line 214 "options.m"
      mercury__io__write_string_3_p_0((MR_String) "\nVerbosity Options:\n");
    }
#line 215 "options.m"
    {
#line 215 "options.m"
      mercury__io__write_string_3_p_0((MR_String) "\t-v, --verbose\n");
    }
#line 216 "options.m"
    {
#line 216 "options.m"
      mercury__io__write_string_3_p_0((MR_String) "\t\tOutput progress messages at each stage.\n");
    }
#line 217 "options.m"
    {
#line 217 "options.m"
      mercury__io__write_string_3_p_0((MR_String) "\t-V, --very-verbose\n");
    }
#line 218 "options.m"
    {
#line 218 "options.m"
      mercury__io__write_string_3_p_0((MR_String) "\t\tOutput very verbose progress messages.\n");
#line 218 "options.m"
      return;
    }
#line 166 "options.m"
  }
#line 62 "options.m"
}

#line 59 "options.m"
MR_bool MR_CALL 
options__special_handler_4_p_0(
#line 59 "options.m"
  MR_Word options__HeadVar__1_1,
#line 59 "options.m"
  MR_Word options__HeadVar__2_2,
#line 59 "options.m"
  MR_Word options__STATE_VARIABLE_OptionTable_0_3,
#line 59 "options.m"
  MR_Word * options__HeadVar__4_4)
#line 59 "options.m"
{
#line 146 "options.m"
  {
#line 146 "options.m"
    MR_bool options__succeeded;

#line 146 "options.m"
#line 146 "options.m"
    switch (options__HeadVar__1_1) {
#line 146 "options.m"
      default:
#line 146 "options.m"
        options__succeeded = MR_FALSE;
#line 146 "options.m"
        break;
#line 146 "options.m"
      case (MR_Integer) 4:
#line 146 "options.m"
        {
#line 146 "options.m"
          MR_String options__WhatToProfile_5;
#line 150 "options.m"
          MR_String options__CountFile_8;

#line 146 "options.m"
          options__succeeded = ((((MR_tag((MR_Word) options__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), options__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 146 "options.m"
          if (options__succeeded)
#line 146 "options.m"
            {
#line 146 "options.m"
              options__WhatToProfile_5 = ((MR_String) (MR_hl_field(MR_mktag(3), options__HeadVar__2_2, (MR_Integer) 1)));
#line 162 "options.m"
              if ((strcmp(options__WhatToProfile_5, (MR_String) "time") == 0))
#line 164 "options.m"
                {
#line 164 "options.m"
                  options__CountFile_8 = (MR_String) "Prof.Counts";
#line 164 "options.m"
                  options__succeeded = MR_TRUE;
#line 164 "options.m"
                }
#line 162 "options.m"
              else
#line 162 "options.m"
              if ((strcmp(options__WhatToProfile_5, (MR_String) "memory-cells") == 0))
#line 163 "options.m"
                {
#line 163 "options.m"
                  options__CountFile_8 = (MR_String) "Prof.MemoryCells";
#line 163 "options.m"
                  options__succeeded = MR_TRUE;
#line 163 "options.m"
                }
#line 162 "options.m"
              else
#line 162 "options.m"
              if ((strcmp(options__WhatToProfile_5, (MR_String) "memory-words") == 0))
#line 162 "options.m"
                {
#line 162 "options.m"
                  options__CountFile_8 = (MR_String) "Prof.MemoryWords";
#line 162 "options.m"
                  options__succeeded = MR_TRUE;
#line 162 "options.m"
                }
#line 162 "options.m"
              else
#line 162 "options.m"
                options__succeeded = MR_FALSE;
#line 150 "options.m"
              if (options__succeeded)
#line 148 "options.m"
                {
#line 148 "options.m"
                  MR_Word options__V_11_11;
#line 148 "options.m"
                  MR_Word options__STATE_VARIABLE_OptionTable_12_12;

#line 148 "options.m"
                  {
#line 148 "options.m"
                    options__V_11_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 148 "options.m"
                    MR_hl_field(MR_mktag(3), options__V_11_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 148 "options.m"
                    MR_hl_field(MR_mktag(3), options__V_11_11, 1) = ((MR_Box) (options__CountFile_8));
#line 148 "options.m"
                  }
#line 148 "options.m"
                  {
#line 148 "options.m"
                    mercury__map__set_4_p_0((MR_Word) &options__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0, ((MR_Box) ((MR_Integer) 9)), ((MR_Box) (options__V_11_11)), options__STATE_VARIABLE_OptionTable_0_3, &options__STATE_VARIABLE_OptionTable_12_12);
                  }
#line 149 "options.m"
                  {
#line 149 "options.m"
                    MR_Word base;
#line 149 "options.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 149 "options.m"
                    *options__HeadVar__4_4 = base;
#line 149 "options.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (options__STATE_VARIABLE_OptionTable_12_12));
#line 149 "options.m"
                  }
#line 148 "options.m"
                }
#line 150 "options.m"
              else
#line 151 "options.m"
                {
#line 151 "options.m"
                  *options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &options_scalar_common_4[2]);
#line 151 "options.m"
                }
#line 150 "options.m"
              options__succeeded = MR_TRUE;
#line 146 "options.m"
            }
#line 146 "options.m"
        }
#line 146 "options.m"
        break;
#line 146 "options.m"
      case (MR_Integer) 7:
#line 155 "options.m"
        {
#line 155 "options.m"
          MR_Word options__STATE_VARIABLE_OptionTable_27;

#line 156 "options.m"
          {
#line 156 "options.m"
            mercury__map__set_4_p_0((MR_Word) &options__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0, ((MR_Box) ((MR_Integer) 9)), ((MR_Box) (MR_mkword(MR_mktag(3), &options_scalar_common_5[5]))), options__STATE_VARIABLE_OptionTable_0_3, &options__STATE_VARIABLE_OptionTable_27);
          }
#line 155 "options.m"
          {
#line 155 "options.m"
            MR_Word base;
#line 155 "options.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 155 "options.m"
            *options__HeadVar__4_4 = base;
#line 155 "options.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (options__STATE_VARIABLE_OptionTable_27));
#line 155 "options.m"
          }
#line 155 "options.m"
          options__succeeded = MR_TRUE;
#line 155 "options.m"
        }
#line 146 "options.m"
        break;
#line 146 "options.m"
      case (MR_Integer) 6:
#line 153 "options.m"
        {
#line 153 "options.m"
          MR_Word options__STATE_VARIABLE_OptionTable_19;

#line 154 "options.m"
          {
#line 154 "options.m"
            mercury__map__set_4_p_0((MR_Word) &options__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0, ((MR_Box) ((MR_Integer) 9)), ((MR_Box) (MR_mkword(MR_mktag(3), &options_scalar_common_5[6]))), options__STATE_VARIABLE_OptionTable_0_3, &options__STATE_VARIABLE_OptionTable_19);
          }
#line 153 "options.m"
          {
#line 153 "options.m"
            MR_Word base;
#line 153 "options.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 153 "options.m"
            *options__HeadVar__4_4 = base;
#line 153 "options.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (options__STATE_VARIABLE_OptionTable_19));
#line 153 "options.m"
          }
#line 153 "options.m"
          options__succeeded = MR_TRUE;
#line 153 "options.m"
        }
#line 146 "options.m"
        break;
#line 146 "options.m"
      case (MR_Integer) 5:
#line 157 "options.m"
        {
#line 157 "options.m"
          MR_Word options__STATE_VARIABLE_OptionTable_35;

#line 158 "options.m"
          {
#line 158 "options.m"
            mercury__map__set_4_p_0((MR_Word) &options__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0, ((MR_Box) ((MR_Integer) 9)), ((MR_Box) (MR_mkword(MR_mktag(3), &options_scalar_common_5[0]))), options__STATE_VARIABLE_OptionTable_0_3, &options__STATE_VARIABLE_OptionTable_35);
          }
#line 157 "options.m"
          {
#line 157 "options.m"
            MR_Word base;
#line 157 "options.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 157 "options.m"
            *options__HeadVar__4_4 = base;
#line 157 "options.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (options__STATE_VARIABLE_OptionTable_35));
#line 157 "options.m"
          }
#line 157 "options.m"
          options__succeeded = MR_TRUE;
#line 157 "options.m"
        }
#line 146 "options.m"
        break;
#line 146 "options.m"
    }
#line 146 "options.m"
    return options__succeeded;
#line 146 "options.m"
  }
#line 59 "options.m"
}

#line 58 "options.m"
void MR_CALL 
options__option_default_2_p_0(
#line 58 "options.m"
  MR_Word * options__HeadVar__1_1,
#line 58 "options.m"
  MR_Word * options__HeadVar__2_2,
#line 58 "options.m"
  MR_Cont options__cont,
#line 58 "options.m"
  void * options__cont_env_ptr)
#line 58 "options.m"
{
#line 79 "options.m"
  {
#line 79 "options.m"
    MR_bool options__succeeded;

#line 79 "options.m"
    {
#line 79 "options.m"
      MR_Integer options__slot_0 = (MR_Integer) 0;

#line 79 "options.m"
      do
#line 79 "options.m"
        {
#line 79 "options.m"
          *options__HeadVar__1_1 = ((&options_vector_common_6[0 + options__slot_0]))->options__vector_common_type_6_0__vct_6_f_0;
#line 79 "options.m"
          *options__HeadVar__2_2 = ((&options_vector_common_6[0 + options__slot_0]))->options__vector_common_type_6_0__vct_6_f_1;
#line 79 "options.m"
          {
#line 79 "options.m"
            options__cont(options__cont_env_ptr);
          }
#line 79 "options.m"
          options__slot_0 = (options__slot_0 + (MR_Integer) 1);
#line 79 "options.m"
        }
#line 79 "options.m"
      while ((options__slot_0 < (MR_Integer) 20));
#line 79 "options.m"
    }
#line 79 "options.m"
  }
#line 58 "options.m"
}

#line 57 "options.m"
MR_bool MR_CALL 
options__long_option_2_p_0(
#line 57 "options.m"
  MR_String options__HeadVar__1_1,
#line 57 "options.m"
  MR_Word * options__HeadVar__2_2)
#line 57 "options.m"
{
#line 124 "options.m"
  {
#line 124 "options.m"
    MR_bool options__succeeded;

#line 124 "options.m"
    {
#line 124 "options.m"
      MR_Integer options__case_num_0 = (MR_Integer) -1;

#line 124 "options.m"
#line 124 "options.m"
      switch (MR_nth_code_unit(options__HeadVar__1_1, 0)) {
#line 124 "options.m"
        case (MR_Integer) 99:
#line 124 "options.m"
#line 124 "options.m"
          switch (MR_nth_code_unit(options__HeadVar__1_1, 1)) {
#line 124 "options.m"
            case (MR_Integer) 97:
#line 124 "options.m"
              if (((((((MR_nth_code_unit(options__HeadVar__1_1, 2)) == (MR_Integer) 108)) && (((MR_nth_code_unit(options__HeadVar__1_1, 3)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(options__HeadVar__1_1, 4)) == (MR_Integer) 45))))
#line 124 "options.m"
#line 124 "options.m"
                switch (MR_nth_code_unit(options__HeadVar__1_1, 5)) {
#line 124 "options.m"
                  case (MR_Integer) 103:
#line 124 "options.m"
                    if (MR_offset_streq(6, options__HeadVar__1_1, (MR_String) "call-graph"))
#line 124 "options.m"
                      options__case_num_0 = (MR_Integer) 0;
#line 124 "options.m"
                    break;
#line 124 "options.m"
                  case (MR_Integer) 112:
#line 124 "options.m"
                    if (MR_offset_streq(6, options__HeadVar__1_1, (MR_String) "call-pair-file"))
#line 124 "options.m"
                      options__case_num_0 = (MR_Integer) 1;
#line 124 "options.m"
                    break;
#line 124 "options.m"
                }
#line 124 "options.m"
              break;
#line 124 "options.m"
            case (MR_Integer) 111:
#line 124 "options.m"
              if (MR_offset_streq(2, options__HeadVar__1_1, (MR_String) "count-file"))
#line 124 "options.m"
                options__case_num_0 = (MR_Integer) 2;
#line 124 "options.m"
              break;
#line 124 "options.m"
          }
#line 124 "options.m"
          break;
#line 124 "options.m"
        case (MR_Integer) 100:
#line 124 "options.m"
          if (((MR_nth_code_unit(options__HeadVar__1_1, 1)) == (MR_Integer) 101))
#line 124 "options.m"
#line 124 "options.m"
            switch (MR_nth_code_unit(options__HeadVar__1_1, 2)) {
#line 124 "options.m"
              case (MR_Integer) 99:
#line 124 "options.m"
                if (MR_offset_streq(3, options__HeadVar__1_1, (MR_String) "declaration-file"))
#line 124 "options.m"
                  options__case_num_0 = (MR_Integer) 3;
#line 124 "options.m"
                break;
#line 124 "options.m"
              case (MR_Integer) 109:
#line 124 "options.m"
                if (MR_offset_streq(3, options__HeadVar__1_1, (MR_String) "demangle"))
#line 124 "options.m"
                  options__case_num_0 = (MR_Integer) 4;
#line 124 "options.m"
                break;
#line 124 "options.m"
            }
#line 124 "options.m"
          break;
#line 124 "options.m"
        case (MR_Integer) 104:
#line 124 "options.m"
          if (MR_offset_streq(1, options__HeadVar__1_1, (MR_String) "help"))
#line 124 "options.m"
            options__case_num_0 = (MR_Integer) 5;
#line 124 "options.m"
          break;
#line 124 "options.m"
        case (MR_Integer) 108:
#line 124 "options.m"
          if (MR_offset_streq(1, options__HeadVar__1_1, (MR_String) "library-callgraph"))
#line 124 "options.m"
            options__case_num_0 = (MR_Integer) 6;
#line 124 "options.m"
          break;
#line 124 "options.m"
        case (MR_Integer) 112:
#line 124 "options.m"
          if (((((((((((((MR_nth_code_unit(options__HeadVar__1_1, 1)) == (MR_Integer) 114)) && (((MR_nth_code_unit(options__HeadVar__1_1, 2)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(options__HeadVar__1_1, 3)) == (MR_Integer) 102)))) && (((MR_nth_code_unit(options__HeadVar__1_1, 4)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(options__HeadVar__1_1, 5)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(options__HeadVar__1_1, 6)) == (MR_Integer) 101))))
#line 124 "options.m"
#line 124 "options.m"
            switch (MR_nth_code_unit(options__HeadVar__1_1, 7)) {
#line 124 "options.m"
              case (MR_Integer) 0:
#line 124 "options.m"
                options__case_num_0 = (MR_Integer) 7;
#line 124 "options.m"
                break;
#line 124 "options.m"
              case (MR_Integer) 45:
#line 124 "options.m"
#line 124 "options.m"
                switch (MR_nth_code_unit(options__HeadVar__1_1, 8)) {
#line 124 "options.m"
                  case (MR_Integer) 109:
#line 124 "options.m"
                    if (((((((((((((MR_nth_code_unit(options__HeadVar__1_1, 9)) == (MR_Integer) 101)) && (((MR_nth_code_unit(options__HeadVar__1_1, 10)) == (MR_Integer) 109)))) && (((MR_nth_code_unit(options__HeadVar__1_1, 11)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(options__HeadVar__1_1, 12)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(options__HeadVar__1_1, 13)) == (MR_Integer) 121)))) && (((MR_nth_code_unit(options__HeadVar__1_1, 14)) == (MR_Integer) 45))))
#line 124 "options.m"
#line 124 "options.m"
                      switch (MR_nth_code_unit(options__HeadVar__1_1, 15)) {
#line 124 "options.m"
                        case (MR_Integer) 99:
#line 124 "options.m"
                          if (MR_offset_streq(16, options__HeadVar__1_1, (MR_String) "profile-memory-cells"))
#line 124 "options.m"
                            options__case_num_0 = (MR_Integer) 8;
#line 124 "options.m"
                          break;
#line 124 "options.m"
                        case (MR_Integer) 119:
#line 124 "options.m"
                          if (MR_offset_streq(16, options__HeadVar__1_1, (MR_String) "profile-memory-words"))
#line 124 "options.m"
                            options__case_num_0 = (MR_Integer) 9;
#line 124 "options.m"
                          break;
#line 124 "options.m"
                      }
#line 124 "options.m"
                    break;
#line 124 "options.m"
                  case (MR_Integer) 116:
#line 124 "options.m"
                    if (MR_offset_streq(9, options__HeadVar__1_1, (MR_String) "profile-time"))
#line 124 "options.m"
                      options__case_num_0 = (MR_Integer) 10;
#line 124 "options.m"
                    break;
#line 124 "options.m"
                }
#line 124 "options.m"
                break;
#line 124 "options.m"
            }
#line 124 "options.m"
          break;
#line 124 "options.m"
        case (MR_Integer) 115:
#line 124 "options.m"
          if (((((((((((((((((MR_nth_code_unit(options__HeadVar__1_1, 1)) == (MR_Integer) 110)) && (((MR_nth_code_unit(options__HeadVar__1_1, 2)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(options__HeadVar__1_1, 3)) == (MR_Integer) 112)))) && (((MR_nth_code_unit(options__HeadVar__1_1, 4)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(options__HeadVar__1_1, 5)) == (MR_Integer) 104)))) && (((MR_nth_code_unit(options__HeadVar__1_1, 6)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(options__HeadVar__1_1, 7)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(options__HeadVar__1_1, 8)) == (MR_Integer) 115))))
#line 124 "options.m"
#line 124 "options.m"
            switch (MR_nth_code_unit(options__HeadVar__1_1, 9)) {
#line 124 "options.m"
              case (MR_Integer) 0:
#line 124 "options.m"
                options__case_num_0 = (MR_Integer) 11;
#line 124 "options.m"
                break;
#line 124 "options.m"
              case (MR_Integer) 45:
#line 124 "options.m"
#line 124 "options.m"
                switch (MR_nth_code_unit(options__HeadVar__1_1, 10)) {
#line 124 "options.m"
                  case (MR_Integer) 98:
#line 124 "options.m"
#line 124 "options.m"
                    switch (MR_nth_code_unit(options__HeadVar__1_1, 11)) {
#line 124 "options.m"
                      case (MR_Integer) 114:
#line 124 "options.m"
                        if (MR_offset_streq(12, options__HeadVar__1_1, (MR_String) "snapshots-brief"))
#line 124 "options.m"
                          options__case_num_0 = (MR_Integer) 12;
#line 124 "options.m"
                        break;
#line 124 "options.m"
                      case (MR_Integer) 121:
#line 124 "options.m"
                        if (MR_offset_streq(12, options__HeadVar__1_1, (MR_String) "snapshots-by-type"))
#line 124 "options.m"
                          options__case_num_0 = (MR_Integer) 13;
#line 124 "options.m"
                        break;
#line 124 "options.m"
                    }
#line 124 "options.m"
                    break;
#line 124 "options.m"
                  case (MR_Integer) 102:
#line 124 "options.m"
                    if (MR_offset_streq(11, options__HeadVar__1_1, (MR_String) "snapshots-file"))
#line 124 "options.m"
                      options__case_num_0 = (MR_Integer) 14;
#line 124 "options.m"
                    break;
#line 124 "options.m"
                  case (MR_Integer) 105:
#line 124 "options.m"
                    if (MR_offset_streq(11, options__HeadVar__1_1, (MR_String) "snapshots-include-runtime"))
#line 124 "options.m"
                      options__case_num_0 = (MR_Integer) 15;
#line 124 "options.m"
                    break;
#line 124 "options.m"
                  case (MR_Integer) 114:
#line 124 "options.m"
                    if (MR_offset_streq(11, options__HeadVar__1_1, (MR_String) "snapshots-recalc-size"))
#line 124 "options.m"
                      options__case_num_0 = (MR_Integer) 16;
#line 124 "options.m"
                    break;
#line 124 "options.m"
                }
#line 124 "options.m"
                break;
#line 124 "options.m"
            }
#line 124 "options.m"
          break;
#line 124 "options.m"
        case (MR_Integer) 117:
#line 124 "options.m"
          if (MR_offset_streq(1, options__HeadVar__1_1, (MR_String) "use-dynamic"))
#line 124 "options.m"
            options__case_num_0 = (MR_Integer) 17;
#line 124 "options.m"
          break;
#line 124 "options.m"
        case (MR_Integer) 118:
#line 124 "options.m"
          if (((((MR_nth_code_unit(options__HeadVar__1_1, 1)) == (MR_Integer) 101)) && (((MR_nth_code_unit(options__HeadVar__1_1, 2)) == (MR_Integer) 114))))
#line 124 "options.m"
#line 124 "options.m"
            switch (MR_nth_code_unit(options__HeadVar__1_1, 3)) {
#line 124 "options.m"
              case (MR_Integer) 98:
#line 124 "options.m"
                if (MR_offset_streq(4, options__HeadVar__1_1, (MR_String) "verbose"))
#line 124 "options.m"
                  options__case_num_0 = (MR_Integer) 18;
#line 124 "options.m"
                break;
#line 124 "options.m"
              case (MR_Integer) 121:
#line 124 "options.m"
                if (MR_offset_streq(4, options__HeadVar__1_1, (MR_String) "very-verbose"))
#line 124 "options.m"
                  options__case_num_0 = (MR_Integer) 19;
#line 124 "options.m"
                break;
#line 124 "options.m"
            }
#line 124 "options.m"
          break;
#line 124 "options.m"
      }
#line 124 "options.m"
      if ((options__case_num_0 < (MR_Integer) 0))
#line 124 "options.m"
        options__succeeded = MR_FALSE;
#line 124 "options.m"
      else
#line 124 "options.m"
        {
#line 124 "options.m"
          /* we found a match; look up the results */
#line 124 "options.m"
          *options__HeadVar__2_2 = ((&options_vector_common_2[52 + options__case_num_0]))->options__vector_common_type_2_0__vct_2_f_0;
#line 124 "options.m"
          options__succeeded = MR_TRUE;
#line 124 "options.m"
        }
#line 124 "options.m"
    }
#line 124 "options.m"
    return options__succeeded;
#line 124 "options.m"
  }
#line 57 "options.m"
}

#line 56 "options.m"
MR_bool MR_CALL 
options__short_option_2_p_0(
#line 56 "options.m"
  MR_Char options__HeadVar__1_1,
#line 56 "options.m"
  MR_Word * options__HeadVar__2_2)
#line 56 "options.m"
{
#line 106 "options.m"
  {
#line 106 "options.m"
    MR_bool options__succeeded;

#line 106 "options.m"
    if ((((MR_Unsigned) (options__HeadVar__1_1 - (MR_Integer) 67)) <= ((MR_Unsigned) (MR_Integer) 51)))
#line 106 "options.m"
      if ((((options_scalar_common_3[0])[(((options__HeadVar__1_1 - (MR_Integer) 67)) >> (MR_Integer) 5)]) & (((MR_Integer) 1 << ((((options__HeadVar__1_1 - (MR_Integer) 67)) & (MR_Integer) 31))))))
#line 106 "options.m"
        {
#line 106 "options.m"
          *options__HeadVar__2_2 = ((&options_vector_common_2[0 + (options__HeadVar__1_1 - (MR_Integer) 67)]))->options__vector_common_type_2_0__vct_2_f_0;
#line 106 "options.m"
          options__succeeded = MR_TRUE;
#line 106 "options.m"
        }
#line 106 "options.m"
      else
#line 106 "options.m"
        options__succeeded = MR_FALSE;
#line 106 "options.m"
    else
#line 106 "options.m"
      options__succeeded = MR_FALSE;
#line 106 "options.m"
    return options__succeeded;
#line 106 "options.m"
  }
#line 56 "options.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module options. */
