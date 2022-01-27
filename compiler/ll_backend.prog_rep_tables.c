/*
** Automatically generated from `prog_rep_tables.m'
** by the Mercury compiler,
** version rotd-2015-11-30
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


/* :- module ll_backend.prog_rep_tables. */
/* :- implementation. */

/*
INIT mercury__ll_backend__prog_rep_tables__init
ENDINIT
*/

#include "ll_backend.prog_rep_tables.mih"


#include "libs.mih"
#include "ll_backend.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "int.mih"
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
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 98 "ll_backend.prog_rep_tables.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__prog_rep_tables__list__pti_list_1__plain_builtin__type_ctor_info_int_0;

#line 101 "ll_backend.prog_rep_tables.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__prog_rep_tables__cord__pti_cord_1__plain_builtin__type_ctor_info_int_0;

#line 104 "ll_backend.prog_rep_tables.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__prog_rep_tables__tree234__ti_tree234_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0;

#line 107 "ll_backend.prog_rep_tables.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__prog_rep_tables__list__ti_list_1builtin__type_ctor_info_string_0;

#line 110 "ll_backend.prog_rep_tables.c"
static const MR_PseudoTypeInfo ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__field_types_string_table_info_0_0[3];

#line 113 "ll_backend.prog_rep_tables.c"
static const MR_DuFunctorDesc ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__du_functor_desc_string_table_info_0_0;

#line 116 "ll_backend.prog_rep_tables.c"
static const MR_DuFunctorDescPtr ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__du_stag_ordered_string_table_info_0_0[1];

#line 119 "ll_backend.prog_rep_tables.c"
static const MR_DuPtagLayout ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__du_ptag_ordered_string_table_info_0[1];

#line 122 "ll_backend.prog_rep_tables.c"
static const MR_DuFunctorDescPtr ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__du_name_ordered_string_table_info_0[1];

#line 125 "ll_backend.prog_rep_tables.c"
static const MR_Integer ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__functor_number_map_string_table_info_0[1];

#line 128 "ll_backend.prog_rep_tables.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__prog_rep_tables__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_mer_type_0builtin__type_ctor_info_int_0;

#line 131 "ll_backend.prog_rep_tables.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__prog_rep_tables__cord__ti_cord_1builtin__type_ctor_info_int_0;

#line 134 "ll_backend.prog_rep_tables.c"
static const MR_PseudoTypeInfo ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__field_types_type_table_info_0_0[3];

#line 137 "ll_backend.prog_rep_tables.c"
static const MR_DuFunctorDesc ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__du_functor_desc_type_table_info_0_0;

#line 140 "ll_backend.prog_rep_tables.c"
static const MR_DuFunctorDescPtr ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__du_stag_ordered_type_table_info_0_0[1];

#line 143 "ll_backend.prog_rep_tables.c"
static const MR_DuPtagLayout ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__du_ptag_ordered_type_table_info_0[1];

#line 146 "ll_backend.prog_rep_tables.c"
static const MR_DuFunctorDescPtr ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__du_name_ordered_type_table_info_0[1];

#line 149 "ll_backend.prog_rep_tables.c"
static const MR_Integer ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__functor_number_map_type_table_info_0[1];

#line 152 "ll_backend.prog_rep_tables.c"
static MR_bool MR_CALL 
ll_backend__prog_rep_tables____Unify____string_table_info_0_0_10001(
#line 155 "ll_backend.prog_rep_tables.c"
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_1,
#line 157 "ll_backend.prog_rep_tables.c"
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_2);

#line 160 "ll_backend.prog_rep_tables.c"
static void MR_CALL 
ll_backend__prog_rep_tables____Compare____string_table_info_0_0_10001(
#line 163 "ll_backend.prog_rep_tables.c"
  MR_Box * ll_backend__prog_rep_tables__wrapper_arg_1,
#line 165 "ll_backend.prog_rep_tables.c"
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_2,
#line 167 "ll_backend.prog_rep_tables.c"
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_3);

#line 170 "ll_backend.prog_rep_tables.c"
static MR_bool MR_CALL 
ll_backend__prog_rep_tables____Unify____type_table_info_0_0_10001(
#line 173 "ll_backend.prog_rep_tables.c"
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_1,
#line 175 "ll_backend.prog_rep_tables.c"
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_2);

#line 178 "ll_backend.prog_rep_tables.c"
static void MR_CALL 
ll_backend__prog_rep_tables____Compare____type_table_info_0_0_10001(
#line 181 "ll_backend.prog_rep_tables.c"
  MR_Box * ll_backend__prog_rep_tables__wrapper_arg_1,
#line 183 "ll_backend.prog_rep_tables.c"
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_2,
#line 185 "ll_backend.prog_rep_tables.c"
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_3);

#line 395 "prog_rep_tables.m"
static MR_Word MR_CALL 
ll_backend__prog_rep_tables__IntroducedFrom__func__encode_arg_type_codes__395__1_1_f_0(
#line 395 "prog_rep_tables.m"
  MR_Word ll_backend__prog_rep_tables__HeadVar__1_18);

#line 395 "prog_rep_tables.m"
static MR_Box MR_CALL 
ll_backend__prog_rep_tables__encode_arg_type_codes_2_p_0_2(
#line 395 "prog_rep_tables.m"
  MR_Box ll_backend__prog_rep_tables__closure_arg,
#line 395 "prog_rep_tables.m"
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_1);

#line 394 "prog_rep_tables.m"
static void MR_CALL 
ll_backend__prog_rep_tables__encode_arg_type_codes_2_p_0_1(
#line 394 "prog_rep_tables.m"
  MR_Box ll_backend__prog_rep_tables__closure_arg,
#line 394 "prog_rep_tables.m"
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_1,
#line 394 "prog_rep_tables.m"
  MR_Box * ll_backend__prog_rep_tables__wrapper_arg_2);

#line 391 "prog_rep_tables.m"
static void MR_CALL 
ll_backend__prog_rep_tables__encode_arg_type_codes_2_p_0(
#line 391 "prog_rep_tables.m"
  MR_Word ll_backend__prog_rep_tables__ArgTypeCodes_3,
#line 391 "prog_rep_tables.m"
  MR_Word * ll_backend__prog_rep_tables__ArgTypeBytesCord_4);

#line 345 "prog_rep_tables.m"
static void MR_CALL 
ll_backend__prog_rep_tables__add_type_to_table_6_p_0_3(
#line 345 "prog_rep_tables.m"
  MR_Box ll_backend__prog_rep_tables__closure_arg,
#line 345 "prog_rep_tables.m"
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_1,
#line 345 "prog_rep_tables.m"
  MR_Box * ll_backend__prog_rep_tables__wrapper_arg_2,
#line 345 "prog_rep_tables.m"
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_3,
#line 345 "prog_rep_tables.m"
  MR_Box * ll_backend__prog_rep_tables__wrapper_arg_4,
#line 345 "prog_rep_tables.m"
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_5,
#line 345 "prog_rep_tables.m"
  MR_Box * ll_backend__prog_rep_tables__wrapper_arg_6);

#line 352 "prog_rep_tables.m"
static void MR_CALL 
ll_backend__prog_rep_tables__add_type_to_table_6_p_0_2(
#line 352 "prog_rep_tables.m"
  MR_Box ll_backend__prog_rep_tables__closure_arg,
#line 352 "prog_rep_tables.m"
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_1,
#line 352 "prog_rep_tables.m"
  MR_Box * ll_backend__prog_rep_tables__wrapper_arg_2,
#line 352 "prog_rep_tables.m"
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_3,
#line 352 "prog_rep_tables.m"
  MR_Box * ll_backend__prog_rep_tables__wrapper_arg_4,
#line 352 "prog_rep_tables.m"
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_5,
#line 352 "prog_rep_tables.m"
  MR_Box * ll_backend__prog_rep_tables__wrapper_arg_6);

#line 293 "prog_rep_tables.m"
static void MR_CALL 
ll_backend__prog_rep_tables__add_type_to_table_6_p_0_1(
#line 293 "prog_rep_tables.m"
  MR_Box ll_backend__prog_rep_tables__closure_arg,
#line 293 "prog_rep_tables.m"
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_1,
#line 293 "prog_rep_tables.m"
  MR_Box * ll_backend__prog_rep_tables__wrapper_arg_2,
#line 293 "prog_rep_tables.m"
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_3,
#line 293 "prog_rep_tables.m"
  MR_Box * ll_backend__prog_rep_tables__wrapper_arg_4,
#line 293 "prog_rep_tables.m"
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_5,
#line 293 "prog_rep_tables.m"
  MR_Box * ll_backend__prog_rep_tables__wrapper_arg_6);

#line 284 "prog_rep_tables.m"
static void MR_CALL 
ll_backend__prog_rep_tables__add_type_to_table_6_p_0(
#line 284 "prog_rep_tables.m"
  MR_Word ll_backend__prog_rep_tables__Type_7,
#line 284 "prog_rep_tables.m"
  MR_Integer * ll_backend__prog_rep_tables__TypeCode_8,
#line 284 "prog_rep_tables.m"
  MR_Word ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_0_48,
#line 284 "prog_rep_tables.m"
  MR_Word * ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_49,
#line 284 "prog_rep_tables.m"
  MR_Word ll_backend__prog_rep_tables__STATE_VARIABLE_TypeTable_0_50,
#line 284 "prog_rep_tables.m"
  MR_Word * ll_backend__prog_rep_tables__STATE_VARIABLE_TypeTable_51);

#line 223 "prog_rep_tables.m"
static void MR_CALL 
ll_backend__prog_rep_tables__lookup_raw_string_in_table_4_p_0(
#line 223 "prog_rep_tables.m"
  MR_String ll_backend__prog_rep_tables__String_5,
#line 223 "prog_rep_tables.m"
  MR_Word * ll_backend__prog_rep_tables__MaybeOffset_6,
#line 223 "prog_rep_tables.m"
  MR_Word ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_0_16,
#line 223 "prog_rep_tables.m"
  MR_Word * ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_17);

#line 209 "prog_rep_tables.m"
static MR_bool MR_CALL 
ll_backend__prog_rep_tables__rev_find_number_suffix_6_p_0(
#line 209 "prog_rep_tables.m"
  MR_Word ll_backend__prog_rep_tables__HeadVar__1_1,
#line 209 "prog_rep_tables.m"
  MR_Integer ll_backend__prog_rep_tables__STATE_VARIABLE_Num_0_13,
#line 209 "prog_rep_tables.m"
  MR_Integer * ll_backend__prog_rep_tables__STATE_VARIABLE_Num_14,
#line 209 "prog_rep_tables.m"
  MR_Integer ll_backend__prog_rep_tables__STATE_VARIABLE_Scale_0_15,
#line 209 "prog_rep_tables.m"
  MR_Integer * ll_backend__prog_rep_tables__STATE_VARIABLE_Scale_16,
#line 209 "prog_rep_tables.m"
  MR_Word * ll_backend__prog_rep_tables__RevRest_11);


static /* final */ const MR_Box ll_backend__prog_rep_tables_scalar_common_1[3][2];

static /* final */ const MR_Box ll_backend__prog_rep_tables_scalar_common_2[7][3];

static /* final */ const MR_Box ll_backend__prog_rep_tables_scalar_common_4[1][9];

static /* final */ const MR_Box ll_backend__prog_rep_tables_scalar_common_5[2][5];


#line 331 "prog_rep_tables.m"
/* sealed */ struct ll_backend__prog_rep_tables__vector_common_type_3_0_s {
#line 331 "prog_rep_tables.m"
  const MR_Integer ll_backend__prog_rep_tables__vector_common_type_3_0__vct_3_f_0;
#line 331 "prog_rep_tables.m"
};

static /* final */ const struct ll_backend__prog_rep_tables__vector_common_type_3_0_s ll_backend__prog_rep_tables_vector_common_3[4];



static /* final */ const MR_Box ll_backend__prog_rep_tables_scalar_common_1[3][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box ll_backend__prog_rep_tables_scalar_common_2[7][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&ll_backend__prog_rep_tables_scalar_common_4[0])),
    ((MR_Box) (ll_backend__prog_rep_tables__add_type_to_table_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&ll_backend__prog_rep_tables_scalar_common_4[0])),
    ((MR_Box) (ll_backend__prog_rep_tables__add_type_to_table_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&ll_backend__prog_rep_tables_scalar_common_4[0])),
    ((MR_Box) (ll_backend__prog_rep_tables__add_type_to_table_6_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&ll_backend__prog_rep_tables_scalar_common_5[0])),
    ((MR_Box) (ll_backend__prog_rep_tables__encode_arg_type_codes_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&ll_backend__prog_rep_tables_scalar_common_5[1])),
    ((MR_Box) (ll_backend__prog_rep_tables__encode_arg_type_codes_2_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__prog_rep_tables_scalar_common_4[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_string_table_info_0)),
    ((MR_Box) (&ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_string_table_info_0)),
    ((MR_Box) (&ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_type_table_info_0)),
    ((MR_Box) (&ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_type_table_info_0))
  },
};

static /* final */ const MR_Box ll_backend__prog_rep_tables_scalar_common_5[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__prog_rep_tables__list__pti_list_1__plain_builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__prog_rep_tables__list__pti_list_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__prog_rep_tables__cord__pti_cord_1__plain_builtin__type_ctor_info_int_0))
  },
};


static /* final */ const struct ll_backend__prog_rep_tables__vector_common_type_3_0_s ll_backend__prog_rep_tables_vector_common_3[4] = {
  /* row 0 */   {     (MR_Integer) 5 },
  /* row 1 */   {     (MR_Integer) 6 },
  /* row 2 */   {     (MR_Integer) 7 },
  /* row 3 */   {     (MR_Integer) 8 },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 452 "ll_backend.prog_rep_tables.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__prog_rep_tables__list__pti_list_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 460 "ll_backend.prog_rep_tables.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__prog_rep_tables__cord__pti_cord_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 468 "ll_backend.prog_rep_tables.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__prog_rep_tables__tree234__ti_tree234_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 477 "ll_backend.prog_rep_tables.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__prog_rep_tables__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 485 "ll_backend.prog_rep_tables.c"
static const MR_PseudoTypeInfo ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__field_types_string_table_info_0_0[3] = {
  (MR_PseudoTypeInfo) &ll_backend__prog_rep_tables__tree234__ti_tree234_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__prog_rep_tables__list__ti_list_1builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 492 "ll_backend.prog_rep_tables.c"
static const MR_DuFunctorDesc ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__du_functor_desc_string_table_info_0_0 = {
  (MR_String) "string_table_info",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__field_types_string_table_info_0_0,
  NULL,
  NULL,
  NULL
};

#line 507 "ll_backend.prog_rep_tables.c"
static const MR_DuFunctorDescPtr ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__du_stag_ordered_string_table_info_0_0[1] = {
  &ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__du_functor_desc_string_table_info_0_0
};

#line 512 "ll_backend.prog_rep_tables.c"
static const MR_DuPtagLayout ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__du_ptag_ordered_string_table_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__du_stag_ordered_string_table_info_0_0
  }
};

#line 521 "ll_backend.prog_rep_tables.c"
static const MR_DuFunctorDescPtr ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__du_name_ordered_string_table_info_0[1] = {
  &ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__du_functor_desc_string_table_info_0_0
};

#line 526 "ll_backend.prog_rep_tables.c"
static const MR_Integer ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__functor_number_map_string_table_info_0[1] = {
  (MR_Integer) 0
};

#line 531 "ll_backend.prog_rep_tables.c"
const MR_TypeCtorInfo_Struct ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_string_table_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__prog_rep_tables____Unify____string_table_info_0_0_10001)),
  ((MR_Box) (ll_backend__prog_rep_tables____Compare____string_table_info_0_0_10001)),
  (MR_String) "ll_backend.prog_rep_tables",
  (MR_String) "string_table_info",
  {     ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__du_name_ordered_string_table_info_0 },
  {     ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__du_ptag_ordered_string_table_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__functor_number_map_string_table_info_0
};

#line 548 "ll_backend.prog_rep_tables.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__prog_rep_tables__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_mer_type_0builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 557 "ll_backend.prog_rep_tables.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__prog_rep_tables__cord__ti_cord_1builtin__type_ctor_info_int_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 565 "ll_backend.prog_rep_tables.c"
static const MR_PseudoTypeInfo ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__field_types_type_table_info_0_0[3] = {
  (MR_PseudoTypeInfo) &ll_backend__prog_rep_tables__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_mer_type_0builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__prog_rep_tables__cord__ti_cord_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 572 "ll_backend.prog_rep_tables.c"
static const MR_DuFunctorDesc ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__du_functor_desc_type_table_info_0_0 = {
  (MR_String) "type_table_info",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__field_types_type_table_info_0_0,
  NULL,
  NULL,
  NULL
};

#line 587 "ll_backend.prog_rep_tables.c"
static const MR_DuFunctorDescPtr ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__du_stag_ordered_type_table_info_0_0[1] = {
  &ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__du_functor_desc_type_table_info_0_0
};

#line 592 "ll_backend.prog_rep_tables.c"
static const MR_DuPtagLayout ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__du_ptag_ordered_type_table_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__du_stag_ordered_type_table_info_0_0
  }
};

#line 601 "ll_backend.prog_rep_tables.c"
static const MR_DuFunctorDescPtr ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__du_name_ordered_type_table_info_0[1] = {
  &ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__du_functor_desc_type_table_info_0_0
};

#line 606 "ll_backend.prog_rep_tables.c"
static const MR_Integer ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__functor_number_map_type_table_info_0[1] = {
  (MR_Integer) 0
};

#line 611 "ll_backend.prog_rep_tables.c"
const MR_TypeCtorInfo_Struct ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_type_table_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__prog_rep_tables____Unify____type_table_info_0_0_10001)),
  ((MR_Box) (ll_backend__prog_rep_tables____Compare____type_table_info_0_0_10001)),
  (MR_String) "ll_backend.prog_rep_tables",
  (MR_String) "type_table_info",
  {     ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__du_name_ordered_type_table_info_0 },
  {     ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__du_ptag_ordered_type_table_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__functor_number_map_type_table_info_0
};

#line 628 "ll_backend.prog_rep_tables.c"
static MR_bool MR_CALL 
ll_backend__prog_rep_tables____Unify____string_table_info_0_0_10001(
#line 631 "ll_backend.prog_rep_tables.c"
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_1,
#line 633 "ll_backend.prog_rep_tables.c"
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_2)
#line 635 "ll_backend.prog_rep_tables.c"
{
#line 637 "ll_backend.prog_rep_tables.c"
  {
#line 639 "ll_backend.prog_rep_tables.c"
    MR_bool ll_backend__prog_rep_tables__succeeded;

#line 642 "ll_backend.prog_rep_tables.c"
    {
#line 644 "ll_backend.prog_rep_tables.c"
      ll_backend__prog_rep_tables__succeeded = ll_backend__prog_rep_tables____Unify____string_table_info_0_0(((MR_Word) ll_backend__prog_rep_tables__wrapper_arg_1), ((MR_Word) ll_backend__prog_rep_tables__wrapper_arg_2));
    }
#line 647 "ll_backend.prog_rep_tables.c"
    return ll_backend__prog_rep_tables__succeeded;
#line 649 "ll_backend.prog_rep_tables.c"
  }
#line 651 "ll_backend.prog_rep_tables.c"
}

