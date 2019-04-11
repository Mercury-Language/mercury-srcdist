/*
** Automatically generated from `recompilation.m'
** by the Mercury compiler,
** version rotd-2017-06-02
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


/* :- module recompilation. */
/* :- implementation. */

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

static MR_bool MR_CALL 
recompilation____Unify____eqv_expanded_info_0_0_10001(
  MR_Box recompilation__wrapper_arg_1,
  MR_Box recompilation__wrapper_arg_2);

static void MR_CALL 
recompilation____Compare____eqv_expanded_info_0_0_10001(
  MR_Box * recompilation__wrapper_arg_1,
  MR_Box recompilation__wrapper_arg_2,
  MR_Box recompilation__wrapper_arg_3);

static MR_bool MR_CALL 
recompilation____Unify____eqv_expanded_item_set_0_0_10001(
  MR_Box recompilation__wrapper_arg_1,
  MR_Box recompilation__wrapper_arg_2);

static void MR_CALL 
recompilation____Compare____eqv_expanded_item_set_0_0_10001(
  MR_Box * recompilation__wrapper_arg_1,
  MR_Box recompilation__wrapper_arg_2,
  MR_Box recompilation__wrapper_arg_3);

static MR_bool MR_CALL 
recompilation____Unify____functor_set_0_0_10001(
  MR_Box recompilation__wrapper_arg_1,
  MR_Box recompilation__wrapper_arg_2);

static void MR_CALL 
recompilation____Compare____functor_set_0_0_10001(
  MR_Box * recompilation__wrapper_arg_1,
  MR_Box recompilation__wrapper_arg_2,
  MR_Box recompilation__wrapper_arg_3);

static MR_bool MR_CALL 
recompilation____Unify____instance_version_numbers_0_0_10001(
  MR_Box recompilation__wrapper_arg_1,
  MR_Box recompilation__wrapper_arg_2);

static void MR_CALL 
recompilation____Compare____instance_version_numbers_0_0_10001(
  MR_Box * recompilation__wrapper_arg_1,
  MR_Box recompilation__wrapper_arg_2,
  MR_Box recompilation__wrapper_arg_3);

static MR_bool MR_CALL 
recompilation____Unify____item_id_0_0_10001(
  MR_Box recompilation__wrapper_arg_1,
  MR_Box recompilation__wrapper_arg_2);

static void MR_CALL 
recompilation____Compare____item_id_0_0_10001(
  MR_Box * recompilation__wrapper_arg_1,
  MR_Box recompilation__wrapper_arg_2,
  MR_Box recompilation__wrapper_arg_3);

static MR_bool MR_CALL 
recompilation____Unify____item_id_set_3_0_10001(
  MR_Box recompilation__wrapper_arg_1,
  MR_Box recompilation__wrapper_arg_2,
  MR_Box recompilation__wrapper_arg_3,
  MR_Box recompilation__wrapper_arg_4,
  MR_Box recompilation__wrapper_arg_5);

static void MR_CALL 
recompilation____Compare____item_id_set_3_0_10001(
  MR_Box recompilation__wrapper_arg_1,
  MR_Box recompilation__wrapper_arg_2,
  MR_Box recompilation__wrapper_arg_3,
  MR_Box * recompilation__wrapper_arg_4,
  MR_Box recompilation__wrapper_arg_5,
  MR_Box recompilation__wrapper_arg_6);

static MR_bool MR_CALL 
recompilation____Unify____item_id_set_1_0_10001(
  MR_Box recompilation__wrapper_arg_1,
  MR_Box recompilation__wrapper_arg_2,
  MR_Box recompilation__wrapper_arg_3);

static void MR_CALL 
recompilation____Compare____item_id_set_1_0_10001(
  MR_Box recompilation__wrapper_arg_1,
  MR_Box * recompilation__wrapper_arg_2,
  MR_Box recompilation__wrapper_arg_3,
  MR_Box recompilation__wrapper_arg_4);

static MR_bool MR_CALL 
recompilation____Unify____item_name_0_0_10001(
  MR_Box recompilation__wrapper_arg_1,
  MR_Box recompilation__wrapper_arg_2);

static void MR_CALL 
recompilation____Compare____item_name_0_0_10001(
  MR_Box * recompilation__wrapper_arg_1,
  MR_Box recompilation__wrapper_arg_2,
  MR_Box recompilation__wrapper_arg_3);

static MR_bool MR_CALL 
recompilation____Unify____item_type_0_0_10001(
  MR_Box recompilation__wrapper_arg_1,
  MR_Box recompilation__wrapper_arg_2);

static void MR_CALL 
recompilation____Compare____item_type_0_0_10001(
  MR_Box * recompilation__wrapper_arg_1,
  MR_Box recompilation__wrapper_arg_2,
  MR_Box recompilation__wrapper_arg_3);

static MR_bool MR_CALL 
recompilation____Unify____item_version_numbers_0_0_10001(
  MR_Box recompilation__wrapper_arg_1,
  MR_Box recompilation__wrapper_arg_2);

static void MR_CALL 
recompilation____Compare____item_version_numbers_0_0_10001(
  MR_Box * recompilation__wrapper_arg_1,
  MR_Box recompilation__wrapper_arg_2,
  MR_Box recompilation__wrapper_arg_3);

static MR_bool MR_CALL 
recompilation____Unify____module_qualifier_0_0_10001(
  MR_Box recompilation__wrapper_arg_1,
  MR_Box recompilation__wrapper_arg_2);

static void MR_CALL 
recompilation____Compare____module_qualifier_0_0_10001(
  MR_Box * recompilation__wrapper_arg_1,
  MR_Box recompilation__wrapper_arg_2,
  MR_Box recompilation__wrapper_arg_3);

static MR_bool MR_CALL 
recompilation____Unify____module_version_numbers_map_0_0_10001(
  MR_Box recompilation__wrapper_arg_1,
  MR_Box recompilation__wrapper_arg_2);

static void MR_CALL 
recompilation____Compare____module_version_numbers_map_0_0_10001(
  MR_Box * recompilation__wrapper_arg_1,
  MR_Box recompilation__wrapper_arg_2,
  MR_Box recompilation__wrapper_arg_3);

static MR_bool MR_CALL 
recompilation____Unify____pred_or_func_set_0_0_10001(
  MR_Box recompilation__wrapper_arg_1,
  MR_Box recompilation__wrapper_arg_2);

static void MR_CALL 
recompilation____Compare____pred_or_func_set_0_0_10001(
  MR_Box * recompilation__wrapper_arg_1,
  MR_Box recompilation__wrapper_arg_2,
  MR_Box recompilation__wrapper_arg_3);

static MR_bool MR_CALL 
recompilation____Unify____recompilation_info_0_0_10001(
  MR_Box recompilation__wrapper_arg_1,
  MR_Box recompilation__wrapper_arg_2);

static void MR_CALL 
recompilation____Compare____recompilation_info_0_0_10001(
  MR_Box * recompilation__wrapper_arg_1,
  MR_Box recompilation__wrapper_arg_2,
  MR_Box recompilation__wrapper_arg_3);

static MR_bool MR_CALL 
recompilation____Unify____simple_item_set_0_0_10001(
  MR_Box recompilation__wrapper_arg_1,
  MR_Box recompilation__wrapper_arg_2);

static void MR_CALL 
recompilation____Compare____simple_item_set_0_0_10001(
  MR_Box * recompilation__wrapper_arg_1,
  MR_Box recompilation__wrapper_arg_2,
  MR_Box recompilation__wrapper_arg_3);

static MR_bool MR_CALL 
recompilation____Unify____used_items_0_0_10001(
  MR_Box recompilation__wrapper_arg_1,
  MR_Box recompilation__wrapper_arg_2);

static void MR_CALL 
recompilation____Compare____used_items_0_0_10001(
  MR_Box * recompilation__wrapper_arg_1,
  MR_Box recompilation__wrapper_arg_2,
  MR_Box recompilation__wrapper_arg_3);

static MR_bool MR_CALL 
recompilation____Unify____version_number_0_0_10001(
  MR_Box recompilation__wrapper_arg_1,
  MR_Box recompilation__wrapper_arg_2);

static void MR_CALL 
recompilation____Compare____version_number_0_0_10001(
  MR_Box * recompilation__wrapper_arg_1,
  MR_Box recompilation__wrapper_arg_2,
  MR_Box recompilation__wrapper_arg_3);

static MR_bool MR_CALL 
recompilation____Unify____version_number_map_0_0_10001(
  MR_Box recompilation__wrapper_arg_1,
  MR_Box recompilation__wrapper_arg_2);

static void MR_CALL 
recompilation____Compare____version_number_map_0_0_10001(
  MR_Box * recompilation__wrapper_arg_1,
  MR_Box recompilation__wrapper_arg_2,
  MR_Box recompilation__wrapper_arg_3);

static MR_bool MR_CALL 
recompilation____Unify____version_numbers_0_0_10001(
  MR_Box recompilation__wrapper_arg_1,
  MR_Box recompilation__wrapper_arg_2);

static void MR_CALL 
recompilation____Compare____version_numbers_0_0_10001(
  MR_Box * recompilation__wrapper_arg_1,
  MR_Box recompilation__wrapper_arg_2,
  MR_Box recompilation__wrapper_arg_3);

static MR_Word MR_CALL 
recompilation__IntroducedFrom__func__map_ids__422__1_6_f_0(
  MR_Word recompilation__TypeInfo_for_T_38,
  MR_Word recompilation__TypeInfo_for_U_39,
  MR_Word recompilation__Func_5,
  MR_Word recompilation__Items0_6,
  MR_Word recompilation__LambdaHeadVar__1_14,
  MR_Word recompilation__LambdaHeadVar__2_15);

static void MR_CALL 
recompilation__record_expanded_item_3_p_0_1(
  MR_Box recompilation__closure_arg,
  MR_Box recompilation__wrapper_arg_1,
  MR_Box * recompilation__wrapper_arg_2);

static MR_Box MR_CALL 
recompilation__map_ids_3_f_0_1(
  MR_Box recompilation__closure_arg,
  MR_Box recompilation__wrapper_arg_1,
  MR_Box recompilation__wrapper_arg_2);


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
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
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
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_item_id_0)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_eqv_expanded_item_set_0)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_eqv_expanded_item_set_0))
  },
};


