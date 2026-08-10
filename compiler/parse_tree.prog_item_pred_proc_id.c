/*
** Automatically generated from `prog_item_pred_proc_id.m'
** by the Mercury compiler,
** version rotd-2026-08-10
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


// :- module parse_tree.prog_item_pred_proc_id.
// :- implementation.

/*
INIT mercury__parse_tree__prog_item_pred_proc_id__init
ENDINIT
*/

#include "parse_tree.prog_item_pred_proc_id.mih"


#include "assoc_list.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "cord.mih"
#include "enum.mih"
#include "integer.mih"
#include "libs.mih"
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
#include "sparse_bitset.mih"
#include "term.mih"
#include "term_context.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "libs.compiler_util.mih"
#include "libs.rat.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_rare.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"




static const MR_DuFunctorDesc parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_functor_desc_compiler_origin_0_0;

static const MR_DuFunctorDesc parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_functor_desc_compiler_origin_0_1;

static const MR_PseudoTypeInfo parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__field_types_compiler_origin_0_2[2];

static const MR_ConstString parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__field_names_compiler_origin_0_2[2];

static const MR_DuFunctorDesc parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_functor_desc_compiler_origin_0_2;

static const MR_PseudoTypeInfo parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__field_types_compiler_origin_0_3[2];

static const MR_ConstString parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__field_names_compiler_origin_0_3[2];

static const MR_DuArgLocn parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__field_locns_compiler_origin_0_3[2];

static const MR_DuFunctorDesc parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_functor_desc_compiler_origin_0_3;

static const MR_PseudoTypeInfo parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__field_types_compiler_origin_0_4[3];

static const MR_ConstString parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__field_names_compiler_origin_0_4[3];

static const MR_DuArgLocn parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__field_locns_compiler_origin_0_4[3];

static const MR_DuFunctorDesc parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_functor_desc_compiler_origin_0_4;

static const MR_PseudoTypeInfo parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__field_types_compiler_origin_0_5[2];

static const MR_ConstString parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__field_names_compiler_origin_0_5[2];

static const MR_DuArgLocn parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__field_locns_compiler_origin_0_5[2];

static const MR_DuFunctorDesc parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_functor_desc_compiler_origin_0_5;

static const MR_DuFunctorDescPtr parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_stag_ordered_compiler_origin_0_0[2];

static const MR_DuFunctorDescPtr parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_stag_ordered_compiler_origin_0_1[1];

static const MR_DuFunctorDescPtr parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_stag_ordered_compiler_origin_0_2[1];

static const MR_DuFunctorDescPtr parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_stag_ordered_compiler_origin_0_3[2];

static const MR_DuPtagLayout parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_ptag_ordered_compiler_origin_0[4];

static const MR_DuFunctorDescPtr parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_name_ordered_compiler_origin_0[6];

static const MR_Integer parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__functor_number_map_compiler_origin_0[6];

static const MR_Integer parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__functor_number_map_item_compiler_attributes_0[1];

static const MR_NotagFunctorDesc parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__notag_functor_desc_item_compiler_attributes_0;

static const MR_DuFunctorDesc parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_functor_desc_item_maybe_attrs_0_0;

static const MR_PseudoTypeInfo parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__field_types_item_maybe_attrs_0_1[1];

static const MR_DuFunctorDesc parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_functor_desc_item_maybe_attrs_0_1;

static const MR_DuFunctorDescPtr parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_stag_ordered_item_maybe_attrs_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_stag_ordered_item_maybe_attrs_0_1[1];

static const MR_DuPtagLayout parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_ptag_ordered_item_maybe_attrs_0[2];

static const MR_DuFunctorDescPtr parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_name_ordered_item_maybe_attrs_0[2];

static const MR_Integer parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__functor_number_map_item_maybe_attrs_0[2];

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_item_pred_proc_id__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0;

static const MR_PseudoTypeInfo parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__field_types_modes_or_arity_0_0[1];

static const MR_DuFunctorDesc parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_functor_desc_modes_or_arity_0_0;

static const MR_PseudoTypeInfo parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__field_types_modes_or_arity_0_1[1];

static const MR_DuFunctorDesc parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_functor_desc_modes_or_arity_0_1;

static const MR_DuFunctorDescPtr parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_stag_ordered_modes_or_arity_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_stag_ordered_modes_or_arity_0_1[1];

static const MR_DuPtagLayout parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_ptag_ordered_modes_or_arity_0[2];

static const MR_DuFunctorDescPtr parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_name_ordered_modes_or_arity_0[2];

static const MR_Integer parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__functor_number_map_modes_or_arity_0[2];

static const MR_EnumFunctorDesc parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__enum_functor_desc_pred_func_or_unknown_0_0;

static const MR_EnumFunctorDesc parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__enum_functor_desc_pred_func_or_unknown_0_1;

static const MR_EnumFunctorDesc parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__enum_functor_desc_pred_func_or_unknown_0_2;

static const MR_EnumFunctorDescPtr parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__enum_ordinal_ordered_pred_func_or_unknown_0[3];

static const MR_EnumFunctorDescPtr parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__enum_name_ordered_pred_func_or_unknown_0[3];

static const MR_Integer parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__functor_number_map_pred_func_or_unknown_0[3];

static const MR_PseudoTypeInfo parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__field_types_pred_func_or_unknown_maybe_modes_0_0[1];

static const MR_DuFunctorDesc parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_functor_desc_pred_func_or_unknown_maybe_modes_0_0;

static const MR_PseudoTypeInfo parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__field_types_pred_func_or_unknown_maybe_modes_0_1[1];

static const MR_DuFunctorDesc parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_functor_desc_pred_func_or_unknown_maybe_modes_0_1;

static const MR_PseudoTypeInfo parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__field_types_pred_func_or_unknown_maybe_modes_0_2[1];

static const MR_DuFunctorDesc parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_functor_desc_pred_func_or_unknown_maybe_modes_0_2;

static const MR_DuFunctorDescPtr parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_stag_ordered_pred_func_or_unknown_maybe_modes_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_stag_ordered_pred_func_or_unknown_maybe_modes_0_1[1];

static const MR_DuFunctorDescPtr parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_stag_ordered_pred_func_or_unknown_maybe_modes_0_2[1];

static const MR_DuPtagLayout parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_ptag_ordered_pred_func_or_unknown_maybe_modes_0[3];

static const MR_DuFunctorDescPtr parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_name_ordered_pred_func_or_unknown_maybe_modes_0[3];

static const MR_Integer parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__functor_number_map_pred_func_or_unknown_maybe_modes_0[3];

static const MR_EnumFunctorDesc parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__enum_functor_desc_pred_func_or_unknown_pf_0_0;

static const MR_EnumFunctorDesc parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__enum_functor_desc_pred_func_or_unknown_pf_0_1;

static const MR_EnumFunctorDescPtr parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__enum_ordinal_ordered_pred_func_or_unknown_pf_0[2];

static const MR_EnumFunctorDescPtr parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__enum_name_ordered_pred_func_or_unknown_pf_0[2];

static const MR_Integer parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__functor_number_map_pred_func_or_unknown_pf_0[2];

static const MR_PseudoTypeInfo parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__field_types_pred_or_proc_pfumm_name_0_0[2];

static const MR_ConstString parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__field_names_pred_or_proc_pfumm_name_0_0[2];

static const MR_DuFunctorDesc parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_functor_desc_pred_or_proc_pfumm_name_0_0;

static const MR_DuFunctorDescPtr parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_stag_ordered_pred_or_proc_pfumm_name_0_0[1];

static const MR_DuPtagLayout parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_ptag_ordered_pred_or_proc_pfumm_name_0[1];

static const MR_DuFunctorDescPtr parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_name_ordered_pred_or_proc_pfumm_name_0[1];

static const MR_Integer parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__functor_number_map_pred_or_proc_pfumm_name_0[1];

static const MR_PseudoTypeInfo parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__field_types_pred_pfu_name_arity_0_0[3];

static const MR_ConstString parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__field_names_pred_pfu_name_arity_0_0[3];

