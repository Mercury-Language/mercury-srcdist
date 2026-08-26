/*
** Automatically generated from `module_qual.id_set.m'
** by the Mercury compiler,
** version rotd-2026-08-26
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


// :- module parse_tree.module_qual.id_set.
// :- implementation.

/*
INIT mercury__parse_tree__module_qual__id_set__init
ENDINIT
*/

#include "parse_tree.module_qual.id_set.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "recompilation.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"
#include "varset.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.find_module.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_item_pragma.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.item_types.mih"
#include "recompilation.record_uses.mih"
#include "parse_tree.module_qual.mq_info.mih"
#include "parse_tree.module_qual.qual_errors.mih"




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_qual__id_set__list__pti_list_1__plain_parse_tree__module_qual__id_set__type_ctor_info_module_match_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_qual__id_set__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__module_qual__id_set__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__module_qual__id_set__tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__module_qual__id_set__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0;

static const MR_EnumFunctorDesc parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__enum_functor_desc_maybe_warn_if_matching_0_0;

static const MR_EnumFunctorDesc parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__enum_functor_desc_maybe_warn_if_matching_0_1;

static const MR_EnumFunctorDescPtr parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__enum_ordinal_ordered_maybe_warn_if_matching_0[2];

static const MR_EnumFunctorDescPtr parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__enum_name_ordered_maybe_warn_if_matching_0[2];

static const MR_Integer parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__functor_number_map_maybe_warn_if_matching_0[2];

static const MR_PseudoTypeInfo parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__field_types_module_match_type_0_0[1];

static const MR_DuFunctorDesc parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_functor_desc_module_match_type_0_0;

static const MR_PseudoTypeInfo parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__field_types_module_match_type_0_1[1];

static const MR_DuFunctorDesc parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_functor_desc_module_match_type_0_1;

static const MR_DuFunctorDescPtr parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_stag_ordered_module_match_type_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_stag_ordered_module_match_type_0_1[1];

static const MR_DuPtagLayout parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_ptag_ordered_module_match_type_0[2];

static const MR_DuFunctorDescPtr parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_name_ordered_module_match_type_0[2];

static const MR_Integer parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__functor_number_map_module_match_type_0[2];

static const MR_PseudoTypeInfo parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__field_types_module_permissions_0_0[2];

static const MR_ConstString parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__field_names_module_permissions_0_0[2];

static const MR_DuFunctorDesc parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_functor_desc_module_permissions_0_0;

static const MR_DuFunctorDescPtr parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_stag_ordered_module_permissions_0_0[1];

static const MR_DuPtagLayout parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_ptag_ordered_module_permissions_0[1];

static const MR_DuFunctorDescPtr parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_name_ordered_module_permissions_0[1];

static const MR_Integer parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__functor_number_map_module_permissions_0[1];

static const MR_PseudoTypeInfo parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__field_types_mq_id_0_0[2];

static const MR_DuFunctorDesc parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_functor_desc_mq_id_0_0;

static const MR_DuFunctorDescPtr parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_stag_ordered_mq_id_0_0[1];

static const MR_DuPtagLayout parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_ptag_ordered_mq_id_0[1];

static const MR_DuFunctorDescPtr parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_name_ordered_mq_id_0[1];

static const MR_Integer parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__functor_number_map_mq_id_0[1];

static const MR_EnumFunctorDesc parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__enum_functor_desc_mq_in_interface_0_0;

static const MR_EnumFunctorDesc parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__enum_functor_desc_mq_in_interface_0_1;

static const MR_EnumFunctorDescPtr parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__enum_ordinal_ordered_mq_in_interface_0[2];

static const MR_EnumFunctorDescPtr parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__enum_name_ordered_mq_in_interface_0[2];

static const MR_Integer parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__functor_number_map_mq_in_interface_0[2];

static const MR_Integer parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__functor_number_map_perm_in_imp_0[1];

static const MR_NotagFunctorDesc parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__notag_functor_desc_perm_in_imp_0;

static const MR_DuFunctorDesc parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_functor_desc_perm_in_int_0_0;

static const MR_PseudoTypeInfo parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__field_types_perm_in_int_0_1[1];

static const MR_DuArgLocn parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__field_locns_perm_in_int_0_1[1];

static const MR_DuFunctorDesc parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_functor_desc_perm_in_int_0_1;

static const MR_PseudoTypeInfo parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__field_types_perm_in_int_0_2[1];

static const MR_DuArgLocn parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__field_locns_perm_in_int_0_2[1];

static const MR_DuFunctorDesc parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_functor_desc_perm_in_int_0_2;

static const MR_DuFunctorDescPtr parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_stag_ordered_perm_in_int_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_stag_ordered_perm_in_int_0_1[1];

static const MR_DuFunctorDescPtr parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_stag_ordered_perm_in_int_0_2[1];

static const MR_DuPtagLayout parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_ptag_ordered_perm_in_int_0[3];

static const MR_DuFunctorDescPtr parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_name_ordered_perm_in_int_0[3];

static const MR_Integer parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__functor_number_map_perm_in_int_0[3];

static const MR_EnumFunctorDesc parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__enum_functor_desc_qual_id_kind_0_0;

static const MR_EnumFunctorDesc parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__enum_functor_desc_qual_id_kind_0_1;

static const MR_EnumFunctorDesc parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__enum_functor_desc_qual_id_kind_0_2;

static const MR_EnumFunctorDesc parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__enum_functor_desc_qual_id_kind_0_3;

static const MR_EnumFunctorDescPtr parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__enum_ordinal_ordered_qual_id_kind_0[4];

static const MR_EnumFunctorDescPtr parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__enum_name_ordered_qual_id_kind_0[4];

static const MR_Integer parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__functor_number_map_qual_id_kind_0[4];

static void MR_CALL 
parse_tree__module_qual__id_set____Compare____permissions_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____permissions_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__module_qual__id_set____Compare____module_match_type_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____module_match_type_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__module_qual__id_set____Compare____maybe_warn_if_matching_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____maybe_warn_if_matching_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__module_qual__id_set__add_matching_and_nearmiss_modules_10_p_0(
  MR_Word InInt_11,
  MR_Word SymName_12,
  MR_Word ModuleName_13,
  MR_Word Permissions_14,
  MR_Word STATE_VARIABLE_Matches_0_24,
  MR_Word * STATE_VARIABLE_Matches_25,
  MR_Word STATE_VARIABLE_IntMismatches_0_26,
  MR_Word * STATE_VARIABLE_IntMismatches_27,
  MR_Word STATE_VARIABLE_QualMismatches_0_28,
  MR_Word * STATE_VARIABLE_QualMismatches_29);

static MR_Word MR_CALL 
parse_tree__module_qual__id_set__matched_module_name_1_f_0(
  MR_Word HeadVar__1_1);

static MR_String MR_CALL 
parse_tree__module_qual__id_set__get_first_module_name_1_f_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
parse_tree__module_qual__id_set__find_unique_match_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
parse_tree__module_qual__id_set__find_unique_match_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__module_qual__id_set__find_unique_match_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__module_qual__id_set__find_unique_match_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
parse_tree__module_qual__id_set__find_matching_arities_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
parse_tree__module_qual__id_set__find_matching_arities_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_PossibleArities_0_3,
  MR_Word * STATE_VARIABLE_PossibleArities_4);

static void MR_CALL 
parse_tree__module_qual__id_set__mq_info_record_undef_mq_id_5_p_0(
  MR_Word IdType_6,
  MR_Word Id_7,
  MR_Word Spec_8,
  MR_Word STATE_VARIABLE_Info_0_27,
  MR_Word * STATE_VARIABLE_Info_28);

static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____class_id_set_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__module_qual__id_set____Compare____class_id_set_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____id_set_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__module_qual__id_set____Compare____id_set_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____inst_id_set_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__module_qual__id_set____Compare____inst_id_set_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____maybe_warn_if_matching_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__module_qual__id_set____Compare____maybe_warn_if_matching_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____mode_id_set_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__module_qual__id_set____Compare____mode_id_set_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____module_id_set_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__module_qual__id_set____Compare____module_id_set_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____module_match_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__module_qual__id_set____Compare____module_match_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____module_permissions_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__module_qual__id_set____Compare____module_permissions_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____mq_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__module_qual__id_set____Compare____mq_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____mq_in_interface_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__module_qual__id_set____Compare____mq_in_interface_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____perm_in_imp_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__module_qual__id_set____Compare____perm_in_imp_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____perm_in_int_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__module_qual__id_set____Compare____perm_in_int_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____permissions_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__module_qual__id_set____Compare____permissions_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____qual_id_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__module_qual__id_set____Compare____qual_id_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____type_id_set_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__module_qual__id_set____Compare____type_id_set_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__module_qual__id_set_scalar_common_1[4][3];

static /* final */ const MR_Box parse_tree__module_qual__id_set_scalar_common_2[2][2];

static /* final */ const MR_Box parse_tree__module_qual__id_set_scalar_common_3[1][13];

static /* final */ const MR_Box parse_tree__module_qual__id_set_scalar_common_4[1][7];

static /* final */ const MR_Box parse_tree__module_qual__id_set_scalar_common_5[1][5];

static /* final */ const MR_Box parse_tree__module_qual__id_set_scalar_common_7[1][8];


struct parse_tree__module_qual__id_set__vector_common_type_6_0_s {
  const MR_Word parse_tree__module_qual__id_set__vector_common_type_6_0__vct_6_f_0;
};

static /* final */ const struct parse_tree__module_qual__id_set__vector_common_type_6_0_s parse_tree__module_qual__id_set_vector_common_6[4];



static /* final */ const MR_Box parse_tree__module_qual__id_set_scalar_common_1[4][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__module_qual__id_set_scalar_common_1[0]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__module_qual__id_set_scalar_common_1[1]))
  },
  /* row   3 */
  {
    ((MR_Box) (&parse_tree__module_qual__id_set_scalar_common_5[0])),
    ((MR_Box) (parse_tree__module_qual__id_set__find_unique_match_8_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__module_qual__id_set_scalar_common_2[2][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_match_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};

static /* final */ const MR_Box parse_tree__module_qual__id_set_scalar_common_3[1][13] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_in_interface_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0)),
    ((MR_Box) (&parse_tree__module_qual__id_set__list__pti_list_1__plain_parse_tree__module_qual__id_set__type_ctor_info_module_match_type_0)),
    ((MR_Box) (&parse_tree__module_qual__id_set__list__pti_list_1__plain_parse_tree__module_qual__id_set__type_ctor_info_module_match_type_0)),
    ((MR_Box) (&parse_tree__module_qual__id_set__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_qual__id_set__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_qual__id_set__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_qual__id_set__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};

static /* final */ const MR_Box parse_tree__module_qual__id_set_scalar_common_4[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_in_interface_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0))
  },
};

static /* final */ const MR_Box parse_tree__module_qual__id_set_scalar_common_5[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_match_type_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};