static /* final */ const struct recompilation__vector_common_type_4_0_s recompilation_vector_common_4[32] = {
  /* row 0 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
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
    (MR_Word) (MR_Integer) 0
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
    (MR_Word) (MR_Integer) 0
  },
  /* row 7 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 8 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 9 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 10 */
  {
    (MR_String) "function",
    (MR_Integer) 7
  },
  /* row 11 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 12 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
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
    (MR_Word) (MR_Integer) 0
  },
  /* row 16 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 17 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 18 */
  {
    (MR_String) "inst",
    (MR_Integer) 3
  },
  /* row 19 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 20 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
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
    (MR_Word) (MR_Integer) 0
  },
  /* row 24 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 25 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 26 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 27 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 28 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 29 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 30 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 31 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
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
    (MR_PseudoTypeInfo) &recompilation__recompilation__type_ctor_info_item_type_0,
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

static const MR_FA_PseudoTypeInfo_Struct3 recompilation__recompilation__pti_item_id_set_3__pseudo_1__pseudo_1__pseudo_1 = {
  &recompilation__recompilation__type_ctor_info_item_id_set_3,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_FA_PseudoTypeInfo_Struct3 recompilation__recompilation__pti_item_id_set_3__pseudo_2__pseudo_2__pseudo_2 = {
  &recompilation__recompilation__type_ctor_info_item_id_set_3,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 2,
    (MR_PseudoTypeInfo) (MR_Integer) 2,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

static const MR_FA_TypeInfo_Struct1 recompilation__maybe__ti_maybe_1recompilation__type_ctor_info_eqv_expanded_item_set_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &recompilation__recompilation__type_ctor_info_eqv_expanded_item_set_0
  }
};

const MR_TypeCtorInfo_Struct recompilation__recompilation__type_ctor_info_eqv_expanded_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (recompilation____Unify____eqv_expanded_info_0_0_10001)),
  ((MR_Box) (recompilation____Compare____eqv_expanded_info_0_0_10001)),
  (MR_String) "recompilation",
  (MR_String) "eqv_expanded_info",
  {     NULL },
  {     (MR_PseudoTypeInfo) &recompilation__maybe__ti_maybe_1recompilation__type_ctor_info_eqv_expanded_item_set_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct1 recompilation__set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &recompilation__recompilation__type_ctor_info_item_id_0
  }
};

static const MR_PseudoTypeInfo recompilation__recompilation__field_types_eqv_expanded_item_set_0_0[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &recompilation__set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0
};

static const MR_DuFunctorDesc recompilation__recompilation__du_functor_desc_eqv_expanded_item_set_0_0 = {
  (MR_String) "eqv_expanded_item_set",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  recompilation__recompilation__field_types_eqv_expanded_item_set_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr recompilation__recompilation__du_stag_ordered_eqv_expanded_item_set_0_0[1] = {
  &recompilation__recompilation__du_functor_desc_eqv_expanded_item_set_0_0
};

static const MR_DuPtagLayout recompilation__recompilation__du_ptag_ordered_eqv_expanded_item_set_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    recompilation__recompilation__du_stag_ordered_eqv_expanded_item_set_0_0
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (recompilation____Unify____eqv_expanded_item_set_0_0_10001)),
  ((MR_Box) (recompilation____Compare____eqv_expanded_item_set_0_0_10001)),
  (MR_String) "recompilation",
  (MR_String) "eqv_expanded_item_set",
  {     recompilation__recompilation__du_name_ordered_eqv_expanded_item_set_0 },
  {     recompilation__recompilation__du_ptag_ordered_eqv_expanded_item_set_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  recompilation__recompilation__functor_number_map_eqv_expanded_item_set_0
};

static const MR_FA_TypeInfo_Struct2 recompilation__pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_FA_TypeInfo_Struct2 recompilation__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

static const MR_FA_TypeInfo_Struct2 recompilation__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &recompilation__pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &recompilation__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

const MR_TypeCtorInfo_Struct recompilation__recompilation__type_ctor_info_functor_set_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (recompilation____Unify____functor_set_0_0_10001)),
  ((MR_Box) (recompilation____Compare____functor_set_0_0_10001)),
  (MR_String) "recompilation",
  (MR_String) "functor_set",
  {     NULL },
  {     (MR_PseudoTypeInfo) &recompilation__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct2 recompilation__tree234__ti_tree234_2recompilation__type_ctor_info_item_name_0libs__timestamp__type_ctor_info_timestamp_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &recompilation__recompilation__type_ctor_info_item_name_0,
    (MR_TypeInfo) &libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0
  }
};

const MR_TypeCtorInfo_Struct recompilation__recompilation__type_ctor_info_instance_version_numbers_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (recompilation____Unify____instance_version_numbers_0_0_10001)),
  ((MR_Box) (recompilation____Compare____instance_version_numbers_0_0_10001)),
  (MR_String) "recompilation",
  (MR_String) "instance_version_numbers",
  {     NULL },
  {     (MR_PseudoTypeInfo) &recompilation__tree234__ti_tree234_2recompilation__type_ctor_info_item_name_0libs__timestamp__type_ctor_info_timestamp_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_PseudoTypeInfo recompilation__recompilation__field_types_item_id_0_0[2] = {
  (MR_PseudoTypeInfo) &recompilation__recompilation__type_ctor_info_item_type_0,
  (MR_PseudoTypeInfo) &recompilation__recompilation__type_ctor_info_item_name_0
};

static const MR_DuFunctorDesc recompilation__recompilation__du_functor_desc_item_id_0_0 = {
  (MR_String) "item_id",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  recompilation__recompilation__field_types_item_id_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr recompilation__recompilation__du_stag_ordered_item_id_0_0[1] = {
  &recompilation__recompilation__du_functor_desc_item_id_0_0
};

static const MR_DuPtagLayout recompilation__recompilation__du_ptag_ordered_item_id_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    recompilation__recompilation__du_stag_ordered_item_id_0_0
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (recompilation____Unify____item_id_0_0_10001)),
  ((MR_Box) (recompilation____Compare____item_id_0_0_10001)),
  (MR_String) "recompilation",
  (MR_String) "item_id",
  {     recompilation__recompilation__du_name_ordered_item_id_0 },
  {     recompilation__recompilation__du_ptag_ordered_item_id_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  recompilation__recompilation__functor_number_map_item_id_0
};

static const MR_PseudoTypeInfo recompilation__recompilation__field_types_item_id_set_3_0[10] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 3,
  (MR_PseudoTypeInfo) (MR_Integer) 2,
  (MR_PseudoTypeInfo) (MR_Integer) 2,
  (MR_PseudoTypeInfo) (MR_Integer) 2,
  (MR_PseudoTypeInfo) (MR_Integer) 2
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
  (MR_Integer) 10,
  (MR_Integer) 1023,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  recompilation__recompilation__field_types_item_id_set_3_0,
  recompilation__recompilation__field_names_item_id_set_3_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr recompilation__recompilation__du_stag_ordered_item_id_set_3_0[1] = {
  &recompilation__recompilation__du_functor_desc_item_id_set_3_0
};

static const MR_DuPtagLayout recompilation__recompilation__du_ptag_ordered_item_id_set_3[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    recompilation__recompilation__du_stag_ordered_item_id_set_3_0
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (recompilation____Unify____item_id_set_3_0_10001)),
  ((MR_Box) (recompilation____Compare____item_id_set_3_0_10001)),
  (MR_String) "recompilation",
  (MR_String) "item_id_set",
  {     recompilation__recompilation__du_name_ordered_item_id_set_3 },
  {     recompilation__recompilation__du_ptag_ordered_item_id_set_3 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  recompilation__recompilation__functor_number_map_item_id_set_3
};

const MR_TypeCtorInfo_Struct recompilation__recompilation__type_ctor_info_item_id_set_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (recompilation____Unify____item_id_set_1_0_10001)),
  ((MR_Box) (recompilation____Compare____item_id_set_1_0_10001)),
  (MR_String) "recompilation",
  (MR_String) "item_id_set",
  {     NULL },
  {     (MR_PseudoTypeInfo) &recompilation__recompilation__pti_item_id_set_3__pseudo_1__pseudo_1__pseudo_1 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_PseudoTypeInfo recompilation__recompilation__field_types_item_name_0_0[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc recompilation__recompilation__du_functor_desc_item_name_0_0 = {
  (MR_String) "item_name",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  recompilation__recompilation__field_types_item_name_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr recompilation__recompilation__du_stag_ordered_item_name_0_0[1] = {
  &recompilation__recompilation__du_functor_desc_item_name_0_0
};

static const MR_DuPtagLayout recompilation__recompilation__du_ptag_ordered_item_name_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    recompilation__recompilation__du_stag_ordered_item_name_0_0
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (recompilation____Unify____item_name_0_0_10001)),
  ((MR_Box) (recompilation____Compare____item_name_0_0_10001)),
  (MR_String) "recompilation",
  (MR_String) "item_name",
  {     recompilation__recompilation__du_name_ordered_item_name_0 },
  {     recompilation__recompilation__du_ptag_ordered_item_name_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  recompilation__recompilation__functor_number_map_item_name_0
};

static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_0 = {
  (MR_String) "type_abstract_item",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_1 = {
  (MR_String) "type_body_item",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_2 = {
  (MR_String) "mode_item",
  (MR_Integer) 2
};

static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_3 = {
  (MR_String) "inst_item",
  (MR_Integer) 3
};

static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_4 = {
  (MR_String) "typeclass_item",
  (MR_Integer) 4
};

static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_5 = {
  (MR_String) "functor_item",
  (MR_Integer) 5
};

static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_6 = {
  (MR_String) "predicate_item",
  (MR_Integer) 6
};

static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_7 = {
  (MR_String) "function_item",
  (MR_Integer) 7
};

static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_8 = {
  (MR_String) "mutable_item",
  (MR_Integer) 8
};

static const MR_EnumFunctorDesc recompilation__recompilation__enum_functor_desc_item_type_0_9 = {
  (MR_String) "foreign_proc_item",
  (MR_Integer) 9
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (recompilation____Unify____item_type_0_0_10001)),
  ((MR_Box) (recompilation____Compare____item_type_0_0_10001)),
  (MR_String) "recompilation",
  (MR_String) "item_type",
  {     recompilation__recompilation__enum_name_ordered_item_type_0 },
  {     recompilation__recompilation__enum_value_ordered_item_type_0 },
  (MR_Integer) 10,
  (MR_Integer) 4,
  recompilation__recompilation__functor_number_map_item_type_0
};

static const MR_FA_TypeInfo_Struct2 recompilation__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &recompilation__pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0
  }
};

static const MR_FA_TypeInfo_Struct3 recompilation__recompilation__ti_item_id_set_3tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0 = {
  &recompilation__recompilation__type_ctor_info_item_id_set_3,
  {
    (MR_TypeInfo) &recompilation__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0,
    (MR_TypeInfo) &recompilation__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0,
    (MR_TypeInfo) &recompilation__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0
  }
};

const MR_TypeCtorInfo_Struct recompilation__recompilation__type_ctor_info_item_version_numbers_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (recompilation____Unify____item_version_numbers_0_0_10001)),
  ((MR_Box) (recompilation____Compare____item_version_numbers_0_0_10001)),
  (MR_String) "recompilation",
  (MR_String) "item_version_numbers",
  {     NULL },
  {     (MR_PseudoTypeInfo) &recompilation__recompilation__ti_item_id_set_3tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct recompilation__recompilation__type_ctor_info_module_qualifier_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (recompilation____Unify____module_qualifier_0_0_10001)),
  ((MR_Box) (recompilation____Compare____module_qualifier_0_0_10001)),
  (MR_String) "recompilation",
  (MR_String) "module_qualifier",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct2 recompilation__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0recompilation__type_ctor_info_version_numbers_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &recompilation__recompilation__type_ctor_info_version_numbers_0
  }
};

const MR_TypeCtorInfo_Struct recompilation__recompilation__type_ctor_info_module_version_numbers_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (recompilation____Unify____module_version_numbers_map_0_0_10001)),
  ((MR_Box) (recompilation____Compare____module_version_numbers_map_0_0_10001)),
  (MR_String) "recompilation",
  (MR_String) "module_version_numbers_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &recompilation__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0recompilation__type_ctor_info_version_numbers_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct recompilation__recompilation__type_ctor_info_pred_or_func_set_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (recompilation____Unify____pred_or_func_set_0_0_10001)),
  ((MR_Box) (recompilation____Compare____pred_or_func_set_0_0_10001)),
  (MR_String) "recompilation",
  (MR_String) "pred_or_func_set",
  {     NULL },
  {     (MR_PseudoTypeInfo) &recompilation__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct3 recompilation__recompilation__ti_item_id_set_3tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &recompilation__recompilation__type_ctor_info_item_id_set_3,
  {
    (MR_TypeInfo) &recompilation__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &recompilation__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &recompilation__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

static const MR_FA_TypeInfo_Struct2 recompilation__tree234__ti_tree234_2recompilation__type_ctor_info_item_id_0set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &recompilation__recompilation__type_ctor_info_item_id_0,
    (MR_TypeInfo) &recompilation__set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0
  }
};

static const MR_PseudoTypeInfo recompilation__recompilation__field_types_recompilation_info_0_0[4] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &recompilation__recompilation__ti_item_id_set_3tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &recompilation__tree234__ti_tree234_2recompilation__type_ctor_info_item_id_0set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0,
  (MR_PseudoTypeInfo) &recompilation__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0recompilation__type_ctor_info_version_numbers_0
};

static const MR_ConstString recompilation__recompilation__field_names_recompilation_info_0_0[4] = {
  (MR_String) "recomp_module_name",
  (MR_String) "recomp_used_items",
  (MR_String) "recomp_dependencies",
  (MR_String) "recomp_version_numbers"
};

static const MR_DuFunctorDesc recompilation__recompilation__du_functor_desc_recompilation_info_0_0 = {
  (MR_String) "recompilation_info",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  recompilation__recompilation__field_types_recompilation_info_0_0,
  recompilation__recompilation__field_names_recompilation_info_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr recompilation__recompilation__du_stag_ordered_recompilation_info_0_0[1] = {
  &recompilation__recompilation__du_functor_desc_recompilation_info_0_0
};

static const MR_DuPtagLayout recompilation__recompilation__du_ptag_ordered_recompilation_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    recompilation__recompilation__du_stag_ordered_recompilation_info_0_0
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (recompilation____Unify____recompilation_info_0_0_10001)),
  ((MR_Box) (recompilation____Compare____recompilation_info_0_0_10001)),
  (MR_String) "recompilation",
  (MR_String) "recompilation_info",
  {     recompilation__recompilation__du_name_ordered_recompilation_info_0 },
  {     recompilation__recompilation__du_ptag_ordered_recompilation_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  recompilation__recompilation__functor_number_map_recompilation_info_0
};

const MR_TypeCtorInfo_Struct recompilation__recompilation__type_ctor_info_simple_item_set_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (recompilation____Unify____simple_item_set_0_0_10001)),
  ((MR_Box) (recompilation____Compare____simple_item_set_0_0_10001)),
  (MR_String) "recompilation",
  (MR_String) "simple_item_set",
  {     NULL },
  {     (MR_PseudoTypeInfo) &recompilation__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct recompilation__recompilation__type_ctor_info_used_items_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (recompilation____Unify____used_items_0_0_10001)),
  ((MR_Box) (recompilation____Compare____used_items_0_0_10001)),
  (MR_String) "recompilation",
  (MR_String) "used_items",
  {     NULL },
  {     (MR_PseudoTypeInfo) &recompilation__recompilation__ti_item_id_set_3tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct recompilation__recompilation__type_ctor_info_version_number_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (recompilation____Unify____version_number_0_0_10001)),
  ((MR_Box) (recompilation____Compare____version_number_0_0_10001)),
  (MR_String) "recompilation",
  (MR_String) "version_number",
  {     NULL },
  {     (MR_PseudoTypeInfo) &libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct recompilation__recompilation__type_ctor_info_version_number_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (recompilation____Unify____version_number_map_0_0_10001)),
  ((MR_Box) (recompilation____Compare____version_number_map_0_0_10001)),
  (MR_String) "recompilation",
  (MR_String) "version_number_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &recompilation__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_PseudoTypeInfo recompilation__recompilation__field_types_version_numbers_0_0[2] = {
  (MR_PseudoTypeInfo) &recompilation__recompilation__ti_item_id_set_3tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0,
  (MR_PseudoTypeInfo) &recompilation__tree234__ti_tree234_2recompilation__type_ctor_info_item_name_0libs__timestamp__type_ctor_info_timestamp_0
};

static const MR_DuFunctorDesc recompilation__recompilation__du_functor_desc_version_numbers_0_0 = {
  (MR_String) "version_numbers",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  recompilation__recompilation__field_types_version_numbers_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr recompilation__recompilation__du_stag_ordered_version_numbers_0_0[1] = {
  &recompilation__recompilation__du_functor_desc_version_numbers_0_0
};

static const MR_DuPtagLayout recompilation__recompilation__du_ptag_ordered_version_numbers_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    recompilation__recompilation__du_stag_ordered_version_numbers_0_0
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (recompilation____Unify____version_numbers_0_0_10001)),
  ((MR_Box) (recompilation____Compare____version_numbers_0_0_10001)),
  (MR_String) "recompilation",
  (MR_String) "version_numbers",
  {     recompilation__recompilation__du_name_ordered_version_numbers_0 },
  {     recompilation__recompilation__du_ptag_ordered_version_numbers_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  recompilation__recompilation__functor_number_map_version_numbers_0
};

static MR_bool MR_CALL 
recompilation____Unify____eqv_expanded_info_0_0_10001(
  MR_Box recompilation__wrapper_arg_1,
  MR_Box recompilation__wrapper_arg_2)
{
  {
    MR_bool recompilation__succeeded;

    {
      recompilation__succeeded = recompilation____Unify____eqv_expanded_info_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
    return recompilation__succeeded;
  }
}

static void MR_CALL 
recompilation____Compare____eqv_expanded_info_0_0_10001(
  MR_Box * recompilation__wrapper_arg_1,
  MR_Box recompilation__wrapper_arg_2,
  MR_Box recompilation__wrapper_arg_3)
{
  {
    MR_Word recompilation__conv0_HeadVar__1_1;

    {
      recompilation____Compare____eqv_expanded_info_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
recompilation____Unify____eqv_expanded_item_set_0_0_10001(
  MR_Box recompilation__wrapper_arg_1,
  MR_Box recompilation__wrapper_arg_2)
{
  {
    MR_bool recompilation__succeeded;

    {
      recompilation__succeeded = recompilation____Unify____eqv_expanded_item_set_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
    return recompilation__succeeded;
  }
}

static void MR_CALL 
recompilation____Compare____eqv_expanded_item_set_0_0_10001(
  MR_Box * recompilation__wrapper_arg_1,
  MR_Box recompilation__wrapper_arg_2,
  MR_Box recompilation__wrapper_arg_3)
{
  {
    MR_Word recompilation__conv0_HeadVar__1_1;

    {
      recompilation____Compare____eqv_expanded_item_set_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
recompilation____Unify____functor_set_0_0_10001(
  MR_Box recompilation__wrapper_arg_1,
  MR_Box recompilation__wrapper_arg_2)
{
  {
    MR_bool recompilation__succeeded;

    {
      recompilation__succeeded = recompilation____Unify____functor_set_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
    return recompilation__succeeded;
  }
}

static void MR_CALL 
recompilation____Compare____functor_set_0_0_10001(
  MR_Box * recompilation__wrapper_arg_1,
  MR_Box recompilation__wrapper_arg_2,
  MR_Box recompilation__wrapper_arg_3)
{
  {
    MR_Word recompilation__conv0_HeadVar__1_1;

    {
      recompilation____Compare____functor_set_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
recompilation____Unify____instance_version_numbers_0_0_10001(
  MR_Box recompilation__wrapper_arg_1,
  MR_Box recompilation__wrapper_arg_2)
{
  {
    MR_bool recompilation__succeeded;

    {
      recompilation__succeeded = recompilation____Unify____instance_version_numbers_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
    return recompilation__succeeded;
  }
}

static void MR_CALL 
recompilation____Compare____instance_version_numbers_0_0_10001(
  MR_Box * recompilation__wrapper_arg_1,
  MR_Box recompilation__wrapper_arg_2,
  MR_Box recompilation__wrapper_arg_3)
{
  {
    MR_Word recompilation__conv0_HeadVar__1_1;

    {
      recompilation____Compare____instance_version_numbers_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
recompilation____Unify____item_id_0_0_10001(
  MR_Box recompilation__wrapper_arg_1,
  MR_Box recompilation__wrapper_arg_2)
{
  {
    MR_bool recompilation__succeeded;

    {
      recompilation__succeeded = recompilation____Unify____item_id_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
    return recompilation__succeeded;
  }
}

static void MR_CALL 
recompilation____Compare____item_id_0_0_10001(
  MR_Box * recompilation__wrapper_arg_1,
  MR_Box recompilation__wrapper_arg_2,
  MR_Box recompilation__wrapper_arg_3)
{
  {
    MR_Word recompilation__conv0_HeadVar__1_1;

    {
      recompilation____Compare____item_id_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
recompilation____Unify____item_id_set_3_0_10001(
  MR_Box recompilation__wrapper_arg_1,
  MR_Box recompilation__wrapper_arg_2,
  MR_Box recompilation__wrapper_arg_3,
  MR_Box recompilation__wrapper_arg_4,
  MR_Box recompilation__wrapper_arg_5)
{
  {
    MR_bool recompilation__succeeded;

    {
      recompilation__succeeded = recompilation____Unify____item_id_set_3_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3), ((MR_Word) recompilation__wrapper_arg_4), ((MR_Word) recompilation__wrapper_arg_5));
    }
    return recompilation__succeeded;
  }
}

static void MR_CALL 
recompilation____Compare____item_id_set_3_0_10001(
  MR_Box recompilation__wrapper_arg_1,
  MR_Box recompilation__wrapper_arg_2,
  MR_Box recompilation__wrapper_arg_3,
  MR_Box * recompilation__wrapper_arg_4,
  MR_Box recompilation__wrapper_arg_5,
  MR_Box recompilation__wrapper_arg_6)
{
  {
    MR_Word recompilation__conv0_HeadVar__1_1;

    {
      recompilation____Compare____item_id_set_3_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3), &recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_5), ((MR_Word) recompilation__wrapper_arg_6));
    }
    *recompilation__wrapper_arg_4 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
recompilation____Unify____item_id_set_1_0_10001(
  MR_Box recompilation__wrapper_arg_1,
  MR_Box recompilation__wrapper_arg_2,
  MR_Box recompilation__wrapper_arg_3)
{
  {
    MR_bool recompilation__succeeded;

    {
      recompilation__succeeded = recompilation____Unify____item_id_set_1_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
    return recompilation__succeeded;
  }
}

static void MR_CALL 
recompilation____Compare____item_id_set_1_0_10001(
  MR_Box recompilation__wrapper_arg_1,
  MR_Box * recompilation__wrapper_arg_2,
  MR_Box recompilation__wrapper_arg_3,
  MR_Box recompilation__wrapper_arg_4)
{
  {
    MR_Word recompilation__conv0_HeadVar__1_1;

    {
      recompilation____Compare____item_id_set_1_0(((MR_Word) recompilation__wrapper_arg_1), &recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_3), ((MR_Word) recompilation__wrapper_arg_4));
    }
    *recompilation__wrapper_arg_2 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
recompilation____Unify____item_name_0_0_10001(
  MR_Box recompilation__wrapper_arg_1,
  MR_Box recompilation__wrapper_arg_2)
{
  {
    MR_bool recompilation__succeeded;

    {
      recompilation__succeeded = recompilation____Unify____item_name_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
    return recompilation__succeeded;
  }
}

static void MR_CALL 
recompilation____Compare____item_name_0_0_10001(
  MR_Box * recompilation__wrapper_arg_1,
  MR_Box recompilation__wrapper_arg_2,
  MR_Box recompilation__wrapper_arg_3)
{
  {
    MR_Word recompilation__conv0_HeadVar__1_1;

    {
      recompilation____Compare____item_name_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
recompilation____Unify____item_type_0_0_10001(
  MR_Box recompilation__wrapper_arg_1,
  MR_Box recompilation__wrapper_arg_2)
{
  {
    MR_bool recompilation__succeeded;

    {
      recompilation__succeeded = recompilation____Unify____item_type_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
    return recompilation__succeeded;
  }
}

static void MR_CALL 
recompilation____Compare____item_type_0_0_10001(
  MR_Box * recompilation__wrapper_arg_1,
  MR_Box recompilation__wrapper_arg_2,
  MR_Box recompilation__wrapper_arg_3)
{
  {
    MR_Word recompilation__conv0_HeadVar__1_1;

    {
      recompilation____Compare____item_type_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
recompilation____Unify____item_version_numbers_0_0_10001(
  MR_Box recompilation__wrapper_arg_1,
  MR_Box recompilation__wrapper_arg_2)
{
  {
    MR_bool recompilation__succeeded;

    {
      recompilation__succeeded = recompilation____Unify____item_version_numbers_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
    return recompilation__succeeded;
  }
}

static void MR_CALL 
recompilation____Compare____item_version_numbers_0_0_10001(
  MR_Box * recompilation__wrapper_arg_1,
  MR_Box recompilation__wrapper_arg_2,
  MR_Box recompilation__wrapper_arg_3)
{
  {
    MR_Word recompilation__conv0_HeadVar__1_1;

    {
      recompilation____Compare____item_version_numbers_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
recompilation____Unify____module_qualifier_0_0_10001(
  MR_Box recompilation__wrapper_arg_1,
  MR_Box recompilation__wrapper_arg_2)
{
  {
    MR_bool recompilation__succeeded;

    {
      recompilation__succeeded = recompilation____Unify____module_qualifier_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
    return recompilation__succeeded;
  }
}

static void MR_CALL 
recompilation____Compare____module_qualifier_0_0_10001(
  MR_Box * recompilation__wrapper_arg_1,
  MR_Box recompilation__wrapper_arg_2,
  MR_Box recompilation__wrapper_arg_3)
{
  {
    MR_Word recompilation__conv0_HeadVar__1_1;

    {
      recompilation____Compare____module_qualifier_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
recompilation____Unify____module_version_numbers_map_0_0_10001(
  MR_Box recompilation__wrapper_arg_1,
  MR_Box recompilation__wrapper_arg_2)
{
  {
    MR_bool recompilation__succeeded;

    {
      recompilation__succeeded = recompilation____Unify____module_version_numbers_map_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
    return recompilation__succeeded;
  }
}

static void MR_CALL 
recompilation____Compare____module_version_numbers_map_0_0_10001(
  MR_Box * recompilation__wrapper_arg_1,
  MR_Box recompilation__wrapper_arg_2,
  MR_Box recompilation__wrapper_arg_3)
{
  {
    MR_Word recompilation__conv0_HeadVar__1_1;

    {
      recompilation____Compare____module_version_numbers_map_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
recompilation____Unify____pred_or_func_set_0_0_10001(
  MR_Box recompilation__wrapper_arg_1,
  MR_Box recompilation__wrapper_arg_2)
{
  {
    MR_bool recompilation__succeeded;

    {
      recompilation__succeeded = recompilation____Unify____pred_or_func_set_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
    return recompilation__succeeded;
  }
}

static void MR_CALL 
recompilation____Compare____pred_or_func_set_0_0_10001(
  MR_Box * recompilation__wrapper_arg_1,
  MR_Box recompilation__wrapper_arg_2,
  MR_Box recompilation__wrapper_arg_3)
{
  {
    MR_Word recompilation__conv0_HeadVar__1_1;

    {
      recompilation____Compare____pred_or_func_set_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
recompilation____Unify____recompilation_info_0_0_10001(
  MR_Box recompilation__wrapper_arg_1,
  MR_Box recompilation__wrapper_arg_2)
{
  {
    MR_bool recompilation__succeeded;

    {
      recompilation__succeeded = recompilation____Unify____recompilation_info_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
    return recompilation__succeeded;
  }
}

static void MR_CALL 
recompilation____Compare____recompilation_info_0_0_10001(
  MR_Box * recompilation__wrapper_arg_1,
  MR_Box recompilation__wrapper_arg_2,
  MR_Box recompilation__wrapper_arg_3)
{
  {
    MR_Word recompilation__conv0_HeadVar__1_1;

    {
      recompilation____Compare____recompilation_info_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
recompilation____Unify____simple_item_set_0_0_10001(
  MR_Box recompilation__wrapper_arg_1,
  MR_Box recompilation__wrapper_arg_2)
{
  {
    MR_bool recompilation__succeeded;

    {
      recompilation__succeeded = recompilation____Unify____simple_item_set_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
    return recompilation__succeeded;
  }
}

static void MR_CALL 
recompilation____Compare____simple_item_set_0_0_10001(
  MR_Box * recompilation__wrapper_arg_1,
  MR_Box recompilation__wrapper_arg_2,
  MR_Box recompilation__wrapper_arg_3)
{
  {
    MR_Word recompilation__conv0_HeadVar__1_1;

    {
      recompilation____Compare____simple_item_set_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
recompilation____Unify____used_items_0_0_10001(
  MR_Box recompilation__wrapper_arg_1,
  MR_Box recompilation__wrapper_arg_2)
{
  {
    MR_bool recompilation__succeeded;

    {
      recompilation__succeeded = recompilation____Unify____used_items_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
    return recompilation__succeeded;
  }
}

static void MR_CALL 
recompilation____Compare____used_items_0_0_10001(
  MR_Box * recompilation__wrapper_arg_1,
  MR_Box recompilation__wrapper_arg_2,
  MR_Box recompilation__wrapper_arg_3)
{
  {
    MR_Word recompilation__conv0_HeadVar__1_1;

    {
      recompilation____Compare____used_items_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
recompilation____Unify____version_number_0_0_10001(
  MR_Box recompilation__wrapper_arg_1,
  MR_Box recompilation__wrapper_arg_2)
{
  {
    MR_bool recompilation__succeeded;

    {
      recompilation__succeeded = recompilation____Unify____version_number_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
    return recompilation__succeeded;
  }
}

static void MR_CALL 
recompilation____Compare____version_number_0_0_10001(
  MR_Box * recompilation__wrapper_arg_1,
  MR_Box recompilation__wrapper_arg_2,
  MR_Box recompilation__wrapper_arg_3)
{
  {
    MR_Word recompilation__conv0_HeadVar__1_1;

    {
      recompilation____Compare____version_number_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
recompilation____Unify____version_number_map_0_0_10001(
  MR_Box recompilation__wrapper_arg_1,
  MR_Box recompilation__wrapper_arg_2)
{
  {
    MR_bool recompilation__succeeded;

    {
      recompilation__succeeded = recompilation____Unify____version_number_map_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
    return recompilation__succeeded;
  }
}

static void MR_CALL 
recompilation____Compare____version_number_map_0_0_10001(
  MR_Box * recompilation__wrapper_arg_1,
  MR_Box recompilation__wrapper_arg_2,
  MR_Box recompilation__wrapper_arg_3)
{
  {
    MR_Word recompilation__conv0_HeadVar__1_1;

    {
      recompilation____Compare____version_number_map_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
recompilation____Unify____version_numbers_0_0_10001(
  MR_Box recompilation__wrapper_arg_1,
  MR_Box recompilation__wrapper_arg_2)
{
  {
    MR_bool recompilation__succeeded;

    {
      recompilation__succeeded = recompilation____Unify____version_numbers_0_0(((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
    return recompilation__succeeded;
  }
}

static void MR_CALL 
recompilation____Compare____version_numbers_0_0_10001(
  MR_Box * recompilation__wrapper_arg_1,
  MR_Box recompilation__wrapper_arg_2,
  MR_Box recompilation__wrapper_arg_3)
{
  {
    MR_Word recompilation__conv0_HeadVar__1_1;

    {
      recompilation____Compare____version_numbers_0_0(&recompilation__conv0_HeadVar__1_1, ((MR_Word) recompilation__wrapper_arg_2), ((MR_Word) recompilation__wrapper_arg_3));
    }
    *recompilation__wrapper_arg_1 = ((MR_Box) (recompilation__conv0_HeadVar__1_1));
  }
}

static MR_Word MR_CALL 
recompilation__IntroducedFrom__func__map_ids__422__1_6_f_0(
  MR_Word recompilation__TypeInfo_for_T_38,
  MR_Word recompilation__TypeInfo_for_U_39,
  MR_Word recompilation__Func_5,
  MR_Word recompilation__Items0_6,
  MR_Word recompilation__LambdaHeadVar__1_14,
  MR_Word recompilation__LambdaHeadVar__2_15)
{
  {
    MR_bool recompilation__succeeded;
    MR_Word recompilation__LambdaHeadVar__3_16;
    MR_Box recompilation__Var_17;
    MR_Box recompilation__Var_18;
    MR_Box MR_CALL (* recompilation__func_0)(MR_Box, MR_Box, MR_Box);

    {
      recompilation__Var_18 = recompilation__extract_ids_2_f_0(recompilation__TypeInfo_for_T_38, recompilation__Items0_6, recompilation__LambdaHeadVar__1_14);
    }
    recompilation__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), recompilation__Func_5, (MR_Integer) 1)));
    {
      recompilation__Var_17 = recompilation__func_0(((MR_Box) recompilation__Func_5), ((MR_Box) (recompilation__LambdaHeadVar__1_14)), recompilation__Var_18);
    }
    {
      recompilation__update_ids_4_p_0(recompilation__TypeInfo_for_U_39, recompilation__LambdaHeadVar__1_14, recompilation__Var_17, recompilation__LambdaHeadVar__2_15, &recompilation__LambdaHeadVar__3_16);
    }
    return recompilation__LambdaHeadVar__3_16;
  }
}

void MR_CALL 
recompilation____Compare____version_numbers_0_0(
  MR_Word * recompilation__HeadVar__1_1,
  MR_Word recompilation__HeadVar__2_2,
  MR_Word recompilation__HeadVar__3_3)
{
  {
    MR_bool recompilation__succeeded;
    MR_Integer recompilation__CastX_9 = (MR_Integer) recompilation__HeadVar__2_2;
    MR_Integer recompilation__CastY_10 = (MR_Integer) recompilation__HeadVar__3_3;

    recompilation__succeeded = (recompilation__CastX_9 == recompilation__CastY_10);
    if (recompilation__succeeded)
      *recompilation__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word recompilation__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word recompilation__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word recompilation__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word recompilation__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word recompilation__Var_8;

        {
          mercury__builtin__compare_3_p_0((MR_Word) &recompilation_scalar_common_3[0], &recompilation__Var_8, ((MR_Box) (recompilation__Var_4)), ((MR_Box) (recompilation__Var_6)));
        }
        recompilation__succeeded = (recompilation__Var_8 == (MR_Integer) 0);
        recompilation__succeeded = !(recompilation__succeeded);
        if (recompilation__succeeded)
          *recompilation__HeadVar__1_1 = recompilation__Var_8;
        else
          {
            {
              mercury__builtin__compare_3_p_0((MR_Word) &recompilation_scalar_common_2[3], recompilation__HeadVar__1_1, ((MR_Box) (recompilation__Var_5)), ((MR_Box) (recompilation__Var_7)));
            }
          }
      }
  }
}

MR_bool MR_CALL 
recompilation____Unify____version_numbers_0_0(
  MR_Word recompilation__HeadVar__1_1,
  MR_Word recompilation__HeadVar__2_2)
{
  {
    MR_bool recompilation__succeeded;
    MR_Integer recompilation__CastX_7 = (MR_Integer) recompilation__HeadVar__1_1;
    MR_Integer recompilation__CastY_8 = (MR_Integer) recompilation__HeadVar__2_2;

    recompilation__succeeded = (recompilation__CastX_7 == recompilation__CastY_8);
    if (recompilation__succeeded)
      recompilation__succeeded = MR_TRUE;
    else
      {
        MR_Word recompilation__TypeInfo_9_9 = (MR_Word) &recompilation_scalar_common_2[4];
        MR_Word recompilation__TypeInfo_10_10;
        MR_Word recompilation__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word recompilation__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word recompilation__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word recompilation__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 1)));

        {
          recompilation__succeeded = recompilation____Unify____item_id_set_3_0(recompilation__TypeInfo_9_9, recompilation__TypeInfo_9_9, recompilation__TypeInfo_9_9, recompilation__Var_3, recompilation__Var_5);
        }
        if (recompilation__succeeded)
          {
            recompilation__TypeInfo_10_10 = (MR_Word) &recompilation_scalar_common_2[3];
            {
              recompilation__succeeded = mercury__builtin__unify_2_p_0(recompilation__TypeInfo_10_10, ((MR_Box) (recompilation__Var_4)), ((MR_Box) (recompilation__Var_6)));
            }
          }
      }
    return recompilation__succeeded;
  }
}

void MR_CALL 
recompilation____Compare____version_number_map_0_0(
  MR_Word * recompilation__HeadVar__1_1,
  MR_Word recompilation__HeadVar__2_2,
  MR_Word recompilation__HeadVar__3_3)
{
  {
    MR_bool recompilation__succeeded;
    MR_Word recompilation__Cast_HeadVar1_4 = recompilation__HeadVar__2_2;
    MR_Word recompilation__Cast_HeadVar2_5 = recompilation__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &recompilation_scalar_common_2[4], recompilation__HeadVar__1_1, ((MR_Box) (recompilation__Cast_HeadVar1_4)), ((MR_Box) (recompilation__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
recompilation____Unify____version_number_map_0_0(
  MR_Word recompilation__HeadVar__1_1,
  MR_Word recompilation__HeadVar__2_2)
{
  {
    MR_bool recompilation__succeeded;
    MR_Word recompilation__Cast_HeadVar1_3 = recompilation__HeadVar__1_1;
    MR_Word recompilation__Cast_HeadVar2_4 = recompilation__HeadVar__2_2;

    {
      recompilation__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &recompilation_scalar_common_2[4], ((MR_Box) (recompilation__Cast_HeadVar1_3)), ((MR_Box) (recompilation__Cast_HeadVar2_4)));
    }
    return recompilation__succeeded;
  }
}

void MR_CALL 
recompilation____Compare____version_number_0_0(
  MR_Word * recompilation__HeadVar__1_1,
  MR_Word recompilation__HeadVar__2_2,
  MR_Word recompilation__HeadVar__3_3)
{
  {
    MR_bool recompilation__succeeded;
    MR_Word recompilation__Cast_HeadVar1_4 = recompilation__HeadVar__2_2;
    MR_Word recompilation__Cast_HeadVar2_5 = recompilation__HeadVar__3_3;

    {
      libs__timestamp____Compare____timestamp_0_0(recompilation__HeadVar__1_1, recompilation__Cast_HeadVar1_4, recompilation__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
recompilation____Unify____version_number_0_0(
  MR_Word recompilation__HeadVar__1_1,
  MR_Word recompilation__HeadVar__2_2)
{
  {
    MR_bool recompilation__succeeded;
    MR_Word recompilation__Cast_HeadVar1_3 = recompilation__HeadVar__1_1;
    MR_Word recompilation__Cast_HeadVar2_4 = recompilation__HeadVar__2_2;

    {
      recompilation__succeeded = libs__timestamp____Unify____timestamp_0_0(recompilation__Cast_HeadVar1_3, recompilation__Cast_HeadVar2_4);
    }
    return recompilation__succeeded;
  }
}

void MR_CALL 
recompilation____Compare____used_items_0_0(
  MR_Word * recompilation__HeadVar__1_1,
  MR_Word recompilation__HeadVar__2_2,
  MR_Word recompilation__HeadVar__3_3)
{
  {
    MR_bool recompilation__succeeded;
    MR_Word recompilation__Cast_HeadVar1_4 = recompilation__HeadVar__2_2;
    MR_Word recompilation__Cast_HeadVar2_5 = recompilation__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &recompilation_scalar_common_3[1], recompilation__HeadVar__1_1, ((MR_Box) (recompilation__Cast_HeadVar1_4)), ((MR_Box) (recompilation__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
recompilation____Unify____used_items_0_0(
  MR_Word recompilation__HeadVar__1_1,
  MR_Word recompilation__HeadVar__2_2)
{
  {
    MR_bool recompilation__succeeded;
    MR_Word recompilation__TypeInfo_5_5 = (MR_Word) &recompilation_scalar_common_2[2];
    MR_Word recompilation__Cast_HeadVar1_3 = recompilation__HeadVar__1_1;
    MR_Word recompilation__Cast_HeadVar2_4 = recompilation__HeadVar__2_2;

    {
      recompilation__succeeded = recompilation____Unify____item_id_set_3_0(recompilation__TypeInfo_5_5, recompilation__TypeInfo_5_5, recompilation__TypeInfo_5_5, recompilation__Cast_HeadVar1_3, recompilation__Cast_HeadVar2_4);
    }
    return recompilation__succeeded;
  }
}

void MR_CALL 
recompilation____Compare____simple_item_set_0_0(
  MR_Word * recompilation__HeadVar__1_1,
  MR_Word recompilation__HeadVar__2_2,
  MR_Word recompilation__HeadVar__3_3)
{
  {
    MR_bool recompilation__succeeded;
    MR_Word recompilation__Cast_HeadVar1_4 = recompilation__HeadVar__2_2;
    MR_Word recompilation__Cast_HeadVar2_5 = recompilation__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &recompilation_scalar_common_2[2], recompilation__HeadVar__1_1, ((MR_Box) (recompilation__Cast_HeadVar1_4)), ((MR_Box) (recompilation__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
recompilation____Unify____simple_item_set_0_0(
  MR_Word recompilation__HeadVar__1_1,
  MR_Word recompilation__HeadVar__2_2)
{
  {
    MR_bool recompilation__succeeded;
    MR_Word recompilation__Cast_HeadVar1_3 = recompilation__HeadVar__1_1;
    MR_Word recompilation__Cast_HeadVar2_4 = recompilation__HeadVar__2_2;

    {
      recompilation__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &recompilation_scalar_common_2[2], ((MR_Box) (recompilation__Cast_HeadVar1_3)), ((MR_Box) (recompilation__Cast_HeadVar2_4)));
    }
    return recompilation__succeeded;
  }
}

void MR_CALL 
recompilation____Compare____recompilation_info_0_0(
  MR_Word * recompilation__HeadVar__1_1,
  MR_Word recompilation__HeadVar__2_2,
  MR_Word recompilation__HeadVar__3_3)
{
  {
    MR_bool recompilation__succeeded;
    MR_Integer recompilation__CastX_15 = (MR_Integer) recompilation__HeadVar__2_2;
    MR_Integer recompilation__CastY_16 = (MR_Integer) recompilation__HeadVar__3_3;

    recompilation__succeeded = (recompilation__CastX_15 == recompilation__CastY_16);
    if (recompilation__succeeded)
      *recompilation__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word recompilation__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word recompilation__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word recompilation__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word recompilation__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word recompilation__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word recompilation__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word recompilation__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word recompilation__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word recompilation__Var_12;

        {
          mdbcomp__sym_name____Compare____sym_name_0_0(&recompilation__Var_12, recompilation__Var_4, recompilation__Var_8);
        }
        recompilation__succeeded = (recompilation__Var_12 == (MR_Integer) 0);
        recompilation__succeeded = !(recompilation__succeeded);
        if (recompilation__succeeded)
          *recompilation__HeadVar__1_1 = recompilation__Var_12;
        else
          {
            MR_Word recompilation__Var_13;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &recompilation_scalar_common_3[1], &recompilation__Var_13, ((MR_Box) (recompilation__Var_5)), ((MR_Box) (recompilation__Var_9)));
            }
            recompilation__succeeded = (recompilation__Var_13 == (MR_Integer) 0);
            recompilation__succeeded = !(recompilation__succeeded);
            if (recompilation__succeeded)
              *recompilation__HeadVar__1_1 = recompilation__Var_13;
            else
              {
                MR_Word recompilation__Var_14;

                {
                  mercury__builtin__compare_3_p_0((MR_Word) &recompilation_scalar_common_2[6], &recompilation__Var_14, ((MR_Box) (recompilation__Var_6)), ((MR_Box) (recompilation__Var_10)));
                }
                recompilation__succeeded = (recompilation__Var_14 == (MR_Integer) 0);
                recompilation__succeeded = !(recompilation__succeeded);
                if (recompilation__succeeded)
                  *recompilation__HeadVar__1_1 = recompilation__Var_14;
                else
                  {
                    {
                      mercury__builtin__compare_3_p_0((MR_Word) &recompilation_scalar_common_2[5], recompilation__HeadVar__1_1, ((MR_Box) (recompilation__Var_7)), ((MR_Box) (recompilation__Var_11)));
                    }
                  }
              }
          }
      }
  }
}

MR_bool MR_CALL 
recompilation____Unify____recompilation_info_0_0(
  MR_Word recompilation__HeadVar__1_1,
  MR_Word recompilation__HeadVar__2_2)
{
  {
    MR_bool recompilation__succeeded;
    MR_Integer recompilation__CastX_11 = (MR_Integer) recompilation__HeadVar__1_1;
    MR_Integer recompilation__CastY_12 = (MR_Integer) recompilation__HeadVar__2_2;

    recompilation__succeeded = (recompilation__CastX_11 == recompilation__CastY_12);
    if (recompilation__succeeded)
      recompilation__succeeded = MR_TRUE;
    else
      {
        MR_Word recompilation__TypeInfo_14_14;
        MR_Word recompilation__TypeInfo_15_15;
        MR_Word recompilation__TypeInfo_16_16;
        MR_Word recompilation__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word recompilation__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word recompilation__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word recompilation__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word recompilation__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word recompilation__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word recompilation__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word recompilation__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 3)));

        {
          recompilation__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(recompilation__Var_3, recompilation__Var_7);
        }
        if (recompilation__succeeded)
          {
            recompilation__TypeInfo_14_14 = (MR_Word) &recompilation_scalar_common_2[2];
            {
              recompilation__succeeded = recompilation____Unify____item_id_set_3_0(recompilation__TypeInfo_14_14, recompilation__TypeInfo_14_14, recompilation__TypeInfo_14_14, recompilation__Var_4, recompilation__Var_8);
            }
            if (recompilation__succeeded)
              {
                recompilation__TypeInfo_15_15 = (MR_Word) &recompilation_scalar_common_2[6];
                {
                  recompilation__succeeded = mercury__builtin__unify_2_p_0(recompilation__TypeInfo_15_15, ((MR_Box) (recompilation__Var_5)), ((MR_Box) (recompilation__Var_9)));
                }
                if (recompilation__succeeded)
                  {
                    recompilation__TypeInfo_16_16 = (MR_Word) &recompilation_scalar_common_2[5];
                    {
                      recompilation__succeeded = mercury__builtin__unify_2_p_0(recompilation__TypeInfo_16_16, ((MR_Box) (recompilation__Var_6)), ((MR_Box) (recompilation__Var_10)));
                    }
                  }
              }
          }
      }
    return recompilation__succeeded;
  }
}

void MR_CALL 
recompilation____Compare____pred_or_func_set_0_0(
  MR_Word * recompilation__HeadVar__1_1,
  MR_Word recompilation__HeadVar__2_2,
  MR_Word recompilation__HeadVar__3_3)
{
  {
    MR_bool recompilation__succeeded;
    MR_Word recompilation__Cast_HeadVar1_4 = recompilation__HeadVar__2_2;
    MR_Word recompilation__Cast_HeadVar2_5 = recompilation__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &recompilation_scalar_common_2[2], recompilation__HeadVar__1_1, ((MR_Box) (recompilation__Cast_HeadVar1_4)), ((MR_Box) (recompilation__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
recompilation____Unify____pred_or_func_set_0_0(
  MR_Word recompilation__HeadVar__1_1,
  MR_Word recompilation__HeadVar__2_2)
{
  {
    MR_bool recompilation__succeeded;
    MR_Word recompilation__Cast_HeadVar1_3 = recompilation__HeadVar__1_1;
    MR_Word recompilation__Cast_HeadVar2_4 = recompilation__HeadVar__2_2;

    {
      recompilation__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &recompilation_scalar_common_2[2], ((MR_Box) (recompilation__Cast_HeadVar1_3)), ((MR_Box) (recompilation__Cast_HeadVar2_4)));
    }
    return recompilation__succeeded;
  }
}

void MR_CALL 
recompilation____Compare____module_version_numbers_map_0_0(
  MR_Word * recompilation__HeadVar__1_1,
  MR_Word recompilation__HeadVar__2_2,
  MR_Word recompilation__HeadVar__3_3)
{
  {
    MR_bool recompilation__succeeded;
    MR_Word recompilation__Cast_HeadVar1_4 = recompilation__HeadVar__2_2;
    MR_Word recompilation__Cast_HeadVar2_5 = recompilation__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &recompilation_scalar_common_2[5], recompilation__HeadVar__1_1, ((MR_Box) (recompilation__Cast_HeadVar1_4)), ((MR_Box) (recompilation__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
recompilation____Unify____module_version_numbers_map_0_0(
  MR_Word recompilation__HeadVar__1_1,
  MR_Word recompilation__HeadVar__2_2)
{
  {
    MR_bool recompilation__succeeded;
    MR_Word recompilation__Cast_HeadVar1_3 = recompilation__HeadVar__1_1;
    MR_Word recompilation__Cast_HeadVar2_4 = recompilation__HeadVar__2_2;

    {
      recompilation__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &recompilation_scalar_common_2[5], ((MR_Box) (recompilation__Cast_HeadVar1_3)), ((MR_Box) (recompilation__Cast_HeadVar2_4)));
    }
    return recompilation__succeeded;
  }
}

void MR_CALL 
recompilation____Compare____module_qualifier_0_0(
  MR_Word * recompilation__HeadVar__1_1,
  MR_Word recompilation__HeadVar__2_2,
  MR_Word recompilation__HeadVar__3_3)
{
  {
    MR_bool recompilation__succeeded;
    MR_Word recompilation__Cast_HeadVar1_4 = recompilation__HeadVar__2_2;
    MR_Word recompilation__Cast_HeadVar2_5 = recompilation__HeadVar__3_3;

    {
      mdbcomp__sym_name____Compare____sym_name_0_0(recompilation__HeadVar__1_1, recompilation__Cast_HeadVar1_4, recompilation__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
recompilation____Unify____module_qualifier_0_0(
  MR_Word recompilation__HeadVar__1_1,
  MR_Word recompilation__HeadVar__2_2)
{
  {
    MR_bool recompilation__succeeded;
    MR_Word recompilation__Cast_HeadVar1_3 = recompilation__HeadVar__1_1;
    MR_Word recompilation__Cast_HeadVar2_4 = recompilation__HeadVar__2_2;

    {
      recompilation__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(recompilation__Cast_HeadVar1_3, recompilation__Cast_HeadVar2_4);
    }
    return recompilation__succeeded;
  }
}

void MR_CALL 
recompilation____Compare____item_version_numbers_0_0(
  MR_Word * recompilation__HeadVar__1_1,
  MR_Word recompilation__HeadVar__2_2,
  MR_Word recompilation__HeadVar__3_3)
{
  {
    MR_bool recompilation__succeeded;
    MR_Word recompilation__Cast_HeadVar1_4 = recompilation__HeadVar__2_2;
    MR_Word recompilation__Cast_HeadVar2_5 = recompilation__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &recompilation_scalar_common_3[0], recompilation__HeadVar__1_1, ((MR_Box) (recompilation__Cast_HeadVar1_4)), ((MR_Box) (recompilation__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
recompilation____Unify____item_version_numbers_0_0(
  MR_Word recompilation__HeadVar__1_1,
  MR_Word recompilation__HeadVar__2_2)
{
  {
    MR_bool recompilation__succeeded;
    MR_Word recompilation__TypeInfo_5_5 = (MR_Word) &recompilation_scalar_common_2[4];
    MR_Word recompilation__Cast_HeadVar1_3 = recompilation__HeadVar__1_1;
    MR_Word recompilation__Cast_HeadVar2_4 = recompilation__HeadVar__2_2;

    {
      recompilation__succeeded = recompilation____Unify____item_id_set_3_0(recompilation__TypeInfo_5_5, recompilation__TypeInfo_5_5, recompilation__TypeInfo_5_5, recompilation__Cast_HeadVar1_3, recompilation__Cast_HeadVar2_4);
    }
    return recompilation__succeeded;
  }
}

void MR_CALL 
recompilation____Compare____item_type_0_0(
  MR_Word * recompilation__HeadVar__1_1,
  MR_Word recompilation__HeadVar__2_2,
  MR_Word recompilation__HeadVar__3_3)
{
  {
    MR_bool recompilation__succeeded;
    MR_Integer recompilation__Cast_HeadVar1_4 = (MR_Integer) recompilation__HeadVar__2_2;
    MR_Integer recompilation__Cast_HeadVar2_5 = (MR_Integer) recompilation__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(recompilation__HeadVar__1_1, recompilation__Cast_HeadVar1_4, recompilation__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
recompilation____Unify____item_type_0_0(
  MR_Word recompilation__HeadVar__2_1,
  MR_Word recompilation__HeadVar__2_2)
{
  {
    MR_bool recompilation__succeeded = (recompilation__HeadVar__2_1 == recompilation__HeadVar__2_2);

    return recompilation__succeeded;
  }
}

void MR_CALL 
recompilation____Compare____item_name_0_0(
  MR_Word * recompilation__HeadVar__1_1,
  MR_Word recompilation__HeadVar__2_2,
  MR_Word recompilation__HeadVar__3_3)
{
  {
    MR_bool recompilation__succeeded;
    MR_Integer recompilation__CastX_9 = (MR_Integer) recompilation__HeadVar__2_2;
    MR_Integer recompilation__CastY_10 = (MR_Integer) recompilation__HeadVar__3_3;

    recompilation__succeeded = (recompilation__CastX_9 == recompilation__CastY_10);
    if (recompilation__succeeded)
      *recompilation__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word recompilation__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer recompilation__Var_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word recompilation__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, (MR_Integer) 0)));
        MR_Integer recompilation__Var_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word recompilation__Var_8;

        {
          mdbcomp__sym_name____Compare____sym_name_0_0(&recompilation__Var_8, recompilation__Var_4, recompilation__Var_6);
        }
        recompilation__succeeded = (recompilation__Var_8 == (MR_Integer) 0);
        recompilation__succeeded = !(recompilation__succeeded);
        if (recompilation__succeeded)
          *recompilation__HeadVar__1_1 = recompilation__Var_8;
        else
          {
            mercury__private_builtin__builtin_compare_int_3_p_0(recompilation__HeadVar__1_1, recompilation__Var_5, recompilation__Var_7);
          }
      }
  }
}

MR_bool MR_CALL 
recompilation____Unify____item_name_0_0(
  MR_Word recompilation__HeadVar__1_1,
  MR_Word recompilation__HeadVar__2_2)
{
  {
    MR_bool recompilation__succeeded;
    MR_Integer recompilation__CastX_7 = (MR_Integer) recompilation__HeadVar__1_1;
    MR_Integer recompilation__CastY_8 = (MR_Integer) recompilation__HeadVar__2_2;

    recompilation__succeeded = (recompilation__CastX_7 == recompilation__CastY_8);
    if (recompilation__succeeded)
      recompilation__succeeded = MR_TRUE;
    else
      {
        MR_Word recompilation__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 0)));
        MR_Integer recompilation__Var_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word recompilation__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer recompilation__Var_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 1)));

        {
          recompilation__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(recompilation__Var_3, recompilation__Var_5);
        }
        if (recompilation__succeeded)
          recompilation__succeeded = (recompilation__Var_4 == recompilation__Var_6);
      }
    return recompilation__succeeded;
  }
}

void MR_CALL 
recompilation____Compare____item_id_set_3_0(
  MR_Word recompilation__TypeInfo_for_Map_35,
  MR_Word recompilation__TypeInfo_for_Set_36,
  MR_Word recompilation__TypeInfo_for_Cons_37,
  MR_Word * recompilation__HeadVar__1_1,
  MR_Word recompilation__HeadVar__2_2,
  MR_Word recompilation__HeadVar__3_3)
{
  {
    MR_bool recompilation__succeeded;
    MR_Integer recompilation__CastX_33 = (MR_Integer) recompilation__HeadVar__2_2;
    MR_Integer recompilation__CastY_34 = (MR_Integer) recompilation__HeadVar__3_3;

    recompilation__succeeded = (recompilation__CastX_33 == recompilation__CastY_34);
    if (recompilation__succeeded)
      *recompilation__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Box recompilation__Var_4 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 0));
        MR_Box recompilation__Var_5 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 1));
        MR_Box recompilation__Var_6 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 2));
        MR_Box recompilation__Var_7 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 3));
        MR_Box recompilation__Var_8 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 4));
        MR_Box recompilation__Var_9 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 5));
        MR_Box recompilation__Var_10 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 6));
        MR_Box recompilation__Var_11 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 7));
        MR_Box recompilation__Var_12 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 8));
        MR_Box recompilation__Var_13 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 9));
        MR_Box recompilation__Var_14 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, (MR_Integer) 0));
        MR_Box recompilation__Var_15 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, (MR_Integer) 1));
        MR_Box recompilation__Var_16 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, (MR_Integer) 2));
        MR_Box recompilation__Var_17 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, (MR_Integer) 3));
        MR_Box recompilation__Var_18 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, (MR_Integer) 4));
        MR_Box recompilation__Var_19 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, (MR_Integer) 5));
        MR_Box recompilation__Var_20 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, (MR_Integer) 6));
        MR_Box recompilation__Var_21 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, (MR_Integer) 7));
        MR_Box recompilation__Var_22 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, (MR_Integer) 8));
        MR_Box recompilation__Var_23 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, (MR_Integer) 9));
        MR_Word recompilation__Var_24;

        {
          mercury__builtin__compare_3_p_0(recompilation__TypeInfo_for_Map_35, &recompilation__Var_24, recompilation__Var_4, recompilation__Var_14);
        }
        recompilation__succeeded = (recompilation__Var_24 == (MR_Integer) 0);
        recompilation__succeeded = !(recompilation__succeeded);
        if (recompilation__succeeded)
          *recompilation__HeadVar__1_1 = recompilation__Var_24;
        else
          {
            MR_Word recompilation__Var_25;

            {
              mercury__builtin__compare_3_p_0(recompilation__TypeInfo_for_Map_35, &recompilation__Var_25, recompilation__Var_5, recompilation__Var_15);
            }
            recompilation__succeeded = (recompilation__Var_25 == (MR_Integer) 0);
            recompilation__succeeded = !(recompilation__succeeded);
            if (recompilation__succeeded)
              *recompilation__HeadVar__1_1 = recompilation__Var_25;
            else
              {
                MR_Word recompilation__Var_26;

                {
                  mercury__builtin__compare_3_p_0(recompilation__TypeInfo_for_Map_35, &recompilation__Var_26, recompilation__Var_6, recompilation__Var_16);
                }
                recompilation__succeeded = (recompilation__Var_26 == (MR_Integer) 0);
                recompilation__succeeded = !(recompilation__succeeded);
                if (recompilation__succeeded)
                  *recompilation__HeadVar__1_1 = recompilation__Var_26;
                else
                  {
                    MR_Word recompilation__Var_27;

                    {
                      mercury__builtin__compare_3_p_0(recompilation__TypeInfo_for_Map_35, &recompilation__Var_27, recompilation__Var_7, recompilation__Var_17);
                    }
                    recompilation__succeeded = (recompilation__Var_27 == (MR_Integer) 0);
                    recompilation__succeeded = !(recompilation__succeeded);
                    if (recompilation__succeeded)
                      *recompilation__HeadVar__1_1 = recompilation__Var_27;
                    else
                      {
                        MR_Word recompilation__Var_28;

                        {
                          mercury__builtin__compare_3_p_0(recompilation__TypeInfo_for_Map_35, &recompilation__Var_28, recompilation__Var_8, recompilation__Var_18);
                        }
                        recompilation__succeeded = (recompilation__Var_28 == (MR_Integer) 0);
                        recompilation__succeeded = !(recompilation__succeeded);
                        if (recompilation__succeeded)
                          *recompilation__HeadVar__1_1 = recompilation__Var_28;
                        else
                          {
                            MR_Word recompilation__Var_29;

                            {
                              mercury__builtin__compare_3_p_0(recompilation__TypeInfo_for_Cons_37, &recompilation__Var_29, recompilation__Var_9, recompilation__Var_19);
                            }
                            recompilation__succeeded = (recompilation__Var_29 == (MR_Integer) 0);
                            recompilation__succeeded = !(recompilation__succeeded);
                            if (recompilation__succeeded)
                              *recompilation__HeadVar__1_1 = recompilation__Var_29;
                            else
                              {
                                MR_Word recompilation__Var_30;

                                {
                                  mercury__builtin__compare_3_p_0(recompilation__TypeInfo_for_Set_36, &recompilation__Var_30, recompilation__Var_10, recompilation__Var_20);
                                }
                                recompilation__succeeded = (recompilation__Var_30 == (MR_Integer) 0);
                                recompilation__succeeded = !(recompilation__succeeded);
                                if (recompilation__succeeded)
                                  *recompilation__HeadVar__1_1 = recompilation__Var_30;
                                else
                                  {
                                    MR_Word recompilation__Var_31;

                                    {
                                      mercury__builtin__compare_3_p_0(recompilation__TypeInfo_for_Set_36, &recompilation__Var_31, recompilation__Var_11, recompilation__Var_21);
                                    }
                                    recompilation__succeeded = (recompilation__Var_31 == (MR_Integer) 0);
                                    recompilation__succeeded = !(recompilation__succeeded);
                                    if (recompilation__succeeded)
                                      *recompilation__HeadVar__1_1 = recompilation__Var_31;
                                    else
                                      {
                                        MR_Word recompilation__Var_32;

                                        {
                                          mercury__builtin__compare_3_p_0(recompilation__TypeInfo_for_Set_36, &recompilation__Var_32, recompilation__Var_12, recompilation__Var_22);
                                        }
                                        recompilation__succeeded = (recompilation__Var_32 == (MR_Integer) 0);
                                        recompilation__succeeded = !(recompilation__succeeded);
                                        if (recompilation__succeeded)
                                          *recompilation__HeadVar__1_1 = recompilation__Var_32;
                                        else
                                          {
                                            mercury__builtin__compare_3_p_0(recompilation__TypeInfo_for_Set_36, recompilation__HeadVar__1_1, recompilation__Var_13, recompilation__Var_23);
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
}

MR_bool MR_CALL 
recompilation____Unify____item_id_set_3_0(
  MR_Word recompilation__TypeInfo_for_Map_25,
  MR_Word recompilation__TypeInfo_for_Set_26,
  MR_Word recompilation__TypeInfo_for_Cons_27,
  MR_Word recompilation__HeadVar__1_1,
  MR_Word recompilation__HeadVar__2_2)
{
  {
    MR_bool recompilation__succeeded;
    MR_Integer recompilation__CastX_23 = (MR_Integer) recompilation__HeadVar__1_1;
    MR_Integer recompilation__CastY_24 = (MR_Integer) recompilation__HeadVar__2_2;

    recompilation__succeeded = (recompilation__CastX_23 == recompilation__CastY_24);
    if (recompilation__succeeded)
      recompilation__succeeded = MR_TRUE;
    else
      {
        MR_Box recompilation__Var_3 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 0));
        MR_Box recompilation__Var_4 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 1));
        MR_Box recompilation__Var_5 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 2));
        MR_Box recompilation__Var_6 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 3));
        MR_Box recompilation__Var_7 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 4));
        MR_Box recompilation__Var_8 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 5));
        MR_Box recompilation__Var_9 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 6));
        MR_Box recompilation__Var_10 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 7));
        MR_Box recompilation__Var_11 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 8));
        MR_Box recompilation__Var_12 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 9));
        MR_Box recompilation__Var_13 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 0));
        MR_Box recompilation__Var_14 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 1));
        MR_Box recompilation__Var_15 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 2));
        MR_Box recompilation__Var_16 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 3));
        MR_Box recompilation__Var_17 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 4));
        MR_Box recompilation__Var_18 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 5));
        MR_Box recompilation__Var_19 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 6));
        MR_Box recompilation__Var_20 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 7));
        MR_Box recompilation__Var_21 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 8));
        MR_Box recompilation__Var_22 = (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 9));

        {
          recompilation__succeeded = mercury__builtin__unify_2_p_0(recompilation__TypeInfo_for_Map_25, recompilation__Var_3, recompilation__Var_13);
        }
        if (recompilation__succeeded)
          {
            {
              recompilation__succeeded = mercury__builtin__unify_2_p_0(recompilation__TypeInfo_for_Map_25, recompilation__Var_4, recompilation__Var_14);
            }
            if (recompilation__succeeded)
              {
                {
                  recompilation__succeeded = mercury__builtin__unify_2_p_0(recompilation__TypeInfo_for_Map_25, recompilation__Var_5, recompilation__Var_15);
                }
                if (recompilation__succeeded)
                  {
                    {
                      recompilation__succeeded = mercury__builtin__unify_2_p_0(recompilation__TypeInfo_for_Map_25, recompilation__Var_6, recompilation__Var_16);
                    }
                    if (recompilation__succeeded)
                      {
                        {
                          recompilation__succeeded = mercury__builtin__unify_2_p_0(recompilation__TypeInfo_for_Map_25, recompilation__Var_7, recompilation__Var_17);
                        }
                        if (recompilation__succeeded)
                          {
                            {
                              recompilation__succeeded = mercury__builtin__unify_2_p_0(recompilation__TypeInfo_for_Cons_27, recompilation__Var_8, recompilation__Var_18);
                            }
                            if (recompilation__succeeded)
                              {
                                {
                                  recompilation__succeeded = mercury__builtin__unify_2_p_0(recompilation__TypeInfo_for_Set_26, recompilation__Var_9, recompilation__Var_19);
                                }
                                if (recompilation__succeeded)
                                  {
                                    {
                                      recompilation__succeeded = mercury__builtin__unify_2_p_0(recompilation__TypeInfo_for_Set_26, recompilation__Var_10, recompilation__Var_20);
                                    }
                                    if (recompilation__succeeded)
                                      {
                                        {
                                          recompilation__succeeded = mercury__builtin__unify_2_p_0(recompilation__TypeInfo_for_Set_26, recompilation__Var_11, recompilation__Var_21);
                                        }
                                        if (recompilation__succeeded)
                                          {
                                            recompilation__succeeded = mercury__builtin__unify_2_p_0(recompilation__TypeInfo_for_Set_26, recompilation__Var_12, recompilation__Var_22);
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
    return recompilation__succeeded;
  }
}

void MR_CALL 
recompilation____Compare____item_id_set_1_0(
  MR_Word recompilation__TypeInfo_for_T_6,
  MR_Word * recompilation__HeadVar__1_1,
  MR_Word recompilation__HeadVar__2_2,
  MR_Word recompilation__HeadVar__3_3)
{
  {
    MR_bool recompilation__succeeded;
    MR_Word recompilation__Cast_HeadVar1_4 = recompilation__HeadVar__2_2;
    MR_Word recompilation__Cast_HeadVar2_5 = recompilation__HeadVar__3_3;

    {
      recompilation____Compare____item_id_set_3_0(recompilation__TypeInfo_for_T_6, recompilation__TypeInfo_for_T_6, recompilation__TypeInfo_for_T_6, recompilation__HeadVar__1_1, recompilation__Cast_HeadVar1_4, recompilation__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
recompilation____Unify____item_id_set_1_0(
  MR_Word recompilation__TypeInfo_for_T_5,
  MR_Word recompilation__HeadVar__1_1,
  MR_Word recompilation__HeadVar__2_2)
{
  {
    MR_bool recompilation__succeeded;
    MR_Word recompilation__Cast_HeadVar1_3 = recompilation__HeadVar__1_1;
    MR_Word recompilation__Cast_HeadVar2_4 = recompilation__HeadVar__2_2;

    {
      recompilation__succeeded = recompilation____Unify____item_id_set_3_0(recompilation__TypeInfo_for_T_5, recompilation__TypeInfo_for_T_5, recompilation__TypeInfo_for_T_5, recompilation__Cast_HeadVar1_3, recompilation__Cast_HeadVar2_4);
    }
    return recompilation__succeeded;
  }
}

void MR_CALL 
recompilation____Compare____item_id_0_0(
  MR_Word * recompilation__HeadVar__1_1,
  MR_Word recompilation__HeadVar__2_2,
  MR_Word recompilation__HeadVar__3_3)
{
  {
    MR_bool recompilation__succeeded;
    MR_Integer recompilation__CastX_9 = (MR_Integer) recompilation__HeadVar__2_2;
    MR_Integer recompilation__CastY_10 = (MR_Integer) recompilation__HeadVar__3_3;

    recompilation__succeeded = (recompilation__CastX_9 == recompilation__CastY_10);
    if (recompilation__succeeded)
      *recompilation__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word recompilation__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word recompilation__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word recompilation__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word recompilation__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word recompilation__Var_8;
        MR_Integer recompilation__Var_13 = (MR_Integer) recompilation__Var_4;
        MR_Integer recompilation__Var_14 = (MR_Integer) recompilation__Var_6;

        {
          mercury__private_builtin__builtin_compare_int_3_p_0(&recompilation__Var_8, recompilation__Var_13, recompilation__Var_14);
        }
        recompilation__succeeded = (recompilation__Var_8 == (MR_Integer) 0);
        recompilation__succeeded = !(recompilation__succeeded);
        if (recompilation__succeeded)
          *recompilation__HeadVar__1_1 = recompilation__Var_8;
        else
          {
            recompilation____Compare____item_name_0_0(recompilation__HeadVar__1_1, recompilation__Var_5, recompilation__Var_7);
          }
      }
  }
}

MR_bool MR_CALL 
recompilation____Unify____item_id_0_0(
  MR_Word recompilation__HeadVar__1_1,
  MR_Word recompilation__HeadVar__2_2)
{
  {
    MR_bool recompilation__succeeded;
    MR_Integer recompilation__CastX_7 = (MR_Integer) recompilation__HeadVar__1_1;
    MR_Integer recompilation__CastY_8 = (MR_Integer) recompilation__HeadVar__2_2;

    recompilation__succeeded = (recompilation__CastX_7 == recompilation__CastY_8);
    if (recompilation__succeeded)
      recompilation__succeeded = MR_TRUE;
    else
      {
        MR_Word recompilation__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word recompilation__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word recompilation__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word recompilation__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 1)));

        recompilation__succeeded = (recompilation__Var_3 == recompilation__Var_5);
        if (recompilation__succeeded)
          {
            recompilation__succeeded = recompilation____Unify____item_name_0_0(recompilation__Var_4, recompilation__Var_6);
          }
      }
    return recompilation__succeeded;
  }
}

void MR_CALL 
recompilation____Compare____instance_version_numbers_0_0(
  MR_Word * recompilation__HeadVar__1_1,
  MR_Word recompilation__HeadVar__2_2,
  MR_Word recompilation__HeadVar__3_3)
{
  {
    MR_bool recompilation__succeeded;
    MR_Word recompilation__Cast_HeadVar1_4 = recompilation__HeadVar__2_2;
    MR_Word recompilation__Cast_HeadVar2_5 = recompilation__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &recompilation_scalar_common_2[3], recompilation__HeadVar__1_1, ((MR_Box) (recompilation__Cast_HeadVar1_4)), ((MR_Box) (recompilation__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
recompilation____Unify____instance_version_numbers_0_0(
  MR_Word recompilation__HeadVar__1_1,
  MR_Word recompilation__HeadVar__2_2)
{
  {
    MR_bool recompilation__succeeded;
    MR_Word recompilation__Cast_HeadVar1_3 = recompilation__HeadVar__1_1;
    MR_Word recompilation__Cast_HeadVar2_4 = recompilation__HeadVar__2_2;

    {
      recompilation__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &recompilation_scalar_common_2[3], ((MR_Box) (recompilation__Cast_HeadVar1_3)), ((MR_Box) (recompilation__Cast_HeadVar2_4)));
    }
    return recompilation__succeeded;
  }
}

void MR_CALL 
recompilation____Compare____functor_set_0_0(
  MR_Word * recompilation__HeadVar__1_1,
  MR_Word recompilation__HeadVar__2_2,
  MR_Word recompilation__HeadVar__3_3)
{
  {
    MR_bool recompilation__succeeded;
    MR_Word recompilation__Cast_HeadVar1_4 = recompilation__HeadVar__2_2;
    MR_Word recompilation__Cast_HeadVar2_5 = recompilation__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &recompilation_scalar_common_2[2], recompilation__HeadVar__1_1, ((MR_Box) (recompilation__Cast_HeadVar1_4)), ((MR_Box) (recompilation__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
recompilation____Unify____functor_set_0_0(
  MR_Word recompilation__HeadVar__1_1,
  MR_Word recompilation__HeadVar__2_2)
{
  {
    MR_bool recompilation__succeeded;
    MR_Word recompilation__Cast_HeadVar1_3 = recompilation__HeadVar__1_1;
    MR_Word recompilation__Cast_HeadVar2_4 = recompilation__HeadVar__2_2;

    {
      recompilation__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &recompilation_scalar_common_2[2], ((MR_Box) (recompilation__Cast_HeadVar1_3)), ((MR_Box) (recompilation__Cast_HeadVar2_4)));
    }
    return recompilation__succeeded;
  }
}

void MR_CALL 
recompilation____Compare____eqv_expanded_item_set_0_0(
  MR_Word * recompilation__HeadVar__1_1,
  MR_Word recompilation__HeadVar__2_2,
  MR_Word recompilation__HeadVar__3_3)
{
  {
    MR_bool recompilation__succeeded;
    MR_Integer recompilation__CastX_9 = (MR_Integer) recompilation__HeadVar__2_2;
    MR_Integer recompilation__CastY_10 = (MR_Integer) recompilation__HeadVar__3_3;

    recompilation__succeeded = (recompilation__CastX_9 == recompilation__CastY_10);
    if (recompilation__succeeded)
      *recompilation__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word recompilation__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word recompilation__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word recompilation__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word recompilation__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word recompilation__Var_8;

        {
          mdbcomp__sym_name____Compare____sym_name_0_0(&recompilation__Var_8, recompilation__Var_4, recompilation__Var_6);
        }
        recompilation__succeeded = (recompilation__Var_8 == (MR_Integer) 0);
        recompilation__succeeded = !(recompilation__succeeded);
        if (recompilation__succeeded)
          *recompilation__HeadVar__1_1 = recompilation__Var_8;
        else
          {
            {
              mercury__builtin__compare_3_p_0((MR_Word) &recompilation_scalar_common_1[0], recompilation__HeadVar__1_1, ((MR_Box) (recompilation__Var_5)), ((MR_Box) (recompilation__Var_7)));
            }
          }
      }
  }
}

MR_bool MR_CALL 
recompilation____Unify____eqv_expanded_item_set_0_0(
  MR_Word recompilation__HeadVar__1_1,
  MR_Word recompilation__HeadVar__2_2)
{
  {
    MR_bool recompilation__succeeded;
    MR_Integer recompilation__CastX_7 = (MR_Integer) recompilation__HeadVar__1_1;
    MR_Integer recompilation__CastY_8 = (MR_Integer) recompilation__HeadVar__2_2;

    recompilation__succeeded = (recompilation__CastX_7 == recompilation__CastY_8);
    if (recompilation__succeeded)
      recompilation__succeeded = MR_TRUE;
    else
      {
        MR_Word recompilation__TypeInfo_10_10;
        MR_Word recompilation__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word recompilation__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word recompilation__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word recompilation__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, (MR_Integer) 1)));

        {
          recompilation__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(recompilation__Var_3, recompilation__Var_5);
        }
        if (recompilation__succeeded)
          {
            recompilation__TypeInfo_10_10 = (MR_Word) &recompilation_scalar_common_1[0];
            {
              recompilation__succeeded = mercury__builtin__unify_2_p_0(recompilation__TypeInfo_10_10, ((MR_Box) (recompilation__Var_4)), ((MR_Box) (recompilation__Var_6)));
            }
          }
      }
    return recompilation__succeeded;
  }
}

void MR_CALL 
recompilation____Compare____eqv_expanded_info_0_0(
  MR_Word * recompilation__HeadVar__1_1,
  MR_Word recompilation__HeadVar__2_2,
  MR_Word recompilation__HeadVar__3_3)
{
  {
    MR_bool recompilation__succeeded;
    MR_Word recompilation__Cast_HeadVar1_4 = recompilation__HeadVar__2_2;
    MR_Word recompilation__Cast_HeadVar2_5 = recompilation__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &recompilation_scalar_common_1[1], recompilation__HeadVar__1_1, ((MR_Box) (recompilation__Cast_HeadVar1_4)), ((MR_Box) (recompilation__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
recompilation____Unify____eqv_expanded_info_0_0(
  MR_Word recompilation__HeadVar__1_1,
  MR_Word recompilation__HeadVar__2_2)
{
  {
    MR_bool recompilation__succeeded;
    MR_Word recompilation__Cast_HeadVar1_3 = recompilation__HeadVar__1_1;
    MR_Word recompilation__Cast_HeadVar2_4 = recompilation__HeadVar__2_2;

    {
      recompilation__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &recompilation_scalar_common_1[1], ((MR_Box) (recompilation__Cast_HeadVar1_3)), ((MR_Box) (recompilation__Cast_HeadVar2_4)));
    }
    return recompilation__succeeded;
  }
}

void MR_CALL 
recompilation__record_expanded_item_2_3_p_0(
  MR_Word recompilation__ItemId_4,
  MR_Word recompilation__ExpandedItemSet0_5,
  MR_Word * recompilation__ExpandedItemSet_6)
{
  {
    MR_bool recompilation__succeeded;
    MR_Word recompilation__ModuleName_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__ExpandedItemSet0_5, (MR_Integer) 0)));
    MR_Word recompilation__Items0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__ExpandedItemSet0_5, (MR_Integer) 1)));
    MR_Word recompilation__ItemName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__ItemId_4, (MR_Integer) 1)));
    MR_Word recompilation__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__ItemId_4, (MR_Integer) 0)));
    MR_Word recompilation__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__ItemName_10, (MR_Integer) 0)));
    MR_Word recompilation__Var_16;
    MR_Integer recompilation__Var_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__ItemName_10, (MR_Integer) 1)));
    MR_String recompilation__Var_11;

    recompilation__succeeded = ((MR_tag((MR_Word) recompilation__Var_14)) == (MR_mktag((MR_Integer) 1)));
    if (recompilation__succeeded)
      {
        recompilation__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__Var_14, (MR_Integer) 0)));
        recompilation__Var_11 = ((MR_String) (MR_hl_field(MR_mktag(1), recompilation__Var_14, (MR_Integer) 1)));
        {
          recompilation__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(recompilation__ModuleName_7, recompilation__Var_16);
        }
      }
    if (recompilation__succeeded)
      *recompilation__ExpandedItemSet_6 = recompilation__ExpandedItemSet0_5;
    else
      {
        MR_Word recompilation__Items_13;

        {
          mercury__set__insert_3_p_0((MR_Word) &recompilation__recompilation__type_ctor_info_item_id_0, ((MR_Box) (recompilation__ItemId_4)), recompilation__Items0_8, &recompilation__Items_13);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          *recompilation__ExpandedItemSet_6 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (recompilation__ModuleName_7));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (recompilation__Items_13));
        }
      }
  }
}

void MR_CALL 
recompilation__finish_recording_expanded_items_4_p_0(
  MR_Word recompilation__Item_1,
  MR_Word recompilation__HeadVar__2_2,
  MR_Word recompilation__HeadVar__3_3,
  MR_Word * recompilation__HeadVar__4_4)
{
  {
    MR_bool recompilation__succeeded;

    if ((recompilation__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((recompilation__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *recompilation__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      else
        *recompilation__HeadVar__4_4 = recompilation__HeadVar__3_3;
    else
      {
        MR_Word recompilation__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__HeadVar__2_2, (MR_Integer) 0)));

        if ((recompilation__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "recompilation", (MR_String) "predicate \140recompilation.finish_recording_expanded_items\'/4", (MR_String) "items but no info");
              return;
            }
          }
        else
          {
            MR_Word recompilation__ExpandedItems_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__Var_20, (MR_Integer) 1)));
            MR_Word recompilation__Info0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word recompilation__Info_18;
            MR_Word recompilation__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__Var_20, (MR_Integer) 0)));

            {
              recompilation__record_expanded_items_4_p_0(recompilation__Item_1, recompilation__ExpandedItems_16, recompilation__Info0_17, &recompilation__Info_18);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *recompilation__HeadVar__4_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (recompilation__Info_18));
            }
          }
      }
  }
}

static void MR_CALL 
recompilation__record_expanded_item_3_p_0_1(
  MR_Box recompilation__closure_arg,
  MR_Box recompilation__wrapper_arg_1,
  MR_Box * recompilation__wrapper_arg_2)
{
  {
    MR_Box recompilation__closure = recompilation__closure_arg;
    MR_Word recompilation__conv0_ExpandedItemSet_6;

    {
      recompilation__record_expanded_item_2_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__closure, (MR_Integer) 3))), ((MR_Word) recompilation__wrapper_arg_1), &recompilation__conv0_ExpandedItemSet_6);
    }
    *recompilation__wrapper_arg_2 = ((MR_Box) (recompilation__conv0_ExpandedItemSet_6));
  }
}

void MR_CALL 
recompilation__record_expanded_item_3_p_0(
  MR_Word recompilation__Item_4,
  MR_Word recompilation__STATE_VARIABLE_EquivTypeInfo_0_6,
  MR_Word * recompilation__STATE_VARIABLE_EquivTypeInfo_7)
{
  {
    MR_bool recompilation__succeeded;
    MR_Word recompilation__TypeCtorInfo_12_12;
    MR_Word recompilation__Var_8;

    {
      recompilation__Var_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), recompilation__Var_8, 0) = ((MR_Box) (&recompilation_scalar_common_9[0]));
      MR_hl_field(MR_mktag(0), recompilation__Var_8, 1) = ((MR_Box) (recompilation__record_expanded_item_3_p_0_1));
      MR_hl_field(MR_mktag(0), recompilation__Var_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), recompilation__Var_8, 3) = ((MR_Box) (recompilation__Item_4));
    }
    recompilation__TypeCtorInfo_12_12 = (MR_Word) &recompilation__recompilation__type_ctor_info_eqv_expanded_item_set_0;
    {
      mercury__maybe__map_maybe_3_p_0(recompilation__TypeCtorInfo_12_12, recompilation__TypeCtorInfo_12_12, recompilation__Var_8, recompilation__STATE_VARIABLE_EquivTypeInfo_0_6, recompilation__STATE_VARIABLE_EquivTypeInfo_7);
    }
  }
}

void MR_CALL 
recompilation__maybe_start_recording_expanded_items_4_p_0(
  MR_Word recompilation__ModuleName_1,
  MR_Word recompilation__SymName_2,
  MR_Word recompilation__HeadVar__3_3,
  MR_Word * recompilation__HeadVar__4_4)
{
  {
    MR_bool recompilation__succeeded;

    if ((recompilation__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *recompilation__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word recompilation__Var_15;
        MR_String recompilation__Var_11;

        recompilation__succeeded = ((MR_tag((MR_Word) recompilation__SymName_2)) == (MR_mktag((MR_Integer) 1)));
        if (recompilation__succeeded)
          {
            recompilation__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__SymName_2, (MR_Integer) 0)));
            recompilation__Var_11 = ((MR_String) (MR_hl_field(MR_mktag(1), recompilation__SymName_2, (MR_Integer) 1)));
            {
              recompilation__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(recompilation__ModuleName_1, recompilation__Var_15);
            }
          }
        if (recompilation__succeeded)
          *recompilation__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            MR_Word recompilation__Var_12;
            MR_Word recompilation__Var_13;

            {
              recompilation__Var_13 = mercury__set__init_0_f_0((MR_Word) &recompilation__recompilation__type_ctor_info_item_id_0);
            }
            {
              recompilation__Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), recompilation__Var_12, 0) = ((MR_Box) (recompilation__ModuleName_1));
              MR_hl_field(MR_mktag(0), recompilation__Var_12, 1) = ((MR_Box) (recompilation__Var_13));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *recompilation__HeadVar__4_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (recompilation__Var_12));
            }
          }
      }
  }
}

void MR_CALL 
recompilation__record_expanded_items_4_p_0(
  MR_Word recompilation__Item_5,
  MR_Word recompilation__ExpandedItems_6,
  MR_Word recompilation__STATE_VARIABLE_Info_0_13,
  MR_Word * recompilation__STATE_VARIABLE_Info_14)
{
  {
    MR_bool recompilation__succeeded;

    {
      recompilation__succeeded = mercury__set__is_empty_1_p_0((MR_Word) &recompilation__recompilation__type_ctor_info_item_id_0, recompilation__ExpandedItems_6);
    }
    if (recompilation__succeeded)
      *recompilation__STATE_VARIABLE_Info_14 = recompilation__STATE_VARIABLE_Info_0_13;
    else
      {
        MR_Word recompilation__TypeCtorInfo_27_27;
        MR_Word recompilation__DepsMap0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_Info_0_13, (MR_Integer) 2)));
        MR_Word recompilation__Deps1_10;
        MR_Word recompilation__Deps_11;
        MR_Word recompilation__DepsMap_12;
        MR_Word recompilation__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_Info_0_13, (MR_Integer) 0)));
        MR_Word recompilation__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_Info_0_13, (MR_Integer) 1)));
        MR_Word recompilation__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)));
        MR_Word recompilation__Deps0_9;
        MR_Box recompilation__conv0_Deps0_9;
        MR_Word recompilation__Var_19;
        MR_Word recompilation__Var_20;
        MR_Word recompilation__Var_22;
        MR_Word recompilation__Var_21;

        {
          recompilation__succeeded = mercury__map__search_3_p_0((MR_Word) &recompilation__recompilation__type_ctor_info_item_id_0, (MR_Word) &recompilation_scalar_common_1[0], recompilation__DepsMap0_8, ((MR_Box) (recompilation__Item_5)), &recompilation__conv0_Deps0_9);
        }
        if (recompilation__succeeded)
          {
            recompilation__Deps0_9 = ((MR_Word) recompilation__conv0_Deps0_9);
            recompilation__succeeded = MR_TRUE;
          }
        if (recompilation__succeeded)
          recompilation__Deps1_10 = recompilation__Deps0_9;
        else
          {
            {
              mercury__set__init_1_p_0((MR_Word) &recompilation__recompilation__type_ctor_info_item_id_0, &recompilation__Deps1_10);
            }
          }
        recompilation__TypeCtorInfo_27_27 = (MR_Word) &recompilation__recompilation__type_ctor_info_item_id_0;
        {
          mercury__set__union_3_p_0(recompilation__TypeCtorInfo_27_27, recompilation__Deps1_10, recompilation__ExpandedItems_6, &recompilation__Deps_11);
        }
        {
          mercury__map__set_4_p_0(recompilation__TypeCtorInfo_27_27, (MR_Word) &recompilation_scalar_common_1[0], ((MR_Box) (recompilation__Item_5)), ((MR_Box) (recompilation__Deps_11)), recompilation__DepsMap0_8, &recompilation__DepsMap_12);
        }
        recompilation__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_Info_0_13, (MR_Integer) 0)));
        recompilation__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_Info_0_13, (MR_Integer) 1)));
        recompilation__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_Info_0_13, (MR_Integer) 2)));
        recompilation__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          *recompilation__STATE_VARIABLE_Info_14 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (recompilation__Var_19));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (recompilation__Var_20));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (recompilation__DepsMap_12));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (recompilation__Var_22));
        }
      }
  }
}

void MR_CALL 
recompilation__record_used_item_5_p_0(
  MR_Word recompilation__ItemType_6,
  MR_Word recompilation__Id_7,
  MR_Word recompilation__QualifiedId_8,
  MR_Word recompilation__STATE_VARIABLE_Info_0_26,
  MR_Word * recompilation__STATE_VARIABLE_Info_27)
{
  {
    MR_bool recompilation__succeeded = (recompilation__ItemType_6 == (MR_Integer) 6);
    MR_Word recompilation__QualifiedName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__QualifiedId_8, (MR_Integer) 0)));
    MR_Integer recompilation__Arity_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__QualifiedId_8, (MR_Integer) 1)));
    MR_String recompilation__Var_12;

    recompilation__succeeded = !(recompilation__succeeded);
    if (recompilation__succeeded)
      {
        recompilation__succeeded = (recompilation__ItemType_6 == (MR_Integer) 7);
        recompilation__succeeded = !(recompilation__succeeded);
        if (recompilation__succeeded)
          {
            recompilation__succeeded = (recompilation__ItemType_6 == (MR_Integer) 5);
            recompilation__succeeded = !(recompilation__succeeded);
            if (recompilation__succeeded)
              {
                recompilation__succeeded = ((MR_tag((MR_Word) recompilation__QualifiedName_10)) == (MR_mktag((MR_Integer) 0)));
                if (recompilation__succeeded)
                  recompilation__Var_12 = ((MR_String) (MR_hl_field(MR_mktag(0), recompilation__QualifiedName_10, (MR_Integer) 0)));
              }
          }
      }
    if (recompilation__succeeded)
      *recompilation__STATE_VARIABLE_Info_27 = recompilation__STATE_VARIABLE_Info_0_26;
    else
      {
        MR_Word recompilation__TypeInfo_36_36 = (MR_Word) &recompilation_scalar_common_2[2];
        MR_Word recompilation__ItemSet0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_Info_0_26, (MR_Integer) 1)));
        MR_Word recompilation__IdSet0_14;
        MR_String recompilation__UnqualifiedName_15;
        MR_Word recompilation__ModuleName_16;
        MR_Word recompilation__UnqualifiedId_17;
        MR_Word recompilation__SymName_18;
        MR_Word recompilation__ModuleQualifier_20;
        MR_Word recompilation__MatchingNames1_22;
        MR_Word recompilation__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_Info_0_26, (MR_Integer) 0)));
        MR_Word recompilation__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_Info_0_26, (MR_Integer) 2)));
        MR_Word recompilation__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_Info_0_26, (MR_Integer) 3)));
        MR_Box recompilation__conv0_IdSet0_14;
        MR_Integer recompilation__Var_19;
        MR_Word recompilation__MatchingNames0_21;
        MR_Box recompilation__conv1_MatchingNames0_21;
        MR_Word recompilation__TypeCtorInfo_40_40;

        {
          recompilation__conv0_IdSet0_14 = recompilation__extract_ids_2_f_0(recompilation__TypeInfo_36_36, recompilation__ItemSet0_13, recompilation__ItemType_6);
        }
        recompilation__IdSet0_14 = ((MR_Word) recompilation__conv0_IdSet0_14);
        {
          recompilation__UnqualifiedName_15 = mdbcomp__sym_name__unqualify_name_1_f_0(recompilation__QualifiedName_10);
        }
        if (((MR_tag((MR_Word) recompilation__QualifiedName_10)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_String recompilation__Var_47;

            recompilation__ModuleName_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__QualifiedName_10, (MR_Integer) 0)));
            recompilation__Var_47 = ((MR_String) (MR_hl_field(MR_mktag(1), recompilation__QualifiedName_10, (MR_Integer) 1)));
          }
        else
          {
            recompilation__ModuleName_16 = (MR_Word) &recompilation_scalar_common_8[0];
          }
        {
          recompilation__UnqualifiedId_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), recompilation__UnqualifiedId_17, 0) = ((MR_Box) (recompilation__UnqualifiedName_15));
          MR_hl_field(MR_mktag(0), recompilation__UnqualifiedId_17, 1) = ((MR_Box) (recompilation__Arity_11));
        }
        recompilation__SymName_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__Id_7, (MR_Integer) 0)));
        recompilation__Var_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__Id_7, (MR_Integer) 1)));
        if (((MR_tag((MR_Word) recompilation__SymName_18)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_String recompilation__Var_51;

            recompilation__ModuleQualifier_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__SymName_18, (MR_Integer) 0)));
            recompilation__Var_51 = ((MR_String) (MR_hl_field(MR_mktag(1), recompilation__SymName_18, (MR_Integer) 1)));
          }
        else
          {
            recompilation__ModuleQualifier_20 = (MR_Word) &recompilation_scalar_common_8[0];
          }
        {
          recompilation__succeeded = mercury__map__search_3_p_0((MR_Word) &recompilation_scalar_common_2[0], (MR_Word) &recompilation_scalar_common_2[1], recompilation__IdSet0_14, ((MR_Box) (recompilation__UnqualifiedId_17)), &recompilation__conv1_MatchingNames0_21);
        }
        if (recompilation__succeeded)
          {
            recompilation__MatchingNames0_21 = ((MR_Word) recompilation__conv1_MatchingNames0_21);
            recompilation__succeeded = MR_TRUE;
          }
        if (recompilation__succeeded)
          recompilation__MatchingNames1_22 = recompilation__MatchingNames0_21;
        else
          {
            MR_Word recompilation__TypeCtorInfo_39_39 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;

            {
              mercury__map__init_1_p_0(recompilation__TypeCtorInfo_39_39, recompilation__TypeCtorInfo_39_39, &recompilation__MatchingNames1_22);
            }
          }
        recompilation__TypeCtorInfo_40_40 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
        {
          recompilation__succeeded = mercury__map__contains_2_p_0(recompilation__TypeCtorInfo_40_40, recompilation__TypeCtorInfo_40_40, recompilation__MatchingNames1_22, ((MR_Box) (recompilation__ModuleQualifier_20)));
        }
        if (recompilation__succeeded)
          *recompilation__STATE_VARIABLE_Info_27 = recompilation__STATE_VARIABLE_Info_0_26;
        else
          {
            MR_Word recompilation__TypeCtorInfo_41_41 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
            MR_Word recompilation__MatchingNames_23;
            MR_Word recompilation__IdSet_24;
            MR_Word recompilation__ItemSet_25;
            MR_Word recompilation__Var_32;
            MR_Word recompilation__Var_34;
            MR_Word recompilation__Var_35;
            MR_Word recompilation__Var_33;

            {
              mercury__map__det_insert_4_p_0(recompilation__TypeCtorInfo_41_41, recompilation__TypeCtorInfo_41_41, ((MR_Box) (recompilation__ModuleQualifier_20)), ((MR_Box) (recompilation__ModuleName_16)), recompilation__MatchingNames1_22, &recompilation__MatchingNames_23);
            }
            {
              mercury__map__set_4_p_0((MR_Word) &recompilation_scalar_common_2[0], (MR_Word) &recompilation_scalar_common_2[1], ((MR_Box) (recompilation__UnqualifiedId_17)), ((MR_Box) (recompilation__MatchingNames_23)), recompilation__IdSet0_14, &recompilation__IdSet_24);
            }
            {
              recompilation__update_ids_4_p_0(recompilation__TypeInfo_36_36, recompilation__ItemType_6, ((MR_Box) (recompilation__IdSet_24)), recompilation__ItemSet0_13, &recompilation__ItemSet_25);
            }
            recompilation__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_Info_0_26, (MR_Integer) 0)));
            recompilation__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_Info_0_26, (MR_Integer) 1)));
            recompilation__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_Info_0_26, (MR_Integer) 2)));
            recompilation__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_Info_0_26, (MR_Integer) 3)));
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              *recompilation__STATE_VARIABLE_Info_27 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (recompilation__Var_32));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (recompilation__ItemSet_25));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (recompilation__Var_34));
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (recompilation__Var_35));
            }
          }
      }
  }
}

MR_Word MR_CALL 
recompilation__module_qualify_name_2_f_0(
  MR_Word recompilation__Qualifier_4,
  MR_String recompilation__Name_5)
{
  {
    MR_bool recompilation__succeeded = ((MR_tag((MR_Word) recompilation__Qualifier_4)) == (MR_mktag((MR_Integer) 0)));
    MR_Word recompilation__HeadVar__3_3;
    MR_String recompilation__Var_6;

    if (recompilation__succeeded)
      {
        recompilation__Var_6 = ((MR_String) (MR_hl_field(MR_mktag(0), recompilation__Qualifier_4, (MR_Integer) 0)));
        recompilation__succeeded = (strcmp(recompilation__Var_6, (MR_String) "") == 0);
      }
    if (recompilation__succeeded)
      {
        recompilation__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), recompilation__HeadVar__3_3, 0) = ((MR_Box) (recompilation__Name_5));
      }
    else
      {
        recompilation__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), recompilation__HeadVar__3_3, 0) = ((MR_Box) (recompilation__Qualifier_4));
        MR_hl_field(MR_mktag(1), recompilation__HeadVar__3_3, 1) = ((MR_Box) (recompilation__Name_5));
      }
    return recompilation__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
recompilation__find_module_qualifier_1_f_0(
  MR_Word recompilation__HeadVar__1_1)
{
  {
    MR_bool recompilation__succeeded;
    MR_Word recompilation__HeadVar__2_2;

    if (((MR_tag((MR_Word) recompilation__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_String recompilation__Var_6;

        recompilation__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), recompilation__HeadVar__1_1, (MR_Integer) 0)));
        recompilation__Var_6 = ((MR_String) (MR_hl_field(MR_mktag(1), recompilation__HeadVar__1_1, (MR_Integer) 1)));
      }
    else
      {
        recompilation__HeadVar__2_2 = (MR_Word) &recompilation_scalar_common_8[0];
      }
    return recompilation__HeadVar__2_2;
  }
}

static MR_Box MR_CALL 
recompilation__map_ids_3_f_0_1(
  MR_Box recompilation__closure_arg,
  MR_Box recompilation__wrapper_arg_1,
  MR_Box recompilation__wrapper_arg_2)
{
  {
    MR_Box recompilation__wrapper_arg_3;
    MR_Box recompilation__closure = recompilation__closure_arg;
    MR_Word recompilation__conv0_LambdaHeadVar__3_16;

    {
      recompilation__conv0_LambdaHeadVar__3_16 = recompilation__IntroducedFrom__func__map_ids__422__1_6_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__closure, (MR_Integer) 6))), ((MR_Word) recompilation__wrapper_arg_1), ((MR_Word) recompilation__wrapper_arg_2));
    }
    recompilation__wrapper_arg_3 = ((MR_Box) (recompilation__conv0_LambdaHeadVar__3_16));
    return recompilation__wrapper_arg_3;
  }
}

MR_Word MR_CALL 
recompilation__map_ids_3_f_0(
  MR_Word recompilation__TypeInfo_for_T_38,
  MR_Word recompilation__TypeInfo_for_U_39,
  MR_Word recompilation__Func_5,
  MR_Word recompilation__Items0_6,
  MR_Box recompilation__Init_7)
{
  {
    MR_bool recompilation__succeeded;
    MR_Word recompilation__Items_8;
    MR_Word recompilation__TypeInfo_42_42;
    MR_Word recompilation__Items1_9;
    MR_Word recompilation__Var_13;
    MR_Box recompilation__conv1_Items_8;

    {
      recompilation__Items1_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), recompilation__Items1_9, 0) = recompilation__Init_7;
      MR_hl_field(MR_mktag(0), recompilation__Items1_9, 1) = recompilation__Init_7;
      MR_hl_field(MR_mktag(0), recompilation__Items1_9, 2) = recompilation__Init_7;
      MR_hl_field(MR_mktag(0), recompilation__Items1_9, 3) = recompilation__Init_7;
      MR_hl_field(MR_mktag(0), recompilation__Items1_9, 4) = recompilation__Init_7;
      MR_hl_field(MR_mktag(0), recompilation__Items1_9, 5) = recompilation__Init_7;
      MR_hl_field(MR_mktag(0), recompilation__Items1_9, 6) = recompilation__Init_7;
      MR_hl_field(MR_mktag(0), recompilation__Items1_9, 7) = recompilation__Init_7;
      MR_hl_field(MR_mktag(0), recompilation__Items1_9, 8) = recompilation__Init_7;
      MR_hl_field(MR_mktag(0), recompilation__Items1_9, 9) = recompilation__Init_7;
    }
    {
      recompilation__TypeInfo_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), recompilation__TypeInfo_42_42, 0) = ((MR_Box) (&recompilation__recompilation__type_ctor_info_item_id_set_3));
      MR_hl_field(MR_mktag(0), recompilation__TypeInfo_42_42, 1) = ((MR_Box) (recompilation__TypeInfo_for_U_39));
      MR_hl_field(MR_mktag(0), recompilation__TypeInfo_42_42, 2) = ((MR_Box) (recompilation__TypeInfo_for_U_39));
      MR_hl_field(MR_mktag(0), recompilation__TypeInfo_42_42, 3) = ((MR_Box) (recompilation__TypeInfo_for_U_39));
    }
    {
      recompilation__Var_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), recompilation__Var_13, 0) = ((MR_Box) (&recompilation_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), recompilation__Var_13, 1) = ((MR_Box) (recompilation__map_ids_3_f_0_1));
      MR_hl_field(MR_mktag(0), recompilation__Var_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), recompilation__Var_13, 3) = ((MR_Box) (recompilation__TypeInfo_for_T_38));
      MR_hl_field(MR_mktag(0), recompilation__Var_13, 4) = ((MR_Box) (recompilation__TypeInfo_for_U_39));
      MR_hl_field(MR_mktag(0), recompilation__Var_13, 5) = ((MR_Box) (recompilation__Func_5));
      MR_hl_field(MR_mktag(0), recompilation__Var_13, 6) = ((MR_Box) (recompilation__Items0_6));
    }
    {
      recompilation__conv1_Items_8 = mercury__list__foldl_3_f_0((MR_Word) &recompilation__recompilation__type_ctor_info_item_type_0, recompilation__TypeInfo_42_42, (MR_Word) recompilation__Var_13, (MR_Word) MR_mkword(MR_mktag(1), &recompilation_scalar_common_1[9]), ((MR_Box) (recompilation__Items1_9)));
    }
    recompilation__Items_8 = ((MR_Word) recompilation__conv1_Items_8);
    return recompilation__Items_8;
  }
}

void MR_CALL 
recompilation__update_ids_4_p_0(
  MR_Word recompilation__TypeInfo_for_T_155,
  MR_Word recompilation__HeadVar__1_1,
  MR_Box recompilation__IdMap_2,
  MR_Word recompilation__STATE_VARIABLE_ItemIdSet_0_3,
  MR_Word * recompilation__STATE_VARIABLE_ItemIdSet_4)
{
  {
    MR_bool recompilation__succeeded;
    MR_Box recompilation__Var_156 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 9));
    MR_Box recompilation__Var_157 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 8));
    MR_Box recompilation__Var_158 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 7));
    MR_Box recompilation__Var_159 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 6));
    MR_Box recompilation__Var_160 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 5));
    MR_Box recompilation__Var_161 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 4));
    MR_Box recompilation__Var_162 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 3));
    MR_Box recompilation__Var_163 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 2));
    MR_Box recompilation__Var_164 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 1));
    MR_Box recompilation__Var_165 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 0));

    switch (recompilation__HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 9:
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
          *recompilation__STATE_VARIABLE_ItemIdSet_4 = base;
          MR_hl_field(MR_mktag(0), base, 0) = recompilation__Var_165;
          MR_hl_field(MR_mktag(0), base, 1) = recompilation__Var_164;
          MR_hl_field(MR_mktag(0), base, 2) = recompilation__Var_163;
          MR_hl_field(MR_mktag(0), base, 3) = recompilation__Var_162;
          MR_hl_field(MR_mktag(0), base, 4) = recompilation__Var_161;
          MR_hl_field(MR_mktag(0), base, 5) = recompilation__Var_160;
          MR_hl_field(MR_mktag(0), base, 6) = recompilation__Var_159;
          MR_hl_field(MR_mktag(0), base, 7) = recompilation__Var_158;
          MR_hl_field(MR_mktag(0), base, 8) = recompilation__Var_157;
          MR_hl_field(MR_mktag(0), base, 9) = recompilation__IdMap_2;
        }
        break;
      case (MR_Integer) 7:
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
          *recompilation__STATE_VARIABLE_ItemIdSet_4 = base;
          MR_hl_field(MR_mktag(0), base, 0) = recompilation__Var_165;
          MR_hl_field(MR_mktag(0), base, 1) = recompilation__Var_164;
          MR_hl_field(MR_mktag(0), base, 2) = recompilation__Var_163;
          MR_hl_field(MR_mktag(0), base, 3) = recompilation__Var_162;
          MR_hl_field(MR_mktag(0), base, 4) = recompilation__Var_161;
          MR_hl_field(MR_mktag(0), base, 5) = recompilation__Var_160;
          MR_hl_field(MR_mktag(0), base, 6) = recompilation__Var_159;
          MR_hl_field(MR_mktag(0), base, 7) = recompilation__IdMap_2;
          MR_hl_field(MR_mktag(0), base, 8) = recompilation__Var_157;
          MR_hl_field(MR_mktag(0), base, 9) = recompilation__Var_156;
        }
        break;
      case (MR_Integer) 5:
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
          *recompilation__STATE_VARIABLE_ItemIdSet_4 = base;
          MR_hl_field(MR_mktag(0), base, 0) = recompilation__Var_165;
          MR_hl_field(MR_mktag(0), base, 1) = recompilation__Var_164;
          MR_hl_field(MR_mktag(0), base, 2) = recompilation__Var_163;
          MR_hl_field(MR_mktag(0), base, 3) = recompilation__Var_162;
          MR_hl_field(MR_mktag(0), base, 4) = recompilation__Var_161;
          MR_hl_field(MR_mktag(0), base, 5) = recompilation__IdMap_2;
          MR_hl_field(MR_mktag(0), base, 6) = recompilation__Var_159;
          MR_hl_field(MR_mktag(0), base, 7) = recompilation__Var_158;
          MR_hl_field(MR_mktag(0), base, 8) = recompilation__Var_157;
          MR_hl_field(MR_mktag(0), base, 9) = recompilation__Var_156;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
          *recompilation__STATE_VARIABLE_ItemIdSet_4 = base;
          MR_hl_field(MR_mktag(0), base, 0) = recompilation__Var_165;
          MR_hl_field(MR_mktag(0), base, 1) = recompilation__Var_164;
          MR_hl_field(MR_mktag(0), base, 2) = recompilation__Var_163;
          MR_hl_field(MR_mktag(0), base, 3) = recompilation__IdMap_2;
          MR_hl_field(MR_mktag(0), base, 4) = recompilation__Var_161;
          MR_hl_field(MR_mktag(0), base, 5) = recompilation__Var_160;
          MR_hl_field(MR_mktag(0), base, 6) = recompilation__Var_159;
          MR_hl_field(MR_mktag(0), base, 7) = recompilation__Var_158;
          MR_hl_field(MR_mktag(0), base, 8) = recompilation__Var_157;
          MR_hl_field(MR_mktag(0), base, 9) = recompilation__Var_156;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
          *recompilation__STATE_VARIABLE_ItemIdSet_4 = base;
          MR_hl_field(MR_mktag(0), base, 0) = recompilation__Var_165;
          MR_hl_field(MR_mktag(0), base, 1) = recompilation__Var_164;
          MR_hl_field(MR_mktag(0), base, 2) = recompilation__IdMap_2;
          MR_hl_field(MR_mktag(0), base, 3) = recompilation__Var_162;
          MR_hl_field(MR_mktag(0), base, 4) = recompilation__Var_161;
          MR_hl_field(MR_mktag(0), base, 5) = recompilation__Var_160;
          MR_hl_field(MR_mktag(0), base, 6) = recompilation__Var_159;
          MR_hl_field(MR_mktag(0), base, 7) = recompilation__Var_158;
          MR_hl_field(MR_mktag(0), base, 8) = recompilation__Var_157;
          MR_hl_field(MR_mktag(0), base, 9) = recompilation__Var_156;
        }
        break;
      case (MR_Integer) 8:
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
          *recompilation__STATE_VARIABLE_ItemIdSet_4 = base;
          MR_hl_field(MR_mktag(0), base, 0) = recompilation__Var_165;
          MR_hl_field(MR_mktag(0), base, 1) = recompilation__Var_164;
          MR_hl_field(MR_mktag(0), base, 2) = recompilation__Var_163;
          MR_hl_field(MR_mktag(0), base, 3) = recompilation__Var_162;
          MR_hl_field(MR_mktag(0), base, 4) = recompilation__Var_161;
          MR_hl_field(MR_mktag(0), base, 5) = recompilation__Var_160;
          MR_hl_field(MR_mktag(0), base, 6) = recompilation__Var_159;
          MR_hl_field(MR_mktag(0), base, 7) = recompilation__Var_158;
          MR_hl_field(MR_mktag(0), base, 8) = recompilation__IdMap_2;
          MR_hl_field(MR_mktag(0), base, 9) = recompilation__Var_156;
        }
        break;
      case (MR_Integer) 6:
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
          *recompilation__STATE_VARIABLE_ItemIdSet_4 = base;
          MR_hl_field(MR_mktag(0), base, 0) = recompilation__Var_165;
          MR_hl_field(MR_mktag(0), base, 1) = recompilation__Var_164;
          MR_hl_field(MR_mktag(0), base, 2) = recompilation__Var_163;
          MR_hl_field(MR_mktag(0), base, 3) = recompilation__Var_162;
          MR_hl_field(MR_mktag(0), base, 4) = recompilation__Var_161;
          MR_hl_field(MR_mktag(0), base, 5) = recompilation__Var_160;
          MR_hl_field(MR_mktag(0), base, 6) = recompilation__IdMap_2;
          MR_hl_field(MR_mktag(0), base, 7) = recompilation__Var_158;
          MR_hl_field(MR_mktag(0), base, 8) = recompilation__Var_157;
          MR_hl_field(MR_mktag(0), base, 9) = recompilation__Var_156;
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
          *recompilation__STATE_VARIABLE_ItemIdSet_4 = base;
          MR_hl_field(MR_mktag(0), base, 0) = recompilation__IdMap_2;
          MR_hl_field(MR_mktag(0), base, 1) = recompilation__Var_164;
          MR_hl_field(MR_mktag(0), base, 2) = recompilation__Var_163;
          MR_hl_field(MR_mktag(0), base, 3) = recompilation__Var_162;
          MR_hl_field(MR_mktag(0), base, 4) = recompilation__Var_161;
          MR_hl_field(MR_mktag(0), base, 5) = recompilation__Var_160;
          MR_hl_field(MR_mktag(0), base, 6) = recompilation__Var_159;
          MR_hl_field(MR_mktag(0), base, 7) = recompilation__Var_158;
          MR_hl_field(MR_mktag(0), base, 8) = recompilation__Var_157;
          MR_hl_field(MR_mktag(0), base, 9) = recompilation__Var_156;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
          *recompilation__STATE_VARIABLE_ItemIdSet_4 = base;
          MR_hl_field(MR_mktag(0), base, 0) = recompilation__Var_165;
          MR_hl_field(MR_mktag(0), base, 1) = recompilation__IdMap_2;
          MR_hl_field(MR_mktag(0), base, 2) = recompilation__Var_163;
          MR_hl_field(MR_mktag(0), base, 3) = recompilation__Var_162;
          MR_hl_field(MR_mktag(0), base, 4) = recompilation__Var_161;
          MR_hl_field(MR_mktag(0), base, 5) = recompilation__Var_160;
          MR_hl_field(MR_mktag(0), base, 6) = recompilation__Var_159;
          MR_hl_field(MR_mktag(0), base, 7) = recompilation__Var_158;
          MR_hl_field(MR_mktag(0), base, 8) = recompilation__Var_157;
          MR_hl_field(MR_mktag(0), base, 9) = recompilation__Var_156;
        }
        break;
      case (MR_Integer) 4:
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
          *recompilation__STATE_VARIABLE_ItemIdSet_4 = base;
          MR_hl_field(MR_mktag(0), base, 0) = recompilation__Var_165;
          MR_hl_field(MR_mktag(0), base, 1) = recompilation__Var_164;
          MR_hl_field(MR_mktag(0), base, 2) = recompilation__Var_163;
          MR_hl_field(MR_mktag(0), base, 3) = recompilation__Var_162;
          MR_hl_field(MR_mktag(0), base, 4) = recompilation__IdMap_2;
          MR_hl_field(MR_mktag(0), base, 5) = recompilation__Var_160;
          MR_hl_field(MR_mktag(0), base, 6) = recompilation__Var_159;
          MR_hl_field(MR_mktag(0), base, 7) = recompilation__Var_158;
          MR_hl_field(MR_mktag(0), base, 8) = recompilation__Var_157;
          MR_hl_field(MR_mktag(0), base, 9) = recompilation__Var_156;
        }
        break;
    }
  }
}

MR_Box MR_CALL 
recompilation__extract_ids_2_f_0(
  MR_Word recompilation__TypeInfo_for_T_104,
  MR_Word recompilation__ItemIdSet_1,
  MR_Word recompilation__HeadVar__2_2)
{
  {
    MR_bool recompilation__succeeded;
    MR_Box recompilation__HeadVar__3_3;
    MR_Box recompilation__Var_105 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 9));
    MR_Box recompilation__Var_106 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 8));
    MR_Box recompilation__Var_107 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 7));
    MR_Box recompilation__Var_108 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 6));
    MR_Box recompilation__Var_109 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 5));
    MR_Box recompilation__Var_110 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 4));
    MR_Box recompilation__Var_111 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 3));
    MR_Box recompilation__Var_112 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 2));
    MR_Box recompilation__Var_113 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 1));
    MR_Box recompilation__Var_114 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 0));

    switch (recompilation__HeadVar__2_2) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 9:
        recompilation__HeadVar__3_3 = recompilation__Var_105;
        break;
      case (MR_Integer) 7:
        recompilation__HeadVar__3_3 = recompilation__Var_107;
        break;
      case (MR_Integer) 5:
        recompilation__HeadVar__3_3 = recompilation__Var_109;
        break;
      case (MR_Integer) 3:
        recompilation__HeadVar__3_3 = recompilation__Var_111;
        break;
      case (MR_Integer) 2:
        recompilation__HeadVar__3_3 = recompilation__Var_112;
        break;
      case (MR_Integer) 8:
        recompilation__HeadVar__3_3 = recompilation__Var_106;
        break;
      case (MR_Integer) 6:
        recompilation__HeadVar__3_3 = recompilation__Var_108;
        break;
      case (MR_Integer) 0:
        recompilation__HeadVar__3_3 = recompilation__Var_114;
        break;
      case (MR_Integer) 1:
        recompilation__HeadVar__3_3 = recompilation__Var_113;
        break;
      case (MR_Integer) 4:
        recompilation__HeadVar__3_3 = recompilation__Var_110;
        break;
    }
    return recompilation__HeadVar__3_3;
  }
}

void MR_CALL 
recompilation__update_pred_or_func_set_4_p_0(
  MR_Word recompilation__TypeInfo_for_PorF_35,
  MR_Word recompilation__TypeInfo_for_Simple_36,
  MR_Word recompilation__TypeInfo_for_Cons_37,
  MR_Word recompilation__HeadVar__1_1,
  MR_Box recompilation__Set_2,
  MR_Word recompilation__STATE_VARIABLE_ItemIdSet_0_3,
  MR_Word * recompilation__STATE_VARIABLE_ItemIdSet_4)
{
  {
    MR_bool recompilation__succeeded;
    MR_Box recompilation__Var_38 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 9));
    MR_Box recompilation__Var_39 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 8));
    MR_Box recompilation__Var_40 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 7));
    MR_Box recompilation__Var_41 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 6));
    MR_Box recompilation__Var_42 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 5));
    MR_Box recompilation__Var_43 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 4));
    MR_Box recompilation__Var_44 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 3));
    MR_Box recompilation__Var_45 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 2));
    MR_Box recompilation__Var_46 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 1));
    MR_Box recompilation__Var_47 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 0));

    switch (recompilation__HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 7:
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
          *recompilation__STATE_VARIABLE_ItemIdSet_4 = base;
          MR_hl_field(MR_mktag(0), base, 0) = recompilation__Var_47;
          MR_hl_field(MR_mktag(0), base, 1) = recompilation__Var_46;
          MR_hl_field(MR_mktag(0), base, 2) = recompilation__Var_45;
          MR_hl_field(MR_mktag(0), base, 3) = recompilation__Var_44;
          MR_hl_field(MR_mktag(0), base, 4) = recompilation__Var_43;
          MR_hl_field(MR_mktag(0), base, 5) = recompilation__Var_42;
          MR_hl_field(MR_mktag(0), base, 6) = recompilation__Var_41;
          MR_hl_field(MR_mktag(0), base, 7) = recompilation__Set_2;
          MR_hl_field(MR_mktag(0), base, 8) = recompilation__Var_39;
          MR_hl_field(MR_mktag(0), base, 9) = recompilation__Var_38;
        }
        break;
      case (MR_Integer) 6:
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
          *recompilation__STATE_VARIABLE_ItemIdSet_4 = base;
          MR_hl_field(MR_mktag(0), base, 0) = recompilation__Var_47;
          MR_hl_field(MR_mktag(0), base, 1) = recompilation__Var_46;
          MR_hl_field(MR_mktag(0), base, 2) = recompilation__Var_45;
          MR_hl_field(MR_mktag(0), base, 3) = recompilation__Var_44;
          MR_hl_field(MR_mktag(0), base, 4) = recompilation__Var_43;
          MR_hl_field(MR_mktag(0), base, 5) = recompilation__Var_42;
          MR_hl_field(MR_mktag(0), base, 6) = recompilation__Set_2;
          MR_hl_field(MR_mktag(0), base, 7) = recompilation__Var_40;
          MR_hl_field(MR_mktag(0), base, 8) = recompilation__Var_39;
          MR_hl_field(MR_mktag(0), base, 9) = recompilation__Var_38;
        }
        break;
    }
  }
}

MR_Box MR_CALL 
recompilation__extract_pred_or_func_set_2_f_0(
  MR_Word recompilation__TypeInfo_for_Simple_24,
  MR_Word recompilation__TypeInfo_for_PorF_25,
  MR_Word recompilation__TypeInfo_for_Cons_26,
  MR_Word recompilation__ItemIdSet_1,
  MR_Word recompilation__HeadVar__2_2)
{
  {
    MR_bool recompilation__succeeded;
    MR_Box recompilation__HeadVar__3_3;
    MR_Box recompilation__Var_29 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 7));
    MR_Box recompilation__Var_30 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 6));
    MR_Box recompilation__Var_27 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 9));
    MR_Box recompilation__Var_28 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 8));
    MR_Box recompilation__Var_31 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 5));
    MR_Box recompilation__Var_32 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 4));
    MR_Box recompilation__Var_33 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 3));
    MR_Box recompilation__Var_34 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 2));
    MR_Box recompilation__Var_35 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 1));
    MR_Box recompilation__Var_36 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 0));

    switch (recompilation__HeadVar__2_2) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 7:
        recompilation__HeadVar__3_3 = recompilation__Var_29;
        break;
      case (MR_Integer) 6:
        recompilation__HeadVar__3_3 = recompilation__Var_30;
        break;
    }
    return recompilation__HeadVar__3_3;
  }
}

void MR_CALL 
recompilation__update_simple_item_set_4_p_0(
  MR_Word recompilation__TypeInfo_for_Simple_80,
  MR_Word recompilation__TypeInfo_for_PorF_81,
  MR_Word recompilation__TypeInfo_for_Cons_82,
  MR_Word recompilation__HeadVar__1_1,
  MR_Box recompilation__IdMap_2,
  MR_Word recompilation__STATE_VARIABLE_ItemIdSet_0_3,
  MR_Word * recompilation__STATE_VARIABLE_ItemIdSet_4)
{
  {
    MR_bool recompilation__succeeded;
    MR_Box recompilation__Var_83 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 9));
    MR_Box recompilation__Var_84 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 8));
    MR_Box recompilation__Var_85 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 7));
    MR_Box recompilation__Var_86 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 6));
    MR_Box recompilation__Var_87 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 5));
    MR_Box recompilation__Var_88 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 4));
    MR_Box recompilation__Var_89 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 3));
    MR_Box recompilation__Var_90 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 2));
    MR_Box recompilation__Var_91 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 1));
    MR_Box recompilation__Var_92 = (MR_hl_field(MR_mktag(0), recompilation__STATE_VARIABLE_ItemIdSet_0_3, (MR_Integer) 0));

    switch (recompilation__HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
          *recompilation__STATE_VARIABLE_ItemIdSet_4 = base;
          MR_hl_field(MR_mktag(0), base, 0) = recompilation__Var_92;
          MR_hl_field(MR_mktag(0), base, 1) = recompilation__Var_91;
          MR_hl_field(MR_mktag(0), base, 2) = recompilation__Var_90;
          MR_hl_field(MR_mktag(0), base, 3) = recompilation__IdMap_2;
          MR_hl_field(MR_mktag(0), base, 4) = recompilation__Var_88;
          MR_hl_field(MR_mktag(0), base, 5) = recompilation__Var_87;
          MR_hl_field(MR_mktag(0), base, 6) = recompilation__Var_86;
          MR_hl_field(MR_mktag(0), base, 7) = recompilation__Var_85;
          MR_hl_field(MR_mktag(0), base, 8) = recompilation__Var_84;
          MR_hl_field(MR_mktag(0), base, 9) = recompilation__Var_83;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
          *recompilation__STATE_VARIABLE_ItemIdSet_4 = base;
          MR_hl_field(MR_mktag(0), base, 0) = recompilation__Var_92;
          MR_hl_field(MR_mktag(0), base, 1) = recompilation__Var_91;
          MR_hl_field(MR_mktag(0), base, 2) = recompilation__IdMap_2;
          MR_hl_field(MR_mktag(0), base, 3) = recompilation__Var_89;
          MR_hl_field(MR_mktag(0), base, 4) = recompilation__Var_88;
          MR_hl_field(MR_mktag(0), base, 5) = recompilation__Var_87;
          MR_hl_field(MR_mktag(0), base, 6) = recompilation__Var_86;
          MR_hl_field(MR_mktag(0), base, 7) = recompilation__Var_85;
          MR_hl_field(MR_mktag(0), base, 8) = recompilation__Var_84;
          MR_hl_field(MR_mktag(0), base, 9) = recompilation__Var_83;
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
          *recompilation__STATE_VARIABLE_ItemIdSet_4 = base;
          MR_hl_field(MR_mktag(0), base, 0) = recompilation__IdMap_2;
          MR_hl_field(MR_mktag(0), base, 1) = recompilation__Var_91;
          MR_hl_field(MR_mktag(0), base, 2) = recompilation__Var_90;
          MR_hl_field(MR_mktag(0), base, 3) = recompilation__Var_89;
          MR_hl_field(MR_mktag(0), base, 4) = recompilation__Var_88;
          MR_hl_field(MR_mktag(0), base, 5) = recompilation__Var_87;
          MR_hl_field(MR_mktag(0), base, 6) = recompilation__Var_86;
          MR_hl_field(MR_mktag(0), base, 7) = recompilation__Var_85;
          MR_hl_field(MR_mktag(0), base, 8) = recompilation__Var_84;
          MR_hl_field(MR_mktag(0), base, 9) = recompilation__Var_83;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
          *recompilation__STATE_VARIABLE_ItemIdSet_4 = base;
          MR_hl_field(MR_mktag(0), base, 0) = recompilation__Var_92;
          MR_hl_field(MR_mktag(0), base, 1) = recompilation__IdMap_2;
          MR_hl_field(MR_mktag(0), base, 2) = recompilation__Var_90;
          MR_hl_field(MR_mktag(0), base, 3) = recompilation__Var_89;
          MR_hl_field(MR_mktag(0), base, 4) = recompilation__Var_88;
          MR_hl_field(MR_mktag(0), base, 5) = recompilation__Var_87;
          MR_hl_field(MR_mktag(0), base, 6) = recompilation__Var_86;
          MR_hl_field(MR_mktag(0), base, 7) = recompilation__Var_85;
          MR_hl_field(MR_mktag(0), base, 8) = recompilation__Var_84;
          MR_hl_field(MR_mktag(0), base, 9) = recompilation__Var_83;
        }
        break;
      case (MR_Integer) 4:
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
          *recompilation__STATE_VARIABLE_ItemIdSet_4 = base;
          MR_hl_field(MR_mktag(0), base, 0) = recompilation__Var_92;
          MR_hl_field(MR_mktag(0), base, 1) = recompilation__Var_91;
          MR_hl_field(MR_mktag(0), base, 2) = recompilation__Var_90;
          MR_hl_field(MR_mktag(0), base, 3) = recompilation__Var_89;
          MR_hl_field(MR_mktag(0), base, 4) = recompilation__IdMap_2;
          MR_hl_field(MR_mktag(0), base, 5) = recompilation__Var_87;
          MR_hl_field(MR_mktag(0), base, 6) = recompilation__Var_86;
          MR_hl_field(MR_mktag(0), base, 7) = recompilation__Var_85;
          MR_hl_field(MR_mktag(0), base, 8) = recompilation__Var_84;
          MR_hl_field(MR_mktag(0), base, 9) = recompilation__Var_83;
        }
        break;
    }
  }
}

MR_Box MR_CALL 
recompilation__extract_simple_item_set_2_f_0(
  MR_Word recompilation__TypeInfo_for_Simple_54,
  MR_Word recompilation__TypeInfo_for_PorF_55,
  MR_Word recompilation__TypeInfo_for_Cons_56,
  MR_Word recompilation__ItemIdSet_1,
  MR_Word recompilation__HeadVar__2_2)
{
  {
    MR_bool recompilation__succeeded;
    MR_Box recompilation__HeadVar__3_3;
    MR_Box recompilation__Var_62 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 4));
    MR_Box recompilation__Var_63 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 3));
    MR_Box recompilation__Var_64 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 2));
    MR_Box recompilation__Var_65 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 1));
    MR_Box recompilation__Var_66 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 0));
    MR_Box recompilation__Var_57 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 9));
    MR_Box recompilation__Var_58 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 8));
    MR_Box recompilation__Var_59 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 7));
    MR_Box recompilation__Var_60 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 6));
    MR_Box recompilation__Var_61 = (MR_hl_field(MR_mktag(0), recompilation__ItemIdSet_1, (MR_Integer) 5));

    switch (recompilation__HeadVar__2_2) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
        recompilation__HeadVar__3_3 = recompilation__Var_63;
        break;
      case (MR_Integer) 2:
        recompilation__HeadVar__3_3 = recompilation__Var_64;
        break;
      case (MR_Integer) 0:
        recompilation__HeadVar__3_3 = recompilation__Var_66;
        break;
      case (MR_Integer) 1:
        recompilation__HeadVar__3_3 = recompilation__Var_65;
        break;
      case (MR_Integer) 4:
        recompilation__HeadVar__3_3 = recompilation__Var_62;
        break;
    }
    return recompilation__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
recompilation__init_used_items_0_f_0(void)
{
  {
    MR_bool recompilation__succeeded;
    MR_Word recompilation__HeadVar__1_1;
    MR_Word recompilation__TypeInfo_12_12 = (MR_Word) &recompilation_scalar_common_2[0];
    MR_Word recompilation__TypeInfo_13_13 = (MR_Word) &recompilation_scalar_common_2[1];
    MR_Word recompilation__Var_2;
    MR_Word recompilation__Var_3;
    MR_Word recompilation__Var_4;
    MR_Word recompilation__Var_5;
    MR_Word recompilation__Var_6;
    MR_Word recompilation__Var_7;
    MR_Word recompilation__Var_8;
    MR_Word recompilation__Var_9;
    MR_Word recompilation__Var_10;
    MR_Word recompilation__Var_11;

    {
      recompilation__Var_2 = mercury__map__init_0_f_0(recompilation__TypeInfo_12_12, recompilation__TypeInfo_13_13);
    }
    {
      recompilation__Var_3 = mercury__map__init_0_f_0(recompilation__TypeInfo_12_12, recompilation__TypeInfo_13_13);
    }
    {
      recompilation__Var_4 = mercury__map__init_0_f_0(recompilation__TypeInfo_12_12, recompilation__TypeInfo_13_13);
    }
    {
      recompilation__Var_5 = mercury__map__init_0_f_0(recompilation__TypeInfo_12_12, recompilation__TypeInfo_13_13);
    }
    {
      recompilation__Var_6 = mercury__map__init_0_f_0(recompilation__TypeInfo_12_12, recompilation__TypeInfo_13_13);
    }
    {
      recompilation__Var_7 = mercury__map__init_0_f_0(recompilation__TypeInfo_12_12, recompilation__TypeInfo_13_13);
    }
    {
      recompilation__Var_8 = mercury__map__init_0_f_0(recompilation__TypeInfo_12_12, recompilation__TypeInfo_13_13);
    }
    {
      recompilation__Var_9 = mercury__map__init_0_f_0(recompilation__TypeInfo_12_12, recompilation__TypeInfo_13_13);
    }
    {
      recompilation__Var_10 = mercury__map__init_0_f_0(recompilation__TypeInfo_12_12, recompilation__TypeInfo_13_13);
    }
    {
      recompilation__Var_11 = mercury__map__init_0_f_0(recompilation__TypeInfo_12_12, recompilation__TypeInfo_13_13);
    }
    {
      recompilation__HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, 0) = ((MR_Box) (recompilation__Var_2));
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, 1) = ((MR_Box) (recompilation__Var_3));
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, 2) = ((MR_Box) (recompilation__Var_4));
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, 3) = ((MR_Box) (recompilation__Var_5));
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, 4) = ((MR_Box) (recompilation__Var_6));
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, 5) = ((MR_Box) (recompilation__Var_7));
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, 6) = ((MR_Box) (recompilation__Var_8));
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, 7) = ((MR_Box) (recompilation__Var_9));
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, 8) = ((MR_Box) (recompilation__Var_10));
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, 9) = ((MR_Box) (recompilation__Var_11));
    }
    return recompilation__HeadVar__1_1;
  }
}

MR_Word MR_CALL 
recompilation__init_item_id_set_3_f_0(
  MR_Word recompilation__TypeInfo_for_Simple_15,
  MR_Word recompilation__TypeInfo_for_PorF_16,
  MR_Word recompilation__TypeInfo_for_Cons_17,
  MR_Box recompilation__Simple_5,
  MR_Box recompilation__PorF_6,
  MR_Box recompilation__Cons_7)
{
  {
    MR_bool recompilation__succeeded;
    MR_Word recompilation__HeadVar__4_4;

    {
      recompilation__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 0) = recompilation__Simple_5;
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 1) = recompilation__Simple_5;
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 2) = recompilation__Simple_5;
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 3) = recompilation__Simple_5;
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 4) = recompilation__Simple_5;
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 5) = recompilation__Cons_7;
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 6) = recompilation__PorF_6;
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 7) = recompilation__PorF_6;
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 8) = recompilation__PorF_6;
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__4_4, 9) = recompilation__PorF_6;
    }
    return recompilation__HeadVar__4_4;
  }
}

MR_Word MR_CALL 
recompilation__init_item_id_set_1_f_0(
  MR_Word recompilation__TypeInfo_for_T_13,
  MR_Box recompilation__Init_3)
{
  {
    MR_bool recompilation__succeeded;
    MR_Word recompilation__HeadVar__2_2;

    {
      recompilation__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 0) = recompilation__Init_3;
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 1) = recompilation__Init_3;
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 2) = recompilation__Init_3;
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 3) = recompilation__Init_3;
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 4) = recompilation__Init_3;
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 5) = recompilation__Init_3;
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 6) = recompilation__Init_3;
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 7) = recompilation__Init_3;
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 8) = recompilation__Init_3;
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 9) = recompilation__Init_3;
    }
    return recompilation__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
recompilation__init_recompilation_info_1_f_0(
  MR_Word recompilation__ModuleName_3)
{
  {
    MR_bool recompilation__succeeded;
    MR_Word recompilation__HeadVar__2_2;
    MR_Word recompilation__Var_4;
    MR_Word recompilation__Var_5;
    MR_Word recompilation__Var_6;

    {
      recompilation__Var_4 = recompilation__init_used_items_0_f_0();
    }
    {
      recompilation__Var_5 = mercury__map__init_0_f_0((MR_Word) &recompilation__recompilation__type_ctor_info_item_id_0, (MR_Word) &recompilation_scalar_common_1[0]);
    }
    {
      recompilation__Var_6 = mercury__map__init_0_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &recompilation__recompilation__type_ctor_info_version_numbers_0);
    }
    {
      recompilation__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 0) = ((MR_Box) (recompilation__ModuleName_3));
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 1) = ((MR_Box) (recompilation__Var_4));
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 2) = ((MR_Box) (recompilation__Var_5));
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 3) = ((MR_Box) (recompilation__Var_6));
    }
    return recompilation__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
recompilation__item_name_to_mode_id_1_f_0(
  MR_Word recompilation__HeadVar__1_1)
{
  {
    MR_bool recompilation__succeeded;
    MR_Word recompilation__HeadVar__2_2;
    MR_Word recompilation__SymName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 0)));
    MR_Integer recompilation__Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 1)));

    {
      recompilation__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 0) = ((MR_Box) (recompilation__SymName_3));
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 1) = ((MR_Box) (recompilation__Arity_4));
    }
    return recompilation__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
recompilation__item_name_to_inst_id_1_f_0(
  MR_Word recompilation__HeadVar__1_1)
{
  {
    MR_bool recompilation__succeeded;
    MR_Word recompilation__HeadVar__2_2;
    MR_Word recompilation__SymName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 0)));
    MR_Integer recompilation__Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 1)));

    {
      recompilation__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 0) = ((MR_Box) (recompilation__SymName_3));
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 1) = ((MR_Box) (recompilation__Arity_4));
    }
    return recompilation__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
recompilation__item_name_to_type_ctor_1_f_0(
  MR_Word recompilation__HeadVar__1_1)
{
  {
    MR_bool recompilation__succeeded;
    MR_Word recompilation__HeadVar__2_2;
    MR_Word recompilation__SymName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 0)));
    MR_Integer recompilation__Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 1)));

    {
      recompilation__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 0) = ((MR_Box) (recompilation__SymName_3));
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 1) = ((MR_Box) (recompilation__Arity_4));
    }
    return recompilation__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
recompilation__mode_id_to_item_name_1_f_0(
  MR_Word recompilation__HeadVar__1_1)
{
  {
    MR_bool recompilation__succeeded;
    MR_Word recompilation__HeadVar__2_2;
    MR_Word recompilation__SymName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 0)));
    MR_Integer recompilation__Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 1)));

    {
      recompilation__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 0) = ((MR_Box) (recompilation__SymName_3));
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 1) = ((MR_Box) (recompilation__Arity_4));
    }
    return recompilation__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
recompilation__inst_id_to_item_name_1_f_0(
  MR_Word recompilation__HeadVar__1_1)
{
  {
    MR_bool recompilation__succeeded;
    MR_Word recompilation__HeadVar__2_2;
    MR_Word recompilation__SymName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 0)));
    MR_Integer recompilation__Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 1)));

    {
      recompilation__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 0) = ((MR_Box) (recompilation__SymName_3));
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 1) = ((MR_Box) (recompilation__Arity_4));
    }
    return recompilation__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
recompilation__type_ctor_to_item_name_1_f_0(
  MR_Word recompilation__HeadVar__1_1)
{
  {
    MR_bool recompilation__succeeded;
    MR_Word recompilation__HeadVar__2_2;
    MR_Word recompilation__SymName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 0)));
    MR_Integer recompilation__Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 1)));

    {
      recompilation__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 0) = ((MR_Box) (recompilation__SymName_3));
      MR_hl_field(MR_mktag(0), recompilation__HeadVar__2_2, 1) = ((MR_Box) (recompilation__Arity_4));
    }
    return recompilation__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
recompilation__pred_or_func_to_item_type_1_f_0(
  MR_Word recompilation__HeadVar__1_1)
{
  {
    MR_bool recompilation__succeeded;
    MR_Word recompilation__HeadVar__2_2;

    switch (recompilation__HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        recompilation__HeadVar__2_2 = (MR_Integer) 7;
        break;
      case (MR_Integer) 0:
        recompilation__HeadVar__2_2 = (MR_Integer) 6;
        break;
    }
    return recompilation__HeadVar__2_2;
  }
}

void MR_CALL 
recompilation__string_to_item_type_2_p_1(
  MR_String * recompilation__HeadVar__1_1,
  MR_Word recompilation__HeadVar__2_2)
{
  {
    MR_bool recompilation__succeeded;

    *recompilation__HeadVar__1_1 = ((&recompilation_vector_common_5[0 + recompilation__HeadVar__2_2]))->recompilation__vector_common_type_5_0__vct_5_f_0;
  }
}

MR_bool MR_CALL 
recompilation__string_to_item_type_2_p_0(
  MR_String recompilation__HeadVar__1_1,
  MR_Word * recompilation__HeadVar__2_2)
{
  {
    MR_bool recompilation__succeeded;
    MR_Integer recompilation__slot_0;
    MR_String recompilation__str_1;

    /* hashed string simple lookup switch */
    /* compute the hash value of the input string */
    recompilation__slot_0 = ((MR_hash_string5(recompilation__HeadVar__1_1)) & (MR_Integer) 31);
    /* no collisions; no hash chain loop */
    /* lookup the string for this hash slot */
    recompilation__str_1 = ((&recompilation_vector_common_4[0 + recompilation__slot_0]))->recompilation__vector_common_type_4_0__vct_4_f_0;
    /* did we find a match? */
    if ((((recompilation__str_1 != NULL)) && ((strcmp(recompilation__str_1, recompilation__HeadVar__1_1) == 0))))
      {
        /* we found a match; look up the results */
        *recompilation__HeadVar__2_2 = ((&recompilation_vector_common_4[0 + recompilation__slot_0]))->recompilation__vector_common_type_4_0__vct_4_f_1;
        recompilation__succeeded = MR_TRUE;
        /* jump out of search loop */
        goto label_0;
      }
    recompilation__succeeded = MR_FALSE;
  label_0:;
    return recompilation__succeeded;
  }
}

