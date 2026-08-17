/*
** Automatically generated from `prog_item_inst_mode.m'
** by the Mercury compiler,
** version rotd-2026-08-17
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


// :- module parse_tree.prog_item_inst_mode.
// :- implementation.

/*
INIT mercury__parse_tree__prog_item_inst_mode__init
ENDINIT
*/

#include "parse_tree.prog_item_inst_mode.mih"


#include "assoc_list.mih"
#include "builtin.mih"
#include "char.mih"
#include "cord.mih"
#include "enum.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "term.mih"
#include "term_context.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"
#include "varset.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"




static const MR_PseudoTypeInfo parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__field_types_inst_ctor_checked_defn_0_0[2];

static const MR_DuFunctorDesc parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_functor_desc_inst_ctor_checked_defn_0_0;

static const MR_DuFunctorDescPtr parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_stag_ordered_inst_ctor_checked_defn_0_0[1];

static const MR_DuPtagLayout parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_ptag_ordered_inst_ctor_checked_defn_0[1];

static const MR_DuFunctorDescPtr parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_name_ordered_inst_ctor_checked_defn_0[1];

static const MR_Integer parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__functor_number_map_inst_ctor_checked_defn_0[1];

static const MR_FA_TypeInfo_Struct2 parse_tree__prog_item_inst_mode__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_inst_ctor_0parse_tree__prog_item_inst_mode__type_ctor_info_inst_ctor_checked_defn_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__ti_item_inst_defn_info_general_1parse_tree__prog_item_inst_mode__type_ctor_info_maybe_abstract_inst_defn_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__ti_item_inst_defn_info_general_1parse_tree__prog_item_inst_mode__type_ctor_info_no_inst_defn_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__ti_item_inst_defn_info_general_1parse_tree__prog_data__type_ctor_info_inst_defn_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_item_inst_mode__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_item_inst_mode__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_item_inst_mode__maybe__ti_maybe_1parse_tree__prog_data__type_ctor_info_type_ctor_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_item_inst_mode__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_PseudoTypeInfo parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__field_types_item_inst_defn_info_general_1_0[7];

static const MR_ConstString parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__field_names_item_inst_defn_info_general_1_0[7];

static const MR_DuFunctorDesc parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_functor_desc_item_inst_defn_info_general_1_0;

static const MR_DuFunctorDescPtr parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_stag_ordered_item_inst_defn_info_general_1_0[1];

static const MR_DuPtagLayout parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_ptag_ordered_item_inst_defn_info_general_1[1];

static const MR_DuFunctorDescPtr parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_name_ordered_item_inst_defn_info_general_1[1];

static const MR_Integer parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__functor_number_map_item_inst_defn_info_general_1[1];

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__ti_item_mode_defn_info_general_1parse_tree__prog_item_inst_mode__type_ctor_info_maybe_abstract_mode_defn_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__ti_item_mode_defn_info_general_1parse_tree__prog_item_inst_mode__type_ctor_info_no_mode_defn_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__ti_item_mode_defn_info_general_1parse_tree__prog_data__type_ctor_info_mode_defn_0;

static const MR_PseudoTypeInfo parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__field_types_item_mode_defn_info_general_1_0[6];

static const MR_ConstString parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__field_names_item_mode_defn_info_general_1_0[6];

static const MR_DuFunctorDesc parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_functor_desc_item_mode_defn_info_general_1_0;

static const MR_DuFunctorDescPtr parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_stag_ordered_item_mode_defn_info_general_1_0[1];

static const MR_DuPtagLayout parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_ptag_ordered_item_mode_defn_info_general_1[1];

static const MR_DuFunctorDescPtr parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_name_ordered_item_mode_defn_info_general_1[1];

static const MR_Integer parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__functor_number_map_item_mode_defn_info_general_1[1];

static const MR_DuFunctorDesc parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_functor_desc_maybe_abstract_inst_defn_0_0;

static const MR_PseudoTypeInfo parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__field_types_maybe_abstract_inst_defn_0_1[1];

static const MR_DuFunctorDesc parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_functor_desc_maybe_abstract_inst_defn_0_1;

static const MR_DuFunctorDescPtr parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_stag_ordered_maybe_abstract_inst_defn_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_stag_ordered_maybe_abstract_inst_defn_0_1[1];

static const MR_DuPtagLayout parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_ptag_ordered_maybe_abstract_inst_defn_0[2];

static const MR_DuFunctorDescPtr parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_name_ordered_maybe_abstract_inst_defn_0[2];

static const MR_Integer parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__functor_number_map_maybe_abstract_inst_defn_0[2];

static const MR_DuFunctorDesc parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_functor_desc_maybe_abstract_mode_defn_0_0;

static const MR_PseudoTypeInfo parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__field_types_maybe_abstract_mode_defn_0_1[1];

static const MR_DuFunctorDesc parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_functor_desc_maybe_abstract_mode_defn_0_1;

static const MR_DuFunctorDescPtr parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_stag_ordered_maybe_abstract_mode_defn_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_stag_ordered_maybe_abstract_mode_defn_0_1[1];

static const MR_DuPtagLayout parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_ptag_ordered_maybe_abstract_mode_defn_0[2];

static const MR_DuFunctorDescPtr parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_name_ordered_maybe_abstract_mode_defn_0[2];

static const MR_Integer parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__functor_number_map_maybe_abstract_mode_defn_0[2];

static const MR_PseudoTypeInfo parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__field_types_mode_ctor_checked_defn_0_0[2];

static const MR_DuFunctorDesc parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_functor_desc_mode_ctor_checked_defn_0_0;

static const MR_DuFunctorDescPtr parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_stag_ordered_mode_ctor_checked_defn_0_0[1];

static const MR_DuPtagLayout parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_ptag_ordered_mode_ctor_checked_defn_0[1];

static const MR_DuFunctorDescPtr parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_name_ordered_mode_ctor_checked_defn_0[1];

static const MR_Integer parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__functor_number_map_mode_ctor_checked_defn_0[1];

static const MR_FA_TypeInfo_Struct2 parse_tree__prog_item_inst_mode__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_mode_ctor_0parse_tree__prog_item_inst_mode__type_ctor_info_mode_ctor_checked_defn_0;

static const MR_EnumFunctorDesc parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__enum_functor_desc_no_inst_defn_0_0;

static const MR_EnumFunctorDescPtr parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__enum_ordinal_ordered_no_inst_defn_0[1];

static const MR_EnumFunctorDescPtr parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__enum_name_ordered_no_inst_defn_0[1];

static const MR_Integer parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__functor_number_map_no_inst_defn_0[1];

static const MR_EnumFunctorDesc parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__enum_functor_desc_no_mode_defn_0_0;

static const MR_EnumFunctorDescPtr parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__enum_ordinal_ordered_no_mode_defn_0[1];

static const MR_EnumFunctorDescPtr parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__enum_name_ordered_no_mode_defn_0[1];

static const MR_Integer parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__functor_number_map_no_mode_defn_0[1];

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_item_inst_mode__maybe__ti_maybe_1parse_tree__prog_item_inst_mode__ti_item_inst_defn_info_general_1parse_tree__prog_item_inst_mode__type_ctor_info_maybe_abstract_inst_defn_0;

static const MR_PseudoTypeInfo parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__field_types_src_defns_inst_0_0[2];

static const MR_DuFunctorDesc parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_functor_desc_src_defns_inst_0_0;

static const MR_DuFunctorDescPtr parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_stag_ordered_src_defns_inst_0_0[1];

static const MR_DuPtagLayout parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_ptag_ordered_src_defns_inst_0[1];

static const MR_DuFunctorDescPtr parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_name_ordered_src_defns_inst_0[1];

static const MR_Integer parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__functor_number_map_src_defns_inst_0[1];

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_item_inst_mode__maybe__ti_maybe_1parse_tree__prog_item_inst_mode__ti_item_mode_defn_info_general_1parse_tree__prog_item_inst_mode__type_ctor_info_maybe_abstract_mode_defn_0;

static const MR_PseudoTypeInfo parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__field_types_src_defns_mode_0_0[2];

static const MR_DuFunctorDesc parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_functor_desc_src_defns_mode_0_0;

static const MR_DuFunctorDescPtr parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_stag_ordered_src_defns_mode_0_0[1];

static const MR_DuPtagLayout parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_ptag_ordered_src_defns_mode_0[1];

