/*
** Automatically generated from `prog_rep_tables.m'
** by the Mercury compiler,
** version rotd-2017-07-26
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
#include "libs.compiler_util.mih"
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
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




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
ll_backend__prog_rep_tables__IntroducedFrom__func__encode_arg_type_codes__416__1_1_f_0(
  MR_Word ll_backend__prog_rep_tables__HeadVar__1_18);

static void MR_CALL 
ll_backend__prog_rep_tables__add_type_to_table_6_p_0_3(
  MR_Box ll_backend__prog_rep_tables__closure_arg,
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_1,
  MR_Box * ll_backend__prog_rep_tables__wrapper_arg_2,
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_3,
  MR_Box * ll_backend__prog_rep_tables__wrapper_arg_4,
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_5,
  MR_Box * ll_backend__prog_rep_tables__wrapper_arg_6);

static void MR_CALL 
ll_backend__prog_rep_tables__add_type_to_table_6_p_0_2(
  MR_Box ll_backend__prog_rep_tables__closure_arg,
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_1,
  MR_Box * ll_backend__prog_rep_tables__wrapper_arg_2,
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_3,
  MR_Box * ll_backend__prog_rep_tables__wrapper_arg_4,
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_5,
  MR_Box * ll_backend__prog_rep_tables__wrapper_arg_6);

static void MR_CALL 
ll_backend__prog_rep_tables__add_type_to_table_6_p_0_1(
  MR_Box ll_backend__prog_rep_tables__closure_arg,
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_1,
  MR_Box * ll_backend__prog_rep_tables__wrapper_arg_2,
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_3,
  MR_Box * ll_backend__prog_rep_tables__wrapper_arg_4,
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_5,
  MR_Box * ll_backend__prog_rep_tables__wrapper_arg_6);

static void MR_CALL 
ll_backend__prog_rep_tables__add_type_to_table_6_p_0(
  MR_Word ll_backend__prog_rep_tables__Type_7,
  MR_Integer * ll_backend__prog_rep_tables__TypeCode_8,
  MR_Word ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_0_46,
  MR_Word * ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_47,
  MR_Word ll_backend__prog_rep_tables__STATE_VARIABLE_TypeTable_0_48,
  MR_Word * ll_backend__prog_rep_tables__STATE_VARIABLE_TypeTable_49);

static MR_Box MR_CALL 
ll_backend__prog_rep_tables__encode_arg_type_codes_2_p_0_2(
  MR_Box ll_backend__prog_rep_tables__closure_arg,
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_1);

static void MR_CALL 
ll_backend__prog_rep_tables__encode_arg_type_codes_2_p_0_1(
  MR_Box ll_backend__prog_rep_tables__closure_arg,
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_1,
  MR_Box * ll_backend__prog_rep_tables__wrapper_arg_2);

static void MR_CALL 
ll_backend__prog_rep_tables__encode_arg_type_codes_2_p_0(
  MR_Word ll_backend__prog_rep_tables__ArgTypeCodes_3,
  MR_Word * ll_backend__prog_rep_tables__ArgTypeBytesCord_4);

static void MR_CALL 
ll_backend__prog_rep_tables__lookup_raw_string_in_table_4_p_0(
  MR_String ll_backend__prog_rep_tables__String_5,
  MR_Word * ll_backend__prog_rep_tables__MaybeOffset_6,
  MR_Word ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_0_16,
  MR_Word * ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_17);

static MR_bool MR_CALL 
ll_backend__prog_rep_tables__rev_find_number_suffix_6_p_0(
  MR_Word ll_backend__prog_rep_tables__HeadVar__1_1,
  MR_Integer ll_backend__prog_rep_tables__STATE_VARIABLE_Num_0_13,
  MR_Integer * ll_backend__prog_rep_tables__STATE_VARIABLE_Num_14,
  MR_Integer ll_backend__prog_rep_tables__STATE_VARIABLE_Scale_0_15,
  MR_Integer * ll_backend__prog_rep_tables__STATE_VARIABLE_Scale_16,
  MR_Word * ll_backend__prog_rep_tables__RevRest_11);

static MR_bool MR_CALL 
ll_backend__prog_rep_tables____Unify____string_table_info_0_0_10001(
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_1,
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_2);

static void MR_CALL 
ll_backend__prog_rep_tables____Compare____string_table_info_0_0_10001(
  MR_Box * ll_backend__prog_rep_tables__wrapper_arg_1,
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_2,
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__prog_rep_tables____Unify____type_table_info_0_0_10001(
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_1,
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_2);

static void MR_CALL 
ll_backend__prog_rep_tables____Compare____type_table_info_0_0_10001(
  MR_Box * ll_backend__prog_rep_tables__wrapper_arg_1,
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_2,
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_3);


static /* final */ const MR_Box ll_backend__prog_rep_tables_scalar_common_1[3][2];

static /* final */ const MR_Box ll_backend__prog_rep_tables_scalar_common_2[7][3];

static /* final */ const MR_Box ll_backend__prog_rep_tables_scalar_common_3[2][5];

static /* final */ const MR_Box ll_backend__prog_rep_tables_scalar_common_5[1][9];


/* sealed */ struct ll_backend__prog_rep_tables__vector_common_type_4_0_s {
  const MR_Integer ll_backend__prog_rep_tables__vector_common_type_4_0__vct_4_f_0;
};

static /* final */ const struct ll_backend__prog_rep_tables__vector_common_type_4_0_s ll_backend__prog_rep_tables_vector_common_4[8];



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
    ((MR_Box) (&ll_backend__prog_rep_tables_scalar_common_3[0])),
    ((MR_Box) (ll_backend__prog_rep_tables__encode_arg_type_codes_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&ll_backend__prog_rep_tables_scalar_common_3[1])),
    ((MR_Box) (ll_backend__prog_rep_tables__encode_arg_type_codes_2_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&ll_backend__prog_rep_tables_scalar_common_5[0])),
    ((MR_Box) (ll_backend__prog_rep_tables__add_type_to_table_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&ll_backend__prog_rep_tables_scalar_common_5[0])),
    ((MR_Box) (ll_backend__prog_rep_tables__add_type_to_table_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&ll_backend__prog_rep_tables_scalar_common_5[0])),
    ((MR_Box) (ll_backend__prog_rep_tables__add_type_to_table_6_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__prog_rep_tables_scalar_common_3[2][5] = {
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

static /* final */ const MR_Box ll_backend__prog_rep_tables_scalar_common_5[1][9] = {
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


static /* final */ const struct ll_backend__prog_rep_tables__vector_common_type_4_0_s ll_backend__prog_rep_tables_vector_common_4[8] = {
  /* row 0 */   {     (MR_Integer) 5 },
  /* row 1 */   {     (MR_Integer) 6 },
  /* row 2 */   {     (MR_Integer) 14 },
  /* row 3 */   {     (MR_Integer) 15 },
  /* row 4 */   {     (MR_Integer) 16 },
  /* row 5 */   {     (MR_Integer) 17 },
  /* row 6 */   {     (MR_Integer) 18 },
  /* row 7 */   {     (MR_Integer) 19 },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__prog_rep_tables__list__pti_list_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__prog_rep_tables__cord__pti_cord_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_FA_TypeInfo_Struct2 ll_backend__prog_rep_tables__tree234__ti_tree234_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__prog_rep_tables__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_PseudoTypeInfo ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__field_types_string_table_info_0_0[3] = {
  (MR_PseudoTypeInfo) &ll_backend__prog_rep_tables__tree234__ti_tree234_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__prog_rep_tables__list__ti_list_1builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__du_functor_desc_string_table_info_0_0 = {
  (MR_String) "string_table_info",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__field_types_string_table_info_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__du_stag_ordered_string_table_info_0_0[1] = {
  &ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__du_functor_desc_string_table_info_0_0
};

static const MR_DuPtagLayout ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__du_ptag_ordered_string_table_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__du_stag_ordered_string_table_info_0_0
  }
};

static const MR_DuFunctorDescPtr ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__du_name_ordered_string_table_info_0[1] = {
  &ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__du_functor_desc_string_table_info_0_0
};

static const MR_Integer ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__functor_number_map_string_table_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_string_table_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
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

static const MR_FA_TypeInfo_Struct2 ll_backend__prog_rep_tables__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_mer_type_0builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__prog_rep_tables__cord__ti_cord_1builtin__type_ctor_info_int_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_PseudoTypeInfo ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__field_types_type_table_info_0_0[3] = {
  (MR_PseudoTypeInfo) &ll_backend__prog_rep_tables__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_mer_type_0builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__prog_rep_tables__cord__ti_cord_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__du_functor_desc_type_table_info_0_0 = {
  (MR_String) "type_table_info",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__field_types_type_table_info_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__du_stag_ordered_type_table_info_0_0[1] = {
  &ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__du_functor_desc_type_table_info_0_0
};

static const MR_DuPtagLayout ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__du_ptag_ordered_type_table_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__du_stag_ordered_type_table_info_0_0
  }
};

static const MR_DuFunctorDescPtr ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__du_name_ordered_type_table_info_0[1] = {
  &ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__du_functor_desc_type_table_info_0_0
};

static const MR_Integer ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__functor_number_map_type_table_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_type_table_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
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

static MR_Word MR_CALL 
ll_backend__prog_rep_tables__IntroducedFrom__func__encode_arg_type_codes__416__1_1_f_0(
  MR_Word ll_backend__prog_rep_tables__HeadVar__1_18)
{
  {
    MR_bool ll_backend__prog_rep_tables__succeeded;
    MR_Word ll_backend__prog_rep_tables__HeadVar__2_19;

    {
      ll_backend__prog_rep_tables__HeadVar__2_19 = mercury__cord__from_list_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ll_backend__prog_rep_tables__HeadVar__1_18);
    }
    return ll_backend__prog_rep_tables__HeadVar__2_19;
  }
}

void MR_CALL 
ll_backend__prog_rep_tables____Compare____type_table_info_0_0(
  MR_Word * ll_backend__prog_rep_tables__HeadVar__1_1,
  MR_Word ll_backend__prog_rep_tables__HeadVar__2_2,
  MR_Word ll_backend__prog_rep_tables__HeadVar__3_3)
{
  {
    MR_bool ll_backend__prog_rep_tables__succeeded;
    MR_Integer ll_backend__prog_rep_tables__CastX_12 = (MR_Integer) ll_backend__prog_rep_tables__HeadVar__2_2;
    MR_Integer ll_backend__prog_rep_tables__CastY_13 = (MR_Integer) ll_backend__prog_rep_tables__HeadVar__3_3;

    ll_backend__prog_rep_tables__succeeded = (ll_backend__prog_rep_tables__CastX_12 == ll_backend__prog_rep_tables__CastY_13);
    if (ll_backend__prog_rep_tables__succeeded)
      *ll_backend__prog_rep_tables__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word ll_backend__prog_rep_tables__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ll_backend__prog_rep_tables__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word ll_backend__prog_rep_tables__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ll_backend__prog_rep_tables__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__HeadVar__3_3, (MR_Integer) 1)));
        MR_Integer ll_backend__prog_rep_tables__ArgX3_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__HeadVar__2_2, (MR_Integer) 2)));
        MR_Integer ll_backend__prog_rep_tables__ArgY3_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word ll_backend__prog_rep_tables__Var_10;

        {
          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__prog_rep_tables_scalar_common_2[1], &ll_backend__prog_rep_tables__Var_10, ((MR_Box) (ll_backend__prog_rep_tables__ArgX1_4)), ((MR_Box) (ll_backend__prog_rep_tables__ArgY1_5)));
        }
        ll_backend__prog_rep_tables__succeeded = (ll_backend__prog_rep_tables__Var_10 == (MR_Integer) 0);
        ll_backend__prog_rep_tables__succeeded = !(ll_backend__prog_rep_tables__succeeded);
        if (ll_backend__prog_rep_tables__succeeded)
          *ll_backend__prog_rep_tables__HeadVar__1_1 = ll_backend__prog_rep_tables__Var_10;
        else
          {
            MR_Word ll_backend__prog_rep_tables__Var_11;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__prog_rep_tables_scalar_common_1[1], &ll_backend__prog_rep_tables__Var_11, ((MR_Box) (ll_backend__prog_rep_tables__ArgX2_6)), ((MR_Box) (ll_backend__prog_rep_tables__ArgY2_7)));
            }
            ll_backend__prog_rep_tables__succeeded = (ll_backend__prog_rep_tables__Var_11 == (MR_Integer) 0);
            ll_backend__prog_rep_tables__succeeded = !(ll_backend__prog_rep_tables__succeeded);
            if (ll_backend__prog_rep_tables__succeeded)
              *ll_backend__prog_rep_tables__HeadVar__1_1 = ll_backend__prog_rep_tables__Var_11;
            else
              {
                mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__prog_rep_tables__HeadVar__1_1, ll_backend__prog_rep_tables__ArgX3_8, ll_backend__prog_rep_tables__ArgY3_9);
              }
          }
      }
  }
}