#line 654 "ll_backend.prog_rep_tables.c"
static void MR_CALL 
ll_backend__prog_rep_tables____Compare____string_table_info_0_0_10001(
#line 657 "ll_backend.prog_rep_tables.c"
  MR_Box * ll_backend__prog_rep_tables__wrapper_arg_1,
#line 659 "ll_backend.prog_rep_tables.c"
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_2,
#line 661 "ll_backend.prog_rep_tables.c"
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_3)
#line 663 "ll_backend.prog_rep_tables.c"
{
#line 665 "ll_backend.prog_rep_tables.c"
  {
#line 667 "ll_backend.prog_rep_tables.c"
    MR_Word ll_backend__prog_rep_tables__conv0_HeadVar__1_1;

#line 670 "ll_backend.prog_rep_tables.c"
    {
#line 672 "ll_backend.prog_rep_tables.c"
      ll_backend__prog_rep_tables____Compare____string_table_info_0_0(&ll_backend__prog_rep_tables__conv0_HeadVar__1_1, ((MR_Word) ll_backend__prog_rep_tables__wrapper_arg_2), ((MR_Word) ll_backend__prog_rep_tables__wrapper_arg_3));
    }
#line 675 "ll_backend.prog_rep_tables.c"
    *ll_backend__prog_rep_tables__wrapper_arg_1 = ((MR_Box) (ll_backend__prog_rep_tables__conv0_HeadVar__1_1));
#line 677 "ll_backend.prog_rep_tables.c"
  }
#line 679 "ll_backend.prog_rep_tables.c"
}

#line 682 "ll_backend.prog_rep_tables.c"
static MR_bool MR_CALL 
ll_backend__prog_rep_tables____Unify____type_table_info_0_0_10001(
#line 685 "ll_backend.prog_rep_tables.c"
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_1,
#line 687 "ll_backend.prog_rep_tables.c"
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_2)
#line 689 "ll_backend.prog_rep_tables.c"
{
#line 691 "ll_backend.prog_rep_tables.c"
  {
#line 693 "ll_backend.prog_rep_tables.c"
    MR_bool ll_backend__prog_rep_tables__succeeded;

#line 696 "ll_backend.prog_rep_tables.c"
    {
#line 698 "ll_backend.prog_rep_tables.c"
      ll_backend__prog_rep_tables__succeeded = ll_backend__prog_rep_tables____Unify____type_table_info_0_0(((MR_Word) ll_backend__prog_rep_tables__wrapper_arg_1), ((MR_Word) ll_backend__prog_rep_tables__wrapper_arg_2));
    }
#line 701 "ll_backend.prog_rep_tables.c"
    return ll_backend__prog_rep_tables__succeeded;
#line 703 "ll_backend.prog_rep_tables.c"
  }
#line 705 "ll_backend.prog_rep_tables.c"
}

#line 708 "ll_backend.prog_rep_tables.c"
static void MR_CALL 
ll_backend__prog_rep_tables____Compare____type_table_info_0_0_10001(
#line 711 "ll_backend.prog_rep_tables.c"
  MR_Box * ll_backend__prog_rep_tables__wrapper_arg_1,
#line 713 "ll_backend.prog_rep_tables.c"
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_2,
#line 715 "ll_backend.prog_rep_tables.c"
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_3)
#line 717 "ll_backend.prog_rep_tables.c"
{
#line 719 "ll_backend.prog_rep_tables.c"
  {
#line 721 "ll_backend.prog_rep_tables.c"
    MR_Word ll_backend__prog_rep_tables__conv0_HeadVar__1_1;

#line 724 "ll_backend.prog_rep_tables.c"
    {
#line 726 "ll_backend.prog_rep_tables.c"
      ll_backend__prog_rep_tables____Compare____type_table_info_0_0(&ll_backend__prog_rep_tables__conv0_HeadVar__1_1, ((MR_Word) ll_backend__prog_rep_tables__wrapper_arg_2), ((MR_Word) ll_backend__prog_rep_tables__wrapper_arg_3));
    }
#line 729 "ll_backend.prog_rep_tables.c"
    *ll_backend__prog_rep_tables__wrapper_arg_1 = ((MR_Box) (ll_backend__prog_rep_tables__conv0_HeadVar__1_1));
#line 731 "ll_backend.prog_rep_tables.c"
  }
#line 733 "ll_backend.prog_rep_tables.c"
}

#line 395 "prog_rep_tables.m"
static MR_Word MR_CALL 
ll_backend__prog_rep_tables__IntroducedFrom__func__encode_arg_type_codes__395__1_1_f_0(
#line 395 "prog_rep_tables.m"
  MR_Word ll_backend__prog_rep_tables__HeadVar__1_18)
#line 395 "prog_rep_tables.m"
{
#line 395 "prog_rep_tables.m"
  {
#line 395 "prog_rep_tables.m"
    MR_bool ll_backend__prog_rep_tables__succeeded;
#line 395 "prog_rep_tables.m"
    MR_Word ll_backend__prog_rep_tables__HeadVar__2_19;

#line 395 "prog_rep_tables.m"
    {
#line 395 "prog_rep_tables.m"
      ll_backend__prog_rep_tables__HeadVar__2_19 = mercury__cord__from_list_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ll_backend__prog_rep_tables__HeadVar__1_18);
    }
#line 395 "prog_rep_tables.m"
    return ll_backend__prog_rep_tables__HeadVar__2_19;
#line 395 "prog_rep_tables.m"
  }
#line 395 "prog_rep_tables.m"
}

#line 262 "prog_rep_tables.m"
void MR_CALL 
ll_backend__prog_rep_tables____Compare____type_table_info_0_0(
#line 262 "prog_rep_tables.m"
  MR_Word * ll_backend__prog_rep_tables__HeadVar__1_1,
#line 262 "prog_rep_tables.m"
  MR_Word ll_backend__prog_rep_tables__HeadVar__2_2,
#line 262 "prog_rep_tables.m"
  MR_Word ll_backend__prog_rep_tables__HeadVar__3_3)
#line 262 "prog_rep_tables.m"
{
#line 262 "prog_rep_tables.m"
  {
#line 262 "prog_rep_tables.m"
    MR_bool ll_backend__prog_rep_tables__succeeded;
#line 262 "prog_rep_tables.m"
    MR_Integer ll_backend__prog_rep_tables__CastX_12 = (MR_Integer) ll_backend__prog_rep_tables__HeadVar__2_2;
#line 262 "prog_rep_tables.m"
    MR_Integer ll_backend__prog_rep_tables__CastY_13 = (MR_Integer) ll_backend__prog_rep_tables__HeadVar__3_3;

#line 262 "prog_rep_tables.m"
    ll_backend__prog_rep_tables__succeeded = (ll_backend__prog_rep_tables__CastX_12 == ll_backend__prog_rep_tables__CastY_13);
#line 262 "prog_rep_tables.m"
    if (ll_backend__prog_rep_tables__succeeded)
#line 786 "ll_backend.prog_rep_tables.c"
      *ll_backend__prog_rep_tables__HeadVar__1_1 = (MR_Integer) 0;
#line 262 "prog_rep_tables.m"
    else
#line 262 "prog_rep_tables.m"
      {
#line 262 "prog_rep_tables.m"
        MR_Word ll_backend__prog_rep_tables__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__HeadVar__2_2, (MR_Integer) 0)));
#line 262 "prog_rep_tables.m"
        MR_Word ll_backend__prog_rep_tables__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__HeadVar__2_2, (MR_Integer) 1)));
#line 262 "prog_rep_tables.m"
        MR_Integer ll_backend__prog_rep_tables__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__HeadVar__2_2, (MR_Integer) 2)));
#line 262 "prog_rep_tables.m"
        MR_Word ll_backend__prog_rep_tables__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__HeadVar__3_3, (MR_Integer) 0)));
#line 262 "prog_rep_tables.m"
        MR_Word ll_backend__prog_rep_tables__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__HeadVar__3_3, (MR_Integer) 1)));
#line 262 "prog_rep_tables.m"
        MR_Integer ll_backend__prog_rep_tables__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__HeadVar__3_3, (MR_Integer) 2)));
#line 262 "prog_rep_tables.m"
        MR_Word ll_backend__prog_rep_tables__V_10_10;

#line 262 "prog_rep_tables.m"
        {
#line 262 "prog_rep_tables.m"
          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__prog_rep_tables_scalar_common_2[1], &ll_backend__prog_rep_tables__V_10_10, ((MR_Box) (ll_backend__prog_rep_tables__V_4_4)), ((MR_Box) (ll_backend__prog_rep_tables__V_7_7)));
        }
#line 812 "ll_backend.prog_rep_tables.c"
        ll_backend__prog_rep_tables__succeeded = (ll_backend__prog_rep_tables__V_10_10 == (MR_Integer) 0);
#line 262 "prog_rep_tables.m"
        ll_backend__prog_rep_tables__succeeded = !(ll_backend__prog_rep_tables__succeeded);
#line 262 "prog_rep_tables.m"
        if (ll_backend__prog_rep_tables__succeeded)
#line 262 "prog_rep_tables.m"
          *ll_backend__prog_rep_tables__HeadVar__1_1 = ll_backend__prog_rep_tables__V_10_10;
#line 262 "prog_rep_tables.m"
        else
#line 262 "prog_rep_tables.m"
          {
#line 262 "prog_rep_tables.m"
            MR_Word ll_backend__prog_rep_tables__V_11_11;

#line 262 "prog_rep_tables.m"
            {
#line 262 "prog_rep_tables.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__prog_rep_tables_scalar_common_1[1], &ll_backend__prog_rep_tables__V_11_11, ((MR_Box) (ll_backend__prog_rep_tables__V_5_5)), ((MR_Box) (ll_backend__prog_rep_tables__V_8_8)));
            }
#line 832 "ll_backend.prog_rep_tables.c"
            ll_backend__prog_rep_tables__succeeded = (ll_backend__prog_rep_tables__V_11_11 == (MR_Integer) 0);
#line 262 "prog_rep_tables.m"
            ll_backend__prog_rep_tables__succeeded = !(ll_backend__prog_rep_tables__succeeded);
#line 262 "prog_rep_tables.m"
            if (ll_backend__prog_rep_tables__succeeded)
#line 262 "prog_rep_tables.m"
              *ll_backend__prog_rep_tables__HeadVar__1_1 = ll_backend__prog_rep_tables__V_11_11;
#line 262 "prog_rep_tables.m"
            else
#line 262 "prog_rep_tables.m"
              {
#line 262 "prog_rep_tables.m"
                mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__prog_rep_tables__HeadVar__1_1, ll_backend__prog_rep_tables__V_6_6, ll_backend__prog_rep_tables__V_9_9);
              }
#line 262 "prog_rep_tables.m"
          }
#line 262 "prog_rep_tables.m"
      }
#line 262 "prog_rep_tables.m"
  }
#line 262 "prog_rep_tables.m"
}

#line 262 "prog_rep_tables.m"
MR_bool MR_CALL 
ll_backend__prog_rep_tables____Unify____type_table_info_0_0(
#line 262 "prog_rep_tables.m"
  MR_Word ll_backend__prog_rep_tables__HeadVar__1_1,
#line 262 "prog_rep_tables.m"
  MR_Word ll_backend__prog_rep_tables__HeadVar__2_2)
#line 262 "prog_rep_tables.m"
{
#line 262 "prog_rep_tables.m"
  {
#line 262 "prog_rep_tables.m"
    MR_bool ll_backend__prog_rep_tables__succeeded;
#line 262 "prog_rep_tables.m"
    MR_Integer ll_backend__prog_rep_tables__CastX_9 = (MR_Integer) ll_backend__prog_rep_tables__HeadVar__1_1;
#line 262 "prog_rep_tables.m"
    MR_Integer ll_backend__prog_rep_tables__CastY_10 = (MR_Integer) ll_backend__prog_rep_tables__HeadVar__2_2;

#line 262 "prog_rep_tables.m"
    ll_backend__prog_rep_tables__succeeded = (ll_backend__prog_rep_tables__CastX_9 == ll_backend__prog_rep_tables__CastY_10);
#line 262 "prog_rep_tables.m"
    if (ll_backend__prog_rep_tables__succeeded)
#line 262 "prog_rep_tables.m"
      ll_backend__prog_rep_tables__succeeded = MR_TRUE;
#line 262 "prog_rep_tables.m"
    else
#line 262 "prog_rep_tables.m"
      {
#line 262 "prog_rep_tables.m"
        MR_Word ll_backend__prog_rep_tables__TypeInfo_12_12;
#line 262 "prog_rep_tables.m"
        MR_Word ll_backend__prog_rep_tables__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__HeadVar__1_1, (MR_Integer) 0)));
#line 262 "prog_rep_tables.m"
        MR_Word ll_backend__prog_rep_tables__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__HeadVar__1_1, (MR_Integer) 1)));
#line 262 "prog_rep_tables.m"
        MR_Integer ll_backend__prog_rep_tables__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__HeadVar__1_1, (MR_Integer) 2)));
#line 262 "prog_rep_tables.m"
        MR_Word ll_backend__prog_rep_tables__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__HeadVar__2_2, (MR_Integer) 0)));
#line 262 "prog_rep_tables.m"
        MR_Word ll_backend__prog_rep_tables__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__HeadVar__2_2, (MR_Integer) 1)));
#line 262 "prog_rep_tables.m"
        MR_Integer ll_backend__prog_rep_tables__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__HeadVar__2_2, (MR_Integer) 2)));

#line 899 "ll_backend.prog_rep_tables.c"
        {
#line 901 "ll_backend.prog_rep_tables.c"
          ll_backend__prog_rep_tables__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__prog_rep_tables_scalar_common_2[1], ((MR_Box) (ll_backend__prog_rep_tables__V_3_3)), ((MR_Box) (ll_backend__prog_rep_tables__V_6_6)));
        }
#line 262 "prog_rep_tables.m"
        if (ll_backend__prog_rep_tables__succeeded)
#line 262 "prog_rep_tables.m"
          {
#line 908 "ll_backend.prog_rep_tables.c"
            ll_backend__prog_rep_tables__TypeInfo_12_12 = (MR_Word) &ll_backend__prog_rep_tables_scalar_common_1[1];
#line 910 "ll_backend.prog_rep_tables.c"
            {
#line 912 "ll_backend.prog_rep_tables.c"
              ll_backend__prog_rep_tables__succeeded = mercury__builtin__unify_2_p_0(ll_backend__prog_rep_tables__TypeInfo_12_12, ((MR_Box) (ll_backend__prog_rep_tables__V_4_4)), ((MR_Box) (ll_backend__prog_rep_tables__V_7_7)));
            }
#line 262 "prog_rep_tables.m"
            if (ll_backend__prog_rep_tables__succeeded)
#line 917 "ll_backend.prog_rep_tables.c"
              ll_backend__prog_rep_tables__succeeded = (ll_backend__prog_rep_tables__V_5_5 == ll_backend__prog_rep_tables__V_8_8);
#line 262 "prog_rep_tables.m"
          }
#line 262 "prog_rep_tables.m"
      }
#line 262 "prog_rep_tables.m"
    return ll_backend__prog_rep_tables__succeeded;
#line 262 "prog_rep_tables.m"
  }
#line 262 "prog_rep_tables.m"
}

#line 70 "prog_rep_tables.m"
void MR_CALL 
ll_backend__prog_rep_tables____Compare____string_table_info_0_0(
#line 70 "prog_rep_tables.m"
  MR_Word * ll_backend__prog_rep_tables__HeadVar__1_1,
#line 70 "prog_rep_tables.m"
  MR_Word ll_backend__prog_rep_tables__HeadVar__2_2,
#line 70 "prog_rep_tables.m"
  MR_Word ll_backend__prog_rep_tables__HeadVar__3_3)
#line 70 "prog_rep_tables.m"
{
#line 70 "prog_rep_tables.m"
  {
#line 70 "prog_rep_tables.m"
    MR_bool ll_backend__prog_rep_tables__succeeded;
#line 70 "prog_rep_tables.m"
    MR_Integer ll_backend__prog_rep_tables__CastX_12 = (MR_Integer) ll_backend__prog_rep_tables__HeadVar__2_2;
#line 70 "prog_rep_tables.m"
    MR_Integer ll_backend__prog_rep_tables__CastY_13 = (MR_Integer) ll_backend__prog_rep_tables__HeadVar__3_3;

#line 70 "prog_rep_tables.m"
    ll_backend__prog_rep_tables__succeeded = (ll_backend__prog_rep_tables__CastX_12 == ll_backend__prog_rep_tables__CastY_13);
#line 70 "prog_rep_tables.m"
    if (ll_backend__prog_rep_tables__succeeded)
#line 954 "ll_backend.prog_rep_tables.c"
      *ll_backend__prog_rep_tables__HeadVar__1_1 = (MR_Integer) 0;
#line 70 "prog_rep_tables.m"
    else
#line 70 "prog_rep_tables.m"
      {
#line 70 "prog_rep_tables.m"
        MR_Word ll_backend__prog_rep_tables__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__HeadVar__2_2, (MR_Integer) 0)));
#line 70 "prog_rep_tables.m"
        MR_Word ll_backend__prog_rep_tables__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__HeadVar__2_2, (MR_Integer) 1)));
#line 70 "prog_rep_tables.m"
        MR_Integer ll_backend__prog_rep_tables__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__HeadVar__2_2, (MR_Integer) 2)));
#line 70 "prog_rep_tables.m"
        MR_Word ll_backend__prog_rep_tables__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__HeadVar__3_3, (MR_Integer) 0)));
#line 70 "prog_rep_tables.m"
        MR_Word ll_backend__prog_rep_tables__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__HeadVar__3_3, (MR_Integer) 1)));
#line 70 "prog_rep_tables.m"
        MR_Integer ll_backend__prog_rep_tables__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__HeadVar__3_3, (MR_Integer) 2)));
#line 70 "prog_rep_tables.m"
        MR_Word ll_backend__prog_rep_tables__V_10_10;

#line 70 "prog_rep_tables.m"
        {
#line 70 "prog_rep_tables.m"
          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__prog_rep_tables_scalar_common_2[0], &ll_backend__prog_rep_tables__V_10_10, ((MR_Box) (ll_backend__prog_rep_tables__V_4_4)), ((MR_Box) (ll_backend__prog_rep_tables__V_7_7)));
        }
#line 980 "ll_backend.prog_rep_tables.c"
        ll_backend__prog_rep_tables__succeeded = (ll_backend__prog_rep_tables__V_10_10 == (MR_Integer) 0);
#line 70 "prog_rep_tables.m"
        ll_backend__prog_rep_tables__succeeded = !(ll_backend__prog_rep_tables__succeeded);
#line 70 "prog_rep_tables.m"
        if (ll_backend__prog_rep_tables__succeeded)
#line 70 "prog_rep_tables.m"
          *ll_backend__prog_rep_tables__HeadVar__1_1 = ll_backend__prog_rep_tables__V_10_10;
#line 70 "prog_rep_tables.m"
        else
