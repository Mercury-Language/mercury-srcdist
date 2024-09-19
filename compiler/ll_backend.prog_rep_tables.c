/*
** Automatically generated from `prog_rep_tables.m'
** by the Mercury compiler,
** version rotd-2024-09-19
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


// :- module ll_backend.prog_rep_tables.
// :- implementation.

/*
INIT mercury__ll_backend__prog_rep_tables__init
ENDINIT
*/

#include "ll_backend.prog_rep_tables.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "int.mih"
#include "integer.mih"
#include "list.mih"
#include "ll_backend.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"
#include "varset.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"




static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__prog_rep_tables__list__pti_list_1__plain_builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__prog_rep_tables__cord__pti_cord_1__plain_builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct2 ll_backend__prog_rep_tables__tree234__ti_tree234_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__prog_rep_tables__list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_PseudoTypeInfo ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__field_types_string_table_info_0_0[3];

static const MR_DuFunctorDesc ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__du_functor_desc_string_table_info_0_0;

static const MR_DuFunctorDescPtr ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__du_stag_ordered_string_table_info_0_0[1];

static const MR_DuPtagLayout ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__du_ptag_ordered_string_table_info_0[1];

static const MR_DuFunctorDescPtr ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__du_name_ordered_string_table_info_0[1];

static const MR_Integer ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__functor_number_map_string_table_info_0[1];

static const MR_FA_TypeInfo_Struct2 ll_backend__prog_rep_tables__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_mer_type_0builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__prog_rep_tables__cord__ti_cord_1builtin__type_ctor_info_int_0;

static const MR_PseudoTypeInfo ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__field_types_type_table_info_0_0[3];

static const MR_DuFunctorDesc ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__du_functor_desc_type_table_info_0_0;

static const MR_DuFunctorDescPtr ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__du_stag_ordered_type_table_info_0_0[1];

static const MR_DuPtagLayout ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__du_ptag_ordered_type_table_info_0[1];

static const MR_DuFunctorDescPtr ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__du_name_ordered_type_table_info_0[1];

static const MR_Integer ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__functor_number_map_type_table_info_0[1];

static MR_Word MR_CALL 
ll_backend__prog_rep_tables__IntroducedFrom__func__encode_arg_type_codes__421__1_1_f_0(
  MR_Word HeadVar__1_18);

static void MR_CALL 
ll_backend__prog_rep_tables__add_type_to_table_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
ll_backend__prog_rep_tables__add_type_to_table_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
ll_backend__prog_rep_tables__add_type_to_table_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
ll_backend__prog_rep_tables__add_type_to_table_6_p_0(
  MR_Word Type_7,
  MR_Integer * TypeCode_8,
  MR_Word STATE_VARIABLE_StringTable_0_45,
  MR_Word * STATE_VARIABLE_StringTable_46,
  MR_Word STATE_VARIABLE_TypeTable_0_47,
  MR_Word * STATE_VARIABLE_TypeTable_48);

static MR_Box MR_CALL 
ll_backend__prog_rep_tables__encode_arg_type_codes_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__prog_rep_tables__encode_arg_type_codes_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ll_backend__prog_rep_tables__encode_arg_type_codes_2_p_0(
  MR_Word ArgTypeCodes_3,
  MR_Word * ArgTypeBytesCord_4);

static MR_bool MR_CALL 
ll_backend__prog_rep_tables__rev_find_number_suffix_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer STATE_VARIABLE_Num_0_13,
  MR_Integer * STATE_VARIABLE_Num_14,
  MR_Integer STATE_VARIABLE_Scale_0_15,
  MR_Integer * STATE_VARIABLE_Scale_16,
  MR_Word * RevRest_11);

static MR_bool MR_CALL 
ll_backend__prog_rep_tables____Unify____string_table_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__prog_rep_tables____Compare____string_table_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__prog_rep_tables____Unify____type_table_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__prog_rep_tables____Compare____type_table_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box ll_backend__prog_rep_tables_scalar_common_1[3][2];

static /* final */ const MR_Box ll_backend__prog_rep_tables_scalar_common_2[7][3];

static /* final */ const MR_Box ll_backend__prog_rep_tables_scalar_common_3[2][5];

static /* final */ const MR_Box ll_backend__prog_rep_tables_scalar_common_5[1][9];


struct ll_backend__prog_rep_tables__vector_common_type_4_0_s {
  const MR_Integer ll_backend__prog_rep_tables__vector_common_type_4_0__vct_4_f_0;
};

static /* final */ const struct ll_backend__prog_rep_tables__vector_common_type_4_0_s ll_backend__prog_rep_tables_vector_common_4[10];



static /* final */ const MR_Box ll_backend__prog_rep_tables_scalar_common_1[3][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box ll_backend__prog_rep_tables_scalar_common_2[7][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&ll_backend__prog_rep_tables_scalar_common_3[0])),
    ((MR_Box) (ll_backend__prog_rep_tables__encode_arg_type_codes_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&ll_backend__prog_rep_tables_scalar_common_3[1])),
    ((MR_Box) (ll_backend__prog_rep_tables__encode_arg_type_codes_2_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&ll_backend__prog_rep_tables_scalar_common_5[0])),
    ((MR_Box) (ll_backend__prog_rep_tables__add_type_to_table_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&ll_backend__prog_rep_tables_scalar_common_5[0])),
    ((MR_Box) (ll_backend__prog_rep_tables__add_type_to_table_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&ll_backend__prog_rep_tables_scalar_common_5[0])),
    ((MR_Box) (ll_backend__prog_rep_tables__add_type_to_table_6_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__prog_rep_tables_scalar_common_3[2][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__prog_rep_tables__list__pti_list_1__plain_builtin__type_ctor_info_int_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__prog_rep_tables__list__pti_list_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__prog_rep_tables__cord__pti_cord_1__plain_builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box ll_backend__prog_rep_tables_scalar_common_5[1][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_string_table_info_0)),
    ((MR_Box) (&ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_string_table_info_0)),
    ((MR_Box) (&ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_type_table_info_0)),
    ((MR_Box) (&ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_type_table_info_0))
  },
};


