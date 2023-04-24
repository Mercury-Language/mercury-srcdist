/*
** Automatically generated from `recompilation.m'
** by the Mercury compiler,
** version rotd-2023-04-24
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


// :- module recompilation.
// :- implementation.

/*
INIT mercury__recompilation__init
ENDINIT
*/

#include "recompilation.mih"


#include "assoc_list.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "integer.mih"
#include "libs.mih"
#include "list.mih"
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
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"
#include "varset.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_DuFunctorDesc recompilation__recompilation__du_functor_desc_eqv_expand_info_0_0;

static const MR_FA_TypeInfo_Struct1 recompilation__set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_recomp_item_id_0;

static const MR_PseudoTypeInfo recompilation__recompilation__field_types_eqv_expand_info_0_1[2];

static const MR_DuFunctorDesc recompilation__recompilation__du_functor_desc_eqv_expand_info_0_1;

static const MR_DuFunctorDescPtr recompilation__recompilation__du_stag_ordered_eqv_expand_info_0_0[1];

static const MR_DuFunctorDescPtr recompilation__recompilation__du_stag_ordered_eqv_expand_info_0_1[1];

static const MR_DuPtagLayout recompilation__recompilation__du_ptag_ordered_eqv_expand_info_0[2];

static const MR_DuFunctorDescPtr recompilation__recompilation__du_name_ordered_eqv_expand_info_0[2];

static const MR_Integer recompilation__recompilation__functor_number_map_eqv_expand_info_0[2];

static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_maybe_ignore_0_0;

static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_maybe_ignore_0_1;

static const MR_EnumFunctorDescPtr recompilation__recompilation__enum_ordinal_ordered_maybe_ignore_0[2];

static const MR_EnumFunctorDescPtr recompilation__recompilation__enum_name_ordered_maybe_ignore_0[2];

static const MR_Integer recompilation__recompilation__functor_number_map_maybe_ignore_0[2];

static const MR_FA_TypeInfo_Struct2 recompilation__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_name_arity_0libs__timestamp__type_ctor_info_timestamp_0;

static const MR_FA_TypeInfo_Struct2 recompilation__tree234__ti_tree234_2recompilation__type_ctor_info_recomp_item_name_0libs__timestamp__type_ctor_info_timestamp_0;

static const MR_PseudoTypeInfo recompilation__recompilation__field_types_module_item_version_numbers_0_0[8];

static const MR_ConstString recompilation__recompilation__field_names_module_item_version_numbers_0_0[8];

static const MR_DuFunctorDesc recompilation__recompilation__du_functor_desc_module_item_version_numbers_0_0;

static const MR_DuFunctorDescPtr recompilation__recompilation__du_stag_ordered_module_item_version_numbers_0_0[1];

static const MR_DuPtagLayout recompilation__recompilation__du_ptag_ordered_module_item_version_numbers_0[1];

static const MR_DuFunctorDescPtr recompilation__recompilation__du_name_ordered_module_item_version_numbers_0[1];

static const MR_Integer recompilation__recompilation__functor_number_map_module_item_version_numbers_0[1];

static const MR_FA_TypeInfo_Struct2 recompilation__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0recompilation__type_ctor_info_module_item_version_numbers_0;

static const MR_PseudoTypeInfo recompilation__recompilation__field_types_recomp_item_id_0_0[2];

static const MR_DuArgLocn recompilation__recompilation__field_locns_recomp_item_id_0_0[2];

static const MR_DuFunctorDesc recompilation__recompilation__du_functor_desc_recomp_item_id_0_0;

static const MR_DuFunctorDescPtr recompilation__recompilation__du_stag_ordered_recomp_item_id_0_0[1];

static const MR_DuPtagLayout recompilation__recompilation__du_ptag_ordered_recomp_item_id_0[1];

static const MR_DuFunctorDescPtr recompilation__recompilation__du_name_ordered_recomp_item_id_0[1];

static const MR_Integer recompilation__recompilation__functor_number_map_recomp_item_id_0[1];

static const MR_PseudoTypeInfo recompilation__recompilation__field_types_recomp_item_name_0_0[2];

static const MR_DuFunctorDesc recompilation__recompilation__du_functor_desc_recomp_item_name_0_0;

static const MR_DuFunctorDescPtr recompilation__recompilation__du_stag_ordered_recomp_item_name_0_0[1];

static const MR_DuPtagLayout recompilation__recompilation__du_ptag_ordered_recomp_item_name_0[1];

static const MR_DuFunctorDescPtr recompilation__recompilation__du_name_ordered_recomp_item_name_0[1];

static const MR_Integer recompilation__recompilation__functor_number_map_recomp_item_name_0[1];

static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_recomp_item_type_0_0;

static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_recomp_item_type_0_1;

static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_recomp_item_type_0_2;

static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_recomp_item_type_0_3;

static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_recomp_item_type_0_4;

static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_recomp_item_type_0_5;

static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_recomp_item_type_0_6;

static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_recomp_item_type_0_7;

static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_recomp_item_type_0_8;

static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_recomp_item_type_0_9;

static const MR_EnumFunctorDescPtr recompilation__recompilation__enum_ordinal_ordered_recomp_item_type_0[10];

static const MR_EnumFunctorDescPtr recompilation__recompilation__enum_name_ordered_recomp_item_type_0[10];

static const MR_Integer recompilation__recompilation__functor_number_map_recomp_item_type_0[10];

static const MR_FA_TypeInfo_Struct2 recompilation__tree234__ti_tree234_2recompilation__type_ctor_info_recomp_item_id_0set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_recomp_item_id_0;

static const MR_PseudoTypeInfo recompilation__recompilation__field_types_recompilation_info_0_0[4];

static const MR_ConstString recompilation__recompilation__field_names_recompilation_info_0_0[4];

static const MR_DuFunctorDesc recompilation__recompilation__du_functor_desc_recompilation_info_0_0;

static const MR_DuFunctorDescPtr recompilation__recompilation__du_stag_ordered_recompilation_info_0_0[1];

static const MR_DuPtagLayout recompilation__recompilation__du_ptag_ordered_recompilation_info_0[1];

static const MR_DuFunctorDescPtr recompilation__recompilation__du_name_ordered_recompilation_info_0[1];

static const MR_Integer recompilation__recompilation__functor_number_map_recompilation_info_0[1];

static const MR_FA_TypeInfo_Struct2 recompilation__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_TypeInfo_Struct2 recompilation__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_name_arity_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_used_item_type_0_0;

static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_used_item_type_0_1;

static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_used_item_type_0_2;

static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_used_item_type_0_3;

static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_used_item_type_0_4;

static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_used_item_type_0_5;

static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_used_item_type_0_6;

static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_used_item_type_0_7;

static const MR_EnumFunctorDescPtr recompilation__recompilation__enum_ordinal_ordered_used_item_type_0[8];

static const MR_EnumFunctorDescPtr recompilation__recompilation__enum_name_ordered_used_item_type_0[8];

static const MR_Integer recompilation__recompilation__functor_number_map_used_item_type_0[8];

static const MR_PseudoTypeInfo recompilation__recompilation__field_types_used_items_0_0[8];

static const MR_ConstString recompilation__recompilation__field_names_used_items_0_0[8];

static const MR_DuFunctorDesc recompilation__recompilation__du_functor_desc_used_items_0_0;

static const MR_DuFunctorDescPtr recompilation__recompilation__du_stag_ordered_used_items_0_0[1];

static const MR_DuPtagLayout recompilation__recompilation__du_ptag_ordered_used_items_0[1];

static const MR_DuFunctorDescPtr recompilation__recompilation__du_name_ordered_used_items_0[1];

static const MR_Integer recompilation__recompilation__functor_number_map_used_items_0[1];

static MR_bool MR_CALL 
recompilation____Unify____eqv_expand_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
recompilation____Compare____eqv_expand_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
recompilation____Unify____maybe_ignore_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
recompilation____Compare____maybe_ignore_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
recompilation____Unify____module_item_version_numbers_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
recompilation____Compare____module_item_version_numbers_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
recompilation____Unify____module_item_version_numbers_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
recompilation____Compare____module_item_version_numbers_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
recompilation____Unify____module_qualifier_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
recompilation____Compare____module_qualifier_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
recompilation____Unify____name_arity_version_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
recompilation____Compare____name_arity_version_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
recompilation____Unify____recomp_item_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
recompilation____Compare____recomp_item_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
recompilation____Unify____recomp_item_name_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
recompilation____Compare____recomp_item_name_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
recompilation____Unify____recomp_item_name_version_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
recompilation____Compare____recomp_item_name_version_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
recompilation____Unify____recomp_item_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
recompilation____Compare____recomp_item_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
recompilation____Unify____recompilation_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
recompilation____Compare____recompilation_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
recompilation____Unify____simple_item_set_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
recompilation____Compare____simple_item_set_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
recompilation____Unify____used_item_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
recompilation____Compare____used_item_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
recompilation____Unify____used_items_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
recompilation____Compare____used_items_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
recompilation____Unify____version_number_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
recompilation____Compare____version_number_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box recompilation_scalar_common_1[1][2];

static /* final */ const MR_Box recompilation_scalar_common_2[6][3];

static /* final */ const MR_Box recompilation_scalar_common_3[1][1];


struct recompilation__vector_common_type_4_0_s {
  const MR_String recompilation__vector_common_type_4_0__vct_4_f_0;
  const MR_Word recompilation__vector_common_type_4_0__vct_4_f_1;
};

static /* final */ const struct recompilation__vector_common_type_4_0_s recompilation_vector_common_4[32];

struct recompilation__vector_common_type_5_0_s {
  const MR_String recompilation__vector_common_type_5_0__vct_5_f_0;
};

static /* final */ const struct recompilation__vector_common_type_5_0_s recompilation_vector_common_5[10];

struct recompilation__vector_common_type_6_0_s {
  const MR_Word recompilation__vector_common_type_6_0__vct_6_f_0;
};

static /* final */ const struct recompilation__vector_common_type_6_0_s recompilation_vector_common_6[8];



static /* final */ const MR_Box recompilation_scalar_common_1[1][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_recomp_item_id_0))
  },
};

static /* final */ const MR_Box recompilation_scalar_common_2[6][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0)),
    ((MR_Box) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_recomp_item_name_0)),
    ((MR_Box) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_module_item_version_numbers_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_recomp_item_id_0)),
    ((MR_Box) (&recompilation_scalar_common_1[0]))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0)),
    ((MR_Box) (&recompilation_scalar_common_2[0]))
  },
};

