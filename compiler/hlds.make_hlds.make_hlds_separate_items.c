/*
** Automatically generated from `make_hlds_separate_items.m'
** by the Mercury compiler,
** version rotd-2024-12-13
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


// :- module hlds.make_hlds.make_hlds_separate_items.
// :- implementation.

/*
INIT mercury__hlds__make_hlds__make_hlds_separate_items__init
ENDINIT
*/

#include "hlds.make_hlds.make_hlds_separate_items.mih"


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
#include "getopt.mih"
#include "hlds.mih"
#include "int.mih"
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
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "hlds.make_hlds.mih"
#include "hlds.status.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.find_module.mih"
#include "parse_tree.item_util.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "recompilation.item_types.mih"
#include "hlds.make_hlds.make_hlds_types.mih"




static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__make_hlds_separate_items__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_hlds__make_hlds__make_hlds_separate_items__type_ctor_info_int_type_ctor_repns_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__make_hlds_separate_items__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_hlds__make_hlds__make_hlds_separate_items__type_ctor_info_int_type_ctor_repns_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__parse_tree__prog_item__ti_item_type_repn_info_general_1parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0;

static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__make_hlds_separate_items__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__prog_item__ti_item_type_repn_info_general_1parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__pti_cord_1__plain_pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__prog_item__ti_item_type_repn_info_general_1parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0;

static const MR_VA_PseudoTypeInfo_Struct2 hlds__make_hlds__make_hlds_separate_items____vpti_tuple_2__plain_hlds__status__type_ctor_info_item_mercury_status_0__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__pti_cord_1__pseudo___vpti_tuple_2__plain_hlds__status__type_ctor_info_item_mercury_status_0__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__list__pti_list_1__pseudo___vpti_tuple_2__plain_hlds__status__type_ctor_info_item_mercury_status_0__pseudo_1;

static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__make_hlds_separate_items__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__prog_item__ti_item_type_repn_info_general_1parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0;

static const MR_PseudoTypeInfo hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__field_types_int_type_ctor_repns_0_0[2];

static const MR_DuArgLocn hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__field_locns_int_type_ctor_repns_0_0[2];

static const MR_DuFunctorDesc hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__du_functor_desc_int_type_ctor_repns_0_0;

static const MR_DuFunctorDescPtr hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__du_stag_ordered_int_type_ctor_repns_0_0[1];

static const MR_DuPtagLayout hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__du_ptag_ordered_int_type_ctor_repns_0[1];

static const MR_DuFunctorDescPtr hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__du_name_ordered_int_type_ctor_repns_0[1];

static const MR_Integer hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__functor_number_map_int_type_ctor_repns_0[1];

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_avail_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_avail_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1parse_tree__prog_item__type_ctor_info_item_fim_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_sec_sub_list_1parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_sec_sub_list_1parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__parse_tree__prog_item__ti_item_inst_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__ti_item_inst_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__ti_item_inst_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__parse_tree__prog_item__ti_item_mode_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__ti_item_mode_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__ti_item_mode_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_sec_sub_list_1parse_tree__prog_item__type_ctor_info_item_typeclass_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_sec_sub_list_1parse_tree__prog_item__type_ctor_info_item_typeclass_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_instance_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_instance_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_sec_sub_list_1parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_sec_sub_list_1parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_clause_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_clause_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_foreign_proc_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_foreign_proc_info_0;

static const MR_VA_TypeInfo_Struct2 hlds__make_hlds__make_hlds_separate_items____vti_tuple_2hlds__status__type_ctor_info_item_mercury_status_0parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1__vti_tuple_2hlds__status__type_ctor_info_item_mercury_status_0parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1parse_tree__prog_item__type_ctor_info_item_foreign_export_enum_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_decl_pragma_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_decl_pragma_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_decl_marker_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_decl_marker_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1parse_tree__prog_item__type_ctor_info_decl_pragma_type_spec_constr_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1parse_tree__prog_item__type_ctor_info_decl_pragma_type_spec_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1parse_tree__prog_item__type_ctor_info_decl_pragma_termination_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1parse_tree__prog_item__type_ctor_info_decl_pragma_termination2_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1parse_tree__prog_item__type_ctor_info_decl_pragma_struct_sharing_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1parse_tree__prog_item__type_ctor_info_decl_pragma_struct_reuse_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_impl_pragma_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_impl_pragma_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_impl_marker_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_impl_marker_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1parse_tree__prog_item__type_ctor_info_gen_pragma_unused_args_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1parse_tree__prog_item__type_ctor_info_gen_pragma_exceptions_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1parse_tree__prog_item__type_ctor_info_gen_pragma_trailing_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1parse_tree__prog_item__type_ctor_info_gen_pragma_mm_tabling_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_promise_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_promise_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_initialise_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_initialise_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_finalise_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_finalise_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_sec_sub_list_1parse_tree__prog_item__type_ctor_info_item_mutable_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_sec_sub_list_1parse_tree__prog_item__type_ctor_info_item_mutable_info_0;

static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__make_hlds_separate_items__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0hlds__make_hlds__make_hlds_separate_items__type_ctor_info_int_type_ctor_repns_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__list__ti_list_1pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0hlds__make_hlds__make_hlds_separate_items__type_ctor_info_int_type_ctor_repns_0;

static const MR_PseudoTypeInfo hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__field_types_item_accumulator_0_0[34];

static const MR_ConstString hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__field_names_item_accumulator_0_0[34];

static const MR_DuFunctorDesc hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__du_functor_desc_item_accumulator_0_0;

static const MR_DuFunctorDescPtr hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__du_stag_ordered_item_accumulator_0_0[1];

static const MR_DuPtagLayout hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__du_ptag_ordered_item_accumulator_0[1];

static const MR_DuFunctorDescPtr hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__du_name_ordered_item_accumulator_0[1];

static const MR_Integer hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__functor_number_map_item_accumulator_0[1];

static void MR_CALL 
hlds__make_hlds__make_hlds_separate_items____Compare____module_int_type_ctor_repns_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_separate_items____Unify____module_int_type_ctor_repns_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__make_hlds__make_hlds_separate_items____Compare____item_accumulator_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_separate_items____Unify____item_accumulator_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__make_hlds__make_hlds_separate_items____Compare____int_type_ctor_repns_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_separate_items____Unify____int_type_ctor_repns_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__make_hlds__make_hlds_separate_items____Compare____ims_tuple_cord_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_separate_items____Unify____ims_tuple_cord_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__make_hlds__make_hlds_separate_items__acc_parse_tree_trans_opt_3_p_0(
  MR_Word ParseTreeTransOpt_4,
  MR_Word STATE_VARIABLE_Acc_0_56,
  MR_Word * STATE_VARIABLE_Acc_57);

static MR_Box MR_CALL 
hlds__make_hlds__make_hlds_separate_items__acc_parse_tree_plain_opt_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds__make_hlds_separate_items__acc_parse_tree_plain_opt_3_p_0(
  MR_Word ParseTreePlainOpt_4,
  MR_Word STATE_VARIABLE_Acc_0_99,
  MR_Word * STATE_VARIABLE_Acc_100);

static void MR_CALL 
hlds__make_hlds__make_hlds_separate_items__acc_type_repn_spec_3_p_0(
  MR_Word TypeRepnSpec_4,
  MR_Word STATE_VARIABLE_Acc_0_11,
  MR_Word * STATE_VARIABLE_Acc_12);

static void MR_CALL 
hlds__make_hlds__make_hlds_separate_items__acc_int_for_opt_spec_3_p_0(
  MR_Word IntForOptSpec_4,
  MR_Word STATE_VARIABLE_Acc_0_12,
  MR_Word * STATE_VARIABLE_Acc_13);

static void MR_CALL 
hlds__make_hlds__make_hlds_separate_items__acc_indirect_int2_spec_3_p_0(
  MR_Word IndirectInt2Spec_4,
  MR_Word STATE_VARIABLE_Acc_0_8,
  MR_Word * STATE_VARIABLE_Acc_9);

static MR_Box MR_CALL 
hlds__make_hlds__make_hlds_separate_items__acc_parse_tree_int2_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__make_hlds__make_hlds_separate_items__acc_parse_tree_int2_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds__make_hlds_separate_items__acc_parse_tree_int2_4_p_0(
  MR_Word ParseTreeInt2_5,
  MR_Word ReadWhy2_6,
  MR_Word STATE_VARIABLE_Acc_0_95,
  MR_Word * STATE_VARIABLE_Acc_96);

static void MR_CALL 
hlds__make_hlds__make_hlds_separate_items__acc_direct_int1_spec_3_p_0(
  MR_Word DirectInt1Spec_4,
  MR_Word STATE_VARIABLE_Acc_0_8,
  MR_Word * STATE_VARIABLE_Acc_9);

static MR_Box MR_CALL 
hlds__make_hlds__make_hlds_separate_items__acc_parse_tree_int1_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__make_hlds__make_hlds_separate_items__acc_parse_tree_int1_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds__make_hlds_separate_items__acc_parse_tree_int1_4_p_0(
  MR_Word ParseTreeInt1_5,
  MR_Word ReadWhy1_6,
  MR_Word STATE_VARIABLE_Acc_0_108,
  MR_Word * STATE_VARIABLE_Acc_109);

static void MR_CALL 
hlds__make_hlds__make_hlds_separate_items__acc_ancestor_int_spec_3_p_0(
  MR_Word AncestorIntSpec_4,
  MR_Word STATE_VARIABLE_Acc_0_8,
  MR_Word * STATE_VARIABLE_Acc_9);

static MR_Box MR_CALL 
hlds__make_hlds__make_hlds_separate_items__acc_parse_tree_int0_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__make_hlds__make_hlds_separate_items__acc_parse_tree_int0_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds__make_hlds_separate_items__acc_parse_tree_int0_4_p_0(
  MR_Word ParseTreeInt0_5,
  MR_Word ReadWhy0_6,
  MR_Word STATE_VARIABLE_Acc_0_121,
  MR_Word * STATE_VARIABLE_Acc_122);

static void MR_CALL 
hlds__make_hlds__make_hlds_separate_items__acc_type_repn_map_3_p_0(
  MR_Word IntTypeRepns_4,
  MR_Word STATE_VARIABLE_Cord_0_9,
  MR_Word * STATE_VARIABLE_Cord_10);

static void MR_CALL 
hlds__make_hlds__make_hlds_separate_items__acc_int_type_repn_map_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ModuleMap_0_14,
  MR_Word * STATE_VARIABLE_ModuleMap_15);

static void MR_CALL 
hlds__make_hlds__make_hlds_separate_items__separate_items_in_aug_comp_unit_37_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__make_hlds__make_hlds_separate_items__separate_items_in_aug_comp_unit_37_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__make_hlds__make_hlds_separate_items__separate_items_in_aug_comp_unit_37_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__make_hlds__make_hlds_separate_items__separate_items_in_aug_comp_unit_37_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__make_hlds__make_hlds_separate_items__separate_items_in_aug_comp_unit_37_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__make_hlds__make_hlds_separate_items__separate_items_in_aug_comp_unit_37_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__make_hlds__make_hlds_separate_items__separate_items_in_aug_comp_unit_37_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__make_hlds__make_hlds_separate_items__separate_items_in_aug_comp_unit_37_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__make_hlds__make_hlds_separate_items__separate_items_in_aug_comp_unit_37_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
hlds__make_hlds__make_hlds_separate_items__acc_parse_tree_module_src_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__make_hlds__make_hlds_separate_items__acc_parse_tree_module_src_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds__make_hlds_separate_items__acc_parse_tree_module_src_3_p_0(
  MR_Word ParseTreeModuleSrc_4,
  MR_Word STATE_VARIABLE_Acc_0_135,
  MR_Word * STATE_VARIABLE_Acc_136);

static void MR_CALL 
hlds__make_hlds__make_hlds_separate_items__acc_ims_tuple_list_4_p_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ImsItems_0_3,
  MR_Word * STATE_VARIABLE_ImsItems_4);

static void MR_CALL 
hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word ItemMercuryStatus_5,
  MR_Word Items_6,
  MR_Word STATE_VARIABLE_ImsCord_0_11,
  MR_Word * STATE_VARIABLE_ImsCord_12);

static void MR_CALL 
hlds__make_hlds__make_hlds_separate_items__acc_sec_list_4_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word SectionInfo_5,
  MR_Word Items_6,
  MR_Word STATE_VARIABLE_SecCord_0_11,
  MR_Word * STATE_VARIABLE_SecCord_12);

static void MR_CALL 
hlds__make_hlds__make_hlds_separate_items__separate_type_defns_abs_mer_for_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Abs_0_2,
  MR_Word * STATE_VARIABLE_Abs_3,
  MR_Word STATE_VARIABLE_Mer_0_4,
  MR_Word * STATE_VARIABLE_Mer_5,
  MR_Word STATE_VARIABLE_For_0_6,
  MR_Word * STATE_VARIABLE_For_7);

static void MR_CALL 
hlds__make_hlds__make_hlds_separate_items__acc_ims_avails_4_p_0(
  MR_Word ItemMercuryStatus_5,
  MR_Word Avails_6,
  MR_Word STATE_VARIABLE_AccAvails_0_11,
  MR_Word * STATE_VARIABLE_AccAvails_12);

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_separate_items____Unify____ims_tuple_cord_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
hlds__make_hlds__make_hlds_separate_items____Compare____ims_tuple_cord_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_separate_items____Unify____ims_tuple_item_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
hlds__make_hlds__make_hlds_separate_items____Compare____ims_tuple_item_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_separate_items____Unify____ims_tuple_list_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
hlds__make_hlds__make_hlds_separate_items____Compare____ims_tuple_list_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_separate_items____Unify____int_type_ctor_repns_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__make_hlds_separate_items____Compare____int_type_ctor_repns_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_separate_items____Unify____item_accumulator_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__make_hlds_separate_items____Compare____item_accumulator_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_separate_items____Unify____module_int_type_ctor_repns_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__make_hlds_separate_items____Compare____module_int_type_ctor_repns_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__make_hlds__make_hlds_separate_items_scalar_common_1[59][2];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_separate_items_scalar_common_2[1][4];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_separate_items_scalar_common_3[22][3];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_separate_items_scalar_common_4[6][1];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_separate_items_scalar_common_5[1][5];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_separate_items_scalar_common_6[9][6];


struct hlds__make_hlds__make_hlds_separate_items__vector_common_type_7_0_s {
  const MR_Integer hlds__make_hlds__make_hlds_separate_items__vector_common_type_7_0__vct_7_f_0;
};

static /* final */ const struct hlds__make_hlds__make_hlds_separate_items__vector_common_type_7_0_s hlds__make_hlds__make_hlds_separate_items_vector_common_7[8];

struct hlds__make_hlds__make_hlds_separate_items__vector_common_type_8_0_s {
  const MR_Word hlds__make_hlds__make_hlds_separate_items__vector_common_type_8_0__vct_8_f_0;
  const MR_Word hlds__make_hlds__make_hlds_separate_items__vector_common_type_8_0__vct_8_f_1;
};

static /* final */ const struct hlds__make_hlds__make_hlds_separate_items__vector_common_type_8_0_s hlds__make_hlds__make_hlds_separate_items_vector_common_8[4];



static /* final */ const MR_Box hlds__make_hlds__make_hlds_separate_items_scalar_common_1[59][2] = {
  /* row   0 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_ims_sub_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_sec_sub_list_1)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[1]))
  },
  /* row   3 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_ims_sub_list_1)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[3]))
  },
  /* row   5 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_ims_sub_list_1)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[5]))
  },
  /* row   7 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_sec_sub_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0))
  },
  /* row   8 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_ims_sub_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0))
  },
  /* row   9 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_sec_sub_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0))
  },
  /* row  10 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_ims_sub_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0))
  },
  /* row  11 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_ims_sub_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0))
  },
  /* row  12 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_ims_sub_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_proc_info_0))
  },
  /* row  13 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_ims_sub_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_pragma_info_0))
  },
  /* row  14 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_ims_sub_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_marker_info_0))
  },
  /* row  15 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_ims_sub_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_impl_pragma_info_0))
  },
  /* row  16 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_ims_sub_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_impl_marker_info_0))
  },
  /* row  17 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_ims_sub_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0))
  },
  /* row  18 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_ims_sub_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_initialise_info_0))
  },
  /* row  19 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_ims_sub_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_finalise_info_0))
  },
  /* row  20 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_sec_sub_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0))
  },
  /* row  21 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_repn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0))
  },
  /* row  22 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_3[2]))
  },
  /* row  23 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[0]))
  },
  /* row  24 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0))
  },
  /* row  25 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[2]))
  },
  /* row  26 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[4]))
  },
  /* row  27 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[6]))
  },
  /* row  28 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[7]))
  },
  /* row  29 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[8]))
  },
  /* row  30 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[9]))
  },
  /* row  31 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[10]))
  },
  /* row  32 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[11]))
  },
  /* row  33 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[12]))
  },
  /* row  34 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_2[0]))
  },
  /* row  35 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_export_enum_info_0))
  },
  /* row  36 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[13]))
  },
  /* row  37 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[14]))
  },
  /* row  38 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_type_spec_constr_info_0))
  },
  /* row  39 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_type_spec_info_0))
  },
  /* row  40 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_termination_info_0))
  },
  /* row  41 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_termination2_info_0))
  },
  /* row  42 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_struct_sharing_info_0))
  },
  /* row  43 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_struct_reuse_info_0))
  },
  /* row  44 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[15]))
  },
  /* row  45 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[16]))
  },
  /* row  46 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_gen_pragma_unused_args_info_0))
  },
  /* row  47 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_gen_pragma_exceptions_info_0))
  },
  /* row  48 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_gen_pragma_trailing_info_0))
  },
  /* row  49 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_gen_pragma_mm_tabling_info_0))
  },
  /* row  50 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[17]))
  },
  /* row  51 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[18]))
  },
  /* row  52 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[19]))
  },
  /* row  53 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[20]))
  },
  /* row  54 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_3[0]))
  },
  /* row  55 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_4[0])),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row  56 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_4[1])),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row  57 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_4[2])),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row  58 */
  {
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__make_hlds_separate_items_scalar_common_4[5]))),
    (MR_Box) ((MR_Unsigned) 0U)
  },
};

static /* final */ const MR_Box hlds__make_hlds__make_hlds_separate_items_scalar_common_2[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_item_mercury_status_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__make_hlds_separate_items_scalar_common_3[22][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__type_ctor_info_int_type_ctor_repns_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__type_ctor_info_int_type_ctor_repns_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[21]))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[21]))
  },
  /* row   4 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_5[0])),
    ((MR_Box) (hlds__make_hlds__make_hlds_separate_items__acc_parse_tree_module_src_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_5[0])),
    ((MR_Box) (hlds__make_hlds__make_hlds_separate_items__acc_parse_tree_module_src_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_6[0])),
    ((MR_Box) (hlds__make_hlds__make_hlds_separate_items__separate_items_in_aug_comp_unit_37_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_6[1])),
    ((MR_Box) (hlds__make_hlds__make_hlds_separate_items__separate_items_in_aug_comp_unit_37_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_6[2])),
    ((MR_Box) (hlds__make_hlds__make_hlds_separate_items__separate_items_in_aug_comp_unit_37_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_6[3])),
    ((MR_Box) (hlds__make_hlds__make_hlds_separate_items__separate_items_in_aug_comp_unit_37_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_6[4])),
    ((MR_Box) (hlds__make_hlds__make_hlds_separate_items__separate_items_in_aug_comp_unit_37_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_6[5])),
    ((MR_Box) (hlds__make_hlds__make_hlds_separate_items__separate_items_in_aug_comp_unit_37_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  12 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_6[6])),
    ((MR_Box) (hlds__make_hlds__make_hlds_separate_items__separate_items_in_aug_comp_unit_37_p_0_7)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  13 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_6[7])),
    ((MR_Box) (hlds__make_hlds__make_hlds_separate_items__separate_items_in_aug_comp_unit_37_p_0_8)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  14 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_6[8])),
    ((MR_Box) (hlds__make_hlds__make_hlds_separate_items__separate_items_in_aug_comp_unit_37_p_0_9)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  15 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_5[0])),
    ((MR_Box) (hlds__make_hlds__make_hlds_separate_items__acc_parse_tree_int0_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  16 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_5[0])),
    ((MR_Box) (hlds__make_hlds__make_hlds_separate_items__acc_parse_tree_int0_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  17 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_5[0])),
    ((MR_Box) (hlds__make_hlds__make_hlds_separate_items__acc_parse_tree_int1_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  18 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_5[0])),
    ((MR_Box) (hlds__make_hlds__make_hlds_separate_items__acc_parse_tree_int1_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  19 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_5[0])),
    ((MR_Box) (hlds__make_hlds__make_hlds_separate_items__acc_parse_tree_int2_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  20 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_5[0])),
    ((MR_Box) (hlds__make_hlds__make_hlds_separate_items__acc_parse_tree_int2_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  21 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_5[0])),
    ((MR_Box) (hlds__make_hlds__make_hlds_separate_items__acc_parse_tree_plain_opt_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__make_hlds_separate_items_scalar_common_4[6][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 2U) },
  /* row   1 */
  { (MR_Box) ((MR_Unsigned) 0U) },
  /* row   2 */
  { (MR_Box) ((MR_Unsigned) 1U) },
  /* row   3 */
  { (MR_Box) ((MR_Unsigned) 3U) },
  /* row   4 */
  { (MR_Box) ((MR_Unsigned) 4U) },
  /* row   5 */
  { ((MR_Box) ((MR_Unsigned) 4U)) },
};

static /* final */ const MR_Box hlds__make_hlds__make_hlds_separate_items_scalar_common_5[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__make_hlds_separate_items_scalar_common_6[9][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_ancestor_int_spec_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__type_ctor_info_item_accumulator_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__type_ctor_info_item_accumulator_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_direct_int1_spec_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__type_ctor_info_item_accumulator_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__type_ctor_info_item_accumulator_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_indirect_int2_spec_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__type_ctor_info_item_accumulator_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__type_ctor_info_item_accumulator_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_for_opt_spec_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__type_ctor_info_item_accumulator_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__type_ctor_info_item_accumulator_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_plain_opt_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__type_ctor_info_item_accumulator_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__type_ctor_info_item_accumulator_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_trans_opt_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__type_ctor_info_item_accumulator_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__type_ctor_info_item_accumulator_0))
  },
  /* row   6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_repn_spec_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__type_ctor_info_item_accumulator_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__type_ctor_info_item_accumulator_0))
  },
  /* row   7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_hlds__make_hlds__make_hlds_separate_items__type_ctor_info_int_type_ctor_repns_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_hlds__make_hlds__make_hlds_separate_items__type_ctor_info_int_type_ctor_repns_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_hlds__make_hlds__make_hlds_separate_items__type_ctor_info_int_type_ctor_repns_0))
  },
  /* row   8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__type_ctor_info_int_type_ctor_repns_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items__cord__pti_cord_1__plain_pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__prog_item__ti_item_type_repn_info_general_1parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items__cord__pti_cord_1__plain_pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__prog_item__ti_item_type_repn_info_general_1parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0))
  },
};


static /* final */ const struct hlds__make_hlds__make_hlds_separate_items__vector_common_type_7_0_s hlds__make_hlds__make_hlds_separate_items_vector_common_7[8] = {
  /* row   0 */   { (MR_Integer) 0 },
  /* row   1 */   { (MR_Integer) 3 },
  /* row   2 */   { (MR_Integer) 2 },
  /* row   3 */   { (MR_Integer) 1 },
  /* row   4 */   { (MR_Integer) 0 },
  /* row   5 */   { (MR_Integer) 3 },
  /* row   6 */   { (MR_Integer) 2 },
  /* row   7 */   { (MR_Integer) 1 },
};

static /* final */ const struct hlds__make_hlds__make_hlds_separate_items__vector_common_type_8_0_s hlds__make_hlds__make_hlds_separate_items_vector_common_8[4] = {
  /* row   0 */
  {
    (MR_Word) (MR_mkword(1, &hlds__make_hlds__make_hlds_separate_items_scalar_common_4[2])),
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row   1 */
  {
    (MR_Word) (MR_mkword(1, &hlds__make_hlds__make_hlds_separate_items_scalar_common_4[1])),
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row   2 */
  {
    (MR_Word) ((MR_Unsigned) 0U),
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row   3 */
  {
    (MR_Word) ((MR_Unsigned) 4U),
    (MR_Word) ((MR_Unsigned) 4U)
  },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__make_hlds_separate_items__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_hlds__make_hlds__make_hlds_separate_items__type_ctor_info_int_type_ctor_repns_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__type_ctor_info_int_type_ctor_repns_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__make_hlds_separate_items__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_hlds__make_hlds__make_hlds_separate_items__type_ctor_info_int_type_ctor_repns_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__type_ctor_info_int_type_ctor_repns_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__parse_tree__prog_item__ti_item_type_repn_info_general_1parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_repn_info_general_1,
  { (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0) }
};

static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__make_hlds_separate_items__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__prog_item__ti_item_type_repn_info_general_1parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_TypeInfo) (&hlds__make_hlds__make_hlds_separate_items__parse_tree__prog_item__ti_item_type_repn_info_general_1parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__pti_cord_1__plain_pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__prog_item__ti_item_type_repn_info_general_1parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_separate_items__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__prog_item__ti_item_type_repn_info_general_1parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0) }
};

static const MR_VA_PseudoTypeInfo_Struct2 hlds__make_hlds__make_hlds_separate_items____vpti_tuple_2__plain_hlds__status__type_ctor_info_item_mercury_status_0__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (&hlds__status__hlds__status__type_ctor_info_item_mercury_status_0),
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__pti_cord_1__pseudo___vpti_tuple_2__plain_hlds__status__type_ctor_info_item_mercury_status_0__pseudo_1 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_separate_items____vpti_tuple_2__plain_hlds__status__type_ctor_info_item_mercury_status_0__pseudo_1) }
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__type_ctor_info_ims_tuple_cord_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (hlds__make_hlds__make_hlds_separate_items____Unify____ims_tuple_cord_1_0_10001)),
  ((MR_Box) (hlds__make_hlds__make_hlds_separate_items____Compare____ims_tuple_cord_1_0_10001)),
  (MR_String) "hlds.make_hlds.make_hlds_separate_items",
  (MR_String) "ims_tuple_cord",
  { NULL },
  { (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_separate_items__cord__pti_cord_1__pseudo___vpti_tuple_2__plain_hlds__status__type_ctor_info_item_mercury_status_0__pseudo_1) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__type_ctor_info_ims_tuple_item_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (hlds__make_hlds__make_hlds_separate_items____Unify____ims_tuple_item_1_0_10001)),
  ((MR_Box) (hlds__make_hlds__make_hlds_separate_items____Compare____ims_tuple_item_1_0_10001)),
  (MR_String) "hlds.make_hlds.make_hlds_separate_items",
  (MR_String) "ims_tuple_item",
  { NULL },
  { (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_separate_items____vpti_tuple_2__plain_hlds__status__type_ctor_info_item_mercury_status_0__pseudo_1) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__list__pti_list_1__pseudo___vpti_tuple_2__plain_hlds__status__type_ctor_info_item_mercury_status_0__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_separate_items____vpti_tuple_2__plain_hlds__status__type_ctor_info_item_mercury_status_0__pseudo_1) }
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__type_ctor_info_ims_tuple_list_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (hlds__make_hlds__make_hlds_separate_items____Unify____ims_tuple_list_1_0_10001)),
  ((MR_Box) (hlds__make_hlds__make_hlds_separate_items____Compare____ims_tuple_list_1_0_10001)),
  (MR_String) "hlds.make_hlds.make_hlds_separate_items",
  (MR_String) "ims_tuple_list",
  { NULL },
  { (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_separate_items__list__pti_list_1__pseudo___vpti_tuple_2__plain_hlds__status__type_ctor_info_item_mercury_status_0__pseudo_1) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__make_hlds_separate_items__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__prog_item__ti_item_type_repn_info_general_1parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_TypeInfo) (&hlds__make_hlds__make_hlds_separate_items__parse_tree__prog_item__ti_item_type_repn_info_general_1parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0)
  }
};

