/*
** Automatically generated from `recompilation.m'
** by the Mercury compiler,
** version rotd-2019-06-27
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


#include "libs.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
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
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "multi_map.mih"
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




static const MR_VA_PseudoTypeInfo_Struct3 recompilation____vpti_func_3__plain_recompilation__type_ctor_info_item_type_0__pseudo_1__pseudo_2;

static const MR_FA_PseudoTypeInfo_Struct3 recompilation__recompilation__pti_item_id_set_3__pseudo_1__pseudo_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct3 recompilation__recompilation__pti_item_id_set_3__pseudo_2__pseudo_2__pseudo_2;

static const MR_FA_TypeInfo_Struct1 recompilation__maybe__ti_maybe_1recompilation__type_ctor_info_eqv_expanded_item_set_0;

static const MR_FA_TypeInfo_Struct1 recompilation__set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0;

static const MR_PseudoTypeInfo recompilation__recompilation__field_types_eqv_expanded_item_set_0_0[2];

static const MR_DuFunctorDesc recompilation__recompilation__du_functor_desc_eqv_expanded_item_set_0_0;

static const MR_DuFunctorDescPtr recompilation__recompilation__du_stag_ordered_eqv_expanded_item_set_0_0[1];

static const MR_DuPtagLayout recompilation__recompilation__du_ptag_ordered_eqv_expanded_item_set_0[1];

static const MR_DuFunctorDescPtr recompilation__recompilation__du_name_ordered_eqv_expanded_item_set_0[1];

static const MR_Integer recompilation__recompilation__functor_number_map_eqv_expanded_item_set_0[1];

static const MR_FA_TypeInfo_Struct2 recompilation__pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct2 recompilation__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_TypeInfo_Struct2 recompilation__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_TypeInfo_Struct2 recompilation__tree234__ti_tree234_2recompilation__type_ctor_info_item_name_0libs__timestamp__type_ctor_info_timestamp_0;

static const MR_PseudoTypeInfo recompilation__recompilation__field_types_item_id_0_0[2];

static const MR_DuArgLocn recompilation__recompilation__field_locns_item_id_0_0[2];

static const MR_DuFunctorDesc recompilation__recompilation__du_functor_desc_item_id_0_0;

static const MR_DuFunctorDescPtr recompilation__recompilation__du_stag_ordered_item_id_0_0[1];

static const MR_DuPtagLayout recompilation__recompilation__du_ptag_ordered_item_id_0[1];

static const MR_DuFunctorDescPtr recompilation__recompilation__du_name_ordered_item_id_0[1];

static const MR_Integer recompilation__recompilation__functor_number_map_item_id_0[1];

static const MR_PseudoTypeInfo recompilation__recompilation__field_types_item_id_set_3_0[10];

static const MR_ConstString recompilation__recompilation__field_names_item_id_set_3_0[10];

static const MR_DuFunctorDesc recompilation__recompilation__du_functor_desc_item_id_set_3_0;

static const MR_DuFunctorDescPtr recompilation__recompilation__du_stag_ordered_item_id_set_3_0[1];

static const MR_DuPtagLayout recompilation__recompilation__du_ptag_ordered_item_id_set_3[1];

static const MR_DuFunctorDescPtr recompilation__recompilation__du_name_ordered_item_id_set_3[1];

static const MR_Integer recompilation__recompilation__functor_number_map_item_id_set_3[1];

static const MR_PseudoTypeInfo recompilation__recompilation__field_types_item_name_0_0[2];

static const MR_DuFunctorDesc recompilation__recompilation__du_functor_desc_item_name_0_0;

static const MR_DuFunctorDescPtr recompilation__recompilation__du_stag_ordered_item_name_0_0[1];

static const MR_DuPtagLayout recompilation__recompilation__du_ptag_ordered_item_name_0[1];

static const MR_DuFunctorDescPtr recompilation__recompilation__du_name_ordered_item_name_0[1];

static const MR_Integer recompilation__recompilation__functor_number_map_item_name_0[1];

static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_0;

static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_1;

static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_2;

static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_3;

static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_4;

static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_5;

static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_6;

static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_7;

static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_8;

static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_9;

static const MR_EnumFunctorDescPtr recompilation__recompilation__enum_value_ordered_item_type_0[10];

static const MR_EnumFunctorDescPtr recompilation__recompilation__enum_name_ordered_item_type_0[10];

static const MR_Integer recompilation__recompilation__functor_number_map_item_type_0[10];

static const MR_FA_TypeInfo_Struct2 recompilation__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0;

static const MR_FA_TypeInfo_Struct3 recompilation__recompilation__ti_item_id_set_3tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0;

static const MR_FA_TypeInfo_Struct2 recompilation__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0recompilation__type_ctor_info_version_numbers_0;

static const MR_FA_TypeInfo_Struct3 recompilation__recompilation__ti_item_id_set_3tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_TypeInfo_Struct2 recompilation__tree234__ti_tree234_2recompilation__type_ctor_info_item_id_0set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0;

static const MR_PseudoTypeInfo recompilation__recompilation__field_types_recompilation_info_0_0[4];

static const MR_ConstString recompilation__recompilation__field_names_recompilation_info_0_0[4];

static const MR_DuFunctorDesc recompilation__recompilation__du_functor_desc_recompilation_info_0_0;

static const MR_DuFunctorDescPtr recompilation__recompilation__du_stag_ordered_recompilation_info_0_0[1];

static const MR_DuPtagLayout recompilation__recompilation__du_ptag_ordered_recompilation_info_0[1];

static const MR_DuFunctorDescPtr recompilation__recompilation__du_name_ordered_recompilation_info_0[1];

static const MR_Integer recompilation__recompilation__functor_number_map_recompilation_info_0[1];

static const MR_PseudoTypeInfo recompilation__recompilation__field_types_version_numbers_0_0[2];

static const MR_DuFunctorDesc recompilation__recompilation__du_functor_desc_version_numbers_0_0;

static const MR_DuFunctorDescPtr recompilation__recompilation__du_stag_ordered_version_numbers_0_0[1];

static const MR_DuPtagLayout recompilation__recompilation__du_ptag_ordered_version_numbers_0[1];

static const MR_DuFunctorDescPtr recompilation__recompilation__du_name_ordered_version_numbers_0[1];

static const MR_Integer recompilation__recompilation__functor_number_map_version_numbers_0[1];

static MR_Word MR_CALL 
recompilation__IntroducedFrom__func__map_ids__421__1_6_f_0(
  MR_Word TypeInfo_for_T_38,
  MR_Word TypeInfo_for_U_39,
  MR_Word Func_5,
  MR_Word Items0_6,
  MR_Word LambdaHeadVar__1_14,
  MR_Word LambdaHeadVar__2_15);

static void MR_CALL 
recompilation__record_expanded_item_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
recompilation__map_ids_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_bool MR_CALL 
recompilation____Unify____eqv_expanded_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
recompilation____Compare____eqv_expanded_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
recompilation____Unify____eqv_expanded_item_set_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
recompilation____Compare____eqv_expanded_item_set_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
recompilation____Unify____functor_set_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
recompilation____Compare____functor_set_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
recompilation____Unify____instance_version_numbers_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
recompilation____Compare____instance_version_numbers_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
recompilation____Unify____item_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
recompilation____Compare____item_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
recompilation____Unify____item_id_set_3_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5);

static void MR_CALL 
recompilation____Compare____item_id_set_3_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6);

static MR_bool MR_CALL 
recompilation____Unify____item_id_set_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
recompilation____Compare____item_id_set_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
recompilation____Unify____item_name_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
recompilation____Compare____item_name_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
recompilation____Unify____item_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
recompilation____Compare____item_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
recompilation____Unify____item_version_numbers_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
recompilation____Compare____item_version_numbers_0_0_10001(
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
recompilation____Unify____module_version_numbers_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
recompilation____Compare____module_version_numbers_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
recompilation____Unify____pred_or_func_set_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
recompilation____Compare____pred_or_func_set_0_0_10001(
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

static MR_bool MR_CALL 
recompilation____Unify____version_number_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
recompilation____Compare____version_number_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
recompilation____Unify____version_numbers_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
recompilation____Compare____version_numbers_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box recompilation_scalar_common_1[10][2];

static /* final */ const MR_Box recompilation_scalar_common_2[7][3];

static /* final */ const MR_Box recompilation_scalar_common_3[2][4];

static /* final */ const MR_Integer recompilation_scalar_common_6[1][3];

static /* final */ const MR_Box recompilation_scalar_common_7[1][10];

static /* final */ const MR_Box recompilation_scalar_common_8[1][1];

static /* final */ const MR_Box recompilation_scalar_common_9[1][6];


/* sealed */ struct recompilation__vector_common_type_4_0_s {
  const MR_String recompilation__vector_common_type_4_0__vct_4_f_0;
  const MR_Word recompilation__vector_common_type_4_0__vct_4_f_1;
};

static /* final */ const struct recompilation__vector_common_type_4_0_s recompilation_vector_common_4[32];

/* sealed */ struct recompilation__vector_common_type_5_0_s {
  const MR_String recompilation__vector_common_type_5_0__vct_5_f_0;
};

static /* final */ const struct recompilation__vector_common_type_5_0_s recompilation_vector_common_5[10];



static /* final */ const MR_Box recompilation_scalar_common_1[10][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_item_id_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_eqv_expanded_item_set_0))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &recompilation_scalar_common_1[2])))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &recompilation_scalar_common_1[3])))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &recompilation_scalar_common_1[4])))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &recompilation_scalar_common_1[5])))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &recompilation_scalar_common_1[6])))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &recompilation_scalar_common_1[7])))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &recompilation_scalar_common_1[8])))
  },
};

static /* final */ const MR_Box recompilation_scalar_common_2[7][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&recompilation_scalar_common_2[0])),
    ((MR_Box) (&recompilation_scalar_common_2[1]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_item_name_0)),
    ((MR_Box) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&recompilation_scalar_common_2[0])),
    ((MR_Box) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_version_numbers_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_item_id_0)),
    ((MR_Box) (&recompilation_scalar_common_1[0]))
  },
};

static /* final */ const MR_Box recompilation_scalar_common_3[2][4] = {
  /* row 0 */
  {
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_item_id_set_3)),
    ((MR_Box) (&recompilation_scalar_common_2[4])),
    ((MR_Box) (&recompilation_scalar_common_2[4])),
    ((MR_Box) (&recompilation_scalar_common_2[4]))
  },
  /* row 1 */
  {
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_item_id_set_3)),
    ((MR_Box) (&recompilation_scalar_common_2[2])),
    ((MR_Box) (&recompilation_scalar_common_2[2])),
    ((MR_Box) (&recompilation_scalar_common_2[2]))
  },
};

static /* final */ const MR_Integer recompilation_scalar_common_6[1][3] = {
  /* row 0 */
  {
    (MR_Integer) 2,
    (MR_Integer) 33,
    (MR_Integer) 65
  },
};

static /* final */ const MR_Box recompilation_scalar_common_7[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&recompilation_scalar_common_6[0])),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&recompilation____vpti_func_3__plain_recompilation__type_ctor_info_item_type_0__pseudo_1__pseudo_2)),
    ((MR_Box) (&recompilation__recompilation__pti_item_id_set_3__pseudo_1__pseudo_1__pseudo_1)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_item_type_0)),
    ((MR_Box) (&recompilation__recompilation__pti_item_id_set_3__pseudo_2__pseudo_2__pseudo_2)),
    ((MR_Box) (&recompilation__recompilation__pti_item_id_set_3__pseudo_2__pseudo_2__pseudo_2))
  },
};

static /* final */ const MR_Box recompilation_scalar_common_8[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) ""))
  },
};

static /* final */ const MR_Box recompilation_scalar_common_9[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_item_id_0)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_eqv_expanded_item_set_0)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_eqv_expanded_item_set_0))
  },
};