static /* final */ const MR_Box recompilation_scalar_common_3[1][1] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_String) ""))
  },
};


static /* final */ const struct recompilation__vector_common_type_4_0_s recompilation_vector_common_4[32] = {
  /* row   0 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row   1 */
  {
    (MR_String) "foreign_proc",
    (MR_Integer) 9
  },
  /* row   2 */
  {
    (MR_String) "functor",
    (MR_Integer) 5
  },
  /* row   3 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row   4 */
  {
    (MR_String) "predicate",
    (MR_Integer) 6
  },
  /* row   5 */
  {
    (MR_String) "typeclass",
    (MR_Integer) 4
  },
  /* row   6 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row   7 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row   8 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row   9 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  10 */
  {
    (MR_String) "function",
    (MR_Integer) 7
  },
  /* row  11 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  12 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  13 */
  {
    (MR_String) "mode",
    (MR_Integer) 3
  },
  /* row  14 */
  {
    (MR_String) "type",
    (MR_Integer) 0
  },
  /* row  15 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  16 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  17 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  18 */
  {
    (MR_String) "inst",
    (MR_Integer) 2
  },
  /* row  19 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  20 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  21 */
  {
    (MR_String) "mutable",
    (MR_Integer) 8
  },
  /* row  22 */
  {
    (MR_String) "type_body",
    (MR_Integer) 1
  },
  /* row  23 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  24 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  25 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  26 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  27 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  28 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  29 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  30 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  31 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
};

static /* final */ const struct recompilation__vector_common_type_5_0_s recompilation_vector_common_5[10] = {
  /* row   0 */   { (MR_String) "type" },
  /* row   1 */   { (MR_String) "type_body" },
  /* row   2 */   { (MR_String) "inst" },
  /* row   3 */   { (MR_String) "mode" },
  /* row   4 */   { (MR_String) "typeclass" },
  /* row   5 */   { (MR_String) "functor" },
  /* row   6 */   { (MR_String) "predicate" },
  /* row   7 */   { (MR_String) "function" },
  /* row   8 */   { (MR_String) "mutable" },
  /* row   9 */   { (MR_String) "foreign_proc" },
};

static /* final */ const struct recompilation__vector_common_type_6_0_s recompilation_vector_common_6[8] = {
  /* row   0 */   { (MR_Integer) 1 },
  /* row   1 */   { (MR_Integer) 1 },
  /* row   2 */   { (MR_Integer) 1 },
  /* row   3 */   { (MR_Integer) 1 },
  /* row   4 */   { (MR_Integer) 1 },
  /* row   5 */   { (MR_Integer) 0 },
  /* row   6 */   { (MR_Integer) 0 },
  /* row   7 */   { (MR_Integer) 0 },
};





static const MR_DuFunctorDesc recompilation__recompilation__du_functor_desc_eqv_expand_info_0_0 = {
  (MR_String) "no_eqv_expand_info",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(0),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 recompilation__set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_recomp_item_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) (&recompilation__recompilation__type_ctor_info_recomp_item_id_0)
  }
};

static const MR_PseudoTypeInfo recompilation__recompilation__field_types_eqv_expand_info_0_1[2] = {
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&recompilation__set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_recomp_item_id_0)
};

static const MR_DuFunctorDesc recompilation__recompilation__du_functor_desc_eqv_expand_info_0_1 = {
  (MR_String) "eqv_expand_info",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  recompilation__recompilation__field_types_eqv_expand_info_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr recompilation__recompilation__du_stag_ordered_eqv_expand_info_0_0[1] = {
  &recompilation__recompilation__du_functor_desc_eqv_expand_info_0_0
};

static const MR_DuFunctorDescPtr recompilation__recompilation__du_stag_ordered_eqv_expand_info_0_1[1] = {
  &recompilation__recompilation__du_functor_desc_eqv_expand_info_0_1
};

static const MR_DuPtagLayout recompilation__recompilation__du_ptag_ordered_eqv_expand_info_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    recompilation__recompilation__du_stag_ordered_eqv_expand_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    recompilation__recompilation__du_stag_ordered_eqv_expand_info_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr recompilation__recompilation__du_name_ordered_eqv_expand_info_0[2] = {
  &recompilation__recompilation__du_functor_desc_eqv_expand_info_0_1,
  &recompilation__recompilation__du_functor_desc_eqv_expand_info_0_0
};

static const MR_Integer recompilation__recompilation__functor_number_map_eqv_expand_info_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct recompilation__recompilation__type_ctor_info_eqv_expand_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (recompilation____Unify____eqv_expand_info_0_0_10001)),
  ((MR_Box) (recompilation____Compare____eqv_expand_info_0_0_10001)),
  (MR_String) "recompilation",
  (MR_String) "eqv_expand_info",
  { recompilation__recompilation__du_name_ordered_eqv_expand_info_0 },
  { recompilation__recompilation__du_ptag_ordered_eqv_expand_info_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  recompilation__recompilation__functor_number_map_eqv_expand_info_0,

};

static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_maybe_ignore_0_0 = {
  (MR_String) "do_not_ignore",
  INT32_C(0)
};

static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_maybe_ignore_0_1 = {
  (MR_String) "ignore",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr recompilation__recompilation__enum_ordinal_ordered_maybe_ignore_0[2] = {
  &recompilation__recompilation__enum_functor_desc_maybe_ignore_0_0,
  &recompilation__recompilation__enum_functor_desc_maybe_ignore_0_1
};

static const MR_EnumFunctorDescPtr recompilation__recompilation__enum_name_ordered_maybe_ignore_0[2] = {
  &recompilation__recompilation__enum_functor_desc_maybe_ignore_0_0,
  &recompilation__recompilation__enum_functor_desc_maybe_ignore_0_1
};

static const MR_Integer recompilation__recompilation__functor_number_map_maybe_ignore_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct recompilation__recompilation__type_ctor_info_maybe_ignore_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (recompilation____Unify____maybe_ignore_0_0_10001)),
  ((MR_Box) (recompilation____Compare____maybe_ignore_0_0_10001)),
  (MR_String) "recompilation",
  (MR_String) "maybe_ignore",
  { recompilation__recompilation__enum_name_ordered_maybe_ignore_0 },
  { recompilation__recompilation__enum_ordinal_ordered_maybe_ignore_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  recompilation__recompilation__functor_number_map_maybe_ignore_0,

};

static const MR_FA_TypeInfo_Struct2 recompilation__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_name_arity_0libs__timestamp__type_ctor_info_timestamp_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0),
    (MR_TypeInfo) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0)
  }
};

static const MR_FA_TypeInfo_Struct2 recompilation__tree234__ti_tree234_2recompilation__type_ctor_info_recomp_item_name_0libs__timestamp__type_ctor_info_timestamp_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&recompilation__recompilation__type_ctor_info_recomp_item_name_0),
    (MR_TypeInfo) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0)
  }
};

static const MR_PseudoTypeInfo recompilation__recompilation__field_types_module_item_version_numbers_0_0[8] = {
  (MR_PseudoTypeInfo) (&recompilation__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_name_arity_0libs__timestamp__type_ctor_info_timestamp_0),
  (MR_PseudoTypeInfo) (&recompilation__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_name_arity_0libs__timestamp__type_ctor_info_timestamp_0),
  (MR_PseudoTypeInfo) (&recompilation__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_name_arity_0libs__timestamp__type_ctor_info_timestamp_0),
  (MR_PseudoTypeInfo) (&recompilation__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_name_arity_0libs__timestamp__type_ctor_info_timestamp_0),
  (MR_PseudoTypeInfo) (&recompilation__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_name_arity_0libs__timestamp__type_ctor_info_timestamp_0),
  (MR_PseudoTypeInfo) (&recompilation__tree234__ti_tree234_2recompilation__type_ctor_info_recomp_item_name_0libs__timestamp__type_ctor_info_timestamp_0),
  (MR_PseudoTypeInfo) (&recompilation__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_name_arity_0libs__timestamp__type_ctor_info_timestamp_0),
  (MR_PseudoTypeInfo) (&recompilation__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_name_arity_0libs__timestamp__type_ctor_info_timestamp_0)
};

static const MR_ConstString recompilation__recompilation__field_names_module_item_version_numbers_0_0[8] = {
  (MR_String) "mivn_type_names",
  (MR_String) "mivn_type_defns",
  (MR_String) "mivn_insts",
  (MR_String) "mivn_modes",
  (MR_String) "mivn_typeclasses",
  (MR_String) "mivn_instances",
  (MR_String) "mivn_predicates",
  (MR_String) "mivn_functions"
};

static const MR_DuFunctorDesc recompilation__recompilation__du_functor_desc_module_item_version_numbers_0_0 = {
  (MR_String) "module_item_version_numbers",
  INT16_C(8),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  recompilation__recompilation__field_types_module_item_version_numbers_0_0,
  recompilation__recompilation__field_names_module_item_version_numbers_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr recompilation__recompilation__du_stag_ordered_module_item_version_numbers_0_0[1] = {
  &recompilation__recompilation__du_functor_desc_module_item_version_numbers_0_0
};

static const MR_DuPtagLayout recompilation__recompilation__du_ptag_ordered_module_item_version_numbers_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    recompilation__recompilation__du_stag_ordered_module_item_version_numbers_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr recompilation__recompilation__du_name_ordered_module_item_version_numbers_0[1] = {
  &recompilation__recompilation__du_functor_desc_module_item_version_numbers_0_0
};

static const MR_Integer recompilation__recompilation__functor_number_map_module_item_version_numbers_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct recompilation__recompilation__type_ctor_info_module_item_version_numbers_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (recompilation____Unify____module_item_version_numbers_0_0_10001)),
  ((MR_Box) (recompilation____Compare____module_item_version_numbers_0_0_10001)),
  (MR_String) "recompilation",
  (MR_String) "module_item_version_numbers",
  { recompilation__recompilation__du_name_ordered_module_item_version_numbers_0 },
  { recompilation__recompilation__du_ptag_ordered_module_item_version_numbers_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  recompilation__recompilation__functor_number_map_module_item_version_numbers_0,

};

static const MR_FA_TypeInfo_Struct2 recompilation__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0recompilation__type_ctor_info_module_item_version_numbers_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&recompilation__recompilation__type_ctor_info_module_item_version_numbers_0)
  }
};