#line 70 "prog_rep_tables.m"
          {
#line 70 "prog_rep_tables.m"
            MR_Word ll_backend__prog_rep_tables__V_11_11;

#line 70 "prog_rep_tables.m"
            {
#line 70 "prog_rep_tables.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__prog_rep_tables_scalar_common_1[2], &ll_backend__prog_rep_tables__V_11_11, ((MR_Box) (ll_backend__prog_rep_tables__V_5_5)), ((MR_Box) (ll_backend__prog_rep_tables__V_8_8)));
            }
#line 1000 "ll_backend.prog_rep_tables.c"
            ll_backend__prog_rep_tables__succeeded = (ll_backend__prog_rep_tables__V_11_11 == (MR_Integer) 0);
#line 70 "prog_rep_tables.m"
            ll_backend__prog_rep_tables__succeeded = !(ll_backend__prog_rep_tables__succeeded);
#line 70 "prog_rep_tables.m"
            if (ll_backend__prog_rep_tables__succeeded)
#line 70 "prog_rep_tables.m"
              *ll_backend__prog_rep_tables__HeadVar__1_1 = ll_backend__prog_rep_tables__V_11_11;
#line 70 "prog_rep_tables.m"
            else
#line 70 "prog_rep_tables.m"
              {
#line 70 "prog_rep_tables.m"
                mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__prog_rep_tables__HeadVar__1_1, ll_backend__prog_rep_tables__V_6_6, ll_backend__prog_rep_tables__V_9_9);
              }
#line 70 "prog_rep_tables.m"
          }
#line 70 "prog_rep_tables.m"
      }
#line 70 "prog_rep_tables.m"
  }
#line 70 "prog_rep_tables.m"
}

#line 70 "prog_rep_tables.m"
MR_bool MR_CALL 
ll_backend__prog_rep_tables____Unify____string_table_info_0_0(
#line 70 "prog_rep_tables.m"
  MR_Word ll_backend__prog_rep_tables__HeadVar__1_1,
#line 70 "prog_rep_tables.m"
  MR_Word ll_backend__prog_rep_tables__HeadVar__2_2)
#line 70 "prog_rep_tables.m"
{
#line 70 "prog_rep_tables.m"
  {
#line 70 "prog_rep_tables.m"
    MR_bool ll_backend__prog_rep_tables__succeeded;
#line 70 "prog_rep_tables.m"
    MR_Integer ll_backend__prog_rep_tables__CastX_9 = (MR_Integer) ll_backend__prog_rep_tables__HeadVar__1_1;
#line 70 "prog_rep_tables.m"
    MR_Integer ll_backend__prog_rep_tables__CastY_10 = (MR_Integer) ll_backend__prog_rep_tables__HeadVar__2_2;

#line 70 "prog_rep_tables.m"
    ll_backend__prog_rep_tables__succeeded = (ll_backend__prog_rep_tables__CastX_9 == ll_backend__prog_rep_tables__CastY_10);
#line 70 "prog_rep_tables.m"
    if (ll_backend__prog_rep_tables__succeeded)
#line 70 "prog_rep_tables.m"
      ll_backend__prog_rep_tables__succeeded = MR_TRUE;
#line 70 "prog_rep_tables.m"
    else
#line 70 "prog_rep_tables.m"
      {
#line 70 "prog_rep_tables.m"
        MR_Word ll_backend__prog_rep_tables__TypeInfo_12_12;
#line 70 "prog_rep_tables.m"
        MR_Word ll_backend__prog_rep_tables__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__HeadVar__1_1, (MR_Integer) 0)));
#line 70 "prog_rep_tables.m"
        MR_Word ll_backend__prog_rep_tables__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__HeadVar__1_1, (MR_Integer) 1)));
#line 70 "prog_rep_tables.m"
        MR_Integer ll_backend__prog_rep_tables__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__HeadVar__1_1, (MR_Integer) 2)));
#line 70 "prog_rep_tables.m"
        MR_Word ll_backend__prog_rep_tables__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__HeadVar__2_2, (MR_Integer) 0)));
#line 70 "prog_rep_tables.m"
        MR_Word ll_backend__prog_rep_tables__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__HeadVar__2_2, (MR_Integer) 1)));
#line 70 "prog_rep_tables.m"
        MR_Integer ll_backend__prog_rep_tables__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__HeadVar__2_2, (MR_Integer) 2)));

#line 1067 "ll_backend.prog_rep_tables.c"
        {
#line 1069 "ll_backend.prog_rep_tables.c"
          ll_backend__prog_rep_tables__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__prog_rep_tables_scalar_common_2[0], ((MR_Box) (ll_backend__prog_rep_tables__V_3_3)), ((MR_Box) (ll_backend__prog_rep_tables__V_6_6)));
        }
#line 70 "prog_rep_tables.m"
        if (ll_backend__prog_rep_tables__succeeded)
#line 70 "prog_rep_tables.m"
          {
#line 1076 "ll_backend.prog_rep_tables.c"
            ll_backend__prog_rep_tables__TypeInfo_12_12 = (MR_Word) &ll_backend__prog_rep_tables_scalar_common_1[2];
#line 1078 "ll_backend.prog_rep_tables.c"
            {
#line 1080 "ll_backend.prog_rep_tables.c"
              ll_backend__prog_rep_tables__succeeded = mercury__builtin__unify_2_p_0(ll_backend__prog_rep_tables__TypeInfo_12_12, ((MR_Box) (ll_backend__prog_rep_tables__V_4_4)), ((MR_Box) (ll_backend__prog_rep_tables__V_7_7)));
            }
#line 70 "prog_rep_tables.m"
            if (ll_backend__prog_rep_tables__succeeded)
#line 1085 "ll_backend.prog_rep_tables.c"
              ll_backend__prog_rep_tables__succeeded = (ll_backend__prog_rep_tables__V_5_5 == ll_backend__prog_rep_tables__V_8_8);
#line 70 "prog_rep_tables.m"
          }
#line 70 "prog_rep_tables.m"
      }
#line 70 "prog_rep_tables.m"
    return ll_backend__prog_rep_tables__succeeded;
#line 70 "prog_rep_tables.m"
  }
#line 70 "prog_rep_tables.m"
}

#line 395 "prog_rep_tables.m"
static MR_Box MR_CALL 
ll_backend__prog_rep_tables__encode_arg_type_codes_2_p_0_2(
#line 395 "prog_rep_tables.m"
  MR_Box ll_backend__prog_rep_tables__closure_arg,
#line 395 "prog_rep_tables.m"
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_1)
#line 395 "prog_rep_tables.m"
{
#line 395 "prog_rep_tables.m"
  {
#line 395 "prog_rep_tables.m"
    MR_Box ll_backend__prog_rep_tables__wrapper_arg_2;
#line 395 "prog_rep_tables.m"
    MR_Box ll_backend__prog_rep_tables__closure = ll_backend__prog_rep_tables__closure_arg;
#line 395 "prog_rep_tables.m"
    MR_Word ll_backend__prog_rep_tables__conv1_HeadVar__2_19;

#line 395 "prog_rep_tables.m"
    {
#line 395 "prog_rep_tables.m"
      ll_backend__prog_rep_tables__conv1_HeadVar__2_19 = ll_backend__prog_rep_tables__IntroducedFrom__func__encode_arg_type_codes__395__1_1_f_0(((MR_Word) ll_backend__prog_rep_tables__wrapper_arg_1));
    }
#line 395 "prog_rep_tables.m"
    ll_backend__prog_rep_tables__wrapper_arg_2 = ((MR_Box) (ll_backend__prog_rep_tables__conv1_HeadVar__2_19));
#line 395 "prog_rep_tables.m"
    return ll_backend__prog_rep_tables__wrapper_arg_2;
#line 395 "prog_rep_tables.m"
  }
#line 395 "prog_rep_tables.m"
}

#line 394 "prog_rep_tables.m"
static void MR_CALL 
ll_backend__prog_rep_tables__encode_arg_type_codes_2_p_0_1(
#line 394 "prog_rep_tables.m"
  MR_Box ll_backend__prog_rep_tables__closure_arg,
#line 394 "prog_rep_tables.m"
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_1,
#line 394 "prog_rep_tables.m"
  MR_Box * ll_backend__prog_rep_tables__wrapper_arg_2)
#line 394 "prog_rep_tables.m"
{
#line 394 "prog_rep_tables.m"
  {
#line 394 "prog_rep_tables.m"
    MR_Box ll_backend__prog_rep_tables__closure = ll_backend__prog_rep_tables__closure_arg;
#line 394 "prog_rep_tables.m"
    MR_Word ll_backend__prog_rep_tables__conv0_HeadVar__2_2;

#line 394 "prog_rep_tables.m"
    {
#line 394 "prog_rep_tables.m"
      mdbcomp__rtti_access__encode_num_det_2_p_0(((MR_Integer) ll_backend__prog_rep_tables__wrapper_arg_1), &ll_backend__prog_rep_tables__conv0_HeadVar__2_2);
    }
#line 394 "prog_rep_tables.m"
    *ll_backend__prog_rep_tables__wrapper_arg_2 = ((MR_Box) (ll_backend__prog_rep_tables__conv0_HeadVar__2_2));
#line 394 "prog_rep_tables.m"
  }
#line 394 "prog_rep_tables.m"
}

#line 391 "prog_rep_tables.m"
static void MR_CALL 
ll_backend__prog_rep_tables__encode_arg_type_codes_2_p_0(
#line 391 "prog_rep_tables.m"
  MR_Word ll_backend__prog_rep_tables__ArgTypeCodes_3,
#line 391 "prog_rep_tables.m"
  MR_Word * ll_backend__prog_rep_tables__ArgTypeBytesCord_4)
#line 391 "prog_rep_tables.m"
{
#line 393 "prog_rep_tables.m"
  {
#line 393 "prog_rep_tables.m"
    MR_bool ll_backend__prog_rep_tables__succeeded;
#line 393 "prog_rep_tables.m"
    MR_Word ll_backend__prog_rep_tables__TypeCtorInfo_15_15 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 393 "prog_rep_tables.m"
    MR_Word ll_backend__prog_rep_tables__TypeInfo_16_16 = (MR_Word) &ll_backend__prog_rep_tables_scalar_common_1[0];
#line 393 "prog_rep_tables.m"
    MR_Word ll_backend__prog_rep_tables__ArgTypeByteLists_5;
#line 393 "prog_rep_tables.m"
    MR_Word ll_backend__prog_rep_tables__ArgTypeByteCords_6;
#line 393 "prog_rep_tables.m"
    MR_Word ll_backend__prog_rep_tables__ArgTypeBytesCord0_7;
#line 393 "prog_rep_tables.m"
    MR_Integer ll_backend__prog_rep_tables__NumArgTypeCodes_8;
#line 393 "prog_rep_tables.m"
    MR_Word ll_backend__prog_rep_tables__V_11_11;
#line 393 "prog_rep_tables.m"
    MR_Word ll_backend__prog_rep_tables__V_12_12;

#line 394 "prog_rep_tables.m"
    {
#line 394 "prog_rep_tables.m"
      mercury__list__map_3_p_0(ll_backend__prog_rep_tables__TypeCtorInfo_15_15, ll_backend__prog_rep_tables__TypeInfo_16_16, (MR_Word) &ll_backend__prog_rep_tables_scalar_common_2[5], ll_backend__prog_rep_tables__ArgTypeCodes_3, &ll_backend__prog_rep_tables__ArgTypeByteLists_5);
    }
#line 395 "prog_rep_tables.m"
    {
#line 395 "prog_rep_tables.m"
      ll_backend__prog_rep_tables__ArgTypeByteCords_6 = mercury__list__map_2_f_0(ll_backend__prog_rep_tables__TypeInfo_16_16, (MR_Word) &ll_backend__prog_rep_tables_scalar_common_1[1], (MR_Word) &ll_backend__prog_rep_tables_scalar_common_2[6], ll_backend__prog_rep_tables__ArgTypeByteLists_5);
    }
#line 396 "prog_rep_tables.m"
    {
#line 396 "prog_rep_tables.m"
      ll_backend__prog_rep_tables__ArgTypeBytesCord0_7 = mercury__cord__cord_list_to_cord_1_f_0(ll_backend__prog_rep_tables__TypeCtorInfo_15_15, ll_backend__prog_rep_tables__ArgTypeByteCords_6);
    }
#line 397 "prog_rep_tables.m"
    {
#line 397 "prog_rep_tables.m"
      mercury__list__length_2_p_0(ll_backend__prog_rep_tables__TypeCtorInfo_15_15, ll_backend__prog_rep_tables__ArgTypeCodes_3, &ll_backend__prog_rep_tables__NumArgTypeCodes_8);
    }
#line 398 "prog_rep_tables.m"
    {
#line 398 "prog_rep_tables.m"
      ll_backend__prog_rep_tables__V_12_12 = mdbcomp__rtti_access__encode_num_func_1_f_0(ll_backend__prog_rep_tables__NumArgTypeCodes_8);
    }
#line 398 "prog_rep_tables.m"
    {
#line 398 "prog_rep_tables.m"
      ll_backend__prog_rep_tables__V_11_11 = mercury__cord__from_list_1_f_0(ll_backend__prog_rep_tables__TypeCtorInfo_15_15, ll_backend__prog_rep_tables__V_12_12);
    }
#line 399 "prog_rep_tables.m"
    {
#line 399 "prog_rep_tables.m"
      *ll_backend__prog_rep_tables__ArgTypeBytesCord_4 = mercury__cord__f_43_43_2_f_0(ll_backend__prog_rep_tables__TypeCtorInfo_15_15, ll_backend__prog_rep_tables__V_11_11, ll_backend__prog_rep_tables__ArgTypeBytesCord0_7);
    }
#line 393 "prog_rep_tables.m"
  }
#line 391 "prog_rep_tables.m"
}

#line 345 "prog_rep_tables.m"
static void MR_CALL 
ll_backend__prog_rep_tables__add_type_to_table_6_p_0_3(
#line 345 "prog_rep_tables.m"
  MR_Box ll_backend__prog_rep_tables__closure_arg,
#line 345 "prog_rep_tables.m"
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_1,
#line 345 "prog_rep_tables.m"
  MR_Box * ll_backend__prog_rep_tables__wrapper_arg_2,
#line 345 "prog_rep_tables.m"
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_3,
#line 345 "prog_rep_tables.m"
  MR_Box * ll_backend__prog_rep_tables__wrapper_arg_4,
#line 345 "prog_rep_tables.m"
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_5,
#line 345 "prog_rep_tables.m"
  MR_Box * ll_backend__prog_rep_tables__wrapper_arg_6)
#line 345 "prog_rep_tables.m"
{
#line 345 "prog_rep_tables.m"
  {
#line 345 "prog_rep_tables.m"
    MR_Box ll_backend__prog_rep_tables__closure = ll_backend__prog_rep_tables__closure_arg;
#line 345 "prog_rep_tables.m"
    MR_Integer ll_backend__prog_rep_tables__conv12_TypeCode_8;
#line 345 "prog_rep_tables.m"
    MR_Word ll_backend__prog_rep_tables__conv11_STATE_VARIABLE_StringTable_16;
#line 345 "prog_rep_tables.m"
    MR_Word ll_backend__prog_rep_tables__conv10_STATE_VARIABLE_TypeTable_18;

#line 345 "prog_rep_tables.m"
    {
#line 345 "prog_rep_tables.m"
      ll_backend__prog_rep_tables__lookup_type_in_table_6_p_0(((MR_Word) ll_backend__prog_rep_tables__wrapper_arg_1), &ll_backend__prog_rep_tables__conv12_TypeCode_8, ((MR_Word) ll_backend__prog_rep_tables__wrapper_arg_3), &ll_backend__prog_rep_tables__conv11_STATE_VARIABLE_StringTable_16, ((MR_Word) ll_backend__prog_rep_tables__wrapper_arg_5), &ll_backend__prog_rep_tables__conv10_STATE_VARIABLE_TypeTable_18);
    }
#line 345 "prog_rep_tables.m"
    *ll_backend__prog_rep_tables__wrapper_arg_2 = ((MR_Box) (ll_backend__prog_rep_tables__conv12_TypeCode_8));
#line 345 "prog_rep_tables.m"
    *ll_backend__prog_rep_tables__wrapper_arg_4 = ((MR_Box) (ll_backend__prog_rep_tables__conv11_STATE_VARIABLE_StringTable_16));
#line 345 "prog_rep_tables.m"
    *ll_backend__prog_rep_tables__wrapper_arg_6 = ((MR_Box) (ll_backend__prog_rep_tables__conv10_STATE_VARIABLE_TypeTable_18));
#line 345 "prog_rep_tables.m"
  }
#line 345 "prog_rep_tables.m"
}

#line 352 "prog_rep_tables.m"
static void MR_CALL 
ll_backend__prog_rep_tables__add_type_to_table_6_p_0_2(
#line 352 "prog_rep_tables.m"
  MR_Box ll_backend__prog_rep_tables__closure_arg,
#line 352 "prog_rep_tables.m"
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_1,
#line 352 "prog_rep_tables.m"
  MR_Box * ll_backend__prog_rep_tables__wrapper_arg_2,
#line 352 "prog_rep_tables.m"
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_3,
#line 352 "prog_rep_tables.m"
  MR_Box * ll_backend__prog_rep_tables__wrapper_arg_4,
#line 352 "prog_rep_tables.m"
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_5,
#line 352 "prog_rep_tables.m"
  MR_Box * ll_backend__prog_rep_tables__wrapper_arg_6)
#line 352 "prog_rep_tables.m"
{
#line 352 "prog_rep_tables.m"
  {
#line 352 "prog_rep_tables.m"
    MR_Box ll_backend__prog_rep_tables__closure = ll_backend__prog_rep_tables__closure_arg;
#line 352 "prog_rep_tables.m"
    MR_Integer ll_backend__prog_rep_tables__conv7_TypeCode_8;
#line 352 "prog_rep_tables.m"
    MR_Word ll_backend__prog_rep_tables__conv6_STATE_VARIABLE_StringTable_16;
#line 352 "prog_rep_tables.m"
    MR_Word ll_backend__prog_rep_tables__conv5_STATE_VARIABLE_TypeTable_18;

#line 352 "prog_rep_tables.m"
    {
#line 352 "prog_rep_tables.m"
      ll_backend__prog_rep_tables__lookup_type_in_table_6_p_0(((MR_Word) ll_backend__prog_rep_tables__wrapper_arg_1), &ll_backend__prog_rep_tables__conv7_TypeCode_8, ((MR_Word) ll_backend__prog_rep_tables__wrapper_arg_3), &ll_backend__prog_rep_tables__conv6_STATE_VARIABLE_StringTable_16, ((MR_Word) ll_backend__prog_rep_tables__wrapper_arg_5), &ll_backend__prog_rep_tables__conv5_STATE_VARIABLE_TypeTable_18);
    }
#line 352 "prog_rep_tables.m"
    *ll_backend__prog_rep_tables__wrapper_arg_2 = ((MR_Box) (ll_backend__prog_rep_tables__conv7_TypeCode_8));
#line 352 "prog_rep_tables.m"
    *ll_backend__prog_rep_tables__wrapper_arg_4 = ((MR_Box) (ll_backend__prog_rep_tables__conv6_STATE_VARIABLE_StringTable_16));
#line 352 "prog_rep_tables.m"
    *ll_backend__prog_rep_tables__wrapper_arg_6 = ((MR_Box) (ll_backend__prog_rep_tables__conv5_STATE_VARIABLE_TypeTable_18));
#line 352 "prog_rep_tables.m"
  }
#line 352 "prog_rep_tables.m"
}