MR_bool MR_CALL 
ll_backend__prog_rep_tables____Unify____type_table_info_0_0(
  MR_Word ll_backend__prog_rep_tables__HeadVar__1_1,
  MR_Word ll_backend__prog_rep_tables__HeadVar__2_2)
{
  {
    MR_bool ll_backend__prog_rep_tables__succeeded;
    MR_Integer ll_backend__prog_rep_tables__CastX_9 = (MR_Integer) ll_backend__prog_rep_tables__HeadVar__1_1;
    MR_Integer ll_backend__prog_rep_tables__CastY_10 = (MR_Integer) ll_backend__prog_rep_tables__HeadVar__2_2;

    ll_backend__prog_rep_tables__succeeded = (ll_backend__prog_rep_tables__CastX_9 == ll_backend__prog_rep_tables__CastY_10);
    if (ll_backend__prog_rep_tables__succeeded)
      ll_backend__prog_rep_tables__succeeded = MR_TRUE;
    else
      {
        MR_Word ll_backend__prog_rep_tables__TypeInfo_12_12;
        MR_Word ll_backend__prog_rep_tables__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__prog_rep_tables__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ll_backend__prog_rep_tables__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__prog_rep_tables__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer ll_backend__prog_rep_tables__ArgX3_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__HeadVar__1_1, (MR_Integer) 2)));
        MR_Integer ll_backend__prog_rep_tables__ArgY3_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__HeadVar__2_2, (MR_Integer) 2)));

        {
          ll_backend__prog_rep_tables__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__prog_rep_tables_scalar_common_2[1], ((MR_Box) (ll_backend__prog_rep_tables__ArgX1_3)), ((MR_Box) (ll_backend__prog_rep_tables__ArgY1_4)));
        }
        if (ll_backend__prog_rep_tables__succeeded)
          {
            ll_backend__prog_rep_tables__TypeInfo_12_12 = (MR_Word) &ll_backend__prog_rep_tables_scalar_common_1[1];
            {
              ll_backend__prog_rep_tables__succeeded = mercury__builtin__unify_2_p_0(ll_backend__prog_rep_tables__TypeInfo_12_12, ((MR_Box) (ll_backend__prog_rep_tables__ArgX2_5)), ((MR_Box) (ll_backend__prog_rep_tables__ArgY2_6)));
            }
            if (ll_backend__prog_rep_tables__succeeded)
              ll_backend__prog_rep_tables__succeeded = (ll_backend__prog_rep_tables__ArgX3_7 == ll_backend__prog_rep_tables__ArgY3_8);
          }
      }
    return ll_backend__prog_rep_tables__succeeded;
  }
}

void MR_CALL 
ll_backend__prog_rep_tables____Compare____string_table_info_0_0(
  MR_Word * ll_backend__prog_rep_tables__HeadVar__1_1,
  MR_Word ll_backend__prog_rep_tables__HeadVar__2_2,
  MR_Word ll_backend__prog_rep_tables__HeadVar__3_3)
{
  {
    MR_bool ll_backend__prog_rep_tables__succeeded;
    MR_Integer ll_backend__prog_rep_tables__CastX_12 = (MR_Integer) ll_backend__prog_rep_tables__HeadVar__2_2;
    MR_Integer ll_backend__prog_rep_tables__CastY_13 = (MR_Integer) ll_backend__prog_rep_tables__HeadVar__3_3;

    ll_backend__prog_rep_tables__succeeded = (ll_backend__prog_rep_tables__CastX_12 == ll_backend__prog_rep_tables__CastY_13);
    if (ll_backend__prog_rep_tables__succeeded)
      *ll_backend__prog_rep_tables__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word ll_backend__prog_rep_tables__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ll_backend__prog_rep_tables__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word ll_backend__prog_rep_tables__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ll_backend__prog_rep_tables__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__HeadVar__3_3, (MR_Integer) 1)));
        MR_Integer ll_backend__prog_rep_tables__ArgX3_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__HeadVar__2_2, (MR_Integer) 2)));
        MR_Integer ll_backend__prog_rep_tables__ArgY3_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word ll_backend__prog_rep_tables__Var_10;

        {
          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__prog_rep_tables_scalar_common_2[0], &ll_backend__prog_rep_tables__Var_10, ((MR_Box) (ll_backend__prog_rep_tables__ArgX1_4)), ((MR_Box) (ll_backend__prog_rep_tables__ArgY1_5)));
        }
        ll_backend__prog_rep_tables__succeeded = (ll_backend__prog_rep_tables__Var_10 == (MR_Integer) 0);
        ll_backend__prog_rep_tables__succeeded = !(ll_backend__prog_rep_tables__succeeded);
        if (ll_backend__prog_rep_tables__succeeded)
          *ll_backend__prog_rep_tables__HeadVar__1_1 = ll_backend__prog_rep_tables__Var_10;
        else
          {
            MR_Word ll_backend__prog_rep_tables__Var_11;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__prog_rep_tables_scalar_common_1[2], &ll_backend__prog_rep_tables__Var_11, ((MR_Box) (ll_backend__prog_rep_tables__ArgX2_6)), ((MR_Box) (ll_backend__prog_rep_tables__ArgY2_7)));
            }
            ll_backend__prog_rep_tables__succeeded = (ll_backend__prog_rep_tables__Var_11 == (MR_Integer) 0);
            ll_backend__prog_rep_tables__succeeded = !(ll_backend__prog_rep_tables__succeeded);
            if (ll_backend__prog_rep_tables__succeeded)
              *ll_backend__prog_rep_tables__HeadVar__1_1 = ll_backend__prog_rep_tables__Var_11;
            else
              {
                mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__prog_rep_tables__HeadVar__1_1, ll_backend__prog_rep_tables__ArgX3_8, ll_backend__prog_rep_tables__ArgY3_9);
              }
          }
      }
  }
}

MR_bool MR_CALL 
ll_backend__prog_rep_tables____Unify____string_table_info_0_0(
  MR_Word ll_backend__prog_rep_tables__HeadVar__1_1,
  MR_Word ll_backend__prog_rep_tables__HeadVar__2_2)
{
  {
    MR_bool ll_backend__prog_rep_tables__succeeded;
    MR_Integer ll_backend__prog_rep_tables__CastX_9 = (MR_Integer) ll_backend__prog_rep_tables__HeadVar__1_1;
    MR_Integer ll_backend__prog_rep_tables__CastY_10 = (MR_Integer) ll_backend__prog_rep_tables__HeadVar__2_2;

    ll_backend__prog_rep_tables__succeeded = (ll_backend__prog_rep_tables__CastX_9 == ll_backend__prog_rep_tables__CastY_10);
    if (ll_backend__prog_rep_tables__succeeded)
      ll_backend__prog_rep_tables__succeeded = MR_TRUE;
    else
      {
        MR_Word ll_backend__prog_rep_tables__TypeInfo_12_12;
        MR_Word ll_backend__prog_rep_tables__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__prog_rep_tables__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ll_backend__prog_rep_tables__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__prog_rep_tables__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer ll_backend__prog_rep_tables__ArgX3_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__HeadVar__1_1, (MR_Integer) 2)));
        MR_Integer ll_backend__prog_rep_tables__ArgY3_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__HeadVar__2_2, (MR_Integer) 2)));

        {
          ll_backend__prog_rep_tables__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__prog_rep_tables_scalar_common_2[0], ((MR_Box) (ll_backend__prog_rep_tables__ArgX1_3)), ((MR_Box) (ll_backend__prog_rep_tables__ArgY1_4)));
        }
        if (ll_backend__prog_rep_tables__succeeded)
          {
            ll_backend__prog_rep_tables__TypeInfo_12_12 = (MR_Word) &ll_backend__prog_rep_tables_scalar_common_1[2];
            {
              ll_backend__prog_rep_tables__succeeded = mercury__builtin__unify_2_p_0(ll_backend__prog_rep_tables__TypeInfo_12_12, ((MR_Box) (ll_backend__prog_rep_tables__ArgX2_5)), ((MR_Box) (ll_backend__prog_rep_tables__ArgY2_6)));
            }
            if (ll_backend__prog_rep_tables__succeeded)
              ll_backend__prog_rep_tables__succeeded = (ll_backend__prog_rep_tables__ArgX3_7 == ll_backend__prog_rep_tables__ArgY3_8);
          }
      }
    return ll_backend__prog_rep_tables__succeeded;
  }
}

void MR_CALL 
ll_backend__prog_rep_tables__get_type_table_contents_3_p_0(
  MR_Word ll_backend__prog_rep_tables__TypeTable_4,
  MR_Integer * ll_backend__prog_rep_tables__NumTypes_5,
  MR_Word * ll_backend__prog_rep_tables__TypeBytes_6)
{
  {
    MR_bool ll_backend__prog_rep_tables__succeeded;
    MR_Word ll_backend__prog_rep_tables__TypeBytesCord_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__TypeTable_4, (MR_Integer) 1)));
    MR_Word ll_backend__prog_rep_tables__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__TypeTable_4, (MR_Integer) 0)));

    *ll_backend__prog_rep_tables__NumTypes_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__TypeTable_4, (MR_Integer) 2)));
    {
      *ll_backend__prog_rep_tables__TypeBytes_6 = mercury__cord__list_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ll_backend__prog_rep_tables__TypeBytesCord_8);
    }
  }
}