const MR_TypeCtorInfo_Struct recompilation__recompilation__type_ctor_info_module_item_version_numbers_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (recompilation____Unify____module_item_version_numbers_map_0_0_10001)),
  ((MR_Box) (recompilation____Compare____module_item_version_numbers_map_0_0_10001)),
  (MR_String) "recompilation",
  (MR_String) "module_item_version_numbers_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&recompilation__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0recompilation__type_ctor_info_module_item_version_numbers_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct recompilation__recompilation__type_ctor_info_module_qualifier_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (recompilation____Unify____module_qualifier_0_0_10001)),
  ((MR_Box) (recompilation____Compare____module_qualifier_0_0_10001)),
  (MR_String) "recompilation",
  (MR_String) "module_qualifier",
  { NULL },
  { (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct recompilation__recompilation__type_ctor_info_name_arity_version_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (recompilation____Unify____name_arity_version_map_0_0_10001)),
  ((MR_Box) (recompilation____Compare____name_arity_version_map_0_0_10001)),
  (MR_String) "recompilation",
  (MR_String) "name_arity_version_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&recompilation__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_name_arity_0libs__timestamp__type_ctor_info_timestamp_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo recompilation__recompilation__field_types_recomp_item_id_0_0[2] = {
  (MR_PseudoTypeInfo) (&recompilation__recompilation__type_ctor_info_recomp_item_type_0),
  (MR_PseudoTypeInfo) (&recompilation__recompilation__type_ctor_info_recomp_item_name_0)
};

static const MR_DuArgLocn recompilation__recompilation__field_locns_recomp_item_id_0_0[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 4
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc recompilation__recompilation__du_functor_desc_recomp_item_id_0_0 = {
  (MR_String) "recomp_item_id",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  recompilation__recompilation__field_types_recomp_item_id_0_0,
  NULL,
  recompilation__recompilation__field_locns_recomp_item_id_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr recompilation__recompilation__du_stag_ordered_recomp_item_id_0_0[1] = {
  &recompilation__recompilation__du_functor_desc_recomp_item_id_0_0
};

static const MR_DuPtagLayout recompilation__recompilation__du_ptag_ordered_recomp_item_id_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    recompilation__recompilation__du_stag_ordered_recomp_item_id_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr recompilation__recompilation__du_name_ordered_recomp_item_id_0[1] = {
  &recompilation__recompilation__du_functor_desc_recomp_item_id_0_0
};

static const MR_Integer recompilation__recompilation__functor_number_map_recomp_item_id_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct recompilation__recompilation__type_ctor_info_recomp_item_id_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (recompilation____Unify____recomp_item_id_0_0_10001)),
  ((MR_Box) (recompilation____Compare____recomp_item_id_0_0_10001)),
  (MR_String) "recompilation",
  (MR_String) "recomp_item_id",
  { recompilation__recompilation__du_name_ordered_recomp_item_id_0 },
  { recompilation__recompilation__du_ptag_ordered_recomp_item_id_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  recompilation__recompilation__functor_number_map_recomp_item_id_0,

};

static const MR_PseudoTypeInfo recompilation__recompilation__field_types_recomp_item_name_0_0[2] = {
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc recompilation__recompilation__du_functor_desc_recomp_item_name_0_0 = {
  (MR_String) "recomp_item_name",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  recompilation__recompilation__field_types_recomp_item_name_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr recompilation__recompilation__du_stag_ordered_recomp_item_name_0_0[1] = {
  &recompilation__recompilation__du_functor_desc_recomp_item_name_0_0
};

static const MR_DuPtagLayout recompilation__recompilation__du_ptag_ordered_recomp_item_name_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    recompilation__recompilation__du_stag_ordered_recomp_item_name_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr recompilation__recompilation__du_name_ordered_recomp_item_name_0[1] = {
  &recompilation__recompilation__du_functor_desc_recomp_item_name_0_0
};

static const MR_Integer recompilation__recompilation__functor_number_map_recomp_item_name_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct recompilation__recompilation__type_ctor_info_recomp_item_name_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (recompilation____Unify____recomp_item_name_0_0_10001)),
  ((MR_Box) (recompilation____Compare____recomp_item_name_0_0_10001)),
  (MR_String) "recompilation",
  (MR_String) "recomp_item_name",
  { recompilation__recompilation__du_name_ordered_recomp_item_name_0 },
  { recompilation__recompilation__du_ptag_ordered_recomp_item_name_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  recompilation__recompilation__functor_number_map_recomp_item_name_0,

};

const MR_TypeCtorInfo_Struct recompilation__recompilation__type_ctor_info_recomp_item_name_version_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (recompilation____Unify____recomp_item_name_version_map_0_0_10001)),
  ((MR_Box) (recompilation____Compare____recomp_item_name_version_map_0_0_10001)),
  (MR_String) "recompilation",
  (MR_String) "recomp_item_name_version_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&recompilation__tree234__ti_tree234_2recompilation__type_ctor_info_recomp_item_name_0libs__timestamp__type_ctor_info_timestamp_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_recomp_item_type_0_0 = {
  (MR_String) "recomp_type_name",
  INT32_C(0)
};

static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_recomp_item_type_0_1 = {
  (MR_String) "recomp_type_defn",
  INT32_C(1)
};

static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_recomp_item_type_0_2 = {
  (MR_String) "recomp_inst",
  INT32_C(2)
};

static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_recomp_item_type_0_3 = {
  (MR_String) "recomp_mode",
  INT32_C(3)
};

static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_recomp_item_type_0_4 = {
  (MR_String) "recomp_typeclass",
  INT32_C(4)
};

static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_recomp_item_type_0_5 = {
  (MR_String) "recomp_functor",
  INT32_C(5)
};

static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_recomp_item_type_0_6 = {
  (MR_String) "recomp_predicate",
  INT32_C(6)
};

static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_recomp_item_type_0_7 = {
  (MR_String) "recomp_function",
  INT32_C(7)
};

static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_recomp_item_type_0_8 = {
  (MR_String) "recomp_mutable",
  INT32_C(8)
};

static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_recomp_item_type_0_9 = {
  (MR_String) "recomp_foreign_proc",
  INT32_C(9)
};

static const MR_EnumFunctorDescPtr recompilation__recompilation__enum_ordinal_ordered_recomp_item_type_0[10] = {
  &recompilation__recompilation__enum_functor_desc_recomp_item_type_0_0,
  &recompilation__recompilation__enum_functor_desc_recomp_item_type_0_1,
  &recompilation__recompilation__enum_functor_desc_recomp_item_type_0_2,
  &recompilation__recompilation__enum_functor_desc_recomp_item_type_0_3,
  &recompilation__recompilation__enum_functor_desc_recomp_item_type_0_4,
  &recompilation__recompilation__enum_functor_desc_recomp_item_type_0_5,
  &recompilation__recompilation__enum_functor_desc_recomp_item_type_0_6,
  &recompilation__recompilation__enum_functor_desc_recomp_item_type_0_7,
  &recompilation__recompilation__enum_functor_desc_recomp_item_type_0_8,
  &recompilation__recompilation__enum_functor_desc_recomp_item_type_0_9
};

static const MR_EnumFunctorDescPtr recompilation__recompilation__enum_name_ordered_recomp_item_type_0[10] = {
  &recompilation__recompilation__enum_functor_desc_recomp_item_type_0_9,
  &recompilation__recompilation__enum_functor_desc_recomp_item_type_0_7,
  &recompilation__recompilation__enum_functor_desc_recomp_item_type_0_5,
  &recompilation__recompilation__enum_functor_desc_recomp_item_type_0_2,
  &recompilation__recompilation__enum_functor_desc_recomp_item_type_0_3,
  &recompilation__recompilation__enum_functor_desc_recomp_item_type_0_8,
  &recompilation__recompilation__enum_functor_desc_recomp_item_type_0_6,
  &recompilation__recompilation__enum_functor_desc_recomp_item_type_0_1,
  &recompilation__recompilation__enum_functor_desc_recomp_item_type_0_0,
  &recompilation__recompilation__enum_functor_desc_recomp_item_type_0_4
};

static const MR_Integer recompilation__recompilation__functor_number_map_recomp_item_type_0[10] = {
  (MR_Integer) 8,
  (MR_Integer) 7,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 9,
  (MR_Integer) 2,
  (MR_Integer) 6,
  (MR_Integer) 1,
  (MR_Integer) 5,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct recompilation__recompilation__type_ctor_info_recomp_item_type_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (recompilation____Unify____recomp_item_type_0_0_10001)),
  ((MR_Box) (recompilation____Compare____recomp_item_type_0_0_10001)),
  (MR_String) "recompilation",
  (MR_String) "recomp_item_type",
  { recompilation__recompilation__enum_name_ordered_recomp_item_type_0 },
  { recompilation__recompilation__enum_ordinal_ordered_recomp_item_type_0 },
  (MR_Integer) 10,
  UINT16_C(12),
  recompilation__recompilation__functor_number_map_recomp_item_type_0,

};

static const MR_FA_TypeInfo_Struct2 recompilation__tree234__ti_tree234_2recompilation__type_ctor_info_recomp_item_id_0set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_recomp_item_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&recompilation__recompilation__type_ctor_info_recomp_item_id_0),
    (MR_TypeInfo) (&recompilation__set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_recomp_item_id_0)
  }
};

static const MR_PseudoTypeInfo recompilation__recompilation__field_types_recompilation_info_0_0[4] = {
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&recompilation__recompilation__type_ctor_info_used_items_0),
  (MR_PseudoTypeInfo) (&recompilation__tree234__ti_tree234_2recompilation__type_ctor_info_recomp_item_id_0set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_recomp_item_id_0),
  (MR_PseudoTypeInfo) (&recompilation__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0recompilation__type_ctor_info_module_item_version_numbers_0)
};

static const MR_ConstString recompilation__recompilation__field_names_recompilation_info_0_0[4] = {
  (MR_String) "recomp_module_name",
  (MR_String) "recomp_used_items",
  (MR_String) "recomp_dependencies",
  (MR_String) "recomp_version_numbers"
};