static const MR_PseudoTypeInfo hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__field_types_int_type_ctor_repns_0_0[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_int_file_kind_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_separate_items__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__prog_item__ti_item_type_repn_info_general_1parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0)
};

static const MR_DuArgLocn hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__field_locns_int_type_ctor_repns_0_0[2] = {
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

static const MR_DuFunctorDesc hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__du_functor_desc_int_type_ctor_repns_0_0 = {
  (MR_String) "int_type_ctor_repns",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__field_types_int_type_ctor_repns_0_0,
  NULL,
  hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__field_locns_int_type_ctor_repns_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__du_stag_ordered_int_type_ctor_repns_0_0[1] = { &hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__du_functor_desc_int_type_ctor_repns_0_0 };

static const MR_DuPtagLayout hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__du_ptag_ordered_int_type_ctor_repns_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__du_stag_ordered_int_type_ctor_repns_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__du_name_ordered_int_type_ctor_repns_0[1] = { &hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__du_functor_desc_int_type_ctor_repns_0_0 };

static const MR_Integer hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__functor_number_map_int_type_ctor_repns_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__type_ctor_info_int_type_ctor_repns_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__make_hlds__make_hlds_separate_items____Unify____int_type_ctor_repns_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__make_hlds_separate_items____Compare____int_type_ctor_repns_0_0_10001)),
  (MR_String) "hlds.make_hlds.make_hlds_separate_items",
  (MR_String) "int_type_ctor_repns",
  { hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__du_name_ordered_int_type_ctor_repns_0 },
  { hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__du_ptag_ordered_int_type_ctor_repns_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__functor_number_map_int_type_ctor_repns_0,

};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_avail_0 = {
  &hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_ims_sub_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_avail_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_TypeInfo) (&hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_avail_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1parse_tree__prog_item__type_ctor_info_item_fim_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_sec_sub_list_1parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0 = {
  &hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_sec_sub_list_1,
  { (MR_TypeInfo) (&hlds__make_hlds__make_hlds_separate_items__parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_sec_sub_list_1parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_TypeInfo) (&hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_sec_sub_list_1parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__parse_tree__prog_item__ti_item_inst_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_general_1,
  { (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__ti_item_inst_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0 = {
  &hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_ims_sub_list_1,
  { (MR_TypeInfo) (&hlds__make_hlds__make_hlds_separate_items__parse_tree__prog_item__ti_item_inst_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__ti_item_inst_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_TypeInfo) (&hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__ti_item_inst_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__parse_tree__prog_item__ti_item_mode_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_general_1,
  { (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__ti_item_mode_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0 = {
  &hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_ims_sub_list_1,
  { (MR_TypeInfo) (&hlds__make_hlds__make_hlds_separate_items__parse_tree__prog_item__ti_item_mode_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__ti_item_mode_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_TypeInfo) (&hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__ti_item_mode_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_sec_sub_list_1parse_tree__prog_item__type_ctor_info_item_typeclass_info_0 = {
  &hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_sec_sub_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_sec_sub_list_1parse_tree__prog_item__type_ctor_info_item_typeclass_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_TypeInfo) (&hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_sec_sub_list_1parse_tree__prog_item__type_ctor_info_item_typeclass_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_instance_info_0 = {
  &hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_ims_sub_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_instance_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_TypeInfo) (&hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_instance_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_sec_sub_list_1parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0 = {
  &hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_sec_sub_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_sec_sub_list_1parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_TypeInfo) (&hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_sec_sub_list_1parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0 = {
  &hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_ims_sub_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_TypeInfo) (&hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_clause_info_0 = {
  &hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_ims_sub_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_clause_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_TypeInfo) (&hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_clause_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_foreign_proc_info_0 = {
  &hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_ims_sub_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_proc_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_foreign_proc_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_TypeInfo) (&hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_foreign_proc_info_0) }
};

static const MR_VA_TypeInfo_Struct2 hlds__make_hlds__make_hlds_separate_items____vti_tuple_2hlds__status__type_ctor_info_item_mercury_status_0parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 2,
  {
    (MR_TypeInfo) (&hlds__status__hlds__status__type_ctor_info_item_mercury_status_0),
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1__vti_tuple_2hlds__status__type_ctor_info_item_mercury_status_0parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_TypeInfo) (&hlds__make_hlds__make_hlds_separate_items____vti_tuple_2hlds__status__type_ctor_info_item_mercury_status_0parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1parse_tree__prog_item__type_ctor_info_item_foreign_export_enum_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_export_enum_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_decl_pragma_info_0 = {
  &hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_ims_sub_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_pragma_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_decl_pragma_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_TypeInfo) (&hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_decl_pragma_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_decl_marker_info_0 = {
  &hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_ims_sub_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_marker_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_decl_marker_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_TypeInfo) (&hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_decl_marker_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1parse_tree__prog_item__type_ctor_info_decl_pragma_type_spec_constr_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_type_spec_constr_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1parse_tree__prog_item__type_ctor_info_decl_pragma_type_spec_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_type_spec_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1parse_tree__prog_item__type_ctor_info_decl_pragma_termination_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_termination_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1parse_tree__prog_item__type_ctor_info_decl_pragma_termination2_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_termination2_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1parse_tree__prog_item__type_ctor_info_decl_pragma_struct_sharing_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_struct_sharing_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1parse_tree__prog_item__type_ctor_info_decl_pragma_struct_reuse_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_struct_reuse_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_impl_pragma_info_0 = {
  &hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_ims_sub_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_impl_pragma_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_impl_pragma_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_TypeInfo) (&hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_impl_pragma_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_impl_marker_info_0 = {
  &hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_ims_sub_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_impl_marker_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_impl_marker_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_TypeInfo) (&hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_impl_marker_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1parse_tree__prog_item__type_ctor_info_gen_pragma_unused_args_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_gen_pragma_unused_args_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1parse_tree__prog_item__type_ctor_info_gen_pragma_exceptions_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_gen_pragma_exceptions_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1parse_tree__prog_item__type_ctor_info_gen_pragma_trailing_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_gen_pragma_trailing_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1parse_tree__prog_item__type_ctor_info_gen_pragma_mm_tabling_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_gen_pragma_mm_tabling_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_promise_info_0 = {
  &hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_ims_sub_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_promise_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_TypeInfo) (&hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_promise_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_initialise_info_0 = {
  &hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_ims_sub_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_initialise_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_initialise_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_TypeInfo) (&hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_initialise_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_finalise_info_0 = {
  &hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_ims_sub_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_finalise_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_finalise_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_TypeInfo) (&hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_finalise_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_sec_sub_list_1parse_tree__prog_item__type_ctor_info_item_mutable_info_0 = {
  &hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_sec_sub_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_sec_sub_list_1parse_tree__prog_item__type_ctor_info_item_mutable_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_TypeInfo) (&hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_sec_sub_list_1parse_tree__prog_item__type_ctor_info_item_mutable_info_0) }
};

static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__make_hlds_separate_items__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0hlds__make_hlds__make_hlds_separate_items__type_ctor_info_int_type_ctor_repns_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__type_ctor_info_int_type_ctor_repns_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__list__ti_list_1pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0hlds__make_hlds__make_hlds_separate_items__type_ctor_info_int_type_ctor_repns_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&hlds__make_hlds__make_hlds_separate_items__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0hlds__make_hlds__make_hlds_separate_items__type_ctor_info_int_type_ctor_repns_0) }
};

static const MR_PseudoTypeInfo hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__field_types_item_accumulator_0_0[34] = {
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_avail_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1parse_tree__prog_item__type_ctor_info_item_fim_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_sec_sub_list_1parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_sec_sub_list_1parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_sec_sub_list_1parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__ti_item_inst_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__ti_item_mode_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_sec_sub_list_1parse_tree__prog_item__type_ctor_info_item_typeclass_info_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_instance_info_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_sec_sub_list_1parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_clause_info_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_foreign_proc_info_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1__vti_tuple_2hlds__status__type_ctor_info_item_mercury_status_0parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1parse_tree__prog_item__type_ctor_info_item_foreign_export_enum_info_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_decl_pragma_info_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_decl_marker_info_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1parse_tree__prog_item__type_ctor_info_decl_pragma_type_spec_constr_info_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1parse_tree__prog_item__type_ctor_info_decl_pragma_type_spec_info_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1parse_tree__prog_item__type_ctor_info_decl_pragma_termination_info_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1parse_tree__prog_item__type_ctor_info_decl_pragma_termination2_info_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1parse_tree__prog_item__type_ctor_info_decl_pragma_struct_sharing_info_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1parse_tree__prog_item__type_ctor_info_decl_pragma_struct_reuse_info_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_impl_pragma_info_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_impl_marker_info_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1parse_tree__prog_item__type_ctor_info_gen_pragma_unused_args_info_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1parse_tree__prog_item__type_ctor_info_gen_pragma_exceptions_info_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1parse_tree__prog_item__type_ctor_info_gen_pragma_trailing_info_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1parse_tree__prog_item__type_ctor_info_gen_pragma_mm_tabling_info_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_promise_info_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_initialise_info_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_finalise_info_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_sec_sub_list_1parse_tree__prog_item__type_ctor_info_item_mutable_info_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_separate_items__list__ti_list_1pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0hlds__make_hlds__make_hlds_separate_items__type_ctor_info_int_type_ctor_repns_0)
};

static const MR_ConstString hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__field_names_item_accumulator_0_0[34] = {
  (MR_String) "ia_avails",
  (MR_String) "ia_fims",
  (MR_String) "ia_type_defns_abs",
  (MR_String) "ia_type_defns_mer",
  (MR_String) "ia_type_defns_for",
  (MR_String) "ia_inst_defns",
  (MR_String) "ia_mode_defns",
  (MR_String) "ia_typeclasses",
  (MR_String) "ia_instances",
  (MR_String) "ia_pred_decls",
  (MR_String) "ia_mode_decls",
  (MR_String) "ia_clauses",
  (MR_String) "ia_foreign_procs",
  (MR_String) "ia_foreign_enums",
  (MR_String) "ia_fees",
  (MR_String) "ia_decl_pragmas",
  (MR_String) "ia_decl_marker",
  (MR_String) "ia_decl_type_spec_constr",
  (MR_String) "ia_decl_type_spec",
  (MR_String) "ia_decl_term",
  (MR_String) "ia_decl_term2",
  (MR_String) "ia_decl_str_sharing",
  (MR_String) "ia_decl_str_reuse",
  (MR_String) "ia_impl_pragmas",
  (MR_String) "ia_impl_marker",
  (MR_String) "ia_gen_unused_args",
  (MR_String) "ia_gen_exceptions",
  (MR_String) "ia_gen_trailing",
  (MR_String) "ia_gen_mm_tabling",
  (MR_String) "ia_promises",
  (MR_String) "ia_initialises",
  (MR_String) "ia_finalises",
  (MR_String) "ia_mutables",
  (MR_String) "ia_type_repns"
};

static const MR_DuFunctorDesc hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__du_functor_desc_item_accumulator_0_0 = {
  (MR_String) "item_accumulator",
  INT16_C(34),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__field_types_item_accumulator_0_0,
  hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__field_names_item_accumulator_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__du_stag_ordered_item_accumulator_0_0[1] = { &hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__du_functor_desc_item_accumulator_0_0 };

static const MR_DuPtagLayout hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__du_ptag_ordered_item_accumulator_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__du_stag_ordered_item_accumulator_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__du_name_ordered_item_accumulator_0[1] = { &hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__du_functor_desc_item_accumulator_0_0 };

static const MR_Integer hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__functor_number_map_item_accumulator_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__type_ctor_info_item_accumulator_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__make_hlds__make_hlds_separate_items____Unify____item_accumulator_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__make_hlds_separate_items____Compare____item_accumulator_0_0_10001)),
  (MR_String) "hlds.make_hlds.make_hlds_separate_items",
  (MR_String) "item_accumulator",
  { hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__du_name_ordered_item_accumulator_0 },
  { hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__du_ptag_ordered_item_accumulator_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__functor_number_map_item_accumulator_0,

};

const MR_TypeCtorInfo_Struct hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__type_ctor_info_module_int_type_ctor_repns_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__make_hlds__make_hlds_separate_items____Unify____module_int_type_ctor_repns_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__make_hlds_separate_items____Compare____module_int_type_ctor_repns_0_0_10001)),
  (MR_String) "hlds.make_hlds.make_hlds_separate_items",
  (MR_String) "module_int_type_ctor_repns",
  { NULL },
  { (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_separate_items__list__ti_list_1pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0hlds__make_hlds__make_hlds_separate_items__type_ctor_info_int_type_ctor_repns_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static void MR_CALL 
hlds__make_hlds__make_hlds_separate_items____Compare____module_int_type_ctor_repns_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[54]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_separate_items____Unify____module_int_type_ctor_repns_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[54]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__make_hlds_separate_items____Compare____item_accumulator_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_105 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_106 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_105 == CastY_106);
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
    MR_Word ArgX9_28 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 8))));
    MR_Word ArgY9_29 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 8))));
    MR_Word ArgX10_31 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 9))));
    MR_Word ArgY10_32 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 9))));
    MR_Word ArgX11_34 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 10))));
    MR_Word ArgY11_35 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 10))));
    MR_Word ArgX12_37 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 11))));
    MR_Word ArgY12_38 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 11))));
    MR_Word ArgX13_40 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 12))));
    MR_Word ArgY13_41 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 12))));
    MR_Word ArgX14_43 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 13))));
    MR_Word ArgY14_44 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 13))));
    MR_Word ArgX15_46 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 14))));
    MR_Word ArgY15_47 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 14))));
    MR_Word ArgX16_49 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 15))));
    MR_Word ArgY16_50 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 15))));
    MR_Word ArgX17_52 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 16))));
    MR_Word ArgY17_53 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 16))));
    MR_Word ArgX18_55 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 17))));
    MR_Word ArgY18_56 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 17))));
    MR_Word ArgX19_58 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 18))));
    MR_Word ArgY19_59 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 18))));
    MR_Word ArgX20_61 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 19))));
    MR_Word ArgY20_62 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 19))));
    MR_Word ArgX21_64 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 20))));
    MR_Word ArgY21_65 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 20))));
    MR_Word ArgX22_67 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 21))));
    MR_Word ArgY22_68 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 21))));
    MR_Word ArgX23_70 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 22))));
    MR_Word ArgY23_71 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 22))));
    MR_Word ArgX24_73 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 23))));
    MR_Word ArgY24_74 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 23))));
    MR_Word ArgX25_76 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 24))));
    MR_Word ArgY25_77 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 24))));
    MR_Word ArgX26_79 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 25))));
    MR_Word ArgY26_80 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 25))));
    MR_Word ArgX27_82 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 26))));
    MR_Word ArgY27_83 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 26))));
    MR_Word ArgX28_85 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 27))));
    MR_Word ArgY28_86 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 27))));
    MR_Word ArgX29_88 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 28))));
    MR_Word ArgY29_89 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 28))));
    MR_Word ArgX30_91 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 29))));
    MR_Word ArgY30_92 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 29))));
    MR_Word ArgX31_94 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 30))));
    MR_Word ArgY31_95 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 30))));
    MR_Word ArgX32_97 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 31))));
    MR_Word ArgY32_98 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 31))));
    MR_Word ArgX33_100 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 32))));
    MR_Word ArgY33_101 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 32))));
    MR_Word ArgX34_103 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 33))));
    MR_Word ArgY34_104 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 33))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[23]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[24]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[25]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[25]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[25]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[26]), &SubResult6_21, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
              succeeded = (SubResult6_21 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
              {
                MR_Word SubResult7_24;

                mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[27]), &SubResult7_24, ((MR_Box) (ArgX7_22)), ((MR_Box) (ArgY7_23)));
                succeeded = (SubResult7_24 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult7_24;
                else
                {
                  MR_Word SubResult8_27;

                  mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[28]), &SubResult8_27, ((MR_Box) (ArgX8_25)), ((MR_Box) (ArgY8_26)));
                  succeeded = (SubResult8_27 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult8_27;
                  else
                  {
                    MR_Word SubResult9_30;

                    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[29]), &SubResult9_30, ((MR_Box) (ArgX9_28)), ((MR_Box) (ArgY9_29)));
                    succeeded = (SubResult9_30 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult9_30;
                    else
                    {
                      MR_Word SubResult10_33;

                      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[30]), &SubResult10_33, ((MR_Box) (ArgX10_31)), ((MR_Box) (ArgY10_32)));
                      succeeded = (SubResult10_33 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult10_33;
                      else
                      {
                        MR_Word SubResult11_36;

                        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[31]), &SubResult11_36, ((MR_Box) (ArgX11_34)), ((MR_Box) (ArgY11_35)));
                        succeeded = (SubResult11_36 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult11_36;
                        else
                        {
                          MR_Word SubResult12_39;

                          mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[32]), &SubResult12_39, ((MR_Box) (ArgX12_37)), ((MR_Box) (ArgY12_38)));
                          succeeded = (SubResult12_39 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult12_39;
                          else
                          {
                            MR_Word SubResult13_42;

                            mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[33]), &SubResult13_42, ((MR_Box) (ArgX13_40)), ((MR_Box) (ArgY13_41)));
                            succeeded = (SubResult13_42 != (MR_Integer) 0);
                            if (succeeded)
                              *HeadVar__1_1 = SubResult13_42;
                            else
                            {
                              MR_Word SubResult14_45;

                              mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[34]), &SubResult14_45, ((MR_Box) (ArgX14_43)), ((MR_Box) (ArgY14_44)));
                              succeeded = (SubResult14_45 != (MR_Integer) 0);
                              if (succeeded)
                                *HeadVar__1_1 = SubResult14_45;
                              else
                              {
                                MR_Word SubResult15_48;

                                mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[35]), &SubResult15_48, ((MR_Box) (ArgX15_46)), ((MR_Box) (ArgY15_47)));
                                succeeded = (SubResult15_48 != (MR_Integer) 0);
                                if (succeeded)
                                  *HeadVar__1_1 = SubResult15_48;
                                else
                                {
                                  MR_Word SubResult16_51;

                                  mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[36]), &SubResult16_51, ((MR_Box) (ArgX16_49)), ((MR_Box) (ArgY16_50)));
                                  succeeded = (SubResult16_51 != (MR_Integer) 0);
                                  if (succeeded)
                                    *HeadVar__1_1 = SubResult16_51;
                                  else
                                  {
                                    MR_Word SubResult17_54;

                                    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[37]), &SubResult17_54, ((MR_Box) (ArgX17_52)), ((MR_Box) (ArgY17_53)));
                                    succeeded = (SubResult17_54 != (MR_Integer) 0);
                                    if (succeeded)
                                      *HeadVar__1_1 = SubResult17_54;
                                    else
                                    {
                                      MR_Word SubResult18_57;

                                      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[38]), &SubResult18_57, ((MR_Box) (ArgX18_55)), ((MR_Box) (ArgY18_56)));
                                      succeeded = (SubResult18_57 != (MR_Integer) 0);
                                      if (succeeded)
                                        *HeadVar__1_1 = SubResult18_57;
                                      else
                                      {
                                        MR_Word SubResult19_60;

                                        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[39]), &SubResult19_60, ((MR_Box) (ArgX19_58)), ((MR_Box) (ArgY19_59)));
                                        succeeded = (SubResult19_60 != (MR_Integer) 0);
                                        if (succeeded)
                                          *HeadVar__1_1 = SubResult19_60;
                                        else
                                        {
                                          MR_Word SubResult20_63;

                                          mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[40]), &SubResult20_63, ((MR_Box) (ArgX20_61)), ((MR_Box) (ArgY20_62)));
                                          succeeded = (SubResult20_63 != (MR_Integer) 0);
                                          if (succeeded)
                                            *HeadVar__1_1 = SubResult20_63;
                                          else
                                          {
                                            MR_Word SubResult21_66;

                                            mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[41]), &SubResult21_66, ((MR_Box) (ArgX21_64)), ((MR_Box) (ArgY21_65)));
                                            succeeded = (SubResult21_66 != (MR_Integer) 0);
                                            if (succeeded)
                                              *HeadVar__1_1 = SubResult21_66;
                                            else
                                            {
                                              MR_Word SubResult22_69;

                                              mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[42]), &SubResult22_69, ((MR_Box) (ArgX22_67)), ((MR_Box) (ArgY22_68)));
                                              succeeded = (SubResult22_69 != (MR_Integer) 0);
                                              if (succeeded)
                                                *HeadVar__1_1 = SubResult22_69;
                                              else
                                              {
                                                MR_Word SubResult23_72;

                                                mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[43]), &SubResult23_72, ((MR_Box) (ArgX23_70)), ((MR_Box) (ArgY23_71)));
                                                succeeded = (SubResult23_72 != (MR_Integer) 0);
                                                if (succeeded)
                                                  *HeadVar__1_1 = SubResult23_72;
                                                else
                                                {
                                                  MR_Word SubResult24_75;

                                                  mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[44]), &SubResult24_75, ((MR_Box) (ArgX24_73)), ((MR_Box) (ArgY24_74)));
                                                  succeeded = (SubResult24_75 != (MR_Integer) 0);
                                                  if (succeeded)
                                                    *HeadVar__1_1 = SubResult24_75;
                                                  else
                                                  {
                                                    MR_Word SubResult25_78;

                                                    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[45]), &SubResult25_78, ((MR_Box) (ArgX25_76)), ((MR_Box) (ArgY25_77)));
                                                    succeeded = (SubResult25_78 != (MR_Integer) 0);
                                                    if (succeeded)
                                                      *HeadVar__1_1 = SubResult25_78;
                                                    else
                                                    {
                                                      MR_Word SubResult26_81;

                                                      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[46]), &SubResult26_81, ((MR_Box) (ArgX26_79)), ((MR_Box) (ArgY26_80)));
                                                      succeeded = (SubResult26_81 != (MR_Integer) 0);
                                                      if (succeeded)
                                                        *HeadVar__1_1 = SubResult26_81;
                                                      else
                                                      {
                                                        MR_Word SubResult27_84;

                                                        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[47]), &SubResult27_84, ((MR_Box) (ArgX27_82)), ((MR_Box) (ArgY27_83)));
                                                        succeeded = (SubResult27_84 != (MR_Integer) 0);
                                                        if (succeeded)
                                                          *HeadVar__1_1 = SubResult27_84;
                                                        else
                                                        {
                                                          MR_Word SubResult28_87;

                                                          mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[48]), &SubResult28_87, ((MR_Box) (ArgX28_85)), ((MR_Box) (ArgY28_86)));
                                                          succeeded = (SubResult28_87 != (MR_Integer) 0);
                                                          if (succeeded)
                                                            *HeadVar__1_1 = SubResult28_87;
                                                          else
                                                          {
                                                            MR_Word SubResult29_90;

                                                            mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[49]), &SubResult29_90, ((MR_Box) (ArgX29_88)), ((MR_Box) (ArgY29_89)));
                                                            succeeded = (SubResult29_90 != (MR_Integer) 0);
                                                            if (succeeded)
                                                              *HeadVar__1_1 = SubResult29_90;
                                                            else
                                                            {
                                                              MR_Word SubResult30_93;

                                                              mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[50]), &SubResult30_93, ((MR_Box) (ArgX30_91)), ((MR_Box) (ArgY30_92)));
                                                              succeeded = (SubResult30_93 != (MR_Integer) 0);
                                                              if (succeeded)
                                                                *HeadVar__1_1 = SubResult30_93;
                                                              else
                                                              {
                                                                MR_Word SubResult31_96;

                                                                mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[51]), &SubResult31_96, ((MR_Box) (ArgX31_94)), ((MR_Box) (ArgY31_95)));
                                                                succeeded = (SubResult31_96 != (MR_Integer) 0);
                                                                if (succeeded)
                                                                  *HeadVar__1_1 = SubResult31_96;
                                                                else
                                                                {
                                                                  MR_Word SubResult32_99;

                                                                  mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[52]), &SubResult32_99, ((MR_Box) (ArgX32_97)), ((MR_Box) (ArgY32_98)));
                                                                  succeeded = (SubResult32_99 != (MR_Integer) 0);
                                                                  if (succeeded)
                                                                    *HeadVar__1_1 = SubResult32_99;
                                                                  else
                                                                  {
                                                                    MR_Word SubResult33_102;

                                                                    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[53]), &SubResult33_102, ((MR_Box) (ArgX33_100)), ((MR_Box) (ArgY33_101)));
                                                                    succeeded = (SubResult33_102 != (MR_Integer) 0);
                                                                    if (succeeded)
                                                                      *HeadVar__1_1 = SubResult33_102;
                                                                    else
                                                                      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[54]), HeadVar__1_1, ((MR_Box) (ArgX34_103)), ((MR_Box) (ArgY34_104)));
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

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_separate_items____Unify____item_accumulator_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_71 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_72 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_71 == CastY_72);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_74_74;
    MR_Word TypeInfo_75_75;
    MR_Word TypeInfo_76_76;
    MR_Word TypeInfo_77_77;
    MR_Word TypeInfo_78_78;
    MR_Word TypeInfo_79_79;
    MR_Word TypeInfo_80_80;
    MR_Word TypeInfo_81_81;
    MR_Word TypeInfo_82_82;
    MR_Word TypeInfo_83_83;
    MR_Word TypeInfo_84_84;
    MR_Word TypeInfo_85_85;
    MR_Word TypeInfo_86_86;
    MR_Word TypeInfo_87_87;
    MR_Word TypeInfo_88_88;
    MR_Word TypeInfo_89_89;
    MR_Word TypeInfo_90_90;
    MR_Word TypeInfo_91_91;
    MR_Word TypeInfo_92_92;
    MR_Word TypeInfo_93_93;
    MR_Word TypeInfo_94_94;
    MR_Word TypeInfo_95_95;
    MR_Word TypeInfo_96_96;
    MR_Word TypeInfo_97_97;
    MR_Word TypeInfo_98_98;
    MR_Word TypeInfo_99_99;
    MR_Word TypeInfo_100_100;
    MR_Word TypeInfo_101_101;
    MR_Word TypeInfo_102_102;
    MR_Word TypeInfo_103_103;
    MR_Word TypeInfo_104_104;
    MR_Word TypeInfo_105_105;
    MR_Word TypeInfo_106_106;
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
    MR_Word ArgX9_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 8))));
    MR_Word ArgY9_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 8))));
    MR_Word ArgX10_21 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 9))));
    MR_Word ArgY10_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 9))));
    MR_Word ArgX11_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 10))));
    MR_Word ArgY11_24 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 10))));
    MR_Word ArgX12_25 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 11))));
    MR_Word ArgY12_26 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 11))));
    MR_Word ArgX13_27 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 12))));
    MR_Word ArgY13_28 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 12))));
    MR_Word ArgX14_29 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 13))));
    MR_Word ArgY14_30 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 13))));
    MR_Word ArgX15_31 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 14))));
    MR_Word ArgY15_32 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 14))));
    MR_Word ArgX16_33 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 15))));
    MR_Word ArgY16_34 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 15))));
    MR_Word ArgX17_35 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 16))));
    MR_Word ArgY17_36 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 16))));
    MR_Word ArgX18_37 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 17))));
    MR_Word ArgY18_38 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 17))));
    MR_Word ArgX19_39 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 18))));
    MR_Word ArgY19_40 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 18))));
    MR_Word ArgX20_41 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 19))));
    MR_Word ArgY20_42 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 19))));
    MR_Word ArgX21_43 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 20))));
    MR_Word ArgY21_44 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 20))));
    MR_Word ArgX22_45 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 21))));
    MR_Word ArgY22_46 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 21))));
    MR_Word ArgX23_47 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 22))));
    MR_Word ArgY23_48 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 22))));
    MR_Word ArgX24_49 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 23))));
    MR_Word ArgY24_50 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 23))));
    MR_Word ArgX25_51 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 24))));
    MR_Word ArgY25_52 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 24))));
    MR_Word ArgX26_53 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 25))));
    MR_Word ArgY26_54 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 25))));
    MR_Word ArgX27_55 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 26))));
    MR_Word ArgY27_56 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 26))));
    MR_Word ArgX28_57 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 27))));
    MR_Word ArgY28_58 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 27))));
    MR_Word ArgX29_59 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 28))));
    MR_Word ArgY29_60 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 28))));
    MR_Word ArgX30_61 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 29))));
    MR_Word ArgY30_62 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 29))));
    MR_Word ArgX31_63 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 30))));
    MR_Word ArgY31_64 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 30))));
    MR_Word ArgX32_65 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 31))));
    MR_Word ArgY32_66 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 31))));
    MR_Word ArgX33_67 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 32))));
    MR_Word ArgY33_68 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 32))));
    MR_Word ArgX34_69 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 33))));
    MR_Word ArgY34_70 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 33))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[23]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_74_74 = (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[24]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_74_74, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        TypeInfo_75_75 = (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[25]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_75_75, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          TypeInfo_76_76 = (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[25]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_76_76, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          if (succeeded)
          {
            TypeInfo_77_77 = (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[25]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_77_77, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
            if (succeeded)
            {
              TypeInfo_78_78 = (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[26]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_78_78, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
              if (succeeded)
              {
                TypeInfo_79_79 = (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[27]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_79_79, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
                if (succeeded)
                {
                  TypeInfo_80_80 = (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[28]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_80_80, ((MR_Box) (ArgX8_17)), ((MR_Box) (ArgY8_18)));
                  if (succeeded)
                  {
                    TypeInfo_81_81 = (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[29]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_81_81, ((MR_Box) (ArgX9_19)), ((MR_Box) (ArgY9_20)));
                    if (succeeded)
                    {
                      TypeInfo_82_82 = (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[30]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_82_82, ((MR_Box) (ArgX10_21)), ((MR_Box) (ArgY10_22)));
                      if (succeeded)
                      {
                        TypeInfo_83_83 = (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[31]);
                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_83_83, ((MR_Box) (ArgX11_23)), ((MR_Box) (ArgY11_24)));
                        if (succeeded)
                        {
                          TypeInfo_84_84 = (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[32]);
                          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_84_84, ((MR_Box) (ArgX12_25)), ((MR_Box) (ArgY12_26)));
                          if (succeeded)
                          {
                            TypeInfo_85_85 = (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[33]);
                            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_85_85, ((MR_Box) (ArgX13_27)), ((MR_Box) (ArgY13_28)));
                            if (succeeded)
                            {
                              TypeInfo_86_86 = (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[34]);
                              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_86_86, ((MR_Box) (ArgX14_29)), ((MR_Box) (ArgY14_30)));
                              if (succeeded)
                              {
                                TypeInfo_87_87 = (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[35]);
                                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_87_87, ((MR_Box) (ArgX15_31)), ((MR_Box) (ArgY15_32)));
                                if (succeeded)
                                {
                                  TypeInfo_88_88 = (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[36]);
                                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_88_88, ((MR_Box) (ArgX16_33)), ((MR_Box) (ArgY16_34)));
                                  if (succeeded)
                                  {
                                    TypeInfo_89_89 = (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[37]);
                                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_89_89, ((MR_Box) (ArgX17_35)), ((MR_Box) (ArgY17_36)));
                                    if (succeeded)
                                    {
                                      TypeInfo_90_90 = (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[38]);
                                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_90_90, ((MR_Box) (ArgX18_37)), ((MR_Box) (ArgY18_38)));
                                      if (succeeded)
                                      {
                                        TypeInfo_91_91 = (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[39]);
                                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_91_91, ((MR_Box) (ArgX19_39)), ((MR_Box) (ArgY19_40)));
                                        if (succeeded)
                                        {
                                          TypeInfo_92_92 = (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[40]);
                                          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_92_92, ((MR_Box) (ArgX20_41)), ((MR_Box) (ArgY20_42)));
                                          if (succeeded)
                                          {
                                            TypeInfo_93_93 = (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[41]);
                                            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_93_93, ((MR_Box) (ArgX21_43)), ((MR_Box) (ArgY21_44)));
                                            if (succeeded)
                                            {
                                              TypeInfo_94_94 = (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[42]);
                                              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_94_94, ((MR_Box) (ArgX22_45)), ((MR_Box) (ArgY22_46)));
                                              if (succeeded)
                                              {
                                                TypeInfo_95_95 = (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[43]);
                                                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_95_95, ((MR_Box) (ArgX23_47)), ((MR_Box) (ArgY23_48)));
                                                if (succeeded)
                                                {
                                                  TypeInfo_96_96 = (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[44]);
                                                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_96_96, ((MR_Box) (ArgX24_49)), ((MR_Box) (ArgY24_50)));
                                                  if (succeeded)
                                                  {
                                                    TypeInfo_97_97 = (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[45]);
                                                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_97_97, ((MR_Box) (ArgX25_51)), ((MR_Box) (ArgY25_52)));
                                                    if (succeeded)
                                                    {
                                                      TypeInfo_98_98 = (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[46]);
                                                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_98_98, ((MR_Box) (ArgX26_53)), ((MR_Box) (ArgY26_54)));
                                                      if (succeeded)
                                                      {
                                                        TypeInfo_99_99 = (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[47]);
                                                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_99_99, ((MR_Box) (ArgX27_55)), ((MR_Box) (ArgY27_56)));
                                                        if (succeeded)
                                                        {
                                                          TypeInfo_100_100 = (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[48]);
                                                          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_100_100, ((MR_Box) (ArgX28_57)), ((MR_Box) (ArgY28_58)));
                                                          if (succeeded)
                                                          {
                                                            TypeInfo_101_101 = (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[49]);
                                                            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_101_101, ((MR_Box) (ArgX29_59)), ((MR_Box) (ArgY29_60)));
                                                            if (succeeded)
                                                            {
                                                              TypeInfo_102_102 = (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[50]);
                                                              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_102_102, ((MR_Box) (ArgX30_61)), ((MR_Box) (ArgY30_62)));
                                                              if (succeeded)
                                                              {
                                                                TypeInfo_103_103 = (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[51]);
                                                                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_103_103, ((MR_Box) (ArgX31_63)), ((MR_Box) (ArgY31_64)));
                                                                if (succeeded)
                                                                {
                                                                  TypeInfo_104_104 = (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[52]);
                                                                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_104_104, ((MR_Box) (ArgX32_65)), ((MR_Box) (ArgY32_66)));
                                                                  if (succeeded)
                                                                  {
                                                                    TypeInfo_105_105 = (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[53]);
                                                                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_105_105, ((MR_Box) (ArgX33_67)), ((MR_Box) (ArgY33_68)));
                                                                    if (succeeded)
                                                                    {
                                                                      TypeInfo_106_106 = (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[54]);
                                                                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_106_106, ((MR_Box) (ArgX34_69)), ((MR_Box) (ArgY34_70)));
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
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__make_hlds_separate_items____Compare____int_type_ctor_repns_0_0(
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
    MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 3);
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
      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_3[3]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_separate_items____Unify____int_type_ctor_repns_0_0(
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
    MR_Word TypeInfo_9_9;
    MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      TypeInfo_9_9 = (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_3[3]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
    }
  }
  return succeeded;
}

void MR_CALL 
hlds__make_hlds__make_hlds_separate_items____Compare____ims_tuple_list_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word TypeInfo_9_9;
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  {
    TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_9_9, 0) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0));
    MR_hl_field(0, TypeInfo_9_9, 1) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, TypeInfo_9_9, 2) = ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_item_mercury_status_0));
    MR_hl_field(0, TypeInfo_9_9, 3) = ((MR_Box) (TypeInfo_for_T_6));
  }
  mercury__list____Compare____list_1_0(TypeInfo_9_9, HeadVar__1_1, (MR_Word) (Cast_HeadVar1_4), (MR_Word) (Cast_HeadVar2_5));
}

MR_bool MR_CALL 
hlds__make_hlds__make_hlds_separate_items____Unify____ims_tuple_list_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word TypeInfo_8_8;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  {
    TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_8_8, 0) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0));
    MR_hl_field(0, TypeInfo_8_8, 1) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, TypeInfo_8_8, 2) = ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_item_mercury_status_0));
    MR_hl_field(0, TypeInfo_8_8, 3) = ((MR_Box) (TypeInfo_for_T_5));
  }
  succeeded = mercury__list____Unify____list_1_0(TypeInfo_8_8, (MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
  return succeeded;
}

void MR_CALL 
hlds__make_hlds__make_hlds_separate_items____Compare____ims_tuple_item_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Tuple HeadVar__2_2,
  MR_Tuple HeadVar__3_3)
{
  MR_Word TypeInfo_9_9;
  MR_Tuple Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Tuple Cast_HeadVar2_5 = HeadVar__3_3;

  {
    TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_9_9, 0) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0));
    MR_hl_field(0, TypeInfo_9_9, 1) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, TypeInfo_9_9, 2) = ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_item_mercury_status_0));
    MR_hl_field(0, TypeInfo_9_9, 3) = ((MR_Box) (TypeInfo_for_T_6));
  }
  mercury__builtin__compare_3_p_0(TypeInfo_9_9, HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
hlds__make_hlds__make_hlds_separate_items____Unify____ims_tuple_item_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Tuple HeadVar__1_1,
  MR_Tuple HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word TypeInfo_8_8;
  MR_Tuple Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Tuple Cast_HeadVar2_4 = HeadVar__2_2;

  {
    TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_8_8, 0) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0));
    MR_hl_field(0, TypeInfo_8_8, 1) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, TypeInfo_8_8, 2) = ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_item_mercury_status_0));
    MR_hl_field(0, TypeInfo_8_8, 3) = ((MR_Box) (TypeInfo_for_T_5));
  }
  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_8_8, ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__make_hlds_separate_items____Compare____ims_tuple_cord_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word TypeInfo_9_9;
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  {
    TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_9_9, 0) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0));
    MR_hl_field(0, TypeInfo_9_9, 1) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, TypeInfo_9_9, 2) = ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_item_mercury_status_0));
    MR_hl_field(0, TypeInfo_9_9, 3) = ((MR_Box) (TypeInfo_for_T_6));
  }
  mercury__cord____Compare____cord_1_0(TypeInfo_9_9, HeadVar__1_1, (MR_Word) (Cast_HeadVar1_4), (MR_Word) (Cast_HeadVar2_5));
}

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_separate_items____Unify____ims_tuple_cord_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word TypeInfo_8_8;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  {
    TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_8_8, 0) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0));
    MR_hl_field(0, TypeInfo_8_8, 1) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, TypeInfo_8_8, 2) = ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_item_mercury_status_0));
    MR_hl_field(0, TypeInfo_8_8, 3) = ((MR_Box) (TypeInfo_for_T_5));
  }
  succeeded = mercury__cord____Unify____cord_1_0(TypeInfo_8_8, (MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__make_hlds_separate_items__acc_parse_tree_trans_opt_3_p_0(
  MR_Word ParseTreeTransOpt_4,
  MR_Word STATE_VARIABLE_Acc_0_56,
  MR_Word * STATE_VARIABLE_Acc_57)
{
  MR_Word TermInfos_8 = ((MR_Word) ((MR_hl_field(0, ParseTreeTransOpt_4, (MR_Integer) 2))));
  MR_Word Term2Infos_9 = ((MR_Word) ((MR_hl_field(0, ParseTreeTransOpt_4, (MR_Integer) 3))));
  MR_Word Exceptions_10 = ((MR_Word) ((MR_hl_field(0, ParseTreeTransOpt_4, (MR_Integer) 4))));
  MR_Word Trailings_11 = ((MR_Word) ((MR_hl_field(0, ParseTreeTransOpt_4, (MR_Integer) 5))));
  MR_Word MMTablings_12 = ((MR_Word) ((MR_hl_field(0, ParseTreeTransOpt_4, (MR_Integer) 6))));
  MR_Word Sharings_13 = ((MR_Word) ((MR_hl_field(0, ParseTreeTransOpt_4, (MR_Integer) 7))));
  MR_Word Reuses_14 = ((MR_Word) ((MR_hl_field(0, ParseTreeTransOpt_4, (MR_Integer) 8))));
  MR_Word AccAvails0_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_56, (MR_Integer) 0))));
  MR_Word AccFIMs0_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_56, (MR_Integer) 1))));
  MR_Word AccTypeDefnsAbs0_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_56, (MR_Integer) 2))));
  MR_Word AccTypeDefnsMer0_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_56, (MR_Integer) 3))));
  MR_Word AccTypeDefnsFor0_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_56, (MR_Integer) 4))));
  MR_Word AccInstDefns0_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_56, (MR_Integer) 5))));
  MR_Word AccModeDefns0_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_56, (MR_Integer) 6))));
  MR_Word AccTypeClasses0_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_56, (MR_Integer) 7))));
  MR_Word AccInstances0_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_56, (MR_Integer) 8))));
  MR_Word AccPredDecls0_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_56, (MR_Integer) 9))));
  MR_Word AccModeDecls0_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_56, (MR_Integer) 10))));
  MR_Word AccClauses0_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_56, (MR_Integer) 11))));
  MR_Word AccForeignProcs0_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_56, (MR_Integer) 12))));
  MR_Word AccForeignEnums0_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_56, (MR_Integer) 13))));
  MR_Word AccForeignExportEnums0_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_56, (MR_Integer) 14))));
  MR_Word AccDeclPragmas0_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_56, (MR_Integer) 15))));
  MR_Word AccDeclMarkers0_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_56, (MR_Integer) 16))));
  MR_Word AccDeclPragmasTypeSpecConstr0_32 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_56, (MR_Integer) 17))));
  MR_Word AccDeclPragmasTypeSpec0_33 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_56, (MR_Integer) 18))));
  MR_Word AccDeclPragmasTermInfo0_34 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_56, (MR_Integer) 19))));
  MR_Word AccDeclPragmasTerm2Info0_35 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_56, (MR_Integer) 20))));
  MR_Word AccDeclPragmasSharing0_36 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_56, (MR_Integer) 21))));
  MR_Word AccDeclPragmasReuse0_37 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_56, (MR_Integer) 22))));
  MR_Word AccImplPragmas0_38 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_56, (MR_Integer) 23))));
  MR_Word AccImplMarkers0_39 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_56, (MR_Integer) 24))));
  MR_Word AccGenPragmasUnusedArgs0_40 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_56, (MR_Integer) 25))));
  MR_Word AccGenPragmasExceptions0_41 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_56, (MR_Integer) 26))));
  MR_Word AccGenPragmasTrailing0_42 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_56, (MR_Integer) 27))));
  MR_Word AccGenPragmasMMTabling0_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_56, (MR_Integer) 28))));
  MR_Word AccPromises0_44 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_56, (MR_Integer) 29))));
  MR_Word AccInitialises0_45 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_56, (MR_Integer) 30))));
  MR_Word AccFinalises0_46 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_56, (MR_Integer) 31))));
  MR_Word AccMutables0_47 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_56, (MR_Integer) 32))));
  MR_Word AccTypeRepns0_48 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_56, (MR_Integer) 33))));
  MR_Word AccDeclPragmasTermInfo_49;
  MR_Word AccDeclPragmasTerm2Info_50;
  MR_Word AccDeclPragmasSharing_51;
  MR_Word AccDeclPragmasReuse_52;
  MR_Word AccGenPragmasExceptions_53;
  MR_Word AccGenPragmasTrailing_54;
  MR_Word AccGenPragmasMMTabling_55;
  MR_Word Var_58;
  MR_Word Var_59;
  MR_Word Var_60;
  MR_Word Var_61;
  MR_Word Var_62;
  MR_Word Var_63;
  MR_Word Var_64;

  Var_58 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_termination_info_0), TermInfos_8);
  AccDeclPragmasTermInfo_49 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_termination_info_0), AccDeclPragmasTermInfo0_34, Var_58);
  Var_59 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_termination2_info_0), Term2Infos_9);
  AccDeclPragmasTerm2Info_50 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_termination2_info_0), AccDeclPragmasTerm2Info0_35, Var_59);
  Var_60 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_struct_sharing_info_0), Sharings_13);
  AccDeclPragmasSharing_51 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_struct_sharing_info_0), AccDeclPragmasSharing0_36, Var_60);
  Var_61 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_struct_reuse_info_0), Reuses_14);
  AccDeclPragmasReuse_52 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_struct_reuse_info_0), AccDeclPragmasReuse0_37, Var_61);
  Var_62 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_gen_pragma_exceptions_info_0), Exceptions_10);
  AccGenPragmasExceptions_53 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_gen_pragma_exceptions_info_0), AccGenPragmasExceptions0_41, Var_62);
  Var_63 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_gen_pragma_trailing_info_0), Trailings_11);
  AccGenPragmasTrailing_54 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_gen_pragma_trailing_info_0), AccGenPragmasTrailing0_42, Var_63);
  Var_64 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_gen_pragma_mm_tabling_info_0), MMTablings_12);
  AccGenPragmasMMTabling_55 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_gen_pragma_mm_tabling_info_0), AccGenPragmasMMTabling0_43, Var_64);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (34 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Acc_57 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (AccAvails0_15));
    MR_hl_field(0, base, 1) = ((MR_Box) (AccFIMs0_16));
    MR_hl_field(0, base, 2) = ((MR_Box) (AccTypeDefnsAbs0_17));
    MR_hl_field(0, base, 3) = ((MR_Box) (AccTypeDefnsMer0_18));
    MR_hl_field(0, base, 4) = ((MR_Box) (AccTypeDefnsFor0_19));
    MR_hl_field(0, base, 5) = ((MR_Box) (AccInstDefns0_20));
    MR_hl_field(0, base, 6) = ((MR_Box) (AccModeDefns0_21));
    MR_hl_field(0, base, 7) = ((MR_Box) (AccTypeClasses0_22));
    MR_hl_field(0, base, 8) = ((MR_Box) (AccInstances0_23));
    MR_hl_field(0, base, 9) = ((MR_Box) (AccPredDecls0_24));
    MR_hl_field(0, base, 10) = ((MR_Box) (AccModeDecls0_25));
    MR_hl_field(0, base, 11) = ((MR_Box) (AccClauses0_26));
    MR_hl_field(0, base, 12) = ((MR_Box) (AccForeignProcs0_27));
    MR_hl_field(0, base, 13) = ((MR_Box) (AccForeignEnums0_28));
    MR_hl_field(0, base, 14) = ((MR_Box) (AccForeignExportEnums0_29));
    MR_hl_field(0, base, 15) = ((MR_Box) (AccDeclPragmas0_30));
    MR_hl_field(0, base, 16) = ((MR_Box) (AccDeclMarkers0_31));
    MR_hl_field(0, base, 17) = ((MR_Box) (AccDeclPragmasTypeSpecConstr0_32));
    MR_hl_field(0, base, 18) = ((MR_Box) (AccDeclPragmasTypeSpec0_33));
    MR_hl_field(0, base, 19) = ((MR_Box) (AccDeclPragmasTermInfo_49));
    MR_hl_field(0, base, 20) = ((MR_Box) (AccDeclPragmasTerm2Info_50));
    MR_hl_field(0, base, 21) = ((MR_Box) (AccDeclPragmasSharing_51));
    MR_hl_field(0, base, 22) = ((MR_Box) (AccDeclPragmasReuse_52));
    MR_hl_field(0, base, 23) = ((MR_Box) (AccImplPragmas0_38));
    MR_hl_field(0, base, 24) = ((MR_Box) (AccImplMarkers0_39));
    MR_hl_field(0, base, 25) = ((MR_Box) (AccGenPragmasUnusedArgs0_40));
    MR_hl_field(0, base, 26) = ((MR_Box) (AccGenPragmasExceptions_53));
    MR_hl_field(0, base, 27) = ((MR_Box) (AccGenPragmasTrailing_54));
    MR_hl_field(0, base, 28) = ((MR_Box) (AccGenPragmasMMTabling_55));
    MR_hl_field(0, base, 29) = ((MR_Box) (AccPromises0_44));
    MR_hl_field(0, base, 30) = ((MR_Box) (AccInitialises0_45));
    MR_hl_field(0, base, 31) = ((MR_Box) (AccFinalises0_46));
    MR_hl_field(0, base, 32) = ((MR_Box) (AccMutables0_47));
    MR_hl_field(0, base, 33) = ((MR_Box) (AccTypeRepns0_48));
  }
}