#line 293 "prog_rep_tables.m"
static void MR_CALL 
ll_backend__prog_rep_tables__add_type_to_table_6_p_0_1(
#line 293 "prog_rep_tables.m"
  MR_Box ll_backend__prog_rep_tables__closure_arg,
#line 293 "prog_rep_tables.m"
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_1,
#line 293 "prog_rep_tables.m"
  MR_Box * ll_backend__prog_rep_tables__wrapper_arg_2,
#line 293 "prog_rep_tables.m"
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_3,
#line 293 "prog_rep_tables.m"
  MR_Box * ll_backend__prog_rep_tables__wrapper_arg_4,
#line 293 "prog_rep_tables.m"
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_5,
#line 293 "prog_rep_tables.m"
  MR_Box * ll_backend__prog_rep_tables__wrapper_arg_6)
#line 293 "prog_rep_tables.m"
{
#line 293 "prog_rep_tables.m"
  {
#line 293 "prog_rep_tables.m"
    MR_Box ll_backend__prog_rep_tables__closure = ll_backend__prog_rep_tables__closure_arg;
#line 293 "prog_rep_tables.m"
    MR_Integer ll_backend__prog_rep_tables__conv2_TypeCode_8;
#line 293 "prog_rep_tables.m"
    MR_Word ll_backend__prog_rep_tables__conv1_STATE_VARIABLE_StringTable_16;
#line 293 "prog_rep_tables.m"
    MR_Word ll_backend__prog_rep_tables__conv0_STATE_VARIABLE_TypeTable_18;

#line 293 "prog_rep_tables.m"
    {
#line 293 "prog_rep_tables.m"
      ll_backend__prog_rep_tables__lookup_type_in_table_6_p_0(((MR_Word) ll_backend__prog_rep_tables__wrapper_arg_1), &ll_backend__prog_rep_tables__conv2_TypeCode_8, ((MR_Word) ll_backend__prog_rep_tables__wrapper_arg_3), &ll_backend__prog_rep_tables__conv1_STATE_VARIABLE_StringTable_16, ((MR_Word) ll_backend__prog_rep_tables__wrapper_arg_5), &ll_backend__prog_rep_tables__conv0_STATE_VARIABLE_TypeTable_18);
    }
#line 293 "prog_rep_tables.m"
    *ll_backend__prog_rep_tables__wrapper_arg_2 = ((MR_Box) (ll_backend__prog_rep_tables__conv2_TypeCode_8));
#line 293 "prog_rep_tables.m"
    *ll_backend__prog_rep_tables__wrapper_arg_4 = ((MR_Box) (ll_backend__prog_rep_tables__conv1_STATE_VARIABLE_StringTable_16));
#line 293 "prog_rep_tables.m"
    *ll_backend__prog_rep_tables__wrapper_arg_6 = ((MR_Box) (ll_backend__prog_rep_tables__conv0_STATE_VARIABLE_TypeTable_18));
#line 293 "prog_rep_tables.m"
  }
#line 293 "prog_rep_tables.m"
}

#line 284 "prog_rep_tables.m"
static void MR_CALL 
ll_backend__prog_rep_tables__add_type_to_table_6_p_0(
#line 284 "prog_rep_tables.m"
  MR_Word ll_backend__prog_rep_tables__Type_7,
#line 284 "prog_rep_tables.m"
  MR_Integer * ll_backend__prog_rep_tables__TypeCode_8,
#line 284 "prog_rep_tables.m"
  MR_Word ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_0_48,
#line 284 "prog_rep_tables.m"
  MR_Word * ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_49,
#line 284 "prog_rep_tables.m"
  MR_Word ll_backend__prog_rep_tables__STATE_VARIABLE_TypeTable_0_50,
#line 284 "prog_rep_tables.m"
  MR_Word * ll_backend__prog_rep_tables__STATE_VARIABLE_TypeTable_51)
#line 284 "prog_rep_tables.m"
{
#line 288 "prog_rep_tables.m"
  {
#line 288 "prog_rep_tables.m"
    MR_bool ll_backend__prog_rep_tables__succeeded;
#line 288 "prog_rep_tables.m"
    MR_Word ll_backend__prog_rep_tables__TypeCtorInfo_160_160;
#line 288 "prog_rep_tables.m"
    MR_Word ll_backend__prog_rep_tables__TypeBytesCord_28;
#line 288 "prog_rep_tables.m"
    MR_Word ll_backend__prog_rep_tables__TypeMap0_42;
#line 288 "prog_rep_tables.m"
    MR_Word ll_backend__prog_rep_tables__TypeTableCord0_43;
#line 288 "prog_rep_tables.m"
    MR_Integer ll_backend__prog_rep_tables__NextTypeNum_45;
#line 288 "prog_rep_tables.m"
    MR_Word ll_backend__prog_rep_tables__TypeMap_46;
#line 288 "prog_rep_tables.m"
    MR_Word ll_backend__prog_rep_tables__TypeTableCord_47;
#line 288 "prog_rep_tables.m"
    MR_Word ll_backend__prog_rep_tables__STATE_VARIABLE_TypeTable_75_75;

#line 326 "prog_rep_tables.m"
#line 326 "prog_rep_tables.m"
    switch (MR_tag((MR_Word) ll_backend__prog_rep_tables__Type_7)) {
#line 326 "prog_rep_tables.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 326 "prog_rep_tables.m"
      case (MR_Integer) 0:
#line 377 "prog_rep_tables.m"
        {
#line 377 "prog_rep_tables.m"
          MR_Word ll_backend__prog_rep_tables__TypeCtorInfo_158_158;
#line 377 "prog_rep_tables.m"
          MR_Word ll_backend__prog_rep_tables__TVar_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__Type_7, (MR_Integer) 0)));
#line 377 "prog_rep_tables.m"
          MR_Integer ll_backend__prog_rep_tables__TVarNum_40;
#line 377 "prog_rep_tables.m"
          MR_Word ll_backend__prog_rep_tables__TVarNumBytes_41;
#line 377 "prog_rep_tables.m"
          MR_Word ll_backend__prog_rep_tables__V_52_52;
#line 377 "prog_rep_tables.m"
          MR_Word ll_backend__prog_rep_tables__V_53_53;
#line 377 "prog_rep_tables.m"
          MR_Word ll_backend__prog_rep_tables___Kind_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__Type_7, (MR_Integer) 1)));

#line 379 "prog_rep_tables.m"
          {
#line 379 "prog_rep_tables.m"
            mercury__term__var_to_int_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, ll_backend__prog_rep_tables__TVar_39, &ll_backend__prog_rep_tables__TVarNum_40);
          }
#line 380 "prog_rep_tables.m"
          {
#line 380 "prog_rep_tables.m"
            mdbcomp__rtti_access__encode_num_det_2_p_0(ll_backend__prog_rep_tables__TVarNum_40, &ll_backend__prog_rep_tables__TVarNumBytes_41);
          }
#line 1440 "ll_backend.prog_rep_tables.c"
          ll_backend__prog_rep_tables__TypeCtorInfo_158_158 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 381 "prog_rep_tables.m"
          {
#line 381 "prog_rep_tables.m"
            ll_backend__prog_rep_tables__V_52_52 = mercury__cord__singleton_1_f_0(ll_backend__prog_rep_tables__TypeCtorInfo_158_158, ((MR_Box) ((MR_Integer) 12)));
          }
#line 382 "prog_rep_tables.m"
          {
#line 382 "prog_rep_tables.m"
            ll_backend__prog_rep_tables__V_53_53 = mercury__cord__from_list_1_f_0(ll_backend__prog_rep_tables__TypeCtorInfo_158_158, ll_backend__prog_rep_tables__TVarNumBytes_41);
          }
#line 381 "prog_rep_tables.m"
          {
#line 381 "prog_rep_tables.m"
            ll_backend__prog_rep_tables__TypeBytesCord_28 = mercury__cord__f_43_43_2_f_0(ll_backend__prog_rep_tables__TypeCtorInfo_158_158, ll_backend__prog_rep_tables__V_52_52, ll_backend__prog_rep_tables__V_53_53);
          }
#line 377 "prog_rep_tables.m"
          *ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_49 = ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_0_48;
#line 377 "prog_rep_tables.m"
          ll_backend__prog_rep_tables__STATE_VARIABLE_TypeTable_75_75 = ll_backend__prog_rep_tables__STATE_VARIABLE_TypeTable_0_50;
#line 377 "prog_rep_tables.m"
        }
#line 326 "prog_rep_tables.m"
        break;
#line 326 "prog_rep_tables.m"
      case (MR_Integer) 1:
#line 292 "prog_rep_tables.m"
        {
#line 292 "prog_rep_tables.m"
          MR_Word ll_backend__prog_rep_tables__TypeCtorInfo_133_133 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 292 "prog_rep_tables.m"
          MR_Word ll_backend__prog_rep_tables__TypeCtorSymName_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep_tables__Type_7, (MR_Integer) 0)));
#line 292 "prog_rep_tables.m"
          MR_Word ll_backend__prog_rep_tables__ArgTypes_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep_tables__Type_7, (MR_Integer) 1)));
#line 292 "prog_rep_tables.m"
          MR_Word ll_backend__prog_rep_tables__ArgTypeCodes_14;
#line 292 "prog_rep_tables.m"
          MR_String ll_backend__prog_rep_tables__TypeCtorSymNameStr_15;
#line 292 "prog_rep_tables.m"
          MR_Integer ll_backend__prog_rep_tables__TypeCtorSymNameCode_16;
#line 292 "prog_rep_tables.m"
          MR_Word ll_backend__prog_rep_tables__TypeCtorSymNameBytes_17;
#line 292 "prog_rep_tables.m"
          MR_Integer ll_backend__prog_rep_tables__Selector_18;
#line 292 "prog_rep_tables.m"
          MR_Word ll_backend__prog_rep_tables__ArgTypeBytesCord_19;
#line 292 "prog_rep_tables.m"
          MR_Word ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_74_74;
#line 292 "prog_rep_tables.m"
          MR_Word ll_backend__prog_rep_tables__V_98_98;
#line 292 "prog_rep_tables.m"
          MR_Word ll_backend__prog_rep_tables__V_99_99;
#line 292 "prog_rep_tables.m"
          MR_Word ll_backend__prog_rep_tables___Kind_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep_tables__Type_7, (MR_Integer) 2)));
#line 293 "prog_rep_tables.m"
          MR_Box ll_backend__prog_rep_tables__conv4_STATE_VARIABLE_StringTable_74_74;
#line 293 "prog_rep_tables.m"
          MR_Box ll_backend__prog_rep_tables__conv3_STATE_VARIABLE_TypeTable_75_75;

#line 293 "prog_rep_tables.m"
          {
#line 293 "prog_rep_tables.m"
            mercury__list__map_foldl2_7_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ll_backend__prog_rep_tables__TypeCtorInfo_133_133, (MR_Word) &ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_string_table_info_0, (MR_Word) &ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_type_table_info_0, (MR_Word) &ll_backend__prog_rep_tables_scalar_common_2[2], ll_backend__prog_rep_tables__ArgTypes_12, &ll_backend__prog_rep_tables__ArgTypeCodes_14, ((MR_Box) (ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_0_48)), &ll_backend__prog_rep_tables__conv4_STATE_VARIABLE_StringTable_74_74, ((MR_Box) (ll_backend__prog_rep_tables__STATE_VARIABLE_TypeTable_0_50)), &ll_backend__prog_rep_tables__conv3_STATE_VARIABLE_TypeTable_75_75);
          }
#line 293 "prog_rep_tables.m"
          ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_74_74 = ((MR_Word) ll_backend__prog_rep_tables__conv4_STATE_VARIABLE_StringTable_74_74);
#line 293 "prog_rep_tables.m"
          ll_backend__prog_rep_tables__STATE_VARIABLE_TypeTable_75_75 = ((MR_Word) ll_backend__prog_rep_tables__conv3_STATE_VARIABLE_TypeTable_75_75);
#line 295 "prog_rep_tables.m"
          {
#line 295 "prog_rep_tables.m"
            ll_backend__prog_rep_tables__TypeCtorSymNameStr_15 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ll_backend__prog_rep_tables__TypeCtorSymName_11);
          }
#line 296 "prog_rep_tables.m"
          {
#line 296 "prog_rep_tables.m"
            ll_backend__prog_rep_tables__lookup_string_in_table_4_p_0(ll_backend__prog_rep_tables__TypeCtorSymNameStr_15, &ll_backend__prog_rep_tables__TypeCtorSymNameCode_16, ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_74_74, ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_49);
          }
#line 298 "prog_rep_tables.m"
          {
#line 298 "prog_rep_tables.m"
            mdbcomp__rtti_access__encode_int32_det_2_p_0(ll_backend__prog_rep_tables__TypeCtorSymNameCode_16, &ll_backend__prog_rep_tables__TypeCtorSymNameBytes_17);
          }
#line 303 "prog_rep_tables.m"
          if ((ll_backend__prog_rep_tables__ArgTypeCodes_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 300 "prog_rep_tables.m"
            {
#line 301 "prog_rep_tables.m"
              ll_backend__prog_rep_tables__Selector_18 = (MR_Integer) 0;
#line 302 "prog_rep_tables.m"
              {
#line 302 "prog_rep_tables.m"
                ll_backend__prog_rep_tables__ArgTypeBytesCord_19 = mercury__cord__init_0_f_0(ll_backend__prog_rep_tables__TypeCtorInfo_133_133);
              }
#line 300 "prog_rep_tables.m"
            }
#line 303 "prog_rep_tables.m"
          else
#line 303 "prog_rep_tables.m"
            {
#line 303 "prog_rep_tables.m"
              MR_Word ll_backend__prog_rep_tables__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep_tables__ArgTypeCodes_14, (MR_Integer) 1)));
#line 303 "prog_rep_tables.m"
              MR_Integer ll_backend__prog_rep_tables__V_162_162 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep_tables__ArgTypeCodes_14, (MR_Integer) 0)));

#line 303 "prog_rep_tables.m"
              if ((ll_backend__prog_rep_tables__V_161_161 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 304 "prog_rep_tables.m"
                {
#line 304 "prog_rep_tables.m"
                  MR_Word ll_backend__prog_rep_tables__V_97_97;

#line 305 "prog_rep_tables.m"
                  ll_backend__prog_rep_tables__Selector_18 = (MR_Integer) 1;
#line 306 "prog_rep_tables.m"
                  {
#line 306 "prog_rep_tables.m"
                    ll_backend__prog_rep_tables__V_97_97 = mdbcomp__rtti_access__encode_num_func_1_f_0(ll_backend__prog_rep_tables__V_162_162);
                  }
#line 306 "prog_rep_tables.m"
                  {
#line 306 "prog_rep_tables.m"
                    ll_backend__prog_rep_tables__ArgTypeBytesCord_19 = mercury__cord__from_list_1_f_0(ll_backend__prog_rep_tables__TypeCtorInfo_133_133, ll_backend__prog_rep_tables__V_97_97);
                  }
#line 304 "prog_rep_tables.m"
                }
#line 303 "prog_rep_tables.m"
              else
#line 303 "prog_rep_tables.m"
                {
#line 303 "prog_rep_tables.m"
                  MR_Word ll_backend__prog_rep_tables__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep_tables__V_161_161, (MR_Integer) 1)));
#line 303 "prog_rep_tables.m"
                  MR_Integer ll_backend__prog_rep_tables__V_164_164 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep_tables__V_161_161, (MR_Integer) 0)));

#line 303 "prog_rep_tables.m"
                  if ((ll_backend__prog_rep_tables__V_163_163 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 308 "prog_rep_tables.m"
                    {
#line 308 "prog_rep_tables.m"
                      MR_Word ll_backend__prog_rep_tables__V_92_92;
#line 308 "prog_rep_tables.m"
                      MR_Word ll_backend__prog_rep_tables__V_93_93;
#line 308 "prog_rep_tables.m"
                      MR_Word ll_backend__prog_rep_tables__V_94_94;
#line 308 "prog_rep_tables.m"
                      MR_Word ll_backend__prog_rep_tables__V_95_95;

#line 309 "prog_rep_tables.m"
                      ll_backend__prog_rep_tables__Selector_18 = (MR_Integer) 2;
#line 310 "prog_rep_tables.m"
                      {
#line 310 "prog_rep_tables.m"
                        ll_backend__prog_rep_tables__V_93_93 = mdbcomp__rtti_access__encode_num_func_1_f_0(ll_backend__prog_rep_tables__V_162_162);
                      }
#line 310 "prog_rep_tables.m"
                      {
#line 310 "prog_rep_tables.m"
                        ll_backend__prog_rep_tables__V_92_92 = mercury__cord__from_list_1_f_0(ll_backend__prog_rep_tables__TypeCtorInfo_133_133, ll_backend__prog_rep_tables__V_93_93);
                      }
#line 311 "prog_rep_tables.m"
                      {
#line 311 "prog_rep_tables.m"
                        ll_backend__prog_rep_tables__V_95_95 = mdbcomp__rtti_access__encode_num_func_1_f_0(ll_backend__prog_rep_tables__V_164_164);
                      }
#line 311 "prog_rep_tables.m"
                      {
#line 311 "prog_rep_tables.m"
                        ll_backend__prog_rep_tables__V_94_94 = mercury__cord__from_list_1_f_0(ll_backend__prog_rep_tables__TypeCtorInfo_133_133, ll_backend__prog_rep_tables__V_95_95);
                      }
#line 311 "prog_rep_tables.m"
                      {
#line 311 "prog_rep_tables.m"
                        ll_backend__prog_rep_tables__ArgTypeBytesCord_19 = mercury__cord__f_43_43_2_f_0(ll_backend__prog_rep_tables__TypeCtorInfo_133_133, ll_backend__prog_rep_tables__V_92_92, ll_backend__prog_rep_tables__V_94_94);
                      }
#line 308 "prog_rep_tables.m"
                    }
#line 303 "prog_rep_tables.m"
                  else
#line 303 "prog_rep_tables.m"
                    {
#line 303 "prog_rep_tables.m"
                      MR_Word ll_backend__prog_rep_tables__V_165_165 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep_tables__V_163_163, (MR_Integer) 1)));
#line 303 "prog_rep_tables.m"
                      MR_Integer ll_backend__prog_rep_tables__V_166_166 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep_tables__V_163_163, (MR_Integer) 0)));