static const MR_DuFunctorDesc recompilation__recompilation__du_functor_desc_recompilation_info_0_0 = {
  (MR_String) "recompilation_info",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  recompilation__recompilation__field_types_recompilation_info_0_0,
  recompilation__recompilation__field_names_recompilation_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr recompilation__recompilation__du_stag_ordered_recompilation_info_0_0[1] = {
  &recompilation__recompilation__du_functor_desc_recompilation_info_0_0
};

static const MR_DuPtagLayout recompilation__recompilation__du_ptag_ordered_recompilation_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    recompilation__recompilation__du_stag_ordered_recompilation_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr recompilation__recompilation__du_name_ordered_recompilation_info_0[1] = {
  &recompilation__recompilation__du_functor_desc_recompilation_info_0_0
};

static const MR_Integer recompilation__recompilation__functor_number_map_recompilation_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct recompilation__recompilation__type_ctor_info_recompilation_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (recompilation____Unify____recompilation_info_0_0_10001)),
  ((MR_Box) (recompilation____Compare____recompilation_info_0_0_10001)),
  (MR_String) "recompilation",
  (MR_String) "recompilation_info",
  { recompilation__recompilation__du_name_ordered_recompilation_info_0 },
  { recompilation__recompilation__du_ptag_ordered_recompilation_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  recompilation__recompilation__functor_number_map_recompilation_info_0,

};

static const MR_FA_TypeInfo_Struct2 recompilation__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

static const MR_FA_TypeInfo_Struct2 recompilation__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_name_arity_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0),
    (MR_TypeInfo) (&recompilation__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

const MR_TypeCtorInfo_Struct recompilation__recompilation__type_ctor_info_simple_item_set_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (recompilation____Unify____simple_item_set_0_0_10001)),
  ((MR_Box) (recompilation____Compare____simple_item_set_0_0_10001)),
  (MR_String) "recompilation",
  (MR_String) "simple_item_set",
  { NULL },
  { (MR_PseudoTypeInfo) (&recompilation__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_name_arity_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_used_item_type_0_0 = {
  (MR_String) "used_type_name",
  INT32_C(0)
};

static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_used_item_type_0_1 = {
  (MR_String) "used_type_defn",
  INT32_C(1)
};

static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_used_item_type_0_2 = {
  (MR_String) "used_inst",
  INT32_C(2)
};

static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_used_item_type_0_3 = {
  (MR_String) "used_mode",
  INT32_C(3)
};

static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_used_item_type_0_4 = {
  (MR_String) "used_typeclass",
  INT32_C(4)
};

static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_used_item_type_0_5 = {
  (MR_String) "used_functor",
  INT32_C(5)
};

static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_used_item_type_0_6 = {
  (MR_String) "used_predicate",
  INT32_C(6)
};

static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_used_item_type_0_7 = {
  (MR_String) "used_function",
  INT32_C(7)
};

static const MR_EnumFunctorDescPtr recompilation__recompilation__enum_ordinal_ordered_used_item_type_0[8] = {
  &recompilation__recompilation__enum_functor_desc_used_item_type_0_0,
  &recompilation__recompilation__enum_functor_desc_used_item_type_0_1,
  &recompilation__recompilation__enum_functor_desc_used_item_type_0_2,
  &recompilation__recompilation__enum_functor_desc_used_item_type_0_3,
  &recompilation__recompilation__enum_functor_desc_used_item_type_0_4,
  &recompilation__recompilation__enum_functor_desc_used_item_type_0_5,
  &recompilation__recompilation__enum_functor_desc_used_item_type_0_6,
  &recompilation__recompilation__enum_functor_desc_used_item_type_0_7
};

static const MR_EnumFunctorDescPtr recompilation__recompilation__enum_name_ordered_used_item_type_0[8] = {
  &recompilation__recompilation__enum_functor_desc_used_item_type_0_7,
  &recompilation__recompilation__enum_functor_desc_used_item_type_0_5,
  &recompilation__recompilation__enum_functor_desc_used_item_type_0_2,
  &recompilation__recompilation__enum_functor_desc_used_item_type_0_3,
  &recompilation__recompilation__enum_functor_desc_used_item_type_0_6,
  &recompilation__recompilation__enum_functor_desc_used_item_type_0_1,
  &recompilation__recompilation__enum_functor_desc_used_item_type_0_0,
  &recompilation__recompilation__enum_functor_desc_used_item_type_0_4
};

static const MR_Integer recompilation__recompilation__functor_number_map_used_item_type_0[8] = {
  (MR_Integer) 6,
  (MR_Integer) 5,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 7,
  (MR_Integer) 1,
  (MR_Integer) 4,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct recompilation__recompilation__type_ctor_info_used_item_type_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (recompilation____Unify____used_item_type_0_0_10001)),
  ((MR_Box) (recompilation____Compare____used_item_type_0_0_10001)),
  (MR_String) "recompilation",
  (MR_String) "used_item_type",
  { recompilation__recompilation__enum_name_ordered_used_item_type_0 },
  { recompilation__recompilation__enum_ordinal_ordered_used_item_type_0 },
  (MR_Integer) 8,
  UINT16_C(12),
  recompilation__recompilation__functor_number_map_used_item_type_0,

};

static const MR_PseudoTypeInfo recompilation__recompilation__field_types_used_items_0_0[8] = {
  (MR_PseudoTypeInfo) (&recompilation__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_name_arity_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&recompilation__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_name_arity_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&recompilation__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_name_arity_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&recompilation__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_name_arity_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&recompilation__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_name_arity_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&recompilation__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_name_arity_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&recompilation__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_name_arity_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&recompilation__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_name_arity_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0)
};

static const MR_ConstString recompilation__recompilation__field_names_used_items_0_0[8] = {
  (MR_String) "used_type_names",
  (MR_String) "used_type_defns",
  (MR_String) "used_insts",
  (MR_String) "used_modes",
  (MR_String) "used_typeclasses",
  (MR_String) "used_functors",
  (MR_String) "used_predicates",
  (MR_String) "used_functions"
};

static const MR_DuFunctorDesc recompilation__recompilation__du_functor_desc_used_items_0_0 = {
  (MR_String) "used_items",
  INT16_C(8),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  recompilation__recompilation__field_types_used_items_0_0,
  recompilation__recompilation__field_names_used_items_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr recompilation__recompilation__du_stag_ordered_used_items_0_0[1] = {
  &recompilation__recompilation__du_functor_desc_used_items_0_0
};

static const MR_DuPtagLayout recompilation__recompilation__du_ptag_ordered_used_items_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    recompilation__recompilation__du_stag_ordered_used_items_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr recompilation__recompilation__du_name_ordered_used_items_0[1] = {
  &recompilation__recompilation__du_functor_desc_used_items_0_0
};

static const MR_Integer recompilation__recompilation__functor_number_map_used_items_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct recompilation__recompilation__type_ctor_info_used_items_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (recompilation____Unify____used_items_0_0_10001)),
  ((MR_Box) (recompilation____Compare____used_items_0_0_10001)),
  (MR_String) "recompilation",
  (MR_String) "used_items",
  { recompilation__recompilation__du_name_ordered_used_items_0 },
  { recompilation__recompilation__du_ptag_ordered_used_items_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  recompilation__recompilation__functor_number_map_used_items_0,

};

const MR_TypeCtorInfo_Struct recompilation__recompilation__type_ctor_info_version_number_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (recompilation____Unify____version_number_0_0_10001)),
  ((MR_Box) (recompilation____Compare____version_number_0_0_10001)),
  (MR_String) "recompilation",
  (MR_String) "version_number",
  { NULL },
  { (MR_PseudoTypeInfo) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

void MR_CALL 
recompilation____Compare____version_number_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  libs__timestamp____Compare____timestamp_0_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
}

MR_bool MR_CALL 
recompilation____Unify____version_number_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = libs__timestamp____Unify____timestamp_0_0(Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
recompilation____Compare____used_item_type_0_0(
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
recompilation____Unify____used_item_type_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
recompilation____Compare____simple_item_set_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&recompilation_scalar_common_2[5]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
recompilation____Unify____simple_item_set_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&recompilation_scalar_common_2[5]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
recompilation____Compare____recompilation_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_15 == CastY_16);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Word SubResult1_6;

    mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      recompilation____Compare____used_items_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&recompilation_scalar_common_2[4]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
          mercury__builtin__compare_3_p_0((MR_Word) (&recompilation_scalar_common_2[3]), HeadVar__1_1, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
      }
    }
  }
}

void MR_CALL 
recompilation____Compare____used_items_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_27 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_28 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_27 == CastY_28);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 4))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 5))));
    MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 6))));
    MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 6))));
    MR_Word ArgX8_25 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))));
    MR_Word ArgY8_26 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 7))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&recompilation_scalar_common_2[5]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&recompilation_scalar_common_2[5]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&recompilation_scalar_common_2[5]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&recompilation_scalar_common_2[5]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            mercury__builtin__compare_3_p_0((MR_Word) (&recompilation_scalar_common_2[5]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              mercury__builtin__compare_3_p_0((MR_Word) (&recompilation_scalar_common_2[5]), &SubResult6_21, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
              succeeded = (SubResult6_21 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
              {
                MR_Word SubResult7_24;

                mercury__builtin__compare_3_p_0((MR_Word) (&recompilation_scalar_common_2[5]), &SubResult7_24, ((MR_Box) (ArgX7_22)), ((MR_Box) (ArgY7_23)));
                succeeded = (SubResult7_24 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult7_24;
                else
                  mercury__builtin__compare_3_p_0((MR_Word) (&recompilation_scalar_common_2[5]), HeadVar__1_1, ((MR_Box) (ArgX8_25)), ((MR_Box) (ArgY8_26)));
              }
            }
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
recompilation____Unify____recompilation_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_14_14;
    MR_Word TypeInfo_15_15;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));

    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = recompilation____Unify____used_items_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        TypeInfo_14_14 = (MR_Word) (&recompilation_scalar_common_2[4]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          TypeInfo_15_15 = (MR_Word) (&recompilation_scalar_common_2[3]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_15, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
        }
      }
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
recompilation____Unify____used_items_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_19 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_20 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_19 == CastY_20);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_22_22;
    MR_Word TypeInfo_23_23;
    MR_Word TypeInfo_24_24;
    MR_Word TypeInfo_25_25;
    MR_Word TypeInfo_26_26;
    MR_Word TypeInfo_27_27;
    MR_Word TypeInfo_28_28;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 6))));
    MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 6))));
    MR_Word ArgX8_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 7))));
    MR_Word ArgY8_18 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&recompilation_scalar_common_2[5]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_22_22 = (MR_Word) (&recompilation_scalar_common_2[5]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_22_22, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        TypeInfo_23_23 = (MR_Word) (&recompilation_scalar_common_2[5]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_23_23, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          TypeInfo_24_24 = (MR_Word) (&recompilation_scalar_common_2[5]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_24_24, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          if (succeeded)
          {
            TypeInfo_25_25 = (MR_Word) (&recompilation_scalar_common_2[5]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_25_25, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
            if (succeeded)
            {
              TypeInfo_26_26 = (MR_Word) (&recompilation_scalar_common_2[5]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_26_26, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
              if (succeeded)
              {
                TypeInfo_27_27 = (MR_Word) (&recompilation_scalar_common_2[5]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_27_27, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
                if (succeeded)
                {
                  TypeInfo_28_28 = (MR_Word) (&recompilation_scalar_common_2[5]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_28_28, ((MR_Box) (ArgX8_17)), ((MR_Box) (ArgY8_18)));
                }
              }
            }
          }
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
recompilation____Compare____recomp_item_type_0_0(
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
recompilation____Unify____recomp_item_type_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
recompilation____Compare____recomp_item_name_version_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&recompilation_scalar_common_2[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
recompilation____Unify____recomp_item_name_version_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&recompilation_scalar_common_2[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
recompilation____Compare____recomp_item_id_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 15);
    MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 15);
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;
    MR_Integer Var_13 = (MR_Integer) (ArgX1_4);
    MR_Integer Var_14 = (MR_Integer) (ArgY1_5);

    succeeded = (Var_13 < Var_14);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (Var_13 > Var_14);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 2;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = MR_TRUE;
        succeeded = !(succeeded);
        if (succeeded)
        {
          SubResult1_6 = (MR_Integer) 0;
          succeeded = MR_TRUE;
        }
      }
    }
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      recompilation____Compare____recomp_item_name_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

void MR_CALL 
recompilation____Compare____recomp_item_name_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;

    mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      succeeded = (ArgX2_7 < ArgY2_8);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (ArgX2_7 > ArgY2_8);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 2;
        else
          *HeadVar__1_1 = (MR_Integer) 0;
      }
    }
  }
}

MR_bool MR_CALL 
recompilation____Unify____recomp_item_id_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 15);
    MR_Word ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 15);
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
      succeeded = recompilation____Unify____recomp_item_name_0_0(ArgX2_5, ArgY2_6);
  }
  return succeeded;
}