static /* final */ const struct recompilation__vector_common_type_4_0_s recompilation_vector_common_4[32] = {
  /* row 0 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 1 */
  {
    (MR_String) "foreign_proc",
    (MR_Integer) 9
  },
  /* row 2 */
  {
    (MR_String) "functor",
    (MR_Integer) 5
  },
  /* row 3 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 4 */
  {
    (MR_String) "predicate",
    (MR_Integer) 6
  },
  /* row 5 */
  {
    (MR_String) "typeclass",
    (MR_Integer) 4
  },
  /* row 6 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 7 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 8 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 9 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 10 */
  {
    (MR_String) "function",
    (MR_Integer) 7
  },
  /* row 11 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 12 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 13 */
  {
    (MR_String) "mode",
    (MR_Integer) 2
  },
  /* row 14 */
  {
    (MR_String) "type",
    (MR_Integer) 0
  },
  /* row 15 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 16 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 17 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 18 */
  {
    (MR_String) "inst",
    (MR_Integer) 3
  },
  /* row 19 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 20 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 21 */
  {
    (MR_String) "mutable",
    (MR_Integer) 8
  },
  /* row 22 */
  {
    (MR_String) "type_body",
    (MR_Integer) 1
  },
  /* row 23 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 24 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 25 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 26 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 27 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 28 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 29 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 30 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 31 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
};

static /* final */ const struct recompilation__vector_common_type_5_0_s recompilation_vector_common_5[10] = {
  /* row 0 */   {     (MR_String) "type" },
  /* row 1 */   {     (MR_String) "type_body" },
  /* row 2 */   {     (MR_String) "mode" },
  /* row 3 */   {     (MR_String) "inst" },
  /* row 4 */   {     (MR_String) "typeclass" },
  /* row 5 */   {     (MR_String) "functor" },
  /* row 6 */   {     (MR_String) "predicate" },
  /* row 7 */   {     (MR_String) "function" },
  /* row 8 */   {     (MR_String) "mutable" },
  /* row 9 */   {     (MR_String) "foreign_proc" },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_VA_PseudoTypeInfo_Struct3 recompilation____vpti_func_3__plain_recompilation__type_ctor_info_item_type_0__pseudo_1__pseudo_2 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) (&recompilation__recompilation__type_ctor_info_item_type_0),
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) ((MR_Integer) 2)
  }
};

static const MR_FA_PseudoTypeInfo_Struct3 recompilation__recompilation__pti_item_id_set_3__pseudo_1__pseudo_1__pseudo_1 = {
  &recompilation__recompilation__type_ctor_info_item_id_set_3,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_FA_PseudoTypeInfo_Struct3 recompilation__recompilation__pti_item_id_set_3__pseudo_2__pseudo_2__pseudo_2 = {
  &recompilation__recompilation__type_ctor_info_item_id_set_3,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 2),
    (MR_PseudoTypeInfo) ((MR_Integer) 2),
    (MR_PseudoTypeInfo) ((MR_Integer) 2)
  }
};

static const MR_FA_TypeInfo_Struct1 recompilation__maybe__ti_maybe_1recompilation__type_ctor_info_eqv_expanded_item_set_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&recompilation__recompilation__type_ctor_info_eqv_expanded_item_set_0)
  }
};

const MR_TypeCtorInfo_Struct recompilation__recompilation__type_ctor_info_eqv_expanded_info_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (recompilation____Unify____eqv_expanded_info_0_0_10001)),
  ((MR_Box) (recompilation____Compare____eqv_expanded_info_0_0_10001)),
  (MR_String) "recompilation",
  (MR_String) "eqv_expanded_info",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&recompilation__maybe__ti_maybe_1recompilation__type_ctor_info_eqv_expanded_item_set_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_FA_TypeInfo_Struct1 recompilation__set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) (&recompilation__recompilation__type_ctor_info_item_id_0)
  }
};

static const MR_PseudoTypeInfo recompilation__recompilation__field_types_eqv_expanded_item_set_0_0[2] = {
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&recompilation__set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0)
};

static const MR_DuFunctorDesc recompilation__recompilation__du_functor_desc_eqv_expanded_item_set_0_0 = {
  (MR_String) "eqv_expanded_item_set",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  recompilation__recompilation__field_types_eqv_expanded_item_set_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr recompilation__recompilation__du_stag_ordered_eqv_expanded_item_set_0_0[1] = {
  &recompilation__recompilation__du_functor_desc_eqv_expanded_item_set_0_0
};

static const MR_DuPtagLayout recompilation__recompilation__du_ptag_ordered_eqv_expanded_item_set_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    recompilation__recompilation__du_stag_ordered_eqv_expanded_item_set_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr recompilation__recompilation__du_name_ordered_eqv_expanded_item_set_0[1] = {
  &recompilation__recompilation__du_functor_desc_eqv_expanded_item_set_0_0
};

static const MR_Integer recompilation__recompilation__functor_number_map_eqv_expanded_item_set_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct recompilation__recompilation__type_ctor_info_eqv_expanded_item_set_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (recompilation____Unify____eqv_expanded_item_set_0_0_10001)),
  ((MR_Box) (recompilation____Compare____eqv_expanded_item_set_0_0_10001)),
  (MR_String) "recompilation",
  (MR_String) "eqv_expanded_item_set",
  {     recompilation__recompilation__du_name_ordered_eqv_expanded_item_set_0 },
  {     recompilation__recompilation__du_ptag_ordered_eqv_expanded_item_set_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  recompilation__recompilation__functor_number_map_eqv_expanded_item_set_0
};

static const MR_FA_TypeInfo_Struct2 recompilation__pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_TypeInfo_Struct2 recompilation__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

static const MR_FA_TypeInfo_Struct2 recompilation__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&recompilation__pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0),
    (MR_TypeInfo) (&recompilation__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

const MR_TypeCtorInfo_Struct recompilation__recompilation__type_ctor_info_functor_set_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (recompilation____Unify____functor_set_0_0_10001)),
  ((MR_Box) (recompilation____Compare____functor_set_0_0_10001)),
  (MR_String) "recompilation",
  (MR_String) "functor_set",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&recompilation__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_FA_TypeInfo_Struct2 recompilation__tree234__ti_tree234_2recompilation__type_ctor_info_item_name_0libs__timestamp__type_ctor_info_timestamp_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&recompilation__recompilation__type_ctor_info_item_name_0),
    (MR_TypeInfo) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0)
  }
};

const MR_TypeCtorInfo_Struct recompilation__recompilation__type_ctor_info_instance_version_numbers_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (recompilation____Unify____instance_version_numbers_0_0_10001)),
  ((MR_Box) (recompilation____Compare____instance_version_numbers_0_0_10001)),
  (MR_String) "recompilation",
  (MR_String) "instance_version_numbers",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&recompilation__tree234__ti_tree234_2recompilation__type_ctor_info_item_name_0libs__timestamp__type_ctor_info_timestamp_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_PseudoTypeInfo recompilation__recompilation__field_types_item_id_0_0[2] = {
  (MR_PseudoTypeInfo) (&recompilation__recompilation__type_ctor_info_item_type_0),
  (MR_PseudoTypeInfo) (&recompilation__recompilation__type_ctor_info_item_name_0)
};

static const MR_DuArgLocn recompilation__recompilation__field_locns_item_id_0_0[2] = {
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

static const MR_DuFunctorDesc recompilation__recompilation__du_functor_desc_item_id_0_0 = {
  (MR_String) "item_id",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  recompilation__recompilation__field_types_item_id_0_0,
  NULL,
  recompilation__recompilation__field_locns_item_id_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr recompilation__recompilation__du_stag_ordered_item_id_0_0[1] = {
  &recompilation__recompilation__du_functor_desc_item_id_0_0
};

static const MR_DuPtagLayout recompilation__recompilation__du_ptag_ordered_item_id_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    recompilation__recompilation__du_stag_ordered_item_id_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr recompilation__recompilation__du_name_ordered_item_id_0[1] = {
  &recompilation__recompilation__du_functor_desc_item_id_0_0
};

static const MR_Integer recompilation__recompilation__functor_number_map_item_id_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct recompilation__recompilation__type_ctor_info_item_id_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (recompilation____Unify____item_id_0_0_10001)),
  ((MR_Box) (recompilation____Compare____item_id_0_0_10001)),
  (MR_String) "recompilation",
  (MR_String) "item_id",
  {     recompilation__recompilation__du_name_ordered_item_id_0 },
  {     recompilation__recompilation__du_ptag_ordered_item_id_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  recompilation__recompilation__functor_number_map_item_id_0
};

static const MR_PseudoTypeInfo recompilation__recompilation__field_types_item_id_set_3_0[10] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) ((MR_Integer) 3),
  (MR_PseudoTypeInfo) ((MR_Integer) 2),
  (MR_PseudoTypeInfo) ((MR_Integer) 2),
  (MR_PseudoTypeInfo) ((MR_Integer) 2),
  (MR_PseudoTypeInfo) ((MR_Integer) 2)
};

static const MR_ConstString recompilation__recompilation__field_names_item_id_set_3_0[10] = {
  (MR_String) "types",
  (MR_String) "type_bodies",
  (MR_String) "modes",
  (MR_String) "insts",
  (MR_String) "typeclasses",
  (MR_String) "functors",
  (MR_String) "predicates",
  (MR_String) "functions",
  (MR_String) "mutables",
  (MR_String) "foreign_procs"
};