static MR_Box MR_CALL 
hlds__make_hlds__make_hlds_separate_items__acc_parse_tree_plain_opt_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = parse_tree__item_util__fim_spec_to_item_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
hlds__make_hlds__make_hlds_separate_items__acc_parse_tree_plain_opt_3_p_0(
  MR_Word ParseTreePlainOpt_4,
  MR_Word STATE_VARIABLE_Acc_0_99,
  MR_Word * STATE_VARIABLE_Acc_100)
{
  MR_Word ItemMercuryStatus_6 = (MR_Word) (MR_mkword(1, &hlds__make_hlds__make_hlds_separate_items_scalar_common_4[5]));
  MR_Word UseMap_10 = ((MR_Word) ((MR_hl_field(0, ParseTreePlainOpt_4, (MR_Integer) 2))));
  MR_Word FIMSpecs_11 = ((MR_Word) ((MR_hl_field(0, ParseTreePlainOpt_4, (MR_Integer) 3))));
  MR_Word TypeDefns_12 = ((MR_Word) ((MR_hl_field(0, ParseTreePlainOpt_4, (MR_Integer) 4))));
  MR_Word ForeignEnums_13 = ((MR_Word) ((MR_hl_field(0, ParseTreePlainOpt_4, (MR_Integer) 5))));
  MR_Word InstDefns_14 = ((MR_Word) ((MR_hl_field(0, ParseTreePlainOpt_4, (MR_Integer) 6))));
  MR_Word ModeDefns_15 = ((MR_Word) ((MR_hl_field(0, ParseTreePlainOpt_4, (MR_Integer) 7))));
  MR_Word TypeClasses_16 = ((MR_Word) ((MR_hl_field(0, ParseTreePlainOpt_4, (MR_Integer) 8))));
  MR_Word Instances_17 = ((MR_Word) ((MR_hl_field(0, ParseTreePlainOpt_4, (MR_Integer) 9))));
  MR_Word PredDecls_18 = ((MR_Word) ((MR_hl_field(0, ParseTreePlainOpt_4, (MR_Integer) 10))));
  MR_Word ModeDecls_19 = ((MR_Word) ((MR_hl_field(0, ParseTreePlainOpt_4, (MR_Integer) 11))));
  MR_Word Clauses_20 = ((MR_Word) ((MR_hl_field(0, ParseTreePlainOpt_4, (MR_Integer) 12))));
  MR_Word ForeignProcs_21 = ((MR_Word) ((MR_hl_field(0, ParseTreePlainOpt_4, (MR_Integer) 13))));
  MR_Word Promises_22 = ((MR_Word) ((MR_hl_field(0, ParseTreePlainOpt_4, (MR_Integer) 14))));
  MR_Word DeclMarkers_23 = ((MR_Word) ((MR_hl_field(0, ParseTreePlainOpt_4, (MR_Integer) 15))));
  MR_Word ImplMarkers_24 = ((MR_Word) ((MR_hl_field(0, ParseTreePlainOpt_4, (MR_Integer) 16))));
  MR_Word TypeSpecs_25 = ((MR_Word) ((MR_hl_field(0, ParseTreePlainOpt_4, (MR_Integer) 17))));
  MR_Word UnusedArgs_26 = ((MR_Word) ((MR_hl_field(0, ParseTreePlainOpt_4, (MR_Integer) 18))));
  MR_Word TermInfos_27 = ((MR_Word) ((MR_hl_field(0, ParseTreePlainOpt_4, (MR_Integer) 19))));
  MR_Word Term2Infos_28 = ((MR_Word) ((MR_hl_field(0, ParseTreePlainOpt_4, (MR_Integer) 20))));
  MR_Word Exceptions_29 = ((MR_Word) ((MR_hl_field(0, ParseTreePlainOpt_4, (MR_Integer) 21))));
  MR_Word Trailings_30 = ((MR_Word) ((MR_hl_field(0, ParseTreePlainOpt_4, (MR_Integer) 22))));
  MR_Word MMTablings_31 = ((MR_Word) ((MR_hl_field(0, ParseTreePlainOpt_4, (MR_Integer) 23))));
  MR_Word Sharings_32 = ((MR_Word) ((MR_hl_field(0, ParseTreePlainOpt_4, (MR_Integer) 24))));
  MR_Word Reuses_33 = ((MR_Word) ((MR_hl_field(0, ParseTreePlainOpt_4, (MR_Integer) 25))));
  MR_Word AccAvails0_34 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_99, (MR_Integer) 0))));
  MR_Word AccFIMs0_35 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_99, (MR_Integer) 1))));
  MR_Word AccTypeDefnsAbs0_36 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_99, (MR_Integer) 2))));
  MR_Word AccTypeDefnsMer0_37 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_99, (MR_Integer) 3))));
  MR_Word AccTypeDefnsFor0_38 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_99, (MR_Integer) 4))));
  MR_Word AccInstDefns0_39 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_99, (MR_Integer) 5))));
  MR_Word AccModeDefns0_40 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_99, (MR_Integer) 6))));
  MR_Word AccTypeClasses0_41 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_99, (MR_Integer) 7))));
  MR_Word AccInstances0_42 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_99, (MR_Integer) 8))));
  MR_Word AccPredDecls0_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_99, (MR_Integer) 9))));
  MR_Word AccModeDecls0_44 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_99, (MR_Integer) 10))));
  MR_Word AccClauses0_45 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_99, (MR_Integer) 11))));
  MR_Word AccForeignProcs0_46 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_99, (MR_Integer) 12))));
  MR_Word AccForeignEnums0_47 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_99, (MR_Integer) 13))));
  MR_Word AccForeignExportEnums0_48 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_99, (MR_Integer) 14))));
  MR_Word AccDeclPragmas0_49 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_99, (MR_Integer) 15))));
  MR_Word AccDeclMarkers0_50 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_99, (MR_Integer) 16))));
  MR_Word AccDeclPragmasTypeSpecConstr0_51 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_99, (MR_Integer) 17))));
  MR_Word AccDeclPragmasTypeSpec0_52 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_99, (MR_Integer) 18))));
  MR_Word AccDeclPragmasTermInfo0_53 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_99, (MR_Integer) 19))));
  MR_Word AccDeclPragmasTerm2Info0_54 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_99, (MR_Integer) 20))));
  MR_Word AccDeclPragmasSharing0_55 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_99, (MR_Integer) 21))));
  MR_Word AccDeclPragmasReuse0_56 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_99, (MR_Integer) 22))));
  MR_Word AccImplPragmas0_57 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_99, (MR_Integer) 23))));
  MR_Word AccImplMarkers0_58 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_99, (MR_Integer) 24))));
  MR_Word AccGenPragmasUnusedArgs0_59 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_99, (MR_Integer) 25))));
  MR_Word AccGenPragmasExceptions0_60 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_99, (MR_Integer) 26))));
  MR_Word AccGenPragmasTrailing0_61 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_99, (MR_Integer) 27))));
  MR_Word AccGenPragmasMMTabling0_62 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_99, (MR_Integer) 28))));
  MR_Word AccPromises0_63 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_99, (MR_Integer) 29))));
  MR_Word AccInitialises0_64 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_99, (MR_Integer) 30))));
  MR_Word AccFinalises0_65 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_99, (MR_Integer) 31))));
  MR_Word AccMutables0_66 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_99, (MR_Integer) 32))));
  MR_Word AccTypeRepns0_67 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_99, (MR_Integer) 33))));
  MR_Word OptAvails_68;
  MR_Word AccAvails_69;
  MR_Word OptFIMs_70;
  MR_Word AccFIMs_71;
  MR_Word TypeDefnsAbs_72;
  MR_Word TypeDefnsMer_73;
  MR_Word TypeDefnsFor_74;
  MR_Word AccTypeDefnsAbs_75;
  MR_Word AccTypeDefnsMer_76;
  MR_Word AccTypeDefnsFor_77;
  MR_Word AccInstDefns_78;
  MR_Word AccModeDefns_79;
  MR_Word AccTypeClasses_80;
  MR_Word AccInstances_81;
  MR_Word AccPredDecls_82;
  MR_Word AccModeDecls_83;
  MR_Word AccClauses_84;
  MR_Word AccForeignProcs_85;
  MR_Word AccForeignEnums_86;
  MR_Word AccDeclMarkers_87;
  MR_Word AccDeclPragmasTypeSpec_88;
  MR_Word AccDeclPragmasTermInfo_89;
  MR_Word AccDeclPragmasTerm2Info_90;
  MR_Word AccDeclPragmasSharing_91;
  MR_Word AccDeclPragmasReuse_92;
  MR_Word AccImplMarkers_93;
  MR_Word AccGenPragmasUnusedArgs_94;
  MR_Word AccGenPragmasExceptions_95;
  MR_Word AccGenPragmasTrailing_96;
  MR_Word AccGenPragmasMMTabling_97;
  MR_Word AccPromises_98;
  MR_Word Var_104;
  MR_Word Var_105;
  MR_Word Var_109;
  MR_Word Var_110;
  MR_Word Var_111;
  MR_Word Var_112;
  MR_Word Var_113;
  MR_Word Var_114;
  MR_Word Var_115;
  MR_Word Var_116;
  MR_Word Var_117;
  MR_Word Var_118;
  MR_Word Var_119;

  OptAvails_68 = parse_tree__item_util__use_map_to_item_avails_1_f_0(UseMap_10);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_avails_4_p_0(ItemMercuryStatus_6, OptAvails_68, AccAvails0_34, &AccAvails_69);
  Var_104 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), FIMSpecs_11);
  OptFIMs_70 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_3[21]), Var_104);
  Var_105 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), OptFIMs_70);
  AccFIMs_71 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), AccFIMs0_35, Var_105);
  hlds__make_hlds__make_hlds_separate_items__separate_type_defns_abs_mer_for_7_p_0(TypeDefns_12, (MR_Word) ((MR_Unsigned) 0U), &TypeDefnsAbs_72, (MR_Word) ((MR_Unsigned) 0U), &TypeDefnsMer_73, (MR_Word) ((MR_Unsigned) 0U), &TypeDefnsFor_74);
  hlds__make_hlds__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[58]), TypeDefnsAbs_72, AccTypeDefnsAbs0_36, &AccTypeDefnsAbs_75);
  hlds__make_hlds__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[58]), TypeDefnsMer_73, AccTypeDefnsMer0_37, &AccTypeDefnsMer_76);
  hlds__make_hlds__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[58]), TypeDefnsFor_74, AccTypeDefnsFor0_38, &AccTypeDefnsFor_77);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[3]), ItemMercuryStatus_6, InstDefns_14, AccInstDefns0_39, &AccInstDefns_78);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[5]), ItemMercuryStatus_6, ModeDefns_15, AccModeDefns0_40, &AccModeDefns_79);
  hlds__make_hlds__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[58]), TypeClasses_16, AccTypeClasses0_41, &AccTypeClasses_80);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), ItemMercuryStatus_6, Instances_17, AccInstances0_42, &AccInstances_81);
  hlds__make_hlds__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[58]), PredDecls_18, AccPredDecls0_43, &AccPredDecls_82);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), ItemMercuryStatus_6, ModeDecls_19, AccModeDecls0_44, &AccModeDecls_83);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0), ItemMercuryStatus_6, Clauses_20, AccClauses0_45, &AccClauses_84);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_proc_info_0), ItemMercuryStatus_6, ForeignProcs_21, AccForeignProcs0_46, &AccForeignProcs_85);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_tuple_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), ItemMercuryStatus_6, ForeignEnums_13, AccForeignEnums0_47, &AccForeignEnums_86);
  Var_109 = (MR_Word) (DeclMarkers_23);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_marker_info_0), ItemMercuryStatus_6, Var_109, AccDeclMarkers0_50, &AccDeclMarkers_87);
  Var_110 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_type_spec_info_0), TypeSpecs_25);
  AccDeclPragmasTypeSpec_88 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_type_spec_info_0), AccDeclPragmasTypeSpec0_52, Var_110);
  Var_111 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_termination_info_0), TermInfos_27);
  AccDeclPragmasTermInfo_89 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_termination_info_0), AccDeclPragmasTermInfo0_53, Var_111);
  Var_112 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_termination2_info_0), Term2Infos_28);
  AccDeclPragmasTerm2Info_90 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_termination2_info_0), AccDeclPragmasTerm2Info0_54, Var_112);
  Var_113 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_struct_sharing_info_0), Sharings_32);
  AccDeclPragmasSharing_91 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_struct_sharing_info_0), AccDeclPragmasSharing0_55, Var_113);
  Var_114 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_struct_reuse_info_0), Reuses_33);
  AccDeclPragmasReuse_92 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_struct_reuse_info_0), AccDeclPragmasReuse0_56, Var_114);
  Var_115 = (MR_Word) (ImplMarkers_24);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_impl_marker_info_0), ItemMercuryStatus_6, Var_115, AccImplMarkers0_58, &AccImplMarkers_93);
  Var_116 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_gen_pragma_unused_args_info_0), UnusedArgs_26);
  AccGenPragmasUnusedArgs_94 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_gen_pragma_unused_args_info_0), AccGenPragmasUnusedArgs0_59, Var_116);
  Var_117 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_gen_pragma_exceptions_info_0), Exceptions_29);
  AccGenPragmasExceptions_95 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_gen_pragma_exceptions_info_0), AccGenPragmasExceptions0_60, Var_117);
  Var_118 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_gen_pragma_trailing_info_0), Trailings_30);
  AccGenPragmasTrailing_96 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_gen_pragma_trailing_info_0), AccGenPragmasTrailing0_61, Var_118);
  Var_119 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_gen_pragma_mm_tabling_info_0), MMTablings_31);
  AccGenPragmasMMTabling_97 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_gen_pragma_mm_tabling_info_0), AccGenPragmasMMTabling0_62, Var_119);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), ItemMercuryStatus_6, Promises_22, AccPromises0_63, &AccPromises_98);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (34 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Acc_100 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (AccAvails_69));
    MR_hl_field(0, base, 1) = ((MR_Box) (AccFIMs_71));
    MR_hl_field(0, base, 2) = ((MR_Box) (AccTypeDefnsAbs_75));
    MR_hl_field(0, base, 3) = ((MR_Box) (AccTypeDefnsMer_76));
    MR_hl_field(0, base, 4) = ((MR_Box) (AccTypeDefnsFor_77));
    MR_hl_field(0, base, 5) = ((MR_Box) (AccInstDefns_78));
    MR_hl_field(0, base, 6) = ((MR_Box) (AccModeDefns_79));
    MR_hl_field(0, base, 7) = ((MR_Box) (AccTypeClasses_80));
    MR_hl_field(0, base, 8) = ((MR_Box) (AccInstances_81));
    MR_hl_field(0, base, 9) = ((MR_Box) (AccPredDecls_82));
    MR_hl_field(0, base, 10) = ((MR_Box) (AccModeDecls_83));
    MR_hl_field(0, base, 11) = ((MR_Box) (AccClauses_84));
    MR_hl_field(0, base, 12) = ((MR_Box) (AccForeignProcs_85));
    MR_hl_field(0, base, 13) = ((MR_Box) (AccForeignEnums_86));
    MR_hl_field(0, base, 14) = ((MR_Box) (AccForeignExportEnums0_48));
    MR_hl_field(0, base, 15) = ((MR_Box) (AccDeclPragmas0_49));
    MR_hl_field(0, base, 16) = ((MR_Box) (AccDeclMarkers_87));
    MR_hl_field(0, base, 17) = ((MR_Box) (AccDeclPragmasTypeSpecConstr0_51));
    MR_hl_field(0, base, 18) = ((MR_Box) (AccDeclPragmasTypeSpec_88));
    MR_hl_field(0, base, 19) = ((MR_Box) (AccDeclPragmasTermInfo_89));
    MR_hl_field(0, base, 20) = ((MR_Box) (AccDeclPragmasTerm2Info_90));
    MR_hl_field(0, base, 21) = ((MR_Box) (AccDeclPragmasSharing_91));
    MR_hl_field(0, base, 22) = ((MR_Box) (AccDeclPragmasReuse_92));
    MR_hl_field(0, base, 23) = ((MR_Box) (AccImplPragmas0_57));
    MR_hl_field(0, base, 24) = ((MR_Box) (AccImplMarkers_93));
    MR_hl_field(0, base, 25) = ((MR_Box) (AccGenPragmasUnusedArgs_94));
    MR_hl_field(0, base, 26) = ((MR_Box) (AccGenPragmasExceptions_95));
    MR_hl_field(0, base, 27) = ((MR_Box) (AccGenPragmasTrailing_96));
    MR_hl_field(0, base, 28) = ((MR_Box) (AccGenPragmasMMTabling_97));
    MR_hl_field(0, base, 29) = ((MR_Box) (AccPromises_98));
    MR_hl_field(0, base, 30) = ((MR_Box) (AccInitialises0_64));
    MR_hl_field(0, base, 31) = ((MR_Box) (AccFinalises0_65));
    MR_hl_field(0, base, 32) = ((MR_Box) (AccMutables0_66));
    MR_hl_field(0, base, 33) = ((MR_Box) (AccTypeRepns0_67));
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_separate_items__acc_type_repn_spec_3_p_0(
  MR_Word TypeRepnSpec_4,
  MR_Word STATE_VARIABLE_Acc_0_11,
  MR_Word * STATE_VARIABLE_Acc_12)
{
  MR_Word ParseTreeInt1_6 = (MR_Word) (TypeRepnSpec_4);
  MR_Word ModuleName_7 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_6, (MR_Integer) 0))));
  MR_Word IntTypeRepnMap_8 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_6, (MR_Integer) 17))));
  MR_Word AccTypeRepns0_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_11, (MR_Integer) 33))));
  MR_Word AccTypeRepns_10;
  MR_Word Var_13;
  MR_Word Var_14;
  MR_Word Var_52 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_11, (MR_Integer) 0))));
  MR_Word Var_53 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_11, (MR_Integer) 1))));
  MR_Word Var_54 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_11, (MR_Integer) 2))));
  MR_Word Var_55 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_11, (MR_Integer) 3))));
  MR_Word Var_56 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_11, (MR_Integer) 4))));
  MR_Word Var_57 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_11, (MR_Integer) 5))));
  MR_Word Var_58 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_11, (MR_Integer) 6))));
  MR_Word Var_59 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_11, (MR_Integer) 7))));
  MR_Word Var_60 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_11, (MR_Integer) 8))));
  MR_Word Var_61 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_11, (MR_Integer) 9))));
  MR_Word Var_62 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_11, (MR_Integer) 10))));
  MR_Word Var_63 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_11, (MR_Integer) 11))));
  MR_Word Var_64 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_11, (MR_Integer) 12))));
  MR_Word Var_65 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_11, (MR_Integer) 13))));
  MR_Word Var_66 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_11, (MR_Integer) 14))));
  MR_Word Var_67 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_11, (MR_Integer) 15))));
  MR_Word Var_68 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_11, (MR_Integer) 16))));
  MR_Word Var_69 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_11, (MR_Integer) 17))));
  MR_Word Var_70 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_11, (MR_Integer) 18))));
  MR_Word Var_71 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_11, (MR_Integer) 19))));
  MR_Word Var_72 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_11, (MR_Integer) 20))));
  MR_Word Var_73 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_11, (MR_Integer) 21))));
  MR_Word Var_74 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_11, (MR_Integer) 22))));
  MR_Word Var_75 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_11, (MR_Integer) 23))));
  MR_Word Var_76 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_11, (MR_Integer) 24))));
  MR_Word Var_77 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_11, (MR_Integer) 25))));
  MR_Word Var_78 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_11, (MR_Integer) 26))));
  MR_Word Var_79 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_11, (MR_Integer) 27))));
  MR_Word Var_80 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_11, (MR_Integer) 28))));
  MR_Word Var_81 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_11, (MR_Integer) 29))));
  MR_Word Var_82 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_11, (MR_Integer) 30))));
  MR_Word Var_83 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_11, (MR_Integer) 31))));
  MR_Word Var_84 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_11, (MR_Integer) 32))));

  {
    Var_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_14, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(0, Var_14, 1) = ((MR_Box) (IntTypeRepnMap_8));
  }
  {
    Var_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_13, 0) = ((MR_Box) (ModuleName_7));
    MR_hl_field(0, Var_13, 1) = ((MR_Box) (Var_14));
  }
  {
    AccTypeRepns_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, AccTypeRepns_10, 0) = ((MR_Box) (Var_13));
    MR_hl_field(1, AccTypeRepns_10, 1) = ((MR_Box) (AccTypeRepns0_9));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (34 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Acc_12 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_52));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_53));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_54));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_55));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_56));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_57));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_58));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_59));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_60));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_61));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_62));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_63));
    MR_hl_field(0, base, 12) = ((MR_Box) (Var_64));
    MR_hl_field(0, base, 13) = ((MR_Box) (Var_65));
    MR_hl_field(0, base, 14) = ((MR_Box) (Var_66));
    MR_hl_field(0, base, 15) = ((MR_Box) (Var_67));
    MR_hl_field(0, base, 16) = ((MR_Box) (Var_68));
    MR_hl_field(0, base, 17) = ((MR_Box) (Var_69));
    MR_hl_field(0, base, 18) = ((MR_Box) (Var_70));
    MR_hl_field(0, base, 19) = ((MR_Box) (Var_71));
    MR_hl_field(0, base, 20) = ((MR_Box) (Var_72));
    MR_hl_field(0, base, 21) = ((MR_Box) (Var_73));
    MR_hl_field(0, base, 22) = ((MR_Box) (Var_74));
    MR_hl_field(0, base, 23) = ((MR_Box) (Var_75));
    MR_hl_field(0, base, 24) = ((MR_Box) (Var_76));
    MR_hl_field(0, base, 25) = ((MR_Box) (Var_77));
    MR_hl_field(0, base, 26) = ((MR_Box) (Var_78));
    MR_hl_field(0, base, 27) = ((MR_Box) (Var_79));
    MR_hl_field(0, base, 28) = ((MR_Box) (Var_80));
    MR_hl_field(0, base, 29) = ((MR_Box) (Var_81));
    MR_hl_field(0, base, 30) = ((MR_Box) (Var_82));
    MR_hl_field(0, base, 31) = ((MR_Box) (Var_83));
    MR_hl_field(0, base, 32) = ((MR_Box) (Var_84));
    MR_hl_field(0, base, 33) = ((MR_Box) (AccTypeRepns_10));
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_separate_items__acc_int_for_opt_spec_3_p_0(
  MR_Word IntForOptSpec_4,
  MR_Word STATE_VARIABLE_Acc_0_12,
  MR_Word * STATE_VARIABLE_Acc_13)
{
  switch (MR_tag((MR_Word) IntForOptSpec_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word ParseTreeInt0_6 = ((MR_Word) ((MR_hl_field(0, IntForOptSpec_4, (MR_Integer) 0))));
        MR_Word ReadWhy0_7 = ((MR_Unsigned) ((MR_hl_field(0, IntForOptSpec_4, (MR_Integer) 1))) & (MR_Integer) 1);

        hlds__make_hlds__make_hlds_separate_items__acc_parse_tree_int0_4_p_0(ParseTreeInt0_6, ReadWhy0_7, STATE_VARIABLE_Acc_0_12, STATE_VARIABLE_Acc_13);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ParseTreeInt1_8 = ((MR_Word) ((MR_hl_field(1, IntForOptSpec_4, (MR_Integer) 0))));
        MR_Word ReadWhy1_9 = ((MR_Unsigned) ((MR_hl_field(1, IntForOptSpec_4, (MR_Integer) 1))) & (MR_Integer) 7);

        hlds__make_hlds__make_hlds_separate_items__acc_parse_tree_int1_4_p_0(ParseTreeInt1_8, ReadWhy1_9, STATE_VARIABLE_Acc_0_12, STATE_VARIABLE_Acc_13);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ParseTreeInt2_10 = ((MR_Word) ((MR_hl_field(2, IntForOptSpec_4, (MR_Integer) 0))));
        MR_Word ReadWhy2_11 = ((MR_Unsigned) ((MR_hl_field(2, IntForOptSpec_4, (MR_Integer) 1))) & (MR_Integer) 3);

        hlds__make_hlds__make_hlds_separate_items__acc_parse_tree_int2_4_p_0(ParseTreeInt2_10, ReadWhy2_11, STATE_VARIABLE_Acc_0_12, STATE_VARIABLE_Acc_13);
      }
      break;
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_separate_items__acc_indirect_int2_spec_3_p_0(
  MR_Word IndirectInt2Spec_4,
  MR_Word STATE_VARIABLE_Acc_0_8,
  MR_Word * STATE_VARIABLE_Acc_9)
{
  MR_Word ParseTreeInt2_6 = ((MR_Word) ((MR_hl_field(0, IndirectInt2Spec_4, (MR_Integer) 0))));
  MR_Word ReadWhy2_7 = ((MR_Unsigned) ((MR_hl_field(0, IndirectInt2Spec_4, (MR_Integer) 1))) & (MR_Integer) 3);

  hlds__make_hlds__make_hlds_separate_items__acc_parse_tree_int2_4_p_0(ParseTreeInt2_6, ReadWhy2_7, STATE_VARIABLE_Acc_0_8, STATE_VARIABLE_Acc_9);
}

static MR_Box MR_CALL 
hlds__make_hlds__make_hlds_separate_items__acc_parse_tree_int2_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = parse_tree__item_util__fim_spec_to_item_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__make_hlds__make_hlds_separate_items__acc_parse_tree_int2_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = parse_tree__item_util__fim_spec_to_item_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
hlds__make_hlds__make_hlds_separate_items__acc_parse_tree_int2_4_p_0(
  MR_Word ParseTreeInt2_5,
  MR_Word ReadWhy2_6,
  MR_Word STATE_VARIABLE_Acc_0_95,
  MR_Word * STATE_VARIABLE_Acc_96)
{
  MR_Word IntItemImport_9 = ((&hlds__make_hlds__make_hlds_separate_items_vector_common_8[0 + ReadWhy2_6]))->hlds__make_hlds__make_hlds_separate_items__vector_common_type_8_0__vct_8_f_0;
  MR_Word ImpItemImport_10 = ((&hlds__make_hlds__make_hlds_separate_items_vector_common_8[0 + ReadWhy2_6]))->hlds__make_hlds__make_hlds_separate_items__vector_common_type_8_0__vct_8_f_1;
  MR_Word IntItemMercuryStatus_11;
  MR_Word ImpItemMercuryStatus_12;
  MR_Word IntSectionInfo_15;
  MR_Word ImpSectionInfo_16;
  MR_Word ModuleName_17;
  MR_Word UseMap_21;
  MR_Word IntFIMSpecs_22;
  MR_Word ImpFIMSpecs_23;
  MR_Word TypeCheckedMap_24;
  MR_Word InstCheckedMap_25;
  MR_Word ModeCheckedMap_26;
  MR_Word IntTypeClasses_27;
  MR_Word IntInstances_28;
  MR_Word IntTypeRepnMap_29;
  MR_Word AccAvails0_30;
  MR_Word AccFIMs0_31;
  MR_Word AccTypeDefnsAbs0_32;
  MR_Word AccTypeDefnsMer0_33;
  MR_Word AccTypeDefnsFor0_34;
  MR_Word AccInstDefns0_35;
  MR_Word AccModeDefns0_36;
  MR_Word AccTypeClasses0_37;
  MR_Word AccInstances0_38;
  MR_Word AccPredDecls0_39;
  MR_Word AccModeDecls0_40;
  MR_Word AccClauses0_41;
  MR_Word AccForeignProcs0_42;
  MR_Word AccForeignEnums0_43;
  MR_Word AccForeignExportEnums0_44;
  MR_Word AccDeclPragmas0_45;
  MR_Word AccDeclMarkers0_46;
  MR_Word AccDeclPragmasTypeSpecConstr0_47;
  MR_Word AccDeclPragmasTypeSpec0_48;
  MR_Word AccDeclPragmasTermInfo0_49;
  MR_Word AccDeclPragmasTerm2Info0_50;
  MR_Word AccDeclPragmasSharing0_51;
  MR_Word AccDeclPragmasReuse0_52;
  MR_Word AccImplPragmas0_53;
  MR_Word AccImplMarkers0_54;
  MR_Word AccGenPragmasUnusedArgs0_55;
  MR_Word AccGenPragmasExceptions0_56;
  MR_Word AccGenPragmasTrailing0_57;
  MR_Word AccGenPragmasMMTabling0_58;
  MR_Word AccPromises0_59;
  MR_Word AccInitialises0_60;
  MR_Word AccFinalises0_61;
  MR_Word AccMutables0_62;
  MR_Word AccTypeRepns0_63;
  MR_Word IntAvails_64;
  MR_Word ImpAvails_65;
  MR_Word AccAvails1_66;
  MR_Word AccAvails_67;
  MR_Word IntFIMs_68;
  MR_Word ImpFIMs_69;
  MR_Word AccFIMs_70;
  MR_Word IntTypeDefns_71;
  MR_Word ImpTypeDefns_72;
  MR_Word IntTypeDefnsAbs_74;
  MR_Word IntTypeDefnsMer_75;
  MR_Word IntTypeDefnsFor_76;
  MR_Word ImpTypeDefnsAbs_77;
  MR_Word ImpTypeDefnsMer_78;
  MR_Word ImpTypeDefnsFor_79;
  MR_Word AccTypeDefnsAbs1_80;
  MR_Word AccTypeDefnsAbs_81;
  MR_Word AccTypeDefnsMer1_82;
  MR_Word AccTypeDefnsMer_83;
  MR_Word AccTypeDefnsFor1_84;
  MR_Word AccTypeDefnsFor_85;
  MR_Word IntInstDefns_86;
  MR_Word AccInstDefns_88;
  MR_Word IntModeDefns_89;
  MR_Word AccModeDefns_91;
  MR_Word AccTypeClasses_92;
  MR_Word AccInstances_93;
  MR_Word AccTypeRepns_94;
  MR_Word Var_98;
  MR_Word Var_100;
  MR_Word Var_101;
  MR_Word Var_102;
  MR_Word Var_103;
  MR_Word Var_110;
  MR_Word Var_111;
  MR_Word Var_112;
  MR_Word _ImpForeignEnums_73;
  MR_Word _ImpInstDefns_87;
  MR_Word _ImpModeDefns_90;

  {
    IntItemMercuryStatus_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, IntItemMercuryStatus_11, 0) = ((MR_Box) (IntItemImport_9));
  }
  {
    ImpItemMercuryStatus_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ImpItemMercuryStatus_12, 0) = ((MR_Box) (ImpItemImport_10));
  }
  {
    IntSectionInfo_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, IntSectionInfo_15, 0) = ((MR_Box) (IntItemMercuryStatus_11));
    MR_hl_field(0, IntSectionInfo_15, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  {
    ImpSectionInfo_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ImpSectionInfo_16, 0) = ((MR_Box) (ImpItemMercuryStatus_12));
    MR_hl_field(0, ImpSectionInfo_16, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  ModuleName_17 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_5, (MR_Integer) 0))));
  UseMap_21 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_5, (MR_Integer) 4))));
  IntFIMSpecs_22 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_5, (MR_Integer) 5))));
  ImpFIMSpecs_23 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_5, (MR_Integer) 6))));
  TypeCheckedMap_24 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_5, (MR_Integer) 7))));
  InstCheckedMap_25 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_5, (MR_Integer) 8))));
  ModeCheckedMap_26 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_5, (MR_Integer) 9))));
  IntTypeClasses_27 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_5, (MR_Integer) 10))));
  IntInstances_28 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_5, (MR_Integer) 11))));
  IntTypeRepnMap_29 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_5, (MR_Integer) 12))));
  AccAvails0_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_95, (MR_Integer) 0))));
  AccFIMs0_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_95, (MR_Integer) 1))));
  AccTypeDefnsAbs0_32 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_95, (MR_Integer) 2))));
  AccTypeDefnsMer0_33 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_95, (MR_Integer) 3))));
  AccTypeDefnsFor0_34 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_95, (MR_Integer) 4))));
  AccInstDefns0_35 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_95, (MR_Integer) 5))));
  AccModeDefns0_36 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_95, (MR_Integer) 6))));
  AccTypeClasses0_37 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_95, (MR_Integer) 7))));
  AccInstances0_38 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_95, (MR_Integer) 8))));
  AccPredDecls0_39 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_95, (MR_Integer) 9))));
  AccModeDecls0_40 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_95, (MR_Integer) 10))));
  AccClauses0_41 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_95, (MR_Integer) 11))));
  AccForeignProcs0_42 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_95, (MR_Integer) 12))));
  AccForeignEnums0_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_95, (MR_Integer) 13))));
  AccForeignExportEnums0_44 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_95, (MR_Integer) 14))));
  AccDeclPragmas0_45 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_95, (MR_Integer) 15))));
  AccDeclMarkers0_46 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_95, (MR_Integer) 16))));
  AccDeclPragmasTypeSpecConstr0_47 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_95, (MR_Integer) 17))));
  AccDeclPragmasTypeSpec0_48 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_95, (MR_Integer) 18))));
  AccDeclPragmasTermInfo0_49 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_95, (MR_Integer) 19))));
  AccDeclPragmasTerm2Info0_50 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_95, (MR_Integer) 20))));
  AccDeclPragmasSharing0_51 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_95, (MR_Integer) 21))));
  AccDeclPragmasReuse0_52 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_95, (MR_Integer) 22))));
  AccImplPragmas0_53 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_95, (MR_Integer) 23))));
  AccImplMarkers0_54 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_95, (MR_Integer) 24))));
  AccGenPragmasUnusedArgs0_55 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_95, (MR_Integer) 25))));
  AccGenPragmasExceptions0_56 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_95, (MR_Integer) 26))));
  AccGenPragmasTrailing0_57 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_95, (MR_Integer) 27))));
  AccGenPragmasMMTabling0_58 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_95, (MR_Integer) 28))));
  AccPromises0_59 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_95, (MR_Integer) 29))));
  AccInitialises0_60 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_95, (MR_Integer) 30))));
  AccFinalises0_61 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_95, (MR_Integer) 31))));
  AccMutables0_62 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_95, (MR_Integer) 32))));
  AccTypeRepns0_63 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_95, (MR_Integer) 33))));
  parse_tree__item_util__section_use_map_to_item_avails_3_p_0(UseMap_21, &IntAvails_64, &ImpAvails_65);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_avails_4_p_0(IntItemMercuryStatus_11, IntAvails_64, AccAvails0_30, &AccAvails1_66);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_avails_4_p_0(ImpItemMercuryStatus_12, ImpAvails_65, AccAvails1_66, &AccAvails_67);
  Var_98 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), IntFIMSpecs_22);
  IntFIMs_68 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_3[19]), Var_98);
  Var_100 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), ImpFIMSpecs_23);
  ImpFIMs_69 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_3[20]), Var_100);
  Var_102 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), IntFIMs_68);
  Var_103 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), ImpFIMs_69);
  Var_101 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), Var_102, Var_103);
  AccFIMs_70 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), AccFIMs0_31, Var_101);
  parse_tree__item_util__type_ctor_checked_map_get_src_defns_4_p_0(TypeCheckedMap_24, &IntTypeDefns_71, &ImpTypeDefns_72, &_ImpForeignEnums_73);
  hlds__make_hlds__make_hlds_separate_items__separate_type_defns_abs_mer_for_7_p_0(IntTypeDefns_71, (MR_Word) ((MR_Unsigned) 0U), &IntTypeDefnsAbs_74, (MR_Word) ((MR_Unsigned) 0U), &IntTypeDefnsMer_75, (MR_Word) ((MR_Unsigned) 0U), &IntTypeDefnsFor_76);
  hlds__make_hlds__make_hlds_separate_items__separate_type_defns_abs_mer_for_7_p_0(ImpTypeDefns_72, (MR_Word) ((MR_Unsigned) 0U), &ImpTypeDefnsAbs_77, (MR_Word) ((MR_Unsigned) 0U), &ImpTypeDefnsMer_78, (MR_Word) ((MR_Unsigned) 0U), &ImpTypeDefnsFor_79);
  hlds__make_hlds__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[1]), IntSectionInfo_15, IntTypeDefnsAbs_74, AccTypeDefnsAbs0_32, &AccTypeDefnsAbs1_80);
  hlds__make_hlds__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[1]), ImpSectionInfo_16, ImpTypeDefnsAbs_77, AccTypeDefnsAbs1_80, &AccTypeDefnsAbs_81);
  hlds__make_hlds__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[1]), IntSectionInfo_15, IntTypeDefnsMer_75, AccTypeDefnsMer0_33, &AccTypeDefnsMer1_82);
  hlds__make_hlds__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[1]), ImpSectionInfo_16, ImpTypeDefnsMer_78, AccTypeDefnsMer1_82, &AccTypeDefnsMer_83);
  hlds__make_hlds__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[1]), IntSectionInfo_15, IntTypeDefnsFor_76, AccTypeDefnsFor0_34, &AccTypeDefnsFor1_84);
  hlds__make_hlds__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[1]), ImpSectionInfo_16, ImpTypeDefnsFor_79, AccTypeDefnsFor1_84, &AccTypeDefnsFor_85);
  parse_tree__item_util__inst_ctor_checked_map_get_src_defns_3_p_0(InstCheckedMap_25, &IntInstDefns_86, &_ImpInstDefns_87);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[3]), IntItemMercuryStatus_11, IntInstDefns_86, AccInstDefns0_35, &AccInstDefns_88);
  parse_tree__item_util__mode_ctor_checked_map_get_src_defns_3_p_0(ModeCheckedMap_26, &IntModeDefns_89, &_ImpModeDefns_90);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[5]), IntItemMercuryStatus_11, IntModeDefns_89, AccModeDefns0_36, &AccModeDefns_91);
  hlds__make_hlds__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), IntSectionInfo_15, IntTypeClasses_27, AccTypeClasses0_37, &AccTypeClasses_92);
  Var_110 = (MR_Word) (IntInstances_28);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), IntItemMercuryStatus_11, Var_110, AccInstances0_38, &AccInstances_93);
  {
    Var_112 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_112, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
    MR_hl_field(0, Var_112, 1) = ((MR_Box) (IntTypeRepnMap_29));
  }
  {
    Var_111 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_111, 0) = ((MR_Box) (ModuleName_17));
    MR_hl_field(0, Var_111, 1) = ((MR_Box) (Var_112));
  }
  {
    AccTypeRepns_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, AccTypeRepns_94, 0) = ((MR_Box) (Var_111));
    MR_hl_field(1, AccTypeRepns_94, 1) = ((MR_Box) (AccTypeRepns0_63));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (34 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Acc_96 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (AccAvails_67));
    MR_hl_field(0, base, 1) = ((MR_Box) (AccFIMs_70));
    MR_hl_field(0, base, 2) = ((MR_Box) (AccTypeDefnsAbs_81));
    MR_hl_field(0, base, 3) = ((MR_Box) (AccTypeDefnsMer_83));
    MR_hl_field(0, base, 4) = ((MR_Box) (AccTypeDefnsFor_85));
    MR_hl_field(0, base, 5) = ((MR_Box) (AccInstDefns_88));
    MR_hl_field(0, base, 6) = ((MR_Box) (AccModeDefns_91));
    MR_hl_field(0, base, 7) = ((MR_Box) (AccTypeClasses_92));
    MR_hl_field(0, base, 8) = ((MR_Box) (AccInstances_93));
    MR_hl_field(0, base, 9) = ((MR_Box) (AccPredDecls0_39));
    MR_hl_field(0, base, 10) = ((MR_Box) (AccModeDecls0_40));
    MR_hl_field(0, base, 11) = ((MR_Box) (AccClauses0_41));
    MR_hl_field(0, base, 12) = ((MR_Box) (AccForeignProcs0_42));
    MR_hl_field(0, base, 13) = ((MR_Box) (AccForeignEnums0_43));
    MR_hl_field(0, base, 14) = ((MR_Box) (AccForeignExportEnums0_44));
    MR_hl_field(0, base, 15) = ((MR_Box) (AccDeclPragmas0_45));
    MR_hl_field(0, base, 16) = ((MR_Box) (AccDeclMarkers0_46));
    MR_hl_field(0, base, 17) = ((MR_Box) (AccDeclPragmasTypeSpecConstr0_47));
    MR_hl_field(0, base, 18) = ((MR_Box) (AccDeclPragmasTypeSpec0_48));
    MR_hl_field(0, base, 19) = ((MR_Box) (AccDeclPragmasTermInfo0_49));
    MR_hl_field(0, base, 20) = ((MR_Box) (AccDeclPragmasTerm2Info0_50));
    MR_hl_field(0, base, 21) = ((MR_Box) (AccDeclPragmasSharing0_51));
    MR_hl_field(0, base, 22) = ((MR_Box) (AccDeclPragmasReuse0_52));
    MR_hl_field(0, base, 23) = ((MR_Box) (AccImplPragmas0_53));
    MR_hl_field(0, base, 24) = ((MR_Box) (AccImplMarkers0_54));
    MR_hl_field(0, base, 25) = ((MR_Box) (AccGenPragmasUnusedArgs0_55));
    MR_hl_field(0, base, 26) = ((MR_Box) (AccGenPragmasExceptions0_56));
    MR_hl_field(0, base, 27) = ((MR_Box) (AccGenPragmasTrailing0_57));
    MR_hl_field(0, base, 28) = ((MR_Box) (AccGenPragmasMMTabling0_58));
    MR_hl_field(0, base, 29) = ((MR_Box) (AccPromises0_59));
    MR_hl_field(0, base, 30) = ((MR_Box) (AccInitialises0_60));
    MR_hl_field(0, base, 31) = ((MR_Box) (AccFinalises0_61));
    MR_hl_field(0, base, 32) = ((MR_Box) (AccMutables0_62));
    MR_hl_field(0, base, 33) = ((MR_Box) (AccTypeRepns_94));
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_separate_items__acc_direct_int1_spec_3_p_0(
  MR_Word DirectInt1Spec_4,
  MR_Word STATE_VARIABLE_Acc_0_8,
  MR_Word * STATE_VARIABLE_Acc_9)
{
  MR_Word ParseTreeInt1_6 = ((MR_Word) ((MR_hl_field(0, DirectInt1Spec_4, (MR_Integer) 0))));
  MR_Word ReadWhy1_7 = ((MR_Unsigned) ((MR_hl_field(0, DirectInt1Spec_4, (MR_Integer) 1))) & (MR_Integer) 7);

  hlds__make_hlds__make_hlds_separate_items__acc_parse_tree_int1_4_p_0(ParseTreeInt1_6, ReadWhy1_7, STATE_VARIABLE_Acc_0_8, STATE_VARIABLE_Acc_9);
}

