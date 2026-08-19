/*
** Automatically generated from `make_hlds_separate_items.m'
** by the Mercury compiler,
** version rotd-2026-08-19
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
#include "libs.timestamp.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.convert_import_use.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.find_module.mih"
#include "parse_tree.item_util.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_rare.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_item_inst_mode.mih"
#include "parse_tree.prog_item_pragma.mih"
#include "parse_tree.prog_item_pred_proc_id.mih"
#include "parse_tree.prog_item_type.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.set_of_var.mih"
#include "recompilation.item_types.mih"
#include "hlds.make_hlds.make_hlds_types.mih"




static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__make_hlds_separate_items__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_hlds__make_hlds__make_hlds_separate_items__type_ctor_info_int_type_ctor_repns_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__make_hlds_separate_items__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_hlds__make_hlds__make_hlds_separate_items__type_ctor_info_int_type_ctor_repns_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__parse_tree__prog_item_type__ti_item_type_repn_info_general_1parse_tree__prog_item_type__type_ctor_info_type_ctor_repn_info_0;

static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__make_hlds_separate_items__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__prog_item_type__ti_item_type_repn_info_general_1parse_tree__prog_item_type__type_ctor_info_type_ctor_repn_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__pti_cord_1__plain_pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__prog_item_type__ti_item_type_repn_info_general_1parse_tree__prog_item_type__type_ctor_info_type_ctor_repn_info_0;

static const MR_VA_PseudoTypeInfo_Struct2 hlds__make_hlds__make_hlds_separate_items____vpti_tuple_2__plain_hlds__status__type_ctor_info_item_mercury_status_0__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__pti_cord_1__pseudo___vpti_tuple_2__plain_hlds__status__type_ctor_info_item_mercury_status_0__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__list__pti_list_1__pseudo___vpti_tuple_2__plain_hlds__status__type_ctor_info_item_mercury_status_0__pseudo_1;

static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__make_hlds_separate_items__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__prog_item_type__ti_item_type_repn_info_general_1parse_tree__prog_item_type__type_ctor_info_type_ctor_repn_info_0;

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

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__parse_tree__prog_item_type__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_sec_sub_list_1parse_tree__prog_item_type__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_sec_sub_list_1parse_tree__prog_item_type__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__parse_tree__prog_item_inst_mode__ti_item_inst_defn_info_general_1parse_tree__prog_item_inst_mode__type_ctor_info_maybe_abstract_inst_defn_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item_inst_mode__ti_item_inst_defn_info_general_1parse_tree__prog_item_inst_mode__type_ctor_info_maybe_abstract_inst_defn_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item_inst_mode__ti_item_inst_defn_info_general_1parse_tree__prog_item_inst_mode__type_ctor_info_maybe_abstract_inst_defn_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__parse_tree__prog_item_inst_mode__ti_item_mode_defn_info_general_1parse_tree__prog_item_inst_mode__type_ctor_info_maybe_abstract_mode_defn_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item_inst_mode__ti_item_mode_defn_info_general_1parse_tree__prog_item_inst_mode__type_ctor_info_maybe_abstract_mode_defn_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item_inst_mode__ti_item_mode_defn_info_general_1parse_tree__prog_item_inst_mode__type_ctor_info_maybe_abstract_mode_defn_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_sec_sub_list_1parse_tree__prog_item__type_ctor_info_item_typeclass_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_sec_sub_list_1parse_tree__prog_item__type_ctor_info_item_typeclass_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_abstract_instance_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_abstract_instance_info_0;

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

static const MR_VA_TypeInfo_Struct2 hlds__make_hlds__make_hlds_separate_items____vti_tuple_2hlds__status__type_ctor_info_item_mercury_status_0parse_tree__prog_item_type__type_ctor_info_item_foreign_enum_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1__vti_tuple_2hlds__status__type_ctor_info_item_mercury_status_0parse_tree__prog_item_type__type_ctor_info_item_foreign_enum_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1parse_tree__prog_item__type_ctor_info_item_foreign_export_enum_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item_pragma__type_ctor_info_item_decl_pragma_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item_pragma__type_ctor_info_item_decl_pragma_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item_pragma__type_ctor_info_item_decl_marker_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item_pragma__type_ctor_info_item_decl_marker_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1parse_tree__prog_item_pragma__type_ctor_info_decl_pragma_type_spec_constr_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1parse_tree__prog_item_pragma__type_ctor_info_decl_pragma_type_spec_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item_pragma__type_ctor_info_decl_pragma_input_spec_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item_pragma__type_ctor_info_decl_pragma_input_spec_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1parse_tree__prog_item_pragma__type_ctor_info_decl_pragma_termination_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1parse_tree__prog_item_pragma__type_ctor_info_decl_pragma_termination2_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1parse_tree__prog_item_pragma__type_ctor_info_decl_pragma_struct_sharing_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1parse_tree__prog_item_pragma__type_ctor_info_decl_pragma_struct_reuse_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item_pragma__type_ctor_info_item_impl_pragma_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item_pragma__type_ctor_info_item_impl_pragma_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item_pragma__type_ctor_info_item_impl_marker_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item_pragma__type_ctor_info_item_impl_marker_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1parse_tree__prog_item_pragma__type_ctor_info_gen_pragma_unused_args_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1parse_tree__prog_item_pragma__type_ctor_info_gen_pragma_exceptions_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1parse_tree__prog_item_pragma__type_ctor_info_gen_pragma_trailing_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1parse_tree__prog_item_pragma__type_ctor_info_gen_pragma_mm_tabling_info_0;

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

static const MR_PseudoTypeInfo hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__field_types_item_accumulator_0_0[36];

static const MR_ConstString hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__field_names_item_accumulator_0_0[36];

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
  MR_Word STATE_VARIABLE_Acc_0_58,
  MR_Word * STATE_VARIABLE_Acc_59);

static MR_Box MR_CALL 
hlds__make_hlds__make_hlds_separate_items__acc_parse_tree_plain_opt_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds__make_hlds_separate_items__acc_parse_tree_plain_opt_3_p_0(
  MR_Word ParseTreePlainOpt_4,
  MR_Word STATE_VARIABLE_Acc_0_103,
  MR_Word * STATE_VARIABLE_Acc_104);

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
  MR_Word STATE_VARIABLE_Acc_0_97,
  MR_Word * STATE_VARIABLE_Acc_98);

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
  MR_Word STATE_VARIABLE_Acc_0_110,
  MR_Word * STATE_VARIABLE_Acc_111);

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
  MR_Word STATE_VARIABLE_Acc_0_123,
  MR_Word * STATE_VARIABLE_Acc_124);

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
hlds__make_hlds__make_hlds_separate_items__separate_items_in_aug_comp_unit_39_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__make_hlds__make_hlds_separate_items__separate_items_in_aug_comp_unit_39_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__make_hlds__make_hlds_separate_items__separate_items_in_aug_comp_unit_39_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__make_hlds__make_hlds_separate_items__separate_items_in_aug_comp_unit_39_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__make_hlds__make_hlds_separate_items__separate_items_in_aug_comp_unit_39_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__make_hlds__make_hlds_separate_items__separate_items_in_aug_comp_unit_39_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__make_hlds__make_hlds_separate_items__separate_items_in_aug_comp_unit_39_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__make_hlds__make_hlds_separate_items__separate_items_in_aug_comp_unit_39_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__make_hlds__make_hlds_separate_items__separate_items_in_aug_comp_unit_39_p_0_1(
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
  MR_Word STATE_VARIABLE_Acc_0_139,
  MR_Word * STATE_VARIABLE_Acc_140);

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


static /* final */ const MR_Box hlds__make_hlds__make_hlds_separate_items_scalar_common_1[63][2];

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