static const MR_DuArgLocn parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__field_locns_pred_pfu_name_arity_0_0[3];

static const MR_DuFunctorDesc parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_functor_desc_pred_pfu_name_arity_0_0;

static const MR_DuFunctorDescPtr parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_stag_ordered_pred_pfu_name_arity_0_0[1];

static const MR_DuPtagLayout parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_ptag_ordered_pred_pfu_name_arity_0[1];

static const MR_DuFunctorDescPtr parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_name_ordered_pred_pfu_name_arity_0[1];

static const MR_Integer parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__functor_number_map_pred_pfu_name_arity_0[1];

static const MR_PseudoTypeInfo parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__field_types_pred_pfu_name_arity_pf_0_0[3];

static const MR_ConstString parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__field_names_pred_pfu_name_arity_pf_0_0[3];

static const MR_DuArgLocn parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__field_locns_pred_pfu_name_arity_pf_0_0[3];

static const MR_DuFunctorDesc parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_functor_desc_pred_pfu_name_arity_pf_0_0;

static const MR_DuFunctorDescPtr parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_stag_ordered_pred_pfu_name_arity_pf_0_0[1];

static const MR_DuPtagLayout parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_ptag_ordered_pred_pfu_name_arity_pf_0[1];

static const MR_DuFunctorDescPtr parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_name_ordered_pred_pfu_name_arity_pf_0[1];

static const MR_Integer parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__functor_number_map_pred_pfu_name_arity_pf_0[1];

static const MR_PseudoTypeInfo parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__field_types_proc_pf_name_arity_mn_0_0[4];

static const MR_ConstString parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__field_names_proc_pf_name_arity_mn_0_0[4];

static const MR_DuArgLocn parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__field_locns_proc_pf_name_arity_mn_0_0[4];

static const MR_DuFunctorDesc parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_functor_desc_proc_pf_name_arity_mn_0_0;

static const MR_DuFunctorDescPtr parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_stag_ordered_proc_pf_name_arity_mn_0_0[1];

static const MR_DuPtagLayout parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_ptag_ordered_proc_pf_name_arity_mn_0[1];

static const MR_DuFunctorDescPtr parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_name_ordered_proc_pf_name_arity_mn_0[1];

static const MR_Integer parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__functor_number_map_proc_pf_name_arity_mn_0[1];

static const MR_PseudoTypeInfo parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__field_types_proc_pf_name_modes_0_0[3];

static const MR_ConstString parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__field_names_proc_pf_name_modes_0_0[3];

static const MR_DuArgLocn parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__field_locns_proc_pf_name_modes_0_0[3];

static const MR_DuFunctorDesc parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_functor_desc_proc_pf_name_modes_0_0;

static const MR_DuFunctorDescPtr parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_stag_ordered_proc_pf_name_modes_0_0[1];

static const MR_DuPtagLayout parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_ptag_ordered_proc_pf_name_modes_0[1];

static const MR_DuFunctorDescPtr parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_name_ordered_proc_pf_name_modes_0[1];

static const MR_Integer parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__functor_number_map_proc_pf_name_modes_0[1];

static MR_bool MR_CALL 
parse_tree__prog_item_pred_proc_id____Unify____compiler_origin_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_item_pred_proc_id____Compare____compiler_origin_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_item_pred_proc_id____Unify____item_compiler_attributes_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_item_pred_proc_id____Compare____item_compiler_attributes_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_item_pred_proc_id____Unify____item_maybe_attrs_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_item_pred_proc_id____Compare____item_maybe_attrs_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_item_pred_proc_id____Unify____modes_or_arity_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_item_pred_proc_id____Compare____modes_or_arity_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_item_pred_proc_id____Unify____pred_func_or_unknown_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_item_pred_proc_id____Compare____pred_func_or_unknown_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_item_pred_proc_id____Unify____pred_func_or_unknown_maybe_modes_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_item_pred_proc_id____Compare____pred_func_or_unknown_maybe_modes_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_item_pred_proc_id____Unify____pred_func_or_unknown_pf_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_item_pred_proc_id____Compare____pred_func_or_unknown_pf_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_item_pred_proc_id____Unify____pred_or_proc_pfumm_name_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_item_pred_proc_id____Compare____pred_or_proc_pfumm_name_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_item_pred_proc_id____Unify____pred_pfu_name_arity_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_item_pred_proc_id____Compare____pred_pfu_name_arity_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_item_pred_proc_id____Unify____pred_pfu_name_arity_pf_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_item_pred_proc_id____Compare____pred_pfu_name_arity_pf_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_item_pred_proc_id____Unify____proc_pf_name_arity_mn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_item_pred_proc_id____Compare____proc_pf_name_arity_mn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_item_pred_proc_id____Unify____proc_pf_name_modes_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_item_pred_proc_id____Compare____proc_pf_name_modes_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__prog_item_pred_proc_id_scalar_common_1[1][2];

static /* final */ const MR_Box parse_tree__prog_item_pred_proc_id_scalar_common_2[2][1];




static /* final */ const MR_Box parse_tree__prog_item_pred_proc_id_scalar_common_1[1][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
};

static /* final */ const MR_Box parse_tree__prog_item_pred_proc_id_scalar_common_2[2][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Integer) 1)) },
  /* row   1 */
  { ((MR_Box) ((MR_Integer) 0)) },
};





static const MR_DuFunctorDesc parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_functor_desc_compiler_origin_0_0 = {
  (MR_String) "compiler_origin_initialise",
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

static const MR_DuFunctorDesc parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_functor_desc_compiler_origin_0_1 = {
  (MR_String) "compiler_origin_finalise",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__field_types_compiler_origin_0_2[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pf_sym_name_user_arity_0)
};

static const MR_ConstString parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__field_names_compiler_origin_0_2[2] = {
  (MR_String) "cm_class_id",
  (MR_String) "cm_method"
};

static const MR_DuFunctorDesc parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_functor_desc_compiler_origin_0_2 = {
  (MR_String) "compiler_origin_class_method",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(2),
  parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__field_types_compiler_origin_0_2,
  parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__field_names_compiler_origin_0_2,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__field_types_compiler_origin_0_3[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data_rare__parse_tree__prog_data_rare__type_ctor_info_solver_type_pred_kind_0)
};

static const MR_ConstString parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__field_names_compiler_origin_0_3[2] = {
  (MR_String) "cosr_type_ctor",
  (MR_String) "cosr_aux_pred_kind"
};

static const MR_DuArgLocn parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__field_locns_compiler_origin_0_3[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 2
  }
};

static const MR_DuFunctorDesc parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_functor_desc_compiler_origin_0_3 = {
  (MR_String) "compiler_origin_solver_repn",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(3),
  parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__field_types_compiler_origin_0_3,
  parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__field_names_compiler_origin_0_3,
  parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__field_locns_compiler_origin_0_3,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__field_types_compiler_origin_0_4[3] = {
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data_rare__parse_tree__prog_data_rare__type_ctor_info_mutable_pred_kind_0)
};

static const MR_ConstString parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__field_names_compiler_origin_0_4[3] = {
  (MR_String) "com_module_name",
  (MR_String) "com_mutable_name",
  (MR_String) "com_aux_pred_kind"
};

static const MR_DuArgLocn parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__field_locns_compiler_origin_0_4[3] = {
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
    (MR_Integer) 4
  }
};

static const MR_DuFunctorDesc parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_functor_desc_compiler_origin_0_4 = {
  (MR_String) "compiler_origin_mutable",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(4),
  parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__field_types_compiler_origin_0_4,
  parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__field_names_compiler_origin_0_4,
  parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__field_locns_compiler_origin_0_4,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__field_types_compiler_origin_0_5[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pf_sym_name_user_arity_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data_rare__parse_tree__prog_data_rare__type_ctor_info_tabling_aux_pred_kind_0)
};

static const MR_ConstString parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__field_names_compiler_origin_0_5[2] = {
  (MR_String) "cot_pred_spec",
  (MR_String) "cot_aux_pred_kind"
};

