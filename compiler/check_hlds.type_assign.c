/*
** Automatically generated from `type_assign.m'
** by the Mercury compiler,
** version rotd-2026-08-22
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


// :- module check_hlds.type_assign.
// :- implementation.

/*
INIT mercury__check_hlds__type_assign__init
ENDINIT
*/

#include "check_hlds.type_assign.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "cord.mih"
#include "enum.mih"
#include "hlds.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "multi_map.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "term.mih"
#include "term_context.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"
#include "varset.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.pred_proc_id.mih"
#include "hlds.status.mih"
#include "hlds.type_rename.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type_scan.mih"
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.vartypes.mih"




static const MR_FA_TypeInfo_Struct1 check_hlds__type_assign__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__type_assign__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__type_assign__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__type_assign__tree234__pti_tree234_2__plain_hlds__hlds_class__type_ctor_info_constraint_id_0__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__type_assign__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__type_assign__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__type_assign__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__type_assign__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_PseudoTypeInfo check_hlds__type_assign__check_hlds__type_assign__field_types_args_type_assign_0_0[4];

static const MR_ConstString check_hlds__type_assign__check_hlds__type_assign__field_names_args_type_assign_0_0[4];

static const MR_DuFunctorDesc check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_args_type_assign_0_0;

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_args_type_assign_0_0[1];

static const MR_DuPtagLayout check_hlds__type_assign__check_hlds__type_assign__du_ptag_ordered_args_type_assign_0[1];

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_name_ordered_args_type_assign_0[1];

static const MR_Integer check_hlds__type_assign__check_hlds__type_assign__functor_number_map_args_type_assign_0[1];

static const MR_FA_TypeInfo_Struct1 check_hlds__type_assign__list__ti_list_1check_hlds__type_assign__type_ctor_info_args_type_assign_0;

static const MR_PseudoTypeInfo check_hlds__type_assign__check_hlds__type_assign__field_types_args_type_assign_source_0_0[1];

static const MR_DuFunctorDesc check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_args_type_assign_source_0_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__type_assign__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo check_hlds__type_assign__check_hlds__type_assign__field_types_args_type_assign_source_0_1[1];

static const MR_DuFunctorDesc check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_args_type_assign_source_0_1;

static const MR_PseudoTypeInfo check_hlds__type_assign__check_hlds__type_assign__field_types_args_type_assign_source_0_2[1];

static const MR_DuFunctorDesc check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_args_type_assign_source_0_2;

static const MR_DuFunctorDesc check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_args_type_assign_source_0_3;

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_args_type_assign_source_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_args_type_assign_source_0_1[1];

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_args_type_assign_source_0_2[1];

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_args_type_assign_source_0_3[1];

static const MR_DuPtagLayout check_hlds__type_assign__check_hlds__type_assign__du_ptag_ordered_args_type_assign_source_0[4];

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_name_ordered_args_type_assign_source_0[4];

static const MR_Integer check_hlds__type_assign__check_hlds__type_assign__functor_number_map_args_type_assign_source_0[4];

static const MR_FA_TypeInfo_Struct1 check_hlds__type_assign__list__ti_list_1check_hlds__type_assign__type_ctor_info_coerce_fail_0;

static const MR_PseudoTypeInfo check_hlds__type_assign__check_hlds__type_assign__field_types_coerce_constraint_0_0[6];

static const MR_ConstString check_hlds__type_assign__check_hlds__type_assign__field_names_coerce_constraint_0_0[6];

static const MR_DuArgLocn check_hlds__type_assign__check_hlds__type_assign__field_locns_coerce_constraint_0_0[6];

static const MR_DuFunctorDesc check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_coerce_constraint_0_0;

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_coerce_constraint_0_0[1];

static const MR_DuPtagLayout check_hlds__type_assign__check_hlds__type_assign__du_ptag_ordered_coerce_constraint_0[1];

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_name_ordered_coerce_constraint_0[1];

static const MR_Integer check_hlds__type_assign__check_hlds__type_assign__functor_number_map_coerce_constraint_0[1];

static const MR_EnumFunctorDesc check_hlds__type_assign__check_hlds__type_assign__enum_functor_desc_coerce_constraint_status_0_0;

static const MR_EnumFunctorDesc check_hlds__type_assign__check_hlds__type_assign__enum_functor_desc_coerce_constraint_status_0_1;

static const MR_EnumFunctorDesc check_hlds__type_assign__check_hlds__type_assign__enum_functor_desc_coerce_constraint_status_0_2;

static const MR_EnumFunctorDesc check_hlds__type_assign__check_hlds__type_assign__enum_functor_desc_coerce_constraint_status_0_3;

static const MR_EnumFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__enum_ordinal_ordered_coerce_constraint_status_0[4];

static const MR_EnumFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__enum_name_ordered_coerce_constraint_status_0[4];

static const MR_Integer check_hlds__type_assign__check_hlds__type_assign__functor_number_map_coerce_constraint_status_0[4];

static const MR_PseudoTypeInfo check_hlds__type_assign__check_hlds__type_assign__field_types_coerce_fail_0_0[4];

static const MR_ConstString check_hlds__type_assign__check_hlds__type_assign__field_names_coerce_fail_0_0[4];

static const MR_DuFunctorDesc check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_coerce_fail_0_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__type_assign__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_PseudoTypeInfo check_hlds__type_assign__check_hlds__type_assign__field_types_coerce_fail_0_1[3];

static const MR_ConstString check_hlds__type_assign__check_hlds__type_assign__field_names_coerce_fail_0_1[3];

static const MR_DuFunctorDesc check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_coerce_fail_0_1;

static const MR_FA_TypeInfo_Struct2 check_hlds__type_assign__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__type_assign__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

static const MR_PseudoTypeInfo check_hlds__type_assign__check_hlds__type_assign__field_types_coerce_fail_0_2[3];

static const MR_ConstString check_hlds__type_assign__check_hlds__type_assign__field_names_coerce_fail_0_2[3];

static const MR_DuFunctorDesc check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_coerce_fail_0_2;

static const MR_PseudoTypeInfo check_hlds__type_assign__check_hlds__type_assign__field_types_coerce_fail_0_3[2];

static const MR_ConstString check_hlds__type_assign__check_hlds__type_assign__field_names_coerce_fail_0_3[2];

static const MR_DuFunctorDesc check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_coerce_fail_0_3;

static const MR_PseudoTypeInfo check_hlds__type_assign__check_hlds__type_assign__field_types_coerce_fail_0_4[2];

static const MR_ConstString check_hlds__type_assign__check_hlds__type_assign__field_names_coerce_fail_0_4[2];

static const MR_DuFunctorDesc check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_coerce_fail_0_4;

static const MR_PseudoTypeInfo check_hlds__type_assign__check_hlds__type_assign__field_types_coerce_fail_0_5[4];

static const MR_ConstString check_hlds__type_assign__check_hlds__type_assign__field_names_coerce_fail_0_5[4];

static const MR_DuFunctorDesc check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_coerce_fail_0_5;

static const MR_PseudoTypeInfo check_hlds__type_assign__check_hlds__type_assign__field_types_coerce_fail_0_6[2];

static const MR_ConstString check_hlds__type_assign__check_hlds__type_assign__field_names_coerce_fail_0_6[2];

static const MR_DuFunctorDesc check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_coerce_fail_0_6;

static const MR_PseudoTypeInfo check_hlds__type_assign__check_hlds__type_assign__field_types_coerce_fail_0_7[4];

static const MR_ConstString check_hlds__type_assign__check_hlds__type_assign__field_names_coerce_fail_0_7[4];

static const MR_DuFunctorDesc check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_coerce_fail_0_7;

static const MR_PseudoTypeInfo check_hlds__type_assign__check_hlds__type_assign__field_types_coerce_fail_0_8[5];

static const MR_ConstString check_hlds__type_assign__check_hlds__type_assign__field_names_coerce_fail_0_8[5];

static const MR_DuFunctorDesc check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_coerce_fail_0_8;

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_coerce_fail_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_coerce_fail_0_1[1];

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_coerce_fail_0_2[1];

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_coerce_fail_0_3[6];

static const MR_DuPtagLayout check_hlds__type_assign__check_hlds__type_assign__du_ptag_ordered_coerce_fail_0[4];

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_name_ordered_coerce_fail_0[9];

static const MR_Integer check_hlds__type_assign__check_hlds__type_assign__functor_number_map_coerce_fail_0[9];

static const MR_FA_TypeInfo_Struct1 check_hlds__type_assign__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_PseudoTypeInfo check_hlds__type_assign__check_hlds__type_assign__field_types_cons_type_info_0_0[6];

static const MR_ConstString check_hlds__type_assign__check_hlds__type_assign__field_names_cons_type_info_0_0[6];

static const MR_DuFunctorDesc check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_cons_type_info_0_0;

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_cons_type_info_0_0[1];

static const MR_DuPtagLayout check_hlds__type_assign__check_hlds__type_assign__du_ptag_ordered_cons_type_info_0[1];

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_name_ordered_cons_type_info_0[1];

static const MR_Integer check_hlds__type_assign__check_hlds__type_assign__functor_number_map_cons_type_info_0[1];

static const MR_PseudoTypeInfo check_hlds__type_assign__check_hlds__type_assign__field_types_cons_type_info_source_0_0[2];

static const MR_DuFunctorDesc check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_cons_type_info_source_0_0;

static const MR_PseudoTypeInfo check_hlds__type_assign__check_hlds__type_assign__field_types_cons_type_info_source_0_1[1];

static const MR_DuFunctorDesc check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_cons_type_info_source_0_1;

static const MR_PseudoTypeInfo check_hlds__type_assign__check_hlds__type_assign__field_types_cons_type_info_source_0_2[4];

static const MR_DuArgLocn check_hlds__type_assign__check_hlds__type_assign__field_locns_cons_type_info_source_0_2[4];

static const MR_DuFunctorDesc check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_cons_type_info_source_0_2;

static const MR_PseudoTypeInfo check_hlds__type_assign__check_hlds__type_assign__field_types_cons_type_info_source_0_3[1];

static const MR_DuFunctorDesc check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_cons_type_info_source_0_3;

static const MR_PseudoTypeInfo check_hlds__type_assign__check_hlds__type_assign__field_types_cons_type_info_source_0_4[1];

static const MR_DuFunctorDesc check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_cons_type_info_source_0_4;

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_cons_type_info_source_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_cons_type_info_source_0_1[1];

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_cons_type_info_source_0_2[1];

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_cons_type_info_source_0_3[2];

static const MR_DuPtagLayout check_hlds__type_assign__check_hlds__type_assign__du_ptag_ordered_cons_type_info_source_0[4];

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_name_ordered_cons_type_info_source_0[5];

static const MR_Integer check_hlds__type_assign__check_hlds__type_assign__functor_number_map_cons_type_info_source_0[5];

static const MR_PseudoTypeInfo check_hlds__type_assign__check_hlds__type_assign__field_types_ctor_arg_posn_0_0[3];

static const MR_DuFunctorDesc check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_ctor_arg_posn_0_0;

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_ctor_arg_posn_0_0[1];

static const MR_DuPtagLayout check_hlds__type_assign__check_hlds__type_assign__du_ptag_ordered_ctor_arg_posn_0[1];

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_name_ordered_ctor_arg_posn_0[1];

static const MR_Integer check_hlds__type_assign__check_hlds__type_assign__functor_number_map_ctor_arg_posn_0[1];

static const MR_PseudoTypeInfo check_hlds__type_assign__check_hlds__type_assign__field_types_du_or_tuple_cons_id_0_0[1];

static const MR_DuFunctorDesc check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_du_or_tuple_cons_id_0_0;

static const MR_PseudoTypeInfo check_hlds__type_assign__check_hlds__type_assign__field_types_du_or_tuple_cons_id_0_1[1];

static const MR_DuFunctorDesc check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_du_or_tuple_cons_id_0_1;

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_du_or_tuple_cons_id_0_1[1];

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_du_or_tuple_cons_id_0_3[1];

static const MR_DuPtagLayout check_hlds__type_assign__check_hlds__type_assign__du_ptag_ordered_du_or_tuple_cons_id_0[2];

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_name_ordered_du_or_tuple_cons_id_0[2];

static const MR_Integer check_hlds__type_assign__check_hlds__type_assign__functor_number_map_du_or_tuple_cons_id_0[2];

static const MR_FA_TypeInfo_Struct1 check_hlds__type_assign__one_or_more__ti_one_or_more_1check_hlds__type_assign__type_ctor_info_ctor_arg_posn_0;

static const MR_PseudoTypeInfo check_hlds__type_assign__check_hlds__type_assign__field_types_invariant_reason_0_0[1];

static const MR_DuFunctorDesc check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_invariant_reason_0_0;

static const MR_DuFunctorDesc check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_invariant_reason_0_1;

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_invariant_reason_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_invariant_reason_0_1[1];

static const MR_DuPtagLayout check_hlds__type_assign__check_hlds__type_assign__du_ptag_ordered_invariant_reason_0[2];

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_name_ordered_invariant_reason_0[2];

static const MR_Integer check_hlds__type_assign__check_hlds__type_assign__functor_number_map_invariant_reason_0[2];

static const MR_PseudoTypeInfo check_hlds__type_assign__check_hlds__type_assign__field_types_posn_invariant_reason_0_0[2];

static const MR_DuFunctorDesc check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_posn_invariant_reason_0_0;

static const MR_DuFunctorDesc check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_posn_invariant_reason_0_1;

static const MR_DuFunctorDesc check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_posn_invariant_reason_0_2;

static const MR_DuFunctorDesc check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_posn_invariant_reason_0_3;

static const MR_DuFunctorDesc check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_posn_invariant_reason_0_4;

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_posn_invariant_reason_0_0[4];

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_posn_invariant_reason_0_1[1];

static const MR_DuPtagLayout check_hlds__type_assign__check_hlds__type_assign__du_ptag_ordered_posn_invariant_reason_0[2];

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_name_ordered_posn_invariant_reason_0[5];

static const MR_Integer check_hlds__type_assign__check_hlds__type_assign__functor_number_map_posn_invariant_reason_0[5];

static const MR_FA_TypeInfo_Struct2 check_hlds__type_assign__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__type_assign__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__type_assign__list__ti_list_1check_hlds__type_assign__type_ctor_info_coerce_constraint_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__type_assign__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_prog_constraint_0hlds__hlds_class__type_ctor_info_constraint_proof_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__type_assign__tree234__ti_tree234_2hlds__hlds_class__type_ctor_info_constraint_id_0parse_tree__prog_data__type_ctor_info_prog_constraint_0;

static const MR_PseudoTypeInfo check_hlds__type_assign__check_hlds__type_assign__field_types_type_assign_0_0[8];

static const MR_ConstString check_hlds__type_assign__check_hlds__type_assign__field_names_type_assign_0_0[8];

static const MR_DuFunctorDesc check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_type_assign_0_0;

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_type_assign_0_0[1];

static const MR_DuPtagLayout check_hlds__type_assign__check_hlds__type_assign__du_ptag_ordered_type_assign_0[1];

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_name_ordered_type_assign_0[1];