static /* final */ const struct ll_backend__prog_rep_tables__vector_common_type_4_0_s ll_backend__prog_rep_tables_vector_common_4[10] = {
  /* row   0 */   { (MR_Integer) 5 },
  /* row   1 */   { (MR_Integer) 6 },
  /* row   2 */   { (MR_Integer) 14 },
  /* row   3 */   { (MR_Integer) 15 },
  /* row   4 */   { (MR_Integer) 16 },
  /* row   5 */   { (MR_Integer) 17 },
  /* row   6 */   { (MR_Integer) 18 },
  /* row   7 */   { (MR_Integer) 19 },
  /* row   8 */   { (MR_Integer) 20 },
  /* row   9 */   { (MR_Integer) 21 },
};


#include "array.mh"
#include "mdbcomp.rtti_access.mh"


static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__prog_rep_tables__list__pti_list_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__prog_rep_tables__cord__pti_cord_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) }
};

static const MR_FA_TypeInfo_Struct2 ll_backend__prog_rep_tables__tree234__ti_tree234_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__prog_rep_tables__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_PseudoTypeInfo ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__field_types_string_table_info_0_0[3] = {
  (MR_PseudoTypeInfo) (&ll_backend__prog_rep_tables__tree234__ti_tree234_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&ll_backend__prog_rep_tables__list__ti_list_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__du_functor_desc_string_table_info_0_0 = {
  (MR_String) "string_table_info",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__field_types_string_table_info_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__du_stag_ordered_string_table_info_0_0[1] = { &ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__du_functor_desc_string_table_info_0_0 };

static const MR_DuPtagLayout ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__du_ptag_ordered_string_table_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__du_stag_ordered_string_table_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__du_name_ordered_string_table_info_0[1] = { &ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__du_functor_desc_string_table_info_0_0 };

static const MR_Integer ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__functor_number_map_string_table_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_string_table_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__prog_rep_tables____Unify____string_table_info_0_0_10001)),
  ((MR_Box) (ll_backend__prog_rep_tables____Compare____string_table_info_0_0_10001)),
  (MR_String) "ll_backend.prog_rep_tables",
  (MR_String) "string_table_info",
  { ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__du_name_ordered_string_table_info_0 },
  { ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__du_ptag_ordered_string_table_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__functor_number_map_string_table_info_0,

};

static const MR_FA_TypeInfo_Struct2 ll_backend__prog_rep_tables__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_mer_type_0builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__prog_rep_tables__cord__ti_cord_1builtin__type_ctor_info_int_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) }
};

static const MR_PseudoTypeInfo ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__field_types_type_table_info_0_0[3] = {
  (MR_PseudoTypeInfo) (&ll_backend__prog_rep_tables__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_mer_type_0builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&ll_backend__prog_rep_tables__cord__ti_cord_1builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__du_functor_desc_type_table_info_0_0 = {
  (MR_String) "type_table_info",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__field_types_type_table_info_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__du_stag_ordered_type_table_info_0_0[1] = { &ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__du_functor_desc_type_table_info_0_0 };

static const MR_DuPtagLayout ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__du_ptag_ordered_type_table_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__du_stag_ordered_type_table_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__du_name_ordered_type_table_info_0[1] = { &ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__du_functor_desc_type_table_info_0_0 };

static const MR_Integer ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__functor_number_map_type_table_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_type_table_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__prog_rep_tables____Unify____type_table_info_0_0_10001)),
  ((MR_Box) (ll_backend__prog_rep_tables____Compare____type_table_info_0_0_10001)),
  (MR_String) "ll_backend.prog_rep_tables",
  (MR_String) "type_table_info",
  { ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__du_name_ordered_type_table_info_0 },
  { ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__du_ptag_ordered_type_table_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__functor_number_map_type_table_info_0,

};

static MR_Word MR_CALL 
ll_backend__prog_rep_tables__IntroducedFrom__func__encode_arg_type_codes__421__1_1_f_0(
  MR_Word HeadVar__1_18)
{
  MR_Word HeadVar__2_19;

  HeadVar__2_19 = mercury__cord__from_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), HeadVar__1_18);
  return HeadVar__2_19;
}

void MR_CALL 
ll_backend__prog_rep_tables____Compare____type_table_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_12 == CastY_13);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Integer ArgX3_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Integer ArgY3_11 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__prog_rep_tables_scalar_common_2[1]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__prog_rep_tables_scalar_common_1[1]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        succeeded = (ArgX3_10 < ArgY3_11);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 1;
        else
        {
          succeeded = (ArgX3_10 > ArgY3_11);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 2;
          else
            *HeadVar__1_1 = (MR_Integer) 0;
        }
      }
    }
  }
}

MR_bool MR_CALL 
ll_backend__prog_rep_tables____Unify____type_table_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_12_12;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Integer ArgY3_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__prog_rep_tables_scalar_common_2[1]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_12_12 = (MR_Word) (&ll_backend__prog_rep_tables_scalar_common_1[1]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
        succeeded = (ArgX3_7 == ArgY3_8);
    }
  }
  return succeeded;
}

void MR_CALL 
ll_backend__prog_rep_tables____Compare____string_table_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_12 == CastY_13);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Integer ArgX3_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Integer ArgY3_11 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__prog_rep_tables_scalar_common_2[0]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__prog_rep_tables_scalar_common_1[2]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        succeeded = (ArgX3_10 < ArgY3_11);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 1;
        else
        {
          succeeded = (ArgX3_10 > ArgY3_11);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 2;
          else
            *HeadVar__1_1 = (MR_Integer) 0;
        }
      }
    }
  }
}