static MR_Box MR_CALL 
hlds__make_hlds__make_hlds_separate_items__acc_parse_tree_int1_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = parse_tree__item_util__fim_spec_to_item_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__make_hlds__make_hlds_separate_items__acc_parse_tree_int1_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = parse_tree__item_util__fim_spec_to_item_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
hlds__make_hlds__make_hlds_separate_items__acc_parse_tree_int1_4_p_0(
  MR_Word ParseTreeInt1_5,
  MR_Word ReadWhy1_6,
  MR_Word STATE_VARIABLE_Acc_0_108,
  MR_Word * STATE_VARIABLE_Acc_109)
{
  MR_Word IntNeedQual_9;
  MR_Word IntItemImport_10;
  MR_Word ImpItemImport_11;
  MR_Word ImpNeedQual_12;
  MR_Word IntItemMercuryStatus_13;
  MR_Word ImpItemMercuryStatus_14;
  MR_Word IntSectionInfo_15;
  MR_Word ImpSectionInfo_16;
  MR_Word ModuleName_17;
  MR_Word UseMap_21;
  MR_Word IntFIMSpecs_22;
  MR_Word ImpFIMSpecs_23;
  MR_Word TypeCheckedMap_24;
  MR_Word InstCheckedMap_25;
  MR_Word ModeCheckedMap_26;
  MR_Word IntTypeClasses_27;
  MR_Word IntInstances_28;
  MR_Word IntPredDecls_29;
  MR_Word IntModeDecls_30;
  MR_Word IntDeclPragmas_31;
  MR_Word IntDeclMarkers_32;
  MR_Word IntPromises_33;
  MR_Word IntTypeRepnMap_34;
  MR_Word ImpTypeClasses_35;
  MR_Word AccAvails0_36;
  MR_Word AccFIMs0_37;
  MR_Word AccTypeDefnsAbs0_38;
  MR_Word AccTypeDefnsMer0_39;
  MR_Word AccTypeDefnsFor0_40;
  MR_Word AccInstDefns0_41;
  MR_Word AccModeDefns0_42;
  MR_Word AccTypeClasses0_43;
  MR_Word AccInstances0_44;
  MR_Word AccPredDecls0_45;
  MR_Word AccModeDecls0_46;
  MR_Word AccClauses0_47;
  MR_Word AccForeignProcs0_48;
  MR_Word AccForeignEnums0_49;
  MR_Word AccForeignExportEnums0_50;
  MR_Word AccDeclPragmas0_51;
  MR_Word AccDeclMarkers0_52;
  MR_Word AccDeclPragmasTypeSpecConstr0_53;
  MR_Word AccDeclPragmasTypeSpec0_54;
  MR_Word AccDeclPragmasTermInfo0_55;
  MR_Word AccDeclPragmasTerm2Info0_56;
  MR_Word AccDeclPragmasSharing0_57;
  MR_Word AccDeclPragmasReuse0_58;
  MR_Word AccImplPragmas0_59;
  MR_Word AccImplMarkers0_60;
  MR_Word AccGenPragmasUnusedArgs0_61;
  MR_Word AccGenPragmasExceptions0_62;
  MR_Word AccGenPragmasTrailing0_63;
  MR_Word AccGenPragmasMMTabling0_64;
  MR_Word AccPromises0_65;
  MR_Word AccInitialises0_66;
  MR_Word AccFinalises0_67;
  MR_Word AccMutables0_68;
  MR_Word AccTypeRepns0_69;
  MR_Word IntAvails_70;
  MR_Word ImpAvails_71;
  MR_Word AccAvails1_72;
  MR_Word AccAvails_73;
  MR_Word IntFIMs_74;
  MR_Word ImpFIMs_75;
  MR_Word AccFIMs_76;
  MR_Word IntTypeDefns_77;
  MR_Word ImpTypeDefns_78;
  MR_Word ImpForeignEnums_79;
  MR_Word IntTypeDefnsAbs_80;
  MR_Word IntTypeDefnsMer_81;
  MR_Word IntTypeDefnsFor_82;
  MR_Word ImpTypeDefnsAbs_83;
  MR_Word ImpTypeDefnsMer_84;
  MR_Word ImpTypeDefnsFor_85;
  MR_Word AccTypeDefnsAbs1_86;
  MR_Word AccTypeDefnsAbs_87;
  MR_Word AccTypeDefnsMer1_88;
  MR_Word AccTypeDefnsMer_89;
  MR_Word AccTypeDefnsFor1_90;
  MR_Word AccTypeDefnsFor_91;
  MR_Word IntInstDefns_92;
  MR_Word AccInstDefns_94;
  MR_Word IntModeDefns_95;
  MR_Word AccModeDefns_97;
  MR_Word AccTypeClasses1_98;
  MR_Word AccTypeClasses_99;
  MR_Word AccInstances_100;
  MR_Word AccPredDecls_101;
  MR_Word AccModeDecls_102;
  MR_Word AccForeignEnums_103;
  MR_Word AccDeclPragmas_104;
  MR_Word AccDeclMarkers_105;
  MR_Word AccPromises_106;
  MR_Word AccTypeRepns_107;
  MR_Word Var_113;
  MR_Word Var_115;
  MR_Word Var_116;
  MR_Word Var_117;
  MR_Word Var_118;
  MR_Word Var_125;
  MR_Word Var_126;
  MR_Word Var_127;
  MR_Word Var_128;
  MR_Word _ImpInstDefns_93;
  MR_Word _ImpModeDefns_96;

  switch (ReadWhy1_6) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
      {
        IntNeedQual_9 = (MR_Integer) 1;
        IntItemImport_10 = (MR_Word) (MR_mkword(1, &hlds__make_hlds__make_hlds_separate_items_scalar_common_4[1]));
        ImpItemImport_11 = (MR_Word) ((MR_Unsigned) 0U);
        ImpNeedQual_12 = (MR_Integer) 0;
      }
      break;
    case (MR_Integer) 3:
      {
        IntNeedQual_9 = (MR_Integer) 0;
        IntItemImport_10 = (MR_Word) (MR_mkword(1, &hlds__make_hlds__make_hlds_separate_items_scalar_common_4[1]));
        ImpItemImport_11 = (MR_Word) ((MR_Unsigned) 0U);
        ImpNeedQual_12 = (MR_Integer) 0;
      }
      break;
    case (MR_Integer) 0:
      {
        IntNeedQual_9 = (MR_Integer) 1;
        IntItemImport_10 = (MR_Word) (MR_mkword(1, &hlds__make_hlds__make_hlds_separate_items_scalar_common_4[2]));
        ImpItemImport_11 = (MR_Word) ((MR_Unsigned) 0U);
        ImpNeedQual_12 = (MR_Integer) 0;
      }
      break;
    case (MR_Integer) 1:
      {
        IntNeedQual_9 = (MR_Integer) 0;
        IntItemImport_10 = (MR_Word) (MR_mkword(1, &hlds__make_hlds__make_hlds_separate_items_scalar_common_4[2]));
        ImpItemImport_11 = (MR_Word) ((MR_Unsigned) 0U);
        ImpNeedQual_12 = (MR_Integer) 0;
      }
      break;
    case (MR_Integer) 4:
      {
        IntNeedQual_9 = (MR_Integer) 1;
        IntItemImport_10 = (MR_Word) (MR_mkword(1, &hlds__make_hlds__make_hlds_separate_items_scalar_common_4[2]));
        ImpItemImport_11 = (MR_Word) ((MR_Unsigned) 0U);
        ImpNeedQual_12 = (MR_Integer) 0;
      }
      break;
    case (MR_Integer) 5:
      {
        IntItemImport_10 = (MR_Word) ((MR_Unsigned) 4U);
        ImpItemImport_11 = (MR_Word) ((MR_Unsigned) 4U);
        IntNeedQual_9 = (MR_Integer) 0;
        ImpNeedQual_12 = (MR_Integer) 0;
      }
      break;
    case (MR_Integer) 6:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.make_hlds_separate_items.acc_parse_tree_int1\'/4", (MR_String) "rwi1_type_repn");
        return;
      }
      break;
  }
  {
    IntItemMercuryStatus_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, IntItemMercuryStatus_13, 0) = ((MR_Box) (IntItemImport_10));
  }
  {
    ImpItemMercuryStatus_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ImpItemMercuryStatus_14, 0) = ((MR_Box) (ImpItemImport_11));
  }
  {
    IntSectionInfo_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, IntSectionInfo_15, 0) = ((MR_Box) (IntItemMercuryStatus_13));
    MR_hl_field(0, IntSectionInfo_15, 1) = (MR_Box) ((MR_Unsigned) (IntNeedQual_9));
  }
  {
    ImpSectionInfo_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ImpSectionInfo_16, 0) = ((MR_Box) (ImpItemMercuryStatus_14));
    MR_hl_field(0, ImpSectionInfo_16, 1) = (MR_Box) ((MR_Unsigned) (ImpNeedQual_12));
  }
  ModuleName_17 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_5, (MR_Integer) 0))));
  UseMap_21 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_5, (MR_Integer) 4))));
  IntFIMSpecs_22 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_5, (MR_Integer) 5))));
  ImpFIMSpecs_23 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_5, (MR_Integer) 6))));
  TypeCheckedMap_24 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_5, (MR_Integer) 7))));
  InstCheckedMap_25 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_5, (MR_Integer) 8))));
  ModeCheckedMap_26 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_5, (MR_Integer) 9))));
  IntTypeClasses_27 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_5, (MR_Integer) 10))));
  IntInstances_28 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_5, (MR_Integer) 11))));
  IntPredDecls_29 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_5, (MR_Integer) 12))));
  IntModeDecls_30 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_5, (MR_Integer) 13))));
  IntDeclPragmas_31 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_5, (MR_Integer) 14))));
  IntDeclMarkers_32 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_5, (MR_Integer) 15))));
  IntPromises_33 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_5, (MR_Integer) 16))));
  IntTypeRepnMap_34 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_5, (MR_Integer) 17))));
  ImpTypeClasses_35 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_5, (MR_Integer) 18))));
  AccAvails0_36 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_108, (MR_Integer) 0))));
  AccFIMs0_37 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_108, (MR_Integer) 1))));
  AccTypeDefnsAbs0_38 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_108, (MR_Integer) 2))));
  AccTypeDefnsMer0_39 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_108, (MR_Integer) 3))));
  AccTypeDefnsFor0_40 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_108, (MR_Integer) 4))));
  AccInstDefns0_41 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_108, (MR_Integer) 5))));
  AccModeDefns0_42 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_108, (MR_Integer) 6))));
  AccTypeClasses0_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_108, (MR_Integer) 7))));
  AccInstances0_44 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_108, (MR_Integer) 8))));
  AccPredDecls0_45 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_108, (MR_Integer) 9))));
  AccModeDecls0_46 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_108, (MR_Integer) 10))));
  AccClauses0_47 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_108, (MR_Integer) 11))));
  AccForeignProcs0_48 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_108, (MR_Integer) 12))));
  AccForeignEnums0_49 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_108, (MR_Integer) 13))));
  AccForeignExportEnums0_50 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_108, (MR_Integer) 14))));
  AccDeclPragmas0_51 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_108, (MR_Integer) 15))));
  AccDeclMarkers0_52 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_108, (MR_Integer) 16))));
  AccDeclPragmasTypeSpecConstr0_53 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_108, (MR_Integer) 17))));
  AccDeclPragmasTypeSpec0_54 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_108, (MR_Integer) 18))));
  AccDeclPragmasTermInfo0_55 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_108, (MR_Integer) 19))));
  AccDeclPragmasTerm2Info0_56 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_108, (MR_Integer) 20))));
  AccDeclPragmasSharing0_57 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_108, (MR_Integer) 21))));
  AccDeclPragmasReuse0_58 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_108, (MR_Integer) 22))));
  AccImplPragmas0_59 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_108, (MR_Integer) 23))));
  AccImplMarkers0_60 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_108, (MR_Integer) 24))));
  AccGenPragmasUnusedArgs0_61 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_108, (MR_Integer) 25))));
  AccGenPragmasExceptions0_62 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_108, (MR_Integer) 26))));
  AccGenPragmasTrailing0_63 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_108, (MR_Integer) 27))));
  AccGenPragmasMMTabling0_64 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_108, (MR_Integer) 28))));
  AccPromises0_65 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_108, (MR_Integer) 29))));
  AccInitialises0_66 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_108, (MR_Integer) 30))));
  AccFinalises0_67 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_108, (MR_Integer) 31))));
  AccMutables0_68 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_108, (MR_Integer) 32))));
  AccTypeRepns0_69 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_108, (MR_Integer) 33))));
  parse_tree__item_util__section_use_map_to_item_avails_3_p_0(UseMap_21, &IntAvails_70, &ImpAvails_71);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_avails_4_p_0(IntItemMercuryStatus_13, IntAvails_70, AccAvails0_36, &AccAvails1_72);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_avails_4_p_0(ImpItemMercuryStatus_14, ImpAvails_71, AccAvails1_72, &AccAvails_73);
  Var_113 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), IntFIMSpecs_22);
  IntFIMs_74 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_3[17]), Var_113);
  Var_115 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), ImpFIMSpecs_23);
  ImpFIMs_75 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_3[18]), Var_115);
  Var_117 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), IntFIMs_74);
  Var_118 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), ImpFIMs_75);
  Var_116 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), Var_117, Var_118);
  AccFIMs_76 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), AccFIMs0_37, Var_116);
  parse_tree__item_util__type_ctor_checked_map_get_src_defns_4_p_0(TypeCheckedMap_24, &IntTypeDefns_77, &ImpTypeDefns_78, &ImpForeignEnums_79);
  hlds__make_hlds__make_hlds_separate_items__separate_type_defns_abs_mer_for_7_p_0(IntTypeDefns_77, (MR_Word) ((MR_Unsigned) 0U), &IntTypeDefnsAbs_80, (MR_Word) ((MR_Unsigned) 0U), &IntTypeDefnsMer_81, (MR_Word) ((MR_Unsigned) 0U), &IntTypeDefnsFor_82);
  hlds__make_hlds__make_hlds_separate_items__separate_type_defns_abs_mer_for_7_p_0(ImpTypeDefns_78, (MR_Word) ((MR_Unsigned) 0U), &ImpTypeDefnsAbs_83, (MR_Word) ((MR_Unsigned) 0U), &ImpTypeDefnsMer_84, (MR_Word) ((MR_Unsigned) 0U), &ImpTypeDefnsFor_85);
  hlds__make_hlds__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[1]), IntSectionInfo_15, IntTypeDefnsAbs_80, AccTypeDefnsAbs0_38, &AccTypeDefnsAbs1_86);
  hlds__make_hlds__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[1]), ImpSectionInfo_16, ImpTypeDefnsAbs_83, AccTypeDefnsAbs1_86, &AccTypeDefnsAbs_87);
  hlds__make_hlds__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[1]), IntSectionInfo_15, IntTypeDefnsMer_81, AccTypeDefnsMer0_39, &AccTypeDefnsMer1_88);
  hlds__make_hlds__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[1]), ImpSectionInfo_16, ImpTypeDefnsMer_84, AccTypeDefnsMer1_88, &AccTypeDefnsMer_89);
  hlds__make_hlds__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[1]), IntSectionInfo_15, IntTypeDefnsFor_82, AccTypeDefnsFor0_40, &AccTypeDefnsFor1_90);
  hlds__make_hlds__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[1]), ImpSectionInfo_16, ImpTypeDefnsFor_85, AccTypeDefnsFor1_90, &AccTypeDefnsFor_91);
  parse_tree__item_util__inst_ctor_checked_map_get_src_defns_3_p_0(InstCheckedMap_25, &IntInstDefns_92, &_ImpInstDefns_93);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[3]), IntItemMercuryStatus_13, IntInstDefns_92, AccInstDefns0_41, &AccInstDefns_94);
  parse_tree__item_util__mode_ctor_checked_map_get_src_defns_3_p_0(ModeCheckedMap_26, &IntModeDefns_95, &_ImpModeDefns_96);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[5]), IntItemMercuryStatus_13, IntModeDefns_95, AccModeDefns0_42, &AccModeDefns_97);
  hlds__make_hlds__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), IntSectionInfo_15, IntTypeClasses_27, AccTypeClasses0_43, &AccTypeClasses1_98);
  Var_125 = (MR_Word) (ImpTypeClasses_35);
  hlds__make_hlds__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), ImpSectionInfo_16, Var_125, AccTypeClasses1_98, &AccTypeClasses_99);
  Var_126 = (MR_Word) (IntInstances_28);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), IntItemMercuryStatus_13, Var_126, AccInstances0_44, &AccInstances_100);
  hlds__make_hlds__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), IntSectionInfo_15, IntPredDecls_29, AccPredDecls0_45, &AccPredDecls_101);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), IntItemMercuryStatus_13, IntModeDecls_30, AccModeDecls0_46, &AccModeDecls_102);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_tuple_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), ImpItemMercuryStatus_14, ImpForeignEnums_79, AccForeignEnums0_49, &AccForeignEnums_103);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_pragma_info_0), IntItemMercuryStatus_13, IntDeclPragmas_31, AccDeclPragmas0_51, &AccDeclPragmas_104);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_marker_info_0), IntItemMercuryStatus_13, IntDeclMarkers_32, AccDeclMarkers0_52, &AccDeclMarkers_105);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), IntItemMercuryStatus_13, IntPromises_33, AccPromises0_65, &AccPromises_106);
  {
    Var_128 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_128, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(0, Var_128, 1) = ((MR_Box) (IntTypeRepnMap_34));
  }
  {
    Var_127 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_127, 0) = ((MR_Box) (ModuleName_17));
    MR_hl_field(0, Var_127, 1) = ((MR_Box) (Var_128));
  }
  {
    AccTypeRepns_107 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, AccTypeRepns_107, 0) = ((MR_Box) (Var_127));
    MR_hl_field(1, AccTypeRepns_107, 1) = ((MR_Box) (AccTypeRepns0_69));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (34 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Acc_109 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (AccAvails_73));
    MR_hl_field(0, base, 1) = ((MR_Box) (AccFIMs_76));
    MR_hl_field(0, base, 2) = ((MR_Box) (AccTypeDefnsAbs_87));
    MR_hl_field(0, base, 3) = ((MR_Box) (AccTypeDefnsMer_89));
    MR_hl_field(0, base, 4) = ((MR_Box) (AccTypeDefnsFor_91));
    MR_hl_field(0, base, 5) = ((MR_Box) (AccInstDefns_94));
    MR_hl_field(0, base, 6) = ((MR_Box) (AccModeDefns_97));
    MR_hl_field(0, base, 7) = ((MR_Box) (AccTypeClasses_99));
    MR_hl_field(0, base, 8) = ((MR_Box) (AccInstances_100));
    MR_hl_field(0, base, 9) = ((MR_Box) (AccPredDecls_101));
    MR_hl_field(0, base, 10) = ((MR_Box) (AccModeDecls_102));
    MR_hl_field(0, base, 11) = ((MR_Box) (AccClauses0_47));
    MR_hl_field(0, base, 12) = ((MR_Box) (AccForeignProcs0_48));
    MR_hl_field(0, base, 13) = ((MR_Box) (AccForeignEnums_103));
    MR_hl_field(0, base, 14) = ((MR_Box) (AccForeignExportEnums0_50));
    MR_hl_field(0, base, 15) = ((MR_Box) (AccDeclPragmas_104));
    MR_hl_field(0, base, 16) = ((MR_Box) (AccDeclMarkers_105));
    MR_hl_field(0, base, 17) = ((MR_Box) (AccDeclPragmasTypeSpecConstr0_53));
    MR_hl_field(0, base, 18) = ((MR_Box) (AccDeclPragmasTypeSpec0_54));
    MR_hl_field(0, base, 19) = ((MR_Box) (AccDeclPragmasTermInfo0_55));
    MR_hl_field(0, base, 20) = ((MR_Box) (AccDeclPragmasTerm2Info0_56));
    MR_hl_field(0, base, 21) = ((MR_Box) (AccDeclPragmasSharing0_57));
    MR_hl_field(0, base, 22) = ((MR_Box) (AccDeclPragmasReuse0_58));
    MR_hl_field(0, base, 23) = ((MR_Box) (AccImplPragmas0_59));
    MR_hl_field(0, base, 24) = ((MR_Box) (AccImplMarkers0_60));
    MR_hl_field(0, base, 25) = ((MR_Box) (AccGenPragmasUnusedArgs0_61));
    MR_hl_field(0, base, 26) = ((MR_Box) (AccGenPragmasExceptions0_62));
    MR_hl_field(0, base, 27) = ((MR_Box) (AccGenPragmasTrailing0_63));
    MR_hl_field(0, base, 28) = ((MR_Box) (AccGenPragmasMMTabling0_64));
    MR_hl_field(0, base, 29) = ((MR_Box) (AccPromises_106));
    MR_hl_field(0, base, 30) = ((MR_Box) (AccInitialises0_66));
    MR_hl_field(0, base, 31) = ((MR_Box) (AccFinalises0_67));
    MR_hl_field(0, base, 32) = ((MR_Box) (AccMutables0_68));
    MR_hl_field(0, base, 33) = ((MR_Box) (AccTypeRepns_107));
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_separate_items__acc_ancestor_int_spec_3_p_0(
  MR_Word AncestorIntSpec_4,
  MR_Word STATE_VARIABLE_Acc_0_8,
  MR_Word * STATE_VARIABLE_Acc_9)
{
  MR_Word ParseTreeInt0_6 = ((MR_Word) ((MR_hl_field(0, AncestorIntSpec_4, (MR_Integer) 0))));
  MR_Word ReadWhy0_7 = ((MR_Unsigned) ((MR_hl_field(0, AncestorIntSpec_4, (MR_Integer) 1))) & (MR_Integer) 1);

  hlds__make_hlds__make_hlds_separate_items__acc_parse_tree_int0_4_p_0(ParseTreeInt0_6, ReadWhy0_7, STATE_VARIABLE_Acc_0_8, STATE_VARIABLE_Acc_9);
}