static const MR_Integer check_hlds__type_assign__check_hlds__type_assign__functor_number_map_type_assign_0[1];

static const MR_FA_TypeInfo_Struct1 check_hlds__type_assign__list__ti_list_1check_hlds__type_assign__type_ctor_info_type_assign_0;

static void MR_CALL 
check_hlds__type_assign__get_existq_tvar_renaming_2_5_p_0(
  MR_Word OldExternalTypeParams_6,
  MR_Word TypeBindings_7,
  MR_Word TVar_8,
  MR_Word STATE_VARIABLE_Renaming_0_11,
  MR_Word * STATE_VARIABLE_Renaming_12);

static MR_bool MR_CALL 
check_hlds__type_assign__tvar_maps_to_tvar_3_p_0(
  MR_Word TypeBindings_4,
  MR_Word TVar0_5,
  MR_Word * TVar_6);

static void MR_CALL 
check_hlds__type_assign__expand_types_5_p_0(
  MR_Word TypeSubst_6,
  MR_Word Type0_7,
  MR_Word * Type_8,
  MR_Word STATE_VARIABLE_TypeVarsSet_0_11,
  MR_Word * STATE_VARIABLE_TypeVarsSet_12);

static void MR_CALL 
check_hlds__type_assign__type_assign_set_get_final_info_12_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__type_assign__type_assign_set_get_final_info_12_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__type_assign__type_assign_set_get_final_info_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__type_assign__type_assign_set_get_final_info_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_bool MR_CALL 
check_hlds__type_assign____Unify____args_type_assign_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__type_assign____Compare____args_type_assign_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__type_assign____Unify____args_type_assign_set_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__type_assign____Compare____args_type_assign_set_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__type_assign____Unify____args_type_assign_source_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__type_assign____Compare____args_type_assign_source_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__type_assign____Unify____coerce_constraint_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__type_assign____Compare____coerce_constraint_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__type_assign____Unify____coerce_constraint_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__type_assign____Compare____coerce_constraint_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__type_assign____Unify____coerce_fail_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__type_assign____Compare____coerce_fail_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__type_assign____Unify____cons_type_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__type_assign____Compare____cons_type_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__type_assign____Unify____cons_type_info_source_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__type_assign____Compare____cons_type_info_source_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__type_assign____Unify____ctor_arg_posn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__type_assign____Compare____ctor_arg_posn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__type_assign____Unify____du_or_tuple_cons_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__type_assign____Compare____du_or_tuple_cons_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__type_assign____Unify____invariant_reason_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__type_assign____Compare____invariant_reason_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__type_assign____Unify____posn_invariant_reason_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__type_assign____Compare____posn_invariant_reason_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__type_assign____Unify____type_assign_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__type_assign____Compare____type_assign_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__type_assign____Unify____type_assign_set_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__type_assign____Compare____type_assign_set_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__type_assign_scalar_common_1[11][2];

static /* final */ const MR_Box check_hlds__type_assign_scalar_common_2[6][3];

static /* final */ const MR_Box check_hlds__type_assign_scalar_common_3[2][8];

static /* final */ const MR_Box check_hlds__type_assign_scalar_common_4[1][6];




static /* final */ const MR_Box check_hlds__type_assign_scalar_common_1[11][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&check_hlds__type_assign_scalar_common_1[0]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_args_type_assign_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_coerce_fail_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__type_assign_scalar_common_1[0]))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   8 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_ctor_arg_posn_0))
  },
  /* row   9 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_coerce_constraint_0))
  },
  /* row  10 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0))
  },
};

static /* final */ const MR_Box check_hlds__type_assign_scalar_common_2[6][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_id_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__type_assign_scalar_common_1[0])),
    ((MR_Box) (&check_hlds__type_assign_scalar_common_1[0]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__type_assign_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&check_hlds__type_assign_scalar_common_4[0])),
    ((MR_Box) (check_hlds__type_assign__type_assign_set_get_final_info_12_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&check_hlds__type_assign_scalar_common_4[0])),
    ((MR_Box) (check_hlds__type_assign__type_assign_set_get_final_info_12_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__type_assign_scalar_common_3[2][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&check_hlds__type_assign__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__type_assign__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__type_assign__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&check_hlds__type_assign__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__type_assign__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__type_assign__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__type_assign__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__type_assign__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
};

static /* final */ const MR_Box check_hlds__type_assign_scalar_common_4[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0)),
    ((MR_Box) (&check_hlds__type_assign__tree234__pti_tree234_2__plain_hlds__hlds_class__type_ctor_info_constraint_id_0__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&check_hlds__type_assign__tree234__pti_tree234_2__plain_hlds__hlds_class__type_ctor_info_constraint_id_0__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
};



#include "array.mh"


static const MR_FA_TypeInfo_Struct1 check_hlds__type_assign__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__type_assign__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&check_hlds__type_assign__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__type_assign__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&check_hlds__type_assign__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__type_assign__tree234__pti_tree234_2__plain_hlds__hlds_class__type_ctor_info_constraint_id_0__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_id_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__type_assign__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&check_hlds__type_assign__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__type_assign__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__type_assign__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&check_hlds__type_assign__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
    (MR_PseudoTypeInfo) (&check_hlds__type_assign__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__type_assign__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0) }
};

static const MR_PseudoTypeInfo check_hlds__type_assign__check_hlds__type_assign__field_types_args_type_assign_0_0[4] = {
  (MR_PseudoTypeInfo) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0),
  (MR_PseudoTypeInfo) (&check_hlds__type_assign__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_db_0),
  (MR_PseudoTypeInfo) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_args_type_assign_source_0)
};

static const MR_ConstString check_hlds__type_assign__check_hlds__type_assign__field_names_args_type_assign_0_0[4] = {
  (MR_String) "ata_caller_arg_assign",
  (MR_String) "ata_expected_arg_types",
  (MR_String) "ata_expected_constraints",
  (MR_String) "ata_source"
};

static const MR_DuFunctorDesc check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_args_type_assign_0_0 = {
  (MR_String) "args_type_assign",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__type_assign__check_hlds__type_assign__field_types_args_type_assign_0_0,
  check_hlds__type_assign__check_hlds__type_assign__field_names_args_type_assign_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_args_type_assign_0_0[1] = { &check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_args_type_assign_0_0 };

static const MR_DuPtagLayout check_hlds__type_assign__check_hlds__type_assign__du_ptag_ordered_args_type_assign_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_args_type_assign_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_name_ordered_args_type_assign_0[1] = { &check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_args_type_assign_0_0 };

static const MR_Integer check_hlds__type_assign__check_hlds__type_assign__functor_number_map_args_type_assign_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_args_type_assign_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__type_assign____Unify____args_type_assign_0_0_10001)),
  ((MR_Box) (check_hlds__type_assign____Compare____args_type_assign_0_0_10001)),
  (MR_String) "check_hlds.type_assign",
  (MR_String) "args_type_assign",
  { check_hlds__type_assign__check_hlds__type_assign__du_name_ordered_args_type_assign_0 },
  { check_hlds__type_assign__check_hlds__type_assign__du_ptag_ordered_args_type_assign_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__type_assign__check_hlds__type_assign__functor_number_map_args_type_assign_0,

};

static const MR_FA_TypeInfo_Struct1 check_hlds__type_assign__list__ti_list_1check_hlds__type_assign__type_ctor_info_args_type_assign_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_args_type_assign_0) }
};

const MR_TypeCtorInfo_Struct check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_args_type_assign_set_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__type_assign____Unify____args_type_assign_set_0_0_10001)),
  ((MR_Box) (check_hlds__type_assign____Compare____args_type_assign_set_0_0_10001)),
  (MR_String) "check_hlds.type_assign",
  (MR_String) "args_type_assign_set",
  { NULL },
  { (MR_PseudoTypeInfo) (&check_hlds__type_assign__list__ti_list_1check_hlds__type_assign__type_ctor_info_args_type_assign_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo check_hlds__type_assign__check_hlds__type_assign__field_types_args_type_assign_source_0_0[1] = { (MR_PseudoTypeInfo) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_pred_id_0) };

static const MR_DuFunctorDesc check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_args_type_assign_source_0_0 = {
  (MR_String) "atas_pred",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__type_assign__check_hlds__type_assign__field_types_args_type_assign_source_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 check_hlds__type_assign__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_PseudoTypeInfo check_hlds__type_assign__check_hlds__type_assign__field_types_args_type_assign_source_0_1[1] = { (MR_PseudoTypeInfo) (&check_hlds__type_assign__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) };

static const MR_DuFunctorDesc check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_args_type_assign_source_0_1 = {
  (MR_String) "atas_higher_order_call",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(1),
  check_hlds__type_assign__check_hlds__type_assign__field_types_args_type_assign_source_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__type_assign__check_hlds__type_assign__field_types_args_type_assign_source_0_2[1] = { (MR_PseudoTypeInfo) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_cons_type_info_source_0) };

static const MR_DuFunctorDesc check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_args_type_assign_source_0_2 = {
  (MR_String) "atas_cons",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(3),
  (MR_Integer) -1,
  INT32_C(2),
  check_hlds__type_assign__check_hlds__type_assign__field_types_args_type_assign_source_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_args_type_assign_source_0_3 = {
  (MR_String) "atas_ensure_have_a_type",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(3),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_args_type_assign_source_0_0[1] = { &check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_args_type_assign_source_0_3 };

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_args_type_assign_source_0_1[1] = { &check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_args_type_assign_source_0_0 };

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_args_type_assign_source_0_2[1] = { &check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_args_type_assign_source_0_1 };

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_args_type_assign_source_0_3[1] = { &check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_args_type_assign_source_0_2 };

static const MR_DuPtagLayout check_hlds__type_assign__check_hlds__type_assign__du_ptag_ordered_args_type_assign_source_0[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_args_type_assign_source_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_args_type_assign_source_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_args_type_assign_source_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_args_type_assign_source_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_name_ordered_args_type_assign_source_0[4] = {
  &check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_args_type_assign_source_0_2,
  &check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_args_type_assign_source_0_3,
  &check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_args_type_assign_source_0_1,
  &check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_args_type_assign_source_0_0
};

static const MR_Integer check_hlds__type_assign__check_hlds__type_assign__functor_number_map_args_type_assign_source_0[4] = {
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_args_type_assign_source_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__type_assign____Unify____args_type_assign_source_0_0_10001)),
  ((MR_Box) (check_hlds__type_assign____Compare____args_type_assign_source_0_0_10001)),
  (MR_String) "check_hlds.type_assign",
  (MR_String) "args_type_assign_source",
  { check_hlds__type_assign__check_hlds__type_assign__du_name_ordered_args_type_assign_source_0 },
  { check_hlds__type_assign__check_hlds__type_assign__du_ptag_ordered_args_type_assign_source_0 },
  (MR_Integer) 4,
  UINT16_C(12),
  check_hlds__type_assign__check_hlds__type_assign__functor_number_map_args_type_assign_source_0,

};

static const MR_FA_TypeInfo_Struct1 check_hlds__type_assign__list__ti_list_1check_hlds__type_assign__type_ctor_info_coerce_fail_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_coerce_fail_0) }
};

static const MR_PseudoTypeInfo check_hlds__type_assign__check_hlds__type_assign__field_types_coerce_constraint_0_0[6] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&check_hlds__type_assign__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_coerce_constraint_status_0),
  (MR_PseudoTypeInfo) (&check_hlds__type_assign__list__ti_list_1check_hlds__type_assign__type_ctor_info_coerce_fail_0)
};

static const MR_ConstString check_hlds__type_assign__check_hlds__type_assign__field_names_coerce_constraint_0_0[6] = {
  (MR_String) "coerce_from",
  (MR_String) "coerce_to",
  (MR_String) "coerce_context",
  (MR_String) "coerce_var",
  (MR_String) "coerce_status",
  (MR_String) "coerce_fails"
};

static const MR_DuArgLocn check_hlds__type_assign__check_hlds__type_assign__field_locns_coerce_constraint_0_0[6] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 5,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_coerce_constraint_0_0 = {
  (MR_String) "coerce_constraint",
  INT16_C(6),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__type_assign__check_hlds__type_assign__field_types_coerce_constraint_0_0,
  check_hlds__type_assign__check_hlds__type_assign__field_names_coerce_constraint_0_0,
  check_hlds__type_assign__check_hlds__type_assign__field_locns_coerce_constraint_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_coerce_constraint_0_0[1] = { &check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_coerce_constraint_0_0 };

static const MR_DuPtagLayout check_hlds__type_assign__check_hlds__type_assign__du_ptag_ordered_coerce_constraint_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_coerce_constraint_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_name_ordered_coerce_constraint_0[1] = { &check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_coerce_constraint_0_0 };

static const MR_Integer check_hlds__type_assign__check_hlds__type_assign__functor_number_map_coerce_constraint_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_coerce_constraint_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__type_assign____Unify____coerce_constraint_0_0_10001)),
  ((MR_Box) (check_hlds__type_assign____Compare____coerce_constraint_0_0_10001)),
  (MR_String) "check_hlds.type_assign",
  (MR_String) "coerce_constraint",
  { check_hlds__type_assign__check_hlds__type_assign__du_name_ordered_coerce_constraint_0 },
  { check_hlds__type_assign__check_hlds__type_assign__du_ptag_ordered_coerce_constraint_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__type_assign__check_hlds__type_assign__functor_number_map_coerce_constraint_0,

};

static const MR_EnumFunctorDesc check_hlds__type_assign__check_hlds__type_assign__enum_functor_desc_coerce_constraint_status_0_0 = {
  (MR_String) "need_to_check",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__type_assign__check_hlds__type_assign__enum_functor_desc_coerce_constraint_status_0_1 = {
  (MR_String) "unsatisfiable",
  INT32_C(1)
};

static const MR_EnumFunctorDesc check_hlds__type_assign__check_hlds__type_assign__enum_functor_desc_coerce_constraint_status_0_2 = {
  (MR_String) "not_yet_resolved",
  INT32_C(2)
};

static const MR_EnumFunctorDesc check_hlds__type_assign__check_hlds__type_assign__enum_functor_desc_coerce_constraint_status_0_3 = {
  (MR_String) "satisfied_but_redundant",
  INT32_C(3)
};

static const MR_EnumFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__enum_ordinal_ordered_coerce_constraint_status_0[4] = {
  &check_hlds__type_assign__check_hlds__type_assign__enum_functor_desc_coerce_constraint_status_0_0,
  &check_hlds__type_assign__check_hlds__type_assign__enum_functor_desc_coerce_constraint_status_0_1,
  &check_hlds__type_assign__check_hlds__type_assign__enum_functor_desc_coerce_constraint_status_0_2,
  &check_hlds__type_assign__check_hlds__type_assign__enum_functor_desc_coerce_constraint_status_0_3
};

static const MR_EnumFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__enum_name_ordered_coerce_constraint_status_0[4] = {
  &check_hlds__type_assign__check_hlds__type_assign__enum_functor_desc_coerce_constraint_status_0_0,
  &check_hlds__type_assign__check_hlds__type_assign__enum_functor_desc_coerce_constraint_status_0_2,
  &check_hlds__type_assign__check_hlds__type_assign__enum_functor_desc_coerce_constraint_status_0_3,
  &check_hlds__type_assign__check_hlds__type_assign__enum_functor_desc_coerce_constraint_status_0_1
};

static const MR_Integer check_hlds__type_assign__check_hlds__type_assign__functor_number_map_coerce_constraint_status_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_coerce_constraint_status_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__type_assign____Unify____coerce_constraint_status_0_0_10001)),
  ((MR_Box) (check_hlds__type_assign____Compare____coerce_constraint_status_0_0_10001)),
  (MR_String) "check_hlds.type_assign",
  (MR_String) "coerce_constraint_status",
  { check_hlds__type_assign__check_hlds__type_assign__enum_name_ordered_coerce_constraint_status_0 },
  { check_hlds__type_assign__check_hlds__type_assign__enum_ordinal_ordered_coerce_constraint_status_0 },
  (MR_Integer) 4,
  UINT16_C(12),
  check_hlds__type_assign__check_hlds__type_assign__functor_number_map_coerce_constraint_status_0,

};