#line 303 "prog_rep_tables.m"
                      if ((ll_backend__prog_rep_tables__V_165_165 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 313 "prog_rep_tables.m"
                        {
#line 313 "prog_rep_tables.m"
                          MR_Word ll_backend__prog_rep_tables__V_83_83;
#line 313 "prog_rep_tables.m"
                          MR_Word ll_backend__prog_rep_tables__V_84_84;
#line 313 "prog_rep_tables.m"
                          MR_Word ll_backend__prog_rep_tables__V_85_85;
#line 313 "prog_rep_tables.m"
                          MR_Word ll_backend__prog_rep_tables__V_86_86;
#line 313 "prog_rep_tables.m"
                          MR_Word ll_backend__prog_rep_tables__V_87_87;
#line 313 "prog_rep_tables.m"
                          MR_Word ll_backend__prog_rep_tables__V_88_88;
#line 313 "prog_rep_tables.m"
                          MR_Word ll_backend__prog_rep_tables__V_89_89;

#line 314 "prog_rep_tables.m"
                          ll_backend__prog_rep_tables__Selector_18 = (MR_Integer) 3;
#line 315 "prog_rep_tables.m"
                          {
#line 315 "prog_rep_tables.m"
                            ll_backend__prog_rep_tables__V_84_84 = mdbcomp__rtti_access__encode_num_func_1_f_0(ll_backend__prog_rep_tables__V_162_162);
                          }
#line 315 "prog_rep_tables.m"
                          {
#line 315 "prog_rep_tables.m"
                            ll_backend__prog_rep_tables__V_83_83 = mercury__cord__from_list_1_f_0(ll_backend__prog_rep_tables__TypeCtorInfo_133_133, ll_backend__prog_rep_tables__V_84_84);
                          }
#line 316 "prog_rep_tables.m"
                          {
#line 316 "prog_rep_tables.m"
                            ll_backend__prog_rep_tables__V_87_87 = mdbcomp__rtti_access__encode_num_func_1_f_0(ll_backend__prog_rep_tables__V_164_164);
                          }
#line 316 "prog_rep_tables.m"
                          {
#line 316 "prog_rep_tables.m"
                            ll_backend__prog_rep_tables__V_86_86 = mercury__cord__from_list_1_f_0(ll_backend__prog_rep_tables__TypeCtorInfo_133_133, ll_backend__prog_rep_tables__V_87_87);
                          }
#line 317 "prog_rep_tables.m"
                          {
#line 317 "prog_rep_tables.m"
                            ll_backend__prog_rep_tables__V_89_89 = mdbcomp__rtti_access__encode_num_func_1_f_0(ll_backend__prog_rep_tables__V_166_166);
                          }
#line 317 "prog_rep_tables.m"
                          {
#line 317 "prog_rep_tables.m"
                            ll_backend__prog_rep_tables__V_88_88 = mercury__cord__from_list_1_f_0(ll_backend__prog_rep_tables__TypeCtorInfo_133_133, ll_backend__prog_rep_tables__V_89_89);
                          }
#line 317 "prog_rep_tables.m"
                          {
#line 317 "prog_rep_tables.m"
                            ll_backend__prog_rep_tables__V_85_85 = mercury__cord__f_43_43_2_f_0(ll_backend__prog_rep_tables__TypeCtorInfo_133_133, ll_backend__prog_rep_tables__V_86_86, ll_backend__prog_rep_tables__V_88_88);
                          }
#line 316 "prog_rep_tables.m"
                          {
#line 316 "prog_rep_tables.m"
                            ll_backend__prog_rep_tables__ArgTypeBytesCord_19 = mercury__cord__f_43_43_2_f_0(ll_backend__prog_rep_tables__TypeCtorInfo_133_133, ll_backend__prog_rep_tables__V_83_83, ll_backend__prog_rep_tables__V_85_85);
                          }
#line 313 "prog_rep_tables.m"
                        }
#line 303 "prog_rep_tables.m"
                      else
#line 319 "prog_rep_tables.m"
                        {
#line 320 "prog_rep_tables.m"
                          ll_backend__prog_rep_tables__Selector_18 = (MR_Integer) 4;
#line 321 "prog_rep_tables.m"
                          {
#line 321 "prog_rep_tables.m"
                            ll_backend__prog_rep_tables__encode_arg_type_codes_2_p_0(ll_backend__prog_rep_tables__ArgTypeCodes_14, &ll_backend__prog_rep_tables__ArgTypeBytesCord_19);
                          }
#line 319 "prog_rep_tables.m"
                        }
#line 303 "prog_rep_tables.m"
                    }
#line 303 "prog_rep_tables.m"
                }
#line 303 "prog_rep_tables.m"
            }
#line 324 "prog_rep_tables.m"
          {
#line 324 "prog_rep_tables.m"
            ll_backend__prog_rep_tables__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 324 "prog_rep_tables.m"
            MR_hl_field(MR_mktag(1), ll_backend__prog_rep_tables__V_99_99, 0) = ((MR_Box) (ll_backend__prog_rep_tables__Selector_18));
#line 324 "prog_rep_tables.m"
            MR_hl_field(MR_mktag(1), ll_backend__prog_rep_tables__V_99_99, 1) = ((MR_Box) (ll_backend__prog_rep_tables__TypeCtorSymNameBytes_17));
#line 324 "prog_rep_tables.m"
          }
#line 324 "prog_rep_tables.m"
          {
#line 324 "prog_rep_tables.m"
            ll_backend__prog_rep_tables__V_98_98 = mercury__cord__from_list_1_f_0(ll_backend__prog_rep_tables__TypeCtorInfo_133_133, ll_backend__prog_rep_tables__V_99_99);
          }
#line 325 "prog_rep_tables.m"
          {
#line 325 "prog_rep_tables.m"
            ll_backend__prog_rep_tables__TypeBytesCord_28 = mercury__cord__f_43_43_2_f_0(ll_backend__prog_rep_tables__TypeCtorInfo_133_133, ll_backend__prog_rep_tables__V_98_98, ll_backend__prog_rep_tables__ArgTypeBytesCord_19);
          }
#line 292 "prog_rep_tables.m"
        }
#line 326 "prog_rep_tables.m"
        break;
#line 326 "prog_rep_tables.m"
      case (MR_Integer) 2:
#line 327 "prog_rep_tables.m"
        {
#line 327 "prog_rep_tables.m"
          MR_Word ll_backend__prog_rep_tables__BuiltinType_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__prog_rep_tables__Type_7, (MR_Integer) 0)));
#line 327 "prog_rep_tables.m"
          MR_Integer ll_backend__prog_rep_tables__Selector_105 = ((&ll_backend__prog_rep_tables_vector_common_3[0 + ll_backend__prog_rep_tables__BuiltinType_29]))->ll_backend__prog_rep_tables__vector_common_type_3_0__vct_3_f_0;

#line 341 "prog_rep_tables.m"
          {
#line 341 "prog_rep_tables.m"
            ll_backend__prog_rep_tables__TypeBytesCord_28 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (ll_backend__prog_rep_tables__Selector_105)));
          }
#line 327 "prog_rep_tables.m"
          *ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_49 = ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_0_48;
#line 327 "prog_rep_tables.m"
          ll_backend__prog_rep_tables__STATE_VARIABLE_TypeTable_75_75 = ll_backend__prog_rep_tables__STATE_VARIABLE_TypeTable_0_50;
#line 327 "prog_rep_tables.m"
        }
#line 326 "prog_rep_tables.m"
        break;
#line 326 "prog_rep_tables.m"
      case (MR_Integer) 3:
#line 326 "prog_rep_tables.m"
#line 326 "prog_rep_tables.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep_tables__Type_7, (MR_Integer) 0)))) {
#line 326 "prog_rep_tables.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 326 "prog_rep_tables.m"
          case (MR_Integer) 0:
#line 343 "prog_rep_tables.m"
            {
#line 343 "prog_rep_tables.m"
              MR_Word ll_backend__prog_rep_tables__TypeCtorInfo_144_144 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 343 "prog_rep_tables.m"
              MR_Word ll_backend__prog_rep_tables__V_72_72;
#line 343 "prog_rep_tables.m"
              MR_Word ll_backend__prog_rep_tables__ArgTypes_107 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep_tables__Type_7, (MR_Integer) 1)));
#line 343 "prog_rep_tables.m"
              MR_Word ll_backend__prog_rep_tables__ArgTypeCodes_109;
#line 343 "prog_rep_tables.m"
              MR_Word ll_backend__prog_rep_tables__ArgTypeBytesCord_111;
#line 343 "prog_rep_tables.m"
              MR_Word ll_backend__prog_rep_tables___Kind_106 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep_tables__Type_7, (MR_Integer) 2)));
#line 345 "prog_rep_tables.m"
              MR_Box ll_backend__prog_rep_tables__conv14_STATE_VARIABLE_StringTable_49;
#line 345 "prog_rep_tables.m"
              MR_Box ll_backend__prog_rep_tables__conv13_STATE_VARIABLE_TypeTable_75_75;

#line 345 "prog_rep_tables.m"
              {
#line 345 "prog_rep_tables.m"
                mercury__list__map_foldl2_7_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ll_backend__prog_rep_tables__TypeCtorInfo_144_144, (MR_Word) &ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_string_table_info_0, (MR_Word) &ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_type_table_info_0, (MR_Word) &ll_backend__prog_rep_tables_scalar_common_2[4], ll_backend__prog_rep_tables__ArgTypes_107, &ll_backend__prog_rep_tables__ArgTypeCodes_109, ((MR_Box) (ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_0_48)), &ll_backend__prog_rep_tables__conv14_STATE_VARIABLE_StringTable_49, ((MR_Box) (ll_backend__prog_rep_tables__STATE_VARIABLE_TypeTable_0_50)), &ll_backend__prog_rep_tables__conv13_STATE_VARIABLE_TypeTable_75_75);
              }
#line 345 "prog_rep_tables.m"
              *ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_49 = ((MR_Word) ll_backend__prog_rep_tables__conv14_STATE_VARIABLE_StringTable_49);
#line 345 "prog_rep_tables.m"
              ll_backend__prog_rep_tables__STATE_VARIABLE_TypeTable_75_75 = ((MR_Word) ll_backend__prog_rep_tables__conv13_STATE_VARIABLE_TypeTable_75_75);
#line 347 "prog_rep_tables.m"
              {
#line 347 "prog_rep_tables.m"
                ll_backend__prog_rep_tables__encode_arg_type_codes_2_p_0(ll_backend__prog_rep_tables__ArgTypeCodes_109, &ll_backend__prog_rep_tables__ArgTypeBytesCord_111);
              }
#line 348 "prog_rep_tables.m"
              {
#line 348 "prog_rep_tables.m"
                ll_backend__prog_rep_tables__V_72_72 = mercury__cord__singleton_1_f_0(ll_backend__prog_rep_tables__TypeCtorInfo_144_144, ((MR_Box) ((MR_Integer) 9)));
              }
#line 348 "prog_rep_tables.m"
              {
#line 348 "prog_rep_tables.m"
                ll_backend__prog_rep_tables__TypeBytesCord_28 = mercury__cord__f_43_43_2_f_0(ll_backend__prog_rep_tables__TypeCtorInfo_144_144, ll_backend__prog_rep_tables__V_72_72, ll_backend__prog_rep_tables__ArgTypeBytesCord_111);
              }
#line 343 "prog_rep_tables.m"
            }
#line 326 "prog_rep_tables.m"
            break;
#line 326 "prog_rep_tables.m"
          case (MR_Integer) 1:
#line 351 "prog_rep_tables.m"
            {
#line 351 "prog_rep_tables.m"
              MR_Word ll_backend__prog_rep_tables__TypeCtorInfo_154_154 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 351 "prog_rep_tables.m"
              MR_Word ll_backend__prog_rep_tables__MaybeReturnType_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep_tables__Type_7, (MR_Integer) 2)));
#line 351 "prog_rep_tables.m"
              MR_Word ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_61_61;
#line 351 "prog_rep_tables.m"
              MR_Word ll_backend__prog_rep_tables__STATE_VARIABLE_TypeTable_62_62;
#line 351 "prog_rep_tables.m"
              MR_Word ll_backend__prog_rep_tables__ArgTypes_115 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep_tables__Type_7, (MR_Integer) 1)));
#line 351 "prog_rep_tables.m"
              MR_Word ll_backend__prog_rep_tables__ArgTypeCodes_116;
#line 351 "prog_rep_tables.m"
              MR_Word ll_backend__prog_rep_tables__ArgTypeBytesCord_118;
#line 350 "prog_rep_tables.m"
              MR_Word ll_backend__prog_rep_tables___Purity_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep_tables__Type_7, (MR_Integer) 3)));
#line 352 "prog_rep_tables.m"
              MR_Box ll_backend__prog_rep_tables__conv9_STATE_VARIABLE_StringTable_61_61;
#line 352 "prog_rep_tables.m"
              MR_Box ll_backend__prog_rep_tables__conv8_STATE_VARIABLE_TypeTable_62_62;

#line 352 "prog_rep_tables.m"
              {
#line 352 "prog_rep_tables.m"
                mercury__list__map_foldl2_7_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ll_backend__prog_rep_tables__TypeCtorInfo_154_154, (MR_Word) &ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_string_table_info_0, (MR_Word) &ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_type_table_info_0, (MR_Word) &ll_backend__prog_rep_tables_scalar_common_2[3], ll_backend__prog_rep_tables__ArgTypes_115, &ll_backend__prog_rep_tables__ArgTypeCodes_116, ((MR_Box) (ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_0_48)), &ll_backend__prog_rep_tables__conv9_STATE_VARIABLE_StringTable_61_61, ((MR_Box) (ll_backend__prog_rep_tables__STATE_VARIABLE_TypeTable_0_50)), &ll_backend__prog_rep_tables__conv8_STATE_VARIABLE_TypeTable_62_62);
              }
#line 352 "prog_rep_tables.m"
              ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_61_61 = ((MR_Word) ll_backend__prog_rep_tables__conv9_STATE_VARIABLE_StringTable_61_61);
#line 352 "prog_rep_tables.m"
              ll_backend__prog_rep_tables__STATE_VARIABLE_TypeTable_62_62 = ((MR_Word) ll_backend__prog_rep_tables__conv8_STATE_VARIABLE_TypeTable_62_62);
#line 354 "prog_rep_tables.m"
              {
#line 354 "prog_rep_tables.m"
                ll_backend__prog_rep_tables__encode_arg_type_codes_2_p_0(ll_backend__prog_rep_tables__ArgTypeCodes_116, &ll_backend__prog_rep_tables__ArgTypeBytesCord_118);
              }
#line 360 "prog_rep_tables.m"
              if ((ll_backend__prog_rep_tables__MaybeReturnType_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 356 "prog_rep_tables.m"
                {
#line 356 "prog_rep_tables.m"
                  MR_Word ll_backend__prog_rep_tables__V_68_68;

#line 358 "prog_rep_tables.m"
                  {
#line 358 "prog_rep_tables.m"
                    ll_backend__prog_rep_tables__V_68_68 = mercury__cord__singleton_1_f_0(ll_backend__prog_rep_tables__TypeCtorInfo_154_154, ((MR_Box) ((MR_Integer) 10)));
                  }
#line 359 "prog_rep_tables.m"
                  {
#line 359 "prog_rep_tables.m"
                    ll_backend__prog_rep_tables__TypeBytesCord_28 = mercury__cord__f_43_43_2_f_0(ll_backend__prog_rep_tables__TypeCtorInfo_154_154, ll_backend__prog_rep_tables__V_68_68, ll_backend__prog_rep_tables__ArgTypeBytesCord_118);
                  }
#line 356 "prog_rep_tables.m"
                  *ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_49 = ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_61_61;
#line 356 "prog_rep_tables.m"
                  ll_backend__prog_rep_tables__STATE_VARIABLE_TypeTable_75_75 = ll_backend__prog_rep_tables__STATE_VARIABLE_TypeTable_62_62;
#line 356 "prog_rep_tables.m"
                }
#line 360 "prog_rep_tables.m"
              else
#line 361 "prog_rep_tables.m"
                {
#line 361 "prog_rep_tables.m"
                  MR_Word ll_backend__prog_rep_tables__ReturnType_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep_tables__MaybeReturnType_30, (MR_Integer) 0)));
#line 361 "prog_rep_tables.m"
                  MR_Integer ll_backend__prog_rep_tables__ReturnTypeCode_34;
#line 361 "prog_rep_tables.m"
                  MR_Word ll_backend__prog_rep_tables__ReturnTypeBytes_35;
#line 361 "prog_rep_tables.m"
                  MR_Word ll_backend__prog_rep_tables__V_65_65;
#line 361 "prog_rep_tables.m"
                  MR_Word ll_backend__prog_rep_tables__V_66_66;
#line 361 "prog_rep_tables.m"
                  MR_Word ll_backend__prog_rep_tables__V_67_67;

#line 363 "prog_rep_tables.m"
                  {
#line 363 "prog_rep_tables.m"
                    ll_backend__prog_rep_tables__lookup_type_in_table_6_p_0(ll_backend__prog_rep_tables__ReturnType_33, &ll_backend__prog_rep_tables__ReturnTypeCode_34, ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_61_61, ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_49, ll_backend__prog_rep_tables__STATE_VARIABLE_TypeTable_62_62, &ll_backend__prog_rep_tables__STATE_VARIABLE_TypeTable_75_75);
                  }
#line 365 "prog_rep_tables.m"
                  {
#line 365 "prog_rep_tables.m"
                    mdbcomp__rtti_access__encode_num_det_2_p_0(ll_backend__prog_rep_tables__ReturnTypeCode_34, &ll_backend__prog_rep_tables__ReturnTypeBytes_35);
                  }
#line 366 "prog_rep_tables.m"
                  {
#line 366 "prog_rep_tables.m"
                    ll_backend__prog_rep_tables__V_65_65 = mercury__cord__singleton_1_f_0(ll_backend__prog_rep_tables__TypeCtorInfo_154_154, ((MR_Box) ((MR_Integer) 11)));
                  }
#line 368 "prog_rep_tables.m"
                  {
#line 368 "prog_rep_tables.m"
                    ll_backend__prog_rep_tables__V_67_67 = mercury__cord__from_list_1_f_0(ll_backend__prog_rep_tables__TypeCtorInfo_154_154, ll_backend__prog_rep_tables__ReturnTypeBytes_35);
                  }
#line 368 "prog_rep_tables.m"
                  {
#line 368 "prog_rep_tables.m"
                    ll_backend__prog_rep_tables__V_66_66 = mercury__cord__f_43_43_2_f_0(ll_backend__prog_rep_tables__TypeCtorInfo_154_154, ll_backend__prog_rep_tables__ArgTypeBytesCord_118, ll_backend__prog_rep_tables__V_67_67);
                  }
#line 367 "prog_rep_tables.m"
                  {
#line 367 "prog_rep_tables.m"
                    ll_backend__prog_rep_tables__TypeBytesCord_28 = mercury__cord__f_43_43_2_f_0(ll_backend__prog_rep_tables__TypeCtorInfo_154_154, ll_backend__prog_rep_tables__V_65_65, ll_backend__prog_rep_tables__V_66_66);
                  }
#line 361 "prog_rep_tables.m"
                }
#line 351 "prog_rep_tables.m"
            }
#line 326 "prog_rep_tables.m"
            break;
#line 326 "prog_rep_tables.m"
          case (MR_Integer) 2:
