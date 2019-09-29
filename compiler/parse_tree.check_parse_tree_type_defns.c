/*
** Automatically generated from `check_parse_tree_type_defns.m'
** by the Mercury compiler,
** version DEV
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


// :- module parse_tree.check_parse_tree_type_defns.
// :- implementation.

/*
INIT mercury__parse_tree__check_parse_tree_type_defns__init
ENDINIT
*/

#include "parse_tree.check_parse_tree_type_defns.mih"


#include "libs.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "array.mih"
#include "assoc_list.mih"
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
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
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
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"




static const MR_FA_TypeInfo_Struct1 parse_tree__check_parse_tree_type_defns__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_type_defn_info_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__check_parse_tree_type_defns__parse_tree__prog_item__ti_type_ctor_defns_1list__ti_list_1parse_tree__prog_item__type_ctor_info_item_type_defn_info_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__check_parse_tree_type_defns__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__ti_type_ctor_defns_1list__ti_list_1parse_tree__prog_item__type_ctor_info_item_type_defn_info_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__check_parse_tree_type_defns__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__check_parse_tree_type_defns__parse_tree__prog_item__ti_c_java_csharp_erlang_1list__ti_list_1parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__check_parse_tree_type_defns__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__ti_c_java_csharp_erlang_1list__ti_list_1parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__check_parse_tree_type_defns__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__check_parse_tree_type_defns__type_ctor_info_type_ctor_checked_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__check_parse_tree_type_defns__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__check_parse_tree_type_defns__list__ti_one_or_more_1parse_tree__check_parse_tree_type_defns__type_ctor_info_field_name_locn_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__check_parse_tree_type_defns__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_one_or_more_1parse_tree__check_parse_tree_type_defns__type_ctor_info_field_name_locn_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__check_parse_tree_type_defns__list__pti_one_or_more_1__plain_parse_tree__check_parse_tree_type_defns__type_ctor_info_field_name_locn_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__check_parse_tree_type_defns__maybe__pti_maybe_1__plain_parse_tree__prog_item__type_ctor_info_item_type_defn_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__check_parse_tree_type_defns__set_ordlist__pti_set_ordlist_1__plain_term__type_ctor_info_context_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__check_parse_tree_type_defns__maybe__pti_maybe_1__plain_parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0;

static const MR_EnumFunctorDesc parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__enum_functor_desc_abstract_solver_type_status_0_0;

static const MR_EnumFunctorDesc parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__enum_functor_desc_abstract_solver_type_status_0_1;

static const MR_EnumFunctorDescPtr parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__enum_value_ordered_abstract_solver_type_status_0[2];

static const MR_EnumFunctorDescPtr parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__enum_name_ordered_abstract_solver_type_status_0[2];

static const MR_Integer parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__functor_number_map_abstract_solver_type_status_0[2];

static const MR_FA_TypeInfo_Struct1 parse_tree__check_parse_tree_type_defns__maybe__ti_maybe_1parse_tree__check_parse_tree_type_defns__type_ctor_info_foreign_type_or_enum_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__check_parse_tree_type_defns__parse_tree__prog_item__ti_c_java_csharp_erlang_1maybe__ti_maybe_1parse_tree__check_parse_tree_type_defns__type_ctor_info_foreign_type_or_enum_0;

static const MR_PseudoTypeInfo parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__field_types_field_name_locn_0_0[3];

static const MR_DuFunctorDesc parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_functor_desc_field_name_locn_0_0;

static const MR_DuFunctorDescPtr parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_stag_ordered_field_name_locn_0_0[1];

static const MR_DuPtagLayout parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_ptag_ordered_field_name_locn_0[1];

static const MR_DuFunctorDescPtr parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_name_ordered_field_name_locn_0[1];

static const MR_Integer parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__functor_number_map_field_name_locn_0[1];

static const MR_FA_TypeInfo_Struct2 parse_tree__check_parse_tree_type_defns__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_one_or_more_1parse_tree__check_parse_tree_type_defns__type_ctor_info_field_name_locn_0;

static const MR_PseudoTypeInfo parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__field_types_foreign_type_or_enum_0_0[1];

static const MR_DuFunctorDesc parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_functor_desc_foreign_type_or_enum_0_0;

static const MR_PseudoTypeInfo parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__field_types_foreign_type_or_enum_0_1[1];

static const MR_DuFunctorDesc parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_functor_desc_foreign_type_or_enum_0_1;

static const MR_DuFunctorDescPtr parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_stag_ordered_foreign_type_or_enum_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_stag_ordered_foreign_type_or_enum_0_1[1];

static const MR_DuPtagLayout parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_ptag_ordered_foreign_type_or_enum_0[2];

static const MR_DuFunctorDescPtr parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_name_ordered_foreign_type_or_enum_0[2];

static const MR_Integer parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__functor_number_map_foreign_type_or_enum_0[2];

static const MR_EnumFunctorDesc parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__enum_functor_desc_maybe_insist_on_defn_0_0;

static const MR_EnumFunctorDesc parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__enum_functor_desc_maybe_insist_on_defn_0_1;

static const MR_EnumFunctorDescPtr parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__enum_value_ordered_maybe_insist_on_defn_0[2];

static const MR_EnumFunctorDescPtr parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__enum_name_ordered_maybe_insist_on_defn_0[2];

static const MR_Integer parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__functor_number_map_maybe_insist_on_defn_0[2];

static const MR_DuFunctorDesc parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_functor_desc_maybe_only_constants_0_0;

static const MR_PseudoTypeInfo parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__field_types_maybe_only_constants_0_1[2];

static const MR_ConstString parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__field_names_maybe_only_constants_0_1[2];

static const MR_DuFunctorDesc parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_functor_desc_maybe_only_constants_0_1;

static const MR_DuFunctorDescPtr parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_stag_ordered_maybe_only_constants_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_stag_ordered_maybe_only_constants_0_1[1];

static const MR_DuPtagLayout parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_ptag_ordered_maybe_only_constants_0[2];

static const MR_DuFunctorDescPtr parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_name_ordered_maybe_only_constants_0[2];

static const MR_Integer parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__functor_number_map_maybe_only_constants_0[2];

static const MR_PseudoTypeInfo parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__field_types_solver_type_defn_0_0[2];

static const MR_DuArgLocn parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__field_locns_solver_type_defn_0_0[2];

static const MR_DuFunctorDesc parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_functor_desc_solver_type_defn_0_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__check_parse_tree_type_defns__maybe__ti_maybe_1parse_tree__prog_item__type_ctor_info_item_type_defn_info_0;

static const MR_PseudoTypeInfo parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__field_types_solver_type_defn_0_1[2];

static const MR_DuFunctorDesc parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_functor_desc_solver_type_defn_0_1;

static const MR_DuFunctorDescPtr parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_stag_ordered_solver_type_defn_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_stag_ordered_solver_type_defn_0_1[1];

static const MR_DuPtagLayout parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_ptag_ordered_solver_type_defn_0[2];

static const MR_DuFunctorDescPtr parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_name_ordered_solver_type_defn_0[2];

static const MR_Integer parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__functor_number_map_solver_type_defn_0[2];

static const MR_EnumFunctorDesc parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__enum_functor_desc_std_abs_type_status_0_0;

static const MR_EnumFunctorDesc parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__enum_functor_desc_std_abs_type_status_0_1;

static const MR_EnumFunctorDesc parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__enum_functor_desc_std_abs_type_status_0_2;

static const MR_EnumFunctorDescPtr parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__enum_value_ordered_std_abs_type_status_0[3];

static const MR_EnumFunctorDescPtr parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__enum_name_ordered_std_abs_type_status_0[3];

static const MR_Integer parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__functor_number_map_std_abs_type_status_0[3];

static const MR_EnumFunctorDesc parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__enum_functor_desc_std_du_type_status_0_0;

static const MR_EnumFunctorDesc parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__enum_functor_desc_std_du_type_status_0_1;

static const MR_EnumFunctorDesc parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__enum_functor_desc_std_du_type_status_0_2;

static const MR_EnumFunctorDesc parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__enum_functor_desc_std_du_type_status_0_3;

static const MR_EnumFunctorDescPtr parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__enum_value_ordered_std_du_type_status_0[4];

static const MR_EnumFunctorDescPtr parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__enum_name_ordered_std_du_type_status_0[4];

static const MR_Integer parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__functor_number_map_std_du_type_status_0[4];

static const MR_EnumFunctorDesc parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__enum_functor_desc_std_eqv_type_status_0_0;

static const MR_EnumFunctorDesc parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__enum_functor_desc_std_eqv_type_status_0_1;

static const MR_EnumFunctorDesc parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__enum_functor_desc_std_eqv_type_status_0_2;

static const MR_EnumFunctorDescPtr parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__enum_value_ordered_std_eqv_type_status_0[3];

static const MR_EnumFunctorDescPtr parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__enum_name_ordered_std_eqv_type_status_0[3];

static const MR_Integer parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__functor_number_map_std_eqv_type_status_0[3];

static const MR_PseudoTypeInfo parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__field_types_std_type_defn_0_0[2];

static const MR_DuArgLocn parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__field_locns_std_type_defn_0_0[2];

static const MR_DuFunctorDesc parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_functor_desc_std_type_defn_0_0;

static const MR_PseudoTypeInfo parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__field_types_std_type_defn_0_1[4];

static const MR_DuArgLocn parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__field_locns_std_type_defn_0_1[4];

static const MR_DuFunctorDesc parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_functor_desc_std_type_defn_0_1;

static const MR_FA_TypeInfo_Struct1 parse_tree__check_parse_tree_type_defns__parse_tree__prog_item__ti_c_java_csharp_erlang_1maybe__ti_maybe_1parse_tree__prog_item__type_ctor_info_item_type_defn_info_0;

static const MR_PseudoTypeInfo parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__field_types_std_type_defn_0_2[3];

static const MR_DuArgLocn parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__field_locns_std_type_defn_0_2[3];

static const MR_DuFunctorDesc parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_functor_desc_std_type_defn_0_2;

static const MR_DuFunctorDescPtr parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_stag_ordered_std_type_defn_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_stag_ordered_std_type_defn_0_1[1];

static const MR_DuFunctorDescPtr parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_stag_ordered_std_type_defn_0_2[1];

static const MR_DuPtagLayout parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_ptag_ordered_std_type_defn_0[3];

static const MR_DuFunctorDescPtr parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_name_ordered_std_type_defn_0[3];

static const MR_Integer parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__functor_number_map_std_type_defn_0[3];

static const MR_PseudoTypeInfo parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__field_types_type_ctor_checked_defn_0_0[1];

static const MR_DuFunctorDesc parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_functor_desc_type_ctor_checked_defn_0_0;

static const MR_PseudoTypeInfo parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__field_types_type_ctor_checked_defn_0_1[1];

static const MR_DuFunctorDesc parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_functor_desc_type_ctor_checked_defn_0_1;

static const MR_DuFunctorDescPtr parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_stag_ordered_type_ctor_checked_defn_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_stag_ordered_type_ctor_checked_defn_0_1[1];

static const MR_DuPtagLayout parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_ptag_ordered_type_ctor_checked_defn_0[2];

static const MR_DuFunctorDescPtr parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_name_ordered_type_ctor_checked_defn_0[2];

static const MR_Integer parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__functor_number_map_type_ctor_checked_defn_0[2];

static const MR_FA_TypeInfo_Struct2 parse_tree__check_parse_tree_type_defns__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__check_parse_tree_type_defns__type_ctor_info_type_ctor_checked_defn_0;

static void MR_CALL 
parse_tree__check_parse_tree_type_defns____Compare____field_name_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__check_parse_tree_type_defns____Unify____field_name_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__check_parse_tree_type_defns____Compare____field_name_locn_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__check_parse_tree_type_defns____Unify____field_name_locn_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__report_duplicate_field_name_5_p_0(
  MR_String FieldName_6,
  MR_Word FirstFNLocn_7,
  MR_Word FNLocn_8,
  MR_Word STATE_VARIABLE_Specs_0_20,
  MR_Word * STATE_VARIABLE_Specs_21);

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__report_any_duplicate_field_names_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__report_any_duplicate_field_names_4_p_0(
  MR_String FieldName_5,
  MR_Word OoMFNLocns_6,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16);

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__add_data_ctor_arg_to_field_name_map_5_p_0(
  MR_Word TypeCtor_6,
  MR_String CtorName_7,
  MR_Word CtorArg_8,
  MR_Word STATE_VARIABLE_FieldNameMap_0_22,
  MR_Word * STATE_VARIABLE_FieldNameMap_23);

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__add_data_ctor_to_field_name_map_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__add_data_ctor_to_field_name_map_4_p_0(
  MR_Word TypeCtor_5,
  MR_Word Ctor_6,
  MR_Word STATE_VARIABLE_FieldNameMap_0_15,
  MR_Word * STATE_VARIABLE_FieldNameMap_16);

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__add_type_ctor_to_field_name_map_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__add_type_ctor_to_field_name_map_4_p_0(
  MR_Word TypeCtor_5,
  MR_Word CheckedDefn_6,
  MR_Word STATE_VARIABLE_FieldNameMap_0_30,
  MR_Word * STATE_VARIABLE_FieldNameMap_31);

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__report_duplicate_foreign_defn_7_p_0(
  MR_String TypeOrEnum_8,
  MR_Word TypeCtor_9,
  MR_Word Lang_10,
  MR_Word LeastContext_11,
  MR_Word Context_12,
  MR_Word STATE_VARIABLE_Specs_0_17,
  MR_Word * STATE_VARIABLE_Specs_18);

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__accumulate_foreign_enum_contexts_3_p_0(
  MR_Word ForeignEnum_4,
  MR_Word STATE_VARIABLE_Contexts_0_6,
  MR_Word * STATE_VARIABLE_Contexts_7);

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__accumulate_type_defn_contexts_3_p_0(
  MR_Word TypeDefn_4,
  MR_Word STATE_VARIABLE_Contexts_0_6,
  MR_Word * STATE_VARIABLE_Contexts_7);

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__report_duplicate_type_defn_6_p_0(
  MR_String Kind_7,
  MR_Word TypeCtor_8,
  MR_Word LeastContext_9,
  MR_Word Context_10,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16);

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__report_type_ctor_enum_in_int_5_p_0(
  MR_Word ModuleName_6,
  MR_Word TypeCtor_7,
  MR_Word ForeignEnum_8,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16);

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__report_any_foreign_enum_for_undefined_type_5_p_0(
  MR_Word TypeCtor_6,
  MR_String UndefOrUndecl_7,
  MR_Word MaybeEnum_8,
  MR_Word STATE_VARIABLE_Specs_0_13,
  MR_Word * STATE_VARIABLE_Specs_14);

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__report_any_incompatible_foreign_enum_7_p_0(
  MR_Word TypeCtor_8,
  MR_Word UsedContext_9,
  MR_String Kind_10,
  MR_String Section_11,
  MR_Word MaybeEnum_12,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19);

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__report_any_incompatible_type_definition_7_p_0(
  MR_Word TypeCtor_8,
  MR_Word UsedContext_9,
  MR_String Kind_10,
  MR_String Section_11,
  MR_Word MaybeDefn_12,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19);

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__foreign_int_report_any_foreign_defn_in_imp_5_p_0(
  MR_Word TypeCtor_6,
  MR_Word IntForeignContext_7,
  MR_Word MaybeImpForeignDefn_8,
  MR_Word STATE_VARIABLE_Specs_0_14,
  MR_Word * STATE_VARIABLE_Specs_15);

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__report_any_foreign_type_without_declaration_4_p_0(
  MR_Word TypeCtor_5,
  MR_Word MaybeForeignDefn_6,
  MR_Word STATE_VARIABLE_Specs_0_11,
  MR_Word * STATE_VARIABLE_Specs_12);

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__du_imp_report_any_foreign_defn_in_int_5_p_0(
  MR_Word TypeCtor_6,
  MR_Word DuDefn_7,
  MR_Word MaybeForeignDefn_8,
  MR_Word STATE_VARIABLE_Specs_0_14,
  MR_Word * STATE_VARIABLE_Specs_15);

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__check_type_ctor_defns_11_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__check_type_ctor_defns_11_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__check_type_ctor_defns_11_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__check_type_ctor_defns_11_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__check_type_ctor_defns_11_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__check_type_ctor_defns_11_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__check_type_ctor_defns_11_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__check_type_ctor_defns_11_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__check_type_ctor_defns_11_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__check_type_ctor_defns_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__check_type_ctor_defns_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__check_type_ctor_defns_11_p_0(
  MR_Word InsistOnDefn_12,
  MR_Word ModuleName_13,
  MR_Word IntTypeDefnMap_14,
  MR_Word ImpTypeDefnMap_15,
  MR_Word IntForeignEnumMap_16,
  MR_Word ImpForeignEnumMap_17,
  MR_Word TypeCtor_18,
  MR_Word STATE_VARIABLE_TypeCtorCheckedMap_0_98,
  MR_Word * STATE_VARIABLE_TypeCtorCheckedMap_99,
  MR_Word STATE_VARIABLE_Specs_0_100,
  MR_Word * STATE_VARIABLE_Specs_101);

static MR_Word MR_CALL 
parse_tree__check_parse_tree_type_defns__get_maybe_type_defn_contexts_1_f_0(
  MR_Word HeadVar__1_1);

static MR_Word MR_CALL 
parse_tree__check_parse_tree_type_defns__is_du_type_defn_an_enum_or_dummy_1_f_0(
  MR_Word TypeDefnInfo_3);

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__check_any_type_ctor_enums_for_duplicates_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__check_any_type_ctor_enums_for_duplicates_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__check_any_type_ctor_enums_for_duplicates_5_p_0(
  MR_Word ForeignEnumMap_6,
  MR_Word TypeCtor_7,
  MR_Word * MaybeEnumCJCsE_8,
  MR_Word STATE_VARIABLE_Specs_0_11,
  MR_Word * STATE_VARIABLE_Specs_12);

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__at_most_one_foreign_enum_for_lang_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__at_most_one_foreign_enum_for_lang_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__at_most_one_foreign_enum_for_lang_6_p_0(
  MR_Word TypeCtor_7,
  MR_Word Lang_8,
  MR_Word ForeignEnums_9,
  MR_Word * MaybeForeignEnum_10,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19);

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__check_type_ctor_enums_in_int_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__check_type_ctor_enums_in_int_5_p_0(
  MR_Word ForeignEnumMap_6,
  MR_Word ModuleName_7,
  MR_Word TypeCtor_8,
  MR_Word STATE_VARIABLE_Specs_0_16,
  MR_Word * STATE_VARIABLE_Specs_17);

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__check_any_type_ctor_defns_for_duplicates_5_p_0(
  MR_Word TypeDefnMap_6,
  MR_Word TypeCtor_7,
  MR_Word * MaybeDefn_8,
  MR_Word STATE_VARIABLE_Specs_0_23,
  MR_Word * STATE_VARIABLE_Specs_24);

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__at_most_one_foreign_type_for_all_langs_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__at_most_one_foreign_type_for_all_langs_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__at_most_one_foreign_type_for_all_langs_5_p_0(
  MR_Word TypeCtor_6,
  MR_Word DefnsCJCsE_7,
  MR_Word * MaybeDefnCJCsE_8,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19);

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__at_most_one_foreign_type_for_lang_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__at_most_one_foreign_type_for_lang_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__at_most_one_foreign_type_for_lang_6_p_0(
  MR_Word TypeCtor_7,
  MR_Word Lang_8,
  MR_Word TypeDefns_9,
  MR_Word * MaybeTypeDefn_10,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19);

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__at_most_one_type_defn_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__at_most_one_type_defn_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__at_most_one_type_defn_6_p_0(
  MR_String Kind_7,
  MR_Word TypeCtor_8,
  MR_Word TypeDefns_9,
  MR_Word * MaybeTypeDefn_10,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19);

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__maybe_report_declared_but_undefined_type_5_p_0(
  MR_Word InsistOnDefn_6,
  MR_Word TypeCtor_7,
  MR_Word AbsTypeDefn_8,
  MR_Word STATE_VARIABLE_Specs_0_16,
  MR_Word * STATE_VARIABLE_Specs_17);

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__report_any_redundant_abstract_type_in_imp_5_p_0(
  MR_Word TypeCtor_6,
  MR_String Section_7,
  MR_Word MaybeImpAbstractDefn_8,
  MR_Word STATE_VARIABLE_Specs_0_13,
  MR_Word * STATE_VARIABLE_Specs_14);

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__report_any_nonabstract_solver_type_in_int_4_p_0(
  MR_Word TypeCtor_5,
  MR_Word MaybeDefn_6,
  MR_Word STATE_VARIABLE_Specs_0_11,
  MR_Word * STATE_VARIABLE_Specs_12);

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__decide_du_foreign_representation_for_lang_9_p_0(
  MR_Word TypeCtor_10,
  MR_Word DuDefn_11,
  MR_Word MaybeOnlyConstants_12,
  MR_Word Lang_13,
  MR_Word MaybeDefnLang_14,
  MR_Word MaybeEnumLang_15,
  MR_Word * MaybeDefnOrEnumLang_16,
  MR_Word STATE_VARIABLE_Specs_0_22,
  MR_Word * STATE_VARIABLE_Specs_23);

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__foreign_type_report_any_foreign_enum_6_p_0(
  MR_Word TypeCtor_7,
  MR_Word Lang_8,
  MR_Word Defn_9,
  MR_Word MaybeEnum_10,
  MR_Word STATE_VARIABLE_Specs_0_17,
  MR_Word * STATE_VARIABLE_Specs_18);

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__decide_only_foreign_type_section_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__decide_only_foreign_type_section_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__decide_only_foreign_type_section_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__decide_only_foreign_type_section_10_p_0(
  MR_Word TypeCtor_11,
  MR_Word IntAbstractStdMaybeDefn_12,
  MR_Word ImpAbstractStdMaybeDefn_13,
  MR_Word IntMaybeDefnCJCsE_14,
  MR_Word ImpMaybeDefnCJCsE_15,
  MR_Word * Status_16,
  MR_Word * AbstractStdDefn_17,
  MR_Word * ChosenMaybeDefnCJCsE_18,
  MR_Word STATE_VARIABLE_Specs_0_36,
  MR_Word * STATE_VARIABLE_Specs_37);

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__decide_du_foreign_type_section_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__decide_du_foreign_type_section_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__decide_du_foreign_type_section_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__decide_du_foreign_type_section_10_p_0(
  MR_Word TypeCtor_11,
  MR_Word DuDefn_12,
  MR_Word DuSection_13,
  MR_Word IntAbstractStdMaybeDefn_14,
  MR_Word IntMaybeDefnCJCsE_15,
  MR_Word ImpMaybeDefnCJCsE_16,
  MR_Word * Status_17,
  MR_Word * ChosenMaybeDefnCJCsE_18,
  MR_Word STATE_VARIABLE_Specs_0_32,
  MR_Word * STATE_VARIABLE_Specs_33);

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__create_type_ctor_checked_map_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__create_type_ctor_checked_map_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__create_type_ctor_checked_map_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_bool MR_CALL 
parse_tree__check_parse_tree_type_defns____Unify____abstract_solver_type_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__check_parse_tree_type_defns____Compare____abstract_solver_type_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__check_parse_tree_type_defns____Unify____c_j_cs_e_maybe_defn_or_enum_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__check_parse_tree_type_defns____Compare____c_j_cs_e_maybe_defn_or_enum_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__check_parse_tree_type_defns____Unify____field_name_locn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__check_parse_tree_type_defns____Compare____field_name_locn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__check_parse_tree_type_defns____Unify____field_name_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__check_parse_tree_type_defns____Compare____field_name_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__check_parse_tree_type_defns____Unify____foreign_type_or_enum_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__check_parse_tree_type_defns____Compare____foreign_type_or_enum_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__check_parse_tree_type_defns____Unify____maybe_insist_on_defn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__check_parse_tree_type_defns____Compare____maybe_insist_on_defn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__check_parse_tree_type_defns____Unify____maybe_only_constants_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__check_parse_tree_type_defns____Compare____maybe_only_constants_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__check_parse_tree_type_defns____Unify____solver_type_defn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__check_parse_tree_type_defns____Compare____solver_type_defn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__check_parse_tree_type_defns____Unify____std_abs_type_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__check_parse_tree_type_defns____Compare____std_abs_type_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__check_parse_tree_type_defns____Unify____std_du_type_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__check_parse_tree_type_defns____Compare____std_du_type_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__check_parse_tree_type_defns____Unify____std_eqv_type_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__check_parse_tree_type_defns____Compare____std_eqv_type_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__check_parse_tree_type_defns____Unify____std_type_defn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__check_parse_tree_type_defns____Compare____std_type_defn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__check_parse_tree_type_defns____Unify____type_ctor_checked_defn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__check_parse_tree_type_defns____Compare____type_ctor_checked_defn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__check_parse_tree_type_defns____Unify____type_ctor_checked_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__check_parse_tree_type_defns____Compare____type_ctor_checked_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__check_parse_tree_type_defns_scalar_common_1[122][2];

static /* final */ const MR_Box parse_tree__check_parse_tree_type_defns_scalar_common_2[9][3];

static /* final */ const MR_Box parse_tree__check_parse_tree_type_defns_scalar_common_3[2][4];

static /* final */ const MR_Box parse_tree__check_parse_tree_type_defns_scalar_common_4[3][6];

static /* final */ const MR_Box parse_tree__check_parse_tree_type_defns_scalar_common_5[1][14];

static /* final */ const MR_Box parse_tree__check_parse_tree_type_defns_scalar_common_6[4][7];

static /* final */ const MR_Box parse_tree__check_parse_tree_type_defns_scalar_common_7[6][8];

static /* final */ const MR_Box parse_tree__check_parse_tree_type_defns_scalar_common_8[5][1];

static /* final */ const MR_Box parse_tree__check_parse_tree_type_defns_scalar_common_9[1][9];

static /* final */ const MR_Box parse_tree__check_parse_tree_type_defns_scalar_common_10[3][10];




static /* final */ const MR_Box parse_tree__check_parse_tree_type_defns_scalar_common_1[122][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_defns_1)),
    ((MR_Box) (&parse_tree__check_parse_tree_type_defns_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_c_java_csharp_erlang_1)),
    ((MR_Box) (&parse_tree__check_parse_tree_type_defns_scalar_common_1[2]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__type_ctor_info_field_name_locn_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__type_ctor_info_foreign_type_or_enum_0))
  },
  /* row 10 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_c_java_csharp_erlang_1)),
    ((MR_Box) (&parse_tree__check_parse_tree_type_defns_scalar_common_1[9]))
  },
  /* row 11 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_c_java_csharp_erlang_1)),
    ((MR_Box) (&parse_tree__check_parse_tree_type_defns_scalar_common_1[6]))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "for the same language."))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_parse_tree_type_defns_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_parse_tree_type_defns_scalar_common_1[12])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declarations for it"))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_parse_tree_type_defns_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_parse_tree_type_defns_scalar_common_1[14])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 19U)),
    ((MR_Box) ((MR_String) "foreign_enum"))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_parse_tree_type_defns_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_parse_tree_type_defns_scalar_common_1[16])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "so there must not be any"))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_parse_tree_type_defns_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_parse_tree_type_defns_scalar_common_1[18])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_parse_tree_type_defns_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_parse_tree_type_defns_scalar_common_1[20])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "That foreign type definition is here."))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_parse_tree_type_defns_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_parse_tree_type_defns_scalar_common_1[12])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declarations for it."))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_parse_tree_type_defns_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_parse_tree_type_defns_scalar_common_1[12])))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_parse_tree_type_defns_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_parse_tree_type_defns_scalar_common_1[26])))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_parse_tree_type_defns_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_parse_tree_type_defns_scalar_common_1[27])))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is not an enumeration type,"))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_parse_tree_type_defns_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_parse_tree_type_defns_scalar_common_1[28])))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "That Mercury definition is here."))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_parse_tree_type_defns_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_parse_tree_type_defns_scalar_common_1[12])))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "must be in the implementation section as well."))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_parse_tree_type_defns_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_parse_tree_type_defns_scalar_common_1[12])))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "any foreign type definitions for it"))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_parse_tree_type_defns_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_parse_tree_type_defns_scalar_common_1[34])))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is in the implementation section,"))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_parse_tree_type_defns_scalar_common_1[37]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_parse_tree_type_defns_scalar_common_1[36])))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_parse_tree_type_defns_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_parse_tree_type_defns_scalar_common_1[12])))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "must be in the interface section as well."))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_parse_tree_type_defns_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_parse_tree_type_defns_scalar_common_1[12])))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "all other foreign language definitions for it"))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_parse_tree_type_defns_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_parse_tree_type_defns_scalar_common_1[42])))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is in the interface section,"))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_parse_tree_type_defns_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_parse_tree_type_defns_scalar_common_1[44])))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is here."))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_parse_tree_type_defns_scalar_common_1[47]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_parse_tree_type_defns_scalar_common_1[12])))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "That foreign definition in the interface"))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_parse_tree_type_defns_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_parse_tree_type_defns_scalar_common_1[48])))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "only in the implementation section."))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_parse_tree_type_defns_scalar_common_1[51]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_parse_tree_type_defns_scalar_common_1[12])))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "(as opposed to declared)"))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_parse_tree_type_defns_scalar_common_1[53]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_parse_tree_type_defns_scalar_common_1[52])))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "may be defined"))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_parse_tree_type_defns_scalar_common_1[55]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_parse_tree_type_defns_scalar_common_1[54])))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "section."))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_parse_tree_type_defns_scalar_common_1[57]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_parse_tree_type_defns_scalar_common_1[12])))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "That definition is here."))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_parse_tree_type_defns_scalar_common_1[59]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_parse_tree_type_defns_scalar_common_1[12])))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "has this declaration, but it has no definition."))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_parse_tree_type_defns_scalar_common_1[61]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_parse_tree_type_defns_scalar_common_1[12])))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in the implementation section."))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_parse_tree_type_defns_scalar_common_1[63]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_parse_tree_type_defns_scalar_common_1[12])))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Such declarations must be"))
  },
  /* row 66 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_parse_tree_type_defns_scalar_common_1[65]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_parse_tree_type_defns_scalar_common_1[64])))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in the interface section of its defining module."))
  },
  /* row 68 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_parse_tree_type_defns_scalar_common_1[67]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_parse_tree_type_defns_scalar_common_1[66])))
  },
  /* row 69 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "of the module that defines the type they are for."))
  },
  /* row 70 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_parse_tree_type_defns_scalar_common_1[69]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_parse_tree_type_defns_scalar_common_1[12])))
  },
  /* row 71 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Such declarations must be in the implementation section"))
  },
  /* row 72 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_parse_tree_type_defns_scalar_common_1[71]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_parse_tree_type_defns_scalar_common_1[70])))
  },
  /* row 73 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in the wrong module."))
  },
  /* row 74 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_parse_tree_type_defns_scalar_common_1[73]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_parse_tree_type_defns_scalar_common_1[72])))
  },
  /* row 75 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The original definition is here."))
  },
  /* row 76 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_parse_tree_type_defns_scalar_common_1[75]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_parse_tree_type_defns_scalar_common_1[12])))
  },
  /* row 77 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The first occurrence of this field name"))
  },
  /* row 78 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_parse_tree_type_defns_scalar_common_1[77]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_parse_tree_type_defns_scalar_common_1[48])))
  },
  /* row 79 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 80 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the type"))
  },
  /* row 81 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "has a"))
  },
  /* row 82 */
  {
    ((MR_Box) ((MR_Unsigned) 19U)),
    ((MR_Box) ((MR_String) "foreign_type"))
  },
  /* row 83 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declarations for"))
  },
  /* row 84 */
  {
    ((MR_Box) (&parse_tree__check_parse_tree_type_defns_scalar_common_8[0])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 85 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the Mercury definition of"))
  },
  /* row 86 */
  {
    ((MR_Box) (&parse_tree__check_parse_tree_type_defns_scalar_common_8[1])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 87 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: a solver type such as"))
  },
  /* row 88 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: this declaration of"))
  },
  /* row 89 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is redundant,"))
  },
  /* row 90 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "since the type has a definition in the"))
  },
  /* row 91 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 92 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: since the Mercury definition of"))
  },
  /* row 93 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: a"))
  },
  /* row 94 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration for"))
  },
  /* row 95 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "without either"))
  },
  /* row 96 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "a Mercury definition or a Mercury declaration for"))
  },
  /* row 97 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: since some foreign language definition"))
  },
  /* row 98 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "of"))
  },
  /* row 99 */
  {
    ((MR_Box) (&parse_tree__check_parse_tree_type_defns_scalar_common_8[2])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 100 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: this definition of"))
  },
  /* row 101 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is incompatible"))
  },
  /* row 102 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "with the"))
  },
  /* row 103 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "definition"))
  },
  /* row 104 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in the"))
  },
  /* row 105 */
  {
    ((MR_Box) (&parse_tree__check_parse_tree_type_defns_scalar_common_8[3])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 106 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: this"))
  },
  /* row 107 */
  {
    ((MR_Box) ((MR_Unsigned) 19U)),
    ((MR_Box) ((MR_String) "foreign_enum"))
  },
  /* row 108 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is incompatible with the"))
  },
  /* row 109 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "definition in the"))
  },
  /* row 110 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 111 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration for the"))
  },
  /* row 112 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "type"))
  },
  /* row 113 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: duplicate"))
  },
  /* row 114 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "definition for"))
  },
  /* row 115 */
  {
    ((MR_Box) (&parse_tree__check_parse_tree_type_defns_scalar_common_8[4])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 116 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: duplicate foreign"))
  },
  /* row 117 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "definition in"))
  },
  /* row 118 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "for"))
  },
  /* row 119 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: duplicate occurrence of the field name"))
  },
  /* row 120 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in the function symbol"))
  },
  /* row 121 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in the definition of"))
  },
};

static /* final */ const MR_Box parse_tree__check_parse_tree_type_defns_scalar_common_2[9][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__type_ctor_info_type_ctor_checked_defn_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__check_parse_tree_type_defns_scalar_common_1[5]))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__check_parse_tree_type_defns_scalar_common_6[0])),
    ((MR_Box) (parse_tree__check_parse_tree_type_defns__create_type_ctor_checked_map_9_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__check_parse_tree_type_defns_scalar_common_6[1])),
    ((MR_Box) (parse_tree__check_parse_tree_type_defns__create_type_ctor_checked_map_9_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__check_parse_tree_type_defns_scalar_common_4[1])),
    ((MR_Box) (parse_tree__check_parse_tree_type_defns__at_most_one_type_defn_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__check_parse_tree_type_defns_scalar_common_4[1])),
    ((MR_Box) (parse_tree__check_parse_tree_type_defns__at_most_one_foreign_type_for_lang_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__check_parse_tree_type_defns_scalar_common_4[1])),
    ((MR_Box) (parse_tree__check_parse_tree_type_defns__at_most_one_foreign_type_for_all_langs_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&parse_tree__check_parse_tree_type_defns_scalar_common_4[2])),
    ((MR_Box) (parse_tree__check_parse_tree_type_defns__at_most_one_foreign_enum_for_lang_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&parse_tree__check_parse_tree_type_defns_scalar_common_4[2])),
    ((MR_Box) (parse_tree__check_parse_tree_type_defns__check_any_type_ctor_enums_for_duplicates_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__check_parse_tree_type_defns_scalar_common_3[2][4] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box parse_tree__check_parse_tree_type_defns_scalar_common_4[3][6] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (&parse_tree__check_parse_tree_type_defns_scalar_common_3[0]))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0)),
    ((MR_Box) (&parse_tree__check_parse_tree_type_defns__set_ordlist__pti_set_ordlist_1__plain_term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__check_parse_tree_type_defns__set_ordlist__pti_set_ordlist_1__plain_term__type_ctor_info_context_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)),
    ((MR_Box) (&parse_tree__check_parse_tree_type_defns__set_ordlist__pti_set_ordlist_1__plain_term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__check_parse_tree_type_defns__set_ordlist__pti_set_ordlist_1__plain_term__type_ctor_info_context_0))
  },
};