void MR_CALL 
ll_backend__prog_rep_tables__lookup_type_in_table_6_p_0(
  MR_Word ll_backend__prog_rep_tables__Type_7,
  MR_Integer * ll_backend__prog_rep_tables__TypeCode_8,
  MR_Word ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_0_15,
  MR_Word * ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_16,
  MR_Word ll_backend__prog_rep_tables__STATE_VARIABLE_TypeTable_0_17,
  MR_Word * ll_backend__prog_rep_tables__STATE_VARIABLE_TypeTable_18)
{
  {
    MR_bool ll_backend__prog_rep_tables__succeeded;
    MR_Word ll_backend__prog_rep_tables__TypeMap0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__STATE_VARIABLE_TypeTable_0_17, (MR_Integer) 0)));
    MR_Word ll_backend__prog_rep_tables__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__STATE_VARIABLE_TypeTable_0_17, (MR_Integer) 1)));
    MR_Integer ll_backend__prog_rep_tables__Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__STATE_VARIABLE_TypeTable_0_17, (MR_Integer) 2)));
    MR_Integer ll_backend__prog_rep_tables__TypeCodePrime_14;
    MR_Box ll_backend__prog_rep_tables__conv0_TypeCodePrime_14;

    {
      ll_backend__prog_rep_tables__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ll_backend__prog_rep_tables__TypeMap0_11, ((MR_Box) (ll_backend__prog_rep_tables__Type_7)), &ll_backend__prog_rep_tables__conv0_TypeCodePrime_14);
    }
    if (ll_backend__prog_rep_tables__succeeded)
      {
        ll_backend__prog_rep_tables__TypeCodePrime_14 = ((MR_Integer) ll_backend__prog_rep_tables__conv0_TypeCodePrime_14);
        ll_backend__prog_rep_tables__succeeded = MR_TRUE;
      }
    if (ll_backend__prog_rep_tables__succeeded)
      {
        *ll_backend__prog_rep_tables__TypeCode_8 = ll_backend__prog_rep_tables__TypeCodePrime_14;
        *ll_backend__prog_rep_tables__STATE_VARIABLE_TypeTable_18 = ll_backend__prog_rep_tables__STATE_VARIABLE_TypeTable_0_17;
        *ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_16 = ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_0_15;
      }
    else
      {
        ll_backend__prog_rep_tables__add_type_to_table_6_p_0(ll_backend__prog_rep_tables__Type_7, ll_backend__prog_rep_tables__TypeCode_8, ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_0_15, ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_16, ll_backend__prog_rep_tables__STATE_VARIABLE_TypeTable_0_17, ll_backend__prog_rep_tables__STATE_VARIABLE_TypeTable_18);
      }
  }
}

static void MR_CALL 
ll_backend__prog_rep_tables__add_type_to_table_6_p_0_3(
  MR_Box ll_backend__prog_rep_tables__closure_arg,
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_1,
  MR_Box * ll_backend__prog_rep_tables__wrapper_arg_2,
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_3,
  MR_Box * ll_backend__prog_rep_tables__wrapper_arg_4,
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_5,
  MR_Box * ll_backend__prog_rep_tables__wrapper_arg_6)
{
  {
    MR_Box ll_backend__prog_rep_tables__closure = ll_backend__prog_rep_tables__closure_arg;
    MR_Integer ll_backend__prog_rep_tables__conv12_TypeCode_8;
    MR_Word ll_backend__prog_rep_tables__conv11_STATE_VARIABLE_StringTable_16;
    MR_Word ll_backend__prog_rep_tables__conv10_STATE_VARIABLE_TypeTable_18;

    {
      ll_backend__prog_rep_tables__lookup_type_in_table_6_p_0(((MR_Word) ll_backend__prog_rep_tables__wrapper_arg_1), &ll_backend__prog_rep_tables__conv12_TypeCode_8, ((MR_Word) ll_backend__prog_rep_tables__wrapper_arg_3), &ll_backend__prog_rep_tables__conv11_STATE_VARIABLE_StringTable_16, ((MR_Word) ll_backend__prog_rep_tables__wrapper_arg_5), &ll_backend__prog_rep_tables__conv10_STATE_VARIABLE_TypeTable_18);
    }
    *ll_backend__prog_rep_tables__wrapper_arg_2 = ((MR_Box) (ll_backend__prog_rep_tables__conv12_TypeCode_8));
    *ll_backend__prog_rep_tables__wrapper_arg_4 = ((MR_Box) (ll_backend__prog_rep_tables__conv11_STATE_VARIABLE_StringTable_16));
    *ll_backend__prog_rep_tables__wrapper_arg_6 = ((MR_Box) (ll_backend__prog_rep_tables__conv10_STATE_VARIABLE_TypeTable_18));
  }
}

static void MR_CALL 
ll_backend__prog_rep_tables__add_type_to_table_6_p_0_2(
  MR_Box ll_backend__prog_rep_tables__closure_arg,
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_1,
  MR_Box * ll_backend__prog_rep_tables__wrapper_arg_2,
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_3,
  MR_Box * ll_backend__prog_rep_tables__wrapper_arg_4,
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_5,
  MR_Box * ll_backend__prog_rep_tables__wrapper_arg_6)
{
  {
    MR_Box ll_backend__prog_rep_tables__closure = ll_backend__prog_rep_tables__closure_arg;
    MR_Integer ll_backend__prog_rep_tables__conv7_TypeCode_8;
    MR_Word ll_backend__prog_rep_tables__conv6_STATE_VARIABLE_StringTable_16;
    MR_Word ll_backend__prog_rep_tables__conv5_STATE_VARIABLE_TypeTable_18;

    {
      ll_backend__prog_rep_tables__lookup_type_in_table_6_p_0(((MR_Word) ll_backend__prog_rep_tables__wrapper_arg_1), &ll_backend__prog_rep_tables__conv7_TypeCode_8, ((MR_Word) ll_backend__prog_rep_tables__wrapper_arg_3), &ll_backend__prog_rep_tables__conv6_STATE_VARIABLE_StringTable_16, ((MR_Word) ll_backend__prog_rep_tables__wrapper_arg_5), &ll_backend__prog_rep_tables__conv5_STATE_VARIABLE_TypeTable_18);
    }
    *ll_backend__prog_rep_tables__wrapper_arg_2 = ((MR_Box) (ll_backend__prog_rep_tables__conv7_TypeCode_8));
    *ll_backend__prog_rep_tables__wrapper_arg_4 = ((MR_Box) (ll_backend__prog_rep_tables__conv6_STATE_VARIABLE_StringTable_16));
    *ll_backend__prog_rep_tables__wrapper_arg_6 = ((MR_Box) (ll_backend__prog_rep_tables__conv5_STATE_VARIABLE_TypeTable_18));
  }
}

static void MR_CALL 
ll_backend__prog_rep_tables__add_type_to_table_6_p_0_1(
  MR_Box ll_backend__prog_rep_tables__closure_arg,
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_1,
  MR_Box * ll_backend__prog_rep_tables__wrapper_arg_2,
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_3,
  MR_Box * ll_backend__prog_rep_tables__wrapper_arg_4,
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_5,
  MR_Box * ll_backend__prog_rep_tables__wrapper_arg_6)
{
  {
    MR_Box ll_backend__prog_rep_tables__closure = ll_backend__prog_rep_tables__closure_arg;
    MR_Integer ll_backend__prog_rep_tables__conv2_TypeCode_8;
    MR_Word ll_backend__prog_rep_tables__conv1_STATE_VARIABLE_StringTable_16;
    MR_Word ll_backend__prog_rep_tables__conv0_STATE_VARIABLE_TypeTable_18;

    {
      ll_backend__prog_rep_tables__lookup_type_in_table_6_p_0(((MR_Word) ll_backend__prog_rep_tables__wrapper_arg_1), &ll_backend__prog_rep_tables__conv2_TypeCode_8, ((MR_Word) ll_backend__prog_rep_tables__wrapper_arg_3), &ll_backend__prog_rep_tables__conv1_STATE_VARIABLE_StringTable_16, ((MR_Word) ll_backend__prog_rep_tables__wrapper_arg_5), &ll_backend__prog_rep_tables__conv0_STATE_VARIABLE_TypeTable_18);
    }
    *ll_backend__prog_rep_tables__wrapper_arg_2 = ((MR_Box) (ll_backend__prog_rep_tables__conv2_TypeCode_8));
    *ll_backend__prog_rep_tables__wrapper_arg_4 = ((MR_Box) (ll_backend__prog_rep_tables__conv1_STATE_VARIABLE_StringTable_16));
    *ll_backend__prog_rep_tables__wrapper_arg_6 = ((MR_Box) (ll_backend__prog_rep_tables__conv0_STATE_VARIABLE_TypeTable_18));
  }
}