#line 371 "prog_rep_tables.m"
            {
#line 372 "prog_rep_tables.m"
              {
#line 372 "prog_rep_tables.m"
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.prog_rep_tables", (MR_String) "predicate \140ll_backend.prog_rep_tables.add_type_to_table\'/6", (MR_String) "apply_n_type");
#line 372 "prog_rep_tables.m"
                return;
              }
#line 371 "prog_rep_tables.m"
            }
#line 326 "prog_rep_tables.m"
            break;
#line 326 "prog_rep_tables.m"
          case (MR_Integer) 3:
#line 374 "prog_rep_tables.m"
            {
#line 375 "prog_rep_tables.m"
              {
#line 375 "prog_rep_tables.m"
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.prog_rep_tables", (MR_String) "predicate \140ll_backend.prog_rep_tables.add_type_to_table\'/6", (MR_String) "kinded_type");
#line 375 "prog_rep_tables.m"
                return;
              }
#line 374 "prog_rep_tables.m"
            }
#line 326 "prog_rep_tables.m"
            break;
#line 326 "prog_rep_tables.m"
        }
#line 326 "prog_rep_tables.m"
        break;
#line 326 "prog_rep_tables.m"
    }
#line 384 "prog_rep_tables.m"
    ll_backend__prog_rep_tables__TypeMap0_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__STATE_VARIABLE_TypeTable_75_75, (MR_Integer) 0)));
#line 384 "prog_rep_tables.m"
    ll_backend__prog_rep_tables__TypeTableCord0_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__STATE_VARIABLE_TypeTable_75_75, (MR_Integer) 1)));
#line 384 "prog_rep_tables.m"
    *ll_backend__prog_rep_tables__TypeCode_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__STATE_VARIABLE_TypeTable_75_75, (MR_Integer) 2)));
#line 386 "prog_rep_tables.m"
    ll_backend__prog_rep_tables__NextTypeNum_45 = (*ll_backend__prog_rep_tables__TypeCode_8 + (MR_Integer) 1);
#line 1970 "ll_backend.prog_rep_tables.c"
    ll_backend__prog_rep_tables__TypeCtorInfo_160_160 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 387 "prog_rep_tables.m"
    {
#line 387 "prog_rep_tables.m"
      mercury__map__det_insert_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ll_backend__prog_rep_tables__TypeCtorInfo_160_160, ((MR_Box) (ll_backend__prog_rep_tables__Type_7)), ((MR_Box) (*ll_backend__prog_rep_tables__TypeCode_8)), ll_backend__prog_rep_tables__TypeMap0_42, &ll_backend__prog_rep_tables__TypeMap_46);
    }
#line 388 "prog_rep_tables.m"
    {
#line 388 "prog_rep_tables.m"
      ll_backend__prog_rep_tables__TypeTableCord_47 = mercury__cord__f_43_43_2_f_0(ll_backend__prog_rep_tables__TypeCtorInfo_160_160, ll_backend__prog_rep_tables__TypeTableCord0_43, ll_backend__prog_rep_tables__TypeBytesCord_28);
    }
#line 389 "prog_rep_tables.m"
    {
#line 389 "prog_rep_tables.m"
      MR_Word base;
#line 389 "prog_rep_tables.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 389 "prog_rep_tables.m"
      *ll_backend__prog_rep_tables__STATE_VARIABLE_TypeTable_51 = base;
#line 389 "prog_rep_tables.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__prog_rep_tables__TypeMap_46));
#line 389 "prog_rep_tables.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__prog_rep_tables__TypeTableCord_47));
#line 389 "prog_rep_tables.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__prog_rep_tables__NextTypeNum_45));
#line 389 "prog_rep_tables.m"
    }
#line 288 "prog_rep_tables.m"
  }
#line 284 "prog_rep_tables.m"
}

#line 223 "prog_rep_tables.m"
static void MR_CALL 
ll_backend__prog_rep_tables__lookup_raw_string_in_table_4_p_0(
#line 223 "prog_rep_tables.m"
  MR_String ll_backend__prog_rep_tables__String_5,
#line 223 "prog_rep_tables.m"
  MR_Word * ll_backend__prog_rep_tables__MaybeOffset_6,
#line 223 "prog_rep_tables.m"
  MR_Word ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_0_16,
#line 223 "prog_rep_tables.m"
  MR_Word * ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_17)
#line 223 "prog_rep_tables.m"
{
#line 226 "prog_rep_tables.m"
  {
#line 226 "prog_rep_tables.m"
    MR_bool ll_backend__prog_rep_tables__succeeded;
#line 226 "prog_rep_tables.m"
    MR_Word ll_backend__prog_rep_tables__TableMap0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_0_16, (MR_Integer) 0)));
#line 226 "prog_rep_tables.m"
    MR_Word ll_backend__prog_rep_tables__TableList0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_0_16, (MR_Integer) 1)));
#line 226 "prog_rep_tables.m"
    MR_Integer ll_backend__prog_rep_tables__TableOffset0_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_0_16, (MR_Integer) 2)));
#line 228 "prog_rep_tables.m"
    MR_Integer ll_backend__prog_rep_tables__OldOffset_11;
#line 229 "prog_rep_tables.m"
    MR_Box ll_backend__prog_rep_tables__conv0_OldOffset_11;

#line 229 "prog_rep_tables.m"
    {
#line 229 "prog_rep_tables.m"
      ll_backend__prog_rep_tables__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ll_backend__prog_rep_tables__TableMap0_8, ((MR_Box) (ll_backend__prog_rep_tables__String_5)), &ll_backend__prog_rep_tables__conv0_OldOffset_11);
    }
#line 229 "prog_rep_tables.m"
    if (ll_backend__prog_rep_tables__succeeded)
#line 229 "prog_rep_tables.m"
      {
#line 229 "prog_rep_tables.m"
        ll_backend__prog_rep_tables__OldOffset_11 = ((MR_Integer) ll_backend__prog_rep_tables__conv0_OldOffset_11);
#line 229 "prog_rep_tables.m"
        ll_backend__prog_rep_tables__succeeded = MR_TRUE;
#line 229 "prog_rep_tables.m"
      }
#line 228 "prog_rep_tables.m"
    if (ll_backend__prog_rep_tables__succeeded)
#line 231 "prog_rep_tables.m"
      {
#line 231 "prog_rep_tables.m"
        {
#line 231 "prog_rep_tables.m"
          MR_Word base;
#line 231 "prog_rep_tables.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 231 "prog_rep_tables.m"
          *ll_backend__prog_rep_tables__MaybeOffset_6 = base;
#line 231 "prog_rep_tables.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__prog_rep_tables__OldOffset_11));
#line 231 "prog_rep_tables.m"
        }
#line 231 "prog_rep_tables.m"
        *ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_17 = ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_0_16;
#line 231 "prog_rep_tables.m"
      }
#line 228 "prog_rep_tables.m"
    else
#line 232 "prog_rep_tables.m"
      {
#line 232 "prog_rep_tables.m"
        MR_Integer ll_backend__prog_rep_tables__TableOffset_13;
#line 233 "prog_rep_tables.m"
        MR_Integer ll_backend__prog_rep_tables__Length_12;
#line 233 "prog_rep_tables.m"
        MR_Integer ll_backend__prog_rep_tables__V_18_18;
#line 233 "prog_rep_tables.m"
        MR_Integer ll_backend__prog_rep_tables__V_20_20;

#line 233 "prog_rep_tables.m"
        {
#line 233 "prog_rep_tables.m"
          ll_backend__prog_rep_tables__Length_12 = mercury__string__count_utf8_code_units_1_f_0(ll_backend__prog_rep_tables__String_5);
        }
#line 234 "prog_rep_tables.m"
        ll_backend__prog_rep_tables__V_18_18 = (ll_backend__prog_rep_tables__TableOffset0_10 + ll_backend__prog_rep_tables__Length_12);
#line 234 "prog_rep_tables.m"
        ll_backend__prog_rep_tables__TableOffset_13 = (ll_backend__prog_rep_tables__V_18_18 + (MR_Integer) 1);
#line 243 "prog_rep_tables.m"
        {
#line 243 "prog_rep_tables.m"
          ll_backend__prog_rep_tables__V_20_20 = mercury__int__f_60_60_2_f_0((MR_Integer) 1, (MR_Integer) 30);
        }
#line 243 "prog_rep_tables.m"
        ll_backend__prog_rep_tables__succeeded = (ll_backend__prog_rep_tables__TableOffset_13 < ll_backend__prog_rep_tables__V_20_20);
#line 232 "prog_rep_tables.m"
        if (ll_backend__prog_rep_tables__succeeded)
#line 245 "prog_rep_tables.m"
          {
#line 245 "prog_rep_tables.m"
            MR_Word ll_backend__prog_rep_tables__TableMap_14;
#line 245 "prog_rep_tables.m"
            MR_Word ll_backend__prog_rep_tables__TableList_15;

#line 245 "prog_rep_tables.m"
            {
#line 245 "prog_rep_tables.m"
              MR_Word base;
#line 245 "prog_rep_tables.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 245 "prog_rep_tables.m"
              *ll_backend__prog_rep_tables__MaybeOffset_6 = base;
#line 245 "prog_rep_tables.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__prog_rep_tables__TableOffset0_10));
#line 245 "prog_rep_tables.m"
            }
#line 246 "prog_rep_tables.m"
            {
#line 246 "prog_rep_tables.m"
              mercury__map__det_insert_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (ll_backend__prog_rep_tables__String_5)), ((MR_Box) (ll_backend__prog_rep_tables__TableOffset0_10)), ll_backend__prog_rep_tables__TableMap0_8, &ll_backend__prog_rep_tables__TableMap_14);
            }
#line 247 "prog_rep_tables.m"
            {
#line 247 "prog_rep_tables.m"
              ll_backend__prog_rep_tables__TableList_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 247 "prog_rep_tables.m"
              MR_hl_field(MR_mktag(1), ll_backend__prog_rep_tables__TableList_15, 0) = ((MR_Box) (ll_backend__prog_rep_tables__String_5));
#line 247 "prog_rep_tables.m"
              MR_hl_field(MR_mktag(1), ll_backend__prog_rep_tables__TableList_15, 1) = ((MR_Box) (ll_backend__prog_rep_tables__TableList0_9));
#line 247 "prog_rep_tables.m"
            }
#line 248 "prog_rep_tables.m"
            {
#line 248 "prog_rep_tables.m"
              MR_Word base;
#line 248 "prog_rep_tables.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 248 "prog_rep_tables.m"
              *ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_17 = base;
#line 248 "prog_rep_tables.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__prog_rep_tables__TableMap_14));
#line 248 "prog_rep_tables.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__prog_rep_tables__TableList_15));
#line 248 "prog_rep_tables.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__prog_rep_tables__TableOffset_13));
#line 248 "prog_rep_tables.m"
            }
#line 245 "prog_rep_tables.m"
          }
#line 232 "prog_rep_tables.m"
        else
#line 250 "prog_rep_tables.m"
          {
#line 250 "prog_rep_tables.m"
            *ll_backend__prog_rep_tables__MaybeOffset_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 250 "prog_rep_tables.m"
            *ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_17 = ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_0_16;
#line 250 "prog_rep_tables.m"
          }
#line 232 "prog_rep_tables.m"
      }
#line 226 "prog_rep_tables.m"
  }
#line 223 "prog_rep_tables.m"
}

#line 209 "prog_rep_tables.m"
static MR_bool MR_CALL 
ll_backend__prog_rep_tables__rev_find_number_suffix_6_p_0(
#line 209 "prog_rep_tables.m"
  MR_Word ll_backend__prog_rep_tables__HeadVar__1_1,
#line 209 "prog_rep_tables.m"
  MR_Integer ll_backend__prog_rep_tables__STATE_VARIABLE_Num_0_13,
#line 209 "prog_rep_tables.m"
  MR_Integer * ll_backend__prog_rep_tables__STATE_VARIABLE_Num_14,
#line 209 "prog_rep_tables.m"
  MR_Integer ll_backend__prog_rep_tables__STATE_VARIABLE_Scale_0_15,
#line 209 "prog_rep_tables.m"
  MR_Integer * ll_backend__prog_rep_tables__STATE_VARIABLE_Scale_16,
#line 209 "prog_rep_tables.m"
  MR_Word * ll_backend__prog_rep_tables__RevRest_11)
#line 209 "prog_rep_tables.m"
{
#line 212 "prog_rep_tables.m"
  while (MR_TRUE)
#line 212 "prog_rep_tables.m"
    {
#line 212 "prog_rep_tables.m"
      /* tailcall optimized into a loop */
#line 212 "prog_rep_tables.m"
      {
#line 212 "prog_rep_tables.m"
        MR_bool ll_backend__prog_rep_tables__succeeded = ((MR_tag((MR_Word) ll_backend__prog_rep_tables__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 212 "prog_rep_tables.m"
        MR_Char ll_backend__prog_rep_tables__RevHead_7;
#line 212 "prog_rep_tables.m"
        MR_Word ll_backend__prog_rep_tables__RevTail_8;
#line 213 "prog_rep_tables.m"
        MR_Integer ll_backend__prog_rep_tables__Digit_12;

#line 212 "prog_rep_tables.m"
        if (ll_backend__prog_rep_tables__succeeded)
#line 212 "prog_rep_tables.m"
          {
#line 212 "prog_rep_tables.m"
            ll_backend__prog_rep_tables__RevHead_7 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep_tables__HeadVar__1_1, (MR_Integer) 0)));
#line 212 "prog_rep_tables.m"
            ll_backend__prog_rep_tables__RevTail_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep_tables__HeadVar__1_1, (MR_Integer) 1)));
#line 213 "prog_rep_tables.m"
            {
#line 213 "prog_rep_tables.m"
              ll_backend__prog_rep_tables__succeeded = mercury__char__decimal_digit_to_int_2_p_0(ll_backend__prog_rep_tables__RevHead_7, &ll_backend__prog_rep_tables__Digit_12);
            }
#line 213 "prog_rep_tables.m"
            if (ll_backend__prog_rep_tables__succeeded)
#line 214 "prog_rep_tables.m"
              {
#line 214 "prog_rep_tables.m"
                MR_Integer ll_backend__prog_rep_tables__STATE_VARIABLE_Num_17_17;
#line 214 "prog_rep_tables.m"
                MR_Integer ll_backend__prog_rep_tables__V_18_18 = (ll_backend__prog_rep_tables__STATE_VARIABLE_Scale_0_15 * ll_backend__prog_rep_tables__Digit_12);
#line 214 "prog_rep_tables.m"
                MR_Integer ll_backend__prog_rep_tables__STATE_VARIABLE_Scale_19_19;

#line 214 "prog_rep_tables.m"
                ll_backend__prog_rep_tables__STATE_VARIABLE_Num_17_17 = (ll_backend__prog_rep_tables__STATE_VARIABLE_Num_0_13 + ll_backend__prog_rep_tables__V_18_18);
#line 215 "prog_rep_tables.m"
                ll_backend__prog_rep_tables__STATE_VARIABLE_Scale_19_19 = (ll_backend__prog_rep_tables__STATE_VARIABLE_Scale_0_15 * (MR_Integer) 10);
#line 216 "prog_rep_tables.m"
                /* direct tailcall eliminated */
#line 216 "prog_rep_tables.m"
                {
#line 216 "prog_rep_tables.m"
                  MR_Word ll_backend__prog_rep_tables__HeadVar__1__tmp_copy_1 = ll_backend__prog_rep_tables__RevTail_8;
#line 216 "prog_rep_tables.m"
                  MR_Integer ll_backend__prog_rep_tables__STATE_VARIABLE_Num_0__tmp_copy_13 = ll_backend__prog_rep_tables__STATE_VARIABLE_Num_17_17;
#line 216 "prog_rep_tables.m"
                  MR_Integer ll_backend__prog_rep_tables__STATE_VARIABLE_Scale_0__tmp_copy_15 = ll_backend__prog_rep_tables__STATE_VARIABLE_Scale_19_19;

#line 216 "prog_rep_tables.m"
                  ll_backend__prog_rep_tables__STATE_VARIABLE_Scale_0_15 = ll_backend__prog_rep_tables__STATE_VARIABLE_Scale_0__tmp_copy_15;
#line 216 "prog_rep_tables.m"
                  ll_backend__prog_rep_tables__STATE_VARIABLE_Num_0_13 = ll_backend__prog_rep_tables__STATE_VARIABLE_Num_0__tmp_copy_13;
#line 216 "prog_rep_tables.m"
                  ll_backend__prog_rep_tables__HeadVar__1_1 = ll_backend__prog_rep_tables__HeadVar__1__tmp_copy_1;
#line 216 "prog_rep_tables.m"
                }
#line 216 "prog_rep_tables.m"
                continue;
#line 214 "prog_rep_tables.m"
              }
#line 213 "prog_rep_tables.m"
            else
#line 217 "prog_rep_tables.m"
              {
#line 217 "prog_rep_tables.m"
                ll_backend__prog_rep_tables__succeeded = (ll_backend__prog_rep_tables__RevHead_7 == (MR_Char) 95);
#line 217 "prog_rep_tables.m"
                if (ll_backend__prog_rep_tables__succeeded)
#line 217 "prog_rep_tables.m"
                  {
#line 218 "prog_rep_tables.m"
                    *ll_backend__prog_rep_tables__RevRest_11 = ll_backend__prog_rep_tables__RevTail_8;
#line 217 "prog_rep_tables.m"
                    *ll_backend__prog_rep_tables__STATE_VARIABLE_Scale_16 = ll_backend__prog_rep_tables__STATE_VARIABLE_Scale_0_15;
#line 217 "prog_rep_tables.m"
                    *ll_backend__prog_rep_tables__STATE_VARIABLE_Num_14 = ll_backend__prog_rep_tables__STATE_VARIABLE_Num_0_13;
#line 217 "prog_rep_tables.m"
                    ll_backend__prog_rep_tables__succeeded = MR_TRUE;
#line 217 "prog_rep_tables.m"
                  }
#line 217 "prog_rep_tables.m"
              }
#line 212 "prog_rep_tables.m"
          }
#line 212 "prog_rep_tables.m"
        return ll_backend__prog_rep_tables__succeeded;
#line 212 "prog_rep_tables.m"
      }
#line 212 "prog_rep_tables.m"
      break;
#line 212 "prog_rep_tables.m"
    }
#line 209 "prog_rep_tables.m"
}

#line 47 "prog_rep_tables.m"
void MR_CALL 
ll_backend__prog_rep_tables__get_type_table_contents_3_p_0(
#line 47 "prog_rep_tables.m"
  MR_Word ll_backend__prog_rep_tables__TypeTable_4,
#line 47 "prog_rep_tables.m"
  MR_Integer * ll_backend__prog_rep_tables__NumTypes_5,
#line 47 "prog_rep_tables.m"
  MR_Word * ll_backend__prog_rep_tables__TypeBytes_6)
#line 47 "prog_rep_tables.m"
{
#line 401 "prog_rep_tables.m"
  {
#line 401 "prog_rep_tables.m"
    MR_bool ll_backend__prog_rep_tables__succeeded;
#line 401 "prog_rep_tables.m"
    MR_Word ll_backend__prog_rep_tables__TypeBytesCord_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__TypeTable_4, (MR_Integer) 1)));