MR_bool MR_CALL 
ll_backend__prog_rep_tables____Unify____string_table_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_12_12;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Integer ArgY3_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__prog_rep_tables_scalar_common_2[0]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_12_12 = (MR_Word) (&ll_backend__prog_rep_tables_scalar_common_1[2]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
        succeeded = (ArgX3_7 == ArgY3_8);
    }
  }
  return succeeded;
}

void MR_CALL 
ll_backend__prog_rep_tables__get_type_table_contents_3_p_0(
  MR_Word TypeTable_4,
  MR_Integer * NumTypes_5,
  MR_Word * TypeBytes_6)
{
  MR_Word TypeBytesCord_8 = ((MR_Word) ((MR_hl_field(0, TypeTable_4, (MR_Integer) 1))));

  *NumTypes_5 = ((MR_Integer) ((MR_hl_field(0, TypeTable_4, (MR_Integer) 2))));
  *TypeBytes_6 = mercury__cord__list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TypeBytesCord_8);
}

void MR_CALL 
ll_backend__prog_rep_tables__lookup_type_in_table_6_p_0(
  MR_Word Type_7,
  MR_Integer * TypeCode_8,
  MR_Word STATE_VARIABLE_StringTable_0_15,
  MR_Word * STATE_VARIABLE_StringTable_16,
  MR_Word STATE_VARIABLE_TypeTable_0_17,
  MR_Word * STATE_VARIABLE_TypeTable_18)
{
  MR_bool succeeded;
  MR_Word TypeMap0_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TypeTable_0_17, (MR_Integer) 0))));
  MR_Integer TypeCodePrime_14;
  MR_Box conv0_TypeCodePrime_14;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TypeMap0_11, ((MR_Box) (Type_7)), &conv0_TypeCodePrime_14);
  if (succeeded)
  {
    TypeCodePrime_14 = ((MR_Integer) (conv0_TypeCodePrime_14));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    *TypeCode_8 = TypeCodePrime_14;
    *STATE_VARIABLE_TypeTable_18 = STATE_VARIABLE_TypeTable_0_17;
    *STATE_VARIABLE_StringTable_16 = STATE_VARIABLE_StringTable_0_15;
  }
  else
    ll_backend__prog_rep_tables__add_type_to_table_6_p_0(Type_7, TypeCode_8, STATE_VARIABLE_StringTable_0_15, STATE_VARIABLE_StringTable_16, STATE_VARIABLE_TypeTable_0_17, STATE_VARIABLE_TypeTable_18);
}

static void MR_CALL 
ll_backend__prog_rep_tables__add_type_to_table_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Integer conv12_TypeCode_8;
  MR_Word conv11_STATE_VARIABLE_StringTable_16;
  MR_Word conv10_STATE_VARIABLE_TypeTable_18;

  ll_backend__prog_rep_tables__lookup_type_in_table_6_p_0(((MR_Word) (wrapper_arg_1)), &conv12_TypeCode_8, ((MR_Word) (wrapper_arg_3)), &conv11_STATE_VARIABLE_StringTable_16, ((MR_Word) (wrapper_arg_5)), &conv10_STATE_VARIABLE_TypeTable_18);
  *wrapper_arg_2 = ((MR_Box) (conv12_TypeCode_8));
  *wrapper_arg_4 = ((MR_Box) (conv11_STATE_VARIABLE_StringTable_16));
  *wrapper_arg_6 = ((MR_Box) (conv10_STATE_VARIABLE_TypeTable_18));
}

static void MR_CALL 
ll_backend__prog_rep_tables__add_type_to_table_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Integer conv7_TypeCode_8;
  MR_Word conv6_STATE_VARIABLE_StringTable_16;
  MR_Word conv5_STATE_VARIABLE_TypeTable_18;

  ll_backend__prog_rep_tables__lookup_type_in_table_6_p_0(((MR_Word) (wrapper_arg_1)), &conv7_TypeCode_8, ((MR_Word) (wrapper_arg_3)), &conv6_STATE_VARIABLE_StringTable_16, ((MR_Word) (wrapper_arg_5)), &conv5_STATE_VARIABLE_TypeTable_18);
  *wrapper_arg_2 = ((MR_Box) (conv7_TypeCode_8));
  *wrapper_arg_4 = ((MR_Box) (conv6_STATE_VARIABLE_StringTable_16));
  *wrapper_arg_6 = ((MR_Box) (conv5_STATE_VARIABLE_TypeTable_18));
}

static void MR_CALL 
ll_backend__prog_rep_tables__add_type_to_table_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Integer conv2_TypeCode_8;
  MR_Word conv1_STATE_VARIABLE_StringTable_16;
  MR_Word conv0_STATE_VARIABLE_TypeTable_18;

  ll_backend__prog_rep_tables__lookup_type_in_table_6_p_0(((MR_Word) (wrapper_arg_1)), &conv2_TypeCode_8, ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_StringTable_16, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_TypeTable_18);
  *wrapper_arg_2 = ((MR_Box) (conv2_TypeCode_8));
  *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_StringTable_16));
  *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_TypeTable_18));
}