static /* final */ const MR_Box parse_tree__module_qual__id_set_scalar_common_7[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_used_item_type_0)),
    ((MR_Box) (&recompilation__item_types__recompilation__item_types__type_ctor_info_recomp_item_name_0)),
    ((MR_Box) (&recompilation__item_types__recompilation__item_types__type_ctor_info_recomp_item_name_0)),
    ((MR_Box) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_recompilation_info_0)),
    ((MR_Box) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_recompilation_info_0))
  },
};


static /* final */ const struct parse_tree__module_qual__id_set__vector_common_type_6_0_s parse_tree__module_qual__id_set_vector_common_6[4] = {
  /* row   0 */   { (MR_Integer) 0 },
  /* row   1 */   { (MR_Integer) 2 },
  /* row   2 */   { (MR_Integer) 3 },
  /* row   3 */   { (MR_Integer) 4 },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_qual__id_set__list__pti_list_1__plain_parse_tree__module_qual__id_set__type_ctor_info_module_match_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_match_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_qual__id_set__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__module_qual__id_set__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0)
  }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__module_qual__id_set__tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_TypeInfo) (&parse_tree__module_qual__id_set__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0)
  }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__module_qual__id_set__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_TypeInfo) (&parse_tree__module_qual__id_set__tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_class_id_set_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__module_qual__id_set____Unify____class_id_set_0_0_10001)),
  ((MR_Box) (parse_tree__module_qual__id_set____Compare____class_id_set_0_0_10001)),
  (MR_String) "parse_tree.module_qual.id_set",
  (MR_String) "class_id_set",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__module_qual__id_set__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_id_set_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__module_qual__id_set____Unify____id_set_0_0_10001)),
  ((MR_Box) (parse_tree__module_qual__id_set____Compare____id_set_0_0_10001)),
  (MR_String) "parse_tree.module_qual.id_set",
  (MR_String) "id_set",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__module_qual__id_set__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_inst_id_set_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__module_qual__id_set____Unify____inst_id_set_0_0_10001)),
  ((MR_Box) (parse_tree__module_qual__id_set____Compare____inst_id_set_0_0_10001)),
  (MR_String) "parse_tree.module_qual.id_set",
  (MR_String) "inst_id_set",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__module_qual__id_set__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_EnumFunctorDesc parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__enum_functor_desc_maybe_warn_if_matching_0_0 = {
  (MR_String) "do_not_warn",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__enum_functor_desc_maybe_warn_if_matching_0_1 = {
  (MR_String) "warn_if_matching",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__enum_ordinal_ordered_maybe_warn_if_matching_0[2] = {
  &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__enum_functor_desc_maybe_warn_if_matching_0_0,
  &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__enum_functor_desc_maybe_warn_if_matching_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__enum_name_ordered_maybe_warn_if_matching_0[2] = {
  &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__enum_functor_desc_maybe_warn_if_matching_0_0,
  &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__enum_functor_desc_maybe_warn_if_matching_0_1
};

static const MR_Integer parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__functor_number_map_maybe_warn_if_matching_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_maybe_warn_if_matching_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__module_qual__id_set____Unify____maybe_warn_if_matching_0_0_10001)),
  ((MR_Box) (parse_tree__module_qual__id_set____Compare____maybe_warn_if_matching_0_0_10001)),
  (MR_String) "parse_tree.module_qual.id_set",
  (MR_String) "maybe_warn_if_matching",
  { parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__enum_name_ordered_maybe_warn_if_matching_0 },
  { parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__enum_ordinal_ordered_maybe_warn_if_matching_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__functor_number_map_maybe_warn_if_matching_0,

};

const MR_TypeCtorInfo_Struct parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mode_id_set_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__module_qual__id_set____Unify____mode_id_set_0_0_10001)),
  ((MR_Box) (parse_tree__module_qual__id_set____Compare____mode_id_set_0_0_10001)),
  (MR_String) "parse_tree.module_qual.id_set",
  (MR_String) "mode_id_set",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__module_qual__id_set__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_id_set_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__module_qual__id_set____Unify____module_id_set_0_0_10001)),
  ((MR_Box) (parse_tree__module_qual__id_set____Compare____module_id_set_0_0_10001)),
  (MR_String) "parse_tree.module_qual.id_set",
  (MR_String) "module_id_set",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__module_qual__id_set__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__field_types_module_match_type_0_0[1] = { (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) };

static const MR_DuFunctorDesc parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_functor_desc_module_match_type_0_0 = {
  (MR_String) "match",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__field_types_module_match_type_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__field_types_module_match_type_0_1[1] = { (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) };

static const MR_DuFunctorDesc parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_functor_desc_module_match_type_0_1 = {
  (MR_String) "match_with_warning",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__field_types_module_match_type_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_stag_ordered_module_match_type_0_0[1] = { &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_functor_desc_module_match_type_0_0 };

static const MR_DuFunctorDescPtr parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_stag_ordered_module_match_type_0_1[1] = { &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_functor_desc_module_match_type_0_1 };

static const MR_DuPtagLayout parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_ptag_ordered_module_match_type_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_stag_ordered_module_match_type_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_stag_ordered_module_match_type_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_name_ordered_module_match_type_0[2] = {
  &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_functor_desc_module_match_type_0_0,
  &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_functor_desc_module_match_type_0_1
};

static const MR_Integer parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__functor_number_map_module_match_type_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_match_type_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__module_qual__id_set____Unify____module_match_type_0_0_10001)),
  ((MR_Box) (parse_tree__module_qual__id_set____Compare____module_match_type_0_0_10001)),
  (MR_String) "parse_tree.module_qual.id_set",
  (MR_String) "module_match_type",
  { parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_name_ordered_module_match_type_0 },
  { parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_ptag_ordered_module_match_type_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__functor_number_map_module_match_type_0,

};

static const MR_PseudoTypeInfo parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__field_types_module_permissions_0_0[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_perm_in_int_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_perm_in_imp_0)
};

static const MR_ConstString parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__field_names_module_permissions_0_0[2] = {
  (MR_String) "mp_in_int",
  (MR_String) "mp_in_imp"
};

static const MR_DuFunctorDesc parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_functor_desc_module_permissions_0_0 = {
  (MR_String) "module_permissions",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__field_types_module_permissions_0_0,
  parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__field_names_module_permissions_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_stag_ordered_module_permissions_0_0[1] = { &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_functor_desc_module_permissions_0_0 };

static const MR_DuPtagLayout parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_ptag_ordered_module_permissions_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_stag_ordered_module_permissions_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_name_ordered_module_permissions_0[1] = { &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_functor_desc_module_permissions_0_0 };

static const MR_Integer parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__functor_number_map_module_permissions_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__module_qual__id_set____Unify____module_permissions_0_0_10001)),
  ((MR_Box) (parse_tree__module_qual__id_set____Compare____module_permissions_0_0_10001)),
  (MR_String) "parse_tree.module_qual.id_set",
  (MR_String) "module_permissions",
  { parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_name_ordered_module_permissions_0 },
  { parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_ptag_ordered_module_permissions_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__functor_number_map_module_permissions_0,

};

static const MR_PseudoTypeInfo parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__field_types_mq_id_0_0[2] = {
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_functor_desc_mq_id_0_0 = {
  (MR_String) "mq_id",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__field_types_mq_id_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_stag_ordered_mq_id_0_0[1] = { &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_functor_desc_mq_id_0_0 };

static const MR_DuPtagLayout parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_ptag_ordered_mq_id_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_stag_ordered_mq_id_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_name_ordered_mq_id_0[1] = { &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_functor_desc_mq_id_0_0 };

static const MR_Integer parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__functor_number_map_mq_id_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__module_qual__id_set____Unify____mq_id_0_0_10001)),
  ((MR_Box) (parse_tree__module_qual__id_set____Compare____mq_id_0_0_10001)),
  (MR_String) "parse_tree.module_qual.id_set",
  (MR_String) "mq_id",
  { parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_name_ordered_mq_id_0 },
  { parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_ptag_ordered_mq_id_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__functor_number_map_mq_id_0,

};

static const MR_EnumFunctorDesc parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__enum_functor_desc_mq_in_interface_0_0 = {
  (MR_String) "mq_not_used_in_interface",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__enum_functor_desc_mq_in_interface_0_1 = {
  (MR_String) "mq_used_in_interface",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__enum_ordinal_ordered_mq_in_interface_0[2] = {
  &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__enum_functor_desc_mq_in_interface_0_0,
  &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__enum_functor_desc_mq_in_interface_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__enum_name_ordered_mq_in_interface_0[2] = {
  &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__enum_functor_desc_mq_in_interface_0_0,
  &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__enum_functor_desc_mq_in_interface_0_1
};

static const MR_Integer parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__functor_number_map_mq_in_interface_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_in_interface_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__module_qual__id_set____Unify____mq_in_interface_0_0_10001)),
  ((MR_Box) (parse_tree__module_qual__id_set____Compare____mq_in_interface_0_0_10001)),
  (MR_String) "parse_tree.module_qual.id_set",
  (MR_String) "mq_in_interface",
  { parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__enum_name_ordered_mq_in_interface_0 },
  { parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__enum_ordinal_ordered_mq_in_interface_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__functor_number_map_mq_in_interface_0,

};

static const MR_Integer parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__functor_number_map_perm_in_imp_0[1] = { (MR_Integer) 0 };

static const MR_NotagFunctorDesc parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__notag_functor_desc_perm_in_imp_0 = {
  (MR_String) "may_use_in_imp",
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_need_qualifier_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_perm_in_imp_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (parse_tree__module_qual__id_set____Unify____perm_in_imp_0_0_10001)),
  ((MR_Box) (parse_tree__module_qual__id_set____Compare____perm_in_imp_0_0_10001)),
  (MR_String) "parse_tree.module_qual.id_set",
  (MR_String) "perm_in_imp",
  { &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__notag_functor_desc_perm_in_imp_0 },
  { &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__notag_functor_desc_perm_in_imp_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__functor_number_map_perm_in_imp_0,

};

static const MR_DuFunctorDesc parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_functor_desc_perm_in_int_0_0 = {
  (MR_String) "may_not_use_in_int",
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

static const MR_PseudoTypeInfo parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__field_types_perm_in_int_0_1[1] = { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_need_qualifier_0) };

static const MR_DuArgLocn parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__field_locns_perm_in_int_0_1[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_functor_desc_perm_in_int_0_1 = {
  (MR_String) "may_use_in_int",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__field_types_perm_in_int_0_1,
  NULL,
  parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__field_locns_perm_in_int_0_1,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__field_types_perm_in_int_0_2[1] = { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_need_qualifier_0) };

static const MR_DuArgLocn parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__field_locns_perm_in_int_0_2[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_functor_desc_perm_in_int_0_2 = {
  (MR_String) "may_use_in_int_warn",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__field_types_perm_in_int_0_2,
  NULL,
  parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__field_locns_perm_in_int_0_2,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_stag_ordered_perm_in_int_0_0[1] = { &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_functor_desc_perm_in_int_0_0 };

static const MR_DuFunctorDescPtr parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_stag_ordered_perm_in_int_0_1[1] = { &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_functor_desc_perm_in_int_0_1 };

static const MR_DuFunctorDescPtr parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_stag_ordered_perm_in_int_0_2[1] = { &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_functor_desc_perm_in_int_0_2 };

static const MR_DuPtagLayout parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_ptag_ordered_perm_in_int_0[3] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_stag_ordered_perm_in_int_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_stag_ordered_perm_in_int_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_stag_ordered_perm_in_int_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_name_ordered_perm_in_int_0[3] = {
  &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_functor_desc_perm_in_int_0_0,
  &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_functor_desc_perm_in_int_0_1,
  &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_functor_desc_perm_in_int_0_2
};

static const MR_Integer parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__functor_number_map_perm_in_int_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_perm_in_int_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__module_qual__id_set____Unify____perm_in_int_0_0_10001)),
  ((MR_Box) (parse_tree__module_qual__id_set____Compare____perm_in_int_0_0_10001)),
  (MR_String) "parse_tree.module_qual.id_set",
  (MR_String) "perm_in_int",
  { parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_name_ordered_perm_in_int_0 },
  { parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__du_ptag_ordered_perm_in_int_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__functor_number_map_perm_in_int_0,

};

const MR_TypeCtorInfo_Struct parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_permissions_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__module_qual__id_set____Unify____permissions_map_0_0_10001)),
  ((MR_Box) (parse_tree__module_qual__id_set____Compare____permissions_map_0_0_10001)),
  (MR_String) "parse_tree.module_qual.id_set",
  (MR_String) "permissions_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__module_qual__id_set__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_EnumFunctorDesc parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__enum_functor_desc_qual_id_kind_0_0 = {
  (MR_String) "qual_id_type",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__enum_functor_desc_qual_id_kind_0_1 = {
  (MR_String) "qual_id_inst",
  INT32_C(1)
};