static const MR_DuFunctorDescPtr parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_name_ordered_src_defns_mode_0[1];

static const MR_Integer parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__functor_number_map_src_defns_mode_0[1];

static const MR_PseudoTypeInfo parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__field_types_std_inst_defn_0_0[2];

static const MR_DuArgLocn parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__field_locns_std_inst_defn_0_0[2];

static const MR_DuFunctorDesc parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_functor_desc_std_inst_defn_0_0;

static const MR_DuFunctorDescPtr parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_stag_ordered_std_inst_defn_0_0[1];

static const MR_DuPtagLayout parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_ptag_ordered_std_inst_defn_0[1];

static const MR_DuFunctorDescPtr parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_name_ordered_std_inst_defn_0[1];

static const MR_Integer parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__functor_number_map_std_inst_defn_0[1];

static const MR_EnumFunctorDesc parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__enum_functor_desc_std_inst_status_0_0;

static const MR_EnumFunctorDesc parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__enum_functor_desc_std_inst_status_0_1;

static const MR_EnumFunctorDesc parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__enum_functor_desc_std_inst_status_0_2;

static const MR_EnumFunctorDescPtr parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__enum_ordinal_ordered_std_inst_status_0[3];

static const MR_EnumFunctorDescPtr parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__enum_name_ordered_std_inst_status_0[3];

static const MR_Integer parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__functor_number_map_std_inst_status_0[3];

static const MR_PseudoTypeInfo parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__field_types_std_mode_defn_0_0[2];

static const MR_DuArgLocn parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__field_locns_std_mode_defn_0_0[2];

static const MR_DuFunctorDesc parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_functor_desc_std_mode_defn_0_0;

static const MR_DuFunctorDescPtr parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_stag_ordered_std_mode_defn_0_0[1];

static const MR_DuPtagLayout parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_ptag_ordered_std_mode_defn_0[1];

static const MR_DuFunctorDescPtr parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_name_ordered_std_mode_defn_0[1];

static const MR_Integer parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__functor_number_map_std_mode_defn_0[1];

static const MR_EnumFunctorDesc parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__enum_functor_desc_std_mode_status_0_0;

static const MR_EnumFunctorDesc parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__enum_functor_desc_std_mode_status_0_1;

static const MR_EnumFunctorDesc parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__enum_functor_desc_std_mode_status_0_2;

static const MR_EnumFunctorDescPtr parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__enum_ordinal_ordered_std_mode_status_0[3];

static const MR_EnumFunctorDescPtr parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__enum_name_ordered_std_mode_status_0[3];

static const MR_Integer parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__functor_number_map_std_mode_status_0[3];

static MR_bool MR_CALL 
parse_tree__prog_item_inst_mode____Unify____inst_ctor_checked_defn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_item_inst_mode____Compare____inst_ctor_checked_defn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_item_inst_mode____Unify____inst_ctor_checked_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_item_inst_mode____Compare____inst_ctor_checked_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_item_inst_mode____Unify____item_inst_defn_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_item_inst_mode____Compare____item_inst_defn_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_item_inst_mode____Unify____item_inst_defn_info_abstract_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_item_inst_mode____Compare____item_inst_defn_info_abstract_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_item_inst_mode____Unify____item_inst_defn_info_eqv_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_item_inst_mode____Compare____item_inst_defn_info_eqv_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_item_inst_mode____Unify____item_inst_defn_info_general_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
parse_tree__prog_item_inst_mode____Compare____item_inst_defn_info_general_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
parse_tree__prog_item_inst_mode____Unify____item_mode_defn_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_item_inst_mode____Compare____item_mode_defn_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_item_inst_mode____Unify____item_mode_defn_info_abstract_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_item_inst_mode____Compare____item_mode_defn_info_abstract_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_item_inst_mode____Unify____item_mode_defn_info_eqv_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_item_inst_mode____Compare____item_mode_defn_info_eqv_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_item_inst_mode____Unify____item_mode_defn_info_general_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
parse_tree__prog_item_inst_mode____Compare____item_mode_defn_info_general_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
parse_tree__prog_item_inst_mode____Unify____maybe_abstract_inst_defn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_item_inst_mode____Compare____maybe_abstract_inst_defn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_item_inst_mode____Unify____maybe_abstract_mode_defn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_item_inst_mode____Compare____maybe_abstract_mode_defn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_item_inst_mode____Unify____mode_ctor_checked_defn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_item_inst_mode____Compare____mode_ctor_checked_defn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_item_inst_mode____Unify____mode_ctor_checked_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_item_inst_mode____Compare____mode_ctor_checked_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_item_inst_mode____Unify____no_inst_defn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_item_inst_mode____Compare____no_inst_defn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_item_inst_mode____Unify____no_mode_defn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_item_inst_mode____Compare____no_mode_defn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_item_inst_mode____Unify____src_defns_inst_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_item_inst_mode____Compare____src_defns_inst_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_item_inst_mode____Unify____src_defns_mode_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_item_inst_mode____Compare____src_defns_mode_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_item_inst_mode____Unify____std_inst_defn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_item_inst_mode____Compare____std_inst_defn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_item_inst_mode____Unify____std_inst_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_item_inst_mode____Compare____std_inst_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_item_inst_mode____Unify____std_mode_defn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_item_inst_mode____Compare____std_mode_defn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_item_inst_mode____Unify____std_mode_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_item_inst_mode____Compare____std_mode_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__prog_item_inst_mode_scalar_common_1[2][3];

static /* final */ const MR_Box parse_tree__prog_item_inst_mode_scalar_common_2[12][2];




static /* final */ const MR_Box parse_tree__prog_item_inst_mode_scalar_common_1[2][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0)),
    ((MR_Box) (&parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_inst_ctor_checked_defn_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0)),
    ((MR_Box) (&parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_mode_ctor_checked_defn_0))
  },
};