static MR_Box MR_CALL 
hlds__make_hlds__make_hlds_separate_items__acc_parse_tree_int0_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = parse_tree__item_util__fim_spec_to_item_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__make_hlds__make_hlds_separate_items__acc_parse_tree_int0_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = parse_tree__item_util__fim_spec_to_item_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
hlds__make_hlds__make_hlds_separate_items__acc_parse_tree_int0_4_p_0(
  MR_Word ParseTreeInt0_5,
  MR_Word ReadWhy0_6,
  MR_Word STATE_VARIABLE_Acc_0_121,
  MR_Word * STATE_VARIABLE_Acc_122)
{
  MR_Word IntItemImport_10;
  MR_Word ImpItemImport_11;
  MR_Word IntNeedQual_12;
  MR_Word ImpNeedQual_13;
  MR_Word IntItemMercuryStatus_14;
  MR_Word ImpItemMercuryStatus_15;
  MR_Word IntSectionInfo_16;
  MR_Word ImpSectionInfo_17;
  MR_Word ImportUseMap_22;
  MR_Word IntFIMSpecs_23;
  MR_Word ImpFIMSpecs_24;
  MR_Word TypeCtorCheckedMap_25;
  MR_Word InstCtorCheckedMap_26;
  MR_Word ModeCtorCheckedMap_27;
  MR_Word IntTypeClasses_28;
  MR_Word IntInstances_29;
  MR_Word IntPredDecls_30;
  MR_Word IntModeDecls_31;
  MR_Word IntDeclPragmas_32;
  MR_Word IntDeclMarkers_33;
  MR_Word IntPromises_34;
  MR_Word ImpTypeClasses_35;
  MR_Word ImpInstances_36;
  MR_Word ImpPredDecls_37;
  MR_Word ImpModeDecls_38;
  MR_Word ImpDeclPragmas_39;
  MR_Word ImpDeclMarkers_40;
  MR_Word ImpPromises_41;
  MR_Word AccAvails0_42;
  MR_Word AccFIMs0_43;
  MR_Word AccTypeDefnsAbs0_44;
  MR_Word AccTypeDefnsMer0_45;
  MR_Word AccTypeDefnsFor0_46;
  MR_Word AccInstDefns0_47;
  MR_Word AccModeDefns0_48;
  MR_Word AccTypeClasses0_49;
  MR_Word AccInstances0_50;
  MR_Word AccPredDecls0_51;
  MR_Word AccModeDecls0_52;
  MR_Word AccClauses0_53;
  MR_Word AccForeignProcs0_54;
  MR_Word AccForeignEnums0_55;
  MR_Word AccForeignExportEnums0_56;
  MR_Word AccDeclPragmas0_57;
  MR_Word AccDeclMarkers0_58;
  MR_Word AccDeclPragmasTypeSpecConstr0_59;
  MR_Word AccDeclPragmasTypeSpec0_60;
  MR_Word AccDeclPragmasTermInfo0_61;
  MR_Word AccDeclPragmasTerm2Info0_62;
  MR_Word AccDeclPragmasSharing0_63;
  MR_Word AccDeclPragmasReuse0_64;
  MR_Word AccImplPragmas0_65;
  MR_Word AccImplMarkers0_66;
  MR_Word AccGenPragmasUnusedArgs0_67;
  MR_Word AccGenPragmasExceptions0_68;
  MR_Word AccGenPragmasTrailing0_69;
  MR_Word AccGenPragmasMMTabling0_70;
  MR_Word AccPromises0_71;
  MR_Word AccInitialises0_72;
  MR_Word AccFinalises0_73;
  MR_Word AccMutables0_74;
  MR_Word AccTypeRepns0_75;
  MR_Word IntAvails_76;
  MR_Word ImpAvails_77;
  MR_Word AccAvails1_78;
  MR_Word AccAvails_79;
  MR_Word IntFIMs_80;
  MR_Word ImpFIMs_81;
  MR_Word AccFIMs_82;
  MR_Word IntTypeDefns_83;
  MR_Word ImpTypeDefns_84;
  MR_Word ImpForeignEnums_85;
  MR_Word IntTypeDefnsAbs_86;
  MR_Word IntTypeDefnsMer_87;
  MR_Word IntTypeDefnsFor_88;
  MR_Word ImpTypeDefnsAbs_89;
  MR_Word ImpTypeDefnsMer_90;
  MR_Word ImpTypeDefnsFor_91;
  MR_Word AccTypeDefnsAbs1_92;
  MR_Word AccTypeDefnsAbs_93;
  MR_Word AccTypeDefnsMer1_94;
  MR_Word AccTypeDefnsMer_95;
  MR_Word AccTypeDefnsFor1_96;
  MR_Word AccTypeDefnsFor_97;
  MR_Word IntInstDefns_98;
  MR_Word ImpInstDefns_99;
  MR_Word AccInstDefns1_100;
  MR_Word AccInstDefns_101;
  MR_Word IntModeDefns_102;
  MR_Word ImpModeDefns_103;
  MR_Word AccModeDefns1_104;
  MR_Word AccModeDefns_105;
  MR_Word AccTypeClasses1_106;
  MR_Word AccTypeClasses_107;
  MR_Word AccInstances1_108;
  MR_Word AccInstances_109;
  MR_Word AccPredDecls1_110;
  MR_Word AccPredDecls_111;
  MR_Word AccModeDecls1_112;
  MR_Word AccModeDecls_113;
  MR_Word AccForeignEnums_114;
  MR_Word AccDeclPragmas1_115;
  MR_Word AccDeclMarkers1_116;
  MR_Word AccDeclPragmas_117;
  MR_Word AccDeclMarkers_118;
  MR_Word AccPromises1_119;
  MR_Word AccPromises_120;
  MR_Word Var_124;
  MR_Word Var_126;
  MR_Word Var_127;
  MR_Word Var_128;
  MR_Word Var_129;
  MR_Word Var_136;
  MR_Word Var_137;

  switch (ReadWhy0_6) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        IntItemImport_10 = (MR_Word) ((MR_Unsigned) 4U);
        ImpItemImport_11 = (MR_Word) ((MR_Unsigned) 4U);
        IntNeedQual_12 = (MR_Integer) 0;
        ImpNeedQual_13 = (MR_Integer) 0;
      }
      break;
    case (MR_Integer) 0:
      {
        IntItemImport_10 = (MR_Word) (MR_mkword(1, &hlds__make_hlds__make_hlds_separate_items_scalar_common_4[3]));
        ImpItemImport_11 = (MR_Word) (MR_mkword(1, &hlds__make_hlds__make_hlds_separate_items_scalar_common_4[4]));
        IntNeedQual_12 = (MR_Integer) 1;
        ImpNeedQual_13 = (MR_Integer) 1;
      }
      break;
  }
  {
    IntItemMercuryStatus_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, IntItemMercuryStatus_14, 0) = ((MR_Box) (IntItemImport_10));
  }
  {
    ImpItemMercuryStatus_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ImpItemMercuryStatus_15, 0) = ((MR_Box) (ImpItemImport_11));
  }
  {
    IntSectionInfo_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, IntSectionInfo_16, 0) = ((MR_Box) (IntItemMercuryStatus_14));
    MR_hl_field(0, IntSectionInfo_16, 1) = (MR_Box) ((MR_Unsigned) (IntNeedQual_12));
  }
  {
    ImpSectionInfo_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ImpSectionInfo_17, 0) = ((MR_Box) (ImpItemMercuryStatus_15));
    MR_hl_field(0, ImpSectionInfo_17, 1) = (MR_Box) ((MR_Unsigned) (ImpNeedQual_13));
  }
  ImportUseMap_22 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_5, (MR_Integer) 4))));
  IntFIMSpecs_23 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_5, (MR_Integer) 5))));
  ImpFIMSpecs_24 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_5, (MR_Integer) 6))));
  TypeCtorCheckedMap_25 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_5, (MR_Integer) 7))));
  InstCtorCheckedMap_26 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_5, (MR_Integer) 8))));
  ModeCtorCheckedMap_27 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_5, (MR_Integer) 9))));
  IntTypeClasses_28 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_5, (MR_Integer) 10))));
  IntInstances_29 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_5, (MR_Integer) 11))));
  IntPredDecls_30 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_5, (MR_Integer) 12))));
  IntModeDecls_31 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_5, (MR_Integer) 13))));
  IntDeclPragmas_32 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_5, (MR_Integer) 14))));
  IntDeclMarkers_33 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_5, (MR_Integer) 15))));
  IntPromises_34 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_5, (MR_Integer) 16))));
  ImpTypeClasses_35 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_5, (MR_Integer) 17))));
  ImpInstances_36 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_5, (MR_Integer) 18))));
  ImpPredDecls_37 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_5, (MR_Integer) 19))));
  ImpModeDecls_38 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_5, (MR_Integer) 20))));
  ImpDeclPragmas_39 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_5, (MR_Integer) 21))));
  ImpDeclMarkers_40 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_5, (MR_Integer) 22))));
  ImpPromises_41 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_5, (MR_Integer) 23))));
  AccAvails0_42 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_121, (MR_Integer) 0))));
  AccFIMs0_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_121, (MR_Integer) 1))));
  AccTypeDefnsAbs0_44 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_121, (MR_Integer) 2))));
  AccTypeDefnsMer0_45 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_121, (MR_Integer) 3))));
  AccTypeDefnsFor0_46 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_121, (MR_Integer) 4))));
  AccInstDefns0_47 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_121, (MR_Integer) 5))));
  AccModeDefns0_48 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_121, (MR_Integer) 6))));
  AccTypeClasses0_49 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_121, (MR_Integer) 7))));
  AccInstances0_50 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_121, (MR_Integer) 8))));
  AccPredDecls0_51 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_121, (MR_Integer) 9))));
  AccModeDecls0_52 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_121, (MR_Integer) 10))));
  AccClauses0_53 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_121, (MR_Integer) 11))));
  AccForeignProcs0_54 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_121, (MR_Integer) 12))));
  AccForeignEnums0_55 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_121, (MR_Integer) 13))));
  AccForeignExportEnums0_56 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_121, (MR_Integer) 14))));
  AccDeclPragmas0_57 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_121, (MR_Integer) 15))));
  AccDeclMarkers0_58 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_121, (MR_Integer) 16))));
  AccDeclPragmasTypeSpecConstr0_59 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_121, (MR_Integer) 17))));
  AccDeclPragmasTypeSpec0_60 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_121, (MR_Integer) 18))));
  AccDeclPragmasTermInfo0_61 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_121, (MR_Integer) 19))));
  AccDeclPragmasTerm2Info0_62 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_121, (MR_Integer) 20))));
  AccDeclPragmasSharing0_63 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_121, (MR_Integer) 21))));
  AccDeclPragmasReuse0_64 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_121, (MR_Integer) 22))));
  AccImplPragmas0_65 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_121, (MR_Integer) 23))));
  AccImplMarkers0_66 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_121, (MR_Integer) 24))));
  AccGenPragmasUnusedArgs0_67 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_121, (MR_Integer) 25))));
  AccGenPragmasExceptions0_68 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_121, (MR_Integer) 26))));
  AccGenPragmasTrailing0_69 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_121, (MR_Integer) 27))));
  AccGenPragmasMMTabling0_70 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_121, (MR_Integer) 28))));
  AccPromises0_71 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_121, (MR_Integer) 29))));
  AccInitialises0_72 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_121, (MR_Integer) 30))));
  AccFinalises0_73 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_121, (MR_Integer) 31))));
  AccMutables0_74 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_121, (MR_Integer) 32))));
  AccTypeRepns0_75 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_121, (MR_Integer) 33))));
  parse_tree__item_util__section_import_and_or_use_map_to_item_avails_3_p_0(ImportUseMap_22, &IntAvails_76, &ImpAvails_77);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_avails_4_p_0(IntItemMercuryStatus_14, IntAvails_76, AccAvails0_42, &AccAvails1_78);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_avails_4_p_0(ImpItemMercuryStatus_15, ImpAvails_77, AccAvails1_78, &AccAvails_79);
  Var_124 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), IntFIMSpecs_23);
  IntFIMs_80 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_3[15]), Var_124);
  Var_126 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), ImpFIMSpecs_24);
  ImpFIMs_81 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_3[16]), Var_126);
  Var_128 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), IntFIMs_80);
  Var_129 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), ImpFIMs_81);
  Var_127 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), Var_128, Var_129);
  AccFIMs_82 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), AccFIMs0_43, Var_127);
  parse_tree__item_util__type_ctor_checked_map_get_src_defns_4_p_0(TypeCtorCheckedMap_25, &IntTypeDefns_83, &ImpTypeDefns_84, &ImpForeignEnums_85);
  hlds__make_hlds__make_hlds_separate_items__separate_type_defns_abs_mer_for_7_p_0(IntTypeDefns_83, (MR_Word) ((MR_Unsigned) 0U), &IntTypeDefnsAbs_86, (MR_Word) ((MR_Unsigned) 0U), &IntTypeDefnsMer_87, (MR_Word) ((MR_Unsigned) 0U), &IntTypeDefnsFor_88);
  hlds__make_hlds__make_hlds_separate_items__separate_type_defns_abs_mer_for_7_p_0(ImpTypeDefns_84, (MR_Word) ((MR_Unsigned) 0U), &ImpTypeDefnsAbs_89, (MR_Word) ((MR_Unsigned) 0U), &ImpTypeDefnsMer_90, (MR_Word) ((MR_Unsigned) 0U), &ImpTypeDefnsFor_91);
  hlds__make_hlds__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[1]), IntSectionInfo_16, IntTypeDefnsAbs_86, AccTypeDefnsAbs0_44, &AccTypeDefnsAbs1_92);
  hlds__make_hlds__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[1]), ImpSectionInfo_17, ImpTypeDefnsAbs_89, AccTypeDefnsAbs1_92, &AccTypeDefnsAbs_93);
  hlds__make_hlds__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[1]), IntSectionInfo_16, IntTypeDefnsMer_87, AccTypeDefnsMer0_45, &AccTypeDefnsMer1_94);
  hlds__make_hlds__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[1]), ImpSectionInfo_17, ImpTypeDefnsMer_90, AccTypeDefnsMer1_94, &AccTypeDefnsMer_95);
  hlds__make_hlds__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[1]), IntSectionInfo_16, IntTypeDefnsFor_88, AccTypeDefnsFor0_46, &AccTypeDefnsFor1_96);
  hlds__make_hlds__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[1]), ImpSectionInfo_17, ImpTypeDefnsFor_91, AccTypeDefnsFor1_96, &AccTypeDefnsFor_97);
  parse_tree__item_util__inst_ctor_checked_map_get_src_defns_3_p_0(InstCtorCheckedMap_26, &IntInstDefns_98, &ImpInstDefns_99);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[3]), IntItemMercuryStatus_14, IntInstDefns_98, AccInstDefns0_47, &AccInstDefns1_100);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[3]), ImpItemMercuryStatus_15, ImpInstDefns_99, AccInstDefns1_100, &AccInstDefns_101);
  parse_tree__item_util__mode_ctor_checked_map_get_src_defns_3_p_0(ModeCtorCheckedMap_27, &IntModeDefns_102, &ImpModeDefns_103);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[5]), IntItemMercuryStatus_14, IntModeDefns_102, AccModeDefns0_48, &AccModeDefns1_104);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[5]), ImpItemMercuryStatus_15, ImpModeDefns_103, AccModeDefns1_104, &AccModeDefns_105);
  hlds__make_hlds__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), IntSectionInfo_16, IntTypeClasses_28, AccTypeClasses0_49, &AccTypeClasses1_106);
  hlds__make_hlds__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), ImpSectionInfo_17, ImpTypeClasses_35, AccTypeClasses1_106, &AccTypeClasses_107);
  Var_136 = (MR_Word) (IntInstances_29);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), IntItemMercuryStatus_14, Var_136, AccInstances0_50, &AccInstances1_108);
  Var_137 = (MR_Word) (ImpInstances_36);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), ImpItemMercuryStatus_15, Var_137, AccInstances1_108, &AccInstances_109);
  hlds__make_hlds__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), IntSectionInfo_16, IntPredDecls_30, AccPredDecls0_51, &AccPredDecls1_110);
  hlds__make_hlds__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), ImpSectionInfo_17, ImpPredDecls_37, AccPredDecls1_110, &AccPredDecls_111);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), IntItemMercuryStatus_14, IntModeDecls_31, AccModeDecls0_52, &AccModeDecls1_112);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), ImpItemMercuryStatus_15, ImpModeDecls_38, AccModeDecls1_112, &AccModeDecls_113);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_tuple_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), ImpItemMercuryStatus_15, ImpForeignEnums_85, AccForeignEnums0_55, &AccForeignEnums_114);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_pragma_info_0), IntItemMercuryStatus_14, IntDeclPragmas_32, AccDeclPragmas0_57, &AccDeclPragmas1_115);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_marker_info_0), IntItemMercuryStatus_14, IntDeclMarkers_33, AccDeclMarkers0_58, &AccDeclMarkers1_116);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_pragma_info_0), ImpItemMercuryStatus_15, ImpDeclPragmas_39, AccDeclPragmas1_115, &AccDeclPragmas_117);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_marker_info_0), ImpItemMercuryStatus_15, ImpDeclMarkers_40, AccDeclMarkers1_116, &AccDeclMarkers_118);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), IntItemMercuryStatus_14, IntPromises_34, AccPromises0_71, &AccPromises1_119);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), ImpItemMercuryStatus_15, ImpPromises_41, AccPromises1_119, &AccPromises_120);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (34 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Acc_122 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (AccAvails_79));
    MR_hl_field(0, base, 1) = ((MR_Box) (AccFIMs_82));
    MR_hl_field(0, base, 2) = ((MR_Box) (AccTypeDefnsAbs_93));
    MR_hl_field(0, base, 3) = ((MR_Box) (AccTypeDefnsMer_95));
    MR_hl_field(0, base, 4) = ((MR_Box) (AccTypeDefnsFor_97));
    MR_hl_field(0, base, 5) = ((MR_Box) (AccInstDefns_101));
    MR_hl_field(0, base, 6) = ((MR_Box) (AccModeDefns_105));
    MR_hl_field(0, base, 7) = ((MR_Box) (AccTypeClasses_107));
    MR_hl_field(0, base, 8) = ((MR_Box) (AccInstances_109));
    MR_hl_field(0, base, 9) = ((MR_Box) (AccPredDecls_111));
    MR_hl_field(0, base, 10) = ((MR_Box) (AccModeDecls_113));
    MR_hl_field(0, base, 11) = ((MR_Box) (AccClauses0_53));
    MR_hl_field(0, base, 12) = ((MR_Box) (AccForeignProcs0_54));
    MR_hl_field(0, base, 13) = ((MR_Box) (AccForeignEnums_114));
    MR_hl_field(0, base, 14) = ((MR_Box) (AccForeignExportEnums0_56));
    MR_hl_field(0, base, 15) = ((MR_Box) (AccDeclPragmas_117));
    MR_hl_field(0, base, 16) = ((MR_Box) (AccDeclMarkers_118));
    MR_hl_field(0, base, 17) = ((MR_Box) (AccDeclPragmasTypeSpecConstr0_59));
    MR_hl_field(0, base, 18) = ((MR_Box) (AccDeclPragmasTypeSpec0_60));
    MR_hl_field(0, base, 19) = ((MR_Box) (AccDeclPragmasTermInfo0_61));
    MR_hl_field(0, base, 20) = ((MR_Box) (AccDeclPragmasTerm2Info0_62));
    MR_hl_field(0, base, 21) = ((MR_Box) (AccDeclPragmasSharing0_63));
    MR_hl_field(0, base, 22) = ((MR_Box) (AccDeclPragmasReuse0_64));
    MR_hl_field(0, base, 23) = ((MR_Box) (AccImplPragmas0_65));
    MR_hl_field(0, base, 24) = ((MR_Box) (AccImplMarkers0_66));
    MR_hl_field(0, base, 25) = ((MR_Box) (AccGenPragmasUnusedArgs0_67));
    MR_hl_field(0, base, 26) = ((MR_Box) (AccGenPragmasExceptions0_68));
    MR_hl_field(0, base, 27) = ((MR_Box) (AccGenPragmasTrailing0_69));
    MR_hl_field(0, base, 28) = ((MR_Box) (AccGenPragmasMMTabling0_70));
    MR_hl_field(0, base, 29) = ((MR_Box) (AccPromises_120));
    MR_hl_field(0, base, 30) = ((MR_Box) (AccInitialises0_72));
    MR_hl_field(0, base, 31) = ((MR_Box) (AccFinalises0_73));
    MR_hl_field(0, base, 32) = ((MR_Box) (AccMutables0_74));
    MR_hl_field(0, base, 33) = ((MR_Box) (AccTypeRepns0_75));
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_separate_items__acc_type_repn_map_3_p_0(
  MR_Word IntTypeRepns_4,
  MR_Word STATE_VARIABLE_Cord_0_9,
  MR_Word * STATE_VARIABLE_Cord_10)
{
  MR_Word TypeCtorRepnMap_7 = ((MR_Word) ((MR_hl_field(0, IntTypeRepns_4, (MR_Integer) 1))));
  MR_Word TypeCtorRepnPairs_8;
  MR_Word Var_12;

  mercury__map__to_sorted_assoc_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[21]), TypeCtorRepnMap_7, &TypeCtorRepnPairs_8);
  Var_12 = mercury__cord__from_list_1_f_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_3[2]), TypeCtorRepnPairs_8);
  *STATE_VARIABLE_Cord_10 = mercury__cord__f_43_43_2_f_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_3[2]), STATE_VARIABLE_Cord_0_9, Var_12);
}