MR_bool MR_CALL 
recompilation__is_pred_or_func_item_type_1_p_0(
  MR_Word recompilation__HeadVar__1_1)
{
  {
    MR_bool recompilation__succeeded;

    switch (recompilation__HeadVar__1_1) {
      default:
        recompilation__succeeded = MR_FALSE;
        break;
      case (MR_Integer) 7:
        recompilation__succeeded = MR_TRUE;
        break;
      case (MR_Integer) 6:
        recompilation__succeeded = MR_TRUE;
        break;
    }
    return recompilation__succeeded;
  }
}

MR_bool MR_CALL 
recompilation__is_simple_item_type_1_p_0(
  MR_Word recompilation__HeadVar__1_1)
{
  {
    MR_bool recompilation__succeeded;

    if (((MR_Integer) 31 & (((MR_Integer) 1 << recompilation__HeadVar__1_1))))
      {
        recompilation__succeeded = MR_TRUE;
      }
    else
      recompilation__succeeded = MR_FALSE;
    return recompilation__succeeded;
  }
}

MR_bool MR_CALL 
recompilation__term_to_timestamp_1_f_0(
  MR_Word recompilation__TypeInfo_for_T_7,
  MR_Word recompilation__HeadVar__1_1,
  MR_Word * recompilation__HeadVar__2_2)
{
  {
    MR_bool recompilation__succeeded = ((MR_tag((MR_Word) recompilation__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0)));
    MR_String recompilation__TimestampString_3;
    MR_Word recompilation__Var_5;
    MR_Word recompilation__Var_6;
    MR_Word recompilation__Var_4;

    if (recompilation__succeeded)
      {
        recompilation__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 0)));
        recompilation__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 1)));
        recompilation__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__HeadVar__1_1, (MR_Integer) 2)));
        recompilation__succeeded = ((MR_tag((MR_Word) recompilation__Var_5)) == (MR_mktag((MR_Integer) 2)));
        if (recompilation__succeeded)
          {
            recompilation__TimestampString_3 = ((MR_String) (MR_hl_field(MR_mktag(2), recompilation__Var_5, (MR_Integer) 0)));
            recompilation__succeeded = (recompilation__Var_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (recompilation__succeeded)
              {
                recompilation__succeeded = libs__timestamp__string_to_timestamp_1_f_0(recompilation__TimestampString_3, recompilation__HeadVar__2_2);
              }
          }
      }
    return recompilation__succeeded;
  }
}