static const MR_EnumFunctorDesc parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__enum_functor_desc_qual_id_kind_0_2 = {
  (MR_String) "qual_id_mode",
  INT32_C(2)
};

static const MR_EnumFunctorDesc parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__enum_functor_desc_qual_id_kind_0_3 = {
  (MR_String) "qual_id_class",
  INT32_C(3)
};

static const MR_EnumFunctorDescPtr parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__enum_ordinal_ordered_qual_id_kind_0[4] = {
  &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__enum_functor_desc_qual_id_kind_0_0,
  &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__enum_functor_desc_qual_id_kind_0_1,
  &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__enum_functor_desc_qual_id_kind_0_2,
  &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__enum_functor_desc_qual_id_kind_0_3
};

static const MR_EnumFunctorDescPtr parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__enum_name_ordered_qual_id_kind_0[4] = {
  &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__enum_functor_desc_qual_id_kind_0_3,
  &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__enum_functor_desc_qual_id_kind_0_1,
  &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__enum_functor_desc_qual_id_kind_0_2,
  &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__enum_functor_desc_qual_id_kind_0_0
};

static const MR_Integer parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__functor_number_map_qual_id_kind_0[4] = {
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_qual_id_kind_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__module_qual__id_set____Unify____qual_id_kind_0_0_10001)),
  ((MR_Box) (parse_tree__module_qual__id_set____Compare____qual_id_kind_0_0_10001)),
  (MR_String) "parse_tree.module_qual.id_set",
  (MR_String) "qual_id_kind",
  { parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__enum_name_ordered_qual_id_kind_0 },
  { parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__enum_ordinal_ordered_qual_id_kind_0 },
  (MR_Integer) 4,
  UINT16_C(12),
  parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__functor_number_map_qual_id_kind_0,

};

const MR_TypeCtorInfo_Struct parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_type_id_set_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__module_qual__id_set____Unify____type_id_set_0_0_10001)),
  ((MR_Box) (parse_tree__module_qual__id_set____Compare____type_id_set_0_0_10001)),
  (MR_String) "parse_tree.module_qual.id_set",
  (MR_String) "type_id_set",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__module_qual__id_set__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

void MR_CALL 
parse_tree__module_qual__id_set____Compare____type_id_set_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_qual__id_set_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____type_id_set_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__module_qual__id_set_scalar_common_1[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
parse_tree__module_qual__id_set____Compare____qual_id_kind_0_0(
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
parse_tree__module_qual__id_set____Unify____qual_id_kind_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
parse_tree__module_qual__id_set____Compare____permissions_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_qual__id_set_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____permissions_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__module_qual__id_set_scalar_common_1[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
parse_tree__module_qual__id_set____Compare____perm_in_imp_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_6 == CastY_7);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = (MR_Word) (HeadVar__2_2);
    MR_Word ArgY1_5 = (MR_Word) (HeadVar__3_3);
    MR_Integer Var_9 = (MR_Integer) (ArgX1_4);
    MR_Integer Var_10 = (MR_Integer) (ArgY1_5);

    succeeded = (Var_9 < Var_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Var_9 > Var_10);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
        *HeadVar__1_1 = (MR_Integer) 0;
    }
  }
}

MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____perm_in_imp_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_5 == CastY_6);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = (MR_Word) (HeadVar__1_1);
    MR_Word ArgY1_4 = (MR_Word) (HeadVar__2_2);

    succeeded = (ArgX1_3 == ArgY1_4);
  }
  return succeeded;
}

void MR_CALL 
parse_tree__module_qual__id_set____Compare____mq_in_interface_0_0(
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
parse_tree__module_qual__id_set____Unify____mq_in_interface_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
parse_tree__module_qual__id_set____Compare____mq_id_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 1))));
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
parse_tree__module_qual__id_set____Unify____mq_id_0_0(
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));

    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
      succeeded = (ArgX2_5 == ArgY2_6);
  }
  return succeeded;
}

void MR_CALL 
parse_tree__module_qual__id_set____Compare____module_permissions_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word SubResult1_6;

    parse_tree__module_qual__id_set____Compare____perm_in_int_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word Var_13 = (MR_Word) (ArgX2_7);
      MR_Word Var_14 = (MR_Word) (ArgY2_8);
      MR_Integer Var_15 = (MR_Integer) (Var_13);
      MR_Integer Var_16 = (MR_Integer) (Var_14);

      succeeded = (Var_15 < Var_16);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (Var_15 > Var_16);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 2;
        else
          *HeadVar__1_1 = (MR_Integer) 0;
      }
    }
  }
}

void MR_CALL 
parse_tree__module_qual__id_set____Compare____perm_in_int_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_8 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_9 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_8 == CastY_9);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__1_1 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 0))) & (MR_Integer) 1);
              MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, 0))) & (MR_Integer) 1);
              MR_Integer Var_14 = (MR_Integer) (ArgX1_4);
              MR_Integer Var_15 = (MR_Integer) (ArgY1_5);

              succeeded = (Var_14 < Var_15);
              if (succeeded)
                *HeadVar__1_1 = (MR_Integer) 1;
              else
              {
                succeeded = (Var_14 > Var_15);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 2;
                else
                  *HeadVar__1_1 = (MR_Integer) 0;
              }
            }
            break;
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 2:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgX1_6 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__2_2, 0))) & (MR_Integer) 1);
              MR_Word ArgY1_7 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__3_3, 0))) & (MR_Integer) 1);
              MR_Integer Var_12 = (MR_Integer) (ArgX1_6);
              MR_Integer Var_13 = (MR_Integer) (ArgY1_7);

              succeeded = (Var_12 < Var_13);
              if (succeeded)
                *HeadVar__1_1 = (MR_Integer) 1;
              else
              {
                succeeded = (Var_12 > Var_13);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 2;
                else
                  *HeadVar__1_1 = (MR_Integer) 0;
              }
            }
            break;
        }
        break;
    }
}

MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____module_permissions_0_0(
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Integer CastX_11;
    MR_Integer CastY_12;

    succeeded = parse_tree__module_qual__id_set____Unify____perm_in_int_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      CastX_11 = (MR_Integer) (ArgX2_5);
      CastY_12 = (MR_Integer) (ArgY2_6);
      succeeded = (CastX_11 == CastY_12);
      if (succeeded)
        succeeded = MR_TRUE;
      else
      {
        MR_Word ArgX1_9 = (MR_Word) (ArgX2_5);
        MR_Word ArgY1_10 = (MR_Word) (ArgY2_6);

        succeeded = (ArgX1_9 == ArgY1_10);
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
parse_tree__module_qual__id_set____Compare____module_match_type_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_8 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_9 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_8 == CastY_9);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));

      mdbcomp__sym_name____Compare____sym_name_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
    }
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Word ArgX1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

    mdbcomp__sym_name____Compare____sym_name_0_0(HeadVar__1_1, ArgX1_6, ArgY1_7);
  }
}

static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____module_match_type_0_0(
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
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_3, ArgY1_4);
    }
  }
  else
  {
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word ArgY1_6;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_5, ArgY1_6);
    }
  }
  return succeeded;
}