static const MR_DuFunctorDesc recompilation__recompilation__du_functor_desc_item_id_set_3_0 = {
  (MR_String) "item_id_set",
  INT16_C(10),
  UINT16_C(1023),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  recompilation__recompilation__field_types_item_id_set_3_0,
  recompilation__recompilation__field_names_item_id_set_3_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr recompilation__recompilation__du_stag_ordered_item_id_set_3_0[1] = {
  &recompilation__recompilation__du_functor_desc_item_id_set_3_0
};

static const MR_DuPtagLayout recompilation__recompilation__du_ptag_ordered_item_id_set_3[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    recompilation__recompilation__du_stag_ordered_item_id_set_3_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr recompilation__recompilation__du_name_ordered_item_id_set_3[1] = {
  &recompilation__recompilation__du_functor_desc_item_id_set_3_0
};

static const MR_Integer recompilation__recompilation__functor_number_map_item_id_set_3[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct recompilation__recompilation__type_ctor_info_item_id_set_3 = {
  (MR_Integer) 3,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (recompilation____Unify____item_id_set_3_0_10001)),
  ((MR_Box) (recompilation____Compare____item_id_set_3_0_10001)),
  (MR_String) "recompilation",
  (MR_String) "item_id_set",
  {     recompilation__recompilation__du_name_ordered_item_id_set_3 },
  {     recompilation__recompilation__du_ptag_ordered_item_id_set_3 },
  (MR_Integer) 1,
  UINT16_C(4),
  recompilation__recompilation__functor_number_map_item_id_set_3
};

const MR_TypeCtorInfo_Struct recompilation__recompilation__type_ctor_info_item_id_set_1 = {
  (MR_Integer) 1,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (recompilation____Unify____item_id_set_1_0_10001)),
  ((MR_Box) (recompilation____Compare____item_id_set_1_0_10001)),
  (MR_String) "recompilation",
  (MR_String) "item_id_set",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&recompilation__recompilation__pti_item_id_set_3__pseudo_1__pseudo_1__pseudo_1) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_PseudoTypeInfo recompilation__recompilation__field_types_item_name_0_0[2] = {
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc recompilation__recompilation__du_functor_desc_item_name_0_0 = {
  (MR_String) "item_name",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  recompilation__recompilation__field_types_item_name_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr recompilation__recompilation__du_stag_ordered_item_name_0_0[1] = {
  &recompilation__recompilation__du_functor_desc_item_name_0_0
};

static const MR_DuPtagLayout recompilation__recompilation__du_ptag_ordered_item_name_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    recompilation__recompilation__du_stag_ordered_item_name_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr recompilation__recompilation__du_name_ordered_item_name_0[1] = {
  &recompilation__recompilation__du_functor_desc_item_name_0_0
};

static const MR_Integer recompilation__recompilation__functor_number_map_item_name_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct recompilation__recompilation__type_ctor_info_item_name_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (recompilation____Unify____item_name_0_0_10001)),
  ((MR_Box) (recompilation____Compare____item_name_0_0_10001)),
  (MR_String) "recompilation",
  (MR_String) "item_name",
  {     recompilation__recompilation__du_name_ordered_item_name_0 },
  {     recompilation__recompilation__du_ptag_ordered_item_name_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  recompilation__recompilation__functor_number_map_item_name_0
};

static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_0 = {
  (MR_String) "type_abstract_item",
  INT32_C(0)
};

static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_1 = {
  (MR_String) "type_body_item",
  INT32_C(1)
};

static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_2 = {
  (MR_String) "mode_item",
  INT32_C(2)
};

static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_3 = {
  (MR_String) "inst_item",
  INT32_C(3)
};

static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_4 = {
  (MR_String) "typeclass_item",
  INT32_C(4)
};

static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_5 = {
  (MR_String) "functor_item",
  INT32_C(5)
};

static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_6 = {
  (MR_String) "predicate_item",
  INT32_C(6)
};

static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_7 = {
  (MR_String) "function_item",
  INT32_C(7)
};

static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_8 = {
  (MR_String) "mutable_item",
  INT32_C(8)
};

static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_9 = {
  (MR_String) "foreign_proc_item",
  INT32_C(9)
};

static const MR_EnumFunctorDescPtr recompilation__recompilation__enum_value_ordered_item_type_0[10] = {
  &recompilation__recompilation__enum_functor_desc_item_type_0_0,
  &recompilation__recompilation__enum_functor_desc_item_type_0_1,
  &recompilation__recompilation__enum_functor_desc_item_type_0_2,
  &recompilation__recompilation__enum_functor_desc_item_type_0_3,
  &recompilation__recompilation__enum_functor_desc_item_type_0_4,
  &recompilation__recompilation__enum_functor_desc_item_type_0_5,
  &recompilation__recompilation__enum_functor_desc_item_type_0_6,
  &recompilation__recompilation__enum_functor_desc_item_type_0_7,
  &recompilation__recompilation__enum_functor_desc_item_type_0_8,
  &recompilation__recompilation__enum_functor_desc_item_type_0_9
};

static const MR_EnumFunctorDescPtr recompilation__recompilation__enum_name_ordered_item_type_0[10] = {
  &recompilation__recompilation__enum_functor_desc_item_type_0_9,
  &recompilation__recompilation__enum_functor_desc_item_type_0_7,
  &recompilation__recompilation__enum_functor_desc_item_type_0_5,
  &recompilation__recompilation__enum_functor_desc_item_type_0_3,
  &recompilation__recompilation__enum_functor_desc_item_type_0_2,
  &recompilation__recompilation__enum_functor_desc_item_type_0_8,
  &recompilation__recompilation__enum_functor_desc_item_type_0_6,
  &recompilation__recompilation__enum_functor_desc_item_type_0_0,
  &recompilation__recompilation__enum_functor_desc_item_type_0_1,
  &recompilation__recompilation__enum_functor_desc_item_type_0_4
};

static const MR_Integer recompilation__recompilation__functor_number_map_item_type_0[10] = {
  (MR_Integer) 7,
  (MR_Integer) 8,
  (MR_Integer) 4,
  (MR_Integer) 3,
  (MR_Integer) 9,
  (MR_Integer) 2,
  (MR_Integer) 6,
  (MR_Integer) 1,
  (MR_Integer) 5,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct recompilation__recompilation__type_ctor_info_item_type_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (recompilation____Unify____item_type_0_0_10001)),
  ((MR_Box) (recompilation____Compare____item_type_0_0_10001)),
  (MR_String) "recompilation",
  (MR_String) "item_type",
  {     recompilation__recompilation__enum_name_ordered_item_type_0 },
  {     recompilation__recompilation__enum_value_ordered_item_type_0 },
  (MR_Integer) 10,
  UINT16_C(4),
  recompilation__recompilation__functor_number_map_item_type_0
};

static const MR_FA_TypeInfo_Struct2 recompilation__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&recompilation__pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0),
    (MR_TypeInfo) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0)
  }
};

static const MR_FA_TypeInfo_Struct3 recompilation__recompilation__ti_item_id_set_3tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0 = {
  &recompilation__recompilation__type_ctor_info_item_id_set_3,
  {
    (MR_TypeInfo) (&recompilation__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0),
    (MR_TypeInfo) (&recompilation__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0),
    (MR_TypeInfo) (&recompilation__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0)
  }
};

const MR_TypeCtorInfo_Struct recompilation__recompilation__type_ctor_info_item_version_numbers_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (recompilation____Unify____item_version_numbers_0_0_10001)),
  ((MR_Box) (recompilation____Compare____item_version_numbers_0_0_10001)),
  (MR_String) "recompilation",
  (MR_String) "item_version_numbers",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&recompilation__recompilation__ti_item_id_set_3tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

const MR_TypeCtorInfo_Struct recompilation__recompilation__type_ctor_info_module_qualifier_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (recompilation____Unify____module_qualifier_0_0_10001)),
  ((MR_Box) (recompilation____Compare____module_qualifier_0_0_10001)),
  (MR_String) "recompilation",
  (MR_String) "module_qualifier",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_FA_TypeInfo_Struct2 recompilation__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0recompilation__type_ctor_info_version_numbers_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&recompilation__recompilation__type_ctor_info_version_numbers_0)
  }
};

const MR_TypeCtorInfo_Struct recompilation__recompilation__type_ctor_info_module_version_numbers_map_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (recompilation____Unify____module_version_numbers_map_0_0_10001)),
  ((MR_Box) (recompilation____Compare____module_version_numbers_map_0_0_10001)),
  (MR_String) "recompilation",
  (MR_String) "module_version_numbers_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&recompilation__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0recompilation__type_ctor_info_version_numbers_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

const MR_TypeCtorInfo_Struct recompilation__recompilation__type_ctor_info_pred_or_func_set_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (recompilation____Unify____pred_or_func_set_0_0_10001)),
  ((MR_Box) (recompilation____Compare____pred_or_func_set_0_0_10001)),
  (MR_String) "recompilation",
  (MR_String) "pred_or_func_set",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&recompilation__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_FA_TypeInfo_Struct3 recompilation__recompilation__ti_item_id_set_3tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &recompilation__recompilation__type_ctor_info_item_id_set_3,
  {
    (MR_TypeInfo) (&recompilation__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&recompilation__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&recompilation__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

static const MR_FA_TypeInfo_Struct2 recompilation__tree234__ti_tree234_2recompilation__type_ctor_info_item_id_0set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&recompilation__recompilation__type_ctor_info_item_id_0),
    (MR_TypeInfo) (&recompilation__set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0)
  }
};

static const MR_PseudoTypeInfo recompilation__recompilation__field_types_recompilation_info_0_0[4] = {
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&recompilation__recompilation__ti_item_id_set_3tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&recompilation__tree234__ti_tree234_2recompilation__type_ctor_info_item_id_0set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0),
  (MR_PseudoTypeInfo) (&recompilation__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0recompilation__type_ctor_info_version_numbers_0)
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
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (recompilation____Unify____recompilation_info_0_0_10001)),
  ((MR_Box) (recompilation____Compare____recompilation_info_0_0_10001)),
  (MR_String) "recompilation",
  (MR_String) "recompilation_info",
  {     recompilation__recompilation__du_name_ordered_recompilation_info_0 },
  {     recompilation__recompilation__du_ptag_ordered_recompilation_info_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  recompilation__recompilation__functor_number_map_recompilation_info_0
};

const MR_TypeCtorInfo_Struct recompilation__recompilation__type_ctor_info_simple_item_set_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (recompilation____Unify____simple_item_set_0_0_10001)),
  ((MR_Box) (recompilation____Compare____simple_item_set_0_0_10001)),
  (MR_String) "recompilation",
  (MR_String) "simple_item_set",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&recompilation__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

const MR_TypeCtorInfo_Struct recompilation__recompilation__type_ctor_info_used_items_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (recompilation____Unify____used_items_0_0_10001)),
  ((MR_Box) (recompilation____Compare____used_items_0_0_10001)),
  (MR_String) "recompilation",
  (MR_String) "used_items",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&recompilation__recompilation__ti_item_id_set_3tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

const MR_TypeCtorInfo_Struct recompilation__recompilation__type_ctor_info_version_number_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (recompilation____Unify____version_number_0_0_10001)),
  ((MR_Box) (recompilation____Compare____version_number_0_0_10001)),
  (MR_String) "recompilation",
  (MR_String) "version_number",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

const MR_TypeCtorInfo_Struct recompilation__recompilation__type_ctor_info_version_number_map_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (recompilation____Unify____version_number_map_0_0_10001)),
  ((MR_Box) (recompilation____Compare____version_number_map_0_0_10001)),
  (MR_String) "recompilation",
  (MR_String) "version_number_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&recompilation__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_PseudoTypeInfo recompilation__recompilation__field_types_version_numbers_0_0[2] = {
  (MR_PseudoTypeInfo) (&recompilation__recompilation__ti_item_id_set_3tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0),
  (MR_PseudoTypeInfo) (&recompilation__tree234__ti_tree234_2recompilation__type_ctor_info_item_name_0libs__timestamp__type_ctor_info_timestamp_0)
};

static const MR_DuFunctorDesc recompilation__recompilation__du_functor_desc_version_numbers_0_0 = {
  (MR_String) "version_numbers",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  recompilation__recompilation__field_types_version_numbers_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr recompilation__recompilation__du_stag_ordered_version_numbers_0_0[1] = {
  &recompilation__recompilation__du_functor_desc_version_numbers_0_0
};

static const MR_DuPtagLayout recompilation__recompilation__du_ptag_ordered_version_numbers_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    recompilation__recompilation__du_stag_ordered_version_numbers_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr recompilation__recompilation__du_name_ordered_version_numbers_0[1] = {
  &recompilation__recompilation__du_functor_desc_version_numbers_0_0
};

static const MR_Integer recompilation__recompilation__functor_number_map_version_numbers_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct recompilation__recompilation__type_ctor_info_version_numbers_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (recompilation____Unify____version_numbers_0_0_10001)),
  ((MR_Box) (recompilation____Compare____version_numbers_0_0_10001)),
  (MR_String) "recompilation",
  (MR_String) "version_numbers",
  {     recompilation__recompilation__du_name_ordered_version_numbers_0 },
  {     recompilation__recompilation__du_ptag_ordered_version_numbers_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  recompilation__recompilation__functor_number_map_version_numbers_0
};

static MR_Word MR_CALL 
recompilation__IntroducedFrom__func__map_ids__421__1_6_f_0(
  MR_Word TypeInfo_for_T_38,
  MR_Word TypeInfo_for_U_39,
  MR_Word Func_5,
  MR_Word Items0_6,
  MR_Word LambdaHeadVar__1_14,
  MR_Word LambdaHeadVar__2_15)
{
  {
    MR_Word LambdaHeadVar__3_16;
    MR_Box Var_17;
    MR_Box Var_18;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);

    Var_18 = recompilation__extract_ids_2_f_0(TypeInfo_for_T_38, Items0_6, LambdaHeadVar__1_14);
    func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), Func_5, (MR_Integer) 1))));
    Var_17 = func_0(((MR_Box) (Func_5)), ((MR_Box) (LambdaHeadVar__1_14)), Var_18);
    recompilation__update_ids_4_p_0(TypeInfo_for_U_39, LambdaHeadVar__1_14, Var_17, LambdaHeadVar__2_15, &LambdaHeadVar__3_16);
    return LambdaHeadVar__3_16;
  }
}

void MR_CALL 
recompilation____Compare____version_numbers_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_6;

      mercury__builtin__compare_3_p_0((MR_Word) (&recompilation_scalar_common_3[0]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        mercury__builtin__compare_3_p_0((MR_Word) (&recompilation_scalar_common_2[3]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      }
    }
  }
}

MR_bool MR_CALL 
recompilation____Unify____version_numbers_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_10_10;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

      succeeded = recompilation____Unify____item_id_set_3_0((MR_Word) (&recompilation_scalar_common_2[4]), (MR_Word) (&recompilation_scalar_common_2[4]), (MR_Word) (&recompilation_scalar_common_2[4]), ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        TypeInfo_10_10 = (MR_Word) (&recompilation_scalar_common_2[3]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      }
    }
    return succeeded;
  }
}

void MR_CALL 
recompilation____Compare____version_number_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&recompilation_scalar_common_2[4]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
recompilation____Unify____version_number_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&recompilation_scalar_common_2[4]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
recompilation____Compare____version_number_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    libs__timestamp____Compare____timestamp_0_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
recompilation____Unify____version_number_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = libs__timestamp____Unify____timestamp_0_0(Cast_HeadVar1_3, Cast_HeadVar2_4);
    return succeeded;
  }
}