static const MR_PseudoTypeInfo check_hlds__type_assign__check_hlds__type_assign__field_types_coerce_fail_0_0[4] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)
};

static const MR_ConstString check_hlds__type_assign__check_hlds__type_assign__field_names_coerce_fail_0_0[4] = {
  (MR_String) "dbt_from_type",
  (MR_String) "dbt_from_base_type_ctor",
  (MR_String) "dbt_to_type",
  (MR_String) "dbt_to_base_type_ctor"
};

static const MR_DuFunctorDesc check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_coerce_fail_0_0 = {
  (MR_String) "different_base_types",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__type_assign__check_hlds__type_assign__field_types_coerce_fail_0_0,
  check_hlds__type_assign__check_hlds__type_assign__field_names_coerce_fail_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 check_hlds__type_assign__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&check_hlds__type_assign__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_PseudoTypeInfo check_hlds__type_assign__check_hlds__type_assign__field_types_coerce_fail_0_1[3] = {
  (MR_PseudoTypeInfo) (&check_hlds__type_assign__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
};

static const MR_ConstString check_hlds__type_assign__check_hlds__type_assign__field_names_coerce_fail_0_1[3] = {
  (MR_String) "existq_tvars",
  (MR_String) "ngt_from_type",
  (MR_String) "ngt_to_type"
};

static const MR_DuFunctorDesc check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_coerce_fail_0_1 = {
  (MR_String) "nonground_type",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  check_hlds__type_assign__check_hlds__type_assign__field_types_coerce_fail_0_1,
  check_hlds__type_assign__check_hlds__type_assign__field_names_coerce_fail_0_1,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct2 check_hlds__type_assign__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_TypeInfo) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0)
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__type_assign__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_TypeInfo) (&check_hlds__type_assign__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0)
  }
};

static const MR_PseudoTypeInfo check_hlds__type_assign__check_hlds__type_assign__field_types_coerce_fail_0_2[3] = {
  (MR_PseudoTypeInfo) (&check_hlds__type_assign__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
};

static const MR_ConstString check_hlds__type_assign__check_hlds__type_assign__field_names_coerce_fail_0_2[3] = {
  (MR_String) "dtc_type_table",
  (MR_String) "dtc_type_a",
  (MR_String) "dtc_type_b"
};

static const MR_DuFunctorDesc check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_coerce_fail_0_2 = {
  (MR_String) "different_type_categories",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  check_hlds__type_assign__check_hlds__type_assign__field_types_coerce_fail_0_2,
  check_hlds__type_assign__check_hlds__type_assign__field_names_coerce_fail_0_2,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__type_assign__check_hlds__type_assign__field_types_coerce_fail_0_3[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_builtin_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_builtin_type_0)
};

static const MR_ConstString check_hlds__type_assign__check_hlds__type_assign__field_names_coerce_fail_0_3[2] = {
  (MR_String) "dbit_type_a",
  (MR_String) "dbti_type_b"
};

static const MR_DuFunctorDesc check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_coerce_fail_0_3 = {
  (MR_String) "different_builtin_types",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(3),
  check_hlds__type_assign__check_hlds__type_assign__field_types_coerce_fail_0_3,
  check_hlds__type_assign__check_hlds__type_assign__field_names_coerce_fail_0_3,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__type_assign__check_hlds__type_assign__field_types_coerce_fail_0_4[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_ConstString check_hlds__type_assign__check_hlds__type_assign__field_names_coerce_fail_0_4[2] = {
  (MR_String) "dta_type_a",
  (MR_String) "dta_type_b"
};

static const MR_DuFunctorDesc check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_coerce_fail_0_4 = {
  (MR_String) "different_tuple_arities",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(4),
  check_hlds__type_assign__check_hlds__type_assign__field_types_coerce_fail_0_4,
  check_hlds__type_assign__check_hlds__type_assign__field_names_coerce_fail_0_4,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__type_assign__check_hlds__type_assign__field_types_coerce_fail_0_5[4] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
};

static const MR_ConstString check_hlds__type_assign__check_hlds__type_assign__field_names_coerce_fail_0_5[4] = {
  (MR_String) "ncbt_base_tc",
  (MR_String) "ncbt_base_tc_arg_num",
  (MR_String) "ncbt_type_a",
  (MR_String) "ncbt_type_b"
};

static const MR_DuFunctorDesc check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_coerce_fail_0_5 = {
  (MR_String) "no_common_base_type",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 2,
  INT32_C(5),
  check_hlds__type_assign__check_hlds__type_assign__field_types_coerce_fail_0_5,
  check_hlds__type_assign__check_hlds__type_assign__field_names_coerce_fail_0_5,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__type_assign__check_hlds__type_assign__field_types_coerce_fail_0_6[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
};

static const MR_ConstString check_hlds__type_assign__check_hlds__type_assign__field_names_coerce_fail_0_6[2] = {
  (MR_String) "cutv_type_a",
  (MR_String) "cutv_type_b"
};

static const MR_DuFunctorDesc check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_coerce_fail_0_6 = {
  (MR_String) "cannot_unify_type_vars",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 3,
  INT32_C(6),
  check_hlds__type_assign__check_hlds__type_assign__field_types_coerce_fail_0_6,
  check_hlds__type_assign__check_hlds__type_assign__field_names_coerce_fail_0_6,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__type_assign__check_hlds__type_assign__field_types_coerce_fail_0_7[4] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_ConstString check_hlds__type_assign__check_hlds__type_assign__field_names_coerce_fail_0_7[4] = {
  (MR_String) "ndtc_from_type",
  (MR_String) "ndtc_from_type_desc",
  (MR_String) "ndtc_to_type",
  (MR_String) "ndtc_to_type_desc"
};

static const MR_DuFunctorDesc check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_coerce_fail_0_7 = {
  (MR_String) "non_du_type_ctor",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 4,
  INT32_C(7),
  check_hlds__type_assign__check_hlds__type_assign__field_types_coerce_fail_0_7,
  check_hlds__type_assign__check_hlds__type_assign__field_names_coerce_fail_0_7,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__type_assign__check_hlds__type_assign__field_types_coerce_fail_0_8[5] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0),
  (MR_PseudoTypeInfo) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_invariant_reason_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
};

static const MR_ConstString check_hlds__type_assign__check_hlds__type_assign__field_names_coerce_fail_0_8[5] = {
  (MR_String) "sbia_base_tc",
  (MR_String) "sbia_base_tc_arg_num",
  (MR_String) "sbia_reason",
  (MR_String) "sbia_type_a",
  (MR_String) "sbia_type_b"
};

static const MR_DuFunctorDesc check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_coerce_fail_0_8 = {
  (MR_String) "should_be_invariant_arg",
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 5,
  INT32_C(8),
  check_hlds__type_assign__check_hlds__type_assign__field_types_coerce_fail_0_8,
  check_hlds__type_assign__check_hlds__type_assign__field_names_coerce_fail_0_8,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_coerce_fail_0_0[1] = { &check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_coerce_fail_0_0 };

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_coerce_fail_0_1[1] = { &check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_coerce_fail_0_1 };

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_coerce_fail_0_2[1] = { &check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_coerce_fail_0_2 };

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_coerce_fail_0_3[6] = {
  &check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_coerce_fail_0_3,
  &check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_coerce_fail_0_4,
  &check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_coerce_fail_0_5,
  &check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_coerce_fail_0_6,
  &check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_coerce_fail_0_7,
  &check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_coerce_fail_0_8
};

static const MR_DuPtagLayout check_hlds__type_assign__check_hlds__type_assign__du_ptag_ordered_coerce_fail_0[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_coerce_fail_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_coerce_fail_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_coerce_fail_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(6),
    MR_SECTAG_REMOTE_FULL_WORD,
    check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_coerce_fail_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_name_ordered_coerce_fail_0[9] = {
  &check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_coerce_fail_0_6,
  &check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_coerce_fail_0_0,
  &check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_coerce_fail_0_3,
  &check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_coerce_fail_0_4,
  &check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_coerce_fail_0_2,
  &check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_coerce_fail_0_5,
  &check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_coerce_fail_0_7,
  &check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_coerce_fail_0_1,
  &check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_coerce_fail_0_8
};

static const MR_Integer check_hlds__type_assign__check_hlds__type_assign__functor_number_map_coerce_fail_0[9] = {
  (MR_Integer) 1,
  (MR_Integer) 7,
  (MR_Integer) 4,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 5,
  (MR_Integer) 0,
  (MR_Integer) 6,
  (MR_Integer) 8
};

const MR_TypeCtorInfo_Struct check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_coerce_fail_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__type_assign____Unify____coerce_fail_0_0_10001)),
  ((MR_Box) (check_hlds__type_assign____Compare____coerce_fail_0_0_10001)),
  (MR_String) "check_hlds.type_assign",
  (MR_String) "coerce_fail",
  { check_hlds__type_assign__check_hlds__type_assign__du_name_ordered_coerce_fail_0 },
  { check_hlds__type_assign__check_hlds__type_assign__du_ptag_ordered_coerce_fail_0 },
  (MR_Integer) 9,
  UINT16_C(12),
  check_hlds__type_assign__check_hlds__type_assign__functor_number_map_coerce_fail_0,

};

static const MR_FA_TypeInfo_Struct1 check_hlds__type_assign__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_PseudoTypeInfo check_hlds__type_assign__check_hlds__type_assign__field_types_cons_type_info_0_0[6] = {
  (MR_PseudoTypeInfo) (&check_hlds__type_assign__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__type_assign__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__type_assign__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_db_0),
  (MR_PseudoTypeInfo) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_cons_type_info_source_0)
};

static const MR_ConstString check_hlds__type_assign__check_hlds__type_assign__field_names_cons_type_info_0_0[6] = {
  (MR_String) "cti_varset",
  (MR_String) "cti_existq_tvars",
  (MR_String) "cti_result_type",
  (MR_String) "cti_arg_types",
  (MR_String) "cti_constraints",
  (MR_String) "cti_source"
};

static const MR_DuFunctorDesc check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_cons_type_info_0_0 = {
  (MR_String) "cons_type_info",
  INT16_C(6),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__type_assign__check_hlds__type_assign__field_types_cons_type_info_0_0,
  check_hlds__type_assign__check_hlds__type_assign__field_names_cons_type_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_cons_type_info_0_0[1] = { &check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_cons_type_info_0_0 };

static const MR_DuPtagLayout check_hlds__type_assign__check_hlds__type_assign__du_ptag_ordered_cons_type_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_cons_type_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_name_ordered_cons_type_info_0[1] = { &check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_cons_type_info_0_0 };

static const MR_Integer check_hlds__type_assign__check_hlds__type_assign__functor_number_map_cons_type_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_cons_type_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__type_assign____Unify____cons_type_info_0_0_10001)),
  ((MR_Box) (check_hlds__type_assign____Compare____cons_type_info_0_0_10001)),
  (MR_String) "check_hlds.type_assign",
  (MR_String) "cons_type_info",
  { check_hlds__type_assign__check_hlds__type_assign__du_name_ordered_cons_type_info_0 },
  { check_hlds__type_assign__check_hlds__type_assign__du_ptag_ordered_cons_type_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__type_assign__check_hlds__type_assign__functor_number_map_cons_type_info_0,

};

static const MR_PseudoTypeInfo check_hlds__type_assign__check_hlds__type_assign__field_types_cons_type_info_source_0_0[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_du_ctor_0)
};