void MR_CALL 
parse_tree__module_qual__id_set____Compare____module_id_set_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_qual__id_set_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____module_id_set_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__module_qual__id_set_scalar_common_1[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
parse_tree__module_qual__id_set____Compare____mode_id_set_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_qual__id_set_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____mode_id_set_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__module_qual__id_set_scalar_common_1[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
parse_tree__module_qual__id_set____Compare____maybe_warn_if_matching_0_0(
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

static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____maybe_warn_if_matching_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
parse_tree__module_qual__id_set____Compare____inst_id_set_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_qual__id_set_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____inst_id_set_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__module_qual__id_set_scalar_common_1[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
parse_tree__module_qual__id_set____Compare____id_set_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_qual__id_set_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____id_set_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__module_qual__id_set_scalar_common_1[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
parse_tree__module_qual__id_set____Compare____class_id_set_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_qual__id_set_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____class_id_set_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__module_qual__id_set_scalar_common_1[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
parse_tree__module_qual__id_set__add_matching_and_nearmiss_modules_10_p_0(
  MR_Word InInt_11,
  MR_Word SymName_12,
  MR_Word ModuleName_13,
  MR_Word Permissions_14,
  MR_Word STATE_VARIABLE_Matches_0_24,
  MR_Word * STATE_VARIABLE_Matches_25,
  MR_Word STATE_VARIABLE_IntMismatches_0_26,
  MR_Word * STATE_VARIABLE_IntMismatches_27,
  MR_Word STATE_VARIABLE_QualMismatches_0_28,
  MR_Word * STATE_VARIABLE_QualMismatches_29)
{
  MR_bool succeeded;

  if (((MR_tag((MR_Word) SymName_12)) == (MR_Integer) 1))
  {
    MR_Word QualModuleName_20 = ((MR_Word) ((MR_hl_field(1, SymName_12, 0))));

    succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0(QualModuleName_20, ModuleName_13);
    if (succeeded)
    {
      MR_Word FullyModuleQualified_37;
      MR_Word PermInInt_40;
      MR_Word PermInImp_41;

      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(QualModuleName_20, ModuleName_13);
      if (succeeded)
        FullyModuleQualified_37 = (MR_Integer) 1;
      else
        FullyModuleQualified_37 = (MR_Integer) 0;
      PermInInt_40 = ((MR_Word) ((MR_hl_field(0, Permissions_14, 0))));
      PermInImp_41 = ((MR_Word) ((MR_hl_field(0, Permissions_14, 1))));
      switch (InInt_11) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word NeedQual_45 = (MR_Word) (PermInImp_41);

            succeeded = (FullyModuleQualified_37 == (MR_Integer) 1);
            if (!(succeeded))
              succeeded = (NeedQual_45 == (MR_Integer) 1);
            if (succeeded)
            {
              MR_Word MatchType_48;

              {
                MatchType_48 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, MatchType_48, 0) = ((MR_Box) (ModuleName_13));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_Matches_25 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (MatchType_48));
                MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Matches_0_24));
              }
              *STATE_VARIABLE_QualMismatches_29 = STATE_VARIABLE_QualMismatches_0_28;
            }
            else
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_QualMismatches_29 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (ModuleName_13));
                MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_QualMismatches_0_28));
              }
              *STATE_VARIABLE_Matches_25 = STATE_VARIABLE_Matches_0_24;
            }
            *STATE_VARIABLE_IntMismatches_27 = STATE_VARIABLE_IntMismatches_0_26;
          }
          break;
        case (MR_Integer) 1:
          switch (MR_tag((MR_Word) PermInInt_40)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *STATE_VARIABLE_IntMismatches_27 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (ModuleName_13));
                  MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_IntMismatches_0_26));
                }
                *STATE_VARIABLE_Matches_25 = STATE_VARIABLE_Matches_0_24;
                *STATE_VARIABLE_QualMismatches_29 = STATE_VARIABLE_QualMismatches_0_28;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word NeedQual_42 = ((MR_Unsigned) ((MR_hl_field(1, PermInInt_40, 0))) & (MR_Integer) 1);

                succeeded = (FullyModuleQualified_37 == (MR_Integer) 1);
                if (!(succeeded))
                  succeeded = (NeedQual_42 == (MR_Integer) 1);
                if (succeeded)
                {
                  MR_Word MatchType_49;

                  {
                    MatchType_49 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, MatchType_49, 0) = ((MR_Box) (ModuleName_13));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *STATE_VARIABLE_Matches_25 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (MatchType_49));
                    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Matches_0_24));
                  }
                  *STATE_VARIABLE_QualMismatches_29 = STATE_VARIABLE_QualMismatches_0_28;
                }
                else
                {
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *STATE_VARIABLE_QualMismatches_29 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (ModuleName_13));
                    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_QualMismatches_0_28));
                  }
                  *STATE_VARIABLE_Matches_25 = STATE_VARIABLE_Matches_0_24;
                }
                *STATE_VARIABLE_IntMismatches_27 = STATE_VARIABLE_IntMismatches_0_26;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word NeedQual_46 = ((MR_Unsigned) ((MR_hl_field(2, PermInInt_40, 0))) & (MR_Integer) 1);

                succeeded = (FullyModuleQualified_37 == (MR_Integer) 1);
                if (!(succeeded))
                  succeeded = (NeedQual_46 == (MR_Integer) 1);
                if (succeeded)
                {
                  MR_Word MatchType_50;

                  {
                    MatchType_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, MatchType_50, 0) = ((MR_Box) (ModuleName_13));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *STATE_VARIABLE_Matches_25 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (MatchType_50));
                    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Matches_0_24));
                  }
                  *STATE_VARIABLE_QualMismatches_29 = STATE_VARIABLE_QualMismatches_0_28;
                }
                else
                {
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *STATE_VARIABLE_QualMismatches_29 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (ModuleName_13));
                    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_QualMismatches_0_28));
                  }
                  *STATE_VARIABLE_Matches_25 = STATE_VARIABLE_Matches_0_24;
                }
                *STATE_VARIABLE_IntMismatches_27 = STATE_VARIABLE_IntMismatches_0_26;
              }
              break;
          }
          break;
      }
    }
    else
    {
      MR_Word ModuleNameComponents_22;
      MR_Word QualModuleNameComponents_23;

      ModuleNameComponents_22 = mdbcomp__sym_name__sym_name_to_list_1_f_0(ModuleName_13);
      QualModuleNameComponents_23 = mdbcomp__sym_name__sym_name_to_list_1_f_0(QualModuleName_20);
      succeeded = mercury__list__sublist_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), QualModuleNameComponents_23, ModuleNameComponents_22);
      if (succeeded)
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_QualMismatches_29 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (ModuleName_13));
          MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_QualMismatches_0_28));
        }
      else
        *STATE_VARIABLE_QualMismatches_29 = STATE_VARIABLE_QualMismatches_0_28;
      *STATE_VARIABLE_IntMismatches_27 = STATE_VARIABLE_IntMismatches_0_26;
      *STATE_VARIABLE_Matches_25 = STATE_VARIABLE_Matches_0_24;
    }
  }
  else
  {
    MR_Word PermInInt_51 = ((MR_Word) ((MR_hl_field(0, Permissions_14, 0))));
    MR_Word PermInImp_52 = ((MR_Word) ((MR_hl_field(0, Permissions_14, 1))));

    switch (InInt_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word NeedQual_56 = (MR_Word) (PermInImp_52);

          succeeded = (NeedQual_56 == (MR_Integer) 1);
          if (succeeded)
          {
            MR_Word MatchType_59;

            {
              MatchType_59 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, MatchType_59, 0) = ((MR_Box) (ModuleName_13));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Matches_25 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (MatchType_59));
              MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Matches_0_24));
            }
            *STATE_VARIABLE_QualMismatches_29 = STATE_VARIABLE_QualMismatches_0_28;
          }
          else
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_QualMismatches_29 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (ModuleName_13));
              MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_QualMismatches_0_28));
            }
            *STATE_VARIABLE_Matches_25 = STATE_VARIABLE_Matches_0_24;
          }
          *STATE_VARIABLE_IntMismatches_27 = STATE_VARIABLE_IntMismatches_0_26;
        }
        break;
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) PermInInt_51)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_IntMismatches_27 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (ModuleName_13));
                MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_IntMismatches_0_26));
              }
              *STATE_VARIABLE_Matches_25 = STATE_VARIABLE_Matches_0_24;
              *STATE_VARIABLE_QualMismatches_29 = STATE_VARIABLE_QualMismatches_0_28;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word NeedQual_53 = ((MR_Unsigned) ((MR_hl_field(1, PermInInt_51, 0))) & (MR_Integer) 1);

              succeeded = (NeedQual_53 == (MR_Integer) 1);
              if (succeeded)
              {
                MR_Word MatchType_60;

                {
                  MatchType_60 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, MatchType_60, 0) = ((MR_Box) (ModuleName_13));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *STATE_VARIABLE_Matches_25 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (MatchType_60));
                  MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Matches_0_24));
                }
                *STATE_VARIABLE_QualMismatches_29 = STATE_VARIABLE_QualMismatches_0_28;
              }
              else
              {
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *STATE_VARIABLE_QualMismatches_29 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (ModuleName_13));
                  MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_QualMismatches_0_28));
                }
                *STATE_VARIABLE_Matches_25 = STATE_VARIABLE_Matches_0_24;
              }
              *STATE_VARIABLE_IntMismatches_27 = STATE_VARIABLE_IntMismatches_0_26;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word NeedQual_57 = ((MR_Unsigned) ((MR_hl_field(2, PermInInt_51, 0))) & (MR_Integer) 1);

              succeeded = (NeedQual_57 == (MR_Integer) 1);
              if (succeeded)
              {
                MR_Word MatchType_61;

                {
                  MatchType_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, MatchType_61, 0) = ((MR_Box) (ModuleName_13));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *STATE_VARIABLE_Matches_25 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (MatchType_61));
                  MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Matches_0_24));
                }
                *STATE_VARIABLE_QualMismatches_29 = STATE_VARIABLE_QualMismatches_0_28;
              }
              else
              {
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *STATE_VARIABLE_QualMismatches_29 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (ModuleName_13));
                  MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_QualMismatches_0_28));
                }
                *STATE_VARIABLE_Matches_25 = STATE_VARIABLE_Matches_0_24;
              }
              *STATE_VARIABLE_IntMismatches_27 = STATE_VARIABLE_IntMismatches_0_26;
            }
            break;
        }
        break;
    }
  }
}

static MR_Word MR_CALL 
parse_tree__module_qual__id_set__matched_module_name_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word ModuleName_2;

  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
    ModuleName_2 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
  else
    ModuleName_2 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
  return ModuleName_2;
}

MR_bool MR_CALL 
parse_tree__module_qual__id_set__parent_module_is_imported_4_p_0(
  MR_Word InInt_5,
  MR_Word ModuleIdSet_6,
  MR_Word ParentModule_7,
  MR_Word ChildModule_8)
{
  MR_bool succeeded;
  MR_Word TypeInfo_21_21;
  MR_Word TypeCtorInfo_22_22;
  MR_Word TypeCtorInfo_23_23;
  MR_String DirectSubModuleName_9;
  MR_Word SubMap_11;
  MR_Word PermissionsMap_12;
  MR_Word ParentModulePermissions_13;
  MR_Word PermInInt_14;
  MR_Word PermInImp_15;
  MR_Box conv0_SubMap_11;
  MR_Box conv1_PermissionsMap_12;
  MR_Box conv2_ParentModulePermissions_13;

  DirectSubModuleName_9 = parse_tree__module_qual__id_set__get_first_module_name_1_f_0(ChildModule_8);
  succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__module_qual__id_set_scalar_common_1[1]), ModuleIdSet_6, ((MR_Box) (DirectSubModuleName_9)), &conv0_SubMap_11);
  if (succeeded)
  {
    SubMap_11 = ((MR_Word) (conv0_SubMap_11));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    TypeInfo_21_21 = (MR_Word) (&parse_tree__module_qual__id_set_scalar_common_1[0]);
    succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeInfo_21_21, SubMap_11, (MR_Integer) 0, &conv1_PermissionsMap_12);
    if (succeeded)
    {
      PermissionsMap_12 = ((MR_Word) (conv1_PermissionsMap_12));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      TypeCtorInfo_22_22 = (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0);
      TypeCtorInfo_23_23 = (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0);
      succeeded = mercury__map__search_3_p_0(TypeCtorInfo_22_22, TypeCtorInfo_23_23, PermissionsMap_12, ((MR_Box) (ParentModule_7)), &conv2_ParentModulePermissions_13);
      if (succeeded)
      {
        ParentModulePermissions_13 = ((MR_Word) (conv2_ParentModulePermissions_13));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        PermInInt_14 = ((MR_Word) ((MR_hl_field(0, ParentModulePermissions_13, 0))));
        PermInImp_15 = ((MR_Word) ((MR_hl_field(0, ParentModulePermissions_13, 1))));
        switch (InInt_5) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_17 = (MR_Word) (PermInImp_15);

              succeeded = (Var_17 == (MR_Integer) 1);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_16;

              succeeded = ((MR_tag((MR_Word) PermInInt_14)) == (MR_Integer) 1);
              if (succeeded)
              {
                Var_16 = ((MR_Unsigned) ((MR_hl_field(1, PermInInt_14, 0))) & (MR_Integer) 1);
                succeeded = (Var_16 == (MR_Integer) 1);
              }
            }
            break;
        }
      }
    }
  }
  return succeeded;
}