MR_bool MR_CALL 
recompilation__term_to_version_number_1_f_0(
  MR_Word recompilation__TypeInfo_for_T_4,
  MR_Word recompilation__Term_3,
  MR_Word * recompilation__HeadVar__2_2)
{
  {
    MR_bool recompilation__succeeded = ((MR_tag((MR_Word) recompilation__Term_3)) == (MR_mktag((MR_Integer) 0)));
    MR_String recompilation__TimestampString_5;
    MR_Word recompilation__Var_7;
    MR_Word recompilation__Var_8;
    MR_Word recompilation__Var_6;

    if (recompilation__succeeded)
      {
        recompilation__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__Term_3, (MR_Integer) 0)));
        recompilation__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__Term_3, (MR_Integer) 1)));
        recompilation__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recompilation__Term_3, (MR_Integer) 2)));
        recompilation__succeeded = ((MR_tag((MR_Word) recompilation__Var_7)) == (MR_mktag((MR_Integer) 2)));
        if (recompilation__succeeded)
          {
            recompilation__TimestampString_5 = ((MR_String) (MR_hl_field(MR_mktag(2), recompilation__Var_7, (MR_Integer) 0)));
            recompilation__succeeded = (recompilation__Var_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (recompilation__succeeded)
              {
                recompilation__succeeded = libs__timestamp__string_to_timestamp_1_f_0(recompilation__TimestampString_5, recompilation__HeadVar__2_2);
              }
          }
      }
    return recompilation__succeeded;
  }
}

void MR_CALL 
recompilation__write_version_number_3_p_0(
  MR_Word recompilation__VersionNumber_4)
{
  {
    MR_bool recompilation__succeeded;
    MR_String recompilation__Var_10;

    {
      mercury__io__write_string_3_p_0((MR_String) "\"");
    }
    {
      recompilation__Var_10 = libs__timestamp__timestamp_to_string_1_f_0(recompilation__VersionNumber_4);
    }
    {
      mercury__io__write_string_3_p_0(recompilation__Var_10);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\"");
    }
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

/* :- end_module recompilation. */