static /* final */ const MR_Box hlds__make_hlds__make_hlds_separate_items_scalar_common_1[63][2] = {
  /* row   0 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_ims_sub_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&parse_tree__prog_item_type__parse_tree__prog_item_type__type_ctor_info_item_type_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_sec_sub_list_1)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[1]))
  },
  /* row   3 */
  {
    ((MR_Box) (&parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_item_inst_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_maybe_abstract_inst_defn_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_ims_sub_list_1)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[3]))
  },
  /* row   5 */
  {
    ((MR_Box) (&parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_item_mode_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_maybe_abstract_mode_defn_0))
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
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_abstract_instance_info_0))
  },
  /* row   9 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_ims_sub_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0))
  },
  /* row  10 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_sec_sub_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0))
  },
  /* row  11 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_ims_sub_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0))
  },
  /* row  12 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_ims_sub_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0))
  },
  /* row  13 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_ims_sub_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_proc_info_0))
  },
  /* row  14 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_ims_sub_list_1)),
    ((MR_Box) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_item_decl_pragma_info_0))
  },
  /* row  15 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_ims_sub_list_1)),
    ((MR_Box) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_item_decl_marker_info_0))
  },
  /* row  16 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_ims_sub_list_1)),
    ((MR_Box) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_decl_pragma_input_spec_info_0))
  },
  /* row  17 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_ims_sub_list_1)),
    ((MR_Box) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_item_impl_pragma_info_0))
  },
  /* row  18 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_ims_sub_list_1)),
    ((MR_Box) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_item_impl_marker_info_0))
  },
  /* row  19 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_ims_sub_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0))
  },
  /* row  20 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_ims_sub_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_initialise_info_0))
  },
  /* row  21 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_ims_sub_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_finalise_info_0))
  },
  /* row  22 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_sec_sub_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0))
  },
  /* row  23 */
  {
    ((MR_Box) (&parse_tree__prog_item_type__parse_tree__prog_item_type__type_ctor_info_item_type_repn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_item_type__parse_tree__prog_item_type__type_ctor_info_type_ctor_repn_info_0))
  },
  /* row  24 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_3[2]))
  },
  /* row  25 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[0]))
  },
  /* row  26 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0))
  },
  /* row  27 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[2]))
  },
  /* row  28 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[4]))
  },
  /* row  29 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[6]))
  },
  /* row  30 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[7]))
  },
  /* row  31 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[8]))
  },
  /* row  32 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[9]))
  },
  /* row  33 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[10]))
  },
  /* row  34 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[11]))
  },
  /* row  35 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[12]))
  },
  /* row  36 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[13]))
  },
  /* row  37 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_2[0]))
  },
  /* row  38 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_export_enum_info_0))
  },
  /* row  39 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[14]))
  },
  /* row  40 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[15]))
  },
  /* row  41 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_decl_pragma_type_spec_constr_info_0))
  },
  /* row  42 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_decl_pragma_type_spec_info_0))
  },
  /* row  43 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[16]))
  },
  /* row  44 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_decl_pragma_termination_info_0))
  },
  /* row  45 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_decl_pragma_termination2_info_0))
  },
  /* row  46 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_decl_pragma_struct_sharing_info_0))
  },
  /* row  47 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_decl_pragma_struct_reuse_info_0))
  },
  /* row  48 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[17]))
  },
  /* row  49 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[18]))
  },
  /* row  50 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_gen_pragma_unused_args_info_0))
  },
  /* row  51 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_gen_pragma_exceptions_info_0))
  },
  /* row  52 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_gen_pragma_trailing_info_0))
  },
  /* row  53 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_gen_pragma_mm_tabling_info_0))
  },
  /* row  54 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[19]))
  },
  /* row  55 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[20]))
  },
  /* row  56 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[21]))
  },
  /* row  57 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[22]))
  },
  /* row  58 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_3[0]))
  },
  /* row  59 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_4[0])),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row  60 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_4[1])),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row  61 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_4[2])),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row  62 */
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
    ((MR_Box) (&parse_tree__prog_item_type__parse_tree__prog_item_type__type_ctor_info_item_foreign_enum_info_0))
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
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[23]))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[23]))
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
    ((MR_Box) (hlds__make_hlds__make_hlds_separate_items__separate_items_in_aug_comp_unit_39_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_6[1])),
    ((MR_Box) (hlds__make_hlds__make_hlds_separate_items__separate_items_in_aug_comp_unit_39_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_6[2])),
    ((MR_Box) (hlds__make_hlds__make_hlds_separate_items__separate_items_in_aug_comp_unit_39_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_6[3])),
    ((MR_Box) (hlds__make_hlds__make_hlds_separate_items__separate_items_in_aug_comp_unit_39_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_6[4])),
    ((MR_Box) (hlds__make_hlds__make_hlds_separate_items__separate_items_in_aug_comp_unit_39_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_6[5])),
    ((MR_Box) (hlds__make_hlds__make_hlds_separate_items__separate_items_in_aug_comp_unit_39_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  12 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_6[6])),
    ((MR_Box) (hlds__make_hlds__make_hlds_separate_items__separate_items_in_aug_comp_unit_39_p_0_7)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  13 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_6[7])),
    ((MR_Box) (hlds__make_hlds__make_hlds_separate_items__separate_items_in_aug_comp_unit_39_p_0_8)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  14 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_6[8])),
    ((MR_Box) (hlds__make_hlds__make_hlds_separate_items__separate_items_in_aug_comp_unit_39_p_0_9)),
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
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_ancestor_int_spec_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__type_ctor_info_item_accumulator_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__type_ctor_info_item_accumulator_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_direct_int1_spec_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__type_ctor_info_item_accumulator_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__type_ctor_info_item_accumulator_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_indirect_int2_spec_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__type_ctor_info_item_accumulator_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__type_ctor_info_item_accumulator_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_int_for_opt_spec_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__type_ctor_info_item_accumulator_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__type_ctor_info_item_accumulator_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_parse_tree_plain_opt_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__type_ctor_info_item_accumulator_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__type_ctor_info_item_accumulator_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_parse_tree_trans_opt_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__type_ctor_info_item_accumulator_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__type_ctor_info_item_accumulator_0))
  },
  /* row   6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_type_repn_spec_0)),
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
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items__cord__pti_cord_1__plain_pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__prog_item_type__ti_item_type_repn_info_general_1parse_tree__prog_item_type__type_ctor_info_type_ctor_repn_info_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_separate_items__cord__pti_cord_1__plain_pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__prog_item_type__ti_item_type_repn_info_general_1parse_tree__prog_item_type__type_ctor_info_type_ctor_repn_info_0))
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

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__parse_tree__prog_item_type__ti_item_type_repn_info_general_1parse_tree__prog_item_type__type_ctor_info_type_ctor_repn_info_0 = {
  &parse_tree__prog_item_type__parse_tree__prog_item_type__type_ctor_info_item_type_repn_info_general_1,
  { (MR_TypeInfo) (&parse_tree__prog_item_type__parse_tree__prog_item_type__type_ctor_info_type_ctor_repn_info_0) }
};

static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__make_hlds_separate_items__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__prog_item_type__ti_item_type_repn_info_general_1parse_tree__prog_item_type__type_ctor_info_type_ctor_repn_info_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_TypeInfo) (&hlds__make_hlds__make_hlds_separate_items__parse_tree__prog_item_type__ti_item_type_repn_info_general_1parse_tree__prog_item_type__type_ctor_info_type_ctor_repn_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__pti_cord_1__plain_pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__prog_item_type__ti_item_type_repn_info_general_1parse_tree__prog_item_type__type_ctor_info_type_ctor_repn_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_separate_items__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__prog_item_type__ti_item_type_repn_info_general_1parse_tree__prog_item_type__type_ctor_info_type_ctor_repn_info_0) }
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

static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__make_hlds_separate_items__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__prog_item_type__ti_item_type_repn_info_general_1parse_tree__prog_item_type__type_ctor_info_type_ctor_repn_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_TypeInfo) (&hlds__make_hlds__make_hlds_separate_items__parse_tree__prog_item_type__ti_item_type_repn_info_general_1parse_tree__prog_item_type__type_ctor_info_type_ctor_repn_info_0)
  }
};

static const MR_PseudoTypeInfo hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__field_types_int_type_ctor_repns_0_0[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_int_file_kind_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_separate_items__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__prog_item_type__ti_item_type_repn_info_general_1parse_tree__prog_item_type__type_ctor_info_type_ctor_repn_info_0)
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

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__parse_tree__prog_item_type__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0 = {
  &parse_tree__prog_item_type__parse_tree__prog_item_type__type_ctor_info_item_type_defn_info_general_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_sec_sub_list_1parse_tree__prog_item_type__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0 = {
  &hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_sec_sub_list_1,
  { (MR_TypeInfo) (&hlds__make_hlds__make_hlds_separate_items__parse_tree__prog_item_type__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_sec_sub_list_1parse_tree__prog_item_type__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_TypeInfo) (&hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_sec_sub_list_1parse_tree__prog_item_type__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__parse_tree__prog_item_inst_mode__ti_item_inst_defn_info_general_1parse_tree__prog_item_inst_mode__type_ctor_info_maybe_abstract_inst_defn_0 = {
  &parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_item_inst_defn_info_general_1,
  { (MR_TypeInfo) (&parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_maybe_abstract_inst_defn_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item_inst_mode__ti_item_inst_defn_info_general_1parse_tree__prog_item_inst_mode__type_ctor_info_maybe_abstract_inst_defn_0 = {
  &hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_ims_sub_list_1,
  { (MR_TypeInfo) (&hlds__make_hlds__make_hlds_separate_items__parse_tree__prog_item_inst_mode__ti_item_inst_defn_info_general_1parse_tree__prog_item_inst_mode__type_ctor_info_maybe_abstract_inst_defn_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item_inst_mode__ti_item_inst_defn_info_general_1parse_tree__prog_item_inst_mode__type_ctor_info_maybe_abstract_inst_defn_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_TypeInfo) (&hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item_inst_mode__ti_item_inst_defn_info_general_1parse_tree__prog_item_inst_mode__type_ctor_info_maybe_abstract_inst_defn_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__parse_tree__prog_item_inst_mode__ti_item_mode_defn_info_general_1parse_tree__prog_item_inst_mode__type_ctor_info_maybe_abstract_mode_defn_0 = {
  &parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_item_mode_defn_info_general_1,
  { (MR_TypeInfo) (&parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_maybe_abstract_mode_defn_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item_inst_mode__ti_item_mode_defn_info_general_1parse_tree__prog_item_inst_mode__type_ctor_info_maybe_abstract_mode_defn_0 = {
  &hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_ims_sub_list_1,
  { (MR_TypeInfo) (&hlds__make_hlds__make_hlds_separate_items__parse_tree__prog_item_inst_mode__ti_item_mode_defn_info_general_1parse_tree__prog_item_inst_mode__type_ctor_info_maybe_abstract_mode_defn_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item_inst_mode__ti_item_mode_defn_info_general_1parse_tree__prog_item_inst_mode__type_ctor_info_maybe_abstract_mode_defn_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_TypeInfo) (&hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item_inst_mode__ti_item_mode_defn_info_general_1parse_tree__prog_item_inst_mode__type_ctor_info_maybe_abstract_mode_defn_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_sec_sub_list_1parse_tree__prog_item__type_ctor_info_item_typeclass_info_0 = {
  &hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_sec_sub_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_sec_sub_list_1parse_tree__prog_item__type_ctor_info_item_typeclass_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_TypeInfo) (&hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_sec_sub_list_1parse_tree__prog_item__type_ctor_info_item_typeclass_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_abstract_instance_info_0 = {
  &hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_ims_sub_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_abstract_instance_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_abstract_instance_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_TypeInfo) (&hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_abstract_instance_info_0) }
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

static const MR_VA_TypeInfo_Struct2 hlds__make_hlds__make_hlds_separate_items____vti_tuple_2hlds__status__type_ctor_info_item_mercury_status_0parse_tree__prog_item_type__type_ctor_info_item_foreign_enum_info_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 2,
  {
    (MR_TypeInfo) (&hlds__status__hlds__status__type_ctor_info_item_mercury_status_0),
    (MR_TypeInfo) (&parse_tree__prog_item_type__parse_tree__prog_item_type__type_ctor_info_item_foreign_enum_info_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1__vti_tuple_2hlds__status__type_ctor_info_item_mercury_status_0parse_tree__prog_item_type__type_ctor_info_item_foreign_enum_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_TypeInfo) (&hlds__make_hlds__make_hlds_separate_items____vti_tuple_2hlds__status__type_ctor_info_item_mercury_status_0parse_tree__prog_item_type__type_ctor_info_item_foreign_enum_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1parse_tree__prog_item__type_ctor_info_item_foreign_export_enum_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_export_enum_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item_pragma__type_ctor_info_item_decl_pragma_info_0 = {
  &hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_ims_sub_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_item_decl_pragma_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item_pragma__type_ctor_info_item_decl_pragma_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_TypeInfo) (&hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item_pragma__type_ctor_info_item_decl_pragma_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item_pragma__type_ctor_info_item_decl_marker_info_0 = {
  &hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_ims_sub_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_item_decl_marker_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item_pragma__type_ctor_info_item_decl_marker_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_TypeInfo) (&hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item_pragma__type_ctor_info_item_decl_marker_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1parse_tree__prog_item_pragma__type_ctor_info_decl_pragma_type_spec_constr_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_TypeInfo) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_decl_pragma_type_spec_constr_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1parse_tree__prog_item_pragma__type_ctor_info_decl_pragma_type_spec_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_TypeInfo) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_decl_pragma_type_spec_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item_pragma__type_ctor_info_decl_pragma_input_spec_info_0 = {
  &hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_ims_sub_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_decl_pragma_input_spec_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item_pragma__type_ctor_info_decl_pragma_input_spec_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_TypeInfo) (&hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item_pragma__type_ctor_info_decl_pragma_input_spec_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1parse_tree__prog_item_pragma__type_ctor_info_decl_pragma_termination_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_TypeInfo) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_decl_pragma_termination_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1parse_tree__prog_item_pragma__type_ctor_info_decl_pragma_termination2_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_TypeInfo) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_decl_pragma_termination2_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1parse_tree__prog_item_pragma__type_ctor_info_decl_pragma_struct_sharing_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_TypeInfo) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_decl_pragma_struct_sharing_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1parse_tree__prog_item_pragma__type_ctor_info_decl_pragma_struct_reuse_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_TypeInfo) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_decl_pragma_struct_reuse_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item_pragma__type_ctor_info_item_impl_pragma_info_0 = {
  &hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_ims_sub_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_item_impl_pragma_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item_pragma__type_ctor_info_item_impl_pragma_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_TypeInfo) (&hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item_pragma__type_ctor_info_item_impl_pragma_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item_pragma__type_ctor_info_item_impl_marker_info_0 = {
  &hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_ims_sub_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_item_impl_marker_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item_pragma__type_ctor_info_item_impl_marker_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_TypeInfo) (&hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item_pragma__type_ctor_info_item_impl_marker_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1parse_tree__prog_item_pragma__type_ctor_info_gen_pragma_unused_args_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_TypeInfo) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_gen_pragma_unused_args_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1parse_tree__prog_item_pragma__type_ctor_info_gen_pragma_exceptions_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_TypeInfo) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_gen_pragma_exceptions_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1parse_tree__prog_item_pragma__type_ctor_info_gen_pragma_trailing_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_TypeInfo) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_gen_pragma_trailing_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1parse_tree__prog_item_pragma__type_ctor_info_gen_pragma_mm_tabling_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_TypeInfo) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_gen_pragma_mm_tabling_info_0) }
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

static const MR_PseudoTypeInfo hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__field_types_item_accumulator_0_0[36] = {
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_avail_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1parse_tree__prog_item__type_ctor_info_item_fim_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_sec_sub_list_1parse_tree__prog_item_type__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_sec_sub_list_1parse_tree__prog_item_type__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_sec_sub_list_1parse_tree__prog_item_type__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item_inst_mode__ti_item_inst_defn_info_general_1parse_tree__prog_item_inst_mode__type_ctor_info_maybe_abstract_inst_defn_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item_inst_mode__ti_item_mode_defn_info_general_1parse_tree__prog_item_inst_mode__type_ctor_info_maybe_abstract_mode_defn_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_sec_sub_list_1parse_tree__prog_item__type_ctor_info_item_typeclass_info_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_abstract_instance_info_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_instance_info_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_sec_sub_list_1parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_clause_info_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_foreign_proc_info_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1__vti_tuple_2hlds__status__type_ctor_info_item_mercury_status_0parse_tree__prog_item_type__type_ctor_info_item_foreign_enum_info_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1parse_tree__prog_item__type_ctor_info_item_foreign_export_enum_info_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item_pragma__type_ctor_info_item_decl_pragma_info_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item_pragma__type_ctor_info_item_decl_marker_info_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1parse_tree__prog_item_pragma__type_ctor_info_decl_pragma_type_spec_constr_info_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1parse_tree__prog_item_pragma__type_ctor_info_decl_pragma_type_spec_info_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item_pragma__type_ctor_info_decl_pragma_input_spec_info_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1parse_tree__prog_item_pragma__type_ctor_info_decl_pragma_termination_info_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1parse_tree__prog_item_pragma__type_ctor_info_decl_pragma_termination2_info_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1parse_tree__prog_item_pragma__type_ctor_info_decl_pragma_struct_sharing_info_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1parse_tree__prog_item_pragma__type_ctor_info_decl_pragma_struct_reuse_info_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item_pragma__type_ctor_info_item_impl_pragma_info_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item_pragma__type_ctor_info_item_impl_marker_info_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1parse_tree__prog_item_pragma__type_ctor_info_gen_pragma_unused_args_info_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1parse_tree__prog_item_pragma__type_ctor_info_gen_pragma_exceptions_info_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1parse_tree__prog_item_pragma__type_ctor_info_gen_pragma_trailing_info_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1parse_tree__prog_item_pragma__type_ctor_info_gen_pragma_mm_tabling_info_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_promise_info_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_initialise_info_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_finalise_info_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_sec_sub_list_1parse_tree__prog_item__type_ctor_info_item_mutable_info_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_separate_items__list__ti_list_1pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0hlds__make_hlds__make_hlds_separate_items__type_ctor_info_int_type_ctor_repns_0)
};

static const MR_ConstString hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__field_names_item_accumulator_0_0[36] = {
  (MR_String) "ia_avails",
  (MR_String) "ia_fims",
  (MR_String) "ia_type_defns_abs",
  (MR_String) "ia_type_defns_mer",
  (MR_String) "ia_type_defns_for",
  (MR_String) "ia_inst_defns",
  (MR_String) "ia_mode_defns",
  (MR_String) "ia_typeclasses",
  (MR_String) "ia_int_instances",
  (MR_String) "ia_imp_instances",
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
  (MR_String) "ia_decl_input_spec",
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
  INT16_C(36),
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

  mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[58]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_separate_items____Unify____module_int_type_ctor_repns_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[58]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__make_hlds_separate_items____Compare____item_accumulator_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_111 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_112 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_111 == CastY_112);
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
    MR_Word ArgX9_28 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 8))));
    MR_Word ArgY9_29 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 8))));
    MR_Word ArgX10_31 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 9))));
    MR_Word ArgY10_32 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 9))));
    MR_Word ArgX11_34 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 10))));
    MR_Word ArgY11_35 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 10))));
    MR_Word ArgX12_37 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 11))));
    MR_Word ArgY12_38 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 11))));
    MR_Word ArgX13_40 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 12))));
    MR_Word ArgY13_41 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 12))));
    MR_Word ArgX14_43 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 13))));
    MR_Word ArgY14_44 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 13))));
    MR_Word ArgX15_46 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 14))));
    MR_Word ArgY15_47 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 14))));
    MR_Word ArgX16_49 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 15))));
    MR_Word ArgY16_50 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 15))));
    MR_Word ArgX17_52 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 16))));
    MR_Word ArgY17_53 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 16))));
    MR_Word ArgX18_55 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 17))));
    MR_Word ArgY18_56 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 17))));
    MR_Word ArgX19_58 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 18))));
    MR_Word ArgY19_59 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 18))));
    MR_Word ArgX20_61 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 19))));
    MR_Word ArgY20_62 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 19))));
    MR_Word ArgX21_64 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 20))));
    MR_Word ArgY21_65 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 20))));
    MR_Word ArgX22_67 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 21))));
    MR_Word ArgY22_68 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 21))));
    MR_Word ArgX23_70 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 22))));
    MR_Word ArgY23_71 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 22))));
    MR_Word ArgX24_73 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 23))));
    MR_Word ArgY24_74 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 23))));
    MR_Word ArgX25_76 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 24))));
    MR_Word ArgY25_77 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 24))));
    MR_Word ArgX26_79 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 25))));
    MR_Word ArgY26_80 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 25))));
    MR_Word ArgX27_82 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 26))));
    MR_Word ArgY27_83 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 26))));
    MR_Word ArgX28_85 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 27))));
    MR_Word ArgY28_86 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 27))));
    MR_Word ArgX29_88 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 28))));
    MR_Word ArgY29_89 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 28))));
    MR_Word ArgX30_91 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 29))));
    MR_Word ArgY30_92 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 29))));
    MR_Word ArgX31_94 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 30))));
    MR_Word ArgY31_95 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 30))));
    MR_Word ArgX32_97 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 31))));
    MR_Word ArgY32_98 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 31))));
    MR_Word ArgX33_100 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 32))));
    MR_Word ArgY33_101 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 32))));
    MR_Word ArgX34_103 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 33))));
    MR_Word ArgY34_104 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 33))));
    MR_Word ArgX35_106 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 34))));
    MR_Word ArgY35_107 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 34))));
    MR_Word ArgX36_109 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 35))));
    MR_Word ArgY36_110 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 35))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[25]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[26]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[27]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[27]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[27]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[28]), &SubResult6_21, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
              succeeded = (SubResult6_21 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
              {
                MR_Word SubResult7_24;

                mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[29]), &SubResult7_24, ((MR_Box) (ArgX7_22)), ((MR_Box) (ArgY7_23)));
                succeeded = (SubResult7_24 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult7_24;
                else
                {
                  MR_Word SubResult8_27;

                  mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[30]), &SubResult8_27, ((MR_Box) (ArgX8_25)), ((MR_Box) (ArgY8_26)));
                  succeeded = (SubResult8_27 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult8_27;
                  else
                  {
                    MR_Word SubResult9_30;

                    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[31]), &SubResult9_30, ((MR_Box) (ArgX9_28)), ((MR_Box) (ArgY9_29)));
                    succeeded = (SubResult9_30 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult9_30;
                    else
                    {
                      MR_Word SubResult10_33;

                      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[32]), &SubResult10_33, ((MR_Box) (ArgX10_31)), ((MR_Box) (ArgY10_32)));
                      succeeded = (SubResult10_33 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult10_33;
                      else
                      {
                        MR_Word SubResult11_36;

                        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[33]), &SubResult11_36, ((MR_Box) (ArgX11_34)), ((MR_Box) (ArgY11_35)));
                        succeeded = (SubResult11_36 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult11_36;
                        else
                        {
                          MR_Word SubResult12_39;

                          mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[34]), &SubResult12_39, ((MR_Box) (ArgX12_37)), ((MR_Box) (ArgY12_38)));
                          succeeded = (SubResult12_39 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult12_39;
                          else
                          {
                            MR_Word SubResult13_42;

                            mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[35]), &SubResult13_42, ((MR_Box) (ArgX13_40)), ((MR_Box) (ArgY13_41)));
                            succeeded = (SubResult13_42 != (MR_Integer) 0);
                            if (succeeded)
                              *HeadVar__1_1 = SubResult13_42;
                            else
                            {
                              MR_Word SubResult14_45;

                              mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[36]), &SubResult14_45, ((MR_Box) (ArgX14_43)), ((MR_Box) (ArgY14_44)));
                              succeeded = (SubResult14_45 != (MR_Integer) 0);
                              if (succeeded)
                                *HeadVar__1_1 = SubResult14_45;
                              else
                              {
                                MR_Word SubResult15_48;

                                mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[37]), &SubResult15_48, ((MR_Box) (ArgX15_46)), ((MR_Box) (ArgY15_47)));
                                succeeded = (SubResult15_48 != (MR_Integer) 0);
                                if (succeeded)
                                  *HeadVar__1_1 = SubResult15_48;
                                else
                                {
                                  MR_Word SubResult16_51;

                                  mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[38]), &SubResult16_51, ((MR_Box) (ArgX16_49)), ((MR_Box) (ArgY16_50)));
                                  succeeded = (SubResult16_51 != (MR_Integer) 0);
                                  if (succeeded)
                                    *HeadVar__1_1 = SubResult16_51;
                                  else
                                  {
                                    MR_Word SubResult17_54;

                                    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[39]), &SubResult17_54, ((MR_Box) (ArgX17_52)), ((MR_Box) (ArgY17_53)));
                                    succeeded = (SubResult17_54 != (MR_Integer) 0);
                                    if (succeeded)
                                      *HeadVar__1_1 = SubResult17_54;
                                    else
                                    {
                                      MR_Word SubResult18_57;

                                      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[40]), &SubResult18_57, ((MR_Box) (ArgX18_55)), ((MR_Box) (ArgY18_56)));
                                      succeeded = (SubResult18_57 != (MR_Integer) 0);
                                      if (succeeded)
                                        *HeadVar__1_1 = SubResult18_57;
                                      else
                                      {
                                        MR_Word SubResult19_60;

                                        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[41]), &SubResult19_60, ((MR_Box) (ArgX19_58)), ((MR_Box) (ArgY19_59)));
                                        succeeded = (SubResult19_60 != (MR_Integer) 0);
                                        if (succeeded)
                                          *HeadVar__1_1 = SubResult19_60;
                                        else
                                        {
                                          MR_Word SubResult20_63;

                                          mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[42]), &SubResult20_63, ((MR_Box) (ArgX20_61)), ((MR_Box) (ArgY20_62)));
                                          succeeded = (SubResult20_63 != (MR_Integer) 0);
                                          if (succeeded)
                                            *HeadVar__1_1 = SubResult20_63;
                                          else
                                          {
                                            MR_Word SubResult21_66;

                                            mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[43]), &SubResult21_66, ((MR_Box) (ArgX21_64)), ((MR_Box) (ArgY21_65)));
                                            succeeded = (SubResult21_66 != (MR_Integer) 0);
                                            if (succeeded)
                                              *HeadVar__1_1 = SubResult21_66;
                                            else
                                            {
                                              MR_Word SubResult22_69;

                                              mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[44]), &SubResult22_69, ((MR_Box) (ArgX22_67)), ((MR_Box) (ArgY22_68)));
                                              succeeded = (SubResult22_69 != (MR_Integer) 0);
                                              if (succeeded)
                                                *HeadVar__1_1 = SubResult22_69;
                                              else
                                              {
                                                MR_Word SubResult23_72;

                                                mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[45]), &SubResult23_72, ((MR_Box) (ArgX23_70)), ((MR_Box) (ArgY23_71)));
                                                succeeded = (SubResult23_72 != (MR_Integer) 0);
                                                if (succeeded)
                                                  *HeadVar__1_1 = SubResult23_72;
                                                else
                                                {
                                                  MR_Word SubResult24_75;

                                                  mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[46]), &SubResult24_75, ((MR_Box) (ArgX24_73)), ((MR_Box) (ArgY24_74)));
                                                  succeeded = (SubResult24_75 != (MR_Integer) 0);
                                                  if (succeeded)
                                                    *HeadVar__1_1 = SubResult24_75;
                                                  else
                                                  {
                                                    MR_Word SubResult25_78;

                                                    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[47]), &SubResult25_78, ((MR_Box) (ArgX25_76)), ((MR_Box) (ArgY25_77)));
                                                    succeeded = (SubResult25_78 != (MR_Integer) 0);
                                                    if (succeeded)
                                                      *HeadVar__1_1 = SubResult25_78;
                                                    else
                                                    {
                                                      MR_Word SubResult26_81;

                                                      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[48]), &SubResult26_81, ((MR_Box) (ArgX26_79)), ((MR_Box) (ArgY26_80)));
                                                      succeeded = (SubResult26_81 != (MR_Integer) 0);
                                                      if (succeeded)
                                                        *HeadVar__1_1 = SubResult26_81;
                                                      else
                                                      {
                                                        MR_Word SubResult27_84;

                                                        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[49]), &SubResult27_84, ((MR_Box) (ArgX27_82)), ((MR_Box) (ArgY27_83)));
                                                        succeeded = (SubResult27_84 != (MR_Integer) 0);
                                                        if (succeeded)
                                                          *HeadVar__1_1 = SubResult27_84;
                                                        else
                                                        {
                                                          MR_Word SubResult28_87;

                                                          mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[50]), &SubResult28_87, ((MR_Box) (ArgX28_85)), ((MR_Box) (ArgY28_86)));
                                                          succeeded = (SubResult28_87 != (MR_Integer) 0);
                                                          if (succeeded)
                                                            *HeadVar__1_1 = SubResult28_87;
                                                          else
                                                          {
                                                            MR_Word SubResult29_90;

                                                            mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[51]), &SubResult29_90, ((MR_Box) (ArgX29_88)), ((MR_Box) (ArgY29_89)));
                                                            succeeded = (SubResult29_90 != (MR_Integer) 0);
                                                            if (succeeded)
                                                              *HeadVar__1_1 = SubResult29_90;
                                                            else
                                                            {
                                                              MR_Word SubResult30_93;

                                                              mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[52]), &SubResult30_93, ((MR_Box) (ArgX30_91)), ((MR_Box) (ArgY30_92)));
                                                              succeeded = (SubResult30_93 != (MR_Integer) 0);
                                                              if (succeeded)
                                                                *HeadVar__1_1 = SubResult30_93;
                                                              else
                                                              {
                                                                MR_Word SubResult31_96;

                                                                mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[53]), &SubResult31_96, ((MR_Box) (ArgX31_94)), ((MR_Box) (ArgY31_95)));
                                                                succeeded = (SubResult31_96 != (MR_Integer) 0);
                                                                if (succeeded)
                                                                  *HeadVar__1_1 = SubResult31_96;
                                                                else
                                                                {
                                                                  MR_Word SubResult32_99;

                                                                  mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[54]), &SubResult32_99, ((MR_Box) (ArgX32_97)), ((MR_Box) (ArgY32_98)));
                                                                  succeeded = (SubResult32_99 != (MR_Integer) 0);
                                                                  if (succeeded)
                                                                    *HeadVar__1_1 = SubResult32_99;
                                                                  else
                                                                  {
                                                                    MR_Word SubResult33_102;

                                                                    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[55]), &SubResult33_102, ((MR_Box) (ArgX33_100)), ((MR_Box) (ArgY33_101)));
                                                                    succeeded = (SubResult33_102 != (MR_Integer) 0);
                                                                    if (succeeded)
                                                                      *HeadVar__1_1 = SubResult33_102;
                                                                    else
                                                                    {
                                                                      MR_Word SubResult34_105;

                                                                      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[56]), &SubResult34_105, ((MR_Box) (ArgX34_103)), ((MR_Box) (ArgY34_104)));
                                                                      succeeded = (SubResult34_105 != (MR_Integer) 0);
                                                                      if (succeeded)
                                                                        *HeadVar__1_1 = SubResult34_105;
                                                                      else
                                                                      {
                                                                        MR_Word SubResult35_108;

                                                                        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[57]), &SubResult35_108, ((MR_Box) (ArgX35_106)), ((MR_Box) (ArgY35_107)));
                                                                        succeeded = (SubResult35_108 != (MR_Integer) 0);
                                                                        if (succeeded)
                                                                          *HeadVar__1_1 = SubResult35_108;
                                                                        else
                                                                          mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[58]), HeadVar__1_1, ((MR_Box) (ArgX36_109)), ((MR_Box) (ArgY36_110)));
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
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_separate_items____Unify____item_accumulator_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_75 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_76 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_75 == CastY_76);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
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
    MR_Word TypeInfo_107_107;
    MR_Word TypeInfo_108_108;
    MR_Word TypeInfo_109_109;
    MR_Word TypeInfo_110_110;
    MR_Word TypeInfo_111_111;
    MR_Word TypeInfo_112_112;
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
    MR_Word ArgX9_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 8))));
    MR_Word ArgY9_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 8))));
    MR_Word ArgX10_21 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 9))));
    MR_Word ArgY10_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 9))));
    MR_Word ArgX11_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 10))));
    MR_Word ArgY11_24 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 10))));
    MR_Word ArgX12_25 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 11))));
    MR_Word ArgY12_26 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 11))));
    MR_Word ArgX13_27 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 12))));
    MR_Word ArgY13_28 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 12))));
    MR_Word ArgX14_29 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 13))));
    MR_Word ArgY14_30 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 13))));
    MR_Word ArgX15_31 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 14))));
    MR_Word ArgY15_32 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 14))));
    MR_Word ArgX16_33 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 15))));
    MR_Word ArgY16_34 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 15))));
    MR_Word ArgX17_35 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 16))));
    MR_Word ArgY17_36 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 16))));
    MR_Word ArgX18_37 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 17))));
    MR_Word ArgY18_38 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 17))));
    MR_Word ArgX19_39 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 18))));
    MR_Word ArgY19_40 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 18))));
    MR_Word ArgX20_41 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 19))));
    MR_Word ArgY20_42 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 19))));
    MR_Word ArgX21_43 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 20))));
    MR_Word ArgY21_44 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 20))));
    MR_Word ArgX22_45 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 21))));
    MR_Word ArgY22_46 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 21))));
    MR_Word ArgX23_47 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 22))));
    MR_Word ArgY23_48 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 22))));
    MR_Word ArgX24_49 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 23))));
    MR_Word ArgY24_50 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 23))));
    MR_Word ArgX25_51 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 24))));
    MR_Word ArgY25_52 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 24))));
    MR_Word ArgX26_53 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 25))));
    MR_Word ArgY26_54 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 25))));
    MR_Word ArgX27_55 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 26))));
    MR_Word ArgY27_56 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 26))));
    MR_Word ArgX28_57 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 27))));
    MR_Word ArgY28_58 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 27))));
    MR_Word ArgX29_59 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 28))));
    MR_Word ArgY29_60 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 28))));
    MR_Word ArgX30_61 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 29))));
    MR_Word ArgY30_62 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 29))));
    MR_Word ArgX31_63 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 30))));
    MR_Word ArgY31_64 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 30))));
    MR_Word ArgX32_65 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 31))));
    MR_Word ArgY32_66 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 31))));
    MR_Word ArgX33_67 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 32))));
    MR_Word ArgY33_68 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 32))));
    MR_Word ArgX34_69 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 33))));
    MR_Word ArgY34_70 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 33))));
    MR_Word ArgX35_71 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 34))));
    MR_Word ArgY35_72 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 34))));
    MR_Word ArgX36_73 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 35))));
    MR_Word ArgY36_74 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 35))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[25]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_78_78 = (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[26]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_78_78, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        TypeInfo_79_79 = (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[27]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_79_79, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          TypeInfo_80_80 = (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[27]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_80_80, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          if (succeeded)
          {
            TypeInfo_81_81 = (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[27]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_81_81, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
            if (succeeded)
            {
              TypeInfo_82_82 = (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[28]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_82_82, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
              if (succeeded)
              {
                TypeInfo_83_83 = (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[29]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_83_83, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
                if (succeeded)
                {
                  TypeInfo_84_84 = (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[30]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_84_84, ((MR_Box) (ArgX8_17)), ((MR_Box) (ArgY8_18)));
                  if (succeeded)
                  {
                    TypeInfo_85_85 = (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[31]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_85_85, ((MR_Box) (ArgX9_19)), ((MR_Box) (ArgY9_20)));
                    if (succeeded)
                    {
                      TypeInfo_86_86 = (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[32]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_86_86, ((MR_Box) (ArgX10_21)), ((MR_Box) (ArgY10_22)));
                      if (succeeded)
                      {
                        TypeInfo_87_87 = (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[33]);
                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_87_87, ((MR_Box) (ArgX11_23)), ((MR_Box) (ArgY11_24)));
                        if (succeeded)
                        {
                          TypeInfo_88_88 = (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[34]);
                          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_88_88, ((MR_Box) (ArgX12_25)), ((MR_Box) (ArgY12_26)));
                          if (succeeded)
                          {
                            TypeInfo_89_89 = (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[35]);
                            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_89_89, ((MR_Box) (ArgX13_27)), ((MR_Box) (ArgY13_28)));
                            if (succeeded)
                            {
                              TypeInfo_90_90 = (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[36]);
                              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_90_90, ((MR_Box) (ArgX14_29)), ((MR_Box) (ArgY14_30)));
                              if (succeeded)
                              {
                                TypeInfo_91_91 = (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[37]);
                                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_91_91, ((MR_Box) (ArgX15_31)), ((MR_Box) (ArgY15_32)));
                                if (succeeded)
                                {
                                  TypeInfo_92_92 = (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[38]);
                                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_92_92, ((MR_Box) (ArgX16_33)), ((MR_Box) (ArgY16_34)));
                                  if (succeeded)
                                  {
                                    TypeInfo_93_93 = (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[39]);
                                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_93_93, ((MR_Box) (ArgX17_35)), ((MR_Box) (ArgY17_36)));
                                    if (succeeded)
                                    {
                                      TypeInfo_94_94 = (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[40]);
                                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_94_94, ((MR_Box) (ArgX18_37)), ((MR_Box) (ArgY18_38)));
                                      if (succeeded)
                                      {
                                        TypeInfo_95_95 = (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[41]);
                                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_95_95, ((MR_Box) (ArgX19_39)), ((MR_Box) (ArgY19_40)));
                                        if (succeeded)
                                        {
                                          TypeInfo_96_96 = (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[42]);
                                          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_96_96, ((MR_Box) (ArgX20_41)), ((MR_Box) (ArgY20_42)));
                                          if (succeeded)
                                          {
                                            TypeInfo_97_97 = (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[43]);
                                            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_97_97, ((MR_Box) (ArgX21_43)), ((MR_Box) (ArgY21_44)));
                                            if (succeeded)
                                            {
                                              TypeInfo_98_98 = (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[44]);
                                              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_98_98, ((MR_Box) (ArgX22_45)), ((MR_Box) (ArgY22_46)));
                                              if (succeeded)
                                              {
                                                TypeInfo_99_99 = (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[45]);
                                                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_99_99, ((MR_Box) (ArgX23_47)), ((MR_Box) (ArgY23_48)));
                                                if (succeeded)
                                                {
                                                  TypeInfo_100_100 = (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[46]);
                                                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_100_100, ((MR_Box) (ArgX24_49)), ((MR_Box) (ArgY24_50)));
                                                  if (succeeded)
                                                  {
                                                    TypeInfo_101_101 = (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[47]);
                                                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_101_101, ((MR_Box) (ArgX25_51)), ((MR_Box) (ArgY25_52)));
                                                    if (succeeded)
                                                    {
                                                      TypeInfo_102_102 = (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[48]);
                                                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_102_102, ((MR_Box) (ArgX26_53)), ((MR_Box) (ArgY26_54)));
                                                      if (succeeded)
                                                      {
                                                        TypeInfo_103_103 = (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[49]);
                                                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_103_103, ((MR_Box) (ArgX27_55)), ((MR_Box) (ArgY27_56)));
                                                        if (succeeded)
                                                        {
                                                          TypeInfo_104_104 = (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[50]);
                                                          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_104_104, ((MR_Box) (ArgX28_57)), ((MR_Box) (ArgY28_58)));
                                                          if (succeeded)
                                                          {
                                                            TypeInfo_105_105 = (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[51]);
                                                            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_105_105, ((MR_Box) (ArgX29_59)), ((MR_Box) (ArgY29_60)));
                                                            if (succeeded)
                                                            {
                                                              TypeInfo_106_106 = (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[52]);
                                                              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_106_106, ((MR_Box) (ArgX30_61)), ((MR_Box) (ArgY30_62)));
                                                              if (succeeded)
                                                              {
                                                                TypeInfo_107_107 = (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[53]);
                                                                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_107_107, ((MR_Box) (ArgX31_63)), ((MR_Box) (ArgY31_64)));
                                                                if (succeeded)
                                                                {
                                                                  TypeInfo_108_108 = (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[54]);
                                                                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_108_108, ((MR_Box) (ArgX32_65)), ((MR_Box) (ArgY32_66)));
                                                                  if (succeeded)
                                                                  {
                                                                    TypeInfo_109_109 = (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[55]);
                                                                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_109_109, ((MR_Box) (ArgX33_67)), ((MR_Box) (ArgY33_68)));
                                                                    if (succeeded)
                                                                    {
                                                                      TypeInfo_110_110 = (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[56]);
                                                                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_110_110, ((MR_Box) (ArgX34_69)), ((MR_Box) (ArgY34_70)));
                                                                      if (succeeded)
                                                                      {
                                                                        TypeInfo_111_111 = (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[57]);
                                                                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_111_111, ((MR_Box) (ArgX35_71)), ((MR_Box) (ArgY35_72)));
                                                                        if (succeeded)
                                                                        {
                                                                          TypeInfo_112_112 = (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[58]);
                                                                          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_112_112, ((MR_Box) (ArgX36_73)), ((MR_Box) (ArgY36_74)));
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
    MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) & (MR_Integer) 3);
    MR_Word ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 3);
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));

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
  MR_Word STATE_VARIABLE_Acc_0_58,
  MR_Word * STATE_VARIABLE_Acc_59)
{
  MR_Word TermInfos_8 = ((MR_Word) ((MR_hl_field(0, ParseTreeTransOpt_4, 2))));
  MR_Word Term2Infos_9 = ((MR_Word) ((MR_hl_field(0, ParseTreeTransOpt_4, 3))));
  MR_Word Exceptions_10 = ((MR_Word) ((MR_hl_field(0, ParseTreeTransOpt_4, 4))));
  MR_Word Trailings_11 = ((MR_Word) ((MR_hl_field(0, ParseTreeTransOpt_4, 5))));
  MR_Word MMTablings_12 = ((MR_Word) ((MR_hl_field(0, ParseTreeTransOpt_4, 6))));
  MR_Word Sharings_13 = ((MR_Word) ((MR_hl_field(0, ParseTreeTransOpt_4, 7))));
  MR_Word Reuses_14 = ((MR_Word) ((MR_hl_field(0, ParseTreeTransOpt_4, 8))));
  MR_Word AccAvails0_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_58, 0))));
  MR_Word AccFIMs0_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_58, 1))));
  MR_Word AccTypeDefnsAbs0_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_58, 2))));
  MR_Word AccTypeDefnsMer0_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_58, 3))));
  MR_Word AccTypeDefnsFor0_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_58, 4))));
  MR_Word AccInstDefns0_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_58, 5))));
  MR_Word AccModeDefns0_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_58, 6))));
  MR_Word AccTypeClasses0_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_58, 7))));
  MR_Word AccIntInstances0_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_58, 8))));
  MR_Word AccImpInstances0_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_58, 9))));
  MR_Word AccPredDecls0_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_58, 10))));
  MR_Word AccModeDecls0_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_58, 11))));
  MR_Word AccClauses0_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_58, 12))));
  MR_Word AccForeignProcs0_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_58, 13))));
  MR_Word AccForeignEnums0_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_58, 14))));
  MR_Word AccForeignExportEnums0_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_58, 15))));
  MR_Word AccDeclPragmas0_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_58, 16))));
  MR_Word AccDeclMarkers0_32 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_58, 17))));
  MR_Word AccDeclPragmasTypeSpecConstr0_33 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_58, 18))));
  MR_Word AccDeclPragmasTypeSpec0_34 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_58, 19))));
  MR_Word AccDeclPragmasInputSpec0_35 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_58, 20))));
  MR_Word AccDeclPragmasTermInfo0_36 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_58, 21))));
  MR_Word AccDeclPragmasTerm2Info0_37 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_58, 22))));
  MR_Word AccDeclPragmasSharing0_38 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_58, 23))));
  MR_Word AccDeclPragmasReuse0_39 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_58, 24))));
  MR_Word AccImplPragmas0_40 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_58, 25))));
  MR_Word AccImplMarkers0_41 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_58, 26))));
  MR_Word AccGenPragmasUnusedArgs0_42 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_58, 27))));
  MR_Word AccGenPragmasExceptions0_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_58, 28))));
  MR_Word AccGenPragmasTrailing0_44 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_58, 29))));
  MR_Word AccGenPragmasMMTabling0_45 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_58, 30))));
  MR_Word AccPromises0_46 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_58, 31))));
  MR_Word AccInitialises0_47 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_58, 32))));
  MR_Word AccFinalises0_48 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_58, 33))));
  MR_Word AccMutables0_49 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_58, 34))));
  MR_Word AccTypeRepns0_50 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_58, 35))));
  MR_Word AccDeclPragmasTermInfo_51;
  MR_Word AccDeclPragmasTerm2Info_52;
  MR_Word AccDeclPragmasSharing_53;
  MR_Word AccDeclPragmasReuse_54;
  MR_Word AccGenPragmasExceptions_55;
  MR_Word AccGenPragmasTrailing_56;
  MR_Word AccGenPragmasMMTabling_57;
  MR_Word Var_60;
  MR_Word Var_61;
  MR_Word Var_62;
  MR_Word Var_63;
  MR_Word Var_64;
  MR_Word Var_65;
  MR_Word Var_66;

  Var_60 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_decl_pragma_termination_info_0), TermInfos_8);
  AccDeclPragmasTermInfo_51 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_decl_pragma_termination_info_0), AccDeclPragmasTermInfo0_36, Var_60);
  Var_61 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_decl_pragma_termination2_info_0), Term2Infos_9);
  AccDeclPragmasTerm2Info_52 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_decl_pragma_termination2_info_0), AccDeclPragmasTerm2Info0_37, Var_61);
  Var_62 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_decl_pragma_struct_sharing_info_0), Sharings_13);
  AccDeclPragmasSharing_53 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_decl_pragma_struct_sharing_info_0), AccDeclPragmasSharing0_38, Var_62);
  Var_63 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_decl_pragma_struct_reuse_info_0), Reuses_14);
  AccDeclPragmasReuse_54 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_decl_pragma_struct_reuse_info_0), AccDeclPragmasReuse0_39, Var_63);
  Var_64 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_gen_pragma_exceptions_info_0), Exceptions_10);
  AccGenPragmasExceptions_55 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_gen_pragma_exceptions_info_0), AccGenPragmasExceptions0_43, Var_64);
  Var_65 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_gen_pragma_trailing_info_0), Trailings_11);
  AccGenPragmasTrailing_56 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_gen_pragma_trailing_info_0), AccGenPragmasTrailing0_44, Var_65);
  Var_66 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_gen_pragma_mm_tabling_info_0), MMTablings_12);
  AccGenPragmasMMTabling_57 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_gen_pragma_mm_tabling_info_0), AccGenPragmasMMTabling0_45, Var_66);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (36 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Acc_59 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (AccAvails0_15));
    MR_hl_field(0, base, 1) = ((MR_Box) (AccFIMs0_16));
    MR_hl_field(0, base, 2) = ((MR_Box) (AccTypeDefnsAbs0_17));
    MR_hl_field(0, base, 3) = ((MR_Box) (AccTypeDefnsMer0_18));
    MR_hl_field(0, base, 4) = ((MR_Box) (AccTypeDefnsFor0_19));
    MR_hl_field(0, base, 5) = ((MR_Box) (AccInstDefns0_20));
    MR_hl_field(0, base, 6) = ((MR_Box) (AccModeDefns0_21));
    MR_hl_field(0, base, 7) = ((MR_Box) (AccTypeClasses0_22));
    MR_hl_field(0, base, 8) = ((MR_Box) (AccIntInstances0_23));
    MR_hl_field(0, base, 9) = ((MR_Box) (AccImpInstances0_24));
    MR_hl_field(0, base, 10) = ((MR_Box) (AccPredDecls0_25));
    MR_hl_field(0, base, 11) = ((MR_Box) (AccModeDecls0_26));
    MR_hl_field(0, base, 12) = ((MR_Box) (AccClauses0_27));
    MR_hl_field(0, base, 13) = ((MR_Box) (AccForeignProcs0_28));
    MR_hl_field(0, base, 14) = ((MR_Box) (AccForeignEnums0_29));
    MR_hl_field(0, base, 15) = ((MR_Box) (AccForeignExportEnums0_30));
    MR_hl_field(0, base, 16) = ((MR_Box) (AccDeclPragmas0_31));
    MR_hl_field(0, base, 17) = ((MR_Box) (AccDeclMarkers0_32));
    MR_hl_field(0, base, 18) = ((MR_Box) (AccDeclPragmasTypeSpecConstr0_33));
    MR_hl_field(0, base, 19) = ((MR_Box) (AccDeclPragmasTypeSpec0_34));
    MR_hl_field(0, base, 20) = ((MR_Box) (AccDeclPragmasInputSpec0_35));
    MR_hl_field(0, base, 21) = ((MR_Box) (AccDeclPragmasTermInfo_51));
    MR_hl_field(0, base, 22) = ((MR_Box) (AccDeclPragmasTerm2Info_52));
    MR_hl_field(0, base, 23) = ((MR_Box) (AccDeclPragmasSharing_53));
    MR_hl_field(0, base, 24) = ((MR_Box) (AccDeclPragmasReuse_54));
    MR_hl_field(0, base, 25) = ((MR_Box) (AccImplPragmas0_40));
    MR_hl_field(0, base, 26) = ((MR_Box) (AccImplMarkers0_41));
    MR_hl_field(0, base, 27) = ((MR_Box) (AccGenPragmasUnusedArgs0_42));
    MR_hl_field(0, base, 28) = ((MR_Box) (AccGenPragmasExceptions_55));
    MR_hl_field(0, base, 29) = ((MR_Box) (AccGenPragmasTrailing_56));
    MR_hl_field(0, base, 30) = ((MR_Box) (AccGenPragmasMMTabling_57));
    MR_hl_field(0, base, 31) = ((MR_Box) (AccPromises0_46));
    MR_hl_field(0, base, 32) = ((MR_Box) (AccInitialises0_47));
    MR_hl_field(0, base, 33) = ((MR_Box) (AccFinalises0_48));
    MR_hl_field(0, base, 34) = ((MR_Box) (AccMutables0_49));
    MR_hl_field(0, base, 35) = ((MR_Box) (AccTypeRepns0_50));
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
  MR_Word STATE_VARIABLE_Acc_0_103,
  MR_Word * STATE_VARIABLE_Acc_104)
{
  MR_Word ItemMercuryStatus_6 = (MR_Word) (MR_mkword(1, &hlds__make_hlds__make_hlds_separate_items_scalar_common_4[5]));
  MR_Word UseMap_10 = ((MR_Word) ((MR_hl_field(0, ParseTreePlainOpt_4, 2))));
  MR_Word FIMSpecs_11 = ((MR_Word) ((MR_hl_field(0, ParseTreePlainOpt_4, 3))));
  MR_Word TypeDefns_12 = ((MR_Word) ((MR_hl_field(0, ParseTreePlainOpt_4, 4))));
  MR_Word ForeignEnums_13 = ((MR_Word) ((MR_hl_field(0, ParseTreePlainOpt_4, 5))));
  MR_Word InstDefns_14 = ((MR_Word) ((MR_hl_field(0, ParseTreePlainOpt_4, 6))));
  MR_Word ModeDefns_15 = ((MR_Word) ((MR_hl_field(0, ParseTreePlainOpt_4, 7))));
  MR_Word TypeClasses_16 = ((MR_Word) ((MR_hl_field(0, ParseTreePlainOpt_4, 8))));
  MR_Word Instances_17 = ((MR_Word) ((MR_hl_field(0, ParseTreePlainOpt_4, 9))));
  MR_Word PredDecls_18 = ((MR_Word) ((MR_hl_field(0, ParseTreePlainOpt_4, 10))));
  MR_Word ModeDecls_19 = ((MR_Word) ((MR_hl_field(0, ParseTreePlainOpt_4, 11))));
  MR_Word Clauses_20 = ((MR_Word) ((MR_hl_field(0, ParseTreePlainOpt_4, 12))));
  MR_Word ForeignProcs_21 = ((MR_Word) ((MR_hl_field(0, ParseTreePlainOpt_4, 13))));
  MR_Word Promises_22 = ((MR_Word) ((MR_hl_field(0, ParseTreePlainOpt_4, 14))));
  MR_Word DeclMarkers_23 = ((MR_Word) ((MR_hl_field(0, ParseTreePlainOpt_4, 15))));
  MR_Word ImplMarkers_24 = ((MR_Word) ((MR_hl_field(0, ParseTreePlainOpt_4, 16))));
  MR_Word TypeSpecs_25 = ((MR_Word) ((MR_hl_field(0, ParseTreePlainOpt_4, 17))));
  MR_Word InputSpecs_26 = ((MR_Word) ((MR_hl_field(0, ParseTreePlainOpt_4, 18))));
  MR_Word UnusedArgs_27 = ((MR_Word) ((MR_hl_field(0, ParseTreePlainOpt_4, 19))));
  MR_Word TermInfos_28 = ((MR_Word) ((MR_hl_field(0, ParseTreePlainOpt_4, 20))));
  MR_Word Term2Infos_29 = ((MR_Word) ((MR_hl_field(0, ParseTreePlainOpt_4, 21))));
  MR_Word Exceptions_30 = ((MR_Word) ((MR_hl_field(0, ParseTreePlainOpt_4, 22))));
  MR_Word Trailings_31 = ((MR_Word) ((MR_hl_field(0, ParseTreePlainOpt_4, 23))));
  MR_Word MMTablings_32 = ((MR_Word) ((MR_hl_field(0, ParseTreePlainOpt_4, 24))));
  MR_Word Sharings_33 = ((MR_Word) ((MR_hl_field(0, ParseTreePlainOpt_4, 25))));
  MR_Word Reuses_34 = ((MR_Word) ((MR_hl_field(0, ParseTreePlainOpt_4, 26))));
  MR_Word AccAvails0_35 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_103, 0))));
  MR_Word AccFIMs0_36 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_103, 1))));
  MR_Word AccTypeDefnsAbs0_37 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_103, 2))));
  MR_Word AccTypeDefnsMer0_38 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_103, 3))));
  MR_Word AccTypeDefnsFor0_39 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_103, 4))));
  MR_Word AccInstDefns0_40 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_103, 5))));
  MR_Word AccModeDefns0_41 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_103, 6))));
  MR_Word AccTypeClasses0_42 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_103, 7))));
  MR_Word AccIntInstances0_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_103, 8))));
  MR_Word AccImpInstances0_44 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_103, 9))));
  MR_Word AccPredDecls0_45 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_103, 10))));
  MR_Word AccModeDecls0_46 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_103, 11))));
  MR_Word AccClauses0_47 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_103, 12))));
  MR_Word AccForeignProcs0_48 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_103, 13))));
  MR_Word AccForeignEnums0_49 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_103, 14))));
  MR_Word AccForeignExportEnums0_50 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_103, 15))));
  MR_Word AccDeclPragmas0_51 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_103, 16))));
  MR_Word AccDeclMarkers0_52 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_103, 17))));
  MR_Word AccDeclPragmasTypeSpecConstr0_53 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_103, 18))));
  MR_Word AccDeclPragmasTypeSpec0_54 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_103, 19))));
  MR_Word AccDeclPragmasInputSpec0_55 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_103, 20))));
  MR_Word AccDeclPragmasTermInfo0_56 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_103, 21))));
  MR_Word AccDeclPragmasTerm2Info0_57 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_103, 22))));
  MR_Word AccDeclPragmasSharing0_58 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_103, 23))));
  MR_Word AccDeclPragmasReuse0_59 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_103, 24))));
  MR_Word AccImplPragmas0_60 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_103, 25))));
  MR_Word AccImplMarkers0_61 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_103, 26))));
  MR_Word AccGenPragmasUnusedArgs0_62 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_103, 27))));
  MR_Word AccGenPragmasExceptions0_63 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_103, 28))));
  MR_Word AccGenPragmasTrailing0_64 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_103, 29))));
  MR_Word AccGenPragmasMMTabling0_65 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_103, 30))));
  MR_Word AccPromises0_66 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_103, 31))));
  MR_Word AccInitialises0_67 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_103, 32))));
  MR_Word AccFinalises0_68 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_103, 33))));
  MR_Word AccMutables0_69 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_103, 34))));
  MR_Word AccTypeRepns0_70 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_103, 35))));
  MR_Word OptAvails_71;
  MR_Word AccAvails_72;
  MR_Word OptFIMs_73;
  MR_Word AccFIMs_74;
  MR_Word TypeDefnsAbs_75;
  MR_Word TypeDefnsMer_76;
  MR_Word TypeDefnsFor_77;
  MR_Word AccTypeDefnsAbs_78;
  MR_Word AccTypeDefnsMer_79;
  MR_Word AccTypeDefnsFor_80;
  MR_Word AccInstDefns_81;
  MR_Word AccModeDefns_82;
  MR_Word AccTypeClasses_83;
  MR_Word AccImpInstances_84;
  MR_Word AccPredDecls_85;
  MR_Word AccModeDecls_86;
  MR_Word AccClauses_87;
  MR_Word AccForeignProcs_88;
  MR_Word AccForeignEnums_89;
  MR_Word AccDeclMarkers_90;
  MR_Word AccDeclPragmasTypeSpec_91;
  MR_Word AccDeclPragmasInputSpec_92;
  MR_Word AccDeclPragmasTermInfo_93;
  MR_Word AccDeclPragmasTerm2Info_94;
  MR_Word AccDeclPragmasSharing_95;
  MR_Word AccDeclPragmasReuse_96;
  MR_Word AccImplMarkers_97;
  MR_Word AccGenPragmasUnusedArgs_98;
  MR_Word AccGenPragmasExceptions_99;
  MR_Word AccGenPragmasTrailing_100;
  MR_Word AccGenPragmasMMTabling_101;
  MR_Word AccPromises_102;
  MR_Word Var_108;
  MR_Word Var_112;
  MR_Word Var_113;
  MR_Word Var_114;
  MR_Word Var_115;
  MR_Word Var_116;
  MR_Word Var_117;
  MR_Word Var_118;
  MR_Word Var_119;
  MR_Word Var_120;
  MR_Word Var_121;
  MR_Word Var_122;

  OptAvails_71 = parse_tree__convert_import_use__use_map_to_item_avails_1_f_0(UseMap_10);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_avails_4_p_0(ItemMercuryStatus_6, OptAvails_71, AccAvails0_35, &AccAvails_72);
  Var_108 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), FIMSpecs_11);
  OptFIMs_73 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_3[21]), Var_108);
  mercury__cord__snoc_list_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), OptFIMs_73, AccFIMs0_36, &AccFIMs_74);
  hlds__make_hlds__make_hlds_separate_items__separate_type_defns_abs_mer_for_7_p_0(TypeDefns_12, (MR_Word) ((MR_Unsigned) 0U), &TypeDefnsAbs_75, (MR_Word) ((MR_Unsigned) 0U), &TypeDefnsMer_76, (MR_Word) ((MR_Unsigned) 0U), &TypeDefnsFor_77);
  hlds__make_hlds__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[62]), TypeDefnsAbs_75, AccTypeDefnsAbs0_37, &AccTypeDefnsAbs_78);
  hlds__make_hlds__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[62]), TypeDefnsMer_76, AccTypeDefnsMer0_38, &AccTypeDefnsMer_79);
  hlds__make_hlds__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[62]), TypeDefnsFor_77, AccTypeDefnsFor0_39, &AccTypeDefnsFor_80);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[3]), ItemMercuryStatus_6, InstDefns_14, AccInstDefns0_40, &AccInstDefns_81);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[5]), ItemMercuryStatus_6, ModeDefns_15, AccModeDefns0_41, &AccModeDefns_82);
  hlds__make_hlds__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[62]), TypeClasses_16, AccTypeClasses0_42, &AccTypeClasses_83);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), ItemMercuryStatus_6, Instances_17, AccImpInstances0_44, &AccImpInstances_84);
  hlds__make_hlds__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[62]), PredDecls_18, AccPredDecls0_45, &AccPredDecls_85);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), ItemMercuryStatus_6, ModeDecls_19, AccModeDecls0_46, &AccModeDecls_86);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0), ItemMercuryStatus_6, Clauses_20, AccClauses0_47, &AccClauses_87);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_proc_info_0), ItemMercuryStatus_6, ForeignProcs_21, AccForeignProcs0_48, &AccForeignProcs_88);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_tuple_list_4_p_0((MR_Word) (&parse_tree__prog_item_type__parse_tree__prog_item_type__type_ctor_info_item_foreign_enum_info_0), ItemMercuryStatus_6, ForeignEnums_13, AccForeignEnums0_49, &AccForeignEnums_89);
  Var_112 = (MR_Word) (DeclMarkers_23);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_item_decl_marker_info_0), ItemMercuryStatus_6, Var_112, AccDeclMarkers0_52, &AccDeclMarkers_90);
  Var_113 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_decl_pragma_type_spec_info_0), TypeSpecs_25);
  AccDeclPragmasTypeSpec_91 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_decl_pragma_type_spec_info_0), AccDeclPragmasTypeSpec0_54, Var_113);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_decl_pragma_input_spec_info_0), ItemMercuryStatus_6, InputSpecs_26, AccDeclPragmasInputSpec0_55, &AccDeclPragmasInputSpec_92);
  Var_114 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_decl_pragma_termination_info_0), TermInfos_28);
  AccDeclPragmasTermInfo_93 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_decl_pragma_termination_info_0), AccDeclPragmasTermInfo0_56, Var_114);
  Var_115 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_decl_pragma_termination2_info_0), Term2Infos_29);
  AccDeclPragmasTerm2Info_94 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_decl_pragma_termination2_info_0), AccDeclPragmasTerm2Info0_57, Var_115);
  Var_116 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_decl_pragma_struct_sharing_info_0), Sharings_33);
  AccDeclPragmasSharing_95 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_decl_pragma_struct_sharing_info_0), AccDeclPragmasSharing0_58, Var_116);
  Var_117 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_decl_pragma_struct_reuse_info_0), Reuses_34);
  AccDeclPragmasReuse_96 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_decl_pragma_struct_reuse_info_0), AccDeclPragmasReuse0_59, Var_117);
  Var_118 = (MR_Word) (ImplMarkers_24);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_item_impl_marker_info_0), ItemMercuryStatus_6, Var_118, AccImplMarkers0_61, &AccImplMarkers_97);
  Var_119 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_gen_pragma_unused_args_info_0), UnusedArgs_27);
  AccGenPragmasUnusedArgs_98 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_gen_pragma_unused_args_info_0), AccGenPragmasUnusedArgs0_62, Var_119);
  Var_120 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_gen_pragma_exceptions_info_0), Exceptions_30);
  AccGenPragmasExceptions_99 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_gen_pragma_exceptions_info_0), AccGenPragmasExceptions0_63, Var_120);
  Var_121 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_gen_pragma_trailing_info_0), Trailings_31);
  AccGenPragmasTrailing_100 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_gen_pragma_trailing_info_0), AccGenPragmasTrailing0_64, Var_121);
  Var_122 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_gen_pragma_mm_tabling_info_0), MMTablings_32);
  AccGenPragmasMMTabling_101 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_gen_pragma_mm_tabling_info_0), AccGenPragmasMMTabling0_65, Var_122);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), ItemMercuryStatus_6, Promises_22, AccPromises0_66, &AccPromises_102);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (36 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Acc_104 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (AccAvails_72));
    MR_hl_field(0, base, 1) = ((MR_Box) (AccFIMs_74));
    MR_hl_field(0, base, 2) = ((MR_Box) (AccTypeDefnsAbs_78));
    MR_hl_field(0, base, 3) = ((MR_Box) (AccTypeDefnsMer_79));
    MR_hl_field(0, base, 4) = ((MR_Box) (AccTypeDefnsFor_80));
    MR_hl_field(0, base, 5) = ((MR_Box) (AccInstDefns_81));
    MR_hl_field(0, base, 6) = ((MR_Box) (AccModeDefns_82));
    MR_hl_field(0, base, 7) = ((MR_Box) (AccTypeClasses_83));
    MR_hl_field(0, base, 8) = ((MR_Box) (AccIntInstances0_43));
    MR_hl_field(0, base, 9) = ((MR_Box) (AccImpInstances_84));
    MR_hl_field(0, base, 10) = ((MR_Box) (AccPredDecls_85));
    MR_hl_field(0, base, 11) = ((MR_Box) (AccModeDecls_86));
    MR_hl_field(0, base, 12) = ((MR_Box) (AccClauses_87));
    MR_hl_field(0, base, 13) = ((MR_Box) (AccForeignProcs_88));
    MR_hl_field(0, base, 14) = ((MR_Box) (AccForeignEnums_89));
    MR_hl_field(0, base, 15) = ((MR_Box) (AccForeignExportEnums0_50));
    MR_hl_field(0, base, 16) = ((MR_Box) (AccDeclPragmas0_51));
    MR_hl_field(0, base, 17) = ((MR_Box) (AccDeclMarkers_90));
    MR_hl_field(0, base, 18) = ((MR_Box) (AccDeclPragmasTypeSpecConstr0_53));
    MR_hl_field(0, base, 19) = ((MR_Box) (AccDeclPragmasTypeSpec_91));
    MR_hl_field(0, base, 20) = ((MR_Box) (AccDeclPragmasInputSpec_92));
    MR_hl_field(0, base, 21) = ((MR_Box) (AccDeclPragmasTermInfo_93));
    MR_hl_field(0, base, 22) = ((MR_Box) (AccDeclPragmasTerm2Info_94));
    MR_hl_field(0, base, 23) = ((MR_Box) (AccDeclPragmasSharing_95));
    MR_hl_field(0, base, 24) = ((MR_Box) (AccDeclPragmasReuse_96));
    MR_hl_field(0, base, 25) = ((MR_Box) (AccImplPragmas0_60));
    MR_hl_field(0, base, 26) = ((MR_Box) (AccImplMarkers_97));
    MR_hl_field(0, base, 27) = ((MR_Box) (AccGenPragmasUnusedArgs_98));
    MR_hl_field(0, base, 28) = ((MR_Box) (AccGenPragmasExceptions_99));
    MR_hl_field(0, base, 29) = ((MR_Box) (AccGenPragmasTrailing_100));
    MR_hl_field(0, base, 30) = ((MR_Box) (AccGenPragmasMMTabling_101));
    MR_hl_field(0, base, 31) = ((MR_Box) (AccPromises_102));
    MR_hl_field(0, base, 32) = ((MR_Box) (AccInitialises0_67));
    MR_hl_field(0, base, 33) = ((MR_Box) (AccFinalises0_68));
    MR_hl_field(0, base, 34) = ((MR_Box) (AccMutables0_69));
    MR_hl_field(0, base, 35) = ((MR_Box) (AccTypeRepns0_70));
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_separate_items__acc_type_repn_spec_3_p_0(
  MR_Word TypeRepnSpec_4,
  MR_Word STATE_VARIABLE_Acc_0_11,
  MR_Word * STATE_VARIABLE_Acc_12)
{
  MR_Word ParseTreeInt1_6 = (MR_Word) (TypeRepnSpec_4);
  MR_Word ModuleName_7 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_6, 0))));
  MR_Word IntTypeRepnMap_8 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_6, 17))));
  MR_Word AccTypeRepns0_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_11, 35))));
  MR_Word AccTypeRepns_10;
  MR_Word Var_13;
  MR_Word Var_14;
  MR_Word Var_52 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_11, 0))));
  MR_Word Var_53 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_11, 1))));
  MR_Word Var_54 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_11, 2))));
  MR_Word Var_55 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_11, 3))));
  MR_Word Var_56 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_11, 4))));
  MR_Word Var_57 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_11, 5))));
  MR_Word Var_58 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_11, 6))));
  MR_Word Var_59 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_11, 7))));
  MR_Word Var_60 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_11, 8))));
  MR_Word Var_61 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_11, 9))));
  MR_Word Var_62 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_11, 10))));
  MR_Word Var_63 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_11, 11))));
  MR_Word Var_64 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_11, 12))));
  MR_Word Var_65 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_11, 13))));
  MR_Word Var_66 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_11, 14))));
  MR_Word Var_67 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_11, 15))));
  MR_Word Var_68 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_11, 16))));
  MR_Word Var_69 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_11, 17))));
  MR_Word Var_70 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_11, 18))));
  MR_Word Var_71 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_11, 19))));
  MR_Word Var_72 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_11, 20))));
  MR_Word Var_73 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_11, 21))));
  MR_Word Var_74 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_11, 22))));
  MR_Word Var_75 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_11, 23))));
  MR_Word Var_76 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_11, 24))));
  MR_Word Var_77 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_11, 25))));
  MR_Word Var_78 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_11, 26))));
  MR_Word Var_79 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_11, 27))));
  MR_Word Var_80 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_11, 28))));
  MR_Word Var_81 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_11, 29))));
  MR_Word Var_82 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_11, 30))));
  MR_Word Var_83 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_11, 31))));
  MR_Word Var_84 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_11, 32))));
  MR_Word Var_85 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_11, 33))));
  MR_Word Var_86 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_11, 34))));

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
    base = (MR_Word) MR_new_object(MR_Word, (36 * sizeof(MR_Word)), NULL, NULL);
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
    MR_hl_field(0, base, 33) = ((MR_Box) (Var_85));
    MR_hl_field(0, base, 34) = ((MR_Box) (Var_86));
    MR_hl_field(0, base, 35) = ((MR_Box) (AccTypeRepns_10));
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
        MR_Word ParseTreeInt0_6 = ((MR_Word) ((MR_hl_field(0, IntForOptSpec_4, 0))));
        MR_Word ReadWhy0_7 = ((MR_Unsigned) ((MR_hl_field(0, IntForOptSpec_4, 1))) & (MR_Integer) 1);

        hlds__make_hlds__make_hlds_separate_items__acc_parse_tree_int0_4_p_0(ParseTreeInt0_6, ReadWhy0_7, STATE_VARIABLE_Acc_0_12, STATE_VARIABLE_Acc_13);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ParseTreeInt1_8 = ((MR_Word) ((MR_hl_field(1, IntForOptSpec_4, 0))));
        MR_Word ReadWhy1_9 = ((MR_Unsigned) ((MR_hl_field(1, IntForOptSpec_4, 1))) & (MR_Integer) 15);

        hlds__make_hlds__make_hlds_separate_items__acc_parse_tree_int1_4_p_0(ParseTreeInt1_8, ReadWhy1_9, STATE_VARIABLE_Acc_0_12, STATE_VARIABLE_Acc_13);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ParseTreeInt2_10 = ((MR_Word) ((MR_hl_field(2, IntForOptSpec_4, 0))));
        MR_Word ReadWhy2_11 = ((MR_Unsigned) ((MR_hl_field(2, IntForOptSpec_4, 1))) & (MR_Integer) 3);

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
  MR_Word ParseTreeInt2_6 = ((MR_Word) ((MR_hl_field(0, IndirectInt2Spec_4, 0))));
  MR_Word ReadWhy2_7 = ((MR_Unsigned) ((MR_hl_field(0, IndirectInt2Spec_4, 1))) & (MR_Integer) 3);

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
  MR_Word STATE_VARIABLE_Acc_0_97,
  MR_Word * STATE_VARIABLE_Acc_98)
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
  MR_Word AccIntInstances0_38;
  MR_Word AccImpInstances0_39;
  MR_Word AccPredDecls0_40;
  MR_Word AccModeDecls0_41;
  MR_Word AccClauses0_42;
  MR_Word AccForeignProcs0_43;
  MR_Word AccForeignEnums0_44;
  MR_Word AccForeignExportEnums0_45;
  MR_Word AccDeclPragmas0_46;
  MR_Word AccDeclMarkers0_47;
  MR_Word AccDeclPragmasTypeSpecConstr0_48;
  MR_Word AccDeclPragmasTypeSpec0_49;
  MR_Word AccDeclPragmasInputSpec0_50;
  MR_Word AccDeclPragmasTermInfo0_51;
  MR_Word AccDeclPragmasTerm2Info0_52;
  MR_Word AccDeclPragmasSharing0_53;
  MR_Word AccDeclPragmasReuse0_54;
  MR_Word AccImplPragmas0_55;
  MR_Word AccImplMarkers0_56;
  MR_Word AccGenPragmasUnusedArgs0_57;
  MR_Word AccGenPragmasExceptions0_58;
  MR_Word AccGenPragmasTrailing0_59;
  MR_Word AccGenPragmasMMTabling0_60;
  MR_Word AccPromises0_61;
  MR_Word AccInitialises0_62;
  MR_Word AccFinalises0_63;
  MR_Word AccMutables0_64;
  MR_Word AccTypeRepns0_65;
  MR_Word IntAvails_66;
  MR_Word ImpAvails_67;
  MR_Word AccAvails1_68;
  MR_Word AccAvails_69;
  MR_Word IntFIMs_70;
  MR_Word ImpFIMs_71;
  MR_Word AccFIMs_72;
  MR_Word IntTypeDefns_73;
  MR_Word ImpTypeDefns_74;
  MR_Word IntTypeDefnsAbs_76;
  MR_Word IntTypeDefnsMer_77;
  MR_Word IntTypeDefnsFor_78;
  MR_Word ImpTypeDefnsAbs_79;
  MR_Word ImpTypeDefnsMer_80;
  MR_Word ImpTypeDefnsFor_81;
  MR_Word AccTypeDefnsAbs1_82;
  MR_Word AccTypeDefnsAbs_83;
  MR_Word AccTypeDefnsMer1_84;
  MR_Word AccTypeDefnsMer_85;
  MR_Word AccTypeDefnsFor1_86;
  MR_Word AccTypeDefnsFor_87;
  MR_Word IntInstDefns_88;
  MR_Word AccInstDefns_90;
  MR_Word IntModeDefns_91;
  MR_Word AccModeDefns_93;
  MR_Word AccTypeClasses_94;
  MR_Word AccIntInstances_95;
  MR_Word AccTypeRepns_96;
  MR_Word Var_100;
  MR_Word Var_102;
  MR_Word Var_103;
  MR_Word Var_110;
  MR_Word Var_111;
  MR_Word _ImpForeignEnums_75;
  MR_Word _ImpInstDefns_89;
  MR_Word _ImpModeDefns_92;

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
  ModuleName_17 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_5, 0))));
  UseMap_21 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_5, 4))));
  IntFIMSpecs_22 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_5, 5))));
  ImpFIMSpecs_23 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_5, 6))));
  TypeCheckedMap_24 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_5, 7))));
  InstCheckedMap_25 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_5, 8))));
  ModeCheckedMap_26 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_5, 9))));
  IntTypeClasses_27 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_5, 10))));
  IntInstances_28 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_5, 11))));
  IntTypeRepnMap_29 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_5, 12))));
  AccAvails0_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_97, 0))));
  AccFIMs0_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_97, 1))));
  AccTypeDefnsAbs0_32 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_97, 2))));
  AccTypeDefnsMer0_33 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_97, 3))));
  AccTypeDefnsFor0_34 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_97, 4))));
  AccInstDefns0_35 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_97, 5))));
  AccModeDefns0_36 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_97, 6))));
  AccTypeClasses0_37 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_97, 7))));
  AccIntInstances0_38 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_97, 8))));
  AccImpInstances0_39 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_97, 9))));
  AccPredDecls0_40 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_97, 10))));
  AccModeDecls0_41 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_97, 11))));
  AccClauses0_42 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_97, 12))));
  AccForeignProcs0_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_97, 13))));
  AccForeignEnums0_44 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_97, 14))));
  AccForeignExportEnums0_45 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_97, 15))));
  AccDeclPragmas0_46 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_97, 16))));
  AccDeclMarkers0_47 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_97, 17))));
  AccDeclPragmasTypeSpecConstr0_48 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_97, 18))));
  AccDeclPragmasTypeSpec0_49 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_97, 19))));
  AccDeclPragmasInputSpec0_50 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_97, 20))));
  AccDeclPragmasTermInfo0_51 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_97, 21))));
  AccDeclPragmasTerm2Info0_52 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_97, 22))));
  AccDeclPragmasSharing0_53 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_97, 23))));
  AccDeclPragmasReuse0_54 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_97, 24))));
  AccImplPragmas0_55 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_97, 25))));
  AccImplMarkers0_56 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_97, 26))));
  AccGenPragmasUnusedArgs0_57 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_97, 27))));
  AccGenPragmasExceptions0_58 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_97, 28))));
  AccGenPragmasTrailing0_59 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_97, 29))));
  AccGenPragmasMMTabling0_60 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_97, 30))));
  AccPromises0_61 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_97, 31))));
  AccInitialises0_62 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_97, 32))));
  AccFinalises0_63 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_97, 33))));
  AccMutables0_64 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_97, 34))));
  AccTypeRepns0_65 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_97, 35))));
  parse_tree__convert_import_use__section_use_map_to_item_avails_3_p_0(UseMap_21, &IntAvails_66, &ImpAvails_67);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_avails_4_p_0(IntItemMercuryStatus_11, IntAvails_66, AccAvails0_30, &AccAvails1_68);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_avails_4_p_0(ImpItemMercuryStatus_12, ImpAvails_67, AccAvails1_68, &AccAvails_69);
  Var_100 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), IntFIMSpecs_22);
  IntFIMs_70 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_3[19]), Var_100);
  Var_102 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), ImpFIMSpecs_23);
  ImpFIMs_71 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_3[20]), Var_102);
  Var_103 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), IntFIMs_70, ImpFIMs_71);
  mercury__cord__snoc_list_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), Var_103, AccFIMs0_31, &AccFIMs_72);
  parse_tree__item_util__type_ctor_checked_map_get_src_defns_4_p_0(TypeCheckedMap_24, &IntTypeDefns_73, &ImpTypeDefns_74, &_ImpForeignEnums_75);
  hlds__make_hlds__make_hlds_separate_items__separate_type_defns_abs_mer_for_7_p_0(IntTypeDefns_73, (MR_Word) ((MR_Unsigned) 0U), &IntTypeDefnsAbs_76, (MR_Word) ((MR_Unsigned) 0U), &IntTypeDefnsMer_77, (MR_Word) ((MR_Unsigned) 0U), &IntTypeDefnsFor_78);
  hlds__make_hlds__make_hlds_separate_items__separate_type_defns_abs_mer_for_7_p_0(ImpTypeDefns_74, (MR_Word) ((MR_Unsigned) 0U), &ImpTypeDefnsAbs_79, (MR_Word) ((MR_Unsigned) 0U), &ImpTypeDefnsMer_80, (MR_Word) ((MR_Unsigned) 0U), &ImpTypeDefnsFor_81);
  hlds__make_hlds__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[1]), IntSectionInfo_15, IntTypeDefnsAbs_76, AccTypeDefnsAbs0_32, &AccTypeDefnsAbs1_82);
  hlds__make_hlds__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[1]), ImpSectionInfo_16, ImpTypeDefnsAbs_79, AccTypeDefnsAbs1_82, &AccTypeDefnsAbs_83);
  hlds__make_hlds__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[1]), IntSectionInfo_15, IntTypeDefnsMer_77, AccTypeDefnsMer0_33, &AccTypeDefnsMer1_84);
  hlds__make_hlds__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[1]), ImpSectionInfo_16, ImpTypeDefnsMer_80, AccTypeDefnsMer1_84, &AccTypeDefnsMer_85);
  hlds__make_hlds__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[1]), IntSectionInfo_15, IntTypeDefnsFor_78, AccTypeDefnsFor0_34, &AccTypeDefnsFor1_86);
  hlds__make_hlds__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[1]), ImpSectionInfo_16, ImpTypeDefnsFor_81, AccTypeDefnsFor1_86, &AccTypeDefnsFor_87);
  parse_tree__item_util__inst_ctor_checked_map_get_src_defns_3_p_0(InstCheckedMap_25, &IntInstDefns_88, &_ImpInstDefns_89);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[3]), IntItemMercuryStatus_11, IntInstDefns_88, AccInstDefns0_35, &AccInstDefns_90);
  parse_tree__item_util__mode_ctor_checked_map_get_src_defns_3_p_0(ModeCheckedMap_26, &IntModeDefns_91, &_ImpModeDefns_92);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[5]), IntItemMercuryStatus_11, IntModeDefns_91, AccModeDefns0_36, &AccModeDefns_93);
  hlds__make_hlds__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), IntSectionInfo_15, IntTypeClasses_27, AccTypeClasses0_37, &AccTypeClasses_94);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_abstract_instance_info_0), IntItemMercuryStatus_11, IntInstances_28, AccIntInstances0_38, &AccIntInstances_95);
  {
    Var_111 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_111, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
    MR_hl_field(0, Var_111, 1) = ((MR_Box) (IntTypeRepnMap_29));
  }
  {
    Var_110 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_110, 0) = ((MR_Box) (ModuleName_17));
    MR_hl_field(0, Var_110, 1) = ((MR_Box) (Var_111));
  }
  {
    AccTypeRepns_96 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, AccTypeRepns_96, 0) = ((MR_Box) (Var_110));
    MR_hl_field(1, AccTypeRepns_96, 1) = ((MR_Box) (AccTypeRepns0_65));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (36 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Acc_98 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (AccAvails_69));
    MR_hl_field(0, base, 1) = ((MR_Box) (AccFIMs_72));
    MR_hl_field(0, base, 2) = ((MR_Box) (AccTypeDefnsAbs_83));
    MR_hl_field(0, base, 3) = ((MR_Box) (AccTypeDefnsMer_85));
    MR_hl_field(0, base, 4) = ((MR_Box) (AccTypeDefnsFor_87));
    MR_hl_field(0, base, 5) = ((MR_Box) (AccInstDefns_90));
    MR_hl_field(0, base, 6) = ((MR_Box) (AccModeDefns_93));
    MR_hl_field(0, base, 7) = ((MR_Box) (AccTypeClasses_94));
    MR_hl_field(0, base, 8) = ((MR_Box) (AccIntInstances_95));
    MR_hl_field(0, base, 9) = ((MR_Box) (AccImpInstances0_39));
    MR_hl_field(0, base, 10) = ((MR_Box) (AccPredDecls0_40));
    MR_hl_field(0, base, 11) = ((MR_Box) (AccModeDecls0_41));
    MR_hl_field(0, base, 12) = ((MR_Box) (AccClauses0_42));
    MR_hl_field(0, base, 13) = ((MR_Box) (AccForeignProcs0_43));
    MR_hl_field(0, base, 14) = ((MR_Box) (AccForeignEnums0_44));
    MR_hl_field(0, base, 15) = ((MR_Box) (AccForeignExportEnums0_45));
    MR_hl_field(0, base, 16) = ((MR_Box) (AccDeclPragmas0_46));
    MR_hl_field(0, base, 17) = ((MR_Box) (AccDeclMarkers0_47));
    MR_hl_field(0, base, 18) = ((MR_Box) (AccDeclPragmasTypeSpecConstr0_48));
    MR_hl_field(0, base, 19) = ((MR_Box) (AccDeclPragmasTypeSpec0_49));
    MR_hl_field(0, base, 20) = ((MR_Box) (AccDeclPragmasInputSpec0_50));
    MR_hl_field(0, base, 21) = ((MR_Box) (AccDeclPragmasTermInfo0_51));
    MR_hl_field(0, base, 22) = ((MR_Box) (AccDeclPragmasTerm2Info0_52));
    MR_hl_field(0, base, 23) = ((MR_Box) (AccDeclPragmasSharing0_53));
    MR_hl_field(0, base, 24) = ((MR_Box) (AccDeclPragmasReuse0_54));
    MR_hl_field(0, base, 25) = ((MR_Box) (AccImplPragmas0_55));
    MR_hl_field(0, base, 26) = ((MR_Box) (AccImplMarkers0_56));
    MR_hl_field(0, base, 27) = ((MR_Box) (AccGenPragmasUnusedArgs0_57));
    MR_hl_field(0, base, 28) = ((MR_Box) (AccGenPragmasExceptions0_58));
    MR_hl_field(0, base, 29) = ((MR_Box) (AccGenPragmasTrailing0_59));
    MR_hl_field(0, base, 30) = ((MR_Box) (AccGenPragmasMMTabling0_60));
    MR_hl_field(0, base, 31) = ((MR_Box) (AccPromises0_61));
    MR_hl_field(0, base, 32) = ((MR_Box) (AccInitialises0_62));
    MR_hl_field(0, base, 33) = ((MR_Box) (AccFinalises0_63));
    MR_hl_field(0, base, 34) = ((MR_Box) (AccMutables0_64));
    MR_hl_field(0, base, 35) = ((MR_Box) (AccTypeRepns_96));
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_separate_items__acc_direct_int1_spec_3_p_0(
  MR_Word DirectInt1Spec_4,
  MR_Word STATE_VARIABLE_Acc_0_8,
  MR_Word * STATE_VARIABLE_Acc_9)
{
  MR_Word ParseTreeInt1_6 = ((MR_Word) ((MR_hl_field(0, DirectInt1Spec_4, 0))));
  MR_Word ReadWhy1_7 = ((MR_Unsigned) ((MR_hl_field(0, DirectInt1Spec_4, 1))) & (MR_Integer) 15);

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
  MR_Word STATE_VARIABLE_Acc_0_110,
  MR_Word * STATE_VARIABLE_Acc_111)
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
  MR_Word AccIntInstances0_44;
  MR_Word AccImpInstances0_45;
  MR_Word AccPredDecls0_46;
  MR_Word AccModeDecls0_47;
  MR_Word AccClauses0_48;
  MR_Word AccForeignProcs0_49;
  MR_Word AccForeignEnums0_50;
  MR_Word AccForeignExportEnums0_51;
  MR_Word AccDeclPragmas0_52;
  MR_Word AccDeclMarkers0_53;
  MR_Word AccDeclPragmasTypeSpecConstr0_54;
  MR_Word AccDeclPragmasTypeSpec0_55;
  MR_Word AccDeclPragmasInputSpec0_56;
  MR_Word AccDeclPragmasTermInfo0_57;
  MR_Word AccDeclPragmasTerm2Info0_58;
  MR_Word AccDeclPragmasSharing0_59;
  MR_Word AccDeclPragmasReuse0_60;
  MR_Word AccImplPragmas0_61;
  MR_Word AccImplMarkers0_62;
  MR_Word AccGenPragmasUnusedArgs0_63;
  MR_Word AccGenPragmasExceptions0_64;
  MR_Word AccGenPragmasTrailing0_65;
  MR_Word AccGenPragmasMMTabling0_66;
  MR_Word AccPromises0_67;
  MR_Word AccInitialises0_68;
  MR_Word AccFinalises0_69;
  MR_Word AccMutables0_70;
  MR_Word AccTypeRepns0_71;
  MR_Word IntAvails_72;
  MR_Word ImpAvails_73;
  MR_Word AccAvails1_74;
  MR_Word AccAvails_75;
  MR_Word IntFIMs_76;
  MR_Word ImpFIMs_77;
  MR_Word AccFIMs_78;
  MR_Word IntTypeDefns_79;
  MR_Word ImpTypeDefns_80;
  MR_Word ImpForeignEnums_81;
  MR_Word IntTypeDefnsAbs_82;
  MR_Word IntTypeDefnsMer_83;
  MR_Word IntTypeDefnsFor_84;
  MR_Word ImpTypeDefnsAbs_85;
  MR_Word ImpTypeDefnsMer_86;
  MR_Word ImpTypeDefnsFor_87;
  MR_Word AccTypeDefnsAbs1_88;
  MR_Word AccTypeDefnsAbs_89;
  MR_Word AccTypeDefnsMer1_90;
  MR_Word AccTypeDefnsMer_91;
  MR_Word AccTypeDefnsFor1_92;
  MR_Word AccTypeDefnsFor_93;
  MR_Word IntInstDefns_94;
  MR_Word AccInstDefns_96;
  MR_Word IntModeDefns_97;
  MR_Word AccModeDefns_99;
  MR_Word AccTypeClasses1_100;
  MR_Word AccTypeClasses_101;
  MR_Word AccIntInstances_102;
  MR_Word AccPredDecls_103;
  MR_Word AccModeDecls_104;
  MR_Word AccForeignEnums_105;
  MR_Word AccDeclPragmas_106;
  MR_Word AccDeclMarkers_107;
  MR_Word AccPromises_108;
  MR_Word AccTypeRepns_109;
  MR_Word Var_115;
  MR_Word Var_117;
  MR_Word Var_118;
  MR_Word Var_125;
  MR_Word Var_126;
  MR_Word Var_127;
  MR_Word _ImpInstDefns_95;
  MR_Word _ImpModeDefns_98;

  switch (ReadWhy1_6) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 4:
    case (MR_Integer) 0:
      {
        IntNeedQual_9 = (MR_Integer) 1;
        IntItemImport_10 = (MR_Word) (MR_mkword(1, &hlds__make_hlds__make_hlds_separate_items_scalar_common_4[0]));
        ImpItemImport_11 = (MR_Word) ((MR_Unsigned) 0U);
        ImpNeedQual_12 = (MR_Integer) 0;
      }
      break;
    case (MR_Integer) 6:
    case (MR_Integer) 2:
      {
        IntNeedQual_9 = (MR_Integer) 0;
        IntItemImport_10 = (MR_Word) (MR_mkword(1, &hlds__make_hlds__make_hlds_separate_items_scalar_common_4[0]));
        ImpItemImport_11 = (MR_Word) ((MR_Unsigned) 0U);
        ImpNeedQual_12 = (MR_Integer) 0;
      }
      break;
    case (MR_Integer) 5:
      {
        IntNeedQual_9 = (MR_Integer) 1;
        IntItemImport_10 = (MR_Word) (MR_mkword(1, &hlds__make_hlds__make_hlds_separate_items_scalar_common_4[1]));
        ImpItemImport_11 = (MR_Word) ((MR_Unsigned) 0U);
        ImpNeedQual_12 = (MR_Integer) 0;
      }
      break;
    case (MR_Integer) 7:
      {
        IntNeedQual_9 = (MR_Integer) 0;
        IntItemImport_10 = (MR_Word) (MR_mkword(1, &hlds__make_hlds__make_hlds_separate_items_scalar_common_4[1]));
        ImpItemImport_11 = (MR_Word) ((MR_Unsigned) 0U);
        ImpNeedQual_12 = (MR_Integer) 0;
      }
      break;
    case (MR_Integer) 1:
      {
        IntNeedQual_9 = (MR_Integer) 1;
        IntItemImport_10 = (MR_Word) (MR_mkword(1, &hlds__make_hlds__make_hlds_separate_items_scalar_common_4[2]));
        ImpItemImport_11 = (MR_Word) ((MR_Unsigned) 0U);
        ImpNeedQual_12 = (MR_Integer) 0;
      }
      break;
    case (MR_Integer) 3:
      {
        IntNeedQual_9 = (MR_Integer) 0;
        IntItemImport_10 = (MR_Word) (MR_mkword(1, &hlds__make_hlds__make_hlds_separate_items_scalar_common_4[2]));
        ImpItemImport_11 = (MR_Word) ((MR_Unsigned) 0U);
        ImpNeedQual_12 = (MR_Integer) 0;
      }
      break;
    case (MR_Integer) 8:
      {
        IntNeedQual_9 = (MR_Integer) 1;
        IntItemImport_10 = (MR_Word) (MR_mkword(1, &hlds__make_hlds__make_hlds_separate_items_scalar_common_4[2]));
        ImpItemImport_11 = (MR_Word) ((MR_Unsigned) 0U);
        ImpNeedQual_12 = (MR_Integer) 0;
      }
      break;
    case (MR_Integer) 10:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.make_hlds_separate_items.acc_parse_tree_int1\'/4", (MR_String) "rwi1_type_repn");
        return;
      }
      break;
    case (MR_Integer) 9:
      {
        IntItemImport_10 = (MR_Word) ((MR_Unsigned) 4U);
        ImpItemImport_11 = (MR_Word) ((MR_Unsigned) 4U);
        IntNeedQual_9 = (MR_Integer) 0;
        ImpNeedQual_12 = (MR_Integer) 0;
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
  ModuleName_17 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_5, 0))));
  UseMap_21 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_5, 4))));
  IntFIMSpecs_22 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_5, 5))));
  ImpFIMSpecs_23 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_5, 6))));
  TypeCheckedMap_24 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_5, 7))));
  InstCheckedMap_25 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_5, 8))));
  ModeCheckedMap_26 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_5, 9))));
  IntTypeClasses_27 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_5, 10))));
  IntInstances_28 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_5, 11))));
  IntPredDecls_29 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_5, 12))));
  IntModeDecls_30 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_5, 13))));
  IntDeclPragmas_31 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_5, 14))));
  IntDeclMarkers_32 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_5, 15))));
  IntPromises_33 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_5, 16))));
  IntTypeRepnMap_34 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_5, 17))));
  ImpTypeClasses_35 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_5, 18))));
  AccAvails0_36 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_110, 0))));
  AccFIMs0_37 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_110, 1))));
  AccTypeDefnsAbs0_38 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_110, 2))));
  AccTypeDefnsMer0_39 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_110, 3))));
  AccTypeDefnsFor0_40 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_110, 4))));
  AccInstDefns0_41 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_110, 5))));
  AccModeDefns0_42 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_110, 6))));
  AccTypeClasses0_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_110, 7))));
  AccIntInstances0_44 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_110, 8))));
  AccImpInstances0_45 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_110, 9))));
  AccPredDecls0_46 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_110, 10))));
  AccModeDecls0_47 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_110, 11))));
  AccClauses0_48 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_110, 12))));
  AccForeignProcs0_49 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_110, 13))));
  AccForeignEnums0_50 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_110, 14))));
  AccForeignExportEnums0_51 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_110, 15))));
  AccDeclPragmas0_52 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_110, 16))));
  AccDeclMarkers0_53 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_110, 17))));
  AccDeclPragmasTypeSpecConstr0_54 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_110, 18))));
  AccDeclPragmasTypeSpec0_55 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_110, 19))));
  AccDeclPragmasInputSpec0_56 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_110, 20))));
  AccDeclPragmasTermInfo0_57 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_110, 21))));
  AccDeclPragmasTerm2Info0_58 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_110, 22))));
  AccDeclPragmasSharing0_59 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_110, 23))));
  AccDeclPragmasReuse0_60 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_110, 24))));
  AccImplPragmas0_61 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_110, 25))));
  AccImplMarkers0_62 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_110, 26))));
  AccGenPragmasUnusedArgs0_63 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_110, 27))));
  AccGenPragmasExceptions0_64 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_110, 28))));
  AccGenPragmasTrailing0_65 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_110, 29))));
  AccGenPragmasMMTabling0_66 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_110, 30))));
  AccPromises0_67 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_110, 31))));
  AccInitialises0_68 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_110, 32))));
  AccFinalises0_69 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_110, 33))));
  AccMutables0_70 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_110, 34))));
  AccTypeRepns0_71 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_110, 35))));
  parse_tree__convert_import_use__section_use_map_to_item_avails_3_p_0(UseMap_21, &IntAvails_72, &ImpAvails_73);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_avails_4_p_0(IntItemMercuryStatus_13, IntAvails_72, AccAvails0_36, &AccAvails1_74);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_avails_4_p_0(ImpItemMercuryStatus_14, ImpAvails_73, AccAvails1_74, &AccAvails_75);
  Var_115 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), IntFIMSpecs_22);
  IntFIMs_76 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_3[17]), Var_115);
  Var_117 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), ImpFIMSpecs_23);
  ImpFIMs_77 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_3[18]), Var_117);
  Var_118 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), IntFIMs_76, ImpFIMs_77);
  mercury__cord__snoc_list_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), Var_118, AccFIMs0_37, &AccFIMs_78);
  parse_tree__item_util__type_ctor_checked_map_get_src_defns_4_p_0(TypeCheckedMap_24, &IntTypeDefns_79, &ImpTypeDefns_80, &ImpForeignEnums_81);
  hlds__make_hlds__make_hlds_separate_items__separate_type_defns_abs_mer_for_7_p_0(IntTypeDefns_79, (MR_Word) ((MR_Unsigned) 0U), &IntTypeDefnsAbs_82, (MR_Word) ((MR_Unsigned) 0U), &IntTypeDefnsMer_83, (MR_Word) ((MR_Unsigned) 0U), &IntTypeDefnsFor_84);
  hlds__make_hlds__make_hlds_separate_items__separate_type_defns_abs_mer_for_7_p_0(ImpTypeDefns_80, (MR_Word) ((MR_Unsigned) 0U), &ImpTypeDefnsAbs_85, (MR_Word) ((MR_Unsigned) 0U), &ImpTypeDefnsMer_86, (MR_Word) ((MR_Unsigned) 0U), &ImpTypeDefnsFor_87);
  hlds__make_hlds__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[1]), IntSectionInfo_15, IntTypeDefnsAbs_82, AccTypeDefnsAbs0_38, &AccTypeDefnsAbs1_88);
  hlds__make_hlds__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[1]), ImpSectionInfo_16, ImpTypeDefnsAbs_85, AccTypeDefnsAbs1_88, &AccTypeDefnsAbs_89);
  hlds__make_hlds__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[1]), IntSectionInfo_15, IntTypeDefnsMer_83, AccTypeDefnsMer0_39, &AccTypeDefnsMer1_90);
  hlds__make_hlds__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[1]), ImpSectionInfo_16, ImpTypeDefnsMer_86, AccTypeDefnsMer1_90, &AccTypeDefnsMer_91);
  hlds__make_hlds__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[1]), IntSectionInfo_15, IntTypeDefnsFor_84, AccTypeDefnsFor0_40, &AccTypeDefnsFor1_92);
  hlds__make_hlds__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[1]), ImpSectionInfo_16, ImpTypeDefnsFor_87, AccTypeDefnsFor1_92, &AccTypeDefnsFor_93);
  parse_tree__item_util__inst_ctor_checked_map_get_src_defns_3_p_0(InstCheckedMap_25, &IntInstDefns_94, &_ImpInstDefns_95);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[3]), IntItemMercuryStatus_13, IntInstDefns_94, AccInstDefns0_41, &AccInstDefns_96);
  parse_tree__item_util__mode_ctor_checked_map_get_src_defns_3_p_0(ModeCheckedMap_26, &IntModeDefns_97, &_ImpModeDefns_98);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[5]), IntItemMercuryStatus_13, IntModeDefns_97, AccModeDefns0_42, &AccModeDefns_99);
  hlds__make_hlds__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), IntSectionInfo_15, IntTypeClasses_27, AccTypeClasses0_43, &AccTypeClasses1_100);
  Var_125 = (MR_Word) (ImpTypeClasses_35);
  hlds__make_hlds__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), ImpSectionInfo_16, Var_125, AccTypeClasses1_100, &AccTypeClasses_101);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_abstract_instance_info_0), IntItemMercuryStatus_13, IntInstances_28, AccIntInstances0_44, &AccIntInstances_102);
  hlds__make_hlds__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), IntSectionInfo_15, IntPredDecls_29, AccPredDecls0_46, &AccPredDecls_103);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), IntItemMercuryStatus_13, IntModeDecls_30, AccModeDecls0_47, &AccModeDecls_104);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_tuple_list_4_p_0((MR_Word) (&parse_tree__prog_item_type__parse_tree__prog_item_type__type_ctor_info_item_foreign_enum_info_0), ImpItemMercuryStatus_14, ImpForeignEnums_81, AccForeignEnums0_50, &AccForeignEnums_105);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_item_decl_pragma_info_0), IntItemMercuryStatus_13, IntDeclPragmas_31, AccDeclPragmas0_52, &AccDeclPragmas_106);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_item_decl_marker_info_0), IntItemMercuryStatus_13, IntDeclMarkers_32, AccDeclMarkers0_53, &AccDeclMarkers_107);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), IntItemMercuryStatus_13, IntPromises_33, AccPromises0_67, &AccPromises_108);
  {
    Var_127 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_127, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(0, Var_127, 1) = ((MR_Box) (IntTypeRepnMap_34));
  }
  {
    Var_126 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_126, 0) = ((MR_Box) (ModuleName_17));
    MR_hl_field(0, Var_126, 1) = ((MR_Box) (Var_127));
  }
  {
    AccTypeRepns_109 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, AccTypeRepns_109, 0) = ((MR_Box) (Var_126));
    MR_hl_field(1, AccTypeRepns_109, 1) = ((MR_Box) (AccTypeRepns0_71));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (36 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Acc_111 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (AccAvails_75));
    MR_hl_field(0, base, 1) = ((MR_Box) (AccFIMs_78));
    MR_hl_field(0, base, 2) = ((MR_Box) (AccTypeDefnsAbs_89));
    MR_hl_field(0, base, 3) = ((MR_Box) (AccTypeDefnsMer_91));
    MR_hl_field(0, base, 4) = ((MR_Box) (AccTypeDefnsFor_93));
    MR_hl_field(0, base, 5) = ((MR_Box) (AccInstDefns_96));
    MR_hl_field(0, base, 6) = ((MR_Box) (AccModeDefns_99));
    MR_hl_field(0, base, 7) = ((MR_Box) (AccTypeClasses_101));
    MR_hl_field(0, base, 8) = ((MR_Box) (AccIntInstances_102));
    MR_hl_field(0, base, 9) = ((MR_Box) (AccImpInstances0_45));
    MR_hl_field(0, base, 10) = ((MR_Box) (AccPredDecls_103));
    MR_hl_field(0, base, 11) = ((MR_Box) (AccModeDecls_104));
    MR_hl_field(0, base, 12) = ((MR_Box) (AccClauses0_48));
    MR_hl_field(0, base, 13) = ((MR_Box) (AccForeignProcs0_49));
    MR_hl_field(0, base, 14) = ((MR_Box) (AccForeignEnums_105));
    MR_hl_field(0, base, 15) = ((MR_Box) (AccForeignExportEnums0_51));
    MR_hl_field(0, base, 16) = ((MR_Box) (AccDeclPragmas_106));
    MR_hl_field(0, base, 17) = ((MR_Box) (AccDeclMarkers_107));
    MR_hl_field(0, base, 18) = ((MR_Box) (AccDeclPragmasTypeSpecConstr0_54));
    MR_hl_field(0, base, 19) = ((MR_Box) (AccDeclPragmasTypeSpec0_55));
    MR_hl_field(0, base, 20) = ((MR_Box) (AccDeclPragmasInputSpec0_56));
    MR_hl_field(0, base, 21) = ((MR_Box) (AccDeclPragmasTermInfo0_57));
    MR_hl_field(0, base, 22) = ((MR_Box) (AccDeclPragmasTerm2Info0_58));
    MR_hl_field(0, base, 23) = ((MR_Box) (AccDeclPragmasSharing0_59));
    MR_hl_field(0, base, 24) = ((MR_Box) (AccDeclPragmasReuse0_60));
    MR_hl_field(0, base, 25) = ((MR_Box) (AccImplPragmas0_61));
    MR_hl_field(0, base, 26) = ((MR_Box) (AccImplMarkers0_62));
    MR_hl_field(0, base, 27) = ((MR_Box) (AccGenPragmasUnusedArgs0_63));
    MR_hl_field(0, base, 28) = ((MR_Box) (AccGenPragmasExceptions0_64));
    MR_hl_field(0, base, 29) = ((MR_Box) (AccGenPragmasTrailing0_65));
    MR_hl_field(0, base, 30) = ((MR_Box) (AccGenPragmasMMTabling0_66));
    MR_hl_field(0, base, 31) = ((MR_Box) (AccPromises_108));
    MR_hl_field(0, base, 32) = ((MR_Box) (AccInitialises0_68));
    MR_hl_field(0, base, 33) = ((MR_Box) (AccFinalises0_69));
    MR_hl_field(0, base, 34) = ((MR_Box) (AccMutables0_70));
    MR_hl_field(0, base, 35) = ((MR_Box) (AccTypeRepns_109));
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_separate_items__acc_ancestor_int_spec_3_p_0(
  MR_Word AncestorIntSpec_4,
  MR_Word STATE_VARIABLE_Acc_0_8,
  MR_Word * STATE_VARIABLE_Acc_9)
{
  MR_Word ParseTreeInt0_6 = ((MR_Word) ((MR_hl_field(0, AncestorIntSpec_4, 0))));
  MR_Word ReadWhy0_7 = ((MR_Unsigned) ((MR_hl_field(0, AncestorIntSpec_4, 1))) & (MR_Integer) 1);

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
  MR_Word STATE_VARIABLE_Acc_0_123,
  MR_Word * STATE_VARIABLE_Acc_124)
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
  MR_Word AccIntInstances0_50;
  MR_Word AccImpInstances0_51;
  MR_Word AccPredDecls0_52;
  MR_Word AccModeDecls0_53;
  MR_Word AccClauses0_54;
  MR_Word AccForeignProcs0_55;
  MR_Word AccForeignEnums0_56;
  MR_Word AccForeignExportEnums0_57;
  MR_Word AccDeclPragmas0_58;
  MR_Word AccDeclMarkers0_59;
  MR_Word AccDeclPragmasTypeSpecConstr0_60;
  MR_Word AccDeclPragmasTypeSpec0_61;
  MR_Word AccDeclPragmasInputSpec0_62;
  MR_Word AccDeclPragmasTermInfo0_63;
  MR_Word AccDeclPragmasTerm2Info0_64;
  MR_Word AccDeclPragmasSharing0_65;
  MR_Word AccDeclPragmasReuse0_66;
  MR_Word AccImplPragmas0_67;
  MR_Word AccImplMarkers0_68;
  MR_Word AccGenPragmasUnusedArgs0_69;
  MR_Word AccGenPragmasExceptions0_70;
  MR_Word AccGenPragmasTrailing0_71;
  MR_Word AccGenPragmasMMTabling0_72;
  MR_Word AccPromises0_73;
  MR_Word AccInitialises0_74;
  MR_Word AccFinalises0_75;
  MR_Word AccMutables0_76;
  MR_Word AccTypeRepns0_77;
  MR_Word IntAvails_78;
  MR_Word ImpAvails_79;
  MR_Word AccAvails1_80;
  MR_Word AccAvails_81;
  MR_Word IntFIMs_82;
  MR_Word ImpFIMs_83;
  MR_Word AccFIMs_84;
  MR_Word IntTypeDefns_85;
  MR_Word ImpTypeDefns_86;
  MR_Word ImpForeignEnums_87;
  MR_Word IntTypeDefnsAbs_88;
  MR_Word IntTypeDefnsMer_89;
  MR_Word IntTypeDefnsFor_90;
  MR_Word ImpTypeDefnsAbs_91;
  MR_Word ImpTypeDefnsMer_92;
  MR_Word ImpTypeDefnsFor_93;
  MR_Word AccTypeDefnsAbs1_94;
  MR_Word AccTypeDefnsAbs_95;
  MR_Word AccTypeDefnsMer1_96;
  MR_Word AccTypeDefnsMer_97;
  MR_Word AccTypeDefnsFor1_98;
  MR_Word AccTypeDefnsFor_99;
  MR_Word IntInstDefns_100;
  MR_Word ImpInstDefns_101;
  MR_Word AccInstDefns1_102;
  MR_Word AccInstDefns_103;
  MR_Word IntModeDefns_104;
  MR_Word ImpModeDefns_105;
  MR_Word AccModeDefns1_106;
  MR_Word AccModeDefns_107;
  MR_Word AccTypeClasses1_108;
  MR_Word AccTypeClasses_109;
  MR_Word AccIntInstances_110;
  MR_Word AccImpInstances_111;
  MR_Word AccPredDecls1_112;
  MR_Word AccPredDecls_113;
  MR_Word AccModeDecls1_114;
  MR_Word AccModeDecls_115;
  MR_Word AccForeignEnums_116;
  MR_Word AccDeclPragmas1_117;
  MR_Word AccDeclMarkers1_118;
  MR_Word AccDeclPragmas_119;
  MR_Word AccDeclMarkers_120;
  MR_Word AccPromises1_121;
  MR_Word AccPromises_122;
  MR_Word Var_126;
  MR_Word Var_128;
  MR_Word Var_129;
  MR_Word Var_136;

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
  ImportUseMap_22 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_5, 4))));
  IntFIMSpecs_23 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_5, 5))));
  ImpFIMSpecs_24 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_5, 6))));
  TypeCtorCheckedMap_25 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_5, 7))));
  InstCtorCheckedMap_26 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_5, 8))));
  ModeCtorCheckedMap_27 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_5, 9))));
  IntTypeClasses_28 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_5, 10))));
  IntInstances_29 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_5, 11))));
  IntPredDecls_30 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_5, 12))));
  IntModeDecls_31 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_5, 13))));
  IntDeclPragmas_32 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_5, 14))));
  IntDeclMarkers_33 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_5, 15))));
  IntPromises_34 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_5, 16))));
  ImpTypeClasses_35 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_5, 17))));
  ImpInstances_36 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_5, 18))));
  ImpPredDecls_37 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_5, 19))));
  ImpModeDecls_38 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_5, 20))));
  ImpDeclPragmas_39 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_5, 21))));
  ImpDeclMarkers_40 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_5, 22))));
  ImpPromises_41 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_5, 23))));
  AccAvails0_42 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_123, 0))));
  AccFIMs0_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_123, 1))));
  AccTypeDefnsAbs0_44 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_123, 2))));
  AccTypeDefnsMer0_45 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_123, 3))));
  AccTypeDefnsFor0_46 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_123, 4))));
  AccInstDefns0_47 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_123, 5))));
  AccModeDefns0_48 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_123, 6))));
  AccTypeClasses0_49 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_123, 7))));
  AccIntInstances0_50 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_123, 8))));
  AccImpInstances0_51 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_123, 9))));
  AccPredDecls0_52 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_123, 10))));
  AccModeDecls0_53 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_123, 11))));
  AccClauses0_54 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_123, 12))));
  AccForeignProcs0_55 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_123, 13))));
  AccForeignEnums0_56 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_123, 14))));
  AccForeignExportEnums0_57 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_123, 15))));
  AccDeclPragmas0_58 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_123, 16))));
  AccDeclMarkers0_59 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_123, 17))));
  AccDeclPragmasTypeSpecConstr0_60 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_123, 18))));
  AccDeclPragmasTypeSpec0_61 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_123, 19))));
  AccDeclPragmasInputSpec0_62 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_123, 20))));
  AccDeclPragmasTermInfo0_63 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_123, 21))));
  AccDeclPragmasTerm2Info0_64 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_123, 22))));
  AccDeclPragmasSharing0_65 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_123, 23))));
  AccDeclPragmasReuse0_66 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_123, 24))));
  AccImplPragmas0_67 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_123, 25))));
  AccImplMarkers0_68 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_123, 26))));
  AccGenPragmasUnusedArgs0_69 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_123, 27))));
  AccGenPragmasExceptions0_70 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_123, 28))));
  AccGenPragmasTrailing0_71 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_123, 29))));
  AccGenPragmasMMTabling0_72 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_123, 30))));
  AccPromises0_73 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_123, 31))));
  AccInitialises0_74 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_123, 32))));
  AccFinalises0_75 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_123, 33))));
  AccMutables0_76 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_123, 34))));
  AccTypeRepns0_77 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_123, 35))));
  parse_tree__convert_import_use__section_import_and_or_use_map_to_item_avails_3_p_0(ImportUseMap_22, &IntAvails_78, &ImpAvails_79);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_avails_4_p_0(IntItemMercuryStatus_14, IntAvails_78, AccAvails0_42, &AccAvails1_80);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_avails_4_p_0(ImpItemMercuryStatus_15, ImpAvails_79, AccAvails1_80, &AccAvails_81);
  Var_126 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), IntFIMSpecs_23);
  IntFIMs_82 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_3[15]), Var_126);
  Var_128 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), ImpFIMSpecs_24);
  ImpFIMs_83 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_3[16]), Var_128);
  Var_129 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), IntFIMs_82, ImpFIMs_83);
  mercury__cord__snoc_list_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), Var_129, AccFIMs0_43, &AccFIMs_84);
  parse_tree__item_util__type_ctor_checked_map_get_src_defns_4_p_0(TypeCtorCheckedMap_25, &IntTypeDefns_85, &ImpTypeDefns_86, &ImpForeignEnums_87);
  hlds__make_hlds__make_hlds_separate_items__separate_type_defns_abs_mer_for_7_p_0(IntTypeDefns_85, (MR_Word) ((MR_Unsigned) 0U), &IntTypeDefnsAbs_88, (MR_Word) ((MR_Unsigned) 0U), &IntTypeDefnsMer_89, (MR_Word) ((MR_Unsigned) 0U), &IntTypeDefnsFor_90);
  hlds__make_hlds__make_hlds_separate_items__separate_type_defns_abs_mer_for_7_p_0(ImpTypeDefns_86, (MR_Word) ((MR_Unsigned) 0U), &ImpTypeDefnsAbs_91, (MR_Word) ((MR_Unsigned) 0U), &ImpTypeDefnsMer_92, (MR_Word) ((MR_Unsigned) 0U), &ImpTypeDefnsFor_93);
  hlds__make_hlds__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[1]), IntSectionInfo_16, IntTypeDefnsAbs_88, AccTypeDefnsAbs0_44, &AccTypeDefnsAbs1_94);
  hlds__make_hlds__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[1]), ImpSectionInfo_17, ImpTypeDefnsAbs_91, AccTypeDefnsAbs1_94, &AccTypeDefnsAbs_95);
  hlds__make_hlds__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[1]), IntSectionInfo_16, IntTypeDefnsMer_89, AccTypeDefnsMer0_45, &AccTypeDefnsMer1_96);
  hlds__make_hlds__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[1]), ImpSectionInfo_17, ImpTypeDefnsMer_92, AccTypeDefnsMer1_96, &AccTypeDefnsMer_97);
  hlds__make_hlds__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[1]), IntSectionInfo_16, IntTypeDefnsFor_90, AccTypeDefnsFor0_46, &AccTypeDefnsFor1_98);
  hlds__make_hlds__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[1]), ImpSectionInfo_17, ImpTypeDefnsFor_93, AccTypeDefnsFor1_98, &AccTypeDefnsFor_99);
  parse_tree__item_util__inst_ctor_checked_map_get_src_defns_3_p_0(InstCtorCheckedMap_26, &IntInstDefns_100, &ImpInstDefns_101);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[3]), IntItemMercuryStatus_14, IntInstDefns_100, AccInstDefns0_47, &AccInstDefns1_102);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[3]), ImpItemMercuryStatus_15, ImpInstDefns_101, AccInstDefns1_102, &AccInstDefns_103);
  parse_tree__item_util__mode_ctor_checked_map_get_src_defns_3_p_0(ModeCtorCheckedMap_27, &IntModeDefns_104, &ImpModeDefns_105);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[5]), IntItemMercuryStatus_14, IntModeDefns_104, AccModeDefns0_48, &AccModeDefns1_106);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[5]), ImpItemMercuryStatus_15, ImpModeDefns_105, AccModeDefns1_106, &AccModeDefns_107);
  hlds__make_hlds__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), IntSectionInfo_16, IntTypeClasses_28, AccTypeClasses0_49, &AccTypeClasses1_108);
  hlds__make_hlds__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), ImpSectionInfo_17, ImpTypeClasses_35, AccTypeClasses1_108, &AccTypeClasses_109);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_abstract_instance_info_0), IntItemMercuryStatus_14, IntInstances_29, AccIntInstances0_50, &AccIntInstances_110);
  Var_136 = (MR_Word) (ImpInstances_36);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), ImpItemMercuryStatus_15, Var_136, AccImpInstances0_51, &AccImpInstances_111);
  hlds__make_hlds__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), IntSectionInfo_16, IntPredDecls_30, AccPredDecls0_52, &AccPredDecls1_112);
  hlds__make_hlds__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), ImpSectionInfo_17, ImpPredDecls_37, AccPredDecls1_112, &AccPredDecls_113);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), IntItemMercuryStatus_14, IntModeDecls_31, AccModeDecls0_53, &AccModeDecls1_114);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), ImpItemMercuryStatus_15, ImpModeDecls_38, AccModeDecls1_114, &AccModeDecls_115);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_tuple_list_4_p_0((MR_Word) (&parse_tree__prog_item_type__parse_tree__prog_item_type__type_ctor_info_item_foreign_enum_info_0), ImpItemMercuryStatus_15, ImpForeignEnums_87, AccForeignEnums0_56, &AccForeignEnums_116);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_item_decl_pragma_info_0), IntItemMercuryStatus_14, IntDeclPragmas_32, AccDeclPragmas0_58, &AccDeclPragmas1_117);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_item_decl_marker_info_0), IntItemMercuryStatus_14, IntDeclMarkers_33, AccDeclMarkers0_59, &AccDeclMarkers1_118);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_item_decl_pragma_info_0), ImpItemMercuryStatus_15, ImpDeclPragmas_39, AccDeclPragmas1_117, &AccDeclPragmas_119);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_item_decl_marker_info_0), ImpItemMercuryStatus_15, ImpDeclMarkers_40, AccDeclMarkers1_118, &AccDeclMarkers_120);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), IntItemMercuryStatus_14, IntPromises_34, AccPromises0_73, &AccPromises1_121);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), ImpItemMercuryStatus_15, ImpPromises_41, AccPromises1_121, &AccPromises_122);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (36 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Acc_124 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (AccAvails_81));
    MR_hl_field(0, base, 1) = ((MR_Box) (AccFIMs_84));
    MR_hl_field(0, base, 2) = ((MR_Box) (AccTypeDefnsAbs_95));
    MR_hl_field(0, base, 3) = ((MR_Box) (AccTypeDefnsMer_97));
    MR_hl_field(0, base, 4) = ((MR_Box) (AccTypeDefnsFor_99));
    MR_hl_field(0, base, 5) = ((MR_Box) (AccInstDefns_103));
    MR_hl_field(0, base, 6) = ((MR_Box) (AccModeDefns_107));
    MR_hl_field(0, base, 7) = ((MR_Box) (AccTypeClasses_109));
    MR_hl_field(0, base, 8) = ((MR_Box) (AccIntInstances_110));
    MR_hl_field(0, base, 9) = ((MR_Box) (AccImpInstances_111));
    MR_hl_field(0, base, 10) = ((MR_Box) (AccPredDecls_113));
    MR_hl_field(0, base, 11) = ((MR_Box) (AccModeDecls_115));
    MR_hl_field(0, base, 12) = ((MR_Box) (AccClauses0_54));
    MR_hl_field(0, base, 13) = ((MR_Box) (AccForeignProcs0_55));
    MR_hl_field(0, base, 14) = ((MR_Box) (AccForeignEnums_116));
    MR_hl_field(0, base, 15) = ((MR_Box) (AccForeignExportEnums0_57));
    MR_hl_field(0, base, 16) = ((MR_Box) (AccDeclPragmas_119));
    MR_hl_field(0, base, 17) = ((MR_Box) (AccDeclMarkers_120));
    MR_hl_field(0, base, 18) = ((MR_Box) (AccDeclPragmasTypeSpecConstr0_60));
    MR_hl_field(0, base, 19) = ((MR_Box) (AccDeclPragmasTypeSpec0_61));
    MR_hl_field(0, base, 20) = ((MR_Box) (AccDeclPragmasInputSpec0_62));
    MR_hl_field(0, base, 21) = ((MR_Box) (AccDeclPragmasTermInfo0_63));
    MR_hl_field(0, base, 22) = ((MR_Box) (AccDeclPragmasTerm2Info0_64));
    MR_hl_field(0, base, 23) = ((MR_Box) (AccDeclPragmasSharing0_65));
    MR_hl_field(0, base, 24) = ((MR_Box) (AccDeclPragmasReuse0_66));
    MR_hl_field(0, base, 25) = ((MR_Box) (AccImplPragmas0_67));
    MR_hl_field(0, base, 26) = ((MR_Box) (AccImplMarkers0_68));
    MR_hl_field(0, base, 27) = ((MR_Box) (AccGenPragmasUnusedArgs0_69));
    MR_hl_field(0, base, 28) = ((MR_Box) (AccGenPragmasExceptions0_70));
    MR_hl_field(0, base, 29) = ((MR_Box) (AccGenPragmasTrailing0_71));
    MR_hl_field(0, base, 30) = ((MR_Box) (AccGenPragmasMMTabling0_72));
    MR_hl_field(0, base, 31) = ((MR_Box) (AccPromises_122));
    MR_hl_field(0, base, 32) = ((MR_Box) (AccInitialises0_74));
    MR_hl_field(0, base, 33) = ((MR_Box) (AccFinalises0_75));
    MR_hl_field(0, base, 34) = ((MR_Box) (AccMutables0_76));
    MR_hl_field(0, base, 35) = ((MR_Box) (AccTypeRepns0_77));
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_separate_items__acc_type_repn_map_3_p_0(
  MR_Word IntTypeRepns_4,
  MR_Word STATE_VARIABLE_Cord_0_9,
  MR_Word * STATE_VARIABLE_Cord_10)
{
  MR_Word TypeCtorRepnMap_7 = ((MR_Word) ((MR_hl_field(0, IntTypeRepns_4, 1))));
  MR_Word TypeCtorRepnPairs_8;

  mercury__map__to_sorted_assoc_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[23]), TypeCtorRepnMap_7, &TypeCtorRepnPairs_8);
  mercury__cord__snoc_list_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_3[2]), TypeCtorRepnPairs_8, STATE_VARIABLE_Cord_0_9, STATE_VARIABLE_Cord_10);
}

static void MR_CALL 
hlds__make_hlds__make_hlds_separate_items__acc_int_type_repn_map_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ModuleMap_0_14,
  MR_Word * STATE_VARIABLE_ModuleMap_15)
{
  MR_bool succeeded;
  MR_Word ModuleName_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
  MR_Word IntTypeRepns_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
  MR_Word IntFileKind_7 = ((MR_Unsigned) ((MR_hl_field(0, IntTypeRepns_5, 0))) & (MR_Integer) 3);
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
    MR_Word OldIntFileKind_10 = ((MR_Unsigned) ((MR_hl_field(0, OldIntTypeRepns_9, 0))) & (MR_Integer) 3);
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
hlds__make_hlds__make_hlds_separate_items__separate_items_in_aug_comp_unit_39_p_0_9(
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
hlds__make_hlds__make_hlds_separate_items__separate_items_in_aug_comp_unit_39_p_0_8(
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
hlds__make_hlds__make_hlds_separate_items__separate_items_in_aug_comp_unit_39_p_0_7(
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
hlds__make_hlds__make_hlds_separate_items__separate_items_in_aug_comp_unit_39_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv10_STATE_VARIABLE_Acc_59;

  hlds__make_hlds__make_hlds_separate_items__acc_parse_tree_trans_opt_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv10_STATE_VARIABLE_Acc_59);
  *wrapper_arg_3 = ((MR_Box) (conv10_STATE_VARIABLE_Acc_59));
}

static void MR_CALL 
hlds__make_hlds__make_hlds_separate_items__separate_items_in_aug_comp_unit_39_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv8_STATE_VARIABLE_Acc_104;

  hlds__make_hlds__make_hlds_separate_items__acc_parse_tree_plain_opt_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_STATE_VARIABLE_Acc_104);
  *wrapper_arg_3 = ((MR_Box) (conv8_STATE_VARIABLE_Acc_104));
}

static void MR_CALL 
hlds__make_hlds__make_hlds_separate_items__separate_items_in_aug_comp_unit_39_p_0_4(
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
hlds__make_hlds__make_hlds_separate_items__separate_items_in_aug_comp_unit_39_p_0_3(
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
hlds__make_hlds__make_hlds_separate_items__separate_items_in_aug_comp_unit_39_p_0_2(
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
hlds__make_hlds__make_hlds_separate_items__separate_items_in_aug_comp_unit_39_p_0_1(
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
hlds__make_hlds__make_hlds_separate_items__separate_items_in_aug_comp_unit_39_p_0(
  MR_Word AugCompUnit_40,
  MR_Word * InclMap_41,
  MR_Word * Avails_42,
  MR_Word * FIMs_43,
  MR_Word * TypeDefnsAbstract_44,
  MR_Word * TypeDefnsMercury_45,
  MR_Word * TypeDefnsForeign_46,
  MR_Word * InstDefns_47,
  MR_Word * ModeDefns_48,
  MR_Word * PredDecls_49,
  MR_Word * ModeDecls_50,
  MR_Word * Promises_51,
  MR_Word * TypeClasses_52,
  MR_Word * IntInstances_53,
  MR_Word * ImpInstances_54,
  MR_Word * Initialises_55,
  MR_Word * Finalises_56,
  MR_Word * Mutables_57,
  MR_Word * TypeRepnMap_58,
  MR_Word * ForeignEnums_59,
  MR_Word * ForeignExportEnums_60,
  MR_Word * DeclPragmas_61,
  MR_Word * DeclMarkers_62,
  MR_Word * DeclPragmasTypeSpecConstr_63,
  MR_Word * DeclPragmasTypeSpec_64,
  MR_Word * DeclPragmasInputSpec_65,
  MR_Word * DeclPragmasTermInfo_66,
  MR_Word * DeclPragmasTerm2Info_67,
  MR_Word * DeclPragmasSharing_68,
  MR_Word * DeclPragmasReuse_69,
  MR_Word * ImplPragmas_70,
  MR_Word * ImplMarkers_71,
  MR_Word * GenPragmasUnusedArgs_72,
  MR_Word * GenPragmasExceptions_73,
  MR_Word * GenPragmasTrailing_74,
  MR_Word * GenPragmasMMTabling_75,
  MR_Word * Clauses_76,
  MR_Word * ForeignProcs_77,
  MR_Word * IntBadPreds_78)
{
  MR_Word ParseTreeModuleSrc_79 = ((MR_Word) ((MR_hl_field(0, AugCompUnit_40, 0))));
  MR_Word AncestorIntSpecs_80 = ((MR_Word) ((MR_hl_field(0, AugCompUnit_40, 1))));
  MR_Word DirectInt1Specs_81 = ((MR_Word) ((MR_hl_field(0, AugCompUnit_40, 2))));
  MR_Word IndirectInt2Specs_82 = ((MR_Word) ((MR_hl_field(0, AugCompUnit_40, 3))));
  MR_Word PlainOpts_83 = ((MR_Word) ((MR_hl_field(0, AugCompUnit_40, 4))));
  MR_Word TransOpts_84 = ((MR_Word) ((MR_hl_field(0, AugCompUnit_40, 5))));
  MR_Word IntForOptSpecs_85 = ((MR_Word) ((MR_hl_field(0, AugCompUnit_40, 6))));
  MR_Word TypeRepnSpecs_86 = ((MR_Word) ((MR_hl_field(0, AugCompUnit_40, 7))));
  MR_Word AvailsCord_89;
  MR_Word FIMsCord_90;
  MR_Word TypeDefnsAbstractCord_91;
  MR_Word TypeDefnsMercuryCord_92;
  MR_Word TypeDefnsForeignCord_93;
  MR_Word InstDefnsCord_94;
  MR_Word ModeDefnsCord_95;
  MR_Word TypeClassesCord_96;
  MR_Word IntInstancesCord_97;
  MR_Word ImpInstancesCord_98;
  MR_Word PredDeclsCord_99;
  MR_Word ModeDeclsCord_100;
  MR_Word ClausesCord_101;
  MR_Word ForeignProcsCord_102;
  MR_Word ForeignEnumsCord_103;
  MR_Word ForeignExportEnumsCord_104;
  MR_Word DeclPragmasCord_105;
  MR_Word DeclMarkersCord_106;
  MR_Word DeclPragmasTypeSpecConstrCord_107;
  MR_Word DeclPragmasTypeSpecCord_108;
  MR_Word DeclPragmasInputSpecCord_109;
  MR_Word DeclPragmasTermInfoCord_110;
  MR_Word DeclPragmasTerm2InfoCord_111;
  MR_Word DeclPragmasSharingCord_112;
  MR_Word DeclPragmasReuseCord_113;
  MR_Word ImplPragmasCord_114;
  MR_Word ImplMarkersCord_115;
  MR_Word GenPragmasUnusedArgsCord_116;
  MR_Word GenPragmasExceptionsCord_117;
  MR_Word GenPragmasTrailingCord_118;
  MR_Word GenPragmasMMTablingCord_119;
  MR_Word PromisesCord_120;
  MR_Word InitialisesCord_121;
  MR_Word FinalisesCord_122;
  MR_Word MutablesCord_123;
  MR_Word ModuleIntTypeRepns_124;
  MR_Word ModuleIntTypeRepnMap_125;
  MR_Word TypeCtorRepnsCord_126;
  MR_Word STATE_VARIABLE_Acc_1_127;
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
  MR_Word Var_155;
  MR_Word Var_156;
  MR_Word Var_157;
  MR_Word Var_158;
  MR_Word Var_159;
  MR_Word Var_160;
  MR_Word Var_161;
  MR_Word Var_162;
  MR_Word STATE_VARIABLE_Acc_2_164;
  MR_Word STATE_VARIABLE_Acc_3_166;
  MR_Word STATE_VARIABLE_Acc_4_168;
  MR_Word STATE_VARIABLE_Acc_5_170;
  MR_Word STATE_VARIABLE_Acc_6_172;
  MR_Word STATE_VARIABLE_Acc_7_174;
  MR_Word STATE_VARIABLE_Acc_8_176;
  MR_Word STATE_VARIABLE_Acc_9_178;
  MR_Word Var_180;
  MR_Word Var_182;
  MR_Word Var_183;
  MR_Box conv1_STATE_VARIABLE_Acc_3_166;
  MR_Box conv3_STATE_VARIABLE_Acc_4_168;
  MR_Box conv5_STATE_VARIABLE_Acc_5_170;
  MR_Box conv7_STATE_VARIABLE_Acc_6_172;
  MR_Box conv9_STATE_VARIABLE_Acc_7_174;
  MR_Box conv11_STATE_VARIABLE_Acc_8_176;
  MR_Box conv13_STATE_VARIABLE_Acc_9_178;
  MR_Box conv15_ModuleIntTypeRepnMap_125;
  MR_Box conv17_TypeCtorRepnsCord_126;

  Var_128 = mercury__cord__init_0_f_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[0]));
  Var_129 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0));
  Var_130 = mercury__cord__init_0_f_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[2]));
  Var_131 = mercury__cord__init_0_f_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[2]));
  Var_132 = mercury__cord__init_0_f_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[2]));
  Var_133 = mercury__cord__init_0_f_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[4]));
  Var_134 = mercury__cord__init_0_f_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[6]));
  Var_135 = mercury__cord__init_0_f_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[7]));
  Var_136 = mercury__cord__init_0_f_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[8]));
  Var_137 = mercury__cord__init_0_f_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[9]));
  Var_138 = mercury__cord__init_0_f_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[10]));
  Var_139 = mercury__cord__init_0_f_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[11]));
  Var_140 = mercury__cord__init_0_f_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[12]));
  Var_141 = mercury__cord__init_0_f_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[13]));
  Var_142 = mercury__cord__init_0_f_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_2[0]));
  Var_143 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_export_enum_info_0));
  Var_144 = mercury__cord__init_0_f_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[14]));
  Var_145 = mercury__cord__init_0_f_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[15]));
  Var_146 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_decl_pragma_type_spec_constr_info_0));
  Var_147 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_decl_pragma_type_spec_info_0));
  Var_148 = mercury__cord__init_0_f_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[16]));
  Var_149 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_decl_pragma_termination_info_0));
  Var_150 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_decl_pragma_termination2_info_0));
  Var_151 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_decl_pragma_struct_sharing_info_0));
  Var_152 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_decl_pragma_struct_reuse_info_0));
  Var_153 = mercury__cord__init_0_f_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[17]));
  Var_154 = mercury__cord__init_0_f_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[18]));
  Var_155 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_gen_pragma_unused_args_info_0));
  Var_156 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_gen_pragma_exceptions_info_0));
  Var_157 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_gen_pragma_trailing_info_0));
  Var_158 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_gen_pragma_mm_tabling_info_0));
  Var_159 = mercury__cord__init_0_f_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[19]));
  Var_160 = mercury__cord__init_0_f_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[20]));
  Var_161 = mercury__cord__init_0_f_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[21]));
  Var_162 = mercury__cord__init_0_f_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[22]));
  {
    STATE_VARIABLE_Acc_1_127 = (MR_Word) MR_new_object(MR_Word, (36 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_Acc_1_127, 0) = ((MR_Box) (Var_128));
    MR_hl_field(0, STATE_VARIABLE_Acc_1_127, 1) = ((MR_Box) (Var_129));
    MR_hl_field(0, STATE_VARIABLE_Acc_1_127, 2) = ((MR_Box) (Var_130));
    MR_hl_field(0, STATE_VARIABLE_Acc_1_127, 3) = ((MR_Box) (Var_131));
    MR_hl_field(0, STATE_VARIABLE_Acc_1_127, 4) = ((MR_Box) (Var_132));
    MR_hl_field(0, STATE_VARIABLE_Acc_1_127, 5) = ((MR_Box) (Var_133));
    MR_hl_field(0, STATE_VARIABLE_Acc_1_127, 6) = ((MR_Box) (Var_134));
    MR_hl_field(0, STATE_VARIABLE_Acc_1_127, 7) = ((MR_Box) (Var_135));
    MR_hl_field(0, STATE_VARIABLE_Acc_1_127, 8) = ((MR_Box) (Var_136));
    MR_hl_field(0, STATE_VARIABLE_Acc_1_127, 9) = ((MR_Box) (Var_137));
    MR_hl_field(0, STATE_VARIABLE_Acc_1_127, 10) = ((MR_Box) (Var_138));
    MR_hl_field(0, STATE_VARIABLE_Acc_1_127, 11) = ((MR_Box) (Var_139));
    MR_hl_field(0, STATE_VARIABLE_Acc_1_127, 12) = ((MR_Box) (Var_140));
    MR_hl_field(0, STATE_VARIABLE_Acc_1_127, 13) = ((MR_Box) (Var_141));
    MR_hl_field(0, STATE_VARIABLE_Acc_1_127, 14) = ((MR_Box) (Var_142));
    MR_hl_field(0, STATE_VARIABLE_Acc_1_127, 15) = ((MR_Box) (Var_143));
    MR_hl_field(0, STATE_VARIABLE_Acc_1_127, 16) = ((MR_Box) (Var_144));
    MR_hl_field(0, STATE_VARIABLE_Acc_1_127, 17) = ((MR_Box) (Var_145));
    MR_hl_field(0, STATE_VARIABLE_Acc_1_127, 18) = ((MR_Box) (Var_146));
    MR_hl_field(0, STATE_VARIABLE_Acc_1_127, 19) = ((MR_Box) (Var_147));
    MR_hl_field(0, STATE_VARIABLE_Acc_1_127, 20) = ((MR_Box) (Var_148));
    MR_hl_field(0, STATE_VARIABLE_Acc_1_127, 21) = ((MR_Box) (Var_149));
    MR_hl_field(0, STATE_VARIABLE_Acc_1_127, 22) = ((MR_Box) (Var_150));
    MR_hl_field(0, STATE_VARIABLE_Acc_1_127, 23) = ((MR_Box) (Var_151));
    MR_hl_field(0, STATE_VARIABLE_Acc_1_127, 24) = ((MR_Box) (Var_152));
    MR_hl_field(0, STATE_VARIABLE_Acc_1_127, 25) = ((MR_Box) (Var_153));
    MR_hl_field(0, STATE_VARIABLE_Acc_1_127, 26) = ((MR_Box) (Var_154));
    MR_hl_field(0, STATE_VARIABLE_Acc_1_127, 27) = ((MR_Box) (Var_155));
    MR_hl_field(0, STATE_VARIABLE_Acc_1_127, 28) = ((MR_Box) (Var_156));
    MR_hl_field(0, STATE_VARIABLE_Acc_1_127, 29) = ((MR_Box) (Var_157));
    MR_hl_field(0, STATE_VARIABLE_Acc_1_127, 30) = ((MR_Box) (Var_158));
    MR_hl_field(0, STATE_VARIABLE_Acc_1_127, 31) = ((MR_Box) (Var_159));
    MR_hl_field(0, STATE_VARIABLE_Acc_1_127, 32) = ((MR_Box) (Var_160));
    MR_hl_field(0, STATE_VARIABLE_Acc_1_127, 33) = ((MR_Box) (Var_161));
    MR_hl_field(0, STATE_VARIABLE_Acc_1_127, 34) = ((MR_Box) (Var_162));
    MR_hl_field(0, STATE_VARIABLE_Acc_1_127, 35) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  hlds__make_hlds__make_hlds_separate_items__acc_parse_tree_module_src_3_p_0(ParseTreeModuleSrc_79, STATE_VARIABLE_Acc_1_127, &STATE_VARIABLE_Acc_2_164);
  mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_ancestor_int_spec_0), (MR_Word) (&hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__type_ctor_info_item_accumulator_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_3[6]), AncestorIntSpecs_80, ((MR_Box) (STATE_VARIABLE_Acc_2_164)), &conv1_STATE_VARIABLE_Acc_3_166);
  STATE_VARIABLE_Acc_3_166 = ((MR_Word) (conv1_STATE_VARIABLE_Acc_3_166));
  mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_direct_int1_spec_0), (MR_Word) (&hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__type_ctor_info_item_accumulator_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_3[7]), DirectInt1Specs_81, ((MR_Box) (STATE_VARIABLE_Acc_3_166)), &conv3_STATE_VARIABLE_Acc_4_168);
  STATE_VARIABLE_Acc_4_168 = ((MR_Word) (conv3_STATE_VARIABLE_Acc_4_168));
  mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_indirect_int2_spec_0), (MR_Word) (&hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__type_ctor_info_item_accumulator_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_3[8]), IndirectInt2Specs_82, ((MR_Box) (STATE_VARIABLE_Acc_4_168)), &conv5_STATE_VARIABLE_Acc_5_170);
  STATE_VARIABLE_Acc_5_170 = ((MR_Word) (conv5_STATE_VARIABLE_Acc_5_170));
  mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_int_for_opt_spec_0), (MR_Word) (&hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__type_ctor_info_item_accumulator_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_3[9]), IntForOptSpecs_85, ((MR_Box) (STATE_VARIABLE_Acc_5_170)), &conv7_STATE_VARIABLE_Acc_6_172);
  STATE_VARIABLE_Acc_6_172 = ((MR_Word) (conv7_STATE_VARIABLE_Acc_6_172));
  mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_parse_tree_plain_opt_0), (MR_Word) (&hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__type_ctor_info_item_accumulator_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_3[10]), PlainOpts_83, ((MR_Box) (STATE_VARIABLE_Acc_6_172)), &conv9_STATE_VARIABLE_Acc_7_174);
  STATE_VARIABLE_Acc_7_174 = ((MR_Word) (conv9_STATE_VARIABLE_Acc_7_174));
  mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_parse_tree_trans_opt_0), (MR_Word) (&hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__type_ctor_info_item_accumulator_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_3[11]), TransOpts_84, ((MR_Box) (STATE_VARIABLE_Acc_7_174)), &conv11_STATE_VARIABLE_Acc_8_176);
  STATE_VARIABLE_Acc_8_176 = ((MR_Word) (conv11_STATE_VARIABLE_Acc_8_176));
  mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_type_repn_spec_0), (MR_Word) (&hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__type_ctor_info_item_accumulator_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_3[12]), TypeRepnSpecs_86, ((MR_Box) (STATE_VARIABLE_Acc_8_176)), &conv13_STATE_VARIABLE_Acc_9_178);
  STATE_VARIABLE_Acc_9_178 = ((MR_Word) (conv13_STATE_VARIABLE_Acc_9_178));
  AvailsCord_89 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_9_178, 0))));
  FIMsCord_90 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_9_178, 1))));
  TypeDefnsAbstractCord_91 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_9_178, 2))));
  TypeDefnsMercuryCord_92 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_9_178, 3))));
  TypeDefnsForeignCord_93 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_9_178, 4))));
  InstDefnsCord_94 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_9_178, 5))));
  ModeDefnsCord_95 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_9_178, 6))));
  TypeClassesCord_96 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_9_178, 7))));
  IntInstancesCord_97 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_9_178, 8))));
  ImpInstancesCord_98 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_9_178, 9))));
  PredDeclsCord_99 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_9_178, 10))));
  ModeDeclsCord_100 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_9_178, 11))));
  ClausesCord_101 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_9_178, 12))));
  ForeignProcsCord_102 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_9_178, 13))));
  ForeignEnumsCord_103 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_9_178, 14))));
  ForeignExportEnumsCord_104 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_9_178, 15))));
  DeclPragmasCord_105 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_9_178, 16))));
  DeclMarkersCord_106 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_9_178, 17))));
  DeclPragmasTypeSpecConstrCord_107 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_9_178, 18))));
  DeclPragmasTypeSpecCord_108 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_9_178, 19))));
  DeclPragmasInputSpecCord_109 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_9_178, 20))));
  DeclPragmasTermInfoCord_110 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_9_178, 21))));
  DeclPragmasTerm2InfoCord_111 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_9_178, 22))));
  DeclPragmasSharingCord_112 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_9_178, 23))));
  DeclPragmasReuseCord_113 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_9_178, 24))));
  ImplPragmasCord_114 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_9_178, 25))));
  ImplMarkersCord_115 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_9_178, 26))));
  GenPragmasUnusedArgsCord_116 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_9_178, 27))));
  GenPragmasExceptionsCord_117 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_9_178, 28))));
  GenPragmasTrailingCord_118 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_9_178, 29))));
  GenPragmasMMTablingCord_119 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_9_178, 30))));
  PromisesCord_120 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_9_178, 31))));
  InitialisesCord_121 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_9_178, 32))));
  FinalisesCord_122 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_9_178, 33))));
  MutablesCord_123 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_9_178, 34))));
  ModuleIntTypeRepns_124 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_9_178, 35))));
  *Avails_42 = mercury__cord__list_1_f_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[0]), AvailsCord_89);
  *FIMs_43 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), FIMsCord_90);
  *TypeDefnsAbstract_44 = mercury__cord__list_1_f_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[2]), TypeDefnsAbstractCord_91);
  *TypeDefnsMercury_45 = mercury__cord__list_1_f_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[2]), TypeDefnsMercuryCord_92);
  *TypeDefnsForeign_46 = mercury__cord__list_1_f_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[2]), TypeDefnsForeignCord_93);
  *InstDefns_47 = mercury__cord__list_1_f_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[4]), InstDefnsCord_94);
  *ModeDefns_48 = mercury__cord__list_1_f_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[6]), ModeDefnsCord_95);
  *TypeClasses_52 = mercury__cord__list_1_f_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[7]), TypeClassesCord_96);
  *IntInstances_53 = mercury__cord__list_1_f_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[8]), IntInstancesCord_97);
  *ImpInstances_54 = mercury__cord__list_1_f_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[9]), ImpInstancesCord_98);
  *PredDecls_49 = mercury__cord__list_1_f_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[10]), PredDeclsCord_99);
  *ModeDecls_50 = mercury__cord__list_1_f_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[11]), ModeDeclsCord_100);
  *Clauses_76 = mercury__cord__list_1_f_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[12]), ClausesCord_101);
  *ForeignProcs_77 = mercury__cord__list_1_f_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[13]), ForeignProcsCord_102);
  *ForeignEnums_59 = mercury__cord__list_1_f_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_2[0]), ForeignEnumsCord_103);
  *ForeignExportEnums_60 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_export_enum_info_0), ForeignExportEnumsCord_104);
  *DeclPragmas_61 = mercury__cord__list_1_f_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[14]), DeclPragmasCord_105);
  *DeclMarkers_62 = mercury__cord__list_1_f_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[15]), DeclMarkersCord_106);
  *DeclPragmasTypeSpecConstr_63 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_decl_pragma_type_spec_constr_info_0), DeclPragmasTypeSpecConstrCord_107);
  *DeclPragmasTypeSpec_64 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_decl_pragma_type_spec_info_0), DeclPragmasTypeSpecCord_108);
  *DeclPragmasInputSpec_65 = mercury__cord__list_1_f_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[16]), DeclPragmasInputSpecCord_109);
  *DeclPragmasTermInfo_66 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_decl_pragma_termination_info_0), DeclPragmasTermInfoCord_110);
  *DeclPragmasTerm2Info_67 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_decl_pragma_termination2_info_0), DeclPragmasTerm2InfoCord_111);
  *DeclPragmasSharing_68 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_decl_pragma_struct_sharing_info_0), DeclPragmasSharingCord_112);
  *DeclPragmasReuse_69 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_decl_pragma_struct_reuse_info_0), DeclPragmasReuseCord_113);
  *ImplPragmas_70 = mercury__cord__list_1_f_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[17]), ImplPragmasCord_114);
  *ImplMarkers_71 = mercury__cord__list_1_f_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[18]), ImplMarkersCord_115);
  *GenPragmasUnusedArgs_72 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_gen_pragma_unused_args_info_0), GenPragmasUnusedArgsCord_116);
  *GenPragmasExceptions_73 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_gen_pragma_exceptions_info_0), GenPragmasExceptionsCord_117);
  *GenPragmasTrailing_74 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_gen_pragma_trailing_info_0), GenPragmasTrailingCord_118);
  *GenPragmasMMTabling_75 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_gen_pragma_mm_tabling_info_0), GenPragmasMMTablingCord_119);
  *Promises_51 = mercury__cord__list_1_f_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[19]), PromisesCord_120);
  *Initialises_55 = mercury__cord__list_1_f_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[20]), InitialisesCord_121);
  *Finalises_56 = mercury__cord__list_1_f_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[21]), FinalisesCord_122);
  *Mutables_57 = mercury__cord__list_1_f_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[22]), MutablesCord_123);
  Var_180 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__type_ctor_info_int_type_ctor_repns_0));
  mercury__list__foldl_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_3[0]), (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_3[1]), (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_3[13]), ModuleIntTypeRepns_124, ((MR_Box) (Var_180)), &conv15_ModuleIntTypeRepnMap_125);
  ModuleIntTypeRepnMap_125 = ((MR_Word) (conv15_ModuleIntTypeRepnMap_125));
  Var_182 = mercury__cord__init_0_f_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_3[2]));
  mercury__map__foldl_values_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items__hlds__make_hlds__make_hlds_separate_items__type_ctor_info_int_type_ctor_repns_0), (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[24]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_3[14]), ModuleIntTypeRepnMap_125, ((MR_Box) (Var_182)), &conv17_TypeCtorRepnsCord_126);
  TypeCtorRepnsCord_126 = ((MR_Word) (conv17_TypeCtorRepnsCord_126));
  Var_183 = mercury__cord__list_1_f_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_3[2]), TypeCtorRepnsCord_126);
  mercury__map__from_sorted_assoc_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[23]), Var_183, TypeRepnMap_58);
  *InclMap_41 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_79, 2))));
  *IntBadPreds_78 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_79, 22))));
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
  MR_Word STATE_VARIABLE_Acc_0_139,
  MR_Word * STATE_VARIABLE_Acc_140)
{
  MR_bool succeeded;
  MR_Word InclMap_8 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, 2))));
  MR_Word ImportUseMap_9 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, 3))));
  MR_Word IntFIMSpecMap_10 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, 4))));
  MR_Word ImpFIMSpecMap_11 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, 5))));
  MR_Word TypeCtorCheckedMap_14 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, 8))));
  MR_Word InstCtorCheckedMap_15 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, 9))));
  MR_Word ModeCtorCheckedMap_16 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, 10))));
  MR_Word IntTypeClasses_21 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, 15))));
  MR_Word IntInstances_22 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, 16))));
  MR_Word IntPredDecls_23 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, 17))));
  MR_Word IntModeDecls_24 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, 18))));
  MR_Word IntDeclPragmas_25 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, 19))));
  MR_Word IntDeclMarkers_26 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, 20))));
  MR_Word IntPromises_27 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, 21))));
  MR_Word SubTypeClasses_29 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, 23))));
  MR_Word SubInstances_30 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, 24))));
  MR_Word SubPredDecls_31 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, 25))));
  MR_Word SubModeDecls_32 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, 26))));
  MR_Word ImpClauses_33 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, 27))));
  MR_Word ImpForeignProcs_34 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, 28))));
  MR_Word ImpForeignExportEnums_35 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, 29))));
  MR_Word SubDeclPragmas_36 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, 30))));
  MR_Word SubDeclMarkers_37 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, 31))));
  MR_Word ImpImplPragmas_38 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, 32))));
  MR_Word ImpImplMarkers_39 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, 33))));
  MR_Word SubPromises_40 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, 34))));
  MR_Word ImpInitialises_41 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, 35))));
  MR_Word ImpFinalises_42 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, 36))));
  MR_Word SubMutables_43 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, 37))));
  MR_Word SubItemMercuryStatus_48;
  MR_Word SubSectionInfo_49;
  MR_Word AccAvails0_50;
  MR_Word AccFIMs0_51;
  MR_Word AccTypeDefnsAbs0_52;
  MR_Word AccTypeDefnsMer0_53;
  MR_Word AccTypeDefnsFor0_54;
  MR_Word AccInstDefns0_55;
  MR_Word AccModeDefns0_56;
  MR_Word AccTypeClasses0_57;
  MR_Word AccIntInstances0_58;
  MR_Word AccImpInstances0_59;
  MR_Word AccPredDecls0_60;
  MR_Word AccModeDecls0_61;
  MR_Word AccClauses0_62;
  MR_Word AccForeignProcs0_63;
  MR_Word AccForeignEnums0_64;
  MR_Word AccForeignExportEnums0_65;
  MR_Word AccDeclPragmas0_66;
  MR_Word AccDeclMarkers0_67;
  MR_Word AccDeclPragmasTypeSpecConstr0_68;
  MR_Word AccDeclPragmasTypeSpec0_69;
  MR_Word AccDeclPragmasInputSpec0_70;
  MR_Word AccDeclPragmasTermInfo0_71;
  MR_Word AccDeclPragmasTerm2Info0_72;
  MR_Word AccDeclPragmasSharing0_73;
  MR_Word AccDeclPragmasReuse0_74;
  MR_Word AccImplPragmas0_75;
  MR_Word AccImplMarkers0_76;
  MR_Word AccGenPragmasUnusedArgs0_77;
  MR_Word AccGenPragmasExceptions0_78;
  MR_Word AccGenPragmasTrailing0_79;
  MR_Word AccGenPragmasMMTabling0_80;
  MR_Word AccPromises0_81;
  MR_Word AccInitialises0_82;
  MR_Word AccFinalises0_83;
  MR_Word AccMutables0_84;
  MR_Word AccTypeRepns0_85;
  MR_Word IntAvails_86;
  MR_Word ImpAvails_87;
  MR_Word AccAvails1_88;
  MR_Word AccAvails_89;
  MR_Word IntFIMs_90;
  MR_Word ImpFIMs_91;
  MR_Word AccFIMs_92;
  MR_Word IntTypeDefns_93;
  MR_Word SubTypeDefns_94;
  MR_Word SubForeignEnums_95;
  MR_Word IntTypeDefnsAbs_96;
  MR_Word IntTypeDefnsMer_97;
  MR_Word IntTypeDefnsFor_98;
  MR_Word SubTypeDefnsAbs_99;
  MR_Word SubTypeDefnsMer_100;
  MR_Word SubTypeDefnsFor_101;
  MR_Word AccTypeDefnsAbs1_102;
  MR_Word AccTypeDefnsAbs_103;
  MR_Word AccTypeDefnsMer1_104;
  MR_Word AccTypeDefnsMer_105;
  MR_Word AccTypeDefnsFor1_106;
  MR_Word AccTypeDefnsFor_107;
  MR_Word IntInstDefns_108;
  MR_Word SubInstDefns_109;
  MR_Word AccInstDefns1_110;
  MR_Word AccInstDefns_111;
  MR_Word IntModeDefns_112;
  MR_Word SubModeDefns_113;
  MR_Word AccModeDefns1_114;
  MR_Word AccModeDefns_115;
  MR_Word AccTypeClasses1_116;
  MR_Word AccTypeClasses_117;
  MR_Word AccIntInstances_118;
  MR_Word AccImpInstances_119;
  MR_Word AccPredDecls1_120;
  MR_Word AccPredDecls_121;
  MR_Word AccModeDecls1_122;
  MR_Word AccModeDecls_123;
  MR_Word AccClauses_124;
  MR_Word AccForeignProcs_125;
  MR_Word AccForeignEnums_126;
  MR_Word AccForeignExportEnums_127;
  MR_Word AccDeclPragmas1_128;
  MR_Word AccDeclMarkers1_129;
  MR_Word AccDeclPragmas_130;
  MR_Word AccDeclMarkers_131;
  MR_Word AccImplPragmas_132;
  MR_Word AccImplMarkers_133;
  MR_Word AccPromises1_134;
  MR_Word AccPromises_135;
  MR_Word AccInitialises_136;
  MR_Word AccFinalises_137;
  MR_Word AccMutables_138;
  MR_Word Var_149;
  MR_Word Var_151;
  MR_Word Var_152;
  MR_Word Var_159;

  succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_include_module_info_0), InclMap_8);
  if (succeeded)
  {
    SubItemMercuryStatus_48 = (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_4[1]);
    SubSectionInfo_49 = (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[60]);
  }
  else
  {
    SubItemMercuryStatus_48 = (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_4[2]);
    SubSectionInfo_49 = (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[61]);
  }
  AccAvails0_50 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_139, 0))));
  AccFIMs0_51 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_139, 1))));
  AccTypeDefnsAbs0_52 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_139, 2))));
  AccTypeDefnsMer0_53 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_139, 3))));
  AccTypeDefnsFor0_54 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_139, 4))));
  AccInstDefns0_55 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_139, 5))));
  AccModeDefns0_56 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_139, 6))));
  AccTypeClasses0_57 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_139, 7))));
  AccIntInstances0_58 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_139, 8))));
  AccImpInstances0_59 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_139, 9))));
  AccPredDecls0_60 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_139, 10))));
  AccModeDecls0_61 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_139, 11))));
  AccClauses0_62 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_139, 12))));
  AccForeignProcs0_63 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_139, 13))));
  AccForeignEnums0_64 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_139, 14))));
  AccForeignExportEnums0_65 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_139, 15))));
  AccDeclPragmas0_66 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_139, 16))));
  AccDeclMarkers0_67 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_139, 17))));
  AccDeclPragmasTypeSpecConstr0_68 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_139, 18))));
  AccDeclPragmasTypeSpec0_69 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_139, 19))));
  AccDeclPragmasInputSpec0_70 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_139, 20))));
  AccDeclPragmasTermInfo0_71 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_139, 21))));
  AccDeclPragmasTerm2Info0_72 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_139, 22))));
  AccDeclPragmasSharing0_73 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_139, 23))));
  AccDeclPragmasReuse0_74 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_139, 24))));
  AccImplPragmas0_75 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_139, 25))));
  AccImplMarkers0_76 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_139, 26))));
  AccGenPragmasUnusedArgs0_77 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_139, 27))));
  AccGenPragmasExceptions0_78 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_139, 28))));
  AccGenPragmasTrailing0_79 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_139, 29))));
  AccGenPragmasMMTabling0_80 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_139, 30))));
  AccPromises0_81 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_139, 31))));
  AccInitialises0_82 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_139, 32))));
  AccFinalises0_83 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_139, 33))));
  AccMutables0_84 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_139, 34))));
  AccTypeRepns0_85 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_139, 35))));
  parse_tree__convert_import_use__import_and_or_use_map_to_item_avails_4_p_0((MR_Integer) 1, ImportUseMap_9, &IntAvails_86, &ImpAvails_87);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_avails_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_4[0]), IntAvails_86, AccAvails0_50, &AccAvails1_88);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_avails_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_4[1]), ImpAvails_87, AccAvails1_88, &AccAvails_89);
  Var_149 = mercury__map__keys_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), IntFIMSpecMap_10);
  IntFIMs_90 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_3[4]), Var_149);
  Var_151 = mercury__map__keys_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), ImpFIMSpecMap_11);
  ImpFIMs_91 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_3[5]), Var_151);
  Var_152 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), IntFIMs_90, ImpFIMs_91);
  mercury__cord__snoc_list_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), Var_152, AccFIMs0_51, &AccFIMs_92);
  parse_tree__item_util__type_ctor_checked_map_get_src_defns_4_p_0(TypeCtorCheckedMap_14, &IntTypeDefns_93, &SubTypeDefns_94, &SubForeignEnums_95);
  hlds__make_hlds__make_hlds_separate_items__separate_type_defns_abs_mer_for_7_p_0(IntTypeDefns_93, (MR_Word) ((MR_Unsigned) 0U), &IntTypeDefnsAbs_96, (MR_Word) ((MR_Unsigned) 0U), &IntTypeDefnsMer_97, (MR_Word) ((MR_Unsigned) 0U), &IntTypeDefnsFor_98);
  hlds__make_hlds__make_hlds_separate_items__separate_type_defns_abs_mer_for_7_p_0(SubTypeDefns_94, (MR_Word) ((MR_Unsigned) 0U), &SubTypeDefnsAbs_99, (MR_Word) ((MR_Unsigned) 0U), &SubTypeDefnsMer_100, (MR_Word) ((MR_Unsigned) 0U), &SubTypeDefnsFor_101);
  hlds__make_hlds__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[59]), IntTypeDefnsAbs_96, AccTypeDefnsAbs0_52, &AccTypeDefnsAbs1_102);
  hlds__make_hlds__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[1]), SubSectionInfo_49, SubTypeDefnsAbs_99, AccTypeDefnsAbs1_102, &AccTypeDefnsAbs_103);
  hlds__make_hlds__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[59]), IntTypeDefnsMer_97, AccTypeDefnsMer0_53, &AccTypeDefnsMer1_104);
  hlds__make_hlds__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[1]), SubSectionInfo_49, SubTypeDefnsMer_100, AccTypeDefnsMer1_104, &AccTypeDefnsMer_105);
  hlds__make_hlds__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[59]), IntTypeDefnsFor_98, AccTypeDefnsFor0_54, &AccTypeDefnsFor1_106);
  hlds__make_hlds__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[1]), SubSectionInfo_49, SubTypeDefnsFor_101, AccTypeDefnsFor1_106, &AccTypeDefnsFor_107);
  parse_tree__item_util__inst_ctor_checked_map_get_src_defns_3_p_0(InstCtorCheckedMap_15, &IntInstDefns_108, &SubInstDefns_109);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[3]), (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_4[0]), IntInstDefns_108, AccInstDefns0_55, &AccInstDefns1_110);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[3]), SubItemMercuryStatus_48, SubInstDefns_109, AccInstDefns1_110, &AccInstDefns_111);
  parse_tree__item_util__mode_ctor_checked_map_get_src_defns_3_p_0(ModeCtorCheckedMap_16, &IntModeDefns_112, &SubModeDefns_113);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[5]), (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_4[0]), IntModeDefns_112, AccModeDefns0_56, &AccModeDefns1_114);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[5]), SubItemMercuryStatus_48, SubModeDefns_113, AccModeDefns1_114, &AccModeDefns_115);
  hlds__make_hlds__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[59]), IntTypeClasses_21, AccTypeClasses0_57, &AccTypeClasses1_116);
  hlds__make_hlds__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), SubSectionInfo_49, SubTypeClasses_29, AccTypeClasses1_116, &AccTypeClasses_117);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_abstract_instance_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_4[0]), IntInstances_22, AccIntInstances0_58, &AccIntInstances_118);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), SubItemMercuryStatus_48, SubInstances_30, AccImpInstances0_59, &AccImpInstances_119);
  hlds__make_hlds__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_1[59]), IntPredDecls_23, AccPredDecls0_60, &AccPredDecls1_120);
  hlds__make_hlds__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), SubSectionInfo_49, SubPredDecls_31, AccPredDecls1_120, &AccPredDecls_121);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_4[0]), IntModeDecls_24, AccModeDecls0_61, &AccModeDecls1_122);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), SubItemMercuryStatus_48, SubModeDecls_32, AccModeDecls1_122, &AccModeDecls_123);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_4[1]), ImpClauses_33, AccClauses0_62, &AccClauses_124);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_proc_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_4[1]), ImpForeignProcs_34, AccForeignProcs0_63, &AccForeignProcs_125);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_tuple_list_4_p_0((MR_Word) (&parse_tree__prog_item_type__parse_tree__prog_item_type__type_ctor_info_item_foreign_enum_info_0), SubItemMercuryStatus_48, SubForeignEnums_95, AccForeignEnums0_64, &AccForeignEnums_126);
  Var_159 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_export_enum_info_0), ImpForeignExportEnums_35);
  AccForeignExportEnums_127 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_export_enum_info_0), AccForeignExportEnums0_65, Var_159);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_item_decl_pragma_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_4[0]), IntDeclPragmas_25, AccDeclPragmas0_66, &AccDeclPragmas1_128);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_item_decl_marker_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_4[0]), IntDeclMarkers_26, AccDeclMarkers0_67, &AccDeclMarkers1_129);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_item_decl_pragma_info_0), SubItemMercuryStatus_48, SubDeclPragmas_36, AccDeclPragmas1_128, &AccDeclPragmas_130);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_item_decl_marker_info_0), SubItemMercuryStatus_48, SubDeclMarkers_37, AccDeclMarkers1_129, &AccDeclMarkers_131);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_item_impl_pragma_info_0), SubItemMercuryStatus_48, ImpImplPragmas_38, AccImplPragmas0_75, &AccImplPragmas_132);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_item_impl_marker_info_0), SubItemMercuryStatus_48, ImpImplMarkers_39, AccImplMarkers0_76, &AccImplMarkers_133);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_4[0]), IntPromises_27, AccPromises0_81, &AccPromises1_134);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), SubItemMercuryStatus_48, SubPromises_40, AccPromises1_134, &AccPromises_135);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_initialise_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_4[1]), ImpInitialises_41, AccInitialises0_82, &AccInitialises_136);
  hlds__make_hlds__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_finalise_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_separate_items_scalar_common_4[1]), ImpFinalises_42, AccFinalises0_83, &AccFinalises_137);
  hlds__make_hlds__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0), SubSectionInfo_49, SubMutables_43, AccMutables0_84, &AccMutables_138);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (36 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Acc_140 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (AccAvails_89));
    MR_hl_field(0, base, 1) = ((MR_Box) (AccFIMs_92));
    MR_hl_field(0, base, 2) = ((MR_Box) (AccTypeDefnsAbs_103));
    MR_hl_field(0, base, 3) = ((MR_Box) (AccTypeDefnsMer_105));
    MR_hl_field(0, base, 4) = ((MR_Box) (AccTypeDefnsFor_107));
    MR_hl_field(0, base, 5) = ((MR_Box) (AccInstDefns_111));
    MR_hl_field(0, base, 6) = ((MR_Box) (AccModeDefns_115));
    MR_hl_field(0, base, 7) = ((MR_Box) (AccTypeClasses_117));
    MR_hl_field(0, base, 8) = ((MR_Box) (AccIntInstances_118));
    MR_hl_field(0, base, 9) = ((MR_Box) (AccImpInstances_119));
    MR_hl_field(0, base, 10) = ((MR_Box) (AccPredDecls_121));
    MR_hl_field(0, base, 11) = ((MR_Box) (AccModeDecls_123));
    MR_hl_field(0, base, 12) = ((MR_Box) (AccClauses_124));
    MR_hl_field(0, base, 13) = ((MR_Box) (AccForeignProcs_125));
    MR_hl_field(0, base, 14) = ((MR_Box) (AccForeignEnums_126));
    MR_hl_field(0, base, 15) = ((MR_Box) (AccForeignExportEnums_127));
    MR_hl_field(0, base, 16) = ((MR_Box) (AccDeclPragmas_130));
    MR_hl_field(0, base, 17) = ((MR_Box) (AccDeclMarkers_131));
    MR_hl_field(0, base, 18) = ((MR_Box) (AccDeclPragmasTypeSpecConstr0_68));
    MR_hl_field(0, base, 19) = ((MR_Box) (AccDeclPragmasTypeSpec0_69));
    MR_hl_field(0, base, 20) = ((MR_Box) (AccDeclPragmasInputSpec0_70));
    MR_hl_field(0, base, 21) = ((MR_Box) (AccDeclPragmasTermInfo0_71));
    MR_hl_field(0, base, 22) = ((MR_Box) (AccDeclPragmasTerm2Info0_72));
    MR_hl_field(0, base, 23) = ((MR_Box) (AccDeclPragmasSharing0_73));
    MR_hl_field(0, base, 24) = ((MR_Box) (AccDeclPragmasReuse0_74));
    MR_hl_field(0, base, 25) = ((MR_Box) (AccImplPragmas_132));
    MR_hl_field(0, base, 26) = ((MR_Box) (AccImplMarkers_133));
    MR_hl_field(0, base, 27) = ((MR_Box) (AccGenPragmasUnusedArgs0_77));
    MR_hl_field(0, base, 28) = ((MR_Box) (AccGenPragmasExceptions0_78));
    MR_hl_field(0, base, 29) = ((MR_Box) (AccGenPragmasTrailing0_79));
    MR_hl_field(0, base, 30) = ((MR_Box) (AccGenPragmasMMTabling0_80));
    MR_hl_field(0, base, 31) = ((MR_Box) (AccPromises_135));
    MR_hl_field(0, base, 32) = ((MR_Box) (AccInitialises_136));
    MR_hl_field(0, base, 33) = ((MR_Box) (AccFinalises_137));
    MR_hl_field(0, base, 34) = ((MR_Box) (AccMutables_138));
    MR_hl_field(0, base, 35) = ((MR_Box) (AccTypeRepns0_85));
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
      MR_Box Item_10 = (MR_hl_field(1, HeadVar__2_2, 0));
      MR_Word Items_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Tuple Var_15;
      MR_Word STATE_VARIABLE_ImsItems_1_16;
      MR_Word conv0_STATE_VARIABLE_ImsItems_1_16;
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
      mercury__cord__snoc_3_p_0(TypeInfo_20_20, ((MR_Box) (Var_15)), (MR_Word) (STATE_VARIABLE_ImsItems_0_3), &conv0_STATE_VARIABLE_ImsItems_1_16);
      STATE_VARIABLE_ImsItems_1_16 = (MR_Word) (conv0_STATE_VARIABLE_ImsItems_1_16);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Items_11;
      next_value_of_STATE_VARIABLE_ImsItems_0_3 = STATE_VARIABLE_ImsItems_1_16;
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
    MR_Word Item_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Items_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word TypeDefn_24;
    MR_Word STATE_VARIABLE_Abs_1_40;
    MR_Word STATE_VARIABLE_Mer_1_41;
    MR_Word STATE_VARIABLE_For_1_42;

    hlds__make_hlds__make_hlds_separate_items__separate_type_defns_abs_mer_for_7_p_0(Items_18, STATE_VARIABLE_Abs_0_2, &STATE_VARIABLE_Abs_1_40, STATE_VARIABLE_Mer_0_4, &STATE_VARIABLE_Mer_1_41, STATE_VARIABLE_For_0_6, &STATE_VARIABLE_For_1_42);
    TypeDefn_24 = ((MR_Word) ((MR_hl_field(0, Item_17, 2))));
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
            MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Mer_1_41));
          }
          *STATE_VARIABLE_Abs_3 = STATE_VARIABLE_Abs_1_40;
          *STATE_VARIABLE_For_7 = STATE_VARIABLE_For_1_42;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, TypeDefn_24, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_Mer_5 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Item_17));
                MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Mer_1_41));
              }
              *STATE_VARIABLE_Abs_3 = STATE_VARIABLE_Abs_1_40;
              *STATE_VARIABLE_For_7 = STATE_VARIABLE_For_1_42;
            }
            break;
          case (MR_Integer) 1:
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_Abs_3 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Item_17));
                MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Abs_1_40));
              }
              *STATE_VARIABLE_Mer_5 = STATE_VARIABLE_Mer_1_41;
              *STATE_VARIABLE_For_7 = STATE_VARIABLE_For_1_42;
            }
            break;
          case (MR_Integer) 2:
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_For_7 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Item_17));
                MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_For_1_42));
              }
              *STATE_VARIABLE_Abs_3 = STATE_VARIABLE_Abs_1_40;
              *STATE_VARIABLE_Mer_5 = STATE_VARIABLE_Mer_1_41;
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