static void MR_CALL 
ll_backend__prog_rep_tables__add_type_to_table_6_p_0(
  MR_Word ll_backend__prog_rep_tables__Type_7,
  MR_Integer * ll_backend__prog_rep_tables__TypeCode_8,
  MR_Word ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_0_46,
  MR_Word * ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_47,
  MR_Word ll_backend__prog_rep_tables__STATE_VARIABLE_TypeTable_0_48,
  MR_Word * ll_backend__prog_rep_tables__STATE_VARIABLE_TypeTable_49)
{
  {
    MR_bool ll_backend__prog_rep_tables__succeeded;
    MR_Word ll_backend__prog_rep_tables__TypeCtorInfo_158_158;
    MR_Word ll_backend__prog_rep_tables__TypeBytesCord_28;
    MR_Word ll_backend__prog_rep_tables__TypeMap0_40;
    MR_Word ll_backend__prog_rep_tables__TypeTableCord0_41;
    MR_Integer ll_backend__prog_rep_tables__NextTypeNum_43;
    MR_Word ll_backend__prog_rep_tables__TypeMap_44;
    MR_Word ll_backend__prog_rep_tables__TypeTableCord_45;
    MR_Word ll_backend__prog_rep_tables__STATE_VARIABLE_TypeTable_76_76;

    switch (MR_tag((MR_Word) ll_backend__prog_rep_tables__Type_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ll_backend__prog_rep_tables__TypeCtorInfo_156_156;
          MR_Word ll_backend__prog_rep_tables__TVar_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__Type_7, (MR_Integer) 0)));
          MR_Integer ll_backend__prog_rep_tables__TVarNum_38;
          MR_Word ll_backend__prog_rep_tables__TVarNumBytes_39;
          MR_Word ll_backend__prog_rep_tables__Var_50;
          MR_Word ll_backend__prog_rep_tables__Var_51;
          MR_Word ll_backend__prog_rep_tables___Kind_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__Type_7, (MR_Integer) 1)));

          {
            mercury__term__var_to_int_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, ll_backend__prog_rep_tables__TVar_37, &ll_backend__prog_rep_tables__TVarNum_38);
          }
          {
            mdbcomp__rtti_access__encode_num_det_2_p_0(ll_backend__prog_rep_tables__TVarNum_38, &ll_backend__prog_rep_tables__TVarNumBytes_39);
          }
          ll_backend__prog_rep_tables__TypeCtorInfo_156_156 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
          {
            ll_backend__prog_rep_tables__Var_50 = mercury__cord__singleton_1_f_0(ll_backend__prog_rep_tables__TypeCtorInfo_156_156, ((MR_Box) ((MR_Integer) 13)));
          }
          {
            ll_backend__prog_rep_tables__Var_51 = mercury__cord__from_list_1_f_0(ll_backend__prog_rep_tables__TypeCtorInfo_156_156, ll_backend__prog_rep_tables__TVarNumBytes_39);
          }
          {
            ll_backend__prog_rep_tables__TypeBytesCord_28 = mercury__cord__f_43_43_2_f_0(ll_backend__prog_rep_tables__TypeCtorInfo_156_156, ll_backend__prog_rep_tables__Var_50, ll_backend__prog_rep_tables__Var_51);
          }
          *ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_47 = ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_0_46;
          ll_backend__prog_rep_tables__STATE_VARIABLE_TypeTable_76_76 = ll_backend__prog_rep_tables__STATE_VARIABLE_TypeTable_0_48;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__prog_rep_tables__TypeCtorInfo_131_131 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
          MR_Word ll_backend__prog_rep_tables__TypeCtorSymName_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep_tables__Type_7, (MR_Integer) 0)));
          MR_Word ll_backend__prog_rep_tables__ArgTypes_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep_tables__Type_7, (MR_Integer) 1)));
          MR_Word ll_backend__prog_rep_tables__ArgTypeCodes_14;
          MR_String ll_backend__prog_rep_tables__TypeCtorSymNameStr_15;
          MR_Integer ll_backend__prog_rep_tables__TypeCtorSymNameCode_16;
          MR_Word ll_backend__prog_rep_tables__TypeCtorSymNameBytes_17;
          MR_Integer ll_backend__prog_rep_tables__Selector_18;
          MR_Word ll_backend__prog_rep_tables__ArgTypeBytesCord_19;
          MR_Word ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_75_75;
          MR_Word ll_backend__prog_rep_tables__Var_99;
          MR_Word ll_backend__prog_rep_tables__Var_100;
          MR_Word ll_backend__prog_rep_tables___Kind_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep_tables__Type_7, (MR_Integer) 2)));
          MR_Box ll_backend__prog_rep_tables__conv4_STATE_VARIABLE_StringTable_75_75;
          MR_Box ll_backend__prog_rep_tables__conv3_STATE_VARIABLE_TypeTable_76_76;

          {
            mercury__list__map_foldl2_7_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ll_backend__prog_rep_tables__TypeCtorInfo_131_131, (MR_Word) &ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_string_table_info_0, (MR_Word) &ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_type_table_info_0, (MR_Word) &ll_backend__prog_rep_tables_scalar_common_2[4], ll_backend__prog_rep_tables__ArgTypes_12, &ll_backend__prog_rep_tables__ArgTypeCodes_14, ((MR_Box) (ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_0_46)), &ll_backend__prog_rep_tables__conv4_STATE_VARIABLE_StringTable_75_75, ((MR_Box) (ll_backend__prog_rep_tables__STATE_VARIABLE_TypeTable_0_48)), &ll_backend__prog_rep_tables__conv3_STATE_VARIABLE_TypeTable_76_76);
          }
          ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_75_75 = ((MR_Word) ll_backend__prog_rep_tables__conv4_STATE_VARIABLE_StringTable_75_75);
          ll_backend__prog_rep_tables__STATE_VARIABLE_TypeTable_76_76 = ((MR_Word) ll_backend__prog_rep_tables__conv3_STATE_VARIABLE_TypeTable_76_76);
          {
            ll_backend__prog_rep_tables__TypeCtorSymNameStr_15 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ll_backend__prog_rep_tables__TypeCtorSymName_11);
          }
          {
            ll_backend__prog_rep_tables__lookup_string_in_table_4_p_0(ll_backend__prog_rep_tables__TypeCtorSymNameStr_15, &ll_backend__prog_rep_tables__TypeCtorSymNameCode_16, ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_75_75, ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_47);
          }
          {
            mdbcomp__rtti_access__encode_int32_det_2_p_0(ll_backend__prog_rep_tables__TypeCtorSymNameCode_16, &ll_backend__prog_rep_tables__TypeCtorSymNameBytes_17);
          }
          if ((ll_backend__prog_rep_tables__ArgTypeCodes_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              ll_backend__prog_rep_tables__Selector_18 = (MR_Integer) 0;
              {
                ll_backend__prog_rep_tables__ArgTypeBytesCord_19 = mercury__cord__init_0_f_0(ll_backend__prog_rep_tables__TypeCtorInfo_131_131);
              }
            }
          else
            {
              MR_Word ll_backend__prog_rep_tables__Var_160 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep_tables__ArgTypeCodes_14, (MR_Integer) 1)));
              MR_Integer ll_backend__prog_rep_tables__Var_161 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep_tables__ArgTypeCodes_14, (MR_Integer) 0)));

              if ((ll_backend__prog_rep_tables__Var_160 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  MR_Word ll_backend__prog_rep_tables__Var_98;

                  ll_backend__prog_rep_tables__Selector_18 = (MR_Integer) 1;
                  {
                    ll_backend__prog_rep_tables__Var_98 = mdbcomp__rtti_access__encode_num_func_1_f_0(ll_backend__prog_rep_tables__Var_161);
                  }
                  {
                    ll_backend__prog_rep_tables__ArgTypeBytesCord_19 = mercury__cord__from_list_1_f_0(ll_backend__prog_rep_tables__TypeCtorInfo_131_131, ll_backend__prog_rep_tables__Var_98);
                  }
                }
              else
                {
                  MR_Word ll_backend__prog_rep_tables__Var_162 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep_tables__Var_160, (MR_Integer) 1)));
                  MR_Integer ll_backend__prog_rep_tables__Var_163 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep_tables__Var_160, (MR_Integer) 0)));

                  if ((ll_backend__prog_rep_tables__Var_162 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                      MR_Word ll_backend__prog_rep_tables__Var_93;
                      MR_Word ll_backend__prog_rep_tables__Var_94;
                      MR_Word ll_backend__prog_rep_tables__Var_95;
                      MR_Word ll_backend__prog_rep_tables__Var_96;

                      ll_backend__prog_rep_tables__Selector_18 = (MR_Integer) 2;
                      {
                        ll_backend__prog_rep_tables__Var_94 = mdbcomp__rtti_access__encode_num_func_1_f_0(ll_backend__prog_rep_tables__Var_161);
                      }
                      {
                        ll_backend__prog_rep_tables__Var_93 = mercury__cord__from_list_1_f_0(ll_backend__prog_rep_tables__TypeCtorInfo_131_131, ll_backend__prog_rep_tables__Var_94);
                      }
                      {
                        ll_backend__prog_rep_tables__Var_96 = mdbcomp__rtti_access__encode_num_func_1_f_0(ll_backend__prog_rep_tables__Var_163);
                      }
                      {
                        ll_backend__prog_rep_tables__Var_95 = mercury__cord__from_list_1_f_0(ll_backend__prog_rep_tables__TypeCtorInfo_131_131, ll_backend__prog_rep_tables__Var_96);
                      }
                      {
                        ll_backend__prog_rep_tables__ArgTypeBytesCord_19 = mercury__cord__f_43_43_2_f_0(ll_backend__prog_rep_tables__TypeCtorInfo_131_131, ll_backend__prog_rep_tables__Var_93, ll_backend__prog_rep_tables__Var_95);
                      }
                    }
                  else
                    {
                      MR_Word ll_backend__prog_rep_tables__Var_164 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep_tables__Var_162, (MR_Integer) 1)));
                      MR_Integer ll_backend__prog_rep_tables__Var_165 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep_tables__Var_162, (MR_Integer) 0)));

                      if ((ll_backend__prog_rep_tables__Var_164 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                        {
                          MR_Word ll_backend__prog_rep_tables__Var_84;
                          MR_Word ll_backend__prog_rep_tables__Var_85;
                          MR_Word ll_backend__prog_rep_tables__Var_86;
                          MR_Word ll_backend__prog_rep_tables__Var_87;
                          MR_Word ll_backend__prog_rep_tables__Var_88;
                          MR_Word ll_backend__prog_rep_tables__Var_89;
                          MR_Word ll_backend__prog_rep_tables__Var_90;

                          ll_backend__prog_rep_tables__Selector_18 = (MR_Integer) 3;
                          {
                            ll_backend__prog_rep_tables__Var_85 = mdbcomp__rtti_access__encode_num_func_1_f_0(ll_backend__prog_rep_tables__Var_161);
                          }
                          {
                            ll_backend__prog_rep_tables__Var_84 = mercury__cord__from_list_1_f_0(ll_backend__prog_rep_tables__TypeCtorInfo_131_131, ll_backend__prog_rep_tables__Var_85);
                          }
                          {
                            ll_backend__prog_rep_tables__Var_88 = mdbcomp__rtti_access__encode_num_func_1_f_0(ll_backend__prog_rep_tables__Var_163);
                          }
                          {
                            ll_backend__prog_rep_tables__Var_87 = mercury__cord__from_list_1_f_0(ll_backend__prog_rep_tables__TypeCtorInfo_131_131, ll_backend__prog_rep_tables__Var_88);
                          }
                          {
                            ll_backend__prog_rep_tables__Var_90 = mdbcomp__rtti_access__encode_num_func_1_f_0(ll_backend__prog_rep_tables__Var_165);
                          }
                          {
                            ll_backend__prog_rep_tables__Var_89 = mercury__cord__from_list_1_f_0(ll_backend__prog_rep_tables__TypeCtorInfo_131_131, ll_backend__prog_rep_tables__Var_90);
                          }
                          {
                            ll_backend__prog_rep_tables__Var_86 = mercury__cord__f_43_43_2_f_0(ll_backend__prog_rep_tables__TypeCtorInfo_131_131, ll_backend__prog_rep_tables__Var_87, ll_backend__prog_rep_tables__Var_89);
                          }
                          {
                            ll_backend__prog_rep_tables__ArgTypeBytesCord_19 = mercury__cord__f_43_43_2_f_0(ll_backend__prog_rep_tables__TypeCtorInfo_131_131, ll_backend__prog_rep_tables__Var_84, ll_backend__prog_rep_tables__Var_86);
                          }
                        }
                      else
                        {
                          ll_backend__prog_rep_tables__Selector_18 = (MR_Integer) 4;
                          {
                            ll_backend__prog_rep_tables__encode_arg_type_codes_2_p_0(ll_backend__prog_rep_tables__ArgTypeCodes_14, &ll_backend__prog_rep_tables__ArgTypeBytesCord_19);
                          }
                        }
                    }
                }
            }
          {
            ll_backend__prog_rep_tables__Var_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__prog_rep_tables__Var_100, 0) = ((MR_Box) (ll_backend__prog_rep_tables__Selector_18));
            MR_hl_field(MR_mktag(1), ll_backend__prog_rep_tables__Var_100, 1) = ((MR_Box) (ll_backend__prog_rep_tables__TypeCtorSymNameBytes_17));
          }
          {
            ll_backend__prog_rep_tables__Var_99 = mercury__cord__from_list_1_f_0(ll_backend__prog_rep_tables__TypeCtorInfo_131_131, ll_backend__prog_rep_tables__Var_100);
          }
          {
            ll_backend__prog_rep_tables__TypeBytesCord_28 = mercury__cord__f_43_43_2_f_0(ll_backend__prog_rep_tables__TypeCtorInfo_131_131, ll_backend__prog_rep_tables__Var_99, ll_backend__prog_rep_tables__ArgTypeBytesCord_19);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ll_backend__prog_rep_tables__BuiltinType_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__prog_rep_tables__Type_7, (MR_Integer) 0)));
          MR_Integer ll_backend__prog_rep_tables__Selector_106;

          switch (MR_tag((MR_Word) ll_backend__prog_rep_tables__BuiltinType_29)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(ll_backend__prog_rep_tables__BuiltinType_29)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  ll_backend__prog_rep_tables__Selector_106 = (MR_Integer) 7;
                  break;
                case (MR_Integer) 1:
                  ll_backend__prog_rep_tables__Selector_106 = (MR_Integer) 8;
                  break;
                case (MR_Integer) 2:
                  ll_backend__prog_rep_tables__Selector_106 = (MR_Integer) 9;
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ll_backend__prog_rep_tables__Var_159 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep_tables__BuiltinType_29, (MR_Integer) 0)));

                ll_backend__prog_rep_tables__Selector_106 = ((&ll_backend__prog_rep_tables_vector_common_4[0 + ll_backend__prog_rep_tables__Var_159]))->ll_backend__prog_rep_tables__vector_common_type_4_0__vct_4_f_0;
              }
              break;
          }
          {
            ll_backend__prog_rep_tables__TypeBytesCord_28 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (ll_backend__prog_rep_tables__Selector_106)));
          }
          *ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_47 = ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_0_46;
          ll_backend__prog_rep_tables__STATE_VARIABLE_TypeTable_76_76 = ll_backend__prog_rep_tables__STATE_VARIABLE_TypeTable_0_48;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep_tables__Type_7, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ll_backend__prog_rep_tables__TypeCtorInfo_142_142 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
              MR_Word ll_backend__prog_rep_tables__Var_65;
              MR_Word ll_backend__prog_rep_tables__ArgTypes_108 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep_tables__Type_7, (MR_Integer) 1)));
              MR_Word ll_backend__prog_rep_tables__ArgTypeCodes_110;
              MR_Word ll_backend__prog_rep_tables__ArgTypeBytesCord_112;
              MR_Word ll_backend__prog_rep_tables___Kind_107 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep_tables__Type_7, (MR_Integer) 2)));
              MR_Box ll_backend__prog_rep_tables__conv14_STATE_VARIABLE_StringTable_47;
              MR_Box ll_backend__prog_rep_tables__conv13_STATE_VARIABLE_TypeTable_76_76;

              {
                mercury__list__map_foldl2_7_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ll_backend__prog_rep_tables__TypeCtorInfo_142_142, (MR_Word) &ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_string_table_info_0, (MR_Word) &ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_type_table_info_0, (MR_Word) &ll_backend__prog_rep_tables_scalar_common_2[6], ll_backend__prog_rep_tables__ArgTypes_108, &ll_backend__prog_rep_tables__ArgTypeCodes_110, ((MR_Box) (ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_0_46)), &ll_backend__prog_rep_tables__conv14_STATE_VARIABLE_StringTable_47, ((MR_Box) (ll_backend__prog_rep_tables__STATE_VARIABLE_TypeTable_0_48)), &ll_backend__prog_rep_tables__conv13_STATE_VARIABLE_TypeTable_76_76);
              }
              *ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_47 = ((MR_Word) ll_backend__prog_rep_tables__conv14_STATE_VARIABLE_StringTable_47);
              ll_backend__prog_rep_tables__STATE_VARIABLE_TypeTable_76_76 = ((MR_Word) ll_backend__prog_rep_tables__conv13_STATE_VARIABLE_TypeTable_76_76);
              {
                ll_backend__prog_rep_tables__encode_arg_type_codes_2_p_0(ll_backend__prog_rep_tables__ArgTypeCodes_110, &ll_backend__prog_rep_tables__ArgTypeBytesCord_112);
              }
              {
                ll_backend__prog_rep_tables__Var_65 = mercury__cord__singleton_1_f_0(ll_backend__prog_rep_tables__TypeCtorInfo_142_142, ((MR_Box) ((MR_Integer) 10)));
              }
              {
                ll_backend__prog_rep_tables__TypeBytesCord_28 = mercury__cord__f_43_43_2_f_0(ll_backend__prog_rep_tables__TypeCtorInfo_142_142, ll_backend__prog_rep_tables__Var_65, ll_backend__prog_rep_tables__ArgTypeBytesCord_112);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ll_backend__prog_rep_tables__TypeCtorInfo_152_152 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
              MR_Word ll_backend__prog_rep_tables__PorF_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep_tables__Type_7, (MR_Integer) 1)));
              MR_Word ll_backend__prog_rep_tables__Var_61;
              MR_Word ll_backend__prog_rep_tables__ArgTypes_113 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep_tables__Type_7, (MR_Integer) 2)));
              MR_Word ll_backend__prog_rep_tables__ArgTypeCodes_114;
              MR_Integer ll_backend__prog_rep_tables__Selector_115;
              MR_Word ll_backend__prog_rep_tables__ArgTypeBytesCord_116;
              MR_Word ll_backend__prog_rep_tables___HOInstInfo_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep_tables__Type_7, (MR_Integer) 3)));
              MR_Word ll_backend__prog_rep_tables___Purity_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__prog_rep_tables__Type_7, (MR_Integer) 4)));
              MR_Box ll_backend__prog_rep_tables__conv9_STATE_VARIABLE_StringTable_47;
              MR_Box ll_backend__prog_rep_tables__conv8_STATE_VARIABLE_TypeTable_76_76;

              {
                mercury__list__map_foldl2_7_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ll_backend__prog_rep_tables__TypeCtorInfo_152_152, (MR_Word) &ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_string_table_info_0, (MR_Word) &ll_backend__prog_rep_tables__ll_backend__prog_rep_tables__type_ctor_info_type_table_info_0, (MR_Word) &ll_backend__prog_rep_tables_scalar_common_2[5], ll_backend__prog_rep_tables__ArgTypes_113, &ll_backend__prog_rep_tables__ArgTypeCodes_114, ((MR_Box) (ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_0_46)), &ll_backend__prog_rep_tables__conv9_STATE_VARIABLE_StringTable_47, ((MR_Box) (ll_backend__prog_rep_tables__STATE_VARIABLE_TypeTable_0_48)), &ll_backend__prog_rep_tables__conv8_STATE_VARIABLE_TypeTable_76_76);
              }
              *ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_47 = ((MR_Word) ll_backend__prog_rep_tables__conv9_STATE_VARIABLE_StringTable_47);
              ll_backend__prog_rep_tables__STATE_VARIABLE_TypeTable_76_76 = ((MR_Word) ll_backend__prog_rep_tables__conv8_STATE_VARIABLE_TypeTable_76_76);
              {
                ll_backend__prog_rep_tables__encode_arg_type_codes_2_p_0(ll_backend__prog_rep_tables__ArgTypeCodes_114, &ll_backend__prog_rep_tables__ArgTypeBytesCord_116);
              }
              switch (ll_backend__prog_rep_tables__PorF_30) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  ll_backend__prog_rep_tables__Selector_115 = (MR_Integer) 12;
                  break;
                case (MR_Integer) 0:
                  ll_backend__prog_rep_tables__Selector_115 = (MR_Integer) 11;
                  break;
              }
              {
                ll_backend__prog_rep_tables__Var_61 = mercury__cord__singleton_1_f_0(ll_backend__prog_rep_tables__TypeCtorInfo_152_152, ((MR_Box) (ll_backend__prog_rep_tables__Selector_115)));
              }
              {
                ll_backend__prog_rep_tables__TypeBytesCord_28 = mercury__cord__f_43_43_2_f_0(ll_backend__prog_rep_tables__TypeCtorInfo_152_152, ll_backend__prog_rep_tables__Var_61, ll_backend__prog_rep_tables__ArgTypeBytesCord_116);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.prog_rep_tables", (MR_String) "predicate \140ll_backend.prog_rep_tables.add_type_to_table\'/6", (MR_String) "apply_n_type");
                return;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.prog_rep_tables", (MR_String) "predicate \140ll_backend.prog_rep_tables.add_type_to_table\'/6", (MR_String) "kinded_type");
                return;
              }
            }
            break;
        }
        break;
    }
    ll_backend__prog_rep_tables__TypeMap0_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__STATE_VARIABLE_TypeTable_76_76, (MR_Integer) 0)));
    ll_backend__prog_rep_tables__TypeTableCord0_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__STATE_VARIABLE_TypeTable_76_76, (MR_Integer) 1)));
    *ll_backend__prog_rep_tables__TypeCode_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__STATE_VARIABLE_TypeTable_76_76, (MR_Integer) 2)));
    ll_backend__prog_rep_tables__NextTypeNum_43 = (*ll_backend__prog_rep_tables__TypeCode_8 + (MR_Integer) 1);
    ll_backend__prog_rep_tables__TypeCtorInfo_158_158 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    {
      mercury__map__det_insert_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ll_backend__prog_rep_tables__TypeCtorInfo_158_158, ((MR_Box) (ll_backend__prog_rep_tables__Type_7)), ((MR_Box) (*ll_backend__prog_rep_tables__TypeCode_8)), ll_backend__prog_rep_tables__TypeMap0_40, &ll_backend__prog_rep_tables__TypeMap_44);
    }
    {
      ll_backend__prog_rep_tables__TypeTableCord_45 = mercury__cord__f_43_43_2_f_0(ll_backend__prog_rep_tables__TypeCtorInfo_158_158, ll_backend__prog_rep_tables__TypeTableCord0_41, ll_backend__prog_rep_tables__TypeBytesCord_28);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__prog_rep_tables__STATE_VARIABLE_TypeTable_49 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__prog_rep_tables__TypeMap_44));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__prog_rep_tables__TypeTableCord_45));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__prog_rep_tables__NextTypeNum_43));
    }
  }
}