void MR_CALL 
recompilation____Compare____used_items_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&recompilation_scalar_common_3[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
recompilation____Unify____used_items_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = recompilation____Unify____item_id_set_3_0((MR_Word) (&recompilation_scalar_common_2[2]), (MR_Word) (&recompilation_scalar_common_2[2]), (MR_Word) (&recompilation_scalar_common_2[2]), Cast_HeadVar1_3, Cast_HeadVar2_4);
    return succeeded;
  }
}

void MR_CALL 
recompilation____Compare____simple_item_set_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&recompilation_scalar_common_2[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
recompilation____Unify____simple_item_set_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&recompilation_scalar_common_2[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
recompilation____Compare____recompilation_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_15 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_16 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_15 == CastY_16);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word SubResult1_6;

      mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__builtin__compare_3_p_0((MR_Word) (&recompilation_scalar_common_3[1]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;

          mercury__builtin__compare_3_p_0((MR_Word) (&recompilation_scalar_common_2[6]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
          succeeded = (SubResult3_12 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
          {
            mercury__builtin__compare_3_p_0((MR_Word) (&recompilation_scalar_common_2[5]), HeadVar__1_1, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
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
      MR_Word TypeInfo_16_16;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));

      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        TypeInfo_14_14 = (MR_Word) (&recompilation_scalar_common_2[2]);
        succeeded = recompilation____Unify____item_id_set_3_0(TypeInfo_14_14, TypeInfo_14_14, TypeInfo_14_14, ArgX2_5, ArgY2_6);
        if (succeeded)
        {
          TypeInfo_15_15 = (MR_Word) (&recompilation_scalar_common_2[6]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_15, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
          if (succeeded)
          {
            TypeInfo_16_16 = (MR_Word) (&recompilation_scalar_common_2[5]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          }
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
recompilation____Compare____pred_or_func_set_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&recompilation_scalar_common_2[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
recompilation____Unify____pred_or_func_set_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&recompilation_scalar_common_2[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
recompilation____Compare____module_version_numbers_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&recompilation_scalar_common_2[5]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
recompilation____Unify____module_version_numbers_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&recompilation_scalar_common_2[5]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
recompilation____Compare____module_qualifier_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mdbcomp__sym_name____Compare____sym_name_0_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
recompilation____Unify____module_qualifier_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Cast_HeadVar1_3, Cast_HeadVar2_4);
    return succeeded;
  }
}

void MR_CALL 
recompilation____Compare____item_version_numbers_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&recompilation_scalar_common_3[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
recompilation____Unify____item_version_numbers_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = recompilation____Unify____item_id_set_3_0((MR_Word) (&recompilation_scalar_common_2[4]), (MR_Word) (&recompilation_scalar_common_2[4]), (MR_Word) (&recompilation_scalar_common_2[4]), Cast_HeadVar1_3, Cast_HeadVar2_4);
    return succeeded;
  }
}

void MR_CALL 
recompilation____Compare____item_type_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
}

MR_bool MR_CALL 
recompilation____Unify____item_type_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
recompilation____Compare____item_id_set_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    recompilation____Compare____item_id_set_3_0(TypeInfo_for_T_6, TypeInfo_for_T_6, TypeInfo_for_T_6, HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

void MR_CALL 
recompilation____Compare____item_id_set_3_0(
  MR_Word TypeInfo_for_Map_35,
  MR_Word TypeInfo_for_Set_36,
  MR_Word TypeInfo_for_Cons_37,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_33 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_34 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_33 == CastY_34);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Box ArgX1_4 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));
      MR_Box ArgY1_5 = (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0));
      MR_Box ArgX2_7 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1));
      MR_Box ArgY2_8 = (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1));
      MR_Box ArgX3_10 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2));
      MR_Box ArgY3_11 = (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2));
      MR_Box ArgX4_13 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3));
      MR_Box ArgY4_14 = (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3));
      MR_Box ArgX5_16 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4));
      MR_Box ArgY5_17 = (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4));
      MR_Box ArgX6_19 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5));
      MR_Box ArgY6_20 = (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5));
      MR_Box ArgX7_22 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6));
      MR_Box ArgY7_23 = (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6));
      MR_Box ArgX8_25 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7));
      MR_Box ArgY8_26 = (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 7));
      MR_Box ArgX9_28 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 8));
      MR_Box ArgY9_29 = (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 8));
      MR_Box ArgX10_31 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 9));
      MR_Box ArgY10_32 = (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 9));
      MR_Word SubResult1_6;

      mercury__builtin__compare_3_p_0(TypeInfo_for_Map_35, &SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__builtin__compare_3_p_0(TypeInfo_for_Map_35, &SubResult2_9, ArgX2_7, ArgY2_8);
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;

          mercury__builtin__compare_3_p_0(TypeInfo_for_Map_35, &SubResult3_12, ArgX3_10, ArgY3_11);
          succeeded = (SubResult3_12 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
          {
            MR_Word SubResult4_15;

            mercury__builtin__compare_3_p_0(TypeInfo_for_Map_35, &SubResult4_15, ArgX4_13, ArgY4_14);
            succeeded = (SubResult4_15 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult4_15;
            else
            {
              MR_Word SubResult5_18;

              mercury__builtin__compare_3_p_0(TypeInfo_for_Map_35, &SubResult5_18, ArgX5_16, ArgY5_17);
              succeeded = (SubResult5_18 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult5_18;
              else
              {
                MR_Word SubResult6_21;

                mercury__builtin__compare_3_p_0(TypeInfo_for_Cons_37, &SubResult6_21, ArgX6_19, ArgY6_20);
                succeeded = (SubResult6_21 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult6_21;
                else
                {
                  MR_Word SubResult7_24;

                  mercury__builtin__compare_3_p_0(TypeInfo_for_Set_36, &SubResult7_24, ArgX7_22, ArgY7_23);
                  succeeded = (SubResult7_24 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult7_24;
                  else
                  {
                    MR_Word SubResult8_27;

                    mercury__builtin__compare_3_p_0(TypeInfo_for_Set_36, &SubResult8_27, ArgX8_25, ArgY8_26);
                    succeeded = (SubResult8_27 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult8_27;
                    else
                    {
                      MR_Word SubResult9_30;

                      mercury__builtin__compare_3_p_0(TypeInfo_for_Set_36, &SubResult9_30, ArgX9_28, ArgY9_29);
                      succeeded = (SubResult9_30 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult9_30;
                      else
                        mercury__builtin__compare_3_p_0(TypeInfo_for_Set_36, HeadVar__1_1, ArgX10_31, ArgY10_32);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
recompilation____Unify____item_id_set_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = recompilation____Unify____item_id_set_3_0(TypeInfo_for_T_5, TypeInfo_for_T_5, TypeInfo_for_T_5, Cast_HeadVar1_3, Cast_HeadVar2_4);
    return succeeded;
  }
}

MR_bool MR_CALL 
recompilation____Unify____item_id_set_3_0(
  MR_Word TypeInfo_for_Map_25,
  MR_Word TypeInfo_for_Set_26,
  MR_Word TypeInfo_for_Cons_27,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_23 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_24 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_23 == CastY_24);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Box ArgX1_3 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0));
      MR_Box ArgY1_4 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));
      MR_Box ArgX2_5 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1));
      MR_Box ArgY2_6 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1));
      MR_Box ArgX3_7 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2));
      MR_Box ArgY3_8 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2));
      MR_Box ArgX4_9 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3));
      MR_Box ArgY4_10 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3));
      MR_Box ArgX5_11 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4));
      MR_Box ArgY5_12 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4));
      MR_Box ArgX6_13 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5));
      MR_Box ArgY6_14 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5));
      MR_Box ArgX7_15 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6));
      MR_Box ArgY7_16 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6));
      MR_Box ArgX8_17 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 7));
      MR_Box ArgY8_18 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7));
      MR_Box ArgX9_19 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 8));
      MR_Box ArgY9_20 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 8));
      MR_Box ArgX10_21 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 9));
      MR_Box ArgY10_22 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 9));

      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_Map_25, ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_Map_25, ArgX2_5, ArgY2_6);
        if (succeeded)
        {
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_Map_25, ArgX3_7, ArgY3_8);
          if (succeeded)
          {
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_Map_25, ArgX4_9, ArgY4_10);
            if (succeeded)
            {
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_Map_25, ArgX5_11, ArgY5_12);
              if (succeeded)
              {
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_Cons_27, ArgX6_13, ArgY6_14);
                if (succeeded)
                {
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_Set_26, ArgX7_15, ArgY7_16);
                  if (succeeded)
                  {
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_Set_26, ArgX8_17, ArgY8_18);
                    if (succeeded)
                    {
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_Set_26, ArgX9_19, ArgY9_20);
                      if (succeeded)
                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_Set_26, ArgX10_21, ArgY10_22);
                    }
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
}

void MR_CALL 
recompilation____Compare____item_id_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 15);
      MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 15);
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
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
        recompilation____Compare____item_name_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
    }
  }
}

void MR_CALL 
recompilation____Compare____item_name_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
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
}

MR_bool MR_CALL 
recompilation____Unify____item_id_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 15);
      MR_Word ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 15);
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
        succeeded = recompilation____Unify____item_name_0_0(ArgX2_5, ArgY2_6);
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
recompilation____Unify____item_name_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
        succeeded = (ArgX2_5 == ArgY2_6);
    }
    return succeeded;
  }
}

void MR_CALL 
recompilation____Compare____instance_version_numbers_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&recompilation_scalar_common_2[3]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
recompilation____Unify____instance_version_numbers_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&recompilation_scalar_common_2[3]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
recompilation____Compare____functor_set_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&recompilation_scalar_common_2[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
recompilation____Unify____functor_set_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&recompilation_scalar_common_2[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
recompilation____Compare____eqv_expanded_item_set_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_6;

      mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        mercury__builtin__compare_3_p_0((MR_Word) (&recompilation_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      }
    }
  }
}

MR_bool MR_CALL 
recompilation____Unify____eqv_expanded_item_set_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_10_10;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        TypeInfo_10_10 = (MR_Word) (&recompilation_scalar_common_1[0]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      }
    }
    return succeeded;
  }
}

void MR_CALL 
recompilation____Compare____eqv_expanded_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&recompilation_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
recompilation____Unify____eqv_expanded_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&recompilation_scalar_common_1[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
recompilation__record_expanded_item_2_3_p_0(
  MR_Word ItemId_4,
  MR_Word ExpandedItemSet0_5,
  MR_Word * ExpandedItemSet_6)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExpandedItemSet0_5, (MR_Integer) 0))));
    MR_Word Items0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExpandedItemSet0_5, (MR_Integer) 1))));
    MR_Word ItemName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemId_4, (MR_Integer) 1))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemName_10, (MR_Integer) 0))));
    MR_Word Var_16;

    succeeded = ((MR_tag((MR_Word) Var_14)) == (MR_Integer) 1);
    if (succeeded)
    {
      Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_14, (MR_Integer) 0))));
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_7, Var_16);
    }
    if (succeeded)
      *ExpandedItemSet_6 = ExpandedItemSet0_5;
    else
    {
      MR_Word Items_13;

      mercury__set__insert_3_p_0((MR_Word) (&recompilation__recompilation__type_ctor_info_item_id_0), ((MR_Box) (ItemId_4)), Items0_8, &Items_13);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *ExpandedItemSet_6 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleName_7));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Items_13));
      }
    }
  }
}

void MR_CALL 
recompilation__finish_recording_expanded_items_4_p_0(
  MR_Word Item_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    else
      *HeadVar__4_4 = HeadVar__3_3;
  else
  {
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140recompilation.finish_recording_expanded_items\'/4", (MR_String) "items but no info");
        return;
      }
    }
    else
    {
      MR_Word ExpandedItems_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_19, (MR_Integer) 1))));
      MR_Word Info0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Info_17;

      recompilation__record_expanded_items_4_p_0(Item_1, ExpandedItems_15, Info0_16, &Info_17);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__4_4 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Info_17));
      }
    }
  }
}

static void MR_CALL 
recompilation__record_expanded_item_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_ExpandedItemSet_6;

    recompilation__record_expanded_item_2_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_ExpandedItemSet_6);
    *wrapper_arg_2 = ((MR_Box) (conv0_ExpandedItemSet_6));
  }
}