static void MR_CALL 
ll_backend__prog_rep_tables__add_type_to_table_6_p_0(
  MR_Word Type_7,
  MR_Integer * TypeCode_8,
  MR_Word STATE_VARIABLE_StringTable_0_45,
  MR_Word * STATE_VARIABLE_StringTable_46,
  MR_Word STATE_VARIABLE_TypeTable_0_47,
  MR_Word * STATE_VARIABLE_TypeTable_48)
{
  MR_Word TypeBytesCord_28;
  MR_Word TypeMap0_39;
  MR_Word TypeTableCord0_40;
  MR_Integer NextTypeNum_42;
  MR_Word TypeMap_43;
  MR_Word TypeTableCord_44;
  MR_Word STATE_VARIABLE_TypeTable_51_51;

  switch (MR_tag((MR_Word) Type_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word TVar_36 = ((MR_Word) ((MR_hl_field(0, Type_7, (MR_Integer) 0))));
        MR_Integer TVarNum_37;
        MR_Word TVarNumBytes_38;
        MR_Word Var_98;
        MR_Word Var_99;

        mercury__term__var_to_int_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TVar_36, &TVarNum_37);
        mdbcomp__rtti_access__encode_num_det_2_p_0(TVarNum_37, &TVarNumBytes_38);
        Var_98 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) ((MR_Integer) 13)));
        Var_99 = mercury__cord__from_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TVarNumBytes_38);
        TypeBytesCord_28 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_98, Var_99);
        *STATE_VARIABLE_StringTable_46 = STATE_VARIABLE_StringTable_0_45;
        STATE_VARIABLE_TypeTable_51_51 = STATE_VARIABLE_TypeTable_0_47;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word TypeCtorSymName_11 = ((MR_Word) ((MR_hl_field(1, Type_7, (MR_Integer) 0))));
        MR_Word ArgTypes_12 = ((MR_Word) ((MR_hl_field(1, Type_7, (MR_Integer) 1))));
        MR_Word ArgTypeCodes_14;
        MR_String TypeCtorSymNameStr_15;
        MR_Integer TypeCtorSymNameCode_16;
        MR_Word TypeCtorSymNameBytes_17;
        MR_Integer Selector_18;
        MR_Word ArgTypeBytesCord_19;
        MR_Word STATE_VARIABLE_StringTable_50_50;
        MR_Word Var_74;
        MR_Word Var_75;
        MR_Box conv4_STATE_VARIABLE_StringTable_50_50;
        MR_Box conv3_STATE_VARIABLE_TypeTable_51_51;

        mercury__list__map_foldl2_7_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_string_table_info_0), (MR_Word) (&ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_type_table_info_0), (MR_Word) (&ll_backend__prog_rep_tables_scalar_common_2[4]), ArgTypes_12, &ArgTypeCodes_14, ((MR_Box) (STATE_VARIABLE_StringTable_0_45)), &conv4_STATE_VARIABLE_StringTable_50_50, ((MR_Box) (STATE_VARIABLE_TypeTable_0_47)), &conv3_STATE_VARIABLE_TypeTable_51_51);
        STATE_VARIABLE_StringTable_50_50 = ((MR_Word) (conv4_STATE_VARIABLE_StringTable_50_50));
        STATE_VARIABLE_TypeTable_51_51 = ((MR_Word) (conv3_STATE_VARIABLE_TypeTable_51_51));
        TypeCtorSymNameStr_15 = mdbcomp__sym_name__sym_name_to_string_1_f_0(TypeCtorSymName_11);
        ll_backend__prog_rep_tables__lookup_string_in_table_4_p_0(TypeCtorSymNameStr_15, &TypeCtorSymNameCode_16, STATE_VARIABLE_StringTable_50_50, STATE_VARIABLE_StringTable_46);
        mdbcomp__rtti_access__encode_int32_det_2_p_0(TypeCtorSymNameCode_16, &TypeCtorSymNameBytes_17);
        if ((ArgTypeCodes_14 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          Selector_18 = (MR_Integer) 0;
          ArgTypeBytesCord_19 = mercury__cord__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0));
        }
        else
        {
          MR_Word Var_159 = ((MR_Word) ((MR_hl_field(1, ArgTypeCodes_14, (MR_Integer) 1))));
          MR_Integer Var_160 = ((MR_Integer) ((MR_hl_field(1, ArgTypeCodes_14, (MR_Integer) 0))));

          if ((Var_159 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word Var_54;

            Selector_18 = (MR_Integer) 1;
            Var_54 = mdbcomp__rtti_access__encode_num_func_1_f_0(Var_160);
            ArgTypeBytesCord_19 = mercury__cord__from_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_54);
          }
          else
          {
            MR_Word Var_161 = ((MR_Word) ((MR_hl_field(1, Var_159, (MR_Integer) 1))));
            MR_Integer Var_162 = ((MR_Integer) ((MR_hl_field(1, Var_159, (MR_Integer) 0))));

            if ((Var_161 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word Var_57;
              MR_Word Var_58;
              MR_Word Var_59;
              MR_Word Var_60;

              Selector_18 = (MR_Integer) 2;
              Var_58 = mdbcomp__rtti_access__encode_num_func_1_f_0(Var_160);
              Var_57 = mercury__cord__from_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_58);
              Var_60 = mdbcomp__rtti_access__encode_num_func_1_f_0(Var_162);
              Var_59 = mercury__cord__from_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_60);
              ArgTypeBytesCord_19 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_57, Var_59);
            }
            else
            {
              MR_Word Var_163 = ((MR_Word) ((MR_hl_field(1, Var_161, (MR_Integer) 1))));
              MR_Integer Var_164 = ((MR_Integer) ((MR_hl_field(1, Var_161, (MR_Integer) 0))));

              if ((Var_163 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word Var_64;
                MR_Word Var_65;
                MR_Word Var_66;
                MR_Word Var_67;
                MR_Word Var_68;
                MR_Word Var_69;
                MR_Word Var_70;

                Selector_18 = (MR_Integer) 3;
                Var_65 = mdbcomp__rtti_access__encode_num_func_1_f_0(Var_160);
                Var_64 = mercury__cord__from_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_65);
                Var_68 = mdbcomp__rtti_access__encode_num_func_1_f_0(Var_162);
                Var_67 = mercury__cord__from_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_68);
                Var_70 = mdbcomp__rtti_access__encode_num_func_1_f_0(Var_164);
                Var_69 = mercury__cord__from_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_70);
                Var_66 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_67, Var_69);
                ArgTypeBytesCord_19 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_64, Var_66);
              }
              else
              {
                Selector_18 = (MR_Integer) 4;
                ll_backend__prog_rep_tables__encode_arg_type_codes_2_p_0(ArgTypeCodes_14, &ArgTypeBytesCord_19);
              }
            }
          }
        }
        {
          Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_75, 0) = ((MR_Box) (Selector_18));
          MR_hl_field(1, Var_75, 1) = ((MR_Box) (TypeCtorSymNameBytes_17));
        }
        Var_74 = mercury__cord__from_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_75);
        TypeBytesCord_28 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_74, ArgTypeBytesCord_19);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word BuiltinType_29 = ((MR_Word) ((MR_hl_field(2, Type_7, (MR_Integer) 0))));
        MR_Integer Selector_105;

        switch (MR_tag((MR_Word) BuiltinType_29)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(BuiltinType_29)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                Selector_105 = (MR_Integer) 7;
                break;
              case (MR_Integer) 1:
                Selector_105 = (MR_Integer) 8;
                break;
              case (MR_Integer) 2:
                Selector_105 = (MR_Integer) 9;
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_158 = ((MR_Unsigned) ((MR_hl_field(1, BuiltinType_29, (MR_Integer) 0))) & (MR_Integer) 15);

              Selector_105 = ((&ll_backend__prog_rep_tables_vector_common_4[0 + Var_158]))->ll_backend__prog_rep_tables__vector_common_type_4_0__vct_4_f_0;
            }
            break;
        }
        TypeBytesCord_28 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (Selector_105)));
        *STATE_VARIABLE_StringTable_46 = STATE_VARIABLE_StringTable_0_45;
        STATE_VARIABLE_TypeTable_51_51 = STATE_VARIABLE_TypeTable_0_47;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Type_7, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_89;
            MR_Word ArgTypes_107 = ((MR_Word) ((MR_hl_field(3, Type_7, (MR_Integer) 1))));
            MR_Word ArgTypeCodes_109;
            MR_Word ArgTypeBytesCord_111;
            MR_Box conv14_STATE_VARIABLE_StringTable_46;
            MR_Box conv13_STATE_VARIABLE_TypeTable_51_51;

            mercury__list__map_foldl2_7_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_string_table_info_0), (MR_Word) (&ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_type_table_info_0), (MR_Word) (&ll_backend__prog_rep_tables_scalar_common_2[6]), ArgTypes_107, &ArgTypeCodes_109, ((MR_Box) (STATE_VARIABLE_StringTable_0_45)), &conv14_STATE_VARIABLE_StringTable_46, ((MR_Box) (STATE_VARIABLE_TypeTable_0_47)), &conv13_STATE_VARIABLE_TypeTable_51_51);
            *STATE_VARIABLE_StringTable_46 = ((MR_Word) (conv14_STATE_VARIABLE_StringTable_46));
            STATE_VARIABLE_TypeTable_51_51 = ((MR_Word) (conv13_STATE_VARIABLE_TypeTable_51_51));
            ll_backend__prog_rep_tables__encode_arg_type_codes_2_p_0(ArgTypeCodes_109, &ArgTypeBytesCord_111);
            Var_89 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) ((MR_Integer) 10)));
            TypeBytesCord_28 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_89, ArgTypeBytesCord_111);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word PorF_30 = ((MR_Unsigned) ((MR_hl_field(3, Type_7, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word Var_93;
            MR_Word ArgTypes_112 = ((MR_Word) ((MR_hl_field(3, Type_7, (MR_Integer) 2))));
            MR_Word ArgTypeCodes_113;
            MR_Integer Selector_114;
            MR_Word ArgTypeBytesCord_115;
            MR_Box conv9_STATE_VARIABLE_StringTable_46;
            MR_Box conv8_STATE_VARIABLE_TypeTable_51_51;

            mercury__list__map_foldl2_7_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_string_table_info_0), (MR_Word) (&ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_type_table_info_0), (MR_Word) (&ll_backend__prog_rep_tables_scalar_common_2[5]), ArgTypes_112, &ArgTypeCodes_113, ((MR_Box) (STATE_VARIABLE_StringTable_0_45)), &conv9_STATE_VARIABLE_StringTable_46, ((MR_Box) (STATE_VARIABLE_TypeTable_0_47)), &conv8_STATE_VARIABLE_TypeTable_51_51);
            *STATE_VARIABLE_StringTable_46 = ((MR_Word) (conv9_STATE_VARIABLE_StringTable_46));
            STATE_VARIABLE_TypeTable_51_51 = ((MR_Word) (conv8_STATE_VARIABLE_TypeTable_51_51));
            ll_backend__prog_rep_tables__encode_arg_type_codes_2_p_0(ArgTypeCodes_113, &ArgTypeBytesCord_115);
            switch (PorF_30) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                Selector_114 = (MR_Integer) 12;
                break;
              case (MR_Integer) 0:
                Selector_114 = (MR_Integer) 11;
                break;
            }
            Var_93 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (Selector_114)));
            TypeBytesCord_28 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_93, ArgTypeBytesCord_115);
          }
          break;
        case (MR_Integer) 2:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.prog_rep_tables.add_type_to_table\'/6", (MR_String) "apply_n_type");
            return;
          }
          break;
        case (MR_Integer) 3:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.prog_rep_tables.add_type_to_table\'/6", (MR_String) "kinded_type");
            return;
          }
          break;
      }
      break;
  }
  TypeMap0_39 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TypeTable_51_51, (MR_Integer) 0))));
  TypeTableCord0_40 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TypeTable_51_51, (MR_Integer) 1))));
  *TypeCode_8 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_TypeTable_51_51, (MR_Integer) 2))));
  NextTypeNum_42 = (MR_Integer) ((MR_Unsigned) *TypeCode_8 + (MR_Unsigned) 1);
  mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (Type_7)), ((MR_Box) (*TypeCode_8)), TypeMap0_39, &TypeMap_43);
  TypeTableCord_44 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TypeTableCord0_40, TypeBytesCord_28);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_TypeTable_48 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (TypeMap_43));
    MR_hl_field(0, base, 1) = ((MR_Box) (TypeTableCord_44));
    MR_hl_field(0, base, 2) = ((MR_Box) (NextTypeNum_42));
  }
}