static /* final */ const MR_Box parse_tree__check_parse_tree_type_defns_scalar_common_5[1][14] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 11)),
    ((MR_Box) (&parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__type_ctor_info_maybe_insist_on_defn_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__check_parse_tree_type_defns__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__ti_type_ctor_defns_1list__ti_list_1parse_tree__prog_item__type_ctor_info_item_type_defn_info_0)),
    ((MR_Box) (&parse_tree__check_parse_tree_type_defns__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__ti_type_ctor_defns_1list__ti_list_1parse_tree__prog_item__type_ctor_info_item_type_defn_info_0)),
    ((MR_Box) (&parse_tree__check_parse_tree_type_defns__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__ti_c_java_csharp_erlang_1list__ti_list_1parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)),
    ((MR_Box) (&parse_tree__check_parse_tree_type_defns__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__ti_c_java_csharp_erlang_1list__ti_list_1parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__check_parse_tree_type_defns__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__check_parse_tree_type_defns__type_ctor_info_type_ctor_checked_defn_0)),
    ((MR_Box) (&parse_tree__check_parse_tree_type_defns__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__check_parse_tree_type_defns__type_ctor_info_type_ctor_checked_defn_0)),
    ((MR_Box) (&parse_tree__check_parse_tree_type_defns__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__check_parse_tree_type_defns__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box parse_tree__check_parse_tree_type_defns_scalar_common_6[4][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__type_ctor_info_type_ctor_checked_defn_0)),
    ((MR_Box) (&parse_tree__check_parse_tree_type_defns__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_one_or_more_1parse_tree__check_parse_tree_type_defns__type_ctor_info_field_name_locn_0)),
    ((MR_Box) (&parse_tree__check_parse_tree_type_defns__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_one_or_more_1parse_tree__check_parse_tree_type_defns__type_ctor_info_field_name_locn_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__check_parse_tree_type_defns__list__pti_one_or_more_1__plain_parse_tree__check_parse_tree_type_defns__type_ctor_info_field_name_locn_0)),
    ((MR_Box) (&parse_tree__check_parse_tree_type_defns__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__check_parse_tree_type_defns__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__check_parse_tree_type_defns__maybe__pti_maybe_1__plain_parse_tree__prog_item__type_ctor_info_item_type_defn_info_0)),
    ((MR_Box) (&parse_tree__check_parse_tree_type_defns__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__check_parse_tree_type_defns__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&parse_tree__check_parse_tree_type_defns__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_one_or_more_1parse_tree__check_parse_tree_type_defns__type_ctor_info_field_name_locn_0)),
    ((MR_Box) (&parse_tree__check_parse_tree_type_defns__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_one_or_more_1parse_tree__check_parse_tree_type_defns__type_ctor_info_field_name_locn_0))
  },
};

static /* final */ const MR_Box parse_tree__check_parse_tree_type_defns_scalar_common_7[6][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0)),
    ((MR_Box) (&parse_tree__check_parse_tree_type_defns__maybe__pti_maybe_1__plain_parse_tree__prog_item__type_ctor_info_item_type_defn_info_0)),
    ((MR_Box) (&parse_tree__check_parse_tree_type_defns__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__check_parse_tree_type_defns__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__check_parse_tree_type_defns__maybe__pti_maybe_1__plain_parse_tree__prog_item__type_ctor_info_item_type_defn_info_0)),
    ((MR_Box) (&parse_tree__check_parse_tree_type_defns__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__check_parse_tree_type_defns__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)),
    ((MR_Box) (&parse_tree__check_parse_tree_type_defns__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__check_parse_tree_type_defns__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__check_parse_tree_type_defns__maybe__pti_maybe_1__plain_parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)),
    ((MR_Box) (&parse_tree__check_parse_tree_type_defns__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__check_parse_tree_type_defns__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0)),
    ((MR_Box) (&parse_tree__check_parse_tree_type_defns__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_one_or_more_1parse_tree__check_parse_tree_type_defns__type_ctor_info_field_name_locn_0)),
    ((MR_Box) (&parse_tree__check_parse_tree_type_defns__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_one_or_more_1parse_tree__check_parse_tree_type_defns__type_ctor_info_field_name_locn_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__type_ctor_info_field_name_locn_0)),
    ((MR_Box) (&parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__type_ctor_info_field_name_locn_0)),
    ((MR_Box) (&parse_tree__check_parse_tree_type_defns__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__check_parse_tree_type_defns__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box parse_tree__check_parse_tree_type_defns_scalar_common_8[5][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_parse_tree_type_defns_scalar_common_1[24])))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_parse_tree_type_defns_scalar_common_1[32])))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_parse_tree_type_defns_scalar_common_1[50])))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_parse_tree_type_defns_scalar_common_1[60])))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_parse_tree_type_defns_scalar_common_1[76])))
  },
};

static /* final */ const MR_Box parse_tree__check_parse_tree_type_defns_scalar_common_9[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__check_parse_tree_type_defns__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__check_parse_tree_type_defns__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box parse_tree__check_parse_tree_type_defns_scalar_common_10[3][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__check_parse_tree_type_defns__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__check_parse_tree_type_defns__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__check_parse_tree_type_defns__maybe__pti_maybe_1__plain_parse_tree__prog_item__type_ctor_info_item_type_defn_info_0)),
    ((MR_Box) (&parse_tree__check_parse_tree_type_defns__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__check_parse_tree_type_defns__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__check_parse_tree_type_defns__maybe__pti_maybe_1__plain_parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)),
    ((MR_Box) (&parse_tree__check_parse_tree_type_defns__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__check_parse_tree_type_defns__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_TypeInfo_Struct1 parse_tree__check_parse_tree_type_defns__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_type_defn_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__check_parse_tree_type_defns__parse_tree__prog_item__ti_type_ctor_defns_1list__ti_list_1parse_tree__prog_item__type_ctor_info_item_type_defn_info_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_defns_1,
  {
    (MR_TypeInfo) (&parse_tree__check_parse_tree_type_defns__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_type_defn_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__check_parse_tree_type_defns__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__ti_type_ctor_defns_1list__ti_list_1parse_tree__prog_item__type_ctor_info_item_type_defn_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_PseudoTypeInfo) (&parse_tree__check_parse_tree_type_defns__parse_tree__prog_item__ti_type_ctor_defns_1list__ti_list_1parse_tree__prog_item__type_ctor_info_item_type_defn_info_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__check_parse_tree_type_defns__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__check_parse_tree_type_defns__parse_tree__prog_item__ti_c_java_csharp_erlang_1list__ti_list_1parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_c_java_csharp_erlang_1,
  {
    (MR_TypeInfo) (&parse_tree__check_parse_tree_type_defns__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__check_parse_tree_type_defns__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__ti_c_java_csharp_erlang_1list__ti_list_1parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_PseudoTypeInfo) (&parse_tree__check_parse_tree_type_defns__parse_tree__prog_item__ti_c_java_csharp_erlang_1list__ti_list_1parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__check_parse_tree_type_defns__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__check_parse_tree_type_defns__type_ctor_info_type_ctor_checked_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_PseudoTypeInfo) (&parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__type_ctor_info_type_ctor_checked_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__check_parse_tree_type_defns__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__check_parse_tree_type_defns__list__ti_one_or_more_1parse_tree__check_parse_tree_type_defns__type_ctor_info_field_name_locn_0 = {
  &mercury__list__list__type_ctor_info_one_or_more_1,
  {
    (MR_TypeInfo) (&parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__type_ctor_info_field_name_locn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__check_parse_tree_type_defns__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_one_or_more_1parse_tree__check_parse_tree_type_defns__type_ctor_info_field_name_locn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&parse_tree__check_parse_tree_type_defns__list__ti_one_or_more_1parse_tree__check_parse_tree_type_defns__type_ctor_info_field_name_locn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__check_parse_tree_type_defns__list__pti_one_or_more_1__plain_parse_tree__check_parse_tree_type_defns__type_ctor_info_field_name_locn_0 = {
  &mercury__list__list__type_ctor_info_one_or_more_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__type_ctor_info_field_name_locn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__check_parse_tree_type_defns__maybe__pti_maybe_1__plain_parse_tree__prog_item__type_ctor_info_item_type_defn_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__check_parse_tree_type_defns__set_ordlist__pti_set_ordlist_1__plain_term__type_ctor_info_context_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__check_parse_tree_type_defns__maybe__pti_maybe_1__plain_parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)
  }
};

static const MR_EnumFunctorDesc parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__enum_functor_desc_abstract_solver_type_status_0_0 = {
  (MR_String) "abstract_solver_type_exported",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__enum_functor_desc_abstract_solver_type_status_0_1 = {
  (MR_String) "abstract_solver_type_private",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__enum_value_ordered_abstract_solver_type_status_0[2] = {
  &parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__enum_functor_desc_abstract_solver_type_status_0_0,
  &parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__enum_functor_desc_abstract_solver_type_status_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__enum_name_ordered_abstract_solver_type_status_0[2] = {
  &parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__enum_functor_desc_abstract_solver_type_status_0_0,
  &parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__enum_functor_desc_abstract_solver_type_status_0_1
};

static const MR_Integer parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__functor_number_map_abstract_solver_type_status_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__type_ctor_info_abstract_solver_type_status_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__check_parse_tree_type_defns____Unify____abstract_solver_type_status_0_0_10001)),
  ((MR_Box) (parse_tree__check_parse_tree_type_defns____Compare____abstract_solver_type_status_0_0_10001)),
  (MR_String) "parse_tree.check_parse_tree_type_defns",
  (MR_String) "abstract_solver_type_status",
  {     parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__enum_name_ordered_abstract_solver_type_status_0 },
  {     parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__enum_value_ordered_abstract_solver_type_status_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__functor_number_map_abstract_solver_type_status_0
};

static const MR_FA_TypeInfo_Struct1 parse_tree__check_parse_tree_type_defns__maybe__ti_maybe_1parse_tree__check_parse_tree_type_defns__type_ctor_info_foreign_type_or_enum_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__type_ctor_info_foreign_type_or_enum_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__check_parse_tree_type_defns__parse_tree__prog_item__ti_c_java_csharp_erlang_1maybe__ti_maybe_1parse_tree__check_parse_tree_type_defns__type_ctor_info_foreign_type_or_enum_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_c_java_csharp_erlang_1,
  {
    (MR_TypeInfo) (&parse_tree__check_parse_tree_type_defns__maybe__ti_maybe_1parse_tree__check_parse_tree_type_defns__type_ctor_info_foreign_type_or_enum_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__type_ctor_info_c_j_cs_e_maybe_defn_or_enum_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__check_parse_tree_type_defns____Unify____c_j_cs_e_maybe_defn_or_enum_0_0_10001)),
  ((MR_Box) (parse_tree__check_parse_tree_type_defns____Compare____c_j_cs_e_maybe_defn_or_enum_0_0_10001)),
  (MR_String) "parse_tree.check_parse_tree_type_defns",
  (MR_String) "c_j_cs_e_maybe_defn_or_enum",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&parse_tree__check_parse_tree_type_defns__parse_tree__prog_item__ti_c_java_csharp_erlang_1maybe__ti_maybe_1parse_tree__check_parse_tree_type_defns__type_ctor_info_foreign_type_or_enum_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_PseudoTypeInfo parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__field_types_field_name_locn_0_0[3] = {
  (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_functor_desc_field_name_locn_0_0 = {
  (MR_String) "field_name_locn",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__field_types_field_name_locn_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_stag_ordered_field_name_locn_0_0[1] = {
  &parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_functor_desc_field_name_locn_0_0
};

static const MR_DuPtagLayout parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_ptag_ordered_field_name_locn_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_stag_ordered_field_name_locn_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_name_ordered_field_name_locn_0[1] = {
  &parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_functor_desc_field_name_locn_0_0
};

static const MR_Integer parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__functor_number_map_field_name_locn_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__type_ctor_info_field_name_locn_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__check_parse_tree_type_defns____Unify____field_name_locn_0_0_10001)),
  ((MR_Box) (parse_tree__check_parse_tree_type_defns____Compare____field_name_locn_0_0_10001)),
  (MR_String) "parse_tree.check_parse_tree_type_defns",
  (MR_String) "field_name_locn",
  {     parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_name_ordered_field_name_locn_0 },
  {     parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_ptag_ordered_field_name_locn_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__functor_number_map_field_name_locn_0
};

static const MR_FA_TypeInfo_Struct2 parse_tree__check_parse_tree_type_defns__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_one_or_more_1parse_tree__check_parse_tree_type_defns__type_ctor_info_field_name_locn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_TypeInfo) (&parse_tree__check_parse_tree_type_defns__list__ti_one_or_more_1parse_tree__check_parse_tree_type_defns__type_ctor_info_field_name_locn_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__type_ctor_info_field_name_map_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__check_parse_tree_type_defns____Unify____field_name_map_0_0_10001)),
  ((MR_Box) (parse_tree__check_parse_tree_type_defns____Compare____field_name_map_0_0_10001)),
  (MR_String) "parse_tree.check_parse_tree_type_defns",
  (MR_String) "field_name_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&parse_tree__check_parse_tree_type_defns__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_one_or_more_1parse_tree__check_parse_tree_type_defns__type_ctor_info_field_name_locn_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_PseudoTypeInfo parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__field_types_foreign_type_or_enum_0_0[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0)
};

static const MR_DuFunctorDesc parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_functor_desc_foreign_type_or_enum_0_0 = {
  (MR_String) "foreign_type_or_enum_type",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__field_types_foreign_type_or_enum_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__field_types_foreign_type_or_enum_0_1[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)
};

static const MR_DuFunctorDesc parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_functor_desc_foreign_type_or_enum_0_1 = {
  (MR_String) "foreign_type_or_enum_enum",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__field_types_foreign_type_or_enum_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_stag_ordered_foreign_type_or_enum_0_0[1] = {
  &parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_functor_desc_foreign_type_or_enum_0_0
};

static const MR_DuFunctorDescPtr parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_stag_ordered_foreign_type_or_enum_0_1[1] = {
  &parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_functor_desc_foreign_type_or_enum_0_1
};

static const MR_DuPtagLayout parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_ptag_ordered_foreign_type_or_enum_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_stag_ordered_foreign_type_or_enum_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_stag_ordered_foreign_type_or_enum_0_1,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_name_ordered_foreign_type_or_enum_0[2] = {
  &parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_functor_desc_foreign_type_or_enum_0_1,
  &parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_functor_desc_foreign_type_or_enum_0_0
};

static const MR_Integer parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__functor_number_map_foreign_type_or_enum_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__type_ctor_info_foreign_type_or_enum_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__check_parse_tree_type_defns____Unify____foreign_type_or_enum_0_0_10001)),
  ((MR_Box) (parse_tree__check_parse_tree_type_defns____Compare____foreign_type_or_enum_0_0_10001)),
  (MR_String) "parse_tree.check_parse_tree_type_defns",
  (MR_String) "foreign_type_or_enum",
  {     parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_name_ordered_foreign_type_or_enum_0 },
  {     parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_ptag_ordered_foreign_type_or_enum_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__functor_number_map_foreign_type_or_enum_0
};

static const MR_EnumFunctorDesc parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__enum_functor_desc_maybe_insist_on_defn_0_0 = {
  (MR_String) "do_not_insist_on_defn",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__enum_functor_desc_maybe_insist_on_defn_0_1 = {
  (MR_String) "do_insist_on_defn",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__enum_value_ordered_maybe_insist_on_defn_0[2] = {
  &parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__enum_functor_desc_maybe_insist_on_defn_0_0,
  &parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__enum_functor_desc_maybe_insist_on_defn_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__enum_name_ordered_maybe_insist_on_defn_0[2] = {
  &parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__enum_functor_desc_maybe_insist_on_defn_0_1,
  &parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__enum_functor_desc_maybe_insist_on_defn_0_0
};

static const MR_Integer parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__functor_number_map_maybe_insist_on_defn_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__type_ctor_info_maybe_insist_on_defn_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__check_parse_tree_type_defns____Unify____maybe_insist_on_defn_0_0_10001)),
  ((MR_Box) (parse_tree__check_parse_tree_type_defns____Compare____maybe_insist_on_defn_0_0_10001)),
  (MR_String) "parse_tree.check_parse_tree_type_defns",
  (MR_String) "maybe_insist_on_defn",
  {     parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__enum_name_ordered_maybe_insist_on_defn_0 },
  {     parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__enum_value_ordered_maybe_insist_on_defn_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__functor_number_map_maybe_insist_on_defn_0
};

static const MR_DuFunctorDesc parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_functor_desc_maybe_only_constants_0_0 = {
  (MR_String) "not_only_constants",
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

static const MR_PseudoTypeInfo parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__field_types_maybe_only_constants_0_1[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_ConstString parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__field_names_maybe_only_constants_0_1[2] = {
  (MR_String) "oc_num_functors",
  (MR_String) "oc_num_bits"
};

static const MR_DuFunctorDesc parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_functor_desc_maybe_only_constants_0_1 = {
  (MR_String) "only_constants",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__field_types_maybe_only_constants_0_1,
  parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__field_names_maybe_only_constants_0_1,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_stag_ordered_maybe_only_constants_0_0[1] = {
  &parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_functor_desc_maybe_only_constants_0_0
};

static const MR_DuFunctorDescPtr parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_stag_ordered_maybe_only_constants_0_1[1] = {
  &parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_functor_desc_maybe_only_constants_0_1
};

static const MR_DuPtagLayout parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_ptag_ordered_maybe_only_constants_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_stag_ordered_maybe_only_constants_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_stag_ordered_maybe_only_constants_0_1,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_name_ordered_maybe_only_constants_0[2] = {
  &parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_functor_desc_maybe_only_constants_0_0,
  &parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_functor_desc_maybe_only_constants_0_1
};

static const MR_Integer parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__functor_number_map_maybe_only_constants_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__type_ctor_info_maybe_only_constants_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__check_parse_tree_type_defns____Unify____maybe_only_constants_0_0_10001)),
  ((MR_Box) (parse_tree__check_parse_tree_type_defns____Compare____maybe_only_constants_0_0_10001)),
  (MR_String) "parse_tree.check_parse_tree_type_defns",
  (MR_String) "maybe_only_constants",
  {     parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_name_ordered_maybe_only_constants_0 },
  {     parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_ptag_ordered_maybe_only_constants_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__functor_number_map_maybe_only_constants_0
};

static const MR_PseudoTypeInfo parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__field_types_solver_type_defn_0_0[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__type_ctor_info_abstract_solver_type_status_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0)
};

static const MR_DuArgLocn parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__field_locns_solver_type_defn_0_0[2] = {
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

static const MR_DuFunctorDesc parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_functor_desc_solver_type_defn_0_0 = {
  (MR_String) "solver_type_abstract",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__field_types_solver_type_defn_0_0,
  NULL,
  parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__field_locns_solver_type_defn_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 parse_tree__check_parse_tree_type_defns__maybe__ti_maybe_1parse_tree__prog_item__type_ctor_info_item_type_defn_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0)
  }
};

static const MR_PseudoTypeInfo parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__field_types_solver_type_defn_0_1[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__check_parse_tree_type_defns__maybe__ti_maybe_1parse_tree__prog_item__type_ctor_info_item_type_defn_info_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0)
};

static const MR_DuFunctorDesc parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_functor_desc_solver_type_defn_0_1 = {
  (MR_String) "solver_type_full",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__field_types_solver_type_defn_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_stag_ordered_solver_type_defn_0_0[1] = {
  &parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_functor_desc_solver_type_defn_0_0
};

static const MR_DuFunctorDescPtr parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_stag_ordered_solver_type_defn_0_1[1] = {
  &parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_functor_desc_solver_type_defn_0_1
};

static const MR_DuPtagLayout parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_ptag_ordered_solver_type_defn_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_stag_ordered_solver_type_defn_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_stag_ordered_solver_type_defn_0_1,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_name_ordered_solver_type_defn_0[2] = {
  &parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_functor_desc_solver_type_defn_0_0,
  &parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_functor_desc_solver_type_defn_0_1
};

static const MR_Integer parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__functor_number_map_solver_type_defn_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__type_ctor_info_solver_type_defn_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__check_parse_tree_type_defns____Unify____solver_type_defn_0_0_10001)),
  ((MR_Box) (parse_tree__check_parse_tree_type_defns____Compare____solver_type_defn_0_0_10001)),
  (MR_String) "parse_tree.check_parse_tree_type_defns",
  (MR_String) "solver_type_defn",
  {     parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_name_ordered_solver_type_defn_0 },
  {     parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_ptag_ordered_solver_type_defn_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__functor_number_map_solver_type_defn_0
};

static const MR_EnumFunctorDesc parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__enum_functor_desc_std_abs_type_status_0_0 = {
  (MR_String) "std_abs_type_ft_exported",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__enum_functor_desc_std_abs_type_status_0_1 = {
  (MR_String) "std_abs_type_abstract_exported",
  INT32_C(1)
};

static const MR_EnumFunctorDesc parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__enum_functor_desc_std_abs_type_status_0_2 = {
  (MR_String) "std_abs_type_all_private",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__enum_value_ordered_std_abs_type_status_0[3] = {
  &parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__enum_functor_desc_std_abs_type_status_0_0,
  &parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__enum_functor_desc_std_abs_type_status_0_1,
  &parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__enum_functor_desc_std_abs_type_status_0_2
};

static const MR_EnumFunctorDescPtr parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__enum_name_ordered_std_abs_type_status_0[3] = {
  &parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__enum_functor_desc_std_abs_type_status_0_1,
  &parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__enum_functor_desc_std_abs_type_status_0_2,
  &parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__enum_functor_desc_std_abs_type_status_0_0
};

static const MR_Integer parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__functor_number_map_std_abs_type_status_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__type_ctor_info_std_abs_type_status_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__check_parse_tree_type_defns____Unify____std_abs_type_status_0_0_10001)),
  ((MR_Box) (parse_tree__check_parse_tree_type_defns____Compare____std_abs_type_status_0_0_10001)),
  (MR_String) "parse_tree.check_parse_tree_type_defns",
  (MR_String) "std_abs_type_status",
  {     parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__enum_name_ordered_std_abs_type_status_0 },
  {     parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__enum_value_ordered_std_abs_type_status_0 },
  (MR_Integer) 3,
  UINT16_C(4),
  parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__functor_number_map_std_abs_type_status_0
};

static const MR_EnumFunctorDesc parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__enum_functor_desc_std_du_type_status_0_0 = {
  (MR_String) "std_du_type_mer_ft_exported",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__enum_functor_desc_std_du_type_status_0_1 = {
  (MR_String) "std_du_type_mer_exported",
  INT32_C(1)
};

static const MR_EnumFunctorDesc parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__enum_functor_desc_std_du_type_status_0_2 = {
  (MR_String) "std_du_type_abstract_exported",
  INT32_C(2)
};

static const MR_EnumFunctorDesc parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__enum_functor_desc_std_du_type_status_0_3 = {
  (MR_String) "std_du_type_all_private",
  INT32_C(3)
};

static const MR_EnumFunctorDescPtr parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__enum_value_ordered_std_du_type_status_0[4] = {
  &parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__enum_functor_desc_std_du_type_status_0_0,
  &parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__enum_functor_desc_std_du_type_status_0_1,
  &parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__enum_functor_desc_std_du_type_status_0_2,
  &parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__enum_functor_desc_std_du_type_status_0_3
};

static const MR_EnumFunctorDescPtr parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__enum_name_ordered_std_du_type_status_0[4] = {
  &parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__enum_functor_desc_std_du_type_status_0_2,
  &parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__enum_functor_desc_std_du_type_status_0_3,
  &parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__enum_functor_desc_std_du_type_status_0_1,
  &parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__enum_functor_desc_std_du_type_status_0_0
};

static const MR_Integer parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__functor_number_map_std_du_type_status_0[4] = {
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__type_ctor_info_std_du_type_status_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__check_parse_tree_type_defns____Unify____std_du_type_status_0_0_10001)),
  ((MR_Box) (parse_tree__check_parse_tree_type_defns____Compare____std_du_type_status_0_0_10001)),
  (MR_String) "parse_tree.check_parse_tree_type_defns",
  (MR_String) "std_du_type_status",
  {     parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__enum_name_ordered_std_du_type_status_0 },
  {     parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__enum_value_ordered_std_du_type_status_0 },
  (MR_Integer) 4,
  UINT16_C(4),
  parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__functor_number_map_std_du_type_status_0
};

static const MR_EnumFunctorDesc parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__enum_functor_desc_std_eqv_type_status_0_0 = {
  (MR_String) "std_eqv_type_mer_exported",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__enum_functor_desc_std_eqv_type_status_0_1 = {
  (MR_String) "std_eqv_type_abstract_exported",
  INT32_C(1)
};

static const MR_EnumFunctorDesc parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__enum_functor_desc_std_eqv_type_status_0_2 = {
  (MR_String) "std_eqv_type_all_private",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__enum_value_ordered_std_eqv_type_status_0[3] = {
  &parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__enum_functor_desc_std_eqv_type_status_0_0,
  &parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__enum_functor_desc_std_eqv_type_status_0_1,
  &parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__enum_functor_desc_std_eqv_type_status_0_2
};

static const MR_EnumFunctorDescPtr parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__enum_name_ordered_std_eqv_type_status_0[3] = {
  &parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__enum_functor_desc_std_eqv_type_status_0_1,
  &parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__enum_functor_desc_std_eqv_type_status_0_2,
  &parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__enum_functor_desc_std_eqv_type_status_0_0
};

static const MR_Integer parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__functor_number_map_std_eqv_type_status_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__type_ctor_info_std_eqv_type_status_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__check_parse_tree_type_defns____Unify____std_eqv_type_status_0_0_10001)),
  ((MR_Box) (parse_tree__check_parse_tree_type_defns____Compare____std_eqv_type_status_0_0_10001)),
  (MR_String) "parse_tree.check_parse_tree_type_defns",
  (MR_String) "std_eqv_type_status",
  {     parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__enum_name_ordered_std_eqv_type_status_0 },
  {     parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__enum_value_ordered_std_eqv_type_status_0 },
  (MR_Integer) 3,
  UINT16_C(4),
  parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__functor_number_map_std_eqv_type_status_0
};

static const MR_PseudoTypeInfo parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__field_types_std_type_defn_0_0[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__type_ctor_info_std_eqv_type_status_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0)
};

static const MR_DuArgLocn parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__field_locns_std_type_defn_0_0[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_functor_desc_std_type_defn_0_0 = {
  (MR_String) "std_mer_type_eqv",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__field_types_std_type_defn_0_0,
  NULL,
  parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__field_locns_std_type_defn_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__field_types_std_type_defn_0_1[4] = {
  (MR_PseudoTypeInfo) (&parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__type_ctor_info_std_du_type_status_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0),
  (MR_PseudoTypeInfo) (&parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__type_ctor_info_maybe_only_constants_0),
  (MR_PseudoTypeInfo) (&parse_tree__check_parse_tree_type_defns__parse_tree__prog_item__ti_c_java_csharp_erlang_1maybe__ti_maybe_1parse_tree__check_parse_tree_type_defns__type_ctor_info_foreign_type_or_enum_0)
};

static const MR_DuArgLocn parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__field_locns_std_type_defn_0_1[4] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 2
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

static const MR_DuFunctorDesc parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_functor_desc_std_type_defn_0_1 = {
  (MR_String) "std_mer_type_du",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__field_types_std_type_defn_0_1,
  NULL,
  parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__field_locns_std_type_defn_0_1,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 parse_tree__check_parse_tree_type_defns__parse_tree__prog_item__ti_c_java_csharp_erlang_1maybe__ti_maybe_1parse_tree__prog_item__type_ctor_info_item_type_defn_info_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_c_java_csharp_erlang_1,
  {
    (MR_TypeInfo) (&parse_tree__check_parse_tree_type_defns__maybe__ti_maybe_1parse_tree__prog_item__type_ctor_info_item_type_defn_info_0)
  }
};

static const MR_PseudoTypeInfo parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__field_types_std_type_defn_0_2[3] = {
  (MR_PseudoTypeInfo) (&parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__type_ctor_info_std_abs_type_status_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0),
  (MR_PseudoTypeInfo) (&parse_tree__check_parse_tree_type_defns__parse_tree__prog_item__ti_c_java_csharp_erlang_1maybe__ti_maybe_1parse_tree__prog_item__type_ctor_info_item_type_defn_info_0)
};

static const MR_DuArgLocn parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__field_locns_std_type_defn_0_2[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 2
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
  }
};

static const MR_DuFunctorDesc parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_functor_desc_std_type_defn_0_2 = {
  (MR_String) "std_mer_type_abstract",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__field_types_std_type_defn_0_2,
  NULL,
  parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__field_locns_std_type_defn_0_2,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_stag_ordered_std_type_defn_0_0[1] = {
  &parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_functor_desc_std_type_defn_0_0
};

static const MR_DuFunctorDescPtr parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_stag_ordered_std_type_defn_0_1[1] = {
  &parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_functor_desc_std_type_defn_0_1
};

static const MR_DuFunctorDescPtr parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_stag_ordered_std_type_defn_0_2[1] = {
  &parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_functor_desc_std_type_defn_0_2
};

static const MR_DuPtagLayout parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_ptag_ordered_std_type_defn_0[3] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_stag_ordered_std_type_defn_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_stag_ordered_std_type_defn_0_1,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_stag_ordered_std_type_defn_0_2,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_name_ordered_std_type_defn_0[3] = {
  &parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_functor_desc_std_type_defn_0_2,
  &parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_functor_desc_std_type_defn_0_1,
  &parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_functor_desc_std_type_defn_0_0
};

static const MR_Integer parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__functor_number_map_std_type_defn_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__type_ctor_info_std_type_defn_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__check_parse_tree_type_defns____Unify____std_type_defn_0_0_10001)),
  ((MR_Box) (parse_tree__check_parse_tree_type_defns____Compare____std_type_defn_0_0_10001)),
  (MR_String) "parse_tree.check_parse_tree_type_defns",
  (MR_String) "std_type_defn",
  {     parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_name_ordered_std_type_defn_0 },
  {     parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_ptag_ordered_std_type_defn_0 },
  (MR_Integer) 3,
  UINT16_C(4),
  parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__functor_number_map_std_type_defn_0
};