static const MR_DuFunctorDesc check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_cons_type_info_source_0_0 = {
  (MR_String) "source_type",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__type_assign__check_hlds__type_assign__field_types_cons_type_info_source_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__type_assign__check_hlds__type_assign__field_types_cons_type_info_source_0_1[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

static const MR_DuFunctorDesc check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_cons_type_info_source_0_1 = {
  (MR_String) "source_builtin_type",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  check_hlds__type_assign__check_hlds__type_assign__field_types_cons_type_info_source_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__type_assign__check_hlds__type_assign__field_types_cons_type_info_source_0_2[4] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_field_access_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_du_ctor_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuArgLocn check_hlds__type_assign__check_hlds__type_assign__field_locns_cons_type_info_source_0_2[4] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_cons_type_info_source_0_2 = {
  (MR_String) "source_field_access",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  check_hlds__type_assign__check_hlds__type_assign__field_types_cons_type_info_source_0_2,
  NULL,
  check_hlds__type_assign__check_hlds__type_assign__field_locns_cons_type_info_source_0_2,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__type_assign__check_hlds__type_assign__field_types_cons_type_info_source_0_3[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

static const MR_DuFunctorDesc check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_cons_type_info_source_0_3 = {
  (MR_String) "source_apply",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(3),
  check_hlds__type_assign__check_hlds__type_assign__field_types_cons_type_info_source_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__type_assign__check_hlds__type_assign__field_types_cons_type_info_source_0_4[1] = { (MR_PseudoTypeInfo) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_pred_id_0) };

static const MR_DuFunctorDesc check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_cons_type_info_source_0_4 = {
  (MR_String) "source_pred",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(4),
  check_hlds__type_assign__check_hlds__type_assign__field_types_cons_type_info_source_0_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_cons_type_info_source_0_0[1] = { &check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_cons_type_info_source_0_0 };

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_cons_type_info_source_0_1[1] = { &check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_cons_type_info_source_0_1 };

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_cons_type_info_source_0_2[1] = { &check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_cons_type_info_source_0_2 };

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_cons_type_info_source_0_3[2] = {
  &check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_cons_type_info_source_0_3,
  &check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_cons_type_info_source_0_4
};

static const MR_DuPtagLayout check_hlds__type_assign__check_hlds__type_assign__du_ptag_ordered_cons_type_info_source_0[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_cons_type_info_source_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_cons_type_info_source_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_cons_type_info_source_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(2),
    MR_SECTAG_REMOTE_FULL_WORD,
    check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_cons_type_info_source_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_name_ordered_cons_type_info_source_0[5] = {
  &check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_cons_type_info_source_0_3,
  &check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_cons_type_info_source_0_1,
  &check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_cons_type_info_source_0_2,
  &check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_cons_type_info_source_0_4,
  &check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_cons_type_info_source_0_0
};

static const MR_Integer check_hlds__type_assign__check_hlds__type_assign__functor_number_map_cons_type_info_source_0[5] = {
  (MR_Integer) 4,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 3
};

const MR_TypeCtorInfo_Struct check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_cons_type_info_source_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__type_assign____Unify____cons_type_info_source_0_0_10001)),
  ((MR_Box) (check_hlds__type_assign____Compare____cons_type_info_source_0_0_10001)),
  (MR_String) "check_hlds.type_assign",
  (MR_String) "cons_type_info_source",
  { check_hlds__type_assign__check_hlds__type_assign__du_name_ordered_cons_type_info_source_0 },
  { check_hlds__type_assign__check_hlds__type_assign__du_ptag_ordered_cons_type_info_source_0 },
  (MR_Integer) 5,
  UINT16_C(12),
  check_hlds__type_assign__check_hlds__type_assign__functor_number_map_cons_type_info_source_0,

};

static const MR_PseudoTypeInfo check_hlds__type_assign__check_hlds__type_assign__field_types_ctor_arg_posn_0_0[3] = {
  (MR_PseudoTypeInfo) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_du_or_tuple_cons_id_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0),
  (MR_PseudoTypeInfo) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_posn_invariant_reason_0)
};

static const MR_DuFunctorDesc check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_ctor_arg_posn_0_0 = {
  (MR_String) "ctor_arg_posn",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__type_assign__check_hlds__type_assign__field_types_ctor_arg_posn_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_ctor_arg_posn_0_0[1] = { &check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_ctor_arg_posn_0_0 };

static const MR_DuPtagLayout check_hlds__type_assign__check_hlds__type_assign__du_ptag_ordered_ctor_arg_posn_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_ctor_arg_posn_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_name_ordered_ctor_arg_posn_0[1] = { &check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_ctor_arg_posn_0_0 };

static const MR_Integer check_hlds__type_assign__check_hlds__type_assign__functor_number_map_ctor_arg_posn_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_ctor_arg_posn_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__type_assign____Unify____ctor_arg_posn_0_0_10001)),
  ((MR_Box) (check_hlds__type_assign____Compare____ctor_arg_posn_0_0_10001)),
  (MR_String) "check_hlds.type_assign",
  (MR_String) "ctor_arg_posn",
  { check_hlds__type_assign__check_hlds__type_assign__du_name_ordered_ctor_arg_posn_0 },
  { check_hlds__type_assign__check_hlds__type_assign__du_ptag_ordered_ctor_arg_posn_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__type_assign__check_hlds__type_assign__functor_number_map_ctor_arg_posn_0,

};

static const MR_PseudoTypeInfo check_hlds__type_assign__check_hlds__type_assign__field_types_du_or_tuple_cons_id_0_0[1] = { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_du_ctor_0) };

static const MR_DuFunctorDesc check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_du_or_tuple_cons_id_0_0 = {
  (MR_String) "du_data_ctor",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE_DIRECT_ARG,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__type_assign__check_hlds__type_assign__field_types_du_or_tuple_cons_id_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__type_assign__check_hlds__type_assign__field_types_du_or_tuple_cons_id_0_1[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) };

static const MR_DuFunctorDesc check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_du_or_tuple_cons_id_0_1 = {
  (MR_String) "tuple_cons",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 4,
  INT32_C(1),
  check_hlds__type_assign__check_hlds__type_assign__field_types_du_or_tuple_cons_id_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_du_or_tuple_cons_id_0_1[1] = { &check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_du_or_tuple_cons_id_0_0 };

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_du_or_tuple_cons_id_0_3[1] = { &check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_du_or_tuple_cons_id_0_1 };

static const MR_DuPtagLayout check_hlds__type_assign__check_hlds__type_assign__du_ptag_ordered_du_or_tuple_cons_id_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE_DIRECT_ARG,
    check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_du_or_tuple_cons_id_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_REMOTE_FULL_WORD,
    check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_du_or_tuple_cons_id_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(0)
  }
};

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_name_ordered_du_or_tuple_cons_id_0[2] = {
  &check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_du_or_tuple_cons_id_0_0,
  &check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_du_or_tuple_cons_id_0_1
};

static const MR_Integer check_hlds__type_assign__check_hlds__type_assign__functor_number_map_du_or_tuple_cons_id_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_du_or_tuple_cons_id_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__type_assign____Unify____du_or_tuple_cons_id_0_0_10001)),
  ((MR_Box) (check_hlds__type_assign____Compare____du_or_tuple_cons_id_0_0_10001)),
  (MR_String) "check_hlds.type_assign",
  (MR_String) "du_or_tuple_cons_id",
  { check_hlds__type_assign__check_hlds__type_assign__du_name_ordered_du_or_tuple_cons_id_0 },
  { check_hlds__type_assign__check_hlds__type_assign__du_ptag_ordered_du_or_tuple_cons_id_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  check_hlds__type_assign__check_hlds__type_assign__functor_number_map_du_or_tuple_cons_id_0,

};

static const MR_FA_TypeInfo_Struct1 check_hlds__type_assign__one_or_more__ti_one_or_more_1check_hlds__type_assign__type_ctor_info_ctor_arg_posn_0 = {
  &mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1,
  { (MR_TypeInfo) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_ctor_arg_posn_0) }
};

static const MR_PseudoTypeInfo check_hlds__type_assign__check_hlds__type_assign__field_types_invariant_reason_0_0[1] = { (MR_PseudoTypeInfo) (&check_hlds__type_assign__one_or_more__ti_one_or_more_1check_hlds__type_assign__type_ctor_info_ctor_arg_posn_0) };

static const MR_DuFunctorDesc check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_invariant_reason_0_0 = {
  (MR_String) "ir_base_type_ctor",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__type_assign__check_hlds__type_assign__field_types_invariant_reason_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_invariant_reason_0_1 = {
  (MR_String) "ir_higher_order",
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

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_invariant_reason_0_0[1] = { &check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_invariant_reason_0_1 };

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_invariant_reason_0_1[1] = { &check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_invariant_reason_0_0 };

static const MR_DuPtagLayout check_hlds__type_assign__check_hlds__type_assign__du_ptag_ordered_invariant_reason_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_invariant_reason_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_invariant_reason_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_name_ordered_invariant_reason_0[2] = {
  &check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_invariant_reason_0_0,
  &check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_invariant_reason_0_1
};

static const MR_Integer check_hlds__type_assign__check_hlds__type_assign__functor_number_map_invariant_reason_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_invariant_reason_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__type_assign____Unify____invariant_reason_0_0_10001)),
  ((MR_Box) (check_hlds__type_assign____Compare____invariant_reason_0_0_10001)),
  (MR_String) "check_hlds.type_assign",
  (MR_String) "invariant_reason",
  { check_hlds__type_assign__check_hlds__type_assign__du_name_ordered_invariant_reason_0 },
  { check_hlds__type_assign__check_hlds__type_assign__du_ptag_ordered_invariant_reason_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__type_assign__check_hlds__type_assign__functor_number_map_invariant_reason_0,

};

static const MR_PseudoTypeInfo check_hlds__type_assign__check_hlds__type_assign__field_types_posn_invariant_reason_0_0[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)
};

static const MR_DuFunctorDesc check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_posn_invariant_reason_0_0 = {
  (MR_String) "pir_du_nonrec",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__type_assign__check_hlds__type_assign__field_types_posn_invariant_reason_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_posn_invariant_reason_0_1 = {
  (MR_String) "pir_foreign",
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

static const MR_DuFunctorDesc check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_posn_invariant_reason_0_2 = {
  (MR_String) "pir_solver",
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

static const MR_DuFunctorDesc check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_posn_invariant_reason_0_3 = {
  (MR_String) "pir_abstract",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 2,
  INT32_C(3),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_posn_invariant_reason_0_4 = {
  (MR_String) "pir_higher_order",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 3,
  INT32_C(4),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_posn_invariant_reason_0_0[4] = {
  &check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_posn_invariant_reason_0_1,
  &check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_posn_invariant_reason_0_2,
  &check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_posn_invariant_reason_0_3,
  &check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_posn_invariant_reason_0_4
};

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_posn_invariant_reason_0_1[1] = { &check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_posn_invariant_reason_0_0 };

static const MR_DuPtagLayout check_hlds__type_assign__check_hlds__type_assign__du_ptag_ordered_posn_invariant_reason_0[2] = {
  {
    UINT32_C(4),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_posn_invariant_reason_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_posn_invariant_reason_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_name_ordered_posn_invariant_reason_0[5] = {
  &check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_posn_invariant_reason_0_3,
  &check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_posn_invariant_reason_0_0,
  &check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_posn_invariant_reason_0_1,
  &check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_posn_invariant_reason_0_4,
  &check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_posn_invariant_reason_0_2
};

static const MR_Integer check_hlds__type_assign__check_hlds__type_assign__functor_number_map_posn_invariant_reason_0[5] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 4,
  (MR_Integer) 0,
  (MR_Integer) 3
};

const MR_TypeCtorInfo_Struct check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_posn_invariant_reason_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__type_assign____Unify____posn_invariant_reason_0_0_10001)),
  ((MR_Box) (check_hlds__type_assign____Compare____posn_invariant_reason_0_0_10001)),
  (MR_String) "check_hlds.type_assign",
  (MR_String) "posn_invariant_reason",
  { check_hlds__type_assign__check_hlds__type_assign__du_name_ordered_posn_invariant_reason_0 },
  { check_hlds__type_assign__check_hlds__type_assign__du_ptag_ordered_posn_invariant_reason_0 },
  (MR_Integer) 5,
  UINT16_C(12),
  check_hlds__type_assign__check_hlds__type_assign__functor_number_map_posn_invariant_reason_0,

};

static const MR_FA_TypeInfo_Struct2 check_hlds__type_assign__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&check_hlds__type_assign__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__type_assign__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&check_hlds__type_assign__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__type_assign__list__ti_list_1check_hlds__type_assign__type_ctor_info_coerce_constraint_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_coerce_constraint_0) }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__type_assign__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_prog_constraint_0hlds__hlds_class__type_ctor_info_constraint_proof_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0),
    (MR_TypeInfo) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0)
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__type_assign__tree234__ti_tree234_2hlds__hlds_class__type_ctor_info_constraint_id_0parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_id_0),
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)
  }
};

static const MR_PseudoTypeInfo check_hlds__type_assign__check_hlds__type_assign__field_types_type_assign_0_0[8] = {
  (MR_PseudoTypeInfo) (&check_hlds__type_assign__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__type_assign__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__type_assign__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__type_assign__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__type_assign__list__ti_list_1check_hlds__type_assign__type_ctor_info_coerce_constraint_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_db_0),
  (MR_PseudoTypeInfo) (&check_hlds__type_assign__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_prog_constraint_0hlds__hlds_class__type_ctor_info_constraint_proof_0),
  (MR_PseudoTypeInfo) (&check_hlds__type_assign__tree234__ti_tree234_2hlds__hlds_class__type_ctor_info_constraint_id_0parse_tree__prog_data__type_ctor_info_prog_constraint_0)
};

static const MR_ConstString check_hlds__type_assign__check_hlds__type_assign__field_names_type_assign_0_0[8] = {
  (MR_String) "ta_var_types",
  (MR_String) "ta_type_varset",
  (MR_String) "ta_existq_tvars",
  (MR_String) "ta_type_bindings",
  (MR_String) "ta_coerce_constraints",
  (MR_String) "ta_class_constraints",
  (MR_String) "ta_constraint_proof_map",
  (MR_String) "ta_constraint_map"
};

static const MR_DuFunctorDesc check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_type_assign_0_0 = {
  (MR_String) "type_assign",
  INT16_C(8),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__type_assign__check_hlds__type_assign__field_types_type_assign_0_0,
  check_hlds__type_assign__check_hlds__type_assign__field_names_type_assign_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_type_assign_0_0[1] = { &check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_type_assign_0_0 };

static const MR_DuPtagLayout check_hlds__type_assign__check_hlds__type_assign__du_ptag_ordered_type_assign_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_type_assign_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_name_ordered_type_assign_0[1] = { &check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_type_assign_0_0 };

static const MR_Integer check_hlds__type_assign__check_hlds__type_assign__functor_number_map_type_assign_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__type_assign____Unify____type_assign_0_0_10001)),
  ((MR_Box) (check_hlds__type_assign____Compare____type_assign_0_0_10001)),
  (MR_String) "check_hlds.type_assign",
  (MR_String) "type_assign",
  { check_hlds__type_assign__check_hlds__type_assign__du_name_ordered_type_assign_0 },
  { check_hlds__type_assign__check_hlds__type_assign__du_ptag_ordered_type_assign_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__type_assign__check_hlds__type_assign__functor_number_map_type_assign_0,

};

static const MR_FA_TypeInfo_Struct1 check_hlds__type_assign__list__ti_list_1check_hlds__type_assign__type_ctor_info_type_assign_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0) }
};

const MR_TypeCtorInfo_Struct check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_set_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__type_assign____Unify____type_assign_set_0_0_10001)),
  ((MR_Box) (check_hlds__type_assign____Compare____type_assign_set_0_0_10001)),
  (MR_String) "check_hlds.type_assign",
  (MR_String) "type_assign_set",
  { NULL },
  { (MR_PseudoTypeInfo) (&check_hlds__type_assign__list__ti_list_1check_hlds__type_assign__type_ctor_info_type_assign_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

void MR_CALL 
check_hlds__type_assign____Compare____type_assign_set_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__type_assign_scalar_common_1[10]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
check_hlds__type_assign____Unify____type_assign_set_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__type_assign_scalar_common_1[10]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
check_hlds__type_assign____Compare____du_or_tuple_cons_id_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = (MR_Word) (HeadVar__2_2);
  MR_Word Cast_HeadVar2_5 = (MR_Word) (HeadVar__3_3);

  parse_tree__prog_data____Compare____cons_id_0_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
}

MR_bool MR_CALL 
check_hlds__type_assign____Unify____du_or_tuple_cons_id_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = (MR_Word) (HeadVar__1_1);
  MR_Word Cast_HeadVar2_4 = (MR_Word) (HeadVar__2_2);

  succeeded = parse_tree__prog_data____Unify____cons_id_0_0(Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
check_hlds__type_assign____Compare____ctor_arg_posn_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Unsigned ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Unsigned ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word SubResult1_6;
    MR_Word Cast_HeadVar1_17 = (MR_Word) (ArgX1_4);
    MR_Word Cast_HeadVar2_18 = (MR_Word) (ArgY1_5);

    parse_tree__prog_data____Compare____cons_id_0_0(&SubResult1_6, Cast_HeadVar1_17, Cast_HeadVar2_18);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
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
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
        check_hlds__type_assign____Compare____posn_invariant_reason_0_0(HeadVar__1_1, ArgX3_10, ArgY3_11);
    }
  }
}