MR_bool MR_CALL 
recompilation____Unify____recomp_item_name_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
      succeeded = (ArgX2_5 == ArgY2_6);
  }
  return succeeded;
}

void MR_CALL 
recompilation____Compare____name_arity_version_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&recompilation_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
recompilation____Unify____name_arity_version_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&recompilation_scalar_common_2[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
recompilation____Compare____module_qualifier_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mdbcomp__sym_name____Compare____sym_name_0_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
}

MR_bool MR_CALL 
recompilation____Unify____module_qualifier_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
recompilation____Compare____module_item_version_numbers_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&recompilation_scalar_common_2[3]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
recompilation____Unify____module_item_version_numbers_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&recompilation_scalar_common_2[3]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
recompilation____Compare____module_item_version_numbers_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_27 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_28 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_27 == CastY_28);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 4))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 5))));
    MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 6))));
    MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 6))));
    MR_Word ArgX8_25 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))));
    MR_Word ArgY8_26 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 7))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&recompilation_scalar_common_2[1]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&recompilation_scalar_common_2[1]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&recompilation_scalar_common_2[1]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&recompilation_scalar_common_2[1]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            mercury__builtin__compare_3_p_0((MR_Word) (&recompilation_scalar_common_2[1]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              mercury__builtin__compare_3_p_0((MR_Word) (&recompilation_scalar_common_2[2]), &SubResult6_21, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
              succeeded = (SubResult6_21 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
              {
                MR_Word SubResult7_24;

                mercury__builtin__compare_3_p_0((MR_Word) (&recompilation_scalar_common_2[1]), &SubResult7_24, ((MR_Box) (ArgX7_22)), ((MR_Box) (ArgY7_23)));
                succeeded = (SubResult7_24 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult7_24;
                else
                  mercury__builtin__compare_3_p_0((MR_Word) (&recompilation_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (ArgX8_25)), ((MR_Box) (ArgY8_26)));
              }
            }
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
recompilation____Unify____module_item_version_numbers_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_19 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_20 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_19 == CastY_20);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_22_22;
    MR_Word TypeInfo_23_23;
    MR_Word TypeInfo_24_24;
    MR_Word TypeInfo_25_25;
    MR_Word TypeInfo_26_26;
    MR_Word TypeInfo_27_27;
    MR_Word TypeInfo_28_28;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 6))));
    MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 6))));
    MR_Word ArgX8_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 7))));
    MR_Word ArgY8_18 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&recompilation_scalar_common_2[1]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_22_22 = (MR_Word) (&recompilation_scalar_common_2[1]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_22_22, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        TypeInfo_23_23 = (MR_Word) (&recompilation_scalar_common_2[1]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_23_23, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          TypeInfo_24_24 = (MR_Word) (&recompilation_scalar_common_2[1]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_24_24, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          if (succeeded)
          {
            TypeInfo_25_25 = (MR_Word) (&recompilation_scalar_common_2[1]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_25_25, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
            if (succeeded)
            {
              TypeInfo_26_26 = (MR_Word) (&recompilation_scalar_common_2[2]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_26_26, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
              if (succeeded)
              {
                TypeInfo_27_27 = (MR_Word) (&recompilation_scalar_common_2[1]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_27_27, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
                if (succeeded)
                {
                  TypeInfo_28_28 = (MR_Word) (&recompilation_scalar_common_2[1]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_28_28, ((MR_Box) (ArgX8_17)), ((MR_Box) (ArgY8_18)));
                }
              }
            }
          }
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
recompilation____Compare____maybe_ignore_0_0(
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
recompilation____Unify____maybe_ignore_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
recompilation____Compare____eqv_expand_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_13 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_14 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_13 == CastY_14);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_Word ArgY1_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgY2_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_10;

      mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult1_10, Var_18, ArgY1_9);
      succeeded = (SubResult1_10 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_10;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&recompilation_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Var_17)), ((MR_Box) (ArgY2_12)));
    }
  }
}

MR_bool MR_CALL 
recompilation____Unify____eqv_expand_info_0_0(
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
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_4 == CastX_3);
  }
  else
  {
    MR_Word TypeInfo_12_12;
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_6;
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_8;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_5, ArgY1_6);
      if (succeeded)
      {
        TypeInfo_12_12 = (MR_Word) (&recompilation_scalar_common_1[0]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      }
    }
  }
  return succeeded;
}

MR_Word MR_CALL 
recompilation__ignore_unqual_item_for_item_type_1_f_0(
  MR_Word UsedItemType_3)
{
  MR_Word Ignore_4 = ((&recompilation_vector_common_6[0 + UsedItemType_3]))->recompilation__vector_common_type_6_0__vct_6_f_0;

  return Ignore_4;
}

void MR_CALL 
recompilation__finish_recording_expanded_items_4_p_0(
  MR_Word ItemId_5,
  MR_Word ExpandInfo_6,
  MR_Word MaybeRecomp0_7,
  MR_Word * MaybeRecomp_8)
{
  if ((ExpandInfo_6 == (MR_Word) ((MR_Unsigned) 0U)))
    *MaybeRecomp_8 = MaybeRecomp0_7;
  else
  {
    MR_Word ExpandedItemIds_10 = ((MR_Word) ((MR_hl_field(1, ExpandInfo_6, (MR_Integer) 1))));

    if ((MaybeRecomp0_7 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140recompilation.finish_recording_expanded_items\'/4", (MR_String) "items but no info");
        return;
      }
    else
    {
      MR_Word Recomp0_11 = ((MR_Word) ((MR_hl_field(1, MaybeRecomp0_7, (MR_Integer) 0))));
      MR_Word Recomp_12;

      recompilation__record_expanded_items_4_p_0(ItemId_5, ExpandedItemIds_10, Recomp0_11, &Recomp_12);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeRecomp_8 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Recomp_12));
      }
    }
  }
}

void MR_CALL 
recompilation__record_expanded_item_3_p_0(
  MR_Word ItemId_4,
  MR_Word STATE_VARIABLE_ExpandInfo_0_13,
  MR_Word * STATE_VARIABLE_ExpandInfo_14)
{
  MR_bool succeeded;

  if ((STATE_VARIABLE_ExpandInfo_0_13 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_ExpandInfo_14 = STATE_VARIABLE_ExpandInfo_0_13;
  else
  {
    MR_Word ModuleName_6 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_ExpandInfo_0_13, (MR_Integer) 0))));
    MR_Word ExpandedItemIds0_7 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_ExpandInfo_0_13, (MR_Integer) 1))));
    MR_Word ItemName_9 = ((MR_Word) ((MR_hl_field(0, ItemId_4, (MR_Integer) 1))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, ItemName_9, (MR_Integer) 0))));
    MR_Word Var_17;

    succeeded = ((MR_tag((MR_Word) Var_15)) == (MR_Integer) 1);
    if (succeeded)
    {
      Var_17 = ((MR_Word) ((MR_hl_field(1, Var_15, (MR_Integer) 0))));
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_6, Var_17);
    }
    if (succeeded)
      *STATE_VARIABLE_ExpandInfo_14 = STATE_VARIABLE_ExpandInfo_0_13;
    else
    {
      MR_Word ExpandedItemIds_12;

      mercury__set__insert_3_p_0((MR_Word) (&recompilation__recompilation__type_ctor_info_recomp_item_id_0), ((MR_Box) (ItemId_4)), ExpandedItemIds0_7, &ExpandedItemIds_12);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_ExpandInfo_14 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (ModuleName_6));
        MR_hl_field(1, base, 1) = ((MR_Box) (ExpandedItemIds_12));
      }
    }
  }
}

void MR_CALL 
recompilation__maybe_start_recording_expanded_items_4_p_0(
  MR_Word ModuleName_5,
  MR_Word SymName_6,
  MR_Word MaybeRecompInfo_7,
  MR_Word * ExpandInfo_8)
{
  MR_bool succeeded;

  if ((MaybeRecompInfo_7 == (MR_Word) ((MR_Unsigned) 0U)))
    *ExpandInfo_8 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_13;

    succeeded = ((MR_tag((MR_Word) SymName_6)) == (MR_Integer) 1);
    if (succeeded)
    {
      Var_13 = ((MR_Word) ((MR_hl_field(1, SymName_6, (MR_Integer) 0))));
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_5, Var_13);
    }
    if (succeeded)
      *ExpandInfo_8 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Var_11;

      Var_11 = mercury__set__init_0_f_0((MR_Word) (&recompilation__recompilation__type_ctor_info_recomp_item_id_0));
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *ExpandInfo_8 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (ModuleName_5));
        MR_hl_field(1, base, 1) = ((MR_Box) (Var_11));
      }
    }
  }
}