void MR_CALL 
recompilation__record_expanded_item_3_p_0(
  MR_Word Item_4,
  MR_Word STATE_VARIABLE_EquivTypeInfo_0_6,
  MR_Word * STATE_VARIABLE_EquivTypeInfo_7)
{
  {
    MR_Word Var_8;

    {
      Var_8 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_8, 0) = ((MR_Box) (&recompilation_scalar_common_9[0]));
      MR_hl_field(MR_mktag(0), Var_8, 1) = ((MR_Box) (recompilation__record_expanded_item_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_8, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_8, 3) = ((MR_Box) (Item_4));
    }
    mercury__maybe__map_maybe_3_p_0((MR_Word) (&recompilation__recompilation__type_ctor_info_eqv_expanded_item_set_0), (MR_Word) (&recompilation__recompilation__type_ctor_info_eqv_expanded_item_set_0), Var_8, STATE_VARIABLE_EquivTypeInfo_0_6, STATE_VARIABLE_EquivTypeInfo_7);
  }
}

void MR_CALL 
recompilation__maybe_start_recording_expanded_items_4_p_0(
  MR_Word ModuleName_1,
  MR_Word SymName_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  {
    MR_bool succeeded;

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Var_15;

      succeeded = ((MR_tag((MR_Word) SymName_2)) == (MR_Integer) 1);
      if (succeeded)
      {
        Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SymName_2, (MR_Integer) 0))));
        succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_1, Var_15);
      }
      if (succeeded)
        *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word Var_12;
        MR_Word Var_13;

        Var_13 = mercury__set__init_0_f_0((MR_Word) (&recompilation__recompilation__type_ctor_info_item_id_0));
        {
          Var_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (ModuleName_1));
          MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (Var_13));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_12));
        }
      }
    }
  }
}

void MR_CALL 
recompilation__record_expanded_items_4_p_0(
  MR_Word Item_5,
  MR_Word ExpandedItems_6,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14)
{
  {
    MR_bool succeeded;

    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&recompilation__recompilation__type_ctor_info_item_id_0), ExpandedItems_6);
    if (succeeded)
      *STATE_VARIABLE_Info_14 = STATE_VARIABLE_Info_0_13;
    else
    {
      MR_Word DepsMap0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_13, (MR_Integer) 2))));
      MR_Word Deps1_10;
      MR_Word Deps_11;
      MR_Word DepsMap_12;
      MR_Word Deps0_9;
      MR_Box conv0_Deps0_9;
      MR_Word Var_19;
      MR_Word Var_20;
      MR_Word Var_22;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&recompilation__recompilation__type_ctor_info_item_id_0), (MR_Word) (&recompilation_scalar_common_1[0]), DepsMap0_8, ((MR_Box) (Item_5)), &conv0_Deps0_9);
      if (succeeded)
      {
        Deps0_9 = ((MR_Word) (conv0_Deps0_9));
        succeeded = MR_TRUE;
      }
      if (succeeded)
        Deps1_10 = Deps0_9;
      else
      {
        mercury__set__init_1_p_0((MR_Word) (&recompilation__recompilation__type_ctor_info_item_id_0), &Deps1_10);
      }
      mercury__set__union_3_p_0((MR_Word) (&recompilation__recompilation__type_ctor_info_item_id_0), Deps1_10, ExpandedItems_6, &Deps_11);
      mercury__map__set_4_p_0((MR_Word) (&recompilation__recompilation__type_ctor_info_item_id_0), (MR_Word) (&recompilation_scalar_common_1[0]), ((MR_Box) (Item_5)), ((MR_Box) (Deps_11)), DepsMap0_8, &DepsMap_12);
      Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_13, (MR_Integer) 0))));
      Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_13, (MR_Integer) 1))));
      Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_13, (MR_Integer) 3))));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Info_14 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_19));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_20));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (DepsMap_12));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_22));
      }
    }
  }
}

void MR_CALL 
recompilation__record_used_item_5_p_0(
  MR_Word ItemType_6,
  MR_Word Id_7,
  MR_Word QualifiedId_8,
  MR_Word STATE_VARIABLE_Info_0_26,
  MR_Word * STATE_VARIABLE_Info_27)
{
  {
    MR_bool succeeded = (ItemType_6 != (MR_Integer) 6);
    MR_Word QualifiedName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualifiedId_8, (MR_Integer) 0))));
    MR_Integer Arity_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), QualifiedId_8, (MR_Integer) 1))));

    if (succeeded)
    {
      succeeded = (ItemType_6 != (MR_Integer) 7);
      if (succeeded)
      {
        succeeded = (ItemType_6 != (MR_Integer) 5);
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) QualifiedName_10)) == (MR_Integer) 0);
          if (succeeded)
          {
          }
        }
      }
    }
    if (succeeded)
      *STATE_VARIABLE_Info_27 = STATE_VARIABLE_Info_0_26;
    else
    {
      MR_Word ItemSet0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_26, (MR_Integer) 1))));
      MR_Word IdSet0_14;
      MR_String UnqualifiedName_15;
      MR_Word ModuleName_16;
      MR_Word UnqualifiedId_17;
      MR_Word SymName_18;
      MR_Word ModuleQualifier_20;
      MR_Word MatchingNames1_22;
      MR_Box conv0_IdSet0_14;
      MR_Word MatchingNames0_21;
      MR_Box conv1_MatchingNames0_21;

      conv0_IdSet0_14 = recompilation__extract_ids_2_f_0((MR_Word) (&recompilation_scalar_common_2[2]), ItemSet0_13, ItemType_6);
      IdSet0_14 = ((MR_Word) (conv0_IdSet0_14));
      UnqualifiedName_15 = mdbcomp__sym_name__unqualify_name_1_f_0(QualifiedName_10);
      if (((MR_tag((MR_Word) QualifiedName_10)) == (MR_Integer) 1))
        ModuleName_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), QualifiedName_10, (MR_Integer) 0))));
      else
        ModuleName_16 = (MR_Word) (&recompilation_scalar_common_8[0]);
      {
        UnqualifiedId_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), UnqualifiedId_17, 0) = ((MR_Box) (UnqualifiedName_15));
        MR_hl_field(MR_mktag(0), UnqualifiedId_17, 1) = ((MR_Box) (Arity_11));
      }
      SymName_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Id_7, (MR_Integer) 0))));
      if (((MR_tag((MR_Word) SymName_18)) == (MR_Integer) 1))
        ModuleQualifier_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SymName_18, (MR_Integer) 0))));
      else
        ModuleQualifier_20 = (MR_Word) (&recompilation_scalar_common_8[0]);
      succeeded = mercury__map__search_3_p_0((MR_Word) (&recompilation_scalar_common_2[0]), (MR_Word) (&recompilation_scalar_common_2[1]), IdSet0_14, ((MR_Box) (UnqualifiedId_17)), &conv1_MatchingNames0_21);
      if (succeeded)
      {
        MatchingNames0_21 = ((MR_Word) (conv1_MatchingNames0_21));
        succeeded = MR_TRUE;
      }
      if (succeeded)
        MatchingNames1_22 = MatchingNames0_21;
      else
      {
        mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &MatchingNames1_22);
      }
      succeeded = mercury__map__contains_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), MatchingNames1_22, ((MR_Box) (ModuleQualifier_20)));
      if (succeeded)
        *STATE_VARIABLE_Info_27 = STATE_VARIABLE_Info_0_26;
      else
      {
        MR_Word MatchingNames_23;
        MR_Word IdSet_24;
        MR_Word ItemSet_25;
        MR_Word Var_32;
        MR_Word Var_34;
        MR_Word Var_35;

        mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleQualifier_20)), ((MR_Box) (ModuleName_16)), MatchingNames1_22, &MatchingNames_23);
        mercury__map__set_4_p_0((MR_Word) (&recompilation_scalar_common_2[0]), (MR_Word) (&recompilation_scalar_common_2[1]), ((MR_Box) (UnqualifiedId_17)), ((MR_Box) (MatchingNames_23)), IdSet0_14, &IdSet_24);
        recompilation__update_ids_4_p_0((MR_Word) (&recompilation_scalar_common_2[2]), ItemType_6, ((MR_Box) (IdSet_24)), ItemSet0_13, &ItemSet_25);
        Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_26, (MR_Integer) 0))));
        Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_26, (MR_Integer) 2))));
        Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_26, (MR_Integer) 3))));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_Info_27 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_32));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ItemSet_25));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_34));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_35));
        }
      }
    }
  }
}

MR_Word MR_CALL 
recompilation__module_qualify_name_2_f_0(
  MR_Word Qualifier_4,
  MR_String Name_5)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Qualifier_4)) == (MR_Integer) 0);
    MR_Word HeadVar__3_3;
    MR_String Var_6;

    if (succeeded)
    {
      Var_6 = ((MR_String) ((MR_hl_field(MR_mktag(0), Qualifier_4, (MR_Integer) 0))));
      succeeded = (strcmp(Var_6, (MR_String) "") == 0);
    }
    if (succeeded)
      {
        HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), HeadVar__3_3, 0) = ((MR_Box) (Name_5));
      }
    else
      {
        HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__3_3, 0) = ((MR_Box) (Qualifier_4));
        MR_hl_field(MR_mktag(1), HeadVar__3_3, 1) = ((MR_Box) (Name_5));
      }
    return HeadVar__3_3;
  }
}

MR_Word MR_CALL 
recompilation__find_module_qualifier_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;

    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
      HeadVar__2_2 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    else
      HeadVar__2_2 = (MR_Word) (&recompilation_scalar_common_8[0]);
    return HeadVar__2_2;
  }
}

static MR_Box MR_CALL 
recompilation__map_ids_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__3_16;

    conv0_LambdaHeadVar__3_16 = recompilation__IntroducedFrom__func__map_ids__421__1_6_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    wrapper_arg_3 = ((MR_Box) (conv0_LambdaHeadVar__3_16));
    return wrapper_arg_3;
  }
}

MR_Word MR_CALL 
recompilation__map_ids_3_f_0(
  MR_Word TypeInfo_for_T_38,
  MR_Word TypeInfo_for_U_39,
  MR_Word Func_5,
  MR_Word Items0_6,
  MR_Box Init_7)
{
  {
    MR_Word Items_8;
    MR_Word TypeInfo_42_42;
    MR_Word Items1_9;
    MR_Word Var_13;
    MR_Box conv1_Items_8;

    {
      Items1_9 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Items1_9, 0) = Init_7;
      MR_hl_field(MR_mktag(0), Items1_9, 1) = Init_7;
      MR_hl_field(MR_mktag(0), Items1_9, 2) = Init_7;
      MR_hl_field(MR_mktag(0), Items1_9, 3) = Init_7;
      MR_hl_field(MR_mktag(0), Items1_9, 4) = Init_7;
      MR_hl_field(MR_mktag(0), Items1_9, 5) = Init_7;
      MR_hl_field(MR_mktag(0), Items1_9, 6) = Init_7;
      MR_hl_field(MR_mktag(0), Items1_9, 7) = Init_7;
      MR_hl_field(MR_mktag(0), Items1_9, 8) = Init_7;
      MR_hl_field(MR_mktag(0), Items1_9, 9) = Init_7;
    }
    {
      TypeInfo_42_42 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_42_42, 0) = ((MR_Box) (&recompilation__recompilation__type_ctor_info_item_id_set_3));
      MR_hl_field(MR_mktag(0), TypeInfo_42_42, 1) = ((MR_Box) (TypeInfo_for_U_39));
      MR_hl_field(MR_mktag(0), TypeInfo_42_42, 2) = ((MR_Box) (TypeInfo_for_U_39));
      MR_hl_field(MR_mktag(0), TypeInfo_42_42, 3) = ((MR_Box) (TypeInfo_for_U_39));
    }
    {
      Var_13 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_13, 0) = ((MR_Box) (&recompilation_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), Var_13, 1) = ((MR_Box) (recompilation__map_ids_3_f_0_1));
      MR_hl_field(MR_mktag(0), Var_13, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), Var_13, 3) = ((MR_Box) (TypeInfo_for_T_38));
      MR_hl_field(MR_mktag(0), Var_13, 4) = ((MR_Box) (TypeInfo_for_U_39));
      MR_hl_field(MR_mktag(0), Var_13, 5) = ((MR_Box) (Func_5));
      MR_hl_field(MR_mktag(0), Var_13, 6) = ((MR_Box) (Items0_6));
    }
    conv1_Items_8 = mercury__list__foldl_3_f_0((MR_Word) (&recompilation__recompilation__type_ctor_info_item_type_0), TypeInfo_42_42, (MR_Word) (Var_13), (MR_Word) (MR_mkword(MR_mktag(1), &recompilation_scalar_common_1[9])), ((MR_Box) (Items1_9)));
    Items_8 = ((MR_Word) (conv1_Items_8));
    return Items_8;
  }
}