static MR_Box MR_CALL 
ll_backend__prog_rep_tables__encode_arg_type_codes_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_19;

  conv1_HeadVar__2_19 = ll_backend__prog_rep_tables__IntroducedFrom__func__encode_arg_type_codes__421__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_19));
  return wrapper_arg_2;
}

static void MR_CALL 
ll_backend__prog_rep_tables__encode_arg_type_codes_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  mdbcomp__rtti_access__encode_num_det_2_p_0(((MR_Integer) (wrapper_arg_1)), &conv0_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
}

static void MR_CALL 
ll_backend__prog_rep_tables__encode_arg_type_codes_2_p_0(
  MR_Word ArgTypeCodes_3,
  MR_Word * ArgTypeBytesCord_4)
{
  MR_Word ArgTypeByteLists_5;
  MR_Word ArgTypeByteCords_6;
  MR_Word ArgTypeBytesCord0_7;
  MR_Integer NumArgTypeCodes_8;
  MR_Word Var_11;
  MR_Word Var_12;

  mercury__list__map_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ll_backend__prog_rep_tables_scalar_common_1[0]), (MR_Word) (&ll_backend__prog_rep_tables_scalar_common_2[2]), ArgTypeCodes_3, &ArgTypeByteLists_5);
  ArgTypeByteCords_6 = mercury__list__map_2_f_0((MR_Word) (&ll_backend__prog_rep_tables_scalar_common_1[0]), (MR_Word) (&ll_backend__prog_rep_tables_scalar_common_1[1]), (MR_Word) (&ll_backend__prog_rep_tables_scalar_common_2[3]), ArgTypeByteLists_5);
  ArgTypeBytesCord0_7 = mercury__cord__cord_list_to_cord_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ArgTypeByteCords_6);
  mercury__list__length_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ArgTypeCodes_3, &NumArgTypeCodes_8);
  Var_12 = mdbcomp__rtti_access__encode_num_func_1_f_0(NumArgTypeCodes_8);
  Var_11 = mercury__cord__from_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_12);
  *ArgTypeBytesCord_4 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_11, ArgTypeBytesCord0_7);
}