void MR_CALL 
check_hlds__type_assign____Compare____posn_invariant_reason_0_0(
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
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
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
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
            }
            break;
          case (MR_Integer) 2:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
            }
            break;
          case (MR_Integer) 3:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
              MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
              MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
              MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
              MR_Word SubResult1_6;

              parse_tree__prog_data____Compare____type_ctor_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
              succeeded = (SubResult1_6 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult1_6;
              else
                parse_tree__prog_data____Compare____type_ctor_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
            }
            break;
        }
        break;
    }
}

MR_bool MR_CALL 
check_hlds__type_assign____Unify____ctor_arg_posn_0_0(
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Unsigned ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Unsigned ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word Cast_HeadVar1_11 = (MR_Word) (ArgX1_3);
    MR_Word Cast_HeadVar2_12 = (MR_Word) (ArgY1_4);

    succeeded = parse_tree__prog_data____Unify____cons_id_0_0(Cast_HeadVar1_11, Cast_HeadVar2_12);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
        succeeded = check_hlds__type_assign____Unify____posn_invariant_reason_0_0(ArgX3_7, ArgY3_8);
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
check_hlds__type_assign____Unify____posn_invariant_reason_0_0(
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
          MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
          MR_Word ArgY1_4;
          MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
          MR_Word ArgY2_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
            ArgY2_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
            succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(ArgX1_3, ArgY1_4);
            if (succeeded)
              succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(ArgX2_5, ArgY2_6);
          }
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
check_hlds__type_assign____Compare____cons_type_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_21 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_22 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_21 == CastY_22);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 4))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 5))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__type_assign_scalar_common_1[7]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__type_assign_scalar_common_1[6]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        parse_tree__prog_data____Compare____mer_type_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__type_assign_scalar_common_1[2]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            hlds__hlds_class____Compare____hlds_constraint_db_0_0(&SubResult5_18, ArgX5_16, ArgY5_17);
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
              check_hlds__type_assign____Compare____cons_type_info_source_0_0(HeadVar__1_1, ArgX6_19, ArgY6_20);
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
check_hlds__type_assign____Unify____cons_type_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_15 == CastY_16);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_18_18;
    MR_Word TypeInfo_20_20;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__type_assign_scalar_common_1[7]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_18_18 = (MR_Word) (&check_hlds__type_assign_scalar_common_1[6]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_18, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ArgX3_7, ArgY3_8);
        if (succeeded)
        {
          TypeInfo_20_20 = (MR_Word) (&check_hlds__type_assign_scalar_common_1[2]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_20_20, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          if (succeeded)
          {
            succeeded = hlds__hlds_class____Unify____hlds_constraint_db_0_0(ArgX5_11, ArgY5_12);
            if (succeeded)
              succeeded = check_hlds__type_assign____Unify____cons_type_info_source_0_0(ArgX6_13, ArgY6_14);
          }
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
check_hlds__type_assign____Compare____coerce_fail_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_82 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_83 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_82 == CastY_83);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
              MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
              MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
              MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
              MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
              MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
              MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
              MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
              MR_Word SubResult1_6;

              parse_tree__prog_data____Compare____mer_type_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
              succeeded = (SubResult1_6 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult1_6;
              else
              {
                MR_Word SubResult2_9;

                parse_tree__prog_data____Compare____type_ctor_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
                succeeded = (SubResult2_9 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult2_9;
                else
                {
                  MR_Word SubResult3_12;

                  parse_tree__prog_data____Compare____mer_type_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
                  succeeded = (SubResult3_12 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult3_12;
                  else
                    parse_tree__prog_data____Compare____type_ctor_0_0(HeadVar__1_1, ArgX4_13, ArgY4_14);
                }
              }
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
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
              MR_Word ArgX1_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
              MR_Word ArgY1_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
              MR_Word ArgX2_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
              MR_Word ArgY2_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
              MR_Word ArgX3_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
              MR_Word ArgY3_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 2))));
              MR_Word SubResult1_17;

              mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__type_assign_scalar_common_1[6]), &SubResult1_17, ((MR_Box) (ArgX1_15)), ((MR_Box) (ArgY1_16)));
              succeeded = (SubResult1_17 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult1_17;
              else
              {
                MR_Word SubResult2_20;

                parse_tree__prog_data____Compare____mer_type_0_0(&SubResult2_20, ArgX2_18, ArgY2_19);
                succeeded = (SubResult2_20 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult2_20;
                else
                  parse_tree__prog_data____Compare____mer_type_0_0(HeadVar__1_1, ArgX3_21, ArgY3_22);
              }
            }
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 3:
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
              MR_Word ArgX1_23 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 0))));
              MR_Word ArgY1_24 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, 0))));
              MR_Word ArgX2_26 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 1))));
              MR_Word ArgY2_27 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, 1))));
              MR_Word ArgX3_29 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 2))));
              MR_Word ArgY3_30 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, 2))));
              MR_Word SubResult1_25;

              mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_type_table_0), &SubResult1_25, ((MR_Box) (ArgX1_23)), ((MR_Box) (ArgY1_24)));
              succeeded = (SubResult1_25 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult1_25;
              else
              {
                MR_Word SubResult2_28;

                parse_tree__prog_data____Compare____mer_type_0_0(&SubResult2_28, ArgX2_26, ArgY2_27);
                succeeded = (SubResult2_28 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult2_28;
                else
                  parse_tree__prog_data____Compare____mer_type_0_0(HeadVar__1_1, ArgX3_29, ArgY3_30);
              }
            }
            break;
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word ArgX1_31 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                      MR_Word ArgY1_32 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));
                      MR_Word ArgX2_34 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                      MR_Word ArgY2_35 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 2))));
                      MR_Word SubResult1_33;

                      parse_tree__prog_data____Compare____builtin_type_0_0(&SubResult1_33, ArgX1_31, ArgY1_32);
                      succeeded = (SubResult1_33 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult1_33;
                      else
                        parse_tree__prog_data____Compare____builtin_type_0_0(HeadVar__1_1, ArgX2_34, ArgY2_35);
                    }
                    break;
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                  case (MR_Integer) 4:
                  case (MR_Integer) 5:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Integer ArgX1_36 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 1))));
                      MR_Integer ArgY1_37 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 1))));
                      MR_Integer ArgX2_39 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 2))));
                      MR_Integer ArgY2_40 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 2))));
                      MR_Word SubResult1_38;

                      succeeded = (ArgX1_36 < ArgY1_37);
                      if (succeeded)
                      {
                        SubResult1_38 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (ArgX1_36 > ArgY1_37);
                        if (succeeded)
                        {
                          SubResult1_38 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                      }
                      if (succeeded)
                        *HeadVar__1_1 = SubResult1_38;
                      else
                      {
                        succeeded = (ArgX2_39 < ArgY2_40);
                        if (succeeded)
                          *HeadVar__1_1 = (MR_Integer) 1;
                        else
                        {
                          succeeded = (ArgX2_39 > ArgY2_40);
                          if (succeeded)
                            *HeadVar__1_1 = (MR_Integer) 2;
                          else
                            *HeadVar__1_1 = (MR_Integer) 0;
                        }
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                  case (MR_Integer) 4:
                  case (MR_Integer) 5:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 2:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word ArgX1_41 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                      MR_Word ArgY1_42 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));
                      MR_Unsigned ArgX2_44 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 2))));
                      MR_Unsigned ArgY2_45 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, 2))));
                      MR_Word ArgX3_47 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                      MR_Word ArgY3_48 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 3))));
                      MR_Word ArgX4_50 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 4))));
                      MR_Word ArgY4_51 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 4))));
                      MR_Word SubResult1_43;

                      parse_tree__prog_data____Compare____type_ctor_0_0(&SubResult1_43, ArgX1_41, ArgY1_42);
                      succeeded = (SubResult1_43 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult1_43;
                      else
                      {
                        MR_Word SubResult2_46;

                        succeeded = (ArgX2_44 < ArgY2_45);
                        if (succeeded)
                        {
                          SubResult2_46 = (MR_Integer) 1;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = (ArgX2_44 > ArgY2_45);
                          if (succeeded)
                          {
                            SubResult2_46 = (MR_Integer) 2;
                            succeeded = MR_TRUE;
                          }
                        }
                        if (succeeded)
                          *HeadVar__1_1 = SubResult2_46;
                        else
                        {
                          MR_Word SubResult3_49;

                          parse_tree__prog_data____Compare____mer_type_0_0(&SubResult3_49, ArgX3_47, ArgY3_48);
                          succeeded = (SubResult3_49 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult3_49;
                          else
                            parse_tree__prog_data____Compare____mer_type_0_0(HeadVar__1_1, ArgX4_50, ArgY4_51);
                        }
                      }
                    }
                    break;
                  case (MR_Integer) 3:
                  case (MR_Integer) 4:
                  case (MR_Integer) 5:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 3:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    {
                      MR_Word ArgX1_52 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                      MR_Word ArgY1_53 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));
                      MR_Word ArgX2_55 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                      MR_Word ArgY2_56 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 2))));
                      MR_Word SubResult1_54;

                      parse_tree__prog_data____Compare____mer_type_0_0(&SubResult1_54, ArgX1_52, ArgY1_53);
                      succeeded = (SubResult1_54 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult1_54;
                      else
                        parse_tree__prog_data____Compare____mer_type_0_0(HeadVar__1_1, ArgX2_55, ArgY2_56);
                    }
                    break;
                  case (MR_Integer) 4:
                  case (MR_Integer) 5:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 4:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 4:
                    {
                      MR_Word ArgX1_57 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                      MR_Word ArgY1_58 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));
                      MR_String ArgX2_60 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                      MR_String ArgY2_61 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 2))));
                      MR_Word ArgX3_63 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                      MR_Word ArgY3_64 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 3))));
                      MR_String ArgX4_66 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 4))));
                      MR_String ArgY4_67 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 4))));
                      MR_Word SubResult1_59;

                      parse_tree__prog_data____Compare____mer_type_0_0(&SubResult1_59, ArgX1_57, ArgY1_58);
                      succeeded = (SubResult1_59 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult1_59;
                      else
                      {
                        MR_Word SubResult2_62;

                        mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult2_62, ArgX2_60, ArgY2_61);
                        succeeded = (SubResult2_62 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult2_62;
                        else
                        {
                          MR_Word SubResult3_65;

                          parse_tree__prog_data____Compare____mer_type_0_0(&SubResult3_65, ArgX3_63, ArgY3_64);
                          succeeded = (SubResult3_65 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult3_65;
                          else
                            mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX4_66, ArgY4_67);
                        }
                      }
                    }
                    break;
                  case (MR_Integer) 5:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 5:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                  case (MR_Integer) 4:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 5:
                    {
                      MR_Word ArgX1_68 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                      MR_Word ArgY1_69 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));
                      MR_Unsigned ArgX2_71 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 2))));
                      MR_Unsigned ArgY2_72 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, 2))));
                      MR_Word ArgX3_74 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                      MR_Word ArgY3_75 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 3))));
                      MR_Word ArgX4_77 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 4))));
                      MR_Word ArgY4_78 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 4))));
                      MR_Word ArgX5_80 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 5))));
                      MR_Word ArgY5_81 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 5))));
                      MR_Word SubResult1_70;

                      parse_tree__prog_data____Compare____type_ctor_0_0(&SubResult1_70, ArgX1_68, ArgY1_69);
                      succeeded = (SubResult1_70 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult1_70;
                      else
                      {
                        MR_Word SubResult2_73;

                        succeeded = (ArgX2_71 < ArgY2_72);
                        if (succeeded)
                        {
                          SubResult2_73 = (MR_Integer) 1;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = (ArgX2_71 > ArgY2_72);
                          if (succeeded)
                          {
                            SubResult2_73 = (MR_Integer) 2;
                            succeeded = MR_TRUE;
                          }
                        }
                        if (succeeded)
                          *HeadVar__1_1 = SubResult2_73;
                        else
                        {
                          MR_Word SubResult3_76;

                          check_hlds__type_assign____Compare____invariant_reason_0_0(&SubResult3_76, ArgX3_74, ArgY3_75);
                          succeeded = (SubResult3_76 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult3_76;
                          else
                          {
                            MR_Word SubResult4_79;

                            parse_tree__prog_data____Compare____mer_type_0_0(&SubResult4_79, ArgX4_77, ArgY4_78);
                            succeeded = (SubResult4_79 != (MR_Integer) 0);
                            if (succeeded)
                              *HeadVar__1_1 = SubResult4_79;
                            else
                              parse_tree__prog_data____Compare____mer_type_0_0(HeadVar__1_1, ArgX5_80, ArgY5_81);
                          }
                        }
                      }
                    }
                    break;
                }
                break;
            }
            break;
        }
        break;
    }
}

void MR_CALL 
check_hlds__type_assign____Compare____invariant_reason_0_0(
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
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  else
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__type_assign_scalar_common_1[8]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
  }
}