static MR_String MR_CALL 
parse_tree__module_qual__id_set__get_first_module_name_1_f_0(
  MR_Word HeadVar__1_1)
{
  while (MR_TRUE)
  {
    MR_String HeadVar__2_2;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
    {
      MR_Word Parent_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word next_value_of_HeadVar__1_1 = Parent_4;

      // direct tailcall eliminated
      ;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      continue;
    }
    else
      HeadVar__2_2 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, 0))));
    return HeadVar__2_2;
    break;
  }
}

static void MR_CALL 
parse_tree__module_qual__id_set__find_unique_match_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv12_HeadVar__5_5;

  recompilation__record_uses__record_used_item_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), &conv12_HeadVar__5_5);
  *wrapper_arg_2 = ((MR_Box) (conv12_HeadVar__5_5));
}

static MR_Box MR_CALL 
parse_tree__module_qual__id_set__find_unique_match_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv11_ModuleName_2;

  conv11_ModuleName_2 = parse_tree__module_qual__id_set__matched_module_name_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv11_ModuleName_2));
  return wrapper_arg_2;
}

static void MR_CALL 
parse_tree__module_qual__id_set__find_unique_match_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv9_HeadVar__4_4;

  parse_tree__module_qual__mq_info__mq_info_set_module_used_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv9_HeadVar__4_4);
  *wrapper_arg_3 = ((MR_Box) (conv9_HeadVar__4_4));
}

static void MR_CALL 
parse_tree__module_qual__id_set__find_unique_match_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_Matches_25;
  MR_Word conv3_STATE_VARIABLE_IntMismatches_27;
  MR_Word conv2_STATE_VARIABLE_QualMismatches_29;

  parse_tree__module_qual__id_set__add_matching_and_nearmiss_modules_10_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv4_STATE_VARIABLE_Matches_25, ((MR_Word) (wrapper_arg_5)), &conv3_STATE_VARIABLE_IntMismatches_27, ((MR_Word) (wrapper_arg_7)), &conv2_STATE_VARIABLE_QualMismatches_29);
  *wrapper_arg_4 = ((MR_Box) (conv4_STATE_VARIABLE_Matches_25));
  *wrapper_arg_6 = ((MR_Box) (conv3_STATE_VARIABLE_IntMismatches_27));
  *wrapper_arg_8 = ((MR_Box) (conv2_STATE_VARIABLE_QualMismatches_29));
}