MR_Word MR_CALL 
ll_backend__prog_rep_tables__init_type_table_info_0_f_0(void)
{
  MR_Word HeadVar__1_1;
  MR_Word Var_2;
  MR_Word Var_3;

  Var_2 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0));
  Var_3 = mercury__cord__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0));
  {
    HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__1_1, 0) = ((MR_Box) (Var_2));
    MR_hl_field(0, HeadVar__1_1, 1) = ((MR_Box) (Var_3));
    MR_hl_field(0, HeadVar__1_1, 2) = ((MR_Box) ((MR_Integer) 0));
  }
  return HeadVar__1_1;
}

void MR_CALL 
ll_backend__prog_rep_tables__get_string_table_contents_3_p_0(
  MR_Word StringTable_4,
  MR_Word * Strings_5,
  MR_Integer * StringTableSize_6)
{
  MR_Word RevStrings_8 = ((MR_Word) ((MR_hl_field(0, StringTable_4, (MR_Integer) 1))));

  *StringTableSize_6 = ((MR_Integer) ((MR_hl_field(0, StringTable_4, (MR_Integer) 2))));
  mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), RevStrings_8, Strings_5);
}

MR_Word MR_CALL 
ll_backend__prog_rep_tables__init_string_table_info_0_f_0(void)
{
  MR_Word STATE_VARIABLE_StringTable_6;
  MR_Word StringMap0_3;
  MR_Word STATE_VARIABLE_StringTable_7_7;
  MR_Word STATE_VARIABLE_StringTable_11_11;
  MR_Integer Var_4;
  MR_Integer Var_5;

  mercury__map__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), &StringMap0_3);
  {
    STATE_VARIABLE_StringTable_7_7 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_StringTable_7_7, 0) = ((MR_Box) (StringMap0_3));
    MR_hl_field(0, STATE_VARIABLE_StringTable_7_7, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, STATE_VARIABLE_StringTable_7_7, 2) = ((MR_Box) ((MR_Integer) 0));
  }
  ll_backend__prog_rep_tables__lookup_string_in_table_4_p_0((MR_String) "", &Var_4, STATE_VARIABLE_StringTable_7_7, &STATE_VARIABLE_StringTable_11_11);
  ll_backend__prog_rep_tables__lookup_string_in_table_4_p_0((MR_String) "<too many variables>", &Var_5, STATE_VARIABLE_StringTable_11_11, &STATE_VARIABLE_StringTable_6);
  return STATE_VARIABLE_StringTable_6;
}