void MR_CALL 
recompilation__record_expanded_items_4_p_0(
  MR_Word Item_5,
  MR_Word ExpandedItems_6,
  MR_Word STATE_VARIABLE_Info_0_12,
  MR_Word * STATE_VARIABLE_Info_13)
{
  MR_bool succeeded;

  succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&recompilation__recompilation__type_ctor_info_recomp_item_id_0), ExpandedItems_6);
  if (succeeded)
    *STATE_VARIABLE_Info_13 = STATE_VARIABLE_Info_0_12;
  else
  {
    MR_Word DepsMap0_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_12, (MR_Integer) 2))));
    MR_Word DepsMap_11;
    MR_Word Deps0_9;
    MR_Box conv0_Deps0_9;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_20;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&recompilation__recompilation__type_ctor_info_recomp_item_id_0), (MR_Word) (&recompilation_scalar_common_1[0]), DepsMap0_8, ((MR_Box) (Item_5)), &conv0_Deps0_9);
    if (succeeded)
    {
      Deps0_9 = ((MR_Word) (conv0_Deps0_9));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word Deps_10;

      mercury__set__union_3_p_0((MR_Word) (&recompilation__recompilation__type_ctor_info_recomp_item_id_0), ExpandedItems_6, Deps0_9, &Deps_10);
      mercury__map__det_update_4_p_0((MR_Word) (&recompilation__recompilation__type_ctor_info_recomp_item_id_0), (MR_Word) (&recompilation_scalar_common_1[0]), ((MR_Box) (Item_5)), ((MR_Box) (Deps_10)), DepsMap0_8, &DepsMap_11);
    }
    else
      mercury__map__det_insert_4_p_0((MR_Word) (&recompilation__recompilation__type_ctor_info_recomp_item_id_0), (MR_Word) (&recompilation_scalar_common_1[0]), ((MR_Box) (Item_5)), ((MR_Box) (ExpandedItems_6)), DepsMap0_8, &DepsMap_11);
    Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_12, (MR_Integer) 0))));
    Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_12, (MR_Integer) 1))));
    Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_12, (MR_Integer) 3))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_13 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_17));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_18));
      MR_hl_field(0, base, 2) = ((MR_Box) (DepsMap_11));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_20));
    }
  }
}

void MR_CALL 
recompilation__record_used_item_5_p_0(
  MR_Word UsedItemType_6,
  MR_Word Id_7,
  MR_Word QualifiedId_8,
  MR_Word STATE_VARIABLE_Info_0_25,
  MR_Word * STATE_VARIABLE_Info_26)
{
  MR_bool succeeded;
  MR_Word QualifiedName_10 = ((MR_Word) ((MR_hl_field(0, QualifiedId_8, (MR_Integer) 0))));
  MR_Integer Arity_11 = ((MR_Integer) ((MR_hl_field(0, QualifiedId_8, (MR_Integer) 1))));

  succeeded = ((MR_tag((MR_Word) QualifiedName_10)) == (MR_Integer) 0);
  if (succeeded)
    switch (UsedItemType_6) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 2:
      case (MR_Integer) 3:
      case (MR_Integer) 1:
      case (MR_Integer) 0:
      case (MR_Integer) 4:
        succeeded = MR_TRUE;
        break;
    }
  if (succeeded)
    *STATE_VARIABLE_Info_26 = STATE_VARIABLE_Info_0_25;
  else
  {
    MR_Word Used0_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_25, (MR_Integer) 1))));
    MR_Word IdSet0_14;
    MR_String UnqualifiedName_15;
    MR_Word ModuleName_16;
    MR_Word UnqualifiedId_17;
    MR_Word SymName_18;
    MR_Word ModuleQualifier_20;
    MR_Word MatchingNames0_21;
    MR_Box conv0_MatchingNames0_21;

    IdSet0_14 = recompilation__get_used_item_ids_2_f_0(Used0_13, UsedItemType_6);
    UnqualifiedName_15 = mdbcomp__sym_name__unqualify_name_1_f_0(QualifiedName_10);
    if (((MR_tag((MR_Word) QualifiedName_10)) == (MR_Integer) 1))
      ModuleName_16 = ((MR_Word) ((MR_hl_field(1, QualifiedName_10, (MR_Integer) 0))));
    else
      ModuleName_16 = (MR_Word) (&recompilation_scalar_common_3[0]);
    {
      UnqualifiedId_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, UnqualifiedId_17, 0) = ((MR_Box) (UnqualifiedName_15));
      MR_hl_field(0, UnqualifiedId_17, 1) = ((MR_Box) (Arity_11));
    }
    SymName_18 = ((MR_Word) ((MR_hl_field(0, Id_7, (MR_Integer) 0))));
    if (((MR_tag((MR_Word) SymName_18)) == (MR_Integer) 1))
      ModuleQualifier_20 = ((MR_Word) ((MR_hl_field(1, SymName_18, (MR_Integer) 0))));
    else
      ModuleQualifier_20 = (MR_Word) (&recompilation_scalar_common_3[0]);
    succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), (MR_Word) (&recompilation_scalar_common_2[0]), IdSet0_14, ((MR_Box) (UnqualifiedId_17)), &conv0_MatchingNames0_21);
    if (succeeded)
    {
      MatchingNames0_21 = ((MR_Word) (conv0_MatchingNames0_21));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      succeeded = mercury__map__contains_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), MatchingNames0_21, ((MR_Box) (ModuleQualifier_20)));
      if (succeeded)
        *STATE_VARIABLE_Info_26 = STATE_VARIABLE_Info_0_25;
      else
      {
        MR_Word MatchingNames_22;
        MR_Word IdSet_23;
        MR_Word Used_24;
        MR_Word Var_36;
        MR_Word Var_38;
        MR_Word Var_39;

        mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleQualifier_20)), ((MR_Box) (ModuleName_16)), MatchingNames0_21, &MatchingNames_22);
        mercury__map__det_update_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), (MR_Word) (&recompilation_scalar_common_2[0]), ((MR_Box) (UnqualifiedId_17)), ((MR_Box) (MatchingNames_22)), IdSet0_14, &IdSet_23);
        recompilation__set_used_item_ids_4_p_0(UsedItemType_6, IdSet_23, Used0_13, &Used_24);
        Var_36 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_25, (MR_Integer) 0))));
        Var_38 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_25, (MR_Integer) 2))));
        Var_39 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_25, (MR_Integer) 3))));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_Info_26 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_36));
          MR_hl_field(0, base, 1) = ((MR_Box) (Used_24));
          MR_hl_field(0, base, 2) = ((MR_Box) (Var_38));
          MR_hl_field(0, base, 3) = ((MR_Box) (Var_39));
        }
      }
    }
    else
    {
      MR_Word MatchingNames_30;
      MR_Word IdSet_31;
      MR_Word Used_32;
      MR_Word Var_40;
      MR_Word Var_42;
      MR_Word Var_43;

      MatchingNames_30 = mercury__map__singleton_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleQualifier_20)), ((MR_Box) (ModuleName_16)));
      mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), (MR_Word) (&recompilation_scalar_common_2[0]), ((MR_Box) (UnqualifiedId_17)), ((MR_Box) (MatchingNames_30)), IdSet0_14, &IdSet_31);
      recompilation__set_used_item_ids_4_p_0(UsedItemType_6, IdSet_31, Used0_13, &Used_32);
      Var_40 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_25, (MR_Integer) 0))));
      Var_42 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_25, (MR_Integer) 2))));
      Var_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_25, (MR_Integer) 3))));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Info_26 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_40));
        MR_hl_field(0, base, 1) = ((MR_Box) (Used_32));
        MR_hl_field(0, base, 2) = ((MR_Box) (Var_42));
        MR_hl_field(0, base, 3) = ((MR_Box) (Var_43));
      }
    }
  }
}