static MR_Box MR_CALL 
ll_backend__prog_rep_tables__encode_arg_type_codes_2_p_0_2(
  MR_Box ll_backend__prog_rep_tables__closure_arg,
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_1)
{
  {
    MR_Box ll_backend__prog_rep_tables__wrapper_arg_2;
    MR_Box ll_backend__prog_rep_tables__closure = ll_backend__prog_rep_tables__closure_arg;
    MR_Word ll_backend__prog_rep_tables__conv1_HeadVar__2_19;

    {
      ll_backend__prog_rep_tables__conv1_HeadVar__2_19 = ll_backend__prog_rep_tables__IntroducedFrom__func__encode_arg_type_codes__416__1_1_f_0(((MR_Word) ll_backend__prog_rep_tables__wrapper_arg_1));
    }
    ll_backend__prog_rep_tables__wrapper_arg_2 = ((MR_Box) (ll_backend__prog_rep_tables__conv1_HeadVar__2_19));
    return ll_backend__prog_rep_tables__wrapper_arg_2;
  }
}

static void MR_CALL 
ll_backend__prog_rep_tables__encode_arg_type_codes_2_p_0_1(
  MR_Box ll_backend__prog_rep_tables__closure_arg,
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_1,
  MR_Box * ll_backend__prog_rep_tables__wrapper_arg_2)
{
  {
    MR_Box ll_backend__prog_rep_tables__closure = ll_backend__prog_rep_tables__closure_arg;
    MR_Word ll_backend__prog_rep_tables__conv0_HeadVar__2_2;

    {
      mdbcomp__rtti_access__encode_num_det_2_p_0(((MR_Integer) ll_backend__prog_rep_tables__wrapper_arg_1), &ll_backend__prog_rep_tables__conv0_HeadVar__2_2);
    }
    *ll_backend__prog_rep_tables__wrapper_arg_2 = ((MR_Box) (ll_backend__prog_rep_tables__conv0_HeadVar__2_2));
  }
}