void MR_CALL 
parse_tree__module_qual__id_set__find_unique_match_8_p_0(
  MR_Word InInt_9,
  MR_Word ErrorContext_10,
  MR_Word IdSet_11,
  MR_Word IdType_12,
  MR_Word Id0_13,
  MR_Word * SymName_14,
  MR_Word STATE_VARIABLE_Info_0_40,
  MR_Word * STATE_VARIABLE_Info_41)
{
  MR_bool succeeded;
  MR_Word SymName0_16 = ((MR_Word) ((MR_hl_field(0, Id0_13, 0))));
  MR_Integer Arity_17 = ((MR_Integer) ((MR_hl_field(0, Id0_13, 1))));
  MR_String BaseName_18;
  MR_Word Matches_19;
  MR_Word IntMismatches_20;
  MR_Word QualMismatches_21;
  MR_Word PermissionsMap_70;
  MR_Word TypeInfo_22_74;
  MR_Word SubMap_69;
  MR_Box conv0_SubMap_69;
  MR_Box conv1_PermissionsMap_70;

  BaseName_18 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName0_16);
  succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__module_qual__id_set_scalar_common_1[1]), IdSet_11, ((MR_Box) (BaseName_18)), &conv0_SubMap_69);
  if (succeeded)
  {
    SubMap_69 = ((MR_Word) (conv0_SubMap_69));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    TypeInfo_22_74 = (MR_Word) (&parse_tree__module_qual__id_set_scalar_common_1[0]);
    succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeInfo_22_74, SubMap_69, Arity_17, &conv1_PermissionsMap_70);
    if (succeeded)
    {
      PermissionsMap_70 = ((MR_Word) (conv1_PermissionsMap_70));
      succeeded = MR_TRUE;
    }
  }
  if (succeeded)
  {
    MR_Word Var_75;
    MR_Box conv7_Matches_19;
    MR_Box conv6_IntMismatches_20;
    MR_Box conv5_QualMismatches_21;

    {
      Var_75 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_75, 0) = ((MR_Box) (&parse_tree__module_qual__id_set_scalar_common_3[0]));
      MR_hl_field(0, Var_75, 1) = ((MR_Box) (parse_tree__module_qual__id_set__find_unique_match_8_p_0_1));
      MR_hl_field(0, Var_75, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_75, 3) = ((MR_Box) (InInt_9));
      MR_hl_field(0, Var_75, 4) = ((MR_Box) (SymName0_16));
    }
    mercury__map__foldr3_8_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0), (MR_Word) (&parse_tree__module_qual__id_set_scalar_common_2[0]), (MR_Word) (&parse_tree__module_qual__id_set_scalar_common_2[1]), (MR_Word) (&parse_tree__module_qual__id_set_scalar_common_2[1]), Var_75, PermissionsMap_70, ((MR_Box) ((MR_Unsigned) 0U)), &conv7_Matches_19, ((MR_Box) ((MR_Unsigned) 0U)), &conv6_IntMismatches_20, ((MR_Box) ((MR_Unsigned) 0U)), &conv5_QualMismatches_21);
    Matches_19 = ((MR_Word) (conv7_Matches_19));
    IntMismatches_20 = ((MR_Word) (conv6_IntMismatches_20));
    QualMismatches_21 = ((MR_Word) (conv5_QualMismatches_21));
  }
  else
  {
    Matches_19 = (MR_Word) ((MR_Unsigned) 0U);
    IntMismatches_20 = (MR_Word) ((MR_Unsigned) 0U);
    QualMismatches_21 = (MR_Word) ((MR_Unsigned) 0U);
  }
  if ((Matches_19 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word ReportErrors_23;

    parse_tree__module_qual__mq_info__mq_info_get_should_report_errors_2_p_0(STATE_VARIABLE_Info_0_40, &ReportErrors_23);
    switch (ReportErrors_23) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_Info_41 = STATE_VARIABLE_Info_0_40;
        break;
      case (MR_Integer) 1:
        {
          MR_Word ThisModuleName_24;
          MR_Word PossibleArities_25;
          MR_Word Spec_26;
          MR_Word STATE_VARIABLE_Info_1_42;
          MR_Word Var_43;
          MR_String UnqualName_83;
          MR_Word MaybeBlocking_92;
          MR_Word SubMap_84;
          MR_Box conv8_SubMap_84;
          MR_Box conv10_STATE_VARIABLE_Info_41;

          parse_tree__module_qual__mq_info__mq_info_get_this_module_2_p_0(STATE_VARIABLE_Info_0_40, &ThisModuleName_24);
          UnqualName_83 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName0_16);
          succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__module_qual__id_set_scalar_common_1[1]), IdSet_11, ((MR_Box) (UnqualName_83)), &conv8_SubMap_84);
          if (succeeded)
          {
            SubMap_84 = ((MR_Word) (conv8_SubMap_84));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            MR_Word SubMapPairs_85;
            MR_Word Var_86;

            mercury__map__to_assoc_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&parse_tree__module_qual__id_set_scalar_common_1[0]), SubMap_84, &SubMapPairs_85);
            Var_86 = mercury__set__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0));
            parse_tree__module_qual__id_set__find_matching_arities_4_p_0(SymName0_16, SubMapPairs_85, Var_86, &PossibleArities_25);
          }
          else
            mercury__set__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), &PossibleArities_25);
          parse_tree__module_qual__qual_errors__report_undefined_mq_id_9_p_0(STATE_VARIABLE_Info_0_40, ErrorContext_10, Id0_13, IdType_12, ThisModuleName_24, IntMismatches_20, QualMismatches_21, PossibleArities_25, &Spec_26);
          parse_tree__module_qual__mq_info__mq_info_get_is_undef_blocking_2_p_0(STATE_VARIABLE_Info_0_40, &MaybeBlocking_92);
          switch (MaybeBlocking_92) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word SymName_95 = ((MR_Word) ((MR_hl_field(0, Id0_13, 0))));
                MR_Integer Arity_96 = ((MR_Integer) ((MR_hl_field(0, Id0_13, 1))));

                switch (IdType_12) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 3:
                    {
                      MR_Word SNA_106;
                      MR_Word UndefTypeclasses0_107;
                      MR_Word UndefTypeclasses_108;

                      {
                        SNA_106 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, SNA_106, 0) = ((MR_Box) (SymName_95));
                        MR_hl_field(0, SNA_106, 1) = ((MR_Box) (Arity_96));
                      }
                      parse_tree__module_qual__mq_info__mq_info_get_undef_typeclasses_2_p_0(STATE_VARIABLE_Info_0_40, &UndefTypeclasses0_107);
                      mercury__one_or_more_map__add_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), ((MR_Box) (SNA_106)), ((MR_Box) (Spec_26)), UndefTypeclasses0_107, &UndefTypeclasses_108);
                      parse_tree__module_qual__mq_info__mq_info_set_undef_typeclasses_3_p_0(UndefTypeclasses_108, STATE_VARIABLE_Info_0_40, &STATE_VARIABLE_Info_1_42);
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word InstCtor_100;
                      MR_Word UndefInsts0_101;
                      MR_Word UndefInsts_102;

                      {
                        InstCtor_100 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, InstCtor_100, 0) = ((MR_Box) (SymName_95));
                        MR_hl_field(0, InstCtor_100, 1) = ((MR_Box) (Arity_96));
                      }
                      parse_tree__module_qual__mq_info__mq_info_get_undef_insts_2_p_0(STATE_VARIABLE_Info_0_40, &UndefInsts0_101);
                      mercury__one_or_more_map__add_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), ((MR_Box) (InstCtor_100)), ((MR_Box) (Spec_26)), UndefInsts0_101, &UndefInsts_102);
                      parse_tree__module_qual__mq_info__mq_info_set_undef_insts_3_p_0(UndefInsts_102, STATE_VARIABLE_Info_0_40, &STATE_VARIABLE_Info_1_42);
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word ModeCtor_103;
                      MR_Word UndefModes0_104;
                      MR_Word UndefModes_105;

                      {
                        ModeCtor_103 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, ModeCtor_103, 0) = ((MR_Box) (SymName_95));
                        MR_hl_field(0, ModeCtor_103, 1) = ((MR_Box) (Arity_96));
                      }
                      parse_tree__module_qual__mq_info__mq_info_get_undef_modes_2_p_0(STATE_VARIABLE_Info_0_40, &UndefModes0_104);
                      mercury__one_or_more_map__add_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), ((MR_Box) (ModeCtor_103)), ((MR_Box) (Spec_26)), UndefModes0_104, &UndefModes_105);
                      parse_tree__module_qual__mq_info__mq_info_set_undef_modes_3_p_0(UndefModes_105, STATE_VARIABLE_Info_0_40, &STATE_VARIABLE_Info_1_42);
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      MR_Word TypeCtor_97;
                      MR_Word UndefTypes0_98;
                      MR_Word UndefTypes_99;

                      {
                        TypeCtor_97 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, TypeCtor_97, 0) = ((MR_Box) (SymName_95));
                        MR_hl_field(0, TypeCtor_97, 1) = ((MR_Box) (Arity_96));
                      }
                      parse_tree__module_qual__mq_info__mq_info_get_undef_types_2_p_0(STATE_VARIABLE_Info_0_40, &UndefTypes0_98);
                      mercury__one_or_more_map__add_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), ((MR_Box) (TypeCtor_97)), ((MR_Box) (Spec_26)), UndefTypes0_98, &UndefTypes_99);
                      parse_tree__module_qual__mq_info__mq_info_set_undef_types_3_p_0(UndefTypes_99, STATE_VARIABLE_Info_0_40, &STATE_VARIABLE_Info_1_42);
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Specs0_93;
                MR_Word Specs_94;

                parse_tree__module_qual__mq_info__mq_info_get_nonblocking_undef_specs_2_p_0(STATE_VARIABLE_Info_0_40, &Specs0_93);
                {
                  Specs_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Specs_94, 0) = ((MR_Box) (Spec_26));
                  MR_hl_field(1, Specs_94, 1) = ((MR_Box) (Specs0_93));
                }
                parse_tree__module_qual__mq_info__mq_info_set_nonblocking_undef_specs_3_p_0(Specs_94, STATE_VARIABLE_Info_0_40, &STATE_VARIABLE_Info_1_42);
              }
              break;
          }
          {
            Var_43 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_43, 0) = ((MR_Box) (&parse_tree__module_qual__id_set_scalar_common_4[0]));
            MR_hl_field(0, Var_43, 1) = ((MR_Box) (parse_tree__module_qual__id_set__find_unique_match_8_p_0_2));
            MR_hl_field(0, Var_43, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, Var_43, 3) = ((MR_Box) (InInt_9));
          }
          mercury__list__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0), Var_43, QualMismatches_21, ((MR_Box) (STATE_VARIABLE_Info_1_42)), &conv10_STATE_VARIABLE_Info_41);
          *STATE_VARIABLE_Info_41 = ((MR_Word) (conv10_STATE_VARIABLE_Info_41));
        }
        break;
    }
    *SymName_14 = ((MR_Word) ((MR_hl_field(0, Id0_13, 0))));
  }
  else
  {
    MR_Word Var_67 = ((MR_Word) ((MR_hl_field(1, Matches_19, 1))));
    MR_Word Var_68 = ((MR_Word) ((MR_hl_field(1, Matches_19, 0))));
    MR_Word MaybeUniqMatchType_353;
    MR_Word STATE_VARIABLE_Info_2_355;

    if ((Var_67 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      {
        MaybeUniqMatchType_353 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeUniqMatchType_353, 0) = ((MR_Box) (Var_68));
      }
      STATE_VARIABLE_Info_2_355 = STATE_VARIABLE_Info_0_40;
    }
    else
    {
      MR_Word ReportErrors_55;

      MaybeUniqMatchType_353 = (MR_Word) ((MR_Unsigned) 0U);
      parse_tree__module_qual__mq_info__mq_info_get_should_report_errors_2_p_0(STATE_VARIABLE_Info_0_40, &ReportErrors_55);
      switch (ReportErrors_55) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          STATE_VARIABLE_Info_2_355 = STATE_VARIABLE_Info_0_40;
          break;
        case (MR_Integer) 1:
          {
            MR_Word UsableModuleNames_31;
            MR_Word NonUsableModuleNames_32;
            MR_Word Spec_53;

            UsableModuleNames_31 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_match_type_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_qual__id_set_scalar_common_1[3]), Matches_19);
            NonUsableModuleNames_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntMismatches_20, QualMismatches_21);
            parse_tree__module_qual__qual_errors__report_ambiguous_match_6_p_0(ErrorContext_10, Id0_13, IdType_12, UsableModuleNames_31, NonUsableModuleNames_32, &Spec_53);
            parse_tree__module_qual__id_set__mq_info_record_undef_mq_id_5_p_0(IdType_12, Id0_13, Spec_53, STATE_VARIABLE_Info_0_40, &STATE_VARIABLE_Info_2_355);
          }
          break;
      }
    }
    if ((MaybeUniqMatchType_353 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *SymName_14 = ((MR_Word) ((MR_hl_field(0, Id0_13, 0))));
      *STATE_VARIABLE_Info_41 = STATE_VARIABLE_Info_2_355;
    }
    else
    {
      MR_Word UniqMatchType_34 = ((MR_Word) ((MR_hl_field(1, MaybeUniqMatchType_353, 0))));
      MR_Word UniqModuleName_35;
      MR_Word UsedItemType_37;
      MR_Word ItemName0_38;
      MR_Word ItemName_39;
      MR_Word STATE_VARIABLE_Info_4_49;
      MR_Word STATE_VARIABLE_Info_5_50;
      MR_Word Var_51;

      if (((MR_tag((MR_Word) UniqMatchType_34)) == (MR_Integer) 0))
      {
        UniqModuleName_35 = ((MR_Word) ((MR_hl_field(0, UniqMatchType_34, 0))));
        STATE_VARIABLE_Info_4_49 = STATE_VARIABLE_Info_2_355;
      }
      else
      {
        MR_Word WarnSpec_36;
        MR_Word Specs0_117;
        MR_Word Specs_118;

        UniqModuleName_35 = ((MR_Word) ((MR_hl_field(1, UniqMatchType_34, 0))));
        parse_tree__module_qual__qual_errors__report_old_submodule_visibility_match_5_p_0(ErrorContext_10, Id0_13, IdType_12, UniqModuleName_35, &WarnSpec_36);
        parse_tree__module_qual__mq_info__mq_info_get_warn_specs_2_p_0(STATE_VARIABLE_Info_2_355, &Specs0_117);
        {
          Specs_118 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Specs_118, 0) = ((MR_Box) (WarnSpec_36));
          MR_hl_field(1, Specs_118, 1) = ((MR_Box) (Specs0_117));
        }
        parse_tree__module_qual__mq_info__mq_info_set_warn_specs_3_p_0(Specs_118, STATE_VARIABLE_Info_2_355, &STATE_VARIABLE_Info_4_49);
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *SymName_14 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (UniqModuleName_35));
        MR_hl_field(1, base, 1) = ((MR_Box) (BaseName_18));
      }
      parse_tree__module_qual__mq_info__mq_info_set_module_used_4_p_0(InInt_9, UniqModuleName_35, STATE_VARIABLE_Info_4_49, &STATE_VARIABLE_Info_5_50);
      UsedItemType_37 = ((&parse_tree__module_qual__id_set_vector_common_6[0 + IdType_12]))->parse_tree__module_qual__id_set__vector_common_type_6_0__vct_6_f_0;
      {
        ItemName0_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ItemName0_38, 0) = ((MR_Box) (SymName0_16));
        MR_hl_field(0, ItemName0_38, 1) = ((MR_Box) (Arity_17));
      }
      {
        ItemName_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ItemName_39, 0) = ((MR_Box) (*SymName_14));
        MR_hl_field(0, ItemName_39, 1) = ((MR_Box) (Arity_17));
      }
      {
        Var_51 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_51, 0) = ((MR_Box) (&parse_tree__module_qual__id_set_scalar_common_7[0]));
        MR_hl_field(0, Var_51, 1) = ((MR_Box) (parse_tree__module_qual__id_set__find_unique_match_8_p_0_4));
        MR_hl_field(0, Var_51, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(0, Var_51, 3) = ((MR_Box) (UsedItemType_37));
        MR_hl_field(0, Var_51, 4) = ((MR_Box) (ItemName0_38));
        MR_hl_field(0, Var_51, 5) = ((MR_Box) (ItemName_39));
      }
      parse_tree__module_qual__mq_info__update_recompilation_info_3_p_0(Var_51, STATE_VARIABLE_Info_5_50, STATE_VARIABLE_Info_41);
    }
  }
}

static void MR_CALL 
parse_tree__module_qual__id_set__find_matching_arities_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_Matches_25;
  MR_Word conv1_STATE_VARIABLE_IntMismatches_27;
  MR_Word conv0_STATE_VARIABLE_QualMismatches_29;

  parse_tree__module_qual__id_set__add_matching_and_nearmiss_modules_10_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_Matches_25, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_IntMismatches_27, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_QualMismatches_29);
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_Matches_25));
  *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_IntMismatches_27));
  *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_QualMismatches_29));
}