MR_bool MR_CALL 
check_hlds__type_assign____Unify____coerce_fail_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_61 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_62 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_61 == CastY_62);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
          MR_Word ArgY1_4;
          MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
          MR_Word ArgY2_6;
          MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
          MR_Word ArgY3_8;
          MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
          MR_Word ArgY4_10;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
            ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
            ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
            ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
            succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ArgX1_3, ArgY1_4);
            if (succeeded)
            {
              succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(ArgX2_5, ArgY2_6);
              if (succeeded)
              {
                succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ArgX3_7, ArgY3_8);
                if (succeeded)
                  succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(ArgX4_9, ArgY4_10);
              }
            }
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeInfo_79_79;
          MR_Word ArgX1_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
          MR_Word ArgY1_12;
          MR_Word ArgX2_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
          MR_Word ArgY2_14;
          MR_Word ArgX3_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 2))));
          MR_Word ArgY3_16;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
            ArgY2_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
            ArgY3_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
            TypeInfo_79_79 = (MR_Word) (&check_hlds__type_assign_scalar_common_1[6]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_79_79, ((MR_Box) (ArgX1_11)), ((MR_Box) (ArgY1_12)));
            if (succeeded)
            {
              succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ArgX2_13, ArgY2_14);
              if (succeeded)
                succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ArgX3_15, ArgY3_16);
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word TypeCtorInfo_71_71;
          MR_Word ArgX1_17 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, 0))));
          MR_Word ArgY1_18;
          MR_Word ArgX2_19 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, 1))));
          MR_Word ArgY2_20;
          MR_Word ArgX3_21 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, 2))));
          MR_Word ArgY3_22;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_18 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 0))));
            ArgY2_20 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 1))));
            ArgY3_22 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 2))));
            TypeCtorInfo_71_71 = (MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_type_table_0);
            succeeded = mercury__builtin__unify_2_p_0(TypeCtorInfo_71_71, ((MR_Box) (ArgX1_17)), ((MR_Box) (ArgY1_18)));
            if (succeeded)
            {
              succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ArgX2_19, ArgY2_20);
              if (succeeded)
                succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ArgX3_21, ArgY3_22);
            }
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgX1_23 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_24;
              MR_Word ArgX2_25 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Word ArgY2_26;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_24 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_26 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                succeeded = parse_tree__prog_data____Unify____builtin_type_0_0(ArgX1_23, ArgY1_24);
                if (succeeded)
                  succeeded = parse_tree__prog_data____Unify____builtin_type_0_0(ArgX2_25, ArgY2_26);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer ArgX1_27 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Integer ArgY1_28;
              MR_Integer ArgX2_29 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Integer ArgY2_30;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_28 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_30 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 2))));
                succeeded = (ArgX1_27 == ArgY1_28);
                if (succeeded)
                  succeeded = (ArgX2_29 == ArgY2_30);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgX1_31 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_32;
              MR_Unsigned ArgX2_33 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Unsigned ArgY2_34;
              MR_Word ArgX3_35 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_Word ArgY3_36;
              MR_Word ArgX4_37 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 4))));
              MR_Word ArgY4_38;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 2)));
              if (succeeded)
              {
                ArgY1_32 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_34 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 2))));
                ArgY3_36 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                ArgY4_38 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 4))));
                succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(ArgX1_31, ArgY1_32);
                if (succeeded)
                {
                  succeeded = (ArgX2_33 == ArgY2_34);
                  if (succeeded)
                  {
                    succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ArgX3_35, ArgY3_36);
                    if (succeeded)
                      succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ArgX4_37, ArgY4_38);
                  }
                }
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ArgX1_39 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_40;
              MR_Word ArgX2_41 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Word ArgY2_42;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 3)));
              if (succeeded)
              {
                ArgY1_40 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_42 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ArgX1_39, ArgY1_40);
                if (succeeded)
                  succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ArgX2_41, ArgY2_42);
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ArgX1_43 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_44;
              MR_String ArgX2_45 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_String ArgY2_46;
              MR_Word ArgX3_47 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_Word ArgY3_48;
              MR_String ArgX4_49 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 4))));
              MR_String ArgY4_50;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 4)));
              if (succeeded)
              {
                ArgY1_44 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_46 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                ArgY3_48 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                ArgY4_50 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 4))));
                succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ArgX1_43, ArgY1_44);
                if (succeeded)
                {
                  succeeded = (strcmp(ArgX2_45, ArgY2_46) == 0);
                  if (succeeded)
                  {
                    succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ArgX3_47, ArgY3_48);
                    if (succeeded)
                      succeeded = (strcmp(ArgX4_49, ArgY4_50) == 0);
                  }
                }
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word ArgX1_51 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_52;
              MR_Unsigned ArgX2_53 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Unsigned ArgY2_54;
              MR_Word ArgX3_55 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_Word ArgY3_56;
              MR_Word ArgX4_57 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 4))));
              MR_Word ArgY4_58;
              MR_Word ArgX5_59 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 5))));
              MR_Word ArgY5_60;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 5)));
              if (succeeded)
              {
                ArgY1_52 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_54 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 2))));
                ArgY3_56 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                ArgY4_58 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 4))));
                ArgY5_60 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 5))));
                succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(ArgX1_51, ArgY1_52);
                if (succeeded)
                {
                  succeeded = (ArgX2_53 == ArgY2_54);
                  if (succeeded)
                  {
                    succeeded = check_hlds__type_assign____Unify____invariant_reason_0_0(ArgX3_55, ArgY3_56);
                    if (succeeded)
                    {
                      succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ArgX4_57, ArgY4_58);
                      if (succeeded)
                        succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ArgX5_59, ArgY5_60);
                    }
                  }
                }
              }
            }
            break;
        }
        break;
    }
  return succeeded;
}

MR_bool MR_CALL 
check_hlds__type_assign____Unify____invariant_reason_0_0(
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
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_6 == CastX_5);
  }
  else
  {
    MR_Word TypeInfo_9_9;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word ArgY1_4;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      TypeInfo_9_9 = (MR_Word) (&check_hlds__type_assign_scalar_common_1[8]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    }
  }
  return succeeded;
}

void MR_CALL 
check_hlds__type_assign____Compare____coerce_constraint_status_0_0(
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
check_hlds__type_assign____Unify____coerce_constraint_status_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
check_hlds__type_assign____Compare____coerce_constraint_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_21 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_22 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_21 == CastY_22);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word ArgX5_16 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 4))) & (MR_Integer) 3);
    MR_Word ArgY5_17 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 4))) & (MR_Integer) 3);
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 5))));
    MR_Word SubResult1_6;

    parse_tree__prog_data____Compare____mer_type_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      parse_tree__prog_data____Compare____mer_type_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__term_context____Compare____term_context_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__type_assign_scalar_common_1[4]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;
            MR_Integer Var_29 = (MR_Integer) (ArgX5_16);
            MR_Integer Var_30 = (MR_Integer) (ArgY5_17);

            succeeded = (Var_29 < Var_30);
            if (succeeded)
            {
              SubResult5_18 = (MR_Integer) 1;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = (Var_29 > Var_30);
              if (succeeded)
              {
                SubResult5_18 = (MR_Integer) 2;
                succeeded = MR_TRUE;
              }
            }
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
              mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__type_assign_scalar_common_1[5]), HeadVar__1_1, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
check_hlds__type_assign____Unify____coerce_constraint_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_15 == CastY_16);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_20_20;
    MR_Word TypeInfo_21_21;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgX5_11 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 4))) & (MR_Integer) 3);
    MR_Word ArgY5_12 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 4))) & (MR_Integer) 3);
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));

    succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        succeeded = mercury__term_context____Unify____term_context_0_0(ArgX3_7, ArgY3_8);
        if (succeeded)
        {
          TypeInfo_20_20 = (MR_Word) (&check_hlds__type_assign_scalar_common_1[4]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_20_20, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          if (succeeded)
          {
            succeeded = (ArgX5_11 == ArgY5_12);
            if (succeeded)
            {
              TypeInfo_21_21 = (MR_Word) (&check_hlds__type_assign_scalar_common_1[5]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_21_21, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
            }
          }
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
check_hlds__type_assign____Compare____args_type_assign_set_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__type_assign_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
check_hlds__type_assign____Unify____args_type_assign_set_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__type_assign_scalar_common_1[3]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
check_hlds__type_assign____Compare____args_type_assign_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word SubResult1_6;

    check_hlds__type_assign____Compare____type_assign_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__type_assign_scalar_common_1[2]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        hlds__hlds_class____Compare____hlds_constraint_db_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
          check_hlds__type_assign____Compare____args_type_assign_source_0_0(HeadVar__1_1, ArgX4_13, ArgY4_14);
      }
    }
  }
}

void MR_CALL 
check_hlds__type_assign____Compare____type_assign_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 4))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 5))));
    MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 6))));
    MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 6))));
    MR_Word ArgX8_25 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 7))));
    MR_Word ArgY8_26 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 7))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__vartypes__parse_tree__vartypes__type_ctor_info_vartypes_0), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__type_assign_scalar_common_1[7]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__type_assign_scalar_common_1[6]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__type_assign_scalar_common_2[2]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__type_assign_scalar_common_1[9]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              hlds__hlds_class____Compare____hlds_constraint_db_0_0(&SubResult6_21, ArgX6_19, ArgY6_20);
              succeeded = (SubResult6_21 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
              {
                MR_Word SubResult7_24;

                mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__type_assign_scalar_common_2[3]), &SubResult7_24, ((MR_Box) (ArgX7_22)), ((MR_Box) (ArgY7_23)));
                succeeded = (SubResult7_24 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult7_24;
                else
                  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__type_assign_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (ArgX8_25)), ((MR_Box) (ArgY8_26)));
              }
            }
          }
        }
      }
    }
  }
}

void MR_CALL 
check_hlds__type_assign____Compare____args_type_assign_source_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_10 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_11 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_10 == CastY_11);
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
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
              MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

              hlds__pred_proc_id____Compare____pred_id_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
            }
            break;
        }
        break;
      case (MR_Integer) 2:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgX1_6 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 0))));
              MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, 0))));

              mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__type_assign_scalar_common_1[4]), HeadVar__1_1, ((MR_Box) (ArgX1_6)), ((MR_Box) (ArgY1_7)));
            }
            break;
        }
        break;
      case (MR_Integer) 3:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 3:
            {
              MR_Word ArgX1_8 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 0))));
              MR_Word ArgY1_9 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 0))));

              check_hlds__type_assign____Compare____cons_type_info_source_0_0(HeadVar__1_1, ArgX1_8, ArgY1_9);
            }
            break;
        }
        break;
    }
}

void MR_CALL 
check_hlds__type_assign____Compare____cons_type_info_source_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_26 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_27 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_26 == CastY_27);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
              MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
              MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
              MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
              MR_Word SubResult1_6;

              parse_tree__prog_data____Compare____type_ctor_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
              succeeded = (SubResult1_6 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult1_6;
              else
                parse_tree__prog_data____Compare____du_ctor_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
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
              MR_String ArgX1_9 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 0))));
              MR_String ArgY1_10 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, 0))));

              mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX1_9, ArgY1_10);
            }
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 3:
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
              MR_Word ArgX1_11 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__2_2, 0))) & (MR_Integer) 1);
              MR_Word ArgY1_12 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__3_3, 0))) & (MR_Integer) 1);
              MR_Word ArgX2_14 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 1))));
              MR_Word ArgY2_15 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, 1))));
              MR_Word ArgX3_17 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 2))));
              MR_Word ArgY3_18 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, 2))));
              MR_String ArgX4_20 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, 3))));
              MR_String ArgY4_21 = ((MR_String) ((MR_hl_field(2, HeadVar__3_3, 3))));
              MR_Word SubResult1_13;
              MR_Integer Var_37 = (MR_Integer) (ArgX1_11);
              MR_Integer Var_38 = (MR_Integer) (ArgY1_12);

              succeeded = (Var_37 < Var_38);
              if (succeeded)
              {
                SubResult1_13 = (MR_Integer) 1;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = (Var_37 > Var_38);
                if (succeeded)
                {
                  SubResult1_13 = (MR_Integer) 2;
                  succeeded = MR_TRUE;
                }
              }
              if (succeeded)
                *HeadVar__1_1 = SubResult1_13;
              else
              {
                MR_Word SubResult2_16;

                parse_tree__prog_data____Compare____type_ctor_0_0(&SubResult2_16, ArgX2_14, ArgY2_15);
                succeeded = (SubResult2_16 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult2_16;
                else
                {
                  MR_Word SubResult3_19;

                  parse_tree__prog_data____Compare____du_ctor_0_0(&SubResult3_19, ArgX3_17, ArgY3_18);
                  succeeded = (SubResult3_19 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult3_19;
                  else
                    mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX4_20, ArgY4_21);
                }
              }
            }
            break;
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_String ArgX1_22 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                      MR_String ArgY1_23 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));

                      mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX1_22, ArgY1_23);
                    }
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word ArgX1_24 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                      MR_Word ArgY1_25 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));

                      hlds__pred_proc_id____Compare____pred_id_0_0(HeadVar__1_1, ArgX1_24, ArgY1_25);
                    }
                    break;
                }
                break;
            }
            break;
        }
        break;
    }
}

MR_bool MR_CALL 
check_hlds__type_assign____Unify____args_type_assign_0_0(
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
    MR_Word TypeInfo_13_13;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));

    succeeded = check_hlds__type_assign____Unify____type_assign_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      TypeInfo_13_13 = (MR_Word) (&check_hlds__type_assign_scalar_common_1[2]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        succeeded = hlds__hlds_class____Unify____hlds_constraint_db_0_0(ArgX3_7, ArgY3_8);
        if (succeeded)
          succeeded = check_hlds__type_assign____Unify____args_type_assign_source_0_0(ArgX4_9, ArgY4_10);
      }
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
check_hlds__type_assign____Unify____type_assign_0_0(
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
    MR_Word TypeInfo_27_27;
    MR_Word TypeInfo_28_28;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 6))));
    MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 6))));
    MR_Word ArgX8_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 7))));
    MR_Word ArgY8_18 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 7))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__vartypes__parse_tree__vartypes__type_ctor_info_vartypes_0), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_22_22 = (MR_Word) (&check_hlds__type_assign_scalar_common_1[7]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_22_22, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        TypeInfo_23_23 = (MR_Word) (&check_hlds__type_assign_scalar_common_1[6]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_23_23, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          TypeInfo_24_24 = (MR_Word) (&check_hlds__type_assign_scalar_common_2[2]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_24_24, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          if (succeeded)
          {
            TypeInfo_25_25 = (MR_Word) (&check_hlds__type_assign_scalar_common_1[9]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_25_25, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
            if (succeeded)
            {
              succeeded = hlds__hlds_class____Unify____hlds_constraint_db_0_0(ArgX6_13, ArgY6_14);
              if (succeeded)
              {
                TypeInfo_27_27 = (MR_Word) (&check_hlds__type_assign_scalar_common_2[3]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_27_27, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
                if (succeeded)
                {
                  TypeInfo_28_28 = (MR_Word) (&check_hlds__type_assign_scalar_common_2[0]);
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

MR_bool MR_CALL 
check_hlds__type_assign____Unify____args_type_assign_source_0_0(
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
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
          MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

          succeeded = (CastY_10 == CastX_9);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
          MR_Word ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
            succeeded = hlds__pred_proc_id____Unify____pred_id_0_0(ArgX1_3, ArgY1_4);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word TypeInfo_13_13;
          MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, 0))));
          MR_Word ArgY1_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 0))));
            TypeInfo_13_13 = (MR_Word) (&check_hlds__type_assign_scalar_common_1[4]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 0))));
          MR_Word ArgY1_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3);
          if (succeeded)
          {
            ArgY1_8 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 0))));
            succeeded = check_hlds__type_assign____Unify____cons_type_info_source_0_0(ArgX1_7, ArgY1_8);
          }
        }
        break;
    }
  return succeeded;
}

MR_bool MR_CALL 
check_hlds__type_assign____Unify____cons_type_info_source_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
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
          MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
          MR_Word ArgY1_4;
          MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
          MR_Word ArgY2_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
            ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
            succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(ArgX1_3, ArgY1_4);
            if (succeeded)
              succeeded = parse_tree__prog_data____Unify____du_ctor_0_0(ArgX2_5, ArgY2_6);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String ArgX1_7 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, 0))));
          MR_String ArgY1_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_8 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 0))));
            succeeded = (strcmp(ArgX1_7, ArgY1_8) == 0);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgX1_9 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__1_1, 0))) & (MR_Integer) 1);
          MR_Word ArgY1_10;
          MR_Word ArgX2_11 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, 1))));
          MR_Word ArgY2_12;
          MR_Word ArgX3_13 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, 2))));
          MR_Word ArgY3_14;
          MR_String ArgX4_15 = ((MR_String) ((MR_hl_field(2, HeadVar__1_1, 3))));
          MR_String ArgY4_16;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_10 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__2_2, 0))) & (MR_Integer) 1);
            ArgY2_12 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 1))));
            ArgY3_14 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 2))));
            ArgY4_16 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, 3))));
            succeeded = (ArgX1_9 == ArgY1_10);
            if (succeeded)
            {
              succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(ArgX2_11, ArgY2_12);
              if (succeeded)
              {
                succeeded = parse_tree__prog_data____Unify____du_ctor_0_0(ArgX3_13, ArgY3_14);
                if (succeeded)
                  succeeded = (strcmp(ArgX4_15, ArgY4_16) == 0);
              }
            }
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String ArgX1_17 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_18;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_18 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                succeeded = (strcmp(ArgX1_17, ArgY1_18) == 0);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_19 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_20;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_20 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                succeeded = hlds__pred_proc_id____Unify____pred_id_0_0(ArgX1_19, ArgY1_20);
              }
            }
            break;
        }
        break;
    }
  return succeeded;
}