void MR_CALL 
ll_backend__prog_rep_tables__lookup_string_in_table_4_p_0(
  MR_String String_5,
  MR_Integer * StringCode_6,
  MR_Word STATE_VARIABLE_StringTable_0_14,
  MR_Word * STATE_VARIABLE_StringTable_15)
{
  MR_bool succeeded;
  MR_Integer KindCode_8;
  MR_Integer N_10;
  MR_Integer Offset_13;
  MR_Word STATE_VARIABLE_StringTable_19_19;
  MR_Word MaybeBaseName_9;
  MR_Integer Var_16;
  MR_Integer Var_17;
  MR_Integer Var_18;
  MR_String NoPrefix_36;

  succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "STATE_VARIABLE_", String_5, &NoPrefix_36);
  if (succeeded)
  {
    MR_Word NoPrefixChars_37;
    MR_Word BaseNameChars_38;
    MR_Integer Num_39;
    MR_Word RevString_52;
    MR_Integer Scale_53;
    MR_Word RevRest_54;
    MR_Integer Var_57;

    KindCode_8 = (MR_Integer) 0;
    mercury__string__to_char_list_2_p_0(NoPrefix_36, &NoPrefixChars_37);
    mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), NoPrefixChars_37, &RevString_52);
    succeeded = ll_backend__prog_rep_tables__rev_find_number_suffix_6_p_0(RevString_52, (MR_Integer) 0, &Num_39, (MR_Integer) 1, &Scale_53, &RevRest_54);
    if (succeeded)
    {
      Var_57 = (MR_Integer) 1;
      succeeded = (Scale_53 > Var_57);
      if (succeeded)
      {
        mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), RevRest_54, &BaseNameChars_38);
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
    {
      MR_String BaseName_40;

      mercury__string__from_char_list_2_p_0(BaseNameChars_38, &BaseName_40);
      {
        MaybeBaseName_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeBaseName_9, 0) = ((MR_Box) (BaseName_40));
      }
      N_10 = (MR_Integer) ((MR_Unsigned) Num_39 + (MR_Unsigned) 1);
    }
    else
    {
      {
        MaybeBaseName_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeBaseName_9, 0) = ((MR_Box) (NoPrefix_36));
      }
      N_10 = (MR_Integer) 0;
    }
    succeeded = MR_TRUE;
  }
  else
  {
    MR_String NoPrefix_51;

    succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "TypeCtorInfo_", String_5, &NoPrefix_51);
    if (succeeded)
    {
      succeeded = mercury__string__to_int_2_p_0(NoPrefix_51, &N_10);
      if (succeeded)
      {
        KindCode_8 = (MR_Integer) 1;
        MaybeBaseName_9 = (MR_Word) ((MR_Unsigned) 0U);
        succeeded = MR_TRUE;
      }
    }
    else
    {
      MR_String NoPrefix_50;

      succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "TypeInfo_", String_5, &NoPrefix_50);
      if (succeeded)
      {
        succeeded = mercury__string__to_int_2_p_0(NoPrefix_50, &N_10);
        if (succeeded)
        {
          KindCode_8 = (MR_Integer) 2;
          MaybeBaseName_9 = (MR_Word) ((MR_Unsigned) 0U);
          succeeded = MR_TRUE;
        }
      }
      else
      {
        MR_String NoPrefix_49;

        succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "PolyConst", String_5, &NoPrefix_49);
        if (succeeded)
        {
          succeeded = mercury__string__to_int_2_p_0(NoPrefix_49, &N_10);
          if (succeeded)
          {
            KindCode_8 = (MR_Integer) 5;
            MaybeBaseName_9 = (MR_Word) ((MR_Unsigned) 0U);
            succeeded = MR_TRUE;
          }
        }
      }
    }
  }
  if (succeeded)
  {
    Var_17 = (MR_Integer) 1;
    Var_18 = (MR_Integer) 10;
    Var_16 = (Var_17 << Var_18);
    succeeded = (N_10 < Var_16);
    if (succeeded)
    {
      if ((MaybeBaseName_9 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        Offset_13 = (MR_Integer) 0;
        STATE_VARIABLE_StringTable_19_19 = STATE_VARIABLE_StringTable_0_14;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_String BaseName_11 = ((MR_String) ((MR_hl_field(1, MaybeBaseName_9, (MR_Integer) 0))));
        MR_Word MaybeOffset_12;
        MR_Integer Var_20;
        MR_Integer Var_21;
        MR_Integer Var_22;
        MR_Word TableMap0_59 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_StringTable_0_14, (MR_Integer) 0))));
        MR_Word TableList0_60 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_StringTable_0_14, (MR_Integer) 1))));
        MR_Integer TableOffset0_61 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_StringTable_0_14, (MR_Integer) 2))));
        MR_Integer OldOffset_62;
        MR_Box conv0_OldOffset_62;

        succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TableMap0_59, ((MR_Box) (BaseName_11)), &conv0_OldOffset_62);
        if (succeeded)
        {
          OldOffset_62 = ((MR_Integer) (conv0_OldOffset_62));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          {
            MaybeOffset_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, MaybeOffset_12, 0) = ((MR_Box) (OldOffset_62));
          }
          STATE_VARIABLE_StringTable_19_19 = STATE_VARIABLE_StringTable_0_14;
        }
        else
        {
          MR_Integer TableOffset_64;
          MR_Integer Length_63;
          MR_Integer Var_67;
          MR_Integer Var_69;

          Length_63 = mercury__string__count_utf8_code_units_1_f_0(BaseName_11);
          Var_67 = (MR_Integer) ((MR_Unsigned) TableOffset0_61 + (MR_Unsigned) Length_63);
          TableOffset_64 = (MR_Integer) ((MR_Unsigned) Var_67 + (MR_Unsigned) 1);
          Var_69 = mercury__int__f_60_60_2_f_0((MR_Integer) 1, (MR_Integer) 30);
          succeeded = (TableOffset_64 < Var_69);
          if (succeeded)
          {
            MR_Word TableMap_65;
            MR_Word TableList_66;

            {
              MaybeOffset_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, MaybeOffset_12, 0) = ((MR_Box) (TableOffset0_61));
            }
            mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (BaseName_11)), ((MR_Box) (TableOffset0_61)), TableMap0_59, &TableMap_65);
            {
              TableList_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, TableList_66, 0) = ((MR_Box) (BaseName_11));
              MR_hl_field(1, TableList_66, 1) = ((MR_Box) (TableList0_60));
            }
            {
              STATE_VARIABLE_StringTable_19_19 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, STATE_VARIABLE_StringTable_19_19, 0) = ((MR_Box) (TableMap_65));
              MR_hl_field(0, STATE_VARIABLE_StringTable_19_19, 1) = ((MR_Box) (TableList_66));
              MR_hl_field(0, STATE_VARIABLE_StringTable_19_19, 2) = ((MR_Box) (TableOffset_64));
            }
          }
          else
          {
            MaybeOffset_12 = (MR_Word) ((MR_Unsigned) 0U);
            STATE_VARIABLE_StringTable_19_19 = STATE_VARIABLE_StringTable_0_14;
          }
        }
        succeeded = (MaybeOffset_12 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Offset_13 = ((MR_Integer) ((MR_hl_field(1, MaybeOffset_12, (MR_Integer) 0))));
          Var_21 = (MR_Integer) 1;
          Var_22 = (MR_Integer) 16;
          Var_20 = (Var_21 << Var_22);
          succeeded = (Offset_13 < Var_20);
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Integer Var_23;
    MR_Integer Var_24;
    MR_Integer Var_26;
    MR_Integer Var_28;
    MR_Integer Var_30;

    *STATE_VARIABLE_StringTable_15 = STATE_VARIABLE_StringTable_19_19;
    Var_26 = (KindCode_8 << 1);
    Var_24 = ((MR_Integer) 1 | Var_26);
    Var_28 = (N_10 << 6);
    Var_23 = (Var_24 | Var_28);
    Var_30 = (Offset_13 << 16);
    *StringCode_6 = (Var_23 | Var_30);
  }
  else
  {
    MR_Integer Offset_35;
    MR_Word TableMap0_76 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_StringTable_0_14, (MR_Integer) 0))));
    MR_Word TableList0_77 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_StringTable_0_14, (MR_Integer) 1))));
    MR_Integer TableOffset0_78 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_StringTable_0_14, (MR_Integer) 2))));
    MR_Integer OldOffset_79;
    MR_Box conv1_OldOffset_79;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), TableMap0_76, ((MR_Box) (String_5)), &conv1_OldOffset_79);
    if (succeeded)
    {
      OldOffset_79 = ((MR_Integer) (conv1_OldOffset_79));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      *STATE_VARIABLE_StringTable_15 = STATE_VARIABLE_StringTable_0_14;
      Offset_35 = OldOffset_79;
    }
    else
    {
      MR_Integer TableOffset_81;
      MR_Integer Length_80;
      MR_Integer Var_84;
      MR_Integer Var_86;

      Length_80 = mercury__string__count_utf8_code_units_1_f_0(String_5);
      Var_84 = (MR_Integer) ((MR_Unsigned) TableOffset0_78 + (MR_Unsigned) Length_80);
      TableOffset_81 = (MR_Integer) ((MR_Unsigned) Var_84 + (MR_Unsigned) 1);
      Var_86 = mercury__int__f_60_60_2_f_0((MR_Integer) 1, (MR_Integer) 30);
      succeeded = (TableOffset_81 < Var_86);
      if (succeeded)
      {
        MR_Word TableMap_82;
        MR_Word TableList_83;

        mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (String_5)), ((MR_Box) (TableOffset0_78)), TableMap0_76, &TableMap_82);
        {
          TableList_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, TableList_83, 0) = ((MR_Box) (String_5));
          MR_hl_field(1, TableList_83, 1) = ((MR_Box) (TableList0_77));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_StringTable_15 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (TableMap_82));
          MR_hl_field(0, base, 1) = ((MR_Box) (TableList_83));
          MR_hl_field(0, base, 2) = ((MR_Box) (TableOffset_81));
        }
        Offset_35 = TableOffset0_78;
      }
      else
      {
        *STATE_VARIABLE_StringTable_15 = STATE_VARIABLE_StringTable_0_14;
        Offset_35 = (MR_Integer) 1;
      }
    }
    *StringCode_6 = (Offset_35 << 1);
  }
}