static void MR_CALL 
parse_tree__module_qual__id_set__find_matching_arities_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_PossibleArities_0_3,
  MR_Word * STATE_VARIABLE_PossibleArities_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_PossibleArities_4 = STATE_VARIABLE_PossibleArities_0_3;
    else
    {
      MR_Word Pair_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word Pairs_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Integer Arity_13 = ((MR_Integer) ((MR_hl_field(0, Pair_10, 0))));
      MR_Word PermissionsMap_14 = ((MR_Word) ((MR_hl_field(0, Pair_10, 1))));
      MR_Word Matches_15;
      MR_Word IntMismatches_16;
      MR_Word QualMismatches_17;
      MR_Word STATE_VARIABLE_PossibleArities_1_27;
      MR_Word Var_29;
      MR_Box conv5_Matches_15;
      MR_Box conv4_IntMismatches_16;
      MR_Box conv3_QualMismatches_17;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_PossibleArities_0_3;

      {
        Var_29 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_29, 0) = ((MR_Box) (&parse_tree__module_qual__id_set_scalar_common_3[0]));
        MR_hl_field(0, Var_29, 1) = ((MR_Box) (parse_tree__module_qual__id_set__find_matching_arities_4_p_0_1));
        MR_hl_field(0, Var_29, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_29, 3) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(0, Var_29, 4) = ((MR_Box) (HeadVar__1_1));
      }
      mercury__map__foldr3_8_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0), (MR_Word) (&parse_tree__module_qual__id_set_scalar_common_2[0]), (MR_Word) (&parse_tree__module_qual__id_set_scalar_common_2[1]), (MR_Word) (&parse_tree__module_qual__id_set_scalar_common_2[1]), Var_29, PermissionsMap_14, ((MR_Box) ((MR_Unsigned) 0U)), &conv5_Matches_15, ((MR_Box) ((MR_Unsigned) 0U)), &conv4_IntMismatches_16, ((MR_Box) ((MR_Unsigned) 0U)), &conv3_QualMismatches_17);
      Matches_15 = ((MR_Word) (conv5_Matches_15));
      IntMismatches_16 = ((MR_Word) (conv4_IntMismatches_16));
      QualMismatches_17 = ((MR_Word) (conv3_QualMismatches_17));
      succeeded = (Matches_15 != (MR_Word) ((MR_Unsigned) 0U));
      if (!(succeeded))
      {
        succeeded = (IntMismatches_16 != (MR_Word) ((MR_Unsigned) 0U));
        if (!(succeeded))
          succeeded = (QualMismatches_17 != (MR_Word) ((MR_Unsigned) 0U));
      }
      if (succeeded)
        mercury__set__insert_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (Arity_13)), STATE_VARIABLE_PossibleArities_0_3, &STATE_VARIABLE_PossibleArities_1_27);
      else
        STATE_VARIABLE_PossibleArities_1_27 = STATE_VARIABLE_PossibleArities_0_3;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Pairs_11;
      next_value_of_STATE_VARIABLE_PossibleArities_0_3 = STATE_VARIABLE_PossibleArities_1_27;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_PossibleArities_0_3 = next_value_of_STATE_VARIABLE_PossibleArities_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__module_qual__id_set__mq_info_record_undef_mq_id_5_p_0(
  MR_Word IdType_6,
  MR_Word Id_7,
  MR_Word Spec_8,
  MR_Word STATE_VARIABLE_Info_0_27,
  MR_Word * STATE_VARIABLE_Info_28)
{
  MR_Word MaybeBlocking_10;

  parse_tree__module_qual__mq_info__mq_info_get_is_undef_blocking_2_p_0(STATE_VARIABLE_Info_0_27, &MaybeBlocking_10);
  switch (MaybeBlocking_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word SymName_13 = ((MR_Word) ((MR_hl_field(0, Id_7, 0))));
        MR_Integer Arity_14 = ((MR_Integer) ((MR_hl_field(0, Id_7, 1))));

        switch (IdType_6) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 3:
            {
              MR_Word SNA_24;
              MR_Word UndefTypeclasses0_25;
              MR_Word UndefTypeclasses_26;

              {
                SNA_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, SNA_24, 0) = ((MR_Box) (SymName_13));
                MR_hl_field(0, SNA_24, 1) = ((MR_Box) (Arity_14));
              }
              parse_tree__module_qual__mq_info__mq_info_get_undef_typeclasses_2_p_0(STATE_VARIABLE_Info_0_27, &UndefTypeclasses0_25);
              mercury__one_or_more_map__add_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), ((MR_Box) (SNA_24)), ((MR_Box) (Spec_8)), UndefTypeclasses0_25, &UndefTypeclasses_26);
              parse_tree__module_qual__mq_info__mq_info_set_undef_typeclasses_3_p_0(UndefTypeclasses_26, STATE_VARIABLE_Info_0_27, STATE_VARIABLE_Info_28);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word InstCtor_18;
              MR_Word UndefInsts0_19;
              MR_Word UndefInsts_20;

              {
                InstCtor_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, InstCtor_18, 0) = ((MR_Box) (SymName_13));
                MR_hl_field(0, InstCtor_18, 1) = ((MR_Box) (Arity_14));
              }
              parse_tree__module_qual__mq_info__mq_info_get_undef_insts_2_p_0(STATE_VARIABLE_Info_0_27, &UndefInsts0_19);
              mercury__one_or_more_map__add_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), ((MR_Box) (InstCtor_18)), ((MR_Box) (Spec_8)), UndefInsts0_19, &UndefInsts_20);
              parse_tree__module_qual__mq_info__mq_info_set_undef_insts_3_p_0(UndefInsts_20, STATE_VARIABLE_Info_0_27, STATE_VARIABLE_Info_28);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ModeCtor_21;
              MR_Word UndefModes0_22;
              MR_Word UndefModes_23;

              {
                ModeCtor_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, ModeCtor_21, 0) = ((MR_Box) (SymName_13));
                MR_hl_field(0, ModeCtor_21, 1) = ((MR_Box) (Arity_14));
              }
              parse_tree__module_qual__mq_info__mq_info_get_undef_modes_2_p_0(STATE_VARIABLE_Info_0_27, &UndefModes0_22);
              mercury__one_or_more_map__add_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), ((MR_Box) (ModeCtor_21)), ((MR_Box) (Spec_8)), UndefModes0_22, &UndefModes_23);
              parse_tree__module_qual__mq_info__mq_info_set_undef_modes_3_p_0(UndefModes_23, STATE_VARIABLE_Info_0_27, STATE_VARIABLE_Info_28);
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word TypeCtor_15;
              MR_Word UndefTypes0_16;
              MR_Word UndefTypes_17;

              {
                TypeCtor_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, TypeCtor_15, 0) = ((MR_Box) (SymName_13));
                MR_hl_field(0, TypeCtor_15, 1) = ((MR_Box) (Arity_14));
              }
              parse_tree__module_qual__mq_info__mq_info_get_undef_types_2_p_0(STATE_VARIABLE_Info_0_27, &UndefTypes0_16);
              mercury__one_or_more_map__add_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), ((MR_Box) (TypeCtor_15)), ((MR_Box) (Spec_8)), UndefTypes0_16, &UndefTypes_17);
              parse_tree__module_qual__mq_info__mq_info_set_undef_types_3_p_0(UndefTypes_17, STATE_VARIABLE_Info_0_27, STATE_VARIABLE_Info_28);
            }
            break;
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Specs0_11;
        MR_Word Specs_12;

        parse_tree__module_qual__mq_info__mq_info_get_nonblocking_undef_specs_2_p_0(STATE_VARIABLE_Info_0_27, &Specs0_11);
        {
          Specs_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Specs_12, 0) = ((MR_Box) (Spec_8));
          MR_hl_field(1, Specs_12, 1) = ((MR_Box) (Specs0_11));
        }
        parse_tree__module_qual__mq_info__mq_info_set_nonblocking_undef_specs_3_p_0(Specs_12, STATE_VARIABLE_Info_0_27, STATE_VARIABLE_Info_28);
      }
      break;
  }
}

void MR_CALL 
parse_tree__module_qual__id_set__get_names_in_id_set_2_p_0(
  MR_Word IdSet_3,
  MR_Word * Names_4)
{
  mercury__map__sorted_keys_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__module_qual__id_set_scalar_common_1[1]), IdSet_3, Names_4);
}