static const MR_DuArgLocn parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__field_locns_compiler_origin_0_5[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_functor_desc_compiler_origin_0_5 = {
  (MR_String) "compiler_origin_tabling",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(5),
  parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__field_types_compiler_origin_0_5,
  parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__field_names_compiler_origin_0_5,
  parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__field_locns_compiler_origin_0_5,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_stag_ordered_compiler_origin_0_0[2] = {
  &parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_functor_desc_compiler_origin_0_0,
  &parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_functor_desc_compiler_origin_0_1
};

static const MR_DuFunctorDescPtr parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_stag_ordered_compiler_origin_0_1[1] = { &parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_functor_desc_compiler_origin_0_2 };

static const MR_DuFunctorDescPtr parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_stag_ordered_compiler_origin_0_2[1] = { &parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_functor_desc_compiler_origin_0_3 };

static const MR_DuFunctorDescPtr parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_stag_ordered_compiler_origin_0_3[2] = {
  &parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_functor_desc_compiler_origin_0_4,
  &parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_functor_desc_compiler_origin_0_5
};

static const MR_DuPtagLayout parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_ptag_ordered_compiler_origin_0[4] = {
  {
    UINT32_C(2),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_stag_ordered_compiler_origin_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_stag_ordered_compiler_origin_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_stag_ordered_compiler_origin_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(2),
    MR_SECTAG_REMOTE_FULL_WORD,
    parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_stag_ordered_compiler_origin_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_name_ordered_compiler_origin_0[6] = {
  &parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_functor_desc_compiler_origin_0_2,
  &parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_functor_desc_compiler_origin_0_1,
  &parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_functor_desc_compiler_origin_0_0,
  &parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_functor_desc_compiler_origin_0_4,
  &parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_functor_desc_compiler_origin_0_3,
  &parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_functor_desc_compiler_origin_0_5
};

static const MR_Integer parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__functor_number_map_compiler_origin_0[6] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 3,
  (MR_Integer) 5
};

const MR_TypeCtorInfo_Struct parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__type_ctor_info_compiler_origin_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_item_pred_proc_id____Unify____compiler_origin_0_0_10001)),
  ((MR_Box) (parse_tree__prog_item_pred_proc_id____Compare____compiler_origin_0_0_10001)),
  (MR_String) "parse_tree.prog_item_pred_proc_id",
  (MR_String) "compiler_origin",
  { parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_name_ordered_compiler_origin_0 },
  { parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_ptag_ordered_compiler_origin_0 },
  (MR_Integer) 6,
  UINT16_C(12),
  parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__functor_number_map_compiler_origin_0,

};

static const MR_Integer parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__functor_number_map_item_compiler_attributes_0[1] = { (MR_Integer) 0 };

static const MR_NotagFunctorDesc parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__notag_functor_desc_item_compiler_attributes_0 = {
  (MR_String) "item_compiler_attributes",
  (MR_PseudoTypeInfo) (&parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__type_ctor_info_compiler_origin_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__type_ctor_info_item_compiler_attributes_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (parse_tree__prog_item_pred_proc_id____Unify____item_compiler_attributes_0_0_10001)),
  ((MR_Box) (parse_tree__prog_item_pred_proc_id____Compare____item_compiler_attributes_0_0_10001)),
  (MR_String) "parse_tree.prog_item_pred_proc_id",
  (MR_String) "item_compiler_attributes",
  { &parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__notag_functor_desc_item_compiler_attributes_0 },
  { &parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__notag_functor_desc_item_compiler_attributes_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__functor_number_map_item_compiler_attributes_0,

};

static const MR_DuFunctorDesc parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_functor_desc_item_maybe_attrs_0_0 = {
  (MR_String) "item_origin_user",
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

static const MR_PseudoTypeInfo parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__field_types_item_maybe_attrs_0_1[1] = { (MR_PseudoTypeInfo) (&parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__type_ctor_info_item_compiler_attributes_0) };

static const MR_DuFunctorDesc parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_functor_desc_item_maybe_attrs_0_1 = {
  (MR_String) "item_origin_compiler",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__field_types_item_maybe_attrs_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_stag_ordered_item_maybe_attrs_0_0[1] = { &parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_functor_desc_item_maybe_attrs_0_0 };

static const MR_DuFunctorDescPtr parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_stag_ordered_item_maybe_attrs_0_1[1] = { &parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_functor_desc_item_maybe_attrs_0_1 };

static const MR_DuPtagLayout parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_ptag_ordered_item_maybe_attrs_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_stag_ordered_item_maybe_attrs_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_stag_ordered_item_maybe_attrs_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_name_ordered_item_maybe_attrs_0[2] = {
  &parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_functor_desc_item_maybe_attrs_0_1,
  &parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_functor_desc_item_maybe_attrs_0_0
};

static const MR_Integer parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__functor_number_map_item_maybe_attrs_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__type_ctor_info_item_maybe_attrs_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_item_pred_proc_id____Unify____item_maybe_attrs_0_0_10001)),
  ((MR_Box) (parse_tree__prog_item_pred_proc_id____Compare____item_maybe_attrs_0_0_10001)),
  (MR_String) "parse_tree.prog_item_pred_proc_id",
  (MR_String) "item_maybe_attrs",
  { parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_name_ordered_item_maybe_attrs_0 },
  { parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_ptag_ordered_item_maybe_attrs_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__functor_number_map_item_maybe_attrs_0,

};

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_item_pred_proc_id__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0) }
};

static const MR_PseudoTypeInfo parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__field_types_modes_or_arity_0_0[1] = { (MR_PseudoTypeInfo) (&parse_tree__prog_item_pred_proc_id__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0) };

static const MR_DuFunctorDesc parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_functor_desc_modes_or_arity_0_0 = {
  (MR_String) "moa_modes",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__field_types_modes_or_arity_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__field_types_modes_or_arity_0_1[1] = { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_user_arity_0) };

static const MR_DuFunctorDesc parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_functor_desc_modes_or_arity_0_1 = {
  (MR_String) "moa_arity",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__field_types_modes_or_arity_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_stag_ordered_modes_or_arity_0_0[1] = { &parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_functor_desc_modes_or_arity_0_0 };

static const MR_DuFunctorDescPtr parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_stag_ordered_modes_or_arity_0_1[1] = { &parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_functor_desc_modes_or_arity_0_1 };

static const MR_DuPtagLayout parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_ptag_ordered_modes_or_arity_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_stag_ordered_modes_or_arity_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_stag_ordered_modes_or_arity_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_name_ordered_modes_or_arity_0[2] = {
  &parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_functor_desc_modes_or_arity_0_1,
  &parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_functor_desc_modes_or_arity_0_0
};

static const MR_Integer parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__functor_number_map_modes_or_arity_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__type_ctor_info_modes_or_arity_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_item_pred_proc_id____Unify____modes_or_arity_0_0_10001)),
  ((MR_Box) (parse_tree__prog_item_pred_proc_id____Compare____modes_or_arity_0_0_10001)),
  (MR_String) "parse_tree.prog_item_pred_proc_id",
  (MR_String) "modes_or_arity",
  { parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_name_ordered_modes_or_arity_0 },
  { parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_ptag_ordered_modes_or_arity_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__functor_number_map_modes_or_arity_0,

};