#line 402 "prog_rep_tables.m"
    MR_Word ll_backend__prog_rep_tables__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__TypeTable_4, (MR_Integer) 0)));

#line 402 "prog_rep_tables.m"
    *ll_backend__prog_rep_tables__NumTypes_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__TypeTable_4, (MR_Integer) 2)));
#line 403 "prog_rep_tables.m"
    {
#line 403 "prog_rep_tables.m"
      *ll_backend__prog_rep_tables__TypeBytes_6 = mercury__cord__list_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ll_backend__prog_rep_tables__TypeBytesCord_8);
    }
#line 401 "prog_rep_tables.m"
  }
#line 47 "prog_rep_tables.m"
}

#line 43 "prog_rep_tables.m"
void MR_CALL 
ll_backend__prog_rep_tables__lookup_type_in_table_6_p_0(
#line 43 "prog_rep_tables.m"
  MR_Word ll_backend__prog_rep_tables__Type_7,
#line 43 "prog_rep_tables.m"
  MR_Integer * ll_backend__prog_rep_tables__TypeCode_8,
#line 43 "prog_rep_tables.m"
  MR_Word ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_0_15,
#line 43 "prog_rep_tables.m"
  MR_Word * ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_16,
#line 43 "prog_rep_tables.m"
  MR_Word ll_backend__prog_rep_tables__STATE_VARIABLE_TypeTable_0_17,
#line 43 "prog_rep_tables.m"
  MR_Word * ll_backend__prog_rep_tables__STATE_VARIABLE_TypeTable_18)
#line 43 "prog_rep_tables.m"
{
#line 276 "prog_rep_tables.m"
  {
#line 276 "prog_rep_tables.m"
    MR_bool ll_backend__prog_rep_tables__succeeded;
#line 276 "prog_rep_tables.m"
    MR_Word ll_backend__prog_rep_tables__TypeMap0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__STATE_VARIABLE_TypeTable_0_17, (MR_Integer) 0)));
#line 277 "prog_rep_tables.m"
    MR_Word ll_backend__prog_rep_tables__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__STATE_VARIABLE_TypeTable_0_17, (MR_Integer) 1)));
#line 277 "prog_rep_tables.m"
    MR_Integer ll_backend__prog_rep_tables__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__STATE_VARIABLE_TypeTable_0_17, (MR_Integer) 2)));
#line 278 "prog_rep_tables.m"
    MR_Integer ll_backend__prog_rep_tables__TypeCodePrime_14;
#line 278 "prog_rep_tables.m"
    MR_Box ll_backend__prog_rep_tables__conv0_TypeCodePrime_14;

#line 278 "prog_rep_tables.m"
    {
#line 278 "prog_rep_tables.m"
      ll_backend__prog_rep_tables__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ll_backend__prog_rep_tables__TypeMap0_11, ((MR_Box) (ll_backend__prog_rep_tables__Type_7)), &ll_backend__prog_rep_tables__conv0_TypeCodePrime_14);
    }
#line 278 "prog_rep_tables.m"
    if (ll_backend__prog_rep_tables__succeeded)
#line 278 "prog_rep_tables.m"
      {
#line 278 "prog_rep_tables.m"
        ll_backend__prog_rep_tables__TypeCodePrime_14 = ((MR_Integer) ll_backend__prog_rep_tables__conv0_TypeCodePrime_14);
#line 278 "prog_rep_tables.m"
        ll_backend__prog_rep_tables__succeeded = MR_TRUE;
#line 278 "prog_rep_tables.m"
      }
#line 278 "prog_rep_tables.m"
    if (ll_backend__prog_rep_tables__succeeded)
#line 279 "prog_rep_tables.m"
      {
#line 279 "prog_rep_tables.m"
        *ll_backend__prog_rep_tables__TypeCode_8 = ll_backend__prog_rep_tables__TypeCodePrime_14;
#line 279 "prog_rep_tables.m"
        *ll_backend__prog_rep_tables__STATE_VARIABLE_TypeTable_18 = ll_backend__prog_rep_tables__STATE_VARIABLE_TypeTable_0_17;
#line 279 "prog_rep_tables.m"
        *ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_16 = ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_0_15;
#line 279 "prog_rep_tables.m"
      }
#line 278 "prog_rep_tables.m"
    else
#line 281 "prog_rep_tables.m"
      {
#line 281 "prog_rep_tables.m"
        ll_backend__prog_rep_tables__add_type_to_table_6_p_0(ll_backend__prog_rep_tables__Type_7, ll_backend__prog_rep_tables__TypeCode_8, ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_0_15, ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_16, ll_backend__prog_rep_tables__STATE_VARIABLE_TypeTable_0_17, ll_backend__prog_rep_tables__STATE_VARIABLE_TypeTable_18);
      }
#line 276 "prog_rep_tables.m"
  }
#line 43 "prog_rep_tables.m"
}

#line 41 "prog_rep_tables.m"
MR_Word MR_CALL 
ll_backend__prog_rep_tables__init_type_table_info_0_f_0(void)
#line 41 "prog_rep_tables.m"
{
#line 274 "prog_rep_tables.m"
  {
#line 274 "prog_rep_tables.m"
    MR_bool ll_backend__prog_rep_tables__succeeded;
#line 274 "prog_rep_tables.m"
    MR_Word ll_backend__prog_rep_tables__HeadVar__1_1;
#line 274 "prog_rep_tables.m"
    MR_Word ll_backend__prog_rep_tables__TypeCtorInfo_6_6 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 274 "prog_rep_tables.m"
    MR_Word ll_backend__prog_rep_tables__V_2_2;
#line 274 "prog_rep_tables.m"
    MR_Word ll_backend__prog_rep_tables__V_3_3;

#line 274 "prog_rep_tables.m"
    {
#line 274 "prog_rep_tables.m"
      ll_backend__prog_rep_tables__V_2_2 = mercury__map__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ll_backend__prog_rep_tables__TypeCtorInfo_6_6);
    }
#line 274 "prog_rep_tables.m"
    {
#line 274 "prog_rep_tables.m"
      ll_backend__prog_rep_tables__V_3_3 = mercury__cord__init_0_f_0(ll_backend__prog_rep_tables__TypeCtorInfo_6_6);
    }
#line 274 "prog_rep_tables.m"
    {
#line 274 "prog_rep_tables.m"
      ll_backend__prog_rep_tables__HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 274 "prog_rep_tables.m"
      MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__HeadVar__1_1, 0) = ((MR_Box) (ll_backend__prog_rep_tables__V_2_2));
#line 274 "prog_rep_tables.m"
      MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__HeadVar__1_1, 1) = ((MR_Box) (ll_backend__prog_rep_tables__V_3_3));
#line 274 "prog_rep_tables.m"
      MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__HeadVar__1_1, 2) = ((MR_Box) ((MR_Integer) 0));
#line 274 "prog_rep_tables.m"
    }
#line 274 "prog_rep_tables.m"
    return ll_backend__prog_rep_tables__HeadVar__1_1;
#line 274 "prog_rep_tables.m"
  }
#line 41 "prog_rep_tables.m"
}

#line 34 "prog_rep_tables.m"
void MR_CALL 
ll_backend__prog_rep_tables__get_string_table_contents_3_p_0(
#line 34 "prog_rep_tables.m"
  MR_Word ll_backend__prog_rep_tables__StringTable_4,
#line 34 "prog_rep_tables.m"
  MR_Word * ll_backend__prog_rep_tables__Strings_5,
#line 34 "prog_rep_tables.m"
  MR_Integer * ll_backend__prog_rep_tables__StringTableSize_6)
#line 34 "prog_rep_tables.m"
{
#line 253 "prog_rep_tables.m"
  {
#line 253 "prog_rep_tables.m"
    MR_bool ll_backend__prog_rep_tables__succeeded;
#line 253 "prog_rep_tables.m"
    MR_Word ll_backend__prog_rep_tables__RevStrings_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__StringTable_4, (MR_Integer) 1)));
#line 254 "prog_rep_tables.m"
    MR_Word ll_backend__prog_rep_tables__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__StringTable_4, (MR_Integer) 0)));

#line 254 "prog_rep_tables.m"
    *ll_backend__prog_rep_tables__StringTableSize_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__StringTable_4, (MR_Integer) 2)));
#line 255 "prog_rep_tables.m"
    {
#line 255 "prog_rep_tables.m"
      mercury__list__reverse_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ll_backend__prog_rep_tables__RevStrings_8, ll_backend__prog_rep_tables__Strings_5);
    }
#line 253 "prog_rep_tables.m"
  }
#line 34 "prog_rep_tables.m"
}

#line 31 "prog_rep_tables.m"
void MR_CALL 
ll_backend__prog_rep_tables__lookup_string_in_table_4_p_0(
#line 31 "prog_rep_tables.m"
  MR_String ll_backend__prog_rep_tables__String_5,
#line 31 "prog_rep_tables.m"
  MR_Integer * ll_backend__prog_rep_tables__StringCode_6,
#line 31 "prog_rep_tables.m"
  MR_Word ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_0_14,
#line 31 "prog_rep_tables.m"
  MR_Word * ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_15)
#line 31 "prog_rep_tables.m"
{
#line 92 "prog_rep_tables.m"
  {
#line 92 "prog_rep_tables.m"
    MR_bool ll_backend__prog_rep_tables__succeeded;
#line 92 "prog_rep_tables.m"
    MR_Integer ll_backend__prog_rep_tables__KindCode_8;
#line 92 "prog_rep_tables.m"
    MR_Integer ll_backend__prog_rep_tables__N_10;
#line 92 "prog_rep_tables.m"
    MR_Integer ll_backend__prog_rep_tables__Offset_13;
#line 92 "prog_rep_tables.m"
    MR_Word ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_19_19;
#line 93 "prog_rep_tables.m"
    MR_Word ll_backend__prog_rep_tables__MaybeBaseName_9;
#line 93 "prog_rep_tables.m"
    MR_Integer ll_backend__prog_rep_tables__V_16_16;
#line 93 "prog_rep_tables.m"
    MR_Integer ll_backend__prog_rep_tables__V_17_17;
#line 93 "prog_rep_tables.m"
    MR_Integer ll_backend__prog_rep_tables__V_18_18;
#line 148 "prog_rep_tables.m"
    MR_String ll_backend__prog_rep_tables__NoPrefix_40;

#line 148 "prog_rep_tables.m"
    {
#line 148 "prog_rep_tables.m"
      ll_backend__prog_rep_tables__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "STATE_VARIABLE_", ll_backend__prog_rep_tables__String_5, &ll_backend__prog_rep_tables__NoPrefix_40);
    }
#line 148 "prog_rep_tables.m"
    if (ll_backend__prog_rep_tables__succeeded)
#line 149 "prog_rep_tables.m"
      {
#line 149 "prog_rep_tables.m"
        MR_Word ll_backend__prog_rep_tables__NoPrefixChars_41;
#line 151 "prog_rep_tables.m"
        MR_Word ll_backend__prog_rep_tables__BaseNameChars_42;
#line 151 "prog_rep_tables.m"
        MR_Integer ll_backend__prog_rep_tables__Num_43;
#line 203 "prog_rep_tables.m"
        MR_Word ll_backend__prog_rep_tables__TypeCtorInfo_13_68;
#line 203 "prog_rep_tables.m"
        MR_Word ll_backend__prog_rep_tables__RevString_62;
#line 203 "prog_rep_tables.m"
        MR_Integer ll_backend__prog_rep_tables__Scale_63;
#line 203 "prog_rep_tables.m"
        MR_Word ll_backend__prog_rep_tables__RevRest_64;
#line 203 "prog_rep_tables.m"
        MR_Integer ll_backend__prog_rep_tables__V_67_67;

#line 149 "prog_rep_tables.m"
        ll_backend__prog_rep_tables__KindCode_8 = (MR_Integer) 0;
#line 150 "prog_rep_tables.m"
        {
#line 150 "prog_rep_tables.m"
          mercury__string__to_char_list_2_p_0(ll_backend__prog_rep_tables__NoPrefix_40, &ll_backend__prog_rep_tables__NoPrefixChars_41);
        }
#line 2537 "ll_backend.prog_rep_tables.c"
        ll_backend__prog_rep_tables__TypeCtorInfo_13_68 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
#line 204 "prog_rep_tables.m"
        {
#line 204 "prog_rep_tables.m"
          mercury__list__reverse_2_p_0(ll_backend__prog_rep_tables__TypeCtorInfo_13_68, ll_backend__prog_rep_tables__NoPrefixChars_41, &ll_backend__prog_rep_tables__RevString_62);
        }
#line 205 "prog_rep_tables.m"
        {
#line 205 "prog_rep_tables.m"
          ll_backend__prog_rep_tables__succeeded = ll_backend__prog_rep_tables__rev_find_number_suffix_6_p_0(ll_backend__prog_rep_tables__RevString_62, (MR_Integer) 0, &ll_backend__prog_rep_tables__Num_43, (MR_Integer) 1, &ll_backend__prog_rep_tables__Scale_63, &ll_backend__prog_rep_tables__RevRest_64);
        }
#line 203 "prog_rep_tables.m"
        if (ll_backend__prog_rep_tables__succeeded)
#line 203 "prog_rep_tables.m"
          {
#line 206 "prog_rep_tables.m"
            ll_backend__prog_rep_tables__V_67_67 = (MR_Integer) 1;
#line 206 "prog_rep_tables.m"
            ll_backend__prog_rep_tables__succeeded = (ll_backend__prog_rep_tables__Scale_63 > ll_backend__prog_rep_tables__V_67_67);
#line 203 "prog_rep_tables.m"
            if (ll_backend__prog_rep_tables__succeeded)
#line 203 "prog_rep_tables.m"
              {
#line 207 "prog_rep_tables.m"
                {
#line 207 "prog_rep_tables.m"
                  mercury__list__reverse_2_p_0(ll_backend__prog_rep_tables__TypeCtorInfo_13_68, ll_backend__prog_rep_tables__RevRest_64, &ll_backend__prog_rep_tables__BaseNameChars_42);
                }
#line 207 "prog_rep_tables.m"
                ll_backend__prog_rep_tables__succeeded = MR_TRUE;
#line 203 "prog_rep_tables.m"
              }
#line 203 "prog_rep_tables.m"
          }
#line 151 "prog_rep_tables.m"
        if (ll_backend__prog_rep_tables__succeeded)
#line 152 "prog_rep_tables.m"
          {
#line 152 "prog_rep_tables.m"
            MR_String ll_backend__prog_rep_tables__BaseName_44;

#line 152 "prog_rep_tables.m"
            {
#line 152 "prog_rep_tables.m"
              mercury__string__from_char_list_2_p_0(ll_backend__prog_rep_tables__BaseNameChars_42, &ll_backend__prog_rep_tables__BaseName_44);
            }
#line 153 "prog_rep_tables.m"
            {
#line 153 "prog_rep_tables.m"
              ll_backend__prog_rep_tables__MaybeBaseName_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 153 "prog_rep_tables.m"
              MR_hl_field(MR_mktag(1), ll_backend__prog_rep_tables__MaybeBaseName_9, 0) = ((MR_Box) (ll_backend__prog_rep_tables__BaseName_44));
#line 153 "prog_rep_tables.m"
            }
#line 154 "prog_rep_tables.m"
            ll_backend__prog_rep_tables__N_10 = (ll_backend__prog_rep_tables__Num_43 + (MR_Integer) 1);
#line 152 "prog_rep_tables.m"
          }
#line 151 "prog_rep_tables.m"
        else
#line 156 "prog_rep_tables.m"
          {
#line 156 "prog_rep_tables.m"
            {
#line 156 "prog_rep_tables.m"
              ll_backend__prog_rep_tables__MaybeBaseName_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 156 "prog_rep_tables.m"
              MR_hl_field(MR_mktag(1), ll_backend__prog_rep_tables__MaybeBaseName_9, 0) = ((MR_Box) (ll_backend__prog_rep_tables__NoPrefix_40));
#line 156 "prog_rep_tables.m"
            }
#line 157 "prog_rep_tables.m"
            ll_backend__prog_rep_tables__N_10 = (MR_Integer) 0;
#line 156 "prog_rep_tables.m"
          }
#line 149 "prog_rep_tables.m"
        ll_backend__prog_rep_tables__succeeded = MR_TRUE;
#line 149 "prog_rep_tables.m"
      }
#line 148 "prog_rep_tables.m"
    else
#line 159 "prog_rep_tables.m"
      {
#line 159 "prog_rep_tables.m"
        MR_String ll_backend__prog_rep_tables__NoPrefix_57;

#line 159 "prog_rep_tables.m"
        {
#line 159 "prog_rep_tables.m"
          ll_backend__prog_rep_tables__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "TypeCtorInfo_", ll_backend__prog_rep_tables__String_5, &ll_backend__prog_rep_tables__NoPrefix_57);
        }
#line 159 "prog_rep_tables.m"
        if (ll_backend__prog_rep_tables__succeeded)
#line 160 "prog_rep_tables.m"
          {
#line 160 "prog_rep_tables.m"
            {
#line 160 "prog_rep_tables.m"
              ll_backend__prog_rep_tables__succeeded = mercury__string__to_int_2_p_0(ll_backend__prog_rep_tables__NoPrefix_57, &ll_backend__prog_rep_tables__N_10);
            }
#line 160 "prog_rep_tables.m"
            if (ll_backend__prog_rep_tables__succeeded)
#line 160 "prog_rep_tables.m"
              {
#line 161 "prog_rep_tables.m"
                ll_backend__prog_rep_tables__KindCode_8 = (MR_Integer) 1;
#line 162 "prog_rep_tables.m"
                ll_backend__prog_rep_tables__MaybeBaseName_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 162 "prog_rep_tables.m"
                ll_backend__prog_rep_tables__succeeded = MR_TRUE;
#line 160 "prog_rep_tables.m"
              }
#line 160 "prog_rep_tables.m"
          }
#line 159 "prog_rep_tables.m"
        else
#line 167 "prog_rep_tables.m"
          {
#line 167 "prog_rep_tables.m"
            MR_String ll_backend__prog_rep_tables__NoPrefix_55;

#line 167 "prog_rep_tables.m"
            {
#line 167 "prog_rep_tables.m"
              ll_backend__prog_rep_tables__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "TypeInfo_", ll_backend__prog_rep_tables__String_5, &ll_backend__prog_rep_tables__NoPrefix_55);
            }
#line 167 "prog_rep_tables.m"
            if (ll_backend__prog_rep_tables__succeeded)
#line 168 "prog_rep_tables.m"
              {
#line 168 "prog_rep_tables.m"
                {
#line 168 "prog_rep_tables.m"
                  ll_backend__prog_rep_tables__succeeded = mercury__string__to_int_2_p_0(ll_backend__prog_rep_tables__NoPrefix_55, &ll_backend__prog_rep_tables__N_10);
                }
#line 168 "prog_rep_tables.m"
                if (ll_backend__prog_rep_tables__succeeded)
#line 168 "prog_rep_tables.m"
                  {
#line 169 "prog_rep_tables.m"
                    ll_backend__prog_rep_tables__KindCode_8 = (MR_Integer) 2;
#line 170 "prog_rep_tables.m"
                    ll_backend__prog_rep_tables__MaybeBaseName_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 170 "prog_rep_tables.m"
                    ll_backend__prog_rep_tables__succeeded = MR_TRUE;
#line 168 "prog_rep_tables.m"
                  }
#line 168 "prog_rep_tables.m"
              }
#line 167 "prog_rep_tables.m"
            else
#line 185 "prog_rep_tables.m"
              {
#line 185 "prog_rep_tables.m"
                MR_String ll_backend__prog_rep_tables__NoPrefix_53;

#line 185 "prog_rep_tables.m"
                {
#line 185 "prog_rep_tables.m"
                  ll_backend__prog_rep_tables__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "PolyConst", ll_backend__prog_rep_tables__String_5, &ll_backend__prog_rep_tables__NoPrefix_53);
                }
#line 185 "prog_rep_tables.m"
                if (ll_backend__prog_rep_tables__succeeded)
#line 185 "prog_rep_tables.m"
                  {
#line 186 "prog_rep_tables.m"
                    {
#line 186 "prog_rep_tables.m"
                      ll_backend__prog_rep_tables__succeeded = mercury__string__to_int_2_p_0(ll_backend__prog_rep_tables__NoPrefix_53, &ll_backend__prog_rep_tables__N_10);
                    }
#line 185 "prog_rep_tables.m"
                    if (ll_backend__prog_rep_tables__succeeded)
#line 185 "prog_rep_tables.m"
                      {
#line 187 "prog_rep_tables.m"
                        ll_backend__prog_rep_tables__KindCode_8 = (MR_Integer) 5;
#line 188 "prog_rep_tables.m"
                        ll_backend__prog_rep_tables__MaybeBaseName_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 188 "prog_rep_tables.m"
                        ll_backend__prog_rep_tables__succeeded = MR_TRUE;
#line 185 "prog_rep_tables.m"
                      }
#line 185 "prog_rep_tables.m"
                  }
#line 185 "prog_rep_tables.m"
              }