static void MR_CALL 
ll_backend__prog_rep_tables__encode_arg_type_codes_2_p_0(
  MR_Word ll_backend__prog_rep_tables__ArgTypeCodes_3,
  MR_Word * ll_backend__prog_rep_tables__ArgTypeBytesCord_4)
{
  {
    MR_bool ll_backend__prog_rep_tables__succeeded;
    MR_Word ll_backend__prog_rep_tables__TypeCtorInfo_15_15 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Word ll_backend__prog_rep_tables__TypeInfo_16_16 = (MR_Word) &ll_backend__prog_rep_tables_scalar_common_1[0];
    MR_Word ll_backend__prog_rep_tables__ArgTypeByteLists_5;
    MR_Word ll_backend__prog_rep_tables__ArgTypeByteCords_6;
    MR_Word ll_backend__prog_rep_tables__ArgTypeBytesCord0_7;
    MR_Integer ll_backend__prog_rep_tables__NumArgTypeCodes_8;
    MR_Word ll_backend__prog_rep_tables__Var_11;
    MR_Word ll_backend__prog_rep_tables__Var_12;

    {
      mercury__list__map_3_p_0(ll_backend__prog_rep_tables__TypeCtorInfo_15_15, ll_backend__prog_rep_tables__TypeInfo_16_16, (MR_Word) &ll_backend__prog_rep_tables_scalar_common_2[2], ll_backend__prog_rep_tables__ArgTypeCodes_3, &ll_backend__prog_rep_tables__ArgTypeByteLists_5);
    }
    {
      ll_backend__prog_rep_tables__ArgTypeByteCords_6 = mercury__list__map_2_f_0(ll_backend__prog_rep_tables__TypeInfo_16_16, (MR_Word) &ll_backend__prog_rep_tables_scalar_common_1[1], (MR_Word) &ll_backend__prog_rep_tables_scalar_common_2[3], ll_backend__prog_rep_tables__ArgTypeByteLists_5);
    }
    {
      ll_backend__prog_rep_tables__ArgTypeBytesCord0_7 = mercury__cord__cord_list_to_cord_1_f_0(ll_backend__prog_rep_tables__TypeCtorInfo_15_15, ll_backend__prog_rep_tables__ArgTypeByteCords_6);
    }
    {
      mercury__list__length_2_p_0(ll_backend__prog_rep_tables__TypeCtorInfo_15_15, ll_backend__prog_rep_tables__ArgTypeCodes_3, &ll_backend__prog_rep_tables__NumArgTypeCodes_8);
    }
    {
      ll_backend__prog_rep_tables__Var_12 = mdbcomp__rtti_access__encode_num_func_1_f_0(ll_backend__prog_rep_tables__NumArgTypeCodes_8);
    }
    {
      ll_backend__prog_rep_tables__Var_11 = mercury__cord__from_list_1_f_0(ll_backend__prog_rep_tables__TypeCtorInfo_15_15, ll_backend__prog_rep_tables__Var_12);
    }
    {
      *ll_backend__prog_rep_tables__ArgTypeBytesCord_4 = mercury__cord__f_43_43_2_f_0(ll_backend__prog_rep_tables__TypeCtorInfo_15_15, ll_backend__prog_rep_tables__Var_11, ll_backend__prog_rep_tables__ArgTypeBytesCord0_7);
    }
  }
}

MR_Word MR_CALL 
ll_backend__prog_rep_tables__init_type_table_info_0_f_0(void)
{
  {
    MR_bool ll_backend__prog_rep_tables__succeeded;
    MR_Word ll_backend__prog_rep_tables__HeadVar__1_1;
    MR_Word ll_backend__prog_rep_tables__TypeCtorInfo_6_6 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Word ll_backend__prog_rep_tables__Var_2;
    MR_Word ll_backend__prog_rep_tables__Var_3;

    {
      ll_backend__prog_rep_tables__Var_2 = mercury__map__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ll_backend__prog_rep_tables__TypeCtorInfo_6_6);
    }
    {
      ll_backend__prog_rep_tables__Var_3 = mercury__cord__init_0_f_0(ll_backend__prog_rep_tables__TypeCtorInfo_6_6);
    }
    {
      ll_backend__prog_rep_tables__HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__HeadVar__1_1, 0) = ((MR_Box) (ll_backend__prog_rep_tables__Var_2));
      MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__HeadVar__1_1, 1) = ((MR_Box) (ll_backend__prog_rep_tables__Var_3));
      MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__HeadVar__1_1, 2) = ((MR_Box) ((MR_Integer) 0));
    }
    return ll_backend__prog_rep_tables__HeadVar__1_1;
  }
}

void MR_CALL 
ll_backend__prog_rep_tables__get_string_table_contents_3_p_0(
  MR_Word ll_backend__prog_rep_tables__StringTable_4,
  MR_Word * ll_backend__prog_rep_tables__Strings_5,
  MR_Integer * ll_backend__prog_rep_tables__StringTableSize_6)
{
  {
    MR_bool ll_backend__prog_rep_tables__succeeded;
    MR_Word ll_backend__prog_rep_tables__RevStrings_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__StringTable_4, (MR_Integer) 1)));
    MR_Word ll_backend__prog_rep_tables__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__StringTable_4, (MR_Integer) 0)));

    *ll_backend__prog_rep_tables__StringTableSize_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__StringTable_4, (MR_Integer) 2)));
    {
      mercury__list__reverse_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ll_backend__prog_rep_tables__RevStrings_8, ll_backend__prog_rep_tables__Strings_5);
    }
  }
}

MR_Word MR_CALL 
ll_backend__prog_rep_tables__init_string_table_info_0_f_0(void)
{
  {
    MR_bool ll_backend__prog_rep_tables__succeeded;
    MR_Word ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_6;
    MR_Word ll_backend__prog_rep_tables__StringMap0_3;
    MR_Word ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_7_7;
    MR_Word ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_11_11;
    MR_Integer ll_backend__prog_rep_tables__Var_4;
    MR_Integer ll_backend__prog_rep_tables__Var_5;

    {
      mercury__map__init_1_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, &ll_backend__prog_rep_tables__StringMap0_3);
    }
    {
      ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_7_7, 0) = ((MR_Box) (ll_backend__prog_rep_tables__StringMap0_3));
      MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_7_7, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_7_7, 2) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      ll_backend__prog_rep_tables__lookup_string_in_table_4_p_0((MR_String) "", &ll_backend__prog_rep_tables__Var_4, ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_7_7, &ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_11_11);
    }
    {
      ll_backend__prog_rep_tables__lookup_string_in_table_4_p_0((MR_String) "<too many variables>", &ll_backend__prog_rep_tables__Var_5, ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_11_11, &ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_6);
    }
    return ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_6;
  }
}

