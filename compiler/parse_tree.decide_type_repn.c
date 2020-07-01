/*
** Automatically generated from `decide_type_repn.m'
** by the Mercury compiler,
** version rotd-2020-07-01
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


// :- module parse_tree.decide_type_repn.
// :- implementation.

/*
INIT mercury__parse_tree__decide_type_repn__init
ENDINIT
*/

#include "parse_tree.decide_type_repn.mih"


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
#include "recompilation.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "uint.mih"
#include "uint8.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.check_parse_tree_type_defns.mih"
#include "parse_tree.equiv_type.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_type_repn.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_TypeInfo_Struct1 parse_tree__decide_type_repn__parse_tree__prog_item__ti_item_type_repn_info_general_1parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__decide_type_repn__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__ti_item_type_repn_info_general_1parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__decide_type_repn__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__decide_type_repn__type_ctor_info_simple_du_repn_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__decide_type_repn__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__decide_type_repn__parse_tree__prog_item__pti_item_type_repn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__decide_type_repn__parse_tree__prog_item__ti_item_type_repn_info_general_1parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__decide_type_repn__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__ti_item_type_repn_info_general_1parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__decide_type_repn__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__decide_type_repn__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__decide_type_repn__parse_tree__prog_item__pti_item_type_repn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0;

static const MR_PseudoTypeInfo parse_tree__decide_type_repn__parse_tree__decide_type_repn__field_types_arg_class_0_0[1];

static const MR_DuFunctorDesc parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_functor_desc_arg_class_0_0;

static const MR_DuFunctorDesc parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_functor_desc_arg_class_0_1;

static const MR_DuFunctorDesc parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_functor_desc_arg_class_0_2;

static const MR_PseudoTypeInfo parse_tree__decide_type_repn__parse_tree__decide_type_repn__field_types_arg_class_0_3[1];

static const MR_DuArgLocn parse_tree__decide_type_repn__parse_tree__decide_type_repn__field_locns_arg_class_0_3[1];

static const MR_DuFunctorDesc parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_functor_desc_arg_class_0_3;

static const MR_DuFunctorDescPtr parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_stag_ordered_arg_class_0_0[2];

static const MR_DuFunctorDescPtr parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_stag_ordered_arg_class_0_1[1];

static const MR_DuFunctorDescPtr parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_stag_ordered_arg_class_0_2[1];

static const MR_DuPtagLayout parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_ptag_ordered_arg_class_0[3];

static const MR_DuFunctorDescPtr parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_name_ordered_arg_class_0[4];

static const MR_Integer parse_tree__decide_type_repn__parse_tree__decide_type_repn__functor_number_map_arg_class_0[4];

static const MR_PseudoTypeInfo parse_tree__decide_type_repn__parse_tree__decide_type_repn__field_types_arg_pack_class_0_0[1];

static const MR_DuFunctorDesc parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_functor_desc_arg_pack_class_0_0;

static const MR_DuFunctorDesc parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_functor_desc_arg_pack_class_0_1;

static const MR_DuFunctorDescPtr parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_stag_ordered_arg_pack_class_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_stag_ordered_arg_pack_class_0_1[1];

static const MR_DuPtagLayout parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_ptag_ordered_arg_pack_class_0[2];

static const MR_DuFunctorDescPtr parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_name_ordered_arg_pack_class_0[2];

static const MR_Integer parse_tree__decide_type_repn__parse_tree__decide_type_repn__functor_number_map_arg_pack_class_0[2];

static const MR_PseudoTypeInfo parse_tree__decide_type_repn__parse_tree__decide_type_repn__field_types_base_params_0_0[6];

static const MR_ConstString parse_tree__decide_type_repn__parse_tree__decide_type_repn__field_names_base_params_0_0[6];

static const MR_DuArgLocn parse_tree__decide_type_repn__parse_tree__decide_type_repn__field_locns_base_params_0_0[6];

static const MR_DuFunctorDesc parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_functor_desc_base_params_0_0;

static const MR_DuFunctorDescPtr parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_stag_ordered_base_params_0_0[1];

static const MR_DuPtagLayout parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_ptag_ordered_base_params_0[1];

static const MR_DuFunctorDescPtr parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_name_ordered_base_params_0[1];

static const MR_Integer parse_tree__decide_type_repn__parse_tree__decide_type_repn__functor_number_map_base_params_0[1];

static const MR_PseudoTypeInfo parse_tree__decide_type_repn__parse_tree__decide_type_repn__field_types_classified_arg_0_0[2];

static const MR_DuFunctorDesc parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_functor_desc_classified_arg_0_0;

static const MR_DuFunctorDescPtr parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_stag_ordered_classified_arg_0_0[1];

static const MR_DuPtagLayout parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_ptag_ordered_classified_arg_0[1];

static const MR_DuFunctorDescPtr parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_name_ordered_classified_arg_0[1];

static const MR_Integer parse_tree__decide_type_repn__parse_tree__decide_type_repn__functor_number_map_classified_arg_0[1];

static const MR_FA_TypeInfo_Struct1 parse_tree__decide_type_repn__list__ti_list_1parse_tree__decide_type_repn__type_ctor_info_classified_arg_0;

static const MR_PseudoTypeInfo parse_tree__decide_type_repn__parse_tree__decide_type_repn__field_types_classified_constructor_0_0[2];

static const MR_DuFunctorDesc parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_functor_desc_classified_constructor_0_0;

static const MR_DuFunctorDescPtr parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_stag_ordered_classified_constructor_0_0[1];

static const MR_DuPtagLayout parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_ptag_ordered_classified_constructor_0[1];

static const MR_DuFunctorDescPtr parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_name_ordered_classified_constructor_0[1];

static const MR_Integer parse_tree__decide_type_repn__parse_tree__decide_type_repn__functor_number_map_classified_constructor_0[1];

static const MR_PseudoTypeInfo parse_tree__decide_type_repn__parse_tree__decide_type_repn__field_types_ctor_repn_0_0[1];

static const MR_DuFunctorDesc parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_functor_desc_ctor_repn_0_0;

static const MR_PseudoTypeInfo parse_tree__decide_type_repn__parse_tree__decide_type_repn__field_types_ctor_repn_0_1[1];

static const MR_DuFunctorDesc parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_functor_desc_ctor_repn_0_1;

static const MR_DuFunctorDescPtr parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_stag_ordered_ctor_repn_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_stag_ordered_ctor_repn_0_1[1];

static const MR_DuPtagLayout parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_ptag_ordered_ctor_repn_0[2];

static const MR_DuFunctorDescPtr parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_name_ordered_ctor_repn_0[2];

static const MR_Integer parse_tree__decide_type_repn__parse_tree__decide_type_repn__functor_number_map_ctor_repn_0[2];

static const MR_FA_TypeInfo_Struct2 parse_tree__decide_type_repn__tree234__ti_tree234_2builtin__type_ctor_info_uint32_0parse_tree__decide_type_repn__type_ctor_info_ctor_repn_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__decide_type_repn__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__prog_item__ti_item_type_repn_info_general_1parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_EnumFunctorDesc parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_functor_desc_maybe_direct_args_0_0;

static const MR_EnumFunctorDesc parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_functor_desc_maybe_direct_args_0_1;

static const MR_EnumFunctorDescPtr parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_value_ordered_maybe_direct_args_0[2];

static const MR_EnumFunctorDescPtr parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_name_ordered_maybe_direct_args_0[2];

static const MR_Integer parse_tree__decide_type_repn__parse_tree__decide_type_repn__functor_number_map_maybe_direct_args_0[2];

static const MR_EnumFunctorDesc parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_functor_desc_maybe_double_word_floats_0_0;

static const MR_EnumFunctorDesc parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_functor_desc_maybe_double_word_floats_0_1;

static const MR_EnumFunctorDescPtr parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_value_ordered_maybe_double_word_floats_0[2];

static const MR_EnumFunctorDescPtr parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_name_ordered_maybe_double_word_floats_0[2];

static const MR_Integer parse_tree__decide_type_repn__parse_tree__decide_type_repn__functor_number_map_maybe_double_word_floats_0[2];

static const MR_EnumFunctorDesc parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_functor_desc_maybe_double_word_int64s_0_0;

static const MR_EnumFunctorDesc parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_functor_desc_maybe_double_word_int64s_0_1;

static const MR_EnumFunctorDescPtr parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_value_ordered_maybe_double_word_int64s_0[2];

static const MR_EnumFunctorDescPtr parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_name_ordered_maybe_double_word_int64s_0[2];

static const MR_Integer parse_tree__decide_type_repn__parse_tree__decide_type_repn__functor_number_map_maybe_double_word_int64s_0[2];

static const MR_EnumFunctorDesc parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_functor_desc_maybe_treat_as_first_arg_0_0;

static const MR_EnumFunctorDesc parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_functor_desc_maybe_treat_as_first_arg_0_1;

static const MR_EnumFunctorDescPtr parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_value_ordered_maybe_treat_as_first_arg_0[2];

static const MR_EnumFunctorDescPtr parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_name_ordered_maybe_treat_as_first_arg_0[2];

static const MR_Integer parse_tree__decide_type_repn__parse_tree__decide_type_repn__functor_number_map_maybe_treat_as_first_arg_0[2];

static const MR_EnumFunctorDesc parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_functor_desc_must_mask_remote_sectag_0_0;

static const MR_EnumFunctorDesc parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_functor_desc_must_mask_remote_sectag_0_1;

static const MR_EnumFunctorDescPtr parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_value_ordered_must_mask_remote_sectag_0[2];

static const MR_EnumFunctorDescPtr parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_name_ordered_must_mask_remote_sectag_0[2];

static const MR_Integer parse_tree__decide_type_repn__parse_tree__decide_type_repn__functor_number_map_must_mask_remote_sectag_0[2];

static const MR_PseudoTypeInfo parse_tree__decide_type_repn__parse_tree__decide_type_repn__field_types_packable_arg_0_0[2];

static const MR_DuFunctorDesc parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_functor_desc_packable_arg_0_0;

static const MR_DuFunctorDescPtr parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_stag_ordered_packable_arg_0_0[1];

static const MR_DuPtagLayout parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_ptag_ordered_packable_arg_0[1];

static const MR_DuFunctorDescPtr parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_name_ordered_packable_arg_0[1];

static const MR_Integer parse_tree__decide_type_repn__parse_tree__decide_type_repn__functor_number_map_packable_arg_0[1];

static const MR_FA_TypeInfo_Struct1 parse_tree__decide_type_repn__list__ti_list_1parse_tree__decide_type_repn__type_ctor_info_packable_arg_0;

static const MR_PseudoTypeInfo parse_tree__decide_type_repn__parse_tree__decide_type_repn__field_types_packable_constructor_0_0[3];

static const MR_ConstString parse_tree__decide_type_repn__parse_tree__decide_type_repn__field_names_packable_constructor_0_0[3];

static const MR_DuFunctorDesc parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_functor_desc_packable_constructor_0_0;

static const MR_DuFunctorDescPtr parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_stag_ordered_packable_constructor_0_0[1];

static const MR_DuPtagLayout parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_ptag_ordered_packable_constructor_0[1];

static const MR_DuFunctorDescPtr parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_name_ordered_packable_constructor_0[1];

static const MR_Integer parse_tree__decide_type_repn__parse_tree__decide_type_repn__functor_number_map_packable_constructor_0[1];

static const MR_PseudoTypeInfo parse_tree__decide_type_repn__parse_tree__decide_type_repn__field_types_platform_params_0_0[4];

static const MR_ConstString parse_tree__decide_type_repn__parse_tree__decide_type_repn__field_names_platform_params_0_0[4];

static const MR_DuArgLocn parse_tree__decide_type_repn__parse_tree__decide_type_repn__field_locns_platform_params_0_0[4];

static const MR_DuFunctorDesc parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_functor_desc_platform_params_0_0;

static const MR_DuFunctorDescPtr parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_stag_ordered_platform_params_0_0[1];

static const MR_DuPtagLayout parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_ptag_ordered_platform_params_0[1];

static const MR_DuFunctorDescPtr parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_name_ordered_platform_params_0[1];

static const MR_Integer parse_tree__decide_type_repn__parse_tree__decide_type_repn__functor_number_map_platform_params_0[1];

static const MR_FA_TypeInfo_Struct1 parse_tree__decide_type_repn__one_or_more__ti_one_or_more_1parse_tree__prog_item__type_ctor_info_remote_arg_repn_0;

static const MR_PseudoTypeInfo parse_tree__decide_type_repn__parse_tree__decide_type_repn__field_types_remote_shared_info_0_0[3];

static const MR_ConstString parse_tree__decide_type_repn__parse_tree__decide_type_repn__field_names_remote_shared_info_0_0[3];

static const MR_DuFunctorDesc parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_functor_desc_remote_shared_info_0_0;

static const MR_DuFunctorDescPtr parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_stag_ordered_remote_shared_info_0_0[1];

static const MR_DuPtagLayout parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_ptag_ordered_remote_shared_info_0[1];

static const MR_DuFunctorDescPtr parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_name_ordered_remote_shared_info_0[1];

static const MR_Integer parse_tree__decide_type_repn__parse_tree__decide_type_repn__functor_number_map_remote_shared_info_0[1];

static const MR_FA_TypeInfo_Struct2 parse_tree__decide_type_repn__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__decide_type_repn__type_ctor_info_simple_du_repn_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__decide_type_repn__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__decide_type_repn__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__decide_type_repn__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_PseudoTypeInfo parse_tree__decide_type_repn__parse_tree__decide_type_repn__field_types_simple_du_repn_0_0[3];

static const MR_DuFunctorDesc parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_functor_desc_simple_du_repn_0_0;

static const MR_PseudoTypeInfo parse_tree__decide_type_repn__parse_tree__decide_type_repn__field_types_simple_du_repn_0_1[3];

static const MR_DuFunctorDesc parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_functor_desc_simple_du_repn_0_1;

static const MR_PseudoTypeInfo parse_tree__decide_type_repn__parse_tree__decide_type_repn__field_types_simple_du_repn_0_2[3];

static const MR_DuFunctorDesc parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_functor_desc_simple_du_repn_0_2;

static const MR_DuFunctorDescPtr parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_stag_ordered_simple_du_repn_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_stag_ordered_simple_du_repn_0_1[1];

static const MR_DuFunctorDescPtr parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_stag_ordered_simple_du_repn_0_2[1];

static const MR_DuPtagLayout parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_ptag_ordered_simple_du_repn_0[3];

static const MR_DuFunctorDescPtr parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_name_ordered_simple_du_repn_0[3];

static const MR_Integer parse_tree__decide_type_repn__parse_tree__decide_type_repn__functor_number_map_simple_du_repn_0[3];

static const MR_FA_TypeInfo_Struct1 parse_tree__decide_type_repn__set_tree234__ti_set_tree234_1parse_tree__prog_data__type_ctor_info_type_ctor_0;

static const MR_EnumFunctorDesc parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_functor_desc_word_size_0_0;

static const MR_EnumFunctorDesc parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_functor_desc_word_size_0_1;

static const MR_EnumFunctorDescPtr parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_value_ordered_word_size_0[2];

static const MR_EnumFunctorDescPtr parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_name_ordered_word_size_0[2];

static const MR_Integer parse_tree__decide_type_repn__parse_tree__decide_type_repn__functor_number_map_word_size_0[2];

static MR_bool MR_CALL 
parse_tree__decide_type_repn__IntroducedFrom__pred__separate_out_constants__2330__1_2_p_0(
  MR_Word HeadVar__1_25,
  MR_Word HeadVar__2_27);

static MR_bool MR_CALL 
parse_tree__decide_type_repn__IntroducedFrom__pred__assign_repns_to_direct_arg_functors__1468__1_2_p_0(
  MR_Integer NumArgs_30,
  MR_Integer HeadVar__2_45);

static MR_bool MR_CALL 
parse_tree__decide_type_repn__IntroducedFrom__pred__assign_repns_to_local_packed_functors__1445__1_2_p_0(
  MR_Unsigned NextShift_32,
  MR_Unsigned HeadVar__2_46);

static MR_bool MR_CALL 
parse_tree__decide_type_repn__IntroducedFrom__pred__assign_repns_to_local_packed_functors__1438__1_2_p_0(
  MR_Integer NumArgs_26,
  MR_Integer HeadVar__2_42);

static MR_bool MR_CALL 
parse_tree__decide_type_repn__IntroducedFrom__pred__assign_repns_to_constants__1420__1_2_p_0(
  MR_Integer NumArgs_23,
  MR_Integer HeadVar__2_33);

static MR_Word MR_CALL 
parse_tree__decide_type_repn__IntroducedFrom__func__look_up_functor_repns__1384__1_1_f_0(
  MR_Word LambdaHeadVar__1_50);

static MR_Word MR_CALL 
parse_tree__decide_type_repn__IntroducedFrom__func__decide_type_repns_stage_2_du_gen_only_functor__816__1_1_f_0(
  MR_Word LambdaHeadVar__1_56);

static MR_bool MR_CALL 
parse_tree__decide_type_repn__IntroducedFrom__pred__decide_type_repns_stage_2_du_gen__757__1_2_p_0(
  MR_Integer Arity_29,
  MR_Integer NumTypeParams_30);

static MR_bool MR_CALL 
parse_tree__decide_type_repn__IntroducedFrom__pred__decide_type_repns_stage_2_du_gen__756__1_2_p_0(
  MR_Word TypeCtorSymName_22,
  MR_Word SymName_28);

static MR_bool MR_CALL 
parse_tree__decide_type_repn__IntroducedFrom__pred__record_type_repn_in_parse_tree_int3__670__1_2_p_0(
  MR_Word TypeCtor_25,
  MR_Word RepnTypeCtor_36);

static void MR_CALL 
parse_tree__decide_type_repn____Compare____word_size_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____word_size_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__decide_type_repn____Compare____word_aligned_type_ctors_c_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____word_aligned_type_ctors_c_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__decide_type_repn____Compare____simple_du_repn_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____simple_du_repn_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__decide_type_repn____Compare____simple_du_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____simple_du_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__decide_type_repn____Compare____remote_shared_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____remote_shared_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__decide_type_repn____Compare____platform_params_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____platform_params_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__decide_type_repn____Compare____packable_constructor_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____packable_constructor_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__decide_type_repn____Compare____packable_arg_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____packable_arg_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__decide_type_repn____Compare____must_mask_remote_sectag_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____must_mask_remote_sectag_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__decide_type_repn____Compare____maybe_treat_as_first_arg_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____maybe_treat_as_first_arg_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__decide_type_repn____Compare____maybe_double_word_int64s_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____maybe_double_word_int64s_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__decide_type_repn____Compare____maybe_double_word_floats_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____maybe_double_word_floats_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__decide_type_repn____Compare____maybe_direct_args_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____maybe_direct_args_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__decide_type_repn____Compare____eqv_repn_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____eqv_repn_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__decide_type_repn____Compare____ctor_repn_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____ctor_repn_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__decide_type_repn____Compare____ctor_repn_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____ctor_repn_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__decide_type_repn____Compare____classified_constructor_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____classified_constructor_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__decide_type_repn____Compare____classified_arg_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____classified_arg_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__decide_type_repn____Compare____base_params_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____base_params_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__decide_type_repn____Compare____arg_pack_class_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____arg_pack_class_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__decide_type_repn____Compare____arg_class_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____arg_class_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
parse_tree__decide_type_repn__is_direct_arg_ctor_for_c_2_p_0(
  MR_Word WordAlignedTypeCtorsC_3,
  MR_Word ClassifiedCtor_4);

static void MR_CALL 
parse_tree__decide_type_repn__compare_packable_ctors_by_ordinal_3_p_0(
  MR_Word PackableCtorA_4,
  MR_Word PackableCtorB_5,
  MR_Word * Result_6);

static void MR_CALL 
parse_tree__decide_type_repn__compare_packable_ctors_by_numbits_then_ordinal_3_p_0(
  MR_Word PackableCtorA_4,
  MR_Word PackableCtorB_5,
  MR_Word * Result_6);

static MR_Word MR_CALL 
parse_tree__decide_type_repn__packable_to_classified_arg_1_f_0(
  MR_Word PackableArg_3);

static MR_Box MR_CALL 
parse_tree__decide_type_repn__packable_to_classified_constructor_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
parse_tree__decide_type_repn__packable_to_classified_constructor_1_f_0(
  MR_Word PackableCtor_3);

static void MR_CALL 
parse_tree__decide_type_repn__decide_all_type_repns_stage_2_11_p_0(
  MR_Word BaseParams_12,
  MR_Word EqvRepnMap_13,
  MR_Word EqvMap_14,
  MR_Word WordAlignedTypeCtorsC_15,
  MR_Word SimpleDuMap_16,
  MR_Word TypeCtor_17,
  MR_Word CheckedDefn_18,
  MR_Word STATE_VARIABLE_Int1RepnMap_0_46,
  MR_Word * STATE_VARIABLE_Int1RepnMap_47,
  MR_Word STATE_VARIABLE_Specs_0_48,
  MR_Word * STATE_VARIABLE_Specs_49);

static MR_bool MR_CALL 
parse_tree__decide_type_repn__decide_type_repns_stage_2_du_gen_11_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
parse_tree__decide_type_repn__decide_type_repns_stage_2_du_gen_11_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
parse_tree__decide_type_repn__decide_type_repns_stage_2_du_gen_11_p_0(
  MR_Word BaseParams_12,
  MR_Word EqvMap_13,
  MR_Word WordAlignedTypeCtorsC_14,
  MR_Word SimpleDuMap_15,
  MR_Word TypeCtor_16,
  MR_Word DuDefn_17,
  MR_Word MaybeDefnCJCsE_18,
  MR_Word STATE_VARIABLE_Int1RepnMap_0_40,
  MR_Word * STATE_VARIABLE_Int1RepnMap_41,
  MR_Word STATE_VARIABLE_Specs_0_42,
  MR_Word * STATE_VARIABLE_Specs_43);

static void MR_CALL 
parse_tree__decide_type_repn__expand_eqv_cnotag_types_in_constructors_7_p_0(
  MR_Word EqvMap_1,
  MR_Word SimpleDuMap_2,
  MR_Word TVarSet_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_Specs_0_6,
  MR_Word * STATE_VARIABLE_Specs_7);

static void MR_CALL 
parse_tree__decide_type_repn__expand_eqv_cnotag_types_in_constructor_args_9_p_0(
  MR_Word TypeEqvMap_1,
  MR_Word SimpleDuMap_2,
  MR_Word TVarSet_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_Changed_0_6,
  MR_Word * STATE_VARIABLE_Changed_7,
  MR_Word STATE_VARIABLE_Specs_0_8,
  MR_Word * STATE_VARIABLE_Specs_9);

static void MR_CALL 
parse_tree__decide_type_repn__expand_eqv_cnotag_type_fixpoint_10_p_0(
  MR_Word TypeEqvMap_11,
  MR_Word SimpleDuMap_12,
  MR_Word TVarSet0_13,
  MR_Word Context_14,
  MR_Integer IterationsLeft_15,
  MR_Word Type0_16,
  MR_Word * Type_17,
  MR_Word * Changed_18,
  MR_Word STATE_VARIABLE_Specs_0_39,
  MR_Word * STATE_VARIABLE_Specs_40);

static void MR_CALL 
parse_tree__decide_type_repn__decide_type_repns_stage_2_du_gen_more_functors_10_p_0(
  MR_Word BaseParams_11,
  MR_Word WordAlignedTypeCtorsC_12,
  MR_Word SimpleDuMap_13,
  MR_Word TypeCtor_14,
  MR_Word TypeParams_15,
  MR_Word TVarSet_16,
  MR_Word Ctors_17,
  MR_Word RepnCJCsE_18,
  MR_Word STATE_VARIABLE_Int1RepnMap_0_42,
  MR_Word * STATE_VARIABLE_Int1RepnMap_43);

static MR_Box MR_CALL 
parse_tree__decide_type_repn__look_up_functor_repns_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__decide_type_repn__look_up_functor_repns_8_p_0(
  MR_Word RepnMap64NoSpfNoDa_1,
  MR_Word RepnMap64NoSpfDa_2,
  MR_Word RepnMap32NoSpfNoDa_3,
  MR_Word RepnMap32NoSpfDa_4,
  MR_Word RepnMap32SpfNoDa_5,
  MR_Word RepnMap32SpfDa_6,
  MR_Word HeadVar__7_7,
  MR_Word * HeadVar__8_8);

static MR_Word MR_CALL 
parse_tree__decide_type_repn__make_c_repns_6_f_0(
  MR_Word TypeInfo_for_T_15,
  MR_Box Repn64NoSpfNoDa_8,
  MR_Box Repn64NoSpfDa_9,
  MR_Box Repn32NoSpfNoDa_10,
  MR_Box Repn32NoSpfDa_11,
  MR_Box Repn32SpfNoDa_12,
  MR_Box Repn32SpfDa_13);

static MR_Word MR_CALL 
parse_tree__decide_type_repn__get_nonconstant_repn_1_f_0(
  MR_Word HeadVar__1_1);

static MR_Word MR_CALL 
parse_tree__decide_type_repn__get_constant_repn_1_f_0(
  MR_Word HeadVar__1_1);

static MR_bool MR_CALL 
parse_tree__decide_type_repn__decide_gen_du_functors_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__decide_type_repn__decide_gen_du_functors_5_p_0(
  MR_Word PlatformParams_6,
  MR_Word WordAlignedTypeCtorsC_7,
  MR_Word SimpleDuMap_8,
  MR_Word Ctors_9,
  MR_Word * STATE_VARIABLE_RepnMap_41);

static void MR_CALL 
parse_tree__decide_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_108_111_99_97_108_95_112_97_99_107_97_98_108_101_95_102_117_110_99_116_111_114_115_95_95_91_50_93_95_48_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__decide_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_108_111_99_97_108_95_112_97_99_107_97_98_108_101_95_102_117_110_99_116_111_114_115_95_95_91_50_93_95_48_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__decide_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_108_111_99_97_108_95_112_97_99_107_97_98_108_101_95_102_117_110_99_116_111_114_115_95_95_91_50_93_95_48_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__decide_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_108_111_99_97_108_95_112_97_99_107_97_98_108_101_95_102_117_110_99_116_111_114_115_95_95_91_50_93_95_48_6_p_0(
  MR_Word PlatformParams_7,
  MR_Integer NumConstants_9,
  MR_Word Functors_10,
  MR_Word * PackedFunctors_11,
  MR_Word * NonPackedFunctors_12);

static void MR_CALL 
parse_tree__decide_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_97_114_97_116_101_95_111_117_116_95_108_111_99_97_108_95_115_101_99_116_97_103_95_112_97_99_107_97_98_108_101_95_95_91_49_44_32_51_93_95_48_6_p_0(
  MR_Unsigned Limit_2,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6);

static void MR_CALL 
parse_tree__decide_type_repn__num_bits_needed_for_n_things_2_p_0(
  MR_Integer NumSharers_3,
  MR_Unsigned * NumBits_4);

static void MR_CALL 
parse_tree__decide_type_repn__take_local_packable_functors_incr_sectag_bits_7_p_0(
  MR_Unsigned NumWordBits_8,
  MR_Unsigned NumPtagBits_9,
  MR_Unsigned NumSectagBits0_10,
  MR_Word RevPackedFunctors0_11,
  MR_Word NonPackedFunctors0_12,
  MR_Word * RevPackedFunctors_13,
  MR_Word * NonPackedFunctors_14);

static void MR_CALL 
parse_tree__decide_type_repn__take_local_packable_functors_constant_sectag_bits_10_p_0(
  MR_Unsigned NumWordBits_1,
  MR_Unsigned PtagBits_2,
  MR_Unsigned SectagBits_3,
  MR_Integer TakeLimit_4,
  MR_Integer STATE_VARIABLE_NumTaken_0_5,
  MR_Integer * STATE_VARIABLE_NumTaken_6,
  MR_Word HeadVar__7_7,
  MR_Word STATE_VARIABLE_RevPackedFunctors_0_8,
  MR_Word * STATE_VARIABLE_RevPackedFunctors_9,
  MR_Word * HeadVar__10_10);

static void MR_CALL 
parse_tree__decide_type_repn__num_bits_needed_for_n_things_loop_3_p_0(
  MR_Integer N_4,
  MR_Integer NumBits0_5,
  MR_Integer * NumBits_6);

static MR_bool MR_CALL 
parse_tree__decide_type_repn__separate_out_constants_5_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
parse_tree__decide_type_repn__separate_out_constants_5_p_0(
  MR_Word PlatformParams_1,
  MR_Word SimpleDuMap_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5);

static void MR_CALL 
parse_tree__decide_type_repn__add_remote_shared_functors_to_repn_map_5_p_0(
  MR_Word Ptag_1,
  MR_Word SectagSize_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_RepnMap_0_4,
  MR_Word * STATE_VARIABLE_RepnMap_5);

static void MR_CALL 
parse_tree__decide_type_repn__assign_repns_to_remote_shared_7_p_0(
  MR_Word PlatformParams_1,
  MR_Unsigned NumRemoteSectagBits_2,
  MR_Unsigned STATE_VARIABLE_CurRemoteSectag_0_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_MustMask_0_6,
  MR_Word * STATE_VARIABLE_MustMask_7);

static MR_Word MR_CALL 
parse_tree__decide_type_repn__remote_sectag_is_shared_with_args_1_f_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
parse_tree__decide_type_repn__assign_repns_to_remote_unshared_7_p_0(
  MR_Word PlatformParams_1,
  uint8_t MaxPtagUint8_2,
  uint8_t STATE_VARIABLE_CurPtagUint8_0_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_RepnMap_0_6,
  MR_Word * STATE_VARIABLE_RepnMap_7);

static MR_bool MR_CALL 
parse_tree__decide_type_repn__assign_repns_to_direct_arg_functors_8_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
parse_tree__decide_type_repn__assign_repns_to_direct_arg_functors_8_p_0(
  uint8_t MaxPtagUint8_1,
  uint8_t HeadVar__2_2,
  uint8_t * HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word ClassifiedNonDirectArgCtors_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_RepnMap_0_7,
  MR_Word * STATE_VARIABLE_RepnMap_8);

static MR_bool MR_CALL 
parse_tree__decide_type_repn__assign_repns_to_local_packed_functors_6_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
parse_tree__decide_type_repn__assign_repns_to_local_packed_functors_6_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
parse_tree__decide_type_repn__assign_repns_to_local_packed_functors_6_p_0(
  MR_Word PlatformParams_1,
  MR_Unsigned NumLocalSectagBits_2,
  MR_Unsigned STATE_VARIABLE_CurSectag_0_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_RepnMap_0_5,
  MR_Word * STATE_VARIABLE_RepnMap_6);

static MR_bool MR_CALL 
parse_tree__decide_type_repn__assign_repns_to_constants_6_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
parse_tree__decide_type_repn__assign_repns_to_constants_6_p_0(
  MR_Word SectagSize_1,
  MR_Unsigned STATE_VARIABLE_CurSectag_0_2,
  MR_Unsigned * STATE_VARIABLE_CurSectag_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_RepnMap_0_5,
  MR_Word * STATE_VARIABLE_RepnMap_6);

static MR_Box MR_CALL 
parse_tree__decide_type_repn__decide_type_repns_stage_2_du_gen_only_functor_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__decide_type_repn__decide_type_repns_stage_2_du_gen_only_functor_10_p_0(
  MR_Word BaseParams_11,
  MR_Word SimpleDuMap_12,
  MR_Word TypeCtor_13,
  MR_Word TypeParams_14,
  MR_Word TVarSet_15,
  MR_Word MaybeCanonical_16,
  MR_Word SingleCtor_17,
  MR_Word RepnCJCsE_18,
  MR_Word STATE_VARIABLE_Int1RepnMap_0_43,
  MR_Word * STATE_VARIABLE_Int1RepnMap_44);

static MR_bool MR_CALL 
parse_tree__decide_type_repn__decide_complex_du_only_functor_5_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
parse_tree__decide_type_repn__decide_complex_du_only_functor_5_p_0(
  MR_Word PlatformParams_6,
  MR_Word SimpleDuMap_7,
  MR_Word MaybeExistConstraints_8,
  MR_Word Args_9,
  MR_Word * NonConstantRepn_10);

static MR_bool MR_CALL 
parse_tree__decide_type_repn__are_all_args_packable_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Unsigned STATE_VARIABLE_NumBits_0_3,
  MR_Unsigned * STATE_VARIABLE_NumBits_4);

static void MR_CALL 
parse_tree__decide_type_repn__classify_args_4_p_0(
  MR_Word PlatformParams_1,
  MR_Word SimpleDuMap_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
parse_tree__decide_type_repn__classify_arg_type_4_p_0(
  MR_Word PlatformParams_5,
  MR_Word SimpleDuMap_6,
  MR_Word ArgType_7,
  MR_Word * Class_8);

static void MR_CALL 
parse_tree__decide_type_repn__decide_local_packed_arg_word_loop_4_p_0(
  MR_Unsigned NumPrefixBits_1,
  MR_Unsigned * NextShift_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
parse_tree__decide_type_repn__decide_remote_args_5_p_0(
  MR_Word PlatformParams_6,
  MR_Unsigned NumRemoteSectagBits_7,
  MR_Word MaybeExistConstraints_8,
  MR_Word MaybePackableArgs_9,
  MR_Word * ArgRepns_10);

static void MR_CALL 
parse_tree__decide_type_repn__find_initial_packable_args_within_limit_6_p_0(
  MR_Unsigned Limit_1,
  MR_Unsigned STATE_VARIABLE_NumBits_0_2,
  MR_Unsigned * STATE_VARIABLE_NumBits_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6);

static void MR_CALL 
parse_tree__decide_type_repn__decide_remote_arg_words_loop_5_p_0(
  MR_Word PlatformParams_1,
  MR_Integer CurAOWordNum_2,
  MR_Integer CurCellWordNum_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5);

static void MR_CALL 
parse_tree__decide_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_119_111_114_100_95_112_97_99_107_97_98_108_101_95_97_114_103_115_95_95_91_49_93_95_48_7_p_0(
  MR_Unsigned NumAvailBits_2,
  MR_Unsigned HeadVar__3_3,
  MR_Unsigned * NumUsedBits_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7);

static void MR_CALL 
parse_tree__decide_type_repn__decide_remote_packed_arg_word_loop_7_p_0(
  MR_Word TreatAsFirst_1,
  MR_Word ArgOnlyOffset_2,
  MR_Word CellOffset_3,
  MR_Unsigned NumPrefixBits_4,
  MR_Unsigned * NextShift_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7);

static MR_bool MR_CALL 
parse_tree__decide_type_repn__record_type_repn_in_parse_tree_int3_9_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
parse_tree__decide_type_repn__record_type_repn_in_parse_tree_int3_9_p_0(
  MR_Word ModuleName_10,
  MR_Word TypeCtor0_11,
  MR_Word ItemTypeRepnInfo_12,
  MR_Word STATE_VARIABLE_EqvRepnMap_0_39,
  MR_Word * STATE_VARIABLE_EqvRepnMap_40,
  MR_Word STATE_VARIABLE_SimpleDuMap_0_41,
  MR_Word * STATE_VARIABLE_SimpleDuMap_42,
  MR_Word STATE_VARIABLE_WordAlignedTypeCtorsC_0_43,
  MR_Word * STATE_VARIABLE_WordAlignedTypeCtorsC_44);

static void MR_CALL 
parse_tree__decide_type_repn__record_type_repns_in_indirect_int_spec_7_p_0_1(
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
parse_tree__decide_type_repn__record_type_repns_in_indirect_int_spec_7_p_0(
  MR_Word IndirectIntSpec_8,
  MR_Word STATE_VARIABLE_SimpleDuMap_0_16,
  MR_Word * STATE_VARIABLE_SimpleDuMap_17,
  MR_Word STATE_VARIABLE_EqvRepnMap_0_18,
  MR_Word * STATE_VARIABLE_EqvRepnMap_19,
  MR_Word STATE_VARIABLE_WordAlignedTypeCtorsC_0_20,
  MR_Word * STATE_VARIABLE_WordAlignedTypeCtorsC_21);

static void MR_CALL 
parse_tree__decide_type_repn__record_type_repns_in_direct_int_spec_7_p_0_1(
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
parse_tree__decide_type_repn__record_type_repns_in_direct_int_spec_7_p_0(
  MR_Word DirectIntSpec_8,
  MR_Word STATE_VARIABLE_SimpleDuMap_0_16,
  MR_Word * STATE_VARIABLE_SimpleDuMap_17,
  MR_Word STATE_VARIABLE_EqvRepnMap_0_18,
  MR_Word * STATE_VARIABLE_EqvRepnMap_19,
  MR_Word STATE_VARIABLE_WordAlignedTypeCtorsC_0_20,
  MR_Word * STATE_VARIABLE_WordAlignedTypeCtorsC_21);

static void MR_CALL 
parse_tree__decide_type_repn__item_type_repn_info_eqv_to_eqv_type_body_2_p_0(
  MR_Word ItemTypeRepnInfoEqv_3,
  MR_Word * EqvBody_4);

static void MR_CALL 
parse_tree__decide_type_repn__maybe_add_word_aligned_repn_item_4_p_0(
  MR_Word ExportedTypes_5,
  MR_Word TypeCtor_6,
  MR_Word STATE_VARIABLE_RepnMap_0_14,
  MR_Word * STATE_VARIABLE_RepnMap_15);

static void MR_CALL 
parse_tree__decide_type_repn__add_simple_du_repn_item_4_p_0(
  MR_Word TypeCtor_5,
  MR_Word SimpleDuRepn_6,
  MR_Word STATE_VARIABLE_RepnMap_0_17,
  MR_Word * STATE_VARIABLE_RepnMap_18);

static void MR_CALL 
parse_tree__decide_type_repn__maybe_add_simple_du_repn_item_5_p_0(
  MR_Word ExportedTypes_6,
  MR_Word TypeCtor_7,
  MR_Word SimpleDuRepn_8,
  MR_Word STATE_VARIABLE_RepnMap_0_10,
  MR_Word * STATE_VARIABLE_RepnMap_11);

static void MR_CALL 
parse_tree__decide_type_repn__add_eqv_repn_item_4_p_0(
  MR_Word TypeCtor_5,
  MR_Word EqvRepnItem_6,
  MR_Word STATE_VARIABLE_RepnMap_0_15,
  MR_Word * STATE_VARIABLE_RepnMap_16);

static void MR_CALL 
parse_tree__decide_type_repn__decide_simple_type_repns_stage_1_10_p_0(
  MR_Word TypeCtor_11,
  MR_Word CheckedDefn_12,
  MR_Word STATE_VARIABLE_EqvRepnMap_0_36,
  MR_Word * STATE_VARIABLE_EqvRepnMap_37,
  MR_Word STATE_VARIABLE_SimpleDuMap_0_38,
  MR_Word * STATE_VARIABLE_SimpleDuMap_39,
  MR_Word STATE_VARIABLE_WordAlignedTypeCtorsC_0_40,
  MR_Word * STATE_VARIABLE_WordAlignedTypeCtorsC_41,
  MR_Word STATE_VARIABLE_ExportedTypes_0_42,
  MR_Word * STATE_VARIABLE_ExportedTypes_43);

static void MR_CALL 
parse_tree__decide_type_repn__decide_type_repns_stage_1_du_not_all_plain_constants_7_p_0(
  MR_Word TypeCtor_8,
  MR_Word DuDefn_9,
  MR_Word MaybeDefnCJCsE_10,
  MR_Word STATE_VARIABLE_SimpleDuMap_0_41,
  MR_Word * STATE_VARIABLE_SimpleDuMap_42,
  MR_Word STATE_VARIABLE_WordAlignedTypeCtorsC_0_43,
  MR_Word * STATE_VARIABLE_WordAlignedTypeCtorsC_44);

static void MR_CALL 
parse_tree__decide_type_repn__decide_type_repns_foreign_defns_2_p_0(
  MR_Word MaybeDefnCJCsE_3,
  MR_Word * MaybeRepnCJCsE_4);

static void MR_CALL 
parse_tree__decide_type_repn__decide_type_repns_stage_1_du_all_plain_constants_7_p_0(
  MR_Word TypeCtor_8,
  MR_Word DuDefn_9,
  MR_String HeadName_10,
  MR_Word TailNames_11,
  MR_Word MaybeDefnOrEnumCJCsE_12,
  MR_Word STATE_VARIABLE_SimpleDuMap_0_26,
  MR_Word * STATE_VARIABLE_SimpleDuMap_27);

static void MR_CALL 
parse_tree__decide_type_repn__decide_type_repns_foreign_defns_or_enums_2_p_0(
  MR_Word MaybeDefnOrEnumCJCsE_3,
  MR_Word * MaybeRepnCJCsE_4);

static void MR_CALL 
parse_tree__decide_type_repn__represent_maybe_foreign_defn_or_enum_2_p_0(
  MR_Word MaybeForeignDefnOrEnum_3,
  MR_Word * MaybeEnumForeignRepn_4);

static void MR_CALL 
parse_tree__decide_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_114_101_112_110_115_95_102_111_114_95_97_108_108_95_116_121_112_101_115_95_102_111_114_95_105_110_116_49_95_95_91_50_93_95_48_7_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__decide_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_114_101_112_110_115_95_102_111_114_95_97_108_108_95_116_121_112_101_115_95_102_111_114_95_105_110_116_49_95_95_91_50_93_95_48_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__decide_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_114_101_112_110_115_95_102_111_114_95_97_108_108_95_116_121_112_101_115_95_102_111_114_95_105_110_116_49_95_95_91_50_93_95_48_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8,
  MR_Box wrapper_arg_9,
  MR_Box * wrapper_arg_10);

static void MR_CALL 
parse_tree__decide_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_114_101_112_110_115_95_102_111_114_95_97_108_108_95_116_121_112_101_115_95_102_111_114_95_105_110_116_49_95_95_91_50_93_95_48_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
parse_tree__decide_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_114_101_112_110_115_95_102_111_114_95_97_108_108_95_116_121_112_101_115_95_102_111_114_95_105_110_116_49_95_95_91_50_93_95_48_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
parse_tree__decide_type_repn__setup_base_params_2_p_0(
  MR_Word Globals_3,
  MR_Word * BaseParams_4);

static void MR_CALL 
parse_tree__decide_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_114_101_112_110_115_95_102_111_114_95_115_105_109_112_108_101_95_116_121_112_101_115_95_102_111_114_95_105_110_116_51_95_95_91_49_93_95_48_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__decide_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_114_101_112_110_115_95_102_111_114_95_115_105_109_112_108_101_95_116_121_112_101_115_95_102_111_114_95_105_110_116_51_95_95_91_49_93_95_48_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__decide_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_114_101_112_110_115_95_102_111_114_95_115_105_109_112_108_101_95_116_121_112_101_115_95_102_111_114_95_105_110_116_51_95_95_91_49_93_95_48_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__decide_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_114_101_112_110_115_95_102_111_114_95_115_105_109_112_108_101_95_116_121_112_101_115_95_102_111_114_95_105_110_116_51_95_95_91_49_93_95_48_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8,
  MR_Box wrapper_arg_9,
  MR_Box * wrapper_arg_10);

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____arg_class_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__decide_type_repn____Compare____arg_class_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____arg_pack_class_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__decide_type_repn____Compare____arg_pack_class_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____base_params_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__decide_type_repn____Compare____base_params_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____classified_arg_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__decide_type_repn____Compare____classified_arg_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____classified_constructor_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__decide_type_repn____Compare____classified_constructor_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____ctor_repn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__decide_type_repn____Compare____ctor_repn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____ctor_repn_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__decide_type_repn____Compare____ctor_repn_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____eqv_repn_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__decide_type_repn____Compare____eqv_repn_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____maybe_direct_args_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__decide_type_repn____Compare____maybe_direct_args_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____maybe_double_word_floats_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__decide_type_repn____Compare____maybe_double_word_floats_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____maybe_double_word_int64s_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__decide_type_repn____Compare____maybe_double_word_int64s_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____maybe_treat_as_first_arg_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__decide_type_repn____Compare____maybe_treat_as_first_arg_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____must_mask_remote_sectag_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__decide_type_repn____Compare____must_mask_remote_sectag_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____packable_arg_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__decide_type_repn____Compare____packable_arg_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____packable_constructor_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__decide_type_repn____Compare____packable_constructor_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____platform_params_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__decide_type_repn____Compare____platform_params_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____remote_shared_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__decide_type_repn____Compare____remote_shared_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____simple_du_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__decide_type_repn____Compare____simple_du_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____simple_du_repn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__decide_type_repn____Compare____simple_du_repn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____word_aligned_type_ctors_c_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__decide_type_repn____Compare____word_aligned_type_ctors_c_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____word_size_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__decide_type_repn____Compare____word_size_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__decide_type_repn_scalar_common_1[10][2];

static /* final */ const MR_Box parse_tree__decide_type_repn_scalar_common_2[16][3];

static /* final */ const MR_Box parse_tree__decide_type_repn_scalar_common_3[1][13];

static /* final */ const MR_Box parse_tree__decide_type_repn_scalar_common_4[2][7];

static /* final */ const MR_Box parse_tree__decide_type_repn_scalar_common_5[1][8];

static /* final */ const MR_Box parse_tree__decide_type_repn_scalar_common_6[2][10];

static /* final */ const MR_Box parse_tree__decide_type_repn_scalar_common_7[10][5];

static /* final */ const MR_Box parse_tree__decide_type_repn_scalar_common_8[1][14];

static /* final */ const MR_Box parse_tree__decide_type_repn_scalar_common_9[1][12];

static /* final */ const MR_Box parse_tree__decide_type_repn_scalar_common_10[10][1];

static /* final */ const MR_Box parse_tree__decide_type_repn_scalar_common_11[1][6];




static /* final */ const MR_Box parse_tree__decide_type_repn_scalar_common_1[10][2] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_repn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_repn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_classified_arg_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_packable_arg_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_remote_arg_repn_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__decide_type_repn_scalar_common_1[4]))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
};

static /* final */ const MR_Box parse_tree__decide_type_repn_scalar_common_2[16][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__decide_type_repn_scalar_common_1[0]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_simple_du_repn_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__decide_type_repn_scalar_common_1[2]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint32_0)),
    ((MR_Box) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_ctor_repn_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__decide_type_repn_scalar_common_3[0])),
    ((MR_Box) (parse_tree__decide_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_114_101_112_110_115_95_102_111_114_95_115_105_109_112_108_101_95_116_121_112_101_115_95_102_111_114_95_105_110_116_51_95_95_91_49_93_95_48_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__decide_type_repn_scalar_common_4[0])),
    ((MR_Box) (parse_tree__decide_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_114_101_112_110_115_95_102_111_114_95_115_105_109_112_108_101_95_116_121_112_101_115_95_102_111_114_95_105_110_116_51_95_95_91_49_93_95_48_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__decide_type_repn_scalar_common_6[0])),
    ((MR_Box) (parse_tree__decide_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_114_101_112_110_115_95_102_111_114_95_97_108_108_95_116_121_112_101_115_95_102_111_114_95_105_110_116_49_95_95_91_50_93_95_48_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&parse_tree__decide_type_repn_scalar_common_6[1])),
    ((MR_Box) (parse_tree__decide_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_114_101_112_110_115_95_102_111_114_95_97_108_108_95_116_121_112_101_115_95_102_111_114_95_105_110_116_49_95_95_91_50_93_95_48_7_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&parse_tree__decide_type_repn_scalar_common_3[0])),
    ((MR_Box) (parse_tree__decide_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_114_101_112_110_115_95_102_111_114_95_97_108_108_95_116_121_112_101_115_95_102_111_114_95_105_110_116_49_95_95_91_50_93_95_48_7_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&parse_tree__decide_type_repn_scalar_common_7[0])),
    ((MR_Box) (parse_tree__decide_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_114_101_112_110_115_95_102_111_114_95_97_108_108_95_116_121_112_101_115_95_102_111_114_95_105_110_116_49_95_95_91_50_93_95_48_7_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&parse_tree__decide_type_repn_scalar_common_7[3])),
    ((MR_Box) (parse_tree__decide_type_repn__decide_type_repns_stage_2_du_gen_only_functor_10_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&parse_tree__decide_type_repn_scalar_common_11[0])),
    ((MR_Box) (parse_tree__decide_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_108_111_99_97_108_95_112_97_99_107_97_98_108_101_95_102_117_110_99_116_111_114_115_95_95_91_50_93_95_48_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&parse_tree__decide_type_repn_scalar_common_7[6])),
    ((MR_Box) (parse_tree__decide_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_108_111_99_97_108_95_112_97_99_107_97_98_108_101_95_102_117_110_99_116_111_114_115_95_95_91_50_93_95_48_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&parse_tree__decide_type_repn_scalar_common_11[0])),
    ((MR_Box) (parse_tree__decide_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_108_111_99_97_108_95_112_97_99_107_97_98_108_101_95_102_117_110_99_116_111_114_115_95_95_91_50_93_95_48_6_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&parse_tree__decide_type_repn_scalar_common_7[3])),
    ((MR_Box) (parse_tree__decide_type_repn__look_up_functor_repns_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&parse_tree__decide_type_repn_scalar_common_7[9])),
    ((MR_Box) (parse_tree__decide_type_repn__packable_to_classified_constructor_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__decide_type_repn_scalar_common_3[1][13] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__type_ctor_info_type_ctor_checked_defn_0)),
    ((MR_Box) (&parse_tree__decide_type_repn__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__ti_item_type_repn_info_general_1parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__decide_type_repn__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__ti_item_type_repn_info_general_1parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__decide_type_repn__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__decide_type_repn__type_ctor_info_simple_du_repn_0)),
    ((MR_Box) (&parse_tree__decide_type_repn__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__decide_type_repn__type_ctor_info_simple_du_repn_0)),
    ((MR_Box) (&parse_tree__decide_type_repn__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__decide_type_repn__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__decide_type_repn__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__decide_type_repn__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0))
  },
};

static /* final */ const MR_Box parse_tree__decide_type_repn_scalar_common_4[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__decide_type_repn__parse_tree__prog_item__pti_item_type_repn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__decide_type_repn__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__ti_item_type_repn_info_general_1parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0)),
    ((MR_Box) (&parse_tree__decide_type_repn__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__ti_item_type_repn_info_general_1parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__decide_type_repn__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__decide_type_repn__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__ti_item_type_repn_info_general_1parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0)),
    ((MR_Box) (&parse_tree__decide_type_repn__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__ti_item_type_repn_info_general_1parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0))
  },
};

static /* final */ const MR_Box parse_tree__decide_type_repn_scalar_common_5[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__decide_type_repn__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_simple_du_repn_0)),
    ((MR_Box) (&parse_tree__decide_type_repn__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__ti_item_type_repn_info_general_1parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0)),
    ((MR_Box) (&parse_tree__decide_type_repn__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__ti_item_type_repn_info_general_1parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0))
  },
};

static /* final */ const MR_Box parse_tree__decide_type_repn_scalar_common_6[2][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_direct_int_spec_0)),
    ((MR_Box) (&parse_tree__decide_type_repn__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__ti_item_type_repn_info_general_1parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__decide_type_repn__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__ti_item_type_repn_info_general_1parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__decide_type_repn__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__decide_type_repn__type_ctor_info_simple_du_repn_0)),
    ((MR_Box) (&parse_tree__decide_type_repn__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__decide_type_repn__type_ctor_info_simple_du_repn_0)),
    ((MR_Box) (&parse_tree__decide_type_repn__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__decide_type_repn__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_indirect_int_spec_0)),
    ((MR_Box) (&parse_tree__decide_type_repn__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__ti_item_type_repn_info_general_1parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__decide_type_repn__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__ti_item_type_repn_info_general_1parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__decide_type_repn__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__decide_type_repn__type_ctor_info_simple_du_repn_0)),
    ((MR_Box) (&parse_tree__decide_type_repn__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__decide_type_repn__type_ctor_info_simple_du_repn_0)),
    ((MR_Box) (&parse_tree__decide_type_repn__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__decide_type_repn__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0))
  },
};

static /* final */ const MR_Box parse_tree__decide_type_repn_scalar_common_7[10][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__decide_type_repn__parse_tree__prog_item__pti_item_type_repn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_type_body_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_maybe_cons_exist_constraints_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_maybe_cons_exist_constraints_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_packable_constructor_0)),
    ((MR_Box) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_classified_constructor_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__decide_type_repn__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_classified_constructor_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_packable_arg_0)),
    ((MR_Box) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_classified_arg_0))
  },
};

static /* final */ const MR_Box parse_tree__decide_type_repn_scalar_common_8[1][14] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 11)),
    ((MR_Box) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_base_params_0)),
    ((MR_Box) (&parse_tree__decide_type_repn__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__ti_item_type_repn_info_general_1parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__decide_type_repn__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&parse_tree__decide_type_repn__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__decide_type_repn__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__decide_type_repn__type_ctor_info_simple_du_repn_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__type_ctor_info_type_ctor_checked_defn_0)),
    ((MR_Box) (&parse_tree__decide_type_repn__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__ti_item_type_repn_info_general_1parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0)),
    ((MR_Box) (&parse_tree__decide_type_repn__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__ti_item_type_repn_info_general_1parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0)),
    ((MR_Box) (&parse_tree__decide_type_repn__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__decide_type_repn__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box parse_tree__decide_type_repn_scalar_common_9[1][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__decide_type_repn__parse_tree__prog_item__pti_item_type_repn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0)),
    ((MR_Box) (&parse_tree__decide_type_repn__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__ti_item_type_repn_info_general_1parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__decide_type_repn__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__ti_item_type_repn_info_general_1parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__decide_type_repn__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__decide_type_repn__type_ctor_info_simple_du_repn_0)),
    ((MR_Box) (&parse_tree__decide_type_repn__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__decide_type_repn__type_ctor_info_simple_du_repn_0)),
    ((MR_Box) (&parse_tree__decide_type_repn__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__decide_type_repn__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0))
  },
};

static /* final */ const MR_Box parse_tree__decide_type_repn_scalar_common_10[10][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Unsigned) 24U))
  },
  /* row 1 */
  {
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Unsigned) 4U))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Unsigned) 8U))
  },
  /* row 4 */
  {
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_Unsigned) 16U))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_Unsigned) 20U))
  },
  /* row 8 */
  {
    (MR_Box) ((MR_Unsigned) 2U)
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_Unsigned) 12U))
  },
};

static /* final */ const MR_Box parse_tree__decide_type_repn_scalar_common_11[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_packable_constructor_0)),
    ((MR_Box) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_packable_constructor_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_comparison_result_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_TypeInfo_Struct1 parse_tree__decide_type_repn__parse_tree__prog_item__ti_item_type_repn_info_general_1parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_repn_info_general_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__decide_type_repn__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__ti_item_type_repn_info_general_1parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_PseudoTypeInfo) (&parse_tree__decide_type_repn__parse_tree__prog_item__ti_item_type_repn_info_general_1parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__decide_type_repn__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__decide_type_repn__type_ctor_info_simple_du_repn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_PseudoTypeInfo) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_simple_du_repn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__decide_type_repn__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__decide_type_repn__parse_tree__prog_item__pti_item_type_repn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_repn_info_general_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__decide_type_repn__parse_tree__prog_item__ti_item_type_repn_info_general_1parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_repn_info_general_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__decide_type_repn__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__ti_item_type_repn_info_general_1parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_PseudoTypeInfo) (&parse_tree__decide_type_repn__parse_tree__prog_item__ti_item_type_repn_info_general_1parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__decide_type_repn__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_PseudoTypeInfo) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_type_body_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__decide_type_repn__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__decide_type_repn__parse_tree__prog_item__pti_item_type_repn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_repn_info_general_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0)
  }
};

static const MR_PseudoTypeInfo parse_tree__decide_type_repn__parse_tree__decide_type_repn__field_types_arg_class_0_0[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_fill_kind_size_0)
};

static const MR_DuFunctorDesc parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_functor_desc_arg_class_0_0 = {
  (MR_String) "ac_pack",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__decide_type_repn__parse_tree__decide_type_repn__field_types_arg_class_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_functor_desc_arg_class_0_1 = {
  (MR_String) "ac_dummy",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_functor_desc_arg_class_0_2 = {
  (MR_String) "ac_word",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(2),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__decide_type_repn__parse_tree__decide_type_repn__field_types_arg_class_0_3[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_double_word_kind_0)
};

static const MR_DuArgLocn parse_tree__decide_type_repn__parse_tree__decide_type_repn__field_locns_arg_class_0_3[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 2
  }
};

static const MR_DuFunctorDesc parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_functor_desc_arg_class_0_3 = {
  (MR_String) "ac_double",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(3),
  parse_tree__decide_type_repn__parse_tree__decide_type_repn__field_types_arg_class_0_3,
  NULL,
  parse_tree__decide_type_repn__parse_tree__decide_type_repn__field_locns_arg_class_0_3,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_stag_ordered_arg_class_0_0[2] = {
  &parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_functor_desc_arg_class_0_1,
  &parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_functor_desc_arg_class_0_2
};

static const MR_DuFunctorDescPtr parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_stag_ordered_arg_class_0_1[1] = {
  &parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_functor_desc_arg_class_0_0
};

static const MR_DuFunctorDescPtr parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_stag_ordered_arg_class_0_2[1] = {
  &parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_functor_desc_arg_class_0_3
};

static const MR_DuPtagLayout parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_ptag_ordered_arg_class_0[3] = {
  {
    UINT32_C(2),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_stag_ordered_arg_class_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_stag_ordered_arg_class_0_1,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_stag_ordered_arg_class_0_2,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_name_ordered_arg_class_0[4] = {
  &parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_functor_desc_arg_class_0_3,
  &parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_functor_desc_arg_class_0_1,
  &parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_functor_desc_arg_class_0_0,
  &parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_functor_desc_arg_class_0_2
};

static const MR_Integer parse_tree__decide_type_repn__parse_tree__decide_type_repn__functor_number_map_arg_class_0[4] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_arg_class_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__decide_type_repn____Unify____arg_class_0_0_10001)),
  ((MR_Box) (parse_tree__decide_type_repn____Compare____arg_class_0_0_10001)),
  (MR_String) "parse_tree.decide_type_repn",
  (MR_String) "arg_class",
  {     parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_name_ordered_arg_class_0 },
  {     parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_ptag_ordered_arg_class_0 },
  (MR_Integer) 4,
  UINT16_C(4),
  parse_tree__decide_type_repn__parse_tree__decide_type_repn__functor_number_map_arg_class_0
};

static const MR_PseudoTypeInfo parse_tree__decide_type_repn__parse_tree__decide_type_repn__field_types_arg_pack_class_0_0[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_fill_kind_size_0)
};

static const MR_DuFunctorDesc parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_functor_desc_arg_pack_class_0_0 = {
  (MR_String) "apc_pack",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__decide_type_repn__parse_tree__decide_type_repn__field_types_arg_pack_class_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_functor_desc_arg_pack_class_0_1 = {
  (MR_String) "apc_dummy",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_stag_ordered_arg_pack_class_0_0[1] = {
  &parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_functor_desc_arg_pack_class_0_1
};

static const MR_DuFunctorDescPtr parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_stag_ordered_arg_pack_class_0_1[1] = {
  &parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_functor_desc_arg_pack_class_0_0
};

static const MR_DuPtagLayout parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_ptag_ordered_arg_pack_class_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_stag_ordered_arg_pack_class_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_stag_ordered_arg_pack_class_0_1,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_name_ordered_arg_pack_class_0[2] = {
  &parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_functor_desc_arg_pack_class_0_1,
  &parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_functor_desc_arg_pack_class_0_0
};

static const MR_Integer parse_tree__decide_type_repn__parse_tree__decide_type_repn__functor_number_map_arg_pack_class_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_arg_pack_class_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__decide_type_repn____Unify____arg_pack_class_0_0_10001)),
  ((MR_Box) (parse_tree__decide_type_repn____Compare____arg_pack_class_0_0_10001)),
  (MR_String) "parse_tree.decide_type_repn",
  (MR_String) "arg_pack_class",
  {     parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_name_ordered_arg_pack_class_0 },
  {     parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_ptag_ordered_arg_pack_class_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  parse_tree__decide_type_repn__parse_tree__decide_type_repn__functor_number_map_arg_pack_class_0
};

static const MR_PseudoTypeInfo parse_tree__decide_type_repn__parse_tree__decide_type_repn__field_types_base_params_0_0[6] = {
  (MR_PseudoTypeInfo) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_maybe_double_word_int64s_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0)
};

static const MR_ConstString parse_tree__decide_type_repn__parse_tree__decide_type_repn__field_names_base_params_0_0[6] = {
  (MR_String) "bp_allow_double_word_ints",
  (MR_String) "bp_allow_packing_ints",
  (MR_String) "bp_allow_packing_chars",
  (MR_String) "bp_allow_packing_dummies",
  (MR_String) "bp_allow_packing_local_sectags",
  (MR_String) "bp_allow_packing_remote_sectags"
};

static const MR_DuArgLocn parse_tree__decide_type_repn__parse_tree__decide_type_repn__field_locns_base_params_0_0[6] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 5,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 4,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 3,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 2,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_functor_desc_base_params_0_0 = {
  (MR_String) "base_params",
  INT16_C(6),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__decide_type_repn__parse_tree__decide_type_repn__field_types_base_params_0_0,
  parse_tree__decide_type_repn__parse_tree__decide_type_repn__field_names_base_params_0_0,
  parse_tree__decide_type_repn__parse_tree__decide_type_repn__field_locns_base_params_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_stag_ordered_base_params_0_0[1] = {
  &parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_functor_desc_base_params_0_0
};

static const MR_DuPtagLayout parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_ptag_ordered_base_params_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_stag_ordered_base_params_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_name_ordered_base_params_0[1] = {
  &parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_functor_desc_base_params_0_0
};

static const MR_Integer parse_tree__decide_type_repn__parse_tree__decide_type_repn__functor_number_map_base_params_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_base_params_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__decide_type_repn____Unify____base_params_0_0_10001)),
  ((MR_Box) (parse_tree__decide_type_repn____Compare____base_params_0_0_10001)),
  (MR_String) "parse_tree.decide_type_repn",
  (MR_String) "base_params",
  {     parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_name_ordered_base_params_0 },
  {     parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_ptag_ordered_base_params_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  parse_tree__decide_type_repn__parse_tree__decide_type_repn__functor_number_map_base_params_0
};

static const MR_PseudoTypeInfo parse_tree__decide_type_repn__parse_tree__decide_type_repn__field_types_classified_arg_0_0[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0),
  (MR_PseudoTypeInfo) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_arg_class_0)
};

static const MR_DuFunctorDesc parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_functor_desc_classified_arg_0_0 = {
  (MR_String) "classified_arg",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__decide_type_repn__parse_tree__decide_type_repn__field_types_classified_arg_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_stag_ordered_classified_arg_0_0[1] = {
  &parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_functor_desc_classified_arg_0_0
};

static const MR_DuPtagLayout parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_ptag_ordered_classified_arg_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_stag_ordered_classified_arg_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_name_ordered_classified_arg_0[1] = {
  &parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_functor_desc_classified_arg_0_0
};

static const MR_Integer parse_tree__decide_type_repn__parse_tree__decide_type_repn__functor_number_map_classified_arg_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_classified_arg_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__decide_type_repn____Unify____classified_arg_0_0_10001)),
  ((MR_Box) (parse_tree__decide_type_repn____Compare____classified_arg_0_0_10001)),
  (MR_String) "parse_tree.decide_type_repn",
  (MR_String) "classified_arg",
  {     parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_name_ordered_classified_arg_0 },
  {     parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_ptag_ordered_classified_arg_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  parse_tree__decide_type_repn__parse_tree__decide_type_repn__functor_number_map_classified_arg_0
};

static const MR_FA_TypeInfo_Struct1 parse_tree__decide_type_repn__list__ti_list_1parse_tree__decide_type_repn__type_ctor_info_classified_arg_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_classified_arg_0)
  }
};

static const MR_PseudoTypeInfo parse_tree__decide_type_repn__parse_tree__decide_type_repn__field_types_classified_constructor_0_0[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0),
  (MR_PseudoTypeInfo) (&parse_tree__decide_type_repn__list__ti_list_1parse_tree__decide_type_repn__type_ctor_info_classified_arg_0)
};

static const MR_DuFunctorDesc parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_functor_desc_classified_constructor_0_0 = {
  (MR_String) "classified_constructor",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__decide_type_repn__parse_tree__decide_type_repn__field_types_classified_constructor_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_stag_ordered_classified_constructor_0_0[1] = {
  &parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_functor_desc_classified_constructor_0_0
};

static const MR_DuPtagLayout parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_ptag_ordered_classified_constructor_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_stag_ordered_classified_constructor_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_name_ordered_classified_constructor_0[1] = {
  &parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_functor_desc_classified_constructor_0_0
};

static const MR_Integer parse_tree__decide_type_repn__parse_tree__decide_type_repn__functor_number_map_classified_constructor_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_classified_constructor_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__decide_type_repn____Unify____classified_constructor_0_0_10001)),
  ((MR_Box) (parse_tree__decide_type_repn____Compare____classified_constructor_0_0_10001)),
  (MR_String) "parse_tree.decide_type_repn",
  (MR_String) "classified_constructor",
  {     parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_name_ordered_classified_constructor_0 },
  {     parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_ptag_ordered_classified_constructor_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  parse_tree__decide_type_repn__parse_tree__decide_type_repn__functor_number_map_classified_constructor_0
};

static const MR_PseudoTypeInfo parse_tree__decide_type_repn__parse_tree__decide_type_repn__field_types_ctor_repn_0_0[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_constant_repn_0)
};

static const MR_DuFunctorDesc parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_functor_desc_ctor_repn_0_0 = {
  (MR_String) "ctor_constant",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE_DIRECT_ARG,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__decide_type_repn__parse_tree__decide_type_repn__field_types_ctor_repn_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__decide_type_repn__parse_tree__decide_type_repn__field_types_ctor_repn_0_1[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_nonconstant_repn_0)
};

static const MR_DuFunctorDesc parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_functor_desc_ctor_repn_0_1 = {
  (MR_String) "ctor_nonconstant",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__decide_type_repn__parse_tree__decide_type_repn__field_types_ctor_repn_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_stag_ordered_ctor_repn_0_0[1] = {
  &parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_functor_desc_ctor_repn_0_0
};

static const MR_DuFunctorDescPtr parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_stag_ordered_ctor_repn_0_1[1] = {
  &parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_functor_desc_ctor_repn_0_1
};

static const MR_DuPtagLayout parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_ptag_ordered_ctor_repn_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE_DIRECT_ARG,
    parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_stag_ordered_ctor_repn_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_stag_ordered_ctor_repn_0_1,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_name_ordered_ctor_repn_0[2] = {
  &parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_functor_desc_ctor_repn_0_0,
  &parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_functor_desc_ctor_repn_0_1
};

static const MR_Integer parse_tree__decide_type_repn__parse_tree__decide_type_repn__functor_number_map_ctor_repn_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_ctor_repn_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__decide_type_repn____Unify____ctor_repn_0_0_10001)),
  ((MR_Box) (parse_tree__decide_type_repn____Compare____ctor_repn_0_0_10001)),
  (MR_String) "parse_tree.decide_type_repn",
  (MR_String) "ctor_repn",
  {     parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_name_ordered_ctor_repn_0 },
  {     parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_ptag_ordered_ctor_repn_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  parse_tree__decide_type_repn__parse_tree__decide_type_repn__functor_number_map_ctor_repn_0
};

static const MR_FA_TypeInfo_Struct2 parse_tree__decide_type_repn__tree234__ti_tree234_2builtin__type_ctor_info_uint32_0parse_tree__decide_type_repn__type_ctor_info_ctor_repn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint32_0),
    (MR_TypeInfo) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_ctor_repn_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_ctor_repn_map_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__decide_type_repn____Unify____ctor_repn_map_0_0_10001)),
  ((MR_Box) (parse_tree__decide_type_repn____Compare____ctor_repn_map_0_0_10001)),
  (MR_String) "parse_tree.decide_type_repn",
  (MR_String) "ctor_repn_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&parse_tree__decide_type_repn__tree234__ti_tree234_2builtin__type_ctor_info_uint32_0parse_tree__decide_type_repn__type_ctor_info_ctor_repn_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_FA_TypeInfo_Struct2 parse_tree__decide_type_repn__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__prog_item__ti_item_type_repn_info_general_1parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_TypeInfo) (&parse_tree__decide_type_repn__parse_tree__prog_item__ti_item_type_repn_info_general_1parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_eqv_repn_map_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__decide_type_repn____Unify____eqv_repn_map_0_0_10001)),
  ((MR_Box) (parse_tree__decide_type_repn____Compare____eqv_repn_map_0_0_10001)),
  (MR_String) "parse_tree.decide_type_repn",
  (MR_String) "eqv_repn_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&parse_tree__decide_type_repn__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__prog_item__ti_item_type_repn_info_general_1parse_tree__prog_data__type_ctor_info_mer_type_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_EnumFunctorDesc parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_functor_desc_maybe_direct_args_0_0 = {
  (MR_String) "no_direct_args",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_functor_desc_maybe_direct_args_0_1 = {
  (MR_String) "use_direct_args",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_value_ordered_maybe_direct_args_0[2] = {
  &parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_functor_desc_maybe_direct_args_0_0,
  &parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_functor_desc_maybe_direct_args_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_name_ordered_maybe_direct_args_0[2] = {
  &parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_functor_desc_maybe_direct_args_0_0,
  &parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_functor_desc_maybe_direct_args_0_1
};

static const MR_Integer parse_tree__decide_type_repn__parse_tree__decide_type_repn__functor_number_map_maybe_direct_args_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_maybe_direct_args_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__decide_type_repn____Unify____maybe_direct_args_0_0_10001)),
  ((MR_Box) (parse_tree__decide_type_repn____Compare____maybe_direct_args_0_0_10001)),
  (MR_String) "parse_tree.decide_type_repn",
  (MR_String) "maybe_direct_args",
  {     parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_name_ordered_maybe_direct_args_0 },
  {     parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_value_ordered_maybe_direct_args_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  parse_tree__decide_type_repn__parse_tree__decide_type_repn__functor_number_map_maybe_direct_args_0
};

static const MR_EnumFunctorDesc parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_functor_desc_maybe_double_word_floats_0_0 = {
  (MR_String) "no_double_word_floats",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_functor_desc_maybe_double_word_floats_0_1 = {
  (MR_String) "use_double_word_floats",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_value_ordered_maybe_double_word_floats_0[2] = {
  &parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_functor_desc_maybe_double_word_floats_0_0,
  &parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_functor_desc_maybe_double_word_floats_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_name_ordered_maybe_double_word_floats_0[2] = {
  &parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_functor_desc_maybe_double_word_floats_0_0,
  &parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_functor_desc_maybe_double_word_floats_0_1
};

static const MR_Integer parse_tree__decide_type_repn__parse_tree__decide_type_repn__functor_number_map_maybe_double_word_floats_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_maybe_double_word_floats_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__decide_type_repn____Unify____maybe_double_word_floats_0_0_10001)),
  ((MR_Box) (parse_tree__decide_type_repn____Compare____maybe_double_word_floats_0_0_10001)),
  (MR_String) "parse_tree.decide_type_repn",
  (MR_String) "maybe_double_word_floats",
  {     parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_name_ordered_maybe_double_word_floats_0 },
  {     parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_value_ordered_maybe_double_word_floats_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  parse_tree__decide_type_repn__parse_tree__decide_type_repn__functor_number_map_maybe_double_word_floats_0
};

static const MR_EnumFunctorDesc parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_functor_desc_maybe_double_word_int64s_0_0 = {
  (MR_String) "no_double_word_int64s",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_functor_desc_maybe_double_word_int64s_0_1 = {
  (MR_String) "use_double_word_int64s",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_value_ordered_maybe_double_word_int64s_0[2] = {
  &parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_functor_desc_maybe_double_word_int64s_0_0,
  &parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_functor_desc_maybe_double_word_int64s_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_name_ordered_maybe_double_word_int64s_0[2] = {
  &parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_functor_desc_maybe_double_word_int64s_0_0,
  &parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_functor_desc_maybe_double_word_int64s_0_1
};

static const MR_Integer parse_tree__decide_type_repn__parse_tree__decide_type_repn__functor_number_map_maybe_double_word_int64s_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_maybe_double_word_int64s_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__decide_type_repn____Unify____maybe_double_word_int64s_0_0_10001)),
  ((MR_Box) (parse_tree__decide_type_repn____Compare____maybe_double_word_int64s_0_0_10001)),
  (MR_String) "parse_tree.decide_type_repn",
  (MR_String) "maybe_double_word_int64s",
  {     parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_name_ordered_maybe_double_word_int64s_0 },
  {     parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_value_ordered_maybe_double_word_int64s_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  parse_tree__decide_type_repn__parse_tree__decide_type_repn__functor_number_map_maybe_double_word_int64s_0
};

static const MR_EnumFunctorDesc parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_functor_desc_maybe_treat_as_first_arg_0_0 = {
  (MR_String) "do_not_treat_as_first_arg",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_functor_desc_maybe_treat_as_first_arg_0_1 = {
  (MR_String) "treat_as_first_arg",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_value_ordered_maybe_treat_as_first_arg_0[2] = {
  &parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_functor_desc_maybe_treat_as_first_arg_0_0,
  &parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_functor_desc_maybe_treat_as_first_arg_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_name_ordered_maybe_treat_as_first_arg_0[2] = {
  &parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_functor_desc_maybe_treat_as_first_arg_0_0,
  &parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_functor_desc_maybe_treat_as_first_arg_0_1
};

static const MR_Integer parse_tree__decide_type_repn__parse_tree__decide_type_repn__functor_number_map_maybe_treat_as_first_arg_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_maybe_treat_as_first_arg_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__decide_type_repn____Unify____maybe_treat_as_first_arg_0_0_10001)),
  ((MR_Box) (parse_tree__decide_type_repn____Compare____maybe_treat_as_first_arg_0_0_10001)),
  (MR_String) "parse_tree.decide_type_repn",
  (MR_String) "maybe_treat_as_first_arg",
  {     parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_name_ordered_maybe_treat_as_first_arg_0 },
  {     parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_value_ordered_maybe_treat_as_first_arg_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  parse_tree__decide_type_repn__parse_tree__decide_type_repn__functor_number_map_maybe_treat_as_first_arg_0
};

static const MR_EnumFunctorDesc parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_functor_desc_must_mask_remote_sectag_0_0 = {
  (MR_String) "need_not_mask_remote_sectag",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_functor_desc_must_mask_remote_sectag_0_1 = {
  (MR_String) "must_mask_remote_sectag",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_value_ordered_must_mask_remote_sectag_0[2] = {
  &parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_functor_desc_must_mask_remote_sectag_0_0,
  &parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_functor_desc_must_mask_remote_sectag_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_name_ordered_must_mask_remote_sectag_0[2] = {
  &parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_functor_desc_must_mask_remote_sectag_0_1,
  &parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_functor_desc_must_mask_remote_sectag_0_0
};

static const MR_Integer parse_tree__decide_type_repn__parse_tree__decide_type_repn__functor_number_map_must_mask_remote_sectag_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_must_mask_remote_sectag_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__decide_type_repn____Unify____must_mask_remote_sectag_0_0_10001)),
  ((MR_Box) (parse_tree__decide_type_repn____Compare____must_mask_remote_sectag_0_0_10001)),
  (MR_String) "parse_tree.decide_type_repn",
  (MR_String) "must_mask_remote_sectag",
  {     parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_name_ordered_must_mask_remote_sectag_0 },
  {     parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_value_ordered_must_mask_remote_sectag_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  parse_tree__decide_type_repn__parse_tree__decide_type_repn__functor_number_map_must_mask_remote_sectag_0
};

static const MR_PseudoTypeInfo parse_tree__decide_type_repn__parse_tree__decide_type_repn__field_types_packable_arg_0_0[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0),
  (MR_PseudoTypeInfo) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_arg_pack_class_0)
};

static const MR_DuFunctorDesc parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_functor_desc_packable_arg_0_0 = {
  (MR_String) "packable_arg",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__decide_type_repn__parse_tree__decide_type_repn__field_types_packable_arg_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_stag_ordered_packable_arg_0_0[1] = {
  &parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_functor_desc_packable_arg_0_0
};

static const MR_DuPtagLayout parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_ptag_ordered_packable_arg_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_stag_ordered_packable_arg_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_name_ordered_packable_arg_0[1] = {
  &parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_functor_desc_packable_arg_0_0
};

static const MR_Integer parse_tree__decide_type_repn__parse_tree__decide_type_repn__functor_number_map_packable_arg_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_packable_arg_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__decide_type_repn____Unify____packable_arg_0_0_10001)),
  ((MR_Box) (parse_tree__decide_type_repn____Compare____packable_arg_0_0_10001)),
  (MR_String) "parse_tree.decide_type_repn",
  (MR_String) "packable_arg",
  {     parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_name_ordered_packable_arg_0 },
  {     parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_ptag_ordered_packable_arg_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  parse_tree__decide_type_repn__parse_tree__decide_type_repn__functor_number_map_packable_arg_0
};

static const MR_FA_TypeInfo_Struct1 parse_tree__decide_type_repn__list__ti_list_1parse_tree__decide_type_repn__type_ctor_info_packable_arg_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_packable_arg_0)
  }
};

static const MR_PseudoTypeInfo parse_tree__decide_type_repn__parse_tree__decide_type_repn__field_types_packable_constructor_0_0[3] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0),
  (MR_PseudoTypeInfo) (&parse_tree__decide_type_repn__list__ti_list_1parse_tree__decide_type_repn__type_ctor_info_packable_arg_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0)
};

static const MR_ConstString parse_tree__decide_type_repn__parse_tree__decide_type_repn__field_names_packable_constructor_0_0[3] = {
  (MR_String) "pc_ctor",
  (MR_String) "pc_packable_args",
  (MR_String) "pc_num_bits"
};

static const MR_DuFunctorDesc parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_functor_desc_packable_constructor_0_0 = {
  (MR_String) "packable_constructor",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__decide_type_repn__parse_tree__decide_type_repn__field_types_packable_constructor_0_0,
  parse_tree__decide_type_repn__parse_tree__decide_type_repn__field_names_packable_constructor_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_stag_ordered_packable_constructor_0_0[1] = {
  &parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_functor_desc_packable_constructor_0_0
};

static const MR_DuPtagLayout parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_ptag_ordered_packable_constructor_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_stag_ordered_packable_constructor_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_name_ordered_packable_constructor_0[1] = {
  &parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_functor_desc_packable_constructor_0_0
};

static const MR_Integer parse_tree__decide_type_repn__parse_tree__decide_type_repn__functor_number_map_packable_constructor_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_packable_constructor_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__decide_type_repn____Unify____packable_constructor_0_0_10001)),
  ((MR_Box) (parse_tree__decide_type_repn____Compare____packable_constructor_0_0_10001)),
  (MR_String) "parse_tree.decide_type_repn",
  (MR_String) "packable_constructor",
  {     parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_name_ordered_packable_constructor_0 },
  {     parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_ptag_ordered_packable_constructor_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  parse_tree__decide_type_repn__parse_tree__decide_type_repn__functor_number_map_packable_constructor_0
};

static const MR_PseudoTypeInfo parse_tree__decide_type_repn__parse_tree__decide_type_repn__field_types_platform_params_0_0[4] = {
  (MR_PseudoTypeInfo) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_word_size_0),
  (MR_PseudoTypeInfo) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_maybe_double_word_floats_0),
  (MR_PseudoTypeInfo) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_maybe_direct_args_0),
  (MR_PseudoTypeInfo) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_base_params_0)
};

static const MR_ConstString parse_tree__decide_type_repn__parse_tree__decide_type_repn__field_names_platform_params_0_0[4] = {
  (MR_String) "pp_word_size",
  (MR_String) "pp_double_word_floats",
  (MR_String) "pp_direct_args",
  (MR_String) "pp_base_params"
};

static const MR_DuArgLocn parse_tree__decide_type_repn__parse_tree__decide_type_repn__field_locns_platform_params_0_0[4] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 2,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_functor_desc_platform_params_0_0 = {
  (MR_String) "platform_params",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__decide_type_repn__parse_tree__decide_type_repn__field_types_platform_params_0_0,
  parse_tree__decide_type_repn__parse_tree__decide_type_repn__field_names_platform_params_0_0,
  parse_tree__decide_type_repn__parse_tree__decide_type_repn__field_locns_platform_params_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_stag_ordered_platform_params_0_0[1] = {
  &parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_functor_desc_platform_params_0_0
};

static const MR_DuPtagLayout parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_ptag_ordered_platform_params_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_stag_ordered_platform_params_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_name_ordered_platform_params_0[1] = {
  &parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_functor_desc_platform_params_0_0
};

static const MR_Integer parse_tree__decide_type_repn__parse_tree__decide_type_repn__functor_number_map_platform_params_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_platform_params_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__decide_type_repn____Unify____platform_params_0_0_10001)),
  ((MR_Box) (parse_tree__decide_type_repn____Compare____platform_params_0_0_10001)),
  (MR_String) "parse_tree.decide_type_repn",
  (MR_String) "platform_params",
  {     parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_name_ordered_platform_params_0 },
  {     parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_ptag_ordered_platform_params_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  parse_tree__decide_type_repn__parse_tree__decide_type_repn__functor_number_map_platform_params_0
};

static const MR_FA_TypeInfo_Struct1 parse_tree__decide_type_repn__one_or_more__ti_one_or_more_1parse_tree__prog_item__type_ctor_info_remote_arg_repn_0 = {
  &mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_remote_arg_repn_0)
  }
};

static const MR_PseudoTypeInfo parse_tree__decide_type_repn__parse_tree__decide_type_repn__field_types_remote_shared_info_0_0[3] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint32_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0),
  (MR_PseudoTypeInfo) (&parse_tree__decide_type_repn__one_or_more__ti_one_or_more_1parse_tree__prog_item__type_ctor_info_remote_arg_repn_0)
};

static const MR_ConstString parse_tree__decide_type_repn__parse_tree__decide_type_repn__field_names_remote_shared_info_0_0[3] = {
  (MR_String) "rsi_ordinal",
  (MR_String) "rsi_sectag",
  (MR_String) "rsi_arg_repns"
};

static const MR_DuFunctorDesc parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_functor_desc_remote_shared_info_0_0 = {
  (MR_String) "remote_shared_info",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__decide_type_repn__parse_tree__decide_type_repn__field_types_remote_shared_info_0_0,
  parse_tree__decide_type_repn__parse_tree__decide_type_repn__field_names_remote_shared_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_stag_ordered_remote_shared_info_0_0[1] = {
  &parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_functor_desc_remote_shared_info_0_0
};

static const MR_DuPtagLayout parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_ptag_ordered_remote_shared_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_stag_ordered_remote_shared_info_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_name_ordered_remote_shared_info_0[1] = {
  &parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_functor_desc_remote_shared_info_0_0
};

static const MR_Integer parse_tree__decide_type_repn__parse_tree__decide_type_repn__functor_number_map_remote_shared_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_remote_shared_info_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__decide_type_repn____Unify____remote_shared_info_0_0_10001)),
  ((MR_Box) (parse_tree__decide_type_repn____Compare____remote_shared_info_0_0_10001)),
  (MR_String) "parse_tree.decide_type_repn",
  (MR_String) "remote_shared_info",
  {     parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_name_ordered_remote_shared_info_0 },
  {     parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_ptag_ordered_remote_shared_info_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  parse_tree__decide_type_repn__parse_tree__decide_type_repn__functor_number_map_remote_shared_info_0
};

static const MR_FA_TypeInfo_Struct2 parse_tree__decide_type_repn__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__decide_type_repn__type_ctor_info_simple_du_repn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_TypeInfo) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_simple_du_repn_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_simple_du_map_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__decide_type_repn____Unify____simple_du_map_0_0_10001)),
  ((MR_Box) (parse_tree__decide_type_repn____Compare____simple_du_map_0_0_10001)),
  (MR_String) "parse_tree.decide_type_repn",
  (MR_String) "simple_du_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&parse_tree__decide_type_repn__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__decide_type_repn__type_ctor_info_simple_du_repn_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_FA_TypeInfo_Struct1 parse_tree__decide_type_repn__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__decide_type_repn__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__decide_type_repn__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__decide_type_repn__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_PseudoTypeInfo parse_tree__decide_type_repn__parse_tree__decide_type_repn__field_types_simple_du_repn_0_0[3] = {
  (MR_PseudoTypeInfo) (&parse_tree__decide_type_repn__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__decide_type_repn__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_direct_dummy_repn_0)
};

static const MR_DuFunctorDesc parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_functor_desc_simple_du_repn_0_0 = {
  (MR_String) "sdr_direct_dummy",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__decide_type_repn__parse_tree__decide_type_repn__field_types_simple_du_repn_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__decide_type_repn__parse_tree__decide_type_repn__field_types_simple_du_repn_0_1[3] = {
  (MR_PseudoTypeInfo) (&parse_tree__decide_type_repn__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__decide_type_repn__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_enum_repn_0)
};

static const MR_DuFunctorDesc parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_functor_desc_simple_du_repn_0_1 = {
  (MR_String) "sdr_enum",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__decide_type_repn__parse_tree__decide_type_repn__field_types_simple_du_repn_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__decide_type_repn__parse_tree__decide_type_repn__field_types_simple_du_repn_0_2[3] = {
  (MR_PseudoTypeInfo) (&parse_tree__decide_type_repn__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__decide_type_repn__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_notag_repn_0)
};

static const MR_DuFunctorDesc parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_functor_desc_simple_du_repn_0_2 = {
  (MR_String) "sdr_notag",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  parse_tree__decide_type_repn__parse_tree__decide_type_repn__field_types_simple_du_repn_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_stag_ordered_simple_du_repn_0_0[1] = {
  &parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_functor_desc_simple_du_repn_0_0
};

static const MR_DuFunctorDescPtr parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_stag_ordered_simple_du_repn_0_1[1] = {
  &parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_functor_desc_simple_du_repn_0_1
};

static const MR_DuFunctorDescPtr parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_stag_ordered_simple_du_repn_0_2[1] = {
  &parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_functor_desc_simple_du_repn_0_2
};

static const MR_DuPtagLayout parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_ptag_ordered_simple_du_repn_0[3] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_stag_ordered_simple_du_repn_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_stag_ordered_simple_du_repn_0_1,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_stag_ordered_simple_du_repn_0_2,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_name_ordered_simple_du_repn_0[3] = {
  &parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_functor_desc_simple_du_repn_0_0,
  &parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_functor_desc_simple_du_repn_0_1,
  &parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_functor_desc_simple_du_repn_0_2
};

static const MR_Integer parse_tree__decide_type_repn__parse_tree__decide_type_repn__functor_number_map_simple_du_repn_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_simple_du_repn_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__decide_type_repn____Unify____simple_du_repn_0_0_10001)),
  ((MR_Box) (parse_tree__decide_type_repn____Compare____simple_du_repn_0_0_10001)),
  (MR_String) "parse_tree.decide_type_repn",
  (MR_String) "simple_du_repn",
  {     parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_name_ordered_simple_du_repn_0 },
  {     parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_ptag_ordered_simple_du_repn_0 },
  (MR_Integer) 3,
  UINT16_C(4),
  parse_tree__decide_type_repn__parse_tree__decide_type_repn__functor_number_map_simple_du_repn_0
};

static const MR_FA_TypeInfo_Struct1 parse_tree__decide_type_repn__set_tree234__ti_set_tree234_1parse_tree__prog_data__type_ctor_info_type_ctor_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_word_aligned_type_ctors_c_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__decide_type_repn____Unify____word_aligned_type_ctors_c_0_0_10001)),
  ((MR_Box) (parse_tree__decide_type_repn____Compare____word_aligned_type_ctors_c_0_0_10001)),
  (MR_String) "parse_tree.decide_type_repn",
  (MR_String) "word_aligned_type_ctors_c",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&parse_tree__decide_type_repn__set_tree234__ti_set_tree234_1parse_tree__prog_data__type_ctor_info_type_ctor_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_EnumFunctorDesc parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_functor_desc_word_size_0_0 = {
  (MR_String) "word_size_64",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_functor_desc_word_size_0_1 = {
  (MR_String) "word_size_32",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_value_ordered_word_size_0[2] = {
  &parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_functor_desc_word_size_0_0,
  &parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_functor_desc_word_size_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_name_ordered_word_size_0[2] = {
  &parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_functor_desc_word_size_0_1,
  &parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_functor_desc_word_size_0_0
};

static const MR_Integer parse_tree__decide_type_repn__parse_tree__decide_type_repn__functor_number_map_word_size_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_word_size_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__decide_type_repn____Unify____word_size_0_0_10001)),
  ((MR_Box) (parse_tree__decide_type_repn____Compare____word_size_0_0_10001)),
  (MR_String) "parse_tree.decide_type_repn",
  (MR_String) "word_size",
  {     parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_name_ordered_word_size_0 },
  {     parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_value_ordered_word_size_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  parse_tree__decide_type_repn__parse_tree__decide_type_repn__functor_number_map_word_size_0
};

static MR_bool MR_CALL 
parse_tree__decide_type_repn__IntroducedFrom__pred__separate_out_constants__2330__1_2_p_0(
  MR_Word HeadVar__1_25,
  MR_Word HeadVar__2_27)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__prog_data____Unify____maybe_cons_exist_constraints_0_0(HeadVar__2_27, HeadVar__1_25);
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__decide_type_repn__IntroducedFrom__pred__assign_repns_to_direct_arg_functors__1468__1_2_p_0(
  MR_Integer NumArgs_30,
  MR_Integer HeadVar__2_45)
{
  {
    MR_bool succeeded = (NumArgs_30 == HeadVar__2_45);

    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__decide_type_repn__IntroducedFrom__pred__assign_repns_to_local_packed_functors__1445__1_2_p_0(
  MR_Unsigned NextShift_32,
  MR_Unsigned HeadVar__2_46)
{
  {
    MR_bool succeeded = (NextShift_32 == HeadVar__2_46);

    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__decide_type_repn__IntroducedFrom__pred__assign_repns_to_local_packed_functors__1438__1_2_p_0(
  MR_Integer NumArgs_26,
  MR_Integer HeadVar__2_42)
{
  {
    MR_bool succeeded = (NumArgs_26 == HeadVar__2_42);

    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__decide_type_repn__IntroducedFrom__pred__assign_repns_to_constants__1420__1_2_p_0(
  MR_Integer NumArgs_23,
  MR_Integer HeadVar__2_33)
{
  {
    MR_bool succeeded = (NumArgs_23 == HeadVar__2_33);

    return succeeded;
  }
}

static MR_Word MR_CALL 
parse_tree__decide_type_repn__IntroducedFrom__func__look_up_functor_repns__1384__1_1_f_0(
  MR_Word LambdaHeadVar__1_50)
{
  {
    MR_Word LambdaHeadVar__2_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_50, (MR_Integer) 1))));

    return LambdaHeadVar__2_51;
  }
}

static MR_Word MR_CALL 
parse_tree__decide_type_repn__IntroducedFrom__func__decide_type_repns_stage_2_du_gen_only_functor__816__1_1_f_0(
  MR_Word LambdaHeadVar__1_56)
{
  {
    MR_Word LambdaHeadVar__2_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_56, (MR_Integer) 1))));

    return LambdaHeadVar__2_57;
  }
}

static MR_bool MR_CALL 
parse_tree__decide_type_repn__IntroducedFrom__pred__decide_type_repns_stage_2_du_gen__757__1_2_p_0(
  MR_Integer Arity_29,
  MR_Integer NumTypeParams_30)
{
  {
    MR_bool succeeded = (NumTypeParams_30 == Arity_29);

    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__decide_type_repn__IntroducedFrom__pred__decide_type_repns_stage_2_du_gen__756__1_2_p_0(
  MR_Word TypeCtorSymName_22,
  MR_Word SymName_28)
{
  {
    MR_bool succeeded;

    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(TypeCtorSymName_22, SymName_28);
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__decide_type_repn__IntroducedFrom__pred__record_type_repn_in_parse_tree_int3__670__1_2_p_0(
  MR_Word TypeCtor_25,
  MR_Word RepnTypeCtor_36)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(TypeCtor_25, RepnTypeCtor_36);
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__decide_type_repn____Compare____word_size_0_0(
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

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____word_size_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
parse_tree__decide_type_repn____Compare____word_aligned_type_ctors_c_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__decide_type_repn_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____word_aligned_type_ctors_c_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__decide_type_repn_scalar_common_1[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__decide_type_repn____Compare____simple_du_repn_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_64 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_65 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_64 == CastY_65);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
            MR_Word Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
            MR_Word Var_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
                  MR_Word SubResult1_6;

                  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__decide_type_repn_scalar_common_1[8]), &SubResult1_6, ((MR_Box) (Var_77)), ((MR_Box) (ArgY1_5)));
                  succeeded = (SubResult1_6 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_6;
                  else
                  {
                    MR_Word SubResult2_9;

                    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__decide_type_repn_scalar_common_1[9]), &SubResult2_9, ((MR_Box) (Var_76)), ((MR_Box) (ArgY2_8)));
                    succeeded = (SubResult2_9 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult2_9;
                    else
                      parse_tree__prog_item____Compare____direct_dummy_repn_0_0(HeadVar__1_1, Var_75, ArgY3_11);
                  }
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_78 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
            MR_Word Var_79 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
            MR_Word Var_80 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Word ArgY2_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word ArgY3_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 2))));
                  MR_Word SubResult1_32;

                  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__decide_type_repn_scalar_common_1[8]), &SubResult1_32, ((MR_Box) (Var_80)), ((MR_Box) (ArgY1_31)));
                  succeeded = (SubResult1_32 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_32;
                  else
                  {
                    MR_Word SubResult2_35;

                    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__decide_type_repn_scalar_common_1[9]), &SubResult2_35, ((MR_Box) (Var_79)), ((MR_Box) (ArgY2_34)));
                    succeeded = (SubResult2_35 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult2_35;
                    else
                      parse_tree__prog_item____Compare____enum_repn_0_0(HeadVar__1_1, Var_78, ArgY3_37);
                  }
                }
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_81 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2))));
            MR_Word Var_82 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
            MR_Word Var_83 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ArgY1_57 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Word ArgY2_60 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word ArgY3_63 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 2))));
                  MR_Word SubResult1_58;

                  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__decide_type_repn_scalar_common_1[8]), &SubResult1_58, ((MR_Box) (Var_83)), ((MR_Box) (ArgY1_57)));
                  succeeded = (SubResult1_58 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_58;
                  else
                  {
                    MR_Word SubResult2_61;

                    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__decide_type_repn_scalar_common_1[9]), &SubResult2_61, ((MR_Box) (Var_82)), ((MR_Box) (ArgY2_60)));
                    succeeded = (SubResult2_61 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult2_61;
                    else
                      parse_tree__prog_item____Compare____notag_repn_0_0(HeadVar__1_1, Var_81, ArgY3_63);
                  }
                }
                break;
            }
          }
          break;
      }
  }
}

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____simple_du_repn_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_21 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_22 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_21 == CastY_22);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word TypeInfo_23_23;
            MR_Word TypeInfo_24_24;
            MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_4;
            MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word ArgY2_6;
            MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
            MR_Word ArgY3_8;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
            if (succeeded)
            {
              ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
              ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
              TypeInfo_23_23 = (MR_Word) (&parse_tree__decide_type_repn_scalar_common_1[8]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_23_23, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
              if (succeeded)
              {
                TypeInfo_24_24 = (MR_Word) (&parse_tree__decide_type_repn_scalar_common_1[9]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_24_24, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
                if (succeeded)
                  succeeded = parse_tree__prog_item____Unify____direct_dummy_repn_0_0(ArgX3_7, ArgY3_8);
              }
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word TypeInfo_26_26;
            MR_Word TypeInfo_27_27;
            MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_10;
            MR_Word ArgX2_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word ArgY2_12;
            MR_Word ArgX3_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2))));
            MR_Word ArgY3_14;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
              ArgY3_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
              TypeInfo_26_26 = (MR_Word) (&parse_tree__decide_type_repn_scalar_common_1[8]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_26_26, ((MR_Box) (ArgX1_9)), ((MR_Box) (ArgY1_10)));
              if (succeeded)
              {
                TypeInfo_27_27 = (MR_Word) (&parse_tree__decide_type_repn_scalar_common_1[9]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_27_27, ((MR_Box) (ArgX2_11)), ((MR_Box) (ArgY2_12)));
                if (succeeded)
                  succeeded = parse_tree__prog_item____Unify____enum_repn_0_0(ArgX3_13, ArgY3_14);
              }
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word TypeInfo_29_29;
            MR_Word TypeInfo_30_30;
            MR_Word ArgX1_15 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_16;
            MR_Word ArgX2_17 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word ArgY2_18;
            MR_Word ArgX3_19 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 2))));
            MR_Word ArgY3_20;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_16 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_18 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
              ArgY3_20 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2))));
              TypeInfo_29_29 = (MR_Word) (&parse_tree__decide_type_repn_scalar_common_1[8]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_29_29, ((MR_Box) (ArgX1_15)), ((MR_Box) (ArgY1_16)));
              if (succeeded)
              {
                TypeInfo_30_30 = (MR_Word) (&parse_tree__decide_type_repn_scalar_common_1[9]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_30_30, ((MR_Box) (ArgX2_17)), ((MR_Box) (ArgY2_18)));
                if (succeeded)
                  succeeded = parse_tree__prog_item____Unify____notag_repn_0_0(ArgX3_19, ArgY3_20);
              }
            }
          }
          break;
      }
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__decide_type_repn____Compare____simple_du_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__decide_type_repn_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____simple_du_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__decide_type_repn_scalar_common_2[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__decide_type_repn____Compare____remote_shared_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      uint32_t ArgX1_4 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      uint32_t ArgY1_5 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Unsigned ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Unsigned ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word SubResult1_6;

      succeeded = (ArgX1_4 < ArgY1_5);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (ArgX1_4 > ArgY1_5);
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
      {
        MR_Word SubResult2_9;

        succeeded = (ArgX2_7 < ArgY2_8);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (ArgX2_7 > ArgY2_8);
          if (succeeded)
          {
            SubResult2_9 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = MR_TRUE;
            succeeded = !(succeeded);
            if (succeeded)
            {
              SubResult2_9 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
          }
        }
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
          mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__decide_type_repn_scalar_common_1[7]), HeadVar__1_1, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
      }
    }
  }
}

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____remote_shared_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_11_11;
      uint32_t ArgX1_3 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      uint32_t ArgY1_4 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Unsigned ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Unsigned ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
      {
        succeeded = (ArgX2_5 == ArgY2_6);
        if (succeeded)
        {
          TypeInfo_11_11 = (MR_Word) (&parse_tree__decide_type_repn_scalar_common_1[7]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__decide_type_repn____Compare____platform_params_0_0(
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
      MR_Word ArgX1_4 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgY1_5 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgX2_7 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgY2_8 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_6;
      MR_Integer Var_21 = (MR_Integer) (ArgX1_4);
      MR_Integer Var_22 = (MR_Integer) (ArgY1_5);

      succeeded = (Var_21 < Var_22);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (Var_21 > Var_22);
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
      {
        MR_Word SubResult2_9;
        MR_Integer Var_23 = (MR_Integer) (ArgX2_7);
        MR_Integer Var_24 = (MR_Integer) (ArgY2_8);

        succeeded = (Var_23 < Var_24);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (Var_23 > Var_24);
          if (succeeded)
          {
            SubResult2_9 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = MR_TRUE;
            succeeded = !(succeeded);
            if (succeeded)
            {
              SubResult2_9 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
          }
        }
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;
          MR_Integer Var_25 = (MR_Integer) (ArgX3_10);
          MR_Integer Var_26 = (MR_Integer) (ArgY3_11);

          succeeded = (Var_25 < Var_26);
          if (succeeded)
          {
            SubResult3_12 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (Var_25 > Var_26);
            if (succeeded)
            {
              SubResult3_12 = (MR_Integer) 2;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = MR_TRUE;
              succeeded = !(succeeded);
              if (succeeded)
              {
                SubResult3_12 = (MR_Integer) 0;
                succeeded = MR_TRUE;
              }
            }
          }
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
            parse_tree__decide_type_repn____Compare____base_params_0_0(HeadVar__1_1, ArgX4_13, ArgY4_14);
        }
      }
    }
  }
}

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____platform_params_0_0(
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
      MR_Word ArgX1_3 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgY1_4 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgX2_5 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgY2_6 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
      {
        succeeded = (ArgX2_5 == ArgY2_6);
        if (succeeded)
        {
          succeeded = (ArgX3_7 == ArgY3_8);
          if (succeeded)
            succeeded = parse_tree__decide_type_repn____Unify____base_params_0_0(ArgX4_9, ArgY4_10);
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__decide_type_repn____Compare____packable_constructor_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Unsigned ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Unsigned ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word SubResult1_6;

      parse_tree__prog_data____Compare____constructor_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__decide_type_repn_scalar_common_1[6]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
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
}

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____packable_constructor_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Unsigned ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Unsigned ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));

      succeeded = parse_tree__prog_data____Unify____constructor_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        TypeInfo_12_12 = (MR_Word) (&parse_tree__decide_type_repn_scalar_common_1[6]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
          succeeded = (ArgX3_7 == ArgY3_8);
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__decide_type_repn____Compare____packable_arg_0_0(
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

      parse_tree__prog_data____Compare____constructor_arg_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
        parse_tree__decide_type_repn____Compare____arg_pack_class_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
    }
  }
}

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____packable_arg_0_0(
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
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

      succeeded = parse_tree__prog_data____Unify____constructor_arg_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
        succeeded = parse_tree__decide_type_repn____Unify____arg_pack_class_0_0(ArgX2_5, ArgY2_6);
    }
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__decide_type_repn____Compare____must_mask_remote_sectag_0_0(
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

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____must_mask_remote_sectag_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
parse_tree__decide_type_repn____Compare____maybe_treat_as_first_arg_0_0(
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

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____maybe_treat_as_first_arg_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
parse_tree__decide_type_repn____Compare____maybe_double_word_int64s_0_0(
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

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____maybe_double_word_int64s_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
parse_tree__decide_type_repn____Compare____maybe_double_word_floats_0_0(
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

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____maybe_double_word_floats_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
parse_tree__decide_type_repn____Compare____maybe_direct_args_0_0(
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

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____maybe_direct_args_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
parse_tree__decide_type_repn____Compare____eqv_repn_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__decide_type_repn_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____eqv_repn_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__decide_type_repn_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__decide_type_repn____Compare____ctor_repn_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__decide_type_repn_scalar_common_2[3]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____ctor_repn_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__decide_type_repn_scalar_common_2[3]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__decide_type_repn____Compare____ctor_repn_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
    {
      MR_Word Var_16 = (MR_Word) ((MR_Word) (HeadVar__2_2));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
      {
        MR_Word ArgY1_5 = (MR_Word) ((MR_Word) (HeadVar__3_3));

        parse_tree__prog_item____Compare____constant_repn_0_0(HeadVar__1_1, Var_16, ArgY1_5);
      }
      else
        *HeadVar__1_1 = (MR_Integer) 1;
    }
    else
    {
      MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word ArgY1_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

        parse_tree__prog_item____Compare____nonconstant_repn_0_0(HeadVar__1_1, Var_17, ArgY1_11);
      }
    }
  }
}

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____ctor_repn_0_0(
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
    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
    {
      MR_Word ArgX1_3 = (MR_Word) ((MR_Word) (HeadVar__1_1));
      MR_Word ArgY1_4;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
      if (succeeded)
      {
        ArgY1_4 = (MR_Word) ((MR_Word) (HeadVar__2_2));
        succeeded = parse_tree__prog_item____Unify____constant_repn_0_0(ArgX1_3, ArgY1_4);
      }
    }
    else
    {
      MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_6;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
      if (succeeded)
      {
        ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        succeeded = parse_tree__prog_item____Unify____nonconstant_repn_0_0(ArgX1_5, ArgY1_6);
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__decide_type_repn____Compare____classified_constructor_0_0(
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

      parse_tree__prog_data____Compare____constructor_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__decide_type_repn_scalar_common_1[5]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
    }
  }
}

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____classified_constructor_0_0(
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

      succeeded = parse_tree__prog_data____Unify____constructor_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        TypeInfo_10_10 = (MR_Word) (&parse_tree__decide_type_repn_scalar_common_1[5]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__decide_type_repn____Compare____classified_arg_0_0(
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

      parse_tree__prog_data____Compare____constructor_arg_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
        parse_tree__decide_type_repn____Compare____arg_class_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
    }
  }
}

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____classified_arg_0_0(
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
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

      succeeded = parse_tree__prog_data____Unify____constructor_arg_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
        succeeded = parse_tree__decide_type_repn____Unify____arg_class_0_0(ArgX2_5, ArgY2_6);
    }
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__decide_type_repn____Compare____base_params_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_21 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_22 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_21 == CastY_22);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 5)) & (MR_Integer) 1);
      MR_Word ArgY1_5 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 5)) & (MR_Integer) 1);
      MR_Word ArgX2_7 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 4)) & (MR_Integer) 1);
      MR_Word ArgY2_8 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 4)) & (MR_Integer) 1);
      MR_Word ArgX3_10 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);
      MR_Word ArgY3_11 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);
      MR_Word ArgX4_13 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgY4_14 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgX5_16 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgY5_17 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgX6_19 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgY6_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word SubResult1_6;
      MR_Integer Var_29 = (MR_Integer) (ArgX1_4);
      MR_Integer Var_30 = (MR_Integer) (ArgY1_5);

      succeeded = (Var_29 < Var_30);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (Var_29 > Var_30);
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
      {
        MR_Word SubResult2_9;
        MR_Integer Var_31 = (MR_Integer) (ArgX2_7);
        MR_Integer Var_32 = (MR_Integer) (ArgY2_8);

        succeeded = (Var_31 < Var_32);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (Var_31 > Var_32);
          if (succeeded)
          {
            SubResult2_9 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = MR_TRUE;
            succeeded = !(succeeded);
            if (succeeded)
            {
              SubResult2_9 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
          }
        }
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;
          MR_Integer Var_33 = (MR_Integer) (ArgX3_10);
          MR_Integer Var_34 = (MR_Integer) (ArgY3_11);

          succeeded = (Var_33 < Var_34);
          if (succeeded)
          {
            SubResult3_12 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (Var_33 > Var_34);
            if (succeeded)
            {
              SubResult3_12 = (MR_Integer) 2;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = MR_TRUE;
              succeeded = !(succeeded);
              if (succeeded)
              {
                SubResult3_12 = (MR_Integer) 0;
                succeeded = MR_TRUE;
              }
            }
          }
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
          {
            MR_Word SubResult4_15;
            MR_Integer Var_35 = (MR_Integer) (ArgX4_13);
            MR_Integer Var_36 = (MR_Integer) (ArgY4_14);

            succeeded = (Var_35 < Var_36);
            if (succeeded)
            {
              SubResult4_15 = (MR_Integer) 1;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = (Var_35 > Var_36);
              if (succeeded)
              {
                SubResult4_15 = (MR_Integer) 2;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = MR_TRUE;
                succeeded = !(succeeded);
                if (succeeded)
                {
                  SubResult4_15 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
              }
            }
            if (succeeded)
              *HeadVar__1_1 = SubResult4_15;
            else
            {
              MR_Word SubResult5_18;
              MR_Integer Var_37 = (MR_Integer) (ArgX5_16);
              MR_Integer Var_38 = (MR_Integer) (ArgY5_17);

              succeeded = (Var_37 < Var_38);
              if (succeeded)
              {
                SubResult5_18 = (MR_Integer) 1;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = (Var_37 > Var_38);
                if (succeeded)
                {
                  SubResult5_18 = (MR_Integer) 2;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = MR_TRUE;
                  succeeded = !(succeeded);
                  if (succeeded)
                  {
                    SubResult5_18 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                }
              }
              if (succeeded)
                *HeadVar__1_1 = SubResult5_18;
              else
              {
                MR_Integer Var_39 = (MR_Integer) (ArgX6_19);
                MR_Integer Var_40 = (MR_Integer) (ArgY6_20);

                succeeded = (Var_39 < Var_40);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 1;
                else
                {
                  succeeded = (Var_39 > Var_40);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 2;
                  else
                    *HeadVar__1_1 = (MR_Integer) 0;
                }
              }
            }
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____base_params_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_15 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_16 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_15 == CastY_16);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 5)) & (MR_Integer) 1);
      MR_Word ArgY1_4 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 5)) & (MR_Integer) 1);
      MR_Word ArgX2_5 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 4)) & (MR_Integer) 1);
      MR_Word ArgY2_6 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 4)) & (MR_Integer) 1);
      MR_Word ArgX3_7 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);
      MR_Word ArgY3_8 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);
      MR_Word ArgX4_9 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgY4_10 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgX5_11 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgY5_12 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgX6_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgY6_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
      {
        succeeded = (ArgX2_5 == ArgY2_6);
        if (succeeded)
        {
          succeeded = (ArgX3_7 == ArgY3_8);
          if (succeeded)
          {
            succeeded = (ArgX4_9 == ArgY4_10);
            if (succeeded)
            {
              succeeded = (ArgX5_11 == ArgY5_12);
              if (succeeded)
                succeeded = (ArgX6_13 == ArgY6_14);
            }
          }
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__decide_type_repn____Compare____arg_pack_class_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_8 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_9 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_8 == CastY_9);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

        parse_tree__prog_item____Compare____fill_kind_size_0_0(HeadVar__1_1, Var_11, ArgY1_5);
      }
    }
  }
}

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____arg_pack_class_0_0(
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
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
      MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

      succeeded = (CastY_6 == CastX_5);
    }
    else
    {
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        succeeded = parse_tree__prog_item____Unify____fill_kind_size_0_0(ArgX1_3, ArgY1_4);
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__decide_type_repn____Compare____arg_class_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_20 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_21 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_20 == CastY_21);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

                  parse_tree__prog_item____Compare____fill_kind_size_0_0(HeadVar__1_1, Var_25, ArgY1_5);
                }
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_24 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 3);

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ArgY1_19 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 3);
                  MR_Integer Var_26 = (MR_Integer) (Var_24);
                  MR_Integer Var_27 = (MR_Integer) (ArgY1_19);

                  succeeded = (Var_26 < Var_27);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (Var_26 > Var_27);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 2;
                    else
                      *HeadVar__1_1 = (MR_Integer) 0;
                  }
                }
                break;
            }
          }
          break;
      }
  }
}

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____arg_class_0_0(
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
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_6 == CastX_5);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_8 == CastX_7);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_4;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = parse_tree__prog_item____Unify____fill_kind_size_0_0(ArgX1_3, ArgY1_4);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ArgX1_9 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 3);
            MR_Word ArgY1_10;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 3);
              succeeded = (ArgX1_9 == ArgY1_10);
            }
          }
          break;
      }
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__decide_type_repn__is_direct_arg_ctor_for_c_2_p_0(
  MR_Word WordAlignedTypeCtorsC_3,
  MR_Word ClassifiedCtor_4)
{
  {
    MR_bool succeeded;
    MR_Word Ctor_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassifiedCtor_4, (MR_Integer) 0))));
    MR_Word MaybeExistConstraints_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_5, (MR_Integer) 1))));
    MR_Word ConsArgs_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_5, (MR_Integer) 3))));
    MR_Word ConsArg_13;
    MR_Word ArgType_15;
    MR_Word ArgTypeCtor_17;
    MR_Word Var_18;

    succeeded = (MaybeExistConstraints_8 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = (ConsArgs_10 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ConsArg_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ConsArgs_10, (MR_Integer) 0))));
        Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ConsArgs_10, (MR_Integer) 1))));
        succeeded = (Var_18 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ArgType_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsArg_13, (MR_Integer) 1))));
          succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(ArgType_15, &ArgTypeCtor_17);
          if (succeeded)
          {
            succeeded = parse_tree__prog_type__type_ctor_is_tuple_1_p_0(ArgTypeCtor_17);
            if (succeeded)
              succeeded = MR_TRUE;
            else
              succeeded = mercury__set_tree234__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (ArgTypeCtor_17)), WordAlignedTypeCtorsC_3);
          }
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__decide_type_repn__compare_packable_ctors_by_ordinal_3_p_0(
  MR_Word PackableCtorA_4,
  MR_Word PackableCtorB_5,
  MR_Word * Result_6)
{
  {
    MR_bool succeeded;
    MR_Word CtorA_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PackableCtorA_4, (MR_Integer) 0))));
    MR_Word CtorB_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PackableCtorB_5, (MR_Integer) 0))));
    uint32_t OrdinalA_13 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(0), CtorA_7, (MR_Integer) 0)));
    uint32_t OrdinalB_14 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(0), CtorB_10, (MR_Integer) 0)));

    succeeded = (OrdinalA_13 < OrdinalB_14);
    if (succeeded)
      *Result_6 = (MR_Integer) 1;
    else
    {
      succeeded = (OrdinalA_13 > OrdinalB_14);
      if (succeeded)
        *Result_6 = (MR_Integer) 2;
      else
        *Result_6 = (MR_Integer) 0;
    }
  }
}

static void MR_CALL 
parse_tree__decide_type_repn__compare_packable_ctors_by_numbits_then_ordinal_3_p_0(
  MR_Word PackableCtorA_4,
  MR_Word PackableCtorB_5,
  MR_Word * Result_6)
{
  {
    MR_bool succeeded;
    MR_Word CtorA_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PackableCtorA_4, (MR_Integer) 0))));
    MR_Unsigned NumBitsA_9 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PackableCtorA_4, (MR_Integer) 2))));
    MR_Word CtorB_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PackableCtorB_5, (MR_Integer) 0))));
    MR_Unsigned NumBitsB_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PackableCtorB_5, (MR_Integer) 2))));

    succeeded = (NumBitsA_9 < NumBitsB_12);
    if (succeeded)
      *Result_6 = (MR_Integer) 1;
    else
    {
      succeeded = (NumBitsA_9 > NumBitsB_12);
      if (succeeded)
        *Result_6 = (MR_Integer) 2;
      else
      {
        uint32_t OrdinalA_14 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(0), CtorA_7, (MR_Integer) 0)));
        uint32_t OrdinalB_15 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(0), CtorB_10, (MR_Integer) 0)));

        succeeded = (OrdinalA_14 < OrdinalB_15);
        if (succeeded)
          *Result_6 = (MR_Integer) 1;
        else
        {
          succeeded = (OrdinalA_14 > OrdinalB_15);
          if (succeeded)
            *Result_6 = (MR_Integer) 2;
          else
            *Result_6 = (MR_Integer) 0;
        }
      }
    }
  }
}

static MR_Word MR_CALL 
parse_tree__decide_type_repn__packable_to_classified_arg_1_f_0(
  MR_Word PackableArg_3)
{
  {
    MR_Word ClassifiedArg_4;
    MR_Word Arg_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PackableArg_3, (MR_Integer) 0))));
    MR_Word PackClass_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PackableArg_3, (MR_Integer) 1))));
    MR_Word Class_8;

    if ((PackClass_6 == (MR_Word) ((MR_Unsigned) 0U)))
      Class_8 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word FillKindSize_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PackClass_6, (MR_Integer) 0))));

      {
        Class_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Class_8, 0) = ((MR_Box) (FillKindSize_7));
      }
    }
    {
      ClassifiedArg_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ClassifiedArg_4, 0) = ((MR_Box) (Arg_5));
      MR_hl_field(MR_mktag(0), ClassifiedArg_4, 1) = ((MR_Box) (Class_8));
    }
    return ClassifiedArg_4;
  }
}

static MR_Box MR_CALL 
parse_tree__decide_type_repn__packable_to_classified_constructor_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_ClassifiedArg_4;

    conv0_ClassifiedArg_4 = parse_tree__decide_type_repn__packable_to_classified_arg_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_ClassifiedArg_4));
    return wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
parse_tree__decide_type_repn__packable_to_classified_constructor_1_f_0(
  MR_Word PackableCtor_3)
{
  {
    MR_Word ClassifiedCtor_4;
    MR_Word Ctor_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PackableCtor_3, (MR_Integer) 0))));
    MR_Word PackableArgs_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PackableCtor_3, (MR_Integer) 1))));
    MR_Word ClassifiedArgs_8;

    ClassifiedArgs_8 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_packable_arg_0), (MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_classified_arg_0), (MR_Word) (&parse_tree__decide_type_repn_scalar_common_2[15]), PackableArgs_6);
    {
      ClassifiedCtor_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ClassifiedCtor_4, 0) = ((MR_Box) (Ctor_5));
      MR_hl_field(MR_mktag(0), ClassifiedCtor_4, 1) = ((MR_Box) (ClassifiedArgs_8));
    }
    return ClassifiedCtor_4;
  }
}

static void MR_CALL 
parse_tree__decide_type_repn__decide_all_type_repns_stage_2_11_p_0(
  MR_Word BaseParams_12,
  MR_Word EqvRepnMap_13,
  MR_Word EqvMap_14,
  MR_Word WordAlignedTypeCtorsC_15,
  MR_Word SimpleDuMap_16,
  MR_Word TypeCtor_17,
  MR_Word CheckedDefn_18,
  MR_Word STATE_VARIABLE_Int1RepnMap_0_46,
  MR_Word * STATE_VARIABLE_Int1RepnMap_47,
  MR_Word STATE_VARIABLE_Specs_0_48,
  MR_Word * STATE_VARIABLE_Specs_49)
{
  if (((MR_tag((MR_Word) CheckedDefn_18)) == (MR_Integer) 0))
  {
    *STATE_VARIABLE_Int1RepnMap_47 = STATE_VARIABLE_Int1RepnMap_0_46;
    *STATE_VARIABLE_Specs_49 = STATE_VARIABLE_Specs_0_48;
  }
  else
  {
    MR_Word StdDefn_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CheckedDefn_18, (MR_Integer) 0))));

    switch (MR_tag((MR_Word) StdDefn_22)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word EqvRepnItem0_25;
          MR_Word EqvRepnItem_26;
          MR_Box conv1_EqvRepnItem0_25;

          mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__decide_type_repn_scalar_common_1[0]), EqvRepnMap_13, ((MR_Box) (TypeCtor_17)), &conv1_EqvRepnItem0_25);
          EqvRepnItem0_25 = ((MR_Word) (conv1_EqvRepnItem0_25));
          parse_tree__equiv_type__replace_in_type_repn_eqv_5_p_0(EqvMap_14, EqvRepnItem0_25, &EqvRepnItem_26, STATE_VARIABLE_Specs_0_48, STATE_VARIABLE_Specs_49);
          parse_tree__decide_type_repn__add_eqv_repn_item_4_p_0(TypeCtor_17, EqvRepnItem_26, STATE_VARIABLE_Int1RepnMap_0_46, STATE_VARIABLE_Int1RepnMap_47);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word SimpleDuRepn_32;
          MR_Word TypeParams_71;
          MR_Word TVarSet_72;
          MR_Word DuRepn_74;
          MR_Word TypeCtorSymName_77;
          MR_Word Item_79;
          MR_Word Var_80;
          MR_Word Var_81;
          MR_Box conv0_SimpleDuRepn_32;

          mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_simple_du_repn_0), SimpleDuMap_16, ((MR_Box) (TypeCtor_17)), &conv0_SimpleDuRepn_32);
          SimpleDuRepn_32 = ((MR_Word) (conv0_SimpleDuRepn_32));
          switch (MR_tag((MR_Word) SimpleDuRepn_32)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word DirectDummyRepn_73;

                TypeParams_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SimpleDuRepn_32, (MR_Integer) 0))));
                TVarSet_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SimpleDuRepn_32, (MR_Integer) 1))));
                DirectDummyRepn_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SimpleDuRepn_32, (MR_Integer) 2))));
                DuRepn_74 = (MR_Word) ((MR_Word) (DirectDummyRepn_73));
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word EnumRepn_75;

                TypeParams_71 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SimpleDuRepn_32, (MR_Integer) 0))));
                TVarSet_72 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SimpleDuRepn_32, (MR_Integer) 1))));
                EnumRepn_75 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SimpleDuRepn_32, (MR_Integer) 2))));
                DuRepn_74 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (EnumRepn_75)));
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word NotagRepn_76;

                TypeParams_71 = ((MR_Word) ((MR_hl_field(MR_mktag(2), SimpleDuRepn_32, (MR_Integer) 0))));
                TVarSet_72 = ((MR_Word) ((MR_hl_field(MR_mktag(2), SimpleDuRepn_32, (MR_Integer) 1))));
                NotagRepn_76 = ((MR_Word) ((MR_hl_field(MR_mktag(2), SimpleDuRepn_32, (MR_Integer) 2))));
                DuRepn_74 = (MR_Word) (MR_mkword(MR_mktag(2), (MR_Word) (NotagRepn_76)));
              }
              break;
          }
          TypeCtorSymName_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_17, (MR_Integer) 0))));
          {
            Var_80 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_80, 0) = ((MR_Box) (DuRepn_74));
          }
          Var_81 = mercury__term__context_init_0_f_0();
          {
            Item_79 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Item_79, 0) = ((MR_Box) (TypeCtorSymName_77));
            MR_hl_field(MR_mktag(0), Item_79, 1) = ((MR_Box) (TypeParams_71));
            MR_hl_field(MR_mktag(0), Item_79, 2) = ((MR_Box) (Var_80));
            MR_hl_field(MR_mktag(0), Item_79, 3) = ((MR_Box) (TVarSet_72));
            MR_hl_field(MR_mktag(0), Item_79, 4) = ((MR_Box) (Var_81));
            MR_hl_field(MR_mktag(0), Item_79, 5) = ((MR_Box) ((MR_Integer) -1));
          }
          mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__decide_type_repn_scalar_common_1[2]), ((MR_Box) (TypeCtor_17)), ((MR_Box) (Item_79)), STATE_VARIABLE_Int1RepnMap_0_46, STATE_VARIABLE_Int1RepnMap_47);
          *STATE_VARIABLE_Specs_49 = STATE_VARIABLE_Specs_0_48;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word DuDefn_34 = ((MR_Word) ((MR_hl_field(MR_mktag(2), StdDefn_22, (MR_Integer) 1))));
          MR_Word MaybeDefnCJCsE_35 = ((MR_Word) ((MR_hl_field(MR_mktag(2), StdDefn_22, (MR_Integer) 2))));

          parse_tree__decide_type_repn__decide_type_repns_stage_2_du_gen_11_p_0(BaseParams_12, EqvMap_14, WordAlignedTypeCtorsC_15, SimpleDuMap_16, TypeCtor_17, DuDefn_34, MaybeDefnCJCsE_35, STATE_VARIABLE_Int1RepnMap_0_46, STATE_VARIABLE_Int1RepnMap_47, STATE_VARIABLE_Specs_0_48, STATE_VARIABLE_Specs_49);
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word AbsDefn_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), StdDefn_22, (MR_Integer) 1))));
          MR_Word RepnCJCsE_38;
          MR_Word TypeCtorSymName_39;
          MR_Word TypeParams_40;
          MR_Word TVarSet_42;
          MR_Word RepnInfo_45;
          MR_Word Var_50;
          MR_Word Var_51;
          MR_Word MaybeDefnCJCsE_59 = ((MR_Word) ((MR_hl_field(MR_mktag(3), StdDefn_22, (MR_Integer) 2))));

          parse_tree__decide_type_repn__decide_type_repns_foreign_defns_2_p_0(MaybeDefnCJCsE_59, &RepnCJCsE_38);
          TypeCtorSymName_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AbsDefn_37, (MR_Integer) 0))));
          TypeParams_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AbsDefn_37, (MR_Integer) 1))));
          TVarSet_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AbsDefn_37, (MR_Integer) 3))));
          {
            Var_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_50, 0) = ((MR_Box) (RepnCJCsE_38));
          }
          Var_51 = mercury__term__dummy_context_init_0_f_0();
          {
            RepnInfo_45 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), RepnInfo_45, 0) = ((MR_Box) (TypeCtorSymName_39));
            MR_hl_field(MR_mktag(0), RepnInfo_45, 1) = ((MR_Box) (TypeParams_40));
            MR_hl_field(MR_mktag(0), RepnInfo_45, 2) = ((MR_Box) (Var_50));
            MR_hl_field(MR_mktag(0), RepnInfo_45, 3) = ((MR_Box) (TVarSet_42));
            MR_hl_field(MR_mktag(0), RepnInfo_45, 4) = ((MR_Box) (Var_51));
            MR_hl_field(MR_mktag(0), RepnInfo_45, 5) = ((MR_Box) ((MR_Integer) -1));
          }
          mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__decide_type_repn_scalar_common_1[2]), ((MR_Box) (TypeCtor_17)), ((MR_Box) (RepnInfo_45)), STATE_VARIABLE_Int1RepnMap_0_46, STATE_VARIABLE_Int1RepnMap_47);
          *STATE_VARIABLE_Specs_49 = STATE_VARIABLE_Specs_0_48;
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
parse_tree__decide_type_repn__decide_type_repns_stage_2_du_gen_11_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__decide_type_repn__IntroducedFrom__pred__decide_type_repns_stage_2_du_gen__757__1_2_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__decide_type_repn__decide_type_repns_stage_2_du_gen_11_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__decide_type_repn__IntroducedFrom__pred__decide_type_repns_stage_2_du_gen__756__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__decide_type_repn__decide_type_repns_stage_2_du_gen_11_p_0(
  MR_Word BaseParams_12,
  MR_Word EqvMap_13,
  MR_Word WordAlignedTypeCtorsC_14,
  MR_Word SimpleDuMap_15,
  MR_Word TypeCtor_16,
  MR_Word DuDefn_17,
  MR_Word MaybeDefnCJCsE_18,
  MR_Word STATE_VARIABLE_Int1RepnMap_0_40,
  MR_Word * STATE_VARIABLE_Int1RepnMap_41,
  MR_Word STATE_VARIABLE_Specs_0_42,
  MR_Word * STATE_VARIABLE_Specs_43)
{
  {
    MR_bool succeeded;
    MR_Word RepnCJCsE_21;
    MR_Word TypeCtorSymName_22;
    MR_Word TypeParams_23;
    MR_Word DetailsDu_24;
    MR_Word TVarSet_25;
    MR_Word SymName_28;
    MR_Integer Arity_29;
    MR_Integer NumTypeParams_30;
    MR_Word OoMCtors0_31;
    MR_Word MaybeCanonical_32;
    MR_Word HeadCtor0_34;
    MR_Word TailCtors0_35;
    MR_Word HeadCtor_36;
    MR_Word Var_44;
    MR_Word Var_47;
    MR_Word STATE_VARIABLE_Specs_50_50;
    MR_Word Args0_66;
    MR_Word Args_67;
    MR_Word Changed_68;

    parse_tree__decide_type_repn__decide_type_repns_foreign_defns_2_p_0(MaybeDefnCJCsE_18, &RepnCJCsE_21);
    TypeCtorSymName_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DuDefn_17, (MR_Integer) 0))));
    TypeParams_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DuDefn_17, (MR_Integer) 1))));
    DetailsDu_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DuDefn_17, (MR_Integer) 2))));
    TVarSet_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DuDefn_17, (MR_Integer) 3))));
    SymName_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_16, (MR_Integer) 0))));
    Arity_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor_16, (MR_Integer) 1))));
    mercury__list__length_2_p_0((MR_Word) (&parse_tree__decide_type_repn_scalar_common_1[4]), TypeParams_23, &NumTypeParams_30);
    {
      Var_44 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_44, 0) = ((MR_Box) (&parse_tree__decide_type_repn_scalar_common_7[8]));
      MR_hl_field(MR_mktag(0), Var_44, 1) = ((MR_Box) (parse_tree__decide_type_repn__decide_type_repns_stage_2_du_gen_11_p_0_1));
      MR_hl_field(MR_mktag(0), Var_44, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_44, 3) = ((MR_Box) (TypeCtorSymName_22));
      MR_hl_field(MR_mktag(0), Var_44, 4) = ((MR_Box) (SymName_28));
    }
    mercury__require__expect_3_p_0(Var_44, (MR_String) "predicate \140parse_tree.decide_type_repn.decide_type_repns_stage_2_du_gen\'/11", (MR_String) "sym_name mismatch");
    {
      Var_47 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (&parse_tree__decide_type_repn_scalar_common_7[4]));
      MR_hl_field(MR_mktag(0), Var_47, 1) = ((MR_Box) (parse_tree__decide_type_repn__decide_type_repns_stage_2_du_gen_11_p_0_2));
      MR_hl_field(MR_mktag(0), Var_47, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_47, 3) = ((MR_Box) (Arity_29));
      MR_hl_field(MR_mktag(0), Var_47, 4) = ((MR_Box) (NumTypeParams_30));
    }
    mercury__require__expect_3_p_0(Var_47, (MR_String) "predicate \140parse_tree.decide_type_repn.decide_type_repns_stage_2_du_gen\'/11", (MR_String) "arity mismatch");
    OoMCtors0_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu_24, (MR_Integer) 0))));
    MaybeCanonical_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu_24, (MR_Integer) 1))));
    HeadCtor0_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OoMCtors0_31, (MR_Integer) 0))));
    TailCtors0_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OoMCtors0_31, (MR_Integer) 1))));
    Args0_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadCtor0_34, (MR_Integer) 3))));
    parse_tree__decide_type_repn__expand_eqv_cnotag_types_in_constructor_args_9_p_0(EqvMap_13, SimpleDuMap_15, TVarSet_25, Args0_66, &Args_67, (MR_Integer) 0, &Changed_68, STATE_VARIABLE_Specs_0_42, &STATE_VARIABLE_Specs_50_50);
    switch (Changed_68) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          uint32_t Var_76 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(0), HeadCtor0_34, (MR_Integer) 0)));
          MR_Word Var_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadCtor0_34, (MR_Integer) 1))));
          MR_Word Var_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadCtor0_34, (MR_Integer) 2))));
          MR_Integer Var_80 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadCtor0_34, (MR_Integer) 4))));
          MR_Word Var_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadCtor0_34, (MR_Integer) 5))));

          {
            HeadCtor_36 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), HeadCtor_36, 0) = ((MR_Box) (MR_Word) (Var_76));
            MR_hl_field(MR_mktag(0), HeadCtor_36, 1) = ((MR_Box) (Var_77));
            MR_hl_field(MR_mktag(0), HeadCtor_36, 2) = ((MR_Box) (Var_78));
            MR_hl_field(MR_mktag(0), HeadCtor_36, 3) = ((MR_Box) (Args_67));
            MR_hl_field(MR_mktag(0), HeadCtor_36, 4) = ((MR_Box) (Var_80));
            MR_hl_field(MR_mktag(0), HeadCtor_36, 5) = ((MR_Box) (Var_81));
          }
        }
        break;
      case (MR_Integer) 0:
        HeadCtor_36 = HeadCtor0_34;
        break;
    }
    if ((TailCtors0_35 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      parse_tree__decide_type_repn__decide_type_repns_stage_2_du_gen_only_functor_10_p_0(BaseParams_12, SimpleDuMap_15, TypeCtor_16, TypeParams_23, TVarSet_25, MaybeCanonical_32, HeadCtor_36, RepnCJCsE_21, STATE_VARIABLE_Int1RepnMap_0_40, STATE_VARIABLE_Int1RepnMap_41);
      *STATE_VARIABLE_Specs_43 = STATE_VARIABLE_Specs_50_50;
    }
    else
    {
      MR_Word TailCtors_39;
      MR_Word Var_52;
      MR_Word Ctor0_91 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailCtors0_35, (MR_Integer) 0))));
      MR_Word Ctors0_92 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailCtors0_35, (MR_Integer) 1))));
      MR_Word Ctor_93;
      MR_Word Ctors_94;
      MR_Word STATE_VARIABLE_Specs_24_98;
      MR_Word Args0_108 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor0_91, (MR_Integer) 3))));
      MR_Word Args_109;
      MR_Word Changed_110;

      parse_tree__decide_type_repn__expand_eqv_cnotag_types_in_constructor_args_9_p_0(EqvMap_13, SimpleDuMap_15, TVarSet_25, Args0_108, &Args_109, (MR_Integer) 0, &Changed_110, STATE_VARIABLE_Specs_50_50, &STATE_VARIABLE_Specs_24_98);
      switch (Changed_110) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            uint32_t Var_118 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(0), Ctor0_91, (MR_Integer) 0)));
            MR_Word Var_119 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor0_91, (MR_Integer) 1))));
            MR_Word Var_120 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor0_91, (MR_Integer) 2))));
            MR_Integer Var_122 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Ctor0_91, (MR_Integer) 4))));
            MR_Word Var_123 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor0_91, (MR_Integer) 5))));

            {
              Ctor_93 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Ctor_93, 0) = ((MR_Box) (MR_Word) (Var_118));
              MR_hl_field(MR_mktag(0), Ctor_93, 1) = ((MR_Box) (Var_119));
              MR_hl_field(MR_mktag(0), Ctor_93, 2) = ((MR_Box) (Var_120));
              MR_hl_field(MR_mktag(0), Ctor_93, 3) = ((MR_Box) (Args_109));
              MR_hl_field(MR_mktag(0), Ctor_93, 4) = ((MR_Box) (Var_122));
              MR_hl_field(MR_mktag(0), Ctor_93, 5) = ((MR_Box) (Var_123));
            }
          }
          break;
        case (MR_Integer) 0:
          Ctor_93 = Ctor0_91;
          break;
      }
      parse_tree__decide_type_repn__expand_eqv_cnotag_types_in_constructors_7_p_0(EqvMap_13, SimpleDuMap_15, TVarSet_25, Ctors0_92, &Ctors_94, STATE_VARIABLE_Specs_24_98, STATE_VARIABLE_Specs_43);
      {
        TailCtors_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), TailCtors_39, 0) = ((MR_Box) (Ctor_93));
        MR_hl_field(MR_mktag(1), TailCtors_39, 1) = ((MR_Box) (Ctors_94));
      }
      {
        Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (HeadCtor_36));
        MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (TailCtors_39));
      }
      parse_tree__decide_type_repn__decide_type_repns_stage_2_du_gen_more_functors_10_p_0(BaseParams_12, WordAlignedTypeCtorsC_14, SimpleDuMap_15, TypeCtor_16, TypeParams_23, TVarSet_25, Var_52, RepnCJCsE_21, STATE_VARIABLE_Int1RepnMap_0_40, STATE_VARIABLE_Int1RepnMap_41);
    }
  }
}

static void MR_CALL 
parse_tree__decide_type_repn__expand_eqv_cnotag_types_in_constructors_7_p_0(
  MR_Word EqvMap_1,
  MR_Word SimpleDuMap_2,
  MR_Word TVarSet_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_Specs_0_6,
  MR_Word * STATE_VARIABLE_Specs_7)
{
  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Specs_7 = STATE_VARIABLE_Specs_0_6;
  }
  else
  {
    MR_Word Ctor0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
    MR_Word Ctors0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
    MR_Word Ctor_19;
    MR_Word Ctors_20;
    MR_Word STATE_VARIABLE_Specs_24_24;
    MR_Word Args0_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor0_17, (MR_Integer) 3))));
    MR_Word Args_35;
    MR_Word Changed_36;

    parse_tree__decide_type_repn__expand_eqv_cnotag_types_in_constructor_args_9_p_0(EqvMap_1, SimpleDuMap_2, TVarSet_3, Args0_34, &Args_35, (MR_Integer) 0, &Changed_36, STATE_VARIABLE_Specs_0_6, &STATE_VARIABLE_Specs_24_24);
    switch (Changed_36) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          uint32_t Var_44 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(0), Ctor0_17, (MR_Integer) 0)));
          MR_Word Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor0_17, (MR_Integer) 1))));
          MR_Word Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor0_17, (MR_Integer) 2))));
          MR_Integer Var_48 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Ctor0_17, (MR_Integer) 4))));
          MR_Word Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor0_17, (MR_Integer) 5))));

          {
            Ctor_19 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Ctor_19, 0) = ((MR_Box) (MR_Word) (Var_44));
            MR_hl_field(MR_mktag(0), Ctor_19, 1) = ((MR_Box) (Var_45));
            MR_hl_field(MR_mktag(0), Ctor_19, 2) = ((MR_Box) (Var_46));
            MR_hl_field(MR_mktag(0), Ctor_19, 3) = ((MR_Box) (Args_35));
            MR_hl_field(MR_mktag(0), Ctor_19, 4) = ((MR_Box) (Var_48));
            MR_hl_field(MR_mktag(0), Ctor_19, 5) = ((MR_Box) (Var_49));
          }
        }
        break;
      case (MR_Integer) 0:
        Ctor_19 = Ctor0_17;
        break;
    }
    parse_tree__decide_type_repn__expand_eqv_cnotag_types_in_constructors_7_p_0(EqvMap_1, SimpleDuMap_2, TVarSet_3, Ctors0_18, &Ctors_20, STATE_VARIABLE_Specs_24_24, STATE_VARIABLE_Specs_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__5_5 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Ctor_19));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Ctors_20));
    }
  }
}

static void MR_CALL 
parse_tree__decide_type_repn__expand_eqv_cnotag_types_in_constructor_args_9_p_0(
  MR_Word TypeEqvMap_1,
  MR_Word SimpleDuMap_2,
  MR_Word TVarSet_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_Changed_0_6,
  MR_Word * STATE_VARIABLE_Changed_7,
  MR_Word STATE_VARIABLE_Specs_0_8,
  MR_Word * STATE_VARIABLE_Specs_9)
{
  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Specs_9 = STATE_VARIABLE_Specs_0_8;
    *STATE_VARIABLE_Changed_7 = STATE_VARIABLE_Changed_0_6;
  }
  else
  {
    MR_Word Arg0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
    MR_Word Args0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
    MR_Word Arg_24;
    MR_Word Args_25;
    MR_Word MaybeFieldName_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg0_22, (MR_Integer) 0))));
    MR_Word ArgType0_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg0_22, (MR_Integer) 1))));
    MR_Word Context_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg0_22, (MR_Integer) 2))));
    MR_Word ArgType_31;
    MR_Word ArgTypeChanged_32;
    MR_Word STATE_VARIABLE_Specs_38_38;
    MR_Word STATE_VARIABLE_Changed_39_39;

    parse_tree__decide_type_repn__expand_eqv_cnotag_type_fixpoint_10_p_0(TypeEqvMap_1, SimpleDuMap_2, TVarSet_3, Context_30, (MR_Integer) 100, ArgType0_29, &ArgType_31, &ArgTypeChanged_32, STATE_VARIABLE_Specs_0_8, &STATE_VARIABLE_Specs_38_38);
    switch (ArgTypeChanged_32) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          STATE_VARIABLE_Changed_39_39 = (MR_Integer) 1;
          {
            Arg_24 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Arg_24, 0) = ((MR_Box) (MaybeFieldName_28));
            MR_hl_field(MR_mktag(0), Arg_24, 1) = ((MR_Box) (ArgType_31));
            MR_hl_field(MR_mktag(0), Arg_24, 2) = ((MR_Box) (Context_30));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          Arg_24 = Arg0_22;
          STATE_VARIABLE_Changed_39_39 = STATE_VARIABLE_Changed_0_6;
        }
        break;
    }
    parse_tree__decide_type_repn__expand_eqv_cnotag_types_in_constructor_args_9_p_0(TypeEqvMap_1, SimpleDuMap_2, TVarSet_3, Args0_23, &Args_25, STATE_VARIABLE_Changed_39_39, STATE_VARIABLE_Changed_7, STATE_VARIABLE_Specs_38_38, STATE_VARIABLE_Specs_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__5_5 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Arg_24));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Args_25));
    }
  }
}

static void MR_CALL 
parse_tree__decide_type_repn__expand_eqv_cnotag_type_fixpoint_10_p_0(
  MR_Word TypeEqvMap_11,
  MR_Word SimpleDuMap_12,
  MR_Word TVarSet0_13,
  MR_Word Context_14,
  MR_Integer IterationsLeft_15,
  MR_Word Type0_16,
  MR_Word * Type_17,
  MR_Word * Changed_18,
  MR_Word STATE_VARIABLE_Specs_0_39,
  MR_Word * STATE_VARIABLE_Specs_40)
{
  {
    MR_bool succeeded = (IterationsLeft_15 < (MR_Integer) 0);

    if (succeeded)
    {
      *Changed_18 = (MR_Integer) 0;
      *Type_17 = Type0_16;
      *STATE_VARIABLE_Specs_40 = STATE_VARIABLE_Specs_0_39;
    }
    else
    {
      MR_Word ArgTypes0_21;
      MR_Word NotagParams0_23;
      MR_Word NotagTVarSet0_24;
      MR_Word NotagFunctorArgType0_27;
      MR_Word TypeCtorInfo_55_55;
      MR_Word TypeCtorInfo_56_56;
      MR_Word TypeCtor0_20;
      MR_Word SimpleDuRepn_22;
      MR_Word NotagRepn_25;
      MR_Word MaybeCJCsERepn_28;
      MR_Word Var_42;
      MR_Box conv0_SimpleDuRepn_22;

      succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(Type0_16, &TypeCtor0_20, &ArgTypes0_21);
      if (succeeded)
      {
        TypeCtorInfo_55_55 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0);
        TypeCtorInfo_56_56 = (MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_simple_du_repn_0);
        succeeded = mercury__map__search_3_p_0(TypeCtorInfo_55_55, TypeCtorInfo_56_56, SimpleDuMap_12, ((MR_Box) (TypeCtor0_20)), &conv0_SimpleDuRepn_22);
        if (succeeded)
        {
          SimpleDuRepn_22 = ((MR_Word) (conv0_SimpleDuRepn_22));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) SimpleDuRepn_22)) == (MR_Integer) 2);
          if (succeeded)
          {
            NotagParams0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(2), SimpleDuRepn_22, (MR_Integer) 0))));
            NotagTVarSet0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), SimpleDuRepn_22, (MR_Integer) 1))));
            NotagRepn_25 = ((MR_Word) ((MR_hl_field(MR_mktag(2), SimpleDuRepn_22, (MR_Integer) 2))));
            NotagFunctorArgType0_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NotagRepn_25, (MR_Integer) 1))));
            MaybeCJCsERepn_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NotagRepn_25, (MR_Integer) 2))));
            Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeCJCsERepn_28, (MR_Integer) 0))));
            succeeded = (Var_42 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
      }
      if (succeeded)
      {
        MR_Word TVarSet1_32;
        MR_Word RenamingNotagTo1_33;
        MR_Word NotagParams1_34;
        MR_Word NotagFunctorArgType1_35;
        MR_Word ParamsSubst_36;
        MR_Word Type1_37;
        MR_Integer Var_43;
        MR_Word _Changed_38;

        mercury__varset__merge_renaming_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TVarSet0_13, NotagTVarSet0_24, &TVarSet1_32, &RenamingNotagTo1_33);
        parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_p_0(RenamingNotagTo1_33, NotagParams0_23, &NotagParams1_34);
        parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0(RenamingNotagTo1_33, NotagFunctorArgType0_27, &NotagFunctorArgType1_35);
        mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&parse_tree__decide_type_repn_scalar_common_1[4]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), NotagParams1_34, ArgTypes0_21, &ParamsSubst_36);
        parse_tree__prog_type_subst__apply_subst_to_type_3_p_0(ParamsSubst_36, NotagFunctorArgType1_35, &Type1_37);
        Var_43 = (MR_Integer) ((MR_Unsigned) IterationsLeft_15 - (MR_Unsigned) 1);
        parse_tree__decide_type_repn__expand_eqv_cnotag_type_fixpoint_10_p_0(TypeEqvMap_11, SimpleDuMap_12, TVarSet1_32, Context_14, Var_43, Type1_37, Type_17, &_Changed_38, STATE_VARIABLE_Specs_0_39, STATE_VARIABLE_Specs_40);
        *Changed_18 = (MR_Integer) 1;
      }
      else
      {
        MR_Word STATE_VARIABLE_Specs_46_46;
        MR_Word Type1_53;

        parse_tree__equiv_type__replace_in_type_report_circular_eqvs_8_p_0(TypeEqvMap_11, TVarSet0_13, Context_14, Type0_16, &Type1_53, Changed_18, STATE_VARIABLE_Specs_0_39, &STATE_VARIABLE_Specs_46_46);
        switch (*Changed_18) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Integer Var_47 = (MR_Integer) ((MR_Unsigned) IterationsLeft_15 - (MR_Unsigned) 1);
              MR_Word _Changed_50;

              parse_tree__decide_type_repn__expand_eqv_cnotag_type_fixpoint_10_p_0(TypeEqvMap_11, SimpleDuMap_12, TVarSet0_13, Context_14, Var_47, Type1_53, Type_17, &_Changed_50, STATE_VARIABLE_Specs_46_46, STATE_VARIABLE_Specs_40);
            }
            break;
          case (MR_Integer) 0:
            {
              *Type_17 = Type0_16;
              *STATE_VARIABLE_Specs_40 = STATE_VARIABLE_Specs_46_46;
            }
            break;
        }
      }
    }
  }
}

static void MR_CALL 
parse_tree__decide_type_repn__decide_type_repns_stage_2_du_gen_more_functors_10_p_0(
  MR_Word BaseParams_11,
  MR_Word WordAlignedTypeCtorsC_12,
  MR_Word SimpleDuMap_13,
  MR_Word TypeCtor_14,
  MR_Word TypeParams_15,
  MR_Word TVarSet_16,
  MR_Word Ctors_17,
  MR_Word RepnCJCsE_18,
  MR_Word STATE_VARIABLE_Int1RepnMap_0_42,
  MR_Word * STATE_VARIABLE_Int1RepnMap_43)
{
  {
    MR_Word PlatformParams64NoSpfNoDa_20;
    MR_Word PlatformParams64NoSpfDa_21;
    MR_Word PlatformParams32NoSpfNoDa_22;
    MR_Word PlatformParams32NoSpfDa_23;
    MR_Word PlatformParams32SpfNoDa_24;
    MR_Word PlatformParams32SpfDa_25;
    MR_Word RepnMap64NoSpfNoDa_26;
    MR_Word RepnMap64NoSpfDa_27;
    MR_Word RepnMap32NoSpfNoDa_28;
    MR_Word RepnMap32NoSpfDa_29;
    MR_Word RepnMap32SpfNoDa_30;
    MR_Word RepnMap32SpfDa_31;
    MR_Word CRepns_32;
    MR_Word CRepn1_34;
    MR_Word CRepn2_35;
    MR_Word CRepn3plus_36;
    MR_Word MoreFunctorsRepn_37;
    MR_Word DuRepn_38;
    MR_Word TypeCtorSymName_39;
    MR_Word RepnInfo_41;
    MR_Word Var_68;
    MR_Word Var_69;

    {
      PlatformParams64NoSpfNoDa_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), PlatformParams64NoSpfNoDa_20, 0) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 2)) | (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 0)))));
      MR_hl_field(MR_mktag(0), PlatformParams64NoSpfNoDa_20, 1) = ((MR_Box) (BaseParams_11));
    }
    {
      PlatformParams64NoSpfDa_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), PlatformParams64NoSpfDa_21, 0) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 2)) | (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 1)))));
      MR_hl_field(MR_mktag(0), PlatformParams64NoSpfDa_21, 1) = ((MR_Box) (BaseParams_11));
    }
    {
      PlatformParams32NoSpfNoDa_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), PlatformParams32NoSpfNoDa_22, 0) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 2)) | (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) ((MR_Integer) 0)))));
      MR_hl_field(MR_mktag(0), PlatformParams32NoSpfNoDa_22, 1) = ((MR_Box) (BaseParams_11));
    }
    {
      PlatformParams32NoSpfDa_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), PlatformParams32NoSpfDa_23, 0) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 2)) | (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) ((MR_Integer) 1)))));
      MR_hl_field(MR_mktag(0), PlatformParams32NoSpfDa_23, 1) = ((MR_Box) (BaseParams_11));
    }
    {
      PlatformParams32SpfNoDa_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), PlatformParams32SpfNoDa_24, 0) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 2)) | (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 0)))));
      MR_hl_field(MR_mktag(0), PlatformParams32SpfNoDa_24, 1) = ((MR_Box) (BaseParams_11));
    }
    {
      PlatformParams32SpfDa_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), PlatformParams32SpfDa_25, 0) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 2)) | (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 1)))));
      MR_hl_field(MR_mktag(0), PlatformParams32SpfDa_25, 1) = ((MR_Box) (BaseParams_11));
    }
    parse_tree__decide_type_repn__decide_gen_du_functors_5_p_0(PlatformParams64NoSpfNoDa_20, WordAlignedTypeCtorsC_12, SimpleDuMap_13, Ctors_17, &RepnMap64NoSpfNoDa_26);
    parse_tree__decide_type_repn__decide_gen_du_functors_5_p_0(PlatformParams64NoSpfDa_21, WordAlignedTypeCtorsC_12, SimpleDuMap_13, Ctors_17, &RepnMap64NoSpfDa_27);
    parse_tree__decide_type_repn__decide_gen_du_functors_5_p_0(PlatformParams32NoSpfNoDa_22, WordAlignedTypeCtorsC_12, SimpleDuMap_13, Ctors_17, &RepnMap32NoSpfNoDa_28);
    parse_tree__decide_type_repn__decide_gen_du_functors_5_p_0(PlatformParams32NoSpfDa_23, WordAlignedTypeCtorsC_12, SimpleDuMap_13, Ctors_17, &RepnMap32NoSpfDa_29);
    parse_tree__decide_type_repn__decide_gen_du_functors_5_p_0(PlatformParams32SpfNoDa_24, WordAlignedTypeCtorsC_12, SimpleDuMap_13, Ctors_17, &RepnMap32SpfNoDa_30);
    parse_tree__decide_type_repn__decide_gen_du_functors_5_p_0(PlatformParams32SpfDa_25, WordAlignedTypeCtorsC_12, SimpleDuMap_13, Ctors_17, &RepnMap32SpfDa_31);
    parse_tree__decide_type_repn__look_up_functor_repns_8_p_0(RepnMap64NoSpfNoDa_26, RepnMap64NoSpfDa_27, RepnMap32NoSpfNoDa_28, RepnMap32NoSpfDa_29, RepnMap32SpfNoDa_30, RepnMap32SpfDa_31, Ctors_17, &CRepns_32);
    if ((CRepns_32 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.decide_type_repn.decide_type_repns_stage_2_du_gen_more_functors\'/10", (MR_String) "CRepns has length 0");
        return;
      }
    else
    {
      MR_Word Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CRepns_32, (MR_Integer) 1))));
      MR_Word Var_75 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CRepns_32, (MR_Integer) 0))));

      if ((Var_74 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.decide_type_repn.decide_type_repns_stage_2_du_gen_more_functors\'/10", (MR_String) "CRepns has length 1");
          return;
        }
      else
      {
        CRepn1_34 = Var_75;
        CRepn2_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_74, (MR_Integer) 0))));
        CRepn3plus_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_74, (MR_Integer) 1))));
      }
    }
    {
      MoreFunctorsRepn_37 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), MoreFunctorsRepn_37, 0) = ((MR_Box) (CRepn1_34));
      MR_hl_field(MR_mktag(0), MoreFunctorsRepn_37, 1) = ((MR_Box) (CRepn2_35));
      MR_hl_field(MR_mktag(0), MoreFunctorsRepn_37, 2) = ((MR_Box) (CRepn3plus_36));
      MR_hl_field(MR_mktag(0), MoreFunctorsRepn_37, 3) = ((MR_Box) (RepnCJCsE_18));
    }
    {
      DuRepn_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), DuRepn_38, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), DuRepn_38, 1) = ((MR_Box) (MoreFunctorsRepn_37));
    }
    TypeCtorSymName_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_14, (MR_Integer) 0))));
    {
      Var_68 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_68, 0) = ((MR_Box) (DuRepn_38));
    }
    Var_69 = mercury__term__dummy_context_init_0_f_0();
    {
      RepnInfo_41 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), RepnInfo_41, 0) = ((MR_Box) (TypeCtorSymName_39));
      MR_hl_field(MR_mktag(0), RepnInfo_41, 1) = ((MR_Box) (TypeParams_15));
      MR_hl_field(MR_mktag(0), RepnInfo_41, 2) = ((MR_Box) (Var_68));
      MR_hl_field(MR_mktag(0), RepnInfo_41, 3) = ((MR_Box) (TVarSet_16));
      MR_hl_field(MR_mktag(0), RepnInfo_41, 4) = ((MR_Box) (Var_69));
      MR_hl_field(MR_mktag(0), RepnInfo_41, 5) = ((MR_Box) ((MR_Integer) -1));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__decide_type_repn_scalar_common_1[2]), ((MR_Box) (TypeCtor_14)), ((MR_Box) (RepnInfo_41)), STATE_VARIABLE_Int1RepnMap_0_42, STATE_VARIABLE_Int1RepnMap_43);
  }
}

static MR_Box MR_CALL 
parse_tree__decide_type_repn__look_up_functor_repns_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv6_LambdaHeadVar__2_51;

    conv6_LambdaHeadVar__2_51 = parse_tree__decide_type_repn__IntroducedFrom__func__look_up_functor_repns__1384__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv6_LambdaHeadVar__2_51));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__decide_type_repn__look_up_functor_repns_8_p_0(
  MR_Word RepnMap64NoSpfNoDa_1,
  MR_Word RepnMap64NoSpfDa_2,
  MR_Word RepnMap32NoSpfNoDa_3,
  MR_Word RepnMap32NoSpfDa_4,
  MR_Word RepnMap32SpfNoDa_5,
  MR_Word RepnMap32SpfDa_6,
  MR_Word HeadVar__7_7,
  MR_Word * HeadVar__8_8)
{
  {
    MR_bool succeeded;

    if ((HeadVar__7_7 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__8_8 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Ctor_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__7_7, (MR_Integer) 0))));
      MR_Word Ctors_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__7_7, (MR_Integer) 1))));
      MR_Word Repn_23;
      MR_Word Repns_24;
      uint32_t Ordinal_25 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(0), Ctor_21, (MR_Integer) 0)));
      MR_Word SymName_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_21, (MR_Integer) 2))));
      MR_Word Args_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_21, (MR_Integer) 3))));
      MR_String Name_31;
      MR_Word Repn64NoSpfNoDa_32;
      MR_Word Repn64NoSpfDa_33;
      MR_Word Repn32NoSpfNoDa_34;
      MR_Word Repn32NoSpfDa_35;
      MR_Word Repn32SpfNoDa_36;
      MR_Word Repn32SpfDa_37;
      MR_Box conv0_Repn64NoSpfNoDa_32;
      MR_Box conv1_Repn64NoSpfDa_33;
      MR_Box conv2_Repn32NoSpfNoDa_34;
      MR_Box conv3_Repn32NoSpfDa_35;
      MR_Box conv4_Repn32SpfNoDa_36;
      MR_Box conv5_Repn32SpfDa_37;
      MR_Word Var_42;

      Name_31 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_27);
      mercury__map__lookup_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint32_0), (MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_ctor_repn_0), RepnMap64NoSpfNoDa_1, ((MR_Box) (MR_Word) (Ordinal_25)), &conv0_Repn64NoSpfNoDa_32);
      Repn64NoSpfNoDa_32 = ((MR_Word) (conv0_Repn64NoSpfNoDa_32));
      mercury__map__lookup_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint32_0), (MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_ctor_repn_0), RepnMap64NoSpfDa_2, ((MR_Box) (MR_Word) (Ordinal_25)), &conv1_Repn64NoSpfDa_33);
      Repn64NoSpfDa_33 = ((MR_Word) (conv1_Repn64NoSpfDa_33));
      mercury__map__lookup_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint32_0), (MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_ctor_repn_0), RepnMap32NoSpfNoDa_3, ((MR_Box) (MR_Word) (Ordinal_25)), &conv2_Repn32NoSpfNoDa_34);
      Repn32NoSpfNoDa_34 = ((MR_Word) (conv2_Repn32NoSpfNoDa_34));
      mercury__map__lookup_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint32_0), (MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_ctor_repn_0), RepnMap32NoSpfDa_4, ((MR_Box) (MR_Word) (Ordinal_25)), &conv3_Repn32NoSpfDa_35);
      Repn32NoSpfDa_35 = ((MR_Word) (conv3_Repn32NoSpfDa_35));
      mercury__map__lookup_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint32_0), (MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_ctor_repn_0), RepnMap32SpfNoDa_5, ((MR_Box) (MR_Word) (Ordinal_25)), &conv4_Repn32SpfNoDa_36);
      Repn32SpfNoDa_36 = ((MR_Word) (conv4_Repn32SpfNoDa_36));
      mercury__map__lookup_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint32_0), (MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_ctor_repn_0), RepnMap32SpfDa_6, ((MR_Box) (MR_Word) (Ordinal_25)), &conv5_Repn32SpfDa_37);
      Repn32SpfDa_37 = ((MR_Word) (conv5_Repn32SpfDa_37));
      succeeded = (Args_28 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_21, (MR_Integer) 1))));
        succeeded = (Var_42 == (MR_Word) ((MR_Unsigned) 0U));
      }
      if (succeeded)
      {
        MR_Word ConstantCRepns_38;
        MR_Word Var_43;
        MR_Word Var_44;
        MR_Word Var_45;
        MR_Word Var_46;
        MR_Word Var_47;
        MR_Word Var_48;

        if (((MR_tag((MR_Word) Repn64NoSpfNoDa_32)) == (MR_Integer) 0))
          Var_43 = (MR_Word) ((MR_Word) (Repn64NoSpfNoDa_32));
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "function \140parse_tree.decide_type_repn.get_constant_repn\'/1", (MR_String) "not constant");
            return;
          }
        if (((MR_tag((MR_Word) Repn64NoSpfDa_33)) == (MR_Integer) 0))
          Var_44 = (MR_Word) ((MR_Word) (Repn64NoSpfDa_33));
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "function \140parse_tree.decide_type_repn.get_constant_repn\'/1", (MR_String) "not constant");
            return;
          }
        if (((MR_tag((MR_Word) Repn32NoSpfNoDa_34)) == (MR_Integer) 0))
          Var_45 = (MR_Word) ((MR_Word) (Repn32NoSpfNoDa_34));
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "function \140parse_tree.decide_type_repn.get_constant_repn\'/1", (MR_String) "not constant");
            return;
          }
        if (((MR_tag((MR_Word) Repn32NoSpfDa_35)) == (MR_Integer) 0))
          Var_46 = (MR_Word) ((MR_Word) (Repn32NoSpfDa_35));
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "function \140parse_tree.decide_type_repn.get_constant_repn\'/1", (MR_String) "not constant");
            return;
          }
        if (((MR_tag((MR_Word) Repn32SpfNoDa_36)) == (MR_Integer) 0))
          Var_47 = (MR_Word) ((MR_Word) (Repn32SpfNoDa_36));
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "function \140parse_tree.decide_type_repn.get_constant_repn\'/1", (MR_String) "not constant");
            return;
          }
        Var_48 = parse_tree__decide_type_repn__get_constant_repn_1_f_0(Repn32SpfDa_37);
        ConstantCRepns_38 = parse_tree__decide_type_repn__make_c_repns_6_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_constant_repn_0), ((MR_Box) (Var_43)), ((MR_Box) (Var_44)), ((MR_Box) (Var_45)), ((MR_Box) (Var_46)), ((MR_Box) (Var_47)), ((MR_Box) (Var_48)));
        {
          Repn_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Repn_23, 0) = ((MR_Box) (Name_31));
          MR_hl_field(MR_mktag(0), Repn_23, 1) = ((MR_Box) (ConstantCRepns_38));
        }
      }
      else
      {
        MR_Word ArgTypes_39;
        MR_Word NonConstantCRepns_41;
        MR_Word Var_52;
        MR_Word Var_53;
        MR_Word Var_54;
        MR_Word Var_55;
        MR_Word Var_56;
        MR_Word Var_57;

        ArgTypes_39 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__decide_type_repn_scalar_common_2[14]), Args_28);
        Var_52 = parse_tree__decide_type_repn__get_nonconstant_repn_1_f_0(Repn64NoSpfNoDa_32);
        Var_53 = parse_tree__decide_type_repn__get_nonconstant_repn_1_f_0(Repn64NoSpfDa_33);
        Var_54 = parse_tree__decide_type_repn__get_nonconstant_repn_1_f_0(Repn32NoSpfNoDa_34);
        Var_55 = parse_tree__decide_type_repn__get_nonconstant_repn_1_f_0(Repn32NoSpfDa_35);
        Var_56 = parse_tree__decide_type_repn__get_nonconstant_repn_1_f_0(Repn32SpfNoDa_36);
        Var_57 = parse_tree__decide_type_repn__get_nonconstant_repn_1_f_0(Repn32SpfDa_37);
        NonConstantCRepns_41 = parse_tree__decide_type_repn__make_c_repns_6_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_nonconstant_repn_0), ((MR_Box) (Var_52)), ((MR_Box) (Var_53)), ((MR_Box) (Var_54)), ((MR_Box) (Var_55)), ((MR_Box) (Var_56)), ((MR_Box) (Var_57)));
        {
          Repn_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Repn_23, 0) = ((MR_Box) (Name_31));
          MR_hl_field(MR_mktag(1), Repn_23, 1) = ((MR_Box) (ArgTypes_39));
          MR_hl_field(MR_mktag(1), Repn_23, 2) = ((MR_Box) (NonConstantCRepns_41));
        }
      }
      parse_tree__decide_type_repn__look_up_functor_repns_8_p_0(RepnMap64NoSpfNoDa_1, RepnMap64NoSpfDa_2, RepnMap32NoSpfNoDa_3, RepnMap32NoSpfDa_4, RepnMap32SpfNoDa_5, RepnMap32SpfDa_6, Ctors_22, &Repns_24);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__8_8 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Repn_23));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Repns_24));
      }
    }
  }
}

static MR_Word MR_CALL 
parse_tree__decide_type_repn__make_c_repns_6_f_0(
  MR_Word TypeInfo_for_T_15,
  MR_Box Repn64NoSpfNoDa_8,
  MR_Box Repn64NoSpfDa_9,
  MR_Box Repn32NoSpfNoDa_10,
  MR_Box Repn32NoSpfDa_11,
  MR_Box Repn32SpfNoDa_12,
  MR_Box Repn32SpfDa_13)
{
  {
    MR_bool succeeded;
    MR_Word CRepns_14;

    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_15, Repn64NoSpfNoDa_8, Repn64NoSpfDa_9);
    if (succeeded)
    {
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_15, Repn32NoSpfNoDa_10, Repn32NoSpfDa_11);
      if (succeeded)
      {
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_15, Repn32NoSpfNoDa_10, Repn32SpfNoDa_12);
        if (succeeded)
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_15, Repn32NoSpfNoDa_10, Repn32SpfDa_13);
      }
    }
    if (succeeded)
    {
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_15, Repn64NoSpfNoDa_8, Repn32NoSpfNoDa_10);
      if (succeeded)
        {
          CRepns_14 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), CRepns_14, 0) = Repn64NoSpfNoDa_8;
        }
      else
        {
          CRepns_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), CRepns_14, 0) = Repn64NoSpfNoDa_8;
          MR_hl_field(MR_mktag(1), CRepns_14, 1) = Repn32NoSpfNoDa_10;
        }
    }
    else
      {
        CRepns_14 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), CRepns_14, 0) = Repn64NoSpfDa_9;
        MR_hl_field(MR_mktag(2), CRepns_14, 1) = Repn64NoSpfNoDa_8;
        MR_hl_field(MR_mktag(2), CRepns_14, 2) = Repn32NoSpfDa_11;
        MR_hl_field(MR_mktag(2), CRepns_14, 3) = Repn32NoSpfNoDa_10;
        MR_hl_field(MR_mktag(2), CRepns_14, 4) = Repn32SpfDa_13;
        MR_hl_field(MR_mktag(2), CRepns_14, 5) = Repn32SpfNoDa_12;
      }
    return CRepns_14;
  }
}

static MR_Word MR_CALL 
parse_tree__decide_type_repn__get_nonconstant_repn_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word NonConstantRepn_2;

    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
      mercury__require__unexpected_2_p_0((MR_String) "function \140parse_tree.decide_type_repn.get_nonconstant_repn\'/1", (MR_String) "not nonconstant");
    else
      NonConstantRepn_2 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    return NonConstantRepn_2;
  }
}

static MR_Word MR_CALL 
parse_tree__decide_type_repn__get_constant_repn_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word ConstantRepn_2;

    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
      ConstantRepn_2 = (MR_Word) ((MR_Word) (HeadVar__1_1));
    else
      mercury__require__unexpected_2_p_0((MR_String) "function \140parse_tree.decide_type_repn.get_constant_repn\'/1", (MR_String) "not constant");
    return ConstantRepn_2;
  }
}

static MR_bool MR_CALL 
parse_tree__decide_type_repn__decide_gen_du_functors_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__decide_type_repn__is_direct_arg_ctor_for_c_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__decide_type_repn__decide_gen_du_functors_5_p_0(
  MR_Word PlatformParams_6,
  MR_Word WordAlignedTypeCtorsC_7,
  MR_Word SimpleDuMap_8,
  MR_Word Ctors_9,
  MR_Word * STATE_VARIABLE_RepnMap_41)
{
  {
    MR_bool succeeded;
    MR_Word Constants_11;
    MR_Word Functors_12;
    MR_Word MaybeDirectArgs_13;
    MR_Word DirectArgFunctors_14;
    MR_Word NonDirectArgFunctors_15;
    MR_Integer NumConstants_16;
    MR_Word LocalPackedFunctors_17;
    MR_Word NonLocalPackedFunctors_18;
    MR_Word WordSize_28;
    uint8_t MaxPtagUint8_29;
    MR_Word LeftOverDirectArgFunctors_30;
    MR_Word RemoteFunctors_31;
    MR_Word RemoteSharedFunctors_32;
    MR_Word STATE_VARIABLE_RepnMap_43_43;
    uint8_t STATE_VARIABLE_CurPtagUint8_44_44;
    MR_Word STATE_VARIABLE_RepnMap_48_48;
    uint8_t STATE_VARIABLE_CurPtagUint8_50_50;
    MR_Word STATE_VARIABLE_RepnMap_51_51;
    MR_Word STATE_VARIABLE_RepnMap_52_52;

    parse_tree__decide_type_repn__separate_out_constants_5_p_0(PlatformParams_6, SimpleDuMap_8, Ctors_9, &Constants_11, &Functors_12);
    MaybeDirectArgs_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PlatformParams_6, (MR_Integer) 0))) & (MR_Integer) 1);
    switch (MaybeDirectArgs_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          DirectArgFunctors_14 = (MR_Word) ((MR_Unsigned) 0U);
          NonDirectArgFunctors_15 = Functors_12;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_42;

          {
            Var_42 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (&parse_tree__decide_type_repn_scalar_common_7[7]));
            MR_hl_field(MR_mktag(0), Var_42, 1) = ((MR_Box) (parse_tree__decide_type_repn__decide_gen_du_functors_5_p_0_1));
            MR_hl_field(MR_mktag(0), Var_42, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_42, 3) = ((MR_Box) (WordAlignedTypeCtorsC_7));
          }
          mercury__list__filter_4_p_0((MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_classified_constructor_0), Var_42, Functors_12, &DirectArgFunctors_14, &NonDirectArgFunctors_15);
        }
        break;
    }
    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), Constants_11, &NumConstants_16);
    parse_tree__decide_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_108_111_99_97_108_95_112_97_99_107_97_98_108_101_95_102_117_110_99_116_111_114_115_95_95_91_50_93_95_48_6_p_0(PlatformParams_6, NumConstants_16, NonDirectArgFunctors_15, &LocalPackedFunctors_17, &NonLocalPackedFunctors_18);
    mercury__map__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint32_0), (MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_ctor_repn_0), &STATE_VARIABLE_RepnMap_43_43);
    succeeded = (Constants_11 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      succeeded = (LocalPackedFunctors_17 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      STATE_VARIABLE_CurPtagUint8_44_44 = UINT8_C(0);
      STATE_VARIABLE_RepnMap_48_48 = STATE_VARIABLE_RepnMap_43_43;
    }
    else
    {
      if ((LocalPackedFunctors_17 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Unsigned _CurLocalSectag_22;

        parse_tree__decide_type_repn__assign_repns_to_constants_6_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Unsigned) 0U, &_CurLocalSectag_22, Constants_11, STATE_VARIABLE_RepnMap_43_43, &STATE_VARIABLE_RepnMap_48_48);
      }
      else
      {
        MR_Integer NumLocalPackedFunctors_25;
        MR_Unsigned NumLocalSectagBits_26;
        MR_Unsigned CurLocalSectag1_27;
        MR_Integer Var_45;
        MR_Word STATE_VARIABLE_RepnMap_46_46;
        MR_Word LocalSectagSize_56;
        MR_Integer NumBitsInt_72;

        mercury__list__length_2_p_0((MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_packable_constructor_0), LocalPackedFunctors_17, &NumLocalPackedFunctors_25);
        Var_45 = (MR_Integer) ((MR_Unsigned) NumConstants_16 + (MR_Unsigned) NumLocalPackedFunctors_25);
        parse_tree__decide_type_repn__num_bits_needed_for_n_things_loop_3_p_0(Var_45, (MR_Integer) 0, &NumBitsInt_72);
        NumLocalSectagBits_26 = mercury__uint__det_from_int_1_f_0(NumBitsInt_72);
        {
          LocalSectagSize_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), LocalSectagSize_56, 0) = ((MR_Box) (NumLocalSectagBits_26));
        }
        parse_tree__decide_type_repn__assign_repns_to_constants_6_p_0(LocalSectagSize_56, (MR_Unsigned) 0U, &CurLocalSectag1_27, Constants_11, STATE_VARIABLE_RepnMap_43_43, &STATE_VARIABLE_RepnMap_46_46);
        parse_tree__decide_type_repn__assign_repns_to_local_packed_functors_6_p_0(PlatformParams_6, NumLocalSectagBits_26, CurLocalSectag1_27, LocalPackedFunctors_17, STATE_VARIABLE_RepnMap_46_46, &STATE_VARIABLE_RepnMap_48_48);
      }
      STATE_VARIABLE_CurPtagUint8_44_44 = UINT8_C(1);
    }
    WordSize_28 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PlatformParams_6, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
    switch (WordSize_28) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        MaxPtagUint8_29 = UINT8_C(3);
        break;
      case (MR_Integer) 0:
        MaxPtagUint8_29 = UINT8_C(7);
        break;
    }
    parse_tree__decide_type_repn__assign_repns_to_direct_arg_functors_8_p_0(MaxPtagUint8_29, STATE_VARIABLE_CurPtagUint8_44_44, &STATE_VARIABLE_CurPtagUint8_50_50, DirectArgFunctors_14, NonDirectArgFunctors_15, &LeftOverDirectArgFunctors_30, STATE_VARIABLE_RepnMap_48_48, &STATE_VARIABLE_RepnMap_51_51);
    RemoteFunctors_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_classified_constructor_0), LeftOverDirectArgFunctors_30, NonLocalPackedFunctors_18);
    parse_tree__decide_type_repn__assign_repns_to_remote_unshared_7_p_0(PlatformParams_6, MaxPtagUint8_29, STATE_VARIABLE_CurPtagUint8_50_50, RemoteFunctors_31, &RemoteSharedFunctors_32, STATE_VARIABLE_RepnMap_51_51, &STATE_VARIABLE_RepnMap_52_52);
    if ((RemoteSharedFunctors_32 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_RepnMap_41 = STATE_VARIABLE_RepnMap_52_52;
    else
    {
      MR_Integer NumRemoteSharedFunctors_35;
      MR_Unsigned NumRemoteSectagBits_36;
      MR_Word MaxPtag_37;
      MR_Word RSIs_38;
      MR_Word MustMask_39;
      MR_Word SectagSize_40;
      MR_Integer NumBitsInt_76;

      mercury__list__length_2_p_0((MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_classified_constructor_0), RemoteSharedFunctors_32, &NumRemoteSharedFunctors_35);
      parse_tree__decide_type_repn__num_bits_needed_for_n_things_loop_3_p_0(NumRemoteSharedFunctors_35, (MR_Integer) 0, &NumBitsInt_76);
      NumRemoteSectagBits_36 = mercury__uint__det_from_int_1_f_0(NumBitsInt_76);
      MaxPtag_37 = (MR_Word) (MaxPtagUint8_29);
      parse_tree__decide_type_repn__assign_repns_to_remote_shared_7_p_0(PlatformParams_6, NumRemoteSectagBits_36, (MR_Unsigned) 0U, RemoteSharedFunctors_32, &RSIs_38, (MR_Integer) 0, &MustMask_39);
      switch (MustMask_39) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            SectagSize_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), SectagSize_40, 0) = ((MR_Box) (NumRemoteSectagBits_36));
          }
          break;
        case (MR_Integer) 0:
          SectagSize_40 = (MR_Word) ((MR_Unsigned) 0U);
          break;
      }
      parse_tree__decide_type_repn__add_remote_shared_functors_to_repn_map_5_p_0(MaxPtag_37, SectagSize_40, RSIs_38, STATE_VARIABLE_RepnMap_52_52, STATE_VARIABLE_RepnMap_41);
    }
  }
}

static void MR_CALL 
parse_tree__decide_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_108_111_99_97_108_95_112_97_99_107_97_98_108_101_95_102_117_110_99_116_111_114_115_95_95_91_50_93_95_48_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_Result_6;

    parse_tree__decide_type_repn__compare_packable_ctors_by_ordinal_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_Result_6);
    *wrapper_arg_3 = ((MR_Box) (conv3_Result_6));
  }
}

static MR_Box MR_CALL 
parse_tree__decide_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_108_111_99_97_108_95_112_97_99_107_97_98_108_101_95_102_117_110_99_116_111_114_115_95_95_91_50_93_95_48_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv2_ClassifiedCtor_4;

    conv2_ClassifiedCtor_4 = parse_tree__decide_type_repn__packable_to_classified_constructor_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv2_ClassifiedCtor_4));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__decide_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_108_111_99_97_108_95_112_97_99_107_97_98_108_101_95_102_117_110_99_116_111_114_115_95_95_91_50_93_95_48_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Result_6;

    parse_tree__decide_type_repn__compare_packable_ctors_by_numbits_then_ordinal_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_Result_6);
    *wrapper_arg_3 = ((MR_Box) (conv0_Result_6));
  }
}

static void MR_CALL 
parse_tree__decide_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_117_116_101_95_108_111_99_97_108_95_112_97_99_107_97_98_108_101_95_102_117_110_99_116_111_114_115_95_95_91_50_93_95_48_6_p_0(
  MR_Word PlatformParams_7,
  MR_Integer NumConstants_9,
  MR_Word Functors_10,
  MR_Word * PackedFunctors_11,
  MR_Word * NonPackedFunctors_12)
{
  {
    MR_bool succeeded;
    MR_Word MayPackLocalSectags_13;
    MR_Word WordSize_14 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PlatformParams_7, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
    MR_Unsigned NumPtagBits_15;
    MR_Unsigned NumWordBits_16;
    MR_Word Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PlatformParams_7, (MR_Integer) 1))));

    MayPackLocalSectags_13 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_40, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    switch (WordSize_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          NumPtagBits_15 = (MR_Unsigned) 2U;
          NumWordBits_16 = (MR_Unsigned) 32U;
        }
        break;
      case (MR_Integer) 0:
        {
          NumPtagBits_15 = (MR_Unsigned) 3U;
          NumWordBits_16 = (MR_Unsigned) 64U;
        }
        break;
    }
    switch (MayPackLocalSectags_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *PackedFunctors_11 = (MR_Word) ((MR_Unsigned) 0U);
          *NonPackedFunctors_12 = Functors_10;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word SizedPackableFunctors_97;
          MR_Word NonPackableFunctors_98;

          parse_tree__decide_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_97_114_97_116_101_95_111_117_116_95_108_111_99_97_108_95_115_101_99_116_97_103_95_112_97_99_107_97_98_108_101_95_95_91_49_44_32_51_93_95_48_6_p_0(NumWordBits_16, Functors_10, &SizedPackableFunctors_97, &NonPackableFunctors_98);
          if ((SizedPackableFunctors_97 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            *PackedFunctors_11 = (MR_Word) ((MR_Unsigned) 0U);
            *NonPackedFunctors_12 = Functors_10;
          }
          else
          {
            MR_Word SortedSizedPackableFunctors_21;
            MR_Word LastPackableFunctor_22;
            MR_Unsigned MaxPackableBits_25;
            MR_Integer NumPackable_26;
            MR_Unsigned NumSectagBitsCP_27;
            MR_Integer Var_42;
            MR_Box conv1_LastPackableFunctor_22;
            MR_Unsigned Var_62;
            MR_Unsigned Var_63;

            mercury__list__sort_3_p_0((MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_packable_constructor_0), (MR_Word) (&parse_tree__decide_type_repn_scalar_common_2[11]), SizedPackableFunctors_97, &SortedSizedPackableFunctors_21);
            mercury__list__det_last_2_p_0((MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_packable_constructor_0), SortedSizedPackableFunctors_21, &conv1_LastPackableFunctor_22);
            LastPackableFunctor_22 = ((MR_Word) (conv1_LastPackableFunctor_22));
            MaxPackableBits_25 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), LastPackableFunctor_22, (MR_Integer) 2))));
            mercury__list__length_2_p_0((MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_packable_constructor_0), SizedPackableFunctors_97, &NumPackable_26);
            Var_42 = (MR_Integer) ((MR_Unsigned) NumConstants_9 + (MR_Unsigned) NumPackable_26);
            parse_tree__decide_type_repn__num_bits_needed_for_n_things_2_p_0(Var_42, &NumSectagBitsCP_27);
            Var_63 = (NumPtagBits_15 + NumSectagBitsCP_27);
            Var_62 = (Var_63 + MaxPackableBits_25);
            succeeded = (Var_62 <= NumWordBits_16);
            if (succeeded)
            {
              *PackedFunctors_11 = SizedPackableFunctors_97;
              *NonPackedFunctors_12 = NonPackableFunctors_98;
            }
            else
            {
              MR_Unsigned NumSectagBitsC_30;
              MR_Integer NumSectagValues0_31;
              MR_Integer TakeLimit0_32;
              MR_Word RevSizedPackedFunctors0_34;
              MR_Word SizedNonPackedFunctors0_35;
              MR_Word SizedNonPackedFunctors_37;
              MR_Word RevPackedFunctors_38;
              MR_Word NonPackedPackableFunctors_39;
              MR_Integer Var_65;
              MR_Word Var_70;
              MR_Integer _NumTaken_33;

              parse_tree__decide_type_repn__num_bits_needed_for_n_things_2_p_0(NumConstants_9, &NumSectagBitsC_30);
              Var_65 = mercury__uint__cast_to_int_1_f_0(NumSectagBitsC_30);
              NumSectagValues0_31 = mercury__int__f_60_60_2_f_0((MR_Integer) 1, Var_65);
              TakeLimit0_32 = (MR_Integer) ((MR_Unsigned) NumSectagValues0_31 - (MR_Unsigned) NumConstants_9);
              parse_tree__decide_type_repn__take_local_packable_functors_constant_sectag_bits_10_p_0(NumWordBits_16, NumPtagBits_15, NumSectagBitsC_30, TakeLimit0_32, (MR_Integer) 0, &_NumTaken_33, SortedSizedPackableFunctors_21, (MR_Word) ((MR_Unsigned) 0U), &RevSizedPackedFunctors0_34, &SizedNonPackedFunctors0_35);
              parse_tree__decide_type_repn__take_local_packable_functors_incr_sectag_bits_7_p_0(NumWordBits_16, NumPtagBits_15, NumSectagBitsC_30, RevSizedPackedFunctors0_34, SizedNonPackedFunctors0_35, &RevPackedFunctors_38, &SizedNonPackedFunctors_37);
              NonPackedPackableFunctors_39 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_packable_constructor_0), (MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_classified_constructor_0), (MR_Word) (&parse_tree__decide_type_repn_scalar_common_2[12]), SizedNonPackedFunctors_37);
              mercury__list__sort_3_p_0((MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_packable_constructor_0), (MR_Word) (&parse_tree__decide_type_repn_scalar_common_2[13]), RevPackedFunctors_38, PackedFunctors_11);
              Var_70 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_classified_constructor_0), NonPackableFunctors_98, NonPackedPackableFunctors_39);
              mercury__list__sort_2_p_0((MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_classified_constructor_0), Var_70, NonPackedFunctors_12);
            }
          }
        }
        break;
    }
  }
}

static void MR_CALL 
parse_tree__decide_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_97_114_97_116_101_95_111_117_116_95_108_111_99_97_108_95_115_101_99_116_97_103_95_112_97_99_107_97_98_108_101_95_95_91_49_44_32_51_93_95_48_6_p_0(
  MR_Unsigned Limit_2,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6)
{
  {
    MR_bool succeeded;

    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word ClassifiedCtor_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word ClassifiedCtors_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_Word PackablesTail_17;
      MR_Word NonPackablesTail_18;
      MR_Word Ctor_19;
      MR_Word ClassifiedArgs_20;
      MR_Word PackableArgs_21;
      MR_Unsigned NumBits_22;
      MR_Word LeftOverArgs_29;
      MR_Word Var_30;
      MR_Unsigned Var_31;

      parse_tree__decide_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_112_97_114_97_116_101_95_111_117_116_95_108_111_99_97_108_95_115_101_99_116_97_103_95_112_97_99_107_97_98_108_101_95_95_91_49_44_32_51_93_95_48_6_p_0(Limit_2, ClassifiedCtors_14, &PackablesTail_17, &NonPackablesTail_18);
      Ctor_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassifiedCtor_13, (MR_Integer) 0))));
      ClassifiedArgs_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassifiedCtor_13, (MR_Integer) 1))));
      Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_19, (MR_Integer) 1))));
      succeeded = (Var_30 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_31 = (MR_Unsigned) 0U;
        parse_tree__decide_type_repn__find_initial_packable_args_within_limit_6_p_0(Limit_2, Var_31, &NumBits_22, ClassifiedArgs_20, &PackableArgs_21, &LeftOverArgs_29);
        succeeded = (LeftOverArgs_29 == (MR_Word) ((MR_Unsigned) 0U));
      }
      if (succeeded)
      {
        MR_Word PackableCtor_23;

        {
          PackableCtor_23 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), PackableCtor_23, 0) = ((MR_Box) (Ctor_19));
          MR_hl_field(MR_mktag(0), PackableCtor_23, 1) = ((MR_Box) (PackableArgs_21));
          MR_hl_field(MR_mktag(0), PackableCtor_23, 2) = ((MR_Box) (NumBits_22));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__5_5 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PackableCtor_23));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (PackablesTail_17));
        }
        *HeadVar__6_6 = NonPackablesTail_18;
      }
      else
      {
        *HeadVar__5_5 = PackablesTail_17;
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__6_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ClassifiedCtor_13));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (NonPackablesTail_18));
        }
      }
    }
  }
}

static void MR_CALL 
parse_tree__decide_type_repn__num_bits_needed_for_n_things_2_p_0(
  MR_Integer NumSharers_3,
  MR_Unsigned * NumBits_4)
{
  {
    MR_Integer NumBitsInt_5;

    parse_tree__decide_type_repn__num_bits_needed_for_n_things_loop_3_p_0(NumSharers_3, (MR_Integer) 0, &NumBitsInt_5);
    *NumBits_4 = mercury__uint__det_from_int_1_f_0(NumBitsInt_5);
  }
}

static void MR_CALL 
parse_tree__decide_type_repn__take_local_packable_functors_incr_sectag_bits_7_p_0(
  MR_Unsigned NumWordBits_8,
  MR_Unsigned NumPtagBits_9,
  MR_Unsigned NumSectagBits0_10,
  MR_Word RevPackedFunctors0_11,
  MR_Word NonPackedFunctors0_12,
  MR_Word * RevPackedFunctors_13,
  MR_Word * NonPackedFunctors_14)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((RevPackedFunctors0_11 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    {
      MR_Unsigned MaxPackableBits_19;
      MR_Word Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RevPackedFunctors0_11, (MR_Integer) 0))));
      MR_Unsigned Var_44;
      MR_Unsigned Var_45;
      MR_Unsigned Var_46;

      MaxPackableBits_19 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_43, (MR_Integer) 2))));
      Var_46 = (NumPtagBits_9 + NumSectagBits0_10);
      Var_45 = (Var_46 + MaxPackableBits_19);
      Var_44 = (Var_45 + (MR_Unsigned) 1U);
      succeeded = (Var_44 <= NumWordBits_8);
    }
    if (succeeded)
    {
      MR_Unsigned NumSectagBits1_21 = (NumSectagBits0_10 + (MR_Unsigned) 1U);
      MR_Integer TakeLimit_22;
      MR_Integer NumTaken_23;
      MR_Word RevPackedFunctors1_24;
      MR_Word NonPackedFunctors1_25;
      MR_Integer Var_49;
      MR_Integer Var_51;
      MR_Integer Var_52;
      MR_Integer Var_54;

      Var_51 = mercury__uint__cast_to_int_1_f_0(NumSectagBits1_21);
      Var_49 = mercury__int__f_60_60_2_f_0((MR_Integer) 1, Var_51);
      Var_54 = mercury__uint__cast_to_int_1_f_0(NumSectagBits0_10);
      Var_52 = mercury__int__f_60_60_2_f_0((MR_Integer) 1, Var_54);
      TakeLimit_22 = (MR_Integer) ((MR_Unsigned) Var_49 - (MR_Unsigned) Var_52);
      parse_tree__decide_type_repn__take_local_packable_functors_constant_sectag_bits_10_p_0(NumWordBits_8, NumPtagBits_9, NumSectagBits1_21, TakeLimit_22, (MR_Integer) 0, &NumTaken_23, NonPackedFunctors0_12, RevPackedFunctors0_11, &RevPackedFunctors1_24, &NonPackedFunctors1_25);
      succeeded = (NumTaken_23 > (MR_Integer) 0);
      if (succeeded)
      {
        MR_Unsigned next_value_of_NumSectagBits0_10 = NumSectagBits1_21;
        MR_Word next_value_of_RevPackedFunctors0_11 = RevPackedFunctors1_24;
        MR_Word next_value_of_NonPackedFunctors0_12 = NonPackedFunctors1_25;

        // direct tailcall eliminated
        ;
        NumSectagBits0_10 = next_value_of_NumSectagBits0_10;
        RevPackedFunctors0_11 = next_value_of_RevPackedFunctors0_11;
        NonPackedFunctors0_12 = next_value_of_NonPackedFunctors0_12;
        continue;
      }
      else
      {
        *RevPackedFunctors_13 = RevPackedFunctors0_11;
        *NonPackedFunctors_14 = NonPackedFunctors0_12;
      }
    }
    else
    {
      *RevPackedFunctors_13 = RevPackedFunctors0_11;
      *NonPackedFunctors_14 = NonPackedFunctors0_12;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__decide_type_repn__take_local_packable_functors_constant_sectag_bits_10_p_0(
  MR_Unsigned NumWordBits_1,
  MR_Unsigned PtagBits_2,
  MR_Unsigned SectagBits_3,
  MR_Integer TakeLimit_4,
  MR_Integer STATE_VARIABLE_NumTaken_0_5,
  MR_Integer * STATE_VARIABLE_NumTaken_6,
  MR_Word HeadVar__7_7,
  MR_Word STATE_VARIABLE_RevPackedFunctors_0_8,
  MR_Word * STATE_VARIABLE_RevPackedFunctors_9,
  MR_Word * HeadVar__10_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__7_7 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__10_10 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_RevPackedFunctors_9 = STATE_VARIABLE_RevPackedFunctors_0_8;
      *STATE_VARIABLE_NumTaken_6 = STATE_VARIABLE_NumTaken_0_5;
    }
    else
    {
      MR_Word PackableFunctor_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__7_7, (MR_Integer) 0))));
      MR_Word PackableFunctors_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__7_7, (MR_Integer) 1))));
      MR_Unsigned PackableBits_32 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PackableFunctor_26, (MR_Integer) 2))));
      MR_Unsigned Var_59;
      MR_Unsigned Var_60;

      succeeded = (TakeLimit_4 > (MR_Integer) 0);
      if (succeeded)
      {
        Var_60 = (PtagBits_2 + SectagBits_3);
        Var_59 = (Var_60 + PackableBits_32);
        succeeded = (Var_59 <= NumWordBits_1);
      }
      if (succeeded)
      {
        MR_Word STATE_VARIABLE_RevPackedFunctors_64_64;
        MR_Integer STATE_VARIABLE_NumTaken_65_65;
        MR_Integer Var_67;
        MR_Integer next_value_of_TakeLimit_4;
        MR_Integer next_value_of_STATE_VARIABLE_NumTaken_0_5;
        MR_Word next_value_of_HeadVar__7_7;
        MR_Word next_value_of_STATE_VARIABLE_RevPackedFunctors_0_8;

        {
          STATE_VARIABLE_RevPackedFunctors_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevPackedFunctors_64_64, 0) = ((MR_Box) (PackableFunctor_26));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevPackedFunctors_64_64, 1) = ((MR_Box) (STATE_VARIABLE_RevPackedFunctors_0_8));
        }
        STATE_VARIABLE_NumTaken_65_65 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_NumTaken_0_5 + (MR_Unsigned) 1);
        Var_67 = (MR_Integer) ((MR_Unsigned) TakeLimit_4 - (MR_Unsigned) 1);
        // direct tailcall eliminated
        ;
        next_value_of_TakeLimit_4 = Var_67;
        next_value_of_STATE_VARIABLE_NumTaken_0_5 = STATE_VARIABLE_NumTaken_65_65;
        next_value_of_HeadVar__7_7 = PackableFunctors_27;
        next_value_of_STATE_VARIABLE_RevPackedFunctors_0_8 = STATE_VARIABLE_RevPackedFunctors_64_64;
        TakeLimit_4 = next_value_of_TakeLimit_4;
        STATE_VARIABLE_NumTaken_0_5 = next_value_of_STATE_VARIABLE_NumTaken_0_5;
        HeadVar__7_7 = next_value_of_HeadVar__7_7;
        STATE_VARIABLE_RevPackedFunctors_0_8 = next_value_of_STATE_VARIABLE_RevPackedFunctors_0_8;
        continue;
      }
      else
      {
        *HeadVar__10_10 = HeadVar__7_7;
        *STATE_VARIABLE_RevPackedFunctors_9 = STATE_VARIABLE_RevPackedFunctors_0_8;
        *STATE_VARIABLE_NumTaken_6 = STATE_VARIABLE_NumTaken_0_5;
      }
    }
    break;
  }
}

static void MR_CALL 
parse_tree__decide_type_repn__num_bits_needed_for_n_things_loop_3_p_0(
  MR_Integer N_4,
  MR_Integer NumBits0_5,
  MR_Integer * NumBits_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer Var_7;

    // setup for model_det tailcalls optimized into a loop
    ;
    Var_7 = mercury__int__f_60_60_2_f_0((MR_Integer) 1, NumBits0_5);
    succeeded = (N_4 <= Var_7);
    if (succeeded)
      *NumBits_6 = NumBits0_5;
    else
    {
      MR_Integer Var_9 = (MR_Integer) ((MR_Unsigned) NumBits0_5 + (MR_Unsigned) 1);
      MR_Integer next_value_of_NumBits0_5 = Var_9;

      // direct tailcall eliminated
      ;
      NumBits0_5 = next_value_of_NumBits0_5;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
parse_tree__decide_type_repn__separate_out_constants_5_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__decide_type_repn__IntroducedFrom__pred__separate_out_constants__2330__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__decide_type_repn__separate_out_constants_5_p_0(
  MR_Word PlatformParams_1,
  MR_Word SimpleDuMap_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  {
    MR_bool succeeded;

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word Ctor_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Ctors_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ConstantsTail_14;
      MR_Word FunctorsTail_15;
      MR_Word Args_16;
      MR_Word Var_27;

      parse_tree__decide_type_repn__separate_out_constants_5_p_0(PlatformParams_1, SimpleDuMap_2, Ctors_11, &ConstantsTail_14, &FunctorsTail_15);
      Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_10, (MR_Integer) 1))));
      Args_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_10, (MR_Integer) 3))));
      if ((Args_16 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_21;

        {
          Var_21 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&parse_tree__decide_type_repn_scalar_common_7[5]));
          MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (parse_tree__decide_type_repn__separate_out_constants_5_p_0_1));
          MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Var_21, 4) = ((MR_Box) (Var_27));
        }
        mercury__require__expect_3_p_0(Var_21, (MR_String) "predicate \140parse_tree.decide_type_repn.separate_out_constants\'/5", (MR_String) "Args = [] but exist_constraints");
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Ctor_10));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ConstantsTail_14));
        }
        *HeadVar__5_5 = FunctorsTail_15;
      }
      else
      {
        MR_Word ClassifiedArgs_19;
        MR_Word ClassifiedCtor_20;
        MR_Word Arg_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_16, (MR_Integer) 0))));
        MR_Word Args_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_16, (MR_Integer) 1))));
        MR_Word ClassifiedArg_43;
        MR_Word ClassifiedArgs_44;
        MR_Word ArgType_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_41, (MR_Integer) 1))));
        MR_Word Class_48;

        parse_tree__decide_type_repn__classify_arg_type_4_p_0(PlatformParams_1, SimpleDuMap_2, ArgType_46, &Class_48);
        {
          ClassifiedArg_43 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ClassifiedArg_43, 0) = ((MR_Box) (Arg_41));
          MR_hl_field(MR_mktag(0), ClassifiedArg_43, 1) = ((MR_Box) (Class_48));
        }
        parse_tree__decide_type_repn__classify_args_4_p_0(PlatformParams_1, SimpleDuMap_2, Args_42, &ClassifiedArgs_44);
        {
          ClassifiedArgs_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ClassifiedArgs_19, 0) = ((MR_Box) (ClassifiedArg_43));
          MR_hl_field(MR_mktag(1), ClassifiedArgs_19, 1) = ((MR_Box) (ClassifiedArgs_44));
        }
        {
          ClassifiedCtor_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ClassifiedCtor_20, 0) = ((MR_Box) (Ctor_10));
          MR_hl_field(MR_mktag(0), ClassifiedCtor_20, 1) = ((MR_Box) (ClassifiedArgs_19));
        }
        *HeadVar__4_4 = ConstantsTail_14;
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__5_5 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ClassifiedCtor_20));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (FunctorsTail_15));
        }
      }
    }
  }
}

static void MR_CALL 
parse_tree__decide_type_repn__add_remote_shared_functors_to_repn_map_5_p_0(
  MR_Word Ptag_1,
  MR_Word SectagSize_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_RepnMap_0_4,
  MR_Word * STATE_VARIABLE_RepnMap_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_RepnMap_5 = STATE_VARIABLE_RepnMap_0_4;
    else
    {
      MR_Word RSI_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word RSIs_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      uint32_t Ordinal_16 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(0), RSI_13, (MR_Integer) 0)));
      MR_Unsigned RemoteSectag_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), RSI_13, (MR_Integer) 1))));
      MR_Word OoMArgRepns_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RSI_13, (MR_Integer) 2))));
      MR_Word Sectag_19;
      MR_Word Repn_20;
      MR_Word Var_23;
      MR_Word STATE_VARIABLE_RepnMap_24_24;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_RepnMap_0_4;

      {
        Sectag_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Sectag_19, 0) = ((MR_Box) (RemoteSectag_17));
        MR_hl_field(MR_mktag(1), Sectag_19, 1) = ((MR_Box) (SectagSize_2));
      }
      {
        Repn_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Repn_20, 0) = ((MR_Box) (Ptag_1));
        MR_hl_field(MR_mktag(1), Repn_20, 1) = ((MR_Box) (Sectag_19));
        MR_hl_field(MR_mktag(1), Repn_20, 2) = ((MR_Box) (OoMArgRepns_18));
      }
      {
        Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (Repn_20));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint32_0), (MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_ctor_repn_0), ((MR_Box) (MR_Word) (Ordinal_16)), ((MR_Box) (Var_23)), STATE_VARIABLE_RepnMap_0_4, &STATE_VARIABLE_RepnMap_24_24);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = RSIs_14;
      next_value_of_STATE_VARIABLE_RepnMap_0_4 = STATE_VARIABLE_RepnMap_24_24;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_RepnMap_0_4 = next_value_of_STATE_VARIABLE_RepnMap_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__decide_type_repn__assign_repns_to_remote_shared_7_p_0(
  MR_Word PlatformParams_1,
  MR_Unsigned NumRemoteSectagBits_2,
  MR_Unsigned STATE_VARIABLE_CurRemoteSectag_0_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_MustMask_0_6,
  MR_Word * STATE_VARIABLE_MustMask_7)
{
  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_MustMask_7 = STATE_VARIABLE_MustMask_0_6;
  }
  else
  {
    MR_Word ClassifiedCtor_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
    MR_Word ClassifiedCtors_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
    MR_Word RSI_19;
    MR_Word RSIs_20;
    MR_Word Ctor_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassifiedCtor_17, (MR_Integer) 0))));
    MR_Word ClassifiedArgs_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassifiedCtor_17, (MR_Integer) 1))));
    uint32_t Ordinal_24 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(0), Ctor_22, (MR_Integer) 0)));
    MR_Word MaybeExistConstraints_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_22, (MR_Integer) 1))));
    MR_Word ArgRepns_30;
    MR_Word IsShared_31;
    MR_Word OoMArgRepns_32;
    MR_Word STATE_VARIABLE_MustMask_36_36;
    MR_Unsigned STATE_VARIABLE_CurRemoteSectag_37_37;

    parse_tree__decide_type_repn__decide_remote_args_5_p_0(PlatformParams_1, NumRemoteSectagBits_2, MaybeExistConstraints_25, ClassifiedArgs_23, &ArgRepns_30);
    IsShared_31 = parse_tree__decide_type_repn__remote_sectag_is_shared_with_args_1_f_0(ArgRepns_30);
    switch (IsShared_31) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_MustMask_36_36 = STATE_VARIABLE_MustMask_0_6;
        break;
      case (MR_Integer) 1:
        STATE_VARIABLE_MustMask_36_36 = (MR_Integer) 1;
        break;
    }
    mercury__one_or_more__det_list_to_one_or_more_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_remote_arg_repn_0), ArgRepns_30, &OoMArgRepns_32);
    {
      RSI_19 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), RSI_19, 0) = ((MR_Box) (MR_Word) (Ordinal_24));
      MR_hl_field(MR_mktag(0), RSI_19, 1) = ((MR_Box) (STATE_VARIABLE_CurRemoteSectag_0_3));
      MR_hl_field(MR_mktag(0), RSI_19, 2) = ((MR_Box) (OoMArgRepns_32));
    }
    STATE_VARIABLE_CurRemoteSectag_37_37 = (STATE_VARIABLE_CurRemoteSectag_0_3 + (MR_Unsigned) 1U);
    parse_tree__decide_type_repn__assign_repns_to_remote_shared_7_p_0(PlatformParams_1, NumRemoteSectagBits_2, STATE_VARIABLE_CurRemoteSectag_37_37, ClassifiedCtors_18, &RSIs_20, STATE_VARIABLE_MustMask_36_36, STATE_VARIABLE_MustMask_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__5_5 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (RSI_19));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (RSIs_20));
    }
  }
}

static MR_Word MR_CALL 
parse_tree__decide_type_repn__remote_sectag_is_shared_with_args_1_f_0(
  MR_Word HeadVar__1_1)
{
  while (MR_TRUE)
  {
    MR_Word IsShared_2;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      IsShared_2 = (MR_Integer) 1;
    else
    {
      MR_Word ArgRepn_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgRepns_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));

      switch (MR_tag((MR_Word) ArgRepn_3)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word next_value_of_HeadVar__1_1 = ArgRepns_4;

            // direct tailcall eliminated
            ;
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            continue;
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          IsShared_2 = (MR_Integer) 0;
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ArgRepn_3, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              IsShared_2 = (MR_Integer) 1;
              break;
            case (MR_Integer) 1:
              mercury__require__unexpected_2_p_0((MR_String) "function \140parse_tree.decide_type_repn.remote_sectag_is_shared_with_args\'/1", (MR_String) "remote_partial_shifted");
              break;
            case (MR_Integer) 2:
              mercury__require__unexpected_2_p_0((MR_String) "function \140parse_tree.decide_type_repn.remote_sectag_is_shared_with_args\'/1", (MR_String) "remote_none_shifted");
              break;
          }
          break;
      }
    }
    return IsShared_2;
    break;
  }
}

static void MR_CALL 
parse_tree__decide_type_repn__assign_repns_to_remote_unshared_7_p_0(
  MR_Word PlatformParams_1,
  uint8_t MaxPtagUint8_2,
  uint8_t STATE_VARIABLE_CurPtagUint8_0_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_RepnMap_0_6,
  MR_Word * STATE_VARIABLE_RepnMap_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_RepnMap_7 = STATE_VARIABLE_RepnMap_0_6;
    }
    else
    {
      MR_Word ClassifiedCtor_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word ClassifiedCtors_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_Word Ctor_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassifiedCtor_17, (MR_Integer) 0))));
      MR_Word ClassifiedArgs_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassifiedCtor_17, (MR_Integer) 1))));
      uint32_t Ordinal_23 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(0), Ctor_21, (MR_Integer) 0)));
      MR_Word MaybeExistConstraints_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_21, (MR_Integer) 1))));

      succeeded = (STATE_VARIABLE_CurPtagUint8_0_3 == MaxPtagUint8_2);
      if (succeeded)
      {
        succeeded = (ClassifiedCtors_18 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
        }
      }
      if (succeeded)
      {
        *HeadVar__5_5 = HeadVar__4_4;
        *STATE_VARIABLE_RepnMap_7 = STATE_VARIABLE_RepnMap_0_6;
      }
      else
      {
        MR_Word Ptag_31 = (MR_Word) (STATE_VARIABLE_CurPtagUint8_0_3);
        MR_Word ArgRepns_34;
        MR_Word OoMArgRepns_35;
        MR_Word Repn_36;
        MR_Word Var_40;
        MR_Word STATE_VARIABLE_RepnMap_41_41;
        uint8_t STATE_VARIABLE_CurPtagUint8_42_42;
        uint8_t next_value_of_STATE_VARIABLE_CurPtagUint8_0_3;
        MR_Word next_value_of_HeadVar__4_4;
        MR_Word next_value_of_STATE_VARIABLE_RepnMap_0_6;

        parse_tree__decide_type_repn__decide_remote_args_5_p_0(PlatformParams_1, (MR_Unsigned) 0U, MaybeExistConstraints_24, ClassifiedArgs_22, &ArgRepns_34);
        mercury__one_or_more__det_list_to_one_or_more_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_remote_arg_repn_0), ArgRepns_34, &OoMArgRepns_35);
        {
          Repn_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Repn_36, 0) = ((MR_Box) (Ptag_31));
          MR_hl_field(MR_mktag(1), Repn_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Repn_36, 2) = ((MR_Box) (OoMArgRepns_35));
        }
        {
          Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (Repn_36));
        }
        mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint32_0), (MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_ctor_repn_0), ((MR_Box) (MR_Word) (Ordinal_23)), ((MR_Box) (Var_40)), STATE_VARIABLE_RepnMap_0_6, &STATE_VARIABLE_RepnMap_41_41);
        STATE_VARIABLE_CurPtagUint8_42_42 = (STATE_VARIABLE_CurPtagUint8_0_3 + UINT8_C(1));
        // direct tailcall eliminated
        ;
        next_value_of_STATE_VARIABLE_CurPtagUint8_0_3 = STATE_VARIABLE_CurPtagUint8_42_42;
        next_value_of_HeadVar__4_4 = ClassifiedCtors_18;
        next_value_of_STATE_VARIABLE_RepnMap_0_6 = STATE_VARIABLE_RepnMap_41_41;
        STATE_VARIABLE_CurPtagUint8_0_3 = next_value_of_STATE_VARIABLE_CurPtagUint8_0_3;
        HeadVar__4_4 = next_value_of_HeadVar__4_4;
        STATE_VARIABLE_RepnMap_0_6 = next_value_of_STATE_VARIABLE_RepnMap_0_6;
        continue;
      }
    }
    break;
  }
}

static MR_bool MR_CALL 
parse_tree__decide_type_repn__assign_repns_to_direct_arg_functors_8_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__decide_type_repn__IntroducedFrom__pred__assign_repns_to_direct_arg_functors__1468__1_2_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__decide_type_repn__assign_repns_to_direct_arg_functors_8_p_0(
  uint8_t MaxPtagUint8_1,
  uint8_t HeadVar__2_2,
  uint8_t * HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word ClassifiedNonDirectArgCtors_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_RepnMap_0_7,
  MR_Word * STATE_VARIABLE_RepnMap_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_RepnMap_8 = STATE_VARIABLE_RepnMap_0_7;
      *HeadVar__3_3 = HeadVar__2_2;
    }
    else
    {
      MR_Word ClassifiedDirectArgCtor_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word ClassifiedDirectArgCtors_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_Word DirectArgCtor_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassifiedDirectArgCtor_19, (MR_Integer) 0))));
      uint32_t Ordinal_26 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(0), DirectArgCtor_24, (MR_Integer) 0)));
      MR_Integer NumArgs_30 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), DirectArgCtor_24, (MR_Integer) 4))));
      MR_Word Var_42;

      {
        Var_42 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (&parse_tree__decide_type_repn_scalar_common_7[4]));
        MR_hl_field(MR_mktag(0), Var_42, 1) = ((MR_Box) (parse_tree__decide_type_repn__assign_repns_to_direct_arg_functors_8_p_0_1));
        MR_hl_field(MR_mktag(0), Var_42, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_42, 3) = ((MR_Box) (NumArgs_30));
        MR_hl_field(MR_mktag(0), Var_42, 4) = ((MR_Box) ((MR_Integer) 1));
      }
      mercury__require__expect_3_p_0(Var_42, (MR_String) "predicate \140parse_tree.decide_type_repn.assign_repns_to_direct_arg_functors\'/8", (MR_String) "NumArgs != 1");
      succeeded = (HeadVar__2_2 == MaxPtagUint8_1);
      if (succeeded)
      {
        succeeded = (ClassifiedDirectArgCtors_20 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
        }
        if (!(succeeded))
        {
          succeeded = (ClassifiedNonDirectArgCtors_5 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
          }
        }
      }
      if (succeeded)
      {
        *HeadVar__6_6 = HeadVar__4_4;
        *STATE_VARIABLE_RepnMap_8 = STATE_VARIABLE_RepnMap_0_7;
        *HeadVar__3_3 = HeadVar__2_2;
      }
      else
      {
        MR_Word Ptag_36 = (MR_Word) (HeadVar__2_2);
        MR_Word Repn_37;
        MR_Word Var_46;
        MR_Word STATE_VARIABLE_RepnMap_47_47;
        uint8_t STATE_VARIABLE_CurPtagUint8_48_48;
        uint8_t next_value_of_HeadVar__2_2;
        MR_Word next_value_of_HeadVar__4_4;
        MR_Word next_value_of_STATE_VARIABLE_RepnMap_0_7;

        {
          Repn_37 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Repn_37, 0) = ((MR_Box) (Ptag_36));
        }
        {
          Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Repn_37));
        }
        mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint32_0), (MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_ctor_repn_0), ((MR_Box) (MR_Word) (Ordinal_26)), ((MR_Box) (Var_46)), STATE_VARIABLE_RepnMap_0_7, &STATE_VARIABLE_RepnMap_47_47);
        STATE_VARIABLE_CurPtagUint8_48_48 = (HeadVar__2_2 + UINT8_C(1));
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = STATE_VARIABLE_CurPtagUint8_48_48;
        next_value_of_HeadVar__4_4 = ClassifiedDirectArgCtors_20;
        next_value_of_STATE_VARIABLE_RepnMap_0_7 = STATE_VARIABLE_RepnMap_47_47;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        HeadVar__4_4 = next_value_of_HeadVar__4_4;
        STATE_VARIABLE_RepnMap_0_7 = next_value_of_STATE_VARIABLE_RepnMap_0_7;
        continue;
      }
    }
    break;
  }
}

static MR_bool MR_CALL 
parse_tree__decide_type_repn__assign_repns_to_local_packed_functors_6_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__decide_type_repn__IntroducedFrom__pred__assign_repns_to_local_packed_functors__1445__1_2_p_0(((MR_Unsigned) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__decide_type_repn__assign_repns_to_local_packed_functors_6_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__decide_type_repn__IntroducedFrom__pred__assign_repns_to_local_packed_functors__1438__1_2_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__decide_type_repn__assign_repns_to_local_packed_functors_6_p_0(
  MR_Word PlatformParams_1,
  MR_Unsigned NumLocalSectagBits_2,
  MR_Unsigned STATE_VARIABLE_CurSectag_0_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_RepnMap_0_5,
  MR_Word * STATE_VARIABLE_RepnMap_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_RepnMap_6 = STATE_VARIABLE_RepnMap_0_5;
    else
    {
      MR_Word PackableCtor_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word PackableCtors_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_Word Ctor_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PackableCtor_16, (MR_Integer) 0))));
      MR_Word PackableArgs_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PackableCtor_16, (MR_Integer) 1))));
      MR_Unsigned NumBits_21 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PackableCtor_16, (MR_Integer) 2))));
      uint32_t Ordinal_22 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(0), Ctor_19, (MR_Integer) 0)));
      MR_Integer NumArgs_26 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Ctor_19, (MR_Integer) 4))));
      MR_Word Sectag_28;
      MR_Word WordSize_29;
      MR_Unsigned NumPtagBits_30;
      MR_Unsigned NumPrefixBits_31;
      MR_Unsigned NextShift_32;
      MR_Word ArgRepns_33;
      MR_Word OoMArgRepns_34;
      MR_Word Repn_35;
      MR_Word Var_39;
      MR_Word Var_43;
      MR_Unsigned Var_46;
      MR_Word Var_47;
      MR_Word STATE_VARIABLE_RepnMap_48_48;
      MR_Unsigned STATE_VARIABLE_CurSectag_49_49;
      MR_Unsigned next_value_of_STATE_VARIABLE_CurSectag_0_3;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_RepnMap_0_5;

      {
        Var_39 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_39, 0) = ((MR_Box) (&parse_tree__decide_type_repn_scalar_common_7[4]));
        MR_hl_field(MR_mktag(0), Var_39, 1) = ((MR_Box) (parse_tree__decide_type_repn__assign_repns_to_local_packed_functors_6_p_0_1));
        MR_hl_field(MR_mktag(0), Var_39, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_39, 3) = ((MR_Box) (NumArgs_26));
        MR_hl_field(MR_mktag(0), Var_39, 4) = ((MR_Box) ((MR_Integer) 0));
      }
      mercury__require__expect_not_3_p_0(Var_39, (MR_String) "predicate \140parse_tree.decide_type_repn.assign_repns_to_local_packed_functors\'/6", (MR_String) "NumArgs != 0");
      {
        Sectag_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Sectag_28, 0) = ((MR_Box) (STATE_VARIABLE_CurSectag_0_3));
        MR_hl_field(MR_mktag(1), Sectag_28, 1) = ((MR_Box) (NumLocalSectagBits_2));
      }
      WordSize_29 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PlatformParams_1, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
      switch (WordSize_29) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          NumPtagBits_30 = (MR_Unsigned) 2U;
          break;
        case (MR_Integer) 0:
          NumPtagBits_30 = (MR_Unsigned) 3U;
          break;
      }
      NumPrefixBits_31 = (NumPtagBits_30 + NumLocalSectagBits_2);
      parse_tree__decide_type_repn__decide_local_packed_arg_word_loop_4_p_0(NumPrefixBits_31, &NextShift_32, PackableArgs_20, &ArgRepns_33);
      Var_46 = (NumPrefixBits_31 + NumBits_21);
      {
        Var_43 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_43, 0) = ((MR_Box) (&parse_tree__decide_type_repn_scalar_common_7[2]));
        MR_hl_field(MR_mktag(0), Var_43, 1) = ((MR_Box) (parse_tree__decide_type_repn__assign_repns_to_local_packed_functors_6_p_0_2));
        MR_hl_field(MR_mktag(0), Var_43, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_43, 3) = ((MR_Box) (NextShift_32));
        MR_hl_field(MR_mktag(0), Var_43, 4) = ((MR_Box) (Var_46));
      }
      mercury__require__expect_3_p_0(Var_43, (MR_String) "predicate \140parse_tree.decide_type_repn.assign_repns_to_local_packed_functors\'/6", (MR_String) "NextShift != NumPrefixBits + NumBits");
      mercury__one_or_more__det_list_to_one_or_more_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_local_arg_repn_0), ArgRepns_33, &OoMArgRepns_34);
      {
        Repn_35 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Repn_35, 0) = ((MR_Box) (Sectag_28));
        MR_hl_field(MR_mktag(0), Repn_35, 1) = ((MR_Box) (OoMArgRepns_34));
      }
      {
        Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (Repn_35));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint32_0), (MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_ctor_repn_0), ((MR_Box) (MR_Word) (Ordinal_22)), ((MR_Box) (Var_47)), STATE_VARIABLE_RepnMap_0_5, &STATE_VARIABLE_RepnMap_48_48);
      STATE_VARIABLE_CurSectag_49_49 = (STATE_VARIABLE_CurSectag_0_3 + (MR_Unsigned) 1U);
      // direct tailcall eliminated
      ;
      next_value_of_STATE_VARIABLE_CurSectag_0_3 = STATE_VARIABLE_CurSectag_49_49;
      next_value_of_HeadVar__4_4 = PackableCtors_17;
      next_value_of_STATE_VARIABLE_RepnMap_0_5 = STATE_VARIABLE_RepnMap_48_48;
      STATE_VARIABLE_CurSectag_0_3 = next_value_of_STATE_VARIABLE_CurSectag_0_3;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_RepnMap_0_5 = next_value_of_STATE_VARIABLE_RepnMap_0_5;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
parse_tree__decide_type_repn__assign_repns_to_constants_6_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__decide_type_repn__IntroducedFrom__pred__assign_repns_to_constants__1420__1_2_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__decide_type_repn__assign_repns_to_constants_6_p_0(
  MR_Word SectagSize_1,
  MR_Unsigned STATE_VARIABLE_CurSectag_0_2,
  MR_Unsigned * STATE_VARIABLE_CurSectag_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_RepnMap_0_5,
  MR_Word * STATE_VARIABLE_RepnMap_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_RepnMap_6 = STATE_VARIABLE_RepnMap_0_5;
      *STATE_VARIABLE_CurSectag_3 = STATE_VARIABLE_CurSectag_0_2;
    }
    else
    {
      MR_Word Ctor_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word Ctors_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      uint32_t Ordinal_19 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(0), Ctor_16, (MR_Integer) 0)));
      MR_Integer NumArgs_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Ctor_16, (MR_Integer) 4))));
      MR_Word Repn_25;
      MR_Word Var_30;
      MR_Word Var_34;
      MR_Word STATE_VARIABLE_RepnMap_35_35;
      MR_Unsigned STATE_VARIABLE_CurSectag_36_36;
      MR_Unsigned next_value_of_STATE_VARIABLE_CurSectag_0_2;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_RepnMap_0_5;

      {
        Var_30 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (&parse_tree__decide_type_repn_scalar_common_7[4]));
        MR_hl_field(MR_mktag(0), Var_30, 1) = ((MR_Box) (parse_tree__decide_type_repn__assign_repns_to_constants_6_p_0_1));
        MR_hl_field(MR_mktag(0), Var_30, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_30, 3) = ((MR_Box) (NumArgs_23));
        MR_hl_field(MR_mktag(0), Var_30, 4) = ((MR_Box) ((MR_Integer) 0));
      }
      mercury__require__expect_3_p_0(Var_30, (MR_String) "predicate \140parse_tree.decide_type_repn.assign_repns_to_constants\'/6", (MR_String) "NumArgs != 0");
      {
        Repn_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Repn_25, 0) = ((MR_Box) (STATE_VARIABLE_CurSectag_0_2));
        MR_hl_field(MR_mktag(0), Repn_25, 1) = ((MR_Box) (SectagSize_1));
      }
      Var_34 = (MR_Word) ((MR_Word) (Repn_25));
      mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint32_0), (MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_ctor_repn_0), ((MR_Box) (MR_Word) (Ordinal_19)), ((MR_Box) (Var_34)), STATE_VARIABLE_RepnMap_0_5, &STATE_VARIABLE_RepnMap_35_35);
      STATE_VARIABLE_CurSectag_36_36 = (STATE_VARIABLE_CurSectag_0_2 + (MR_Unsigned) 1U);
      // direct tailcall eliminated
      ;
      next_value_of_STATE_VARIABLE_CurSectag_0_2 = STATE_VARIABLE_CurSectag_36_36;
      next_value_of_HeadVar__4_4 = Ctors_17;
      next_value_of_STATE_VARIABLE_RepnMap_0_5 = STATE_VARIABLE_RepnMap_35_35;
      STATE_VARIABLE_CurSectag_0_2 = next_value_of_STATE_VARIABLE_CurSectag_0_2;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_RepnMap_0_5 = next_value_of_STATE_VARIABLE_RepnMap_0_5;
      continue;
    }
    break;
  }
}

static MR_Box MR_CALL 
parse_tree__decide_type_repn__decide_type_repns_stage_2_du_gen_only_functor_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_LambdaHeadVar__2_57;

    conv1_LambdaHeadVar__2_57 = parse_tree__decide_type_repn__IntroducedFrom__func__decide_type_repns_stage_2_du_gen_only_functor__816__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_57));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__decide_type_repn__decide_type_repns_stage_2_du_gen_only_functor_10_p_0(
  MR_Word BaseParams_11,
  MR_Word SimpleDuMap_12,
  MR_Word TypeCtor_13,
  MR_Word TypeParams_14,
  MR_Word TVarSet_15,
  MR_Word MaybeCanonical_16,
  MR_Word SingleCtor_17,
  MR_Word RepnCJCsE_18,
  MR_Word STATE_VARIABLE_Int1RepnMap_0_43,
  MR_Word * STATE_VARIABLE_Int1RepnMap_44)
{
  {
    MR_bool succeeded;
    MR_Word MaybeExistConstraints_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SingleCtor_17, (MR_Integer) 1))));
    MR_Word SingleCtorSymName_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SingleCtor_17, (MR_Integer) 2))));
    MR_Word Args_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SingleCtor_17, (MR_Integer) 3))));
    MR_Integer Arity_24 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), SingleCtor_17, (MR_Integer) 4))));
    MR_Word Var_77;

    succeeded = (MaybeExistConstraints_21 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = (Arity_24 == (MR_Integer) 1);
      if (succeeded)
      {
        succeeded = (MaybeCanonical_16 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = (Args_23 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_77 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_23, (MR_Integer) 1))));
            succeeded = (Var_77 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word SimpleDuRepn_27;
      MR_Box conv0_SimpleDuRepn_27;

      mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_simple_du_repn_0), SimpleDuMap_12, ((MR_Box) (TypeCtor_13)), &conv0_SimpleDuRepn_27);
      SimpleDuRepn_27 = ((MR_Word) (conv0_SimpleDuRepn_27));
      parse_tree__decide_type_repn__add_simple_du_repn_item_4_p_0(TypeCtor_13, SimpleDuRepn_27, STATE_VARIABLE_Int1RepnMap_0_43, STATE_VARIABLE_Int1RepnMap_44);
    }
    else
    {
      MR_Word PlatformParams64NoSpf_28;
      MR_Word PlatformParams32NoSpf_29;
      MR_Word PlatformParams32Spf_30;
      MR_Word ArgsRepn64NoSpf_31;
      MR_Word ArgsRepn32NoSpf_32;
      MR_Word ArgsRepn32Spf_33;
      MR_String SingleCtorName_34;
      MR_Word CRepns_35;
      MR_Word ArgTypes_36;
      MR_Word OnlyFunctorRepn_38;
      MR_Word DuRepn_39;
      MR_Word TypeCtorSymName_40;
      MR_Word RepnInfo_42;
      MR_Word Var_58;
      MR_Word Var_59;

      {
        PlatformParams64NoSpf_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), PlatformParams64NoSpf_28, 0) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 2)) | (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 0)))));
        MR_hl_field(MR_mktag(0), PlatformParams64NoSpf_28, 1) = ((MR_Box) (BaseParams_11));
      }
      {
        PlatformParams32NoSpf_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), PlatformParams32NoSpf_29, 0) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 2)) | (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) ((MR_Integer) 0)))));
        MR_hl_field(MR_mktag(0), PlatformParams32NoSpf_29, 1) = ((MR_Box) (BaseParams_11));
      }
      {
        PlatformParams32Spf_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), PlatformParams32Spf_30, 0) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 2)) | (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 0)))));
        MR_hl_field(MR_mktag(0), PlatformParams32Spf_30, 1) = ((MR_Box) (BaseParams_11));
      }
      parse_tree__decide_type_repn__decide_complex_du_only_functor_5_p_0(PlatformParams64NoSpf_28, SimpleDuMap_12, MaybeExistConstraints_21, Args_23, &ArgsRepn64NoSpf_31);
      parse_tree__decide_type_repn__decide_complex_du_only_functor_5_p_0(PlatformParams32NoSpf_29, SimpleDuMap_12, MaybeExistConstraints_21, Args_23, &ArgsRepn32NoSpf_32);
      parse_tree__decide_type_repn__decide_complex_du_only_functor_5_p_0(PlatformParams32Spf_30, SimpleDuMap_12, MaybeExistConstraints_21, Args_23, &ArgsRepn32Spf_33);
      SingleCtorName_34 = mdbcomp__sym_name__unqualify_name_1_f_0(SingleCtorSymName_22);
      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_nonconstant_repn_0), ((MR_Box) (ArgsRepn32NoSpf_32)), ((MR_Box) (ArgsRepn32Spf_33)));
      if (succeeded)
      {
        succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_nonconstant_repn_0), ((MR_Box) (ArgsRepn64NoSpf_31)), ((MR_Box) (ArgsRepn32NoSpf_32)));
        if (succeeded)
          {
            CRepns_35 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), CRepns_35, 0) = ((MR_Box) (ArgsRepn64NoSpf_31));
          }
        else
          {
            CRepns_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), CRepns_35, 0) = ((MR_Box) (ArgsRepn64NoSpf_31));
            MR_hl_field(MR_mktag(1), CRepns_35, 1) = ((MR_Box) (ArgsRepn32NoSpf_32));
          }
      }
      else
        {
          CRepns_35 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), CRepns_35, 0) = ((MR_Box) (ArgsRepn64NoSpf_31));
          MR_hl_field(MR_mktag(2), CRepns_35, 1) = ((MR_Box) (ArgsRepn64NoSpf_31));
          MR_hl_field(MR_mktag(2), CRepns_35, 2) = ((MR_Box) (ArgsRepn32NoSpf_32));
          MR_hl_field(MR_mktag(2), CRepns_35, 3) = ((MR_Box) (ArgsRepn32NoSpf_32));
          MR_hl_field(MR_mktag(2), CRepns_35, 4) = ((MR_Box) (ArgsRepn32Spf_33));
          MR_hl_field(MR_mktag(2), CRepns_35, 5) = ((MR_Box) (ArgsRepn32Spf_33));
        }
      ArgTypes_36 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__decide_type_repn_scalar_common_2[10]), Args_23);
      {
        OnlyFunctorRepn_38 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), OnlyFunctorRepn_38, 0) = ((MR_Box) (SingleCtorName_34));
        MR_hl_field(MR_mktag(0), OnlyFunctorRepn_38, 1) = ((MR_Box) (ArgTypes_36));
        MR_hl_field(MR_mktag(0), OnlyFunctorRepn_38, 2) = ((MR_Box) (CRepns_35));
        MR_hl_field(MR_mktag(0), OnlyFunctorRepn_38, 3) = ((MR_Box) (RepnCJCsE_18));
      }
      {
        DuRepn_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), DuRepn_39, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), DuRepn_39, 1) = ((MR_Box) (OnlyFunctorRepn_38));
      }
      TypeCtorSymName_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_13, (MR_Integer) 0))));
      {
        Var_58 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_58, 0) = ((MR_Box) (DuRepn_39));
      }
      Var_59 = mercury__term__dummy_context_init_0_f_0();
      {
        RepnInfo_42 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), RepnInfo_42, 0) = ((MR_Box) (TypeCtorSymName_40));
        MR_hl_field(MR_mktag(0), RepnInfo_42, 1) = ((MR_Box) (TypeParams_14));
        MR_hl_field(MR_mktag(0), RepnInfo_42, 2) = ((MR_Box) (Var_58));
        MR_hl_field(MR_mktag(0), RepnInfo_42, 3) = ((MR_Box) (TVarSet_15));
        MR_hl_field(MR_mktag(0), RepnInfo_42, 4) = ((MR_Box) (Var_59));
        MR_hl_field(MR_mktag(0), RepnInfo_42, 5) = ((MR_Box) ((MR_Integer) -1));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__decide_type_repn_scalar_common_1[2]), ((MR_Box) (TypeCtor_13)), ((MR_Box) (RepnInfo_42)), STATE_VARIABLE_Int1RepnMap_0_43, STATE_VARIABLE_Int1RepnMap_44);
    }
  }
}

static MR_bool MR_CALL 
parse_tree__decide_type_repn__decide_complex_du_only_functor_5_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = mercury__uint__f_less_or_equal_2_p_0(((MR_Unsigned) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__decide_type_repn__decide_complex_du_only_functor_5_p_0(
  MR_Word PlatformParams_6,
  MR_Word SimpleDuMap_7,
  MR_Word MaybeExistConstraints_8,
  MR_Word Args_9,
  MR_Word * NonConstantRepn_10)
{
  {
    MR_bool succeeded;
    MR_Word ClassifiedArgs_11;
    MR_Word PackableArgs_12;
    MR_Word WordSize_14;
    MR_Unsigned NumPackableBits_13;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Unsigned Var_17;
    MR_Unsigned Var_18;

    parse_tree__decide_type_repn__classify_args_4_p_0(PlatformParams_6, SimpleDuMap_7, Args_9, &ClassifiedArgs_11);
    succeeded = (MaybeExistConstraints_8 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PlatformParams_6, (MR_Integer) 1))));
      Var_15 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
      succeeded = (Var_15 == (MR_Integer) 1);
      if (succeeded)
      {
        Var_17 = (MR_Unsigned) 0U;
        succeeded = parse_tree__decide_type_repn__are_all_args_packable_4_p_0(ClassifiedArgs_11, &PackableArgs_12, Var_17, &NumPackableBits_13);
        if (succeeded)
        {
          WordSize_14 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PlatformParams_6, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
          switch (WordSize_14) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              Var_18 = (MR_Unsigned) 32U;
              break;
            case (MR_Integer) 0:
              Var_18 = (MR_Unsigned) 64U;
              break;
          }
          succeeded = (NumPackableBits_13 <= Var_18);
        }
      }
    }
    if (succeeded)
    {
      MR_Unsigned NumWordBits_34;
      MR_Unsigned NumPrefixBits_37;
      MR_Unsigned NextShift_38;
      MR_Word ArgRepns_39;
      MR_Word OoMArgRepns_40;
      MR_Word Var_41;

      switch (WordSize_14) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            NumWordBits_34 = (MR_Unsigned) 32U;
            NumPrefixBits_37 = (MR_Unsigned) 2U;
          }
          break;
        case (MR_Integer) 0:
          {
            NumWordBits_34 = (MR_Unsigned) 64U;
            NumPrefixBits_37 = (MR_Unsigned) 3U;
          }
          break;
      }
      parse_tree__decide_type_repn__decide_local_packed_arg_word_loop_4_p_0(NumPrefixBits_37, &NextShift_38, PackableArgs_12, &ArgRepns_39);
      {
        Var_41 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_41, 0) = ((MR_Box) (&parse_tree__decide_type_repn_scalar_common_7[2]));
        MR_hl_field(MR_mktag(0), Var_41, 1) = ((MR_Box) (parse_tree__decide_type_repn__decide_complex_du_only_functor_5_p_0_1));
        MR_hl_field(MR_mktag(0), Var_41, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_41, 3) = ((MR_Box) (NextShift_38));
        MR_hl_field(MR_mktag(0), Var_41, 4) = ((MR_Box) (NumWordBits_34));
      }
      mercury__require__expect_3_p_0(Var_41, (MR_String) "predicate \140parse_tree.decide_type_repn.decide_complex_du_only_functor_local_args\'/3", (MR_String) "NextShift > NumWordBits");
      mercury__one_or_more__det_list_to_one_or_more_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_local_arg_repn_0), ArgRepns_39, &OoMArgRepns_40);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *NonConstantRepn_10 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (OoMArgRepns_40));
      }
    }
    else
    {
      MR_Word ArgRepns_55;
      MR_Word OoMArgRepns_56;

      parse_tree__decide_type_repn__decide_remote_args_5_p_0(PlatformParams_6, (MR_Unsigned) 0U, MaybeExistConstraints_8, ClassifiedArgs_11, &ArgRepns_55);
      mercury__one_or_more__det_list_to_one_or_more_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_remote_arg_repn_0), ArgRepns_55, &OoMArgRepns_56);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        *NonConstantRepn_10 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (((MR_Box) (MR_Word) (UINT8_C(0)))));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (OoMArgRepns_56));
      }
    }
  }
}

static MR_bool MR_CALL 
parse_tree__decide_type_repn__are_all_args_packable_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Unsigned STATE_VARIABLE_NumBits_0_3,
  MR_Unsigned * STATE_VARIABLE_NumBits_4)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_NumBits_4 = STATE_VARIABLE_NumBits_0_3;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word ClassifiedArg_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ClassifiedArgs_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word PackableArg_10;
      MR_Word PackableArgs_11;
      MR_Word Arg_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassifiedArg_8, (MR_Integer) 0))));
      MR_Word Class_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassifiedArg_8, (MR_Integer) 1))));
      MR_Word PackClass_16;
      MR_Unsigned STATE_VARIABLE_NumBits_19_19;

      if ((Class_14 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        PackClass_16 = (MR_Word) ((MR_Unsigned) 0U);
        STATE_VARIABLE_NumBits_19_19 = STATE_VARIABLE_NumBits_0_3;
        succeeded = MR_TRUE;
      }
      else
      if (((MR_tag((MR_Word) Class_14)) == (MR_Integer) 1))
      {
        MR_Word FillSize_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Class_14, (MR_Integer) 0))));
        MR_Unsigned Var_20;

        {
          PackClass_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), PackClass_16, 0) = ((MR_Box) (FillSize_15));
        }
        Var_20 = parse_tree__prog_item__fill_kind_size_num_bits_1_f_0(FillSize_15);
        STATE_VARIABLE_NumBits_19_19 = (STATE_VARIABLE_NumBits_0_3 + Var_20);
        succeeded = MR_TRUE;
      }
      else
        succeeded = MR_FALSE;
      if (succeeded)
      {
        {
          PackableArg_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), PackableArg_10, 0) = ((MR_Box) (Arg_13));
          MR_hl_field(MR_mktag(0), PackableArg_10, 1) = ((MR_Box) (PackClass_16));
        }
        succeeded = parse_tree__decide_type_repn__are_all_args_packable_4_p_0(ClassifiedArgs_9, &PackableArgs_11, STATE_VARIABLE_NumBits_19_19, STATE_VARIABLE_NumBits_4);
        if (succeeded)
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__2_2 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PackableArg_10));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (PackableArgs_11));
          }
          succeeded = MR_TRUE;
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__decide_type_repn__classify_args_4_p_0(
  MR_Word PlatformParams_1,
  MR_Word SimpleDuMap_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Arg_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Args_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ClassifiedArg_11;
    MR_Word ClassifiedArgs_12;
    MR_Word ArgType_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_9, (MR_Integer) 1))));
    MR_Word Class_16;

    parse_tree__decide_type_repn__classify_arg_type_4_p_0(PlatformParams_1, SimpleDuMap_2, ArgType_14, &Class_16);
    {
      ClassifiedArg_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ClassifiedArg_11, 0) = ((MR_Box) (Arg_9));
      MR_hl_field(MR_mktag(0), ClassifiedArg_11, 1) = ((MR_Box) (Class_16));
    }
    parse_tree__decide_type_repn__classify_args_4_p_0(PlatformParams_1, SimpleDuMap_2, Args_10, &ClassifiedArgs_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ClassifiedArg_11));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ClassifiedArgs_12));
    }
  }
}

static void MR_CALL 
parse_tree__decide_type_repn__classify_arg_type_4_p_0(
  MR_Word PlatformParams_5,
  MR_Word SimpleDuMap_6,
  MR_Word ArgType_7,
  MR_Word * Class_8)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) ArgType_7)) == (MR_Integer) 2);
    MR_Word ClassPrime_10;
    MR_Word ArgBuiltinType_9;

    if (succeeded)
    {
      ArgBuiltinType_9 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ArgType_7, (MR_Integer) 0))));
      switch (MR_tag((MR_Word) ArgBuiltinType_9)) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 0:
          switch (MR_unmkbody(ArgBuiltinType_9)) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 0:
              {
                MR_Word DWF_47 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PlatformParams_5, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);

                switch (DWF_47) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    ClassPrime_10 = (MR_Word) ((MR_Unsigned) 4U);
                    break;
                  case (MR_Integer) 1:
                    ClassPrime_10 = (MR_Word) (MR_mkword(MR_mktag(2), &parse_tree__decide_type_repn_scalar_common_10[1]));
                    break;
                }
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Var_48;
                MR_Word Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PlatformParams_5, (MR_Integer) 1))));

                Var_48 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_49, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);
                succeeded = (Var_48 == (MR_Integer) 1);
                if (succeeded)
                {
                  ClassPrime_10 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__decide_type_repn_scalar_common_10[0]));
                  succeeded = MR_TRUE;
                }
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ArgIntType_45 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), ArgBuiltinType_9, (MR_Integer) 0))) & (MR_Integer) 15);

            switch (ArgIntType_45) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 4:
                {
                  ClassPrime_10 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__decide_type_repn_scalar_common_10[2]));
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Word Var_58 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PlatformParams_5, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);

                  succeeded = (Var_58 == (MR_Integer) 0);
                  if (succeeded)
                    ClassPrime_10 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__decide_type_repn_scalar_common_10[3]));
                  else
                    ClassPrime_10 = (MR_Word) ((MR_Unsigned) 4U);
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 8:
                {
                  MR_Word DWI_46;
                  MR_Word Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PlatformParams_5, (MR_Integer) 1))));

                  DWI_46 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_54, (MR_Integer) 0))) >> 5)) & (MR_Integer) 1);
                  switch (DWI_46) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      ClassPrime_10 = (MR_Word) ((MR_Unsigned) 4U);
                      break;
                    case (MR_Integer) 1:
                      ClassPrime_10 = (MR_Word) (MR_mkword(MR_mktag(2), &parse_tree__decide_type_repn_scalar_common_10[4]));
                      break;
                  }
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 2:
                {
                  ClassPrime_10 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__decide_type_repn_scalar_common_10[5]));
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 5:
                {
                  ClassPrime_10 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__decide_type_repn_scalar_common_10[6]));
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 7:
                {
                  MR_Word Var_56 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PlatformParams_5, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);

                  succeeded = (Var_56 == (MR_Integer) 0);
                  if (succeeded)
                    ClassPrime_10 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__decide_type_repn_scalar_common_10[7]));
                  else
                    ClassPrime_10 = (MR_Word) ((MR_Unsigned) 4U);
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 9:
                {
                  MR_Word Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PlatformParams_5, (MR_Integer) 1))));
                  MR_Word DWI_64 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_52, (MR_Integer) 0))) >> 5)) & (MR_Integer) 1);

                  switch (DWI_64) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      ClassPrime_10 = (MR_Word) ((MR_Unsigned) 4U);
                      break;
                    case (MR_Integer) 1:
                      ClassPrime_10 = (MR_Word) (MR_mkword(MR_mktag(2), &parse_tree__decide_type_repn_scalar_common_10[8]));
                      break;
                  }
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 3:
                {
                  ClassPrime_10 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__decide_type_repn_scalar_common_10[9]));
                  succeeded = MR_TRUE;
                }
                break;
            }
          }
          break;
      }
    }
    if (succeeded)
      *Class_8 = ClassPrime_10;
    else
    {
      MR_Word ArgTypeCtor_11;

      succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(ArgType_7, &ArgTypeCtor_11);
      if (succeeded)
      {
        MR_Word SimpleDuRepn_12;
        MR_Box conv0_SimpleDuRepn_12;

        succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_simple_du_repn_0), SimpleDuMap_6, ((MR_Box) (ArgTypeCtor_11)), &conv0_SimpleDuRepn_12);
        if (succeeded)
        {
          SimpleDuRepn_12 = ((MR_Word) (conv0_SimpleDuRepn_12));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word EnumRepn_15;

          succeeded = ((MR_tag((MR_Word) SimpleDuRepn_12)) == (MR_Integer) 1);
          if (succeeded)
          {
            EnumRepn_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SimpleDuRepn_12, (MR_Integer) 2))));
            {
              MR_Word TailTailNames_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EnumRepn_15, (MR_Integer) 2))));
              MR_Integer NumEnums_20;
              MR_Integer NumBits_21;
              MR_Unsigned NumBitsU_22;
              MR_Integer Var_28;
              MR_Word Var_29;

              Var_28 = mercury__list__length_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), TailTailNames_18);
              NumEnums_20 = (MR_Integer) ((MR_Unsigned) 2 + (MR_Unsigned) Var_28);
              mercury__int__log2_2_p_0(NumEnums_20, &NumBits_21);
              NumBitsU_22 = mercury__uint__det_from_int_1_f_0(NumBits_21);
              {
                Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (NumBitsU_22));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *Class_8 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_29));
              }
            }
          }
          else
          {
            succeeded = ((MR_tag((MR_Word) SimpleDuRepn_12)) == (MR_Integer) 0);
            if (succeeded)
            {
              MR_Word PackDummies_26;
              MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PlatformParams_5, (MR_Integer) 1))));

              PackDummies_26 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
              switch (PackDummies_26) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *Class_8 = (MR_Word) ((MR_Unsigned) 4U);
                  break;
                case (MR_Integer) 1:
                  *Class_8 = (MR_Word) ((MR_Unsigned) 0U);
                  break;
              }
            }
            else
              *Class_8 = (MR_Word) ((MR_Unsigned) 4U);
          }
        }
        else
          *Class_8 = (MR_Word) ((MR_Unsigned) 4U);
      }
      else
        *Class_8 = (MR_Word) ((MR_Unsigned) 4U);
    }
  }
}

static void MR_CALL 
parse_tree__decide_type_repn__decide_local_packed_arg_word_loop_4_p_0(
  MR_Unsigned NumPrefixBits_1,
  MR_Unsigned * NextShift_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *NextShift_2 = NumPrefixBits_1;
  }
  else
  {
    MR_Word PackableArg_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word PackableArgs_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgRepn_11;
    MR_Word ArgRepns_12;
    MR_Word PackClass_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PackableArg_9, (MR_Integer) 1))));

    if ((PackClass_14 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      parse_tree__decide_type_repn__decide_local_packed_arg_word_loop_4_p_0(NumPrefixBits_1, NextShift_2, PackableArgs_10, &ArgRepns_12);
      ArgRepn_11 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word FillKindSize_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PackClass_14, (MR_Integer) 0))));
      MR_Unsigned Var_17;
      MR_Unsigned CurShift_18;

      parse_tree__decide_type_repn__decide_local_packed_arg_word_loop_4_p_0(NumPrefixBits_1, &CurShift_18, PackableArgs_10, &ArgRepns_12);
      {
        ArgRepn_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ArgRepn_11, 0) = ((MR_Box) (CurShift_18));
        MR_hl_field(MR_mktag(1), ArgRepn_11, 1) = ((MR_Box) (FillKindSize_16));
      }
      Var_17 = parse_tree__prog_item__fill_kind_size_num_bits_1_f_0(FillKindSize_16);
      *NextShift_2 = (CurShift_18 + Var_17);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ArgRepn_11));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ArgRepns_12));
    }
  }
}

static void MR_CALL 
parse_tree__decide_type_repn__decide_remote_args_5_p_0(
  MR_Word PlatformParams_6,
  MR_Unsigned NumRemoteSectagBits_7,
  MR_Word MaybeExistConstraints_8,
  MR_Word MaybePackableArgs_9,
  MR_Word * ArgRepns_10)
{
  {
    MR_bool succeeded;
    MR_Integer NumExtraArgWords_11;
    MR_Integer NumTagwords_19;
    MR_Word TagwordArgRepns_20;
    MR_Word NonTagwordMaybePackableArgs_21;
    MR_Integer FirstCellWordNum_34;
    MR_Word NonTagwordArgRepns_35;

    if ((MaybeExistConstraints_8 == (MR_Word) ((MR_Unsigned) 0U)))
      NumExtraArgWords_11 = (MR_Integer) 0;
    else
    {
      MR_Word ExistConstraints_12 = (MR_Word) (MR_body((MR_Word) (MaybeExistConstraints_8), (MR_Integer) 1));
      MR_Word Constraints_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExistConstraints_12, (MR_Integer) 1))));
      MR_Word UnconstrainedExistQTVars_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExistConstraints_12, (MR_Integer) 2))));
      MR_Integer NumTypeInfos_17;
      MR_Integer NumTypeClassInfos_18;

      mercury__list__length_2_p_0((MR_Word) (&parse_tree__decide_type_repn_scalar_common_1[4]), UnconstrainedExistQTVars_15, &NumTypeInfos_17);
      mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), Constraints_14, &NumTypeClassInfos_18);
      NumExtraArgWords_11 = (MR_Integer) ((MR_Unsigned) NumTypeInfos_17 + (MR_Unsigned) NumTypeClassInfos_18);
    }
    succeeded = (NumRemoteSectagBits_7 == (MR_Unsigned) 0U);
    if (succeeded)
    {
      NumTagwords_19 = (MR_Integer) 0;
      TagwordArgRepns_20 = (MR_Word) ((MR_Unsigned) 0U);
      NonTagwordMaybePackableArgs_21 = MaybePackableArgs_9;
    }
    else
    {
      MR_Word PackableArgs_25;
      MR_Word LeftOverArgs_26;
      MR_Unsigned NumWordBits_22;
      MR_Unsigned Limit_23;
      MR_Word Var_36;
      MR_Word Var_37;
      MR_Unsigned Var_39;
      MR_Word Var_43;
      MR_Unsigned _NumBits_24;

      succeeded = (NumExtraArgWords_11 == (MR_Integer) 0);
      if (succeeded)
      {
        Var_43 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PlatformParams_6, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
        Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PlatformParams_6, (MR_Integer) 1))));
        Var_36 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_37, (MR_Integer) 0))) & (MR_Integer) 1);
        succeeded = (Var_36 == (MR_Integer) 1);
        if (succeeded)
        {
          switch (Var_43) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              NumWordBits_22 = (MR_Unsigned) 32U;
              break;
            case (MR_Integer) 0:
              NumWordBits_22 = (MR_Unsigned) 64U;
              break;
          }
          Limit_23 = (NumWordBits_22 - NumRemoteSectagBits_7);
          Var_39 = (MR_Unsigned) 0U;
          parse_tree__decide_type_repn__find_initial_packable_args_within_limit_6_p_0(Limit_23, Var_39, &_NumBits_24, MaybePackableArgs_9, &PackableArgs_25, &LeftOverArgs_26);
          succeeded = (PackableArgs_25 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
          }
        }
      }
      if (succeeded)
      {
        MR_Unsigned _CurShift_32;

        parse_tree__decide_type_repn__decide_remote_packed_arg_word_loop_7_p_0((MR_Integer) 1, (MR_Word) (((MR_Box) ((MR_Integer) -1))), (MR_Word) (((MR_Box) ((MR_Integer) 0))), NumRemoteSectagBits_7, &_CurShift_32, PackableArgs_25, &TagwordArgRepns_20);
        NonTagwordMaybePackableArgs_21 = LeftOverArgs_26;
      }
      else
      {
        TagwordArgRepns_20 = (MR_Word) ((MR_Unsigned) 0U);
        NonTagwordMaybePackableArgs_21 = MaybePackableArgs_9;
      }
      NumTagwords_19 = (MR_Integer) 1;
    }
    FirstCellWordNum_34 = (MR_Integer) ((MR_Unsigned) NumTagwords_19 + (MR_Unsigned) NumExtraArgWords_11);
    parse_tree__decide_type_repn__decide_remote_arg_words_loop_5_p_0(PlatformParams_6, (MR_Integer) 0, FirstCellWordNum_34, NonTagwordMaybePackableArgs_21, &NonTagwordArgRepns_35);
    *ArgRepns_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_remote_arg_repn_0), TagwordArgRepns_20, NonTagwordArgRepns_35);
  }
}

static void MR_CALL 
parse_tree__decide_type_repn__find_initial_packable_args_within_limit_6_p_0(
  MR_Unsigned Limit_1,
  MR_Unsigned STATE_VARIABLE_NumBits_0_2,
  MR_Unsigned * STATE_VARIABLE_NumBits_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6)
{
  {
    MR_bool succeeded;

    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_NumBits_3 = STATE_VARIABLE_NumBits_0_2;
    }
    else
    {
      MR_Word ClassifiedArg_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word ClassifiedArgs_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_Word Arg_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassifiedArg_13, (MR_Integer) 0))));
      MR_Word ArgClass_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassifiedArg_13, (MR_Integer) 1))));

      switch (MR_tag((MR_Word) ArgClass_18)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(ArgClass_18)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word PackableArg_21;
                MR_Unsigned Var_28;

                {
                  PackableArg_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), PackableArg_21, 0) = ((MR_Box) (Arg_17));
                  MR_hl_field(MR_mktag(0), PackableArg_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                Var_28 = (STATE_VARIABLE_NumBits_0_2 + (MR_Unsigned) 0U);
                succeeded = (Var_28 <= Limit_1);
                if (succeeded)
                {
                  MR_Word PackableArgsTail_22;
                  MR_Unsigned STATE_VARIABLE_NumBits_29_29 = (STATE_VARIABLE_NumBits_0_2 + (MR_Unsigned) 0U);

                  parse_tree__decide_type_repn__find_initial_packable_args_within_limit_6_p_0(Limit_1, STATE_VARIABLE_NumBits_29_29, STATE_VARIABLE_NumBits_3, ClassifiedArgs_14, &PackableArgsTail_22, HeadVar__6_6);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *HeadVar__5_5 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PackableArg_21));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (PackableArgsTail_22));
                  }
                }
                else
                {
                  *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
                  *HeadVar__6_6 = HeadVar__4_4;
                  *STATE_VARIABLE_NumBits_3 = STATE_VARIABLE_NumBits_0_2;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
                *HeadVar__6_6 = HeadVar__4_4;
                *STATE_VARIABLE_NumBits_3 = STATE_VARIABLE_NumBits_0_2;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word FillKindSize_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgClass_18, (MR_Integer) 0))));
            MR_Word Var_27;
            MR_Unsigned ArgNumBits_37;
            MR_Word PackableArg_38;
            MR_Unsigned Var_31;

            ArgNumBits_37 = parse_tree__prog_item__fill_kind_size_num_bits_1_f_0(FillKindSize_19);
            {
              Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (FillKindSize_19));
            }
            {
              PackableArg_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), PackableArg_38, 0) = ((MR_Box) (Arg_17));
              MR_hl_field(MR_mktag(0), PackableArg_38, 1) = ((MR_Box) (Var_27));
            }
            Var_31 = (STATE_VARIABLE_NumBits_0_2 + ArgNumBits_37);
            succeeded = (Var_31 <= Limit_1);
            if (succeeded)
            {
              MR_Word PackableArgsTail_32;
              MR_Unsigned STATE_VARIABLE_NumBits_29_33 = (STATE_VARIABLE_NumBits_0_2 + ArgNumBits_37);

              parse_tree__decide_type_repn__find_initial_packable_args_within_limit_6_p_0(Limit_1, STATE_VARIABLE_NumBits_29_33, STATE_VARIABLE_NumBits_3, ClassifiedArgs_14, &PackableArgsTail_32, HeadVar__6_6);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__5_5 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PackableArg_38));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (PackableArgsTail_32));
              }
            }
            else
            {
              *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
              *HeadVar__6_6 = HeadVar__4_4;
              *STATE_VARIABLE_NumBits_3 = STATE_VARIABLE_NumBits_0_2;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
            *HeadVar__6_6 = HeadVar__4_4;
            *STATE_VARIABLE_NumBits_3 = STATE_VARIABLE_NumBits_0_2;
          }
          break;
      }
    }
  }
}

static void MR_CALL 
parse_tree__decide_type_repn__decide_remote_arg_words_loop_5_p_0(
  MR_Word PlatformParams_1,
  MR_Integer CurAOWordNum_2,
  MR_Integer CurCellWordNum_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  {
    MR_bool succeeded;

    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word HeadClassifiedArg_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word TailClassifiedArgs_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_Word ArgOnlyOffset_16 = (MR_Word) (CurAOWordNum_2);
      MR_Word CellOffset_17 = (MR_Word) (CurCellWordNum_3);
      MR_Word HeadClass_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadClassifiedArg_14, (MR_Integer) 1))));

      switch (MR_tag((MR_Word) HeadClass_19)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(HeadClass_19)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word TailArgRepns_53;

                parse_tree__decide_type_repn__decide_remote_arg_words_loop_5_p_0(PlatformParams_1, CurAOWordNum_2, CurCellWordNum_3, TailClassifiedArgs_15, &TailArgRepns_53);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__5_5 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailArgRepns_53));
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word HeadArgRepn_54;
                MR_Integer NextAOWordNum_55;
                MR_Integer NextCellWordNum_56;
                MR_Word TailArgRepns_57;

                {
                  HeadArgRepn_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), HeadArgRepn_54, 0) = ((MR_Box) (ArgOnlyOffset_16));
                  MR_hl_field(MR_mktag(1), HeadArgRepn_54, 1) = ((MR_Box) (CellOffset_17));
                }
                NextAOWordNum_55 = (MR_Integer) ((MR_Unsigned) CurAOWordNum_2 + (MR_Unsigned) 1);
                NextCellWordNum_56 = (MR_Integer) ((MR_Unsigned) CurCellWordNum_3 + (MR_Unsigned) 1);
                parse_tree__decide_type_repn__decide_remote_arg_words_loop_5_p_0(PlatformParams_1, NextAOWordNum_55, NextCellWordNum_56, TailClassifiedArgs_15, &TailArgRepns_57);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__5_5 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadArgRepn_54));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailArgRepns_57));
                }
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Unsigned NumWordBits_21;
            MR_Unsigned NumUsedBits_23;
            MR_Word PackableArgs_24;
            MR_Word LeftOverClassifiedArgs_25;
            MR_Word WordArgRepns_27;
            MR_Integer NextAOWordNum_28;
            MR_Integer NextCellWordNum_29;
            MR_Word TailArgRepns_30;
            MR_Word Var_37 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PlatformParams_1, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
            MR_Unsigned _NextShift_26;

            switch (Var_37) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                NumWordBits_21 = (MR_Unsigned) 32U;
                break;
              case (MR_Integer) 0:
                NumWordBits_21 = (MR_Unsigned) 64U;
                break;
            }
            parse_tree__decide_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_119_111_114_100_95_112_97_99_107_97_98_108_101_95_97_114_103_115_95_95_91_49_93_95_48_7_p_0(NumWordBits_21, (MR_Unsigned) 0U, &NumUsedBits_23, HeadVar__4_4, &PackableArgs_24, &LeftOverClassifiedArgs_25);
            parse_tree__decide_type_repn__decide_remote_packed_arg_word_loop_7_p_0((MR_Integer) 1, ArgOnlyOffset_16, CellOffset_17, (MR_Unsigned) 0U, &_NextShift_26, PackableArgs_24, &WordArgRepns_27);
            succeeded = (NumUsedBits_23 > (MR_Unsigned) 0U);
            if (succeeded)
            {
              NextAOWordNum_28 = (MR_Integer) ((MR_Unsigned) CurAOWordNum_2 + (MR_Unsigned) 1);
              NextCellWordNum_29 = (MR_Integer) ((MR_Unsigned) CurCellWordNum_3 + (MR_Unsigned) 1);
            }
            else
            {
              NextAOWordNum_28 = CurAOWordNum_2;
              NextCellWordNum_29 = CurCellWordNum_3;
            }
            parse_tree__decide_type_repn__decide_remote_arg_words_loop_5_p_0(PlatformParams_1, NextAOWordNum_28, NextCellWordNum_29, LeftOverClassifiedArgs_25, &TailArgRepns_30);
            *HeadVar__5_5 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_remote_arg_repn_0), WordArgRepns_27, TailArgRepns_30);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word HeadArgRepn_31;
            MR_Word DWKind_32 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadClass_19, (MR_Integer) 0))) & (MR_Integer) 3);
            MR_Integer NextAOWordNum_43;
            MR_Integer NextCellWordNum_44;
            MR_Word TailArgRepns_45;

            {
              HeadArgRepn_31 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), HeadArgRepn_31, 0) = ((MR_Box) (ArgOnlyOffset_16));
              MR_hl_field(MR_mktag(2), HeadArgRepn_31, 1) = ((MR_Box) (CellOffset_17));
              MR_hl_field(MR_mktag(2), HeadArgRepn_31, 2) = (MR_Box) ((MR_Unsigned) (DWKind_32));
            }
            NextAOWordNum_43 = (MR_Integer) ((MR_Unsigned) CurAOWordNum_2 + (MR_Unsigned) 2);
            NextCellWordNum_44 = (MR_Integer) ((MR_Unsigned) CurCellWordNum_3 + (MR_Unsigned) 2);
            parse_tree__decide_type_repn__decide_remote_arg_words_loop_5_p_0(PlatformParams_1, NextAOWordNum_43, NextCellWordNum_44, TailClassifiedArgs_15, &TailArgRepns_45);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__5_5 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadArgRepn_31));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailArgRepns_45));
            }
          }
          break;
      }
    }
  }
}

static void MR_CALL 
parse_tree__decide_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_119_111_114_100_95_112_97_99_107_97_98_108_101_95_97_114_103_115_95_95_91_49_93_95_48_7_p_0(
  MR_Unsigned NumAvailBits_2,
  MR_Unsigned HeadVar__3_3,
  MR_Unsigned * NumUsedBits_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7)
{
  {
    MR_bool succeeded;

    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *NumUsedBits_4 = HeadVar__3_3;
      *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word ClassifiedArg_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0))));
      MR_Word ClassifiedArgs_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1))));
      MR_Word Arg_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassifiedArg_15, (MR_Integer) 0))));
      MR_Word Class_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassifiedArg_15, (MR_Integer) 1))));
      MR_Unsigned ArgNumBits_22;
      MR_Word HeadPackableArg_23;
      MR_Unsigned NumUsedBits1_24;

      if ((Class_20 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        ArgNumBits_22 = (MR_Unsigned) 0U;
        {
          HeadPackableArg_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), HeadPackableArg_23, 0) = ((MR_Box) (Arg_19));
          MR_hl_field(MR_mktag(0), HeadPackableArg_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        succeeded = MR_TRUE;
      }
      else
      if (((MR_tag((MR_Word) Class_20)) == (MR_Integer) 1))
      {
        MR_Word FillKindSize_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Class_20, (MR_Integer) 0))));
        MR_Word Var_29;

        ArgNumBits_22 = parse_tree__prog_item__fill_kind_size_num_bits_1_f_0(FillKindSize_21);
        {
          Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (FillKindSize_21));
        }
        {
          HeadPackableArg_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), HeadPackableArg_23, 0) = ((MR_Box) (Arg_19));
          MR_hl_field(MR_mktag(0), HeadPackableArg_23, 1) = ((MR_Box) (Var_29));
        }
        succeeded = MR_TRUE;
      }
      else
        succeeded = MR_FALSE;
      if (succeeded)
      {
        NumUsedBits1_24 = (HeadVar__3_3 + ArgNumBits_22);
        succeeded = (NumAvailBits_2 >= NumUsedBits1_24);
      }
      if (succeeded)
      {
        MR_Unsigned NumUsedBits2_25;
        MR_Word TailPackableArgs_26;
        MR_Word TailLeftOverArgs_27;

        parse_tree__decide_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_119_111_114_100_95_112_97_99_107_97_98_108_101_95_97_114_103_115_95_95_91_49_93_95_48_7_p_0(NumAvailBits_2, NumUsedBits1_24, &NumUsedBits2_25, ClassifiedArgs_16, &TailPackableArgs_26, &TailLeftOverArgs_27);
        succeeded = (HeadVar__3_3 > (MR_Unsigned) 0U);
        if (succeeded)
        {
          succeeded = (TailPackableArgs_26 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
            succeeded = (ArgNumBits_22 == (MR_Unsigned) 0U);
        }
        if (succeeded)
        {
          *NumUsedBits_4 = HeadVar__3_3;
          *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
          *HeadVar__7_7 = HeadVar__5_5;
        }
        else
        {
          *NumUsedBits_4 = NumUsedBits2_25;
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__6_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadPackableArg_23));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailPackableArgs_26));
          }
          *HeadVar__7_7 = TailLeftOverArgs_27;
        }
      }
      else
      {
        *NumUsedBits_4 = HeadVar__3_3;
        *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
        *HeadVar__7_7 = HeadVar__5_5;
      }
    }
  }
}

static void MR_CALL 
parse_tree__decide_type_repn__decide_remote_packed_arg_word_loop_7_p_0(
  MR_Word TreatAsFirst_1,
  MR_Word ArgOnlyOffset_2,
  MR_Word CellOffset_3,
  MR_Unsigned NumPrefixBits_4,
  MR_Unsigned * NextShift_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7)
{
  if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
    *NextShift_5 = NumPrefixBits_4;
  }
  else
  {
    MR_Word PackableArg_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 0))));
    MR_Word PackableArgs_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 1))));
    MR_Word ArgRepn_20;
    MR_Word ArgRepns_21;
    MR_Word PackClass_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PackableArg_18, (MR_Integer) 1))));

    if ((PackClass_23 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      parse_tree__decide_type_repn__decide_remote_packed_arg_word_loop_7_p_0(TreatAsFirst_1, ArgOnlyOffset_2, CellOffset_3, NumPrefixBits_4, NextShift_5, PackableArgs_19, &ArgRepns_21);
      switch (TreatAsFirst_1) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            ArgRepn_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ArgRepn_20, 0) = ((MR_Box) ((MR_Unsigned) 2U));
            MR_hl_field(MR_mktag(3), ArgRepn_20, 1) = ((MR_Box) (ArgOnlyOffset_2));
            MR_hl_field(MR_mktag(3), ArgRepn_20, 2) = ((MR_Box) (CellOffset_3));
          }
          break;
        case (MR_Integer) 1:
          ArgRepn_20 = (MR_Word) ((MR_Unsigned) 0U);
          break;
      }
    }
    else
    {
      MR_Word FillKindSize_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PackClass_23, (MR_Integer) 0))));
      MR_Unsigned Var_27;
      MR_Unsigned CurShift_28;

      parse_tree__decide_type_repn__decide_remote_packed_arg_word_loop_7_p_0((MR_Integer) 0, ArgOnlyOffset_2, CellOffset_3, NumPrefixBits_4, &CurShift_28, PackableArgs_19, &ArgRepns_21);
      switch (TreatAsFirst_1) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            ArgRepn_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ArgRepn_20, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), ArgRepn_20, 1) = ((MR_Box) (ArgOnlyOffset_2));
            MR_hl_field(MR_mktag(3), ArgRepn_20, 2) = ((MR_Box) (CellOffset_3));
            MR_hl_field(MR_mktag(3), ArgRepn_20, 3) = ((MR_Box) (CurShift_28));
            MR_hl_field(MR_mktag(3), ArgRepn_20, 4) = ((MR_Box) (FillKindSize_25));
          }
          break;
        case (MR_Integer) 1:
          {
            ArgRepn_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ArgRepn_20, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), ArgRepn_20, 1) = ((MR_Box) (ArgOnlyOffset_2));
            MR_hl_field(MR_mktag(3), ArgRepn_20, 2) = ((MR_Box) (CellOffset_3));
            MR_hl_field(MR_mktag(3), ArgRepn_20, 3) = ((MR_Box) (CurShift_28));
            MR_hl_field(MR_mktag(3), ArgRepn_20, 4) = ((MR_Box) (FillKindSize_25));
          }
          break;
      }
      Var_27 = parse_tree__prog_item__fill_kind_size_num_bits_1_f_0(FillKindSize_25);
      *NextShift_5 = (CurShift_28 + Var_27);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__7_7 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ArgRepn_20));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ArgRepns_21));
    }
  }
}

static MR_bool MR_CALL 
parse_tree__decide_type_repn__record_type_repn_in_parse_tree_int3_9_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__decide_type_repn__IntroducedFrom__pred__record_type_repn_in_parse_tree_int3__670__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__decide_type_repn__record_type_repn_in_parse_tree_int3_9_p_0(
  MR_Word ModuleName_10,
  MR_Word TypeCtor0_11,
  MR_Word ItemTypeRepnInfo_12,
  MR_Word STATE_VARIABLE_EqvRepnMap_0_39,
  MR_Word * STATE_VARIABLE_EqvRepnMap_40,
  MR_Word STATE_VARIABLE_SimpleDuMap_0_41,
  MR_Word * STATE_VARIABLE_SimpleDuMap_42,
  MR_Word STATE_VARIABLE_WordAlignedTypeCtorsC_0_43,
  MR_Word * STATE_VARIABLE_WordAlignedTypeCtorsC_44)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorSymName0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeRepnInfo_12, (MR_Integer) 0))));
    MR_Word TypeParams_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeRepnInfo_12, (MR_Integer) 1))));
    MR_Word RepnInfo_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeRepnInfo_12, (MR_Integer) 2))));
    MR_Word TVarSet_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeRepnInfo_12, (MR_Integer) 3))));
    MR_Word SymName0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor0_11, (MR_Integer) 0))));
    MR_Integer Arity_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor0_11, (MR_Integer) 1))));
    MR_String Name_24;
    MR_Word TypeCtor_25;
    MR_Word Var_45;

    Name_24 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName0_22);
    {
      Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (ModuleName_10));
      MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (Name_24));
    }
    {
      TypeCtor_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeCtor_25, 0) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(0), TypeCtor_25, 1) = ((MR_Box) (Arity_23));
    }
    switch (MR_tag((MR_Word) RepnInfo_18)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mercury__set_tree234__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (TypeCtor_25)), STATE_VARIABLE_WordAlignedTypeCtorsC_0_43, STATE_VARIABLE_WordAlignedTypeCtorsC_44);
          *STATE_VARIABLE_EqvRepnMap_40 = STATE_VARIABLE_EqvRepnMap_0_39;
          *STATE_VARIABLE_SimpleDuMap_42 = STATE_VARIABLE_SimpleDuMap_0_41;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word EqvType_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RepnInfo_18, (MR_Integer) 0))));
          MR_String TypeCtorName_34;
          MR_Word TypeCtorSymName_35;
          MR_Word RepnTypeCtor_36;
          MR_Word EqvRepnItem_37;
          MR_Integer Var_48;
          MR_Word Var_49;
          MR_Word Var_52;

          TypeCtorName_34 = mdbcomp__sym_name__unqualify_name_1_f_0(TypeCtorSymName0_16);
          {
            TypeCtorSymName_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), TypeCtorSymName_35, 0) = ((MR_Box) (ModuleName_10));
            MR_hl_field(MR_mktag(1), TypeCtorSymName_35, 1) = ((MR_Box) (TypeCtorName_34));
          }
          Var_48 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__decide_type_repn_scalar_common_1[4]), TypeParams_17);
          {
            RepnTypeCtor_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), RepnTypeCtor_36, 0) = ((MR_Box) (TypeCtorSymName_35));
            MR_hl_field(MR_mktag(0), RepnTypeCtor_36, 1) = ((MR_Box) (Var_48));
          }
          {
            Var_49 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_49, 0) = ((MR_Box) (&parse_tree__decide_type_repn_scalar_common_7[1]));
            MR_hl_field(MR_mktag(0), Var_49, 1) = ((MR_Box) (parse_tree__decide_type_repn__record_type_repn_in_parse_tree_int3_9_p_0_1));
            MR_hl_field(MR_mktag(0), Var_49, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_49, 3) = ((MR_Box) (TypeCtor_25));
            MR_hl_field(MR_mktag(0), Var_49, 4) = ((MR_Box) (RepnTypeCtor_36));
          }
          mercury__require__expect_3_p_0(Var_49, (MR_String) "predicate \140parse_tree.decide_type_repn.record_type_repn_in_parse_tree_int3\'/9", (MR_String) "TypeCtor != RepnTypeCtor");
          Var_52 = mercury__term__dummy_context_init_0_f_0();
          {
            EqvRepnItem_37 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), EqvRepnItem_37, 0) = ((MR_Box) (TypeCtorSymName_35));
            MR_hl_field(MR_mktag(0), EqvRepnItem_37, 1) = ((MR_Box) (TypeParams_17));
            MR_hl_field(MR_mktag(0), EqvRepnItem_37, 2) = ((MR_Box) (EqvType_33));
            MR_hl_field(MR_mktag(0), EqvRepnItem_37, 3) = ((MR_Box) (TVarSet_19));
            MR_hl_field(MR_mktag(0), EqvRepnItem_37, 4) = ((MR_Box) (Var_52));
            MR_hl_field(MR_mktag(0), EqvRepnItem_37, 5) = ((MR_Box) ((MR_Integer) -1));
          }
          mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__decide_type_repn_scalar_common_1[0]), ((MR_Box) (TypeCtor_25)), ((MR_Box) (EqvRepnItem_37)), STATE_VARIABLE_EqvRepnMap_0_39, STATE_VARIABLE_EqvRepnMap_40);
          *STATE_VARIABLE_SimpleDuMap_42 = STATE_VARIABLE_SimpleDuMap_0_41;
          *STATE_VARIABLE_WordAlignedTypeCtorsC_44 = STATE_VARIABLE_WordAlignedTypeCtorsC_0_43;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word DuRepn_26 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RepnInfo_18, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) DuRepn_26)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word DirectDummyRepn_27 = (MR_Word) ((MR_Word) (DuRepn_26));
                MR_Word SimpleDuRepn_28;

                {
                  SimpleDuRepn_28 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), SimpleDuRepn_28, 0) = ((MR_Box) (TypeParams_17));
                  MR_hl_field(MR_mktag(0), SimpleDuRepn_28, 1) = ((MR_Box) (TVarSet_19));
                  MR_hl_field(MR_mktag(0), SimpleDuRepn_28, 2) = ((MR_Box) (DirectDummyRepn_27));
                }
                mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_simple_du_repn_0), ((MR_Box) (TypeCtor_25)), ((MR_Box) (SimpleDuRepn_28)), STATE_VARIABLE_SimpleDuMap_0_41, STATE_VARIABLE_SimpleDuMap_42);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word EnumRepn_30 = (MR_Word) (MR_body((MR_Word) (DuRepn_26), (MR_Integer) 1));
                MR_Word SimpleDuRepn_62;

                {
                  SimpleDuRepn_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), SimpleDuRepn_62, 0) = ((MR_Box) (TypeParams_17));
                  MR_hl_field(MR_mktag(1), SimpleDuRepn_62, 1) = ((MR_Box) (TVarSet_19));
                  MR_hl_field(MR_mktag(1), SimpleDuRepn_62, 2) = ((MR_Box) (EnumRepn_30));
                }
                mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_simple_du_repn_0), ((MR_Box) (TypeCtor_25)), ((MR_Box) (SimpleDuRepn_62)), STATE_VARIABLE_SimpleDuMap_0_41, STATE_VARIABLE_SimpleDuMap_42);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word NotagRepn_29 = (MR_Word) (MR_body((MR_Word) (DuRepn_26), (MR_Integer) 2));
                MR_Word SimpleDuRepn_61;

                {
                  SimpleDuRepn_61 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), SimpleDuRepn_61, 0) = ((MR_Box) (TypeParams_17));
                  MR_hl_field(MR_mktag(2), SimpleDuRepn_61, 1) = ((MR_Box) (TVarSet_19));
                  MR_hl_field(MR_mktag(2), SimpleDuRepn_61, 2) = ((MR_Box) (NotagRepn_29));
                }
                mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_simple_du_repn_0), ((MR_Box) (TypeCtor_25)), ((MR_Box) (SimpleDuRepn_61)), STATE_VARIABLE_SimpleDuMap_0_41, STATE_VARIABLE_SimpleDuMap_42);
              }
              break;
            case (MR_Integer) 3:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.decide_type_repn.record_type_repn_in_parse_tree_int3\'/9", (MR_String) "dur_gen");
                return;
              }
              break;
          }
          *STATE_VARIABLE_EqvRepnMap_40 = STATE_VARIABLE_EqvRepnMap_0_39;
          *STATE_VARIABLE_WordAlignedTypeCtorsC_44 = STATE_VARIABLE_WordAlignedTypeCtorsC_0_43;
        }
        break;
      case (MR_Integer) 3:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.decide_type_repn.record_type_repn_in_parse_tree_int3\'/9", (MR_String) "unexpected tc_repn_foreign");
          return;
        }
        break;
    }
  }
}

static void MR_CALL 
parse_tree__decide_type_repn__record_type_repns_in_indirect_int_spec_7_p_0_1(
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_EqvRepnMap_40;
    MR_Word conv1_STATE_VARIABLE_SimpleDuMap_42;
    MR_Word conv0_STATE_VARIABLE_WordAlignedTypeCtorsC_44;

    parse_tree__decide_type_repn__record_type_repn_in_parse_tree_int3_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_EqvRepnMap_40, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_SimpleDuMap_42, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_WordAlignedTypeCtorsC_44);
    *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_EqvRepnMap_40));
    *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_SimpleDuMap_42));
    *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_WordAlignedTypeCtorsC_44));
  }
}

static void MR_CALL 
parse_tree__decide_type_repn__record_type_repns_in_indirect_int_spec_7_p_0(
  MR_Word IndirectIntSpec_8,
  MR_Word STATE_VARIABLE_SimpleDuMap_0_16,
  MR_Word * STATE_VARIABLE_SimpleDuMap_17,
  MR_Word STATE_VARIABLE_EqvRepnMap_0_18,
  MR_Word * STATE_VARIABLE_EqvRepnMap_19,
  MR_Word STATE_VARIABLE_WordAlignedTypeCtorsC_0_20,
  MR_Word * STATE_VARIABLE_WordAlignedTypeCtorsC_21)
{
  if (((MR_tag((MR_Word) IndirectIntSpec_8)) == (MR_Integer) 0))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.decide_type_repn.record_type_repns_in_indirect_int_spec\'/7", (MR_String) "direct_int2");
      return;
    }
  else
  {
    MR_Word ParseTreeInt3_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), IndirectIntSpec_8, (MR_Integer) 0))));
    MR_Word ModuleName_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt3_14, (MR_Integer) 0))));
    MR_Word TypeRepns_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt3_14, (MR_Integer) 11))));
    MR_Word Var_39;
    MR_Box conv5_STATE_VARIABLE_SimpleDuMap_17;
    MR_Box conv4_STATE_VARIABLE_EqvRepnMap_19;
    MR_Box conv3_STATE_VARIABLE_WordAlignedTypeCtorsC_21;

    {
      Var_39 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_39, 0) = ((MR_Box) (&parse_tree__decide_type_repn_scalar_common_9[0]));
      MR_hl_field(MR_mktag(0), Var_39, 1) = ((MR_Box) (parse_tree__decide_type_repn__record_type_repns_in_indirect_int_spec_7_p_0_1));
      MR_hl_field(MR_mktag(0), Var_39, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_39, 3) = ((MR_Box) (ModuleName_37));
    }
    mercury__map__foldl3_8_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__decide_type_repn_scalar_common_1[2]), (MR_Word) (&parse_tree__decide_type_repn_scalar_common_2[0]), (MR_Word) (&parse_tree__decide_type_repn_scalar_common_2[1]), (MR_Word) (&parse_tree__decide_type_repn_scalar_common_1[1]), Var_39, TypeRepns_38, ((MR_Box) (STATE_VARIABLE_SimpleDuMap_0_16)), &conv5_STATE_VARIABLE_SimpleDuMap_17, ((MR_Box) (STATE_VARIABLE_EqvRepnMap_0_18)), &conv4_STATE_VARIABLE_EqvRepnMap_19, ((MR_Box) (STATE_VARIABLE_WordAlignedTypeCtorsC_0_20)), &conv3_STATE_VARIABLE_WordAlignedTypeCtorsC_21);
    *STATE_VARIABLE_SimpleDuMap_17 = ((MR_Word) (conv5_STATE_VARIABLE_SimpleDuMap_17));
    *STATE_VARIABLE_EqvRepnMap_19 = ((MR_Word) (conv4_STATE_VARIABLE_EqvRepnMap_19));
    *STATE_VARIABLE_WordAlignedTypeCtorsC_21 = ((MR_Word) (conv3_STATE_VARIABLE_WordAlignedTypeCtorsC_21));
  }
}

static void MR_CALL 
parse_tree__decide_type_repn__record_type_repns_in_direct_int_spec_7_p_0_1(
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_EqvRepnMap_40;
    MR_Word conv1_STATE_VARIABLE_SimpleDuMap_42;
    MR_Word conv0_STATE_VARIABLE_WordAlignedTypeCtorsC_44;

    parse_tree__decide_type_repn__record_type_repn_in_parse_tree_int3_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_EqvRepnMap_40, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_SimpleDuMap_42, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_WordAlignedTypeCtorsC_44);
    *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_EqvRepnMap_40));
    *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_SimpleDuMap_42));
    *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_WordAlignedTypeCtorsC_44));
  }
}

static void MR_CALL 
parse_tree__decide_type_repn__record_type_repns_in_direct_int_spec_7_p_0(
  MR_Word DirectIntSpec_8,
  MR_Word STATE_VARIABLE_SimpleDuMap_0_16,
  MR_Word * STATE_VARIABLE_SimpleDuMap_17,
  MR_Word STATE_VARIABLE_EqvRepnMap_0_18,
  MR_Word * STATE_VARIABLE_EqvRepnMap_19,
  MR_Word STATE_VARIABLE_WordAlignedTypeCtorsC_0_20,
  MR_Word * STATE_VARIABLE_WordAlignedTypeCtorsC_21)
{
  if (((MR_tag((MR_Word) DirectIntSpec_8)) == (MR_Integer) 0))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.decide_type_repn.record_type_repns_in_direct_int_spec\'/7", (MR_String) "direct_int1");
      return;
    }
  else
  {
    MR_Word ParseTreeInt3_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DirectIntSpec_8, (MR_Integer) 0))));
    MR_Word ModuleName_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt3_14, (MR_Integer) 0))));
    MR_Word TypeRepns_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt3_14, (MR_Integer) 11))));
    MR_Word Var_39;
    MR_Box conv5_STATE_VARIABLE_SimpleDuMap_17;
    MR_Box conv4_STATE_VARIABLE_EqvRepnMap_19;
    MR_Box conv3_STATE_VARIABLE_WordAlignedTypeCtorsC_21;

    {
      Var_39 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_39, 0) = ((MR_Box) (&parse_tree__decide_type_repn_scalar_common_9[0]));
      MR_hl_field(MR_mktag(0), Var_39, 1) = ((MR_Box) (parse_tree__decide_type_repn__record_type_repns_in_direct_int_spec_7_p_0_1));
      MR_hl_field(MR_mktag(0), Var_39, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_39, 3) = ((MR_Box) (ModuleName_37));
    }
    mercury__map__foldl3_8_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__decide_type_repn_scalar_common_1[2]), (MR_Word) (&parse_tree__decide_type_repn_scalar_common_2[0]), (MR_Word) (&parse_tree__decide_type_repn_scalar_common_2[1]), (MR_Word) (&parse_tree__decide_type_repn_scalar_common_1[1]), Var_39, TypeRepns_38, ((MR_Box) (STATE_VARIABLE_SimpleDuMap_0_16)), &conv5_STATE_VARIABLE_SimpleDuMap_17, ((MR_Box) (STATE_VARIABLE_EqvRepnMap_0_18)), &conv4_STATE_VARIABLE_EqvRepnMap_19, ((MR_Box) (STATE_VARIABLE_WordAlignedTypeCtorsC_0_20)), &conv3_STATE_VARIABLE_WordAlignedTypeCtorsC_21);
    *STATE_VARIABLE_SimpleDuMap_17 = ((MR_Word) (conv5_STATE_VARIABLE_SimpleDuMap_17));
    *STATE_VARIABLE_EqvRepnMap_19 = ((MR_Word) (conv4_STATE_VARIABLE_EqvRepnMap_19));
    *STATE_VARIABLE_WordAlignedTypeCtorsC_21 = ((MR_Word) (conv3_STATE_VARIABLE_WordAlignedTypeCtorsC_21));
  }
}

static void MR_CALL 
parse_tree__decide_type_repn__item_type_repn_info_eqv_to_eqv_type_body_2_p_0(
  MR_Word ItemTypeRepnInfoEqv_3,
  MR_Word * EqvBody_4)
{
  {
    MR_Word TypeParams_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeRepnInfoEqv_3, (MR_Integer) 1))));
    MR_Word EqvType_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeRepnInfoEqv_3, (MR_Integer) 2))));
    MR_Word TVarSet_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeRepnInfoEqv_3, (MR_Integer) 3))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *EqvBody_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (TVarSet_8));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (TypeParams_6));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (EqvType_7));
    }
  }
}

static void MR_CALL 
parse_tree__decide_type_repn__maybe_add_word_aligned_repn_item_4_p_0(
  MR_Word ExportedTypes_5,
  MR_Word TypeCtor_6,
  MR_Word STATE_VARIABLE_RepnMap_0_14,
  MR_Word * STATE_VARIABLE_RepnMap_15)
{
  {
    MR_bool succeeded;

    succeeded = mercury__set_tree234__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (TypeCtor_6)), ExportedTypes_5);
    if (succeeded)
    {
      MR_Word TypeCtorSymName_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_6, (MR_Integer) 0))));
      MR_Integer TypeCtorArity_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor_6, (MR_Integer) 1))));
      MR_Word TVarSet0_10;
      MR_Word TypeParams_11;
      MR_Word TVarSet_12;
      MR_Word Item_13;
      MR_Word Var_17;

      mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TVarSet0_10);
      mercury__varset__new_vars_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TypeCtorArity_9, &TypeParams_11, TVarSet0_10, &TVarSet_12);
      Var_17 = mercury__term__context_init_0_f_0();
      {
        Item_13 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Item_13, 0) = ((MR_Box) (TypeCtorSymName_8));
        MR_hl_field(MR_mktag(0), Item_13, 1) = ((MR_Box) (TypeParams_11));
        MR_hl_field(MR_mktag(0), Item_13, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Item_13, 3) = ((MR_Box) (TVarSet_12));
        MR_hl_field(MR_mktag(0), Item_13, 4) = ((MR_Box) (Var_17));
        MR_hl_field(MR_mktag(0), Item_13, 5) = ((MR_Box) ((MR_Integer) -1));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__decide_type_repn_scalar_common_1[2]), ((MR_Box) (TypeCtor_6)), ((MR_Box) (Item_13)), STATE_VARIABLE_RepnMap_0_14, STATE_VARIABLE_RepnMap_15);
    }
    else
      *STATE_VARIABLE_RepnMap_15 = STATE_VARIABLE_RepnMap_0_14;
  }
}

static void MR_CALL 
parse_tree__decide_type_repn__add_simple_du_repn_item_4_p_0(
  MR_Word TypeCtor_5,
  MR_Word SimpleDuRepn_6,
  MR_Word STATE_VARIABLE_RepnMap_0_17,
  MR_Word * STATE_VARIABLE_RepnMap_18)
{
  {
    MR_Word TypeParams_8;
    MR_Word TVarSet_9;
    MR_Word DuRepn_11;
    MR_Word TypeCtorSymName_14;
    MR_Word Item_16;
    MR_Word Var_19;
    MR_Word Var_20;

    switch (MR_tag((MR_Word) SimpleDuRepn_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word DirectDummyRepn_10;

          TypeParams_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SimpleDuRepn_6, (MR_Integer) 0))));
          TVarSet_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SimpleDuRepn_6, (MR_Integer) 1))));
          DirectDummyRepn_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SimpleDuRepn_6, (MR_Integer) 2))));
          DuRepn_11 = (MR_Word) ((MR_Word) (DirectDummyRepn_10));
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word EnumRepn_12;

          TypeParams_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SimpleDuRepn_6, (MR_Integer) 0))));
          TVarSet_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SimpleDuRepn_6, (MR_Integer) 1))));
          EnumRepn_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SimpleDuRepn_6, (MR_Integer) 2))));
          DuRepn_11 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (EnumRepn_12)));
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word NotagRepn_13;

          TypeParams_8 = ((MR_Word) ((MR_hl_field(MR_mktag(2), SimpleDuRepn_6, (MR_Integer) 0))));
          TVarSet_9 = ((MR_Word) ((MR_hl_field(MR_mktag(2), SimpleDuRepn_6, (MR_Integer) 1))));
          NotagRepn_13 = ((MR_Word) ((MR_hl_field(MR_mktag(2), SimpleDuRepn_6, (MR_Integer) 2))));
          DuRepn_11 = (MR_Word) (MR_mkword(MR_mktag(2), (MR_Word) (NotagRepn_13)));
        }
        break;
    }
    TypeCtorSymName_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_5, (MR_Integer) 0))));
    {
      Var_19 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_19, 0) = ((MR_Box) (DuRepn_11));
    }
    Var_20 = mercury__term__context_init_0_f_0();
    {
      Item_16 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Item_16, 0) = ((MR_Box) (TypeCtorSymName_14));
      MR_hl_field(MR_mktag(0), Item_16, 1) = ((MR_Box) (TypeParams_8));
      MR_hl_field(MR_mktag(0), Item_16, 2) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), Item_16, 3) = ((MR_Box) (TVarSet_9));
      MR_hl_field(MR_mktag(0), Item_16, 4) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), Item_16, 5) = ((MR_Box) ((MR_Integer) -1));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__decide_type_repn_scalar_common_1[2]), ((MR_Box) (TypeCtor_5)), ((MR_Box) (Item_16)), STATE_VARIABLE_RepnMap_0_17, STATE_VARIABLE_RepnMap_18);
  }
}

static void MR_CALL 
parse_tree__decide_type_repn__maybe_add_simple_du_repn_item_5_p_0(
  MR_Word ExportedTypes_6,
  MR_Word TypeCtor_7,
  MR_Word SimpleDuRepn_8,
  MR_Word STATE_VARIABLE_RepnMap_0_10,
  MR_Word * STATE_VARIABLE_RepnMap_11)
{
  {
    MR_bool succeeded;

    succeeded = mercury__set_tree234__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (TypeCtor_7)), ExportedTypes_6);
    if (succeeded)
    {
      MR_Word TypeParams_19;
      MR_Word TVarSet_20;
      MR_Word DuRepn_22;
      MR_Word TypeCtorSymName_25;
      MR_Word Item_27;
      MR_Word Var_28;
      MR_Word Var_29;

      switch (MR_tag((MR_Word) SimpleDuRepn_8)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word DirectDummyRepn_21;

            TypeParams_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SimpleDuRepn_8, (MR_Integer) 0))));
            TVarSet_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SimpleDuRepn_8, (MR_Integer) 1))));
            DirectDummyRepn_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SimpleDuRepn_8, (MR_Integer) 2))));
            DuRepn_22 = (MR_Word) ((MR_Word) (DirectDummyRepn_21));
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word EnumRepn_23;

            TypeParams_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SimpleDuRepn_8, (MR_Integer) 0))));
            TVarSet_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SimpleDuRepn_8, (MR_Integer) 1))));
            EnumRepn_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SimpleDuRepn_8, (MR_Integer) 2))));
            DuRepn_22 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (EnumRepn_23)));
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word NotagRepn_24;

            TypeParams_19 = ((MR_Word) ((MR_hl_field(MR_mktag(2), SimpleDuRepn_8, (MR_Integer) 0))));
            TVarSet_20 = ((MR_Word) ((MR_hl_field(MR_mktag(2), SimpleDuRepn_8, (MR_Integer) 1))));
            NotagRepn_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), SimpleDuRepn_8, (MR_Integer) 2))));
            DuRepn_22 = (MR_Word) (MR_mkword(MR_mktag(2), (MR_Word) (NotagRepn_24)));
          }
          break;
      }
      TypeCtorSymName_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_7, (MR_Integer) 0))));
      {
        Var_28 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_28, 0) = ((MR_Box) (DuRepn_22));
      }
      Var_29 = mercury__term__context_init_0_f_0();
      {
        Item_27 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Item_27, 0) = ((MR_Box) (TypeCtorSymName_25));
        MR_hl_field(MR_mktag(0), Item_27, 1) = ((MR_Box) (TypeParams_19));
        MR_hl_field(MR_mktag(0), Item_27, 2) = ((MR_Box) (Var_28));
        MR_hl_field(MR_mktag(0), Item_27, 3) = ((MR_Box) (TVarSet_20));
        MR_hl_field(MR_mktag(0), Item_27, 4) = ((MR_Box) (Var_29));
        MR_hl_field(MR_mktag(0), Item_27, 5) = ((MR_Box) ((MR_Integer) -1));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__decide_type_repn_scalar_common_1[2]), ((MR_Box) (TypeCtor_7)), ((MR_Box) (Item_27)), STATE_VARIABLE_RepnMap_0_10, STATE_VARIABLE_RepnMap_11);
    }
    else
      *STATE_VARIABLE_RepnMap_11 = STATE_VARIABLE_RepnMap_0_10;
  }
}

static void MR_CALL 
parse_tree__decide_type_repn__add_eqv_repn_item_4_p_0(
  MR_Word TypeCtor_5,
  MR_Word EqvRepnItem_6,
  MR_Word STATE_VARIABLE_RepnMap_0_15,
  MR_Word * STATE_VARIABLE_RepnMap_16)
{
  {
    MR_Word TypeCtorSymName_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EqvRepnItem_6, (MR_Integer) 0))));
    MR_Word TypeParams_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EqvRepnItem_6, (MR_Integer) 1))));
    MR_Word EqvType_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EqvRepnItem_6, (MR_Integer) 2))));
    MR_Word TVarSet_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EqvRepnItem_6, (MR_Integer) 3))));
    MR_Word RepnItem_14;
    MR_Word Var_17;
    MR_Word Var_18;

    {
      Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (EqvType_10));
    }
    Var_18 = mercury__term__dummy_context_init_0_f_0();
    {
      RepnItem_14 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), RepnItem_14, 0) = ((MR_Box) (TypeCtorSymName_8));
      MR_hl_field(MR_mktag(0), RepnItem_14, 1) = ((MR_Box) (TypeParams_9));
      MR_hl_field(MR_mktag(0), RepnItem_14, 2) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), RepnItem_14, 3) = ((MR_Box) (TVarSet_11));
      MR_hl_field(MR_mktag(0), RepnItem_14, 4) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), RepnItem_14, 5) = ((MR_Box) ((MR_Integer) -1));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__decide_type_repn_scalar_common_1[2]), ((MR_Box) (TypeCtor_5)), ((MR_Box) (RepnItem_14)), STATE_VARIABLE_RepnMap_0_15, STATE_VARIABLE_RepnMap_16);
  }
}

static void MR_CALL 
parse_tree__decide_type_repn__decide_simple_type_repns_stage_1_10_p_0(
  MR_Word TypeCtor_11,
  MR_Word CheckedDefn_12,
  MR_Word STATE_VARIABLE_EqvRepnMap_0_36,
  MR_Word * STATE_VARIABLE_EqvRepnMap_37,
  MR_Word STATE_VARIABLE_SimpleDuMap_0_38,
  MR_Word * STATE_VARIABLE_SimpleDuMap_39,
  MR_Word STATE_VARIABLE_WordAlignedTypeCtorsC_0_40,
  MR_Word * STATE_VARIABLE_WordAlignedTypeCtorsC_41,
  MR_Word STATE_VARIABLE_ExportedTypes_0_42,
  MR_Word * STATE_VARIABLE_ExportedTypes_43)
{
  {
    MR_bool succeeded;

    if (((MR_tag((MR_Word) CheckedDefn_12)) == (MR_Integer) 0))
    {
      *STATE_VARIABLE_EqvRepnMap_37 = STATE_VARIABLE_EqvRepnMap_0_36;
      *STATE_VARIABLE_SimpleDuMap_39 = STATE_VARIABLE_SimpleDuMap_0_38;
      *STATE_VARIABLE_WordAlignedTypeCtorsC_41 = STATE_VARIABLE_WordAlignedTypeCtorsC_0_40;
      *STATE_VARIABLE_ExportedTypes_43 = STATE_VARIABLE_ExportedTypes_0_42;
    }
    else
    {
      MR_Word StdDefn_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CheckedDefn_12, (MR_Integer) 0))));

      switch (MR_tag((MR_Word) StdDefn_18)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word EqvStatus_19 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), StdDefn_18, (MR_Integer) 0))) & (MR_Integer) 3);
            MR_Word EqvDefn_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), StdDefn_18, (MR_Integer) 1))));
            MR_Word TypeCtorSymName_21;
            MR_Word TypeParams_22;
            MR_Word EqvType_23;
            MR_Word TVarSet_24;
            MR_Word EqvRepnItem_27;
            MR_Word Var_52;
            MR_Word Var_53;

            switch (EqvStatus_19) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
              case (MR_Integer) 0:
                mercury__set_tree234__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (TypeCtor_11)), STATE_VARIABLE_ExportedTypes_0_42, STATE_VARIABLE_ExportedTypes_43);
                break;
              case (MR_Integer) 2:
                *STATE_VARIABLE_ExportedTypes_43 = STATE_VARIABLE_ExportedTypes_0_42;
                break;
            }
            TypeCtorSymName_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EqvDefn_20, (MR_Integer) 0))));
            TypeParams_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EqvDefn_20, (MR_Integer) 1))));
            Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EqvDefn_20, (MR_Integer) 2))));
            TVarSet_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EqvDefn_20, (MR_Integer) 3))));
            EqvType_23 = (MR_Word) (Var_52);
            Var_53 = mercury__term__dummy_context_init_0_f_0();
            {
              EqvRepnItem_27 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), EqvRepnItem_27, 0) = ((MR_Box) (TypeCtorSymName_21));
              MR_hl_field(MR_mktag(0), EqvRepnItem_27, 1) = ((MR_Box) (TypeParams_22));
              MR_hl_field(MR_mktag(0), EqvRepnItem_27, 2) = ((MR_Box) (EqvType_23));
              MR_hl_field(MR_mktag(0), EqvRepnItem_27, 3) = ((MR_Box) (TVarSet_24));
              MR_hl_field(MR_mktag(0), EqvRepnItem_27, 4) = ((MR_Box) (Var_53));
              MR_hl_field(MR_mktag(0), EqvRepnItem_27, 5) = ((MR_Box) ((MR_Integer) -1));
            }
            mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__decide_type_repn_scalar_common_1[0]), ((MR_Box) (TypeCtor_11)), ((MR_Box) (EqvRepnItem_27)), STATE_VARIABLE_EqvRepnMap_0_36, STATE_VARIABLE_EqvRepnMap_37);
            *STATE_VARIABLE_SimpleDuMap_39 = STATE_VARIABLE_SimpleDuMap_0_38;
            *STATE_VARIABLE_WordAlignedTypeCtorsC_41 = STATE_VARIABLE_WordAlignedTypeCtorsC_0_40;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word DuStatus_28 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), StdDefn_18, (MR_Integer) 0))) & (MR_Integer) 3);
            MR_Word DuDefn_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), StdDefn_18, (MR_Integer) 1))));
            MR_String HeadName_30 = ((MR_String) ((MR_hl_field(MR_mktag(1), StdDefn_18, (MR_Integer) 2))));
            MR_Word TailNames_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), StdDefn_18, (MR_Integer) 3))));
            MR_Word MaybeDefnOrEnumCJCsE_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), StdDefn_18, (MR_Integer) 4))));

            switch (DuStatus_28) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 2:
              case (MR_Integer) 1:
              case (MR_Integer) 0:
                mercury__set_tree234__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (TypeCtor_11)), STATE_VARIABLE_ExportedTypes_0_42, STATE_VARIABLE_ExportedTypes_43);
                break;
              case (MR_Integer) 3:
                *STATE_VARIABLE_ExportedTypes_43 = STATE_VARIABLE_ExportedTypes_0_42;
                break;
            }
            parse_tree__decide_type_repn__decide_type_repns_stage_1_du_all_plain_constants_7_p_0(TypeCtor_11, DuDefn_29, HeadName_30, TailNames_31, MaybeDefnOrEnumCJCsE_32, STATE_VARIABLE_SimpleDuMap_0_38, STATE_VARIABLE_SimpleDuMap_39);
            *STATE_VARIABLE_EqvRepnMap_37 = STATE_VARIABLE_EqvRepnMap_0_36;
            *STATE_VARIABLE_WordAlignedTypeCtorsC_41 = STATE_VARIABLE_WordAlignedTypeCtorsC_0_40;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word MaybeDefnCJCsE_33 = ((MR_Word) ((MR_hl_field(MR_mktag(2), StdDefn_18, (MR_Integer) 2))));
            MR_Word DuStatus_56 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), StdDefn_18, (MR_Integer) 0))) & (MR_Integer) 3);
            MR_Word DuDefn_57 = ((MR_Word) ((MR_hl_field(MR_mktag(2), StdDefn_18, (MR_Integer) 1))));

            switch (DuStatus_56) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 2:
              case (MR_Integer) 1:
              case (MR_Integer) 0:
                mercury__set_tree234__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (TypeCtor_11)), STATE_VARIABLE_ExportedTypes_0_42, STATE_VARIABLE_ExportedTypes_43);
                break;
              case (MR_Integer) 3:
                *STATE_VARIABLE_ExportedTypes_43 = STATE_VARIABLE_ExportedTypes_0_42;
                break;
            }
            parse_tree__decide_type_repn__decide_type_repns_stage_1_du_not_all_plain_constants_7_p_0(TypeCtor_11, DuDefn_57, MaybeDefnCJCsE_33, STATE_VARIABLE_SimpleDuMap_0_38, STATE_VARIABLE_SimpleDuMap_39, STATE_VARIABLE_WordAlignedTypeCtorsC_0_40, STATE_VARIABLE_WordAlignedTypeCtorsC_41);
            *STATE_VARIABLE_EqvRepnMap_37 = STATE_VARIABLE_EqvRepnMap_0_36;
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word AbsStatus_34 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), StdDefn_18, (MR_Integer) 0))) & (MR_Integer) 3);
            MR_Word MaybeDefnCJCsE_58 = ((MR_Word) ((MR_hl_field(MR_mktag(3), StdDefn_18, (MR_Integer) 2))));
            MR_Word MaybeDefnC_70;
            MR_Word TypeCtorInfo_27_87;
            MR_Word DefnC_74;
            MR_Word Assertions_75;
            MR_Word Var_76;
            MR_Word Var_77;
            MR_Word Var_78;

            switch (AbsStatus_34) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
              case (MR_Integer) 0:
                mercury__set_tree234__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (TypeCtor_11)), STATE_VARIABLE_ExportedTypes_0_42, STATE_VARIABLE_ExportedTypes_43);
                break;
              case (MR_Integer) 2:
                *STATE_VARIABLE_ExportedTypes_43 = STATE_VARIABLE_ExportedTypes_0_42;
                break;
            }
            MaybeDefnC_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeDefnCJCsE_58, (MR_Integer) 0))));
            succeeded = (MaybeDefnC_70 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              DefnC_74 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDefnC_70, (MR_Integer) 0))));
              Var_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DefnC_74, (MR_Integer) 2))));
              Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_77, (MR_Integer) 2))));
              Assertions_75 = (MR_Word) (Var_76);
              Var_78 = (MR_Integer) 2;
              TypeCtorInfo_27_87 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_type_assertion_0);
              succeeded = mercury__set__member_2_p_0(TypeCtorInfo_27_87, ((MR_Box) (Var_78)), Assertions_75);
            }
            if (succeeded)
              mercury__set_tree234__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (TypeCtor_11)), STATE_VARIABLE_WordAlignedTypeCtorsC_0_40, STATE_VARIABLE_WordAlignedTypeCtorsC_41);
            else
              *STATE_VARIABLE_WordAlignedTypeCtorsC_41 = STATE_VARIABLE_WordAlignedTypeCtorsC_0_40;
            *STATE_VARIABLE_EqvRepnMap_37 = STATE_VARIABLE_EqvRepnMap_0_36;
            *STATE_VARIABLE_SimpleDuMap_39 = STATE_VARIABLE_SimpleDuMap_0_38;
          }
          break;
      }
    }
  }
}

static void MR_CALL 
parse_tree__decide_type_repn__decide_type_repns_stage_1_du_not_all_plain_constants_7_p_0(
  MR_Word TypeCtor_8,
  MR_Word DuDefn_9,
  MR_Word MaybeDefnCJCsE_10,
  MR_Word STATE_VARIABLE_SimpleDuMap_0_41,
  MR_Word * STATE_VARIABLE_SimpleDuMap_42,
  MR_Word STATE_VARIABLE_WordAlignedTypeCtorsC_0_43,
  MR_Word * STATE_VARIABLE_WordAlignedTypeCtorsC_44)
{
  {
    MR_bool succeeded;
    MR_Word ForeignTypeRepns_13;
    MR_Word TypeParams_15;
    MR_Word DetailsDu_16;
    MR_Word TVarSet_17;
    MR_Word OoMCtors_20;
    MR_Word MaybeCanonical_21;
    MR_Word HeadCtor_23;
    MR_Word TailCtors_24;

    parse_tree__decide_type_repn__decide_type_repns_foreign_defns_2_p_0(MaybeDefnCJCsE_10, &ForeignTypeRepns_13);
    TypeParams_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DuDefn_9, (MR_Integer) 1))));
    DetailsDu_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DuDefn_9, (MR_Integer) 2))));
    TVarSet_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DuDefn_9, (MR_Integer) 3))));
    OoMCtors_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu_16, (MR_Integer) 0))));
    MaybeCanonical_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu_16, (MR_Integer) 1))));
    HeadCtor_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OoMCtors_20, (MR_Integer) 0))));
    TailCtors_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OoMCtors_20, (MR_Integer) 1))));
    if ((TailCtors_24 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word MaybeExistConstraints_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadCtor_23, (MR_Integer) 1))));
      MR_Word SingleCtorSymName_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadCtor_23, (MR_Integer) 2))));
      MR_Word Args_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadCtor_23, (MR_Integer) 3))));
      MR_Integer Arity_30 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadCtor_23, (MR_Integer) 4))));
      MR_Word OneArg_32;
      MR_Word Var_57;

      succeeded = (MaybeExistConstraints_27 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = (Arity_30 == (MR_Integer) 1);
        if (succeeded)
        {
          succeeded = (MaybeCanonical_21 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            succeeded = (Args_29 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              OneArg_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_29, (MR_Integer) 0))));
              Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_29, (MR_Integer) 1))));
              succeeded = (Var_57 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
      }
      if (succeeded)
      {
        MR_String SingleCtorName_33;
        MR_Word OneArgType_34;
        MR_Word NotagRepn_35;
        MR_Word SimpleDuRepn_36;

        SingleCtorName_33 = mdbcomp__sym_name__unqualify_name_1_f_0(SingleCtorSymName_28);
        OneArgType_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OneArg_32, (MR_Integer) 1))));
        {
          NotagRepn_35 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), NotagRepn_35, 0) = ((MR_Box) (SingleCtorName_33));
          MR_hl_field(MR_mktag(0), NotagRepn_35, 1) = ((MR_Box) (OneArgType_34));
          MR_hl_field(MR_mktag(0), NotagRepn_35, 2) = ((MR_Box) (ForeignTypeRepns_13));
        }
        {
          SimpleDuRepn_36 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), SimpleDuRepn_36, 0) = ((MR_Box) (TypeParams_15));
          MR_hl_field(MR_mktag(2), SimpleDuRepn_36, 1) = ((MR_Box) (TVarSet_17));
          MR_hl_field(MR_mktag(2), SimpleDuRepn_36, 2) = ((MR_Box) (NotagRepn_35));
        }
        mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_simple_du_repn_0), ((MR_Box) (TypeCtor_8)), ((MR_Box) (SimpleDuRepn_36)), STATE_VARIABLE_SimpleDuMap_0_41, STATE_VARIABLE_SimpleDuMap_42);
        *STATE_VARIABLE_WordAlignedTypeCtorsC_44 = STATE_VARIABLE_WordAlignedTypeCtorsC_0_43;
      }
      else
      {
        MR_Integer TypeCtorArity_38 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor_8, (MR_Integer) 1))));

        succeeded = (TypeCtorArity_38 == (MR_Integer) 0);
        if (succeeded)
          mercury__set_tree234__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (TypeCtor_8)), STATE_VARIABLE_WordAlignedTypeCtorsC_0_43, STATE_VARIABLE_WordAlignedTypeCtorsC_44);
        else
          *STATE_VARIABLE_WordAlignedTypeCtorsC_44 = STATE_VARIABLE_WordAlignedTypeCtorsC_0_43;
        *STATE_VARIABLE_SimpleDuMap_42 = STATE_VARIABLE_SimpleDuMap_0_41;
      }
    }
    else
    {
      *STATE_VARIABLE_SimpleDuMap_42 = STATE_VARIABLE_SimpleDuMap_0_41;
      *STATE_VARIABLE_WordAlignedTypeCtorsC_44 = STATE_VARIABLE_WordAlignedTypeCtorsC_0_43;
    }
  }
}

static void MR_CALL 
parse_tree__decide_type_repn__decide_type_repns_foreign_defns_2_p_0(
  MR_Word MaybeDefnCJCsE_3,
  MR_Word * MaybeRepnCJCsE_4)
{
  {
    MR_Word MaybeDefnC_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeDefnCJCsE_3, (MR_Integer) 0))));
    MR_Word MaybeDefnJava_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeDefnCJCsE_3, (MR_Integer) 1))));
    MR_Word MaybeDefnCsharp_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeDefnCJCsE_3, (MR_Integer) 2))));
    MR_Word MaybeDefnErlang_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeDefnCJCsE_3, (MR_Integer) 3))));
    MR_Word MaybeRepnC_9;
    MR_Word MaybeRepnJava_10;
    MR_Word MaybeRepnCsharp_11;
    MR_Word MaybeRepnErlang_12;

    if ((MaybeDefnC_5 == (MR_Word) ((MR_Unsigned) 0U)))
      MaybeRepnC_9 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word ForeignDefn_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDefnC_5, (MR_Integer) 0))));
      MR_Word ForeignRepn_16;
      MR_Word DetailsForeign_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignDefn_15, (MR_Integer) 2))));
      MR_Word LangType_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign_21, (MR_Integer) 0))));
      MR_Word Assertions_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign_21, (MR_Integer) 2))));
      MR_String ForeignTypeName_28;

      switch (MR_tag((MR_Word) LangType_25)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LangType_25, (MR_Integer) 0))));

            ForeignTypeName_28 = (MR_String) (Var_32);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LangType_25, (MR_Integer) 0))));

            ForeignTypeName_28 = (MR_String) (Var_31);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(2), LangType_25, (MR_Integer) 0))));

            ForeignTypeName_28 = (MR_String) (Var_30);
          }
          break;
        case (MR_Integer) 3:
          ForeignTypeName_28 = (MR_String) "";
          break;
      }
      {
        ForeignRepn_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ForeignRepn_16, 0) = ((MR_Box) (ForeignTypeName_28));
        MR_hl_field(MR_mktag(0), ForeignRepn_16, 1) = ((MR_Box) (Assertions_27));
      }
      {
        MaybeRepnC_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeRepnC_9, 0) = ((MR_Box) (ForeignRepn_16));
      }
    }
    if ((MaybeDefnJava_6 == (MR_Word) ((MR_Unsigned) 0U)))
      MaybeRepnJava_10 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word ForeignDefn_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDefnJava_6, (MR_Integer) 0))));
      MR_Word ForeignRepn_36;
      MR_Word DetailsForeign_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignDefn_35, (MR_Integer) 2))));
      MR_Word LangType_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign_41, (MR_Integer) 0))));
      MR_Word Assertions_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign_41, (MR_Integer) 2))));
      MR_String ForeignTypeName_48;

      switch (MR_tag((MR_Word) LangType_45)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LangType_45, (MR_Integer) 0))));

            ForeignTypeName_48 = (MR_String) (Var_52);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LangType_45, (MR_Integer) 0))));

            ForeignTypeName_48 = (MR_String) (Var_51);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(2), LangType_45, (MR_Integer) 0))));

            ForeignTypeName_48 = (MR_String) (Var_50);
          }
          break;
        case (MR_Integer) 3:
          ForeignTypeName_48 = (MR_String) "";
          break;
      }
      {
        ForeignRepn_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ForeignRepn_36, 0) = ((MR_Box) (ForeignTypeName_48));
        MR_hl_field(MR_mktag(0), ForeignRepn_36, 1) = ((MR_Box) (Assertions_47));
      }
      {
        MaybeRepnJava_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeRepnJava_10, 0) = ((MR_Box) (ForeignRepn_36));
      }
    }
    if ((MaybeDefnCsharp_7 == (MR_Word) ((MR_Unsigned) 0U)))
      MaybeRepnCsharp_11 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word ForeignDefn_55 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDefnCsharp_7, (MR_Integer) 0))));
      MR_Word ForeignRepn_56;
      MR_Word DetailsForeign_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignDefn_55, (MR_Integer) 2))));
      MR_Word LangType_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign_61, (MR_Integer) 0))));
      MR_Word Assertions_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign_61, (MR_Integer) 2))));
      MR_String ForeignTypeName_68;

      switch (MR_tag((MR_Word) LangType_65)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LangType_65, (MR_Integer) 0))));

            ForeignTypeName_68 = (MR_String) (Var_72);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LangType_65, (MR_Integer) 0))));

            ForeignTypeName_68 = (MR_String) (Var_71);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(2), LangType_65, (MR_Integer) 0))));

            ForeignTypeName_68 = (MR_String) (Var_70);
          }
          break;
        case (MR_Integer) 3:
          ForeignTypeName_68 = (MR_String) "";
          break;
      }
      {
        ForeignRepn_56 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ForeignRepn_56, 0) = ((MR_Box) (ForeignTypeName_68));
        MR_hl_field(MR_mktag(0), ForeignRepn_56, 1) = ((MR_Box) (Assertions_67));
      }
      {
        MaybeRepnCsharp_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeRepnCsharp_11, 0) = ((MR_Box) (ForeignRepn_56));
      }
    }
    if ((MaybeDefnErlang_8 == (MR_Word) ((MR_Unsigned) 0U)))
      MaybeRepnErlang_12 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word ForeignDefn_75 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDefnErlang_8, (MR_Integer) 0))));
      MR_Word ForeignRepn_76;
      MR_Word DetailsForeign_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignDefn_75, (MR_Integer) 2))));
      MR_Word LangType_85 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign_81, (MR_Integer) 0))));
      MR_Word Assertions_87 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign_81, (MR_Integer) 2))));
      MR_String ForeignTypeName_88;

      switch (MR_tag((MR_Word) LangType_85)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_92 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LangType_85, (MR_Integer) 0))));

            ForeignTypeName_88 = (MR_String) (Var_92);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_91 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LangType_85, (MR_Integer) 0))));

            ForeignTypeName_88 = (MR_String) (Var_91);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_90 = ((MR_Word) ((MR_hl_field(MR_mktag(2), LangType_85, (MR_Integer) 0))));

            ForeignTypeName_88 = (MR_String) (Var_90);
          }
          break;
        case (MR_Integer) 3:
          ForeignTypeName_88 = (MR_String) "";
          break;
      }
      {
        ForeignRepn_76 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ForeignRepn_76, 0) = ((MR_Box) (ForeignTypeName_88));
        MR_hl_field(MR_mktag(0), ForeignRepn_76, 1) = ((MR_Box) (Assertions_87));
      }
      {
        MaybeRepnErlang_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeRepnErlang_12, 0) = ((MR_Box) (ForeignRepn_76));
      }
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      *MaybeRepnCJCsE_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MaybeRepnC_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MaybeRepnJava_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MaybeRepnCsharp_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (MaybeRepnErlang_12));
    }
  }
}

static void MR_CALL 
parse_tree__decide_type_repn__decide_type_repns_stage_1_du_all_plain_constants_7_p_0(
  MR_Word TypeCtor_8,
  MR_Word DuDefn_9,
  MR_String HeadName_10,
  MR_Word TailNames_11,
  MR_Word MaybeDefnOrEnumCJCsE_12,
  MR_Word STATE_VARIABLE_SimpleDuMap_0_26,
  MR_Word * STATE_VARIABLE_SimpleDuMap_27)
{
  {
    MR_Word EnumForeignRepns_14;
    MR_Word TypeParams_16;
    MR_Word TVarSet_18;
    MR_Word SimpleDuRepn_22;

    parse_tree__decide_type_repn__decide_type_repns_foreign_defns_or_enums_2_p_0(MaybeDefnOrEnumCJCsE_12, &EnumForeignRepns_14);
    TypeParams_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DuDefn_9, (MR_Integer) 1))));
    TVarSet_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DuDefn_9, (MR_Integer) 3))));
    if ((TailNames_11 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word DirectDummyRepn_21;

      {
        DirectDummyRepn_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), DirectDummyRepn_21, 0) = ((MR_Box) (HeadName_10));
        MR_hl_field(MR_mktag(0), DirectDummyRepn_21, 1) = ((MR_Box) (EnumForeignRepns_14));
      }
      {
        SimpleDuRepn_22 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), SimpleDuRepn_22, 0) = ((MR_Box) (TypeParams_16));
        MR_hl_field(MR_mktag(0), SimpleDuRepn_22, 1) = ((MR_Box) (TVarSet_18));
        MR_hl_field(MR_mktag(0), SimpleDuRepn_22, 2) = ((MR_Box) (DirectDummyRepn_21));
      }
    }
    else
    {
      MR_String HeadTailName_23 = ((MR_String) ((MR_hl_field(MR_mktag(1), TailNames_11, (MR_Integer) 0))));
      MR_Word TailTailNames_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailNames_11, (MR_Integer) 1))));
      MR_Word EnumRepn_25;

      {
        EnumRepn_25 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), EnumRepn_25, 0) = ((MR_Box) (HeadName_10));
        MR_hl_field(MR_mktag(0), EnumRepn_25, 1) = ((MR_Box) (HeadTailName_23));
        MR_hl_field(MR_mktag(0), EnumRepn_25, 2) = ((MR_Box) (TailTailNames_24));
        MR_hl_field(MR_mktag(0), EnumRepn_25, 3) = ((MR_Box) (EnumForeignRepns_14));
      }
      {
        SimpleDuRepn_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), SimpleDuRepn_22, 0) = ((MR_Box) (TypeParams_16));
        MR_hl_field(MR_mktag(1), SimpleDuRepn_22, 1) = ((MR_Box) (TVarSet_18));
        MR_hl_field(MR_mktag(1), SimpleDuRepn_22, 2) = ((MR_Box) (EnumRepn_25));
      }
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_simple_du_repn_0), ((MR_Box) (TypeCtor_8)), ((MR_Box) (SimpleDuRepn_22)), STATE_VARIABLE_SimpleDuMap_0_26, STATE_VARIABLE_SimpleDuMap_27);
  }
}

static void MR_CALL 
parse_tree__decide_type_repn__decide_type_repns_foreign_defns_or_enums_2_p_0(
  MR_Word MaybeDefnOrEnumCJCsE_3,
  MR_Word * MaybeRepnCJCsE_4)
{
  {
    MR_Word MaybeDefnOrEnumC_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeDefnOrEnumCJCsE_3, (MR_Integer) 0))));
    MR_Word MaybeDefnOrEnumJava_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeDefnOrEnumCJCsE_3, (MR_Integer) 1))));
    MR_Word MaybeDefnOrEnumCsharp_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeDefnOrEnumCJCsE_3, (MR_Integer) 2))));
    MR_Word MaybeDefnOrEnumErlang_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeDefnOrEnumCJCsE_3, (MR_Integer) 3))));
    MR_Word MaybeRepnC_9;
    MR_Word MaybeRepnJava_10;
    MR_Word MaybeRepnCsharp_11;
    MR_Word MaybeRepnErlang_12;

    if ((MaybeDefnOrEnumC_5 == (MR_Word) ((MR_Unsigned) 0U)))
      MaybeRepnC_9 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word ForeignDefnOrEnum_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDefnOrEnumC_5, (MR_Integer) 0))));
      MR_Word EnumForeignRepn_18;

      if (((MR_tag((MR_Word) ForeignDefnOrEnum_15)) == (MR_Integer) 0))
      {
        MR_Word ForeignEnumInfo_19 = (MR_Word) ((MR_Word) (ForeignDefnOrEnum_15));
        MR_Word ForeignEnumRepn_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignEnumInfo_19, (MR_Integer) 1))));

        {
          EnumForeignRepn_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), EnumForeignRepn_18, 0) = ((MR_Box) (ForeignEnumRepn_20));
        }
      }
      else
      {
        MR_Word TypeDefnInfo_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ForeignDefnOrEnum_15, (MR_Integer) 0))));
        MR_Word ForeignTypeRepn_17;
        MR_Word DetailsForeign_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeDefnInfo_16, (MR_Integer) 2))));
        MR_Word LangType_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign_28, (MR_Integer) 0))));
        MR_Word Assertions_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign_28, (MR_Integer) 2))));
        MR_String ForeignTypeName_35;

        switch (MR_tag((MR_Word) LangType_32)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LangType_32, (MR_Integer) 0))));

              ForeignTypeName_35 = (MR_String) (Var_39);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LangType_32, (MR_Integer) 0))));

              ForeignTypeName_35 = (MR_String) (Var_38);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(2), LangType_32, (MR_Integer) 0))));

              ForeignTypeName_35 = (MR_String) (Var_37);
            }
            break;
          case (MR_Integer) 3:
            ForeignTypeName_35 = (MR_String) "";
            break;
        }
        {
          ForeignTypeRepn_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ForeignTypeRepn_17, 0) = ((MR_Box) (ForeignTypeName_35));
          MR_hl_field(MR_mktag(0), ForeignTypeRepn_17, 1) = ((MR_Box) (Assertions_34));
        }
        EnumForeignRepn_18 = (MR_Word) ((MR_Word) (ForeignTypeRepn_17));
      }
      {
        MaybeRepnC_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeRepnC_9, 0) = ((MR_Box) (EnumForeignRepn_18));
      }
    }
    if ((MaybeDefnOrEnumJava_6 == (MR_Word) ((MR_Unsigned) 0U)))
      MaybeRepnJava_10 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word ForeignDefnOrEnum_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDefnOrEnumJava_6, (MR_Integer) 0))));
      MR_Word EnumForeignRepn_45;

      if (((MR_tag((MR_Word) ForeignDefnOrEnum_42)) == (MR_Integer) 0))
      {
        MR_Word ForeignEnumInfo_46 = (MR_Word) ((MR_Word) (ForeignDefnOrEnum_42));
        MR_Word ForeignEnumRepn_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignEnumInfo_46, (MR_Integer) 1))));

        {
          EnumForeignRepn_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), EnumForeignRepn_45, 0) = ((MR_Box) (ForeignEnumRepn_47));
        }
      }
      else
      {
        MR_Word TypeDefnInfo_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ForeignDefnOrEnum_42, (MR_Integer) 0))));
        MR_Word ForeignTypeRepn_44;
        MR_Word DetailsForeign_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeDefnInfo_43, (MR_Integer) 2))));
        MR_Word LangType_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign_55, (MR_Integer) 0))));
        MR_Word Assertions_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign_55, (MR_Integer) 2))));
        MR_String ForeignTypeName_62;

        switch (MR_tag((MR_Word) LangType_59)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LangType_59, (MR_Integer) 0))));

              ForeignTypeName_62 = (MR_String) (Var_66);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LangType_59, (MR_Integer) 0))));

              ForeignTypeName_62 = (MR_String) (Var_65);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(2), LangType_59, (MR_Integer) 0))));

              ForeignTypeName_62 = (MR_String) (Var_64);
            }
            break;
          case (MR_Integer) 3:
            ForeignTypeName_62 = (MR_String) "";
            break;
        }
        {
          ForeignTypeRepn_44 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ForeignTypeRepn_44, 0) = ((MR_Box) (ForeignTypeName_62));
          MR_hl_field(MR_mktag(0), ForeignTypeRepn_44, 1) = ((MR_Box) (Assertions_61));
        }
        EnumForeignRepn_45 = (MR_Word) ((MR_Word) (ForeignTypeRepn_44));
      }
      {
        MaybeRepnJava_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeRepnJava_10, 0) = ((MR_Box) (EnumForeignRepn_45));
      }
    }
    if ((MaybeDefnOrEnumCsharp_7 == (MR_Word) ((MR_Unsigned) 0U)))
      MaybeRepnCsharp_11 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word ForeignDefnOrEnum_69 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDefnOrEnumCsharp_7, (MR_Integer) 0))));
      MR_Word EnumForeignRepn_72;

      if (((MR_tag((MR_Word) ForeignDefnOrEnum_69)) == (MR_Integer) 0))
      {
        MR_Word ForeignEnumInfo_73 = (MR_Word) ((MR_Word) (ForeignDefnOrEnum_69));
        MR_Word ForeignEnumRepn_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignEnumInfo_73, (MR_Integer) 1))));

        {
          EnumForeignRepn_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), EnumForeignRepn_72, 0) = ((MR_Box) (ForeignEnumRepn_74));
        }
      }
      else
      {
        MR_Word TypeDefnInfo_70 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ForeignDefnOrEnum_69, (MR_Integer) 0))));
        MR_Word ForeignTypeRepn_71;
        MR_Word DetailsForeign_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeDefnInfo_70, (MR_Integer) 2))));
        MR_Word LangType_86 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign_82, (MR_Integer) 0))));
        MR_Word Assertions_88 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign_82, (MR_Integer) 2))));
        MR_String ForeignTypeName_89;

        switch (MR_tag((MR_Word) LangType_86)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_93 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LangType_86, (MR_Integer) 0))));

              ForeignTypeName_89 = (MR_String) (Var_93);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_92 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LangType_86, (MR_Integer) 0))));

              ForeignTypeName_89 = (MR_String) (Var_92);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Var_91 = ((MR_Word) ((MR_hl_field(MR_mktag(2), LangType_86, (MR_Integer) 0))));

              ForeignTypeName_89 = (MR_String) (Var_91);
            }
            break;
          case (MR_Integer) 3:
            ForeignTypeName_89 = (MR_String) "";
            break;
        }
        {
          ForeignTypeRepn_71 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ForeignTypeRepn_71, 0) = ((MR_Box) (ForeignTypeName_89));
          MR_hl_field(MR_mktag(0), ForeignTypeRepn_71, 1) = ((MR_Box) (Assertions_88));
        }
        EnumForeignRepn_72 = (MR_Word) ((MR_Word) (ForeignTypeRepn_71));
      }
      {
        MaybeRepnCsharp_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeRepnCsharp_11, 0) = ((MR_Box) (EnumForeignRepn_72));
      }
    }
    parse_tree__decide_type_repn__represent_maybe_foreign_defn_or_enum_2_p_0(MaybeDefnOrEnumErlang_8, &MaybeRepnErlang_12);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      *MaybeRepnCJCsE_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MaybeRepnC_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MaybeRepnJava_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MaybeRepnCsharp_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (MaybeRepnErlang_12));
    }
  }
}

static void MR_CALL 
parse_tree__decide_type_repn__represent_maybe_foreign_defn_or_enum_2_p_0(
  MR_Word MaybeForeignDefnOrEnum_3,
  MR_Word * MaybeEnumForeignRepn_4)
{
  if ((MaybeForeignDefnOrEnum_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *MaybeEnumForeignRepn_4 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word ForeignDefnOrEnum_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeForeignDefnOrEnum_3, (MR_Integer) 0))));
    MR_Word EnumForeignRepn_8;

    if (((MR_tag((MR_Word) ForeignDefnOrEnum_5)) == (MR_Integer) 0))
    {
      MR_Word ForeignEnumInfo_9 = (MR_Word) ((MR_Word) (ForeignDefnOrEnum_5));
      MR_Word ForeignEnumRepn_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignEnumInfo_9, (MR_Integer) 1))));

      {
        EnumForeignRepn_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), EnumForeignRepn_8, 0) = ((MR_Box) (ForeignEnumRepn_10));
      }
    }
    else
    {
      MR_Word TypeDefnInfo_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ForeignDefnOrEnum_5, (MR_Integer) 0))));
      MR_Word ForeignTypeRepn_7;
      MR_Word DetailsForeign_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeDefnInfo_6, (MR_Integer) 2))));
      MR_Word LangType_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign_18, (MR_Integer) 0))));
      MR_Word Assertions_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign_18, (MR_Integer) 2))));
      MR_String ForeignTypeName_25;

      switch (MR_tag((MR_Word) LangType_22)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LangType_22, (MR_Integer) 0))));

            ForeignTypeName_25 = (MR_String) (Var_29);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LangType_22, (MR_Integer) 0))));

            ForeignTypeName_25 = (MR_String) (Var_28);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(2), LangType_22, (MR_Integer) 0))));

            ForeignTypeName_25 = (MR_String) (Var_27);
          }
          break;
        case (MR_Integer) 3:
          ForeignTypeName_25 = (MR_String) "";
          break;
      }
      {
        ForeignTypeRepn_7 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ForeignTypeRepn_7, 0) = ((MR_Box) (ForeignTypeName_25));
        MR_hl_field(MR_mktag(0), ForeignTypeRepn_7, 1) = ((MR_Box) (Assertions_24));
      }
      EnumForeignRepn_8 = (MR_Word) ((MR_Word) (ForeignTypeRepn_7));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeEnumForeignRepn_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (EnumForeignRepn_8));
    }
  }
}

void MR_CALL 
parse_tree__decide_type_repn__decide_repns_for_all_types_for_int1_7_p_0(
  MR_Word Globals_8,
  MR_Word _ModuleName_9,
  MR_Word TypeCtorCheckedMap_10,
  MR_Word DirectSpecMap_11,
  MR_Word IndirectSpecMap_12,
  MR_Word * STATE_VARIABLE_Int1RepnMap_27,
  MR_Word * Specs_14)
{
  parse_tree__decide_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_114_101_112_110_115_95_102_111_114_95_97_108_108_95_116_121_112_101_115_95_102_111_114_95_105_110_116_49_95_95_91_50_93_95_48_7_p_0(Globals_8, TypeCtorCheckedMap_10, DirectSpecMap_11, IndirectSpecMap_12, STATE_VARIABLE_Int1RepnMap_27, Specs_14);
}

static void MR_CALL 
parse_tree__decide_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_114_101_112_110_115_95_102_111_114_95_97_108_108_95_116_121_112_101_115_95_102_111_114_95_105_110_116_49_95_95_91_50_93_95_48_7_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv22_STATE_VARIABLE_Int1RepnMap_47;
    MR_Word conv21_STATE_VARIABLE_Specs_49;

    parse_tree__decide_type_repn__decide_all_type_repns_stage_2_11_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv22_STATE_VARIABLE_Int1RepnMap_47, ((MR_Word) (wrapper_arg_5)), &conv21_STATE_VARIABLE_Specs_49);
    *wrapper_arg_4 = ((MR_Box) (conv22_STATE_VARIABLE_Int1RepnMap_47));
    *wrapper_arg_6 = ((MR_Box) (conv21_STATE_VARIABLE_Specs_49));
  }
}

static void MR_CALL 
parse_tree__decide_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_114_101_112_110_115_95_102_111_114_95_97_108_108_95_116_121_112_101_115_95_102_111_114_95_105_110_116_49_95_95_91_50_93_95_48_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv20_EqvBody_4;

    parse_tree__decide_type_repn__item_type_repn_info_eqv_to_eqv_type_body_2_p_0(((MR_Word) (wrapper_arg_1)), &conv20_EqvBody_4);
    *wrapper_arg_2 = ((MR_Box) (conv20_EqvBody_4));
  }
}

static void MR_CALL 
parse_tree__decide_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_114_101_112_110_115_95_102_111_114_95_97_108_108_95_116_121_112_101_115_95_102_111_114_95_105_110_116_49_95_95_91_50_93_95_48_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8,
  MR_Box wrapper_arg_9,
  MR_Box * wrapper_arg_10)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv15_STATE_VARIABLE_EqvRepnMap_37;
    MR_Word conv14_STATE_VARIABLE_SimpleDuMap_39;
    MR_Word conv13_STATE_VARIABLE_WordAlignedTypeCtorsC_41;
    MR_Word conv12_STATE_VARIABLE_ExportedTypes_43;

    parse_tree__decide_type_repn__decide_simple_type_repns_stage_1_10_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv15_STATE_VARIABLE_EqvRepnMap_37, ((MR_Word) (wrapper_arg_5)), &conv14_STATE_VARIABLE_SimpleDuMap_39, ((MR_Word) (wrapper_arg_7)), &conv13_STATE_VARIABLE_WordAlignedTypeCtorsC_41, ((MR_Word) (wrapper_arg_9)), &conv12_STATE_VARIABLE_ExportedTypes_43);
    *wrapper_arg_4 = ((MR_Box) (conv15_STATE_VARIABLE_EqvRepnMap_37));
    *wrapper_arg_6 = ((MR_Box) (conv14_STATE_VARIABLE_SimpleDuMap_39));
    *wrapper_arg_8 = ((MR_Box) (conv13_STATE_VARIABLE_WordAlignedTypeCtorsC_41));
    *wrapper_arg_10 = ((MR_Box) (conv12_STATE_VARIABLE_ExportedTypes_43));
  }
}

static void MR_CALL 
parse_tree__decide_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_114_101_112_110_115_95_102_111_114_95_97_108_108_95_116_121_112_101_115_95_102_111_114_95_105_110_116_49_95_95_91_50_93_95_48_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv8_STATE_VARIABLE_SimpleDuMap_17;
    MR_Word conv7_STATE_VARIABLE_EqvRepnMap_19;
    MR_Word conv6_STATE_VARIABLE_WordAlignedTypeCtorsC_21;

    parse_tree__decide_type_repn__record_type_repns_in_indirect_int_spec_7_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_STATE_VARIABLE_SimpleDuMap_17, ((MR_Word) (wrapper_arg_4)), &conv7_STATE_VARIABLE_EqvRepnMap_19, ((MR_Word) (wrapper_arg_6)), &conv6_STATE_VARIABLE_WordAlignedTypeCtorsC_21);
    *wrapper_arg_3 = ((MR_Box) (conv8_STATE_VARIABLE_SimpleDuMap_17));
    *wrapper_arg_5 = ((MR_Box) (conv7_STATE_VARIABLE_EqvRepnMap_19));
    *wrapper_arg_7 = ((MR_Box) (conv6_STATE_VARIABLE_WordAlignedTypeCtorsC_21));
  }
}

static void MR_CALL 
parse_tree__decide_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_114_101_112_110_115_95_102_111_114_95_97_108_108_95_116_121_112_101_115_95_102_111_114_95_105_110_116_49_95_95_91_50_93_95_48_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_SimpleDuMap_17;
    MR_Word conv1_STATE_VARIABLE_EqvRepnMap_19;
    MR_Word conv0_STATE_VARIABLE_WordAlignedTypeCtorsC_21;

    parse_tree__decide_type_repn__record_type_repns_in_direct_int_spec_7_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_SimpleDuMap_17, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_EqvRepnMap_19, ((MR_Word) (wrapper_arg_6)), &conv0_STATE_VARIABLE_WordAlignedTypeCtorsC_21);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_SimpleDuMap_17));
    *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_EqvRepnMap_19));
    *wrapper_arg_7 = ((MR_Box) (conv0_STATE_VARIABLE_WordAlignedTypeCtorsC_21));
  }
}

void MR_CALL 
parse_tree__decide_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_114_101_112_110_115_95_102_111_114_95_97_108_108_95_116_121_112_101_115_95_102_111_114_95_105_110_116_49_95_95_91_50_93_95_48_7_p_0(
  MR_Word Globals_8,
  MR_Word TypeCtorCheckedMap_10,
  MR_Word DirectSpecMap_11,
  MR_Word IndirectSpecMap_12,
  MR_Word * STATE_VARIABLE_Int1RepnMap_27,
  MR_Word * Specs_14)
{
  {
    MR_Word EqvRepnMap0_15;
    MR_Word SimpleDuMap0_16;
    MR_Word WordAlignedTypeCtorsC0_17;
    MR_Word EqvRepnMap1_18;
    MR_Word SimpleDuMap1_19;
    MR_Word WordAlignedTypeCtorsC1_20;
    MR_Word EqvRepnMap_21;
    MR_Word SimpleDuMap_22;
    MR_Word WordAlignedTypeCtorsC_23;
    MR_Word BaseParams_25;
    MR_Word EqvMap_26;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_34;
    MR_Word STATE_VARIABLE_Int1RepnMap_35_35;
    MR_Word Var_37;
    MR_Box conv5_EqvRepnMap0_15;
    MR_Box conv4_SimpleDuMap0_16;
    MR_Box conv3_WordAlignedTypeCtorsC0_17;
    MR_Box conv11_EqvRepnMap1_18;
    MR_Box conv10_SimpleDuMap1_19;
    MR_Box conv9_WordAlignedTypeCtorsC1_20;
    MR_Box conv19_EqvRepnMap_21;
    MR_Box conv18_SimpleDuMap_22;
    MR_Box conv17_WordAlignedTypeCtorsC_23;
    MR_Box conv16__ExportedTypes_24;
    MR_Box conv24_STATE_VARIABLE_Int1RepnMap_27;
    MR_Box conv23_Specs_14;

    Var_29 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__decide_type_repn_scalar_common_1[0]));
    Var_30 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_simple_du_repn_0));
    Var_31 = mercury__set_tree234__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
    mercury__map__foldl3_values_8_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_direct_int_spec_0), (MR_Word) (&parse_tree__decide_type_repn_scalar_common_2[0]), (MR_Word) (&parse_tree__decide_type_repn_scalar_common_2[1]), (MR_Word) (&parse_tree__decide_type_repn_scalar_common_1[1]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__decide_type_repn_scalar_common_2[6]), DirectSpecMap_11, ((MR_Box) (Var_29)), &conv5_EqvRepnMap0_15, ((MR_Box) (Var_30)), &conv4_SimpleDuMap0_16, ((MR_Box) (Var_31)), &conv3_WordAlignedTypeCtorsC0_17);
    EqvRepnMap0_15 = ((MR_Word) (conv5_EqvRepnMap0_15));
    SimpleDuMap0_16 = ((MR_Word) (conv4_SimpleDuMap0_16));
    WordAlignedTypeCtorsC0_17 = ((MR_Word) (conv3_WordAlignedTypeCtorsC0_17));
    mercury__map__foldl3_values_8_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_indirect_int_spec_0), (MR_Word) (&parse_tree__decide_type_repn_scalar_common_2[0]), (MR_Word) (&parse_tree__decide_type_repn_scalar_common_2[1]), (MR_Word) (&parse_tree__decide_type_repn_scalar_common_1[1]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__decide_type_repn_scalar_common_2[7]), IndirectSpecMap_12, ((MR_Box) (EqvRepnMap0_15)), &conv11_EqvRepnMap1_18, ((MR_Box) (SimpleDuMap0_16)), &conv10_SimpleDuMap1_19, ((MR_Box) (WordAlignedTypeCtorsC0_17)), &conv9_WordAlignedTypeCtorsC1_20);
    EqvRepnMap1_18 = ((MR_Word) (conv11_EqvRepnMap1_18));
    SimpleDuMap1_19 = ((MR_Word) (conv10_SimpleDuMap1_19));
    WordAlignedTypeCtorsC1_20 = ((MR_Word) (conv9_WordAlignedTypeCtorsC1_20));
    Var_34 = mercury__set_tree234__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
    mercury__map__foldl4_10_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__type_ctor_info_type_ctor_checked_defn_0), (MR_Word) (&parse_tree__decide_type_repn_scalar_common_2[0]), (MR_Word) (&parse_tree__decide_type_repn_scalar_common_2[1]), (MR_Word) (&parse_tree__decide_type_repn_scalar_common_1[1]), (MR_Word) (&parse_tree__decide_type_repn_scalar_common_1[1]), (MR_Word) (&parse_tree__decide_type_repn_scalar_common_2[8]), TypeCtorCheckedMap_10, ((MR_Box) (EqvRepnMap1_18)), &conv19_EqvRepnMap_21, ((MR_Box) (SimpleDuMap1_19)), &conv18_SimpleDuMap_22, ((MR_Box) (WordAlignedTypeCtorsC1_20)), &conv17_WordAlignedTypeCtorsC_23, ((MR_Box) (Var_34)), &conv16__ExportedTypes_24);
    EqvRepnMap_21 = ((MR_Word) (conv19_EqvRepnMap_21));
    SimpleDuMap_22 = ((MR_Word) (conv18_SimpleDuMap_22));
    WordAlignedTypeCtorsC_23 = ((MR_Word) (conv17_WordAlignedTypeCtorsC_23));
    parse_tree__decide_type_repn__setup_base_params_2_p_0(Globals_8, &BaseParams_25);
    mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__decide_type_repn_scalar_common_1[2]), &STATE_VARIABLE_Int1RepnMap_35_35);
    mercury__map__map_values_only_3_p_0((MR_Word) (&parse_tree__decide_type_repn_scalar_common_1[0]), (MR_Word) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_type_body_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__decide_type_repn_scalar_common_2[9]), EqvRepnMap_21, &EqvMap_26);
    {
      Var_37 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_37, 0) = ((MR_Box) (&parse_tree__decide_type_repn_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), Var_37, 1) = ((MR_Box) (parse_tree__decide_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_114_101_112_110_115_95_102_111_114_95_97_108_108_95_116_121_112_101_115_95_102_111_114_95_105_110_116_49_95_95_91_50_93_95_48_7_p_0_5));
      MR_hl_field(MR_mktag(0), Var_37, 2) = ((MR_Box) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(0), Var_37, 3) = ((MR_Box) (BaseParams_25));
      MR_hl_field(MR_mktag(0), Var_37, 4) = ((MR_Box) (EqvRepnMap_21));
      MR_hl_field(MR_mktag(0), Var_37, 5) = ((MR_Box) (EqvMap_26));
      MR_hl_field(MR_mktag(0), Var_37, 6) = ((MR_Box) (WordAlignedTypeCtorsC_23));
      MR_hl_field(MR_mktag(0), Var_37, 7) = ((MR_Box) (SimpleDuMap_22));
    }
    mercury__map__foldl2_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__type_ctor_info_type_ctor_checked_defn_0), (MR_Word) (&parse_tree__decide_type_repn_scalar_common_2[2]), (MR_Word) (&parse_tree__decide_type_repn_scalar_common_1[3]), Var_37, TypeCtorCheckedMap_10, ((MR_Box) (STATE_VARIABLE_Int1RepnMap_35_35)), &conv24_STATE_VARIABLE_Int1RepnMap_27, ((MR_Box) ((MR_Unsigned) 0U)), &conv23_Specs_14);
    *STATE_VARIABLE_Int1RepnMap_27 = ((MR_Word) (conv24_STATE_VARIABLE_Int1RepnMap_27));
    *Specs_14 = ((MR_Word) (conv23_Specs_14));
  }
}

static void MR_CALL 
parse_tree__decide_type_repn__setup_base_params_2_p_0(
  MR_Word Globals_3,
  MR_Word * BaseParams_4)
{
  {
    MR_Word PackEverything_6;
    MR_Word AllowPackingInts_7;
    MR_Word AllowPackingChars_8;
    MR_Word AllowPackingDummies_9;
    MR_Word AllowPackingLocalSegtags_10;
    MR_Word AllowPackingRemoteSegtags_11;

    libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 272, &PackEverything_6);
    switch (PackEverything_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 277, &AllowPackingInts_7);
          libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 278, &AllowPackingChars_8);
          libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 276, &AllowPackingDummies_9);
          libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 279, &AllowPackingLocalSegtags_10);
          libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 280, &AllowPackingRemoteSegtags_11);
        }
        break;
      case (MR_Integer) 1:
        {
          AllowPackingInts_7 = (MR_Integer) 1;
          AllowPackingChars_8 = (MR_Integer) 1;
          AllowPackingDummies_9 = (MR_Integer) 1;
          AllowPackingLocalSegtags_10 = (MR_Integer) 1;
          AllowPackingRemoteSegtags_11 = (MR_Integer) 1;
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *BaseParams_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 5)) | (((((MR_Unsigned) (AllowPackingInts_7) << 4)) | (((((MR_Unsigned) (AllowPackingChars_8) << 3)) | (((((MR_Unsigned) (AllowPackingDummies_9) << 2)) | (((((MR_Unsigned) (AllowPackingLocalSegtags_10) << 1)) | (MR_Unsigned) (AllowPackingRemoteSegtags_11)))))))))));
    }
  }
}

void MR_CALL 
parse_tree__decide_type_repn__decide_repns_for_simple_types_for_int3_3_p_0(
  MR_Word _ModuleName_4,
  MR_Word TypeCtorCheckedMap_5,
  MR_Word * STATE_VARIABLE_Int3RepnMap_15)
{
  parse_tree__decide_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_114_101_112_110_115_95_102_111_114_95_115_105_109_112_108_101_95_116_121_112_101_115_95_102_111_114_95_105_110_116_51_95_95_91_49_93_95_48_3_p_0(TypeCtorCheckedMap_5, STATE_VARIABLE_Int3RepnMap_15);
}

static void MR_CALL 
parse_tree__decide_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_114_101_112_110_115_95_102_111_114_95_115_105_109_112_108_101_95_116_121_112_101_115_95_102_111_114_95_105_110_116_51_95_95_91_49_93_95_48_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv12_STATE_VARIABLE_RepnMap_15;

    parse_tree__decide_type_repn__maybe_add_word_aligned_repn_item_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv12_STATE_VARIABLE_RepnMap_15);
    *wrapper_arg_3 = ((MR_Box) (conv12_STATE_VARIABLE_RepnMap_15));
  }
}

static void MR_CALL 
parse_tree__decide_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_114_101_112_110_115_95_102_111_114_95_115_105_109_112_108_101_95_116_121_112_101_115_95_102_111_114_95_105_110_116_51_95_95_91_49_93_95_48_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv10_STATE_VARIABLE_RepnMap_11;

    parse_tree__decide_type_repn__maybe_add_simple_du_repn_item_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv10_STATE_VARIABLE_RepnMap_11);
    *wrapper_arg_4 = ((MR_Box) (conv10_STATE_VARIABLE_RepnMap_11));
  }
}

static void MR_CALL 
parse_tree__decide_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_114_101_112_110_115_95_102_111_114_95_115_105_109_112_108_101_95_116_121_112_101_115_95_102_111_114_95_105_110_116_51_95_95_91_49_93_95_48_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv8_STATE_VARIABLE_RepnMap_16;

    parse_tree__decide_type_repn__add_eqv_repn_item_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv8_STATE_VARIABLE_RepnMap_16);
    *wrapper_arg_4 = ((MR_Box) (conv8_STATE_VARIABLE_RepnMap_16));
  }
}

static void MR_CALL 
parse_tree__decide_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_114_101_112_110_115_95_102_111_114_95_115_105_109_112_108_101_95_116_121_112_101_115_95_102_111_114_95_105_110_116_51_95_95_91_49_93_95_48_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8,
  MR_Box wrapper_arg_9,
  MR_Box * wrapper_arg_10)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_STATE_VARIABLE_EqvRepnMap_37;
    MR_Word conv2_STATE_VARIABLE_SimpleDuMap_39;
    MR_Word conv1_STATE_VARIABLE_WordAlignedTypeCtorsC_41;
    MR_Word conv0_STATE_VARIABLE_ExportedTypes_43;

    parse_tree__decide_type_repn__decide_simple_type_repns_stage_1_10_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv3_STATE_VARIABLE_EqvRepnMap_37, ((MR_Word) (wrapper_arg_5)), &conv2_STATE_VARIABLE_SimpleDuMap_39, ((MR_Word) (wrapper_arg_7)), &conv1_STATE_VARIABLE_WordAlignedTypeCtorsC_41, ((MR_Word) (wrapper_arg_9)), &conv0_STATE_VARIABLE_ExportedTypes_43);
    *wrapper_arg_4 = ((MR_Box) (conv3_STATE_VARIABLE_EqvRepnMap_37));
    *wrapper_arg_6 = ((MR_Box) (conv2_STATE_VARIABLE_SimpleDuMap_39));
    *wrapper_arg_8 = ((MR_Box) (conv1_STATE_VARIABLE_WordAlignedTypeCtorsC_41));
    *wrapper_arg_10 = ((MR_Box) (conv0_STATE_VARIABLE_ExportedTypes_43));
  }
}

void MR_CALL 
parse_tree__decide_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_114_101_112_110_115_95_102_111_114_95_115_105_109_112_108_101_95_116_121_112_101_115_95_102_111_114_95_105_110_116_51_95_95_91_49_93_95_48_3_p_0(
  MR_Word TypeCtorCheckedMap_5,
  MR_Word * STATE_VARIABLE_Int3RepnMap_15)
{
  {
    MR_Word EqvRepnMap0_7;
    MR_Word SimpleDuMap0_8;
    MR_Word WordAlignedTypeCtorsC0_9;
    MR_Word ExportedTypes0_10;
    MR_Word EqvRepnMap_11;
    MR_Word SimpleDuMap_12;
    MR_Word WordAlignedTypeCtorsC_13;
    MR_Word ExportedTypes_14;
    MR_Word STATE_VARIABLE_Int3RepnMap_17_17;
    MR_Word STATE_VARIABLE_Int3RepnMap_19_19;
    MR_Word Var_20;
    MR_Word STATE_VARIABLE_Int3RepnMap_21_21;
    MR_Word Var_22;
    MR_Box conv7_EqvRepnMap_11;
    MR_Box conv6_SimpleDuMap_12;
    MR_Box conv5_WordAlignedTypeCtorsC_13;
    MR_Box conv4_ExportedTypes_14;
    MR_Box conv9_STATE_VARIABLE_Int3RepnMap_19_19;
    MR_Box conv11_STATE_VARIABLE_Int3RepnMap_21_21;
    MR_Box conv13_STATE_VARIABLE_Int3RepnMap_15;

    mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__decide_type_repn_scalar_common_1[0]), &EqvRepnMap0_7);
    mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_simple_du_repn_0), &SimpleDuMap0_8);
    WordAlignedTypeCtorsC0_9 = mercury__set_tree234__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
    ExportedTypes0_10 = mercury__set_tree234__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
    mercury__map__foldl4_10_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__type_ctor_info_type_ctor_checked_defn_0), (MR_Word) (&parse_tree__decide_type_repn_scalar_common_2[0]), (MR_Word) (&parse_tree__decide_type_repn_scalar_common_2[1]), (MR_Word) (&parse_tree__decide_type_repn_scalar_common_1[1]), (MR_Word) (&parse_tree__decide_type_repn_scalar_common_1[1]), (MR_Word) (&parse_tree__decide_type_repn_scalar_common_2[4]), TypeCtorCheckedMap_5, ((MR_Box) (EqvRepnMap0_7)), &conv7_EqvRepnMap_11, ((MR_Box) (SimpleDuMap0_8)), &conv6_SimpleDuMap_12, ((MR_Box) (WordAlignedTypeCtorsC0_9)), &conv5_WordAlignedTypeCtorsC_13, ((MR_Box) (ExportedTypes0_10)), &conv4_ExportedTypes_14);
    EqvRepnMap_11 = ((MR_Word) (conv7_EqvRepnMap_11));
    SimpleDuMap_12 = ((MR_Word) (conv6_SimpleDuMap_12));
    WordAlignedTypeCtorsC_13 = ((MR_Word) (conv5_WordAlignedTypeCtorsC_13));
    ExportedTypes_14 = ((MR_Word) (conv4_ExportedTypes_14));
    mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__decide_type_repn_scalar_common_1[2]), &STATE_VARIABLE_Int3RepnMap_17_17);
    mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__decide_type_repn_scalar_common_1[0]), (MR_Word) (&parse_tree__decide_type_repn_scalar_common_2[2]), (MR_Word) (&parse_tree__decide_type_repn_scalar_common_2[5]), EqvRepnMap_11, ((MR_Box) (STATE_VARIABLE_Int3RepnMap_17_17)), &conv9_STATE_VARIABLE_Int3RepnMap_19_19);
    STATE_VARIABLE_Int3RepnMap_19_19 = ((MR_Word) (conv9_STATE_VARIABLE_Int3RepnMap_19_19));
    {
      Var_20 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (&parse_tree__decide_type_repn_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) (parse_tree__decide_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_114_101_112_110_115_95_102_111_114_95_115_105_109_112_108_101_95_116_121_112_101_115_95_102_111_114_95_105_110_116_51_95_95_91_49_93_95_48_3_p_0_3));
      MR_hl_field(MR_mktag(0), Var_20, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_20, 3) = ((MR_Box) (ExportedTypes_14));
    }
    mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_simple_du_repn_0), (MR_Word) (&parse_tree__decide_type_repn_scalar_common_2[2]), Var_20, SimpleDuMap_12, ((MR_Box) (STATE_VARIABLE_Int3RepnMap_19_19)), &conv11_STATE_VARIABLE_Int3RepnMap_21_21);
    STATE_VARIABLE_Int3RepnMap_21_21 = ((MR_Word) (conv11_STATE_VARIABLE_Int3RepnMap_21_21));
    {
      Var_22 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (&parse_tree__decide_type_repn_scalar_common_4[1]));
      MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) (parse_tree__decide_type_repn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_114_101_112_110_115_95_102_111_114_95_115_105_109_112_108_101_95_116_121_112_101_115_95_102_111_114_95_105_110_116_51_95_95_91_49_93_95_48_3_p_0_4));
      MR_hl_field(MR_mktag(0), Var_22, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_22, 3) = ((MR_Box) (ExportedTypes_14));
    }
    mercury__set_tree234__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__decide_type_repn_scalar_common_2[2]), Var_22, WordAlignedTypeCtorsC_13, ((MR_Box) (STATE_VARIABLE_Int3RepnMap_21_21)), &conv13_STATE_VARIABLE_Int3RepnMap_15);
    *STATE_VARIABLE_Int3RepnMap_15 = ((MR_Word) (conv13_STATE_VARIABLE_Int3RepnMap_15));
  }
}

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____arg_class_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__decide_type_repn____Unify____arg_class_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__decide_type_repn____Compare____arg_class_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__decide_type_repn____Compare____arg_class_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____arg_pack_class_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__decide_type_repn____Unify____arg_pack_class_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__decide_type_repn____Compare____arg_pack_class_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__decide_type_repn____Compare____arg_pack_class_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____base_params_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__decide_type_repn____Unify____base_params_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__decide_type_repn____Compare____base_params_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__decide_type_repn____Compare____base_params_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____classified_arg_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__decide_type_repn____Unify____classified_arg_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__decide_type_repn____Compare____classified_arg_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__decide_type_repn____Compare____classified_arg_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____classified_constructor_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__decide_type_repn____Unify____classified_constructor_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__decide_type_repn____Compare____classified_constructor_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__decide_type_repn____Compare____classified_constructor_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____ctor_repn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__decide_type_repn____Unify____ctor_repn_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__decide_type_repn____Compare____ctor_repn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__decide_type_repn____Compare____ctor_repn_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____ctor_repn_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__decide_type_repn____Unify____ctor_repn_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__decide_type_repn____Compare____ctor_repn_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__decide_type_repn____Compare____ctor_repn_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____eqv_repn_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__decide_type_repn____Unify____eqv_repn_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__decide_type_repn____Compare____eqv_repn_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__decide_type_repn____Compare____eqv_repn_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____maybe_direct_args_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__decide_type_repn____Unify____maybe_direct_args_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__decide_type_repn____Compare____maybe_direct_args_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__decide_type_repn____Compare____maybe_direct_args_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____maybe_double_word_floats_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__decide_type_repn____Unify____maybe_double_word_floats_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__decide_type_repn____Compare____maybe_double_word_floats_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__decide_type_repn____Compare____maybe_double_word_floats_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____maybe_double_word_int64s_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__decide_type_repn____Unify____maybe_double_word_int64s_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__decide_type_repn____Compare____maybe_double_word_int64s_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__decide_type_repn____Compare____maybe_double_word_int64s_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____maybe_treat_as_first_arg_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__decide_type_repn____Unify____maybe_treat_as_first_arg_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__decide_type_repn____Compare____maybe_treat_as_first_arg_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__decide_type_repn____Compare____maybe_treat_as_first_arg_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____must_mask_remote_sectag_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__decide_type_repn____Unify____must_mask_remote_sectag_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__decide_type_repn____Compare____must_mask_remote_sectag_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__decide_type_repn____Compare____must_mask_remote_sectag_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____packable_arg_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__decide_type_repn____Unify____packable_arg_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__decide_type_repn____Compare____packable_arg_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__decide_type_repn____Compare____packable_arg_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____packable_constructor_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__decide_type_repn____Unify____packable_constructor_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__decide_type_repn____Compare____packable_constructor_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__decide_type_repn____Compare____packable_constructor_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____platform_params_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__decide_type_repn____Unify____platform_params_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__decide_type_repn____Compare____platform_params_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__decide_type_repn____Compare____platform_params_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____remote_shared_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__decide_type_repn____Unify____remote_shared_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__decide_type_repn____Compare____remote_shared_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__decide_type_repn____Compare____remote_shared_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____simple_du_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__decide_type_repn____Unify____simple_du_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__decide_type_repn____Compare____simple_du_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__decide_type_repn____Compare____simple_du_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____simple_du_repn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__decide_type_repn____Unify____simple_du_repn_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__decide_type_repn____Compare____simple_du_repn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__decide_type_repn____Compare____simple_du_repn_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____word_aligned_type_ctors_c_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__decide_type_repn____Unify____word_aligned_type_ctors_c_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__decide_type_repn____Compare____word_aligned_type_ctors_c_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__decide_type_repn____Compare____word_aligned_type_ctors_c_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____word_size_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__decide_type_repn____Unify____word_size_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__decide_type_repn____Compare____word_size_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__decide_type_repn____Compare____word_size_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__parse_tree__decide_type_repn__init(void)
{
}

void mercury__parse_tree__decide_type_repn__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_arg_class_0);
	MR_register_type_ctor_info(&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_arg_pack_class_0);
	MR_register_type_ctor_info(&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_base_params_0);
	MR_register_type_ctor_info(&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_classified_arg_0);
	MR_register_type_ctor_info(&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_classified_constructor_0);
	MR_register_type_ctor_info(&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_ctor_repn_0);
	MR_register_type_ctor_info(&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_ctor_repn_map_0);
	MR_register_type_ctor_info(&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_eqv_repn_map_0);
	MR_register_type_ctor_info(&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_maybe_direct_args_0);
	MR_register_type_ctor_info(&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_maybe_double_word_floats_0);
	MR_register_type_ctor_info(&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_maybe_double_word_int64s_0);
	MR_register_type_ctor_info(&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_maybe_treat_as_first_arg_0);
	MR_register_type_ctor_info(&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_must_mask_remote_sectag_0);
	MR_register_type_ctor_info(&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_packable_arg_0);
	MR_register_type_ctor_info(&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_packable_constructor_0);
	MR_register_type_ctor_info(&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_platform_params_0);
	MR_register_type_ctor_info(&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_remote_shared_info_0);
	MR_register_type_ctor_info(&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_simple_du_map_0);
	MR_register_type_ctor_info(&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_simple_du_repn_0);
	MR_register_type_ctor_info(&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_word_aligned_type_ctors_c_0);
	MR_register_type_ctor_info(&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_word_size_0);
}

void mercury__parse_tree__decide_type_repn__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__decide_type_repn__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module parse_tree.decide_type_repn.