static const MR_PseudoTypeInfo parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__field_types_type_ctor_checked_defn_0_0[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__type_ctor_info_solver_type_defn_0)
};

static const MR_DuFunctorDesc parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_functor_desc_type_ctor_checked_defn_0_0 = {
  (MR_String) "checked_defn_solver",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__field_types_type_ctor_checked_defn_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__field_types_type_ctor_checked_defn_0_1[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__type_ctor_info_std_type_defn_0)
};

static const MR_DuFunctorDesc parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_functor_desc_type_ctor_checked_defn_0_1 = {
  (MR_String) "checked_defn_std",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__field_types_type_ctor_checked_defn_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_stag_ordered_type_ctor_checked_defn_0_0[1] = {
  &parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_functor_desc_type_ctor_checked_defn_0_0
};

static const MR_DuFunctorDescPtr parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_stag_ordered_type_ctor_checked_defn_0_1[1] = {
  &parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_functor_desc_type_ctor_checked_defn_0_1
};

static const MR_DuPtagLayout parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_ptag_ordered_type_ctor_checked_defn_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_stag_ordered_type_ctor_checked_defn_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_stag_ordered_type_ctor_checked_defn_0_1,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_name_ordered_type_ctor_checked_defn_0[2] = {
  &parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_functor_desc_type_ctor_checked_defn_0_0,
  &parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_functor_desc_type_ctor_checked_defn_0_1
};

static const MR_Integer parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__functor_number_map_type_ctor_checked_defn_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__type_ctor_info_type_ctor_checked_defn_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__check_parse_tree_type_defns____Unify____type_ctor_checked_defn_0_0_10001)),
  ((MR_Box) (parse_tree__check_parse_tree_type_defns____Compare____type_ctor_checked_defn_0_0_10001)),
  (MR_String) "parse_tree.check_parse_tree_type_defns",
  (MR_String) "type_ctor_checked_defn",
  {     parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_name_ordered_type_ctor_checked_defn_0 },
  {     parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__du_ptag_ordered_type_ctor_checked_defn_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__functor_number_map_type_ctor_checked_defn_0
};

static const MR_FA_TypeInfo_Struct2 parse_tree__check_parse_tree_type_defns__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__check_parse_tree_type_defns__type_ctor_info_type_ctor_checked_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_TypeInfo) (&parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__type_ctor_info_type_ctor_checked_defn_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__type_ctor_info_type_ctor_checked_map_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__check_parse_tree_type_defns____Unify____type_ctor_checked_map_0_0_10001)),
  ((MR_Box) (parse_tree__check_parse_tree_type_defns____Compare____type_ctor_checked_map_0_0_10001)),
  (MR_String) "parse_tree.check_parse_tree_type_defns",
  (MR_String) "type_ctor_checked_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&parse_tree__check_parse_tree_type_defns__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__check_parse_tree_type_defns__type_ctor_info_type_ctor_checked_defn_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

void MR_CALL 
parse_tree__check_parse_tree_type_defns____Compare____type_ctor_checked_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__check_parse_tree_type_defns_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
parse_tree__check_parse_tree_type_defns____Unify____type_ctor_checked_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__check_parse_tree_type_defns_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
parse_tree__check_parse_tree_type_defns____Compare____type_ctor_checked_defn_0_0(
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
      MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
      {
        MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));

        parse_tree__check_parse_tree_type_defns____Compare____solver_type_defn_0_0(HeadVar__1_1, Var_16, ArgY1_5);
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

        parse_tree__check_parse_tree_type_defns____Compare____std_type_defn_0_0(HeadVar__1_1, Var_17, ArgY1_11);
      }
    }
  }
}

MR_bool MR_CALL 
parse_tree__check_parse_tree_type_defns____Unify____type_ctor_checked_defn_0_0(
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
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
      if (succeeded)
      {
        ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
        succeeded = parse_tree__check_parse_tree_type_defns____Unify____solver_type_defn_0_0(ArgX1_3, ArgY1_4);
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
        succeeded = parse_tree__check_parse_tree_type_defns____Unify____std_type_defn_0_0(ArgX1_5, ArgY1_6);
      }
    }
    return succeeded;
  }
}

void MR_CALL 
parse_tree__check_parse_tree_type_defns____Compare____std_type_defn_0_0(
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
            MR_Word Var_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
            MR_Word Var_83 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 3);

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 3);
                  MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word SubResult1_6;
                  MR_Integer Var_88 = (MR_Integer) (Var_83);
                  MR_Integer Var_89 = (MR_Integer) (ArgY1_5);

                  succeeded = (Var_88 < Var_89);
                  if (succeeded)
                  {
                    SubResult1_6 = (MR_Integer) 1;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = (Var_88 > Var_89);
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
                    parse_tree__prog_item____Compare____item_type_defn_info_0_0(HeadVar__1_1, Var_82, ArgY2_8);
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
            MR_Word Var_78 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))));
            MR_Word Var_79 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
            MR_Word Var_80 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
            MR_Word Var_81 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 3);

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_27 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 3);
                  MR_Word ArgY2_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word ArgY3_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 2))));
                  MR_Word ArgY4_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 3))));
                  MR_Word SubResult1_28;
                  MR_Integer Var_86 = (MR_Integer) (Var_81);
                  MR_Integer Var_87 = (MR_Integer) (ArgY1_27);

                  succeeded = (Var_86 < Var_87);
                  if (succeeded)
                  {
                    SubResult1_28 = (MR_Integer) 1;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = (Var_86 > Var_87);
                    if (succeeded)
                    {
                      SubResult1_28 = (MR_Integer) 2;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = MR_TRUE;
                      succeeded = !(succeeded);
                      if (succeeded)
                      {
                        SubResult1_28 = (MR_Integer) 0;
                        succeeded = MR_TRUE;
                      }
                    }
                  }
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_28;
                  else
                  {
                    MR_Word SubResult2_31;

                    parse_tree__prog_item____Compare____item_type_defn_info_0_0(&SubResult2_31, Var_80, ArgY2_30);
                    succeeded = (SubResult2_31 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult2_31;
                    else
                    {
                      MR_Word SubResult3_34;

                      parse_tree__check_parse_tree_type_defns____Compare____maybe_only_constants_0_0(&SubResult3_34, Var_79, ArgY3_33);
                      succeeded = (SubResult3_34 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult3_34;
                      else
                        mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__check_parse_tree_type_defns_scalar_common_1[10]), HeadVar__1_1, ((MR_Box) (Var_78)), ((MR_Box) (ArgY4_36)));
                    }
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
            MR_Word Var_75 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2))));
            MR_Word Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
            MR_Word Var_77 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 3);

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
                  MR_Word ArgY1_57 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 3);
                  MR_Word ArgY2_60 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word ArgY3_63 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 2))));
                  MR_Word SubResult1_58;
                  MR_Integer Var_84 = (MR_Integer) (Var_77);
                  MR_Integer Var_85 = (MR_Integer) (ArgY1_57);

                  succeeded = (Var_84 < Var_85);
                  if (succeeded)
                  {
                    SubResult1_58 = (MR_Integer) 1;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = (Var_84 > Var_85);
                    if (succeeded)
                    {
                      SubResult1_58 = (MR_Integer) 2;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = MR_TRUE;
                      succeeded = !(succeeded);
                      if (succeeded)
                      {
                        SubResult1_58 = (MR_Integer) 0;
                        succeeded = MR_TRUE;
                      }
                    }
                  }
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_58;
                  else
                  {
                    MR_Word SubResult2_61;

                    parse_tree__prog_item____Compare____item_type_defn_info_0_0(&SubResult2_61, Var_76, ArgY2_60);
                    succeeded = (SubResult2_61 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult2_61;
                    else
                      mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__check_parse_tree_type_defns_scalar_common_1[11]), HeadVar__1_1, ((MR_Box) (Var_75)), ((MR_Box) (ArgY3_63)));
                  }
                }
                break;
            }
          }
          break;
      }
  }
}

MR_bool MR_CALL 
parse_tree__check_parse_tree_type_defns____Unify____std_type_defn_0_0(
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
            MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 3);
            MR_Word ArgY1_4;
            MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word ArgY2_6;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
            if (succeeded)
            {
              ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 3);
              ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
              succeeded = (ArgX1_3 == ArgY1_4);
              if (succeeded)
                succeeded = parse_tree__prog_item____Unify____item_type_defn_info_0_0(ArgX2_5, ArgY2_6);
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word TypeInfo_26_26;
            MR_Word ArgX1_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 3);
            MR_Word ArgY1_8;
            MR_Word ArgX2_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word ArgY2_10;
            MR_Word ArgX3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2))));
            MR_Word ArgY3_12;
            MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 3))));
            MR_Word ArgY4_14;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 3);
              ArgY2_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
              ArgY3_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
              ArgY4_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))));
              succeeded = (ArgX1_7 == ArgY1_8);
              if (succeeded)
              {
                succeeded = parse_tree__prog_item____Unify____item_type_defn_info_0_0(ArgX2_9, ArgY2_10);
                if (succeeded)
                {
                  succeeded = parse_tree__check_parse_tree_type_defns____Unify____maybe_only_constants_0_0(ArgX3_11, ArgY3_12);
                  if (succeeded)
                  {
                    TypeInfo_26_26 = (MR_Word) (&parse_tree__check_parse_tree_type_defns_scalar_common_1[10]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_26_26, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
                  }
                }
              }
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word TypeInfo_24_24;
            MR_Word ArgX1_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 3);
            MR_Word ArgY1_16;
            MR_Word ArgX2_17 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word ArgY2_18;
            MR_Word ArgX3_19 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 2))));
            MR_Word ArgY3_20;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 3);
              ArgY2_18 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
              ArgY3_20 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2))));
              succeeded = (ArgX1_15 == ArgY1_16);
              if (succeeded)
              {
                succeeded = parse_tree__prog_item____Unify____item_type_defn_info_0_0(ArgX2_17, ArgY2_18);
                if (succeeded)
                {
                  TypeInfo_24_24 = (MR_Word) (&parse_tree__check_parse_tree_type_defns_scalar_common_1[11]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_24_24, ((MR_Box) (ArgX3_19)), ((MR_Box) (ArgY3_20)));
                }
              }
            }
          }
          break;
      }
    return succeeded;
  }
}

void MR_CALL 
parse_tree__check_parse_tree_type_defns____Compare____std_eqv_type_status_0_0(
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
parse_tree__check_parse_tree_type_defns____Unify____std_eqv_type_status_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
parse_tree__check_parse_tree_type_defns____Compare____std_du_type_status_0_0(
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
parse_tree__check_parse_tree_type_defns____Unify____std_du_type_status_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
parse_tree__check_parse_tree_type_defns____Compare____std_abs_type_status_0_0(
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
parse_tree__check_parse_tree_type_defns____Unify____std_abs_type_status_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
parse_tree__check_parse_tree_type_defns____Compare____solver_type_defn_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_22 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_23 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_22 == CastY_23);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
    {
      MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_29 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
      {
        MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
        MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word SubResult1_6;
        MR_Integer Var_32 = (MR_Integer) (Var_29);
        MR_Integer Var_33 = (MR_Integer) (ArgY1_5);

        succeeded = (Var_32 < Var_33);
        if (succeeded)
        {
          SubResult1_6 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (Var_32 > Var_33);
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
          parse_tree__prog_item____Compare____item_type_defn_info_0_0(HeadVar__1_1, Var_28, ArgY2_8);
      }
      else
        *HeadVar__1_1 = (MR_Integer) 1;
    }
    else
    {
      MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word ArgY1_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_Word ArgY2_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word SubResult1_19;

        mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__check_parse_tree_type_defns_scalar_common_1[6]), &SubResult1_19, ((MR_Box) (Var_31)), ((MR_Box) (ArgY1_18)));
        succeeded = (SubResult1_19 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult1_19;
        else
          parse_tree__prog_item____Compare____item_type_defn_info_0_0(HeadVar__1_1, Var_30, ArgY2_21);
      }
    }
  }
}

MR_bool MR_CALL 
parse_tree__check_parse_tree_type_defns____Unify____solver_type_defn_0_0(
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
    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
    {
      MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgY1_4;
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
      if (succeeded)
      {
        ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
        ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
        succeeded = (ArgX1_3 == ArgY1_4);
        if (succeeded)
          succeeded = parse_tree__prog_item____Unify____item_type_defn_info_0_0(ArgX2_5, ArgY2_6);
      }
    }
    else
    {
      MR_Word TypeInfo_14_14;
      MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_8;
      MR_Word ArgX2_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_10;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
      if (succeeded)
      {
        ArgY1_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        ArgY2_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        TypeInfo_14_14 = (MR_Word) (&parse_tree__check_parse_tree_type_defns_scalar_common_1[6]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX1_7)), ((MR_Box) (ArgY1_8)));
        if (succeeded)
          succeeded = parse_tree__prog_item____Unify____item_type_defn_info_0_0(ArgX2_9, ArgY2_10);
      }
    }
    return succeeded;
  }
}

void MR_CALL 
parse_tree__check_parse_tree_type_defns____Compare____maybe_only_constants_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
      MR_Integer Var_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer Var_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Integer ArgY1_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_Integer ArgY2_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word SubResult1_10;

        succeeded = (Var_18 < ArgY1_9);
        if (succeeded)
        {
          SubResult1_10 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (Var_18 > ArgY1_9);
          if (succeeded)
          {
            SubResult1_10 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = MR_TRUE;
            succeeded = !(succeeded);
            if (succeeded)
            {
              SubResult1_10 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
          }
        }
        if (succeeded)
          *HeadVar__1_1 = SubResult1_10;
        else
        {
          succeeded = (Var_17 < ArgY2_12);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 1;
          else
          {
            succeeded = (Var_17 > ArgY2_12);
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

MR_bool MR_CALL 
parse_tree__check_parse_tree_type_defns____Unify____maybe_only_constants_0_0(
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
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
      MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

      succeeded = (CastY_4 == CastX_3);
    }
    else
    {
      MR_Integer ArgX1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Integer ArgY1_6;
      MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer ArgY2_8;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgY1_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        ArgY2_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        succeeded = (ArgX1_5 == ArgY1_6);
        if (succeeded)
          succeeded = (ArgX2_7 == ArgY2_8);
      }
    }
    return succeeded;
  }
}

void MR_CALL 
parse_tree__check_parse_tree_type_defns____Compare____maybe_insist_on_defn_0_0(
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
parse_tree__check_parse_tree_type_defns____Unify____maybe_insist_on_defn_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
parse_tree__check_parse_tree_type_defns____Compare____foreign_type_or_enum_0_0(
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
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
    {
      MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
      {
        MR_Word ArgY1_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

        parse_tree__prog_item____Compare____item_foreign_enum_info_0_0(HeadVar__1_1, Var_16, ArgY1_11);
      }
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    }
    else
    {
      MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));

        parse_tree__prog_item____Compare____item_type_defn_info_0_0(HeadVar__1_1, Var_17, ArgY1_5);
      }
    }
  }
}

MR_bool MR_CALL 
parse_tree__check_parse_tree_type_defns____Unify____foreign_type_or_enum_0_0(
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
    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
    {
      MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_6;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
      if (succeeded)
      {
        ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        succeeded = parse_tree__prog_item____Unify____item_foreign_enum_info_0_0(ArgX1_5, ArgY1_6);
      }
    }
    else
    {
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
      if (succeeded)
      {
        ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
        succeeded = parse_tree__prog_item____Unify____item_type_defn_info_0_0(ArgX1_3, ArgY1_4);
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__check_parse_tree_type_defns____Compare____field_name_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__check_parse_tree_type_defns_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
parse_tree__check_parse_tree_type_defns____Unify____field_name_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__check_parse_tree_type_defns_scalar_common_2[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__check_parse_tree_type_defns____Compare____field_name_locn_0_0(
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
      MR_String ArgX3_10 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_String ArgY3_11 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word SubResult1_6;

      mercury__term____Compare____context_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
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
          mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX3_10, ArgY3_11);
      }
    }
  }
}

static MR_bool MR_CALL 
parse_tree__check_parse_tree_type_defns____Unify____field_name_locn_0_0(
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
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_String ArgX3_7 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_String ArgY3_8 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));

      succeeded = mercury__term____Unify____context_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
          succeeded = (strcmp(ArgX3_7, ArgY3_8) == 0);
      }
    }
    return succeeded;
  }
}