static void MR_CALL 
check_hlds__type_assign__get_existq_tvar_renaming_2_5_p_0(
  MR_Word OldExternalTypeParams_6,
  MR_Word TypeBindings_7,
  MR_Word TVar_8,
  MR_Word STATE_VARIABLE_Renaming_0_11,
  MR_Word * STATE_VARIABLE_Renaming_12)
{
  MR_bool succeeded;
  MR_Word NewTVar_10;
  MR_Word TypeInfo_15_15;
  MR_Word TypeInfo_13_13;

  succeeded = check_hlds__type_assign__tvar_maps_to_tvar_3_p_0(TypeBindings_7, TVar_8, &NewTVar_10);
  if (succeeded)
  {
    TypeInfo_15_15 = (MR_Word) (&check_hlds__type_assign_scalar_common_1[0]);
    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_15, ((MR_Box) (NewTVar_10)), ((MR_Box) (TVar_8)));
    succeeded = !(succeeded);
    if (succeeded)
    {
      TypeInfo_13_13 = (MR_Word) (&check_hlds__type_assign_scalar_common_1[0]);
      succeeded = mercury__list__member_2_p_0(TypeInfo_13_13, ((MR_Box) (NewTVar_10)), OldExternalTypeParams_6);
      succeeded = !(succeeded);
    }
  }
  if (succeeded)
    mercury__map__det_insert_4_p_0((MR_Word) (&check_hlds__type_assign_scalar_common_1[0]), (MR_Word) (&check_hlds__type_assign_scalar_common_1[0]), ((MR_Box) (TVar_8)), ((MR_Box) (NewTVar_10)), STATE_VARIABLE_Renaming_0_11, STATE_VARIABLE_Renaming_12);
  else
    *STATE_VARIABLE_Renaming_12 = STATE_VARIABLE_Renaming_0_11;
}

static MR_bool MR_CALL 
check_hlds__type_assign__tvar_maps_to_tvar_3_p_0(
  MR_Word TypeBindings_4,
  MR_Word TVar0_5,
  MR_Word * TVar_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word Type_7;
    MR_Box conv0_Type_7;

    // setup for model_semi tailcalls optimized into a loop
    ;
    succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__type_assign_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TypeBindings_4, ((MR_Box) (TVar0_5)), &conv0_Type_7);
    if (succeeded)
    {
      Type_7 = ((MR_Word) (conv0_Type_7));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word TVar1_8;
      MR_Word next_value_of_TVar0_5;

      succeeded = ((MR_tag((MR_Word) Type_7)) == (MR_Integer) 0);
      if (succeeded)
      {
        TVar1_8 = ((MR_Word) ((MR_hl_field(0, Type_7, 0))));
        // direct tailcall eliminated
        ;
        next_value_of_TVar0_5 = TVar1_8;
        TVar0_5 = next_value_of_TVar0_5;
        continue;
      }
    }
    else
    {
      *TVar_6 = TVar0_5;
      succeeded = MR_TRUE;
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
check_hlds__type_assign__expand_types_5_p_0(
  MR_Word TypeSubst_6,
  MR_Word Type0_7,
  MR_Word * Type_8,
  MR_Word STATE_VARIABLE_TypeVarsSet_0_11,
  MR_Word * STATE_VARIABLE_TypeVarsSet_12)
{
  MR_Word TypeVars_10;

  parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TypeSubst_6, Type0_7, Type_8);
  parse_tree__prog_type_scan__type_vars_in_type_2_p_0(*Type_8, &TypeVars_10);
  mercury__set__insert_list_3_p_0((MR_Word) (&check_hlds__type_assign_scalar_common_1[0]), TypeVars_10, STATE_VARIABLE_TypeVarsSet_0_11, STATE_VARIABLE_TypeVarsSet_12);
}

MR_Word MR_CALL 
check_hlds__type_assign__project_cons_type_info_source_1_f_0(
  MR_Word CTI_3)
{
  MR_Word HeadVar__2_2 = ((MR_Word) ((MR_hl_field(0, CTI_3, 5))));

  return HeadVar__2_2;
}

MR_Word MR_CALL 
check_hlds__type_assign__args_type_assign_set_to_type_assign_set_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word ArgsTypeAssign_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word ArgsTypeAssigns_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word Var_5;
    MR_Word Var_6;
    MR_Word TypeAssign0_7 = ((MR_Word) ((MR_hl_field(0, ArgsTypeAssign_3, 0))));
    MR_Word ConstraintDb0_9 = ((MR_Word) ((MR_hl_field(0, ArgsTypeAssign_3, 2))));
    MR_Word OldConstraintDb_11 = ((MR_Word) ((MR_hl_field(0, TypeAssign0_7, 5))));
    MR_Word Bindings_12 = ((MR_Word) ((MR_hl_field(0, TypeAssign0_7, 3))));
    MR_Word ConstraintDb_13;
    MR_Word NewConstraintDb_14;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_35;
    MR_Word Var_36;

    hlds__type_rename__apply_rec_subst_to_constraint_db_3_p_0(Bindings_12, ConstraintDb0_9, &ConstraintDb_13);
    hlds__hlds_class__merge_hlds_constraint_dbs_3_p_0(ConstraintDb_13, OldConstraintDb_11, &NewConstraintDb_14);
    Var_29 = ((MR_Word) ((MR_hl_field(0, TypeAssign0_7, 0))));
    Var_30 = ((MR_Word) ((MR_hl_field(0, TypeAssign0_7, 1))));
    Var_31 = ((MR_Word) ((MR_hl_field(0, TypeAssign0_7, 2))));
    Var_32 = ((MR_Word) ((MR_hl_field(0, TypeAssign0_7, 3))));
    Var_33 = ((MR_Word) ((MR_hl_field(0, TypeAssign0_7, 4))));
    Var_35 = ((MR_Word) ((MR_hl_field(0, TypeAssign0_7, 6))));
    Var_36 = ((MR_Word) ((MR_hl_field(0, TypeAssign0_7, 7))));
    {
      Var_5 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_5, 0) = ((MR_Box) (Var_29));
      MR_hl_field(0, Var_5, 1) = ((MR_Box) (Var_30));
      MR_hl_field(0, Var_5, 2) = ((MR_Box) (Var_31));
      MR_hl_field(0, Var_5, 3) = ((MR_Box) (Var_32));
      MR_hl_field(0, Var_5, 4) = ((MR_Box) (Var_33));
      MR_hl_field(0, Var_5, 5) = ((MR_Box) (NewConstraintDb_14));
      MR_hl_field(0, Var_5, 6) = ((MR_Box) (Var_35));
      MR_hl_field(0, Var_5, 7) = ((MR_Box) (Var_36));
    }
    Var_6 = check_hlds__type_assign__args_type_assign_set_to_type_assign_set_1_f_0(ArgsTypeAssigns_4);
    {
      HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (Var_5));
      MR_hl_field(1, HeadVar__2_2, 1) = ((MR_Box) (Var_6));
    }
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
check_hlds__type_assign__get_expected_constraints_1_f_0(
  MR_Word ArgsTypeAssign_3)
{
  MR_Word HeadVar__2_2 = ((MR_Word) ((MR_hl_field(0, ArgsTypeAssign_3, 2))));

  return HeadVar__2_2;
}

MR_Word MR_CALL 
check_hlds__type_assign__get_expected_arg_types_1_f_0(
  MR_Word ArgsTypeAssign_3)
{
  MR_Word HeadVar__2_2 = ((MR_Word) ((MR_hl_field(0, ArgsTypeAssign_3, 1))));

  return HeadVar__2_2;
}

MR_Word MR_CALL 
check_hlds__type_assign__get_caller_arg_assign_1_f_0(
  MR_Word ArgsTypeAssign_3)
{
  MR_Word HeadVar__2_2 = ((MR_Word) ((MR_hl_field(0, ArgsTypeAssign_3, 0))));

  return HeadVar__2_2;
}

static void MR_CALL 
check_hlds__type_assign__type_assign_set_get_final_info_12_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv7_STATE_VARIABLE_Renaming_12;

  check_hlds__type_assign__get_existq_tvar_renaming_2_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv7_STATE_VARIABLE_Renaming_12);
  *wrapper_arg_3 = ((MR_Box) (conv7_STATE_VARIABLE_Renaming_12));
}

static void MR_CALL 
check_hlds__type_assign__type_assign_set_get_final_info_12_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_HeadVar__3_3;

  hlds__hlds_class__update_constraint_map_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv5_HeadVar__3_3));
}

static void MR_CALL 
check_hlds__type_assign__type_assign_set_get_final_info_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_HeadVar__3_3;

  hlds__hlds_class__update_constraint_map_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv3_HeadVar__3_3));
}

static void MR_CALL 
check_hlds__type_assign__type_assign_set_get_final_info_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_Type_8;
  MR_Word conv0_STATE_VARIABLE_TypeVarsSet_12;

  check_hlds__type_assign__expand_types_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_Type_8, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_TypeVarsSet_12);
  *wrapper_arg_2 = ((MR_Box) (conv1_Type_8));
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_TypeVarsSet_12));
}

void MR_CALL 
check_hlds__type_assign__type_assign_set_get_final_info_12_p_0(
  MR_Word TypeAssignSet_13,
  MR_Word OldExternalTypeParams_14,
  MR_Word OldExistQVars_15,
  MR_Word OldExplicitVarTypes_16,
  MR_Word * NewTypeVarSet_17,
  MR_Word * NewExternalTypeParams_18,
  MR_Word * NewVarTypes_19,
  MR_Word * NewTypeConstraints_20,
  MR_Word * NewConstraintProofMap_21,
  MR_Word * NewConstraintMap_22,
  MR_Word * OldToNewTRename_23,
  MR_Word * ExistTypeRenaming_24)
{
  MR_bool succeeded;
  MR_Word TypeAssign_25;
  MR_Word VarTypes0_27;
  MR_Word OldTypeVarSet_28;
  MR_Word ExternalTypeParams_29;
  MR_Word TypeBindings_30;
  MR_Word HLDSTypeConstraints_32;
  MR_Word ConstraintProofMap0_33;
  MR_Word ConstraintMap0_34;
  MR_Word VarTypes1_35;
  MR_Word ConstraintProofMap_36;
  MR_Word ConstraintMap1_37;
  MR_Word TypeVars1_39;
  MR_Word HLDSUnivConstraints_41;
  MR_Word HLDSExistConstraints_42;
  MR_Word ConstraintMap2_45;
  MR_Word ConstraintMap_46;
  MR_Word ExplicitTypes_47;
  MR_Word ExplicitTypeVars0_48;
  MR_Word ExistQVarsToBeRenamed_49;
  MR_Word ExistQVarsToRemain_50;
  MR_Word TypeVars2_51;
  MR_Word TypeVars_52;
  MR_Word TypeConstraints_53;
  MR_Word Var_60;
  MR_Word Var_61;
  MR_Word Var_62;
  MR_Word Var_63;
  MR_Word Var_83;
  MR_Word Var_84;
  MR_Box conv4_ConstraintMap2_45;
  MR_Box conv6_ConstraintMap_46;
  MR_Box conv8_ExistTypeRenaming_24;

  if ((TypeAssignSet_13 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.type_assign.type_assign_set_get_final_info\'/12", (MR_String) "TypeAssignSet = []");
      return;
    }
  else
    TypeAssign_25 = ((MR_Word) ((MR_hl_field(1, TypeAssignSet_13, 0))));
  VarTypes0_27 = ((MR_Word) ((MR_hl_field(0, TypeAssign_25, 0))));
  OldTypeVarSet_28 = ((MR_Word) ((MR_hl_field(0, TypeAssign_25, 1))));
  ExternalTypeParams_29 = ((MR_Word) ((MR_hl_field(0, TypeAssign_25, 2))));
  TypeBindings_30 = ((MR_Word) ((MR_hl_field(0, TypeAssign_25, 3))));
  HLDSTypeConstraints_32 = ((MR_Word) ((MR_hl_field(0, TypeAssign_25, 5))));
  ConstraintProofMap0_33 = ((MR_Word) ((MR_hl_field(0, TypeAssign_25, 6))));
  ConstraintMap0_34 = ((MR_Word) ((MR_hl_field(0, TypeAssign_25, 7))));
  succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&check_hlds__type_assign_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TypeBindings_30);
  if (succeeded)
  {
    MR_Word Types1_38;

    VarTypes1_35 = VarTypes0_27;
    ConstraintProofMap_36 = ConstraintProofMap0_33;
    ConstraintMap1_37 = ConstraintMap0_34;
    parse_tree__vartypes__vartypes_types_2_p_0(VarTypes1_35, &Types1_38);
    parse_tree__prog_type_scan__type_vars_in_types_2_p_0(Types1_38, &TypeVars1_39);
  }
  else
  {
    MR_Word TypeVarsSet1_40;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Box conv2_TypeVarsSet1_40;

    {
      Var_56 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_56, 0) = ((MR_Box) (&check_hlds__type_assign_scalar_common_3[0]));
      MR_hl_field(0, Var_56, 1) = ((MR_Box) (check_hlds__type_assign__type_assign_set_get_final_info_12_p_0_1));
      MR_hl_field(0, Var_56, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_56, 3) = ((MR_Box) (TypeBindings_30));
    }
    Var_57 = mercury__set__init_0_f_0((MR_Word) (&check_hlds__type_assign_scalar_common_1[0]));
    parse_tree__vartypes__transform_foldl_var_types_5_p_0((MR_Word) (&check_hlds__type_assign_scalar_common_1[1]), Var_56, VarTypes0_27, &VarTypes1_35, ((MR_Box) (Var_57)), &conv2_TypeVarsSet1_40);
    TypeVarsSet1_40 = ((MR_Word) (conv2_TypeVarsSet1_40));
    mercury__set__to_sorted_list_2_p_0((MR_Word) (&check_hlds__type_assign_scalar_common_1[0]), TypeVarsSet1_40, &TypeVars1_39);
    hlds__type_rename__apply_rec_subst_to_constraint_proof_map_3_p_0(TypeBindings_30, ConstraintProofMap0_33, &ConstraintProofMap_36);
    hlds__type_rename__apply_rec_subst_to_constraint_map_3_p_0(TypeBindings_30, ConstraintMap0_34, &ConstraintMap1_37);
  }
  HLDSUnivConstraints_41 = ((MR_Word) ((MR_hl_field(0, HLDSTypeConstraints_32, 0))));
  HLDSExistConstraints_42 = ((MR_Word) ((MR_hl_field(0, HLDSTypeConstraints_32, 1))));
  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), (MR_Word) (&check_hlds__type_assign_scalar_common_2[0]), (MR_Word) (&check_hlds__type_assign_scalar_common_2[4]), HLDSUnivConstraints_41, ((MR_Box) (ConstraintMap1_37)), &conv4_ConstraintMap2_45);
  ConstraintMap2_45 = ((MR_Word) (conv4_ConstraintMap2_45));
  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), (MR_Word) (&check_hlds__type_assign_scalar_common_2[0]), (MR_Word) (&check_hlds__type_assign_scalar_common_2[5]), HLDSExistConstraints_42, ((MR_Box) (ConstraintMap2_45)), &conv6_ConstraintMap_46);
  ConstraintMap_46 = ((MR_Word) (conv6_ConstraintMap_46));
  {
    Var_83 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_83, 0) = ((MR_Box) (&check_hlds__type_assign_scalar_common_3[1]));
    MR_hl_field(0, Var_83, 1) = ((MR_Box) (check_hlds__type_assign__type_assign_set_get_final_info_12_p_0_4));
    MR_hl_field(0, Var_83, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_83, 3) = ((MR_Box) (OldExternalTypeParams_14));
    MR_hl_field(0, Var_83, 4) = ((MR_Box) (TypeBindings_30));
  }
  Var_84 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__type_assign_scalar_common_1[0]), (MR_Word) (&check_hlds__type_assign_scalar_common_1[0]));
  mercury__list__foldl_4_p_0((MR_Word) (&check_hlds__type_assign_scalar_common_1[0]), (MR_Word) (&check_hlds__type_assign_scalar_common_2[1]), Var_83, OldExistQVars_15, ((MR_Box) (Var_84)), &conv8_ExistTypeRenaming_24);
  *ExistTypeRenaming_24 = ((MR_Word) (conv8_ExistTypeRenaming_24));
  parse_tree__vartypes__vartypes_types_2_p_0(OldExplicitVarTypes_16, &ExplicitTypes_47);
  parse_tree__prog_type_scan__type_vars_in_types_2_p_0(ExplicitTypes_47, &ExplicitTypeVars0_48);
  mercury__map__keys_2_p_0((MR_Word) (&check_hlds__type_assign_scalar_common_1[0]), (MR_Word) (&check_hlds__type_assign_scalar_common_1[0]), *ExistTypeRenaming_24, &ExistQVarsToBeRenamed_49);
  mercury__list__delete_elems_3_p_0((MR_Word) (&check_hlds__type_assign_scalar_common_1[0]), OldExistQVars_15, ExistQVarsToBeRenamed_49, &ExistQVarsToRemain_50);
  {
    Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_63, 0) = ((MR_Box) (ExplicitTypeVars0_48));
    MR_hl_field(1, Var_63, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_62, 0) = ((MR_Box) (TypeVars1_39));
    MR_hl_field(1, Var_62, 1) = ((MR_Box) (Var_63));
  }
  {
    Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_61, 0) = ((MR_Box) (ExternalTypeParams_29));
    MR_hl_field(1, Var_61, 1) = ((MR_Box) (Var_62));
  }
  {
    Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_60, 0) = ((MR_Box) (ExistQVarsToRemain_50));
    MR_hl_field(1, Var_60, 1) = ((MR_Box) (Var_61));
  }
  mercury__list__condense_2_p_0((MR_Word) (&check_hlds__type_assign_scalar_common_1[0]), Var_60, &TypeVars2_51);
  mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&check_hlds__type_assign_scalar_common_1[0]), TypeVars2_51, &TypeVars_52);
  mercury__varset__squash_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), OldTypeVarSet_28, TypeVars_52, NewTypeVarSet_17, OldToNewTRename_23);
  hlds__hlds_class__retrieve_univ_exist_constraints_2_p_0(HLDSTypeConstraints_32, &TypeConstraints_53);
  succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&check_hlds__type_assign_scalar_common_1[0]), (MR_Word) (&check_hlds__type_assign_scalar_common_1[0]), *OldToNewTRename_23);
  if (succeeded)
  {
    *NewVarTypes_19 = VarTypes1_35;
    *NewExternalTypeParams_18 = ExternalTypeParams_29;
    *NewTypeConstraints_20 = TypeConstraints_53;
    *NewConstraintProofMap_21 = ConstraintProofMap_36;
    *NewConstraintMap_22 = ConstraintMap_46;
  }
  else
  {
    parse_tree__vartypes__rename_vars_in_vartypes_3_p_0(*OldToNewTRename_23, VarTypes1_35, NewVarTypes_19);
    mercury__map__apply_to_list_3_p_0((MR_Word) (&check_hlds__type_assign_scalar_common_1[0]), (MR_Word) (&check_hlds__type_assign_scalar_common_1[0]), ExternalTypeParams_29, *OldToNewTRename_23, NewExternalTypeParams_18);
    parse_tree__prog_type_subst__apply_renaming_to_univ_exist_constraints_3_p_0(*OldToNewTRename_23, TypeConstraints_53, NewTypeConstraints_20);
    hlds__type_rename__apply_renaming_to_constraint_proof_map_3_p_0(*OldToNewTRename_23, ConstraintProofMap_36, NewConstraintProofMap_21);
    hlds__type_rename__apply_renaming_to_constraint_map_3_p_0(*OldToNewTRename_23, ConstraintMap_46, NewConstraintMap_22);
  }
}