static const MR_EnumFunctorDesc parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__enum_functor_desc_pred_func_or_unknown_0_0 = {
  (MR_String) "pfu_predicate",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__enum_functor_desc_pred_func_or_unknown_0_1 = {
  (MR_String) "pfu_function",
  INT32_C(1)
};

static const MR_EnumFunctorDesc parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__enum_functor_desc_pred_func_or_unknown_0_2 = {
  (MR_String) "pfu_unknown",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__enum_ordinal_ordered_pred_func_or_unknown_0[3] = {
  &parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__enum_functor_desc_pred_func_or_unknown_0_0,
  &parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__enum_functor_desc_pred_func_or_unknown_0_1,
  &parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__enum_functor_desc_pred_func_or_unknown_0_2
};

static const MR_EnumFunctorDescPtr parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__enum_name_ordered_pred_func_or_unknown_0[3] = {
  &parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__enum_functor_desc_pred_func_or_unknown_0_1,
  &parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__enum_functor_desc_pred_func_or_unknown_0_0,
  &parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__enum_functor_desc_pred_func_or_unknown_0_2
};

static const MR_Integer parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__functor_number_map_pred_func_or_unknown_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__type_ctor_info_pred_func_or_unknown_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__prog_item_pred_proc_id____Unify____pred_func_or_unknown_0_0_10001)),
  ((MR_Box) (parse_tree__prog_item_pred_proc_id____Compare____pred_func_or_unknown_0_0_10001)),
  (MR_String) "parse_tree.prog_item_pred_proc_id",
  (MR_String) "pred_func_or_unknown",
  { parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__enum_name_ordered_pred_func_or_unknown_0 },
  { parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__enum_ordinal_ordered_pred_func_or_unknown_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__functor_number_map_pred_func_or_unknown_0,

};

static const MR_PseudoTypeInfo parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__field_types_pred_func_or_unknown_maybe_modes_0_0[1] = { (MR_PseudoTypeInfo) (&parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__type_ctor_info_modes_or_arity_0) };

static const MR_DuFunctorDesc parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_functor_desc_pred_func_or_unknown_maybe_modes_0_0 = {
  (MR_String) "pfumm_predicate",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__field_types_pred_func_or_unknown_maybe_modes_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__field_types_pred_func_or_unknown_maybe_modes_0_1[1] = { (MR_PseudoTypeInfo) (&parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__type_ctor_info_modes_or_arity_0) };

static const MR_DuFunctorDesc parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_functor_desc_pred_func_or_unknown_maybe_modes_0_1 = {
  (MR_String) "pfumm_function",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__field_types_pred_func_or_unknown_maybe_modes_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__field_types_pred_func_or_unknown_maybe_modes_0_2[1] = { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_user_arity_0) };

static const MR_DuFunctorDesc parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_functor_desc_pred_func_or_unknown_maybe_modes_0_2 = {
  (MR_String) "pfumm_unknown",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__field_types_pred_func_or_unknown_maybe_modes_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_stag_ordered_pred_func_or_unknown_maybe_modes_0_0[1] = { &parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_functor_desc_pred_func_or_unknown_maybe_modes_0_0 };

static const MR_DuFunctorDescPtr parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_stag_ordered_pred_func_or_unknown_maybe_modes_0_1[1] = { &parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_functor_desc_pred_func_or_unknown_maybe_modes_0_1 };

static const MR_DuFunctorDescPtr parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_stag_ordered_pred_func_or_unknown_maybe_modes_0_2[1] = { &parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_functor_desc_pred_func_or_unknown_maybe_modes_0_2 };

static const MR_DuPtagLayout parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_ptag_ordered_pred_func_or_unknown_maybe_modes_0[3] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_stag_ordered_pred_func_or_unknown_maybe_modes_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_stag_ordered_pred_func_or_unknown_maybe_modes_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_stag_ordered_pred_func_or_unknown_maybe_modes_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_name_ordered_pred_func_or_unknown_maybe_modes_0[3] = {
  &parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_functor_desc_pred_func_or_unknown_maybe_modes_0_1,
  &parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_functor_desc_pred_func_or_unknown_maybe_modes_0_0,
  &parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_functor_desc_pred_func_or_unknown_maybe_modes_0_2
};

static const MR_Integer parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__functor_number_map_pred_func_or_unknown_maybe_modes_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__type_ctor_info_pred_func_or_unknown_maybe_modes_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_item_pred_proc_id____Unify____pred_func_or_unknown_maybe_modes_0_0_10001)),
  ((MR_Box) (parse_tree__prog_item_pred_proc_id____Compare____pred_func_or_unknown_maybe_modes_0_0_10001)),
  (MR_String) "parse_tree.prog_item_pred_proc_id",
  (MR_String) "pred_func_or_unknown_maybe_modes",
  { parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_name_ordered_pred_func_or_unknown_maybe_modes_0 },
  { parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_ptag_ordered_pred_func_or_unknown_maybe_modes_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__functor_number_map_pred_func_or_unknown_maybe_modes_0,

};

static const MR_EnumFunctorDesc parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__enum_functor_desc_pred_func_or_unknown_pf_0_0 = {
  (MR_String) "pfu_predicate",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__enum_functor_desc_pred_func_or_unknown_pf_0_1 = {
  (MR_String) "pfu_function",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__enum_ordinal_ordered_pred_func_or_unknown_pf_0[2] = {
  &parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__enum_functor_desc_pred_func_or_unknown_pf_0_0,
  &parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__enum_functor_desc_pred_func_or_unknown_pf_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__enum_name_ordered_pred_func_or_unknown_pf_0[2] = {
  &parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__enum_functor_desc_pred_func_or_unknown_pf_0_1,
  &parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__enum_functor_desc_pred_func_or_unknown_pf_0_0
};

static const MR_Integer parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__functor_number_map_pred_func_or_unknown_pf_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__type_ctor_info_pred_func_or_unknown_pf_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__prog_item_pred_proc_id____Unify____pred_func_or_unknown_pf_0_0_10001)),
  ((MR_Box) (parse_tree__prog_item_pred_proc_id____Compare____pred_func_or_unknown_pf_0_0_10001)),
  (MR_String) "parse_tree.prog_item_pred_proc_id",
  (MR_String) "pred_func_or_unknown_pf",
  { parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__enum_name_ordered_pred_func_or_unknown_pf_0 },
  { parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__enum_ordinal_ordered_pred_func_or_unknown_pf_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__functor_number_map_pred_func_or_unknown_pf_0,

};

static const MR_PseudoTypeInfo parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__field_types_pred_or_proc_pfumm_name_0_0[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__type_ctor_info_pred_func_or_unknown_maybe_modes_0),
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
};

static const MR_ConstString parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__field_names_pred_or_proc_pfumm_name_0_0[2] = {
  (MR_String) "ppfummn_pfumm",
  (MR_String) "ppfummn_pred_name"
};

static const MR_DuFunctorDesc parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_functor_desc_pred_or_proc_pfumm_name_0_0 = {
  (MR_String) "pred_or_proc_pfumm_name",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__field_types_pred_or_proc_pfumm_name_0_0,
  parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__field_names_pred_or_proc_pfumm_name_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_stag_ordered_pred_or_proc_pfumm_name_0_0[1] = { &parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_functor_desc_pred_or_proc_pfumm_name_0_0 };

static const MR_DuPtagLayout parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_ptag_ordered_pred_or_proc_pfumm_name_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_stag_ordered_pred_or_proc_pfumm_name_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_name_ordered_pred_or_proc_pfumm_name_0[1] = { &parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_functor_desc_pred_or_proc_pfumm_name_0_0 };

static const MR_Integer parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__functor_number_map_pred_or_proc_pfumm_name_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__type_ctor_info_pred_or_proc_pfumm_name_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_item_pred_proc_id____Unify____pred_or_proc_pfumm_name_0_0_10001)),
  ((MR_Box) (parse_tree__prog_item_pred_proc_id____Compare____pred_or_proc_pfumm_name_0_0_10001)),
  (MR_String) "parse_tree.prog_item_pred_proc_id",
  (MR_String) "pred_or_proc_pfumm_name",
  { parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_name_ordered_pred_or_proc_pfumm_name_0 },
  { parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_ptag_ordered_pred_or_proc_pfumm_name_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__functor_number_map_pred_or_proc_pfumm_name_0,

};

static const MR_PseudoTypeInfo parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__field_types_pred_pfu_name_arity_0_0[3] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__type_ctor_info_pred_func_or_unknown_0),
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_user_arity_0)
};

static const MR_ConstString parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__field_names_pred_pfu_name_arity_0_0[3] = {
  (MR_String) "ppfuna_pfu",
  (MR_String) "ppfuna_pred_name",
  (MR_String) "ppfuna_arity"
};