static MR_bool MR_CALL 
ll_backend__prog_rep_tables__rev_find_number_suffix_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer STATE_VARIABLE_Num_0_13,
  MR_Integer * STATE_VARIABLE_Num_14,
  MR_Integer STATE_VARIABLE_Scale_0_15,
  MR_Integer * STATE_VARIABLE_Scale_16,
  MR_Word * RevRest_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Char RevHead_7;
    MR_Word RevTail_8;
    MR_Integer Digit_12;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      RevHead_7 = ((MR_Char) (MR_Word) (MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0)));
      RevTail_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      succeeded = mercury__char__decimal_digit_to_int_2_p_0(RevHead_7, &Digit_12);
      if (succeeded)
      {
        MR_Integer STATE_VARIABLE_Num_17_17;
        MR_Integer Var_18 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_Scale_0_15 * (MR_Unsigned) Digit_12);
        MR_Integer STATE_VARIABLE_Scale_19_19;
        MR_Word next_value_of_HeadVar__1_1;
        MR_Integer next_value_of_STATE_VARIABLE_Num_0_13;
        MR_Integer next_value_of_STATE_VARIABLE_Scale_0_15;

        STATE_VARIABLE_Num_17_17 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_Num_0_13 + (MR_Unsigned) Var_18);
        STATE_VARIABLE_Scale_19_19 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_Scale_0_15 * (MR_Unsigned) 10);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = RevTail_8;
        next_value_of_STATE_VARIABLE_Num_0_13 = STATE_VARIABLE_Num_17_17;
        next_value_of_STATE_VARIABLE_Scale_0_15 = STATE_VARIABLE_Scale_19_19;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        STATE_VARIABLE_Num_0_13 = next_value_of_STATE_VARIABLE_Num_0_13;
        STATE_VARIABLE_Scale_0_15 = next_value_of_STATE_VARIABLE_Scale_0_15;
        continue;
      }
      else
      {
        succeeded = (RevHead_7 == (MR_Char) 95);
        if (succeeded)
        {
          *RevRest_11 = RevTail_8;
          *STATE_VARIABLE_Scale_16 = STATE_VARIABLE_Scale_0_15;
          *STATE_VARIABLE_Num_14 = STATE_VARIABLE_Num_0_13;
          succeeded = MR_TRUE;
        }
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
ll_backend__prog_rep_tables____Unify____string_table_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__prog_rep_tables____Unify____string_table_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__prog_rep_tables____Compare____string_table_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__prog_rep_tables____Compare____string_table_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__prog_rep_tables____Unify____type_table_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__prog_rep_tables____Unify____type_table_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__prog_rep_tables____Compare____type_table_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__prog_rep_tables____Compare____type_table_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

// Ensure everything is compiled with the same grade.
const char *mercury__ll_backend__prog_rep_tables__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ll_backend.prog_rep_tables.
