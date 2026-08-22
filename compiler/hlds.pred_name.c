/*
** Automatically generated from `pred_name.m'
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


// :- module hlds.pred_name.
// :- implementation.

/*
INIT mercury__hlds__pred_name__init
ENDINIT
*/

#include "hlds.pred_name.mih"


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
#include "hlds.hlds_data.mih"
#include "hlds.hlds_module.mih"
#include "hlds.pred_proc_id.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.compiler_util.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.indent.mih"
#include "libs.rat.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.parse_tree_out_misc.mih"
#include "parse_tree.parse_tree_out_sym_name.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.parse_tree_out_type.mih"
#include "parse_tree.parse_tree_output.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_rare.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_item_pragma.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 hlds__pred_name__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__pred_name__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_EnumFunctorDesc hlds__pred_name__hlds__pred_name__enum_functor_desc_aux_tabling_maybe_single_proc_0_0;

static const MR_EnumFunctorDesc hlds__pred_name__hlds__pred_name__enum_functor_desc_aux_tabling_maybe_single_proc_0_1;

static const MR_EnumFunctorDescPtr hlds__pred_name__hlds__pred_name__enum_ordinal_ordered_aux_tabling_maybe_single_proc_0[2];

static const MR_EnumFunctorDescPtr hlds__pred_name__hlds__pred_name__enum_name_ordered_aux_tabling_maybe_single_proc_0[2];

static const MR_Integer hlds__pred_name__hlds__pred_name__functor_number_map_aux_tabling_maybe_single_proc_0[2];

static const MR_EnumFunctorDesc hlds__pred_name__hlds__pred_name__enum_functor_desc_aux_tabling_pred_kind_0_0;

static const MR_EnumFunctorDesc hlds__pred_name__hlds__pred_name__enum_functor_desc_aux_tabling_pred_kind_0_1;

static const MR_EnumFunctorDescPtr hlds__pred_name__hlds__pred_name__enum_ordinal_ordered_aux_tabling_pred_kind_0[2];

static const MR_EnumFunctorDescPtr hlds__pred_name__hlds__pred_name__enum_name_ordered_aux_tabling_pred_kind_0[2];

static const MR_Integer hlds__pred_name__hlds__pred_name__functor_number_map_aux_tabling_pred_kind_0[2];

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_compiler_made_0_0[2];

static const MR_DuArgLocn hlds__pred_name__hlds__pred_name__field_locns_compiler_made_0_0[2];

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_compiler_made_0_0;

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_compiler_made_0_1[2];

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_compiler_made_0_1;

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_compiler_made_0_2[2];

static const MR_DuArgLocn hlds__pred_name__hlds__pred_name__field_locns_compiler_made_0_2[2];

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_compiler_made_0_2;

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_compiler_made_0_3[2];

static const MR_DuArgLocn hlds__pred_name__hlds__pred_name__field_locns_compiler_made_0_3[2];

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_compiler_made_0_3;

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_compiler_made_0_4[3];

static const MR_DuArgLocn hlds__pred_name__hlds__pred_name__field_locns_compiler_made_0_4[3];

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_compiler_made_0_4;

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_compiler_made_0_5[2];

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_compiler_made_0_5;

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_compiler_made_0_6[2];

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_compiler_made_0_6;

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_stag_ordered_compiler_made_0_0[1];

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_stag_ordered_compiler_made_0_1[1];

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_stag_ordered_compiler_made_0_2[1];

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_stag_ordered_compiler_made_0_3[4];

static const MR_DuPtagLayout hlds__pred_name__hlds__pred_name__du_ptag_ordered_compiler_made_0[4];

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_name_ordered_compiler_made_0[7];

static const MR_Integer hlds__pred_name__hlds__pred_name__functor_number_map_compiler_made_0[7];

static const MR_FA_TypeInfo_Struct1 hlds__pred_name__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__pred_name__list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0;

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_instance_method_constraints_0_0[4];

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_instance_method_constraints_0_0;

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_stag_ordered_instance_method_constraints_0_0[1];

static const MR_DuPtagLayout hlds__pred_name__hlds__pred_name__du_ptag_ordered_instance_method_constraints_0[1];

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_name_ordered_instance_method_constraints_0[1];

static const MR_Integer hlds__pred_name__hlds__pred_name__functor_number_map_instance_method_constraints_0[1];

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_line_number_and_counter_0_0[2];

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_line_number_and_counter_0_0;

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_stag_ordered_line_number_and_counter_0_0[1];

static const MR_DuPtagLayout hlds__pred_name__hlds__pred_name__du_ptag_ordered_line_number_and_counter_0[1];

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_name_ordered_line_number_and_counter_0[1];

static const MR_Integer hlds__pred_name__hlds__pred_name__functor_number_map_line_number_and_counter_0[1];

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_pred_origin_0_0[1];

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_pred_origin_0_0;

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_pred_origin_0_1[1];

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_pred_origin_0_1;

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_pred_origin_0_2[3];

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_pred_origin_0_2;

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_pred_origin_0_3[4];

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_pred_origin_0_3;

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_stag_ordered_pred_origin_0_0[1];

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_stag_ordered_pred_origin_0_1[1];

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_stag_ordered_pred_origin_0_2[1];

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_stag_ordered_pred_origin_0_3[1];

static const MR_DuPtagLayout hlds__pred_name__hlds__pred_name__du_ptag_ordered_pred_origin_0[4];

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_name_ordered_pred_origin_0[4];

static const MR_Integer hlds__pred_name__hlds__pred_name__functor_number_map_pred_origin_0[4];

static const MR_FA_TypeInfo_Struct2 hlds__pred_name__pair__ti_pair_2builtin__type_ctor_info_int_0parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__pred_name__one_or_more__ti_one_or_more_1pair__ti_pair_2builtin__type_ctor_info_int_0parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_pred_transform_0_0[1];

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_pred_transform_0_0;

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_pred_transform_0_1[1];

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_pred_transform_0_1;

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_pred_transform_0_2;

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_pred_transform_0_3[1];

static const MR_DuArgLocn hlds__pred_name__hlds__pred_name__field_locns_pred_transform_0_3[1];

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_pred_transform_0_3;

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_pred_transform_0_4;

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_stag_ordered_pred_transform_0_0[2];

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_stag_ordered_pred_transform_0_1[1];

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_stag_ordered_pred_transform_0_2[1];

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_stag_ordered_pred_transform_0_3[1];

static const MR_DuPtagLayout hlds__pred_name__hlds__pred_name__du_ptag_ordered_pred_transform_0[4];

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_name_ordered_pred_transform_0[5];

static const MR_Integer hlds__pred_name__hlds__pred_name__functor_number_map_pred_transform_0[5];

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_proc_transform_0_0[2];

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_proc_transform_0_0;

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_proc_transform_0_1[1];

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_proc_transform_0_1;

static const MR_FA_TypeInfo_Struct1 hlds__pred_name__list__ti_list_1builtin__type_ctor_info_int_0;

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_proc_transform_0_2[2];

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_proc_transform_0_2;

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_proc_transform_0_3[1];

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_proc_transform_0_3;

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_proc_transform_0_4[2];

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_proc_transform_0_4;

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_proc_transform_0_5[2];

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_proc_transform_0_5;

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_proc_transform_0_6[2];

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_proc_transform_0_6;

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_proc_transform_0_7[1];

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_proc_transform_0_7;

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_proc_transform_0_8;

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_proc_transform_0_9[2];

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_proc_transform_0_9;

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_proc_transform_0_10;

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_proc_transform_0_11;

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_proc_transform_0_12;

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_stag_ordered_proc_transform_0_0[4];

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_stag_ordered_proc_transform_0_1[1];

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_stag_ordered_proc_transform_0_2[1];

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_stag_ordered_proc_transform_0_3[7];

static const MR_DuPtagLayout hlds__pred_name__hlds__pred_name__du_ptag_ordered_proc_transform_0[4];

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_name_ordered_proc_transform_0[13];

static const MR_Integer hlds__pred_name__hlds__pred_name__functor_number_map_proc_transform_0[13];

static const MR_EnumFunctorDesc hlds__pred_name__hlds__pred_name__enum_functor_desc_stm_clone_kind_0_0;

static const MR_EnumFunctorDesc hlds__pred_name__hlds__pred_name__enum_functor_desc_stm_clone_kind_0_1;

static const MR_EnumFunctorDesc hlds__pred_name__hlds__pred_name__enum_functor_desc_stm_clone_kind_0_2;

static const MR_EnumFunctorDesc hlds__pred_name__hlds__pred_name__enum_functor_desc_stm_clone_kind_0_3;

static const MR_EnumFunctorDesc hlds__pred_name__hlds__pred_name__enum_functor_desc_stm_clone_kind_0_4;

static const MR_EnumFunctorDescPtr hlds__pred_name__hlds__pred_name__enum_ordinal_ordered_stm_clone_kind_0[5];

static const MR_EnumFunctorDescPtr hlds__pred_name__hlds__pred_name__enum_name_ordered_stm_clone_kind_0[5];

static const MR_Integer hlds__pred_name__hlds__pred_name__functor_number_map_stm_clone_kind_0[5];

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_transform_name_0_0[2];

static const MR_DuArgLocn hlds__pred_name__hlds__pred_name__field_locns_transform_name_0_0[2];

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_transform_name_0_0;

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_transform_name_0_1[4];

static const MR_DuArgLocn hlds__pred_name__hlds__pred_name__field_locns_transform_name_0_1[4];

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_transform_name_0_1;

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_transform_name_0_2[5];

static const MR_DuArgLocn hlds__pred_name__hlds__pred_name__field_locns_transform_name_0_2[5];

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_transform_name_0_2;

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_transform_name_0_3[2];

static const MR_DuArgLocn hlds__pred_name__hlds__pred_name__field_locns_transform_name_0_3[2];

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_transform_name_0_3;

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_transform_name_0_4[2];

static const MR_DuArgLocn hlds__pred_name__hlds__pred_name__field_locns_transform_name_0_4[2];

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_transform_name_0_4;

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_transform_name_0_5[2];

static const MR_DuArgLocn hlds__pred_name__hlds__pred_name__field_locns_transform_name_0_5[2];

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_transform_name_0_5;

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_transform_name_0_6[3];

static const MR_DuArgLocn hlds__pred_name__hlds__pred_name__field_locns_transform_name_0_6[3];

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_transform_name_0_6;

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_transform_name_0_7[3];

static const MR_DuArgLocn hlds__pred_name__hlds__pred_name__field_locns_transform_name_0_7[3];

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_transform_name_0_7;

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_transform_name_0_8[3];

static const MR_DuArgLocn hlds__pred_name__hlds__pred_name__field_locns_transform_name_0_8[3];

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_transform_name_0_8;

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_transform_name_0_9[2];

static const MR_DuArgLocn hlds__pred_name__hlds__pred_name__field_locns_transform_name_0_9[2];

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_transform_name_0_9;

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_transform_name_0_10[1];

static const MR_DuArgLocn hlds__pred_name__hlds__pred_name__field_locns_transform_name_0_10[1];

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_transform_name_0_10;

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_transform_name_0_11[3];

static const MR_DuArgLocn hlds__pred_name__hlds__pred_name__field_locns_transform_name_0_11[3];

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_transform_name_0_11;

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_transform_name_0_12[2];

static const MR_DuArgLocn hlds__pred_name__hlds__pred_name__field_locns_transform_name_0_12[2];

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_transform_name_0_12;

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_transform_name_0_13[2];

static const MR_DuArgLocn hlds__pred_name__hlds__pred_name__field_locns_transform_name_0_13[2];

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_transform_name_0_13;

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_transform_name_0_14[3];

static const MR_DuArgLocn hlds__pred_name__hlds__pred_name__field_locns_transform_name_0_14[3];

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_transform_name_0_14;

static const MR_FA_TypeInfo_Struct1 hlds__pred_name__maybe__ti_maybe_1mdbcomp__prim_data__type_ctor_info_pred_or_func_0;

static const MR_FA_TypeInfo_Struct1 hlds__pred_name__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__pred_name__one_or_more__ti_one_or_more_1parse_tree__prog_data_pragma__type_ctor_info_tvar_subst_0;

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_transform_name_0_15[3];

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_transform_name_0_15;

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_transform_name_0_16[1];

static const MR_DuArgLocn hlds__pred_name__hlds__pred_name__field_locns_transform_name_0_16[1];

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_transform_name_0_16;

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_transform_name_0_17[2];

static const MR_DuArgLocn hlds__pred_name__hlds__pred_name__field_locns_transform_name_0_17[2];

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_transform_name_0_17;

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_transform_name_0_18[5];

static const MR_DuArgLocn hlds__pred_name__hlds__pred_name__field_locns_transform_name_0_18[5];

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_transform_name_0_18;

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_transform_name_0_19[3];

static const MR_DuArgLocn hlds__pred_name__hlds__pred_name__field_locns_transform_name_0_19[3];

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_transform_name_0_19;

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_stag_ordered_transform_name_0_0[1];

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_stag_ordered_transform_name_0_1[1];

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_stag_ordered_transform_name_0_2[1];

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_stag_ordered_transform_name_0_3[17];

static const MR_DuPtagLayout hlds__pred_name__hlds__pred_name__du_ptag_ordered_transform_name_0[4];

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_name_ordered_transform_name_0[20];

static const MR_Integer hlds__pred_name__hlds__pred_name__functor_number_map_transform_name_0[20];

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_user_made_0_0[3];

static const MR_DuArgLocn hlds__pred_name__hlds__pred_name__field_locns_user_made_0_0[3];

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_user_made_0_0;

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_user_made_0_1[3];

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_user_made_0_1;

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_user_made_0_2[2];

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_user_made_0_2;

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_user_made_0_3[2];

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_user_made_0_3;

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_user_made_0_4[3];

static const MR_DuArgLocn hlds__pred_name__hlds__pred_name__field_locns_user_made_0_4[3];

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_user_made_0_4;

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_stag_ordered_user_made_0_0[1];

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_stag_ordered_user_made_0_1[1];

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_stag_ordered_user_made_0_2[1];

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_stag_ordered_user_made_0_3[2];

static const MR_DuPtagLayout hlds__pred_name__hlds__pred_name__du_ptag_ordered_user_made_0[4];

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_name_ordered_user_made_0[5];

static const MR_Integer hlds__pred_name__hlds__pred_name__functor_number_map_user_made_0[5];

static const MR_EnumFunctorDesc hlds__pred_name__hlds__pred_name__enum_functor_desc_user_or_dev_0_0;

static const MR_EnumFunctorDesc hlds__pred_name__hlds__pred_name__enum_functor_desc_user_or_dev_0_1;

static const MR_EnumFunctorDescPtr hlds__pred_name__hlds__pred_name__enum_ordinal_ordered_user_or_dev_0[2];

static const MR_EnumFunctorDescPtr hlds__pred_name__hlds__pred_name__enum_name_ordered_user_or_dev_0[2];

static const MR_Integer hlds__pred_name__hlds__pred_name__functor_number_map_user_or_dev_0[2];

static MR_String MR_CALL 
hlds__pred_name__IntroducedFrom__func__type_to_txq_mrtq_stuffed_string__1929__3_1_f_0(
  MR_String LambdaHeadVar__1_102);

static MR_String MR_CALL 
hlds__pred_name__IntroducedFrom__func__type_to_txq_mrtq_stuffed_string__1929__2_1_f_0(
  MR_String LambdaHeadVar__1_82);

static MR_String MR_CALL 
hlds__pred_name__IntroducedFrom__func__type_to_txq_mrtq_stuffed_string__1929__1_1_f_0(
  MR_String LambdaHeadVar__1_47);

static MR_String MR_CALL 
hlds__pred_name__IntroducedFrom__func__layout_origin_name_new__1623__1_1_f_0(
  MR_String LambdaHeadVar__1_80);

static void MR_CALL 
hlds__pred_name____Compare____user_or_dev_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__pred_name____Unify____user_or_dev_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_String MR_CALL 
hlds__pred_name__subst_to_mrtq_stuffed_string_1_f_0(
  MR_Word HeadVar__1_1);

static MR_Box MR_CALL 
hlds__pred_name__type_to_txq_mrtq_stuffed_string_1_f_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__pred_name__type_to_txq_mrtq_stuffed_string_1_f_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__pred_name__type_to_txq_mrtq_stuffed_string_1_f_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__pred_name__type_to_txq_mrtq_stuffed_string_1_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__pred_name__type_to_txq_mrtq_stuffed_string_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__pred_name__type_to_txq_mrtq_stuffed_string_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_String MR_CALL 
hlds__pred_name__type_to_txq_mrtq_stuffed_string_1_f_0(
  MR_Word Type_3);

static MR_String MR_CALL 
hlds__pred_name__subst_to_name_1_f_0(
  MR_Word HeadVar__1_1);

static MR_String MR_CALL 
hlds__pred_name__dump_subst_1_f_0(
  MR_Word HeadVar__1_1);

static MR_String MR_CALL 
hlds__pred_name__type_var_subst_to_string_2_f_0(
  MR_Word VarSet_4,
  MR_Word HeadVar__2_2);

static MR_String MR_CALL 
hlds__pred_name__dump_origin_constraint_3_f_0(
  MR_Word TVarSet_5,
  MR_Word VarNamePrint_6,
  MR_Word Constraint_7);

static void MR_CALL 
hlds__pred_name__instance_type_ctor_to_string_2_p_0(
  MR_Word Type_3,
  MR_String * Str_4);

static MR_Box MR_CALL 
hlds__pred_name__layout_origin_name_new_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__pred_name__layout_origin_name_new_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_String MR_CALL 
hlds__pred_name__mrtq_stuff_1_f_0(
  MR_String Str_3);

static MR_String MR_CALL 
hlds__pred_name__mrtq_stuff_sym_name_1_f_0(
  MR_Word SymName_3);

static MR_String MR_CALL 
hlds__pred_name__layout_proc_transform_name_new_2_f_0(
  MR_Word ProcTransform_4,
  MR_Integer ProcId_5);

static MR_Box MR_CALL 
hlds__pred_name__layout_pred_transform_name_new_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_String MR_CALL 
hlds__pred_name__layout_pred_transform_name_new_1_f_0(
  MR_Word PredTransform_3);

static MR_Box MR_CALL 
hlds__pred_name__layout_proc_transform_name_2_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__pred_name__layout_proc_transform_name_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_String MR_CALL 
hlds__pred_name__layout_proc_transform_name_2_f_0(
  MR_Word ProcTransform_4,
  MR_Integer ProcId_5);

static MR_String MR_CALL 
hlds__pred_name__underscore_ints_to_string_1_f_0(
  MR_Word HeadVar__1_1);

static MR_Box MR_CALL 
hlds__pred_name__layout_pred_transform_name_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_String MR_CALL 
hlds__pred_name__layout_pred_transform_name_1_f_0(
  MR_Word PredTransform_3);

static void MR_CALL 
hlds__pred_name__dump_transformed_origin_5_p_0(
  MR_Word TVarSet_6,
  MR_Word VarNamePrint_7,
  MR_Word Origin_8,
  MR_Integer * TransformsPrinted_9,
  MR_Word * Strs_10);

static MR_Box MR_CALL 
hlds__pred_name__dump_origin_constraints_4_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_String MR_CALL 
hlds__pred_name__dump_origin_constraints_4_f_0(
  MR_String Msg_6,
  MR_Word TVarSet_7,
  MR_Word VarNamePrint_8,
  MR_Word Constraints_9);

static MR_String MR_CALL 
hlds__pred_name__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_111_114_105_103_105_110_95_117_115_101_114_95_116_111_95_117_115_101_114_95_100_101_118_95_115_116_114_105_110_103_95_95_91_49_93_95_49_2_f_1(
  MR_Word OriginUser_5);

static MR_Box MR_CALL 
hlds__pred_name__proc_transform_to_dev_string_1_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__pred_name__proc_transform_to_dev_string_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__pred_name__proc_transform_to_dev_string_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_String MR_CALL 
hlds__pred_name__proc_transform_to_dev_string_1_f_0(
  MR_Word ProcTransform_3);

static MR_Box MR_CALL 
hlds__pred_name__pred_transform_to_dev_string_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_String MR_CALL 
hlds__pred_name__pred_transform_to_dev_string_1_f_0(
  MR_Word PredTransform_3);

static MR_String MR_CALL 
hlds__pred_name__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_111_114_105_103_105_110_95_99_111_109_112_105_108_101_114_95_116_111_95_117_115_101_114_95_100_101_118_95_115_116_114_105_110_103_95_95_91_49_93_95_48_2_f_0(
  MR_Word OriginCompiler_5);

static MR_String MR_CALL 
hlds__pred_name__mutable_kind_to_user_dev_string_1_f_0(
  MR_Word MutablePredKind_3);

static MR_String MR_CALL 
hlds__pred_name__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_111_114_105_103_105_110_95_117_115_101_114_95_116_111_95_117_115_101_114_95_100_101_118_95_115_116_114_105_110_103_95_95_91_49_93_95_48_2_f_0(
  MR_Word OriginUser_5);

static MR_Word MR_CALL 
hlds__pred_name__get_base_origin_1_f_0(
  MR_Word Origin_3);

static void MR_CALL 
hlds__pred_name__make_instance_string_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__pred_name__make_instance_method_pred_name_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
hlds__pred_name__bracketed_ints_to_string_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_String MR_CALL 
hlds__pred_name__bracketed_ints_to_string_1_f_0(
  MR_Word Ints_3);

static MR_Box MR_CALL 
hlds__pred_name__type_subst_to_string_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_String MR_CALL 
hlds__pred_name__type_subst_to_string_2_f_0(
  MR_Word VarSet_4,
  MR_Word TypeSubst_5);

static MR_bool MR_CALL 
hlds__pred_name____Unify____aux_tabling_maybe_single_proc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__pred_name____Compare____aux_tabling_maybe_single_proc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__pred_name____Unify____aux_tabling_pred_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__pred_name____Compare____aux_tabling_pred_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__pred_name____Unify____compiler_made_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__pred_name____Compare____compiler_made_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__pred_name____Unify____instance_method_constraints_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__pred_name____Compare____instance_method_constraints_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__pred_name____Unify____line_number_and_counter_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__pred_name____Compare____line_number_and_counter_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__pred_name____Unify____pred_origin_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__pred_name____Compare____pred_origin_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__pred_name____Unify____pred_transform_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__pred_name____Compare____pred_transform_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__pred_name____Unify____proc_transform_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__pred_name____Compare____proc_transform_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__pred_name____Unify____stm_clone_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__pred_name____Compare____stm_clone_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__pred_name____Unify____transform_name_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__pred_name____Compare____transform_name_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__pred_name____Unify____user_made_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__pred_name____Compare____user_made_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__pred_name____Unify____user_or_dev_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__pred_name____Compare____user_or_dev_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__pred_name_scalar_common_1[20][3];

static /* final */ const MR_Box hlds__pred_name_scalar_common_2[7][2];

static /* final */ const MR_Box hlds__pred_name_scalar_common_3[1][1];

static /* final */ const MR_Box hlds__pred_name_scalar_common_4[1][6];

static /* final */ const MR_Box hlds__pred_name_scalar_common_5[4][5];

static /* final */ const MR_Box hlds__pred_name_scalar_common_7[1][7];


struct hlds__pred_name__vector_common_type_6_0_s {
  const MR_String hlds__pred_name__vector_common_type_6_0__vct_6_f_0;
};

static /* final */ const struct hlds__pred_name__vector_common_type_6_0_s hlds__pred_name_vector_common_6[53];



static /* final */ const MR_Box hlds__pred_name_scalar_common_1[20][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&hlds__pred_name_scalar_common_5[0])),
    ((MR_Box) (hlds__pred_name__bracketed_ints_to_string_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&hlds__pred_name_scalar_common_5[1])),
    ((MR_Box) (hlds__pred_name__make_instance_method_pred_name_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&hlds__pred_name_scalar_common_5[1])),
    ((MR_Box) (hlds__pred_name__make_instance_string_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&hlds__pred_name_scalar_common_5[2])),
    ((MR_Box) (hlds__pred_name__pred_transform_to_dev_string_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&hlds__pred_name_scalar_common_5[0])),
    ((MR_Box) (hlds__pred_name__proc_transform_to_dev_string_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&hlds__pred_name_scalar_common_5[0])),
    ((MR_Box) (hlds__pred_name__proc_transform_to_dev_string_1_f_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&hlds__pred_name_scalar_common_5[0])),
    ((MR_Box) (hlds__pred_name__proc_transform_to_dev_string_1_f_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&hlds__pred_name_scalar_common_5[2])),
    ((MR_Box) (hlds__pred_name__layout_pred_transform_name_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&hlds__pred_name_scalar_common_5[0])),
    ((MR_Box) (hlds__pred_name__layout_proc_transform_name_2_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&hlds__pred_name_scalar_common_5[0])),
    ((MR_Box) (hlds__pred_name__layout_proc_transform_name_2_f_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&hlds__pred_name_scalar_common_5[2])),
    ((MR_Box) (hlds__pred_name__layout_pred_transform_name_new_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  12 */
  {
    ((MR_Box) (&hlds__pred_name_scalar_common_5[1])),
    ((MR_Box) (hlds__pred_name__layout_origin_name_new_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  13 */
  {
    ((MR_Box) (&hlds__pred_name_scalar_common_5[3])),
    ((MR_Box) (hlds__pred_name__layout_origin_name_new_1_f_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  14 */
  {
    ((MR_Box) (&hlds__pred_name_scalar_common_5[1])),
    ((MR_Box) (hlds__pred_name__type_to_txq_mrtq_stuffed_string_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  15 */
  {
    ((MR_Box) (&hlds__pred_name_scalar_common_5[3])),
    ((MR_Box) (hlds__pred_name__type_to_txq_mrtq_stuffed_string_1_f_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  16 */
  {
    ((MR_Box) (&hlds__pred_name_scalar_common_5[1])),
    ((MR_Box) (hlds__pred_name__type_to_txq_mrtq_stuffed_string_1_f_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  17 */
  {
    ((MR_Box) (&hlds__pred_name_scalar_common_5[3])),
    ((MR_Box) (hlds__pred_name__type_to_txq_mrtq_stuffed_string_1_f_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  18 */
  {
    ((MR_Box) (&hlds__pred_name_scalar_common_5[1])),
    ((MR_Box) (hlds__pred_name__type_to_txq_mrtq_stuffed_string_1_f_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  19 */
  {
    ((MR_Box) (&hlds__pred_name_scalar_common_5[3])),
    ((MR_Box) (hlds__pred_name__type_to_txq_mrtq_stuffed_string_1_f_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__pred_name_scalar_common_2[7][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&hlds__pred_name_scalar_common_1[0]))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_tvar_subst_0))
  },
};

static /* final */ const MR_Box hlds__pred_name_scalar_common_3[1][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
};

static /* final */ const MR_Box hlds__pred_name_scalar_common_4[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__pred_name__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_tvar_subst_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box hlds__pred_name_scalar_common_5[4][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__pred_name__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box hlds__pred_name_scalar_common_7[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__pred_name__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};


static /* final */ const struct hlds__pred_name__vector_common_type_6_0_s hlds__pred_name_vector_common_6[53] = {
  /* row   0 */   { (MR_String) "top_level" },
  /* row   1 */   { (MR_String) "rollback" },
  /* row   2 */   { (MR_String) "wrapper" },
  /* row   3 */   { (MR_String) "simple_wrapper" },
  /* row   4 */   { (MR_String) "or_else" },
  /* row   5 */   { (MR_String) "std get predicate" },
  /* row   6 */   { (MR_String) "std set predicate" },
  /* row   7 */   { (MR_String) "io get predicate" },
  /* row   8 */   { (MR_String) "io set predicate" },
  /* row   9 */   { (MR_String) "constant get predicate" },
  /* row  10 */   { (MR_String) "constant secret set predicate" },
  /* row  11 */   { (MR_String) "unsafe get predicate" },
  /* row  12 */   { (MR_String) "unsafe set predicate" },
  /* row  13 */   { (MR_String) "lock predicate" },
  /* row  14 */   { (MR_String) "unlock predicate" },
  /* row  15 */   { (MR_String) "preinit predicate" },
  /* row  16 */   { (MR_String) "init predicate" },
  /* row  17 */   { (MR_String) "std get predicate" },
  /* row  18 */   { (MR_String) "std set predicate" },
  /* row  19 */   { (MR_String) "io get predicate" },
  /* row  20 */   { (MR_String) "io set predicate" },
  /* row  21 */   { (MR_String) "constant get predicate" },
  /* row  22 */   { (MR_String) "constant secret set predicate" },
  /* row  23 */   { (MR_String) "unsafe get predicate" },
  /* row  24 */   { (MR_String) "unsafe set predicate" },
  /* row  25 */   { (MR_String) "lock predicate" },
  /* row  26 */   { (MR_String) "unlock predicate" },
  /* row  27 */   { (MR_String) "preinit predicate" },
  /* row  28 */   { (MR_String) "init predicate" },
  /* row  29 */   { (MR_String) "to ground conversion predicate" },
  /* row  30 */   { (MR_String) "to any conversion predicate" },
  /* row  31 */   { (MR_String) "from ground conversion predicate" },
  /* row  32 */   { (MR_String) "from any conversion predicate" },
  /* row  33 */   { (MR_String) "get" },
  /* row  34 */   { (MR_String) "set" },
  /* row  35 */   { (MR_String) "ioget" },
  /* row  36 */   { (MR_String) "ioset" },
  /* row  37 */   { (MR_String) "cget" },
  /* row  38 */   { (MR_String) "cset" },
  /* row  39 */   { (MR_String) "uget" },
  /* row  40 */   { (MR_String) "uset" },
  /* row  41 */   { (MR_String) "lock" },
  /* row  42 */   { (MR_String) "unlock" },
  /* row  43 */   { (MR_String) "preinit" },
  /* row  44 */   { (MR_String) "init" },
  /* row  45 */   { (MR_String) "tognd" },
  /* row  46 */   { (MR_String) "toany" },
  /* row  47 */   { (MR_String) "fromgnd" },
  /* row  48 */   { (MR_String) "fromany" },
  /* row  49 */   { (MR_String) "excl" },
  /* row  50 */   { (MR_String) "exh" },
  /* row  51 */   { (MR_String) "exclexh" },
  /* row  52 */   { (MR_String) "assert" },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 hlds__pred_name__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__pred_name__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_EnumFunctorDesc hlds__pred_name__hlds__pred_name__enum_functor_desc_aux_tabling_maybe_single_proc_0_0 = {
  (MR_String) "is_not_single_proc",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__pred_name__hlds__pred_name__enum_functor_desc_aux_tabling_maybe_single_proc_0_1 = {
  (MR_String) "is_single_proc",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__pred_name__hlds__pred_name__enum_ordinal_ordered_aux_tabling_maybe_single_proc_0[2] = {
  &hlds__pred_name__hlds__pred_name__enum_functor_desc_aux_tabling_maybe_single_proc_0_0,
  &hlds__pred_name__hlds__pred_name__enum_functor_desc_aux_tabling_maybe_single_proc_0_1
};

static const MR_EnumFunctorDescPtr hlds__pred_name__hlds__pred_name__enum_name_ordered_aux_tabling_maybe_single_proc_0[2] = {
  &hlds__pred_name__hlds__pred_name__enum_functor_desc_aux_tabling_maybe_single_proc_0_0,
  &hlds__pred_name__hlds__pred_name__enum_functor_desc_aux_tabling_maybe_single_proc_0_1
};

static const MR_Integer hlds__pred_name__hlds__pred_name__functor_number_map_aux_tabling_maybe_single_proc_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__pred_name__hlds__pred_name__type_ctor_info_aux_tabling_maybe_single_proc_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__pred_name____Unify____aux_tabling_maybe_single_proc_0_0_10001)),
  ((MR_Box) (hlds__pred_name____Compare____aux_tabling_maybe_single_proc_0_0_10001)),
  (MR_String) "hlds.pred_name",
  (MR_String) "aux_tabling_maybe_single_proc",
  { hlds__pred_name__hlds__pred_name__enum_name_ordered_aux_tabling_maybe_single_proc_0 },
  { hlds__pred_name__hlds__pred_name__enum_ordinal_ordered_aux_tabling_maybe_single_proc_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__pred_name__hlds__pred_name__functor_number_map_aux_tabling_maybe_single_proc_0,

};

static const MR_EnumFunctorDesc hlds__pred_name__hlds__pred_name__enum_functor_desc_aux_tabling_pred_kind_0_0 = {
  (MR_String) "atpk_statistics",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__pred_name__hlds__pred_name__enum_functor_desc_aux_tabling_pred_kind_0_1 = {
  (MR_String) "atpk_reset",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__pred_name__hlds__pred_name__enum_ordinal_ordered_aux_tabling_pred_kind_0[2] = {
  &hlds__pred_name__hlds__pred_name__enum_functor_desc_aux_tabling_pred_kind_0_0,
  &hlds__pred_name__hlds__pred_name__enum_functor_desc_aux_tabling_pred_kind_0_1
};

static const MR_EnumFunctorDescPtr hlds__pred_name__hlds__pred_name__enum_name_ordered_aux_tabling_pred_kind_0[2] = {
  &hlds__pred_name__hlds__pred_name__enum_functor_desc_aux_tabling_pred_kind_0_1,
  &hlds__pred_name__hlds__pred_name__enum_functor_desc_aux_tabling_pred_kind_0_0
};

static const MR_Integer hlds__pred_name__hlds__pred_name__functor_number_map_aux_tabling_pred_kind_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__pred_name__hlds__pred_name__type_ctor_info_aux_tabling_pred_kind_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__pred_name____Unify____aux_tabling_pred_kind_0_0_10001)),
  ((MR_Box) (hlds__pred_name____Compare____aux_tabling_pred_kind_0_0_10001)),
  (MR_String) "hlds.pred_name",
  (MR_String) "aux_tabling_pred_kind",
  { hlds__pred_name__hlds__pred_name__enum_name_ordered_aux_tabling_pred_kind_0 },
  { hlds__pred_name__hlds__pred_name__enum_ordinal_ordered_aux_tabling_pred_kind_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__pred_name__hlds__pred_name__functor_number_map_aux_tabling_pred_kind_0,

};

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_compiler_made_0_0[2] = {
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_special_pred_id_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)
};

static const MR_DuArgLocn hlds__pred_name__hlds__pred_name__field_locns_compiler_made_0_0[2] = {
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

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_compiler_made_0_0 = {
  (MR_String) "made_for_uci",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__pred_name__hlds__pred_name__field_types_compiler_made_0_0,
  NULL,
  hlds__pred_name__hlds__pred_name__field_locns_compiler_made_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_compiler_made_0_1[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_compiler_made_0_1 = {
  (MR_String) "made_for_deforestation",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  hlds__pred_name__hlds__pred_name__field_types_compiler_made_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_compiler_made_0_2[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data_rare__parse_tree__prog_data_rare__type_ctor_info_solver_type_pred_kind_0)
};

static const MR_DuArgLocn hlds__pred_name__hlds__pred_name__field_locns_compiler_made_0_2[2] = {
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

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_compiler_made_0_2 = {
  (MR_String) "made_for_solver_repn",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  hlds__pred_name__hlds__pred_name__field_types_compiler_made_0_2,
  NULL,
  hlds__pred_name__hlds__pred_name__field_locns_compiler_made_0_2,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_compiler_made_0_3[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pf_sym_name_user_arity_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data_rare__parse_tree__prog_data_rare__type_ctor_info_tabling_aux_pred_kind_0)
};

static const MR_DuArgLocn hlds__pred_name__hlds__pred_name__field_locns_compiler_made_0_3[2] = {
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

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_compiler_made_0_3 = {
  (MR_String) "made_for_tabling",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(3),
  hlds__pred_name__hlds__pred_name__field_types_compiler_made_0_3,
  NULL,
  hlds__pred_name__hlds__pred_name__field_locns_compiler_made_0_3,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_compiler_made_0_4[3] = {
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data_rare__parse_tree__prog_data_rare__type_ctor_info_mutable_pred_kind_0)
};

static const MR_DuArgLocn hlds__pred_name__hlds__pred_name__field_locns_compiler_made_0_4[3] = {
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

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_compiler_made_0_4 = {
  (MR_String) "made_for_mutable",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(4),
  hlds__pred_name__hlds__pred_name__field_types_compiler_made_0_4,
  NULL,
  hlds__pred_name__hlds__pred_name__field_locns_compiler_made_0_4,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_compiler_made_0_5[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_compiler_made_0_5 = {
  (MR_String) "made_for_initialise",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 2,
  INT32_C(5),
  hlds__pred_name__hlds__pred_name__field_types_compiler_made_0_5,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_compiler_made_0_6[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_compiler_made_0_6 = {
  (MR_String) "made_for_finalise",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 3,
  INT32_C(6),
  hlds__pred_name__hlds__pred_name__field_types_compiler_made_0_6,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_stag_ordered_compiler_made_0_0[1] = { &hlds__pred_name__hlds__pred_name__du_functor_desc_compiler_made_0_0 };

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_stag_ordered_compiler_made_0_1[1] = { &hlds__pred_name__hlds__pred_name__du_functor_desc_compiler_made_0_1 };

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_stag_ordered_compiler_made_0_2[1] = { &hlds__pred_name__hlds__pred_name__du_functor_desc_compiler_made_0_2 };

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_stag_ordered_compiler_made_0_3[4] = {
  &hlds__pred_name__hlds__pred_name__du_functor_desc_compiler_made_0_3,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_compiler_made_0_4,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_compiler_made_0_5,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_compiler_made_0_6
};

static const MR_DuPtagLayout hlds__pred_name__hlds__pred_name__du_ptag_ordered_compiler_made_0[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__pred_name__hlds__pred_name__du_stag_ordered_compiler_made_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__pred_name__hlds__pred_name__du_stag_ordered_compiler_made_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__pred_name__hlds__pred_name__du_stag_ordered_compiler_made_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(4),
    MR_SECTAG_REMOTE_FULL_WORD,
    hlds__pred_name__hlds__pred_name__du_stag_ordered_compiler_made_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_name_ordered_compiler_made_0[7] = {
  &hlds__pred_name__hlds__pred_name__du_functor_desc_compiler_made_0_1,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_compiler_made_0_6,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_compiler_made_0_5,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_compiler_made_0_4,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_compiler_made_0_2,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_compiler_made_0_3,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_compiler_made_0_0
};

static const MR_Integer hlds__pred_name__hlds__pred_name__functor_number_map_compiler_made_0[7] = {
  (MR_Integer) 6,
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 5,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__pred_name__hlds__pred_name__type_ctor_info_compiler_made_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__pred_name____Unify____compiler_made_0_0_10001)),
  ((MR_Box) (hlds__pred_name____Compare____compiler_made_0_0_10001)),
  (MR_String) "hlds.pred_name",
  (MR_String) "compiler_made",
  { hlds__pred_name__hlds__pred_name__du_name_ordered_compiler_made_0 },
  { hlds__pred_name__hlds__pred_name__du_ptag_ordered_compiler_made_0 },
  (MR_Integer) 7,
  UINT16_C(12),
  hlds__pred_name__hlds__pred_name__functor_number_map_compiler_made_0,

};

static const MR_FA_TypeInfo_Struct1 hlds__pred_name__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__pred_name__list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0) }
};

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_instance_method_constraints_0_0[4] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0),
  (MR_PseudoTypeInfo) (&hlds__pred_name__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&hlds__pred_name__list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_univ_exist_constraints_0)
};

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_instance_method_constraints_0_0 = {
  (MR_String) "instance_method_constraints",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__pred_name__hlds__pred_name__field_types_instance_method_constraints_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_stag_ordered_instance_method_constraints_0_0[1] = { &hlds__pred_name__hlds__pred_name__du_functor_desc_instance_method_constraints_0_0 };

static const MR_DuPtagLayout hlds__pred_name__hlds__pred_name__du_ptag_ordered_instance_method_constraints_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__pred_name__hlds__pred_name__du_stag_ordered_instance_method_constraints_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_name_ordered_instance_method_constraints_0[1] = { &hlds__pred_name__hlds__pred_name__du_functor_desc_instance_method_constraints_0_0 };

static const MR_Integer hlds__pred_name__hlds__pred_name__functor_number_map_instance_method_constraints_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct hlds__pred_name__hlds__pred_name__type_ctor_info_instance_method_constraints_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__pred_name____Unify____instance_method_constraints_0_0_10001)),
  ((MR_Box) (hlds__pred_name____Compare____instance_method_constraints_0_0_10001)),
  (MR_String) "hlds.pred_name",
  (MR_String) "instance_method_constraints",
  { hlds__pred_name__hlds__pred_name__du_name_ordered_instance_method_constraints_0 },
  { hlds__pred_name__hlds__pred_name__du_ptag_ordered_instance_method_constraints_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__pred_name__hlds__pred_name__functor_number_map_instance_method_constraints_0,

};

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_line_number_and_counter_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_line_number_and_counter_0_0 = {
  (MR_String) "lnc",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__pred_name__hlds__pred_name__field_types_line_number_and_counter_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_stag_ordered_line_number_and_counter_0_0[1] = { &hlds__pred_name__hlds__pred_name__du_functor_desc_line_number_and_counter_0_0 };

static const MR_DuPtagLayout hlds__pred_name__hlds__pred_name__du_ptag_ordered_line_number_and_counter_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__pred_name__hlds__pred_name__du_stag_ordered_line_number_and_counter_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_name_ordered_line_number_and_counter_0[1] = { &hlds__pred_name__hlds__pred_name__du_functor_desc_line_number_and_counter_0_0 };

static const MR_Integer hlds__pred_name__hlds__pred_name__functor_number_map_line_number_and_counter_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct hlds__pred_name__hlds__pred_name__type_ctor_info_line_number_and_counter_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__pred_name____Unify____line_number_and_counter_0_0_10001)),
  ((MR_Box) (hlds__pred_name____Compare____line_number_and_counter_0_0_10001)),
  (MR_String) "hlds.pred_name",
  (MR_String) "line_number_and_counter",
  { hlds__pred_name__hlds__pred_name__du_name_ordered_line_number_and_counter_0 },
  { hlds__pred_name__hlds__pred_name__du_ptag_ordered_line_number_and_counter_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__pred_name__hlds__pred_name__functor_number_map_line_number_and_counter_0,

};

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_pred_origin_0_0[1] = { (MR_PseudoTypeInfo) (&hlds__pred_name__hlds__pred_name__type_ctor_info_user_made_0) };

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_pred_origin_0_0 = {
  (MR_String) "origin_user",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__pred_name__hlds__pred_name__field_types_pred_origin_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_pred_origin_0_1[1] = { (MR_PseudoTypeInfo) (&hlds__pred_name__hlds__pred_name__type_ctor_info_compiler_made_0) };

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_pred_origin_0_1 = {
  (MR_String) "origin_compiler",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  hlds__pred_name__hlds__pred_name__field_types_pred_origin_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_pred_origin_0_2[3] = {
  (MR_PseudoTypeInfo) (&hlds__pred_name__hlds__pred_name__type_ctor_info_pred_transform_0),
  (MR_PseudoTypeInfo) (&hlds__pred_name__hlds__pred_name__type_ctor_info_pred_origin_0),
  (MR_PseudoTypeInfo) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_pred_id_0)
};

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_pred_origin_0_2 = {
  (MR_String) "origin_pred_transform",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  hlds__pred_name__hlds__pred_name__field_types_pred_origin_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_pred_origin_0_3[4] = {
  (MR_PseudoTypeInfo) (&hlds__pred_name__hlds__pred_name__type_ctor_info_proc_transform_0),
  (MR_PseudoTypeInfo) (&hlds__pred_name__hlds__pred_name__type_ctor_info_pred_origin_0),
  (MR_PseudoTypeInfo) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_pred_id_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_pred_origin_0_3 = {
  (MR_String) "origin_proc_transform",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(3),
  (MR_Integer) -1,
  INT32_C(3),
  hlds__pred_name__hlds__pred_name__field_types_pred_origin_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_stag_ordered_pred_origin_0_0[1] = { &hlds__pred_name__hlds__pred_name__du_functor_desc_pred_origin_0_0 };

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_stag_ordered_pred_origin_0_1[1] = { &hlds__pred_name__hlds__pred_name__du_functor_desc_pred_origin_0_1 };

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_stag_ordered_pred_origin_0_2[1] = { &hlds__pred_name__hlds__pred_name__du_functor_desc_pred_origin_0_2 };

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_stag_ordered_pred_origin_0_3[1] = { &hlds__pred_name__hlds__pred_name__du_functor_desc_pred_origin_0_3 };

static const MR_DuPtagLayout hlds__pred_name__hlds__pred_name__du_ptag_ordered_pred_origin_0[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__pred_name__hlds__pred_name__du_stag_ordered_pred_origin_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__pred_name__hlds__pred_name__du_stag_ordered_pred_origin_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__pred_name__hlds__pred_name__du_stag_ordered_pred_origin_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__pred_name__hlds__pred_name__du_stag_ordered_pred_origin_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_name_ordered_pred_origin_0[4] = {
  &hlds__pred_name__hlds__pred_name__du_functor_desc_pred_origin_0_1,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_pred_origin_0_2,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_pred_origin_0_3,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_pred_origin_0_0
};

static const MR_Integer hlds__pred_name__hlds__pred_name__functor_number_map_pred_origin_0[4] = {
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct hlds__pred_name__hlds__pred_name__type_ctor_info_pred_origin_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__pred_name____Unify____pred_origin_0_0_10001)),
  ((MR_Box) (hlds__pred_name____Compare____pred_origin_0_0_10001)),
  (MR_String) "hlds.pred_name",
  (MR_String) "pred_origin",
  { hlds__pred_name__hlds__pred_name__du_name_ordered_pred_origin_0 },
  { hlds__pred_name__hlds__pred_name__du_ptag_ordered_pred_origin_0 },
  (MR_Integer) 4,
  UINT16_C(12),
  hlds__pred_name__hlds__pred_name__functor_number_map_pred_origin_0,

};

static const MR_FA_TypeInfo_Struct2 hlds__pred_name__pair__ti_pair_2builtin__type_ctor_info_int_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__pred_name__one_or_more__ti_one_or_more_1pair__ti_pair_2builtin__type_ctor_info_int_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1,
  { (MR_TypeInfo) (&hlds__pred_name__pair__ti_pair_2builtin__type_ctor_info_int_0parse_tree__prog_data__type_ctor_info_mer_type_0) }
};

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_pred_transform_0_0[1] = { (MR_PseudoTypeInfo) (&hlds__pred_name__one_or_more__ti_one_or_more_1pair__ti_pair_2builtin__type_ctor_info_int_0parse_tree__prog_data__type_ctor_info_mer_type_0) };

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_pred_transform_0_0 = {
  (MR_String) "pred_transform_pragma_type_spec",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__pred_name__hlds__pred_name__field_types_pred_transform_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_pred_transform_0_1[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) };

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_pred_transform_0_1 = {
  (MR_String) "pred_transform_distance_granularity",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(1),
  hlds__pred_name__hlds__pred_name__field_types_pred_transform_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_pred_transform_0_2 = {
  (MR_String) "pred_transform_table_generator",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(2),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_pred_transform_0_3[1] = { (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0) };

static const MR_DuArgLocn hlds__pred_name__hlds__pred_name__field_locns_pred_transform_0_3[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_pred_transform_0_3 = {
  (MR_String) "pred_transform_ssdebug",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(3),
  (MR_Integer) -1,
  INT32_C(3),
  hlds__pred_name__hlds__pred_name__field_types_pred_transform_0_3,
  NULL,
  hlds__pred_name__hlds__pred_name__field_locns_pred_transform_0_3,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_pred_transform_0_4 = {
  (MR_String) "pred_transform_structure_reuse",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(4),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_stag_ordered_pred_transform_0_0[2] = {
  &hlds__pred_name__hlds__pred_name__du_functor_desc_pred_transform_0_2,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_pred_transform_0_4
};

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_stag_ordered_pred_transform_0_1[1] = { &hlds__pred_name__hlds__pred_name__du_functor_desc_pred_transform_0_0 };

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_stag_ordered_pred_transform_0_2[1] = { &hlds__pred_name__hlds__pred_name__du_functor_desc_pred_transform_0_1 };

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_stag_ordered_pred_transform_0_3[1] = { &hlds__pred_name__hlds__pred_name__du_functor_desc_pred_transform_0_3 };

static const MR_DuPtagLayout hlds__pred_name__hlds__pred_name__du_ptag_ordered_pred_transform_0[4] = {
  {
    UINT32_C(2),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    hlds__pred_name__hlds__pred_name__du_stag_ordered_pred_transform_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__pred_name__hlds__pred_name__du_stag_ordered_pred_transform_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__pred_name__hlds__pred_name__du_stag_ordered_pred_transform_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__pred_name__hlds__pred_name__du_stag_ordered_pred_transform_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_name_ordered_pred_transform_0[5] = {
  &hlds__pred_name__hlds__pred_name__du_functor_desc_pred_transform_0_1,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_pred_transform_0_0,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_pred_transform_0_3,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_pred_transform_0_4,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_pred_transform_0_2
};

static const MR_Integer hlds__pred_name__hlds__pred_name__functor_number_map_pred_transform_0[5] = {
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 2,
  (MR_Integer) 3
};

const MR_TypeCtorInfo_Struct hlds__pred_name__hlds__pred_name__type_ctor_info_pred_transform_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__pred_name____Unify____pred_transform_0_0_10001)),
  ((MR_Box) (hlds__pred_name____Compare____pred_transform_0_0_10001)),
  (MR_String) "hlds.pred_name",
  (MR_String) "pred_transform",
  { hlds__pred_name__hlds__pred_name__du_name_ordered_pred_transform_0 },
  { hlds__pred_name__hlds__pred_name__du_ptag_ordered_pred_transform_0 },
  (MR_Integer) 5,
  UINT16_C(12),
  hlds__pred_name__hlds__pred_name__functor_number_map_pred_transform_0,

};

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_proc_transform_0_0[2] = {
  (MR_PseudoTypeInfo) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_pred_id_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_proc_transform_0_0 = {
  (MR_String) "proc_transform_user_type_spec",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__pred_name__hlds__pred_name__field_types_proc_transform_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_proc_transform_0_1[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) };

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_proc_transform_0_1 = {
  (MR_String) "proc_transform_higher_order_spec",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(1),
  hlds__pred_name__hlds__pred_name__field_types_proc_transform_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 hlds__pred_name__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) }
};

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_proc_transform_0_2[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&hlds__pred_name__list__ti_list_1builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_proc_transform_0_2 = {
  (MR_String) "proc_transform_accumulator",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(2),
  hlds__pred_name__hlds__pred_name__field_types_proc_transform_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_proc_transform_0_3[1] = { (MR_PseudoTypeInfo) (&hlds__pred_name__list__ti_list_1builtin__type_ctor_info_int_0) };

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_proc_transform_0_3 = {
  (MR_String) "proc_transform_unused_args",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(3),
  hlds__pred_name__hlds__pred_name__field_types_proc_transform_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_proc_transform_0_4[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_proc_transform_0_4 = {
  (MR_String) "proc_transform_loop_inv",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 2,
  INT32_C(4),
  hlds__pred_name__hlds__pred_name__field_types_proc_transform_0_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_proc_transform_0_5[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_proc_transform_0_5 = {
  (MR_String) "proc_transform_tuple",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 3,
  INT32_C(5),
  hlds__pred_name__hlds__pred_name__field_types_proc_transform_0_5,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_proc_transform_0_6[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_proc_transform_0_6 = {
  (MR_String) "proc_transform_untuple",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 4,
  INT32_C(6),
  hlds__pred_name__hlds__pred_name__field_types_proc_transform_0_6,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_proc_transform_0_7[1] = { (MR_PseudoTypeInfo) (&hlds__pred_name__list__ti_list_1builtin__type_ctor_info_int_0) };

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_proc_transform_0_7 = {
  (MR_String) "proc_transform_dep_par_conj",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 5,
  INT32_C(7),
  hlds__pred_name__hlds__pred_name__field_types_proc_transform_0_7,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_proc_transform_0_8 = {
  (MR_String) "proc_transform_par_loop_ctrl",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(8),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_proc_transform_0_9[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&hlds__pred_name__list__ti_list_1builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_proc_transform_0_9 = {
  (MR_String) "proc_transform_lcmc",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 6,
  INT32_C(9),
  hlds__pred_name__hlds__pred_name__field_types_proc_transform_0_9,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_proc_transform_0_10 = {
  (MR_String) "proc_transform_stm_expansion",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(10),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_proc_transform_0_11 = {
  (MR_String) "proc_transform_io_tabling",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 2,
  INT32_C(11),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_proc_transform_0_12 = {
  (MR_String) "proc_transform_direct_arg_in_out",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 3,
  INT32_C(12),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_stag_ordered_proc_transform_0_0[4] = {
  &hlds__pred_name__hlds__pred_name__du_functor_desc_proc_transform_0_8,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_proc_transform_0_10,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_proc_transform_0_11,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_proc_transform_0_12
};

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_stag_ordered_proc_transform_0_1[1] = { &hlds__pred_name__hlds__pred_name__du_functor_desc_proc_transform_0_0 };

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_stag_ordered_proc_transform_0_2[1] = { &hlds__pred_name__hlds__pred_name__du_functor_desc_proc_transform_0_1 };

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_stag_ordered_proc_transform_0_3[7] = {
  &hlds__pred_name__hlds__pred_name__du_functor_desc_proc_transform_0_2,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_proc_transform_0_3,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_proc_transform_0_4,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_proc_transform_0_5,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_proc_transform_0_6,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_proc_transform_0_7,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_proc_transform_0_9
};

static const MR_DuPtagLayout hlds__pred_name__hlds__pred_name__du_ptag_ordered_proc_transform_0[4] = {
  {
    UINT32_C(4),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    hlds__pred_name__hlds__pred_name__du_stag_ordered_proc_transform_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__pred_name__hlds__pred_name__du_stag_ordered_proc_transform_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__pred_name__hlds__pred_name__du_stag_ordered_proc_transform_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(7),
    MR_SECTAG_REMOTE_FULL_WORD,
    hlds__pred_name__hlds__pred_name__du_stag_ordered_proc_transform_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_name_ordered_proc_transform_0[13] = {
  &hlds__pred_name__hlds__pred_name__du_functor_desc_proc_transform_0_2,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_proc_transform_0_7,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_proc_transform_0_12,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_proc_transform_0_1,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_proc_transform_0_11,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_proc_transform_0_9,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_proc_transform_0_4,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_proc_transform_0_8,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_proc_transform_0_10,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_proc_transform_0_5,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_proc_transform_0_6,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_proc_transform_0_3,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_proc_transform_0_0
};

static const MR_Integer hlds__pred_name__hlds__pred_name__functor_number_map_proc_transform_0[13] = {
  (MR_Integer) 12,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 11,
  (MR_Integer) 6,
  (MR_Integer) 9,
  (MR_Integer) 10,
  (MR_Integer) 1,
  (MR_Integer) 7,
  (MR_Integer) 5,
  (MR_Integer) 8,
  (MR_Integer) 4,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct hlds__pred_name__hlds__pred_name__type_ctor_info_proc_transform_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__pred_name____Unify____proc_transform_0_0_10001)),
  ((MR_Box) (hlds__pred_name____Compare____proc_transform_0_0_10001)),
  (MR_String) "hlds.pred_name",
  (MR_String) "proc_transform",
  { hlds__pred_name__hlds__pred_name__du_name_ordered_proc_transform_0 },
  { hlds__pred_name__hlds__pred_name__du_ptag_ordered_proc_transform_0 },
  (MR_Integer) 13,
  UINT16_C(12),
  hlds__pred_name__hlds__pred_name__functor_number_map_proc_transform_0,

};

static const MR_EnumFunctorDesc hlds__pred_name__hlds__pred_name__enum_functor_desc_stm_clone_kind_0_0 = {
  (MR_String) "stmck_top_level",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__pred_name__hlds__pred_name__enum_functor_desc_stm_clone_kind_0_1 = {
  (MR_String) "stmck_rollback",
  INT32_C(1)
};

static const MR_EnumFunctorDesc hlds__pred_name__hlds__pred_name__enum_functor_desc_stm_clone_kind_0_2 = {
  (MR_String) "stmck_wrapper",
  INT32_C(2)
};

static const MR_EnumFunctorDesc hlds__pred_name__hlds__pred_name__enum_functor_desc_stm_clone_kind_0_3 = {
  (MR_String) "stmck_simple_wrapper",
  INT32_C(3)
};

static const MR_EnumFunctorDesc hlds__pred_name__hlds__pred_name__enum_functor_desc_stm_clone_kind_0_4 = {
  (MR_String) "stmck_or_else",
  INT32_C(4)
};

static const MR_EnumFunctorDescPtr hlds__pred_name__hlds__pred_name__enum_ordinal_ordered_stm_clone_kind_0[5] = {
  &hlds__pred_name__hlds__pred_name__enum_functor_desc_stm_clone_kind_0_0,
  &hlds__pred_name__hlds__pred_name__enum_functor_desc_stm_clone_kind_0_1,
  &hlds__pred_name__hlds__pred_name__enum_functor_desc_stm_clone_kind_0_2,
  &hlds__pred_name__hlds__pred_name__enum_functor_desc_stm_clone_kind_0_3,
  &hlds__pred_name__hlds__pred_name__enum_functor_desc_stm_clone_kind_0_4
};

static const MR_EnumFunctorDescPtr hlds__pred_name__hlds__pred_name__enum_name_ordered_stm_clone_kind_0[5] = {
  &hlds__pred_name__hlds__pred_name__enum_functor_desc_stm_clone_kind_0_4,
  &hlds__pred_name__hlds__pred_name__enum_functor_desc_stm_clone_kind_0_1,
  &hlds__pred_name__hlds__pred_name__enum_functor_desc_stm_clone_kind_0_3,
  &hlds__pred_name__hlds__pred_name__enum_functor_desc_stm_clone_kind_0_0,
  &hlds__pred_name__hlds__pred_name__enum_functor_desc_stm_clone_kind_0_2
};

static const MR_Integer hlds__pred_name__hlds__pred_name__functor_number_map_stm_clone_kind_0[5] = {
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 4,
  (MR_Integer) 2,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__pred_name__hlds__pred_name__type_ctor_info_stm_clone_kind_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__pred_name____Unify____stm_clone_kind_0_0_10001)),
  ((MR_Box) (hlds__pred_name____Compare____stm_clone_kind_0_0_10001)),
  (MR_String) "hlds.pred_name",
  (MR_String) "stm_clone_kind",
  { hlds__pred_name__hlds__pred_name__enum_name_ordered_stm_clone_kind_0 },
  { hlds__pred_name__hlds__pred_name__enum_ordinal_ordered_stm_clone_kind_0 },
  (MR_Integer) 5,
  UINT16_C(12),
  hlds__pred_name__hlds__pred_name__functor_number_map_stm_clone_kind_0,

};

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_transform_name_0_0[2] = {
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuArgLocn hlds__pred_name__hlds__pred_name__field_locns_transform_name_0_0[2] = {
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

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_transform_name_0_0 = {
  (MR_String) "tn_higher_order",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__pred_name__hlds__pred_name__field_types_transform_name_0_0,
  NULL,
  hlds__pred_name__hlds__pred_name__field_locns_transform_name_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_transform_name_0_1[4] = {
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0),
  (MR_PseudoTypeInfo) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_pred_id_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuArgLocn hlds__pred_name__hlds__pred_name__field_locns_transform_name_0_1[4] = {
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

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_transform_name_0_1 = {
  (MR_String) "tn_user_type_spec",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  hlds__pred_name__hlds__pred_name__field_types_transform_name_0_1,
  NULL,
  hlds__pred_name__hlds__pred_name__field_locns_transform_name_0_1,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_transform_name_0_2[5] = {
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_user_arity_0),
  (MR_PseudoTypeInfo) (&hlds__pred_name__hlds__pred_name__type_ctor_info_aux_tabling_pred_kind_0),
  (MR_PseudoTypeInfo) (&hlds__pred_name__hlds__pred_name__type_ctor_info_aux_tabling_maybe_single_proc_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuArgLocn hlds__pred_name__hlds__pred_name__field_locns_transform_name_0_2[5] = {
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
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_transform_name_0_2 = {
  (MR_String) "tn_aux_tabling",
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  hlds__pred_name__hlds__pred_name__field_types_transform_name_0_2,
  NULL,
  hlds__pred_name__hlds__pred_name__field_locns_transform_name_0_2,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_transform_name_0_3[2] = {
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0),
  (MR_PseudoTypeInfo) (&hlds__pred_name__hlds__pred_name__type_ctor_info_line_number_and_counter_0)
};

static const MR_DuArgLocn hlds__pred_name__hlds__pred_name__field_locns_transform_name_0_3[2] = {
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

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_transform_name_0_3 = {
  (MR_String) "tn_accumulator",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(3),
  hlds__pred_name__hlds__pred_name__field_types_transform_name_0_3,
  NULL,
  hlds__pred_name__hlds__pred_name__field_locns_transform_name_0_3,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_transform_name_0_4[2] = {
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0),
  (MR_PseudoTypeInfo) (&hlds__pred_name__hlds__pred_name__type_ctor_info_line_number_and_counter_0)
};

static const MR_DuArgLocn hlds__pred_name__hlds__pred_name__field_locns_transform_name_0_4[2] = {
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

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_transform_name_0_4 = {
  (MR_String) "tn_deforestation",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(4),
  hlds__pred_name__hlds__pred_name__field_types_transform_name_0_4,
  NULL,
  hlds__pred_name__hlds__pred_name__field_locns_transform_name_0_4,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_transform_name_0_5[2] = {
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0),
  (MR_PseudoTypeInfo) (&hlds__pred_name__hlds__pred_name__type_ctor_info_line_number_and_counter_0)
};

static const MR_DuArgLocn hlds__pred_name__hlds__pred_name__field_locns_transform_name_0_5[2] = {
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

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_transform_name_0_5 = {
  (MR_String) "tn_lambda",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 2,
  INT32_C(5),
  hlds__pred_name__hlds__pred_name__field_types_transform_name_0_5,
  NULL,
  hlds__pred_name__hlds__pred_name__field_locns_transform_name_0_5,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_transform_name_0_6[3] = {
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&hlds__pred_name__hlds__pred_name__type_ctor_info_line_number_and_counter_0)
};

static const MR_DuArgLocn hlds__pred_name__hlds__pred_name__field_locns_transform_name_0_6[3] = {
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

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_transform_name_0_6 = {
  (MR_String) "tn_loop_inv",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 3,
  INT32_C(6),
  hlds__pred_name__hlds__pred_name__field_types_transform_name_0_6,
  NULL,
  hlds__pred_name__hlds__pred_name__field_locns_transform_name_0_6,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_transform_name_0_7[3] = {
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&hlds__pred_name__hlds__pred_name__type_ctor_info_line_number_and_counter_0)
};

static const MR_DuArgLocn hlds__pred_name__hlds__pred_name__field_locns_transform_name_0_7[3] = {
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

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_transform_name_0_7 = {
  (MR_String) "tn_tupling",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 4,
  INT32_C(7),
  hlds__pred_name__hlds__pred_name__field_types_transform_name_0_7,
  NULL,
  hlds__pred_name__hlds__pred_name__field_locns_transform_name_0_7,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_transform_name_0_8[3] = {
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&hlds__pred_name__hlds__pred_name__type_ctor_info_line_number_and_counter_0)
};

static const MR_DuArgLocn hlds__pred_name__hlds__pred_name__field_locns_transform_name_0_8[3] = {
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

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_transform_name_0_8 = {
  (MR_String) "tn_untupling",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 5,
  INT32_C(8),
  hlds__pred_name__hlds__pred_name__field_types_transform_name_0_8,
  NULL,
  hlds__pred_name__hlds__pred_name__field_locns_transform_name_0_8,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_transform_name_0_9[2] = {
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuArgLocn hlds__pred_name__hlds__pred_name__field_locns_transform_name_0_9[2] = {
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

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_transform_name_0_9 = {
  (MR_String) "tn_last_call_modulo_cons",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 6,
  INT32_C(9),
  hlds__pred_name__hlds__pred_name__field_types_transform_name_0_9,
  NULL,
  hlds__pred_name__hlds__pred_name__field_locns_transform_name_0_9,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_transform_name_0_10[1] = { (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0) };

static const MR_DuArgLocn hlds__pred_name__hlds__pred_name__field_locns_transform_name_0_10[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_transform_name_0_10 = {
  (MR_String) "tn_ssdb_stdlib_proxy",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 7,
  INT32_C(10),
  hlds__pred_name__hlds__pred_name__field_types_transform_name_0_10,
  NULL,
  hlds__pred_name__hlds__pred_name__field_locns_transform_name_0_10,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_transform_name_0_11[3] = {
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&hlds__pred_name__list__ti_list_1builtin__type_ctor_info_int_0)
};

static const MR_DuArgLocn hlds__pred_name__hlds__pred_name__field_locns_transform_name_0_11[3] = {
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

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_transform_name_0_11 = {
  (MR_String) "tn_dep_par_conj",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 8,
  INT32_C(11),
  hlds__pred_name__hlds__pred_name__field_types_transform_name_0_11,
  NULL,
  hlds__pred_name__hlds__pred_name__field_locns_transform_name_0_11,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_transform_name_0_12[2] = {
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuArgLocn hlds__pred_name__hlds__pred_name__field_locns_transform_name_0_12[2] = {
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

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_transform_name_0_12 = {
  (MR_String) "tn_par_distance_granularity",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 9,
  INT32_C(12),
  hlds__pred_name__hlds__pred_name__field_types_transform_name_0_12,
  NULL,
  hlds__pred_name__hlds__pred_name__field_locns_transform_name_0_12,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_transform_name_0_13[2] = {
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuArgLocn hlds__pred_name__hlds__pred_name__field_locns_transform_name_0_13[2] = {
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

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_transform_name_0_13 = {
  (MR_String) "tn_par_loop_control",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 10,
  INT32_C(13),
  hlds__pred_name__hlds__pred_name__field_types_transform_name_0_13,
  NULL,
  hlds__pred_name__hlds__pred_name__field_locns_transform_name_0_13,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_transform_name_0_14[3] = {
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&hlds__pred_name__list__ti_list_1builtin__type_ctor_info_int_0)
};

static const MR_DuArgLocn hlds__pred_name__hlds__pred_name__field_locns_transform_name_0_14[3] = {
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

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_transform_name_0_14 = {
  (MR_String) "tn_structure_reuse",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 11,
  INT32_C(14),
  hlds__pred_name__hlds__pred_name__field_types_transform_name_0_14,
  NULL,
  hlds__pred_name__hlds__pred_name__field_locns_transform_name_0_14,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 hlds__pred_name__maybe__ti_maybe_1mdbcomp__prim_data__type_ctor_info_pred_or_func_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__pred_name__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__pred_name__one_or_more__ti_one_or_more_1parse_tree__prog_data_pragma__type_ctor_info_tvar_subst_0 = {
  &mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1,
  { (MR_TypeInfo) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_tvar_subst_0) }
};

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_transform_name_0_15[3] = {
  (MR_PseudoTypeInfo) (&hlds__pred_name__maybe__ti_maybe_1mdbcomp__prim_data__type_ctor_info_pred_or_func_0),
  (MR_PseudoTypeInfo) (&hlds__pred_name__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
  (MR_PseudoTypeInfo) (&hlds__pred_name__one_or_more__ti_one_or_more_1parse_tree__prog_data_pragma__type_ctor_info_tvar_subst_0)
};

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_transform_name_0_15 = {
  (MR_String) "tn_pragma_type_spec",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 12,
  INT32_C(15),
  hlds__pred_name__hlds__pred_name__field_types_transform_name_0_15,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_transform_name_0_16[1] = { (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0) };

static const MR_DuArgLocn hlds__pred_name__hlds__pred_name__field_locns_transform_name_0_16[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_transform_name_0_16 = {
  (MR_String) "tn_io_tabling",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 13,
  INT32_C(16),
  hlds__pred_name__hlds__pred_name__field_types_transform_name_0_16,
  NULL,
  hlds__pred_name__hlds__pred_name__field_locns_transform_name_0_16,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_transform_name_0_17[2] = {
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuArgLocn hlds__pred_name__hlds__pred_name__field_locns_transform_name_0_17[2] = {
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

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_transform_name_0_17 = {
  (MR_String) "tn_minimal_model_generator",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 14,
  INT32_C(17),
  hlds__pred_name__hlds__pred_name__field_types_transform_name_0_17,
  NULL,
  hlds__pred_name__hlds__pred_name__field_locns_transform_name_0_17,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_transform_name_0_18[5] = {
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0),
  (MR_PseudoTypeInfo) (&hlds__pred_name__hlds__pred_name__type_ctor_info_stm_clone_kind_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuArgLocn hlds__pred_name__hlds__pred_name__field_locns_transform_name_0_18[5] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 3,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 3
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

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_transform_name_0_18 = {
  (MR_String) "tn_stm_expanded",
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 15,
  INT32_C(18),
  hlds__pred_name__hlds__pred_name__field_types_transform_name_0_18,
  NULL,
  hlds__pred_name__hlds__pred_name__field_locns_transform_name_0_18,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_transform_name_0_19[3] = {
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&hlds__pred_name__list__ti_list_1builtin__type_ctor_info_int_0)
};

static const MR_DuArgLocn hlds__pred_name__hlds__pred_name__field_locns_transform_name_0_19[3] = {
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

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_transform_name_0_19 = {
  (MR_String) "tn_unused_args",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 16,
  INT32_C(19),
  hlds__pred_name__hlds__pred_name__field_types_transform_name_0_19,
  NULL,
  hlds__pred_name__hlds__pred_name__field_locns_transform_name_0_19,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_stag_ordered_transform_name_0_0[1] = { &hlds__pred_name__hlds__pred_name__du_functor_desc_transform_name_0_0 };

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_stag_ordered_transform_name_0_1[1] = { &hlds__pred_name__hlds__pred_name__du_functor_desc_transform_name_0_1 };

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_stag_ordered_transform_name_0_2[1] = { &hlds__pred_name__hlds__pred_name__du_functor_desc_transform_name_0_2 };

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_stag_ordered_transform_name_0_3[17] = {
  &hlds__pred_name__hlds__pred_name__du_functor_desc_transform_name_0_3,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_transform_name_0_4,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_transform_name_0_5,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_transform_name_0_6,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_transform_name_0_7,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_transform_name_0_8,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_transform_name_0_9,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_transform_name_0_10,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_transform_name_0_11,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_transform_name_0_12,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_transform_name_0_13,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_transform_name_0_14,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_transform_name_0_15,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_transform_name_0_16,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_transform_name_0_17,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_transform_name_0_18,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_transform_name_0_19
};

static const MR_DuPtagLayout hlds__pred_name__hlds__pred_name__du_ptag_ordered_transform_name_0[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__pred_name__hlds__pred_name__du_stag_ordered_transform_name_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__pred_name__hlds__pred_name__du_stag_ordered_transform_name_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__pred_name__hlds__pred_name__du_stag_ordered_transform_name_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(17),
    MR_SECTAG_REMOTE_FULL_WORD,
    hlds__pred_name__hlds__pred_name__du_stag_ordered_transform_name_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_name_ordered_transform_name_0[20] = {
  &hlds__pred_name__hlds__pred_name__du_functor_desc_transform_name_0_3,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_transform_name_0_2,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_transform_name_0_4,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_transform_name_0_11,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_transform_name_0_0,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_transform_name_0_16,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_transform_name_0_5,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_transform_name_0_9,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_transform_name_0_6,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_transform_name_0_17,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_transform_name_0_12,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_transform_name_0_13,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_transform_name_0_15,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_transform_name_0_10,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_transform_name_0_18,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_transform_name_0_14,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_transform_name_0_7,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_transform_name_0_8,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_transform_name_0_19,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_transform_name_0_1
};

static const MR_Integer hlds__pred_name__hlds__pred_name__functor_number_map_transform_name_0[20] = {
  (MR_Integer) 4,
  (MR_Integer) 19,
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 6,
  (MR_Integer) 8,
  (MR_Integer) 16,
  (MR_Integer) 17,
  (MR_Integer) 7,
  (MR_Integer) 13,
  (MR_Integer) 3,
  (MR_Integer) 10,
  (MR_Integer) 11,
  (MR_Integer) 15,
  (MR_Integer) 12,
  (MR_Integer) 5,
  (MR_Integer) 9,
  (MR_Integer) 14,
  (MR_Integer) 18
};

const MR_TypeCtorInfo_Struct hlds__pred_name__hlds__pred_name__type_ctor_info_transform_name_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__pred_name____Unify____transform_name_0_0_10001)),
  ((MR_Box) (hlds__pred_name____Compare____transform_name_0_0_10001)),
  (MR_String) "hlds.pred_name",
  (MR_String) "transform_name",
  { hlds__pred_name__hlds__pred_name__du_name_ordered_transform_name_0 },
  { hlds__pred_name__hlds__pred_name__du_ptag_ordered_transform_name_0 },
  (MR_Integer) 20,
  UINT16_C(12),
  hlds__pred_name__hlds__pred_name__functor_number_map_transform_name_0,

};

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_user_made_0_0[3] = {
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0),
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_user_arity_0)
};

static const MR_DuArgLocn hlds__pred_name__hlds__pred_name__field_locns_user_made_0_0[3] = {
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

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_user_made_0_0 = {
  (MR_String) "user_made_pred",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__pred_name__hlds__pred_name__field_types_user_made_0_0,
  NULL,
  hlds__pred_name__hlds__pred_name__field_locns_user_made_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_user_made_0_1[3] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_user_made_0_1 = {
  (MR_String) "user_made_lambda",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  hlds__pred_name__hlds__pred_name__field_types_user_made_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_user_made_0_2[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pf_sym_name_user_arity_0)
};

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_user_made_0_2 = {
  (MR_String) "user_made_class_method",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  hlds__pred_name__hlds__pred_name__field_types_user_made_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_user_made_0_3[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pf_sym_name_user_arity_0),
  (MR_PseudoTypeInfo) (&hlds__pred_name__hlds__pred_name__type_ctor_info_instance_method_constraints_0)
};

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_user_made_0_3 = {
  (MR_String) "user_made_instance_method",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(3),
  hlds__pred_name__hlds__pred_name__field_types_user_made_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_user_made_0_4[3] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data_rare__parse_tree__prog_data_rare__type_ctor_info_promise_type_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuArgLocn hlds__pred_name__hlds__pred_name__field_locns_user_made_0_4[3] = {
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

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_user_made_0_4 = {
  (MR_String) "user_made_assertion",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(4),
  hlds__pred_name__hlds__pred_name__field_types_user_made_0_4,
  NULL,
  hlds__pred_name__hlds__pred_name__field_locns_user_made_0_4,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_stag_ordered_user_made_0_0[1] = { &hlds__pred_name__hlds__pred_name__du_functor_desc_user_made_0_0 };

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_stag_ordered_user_made_0_1[1] = { &hlds__pred_name__hlds__pred_name__du_functor_desc_user_made_0_1 };

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_stag_ordered_user_made_0_2[1] = { &hlds__pred_name__hlds__pred_name__du_functor_desc_user_made_0_2 };

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_stag_ordered_user_made_0_3[2] = {
  &hlds__pred_name__hlds__pred_name__du_functor_desc_user_made_0_3,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_user_made_0_4
};

static const MR_DuPtagLayout hlds__pred_name__hlds__pred_name__du_ptag_ordered_user_made_0[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__pred_name__hlds__pred_name__du_stag_ordered_user_made_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__pred_name__hlds__pred_name__du_stag_ordered_user_made_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__pred_name__hlds__pred_name__du_stag_ordered_user_made_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(2),
    MR_SECTAG_REMOTE_FULL_WORD,
    hlds__pred_name__hlds__pred_name__du_stag_ordered_user_made_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_name_ordered_user_made_0[5] = {
  &hlds__pred_name__hlds__pred_name__du_functor_desc_user_made_0_4,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_user_made_0_2,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_user_made_0_3,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_user_made_0_1,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_user_made_0_0
};

static const MR_Integer hlds__pred_name__hlds__pred_name__functor_number_map_user_made_0[5] = {
  (MR_Integer) 4,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__pred_name__hlds__pred_name__type_ctor_info_user_made_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__pred_name____Unify____user_made_0_0_10001)),
  ((MR_Box) (hlds__pred_name____Compare____user_made_0_0_10001)),
  (MR_String) "hlds.pred_name",
  (MR_String) "user_made",
  { hlds__pred_name__hlds__pred_name__du_name_ordered_user_made_0 },
  { hlds__pred_name__hlds__pred_name__du_ptag_ordered_user_made_0 },
  (MR_Integer) 5,
  UINT16_C(12),
  hlds__pred_name__hlds__pred_name__functor_number_map_user_made_0,

};

static const MR_EnumFunctorDesc hlds__pred_name__hlds__pred_name__enum_functor_desc_user_or_dev_0_0 = {
  (MR_String) "user",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__pred_name__hlds__pred_name__enum_functor_desc_user_or_dev_0_1 = {
  (MR_String) "dev",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__pred_name__hlds__pred_name__enum_ordinal_ordered_user_or_dev_0[2] = {
  &hlds__pred_name__hlds__pred_name__enum_functor_desc_user_or_dev_0_0,
  &hlds__pred_name__hlds__pred_name__enum_functor_desc_user_or_dev_0_1
};

static const MR_EnumFunctorDescPtr hlds__pred_name__hlds__pred_name__enum_name_ordered_user_or_dev_0[2] = {
  &hlds__pred_name__hlds__pred_name__enum_functor_desc_user_or_dev_0_1,
  &hlds__pred_name__hlds__pred_name__enum_functor_desc_user_or_dev_0_0
};

static const MR_Integer hlds__pred_name__hlds__pred_name__functor_number_map_user_or_dev_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__pred_name__hlds__pred_name__type_ctor_info_user_or_dev_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__pred_name____Unify____user_or_dev_0_0_10001)),
  ((MR_Box) (hlds__pred_name____Compare____user_or_dev_0_0_10001)),
  (MR_String) "hlds.pred_name",
  (MR_String) "user_or_dev",
  { hlds__pred_name__hlds__pred_name__enum_name_ordered_user_or_dev_0 },
  { hlds__pred_name__hlds__pred_name__enum_ordinal_ordered_user_or_dev_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__pred_name__hlds__pred_name__functor_number_map_user_or_dev_0,

};

static MR_String MR_CALL 
hlds__pred_name__IntroducedFrom__func__type_to_txq_mrtq_stuffed_string__1929__3_1_f_0(
  MR_String LambdaHeadVar__1_102)
{
  MR_String LambdaHeadVar__2_103;

  LambdaHeadVar__2_103 = mercury__string__f_43_43_2_f_0((MR_String) "_txq_m_", LambdaHeadVar__1_102);
  return LambdaHeadVar__2_103;
}

static MR_String MR_CALL 
hlds__pred_name__IntroducedFrom__func__type_to_txq_mrtq_stuffed_string__1929__2_1_f_0(
  MR_String LambdaHeadVar__1_82)
{
  MR_String LambdaHeadVar__2_83;

  LambdaHeadVar__2_83 = mercury__string__f_43_43_2_f_0((MR_String) "_txq_m_", LambdaHeadVar__1_82);
  return LambdaHeadVar__2_83;
}

static MR_String MR_CALL 
hlds__pred_name__IntroducedFrom__func__type_to_txq_mrtq_stuffed_string__1929__1_1_f_0(
  MR_String LambdaHeadVar__1_47)
{
  MR_String LambdaHeadVar__2_48;

  LambdaHeadVar__2_48 = mercury__string__f_43_43_2_f_0((MR_String) "_txq_m_", LambdaHeadVar__1_47);
  return LambdaHeadVar__2_48;
}

static MR_String MR_CALL 
hlds__pred_name__IntroducedFrom__func__layout_origin_name_new__1623__1_1_f_0(
  MR_String LambdaHeadVar__1_80)
{
  MR_String LambdaHeadVar__2_81;

  LambdaHeadVar__2_81 = mercury__string__f_43_43_2_f_0((MR_String) "_mrtq_m_", LambdaHeadVar__1_80);
  return LambdaHeadVar__2_81;
}

static void MR_CALL 
hlds__pred_name____Compare____user_or_dev_0_0(
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
hlds__pred_name____Unify____user_or_dev_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
hlds__pred_name____Compare____transform_name_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_146 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_147 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_146 == CastY_147);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Integer IndexX_4;
    MR_Integer IndexY_5;

    hlds__pred_name____Index____transform_name_0_0(HeadVar__2_2, &IndexX_4);
    hlds__pred_name____Index____transform_name_0_0(HeadVar__3_3, &IndexY_5);
    succeeded = (IndexX_4 < IndexY_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (IndexX_4 > IndexY_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word CompareResult_6;

        switch (MR_tag((MR_Word) HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgX1_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 1);
              MR_Word ArgY1_8;
              MR_Integer ArgX2_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
              MR_Integer ArgY2_11;
              MR_Word SubResult1_9;
              MR_Integer Var_215;
              MR_Integer Var_216;

              succeeded = ((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0);
              if (succeeded)
              {
                ArgY1_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) & (MR_Integer) 1);
                ArgY2_11 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 1))));
                Var_215 = (MR_Integer) (ArgX1_7);
                Var_216 = (MR_Integer) (ArgY1_8);
                succeeded = (Var_215 < Var_216);
                if (succeeded)
                {
                  SubResult1_9 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = (Var_215 > Var_216);
                  if (succeeded)
                  {
                    SubResult1_9 = (MR_Integer) 2;
                    succeeded = MR_TRUE;
                  }
                }
                if (succeeded)
                  CompareResult_6 = SubResult1_9;
                else
                {
                  succeeded = (ArgX2_10 < ArgY2_11);
                  if (succeeded)
                    CompareResult_6 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (ArgX2_10 > ArgY2_11);
                    if (succeeded)
                      CompareResult_6 = (MR_Integer) 2;
                    else
                      CompareResult_6 = (MR_Integer) 0;
                  }
                }
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_12 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 0))) & (MR_Integer) 1);
              MR_Word ArgY1_13;
              MR_Word ArgX2_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
              MR_Word ArgY2_16;
              MR_Integer ArgX3_18 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 2))));
              MR_Integer ArgY3_19;
              MR_Integer ArgX4_21 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 3))));
              MR_Integer ArgY4_22;
              MR_Word SubResult1_14;
              MR_Integer Var_245;
              MR_Integer Var_246;

              succeeded = ((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1);
              if (succeeded)
              {
                ArgY1_13 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, 0))) & (MR_Integer) 1);
                ArgY2_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
                ArgY3_19 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, 2))));
                ArgY4_22 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, 3))));
                Var_245 = (MR_Integer) (ArgX1_12);
                Var_246 = (MR_Integer) (ArgY1_13);
                succeeded = (Var_245 < Var_246);
                if (succeeded)
                {
                  SubResult1_14 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = (Var_245 > Var_246);
                  if (succeeded)
                  {
                    SubResult1_14 = (MR_Integer) 2;
                    succeeded = MR_TRUE;
                  }
                }
                if (succeeded)
                  CompareResult_6 = SubResult1_14;
                else
                {
                  MR_Word SubResult2_17;

                  hlds__pred_proc_id____Compare____pred_id_0_0(&SubResult2_17, ArgX2_15, ArgY2_16);
                  succeeded = (SubResult2_17 != (MR_Integer) 0);
                  if (succeeded)
                    CompareResult_6 = SubResult2_17;
                  else
                  {
                    MR_Word SubResult3_20;

                    succeeded = (ArgX3_18 < ArgY3_19);
                    if (succeeded)
                    {
                      SubResult3_20 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (ArgX3_18 > ArgY3_19);
                      if (succeeded)
                      {
                        SubResult3_20 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                    }
                    if (succeeded)
                      CompareResult_6 = SubResult3_20;
                    else
                    {
                      succeeded = (ArgX4_21 < ArgY4_22);
                      if (succeeded)
                        CompareResult_6 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (ArgX4_21 > ArgY4_22);
                        if (succeeded)
                          CompareResult_6 = (MR_Integer) 2;
                        else
                          CompareResult_6 = (MR_Integer) 0;
                      }
                    }
                  }
                }
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgX1_23 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__2_2, 0))) & (MR_Integer) 1);
              MR_Word ArgY1_24;
              MR_Word ArgX2_26 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 1))));
              MR_Word ArgY2_27;
              MR_Word ArgX3_29 = ((((MR_Unsigned) ((MR_hl_field(2, HeadVar__2_2, 2))) >> 1)) & (MR_Integer) 1);
              MR_Word ArgY3_30;
              MR_Word ArgX4_32 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__2_2, 2))) & (MR_Integer) 1);
              MR_Word ArgY4_33;
              MR_Integer ArgX5_35 = ((MR_Integer) ((MR_hl_field(2, HeadVar__2_2, 3))));
              MR_Integer ArgY5_36;
              MR_Word SubResult1_25;
              MR_Integer Var_203;
              MR_Integer Var_204;

              succeeded = ((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 2);
              if (succeeded)
              {
                ArgY1_24 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__3_3, 0))) & (MR_Integer) 1);
                ArgY2_27 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, 1))));
                ArgY3_30 = ((((MR_Unsigned) ((MR_hl_field(2, HeadVar__3_3, 2))) >> 1)) & (MR_Integer) 1);
                ArgY4_33 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__3_3, 2))) & (MR_Integer) 1);
                ArgY5_36 = ((MR_Integer) ((MR_hl_field(2, HeadVar__3_3, 3))));
                Var_203 = (MR_Integer) (ArgX1_23);
                Var_204 = (MR_Integer) (ArgY1_24);
                succeeded = (Var_203 < Var_204);
                if (succeeded)
                {
                  SubResult1_25 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = (Var_203 > Var_204);
                  if (succeeded)
                  {
                    SubResult1_25 = (MR_Integer) 2;
                    succeeded = MR_TRUE;
                  }
                }
                if (succeeded)
                  CompareResult_6 = SubResult1_25;
                else
                {
                  MR_Word SubResult2_28;
                  MR_Integer Var_205 = (MR_Integer) (ArgX2_26);
                  MR_Integer Var_206 = (MR_Integer) (ArgY2_27);

                  succeeded = (Var_205 < Var_206);
                  if (succeeded)
                  {
                    SubResult2_28 = (MR_Integer) 1;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = (Var_205 > Var_206);
                    if (succeeded)
                    {
                      SubResult2_28 = (MR_Integer) 2;
                      succeeded = MR_TRUE;
                    }
                  }
                  if (succeeded)
                    CompareResult_6 = SubResult2_28;
                  else
                  {
                    MR_Word SubResult3_31;
                    MR_Integer Var_207 = (MR_Integer) (ArgX3_29);
                    MR_Integer Var_208 = (MR_Integer) (ArgY3_30);

                    succeeded = (Var_207 < Var_208);
                    if (succeeded)
                    {
                      SubResult3_31 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (Var_207 > Var_208);
                      if (succeeded)
                      {
                        SubResult3_31 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                    }
                    if (succeeded)
                      CompareResult_6 = SubResult3_31;
                    else
                    {
                      MR_Word SubResult4_34;
                      MR_Integer Var_209 = (MR_Integer) (ArgX4_32);
                      MR_Integer Var_210 = (MR_Integer) (ArgY4_33);

                      succeeded = (Var_209 < Var_210);
                      if (succeeded)
                      {
                        SubResult4_34 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (Var_209 > Var_210);
                        if (succeeded)
                        {
                          SubResult4_34 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                      }
                      if (succeeded)
                        CompareResult_6 = SubResult4_34;
                      else
                      {
                        succeeded = (ArgX5_35 < ArgY5_36);
                        if (succeeded)
                          CompareResult_6 = (MR_Integer) 1;
                        else
                        {
                          succeeded = (ArgX5_35 > ArgY5_36);
                          if (succeeded)
                            CompareResult_6 = (MR_Integer) 2;
                          else
                            CompareResult_6 = (MR_Integer) 0;
                        }
                      }
                    }
                  }
                }
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ArgX1_37 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 1))) & (MR_Integer) 1);
                  MR_Word ArgY1_38;
                  MR_Word ArgX2_40 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                  MR_Word ArgY2_41;
                  MR_Word SubResult1_39;
                  MR_Integer Var_201;
                  MR_Integer Var_202;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 0)));
                  if (succeeded)
                  {
                    ArgY1_38 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, 1))) & (MR_Integer) 1);
                    ArgY2_41 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 2))));
                    Var_201 = (MR_Integer) (ArgX1_37);
                    Var_202 = (MR_Integer) (ArgY1_38);
                    succeeded = (Var_201 < Var_202);
                    if (succeeded)
                    {
                      SubResult1_39 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (Var_201 > Var_202);
                      if (succeeded)
                      {
                        SubResult1_39 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                    }
                    if (succeeded)
                      CompareResult_6 = SubResult1_39;
                    else
                      hlds__pred_name____Compare____line_number_and_counter_0_0(&CompareResult_6, ArgX2_40, ArgY2_41);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgX1_42 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 1))) & (MR_Integer) 1);
                  MR_Word ArgY1_43;
                  MR_Word ArgX2_45 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                  MR_Word ArgY2_46;
                  MR_Word SubResult1_44;
                  MR_Integer Var_211;
                  MR_Integer Var_212;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 1)));
                  if (succeeded)
                  {
                    ArgY1_43 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, 1))) & (MR_Integer) 1);
                    ArgY2_46 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 2))));
                    Var_211 = (MR_Integer) (ArgX1_42);
                    Var_212 = (MR_Integer) (ArgY1_43);
                    succeeded = (Var_211 < Var_212);
                    if (succeeded)
                    {
                      SubResult1_44 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (Var_211 > Var_212);
                      if (succeeded)
                      {
                        SubResult1_44 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                    }
                    if (succeeded)
                      CompareResult_6 = SubResult1_44;
                    else
                      hlds__pred_name____Compare____line_number_and_counter_0_0(&CompareResult_6, ArgX2_45, ArgY2_46);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ArgX1_47 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 1))) & (MR_Integer) 1);
                  MR_Word ArgY1_48;
                  MR_Word ArgX2_50 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                  MR_Word ArgY2_51;
                  MR_Word SubResult1_49;
                  MR_Integer Var_219;
                  MR_Integer Var_220;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 2)));
                  if (succeeded)
                  {
                    ArgY1_48 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, 1))) & (MR_Integer) 1);
                    ArgY2_51 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 2))));
                    Var_219 = (MR_Integer) (ArgX1_47);
                    Var_220 = (MR_Integer) (ArgY1_48);
                    succeeded = (Var_219 < Var_220);
                    if (succeeded)
                    {
                      SubResult1_49 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (Var_219 > Var_220);
                      if (succeeded)
                      {
                        SubResult1_49 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                    }
                    if (succeeded)
                      CompareResult_6 = SubResult1_49;
                    else
                      hlds__pred_name____Compare____line_number_and_counter_0_0(&CompareResult_6, ArgX2_50, ArgY2_51);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word ArgX1_52 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 1))) & (MR_Integer) 1);
                  MR_Word ArgY1_53;
                  MR_Integer ArgX2_55 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 2))));
                  MR_Integer ArgY2_56;
                  MR_Word ArgX3_58 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                  MR_Word ArgY3_59;
                  MR_Word SubResult1_54;
                  MR_Integer Var_223;
                  MR_Integer Var_224;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 3)));
                  if (succeeded)
                  {
                    ArgY1_53 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, 1))) & (MR_Integer) 1);
                    ArgY2_56 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 2))));
                    ArgY3_59 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 3))));
                    Var_223 = (MR_Integer) (ArgX1_52);
                    Var_224 = (MR_Integer) (ArgY1_53);
                    succeeded = (Var_223 < Var_224);
                    if (succeeded)
                    {
                      SubResult1_54 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (Var_223 > Var_224);
                      if (succeeded)
                      {
                        SubResult1_54 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                    }
                    if (succeeded)
                      CompareResult_6 = SubResult1_54;
                    else
                    {
                      MR_Word SubResult2_57;

                      succeeded = (ArgX2_55 < ArgY2_56);
                      if (succeeded)
                      {
                        SubResult2_57 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (ArgX2_55 > ArgY2_56);
                        if (succeeded)
                        {
                          SubResult2_57 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                      }
                      if (succeeded)
                        CompareResult_6 = SubResult2_57;
                      else
                        hlds__pred_name____Compare____line_number_and_counter_0_0(&CompareResult_6, ArgX3_58, ArgY3_59);
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word ArgX1_60 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 1))) & (MR_Integer) 1);
                  MR_Word ArgY1_61;
                  MR_Integer ArgX2_63 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 2))));
                  MR_Integer ArgY2_64;
                  MR_Word ArgX3_66 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                  MR_Word ArgY3_67;
                  MR_Word SubResult1_62;
                  MR_Integer Var_239;
                  MR_Integer Var_240;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 4)));
                  if (succeeded)
                  {
                    ArgY1_61 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, 1))) & (MR_Integer) 1);
                    ArgY2_64 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 2))));
                    ArgY3_67 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 3))));
                    Var_239 = (MR_Integer) (ArgX1_60);
                    Var_240 = (MR_Integer) (ArgY1_61);
                    succeeded = (Var_239 < Var_240);
                    if (succeeded)
                    {
                      SubResult1_62 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (Var_239 > Var_240);
                      if (succeeded)
                      {
                        SubResult1_62 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                    }
                    if (succeeded)
                      CompareResult_6 = SubResult1_62;
                    else
                    {
                      MR_Word SubResult2_65;

                      succeeded = (ArgX2_63 < ArgY2_64);
                      if (succeeded)
                      {
                        SubResult2_65 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (ArgX2_63 > ArgY2_64);
                        if (succeeded)
                        {
                          SubResult2_65 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                      }
                      if (succeeded)
                        CompareResult_6 = SubResult2_65;
                      else
                        hlds__pred_name____Compare____line_number_and_counter_0_0(&CompareResult_6, ArgX3_66, ArgY3_67);
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word ArgX1_68 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 1))) & (MR_Integer) 1);
                  MR_Word ArgY1_69;
                  MR_Integer ArgX2_71 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 2))));
                  MR_Integer ArgY2_72;
                  MR_Word ArgX3_74 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                  MR_Word ArgY3_75;
                  MR_Word SubResult1_70;
                  MR_Integer Var_241;
                  MR_Integer Var_242;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 5)));
                  if (succeeded)
                  {
                    ArgY1_69 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, 1))) & (MR_Integer) 1);
                    ArgY2_72 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 2))));
                    ArgY3_75 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 3))));
                    Var_241 = (MR_Integer) (ArgX1_68);
                    Var_242 = (MR_Integer) (ArgY1_69);
                    succeeded = (Var_241 < Var_242);
                    if (succeeded)
                    {
                      SubResult1_70 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (Var_241 > Var_242);
                      if (succeeded)
                      {
                        SubResult1_70 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                    }
                    if (succeeded)
                      CompareResult_6 = SubResult1_70;
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
                        CompareResult_6 = SubResult2_73;
                      else
                        hlds__pred_name____Compare____line_number_and_counter_0_0(&CompareResult_6, ArgX3_74, ArgY3_75);
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Word ArgX1_76 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 1))) & (MR_Integer) 1);
                  MR_Word ArgY1_77;
                  MR_Integer ArgX2_79 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 2))));
                  MR_Integer ArgY2_80;
                  MR_Word SubResult1_78;
                  MR_Integer Var_221;
                  MR_Integer Var_222;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 6)));
                  if (succeeded)
                  {
                    ArgY1_77 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, 1))) & (MR_Integer) 1);
                    ArgY2_80 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 2))));
                    Var_221 = (MR_Integer) (ArgX1_76);
                    Var_222 = (MR_Integer) (ArgY1_77);
                    succeeded = (Var_221 < Var_222);
                    if (succeeded)
                    {
                      SubResult1_78 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (Var_221 > Var_222);
                      if (succeeded)
                      {
                        SubResult1_78 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                    }
                    if (succeeded)
                      CompareResult_6 = SubResult1_78;
                    else
                    {
                      succeeded = (ArgX2_79 < ArgY2_80);
                      if (succeeded)
                        CompareResult_6 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (ArgX2_79 > ArgY2_80);
                        if (succeeded)
                          CompareResult_6 = (MR_Integer) 2;
                        else
                          CompareResult_6 = (MR_Integer) 0;
                      }
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 7:
                {
                  MR_Word ArgX1_81 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 1))) & (MR_Integer) 1);
                  MR_Word ArgY1_82;
                  MR_Integer Var_231;
                  MR_Integer Var_232;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 7)));
                  if (succeeded)
                  {
                    ArgY1_82 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, 1))) & (MR_Integer) 1);
                    Var_231 = (MR_Integer) (ArgX1_81);
                    Var_232 = (MR_Integer) (ArgY1_82);
                    succeeded = (Var_231 < Var_232);
                    if (succeeded)
                      CompareResult_6 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (Var_231 > Var_232);
                      if (succeeded)
                        CompareResult_6 = (MR_Integer) 2;
                      else
                        CompareResult_6 = (MR_Integer) 0;
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 8:
                {
                  MR_Word ArgX1_83 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 1))) & (MR_Integer) 1);
                  MR_Word ArgY1_84;
                  MR_Integer ArgX2_86 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 2))));
                  MR_Integer ArgY2_87;
                  MR_Word ArgX3_89 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                  MR_Word ArgY3_90;
                  MR_Word SubResult1_85;
                  MR_Integer Var_213;
                  MR_Integer Var_214;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 8)));
                  if (succeeded)
                  {
                    ArgY1_84 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, 1))) & (MR_Integer) 1);
                    ArgY2_87 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 2))));
                    ArgY3_90 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 3))));
                    Var_213 = (MR_Integer) (ArgX1_83);
                    Var_214 = (MR_Integer) (ArgY1_84);
                    succeeded = (Var_213 < Var_214);
                    if (succeeded)
                    {
                      SubResult1_85 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (Var_213 > Var_214);
                      if (succeeded)
                      {
                        SubResult1_85 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                    }
                    if (succeeded)
                      CompareResult_6 = SubResult1_85;
                    else
                    {
                      MR_Word SubResult2_88;

                      succeeded = (ArgX2_86 < ArgY2_87);
                      if (succeeded)
                      {
                        SubResult2_88 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (ArgX2_86 > ArgY2_87);
                        if (succeeded)
                        {
                          SubResult2_88 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                      }
                      if (succeeded)
                        CompareResult_6 = SubResult2_88;
                      else
                        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_2[3]), &CompareResult_6, ((MR_Box) (ArgX3_89)), ((MR_Box) (ArgY3_90)));
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 9:
                {
                  MR_Word ArgX1_91 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 1))) & (MR_Integer) 1);
                  MR_Word ArgY1_92;
                  MR_Integer ArgX2_94 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 2))));
                  MR_Integer ArgY2_95;
                  MR_Word SubResult1_93;
                  MR_Integer Var_227;
                  MR_Integer Var_228;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 9)));
                  if (succeeded)
                  {
                    ArgY1_92 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, 1))) & (MR_Integer) 1);
                    ArgY2_95 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 2))));
                    Var_227 = (MR_Integer) (ArgX1_91);
                    Var_228 = (MR_Integer) (ArgY1_92);
                    succeeded = (Var_227 < Var_228);
                    if (succeeded)
                    {
                      SubResult1_93 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (Var_227 > Var_228);
                      if (succeeded)
                      {
                        SubResult1_93 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                    }
                    if (succeeded)
                      CompareResult_6 = SubResult1_93;
                    else
                    {
                      succeeded = (ArgX2_94 < ArgY2_95);
                      if (succeeded)
                        CompareResult_6 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (ArgX2_94 > ArgY2_95);
                        if (succeeded)
                          CompareResult_6 = (MR_Integer) 2;
                        else
                          CompareResult_6 = (MR_Integer) 0;
                      }
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 10:
                {
                  MR_Word ArgX1_96 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 1))) & (MR_Integer) 1);
                  MR_Word ArgY1_97;
                  MR_Integer ArgX2_99 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 2))));
                  MR_Integer ArgY2_100;
                  MR_Word SubResult1_98;
                  MR_Integer Var_229;
                  MR_Integer Var_230;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 10)));
                  if (succeeded)
                  {
                    ArgY1_97 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, 1))) & (MR_Integer) 1);
                    ArgY2_100 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 2))));
                    Var_229 = (MR_Integer) (ArgX1_96);
                    Var_230 = (MR_Integer) (ArgY1_97);
                    succeeded = (Var_229 < Var_230);
                    if (succeeded)
                    {
                      SubResult1_98 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (Var_229 > Var_230);
                      if (succeeded)
                      {
                        SubResult1_98 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                    }
                    if (succeeded)
                      CompareResult_6 = SubResult1_98;
                    else
                    {
                      succeeded = (ArgX2_99 < ArgY2_100);
                      if (succeeded)
                        CompareResult_6 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (ArgX2_99 > ArgY2_100);
                        if (succeeded)
                          CompareResult_6 = (MR_Integer) 2;
                        else
                          CompareResult_6 = (MR_Integer) 0;
                      }
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 11:
                {
                  MR_Word ArgX1_101 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 1))) & (MR_Integer) 1);
                  MR_Word ArgY1_102;
                  MR_Integer ArgX2_104 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 2))));
                  MR_Integer ArgY2_105;
                  MR_Word ArgX3_107 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                  MR_Word ArgY3_108;
                  MR_Word SubResult1_103;
                  MR_Integer Var_237;
                  MR_Integer Var_238;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 11)));
                  if (succeeded)
                  {
                    ArgY1_102 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, 1))) & (MR_Integer) 1);
                    ArgY2_105 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 2))));
                    ArgY3_108 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 3))));
                    Var_237 = (MR_Integer) (ArgX1_101);
                    Var_238 = (MR_Integer) (ArgY1_102);
                    succeeded = (Var_237 < Var_238);
                    if (succeeded)
                    {
                      SubResult1_103 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (Var_237 > Var_238);
                      if (succeeded)
                      {
                        SubResult1_103 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                    }
                    if (succeeded)
                      CompareResult_6 = SubResult1_103;
                    else
                    {
                      MR_Word SubResult2_106;

                      succeeded = (ArgX2_104 < ArgY2_105);
                      if (succeeded)
                      {
                        SubResult2_106 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (ArgX2_104 > ArgY2_105);
                        if (succeeded)
                        {
                          SubResult2_106 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                      }
                      if (succeeded)
                        CompareResult_6 = SubResult2_106;
                      else
                        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_2[3]), &CompareResult_6, ((MR_Box) (ArgX3_107)), ((MR_Box) (ArgY3_108)));
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 12:
                {
                  MR_Word ArgX1_109 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  MR_Word ArgY1_110;
                  MR_Word ArgX2_112 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                  MR_Word ArgY2_113;
                  MR_Word ArgX3_115 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                  MR_Word ArgY3_116;
                  MR_Word SubResult1_111;
                  MR_Word TypeInfo_176_176;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 12)));
                  if (succeeded)
                  {
                    ArgY1_110 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));
                    ArgY2_113 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 2))));
                    ArgY3_116 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 3))));
                    TypeInfo_176_176 = (MR_Word) (&hlds__pred_name_scalar_common_2[4]);
                    mercury__builtin__compare_3_p_0(TypeInfo_176_176, &SubResult1_111, ((MR_Box) (ArgX1_109)), ((MR_Box) (ArgY1_110)));
                    succeeded = (SubResult1_111 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_111;
                    else
                    {
                      MR_Word SubResult2_114;

                      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_2[5]), &SubResult2_114, ((MR_Box) (ArgX2_112)), ((MR_Box) (ArgY2_113)));
                      succeeded = (SubResult2_114 != (MR_Integer) 0);
                      if (succeeded)
                        CompareResult_6 = SubResult2_114;
                      else
                        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_2[6]), &CompareResult_6, ((MR_Box) (ArgX3_115)), ((MR_Box) (ArgY3_116)));
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 13:
                {
                  MR_Word ArgX1_117 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 1))) & (MR_Integer) 1);
                  MR_Word ArgY1_118;
                  MR_Integer Var_217;
                  MR_Integer Var_218;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 13)));
                  if (succeeded)
                  {
                    ArgY1_118 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, 1))) & (MR_Integer) 1);
                    Var_217 = (MR_Integer) (ArgX1_117);
                    Var_218 = (MR_Integer) (ArgY1_118);
                    succeeded = (Var_217 < Var_218);
                    if (succeeded)
                      CompareResult_6 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (Var_217 > Var_218);
                      if (succeeded)
                        CompareResult_6 = (MR_Integer) 2;
                      else
                        CompareResult_6 = (MR_Integer) 0;
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 14:
                {
                  MR_Word ArgX1_119 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 1))) & (MR_Integer) 1);
                  MR_Word ArgY1_120;
                  MR_Integer ArgX2_122 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 2))));
                  MR_Integer ArgY2_123;
                  MR_Word SubResult1_121;
                  MR_Integer Var_225;
                  MR_Integer Var_226;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 14)));
                  if (succeeded)
                  {
                    ArgY1_120 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, 1))) & (MR_Integer) 1);
                    ArgY2_123 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 2))));
                    Var_225 = (MR_Integer) (ArgX1_119);
                    Var_226 = (MR_Integer) (ArgY1_120);
                    succeeded = (Var_225 < Var_226);
                    if (succeeded)
                    {
                      SubResult1_121 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (Var_225 > Var_226);
                      if (succeeded)
                      {
                        SubResult1_121 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                    }
                    if (succeeded)
                      CompareResult_6 = SubResult1_121;
                    else
                    {
                      succeeded = (ArgX2_122 < ArgY2_123);
                      if (succeeded)
                        CompareResult_6 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (ArgX2_122 > ArgY2_123);
                        if (succeeded)
                          CompareResult_6 = (MR_Integer) 2;
                        else
                          CompareResult_6 = (MR_Integer) 0;
                      }
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 15:
                {
                  MR_Word ArgX1_124 = ((((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 1))) >> 3)) & (MR_Integer) 1);
                  MR_Word ArgY1_125;
                  MR_Word ArgX2_127 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 1))) & (MR_Integer) 7);
                  MR_Word ArgY2_128;
                  MR_Integer ArgX3_130 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 2))));
                  MR_Integer ArgY3_131;
                  MR_Integer ArgX4_133 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 3))));
                  MR_Integer ArgY4_134;
                  MR_Integer ArgX5_136 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 4))));
                  MR_Integer ArgY5_137;
                  MR_Word SubResult1_126;
                  MR_Integer Var_233;
                  MR_Integer Var_234;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 15)));
                  if (succeeded)
                  {
                    ArgY1_125 = ((((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, 1))) >> 3)) & (MR_Integer) 1);
                    ArgY2_128 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, 1))) & (MR_Integer) 7);
                    ArgY3_131 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 2))));
                    ArgY4_134 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 3))));
                    ArgY5_137 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 4))));
                    Var_233 = (MR_Integer) (ArgX1_124);
                    Var_234 = (MR_Integer) (ArgY1_125);
                    succeeded = (Var_233 < Var_234);
                    if (succeeded)
                    {
                      SubResult1_126 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (Var_233 > Var_234);
                      if (succeeded)
                      {
                        SubResult1_126 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                    }
                    if (succeeded)
                      CompareResult_6 = SubResult1_126;
                    else
                    {
                      MR_Word SubResult2_129;
                      MR_Integer Var_235 = (MR_Integer) (ArgX2_127);
                      MR_Integer Var_236 = (MR_Integer) (ArgY2_128);

                      succeeded = (Var_235 < Var_236);
                      if (succeeded)
                      {
                        SubResult2_129 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (Var_235 > Var_236);
                        if (succeeded)
                        {
                          SubResult2_129 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                      }
                      if (succeeded)
                        CompareResult_6 = SubResult2_129;
                      else
                      {
                        MR_Word SubResult3_132;

                        succeeded = (ArgX3_130 < ArgY3_131);
                        if (succeeded)
                        {
                          SubResult3_132 = (MR_Integer) 1;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = (ArgX3_130 > ArgY3_131);
                          if (succeeded)
                          {
                            SubResult3_132 = (MR_Integer) 2;
                            succeeded = MR_TRUE;
                          }
                        }
                        if (succeeded)
                          CompareResult_6 = SubResult3_132;
                        else
                        {
                          MR_Word SubResult4_135;

                          succeeded = (ArgX4_133 < ArgY4_134);
                          if (succeeded)
                          {
                            SubResult4_135 = (MR_Integer) 1;
                            succeeded = MR_TRUE;
                          }
                          else
                          {
                            succeeded = (ArgX4_133 > ArgY4_134);
                            if (succeeded)
                            {
                              SubResult4_135 = (MR_Integer) 2;
                              succeeded = MR_TRUE;
                            }
                          }
                          if (succeeded)
                            CompareResult_6 = SubResult4_135;
                          else
                          {
                            succeeded = (ArgX5_136 < ArgY5_137);
                            if (succeeded)
                              CompareResult_6 = (MR_Integer) 1;
                            else
                            {
                              succeeded = (ArgX5_136 > ArgY5_137);
                              if (succeeded)
                                CompareResult_6 = (MR_Integer) 2;
                              else
                                CompareResult_6 = (MR_Integer) 0;
                            }
                          }
                        }
                      }
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 16:
                {
                  MR_Word ArgX1_138 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 1))) & (MR_Integer) 1);
                  MR_Word ArgY1_139;
                  MR_Integer ArgX2_141 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 2))));
                  MR_Integer ArgY2_142;
                  MR_Word ArgX3_144 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                  MR_Word ArgY3_145;
                  MR_Word SubResult1_140;
                  MR_Integer Var_243;
                  MR_Integer Var_244;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0)))) == (MR_Integer) 16)));
                  if (succeeded)
                  {
                    ArgY1_139 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, 1))) & (MR_Integer) 1);
                    ArgY2_142 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 2))));
                    ArgY3_145 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 3))));
                    Var_243 = (MR_Integer) (ArgX1_138);
                    Var_244 = (MR_Integer) (ArgY1_139);
                    succeeded = (Var_243 < Var_244);
                    if (succeeded)
                    {
                      SubResult1_140 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (Var_243 > Var_244);
                      if (succeeded)
                      {
                        SubResult1_140 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                    }
                    if (succeeded)
                      CompareResult_6 = SubResult1_140;
                    else
                    {
                      MR_Word SubResult2_143;

                      succeeded = (ArgX2_141 < ArgY2_142);
                      if (succeeded)
                      {
                        SubResult2_143 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (ArgX2_141 > ArgY2_142);
                        if (succeeded)
                        {
                          SubResult2_143 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                      }
                      if (succeeded)
                        CompareResult_6 = SubResult2_143;
                      else
                        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_2[3]), &CompareResult_6, ((MR_Box) (ArgX3_144)), ((MR_Box) (ArgY3_145)));
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
            }
            break;
        }
        if (succeeded)
          *HeadVar__1_1 = CompareResult_6;
        else
          {
            mercury__private_builtin__compare_error_0_p_0();
            return;
          }
      }
    }
  }
}

void MR_CALL 
hlds__pred_name____Index____transform_name_0_0(
  MR_Word HeadVar__1_1,
  MR_Integer * HeadVar__2_2)
{
  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *HeadVar__2_2 = (MR_Integer) 0;
      break;
    case (MR_Integer) 1:
      *HeadVar__2_2 = (MR_Integer) 1;
      break;
    case (MR_Integer) 2:
      *HeadVar__2_2 = (MR_Integer) 2;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *HeadVar__2_2 = (MR_Integer) 3;
          break;
        case (MR_Integer) 1:
          *HeadVar__2_2 = (MR_Integer) 4;
          break;
        case (MR_Integer) 2:
          *HeadVar__2_2 = (MR_Integer) 5;
          break;
        case (MR_Integer) 3:
          *HeadVar__2_2 = (MR_Integer) 6;
          break;
        case (MR_Integer) 4:
          *HeadVar__2_2 = (MR_Integer) 7;
          break;
        case (MR_Integer) 5:
          *HeadVar__2_2 = (MR_Integer) 8;
          break;
        case (MR_Integer) 6:
          *HeadVar__2_2 = (MR_Integer) 9;
          break;
        case (MR_Integer) 7:
          *HeadVar__2_2 = (MR_Integer) 10;
          break;
        case (MR_Integer) 8:
          *HeadVar__2_2 = (MR_Integer) 11;
          break;
        case (MR_Integer) 9:
          *HeadVar__2_2 = (MR_Integer) 12;
          break;
        case (MR_Integer) 10:
          *HeadVar__2_2 = (MR_Integer) 13;
          break;
        case (MR_Integer) 11:
          *HeadVar__2_2 = (MR_Integer) 14;
          break;
        case (MR_Integer) 12:
          *HeadVar__2_2 = (MR_Integer) 15;
          break;
        case (MR_Integer) 13:
          *HeadVar__2_2 = (MR_Integer) 16;
          break;
        case (MR_Integer) 14:
          *HeadVar__2_2 = (MR_Integer) 17;
          break;
        case (MR_Integer) 15:
          *HeadVar__2_2 = (MR_Integer) 18;
          break;
        case (MR_Integer) 16:
          *HeadVar__2_2 = (MR_Integer) 19;
          break;
      }
      break;
  }
}

MR_bool MR_CALL 
hlds__pred_name____Unify____transform_name_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_109 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_110 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_109 == CastY_110);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) & (MR_Integer) 1);
          MR_Word ArgY1_4;
          MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 1))));
          MR_Integer ArgY2_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 1);
            ArgY2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
            succeeded = (ArgX1_3 == ArgY1_4);
            if (succeeded)
              succeeded = (ArgX2_5 == ArgY2_6);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_7 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, 0))) & (MR_Integer) 1);
          MR_Word ArgY1_8;
          MR_Word ArgX2_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
          MR_Word ArgY2_10;
          MR_Integer ArgX3_11 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 2))));
          MR_Integer ArgY3_12;
          MR_Integer ArgX4_13 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 3))));
          MR_Integer ArgY4_14;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_8 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 0))) & (MR_Integer) 1);
            ArgY2_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
            ArgY3_12 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 2))));
            ArgY4_14 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 3))));
            succeeded = (ArgX1_7 == ArgY1_8);
            if (succeeded)
            {
              succeeded = hlds__pred_proc_id____Unify____pred_id_0_0(ArgX2_9, ArgY2_10);
              if (succeeded)
              {
                succeeded = (ArgX3_11 == ArgY3_12);
                if (succeeded)
                  succeeded = (ArgX4_13 == ArgY4_14);
              }
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgX1_15 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__1_1, 0))) & (MR_Integer) 1);
          MR_Word ArgY1_16;
          MR_Word ArgX2_17 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, 1))));
          MR_Word ArgY2_18;
          MR_Word ArgX3_19 = ((((MR_Unsigned) ((MR_hl_field(2, HeadVar__1_1, 2))) >> 1)) & (MR_Integer) 1);
          MR_Word ArgY3_20;
          MR_Word ArgX4_21 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__1_1, 2))) & (MR_Integer) 1);
          MR_Word ArgY4_22;
          MR_Integer ArgX5_23 = ((MR_Integer) ((MR_hl_field(2, HeadVar__1_1, 3))));
          MR_Integer ArgY5_24;
          MR_Integer Var_120;
          MR_Integer Var_121;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_16 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__2_2, 0))) & (MR_Integer) 1);
            ArgY2_18 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 1))));
            ArgY3_20 = ((((MR_Unsigned) ((MR_hl_field(2, HeadVar__2_2, 2))) >> 1)) & (MR_Integer) 1);
            ArgY4_22 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__2_2, 2))) & (MR_Integer) 1);
            ArgY5_24 = ((MR_Integer) ((MR_hl_field(2, HeadVar__2_2, 3))));
            succeeded = (ArgX1_15 == ArgY1_16);
            if (succeeded)
            {
              succeeded = (ArgX3_19 == ArgY3_20);
              if (succeeded)
              {
                succeeded = (ArgX4_21 == ArgY4_22);
                if (succeeded)
                {
                  succeeded = (ArgX5_23 == ArgY5_24);
                  if (succeeded)
                  {
                    Var_120 = (MR_Integer) (ArgX2_17);
                    Var_121 = (MR_Integer) (ArgY2_18);
                    succeeded = (Var_120 == Var_121);
                  }
                }
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
              MR_Word ArgX1_25 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, 1))) & (MR_Integer) 1);
              MR_Word ArgY1_26;
              MR_Word ArgX2_27 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Word ArgY2_28;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_26 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 1))) & (MR_Integer) 1);
                ArgY2_28 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                succeeded = (ArgX1_25 == ArgY1_26);
                if (succeeded)
                  succeeded = hlds__pred_name____Unify____line_number_and_counter_0_0(ArgX2_27, ArgY2_28);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_29 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, 1))) & (MR_Integer) 1);
              MR_Word ArgY1_30;
              MR_Word ArgX2_31 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Word ArgY2_32;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_30 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 1))) & (MR_Integer) 1);
                ArgY2_32 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                succeeded = (ArgX1_29 == ArgY1_30);
                if (succeeded)
                  succeeded = hlds__pred_name____Unify____line_number_and_counter_0_0(ArgX2_31, ArgY2_32);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgX1_33 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, 1))) & (MR_Integer) 1);
              MR_Word ArgY1_34;
              MR_Word ArgX2_35 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Word ArgY2_36;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 2)));
              if (succeeded)
              {
                ArgY1_34 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 1))) & (MR_Integer) 1);
                ArgY2_36 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                succeeded = (ArgX1_33 == ArgY1_34);
                if (succeeded)
                  succeeded = hlds__pred_name____Unify____line_number_and_counter_0_0(ArgX2_35, ArgY2_36);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ArgX1_37 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, 1))) & (MR_Integer) 1);
              MR_Word ArgY1_38;
              MR_Integer ArgX2_39 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Integer ArgY2_40;
              MR_Word ArgX3_41 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_Word ArgY3_42;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 3)));
              if (succeeded)
              {
                ArgY1_38 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 1))) & (MR_Integer) 1);
                ArgY2_40 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 2))));
                ArgY3_42 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                succeeded = (ArgX1_37 == ArgY1_38);
                if (succeeded)
                {
                  succeeded = (ArgX2_39 == ArgY2_40);
                  if (succeeded)
                    succeeded = hlds__pred_name____Unify____line_number_and_counter_0_0(ArgX3_41, ArgY3_42);
                }
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ArgX1_43 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, 1))) & (MR_Integer) 1);
              MR_Word ArgY1_44;
              MR_Integer ArgX2_45 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Integer ArgY2_46;
              MR_Word ArgX3_47 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_Word ArgY3_48;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 4)));
              if (succeeded)
              {
                ArgY1_44 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 1))) & (MR_Integer) 1);
                ArgY2_46 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 2))));
                ArgY3_48 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                succeeded = (ArgX1_43 == ArgY1_44);
                if (succeeded)
                {
                  succeeded = (ArgX2_45 == ArgY2_46);
                  if (succeeded)
                    succeeded = hlds__pred_name____Unify____line_number_and_counter_0_0(ArgX3_47, ArgY3_48);
                }
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word ArgX1_49 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, 1))) & (MR_Integer) 1);
              MR_Word ArgY1_50;
              MR_Integer ArgX2_51 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Integer ArgY2_52;
              MR_Word ArgX3_53 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_Word ArgY3_54;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 5)));
              if (succeeded)
              {
                ArgY1_50 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 1))) & (MR_Integer) 1);
                ArgY2_52 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 2))));
                ArgY3_54 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                succeeded = (ArgX1_49 == ArgY1_50);
                if (succeeded)
                {
                  succeeded = (ArgX2_51 == ArgY2_52);
                  if (succeeded)
                    succeeded = hlds__pred_name____Unify____line_number_and_counter_0_0(ArgX3_53, ArgY3_54);
                }
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word ArgX1_55 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, 1))) & (MR_Integer) 1);
              MR_Word ArgY1_56;
              MR_Integer ArgX2_57 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Integer ArgY2_58;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                ArgY1_56 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 1))) & (MR_Integer) 1);
                ArgY2_58 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 2))));
                succeeded = (ArgX1_55 == ArgY1_56);
                if (succeeded)
                  succeeded = (ArgX2_57 == ArgY2_58);
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ArgX1_59 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, 1))) & (MR_Integer) 1);
              MR_Word ArgY1_60;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 7)));
              if (succeeded)
              {
                ArgY1_60 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 1))) & (MR_Integer) 1);
                succeeded = (ArgX1_59 == ArgY1_60);
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word TypeInfo_112_112;
              MR_Word ArgX1_61 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, 1))) & (MR_Integer) 1);
              MR_Word ArgY1_62;
              MR_Integer ArgX2_63 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Integer ArgY2_64;
              MR_Word ArgX3_65 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_Word ArgY3_66;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 8)));
              if (succeeded)
              {
                ArgY1_62 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 1))) & (MR_Integer) 1);
                ArgY2_64 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 2))));
                ArgY3_66 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                succeeded = (ArgX1_61 == ArgY1_62);
                if (succeeded)
                {
                  succeeded = (ArgX2_63 == ArgY2_64);
                  if (succeeded)
                  {
                    TypeInfo_112_112 = (MR_Word) (&hlds__pred_name_scalar_common_2[3]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_112_112, ((MR_Box) (ArgX3_65)), ((MR_Box) (ArgY3_66)));
                  }
                }
              }
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word ArgX1_67 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, 1))) & (MR_Integer) 1);
              MR_Word ArgY1_68;
              MR_Integer ArgX2_69 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Integer ArgY2_70;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 9)));
              if (succeeded)
              {
                ArgY1_68 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 1))) & (MR_Integer) 1);
                ArgY2_70 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 2))));
                succeeded = (ArgX1_67 == ArgY1_68);
                if (succeeded)
                  succeeded = (ArgX2_69 == ArgY2_70);
              }
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word ArgX1_71 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, 1))) & (MR_Integer) 1);
              MR_Word ArgY1_72;
              MR_Integer ArgX2_73 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Integer ArgY2_74;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 10)));
              if (succeeded)
              {
                ArgY1_72 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 1))) & (MR_Integer) 1);
                ArgY2_74 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 2))));
                succeeded = (ArgX1_71 == ArgY1_72);
                if (succeeded)
                  succeeded = (ArgX2_73 == ArgY2_74);
              }
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word TypeInfo_116_116;
              MR_Word ArgX1_75 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, 1))) & (MR_Integer) 1);
              MR_Word ArgY1_76;
              MR_Integer ArgX2_77 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Integer ArgY2_78;
              MR_Word ArgX3_79 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_Word ArgY3_80;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 11)));
              if (succeeded)
              {
                ArgY1_76 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 1))) & (MR_Integer) 1);
                ArgY2_78 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 2))));
                ArgY3_80 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                succeeded = (ArgX1_75 == ArgY1_76);
                if (succeeded)
                {
                  succeeded = (ArgX2_77 == ArgY2_78);
                  if (succeeded)
                  {
                    TypeInfo_116_116 = (MR_Word) (&hlds__pred_name_scalar_common_2[3]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_116_116, ((MR_Box) (ArgX3_79)), ((MR_Box) (ArgY3_80)));
                  }
                }
              }
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word TypeInfo_113_113;
              MR_Word TypeInfo_114_114;
              MR_Word TypeInfo_115_115;
              MR_Word ArgX1_81 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_82;
              MR_Word ArgX2_83 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Word ArgY2_84;
              MR_Word ArgX3_85 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_Word ArgY3_86;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 12)));
              if (succeeded)
              {
                ArgY1_82 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_84 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                ArgY3_86 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                TypeInfo_113_113 = (MR_Word) (&hlds__pred_name_scalar_common_2[4]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_113_113, ((MR_Box) (ArgX1_81)), ((MR_Box) (ArgY1_82)));
                if (succeeded)
                {
                  TypeInfo_114_114 = (MR_Word) (&hlds__pred_name_scalar_common_2[5]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_114_114, ((MR_Box) (ArgX2_83)), ((MR_Box) (ArgY2_84)));
                  if (succeeded)
                  {
                    TypeInfo_115_115 = (MR_Word) (&hlds__pred_name_scalar_common_2[6]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_115_115, ((MR_Box) (ArgX3_85)), ((MR_Box) (ArgY3_86)));
                  }
                }
              }
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word ArgX1_87 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, 1))) & (MR_Integer) 1);
              MR_Word ArgY1_88;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 13)));
              if (succeeded)
              {
                ArgY1_88 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 1))) & (MR_Integer) 1);
                succeeded = (ArgX1_87 == ArgY1_88);
              }
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Word ArgX1_89 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, 1))) & (MR_Integer) 1);
              MR_Word ArgY1_90;
              MR_Integer ArgX2_91 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Integer ArgY2_92;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 14)));
              if (succeeded)
              {
                ArgY1_90 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 1))) & (MR_Integer) 1);
                ArgY2_92 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 2))));
                succeeded = (ArgX1_89 == ArgY1_90);
                if (succeeded)
                  succeeded = (ArgX2_91 == ArgY2_92);
              }
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Word ArgX1_93 = ((((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, 1))) >> 3)) & (MR_Integer) 1);
              MR_Word ArgY1_94;
              MR_Word ArgX2_95 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, 1))) & (MR_Integer) 7);
              MR_Word ArgY2_96;
              MR_Integer ArgX3_97 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Integer ArgY3_98;
              MR_Integer ArgX4_99 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_Integer ArgY4_100;
              MR_Integer ArgX5_101 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 4))));
              MR_Integer ArgY5_102;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 15)));
              if (succeeded)
              {
                ArgY1_94 = ((((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 1))) >> 3)) & (MR_Integer) 1);
                ArgY2_96 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 1))) & (MR_Integer) 7);
                ArgY3_98 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 2))));
                ArgY4_100 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 3))));
                ArgY5_102 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 4))));
                succeeded = (ArgX1_93 == ArgY1_94);
                if (succeeded)
                {
                  succeeded = (ArgX2_95 == ArgY2_96);
                  if (succeeded)
                  {
                    succeeded = (ArgX3_97 == ArgY3_98);
                    if (succeeded)
                    {
                      succeeded = (ArgX4_99 == ArgY4_100);
                      if (succeeded)
                        succeeded = (ArgX5_101 == ArgY5_102);
                    }
                  }
                }
              }
            }
            break;
          case (MR_Integer) 16:
            {
              MR_Word TypeInfo_117_117;
              MR_Word ArgX1_103 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, 1))) & (MR_Integer) 1);
              MR_Word ArgY1_104;
              MR_Integer ArgX2_105 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Integer ArgY2_106;
              MR_Word ArgX3_107 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_Word ArgY3_108;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 16)));
              if (succeeded)
              {
                ArgY1_104 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 1))) & (MR_Integer) 1);
                ArgY2_106 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 2))));
                ArgY3_108 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                succeeded = (ArgX1_103 == ArgY1_104);
                if (succeeded)
                {
                  succeeded = (ArgX2_105 == ArgY2_106);
                  if (succeeded)
                  {
                    TypeInfo_117_117 = (MR_Word) (&hlds__pred_name_scalar_common_2[3]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_117_117, ((MR_Box) (ArgX3_107)), ((MR_Box) (ArgY3_108)));
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

void MR_CALL 
hlds__pred_name____Compare____stm_clone_kind_0_0(
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
hlds__pred_name____Unify____stm_clone_kind_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
hlds__pred_name____Compare____pred_origin_0_0(
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
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
              MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));

              hlds__pred_name____Compare____user_made_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
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
              MR_Word ArgX1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
              MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

              hlds__pred_name____Compare____compiler_made_0_0(HeadVar__1_1, ArgX1_6, ArgY1_7);
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
              MR_Word ArgX1_8 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 0))));
              MR_Word ArgY1_9 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, 0))));
              MR_Word ArgX2_11 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 1))));
              MR_Word ArgY2_12 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, 1))));
              MR_Word ArgX3_14 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 2))));
              MR_Word ArgY3_15 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, 2))));
              MR_Word SubResult1_10;

              hlds__pred_name____Compare____pred_transform_0_0(&SubResult1_10, ArgX1_8, ArgY1_9);
              succeeded = (SubResult1_10 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult1_10;
              else
              {
                MR_Word SubResult2_13;

                hlds__pred_name____Compare____pred_origin_0_0(&SubResult2_13, ArgX2_11, ArgY2_12);
                succeeded = (SubResult2_13 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult2_13;
                else
                  hlds__pred_proc_id____Compare____pred_id_0_0(HeadVar__1_1, ArgX3_14, ArgY3_15);
              }
            }
            break;
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
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
            {
              MR_Word ArgX1_16 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 0))));
              MR_Word ArgY1_17 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 0))));
              MR_Word ArgX2_19 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
              MR_Word ArgY2_20 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));
              MR_Word ArgX3_22 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
              MR_Word ArgY3_23 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 2))));
              MR_Integer ArgX4_25 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 3))));
              MR_Integer ArgY4_26 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 3))));
              MR_Word SubResult1_18;

              hlds__pred_name____Compare____proc_transform_0_0(&SubResult1_18, ArgX1_16, ArgY1_17);
              succeeded = (SubResult1_18 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult1_18;
              else
              {
                MR_Word SubResult2_21;

                hlds__pred_name____Compare____pred_origin_0_0(&SubResult2_21, ArgX2_19, ArgY2_20);
                succeeded = (SubResult2_21 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult2_21;
                else
                {
                  MR_Word SubResult3_24;

                  hlds__pred_proc_id____Compare____pred_id_0_0(&SubResult3_24, ArgX3_22, ArgY3_23);
                  succeeded = (SubResult3_24 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult3_24;
                  else
                  {
                    succeeded = (ArgX4_25 < ArgY4_26);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (ArgX4_25 > ArgY4_26);
                      if (succeeded)
                        *HeadVar__1_1 = (MR_Integer) 2;
                      else
                        *HeadVar__1_1 = (MR_Integer) 0;
                    }
                  }
                }
              }
            }
            break;
        }
        break;
    }
}

void MR_CALL 
hlds__pred_name____Compare____user_made_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_38 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_39 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_38 == CastY_39);
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
              MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 1);
              MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) & (MR_Integer) 1);
              MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
              MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
              MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
              MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
              MR_Word SubResult1_6;
              MR_Integer Var_55 = (MR_Integer) (ArgX1_4);
              MR_Integer Var_56 = (MR_Integer) (ArgY1_5);

              succeeded = (Var_55 < Var_56);
              if (succeeded)
              {
                SubResult1_6 = (MR_Integer) 1;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = (Var_55 > Var_56);
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
                  MR_Integer Var_57 = (MR_Integer) (ArgX3_10);
                  MR_Integer Var_58 = (MR_Integer) (ArgY3_11);

                  succeeded = (Var_57 < Var_58);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (Var_57 > Var_58);
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
              MR_String ArgX1_12 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 0))));
              MR_String ArgY1_13 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, 0))));
              MR_Integer ArgX2_15 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 1))));
              MR_Integer ArgY2_16 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, 1))));
              MR_Integer ArgX3_18 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 2))));
              MR_Integer ArgY3_19 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, 2))));
              MR_Word SubResult1_14;

              mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_14, ArgX1_12, ArgY1_13);
              succeeded = (SubResult1_14 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult1_14;
              else
              {
                MR_Word SubResult2_17;

                succeeded = (ArgX2_15 < ArgY2_16);
                if (succeeded)
                {
                  SubResult2_17 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = (ArgX2_15 > ArgY2_16);
                  if (succeeded)
                  {
                    SubResult2_17 = (MR_Integer) 2;
                    succeeded = MR_TRUE;
                  }
                }
                if (succeeded)
                  *HeadVar__1_1 = SubResult2_17;
                else
                {
                  succeeded = (ArgX3_18 < ArgY3_19);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (ArgX3_18 > ArgY3_19);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 2;
                    else
                      *HeadVar__1_1 = (MR_Integer) 0;
                  }
                }
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
              MR_Word ArgX1_20 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 0))));
              MR_Word ArgY1_21 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, 0))));
              MR_Word ArgX2_23 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 1))));
              MR_Word ArgY2_24 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, 1))));
              MR_Word SubResult1_22;

              parse_tree__prog_data____Compare____class_id_0_0(&SubResult1_22, ArgX1_20, ArgY1_21);
              succeeded = (SubResult1_22 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult1_22;
              else
                parse_tree__prog_data____Compare____pf_sym_name_user_arity_0_0(HeadVar__1_1, ArgX2_23, ArgY2_24);
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
                      MR_Word ArgX1_25 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                      MR_Word ArgY1_26 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));
                      MR_Word ArgX2_28 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                      MR_Word ArgY2_29 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 2))));
                      MR_Word SubResult1_27;

                      parse_tree__prog_data____Compare____pf_sym_name_user_arity_0_0(&SubResult1_27, ArgX1_25, ArgY1_26);
                      succeeded = (SubResult1_27 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult1_27;
                      else
                        hlds__pred_name____Compare____instance_method_constraints_0_0(HeadVar__1_1, ArgX2_28, ArgY2_29);
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
                      MR_Word ArgX1_30 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 1))) & (MR_Integer) 3);
                      MR_Word ArgY1_31 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, 1))) & (MR_Integer) 3);
                      MR_String ArgX2_33 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                      MR_String ArgY2_34 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 2))));
                      MR_Integer ArgX3_36 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 3))));
                      MR_Integer ArgY3_37 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 3))));
                      MR_Word SubResult1_32;
                      MR_Integer Var_53 = (MR_Integer) (ArgX1_30);
                      MR_Integer Var_54 = (MR_Integer) (ArgY1_31);

                      succeeded = (Var_53 < Var_54);
                      if (succeeded)
                      {
                        SubResult1_32 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (Var_53 > Var_54);
                        if (succeeded)
                        {
                          SubResult1_32 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                      }
                      if (succeeded)
                        *HeadVar__1_1 = SubResult1_32;
                      else
                      {
                        MR_Word SubResult2_35;

                        mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult2_35, ArgX2_33, ArgY2_34);
                        succeeded = (SubResult2_35 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult2_35;
                        else
                        {
                          succeeded = (ArgX3_36 < ArgY3_37);
                          if (succeeded)
                            *HeadVar__1_1 = (MR_Integer) 1;
                          else
                          {
                            succeeded = (ArgX3_36 > ArgY3_37);
                            if (succeeded)
                              *HeadVar__1_1 = (MR_Integer) 2;
                            else
                              *HeadVar__1_1 = (MR_Integer) 0;
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
hlds__pred_name____Compare____proc_transform_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_40 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_41 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_40 == CastY_41);
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
                  case (MR_Integer) 5:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 6:
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
              case (MR_Integer) 2:
              case (MR_Integer) 3:
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
              case (MR_Integer) 2:
              case (MR_Integer) 3:
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
              case (MR_Integer) 2:
              case (MR_Integer) 3:
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
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
              MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
              MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 1))));
              MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, 1))));
              MR_Word SubResult1_6;

              hlds__pred_proc_id____Compare____pred_id_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
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
              MR_Integer ArgX1_9 = ((MR_Integer) ((MR_hl_field(2, HeadVar__2_2, 0))));
              MR_Integer ArgY1_10 = ((MR_Integer) ((MR_hl_field(2, HeadVar__3_3, 0))));

              succeeded = (ArgX1_9 < ArgY1_10);
              if (succeeded)
                *HeadVar__1_1 = (MR_Integer) 1;
              else
              {
                succeeded = (ArgX1_9 > ArgY1_10);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 2;
                else
                  *HeadVar__1_1 = (MR_Integer) 0;
              }
            }
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
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Integer ArgX1_11 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 1))));
                      MR_Integer ArgY1_12 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 1))));
                      MR_Word ArgX2_14 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                      MR_Word ArgY2_15 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 2))));
                      MR_Word SubResult1_13;

                      succeeded = (ArgX1_11 < ArgY1_12);
                      if (succeeded)
                      {
                        SubResult1_13 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (ArgX1_11 > ArgY1_12);
                        if (succeeded)
                        {
                          SubResult1_13 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                      }
                      if (succeeded)
                        *HeadVar__1_1 = SubResult1_13;
                      else
                        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_2[3]), HeadVar__1_1, ((MR_Box) (ArgX2_14)), ((MR_Box) (ArgY2_15)));
                    }
                    break;
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                  case (MR_Integer) 4:
                  case (MR_Integer) 5:
                  case (MR_Integer) 6:
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
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
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
                      MR_Word ArgX1_16 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                      MR_Word ArgY1_17 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));

                      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_2[3]), HeadVar__1_1, ((MR_Box) (ArgX1_16)), ((MR_Box) (ArgY1_17)));
                    }
                    break;
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                  case (MR_Integer) 4:
                  case (MR_Integer) 5:
                  case (MR_Integer) 6:
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
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
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
                      MR_Integer ArgX1_18 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 1))));
                      MR_Integer ArgY1_19 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 1))));
                      MR_Integer ArgX2_21 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 2))));
                      MR_Integer ArgY2_22 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 2))));
                      MR_Word SubResult1_20;

                      succeeded = (ArgX1_18 < ArgY1_19);
                      if (succeeded)
                      {
                        SubResult1_20 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (ArgX1_18 > ArgY1_19);
                        if (succeeded)
                        {
                          SubResult1_20 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                      }
                      if (succeeded)
                        *HeadVar__1_1 = SubResult1_20;
                      else
                      {
                        succeeded = (ArgX2_21 < ArgY2_22);
                        if (succeeded)
                          *HeadVar__1_1 = (MR_Integer) 1;
                        else
                        {
                          succeeded = (ArgX2_21 > ArgY2_22);
                          if (succeeded)
                            *HeadVar__1_1 = (MR_Integer) 2;
                          else
                            *HeadVar__1_1 = (MR_Integer) 0;
                        }
                      }
                    }
                    break;
                  case (MR_Integer) 3:
                  case (MR_Integer) 4:
                  case (MR_Integer) 5:
                  case (MR_Integer) 6:
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
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
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
                      MR_Integer ArgX1_23 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 1))));
                      MR_Integer ArgY1_24 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 1))));
                      MR_Integer ArgX2_26 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 2))));
                      MR_Integer ArgY2_27 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 2))));
                      MR_Word SubResult1_25;

                      succeeded = (ArgX1_23 < ArgY1_24);
                      if (succeeded)
                      {
                        SubResult1_25 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (ArgX1_23 > ArgY1_24);
                        if (succeeded)
                        {
                          SubResult1_25 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                      }
                      if (succeeded)
                        *HeadVar__1_1 = SubResult1_25;
                      else
                      {
                        succeeded = (ArgX2_26 < ArgY2_27);
                        if (succeeded)
                          *HeadVar__1_1 = (MR_Integer) 1;
                        else
                        {
                          succeeded = (ArgX2_26 > ArgY2_27);
                          if (succeeded)
                            *HeadVar__1_1 = (MR_Integer) 2;
                          else
                            *HeadVar__1_1 = (MR_Integer) 0;
                        }
                      }
                    }
                    break;
                  case (MR_Integer) 4:
                  case (MR_Integer) 5:
                  case (MR_Integer) 6:
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
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
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
                      MR_Integer ArgX1_28 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 1))));
                      MR_Integer ArgY1_29 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 1))));
                      MR_Integer ArgX2_31 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 2))));
                      MR_Integer ArgY2_32 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 2))));
                      MR_Word SubResult1_30;

                      succeeded = (ArgX1_28 < ArgY1_29);
                      if (succeeded)
                      {
                        SubResult1_30 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (ArgX1_28 > ArgY1_29);
                        if (succeeded)
                        {
                          SubResult1_30 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                      }
                      if (succeeded)
                        *HeadVar__1_1 = SubResult1_30;
                      else
                      {
                        succeeded = (ArgX2_31 < ArgY2_32);
                        if (succeeded)
                          *HeadVar__1_1 = (MR_Integer) 1;
                        else
                        {
                          succeeded = (ArgX2_31 > ArgY2_32);
                          if (succeeded)
                            *HeadVar__1_1 = (MR_Integer) 2;
                          else
                            *HeadVar__1_1 = (MR_Integer) 0;
                        }
                      }
                    }
                    break;
                  case (MR_Integer) 5:
                  case (MR_Integer) 6:
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
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
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
                      MR_Word ArgX1_33 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                      MR_Word ArgY1_34 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));

                      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_2[3]), HeadVar__1_1, ((MR_Box) (ArgX1_33)), ((MR_Box) (ArgY1_34)));
                    }
                    break;
                  case (MR_Integer) 6:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 6:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
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
                  case (MR_Integer) 5:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 6:
                    {
                      MR_Integer ArgX1_35 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 1))));
                      MR_Integer ArgY1_36 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 1))));
                      MR_Word ArgX2_38 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                      MR_Word ArgY2_39 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 2))));
                      MR_Word SubResult1_37;

                      succeeded = (ArgX1_35 < ArgY1_36);
                      if (succeeded)
                      {
                        SubResult1_37 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (ArgX1_35 > ArgY1_36);
                        if (succeeded)
                        {
                          SubResult1_37 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                      }
                      if (succeeded)
                        *HeadVar__1_1 = SubResult1_37;
                      else
                        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_2[3]), HeadVar__1_1, ((MR_Box) (ArgX2_38)), ((MR_Box) (ArgY2_39)));
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
hlds__pred_name____Compare____pred_transform_0_0(
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
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
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
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
              MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

              mercury__builtin__compare_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_2[2]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
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
              MR_Integer ArgX1_6 = ((MR_Integer) ((MR_hl_field(2, HeadVar__2_2, 0))));
              MR_Integer ArgY1_7 = ((MR_Integer) ((MR_hl_field(2, HeadVar__3_3, 0))));

              succeeded = (ArgX1_6 < ArgY1_7);
              if (succeeded)
                *HeadVar__1_1 = (MR_Integer) 1;
              else
              {
                succeeded = (ArgX1_6 > ArgY1_7);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 2;
                else
                  *HeadVar__1_1 = (MR_Integer) 0;
              }
            }
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
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 3:
            {
              MR_Word ArgX1_8 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 0))) & (MR_Integer) 1);
              MR_Word ArgY1_9 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, 0))) & (MR_Integer) 1);
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
hlds__pred_name____Unify____pred_origin_0_0(
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

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
            succeeded = hlds__pred_name____Unify____user_made_0_0(ArgX1_3, ArgY1_4);
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
            succeeded = hlds__pred_name____Unify____compiler_made_0_0(ArgX1_5, ArgY1_6);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, 0))));
          MR_Word ArgY1_8;
          MR_Word ArgX2_9 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, 1))));
          MR_Word ArgY2_10;
          MR_Word ArgX3_11 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, 2))));
          MR_Word ArgY3_12;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_8 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 0))));
            ArgY2_10 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 1))));
            ArgY3_12 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 2))));
            succeeded = hlds__pred_name____Unify____pred_transform_0_0(ArgX1_7, ArgY1_8);
            if (succeeded)
            {
              succeeded = hlds__pred_name____Unify____pred_origin_0_0(ArgX2_9, ArgY2_10);
              if (succeeded)
                succeeded = hlds__pred_proc_id____Unify____pred_id_0_0(ArgX3_11, ArgY3_12);
            }
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word ArgX1_13 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 0))));
          MR_Word ArgY1_14;
          MR_Word ArgX2_15 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
          MR_Word ArgY2_16;
          MR_Word ArgX3_17 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 2))));
          MR_Word ArgY3_18;
          MR_Integer ArgX4_19 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 3))));
          MR_Integer ArgY4_20;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3);
          if (succeeded)
          {
            ArgY1_14 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 0))));
            ArgY2_16 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
            ArgY3_18 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
            ArgY4_20 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 3))));
            succeeded = hlds__pred_name____Unify____proc_transform_0_0(ArgX1_13, ArgY1_14);
            if (succeeded)
            {
              succeeded = hlds__pred_name____Unify____pred_origin_0_0(ArgX2_15, ArgY2_16);
              if (succeeded)
              {
                succeeded = hlds__pred_proc_id____Unify____pred_id_0_0(ArgX3_17, ArgY3_18);
                if (succeeded)
                  succeeded = (ArgX4_19 == ArgY4_20);
              }
            }
          }
        }
        break;
    }
  return succeeded;
}

MR_bool MR_CALL 
hlds__pred_name____Unify____user_made_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_29 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_30 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_29 == CastY_30);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) & (MR_Integer) 1);
          MR_Word ArgY1_4;
          MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
          MR_Word ArgY2_6;
          MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
          MR_Word ArgY3_8;
          MR_Integer Var_36;
          MR_Integer Var_37;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 1);
            ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
            ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
            succeeded = (ArgX1_3 == ArgY1_4);
            if (succeeded)
            {
              succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX2_5, ArgY2_6);
              if (succeeded)
              {
                Var_36 = (MR_Integer) (ArgX3_7);
                Var_37 = (MR_Integer) (ArgY3_8);
                succeeded = (Var_36 == Var_37);
              }
            }
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String ArgX1_9 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, 0))));
          MR_String ArgY1_10;
          MR_Integer ArgX2_11 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 1))));
          MR_Integer ArgY2_12;
          MR_Integer ArgX3_13 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 2))));
          MR_Integer ArgY3_14;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_10 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 0))));
            ArgY2_12 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 1))));
            ArgY3_14 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 2))));
            succeeded = (strcmp(ArgX1_9, ArgY1_10) == 0);
            if (succeeded)
            {
              succeeded = (ArgX2_11 == ArgY2_12);
              if (succeeded)
                succeeded = (ArgX3_13 == ArgY3_14);
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgX1_15 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, 0))));
          MR_Word ArgY1_16;
          MR_Word ArgX2_17 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, 1))));
          MR_Word ArgY2_18;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_16 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 0))));
            ArgY2_18 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 1))));
            succeeded = parse_tree__prog_data____Unify____class_id_0_0(ArgX1_15, ArgY1_16);
            if (succeeded)
              succeeded = parse_tree__prog_data____Unify____pf_sym_name_user_arity_0_0(ArgX2_17, ArgY2_18);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgX1_19 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_20;
              MR_Word ArgX2_21 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Word ArgY2_22;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_20 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_22 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                succeeded = parse_tree__prog_data____Unify____pf_sym_name_user_arity_0_0(ArgX1_19, ArgY1_20);
                if (succeeded)
                  succeeded = hlds__pred_name____Unify____instance_method_constraints_0_0(ArgX2_21, ArgY2_22);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_23 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, 1))) & (MR_Integer) 3);
              MR_Word ArgY1_24;
              MR_String ArgX2_25 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_String ArgY2_26;
              MR_Integer ArgX3_27 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_Integer ArgY3_28;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_24 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 1))) & (MR_Integer) 3);
                ArgY2_26 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                ArgY3_28 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 3))));
                succeeded = (ArgX1_23 == ArgY1_24);
                if (succeeded)
                {
                  succeeded = (strcmp(ArgX2_25, ArgY2_26) == 0);
                  if (succeeded)
                    succeeded = (ArgX3_27 == ArgY3_28);
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
hlds__pred_name____Unify____proc_transform_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_35 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_36 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_35 == CastY_36);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer CastX_33 = (MR_Integer) (HeadVar__1_1);
          MR_Integer CastY_34 = (MR_Integer) (HeadVar__2_2);

          succeeded = (CastY_34 == CastX_33);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
          MR_Word ArgY1_4;
          MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 1))));
          MR_Integer ArgY2_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
            ArgY2_6 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 1))));
            succeeded = hlds__pred_proc_id____Unify____pred_id_0_0(ArgX1_3, ArgY1_4);
            if (succeeded)
              succeeded = (ArgX2_5 == ArgY2_6);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer ArgX1_7 = ((MR_Integer) ((MR_hl_field(2, HeadVar__1_1, 0))));
          MR_Integer ArgY1_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_8 = ((MR_Integer) ((MR_hl_field(2, HeadVar__2_2, 0))));
            succeeded = (ArgX1_7 == ArgY1_8);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word TypeInfo_37_37;
              MR_Integer ArgX1_9 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Integer ArgY1_10;
              MR_Word ArgX2_11 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Word ArgY2_12;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_10 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_12 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                succeeded = (ArgX1_9 == ArgY1_10);
                if (succeeded)
                {
                  TypeInfo_37_37 = (MR_Word) (&hlds__pred_name_scalar_common_2[3]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_37_37, ((MR_Box) (ArgX2_11)), ((MR_Box) (ArgY2_12)));
                }
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word TypeInfo_40_40;
              MR_Word ArgX1_13 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_14;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_14 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                TypeInfo_40_40 = (MR_Word) (&hlds__pred_name_scalar_common_2[3]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_40_40, ((MR_Box) (ArgX1_13)), ((MR_Box) (ArgY1_14)));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer ArgX1_15 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Integer ArgY1_16;
              MR_Integer ArgX2_17 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Integer ArgY2_18;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 2)));
              if (succeeded)
              {
                ArgY1_16 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_18 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 2))));
                succeeded = (ArgX1_15 == ArgY1_16);
                if (succeeded)
                  succeeded = (ArgX2_17 == ArgY2_18);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Integer ArgX1_19 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Integer ArgY1_20;
              MR_Integer ArgX2_21 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Integer ArgY2_22;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 3)));
              if (succeeded)
              {
                ArgY1_20 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_22 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 2))));
                succeeded = (ArgX1_19 == ArgY1_20);
                if (succeeded)
                  succeeded = (ArgX2_21 == ArgY2_22);
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Integer ArgX1_23 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Integer ArgY1_24;
              MR_Integer ArgX2_25 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Integer ArgY2_26;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 4)));
              if (succeeded)
              {
                ArgY1_24 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_26 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 2))));
                succeeded = (ArgX1_23 == ArgY1_24);
                if (succeeded)
                  succeeded = (ArgX2_25 == ArgY2_26);
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word TypeInfo_38_38;
              MR_Word ArgX1_27 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_28;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 5)));
              if (succeeded)
              {
                ArgY1_28 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                TypeInfo_38_38 = (MR_Word) (&hlds__pred_name_scalar_common_2[3]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_38_38, ((MR_Box) (ArgX1_27)), ((MR_Box) (ArgY1_28)));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word TypeInfo_39_39;
              MR_Integer ArgX1_29 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Integer ArgY1_30;
              MR_Word ArgX2_31 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Word ArgY2_32;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                ArgY1_30 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_32 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                succeeded = (ArgX1_29 == ArgY1_30);
                if (succeeded)
                {
                  TypeInfo_39_39 = (MR_Word) (&hlds__pred_name_scalar_common_2[3]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_39_39, ((MR_Box) (ArgX2_31)), ((MR_Box) (ArgY2_32)));
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
hlds__pred_name____Unify____pred_transform_0_0(
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
          MR_Word TypeInfo_13_13;
          MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
          MR_Word ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
            TypeInfo_13_13 = (MR_Word) (&hlds__pred_name_scalar_common_2[2]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer ArgX1_5 = ((MR_Integer) ((MR_hl_field(2, HeadVar__1_1, 0))));
          MR_Integer ArgY1_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Integer) ((MR_hl_field(2, HeadVar__2_2, 0))));
            succeeded = (ArgX1_5 == ArgY1_6);
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word ArgX1_7 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, 0))) & (MR_Integer) 1);
          MR_Word ArgY1_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3);
          if (succeeded)
          {
            ArgY1_8 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 0))) & (MR_Integer) 1);
            succeeded = (ArgX1_7 == ArgY1_8);
          }
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
hlds__pred_name____Compare____line_number_and_counter_0_0(
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
    MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 1))));
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
    }
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
hlds__pred_name____Unify____line_number_and_counter_0_0(
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
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
      succeeded = (ArgX2_5 == ArgY2_6);
  }
  return succeeded;
}

void MR_CALL 
hlds__pred_name____Compare____instance_method_constraints_0_0(
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

    parse_tree__prog_data____Compare____class_id_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_2[0]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_2[1]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
          parse_tree__prog_data____Compare____univ_exist_constraints_0_0(HeadVar__1_1, ArgX4_13, ArgY4_14);
      }
    }
  }
}

MR_bool MR_CALL 
hlds__pred_name____Unify____instance_method_constraints_0_0(
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
    MR_Word TypeInfo_14_14;
    MR_Word TypeInfo_15_15;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));

    succeeded = parse_tree__prog_data____Unify____class_id_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      TypeInfo_14_14 = (MR_Word) (&hlds__pred_name_scalar_common_2[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        TypeInfo_15_15 = (MR_Word) (&hlds__pred_name_scalar_common_2[1]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_15, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
          succeeded = parse_tree__prog_data____Unify____univ_exist_constraints_0_0(ArgX4_9, ArgY4_10);
      }
    }
  }
  return succeeded;
}

void MR_CALL 
hlds__pred_name____Compare____compiler_made_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_42 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_43 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_42 == CastY_43);
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
              MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 3);
              MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) & (MR_Integer) 3);
              MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
              MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
              MR_Word SubResult1_6;
              MR_Integer Var_65 = (MR_Integer) (ArgX1_4);
              MR_Integer Var_66 = (MR_Integer) (ArgY1_5);

              succeeded = (Var_65 < Var_66);
              if (succeeded)
              {
                SubResult1_6 = (MR_Integer) 1;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = (Var_65 > Var_66);
                if (succeeded)
                {
                  SubResult1_6 = (MR_Integer) 2;
                  succeeded = MR_TRUE;
                }
              }
              if (succeeded)
                *HeadVar__1_1 = SubResult1_6;
              else
                parse_tree__prog_data____Compare____type_ctor_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
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
              MR_Integer ArgX1_9 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));
              MR_Integer ArgY1_10 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, 0))));
              MR_Integer ArgX2_12 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 1))));
              MR_Integer ArgY2_13 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, 1))));
              MR_Word SubResult1_11;

              succeeded = (ArgX1_9 < ArgY1_10);
              if (succeeded)
              {
                SubResult1_11 = (MR_Integer) 1;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = (ArgX1_9 > ArgY1_10);
                if (succeeded)
                {
                  SubResult1_11 = (MR_Integer) 2;
                  succeeded = MR_TRUE;
                }
              }
              if (succeeded)
                *HeadVar__1_1 = SubResult1_11;
              else
              {
                succeeded = (ArgX2_12 < ArgY2_13);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 1;
                else
                {
                  succeeded = (ArgX2_12 > ArgY2_13);
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
              MR_Word ArgX1_14 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 0))));
              MR_Word ArgY1_15 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, 0))));
              MR_Word ArgX2_17 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__2_2, 1))) & (MR_Integer) 3);
              MR_Word ArgY2_18 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__3_3, 1))) & (MR_Integer) 3);
              MR_Word SubResult1_16;

              parse_tree__prog_data____Compare____type_ctor_0_0(&SubResult1_16, ArgX1_14, ArgY1_15);
              succeeded = (SubResult1_16 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult1_16;
              else
              {
                MR_Integer Var_63 = (MR_Integer) (ArgX2_17);
                MR_Integer Var_64 = (MR_Integer) (ArgY2_18);

                succeeded = (Var_63 < Var_64);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 1;
                else
                {
                  succeeded = (Var_63 > Var_64);
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
                      MR_Word ArgX1_19 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                      MR_Word ArgY1_20 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));
                      MR_Word ArgX2_22 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 2))) & (MR_Integer) 1);
                      MR_Word ArgY2_23 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, 2))) & (MR_Integer) 1);
                      MR_Word SubResult1_21;

                      parse_tree__prog_data____Compare____pf_sym_name_user_arity_0_0(&SubResult1_21, ArgX1_19, ArgY1_20);
                      succeeded = (SubResult1_21 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult1_21;
                      else
                      {
                        MR_Integer Var_61 = (MR_Integer) (ArgX2_22);
                        MR_Integer Var_62 = (MR_Integer) (ArgY2_23);

                        succeeded = (Var_61 < Var_62);
                        if (succeeded)
                          *HeadVar__1_1 = (MR_Integer) 1;
                        else
                        {
                          succeeded = (Var_61 > Var_62);
                          if (succeeded)
                            *HeadVar__1_1 = (MR_Integer) 2;
                          else
                            *HeadVar__1_1 = (MR_Integer) 0;
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
                      MR_String ArgX2_27 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                      MR_String ArgY2_28 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 2))));
                      MR_Word ArgX3_30 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 3))) & (MR_Integer) 15);
                      MR_Word ArgY3_31 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, 3))) & (MR_Integer) 15);
                      MR_Word SubResult1_26;

                      mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult1_26, ArgX1_24, ArgY1_25);
                      succeeded = (SubResult1_26 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult1_26;
                      else
                      {
                        MR_Word SubResult2_29;

                        mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult2_29, ArgX2_27, ArgY2_28);
                        succeeded = (SubResult2_29 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult2_29;
                        else
                        {
                          MR_Integer Var_59 = (MR_Integer) (ArgX3_30);
                          MR_Integer Var_60 = (MR_Integer) (ArgY3_31);

                          succeeded = (Var_59 < Var_60);
                          if (succeeded)
                            *HeadVar__1_1 = (MR_Integer) 1;
                          else
                          {
                            succeeded = (Var_59 > Var_60);
                            if (succeeded)
                              *HeadVar__1_1 = (MR_Integer) 2;
                            else
                              *HeadVar__1_1 = (MR_Integer) 0;
                          }
                        }
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
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
                      MR_String ArgX1_32 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                      MR_String ArgY1_33 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));
                      MR_Integer ArgX2_35 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 2))));
                      MR_Integer ArgY2_36 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 2))));
                      MR_Word SubResult1_34;

                      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_34, ArgX1_32, ArgY1_33);
                      succeeded = (SubResult1_34 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult1_34;
                      else
                      {
                        succeeded = (ArgX2_35 < ArgY2_36);
                        if (succeeded)
                          *HeadVar__1_1 = (MR_Integer) 1;
                        else
                        {
                          succeeded = (ArgX2_35 > ArgY2_36);
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
                      MR_String ArgX1_37 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                      MR_String ArgY1_38 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));
                      MR_Integer ArgX2_40 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 2))));
                      MR_Integer ArgY2_41 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 2))));
                      MR_Word SubResult1_39;

                      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_39, ArgX1_37, ArgY1_38);
                      succeeded = (SubResult1_39 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult1_39;
                      else
                      {
                        succeeded = (ArgX2_40 < ArgY2_41);
                        if (succeeded)
                          *HeadVar__1_1 = (MR_Integer) 1;
                        else
                        {
                          succeeded = (ArgX2_40 > ArgY2_41);
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
hlds__pred_name____Unify____compiler_made_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_33 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_34 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_33 == CastY_34);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) & (MR_Integer) 3);
          MR_Word ArgY1_4;
          MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
          MR_Word ArgY2_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 3);
            ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
            succeeded = (ArgX1_3 == ArgY1_4);
            if (succeeded)
              succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(ArgX2_5, ArgY2_6);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer ArgX1_7 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 0))));
          MR_Integer ArgY1_8;
          MR_Integer ArgX2_9 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 1))));
          MR_Integer ArgY2_10;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_8 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));
            ArgY2_10 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 1))));
            succeeded = (ArgX1_7 == ArgY1_8);
            if (succeeded)
              succeeded = (ArgX2_9 == ArgY2_10);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgX1_11 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, 0))));
          MR_Word ArgY1_12;
          MR_Word ArgX2_13 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__1_1, 1))) & (MR_Integer) 3);
          MR_Word ArgY2_14;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_12 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 0))));
            ArgY2_14 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__2_2, 1))) & (MR_Integer) 3);
            succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(ArgX1_11, ArgY1_12);
            if (succeeded)
              succeeded = (ArgX2_13 == ArgY2_14);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgX1_15 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_16;
              MR_Word ArgX2_17 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, 2))) & (MR_Integer) 1);
              MR_Word ArgY2_18;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_16 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_18 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 2))) & (MR_Integer) 1);
                succeeded = parse_tree__prog_data____Unify____pf_sym_name_user_arity_0_0(ArgX1_15, ArgY1_16);
                if (succeeded)
                  succeeded = (ArgX2_17 == ArgY2_18);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_19 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_20;
              MR_String ArgX2_21 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_String ArgY2_22;
              MR_Word ArgX3_23 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, 3))) & (MR_Integer) 15);
              MR_Word ArgY3_24;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_20 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_22 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 2))));
                ArgY3_24 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 3))) & (MR_Integer) 15);
                succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_19, ArgY1_20);
                if (succeeded)
                {
                  succeeded = (strcmp(ArgX2_21, ArgY2_22) == 0);
                  if (succeeded)
                    succeeded = (ArgX3_23 == ArgY3_24);
                }
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_String ArgX1_25 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_26;
              MR_Integer ArgX2_27 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Integer ArgY2_28;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 2)));
              if (succeeded)
              {
                ArgY1_26 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_28 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 2))));
                succeeded = (strcmp(ArgX1_25, ArgY1_26) == 0);
                if (succeeded)
                  succeeded = (ArgX2_27 == ArgY2_28);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_String ArgX1_29 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_30;
              MR_Integer ArgX2_31 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Integer ArgY2_32;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 3)));
              if (succeeded)
              {
                ArgY1_30 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_32 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 2))));
                succeeded = (strcmp(ArgX1_29, ArgY1_30) == 0);
                if (succeeded)
                  succeeded = (ArgX2_31 == ArgY2_32);
              }
            }
            break;
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
hlds__pred_name____Compare____aux_tabling_pred_kind_0_0(
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
hlds__pred_name____Unify____aux_tabling_pred_kind_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
hlds__pred_name____Compare____aux_tabling_maybe_single_proc_0_0(
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
hlds__pred_name____Unify____aux_tabling_maybe_single_proc_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static MR_String MR_CALL 
hlds__pred_name__subst_to_mrtq_stuffed_string_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String Str_5;
  MR_Integer TVar_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 0))));
  MR_Word Type_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
  MR_String TypeStr_6;
  MR_String Var_14;
  MR_String Var_16;
  MR_String Var_17;
  MR_String Var_24;

  TypeStr_6 = hlds__pred_name__type_to_txq_mrtq_stuffed_string_1_f_0(Type_4);
  Var_14 = mercury__string__f_43_43_2_f_0(TypeStr_6, (MR_String) "_txq_sub");
  Var_16 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_14);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), TVar_3, &Var_17);
  Var_24 = mercury__string__f_43_43_2_f_0(Var_17, Var_16);
  Str_5 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_24);
  return Str_5;
}

static MR_Box MR_CALL 
hlds__pred_name__type_to_txq_mrtq_stuffed_string_1_f_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv5_LambdaHeadVar__2_103;

  conv5_LambdaHeadVar__2_103 = hlds__pred_name__IntroducedFrom__func__type_to_txq_mrtq_stuffed_string__1929__3_1_f_0(((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv5_LambdaHeadVar__2_103));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__pred_name__type_to_txq_mrtq_stuffed_string_1_f_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv4_Str_4;

  conv4_Str_4 = hlds__pred_name__type_to_txq_mrtq_stuffed_string_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv4_Str_4));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__pred_name__type_to_txq_mrtq_stuffed_string_1_f_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv3_LambdaHeadVar__2_83;

  conv3_LambdaHeadVar__2_83 = hlds__pred_name__IntroducedFrom__func__type_to_txq_mrtq_stuffed_string__1929__2_1_f_0(((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv3_LambdaHeadVar__2_83));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__pred_name__type_to_txq_mrtq_stuffed_string_1_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv2_Str_4;

  conv2_Str_4 = hlds__pred_name__type_to_txq_mrtq_stuffed_string_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_Str_4));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__pred_name__type_to_txq_mrtq_stuffed_string_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv1_LambdaHeadVar__2_48;

  conv1_LambdaHeadVar__2_48 = hlds__pred_name__IntroducedFrom__func__type_to_txq_mrtq_stuffed_string__1929__1_1_f_0(((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_48));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__pred_name__type_to_txq_mrtq_stuffed_string_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_Str_4;

  conv0_Str_4 = hlds__pred_name__type_to_txq_mrtq_stuffed_string_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Str_4));
  return wrapper_arg_2;
}

static MR_String MR_CALL 
hlds__pred_name__type_to_txq_mrtq_stuffed_string_1_f_0(
  MR_Word Type_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_String Str_4;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Type_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word TVar_7 = ((MR_Word) ((MR_hl_field(0, Type_3, 0))));
          MR_Integer Var_29;
          MR_String Var_62;

          Var_29 = mercury__term__var_to_int_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TVar_7);
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), Var_29, &Var_62);
          Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "txq_v_", Var_62);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeCtorSymName_11 = ((MR_Word) ((MR_hl_field(1, Type_3, 0))));
          MR_Word ArgTypes_12 = ((MR_Word) ((MR_hl_field(1, Type_3, 1))));
          MR_String StuffedTypeCtorStr_14;
          MR_String StartStr_15;
          MR_Word ArgTypeStrs_22;
          MR_Word MoreArgTypeStrs_23;
          MR_String MoreArgTypesStr_25;
          MR_String Var_73;
          MR_String Var_76;
          MR_String Var_78;
          MR_String NameStr_120;
          MR_String StuffedStr_123;
          MR_Integer _StartIndex_121;
          MR_Integer _StartIndex_127;

          NameStr_120 = mdbcomp__sym_name__sym_name_to_string_1_f_0(TypeCtorSymName_11);
          succeeded = mercury__string__sub_string_search_3_p_0(NameStr_120, (MR_String) "txq", &_StartIndex_121);
          if (succeeded)
          {
            MR_Word Pieces_122;

            Pieces_122 = mercury__string__split_at_string_2_f_0(NameStr_120, (MR_String) "txq");
            StuffedStr_123 = mercury__string__join_list_2_f_0((MR_String) "txqq", Pieces_122);
          }
          else
            StuffedStr_123 = NameStr_120;
          succeeded = mercury__string__sub_string_search_3_p_0(StuffedStr_123, (MR_String) "mrtq", &_StartIndex_127);
          if (succeeded)
          {
            MR_Word Pieces_128;

            Pieces_128 = mercury__string__split_at_string_2_f_0(StuffedStr_123, (MR_String) "mrtq");
            StuffedTypeCtorStr_14 = mercury__string__join_list_2_f_0((MR_String) "mrtqq", Pieces_128);
          }
          else
            StuffedTypeCtorStr_14 = StuffedStr_123;
          Var_73 = mercury__string__f_43_43_2_f_0(StuffedTypeCtorStr_14, (MR_String) "_txq_n");
          StartStr_15 = mercury__string__f_43_43_2_f_0((MR_String) "txq_d_", Var_73);
          ArgTypeStrs_22 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__pred_name_scalar_common_1[14]), ArgTypes_12);
          MoreArgTypeStrs_23 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__pred_name_scalar_common_1[15]), ArgTypeStrs_22);
          MoreArgTypesStr_25 = mercury__string__append_list_1_f_0(MoreArgTypeStrs_23);
          Var_76 = mercury__string__f_43_43_2_f_0(MoreArgTypesStr_25, (MR_String) "_txq_e");
          Var_78 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_76);
          Str_4 = mercury__string__f_43_43_2_f_0(StartStr_15, Var_78);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word BuiltinType_9 = ((MR_Word) ((MR_hl_field(2, Type_3, 0))));
          MR_String BuiltinTypeStr_10;

          parse_tree__prog_data__builtin_type_name_2_p_0(BuiltinType_9, &BuiltinTypeStr_10);
          Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "txq_b_", BuiltinTypeStr_10);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Type_3, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgTypes_106 = ((MR_Word) ((MR_hl_field(3, Type_3, 1))));
              MR_Word ArgTypeStrs_108;
              MR_Word MoreArgTypeStrs_109;
              MR_String MoreArgTypesStr_110;
              MR_String Var_117;
              MR_String Var_119;

              ArgTypeStrs_108 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__pred_name_scalar_common_1[18]), ArgTypes_106);
              MoreArgTypeStrs_109 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__pred_name_scalar_common_1[19]), ArgTypeStrs_108);
              MoreArgTypesStr_110 = mercury__string__append_list_1_f_0(MoreArgTypeStrs_109);
              Var_117 = mercury__string__f_43_43_2_f_0(MoreArgTypesStr_110, (MR_String) "_txq_e");
              Var_119 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_117);
              Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "txq_t", Var_119);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word PorF_17 = ((MR_Unsigned) ((MR_hl_field(3, Type_3, 1))) & (MR_Integer) 1);
              MR_Word Purity_19 = ((MR_Unsigned) ((MR_hl_field(3, Type_3, 4))) & (MR_Integer) 3);
              MR_String PorFStr_20;
              MR_String PurityStr_21;
              MR_String Var_70;
              MR_Word ArgTypes_86 = ((MR_Word) ((MR_hl_field(3, Type_3, 2))));
              MR_String StartStr_87;
              MR_Word ArgTypeStrs_88;
              MR_Word MoreArgTypeStrs_89;
              MR_String MoreArgTypesStr_90;
              MR_String Var_97;
              MR_String Var_99;

              switch (PorF_17) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  PorFStr_20 = (MR_String) "f";
                  break;
                case (MR_Integer) 0:
                  PorFStr_20 = (MR_String) "p";
                  break;
              }
              switch (Purity_19) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 2:
                  PurityStr_21 = (MR_String) "i";
                  break;
                case (MR_Integer) 0:
                  PurityStr_21 = (MR_String) "p";
                  break;
                case (MR_Integer) 1:
                  PurityStr_21 = (MR_String) "s";
                  break;
              }
              Var_70 = mercury__string__f_43_43_2_f_0(PorFStr_20, PurityStr_21);
              StartStr_87 = mercury__string__f_43_43_2_f_0((MR_String) "txq_h_", Var_70);
              ArgTypeStrs_88 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__pred_name_scalar_common_1[16]), ArgTypes_86);
              MoreArgTypeStrs_89 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__pred_name_scalar_common_1[17]), ArgTypeStrs_88);
              MoreArgTypesStr_90 = mercury__string__append_list_1_f_0(MoreArgTypeStrs_89);
              Var_97 = mercury__string__f_43_43_2_f_0(MoreArgTypesStr_90, (MR_String) "_txq_e");
              Var_99 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_97);
              Str_4 = mercury__string__f_43_43_2_f_0(StartStr_87, Var_99);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word SubType_5 = ((MR_Word) ((MR_hl_field(3, Type_3, 1))));
              MR_Word next_value_of_Type_3 = SubType_5;

              // direct tailcall eliminated
              ;
              Type_3 = next_value_of_Type_3;
              continue;
            }
            break;
        }
        break;
    }
    return Str_4;
    break;
  }
}

static MR_String MR_CALL 
hlds__pred_name__subst_to_name_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String Str_5;
  MR_Integer TVar_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 0))));
  MR_Word Type_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
  MR_String TypeStr_6;
  MR_Word Var_7;
  MR_String Var_17;
  MR_String Var_18;

  Var_7 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0));
  TypeStr_6 = parse_tree__parse_tree_out_type__mercury_type_to_string_3_f_0(Var_7, (MR_Integer) 0, Type_4);
  Var_17 = mercury__string__f_43_43_2_f_0((MR_String) "/", TypeStr_6);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), TVar_3, &Var_18);
  Str_5 = mercury__string__f_43_43_2_f_0(Var_18, Var_17);
  return Str_5;
}

static MR_String MR_CALL 
hlds__pred_name__dump_subst_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String Str_5;
  MR_Integer TVar_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 0))));
  MR_Word Type_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
  MR_String TypeStr_6;
  MR_Word Var_7;
  MR_String Var_17;
  MR_String Var_18;

  Var_7 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0));
  TypeStr_6 = parse_tree__parse_tree_out_type__mercury_type_to_string_3_f_0(Var_7, (MR_Integer) 0, Type_4);
  Var_17 = mercury__string__f_43_43_2_f_0((MR_String) " => ", TypeStr_6);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), TVar_3, &Var_18);
  Str_5 = mercury__string__f_43_43_2_f_0(Var_18, Var_17);
  return Str_5;
}

static MR_String MR_CALL 
hlds__pred_name__type_var_subst_to_string_2_f_0(
  MR_Word VarSet_4,
  MR_Word HeadVar__2_2)
{
  MR_String Str_7;
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
  MR_Word Type_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
  MR_String VarName_8;
  MR_String TypeStr_9;
  MR_String Var_19;

  mercury__varset__lookup_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), VarSet_4, Var_5, &VarName_8);
  TypeStr_9 = parse_tree__parse_tree_out_type__mercury_type_to_string_3_f_0(VarSet_4, (MR_Integer) 0, Type_6);
  Var_19 = mercury__string__f_43_43_2_f_0((MR_String) " = ", TypeStr_9);
  Str_7 = mercury__string__f_43_43_2_f_0(VarName_8, Var_19);
  return Str_7;
}

static MR_String MR_CALL 
hlds__pred_name__dump_origin_constraint_3_f_0(
  MR_Word TVarSet_5,
  MR_Word VarNamePrint_6,
  MR_Word Constraint_7)
{
  MR_String Str_8;
  MR_String Var_12;
  MR_String Var_15;

  Var_12 = parse_tree__parse_tree_out_type__mercury_constraint_to_string_3_f_0(TVarSet_5, VarNamePrint_6, Constraint_7);
  Var_15 = mercury__string__f_43_43_2_f_0(Var_12, (MR_String) "\n");
  Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "%       ", Var_15);
  return Str_8;
}

static void MR_CALL 
hlds__pred_name__instance_type_ctor_to_string_2_p_0(
  MR_Word Type_3,
  MR_String * Str_4)
{
  MR_Word TypeCtor_5;
  MR_Word TypeName_6;
  MR_Integer TypeArity_7;
  MR_String TypeNameStr_8;
  MR_String Var_17;
  MR_String Var_24;
  MR_String Var_26;

  parse_tree__prog_type__type_to_ctor_det_2_p_0(Type_3, &TypeCtor_5);
  TypeName_6 = ((MR_Word) ((MR_hl_field(0, TypeCtor_5, 0))));
  TypeArity_7 = ((MR_Integer) ((MR_hl_field(0, TypeCtor_5, 1))));
  TypeNameStr_8 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(TypeName_6, (MR_String) "__");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), TypeArity_7, &Var_17);
  Var_24 = mercury__string__f_43_43_2_f_0(Var_17, (MR_String) "__");
  Var_26 = mercury__string__f_43_43_2_f_0((MR_String) "__arity", Var_24);
  *Str_4 = mercury__string__f_43_43_2_f_0(TypeNameStr_8, Var_26);
}

static MR_Box MR_CALL 
hlds__pred_name__layout_origin_name_new_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv1_LambdaHeadVar__2_81;

  conv1_LambdaHeadVar__2_81 = hlds__pred_name__IntroducedFrom__func__layout_origin_name_new__1623__1_1_f_0(((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_81));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__pred_name__layout_origin_name_new_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_Str_4;

  conv0_Str_4 = hlds__pred_name__type_to_txq_mrtq_stuffed_string_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Str_4));
  return wrapper_arg_2;
}

MR_String MR_CALL 
hlds__pred_name__layout_origin_name_new_1_f_0(
  MR_Word Origin_3)
{
  MR_String Str_4;

  switch (MR_tag((MR_Word) Origin_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word OriginUser_5 = ((MR_Word) ((MR_hl_field(0, Origin_3, 0))));

        switch (MR_tag((MR_Word) OriginUser_5)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word PorF_6 = ((MR_Unsigned) ((MR_hl_field(0, OriginUser_5, 0))) & (MR_Integer) 1);
              MR_Word SymName_7 = ((MR_Word) ((MR_hl_field(0, OriginUser_5, 1))));
              MR_Word UserArity_8 = ((MR_Word) ((MR_hl_field(0, OriginUser_5, 2))));
              MR_String PorFStr_9;
              MR_String StuffedNameStr_10;
              MR_Integer UserArityInt_11;
              MR_String Var_248;
              MR_String Var_256;
              MR_String Var_257;
              MR_String Var_259;

              PorFStr_9 = mdbcomp__prim_data__pred_or_func_to_str_1_f_0(PorF_6);
              StuffedNameStr_10 = hlds__pred_name__mrtq_stuff_sym_name_1_f_0(SymName_7);
              UserArityInt_11 = (MR_Integer) (UserArity_8);
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), UserArityInt_11, &Var_248);
              Var_256 = mercury__string__f_43_43_2_f_0((MR_String) "_mrtq_", Var_248);
              Var_257 = mercury__string__f_43_43_2_f_0(StuffedNameStr_10, Var_256);
              Var_259 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_257);
              Str_4 = mercury__string__f_43_43_2_f_0(PorFStr_9, Var_259);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer SeqNum_35 = ((MR_Integer) ((MR_hl_field(1, OriginUser_5, 2))));
              MR_String FileName0_191 = ((MR_String) ((MR_hl_field(1, OriginUser_5, 0))));
              MR_Integer LineNum_192 = ((MR_Integer) ((MR_hl_field(1, OriginUser_5, 1))));
              MR_String FileName1_193;
              MR_String FileName_194;
              MR_String Var_260;
              MR_String Var_268;
              MR_String Var_269;
              MR_String Var_271;
              MR_String Var_272;
              MR_String Var_279;

              mercury__string__replace_all_4_p_0(FileName0_191, (MR_String) ".", (MR_String) "_", &FileName1_193);
              FileName_194 = hlds__pred_name__mrtq_stuff_1_f_0(FileName1_193);
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), LineNum_192, &Var_260);
              Var_268 = mercury__string__f_43_43_2_f_0((MR_String) "_mrtq_", Var_260);
              Var_269 = mercury__string__f_43_43_2_f_0(FileName_194, Var_268);
              Var_271 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_269);
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), SeqNum_35, &Var_272);
              Var_279 = mercury__string__f_43_43_2_f_0(Var_272, Var_271);
              Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "mrtq_lambda_", Var_279);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ClassId_12 = ((MR_Word) ((MR_hl_field(2, OriginUser_5, 0))));
              MR_Word PFSymNameArity_13 = ((MR_Word) ((MR_hl_field(2, OriginUser_5, 1))));
              MR_Word ClassSymName_14 = ((MR_Word) ((MR_hl_field(0, ClassId_12, 0))));
              MR_Integer ClassArity_15 = ((MR_Integer) ((MR_hl_field(0, ClassId_12, 1))));
              MR_String StuffedClassNameStr_16;
              MR_Word MethodSymName_17;
              MR_Word MethodUserArity_18;
              MR_String StuffedMethodNameStr_19;
              MR_Integer MethodUserArityInt_20;
              MR_Word PorF_177;
              MR_String PorFStr_178;
              MR_String Var_313;
              MR_String Var_321;
              MR_String Var_322;
              MR_String Var_324;
              MR_String Var_325;
              MR_String Var_327;
              MR_String Var_328;
              MR_String Var_335;
              MR_String Var_337;
              MR_String Var_338;

              StuffedClassNameStr_16 = hlds__pred_name__mrtq_stuff_sym_name_1_f_0(ClassSymName_14);
              PorF_177 = ((MR_Unsigned) ((MR_hl_field(0, PFSymNameArity_13, 0))) & (MR_Integer) 1);
              MethodSymName_17 = ((MR_Word) ((MR_hl_field(0, PFSymNameArity_13, 1))));
              MethodUserArity_18 = ((MR_Word) ((MR_hl_field(0, PFSymNameArity_13, 2))));
              PorFStr_178 = mdbcomp__prim_data__pred_or_func_to_str_1_f_0(PorF_177);
              StuffedMethodNameStr_19 = hlds__pred_name__mrtq_stuff_sym_name_1_f_0(MethodSymName_17);
              MethodUserArityInt_20 = (MR_Integer) (MethodUserArity_18);
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), MethodUserArityInt_20, &Var_313);
              Var_321 = mercury__string__f_43_43_2_f_0((MR_String) "_mrtq_", Var_313);
              Var_322 = mercury__string__f_43_43_2_f_0(StuffedMethodNameStr_19, Var_321);
              Var_324 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_322);
              Var_325 = mercury__string__f_43_43_2_f_0(PorFStr_178, Var_324);
              Var_327 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_325);
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), ClassArity_15, &Var_328);
              Var_335 = mercury__string__f_43_43_2_f_0(Var_328, Var_327);
              Var_337 = mercury__string__f_43_43_2_f_0((MR_String) "_mrtq_", Var_335);
              Var_338 = mercury__string__f_43_43_2_f_0(StuffedClassNameStr_16, Var_337);
              Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "mrtq_class_", Var_338);
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, OriginUser_5, 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word MethodConstraints_21 = ((MR_Word) ((MR_hl_field(3, OriginUser_5, 2))));
                  MR_Word InstanceTypes_22;
                  MR_Word InstanceTypeStrs_25;
                  MR_Word MoreInstanceTypeStrs_26;
                  MR_String MoreInstanceTypesStr_28;
                  MR_Word PorF_180;
                  MR_String PorFStr_181;
                  MR_Word ClassId_182;
                  MR_Word PFSymNameArity_183 = ((MR_Word) ((MR_hl_field(3, OriginUser_5, 1))));
                  MR_Word ClassSymName_184;
                  MR_Integer ClassArity_185;
                  MR_String StuffedClassNameStr_186;
                  MR_Word MethodSymName_187;
                  MR_Word MethodUserArity_188;
                  MR_String StuffedMethodNameStr_189;
                  MR_Integer MethodUserArityInt_190;
                  MR_String Var_282;
                  MR_String Var_284;
                  MR_String Var_285;
                  MR_String Var_292;
                  MR_String Var_294;
                  MR_String Var_295;
                  MR_String Var_297;
                  MR_String Var_298;
                  MR_String Var_300;
                  MR_String Var_301;
                  MR_String Var_308;
                  MR_String Var_310;
                  MR_String Var_311;

                  PorF_180 = ((MR_Unsigned) ((MR_hl_field(0, PFSymNameArity_183, 0))) & (MR_Integer) 1);
                  MethodSymName_187 = ((MR_Word) ((MR_hl_field(0, PFSymNameArity_183, 1))));
                  MethodUserArity_188 = ((MR_Word) ((MR_hl_field(0, PFSymNameArity_183, 2))));
                  PorFStr_181 = mdbcomp__prim_data__pred_or_func_to_str_1_f_0(PorF_180);
                  StuffedMethodNameStr_189 = hlds__pred_name__mrtq_stuff_sym_name_1_f_0(MethodSymName_187);
                  MethodUserArityInt_190 = (MR_Integer) (MethodUserArity_188);
                  ClassId_182 = ((MR_Word) ((MR_hl_field(0, MethodConstraints_21, 0))));
                  InstanceTypes_22 = ((MR_Word) ((MR_hl_field(0, MethodConstraints_21, 1))));
                  ClassSymName_184 = ((MR_Word) ((MR_hl_field(0, ClassId_182, 0))));
                  ClassArity_185 = ((MR_Integer) ((MR_hl_field(0, ClassId_182, 1))));
                  StuffedClassNameStr_186 = hlds__pred_name__mrtq_stuff_sym_name_1_f_0(ClassSymName_184);
                  InstanceTypeStrs_25 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__pred_name_scalar_common_1[12]), InstanceTypes_22);
                  MoreInstanceTypeStrs_26 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__pred_name_scalar_common_1[13]), InstanceTypeStrs_25);
                  MoreInstanceTypesStr_28 = mercury__string__append_list_1_f_0(MoreInstanceTypeStrs_26);
                  Var_282 = mercury__string__f_43_43_2_f_0(MoreInstanceTypesStr_28, (MR_String) "_mrtq");
                  Var_284 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_282);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), MethodUserArityInt_190, &Var_285);
                  Var_292 = mercury__string__f_43_43_2_f_0(Var_285, Var_284);
                  Var_294 = mercury__string__f_43_43_2_f_0((MR_String) "_mrtq_", Var_292);
                  Var_295 = mercury__string__f_43_43_2_f_0(StuffedMethodNameStr_189, Var_294);
                  Var_297 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_295);
                  Var_298 = mercury__string__f_43_43_2_f_0(PorFStr_181, Var_297);
                  Var_300 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_298);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), ClassArity_185, &Var_301);
                  Var_308 = mercury__string__f_43_43_2_f_0(Var_301, Var_300);
                  Var_310 = mercury__string__f_43_43_2_f_0((MR_String) "_mrtq_", Var_308);
                  Var_311 = mercury__string__f_43_43_2_f_0(StuffedClassNameStr_186, Var_310);
                  Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "mrtq_instance_", Var_311);
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word PromiseType_29 = ((MR_Unsigned) ((MR_hl_field(3, OriginUser_5, 1))) & (MR_Integer) 3);
                  MR_String FileName0_30 = ((MR_String) ((MR_hl_field(3, OriginUser_5, 2))));
                  MR_Integer LineNum_31 = ((MR_Integer) ((MR_hl_field(3, OriginUser_5, 3))));
                  MR_String PromiseStr_32 = ((&hlds__pred_name_vector_common_6[49 + PromiseType_29]))->hlds__pred_name__vector_common_type_6_0__vct_6_f_0;
                  MR_String FileName1_33;
                  MR_String FileName_34;
                  MR_String Var_340;
                  MR_String Var_348;
                  MR_String Var_349;
                  MR_String Var_351;
                  MR_String Var_352;

                  mercury__string__replace_all_4_p_0(FileName0_30, (MR_String) ".", (MR_String) "_", &FileName1_33);
                  FileName_34 = hlds__pred_name__mrtq_stuff_1_f_0(FileName1_33);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), LineNum_31, &Var_340);
                  Var_348 = mercury__string__f_43_43_2_f_0((MR_String) "_mrtq_", Var_340);
                  Var_349 = mercury__string__f_43_43_2_f_0(FileName_34, Var_348);
                  Var_351 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_349);
                  Var_352 = mercury__string__f_43_43_2_f_0(PromiseStr_32, Var_351);
                  Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "mrtq_", Var_352);
                }
                break;
            }
            break;
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word OriginCompiler_36 = ((MR_Word) ((MR_hl_field(1, Origin_3, 0))));

        switch (MR_tag((MR_Word) OriginCompiler_36)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Kind_37 = ((MR_Unsigned) ((MR_hl_field(0, OriginCompiler_36, 0))) & (MR_Integer) 3);
              MR_Word TypeCtor_38 = ((MR_Word) ((MR_hl_field(0, OriginCompiler_36, 1))));
              MR_String UciName_39;
              MR_Word TypeCtorSymName_40;
              MR_Integer TypeCtorArity_41;
              MR_String TypeCtorStr_42;
              MR_String StuffedTypeCtorStr_43;
              MR_String Var_362;
              MR_String Var_370;
              MR_String Var_371;
              MR_String Var_373;
              MR_String Var_374;

              switch (Kind_37) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 2:
                  UciName_39 = (MR_String) "cmp";
                  break;
                case (MR_Integer) 1:
                  UciName_39 = (MR_String) "idx";
                  break;
                case (MR_Integer) 0:
                  UciName_39 = (MR_String) "uni";
                  break;
              }
              TypeCtorSymName_40 = ((MR_Word) ((MR_hl_field(0, TypeCtor_38, 0))));
              TypeCtorArity_41 = ((MR_Integer) ((MR_hl_field(0, TypeCtor_38, 1))));
              TypeCtorStr_42 = mdbcomp__sym_name__sym_name_to_string_1_f_0(TypeCtorSymName_40);
              StuffedTypeCtorStr_43 = hlds__pred_name__mrtq_stuff_1_f_0(TypeCtorStr_42);
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), TypeCtorArity_41, &Var_362);
              Var_370 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_362);
              Var_371 = mercury__string__f_43_43_2_f_0(StuffedTypeCtorStr_43, Var_370);
              Var_373 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_371);
              Var_374 = mercury__string__f_43_43_2_f_0(UciName_39, Var_373);
              Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "mrtq_", Var_374);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer LineNum_195 = ((MR_Integer) ((MR_hl_field(1, OriginCompiler_36, 0))));
              MR_Integer SeqNum_196 = ((MR_Integer) ((MR_hl_field(1, OriginCompiler_36, 1))));
              MR_String Var_425;
              MR_String Var_433;
              MR_String Var_434;
              MR_String Var_441;

              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), SeqNum_196, &Var_425);
              Var_433 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_425);
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), LineNum_195, &Var_434);
              Var_441 = mercury__string__f_43_43_2_f_0(Var_434, Var_433);
              Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "mrtq_deforst_", Var_441);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word PredKind_44 = ((MR_Unsigned) ((MR_hl_field(2, OriginCompiler_36, 1))) & (MR_Integer) 3);
              MR_String PredKindStr_45;
              MR_Word TypeCtor_197 = ((MR_Word) ((MR_hl_field(2, OriginCompiler_36, 0))));
              MR_Word TypeCtorSymName_198 = ((MR_Word) ((MR_hl_field(0, TypeCtor_197, 0))));
              MR_Integer TypeCtorArity_199 = ((MR_Integer) ((MR_hl_field(0, TypeCtor_197, 1))));
              MR_String TypeCtorStr_200;
              MR_String StuffedTypeCtorStr_201;
              MR_String Var_393;
              MR_String Var_401;
              MR_String Var_402;
              MR_String Var_404;
              MR_String Var_405;

              TypeCtorStr_200 = mdbcomp__sym_name__sym_name_to_string_1_f_0(TypeCtorSymName_198);
              StuffedTypeCtorStr_201 = hlds__pred_name__mrtq_stuff_1_f_0(TypeCtorStr_200);
              PredKindStr_45 = ((&hlds__pred_name_vector_common_6[45 + PredKind_44]))->hlds__pred_name__vector_common_type_6_0__vct_6_f_0;
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), TypeCtorArity_199, &Var_393);
              Var_401 = mercury__string__f_43_43_2_f_0((MR_String) "_mrtq_", Var_393);
              Var_402 = mercury__string__f_43_43_2_f_0(StuffedTypeCtorStr_201, Var_401);
              Var_404 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_402);
              Var_405 = mercury__string__f_43_43_2_f_0(PredKindStr_45, Var_404);
              Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "mrtq_solver_", Var_405);
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, OriginCompiler_36, 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_String KindStr_46;
                  MR_Word PorF_202;
                  MR_Word SymName_203;
                  MR_Word UserArity_204;
                  MR_String PorFStr_205;
                  MR_String StuffedNameStr_206;
                  MR_Integer UserArityInt_207;
                  MR_Word PFSymNameArity_208 = ((MR_Word) ((MR_hl_field(3, OriginCompiler_36, 1))));
                  MR_Word Kind_209 = ((MR_Unsigned) ((MR_hl_field(3, OriginCompiler_36, 2))) & (MR_Integer) 1);
                  MR_String Var_376;
                  MR_String Var_384;
                  MR_String Var_385;
                  MR_String Var_387;
                  MR_String Var_388;
                  MR_String Var_390;
                  MR_String Var_391;

                  PorF_202 = ((MR_Unsigned) ((MR_hl_field(0, PFSymNameArity_208, 0))) & (MR_Integer) 1);
                  SymName_203 = ((MR_Word) ((MR_hl_field(0, PFSymNameArity_208, 1))));
                  UserArity_204 = ((MR_Word) ((MR_hl_field(0, PFSymNameArity_208, 2))));
                  PorFStr_205 = mdbcomp__prim_data__pred_or_func_to_str_1_f_0(PorF_202);
                  StuffedNameStr_206 = hlds__pred_name__mrtq_stuff_sym_name_1_f_0(SymName_203);
                  UserArityInt_207 = (MR_Integer) (UserArity_204);
                  switch (Kind_209) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      KindStr_46 = (MR_String) "reset";
                      break;
                    case (MR_Integer) 0:
                      KindStr_46 = (MR_String) "stats";
                      break;
                  }
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), UserArityInt_207, &Var_376);
                  Var_384 = mercury__string__f_43_43_2_f_0((MR_String) "_mrtq_", Var_376);
                  Var_385 = mercury__string__f_43_43_2_f_0(StuffedNameStr_206, Var_384);
                  Var_387 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_385);
                  Var_388 = mercury__string__f_43_43_2_f_0(PorFStr_205, Var_387);
                  Var_390 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_388);
                  Var_391 = mercury__string__f_43_43_2_f_0(KindStr_46, Var_390);
                  Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "mrtq_table_", Var_391);
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_String MutableName_48 = ((MR_String) ((MR_hl_field(3, OriginCompiler_36, 2))));
                  MR_String StuffedNameStr_210;
                  MR_Word Kind_211 = ((MR_Unsigned) ((MR_hl_field(3, OriginCompiler_36, 3))) & (MR_Integer) 15);
                  MR_String KindStr_212;
                  MR_String Var_408;
                  MR_String Var_409;

                  StuffedNameStr_210 = hlds__pred_name__mrtq_stuff_1_f_0(MutableName_48);
                  KindStr_212 = ((&hlds__pred_name_vector_common_6[33 + Kind_211]))->hlds__pred_name__vector_common_type_6_0__vct_6_f_0;
                  Var_408 = mercury__string__f_43_43_2_f_0((MR_String) "_", StuffedNameStr_210);
                  Var_409 = mercury__string__f_43_43_2_f_0(KindStr_212, Var_408);
                  Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "mrtq_mutable_", Var_409);
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_String FileName0_445 = ((MR_String) ((MR_hl_field(3, OriginCompiler_36, 1))));
                  MR_Integer LineNum_446 = ((MR_Integer) ((MR_hl_field(3, OriginCompiler_36, 2))));
                  MR_String FileName1_447;
                  MR_String FileName_448;
                  MR_String Var_450;
                  MR_String Var_453;
                  MR_String Var_454;
                  MR_String Var_456;
                  MR_String Var_457;

                  mercury__string__replace_all_4_p_0(FileName0_445, (MR_String) ".", (MR_String) "_", &FileName1_447);
                  FileName_448 = hlds__pred_name__mrtq_stuff_1_f_0(FileName1_447);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), LineNum_446, &Var_450);
                  Var_453 = mercury__string__f_43_43_2_f_0((MR_String) "_mrtq_", Var_450);
                  Var_454 = mercury__string__f_43_43_2_f_0(FileName_448, Var_453);
                  Var_456 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_454);
                  Var_457 = mercury__string__f_43_43_2_f_0((MR_String) "initialise", Var_456);
                  Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "mrtq_", Var_457);
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_String FileName0_213 = ((MR_String) ((MR_hl_field(3, OriginCompiler_36, 1))));
                  MR_Integer LineNum_214 = ((MR_Integer) ((MR_hl_field(3, OriginCompiler_36, 2))));
                  MR_String FileName1_215;
                  MR_String FileName_216;
                  MR_String Var_411;
                  MR_String Var_419;
                  MR_String Var_420;
                  MR_String Var_422;
                  MR_String Var_423;

                  mercury__string__replace_all_4_p_0(FileName0_213, (MR_String) ".", (MR_String) "_", &FileName1_215);
                  FileName_216 = hlds__pred_name__mrtq_stuff_1_f_0(FileName1_215);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), LineNum_214, &Var_411);
                  Var_419 = mercury__string__f_43_43_2_f_0((MR_String) "_mrtq_", Var_411);
                  Var_420 = mercury__string__f_43_43_2_f_0(FileName_216, Var_419);
                  Var_422 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_420);
                  Var_423 = mercury__string__f_43_43_2_f_0((MR_String) "finalise", Var_422);
                  Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "mrtq_", Var_423);
                }
                break;
            }
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word PredTransform_49 = ((MR_Word) ((MR_hl_field(2, Origin_3, 0))));
        MR_Word OldOrigin_50 = ((MR_Word) ((MR_hl_field(2, Origin_3, 1))));
        MR_String OldStr_52;
        MR_String PredTransformStr_53;
        MR_String Var_359;
        MR_String Var_361;

        OldStr_52 = hlds__pred_name__layout_origin_name_new_1_f_0(OldOrigin_50);
        PredTransformStr_53 = hlds__pred_name__layout_pred_transform_name_new_1_f_0(PredTransform_49);
        Var_359 = mercury__string__f_43_43_2_f_0(PredTransformStr_53, (MR_String) "_mrtq_pte");
        Var_361 = mercury__string__f_43_43_2_f_0((MR_String) "_mrtq_pts_", Var_359);
        Str_4 = mercury__string__f_43_43_2_f_0(OldStr_52, Var_361);
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word ProcTransform_54 = ((MR_Word) ((MR_hl_field(3, Origin_3, 0))));
        MR_Integer ProcId_56 = ((MR_Integer) ((MR_hl_field(3, Origin_3, 3))));
        MR_String ProcTransformStr_57;
        MR_Word OldOrigin_242 = ((MR_Word) ((MR_hl_field(3, Origin_3, 1))));
        MR_String OldStr_243;
        MR_String Var_355;
        MR_String Var_357;

        OldStr_243 = hlds__pred_name__layout_origin_name_new_1_f_0(OldOrigin_242);
        ProcTransformStr_57 = hlds__pred_name__layout_proc_transform_name_new_2_f_0(ProcTransform_54, ProcId_56);
        Var_355 = mercury__string__f_43_43_2_f_0(ProcTransformStr_57, (MR_String) "_mrtq_pmte");
        Var_357 = mercury__string__f_43_43_2_f_0((MR_String) "_mrtq_pmts_", Var_355);
        Str_4 = mercury__string__f_43_43_2_f_0(OldStr_243, Var_357);
      }
      break;
  }
  return Str_4;
}

static MR_String MR_CALL 
hlds__pred_name__mrtq_stuff_1_f_0(
  MR_String Str_3)
{
  MR_bool succeeded;
  MR_String StuffedStr_4;
  MR_Integer _StartIndex_5;

  succeeded = mercury__string__sub_string_search_3_p_0(Str_3, (MR_String) "mrtq", &_StartIndex_5);
  if (succeeded)
  {
    MR_Word Pieces_6;

    Pieces_6 = mercury__string__split_at_string_2_f_0(Str_3, (MR_String) "mrtq");
    StuffedStr_4 = mercury__string__join_list_2_f_0((MR_String) "mrtqq", Pieces_6);
  }
  else
    StuffedStr_4 = Str_3;
  return StuffedStr_4;
}

static MR_String MR_CALL 
hlds__pred_name__mrtq_stuff_sym_name_1_f_0(
  MR_Word SymName_3)
{
  MR_bool succeeded;
  MR_String StuffedStr_4;
  MR_String NameStr_5;
  MR_Integer _StartIndex_6;

  NameStr_5 = mdbcomp__sym_name__sym_name_to_string_1_f_0(SymName_3);
  succeeded = mercury__string__sub_string_search_3_p_0(NameStr_5, (MR_String) "mrtq", &_StartIndex_6);
  if (succeeded)
  {
    MR_Word Pieces_7;

    Pieces_7 = mercury__string__split_at_string_2_f_0(NameStr_5, (MR_String) "mrtq");
    StuffedStr_4 = mercury__string__join_list_2_f_0((MR_String) "mrtqq", Pieces_7);
  }
  else
    StuffedStr_4 = NameStr_5;
  return StuffedStr_4;
}

static MR_String MR_CALL 
hlds__pred_name__layout_proc_transform_name_new_2_f_0(
  MR_Word ProcTransform_4,
  MR_Integer ProcId_5)
{
  MR_String Str_6;
  MR_Integer ProcIdInt_7;

  ProcIdInt_7 = hlds__pred_proc_id__proc_id_to_int_1_f_0(ProcId_5);
  switch (MR_tag((MR_Word) ProcTransform_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(ProcTransform_4)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          Str_6 = (MR_String) "parlc";
          break;
        case (MR_Integer) 1:
          Str_6 = (MR_String) "stm";
          break;
        case (MR_Integer) 2:
          Str_6 = (MR_String) "iotabling";
          break;
        case (MR_Integer) 3:
          Str_6 = (MR_String) "daio";
          break;
      }
      break;
    case (MR_Integer) 1:
      Str_6 = (MR_String) "usertypespec";
      break;
    case (MR_Integer) 2:
      {
        MR_Integer SeqNum_10 = ((MR_Integer) ((MR_hl_field(2, ProcTransform_4, 0))));
        MR_String Var_167;

        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), SeqNum_10, &Var_167);
        Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "ho_", Var_167);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, ProcTransform_4, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String Var_27;
            MR_Word ArgPosns_65 = ((MR_Word) ((MR_hl_field(3, ProcTransform_4, 2))));

            Var_27 = hlds__pred_name__underscore_ints_to_string_1_f_0(ArgPosns_65);
            Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "acc", Var_27);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ArgPosns_11 = ((MR_Word) ((MR_hl_field(3, ProcTransform_4, 1))));
            MR_String Var_22;

            Var_22 = hlds__pred_name__underscore_ints_to_string_1_f_0(ArgPosns_11);
            Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "ua", Var_22);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer LineNum_13 = ((MR_Integer) ((MR_hl_field(3, ProcTransform_4, 1))));
            MR_Integer SeqNum_66 = ((MR_Integer) ((MR_hl_field(3, ProcTransform_4, 2))));
            MR_String Var_130;
            MR_String Var_138;
            MR_String Var_139;
            MR_String Var_146;
            MR_String Var_148;
            MR_String Var_149;
            MR_String Var_156;

            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), SeqNum_66, &Var_130);
            Var_138 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_130);
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), LineNum_13, &Var_139);
            Var_146 = mercury__string__f_43_43_2_f_0(Var_139, Var_138);
            Var_148 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_146);
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), ProcIdInt_7, &Var_149);
            Var_156 = mercury__string__f_43_43_2_f_0(Var_149, Var_148);
            Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "loopinv_", Var_156);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Integer SeqNum_67 = ((MR_Integer) ((MR_hl_field(3, ProcTransform_4, 2))));
            MR_Integer LineNum_68 = ((MR_Integer) ((MR_hl_field(3, ProcTransform_4, 1))));
            MR_String Var_102;
            MR_String Var_110;
            MR_String Var_111;
            MR_String Var_118;
            MR_String Var_120;
            MR_String Var_121;
            MR_String Var_128;

            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), SeqNum_67, &Var_102);
            Var_110 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_102);
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), LineNum_68, &Var_111);
            Var_118 = mercury__string__f_43_43_2_f_0(Var_111, Var_110);
            Var_120 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_118);
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), ProcIdInt_7, &Var_121);
            Var_128 = mercury__string__f_43_43_2_f_0(Var_121, Var_120);
            Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "tup_", Var_128);
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Integer SeqNum_69 = ((MR_Integer) ((MR_hl_field(3, ProcTransform_4, 2))));
            MR_Integer LineNum_70 = ((MR_Integer) ((MR_hl_field(3, ProcTransform_4, 1))));
            MR_String Var_74;
            MR_String Var_82;
            MR_String Var_83;
            MR_String Var_90;
            MR_String Var_92;
            MR_String Var_93;
            MR_String Var_100;

            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), SeqNum_69, &Var_74);
            Var_82 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_74);
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), LineNum_70, &Var_83);
            Var_90 = mercury__string__f_43_43_2_f_0(Var_83, Var_82);
            Var_92 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_90);
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), ProcIdInt_7, &Var_93);
            Var_100 = mercury__string__f_43_43_2_f_0(Var_93, Var_92);
            Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "untup_", Var_100);
          }
          break;
        case (MR_Integer) 5:
          {
            MR_String Var_56;
            MR_Word ArgPosns_71 = ((MR_Word) ((MR_hl_field(3, ProcTransform_4, 1))));

            Var_56 = hlds__pred_name__underscore_ints_to_string_1_f_0(ArgPosns_71);
            Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "depparconj", Var_56);
          }
          break;
        case (MR_Integer) 6:
          {
            MR_String Var_63;
            MR_Word ArgPosns_72 = ((MR_Word) ((MR_hl_field(3, ProcTransform_4, 2))));
            MR_String Var_158;
            MR_String Var_165;

            Var_63 = hlds__pred_name__underscore_ints_to_string_1_f_0(ArgPosns_72);
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), ProcIdInt_7, &Var_158);
            Var_165 = mercury__string__f_43_43_2_f_0(Var_158, Var_63);
            Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "lcmc ", Var_165);
          }
          break;
      }
      break;
  }
  return Str_6;
}

static MR_Box MR_CALL 
hlds__pred_name__layout_pred_transform_name_new_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_Str_5;

  conv0_Str_5 = hlds__pred_name__subst_to_mrtq_stuffed_string_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Str_5));
  return wrapper_arg_2;
}

static MR_String MR_CALL 
hlds__pred_name__layout_pred_transform_name_new_1_f_0(
  MR_Word PredTransform_3)
{
  MR_String Str_4;

  switch (MR_tag((MR_Word) PredTransform_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(PredTransform_3)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          Str_4 = (MR_String) "tablegen";
          break;
        case (MR_Integer) 1:
          Str_4 = (MR_String) "structreuse";
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Substs_5 = ((MR_Word) ((MR_hl_field(1, PredTransform_3, 0))));
        MR_Word SubstList_6;
        MR_Word SubstStrs_7;
        MR_String SubstsStr_8;

        SubstList_6 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&hlds__pred_name_scalar_common_1[0]), Substs_5);
        SubstStrs_7 = mercury__list__map_2_f_0((MR_Word) (&hlds__pred_name_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__pred_name_scalar_common_1[11]), SubstList_6);
        SubstsStr_8 = mercury__string__join_list_2_f_0((MR_String) "_txq_s_", SubstStrs_7);
        Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "typespec_", SubstsStr_8);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Integer Distance_9 = ((MR_Integer) ((MR_hl_field(2, PredTransform_3, 0))));
        MR_String Var_26;

        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), Distance_9, &Var_26);
        Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "distgran_", Var_26);
      }
      break;
    case (MR_Integer) 3:
      Str_4 = (MR_String) "ssdb";
      break;
  }
  return Str_4;
}

MR_String MR_CALL 
hlds__pred_name__layout_origin_name_2_f_0(
  MR_Word Origin_4,
  MR_String Name0_5)
{
  MR_bool succeeded;
  MR_String Name_6;

  switch (MR_tag((MR_Word) Origin_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word OriginUser_7 = ((MR_Word) ((MR_hl_field(0, Origin_4, 0))));

        switch (MR_tag((MR_Word) OriginUser_7)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            Name_6 = Name0_5;
            break;
          case (MR_Integer) 1:
            {
              MR_String FileName0_18 = ((MR_String) ((MR_hl_field(1, OriginUser_7, 0))));
              MR_Integer LineNum_19 = ((MR_Integer) ((MR_hl_field(1, OriginUser_7, 1))));
              MR_Integer SeqNum_20 = ((MR_Integer) ((MR_hl_field(1, OriginUser_7, 2))));
              MR_String Var_21;

              succeeded = mercury__string__append_3_p_1((MR_String) "IntroducedFrom", &Var_21, Name0_5);
              if (succeeded)
              {
                MR_String FileName_22;

                mercury__string__replace_all_4_p_0(FileName0_18, (MR_String) ".", (MR_String) "_", &FileName_22);
                succeeded = (SeqNum_20 > (MR_Integer) 1);
                if (succeeded)
                {
                  MR_String Var_74;
                  MR_String Var_82;
                  MR_String Var_83;
                  MR_String Var_85;
                  MR_String Var_86;
                  MR_String Var_93;

                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), LineNum_19, &Var_74);
                  Var_82 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_74);
                  Var_83 = mercury__string__f_43_43_2_f_0(FileName_22, Var_82);
                  Var_85 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_83);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), SeqNum_20, &Var_86);
                  Var_93 = mercury__string__f_43_43_2_f_0(Var_86, Var_85);
                  Name_6 = mercury__string__f_43_43_2_f_0((MR_String) "lambda", Var_93);
                }
                else
                {
                  MR_String Var_95;
                  MR_String Var_103;
                  MR_String Var_104;

                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), LineNum_19, &Var_95);
                  Var_103 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_95);
                  Var_104 = mercury__string__f_43_43_2_f_0(FileName_22, Var_103);
                  Name_6 = mercury__string__f_43_43_2_f_0((MR_String) "lambda_", Var_104);
                }
              }
              else
                Name_6 = Name0_5;
            }
            break;
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word OriginCompiler_23 = ((MR_Word) ((MR_hl_field(1, Origin_4, 0))));

        switch (MR_tag((MR_Word) OriginCompiler_23)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            Name_6 = Name0_5;
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            Name_6 = Name0_5;
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word PredTransform_39 = ((MR_Word) ((MR_hl_field(2, Origin_4, 0))));
        MR_Word OldOrigin_40 = ((MR_Word) ((MR_hl_field(2, Origin_4, 1))));
        MR_String OldName_42;

        OldName_42 = hlds__pred_name__layout_origin_name_2_f_0(OldOrigin_40, (MR_String) "");
        succeeded = (strcmp(OldName_42, (MR_String) "") == 0);
        if (succeeded)
          Name_6 = Name0_5;
        else
        {
          MR_String Var_65;
          MR_String Var_67;

          Var_67 = hlds__pred_name__layout_pred_transform_name_1_f_0(PredTransform_39);
          Var_65 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_67);
          Name_6 = mercury__string__f_43_43_2_f_0(OldName_42, Var_65);
        }
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word ProcTransform_43 = ((MR_Word) ((MR_hl_field(3, Origin_4, 0))));
        MR_Integer ProcId_45 = ((MR_Integer) ((MR_hl_field(3, Origin_4, 3))));
        MR_Word OldOrigin_72 = ((MR_Word) ((MR_hl_field(3, Origin_4, 1))));
        MR_String OldName_73;

        OldName_73 = hlds__pred_name__layout_origin_name_2_f_0(OldOrigin_72, (MR_String) "");
        succeeded = (strcmp(OldName_73, (MR_String) "") == 0);
        if (!(succeeded))
          succeeded = (ProcTransform_43 == (MR_Word) ((MR_Unsigned) 8U));
        if (succeeded)
          Name_6 = Name0_5;
        else
        {
          MR_String Var_69;
          MR_String Var_71;

          Var_71 = hlds__pred_name__layout_proc_transform_name_2_f_0(ProcTransform_43, ProcId_45);
          Var_69 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_71);
          Name_6 = mercury__string__f_43_43_2_f_0(OldName_73, Var_69);
        }
      }
      break;
  }
  return Name_6;
}

static MR_Box MR_CALL 
hlds__pred_name__layout_proc_transform_name_2_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = mercury__string__int_to_string_1_f_0(((MR_Integer) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__pred_name__layout_proc_transform_name_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = mercury__string__int_to_string_1_f_0(((MR_Integer) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_String MR_CALL 
hlds__pred_name__layout_proc_transform_name_2_f_0(
  MR_Word ProcTransform_4,
  MR_Integer ProcId_5)
{
  MR_String Name_6;

  switch (MR_tag((MR_Word) ProcTransform_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(ProcTransform_4)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          Name_6 = (MR_String) "par_lc";
          break;
        case (MR_Integer) 1:
          Name_6 = (MR_String) "stm_expansion";
          break;
        case (MR_Integer) 2:
          Name_6 = (MR_String) "io_tabling";
          break;
        case (MR_Integer) 3:
          Name_6 = (MR_String) "daio";
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Integer CallerProcId_8 = ((MR_Integer) ((MR_hl_field(1, ProcTransform_4, 1))));
        MR_String Var_16;
        MR_Integer Var_17;

        Var_17 = hlds__pred_proc_id__proc_id_to_int_1_f_0(CallerProcId_8);
        Var_16 = mercury__string__int_to_string_1_f_0(Var_17);
        Name_6 = mercury__string__f_43_43_2_f_0((MR_String) "hoproc", Var_16);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Integer SeqNum_9 = ((MR_Integer) ((MR_hl_field(2, ProcTransform_4, 0))));
        MR_String Var_19;

        Var_19 = mercury__string__int_to_string_1_f_0(SeqNum_9);
        Name_6 = mercury__string__f_43_43_2_f_0((MR_String) "ho", Var_19);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, ProcTransform_4, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String Var_26;
            MR_Word Var_28;
            MR_Word Posns_46 = ((MR_Word) ((MR_hl_field(3, ProcTransform_4, 2))));

            Var_28 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__pred_name_scalar_common_1[9]), Posns_46);
            Var_26 = mercury__string__join_list_2_f_0((MR_String) "_", Var_28);
            Name_6 = mercury__string__f_43_43_2_f_0((MR_String) "acc_", Var_26);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Posns_10 = ((MR_Word) ((MR_hl_field(3, ProcTransform_4, 1))));
            MR_String Var_21;
            MR_Word Var_23;

            Var_23 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__pred_name_scalar_common_1[10]), Posns_10);
            Var_21 = mercury__string__join_list_2_f_0((MR_String) "_", Var_23);
            Name_6 = mercury__string__f_43_43_2_f_0((MR_String) "ua_", Var_21);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String Var_31;
            MR_Integer Var_32;

            Var_32 = hlds__pred_proc_id__proc_id_to_int_1_f_0(ProcId_5);
            Var_31 = mercury__string__int_to_string_1_f_0(Var_32);
            Name_6 = mercury__string__f_43_43_2_f_0((MR_String) "inv_", Var_31);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_String Var_34;
            MR_Integer Var_35;

            Var_35 = hlds__pred_proc_id__proc_id_to_int_1_f_0(ProcId_5);
            Var_34 = mercury__string__int_to_string_1_f_0(Var_35);
            Name_6 = mercury__string__f_43_43_2_f_0((MR_String) "tup_", Var_34);
          }
          break;
        case (MR_Integer) 4:
          {
            MR_String Var_37;
            MR_Integer Var_38;

            Var_38 = hlds__pred_proc_id__proc_id_to_int_1_f_0(ProcId_5);
            Var_37 = mercury__string__int_to_string_1_f_0(Var_38);
            Name_6 = mercury__string__f_43_43_2_f_0((MR_String) "untup_", Var_37);
          }
          break;
        case (MR_Integer) 5:
          Name_6 = (MR_String) "dep_par_conj_";
          break;
        case (MR_Integer) 6:
          {
            MR_Word ArgPos_14 = ((MR_Word) ((MR_hl_field(3, ProcTransform_4, 2))));
            MR_String Var_40;
            MR_String Var_41;
            MR_Integer Var_42;
            MR_String Var_43;
            MR_String Var_45;

            Var_42 = hlds__pred_proc_id__proc_id_to_int_1_f_0(ProcId_5);
            Var_41 = mercury__string__int_to_string_1_f_0(Var_42);
            Var_45 = hlds__pred_name__underscore_ints_to_string_1_f_0(ArgPos_14);
            Var_43 = mercury__string__f_43_43_2_f_0((MR_String) "_args", Var_45);
            Var_40 = mercury__string__f_43_43_2_f_0(Var_41, Var_43);
            Name_6 = mercury__string__f_43_43_2_f_0((MR_String) "retptr_", Var_40);
          }
          break;
      }
      break;
  }
  return Name_6;
}

static MR_String MR_CALL 
hlds__pred_name__underscore_ints_to_string_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String HeadVar__2_2;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__2_2 = (MR_String) "";
  else
  {
    MR_Integer N_3 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Ns_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_String Var_6;
    MR_String Var_7;
    MR_String Var_8;

    Var_7 = mercury__string__int_to_string_1_f_0(N_3);
    Var_8 = hlds__pred_name__underscore_ints_to_string_1_f_0(Ns_4);
    Var_6 = mercury__string__f_43_43_2_f_0(Var_7, Var_8);
    HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_6);
  }
  return HeadVar__2_2;
}

static MR_Box MR_CALL 
hlds__pred_name__layout_pred_transform_name_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_Str_5;

  conv0_Str_5 = hlds__pred_name__subst_to_name_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Str_5));
  return wrapper_arg_2;
}

static MR_String MR_CALL 
hlds__pred_name__layout_pred_transform_name_1_f_0(
  MR_Word PredTransform_3)
{
  MR_String Name_4;

  switch (MR_tag((MR_Word) PredTransform_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(PredTransform_3)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          Name_4 = (MR_String) "table_gen";
          break;
        case (MR_Integer) 1:
          Name_4 = (MR_String) "structure_reuse";
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Substs_5 = ((MR_Word) ((MR_hl_field(1, PredTransform_3, 0))));
        MR_Word Var_9;
        MR_Word Var_11;

        Var_11 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&hlds__pred_name_scalar_common_1[0]), Substs_5);
        Var_9 = mercury__list__map_2_f_0((MR_Word) (&hlds__pred_name_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__pred_name_scalar_common_1[8]), Var_11);
        Name_4 = mercury__string__join_list_2_f_0((MR_String) "_", Var_9);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Integer Distance_6 = ((MR_Integer) ((MR_hl_field(2, PredTransform_3, 0))));
        MR_String Var_13;

        Var_13 = mercury__string__int_to_string_1_f_0(Distance_6);
        Name_4 = mercury__string__f_43_43_2_f_0((MR_String) "distance_granularity_", Var_13);
      }
      break;
    case (MR_Integer) 3:
      Name_4 = (MR_String) "ssdebug";
      break;
  }
  return Name_4;
}

static void MR_CALL 
hlds__pred_name__dump_transformed_origin_5_p_0(
  MR_Word TVarSet_6,
  MR_Word VarNamePrint_7,
  MR_Word Origin_8,
  MR_Integer * TransformsPrinted_9,
  MR_Word * Strs_10)
{
  switch (MR_tag((MR_Word) Origin_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
      {
        MR_String OriginStr_14;

        *TransformsPrinted_9 = (MR_Integer) 0;
        OriginStr_14 = hlds__pred_name__dump_origin_4_f_0(TVarSet_6, VarNamePrint_7, (MR_String) "% Origin base:", Origin_8);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Strs_10 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (OriginStr_14));
          MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word PredTransform_15 = ((MR_Word) ((MR_hl_field(2, Origin_8, 0))));
        MR_Word SubOrigin_16 = ((MR_Word) ((MR_hl_field(2, Origin_8, 1))));
        MR_Word PredId_17 = ((MR_Word) ((MR_hl_field(2, Origin_8, 2))));
        MR_Integer SubTransformsPrinted_18;
        MR_Word SubStrs_19;
        MR_Integer PredIdInt_20;
        MR_String TransformStr_21;
        MR_String MainStr_22;
        MR_Word Var_36;
        MR_String Var_94;
        MR_String Var_96;
        MR_String Var_97;
        MR_String Var_104;
        MR_String Var_106;
        MR_String Var_107;
        MR_String Var_114;

        hlds__pred_name__dump_transformed_origin_5_p_0(TVarSet_6, VarNamePrint_7, SubOrigin_16, &SubTransformsPrinted_18, &SubStrs_19);
        *TransformsPrinted_9 = (MR_Integer) ((MR_Unsigned) SubTransformsPrinted_18 + (MR_Unsigned) 1);
        PredIdInt_20 = hlds__pred_proc_id__pred_id_to_int_1_f_0(PredId_17);
        TransformStr_21 = hlds__pred_name__pred_transform_to_dev_string_1_f_0(PredTransform_15);
        Var_94 = mercury__string__f_43_43_2_f_0(TransformStr_21, (MR_String) "\n");
        Var_96 = mercury__string__f_43_43_2_f_0((MR_String) ":\n%  ", Var_94);
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), PredIdInt_20, &Var_97);
        Var_104 = mercury__string__f_43_43_2_f_0(Var_97, Var_96);
        Var_106 = mercury__string__f_43_43_2_f_0((MR_String) " on pred ", Var_104);
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), *TransformsPrinted_9, &Var_107);
        Var_114 = mercury__string__f_43_43_2_f_0(Var_107, Var_106);
        MainStr_22 = mercury__string__f_43_43_2_f_0((MR_String) "% Transform ", Var_114);
        {
          Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_36, 0) = ((MR_Box) (MainStr_22));
          MR_hl_field(1, Var_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        *Strs_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SubStrs_19, Var_36);
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word ProcTransform_23 = ((MR_Word) ((MR_hl_field(3, Origin_8, 0))));
        MR_Integer ProcId_24 = ((MR_Integer) ((MR_hl_field(3, Origin_8, 3))));
        MR_Integer ProcIdInt_25;
        MR_Word Var_49;
        MR_Word SubOrigin_51 = ((MR_Word) ((MR_hl_field(3, Origin_8, 1))));
        MR_Word PredId_52 = ((MR_Word) ((MR_hl_field(3, Origin_8, 2))));
        MR_Integer SubTransformsPrinted_53;
        MR_Word SubStrs_54;
        MR_Integer PredIdInt_55;
        MR_String TransformStr_56;
        MR_String MainStr_57;
        MR_String Var_61;
        MR_String Var_63;
        MR_String Var_64;
        MR_String Var_71;
        MR_String Var_73;
        MR_String Var_74;
        MR_String Var_81;
        MR_String Var_83;
        MR_String Var_84;
        MR_String Var_91;

        hlds__pred_name__dump_transformed_origin_5_p_0(TVarSet_6, VarNamePrint_7, SubOrigin_51, &SubTransformsPrinted_53, &SubStrs_54);
        *TransformsPrinted_9 = (MR_Integer) ((MR_Unsigned) SubTransformsPrinted_53 + (MR_Unsigned) 1);
        PredIdInt_55 = hlds__pred_proc_id__pred_id_to_int_1_f_0(PredId_52);
        ProcIdInt_25 = hlds__pred_proc_id__proc_id_to_int_1_f_0(ProcId_24);
        TransformStr_56 = hlds__pred_name__proc_transform_to_dev_string_1_f_0(ProcTransform_23);
        Var_61 = mercury__string__f_43_43_2_f_0(TransformStr_56, (MR_String) "\n");
        Var_63 = mercury__string__f_43_43_2_f_0((MR_String) ":\n%  ", Var_61);
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), ProcIdInt_25, &Var_64);
        Var_71 = mercury__string__f_43_43_2_f_0(Var_64, Var_63);
        Var_73 = mercury__string__f_43_43_2_f_0((MR_String) ", proc ", Var_71);
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), PredIdInt_55, &Var_74);
        Var_81 = mercury__string__f_43_43_2_f_0(Var_74, Var_73);
        Var_83 = mercury__string__f_43_43_2_f_0((MR_String) " on pred ", Var_81);
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), *TransformsPrinted_9, &Var_84);
        Var_91 = mercury__string__f_43_43_2_f_0(Var_84, Var_83);
        MainStr_57 = mercury__string__f_43_43_2_f_0((MR_String) "% Transform ", Var_91);
        {
          Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_49, 0) = ((MR_Box) (MainStr_57));
          MR_hl_field(1, Var_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        *Strs_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SubStrs_54, Var_49);
      }
      break;
  }
}

MR_String MR_CALL 
hlds__pred_name__dump_origin_4_f_0(
  MR_Word TVarSet_6,
  MR_Word VarNamePrint_7,
  MR_String Prefix_8,
  MR_Word Origin_9)
{
  MR_String Str_10;

  switch (MR_tag((MR_Word) Origin_9)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word OriginUser_11 = ((MR_Word) ((MR_hl_field(0, Origin_9, 0))));

        switch (MR_tag((MR_Word) OriginUser_11)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word PredOrFunc_12 = ((MR_Unsigned) ((MR_hl_field(0, OriginUser_11, 0))) & (MR_Integer) 1);
              MR_Word SymName_13 = ((MR_Word) ((MR_hl_field(0, OriginUser_11, 1))));
              MR_Word UserArity_14 = ((MR_Word) ((MR_hl_field(0, OriginUser_11, 2))));
              MR_Integer UserArityInt_15 = (MR_Integer) (UserArity_14);
              MR_String Var_73;
              MR_String Var_76;
              MR_String Var_217;
              MR_String Var_224;
              MR_String Var_226;
              MR_String Var_227;
              MR_String Var_229;
              MR_String Var_230;
              MR_String Var_232;

              Var_73 = mdbcomp__prim_data__pred_or_func_to_full_str_1_f_0(PredOrFunc_12);
              Var_76 = mdbcomp__sym_name__sym_name_to_string_1_f_0(SymName_13);
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), UserArityInt_15, &Var_217);
              Var_224 = mercury__string__f_43_43_2_f_0(Var_217, (MR_String) "\n");
              Var_226 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_224);
              Var_227 = mercury__string__f_43_43_2_f_0(Var_76, Var_226);
              Var_229 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_227);
              Var_230 = mercury__string__f_43_43_2_f_0(Var_73, Var_229);
              Var_232 = mercury__string__f_43_43_2_f_0((MR_String) " user defined ", Var_230);
              Str_10 = mercury__string__f_43_43_2_f_0(Prefix_8, Var_232);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String FileName_16 = ((MR_String) ((MR_hl_field(1, OriginUser_11, 0))));
              MR_Integer LineNumber_17 = ((MR_Integer) ((MR_hl_field(1, OriginUser_11, 1))));
              MR_Integer SeqNum_18 = ((MR_Integer) ((MR_hl_field(1, OriginUser_11, 2))));
              MR_String Var_234;
              MR_String Var_241;
              MR_String Var_243;
              MR_String Var_244;
              MR_String Var_251;
              MR_String Var_253;
              MR_String Var_254;
              MR_String Var_256;

              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), SeqNum_18, &Var_234);
              Var_241 = mercury__string__f_43_43_2_f_0(Var_234, (MR_String) "\n");
              Var_243 = mercury__string__f_43_43_2_f_0((MR_String) ", seqnum ", Var_241);
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), LineNumber_17, &Var_244);
              Var_251 = mercury__string__f_43_43_2_f_0(Var_244, Var_243);
              Var_253 = mercury__string__f_43_43_2_f_0((MR_String) ", line ", Var_251);
              Var_254 = mercury__string__f_43_43_2_f_0(FileName_16, Var_253);
              Var_256 = mercury__string__f_43_43_2_f_0((MR_String) " lambda expression file ", Var_254);
              Str_10 = mercury__string__f_43_43_2_f_0(Prefix_8, Var_256);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ClassId_19 = ((MR_Word) ((MR_hl_field(2, OriginUser_11, 0))));
              MR_Word MethodId_20 = ((MR_Word) ((MR_hl_field(2, OriginUser_11, 1))));
              MR_Word ClassSymName_21 = ((MR_Word) ((MR_hl_field(0, ClassId_19, 0))));
              MR_Integer ClassArity_22 = ((MR_Integer) ((MR_hl_field(0, ClassId_19, 1))));
              MR_Word MethodPredOrFunc_23 = ((MR_Unsigned) ((MR_hl_field(0, MethodId_20, 0))) & (MR_Integer) 1);
              MR_Word MethodSymName_24 = ((MR_Word) ((MR_hl_field(0, MethodId_20, 1))));
              MR_Word MethodUserArity_25 = ((MR_Word) ((MR_hl_field(0, MethodId_20, 2))));
              MR_Integer MethodUserArityInt_26 = (MR_Integer) (MethodUserArity_25);
              MR_String Var_95;
              MR_String Var_98;
              MR_String Var_103;
              MR_String Var_288;
              MR_String Var_295;
              MR_String Var_297;
              MR_String Var_298;
              MR_String Var_300;
              MR_String Var_301;
              MR_String Var_308;
              MR_String Var_310;
              MR_String Var_311;
              MR_String Var_313;
              MR_String Var_314;
              MR_String Var_316;

              Var_95 = mdbcomp__prim_data__pred_or_func_to_full_str_1_f_0(MethodPredOrFunc_23);
              Var_98 = mdbcomp__sym_name__sym_name_to_string_1_f_0(MethodSymName_24);
              Var_103 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ClassSymName_21);
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), ClassArity_22, &Var_288);
              Var_295 = mercury__string__f_43_43_2_f_0(Var_288, (MR_String) "\n");
              Var_297 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_295);
              Var_298 = mercury__string__f_43_43_2_f_0(Var_103, Var_297);
              Var_300 = mercury__string__f_43_43_2_f_0((MR_String) " for ", Var_298);
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), MethodUserArityInt_26, &Var_301);
              Var_308 = mercury__string__f_43_43_2_f_0(Var_301, Var_300);
              Var_310 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_308);
              Var_311 = mercury__string__f_43_43_2_f_0(Var_98, Var_310);
              Var_313 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_311);
              Var_314 = mercury__string__f_43_43_2_f_0(Var_95, Var_313);
              Var_316 = mercury__string__f_43_43_2_f_0((MR_String) " class method ", Var_314);
              Str_10 = mercury__string__f_43_43_2_f_0(Prefix_8, Var_316);
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, OriginUser_11, 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word MethodConstraints_27 = ((MR_Word) ((MR_hl_field(3, OriginUser_11, 2))));
                  MR_Word InstanceTypes_28 = ((MR_Word) ((MR_hl_field(0, MethodConstraints_27, 1))));
                  MR_Word InstanceConstraints_29 = ((MR_Word) ((MR_hl_field(0, MethodConstraints_27, 2))));
                  MR_Word ClassMethodConstraints_30 = ((MR_Word) ((MR_hl_field(0, MethodConstraints_27, 3))));
                  MR_Word ClassConstraint_31;
                  MR_String Line1_32;
                  MR_String Line3_34;
                  MR_String Lines4_35;
                  MR_Word MethodUnivConstraints_36;
                  MR_Word MethodExistConstraints_37;
                  MR_String Lines5_38;
                  MR_String Lines6_39;
                  MR_String Var_112;
                  MR_String Var_115;
                  MR_String Var_120;
                  MR_String Var_127;
                  MR_String Var_128;
                  MR_String Var_129;
                  MR_String Var_130;
                  MR_Word ClassId_200 = ((MR_Word) ((MR_hl_field(0, MethodConstraints_27, 0))));
                  MR_Word MethodId_201 = ((MR_Word) ((MR_hl_field(3, OriginUser_11, 1))));
                  MR_Word ClassSymName_202 = ((MR_Word) ((MR_hl_field(0, ClassId_200, 0))));
                  MR_Integer ClassArity_203 = ((MR_Integer) ((MR_hl_field(0, ClassId_200, 1))));
                  MR_Word MethodPredOrFunc_204 = ((MR_Unsigned) ((MR_hl_field(0, MethodId_201, 0))) & (MR_Integer) 1);
                  MR_Word MethodSymName_205 = ((MR_Word) ((MR_hl_field(0, MethodId_201, 1))));
                  MR_Word MethodUserArity_206 = ((MR_Word) ((MR_hl_field(0, MethodId_201, 2))));
                  MR_Integer MethodUserArityInt_207 = (MR_Integer) (MethodUserArity_206);
                  MR_String Var_258;
                  MR_String Var_265;
                  MR_String Var_267;
                  MR_String Var_268;
                  MR_String Var_270;
                  MR_String Var_271;
                  MR_String Var_278;
                  MR_String Var_280;
                  MR_String Var_281;
                  MR_String Var_283;
                  MR_String Var_284;
                  MR_String Var_286;

                  {
                    ClassConstraint_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, ClassConstraint_31, 0) = ((MR_Box) (ClassSymName_202));
                    MR_hl_field(0, ClassConstraint_31, 1) = ((MR_Box) (InstanceTypes_28));
                  }
                  Var_112 = mdbcomp__prim_data__pred_or_func_to_str_1_f_0(MethodPredOrFunc_204);
                  Var_115 = mdbcomp__sym_name__sym_name_to_string_1_f_0(MethodSymName_205);
                  Var_120 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ClassSymName_202);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), ClassArity_203, &Var_258);
                  Var_265 = mercury__string__f_43_43_2_f_0(Var_258, (MR_String) "\n");
                  Var_267 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_265);
                  Var_268 = mercury__string__f_43_43_2_f_0(Var_120, Var_267);
                  Var_270 = mercury__string__f_43_43_2_f_0((MR_String) " for class ", Var_268);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), MethodUserArityInt_207, &Var_271);
                  Var_278 = mercury__string__f_43_43_2_f_0(Var_271, Var_270);
                  Var_280 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_278);
                  Var_281 = mercury__string__f_43_43_2_f_0(Var_115, Var_280);
                  Var_283 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_281);
                  Var_284 = mercury__string__f_43_43_2_f_0(Var_112, Var_283);
                  Var_286 = mercury__string__f_43_43_2_f_0((MR_String) " instance method ", Var_284);
                  Line1_32 = mercury__string__f_43_43_2_f_0(Prefix_8, Var_286);
                  Line3_34 = parse_tree__parse_tree_out_type__mercury_constraint_to_string_3_f_0(TVarSet_6, VarNamePrint_7, ClassConstraint_31);
                  Lines4_35 = hlds__pred_name__dump_origin_constraints_4_f_0((MR_String) "instance constraints", TVarSet_6, VarNamePrint_7, InstanceConstraints_29);
                  MethodUnivConstraints_36 = ((MR_Word) ((MR_hl_field(0, ClassMethodConstraints_30, 0))));
                  MethodExistConstraints_37 = ((MR_Word) ((MR_hl_field(0, ClassMethodConstraints_30, 1))));
                  Lines5_38 = hlds__pred_name__dump_origin_constraints_4_f_0((MR_String) "method universal constraints", TVarSet_6, VarNamePrint_7, MethodUnivConstraints_36);
                  Lines6_39 = hlds__pred_name__dump_origin_constraints_4_f_0((MR_String) "method existential constraints", TVarSet_6, VarNamePrint_7, MethodExistConstraints_37);
                  Var_130 = mercury__string__f_43_43_2_f_0(Lines5_38, Lines6_39);
                  Var_129 = mercury__string__f_43_43_2_f_0(Lines4_35, Var_130);
                  Var_128 = mercury__string__f_43_43_2_f_0(Line3_34, Var_129);
                  Var_127 = mercury__string__f_43_43_2_f_0((MR_String) "% instance type vector:\n", Var_128);
                  Str_10 = mercury__string__f_43_43_2_f_0(Line1_32, Var_127);
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word PromiseType_40 = ((MR_Unsigned) ((MR_hl_field(3, OriginUser_11, 1))) & (MR_Integer) 3);
                  MR_String PromiseTypeStr_41;
                  MR_String FileName_208 = ((MR_String) ((MR_hl_field(3, OriginUser_11, 2))));
                  MR_Integer LineNumber_209 = ((MR_Integer) ((MR_hl_field(3, OriginUser_11, 3))));
                  MR_String Var_317;
                  MR_String Var_325;
                  MR_String Var_326;
                  MR_String Var_328;
                  MR_String Var_329;
                  MR_String Var_331;

                  PromiseTypeStr_41 = parse_tree__parse_tree_out_misc__promise_to_string_1_f_0(PromiseType_40);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), LineNumber_209, &Var_317);
                  Var_325 = mercury__string__f_43_43_2_f_0((MR_String) ":", Var_317);
                  Var_326 = mercury__string__f_43_43_2_f_0(FileName_208, Var_325);
                  Var_328 = mercury__string__f_43_43_2_f_0((MR_String) " declaration at ", Var_326);
                  Var_329 = mercury__string__f_43_43_2_f_0(PromiseTypeStr_41, Var_328);
                  Var_331 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_329);
                  Str_10 = mercury__string__f_43_43_2_f_0(Prefix_8, Var_331);
                }
                break;
            }
            break;
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word OriginCompiler_42 = ((MR_Word) ((MR_hl_field(1, Origin_9, 0))));

        switch (MR_tag((MR_Word) OriginCompiler_42)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word SpecialPredId_43 = ((MR_Unsigned) ((MR_hl_field(0, OriginCompiler_42, 0))) & (MR_Integer) 3);
              MR_Word TypeCtor_44 = ((MR_Word) ((MR_hl_field(0, OriginCompiler_42, 1))));
              MR_String SpecialPredIdStr_45;
              MR_String Var_148;
              MR_String Var_333;
              MR_String Var_335;
              MR_String Var_336;
              MR_String Var_338;

              switch (SpecialPredId_43) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 2:
                  SpecialPredIdStr_45 = (MR_String) "compare";
                  break;
                case (MR_Integer) 1:
                  SpecialPredIdStr_45 = (MR_String) "index";
                  break;
                case (MR_Integer) 0:
                  SpecialPredIdStr_45 = (MR_String) "unify";
                  break;
              }
              Var_148 = parse_tree__parse_tree_out_sym_name__type_name_to_string_1_f_0(TypeCtor_44);
              Var_333 = mercury__string__f_43_43_2_f_0(Var_148, (MR_String) "\n");
              Var_335 = mercury__string__f_43_43_2_f_0((MR_String) " pred for ", Var_333);
              Var_336 = mercury__string__f_43_43_2_f_0(SpecialPredIdStr_45, Var_335);
              Var_338 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_336);
              Str_10 = mercury__string__f_43_43_2_f_0(Prefix_8, Var_338);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer LineNum_46 = ((MR_Integer) ((MR_hl_field(1, OriginCompiler_42, 0))));
              MR_Integer SeqNum_210 = ((MR_Integer) ((MR_hl_field(1, OriginCompiler_42, 1))));
              MR_String Var_392;
              MR_String Var_399;
              MR_String Var_401;
              MR_String Var_402;
              MR_String Var_409;
              MR_String Var_411;

              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), SeqNum_210, &Var_392);
              Var_399 = mercury__string__f_43_43_2_f_0(Var_392, (MR_String) "\n");
              Var_401 = mercury__string__f_43_43_2_f_0((MR_String) ", seqnum ", Var_399);
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), LineNum_46, &Var_402);
              Var_409 = mercury__string__f_43_43_2_f_0(Var_402, Var_401);
              Var_411 = mercury__string__f_43_43_2_f_0((MR_String) " deforestation: line ", Var_409);
              Str_10 = mercury__string__f_43_43_2_f_0(Prefix_8, Var_411);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word SolverAuxPredKind_47 = ((MR_Unsigned) ((MR_hl_field(2, OriginCompiler_42, 1))) & (MR_Integer) 3);
              MR_String TypeCtorStr_48;
              MR_String SolverAuxPredKindStr_49;
              MR_Word TypeCtor_211 = ((MR_Word) ((MR_hl_field(2, OriginCompiler_42, 0))));
              MR_String Var_347;
              MR_String Var_349;
              MR_String Var_350;
              MR_String Var_352;

              TypeCtorStr_48 = parse_tree__parse_tree_out_sym_name__type_ctor_to_string_1_f_0(TypeCtor_211);
              SolverAuxPredKindStr_49 = ((&hlds__pred_name_vector_common_6[29 + SolverAuxPredKind_47]))->hlds__pred_name__vector_common_type_6_0__vct_6_f_0;
              Var_347 = mercury__string__f_43_43_2_f_0(TypeCtorStr_48, (MR_String) "\n");
              Var_349 = mercury__string__f_43_43_2_f_0((MR_String) " for ", Var_347);
              Var_350 = mercury__string__f_43_43_2_f_0(SolverAuxPredKindStr_49, Var_349);
              Var_352 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_350);
              Str_10 = mercury__string__f_43_43_2_f_0(Prefix_8, Var_352);
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, OriginCompiler_42, 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word BasePredCallId_50 = ((MR_Word) ((MR_hl_field(3, OriginCompiler_42, 1))));
                  MR_Word TablingAuxPredKind_51 = ((MR_Unsigned) ((MR_hl_field(3, OriginCompiler_42, 2))) & (MR_Integer) 1);
                  MR_String BasePredStr_52;
                  MR_String TablingAuxPredKindStr_53;
                  MR_String Var_340;
                  MR_String Var_342;
                  MR_String Var_343;
                  MR_String Var_345;

                  BasePredStr_52 = parse_tree__parse_tree_out_sym_name__pf_sym_name_user_arity_to_string_1_f_0(BasePredCallId_50);
                  switch (TablingAuxPredKind_51) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      TablingAuxPredKindStr_53 = (MR_String) "table reset predicate";
                      break;
                    case (MR_Integer) 0:
                      TablingAuxPredKindStr_53 = (MR_String) "table statistics predicate";
                      break;
                  }
                  Var_340 = mercury__string__f_43_43_2_f_0(BasePredStr_52, (MR_String) "\n");
                  Var_342 = mercury__string__f_43_43_2_f_0((MR_String) " for ", Var_340);
                  Var_343 = mercury__string__f_43_43_2_f_0(TablingAuxPredKindStr_53, Var_342);
                  Var_345 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_343);
                  Str_10 = mercury__string__f_43_43_2_f_0(Prefix_8, Var_345);
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word MutableModuleName_54 = ((MR_Word) ((MR_hl_field(3, OriginCompiler_42, 1))));
                  MR_String MutableName_55 = ((MR_String) ((MR_hl_field(3, OriginCompiler_42, 2))));
                  MR_Word MutablePredKind_56 = ((MR_Unsigned) ((MR_hl_field(3, OriginCompiler_42, 3))) & (MR_Integer) 15);
                  MR_String MutableModuleNameStr_57;
                  MR_String MutablePredKindStr_58;
                  MR_String Var_354;
                  MR_String Var_356;
                  MR_String Var_357;
                  MR_String Var_359;
                  MR_String Var_360;
                  MR_String Var_362;

                  MutableModuleNameStr_57 = mdbcomp__sym_name__sym_name_to_string_1_f_0(MutableModuleName_54);
                  MutablePredKindStr_58 = hlds__pred_name__mutable_kind_to_user_dev_string_1_f_0(MutablePredKind_56);
                  Var_354 = mercury__string__f_43_43_2_f_0(MutableModuleNameStr_57, (MR_String) "\n");
                  Var_356 = mercury__string__f_43_43_2_f_0((MR_String) " in module ", Var_354);
                  Var_357 = mercury__string__f_43_43_2_f_0(MutableName_55, Var_356);
                  Var_359 = mercury__string__f_43_43_2_f_0((MR_String) " for mutable ", Var_357);
                  Var_360 = mercury__string__f_43_43_2_f_0(MutablePredKindStr_58, Var_359);
                  Var_362 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_360);
                  Str_10 = mercury__string__f_43_43_2_f_0(Prefix_8, Var_362);
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_String FileName_212 = ((MR_String) ((MR_hl_field(3, OriginCompiler_42, 1))));
                  MR_Integer LineNumber_213 = ((MR_Integer) ((MR_hl_field(3, OriginCompiler_42, 2))));
                  MR_String Var_364;
                  MR_String Var_371;
                  MR_String Var_373;
                  MR_String Var_374;
                  MR_String Var_376;

                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), LineNumber_213, &Var_364);
                  Var_371 = mercury__string__f_43_43_2_f_0(Var_364, (MR_String) "\n");
                  Var_373 = mercury__string__f_43_43_2_f_0((MR_String) ", line ", Var_371);
                  Var_374 = mercury__string__f_43_43_2_f_0(FileName_212, Var_373);
                  Var_376 = mercury__string__f_43_43_2_f_0((MR_String) " initialise predicate, file ", Var_374);
                  Str_10 = mercury__string__f_43_43_2_f_0(Prefix_8, Var_376);
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_String FileName_214 = ((MR_String) ((MR_hl_field(3, OriginCompiler_42, 1))));
                  MR_Integer LineNumber_215 = ((MR_Integer) ((MR_hl_field(3, OriginCompiler_42, 2))));
                  MR_String Var_378;
                  MR_String Var_385;
                  MR_String Var_387;
                  MR_String Var_388;
                  MR_String Var_390;

                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), LineNumber_215, &Var_378);
                  Var_385 = mercury__string__f_43_43_2_f_0(Var_378, (MR_String) "\n");
                  Var_387 = mercury__string__f_43_43_2_f_0((MR_String) ", line ", Var_385);
                  Var_388 = mercury__string__f_43_43_2_f_0(FileName_214, Var_387);
                  Var_390 = mercury__string__f_43_43_2_f_0((MR_String) " finalise predicate, file ", Var_388);
                  Str_10 = mercury__string__f_43_43_2_f_0(Prefix_8, Var_390);
                }
                break;
            }
            break;
        }
      }
      break;
    case (MR_Integer) 2:
    case (MR_Integer) 3:
      {
        MR_Word Strs_67;
        MR_Integer Var_66;

        hlds__pred_name__dump_transformed_origin_5_p_0(TVarSet_6, VarNamePrint_7, Origin_9, &Var_66, &Strs_67);
        mercury__string__append_list_2_p_0(Strs_67, &Str_10);
      }
      break;
  }
  return Str_10;
}

static MR_Box MR_CALL 
hlds__pred_name__dump_origin_constraints_4_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_Str_8;

  conv0_Str_8 = hlds__pred_name__dump_origin_constraint_3_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Str_8));
  return wrapper_arg_2;
}

static MR_String MR_CALL 
hlds__pred_name__dump_origin_constraints_4_f_0(
  MR_String Msg_6,
  MR_Word TVarSet_7,
  MR_Word VarNamePrint_8,
  MR_Word Constraints_9)
{
  MR_String Str_10;

  if ((Constraints_9 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_String Var_33;

    Var_33 = mercury__string__f_43_43_2_f_0(Msg_6, (MR_String) ": none\n");
    Str_10 = mercury__string__f_43_43_2_f_0((MR_String) "% ", Var_33);
  }
  else
  {
    MR_String HeaderLine_13;
    MR_Word ConstraintLines_14;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_String Var_30;

    Var_30 = mercury__string__f_43_43_2_f_0(Msg_6, (MR_String) ":\n");
    HeaderLine_13 = mercury__string__f_43_43_2_f_0((MR_String) "% ", Var_30);
    {
      Var_23 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_23, 0) = ((MR_Box) (&hlds__pred_name_scalar_common_7[0]));
      MR_hl_field(0, Var_23, 1) = ((MR_Box) (hlds__pred_name__dump_origin_constraints_4_f_0_1));
      MR_hl_field(0, Var_23, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_23, 3) = ((MR_Box) (TVarSet_7));
      MR_hl_field(0, Var_23, 4) = ((MR_Box) (VarNamePrint_8));
    }
    ConstraintLines_14 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_23, Constraints_9);
    {
      Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_24, 0) = ((MR_Box) (HeaderLine_13));
      MR_hl_field(1, Var_24, 1) = ((MR_Box) (ConstraintLines_14));
    }
    mercury__string__append_list_2_p_0(Var_24, &Str_10);
  }
  return Str_10;
}

MR_String MR_CALL 
hlds__pred_name__pred_origin_to_dev_string_1_f_0(
  MR_Word Origin_3)
{
  MR_bool succeeded;
  MR_String Str_4;

  switch (MR_tag((MR_Word) Origin_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word OriginUser_5 = ((MR_Word) ((MR_hl_field(0, Origin_3, 0))));

        Str_4 = hlds__pred_name__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_111_114_105_103_105_110_95_117_115_101_114_95_116_111_95_117_115_101_114_95_100_101_118_95_115_116_114_105_110_103_95_95_91_49_93_95_49_2_f_1(OriginUser_5);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word OriginCompiler_6 = ((MR_Word) ((MR_hl_field(1, Origin_3, 0))));

        switch (MR_tag((MR_Word) OriginCompiler_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word SpecialId_30 = ((MR_Unsigned) ((MR_hl_field(0, OriginCompiler_6, 0))) & (MR_Integer) 3);
              MR_Word TypeCtor_31 = ((MR_Word) ((MR_hl_field(0, OriginCompiler_6, 1))));
              MR_String PredDescr_32;
              MR_Word TypeSymName_33;
              MR_Integer TypeArity_34;

              hlds__special_pred__special_pred_description_2_p_0(SpecialId_30, &PredDescr_32);
              TypeSymName_33 = ((MR_Word) ((MR_hl_field(0, TypeCtor_31, 0))));
              TypeArity_34 = ((MR_Integer) ((MR_hl_field(0, TypeCtor_31, 1))));
              succeeded = (TypeArity_34 == (MR_Integer) 0);
              if (succeeded)
              {
                MR_String Var_52;
                MR_String Var_98;

                Var_52 = mdbcomp__sym_name__sym_name_to_string_1_f_0(TypeSymName_33);
                Var_98 = mercury__string__f_43_43_2_f_0((MR_String) " for type ", Var_52);
                Str_4 = mercury__string__f_43_43_2_f_0(PredDescr_32, Var_98);
              }
              else
              {
                MR_String Var_59;
                MR_String Var_99;
                MR_String Var_107;
                MR_String Var_108;
                MR_String Var_110;

                Var_59 = mdbcomp__sym_name__sym_name_to_string_1_f_0(TypeSymName_33);
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), TypeArity_34, &Var_99);
                Var_107 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_99);
                Var_108 = mercury__string__f_43_43_2_f_0(Var_59, Var_107);
                Var_110 = mercury__string__f_43_43_2_f_0((MR_String) " for type constructor ", Var_108);
                Str_4 = mercury__string__f_43_43_2_f_0(PredDescr_32, Var_110);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer LineNumber_40 = ((MR_Integer) ((MR_hl_field(1, OriginCompiler_6, 0))));
              MR_Integer SeqNum_41 = ((MR_Integer) ((MR_hl_field(1, OriginCompiler_6, 1))));
              MR_String Var_135;
              MR_String Var_143;
              MR_String Var_144;
              MR_String Var_151;

              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), LineNumber_40, &Var_135);
              Var_143 = mercury__string__f_43_43_2_f_0((MR_String) " near line ", Var_135);
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), SeqNum_41, &Var_144);
              Var_151 = mercury__string__f_43_43_2_f_0(Var_144, Var_143);
              Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "deforestation-created predicate #", Var_151);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word SolverAuxPredKind_38 = ((MR_Unsigned) ((MR_hl_field(2, OriginCompiler_6, 1))) & (MR_Integer) 3);
              MR_String TypeCtorStr_39;
              MR_Word TypeCtor_93 = ((MR_Word) ((MR_hl_field(2, OriginCompiler_6, 0))));

              TypeCtorStr_39 = parse_tree__parse_tree_out_sym_name__type_ctor_to_string_1_f_0(TypeCtor_93);
              switch (SolverAuxPredKind_38) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 3:
                  Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "from any representation predicate for ", TypeCtorStr_39);
                  break;
                case (MR_Integer) 2:
                  Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "from ground representation predicate for ", TypeCtorStr_39);
                  break;
                case (MR_Integer) 1:
                  Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "to any representation predicate for ", TypeCtorStr_39);
                  break;
                case (MR_Integer) 0:
                  Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "to ground representation predicate for ", TypeCtorStr_39);
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, OriginCompiler_6, 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word BasePredId_35 = ((MR_Word) ((MR_hl_field(3, OriginCompiler_6, 1))));
                  MR_Word TablingAuxPredKind_36 = ((MR_Unsigned) ((MR_hl_field(3, OriginCompiler_6, 2))) & (MR_Integer) 1);
                  MR_String BasePredIdStr_37;

                  BasePredIdStr_37 = parse_tree__parse_tree_out_sym_name__pf_sym_name_user_arity_to_unquoted_string_1_f_0(BasePredId_35);
                  switch (TablingAuxPredKind_36) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "table reset predicate for ", BasePredIdStr_37);
                      break;
                    case (MR_Integer) 0:
                      Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "table statistics predicate for ", BasePredIdStr_37);
                      break;
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_String Name_43 = ((MR_String) ((MR_hl_field(3, OriginCompiler_6, 2))));
                  MR_Word MutablePredKind_44 = ((MR_Unsigned) ((MR_hl_field(3, OriginCompiler_6, 3))) & (MR_Integer) 15);
                  MR_String MutablePredKindStr_45 = ((&hlds__pred_name_vector_common_6[17 + MutablePredKind_44]))->hlds__pred_name__vector_common_type_6_0__vct_6_f_0;
                  MR_String Var_112;

                  Var_112 = mercury__string__f_43_43_2_f_0((MR_String) " for mutable ", Name_43);
                  Str_4 = mercury__string__f_43_43_2_f_0(MutablePredKindStr_45, Var_112);
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_String FileName_46 = ((MR_String) ((MR_hl_field(3, OriginCompiler_6, 1))));
                  MR_Integer LineNumber_94 = ((MR_Integer) ((MR_hl_field(3, OriginCompiler_6, 2))));
                  MR_String Var_113;
                  MR_String Var_121;
                  MR_String Var_122;

                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), LineNumber_94, &Var_113);
                  Var_121 = mercury__string__f_43_43_2_f_0((MR_String) ":", Var_113);
                  Var_122 = mercury__string__f_43_43_2_f_0(FileName_46, Var_121);
                  Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "initialise declaration at ", Var_122);
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Integer LineNumber_95 = ((MR_Integer) ((MR_hl_field(3, OriginCompiler_6, 2))));
                  MR_String FileName_96 = ((MR_String) ((MR_hl_field(3, OriginCompiler_6, 1))));
                  MR_String Var_124;
                  MR_String Var_132;
                  MR_String Var_133;

                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), LineNumber_95, &Var_124);
                  Var_132 = mercury__string__f_43_43_2_f_0((MR_String) ":", Var_124);
                  Var_133 = mercury__string__f_43_43_2_f_0(FileName_96, Var_132);
                  Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "finalise declaration at ", Var_133);
                }
                break;
            }
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word PredTransform_7 = ((MR_Word) ((MR_hl_field(2, Origin_3, 0))));
        MR_Word SubOrigin_8 = ((MR_Word) ((MR_hl_field(2, Origin_3, 1))));
        MR_String TransformStr_10;
        MR_String SubOriginStr_14;
        MR_String Var_24;

        TransformStr_10 = hlds__pred_name__pred_transform_to_dev_string_1_f_0(PredTransform_7);
        SubOriginStr_14 = hlds__pred_name__pred_origin_to_dev_string_1_f_0(SubOrigin_8);
        Var_24 = mercury__string__f_43_43_2_f_0((MR_String) " transformed by ", TransformStr_10);
        Str_4 = mercury__string__f_43_43_2_f_0(SubOriginStr_14, Var_24);
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word ProcTransform_11 = ((MR_Word) ((MR_hl_field(3, Origin_3, 0))));
        MR_Word SubOrigin_25 = ((MR_Word) ((MR_hl_field(3, Origin_3, 1))));
        MR_String TransformStr_26;
        MR_String SubOriginStr_27;
        MR_String Var_29;

        TransformStr_26 = hlds__pred_name__proc_transform_to_dev_string_1_f_0(ProcTransform_11);
        SubOriginStr_27 = hlds__pred_name__pred_origin_to_dev_string_1_f_0(SubOrigin_25);
        Var_29 = mercury__string__f_43_43_2_f_0((MR_String) " transformed by ", TransformStr_26);
        Str_4 = mercury__string__f_43_43_2_f_0(SubOriginStr_27, Var_29);
      }
      break;
  }
  return Str_4;
}

static MR_String MR_CALL 
hlds__pred_name__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_111_114_105_103_105_110_95_117_115_101_114_95_116_111_95_117_115_101_114_95_100_101_118_95_115_116_114_105_110_103_95_95_91_49_93_95_49_2_f_1(
  MR_Word OriginUser_5)
{
  MR_String Str_6;

  switch (MR_tag((MR_Word) OriginUser_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word PredOrFunc_7 = ((MR_Unsigned) ((MR_hl_field(0, OriginUser_5, 0))) & (MR_Integer) 1);
        MR_Word SymName_8 = ((MR_Word) ((MR_hl_field(0, OriginUser_5, 1))));
        MR_Word UserArity_9 = ((MR_Word) ((MR_hl_field(0, OriginUser_5, 2))));
        MR_Integer UserArityInt_10 = (MR_Integer) (UserArity_9);

        Str_6 = parse_tree__parse_tree_out_sym_name__pf_sym_name_user_arity_to_unquoted_string_3_f_0(PredOrFunc_7, SymName_8, UserArityInt_10);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String FileName_11 = ((MR_String) ((MR_hl_field(1, OriginUser_5, 0))));
        MR_Integer LineNumber_12 = ((MR_Integer) ((MR_hl_field(1, OriginUser_5, 1))));
        MR_Integer SeqNum_13 = ((MR_Integer) ((MR_hl_field(1, OriginUser_5, 2))));
        MR_String Var_78;
        MR_String Var_86;
        MR_String Var_87;
        MR_String Var_89;
        MR_String Var_90;
        MR_String Var_97;

        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), LineNumber_12, &Var_78);
        Var_86 = mercury__string__f_43_43_2_f_0((MR_String) ":", Var_78);
        Var_87 = mercury__string__f_43_43_2_f_0(FileName_11, Var_86);
        Var_89 = mercury__string__f_43_43_2_f_0((MR_String) " at ", Var_87);
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), SeqNum_13, &Var_90);
        Var_97 = mercury__string__f_43_43_2_f_0(Var_90, Var_89);
        Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "lambda expression #", Var_97);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ClassId_14 = ((MR_Word) ((MR_hl_field(2, OriginUser_5, 0))));
        MR_Word MethodId_15 = ((MR_Word) ((MR_hl_field(2, OriginUser_5, 1))));
        MR_String MethodIdStr_16;
        MR_Word ClassSymName_17;
        MR_Integer ClassArity_18;
        MR_String ClassNameStr_19;
        MR_String Var_108;
        MR_String Var_116;
        MR_String Var_117;
        MR_String Var_119;
        MR_String Var_120;

        MethodIdStr_16 = parse_tree__parse_tree_out_sym_name__pf_sym_name_user_arity_to_unquoted_string_1_f_0(MethodId_15);
        ClassSymName_17 = ((MR_Word) ((MR_hl_field(0, ClassId_14, 0))));
        ClassArity_18 = ((MR_Integer) ((MR_hl_field(0, ClassId_14, 1))));
        ClassNameStr_19 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ClassSymName_17);
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), ClassArity_18, &Var_108);
        Var_116 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_108);
        Var_117 = mercury__string__f_43_43_2_f_0(ClassNameStr_19, Var_116);
        Var_119 = mercury__string__f_43_43_2_f_0((MR_String) " for ", Var_117);
        Var_120 = mercury__string__f_43_43_2_f_0(MethodIdStr_16, Var_119);
        Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "class method ", Var_120);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, OriginUser_5, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word MethodConstraints_20 = ((MR_Word) ((MR_hl_field(3, OriginUser_5, 2))));
            MR_Word InstanceTypes_21;
            MR_Word ClassName_24;
            MR_String ClassStr_26;
            MR_String TypeStrs_27;
            MR_Word Var_46;
            MR_Word ClassId_72;
            MR_Word MethodId_73 = ((MR_Word) ((MR_hl_field(3, OriginUser_5, 1))));
            MR_String MethodIdStr_74;
            MR_String Var_100;
            MR_String Var_102;
            MR_String Var_103;
            MR_String Var_105;
            MR_String Var_106;

            MethodIdStr_74 = parse_tree__parse_tree_out_sym_name__pf_sym_name_user_arity_to_unquoted_string_1_f_0(MethodId_73);
            ClassId_72 = ((MR_Word) ((MR_hl_field(0, MethodConstraints_20, 0))));
            InstanceTypes_21 = ((MR_Word) ((MR_hl_field(0, MethodConstraints_20, 1))));
            ClassName_24 = ((MR_Word) ((MR_hl_field(0, ClassId_72, 0))));
            ClassStr_26 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ClassName_24);
            Var_46 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0));
            TypeStrs_27 = parse_tree__parse_tree_out_type__mercury_types_to_string_3_f_0(Var_46, (MR_Integer) 0, InstanceTypes_21);
            Var_100 = mercury__string__f_43_43_2_f_0(TypeStrs_27, (MR_String) ")");
            Var_102 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_100);
            Var_103 = mercury__string__f_43_43_2_f_0(ClassStr_26, Var_102);
            Var_105 = mercury__string__f_43_43_2_f_0((MR_String) " for ", Var_103);
            Var_106 = mercury__string__f_43_43_2_f_0(MethodIdStr_74, Var_105);
            Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "instance method ", Var_106);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word PromiseType_28 = ((MR_Unsigned) ((MR_hl_field(3, OriginUser_5, 1))) & (MR_Integer) 3);
            MR_String PromiseTypeStr_29;
            MR_String FileName_75 = ((MR_String) ((MR_hl_field(3, OriginUser_5, 2))));
            MR_Integer LineNumber_76 = ((MR_Integer) ((MR_hl_field(3, OriginUser_5, 3))));
            MR_String Var_122;
            MR_String Var_130;
            MR_String Var_131;
            MR_String Var_133;

            PromiseTypeStr_29 = parse_tree__parse_tree_out_misc__promise_to_string_1_f_0(PromiseType_28);
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), LineNumber_76, &Var_122);
            Var_130 = mercury__string__f_43_43_2_f_0((MR_String) ":", Var_122);
            Var_131 = mercury__string__f_43_43_2_f_0(FileName_75, Var_130);
            Var_133 = mercury__string__f_43_43_2_f_0((MR_String) " declaration at ", Var_131);
            Str_6 = mercury__string__f_43_43_2_f_0(PromiseTypeStr_29, Var_133);
          }
          break;
      }
      break;
  }
  return Str_6;
}

static MR_Box MR_CALL 
hlds__pred_name__proc_transform_to_dev_string_1_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv2_HeadVar__2_2;

  conv2_HeadVar__2_2 = mercury__string__int_to_string_1_f_0(((MR_Integer) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__pred_name__proc_transform_to_dev_string_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = mercury__string__int_to_string_1_f_0(((MR_Integer) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__pred_name__proc_transform_to_dev_string_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = mercury__string__int_to_string_1_f_0(((MR_Integer) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_String MR_CALL 
hlds__pred_name__proc_transform_to_dev_string_1_f_0(
  MR_Word ProcTransform_3)
{
  MR_bool succeeded;
  MR_String Str_4;

  switch (MR_tag((MR_Word) ProcTransform_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(ProcTransform_3)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          Str_4 = (MR_String) "parallel loop control transform";
          break;
        case (MR_Integer) 1:
          Str_4 = (MR_String) "software transactional memory transform";
          break;
        case (MR_Integer) 2:
          Str_4 = (MR_String) "I/O tabling";
          break;
        case (MR_Integer) 3:
          Str_4 = (MR_String) "direct arg in out transform";
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word CallerPredId_5 = ((MR_Word) ((MR_hl_field(1, ProcTransform_3, 0))));
        MR_Integer CallerProcId_6 = ((MR_Integer) ((MR_hl_field(1, ProcTransform_3, 1))));
        MR_Integer CallerPredIdInt_7;
        MR_Integer CallerProcIdInt_8;
        MR_String Var_109;
        MR_String Var_117;
        MR_String Var_118;
        MR_String Var_125;

        CallerPredIdInt_7 = hlds__pred_proc_id__pred_id_to_int_1_f_0(CallerPredId_5);
        CallerProcIdInt_8 = hlds__pred_proc_id__proc_id_to_int_1_f_0(CallerProcId_6);
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), CallerProcIdInt_8, &Var_109);
        Var_117 = mercury__string__f_43_43_2_f_0((MR_String) ", proc ", Var_109);
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), CallerPredIdInt_7, &Var_118);
        Var_125 = mercury__string__f_43_43_2_f_0(Var_118, Var_117);
        Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "user-direct type specialization for pred ", Var_125);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Integer SeqNum_9 = ((MR_Integer) ((MR_hl_field(2, ProcTransform_3, 0))));
        MR_String Var_199;

        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), SeqNum_9, &Var_199);
        Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "higher order specialization #", Var_199);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, ProcTransform_3, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_46;
            MR_Word Posns_85 = ((MR_Word) ((MR_hl_field(3, ProcTransform_3, 2))));
            MR_String PosnsStr_86;
            MR_String Plural_87;
            MR_String Var_208;
            MR_String Var_209;
            MR_Word Var_48;

            Var_46 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__pred_name_scalar_common_1[5]), Posns_85);
            PosnsStr_86 = mercury__string__join_list_2_f_0((MR_String) ", ", Var_46);
            succeeded = (Posns_85 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_48 = ((MR_Word) ((MR_hl_field(1, Posns_85, 1))));
              succeeded = (Var_48 != (MR_Word) ((MR_Unsigned) 0U));
            }
            if (succeeded)
              Plural_87 = (MR_String) "s";
            else
              Plural_87 = (MR_String) "";
            Var_208 = mercury__string__f_43_43_2_f_0((MR_String) " ", PosnsStr_86);
            Var_209 = mercury__string__f_43_43_2_f_0(Plural_87, Var_208);
            Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "accumulator introduction on arg", Var_209);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Posns_10 = ((MR_Word) ((MR_hl_field(3, ProcTransform_3, 1))));
            MR_String PosnsStr_11;
            MR_String Plural_15;
            MR_Word Var_36;
            MR_String Var_128;
            MR_String Var_129;
            MR_Word Var_38;

            Var_36 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__pred_name_scalar_common_1[7]), Posns_10);
            PosnsStr_11 = mercury__string__join_list_2_f_0((MR_String) ", ", Var_36);
            succeeded = (Posns_10 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_38 = ((MR_Word) ((MR_hl_field(1, Posns_10, 1))));
              succeeded = (Var_38 != (MR_Word) ((MR_Unsigned) 0U));
            }
            if (succeeded)
              Plural_15 = (MR_String) "s";
            else
              Plural_15 = (MR_String) "";
            Var_128 = mercury__string__f_43_43_2_f_0((MR_String) " ", PosnsStr_11);
            Var_129 = mercury__string__f_43_43_2_f_0(Plural_15, Var_128);
            Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "unused arg elimination for arg", Var_129);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer LineNum_20 = ((MR_Integer) ((MR_hl_field(3, ProcTransform_3, 1))));
            MR_Integer SeqNum_88 = ((MR_Integer) ((MR_hl_field(3, ProcTransform_3, 2))));
            MR_String Var_167;
            MR_String Var_175;
            MR_String Var_176;
            MR_String Var_183;

            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), SeqNum_88, &Var_167);
            Var_175 = mercury__string__f_43_43_2_f_0((MR_String) ", #", Var_167);
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), LineNum_20, &Var_176);
            Var_183 = mercury__string__f_43_43_2_f_0(Var_176, Var_175);
            Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "loop invariant hoisting on line ", Var_183);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Integer SeqNum_89 = ((MR_Integer) ((MR_hl_field(3, ProcTransform_3, 2))));
            MR_Integer LineNum_90 = ((MR_Integer) ((MR_hl_field(3, ProcTransform_3, 1))));
            MR_String Var_149;
            MR_String Var_157;
            MR_String Var_158;
            MR_String Var_165;

            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), SeqNum_89, &Var_149);
            Var_157 = mercury__string__f_43_43_2_f_0((MR_String) ", #", Var_149);
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), LineNum_90, &Var_158);
            Var_165 = mercury__string__f_43_43_2_f_0(Var_158, Var_157);
            Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "tupling on line ", Var_165);
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Integer SeqNum_91 = ((MR_Integer) ((MR_hl_field(3, ProcTransform_3, 2))));
            MR_Integer LineNum_92 = ((MR_Integer) ((MR_hl_field(3, ProcTransform_3, 1))));
            MR_String Var_131;
            MR_String Var_139;
            MR_String Var_140;
            MR_String Var_147;

            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), SeqNum_91, &Var_131);
            Var_139 = mercury__string__f_43_43_2_f_0((MR_String) ", #", Var_131);
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), LineNum_92, &Var_140);
            Var_147 = mercury__string__f_43_43_2_f_0(Var_140, Var_139);
            Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "untupling on line ", Var_147);
          }
          break;
        case (MR_Integer) 5:
          Str_4 = (MR_String) "dependent parallel conjunction transform";
          break;
        case (MR_Integer) 6:
          {
            MR_Word Var_74;
            MR_Integer SeqNum_93 = ((MR_Integer) ((MR_hl_field(3, ProcTransform_3, 1))));
            MR_Word Posns_94 = ((MR_Word) ((MR_hl_field(3, ProcTransform_3, 2))));
            MR_String PosnsStr_95;
            MR_String Plural_96;
            MR_String Var_185;
            MR_String Var_193;
            MR_String Var_194;
            MR_String Var_196;
            MR_String Var_197;
            MR_Word Var_76;

            Var_74 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__pred_name_scalar_common_1[6]), Posns_94);
            PosnsStr_95 = mercury__string__join_list_2_f_0((MR_String) ", ", Var_74);
            succeeded = (Posns_94 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_76 = ((MR_Word) ((MR_hl_field(1, Posns_94, 1))));
              succeeded = (Var_76 != (MR_Word) ((MR_Unsigned) 0U));
            }
            if (succeeded)
              Plural_96 = (MR_String) "s";
            else
              Plural_96 = (MR_String) "";
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), SeqNum_93, &Var_185);
            Var_193 = mercury__string__f_43_43_2_f_0((MR_String) ", #", Var_185);
            Var_194 = mercury__string__f_43_43_2_f_0(PosnsStr_95, Var_193);
            Var_196 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_194);
            Var_197 = mercury__string__f_43_43_2_f_0(Plural_96, Var_196);
            Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "last-call-modulo-construct on arg", Var_197);
          }
          break;
      }
      break;
  }
  return Str_4;
}

static MR_Box MR_CALL 
hlds__pred_name__pred_transform_to_dev_string_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_Str_5;

  conv0_Str_5 = hlds__pred_name__dump_subst_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Str_5));
  return wrapper_arg_2;
}

static MR_String MR_CALL 
hlds__pred_name__pred_transform_to_dev_string_1_f_0(
  MR_Word PredTransform_3)
{
  MR_String Str_4;

  switch (MR_tag((MR_Word) PredTransform_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(PredTransform_3)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          Str_4 = (MR_String) "generator for own-stack minimal model tabling";
          break;
        case (MR_Integer) 1:
          Str_4 = (MR_String) "structure reuse";
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Substs_5 = ((MR_Word) ((MR_hl_field(1, PredTransform_3, 0))));
        MR_Word SubstStrs_6;
        MR_String SubstsStr_7;
        MR_Word Var_11;

        Var_11 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&hlds__pred_name_scalar_common_1[0]), Substs_5);
        SubstStrs_6 = mercury__list__map_2_f_0((MR_Word) (&hlds__pred_name_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__pred_name_scalar_common_1[4]), Var_11);
        SubstsStr_7 = mercury__string__join_list_2_f_0((MR_String) ", ", SubstStrs_6);
        Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "type specialization ", SubstsStr_7);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Integer Distance_8 = ((MR_Integer) ((MR_hl_field(2, PredTransform_3, 0))));
        MR_String Var_34;

        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), Distance_8, &Var_34);
        Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "distance granularity with distance ", Var_34);
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word PredOrFunc_9 = ((MR_Unsigned) ((MR_hl_field(3, PredTransform_3, 0))) & (MR_Integer) 1);
        MR_String Var_24;
        MR_String Var_31;

        Var_24 = mdbcomp__prim_data__pred_or_func_to_full_str_1_f_0(PredOrFunc_9);
        Var_31 = mercury__string__f_43_43_2_f_0(Var_24, (MR_String) " for source-to-source debugging");
        Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "proxy for stdlib ", Var_31);
      }
      break;
  }
  return Str_4;
}

MR_String MR_CALL 
hlds__pred_name__pred_origin_to_user_string_1_f_0(
  MR_Word Origin_3)
{
  MR_String Str_4;

  switch (MR_tag((MR_Word) Origin_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word OriginUser_5 = ((MR_Word) ((MR_hl_field(0, Origin_3, 0))));

        Str_4 = hlds__pred_name__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_111_114_105_103_105_110_95_117_115_101_114_95_116_111_95_117_115_101_114_95_100_101_118_95_115_116_114_105_110_103_95_95_91_49_93_95_48_2_f_0(OriginUser_5);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word OriginCompiler_6 = ((MR_Word) ((MR_hl_field(1, Origin_3, 0))));

        Str_4 = hlds__pred_name__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_111_114_105_103_105_110_95_99_111_109_112_105_108_101_114_95_116_111_95_117_115_101_114_95_100_101_118_95_115_116_114_105_110_103_95_95_91_49_93_95_48_2_f_0(OriginCompiler_6);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word SubOrigin_8 = ((MR_Word) ((MR_hl_field(2, Origin_3, 1))));
        MR_Word BaseOrigin_13;
        MR_String BaseOriginStr_14;

        BaseOrigin_13 = hlds__pred_name__get_base_origin_1_f_0(SubOrigin_8);
        BaseOriginStr_14 = hlds__pred_name__pred_origin_to_user_string_1_f_0(BaseOrigin_13);
        Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "a compiler-transformed version of ", BaseOriginStr_14);
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word SubOrigin_22 = ((MR_Word) ((MR_hl_field(3, Origin_3, 1))));
        MR_Word BaseOrigin_23;
        MR_String BaseOriginStr_24;

        BaseOrigin_23 = hlds__pred_name__get_base_origin_1_f_0(SubOrigin_22);
        BaseOriginStr_24 = hlds__pred_name__pred_origin_to_user_string_1_f_0(BaseOrigin_23);
        Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "a compiler-transformed version of ", BaseOriginStr_24);
      }
      break;
  }
  return Str_4;
}

static MR_String MR_CALL 
hlds__pred_name__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_111_114_105_103_105_110_95_99_111_109_112_105_108_101_114_95_116_111_95_117_115_101_114_95_100_101_118_95_115_116_114_105_110_103_95_95_91_49_93_95_48_2_f_0(
  MR_Word OriginCompiler_5)
{
  MR_bool succeeded;
  MR_String Str_6;

  switch (MR_tag((MR_Word) OriginCompiler_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word SpecialId_7 = ((MR_Unsigned) ((MR_hl_field(0, OriginCompiler_5, 0))) & (MR_Integer) 3);
        MR_Word TypeCtor_8 = ((MR_Word) ((MR_hl_field(0, OriginCompiler_5, 1))));
        MR_String PredDescr_9;
        MR_Word TypeSymName_10;
        MR_Integer TypeArity_11;

        hlds__special_pred__special_pred_description_2_p_0(SpecialId_7, &PredDescr_9);
        TypeSymName_10 = ((MR_Word) ((MR_hl_field(0, TypeCtor_8, 0))));
        TypeArity_11 = ((MR_Integer) ((MR_hl_field(0, TypeCtor_8, 1))));
        succeeded = (TypeArity_11 == (MR_Integer) 0);
        if (succeeded)
        {
          MR_String Var_29;
          MR_String Var_75;

          Var_29 = mdbcomp__sym_name__sym_name_to_string_1_f_0(TypeSymName_10);
          Var_75 = mercury__string__f_43_43_2_f_0((MR_String) " for type ", Var_29);
          Str_6 = mercury__string__f_43_43_2_f_0(PredDescr_9, Var_75);
        }
        else
        {
          MR_String Var_36;
          MR_String Var_76;
          MR_String Var_84;
          MR_String Var_85;
          MR_String Var_87;

          Var_36 = mdbcomp__sym_name__sym_name_to_string_1_f_0(TypeSymName_10);
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), TypeArity_11, &Var_76);
          Var_84 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_76);
          Var_85 = mercury__string__f_43_43_2_f_0(Var_36, Var_84);
          Var_87 = mercury__string__f_43_43_2_f_0((MR_String) " for type constructor ", Var_85);
          Str_6 = mercury__string__f_43_43_2_f_0(PredDescr_9, Var_87);
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Integer LineNumber_17 = ((MR_Integer) ((MR_hl_field(1, OriginCompiler_5, 0))));
        MR_Integer SeqNum_18 = ((MR_Integer) ((MR_hl_field(1, OriginCompiler_5, 1))));
        MR_String Var_112;
        MR_String Var_120;
        MR_String Var_121;
        MR_String Var_128;

        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), LineNumber_17, &Var_112);
        Var_120 = mercury__string__f_43_43_2_f_0((MR_String) " near line ", Var_112);
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), SeqNum_18, &Var_121);
        Var_128 = mercury__string__f_43_43_2_f_0(Var_121, Var_120);
        Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "deforestation-created predicate #", Var_128);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word SolverAuxPredKind_15 = ((MR_Unsigned) ((MR_hl_field(2, OriginCompiler_5, 1))) & (MR_Integer) 3);
        MR_String TypeCtorStr_16;
        MR_Word TypeCtor_70 = ((MR_Word) ((MR_hl_field(2, OriginCompiler_5, 0))));

        TypeCtorStr_16 = parse_tree__parse_tree_out_sym_name__type_ctor_to_string_1_f_0(TypeCtor_70);
        switch (SolverAuxPredKind_15) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 3:
            Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "from any representation predicate for ", TypeCtorStr_16);
            break;
          case (MR_Integer) 2:
            Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "from ground representation predicate for ", TypeCtorStr_16);
            break;
          case (MR_Integer) 1:
            Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "to any representation predicate for ", TypeCtorStr_16);
            break;
          case (MR_Integer) 0:
            Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "to ground representation predicate for ", TypeCtorStr_16);
            break;
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, OriginCompiler_5, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word BasePredId_12 = ((MR_Word) ((MR_hl_field(3, OriginCompiler_5, 1))));
            MR_Word TablingAuxPredKind_13 = ((MR_Unsigned) ((MR_hl_field(3, OriginCompiler_5, 2))) & (MR_Integer) 1);
            MR_String BasePredIdStr_14;

            BasePredIdStr_14 = parse_tree__parse_tree_out_sym_name__pf_sym_name_user_arity_to_string_1_f_0(BasePredId_12);
            switch (TablingAuxPredKind_13) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "table reset predicate for ", BasePredIdStr_14);
                break;
              case (MR_Integer) 0:
                Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "table statistics predicate for ", BasePredIdStr_14);
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String Name_20 = ((MR_String) ((MR_hl_field(3, OriginCompiler_5, 2))));
            MR_Word MutablePredKind_21 = ((MR_Unsigned) ((MR_hl_field(3, OriginCompiler_5, 3))) & (MR_Integer) 15);
            MR_String MutablePredKindStr_22;
            MR_String Var_89;

            MutablePredKindStr_22 = hlds__pred_name__mutable_kind_to_user_dev_string_1_f_0(MutablePredKind_21);
            Var_89 = mercury__string__f_43_43_2_f_0((MR_String) " for mutable ", Name_20);
            Str_6 = mercury__string__f_43_43_2_f_0(MutablePredKindStr_22, Var_89);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String FileName_23 = ((MR_String) ((MR_hl_field(3, OriginCompiler_5, 1))));
            MR_Integer LineNumber_71 = ((MR_Integer) ((MR_hl_field(3, OriginCompiler_5, 2))));
            MR_String Var_90;
            MR_String Var_98;
            MR_String Var_99;

            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), LineNumber_71, &Var_90);
            Var_98 = mercury__string__f_43_43_2_f_0((MR_String) ":", Var_90);
            Var_99 = mercury__string__f_43_43_2_f_0(FileName_23, Var_98);
            Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "initialise declaration at ", Var_99);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Integer LineNumber_72 = ((MR_Integer) ((MR_hl_field(3, OriginCompiler_5, 2))));
            MR_String FileName_73 = ((MR_String) ((MR_hl_field(3, OriginCompiler_5, 1))));
            MR_String Var_101;
            MR_String Var_109;
            MR_String Var_110;

            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), LineNumber_72, &Var_101);
            Var_109 = mercury__string__f_43_43_2_f_0((MR_String) ":", Var_101);
            Var_110 = mercury__string__f_43_43_2_f_0(FileName_73, Var_109);
            Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "finalise declaration at ", Var_110);
          }
          break;
      }
      break;
  }
  return Str_6;
}

static MR_String MR_CALL 
hlds__pred_name__mutable_kind_to_user_dev_string_1_f_0(
  MR_Word MutablePredKind_3)
{
  MR_String MutablePredKindStr_4 = ((&hlds__pred_name_vector_common_6[5 + MutablePredKind_3]))->hlds__pred_name__vector_common_type_6_0__vct_6_f_0;

  return MutablePredKindStr_4;
}

static MR_String MR_CALL 
hlds__pred_name__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_111_114_105_103_105_110_95_117_115_101_114_95_116_111_95_117_115_101_114_95_100_101_118_95_115_116_114_105_110_103_95_95_91_49_93_95_48_2_f_0(
  MR_Word OriginUser_5)
{
  MR_String Str_6;

  switch (MR_tag((MR_Word) OriginUser_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word PredOrFunc_7 = ((MR_Unsigned) ((MR_hl_field(0, OriginUser_5, 0))) & (MR_Integer) 1);
        MR_Word SymName_8 = ((MR_Word) ((MR_hl_field(0, OriginUser_5, 1))));
        MR_Word UserArity_9 = ((MR_Word) ((MR_hl_field(0, OriginUser_5, 2))));
        MR_Integer UserArityInt_10 = (MR_Integer) (UserArity_9);

        Str_6 = parse_tree__parse_tree_out_sym_name__pf_sym_name_user_arity_to_string_3_f_0(PredOrFunc_7, SymName_8, UserArityInt_10);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String FileName_11 = ((MR_String) ((MR_hl_field(1, OriginUser_5, 0))));
        MR_Integer LineNumber_12 = ((MR_Integer) ((MR_hl_field(1, OriginUser_5, 1))));
        MR_Integer SeqNum_13 = ((MR_Integer) ((MR_hl_field(1, OriginUser_5, 2))));
        MR_String Var_78;
        MR_String Var_86;
        MR_String Var_87;
        MR_String Var_89;
        MR_String Var_90;
        MR_String Var_97;

        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), LineNumber_12, &Var_78);
        Var_86 = mercury__string__f_43_43_2_f_0((MR_String) ":", Var_78);
        Var_87 = mercury__string__f_43_43_2_f_0(FileName_11, Var_86);
        Var_89 = mercury__string__f_43_43_2_f_0((MR_String) " at ", Var_87);
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), SeqNum_13, &Var_90);
        Var_97 = mercury__string__f_43_43_2_f_0(Var_90, Var_89);
        Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "lambda expression #", Var_97);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ClassId_14 = ((MR_Word) ((MR_hl_field(2, OriginUser_5, 0))));
        MR_Word MethodId_15 = ((MR_Word) ((MR_hl_field(2, OriginUser_5, 1))));
        MR_String MethodIdStr_16;
        MR_Word ClassSymName_17;
        MR_Integer ClassArity_18;
        MR_String ClassNameStr_19;
        MR_String Var_108;
        MR_String Var_116;
        MR_String Var_117;
        MR_String Var_119;
        MR_String Var_120;

        MethodIdStr_16 = parse_tree__parse_tree_out_sym_name__pf_sym_name_user_arity_to_string_1_f_0(MethodId_15);
        ClassSymName_17 = ((MR_Word) ((MR_hl_field(0, ClassId_14, 0))));
        ClassArity_18 = ((MR_Integer) ((MR_hl_field(0, ClassId_14, 1))));
        ClassNameStr_19 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ClassSymName_17);
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), ClassArity_18, &Var_108);
        Var_116 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_108);
        Var_117 = mercury__string__f_43_43_2_f_0(ClassNameStr_19, Var_116);
        Var_119 = mercury__string__f_43_43_2_f_0((MR_String) " for ", Var_117);
        Var_120 = mercury__string__f_43_43_2_f_0(MethodIdStr_16, Var_119);
        Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "class method ", Var_120);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, OriginUser_5, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word MethodConstraints_20 = ((MR_Word) ((MR_hl_field(3, OriginUser_5, 2))));
            MR_Word InstanceTypes_21;
            MR_Word ClassName_24;
            MR_String ClassStr_26;
            MR_String TypeStrs_27;
            MR_Word Var_46;
            MR_Word ClassId_72;
            MR_Word MethodId_73 = ((MR_Word) ((MR_hl_field(3, OriginUser_5, 1))));
            MR_String MethodIdStr_74;
            MR_String Var_100;
            MR_String Var_102;
            MR_String Var_103;
            MR_String Var_105;
            MR_String Var_106;

            MethodIdStr_74 = parse_tree__parse_tree_out_sym_name__pf_sym_name_user_arity_to_string_1_f_0(MethodId_73);
            ClassId_72 = ((MR_Word) ((MR_hl_field(0, MethodConstraints_20, 0))));
            InstanceTypes_21 = ((MR_Word) ((MR_hl_field(0, MethodConstraints_20, 1))));
            ClassName_24 = ((MR_Word) ((MR_hl_field(0, ClassId_72, 0))));
            ClassStr_26 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ClassName_24);
            Var_46 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0));
            TypeStrs_27 = parse_tree__parse_tree_out_type__mercury_types_to_string_3_f_0(Var_46, (MR_Integer) 0, InstanceTypes_21);
            Var_100 = mercury__string__f_43_43_2_f_0(TypeStrs_27, (MR_String) ")\'");
            Var_102 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_100);
            Var_103 = mercury__string__f_43_43_2_f_0(ClassStr_26, Var_102);
            Var_105 = mercury__string__f_43_43_2_f_0((MR_String) " for \140", Var_103);
            Var_106 = mercury__string__f_43_43_2_f_0(MethodIdStr_74, Var_105);
            Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "instance method ", Var_106);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word PromiseType_28 = ((MR_Unsigned) ((MR_hl_field(3, OriginUser_5, 1))) & (MR_Integer) 3);
            MR_String PromiseTypeStr_29;
            MR_String FileName_75 = ((MR_String) ((MR_hl_field(3, OriginUser_5, 2))));
            MR_Integer LineNumber_76 = ((MR_Integer) ((MR_hl_field(3, OriginUser_5, 3))));
            MR_String Var_122;
            MR_String Var_130;
            MR_String Var_131;
            MR_String Var_133;

            PromiseTypeStr_29 = parse_tree__parse_tree_out_misc__promise_to_string_1_f_0(PromiseType_28);
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), LineNumber_76, &Var_122);
            Var_130 = mercury__string__f_43_43_2_f_0((MR_String) ":", Var_122);
            Var_131 = mercury__string__f_43_43_2_f_0(FileName_75, Var_130);
            Var_133 = mercury__string__f_43_43_2_f_0((MR_String) " declaration at ", Var_131);
            Str_6 = mercury__string__f_43_43_2_f_0(PromiseTypeStr_29, Var_133);
          }
          break;
      }
      break;
  }
  return Str_6;
}

static MR_Word MR_CALL 
hlds__pred_name__get_base_origin_1_f_0(
  MR_Word Origin_3)
{
  while (MR_TRUE)
  {
    MR_Word BaseOrigin_4;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Origin_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        BaseOrigin_4 = Origin_3;
        break;
      case (MR_Integer) 2:
        {
          MR_Word SubOrigin_8 = ((MR_Word) ((MR_hl_field(2, Origin_3, 1))));
          MR_Word next_value_of_Origin_3 = SubOrigin_8;

          // direct tailcall eliminated
          ;
          Origin_3 = next_value_of_Origin_3;
          continue;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word SubOrigin_13 = ((MR_Word) ((MR_hl_field(3, Origin_3, 1))));
          MR_Word next_value_of_Origin_3 = SubOrigin_13;

          // direct tailcall eliminated
          ;
          Origin_3 = next_value_of_Origin_3;
          continue;
        }
        break;
    }
    return BaseOrigin_4;
    break;
  }
}

MR_String MR_CALL 
hlds__pred_name__uci_pred_name_2_f_0(
  MR_Word SpecialPred_4,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_String Name_7;
  MR_Word SymName_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
  MR_Integer Arity_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
  MR_String BaseName_8;

  BaseName_8 = mdbcomp__prim_data__get_special_pred_id_target_name_1_f_0(SpecialPred_4);
  succeeded = mercury__builtin__semidet_fail_0_p_0();
  if (succeeded)
  {
    MR_String Var_9;
    MR_String Var_10;
    MR_String Var_11;
    MR_String Var_13;

    Var_10 = mdbcomp__sym_name__sym_name_to_string_1_f_0(SymName_5);
    Var_13 = mercury__string__int_to_string_1_f_0(Arity_6);
    Var_11 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_13);
    Var_9 = mercury__string__f_43_43_2_f_0(Var_10, Var_11);
    Name_7 = mercury__string__f_43_43_2_f_0(BaseName_8, Var_9);
  }
  else
    Name_7 = BaseName_8;
  return Name_7;
}

MR_String MR_CALL 
hlds__pred_name__promise_pred_name_3_f_0(
  MR_Word PromiseType_5,
  MR_String FileName_6,
  MR_Integer LineNumber_7)
{
  MR_String Name_8;
  MR_String PromiseTypeStr_9;
  MR_String Var_19;
  MR_String Var_20;
  MR_String Var_27;
  MR_String Var_29;

  PromiseTypeStr_9 = parse_tree__parse_tree_out_misc__promise_to_string_1_f_0(PromiseType_5);
  Var_19 = mercury__string__f_43_43_2_f_0((MR_String) "__", FileName_6);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), LineNumber_7, &Var_20);
  Var_27 = mercury__string__f_43_43_2_f_0(Var_20, Var_19);
  Var_29 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_27);
  Name_8 = mercury__string__f_43_43_2_f_0(PromiseTypeStr_9, Var_29);
  return Name_8;
}

static void MR_CALL 
hlds__pred_name__make_instance_string_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_String conv0_Str_4;

  hlds__pred_name__instance_type_ctor_to_string_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_Str_4);
  *wrapper_arg_2 = ((MR_Box) (conv0_Str_4));
}

void MR_CALL 
hlds__pred_name__make_instance_string_2_p_0(
  MR_Word InstanceTypes_3,
  MR_String * InstanceStr_4)
{
  MR_Word InstanceStrs_5;

  mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__pred_name_scalar_common_1[3]), InstanceTypes_3, &InstanceStrs_5);
  mercury__string__append_list_2_p_0(InstanceStrs_5, InstanceStr_4);
}

static void MR_CALL 
hlds__pred_name__make_instance_method_pred_name_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_String conv0_Str_4;

  hlds__pred_name__instance_type_ctor_to_string_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_Str_4);
  *wrapper_arg_2 = ((MR_Box) (conv0_Str_4));
}

void MR_CALL 
hlds__pred_name__make_instance_method_pred_name_5_p_0(
  MR_Word ClassId_6,
  MR_Word MethodName_7,
  MR_Word UserArity_8,
  MR_Word InstanceTypes_9,
  MR_String * PredName_10)
{
  MR_Word ClassName_11 = ((MR_Word) ((MR_hl_field(0, ClassId_6, 0))));
  MR_String ClassNameStr_13;
  MR_String MethodNameStr_14;
  MR_String InstanceStr_15;
  MR_Integer UserArityInt_16;
  MR_String Var_29;
  MR_String Var_37;
  MR_String Var_38;
  MR_String Var_40;
  MR_String Var_41;
  MR_String Var_43;
  MR_String Var_44;
  MR_Word InstanceStrs_46;

  ClassNameStr_13 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(ClassName_11, (MR_String) "__");
  MethodNameStr_14 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(MethodName_7, (MR_String) "__");
  mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__pred_name_scalar_common_1[2]), InstanceTypes_9, &InstanceStrs_46);
  mercury__string__append_list_2_p_0(InstanceStrs_46, &InstanceStr_15);
  UserArityInt_16 = (MR_Integer) (UserArity_8);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), UserArityInt_16, &Var_29);
  Var_37 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_29);
  Var_38 = mercury__string__f_43_43_2_f_0(MethodNameStr_14, Var_37);
  Var_40 = mercury__string__f_43_43_2_f_0((MR_String) "____", Var_38);
  Var_41 = mercury__string__f_43_43_2_f_0(InstanceStr_15, Var_40);
  Var_43 = mercury__string__f_43_43_2_f_0((MR_String) "____", Var_41);
  Var_44 = mercury__string__f_43_43_2_f_0(ClassNameStr_13, Var_43);
  *PredName_10 = mercury__string__f_43_43_2_f_0((MR_String) "ClassMethod_for_", Var_44);
}

void MR_CALL 
hlds__pred_name__make_transformed_pred_sym_name_4_p_0(
  MR_Word ModuleName_5,
  MR_String OrigName_6,
  MR_Word Transform_7,
  MR_Word * TransformedSymName_8)
{
  MR_String TransformedName_9;

  hlds__pred_name__make_transformed_pred_name_3_p_0(OrigName_6, Transform_7, &TransformedName_9);
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *TransformedSymName_8 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (ModuleName_5));
    MR_hl_field(1, base, 1) = ((MR_Box) (TransformedName_9));
  }
}

void MR_CALL 
hlds__pred_name__make_transformed_pred_name_3_p_0(
  MR_String OrigName_4,
  MR_Word Transform_5,
  MR_String * TransformedName_6)
{
  switch (MR_tag((MR_Word) Transform_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Integer Counter_8 = ((MR_Integer) ((MR_hl_field(0, Transform_5, 1))));
        MR_String Var_325;
        MR_String Var_333;

        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), Counter_8, &Var_325);
        Var_333 = mercury__string__f_43_43_2_f_0((MR_String) "__ho", Var_325);
        *TransformedName_6 = mercury__string__f_43_43_2_f_0(OrigName_4, Var_333);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Integer ProcId_10 = ((MR_Integer) ((MR_hl_field(1, Transform_5, 2))));
        MR_Integer Version_11 = ((MR_Integer) ((MR_hl_field(1, Transform_5, 3))));
        MR_Integer ProcNum_12;
        MR_String Var_272;
        MR_String Var_280;
        MR_String Var_281;
        MR_String Var_288;
        MR_String Var_290;

        ProcNum_12 = hlds__pred_proc_id__proc_id_to_int_1_f_0(ProcId_10);
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), Version_11, &Var_272);
        Var_280 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_272);
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), ProcNum_12, &Var_281);
        Var_288 = mercury__string__f_43_43_2_f_0(Var_281, Var_280);
        Var_290 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_288);
        *TransformedName_6 = mercury__string__f_43_43_2_f_0(OrigName_4, Var_290);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word UserArity_13 = ((MR_Word) ((MR_hl_field(2, Transform_5, 1))));
        MR_Word AuxTablingPredKind_14 = ((((MR_Unsigned) ((MR_hl_field(2, Transform_5, 2))) >> 1)) & (MR_Integer) 1);
        MR_Word SingleProc_15 = ((MR_Unsigned) ((MR_hl_field(2, Transform_5, 2))) & (MR_Integer) 1);
        MR_Integer ProcIdInt_16 = ((MR_Integer) ((MR_hl_field(2, Transform_5, 3))));
        MR_Integer UserArityInt_17 = (MR_Integer) (UserArity_13);
        MR_String KindStr_18;

        switch (AuxTablingPredKind_14) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            KindStr_18 = (MR_String) "reset";
            break;
          case (MR_Integer) 0:
            KindStr_18 = (MR_String) "statistics";
            break;
        }
        switch (SingleProc_15) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String Var_348;
              MR_String Var_356;
              MR_String Var_357;
              MR_String Var_364;
              MR_String Var_366;
              MR_String Var_367;
              MR_String Var_369;
              MR_String Var_370;

              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), ProcIdInt_16, &Var_348);
              Var_356 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_348);
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), UserArityInt_17, &Var_357);
              Var_364 = mercury__string__f_43_43_2_f_0(Var_357, Var_356);
              Var_366 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_364);
              Var_367 = mercury__string__f_43_43_2_f_0(OrigName_4, Var_366);
              Var_369 = mercury__string__f_43_43_2_f_0((MR_String) "_for_", Var_367);
              Var_370 = mercury__string__f_43_43_2_f_0(KindStr_18, Var_369);
              *TransformedName_6 = mercury__string__f_43_43_2_f_0((MR_String) "table_", Var_370);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String Var_334;
              MR_String Var_342;
              MR_String Var_343;
              MR_String Var_345;
              MR_String Var_346;

              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), UserArityInt_17, &Var_334);
              Var_342 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_334);
              Var_343 = mercury__string__f_43_43_2_f_0(OrigName_4, Var_342);
              Var_345 = mercury__string__f_43_43_2_f_0((MR_String) "_for_", Var_343);
              Var_346 = mercury__string__f_43_43_2_f_0(KindStr_18, Var_345);
              *TransformedName_6 = mercury__string__f_43_43_2_f_0((MR_String) "table_", Var_346);
            }
            break;
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Transform_5, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word PredOrFunc_60 = ((MR_Unsigned) ((MR_hl_field(3, Transform_5, 1))) & (MR_Integer) 1);
            MR_Word LNC_61 = ((MR_Word) ((MR_hl_field(3, Transform_5, 2))));
            MR_String Prefix_63;
            MR_Integer Line_64;
            MR_String Suffix_65;
            MR_String Var_122;
            MR_Integer Counter_246;
            MR_String Var_464;
            MR_String Var_465;
            MR_String Var_473;
            MR_String Var_474;
            MR_String Var_482;
            MR_String Var_483;
            MR_String Var_485;

            Var_122 = mdbcomp__prim_data__pred_or_func_to_str_1_f_0(PredOrFunc_60);
            Var_464 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_122);
            Prefix_63 = mercury__string__f_43_43_2_f_0((MR_String) "AccFrom", Var_464);
            Line_64 = ((MR_Integer) ((MR_hl_field(0, LNC_61, 0))));
            Counter_246 = ((MR_Integer) ((MR_hl_field(0, LNC_61, 1))));
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), Counter_246, &Var_465);
            Var_473 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_465);
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), Line_64, &Var_474);
            Suffix_65 = mercury__string__f_43_43_2_f_0(Var_474, Var_473);
            Var_482 = mercury__string__f_43_43_2_f_0((MR_String) "__", Suffix_65);
            Var_483 = mercury__string__f_43_43_2_f_0(OrigName_4, Var_482);
            Var_485 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_483);
            *TransformedName_6 = mercury__string__f_43_43_2_f_0(Prefix_63, Var_485);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word PredOrFunc_486 = ((MR_Unsigned) ((MR_hl_field(3, Transform_5, 1))) & (MR_Integer) 1);
            MR_Word LNC_487 = ((MR_Word) ((MR_hl_field(3, Transform_5, 2))));
            MR_String Prefix_489;
            MR_Integer Line_490;
            MR_String Suffix_491;
            MR_String Var_492;
            MR_Integer Counter_493;
            MR_String Var_495;
            MR_String Var_496;
            MR_String Var_499;
            MR_String Var_500;
            MR_String Var_503;
            MR_String Var_504;
            MR_String Var_506;

            Var_492 = mdbcomp__prim_data__pred_or_func_to_str_1_f_0(PredOrFunc_486);
            Var_495 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_492);
            Prefix_489 = mercury__string__f_43_43_2_f_0((MR_String) "DeforestationIn", Var_495);
            Line_490 = ((MR_Integer) ((MR_hl_field(0, LNC_487, 0))));
            Counter_493 = ((MR_Integer) ((MR_hl_field(0, LNC_487, 1))));
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), Counter_493, &Var_496);
            Var_499 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_496);
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), Line_490, &Var_500);
            Suffix_491 = mercury__string__f_43_43_2_f_0(Var_500, Var_499);
            Var_503 = mercury__string__f_43_43_2_f_0((MR_String) "__", Suffix_491);
            Var_504 = mercury__string__f_43_43_2_f_0(OrigName_4, Var_503);
            Var_506 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_504);
            *TransformedName_6 = mercury__string__f_43_43_2_f_0(Prefix_489, Var_506);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word PredOrFunc_521 = ((MR_Unsigned) ((MR_hl_field(3, Transform_5, 1))) & (MR_Integer) 1);
            MR_Word LNC_522 = ((MR_Word) ((MR_hl_field(3, Transform_5, 2))));
            MR_String Prefix_524;
            MR_Integer Line_525;
            MR_String Suffix_526;
            MR_String Var_527;
            MR_Integer Counter_528;
            MR_String Var_530;
            MR_String Var_531;
            MR_String Var_534;
            MR_String Var_535;
            MR_String Var_538;
            MR_String Var_539;
            MR_String Var_541;

            Var_527 = mdbcomp__prim_data__pred_or_func_to_str_1_f_0(PredOrFunc_521);
            Var_530 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_527);
            Prefix_524 = mercury__string__f_43_43_2_f_0((MR_String) "IntroducedFrom", Var_530);
            Line_525 = ((MR_Integer) ((MR_hl_field(0, LNC_522, 0))));
            Counter_528 = ((MR_Integer) ((MR_hl_field(0, LNC_522, 1))));
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), Counter_528, &Var_531);
            Var_534 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_531);
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), Line_525, &Var_535);
            Suffix_526 = mercury__string__f_43_43_2_f_0(Var_535, Var_534);
            Var_538 = mercury__string__f_43_43_2_f_0((MR_String) "__", Suffix_526);
            Var_539 = mercury__string__f_43_43_2_f_0(OrigName_4, Var_538);
            Var_541 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_539);
            *TransformedName_6 = mercury__string__f_43_43_2_f_0(Prefix_524, Var_541);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_String Var_135;
            MR_Integer Counter_247;
            MR_Integer ProcNum_248 = ((MR_Integer) ((MR_hl_field(3, Transform_5, 2))));
            MR_Word PredOrFunc_249 = ((MR_Unsigned) ((MR_hl_field(3, Transform_5, 1))) & (MR_Integer) 1);
            MR_Word LNC_250 = ((MR_Word) ((MR_hl_field(3, Transform_5, 3))));
            MR_Integer Line_252;
            MR_String Var_418;
            MR_String Var_419;
            MR_String Var_427;
            MR_String Var_428;
            MR_String Var_435;
            MR_String Var_437;
            MR_String Var_438;
            MR_String Prefix_549;
            MR_String Suffix_550;
            MR_String Var_552;
            MR_String Var_553;
            MR_String Var_555;

            Var_135 = mdbcomp__prim_data__pred_or_func_to_str_1_f_0(PredOrFunc_249);
            Var_418 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_135);
            Prefix_549 = mercury__string__f_43_43_2_f_0((MR_String) "loop_inv", Var_418);
            Line_252 = ((MR_Integer) ((MR_hl_field(0, LNC_250, 0))));
            Counter_247 = ((MR_Integer) ((MR_hl_field(0, LNC_250, 1))));
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), ProcNum_248, &Var_419);
            Var_427 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_419);
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), Counter_247, &Var_428);
            Var_435 = mercury__string__f_43_43_2_f_0(Var_428, Var_427);
            Var_437 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_435);
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), Line_252, &Var_438);
            Suffix_550 = mercury__string__f_43_43_2_f_0(Var_438, Var_437);
            Var_552 = mercury__string__f_43_43_2_f_0((MR_String) "__", Suffix_550);
            Var_553 = mercury__string__f_43_43_2_f_0(OrigName_4, Var_552);
            Var_555 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_553);
            *TransformedName_6 = mercury__string__f_43_43_2_f_0(Prefix_549, Var_555);
          }
          break;
        case (MR_Integer) 4:
          {
            MR_String Prefix_598;
            MR_String Suffix_599;
            MR_String Var_600;
            MR_Integer Counter_601;
            MR_Integer ProcNum_602 = ((MR_Integer) ((MR_hl_field(3, Transform_5, 2))));
            MR_Word PredOrFunc_603 = ((MR_Unsigned) ((MR_hl_field(3, Transform_5, 1))) & (MR_Integer) 1);
            MR_Word LNC_604 = ((MR_Word) ((MR_hl_field(3, Transform_5, 3))));
            MR_Integer Line_606;
            MR_String Var_608;
            MR_String Var_609;
            MR_String Var_612;
            MR_String Var_613;
            MR_String Var_615;
            MR_String Var_617;
            MR_String Var_618;
            MR_String Var_621;
            MR_String Var_622;
            MR_String Var_624;

            Var_600 = mdbcomp__prim_data__pred_or_func_to_str_1_f_0(PredOrFunc_603);
            Var_608 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_600);
            Prefix_598 = mercury__string__f_43_43_2_f_0((MR_String) "tupling", Var_608);
            Line_606 = ((MR_Integer) ((MR_hl_field(0, LNC_604, 0))));
            Counter_601 = ((MR_Integer) ((MR_hl_field(0, LNC_604, 1))));
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), ProcNum_602, &Var_609);
            Var_612 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_609);
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), Counter_601, &Var_613);
            Var_615 = mercury__string__f_43_43_2_f_0(Var_613, Var_612);
            Var_617 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_615);
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), Line_606, &Var_618);
            Suffix_599 = mercury__string__f_43_43_2_f_0(Var_618, Var_617);
            Var_621 = mercury__string__f_43_43_2_f_0((MR_String) "__", Suffix_599);
            Var_622 = mercury__string__f_43_43_2_f_0(OrigName_4, Var_621);
            Var_624 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_622);
            *TransformedName_6 = mercury__string__f_43_43_2_f_0(Prefix_598, Var_624);
          }
          break;
        case (MR_Integer) 5:
          {
            MR_String Prefix_625;
            MR_String Suffix_626;
            MR_String Var_627;
            MR_Integer Counter_628;
            MR_Integer ProcNum_629 = ((MR_Integer) ((MR_hl_field(3, Transform_5, 2))));
            MR_Word PredOrFunc_630 = ((MR_Unsigned) ((MR_hl_field(3, Transform_5, 1))) & (MR_Integer) 1);
            MR_Word LNC_631 = ((MR_Word) ((MR_hl_field(3, Transform_5, 3))));
            MR_Integer Line_633;
            MR_String Var_635;
            MR_String Var_636;
            MR_String Var_639;
            MR_String Var_640;
            MR_String Var_642;
            MR_String Var_644;
            MR_String Var_645;
            MR_String Var_648;
            MR_String Var_649;
            MR_String Var_651;

            Var_627 = mdbcomp__prim_data__pred_or_func_to_str_1_f_0(PredOrFunc_630);
            Var_635 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_627);
            Prefix_625 = mercury__string__f_43_43_2_f_0((MR_String) "untupling", Var_635);
            Line_633 = ((MR_Integer) ((MR_hl_field(0, LNC_631, 0))));
            Counter_628 = ((MR_Integer) ((MR_hl_field(0, LNC_631, 1))));
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), ProcNum_629, &Var_636);
            Var_639 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_636);
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), Counter_628, &Var_640);
            Var_642 = mercury__string__f_43_43_2_f_0(Var_640, Var_639);
            Var_644 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_642);
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), Line_633, &Var_645);
            Suffix_626 = mercury__string__f_43_43_2_f_0(Var_645, Var_644);
            Var_648 = mercury__string__f_43_43_2_f_0((MR_String) "__", Suffix_626);
            Var_649 = mercury__string__f_43_43_2_f_0(OrigName_4, Var_648);
            Var_651 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_649);
            *TransformedName_6 = mercury__string__f_43_43_2_f_0(Prefix_625, Var_651);
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Integer VariantNum_66 = ((MR_Integer) ((MR_hl_field(3, Transform_5, 2))));
            MR_String Var_148;
            MR_Word PredOrFunc_253 = ((MR_Unsigned) ((MR_hl_field(3, Transform_5, 1))) & (MR_Integer) 1);
            MR_String Prefix_542;
            MR_String Suffix_543;
            MR_String Var_545;
            MR_String Var_546;
            MR_String Var_548;

            Var_148 = mdbcomp__prim_data__pred_or_func_to_str_1_f_0(PredOrFunc_253);
            Prefix_542 = mercury__string__f_43_43_2_f_0((MR_String) "LCMC__", Var_148);
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), VariantNum_66, &Suffix_543);
            Var_545 = mercury__string__f_43_43_2_f_0((MR_String) "__", Suffix_543);
            Var_546 = mercury__string__f_43_43_2_f_0(OrigName_4, Var_545);
            Var_548 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_546);
            *TransformedName_6 = mercury__string__f_43_43_2_f_0(Prefix_542, Var_548);
          }
          break;
        case (MR_Integer) 7:
          {
            MR_String Var_157;
            MR_Word PredOrFunc_254 = ((MR_Unsigned) ((MR_hl_field(3, Transform_5, 1))) & (MR_Integer) 1);
            MR_String Prefix_584;
            MR_String Var_588;
            MR_String Var_590;

            Var_157 = mdbcomp__prim_data__pred_or_func_to_str_1_f_0(PredOrFunc_254);
            Prefix_584 = mercury__string__f_43_43_2_f_0((MR_String) "SSDB__", Var_157);
            Var_588 = mercury__string__f_43_43_2_f_0(OrigName_4, (MR_String) "__");
            Var_590 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_588);
            *TransformedName_6 = mercury__string__f_43_43_2_f_0(Prefix_584, Var_590);
          }
          break;
        case (MR_Integer) 8:
          {
            MR_Word ArgNums_67 = ((MR_Word) ((MR_hl_field(3, Transform_5, 3))));
            MR_String Var_162;
            MR_String Var_167;
            MR_Integer ProcNum_255 = ((MR_Integer) ((MR_hl_field(3, Transform_5, 2))));
            MR_Word PredOrFunc_256 = ((MR_Unsigned) ((MR_hl_field(3, Transform_5, 1))) & (MR_Integer) 1);
            MR_String Var_454;
            MR_String Var_462;
            MR_String Prefix_507;
            MR_String Suffix_508;
            MR_String Var_510;
            MR_String Var_511;
            MR_String Var_513;

            Var_162 = mdbcomp__prim_data__pred_or_func_to_str_1_f_0(PredOrFunc_256);
            Prefix_507 = mercury__string__f_43_43_2_f_0((MR_String) "Parallel__", Var_162);
            Var_167 = hlds__pred_name__bracketed_ints_to_string_1_f_0(ArgNums_67);
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), ProcNum_255, &Var_454);
            Var_462 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_454);
            Suffix_508 = mercury__string__f_43_43_2_f_0(Var_167, Var_462);
            Var_510 = mercury__string__f_43_43_2_f_0((MR_String) "__", Suffix_508);
            Var_511 = mercury__string__f_43_43_2_f_0(OrigName_4, Var_510);
            Var_513 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_511);
            *TransformedName_6 = mercury__string__f_43_43_2_f_0(Prefix_507, Var_513);
          }
          break;
        case (MR_Integer) 9:
          {
            MR_Integer Distance_68 = ((MR_Integer) ((MR_hl_field(3, Transform_5, 2))));
            MR_String Var_174;
            MR_Word PredOrFunc_257 = ((MR_Unsigned) ((MR_hl_field(3, Transform_5, 1))) & (MR_Integer) 1);
            MR_String Prefix_563;
            MR_String Suffix_564;
            MR_String Var_566;
            MR_String Var_567;
            MR_String Var_569;

            Var_174 = mdbcomp__prim_data__pred_or_func_to_str_1_f_0(PredOrFunc_257);
            Prefix_563 = mercury__string__f_43_43_2_f_0((MR_String) "DistanceGranularityFor__", Var_174);
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), Distance_68, &Suffix_564);
            Var_566 = mercury__string__f_43_43_2_f_0((MR_String) "__", Suffix_564);
            Var_567 = mercury__string__f_43_43_2_f_0(OrigName_4, Var_566);
            Var_569 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_567);
            *TransformedName_6 = mercury__string__f_43_43_2_f_0(Prefix_563, Var_569);
          }
          break;
        case (MR_Integer) 10:
          {
            MR_String Var_183;
            MR_Integer ProcNum_258 = ((MR_Integer) ((MR_hl_field(3, Transform_5, 2))));
            MR_Word PredOrFunc_259 = ((MR_Unsigned) ((MR_hl_field(3, Transform_5, 1))) & (MR_Integer) 1);
            MR_String Var_395;
            MR_String Prefix_570;
            MR_String Suffix_571;
            MR_String Var_573;
            MR_String Var_574;
            MR_String Var_576;

            Var_183 = mdbcomp__prim_data__pred_or_func_to_str_1_f_0(PredOrFunc_259);
            Prefix_570 = mercury__string__f_43_43_2_f_0((MR_String) "LoopControl__", Var_183);
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), ProcNum_258, &Var_395);
            Suffix_571 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_395);
            Var_573 = mercury__string__f_43_43_2_f_0((MR_String) "__", Suffix_571);
            Var_574 = mercury__string__f_43_43_2_f_0(OrigName_4, Var_573);
            Var_576 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_574);
            *TransformedName_6 = mercury__string__f_43_43_2_f_0(Prefix_570, Var_576);
          }
          break;
        case (MR_Integer) 11:
          {
            MR_String Var_192;
            MR_String Var_199;
            MR_Integer ProcNum_260 = ((MR_Integer) ((MR_hl_field(3, Transform_5, 2))));
            MR_Word PredOrFunc_261 = ((MR_Unsigned) ((MR_hl_field(3, Transform_5, 1))) & (MR_Integer) 1);
            MR_Word ArgNums_262 = ((MR_Word) ((MR_hl_field(3, Transform_5, 3))));
            MR_String Var_384;
            MR_String Var_385;
            MR_String Prefix_591;
            MR_String Suffix_592;
            MR_String Var_594;
            MR_String Var_595;
            MR_String Var_597;

            Var_192 = mdbcomp__prim_data__pred_or_func_to_str_1_f_0(PredOrFunc_261);
            Prefix_591 = mercury__string__f_43_43_2_f_0((MR_String) "ctgc__", Var_192);
            Var_199 = hlds__pred_name__bracketed_ints_to_string_1_f_0(ArgNums_262);
            Var_384 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_199);
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), ProcNum_260, &Var_385);
            Suffix_592 = mercury__string__f_43_43_2_f_0(Var_385, Var_384);
            Var_594 = mercury__string__f_43_43_2_f_0((MR_String) "__", Suffix_592);
            Var_595 = mercury__string__f_43_43_2_f_0(OrigName_4, Var_594);
            Var_597 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_595);
            *TransformedName_6 = mercury__string__f_43_43_2_f_0(Prefix_591, Var_597);
          }
          break;
        case (MR_Integer) 12:
          {
            MR_Word MaybePredOrFunc_69 = ((MR_Word) ((MR_hl_field(3, Transform_5, 1))));
            MR_Word VarSet_70 = ((MR_Word) ((MR_hl_field(3, Transform_5, 2))));
            MR_Word TypeSubst_71 = ((MR_Word) ((MR_hl_field(3, Transform_5, 3))));
            MR_String PredOrFuncStr_72;
            MR_String Prefix_577;
            MR_String Suffix_578;
            MR_String Var_580;
            MR_String Var_581;
            MR_String Var_583;

            if ((MaybePredOrFunc_69 == (MR_Word) ((MR_Unsigned) 0U)))
              PredOrFuncStr_72 = (MR_String) "pred_or_func";
            else
            {
              MR_Word PredOrFunc_263 = ((MR_Word) ((MR_hl_field(1, MaybePredOrFunc_69, 0))));

              PredOrFuncStr_72 = mdbcomp__prim_data__pred_or_func_to_str_1_f_0(PredOrFunc_263);
            }
            Prefix_577 = mercury__string__f_43_43_2_f_0((MR_String) "TypeSpecOf__", PredOrFuncStr_72);
            Suffix_578 = hlds__pred_name__type_subst_to_string_2_f_0(VarSet_70, TypeSubst_71);
            Var_580 = mercury__string__f_43_43_2_f_0((MR_String) "__", Suffix_578);
            Var_581 = mercury__string__f_43_43_2_f_0(OrigName_4, Var_580);
            Var_583 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_581);
            *TransformedName_6 = mercury__string__f_43_43_2_f_0(Prefix_577, Var_583);
          }
          break;
        case (MR_Integer) 13:
          {
            MR_String Var_208;
            MR_Word PredOrFunc_266 = ((MR_Unsigned) ((MR_hl_field(3, Transform_5, 1))) & (MR_Integer) 1);
            MR_String Prefix_514;
            MR_String Var_518;
            MR_String Var_520;

            Var_208 = mdbcomp__prim_data__pred_or_func_to_str_1_f_0(PredOrFunc_266);
            Prefix_514 = mercury__string__f_43_43_2_f_0((MR_String) "OutlinedForIOTablingFrom__", Var_208);
            Var_518 = mercury__string__f_43_43_2_f_0(OrigName_4, (MR_String) "__");
            Var_520 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_518);
            *TransformedName_6 = mercury__string__f_43_43_2_f_0(Prefix_514, Var_520);
          }
          break;
        case (MR_Integer) 14:
          {
            MR_String Var_213;
            MR_Integer ProcNum_267 = ((MR_Integer) ((MR_hl_field(3, Transform_5, 2))));
            MR_Word PredOrFunc_268 = ((MR_Unsigned) ((MR_hl_field(3, Transform_5, 1))) & (MR_Integer) 1);
            MR_String Prefix_556;
            MR_String Suffix_557;
            MR_String Var_559;
            MR_String Var_560;
            MR_String Var_562;

            Var_213 = mdbcomp__prim_data__pred_or_func_to_str_1_f_0(PredOrFunc_268);
            Prefix_556 = mercury__string__f_43_43_2_f_0((MR_String) "GeneratorFor_", Var_213);
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), ProcNum_267, &Suffix_557);
            Var_559 = mercury__string__f_43_43_2_f_0((MR_String) "__", Suffix_557);
            Var_560 = mercury__string__f_43_43_2_f_0(OrigName_4, Var_559);
            Var_562 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_560);
            *TransformedName_6 = mercury__string__f_43_43_2_f_0(Prefix_556, Var_562);
          }
          break;
        case (MR_Integer) 15:
          {
            MR_Word CloneKind_19 = ((MR_Unsigned) ((MR_hl_field(3, Transform_5, 1))) & (MR_Integer) 7);
            MR_Integer Arity_20 = ((MR_Integer) ((MR_hl_field(3, Transform_5, 2))));
            MR_Integer PredNum_21 = ((MR_Integer) ((MR_hl_field(3, Transform_5, 3))));
            MR_String CloneKindStr_22 = ((&hlds__pred_name_vector_common_6[0 + CloneKind_19]))->hlds__pred_name__vector_common_type_6_0__vct_6_f_0;
            MR_Integer Counter_245 = ((MR_Integer) ((MR_hl_field(3, Transform_5, 4))));
            MR_String Var_291;
            MR_String Var_299;
            MR_String Var_300;
            MR_String Var_307;
            MR_String Var_309;
            MR_String Var_310;
            MR_String Var_317;
            MR_String Var_319;
            MR_String Var_320;
            MR_String Var_322;
            MR_String Var_323;

            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), Counter_245, &Var_291);
            Var_299 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_291);
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), PredNum_21, &Var_300);
            Var_307 = mercury__string__f_43_43_2_f_0(Var_300, Var_299);
            Var_309 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_307);
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), Arity_20, &Var_310);
            Var_317 = mercury__string__f_43_43_2_f_0(Var_310, Var_309);
            Var_319 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_317);
            Var_320 = mercury__string__f_43_43_2_f_0(OrigName_4, Var_319);
            Var_322 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_320);
            Var_323 = mercury__string__f_43_43_2_f_0(CloneKindStr_22, Var_322);
            *TransformedName_6 = mercury__string__f_43_43_2_f_0((MR_String) "StmExpanded_", Var_323);
          }
          break;
        case (MR_Integer) 16:
          {
            MR_String Var_222;
            MR_String Var_227;
            MR_Integer ProcNum_269 = ((MR_Integer) ((MR_hl_field(3, Transform_5, 2))));
            MR_Word PredOrFunc_270 = ((MR_Unsigned) ((MR_hl_field(3, Transform_5, 1))) & (MR_Integer) 1);
            MR_Word ArgNums_271 = ((MR_Word) ((MR_hl_field(3, Transform_5, 3))));
            MR_String Var_373;
            MR_String Var_381;
            MR_String Prefix_652;
            MR_String Suffix_653;
            MR_String Var_655;
            MR_String Var_656;
            MR_String Var_658;

            Var_222 = mdbcomp__prim_data__pred_or_func_to_str_1_f_0(PredOrFunc_270);
            Prefix_652 = mercury__string__f_43_43_2_f_0((MR_String) "UnusedArgs__", Var_222);
            Var_227 = hlds__pred_name__bracketed_ints_to_string_1_f_0(ArgNums_271);
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), ProcNum_269, &Var_373);
            Var_381 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_373);
            Suffix_653 = mercury__string__f_43_43_2_f_0(Var_227, Var_381);
            Var_655 = mercury__string__f_43_43_2_f_0((MR_String) "__", Suffix_653);
            Var_656 = mercury__string__f_43_43_2_f_0(OrigName_4, Var_655);
            Var_658 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_656);
            *TransformedName_6 = mercury__string__f_43_43_2_f_0(Prefix_652, Var_658);
          }
          break;
      }
      break;
  }
}

static MR_Box MR_CALL 
hlds__pred_name__bracketed_ints_to_string_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = mercury__string__int_to_string_1_f_0(((MR_Integer) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_String MR_CALL 
hlds__pred_name__bracketed_ints_to_string_1_f_0(
  MR_Word Ints_3)
{
  MR_String Str_4;
  MR_Word IntStrs_5;
  MR_String IntsStr_6;
  MR_String Var_18;

  IntStrs_5 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__pred_name_scalar_common_1[1]), Ints_3);
  IntsStr_6 = mercury__string__join_list_2_f_0((MR_String) ", ", IntStrs_5);
  Var_18 = mercury__string__f_43_43_2_f_0(IntsStr_6, (MR_String) "]");
  Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "[", Var_18);
  return Str_4;
}

static MR_Box MR_CALL 
hlds__pred_name__type_subst_to_string_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_Str_7;

  conv0_Str_7 = hlds__pred_name__type_var_subst_to_string_2_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Str_7));
  return wrapper_arg_2;
}

static MR_String MR_CALL 
hlds__pred_name__type_subst_to_string_2_f_0(
  MR_Word VarSet_4,
  MR_Word TypeSubst_5)
{
  MR_String Str_6;
  MR_Word TVarStrs_7;
  MR_String TVarsStr_8;
  MR_Word Var_9;
  MR_Word Var_10;
  MR_String Var_21;

  {
    Var_9 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_9, 0) = ((MR_Box) (&hlds__pred_name_scalar_common_4[0]));
    MR_hl_field(0, Var_9, 1) = ((MR_Box) (hlds__pred_name__type_subst_to_string_2_f_0_1));
    MR_hl_field(0, Var_9, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_9, 3) = ((MR_Box) (VarSet_4));
  }
  Var_10 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_tvar_subst_0), TypeSubst_5);
  TVarStrs_7 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_tvar_subst_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_9, Var_10);
  TVarsStr_8 = mercury__string__join_list_2_f_0((MR_String) ", ", TVarStrs_7);
  Var_21 = mercury__string__f_43_43_2_f_0(TVarsStr_8, (MR_String) "]");
  Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "[", Var_21);
  return Str_6;
}

static MR_bool MR_CALL 
hlds__pred_name____Unify____aux_tabling_maybe_single_proc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__pred_name____Unify____aux_tabling_maybe_single_proc_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__pred_name____Compare____aux_tabling_maybe_single_proc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__pred_name____Compare____aux_tabling_maybe_single_proc_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__pred_name____Unify____aux_tabling_pred_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__pred_name____Unify____aux_tabling_pred_kind_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__pred_name____Compare____aux_tabling_pred_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__pred_name____Compare____aux_tabling_pred_kind_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__pred_name____Unify____compiler_made_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__pred_name____Unify____compiler_made_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__pred_name____Compare____compiler_made_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__pred_name____Compare____compiler_made_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__pred_name____Unify____instance_method_constraints_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__pred_name____Unify____instance_method_constraints_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__pred_name____Compare____instance_method_constraints_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__pred_name____Compare____instance_method_constraints_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__pred_name____Unify____line_number_and_counter_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__pred_name____Unify____line_number_and_counter_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__pred_name____Compare____line_number_and_counter_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__pred_name____Compare____line_number_and_counter_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__pred_name____Unify____pred_origin_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__pred_name____Unify____pred_origin_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__pred_name____Compare____pred_origin_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__pred_name____Compare____pred_origin_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__pred_name____Unify____pred_transform_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__pred_name____Unify____pred_transform_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__pred_name____Compare____pred_transform_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__pred_name____Compare____pred_transform_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__pred_name____Unify____proc_transform_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__pred_name____Unify____proc_transform_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__pred_name____Compare____proc_transform_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__pred_name____Compare____proc_transform_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__pred_name____Unify____stm_clone_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__pred_name____Unify____stm_clone_kind_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__pred_name____Compare____stm_clone_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__pred_name____Compare____stm_clone_kind_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__pred_name____Unify____transform_name_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__pred_name____Unify____transform_name_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__pred_name____Compare____transform_name_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__pred_name____Compare____transform_name_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__pred_name____Unify____user_made_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__pred_name____Unify____user_made_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__pred_name____Compare____user_made_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__pred_name____Compare____user_made_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__pred_name____Unify____user_or_dev_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__pred_name____Unify____user_or_dev_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__pred_name____Compare____user_or_dev_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__pred_name____Compare____user_or_dev_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__hlds__pred_name__init(void)
{
}

void mercury__hlds__pred_name__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&hlds__pred_name__hlds__pred_name__type_ctor_info_aux_tabling_maybe_single_proc_0);
  MR_register_type_ctor_info(&hlds__pred_name__hlds__pred_name__type_ctor_info_aux_tabling_pred_kind_0);
  MR_register_type_ctor_info(&hlds__pred_name__hlds__pred_name__type_ctor_info_compiler_made_0);
  MR_register_type_ctor_info(&hlds__pred_name__hlds__pred_name__type_ctor_info_instance_method_constraints_0);
  MR_register_type_ctor_info(&hlds__pred_name__hlds__pred_name__type_ctor_info_line_number_and_counter_0);
  MR_register_type_ctor_info(&hlds__pred_name__hlds__pred_name__type_ctor_info_pred_origin_0);
  MR_register_type_ctor_info(&hlds__pred_name__hlds__pred_name__type_ctor_info_pred_transform_0);
  MR_register_type_ctor_info(&hlds__pred_name__hlds__pred_name__type_ctor_info_proc_transform_0);
  MR_register_type_ctor_info(&hlds__pred_name__hlds__pred_name__type_ctor_info_stm_clone_kind_0);
  MR_register_type_ctor_info(&hlds__pred_name__hlds__pred_name__type_ctor_info_transform_name_0);
  MR_register_type_ctor_info(&hlds__pred_name__hlds__pred_name__type_ctor_info_user_made_0);
  MR_register_type_ctor_info(&hlds__pred_name__hlds__pred_name__type_ctor_info_user_or_dev_0);
}

void mercury__hlds__pred_name__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__pred_name__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module hlds.pred_name.