static /* final */ const MR_Box parse_tree__prog_item_inst_mode_scalar_common_2[12][2] = {
  /* row   0 */
  {
    ((MR_Box) (&parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_item_inst_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_maybe_abstract_inst_defn_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_item_inst_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_no_inst_defn_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_item_inst_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_defn_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item_inst_mode_scalar_common_2[3]))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_item_mode_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_maybe_abstract_mode_defn_0))
  },
  /* row   8 */
  {
    ((MR_Box) (&parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_item_mode_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_no_mode_defn_0))
  },
  /* row   9 */
  {
    ((MR_Box) (&parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_item_mode_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_defn_0))
  },
  /* row  10 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_item_inst_mode_scalar_common_2[0]))
  },
  /* row  11 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_item_inst_mode_scalar_common_2[7]))
  },
};





static const MR_PseudoTypeInfo parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__field_types_inst_ctor_checked_defn_0_0[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_std_inst_defn_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_src_defns_inst_0)
};

static const MR_DuFunctorDesc parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_functor_desc_inst_ctor_checked_defn_0_0 = {
  (MR_String) "checked_defn_inst",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__field_types_inst_ctor_checked_defn_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_stag_ordered_inst_ctor_checked_defn_0_0[1] = { &parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_functor_desc_inst_ctor_checked_defn_0_0 };

static const MR_DuPtagLayout parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_ptag_ordered_inst_ctor_checked_defn_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_stag_ordered_inst_ctor_checked_defn_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_name_ordered_inst_ctor_checked_defn_0[1] = { &parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_functor_desc_inst_ctor_checked_defn_0_0 };

static const MR_Integer parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__functor_number_map_inst_ctor_checked_defn_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_inst_ctor_checked_defn_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_item_inst_mode____Unify____inst_ctor_checked_defn_0_0_10001)),
  ((MR_Box) (parse_tree__prog_item_inst_mode____Compare____inst_ctor_checked_defn_0_0_10001)),
  (MR_String) "parse_tree.prog_item_inst_mode",
  (MR_String) "inst_ctor_checked_defn",
  { parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_name_ordered_inst_ctor_checked_defn_0 },
  { parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_ptag_ordered_inst_ctor_checked_defn_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__functor_number_map_inst_ctor_checked_defn_0,

};

static const MR_FA_TypeInfo_Struct2 parse_tree__prog_item_inst_mode__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_inst_ctor_0parse_tree__prog_item_inst_mode__type_ctor_info_inst_ctor_checked_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0),
    (MR_TypeInfo) (&parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_inst_ctor_checked_defn_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_inst_ctor_checked_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__prog_item_inst_mode____Unify____inst_ctor_checked_map_0_0_10001)),
  ((MR_Box) (parse_tree__prog_item_inst_mode____Compare____inst_ctor_checked_map_0_0_10001)),
  (MR_String) "parse_tree.prog_item_inst_mode",
  (MR_String) "inst_ctor_checked_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__prog_item_inst_mode__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_inst_ctor_0parse_tree__prog_item_inst_mode__type_ctor_info_inst_ctor_checked_defn_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__ti_item_inst_defn_info_general_1parse_tree__prog_item_inst_mode__type_ctor_info_maybe_abstract_inst_defn_0 = {
  &parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_item_inst_defn_info_general_1,
  { (MR_TypeInfo) (&parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_maybe_abstract_inst_defn_0) }
};

const MR_TypeCtorInfo_Struct parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_item_inst_defn_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__prog_item_inst_mode____Unify____item_inst_defn_info_0_0_10001)),
  ((MR_Box) (parse_tree__prog_item_inst_mode____Compare____item_inst_defn_info_0_0_10001)),
  (MR_String) "parse_tree.prog_item_inst_mode",
  (MR_String) "item_inst_defn_info",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__ti_item_inst_defn_info_general_1parse_tree__prog_item_inst_mode__type_ctor_info_maybe_abstract_inst_defn_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__ti_item_inst_defn_info_general_1parse_tree__prog_item_inst_mode__type_ctor_info_no_inst_defn_0 = {
  &parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_item_inst_defn_info_general_1,
  { (MR_TypeInfo) (&parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_no_inst_defn_0) }
};

const MR_TypeCtorInfo_Struct parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_item_inst_defn_info_abstract_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__prog_item_inst_mode____Unify____item_inst_defn_info_abstract_0_0_10001)),
  ((MR_Box) (parse_tree__prog_item_inst_mode____Compare____item_inst_defn_info_abstract_0_0_10001)),
  (MR_String) "parse_tree.prog_item_inst_mode",
  (MR_String) "item_inst_defn_info_abstract",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__ti_item_inst_defn_info_general_1parse_tree__prog_item_inst_mode__type_ctor_info_no_inst_defn_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__ti_item_inst_defn_info_general_1parse_tree__prog_data__type_ctor_info_inst_defn_0 = {
  &parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_item_inst_defn_info_general_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_defn_0) }
};

const MR_TypeCtorInfo_Struct parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_item_inst_defn_info_eqv_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__prog_item_inst_mode____Unify____item_inst_defn_info_eqv_0_0_10001)),
  ((MR_Box) (parse_tree__prog_item_inst_mode____Compare____item_inst_defn_info_eqv_0_0_10001)),
  (MR_String) "parse_tree.prog_item_inst_mode",
  (MR_String) "item_inst_defn_info_eqv",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__ti_item_inst_defn_info_general_1parse_tree__prog_data__type_ctor_info_inst_defn_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_item_inst_mode__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_item_inst_mode__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_item_inst_mode__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_item_inst_mode__maybe__ti_maybe_1parse_tree__prog_data__type_ctor_info_type_ctor_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0) }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_item_inst_mode__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0) }
};

static const MR_PseudoTypeInfo parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__field_types_item_inst_defn_info_general_1_0[7] = {
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_item_inst_mode__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_item_inst_mode__maybe__ti_maybe_1parse_tree__prog_data__type_ctor_info_type_ctor_0),
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) (&parse_tree__prog_item_inst_mode__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0),
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_item_seq_num_0)
};

static const MR_ConstString parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__field_names_item_inst_defn_info_general_1_0[7] = {
  (MR_String) "id_inst_name",
  (MR_String) "id_inst_args",
  (MR_String) "id_maybe_for_type",
  (MR_String) "id_inst_defn",
  (MR_String) "id_varset",
  (MR_String) "id_context",
  (MR_String) "id_seq_num"
};

static const MR_DuFunctorDesc parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_functor_desc_item_inst_defn_info_general_1_0 = {
  (MR_String) "item_inst_defn_info",
  INT16_C(7),
  UINT16_C(8),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__field_types_item_inst_defn_info_general_1_0,
  parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__field_names_item_inst_defn_info_general_1_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_stag_ordered_item_inst_defn_info_general_1_0[1] = { &parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_functor_desc_item_inst_defn_info_general_1_0 };

static const MR_DuPtagLayout parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_ptag_ordered_item_inst_defn_info_general_1[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_stag_ordered_item_inst_defn_info_general_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_name_ordered_item_inst_defn_info_general_1[1] = { &parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_functor_desc_item_inst_defn_info_general_1_0 };

static const MR_Integer parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__functor_number_map_item_inst_defn_info_general_1[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_item_inst_defn_info_general_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_item_inst_mode____Unify____item_inst_defn_info_general_1_0_10001)),
  ((MR_Box) (parse_tree__prog_item_inst_mode____Compare____item_inst_defn_info_general_1_0_10001)),
  (MR_String) "parse_tree.prog_item_inst_mode",
  (MR_String) "item_inst_defn_info_general",
  { parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_name_ordered_item_inst_defn_info_general_1 },
  { parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_ptag_ordered_item_inst_defn_info_general_1 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__functor_number_map_item_inst_defn_info_general_1,

};

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__ti_item_mode_defn_info_general_1parse_tree__prog_item_inst_mode__type_ctor_info_maybe_abstract_mode_defn_0 = {
  &parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_item_mode_defn_info_general_1,
  { (MR_TypeInfo) (&parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_maybe_abstract_mode_defn_0) }
};

const MR_TypeCtorInfo_Struct parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_item_mode_defn_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__prog_item_inst_mode____Unify____item_mode_defn_info_0_0_10001)),
  ((MR_Box) (parse_tree__prog_item_inst_mode____Compare____item_mode_defn_info_0_0_10001)),
  (MR_String) "parse_tree.prog_item_inst_mode",
  (MR_String) "item_mode_defn_info",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__ti_item_mode_defn_info_general_1parse_tree__prog_item_inst_mode__type_ctor_info_maybe_abstract_mode_defn_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__ti_item_mode_defn_info_general_1parse_tree__prog_item_inst_mode__type_ctor_info_no_mode_defn_0 = {
  &parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_item_mode_defn_info_general_1,
  { (MR_TypeInfo) (&parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_no_mode_defn_0) }
};

const MR_TypeCtorInfo_Struct parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_item_mode_defn_info_abstract_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__prog_item_inst_mode____Unify____item_mode_defn_info_abstract_0_0_10001)),
  ((MR_Box) (parse_tree__prog_item_inst_mode____Compare____item_mode_defn_info_abstract_0_0_10001)),
  (MR_String) "parse_tree.prog_item_inst_mode",
  (MR_String) "item_mode_defn_info_abstract",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__ti_item_mode_defn_info_general_1parse_tree__prog_item_inst_mode__type_ctor_info_no_mode_defn_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__ti_item_mode_defn_info_general_1parse_tree__prog_data__type_ctor_info_mode_defn_0 = {
  &parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_item_mode_defn_info_general_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_defn_0) }
};

const MR_TypeCtorInfo_Struct parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_item_mode_defn_info_eqv_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__prog_item_inst_mode____Unify____item_mode_defn_info_eqv_0_0_10001)),
  ((MR_Box) (parse_tree__prog_item_inst_mode____Compare____item_mode_defn_info_eqv_0_0_10001)),
  (MR_String) "parse_tree.prog_item_inst_mode",
  (MR_String) "item_mode_defn_info_eqv",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__ti_item_mode_defn_info_general_1parse_tree__prog_data__type_ctor_info_mode_defn_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__field_types_item_mode_defn_info_general_1_0[6] = {
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_item_inst_mode__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0),
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) (&parse_tree__prog_item_inst_mode__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0),
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_item_seq_num_0)
};

static const MR_ConstString parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__field_names_item_mode_defn_info_general_1_0[6] = {
  (MR_String) "md_mode_name",
  (MR_String) "md_mode_args",
  (MR_String) "md_mode_defn",
  (MR_String) "md_varset",
  (MR_String) "md_context",
  (MR_String) "md_seq_num"
};

static const MR_DuFunctorDesc parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_functor_desc_item_mode_defn_info_general_1_0 = {
  (MR_String) "item_mode_defn_info",
  INT16_C(6),
  UINT16_C(4),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__field_types_item_mode_defn_info_general_1_0,
  parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__field_names_item_mode_defn_info_general_1_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_stag_ordered_item_mode_defn_info_general_1_0[1] = { &parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_functor_desc_item_mode_defn_info_general_1_0 };

static const MR_DuPtagLayout parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_ptag_ordered_item_mode_defn_info_general_1[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_stag_ordered_item_mode_defn_info_general_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_name_ordered_item_mode_defn_info_general_1[1] = { &parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_functor_desc_item_mode_defn_info_general_1_0 };

static const MR_Integer parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__functor_number_map_item_mode_defn_info_general_1[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_item_mode_defn_info_general_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_item_inst_mode____Unify____item_mode_defn_info_general_1_0_10001)),
  ((MR_Box) (parse_tree__prog_item_inst_mode____Compare____item_mode_defn_info_general_1_0_10001)),
  (MR_String) "parse_tree.prog_item_inst_mode",
  (MR_String) "item_mode_defn_info_general",
  { parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_name_ordered_item_mode_defn_info_general_1 },
  { parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_ptag_ordered_item_mode_defn_info_general_1 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__functor_number_map_item_mode_defn_info_general_1,

};

static const MR_DuFunctorDesc parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_functor_desc_maybe_abstract_inst_defn_0_0 = {
  (MR_String) "abstract_inst_defn",
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

static const MR_PseudoTypeInfo parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__field_types_maybe_abstract_inst_defn_0_1[1] = { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_defn_0) };

static const MR_DuFunctorDesc parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_functor_desc_maybe_abstract_inst_defn_0_1 = {
  (MR_String) "nonabstract_inst_defn",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__field_types_maybe_abstract_inst_defn_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_stag_ordered_maybe_abstract_inst_defn_0_0[1] = { &parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_functor_desc_maybe_abstract_inst_defn_0_0 };

static const MR_DuFunctorDescPtr parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_stag_ordered_maybe_abstract_inst_defn_0_1[1] = { &parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_functor_desc_maybe_abstract_inst_defn_0_1 };

static const MR_DuPtagLayout parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_ptag_ordered_maybe_abstract_inst_defn_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_stag_ordered_maybe_abstract_inst_defn_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_stag_ordered_maybe_abstract_inst_defn_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_name_ordered_maybe_abstract_inst_defn_0[2] = {
  &parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_functor_desc_maybe_abstract_inst_defn_0_0,
  &parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_functor_desc_maybe_abstract_inst_defn_0_1
};

static const MR_Integer parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__functor_number_map_maybe_abstract_inst_defn_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_maybe_abstract_inst_defn_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_item_inst_mode____Unify____maybe_abstract_inst_defn_0_0_10001)),
  ((MR_Box) (parse_tree__prog_item_inst_mode____Compare____maybe_abstract_inst_defn_0_0_10001)),
  (MR_String) "parse_tree.prog_item_inst_mode",
  (MR_String) "maybe_abstract_inst_defn",
  { parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_name_ordered_maybe_abstract_inst_defn_0 },
  { parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_ptag_ordered_maybe_abstract_inst_defn_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__functor_number_map_maybe_abstract_inst_defn_0,

};

static const MR_DuFunctorDesc parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_functor_desc_maybe_abstract_mode_defn_0_0 = {
  (MR_String) "abstract_mode_defn",
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

static const MR_PseudoTypeInfo parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__field_types_maybe_abstract_mode_defn_0_1[1] = { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_defn_0) };

static const MR_DuFunctorDesc parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_functor_desc_maybe_abstract_mode_defn_0_1 = {
  (MR_String) "nonabstract_mode_defn",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__field_types_maybe_abstract_mode_defn_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_stag_ordered_maybe_abstract_mode_defn_0_0[1] = { &parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_functor_desc_maybe_abstract_mode_defn_0_0 };

static const MR_DuFunctorDescPtr parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_stag_ordered_maybe_abstract_mode_defn_0_1[1] = { &parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_functor_desc_maybe_abstract_mode_defn_0_1 };

static const MR_DuPtagLayout parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_ptag_ordered_maybe_abstract_mode_defn_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_stag_ordered_maybe_abstract_mode_defn_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_stag_ordered_maybe_abstract_mode_defn_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_name_ordered_maybe_abstract_mode_defn_0[2] = {
  &parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_functor_desc_maybe_abstract_mode_defn_0_0,
  &parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_functor_desc_maybe_abstract_mode_defn_0_1
};

static const MR_Integer parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__functor_number_map_maybe_abstract_mode_defn_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_maybe_abstract_mode_defn_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_item_inst_mode____Unify____maybe_abstract_mode_defn_0_0_10001)),
  ((MR_Box) (parse_tree__prog_item_inst_mode____Compare____maybe_abstract_mode_defn_0_0_10001)),
  (MR_String) "parse_tree.prog_item_inst_mode",
  (MR_String) "maybe_abstract_mode_defn",
  { parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_name_ordered_maybe_abstract_mode_defn_0 },
  { parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_ptag_ordered_maybe_abstract_mode_defn_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__functor_number_map_maybe_abstract_mode_defn_0,

};

static const MR_PseudoTypeInfo parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__field_types_mode_ctor_checked_defn_0_0[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_std_mode_defn_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_src_defns_mode_0)
};

static const MR_DuFunctorDesc parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_functor_desc_mode_ctor_checked_defn_0_0 = {
  (MR_String) "checked_defn_mode",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__field_types_mode_ctor_checked_defn_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_stag_ordered_mode_ctor_checked_defn_0_0[1] = { &parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_functor_desc_mode_ctor_checked_defn_0_0 };

static const MR_DuPtagLayout parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_ptag_ordered_mode_ctor_checked_defn_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_stag_ordered_mode_ctor_checked_defn_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_name_ordered_mode_ctor_checked_defn_0[1] = { &parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_functor_desc_mode_ctor_checked_defn_0_0 };

static const MR_Integer parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__functor_number_map_mode_ctor_checked_defn_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_mode_ctor_checked_defn_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_item_inst_mode____Unify____mode_ctor_checked_defn_0_0_10001)),
  ((MR_Box) (parse_tree__prog_item_inst_mode____Compare____mode_ctor_checked_defn_0_0_10001)),
  (MR_String) "parse_tree.prog_item_inst_mode",
  (MR_String) "mode_ctor_checked_defn",
  { parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_name_ordered_mode_ctor_checked_defn_0 },
  { parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_ptag_ordered_mode_ctor_checked_defn_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__functor_number_map_mode_ctor_checked_defn_0,

};

static const MR_FA_TypeInfo_Struct2 parse_tree__prog_item_inst_mode__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_mode_ctor_0parse_tree__prog_item_inst_mode__type_ctor_info_mode_ctor_checked_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0),
    (MR_TypeInfo) (&parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_mode_ctor_checked_defn_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_mode_ctor_checked_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__prog_item_inst_mode____Unify____mode_ctor_checked_map_0_0_10001)),
  ((MR_Box) (parse_tree__prog_item_inst_mode____Compare____mode_ctor_checked_map_0_0_10001)),
  (MR_String) "parse_tree.prog_item_inst_mode",
  (MR_String) "mode_ctor_checked_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__prog_item_inst_mode__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_mode_ctor_0parse_tree__prog_item_inst_mode__type_ctor_info_mode_ctor_checked_defn_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_EnumFunctorDesc parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__enum_functor_desc_no_inst_defn_0_0 = {
  (MR_String) "no_inst_defn",
  INT32_C(0)
};

static const MR_EnumFunctorDescPtr parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__enum_ordinal_ordered_no_inst_defn_0[1] = { &parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__enum_functor_desc_no_inst_defn_0_0 };

static const MR_EnumFunctorDescPtr parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__enum_name_ordered_no_inst_defn_0[1] = { &parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__enum_functor_desc_no_inst_defn_0_0 };

static const MR_Integer parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__functor_number_map_no_inst_defn_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_no_inst_defn_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_DUMMY,
  ((MR_Box) (parse_tree__prog_item_inst_mode____Unify____no_inst_defn_0_0_10001)),
  ((MR_Box) (parse_tree__prog_item_inst_mode____Compare____no_inst_defn_0_0_10001)),
  (MR_String) "parse_tree.prog_item_inst_mode",
  (MR_String) "no_inst_defn",
  { parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__enum_name_ordered_no_inst_defn_0 },
  { parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__enum_ordinal_ordered_no_inst_defn_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__functor_number_map_no_inst_defn_0,

};

static const MR_EnumFunctorDesc parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__enum_functor_desc_no_mode_defn_0_0 = {
  (MR_String) "no_mode_defn",
  INT32_C(0)
};

static const MR_EnumFunctorDescPtr parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__enum_ordinal_ordered_no_mode_defn_0[1] = { &parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__enum_functor_desc_no_mode_defn_0_0 };

static const MR_EnumFunctorDescPtr parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__enum_name_ordered_no_mode_defn_0[1] = { &parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__enum_functor_desc_no_mode_defn_0_0 };

static const MR_Integer parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__functor_number_map_no_mode_defn_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_no_mode_defn_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_DUMMY,
  ((MR_Box) (parse_tree__prog_item_inst_mode____Unify____no_mode_defn_0_0_10001)),
  ((MR_Box) (parse_tree__prog_item_inst_mode____Compare____no_mode_defn_0_0_10001)),
  (MR_String) "parse_tree.prog_item_inst_mode",
  (MR_String) "no_mode_defn",
  { parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__enum_name_ordered_no_mode_defn_0 },
  { parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__enum_ordinal_ordered_no_mode_defn_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__functor_number_map_no_mode_defn_0,

};

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_item_inst_mode__maybe__ti_maybe_1parse_tree__prog_item_inst_mode__ti_item_inst_defn_info_general_1parse_tree__prog_item_inst_mode__type_ctor_info_maybe_abstract_inst_defn_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__ti_item_inst_defn_info_general_1parse_tree__prog_item_inst_mode__type_ctor_info_maybe_abstract_inst_defn_0) }
};

static const MR_PseudoTypeInfo parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__field_types_src_defns_inst_0_0[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_item_inst_mode__maybe__ti_maybe_1parse_tree__prog_item_inst_mode__ti_item_inst_defn_info_general_1parse_tree__prog_item_inst_mode__type_ctor_info_maybe_abstract_inst_defn_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_item_inst_mode__maybe__ti_maybe_1parse_tree__prog_item_inst_mode__ti_item_inst_defn_info_general_1parse_tree__prog_item_inst_mode__type_ctor_info_maybe_abstract_inst_defn_0)
};

static const MR_DuFunctorDesc parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_functor_desc_src_defns_inst_0_0 = {
  (MR_String) "src_defns_inst",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__field_types_src_defns_inst_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_stag_ordered_src_defns_inst_0_0[1] = { &parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_functor_desc_src_defns_inst_0_0 };

static const MR_DuPtagLayout parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_ptag_ordered_src_defns_inst_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_stag_ordered_src_defns_inst_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_name_ordered_src_defns_inst_0[1] = { &parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_functor_desc_src_defns_inst_0_0 };

static const MR_Integer parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__functor_number_map_src_defns_inst_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_src_defns_inst_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_item_inst_mode____Unify____src_defns_inst_0_0_10001)),
  ((MR_Box) (parse_tree__prog_item_inst_mode____Compare____src_defns_inst_0_0_10001)),
  (MR_String) "parse_tree.prog_item_inst_mode",
  (MR_String) "src_defns_inst",
  { parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_name_ordered_src_defns_inst_0 },
  { parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_ptag_ordered_src_defns_inst_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__functor_number_map_src_defns_inst_0,

};

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_item_inst_mode__maybe__ti_maybe_1parse_tree__prog_item_inst_mode__ti_item_mode_defn_info_general_1parse_tree__prog_item_inst_mode__type_ctor_info_maybe_abstract_mode_defn_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__ti_item_mode_defn_info_general_1parse_tree__prog_item_inst_mode__type_ctor_info_maybe_abstract_mode_defn_0) }
};

static const MR_PseudoTypeInfo parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__field_types_src_defns_mode_0_0[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_item_inst_mode__maybe__ti_maybe_1parse_tree__prog_item_inst_mode__ti_item_mode_defn_info_general_1parse_tree__prog_item_inst_mode__type_ctor_info_maybe_abstract_mode_defn_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_item_inst_mode__maybe__ti_maybe_1parse_tree__prog_item_inst_mode__ti_item_mode_defn_info_general_1parse_tree__prog_item_inst_mode__type_ctor_info_maybe_abstract_mode_defn_0)
};

static const MR_DuFunctorDesc parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_functor_desc_src_defns_mode_0_0 = {
  (MR_String) "src_defns_mode",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__field_types_src_defns_mode_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_stag_ordered_src_defns_mode_0_0[1] = { &parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_functor_desc_src_defns_mode_0_0 };

static const MR_DuPtagLayout parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_ptag_ordered_src_defns_mode_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_stag_ordered_src_defns_mode_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_name_ordered_src_defns_mode_0[1] = { &parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_functor_desc_src_defns_mode_0_0 };

static const MR_Integer parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__functor_number_map_src_defns_mode_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_src_defns_mode_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_item_inst_mode____Unify____src_defns_mode_0_0_10001)),
  ((MR_Box) (parse_tree__prog_item_inst_mode____Compare____src_defns_mode_0_0_10001)),
  (MR_String) "parse_tree.prog_item_inst_mode",
  (MR_String) "src_defns_mode",
  { parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_name_ordered_src_defns_mode_0 },
  { parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_ptag_ordered_src_defns_mode_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__functor_number_map_src_defns_mode_0,

};

static const MR_PseudoTypeInfo parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__field_types_std_inst_defn_0_0[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_std_inst_status_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__ti_item_inst_defn_info_general_1parse_tree__prog_item_inst_mode__type_ctor_info_maybe_abstract_inst_defn_0)
};

static const MR_DuArgLocn parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__field_locns_std_inst_defn_0_0[2] = {
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

static const MR_DuFunctorDesc parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_functor_desc_std_inst_defn_0_0 = {
  (MR_String) "std_inst_defn",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__field_types_std_inst_defn_0_0,
  NULL,
  parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__field_locns_std_inst_defn_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_stag_ordered_std_inst_defn_0_0[1] = { &parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_functor_desc_std_inst_defn_0_0 };

static const MR_DuPtagLayout parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_ptag_ordered_std_inst_defn_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_stag_ordered_std_inst_defn_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_name_ordered_std_inst_defn_0[1] = { &parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_functor_desc_std_inst_defn_0_0 };

static const MR_Integer parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__functor_number_map_std_inst_defn_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_std_inst_defn_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_item_inst_mode____Unify____std_inst_defn_0_0_10001)),
  ((MR_Box) (parse_tree__prog_item_inst_mode____Compare____std_inst_defn_0_0_10001)),
  (MR_String) "parse_tree.prog_item_inst_mode",
  (MR_String) "std_inst_defn",
  { parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_name_ordered_std_inst_defn_0 },
  { parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_ptag_ordered_std_inst_defn_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__functor_number_map_std_inst_defn_0,

};

static const MR_EnumFunctorDesc parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__enum_functor_desc_std_inst_status_0_0 = {
  (MR_String) "std_inst_exported",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__enum_functor_desc_std_inst_status_0_1 = {
  (MR_String) "std_inst_abstract_exported",
  INT32_C(1)
};

static const MR_EnumFunctorDesc parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__enum_functor_desc_std_inst_status_0_2 = {
  (MR_String) "std_inst_all_private",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__enum_ordinal_ordered_std_inst_status_0[3] = {
  &parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__enum_functor_desc_std_inst_status_0_0,
  &parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__enum_functor_desc_std_inst_status_0_1,
  &parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__enum_functor_desc_std_inst_status_0_2
};

static const MR_EnumFunctorDescPtr parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__enum_name_ordered_std_inst_status_0[3] = {
  &parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__enum_functor_desc_std_inst_status_0_1,
  &parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__enum_functor_desc_std_inst_status_0_2,
  &parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__enum_functor_desc_std_inst_status_0_0
};

static const MR_Integer parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__functor_number_map_std_inst_status_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_std_inst_status_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__prog_item_inst_mode____Unify____std_inst_status_0_0_10001)),
  ((MR_Box) (parse_tree__prog_item_inst_mode____Compare____std_inst_status_0_0_10001)),
  (MR_String) "parse_tree.prog_item_inst_mode",
  (MR_String) "std_inst_status",
  { parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__enum_name_ordered_std_inst_status_0 },
  { parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__enum_ordinal_ordered_std_inst_status_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__functor_number_map_std_inst_status_0,

};

static const MR_PseudoTypeInfo parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__field_types_std_mode_defn_0_0[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_std_mode_status_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__ti_item_mode_defn_info_general_1parse_tree__prog_item_inst_mode__type_ctor_info_maybe_abstract_mode_defn_0)
};

static const MR_DuArgLocn parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__field_locns_std_mode_defn_0_0[2] = {
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

static const MR_DuFunctorDesc parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_functor_desc_std_mode_defn_0_0 = {
  (MR_String) "std_mode_defn",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__field_types_std_mode_defn_0_0,
  NULL,
  parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__field_locns_std_mode_defn_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_stag_ordered_std_mode_defn_0_0[1] = { &parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_functor_desc_std_mode_defn_0_0 };

static const MR_DuPtagLayout parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_ptag_ordered_std_mode_defn_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_stag_ordered_std_mode_defn_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_name_ordered_std_mode_defn_0[1] = { &parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_functor_desc_std_mode_defn_0_0 };

static const MR_Integer parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__functor_number_map_std_mode_defn_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_std_mode_defn_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_item_inst_mode____Unify____std_mode_defn_0_0_10001)),
  ((MR_Box) (parse_tree__prog_item_inst_mode____Compare____std_mode_defn_0_0_10001)),
  (MR_String) "parse_tree.prog_item_inst_mode",
  (MR_String) "std_mode_defn",
  { parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_name_ordered_std_mode_defn_0 },
  { parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__du_ptag_ordered_std_mode_defn_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__functor_number_map_std_mode_defn_0,

};

static const MR_EnumFunctorDesc parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__enum_functor_desc_std_mode_status_0_0 = {
  (MR_String) "std_mode_exported",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__enum_functor_desc_std_mode_status_0_1 = {
  (MR_String) "std_mode_abstract_exported",
  INT32_C(1)
};

static const MR_EnumFunctorDesc parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__enum_functor_desc_std_mode_status_0_2 = {
  (MR_String) "std_mode_all_private",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__enum_ordinal_ordered_std_mode_status_0[3] = {
  &parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__enum_functor_desc_std_mode_status_0_0,
  &parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__enum_functor_desc_std_mode_status_0_1,
  &parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__enum_functor_desc_std_mode_status_0_2
};

static const MR_EnumFunctorDescPtr parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__enum_name_ordered_std_mode_status_0[3] = {
  &parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__enum_functor_desc_std_mode_status_0_1,
  &parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__enum_functor_desc_std_mode_status_0_2,
  &parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__enum_functor_desc_std_mode_status_0_0
};

static const MR_Integer parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__functor_number_map_std_mode_status_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_std_mode_status_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__prog_item_inst_mode____Unify____std_mode_status_0_0_10001)),
  ((MR_Box) (parse_tree__prog_item_inst_mode____Compare____std_mode_status_0_0_10001)),
  (MR_String) "parse_tree.prog_item_inst_mode",
  (MR_String) "std_mode_status",
  { parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__enum_name_ordered_std_mode_status_0 },
  { parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__enum_ordinal_ordered_std_mode_status_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__functor_number_map_std_mode_status_0,

};

void MR_CALL 
parse_tree__prog_item_inst_mode____Compare____std_mode_status_0_0(
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
parse_tree__prog_item_inst_mode____Unify____std_mode_status_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
parse_tree__prog_item_inst_mode____Compare____std_inst_status_0_0(
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
parse_tree__prog_item_inst_mode____Unify____std_inst_status_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
parse_tree__prog_item_inst_mode____Compare____no_mode_defn_0_0(
  MR_Word * HeadVar__1_1)
{
  parse_tree__prog_item_inst_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_116_101_109_95_105_110_115_116_95_109_111_100_101_95_95_110_111_95_109_111_100_101_95_100_101_102_110_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(HeadVar__1_1);
}

void MR_CALL 
parse_tree__prog_item_inst_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_116_101_109_95_105_110_115_116_95_109_111_100_101_95_95_110_111_95_109_111_100_101_95_100_101_102_110_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1)
{
  *HeadVar__1_1 = (MR_Integer) 0;
}

MR_bool MR_CALL 
parse_tree__prog_item_inst_mode____Unify____no_mode_defn_0_0(void)
{
  return MR_TRUE;
}

void MR_CALL 
parse_tree__prog_item_inst_mode____Compare____no_inst_defn_0_0(
  MR_Word * HeadVar__1_1)
{
  parse_tree__prog_item_inst_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_116_101_109_95_105_110_115_116_95_109_111_100_101_95_95_110_111_95_105_110_115_116_95_100_101_102_110_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(HeadVar__1_1);
}

void MR_CALL 
parse_tree__prog_item_inst_mode__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_116_101_109_95_105_110_115_116_95_109_111_100_101_95_95_110_111_95_105_110_115_116_95_100_101_102_110_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1)
{
  *HeadVar__1_1 = (MR_Integer) 0;
}

MR_bool MR_CALL 
parse_tree__prog_item_inst_mode____Unify____no_inst_defn_0_0(void)
{
  return MR_TRUE;
}

void MR_CALL 
parse_tree__prog_item_inst_mode____Compare____mode_ctor_checked_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__prog_item_inst_mode_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
parse_tree__prog_item_inst_mode____Unify____mode_ctor_checked_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__prog_item_inst_mode_scalar_common_1[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
parse_tree__prog_item_inst_mode____Compare____mode_ctor_checked_defn_0_0(
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

    parse_tree__prog_item_inst_mode____Compare____std_mode_defn_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      parse_tree__prog_item_inst_mode____Compare____src_defns_mode_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

void MR_CALL 
parse_tree__prog_item_inst_mode____Compare____std_mode_defn_0_0(
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
    MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 3);
    MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) & (MR_Integer) 3);
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
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
    }
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__prog_item_inst_mode_scalar_common_2[7]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

void MR_CALL 
parse_tree__prog_item_inst_mode____Compare____src_defns_mode_0_0(
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

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__prog_item_inst_mode_scalar_common_2[11]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__prog_item_inst_mode_scalar_common_2[11]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

MR_bool MR_CALL 
parse_tree__prog_item_inst_mode____Unify____mode_ctor_checked_defn_0_0(
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

    succeeded = parse_tree__prog_item_inst_mode____Unify____std_mode_defn_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
      succeeded = parse_tree__prog_item_inst_mode____Unify____src_defns_mode_0_0(ArgX2_5, ArgY2_6);
  }
  return succeeded;
}

MR_bool MR_CALL 
parse_tree__prog_item_inst_mode____Unify____std_mode_defn_0_0(
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
    MR_Word TypeCtorInfo_9_9;
    MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) & (MR_Integer) 3);
    MR_Word ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 3);
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      TypeCtorInfo_9_9 = (MR_Word) (&parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_maybe_abstract_mode_defn_0);
      succeeded = parse_tree__prog_item_inst_mode____Unify____item_mode_defn_info_general_1_0(TypeCtorInfo_9_9, ArgX2_5, ArgY2_6);
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
parse_tree__prog_item_inst_mode____Unify____src_defns_mode_0_0(
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
    MR_Word TypeInfo_10_10;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__prog_item_inst_mode_scalar_common_2[11]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_10_10 = (MR_Word) (&parse_tree__prog_item_inst_mode_scalar_common_2[11]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
    }
  }
  return succeeded;
}

void MR_CALL 
parse_tree__prog_item_inst_mode____Compare____maybe_abstract_mode_defn_0_0(
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
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

    parse_tree__prog_data____Compare____mode_defn_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
  }
}

MR_bool MR_CALL 
parse_tree__prog_item_inst_mode____Unify____maybe_abstract_mode_defn_0_0(
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word ArgY1_4;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      succeeded = parse_tree__prog_data____Unify____mode_defn_0_0(ArgX1_3, ArgY1_4);
    }
  }
  return succeeded;
}

void MR_CALL 
parse_tree__prog_item_inst_mode____Compare____maybe_abstract_inst_defn_0_0(
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
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

    parse_tree__prog_data____Compare____inst_defn_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
  }
}

MR_bool MR_CALL 
parse_tree__prog_item_inst_mode____Unify____maybe_abstract_inst_defn_0_0(
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word ArgY1_4;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      succeeded = parse_tree__prog_data____Unify____inst_defn_0_0(ArgX1_3, ArgY1_4);
    }
  }
  return succeeded;
}

void MR_CALL 
parse_tree__prog_item_inst_mode____Compare____item_mode_defn_info_general_1_0(
  MR_Word TypeInfo_for_T_23,
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
    MR_Box ArgX3_10 = (MR_hl_field(0, HeadVar__2_2, 2));
    MR_Box ArgY3_11 = (MR_hl_field(0, HeadVar__3_3, 2));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 4))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 5))));
    MR_Word SubResult1_6;

    mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__prog_item_inst_mode_scalar_common_2[4]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0(TypeInfo_for_T_23, &SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__prog_item_inst_mode_scalar_common_2[6]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            mercury__term_context____Compare____term_context_0_0(&SubResult5_18, ArgX5_16, ArgY5_17);
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
              parse_tree__prog_data____Compare____item_seq_num_0_0(HeadVar__1_1, ArgX6_19, ArgY6_20);
          }
        }
      }
    }
  }
}

void MR_CALL 
parse_tree__prog_item_inst_mode____Compare____item_mode_defn_info_eqv_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__prog_item_inst_mode_scalar_common_2[9]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
parse_tree__prog_item_inst_mode____Unify____item_mode_defn_info_eqv_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = parse_tree__prog_item_inst_mode____Unify____item_mode_defn_info_general_1_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_defn_0), Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
parse_tree__prog_item_inst_mode____Compare____item_mode_defn_info_abstract_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__prog_item_inst_mode_scalar_common_2[8]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
parse_tree__prog_item_inst_mode____Unify____item_mode_defn_info_abstract_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = parse_tree__prog_item_inst_mode____Unify____item_mode_defn_info_general_1_0((MR_Word) (&parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_no_mode_defn_0), Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
parse_tree__prog_item_inst_mode____Compare____item_mode_defn_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__prog_item_inst_mode_scalar_common_2[7]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
parse_tree__prog_item_inst_mode____Unify____item_mode_defn_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = parse_tree__prog_item_inst_mode____Unify____item_mode_defn_info_general_1_0((MR_Word) (&parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_maybe_abstract_mode_defn_0), Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

MR_bool MR_CALL 
parse_tree__prog_item_inst_mode____Unify____item_mode_defn_info_general_1_0(
  MR_Word TypeInfo_for_T_17,
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
    MR_Word TypeInfo_19_19;
    MR_Word TypeInfo_20_20;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Box ArgX3_7 = (MR_hl_field(0, HeadVar__1_1, 2));
    MR_Box ArgY3_8 = (MR_hl_field(0, HeadVar__2_2, 2));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));

    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      TypeInfo_19_19 = (MR_Word) (&parse_tree__prog_item_inst_mode_scalar_common_2[4]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_19, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_17, ArgX3_7, ArgY3_8);
        if (succeeded)
        {
          TypeInfo_20_20 = (MR_Word) (&parse_tree__prog_item_inst_mode_scalar_common_2[6]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_20_20, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          if (succeeded)
          {
            succeeded = mercury__term_context____Unify____term_context_0_0(ArgX5_11, ArgY5_12);
            if (succeeded)
              succeeded = parse_tree__prog_data____Unify____item_seq_num_0_0(ArgX6_13, ArgY6_14);
          }
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
parse_tree__prog_item_inst_mode____Compare____item_inst_defn_info_general_1_0(
  MR_Word TypeInfo_for_T_26,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_24 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_25 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_24 == CastY_25);
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
    MR_Box ArgX4_13 = (MR_hl_field(0, HeadVar__2_2, 3));
    MR_Box ArgY4_14 = (MR_hl_field(0, HeadVar__3_3, 3));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 4))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 5))));
    MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 6))));
    MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 6))));
    MR_Word SubResult1_6;

    mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__prog_item_inst_mode_scalar_common_2[4]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__prog_item_inst_mode_scalar_common_2[5]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__builtin__compare_3_p_0(TypeInfo_for_T_26, &SubResult4_15, ArgX4_13, ArgY4_14);
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__prog_item_inst_mode_scalar_common_2[6]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              mercury__term_context____Compare____term_context_0_0(&SubResult6_21, ArgX6_19, ArgY6_20);
              succeeded = (SubResult6_21 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
                parse_tree__prog_data____Compare____item_seq_num_0_0(HeadVar__1_1, ArgX7_22, ArgY7_23);
            }
          }
        }
      }
    }
  }
}

void MR_CALL 
parse_tree__prog_item_inst_mode____Compare____item_inst_defn_info_eqv_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__prog_item_inst_mode_scalar_common_2[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
parse_tree__prog_item_inst_mode____Unify____item_inst_defn_info_eqv_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = parse_tree__prog_item_inst_mode____Unify____item_inst_defn_info_general_1_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_defn_0), Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
parse_tree__prog_item_inst_mode____Compare____item_inst_defn_info_abstract_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__prog_item_inst_mode_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
parse_tree__prog_item_inst_mode____Unify____item_inst_defn_info_abstract_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = parse_tree__prog_item_inst_mode____Unify____item_inst_defn_info_general_1_0((MR_Word) (&parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_no_inst_defn_0), Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
parse_tree__prog_item_inst_mode____Compare____item_inst_defn_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__prog_item_inst_mode_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
parse_tree__prog_item_inst_mode____Unify____item_inst_defn_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = parse_tree__prog_item_inst_mode____Unify____item_inst_defn_info_general_1_0((MR_Word) (&parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_maybe_abstract_inst_defn_0), Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
parse_tree__prog_item_inst_mode____Compare____inst_ctor_checked_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__prog_item_inst_mode_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
parse_tree__prog_item_inst_mode____Unify____inst_ctor_checked_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__prog_item_inst_mode_scalar_common_1[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
parse_tree__prog_item_inst_mode____Compare____inst_ctor_checked_defn_0_0(
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

    parse_tree__prog_item_inst_mode____Compare____std_inst_defn_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      parse_tree__prog_item_inst_mode____Compare____src_defns_inst_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

void MR_CALL 
parse_tree__prog_item_inst_mode____Compare____std_inst_defn_0_0(
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
    MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 3);
    MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) & (MR_Integer) 3);
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
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
    }
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__prog_item_inst_mode_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

void MR_CALL 
parse_tree__prog_item_inst_mode____Compare____src_defns_inst_0_0(
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

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__prog_item_inst_mode_scalar_common_2[10]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__prog_item_inst_mode_scalar_common_2[10]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

MR_bool MR_CALL 
parse_tree__prog_item_inst_mode____Unify____inst_ctor_checked_defn_0_0(
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

    succeeded = parse_tree__prog_item_inst_mode____Unify____std_inst_defn_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
      succeeded = parse_tree__prog_item_inst_mode____Unify____src_defns_inst_0_0(ArgX2_5, ArgY2_6);
  }
  return succeeded;
}

MR_bool MR_CALL 
parse_tree__prog_item_inst_mode____Unify____std_inst_defn_0_0(
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
    MR_Word TypeCtorInfo_9_9;
    MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) & (MR_Integer) 3);
    MR_Word ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 3);
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      TypeCtorInfo_9_9 = (MR_Word) (&parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_maybe_abstract_inst_defn_0);
      succeeded = parse_tree__prog_item_inst_mode____Unify____item_inst_defn_info_general_1_0(TypeCtorInfo_9_9, ArgX2_5, ArgY2_6);
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
parse_tree__prog_item_inst_mode____Unify____item_inst_defn_info_general_1_0(
  MR_Word TypeInfo_for_T_19,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_17 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_18 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_17 == CastY_18);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_21_21;
    MR_Word TypeInfo_22_22;
    MR_Word TypeInfo_23_23;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Box ArgX4_9 = (MR_hl_field(0, HeadVar__1_1, 3));
    MR_Box ArgY4_10 = (MR_hl_field(0, HeadVar__2_2, 3));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 6))));
    MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 6))));

    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      TypeInfo_21_21 = (MR_Word) (&parse_tree__prog_item_inst_mode_scalar_common_2[4]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_21_21, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        TypeInfo_22_22 = (MR_Word) (&parse_tree__prog_item_inst_mode_scalar_common_2[5]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_22_22, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_19, ArgX4_9, ArgY4_10);
          if (succeeded)
          {
            TypeInfo_23_23 = (MR_Word) (&parse_tree__prog_item_inst_mode_scalar_common_2[6]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_23_23, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
            if (succeeded)
            {
              succeeded = mercury__term_context____Unify____term_context_0_0(ArgX6_13, ArgY6_14);
              if (succeeded)
                succeeded = parse_tree__prog_data____Unify____item_seq_num_0_0(ArgX7_15, ArgY7_16);
            }
          }
        }
      }
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
parse_tree__prog_item_inst_mode____Unify____src_defns_inst_0_0(
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
    MR_Word TypeInfo_10_10;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__prog_item_inst_mode_scalar_common_2[10]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_10_10 = (MR_Word) (&parse_tree__prog_item_inst_mode_scalar_common_2[10]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__prog_item_inst_mode____Unify____inst_ctor_checked_defn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_item_inst_mode____Unify____inst_ctor_checked_defn_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_item_inst_mode____Compare____inst_ctor_checked_defn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__prog_item_inst_mode____Compare____inst_ctor_checked_defn_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__prog_item_inst_mode____Unify____inst_ctor_checked_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_item_inst_mode____Unify____inst_ctor_checked_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_item_inst_mode____Compare____inst_ctor_checked_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__prog_item_inst_mode____Compare____inst_ctor_checked_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__prog_item_inst_mode____Unify____item_inst_defn_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_item_inst_mode____Unify____item_inst_defn_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_item_inst_mode____Compare____item_inst_defn_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__prog_item_inst_mode____Compare____item_inst_defn_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__prog_item_inst_mode____Unify____item_inst_defn_info_abstract_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_item_inst_mode____Unify____item_inst_defn_info_abstract_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_item_inst_mode____Compare____item_inst_defn_info_abstract_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__prog_item_inst_mode____Compare____item_inst_defn_info_abstract_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__prog_item_inst_mode____Unify____item_inst_defn_info_eqv_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_item_inst_mode____Unify____item_inst_defn_info_eqv_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_item_inst_mode____Compare____item_inst_defn_info_eqv_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__prog_item_inst_mode____Compare____item_inst_defn_info_eqv_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__prog_item_inst_mode____Unify____item_inst_defn_info_general_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_item_inst_mode____Unify____item_inst_defn_info_general_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_item_inst_mode____Compare____item_inst_defn_info_general_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__prog_item_inst_mode____Compare____item_inst_defn_info_general_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__prog_item_inst_mode____Unify____item_mode_defn_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_item_inst_mode____Unify____item_mode_defn_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_item_inst_mode____Compare____item_mode_defn_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__prog_item_inst_mode____Compare____item_mode_defn_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__prog_item_inst_mode____Unify____item_mode_defn_info_abstract_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_item_inst_mode____Unify____item_mode_defn_info_abstract_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_item_inst_mode____Compare____item_mode_defn_info_abstract_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__prog_item_inst_mode____Compare____item_mode_defn_info_abstract_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__prog_item_inst_mode____Unify____item_mode_defn_info_eqv_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_item_inst_mode____Unify____item_mode_defn_info_eqv_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_item_inst_mode____Compare____item_mode_defn_info_eqv_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__prog_item_inst_mode____Compare____item_mode_defn_info_eqv_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__prog_item_inst_mode____Unify____item_mode_defn_info_general_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_item_inst_mode____Unify____item_mode_defn_info_general_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_item_inst_mode____Compare____item_mode_defn_info_general_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__prog_item_inst_mode____Compare____item_mode_defn_info_general_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__prog_item_inst_mode____Unify____maybe_abstract_inst_defn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_item_inst_mode____Unify____maybe_abstract_inst_defn_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_item_inst_mode____Compare____maybe_abstract_inst_defn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__prog_item_inst_mode____Compare____maybe_abstract_inst_defn_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__prog_item_inst_mode____Unify____maybe_abstract_mode_defn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_item_inst_mode____Unify____maybe_abstract_mode_defn_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_item_inst_mode____Compare____maybe_abstract_mode_defn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__prog_item_inst_mode____Compare____maybe_abstract_mode_defn_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__prog_item_inst_mode____Unify____mode_ctor_checked_defn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_item_inst_mode____Unify____mode_ctor_checked_defn_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_item_inst_mode____Compare____mode_ctor_checked_defn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__prog_item_inst_mode____Compare____mode_ctor_checked_defn_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__prog_item_inst_mode____Unify____mode_ctor_checked_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_item_inst_mode____Unify____mode_ctor_checked_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_item_inst_mode____Compare____mode_ctor_checked_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__prog_item_inst_mode____Compare____mode_ctor_checked_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__prog_item_inst_mode____Unify____no_inst_defn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_item_inst_mode____Unify____no_inst_defn_0_0();
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_item_inst_mode____Compare____no_inst_defn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__prog_item_inst_mode____Compare____no_inst_defn_0_0(&conv0_HeadVar__1_1);
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__prog_item_inst_mode____Unify____no_mode_defn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_item_inst_mode____Unify____no_mode_defn_0_0();
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_item_inst_mode____Compare____no_mode_defn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__prog_item_inst_mode____Compare____no_mode_defn_0_0(&conv0_HeadVar__1_1);
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__prog_item_inst_mode____Unify____src_defns_inst_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_item_inst_mode____Unify____src_defns_inst_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_item_inst_mode____Compare____src_defns_inst_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__prog_item_inst_mode____Compare____src_defns_inst_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__prog_item_inst_mode____Unify____src_defns_mode_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_item_inst_mode____Unify____src_defns_mode_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_item_inst_mode____Compare____src_defns_mode_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__prog_item_inst_mode____Compare____src_defns_mode_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__prog_item_inst_mode____Unify____std_inst_defn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_item_inst_mode____Unify____std_inst_defn_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_item_inst_mode____Compare____std_inst_defn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__prog_item_inst_mode____Compare____std_inst_defn_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__prog_item_inst_mode____Unify____std_inst_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_item_inst_mode____Unify____std_inst_status_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_item_inst_mode____Compare____std_inst_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__prog_item_inst_mode____Compare____std_inst_status_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__prog_item_inst_mode____Unify____std_mode_defn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_item_inst_mode____Unify____std_mode_defn_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_item_inst_mode____Compare____std_mode_defn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__prog_item_inst_mode____Compare____std_mode_defn_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__prog_item_inst_mode____Unify____std_mode_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_item_inst_mode____Unify____std_mode_status_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_item_inst_mode____Compare____std_mode_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__prog_item_inst_mode____Compare____std_mode_status_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__parse_tree__prog_item_inst_mode__init(void)
{
}

void mercury__parse_tree__prog_item_inst_mode__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_inst_ctor_checked_defn_0);
  MR_register_type_ctor_info(&parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_inst_ctor_checked_map_0);
  MR_register_type_ctor_info(&parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_item_inst_defn_info_0);
  MR_register_type_ctor_info(&parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_item_inst_defn_info_abstract_0);
  MR_register_type_ctor_info(&parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_item_inst_defn_info_eqv_0);
  MR_register_type_ctor_info(&parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_item_inst_defn_info_general_1);
  MR_register_type_ctor_info(&parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_item_mode_defn_info_0);
  MR_register_type_ctor_info(&parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_item_mode_defn_info_abstract_0);
  MR_register_type_ctor_info(&parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_item_mode_defn_info_eqv_0);
  MR_register_type_ctor_info(&parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_item_mode_defn_info_general_1);
  MR_register_type_ctor_info(&parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_maybe_abstract_inst_defn_0);
  MR_register_type_ctor_info(&parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_maybe_abstract_mode_defn_0);
  MR_register_type_ctor_info(&parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_mode_ctor_checked_defn_0);
  MR_register_type_ctor_info(&parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_mode_ctor_checked_map_0);
  MR_register_type_ctor_info(&parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_no_inst_defn_0);
  MR_register_type_ctor_info(&parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_no_mode_defn_0);
  MR_register_type_ctor_info(&parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_src_defns_inst_0);
  MR_register_type_ctor_info(&parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_src_defns_mode_0);
  MR_register_type_ctor_info(&parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_std_inst_defn_0);
  MR_register_type_ctor_info(&parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_std_inst_status_0);
  MR_register_type_ctor_info(&parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_std_mode_defn_0);
  MR_register_type_ctor_info(&parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_std_mode_status_0);
}

void mercury__parse_tree__prog_item_inst_mode__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__prog_item_inst_mode__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module parse_tree.prog_item_inst_mode.