void MR_CALL 
recompilation__set_used_item_ids_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word IdMap_2,
  MR_Word STATE_VARIABLE_Used_0_3,
  MR_Word * STATE_VARIABLE_Used_4)
{
  MR_Word Var_108 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Used_0_3, (MR_Integer) 7))));
  MR_Word Var_109 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Used_0_3, (MR_Integer) 6))));
  MR_Word Var_110 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Used_0_3, (MR_Integer) 5))));
  MR_Word Var_111 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Used_0_3, (MR_Integer) 4))));
  MR_Word Var_112 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Used_0_3, (MR_Integer) 3))));
  MR_Word Var_113 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Used_0_3, (MR_Integer) 2))));
  MR_Word Var_114 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Used_0_3, (MR_Integer) 1))));
  MR_Word Var_115 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Used_0_3, (MR_Integer) 0))));

  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 7:
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Used_4 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_115));
        MR_hl_field(0, base, 1) = ((MR_Box) (Var_114));
        MR_hl_field(0, base, 2) = ((MR_Box) (Var_113));
        MR_hl_field(0, base, 3) = ((MR_Box) (Var_112));
        MR_hl_field(0, base, 4) = ((MR_Box) (Var_111));
        MR_hl_field(0, base, 5) = ((MR_Box) (Var_110));
        MR_hl_field(0, base, 6) = ((MR_Box) (Var_109));
        MR_hl_field(0, base, 7) = ((MR_Box) (IdMap_2));
      }
      break;
    case (MR_Integer) 5:
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Used_4 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_115));
        MR_hl_field(0, base, 1) = ((MR_Box) (Var_114));
        MR_hl_field(0, base, 2) = ((MR_Box) (Var_113));
        MR_hl_field(0, base, 3) = ((MR_Box) (Var_112));
        MR_hl_field(0, base, 4) = ((MR_Box) (Var_111));
        MR_hl_field(0, base, 5) = ((MR_Box) (IdMap_2));
        MR_hl_field(0, base, 6) = ((MR_Box) (Var_109));
        MR_hl_field(0, base, 7) = ((MR_Box) (Var_108));
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Used_4 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_115));
        MR_hl_field(0, base, 1) = ((MR_Box) (Var_114));
        MR_hl_field(0, base, 2) = ((MR_Box) (IdMap_2));
        MR_hl_field(0, base, 3) = ((MR_Box) (Var_112));
        MR_hl_field(0, base, 4) = ((MR_Box) (Var_111));
        MR_hl_field(0, base, 5) = ((MR_Box) (Var_110));
        MR_hl_field(0, base, 6) = ((MR_Box) (Var_109));
        MR_hl_field(0, base, 7) = ((MR_Box) (Var_108));
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Used_4 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_115));
        MR_hl_field(0, base, 1) = ((MR_Box) (Var_114));
        MR_hl_field(0, base, 2) = ((MR_Box) (Var_113));
        MR_hl_field(0, base, 3) = ((MR_Box) (IdMap_2));
        MR_hl_field(0, base, 4) = ((MR_Box) (Var_111));
        MR_hl_field(0, base, 5) = ((MR_Box) (Var_110));
        MR_hl_field(0, base, 6) = ((MR_Box) (Var_109));
        MR_hl_field(0, base, 7) = ((MR_Box) (Var_108));
      }
      break;
    case (MR_Integer) 6:
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Used_4 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_115));
        MR_hl_field(0, base, 1) = ((MR_Box) (Var_114));
        MR_hl_field(0, base, 2) = ((MR_Box) (Var_113));
        MR_hl_field(0, base, 3) = ((MR_Box) (Var_112));
        MR_hl_field(0, base, 4) = ((MR_Box) (Var_111));
        MR_hl_field(0, base, 5) = ((MR_Box) (Var_110));
        MR_hl_field(0, base, 6) = ((MR_Box) (IdMap_2));
        MR_hl_field(0, base, 7) = ((MR_Box) (Var_108));
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Used_4 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_115));
        MR_hl_field(0, base, 1) = ((MR_Box) (IdMap_2));
        MR_hl_field(0, base, 2) = ((MR_Box) (Var_113));
        MR_hl_field(0, base, 3) = ((MR_Box) (Var_112));
        MR_hl_field(0, base, 4) = ((MR_Box) (Var_111));
        MR_hl_field(0, base, 5) = ((MR_Box) (Var_110));
        MR_hl_field(0, base, 6) = ((MR_Box) (Var_109));
        MR_hl_field(0, base, 7) = ((MR_Box) (Var_108));
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Used_4 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (IdMap_2));
        MR_hl_field(0, base, 1) = ((MR_Box) (Var_114));
        MR_hl_field(0, base, 2) = ((MR_Box) (Var_113));
        MR_hl_field(0, base, 3) = ((MR_Box) (Var_112));
        MR_hl_field(0, base, 4) = ((MR_Box) (Var_111));
        MR_hl_field(0, base, 5) = ((MR_Box) (Var_110));
        MR_hl_field(0, base, 6) = ((MR_Box) (Var_109));
        MR_hl_field(0, base, 7) = ((MR_Box) (Var_108));
      }
      break;
    case (MR_Integer) 4:
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Used_4 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_115));
        MR_hl_field(0, base, 1) = ((MR_Box) (Var_114));
        MR_hl_field(0, base, 2) = ((MR_Box) (Var_113));
        MR_hl_field(0, base, 3) = ((MR_Box) (Var_112));
        MR_hl_field(0, base, 4) = ((MR_Box) (IdMap_2));
        MR_hl_field(0, base, 5) = ((MR_Box) (Var_110));
        MR_hl_field(0, base, 6) = ((MR_Box) (Var_109));
        MR_hl_field(0, base, 7) = ((MR_Box) (Var_108));
      }
      break;
  }
}

MR_Word MR_CALL 
recompilation__get_used_item_ids_2_f_0(
  MR_Word Used_1,
  MR_Word HeadVar__2_2)
{
  MR_Word HeadVar__3_3;
  MR_Word Var_68 = ((MR_Word) ((MR_hl_field(0, Used_1, (MR_Integer) 7))));
  MR_Word Var_69 = ((MR_Word) ((MR_hl_field(0, Used_1, (MR_Integer) 6))));
  MR_Word Var_70 = ((MR_Word) ((MR_hl_field(0, Used_1, (MR_Integer) 5))));
  MR_Word Var_71 = ((MR_Word) ((MR_hl_field(0, Used_1, (MR_Integer) 4))));
  MR_Word Var_72 = ((MR_Word) ((MR_hl_field(0, Used_1, (MR_Integer) 3))));
  MR_Word Var_73 = ((MR_Word) ((MR_hl_field(0, Used_1, (MR_Integer) 2))));
  MR_Word Var_74 = ((MR_Word) ((MR_hl_field(0, Used_1, (MR_Integer) 1))));
  MR_Word Var_75 = ((MR_Word) ((MR_hl_field(0, Used_1, (MR_Integer) 0))));

  switch (HeadVar__2_2) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 7:
      HeadVar__3_3 = Var_68;
      break;
    case (MR_Integer) 5:
      HeadVar__3_3 = Var_70;
      break;
    case (MR_Integer) 2:
      HeadVar__3_3 = Var_73;
      break;
    case (MR_Integer) 3:
      HeadVar__3_3 = Var_72;
      break;
    case (MR_Integer) 6:
      HeadVar__3_3 = Var_69;
      break;
    case (MR_Integer) 1:
      HeadVar__3_3 = Var_74;
      break;
    case (MR_Integer) 0:
      HeadVar__3_3 = Var_75;
      break;
    case (MR_Integer) 4:
      HeadVar__3_3 = Var_71;
      break;
  }
  return HeadVar__3_3;
}

MR_Word MR_CALL 
recompilation__module_qualify_name_2_f_0(
  MR_Word Qualifier_4,
  MR_String Name_5)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Qualifier_4)) == (MR_Integer) 0);
  MR_Word HeadVar__3_3;
  MR_String Var_6;

  if (succeeded)
  {
    Var_6 = ((MR_String) ((MR_hl_field(0, Qualifier_4, (MR_Integer) 0))));
    succeeded = (strcmp(Var_6, (MR_String) "") == 0);
  }
  if (succeeded)
    {
      HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, HeadVar__3_3, 0) = ((MR_Box) (Name_5));
    }
  else
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (Qualifier_4));
      MR_hl_field(1, HeadVar__3_3, 1) = ((MR_Box) (Name_5));
    }
  return HeadVar__3_3;
}

MR_Word MR_CALL 
recompilation__find_module_qualifier_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;

  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
    HeadVar__2_2 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
  else
    HeadVar__2_2 = (MR_Word) (&recompilation_scalar_common_3[0]);
  return HeadVar__2_2;
}

MR_Word MR_CALL 
recompilation__init_module_item_version_numbers_0_f_0(void)
{
  MR_Word HeadVar__1_1;
  MR_Word Var_2;
  MR_Word Var_3;
  MR_Word Var_4;
  MR_Word Var_5;
  MR_Word Var_6;
  MR_Word Var_7;
  MR_Word Var_8;
  MR_Word Var_9;

  Var_2 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), (MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0));
  Var_3 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), (MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0));
  Var_4 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), (MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0));
  Var_5 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), (MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0));
  Var_6 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), (MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0));
  Var_7 = mercury__map__init_0_f_0((MR_Word) (&recompilation__recompilation__type_ctor_info_recomp_item_name_0), (MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0));
  Var_8 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), (MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0));
  Var_9 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), (MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0));
  {
    HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__1_1, 0) = ((MR_Box) (Var_2));
    MR_hl_field(0, HeadVar__1_1, 1) = ((MR_Box) (Var_3));
    MR_hl_field(0, HeadVar__1_1, 2) = ((MR_Box) (Var_4));
    MR_hl_field(0, HeadVar__1_1, 3) = ((MR_Box) (Var_5));
    MR_hl_field(0, HeadVar__1_1, 4) = ((MR_Box) (Var_6));
    MR_hl_field(0, HeadVar__1_1, 5) = ((MR_Box) (Var_7));
    MR_hl_field(0, HeadVar__1_1, 6) = ((MR_Box) (Var_8));
    MR_hl_field(0, HeadVar__1_1, 7) = ((MR_Box) (Var_9));
  }
  return HeadVar__1_1;
}

MR_Word MR_CALL 
recompilation__init_recompilation_info_1_f_0(
  MR_Word ModuleName_3)
{
  MR_Word HeadVar__2_2;
  MR_Word Var_4;
  MR_Word Var_5;
  MR_Word Var_6;

  Var_4 = recompilation__init_used_items_0_f_0();
  Var_5 = mercury__map__init_0_f_0((MR_Word) (&recompilation__recompilation__type_ctor_info_recomp_item_id_0), (MR_Word) (&recompilation_scalar_common_1[0]));
  Var_6 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__recompilation__type_ctor_info_module_item_version_numbers_0));
  {
    HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__2_2, 0) = ((MR_Box) (ModuleName_3));
    MR_hl_field(0, HeadVar__2_2, 1) = ((MR_Box) (Var_4));
    MR_hl_field(0, HeadVar__2_2, 2) = ((MR_Box) (Var_5));
    MR_hl_field(0, HeadVar__2_2, 3) = ((MR_Box) (Var_6));
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
recompilation__init_used_items_0_f_0(void)
{
  MR_Word HeadVar__1_1;
  MR_Word Var_2;
  MR_Word Var_3;
  MR_Word Var_4;
  MR_Word Var_5;
  MR_Word Var_6;
  MR_Word Var_7;
  MR_Word Var_8;
  MR_Word Var_9;

  Var_2 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), (MR_Word) (&recompilation_scalar_common_2[0]));
  Var_3 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), (MR_Word) (&recompilation_scalar_common_2[0]));
  Var_4 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), (MR_Word) (&recompilation_scalar_common_2[0]));
  Var_5 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), (MR_Word) (&recompilation_scalar_common_2[0]));
  Var_6 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), (MR_Word) (&recompilation_scalar_common_2[0]));
  Var_7 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), (MR_Word) (&recompilation_scalar_common_2[0]));
  Var_8 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), (MR_Word) (&recompilation_scalar_common_2[0]));
  Var_9 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), (MR_Word) (&recompilation_scalar_common_2[0]));
  {
    HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__1_1, 0) = ((MR_Box) (Var_2));
    MR_hl_field(0, HeadVar__1_1, 1) = ((MR_Box) (Var_3));
    MR_hl_field(0, HeadVar__1_1, 2) = ((MR_Box) (Var_4));
    MR_hl_field(0, HeadVar__1_1, 3) = ((MR_Box) (Var_5));
    MR_hl_field(0, HeadVar__1_1, 4) = ((MR_Box) (Var_6));
    MR_hl_field(0, HeadVar__1_1, 5) = ((MR_Box) (Var_7));
    MR_hl_field(0, HeadVar__1_1, 6) = ((MR_Box) (Var_8));
    MR_hl_field(0, HeadVar__1_1, 7) = ((MR_Box) (Var_9));
  }
  return HeadVar__1_1;
}