void MR_CALL 
ll_backend__prog_rep_tables__lookup_string_in_table_4_p_0(
  MR_String ll_backend__prog_rep_tables__String_5,
  MR_Integer * ll_backend__prog_rep_tables__StringCode_6,
  MR_Word ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_0_14,
  MR_Word * ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_15)
{
  {
    MR_bool ll_backend__prog_rep_tables__succeeded;
    MR_Integer ll_backend__prog_rep_tables__KindCode_8;
    MR_Integer ll_backend__prog_rep_tables__N_10;
    MR_Integer ll_backend__prog_rep_tables__Offset_13;
    MR_Word ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_19_19;
    MR_Word ll_backend__prog_rep_tables__MaybeBaseName_9;
    MR_Integer ll_backend__prog_rep_tables__Var_16;
    MR_Integer ll_backend__prog_rep_tables__Var_17;
    MR_Integer ll_backend__prog_rep_tables__Var_18;
    MR_String ll_backend__prog_rep_tables__NoPrefix_40;

    {
      ll_backend__prog_rep_tables__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "STATE_VARIABLE_", ll_backend__prog_rep_tables__String_5, &ll_backend__prog_rep_tables__NoPrefix_40);
    }
    if (ll_backend__prog_rep_tables__succeeded)
      {
        MR_Word ll_backend__prog_rep_tables__NoPrefixChars_41;
        MR_Word ll_backend__prog_rep_tables__BaseNameChars_42;
        MR_Integer ll_backend__prog_rep_tables__Num_43;
        MR_Word ll_backend__prog_rep_tables__TypeCtorInfo_13_68;
        MR_Word ll_backend__prog_rep_tables__RevString_62;
        MR_Integer ll_backend__prog_rep_tables__Scale_63;
        MR_Word ll_backend__prog_rep_tables__RevRest_64;
        MR_Integer ll_backend__prog_rep_tables__Var_67;

        ll_backend__prog_rep_tables__KindCode_8 = (MR_Integer) 0;
        {
          mercury__string__to_char_list_2_p_0(ll_backend__prog_rep_tables__NoPrefix_40, &ll_backend__prog_rep_tables__NoPrefixChars_41);
        }
        ll_backend__prog_rep_tables__TypeCtorInfo_13_68 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
        {
          mercury__list__reverse_2_p_0(ll_backend__prog_rep_tables__TypeCtorInfo_13_68, ll_backend__prog_rep_tables__NoPrefixChars_41, &ll_backend__prog_rep_tables__RevString_62);
        }
        {
          ll_backend__prog_rep_tables__succeeded = ll_backend__prog_rep_tables__rev_find_number_suffix_6_p_0(ll_backend__prog_rep_tables__RevString_62, (MR_Integer) 0, &ll_backend__prog_rep_tables__Num_43, (MR_Integer) 1, &ll_backend__prog_rep_tables__Scale_63, &ll_backend__prog_rep_tables__RevRest_64);
        }
        if (ll_backend__prog_rep_tables__succeeded)
          {
            ll_backend__prog_rep_tables__Var_67 = (MR_Integer) 1;
            ll_backend__prog_rep_tables__succeeded = (ll_backend__prog_rep_tables__Scale_63 > ll_backend__prog_rep_tables__Var_67);
            if (ll_backend__prog_rep_tables__succeeded)
              {
                {
                  mercury__list__reverse_2_p_0(ll_backend__prog_rep_tables__TypeCtorInfo_13_68, ll_backend__prog_rep_tables__RevRest_64, &ll_backend__prog_rep_tables__BaseNameChars_42);
                }
                ll_backend__prog_rep_tables__succeeded = MR_TRUE;
              }
          }
        if (ll_backend__prog_rep_tables__succeeded)
          {
            MR_String ll_backend__prog_rep_tables__BaseName_44;

            {
              mercury__string__from_char_list_2_p_0(ll_backend__prog_rep_tables__BaseNameChars_42, &ll_backend__prog_rep_tables__BaseName_44);
            }
            {
              ll_backend__prog_rep_tables__MaybeBaseName_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ll_backend__prog_rep_tables__MaybeBaseName_9, 0) = ((MR_Box) (ll_backend__prog_rep_tables__BaseName_44));
            }
            ll_backend__prog_rep_tables__N_10 = (ll_backend__prog_rep_tables__Num_43 + (MR_Integer) 1);
          }
        else
          {
            {
              ll_backend__prog_rep_tables__MaybeBaseName_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ll_backend__prog_rep_tables__MaybeBaseName_9, 0) = ((MR_Box) (ll_backend__prog_rep_tables__NoPrefix_40));
            }
            ll_backend__prog_rep_tables__N_10 = (MR_Integer) 0;
          }
        ll_backend__prog_rep_tables__succeeded = MR_TRUE;
      }
    else
      {
        MR_String ll_backend__prog_rep_tables__NoPrefix_57;

        {
          ll_backend__prog_rep_tables__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "TypeCtorInfo_", ll_backend__prog_rep_tables__String_5, &ll_backend__prog_rep_tables__NoPrefix_57);
        }
        if (ll_backend__prog_rep_tables__succeeded)
          {
            {
              ll_backend__prog_rep_tables__succeeded = mercury__string__to_int_2_p_0(ll_backend__prog_rep_tables__NoPrefix_57, &ll_backend__prog_rep_tables__N_10);
            }
            if (ll_backend__prog_rep_tables__succeeded)
              {
                ll_backend__prog_rep_tables__KindCode_8 = (MR_Integer) 1;
                ll_backend__prog_rep_tables__MaybeBaseName_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                ll_backend__prog_rep_tables__succeeded = MR_TRUE;
              }
          }
        else
          {
            MR_String ll_backend__prog_rep_tables__NoPrefix_55;

            {
              ll_backend__prog_rep_tables__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "TypeInfo_", ll_backend__prog_rep_tables__String_5, &ll_backend__prog_rep_tables__NoPrefix_55);
            }
            if (ll_backend__prog_rep_tables__succeeded)
              {
                {
                  ll_backend__prog_rep_tables__succeeded = mercury__string__to_int_2_p_0(ll_backend__prog_rep_tables__NoPrefix_55, &ll_backend__prog_rep_tables__N_10);
                }
                if (ll_backend__prog_rep_tables__succeeded)
                  {
                    ll_backend__prog_rep_tables__KindCode_8 = (MR_Integer) 2;
                    ll_backend__prog_rep_tables__MaybeBaseName_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    ll_backend__prog_rep_tables__succeeded = MR_TRUE;
                  }
              }
            else
              {
                MR_String ll_backend__prog_rep_tables__NoPrefix_53;

                {
                  ll_backend__prog_rep_tables__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "PolyConst", ll_backend__prog_rep_tables__String_5, &ll_backend__prog_rep_tables__NoPrefix_53);
                }
                if (ll_backend__prog_rep_tables__succeeded)
                  {
                    {
                      ll_backend__prog_rep_tables__succeeded = mercury__string__to_int_2_p_0(ll_backend__prog_rep_tables__NoPrefix_53, &ll_backend__prog_rep_tables__N_10);
                    }
                    if (ll_backend__prog_rep_tables__succeeded)
                      {
                        ll_backend__prog_rep_tables__KindCode_8 = (MR_Integer) 5;
                        ll_backend__prog_rep_tables__MaybeBaseName_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                        ll_backend__prog_rep_tables__succeeded = MR_TRUE;
                      }
                  }
              }
          }
      }
    if (ll_backend__prog_rep_tables__succeeded)
      {
        ll_backend__prog_rep_tables__Var_17 = (MR_Integer) 1;
        ll_backend__prog_rep_tables__Var_18 = (MR_Integer) 10;
        ll_backend__prog_rep_tables__Var_16 = (ll_backend__prog_rep_tables__Var_17 << ll_backend__prog_rep_tables__Var_18);
        ll_backend__prog_rep_tables__succeeded = (ll_backend__prog_rep_tables__N_10 < ll_backend__prog_rep_tables__Var_16);
        if (ll_backend__prog_rep_tables__succeeded)
          {
            if ((ll_backend__prog_rep_tables__MaybeBaseName_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                ll_backend__prog_rep_tables__Offset_13 = (MR_Integer) 0;
                ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_19_19 = ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_0_14;
                ll_backend__prog_rep_tables__succeeded = MR_TRUE;
              }
            else
              {
                MR_String ll_backend__prog_rep_tables__BaseName_11 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep_tables__MaybeBaseName_9, (MR_Integer) 0)));
                MR_Word ll_backend__prog_rep_tables__MaybeOffset_12;
                MR_Integer ll_backend__prog_rep_tables__Var_20;
                MR_Integer ll_backend__prog_rep_tables__Var_21;
                MR_Integer ll_backend__prog_rep_tables__Var_22;
                MR_Word ll_backend__prog_rep_tables__TableMap0_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_0_14, (MR_Integer) 0)));
                MR_Word ll_backend__prog_rep_tables__TableList0_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_0_14, (MR_Integer) 1)));
                MR_Integer ll_backend__prog_rep_tables__TableOffset0_76 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_0_14, (MR_Integer) 2)));
                MR_Integer ll_backend__prog_rep_tables__OldOffset_77;
                MR_Box ll_backend__prog_rep_tables__conv0_OldOffset_77;

                {
                  ll_backend__prog_rep_tables__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ll_backend__prog_rep_tables__TableMap0_74, ((MR_Box) (ll_backend__prog_rep_tables__BaseName_11)), &ll_backend__prog_rep_tables__conv0_OldOffset_77);
                }
                if (ll_backend__prog_rep_tables__succeeded)
                  {
                    ll_backend__prog_rep_tables__OldOffset_77 = ((MR_Integer) ll_backend__prog_rep_tables__conv0_OldOffset_77);
                    ll_backend__prog_rep_tables__succeeded = MR_TRUE;
                  }
                if (ll_backend__prog_rep_tables__succeeded)
                  {
                    {
                      ll_backend__prog_rep_tables__MaybeOffset_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ll_backend__prog_rep_tables__MaybeOffset_12, 0) = ((MR_Box) (ll_backend__prog_rep_tables__OldOffset_77));
                    }
                    ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_19_19 = ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_0_14;
                  }
                else
                  {
                    MR_Integer ll_backend__prog_rep_tables__TableOffset_79;
                    MR_Integer ll_backend__prog_rep_tables__Length_78;
                    MR_Integer ll_backend__prog_rep_tables__Var_82;
                    MR_Integer ll_backend__prog_rep_tables__Var_84;

                    {
                      ll_backend__prog_rep_tables__Length_78 = mercury__string__count_utf8_code_units_1_f_0(ll_backend__prog_rep_tables__BaseName_11);
                    }
                    ll_backend__prog_rep_tables__Var_82 = (ll_backend__prog_rep_tables__TableOffset0_76 + ll_backend__prog_rep_tables__Length_78);
                    ll_backend__prog_rep_tables__TableOffset_79 = (ll_backend__prog_rep_tables__Var_82 + (MR_Integer) 1);
                    {
                      ll_backend__prog_rep_tables__Var_84 = mercury__int__f_60_60_2_f_0((MR_Integer) 1, (MR_Integer) 30);
                    }
                    ll_backend__prog_rep_tables__succeeded = (ll_backend__prog_rep_tables__TableOffset_79 < ll_backend__prog_rep_tables__Var_84);
                    if (ll_backend__prog_rep_tables__succeeded)
                      {
                        MR_Word ll_backend__prog_rep_tables__TableMap_80;
                        MR_Word ll_backend__prog_rep_tables__TableList_81;

                        {
                          ll_backend__prog_rep_tables__MaybeOffset_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), ll_backend__prog_rep_tables__MaybeOffset_12, 0) = ((MR_Box) (ll_backend__prog_rep_tables__TableOffset0_76));
                        }
                        {
                          mercury__map__det_insert_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (ll_backend__prog_rep_tables__BaseName_11)), ((MR_Box) (ll_backend__prog_rep_tables__TableOffset0_76)), ll_backend__prog_rep_tables__TableMap0_74, &ll_backend__prog_rep_tables__TableMap_80);
                        }
                        {
                          ll_backend__prog_rep_tables__TableList_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), ll_backend__prog_rep_tables__TableList_81, 0) = ((MR_Box) (ll_backend__prog_rep_tables__BaseName_11));
                          MR_hl_field(MR_mktag(1), ll_backend__prog_rep_tables__TableList_81, 1) = ((MR_Box) (ll_backend__prog_rep_tables__TableList0_75));
                        }
                        {
                          ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_19_19, 0) = ((MR_Box) (ll_backend__prog_rep_tables__TableMap_80));
                          MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_19_19, 1) = ((MR_Box) (ll_backend__prog_rep_tables__TableList_81));
                          MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_19_19, 2) = ((MR_Box) (ll_backend__prog_rep_tables__TableOffset_79));
                        }
                      }
                    else
                      {
                        ll_backend__prog_rep_tables__MaybeOffset_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                        ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_19_19 = ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_0_14;
                      }
                  }
                ll_backend__prog_rep_tables__succeeded = ((MR_tag((MR_Word) ll_backend__prog_rep_tables__MaybeOffset_12)) == (MR_mktag((MR_Integer) 1)));
                if (ll_backend__prog_rep_tables__succeeded)
                  {
                    ll_backend__prog_rep_tables__Offset_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep_tables__MaybeOffset_12, (MR_Integer) 0)));
                    ll_backend__prog_rep_tables__Var_21 = (MR_Integer) 1;
                    ll_backend__prog_rep_tables__Var_22 = (MR_Integer) 16;
                    ll_backend__prog_rep_tables__Var_20 = (ll_backend__prog_rep_tables__Var_21 << ll_backend__prog_rep_tables__Var_22);
                    ll_backend__prog_rep_tables__succeeded = (ll_backend__prog_rep_tables__Offset_13 < ll_backend__prog_rep_tables__Var_20);
                  }
              }
          }
      }
    if (ll_backend__prog_rep_tables__succeeded)
      {
        MR_Integer ll_backend__prog_rep_tables__Var_23;
        MR_Integer ll_backend__prog_rep_tables__Var_24;
        MR_Integer ll_backend__prog_rep_tables__Var_26;
        MR_Integer ll_backend__prog_rep_tables__Var_28;
        MR_Integer ll_backend__prog_rep_tables__Var_30;

        *ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_15 = ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_19_19;
        ll_backend__prog_rep_tables__Var_26 = (ll_backend__prog_rep_tables__KindCode_8 << (MR_Integer) 1);
        ll_backend__prog_rep_tables__Var_24 = ((MR_Integer) 1 | ll_backend__prog_rep_tables__Var_26);
        ll_backend__prog_rep_tables__Var_28 = (ll_backend__prog_rep_tables__N_10 << (MR_Integer) 6);
        ll_backend__prog_rep_tables__Var_23 = (ll_backend__prog_rep_tables__Var_24 | ll_backend__prog_rep_tables__Var_28);
        ll_backend__prog_rep_tables__Var_30 = (ll_backend__prog_rep_tables__Offset_13 << (MR_Integer) 16);
        *ll_backend__prog_rep_tables__StringCode_6 = (ll_backend__prog_rep_tables__Var_23 | ll_backend__prog_rep_tables__Var_30);
      }
    else
      {
        MR_Word ll_backend__prog_rep_tables__MaybeOffset_34;
        MR_Integer ll_backend__prog_rep_tables__Offset_35;

        {
          ll_backend__prog_rep_tables__lookup_raw_string_in_table_4_p_0(ll_backend__prog_rep_tables__String_5, &ll_backend__prog_rep_tables__MaybeOffset_34, ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_0_14, ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_15);
        }
        if ((ll_backend__prog_rep_tables__MaybeOffset_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          ll_backend__prog_rep_tables__Offset_35 = (MR_Integer) 1;
        else
          ll_backend__prog_rep_tables__Offset_35 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep_tables__MaybeOffset_34, (MR_Integer) 0)));
        *ll_backend__prog_rep_tables__StringCode_6 = (ll_backend__prog_rep_tables__Offset_35 << (MR_Integer) 1);
      }
  }
}