static const MR_DuArgLocn parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__field_locns_pred_pfu_name_arity_0_0[3] = {
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

static const MR_DuFunctorDesc parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_functor_desc_pred_pfu_name_arity_0_0 = {
  (MR_String) "pred_pfu_name_arity",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__field_types_pred_pfu_name_arity_0_0,
  parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__field_names_pred_pfu_name_arity_0_0,
  parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__field_locns_pred_pfu_name_arity_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_stag_ordered_pred_pfu_name_arity_0_0[1] = { &parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_functor_desc_pred_pfu_name_arity_0_0 };

static const MR_DuPtagLayout parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_ptag_ordered_pred_pfu_name_arity_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_stag_ordered_pred_pfu_name_arity_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_name_ordered_pred_pfu_name_arity_0[1] = { &parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_functor_desc_pred_pfu_name_arity_0_0 };

static const MR_Integer parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__functor_number_map_pred_pfu_name_arity_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__type_ctor_info_pred_pfu_name_arity_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_item_pred_proc_id____Unify____pred_pfu_name_arity_0_0_10001)),
  ((MR_Box) (parse_tree__prog_item_pred_proc_id____Compare____pred_pfu_name_arity_0_0_10001)),
  (MR_String) "parse_tree.prog_item_pred_proc_id",
  (MR_String) "pred_pfu_name_arity",
  { parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_name_ordered_pred_pfu_name_arity_0 },
  { parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_ptag_ordered_pred_pfu_name_arity_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__functor_number_map_pred_pfu_name_arity_0,

};

static const MR_PseudoTypeInfo parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__field_types_pred_pfu_name_arity_pf_0_0[3] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__type_ctor_info_pred_func_or_unknown_pf_0),
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_user_arity_0)
};

static const MR_ConstString parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__field_names_pred_pfu_name_arity_pf_0_0[3] = {
  (MR_String) "ppfuna_pfu",
  (MR_String) "ppfuna_pred_name",
  (MR_String) "ppfuna_arity"
};

static const MR_DuArgLocn parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__field_locns_pred_pfu_name_arity_pf_0_0[3] = {
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

static const MR_DuFunctorDesc parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_functor_desc_pred_pfu_name_arity_pf_0_0 = {
  (MR_String) "pred_pfu_name_arity",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__field_types_pred_pfu_name_arity_pf_0_0,
  parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__field_names_pred_pfu_name_arity_pf_0_0,
  parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__field_locns_pred_pfu_name_arity_pf_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_stag_ordered_pred_pfu_name_arity_pf_0_0[1] = { &parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_functor_desc_pred_pfu_name_arity_pf_0_0 };

static const MR_DuPtagLayout parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_ptag_ordered_pred_pfu_name_arity_pf_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_stag_ordered_pred_pfu_name_arity_pf_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_name_ordered_pred_pfu_name_arity_pf_0[1] = { &parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_functor_desc_pred_pfu_name_arity_pf_0_0 };

static const MR_Integer parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__functor_number_map_pred_pfu_name_arity_pf_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__type_ctor_info_pred_pfu_name_arity_pf_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_item_pred_proc_id____Unify____pred_pfu_name_arity_pf_0_0_10001)),
  ((MR_Box) (parse_tree__prog_item_pred_proc_id____Compare____pred_pfu_name_arity_pf_0_0_10001)),
  (MR_String) "parse_tree.prog_item_pred_proc_id",
  (MR_String) "pred_pfu_name_arity_pf",
  { parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_name_ordered_pred_pfu_name_arity_pf_0 },
  { parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_ptag_ordered_pred_pfu_name_arity_pf_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__functor_number_map_pred_pfu_name_arity_pf_0,

};

static const MR_PseudoTypeInfo parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__field_types_proc_pf_name_arity_mn_0_0[4] = {
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0),
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_user_arity_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_ConstString parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__field_names_proc_pf_name_arity_mn_0_0[4] = {
  (MR_String) "ppfnamn_pf",
  (MR_String) "ppfnamn_pred_name",
  (MR_String) "ppfnamn_arity",
  (MR_String) "ppfnamn_mode_num"
};

static const MR_DuArgLocn parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__field_locns_proc_pf_name_arity_mn_0_0[4] = {
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

static const MR_DuFunctorDesc parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_functor_desc_proc_pf_name_arity_mn_0_0 = {
  (MR_String) "proc_pf_name_arity_mn",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__field_types_proc_pf_name_arity_mn_0_0,
  parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__field_names_proc_pf_name_arity_mn_0_0,
  parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__field_locns_proc_pf_name_arity_mn_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_stag_ordered_proc_pf_name_arity_mn_0_0[1] = { &parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_functor_desc_proc_pf_name_arity_mn_0_0 };

static const MR_DuPtagLayout parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_ptag_ordered_proc_pf_name_arity_mn_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_stag_ordered_proc_pf_name_arity_mn_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_name_ordered_proc_pf_name_arity_mn_0[1] = { &parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_functor_desc_proc_pf_name_arity_mn_0_0 };

static const MR_Integer parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__functor_number_map_proc_pf_name_arity_mn_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__type_ctor_info_proc_pf_name_arity_mn_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_item_pred_proc_id____Unify____proc_pf_name_arity_mn_0_0_10001)),
  ((MR_Box) (parse_tree__prog_item_pred_proc_id____Compare____proc_pf_name_arity_mn_0_0_10001)),
  (MR_String) "parse_tree.prog_item_pred_proc_id",
  (MR_String) "proc_pf_name_arity_mn",
  { parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_name_ordered_proc_pf_name_arity_mn_0 },
  { parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_ptag_ordered_proc_pf_name_arity_mn_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__functor_number_map_proc_pf_name_arity_mn_0,

};

static const MR_PseudoTypeInfo parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__field_types_proc_pf_name_modes_0_0[3] = {
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0),
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_item_pred_proc_id__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0)
};

static const MR_ConstString parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__field_names_proc_pf_name_modes_0_0[3] = {
  (MR_String) "ppfnm_pf",
  (MR_String) "ppfnm_pred_name",
  (MR_String) "ppfnm_arity"
};

static const MR_DuArgLocn parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__field_locns_proc_pf_name_modes_0_0[3] = {
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
  }
};

static const MR_DuFunctorDesc parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_functor_desc_proc_pf_name_modes_0_0 = {
  (MR_String) "proc_pf_name_modes",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__field_types_proc_pf_name_modes_0_0,
  parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__field_names_proc_pf_name_modes_0_0,
  parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__field_locns_proc_pf_name_modes_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_stag_ordered_proc_pf_name_modes_0_0[1] = { &parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_functor_desc_proc_pf_name_modes_0_0 };

static const MR_DuPtagLayout parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_ptag_ordered_proc_pf_name_modes_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_stag_ordered_proc_pf_name_modes_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_name_ordered_proc_pf_name_modes_0[1] = { &parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_functor_desc_proc_pf_name_modes_0_0 };

static const MR_Integer parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__functor_number_map_proc_pf_name_modes_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__type_ctor_info_proc_pf_name_modes_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_item_pred_proc_id____Unify____proc_pf_name_modes_0_0_10001)),
  ((MR_Box) (parse_tree__prog_item_pred_proc_id____Compare____proc_pf_name_modes_0_0_10001)),
  (MR_String) "parse_tree.prog_item_pred_proc_id",
  (MR_String) "proc_pf_name_modes",
  { parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_name_ordered_proc_pf_name_modes_0 },
  { parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__du_ptag_ordered_proc_pf_name_modes_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__functor_number_map_proc_pf_name_modes_0,

};

void MR_CALL 
parse_tree__prog_item_pred_proc_id____Compare____proc_pf_name_modes_0_0(
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
    MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 1);
    MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) & (MR_Integer) 1);
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word SubResult1_6;
    MR_Integer Var_17 = (MR_Integer) (ArgX1_4);
    MR_Integer Var_18 = (MR_Integer) (ArgY1_5);

    succeeded = (Var_17 < Var_18);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (Var_17 > Var_18);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 2;
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__prog_item_pred_proc_id_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
    }
  }
}