MR_Word MR_CALL 
recompilation__recomp_item_name_to_mode_ctor_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;
  MR_Word SymName_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_Integer Arity_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));

  {
    HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__2_2, 0) = ((MR_Box) (SymName_3));
    MR_hl_field(0, HeadVar__2_2, 1) = ((MR_Box) (Arity_4));
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
recompilation__recomp_item_name_to_inst_ctor_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;
  MR_Word SymName_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_Integer Arity_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));

  {
    HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__2_2, 0) = ((MR_Box) (SymName_3));
    MR_hl_field(0, HeadVar__2_2, 1) = ((MR_Box) (Arity_4));
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
recompilation__recomp_item_name_to_type_ctor_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;
  MR_Word SymName_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_Integer Arity_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));

  {
    HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__2_2, 0) = ((MR_Box) (SymName_3));
    MR_hl_field(0, HeadVar__2_2, 1) = ((MR_Box) (Arity_4));
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
recompilation__mode_ctor_to_recomp_item_name_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;
  MR_Word SymName_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_Integer Arity_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));

  {
    HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__2_2, 0) = ((MR_Box) (SymName_3));
    MR_hl_field(0, HeadVar__2_2, 1) = ((MR_Box) (Arity_4));
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
recompilation__inst_ctor_to_recomp_item_name_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;
  MR_Word SymName_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_Integer Arity_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));

  {
    HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__2_2, 0) = ((MR_Box) (SymName_3));
    MR_hl_field(0, HeadVar__2_2, 1) = ((MR_Box) (Arity_4));
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
recompilation__type_ctor_to_recomp_item_name_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;
  MR_Word SymName_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_Integer Arity_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));

  {
    HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__2_2, 0) = ((MR_Box) (SymName_3));
    MR_hl_field(0, HeadVar__2_2, 1) = ((MR_Box) (Arity_4));
  }
  return HeadVar__2_2;
}

void MR_CALL 
recompilation__string_to_recomp_item_type_2_p_1(
  MR_String * HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  *HeadVar__1_1 = ((&recompilation_vector_common_5[0 + HeadVar__2_2]))->recompilation__vector_common_type_5_0__vct_5_f_0;
}

MR_bool MR_CALL 
recompilation__string_to_recomp_item_type_2_p_0(
  MR_String HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer slot_0 = ((MR_hash_string5(HeadVar__1_1)) & (MR_Integer) 31);
  MR_String str_1 = ((&recompilation_vector_common_4[0 + slot_0]))->recompilation__vector_common_type_4_0__vct_4_f_0;

  // hashed string simple lookup switch
  ;
  // compute the hash value of the input string
  ;
  // no collisions; no hash chain loop
  ;
  // lookup the string for this hash slot
  ;
  // did we find a match?
  ;
  if ((((str_1 != NULL)) && ((strcmp(str_1, HeadVar__1_1) == 0))))
  {
    // we found a match; look up the results
    ;
    *HeadVar__2_2 = ((&recompilation_vector_common_4[0 + slot_0]))->recompilation__vector_common_type_4_0__vct_4_f_1;
    succeeded = MR_TRUE;
    // jump out of search loop
    ;
    goto label_0;
  }
  succeeded = MR_FALSE;
label_0:;
  return succeeded;
}

MR_Word MR_CALL 
recompilation__pred_or_func_to_recomp_item_type_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;

  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      HeadVar__2_2 = (MR_Integer) 7;
      break;
    case (MR_Integer) 0:
      HeadVar__2_2 = (MR_Integer) 6;
      break;
  }
  return HeadVar__2_2;
}

MR_String MR_CALL 
recompilation__version_number_to_string_1_f_0(
  MR_Word VersionNumber_3)
{
  MR_String VersionNumberStr_4;
  MR_String Var_8;
  MR_String Var_11;

  Var_8 = libs__timestamp__timestamp_to_string_1_f_0(VersionNumber_3);
  Var_11 = mercury__string__f_43_43_2_f_0(Var_8, (MR_String) "\"");
  VersionNumberStr_4 = mercury__string__f_43_43_2_f_0((MR_String) "\"", Var_11);
  return VersionNumberStr_4;
}

MR_bool MR_CALL 
recompilation__parse_timestamp_term_2_p_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word Term_3,
  MR_Word * Timestamp_4)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_3)) == (MR_Integer) 0);
  MR_String Str_5;
  MR_Word Var_7;
  MR_Word Var_8;

  if (succeeded)
  {
    Var_7 = ((MR_Word) ((MR_hl_field(0, Term_3, (MR_Integer) 0))));
    Var_8 = ((MR_Word) ((MR_hl_field(0, Term_3, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_7)) == (MR_Integer) 2);
    if (succeeded)
    {
      Str_5 = ((MR_String) ((MR_hl_field(2, Var_7, (MR_Integer) 0))));
      succeeded = (Var_8 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        succeeded = libs__timestamp__parse_timestamp_string_2_p_0(Str_5, Timestamp_4);
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
recompilation__parse_version_number_term_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word Term_3,
  MR_Word * Timestamp_4)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_3)) == (MR_Integer) 0);
  MR_String Str_6;
  MR_Word Var_8;
  MR_Word Var_9;

  if (succeeded)
  {
    Var_8 = ((MR_Word) ((MR_hl_field(0, Term_3, (MR_Integer) 0))));
    Var_9 = ((MR_Word) ((MR_hl_field(0, Term_3, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_8)) == (MR_Integer) 2);
    if (succeeded)
    {
      Str_6 = ((MR_String) ((MR_hl_field(2, Var_8, (MR_Integer) 0))));
      succeeded = (Var_9 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        succeeded = libs__timestamp__parse_timestamp_string_2_p_0(Str_6, Timestamp_4);
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
recompilation____Unify____eqv_expand_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = recompilation____Unify____eqv_expand_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
recompilation____Compare____eqv_expand_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  recompilation____Compare____eqv_expand_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
recompilation____Unify____maybe_ignore_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = recompilation____Unify____maybe_ignore_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
recompilation____Compare____maybe_ignore_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  recompilation____Compare____maybe_ignore_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
recompilation____Unify____module_item_version_numbers_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = recompilation____Unify____module_item_version_numbers_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
recompilation____Compare____module_item_version_numbers_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  recompilation____Compare____module_item_version_numbers_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
recompilation____Unify____module_item_version_numbers_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = recompilation____Unify____module_item_version_numbers_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
recompilation____Compare____module_item_version_numbers_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  recompilation____Compare____module_item_version_numbers_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
recompilation____Unify____module_qualifier_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = recompilation____Unify____module_qualifier_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
recompilation____Compare____module_qualifier_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  recompilation____Compare____module_qualifier_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
recompilation____Unify____name_arity_version_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = recompilation____Unify____name_arity_version_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
recompilation____Compare____name_arity_version_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  recompilation____Compare____name_arity_version_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
recompilation____Unify____recomp_item_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = recompilation____Unify____recomp_item_id_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
recompilation____Compare____recomp_item_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  recompilation____Compare____recomp_item_id_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
recompilation____Unify____recomp_item_name_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = recompilation____Unify____recomp_item_name_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
recompilation____Compare____recomp_item_name_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  recompilation____Compare____recomp_item_name_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
recompilation____Unify____recomp_item_name_version_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = recompilation____Unify____recomp_item_name_version_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
recompilation____Compare____recomp_item_name_version_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  recompilation____Compare____recomp_item_name_version_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
recompilation____Unify____recomp_item_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = recompilation____Unify____recomp_item_type_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
recompilation____Compare____recomp_item_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  recompilation____Compare____recomp_item_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
recompilation____Unify____recompilation_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = recompilation____Unify____recompilation_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
recompilation____Compare____recompilation_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  recompilation____Compare____recompilation_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
recompilation____Unify____simple_item_set_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = recompilation____Unify____simple_item_set_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
recompilation____Compare____simple_item_set_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  recompilation____Compare____simple_item_set_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
recompilation____Unify____used_item_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = recompilation____Unify____used_item_type_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
recompilation____Compare____used_item_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  recompilation____Compare____used_item_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
recompilation____Unify____used_items_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = recompilation____Unify____used_items_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
recompilation____Compare____used_items_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  recompilation____Compare____used_items_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
recompilation____Unify____version_number_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = recompilation____Unify____version_number_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
recompilation____Compare____version_number_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  recompilation____Compare____version_number_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__recompilation__init(void)
{
}

void mercury__recompilation__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&recompilation__recompilation__type_ctor_info_eqv_expand_info_0);
	MR_register_type_ctor_info(&recompilation__recompilation__type_ctor_info_maybe_ignore_0);
	MR_register_type_ctor_info(&recompilation__recompilation__type_ctor_info_module_item_version_numbers_0);
	MR_register_type_ctor_info(&recompilation__recompilation__type_ctor_info_module_item_version_numbers_map_0);
	MR_register_type_ctor_info(&recompilation__recompilation__type_ctor_info_module_qualifier_0);
	MR_register_type_ctor_info(&recompilation__recompilation__type_ctor_info_name_arity_version_map_0);
	MR_register_type_ctor_info(&recompilation__recompilation__type_ctor_info_recomp_item_id_0);
	MR_register_type_ctor_info(&recompilation__recompilation__type_ctor_info_recomp_item_name_0);
	MR_register_type_ctor_info(&recompilation__recompilation__type_ctor_info_recomp_item_name_version_map_0);
	MR_register_type_ctor_info(&recompilation__recompilation__type_ctor_info_recomp_item_type_0);
	MR_register_type_ctor_info(&recompilation__recompilation__type_ctor_info_recompilation_info_0);
	MR_register_type_ctor_info(&recompilation__recompilation__type_ctor_info_simple_item_set_0);
	MR_register_type_ctor_info(&recompilation__recompilation__type_ctor_info_used_item_type_0);
	MR_register_type_ctor_info(&recompilation__recompilation__type_ctor_info_used_items_0);
	MR_register_type_ctor_info(&recompilation__recompilation__type_ctor_info_version_number_0);
}

void mercury__recompilation__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__recompilation__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module recompilation.