static void MR_CALL 
ll_backend__prog_rep_tables__lookup_raw_string_in_table_4_p_0(
  MR_String ll_backend__prog_rep_tables__String_5,
  MR_Word * ll_backend__prog_rep_tables__MaybeOffset_6,
  MR_Word ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_0_16,
  MR_Word * ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_17)
{
  {
    MR_bool ll_backend__prog_rep_tables__succeeded;
    MR_Word ll_backend__prog_rep_tables__TableMap0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_0_16, (MR_Integer) 0)));
    MR_Word ll_backend__prog_rep_tables__TableList0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_0_16, (MR_Integer) 1)));
    MR_Integer ll_backend__prog_rep_tables__TableOffset0_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_0_16, (MR_Integer) 2)));
    MR_Integer ll_backend__prog_rep_tables__OldOffset_11;
    MR_Box ll_backend__prog_rep_tables__conv0_OldOffset_11;

    {
      ll_backend__prog_rep_tables__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ll_backend__prog_rep_tables__TableMap0_8, ((MR_Box) (ll_backend__prog_rep_tables__String_5)), &ll_backend__prog_rep_tables__conv0_OldOffset_11);
    }
    if (ll_backend__prog_rep_tables__succeeded)
      {
        ll_backend__prog_rep_tables__OldOffset_11 = ((MR_Integer) ll_backend__prog_rep_tables__conv0_OldOffset_11);
        ll_backend__prog_rep_tables__succeeded = MR_TRUE;
      }
    if (ll_backend__prog_rep_tables__succeeded)
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *ll_backend__prog_rep_tables__MaybeOffset_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__prog_rep_tables__OldOffset_11));
        }
        *ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_17 = ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_0_16;
      }
    else
      {
        MR_Integer ll_backend__prog_rep_tables__TableOffset_13;
        MR_Integer ll_backend__prog_rep_tables__Length_12;
        MR_Integer ll_backend__prog_rep_tables__Var_18;
        MR_Integer ll_backend__prog_rep_tables__Var_20;

        {
          ll_backend__prog_rep_tables__Length_12 = mercury__string__count_utf8_code_units_1_f_0(ll_backend__prog_rep_tables__String_5);
        }
        ll_backend__prog_rep_tables__Var_18 = (ll_backend__prog_rep_tables__TableOffset0_10 + ll_backend__prog_rep_tables__Length_12);
        ll_backend__prog_rep_tables__TableOffset_13 = (ll_backend__prog_rep_tables__Var_18 + (MR_Integer) 1);
        {
          ll_backend__prog_rep_tables__Var_20 = mercury__int__f_60_60_2_f_0((MR_Integer) 1, (MR_Integer) 30);
        }
        ll_backend__prog_rep_tables__succeeded = (ll_backend__prog_rep_tables__TableOffset_13 < ll_backend__prog_rep_tables__Var_20);
        if (ll_backend__prog_rep_tables__succeeded)
          {
            MR_Word ll_backend__prog_rep_tables__TableMap_14;
            MR_Word ll_backend__prog_rep_tables__TableList_15;

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *ll_backend__prog_rep_tables__MaybeOffset_6 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__prog_rep_tables__TableOffset0_10));
            }
            {
              mercury__map__det_insert_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (ll_backend__prog_rep_tables__String_5)), ((MR_Box) (ll_backend__prog_rep_tables__TableOffset0_10)), ll_backend__prog_rep_tables__TableMap0_8, &ll_backend__prog_rep_tables__TableMap_14);
            }
            {
              ll_backend__prog_rep_tables__TableList_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ll_backend__prog_rep_tables__TableList_15, 0) = ((MR_Box) (ll_backend__prog_rep_tables__String_5));
              MR_hl_field(MR_mktag(1), ll_backend__prog_rep_tables__TableList_15, 1) = ((MR_Box) (ll_backend__prog_rep_tables__TableList0_9));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              *ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_17 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__prog_rep_tables__TableMap_14));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__prog_rep_tables__TableList_15));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__prog_rep_tables__TableOffset_13));
            }
          }
        else
          {
            *ll_backend__prog_rep_tables__MaybeOffset_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            *ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_17 = ll_backend__prog_rep_tables__STATE_VARIABLE_StringTable_0_16;
          }
      }
  }
}

static MR_bool MR_CALL 
ll_backend__prog_rep_tables__rev_find_number_suffix_6_p_0(
  MR_Word ll_backend__prog_rep_tables__HeadVar__1_1,
  MR_Integer ll_backend__prog_rep_tables__STATE_VARIABLE_Num_0_13,
  MR_Integer * ll_backend__prog_rep_tables__STATE_VARIABLE_Num_14,
  MR_Integer ll_backend__prog_rep_tables__STATE_VARIABLE_Scale_0_15,
  MR_Integer * ll_backend__prog_rep_tables__STATE_VARIABLE_Scale_16,
  MR_Word * ll_backend__prog_rep_tables__RevRest_11)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__prog_rep_tables__succeeded = ((MR_tag((MR_Word) ll_backend__prog_rep_tables__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
        MR_Char ll_backend__prog_rep_tables__RevHead_7;
        MR_Word ll_backend__prog_rep_tables__RevTail_8;
        MR_Integer ll_backend__prog_rep_tables__Digit_12;

        if (ll_backend__prog_rep_tables__succeeded)
          {
            ll_backend__prog_rep_tables__RevHead_7 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep_tables__HeadVar__1_1, (MR_Integer) 0)));
            ll_backend__prog_rep_tables__RevTail_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__prog_rep_tables__HeadVar__1_1, (MR_Integer) 1)));
            {
              ll_backend__prog_rep_tables__succeeded = mercury__char__decimal_digit_to_int_2_p_0(ll_backend__prog_rep_tables__RevHead_7, &ll_backend__prog_rep_tables__Digit_12);
            }
            if (ll_backend__prog_rep_tables__succeeded)
              {
                MR_Integer ll_backend__prog_rep_tables__STATE_VARIABLE_Num_17_17;
                MR_Integer ll_backend__prog_rep_tables__Var_18 = (ll_backend__prog_rep_tables__STATE_VARIABLE_Scale_0_15 * ll_backend__prog_rep_tables__Digit_12);
                MR_Integer ll_backend__prog_rep_tables__STATE_VARIABLE_Scale_19_19;

                ll_backend__prog_rep_tables__STATE_VARIABLE_Num_17_17 = (ll_backend__prog_rep_tables__STATE_VARIABLE_Num_0_13 + ll_backend__prog_rep_tables__Var_18);
                ll_backend__prog_rep_tables__STATE_VARIABLE_Scale_19_19 = (ll_backend__prog_rep_tables__STATE_VARIABLE_Scale_0_15 * (MR_Integer) 10);
                /* direct tailcall eliminated */
                {
                  MR_Word ll_backend__prog_rep_tables__next_value_of_HeadVar__1_1 = ll_backend__prog_rep_tables__RevTail_8;
                  MR_Integer ll_backend__prog_rep_tables__next_value_of_STATE_VARIABLE_Num_0_13 = ll_backend__prog_rep_tables__STATE_VARIABLE_Num_17_17;
                  MR_Integer ll_backend__prog_rep_tables__next_value_of_STATE_VARIABLE_Scale_0_15 = ll_backend__prog_rep_tables__STATE_VARIABLE_Scale_19_19;

                  ll_backend__prog_rep_tables__STATE_VARIABLE_Scale_0_15 = ll_backend__prog_rep_tables__next_value_of_STATE_VARIABLE_Scale_0_15;
                  ll_backend__prog_rep_tables__STATE_VARIABLE_Num_0_13 = ll_backend__prog_rep_tables__next_value_of_STATE_VARIABLE_Num_0_13;
                  ll_backend__prog_rep_tables__HeadVar__1_1 = ll_backend__prog_rep_tables__next_value_of_HeadVar__1_1;
                }
                continue;
              }
            else
              {
                ll_backend__prog_rep_tables__succeeded = (ll_backend__prog_rep_tables__RevHead_7 == (MR_Char) 95);
                if (ll_backend__prog_rep_tables__succeeded)
                  {
                    *ll_backend__prog_rep_tables__RevRest_11 = ll_backend__prog_rep_tables__RevTail_8;
                    *ll_backend__prog_rep_tables__STATE_VARIABLE_Scale_16 = ll_backend__prog_rep_tables__STATE_VARIABLE_Scale_0_15;
                    *ll_backend__prog_rep_tables__STATE_VARIABLE_Num_14 = ll_backend__prog_rep_tables__STATE_VARIABLE_Num_0_13;
                    ll_backend__prog_rep_tables__succeeded = MR_TRUE;
                  }
              }
          }
        return ll_backend__prog_rep_tables__succeeded;
      }
      break;
    }
}

static MR_bool MR_CALL 
ll_backend__prog_rep_tables____Unify____string_table_info_0_0_10001(
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_1,
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_2)
{
  {
    MR_bool ll_backend__prog_rep_tables__succeeded;

    {
      ll_backend__prog_rep_tables__succeeded = ll_backend__prog_rep_tables____Unify____string_table_info_0_0(((MR_Word) ll_backend__prog_rep_tables__wrapper_arg_1), ((MR_Word) ll_backend__prog_rep_tables__wrapper_arg_2));
    }
    return ll_backend__prog_rep_tables__succeeded;
  }
}

static void MR_CALL 
ll_backend__prog_rep_tables____Compare____string_table_info_0_0_10001(
  MR_Box * ll_backend__prog_rep_tables__wrapper_arg_1,
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_2,
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_3)
{
  {
    MR_Word ll_backend__prog_rep_tables__conv0_HeadVar__1_1;

    {
      ll_backend__prog_rep_tables____Compare____string_table_info_0_0(&ll_backend__prog_rep_tables__conv0_HeadVar__1_1, ((MR_Word) ll_backend__prog_rep_tables__wrapper_arg_2), ((MR_Word) ll_backend__prog_rep_tables__wrapper_arg_3));
    }
    *ll_backend__prog_rep_tables__wrapper_arg_1 = ((MR_Box) (ll_backend__prog_rep_tables__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__prog_rep_tables____Unify____type_table_info_0_0_10001(
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_1,
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_2)
{
  {
    MR_bool ll_backend__prog_rep_tables__succeeded;

    {
      ll_backend__prog_rep_tables__succeeded = ll_backend__prog_rep_tables____Unify____type_table_info_0_0(((MR_Word) ll_backend__prog_rep_tables__wrapper_arg_1), ((MR_Word) ll_backend__prog_rep_tables__wrapper_arg_2));
    }
    return ll_backend__prog_rep_tables__succeeded;
  }
}

static void MR_CALL 
ll_backend__prog_rep_tables____Compare____type_table_info_0_0_10001(
  MR_Box * ll_backend__prog_rep_tables__wrapper_arg_1,
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_2,
  MR_Box ll_backend__prog_rep_tables__wrapper_arg_3)
{
  {
    MR_Word ll_backend__prog_rep_tables__conv0_HeadVar__1_1;

    {
      ll_backend__prog_rep_tables____Compare____type_table_info_0_0(&ll_backend__prog_rep_tables__conv0_HeadVar__1_1, ((MR_Word) ll_backend__prog_rep_tables__wrapper_arg_2), ((MR_Word) ll_backend__prog_rep_tables__wrapper_arg_3));
    }
    *ll_backend__prog_rep_tables__wrapper_arg_1 = ((MR_Box) (ll_backend__prog_rep_tables__conv0_HeadVar__1_1));
  }
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

/* :- end_module ll_backend.prog_rep_tables. */