MR_bool MR_CALL 
parse_tree__prog_item_pred_proc_id____Unify____proc_pf_name_modes_0_0(
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
    MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) & (MR_Integer) 1);
    MR_Word ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 1);
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        TypeInfo_12_12 = (MR_Word) (&parse_tree__prog_item_pred_proc_id_scalar_common_1[0]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
      }
    }
  }
  return succeeded;
}

void MR_CALL 
parse_tree__prog_item_pred_proc_id____Compare____proc_pf_name_arity_mn_0_0(
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
    MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 1);
    MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) & (MR_Integer) 1);
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Integer ArgX4_13 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Integer ArgY4_14 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 3))));
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
    }
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;
        MR_Integer Var_23 = (MR_Integer) (ArgX3_10);
        MR_Integer Var_24 = (MR_Integer) (ArgY3_11);

        succeeded = (Var_23 < Var_24);
        if (succeeded)
        {
          SubResult3_12 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (Var_23 > Var_24);
          if (succeeded)
          {
            SubResult3_12 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
        }
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          succeeded = (ArgX4_13 < ArgY4_14);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 1;
          else
          {
            succeeded = (ArgX4_13 > ArgY4_14);
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
parse_tree__prog_item_pred_proc_id____Unify____proc_pf_name_arity_mn_0_0(
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
    MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) & (MR_Integer) 1);
    MR_Word ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 1);
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Integer ArgX4_9 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Integer ArgY4_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Integer Var_15;
    MR_Integer Var_16;

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        Var_15 = (MR_Integer) (ArgX3_7);
        Var_16 = (MR_Integer) (ArgY3_8);
        succeeded = (Var_15 == Var_16);
        if (succeeded)
          succeeded = (ArgX4_9 == ArgY4_10);
      }
    }
  }
  return succeeded;
}

void MR_CALL 
parse_tree__prog_item_pred_proc_id____Compare____pred_pfu_name_arity_pf_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = (MR_Word) (HeadVar__2_2);
  MR_Word Cast_HeadVar2_5 = (MR_Word) (HeadVar__3_3);

  parse_tree__prog_item_pred_proc_id____Compare____pred_pfu_name_arity_0_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
}

MR_bool MR_CALL 
parse_tree__prog_item_pred_proc_id____Unify____pred_pfu_name_arity_pf_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = (MR_Word) (HeadVar__1_1);
  MR_Word Cast_HeadVar2_4 = (MR_Word) (HeadVar__2_2);

  succeeded = parse_tree__prog_item_pred_proc_id____Unify____pred_pfu_name_arity_0_0(Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
parse_tree__prog_item_pred_proc_id____Compare____pred_pfu_name_arity_0_0(
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
    MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 3);
    MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) & (MR_Integer) 3);
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word SubResult1_6;
    MR_Integer Var_17 = (MR_Integer) (ArgX1_4);
    MR_Integer Var_18 = (MR_Integer) (ArgY1_5);

    succeeded = (Var_17 < Var_18);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (Var_17 > Var_18);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 2;
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Integer Var_19 = (MR_Integer) (ArgX3_10);
        MR_Integer Var_20 = (MR_Integer) (ArgY3_11);

        succeeded = (Var_19 < Var_20);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 1;
        else
        {
          succeeded = (Var_19 > Var_20);
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
parse_tree__prog_item_pred_proc_id____Unify____pred_pfu_name_arity_0_0(
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
    MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) & (MR_Integer) 3);
    MR_Word ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 3);
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Integer Var_13;
    MR_Integer Var_14;

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        Var_13 = (MR_Integer) (ArgX3_7);
        Var_14 = (MR_Integer) (ArgY3_8);
        succeeded = (Var_13 == Var_14);
      }
    }
  }
  return succeeded;
}

void MR_CALL 
parse_tree__prog_item_pred_proc_id____Compare____pred_or_proc_pfumm_name_0_0(
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

    parse_tree__prog_item_pred_proc_id____Compare____pred_func_or_unknown_maybe_modes_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mdbcomp__sym_name____Compare____sym_name_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

MR_bool MR_CALL 
parse_tree__prog_item_pred_proc_id____Unify____pred_or_proc_pfumm_name_0_0(
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

    succeeded = parse_tree__prog_item_pred_proc_id____Unify____pred_func_or_unknown_maybe_modes_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX2_5, ArgY2_6);
  }
  return succeeded;
}

void MR_CALL 
parse_tree__prog_item_pred_proc_id____Compare____pred_func_or_unknown_pf_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_4 = (MR_Word) (HeadVar__2_2);
  MR_Word Cast_HeadVar2_5 = (MR_Word) (HeadVar__3_3);
  MR_Integer Var_7 = (MR_Integer) (Cast_HeadVar1_4);
  MR_Integer Var_8 = (MR_Integer) (Cast_HeadVar2_5);

  succeeded = (Var_7 < Var_8);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Var_7 > Var_8);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

MR_bool MR_CALL 
parse_tree__prog_item_pred_proc_id____Unify____pred_func_or_unknown_pf_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = (MR_Word) (HeadVar__1_1);
  MR_Word Cast_HeadVar2_4 = (MR_Word) (HeadVar__2_2);

  succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
parse_tree__prog_item_pred_proc_id____Compare____pred_func_or_unknown_maybe_modes_0_0(
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
            {
              MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
              MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));

              parse_tree__prog_item_pred_proc_id____Compare____modes_or_arity_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
            }
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
              MR_Word ArgX1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
              MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

              parse_tree__prog_item_pred_proc_id____Compare____modes_or_arity_0_0(HeadVar__1_1, ArgX1_6, ArgY1_7);
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
              MR_Word ArgX1_8 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 0))));
              MR_Word ArgY1_9 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, 0))));
              MR_Integer Var_15 = (MR_Integer) (ArgX1_8);
              MR_Integer Var_16 = (MR_Integer) (ArgY1_9);

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
            break;
        }
        break;
    }
}

MR_bool MR_CALL 
parse_tree__prog_item_pred_proc_id____Unify____pred_func_or_unknown_maybe_modes_0_0(
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
          MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
          MR_Word ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
            succeeded = parse_tree__prog_item_pred_proc_id____Unify____modes_or_arity_0_0(ArgX1_3, ArgY1_4);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
          MR_Word ArgY1_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
            succeeded = parse_tree__prog_item_pred_proc_id____Unify____modes_or_arity_0_0(ArgX1_5, ArgY1_6);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, 0))));
          MR_Word ArgY1_8;
          MR_Integer Var_12;
          MR_Integer Var_13;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_8 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 0))));
            Var_12 = (MR_Integer) (ArgX1_7);
            Var_13 = (MR_Integer) (ArgY1_8);
            succeeded = (Var_12 == Var_13);
          }
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
parse_tree__prog_item_pred_proc_id____Compare____pred_func_or_unknown_0_0(
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
parse_tree__prog_item_pred_proc_id____Unify____pred_func_or_unknown_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
parse_tree__prog_item_pred_proc_id____Compare____modes_or_arity_0_0(
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
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    {
      MR_Word ArgX1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
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
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__prog_item_pred_proc_id_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
  }
}

MR_bool MR_CALL 
parse_tree__prog_item_pred_proc_id____Unify____modes_or_arity_0_0(
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
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
  {
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word ArgY1_6;
    MR_Integer Var_11;
    MR_Integer Var_12;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      Var_11 = (MR_Integer) (ArgX1_5);
      Var_12 = (MR_Integer) (ArgY1_6);
      succeeded = (Var_11 == Var_12);
    }
  }
  else
  {
    MR_Word TypeInfo_10_10;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
      TypeInfo_10_10 = (MR_Word) (&parse_tree__prog_item_pred_proc_id_scalar_common_1[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    }
  }
  return succeeded;
}

void MR_CALL 
parse_tree__prog_item_pred_proc_id____Compare____item_maybe_attrs_0_0(
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

    parse_tree__prog_item_pred_proc_id____Compare____item_compiler_attributes_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
  }
}