void MR_CALL 
recompilation__update_ids_4_p_0(
  MR_Word TypeInfo_for_T_155,
  MR_Word HeadVar__1_1,
  MR_Box IdMap_2,
  MR_Word STATE_VARIABLE_ItemIdSet_0_3,
  MR_Word * STATE_VARIABLE_ItemIdSet_4)
{
  {
    MR_Box Var_156 = (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 9));
    MR_Box Var_157 = (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 8));
    MR_Box Var_158 = (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 7));
    MR_Box Var_159 = (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 6));
    MR_Box Var_160 = (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 5));
    MR_Box Var_161 = (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 4));
    MR_Box Var_162 = (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 3));
    MR_Box Var_163 = (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 2));
    MR_Box Var_164 = (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 1));
    MR_Box Var_165 = (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 0));

    switch (HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 9:
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_ItemIdSet_4 = base;
          MR_hl_field(MR_mktag(0), base, 0) = Var_165;
          MR_hl_field(MR_mktag(0), base, 1) = Var_164;
          MR_hl_field(MR_mktag(0), base, 2) = Var_163;
          MR_hl_field(MR_mktag(0), base, 3) = Var_162;
          MR_hl_field(MR_mktag(0), base, 4) = Var_161;
          MR_hl_field(MR_mktag(0), base, 5) = Var_160;
          MR_hl_field(MR_mktag(0), base, 6) = Var_159;
          MR_hl_field(MR_mktag(0), base, 7) = Var_158;
          MR_hl_field(MR_mktag(0), base, 8) = Var_157;
          MR_hl_field(MR_mktag(0), base, 9) = IdMap_2;
        }
        break;
      case (MR_Integer) 7:
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_ItemIdSet_4 = base;
          MR_hl_field(MR_mktag(0), base, 0) = Var_165;
          MR_hl_field(MR_mktag(0), base, 1) = Var_164;
          MR_hl_field(MR_mktag(0), base, 2) = Var_163;
          MR_hl_field(MR_mktag(0), base, 3) = Var_162;
          MR_hl_field(MR_mktag(0), base, 4) = Var_161;
          MR_hl_field(MR_mktag(0), base, 5) = Var_160;
          MR_hl_field(MR_mktag(0), base, 6) = Var_159;
          MR_hl_field(MR_mktag(0), base, 7) = IdMap_2;
          MR_hl_field(MR_mktag(0), base, 8) = Var_157;
          MR_hl_field(MR_mktag(0), base, 9) = Var_156;
        }
        break;
      case (MR_Integer) 5:
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_ItemIdSet_4 = base;
          MR_hl_field(MR_mktag(0), base, 0) = Var_165;
          MR_hl_field(MR_mktag(0), base, 1) = Var_164;
          MR_hl_field(MR_mktag(0), base, 2) = Var_163;
          MR_hl_field(MR_mktag(0), base, 3) = Var_162;
          MR_hl_field(MR_mktag(0), base, 4) = Var_161;
          MR_hl_field(MR_mktag(0), base, 5) = IdMap_2;
          MR_hl_field(MR_mktag(0), base, 6) = Var_159;
          MR_hl_field(MR_mktag(0), base, 7) = Var_158;
          MR_hl_field(MR_mktag(0), base, 8) = Var_157;
          MR_hl_field(MR_mktag(0), base, 9) = Var_156;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_ItemIdSet_4 = base;
          MR_hl_field(MR_mktag(0), base, 0) = Var_165;
          MR_hl_field(MR_mktag(0), base, 1) = Var_164;
          MR_hl_field(MR_mktag(0), base, 2) = Var_163;
          MR_hl_field(MR_mktag(0), base, 3) = IdMap_2;
          MR_hl_field(MR_mktag(0), base, 4) = Var_161;
          MR_hl_field(MR_mktag(0), base, 5) = Var_160;
          MR_hl_field(MR_mktag(0), base, 6) = Var_159;
          MR_hl_field(MR_mktag(0), base, 7) = Var_158;
          MR_hl_field(MR_mktag(0), base, 8) = Var_157;
          MR_hl_field(MR_mktag(0), base, 9) = Var_156;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_ItemIdSet_4 = base;
          MR_hl_field(MR_mktag(0), base, 0) = Var_165;
          MR_hl_field(MR_mktag(0), base, 1) = Var_164;
          MR_hl_field(MR_mktag(0), base, 2) = IdMap_2;
          MR_hl_field(MR_mktag(0), base, 3) = Var_162;
          MR_hl_field(MR_mktag(0), base, 4) = Var_161;
          MR_hl_field(MR_mktag(0), base, 5) = Var_160;
          MR_hl_field(MR_mktag(0), base, 6) = Var_159;
          MR_hl_field(MR_mktag(0), base, 7) = Var_158;
          MR_hl_field(MR_mktag(0), base, 8) = Var_157;
          MR_hl_field(MR_mktag(0), base, 9) = Var_156;
        }
        break;
      case (MR_Integer) 8:
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_ItemIdSet_4 = base;
          MR_hl_field(MR_mktag(0), base, 0) = Var_165;
          MR_hl_field(MR_mktag(0), base, 1) = Var_164;
          MR_hl_field(MR_mktag(0), base, 2) = Var_163;
          MR_hl_field(MR_mktag(0), base, 3) = Var_162;
          MR_hl_field(MR_mktag(0), base, 4) = Var_161;
          MR_hl_field(MR_mktag(0), base, 5) = Var_160;
          MR_hl_field(MR_mktag(0), base, 6) = Var_159;
          MR_hl_field(MR_mktag(0), base, 7) = Var_158;
          MR_hl_field(MR_mktag(0), base, 8) = IdMap_2;
          MR_hl_field(MR_mktag(0), base, 9) = Var_156;
        }
        break;
      case (MR_Integer) 6:
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_ItemIdSet_4 = base;
          MR_hl_field(MR_mktag(0), base, 0) = Var_165;
          MR_hl_field(MR_mktag(0), base, 1) = Var_164;
          MR_hl_field(MR_mktag(0), base, 2) = Var_163;
          MR_hl_field(MR_mktag(0), base, 3) = Var_162;
          MR_hl_field(MR_mktag(0), base, 4) = Var_161;
          MR_hl_field(MR_mktag(0), base, 5) = Var_160;
          MR_hl_field(MR_mktag(0), base, 6) = IdMap_2;
          MR_hl_field(MR_mktag(0), base, 7) = Var_158;
          MR_hl_field(MR_mktag(0), base, 8) = Var_157;
          MR_hl_field(MR_mktag(0), base, 9) = Var_156;
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_ItemIdSet_4 = base;
          MR_hl_field(MR_mktag(0), base, 0) = IdMap_2;
          MR_hl_field(MR_mktag(0), base, 1) = Var_164;
          MR_hl_field(MR_mktag(0), base, 2) = Var_163;
          MR_hl_field(MR_mktag(0), base, 3) = Var_162;
          MR_hl_field(MR_mktag(0), base, 4) = Var_161;
          MR_hl_field(MR_mktag(0), base, 5) = Var_160;
          MR_hl_field(MR_mktag(0), base, 6) = Var_159;
          MR_hl_field(MR_mktag(0), base, 7) = Var_158;
          MR_hl_field(MR_mktag(0), base, 8) = Var_157;
          MR_hl_field(MR_mktag(0), base, 9) = Var_156;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_ItemIdSet_4 = base;
          MR_hl_field(MR_mktag(0), base, 0) = Var_165;
          MR_hl_field(MR_mktag(0), base, 1) = IdMap_2;
          MR_hl_field(MR_mktag(0), base, 2) = Var_163;
          MR_hl_field(MR_mktag(0), base, 3) = Var_162;
          MR_hl_field(MR_mktag(0), base, 4) = Var_161;
          MR_hl_field(MR_mktag(0), base, 5) = Var_160;
          MR_hl_field(MR_mktag(0), base, 6) = Var_159;
          MR_hl_field(MR_mktag(0), base, 7) = Var_158;
          MR_hl_field(MR_mktag(0), base, 8) = Var_157;
          MR_hl_field(MR_mktag(0), base, 9) = Var_156;
        }
        break;
      case (MR_Integer) 4:
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_ItemIdSet_4 = base;
          MR_hl_field(MR_mktag(0), base, 0) = Var_165;
          MR_hl_field(MR_mktag(0), base, 1) = Var_164;
          MR_hl_field(MR_mktag(0), base, 2) = Var_163;
          MR_hl_field(MR_mktag(0), base, 3) = Var_162;
          MR_hl_field(MR_mktag(0), base, 4) = IdMap_2;
          MR_hl_field(MR_mktag(0), base, 5) = Var_160;
          MR_hl_field(MR_mktag(0), base, 6) = Var_159;
          MR_hl_field(MR_mktag(0), base, 7) = Var_158;
          MR_hl_field(MR_mktag(0), base, 8) = Var_157;
          MR_hl_field(MR_mktag(0), base, 9) = Var_156;
        }
        break;
    }
  }
}

MR_Box MR_CALL 
recompilation__extract_ids_2_f_0(
  MR_Word TypeInfo_for_T_104,
  MR_Word ItemIdSet_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_Box HeadVar__3_3;
    MR_Box Var_105 = (MR_hl_field(MR_mktag(0), ItemIdSet_1, (MR_Integer) 9));
    MR_Box Var_106 = (MR_hl_field(MR_mktag(0), ItemIdSet_1, (MR_Integer) 8));
    MR_Box Var_107 = (MR_hl_field(MR_mktag(0), ItemIdSet_1, (MR_Integer) 7));
    MR_Box Var_108 = (MR_hl_field(MR_mktag(0), ItemIdSet_1, (MR_Integer) 6));
    MR_Box Var_109 = (MR_hl_field(MR_mktag(0), ItemIdSet_1, (MR_Integer) 5));
    MR_Box Var_110 = (MR_hl_field(MR_mktag(0), ItemIdSet_1, (MR_Integer) 4));
    MR_Box Var_111 = (MR_hl_field(MR_mktag(0), ItemIdSet_1, (MR_Integer) 3));
    MR_Box Var_112 = (MR_hl_field(MR_mktag(0), ItemIdSet_1, (MR_Integer) 2));
    MR_Box Var_113 = (MR_hl_field(MR_mktag(0), ItemIdSet_1, (MR_Integer) 1));
    MR_Box Var_114 = (MR_hl_field(MR_mktag(0), ItemIdSet_1, (MR_Integer) 0));

    switch (HeadVar__2_2) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 9:
        HeadVar__3_3 = Var_105;
        break;
      case (MR_Integer) 7:
        HeadVar__3_3 = Var_107;
        break;
      case (MR_Integer) 5:
        HeadVar__3_3 = Var_109;
        break;
      case (MR_Integer) 3:
        HeadVar__3_3 = Var_111;
        break;
      case (MR_Integer) 2:
        HeadVar__3_3 = Var_112;
        break;
      case (MR_Integer) 8:
        HeadVar__3_3 = Var_106;
        break;
      case (MR_Integer) 6:
        HeadVar__3_3 = Var_108;
        break;
      case (MR_Integer) 0:
        HeadVar__3_3 = Var_114;
        break;
      case (MR_Integer) 1:
        HeadVar__3_3 = Var_113;
        break;
      case (MR_Integer) 4:
        HeadVar__3_3 = Var_110;
        break;
    }
    return HeadVar__3_3;
  }
}