static void MR_CALL 
hlds__make_hlds__make_hlds_separate_items__acc_int_type_repn_map_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ModuleMap_0_14,
  MR_Word * STATE_VARIABLE_ModuleMap_15)
{
  MR_bool succeeded;
  MR_Word ModuleName_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_Word IntTypeRepns_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
  MR_Word IntFileKind_7 = ((MR_Unsigned) ((MR_hl_field(0, IntTypeRepns_5, (MR_Integer) 0))) & (MR_Integer) 3);
  MR_Word OldIntTypeRepns_9;
  MR_Box conv0_OldIntTypeRepns_9;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__type_ctor_info_int_type_ctor_repns_0), STATE_VARIABLE_ModuleMap_0_14, ((MR_Box) (ModuleName_4)), &conv0_OldIntTypeRepns_9);
  if (succeeded)
  {
    OldIntTypeRepns_9 = ((MR_Word) (conv0_OldIntTypeRepns_9));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word OldIntFileKind_10 = ((MR_Unsigned) ((MR_hl_field(0, OldIntTypeRepns_9, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Integer Content_12 = ((&hlds__make_hlds__make_hlds_separate_items_vector_common_7[0 + IntFileKind_7]))->hlds__make_hlds__make_hlds_separate_items__vector_common_type_7_0__vct_7_f_0;
    MR_Integer OldContent_13 = ((&hlds__make_hlds__make_hlds_separate_items_vector_common_7[4 + OldIntFileKind_10]))->hlds__make_hlds__make_hlds_separate_items__vector_common_type_7_0__vct_7_f_0;

    succeeded = (Content_12 > OldContent_13);
    if (succeeded)
      mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__type_ctor_info_int_type_ctor_repns_0), ((MR_Box) (ModuleName_4)), ((MR_Box) (IntTypeRepns_5)), STATE_VARIABLE_ModuleMap_0_14, STATE_VARIABLE_ModuleMap_15);
    else
      *STATE_VARIABLE_ModuleMap_15 = STATE_VARIABLE_ModuleMap_0_14;
  }
  else
    mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__type_ctor_info_int_type_ctor_repns_0), ((MR_Box) (ModuleName_4)), ((MR_Box) (IntTypeRepns_5)), STATE_VARIABLE_ModuleMap_0_14, STATE_VARIABLE_ModuleMap_15);
}

static void MR_CALL 
hlds__make_hlds__make_hlds_separate_items__separate_items_in_aug_comp_unit_37_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv16_STATE_VARIABLE_Cord_10;

  hlds__make_hlds__make_hlds_separate_items__acc_type_repn_map_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv16_STATE_VARIABLE_Cord_10);
  *wrapper_arg_3 = ((MR_Box) (conv16_STATE_VARIABLE_Cord_10));
}

static void MR_CALL 
hlds__make_hlds__make_hlds_separate_items__separate_items_in_aug_comp_unit_37_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv14_STATE_VARIABLE_ModuleMap_15;

  hlds__make_hlds__make_hlds_separate_items__acc_int_type_repn_map_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv14_STATE_VARIABLE_ModuleMap_15);
  *wrapper_arg_3 = ((MR_Box) (conv14_STATE_VARIABLE_ModuleMap_15));
}

static void MR_CALL 
hlds__make_hlds__make_hlds_separate_items__separate_items_in_aug_comp_unit_37_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv12_STATE_VARIABLE_Acc_12;

  hlds__make_hlds__make_hlds_separate_items__acc_type_repn_spec_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv12_STATE_VARIABLE_Acc_12);
  *wrapper_arg_3 = ((MR_Box) (conv12_STATE_VARIABLE_Acc_12));
}