MR_bool MR_CALL 
parse_tree__prog_item_pred_proc_id____Unify____item_maybe_attrs_0_0(
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
    MR_Integer CastX_11;
    MR_Integer CastY_12;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      CastX_11 = (MR_Integer) (ArgX1_3);
      CastY_12 = (MR_Integer) (ArgY1_4);
      succeeded = (CastX_11 == CastY_12);
      if (succeeded)
        succeeded = MR_TRUE;
      else
      {
        MR_Word ArgX1_9 = (MR_Word) (ArgX1_3);
        MR_Word ArgY1_10 = (MR_Word) (ArgY1_4);

        succeeded = parse_tree__prog_item_pred_proc_id____Unify____compiler_origin_0_0(ArgX1_9, ArgY1_10);
      }
    }
  }
  return succeeded;
}

void MR_CALL 
parse_tree__prog_item_pred_proc_id____Compare____item_compiler_attributes_0_0(
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

    parse_tree__prog_item_pred_proc_id____Compare____compiler_origin_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
  }
}

MR_bool MR_CALL 
parse_tree__prog_item_pred_proc_id____Unify____item_compiler_attributes_0_0(
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

    succeeded = parse_tree__prog_item_pred_proc_id____Unify____compiler_origin_0_0(ArgX1_3, ArgY1_4);
  }
  return succeeded;
}

void MR_CALL 
parse_tree__prog_item_pred_proc_id____Compare____compiler_origin_0_0(
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
              case (MR_Integer) 2:
              case (MR_Integer) 3:
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
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
              MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
              MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
              MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
              MR_Word SubResult1_6;

              parse_tree__prog_data____Compare____class_id_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
              succeeded = (SubResult1_6 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult1_6;
              else
                parse_tree__prog_data____Compare____pf_sym_name_user_arity_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
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
              MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 0))));
              MR_Word ArgY1_10 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, 0))));
              MR_Word ArgX2_12 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__2_2, 1))) & (MR_Integer) 3);
              MR_Word ArgY2_13 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__3_3, 1))) & (MR_Integer) 3);
              MR_Word SubResult1_11;

              parse_tree__prog_data____Compare____type_ctor_0_0(&SubResult1_11, ArgX1_9, ArgY1_10);
              succeeded = (SubResult1_11 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult1_11;
              else
              {
                MR_Integer Var_42 = (MR_Integer) (ArgX2_12);
                MR_Integer Var_43 = (MR_Integer) (ArgY2_13);

                succeeded = (Var_42 < Var_43);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 1;
                else
                {
                  succeeded = (Var_42 > Var_43);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 2;
                  else
                    *HeadVar__1_1 = (MR_Integer) 0;
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
                      MR_Word ArgX1_14 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                      MR_Word ArgY1_15 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));
                      MR_String ArgX2_17 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                      MR_String ArgY2_18 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 2))));
                      MR_Word ArgX3_20 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 3))) & (MR_Integer) 15);
                      MR_Word ArgY3_21 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, 3))) & (MR_Integer) 15);
                      MR_Word SubResult1_16;

                      mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult1_16, ArgX1_14, ArgY1_15);
                      succeeded = (SubResult1_16 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult1_16;
                      else
                      {
                        MR_Word SubResult2_19;

                        mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult2_19, ArgX2_17, ArgY2_18);
                        succeeded = (SubResult2_19 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult2_19;
                        else
                        {
                          MR_Integer Var_40 = (MR_Integer) (ArgX3_20);
                          MR_Integer Var_41 = (MR_Integer) (ArgY3_21);

                          succeeded = (Var_40 < Var_41);
                          if (succeeded)
                            *HeadVar__1_1 = (MR_Integer) 1;
                          else
                          {
                            succeeded = (Var_40 > Var_41);
                            if (succeeded)
                              *HeadVar__1_1 = (MR_Integer) 2;
                            else
                              *HeadVar__1_1 = (MR_Integer) 0;
                          }
                        }
                      }
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
                      MR_Word ArgX1_22 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                      MR_Word ArgY1_23 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));
                      MR_Word ArgX2_25 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 2))) & (MR_Integer) 1);
                      MR_Word ArgY2_26 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, 2))) & (MR_Integer) 1);
                      MR_Word SubResult1_24;

                      parse_tree__prog_data____Compare____pf_sym_name_user_arity_0_0(&SubResult1_24, ArgX1_22, ArgY1_23);
                      succeeded = (SubResult1_24 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult1_24;
                      else
                      {
                        MR_Integer Var_38 = (MR_Integer) (ArgX2_25);
                        MR_Integer Var_39 = (MR_Integer) (ArgY2_26);

                        succeeded = (Var_38 < Var_39);
                        if (succeeded)
                          *HeadVar__1_1 = (MR_Integer) 1;
                        else
                        {
                          succeeded = (Var_38 > Var_39);
                          if (succeeded)
                            *HeadVar__1_1 = (MR_Integer) 2;
                          else
                            *HeadVar__1_1 = (MR_Integer) 0;
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

MR_bool MR_CALL 
parse_tree__prog_item_pred_proc_id____Unify____compiler_origin_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_23 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_24 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_23 == CastY_24);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer CastX_21 = (MR_Integer) (HeadVar__1_1);
          MR_Integer CastY_22 = (MR_Integer) (HeadVar__2_2);

          succeeded = (CastY_22 == CastX_21);
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
            succeeded = parse_tree__prog_data____Unify____class_id_0_0(ArgX1_3, ArgY1_4);
            if (succeeded)
              succeeded = parse_tree__prog_data____Unify____pf_sym_name_user_arity_0_0(ArgX2_5, ArgY2_6);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, 0))));
          MR_Word ArgY1_8;
          MR_Word ArgX2_9 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__1_1, 1))) & (MR_Integer) 3);
          MR_Word ArgY2_10;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_8 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 0))));
            ArgY2_10 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__2_2, 1))) & (MR_Integer) 3);
            succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(ArgX1_7, ArgY1_8);
            if (succeeded)
              succeeded = (ArgX2_9 == ArgY2_10);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgX1_11 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_12;
              MR_String ArgX2_13 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_String ArgY2_14;
              MR_Word ArgX3_15 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, 3))) & (MR_Integer) 15);
              MR_Word ArgY3_16;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_12 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_14 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                ArgY3_16 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 3))) & (MR_Integer) 15);
                succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_11, ArgY1_12);
                if (succeeded)
                {
                  succeeded = (strcmp(ArgX2_13, ArgY2_14) == 0);
                  if (succeeded)
                    succeeded = (ArgX3_15 == ArgY3_16);
                }
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_17 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_18;
              MR_Word ArgX2_19 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, 2))) & (MR_Integer) 1);
              MR_Word ArgY2_20;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_18 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_20 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 2))) & (MR_Integer) 1);
                succeeded = parse_tree__prog_data____Unify____pf_sym_name_user_arity_0_0(ArgX1_17, ArgY1_18);
                if (succeeded)
                  succeeded = (ArgX2_19 == ArgY2_20);
              }
            }
            break;
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
parse_tree__prog_item_pred_proc_id__pfumm_to_maybe_pf_arity_maybe_modes_4_p_0(
  MR_Word PFUMM_5,
  MR_Word * MaybePredOrFunc_6,
  MR_Word * UserArity_7,
  MR_Word * MaybeModes_8)
{
  switch (MR_tag((MR_Word) PFUMM_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word ModesOrArity_23 = ((MR_Word) ((MR_hl_field(0, PFUMM_5, 0))));

        *MaybePredOrFunc_6 = (MR_Word) (MR_mkword(1, &parse_tree__prog_item_pred_proc_id_scalar_common_2[1]));
        if (((MR_tag((MR_Word) ModesOrArity_23)) == (MR_Integer) 1))
        {
          *UserArity_7 = ((MR_Word) ((MR_hl_field(1, ModesOrArity_23, 0))));
          *MaybeModes_8 = (MR_Word) ((MR_Unsigned) 0U);
        }
        else
        {
          MR_Word Modes_15 = ((MR_Word) ((MR_hl_field(0, ModesOrArity_23, 0))));
          MR_Integer NumModes_16;
          MR_Word PredFormArity_17;

          mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_15, &NumModes_16);
          PredFormArity_17 = (MR_Word) (NumModes_16);
          parse_tree__prog_util__user_arity_pred_form_arity_3_p_1((MR_Integer) 0, UserArity_7, PredFormArity_17);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeModes_8 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Modes_15));
          }
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ModesOrArity_9 = ((MR_Word) ((MR_hl_field(1, PFUMM_5, 0))));

        *MaybePredOrFunc_6 = (MR_Word) (MR_mkword(1, &parse_tree__prog_item_pred_proc_id_scalar_common_2[0]));
        if (((MR_tag((MR_Word) ModesOrArity_9)) == (MR_Integer) 1))
        {
          *UserArity_7 = ((MR_Word) ((MR_hl_field(1, ModesOrArity_9, 0))));
          *MaybeModes_8 = (MR_Word) ((MR_Unsigned) 0U);
        }
        else
        {
          MR_Word Modes_11 = ((MR_Word) ((MR_hl_field(0, ModesOrArity_9, 0))));
          MR_Integer NumModes_12;
          MR_Word PredFormArity_13;

          mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_11, &NumModes_12);
          PredFormArity_13 = (MR_Word) (NumModes_12);
          parse_tree__prog_util__user_arity_pred_form_arity_3_p_1((MR_Integer) 1, UserArity_7, PredFormArity_13);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeModes_8 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Modes_11));
          }
        }
      }
      break;
    case (MR_Integer) 2:
      {
        *UserArity_7 = ((MR_Word) ((MR_hl_field(2, PFUMM_5, 0))));
        *MaybePredOrFunc_6 = (MR_Word) ((MR_Unsigned) 0U);
        *MaybeModes_8 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
  }
}