void MR_CALL 
recompilation__update_pred_or_func_set_4_p_0(
  MR_Word TypeInfo_for_PorF_35,
  MR_Word TypeInfo_for_Simple_36,
  MR_Word TypeInfo_for_Cons_37,
  MR_Word HeadVar__1_1,
  MR_Box Set_2,
  MR_Word STATE_VARIABLE_ItemIdSet_0_3,
  MR_Word * STATE_VARIABLE_ItemIdSet_4)
{
  {
    MR_Box Var_38 = (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 9));
    MR_Box Var_39 = (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 8));
    MR_Box Var_40 = (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 7));
    MR_Box Var_41 = (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 6));
    MR_Box Var_42 = (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 5));
    MR_Box Var_43 = (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 4));
    MR_Box Var_44 = (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 3));
    MR_Box Var_45 = (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 2));
    MR_Box Var_46 = (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 1));
    MR_Box Var_47 = (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 0));

    switch (HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 7:
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_ItemIdSet_4 = base;
          MR_hl_field(MR_mktag(0), base, 0) = Var_47;
          MR_hl_field(MR_mktag(0), base, 1) = Var_46;
          MR_hl_field(MR_mktag(0), base, 2) = Var_45;
          MR_hl_field(MR_mktag(0), base, 3) = Var_44;
          MR_hl_field(MR_mktag(0), base, 4) = Var_43;
          MR_hl_field(MR_mktag(0), base, 5) = Var_42;
          MR_hl_field(MR_mktag(0), base, 6) = Var_41;
          MR_hl_field(MR_mktag(0), base, 7) = Set_2;
          MR_hl_field(MR_mktag(0), base, 8) = Var_39;
          MR_hl_field(MR_mktag(0), base, 9) = Var_38;
        }
        break;
      case (MR_Integer) 6:
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_ItemIdSet_4 = base;
          MR_hl_field(MR_mktag(0), base, 0) = Var_47;
          MR_hl_field(MR_mktag(0), base, 1) = Var_46;
          MR_hl_field(MR_mktag(0), base, 2) = Var_45;
          MR_hl_field(MR_mktag(0), base, 3) = Var_44;
          MR_hl_field(MR_mktag(0), base, 4) = Var_43;
          MR_hl_field(MR_mktag(0), base, 5) = Var_42;
          MR_hl_field(MR_mktag(0), base, 6) = Set_2;
          MR_hl_field(MR_mktag(0), base, 7) = Var_40;
          MR_hl_field(MR_mktag(0), base, 8) = Var_39;
          MR_hl_field(MR_mktag(0), base, 9) = Var_38;
        }
        break;
    }
  }
}

MR_Box MR_CALL 
recompilation__extract_pred_or_func_set_2_f_0(
  MR_Word TypeInfo_for_Simple_24,
  MR_Word TypeInfo_for_PorF_25,
  MR_Word TypeInfo_for_Cons_26,
  MR_Word ItemIdSet_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_Box HeadVar__3_3;
    MR_Box Var_29 = (MR_hl_field(MR_mktag(0), ItemIdSet_1, (MR_Integer) 7));
    MR_Box Var_30 = (MR_hl_field(MR_mktag(0), ItemIdSet_1, (MR_Integer) 6));

    switch (HeadVar__2_2) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 7:
        HeadVar__3_3 = Var_29;
        break;
      case (MR_Integer) 6:
        HeadVar__3_3 = Var_30;
        break;
    }
    return HeadVar__3_3;
  }
}

void MR_CALL 
recompilation__update_simple_item_set_4_p_0(
  MR_Word TypeInfo_for_Simple_80,
  MR_Word TypeInfo_for_PorF_81,
  MR_Word TypeInfo_for_Cons_82,
  MR_Word HeadVar__1_1,
  MR_Box IdMap_2,
  MR_Word STATE_VARIABLE_ItemIdSet_0_3,
  MR_Word * STATE_VARIABLE_ItemIdSet_4)
{
  {
    MR_Box Var_83 = (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 9));
    MR_Box Var_84 = (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 8));
    MR_Box Var_85 = (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 7));
    MR_Box Var_86 = (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 6));
    MR_Box Var_87 = (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 5));
    MR_Box Var_88 = (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 4));
    MR_Box Var_89 = (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 3));
    MR_Box Var_90 = (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 2));
    MR_Box Var_91 = (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 1));
    MR_Box Var_92 = (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 0));

    switch (HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_ItemIdSet_4 = base;
          MR_hl_field(MR_mktag(0), base, 0) = Var_92;
          MR_hl_field(MR_mktag(0), base, 1) = Var_91;
          MR_hl_field(MR_mktag(0), base, 2) = Var_90;
          MR_hl_field(MR_mktag(0), base, 3) = IdMap_2;
          MR_hl_field(MR_mktag(0), base, 4) = Var_88;
          MR_hl_field(MR_mktag(0), base, 5) = Var_87;
          MR_hl_field(MR_mktag(0), base, 6) = Var_86;
          MR_hl_field(MR_mktag(0), base, 7) = Var_85;
          MR_hl_field(MR_mktag(0), base, 8) = Var_84;
          MR_hl_field(MR_mktag(0), base, 9) = Var_83;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_ItemIdSet_4 = base;
          MR_hl_field(MR_mktag(0), base, 0) = Var_92;
          MR_hl_field(MR_mktag(0), base, 1) = Var_91;
          MR_hl_field(MR_mktag(0), base, 2) = IdMap_2;
          MR_hl_field(MR_mktag(0), base, 3) = Var_89;
          MR_hl_field(MR_mktag(0), base, 4) = Var_88;
          MR_hl_field(MR_mktag(0), base, 5) = Var_87;
          MR_hl_field(MR_mktag(0), base, 6) = Var_86;
          MR_hl_field(MR_mktag(0), base, 7) = Var_85;
          MR_hl_field(MR_mktag(0), base, 8) = Var_84;
          MR_hl_field(MR_mktag(0), base, 9) = Var_83;
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_ItemIdSet_4 = base;
          MR_hl_field(MR_mktag(0), base, 0) = IdMap_2;
          MR_hl_field(MR_mktag(0), base, 1) = Var_91;
          MR_hl_field(MR_mktag(0), base, 2) = Var_90;
          MR_hl_field(MR_mktag(0), base, 3) = Var_89;
          MR_hl_field(MR_mktag(0), base, 4) = Var_88;
          MR_hl_field(MR_mktag(0), base, 5) = Var_87;
          MR_hl_field(MR_mktag(0), base, 6) = Var_86;
          MR_hl_field(MR_mktag(0), base, 7) = Var_85;
          MR_hl_field(MR_mktag(0), base, 8) = Var_84;
          MR_hl_field(MR_mktag(0), base, 9) = Var_83;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_ItemIdSet_4 = base;
          MR_hl_field(MR_mktag(0), base, 0) = Var_92;
          MR_hl_field(MR_mktag(0), base, 1) = IdMap_2;
          MR_hl_field(MR_mktag(0), base, 2) = Var_90;
          MR_hl_field(MR_mktag(0), base, 3) = Var_89;
          MR_hl_field(MR_mktag(0), base, 4) = Var_88;
          MR_hl_field(MR_mktag(0), base, 5) = Var_87;
          MR_hl_field(MR_mktag(0), base, 6) = Var_86;
          MR_hl_field(MR_mktag(0), base, 7) = Var_85;
          MR_hl_field(MR_mktag(0), base, 8) = Var_84;
          MR_hl_field(MR_mktag(0), base, 9) = Var_83;
        }
        break;
      case (MR_Integer) 4:
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_ItemIdSet_4 = base;
          MR_hl_field(MR_mktag(0), base, 0) = Var_92;
          MR_hl_field(MR_mktag(0), base, 1) = Var_91;
          MR_hl_field(MR_mktag(0), base, 2) = Var_90;
          MR_hl_field(MR_mktag(0), base, 3) = Var_89;
          MR_hl_field(MR_mktag(0), base, 4) = IdMap_2;
          MR_hl_field(MR_mktag(0), base, 5) = Var_87;
          MR_hl_field(MR_mktag(0), base, 6) = Var_86;
          MR_hl_field(MR_mktag(0), base, 7) = Var_85;
          MR_hl_field(MR_mktag(0), base, 8) = Var_84;
          MR_hl_field(MR_mktag(0), base, 9) = Var_83;
        }
        break;
    }
  }
}

MR_Box MR_CALL 
recompilation__extract_simple_item_set_2_f_0(
  MR_Word TypeInfo_for_Simple_54,
  MR_Word TypeInfo_for_PorF_55,
  MR_Word TypeInfo_for_Cons_56,
  MR_Word ItemIdSet_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_Box HeadVar__3_3;
    MR_Box Var_62 = (MR_hl_field(MR_mktag(0), ItemIdSet_1, (MR_Integer) 4));
    MR_Box Var_63 = (MR_hl_field(MR_mktag(0), ItemIdSet_1, (MR_Integer) 3));
    MR_Box Var_64 = (MR_hl_field(MR_mktag(0), ItemIdSet_1, (MR_Integer) 2));
    MR_Box Var_65 = (MR_hl_field(MR_mktag(0), ItemIdSet_1, (MR_Integer) 1));
    MR_Box Var_66 = (MR_hl_field(MR_mktag(0), ItemIdSet_1, (MR_Integer) 0));

    switch (HeadVar__2_2) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
        HeadVar__3_3 = Var_63;
        break;
      case (MR_Integer) 2:
        HeadVar__3_3 = Var_64;
        break;
      case (MR_Integer) 0:
        HeadVar__3_3 = Var_66;
        break;
      case (MR_Integer) 1:
        HeadVar__3_3 = Var_65;
        break;
      case (MR_Integer) 4:
        HeadVar__3_3 = Var_62;
        break;
    }
    return HeadVar__3_3;
  }
}

MR_Word MR_CALL 
recompilation__init_item_id_set_3_f_0(
  MR_Word TypeInfo_for_Simple_15,
  MR_Word TypeInfo_for_PorF_16,
  MR_Word TypeInfo_for_Cons_17,
  MR_Box Simple_5,
  MR_Box PorF_6,
  MR_Box Cons_7)
{
  {
    MR_Word HeadVar__4_4;

    {
      HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__4_4, 0) = Simple_5;
      MR_hl_field(MR_mktag(0), HeadVar__4_4, 1) = Simple_5;
      MR_hl_field(MR_mktag(0), HeadVar__4_4, 2) = Simple_5;
      MR_hl_field(MR_mktag(0), HeadVar__4_4, 3) = Simple_5;
      MR_hl_field(MR_mktag(0), HeadVar__4_4, 4) = Simple_5;
      MR_hl_field(MR_mktag(0), HeadVar__4_4, 5) = Cons_7;
      MR_hl_field(MR_mktag(0), HeadVar__4_4, 6) = PorF_6;
      MR_hl_field(MR_mktag(0), HeadVar__4_4, 7) = PorF_6;
      MR_hl_field(MR_mktag(0), HeadVar__4_4, 8) = PorF_6;
      MR_hl_field(MR_mktag(0), HeadVar__4_4, 9) = PorF_6;
    }
    return HeadVar__4_4;
  }
}