static void MR_CALL 
hlds__make_hlds__make_hlds_separate_items__separate_items_in_aug_comp_unit_37_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv10_STATE_VARIABLE_Acc_57;

  hlds__make_hlds__make_hlds_separate_items__acc_parse_tree_trans_opt_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv10_STATE_VARIABLE_Acc_57);
  *wrapper_arg_3 = ((MR_Box) (conv10_STATE_VARIABLE_Acc_57));
}

static void MR_CALL 
hlds__make_hlds__make_hlds_separate_items__separate_items_in_aug_comp_unit_37_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv8_STATE_VARIABLE_Acc_100;

  hlds__make_hlds__make_hlds_separate_items__acc_parse_tree_plain_opt_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_STATE_VARIABLE_Acc_100);
  *wrapper_arg_3 = ((MR_Box) (conv8_STATE_VARIABLE_Acc_100));
}

static void MR_CALL 
hlds__make_hlds__make_hlds_separate_items__separate_items_in_aug_comp_unit_37_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_STATE_VARIABLE_Acc_13;

  hlds__make_hlds__make_hlds_separate_items__acc_int_for_opt_spec_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_Acc_13);
  *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_Acc_13));
}

static void MR_CALL 
hlds__make_hlds__make_hlds_separate_items__separate_items_in_aug_comp_unit_37_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_Acc_9;

  hlds__make_hlds__make_hlds_separate_items__acc_indirect_int2_spec_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_Acc_9);
  *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_Acc_9));
}

static void MR_CALL 
hlds__make_hlds__make_hlds_separate_items__separate_items_in_aug_comp_unit_37_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_Acc_9;

  hlds__make_hlds__make_hlds_separate_items__acc_direct_int1_spec_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_Acc_9);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_Acc_9));
}

static void MR_CALL 
hlds__make_hlds__make_hlds_separate_items__separate_items_in_aug_comp_unit_37_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Acc_9;

  hlds__make_hlds__make_hlds_separate_items__acc_ancestor_int_spec_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Acc_9);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Acc_9));
}

void MR_CALL 
hlds__make_hlds__make_hlds_separate_items__separate_items_in_aug_comp_unit_37_p_0(
  MR_Word AugCompUnit_38,
  MR_Word * InclMap_39,
  MR_Word * Avails_40,
  MR_Word * FIMs_41,
  MR_Word * TypeDefnsAbstract_42,
  MR_Word * TypeDefnsMercury_43,
  MR_Word * TypeDefnsForeign_44,
  MR_Word * InstDefns_45,
  MR_Word * ModeDefns_46,
  MR_Word * PredDecls_47,
  MR_Word * ModeDecls_48,
  MR_Word * Promises_49,
  MR_Word * TypeClasses_50,
  MR_Word * Instances_51,
  MR_Word * Initialises_52,
  MR_Word * Finalises_53,
  MR_Word * Mutables_54,
  MR_Word * TypeRepnMap_55,
  MR_Word * ForeignEnums_56,
  MR_Word * ForeignExportEnums_57,
  MR_Word * DeclPragmas_58,
  MR_Word * DeclMarkers_59,
  MR_Word * DeclPragmasTypeSpecConstr_60,
  MR_Word * DeclPragmasTypeSpec_61,
  MR_Word * DeclPragmasTermInfo_62,
  MR_Word * DeclPragmasTerm2Info_63,
  MR_Word * DeclPragmasSharing_64,
  MR_Word * DeclPragmasReuse_65,
  MR_Word * ImplPragmas_66,
  MR_Word * ImplMarkers_67,
  MR_Word * GenPragmasUnusedArgs_68,
  MR_Word * GenPragmasExceptions_69,
  MR_Word * GenPragmasTrailing_70,
  MR_Word * GenPragmasMMTabling_71,
  MR_Word * Clauses_72,
  MR_Word * ForeignProcs_73,
  MR_Word * IntBadPreds_74)
{
  MR_Word ParseTreeModuleSrc_75 = ((MR_Word) ((MR_hl_field(0, AugCompUnit_38, (MR_Integer) 0))));
  MR_Word AncestorIntSpecs_76 = ((MR_Word) ((MR_hl_field(0, AugCompUnit_38, (MR_Integer) 1))));
  MR_Word DirectInt1Specs_77 = ((MR_Word) ((MR_hl_field(0, AugCompUnit_38, (MR_Integer) 2))));
  MR_Word IndirectInt2Specs_78 = ((MR_Word) ((MR_hl_field(0, AugCompUnit_38, (MR_Integer) 3))));
  MR_Word PlainOpts_79 = ((MR_Word) ((MR_hl_field(0, AugCompUnit_38, (MR_Integer) 4))));
  MR_Word TransOpts_80 = ((MR_Word) ((MR_hl_field(0, AugCompUnit_38, (MR_Integer) 5))));
  MR_Word IntForOptSpecs_81 = ((MR_Word) ((MR_hl_field(0, AugCompUnit_38, (MR_Integer) 6))));
  MR_Word TypeRepnSpecs_82 = ((MR_Word) ((MR_hl_field(0, AugCompUnit_38, (MR_Integer) 7))));
  MR_Word AvailsCord_85;
  MR_Word FIMsCord_86;
  MR_Word TypeDefnsAbstractCord_87;
  MR_Word TypeDefnsMercuryCord_88;
  MR_Word TypeDefnsForeignCord_89;
  MR_Word InstDefnsCord_90;
  MR_Word ModeDefnsCord_91;
  MR_Word TypeClassesCord_92;
  MR_Word InstancesCord_93;
  MR_Word PredDeclsCord_94;
  MR_Word ModeDeclsCord_95;
  MR_Word ClausesCord_96;
  MR_Word ForeignProcsCord_97;
  MR_Word ForeignEnumsCord_98;
  MR_Word ForeignExportEnumsCord_99;
  MR_Word DeclPragmasCord_100;
  MR_Word DeclMarkersCord_101;
  MR_Word DeclPragmasTypeSpecConstrCord_102;
  MR_Word DeclPragmasTypeSpecCord_103;
  MR_Word DeclPragmasTermInfoCord_104;
  MR_Word DeclPragmasTerm2InfoCord_105;
  MR_Word DeclPragmasSharingCord_106;
  MR_Word DeclPragmasReuseCord_107;
  MR_Word ImplPragmasCord_108;
  MR_Word ImplMarkersCord_109;
  MR_Word GenPragmasUnusedArgsCord_110;
  MR_Word GenPragmasExceptionsCord_111;
  MR_Word GenPragmasTrailingCord_112;
  MR_Word GenPragmasMMTablingCord_113;
  MR_Word PromisesCord_114;
  MR_Word InitialisesCord_115;
  MR_Word FinalisesCord_116;
  MR_Word MutablesCord_117;
  MR_Word ModuleIntTypeRepns_118;
  MR_Word ModuleIntTypeRepnMap_119;
  MR_Word TypeCtorRepnsCord_120;
  MR_Word STATE_VARIABLE_Acc_121_121;
  MR_Word Var_122;
  MR_Word Var_123;
  MR_Word Var_124;
  MR_Word Var_125;
  MR_Word Var_126;
  MR_Word Var_127;
  MR_Word Var_128;
  MR_Word Var_129;
  MR_Word Var_130;
  MR_Word Var_131;
  MR_Word Var_132;
  MR_Word Var_133;
  MR_Word Var_134;
  MR_Word Var_135;
  MR_Word Var_136;
  MR_Word Var_137;
  MR_Word Var_138;
  MR_Word Var_139;
  MR_Word Var_140;
  MR_Word Var_141;
  MR_Word Var_142;
  MR_Word Var_143;
  MR_Word Var_144;
  MR_Word Var_145;
  MR_Word Var_146;
  MR_Word Var_147;
  MR_Word Var_148;
  MR_Word Var_149;
  MR_Word Var_150;
  MR_Word Var_151;
  MR_Word Var_152;
  MR_Word Var_153;
  MR_Word Var_154;
  MR_Word STATE_VARIABLE_Acc_156_156;
  MR_Word STATE_VARIABLE_Acc_158_158;
  MR_Word STATE_VARIABLE_Acc_160_160;
  MR_Word STATE_VARIABLE_Acc_162_162;
  MR_Word STATE_VARIABLE_Acc_164_164;
  MR_Word STATE_VARIABLE_Acc_166_166;
  MR_Word STATE_VARIABLE_Acc_168_168;
  MR_Word STATE_VARIABLE_Acc_170_170;
  MR_Word Var_172;
  MR_Word Var_174;
  MR_Word Var_175;
  MR_Box conv1_STATE_VARIABLE_Acc_158_158;
  MR_Box conv3_STATE_VARIABLE_Acc_160_160;
  MR_Box conv5_STATE_VARIABLE_Acc_162_162;
  MR_Box conv7_STATE_VARIABLE_Acc_164_164;
  MR_Box conv9_STATE_VARIABLE_Acc_166_166;
  MR_Box conv11_STATE_VARIABLE_Acc_168_168;
  MR_Box conv13_STATE_VARIABLE_Acc_170_170;
  MR_Box conv15_ModuleIntTypeRepnMap_119;
  MR_Box conv17_TypeCtorRepnsCord_120;

  Var_122 = mercury__cord__init_0_f_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[0]));
  Var_123 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0));
  Var_124 = mercury__cord__init_0_f_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[2]));
  Var_125 = mercury__cord__init_0_f_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[2]));
  Var_126 = mercury__cord__init_0_f_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[2]));
  Var_127 = mercury__cord__init_0_f_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[4]));
  Var_128 = mercury__cord__init_0_f_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[6]));
  Var_129 = mercury__cord__init_0_f_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[7]));
  Var_130 = mercury__cord__init_0_f_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[8]));
  Var_131 = mercury__cord__init_0_f_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[9]));
  Var_132 = mercury__cord__init_0_f_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[10]));
  Var_133 = mercury__cord__init_0_f_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[11]));
  Var_134 = mercury__cord__init_0_f_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[12]));
  Var_135 = mercury__cord__init_0_f_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_2[0]));
  Var_136 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_export_enum_info_0));
  Var_137 = mercury__cord__init_0_f_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[13]));
  Var_138 = mercury__cord__init_0_f_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[14]));
  Var_139 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_type_spec_constr_info_0));
  Var_140 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_type_spec_info_0));
  Var_141 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_termination_info_0));
  Var_142 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_termination2_info_0));
  Var_143 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_struct_sharing_info_0));
  Var_144 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_struct_reuse_info_0));
  Var_145 = mercury__cord__init_0_f_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[15]));
  Var_146 = mercury__cord__init_0_f_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[16]));
  Var_147 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_gen_pragma_unused_args_info_0));
  Var_148 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_gen_pragma_exceptions_info_0));
  Var_149 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_gen_pragma_trailing_info_0));
  Var_150 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_gen_pragma_mm_tabling_info_0));
  Var_151 = mercury__cord__init_0_f_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[17]));
  Var_152 = mercury__cord__init_0_f_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[18]));
  Var_153 = mercury__cord__init_0_f_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[19]));
  Var_154 = mercury__cord__init_0_f_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[20]));
  {
    STATE_VARIABLE_Acc_121_121 = (MR_Word) MR_new_object(MR_Word, (34 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_Acc_121_121, 0) = ((MR_Box) (Var_122));
    MR_hl_field(0, STATE_VARIABLE_Acc_121_121, 1) = ((MR_Box) (Var_123));
    MR_hl_field(0, STATE_VARIABLE_Acc_121_121, 2) = ((MR_Box) (Var_124));
    MR_hl_field(0, STATE_VARIABLE_Acc_121_121, 3) = ((MR_Box) (Var_125));
    MR_hl_field(0, STATE_VARIABLE_Acc_121_121, 4) = ((MR_Box) (Var_126));
    MR_hl_field(0, STATE_VARIABLE_Acc_121_121, 5) = ((MR_Box) (Var_127));
    MR_hl_field(0, STATE_VARIABLE_Acc_121_121, 6) = ((MR_Box) (Var_128));
    MR_hl_field(0, STATE_VARIABLE_Acc_121_121, 7) = ((MR_Box) (Var_129));
    MR_hl_field(0, STATE_VARIABLE_Acc_121_121, 8) = ((MR_Box) (Var_130));
    MR_hl_field(0, STATE_VARIABLE_Acc_121_121, 9) = ((MR_Box) (Var_131));
    MR_hl_field(0, STATE_VARIABLE_Acc_121_121, 10) = ((MR_Box) (Var_132));
    MR_hl_field(0, STATE_VARIABLE_Acc_121_121, 11) = ((MR_Box) (Var_133));
    MR_hl_field(0, STATE_VARIABLE_Acc_121_121, 12) = ((MR_Box) (Var_134));
    MR_hl_field(0, STATE_VARIABLE_Acc_121_121, 13) = ((MR_Box) (Var_135));
    MR_hl_field(0, STATE_VARIABLE_Acc_121_121, 14) = ((MR_Box) (Var_136));
    MR_hl_field(0, STATE_VARIABLE_Acc_121_121, 15) = ((MR_Box) (Var_137));
    MR_hl_field(0, STATE_VARIABLE_Acc_121_121, 16) = ((MR_Box) (Var_138));
    MR_hl_field(0, STATE_VARIABLE_Acc_121_121, 17) = ((MR_Box) (Var_139));
    MR_hl_field(0, STATE_VARIABLE_Acc_121_121, 18) = ((MR_Box) (Var_140));
    MR_hl_field(0, STATE_VARIABLE_Acc_121_121, 19) = ((MR_Box) (Var_141));
    MR_hl_field(0, STATE_VARIABLE_Acc_121_121, 20) = ((MR_Box) (Var_142));
    MR_hl_field(0, STATE_VARIABLE_Acc_121_121, 21) = ((MR_Box) (Var_143));
    MR_hl_field(0, STATE_VARIABLE_Acc_121_121, 22) = ((MR_Box) (Var_144));
    MR_hl_field(0, STATE_VARIABLE_Acc_121_121, 23) = ((MR_Box) (Var_145));
    MR_hl_field(0, STATE_VARIABLE_Acc_121_121, 24) = ((MR_Box) (Var_146));
    MR_hl_field(0, STATE_VARIABLE_Acc_121_121, 25) = ((MR_Box) (Var_147));
    MR_hl_field(0, STATE_VARIABLE_Acc_121_121, 26) = ((MR_Box) (Var_148));
    MR_hl_field(0, STATE_VARIABLE_Acc_121_121, 27) = ((MR_Box) (Var_149));
    MR_hl_field(0, STATE_VARIABLE_Acc_121_121, 28) = ((MR_Box) (Var_150));
    MR_hl_field(0, STATE_VARIABLE_Acc_121_121, 29) = ((MR_Box) (Var_151));
    MR_hl_field(0, STATE_VARIABLE_Acc_121_121, 30) = ((MR_Box) (Var_152));
    MR_hl_field(0, STATE_VARIABLE_Acc_121_121, 31) = ((MR_Box) (Var_153));
    MR_hl_field(0, STATE_VARIABLE_Acc_121_121, 32) = ((MR_Box) (Var_154));
    MR_hl_field(0, STATE_VARIABLE_Acc_121_121, 33) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  hlds__make_hlds__make_hlds_separate_items__acc_parse_tree_module_src_3_p_0(ParseTreeModuleSrc_75, STATE_VARIABLE_Acc_121_121, &STATE_VARIABLE_Acc_156_156);
  mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_ancestor_int_spec_0), (MR_Word) (&hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__type_ctor_info_item_accumulator_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_3[6]), AncestorIntSpecs_76, ((MR_Box) (STATE_VARIABLE_Acc_156_156)), &conv1_STATE_VARIABLE_Acc_158_158);
  STATE_VARIABLE_Acc_158_158 = ((MR_Word) (conv1_STATE_VARIABLE_Acc_158_158));
  mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_direct_int1_spec_0), (MR_Word) (&hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__type_ctor_info_item_accumulator_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_3[7]), DirectInt1Specs_77, ((MR_Box) (STATE_VARIABLE_Acc_158_158)), &conv3_STATE_VARIABLE_Acc_160_160);
  STATE_VARIABLE_Acc_160_160 = ((MR_Word) (conv3_STATE_VARIABLE_Acc_160_160));
  mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_indirect_int2_spec_0), (MR_Word) (&hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__type_ctor_info_item_accumulator_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_3[8]), IndirectInt2Specs_78, ((MR_Box) (STATE_VARIABLE_Acc_160_160)), &conv5_STATE_VARIABLE_Acc_162_162);
  STATE_VARIABLE_Acc_162_162 = ((MR_Word) (conv5_STATE_VARIABLE_Acc_162_162));
  mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_for_opt_spec_0), (MR_Word) (&hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__type_ctor_info_item_accumulator_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_3[9]), IntForOptSpecs_81, ((MR_Box) (STATE_VARIABLE_Acc_162_162)), &conv7_STATE_VARIABLE_Acc_164_164);
  STATE_VARIABLE_Acc_164_164 = ((MR_Word) (conv7_STATE_VARIABLE_Acc_164_164));
  mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_plain_opt_0), (MR_Word) (&hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__type_ctor_info_item_accumulator_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_3[10]), PlainOpts_79, ((MR_Box) (STATE_VARIABLE_Acc_164_164)), &conv9_STATE_VARIABLE_Acc_166_166);
  STATE_VARIABLE_Acc_166_166 = ((MR_Word) (conv9_STATE_VARIABLE_Acc_166_166));
  mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_trans_opt_0), (MR_Word) (&hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__type_ctor_info_item_accumulator_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_3[11]), TransOpts_80, ((MR_Box) (STATE_VARIABLE_Acc_166_166)), &conv11_STATE_VARIABLE_Acc_168_168);
  STATE_VARIABLE_Acc_168_168 = ((MR_Word) (conv11_STATE_VARIABLE_Acc_168_168));
  mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_repn_spec_0), (MR_Word) (&hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__type_ctor_info_item_accumulator_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_3[12]), TypeRepnSpecs_82, ((MR_Box) (STATE_VARIABLE_Acc_168_168)), &conv13_STATE_VARIABLE_Acc_170_170);
  STATE_VARIABLE_Acc_170_170 = ((MR_Word) (conv13_STATE_VARIABLE_Acc_170_170));
  AvailsCord_85 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_170_170, (MR_Integer) 0))));
  FIMsCord_86 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_170_170, (MR_Integer) 1))));
  TypeDefnsAbstractCord_87 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_170_170, (MR_Integer) 2))));
  TypeDefnsMercuryCord_88 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_170_170, (MR_Integer) 3))));
  TypeDefnsForeignCord_89 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_170_170, (MR_Integer) 4))));
  InstDefnsCord_90 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_170_170, (MR_Integer) 5))));
  ModeDefnsCord_91 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_170_170, (MR_Integer) 6))));
  TypeClassesCord_92 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_170_170, (MR_Integer) 7))));
  InstancesCord_93 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_170_170, (MR_Integer) 8))));
  PredDeclsCord_94 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_170_170, (MR_Integer) 9))));
  ModeDeclsCord_95 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_170_170, (MR_Integer) 10))));
  ClausesCord_96 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_170_170, (MR_Integer) 11))));
  ForeignProcsCord_97 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_170_170, (MR_Integer) 12))));
  ForeignEnumsCord_98 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_170_170, (MR_Integer) 13))));
  ForeignExportEnumsCord_99 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_170_170, (MR_Integer) 14))));
  DeclPragmasCord_100 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_170_170, (MR_Integer) 15))));
  DeclMarkersCord_101 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_170_170, (MR_Integer) 16))));
  DeclPragmasTypeSpecConstrCord_102 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_170_170, (MR_Integer) 17))));
  DeclPragmasTypeSpecCord_103 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_170_170, (MR_Integer) 18))));
  DeclPragmasTermInfoCord_104 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_170_170, (MR_Integer) 19))));
  DeclPragmasTerm2InfoCord_105 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_170_170, (MR_Integer) 20))));
  DeclPragmasSharingCord_106 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_170_170, (MR_Integer) 21))));
  DeclPragmasReuseCord_107 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_170_170, (MR_Integer) 22))));
  ImplPragmasCord_108 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_170_170, (MR_Integer) 23))));
  ImplMarkersCord_109 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_170_170, (MR_Integer) 24))));
  GenPragmasUnusedArgsCord_110 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_170_170, (MR_Integer) 25))));
  GenPragmasExceptionsCord_111 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_170_170, (MR_Integer) 26))));
  GenPragmasTrailingCord_112 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_170_170, (MR_Integer) 27))));
  GenPragmasMMTablingCord_113 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_170_170, (MR_Integer) 28))));
  PromisesCord_114 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_170_170, (MR_Integer) 29))));
  InitialisesCord_115 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_170_170, (MR_Integer) 30))));
  FinalisesCord_116 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_170_170, (MR_Integer) 31))));
  MutablesCord_117 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_170_170, (MR_Integer) 32))));
  ModuleIntTypeRepns_118 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_170_170, (MR_Integer) 33))));
  *Avails_40 = mercury__cord__list_1_f_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[0]), AvailsCord_85);
  *FIMs_41 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), FIMsCord_86);
  *TypeDefnsAbstract_42 = mercury__cord__list_1_f_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[2]), TypeDefnsAbstractCord_87);
  *TypeDefnsMercury_43 = mercury__cord__list_1_f_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[2]), TypeDefnsMercuryCord_88);
  *TypeDefnsForeign_44 = mercury__cord__list_1_f_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[2]), TypeDefnsForeignCord_89);
  *InstDefns_45 = mercury__cord__list_1_f_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[4]), InstDefnsCord_90);
  *ModeDefns_46 = mercury__cord__list_1_f_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[6]), ModeDefnsCord_91);
  *TypeClasses_50 = mercury__cord__list_1_f_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[7]), TypeClassesCord_92);
  *Instances_51 = mercury__cord__list_1_f_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[8]), InstancesCord_93);
  *PredDecls_47 = mercury__cord__list_1_f_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[9]), PredDeclsCord_94);
  *ModeDecls_48 = mercury__cord__list_1_f_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[10]), ModeDeclsCord_95);
  *Clauses_72 = mercury__cord__list_1_f_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[11]), ClausesCord_96);
  *ForeignProcs_73 = mercury__cord__list_1_f_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[12]), ForeignProcsCord_97);
  *ForeignEnums_56 = mercury__cord__list_1_f_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_2[0]), ForeignEnumsCord_98);
  *ForeignExportEnums_57 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_export_enum_info_0), ForeignExportEnumsCord_99);
  *DeclPragmas_58 = mercury__cord__list_1_f_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[13]), DeclPragmasCord_100);
  *DeclMarkers_59 = mercury__cord__list_1_f_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[14]), DeclMarkersCord_101);
  *DeclPragmasTypeSpecConstr_60 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_type_spec_constr_info_0), DeclPragmasTypeSpecConstrCord_102);
  *DeclPragmasTypeSpec_61 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_type_spec_info_0), DeclPragmasTypeSpecCord_103);
  *DeclPragmasTermInfo_62 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_termination_info_0), DeclPragmasTermInfoCord_104);
  *DeclPragmasTerm2Info_63 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_termination2_info_0), DeclPragmasTerm2InfoCord_105);
  *DeclPragmasSharing_64 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_struct_sharing_info_0), DeclPragmasSharingCord_106);
  *DeclPragmasReuse_65 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_struct_reuse_info_0), DeclPragmasReuseCord_107);
  *ImplPragmas_66 = mercury__cord__list_1_f_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[15]), ImplPragmasCord_108);
  *ImplMarkers_67 = mercury__cord__list_1_f_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[16]), ImplMarkersCord_109);
  *GenPragmasUnusedArgs_68 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_gen_pragma_unused_args_info_0), GenPragmasUnusedArgsCord_110);
  *GenPragmasExceptions_69 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_gen_pragma_exceptions_info_0), GenPragmasExceptionsCord_111);
  *GenPragmasTrailing_70 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_gen_pragma_trailing_info_0), GenPragmasTrailingCord_112);
  *GenPragmasMMTabling_71 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_gen_pragma_mm_tabling_info_0), GenPragmasMMTablingCord_113);
  *Promises_49 = mercury__cord__list_1_f_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[17]), PromisesCord_114);
  *Initialises_52 = mercury__cord__list_1_f_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[18]), InitialisesCord_115);
  *Finalises_53 = mercury__cord__list_1_f_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[19]), FinalisesCord_116);
  *Mutables_54 = mercury__cord__list_1_f_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[20]), MutablesCord_117);
  Var_172 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__type_ctor_info_int_type_ctor_repns_0));
  mercury__list__foldl_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_3[0]), (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_3[1]), (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_3[13]), ModuleIntTypeRepns_118, ((MR_Box) (Var_172)), &conv15_ModuleIntTypeRepnMap_119);
  ModuleIntTypeRepnMap_119 = ((MR_Word) (conv15_ModuleIntTypeRepnMap_119));
  Var_174 = mercury__cord__init_0_f_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_3[2]));
  mercury__map__foldl_values_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__type_ctor_info_int_type_ctor_repns_0), (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[22]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_3[14]), ModuleIntTypeRepnMap_119, ((MR_Box) (Var_174)), &conv17_TypeCtorRepnsCord_120);
  TypeCtorRepnsCord_120 = ((MR_Word) (conv17_TypeCtorRepnsCord_120));
  Var_175 = mercury__cord__list_1_f_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_3[2]), TypeCtorRepnsCord_120);
  mercury__map__from_sorted_assoc_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[21]), Var_175, TypeRepnMap_55);
  *InclMap_39 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_75, (MR_Integer) 2))));
  *IntBadPreds_74 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_75, (MR_Integer) 20))));
}