void MR_CALL 
check_hlds__type_assign__type_assign_set_init_5_p_0(
  MR_Word TypeVarSet_6,
  MR_Word VarTypes_7,
  MR_Word ExternalTypeParams_8,
  MR_Word Constraints_9,
  MR_Word * TypeAssignSet_10)
{
  MR_Word TypeBindings_11;
  MR_Word ProofMap_13;
  MR_Word ConstraintMap_14;
  MR_Word Var_15;

  mercury__map__init_1_p_0((MR_Word) (&check_hlds__type_assign_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), &TypeBindings_11);
  mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0), &ProofMap_13);
  mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_id_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), &ConstraintMap_14);
  {
    Var_15 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_15, 0) = ((MR_Box) (VarTypes_7));
    MR_hl_field(0, Var_15, 1) = ((MR_Box) (TypeVarSet_6));
    MR_hl_field(0, Var_15, 2) = ((MR_Box) (ExternalTypeParams_8));
    MR_hl_field(0, Var_15, 3) = ((MR_Box) (TypeBindings_11));
    MR_hl_field(0, Var_15, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Var_15, 5) = ((MR_Box) (Constraints_9));
    MR_hl_field(0, Var_15, 6) = ((MR_Box) (ProofMap_13));
    MR_hl_field(0, Var_15, 7) = ((MR_Box) (ConstraintMap_14));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *TypeAssignSet_10 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Var_15));
    MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
}

void MR_CALL 
check_hlds__type_assign__type_assign_set_reduce_results_7_p_0(
  MR_Word TVarSet_8,
  MR_Word Bindings_9,
  MR_Word Constraints_10,
  MR_Word ProofMap_11,
  MR_Word ConstraintMap_12,
  MR_Word TypeAssign0_13,
  MR_Word * TypeAssign_14)
{
  MR_Word VarTypes_15 = ((MR_Word) ((MR_hl_field(0, TypeAssign0_13, 0))));
  MR_Word ExternalTypeParams_17 = ((MR_Word) ((MR_hl_field(0, TypeAssign0_13, 2))));
  MR_Word Coercions_19 = ((MR_Word) ((MR_hl_field(0, TypeAssign0_13, 4))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *TypeAssign_14 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (VarTypes_15));
    MR_hl_field(0, base, 1) = ((MR_Box) (TVarSet_8));
    MR_hl_field(0, base, 2) = ((MR_Box) (ExternalTypeParams_17));
    MR_hl_field(0, base, 3) = ((MR_Box) (Bindings_9));
    MR_hl_field(0, base, 4) = ((MR_Box) (Coercions_19));
    MR_hl_field(0, base, 5) = ((MR_Box) (Constraints_10));
    MR_hl_field(0, base, 6) = ((MR_Box) (ProofMap_11));
    MR_hl_field(0, base, 7) = ((MR_Box) (ConstraintMap_12));
  }
}

void MR_CALL 
check_hlds__type_assign__type_assign_set_constraint_map_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_TA_0_6,
  MR_Word * STATE_VARIABLE_TA_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, 4))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, 5))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, 6))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_TA_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (X_4));
  }
}

void MR_CALL 
check_hlds__type_assign__type_assign_set_constraint_proof_map_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_TA_0_6,
  MR_Word * STATE_VARIABLE_TA_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, 4))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, 5))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, 7))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_TA_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (X_4));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_15));
  }
}

void MR_CALL 
check_hlds__type_assign__type_assign_set_constraint_db_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_TA_0_6,
  MR_Word * STATE_VARIABLE_TA_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, 4))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, 6))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, 7))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_TA_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (X_4));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_15));
  }
}

void MR_CALL 
check_hlds__type_assign__type_assign_set_coerce_constraints_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_TA_0_6,
  MR_Word * STATE_VARIABLE_TA_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, 3))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, 5))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, 6))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, 7))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_TA_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (X_4));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_15));
  }
}

void MR_CALL 
check_hlds__type_assign__type_assign_set_type_bindings_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_TA_0_6,
  MR_Word * STATE_VARIABLE_TA_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, 2))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, 4))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, 5))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, 6))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, 7))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_TA_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (X_4));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_15));
  }
}

void MR_CALL 
check_hlds__type_assign__type_assign_set_existq_tvars_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_TA_0_6,
  MR_Word * STATE_VARIABLE_TA_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, 1))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, 4))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, 5))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, 6))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, 7))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_TA_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (X_4));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_15));
  }
}

void MR_CALL 
check_hlds__type_assign__type_assign_set_typevarset_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_TA_0_6,
  MR_Word * STATE_VARIABLE_TA_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, 0))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, 4))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, 5))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, 6))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, 7))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_TA_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (X_4));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_15));
  }
}

void MR_CALL 
check_hlds__type_assign__type_assign_set_var_types_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_TA_0_6,
  MR_Word * STATE_VARIABLE_TA_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, 4))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, 5))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, 6))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TA_0_6, 7))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_TA_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (X_4));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_15));
  }
}

void MR_CALL 
check_hlds__type_assign__type_assign_get_constraint_map_2_p_0(
  MR_Word TA_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, TA_3, 7))));
}

void MR_CALL 
check_hlds__type_assign__type_assign_get_constraint_proof_map_2_p_0(
  MR_Word TA_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, TA_3, 6))));
}

void MR_CALL 
check_hlds__type_assign__type_assign_get_constraint_db_2_p_0(
  MR_Word TA_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, TA_3, 5))));
}

void MR_CALL 
check_hlds__type_assign__type_assign_get_coerce_constraints_2_p_0(
  MR_Word TA_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, TA_3, 4))));
}

void MR_CALL 
check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(
  MR_Word TA_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, TA_3, 3))));
}

void MR_CALL 
check_hlds__type_assign__type_assign_get_existq_tvars_2_p_0(
  MR_Word TA_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, TA_3, 2))));
}

void MR_CALL 
check_hlds__type_assign__type_assign_get_typevarset_2_p_0(
  MR_Word TA_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, TA_3, 1))));
}

void MR_CALL 
check_hlds__type_assign__type_assign_get_var_types_2_p_0(
  MR_Word TA_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, TA_3, 0))));
}

static MR_bool MR_CALL 
check_hlds__type_assign____Unify____args_type_assign_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__type_assign____Unify____args_type_assign_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__type_assign____Compare____args_type_assign_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__type_assign____Compare____args_type_assign_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__type_assign____Unify____args_type_assign_set_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__type_assign____Unify____args_type_assign_set_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__type_assign____Compare____args_type_assign_set_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__type_assign____Compare____args_type_assign_set_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__type_assign____Unify____args_type_assign_source_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__type_assign____Unify____args_type_assign_source_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__type_assign____Compare____args_type_assign_source_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__type_assign____Compare____args_type_assign_source_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__type_assign____Unify____coerce_constraint_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__type_assign____Unify____coerce_constraint_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__type_assign____Compare____coerce_constraint_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__type_assign____Compare____coerce_constraint_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__type_assign____Unify____coerce_constraint_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__type_assign____Unify____coerce_constraint_status_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__type_assign____Compare____coerce_constraint_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__type_assign____Compare____coerce_constraint_status_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__type_assign____Unify____coerce_fail_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__type_assign____Unify____coerce_fail_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__type_assign____Compare____coerce_fail_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__type_assign____Compare____coerce_fail_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__type_assign____Unify____cons_type_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__type_assign____Unify____cons_type_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__type_assign____Compare____cons_type_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__type_assign____Compare____cons_type_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__type_assign____Unify____cons_type_info_source_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__type_assign____Unify____cons_type_info_source_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__type_assign____Compare____cons_type_info_source_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__type_assign____Compare____cons_type_info_source_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__type_assign____Unify____ctor_arg_posn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__type_assign____Unify____ctor_arg_posn_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__type_assign____Compare____ctor_arg_posn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__type_assign____Compare____ctor_arg_posn_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__type_assign____Unify____du_or_tuple_cons_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__type_assign____Unify____du_or_tuple_cons_id_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__type_assign____Compare____du_or_tuple_cons_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__type_assign____Compare____du_or_tuple_cons_id_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__type_assign____Unify____invariant_reason_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__type_assign____Unify____invariant_reason_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__type_assign____Compare____invariant_reason_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__type_assign____Compare____invariant_reason_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__type_assign____Unify____posn_invariant_reason_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__type_assign____Unify____posn_invariant_reason_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__type_assign____Compare____posn_invariant_reason_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__type_assign____Compare____posn_invariant_reason_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__type_assign____Unify____type_assign_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__type_assign____Unify____type_assign_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__type_assign____Compare____type_assign_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__type_assign____Compare____type_assign_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__type_assign____Unify____type_assign_set_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__type_assign____Unify____type_assign_set_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__type_assign____Compare____type_assign_set_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__type_assign____Compare____type_assign_set_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__check_hlds__type_assign__init(void)
{
}

void mercury__check_hlds__type_assign__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_args_type_assign_0);
  MR_register_type_ctor_info(&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_args_type_assign_set_0);
  MR_register_type_ctor_info(&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_args_type_assign_source_0);
  MR_register_type_ctor_info(&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_coerce_constraint_0);
  MR_register_type_ctor_info(&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_coerce_constraint_status_0);
  MR_register_type_ctor_info(&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_coerce_fail_0);
  MR_register_type_ctor_info(&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_cons_type_info_0);
  MR_register_type_ctor_info(&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_cons_type_info_source_0);
  MR_register_type_ctor_info(&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_ctor_arg_posn_0);
  MR_register_type_ctor_info(&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_du_or_tuple_cons_id_0);
  MR_register_type_ctor_info(&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_invariant_reason_0);
  MR_register_type_ctor_info(&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_posn_invariant_reason_0);
  MR_register_type_ctor_info(&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0);
  MR_register_type_ctor_info(&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_set_0);
}

void mercury__check_hlds__type_assign__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__type_assign__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module check_hlds.type_assign.