void MR_CALL 
parse_tree__check_parse_tree_type_defns____Compare____c_j_cs_e_maybe_defn_or_enum_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__check_parse_tree_type_defns_scalar_common_1[10]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
parse_tree__check_parse_tree_type_defns____Unify____c_j_cs_e_maybe_defn_or_enum_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__check_parse_tree_type_defns_scalar_common_1[10]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
parse_tree__check_parse_tree_type_defns____Compare____abstract_solver_type_status_0_0(
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
parse_tree__check_parse_tree_type_defns____Unify____abstract_solver_type_status_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__report_duplicate_field_name_5_p_0(
  MR_String FieldName_6,
  MR_Word FirstFNLocn_7,
  MR_Word FNLocn_8,
  MR_Word STATE_VARIABLE_Specs_0_20,
  MR_Word * STATE_VARIABLE_Specs_21)
{
  {
    MR_bool succeeded;
    MR_Word FirstContext_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FirstFNLocn_7, (MR_Integer) 0))));
    MR_Word FirstTypeCtor_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FirstFNLocn_7, (MR_Integer) 1))));
    MR_String FirstCtorName_12 = ((MR_String) ((MR_hl_field(MR_mktag(0), FirstFNLocn_7, (MR_Integer) 2))));
    MR_Word Context_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FNLocn_8, (MR_Integer) 0))));
    MR_Word TypeCtor_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FNLocn_8, (MR_Integer) 1))));
    MR_String CtorName_15 = ((MR_String) ((MR_hl_field(MR_mktag(0), FNLocn_8, (MR_Integer) 2))));
    MR_Word InitPieces_16;
    MR_Word MainPieces_17;
    MR_Word Spec_19;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_65;
    MR_Word Var_66;
    MR_Word Var_67;
    MR_Word Var_68;

    {
      Var_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_25, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_25, 1) = ((MR_Box) (FieldName_6));
    }
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      InitPieces_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), InitPieces_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_parse_tree_type_defns_scalar_common_1[119])));
      MR_hl_field(MR_mktag(1), InitPieces_16, 1) = ((MR_Box) (Var_24));
    }
    succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(TypeCtor_14, FirstTypeCtor_11);
    if (succeeded)
    {
      succeeded = (strcmp(CtorName_15, FirstCtorName_12) == 0);
      if (succeeded)
      {
        MR_Word Var_27;
        MR_Word Var_30;
        MR_Word Var_31;

        {
          Var_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_31, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_31, 1) = ((MR_Box) (CtorName_15));
        }
        {
          Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (Var_31));
          MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_parse_tree_type_defns_scalar_common_1[40])));
        }
        {
          Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_parse_tree_type_defns_scalar_common_1[120])));
          MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (Var_30));
        }
        MainPieces_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), InitPieces_16, Var_27);
      }
      else
      {
        MR_Word Var_38;
        MR_Word Var_41;
        MR_Word Var_42;

        {
          Var_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_42, 0) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(3), Var_42, 1) = ((MR_Box) (TypeCtor_14));
        }
        {
          Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (Var_42));
          MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_parse_tree_type_defns_scalar_common_1[40])));
        }
        {
          Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_parse_tree_type_defns_scalar_common_1[121])));
          MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (Var_41));
        }
        MainPieces_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), InitPieces_16, Var_38);
      }
    }
    else
      MainPieces_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), InitPieces_16, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__check_parse_tree_type_defns_scalar_common_1[40])));
    {
      Var_66 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_66, 0) = ((MR_Box) (Context_13));
      MR_hl_field(MR_mktag(0), Var_66, 1) = ((MR_Box) (MainPieces_17));
    }
    {
      Var_68 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_68, 0) = ((MR_Box) (FirstContext_10));
      MR_hl_field(MR_mktag(0), Var_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_parse_tree_type_defns_scalar_common_1[78])));
    }
    {
      Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (Var_68));
      MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (Var_66));
      MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (Var_67));
    }
    {
      Spec_19 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_19, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(0), Spec_19, 1) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(MR_mktag(0), Spec_19, 2) = ((MR_Box) (Var_65));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_21 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_19));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_20));
    }
  }
}

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__report_any_duplicate_field_names_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Specs_21;

    parse_tree__check_parse_tree_type_defns__report_duplicate_field_name_5_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Specs_21);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_21));
  }
}

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__report_any_duplicate_field_names_4_p_0(
  MR_String FieldName_5,
  MR_Word OoMFNLocns_6,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16)
{
  {
    MR_Word FNLocns_8;
    MR_Word SortedFNLocns_9;

    FNLocns_8 = mercury__list__one_or_more_to_list_1_f_0((MR_Word) (&parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__type_ctor_info_field_name_locn_0), OoMFNLocns_6);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__type_ctor_info_field_name_locn_0), FNLocns_8, &SortedFNLocns_9);
    if ((SortedFNLocns_9 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.check_parse_tree_type_defns.report_any_duplicate_field_names\'/4", (MR_String) "SortedFNLocns = []");
        return;
      }
    else
    {
      MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SortedFNLocns_9, (MR_Integer) 1))));
      MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SortedFNLocns_9, (MR_Integer) 0))));

      if ((Var_27 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_Specs_16 = STATE_VARIABLE_Specs_0_15;
      else
      {
        MR_Word Var_17;
        MR_Box conv1_STATE_VARIABLE_Specs_16;

        {
          Var_17 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (&parse_tree__check_parse_tree_type_defns_scalar_common_7[5]));
          MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (parse_tree__check_parse_tree_type_defns__report_any_duplicate_field_names_4_p_0_1));
          MR_hl_field(MR_mktag(0), Var_17, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_17, 3) = ((MR_Box) (FieldName_5));
          MR_hl_field(MR_mktag(0), Var_17, 4) = ((MR_Box) (Var_28));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__type_ctor_info_field_name_locn_0), (MR_Word) (&parse_tree__check_parse_tree_type_defns_scalar_common_1[4]), Var_17, Var_27, ((MR_Box) (STATE_VARIABLE_Specs_0_15)), &conv1_STATE_VARIABLE_Specs_16);
        *STATE_VARIABLE_Specs_16 = ((MR_Word) (conv1_STATE_VARIABLE_Specs_16));
      }
    }
  }
}

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__add_data_ctor_arg_to_field_name_map_5_p_0(
  MR_Word TypeCtor_6,
  MR_String CtorName_7,
  MR_Word CtorArg_8,
  MR_Word STATE_VARIABLE_FieldNameMap_0_22,
  MR_Word * STATE_VARIABLE_FieldNameMap_23)
{
  {
    MR_bool succeeded;
    MR_Word MaybeCtorFieldName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorArg_8, (MR_Integer) 0))));

    if ((MaybeCtorFieldName_10 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_FieldNameMap_23 = STATE_VARIABLE_FieldNameMap_0_22;
    else
    {
      MR_Word CtorFieldName_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCtorFieldName_10, (MR_Integer) 0))));
      MR_Word FieldSymName_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorFieldName_13, (MR_Integer) 0))));
      MR_Word FieldNameContext_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorFieldName_13, (MR_Integer) 1))));
      MR_String FieldName_16;
      MR_Word FNLocn_17;
      MR_Word OoMFNLocns0_18;
      MR_Box conv0_OoMFNLocns0_18;

      FieldName_16 = mdbcomp__sym_name__unqualify_name_1_f_0(FieldSymName_14);
      {
        FNLocn_17 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), FNLocn_17, 0) = ((MR_Box) (FieldNameContext_15));
        MR_hl_field(MR_mktag(0), FNLocn_17, 1) = ((MR_Box) (TypeCtor_6));
        MR_hl_field(MR_mktag(0), FNLocn_17, 2) = ((MR_Box) (CtorName_7));
      }
      succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__check_parse_tree_type_defns_scalar_common_1[5]), STATE_VARIABLE_FieldNameMap_0_22, ((MR_Box) (FieldName_16)), &conv0_OoMFNLocns0_18);
      if (succeeded)
      {
        OoMFNLocns0_18 = ((MR_Word) (conv0_OoMFNLocns0_18));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word HeadFNLocn_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OoMFNLocns0_18, (MR_Integer) 0))));
        MR_Word TailFNLocns_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OoMFNLocns0_18, (MR_Integer) 1))));
        MR_Word OoMFNLocns_21;
        MR_Word Var_24;

        {
          Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (HeadFNLocn_19));
          MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (TailFNLocns_20));
        }
        {
          OoMFNLocns_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), OoMFNLocns_21, 0) = ((MR_Box) (FNLocn_17));
          MR_hl_field(MR_mktag(0), OoMFNLocns_21, 1) = ((MR_Box) (Var_24));
        }
        mercury__map__det_update_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__check_parse_tree_type_defns_scalar_common_1[5]), ((MR_Box) (FieldName_16)), ((MR_Box) (OoMFNLocns_21)), STATE_VARIABLE_FieldNameMap_0_22, STATE_VARIABLE_FieldNameMap_23);
      }
      else
      {
        MR_Word OoMFNLocns_28;

        {
          OoMFNLocns_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), OoMFNLocns_28, 0) = ((MR_Box) (FNLocn_17));
          MR_hl_field(MR_mktag(0), OoMFNLocns_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__check_parse_tree_type_defns_scalar_common_1[5]), ((MR_Box) (FieldName_16)), ((MR_Box) (OoMFNLocns_28)), STATE_VARIABLE_FieldNameMap_0_22, STATE_VARIABLE_FieldNameMap_23);
      }
    }
  }
}

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__add_data_ctor_to_field_name_map_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_FieldNameMap_23;

    parse_tree__check_parse_tree_type_defns__add_data_ctor_arg_to_field_name_map_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_FieldNameMap_23);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_FieldNameMap_23));
  }
}

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__add_data_ctor_to_field_name_map_4_p_0(
  MR_Word TypeCtor_5,
  MR_Word Ctor_6,
  MR_Word STATE_VARIABLE_FieldNameMap_0_15,
  MR_Word * STATE_VARIABLE_FieldNameMap_16)
{
  {
    MR_Word CtorSymName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_6, (MR_Integer) 2))));
    MR_Word CtorArgs_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_6, (MR_Integer) 3))));
    MR_String CtorName_14;
    MR_Word Var_17;
    MR_Box conv1_STATE_VARIABLE_FieldNameMap_16;

    CtorName_14 = mdbcomp__sym_name__unqualify_name_1_f_0(CtorSymName_10);
    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (&parse_tree__check_parse_tree_type_defns_scalar_common_7[4]));
      MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (parse_tree__check_parse_tree_type_defns__add_data_ctor_to_field_name_map_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_17, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_17, 3) = ((MR_Box) (TypeCtor_5));
      MR_hl_field(MR_mktag(0), Var_17, 4) = ((MR_Box) (CtorName_14));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0), (MR_Word) (&parse_tree__check_parse_tree_type_defns_scalar_common_2[1]), Var_17, CtorArgs_11, ((MR_Box) (STATE_VARIABLE_FieldNameMap_0_15)), &conv1_STATE_VARIABLE_FieldNameMap_16);
    *STATE_VARIABLE_FieldNameMap_16 = ((MR_Word) (conv1_STATE_VARIABLE_FieldNameMap_16));
  }
}

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__add_type_ctor_to_field_name_map_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_FieldNameMap_16;

    parse_tree__check_parse_tree_type_defns__add_data_ctor_to_field_name_map_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_FieldNameMap_16);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_FieldNameMap_16));
  }
}

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__add_type_ctor_to_field_name_map_4_p_0(
  MR_Word TypeCtor_5,
  MR_Word CheckedDefn_6,
  MR_Word STATE_VARIABLE_FieldNameMap_0_30,
  MR_Word * STATE_VARIABLE_FieldNameMap_31)
{
  if (((MR_tag((MR_Word) CheckedDefn_6)) == (MR_Integer) 0))
    *STATE_VARIABLE_FieldNameMap_31 = STATE_VARIABLE_FieldNameMap_0_30;
  else
  {
    MR_Word CheckedStdDefn_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CheckedDefn_6, (MR_Integer) 0))));

    switch (MR_tag((MR_Word) CheckedStdDefn_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_FieldNameMap_31 = STATE_VARIABLE_FieldNameMap_0_30;
        break;
      case (MR_Integer) 1:
        {
          MR_Word DuDefn_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CheckedStdDefn_9, (MR_Integer) 1))));
          MR_Word TypeDefn_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DuDefn_16, (MR_Integer) 2))));

          switch (MR_tag((MR_Word) TypeDefn_19)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word DetailsDu_20 = (MR_Word) ((MR_Word) (TypeDefn_19));
                MR_Word OoMCtors_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu_20, (MR_Integer) 0))));
                MR_Word HeadCtor_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OoMCtors_21, (MR_Integer) 0))));
                MR_Word TailCtors_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OoMCtors_21, (MR_Integer) 1))));
                MR_Word Var_34;
                MR_Word Var_35;
                MR_Box conv1_STATE_VARIABLE_FieldNameMap_31;

                {
                  Var_34 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_34, 0) = ((MR_Box) (&parse_tree__check_parse_tree_type_defns_scalar_common_6[3]));
                  MR_hl_field(MR_mktag(0), Var_34, 1) = ((MR_Box) (parse_tree__check_parse_tree_type_defns__add_type_ctor_to_field_name_map_4_p_0_1));
                  MR_hl_field(MR_mktag(0), Var_34, 2) = ((MR_Box) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), Var_34, 3) = ((MR_Box) (TypeCtor_5));
                }
                {
                  Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (HeadCtor_24));
                  MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (TailCtors_25));
                }
                mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), (MR_Word) (&parse_tree__check_parse_tree_type_defns_scalar_common_2[1]), Var_34, Var_35, ((MR_Box) (STATE_VARIABLE_FieldNameMap_0_30)), &conv1_STATE_VARIABLE_FieldNameMap_31);
                *STATE_VARIABLE_FieldNameMap_31 = ((MR_Word) (conv1_STATE_VARIABLE_FieldNameMap_31));
              }
              break;
            case (MR_Integer) 1:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.check_parse_tree_type_defns.add_type_ctor_to_field_name_map\'/4", (MR_String) "not du type");
                return;
              }
              break;
            case (MR_Integer) 2:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.check_parse_tree_type_defns.add_type_ctor_to_field_name_map\'/4", (MR_String) "not du type");
                return;
              }
              break;
            case (MR_Integer) 3:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.check_parse_tree_type_defns.add_type_ctor_to_field_name_map\'/4", (MR_String) "not du type");
                return;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        *STATE_VARIABLE_FieldNameMap_31 = STATE_VARIABLE_FieldNameMap_0_30;
        break;
    }
  }
}

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__report_duplicate_foreign_defn_7_p_0(
  MR_String TypeOrEnum_8,
  MR_Word TypeCtor_9,
  MR_Word Lang_10,
  MR_Word LeastContext_11,
  MR_Word Context_12,
  MR_Word STATE_VARIABLE_Specs_0_17,
  MR_Word * STATE_VARIABLE_Specs_18)
{
  {
    MR_Word MainPieces_14;
    MR_Word Spec_16;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_String Var_28;
    MR_Word Var_29;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_52;
    MR_Word Var_53;

    {
      Var_22 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_22, 0) = ((MR_Box) (TypeOrEnum_8));
    }
    Var_28 = libs__globals__foreign_language_string_1_f_0(Lang_10);
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_27, 0) = ((MR_Box) (Var_28));
    }
    {
      Var_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_33, 0) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(MR_mktag(3), Var_33, 1) = ((MR_Box) (TypeCtor_9));
    }
    {
      Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_parse_tree_type_defns_scalar_common_1[40])));
    }
    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_parse_tree_type_defns_scalar_common_1[118])));
      MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_32));
    }
    {
      Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (Var_29));
    }
    {
      Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_parse_tree_type_defns_scalar_common_1[117])));
      MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (Var_26));
    }
    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (Var_23));
    }
    {
      MainPieces_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MainPieces_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_parse_tree_type_defns_scalar_common_1[116])));
      MR_hl_field(MR_mktag(1), MainPieces_14, 1) = ((MR_Box) (Var_21));
    }
    {
      Var_50 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_50, 0) = ((MR_Box) (MainPieces_14));
    }
    {
      Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (Var_50));
      MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (Context_12));
      MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (Var_49));
    }
    {
      Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (LeastContext_11));
      MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_parse_tree_type_defns_scalar_common_1[115])));
    }
    {
      Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (Var_53));
      MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (Var_48));
      MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (Var_52));
    }
    {
      Spec_16 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_16, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_16, 1) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(MR_mktag(0), Spec_16, 2) = ((MR_Box) (Var_47));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_18 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_16));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_17));
    }
  }
}

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__accumulate_foreign_enum_contexts_3_p_0(
  MR_Word ForeignEnum_4,
  MR_Word STATE_VARIABLE_Contexts_0_6,
  MR_Word * STATE_VARIABLE_Contexts_7)
{
  {
    MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignEnum_4, (MR_Integer) 3))));

    mercury__set__insert_3_p_0((MR_Word) (&mercury__term__term__type_ctor_info_context_0), ((MR_Box) (Var_8)), STATE_VARIABLE_Contexts_0_6, STATE_VARIABLE_Contexts_7);
  }
}

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__accumulate_type_defn_contexts_3_p_0(
  MR_Word TypeDefn_4,
  MR_Word STATE_VARIABLE_Contexts_0_6,
  MR_Word * STATE_VARIABLE_Contexts_7)
{
  {
    MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeDefn_4, (MR_Integer) 4))));

    mercury__set__insert_3_p_0((MR_Word) (&mercury__term__term__type_ctor_info_context_0), ((MR_Box) (Var_8)), STATE_VARIABLE_Contexts_0_6, STATE_VARIABLE_Contexts_7);
  }
}

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__report_duplicate_type_defn_6_p_0(
  MR_String Kind_7,
  MR_Word TypeCtor_8,
  MR_Word LeastContext_9,
  MR_Word Context_10,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16)
{
  {
    MR_Word MainPieces_12;
    MR_Word Spec_14;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_44;
    MR_Word Var_45;

    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_20, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_20, 1) = ((MR_Box) (Kind_7));
    }
    {
      Var_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_25, 0) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(MR_mktag(3), Var_25, 1) = ((MR_Box) (TypeCtor_8));
    }
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_parse_tree_type_defns_scalar_common_1[40])));
    }
    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_parse_tree_type_defns_scalar_common_1[114])));
      MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (Var_24));
    }
    {
      Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (Var_21));
    }
    {
      MainPieces_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MainPieces_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_parse_tree_type_defns_scalar_common_1[113])));
      MR_hl_field(MR_mktag(1), MainPieces_12, 1) = ((MR_Box) (Var_19));
    }
    {
      Var_42 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (MainPieces_12));
    }
    {
      Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (Context_10));
      MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (Var_41));
    }
    {
      Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (LeastContext_9));
      MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_parse_tree_type_defns_scalar_common_1[115])));
    }
    {
      Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (Var_44));
    }
    {
      Spec_14 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_14, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_14, 1) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(MR_mktag(0), Spec_14, 2) = ((MR_Box) (Var_39));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_16 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_14));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_15));
    }
  }
}

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__report_type_ctor_enum_in_int_5_p_0(
  MR_Word ModuleName_6,
  MR_Word TypeCtor_7,
  MR_Word ForeignEnum_8,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorSymName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_7, (MR_Integer) 0))));
    MR_Word TypeCtorModuleName_12;
    MR_Word Var_92;

    mdbcomp__sym_name__sym_name_get_module_name_default_3_p_0(TypeCtorSymName_10, ModuleName_6, &TypeCtorModuleName_12);
    Var_92 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignEnum_8, (MR_Integer) 3))));
    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(TypeCtorModuleName_12, ModuleName_6);
    if (succeeded)
    {
      MR_Word Pieces_13;
      MR_Word Spec_14;
      MR_Word Var_19;
      MR_Word Var_22;
      MR_Word Var_25;
      MR_Word Var_26;
      MR_Word Var_41;
      MR_Word Var_42;
      MR_Word Var_44;
      MR_Word Var_45;

      {
        Var_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_26, 0) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(3), Var_26, 1) = ((MR_Box) (TypeCtor_7));
      }
      {
        Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (Var_26));
        MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_parse_tree_type_defns_scalar_common_1[68])));
      }
      {
        Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_parse_tree_type_defns_scalar_common_1[94])));
        MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (Var_25));
      }
      {
        Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_parse_tree_type_defns_scalar_common_1[107])));
        MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (Var_22));
      }
      {
        Pieces_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_parse_tree_type_defns_scalar_common_1[110])));
        MR_hl_field(MR_mktag(1), Pieces_13, 1) = ((MR_Box) (Var_19));
      }
      {
        Var_45 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_45, 0) = ((MR_Box) (Pieces_13));
      }
      {
        Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (Var_45));
        MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (Var_92));
        MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (Var_44));
      }
      {
        Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (Var_42));
        MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_14 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_14, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_14, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(0), Spec_14, 2) = ((MR_Box) (Var_41));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_16 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_14));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_15));
      }
    }
    else
    {
      MR_Word Var_51;
      MR_Word Var_54;
      MR_Word Var_57;
      MR_Word Var_58;
      MR_Word Var_73;
      MR_Word Var_74;
      MR_Word Var_76;
      MR_Word Var_77;
      MR_Word Pieces_81;
      MR_Word Spec_82;

      {
        Var_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_58, 0) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(3), Var_58, 1) = ((MR_Box) (TypeCtor_7));
      }
      {
        Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (Var_58));
        MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_parse_tree_type_defns_scalar_common_1[74])));
      }
      {
        Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_parse_tree_type_defns_scalar_common_1[94])));
        MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (Var_57));
      }
      {
        Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_parse_tree_type_defns_scalar_common_1[107])));
        MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (Var_54));
      }
      {
        Pieces_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_81, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_parse_tree_type_defns_scalar_common_1[110])));
        MR_hl_field(MR_mktag(1), Pieces_81, 1) = ((MR_Box) (Var_51));
      }
      {
        Var_77 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_77, 0) = ((MR_Box) (Pieces_81));
      }
      {
        Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (Var_77));
        MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (Var_92));
        MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) (Var_76));
      }
      {
        Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (Var_74));
        MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_82 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_82, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_82, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(0), Spec_82, 2) = ((MR_Box) (Var_73));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_16 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_82));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_15));
      }
    }
  }
}

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__report_any_foreign_enum_for_undefined_type_5_p_0(
  MR_Word TypeCtor_6,
  MR_String UndefOrUndecl_7,
  MR_Word MaybeEnum_8,
  MR_Word STATE_VARIABLE_Specs_0_13,
  MR_Word * STATE_VARIABLE_Specs_14)
{
  if ((MaybeEnum_8 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Specs_14 = STATE_VARIABLE_Specs_0_13;
  else
  {
    MR_Word Enum_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeEnum_8, (MR_Integer) 0))));
    MR_Word Pieces_11;
    MR_Word Spec_12;
    MR_Word Var_17;
    MR_Word Var_20;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;

    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_24, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_24, 1) = ((MR_Box) (UndefOrUndecl_7));
    }
    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_29, 0) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(MR_mktag(3), Var_29, 1) = ((MR_Box) (TypeCtor_6));
    }
    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_parse_tree_type_defns_scalar_common_1[40])));
    }
    {
      Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_parse_tree_type_defns_scalar_common_1[112])));
      MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (Var_28));
    }
    {
      Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (Var_25));
    }
    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_parse_tree_type_defns_scalar_common_1[111])));
      MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (Var_23));
    }
    {
      Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_parse_tree_type_defns_scalar_common_1[107])));
      MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (Var_20));
    }
    {
      Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_parse_tree_type_defns_scalar_common_1[110])));
      MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Var_17));
    }
    Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Enum_10, (MR_Integer) 3))));
    {
      Var_42 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (Pieces_11));
    }
    {
      Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (Var_41));
    }
    {
      Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_12 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_12, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(0), Spec_12, 1) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(MR_mktag(0), Spec_12, 2) = ((MR_Box) (Var_38));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_14 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_12));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_13));
    }
  }
}

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__report_any_incompatible_foreign_enum_7_p_0(
  MR_Word TypeCtor_8,
  MR_Word UsedContext_9,
  MR_String Kind_10,
  MR_String Section_11,
  MR_Word MaybeEnum_12,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19)
{
  if ((MaybeEnum_12 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Specs_19 = STATE_VARIABLE_Specs_0_18;
  else
  {
    MR_Word Enum_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeEnum_12, (MR_Integer) 0))));
    MR_Word MainPieces_15;
    MR_Word Spec_17;
    MR_Word Var_22;
    MR_Word Var_25;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_59;
    MR_Word Var_60;

    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_29, 0) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(MR_mktag(3), Var_29, 1) = ((MR_Box) (TypeCtor_8));
    }
    {
      Var_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_34, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_34, 1) = ((MR_Box) (Kind_10));
    }
    {
      Var_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_39, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_39, 1) = ((MR_Box) (Section_11));
    }
    {
      Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_parse_tree_type_defns_scalar_common_1[58])));
    }
    {
      Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_parse_tree_type_defns_scalar_common_1[109])));
      MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (Var_38));
    }
    {
      Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (Var_35));
    }
    {
      Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_parse_tree_type_defns_scalar_common_1[108])));
      MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (Var_33));
    }
    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (Var_30));
    }
    {
      Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_parse_tree_type_defns_scalar_common_1[94])));
      MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (Var_28));
    }
    {
      Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_parse_tree_type_defns_scalar_common_1[107])));
      MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (Var_25));
    }
    {
      MainPieces_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MainPieces_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_parse_tree_type_defns_scalar_common_1[106])));
      MR_hl_field(MR_mktag(1), MainPieces_15, 1) = ((MR_Box) (Var_22));
    }
    Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Enum_14, (MR_Integer) 3))));
    {
      Var_57 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_57, 0) = ((MR_Box) (MainPieces_15));
    }
    {
      Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (Var_57));
      MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (Var_55));
      MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (Var_56));
    }
    {
      Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (UsedContext_9));
      MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_parse_tree_type_defns_scalar_common_1[105])));
    }
    {
      Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (Var_60));
      MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Var_59));
    }
    {
      Spec_17 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_17, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(0), Spec_17, 1) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(MR_mktag(0), Spec_17, 2) = ((MR_Box) (Var_53));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_19 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_17));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_18));
    }
  }
}

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__report_any_incompatible_type_definition_7_p_0(
  MR_Word TypeCtor_8,
  MR_Word UsedContext_9,
  MR_String Kind_10,
  MR_String Section_11,
  MR_Word MaybeDefn_12,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19)
{
  if ((MaybeDefn_12 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Specs_19 = STATE_VARIABLE_Specs_0_18;
  else
  {
    MR_Word Defn_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDefn_12, (MR_Integer) 0))));
    MR_Word MainPieces_15;
    MR_Word Spec_17;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_27;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_35;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_59;
    MR_Word Var_60;

    {
      Var_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_23, 0) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(MR_mktag(3), Var_23, 1) = ((MR_Box) (TypeCtor_8));
    }
    {
      Var_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_31, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_31, 1) = ((MR_Box) (Kind_10));
    }
    {
      Var_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_39, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_39, 1) = ((MR_Box) (Section_11));
    }
    {
      Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_parse_tree_type_defns_scalar_common_1[58])));
    }
    {
      Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_parse_tree_type_defns_scalar_common_1[104])));
      MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (Var_38));
    }
    {
      Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_parse_tree_type_defns_scalar_common_1[103])));
      MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (Var_35));
    }
    {
      Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (Var_32));
    }
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_parse_tree_type_defns_scalar_common_1[102])));
      MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (Var_30));
    }
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_parse_tree_type_defns_scalar_common_1[101])));
      MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (Var_27));
    }
    {
      Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (Var_24));
    }
    {
      MainPieces_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MainPieces_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_parse_tree_type_defns_scalar_common_1[100])));
      MR_hl_field(MR_mktag(1), MainPieces_15, 1) = ((MR_Box) (Var_22));
    }
    Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Defn_14, (MR_Integer) 4))));
    {
      Var_57 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_57, 0) = ((MR_Box) (MainPieces_15));
    }
    {
      Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (Var_57));
      MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (Var_55));
      MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (Var_56));
    }
    {
      Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (UsedContext_9));
      MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_parse_tree_type_defns_scalar_common_1[105])));
    }
    {
      Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (Var_60));
      MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Var_59));
    }
    {
      Spec_17 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_17, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(0), Spec_17, 1) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(MR_mktag(0), Spec_17, 2) = ((MR_Box) (Var_53));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_19 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_17));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_18));
    }
  }
}

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__foreign_int_report_any_foreign_defn_in_imp_5_p_0(
  MR_Word TypeCtor_6,
  MR_Word IntForeignContext_7,
  MR_Word MaybeImpForeignDefn_8,
  MR_Word STATE_VARIABLE_Specs_0_14,
  MR_Word * STATE_VARIABLE_Specs_15)
{
  if ((MaybeImpForeignDefn_8 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Specs_15 = STATE_VARIABLE_Specs_0_14;
  else
  {
    MR_Word ImpForeignDefn_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeImpForeignDefn_8, (MR_Integer) 0))));
    MR_Word ImpPieces_11;
    MR_Word Spec_13;
    MR_Word Var_18;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_51;
    MR_Word Var_52;

    {
      Var_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_22, 0) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(MR_mktag(3), Var_22, 1) = ((MR_Box) (TypeCtor_6));
    }
    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_parse_tree_type_defns_scalar_common_1[46])));
    }
    {
      Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_parse_tree_type_defns_scalar_common_1[98])));
      MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) (Var_21));
    }
    {
      ImpPieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ImpPieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_parse_tree_type_defns_scalar_common_1[97])));
      MR_hl_field(MR_mktag(1), ImpPieces_11, 1) = ((MR_Box) (Var_18));
    }
    Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImpForeignDefn_10, (MR_Integer) 4))));
    {
      Var_49 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_49, 0) = ((MR_Box) (ImpPieces_11));
    }
    {
      Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (Var_48));
    }
    {
      Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (IntForeignContext_7));
      MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_parse_tree_type_defns_scalar_common_1[99])));
    }
    {
      Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (Var_52));
      MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (Var_51));
    }
    {
      Spec_13 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_13, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(0), Spec_13, 1) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(MR_mktag(0), Spec_13, 2) = ((MR_Box) (Var_45));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_15 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_13));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_14));
    }
  }
}

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__report_any_foreign_type_without_declaration_4_p_0(
  MR_Word TypeCtor_5,
  MR_Word MaybeForeignDefn_6,
  MR_Word STATE_VARIABLE_Specs_0_11,
  MR_Word * STATE_VARIABLE_Specs_12)
{
  if ((MaybeForeignDefn_6 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Specs_12 = STATE_VARIABLE_Specs_0_11;
  else
  {
    MR_Word ForeignDefn_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeForeignDefn_6, (MR_Integer) 0))));
    MR_Word Pieces_9;
    MR_Word Spec_10;
    MR_Word Var_15;
    MR_Word Var_18;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_26;
    MR_Word Var_29;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;

    {
      Var_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_22, 0) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(MR_mktag(3), Var_22, 1) = ((MR_Box) (TypeCtor_5));
    }
    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_parse_tree_type_defns_scalar_common_1[40])));
    }
    {
      Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_parse_tree_type_defns_scalar_common_1[96])));
      MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (Var_29));
    }
    {
      Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_parse_tree_type_defns_scalar_common_1[95])));
      MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (Var_26));
    }
    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (Var_23));
    }
    {
      Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_parse_tree_type_defns_scalar_common_1[94])));
      MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) (Var_21));
    }
    {
      Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_parse_tree_type_defns_scalar_common_1[82])));
      MR_hl_field(MR_mktag(1), Var_15, 1) = ((MR_Box) (Var_18));
    }
    {
      Pieces_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_9, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_parse_tree_type_defns_scalar_common_1[93])));
      MR_hl_field(MR_mktag(1), Pieces_9, 1) = ((MR_Box) (Var_15));
    }
    Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignDefn_8, (MR_Integer) 4))));
    {
      Var_43 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_43, 0) = ((MR_Box) (Pieces_9));
    }
    {
      Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (Var_42));
    }
    {
      Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_10 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_10, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(0), Spec_10, 1) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(MR_mktag(0), Spec_10, 2) = ((MR_Box) (Var_39));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_12 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_10));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_11));
    }
  }
}

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__du_imp_report_any_foreign_defn_in_int_5_p_0(
  MR_Word TypeCtor_6,
  MR_Word DuDefn_7,
  MR_Word MaybeForeignDefn_8,
  MR_Word STATE_VARIABLE_Specs_0_14,
  MR_Word * STATE_VARIABLE_Specs_15)
{
  if ((MaybeForeignDefn_8 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Specs_15 = STATE_VARIABLE_Specs_0_14;
  else
  {
    MR_Word ForeignDefn_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeForeignDefn_8, (MR_Integer) 0))));
    MR_Word ForeignPieces_11;
    MR_Word Spec_13;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_47;

    {
      Var_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_19, 0) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(MR_mktag(3), Var_19, 1) = ((MR_Box) (TypeCtor_6));
    }
    {
      Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_parse_tree_type_defns_scalar_common_1[38])));
    }
    {
      ForeignPieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ForeignPieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_parse_tree_type_defns_scalar_common_1[92])));
      MR_hl_field(MR_mktag(1), ForeignPieces_11, 1) = ((MR_Box) (Var_18));
    }
    Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignDefn_10, (MR_Integer) 4))));
    {
      Var_43 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_43, 0) = ((MR_Box) (ForeignPieces_11));
    }
    {
      Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (Var_42));
    }
    Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DuDefn_7, (MR_Integer) 4))));
    {
      Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_parse_tree_type_defns_scalar_common_1[86])));
    }
    {
      Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (Var_45));
    }
    {
      Spec_13 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_13, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(0), Spec_13, 1) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(MR_mktag(0), Spec_13, 2) = ((MR_Box) (Var_39));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_15 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_13));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_14));
    }
  }
}

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__check_type_ctor_defns_11_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv21_STATE_VARIABLE_Specs_14;

    parse_tree__check_parse_tree_type_defns__report_any_foreign_enum_for_undefined_type_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv21_STATE_VARIABLE_Specs_14);
    *wrapper_arg_3 = ((MR_Box) (conv21_STATE_VARIABLE_Specs_14));
  }
}

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__check_type_ctor_defns_11_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv19_STATE_VARIABLE_Specs_14;

    parse_tree__check_parse_tree_type_defns__report_any_foreign_enum_for_undefined_type_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv19_STATE_VARIABLE_Specs_14);
    *wrapper_arg_3 = ((MR_Box) (conv19_STATE_VARIABLE_Specs_14));
  }
}

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__check_type_ctor_defns_11_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv17_STATE_VARIABLE_Specs_19;

    parse_tree__check_parse_tree_type_defns__report_any_incompatible_foreign_enum_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv17_STATE_VARIABLE_Specs_19);
    *wrapper_arg_3 = ((MR_Box) (conv17_STATE_VARIABLE_Specs_19));
  }
}

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__check_type_ctor_defns_11_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv15_STATE_VARIABLE_Specs_19;

    parse_tree__check_parse_tree_type_defns__report_any_incompatible_type_definition_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv15_STATE_VARIABLE_Specs_19);
    *wrapper_arg_3 = ((MR_Box) (conv15_STATE_VARIABLE_Specs_19));
  }
}

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__check_type_ctor_defns_11_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv13_STATE_VARIABLE_Specs_19;

    parse_tree__check_parse_tree_type_defns__report_any_incompatible_foreign_enum_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv13_STATE_VARIABLE_Specs_19);
    *wrapper_arg_3 = ((MR_Box) (conv13_STATE_VARIABLE_Specs_19));
  }
}

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__check_type_ctor_defns_11_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv11_STATE_VARIABLE_Specs_19;

    parse_tree__check_parse_tree_type_defns__report_any_incompatible_type_definition_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv11_STATE_VARIABLE_Specs_19);
    *wrapper_arg_3 = ((MR_Box) (conv11_STATE_VARIABLE_Specs_19));
  }
}

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__check_type_ctor_defns_11_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv8_STATE_VARIABLE_Specs_19;

    parse_tree__check_parse_tree_type_defns__report_any_incompatible_type_definition_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_STATE_VARIABLE_Specs_19);
    *wrapper_arg_3 = ((MR_Box) (conv8_STATE_VARIABLE_Specs_19));
  }
}

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__check_type_ctor_defns_11_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv6_STATE_VARIABLE_Specs_19;

    parse_tree__check_parse_tree_type_defns__report_any_incompatible_foreign_enum_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_Specs_19);
    *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_Specs_19));
  }
}

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__check_type_ctor_defns_11_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_STATE_VARIABLE_Specs_19;

    parse_tree__check_parse_tree_type_defns__report_any_incompatible_type_definition_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_Specs_19);
    *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_Specs_19));
  }
}

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__check_type_ctor_defns_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_Specs_19;

    parse_tree__check_parse_tree_type_defns__report_any_incompatible_foreign_enum_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_Specs_19);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_Specs_19));
  }
}

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__check_type_ctor_defns_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Specs_19;

    parse_tree__check_parse_tree_type_defns__report_any_incompatible_type_definition_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Specs_19);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_19));
  }
}

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__check_type_ctor_defns_11_p_0(
  MR_Word InsistOnDefn_12,
  MR_Word ModuleName_13,
  MR_Word IntTypeDefnMap_14,
  MR_Word ImpTypeDefnMap_15,
  MR_Word IntForeignEnumMap_16,
  MR_Word ImpForeignEnumMap_17,
  MR_Word TypeCtor_18,
  MR_Word STATE_VARIABLE_TypeCtorCheckedMap_0_98,
  MR_Word * STATE_VARIABLE_TypeCtorCheckedMap_99,
  MR_Word STATE_VARIABLE_Specs_0_100,
  MR_Word * STATE_VARIABLE_Specs_101)
{
  {
    MR_bool succeeded;
    MR_Word IntMaybeDefn_21;
    MR_Word ImpMaybeDefn_22;
    MR_Word ImpMaybeEnumCJCsE_23;
    MR_Word IntAbstractSolverMaybeDefn_24;
    MR_Word IntSolverMaybeDefn_25;
    MR_Word IntAbstractStdMaybeDefn_26;
    MR_Word IntEqvMaybeDefn_27;
    MR_Word IntDuMaybeDefn_28;
    MR_Word IntMaybeDefnCJCsE_29;
    MR_Word ImpAbstractSolverMaybeDefn_30;
    MR_Word ImpSolverMaybeDefn_31;
    MR_Word ImpAbstractStdMaybeDefn_32;
    MR_Word ImpEqvMaybeDefn_33;
    MR_Word ImpDuMaybeDefn_34;
    MR_Word ImpMaybeDefnCJCsE_35;
    MR_Word IntMaybeDefnC_36;
    MR_Word IntMaybeDefnJava_37;
    MR_Word IntMaybeDefnCsharp_38;
    MR_Word IntMaybeDefnErlang_39;
    MR_Word ImpMaybeDefnC_40;
    MR_Word ImpMaybeDefnJava_41;
    MR_Word ImpMaybeDefnCsharp_42;
    MR_Word ImpMaybeDefnErlang_43;
    MR_Word ImpMaybeEnumC_44;
    MR_Word ImpMaybeEnumJava_45;
    MR_Word ImpMaybeEnumCsharp_46;
    MR_Word ImpMaybeEnumErlang_47;
    MR_Word STATE_VARIABLE_Specs_102_102;
    MR_Word STATE_VARIABLE_Specs_103_103;
    MR_Word STATE_VARIABLE_Specs_104_104;
    MR_Word STATE_VARIABLE_Specs_105_105;
    MR_Word STATE_VARIABLE_Specs_106_106;
    MR_Word ImpSolverDefn_48;

    parse_tree__check_parse_tree_type_defns__check_any_type_ctor_defns_for_duplicates_5_p_0(IntTypeDefnMap_14, TypeCtor_18, &IntMaybeDefn_21, STATE_VARIABLE_Specs_0_100, &STATE_VARIABLE_Specs_102_102);
    parse_tree__check_parse_tree_type_defns__check_any_type_ctor_defns_for_duplicates_5_p_0(ImpTypeDefnMap_15, TypeCtor_18, &ImpMaybeDefn_22, STATE_VARIABLE_Specs_102_102, &STATE_VARIABLE_Specs_103_103);
    parse_tree__check_parse_tree_type_defns__check_any_type_ctor_enums_for_duplicates_5_p_0(ImpForeignEnumMap_17, TypeCtor_18, &ImpMaybeEnumCJCsE_23, STATE_VARIABLE_Specs_103_103, &STATE_VARIABLE_Specs_104_104);
    parse_tree__check_parse_tree_type_defns__check_type_ctor_enums_in_int_5_p_0(IntForeignEnumMap_16, ModuleName_13, TypeCtor_18, STATE_VARIABLE_Specs_104_104, &STATE_VARIABLE_Specs_105_105);
    IntAbstractSolverMaybeDefn_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntMaybeDefn_21, (MR_Integer) 0))));
    IntSolverMaybeDefn_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntMaybeDefn_21, (MR_Integer) 1))));
    IntAbstractStdMaybeDefn_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntMaybeDefn_21, (MR_Integer) 2))));
    IntEqvMaybeDefn_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntMaybeDefn_21, (MR_Integer) 3))));
    IntDuMaybeDefn_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntMaybeDefn_21, (MR_Integer) 4))));
    IntMaybeDefnCJCsE_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntMaybeDefn_21, (MR_Integer) 5))));
    ImpAbstractSolverMaybeDefn_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImpMaybeDefn_22, (MR_Integer) 0))));
    ImpSolverMaybeDefn_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImpMaybeDefn_22, (MR_Integer) 1))));
    ImpAbstractStdMaybeDefn_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImpMaybeDefn_22, (MR_Integer) 2))));
    ImpEqvMaybeDefn_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImpMaybeDefn_22, (MR_Integer) 3))));
    ImpDuMaybeDefn_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImpMaybeDefn_22, (MR_Integer) 4))));
    ImpMaybeDefnCJCsE_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImpMaybeDefn_22, (MR_Integer) 5))));
    IntMaybeDefnC_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntMaybeDefnCJCsE_29, (MR_Integer) 0))));
    IntMaybeDefnJava_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntMaybeDefnCJCsE_29, (MR_Integer) 1))));
    IntMaybeDefnCsharp_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntMaybeDefnCJCsE_29, (MR_Integer) 2))));
    IntMaybeDefnErlang_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntMaybeDefnCJCsE_29, (MR_Integer) 3))));
    ImpMaybeDefnC_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImpMaybeDefnCJCsE_35, (MR_Integer) 0))));
    ImpMaybeDefnJava_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImpMaybeDefnCJCsE_35, (MR_Integer) 1))));
    ImpMaybeDefnCsharp_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImpMaybeDefnCJCsE_35, (MR_Integer) 2))));
    ImpMaybeDefnErlang_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImpMaybeDefnCJCsE_35, (MR_Integer) 3))));
    ImpMaybeEnumC_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImpMaybeEnumCJCsE_23, (MR_Integer) 0))));
    ImpMaybeEnumJava_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImpMaybeEnumCJCsE_23, (MR_Integer) 1))));
    ImpMaybeEnumCsharp_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImpMaybeEnumCJCsE_23, (MR_Integer) 2))));
    ImpMaybeEnumErlang_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImpMaybeEnumCJCsE_23, (MR_Integer) 3))));
    parse_tree__check_parse_tree_type_defns__report_any_nonabstract_solver_type_in_int_4_p_0(TypeCtor_18, IntSolverMaybeDefn_25, STATE_VARIABLE_Specs_105_105, &STATE_VARIABLE_Specs_106_106);
    succeeded = (ImpSolverMaybeDefn_31 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ImpSolverDefn_48 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ImpSolverMaybeDefn_31, (MR_Integer) 0))));
      {
        MR_Word CheckedSolverDefn_49;
        MR_Word CheckedDefn_50;
        MR_Word STATE_VARIABLE_Specs_108_108;
        MR_Word Var_109;
        MR_Word Var_110;
        MR_Word STATE_VARIABLE_Specs_111_111;
        MR_Word Var_112;
        MR_Word Var_115;
        MR_Word Var_116;
        MR_Word Var_117;
        MR_Word Var_118;
        MR_Word Var_119;
        MR_Word Var_120;
        MR_Word Var_121;
        MR_Word Var_122;
        MR_Word Var_123;
        MR_Word Var_124;
        MR_Word Var_125;
        MR_Word Var_126;
        MR_Word Var_127;
        MR_Word Var_129;
        MR_Word Var_130;
        MR_Word Var_132;
        MR_Word Var_135;
        MR_Word Var_136;
        MR_Word Var_137;
        MR_Box conv1_STATE_VARIABLE_Specs_111_111;
        MR_Box conv3_STATE_VARIABLE_Specs_101;

        parse_tree__check_parse_tree_type_defns__report_any_redundant_abstract_type_in_imp_5_p_0(TypeCtor_18, (MR_String) "implementation", ImpAbstractSolverMaybeDefn_30, STATE_VARIABLE_Specs_106_106, &STATE_VARIABLE_Specs_108_108);
        Var_112 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImpSolverDefn_48, (MR_Integer) 4))));
        {
          Var_109 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_109, 0) = ((MR_Box) (&parse_tree__check_parse_tree_type_defns_scalar_common_10[1]));
          MR_hl_field(MR_mktag(0), Var_109, 1) = ((MR_Box) (parse_tree__check_parse_tree_type_defns__check_type_ctor_defns_11_p_0_1));
          MR_hl_field(MR_mktag(0), Var_109, 2) = ((MR_Box) ((MR_Integer) 4));
          MR_hl_field(MR_mktag(0), Var_109, 3) = ((MR_Box) (TypeCtor_18));
          MR_hl_field(MR_mktag(0), Var_109, 4) = ((MR_Box) (Var_112));
          MR_hl_field(MR_mktag(0), Var_109, 5) = ((MR_Box) ((MR_String) "solver type"));
          MR_hl_field(MR_mktag(0), Var_109, 6) = ((MR_Box) ((MR_String) "implementation"));
        }
        {
          Var_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_127, 0) = ((MR_Box) (ImpMaybeDefnErlang_43));
          MR_hl_field(MR_mktag(1), Var_127, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_126, 0) = ((MR_Box) (ImpMaybeDefnCsharp_42));
          MR_hl_field(MR_mktag(1), Var_126, 1) = ((MR_Box) (Var_127));
        }
        {
          Var_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_125, 0) = ((MR_Box) (ImpMaybeDefnJava_41));
          MR_hl_field(MR_mktag(1), Var_125, 1) = ((MR_Box) (Var_126));
        }
        {
          Var_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_124, 0) = ((MR_Box) (ImpMaybeDefnC_40));
          MR_hl_field(MR_mktag(1), Var_124, 1) = ((MR_Box) (Var_125));
        }
        {
          Var_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_123, 0) = ((MR_Box) (ImpDuMaybeDefn_34));
          MR_hl_field(MR_mktag(1), Var_123, 1) = ((MR_Box) (Var_124));
        }
        {
          Var_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_122, 0) = ((MR_Box) (ImpEqvMaybeDefn_33));
          MR_hl_field(MR_mktag(1), Var_122, 1) = ((MR_Box) (Var_123));
        }
        {
          Var_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_121, 0) = ((MR_Box) (ImpAbstractStdMaybeDefn_32));
          MR_hl_field(MR_mktag(1), Var_121, 1) = ((MR_Box) (Var_122));
        }
        {
          Var_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_120, 0) = ((MR_Box) (IntMaybeDefnErlang_39));
          MR_hl_field(MR_mktag(1), Var_120, 1) = ((MR_Box) (Var_121));
        }
        {
          Var_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_119, 0) = ((MR_Box) (IntMaybeDefnCsharp_38));
          MR_hl_field(MR_mktag(1), Var_119, 1) = ((MR_Box) (Var_120));
        }
        {
          Var_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_118, 0) = ((MR_Box) (IntMaybeDefnJava_37));
          MR_hl_field(MR_mktag(1), Var_118, 1) = ((MR_Box) (Var_119));
        }
        {
          Var_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_117, 0) = ((MR_Box) (IntMaybeDefnC_36));
          MR_hl_field(MR_mktag(1), Var_117, 1) = ((MR_Box) (Var_118));
        }
        {
          Var_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_116, 0) = ((MR_Box) (IntDuMaybeDefn_28));
          MR_hl_field(MR_mktag(1), Var_116, 1) = ((MR_Box) (Var_117));
        }
        {
          Var_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_115, 0) = ((MR_Box) (IntEqvMaybeDefn_27));
          MR_hl_field(MR_mktag(1), Var_115, 1) = ((MR_Box) (Var_116));
        }
        {
          Var_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_110, 0) = ((MR_Box) (IntAbstractStdMaybeDefn_26));
          MR_hl_field(MR_mktag(1), Var_110, 1) = ((MR_Box) (Var_115));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__check_parse_tree_type_defns_scalar_common_1[6]), (MR_Word) (&parse_tree__check_parse_tree_type_defns_scalar_common_1[4]), Var_109, Var_110, ((MR_Box) (STATE_VARIABLE_Specs_108_108)), &conv1_STATE_VARIABLE_Specs_111_111);
        STATE_VARIABLE_Specs_111_111 = ((MR_Word) (conv1_STATE_VARIABLE_Specs_111_111));
        Var_132 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImpSolverDefn_48, (MR_Integer) 4))));
        {
          Var_129 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_129, 0) = ((MR_Box) (&parse_tree__check_parse_tree_type_defns_scalar_common_10[2]));
          MR_hl_field(MR_mktag(0), Var_129, 1) = ((MR_Box) (parse_tree__check_parse_tree_type_defns__check_type_ctor_defns_11_p_0_2));
          MR_hl_field(MR_mktag(0), Var_129, 2) = ((MR_Box) ((MR_Integer) 4));
          MR_hl_field(MR_mktag(0), Var_129, 3) = ((MR_Box) (TypeCtor_18));
          MR_hl_field(MR_mktag(0), Var_129, 4) = ((MR_Box) (Var_132));
          MR_hl_field(MR_mktag(0), Var_129, 5) = ((MR_Box) ((MR_String) "solver type"));
          MR_hl_field(MR_mktag(0), Var_129, 6) = ((MR_Box) ((MR_String) "implementation"));
        }
        {
          Var_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_137, 0) = ((MR_Box) (ImpMaybeEnumErlang_47));
          MR_hl_field(MR_mktag(1), Var_137, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_136, 0) = ((MR_Box) (ImpMaybeEnumCsharp_46));
          MR_hl_field(MR_mktag(1), Var_136, 1) = ((MR_Box) (Var_137));
        }
        {
          Var_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_135, 0) = ((MR_Box) (ImpMaybeEnumJava_45));
          MR_hl_field(MR_mktag(1), Var_135, 1) = ((MR_Box) (Var_136));
        }
        {
          Var_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_130, 0) = ((MR_Box) (ImpMaybeEnumC_44));
          MR_hl_field(MR_mktag(1), Var_130, 1) = ((MR_Box) (Var_135));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__check_parse_tree_type_defns_scalar_common_1[7]), (MR_Word) (&parse_tree__check_parse_tree_type_defns_scalar_common_1[4]), Var_129, Var_130, ((MR_Box) (STATE_VARIABLE_Specs_111_111)), &conv3_STATE_VARIABLE_Specs_101);
        *STATE_VARIABLE_Specs_101 = ((MR_Word) (conv3_STATE_VARIABLE_Specs_101));
        {
          CheckedSolverDefn_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), CheckedSolverDefn_49, 0) = ((MR_Box) (IntAbstractSolverMaybeDefn_24));
          MR_hl_field(MR_mktag(1), CheckedSolverDefn_49, 1) = ((MR_Box) (ImpSolverDefn_48));
        }
        {
          CheckedDefn_50 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), CheckedDefn_50, 0) = ((MR_Box) (CheckedSolverDefn_49));
        }
        mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__type_ctor_info_type_ctor_checked_defn_0), ((MR_Box) (TypeCtor_18)), ((MR_Box) (CheckedDefn_50)), STATE_VARIABLE_TypeCtorCheckedMap_0_98, STATE_VARIABLE_TypeCtorCheckedMap_99);
      }
    }
    else
    {
      MR_Word EqvDefn_52;
      MR_String EqvWhere_53;
      MR_Word Status_54;
      MR_Word IntEqvDefn_51;

      succeeded = (IntEqvMaybeDefn_27 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        IntEqvDefn_51 = ((MR_Word) ((MR_hl_field(MR_mktag(1), IntEqvMaybeDefn_27, (MR_Integer) 0))));
        EqvDefn_52 = IntEqvDefn_51;
        EqvWhere_53 = (MR_String) "interface";
        Status_54 = (MR_Integer) 0;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (ImpEqvMaybeDefn_33 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          EqvDefn_52 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ImpEqvMaybeDefn_33, (MR_Integer) 0))));
          EqvWhere_53 = (MR_String) "implementation";
          if ((IntAbstractStdMaybeDefn_26 == (MR_Word) ((MR_Unsigned) 0U)))
            Status_54 = (MR_Integer) 2;
          else
            Status_54 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
      }
      if (succeeded)
      {
        MR_Word CheckedStdDefn_57;
        MR_Word STATE_VARIABLE_Specs_140_140;
        MR_Word Var_141;
        MR_Word Var_142;
        MR_Word STATE_VARIABLE_Specs_143_143;
        MR_Word Var_144;
        MR_Word Var_146;
        MR_Word Var_147;
        MR_Word Var_148;
        MR_Word Var_149;
        MR_Word Var_150;
        MR_Word Var_151;
        MR_Word Var_152;
        MR_Word Var_153;
        MR_Word Var_154;
        MR_Word Var_155;
        MR_Word Var_156;
        MR_Word Var_158;
        MR_Word Var_159;
        MR_Word Var_161;
        MR_Word Var_163;
        MR_Word Var_164;
        MR_Word Var_165;
        MR_Word CheckedDefn_252;
        MR_Box conv5_STATE_VARIABLE_Specs_143_143;
        MR_Box conv7_STATE_VARIABLE_Specs_101;

        parse_tree__check_parse_tree_type_defns__report_any_redundant_abstract_type_in_imp_5_p_0(TypeCtor_18, EqvWhere_53, ImpAbstractStdMaybeDefn_32, STATE_VARIABLE_Specs_106_106, &STATE_VARIABLE_Specs_140_140);
        Var_144 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EqvDefn_52, (MR_Integer) 4))));
        {
          Var_141 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_141, 0) = ((MR_Box) (&parse_tree__check_parse_tree_type_defns_scalar_common_10[1]));
          MR_hl_field(MR_mktag(0), Var_141, 1) = ((MR_Box) (parse_tree__check_parse_tree_type_defns__check_type_ctor_defns_11_p_0_3));
          MR_hl_field(MR_mktag(0), Var_141, 2) = ((MR_Box) ((MR_Integer) 4));
          MR_hl_field(MR_mktag(0), Var_141, 3) = ((MR_Box) (TypeCtor_18));
          MR_hl_field(MR_mktag(0), Var_141, 4) = ((MR_Box) (Var_144));
          MR_hl_field(MR_mktag(0), Var_141, 5) = ((MR_Box) ((MR_String) "equivalence type"));
          MR_hl_field(MR_mktag(0), Var_141, 6) = ((MR_Box) (EqvWhere_53));
        }
        {
          Var_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_156, 0) = ((MR_Box) (ImpMaybeDefnErlang_43));
          MR_hl_field(MR_mktag(1), Var_156, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_155 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_155, 0) = ((MR_Box) (ImpMaybeDefnCsharp_42));
          MR_hl_field(MR_mktag(1), Var_155, 1) = ((MR_Box) (Var_156));
        }
        {
          Var_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_154, 0) = ((MR_Box) (ImpMaybeDefnJava_41));
          MR_hl_field(MR_mktag(1), Var_154, 1) = ((MR_Box) (Var_155));
        }
        {
          Var_153 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_153, 0) = ((MR_Box) (ImpMaybeDefnC_40));
          MR_hl_field(MR_mktag(1), Var_153, 1) = ((MR_Box) (Var_154));
        }
        {
          Var_152 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_152, 0) = ((MR_Box) (ImpDuMaybeDefn_34));
          MR_hl_field(MR_mktag(1), Var_152, 1) = ((MR_Box) (Var_153));
        }
        {
          Var_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_151, 0) = ((MR_Box) (ImpAbstractSolverMaybeDefn_30));
          MR_hl_field(MR_mktag(1), Var_151, 1) = ((MR_Box) (Var_152));
        }
        {
          Var_150 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_150, 0) = ((MR_Box) (IntMaybeDefnErlang_39));
          MR_hl_field(MR_mktag(1), Var_150, 1) = ((MR_Box) (Var_151));
        }
        {
          Var_149 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_149, 0) = ((MR_Box) (IntMaybeDefnCsharp_38));
          MR_hl_field(MR_mktag(1), Var_149, 1) = ((MR_Box) (Var_150));
        }
        {
          Var_148 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_148, 0) = ((MR_Box) (IntMaybeDefnJava_37));
          MR_hl_field(MR_mktag(1), Var_148, 1) = ((MR_Box) (Var_149));
        }
        {
          Var_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_147, 0) = ((MR_Box) (IntMaybeDefnC_36));
          MR_hl_field(MR_mktag(1), Var_147, 1) = ((MR_Box) (Var_148));
        }
        {
          Var_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_146, 0) = ((MR_Box) (IntDuMaybeDefn_28));
          MR_hl_field(MR_mktag(1), Var_146, 1) = ((MR_Box) (Var_147));
        }
        {
          Var_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_142, 0) = ((MR_Box) (IntAbstractSolverMaybeDefn_24));
          MR_hl_field(MR_mktag(1), Var_142, 1) = ((MR_Box) (Var_146));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__check_parse_tree_type_defns_scalar_common_1[6]), (MR_Word) (&parse_tree__check_parse_tree_type_defns_scalar_common_1[4]), Var_141, Var_142, ((MR_Box) (STATE_VARIABLE_Specs_140_140)), &conv5_STATE_VARIABLE_Specs_143_143);
        STATE_VARIABLE_Specs_143_143 = ((MR_Word) (conv5_STATE_VARIABLE_Specs_143_143));
        Var_161 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EqvDefn_52, (MR_Integer) 4))));
        {
          Var_158 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_158, 0) = ((MR_Box) (&parse_tree__check_parse_tree_type_defns_scalar_common_10[2]));
          MR_hl_field(MR_mktag(0), Var_158, 1) = ((MR_Box) (parse_tree__check_parse_tree_type_defns__check_type_ctor_defns_11_p_0_4));
          MR_hl_field(MR_mktag(0), Var_158, 2) = ((MR_Box) ((MR_Integer) 4));
          MR_hl_field(MR_mktag(0), Var_158, 3) = ((MR_Box) (TypeCtor_18));
          MR_hl_field(MR_mktag(0), Var_158, 4) = ((MR_Box) (Var_161));
          MR_hl_field(MR_mktag(0), Var_158, 5) = ((MR_Box) ((MR_String) "equivalence type"));
          MR_hl_field(MR_mktag(0), Var_158, 6) = ((MR_Box) (EqvWhere_53));
        }
        {
          Var_165 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_165, 0) = ((MR_Box) (ImpMaybeEnumErlang_47));
          MR_hl_field(MR_mktag(1), Var_165, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_164, 0) = ((MR_Box) (ImpMaybeEnumCsharp_46));
          MR_hl_field(MR_mktag(1), Var_164, 1) = ((MR_Box) (Var_165));
        }
        {
          Var_163 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_163, 0) = ((MR_Box) (ImpMaybeEnumJava_45));
          MR_hl_field(MR_mktag(1), Var_163, 1) = ((MR_Box) (Var_164));
        }
        {
          Var_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_159, 0) = ((MR_Box) (ImpMaybeEnumC_44));
          MR_hl_field(MR_mktag(1), Var_159, 1) = ((MR_Box) (Var_163));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__check_parse_tree_type_defns_scalar_common_1[7]), (MR_Word) (&parse_tree__check_parse_tree_type_defns_scalar_common_1[4]), Var_158, Var_159, ((MR_Box) (STATE_VARIABLE_Specs_143_143)), &conv7_STATE_VARIABLE_Specs_101);
        *STATE_VARIABLE_Specs_101 = ((MR_Word) (conv7_STATE_VARIABLE_Specs_101));
        {
          CheckedStdDefn_57 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), CheckedStdDefn_57, 0) = (MR_Box) ((MR_Unsigned) (Status_54));
          MR_hl_field(MR_mktag(0), CheckedStdDefn_57, 1) = ((MR_Box) (EqvDefn_52));
        }
        {
          CheckedDefn_252 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), CheckedDefn_252, 0) = ((MR_Box) (CheckedStdDefn_57));
        }
        mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__type_ctor_info_type_ctor_checked_defn_0), ((MR_Box) (TypeCtor_18)), ((MR_Box) (CheckedDefn_252)), STATE_VARIABLE_TypeCtorCheckedMap_0_98, STATE_VARIABLE_TypeCtorCheckedMap_99);
      }
      else
      {
        MR_Word DuDefn_59;
        MR_Word DuSection_60;
        MR_String DuWhere_61;
        MR_Word IntDuDefn_58;

        succeeded = (IntDuMaybeDefn_28 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          IntDuDefn_58 = ((MR_Word) ((MR_hl_field(MR_mktag(1), IntDuMaybeDefn_28, (MR_Integer) 0))));
          DuDefn_59 = IntDuDefn_58;
          DuSection_60 = (MR_Integer) 0;
          DuWhere_61 = (MR_String) "interface";
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (ImpDuMaybeDefn_34 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            DuDefn_59 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ImpDuMaybeDefn_34, (MR_Integer) 0))));
            DuSection_60 = (MR_Integer) 1;
            DuWhere_61 = (MR_String) "implementation";
            succeeded = MR_TRUE;
          }
        }
        if (succeeded)
        {
          MR_Word ChosenMaybeDefnCJCsE_63;
          MR_Word ChosenMaybeDefnC_64;
          MR_Word ChosenMaybeDefnJava_65;
          MR_Word ChosenMaybeDefnCsharp_66;
          MR_Word ChosenMaybeDefnErlang_67;
          MR_Word MaybeOnlyConstants_68;
          MR_Word MaybeDefnOrEnumC_69;
          MR_Word MaybeDefnOrEnumJava_70;
          MR_Word MaybeDefnOrEnumCsharp_71;
          MR_Word MaybeDefnOrEnumErlang_72;
          MR_Word MaybeDefnOrEnumCJCsE_73;
          MR_Word STATE_VARIABLE_Specs_168_168;
          MR_Word Var_169;
          MR_Word Var_170;
          MR_Word STATE_VARIABLE_Specs_171_171;
          MR_Word Var_172;
          MR_Word Var_174;
          MR_Word STATE_VARIABLE_Specs_176_176;
          MR_Word STATE_VARIABLE_Specs_178_178;
          MR_Word STATE_VARIABLE_Specs_180_180;
          MR_Word STATE_VARIABLE_Specs_182_182;
          MR_Word CheckedDefn_253;
          MR_Word Status_254;
          MR_Word CheckedStdDefn_255;
          MR_Box conv9_STATE_VARIABLE_Specs_171_171;

          parse_tree__check_parse_tree_type_defns__report_any_redundant_abstract_type_in_imp_5_p_0(TypeCtor_18, DuWhere_61, ImpAbstractStdMaybeDefn_32, STATE_VARIABLE_Specs_106_106, &STATE_VARIABLE_Specs_168_168);
          Var_172 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DuDefn_59, (MR_Integer) 4))));
          {
            Var_169 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_169, 0) = ((MR_Box) (&parse_tree__check_parse_tree_type_defns_scalar_common_10[1]));
            MR_hl_field(MR_mktag(0), Var_169, 1) = ((MR_Box) (parse_tree__check_parse_tree_type_defns__check_type_ctor_defns_11_p_0_5));
            MR_hl_field(MR_mktag(0), Var_169, 2) = ((MR_Box) ((MR_Integer) 4));
            MR_hl_field(MR_mktag(0), Var_169, 3) = ((MR_Box) (TypeCtor_18));
            MR_hl_field(MR_mktag(0), Var_169, 4) = ((MR_Box) (Var_172));
            MR_hl_field(MR_mktag(0), Var_169, 5) = ((MR_Box) ((MR_String) "discriminated union type"));
            MR_hl_field(MR_mktag(0), Var_169, 6) = ((MR_Box) (DuWhere_61));
          }
          {
            Var_174 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_174, 0) = ((MR_Box) (ImpAbstractSolverMaybeDefn_30));
            MR_hl_field(MR_mktag(1), Var_174, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_170 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_170, 0) = ((MR_Box) (IntAbstractSolverMaybeDefn_24));
            MR_hl_field(MR_mktag(1), Var_170, 1) = ((MR_Box) (Var_174));
          }
          mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__check_parse_tree_type_defns_scalar_common_1[6]), (MR_Word) (&parse_tree__check_parse_tree_type_defns_scalar_common_1[4]), Var_169, Var_170, ((MR_Box) (STATE_VARIABLE_Specs_168_168)), &conv9_STATE_VARIABLE_Specs_171_171);
          STATE_VARIABLE_Specs_171_171 = ((MR_Word) (conv9_STATE_VARIABLE_Specs_171_171));
          parse_tree__check_parse_tree_type_defns__decide_du_foreign_type_section_10_p_0(TypeCtor_18, DuDefn_59, DuSection_60, IntAbstractStdMaybeDefn_26, IntMaybeDefnCJCsE_29, ImpMaybeDefnCJCsE_35, &Status_254, &ChosenMaybeDefnCJCsE_63, STATE_VARIABLE_Specs_171_171, &STATE_VARIABLE_Specs_176_176);
          ChosenMaybeDefnC_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ChosenMaybeDefnCJCsE_63, (MR_Integer) 0))));
          ChosenMaybeDefnJava_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ChosenMaybeDefnCJCsE_63, (MR_Integer) 1))));
          ChosenMaybeDefnCsharp_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ChosenMaybeDefnCJCsE_63, (MR_Integer) 2))));
          ChosenMaybeDefnErlang_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ChosenMaybeDefnCJCsE_63, (MR_Integer) 3))));
          MaybeOnlyConstants_68 = parse_tree__check_parse_tree_type_defns__is_du_type_defn_an_enum_or_dummy_1_f_0(DuDefn_59);
          parse_tree__check_parse_tree_type_defns__decide_du_foreign_representation_for_lang_9_p_0(TypeCtor_18, DuDefn_59, MaybeOnlyConstants_68, (MR_Integer) 0, ChosenMaybeDefnC_64, ImpMaybeEnumC_44, &MaybeDefnOrEnumC_69, STATE_VARIABLE_Specs_176_176, &STATE_VARIABLE_Specs_178_178);
          parse_tree__check_parse_tree_type_defns__decide_du_foreign_representation_for_lang_9_p_0(TypeCtor_18, DuDefn_59, MaybeOnlyConstants_68, (MR_Integer) 2, ChosenMaybeDefnJava_65, ImpMaybeEnumJava_45, &MaybeDefnOrEnumJava_70, STATE_VARIABLE_Specs_178_178, &STATE_VARIABLE_Specs_180_180);
          parse_tree__check_parse_tree_type_defns__decide_du_foreign_representation_for_lang_9_p_0(TypeCtor_18, DuDefn_59, MaybeOnlyConstants_68, (MR_Integer) 1, ChosenMaybeDefnCsharp_66, ImpMaybeEnumCsharp_46, &MaybeDefnOrEnumCsharp_71, STATE_VARIABLE_Specs_180_180, &STATE_VARIABLE_Specs_182_182);
          parse_tree__check_parse_tree_type_defns__decide_du_foreign_representation_for_lang_9_p_0(TypeCtor_18, DuDefn_59, MaybeOnlyConstants_68, (MR_Integer) 3, ChosenMaybeDefnErlang_67, ImpMaybeEnumErlang_47, &MaybeDefnOrEnumErlang_72, STATE_VARIABLE_Specs_182_182, STATE_VARIABLE_Specs_101);
          {
            MaybeDefnOrEnumCJCsE_73 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), MaybeDefnOrEnumCJCsE_73, 0) = ((MR_Box) (MaybeDefnOrEnumC_69));
            MR_hl_field(MR_mktag(0), MaybeDefnOrEnumCJCsE_73, 1) = ((MR_Box) (MaybeDefnOrEnumJava_70));
            MR_hl_field(MR_mktag(0), MaybeDefnOrEnumCJCsE_73, 2) = ((MR_Box) (MaybeDefnOrEnumCsharp_71));
            MR_hl_field(MR_mktag(0), MaybeDefnOrEnumCJCsE_73, 3) = ((MR_Box) (MaybeDefnOrEnumErlang_72));
          }
          {
            CheckedStdDefn_255 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), CheckedStdDefn_255, 0) = (MR_Box) ((MR_Unsigned) (Status_254));
            MR_hl_field(MR_mktag(1), CheckedStdDefn_255, 1) = ((MR_Box) (DuDefn_59));
            MR_hl_field(MR_mktag(1), CheckedStdDefn_255, 2) = ((MR_Box) (MaybeOnlyConstants_68));
            MR_hl_field(MR_mktag(1), CheckedStdDefn_255, 3) = ((MR_Box) (MaybeDefnOrEnumCJCsE_73));
          }
          {
            CheckedDefn_253 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), CheckedDefn_253, 0) = ((MR_Box) (CheckedStdDefn_255));
          }
          mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__type_ctor_info_type_ctor_checked_defn_0), ((MR_Box) (TypeCtor_18)), ((MR_Box) (CheckedDefn_253)), STATE_VARIABLE_TypeCtorCheckedMap_0_98, STATE_VARIABLE_TypeCtorCheckedMap_99);
        }
        else
        {
          succeeded = (IntMaybeDefnC_36 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
          }
          if (!(succeeded))
          {
            succeeded = (IntMaybeDefnJava_37 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
            }
            if (!(succeeded))
            {
              succeeded = (IntMaybeDefnCsharp_38 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
              }
              if (!(succeeded))
              {
                succeeded = (IntMaybeDefnErlang_39 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                }
                if (!(succeeded))
                {
                  succeeded = (ImpMaybeDefnC_40 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                  }
                  if (!(succeeded))
                  {
                    succeeded = (ImpMaybeDefnJava_41 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                    }
                    if (!(succeeded))
                    {
                      succeeded = (ImpMaybeDefnCsharp_42 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                      }
                      if (!(succeeded))
                      {
                        succeeded = (ImpMaybeDefnErlang_43 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          if (succeeded)
          {
            MR_Word IntForeignContexts_82;
            MR_Word SortedIntForeignContexts_83;
            MR_Word FirstForeignContext_84;
            MR_String ForeignWhere_86;
            MR_Word ChosenAbstractStdDefn_89;
            MR_Word Var_186;
            MR_Word Var_187;
            MR_Word Var_188;
            MR_Word Var_189;
            MR_Word Var_196;
            MR_Word Var_197;
            MR_Word STATE_VARIABLE_Specs_198_198;
            MR_Word Var_200;
            MR_Word Var_202;
            MR_Word Var_203;
            MR_Word STATE_VARIABLE_Specs_204_204;
            MR_Word Var_206;
            MR_Word Var_207;
            MR_Word Var_208;
            MR_Word CheckedDefn_256;
            MR_Word Status_257;
            MR_Word CheckedStdDefn_258;
            MR_Word ChosenMaybeDefnCJCsE_259;
            MR_Box conv12_STATE_VARIABLE_Specs_198_198;
            MR_Box conv14_STATE_VARIABLE_Specs_204_204;

            {
              Var_189 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_189, 0) = ((MR_Box) (IntMaybeDefnErlang_39));
              MR_hl_field(MR_mktag(1), Var_189, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_188 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_188, 0) = ((MR_Box) (IntMaybeDefnCsharp_38));
              MR_hl_field(MR_mktag(1), Var_188, 1) = ((MR_Box) (Var_189));
            }
            {
              Var_187 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_187, 0) = ((MR_Box) (IntMaybeDefnJava_37));
              MR_hl_field(MR_mktag(1), Var_187, 1) = ((MR_Box) (Var_188));
            }
            {
              Var_186 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_186, 0) = ((MR_Box) (IntMaybeDefnC_36));
              MR_hl_field(MR_mktag(1), Var_186, 1) = ((MR_Box) (Var_187));
            }
            IntForeignContexts_82 = parse_tree__check_parse_tree_type_defns__get_maybe_type_defn_contexts_1_f_0(Var_186);
            mercury__list__sort_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_context_0), IntForeignContexts_82, &SortedIntForeignContexts_83);
            if ((SortedIntForeignContexts_83 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word ImpForeignContexts_87;
              MR_Word SortedImpForeignContexts_88;
              MR_Word Var_191;
              MR_Word Var_192;
              MR_Word Var_193;
              MR_Word Var_194;
              MR_Box conv10_FirstForeignContext_84;

              {
                Var_194 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_194, 0) = ((MR_Box) (ImpMaybeDefnErlang_43));
                MR_hl_field(MR_mktag(1), Var_194, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_193 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_193, 0) = ((MR_Box) (ImpMaybeDefnCsharp_42));
                MR_hl_field(MR_mktag(1), Var_193, 1) = ((MR_Box) (Var_194));
              }
              {
                Var_192 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_192, 0) = ((MR_Box) (ImpMaybeDefnJava_41));
                MR_hl_field(MR_mktag(1), Var_192, 1) = ((MR_Box) (Var_193));
              }
              {
                Var_191 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_191, 0) = ((MR_Box) (ImpMaybeDefnC_40));
                MR_hl_field(MR_mktag(1), Var_191, 1) = ((MR_Box) (Var_192));
              }
              ImpForeignContexts_87 = parse_tree__check_parse_tree_type_defns__get_maybe_type_defn_contexts_1_f_0(Var_191);
              mercury__list__sort_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_context_0), ImpForeignContexts_87, &SortedImpForeignContexts_88);
              conv10_FirstForeignContext_84 = mercury__list__det_head_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_context_0), SortedImpForeignContexts_88);
              FirstForeignContext_84 = ((MR_Word) (conv10_FirstForeignContext_84));
              ForeignWhere_86 = (MR_String) "implementation";
            }
            else
            {
              FirstForeignContext_84 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SortedIntForeignContexts_83, (MR_Integer) 0))));
              ForeignWhere_86 = (MR_String) "interface";
            }
            {
              Var_196 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_196, 0) = ((MR_Box) (&parse_tree__check_parse_tree_type_defns_scalar_common_10[1]));
              MR_hl_field(MR_mktag(0), Var_196, 1) = ((MR_Box) (parse_tree__check_parse_tree_type_defns__check_type_ctor_defns_11_p_0_6));
              MR_hl_field(MR_mktag(0), Var_196, 2) = ((MR_Box) ((MR_Integer) 4));
              MR_hl_field(MR_mktag(0), Var_196, 3) = ((MR_Box) (TypeCtor_18));
              MR_hl_field(MR_mktag(0), Var_196, 4) = ((MR_Box) (FirstForeignContext_84));
              MR_hl_field(MR_mktag(0), Var_196, 5) = ((MR_Box) ((MR_String) "foreign type"));
              MR_hl_field(MR_mktag(0), Var_196, 6) = ((MR_Box) (ForeignWhere_86));
            }
            {
              Var_200 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_200, 0) = ((MR_Box) (ImpAbstractSolverMaybeDefn_30));
              MR_hl_field(MR_mktag(1), Var_200, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_197 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_197, 0) = ((MR_Box) (IntAbstractSolverMaybeDefn_24));
              MR_hl_field(MR_mktag(1), Var_197, 1) = ((MR_Box) (Var_200));
            }
            mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__check_parse_tree_type_defns_scalar_common_1[6]), (MR_Word) (&parse_tree__check_parse_tree_type_defns_scalar_common_1[4]), Var_196, Var_197, ((MR_Box) (STATE_VARIABLE_Specs_106_106)), &conv12_STATE_VARIABLE_Specs_198_198);
            STATE_VARIABLE_Specs_198_198 = ((MR_Word) (conv12_STATE_VARIABLE_Specs_198_198));
            {
              Var_202 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_202, 0) = ((MR_Box) (&parse_tree__check_parse_tree_type_defns_scalar_common_10[2]));
              MR_hl_field(MR_mktag(0), Var_202, 1) = ((MR_Box) (parse_tree__check_parse_tree_type_defns__check_type_ctor_defns_11_p_0_7));
              MR_hl_field(MR_mktag(0), Var_202, 2) = ((MR_Box) ((MR_Integer) 4));
              MR_hl_field(MR_mktag(0), Var_202, 3) = ((MR_Box) (TypeCtor_18));
              MR_hl_field(MR_mktag(0), Var_202, 4) = ((MR_Box) (FirstForeignContext_84));
              MR_hl_field(MR_mktag(0), Var_202, 5) = ((MR_Box) ((MR_String) "foreign type"));
              MR_hl_field(MR_mktag(0), Var_202, 6) = ((MR_Box) (ForeignWhere_86));
            }
            {
              Var_208 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_208, 0) = ((MR_Box) (ImpMaybeEnumErlang_47));
              MR_hl_field(MR_mktag(1), Var_208, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_207 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_207, 0) = ((MR_Box) (ImpMaybeEnumCsharp_46));
              MR_hl_field(MR_mktag(1), Var_207, 1) = ((MR_Box) (Var_208));
            }
            {
              Var_206 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_206, 0) = ((MR_Box) (ImpMaybeEnumJava_45));
              MR_hl_field(MR_mktag(1), Var_206, 1) = ((MR_Box) (Var_207));
            }
            {
              Var_203 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_203, 0) = ((MR_Box) (ImpMaybeEnumC_44));
              MR_hl_field(MR_mktag(1), Var_203, 1) = ((MR_Box) (Var_206));
            }
            mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__check_parse_tree_type_defns_scalar_common_1[7]), (MR_Word) (&parse_tree__check_parse_tree_type_defns_scalar_common_1[4]), Var_202, Var_203, ((MR_Box) (STATE_VARIABLE_Specs_198_198)), &conv14_STATE_VARIABLE_Specs_204_204);
            STATE_VARIABLE_Specs_204_204 = ((MR_Word) (conv14_STATE_VARIABLE_Specs_204_204));
            parse_tree__check_parse_tree_type_defns__decide_only_foreign_type_section_10_p_0(TypeCtor_18, IntAbstractStdMaybeDefn_26, ImpAbstractStdMaybeDefn_32, IntMaybeDefnCJCsE_29, ImpMaybeDefnCJCsE_35, &Status_257, &ChosenAbstractStdDefn_89, &ChosenMaybeDefnCJCsE_259, STATE_VARIABLE_Specs_204_204, STATE_VARIABLE_Specs_101);
            {
              CheckedStdDefn_258 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), CheckedStdDefn_258, 0) = (MR_Box) ((MR_Unsigned) (Status_257));
              MR_hl_field(MR_mktag(2), CheckedStdDefn_258, 1) = ((MR_Box) (ChosenAbstractStdDefn_89));
              MR_hl_field(MR_mktag(2), CheckedStdDefn_258, 2) = ((MR_Box) (ChosenMaybeDefnCJCsE_259));
            }
            {
              CheckedDefn_256 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), CheckedDefn_256, 0) = ((MR_Box) (CheckedStdDefn_258));
            }
            mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__type_ctor_info_type_ctor_checked_defn_0), ((MR_Box) (TypeCtor_18)), ((MR_Box) (CheckedDefn_256)), STATE_VARIABLE_TypeCtorCheckedMap_0_98, STATE_VARIABLE_TypeCtorCheckedMap_99);
          }
          else
          {
            MR_Word AbstractSolverDefn_91;
            MR_String AbstractSolverWhere_92;
            MR_Word Status_269;
            MR_Word IntAbstractSolverDefn_90;

            succeeded = (IntAbstractSolverMaybeDefn_24 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              IntAbstractSolverDefn_90 = ((MR_Word) ((MR_hl_field(MR_mktag(1), IntAbstractSolverMaybeDefn_24, (MR_Integer) 0))));
              AbstractSolverDefn_91 = IntAbstractSolverDefn_90;
              AbstractSolverWhere_92 = (MR_String) "interface";
              Status_269 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = (ImpAbstractSolverMaybeDefn_30 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                AbstractSolverDefn_91 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ImpAbstractSolverMaybeDefn_30, (MR_Integer) 0))));
                AbstractSolverWhere_92 = (MR_String) "implementation";
                Status_269 = (MR_Integer) 1;
                succeeded = MR_TRUE;
              }
            }
            if (succeeded)
            {
              MR_Word STATE_VARIABLE_Specs_212_212;
              MR_Word Var_213;
              MR_Word Var_214;
              MR_Word STATE_VARIABLE_Specs_215_215;
              MR_Word Var_216;
              MR_Word Var_218;
              MR_Word Var_220;
              MR_Word Var_221;
              MR_Word Var_223;
              MR_Word Var_225;
              MR_Word Var_226;
              MR_Word Var_227;
              MR_Word CheckedSolverDefn_260;
              MR_Word CheckedDefn_261;
              MR_Box conv16_STATE_VARIABLE_Specs_215_215;
              MR_Box conv18_STATE_VARIABLE_Specs_101;

              parse_tree__check_parse_tree_type_defns__maybe_report_declared_but_undefined_type_5_p_0(InsistOnDefn_12, TypeCtor_18, AbstractSolverDefn_91, STATE_VARIABLE_Specs_106_106, &STATE_VARIABLE_Specs_212_212);
              Var_216 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AbstractSolverDefn_91, (MR_Integer) 4))));
              {
                Var_213 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_213, 0) = ((MR_Box) (&parse_tree__check_parse_tree_type_defns_scalar_common_10[1]));
                MR_hl_field(MR_mktag(0), Var_213, 1) = ((MR_Box) (parse_tree__check_parse_tree_type_defns__check_type_ctor_defns_11_p_0_8));
                MR_hl_field(MR_mktag(0), Var_213, 2) = ((MR_Box) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(0), Var_213, 3) = ((MR_Box) (TypeCtor_18));
                MR_hl_field(MR_mktag(0), Var_213, 4) = ((MR_Box) (Var_216));
                MR_hl_field(MR_mktag(0), Var_213, 5) = ((MR_Box) ((MR_String) "solver type"));
                MR_hl_field(MR_mktag(0), Var_213, 6) = ((MR_Box) (AbstractSolverWhere_92));
              }
              {
                Var_218 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_218, 0) = ((MR_Box) (ImpAbstractStdMaybeDefn_32));
                MR_hl_field(MR_mktag(1), Var_218, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_214 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_214, 0) = ((MR_Box) (IntAbstractStdMaybeDefn_26));
                MR_hl_field(MR_mktag(1), Var_214, 1) = ((MR_Box) (Var_218));
              }
              mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__check_parse_tree_type_defns_scalar_common_1[6]), (MR_Word) (&parse_tree__check_parse_tree_type_defns_scalar_common_1[4]), Var_213, Var_214, ((MR_Box) (STATE_VARIABLE_Specs_212_212)), &conv16_STATE_VARIABLE_Specs_215_215);
              STATE_VARIABLE_Specs_215_215 = ((MR_Word) (conv16_STATE_VARIABLE_Specs_215_215));
              Var_223 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AbstractSolverDefn_91, (MR_Integer) 4))));
              {
                Var_220 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_220, 0) = ((MR_Box) (&parse_tree__check_parse_tree_type_defns_scalar_common_10[2]));
                MR_hl_field(MR_mktag(0), Var_220, 1) = ((MR_Box) (parse_tree__check_parse_tree_type_defns__check_type_ctor_defns_11_p_0_9));
                MR_hl_field(MR_mktag(0), Var_220, 2) = ((MR_Box) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(0), Var_220, 3) = ((MR_Box) (TypeCtor_18));
                MR_hl_field(MR_mktag(0), Var_220, 4) = ((MR_Box) (Var_223));
                MR_hl_field(MR_mktag(0), Var_220, 5) = ((MR_Box) ((MR_String) "solver type"));
                MR_hl_field(MR_mktag(0), Var_220, 6) = ((MR_Box) (AbstractSolverWhere_92));
              }
              {
                Var_227 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_227, 0) = ((MR_Box) (ImpMaybeEnumErlang_47));
                MR_hl_field(MR_mktag(1), Var_227, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_226 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_226, 0) = ((MR_Box) (ImpMaybeEnumCsharp_46));
                MR_hl_field(MR_mktag(1), Var_226, 1) = ((MR_Box) (Var_227));
              }
              {
                Var_225 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_225, 0) = ((MR_Box) (ImpMaybeEnumJava_45));
                MR_hl_field(MR_mktag(1), Var_225, 1) = ((MR_Box) (Var_226));
              }
              {
                Var_221 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_221, 0) = ((MR_Box) (ImpMaybeEnumC_44));
                MR_hl_field(MR_mktag(1), Var_221, 1) = ((MR_Box) (Var_225));
              }
              mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__check_parse_tree_type_defns_scalar_common_1[7]), (MR_Word) (&parse_tree__check_parse_tree_type_defns_scalar_common_1[4]), Var_220, Var_221, ((MR_Box) (STATE_VARIABLE_Specs_215_215)), &conv18_STATE_VARIABLE_Specs_101);
              *STATE_VARIABLE_Specs_101 = ((MR_Word) (conv18_STATE_VARIABLE_Specs_101));
              {
                CheckedSolverDefn_260 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), CheckedSolverDefn_260, 0) = (MR_Box) ((MR_Unsigned) (Status_269));
                MR_hl_field(MR_mktag(0), CheckedSolverDefn_260, 1) = ((MR_Box) (AbstractSolverDefn_91));
              }
              {
                CheckedDefn_261 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), CheckedDefn_261, 0) = ((MR_Box) (CheckedSolverDefn_260));
              }
              mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__type_ctor_info_type_ctor_checked_defn_0), ((MR_Box) (TypeCtor_18)), ((MR_Box) (CheckedDefn_261)), STATE_VARIABLE_TypeCtorCheckedMap_0_98, STATE_VARIABLE_TypeCtorCheckedMap_99);
            }
            else
            {
              MR_Word AbstractStdDefn_95;
              MR_Word Status_265;
              MR_Word IntAbstractStdDefn_94;

              succeeded = (IntAbstractStdMaybeDefn_26 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                IntAbstractStdDefn_94 = ((MR_Word) ((MR_hl_field(MR_mktag(1), IntAbstractStdMaybeDefn_26, (MR_Integer) 0))));
                AbstractStdDefn_95 = IntAbstractStdDefn_94;
                Status_265 = (MR_Integer) 1;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = (ImpAbstractStdMaybeDefn_32 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  AbstractStdDefn_95 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ImpAbstractStdMaybeDefn_32, (MR_Integer) 0))));
                  Status_265 = (MR_Integer) 2;
                  succeeded = MR_TRUE;
                }
              }
              if (succeeded)
              {
                MR_Word STATE_VARIABLE_Specs_230_230;
                MR_Word Var_231;
                MR_Word Var_232;
                MR_Word Var_235;
                MR_Word Var_236;
                MR_Word Var_237;
                MR_Word CheckedDefn_262;
                MR_Word CheckedStdDefn_263;
                MR_Box conv20_STATE_VARIABLE_Specs_101;

                parse_tree__check_parse_tree_type_defns__maybe_report_declared_but_undefined_type_5_p_0(InsistOnDefn_12, TypeCtor_18, AbstractStdDefn_95, STATE_VARIABLE_Specs_106_106, &STATE_VARIABLE_Specs_230_230);
                {
                  Var_231 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_231, 0) = ((MR_Box) (&parse_tree__check_parse_tree_type_defns_scalar_common_7[3]));
                  MR_hl_field(MR_mktag(0), Var_231, 1) = ((MR_Box) (parse_tree__check_parse_tree_type_defns__check_type_ctor_defns_11_p_0_10));
                  MR_hl_field(MR_mktag(0), Var_231, 2) = ((MR_Box) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_231, 3) = ((MR_Box) (TypeCtor_18));
                  MR_hl_field(MR_mktag(0), Var_231, 4) = ((MR_Box) ((MR_String) "undefined"));
                }
                {
                  Var_237 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_237, 0) = ((MR_Box) (ImpMaybeEnumErlang_47));
                  MR_hl_field(MR_mktag(1), Var_237, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_236 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_236, 0) = ((MR_Box) (ImpMaybeEnumCsharp_46));
                  MR_hl_field(MR_mktag(1), Var_236, 1) = ((MR_Box) (Var_237));
                }
                {
                  Var_235 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_235, 0) = ((MR_Box) (ImpMaybeEnumJava_45));
                  MR_hl_field(MR_mktag(1), Var_235, 1) = ((MR_Box) (Var_236));
                }
                {
                  Var_232 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_232, 0) = ((MR_Box) (ImpMaybeEnumC_44));
                  MR_hl_field(MR_mktag(1), Var_232, 1) = ((MR_Box) (Var_235));
                }
                mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__check_parse_tree_type_defns_scalar_common_1[7]), (MR_Word) (&parse_tree__check_parse_tree_type_defns_scalar_common_1[4]), Var_231, Var_232, ((MR_Box) (STATE_VARIABLE_Specs_230_230)), &conv20_STATE_VARIABLE_Specs_101);
                *STATE_VARIABLE_Specs_101 = ((MR_Word) (conv20_STATE_VARIABLE_Specs_101));
                {
                  CheckedStdDefn_263 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), CheckedStdDefn_263, 0) = (MR_Box) ((MR_Unsigned) (Status_265));
                  MR_hl_field(MR_mktag(2), CheckedStdDefn_263, 1) = ((MR_Box) (AbstractStdDefn_95));
                  MR_hl_field(MR_mktag(2), CheckedStdDefn_263, 2) = ((MR_Box) (&parse_tree__check_parse_tree_type_defns_scalar_common_3[0]));
                }
                {
                  CheckedDefn_262 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), CheckedDefn_262, 0) = ((MR_Box) (CheckedStdDefn_263));
                }
                mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__type_ctor_info_type_ctor_checked_defn_0), ((MR_Box) (TypeCtor_18)), ((MR_Box) (CheckedDefn_262)), STATE_VARIABLE_TypeCtorCheckedMap_0_98, STATE_VARIABLE_TypeCtorCheckedMap_99);
              }
              else
              {
                MR_Word Var_244;
                MR_Word Var_245;
                MR_Word Var_248;
                MR_Word Var_249;
                MR_Word Var_250;
                MR_Box conv22_STATE_VARIABLE_Specs_101;

                {
                  Var_244 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_244, 0) = ((MR_Box) (&parse_tree__check_parse_tree_type_defns_scalar_common_7[3]));
                  MR_hl_field(MR_mktag(0), Var_244, 1) = ((MR_Box) (parse_tree__check_parse_tree_type_defns__check_type_ctor_defns_11_p_0_11));
                  MR_hl_field(MR_mktag(0), Var_244, 2) = ((MR_Box) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_244, 3) = ((MR_Box) (TypeCtor_18));
                  MR_hl_field(MR_mktag(0), Var_244, 4) = ((MR_Box) ((MR_String) "undeclared"));
                }
                {
                  Var_250 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_250, 0) = ((MR_Box) (ImpMaybeEnumErlang_47));
                  MR_hl_field(MR_mktag(1), Var_250, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_249 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_249, 0) = ((MR_Box) (ImpMaybeEnumCsharp_46));
                  MR_hl_field(MR_mktag(1), Var_249, 1) = ((MR_Box) (Var_250));
                }
                {
                  Var_248 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_248, 0) = ((MR_Box) (ImpMaybeEnumJava_45));
                  MR_hl_field(MR_mktag(1), Var_248, 1) = ((MR_Box) (Var_249));
                }
                {
                  Var_245 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_245, 0) = ((MR_Box) (ImpMaybeEnumC_44));
                  MR_hl_field(MR_mktag(1), Var_245, 1) = ((MR_Box) (Var_248));
                }
                mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__check_parse_tree_type_defns_scalar_common_1[7]), (MR_Word) (&parse_tree__check_parse_tree_type_defns_scalar_common_1[4]), Var_244, Var_245, ((MR_Box) (STATE_VARIABLE_Specs_106_106)), &conv22_STATE_VARIABLE_Specs_101);
                *STATE_VARIABLE_Specs_101 = ((MR_Word) (conv22_STATE_VARIABLE_Specs_101));
                *STATE_VARIABLE_TypeCtorCheckedMap_99 = STATE_VARIABLE_TypeCtorCheckedMap_0_98;
              }
            }
          }
        }
      }
    }
  }
}