MR_Word MR_CALL 
recompilation__init_item_id_set_1_f_0(
  MR_Word TypeInfo_for_T_13,
  MR_Box Init_3)
{
  {
    MR_Word HeadVar__2_2;

    {
      HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 0) = Init_3;
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 1) = Init_3;
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 2) = Init_3;
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 3) = Init_3;
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 4) = Init_3;
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 5) = Init_3;
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 6) = Init_3;
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 7) = Init_3;
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 8) = Init_3;
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 9) = Init_3;
    }
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
recompilation__init_recompilation_info_1_f_0(
  MR_Word ModuleName_3)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word Var_4;
    MR_Word Var_5;
    MR_Word Var_6;

    Var_4 = recompilation__init_used_items_0_f_0();
    Var_5 = mercury__map__init_0_f_0((MR_Word) (&recompilation__recompilation__type_ctor_info_item_id_0), (MR_Word) (&recompilation_scalar_common_1[0]));
    Var_6 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__recompilation__type_ctor_info_version_numbers_0));
    {
      HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 0) = ((MR_Box) (ModuleName_3));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 1) = ((MR_Box) (Var_4));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 2) = ((MR_Box) (Var_5));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 3) = ((MR_Box) (Var_6));
    }
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
recompilation__init_used_items_0_f_0(void)
{
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
    MR_Word Var_10;
    MR_Word Var_11;

    Var_2 = mercury__map__init_0_f_0((MR_Word) (&recompilation_scalar_common_2[0]), (MR_Word) (&recompilation_scalar_common_2[1]));
    Var_3 = mercury__map__init_0_f_0((MR_Word) (&recompilation_scalar_common_2[0]), (MR_Word) (&recompilation_scalar_common_2[1]));
    Var_4 = mercury__map__init_0_f_0((MR_Word) (&recompilation_scalar_common_2[0]), (MR_Word) (&recompilation_scalar_common_2[1]));
    Var_5 = mercury__map__init_0_f_0((MR_Word) (&recompilation_scalar_common_2[0]), (MR_Word) (&recompilation_scalar_common_2[1]));
    Var_6 = mercury__map__init_0_f_0((MR_Word) (&recompilation_scalar_common_2[0]), (MR_Word) (&recompilation_scalar_common_2[1]));
    Var_7 = mercury__map__init_0_f_0((MR_Word) (&recompilation_scalar_common_2[0]), (MR_Word) (&recompilation_scalar_common_2[1]));
    Var_8 = mercury__map__init_0_f_0((MR_Word) (&recompilation_scalar_common_2[0]), (MR_Word) (&recompilation_scalar_common_2[1]));
    Var_9 = mercury__map__init_0_f_0((MR_Word) (&recompilation_scalar_common_2[0]), (MR_Word) (&recompilation_scalar_common_2[1]));
    Var_10 = mercury__map__init_0_f_0((MR_Word) (&recompilation_scalar_common_2[0]), (MR_Word) (&recompilation_scalar_common_2[1]));
    Var_11 = mercury__map__init_0_f_0((MR_Word) (&recompilation_scalar_common_2[0]), (MR_Word) (&recompilation_scalar_common_2[1]));
    {
      HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__1_1, 0) = ((MR_Box) (Var_2));
      MR_hl_field(MR_mktag(0), HeadVar__1_1, 1) = ((MR_Box) (Var_3));
      MR_hl_field(MR_mktag(0), HeadVar__1_1, 2) = ((MR_Box) (Var_4));
      MR_hl_field(MR_mktag(0), HeadVar__1_1, 3) = ((MR_Box) (Var_5));
      MR_hl_field(MR_mktag(0), HeadVar__1_1, 4) = ((MR_Box) (Var_6));
      MR_hl_field(MR_mktag(0), HeadVar__1_1, 5) = ((MR_Box) (Var_7));
      MR_hl_field(MR_mktag(0), HeadVar__1_1, 6) = ((MR_Box) (Var_8));
      MR_hl_field(MR_mktag(0), HeadVar__1_1, 7) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), HeadVar__1_1, 8) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), HeadVar__1_1, 9) = ((MR_Box) (Var_11));
    }
    return HeadVar__1_1;
  }
}

MR_Word MR_CALL 
recompilation__item_name_to_mode_id_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word SymName_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer Arity_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));

    {
      HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 0) = ((MR_Box) (SymName_3));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 1) = ((MR_Box) (Arity_4));
    }
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
recompilation__item_name_to_inst_id_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word SymName_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer Arity_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));

    {
      HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 0) = ((MR_Box) (SymName_3));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 1) = ((MR_Box) (Arity_4));
    }
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
recompilation__item_name_to_type_ctor_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word SymName_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer Arity_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));

    {
      HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 0) = ((MR_Box) (SymName_3));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 1) = ((MR_Box) (Arity_4));
    }
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
recompilation__mode_id_to_item_name_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word SymName_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer Arity_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));

    {
      HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 0) = ((MR_Box) (SymName_3));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 1) = ((MR_Box) (Arity_4));
    }
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
recompilation__inst_id_to_item_name_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word SymName_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer Arity_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));

    {
      HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 0) = ((MR_Box) (SymName_3));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 1) = ((MR_Box) (Arity_4));
    }
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
recompilation__type_ctor_to_item_name_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word SymName_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer Arity_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));

    {
      HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 0) = ((MR_Box) (SymName_3));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 1) = ((MR_Box) (Arity_4));
    }
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
recompilation__pred_or_func_to_item_type_1_f_0(
  MR_Word HeadVar__1_1)
{
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
}

void MR_CALL 
recompilation__string_to_item_type_2_p_1(
  MR_String * HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  *HeadVar__1_1 = ((&recompilation_vector_common_5[0 + HeadVar__2_2]))->recompilation__vector_common_type_5_0__vct_5_f_0;
}

MR_bool MR_CALL 
recompilation__string_to_item_type_2_p_0(
  MR_String HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
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
}

MR_bool MR_CALL 
recompilation__is_pred_or_func_item_type_1_p_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_bool succeeded;

    switch (HeadVar__1_1) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 7:
        succeeded = MR_TRUE;
        break;
      case (MR_Integer) 6:
        succeeded = MR_TRUE;
        break;
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
recompilation__is_simple_item_type_1_p_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_bool succeeded;

    if (((MR_Unsigned) 31U & (((MR_Integer) 1 << HeadVar__1_1))))
      succeeded = MR_TRUE;
    else
      succeeded = MR_FALSE;
    return succeeded;
  }
}

MR_bool MR_CALL 
recompilation__term_to_timestamp_1_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0);
    MR_String TimestampString_3;
    MR_Word Var_5;
    MR_Word Var_6;

    if (succeeded)
    {
      Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      Var_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_5)) == (MR_Integer) 2);
      if (succeeded)
      {
        TimestampString_3 = ((MR_String) ((MR_hl_field(MR_mktag(2), Var_5, (MR_Integer) 0))));
        succeeded = (Var_6 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
          succeeded = libs__timestamp__string_to_timestamp_1_f_0(TimestampString_3, HeadVar__2_2);
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
recompilation__term_to_version_number_1_f_0(
  MR_Word TypeInfo_for_T_4,
  MR_Word Term_3,
  MR_Word * HeadVar__2_2)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_3)) == (MR_Integer) 0);
    MR_String TimestampString_5;
    MR_Word Var_7;
    MR_Word Var_8;

    if (succeeded)
    {
      Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 0))));
      Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_7)) == (MR_Integer) 2);
      if (succeeded)
      {
        TimestampString_5 = ((MR_String) ((MR_hl_field(MR_mktag(2), Var_7, (MR_Integer) 0))));
        succeeded = (Var_8 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
          succeeded = libs__timestamp__string_to_timestamp_1_f_0(TimestampString_5, HeadVar__2_2);
      }
    }
    return succeeded;
  }
}

void MR_CALL 
recompilation__write_version_number_3_p_0(
  MR_Word VersionNumber_4)
{
  {
    MR_String Var_10;

    mercury__io__write_string_3_p_0((MR_String) "\"");
    Var_10 = libs__timestamp__timestamp_to_string_1_f_0(VersionNumber_4);
    mercury__io__write_string_3_p_0(Var_10);
    mercury__io__write_string_3_p_0((MR_String) "\"");
  }
}

static MR_bool MR_CALL 
recompilation____Unify____eqv_expanded_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = recompilation____Unify____eqv_expanded_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
recompilation____Compare____eqv_expanded_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    recompilation____Compare____eqv_expanded_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
recompilation____Unify____eqv_expanded_item_set_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = recompilation____Unify____eqv_expanded_item_set_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
recompilation____Compare____eqv_expanded_item_set_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    recompilation____Compare____eqv_expanded_item_set_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
recompilation____Unify____functor_set_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = recompilation____Unify____functor_set_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
recompilation____Compare____functor_set_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    recompilation____Compare____functor_set_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
recompilation____Unify____instance_version_numbers_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = recompilation____Unify____instance_version_numbers_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
recompilation____Compare____instance_version_numbers_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    recompilation____Compare____instance_version_numbers_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
recompilation____Unify____item_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = recompilation____Unify____item_id_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
recompilation____Compare____item_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    recompilation____Compare____item_id_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
recompilation____Unify____item_id_set_3_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5)
{
  {
    MR_bool succeeded;

    succeeded = recompilation____Unify____item_id_set_3_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)));
    return succeeded;
  }
}

static void MR_CALL 
recompilation____Compare____item_id_set_3_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6)
{
  {
    MR_Word conv0_HeadVar__1_1;

    recompilation____Compare____item_id_set_3_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_5)), ((MR_Word) (wrapper_arg_6)));
    *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
recompilation____Unify____item_id_set_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = recompilation____Unify____item_id_set_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
recompilation____Compare____item_id_set_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    recompilation____Compare____item_id_set_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
recompilation____Unify____item_name_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = recompilation____Unify____item_name_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
recompilation____Compare____item_name_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    recompilation____Compare____item_name_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
recompilation____Unify____item_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = recompilation____Unify____item_type_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
recompilation____Compare____item_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    recompilation____Compare____item_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
recompilation____Unify____item_version_numbers_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = recompilation____Unify____item_version_numbers_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
recompilation____Compare____item_version_numbers_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    recompilation____Compare____item_version_numbers_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
recompilation____Unify____module_qualifier_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = recompilation____Unify____module_qualifier_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
recompilation____Compare____module_qualifier_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    recompilation____Compare____module_qualifier_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
recompilation____Unify____module_version_numbers_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = recompilation____Unify____module_version_numbers_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
recompilation____Compare____module_version_numbers_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    recompilation____Compare____module_version_numbers_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
recompilation____Unify____pred_or_func_set_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = recompilation____Unify____pred_or_func_set_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
recompilation____Compare____pred_or_func_set_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    recompilation____Compare____pred_or_func_set_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
recompilation____Unify____recompilation_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = recompilation____Unify____recompilation_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
recompilation____Compare____recompilation_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    recompilation____Compare____recompilation_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
recompilation____Unify____simple_item_set_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = recompilation____Unify____simple_item_set_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
recompilation____Compare____simple_item_set_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    recompilation____Compare____simple_item_set_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
recompilation____Unify____used_items_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = recompilation____Unify____used_items_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
recompilation____Compare____used_items_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    recompilation____Compare____used_items_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
recompilation____Unify____version_number_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = recompilation____Unify____version_number_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
recompilation____Compare____version_number_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    recompilation____Compare____version_number_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
recompilation____Unify____version_number_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = recompilation____Unify____version_number_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
recompilation____Compare____version_number_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    recompilation____Compare____version_number_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
recompilation____Unify____version_numbers_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = recompilation____Unify____version_numbers_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
recompilation____Compare____version_numbers_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    recompilation____Compare____version_numbers_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__recompilation__init(void)
{
}

void mercury__recompilation__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&recompilation__recompilation__type_ctor_info_eqv_expanded_info_0);
	MR_register_type_ctor_info(&recompilation__recompilation__type_ctor_info_eqv_expanded_item_set_0);
	MR_register_type_ctor_info(&recompilation__recompilation__type_ctor_info_functor_set_0);
	MR_register_type_ctor_info(&recompilation__recompilation__type_ctor_info_instance_version_numbers_0);
	MR_register_type_ctor_info(&recompilation__recompilation__type_ctor_info_item_id_0);
	MR_register_type_ctor_info(&recompilation__recompilation__type_ctor_info_item_id_set_3);
	MR_register_type_ctor_info(&recompilation__recompilation__type_ctor_info_item_id_set_1);
	MR_register_type_ctor_info(&recompilation__recompilation__type_ctor_info_item_name_0);
	MR_register_type_ctor_info(&recompilation__recompilation__type_ctor_info_item_type_0);
	MR_register_type_ctor_info(&recompilation__recompilation__type_ctor_info_item_version_numbers_0);
	MR_register_type_ctor_info(&recompilation__recompilation__type_ctor_info_module_qualifier_0);
	MR_register_type_ctor_info(&recompilation__recompilation__type_ctor_info_module_version_numbers_map_0);
	MR_register_type_ctor_info(&recompilation__recompilation__type_ctor_info_pred_or_func_set_0);
	MR_register_type_ctor_info(&recompilation__recompilation__type_ctor_info_recompilation_info_0);
	MR_register_type_ctor_info(&recompilation__recompilation__type_ctor_info_simple_item_set_0);
	MR_register_type_ctor_info(&recompilation__recompilation__type_ctor_info_used_items_0);
	MR_register_type_ctor_info(&recompilation__recompilation__type_ctor_info_version_number_0);
	MR_register_type_ctor_info(&recompilation__recompilation__type_ctor_info_version_number_map_0);
	MR_register_type_ctor_info(&recompilation__recompilation__type_ctor_info_version_numbers_0);
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