static MR_Box MR_CALL 
hlds__make_hlds__make_hlds_separate_items__acc_parse_tree_module_src_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = parse_tree__item_util__fim_spec_to_item_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__make_hlds__make_hlds_separate_items__acc_parse_tree_module_src_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = parse_tree__item_util__fim_spec_to_item_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
hlds__make_hlds__make_hlds_separate_items__acc_parse_tree_module_src_3_p_0(
  MR_Word ParseTreeModuleSrc_4,
  MR_Word STATE_VARIABLE_Acc_0_135,
  MR_Word * STATE_VARIABLE_Acc_136)
{
  MR_bool succeeded;
  MR_Word InclMap_8 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, (MR_Integer) 2))));
  MR_Word ImportUseMap_9 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, (MR_Integer) 3))));
  MR_Word IntFIMSpecMap_10 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, (MR_Integer) 4))));
  MR_Word ImpFIMSpecMap_11 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, (MR_Integer) 5))));
  MR_Word TypeCtorCheckedMap_14 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, (MR_Integer) 8))));
  MR_Word InstCtorCheckedMap_15 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, (MR_Integer) 9))));
  MR_Word ModeCtorCheckedMap_16 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, (MR_Integer) 10))));
  MR_Word IntTypeClasses_19 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, (MR_Integer) 13))));
  MR_Word IntInstances_20 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, (MR_Integer) 14))));
  MR_Word IntPredDecls_21 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, (MR_Integer) 15))));
  MR_Word IntModeDecls_22 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, (MR_Integer) 16))));
  MR_Word IntDeclPragmas_23 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, (MR_Integer) 17))));
  MR_Word IntDeclMarkers_24 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, (MR_Integer) 18))));
  MR_Word IntPromises_25 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, (MR_Integer) 19))));
  MR_Word SubTypeClasses_27 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, (MR_Integer) 21))));
  MR_Word SubInstances_28 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, (MR_Integer) 22))));
  MR_Word SubPredDecls_29 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, (MR_Integer) 23))));
  MR_Word SubModeDecls_30 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, (MR_Integer) 24))));
  MR_Word ImpClauses_31 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, (MR_Integer) 25))));
  MR_Word ImpForeignProcs_32 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, (MR_Integer) 26))));
  MR_Word ImpForeignExportEnums_33 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, (MR_Integer) 27))));
  MR_Word SubDeclPragmas_34 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, (MR_Integer) 28))));
  MR_Word SubDeclMarkers_35 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, (MR_Integer) 29))));
  MR_Word ImpImplPragmas_36 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, (MR_Integer) 30))));
  MR_Word ImpImplMarkers_37 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, (MR_Integer) 31))));
  MR_Word SubPromises_38 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, (MR_Integer) 32))));
  MR_Word ImpInitialises_39 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, (MR_Integer) 33))));
  MR_Word ImpFinalises_40 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, (MR_Integer) 34))));
  MR_Word SubMutables_41 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, (MR_Integer) 35))));
  MR_Word SubItemMercuryStatus_46;
  MR_Word SubSectionInfo_47;
  MR_Word AccAvails0_48;
  MR_Word AccFIMs0_49;
  MR_Word AccTypeDefnsAbs0_50;
  MR_Word AccTypeDefnsMer0_51;
  MR_Word AccTypeDefnsFor0_52;
  MR_Word AccInstDefns0_53;
  MR_Word AccModeDefns0_54;
  MR_Word AccTypeClasses0_55;
  MR_Word AccInstances0_56;
  MR_Word AccPredDecls0_57;
  MR_Word AccModeDecls0_58;
  MR_Word AccClauses0_59;
  MR_Word AccForeignProcs0_60;
  MR_Word AccForeignEnums0_61;
  MR_Word AccForeignExportEnums0_62;
  MR_Word AccDeclPragmas0_63;
  MR_Word AccDeclMarkers0_64;
  MR_Word AccDeclPragmasTypeSpecConstr0_65;
  MR_Word AccDeclPragmasTypeSpec0_66;
  MR_Word AccDeclPragmasTermInfo0_67;
  MR_Word AccDeclPragmasTerm2Info0_68;
  MR_Word AccDeclPragmasSharing0_69;
  MR_Word AccDeclPragmasReuse0_70;
  MR_Word AccImplPragmas0_71;
  MR_Word AccImplMarkers0_72;
  MR_Word AccGenPragmasUnusedArgs0_73;
  MR_Word AccGenPragmasExceptions0_74;
  MR_Word AccGenPragmasTrailing0_75;
  MR_Word AccGenPragmasMMTabling0_76;
  MR_Word AccPromises0_77;
  MR_Word AccInitialises0_78;
  MR_Word AccFinalises0_79;
  MR_Word AccMutables0_80;
  MR_Word AccTypeRepns0_81;
  MR_Word IntAvails_82;
  MR_Word ImpAvails_83;
  MR_Word AccAvails1_84;
  MR_Word AccAvails_85;
  MR_Word IntFIMs_86;
  MR_Word ImpFIMs_87;
  MR_Word AccFIMs_88;
  MR_Word IntTypeDefns_89;
  MR_Word SubTypeDefns_90;
  MR_Word SubForeignEnums_91;
  MR_Word IntTypeDefnsAbs_92;
  MR_Word IntTypeDefnsMer_93;
  MR_Word IntTypeDefnsFor_94;
  MR_Word SubTypeDefnsAbs_95;
  MR_Word SubTypeDefnsMer_96;
  MR_Word SubTypeDefnsFor_97;
  MR_Word AccTypeDefnsAbs1_98;
  MR_Word AccTypeDefnsAbs_99;
  MR_Word AccTypeDefnsMer1_100;
  MR_Word AccTypeDefnsMer_101;
  MR_Word AccTypeDefnsFor1_102;
  MR_Word AccTypeDefnsFor_103;
  MR_Word IntInstDefns_104;
  MR_Word SubInstDefns_105;
  MR_Word AccInstDefns1_106;
  MR_Word AccInstDefns_107;
  MR_Word IntModeDefns_108;
  MR_Word SubModeDefns_109;
  MR_Word AccModeDefns1_110;
  MR_Word AccModeDefns_111;
  MR_Word AccTypeClasses1_112;
  MR_Word AccTypeClasses_113;
  MR_Word AccInstances1_114;
  MR_Word AccInstances_115;
  MR_Word AccPredDecls1_116;
  MR_Word AccPredDecls_117;
  MR_Word AccModeDecls1_118;
  MR_Word AccModeDecls_119;
  MR_Word AccClauses_120;
  MR_Word AccForeignProcs_121;
  MR_Word AccForeignEnums_122;
  MR_Word AccForeignExportEnums_123;
  MR_Word AccDeclPragmas1_124;
  MR_Word AccDeclMarkers1_125;
  MR_Word AccDeclPragmas_126;
  MR_Word AccDeclMarkers_127;
  MR_Word AccImplPragmas_128;
  MR_Word AccImplMarkers_129;
  MR_Word AccPromises1_130;
  MR_Word AccPromises_131;
  MR_Word AccInitialises_132;
  MR_Word AccFinalises_133;
  MR_Word AccMutables_134;
  MR_Word Var_145;
  MR_Word Var_147;
  MR_Word Var_148;
  MR_Word Var_149;
  MR_Word Var_150;
  MR_Word Var_157;

  succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0), InclMap_8);
  if (succeeded)
  {
    SubItemMercuryStatus_46 = (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_4[1]);
    SubSectionInfo_47 = (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[56]);
  }
  else
  {
    SubItemMercuryStatus_46 = (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_4[2]);
    SubSectionInfo_47 = (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[57]);
  }
  AccAvails0_48 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_135, (MR_Integer) 0))));
  AccFIMs0_49 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_135, (MR_Integer) 1))));
  AccTypeDefnsAbs0_50 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_135, (MR_Integer) 2))));
  AccTypeDefnsMer0_51 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_135, (MR_Integer) 3))));
  AccTypeDefnsFor0_52 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_135, (MR_Integer) 4))));
  AccInstDefns0_53 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_135, (MR_Integer) 5))));
  AccModeDefns0_54 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_135, (MR_Integer) 6))));
  AccTypeClasses0_55 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_135, (MR_Integer) 7))));
  AccInstances0_56 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_135, (MR_Integer) 8))));
  AccPredDecls0_57 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_135, (MR_Integer) 9))));
  AccModeDecls0_58 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_135, (MR_Integer) 10))));
  AccClauses0_59 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_135, (MR_Integer) 11))));
  AccForeignProcs0_60 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_135, (MR_Integer) 12))));
  AccForeignEnums0_61 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_135, (MR_Integer) 13))));
  AccForeignExportEnums0_62 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_135, (MR_Integer) 14))));
  AccDeclPragmas0_63 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_135, (MR_Integer) 15))));
  AccDeclMarkers0_64 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_135, (MR_Integer) 16))));
  AccDeclPragmasTypeSpecConstr0_65 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_135, (MR_Integer) 17))));
  AccDeclPragmasTypeSpec0_66 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_135, (MR_Integer) 18))));
  AccDeclPragmasTermInfo0_67 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_135, (MR_Integer) 19))));
  AccDeclPragmasTerm2Info0_68 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_135, (MR_Integer) 20))));
  AccDeclPragmasSharing0_69 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_135, (MR_Integer) 21))));
  AccDeclPragmasReuse0_70 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_135, (MR_Integer) 22))));
  AccImplPragmas0_71 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_135, (MR_Integer) 23))));
  AccImplMarkers0_72 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_135, (MR_Integer) 24))));
  AccGenPragmasUnusedArgs0_73 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_135, (MR_Integer) 25))));
  AccGenPragmasExceptions0_74 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_135, (MR_Integer) 26))));
  AccGenPragmasTrailing0_75 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_135, (MR_Integer) 27))));
  AccGenPragmasMMTabling0_76 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_135, (MR_Integer) 28))));
  AccPromises0_77 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_135, (MR_Integer) 29))));
  AccInitialises0_78 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_135, (MR_Integer) 30))));
  AccFinalises0_79 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_135, (MR_Integer) 31))));
  AccMutables0_80 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_135, (MR_Integer) 32))));
  AccTypeRepns0_81 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_135, (MR_Integer) 33))));
  parse_tree__item_util__import_and_or_use_map_to_item_avails_4_p_0((MR_Integer) 1, ImportUseMap_9, &IntAvails_82, &ImpAvails_83);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_avails_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_4[0]), IntAvails_82, AccAvails0_48, &AccAvails1_84);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_avails_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_4[1]), ImpAvails_83, AccAvails1_84, &AccAvails_85);
  Var_145 = mercury__map__keys_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), IntFIMSpecMap_10);
  IntFIMs_86 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_3[4]), Var_145);
  Var_147 = mercury__map__keys_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), ImpFIMSpecMap_11);
  ImpFIMs_87 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_3[5]), Var_147);
  Var_149 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), IntFIMs_86);
  Var_150 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), ImpFIMs_87);
  Var_148 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), Var_149, Var_150);
  AccFIMs_88 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), AccFIMs0_49, Var_148);
  parse_tree__item_util__type_ctor_checked_map_get_src_defns_4_p_0(TypeCtorCheckedMap_14, &IntTypeDefns_89, &SubTypeDefns_90, &SubForeignEnums_91);
  hlds__make_hlds__make_hlds_separate_items__separate_type_defns_abs_mer_for_7_p_0(IntTypeDefns_89, (MR_Word) ((MR_Unsigned) 0U), &IntTypeDefnsAbs_92, (MR_Word) ((MR_Unsigned) 0U), &IntTypeDefnsMer_93, (MR_Word) ((MR_Unsigned) 0U), &IntTypeDefnsFor_94);
  hlds__make_hlds__make_hlds_separate_items__separate_type_defns_abs_mer_for_7_p_0(SubTypeDefns_90, (MR_Word) ((MR_Unsigned) 0U), &SubTypeDefnsAbs_95, (MR_Word) ((MR_Unsigned) 0U), &SubTypeDefnsMer_96, (MR_Word) ((MR_Unsigned) 0U), &SubTypeDefnsFor_97);
  hlds__make_hlds__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[55]), IntTypeDefnsAbs_92, AccTypeDefnsAbs0_50, &AccTypeDefnsAbs1_98);
  hlds__make_hlds__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[1]), SubSectionInfo_47, SubTypeDefnsAbs_95, AccTypeDefnsAbs1_98, &AccTypeDefnsAbs_99);
  hlds__make_hlds__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[55]), IntTypeDefnsMer_93, AccTypeDefnsMer0_51, &AccTypeDefnsMer1_100);
  hlds__make_hlds__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[1]), SubSectionInfo_47, SubTypeDefnsMer_96, AccTypeDefnsMer1_100, &AccTypeDefnsMer_101);
  hlds__make_hlds__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[55]), IntTypeDefnsFor_94, AccTypeDefnsFor0_52, &AccTypeDefnsFor1_102);
  hlds__make_hlds__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[1]), SubSectionInfo_47, SubTypeDefnsFor_97, AccTypeDefnsFor1_102, &AccTypeDefnsFor_103);
  parse_tree__item_util__inst_ctor_checked_map_get_src_defns_3_p_0(InstCtorCheckedMap_15, &IntInstDefns_104, &SubInstDefns_105);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[3]), (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_4[0]), IntInstDefns_104, AccInstDefns0_53, &AccInstDefns1_106);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[3]), SubItemMercuryStatus_46, SubInstDefns_105, AccInstDefns1_106, &AccInstDefns_107);
  parse_tree__item_util__mode_ctor_checked_map_get_src_defns_3_p_0(ModeCtorCheckedMap_16, &IntModeDefns_108, &SubModeDefns_109);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[5]), (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_4[0]), IntModeDefns_108, AccModeDefns0_54, &AccModeDefns1_110);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[5]), SubItemMercuryStatus_46, SubModeDefns_109, AccModeDefns1_110, &AccModeDefns_111);
  hlds__make_hlds__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[55]), IntTypeClasses_19, AccTypeClasses0_55, &AccTypeClasses1_112);
  hlds__make_hlds__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), SubSectionInfo_47, SubTypeClasses_27, AccTypeClasses1_112, &AccTypeClasses_113);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_4[0]), IntInstances_20, AccInstances0_56, &AccInstances1_114);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), SubItemMercuryStatus_46, SubInstances_28, AccInstances1_114, &AccInstances_115);
  hlds__make_hlds__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[55]), IntPredDecls_21, AccPredDecls0_57, &AccPredDecls1_116);
  hlds__make_hlds__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), SubSectionInfo_47, SubPredDecls_29, AccPredDecls1_116, &AccPredDecls_117);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_4[0]), IntModeDecls_22, AccModeDecls0_58, &AccModeDecls1_118);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), SubItemMercuryStatus_46, SubModeDecls_30, AccModeDecls1_118, &AccModeDecls_119);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_4[1]), ImpClauses_31, AccClauses0_59, &AccClauses_120);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_proc_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_4[1]), ImpForeignProcs_32, AccForeignProcs0_60, &AccForeignProcs_121);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_tuple_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), SubItemMercuryStatus_46, SubForeignEnums_91, AccForeignEnums0_61, &AccForeignEnums_122);
  Var_157 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_export_enum_info_0), ImpForeignExportEnums_33);
  AccForeignExportEnums_123 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_export_enum_info_0), AccForeignExportEnums0_62, Var_157);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_pragma_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_4[0]), IntDeclPragmas_23, AccDeclPragmas0_63, &AccDeclPragmas1_124);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_marker_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_4[0]), IntDeclMarkers_24, AccDeclMarkers0_64, &AccDeclMarkers1_125);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_pragma_info_0), SubItemMercuryStatus_46, SubDeclPragmas_34, AccDeclPragmas1_124, &AccDeclPragmas_126);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_marker_info_0), SubItemMercuryStatus_46, SubDeclMarkers_35, AccDeclMarkers1_125, &AccDeclMarkers_127);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_impl_pragma_info_0), SubItemMercuryStatus_46, ImpImplPragmas_36, AccImplPragmas0_71, &AccImplPragmas_128);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_impl_marker_info_0), SubItemMercuryStatus_46, ImpImplMarkers_37, AccImplMarkers0_72, &AccImplMarkers_129);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_4[0]), IntPromises_25, AccPromises0_77, &AccPromises1_130);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), SubItemMercuryStatus_46, SubPromises_38, AccPromises1_130, &AccPromises_131);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_initialise_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_4[1]), ImpInitialises_39, AccInitialises0_78, &AccInitialises_132);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_finalise_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_4[1]), ImpFinalises_40, AccFinalises0_79, &AccFinalises_133);
  hlds__make_hlds__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0), SubSectionInfo_47, SubMutables_41, AccMutables0_80, &AccMutables_134);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (34 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Acc_136 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (AccAvails_85));
    MR_hl_field(0, base, 1) = ((MR_Box) (AccFIMs_88));
    MR_hl_field(0, base, 2) = ((MR_Box) (AccTypeDefnsAbs_99));
    MR_hl_field(0, base, 3) = ((MR_Box) (AccTypeDefnsMer_101));
    MR_hl_field(0, base, 4) = ((MR_Box) (AccTypeDefnsFor_103));
    MR_hl_field(0, base, 5) = ((MR_Box) (AccInstDefns_107));
    MR_hl_field(0, base, 6) = ((MR_Box) (AccModeDefns_111));
    MR_hl_field(0, base, 7) = ((MR_Box) (AccTypeClasses_113));
    MR_hl_field(0, base, 8) = ((MR_Box) (AccInstances_115));
    MR_hl_field(0, base, 9) = ((MR_Box) (AccPredDecls_117));
    MR_hl_field(0, base, 10) = ((MR_Box) (AccModeDecls_119));
    MR_hl_field(0, base, 11) = ((MR_Box) (AccClauses_120));
    MR_hl_field(0, base, 12) = ((MR_Box) (AccForeignProcs_121));
    MR_hl_field(0, base, 13) = ((MR_Box) (AccForeignEnums_122));
    MR_hl_field(0, base, 14) = ((MR_Box) (AccForeignExportEnums_123));
    MR_hl_field(0, base, 15) = ((MR_Box) (AccDeclPragmas_126));
    MR_hl_field(0, base, 16) = ((MR_Box) (AccDeclMarkers_127));
    MR_hl_field(0, base, 17) = ((MR_Box) (AccDeclPragmasTypeSpecConstr0_65));
    MR_hl_field(0, base, 18) = ((MR_Box) (AccDeclPragmasTypeSpec0_66));
    MR_hl_field(0, base, 19) = ((MR_Box) (AccDeclPragmasTermInfo0_67));
    MR_hl_field(0, base, 20) = ((MR_Box) (AccDeclPragmasTerm2Info0_68));
    MR_hl_field(0, base, 21) = ((MR_Box) (AccDeclPragmasSharing0_69));
    MR_hl_field(0, base, 22) = ((MR_Box) (AccDeclPragmasReuse0_70));
    MR_hl_field(0, base, 23) = ((MR_Box) (AccImplPragmas_128));
    MR_hl_field(0, base, 24) = ((MR_Box) (AccImplMarkers_129));
    MR_hl_field(0, base, 25) = ((MR_Box) (AccGenPragmasUnusedArgs0_73));
    MR_hl_field(0, base, 26) = ((MR_Box) (AccGenPragmasExceptions0_74));
    MR_hl_field(0, base, 27) = ((MR_Box) (AccGenPragmasTrailing0_75));
    MR_hl_field(0, base, 28) = ((MR_Box) (AccGenPragmasMMTabling0_76));
    MR_hl_field(0, base, 29) = ((MR_Box) (AccPromises_131));
    MR_hl_field(0, base, 30) = ((MR_Box) (AccInitialises_132));
    MR_hl_field(0, base, 31) = ((MR_Box) (AccFinalises_133));
    MR_hl_field(0, base, 32) = ((MR_Box) (AccMutables_134));
    MR_hl_field(0, base, 33) = ((MR_Box) (AccTypeRepns0_81));
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_separate_items__acc_ims_tuple_list_4_p_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ImsItems_0_3,
  MR_Word * STATE_VARIABLE_ImsItems_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ImsItems_4 = STATE_VARIABLE_ImsItems_0_3;
    else
    {
      MR_Word TypeInfo_20_20;
      MR_Box Item_10 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0));
      MR_Word Items_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Tuple Var_15;
      MR_Word STATE_VARIABLE_ImsItems_16_16;
      MR_Word conv0_STATE_VARIABLE_ImsItems_16_16;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_ImsItems_0_3;

      {
        Var_15 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_15, 0) = ((MR_Box) (HeadVar__1_1));
        MR_hl_field(0, Var_15, 1) = Item_10;
      }
      {
        TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_20_20, 0) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0));
        MR_hl_field(0, TypeInfo_20_20, 1) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, TypeInfo_20_20, 2) = ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_item_mercury_status_0));
        MR_hl_field(0, TypeInfo_20_20, 3) = ((MR_Box) (TypeInfo_for_T_17));
      }
      mercury__cord__snoc_3_p_0(TypeInfo_20_20, ((MR_Box) (Var_15)), (MR_Word) (STATE_VARIABLE_ImsItems_0_3), &conv0_STATE_VARIABLE_ImsItems_16_16);
      STATE_VARIABLE_ImsItems_16_16 = (MR_Word) (conv0_STATE_VARIABLE_ImsItems_16_16);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Items_11;
      next_value_of_STATE_VARIABLE_ImsItems_0_3 = STATE_VARIABLE_ImsItems_16_16;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_ImsItems_0_3 = next_value_of_STATE_VARIABLE_ImsItems_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word ItemMercuryStatus_5,
  MR_Word Items_6,
  MR_Word STATE_VARIABLE_ImsCord_0_11,
  MR_Word * STATE_VARIABLE_ImsCord_12)
{
  if ((Items_6 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_ImsCord_12 = STATE_VARIABLE_ImsCord_0_11;
  else
  {
    MR_Word TypeInfo_15_15;
    MR_Word ImsSubList_10;
    MR_Word conv0_STATE_VARIABLE_ImsCord_12;

    {
      ImsSubList_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ImsSubList_10, 0) = ((MR_Box) (ItemMercuryStatus_5));
      MR_hl_field(0, ImsSubList_10, 1) = ((MR_Box) (Items_6));
    }
    {
      TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_15_15, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_ims_sub_list_1));
      MR_hl_field(0, TypeInfo_15_15, 1) = ((MR_Box) (TypeInfo_for_T_13));
    }
    mercury__cord__snoc_3_p_0(TypeInfo_15_15, ((MR_Box) (ImsSubList_10)), (MR_Word) (STATE_VARIABLE_ImsCord_0_11), &conv0_STATE_VARIABLE_ImsCord_12);
    *STATE_VARIABLE_ImsCord_12 = (MR_Word) (conv0_STATE_VARIABLE_ImsCord_12);
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_separate_items__acc_sec_list_4_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word SectionInfo_5,
  MR_Word Items_6,
  MR_Word STATE_VARIABLE_SecCord_0_11,
  MR_Word * STATE_VARIABLE_SecCord_12)
{
  if ((Items_6 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_SecCord_12 = STATE_VARIABLE_SecCord_0_11;
  else
  {
    MR_Word TypeInfo_15_15;
    MR_Word SecSubList_10;
    MR_Word conv0_STATE_VARIABLE_SecCord_12;

    {
      SecSubList_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, SecSubList_10, 0) = ((MR_Box) (SectionInfo_5));
      MR_hl_field(0, SecSubList_10, 1) = ((MR_Box) (Items_6));
    }
    {
      TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_15_15, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_sec_sub_list_1));
      MR_hl_field(0, TypeInfo_15_15, 1) = ((MR_Box) (TypeInfo_for_T_13));
    }
    mercury__cord__snoc_3_p_0(TypeInfo_15_15, ((MR_Box) (SecSubList_10)), (MR_Word) (STATE_VARIABLE_SecCord_0_11), &conv0_STATE_VARIABLE_SecCord_12);
    *STATE_VARIABLE_SecCord_12 = (MR_Word) (conv0_STATE_VARIABLE_SecCord_12);
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_separate_items__separate_type_defns_abs_mer_for_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Abs_0_2,
  MR_Word * STATE_VARIABLE_Abs_3,
  MR_Word STATE_VARIABLE_Mer_0_4,
  MR_Word * STATE_VARIABLE_Mer_5,
  MR_Word STATE_VARIABLE_For_0_6,
  MR_Word * STATE_VARIABLE_For_7)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *STATE_VARIABLE_For_7 = STATE_VARIABLE_For_0_6;
    *STATE_VARIABLE_Mer_5 = STATE_VARIABLE_Mer_0_4;
    *STATE_VARIABLE_Abs_3 = STATE_VARIABLE_Abs_0_2;
  }
  else
  {
    MR_Word Item_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Items_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word TypeDefn_24;
    MR_Word STATE_VARIABLE_Abs_40_40;
    MR_Word STATE_VARIABLE_Mer_41_41;
    MR_Word STATE_VARIABLE_For_42_42;

    hlds__make_hlds__make_hlds_separate_items__separate_type_defns_abs_mer_for_7_p_0(Items_18, STATE_VARIABLE_Abs_0_2, &STATE_VARIABLE_Abs_40_40, STATE_VARIABLE_Mer_0_4, &STATE_VARIABLE_Mer_41_41, STATE_VARIABLE_For_0_6, &STATE_VARIABLE_For_42_42);
    TypeDefn_24 = ((MR_Word) ((MR_hl_field(0, Item_17, (MR_Integer) 2))));
    switch (MR_tag((MR_Word) TypeDefn_24)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Mer_5 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Item_17));
            MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Mer_41_41));
          }
          *STATE_VARIABLE_Abs_3 = STATE_VARIABLE_Abs_40_40;
          *STATE_VARIABLE_For_7 = STATE_VARIABLE_For_42_42;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, TypeDefn_24, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_Mer_5 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Item_17));
                MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Mer_41_41));
              }
              *STATE_VARIABLE_Abs_3 = STATE_VARIABLE_Abs_40_40;
              *STATE_VARIABLE_For_7 = STATE_VARIABLE_For_42_42;
            }
            break;
          case (MR_Integer) 1:
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_Abs_3 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Item_17));
                MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Abs_40_40));
              }
              *STATE_VARIABLE_Mer_5 = STATE_VARIABLE_Mer_41_41;
              *STATE_VARIABLE_For_7 = STATE_VARIABLE_For_42_42;
            }
            break;
          case (MR_Integer) 2:
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_For_7 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Item_17));
                MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_For_42_42));
              }
              *STATE_VARIABLE_Abs_3 = STATE_VARIABLE_Abs_40_40;
              *STATE_VARIABLE_Mer_5 = STATE_VARIABLE_Mer_41_41;
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_separate_items__acc_ims_avails_4_p_0(
  MR_Word ItemMercuryStatus_5,
  MR_Word Avails_6,
  MR_Word STATE_VARIABLE_AccAvails_0_11,
  MR_Word * STATE_VARIABLE_AccAvails_12)
{
  if ((Avails_6 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_AccAvails_12 = STATE_VARIABLE_AccAvails_0_11;
  else
  {
    MR_Word ImsSubList_10;

    {
      ImsSubList_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ImsSubList_10, 0) = ((MR_Box) (ItemMercuryStatus_5));
      MR_hl_field(0, ImsSubList_10, 1) = ((MR_Box) (Avails_6));
    }
    mercury__cord__snoc_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[0]), ((MR_Box) (ImsSubList_10)), STATE_VARIABLE_AccAvails_0_11, STATE_VARIABLE_AccAvails_12);
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_separate_items____Unify____ims_tuple_cord_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__make_hlds_separate_items____Unify____ims_tuple_cord_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__make_hlds_separate_items____Compare____ims_tuple_cord_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__make_hlds_separate_items____Compare____ims_tuple_cord_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_separate_items____Unify____ims_tuple_item_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__make_hlds_separate_items____Unify____ims_tuple_item_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Tuple) (wrapper_arg_2)), ((MR_Tuple) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__make_hlds_separate_items____Compare____ims_tuple_item_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__make_hlds_separate_items____Compare____ims_tuple_item_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Tuple) (wrapper_arg_3)), ((MR_Tuple) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_separate_items____Unify____ims_tuple_list_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__make_hlds_separate_items____Unify____ims_tuple_list_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__make_hlds_separate_items____Compare____ims_tuple_list_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__make_hlds_separate_items____Compare____ims_tuple_list_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_separate_items____Unify____int_type_ctor_repns_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__make_hlds_separate_items____Unify____int_type_ctor_repns_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__make_hlds_separate_items____Compare____int_type_ctor_repns_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__make_hlds_separate_items____Compare____int_type_ctor_repns_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_separate_items____Unify____item_accumulator_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__make_hlds_separate_items____Unify____item_accumulator_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__make_hlds_separate_items____Compare____item_accumulator_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__make_hlds_separate_items____Compare____item_accumulator_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_separate_items____Unify____module_int_type_ctor_repns_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__make_hlds_separate_items____Unify____module_int_type_ctor_repns_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__make_hlds_separate_items____Compare____module_int_type_ctor_repns_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__make_hlds_separate_items____Compare____module_int_type_ctor_repns_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__hlds__make_hlds__make_hlds_separate_items__init(void)
{
}

void mercury__hlds__make_hlds__make_hlds_separate_items__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__type_ctor_info_ims_tuple_cord_1);
	MR_register_type_ctor_info(&hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__type_ctor_info_ims_tuple_item_1);
	MR_register_type_ctor_info(&hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__type_ctor_info_ims_tuple_list_1);
	MR_register_type_ctor_info(&hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__type_ctor_info_int_type_ctor_repns_0);
	MR_register_type_ctor_info(&hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__type_ctor_info_item_accumulator_0);
	MR_register_type_ctor_info(&hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__type_ctor_info_module_int_type_ctor_repns_0);
}

void mercury__hlds__make_hlds__make_hlds_separate_items__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__make_hlds__make_hlds_separate_items__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module hlds.make_hlds.make_hlds_separate_items.