static MR_Word MR_CALL 
parse_tree__check_parse_tree_type_defns__get_maybe_type_defn_contexts_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word MaybeTypeDefn_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word MaybeTypeDefns_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word TailContexts_6;

      TailContexts_6 = parse_tree__check_parse_tree_type_defns__get_maybe_type_defn_contexts_1_f_0(MaybeTypeDefns_4);
      if ((MaybeTypeDefn_3 == (MR_Word) ((MR_Unsigned) 0U)))
        HeadVar__2_2 = TailContexts_6;
      else
      {
        MR_Word TypeDefn_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTypeDefn_3, (MR_Integer) 0))));
        MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeDefn_7, (MR_Integer) 4))));

        {
          HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), HeadVar__2_2, 0) = ((MR_Box) (Var_8));
          MR_hl_field(MR_mktag(1), HeadVar__2_2, 1) = ((MR_Box) (TailContexts_6));
        }
      }
    }
    return HeadVar__2_2;
  }
}

static MR_Word MR_CALL 
parse_tree__check_parse_tree_type_defns__is_du_type_defn_an_enum_or_dummy_1_f_0(
  MR_Word TypeDefnInfo_3)
{
  {
    MR_bool succeeded;
    MR_Word MaybeOnlyConstants_4;
    MR_Word TypeDefn_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeDefnInfo_3, (MR_Integer) 2))));

    switch (MR_tag((MR_Word) TypeDefn_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word DetailsDu_11 = (MR_Word) ((MR_Word) (TypeDefn_7));
          MR_Integer NumFunctors_12;
          MR_Integer NumBitsNeeded_13;

          succeeded = parse_tree__prog_type__du_type_is_enum_3_p_0(DetailsDu_11, &NumFunctors_12, &NumBitsNeeded_13);
          if (succeeded)
            {
              MaybeOnlyConstants_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), MaybeOnlyConstants_4, 0) = ((MR_Box) (NumFunctors_12));
              MR_hl_field(MR_mktag(1), MaybeOnlyConstants_4, 1) = ((MR_Box) (NumBitsNeeded_13));
            }
          else
          {
            succeeded = parse_tree__prog_type__du_type_is_dummy_1_p_0(DetailsDu_11);
            if (succeeded)
              MaybeOnlyConstants_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__check_parse_tree_type_defns_scalar_common_1[91]));
            else
              MaybeOnlyConstants_4 = (MR_Word) ((MR_Unsigned) 0U);
          }
        }
        break;
      case (MR_Integer) 1:
        mercury__require__unexpected_2_p_0((MR_String) "function \140parse_tree.check_parse_tree_type_defns.is_du_type_defn_an_enum_or_dummy\'/1", (MR_String) "not du type");
        break;
      case (MR_Integer) 2:
        mercury__require__unexpected_2_p_0((MR_String) "function \140parse_tree.check_parse_tree_type_defns.is_du_type_defn_an_enum_or_dummy\'/1", (MR_String) "not du type");
        break;
      case (MR_Integer) 3:
        mercury__require__unexpected_2_p_0((MR_String) "function \140parse_tree.check_parse_tree_type_defns.is_du_type_defn_an_enum_or_dummy\'/1", (MR_String) "not du type");
        break;
    }
    return MaybeOnlyConstants_4;
  }
}

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__check_any_type_ctor_enums_for_duplicates_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_STATE_VARIABLE_Specs_18;

    parse_tree__check_parse_tree_type_defns__report_duplicate_foreign_defn_7_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_Specs_18);
    *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_Specs_18));
  }
}

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__check_any_type_ctor_enums_for_duplicates_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_Contexts_7;

    parse_tree__check_parse_tree_type_defns__accumulate_foreign_enum_contexts_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_Contexts_7);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Contexts_7));
  }
}

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__check_any_type_ctor_enums_for_duplicates_5_p_0(
  MR_Word ForeignEnumMap_6,
  MR_Word TypeCtor_7,
  MR_Word * MaybeEnumCJCsE_8,
  MR_Word STATE_VARIABLE_Specs_0_11,
  MR_Word * STATE_VARIABLE_Specs_12)
{
  {
    MR_bool succeeded;
    MR_Word AllEnums_10;
    MR_Box conv0_AllEnums_10;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__check_parse_tree_type_defns_scalar_common_1[3]), ForeignEnumMap_6, ((MR_Box) (TypeCtor_7)), &conv0_AllEnums_10);
    if (succeeded)
    {
      AllEnums_10 = ((MR_Word) (conv0_AllEnums_10));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word EnumsC_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllEnums_10, (MR_Integer) 0))));
      MR_Word EnumsJava_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllEnums_10, (MR_Integer) 1))));
      MR_Word EnumsCsharp_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllEnums_10, (MR_Integer) 2))));
      MR_Word EnumsErlang_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllEnums_10, (MR_Integer) 3))));
      MR_Word MaybeEnumC_30;
      MR_Word MaybeEnumJava_31;
      MR_Word MaybeEnumCsharp_32;
      MR_Word MaybeEnumErlang_33;
      MR_Word STATE_VARIABLE_Specs_21_35;
      MR_Word STATE_VARIABLE_Specs_23_37;
      MR_Word STATE_VARIABLE_Specs_25_39;

      if ((EnumsC_26 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MaybeEnumC_30 = (MR_Word) ((MR_Unsigned) 0U);
        STATE_VARIABLE_Specs_21_35 = STATE_VARIABLE_Specs_0_11;
      }
      else
      {
        MR_Word Var_75 = ((MR_Word) ((MR_hl_field(MR_mktag(1), EnumsC_26, (MR_Integer) 1))));
        MR_Word Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(1), EnumsC_26, (MR_Integer) 0))));

        if ((Var_75 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          {
            MaybeEnumC_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeEnumC_30, 0) = ((MR_Box) (Var_76));
          }
          STATE_VARIABLE_Specs_21_35 = STATE_VARIABLE_Specs_0_11;
        }
        else
        {
          MR_Word Contexts_52;
          MR_Word Var_57;
          MR_Box conv2_Contexts_52;
          MR_Word LeastContext_53;
          MR_Word OtherContexts_54;
          MR_Box conv3_LeastContext_53;

          {
            MaybeEnumC_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeEnumC_30, 0) = ((MR_Box) (Var_76));
          }
          Var_57 = mercury__set__init_0_f_0((MR_Word) (&mercury__term__term__type_ctor_info_context_0));
          mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), (MR_Word) (&parse_tree__check_parse_tree_type_defns_scalar_common_1[8]), (MR_Word) (&parse_tree__check_parse_tree_type_defns_scalar_common_2[8]), EnumsC_26, ((MR_Box) (Var_57)), &conv2_Contexts_52);
          Contexts_52 = ((MR_Word) (conv2_Contexts_52));
          succeeded = mercury__set__remove_least_3_p_0((MR_Word) (&mercury__term__term__type_ctor_info_context_0), &conv3_LeastContext_53, Contexts_52, &OtherContexts_54);
          if (succeeded)
          {
            LeastContext_53 = ((MR_Word) (conv3_LeastContext_53));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            MR_Word Var_58;
            MR_Box conv5_STATE_VARIABLE_Specs_21_35;

            {
              Var_58 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_58, 0) = ((MR_Box) (&parse_tree__check_parse_tree_type_defns_scalar_common_10[0]));
              MR_hl_field(MR_mktag(0), Var_58, 1) = ((MR_Box) (parse_tree__check_parse_tree_type_defns__check_any_type_ctor_enums_for_duplicates_5_p_0_2));
              MR_hl_field(MR_mktag(0), Var_58, 2) = ((MR_Box) ((MR_Integer) 4));
              MR_hl_field(MR_mktag(0), Var_58, 3) = ((MR_Box) ((MR_String) "enum"));
              MR_hl_field(MR_mktag(0), Var_58, 4) = ((MR_Box) (TypeCtor_7));
              MR_hl_field(MR_mktag(0), Var_58, 5) = ((MR_Box) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(0), Var_58, 6) = ((MR_Box) (LeastContext_53));
            }
            mercury__set__foldl_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_context_0), (MR_Word) (&parse_tree__check_parse_tree_type_defns_scalar_common_1[4]), Var_58, OtherContexts_54, ((MR_Box) (STATE_VARIABLE_Specs_0_11)), &conv5_STATE_VARIABLE_Specs_21_35);
            STATE_VARIABLE_Specs_21_35 = ((MR_Word) (conv5_STATE_VARIABLE_Specs_21_35));
          }
          else
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.check_parse_tree_type_defns.at_most_one_foreign_enum_for_lang\'/6", (MR_String) "nonempty set doesn\'t have least element");
              return;
            }
        }
      }
      parse_tree__check_parse_tree_type_defns__at_most_one_foreign_enum_for_lang_6_p_0(TypeCtor_7, (MR_Integer) 2, EnumsJava_27, &MaybeEnumJava_31, STATE_VARIABLE_Specs_21_35, &STATE_VARIABLE_Specs_23_37);
      parse_tree__check_parse_tree_type_defns__at_most_one_foreign_enum_for_lang_6_p_0(TypeCtor_7, (MR_Integer) 1, EnumsCsharp_28, &MaybeEnumCsharp_32, STATE_VARIABLE_Specs_23_37, &STATE_VARIABLE_Specs_25_39);
      parse_tree__check_parse_tree_type_defns__at_most_one_foreign_enum_for_lang_6_p_0(TypeCtor_7, (MR_Integer) 3, EnumsErlang_29, &MaybeEnumErlang_33, STATE_VARIABLE_Specs_25_39, STATE_VARIABLE_Specs_12);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        *MaybeEnumCJCsE_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MaybeEnumC_30));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MaybeEnumJava_31));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MaybeEnumCsharp_32));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (MaybeEnumErlang_33));
      }
    }
    else
    {
      *MaybeEnumCJCsE_8 = (MR_Word) (&parse_tree__check_parse_tree_type_defns_scalar_common_3[1]);
      *STATE_VARIABLE_Specs_12 = STATE_VARIABLE_Specs_0_11;
    }
  }
}

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__at_most_one_foreign_enum_for_lang_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_STATE_VARIABLE_Specs_18;

    parse_tree__check_parse_tree_type_defns__report_duplicate_foreign_defn_7_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_Specs_18);
    *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_Specs_18));
  }
}

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__at_most_one_foreign_enum_for_lang_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Contexts_7;

    parse_tree__check_parse_tree_type_defns__accumulate_foreign_enum_contexts_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Contexts_7);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Contexts_7));
  }
}

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__at_most_one_foreign_enum_for_lang_6_p_0(
  MR_Word TypeCtor_7,
  MR_Word Lang_8,
  MR_Word ForeignEnums_9,
  MR_Word * MaybeForeignEnum_10,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19)
{
  {
    MR_bool succeeded;

    if ((ForeignEnums_9 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *MaybeForeignEnum_10 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Specs_19 = STATE_VARIABLE_Specs_0_18;
    }
    else
    {
      MR_Word Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ForeignEnums_9, (MR_Integer) 1))));
      MR_Word Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ForeignEnums_9, (MR_Integer) 0))));

      if ((Var_40 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeForeignEnum_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_41));
        }
        *STATE_VARIABLE_Specs_19 = STATE_VARIABLE_Specs_0_18;
      }
      else
      {
        MR_Word Contexts_15;
        MR_Word Var_22;
        MR_Box conv1_Contexts_15;
        MR_Word LeastContext_16;
        MR_Word OtherContexts_17;
        MR_Box conv2_LeastContext_16;

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeForeignEnum_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_41));
        }
        Var_22 = mercury__set__init_0_f_0((MR_Word) (&mercury__term__term__type_ctor_info_context_0));
        mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), (MR_Word) (&parse_tree__check_parse_tree_type_defns_scalar_common_1[8]), (MR_Word) (&parse_tree__check_parse_tree_type_defns_scalar_common_2[7]), ForeignEnums_9, ((MR_Box) (Var_22)), &conv1_Contexts_15);
        Contexts_15 = ((MR_Word) (conv1_Contexts_15));
        succeeded = mercury__set__remove_least_3_p_0((MR_Word) (&mercury__term__term__type_ctor_info_context_0), &conv2_LeastContext_16, Contexts_15, &OtherContexts_17);
        if (succeeded)
        {
          LeastContext_16 = ((MR_Word) (conv2_LeastContext_16));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word Var_23;
          MR_Box conv4_STATE_VARIABLE_Specs_19;

          {
            Var_23 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (&parse_tree__check_parse_tree_type_defns_scalar_common_10[0]));
            MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (parse_tree__check_parse_tree_type_defns__at_most_one_foreign_enum_for_lang_6_p_0_2));
            MR_hl_field(MR_mktag(0), Var_23, 2) = ((MR_Box) ((MR_Integer) 4));
            MR_hl_field(MR_mktag(0), Var_23, 3) = ((MR_Box) ((MR_String) "enum"));
            MR_hl_field(MR_mktag(0), Var_23, 4) = ((MR_Box) (TypeCtor_7));
            MR_hl_field(MR_mktag(0), Var_23, 5) = ((MR_Box) (Lang_8));
            MR_hl_field(MR_mktag(0), Var_23, 6) = ((MR_Box) (LeastContext_16));
          }
          mercury__set__foldl_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_context_0), (MR_Word) (&parse_tree__check_parse_tree_type_defns_scalar_common_1[4]), Var_23, OtherContexts_17, ((MR_Box) (STATE_VARIABLE_Specs_0_18)), &conv4_STATE_VARIABLE_Specs_19);
          *STATE_VARIABLE_Specs_19 = ((MR_Word) (conv4_STATE_VARIABLE_Specs_19));
        }
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.check_parse_tree_type_defns.at_most_one_foreign_enum_for_lang\'/6", (MR_String) "nonempty set doesn\'t have least element");
            return;
          }
      }
    }
  }
}

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__check_type_ctor_enums_in_int_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_Specs_16;

    parse_tree__check_parse_tree_type_defns__report_type_ctor_enum_in_int_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_Specs_16);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Specs_16));
  }
}

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__check_type_ctor_enums_in_int_5_p_0(
  MR_Word ForeignEnumMap_6,
  MR_Word ModuleName_7,
  MR_Word TypeCtor_8,
  MR_Word STATE_VARIABLE_Specs_0_16,
  MR_Word * STATE_VARIABLE_Specs_17)
{
  {
    MR_bool succeeded;
    MR_Word AllEnums_10;
    MR_Box conv0_AllEnums_10;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__check_parse_tree_type_defns_scalar_common_1[3]), ForeignEnumMap_6, ((MR_Box) (TypeCtor_8)), &conv0_AllEnums_10);
    if (succeeded)
    {
      AllEnums_10 = ((MR_Word) (conv0_AllEnums_10));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word EnumsC_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllEnums_10, (MR_Integer) 0))));
      MR_Word EnumsJava_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllEnums_10, (MR_Integer) 1))));
      MR_Word EnumsCsharp_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllEnums_10, (MR_Integer) 2))));
      MR_Word EnumsErlang_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllEnums_10, (MR_Integer) 3))));
      MR_Word Enums_15;
      MR_Word Var_18;
      MR_Word Var_19;
      MR_Word Var_20;
      MR_Box conv2_STATE_VARIABLE_Specs_17;

      Var_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), EnumsCsharp_13, EnumsErlang_14);
      Var_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), EnumsJava_12, Var_19);
      Enums_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), EnumsC_11, Var_18);
      {
        Var_20 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (&parse_tree__check_parse_tree_type_defns_scalar_common_7[2]));
        MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) (parse_tree__check_parse_tree_type_defns__check_type_ctor_enums_in_int_5_p_0_1));
        MR_hl_field(MR_mktag(0), Var_20, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_20, 3) = ((MR_Box) (ModuleName_7));
        MR_hl_field(MR_mktag(0), Var_20, 4) = ((MR_Box) (TypeCtor_8));
      }
      mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), (MR_Word) (&parse_tree__check_parse_tree_type_defns_scalar_common_1[4]), Var_20, Enums_15, ((MR_Box) (STATE_VARIABLE_Specs_0_16)), &conv2_STATE_VARIABLE_Specs_17);
      *STATE_VARIABLE_Specs_17 = ((MR_Word) (conv2_STATE_VARIABLE_Specs_17));
    }
    else
      *STATE_VARIABLE_Specs_17 = STATE_VARIABLE_Specs_0_16;
  }
}

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__check_any_type_ctor_defns_for_duplicates_5_p_0(
  MR_Word TypeDefnMap_6,
  MR_Word TypeCtor_7,
  MR_Word * MaybeDefn_8,
  MR_Word STATE_VARIABLE_Specs_0_23,
  MR_Word * STATE_VARIABLE_Specs_24)
{
  {
    MR_bool succeeded;
    MR_Word AllDefns_10;
    MR_Box conv0_AllDefns_10;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__check_parse_tree_type_defns_scalar_common_1[1]), TypeDefnMap_6, ((MR_Box) (TypeCtor_7)), &conv0_AllDefns_10);
    if (succeeded)
    {
      AllDefns_10 = ((MR_Word) (conv0_AllDefns_10));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word AbstractSolverDefns_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllDefns_10, (MR_Integer) 0))));
      MR_Word SolverDefns_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllDefns_10, (MR_Integer) 1))));
      MR_Word AbstractNonSolverDefns_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllDefns_10, (MR_Integer) 2))));
      MR_Word EqvDefns_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllDefns_10, (MR_Integer) 3))));
      MR_Word DuDefns_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllDefns_10, (MR_Integer) 4))));
      MR_Word ForeignDefns_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllDefns_10, (MR_Integer) 5))));
      MR_Word AbstractSolverMaybeDefn_17;
      MR_Word SolverMaybeDefn_18;
      MR_Word AbstractNonSolverMaybeDefn_19;
      MR_Word EqvMaybeDefn_20;
      MR_Word DuMaybeDefn_21;
      MR_Word ForeignMaybeDefn_22;
      MR_Word STATE_VARIABLE_Specs_26_26;
      MR_Word STATE_VARIABLE_Specs_28_28;
      MR_Word STATE_VARIABLE_Specs_30_30;
      MR_Word STATE_VARIABLE_Specs_32_32;
      MR_Word STATE_VARIABLE_Specs_34_34;

      parse_tree__check_parse_tree_type_defns__at_most_one_type_defn_6_p_0((MR_String) "abstract solver type", TypeCtor_7, AbstractSolverDefns_11, &AbstractSolverMaybeDefn_17, STATE_VARIABLE_Specs_0_23, &STATE_VARIABLE_Specs_26_26);
      parse_tree__check_parse_tree_type_defns__at_most_one_type_defn_6_p_0((MR_String) "solver type", TypeCtor_7, SolverDefns_12, &SolverMaybeDefn_18, STATE_VARIABLE_Specs_26_26, &STATE_VARIABLE_Specs_28_28);
      parse_tree__check_parse_tree_type_defns__at_most_one_type_defn_6_p_0((MR_String) "abstract type", TypeCtor_7, AbstractNonSolverDefns_13, &AbstractNonSolverMaybeDefn_19, STATE_VARIABLE_Specs_28_28, &STATE_VARIABLE_Specs_30_30);
      parse_tree__check_parse_tree_type_defns__at_most_one_type_defn_6_p_0((MR_String) "equivalence type", TypeCtor_7, EqvDefns_14, &EqvMaybeDefn_20, STATE_VARIABLE_Specs_30_30, &STATE_VARIABLE_Specs_32_32);
      parse_tree__check_parse_tree_type_defns__at_most_one_type_defn_6_p_0((MR_String) "discriminated union type", TypeCtor_7, DuDefns_15, &DuMaybeDefn_21, STATE_VARIABLE_Specs_32_32, &STATE_VARIABLE_Specs_34_34);
      parse_tree__check_parse_tree_type_defns__at_most_one_foreign_type_for_all_langs_5_p_0(TypeCtor_7, ForeignDefns_16, &ForeignMaybeDefn_22, STATE_VARIABLE_Specs_34_34, STATE_VARIABLE_Specs_24);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        *MaybeDefn_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (AbstractSolverMaybeDefn_17));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (SolverMaybeDefn_18));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (AbstractNonSolverMaybeDefn_19));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (EqvMaybeDefn_20));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (DuMaybeDefn_21));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ForeignMaybeDefn_22));
      }
    }
    else
    {
      *MaybeDefn_8 = (MR_Word) (&parse_tree__check_parse_tree_type_defns_scalar_common_4[0]);
      *STATE_VARIABLE_Specs_24 = STATE_VARIABLE_Specs_0_23;
    }
  }
}

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__at_most_one_foreign_type_for_all_langs_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_STATE_VARIABLE_Specs_18;

    parse_tree__check_parse_tree_type_defns__report_duplicate_foreign_defn_7_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_Specs_18);
    *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_Specs_18));
  }
}

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__at_most_one_foreign_type_for_all_langs_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Contexts_7;

    parse_tree__check_parse_tree_type_defns__accumulate_type_defn_contexts_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Contexts_7);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Contexts_7));
  }
}

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__at_most_one_foreign_type_for_all_langs_5_p_0(
  MR_Word TypeCtor_6,
  MR_Word DefnsCJCsE_7,
  MR_Word * MaybeDefnCJCsE_8,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19)
{
  {
    MR_bool succeeded;
    MR_Word DefnsC_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DefnsCJCsE_7, (MR_Integer) 0))));
    MR_Word DefnsJava_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DefnsCJCsE_7, (MR_Integer) 1))));
    MR_Word DefnsCsharp_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DefnsCJCsE_7, (MR_Integer) 2))));
    MR_Word DefnsErlang_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DefnsCJCsE_7, (MR_Integer) 3))));
    MR_Word MaybeDefnC_14;
    MR_Word MaybeDefnJava_15;
    MR_Word MaybeDefnCsharp_16;
    MR_Word MaybeDefnErlang_17;
    MR_Word STATE_VARIABLE_Specs_21_21;
    MR_Word STATE_VARIABLE_Specs_23_23;
    MR_Word STATE_VARIABLE_Specs_25_25;

    if ((DefnsC_10 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MaybeDefnC_14 = (MR_Word) ((MR_Unsigned) 0U);
      STATE_VARIABLE_Specs_21_21 = STATE_VARIABLE_Specs_0_18;
    }
    else
    {
      MR_Word Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DefnsC_10, (MR_Integer) 1))));
      MR_Word Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DefnsC_10, (MR_Integer) 0))));

      if ((Var_61 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          MaybeDefnC_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeDefnC_14, 0) = ((MR_Box) (Var_62));
        }
        STATE_VARIABLE_Specs_21_21 = STATE_VARIABLE_Specs_0_18;
      }
      else
      {
        MR_Word Contexts_38;
        MR_Word Var_43;
        MR_Box conv1_Contexts_38;
        MR_Word LeastContext_39;
        MR_Word OtherContexts_40;
        MR_Box conv2_LeastContext_39;

        {
          MaybeDefnC_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeDefnC_14, 0) = ((MR_Box) (Var_62));
        }
        Var_43 = mercury__set__init_0_f_0((MR_Word) (&mercury__term__term__type_ctor_info_context_0));
        mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0), (MR_Word) (&parse_tree__check_parse_tree_type_defns_scalar_common_1[8]), (MR_Word) (&parse_tree__check_parse_tree_type_defns_scalar_common_2[6]), DefnsC_10, ((MR_Box) (Var_43)), &conv1_Contexts_38);
        Contexts_38 = ((MR_Word) (conv1_Contexts_38));
        succeeded = mercury__set__remove_least_3_p_0((MR_Word) (&mercury__term__term__type_ctor_info_context_0), &conv2_LeastContext_39, Contexts_38, &OtherContexts_40);
        if (succeeded)
        {
          LeastContext_39 = ((MR_Word) (conv2_LeastContext_39));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word Var_44;
          MR_Box conv4_STATE_VARIABLE_Specs_21_21;

          {
            Var_44 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_44, 0) = ((MR_Box) (&parse_tree__check_parse_tree_type_defns_scalar_common_10[0]));
            MR_hl_field(MR_mktag(0), Var_44, 1) = ((MR_Box) (parse_tree__check_parse_tree_type_defns__at_most_one_foreign_type_for_all_langs_5_p_0_2));
            MR_hl_field(MR_mktag(0), Var_44, 2) = ((MR_Box) ((MR_Integer) 4));
            MR_hl_field(MR_mktag(0), Var_44, 3) = ((MR_Box) ((MR_String) "type"));
            MR_hl_field(MR_mktag(0), Var_44, 4) = ((MR_Box) (TypeCtor_6));
            MR_hl_field(MR_mktag(0), Var_44, 5) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(0), Var_44, 6) = ((MR_Box) (LeastContext_39));
          }
          mercury__set__foldl_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_context_0), (MR_Word) (&parse_tree__check_parse_tree_type_defns_scalar_common_1[4]), Var_44, OtherContexts_40, ((MR_Box) (STATE_VARIABLE_Specs_0_18)), &conv4_STATE_VARIABLE_Specs_21_21);
          STATE_VARIABLE_Specs_21_21 = ((MR_Word) (conv4_STATE_VARIABLE_Specs_21_21));
        }
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.check_parse_tree_type_defns.at_most_one_foreign_type_for_lang\'/6", (MR_String) "nonempty set doesn\'t have least element");
            return;
          }
      }
    }
    parse_tree__check_parse_tree_type_defns__at_most_one_foreign_type_for_lang_6_p_0(TypeCtor_6, (MR_Integer) 2, DefnsJava_11, &MaybeDefnJava_15, STATE_VARIABLE_Specs_21_21, &STATE_VARIABLE_Specs_23_23);
    parse_tree__check_parse_tree_type_defns__at_most_one_foreign_type_for_lang_6_p_0(TypeCtor_6, (MR_Integer) 1, DefnsCsharp_12, &MaybeDefnCsharp_16, STATE_VARIABLE_Specs_23_23, &STATE_VARIABLE_Specs_25_25);
    parse_tree__check_parse_tree_type_defns__at_most_one_foreign_type_for_lang_6_p_0(TypeCtor_6, (MR_Integer) 3, DefnsErlang_13, &MaybeDefnErlang_17, STATE_VARIABLE_Specs_25_25, STATE_VARIABLE_Specs_19);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      *MaybeDefnCJCsE_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MaybeDefnC_14));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MaybeDefnJava_15));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MaybeDefnCsharp_16));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (MaybeDefnErlang_17));
    }
  }
}

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__at_most_one_foreign_type_for_lang_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_STATE_VARIABLE_Specs_18;

    parse_tree__check_parse_tree_type_defns__report_duplicate_foreign_defn_7_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_Specs_18);
    *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_Specs_18));
  }
}

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__at_most_one_foreign_type_for_lang_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Contexts_7;

    parse_tree__check_parse_tree_type_defns__accumulate_type_defn_contexts_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Contexts_7);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Contexts_7));
  }
}

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__at_most_one_foreign_type_for_lang_6_p_0(
  MR_Word TypeCtor_7,
  MR_Word Lang_8,
  MR_Word TypeDefns_9,
  MR_Word * MaybeTypeDefn_10,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19)
{
  {
    MR_bool succeeded;

    if ((TypeDefns_9 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *MaybeTypeDefn_10 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Specs_19 = STATE_VARIABLE_Specs_0_18;
    }
    else
    {
      MR_Word Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeDefns_9, (MR_Integer) 1))));
      MR_Word Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeDefns_9, (MR_Integer) 0))));

      if ((Var_40 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeTypeDefn_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_41));
        }
        *STATE_VARIABLE_Specs_19 = STATE_VARIABLE_Specs_0_18;
      }
      else
      {
        MR_Word Contexts_15;
        MR_Word Var_22;
        MR_Box conv1_Contexts_15;
        MR_Word LeastContext_16;
        MR_Word OtherContexts_17;
        MR_Box conv2_LeastContext_16;

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeTypeDefn_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_41));
        }
        Var_22 = mercury__set__init_0_f_0((MR_Word) (&mercury__term__term__type_ctor_info_context_0));
        mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0), (MR_Word) (&parse_tree__check_parse_tree_type_defns_scalar_common_1[8]), (MR_Word) (&parse_tree__check_parse_tree_type_defns_scalar_common_2[5]), TypeDefns_9, ((MR_Box) (Var_22)), &conv1_Contexts_15);
        Contexts_15 = ((MR_Word) (conv1_Contexts_15));
        succeeded = mercury__set__remove_least_3_p_0((MR_Word) (&mercury__term__term__type_ctor_info_context_0), &conv2_LeastContext_16, Contexts_15, &OtherContexts_17);
        if (succeeded)
        {
          LeastContext_16 = ((MR_Word) (conv2_LeastContext_16));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word Var_23;
          MR_Box conv4_STATE_VARIABLE_Specs_19;

          {
            Var_23 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (&parse_tree__check_parse_tree_type_defns_scalar_common_10[0]));
            MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (parse_tree__check_parse_tree_type_defns__at_most_one_foreign_type_for_lang_6_p_0_2));
            MR_hl_field(MR_mktag(0), Var_23, 2) = ((MR_Box) ((MR_Integer) 4));
            MR_hl_field(MR_mktag(0), Var_23, 3) = ((MR_Box) ((MR_String) "type"));
            MR_hl_field(MR_mktag(0), Var_23, 4) = ((MR_Box) (TypeCtor_7));
            MR_hl_field(MR_mktag(0), Var_23, 5) = ((MR_Box) (Lang_8));
            MR_hl_field(MR_mktag(0), Var_23, 6) = ((MR_Box) (LeastContext_16));
          }
          mercury__set__foldl_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_context_0), (MR_Word) (&parse_tree__check_parse_tree_type_defns_scalar_common_1[4]), Var_23, OtherContexts_17, ((MR_Box) (STATE_VARIABLE_Specs_0_18)), &conv4_STATE_VARIABLE_Specs_19);
          *STATE_VARIABLE_Specs_19 = ((MR_Word) (conv4_STATE_VARIABLE_Specs_19));
        }
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.check_parse_tree_type_defns.at_most_one_foreign_type_for_lang\'/6", (MR_String) "nonempty set doesn\'t have least element");
            return;
          }
      }
    }
  }
}

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__at_most_one_type_defn_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_STATE_VARIABLE_Specs_16;

    parse_tree__check_parse_tree_type_defns__report_duplicate_type_defn_6_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_Specs_16);
    *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_Specs_16));
  }
}

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__at_most_one_type_defn_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Contexts_7;

    parse_tree__check_parse_tree_type_defns__accumulate_type_defn_contexts_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Contexts_7);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Contexts_7));
  }
}

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__at_most_one_type_defn_6_p_0(
  MR_String Kind_7,
  MR_Word TypeCtor_8,
  MR_Word TypeDefns_9,
  MR_Word * MaybeTypeDefn_10,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19)
{
  {
    MR_bool succeeded;

    if ((TypeDefns_9 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *MaybeTypeDefn_10 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Specs_19 = STATE_VARIABLE_Specs_0_18;
    }
    else
    {
      MR_Word Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeDefns_9, (MR_Integer) 1))));
      MR_Word Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeDefns_9, (MR_Integer) 0))));

      if ((Var_39 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeTypeDefn_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_40));
        }
        *STATE_VARIABLE_Specs_19 = STATE_VARIABLE_Specs_0_18;
      }
      else
      {
        MR_Word Contexts_15;
        MR_Word Var_22;
        MR_Box conv1_Contexts_15;
        MR_Word LeastContext_16;
        MR_Word OtherContexts_17;
        MR_Box conv2_LeastContext_16;

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeTypeDefn_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_40));
        }
        Var_22 = mercury__set__init_0_f_0((MR_Word) (&mercury__term__term__type_ctor_info_context_0));
        mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0), (MR_Word) (&parse_tree__check_parse_tree_type_defns_scalar_common_1[8]), (MR_Word) (&parse_tree__check_parse_tree_type_defns_scalar_common_2[4]), TypeDefns_9, ((MR_Box) (Var_22)), &conv1_Contexts_15);
        Contexts_15 = ((MR_Word) (conv1_Contexts_15));
        succeeded = mercury__set__remove_least_3_p_0((MR_Word) (&mercury__term__term__type_ctor_info_context_0), &conv2_LeastContext_16, Contexts_15, &OtherContexts_17);
        if (succeeded)
        {
          LeastContext_16 = ((MR_Word) (conv2_LeastContext_16));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word Var_23;
          MR_Box conv4_STATE_VARIABLE_Specs_19;

          {
            Var_23 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (&parse_tree__check_parse_tree_type_defns_scalar_common_9[0]));
            MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (parse_tree__check_parse_tree_type_defns__at_most_one_type_defn_6_p_0_2));
            MR_hl_field(MR_mktag(0), Var_23, 2) = ((MR_Box) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(0), Var_23, 3) = ((MR_Box) (Kind_7));
            MR_hl_field(MR_mktag(0), Var_23, 4) = ((MR_Box) (TypeCtor_8));
            MR_hl_field(MR_mktag(0), Var_23, 5) = ((MR_Box) (LeastContext_16));
          }
          mercury__set__foldl_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_context_0), (MR_Word) (&parse_tree__check_parse_tree_type_defns_scalar_common_1[4]), Var_23, OtherContexts_17, ((MR_Box) (STATE_VARIABLE_Specs_0_18)), &conv4_STATE_VARIABLE_Specs_19);
          *STATE_VARIABLE_Specs_19 = ((MR_Word) (conv4_STATE_VARIABLE_Specs_19));
        }
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.check_parse_tree_type_defns.at_most_one_type_defn\'/6", (MR_String) "nonempty set doesn\'t have least element");
            return;
          }
      }
    }
  }
}

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__maybe_report_declared_but_undefined_type_5_p_0(
  MR_Word InsistOnDefn_6,
  MR_Word TypeCtor_7,
  MR_Word AbsTypeDefn_8,
  MR_Word STATE_VARIABLE_Specs_0_16,
  MR_Word * STATE_VARIABLE_Specs_17)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorSymName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_7, (MR_Integer) 0))));
    MR_Word TypeCtorModuleName_12;
    MR_Word BuiltinTypeCtors_13;
    MR_String Var_18;
    MR_Word TypeCtorInfo_44_44;

    mdbcomp__sym_name__det_sym_name_get_module_name_2_p_0(TypeCtorSymName_10, &TypeCtorModuleName_12);
    BuiltinTypeCtors_13 = parse_tree__prog_type__builtin_type_ctors_with_no_hlds_type_defn_0_f_0();
    succeeded = (InsistOnDefn_6 == (MR_Integer) 1);
    if (succeeded)
    {
      succeeded = mdbcomp__builtin_modules__any_mercury_builtin_module_1_p_0(TypeCtorModuleName_12);
      succeeded = !(succeeded);
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) TypeCtorModuleName_12)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_18 = ((MR_String) ((MR_hl_field(MR_mktag(0), TypeCtorModuleName_12, (MR_Integer) 0))));
          succeeded = (strcmp(Var_18, (MR_String) "type_desc") == 0);
        }
        succeeded = !(succeeded);
        if (succeeded)
        {
          TypeCtorInfo_44_44 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0);
          succeeded = mercury__list__member_2_p_0(TypeCtorInfo_44_44, ((MR_Box) (TypeCtor_7)), BuiltinTypeCtors_13);
          succeeded = !(succeeded);
        }
      }
    }
    if (succeeded)
    {
      MR_Word Pieces_14;
      MR_Word Spec_15;
      MR_Word Var_21;
      MR_Word Var_22;
      MR_Word Var_31;
      MR_Word Var_32;
      MR_Word Var_33;
      MR_Word Var_34;
      MR_Word Var_35;

      {
        Var_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_22, 0) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(3), Var_22, 1) = ((MR_Box) (TypeCtor_7));
      }
      {
        Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (Var_22));
        MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_parse_tree_type_defns_scalar_common_1[62])));
      }
      {
        Pieces_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_parse_tree_type_defns_scalar_common_1[80])));
        MR_hl_field(MR_mktag(1), Pieces_14, 1) = ((MR_Box) (Var_21));
      }
      Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AbsTypeDefn_8, (MR_Integer) 4))));
      {
        Var_35 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_35, 0) = ((MR_Box) (Pieces_14));
      }
      {
        Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (Var_35));
        MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (Var_33));
        MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (Var_34));
      }
      {
        Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (Var_32));
        MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_15 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_15, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_15, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(0), Spec_15, 2) = ((MR_Box) (Var_31));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_17 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_15));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_16));
      }
    }
    else
      *STATE_VARIABLE_Specs_17 = STATE_VARIABLE_Specs_0_16;
  }
}

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__report_any_redundant_abstract_type_in_imp_5_p_0(
  MR_Word TypeCtor_6,
  MR_String Section_7,
  MR_Word MaybeImpAbstractDefn_8,
  MR_Word STATE_VARIABLE_Specs_0_13,
  MR_Word * STATE_VARIABLE_Specs_14)
{
  if ((MaybeImpAbstractDefn_8 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Specs_14 = STATE_VARIABLE_Specs_0_13;
  else
  {
    MR_Word ImpAbstractDefn_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeImpAbstractDefn_8, (MR_Integer) 0))));
    MR_Word Pieces_11;
    MR_Word Spec_12;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_22;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_39;

    {
      Var_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_18, 0) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(MR_mktag(3), Var_18, 1) = ((MR_Box) (TypeCtor_6));
    }
    {
      Var_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_26, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_26, 1) = ((MR_Box) (Section_7));
    }
    {
      Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_parse_tree_type_defns_scalar_common_1[58])));
    }
    {
      Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_parse_tree_type_defns_scalar_common_1[90])));
      MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (Var_25));
    }
    {
      Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_parse_tree_type_defns_scalar_common_1[89])));
      MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (Var_22));
    }
    {
      Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (Var_19));
    }
    {
      Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_parse_tree_type_defns_scalar_common_1[88])));
      MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Var_17));
    }
    Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImpAbstractDefn_10, (MR_Integer) 4))));
    {
      Var_39 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_39, 0) = ((MR_Box) (Pieces_11));
    }
    {
      Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (Var_38));
    }
    {
      Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_12 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_12, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(0), Spec_12, 1) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(MR_mktag(0), Spec_12, 2) = ((MR_Box) (Var_35));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_14 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_12));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_13));
    }
  }
}

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__report_any_nonabstract_solver_type_in_int_4_p_0(
  MR_Word TypeCtor_5,
  MR_Word MaybeDefn_6,
  MR_Word STATE_VARIABLE_Specs_0_11,
  MR_Word * STATE_VARIABLE_Specs_12)
{
  if ((MaybeDefn_6 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Specs_12 = STATE_VARIABLE_Specs_0_11;
  else
  {
    MR_Word Defn_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDefn_6, (MR_Integer) 0))));
    MR_Word Pieces_9;
    MR_Word Spec_10;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_35;

    {
      Var_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_16, 0) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(MR_mktag(3), Var_16, 1) = ((MR_Box) (TypeCtor_5));
    }
    {
      Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_15, 0) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(1), Var_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_parse_tree_type_defns_scalar_common_1[56])));
    }
    {
      Pieces_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_9, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_parse_tree_type_defns_scalar_common_1[87])));
      MR_hl_field(MR_mktag(1), Pieces_9, 1) = ((MR_Box) (Var_15));
    }
    Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Defn_8, (MR_Integer) 4))));
    {
      Var_35 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_35, 0) = ((MR_Box) (Pieces_9));
    }
    {
      Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (Var_34));
    }
    {
      Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_10 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_10, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(0), Spec_10, 1) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(MR_mktag(0), Spec_10, 2) = ((MR_Box) (Var_31));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_12 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_10));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_11));
    }
  }
}

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__decide_du_foreign_representation_for_lang_9_p_0(
  MR_Word TypeCtor_10,
  MR_Word DuDefn_11,
  MR_Word MaybeOnlyConstants_12,
  MR_Word Lang_13,
  MR_Word MaybeDefnLang_14,
  MR_Word MaybeEnumLang_15,
  MR_Word * MaybeDefnOrEnumLang_16,
  MR_Word STATE_VARIABLE_Specs_0_22,
  MR_Word * STATE_VARIABLE_Specs_23)
{
  if ((MaybeOnlyConstants_12 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    if ((MaybeEnumLang_15 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Specs_23 = STATE_VARIABLE_Specs_0_22;
    else
    {
      MR_Word Enum_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeEnumLang_15, (MR_Integer) 0))));
      MR_Word EnumPieces_39;
      MR_Word Spec_41;
      MR_Word Var_44;
      MR_Word Var_45;
      MR_Word Var_68;
      MR_Word Var_69;
      MR_Word Var_70;
      MR_Word Var_71;
      MR_Word Var_72;
      MR_Word Var_74;
      MR_Word Var_75;
      MR_Word Var_76;

      {
        Var_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_45, 0) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(3), Var_45, 1) = ((MR_Box) (TypeCtor_10));
      }
      {
        Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (Var_45));
        MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_parse_tree_type_defns_scalar_common_1[30])));
      }
      {
        EnumPieces_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), EnumPieces_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_parse_tree_type_defns_scalar_common_1[85])));
        MR_hl_field(MR_mktag(1), EnumPieces_39, 1) = ((MR_Box) (Var_44));
      }
      Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Enum_38, (MR_Integer) 3))));
      {
        Var_72 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_72, 0) = ((MR_Box) (EnumPieces_39));
      }
      {
        Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (Var_72));
        MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (Var_70));
        MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) (Var_71));
      }
      Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DuDefn_11, (MR_Integer) 4))));
      {
        Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (Var_76));
        MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_parse_tree_type_defns_scalar_common_1[86])));
      }
      {
        Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (Var_75));
        MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (Var_69));
        MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (Var_74));
      }
      {
        Spec_41 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_41, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(MR_mktag(0), Spec_41, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(0), Spec_41, 2) = ((MR_Box) (Var_68));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_23 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_41));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_22));
      }
    }
    if ((MaybeDefnLang_14 == (MR_Word) ((MR_Unsigned) 0U)))
      *MaybeDefnOrEnumLang_16 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word DefnLang_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDefnLang_14, (MR_Integer) 0))));
      MR_Word Var_28;

      {
        Var_28 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (DefnLang_18));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeDefnOrEnumLang_16 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_28));
      }
    }
  }
  else
  if ((MaybeDefnLang_14 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((MaybeEnumLang_15 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *MaybeDefnOrEnumLang_16 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Specs_23 = STATE_VARIABLE_Specs_0_22;
    }
    else
    {
      MR_Word EnumLang_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeEnumLang_15, (MR_Integer) 0))));
      MR_Word Var_26;

      {
        Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (EnumLang_21));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeDefnOrEnumLang_16 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_26));
      }
      *STATE_VARIABLE_Specs_23 = STATE_VARIABLE_Specs_0_22;
    }
  else
  {
    MR_Word Var_25;
    MR_Word DefnLang_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDefnLang_14, (MR_Integer) 0))));

    parse_tree__check_parse_tree_type_defns__foreign_type_report_any_foreign_enum_6_p_0(TypeCtor_10, Lang_13, DefnLang_29, MaybeEnumLang_15, STATE_VARIABLE_Specs_0_22, STATE_VARIABLE_Specs_23);
    {
      Var_25 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (DefnLang_29));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeDefnOrEnumLang_16 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_25));
    }
  }
}

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__foreign_type_report_any_foreign_enum_6_p_0(
  MR_Word TypeCtor_7,
  MR_Word Lang_8,
  MR_Word Defn_9,
  MR_Word MaybeEnum_10,
  MR_Word STATE_VARIABLE_Specs_0_17,
  MR_Word * STATE_VARIABLE_Specs_18)
{
  if ((MaybeEnum_10 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Specs_18 = STATE_VARIABLE_Specs_0_17;
  else
  {
    MR_Word Enum_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeEnum_10, (MR_Integer) 0))));
    MR_String LangStr_13;
    MR_Word EnumPieces_14;
    MR_Word Spec_16;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_26;
    MR_Word Var_29;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Word Var_63;
    MR_Word Var_65;
    MR_Word Var_66;
    MR_Word Var_67;

    LangStr_13 = libs__globals__foreign_language_string_1_f_0(Lang_8);
    {
      Var_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_22, 0) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(MR_mktag(3), Var_22, 1) = ((MR_Box) (TypeCtor_7));
    }
    {
      Var_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_33, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_33, 1) = ((MR_Box) (LangStr_13));
    }
    {
      Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_parse_tree_type_defns_scalar_common_1[22])));
    }
    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_parse_tree_type_defns_scalar_common_1[83])));
      MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_32));
    }
    {
      Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_parse_tree_type_defns_scalar_common_1[82])));
      MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (Var_29));
    }
    {
      Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_parse_tree_type_defns_scalar_common_1[81])));
      MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (Var_26));
    }
    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (Var_23));
    }
    {
      EnumPieces_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), EnumPieces_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_parse_tree_type_defns_scalar_common_1[80])));
      MR_hl_field(MR_mktag(1), EnumPieces_14, 1) = ((MR_Box) (Var_21));
    }
    Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Enum_12, (MR_Integer) 3))));
    {
      Var_63 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_63, 0) = ((MR_Box) (EnumPieces_14));
    }
    {
      Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (Var_63));
      MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (Var_61));
      MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (Var_62));
    }
    Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Defn_9, (MR_Integer) 4))));
    {
      Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (Var_67));
      MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_parse_tree_type_defns_scalar_common_1[84])));
    }
    {
      Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (Var_66));
      MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (Var_60));
      MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (Var_65));
    }
    {
      Spec_16 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_16, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(0), Spec_16, 1) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(MR_mktag(0), Spec_16, 2) = ((MR_Box) (Var_59));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_18 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_16));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_17));
    }
  }
}

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__decide_only_foreign_type_section_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv5_STATE_VARIABLE_Specs_15;

    parse_tree__check_parse_tree_type_defns__foreign_int_report_any_foreign_defn_in_imp_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_STATE_VARIABLE_Specs_15);
    *wrapper_arg_3 = ((MR_Box) (conv5_STATE_VARIABLE_Specs_15));
  }
}

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__decide_only_foreign_type_section_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_STATE_VARIABLE_Specs_15;

    parse_tree__check_parse_tree_type_defns__du_imp_report_any_foreign_defn_in_int_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_Specs_15);
    *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_Specs_15));
  }
}

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__decide_only_foreign_type_section_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Specs_12;

    parse_tree__check_parse_tree_type_defns__report_any_foreign_type_without_declaration_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Specs_12);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_12));
  }
}

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__decide_only_foreign_type_section_10_p_0(
  MR_Word TypeCtor_11,
  MR_Word IntAbstractStdMaybeDefn_12,
  MR_Word ImpAbstractStdMaybeDefn_13,
  MR_Word IntMaybeDefnCJCsE_14,
  MR_Word ImpMaybeDefnCJCsE_15,
  MR_Word * Status_16,
  MR_Word * AbstractStdDefn_17,
  MR_Word * ChosenMaybeDefnCJCsE_18,
  MR_Word STATE_VARIABLE_Specs_0_36,
  MR_Word * STATE_VARIABLE_Specs_37)
{
  {
    MR_Word IntMaybeDefnC_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntMaybeDefnCJCsE_14, (MR_Integer) 0))));
    MR_Word IntMaybeDefnJava_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntMaybeDefnCJCsE_14, (MR_Integer) 1))));
    MR_Word IntMaybeDefnCsharp_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntMaybeDefnCJCsE_14, (MR_Integer) 2))));
    MR_Word IntMaybeDefnErlang_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntMaybeDefnCJCsE_14, (MR_Integer) 3))));
    MR_Word ImpMaybeDefnC_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImpMaybeDefnCJCsE_15, (MR_Integer) 0))));
    MR_Word ImpMaybeDefnJava_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImpMaybeDefnCJCsE_15, (MR_Integer) 1))));
    MR_Word ImpMaybeDefnCsharp_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImpMaybeDefnCJCsE_15, (MR_Integer) 2))));
    MR_Word ImpMaybeDefnErlang_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImpMaybeDefnCJCsE_15, (MR_Integer) 3))));

    if ((IntAbstractStdMaybeDefn_12 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *Status_16 = (MR_Integer) 2;
      if ((ImpAbstractStdMaybeDefn_13 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Defns_34;
        MR_Word FirstDefn_35;
        MR_Word Var_38;
        MR_Word Var_39;
        MR_Word Var_41;
        MR_Word Var_42;
        MR_Word Var_43;
        MR_Word Var_44;
        MR_Word Var_45;
        MR_Word Var_46;
        MR_Word Var_47;
        MR_Word MaybeTypeDefn_102;
        MR_Word MaybeTypeDefns_103;
        MR_Word TailDefns_105;
        MR_Word MaybeTypeDefn_107;
        MR_Word MaybeTypeDefns_108;
        MR_Word TailDefns_110;
        MR_Word MaybeTypeDefn_112;
        MR_Word MaybeTypeDefns_113;
        MR_Word TailDefns_115;
        MR_Word MaybeTypeDefn_117;
        MR_Word MaybeTypeDefns_118;
        MR_Word TailDefns_120;
        MR_Word MaybeTypeDefn_122;
        MR_Word MaybeTypeDefns_123;
        MR_Word TailDefns_125;
        MR_Word MaybeTypeDefn_127;
        MR_Word MaybeTypeDefns_128;
        MR_Word TailDefns_130;
        MR_Word MaybeTypeDefn_132;
        MR_Word MaybeTypeDefns_133;
        MR_Word TailDefns_135;
        MR_Word MaybeTypeDefn_137;
        MR_Box conv1_STATE_VARIABLE_Specs_37;
        MR_Box conv2_FirstDefn_35;
        MR_Word Var_79;
        MR_Word Var_80;
        MR_Word Var_82;
        MR_Word Var_83;
        MR_Integer Var_84;

        {
          Var_38 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (&parse_tree__check_parse_tree_type_defns_scalar_common_6[2]));
          MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (parse_tree__check_parse_tree_type_defns__decide_only_foreign_type_section_10_p_0_1));
          MR_hl_field(MR_mktag(0), Var_38, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_38, 3) = ((MR_Box) (TypeCtor_11));
        }
        {
          Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (ImpMaybeDefnErlang_27));
          MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (ImpMaybeDefnCsharp_26));
          MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (Var_47));
        }
        {
          Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (ImpMaybeDefnJava_25));
          MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (Var_46));
        }
        {
          Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (ImpMaybeDefnC_24));
          MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (Var_45));
        }
        {
          Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (IntMaybeDefnErlang_23));
          MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (Var_44));
        }
        {
          Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (IntMaybeDefnCsharp_22));
          MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (Var_43));
        }
        {
          Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (IntMaybeDefnJava_21));
          MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (Var_42));
        }
        {
          Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (IntMaybeDefnC_20));
          MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (Var_41));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__check_parse_tree_type_defns_scalar_common_1[6]), (MR_Word) (&parse_tree__check_parse_tree_type_defns_scalar_common_1[4]), Var_38, Var_39, ((MR_Box) (STATE_VARIABLE_Specs_0_36)), &conv1_STATE_VARIABLE_Specs_37);
        *STATE_VARIABLE_Specs_37 = ((MR_Word) (conv1_STATE_VARIABLE_Specs_37));
        MaybeTypeDefn_102 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_39, (MR_Integer) 0))));
        MaybeTypeDefns_103 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_39, (MR_Integer) 1))));
        MaybeTypeDefn_107 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTypeDefns_103, (MR_Integer) 0))));
        MaybeTypeDefns_108 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTypeDefns_103, (MR_Integer) 1))));
        MaybeTypeDefn_112 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTypeDefns_108, (MR_Integer) 0))));
        MaybeTypeDefns_113 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTypeDefns_108, (MR_Integer) 1))));
        MaybeTypeDefn_117 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTypeDefns_113, (MR_Integer) 0))));
        MaybeTypeDefns_118 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTypeDefns_113, (MR_Integer) 1))));
        MaybeTypeDefn_122 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTypeDefns_118, (MR_Integer) 0))));
        MaybeTypeDefns_123 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTypeDefns_118, (MR_Integer) 1))));
        MaybeTypeDefn_127 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTypeDefns_123, (MR_Integer) 0))));
        MaybeTypeDefns_128 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTypeDefns_123, (MR_Integer) 1))));
        MaybeTypeDefn_132 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTypeDefns_128, (MR_Integer) 0))));
        MaybeTypeDefns_133 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTypeDefns_128, (MR_Integer) 1))));
        MaybeTypeDefn_137 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTypeDefns_133, (MR_Integer) 0))));
        if ((MaybeTypeDefn_137 == (MR_Word) ((MR_Unsigned) 0U)))
          TailDefns_135 = (MR_Word) ((MR_Unsigned) 0U);
        else
        {
          MR_Word TypeDefn_141 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTypeDefn_137, (MR_Integer) 0))));

          {
            TailDefns_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), TailDefns_135, 0) = ((MR_Box) (TypeDefn_141));
            MR_hl_field(MR_mktag(1), TailDefns_135, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        if ((MaybeTypeDefn_132 == (MR_Word) ((MR_Unsigned) 0U)))
          TailDefns_130 = TailDefns_135;
        else
        {
          MR_Word TypeDefn_136 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTypeDefn_132, (MR_Integer) 0))));

          {
            TailDefns_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), TailDefns_130, 0) = ((MR_Box) (TypeDefn_136));
            MR_hl_field(MR_mktag(1), TailDefns_130, 1) = ((MR_Box) (TailDefns_135));
          }
        }
        if ((MaybeTypeDefn_127 == (MR_Word) ((MR_Unsigned) 0U)))
          TailDefns_125 = TailDefns_130;
        else
        {
          MR_Word TypeDefn_131 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTypeDefn_127, (MR_Integer) 0))));

          {
            TailDefns_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), TailDefns_125, 0) = ((MR_Box) (TypeDefn_131));
            MR_hl_field(MR_mktag(1), TailDefns_125, 1) = ((MR_Box) (TailDefns_130));
          }
        }
        if ((MaybeTypeDefn_122 == (MR_Word) ((MR_Unsigned) 0U)))
          TailDefns_120 = TailDefns_125;
        else
        {
          MR_Word TypeDefn_126 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTypeDefn_122, (MR_Integer) 0))));

          {
            TailDefns_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), TailDefns_120, 0) = ((MR_Box) (TypeDefn_126));
            MR_hl_field(MR_mktag(1), TailDefns_120, 1) = ((MR_Box) (TailDefns_125));
          }
        }
        if ((MaybeTypeDefn_117 == (MR_Word) ((MR_Unsigned) 0U)))
          TailDefns_115 = TailDefns_120;
        else
        {
          MR_Word TypeDefn_121 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTypeDefn_117, (MR_Integer) 0))));

          {
            TailDefns_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), TailDefns_115, 0) = ((MR_Box) (TypeDefn_121));
            MR_hl_field(MR_mktag(1), TailDefns_115, 1) = ((MR_Box) (TailDefns_120));
          }
        }
        if ((MaybeTypeDefn_112 == (MR_Word) ((MR_Unsigned) 0U)))
          TailDefns_110 = TailDefns_115;
        else
        {
          MR_Word TypeDefn_116 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTypeDefn_112, (MR_Integer) 0))));

          {
            TailDefns_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), TailDefns_110, 0) = ((MR_Box) (TypeDefn_116));
            MR_hl_field(MR_mktag(1), TailDefns_110, 1) = ((MR_Box) (TailDefns_115));
          }
        }
        if ((MaybeTypeDefn_107 == (MR_Word) ((MR_Unsigned) 0U)))
          TailDefns_105 = TailDefns_110;
        else
        {
          MR_Word TypeDefn_111 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTypeDefn_107, (MR_Integer) 0))));

          {
            TailDefns_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), TailDefns_105, 0) = ((MR_Box) (TypeDefn_111));
            MR_hl_field(MR_mktag(1), TailDefns_105, 1) = ((MR_Box) (TailDefns_110));
          }
        }
        if ((MaybeTypeDefn_102 == (MR_Word) ((MR_Unsigned) 0U)))
          Defns_34 = TailDefns_105;
        else
        {
          MR_Word TypeDefn_106 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTypeDefn_102, (MR_Integer) 0))));

          {
            Defns_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Defns_34, 0) = ((MR_Box) (TypeDefn_106));
            MR_hl_field(MR_mktag(1), Defns_34, 1) = ((MR_Box) (TailDefns_105));
          }
        }
        conv2_FirstDefn_35 = mercury__list__det_head_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0), Defns_34);
        FirstDefn_35 = ((MR_Word) (conv2_FirstDefn_35));
        Var_79 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FirstDefn_35, (MR_Integer) 0))));
        Var_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FirstDefn_35, (MR_Integer) 1))));
        Var_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FirstDefn_35, (MR_Integer) 3))));
        Var_83 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FirstDefn_35, (MR_Integer) 4))));
        Var_84 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), FirstDefn_35, (MR_Integer) 5))));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          *AbstractStdDefn_17 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_79));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_80));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_parse_tree_type_defns_scalar_common_1[79])));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_82));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_83));
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_84));
        }
      }
      else
      {
        MR_Word Var_60;
        MR_Word Var_61;
        MR_Word Var_63;
        MR_Word Var_64;
        MR_Word Var_65;
        MR_Box conv4_STATE_VARIABLE_Specs_37;

        *AbstractStdDefn_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ImpAbstractStdMaybeDefn_13, (MR_Integer) 0))));
        {
          Var_60 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_60, 0) = ((MR_Box) (&parse_tree__check_parse_tree_type_defns_scalar_common_7[0]));
          MR_hl_field(MR_mktag(0), Var_60, 1) = ((MR_Box) (parse_tree__check_parse_tree_type_defns__decide_only_foreign_type_section_10_p_0_2));
          MR_hl_field(MR_mktag(0), Var_60, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_60, 3) = ((MR_Box) (TypeCtor_11));
          MR_hl_field(MR_mktag(0), Var_60, 4) = ((MR_Box) (*AbstractStdDefn_17));
        }
        {
          Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (IntMaybeDefnErlang_23));
          MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (IntMaybeDefnCsharp_22));
          MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) (Var_65));
        }
        {
          Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (IntMaybeDefnJava_21));
          MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) (Var_64));
        }
        {
          Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (IntMaybeDefnC_20));
          MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (Var_63));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__check_parse_tree_type_defns_scalar_common_1[6]), (MR_Word) (&parse_tree__check_parse_tree_type_defns_scalar_common_1[4]), Var_60, Var_61, ((MR_Box) (STATE_VARIABLE_Specs_0_36)), &conv4_STATE_VARIABLE_Specs_37);
        *STATE_VARIABLE_Specs_37 = ((MR_Word) (conv4_STATE_VARIABLE_Specs_37));
      }
      *ChosenMaybeDefnCJCsE_18 = ImpMaybeDefnCJCsE_15;
    }
    else
    {
      MR_Word IntContexts_29;
      MR_Word SortedIntContexts_30;
      MR_Word TailContexts_150;
      MR_Word MaybeTypeDefns_159;
      MR_Word TailContexts_161;
      MR_Word MaybeTypeDefns_170;
      MR_Word TailContexts_172;
      MR_Word MaybeTypeDefns_148;

      *AbstractStdDefn_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), IntAbstractStdMaybeDefn_12, (MR_Integer) 0))));
      {
        MaybeTypeDefns_170 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeTypeDefns_170, 0) = ((MR_Box) (IntMaybeDefnErlang_23));
        MR_hl_field(MR_mktag(1), MaybeTypeDefns_170, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MaybeTypeDefns_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeTypeDefns_159, 0) = ((MR_Box) (IntMaybeDefnCsharp_22));
        MR_hl_field(MR_mktag(1), MaybeTypeDefns_159, 1) = ((MR_Box) (MaybeTypeDefns_170));
      }
      {
        MaybeTypeDefns_148 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeTypeDefns_148, 0) = ((MR_Box) (IntMaybeDefnJava_21));
        MR_hl_field(MR_mktag(1), MaybeTypeDefns_148, 1) = ((MR_Box) (MaybeTypeDefns_159));
      }
      if ((IntMaybeDefnErlang_23 == (MR_Word) ((MR_Unsigned) 0U)))
        TailContexts_172 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word TypeDefn_184 = ((MR_Word) ((MR_hl_field(MR_mktag(1), IntMaybeDefnErlang_23, (MR_Integer) 0))));
        MR_Word Var_185 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeDefn_184, (MR_Integer) 4))));

        {
          TailContexts_172 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), TailContexts_172, 0) = ((MR_Box) (Var_185));
          MR_hl_field(MR_mktag(1), TailContexts_172, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      if ((IntMaybeDefnCsharp_22 == (MR_Word) ((MR_Unsigned) 0U)))
        TailContexts_161 = TailContexts_172;
      else
      {
        MR_Word TypeDefn_173 = ((MR_Word) ((MR_hl_field(MR_mktag(1), IntMaybeDefnCsharp_22, (MR_Integer) 0))));
        MR_Word Var_174 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeDefn_173, (MR_Integer) 4))));

        {
          TailContexts_161 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), TailContexts_161, 0) = ((MR_Box) (Var_174));
          MR_hl_field(MR_mktag(1), TailContexts_161, 1) = ((MR_Box) (TailContexts_172));
        }
      }
      if ((IntMaybeDefnJava_21 == (MR_Word) ((MR_Unsigned) 0U)))
        TailContexts_150 = TailContexts_161;
      else
      {
        MR_Word TypeDefn_162 = ((MR_Word) ((MR_hl_field(MR_mktag(1), IntMaybeDefnJava_21, (MR_Integer) 0))));
        MR_Word Var_163 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeDefn_162, (MR_Integer) 4))));

        {
          TailContexts_150 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), TailContexts_150, 0) = ((MR_Box) (Var_163));
          MR_hl_field(MR_mktag(1), TailContexts_150, 1) = ((MR_Box) (TailContexts_161));
        }
      }
      if ((IntMaybeDefnC_20 == (MR_Word) ((MR_Unsigned) 0U)))
        IntContexts_29 = TailContexts_150;
      else
      {
        MR_Word TypeDefn_151 = ((MR_Word) ((MR_hl_field(MR_mktag(1), IntMaybeDefnC_20, (MR_Integer) 0))));
        MR_Word Var_152 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeDefn_151, (MR_Integer) 4))));

        {
          IntContexts_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), IntContexts_29, 0) = ((MR_Box) (Var_152));
          MR_hl_field(MR_mktag(1), IntContexts_29, 1) = ((MR_Box) (TailContexts_150));
        }
      }
      mercury__list__sort_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_context_0), IntContexts_29, &SortedIntContexts_30);
      if ((SortedIntContexts_30 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *Status_16 = (MR_Integer) 1;
        *ChosenMaybeDefnCJCsE_18 = ImpMaybeDefnCJCsE_15;
        *STATE_VARIABLE_Specs_37 = STATE_VARIABLE_Specs_0_36;
      }
      else
      {
        MR_Word FirstIntContext_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SortedIntContexts_30, (MR_Integer) 0))));
        MR_Word Var_72;
        MR_Word Var_73;
        MR_Word Var_75;
        MR_Word Var_76;
        MR_Word Var_77;
        MR_Box conv6_STATE_VARIABLE_Specs_37;

        *Status_16 = (MR_Integer) 0;
        {
          Var_72 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_72, 0) = ((MR_Box) (&parse_tree__check_parse_tree_type_defns_scalar_common_7[1]));
          MR_hl_field(MR_mktag(0), Var_72, 1) = ((MR_Box) (parse_tree__check_parse_tree_type_defns__decide_only_foreign_type_section_10_p_0_3));
          MR_hl_field(MR_mktag(0), Var_72, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_72, 3) = ((MR_Box) (TypeCtor_11));
          MR_hl_field(MR_mktag(0), Var_72, 4) = ((MR_Box) (FirstIntContext_31));
        }
        {
          Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (ImpMaybeDefnErlang_27));
          MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (ImpMaybeDefnCsharp_26));
          MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) (Var_77));
        }
        {
          Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (ImpMaybeDefnJava_25));
          MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) (Var_76));
        }
        {
          Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (ImpMaybeDefnC_24));
          MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) (Var_75));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__check_parse_tree_type_defns_scalar_common_1[6]), (MR_Word) (&parse_tree__check_parse_tree_type_defns_scalar_common_1[4]), Var_72, Var_73, ((MR_Box) (STATE_VARIABLE_Specs_0_36)), &conv6_STATE_VARIABLE_Specs_37);
        *STATE_VARIABLE_Specs_37 = ((MR_Word) (conv6_STATE_VARIABLE_Specs_37));
        *ChosenMaybeDefnCJCsE_18 = IntMaybeDefnCJCsE_14;
      }
    }
  }
}

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__decide_du_foreign_type_section_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_STATE_VARIABLE_Specs_15;

    parse_tree__check_parse_tree_type_defns__foreign_int_report_any_foreign_defn_in_imp_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_Specs_15);
    *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_Specs_15));
  }
}

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__decide_du_foreign_type_section_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_Specs_15;

    parse_tree__check_parse_tree_type_defns__foreign_int_report_any_foreign_defn_in_imp_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_Specs_15);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_Specs_15));
  }
}

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__decide_du_foreign_type_section_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Specs_15;

    parse_tree__check_parse_tree_type_defns__du_imp_report_any_foreign_defn_in_int_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Specs_15);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_15));
  }
}

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__decide_du_foreign_type_section_10_p_0(
  MR_Word TypeCtor_11,
  MR_Word DuDefn_12,
  MR_Word DuSection_13,
  MR_Word IntAbstractStdMaybeDefn_14,
  MR_Word IntMaybeDefnCJCsE_15,
  MR_Word ImpMaybeDefnCJCsE_16,
  MR_Word * Status_17,
  MR_Word * ChosenMaybeDefnCJCsE_18,
  MR_Word STATE_VARIABLE_Specs_0_32,
  MR_Word * STATE_VARIABLE_Specs_33)
{
  {
    MR_Word IntMaybeDefnC_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntMaybeDefnCJCsE_15, (MR_Integer) 0))));
    MR_Word IntMaybeDefnJava_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntMaybeDefnCJCsE_15, (MR_Integer) 1))));
    MR_Word IntMaybeDefnCsharp_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntMaybeDefnCJCsE_15, (MR_Integer) 2))));
    MR_Word IntMaybeDefnErlang_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntMaybeDefnCJCsE_15, (MR_Integer) 3))));
    MR_Word ImpMaybeDefnC_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImpMaybeDefnCJCsE_16, (MR_Integer) 0))));
    MR_Word ImpMaybeDefnJava_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImpMaybeDefnCJCsE_16, (MR_Integer) 1))));
    MR_Word ImpMaybeDefnCsharp_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImpMaybeDefnCJCsE_16, (MR_Integer) 2))));
    MR_Word ImpMaybeDefnErlang_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImpMaybeDefnCJCsE_16, (MR_Integer) 3))));

    switch (DuSection_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word Var_34;
          MR_Word Var_35;
          MR_Word Var_37;
          MR_Word Var_38;
          MR_Word Var_39;
          MR_Box conv1_STATE_VARIABLE_Specs_33;

          if ((IntAbstractStdMaybeDefn_14 == (MR_Word) ((MR_Unsigned) 0U)))
            *Status_17 = (MR_Integer) 3;
          else
            *Status_17 = (MR_Integer) 2;
          {
            Var_34 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_34, 0) = ((MR_Box) (&parse_tree__check_parse_tree_type_defns_scalar_common_7[0]));
            MR_hl_field(MR_mktag(0), Var_34, 1) = ((MR_Box) (parse_tree__check_parse_tree_type_defns__decide_du_foreign_type_section_10_p_0_1));
            MR_hl_field(MR_mktag(0), Var_34, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_34, 3) = ((MR_Box) (TypeCtor_11));
            MR_hl_field(MR_mktag(0), Var_34, 4) = ((MR_Box) (DuDefn_12));
          }
          {
            Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (IntMaybeDefnErlang_23));
            MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (IntMaybeDefnCsharp_22));
            MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (Var_39));
          }
          {
            Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (IntMaybeDefnJava_21));
            MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (Var_38));
          }
          {
            Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (IntMaybeDefnC_20));
            MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (Var_37));
          }
          mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__check_parse_tree_type_defns_scalar_common_1[6]), (MR_Word) (&parse_tree__check_parse_tree_type_defns_scalar_common_1[4]), Var_34, Var_35, ((MR_Box) (STATE_VARIABLE_Specs_0_32)), &conv1_STATE_VARIABLE_Specs_33);
          *STATE_VARIABLE_Specs_33 = ((MR_Word) (conv1_STATE_VARIABLE_Specs_33));
          *ChosenMaybeDefnCJCsE_18 = ImpMaybeDefnCJCsE_16;
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word TailContexts_66;
          MR_Word MaybeTypeDefns_75;
          MR_Word TailContexts_77;
          MR_Word MaybeTypeDefns_86;
          MR_Word TailContexts_88;
          MR_Word MaybeTypeDefns_64;

          {
            MaybeTypeDefns_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeTypeDefns_86, 0) = ((MR_Box) (IntMaybeDefnErlang_23));
            MR_hl_field(MR_mktag(1), MaybeTypeDefns_86, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MaybeTypeDefns_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeTypeDefns_75, 0) = ((MR_Box) (IntMaybeDefnCsharp_22));
            MR_hl_field(MR_mktag(1), MaybeTypeDefns_75, 1) = ((MR_Box) (MaybeTypeDefns_86));
          }
          {
            MaybeTypeDefns_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeTypeDefns_64, 0) = ((MR_Box) (IntMaybeDefnJava_21));
            MR_hl_field(MR_mktag(1), MaybeTypeDefns_64, 1) = ((MR_Box) (MaybeTypeDefns_75));
          }
          if ((IntMaybeDefnErlang_23 == (MR_Word) ((MR_Unsigned) 0U)))
            TailContexts_88 = (MR_Word) ((MR_Unsigned) 0U);
          else
          {
            MR_Word TypeDefn_100 = ((MR_Word) ((MR_hl_field(MR_mktag(1), IntMaybeDefnErlang_23, (MR_Integer) 0))));
            MR_Word Var_101 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeDefn_100, (MR_Integer) 4))));

            {
              TailContexts_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), TailContexts_88, 0) = ((MR_Box) (Var_101));
              MR_hl_field(MR_mktag(1), TailContexts_88, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          if ((IntMaybeDefnCsharp_22 == (MR_Word) ((MR_Unsigned) 0U)))
            TailContexts_77 = TailContexts_88;
          else
          {
            MR_Word TypeDefn_89 = ((MR_Word) ((MR_hl_field(MR_mktag(1), IntMaybeDefnCsharp_22, (MR_Integer) 0))));
            MR_Word Var_90 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeDefn_89, (MR_Integer) 4))));

            {
              TailContexts_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), TailContexts_77, 0) = ((MR_Box) (Var_90));
              MR_hl_field(MR_mktag(1), TailContexts_77, 1) = ((MR_Box) (TailContexts_88));
            }
          }
          if ((IntMaybeDefnJava_21 == (MR_Word) ((MR_Unsigned) 0U)))
            TailContexts_66 = TailContexts_77;
          else
          {
            MR_Word TypeDefn_78 = ((MR_Word) ((MR_hl_field(MR_mktag(1), IntMaybeDefnJava_21, (MR_Integer) 0))));
            MR_Word Var_79 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeDefn_78, (MR_Integer) 4))));

            {
              TailContexts_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), TailContexts_66, 0) = ((MR_Box) (Var_79));
              MR_hl_field(MR_mktag(1), TailContexts_66, 1) = ((MR_Box) (TailContexts_77));
            }
          }
          if ((IntMaybeDefnC_20 == (MR_Word) ((MR_Unsigned) 0U)))
            if ((TailContexts_66 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              *Status_17 = (MR_Integer) 1;
              *ChosenMaybeDefnCJCsE_18 = ImpMaybeDefnCJCsE_16;
              *STATE_VARIABLE_Specs_33 = STATE_VARIABLE_Specs_0_32;
            }
            else
            {
              MR_Word FirstIntContext_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailContexts_66, (MR_Integer) 0))));
              MR_Word Var_46;
              MR_Word Var_47;
              MR_Word Var_49;
              MR_Word Var_50;
              MR_Word Var_51;
              MR_Box conv3_STATE_VARIABLE_Specs_33;

              *Status_17 = (MR_Integer) 0;
              {
                Var_46 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_46, 0) = ((MR_Box) (&parse_tree__check_parse_tree_type_defns_scalar_common_7[1]));
                MR_hl_field(MR_mktag(0), Var_46, 1) = ((MR_Box) (parse_tree__check_parse_tree_type_defns__decide_du_foreign_type_section_10_p_0_2));
                MR_hl_field(MR_mktag(0), Var_46, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_46, 3) = ((MR_Box) (TypeCtor_11));
                MR_hl_field(MR_mktag(0), Var_46, 4) = ((MR_Box) (FirstIntContext_29));
              }
              {
                Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (ImpMaybeDefnErlang_27));
                MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (ImpMaybeDefnCsharp_26));
                MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (Var_51));
              }
              {
                Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (ImpMaybeDefnJava_25));
                MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (Var_50));
              }
              {
                Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (ImpMaybeDefnC_24));
                MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (Var_49));
              }
              mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__check_parse_tree_type_defns_scalar_common_1[6]), (MR_Word) (&parse_tree__check_parse_tree_type_defns_scalar_common_1[4]), Var_46, Var_47, ((MR_Box) (STATE_VARIABLE_Specs_0_32)), &conv3_STATE_VARIABLE_Specs_33);
              *STATE_VARIABLE_Specs_33 = ((MR_Word) (conv3_STATE_VARIABLE_Specs_33));
              *ChosenMaybeDefnCJCsE_18 = IntMaybeDefnCJCsE_15;
            }
          else
          {
            MR_Word TypeDefn_67 = ((MR_Word) ((MR_hl_field(MR_mktag(1), IntMaybeDefnC_20, (MR_Integer) 0))));
            MR_Word FirstIntContext_121 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeDefn_67, (MR_Integer) 4))));
            MR_Word Var_123;
            MR_Word Var_124;
            MR_Word Var_125;
            MR_Word Var_126;
            MR_Word Var_127;
            MR_Box conv5_STATE_VARIABLE_Specs_33;

            *Status_17 = (MR_Integer) 0;
            {
              Var_123 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_123, 0) = ((MR_Box) (&parse_tree__check_parse_tree_type_defns_scalar_common_7[1]));
              MR_hl_field(MR_mktag(0), Var_123, 1) = ((MR_Box) (parse_tree__check_parse_tree_type_defns__decide_du_foreign_type_section_10_p_0_3));
              MR_hl_field(MR_mktag(0), Var_123, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), Var_123, 3) = ((MR_Box) (TypeCtor_11));
              MR_hl_field(MR_mktag(0), Var_123, 4) = ((MR_Box) (FirstIntContext_121));
            }
            {
              Var_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_127, 0) = ((MR_Box) (ImpMaybeDefnErlang_27));
              MR_hl_field(MR_mktag(1), Var_127, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_126, 0) = ((MR_Box) (ImpMaybeDefnCsharp_26));
              MR_hl_field(MR_mktag(1), Var_126, 1) = ((MR_Box) (Var_127));
            }
            {
              Var_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_125, 0) = ((MR_Box) (ImpMaybeDefnJava_25));
              MR_hl_field(MR_mktag(1), Var_125, 1) = ((MR_Box) (Var_126));
            }
            {
              Var_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_124, 0) = ((MR_Box) (ImpMaybeDefnC_24));
              MR_hl_field(MR_mktag(1), Var_124, 1) = ((MR_Box) (Var_125));
            }
            mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__check_parse_tree_type_defns_scalar_common_1[6]), (MR_Word) (&parse_tree__check_parse_tree_type_defns_scalar_common_1[4]), Var_123, Var_124, ((MR_Box) (STATE_VARIABLE_Specs_0_32)), &conv5_STATE_VARIABLE_Specs_33);
            *STATE_VARIABLE_Specs_33 = ((MR_Word) (conv5_STATE_VARIABLE_Specs_33));
            *ChosenMaybeDefnCJCsE_18 = IntMaybeDefnCJCsE_15;
          }
        }
        break;
    }
  }
}

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__create_type_ctor_checked_map_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv6_STATE_VARIABLE_Specs_16;

    parse_tree__check_parse_tree_type_defns__report_any_duplicate_field_names_4_p_0(((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv6_STATE_VARIABLE_Specs_16);
    *wrapper_arg_4 = ((MR_Box) (conv6_STATE_VARIABLE_Specs_16));
  }
}

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__create_type_ctor_checked_map_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_STATE_VARIABLE_FieldNameMap_31;

    parse_tree__check_parse_tree_type_defns__add_type_ctor_to_field_name_map_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv4_STATE_VARIABLE_FieldNameMap_31);
    *wrapper_arg_4 = ((MR_Box) (conv4_STATE_VARIABLE_FieldNameMap_31));
  }
}