MR_Word MR_CALL 
parse_tree__prog_item_pred_proc_id__maybe_pred_or_func_to_pfu_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__2_2 = (MR_Integer) 2;
  else
  {
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));

    switch (Var_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        HeadVar__2_2 = (MR_Integer) 1;
        break;
      case (MR_Integer) 0:
        HeadVar__2_2 = (MR_Integer) 0;
        break;
    }
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
parse_tree__prog_item_pred_proc_id__pfu_to_maybe_pred_or_func_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;

  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      HeadVar__2_2 = (MR_Word) (MR_mkword(1, &parse_tree__prog_item_pred_proc_id_scalar_common_2[0]));
      break;
    case (MR_Integer) 0:
      HeadVar__2_2 = (MR_Word) (MR_mkword(1, &parse_tree__prog_item_pred_proc_id_scalar_common_2[1]));
      break;
    case (MR_Integer) 2:
      HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
      break;
  }
  return HeadVar__2_2;
}

static MR_bool MR_CALL 
parse_tree__prog_item_pred_proc_id____Unify____compiler_origin_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_item_pred_proc_id____Unify____compiler_origin_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_item_pred_proc_id____Compare____compiler_origin_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__prog_item_pred_proc_id____Compare____compiler_origin_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__prog_item_pred_proc_id____Unify____item_compiler_attributes_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_item_pred_proc_id____Unify____item_compiler_attributes_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_item_pred_proc_id____Compare____item_compiler_attributes_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__prog_item_pred_proc_id____Compare____item_compiler_attributes_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__prog_item_pred_proc_id____Unify____item_maybe_attrs_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_item_pred_proc_id____Unify____item_maybe_attrs_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_item_pred_proc_id____Compare____item_maybe_attrs_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__prog_item_pred_proc_id____Compare____item_maybe_attrs_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__prog_item_pred_proc_id____Unify____modes_or_arity_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_item_pred_proc_id____Unify____modes_or_arity_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_item_pred_proc_id____Compare____modes_or_arity_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__prog_item_pred_proc_id____Compare____modes_or_arity_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__prog_item_pred_proc_id____Unify____pred_func_or_unknown_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_item_pred_proc_id____Unify____pred_func_or_unknown_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_item_pred_proc_id____Compare____pred_func_or_unknown_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__prog_item_pred_proc_id____Compare____pred_func_or_unknown_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__prog_item_pred_proc_id____Unify____pred_func_or_unknown_maybe_modes_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_item_pred_proc_id____Unify____pred_func_or_unknown_maybe_modes_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_item_pred_proc_id____Compare____pred_func_or_unknown_maybe_modes_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__prog_item_pred_proc_id____Compare____pred_func_or_unknown_maybe_modes_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__prog_item_pred_proc_id____Unify____pred_func_or_unknown_pf_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_item_pred_proc_id____Unify____pred_func_or_unknown_pf_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_item_pred_proc_id____Compare____pred_func_or_unknown_pf_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__prog_item_pred_proc_id____Compare____pred_func_or_unknown_pf_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__prog_item_pred_proc_id____Unify____pred_or_proc_pfumm_name_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_item_pred_proc_id____Unify____pred_or_proc_pfumm_name_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_item_pred_proc_id____Compare____pred_or_proc_pfumm_name_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__prog_item_pred_proc_id____Compare____pred_or_proc_pfumm_name_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__prog_item_pred_proc_id____Unify____pred_pfu_name_arity_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_item_pred_proc_id____Unify____pred_pfu_name_arity_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_item_pred_proc_id____Compare____pred_pfu_name_arity_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__prog_item_pred_proc_id____Compare____pred_pfu_name_arity_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__prog_item_pred_proc_id____Unify____pred_pfu_name_arity_pf_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_item_pred_proc_id____Unify____pred_pfu_name_arity_pf_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_item_pred_proc_id____Compare____pred_pfu_name_arity_pf_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__prog_item_pred_proc_id____Compare____pred_pfu_name_arity_pf_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__prog_item_pred_proc_id____Unify____proc_pf_name_arity_mn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_item_pred_proc_id____Unify____proc_pf_name_arity_mn_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_item_pred_proc_id____Compare____proc_pf_name_arity_mn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__prog_item_pred_proc_id____Compare____proc_pf_name_arity_mn_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__prog_item_pred_proc_id____Unify____proc_pf_name_modes_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_item_pred_proc_id____Unify____proc_pf_name_modes_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_item_pred_proc_id____Compare____proc_pf_name_modes_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__prog_item_pred_proc_id____Compare____proc_pf_name_modes_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__parse_tree__prog_item_pred_proc_id__init(void)
{
}

void mercury__parse_tree__prog_item_pred_proc_id__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__type_ctor_info_compiler_origin_0);
  MR_register_type_ctor_info(&parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__type_ctor_info_item_compiler_attributes_0);
  MR_register_type_ctor_info(&parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__type_ctor_info_item_maybe_attrs_0);
  MR_register_type_ctor_info(&parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__type_ctor_info_modes_or_arity_0);
  MR_register_type_ctor_info(&parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__type_ctor_info_pred_func_or_unknown_0);
  MR_register_type_ctor_info(&parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__type_ctor_info_pred_func_or_unknown_maybe_modes_0);
  MR_register_type_ctor_info(&parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__type_ctor_info_pred_func_or_unknown_pf_0);
  MR_register_type_ctor_info(&parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__type_ctor_info_pred_or_proc_pfumm_name_0);
  MR_register_type_ctor_info(&parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__type_ctor_info_pred_pfu_name_arity_0);
  MR_register_type_ctor_info(&parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__type_ctor_info_pred_pfu_name_arity_pf_0);
  MR_register_type_ctor_info(&parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__type_ctor_info_proc_pf_name_arity_mn_0);
  MR_register_type_ctor_info(&parse_tree__prog_item_pred_proc_id__parse_tree__prog_item_pred_proc_id__type_ctor_info_proc_pf_name_modes_0);
}

void mercury__parse_tree__prog_item_pred_proc_id__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__prog_item_pred_proc_id__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module parse_tree.prog_item_pred_proc_id.