#line 167 "prog_rep_tables.m"
          }
#line 159 "prog_rep_tables.m"
      }
#line 93 "prog_rep_tables.m"
    if (ll_backend__prog_rep_tables__succeeded)
#line 93 "prog_rep_tables.m"
      {
#line 94 "prog_rep_tables.m"
        ll_backend__prog_rep_tables__V_17_17 = (MR_Integer) 1;
#line 94 "prog_rep_tables.m"
        ll_backend__prog_rep_tables__V_18_18 = (MR_Integer) 10;
#line 94 "prog_rep_tables.m"
        ll_backend__prog_rep_tables__V_16_16 = (ll_backend__prog_rep_tables__V_17_17 << ll_backend__prog_rep_tables__V_18_18);
#line 94 "prog_rep_tables.m"
        ll_backend__prog_rep_tables__succeeded = (ll_backend__prog_rep_tables__N_10 < ll_backend__prog_rep_tables__V_16_16);
#line 93 "prog_rep_tables.m"
        if (ll_backend__prog_rep_tables__succeeded)
#line 100 "prog_rep_tables.m"
          {
#line 100 "prog_rep_tables.m"
            if ((ll_backend__prog_rep_tables__MaybeBaseName_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 101 "prog_rep_tables.m"
              {
#line 102 "prog_rep_tables.m"
                ll_backend__prog_rep_tables__Offset_13 = (MR_Integer) 0;
#line 101 "prog_rep_tables.m"
                ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_19_19 = ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_0_14;
#line 101 "prog_rep_tables.m"
                ll_backend__prog_rep_tables__succeeded = MR_TRUE;
#line 101 "prog_rep_tables.m"
              }
#line 100 "prog_rep_tables.m"
            else
#line 96 "prog_rep_tables.m"
              {
#line 96 "prog_rep_tables.m"
                MR_String ll_backend__prog_rep_tables__BaseName_11 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep_tables__MaybeBaseName_9, (MR_Integer) 0)));
#line 96 "prog_rep_tables.m"
                MR_Word ll_backend__prog_rep_tables__MaybeOffset_12;
#line 96 "prog_rep_tables.m"
                MR_Integer ll_backend__prog_rep_tables__V_20_20;
#line 96 "prog_rep_tables.m"
                MR_Integer ll_backend__prog_rep_tables__V_21_21;
#line 96 "prog_rep_tables.m"
                MR_Integer ll_backend__prog_rep_tables__V_22_22;
#line 96 "prog_rep_tables.m"
                MR_Word ll_backend__prog_rep_tables__TableMap0_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_0_14, (MR_Integer) 0)));
#line 96 "prog_rep_tables.m"
                MR_Word ll_backend__prog_rep_tables__TableList0_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_0_14, (MR_Integer) 1)));
#line 96 "prog_rep_tables.m"
                MR_Integer ll_backend__prog_rep_tables__TableOffset0_76 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_0_14, (MR_Integer) 2)));
#line 228 "prog_rep_tables.m"
                MR_Integer ll_backend__prog_rep_tables__OldOffset_77;
#line 229 "prog_rep_tables.m"
                MR_Box ll_backend__prog_rep_tables__conv0_OldOffset_77;

#line 229 "prog_rep_tables.m"
                {
#line 229 "prog_rep_tables.m"
                  ll_backend__prog_rep_tables__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ll_backend__prog_rep_tables__TableMap0_74, ((MR_Box) (ll_backend__prog_rep_tables__BaseName_11)), &ll_backend__prog_rep_tables__conv0_OldOffset_77);
                }
#line 229 "prog_rep_tables.m"
                if (ll_backend__prog_rep_tables__succeeded)
#line 229 "prog_rep_tables.m"
                  {
#line 229 "prog_rep_tables.m"
                    ll_backend__prog_rep_tables__OldOffset_77 = ((MR_Integer) ll_backend__prog_rep_tables__conv0_OldOffset_77);
#line 229 "prog_rep_tables.m"
                    ll_backend__prog_rep_tables__succeeded = MR_TRUE;
#line 229 "prog_rep_tables.m"
                  }
#line 228 "prog_rep_tables.m"
                if (ll_backend__prog_rep_tables__succeeded)
#line 231 "prog_rep_tables.m"
                  {
#line 231 "prog_rep_tables.m"
                    {
#line 231 "prog_rep_tables.m"
                      ll_backend__prog_rep_tables__MaybeOffset_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 231 "prog_rep_tables.m"
                      MR_hl_field(MR_mktag(1), ll_backend__prog_rep_tables__MaybeOffset_12, 0) = ((MR_Box) (ll_backend__prog_rep_tables__OldOffset_77));
#line 231 "prog_rep_tables.m"
                    }
#line 231 "prog_rep_tables.m"
                    ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_19_19 = ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_0_14;
#line 231 "prog_rep_tables.m"
                  }
#line 228 "prog_rep_tables.m"
                else
#line 232 "prog_rep_tables.m"
                  {
#line 232 "prog_rep_tables.m"
                    MR_Integer ll_backend__prog_rep_tables__TableOffset_79;
#line 233 "prog_rep_tables.m"
                    MR_Integer ll_backend__prog_rep_tables__Length_78;
#line 233 "prog_rep_tables.m"
                    MR_Integer ll_backend__prog_rep_tables__V_82_82;
#line 233 "prog_rep_tables.m"
                    MR_Integer ll_backend__prog_rep_tables__V_84_84;

#line 233 "prog_rep_tables.m"
                    {
#line 233 "prog_rep_tables.m"
                      ll_backend__prog_rep_tables__Length_78 = mercury__string__count_utf8_code_units_1_f_0(ll_backend__prog_rep_tables__BaseName_11);
                    }
#line 234 "prog_rep_tables.m"
                    ll_backend__prog_rep_tables__V_82_82 = (ll_backend__prog_rep_tables__TableOffset0_76 + ll_backend__prog_rep_tables__Length_78);
#line 234 "prog_rep_tables.m"
                    ll_backend__prog_rep_tables__TableOffset_79 = (ll_backend__prog_rep_tables__V_82_82 + (MR_Integer) 1);
#line 243 "prog_rep_tables.m"
                    {
#line 243 "prog_rep_tables.m"
                      ll_backend__prog_rep_tables__V_84_84 = mercury__int__f_60_60_2_f_0((MR_Integer) 1, (MR_Integer) 30);
                    }
#line 243 "prog_rep_tables.m"
                    ll_backend__prog_rep_tables__succeeded = (ll_backend__prog_rep_tables__TableOffset_79 < ll_backend__prog_rep_tables__V_84_84);
#line 232 "prog_rep_tables.m"
                    if (ll_backend__prog_rep_tables__succeeded)
#line 245 "prog_rep_tables.m"
                      {
#line 245 "prog_rep_tables.m"
                        MR_Word ll_backend__prog_rep_tables__TableMap_80;
#line 245 "prog_rep_tables.m"
                        MR_Word ll_backend__prog_rep_tables__TableList_81;

#line 245 "prog_rep_tables.m"
                        {
#line 245 "prog_rep_tables.m"
                          ll_backend__prog_rep_tables__MaybeOffset_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 245 "prog_rep_tables.m"
                          MR_hl_field(MR_mktag(1), ll_backend__prog_rep_tables__MaybeOffset_12, 0) = ((MR_Box) (ll_backend__prog_rep_tables__TableOffset0_76));
#line 245 "prog_rep_tables.m"
                        }
#line 246 "prog_rep_tables.m"
                        {
#line 246 "prog_rep_tables.m"
                          mercury__map__det_insert_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (ll_backend__prog_rep_tables__BaseName_11)), ((MR_Box) (ll_backend__prog_rep_tables__TableOffset0_76)), ll_backend__prog_rep_tables__TableMap0_74, &ll_backend__prog_rep_tables__TableMap_80);
                        }
#line 247 "prog_rep_tables.m"
                        {
#line 247 "prog_rep_tables.m"
                          ll_backend__prog_rep_tables__TableList_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 247 "prog_rep_tables.m"
                          MR_hl_field(MR_mktag(1), ll_backend__prog_rep_tables__TableList_81, 0) = ((MR_Box) (ll_backend__prog_rep_tables__BaseName_11));
#line 247 "prog_rep_tables.m"
                          MR_hl_field(MR_mktag(1), ll_backend__prog_rep_tables__TableList_81, 1) = ((MR_Box) (ll_backend__prog_rep_tables__TableList0_75));
#line 247 "prog_rep_tables.m"
                        }
#line 248 "prog_rep_tables.m"
                        {
#line 248 "prog_rep_tables.m"
                          ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 248 "prog_rep_tables.m"
                          MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_19_19, 0) = ((MR_Box) (ll_backend__prog_rep_tables__TableMap_80));
#line 248 "prog_rep_tables.m"
                          MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_19_19, 1) = ((MR_Box) (ll_backend__prog_rep_tables__TableList_81));
#line 248 "prog_rep_tables.m"
                          MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_19_19, 2) = ((MR_Box) (ll_backend__prog_rep_tables__TableOffset_79));
#line 248 "prog_rep_tables.m"
                        }
#line 245 "prog_rep_tables.m"
                      }
#line 232 "prog_rep_tables.m"
                    else
#line 250 "prog_rep_tables.m"
                      {
#line 250 "prog_rep_tables.m"
                        ll_backend__prog_rep_tables__MaybeOffset_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 250 "prog_rep_tables.m"
                        ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_19_19 = ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_0_14;
#line 250 "prog_rep_tables.m"
                      }
#line 232 "prog_rep_tables.m"
                  }
#line 98 "prog_rep_tables.m"
                ll_backend__prog_rep_tables__succeeded = ((MR_tag((MR_Word) ll_backend__prog_rep_tables__MaybeOffset_12)) == (MR_mktag((MR_Integer) 1)));
#line 98 "prog_rep_tables.m"
                if (ll_backend__prog_rep_tables__succeeded)
#line 98 "prog_rep_tables.m"
                  {
#line 98 "prog_rep_tables.m"
                    ll_backend__prog_rep_tables__Offset_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep_tables__MaybeOffset_12, (MR_Integer) 0)));
#line 99 "prog_rep_tables.m"
                    ll_backend__prog_rep_tables__V_21_21 = (MR_Integer) 1;
#line 99 "prog_rep_tables.m"
                    ll_backend__prog_rep_tables__V_22_22 = (MR_Integer) 16;
#line 99 "prog_rep_tables.m"
                    ll_backend__prog_rep_tables__V_20_20 = (ll_backend__prog_rep_tables__V_21_21 << ll_backend__prog_rep_tables__V_22_22);
#line 99 "prog_rep_tables.m"
                    ll_backend__prog_rep_tables__succeeded = (ll_backend__prog_rep_tables__Offset_13 < ll_backend__prog_rep_tables__V_20_20);
#line 98 "prog_rep_tables.m"
                  }
#line 96 "prog_rep_tables.m"
              }
#line 100 "prog_rep_tables.m"
          }
#line 93 "prog_rep_tables.m"
      }
#line 92 "prog_rep_tables.m"
    if (ll_backend__prog_rep_tables__succeeded)
#line 110 "prog_rep_tables.m"
      {
#line 110 "prog_rep_tables.m"
        MR_Integer ll_backend__prog_rep_tables__V_23_23;
#line 110 "prog_rep_tables.m"
        MR_Integer ll_backend__prog_rep_tables__V_24_24;
#line 110 "prog_rep_tables.m"
        MR_Integer ll_backend__prog_rep_tables__V_26_26;
#line 110 "prog_rep_tables.m"
        MR_Integer ll_backend__prog_rep_tables__V_28_28;
#line 110 "prog_rep_tables.m"
        MR_Integer ll_backend__prog_rep_tables__V_30_30;

#line 110 "prog_rep_tables.m"
        *ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_15 = ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_19_19;
#line 111 "prog_rep_tables.m"
        ll_backend__prog_rep_tables__V_26_26 = (ll_backend__prog_rep_tables__KindCode_8 << (MR_Integer) 1);
#line 110 "prog_rep_tables.m"
        ll_backend__prog_rep_tables__V_24_24 = ((MR_Integer) 1 | ll_backend__prog_rep_tables__V_26_26);
#line 112 "prog_rep_tables.m"
        ll_backend__prog_rep_tables__V_28_28 = (ll_backend__prog_rep_tables__N_10 << (MR_Integer) 6);
#line 111 "prog_rep_tables.m"
        ll_backend__prog_rep_tables__V_23_23 = (ll_backend__prog_rep_tables__V_24_24 | ll_backend__prog_rep_tables__V_28_28);
#line 113 "prog_rep_tables.m"
        ll_backend__prog_rep_tables__V_30_30 = (ll_backend__prog_rep_tables__Offset_13 << (MR_Integer) 16);
#line 112 "prog_rep_tables.m"
        *ll_backend__prog_rep_tables__StringCode_6 = (ll_backend__prog_rep_tables__V_23_23 | ll_backend__prog_rep_tables__V_30_30);
#line 110 "prog_rep_tables.m"
      }
#line 92 "prog_rep_tables.m"
    else
#line 115 "prog_rep_tables.m"
      {
#line 115 "prog_rep_tables.m"
        MR_Word ll_backend__prog_rep_tables__MaybeOffset_34;
#line 115 "prog_rep_tables.m"
        MR_Integer ll_backend__prog_rep_tables__Offset_35;

#line 115 "prog_rep_tables.m"
        {
#line 115 "prog_rep_tables.m"
          ll_backend__prog_rep_tables__lookup_raw_string_in_table_4_p_0(ll_backend__prog_rep_tables__String_5, &ll_backend__prog_rep_tables__MaybeOffset_34, ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_0_14, ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_15);
        }
#line 118 "prog_rep_tables.m"
        if ((ll_backend__prog_rep_tables__MaybeOffset_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 121 "prog_rep_tables.m"
          ll_backend__prog_rep_tables__Offset_35 = (MR_Integer) 1;
#line 118 "prog_rep_tables.m"
        else
#line 117 "prog_rep_tables.m"
          ll_backend__prog_rep_tables__Offset_35 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep_tables__MaybeOffset_34, (MR_Integer) 0)));
#line 123 "prog_rep_tables.m"
        *ll_backend__prog_rep_tables__StringCode_6 = (ll_backend__prog_rep_tables__Offset_35 << (MR_Integer) 1);
#line 115 "prog_rep_tables.m"
      }
#line 92 "prog_rep_tables.m"
  }
#line 31 "prog_rep_tables.m"
}

#line 29 "prog_rep_tables.m"
MR_Word MR_CALL 
ll_backend__prog_rep_tables__init_string_table_info_0_f_0(void)
#line 29 "prog_rep_tables.m"
{
#line 82 "prog_rep_tables.m"
  {
#line 82 "prog_rep_tables.m"
    MR_bool ll_backend__prog_rep_tables__succeeded;
#line 82 "prog_rep_tables.m"
    MR_Word ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_6;
#line 82 "prog_rep_tables.m"
    MR_Word ll_backend__prog_rep_tables__StringMap0_3;
#line 82 "prog_rep_tables.m"
    MR_Word ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_7_7;
#line 82 "prog_rep_tables.m"
    MR_Word ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_11_11;
#line 85 "prog_rep_tables.m"
    MR_Integer ll_backend__prog_rep_tables__V_4_4;
#line 86 "prog_rep_tables.m"
    MR_Integer ll_backend__prog_rep_tables__V_5_5;

#line 83 "prog_rep_tables.m"
    {
#line 83 "prog_rep_tables.m"
      mercury__map__init_1_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, &ll_backend__prog_rep_tables__StringMap0_3);
    }
#line 84 "prog_rep_tables.m"
    {
#line 84 "prog_rep_tables.m"
      ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 84 "prog_rep_tables.m"
      MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_7_7, 0) = ((MR_Box) (ll_backend__prog_rep_tables__StringMap0_3));
#line 84 "prog_rep_tables.m"
      MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_7_7, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 84 "prog_rep_tables.m"
      MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_7_7, 2) = ((MR_Box) ((MR_Integer) 0));
#line 84 "prog_rep_tables.m"
    }
#line 85 "prog_rep_tables.m"
    {
#line 85 "prog_rep_tables.m"
      ll_backend__prog_rep_tables__lookup_string_in_table_4_p_0((MR_String) "", &ll_backend__prog_rep_tables__V_4_4, ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_7_7, &ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_11_11);
    }
#line 86 "prog_rep_tables.m"
    {
#line 86 "prog_rep_tables.m"
      ll_backend__prog_rep_tables__lookup_string_in_table_4_p_0((MR_String) "<too many variables>", &ll_backend__prog_rep_tables__V_5_5, ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_11_11, &ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_6);
    }
#line 82 "prog_rep_tables.m"
    return ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_6;
#line 82 "prog_rep_tables.m"
  }
#line 29 "prog_rep_tables.m"
}

void mercury__ll_backend__prog_rep_tables__init(void)
{
}

void mercury__ll_backend__prog_rep_tables__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_string_table_info_0);
	MR_register_type_ctor_info(&ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_type_table_info_0);
}

void mercury__ll_backend__prog_rep_tables__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ll_backend.prog_rep_tables. */