static void MR_CALL 
parse_tree__check_parse_tree_type_defns__create_type_ctor_checked_map_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_TypeCtorCheckedMap_99;
    MR_Word conv0_STATE_VARIABLE_Specs_101;

    parse_tree__check_parse_tree_type_defns__check_type_ctor_defns_11_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 8)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_TypeCtorCheckedMap_99, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Specs_101);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_TypeCtorCheckedMap_99));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_101));
  }
}

void MR_CALL 
parse_tree__check_parse_tree_type_defns__create_type_ctor_checked_map_9_p_0(
  MR_Word InsistOnDefn_10,
  MR_Word ModuleName_11,
  MR_Word IntTypeDefnMap_12,
  MR_Word ImpTypeDefnMap_13,
  MR_Word IntForeignEnumMap_14,
  MR_Word ImpForeignEnumMap_15,
  MR_Word * CheckedMap_16,
  MR_Word STATE_VARIABLE_Specs_0_24,
  MR_Word * STATE_VARIABLE_Specs_25)
{
  {
    MR_Word IntDefnTypeCtorsList_18;
    MR_Word ImpDefnTypeCtorsList_19;
    MR_Word IntEnumTypeCtorsList_20;
    MR_Word ImpEnumTypeCtorsList_21;
    MR_Word TypeCtors_22;
    MR_Word FieldNameMap_23;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word STATE_VARIABLE_Specs_38_38;
    MR_Word Var_40;
    MR_Box conv3_CheckedMap_16;
    MR_Box conv2_STATE_VARIABLE_Specs_38_38;
    MR_Box conv5_FieldNameMap_23;
    MR_Box conv7_STATE_VARIABLE_Specs_25;

    mercury__map__sorted_keys_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__check_parse_tree_type_defns_scalar_common_1[1]), IntTypeDefnMap_12, &IntDefnTypeCtorsList_18);
    mercury__map__sorted_keys_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__check_parse_tree_type_defns_scalar_common_1[1]), ImpTypeDefnMap_13, &ImpDefnTypeCtorsList_19);
    mercury__map__sorted_keys_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__check_parse_tree_type_defns_scalar_common_1[3]), IntForeignEnumMap_14, &IntEnumTypeCtorsList_20);
    mercury__map__sorted_keys_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__check_parse_tree_type_defns_scalar_common_1[3]), ImpForeignEnumMap_15, &ImpEnumTypeCtorsList_21);
    Var_28 = mercury__set__sorted_list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), IntDefnTypeCtorsList_18);
    Var_30 = mercury__set__sorted_list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ImpDefnTypeCtorsList_19);
    Var_32 = mercury__set__sorted_list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), IntEnumTypeCtorsList_20);
    Var_34 = mercury__set__sorted_list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ImpEnumTypeCtorsList_21);
    {
      Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (Var_33));
    }
    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_31));
    }
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (Var_29));
    }
    Var_26 = mercury__set__union_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), Var_27);
    TypeCtors_22 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), Var_26);
    {
      Var_36 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_36, 0) = ((MR_Box) (&parse_tree__check_parse_tree_type_defns_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_36, 1) = ((MR_Box) (parse_tree__check_parse_tree_type_defns__create_type_ctor_checked_map_9_p_0_1));
      MR_hl_field(MR_mktag(0), Var_36, 2) = ((MR_Box) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(0), Var_36, 3) = ((MR_Box) (InsistOnDefn_10));
      MR_hl_field(MR_mktag(0), Var_36, 4) = ((MR_Box) (ModuleName_11));
      MR_hl_field(MR_mktag(0), Var_36, 5) = ((MR_Box) (IntTypeDefnMap_12));
      MR_hl_field(MR_mktag(0), Var_36, 6) = ((MR_Box) (ImpTypeDefnMap_13));
      MR_hl_field(MR_mktag(0), Var_36, 7) = ((MR_Box) (IntForeignEnumMap_14));
      MR_hl_field(MR_mktag(0), Var_36, 8) = ((MR_Box) (ImpForeignEnumMap_15));
    }
    Var_37 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__type_ctor_info_type_ctor_checked_defn_0));
    mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__check_parse_tree_type_defns_scalar_common_2[0]), (MR_Word) (&parse_tree__check_parse_tree_type_defns_scalar_common_1[4]), Var_36, TypeCtors_22, ((MR_Box) (Var_37)), &conv3_CheckedMap_16, ((MR_Box) (STATE_VARIABLE_Specs_0_24)), &conv2_STATE_VARIABLE_Specs_38_38);
    *CheckedMap_16 = ((MR_Word) (conv3_CheckedMap_16));
    STATE_VARIABLE_Specs_38_38 = ((MR_Word) (conv2_STATE_VARIABLE_Specs_38_38));
    Var_40 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__check_parse_tree_type_defns_scalar_common_1[5]));
    mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__type_ctor_info_type_ctor_checked_defn_0), (MR_Word) (&parse_tree__check_parse_tree_type_defns_scalar_common_2[1]), (MR_Word) (&parse_tree__check_parse_tree_type_defns_scalar_common_2[2]), *CheckedMap_16, ((MR_Box) (Var_40)), &conv5_FieldNameMap_23);
    FieldNameMap_23 = ((MR_Word) (conv5_FieldNameMap_23));
    mercury__map__foldl_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__check_parse_tree_type_defns_scalar_common_1[5]), (MR_Word) (&parse_tree__check_parse_tree_type_defns_scalar_common_1[4]), (MR_Word) (&parse_tree__check_parse_tree_type_defns_scalar_common_2[3]), FieldNameMap_23, ((MR_Box) (STATE_VARIABLE_Specs_38_38)), &conv7_STATE_VARIABLE_Specs_25);
    *STATE_VARIABLE_Specs_25 = ((MR_Word) (conv7_STATE_VARIABLE_Specs_25));
  }
}