void MR_CALL 
parse_tree__module_qual__id_set__id_set_insert_4_p_0(
  MR_Word Permissions_5,
  MR_Word MQId_6,
  MR_Word STATE_VARIABLE_IdSet_0_19,
  MR_Word * STATE_VARIABLE_IdSet_20)
{
  MR_bool succeeded;
  MR_Word SymName_8 = ((MR_Word) ((MR_hl_field(0, MQId_6, 0))));
  MR_Integer Arity_9 = ((MR_Integer) ((MR_hl_field(0, MQId_6, 1))));

  if (((MR_tag((MR_Word) SymName_8)) == (MR_Integer) 1))
  {
    MR_Word ModuleName_11 = ((MR_Word) ((MR_hl_field(1, SymName_8, 0))));
    MR_String BaseName_12 = ((MR_String) ((MR_hl_field(1, SymName_8, 1))));
    MR_Word FreshPermissionsMap_13;
    MR_Word FreshSubMap_14;
    MR_Word STATE_VARIABLE_IdSet_1_23;

    FreshPermissionsMap_13 = mercury__map__singleton_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0), ((MR_Box) (ModuleName_11)), ((MR_Box) (Permissions_5)));
    FreshSubMap_14 = mercury__map__singleton_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&parse_tree__module_qual__id_set_scalar_common_1[0]), ((MR_Box) (Arity_9)), ((MR_Box) (FreshPermissionsMap_13)));
    succeeded = mercury__map__insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__module_qual__id_set_scalar_common_1[1]), ((MR_Box) (BaseName_12)), ((MR_Box) (FreshSubMap_14)), STATE_VARIABLE_IdSet_0_19, &STATE_VARIABLE_IdSet_1_23);
    if (succeeded)
      *STATE_VARIABLE_IdSet_20 = STATE_VARIABLE_IdSet_1_23;
    else
    {
      MR_Word SubMap0_15;
      MR_Box conv0_SubMap0_15;
      MR_Word PermissionsMap0_16;
      MR_Box conv1_PermissionsMap0_16;

      mercury__map__lookup_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__module_qual__id_set_scalar_common_1[1]), STATE_VARIABLE_IdSet_0_19, ((MR_Box) (BaseName_12)), &conv0_SubMap0_15);
      SubMap0_15 = ((MR_Word) (conv0_SubMap0_15));
      succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&parse_tree__module_qual__id_set_scalar_common_1[0]), SubMap0_15, Arity_9, &conv1_PermissionsMap0_16);
      if (succeeded)
      {
        PermissionsMap0_16 = ((MR_Word) (conv1_PermissionsMap0_16));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word PermissionsMap_17;
        MR_Word SubMap_18;
        MR_Word OldPermissions_35;
        MR_Box conv2_OldPermissions_35;

        succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0), PermissionsMap0_16, ((MR_Box) (ModuleName_11)), &conv2_OldPermissions_35);
        if (succeeded)
        {
          OldPermissions_35 = ((MR_Word) (conv2_OldPermissions_35));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word OldPermInt_36 = ((MR_Word) ((MR_hl_field(0, OldPermissions_35, 0))));
          MR_Word OldPermImp_37 = ((MR_Word) ((MR_hl_field(0, OldPermissions_35, 1))));
          MR_Word NewPermInt_38 = ((MR_Word) ((MR_hl_field(0, Permissions_5, 0))));
          MR_Word NewPermImp_39 = ((MR_Word) ((MR_hl_field(0, Permissions_5, 1))));
          MR_Word PermInt_40;
          MR_Word OldImpNeedQual_46;
          MR_Word NewImpNeedQual_47;
          MR_Word ImpNeedQual_48;
          MR_Word PermImp_49;
          MR_Integer CastX_76;
          MR_Integer CastY_77;

          switch (MR_tag((MR_Word) OldPermInt_36)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              PermInt_40 = NewPermInt_38;
              break;
            case (MR_Integer) 1:
              {
                MR_Word OldIntNeedQual_41 = ((MR_Unsigned) ((MR_hl_field(1, OldPermInt_36, 0))) & (MR_Integer) 1);

                switch (MR_tag((MR_Word) NewPermInt_38)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    PermInt_40 = OldPermInt_36;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word NewIntNeedQual_43 = ((MR_Unsigned) ((MR_hl_field(1, NewPermInt_38, 0))) & (MR_Integer) 1);
                      MR_Word IntNeedQual_45;

                      succeeded = (OldIntNeedQual_41 == (MR_Integer) 0);
                      if (succeeded)
                        succeeded = (NewIntNeedQual_43 == (MR_Integer) 0);
                      if (succeeded)
                        IntNeedQual_45 = (MR_Integer) 0;
                      else
                        IntNeedQual_45 = (MR_Integer) 1;
                      {
                        PermInt_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, PermInt_40, 0) = (MR_Box) ((MR_Unsigned) (IntNeedQual_45));
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word NewIntNeedQual_57 = ((MR_Unsigned) ((MR_hl_field(2, NewPermInt_38, 0))) & (MR_Integer) 1);
                      MR_Word IntNeedQual_59;

                      succeeded = (OldIntNeedQual_41 == (MR_Integer) 0);
                      if (succeeded)
                        succeeded = (NewIntNeedQual_57 == (MR_Integer) 0);
                      if (succeeded)
                        IntNeedQual_59 = (MR_Integer) 0;
                      else
                        IntNeedQual_59 = (MR_Integer) 1;
                      {
                        PermInt_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, PermInt_40, 0) = (MR_Box) ((MR_Unsigned) (IntNeedQual_59));
                      }
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word OldIntNeedQual_69 = ((MR_Unsigned) ((MR_hl_field(2, OldPermInt_36, 0))) & (MR_Integer) 1);

                switch (MR_tag((MR_Word) NewPermInt_38)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    PermInt_40 = OldPermInt_36;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word NewIntNeedQual_60 = ((MR_Unsigned) ((MR_hl_field(1, NewPermInt_38, 0))) & (MR_Integer) 1);
                      MR_Word IntNeedQual_62;

                      succeeded = (OldIntNeedQual_69 == (MR_Integer) 0);
                      if (succeeded)
                        succeeded = (NewIntNeedQual_60 == (MR_Integer) 0);
                      if (succeeded)
                        IntNeedQual_62 = (MR_Integer) 0;
                      else
                        IntNeedQual_62 = (MR_Integer) 1;
                      {
                        PermInt_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, PermInt_40, 0) = (MR_Box) ((MR_Unsigned) (IntNeedQual_62));
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word NewIntNeedQual_63 = ((MR_Unsigned) ((MR_hl_field(2, NewPermInt_38, 0))) & (MR_Integer) 1);
                      MR_Word IntNeedQual_65;

                      succeeded = (OldIntNeedQual_69 == (MR_Integer) 0);
                      if (succeeded)
                        succeeded = (NewIntNeedQual_63 == (MR_Integer) 0);
                      if (succeeded)
                        IntNeedQual_65 = (MR_Integer) 0;
                      else
                        IntNeedQual_65 = (MR_Integer) 1;
                      {
                        PermInt_40 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(2, PermInt_40, 0) = (MR_Box) ((MR_Unsigned) (IntNeedQual_65));
                      }
                    }
                    break;
                }
              }
              break;
          }
          OldImpNeedQual_46 = (MR_Word) (OldPermImp_37);
          NewImpNeedQual_47 = (MR_Word) (NewPermImp_39);
          succeeded = (OldImpNeedQual_46 == (MR_Integer) 0);
          if (succeeded)
            succeeded = (NewImpNeedQual_47 == (MR_Integer) 0);
          if (succeeded)
            ImpNeedQual_48 = (MR_Integer) 0;
          else
            ImpNeedQual_48 = (MR_Integer) 1;
          PermImp_49 = (MR_Word) (ImpNeedQual_48);
          succeeded = parse_tree__module_qual__id_set____Unify____perm_in_int_0_0(PermInt_40, OldPermInt_36);
          if (succeeded)
          {
            CastX_76 = (MR_Integer) (PermImp_49);
            CastY_77 = (MR_Integer) (OldPermImp_37);
            succeeded = (CastX_76 == CastY_77);
            if (succeeded)
              succeeded = MR_TRUE;
            else
            {
              MR_Word ArgX1_74 = (MR_Word) (PermImp_49);
              MR_Word ArgY1_75 = (MR_Word) (OldPermImp_37);

              succeeded = (ArgX1_74 == ArgY1_75);
            }
          }
          if (succeeded)
            PermissionsMap_17 = PermissionsMap0_16;
          else
          {
            MR_Word Permissions_50;

            {
              Permissions_50 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Permissions_50, 0) = ((MR_Box) (PermInt_40));
              MR_hl_field(0, Permissions_50, 1) = ((MR_Box) (PermImp_49));
            }
            mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0), ((MR_Box) (ModuleName_11)), ((MR_Box) (Permissions_50)), PermissionsMap0_16, &PermissionsMap_17);
          }
        }
        else
          mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0), ((MR_Box) (ModuleName_11)), ((MR_Box) (Permissions_5)), PermissionsMap0_16, &PermissionsMap_17);
        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&parse_tree__module_qual__id_set_scalar_common_1[0]), Arity_9, ((MR_Box) (PermissionsMap_17)), SubMap0_15, &SubMap_18);
        mercury__map__det_update_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__module_qual__id_set_scalar_common_1[1]), ((MR_Box) (BaseName_12)), ((MR_Box) (SubMap_18)), STATE_VARIABLE_IdSet_0_19, STATE_VARIABLE_IdSet_20);
      }
      else
      {
        MR_Word SubMap_26;

        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&parse_tree__module_qual__id_set_scalar_common_1[0]), Arity_9, ((MR_Box) (FreshPermissionsMap_13)), SubMap0_15, &SubMap_26);
        mercury__map__det_update_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__module_qual__id_set_scalar_common_1[1]), ((MR_Box) (BaseName_12)), ((MR_Box) (SubMap_26)), STATE_VARIABLE_IdSet_0_19, STATE_VARIABLE_IdSet_20);
      }
    }
  }
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.module_qual.id_set.id_set_insert\'/4", (MR_String) "unqualified id");
      return;
    }
}

MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____perm_in_int_0_0(
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
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
          MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

          succeeded = (CastY_8 == CastX_7);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, 0))) & (MR_Integer) 1);
          MR_Word ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 0))) & (MR_Integer) 1);
            succeeded = (ArgX1_3 == ArgY1_4);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgX1_5 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__1_1, 0))) & (MR_Integer) 1);
          MR_Word ArgY1_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__2_2, 0))) & (MR_Integer) 1);
            succeeded = (ArgX1_5 == ArgY1_6);
          }
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
parse_tree__module_qual__id_set__id_set_init_1_p_0(
  MR_Word * IdSet_2)
{
  mercury__map__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__module_qual__id_set_scalar_common_1[1]), IdSet_2);
}

static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____class_id_set_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__module_qual__id_set____Unify____class_id_set_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__module_qual__id_set____Compare____class_id_set_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__module_qual__id_set____Compare____class_id_set_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____id_set_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__module_qual__id_set____Unify____id_set_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__module_qual__id_set____Compare____id_set_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__module_qual__id_set____Compare____id_set_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____inst_id_set_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__module_qual__id_set____Unify____inst_id_set_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__module_qual__id_set____Compare____inst_id_set_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__module_qual__id_set____Compare____inst_id_set_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____maybe_warn_if_matching_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__module_qual__id_set____Unify____maybe_warn_if_matching_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__module_qual__id_set____Compare____maybe_warn_if_matching_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__module_qual__id_set____Compare____maybe_warn_if_matching_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____mode_id_set_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__module_qual__id_set____Unify____mode_id_set_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__module_qual__id_set____Compare____mode_id_set_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__module_qual__id_set____Compare____mode_id_set_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____module_id_set_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__module_qual__id_set____Unify____module_id_set_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__module_qual__id_set____Compare____module_id_set_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__module_qual__id_set____Compare____module_id_set_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____module_match_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__module_qual__id_set____Unify____module_match_type_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__module_qual__id_set____Compare____module_match_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__module_qual__id_set____Compare____module_match_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____module_permissions_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__module_qual__id_set____Unify____module_permissions_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__module_qual__id_set____Compare____module_permissions_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__module_qual__id_set____Compare____module_permissions_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____mq_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__module_qual__id_set____Unify____mq_id_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__module_qual__id_set____Compare____mq_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__module_qual__id_set____Compare____mq_id_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____mq_in_interface_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__module_qual__id_set____Unify____mq_in_interface_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__module_qual__id_set____Compare____mq_in_interface_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__module_qual__id_set____Compare____mq_in_interface_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____perm_in_imp_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__module_qual__id_set____Unify____perm_in_imp_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__module_qual__id_set____Compare____perm_in_imp_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__module_qual__id_set____Compare____perm_in_imp_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____perm_in_int_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__module_qual__id_set____Unify____perm_in_int_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__module_qual__id_set____Compare____perm_in_int_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__module_qual__id_set____Compare____perm_in_int_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____permissions_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__module_qual__id_set____Unify____permissions_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__module_qual__id_set____Compare____permissions_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__module_qual__id_set____Compare____permissions_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____qual_id_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__module_qual__id_set____Unify____qual_id_kind_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__module_qual__id_set____Compare____qual_id_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__module_qual__id_set____Compare____qual_id_kind_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__module_qual__id_set____Unify____type_id_set_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__module_qual__id_set____Unify____type_id_set_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__module_qual__id_set____Compare____type_id_set_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__module_qual__id_set____Compare____type_id_set_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__parse_tree__module_qual__id_set__init(void)
{
}

void mercury__parse_tree__module_qual__id_set__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_class_id_set_0);
  MR_register_type_ctor_info(&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_id_set_0);
  MR_register_type_ctor_info(&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_inst_id_set_0);
  MR_register_type_ctor_info(&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_maybe_warn_if_matching_0);
  MR_register_type_ctor_info(&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mode_id_set_0);
  MR_register_type_ctor_info(&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_id_set_0);
  MR_register_type_ctor_info(&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_match_type_0);
  MR_register_type_ctor_info(&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0);
  MR_register_type_ctor_info(&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0);
  MR_register_type_ctor_info(&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_in_interface_0);
  MR_register_type_ctor_info(&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_perm_in_imp_0);
  MR_register_type_ctor_info(&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_perm_in_int_0);
  MR_register_type_ctor_info(&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_permissions_map_0);
  MR_register_type_ctor_info(&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_qual_id_kind_0);
  MR_register_type_ctor_info(&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_type_id_set_0);
}

void mercury__parse_tree__module_qual__id_set__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__module_qual__id_set__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module parse_tree.module_qual.id_set.