static MR_bool MR_CALL 
parse_tree__check_parse_tree_type_defns____Unify____abstract_solver_type_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__check_parse_tree_type_defns____Unify____abstract_solver_type_status_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__check_parse_tree_type_defns____Compare____abstract_solver_type_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__check_parse_tree_type_defns____Compare____abstract_solver_type_status_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__check_parse_tree_type_defns____Unify____c_j_cs_e_maybe_defn_or_enum_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__check_parse_tree_type_defns____Unify____c_j_cs_e_maybe_defn_or_enum_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__check_parse_tree_type_defns____Compare____c_j_cs_e_maybe_defn_or_enum_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__check_parse_tree_type_defns____Compare____c_j_cs_e_maybe_defn_or_enum_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__check_parse_tree_type_defns____Unify____field_name_locn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__check_parse_tree_type_defns____Unify____field_name_locn_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__check_parse_tree_type_defns____Compare____field_name_locn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__check_parse_tree_type_defns____Compare____field_name_locn_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__check_parse_tree_type_defns____Unify____field_name_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__check_parse_tree_type_defns____Unify____field_name_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__check_parse_tree_type_defns____Compare____field_name_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__check_parse_tree_type_defns____Compare____field_name_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__check_parse_tree_type_defns____Unify____foreign_type_or_enum_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__check_parse_tree_type_defns____Unify____foreign_type_or_enum_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__check_parse_tree_type_defns____Compare____foreign_type_or_enum_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__check_parse_tree_type_defns____Compare____foreign_type_or_enum_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__check_parse_tree_type_defns____Unify____maybe_insist_on_defn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__check_parse_tree_type_defns____Unify____maybe_insist_on_defn_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__check_parse_tree_type_defns____Compare____maybe_insist_on_defn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__check_parse_tree_type_defns____Compare____maybe_insist_on_defn_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__check_parse_tree_type_defns____Unify____maybe_only_constants_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__check_parse_tree_type_defns____Unify____maybe_only_constants_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__check_parse_tree_type_defns____Compare____maybe_only_constants_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__check_parse_tree_type_defns____Compare____maybe_only_constants_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__check_parse_tree_type_defns____Unify____solver_type_defn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__check_parse_tree_type_defns____Unify____solver_type_defn_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__check_parse_tree_type_defns____Compare____solver_type_defn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__check_parse_tree_type_defns____Compare____solver_type_defn_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__check_parse_tree_type_defns____Unify____std_abs_type_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__check_parse_tree_type_defns____Unify____std_abs_type_status_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__check_parse_tree_type_defns____Compare____std_abs_type_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__check_parse_tree_type_defns____Compare____std_abs_type_status_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__check_parse_tree_type_defns____Unify____std_du_type_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__check_parse_tree_type_defns____Unify____std_du_type_status_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__check_parse_tree_type_defns____Compare____std_du_type_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__check_parse_tree_type_defns____Compare____std_du_type_status_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__check_parse_tree_type_defns____Unify____std_eqv_type_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__check_parse_tree_type_defns____Unify____std_eqv_type_status_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__check_parse_tree_type_defns____Compare____std_eqv_type_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__check_parse_tree_type_defns____Compare____std_eqv_type_status_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__check_parse_tree_type_defns____Unify____std_type_defn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__check_parse_tree_type_defns____Unify____std_type_defn_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__check_parse_tree_type_defns____Compare____std_type_defn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__check_parse_tree_type_defns____Compare____std_type_defn_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__check_parse_tree_type_defns____Unify____type_ctor_checked_defn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__check_parse_tree_type_defns____Unify____type_ctor_checked_defn_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__check_parse_tree_type_defns____Compare____type_ctor_checked_defn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__check_parse_tree_type_defns____Compare____type_ctor_checked_defn_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__check_parse_tree_type_defns____Unify____type_ctor_checked_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__check_parse_tree_type_defns____Unify____type_ctor_checked_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__check_parse_tree_type_defns____Compare____type_ctor_checked_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__check_parse_tree_type_defns____Compare____type_ctor_checked_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__parse_tree__check_parse_tree_type_defns__init(void)
{
}

void mercury__parse_tree__check_parse_tree_type_defns__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__type_ctor_info_abstract_solver_type_status_0);
	MR_register_type_ctor_info(&parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__type_ctor_info_c_j_cs_e_maybe_defn_or_enum_0);
	MR_register_type_ctor_info(&parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__type_ctor_info_field_name_locn_0);
	MR_register_type_ctor_info(&parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__type_ctor_info_field_name_map_0);
	MR_register_type_ctor_info(&parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__type_ctor_info_foreign_type_or_enum_0);
	MR_register_type_ctor_info(&parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__type_ctor_info_maybe_insist_on_defn_0);
	MR_register_type_ctor_info(&parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__type_ctor_info_maybe_only_constants_0);
	MR_register_type_ctor_info(&parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__type_ctor_info_solver_type_defn_0);
	MR_register_type_ctor_info(&parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__type_ctor_info_std_abs_type_status_0);
	MR_register_type_ctor_info(&parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__type_ctor_info_std_du_type_status_0);
	MR_register_type_ctor_info(&parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__type_ctor_info_std_eqv_type_status_0);
	MR_register_type_ctor_info(&parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__type_ctor_info_std_type_defn_0);
	MR_register_type_ctor_info(&parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__type_ctor_info_type_ctor_checked_defn_0);
	MR_register_type_ctor_info(&parse_tree__check_parse_tree_type_defns__parse_tree__check_parse_tree_type_defns__type_ctor_info_type_ctor_checked_map_0);
}

void mercury__parse_tree__check_parse_tree_type_defns__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__check_parse_tree_type_defns__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module parse_tree.check_parse_tree_type_defns.
