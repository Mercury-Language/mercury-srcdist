/*
** Automatically generated from `pred_name.m'
** by the Mercury compiler,
** version rotd-2022-07-21
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


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "digraph.mih"
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
#include "mode_robdd.mih"
#include "multi_map.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "recompilation.mih"
#include "robdd.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 hlds__pred_name__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__pred_name__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__pred_name__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

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

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_pred_origin_0_0[3];

static const MR_DuArgLocn hlds__pred_name__hlds__pred_name__field_locns_pred_origin_0_0[3];

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_pred_origin_0_0;

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_pred_origin_0_1[2];

static const MR_DuArgLocn hlds__pred_name__hlds__pred_name__field_locns_pred_origin_0_1[2];

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_pred_origin_0_1;

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_pred_origin_0_2[2];

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_pred_origin_0_2;

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_pred_origin_0_3[2];

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_pred_origin_0_3;

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_pred_origin_0_4[2];

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_pred_origin_0_4;

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_pred_origin_0_5[2];

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_pred_origin_0_5;

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_pred_origin_0_6[3];

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_pred_origin_0_6;

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_pred_origin_0_7[2];

static const MR_DuArgLocn hlds__pred_name__hlds__pred_name__field_locns_pred_origin_0_7[2];

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_pred_origin_0_7;

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_pred_origin_0_8[2];

static const MR_DuArgLocn hlds__pred_name__hlds__pred_name__field_locns_pred_origin_0_8[2];

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_pred_origin_0_8;

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_pred_origin_0_9[3];

static const MR_DuArgLocn hlds__pred_name__hlds__pred_name__field_locns_pred_origin_0_9[3];

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_pred_origin_0_9;

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_pred_origin_0_10;

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_pred_origin_0_11;

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_pred_origin_0_12[3];

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_pred_origin_0_12;

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_stag_ordered_pred_origin_0_0[2];

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_stag_ordered_pred_origin_0_1[1];

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_stag_ordered_pred_origin_0_2[1];

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_stag_ordered_pred_origin_0_3[9];

static const MR_DuPtagLayout hlds__pred_name__hlds__pred_name__du_ptag_ordered_pred_origin_0[4];

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_name_ordered_pred_origin_0[13];

static const MR_Integer hlds__pred_name__hlds__pred_name__functor_number_map_pred_origin_0[13];

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_pred_transformation_0_0[1];

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_pred_transformation_0_0;

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_pred_transformation_0_1[1];

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_pred_transformation_0_1;

static const MR_FA_TypeInfo_Struct2 hlds__pred_name__pair__ti_pair_2builtin__type_ctor_info_int_0parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__pred_name__one_or_more__ti_one_or_more_1pair__ti_pair_2builtin__type_ctor_info_int_0parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_pred_transformation_0_2[1];

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_pred_transformation_0_2;

static const MR_FA_TypeInfo_Struct1 hlds__pred_name__list__ti_list_1builtin__type_ctor_info_int_0;

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_pred_transformation_0_3[2];

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_pred_transformation_0_3;

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_pred_transformation_0_4[2];

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_pred_transformation_0_4;

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_pred_transformation_0_5[3];

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_pred_transformation_0_5;

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_pred_transformation_0_6[3];

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_pred_transformation_0_6;

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_pred_transformation_0_7[3];

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_pred_transformation_0_7;

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_pred_transformation_0_8[1];

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_pred_transformation_0_8;

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_pred_transformation_0_9[2];

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_pred_transformation_0_9;

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_pred_transformation_0_10[1];

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_pred_transformation_0_10;

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_pred_transformation_0_11[3];

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_pred_transformation_0_11;

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_pred_transformation_0_12;

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_pred_transformation_0_13;

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_pred_transformation_0_14;

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_pred_transformation_0_15;

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_pred_transformation_0_16;

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_pred_transformation_0_17;

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_stag_ordered_pred_transformation_0_0[6];

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_stag_ordered_pred_transformation_0_1[1];

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_stag_ordered_pred_transformation_0_2[1];

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_stag_ordered_pred_transformation_0_3[10];

static const MR_DuPtagLayout hlds__pred_name__hlds__pred_name__du_ptag_ordered_pred_transformation_0[4];

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_name_ordered_pred_transformation_0[18];

static const MR_Integer hlds__pred_name__hlds__pred_name__functor_number_map_pred_transformation_0[18];

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

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_transform_name_0_1[3];

static const MR_DuArgLocn hlds__pred_name__hlds__pred_name__field_locns_transform_name_0_1[3];

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

static const MR_FA_TypeInfo_Struct2 hlds__pred_name__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__pred_name__one_or_more__ti_one_or_more_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

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

static MR_String MR_CALL 
hlds__pred_name__subst_to_name_1_f_0(
  MR_Word HeadVar__1_1);

static MR_String MR_CALL 
hlds__pred_name__type_var_subst_to_string_2_f_0(
  MR_Word VarSet_4,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__pred_name__write_origin_constraint_6_p_0(
  MR_Word Stream_7,
  MR_Word TVarSet_8,
  MR_Word VarNamePrint_9,
  MR_Word Constraint_10);

static void MR_CALL 
hlds__pred_name__instance_type_ctor_to_string_2_p_0(
  MR_Word Type_3,
  MR_String * Str_4);

static MR_Box MR_CALL 
hlds__pred_name__layout_pred_transform_name_1_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__pred_name__layout_pred_transform_name_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__pred_name__layout_pred_transform_name_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_String MR_CALL 
hlds__pred_name__layout_pred_transform_name_1_f_0(
  MR_Word HeadVar__1_1);

static MR_String MR_CALL 
hlds__pred_name__underscore_ints_to_string_1_f_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
hlds__pred_name__write_origin_constraints_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__pred_name__write_origin_constraints_7_p_0(
  MR_Word Stream_8,
  MR_String Msg_9,
  MR_Word TVarSet_10,
  MR_Word VarNamePrint_11,
  MR_Word Constraints_12);

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
hlds__pred_name____Unify____pred_transformation_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__pred_name____Compare____pred_transformation_0_0_10001(
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


static /* final */ const MR_Box hlds__pred_name_scalar_common_1[8][3];

static /* final */ const MR_Box hlds__pred_name_scalar_common_2[8][2];

static /* final */ const MR_Box hlds__pred_name_scalar_common_3[1][1];

static /* final */ const MR_Box hlds__pred_name_scalar_common_4[1][6];

static /* final */ const MR_Box hlds__pred_name_scalar_common_5[3][5];

static /* final */ const MR_Box hlds__pred_name_scalar_common_7[1][9];


struct hlds__pred_name__vector_common_type_6_0_s {
  const MR_String hlds__pred_name__vector_common_type_6_0__vct_6_f_0;
};

static /* final */ const struct hlds__pred_name__vector_common_type_6_0_s hlds__pred_name_vector_common_6[21];



static /* final */ const MR_Box hlds__pred_name_scalar_common_1[8][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__pred_name_scalar_common_2[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&hlds__pred_name_scalar_common_5[0])),
    ((MR_Box) (hlds__pred_name__bracketed_ints_to_string_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&hlds__pred_name_scalar_common_5[1])),
    ((MR_Box) (hlds__pred_name__make_instance_method_pred_name_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&hlds__pred_name_scalar_common_5[1])),
    ((MR_Box) (hlds__pred_name__make_instance_string_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&hlds__pred_name_scalar_common_5[0])),
    ((MR_Box) (hlds__pred_name__layout_pred_transform_name_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&hlds__pred_name_scalar_common_5[2])),
    ((MR_Box) (hlds__pred_name__layout_pred_transform_name_1_f_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&hlds__pred_name_scalar_common_5[0])),
    ((MR_Box) (hlds__pred_name__layout_pred_transform_name_1_f_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__pred_name_scalar_common_2[8][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&hlds__pred_name_scalar_common_1[0]))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&hlds__pred_name_scalar_common_1[1]))
  },
};

static /* final */ const MR_Box hlds__pred_name_scalar_common_3[1][1] = {
  /* row   0 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
};

static /* final */ const MR_Box hlds__pred_name_scalar_common_4[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__pred_name__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__pred_name__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box hlds__pred_name_scalar_common_5[3][5] = {
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
};

static /* final */ const MR_Box hlds__pred_name_scalar_common_7[1][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&hlds__pred_name__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};


static /* final */ const struct hlds__pred_name__vector_common_type_6_0_s hlds__pred_name_vector_common_6[21] = {
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
  /* row  17 */   { (MR_String) "to ground conversion predicate" },
  /* row  18 */   { (MR_String) "to any conversion predicate" },
  /* row  19 */   { (MR_String) "from ground conversion predicate" },
  /* row  20 */   { (MR_String) "from any conversion predicate" },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct1 hlds__pred_name__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__pred_name__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__pred_name__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&hlds__pred_name__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
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

static const MR_FA_TypeInfo_Struct1 hlds__pred_name__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__pred_name__list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)
  }
};

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_instance_method_constraints_0_0[4] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0),
  (MR_PseudoTypeInfo) (&hlds__pred_name__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&hlds__pred_name__list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraints_0)
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

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_stag_ordered_instance_method_constraints_0_0[1] = {
  &hlds__pred_name__hlds__pred_name__du_functor_desc_instance_method_constraints_0_0
};

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

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_name_ordered_instance_method_constraints_0[1] = {
  &hlds__pred_name__hlds__pred_name__du_functor_desc_instance_method_constraints_0_0
};

static const MR_Integer hlds__pred_name__hlds__pred_name__functor_number_map_instance_method_constraints_0[1] = {
  (MR_Integer) 0
};

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

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_stag_ordered_line_number_and_counter_0_0[1] = {
  &hlds__pred_name__hlds__pred_name__du_functor_desc_line_number_and_counter_0_0
};

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

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_name_ordered_line_number_and_counter_0[1] = {
  &hlds__pred_name__hlds__pred_name__du_functor_desc_line_number_and_counter_0_0
};

static const MR_Integer hlds__pred_name__hlds__pred_name__functor_number_map_line_number_and_counter_0[1] = {
  (MR_Integer) 0
};

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

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_pred_origin_0_0[3] = {
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0),
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_user_arity_0)
};

static const MR_DuArgLocn hlds__pred_name__hlds__pred_name__field_locns_pred_origin_0_0[3] = {
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

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_pred_origin_0_0 = {
  (MR_String) "origin_user",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__pred_name__hlds__pred_name__field_types_pred_origin_0_0,
  NULL,
  hlds__pred_name__hlds__pred_name__field_locns_pred_origin_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_pred_origin_0_1[2] = {
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_special_pred_id_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)
};

static const MR_DuArgLocn hlds__pred_name__hlds__pred_name__field_locns_pred_origin_0_1[2] = {
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

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_pred_origin_0_1 = {
  (MR_String) "origin_special_pred",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(1),
  hlds__pred_name__hlds__pred_name__field_types_pred_origin_0_1,
  NULL,
  hlds__pred_name__hlds__pred_name__field_locns_pred_origin_0_1,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_pred_origin_0_2[2] = {
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&hlds__pred_name__hlds__pred_name__type_ctor_info_instance_method_constraints_0)
};

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_pred_origin_0_2 = {
  (MR_String) "origin_instance_method",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(2),
  hlds__pred_name__hlds__pred_name__field_types_pred_origin_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_pred_origin_0_3[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pf_sym_name_arity_0)
};

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_pred_origin_0_3 = {
  (MR_String) "origin_class_method",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(3),
  hlds__pred_name__hlds__pred_name__field_types_pred_origin_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_pred_origin_0_4[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_pred_origin_0_4 = {
  (MR_String) "origin_deforestation",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 2,
  INT32_C(4),
  hlds__pred_name__hlds__pred_name__field_types_pred_origin_0_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_pred_origin_0_5[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_pred_origin_0_5 = {
  (MR_String) "origin_assertion",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 3,
  INT32_C(5),
  hlds__pred_name__hlds__pred_name__field_types_pred_origin_0_5,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_pred_origin_0_6[3] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_pred_origin_0_6 = {
  (MR_String) "origin_lambda",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 4,
  INT32_C(6),
  hlds__pred_name__hlds__pred_name__field_types_pred_origin_0_6,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_pred_origin_0_7[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_solver_type_pred_kind_0)
};

static const MR_DuArgLocn hlds__pred_name__hlds__pred_name__field_locns_pred_origin_0_7[2] = {
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

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_pred_origin_0_7 = {
  (MR_String) "origin_solver_repn",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 5,
  INT32_C(7),
  hlds__pred_name__hlds__pred_name__field_types_pred_origin_0_7,
  NULL,
  hlds__pred_name__hlds__pred_name__field_locns_pred_origin_0_7,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_pred_origin_0_8[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pf_sym_name_arity_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tabling_aux_pred_kind_0)
};

static const MR_DuArgLocn hlds__pred_name__hlds__pred_name__field_locns_pred_origin_0_8[2] = {
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

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_pred_origin_0_8 = {
  (MR_String) "origin_tabling",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 6,
  INT32_C(8),
  hlds__pred_name__hlds__pred_name__field_types_pred_origin_0_8,
  NULL,
  hlds__pred_name__hlds__pred_name__field_locns_pred_origin_0_8,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_pred_origin_0_9[3] = {
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mutable_pred_kind_0)
};

static const MR_DuArgLocn hlds__pred_name__hlds__pred_name__field_locns_pred_origin_0_9[3] = {
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

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_pred_origin_0_9 = {
  (MR_String) "origin_mutable",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 7,
  INT32_C(9),
  hlds__pred_name__hlds__pred_name__field_types_pred_origin_0_9,
  NULL,
  hlds__pred_name__hlds__pred_name__field_locns_pred_origin_0_9,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_pred_origin_0_10 = {
  (MR_String) "origin_initialise",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(10),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_pred_origin_0_11 = {
  (MR_String) "origin_finalise",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(11),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_pred_origin_0_12[3] = {
  (MR_PseudoTypeInfo) (&hlds__pred_name__hlds__pred_name__type_ctor_info_pred_transformation_0),
  (MR_PseudoTypeInfo) (&hlds__pred_name__hlds__pred_name__type_ctor_info_pred_origin_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)
};

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_pred_origin_0_12 = {
  (MR_String) "origin_transformed",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 8,
  INT32_C(12),
  hlds__pred_name__hlds__pred_name__field_types_pred_origin_0_12,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_stag_ordered_pred_origin_0_0[2] = {
  &hlds__pred_name__hlds__pred_name__du_functor_desc_pred_origin_0_10,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_pred_origin_0_11
};

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_stag_ordered_pred_origin_0_1[1] = {
  &hlds__pred_name__hlds__pred_name__du_functor_desc_pred_origin_0_0
};

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_stag_ordered_pred_origin_0_2[1] = {
  &hlds__pred_name__hlds__pred_name__du_functor_desc_pred_origin_0_1
};

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_stag_ordered_pred_origin_0_3[9] = {
  &hlds__pred_name__hlds__pred_name__du_functor_desc_pred_origin_0_2,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_pred_origin_0_3,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_pred_origin_0_4,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_pred_origin_0_5,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_pred_origin_0_6,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_pred_origin_0_7,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_pred_origin_0_8,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_pred_origin_0_9,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_pred_origin_0_12
};

static const MR_DuPtagLayout hlds__pred_name__hlds__pred_name__du_ptag_ordered_pred_origin_0[4] = {
  {
    UINT32_C(2),
    MR_SECTAG_LOCAL_REST_OF_WORD,
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
    UINT32_C(9),
    MR_SECTAG_REMOTE_FULL_WORD,
    hlds__pred_name__hlds__pred_name__du_stag_ordered_pred_origin_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_name_ordered_pred_origin_0[13] = {
  &hlds__pred_name__hlds__pred_name__du_functor_desc_pred_origin_0_5,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_pred_origin_0_3,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_pred_origin_0_4,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_pred_origin_0_11,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_pred_origin_0_10,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_pred_origin_0_2,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_pred_origin_0_6,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_pred_origin_0_9,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_pred_origin_0_7,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_pred_origin_0_1,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_pred_origin_0_8,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_pred_origin_0_12,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_pred_origin_0_0
};

static const MR_Integer hlds__pred_name__hlds__pred_name__functor_number_map_pred_origin_0[13] = {
  (MR_Integer) 12,
  (MR_Integer) 9,
  (MR_Integer) 5,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 6,
  (MR_Integer) 8,
  (MR_Integer) 10,
  (MR_Integer) 7,
  (MR_Integer) 4,
  (MR_Integer) 3,
  (MR_Integer) 11
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
  (MR_Integer) 13,
  UINT16_C(12),
  hlds__pred_name__hlds__pred_name__functor_number_map_pred_origin_0,

};

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_pred_transformation_0_0[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_pred_transformation_0_0 = {
  (MR_String) "transform_higher_order_spec",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__pred_name__hlds__pred_name__field_types_pred_transformation_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_pred_transformation_0_1[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_pred_transformation_0_1 = {
  (MR_String) "transform_higher_order_type_spec",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(1),
  hlds__pred_name__hlds__pred_name__field_types_pred_transformation_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
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
  {
    (MR_TypeInfo) (&hlds__pred_name__pair__ti_pair_2builtin__type_ctor_info_int_0parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_pred_transformation_0_2[1] = {
  (MR_PseudoTypeInfo) (&hlds__pred_name__one_or_more__ti_one_or_more_1pair__ti_pair_2builtin__type_ctor_info_int_0parse_tree__prog_data__type_ctor_info_mer_type_0)
};

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_pred_transformation_0_2 = {
  (MR_String) "transform_type_spec",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(2),
  hlds__pred_name__hlds__pred_name__field_types_pred_transformation_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 hlds__pred_name__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_pred_transformation_0_3[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&hlds__pred_name__list__ti_list_1builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_pred_transformation_0_3 = {
  (MR_String) "transform_unused_args",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(3),
  hlds__pred_name__hlds__pred_name__field_types_pred_transformation_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_pred_transformation_0_4[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&hlds__pred_name__list__ti_list_1builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_pred_transformation_0_4 = {
  (MR_String) "transform_accumulator",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 2,
  INT32_C(4),
  hlds__pred_name__hlds__pred_name__field_types_pred_transformation_0_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_pred_transformation_0_5[3] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_pred_transformation_0_5 = {
  (MR_String) "transform_loop_inv",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 3,
  INT32_C(5),
  hlds__pred_name__hlds__pred_name__field_types_pred_transformation_0_5,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_pred_transformation_0_6[3] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_pred_transformation_0_6 = {
  (MR_String) "transform_tuple",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 4,
  INT32_C(6),
  hlds__pred_name__hlds__pred_name__field_types_pred_transformation_0_6,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_pred_transformation_0_7[3] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_pred_transformation_0_7 = {
  (MR_String) "transform_untuple",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 5,
  INT32_C(7),
  hlds__pred_name__hlds__pred_name__field_types_pred_transformation_0_7,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_pred_transformation_0_8[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_pred_transformation_0_8 = {
  (MR_String) "transform_distance_granularity",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 6,
  INT32_C(8),
  hlds__pred_name__hlds__pred_name__field_types_pred_transformation_0_8,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_pred_transformation_0_9[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&hlds__pred_name__list__ti_list_1builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_pred_transformation_0_9 = {
  (MR_String) "transform_dep_par_conj",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 7,
  INT32_C(9),
  hlds__pred_name__hlds__pred_name__field_types_pred_transformation_0_9,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_pred_transformation_0_10[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_pred_transformation_0_10 = {
  (MR_String) "transform_par_loop_ctrl",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 8,
  INT32_C(10),
  hlds__pred_name__hlds__pred_name__field_types_pred_transformation_0_10,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_pred_transformation_0_11[3] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&hlds__pred_name__list__ti_list_1builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_pred_transformation_0_11 = {
  (MR_String) "transform_lcmc",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 9,
  INT32_C(11),
  hlds__pred_name__hlds__pred_name__field_types_pred_transformation_0_11,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_pred_transformation_0_12 = {
  (MR_String) "transform_table_generator",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(12),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_pred_transformation_0_13 = {
  (MR_String) "transform_stm_expansion",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(13),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_pred_transformation_0_14 = {
  (MR_String) "transform_structure_reuse",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 2,
  INT32_C(14),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_pred_transformation_0_15 = {
  (MR_String) "transform_io_tabling",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 3,
  INT32_C(15),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_pred_transformation_0_16 = {
  (MR_String) "transform_ssdebug",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 4,
  INT32_C(16),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_pred_transformation_0_17 = {
  (MR_String) "transform_direct_arg_in_out",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 5,
  INT32_C(17),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_stag_ordered_pred_transformation_0_0[6] = {
  &hlds__pred_name__hlds__pred_name__du_functor_desc_pred_transformation_0_12,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_pred_transformation_0_13,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_pred_transformation_0_14,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_pred_transformation_0_15,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_pred_transformation_0_16,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_pred_transformation_0_17
};

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_stag_ordered_pred_transformation_0_1[1] = {
  &hlds__pred_name__hlds__pred_name__du_functor_desc_pred_transformation_0_0
};

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_stag_ordered_pred_transformation_0_2[1] = {
  &hlds__pred_name__hlds__pred_name__du_functor_desc_pred_transformation_0_1
};

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_stag_ordered_pred_transformation_0_3[10] = {
  &hlds__pred_name__hlds__pred_name__du_functor_desc_pred_transformation_0_2,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_pred_transformation_0_3,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_pred_transformation_0_4,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_pred_transformation_0_5,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_pred_transformation_0_6,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_pred_transformation_0_7,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_pred_transformation_0_8,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_pred_transformation_0_9,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_pred_transformation_0_10,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_pred_transformation_0_11
};

static const MR_DuPtagLayout hlds__pred_name__hlds__pred_name__du_ptag_ordered_pred_transformation_0[4] = {
  {
    UINT32_C(6),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    hlds__pred_name__hlds__pred_name__du_stag_ordered_pred_transformation_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__pred_name__hlds__pred_name__du_stag_ordered_pred_transformation_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__pred_name__hlds__pred_name__du_stag_ordered_pred_transformation_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(10),
    MR_SECTAG_REMOTE_FULL_WORD,
    hlds__pred_name__hlds__pred_name__du_stag_ordered_pred_transformation_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_name_ordered_pred_transformation_0[18] = {
  &hlds__pred_name__hlds__pred_name__du_functor_desc_pred_transformation_0_4,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_pred_transformation_0_9,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_pred_transformation_0_17,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_pred_transformation_0_8,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_pred_transformation_0_0,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_pred_transformation_0_1,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_pred_transformation_0_15,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_pred_transformation_0_11,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_pred_transformation_0_5,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_pred_transformation_0_10,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_pred_transformation_0_16,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_pred_transformation_0_13,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_pred_transformation_0_14,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_pred_transformation_0_12,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_pred_transformation_0_6,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_pred_transformation_0_2,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_pred_transformation_0_7,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_pred_transformation_0_3
};

static const MR_Integer hlds__pred_name__hlds__pred_name__functor_number_map_pred_transformation_0[18] = {
  (MR_Integer) 4,
  (MR_Integer) 5,
  (MR_Integer) 15,
  (MR_Integer) 17,
  (MR_Integer) 0,
  (MR_Integer) 8,
  (MR_Integer) 14,
  (MR_Integer) 16,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 9,
  (MR_Integer) 7,
  (MR_Integer) 13,
  (MR_Integer) 11,
  (MR_Integer) 12,
  (MR_Integer) 6,
  (MR_Integer) 10,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct hlds__pred_name__hlds__pred_name__type_ctor_info_pred_transformation_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__pred_name____Unify____pred_transformation_0_0_10001)),
  ((MR_Box) (hlds__pred_name____Compare____pred_transformation_0_0_10001)),
  (MR_String) "hlds.pred_name",
  (MR_String) "pred_transformation",
  { hlds__pred_name__hlds__pred_name__du_name_ordered_pred_transformation_0 },
  { hlds__pred_name__hlds__pred_name__du_ptag_ordered_pred_transformation_0 },
  (MR_Integer) 18,
  UINT16_C(12),
  hlds__pred_name__hlds__pred_name__functor_number_map_pred_transformation_0,

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

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_transform_name_0_1[3] = {
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuArgLocn hlds__pred_name__hlds__pred_name__field_locns_transform_name_0_1[3] = {
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

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_transform_name_0_1 = {
  (MR_String) "tn_higher_order_type_spec",
  INT16_C(3),
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

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_transform_name_0_10[1] = {
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0)
};

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
  {
    (MR_TypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__pred_name__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__pred_name__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&hlds__pred_name__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__pred_name__one_or_more__ti_one_or_more_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1,
  {
    (MR_TypeInfo) (&hlds__pred_name__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_transform_name_0_15[3] = {
  (MR_PseudoTypeInfo) (&hlds__pred_name__maybe__ti_maybe_1mdbcomp__prim_data__type_ctor_info_pred_or_func_0),
  (MR_PseudoTypeInfo) (&hlds__pred_name__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
  (MR_PseudoTypeInfo) (&hlds__pred_name__one_or_more__ti_one_or_more_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0)
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

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_transform_name_0_16[1] = {
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0)
};

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

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_stag_ordered_transform_name_0_0[1] = {
  &hlds__pred_name__hlds__pred_name__du_functor_desc_transform_name_0_0
};

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_stag_ordered_transform_name_0_1[1] = {
  &hlds__pred_name__hlds__pred_name__du_functor_desc_transform_name_0_1
};

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_stag_ordered_transform_name_0_2[1] = {
  &hlds__pred_name__hlds__pred_name__du_functor_desc_transform_name_0_2
};

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
  &hlds__pred_name__hlds__pred_name__du_functor_desc_transform_name_0_1,
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
  &hlds__pred_name__hlds__pred_name__du_functor_desc_transform_name_0_19
};

static const MR_Integer hlds__pred_name__hlds__pred_name__functor_number_map_transform_name_0[20] = {
  (MR_Integer) 4,
  (MR_Integer) 5,
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 7,
  (MR_Integer) 9,
  (MR_Integer) 17,
  (MR_Integer) 18,
  (MR_Integer) 8,
  (MR_Integer) 14,
  (MR_Integer) 3,
  (MR_Integer) 11,
  (MR_Integer) 12,
  (MR_Integer) 16,
  (MR_Integer) 13,
  (MR_Integer) 6,
  (MR_Integer) 10,
  (MR_Integer) 15,
  (MR_Integer) 19
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

void MR_CALL 
hlds__pred_name____Compare____transform_name_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_143 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_144 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_143 == CastY_144);
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
              MR_Word ArgX1_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
              MR_Word ArgY1_8;
              MR_Integer ArgX2_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
              MR_Integer ArgY2_11;
              MR_Word SubResult1_9;
              MR_Integer Var_211;
              MR_Integer Var_212;

              succeeded = ((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0);
              if (succeeded)
              {
                ArgY1_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
                ArgY2_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
                Var_211 = (MR_Integer) (ArgX1_7);
                Var_212 = (MR_Integer) (ArgY1_8);
                succeeded = (Var_211 < Var_212);
                if (succeeded)
                {
                  SubResult1_9 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = (Var_211 > Var_212);
                  if (succeeded)
                  {
                    SubResult1_9 = (MR_Integer) 2;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = MR_TRUE;
                    succeeded = !(succeeded);
                    if (succeeded)
                    {
                      SubResult1_9 = (MR_Integer) 0;
                      succeeded = MR_TRUE;
                    }
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
              MR_Word ArgX1_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
              MR_Word ArgY1_13;
              MR_Integer ArgX2_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
              MR_Integer ArgY2_16;
              MR_Integer ArgX3_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
              MR_Integer ArgY3_19;
              MR_Word SubResult1_14;
              MR_Integer Var_213;
              MR_Integer Var_214;

              succeeded = ((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1);
              if (succeeded)
              {
                ArgY1_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
                ArgY2_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
                ArgY3_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 2))));
                Var_213 = (MR_Integer) (ArgX1_12);
                Var_214 = (MR_Integer) (ArgY1_13);
                succeeded = (Var_213 < Var_214);
                if (succeeded)
                {
                  SubResult1_14 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = (Var_213 > Var_214);
                  if (succeeded)
                  {
                    SubResult1_14 = (MR_Integer) 2;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = MR_TRUE;
                    succeeded = !(succeeded);
                    if (succeeded)
                    {
                      SubResult1_14 = (MR_Integer) 0;
                      succeeded = MR_TRUE;
                    }
                  }
                }
                if (succeeded)
                  CompareResult_6 = SubResult1_14;
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
                    else
                    {
                      succeeded = MR_TRUE;
                      succeeded = !(succeeded);
                      if (succeeded)
                      {
                        SubResult2_17 = (MR_Integer) 0;
                        succeeded = MR_TRUE;
                      }
                    }
                  }
                  if (succeeded)
                    CompareResult_6 = SubResult2_17;
                  else
                  {
                    succeeded = (ArgX3_18 < ArgY3_19);
                    if (succeeded)
                      CompareResult_6 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (ArgX3_18 > ArgY3_19);
                      if (succeeded)
                        CompareResult_6 = (MR_Integer) 2;
                      else
                        CompareResult_6 = (MR_Integer) 0;
                    }
                  }
                }
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgX1_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
              MR_Word ArgY1_21;
              MR_Word ArgX2_23 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
              MR_Word ArgY2_24;
              MR_Word ArgX3_26 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2))) >> 1)) & (MR_Integer) 1);
              MR_Word ArgY3_27;
              MR_Word ArgX4_29 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 1);
              MR_Word ArgY4_30;
              MR_Integer ArgX5_32 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3))));
              MR_Integer ArgY5_33;
              MR_Word SubResult1_22;
              MR_Integer Var_199;
              MR_Integer Var_200;

              succeeded = ((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 2);
              if (succeeded)
              {
                ArgY1_21 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
                ArgY2_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 1))));
                ArgY3_27 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 2))) >> 1)) & (MR_Integer) 1);
                ArgY4_30 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 2))) & (MR_Integer) 1);
                ArgY5_33 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 3))));
                Var_199 = (MR_Integer) (ArgX1_20);
                Var_200 = (MR_Integer) (ArgY1_21);
                succeeded = (Var_199 < Var_200);
                if (succeeded)
                {
                  SubResult1_22 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = (Var_199 > Var_200);
                  if (succeeded)
                  {
                    SubResult1_22 = (MR_Integer) 2;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = MR_TRUE;
                    succeeded = !(succeeded);
                    if (succeeded)
                    {
                      SubResult1_22 = (MR_Integer) 0;
                      succeeded = MR_TRUE;
                    }
                  }
                }
                if (succeeded)
                  CompareResult_6 = SubResult1_22;
                else
                {
                  MR_Word SubResult2_25;
                  MR_Integer Var_201 = (MR_Integer) (ArgX2_23);
                  MR_Integer Var_202 = (MR_Integer) (ArgY2_24);

                  succeeded = (Var_201 < Var_202);
                  if (succeeded)
                  {
                    SubResult2_25 = (MR_Integer) 1;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = (Var_201 > Var_202);
                    if (succeeded)
                    {
                      SubResult2_25 = (MR_Integer) 2;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = MR_TRUE;
                      succeeded = !(succeeded);
                      if (succeeded)
                      {
                        SubResult2_25 = (MR_Integer) 0;
                        succeeded = MR_TRUE;
                      }
                    }
                  }
                  if (succeeded)
                    CompareResult_6 = SubResult2_25;
                  else
                  {
                    MR_Word SubResult3_28;
                    MR_Integer Var_203 = (MR_Integer) (ArgX3_26);
                    MR_Integer Var_204 = (MR_Integer) (ArgY3_27);

                    succeeded = (Var_203 < Var_204);
                    if (succeeded)
                    {
                      SubResult3_28 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (Var_203 > Var_204);
                      if (succeeded)
                      {
                        SubResult3_28 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult3_28 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    if (succeeded)
                      CompareResult_6 = SubResult3_28;
                    else
                    {
                      MR_Word SubResult4_31;
                      MR_Integer Var_205 = (MR_Integer) (ArgX4_29);
                      MR_Integer Var_206 = (MR_Integer) (ArgY4_30);

                      succeeded = (Var_205 < Var_206);
                      if (succeeded)
                      {
                        SubResult4_31 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (Var_205 > Var_206);
                        if (succeeded)
                        {
                          SubResult4_31 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = MR_TRUE;
                          succeeded = !(succeeded);
                          if (succeeded)
                          {
                            SubResult4_31 = (MR_Integer) 0;
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                      if (succeeded)
                        CompareResult_6 = SubResult4_31;
                      else
                      {
                        succeeded = (ArgX5_32 < ArgY5_33);
                        if (succeeded)
                          CompareResult_6 = (MR_Integer) 1;
                        else
                        {
                          succeeded = (ArgX5_32 > ArgY5_33);
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
            switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ArgX1_34 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word ArgY1_35;
                  MR_Word ArgX2_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  MR_Word ArgY2_38;
                  MR_Word SubResult1_36;
                  MR_Integer Var_197;
                  MR_Integer Var_198;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (succeeded)
                  {
                    ArgY1_35 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
                    ArgY2_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                    Var_197 = (MR_Integer) (ArgX1_34);
                    Var_198 = (MR_Integer) (ArgY1_35);
                    succeeded = (Var_197 < Var_198);
                    if (succeeded)
                    {
                      SubResult1_36 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (Var_197 > Var_198);
                      if (succeeded)
                      {
                        SubResult1_36 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult1_36 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    if (succeeded)
                      CompareResult_6 = SubResult1_36;
                    else
                      hlds__pred_name____Compare____line_number_and_counter_0_0(&CompareResult_6, ArgX2_37, ArgY2_38);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgX1_39 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word ArgY1_40;
                  MR_Word ArgX2_42 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  MR_Word ArgY2_43;
                  MR_Word SubResult1_41;
                  MR_Integer Var_207;
                  MR_Integer Var_208;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1)));
                  if (succeeded)
                  {
                    ArgY1_40 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
                    ArgY2_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                    Var_207 = (MR_Integer) (ArgX1_39);
                    Var_208 = (MR_Integer) (ArgY1_40);
                    succeeded = (Var_207 < Var_208);
                    if (succeeded)
                    {
                      SubResult1_41 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (Var_207 > Var_208);
                      if (succeeded)
                      {
                        SubResult1_41 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult1_41 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    if (succeeded)
                      CompareResult_6 = SubResult1_41;
                    else
                      hlds__pred_name____Compare____line_number_and_counter_0_0(&CompareResult_6, ArgX2_42, ArgY2_43);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ArgX1_44 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word ArgY1_45;
                  MR_Word ArgX2_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  MR_Word ArgY2_48;
                  MR_Word SubResult1_46;
                  MR_Integer Var_217;
                  MR_Integer Var_218;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2)));
                  if (succeeded)
                  {
                    ArgY1_45 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
                    ArgY2_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                    Var_217 = (MR_Integer) (ArgX1_44);
                    Var_218 = (MR_Integer) (ArgY1_45);
                    succeeded = (Var_217 < Var_218);
                    if (succeeded)
                    {
                      SubResult1_46 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (Var_217 > Var_218);
                      if (succeeded)
                      {
                        SubResult1_46 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult1_46 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    if (succeeded)
                      CompareResult_6 = SubResult1_46;
                    else
                      hlds__pred_name____Compare____line_number_and_counter_0_0(&CompareResult_6, ArgX2_47, ArgY2_48);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word ArgX1_49 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word ArgY1_50;
                  MR_Integer ArgX2_52 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  MR_Integer ArgY2_53;
                  MR_Word ArgX3_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                  MR_Word ArgY3_56;
                  MR_Word SubResult1_51;
                  MR_Integer Var_221;
                  MR_Integer Var_222;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3)));
                  if (succeeded)
                  {
                    ArgY1_50 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
                    ArgY2_53 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                    ArgY3_56 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
                    Var_221 = (MR_Integer) (ArgX1_49);
                    Var_222 = (MR_Integer) (ArgY1_50);
                    succeeded = (Var_221 < Var_222);
                    if (succeeded)
                    {
                      SubResult1_51 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (Var_221 > Var_222);
                      if (succeeded)
                      {
                        SubResult1_51 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult1_51 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    if (succeeded)
                      CompareResult_6 = SubResult1_51;
                    else
                    {
                      MR_Word SubResult2_54;

                      succeeded = (ArgX2_52 < ArgY2_53);
                      if (succeeded)
                      {
                        SubResult2_54 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (ArgX2_52 > ArgY2_53);
                        if (succeeded)
                        {
                          SubResult2_54 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = MR_TRUE;
                          succeeded = !(succeeded);
                          if (succeeded)
                          {
                            SubResult2_54 = (MR_Integer) 0;
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                      if (succeeded)
                        CompareResult_6 = SubResult2_54;
                      else
                        hlds__pred_name____Compare____line_number_and_counter_0_0(&CompareResult_6, ArgX3_55, ArgY3_56);
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word ArgX1_57 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word ArgY1_58;
                  MR_Integer ArgX2_60 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  MR_Integer ArgY2_61;
                  MR_Word ArgX3_63 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                  MR_Word ArgY3_64;
                  MR_Word SubResult1_59;
                  MR_Integer Var_237;
                  MR_Integer Var_238;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4)));
                  if (succeeded)
                  {
                    ArgY1_58 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
                    ArgY2_61 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                    ArgY3_64 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
                    Var_237 = (MR_Integer) (ArgX1_57);
                    Var_238 = (MR_Integer) (ArgY1_58);
                    succeeded = (Var_237 < Var_238);
                    if (succeeded)
                    {
                      SubResult1_59 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (Var_237 > Var_238);
                      if (succeeded)
                      {
                        SubResult1_59 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult1_59 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    if (succeeded)
                      CompareResult_6 = SubResult1_59;
                    else
                    {
                      MR_Word SubResult2_62;

                      succeeded = (ArgX2_60 < ArgY2_61);
                      if (succeeded)
                      {
                        SubResult2_62 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (ArgX2_60 > ArgY2_61);
                        if (succeeded)
                        {
                          SubResult2_62 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = MR_TRUE;
                          succeeded = !(succeeded);
                          if (succeeded)
                          {
                            SubResult2_62 = (MR_Integer) 0;
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                      if (succeeded)
                        CompareResult_6 = SubResult2_62;
                      else
                        hlds__pred_name____Compare____line_number_and_counter_0_0(&CompareResult_6, ArgX3_63, ArgY3_64);
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word ArgX1_65 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word ArgY1_66;
                  MR_Integer ArgX2_68 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  MR_Integer ArgY2_69;
                  MR_Word ArgX3_71 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                  MR_Word ArgY3_72;
                  MR_Word SubResult1_67;
                  MR_Integer Var_239;
                  MR_Integer Var_240;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5)));
                  if (succeeded)
                  {
                    ArgY1_66 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
                    ArgY2_69 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                    ArgY3_72 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
                    Var_239 = (MR_Integer) (ArgX1_65);
                    Var_240 = (MR_Integer) (ArgY1_66);
                    succeeded = (Var_239 < Var_240);
                    if (succeeded)
                    {
                      SubResult1_67 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (Var_239 > Var_240);
                      if (succeeded)
                      {
                        SubResult1_67 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult1_67 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    if (succeeded)
                      CompareResult_6 = SubResult1_67;
                    else
                    {
                      MR_Word SubResult2_70;

                      succeeded = (ArgX2_68 < ArgY2_69);
                      if (succeeded)
                      {
                        SubResult2_70 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (ArgX2_68 > ArgY2_69);
                        if (succeeded)
                        {
                          SubResult2_70 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = MR_TRUE;
                          succeeded = !(succeeded);
                          if (succeeded)
                          {
                            SubResult2_70 = (MR_Integer) 0;
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                      if (succeeded)
                        CompareResult_6 = SubResult2_70;
                      else
                        hlds__pred_name____Compare____line_number_and_counter_0_0(&CompareResult_6, ArgX3_71, ArgY3_72);
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Word ArgX1_73 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word ArgY1_74;
                  MR_Integer ArgX2_76 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  MR_Integer ArgY2_77;
                  MR_Word SubResult1_75;
                  MR_Integer Var_219;
                  MR_Integer Var_220;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 6)));
                  if (succeeded)
                  {
                    ArgY1_74 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
                    ArgY2_77 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                    Var_219 = (MR_Integer) (ArgX1_73);
                    Var_220 = (MR_Integer) (ArgY1_74);
                    succeeded = (Var_219 < Var_220);
                    if (succeeded)
                    {
                      SubResult1_75 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (Var_219 > Var_220);
                      if (succeeded)
                      {
                        SubResult1_75 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult1_75 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    if (succeeded)
                      CompareResult_6 = SubResult1_75;
                    else
                    {
                      succeeded = (ArgX2_76 < ArgY2_77);
                      if (succeeded)
                        CompareResult_6 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (ArgX2_76 > ArgY2_77);
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
                  MR_Word ArgX1_78 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word ArgY1_79;
                  MR_Integer Var_229;
                  MR_Integer Var_230;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 7)));
                  if (succeeded)
                  {
                    ArgY1_79 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
                    Var_229 = (MR_Integer) (ArgX1_78);
                    Var_230 = (MR_Integer) (ArgY1_79);
                    succeeded = (Var_229 < Var_230);
                    if (succeeded)
                      CompareResult_6 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (Var_229 > Var_230);
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
                  MR_Word ArgX1_80 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word ArgY1_81;
                  MR_Integer ArgX2_83 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  MR_Integer ArgY2_84;
                  MR_Word ArgX3_86 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                  MR_Word ArgY3_87;
                  MR_Word SubResult1_82;
                  MR_Integer Var_209;
                  MR_Integer Var_210;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 8)));
                  if (succeeded)
                  {
                    ArgY1_81 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
                    ArgY2_84 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                    ArgY3_87 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
                    Var_209 = (MR_Integer) (ArgX1_80);
                    Var_210 = (MR_Integer) (ArgY1_81);
                    succeeded = (Var_209 < Var_210);
                    if (succeeded)
                    {
                      SubResult1_82 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (Var_209 > Var_210);
                      if (succeeded)
                      {
                        SubResult1_82 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult1_82 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    if (succeeded)
                      CompareResult_6 = SubResult1_82;
                    else
                    {
                      MR_Word SubResult2_85;

                      succeeded = (ArgX2_83 < ArgY2_84);
                      if (succeeded)
                      {
                        SubResult2_85 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (ArgX2_83 > ArgY2_84);
                        if (succeeded)
                        {
                          SubResult2_85 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = MR_TRUE;
                          succeeded = !(succeeded);
                          if (succeeded)
                          {
                            SubResult2_85 = (MR_Integer) 0;
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                      if (succeeded)
                        CompareResult_6 = SubResult2_85;
                      else
                        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_2[4]), &CompareResult_6, ((MR_Box) (ArgX3_86)), ((MR_Box) (ArgY3_87)));
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 9:
                {
                  MR_Word ArgX1_88 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word ArgY1_89;
                  MR_Integer ArgX2_91 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  MR_Integer ArgY2_92;
                  MR_Word SubResult1_90;
                  MR_Integer Var_225;
                  MR_Integer Var_226;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 9)));
                  if (succeeded)
                  {
                    ArgY1_89 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
                    ArgY2_92 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                    Var_225 = (MR_Integer) (ArgX1_88);
                    Var_226 = (MR_Integer) (ArgY1_89);
                    succeeded = (Var_225 < Var_226);
                    if (succeeded)
                    {
                      SubResult1_90 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (Var_225 > Var_226);
                      if (succeeded)
                      {
                        SubResult1_90 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult1_90 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    if (succeeded)
                      CompareResult_6 = SubResult1_90;
                    else
                    {
                      succeeded = (ArgX2_91 < ArgY2_92);
                      if (succeeded)
                        CompareResult_6 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (ArgX2_91 > ArgY2_92);
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
                  MR_Word ArgX1_93 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word ArgY1_94;
                  MR_Integer ArgX2_96 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  MR_Integer ArgY2_97;
                  MR_Word SubResult1_95;
                  MR_Integer Var_227;
                  MR_Integer Var_228;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 10)));
                  if (succeeded)
                  {
                    ArgY1_94 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
                    ArgY2_97 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                    Var_227 = (MR_Integer) (ArgX1_93);
                    Var_228 = (MR_Integer) (ArgY1_94);
                    succeeded = (Var_227 < Var_228);
                    if (succeeded)
                    {
                      SubResult1_95 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (Var_227 > Var_228);
                      if (succeeded)
                      {
                        SubResult1_95 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult1_95 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    if (succeeded)
                      CompareResult_6 = SubResult1_95;
                    else
                    {
                      succeeded = (ArgX2_96 < ArgY2_97);
                      if (succeeded)
                        CompareResult_6 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (ArgX2_96 > ArgY2_97);
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
                  MR_Word ArgX1_98 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word ArgY1_99;
                  MR_Integer ArgX2_101 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  MR_Integer ArgY2_102;
                  MR_Word ArgX3_104 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                  MR_Word ArgY3_105;
                  MR_Word SubResult1_100;
                  MR_Integer Var_235;
                  MR_Integer Var_236;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 11)));
                  if (succeeded)
                  {
                    ArgY1_99 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
                    ArgY2_102 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                    ArgY3_105 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
                    Var_235 = (MR_Integer) (ArgX1_98);
                    Var_236 = (MR_Integer) (ArgY1_99);
                    succeeded = (Var_235 < Var_236);
                    if (succeeded)
                    {
                      SubResult1_100 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (Var_235 > Var_236);
                      if (succeeded)
                      {
                        SubResult1_100 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult1_100 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    if (succeeded)
                      CompareResult_6 = SubResult1_100;
                    else
                    {
                      MR_Word SubResult2_103;

                      succeeded = (ArgX2_101 < ArgY2_102);
                      if (succeeded)
                      {
                        SubResult2_103 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (ArgX2_101 > ArgY2_102);
                        if (succeeded)
                        {
                          SubResult2_103 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = MR_TRUE;
                          succeeded = !(succeeded);
                          if (succeeded)
                          {
                            SubResult2_103 = (MR_Integer) 0;
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                      if (succeeded)
                        CompareResult_6 = SubResult2_103;
                      else
                        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_2[4]), &CompareResult_6, ((MR_Box) (ArgX3_104)), ((MR_Box) (ArgY3_105)));
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 12:
                {
                  MR_Word ArgX1_106 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  MR_Word ArgY1_107;
                  MR_Word ArgX2_109 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  MR_Word ArgY2_110;
                  MR_Word ArgX3_112 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                  MR_Word ArgY3_113;
                  MR_Word SubResult1_108;
                  MR_Word TypeInfo_183_183;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 12)));
                  if (succeeded)
                  {
                    ArgY1_107 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                    ArgY2_110 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                    ArgY3_113 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
                    TypeInfo_183_183 = (MR_Word) (&hlds__pred_name_scalar_common_2[5]);
                    mercury__builtin__compare_3_p_0(TypeInfo_183_183, &SubResult1_108, ((MR_Box) (ArgX1_106)), ((MR_Box) (ArgY1_107)));
                    succeeded = (SubResult1_108 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_108;
                    else
                    {
                      MR_Word SubResult2_111;

                      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_2[6]), &SubResult2_111, ((MR_Box) (ArgX2_109)), ((MR_Box) (ArgY2_110)));
                      succeeded = (SubResult2_111 != (MR_Integer) 0);
                      if (succeeded)
                        CompareResult_6 = SubResult2_111;
                      else
                        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_2[7]), &CompareResult_6, ((MR_Box) (ArgX3_112)), ((MR_Box) (ArgY3_113)));
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 13:
                {
                  MR_Word ArgX1_114 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word ArgY1_115;
                  MR_Integer Var_215;
                  MR_Integer Var_216;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 13)));
                  if (succeeded)
                  {
                    ArgY1_115 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
                    Var_215 = (MR_Integer) (ArgX1_114);
                    Var_216 = (MR_Integer) (ArgY1_115);
                    succeeded = (Var_215 < Var_216);
                    if (succeeded)
                      CompareResult_6 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (Var_215 > Var_216);
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
                  MR_Word ArgX1_116 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word ArgY1_117;
                  MR_Integer ArgX2_119 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  MR_Integer ArgY2_120;
                  MR_Word SubResult1_118;
                  MR_Integer Var_223;
                  MR_Integer Var_224;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 14)));
                  if (succeeded)
                  {
                    ArgY1_117 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
                    ArgY2_120 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                    Var_223 = (MR_Integer) (ArgX1_116);
                    Var_224 = (MR_Integer) (ArgY1_117);
                    succeeded = (Var_223 < Var_224);
                    if (succeeded)
                    {
                      SubResult1_118 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (Var_223 > Var_224);
                      if (succeeded)
                      {
                        SubResult1_118 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult1_118 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    if (succeeded)
                      CompareResult_6 = SubResult1_118;
                    else
                    {
                      succeeded = (ArgX2_119 < ArgY2_120);
                      if (succeeded)
                        CompareResult_6 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (ArgX2_119 > ArgY2_120);
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
                  MR_Word ArgX1_121 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) >> 3)) & (MR_Integer) 1);
                  MR_Word ArgY1_122;
                  MR_Word ArgX2_124 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 7);
                  MR_Word ArgY2_125;
                  MR_Integer ArgX3_127 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  MR_Integer ArgY3_128;
                  MR_Integer ArgX4_130 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                  MR_Integer ArgY4_131;
                  MR_Integer ArgX5_133 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4))));
                  MR_Integer ArgY5_134;
                  MR_Word SubResult1_123;
                  MR_Integer Var_231;
                  MR_Integer Var_232;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 15)));
                  if (succeeded)
                  {
                    ArgY1_122 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))) >> 3)) & (MR_Integer) 1);
                    ArgY2_125 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 7);
                    ArgY3_128 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                    ArgY4_131 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
                    ArgY5_134 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 4))));
                    Var_231 = (MR_Integer) (ArgX1_121);
                    Var_232 = (MR_Integer) (ArgY1_122);
                    succeeded = (Var_231 < Var_232);
                    if (succeeded)
                    {
                      SubResult1_123 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (Var_231 > Var_232);
                      if (succeeded)
                      {
                        SubResult1_123 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult1_123 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    if (succeeded)
                      CompareResult_6 = SubResult1_123;
                    else
                    {
                      MR_Word SubResult2_126;
                      MR_Integer Var_233 = (MR_Integer) (ArgX2_124);
                      MR_Integer Var_234 = (MR_Integer) (ArgY2_125);

                      succeeded = (Var_233 < Var_234);
                      if (succeeded)
                      {
                        SubResult2_126 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (Var_233 > Var_234);
                        if (succeeded)
                        {
                          SubResult2_126 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = MR_TRUE;
                          succeeded = !(succeeded);
                          if (succeeded)
                          {
                            SubResult2_126 = (MR_Integer) 0;
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                      if (succeeded)
                        CompareResult_6 = SubResult2_126;
                      else
                      {
                        MR_Word SubResult3_129;

                        succeeded = (ArgX3_127 < ArgY3_128);
                        if (succeeded)
                        {
                          SubResult3_129 = (MR_Integer) 1;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = (ArgX3_127 > ArgY3_128);
                          if (succeeded)
                          {
                            SubResult3_129 = (MR_Integer) 2;
                            succeeded = MR_TRUE;
                          }
                          else
                          {
                            succeeded = MR_TRUE;
                            succeeded = !(succeeded);
                            if (succeeded)
                            {
                              SubResult3_129 = (MR_Integer) 0;
                              succeeded = MR_TRUE;
                            }
                          }
                        }
                        if (succeeded)
                          CompareResult_6 = SubResult3_129;
                        else
                        {
                          MR_Word SubResult4_132;

                          succeeded = (ArgX4_130 < ArgY4_131);
                          if (succeeded)
                          {
                            SubResult4_132 = (MR_Integer) 1;
                            succeeded = MR_TRUE;
                          }
                          else
                          {
                            succeeded = (ArgX4_130 > ArgY4_131);
                            if (succeeded)
                            {
                              SubResult4_132 = (MR_Integer) 2;
                              succeeded = MR_TRUE;
                            }
                            else
                            {
                              succeeded = MR_TRUE;
                              succeeded = !(succeeded);
                              if (succeeded)
                              {
                                SubResult4_132 = (MR_Integer) 0;
                                succeeded = MR_TRUE;
                              }
                            }
                          }
                          if (succeeded)
                            CompareResult_6 = SubResult4_132;
                          else
                          {
                            succeeded = (ArgX5_133 < ArgY5_134);
                            if (succeeded)
                              CompareResult_6 = (MR_Integer) 1;
                            else
                            {
                              succeeded = (ArgX5_133 > ArgY5_134);
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
                  MR_Word ArgX1_135 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word ArgY1_136;
                  MR_Integer ArgX2_138 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  MR_Integer ArgY2_139;
                  MR_Word ArgX3_141 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                  MR_Word ArgY3_142;
                  MR_Word SubResult1_137;
                  MR_Integer Var_241;
                  MR_Integer Var_242;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 16)));
                  if (succeeded)
                  {
                    ArgY1_136 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
                    ArgY2_139 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                    ArgY3_142 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
                    Var_241 = (MR_Integer) (ArgX1_135);
                    Var_242 = (MR_Integer) (ArgY1_136);
                    succeeded = (Var_241 < Var_242);
                    if (succeeded)
                    {
                      SubResult1_137 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (Var_241 > Var_242);
                      if (succeeded)
                      {
                        SubResult1_137 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult1_137 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    if (succeeded)
                      CompareResult_6 = SubResult1_137;
                    else
                    {
                      MR_Word SubResult2_140;

                      succeeded = (ArgX2_138 < ArgY2_139);
                      if (succeeded)
                      {
                        SubResult2_140 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (ArgX2_138 > ArgY2_139);
                        if (succeeded)
                        {
                          SubResult2_140 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = MR_TRUE;
                          succeeded = !(succeeded);
                          if (succeeded)
                          {
                            SubResult2_140 = (MR_Integer) 0;
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                      if (succeeded)
                        CompareResult_6 = SubResult2_140;
                      else
                        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_2[4]), &CompareResult_6, ((MR_Box) (ArgX3_141)), ((MR_Box) (ArgY3_142)));
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
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
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
  MR_Integer CastX_107 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_108 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_107 == CastY_108);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Word ArgY1_4;
          MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
          MR_Integer ArgY2_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
            ArgY2_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
            succeeded = (ArgX1_3 == ArgY1_4);
            if (succeeded)
              succeeded = (ArgX2_5 == ArgY2_6);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Word ArgY1_8;
          MR_Integer ArgX2_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
          MR_Integer ArgY2_10;
          MR_Integer ArgX3_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2))));
          MR_Integer ArgY3_12;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
            ArgY2_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
            ArgY3_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
            succeeded = (ArgX1_7 == ArgY1_8);
            if (succeeded)
            {
              succeeded = (ArgX2_9 == ArgY2_10);
              if (succeeded)
                succeeded = (ArgX3_11 == ArgY3_12);
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgX1_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Word ArgY1_14;
          MR_Word ArgX2_15 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1))));
          MR_Word ArgY2_16;
          MR_Word ArgX3_17 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 2))) >> 1)) & (MR_Integer) 1);
          MR_Word ArgY3_18;
          MR_Word ArgX4_19 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 2))) & (MR_Integer) 1);
          MR_Word ArgY4_20;
          MR_Integer ArgX5_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 3))));
          MR_Integer ArgY5_22;
          MR_Integer Var_116;
          MR_Integer Var_117;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
            ArgY2_16 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
            ArgY3_18 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2))) >> 1)) & (MR_Integer) 1);
            ArgY4_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 1);
            ArgY5_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3))));
            succeeded = (ArgX1_13 == ArgY1_14);
            if (succeeded)
            {
              succeeded = (ArgX3_17 == ArgY3_18);
              if (succeeded)
              {
                succeeded = (ArgX4_19 == ArgY4_20);
                if (succeeded)
                {
                  succeeded = (ArgX5_21 == ArgY5_22);
                  if (succeeded)
                  {
                    Var_116 = (MR_Integer) (ArgX2_15);
                    Var_117 = (MR_Integer) (ArgY2_16);
                    succeeded = (Var_116 == Var_117);
                  }
                }
              }
            }
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgX1_23 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word ArgY1_24;
              MR_Word ArgX2_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Word ArgY2_26;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_24 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                ArgY2_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                succeeded = (ArgX1_23 == ArgY1_24);
                if (succeeded)
                  succeeded = hlds__pred_name____Unify____line_number_and_counter_0_0(ArgX2_25, ArgY2_26);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_27 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word ArgY1_28;
              MR_Word ArgX2_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Word ArgY2_30;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_28 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                ArgY2_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                succeeded = (ArgX1_27 == ArgY1_28);
                if (succeeded)
                  succeeded = hlds__pred_name____Unify____line_number_and_counter_0_0(ArgX2_29, ArgY2_30);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgX1_31 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word ArgY1_32;
              MR_Word ArgX2_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Word ArgY2_34;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
              if (succeeded)
              {
                ArgY1_32 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                ArgY2_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                succeeded = (ArgX1_31 == ArgY1_32);
                if (succeeded)
                  succeeded = hlds__pred_name____Unify____line_number_and_counter_0_0(ArgX2_33, ArgY2_34);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ArgX1_35 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word ArgY1_36;
              MR_Integer ArgX2_37 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Integer ArgY2_38;
              MR_Word ArgX3_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
              MR_Word ArgY3_40;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
              if (succeeded)
              {
                ArgY1_36 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                ArgY2_38 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                ArgY3_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                succeeded = (ArgX1_35 == ArgY1_36);
                if (succeeded)
                {
                  succeeded = (ArgX2_37 == ArgY2_38);
                  if (succeeded)
                    succeeded = hlds__pred_name____Unify____line_number_and_counter_0_0(ArgX3_39, ArgY3_40);
                }
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ArgX1_41 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word ArgY1_42;
              MR_Integer ArgX2_43 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Integer ArgY2_44;
              MR_Word ArgX3_45 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
              MR_Word ArgY3_46;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4)));
              if (succeeded)
              {
                ArgY1_42 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                ArgY2_44 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                ArgY3_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                succeeded = (ArgX1_41 == ArgY1_42);
                if (succeeded)
                {
                  succeeded = (ArgX2_43 == ArgY2_44);
                  if (succeeded)
                    succeeded = hlds__pred_name____Unify____line_number_and_counter_0_0(ArgX3_45, ArgY3_46);
                }
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word ArgX1_47 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word ArgY1_48;
              MR_Integer ArgX2_49 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Integer ArgY2_50;
              MR_Word ArgX3_51 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
              MR_Word ArgY3_52;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5)));
              if (succeeded)
              {
                ArgY1_48 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                ArgY2_50 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                ArgY3_52 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                succeeded = (ArgX1_47 == ArgY1_48);
                if (succeeded)
                {
                  succeeded = (ArgX2_49 == ArgY2_50);
                  if (succeeded)
                    succeeded = hlds__pred_name____Unify____line_number_and_counter_0_0(ArgX3_51, ArgY3_52);
                }
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word ArgX1_53 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word ArgY1_54;
              MR_Integer ArgX2_55 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Integer ArgY2_56;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                ArgY1_54 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                ArgY2_56 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                succeeded = (ArgX1_53 == ArgY1_54);
                if (succeeded)
                  succeeded = (ArgX2_55 == ArgY2_56);
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ArgX1_57 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word ArgY1_58;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 7)));
              if (succeeded)
              {
                ArgY1_58 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                succeeded = (ArgX1_57 == ArgY1_58);
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word TypeInfo_110_110;
              MR_Word ArgX1_59 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word ArgY1_60;
              MR_Integer ArgX2_61 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Integer ArgY2_62;
              MR_Word ArgX3_63 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
              MR_Word ArgY3_64;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 8)));
              if (succeeded)
              {
                ArgY1_60 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                ArgY2_62 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                ArgY3_64 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                succeeded = (ArgX1_59 == ArgY1_60);
                if (succeeded)
                {
                  succeeded = (ArgX2_61 == ArgY2_62);
                  if (succeeded)
                  {
                    TypeInfo_110_110 = (MR_Word) (&hlds__pred_name_scalar_common_2[4]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_110_110, ((MR_Box) (ArgX3_63)), ((MR_Box) (ArgY3_64)));
                  }
                }
              }
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word ArgX1_65 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word ArgY1_66;
              MR_Integer ArgX2_67 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Integer ArgY2_68;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 9)));
              if (succeeded)
              {
                ArgY1_66 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                ArgY2_68 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                succeeded = (ArgX1_65 == ArgY1_66);
                if (succeeded)
                  succeeded = (ArgX2_67 == ArgY2_68);
              }
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word ArgX1_69 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word ArgY1_70;
              MR_Integer ArgX2_71 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Integer ArgY2_72;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 10)));
              if (succeeded)
              {
                ArgY1_70 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                ArgY2_72 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                succeeded = (ArgX1_69 == ArgY1_70);
                if (succeeded)
                  succeeded = (ArgX2_71 == ArgY2_72);
              }
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word TypeInfo_114_114;
              MR_Word ArgX1_73 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word ArgY1_74;
              MR_Integer ArgX2_75 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Integer ArgY2_76;
              MR_Word ArgX3_77 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
              MR_Word ArgY3_78;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 11)));
              if (succeeded)
              {
                ArgY1_74 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                ArgY2_76 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                ArgY3_78 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                succeeded = (ArgX1_73 == ArgY1_74);
                if (succeeded)
                {
                  succeeded = (ArgX2_75 == ArgY2_76);
                  if (succeeded)
                  {
                    TypeInfo_114_114 = (MR_Word) (&hlds__pred_name_scalar_common_2[4]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_114_114, ((MR_Box) (ArgX3_77)), ((MR_Box) (ArgY3_78)));
                  }
                }
              }
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word TypeInfo_111_111;
              MR_Word TypeInfo_112_112;
              MR_Word TypeInfo_113_113;
              MR_Word ArgX1_79 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_80;
              MR_Word ArgX2_81 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Word ArgY2_82;
              MR_Word ArgX3_83 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
              MR_Word ArgY3_84;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 12)));
              if (succeeded)
              {
                ArgY1_80 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_82 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                ArgY3_84 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                TypeInfo_111_111 = (MR_Word) (&hlds__pred_name_scalar_common_2[5]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_111_111, ((MR_Box) (ArgX1_79)), ((MR_Box) (ArgY1_80)));
                if (succeeded)
                {
                  TypeInfo_112_112 = (MR_Word) (&hlds__pred_name_scalar_common_2[6]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_112_112, ((MR_Box) (ArgX2_81)), ((MR_Box) (ArgY2_82)));
                  if (succeeded)
                  {
                    TypeInfo_113_113 = (MR_Word) (&hlds__pred_name_scalar_common_2[7]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_113_113, ((MR_Box) (ArgX3_83)), ((MR_Box) (ArgY3_84)));
                  }
                }
              }
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word ArgX1_85 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word ArgY1_86;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 13)));
              if (succeeded)
              {
                ArgY1_86 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                succeeded = (ArgX1_85 == ArgY1_86);
              }
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Word ArgX1_87 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word ArgY1_88;
              MR_Integer ArgX2_89 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Integer ArgY2_90;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 14)));
              if (succeeded)
              {
                ArgY1_88 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                ArgY2_90 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                succeeded = (ArgX1_87 == ArgY1_88);
                if (succeeded)
                  succeeded = (ArgX2_89 == ArgY2_90);
              }
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Word ArgX1_91 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) >> 3)) & (MR_Integer) 1);
              MR_Word ArgY1_92;
              MR_Word ArgX2_93 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 7);
              MR_Word ArgY2_94;
              MR_Integer ArgX3_95 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Integer ArgY3_96;
              MR_Integer ArgX4_97 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
              MR_Integer ArgY4_98;
              MR_Integer ArgX5_99 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 4))));
              MR_Integer ArgY5_100;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 15)));
              if (succeeded)
              {
                ArgY1_92 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) >> 3)) & (MR_Integer) 1);
                ArgY2_94 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 7);
                ArgY3_96 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                ArgY4_98 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                ArgY5_100 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4))));
                succeeded = (ArgX1_91 == ArgY1_92);
                if (succeeded)
                {
                  succeeded = (ArgX2_93 == ArgY2_94);
                  if (succeeded)
                  {
                    succeeded = (ArgX3_95 == ArgY3_96);
                    if (succeeded)
                    {
                      succeeded = (ArgX4_97 == ArgY4_98);
                      if (succeeded)
                        succeeded = (ArgX5_99 == ArgY5_100);
                    }
                  }
                }
              }
            }
            break;
          case (MR_Integer) 16:
            {
              MR_Word TypeInfo_115_115;
              MR_Word ArgX1_101 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word ArgY1_102;
              MR_Integer ArgX2_103 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Integer ArgY2_104;
              MR_Word ArgX3_105 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
              MR_Word ArgY3_106;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 16)));
              if (succeeded)
              {
                ArgY1_102 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                ArgY2_104 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                ArgY3_106 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                succeeded = (ArgX1_101 == ArgY1_102);
                if (succeeded)
                {
                  succeeded = (ArgX2_103 == ArgY2_104);
                  if (succeeded)
                  {
                    TypeInfo_115_115 = (MR_Word) (&hlds__pred_name_scalar_common_2[4]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_115_115, ((MR_Box) (ArgX3_105)), ((MR_Box) (ArgY3_106)));
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
  MR_Integer CastX_695 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_696 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_695 == CastY_696);
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
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 4:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 5:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 6:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 7:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 8:
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
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 4:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 5:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 6:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 7:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 8:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_746 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Var_747 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_748 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);

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
                MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
                MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
                MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 2))));
                MR_Word SubResult1_6;
                MR_Integer Var_757 = (MR_Integer) (Var_748);
                MR_Integer Var_758 = (MR_Integer) (ArgY1_5);

                succeeded = (Var_757 < Var_758);
                if (succeeded)
                {
                  SubResult1_6 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = (Var_757 > Var_758);
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

                  mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult2_9, Var_747, ArgY2_8);
                  succeeded = (SubResult2_9 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult2_9;
                  else
                  {
                    MR_Integer Var_759 = (MR_Integer) (Var_746);
                    MR_Integer Var_760 = (MR_Integer) (ArgY3_11);

                    succeeded = (Var_759 < Var_760);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (Var_759 > Var_760);
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
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 3:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 4:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 5:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 6:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 7:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 8:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_739 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_740 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 3);

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
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 2:
              {
                MR_Word ArgY1_77 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 3);
                MR_Word ArgY2_80 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 1))));
                MR_Word SubResult1_78;
                MR_Integer Var_753 = (MR_Integer) (Var_740);
                MR_Integer Var_754 = (MR_Integer) (ArgY1_77);

                succeeded = (Var_753 < Var_754);
                if (succeeded)
                {
                  SubResult1_78 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = (Var_753 > Var_754);
                  if (succeeded)
                  {
                    SubResult1_78 = (MR_Integer) 2;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = MR_TRUE;
                    succeeded = !(succeeded);
                    if (succeeded)
                    {
                      SubResult1_78 = (MR_Integer) 0;
                      succeeded = MR_TRUE;
                    }
                  }
                }
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_78;
                else
                  parse_tree__prog_data____Compare____type_ctor_0_0(HeadVar__1_1, Var_739, ArgY2_80);
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 3:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 4:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 5:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 6:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 7:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 8:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_729 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
              MR_Word Var_730 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

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
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word ArgY1_134 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                        MR_Word ArgY2_137 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                        MR_Word SubResult1_135;

                        mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult1_135, Var_730, ArgY1_134);
                        succeeded = (SubResult1_135 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult1_135;
                        else
                          hlds__pred_name____Compare____instance_method_constraints_0_0(HeadVar__1_1, Var_729, ArgY2_137);
                      }
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 5:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 6:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 7:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 8:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_725 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
              MR_Word Var_726 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

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
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word ArgY1_191 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                        MR_Word ArgY2_194 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                        MR_Word SubResult1_192;

                        parse_tree__prog_data____Compare____class_id_0_0(&SubResult1_192, Var_726, ArgY1_191);
                        succeeded = (SubResult1_192 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult1_192;
                        else
                          parse_tree__prog_data____Compare____pf_sym_name_arity_0_0(HeadVar__1_1, Var_725, ArgY2_194);
                      }
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 5:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 6:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 7:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 8:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer Var_727 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
              MR_Integer Var_728 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

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
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Integer ArgY1_248 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                        MR_Integer ArgY2_251 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                        MR_Word SubResult1_249;

                        succeeded = (Var_728 < ArgY1_248);
                        if (succeeded)
                        {
                          SubResult1_249 = (MR_Integer) 1;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = (Var_728 > ArgY1_248);
                          if (succeeded)
                          {
                            SubResult1_249 = (MR_Integer) 2;
                            succeeded = MR_TRUE;
                          }
                          else
                          {
                            succeeded = MR_TRUE;
                            succeeded = !(succeeded);
                            if (succeeded)
                            {
                              SubResult1_249 = (MR_Integer) 0;
                              succeeded = MR_TRUE;
                            }
                          }
                        }
                        if (succeeded)
                          *HeadVar__1_1 = SubResult1_249;
                        else
                        {
                          succeeded = (Var_727 < ArgY2_251);
                          if (succeeded)
                            *HeadVar__1_1 = (MR_Integer) 1;
                          else
                          {
                            succeeded = (Var_727 > ArgY2_251);
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
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 5:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 6:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 7:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 8:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Integer Var_723 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
              MR_String Var_724 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

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
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      {
                        MR_String ArgY1_305 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                        MR_Integer ArgY2_308 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                        MR_Word SubResult1_306;

                        mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_306, Var_724, ArgY1_305);
                        succeeded = (SubResult1_306 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult1_306;
                        else
                        {
                          succeeded = (Var_723 < ArgY2_308);
                          if (succeeded)
                            *HeadVar__1_1 = (MR_Integer) 1;
                          else
                          {
                            succeeded = (Var_723 > ArgY2_308);
                            if (succeeded)
                              *HeadVar__1_1 = (MR_Integer) 2;
                            else
                              *HeadVar__1_1 = (MR_Integer) 0;
                          }
                        }
                      }
                      break;
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 5:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 6:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 7:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 8:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Integer Var_731 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
              MR_Integer Var_732 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
              MR_String Var_733 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

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
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 4:
                      {
                        MR_String ArgY1_368 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                        MR_Integer ArgY2_371 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                        MR_Integer ArgY3_374 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
                        MR_Word SubResult1_369;

                        mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_369, Var_733, ArgY1_368);
                        succeeded = (SubResult1_369 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult1_369;
                        else
                        {
                          MR_Word SubResult2_372;

                          succeeded = (Var_732 < ArgY2_371);
                          if (succeeded)
                          {
                            SubResult2_372 = (MR_Integer) 1;
                            succeeded = MR_TRUE;
                          }
                          else
                          {
                            succeeded = (Var_732 > ArgY2_371);
                            if (succeeded)
                            {
                              SubResult2_372 = (MR_Integer) 2;
                              succeeded = MR_TRUE;
                            }
                            else
                            {
                              succeeded = MR_TRUE;
                              succeeded = !(succeeded);
                              if (succeeded)
                              {
                                SubResult2_372 = (MR_Integer) 0;
                                succeeded = MR_TRUE;
                              }
                            }
                          }
                          if (succeeded)
                            *HeadVar__1_1 = SubResult2_372;
                          else
                          {
                            succeeded = (Var_731 < ArgY3_374);
                            if (succeeded)
                              *HeadVar__1_1 = (MR_Integer) 1;
                            else
                            {
                              succeeded = (Var_731 > ArgY3_374);
                              if (succeeded)
                                *HeadVar__1_1 = (MR_Integer) 2;
                              else
                                *HeadVar__1_1 = (MR_Integer) 0;
                            }
                          }
                        }
                      }
                      break;
                    case (MR_Integer) 5:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 6:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 7:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 8:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Var_737 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 3);
              MR_Word Var_738 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

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
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 5:
                      {
                        MR_Word ArgY1_434 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                        MR_Word ArgY2_437 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))) & (MR_Integer) 3);
                        MR_Word SubResult1_435;

                        parse_tree__prog_data____Compare____type_ctor_0_0(&SubResult1_435, Var_738, ArgY1_434);
                        succeeded = (SubResult1_435 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult1_435;
                        else
                        {
                          MR_Integer Var_751 = (MR_Integer) (Var_737);
                          MR_Integer Var_752 = (MR_Integer) (ArgY2_437);

                          succeeded = (Var_751 < Var_752);
                          if (succeeded)
                            *HeadVar__1_1 = (MR_Integer) 1;
                          else
                          {
                            succeeded = (Var_751 > Var_752);
                            if (succeeded)
                              *HeadVar__1_1 = (MR_Integer) 2;
                            else
                              *HeadVar__1_1 = (MR_Integer) 0;
                          }
                        }
                      }
                      break;
                    case (MR_Integer) 6:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 7:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 8:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Var_741 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 1);
              MR_Word Var_742 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

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
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 5:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 6:
                      {
                        MR_Word ArgY1_491 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                        MR_Word ArgY2_494 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))) & (MR_Integer) 1);
                        MR_Word SubResult1_492;

                        parse_tree__prog_data____Compare____pf_sym_name_arity_0_0(&SubResult1_492, Var_742, ArgY1_491);
                        succeeded = (SubResult1_492 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult1_492;
                        else
                        {
                          MR_Integer Var_755 = (MR_Integer) (Var_741);
                          MR_Integer Var_756 = (MR_Integer) (ArgY2_494);

                          succeeded = (Var_755 < Var_756);
                          if (succeeded)
                            *HeadVar__1_1 = (MR_Integer) 1;
                          else
                          {
                            succeeded = (Var_755 > Var_756);
                            if (succeeded)
                              *HeadVar__1_1 = (MR_Integer) 2;
                            else
                              *HeadVar__1_1 = (MR_Integer) 0;
                          }
                        }
                      }
                      break;
                    case (MR_Integer) 7:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 8:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Var_734 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))) & (MR_Integer) 15);
              MR_String Var_735 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
              MR_Word Var_736 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

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
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 5:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 6:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 7:
                      {
                        MR_Word ArgY1_557 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                        MR_String ArgY2_560 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                        MR_Word ArgY3_563 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))) & (MR_Integer) 15);
                        MR_Word SubResult1_558;

                        mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult1_558, Var_736, ArgY1_557);
                        succeeded = (SubResult1_558 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult1_558;
                        else
                        {
                          MR_Word SubResult2_561;

                          mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult2_561, Var_735, ArgY2_560);
                          succeeded = (SubResult2_561 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult2_561;
                          else
                          {
                            MR_Integer Var_749 = (MR_Integer) (Var_734);
                            MR_Integer Var_750 = (MR_Integer) (ArgY3_563);

                            succeeded = (Var_749 < Var_750);
                            if (succeeded)
                              *HeadVar__1_1 = (MR_Integer) 1;
                            else
                            {
                              succeeded = (Var_749 > Var_750);
                              if (succeeded)
                                *HeadVar__1_1 = (MR_Integer) 2;
                              else
                                *HeadVar__1_1 = (MR_Integer) 0;
                            }
                          }
                        }
                      }
                      break;
                    case (MR_Integer) 8:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word Var_743 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
              MR_Word Var_744 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
              MR_Word Var_745 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

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
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 5:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 6:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 7:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 8:
                      {
                        MR_Word ArgY1_688 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                        MR_Word ArgY2_691 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                        MR_Word ArgY3_694 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
                        MR_Word SubResult1_689;

                        hlds__pred_name____Compare____pred_transformation_0_0(&SubResult1_689, Var_745, ArgY1_688);
                        succeeded = (SubResult1_689 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult1_689;
                        else
                        {
                          MR_Word SubResult2_692;

                          hlds__pred_name____Compare____pred_origin_0_0(&SubResult2_692, Var_744, ArgY2_691);
                          succeeded = (SubResult2_692 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult2_692;
                          else
                            hlds__hlds_pred____Compare____pred_id_0_0(HeadVar__1_1, Var_743, ArgY3_694);
                        }
                      }
                      break;
                  }
                  break;
              }
            }
            break;
        }
        break;
    }
}

void MR_CALL 
hlds__pred_name____Compare____pred_transformation_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_64 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_65 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_64 == CastY_65);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Integer IndexX_4;
    MR_Integer IndexY_5;

    hlds__pred_name____Index____pred_transformation_0_0(HeadVar__2_2, &IndexX_4);
    hlds__pred_name____Index____pred_transformation_0_0(HeadVar__3_3, &IndexY_5);
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
            switch (MR_unmkbody(HeadVar__2_2)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  CompareResult_6 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 1:
                {
                  CompareResult_6 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 2:
                {
                  CompareResult_6 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 3:
                {
                  CompareResult_6 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 4:
                {
                  CompareResult_6 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 5:
                {
                  CompareResult_6 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer ArgX1_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              MR_Integer ArgY1_8;

              succeeded = ((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1);
              if (succeeded)
              {
                ArgY1_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
                succeeded = (ArgX1_7 < ArgY1_8);
                if (succeeded)
                  CompareResult_6 = (MR_Integer) 1;
                else
                {
                  succeeded = (ArgX1_7 > ArgY1_8);
                  if (succeeded)
                    CompareResult_6 = (MR_Integer) 2;
                  else
                    CompareResult_6 = (MR_Integer) 0;
                }
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer ArgX1_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              MR_Integer ArgY1_10;

              succeeded = ((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 2);
              if (succeeded)
              {
                ArgY1_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));
                succeeded = (ArgX1_9 < ArgY1_10);
                if (succeeded)
                  CompareResult_6 = (MR_Integer) 1;
                else
                {
                  succeeded = (ArgX1_9 > ArgY1_10);
                  if (succeeded)
                    CompareResult_6 = (MR_Integer) 2;
                  else
                    CompareResult_6 = (MR_Integer) 0;
                }
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word TypeInfo_68_68;
                  MR_Word ArgX1_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  MR_Word ArgY1_12;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (succeeded)
                  {
                    ArgY1_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                    TypeInfo_68_68 = (MR_Word) (&hlds__pred_name_scalar_common_2[3]);
                    mercury__builtin__compare_3_p_0(TypeInfo_68_68, &CompareResult_6, ((MR_Box) (ArgX1_11)), ((MR_Box) (ArgY1_12)));
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer ArgX1_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  MR_Integer ArgY1_14;
                  MR_Word ArgX2_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  MR_Word ArgY2_17;
                  MR_Word SubResult1_15;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1)));
                  if (succeeded)
                  {
                    ArgY1_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                    ArgY2_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                    succeeded = (ArgX1_13 < ArgY1_14);
                    if (succeeded)
                    {
                      SubResult1_15 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (ArgX1_13 > ArgY1_14);
                      if (succeeded)
                      {
                        SubResult1_15 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult1_15 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    if (succeeded)
                      CompareResult_6 = SubResult1_15;
                    else
                      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_2[4]), &CompareResult_6, ((MR_Box) (ArgX2_16)), ((MR_Box) (ArgY2_17)));
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Integer ArgX1_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  MR_Integer ArgY1_19;
                  MR_Word ArgX2_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  MR_Word ArgY2_22;
                  MR_Word SubResult1_20;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2)));
                  if (succeeded)
                  {
                    ArgY1_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                    ArgY2_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
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
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult1_20 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    if (succeeded)
                      CompareResult_6 = SubResult1_20;
                    else
                      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_2[4]), &CompareResult_6, ((MR_Box) (ArgX2_21)), ((MR_Box) (ArgY2_22)));
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Integer ArgX1_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  MR_Integer ArgY1_24;
                  MR_Integer ArgX2_26 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  MR_Integer ArgY2_27;
                  MR_Integer ArgX3_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                  MR_Integer ArgY3_30;
                  MR_Word SubResult1_25;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3)));
                  if (succeeded)
                  {
                    ArgY1_24 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                    ArgY2_27 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                    ArgY3_30 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
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
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult1_25 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    if (succeeded)
                      CompareResult_6 = SubResult1_25;
                    else
                    {
                      MR_Word SubResult2_28;

                      succeeded = (ArgX2_26 < ArgY2_27);
                      if (succeeded)
                      {
                        SubResult2_28 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (ArgX2_26 > ArgY2_27);
                        if (succeeded)
                        {
                          SubResult2_28 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = MR_TRUE;
                          succeeded = !(succeeded);
                          if (succeeded)
                          {
                            SubResult2_28 = (MR_Integer) 0;
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                      if (succeeded)
                        CompareResult_6 = SubResult2_28;
                      else
                      {
                        succeeded = (ArgX3_29 < ArgY3_30);
                        if (succeeded)
                          CompareResult_6 = (MR_Integer) 1;
                        else
                        {
                          succeeded = (ArgX3_29 > ArgY3_30);
                          if (succeeded)
                            CompareResult_6 = (MR_Integer) 2;
                          else
                            CompareResult_6 = (MR_Integer) 0;
                        }
                      }
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Integer ArgX1_31 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  MR_Integer ArgY1_32;
                  MR_Integer ArgX2_34 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  MR_Integer ArgY2_35;
                  MR_Integer ArgX3_37 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                  MR_Integer ArgY3_38;
                  MR_Word SubResult1_33;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4)));
                  if (succeeded)
                  {
                    ArgY1_32 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                    ArgY2_35 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                    ArgY3_38 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
                    succeeded = (ArgX1_31 < ArgY1_32);
                    if (succeeded)
                    {
                      SubResult1_33 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (ArgX1_31 > ArgY1_32);
                      if (succeeded)
                      {
                        SubResult1_33 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult1_33 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    if (succeeded)
                      CompareResult_6 = SubResult1_33;
                    else
                    {
                      MR_Word SubResult2_36;

                      succeeded = (ArgX2_34 < ArgY2_35);
                      if (succeeded)
                      {
                        SubResult2_36 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (ArgX2_34 > ArgY2_35);
                        if (succeeded)
                        {
                          SubResult2_36 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = MR_TRUE;
                          succeeded = !(succeeded);
                          if (succeeded)
                          {
                            SubResult2_36 = (MR_Integer) 0;
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                      if (succeeded)
                        CompareResult_6 = SubResult2_36;
                      else
                      {
                        succeeded = (ArgX3_37 < ArgY3_38);
                        if (succeeded)
                          CompareResult_6 = (MR_Integer) 1;
                        else
                        {
                          succeeded = (ArgX3_37 > ArgY3_38);
                          if (succeeded)
                            CompareResult_6 = (MR_Integer) 2;
                          else
                            CompareResult_6 = (MR_Integer) 0;
                        }
                      }
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Integer ArgX1_39 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  MR_Integer ArgY1_40;
                  MR_Integer ArgX2_42 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  MR_Integer ArgY2_43;
                  MR_Integer ArgX3_45 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                  MR_Integer ArgY3_46;
                  MR_Word SubResult1_41;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5)));
                  if (succeeded)
                  {
                    ArgY1_40 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                    ArgY2_43 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                    ArgY3_46 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
                    succeeded = (ArgX1_39 < ArgY1_40);
                    if (succeeded)
                    {
                      SubResult1_41 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (ArgX1_39 > ArgY1_40);
                      if (succeeded)
                      {
                        SubResult1_41 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult1_41 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    if (succeeded)
                      CompareResult_6 = SubResult1_41;
                    else
                    {
                      MR_Word SubResult2_44;

                      succeeded = (ArgX2_42 < ArgY2_43);
                      if (succeeded)
                      {
                        SubResult2_44 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (ArgX2_42 > ArgY2_43);
                        if (succeeded)
                        {
                          SubResult2_44 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = MR_TRUE;
                          succeeded = !(succeeded);
                          if (succeeded)
                          {
                            SubResult2_44 = (MR_Integer) 0;
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                      if (succeeded)
                        CompareResult_6 = SubResult2_44;
                      else
                      {
                        succeeded = (ArgX3_45 < ArgY3_46);
                        if (succeeded)
                          CompareResult_6 = (MR_Integer) 1;
                        else
                        {
                          succeeded = (ArgX3_45 > ArgY3_46);
                          if (succeeded)
                            CompareResult_6 = (MR_Integer) 2;
                          else
                            CompareResult_6 = (MR_Integer) 0;
                        }
                      }
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Integer ArgX1_47 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  MR_Integer ArgY1_48;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 6)));
                  if (succeeded)
                  {
                    ArgY1_48 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                    succeeded = (ArgX1_47 < ArgY1_48);
                    if (succeeded)
                      CompareResult_6 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (ArgX1_47 > ArgY1_48);
                      if (succeeded)
                        CompareResult_6 = (MR_Integer) 2;
                      else
                        CompareResult_6 = (MR_Integer) 0;
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 7:
                {
                  MR_Integer ArgX1_49 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  MR_Integer ArgY1_50;
                  MR_Word ArgX2_52 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  MR_Word ArgY2_53;
                  MR_Word SubResult1_51;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 7)));
                  if (succeeded)
                  {
                    ArgY1_50 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                    ArgY2_53 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                    succeeded = (ArgX1_49 < ArgY1_50);
                    if (succeeded)
                    {
                      SubResult1_51 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (ArgX1_49 > ArgY1_50);
                      if (succeeded)
                      {
                        SubResult1_51 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult1_51 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    if (succeeded)
                      CompareResult_6 = SubResult1_51;
                    else
                      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_2[4]), &CompareResult_6, ((MR_Box) (ArgX2_52)), ((MR_Box) (ArgY2_53)));
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 8:
                {
                  MR_Integer ArgX1_54 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  MR_Integer ArgY1_55;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 8)));
                  if (succeeded)
                  {
                    ArgY1_55 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                    succeeded = (ArgX1_54 < ArgY1_55);
                    if (succeeded)
                      CompareResult_6 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (ArgX1_54 > ArgY1_55);
                      if (succeeded)
                        CompareResult_6 = (MR_Integer) 2;
                      else
                        CompareResult_6 = (MR_Integer) 0;
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 9:
                {
                  MR_Integer ArgX1_56 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  MR_Integer ArgY1_57;
                  MR_Integer ArgX2_59 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  MR_Integer ArgY2_60;
                  MR_Word ArgX3_62 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                  MR_Word ArgY3_63;
                  MR_Word SubResult1_58;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 9)));
                  if (succeeded)
                  {
                    ArgY1_57 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                    ArgY2_60 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                    ArgY3_63 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
                    succeeded = (ArgX1_56 < ArgY1_57);
                    if (succeeded)
                    {
                      SubResult1_58 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (ArgX1_56 > ArgY1_57);
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
                      CompareResult_6 = SubResult1_58;
                    else
                    {
                      MR_Word SubResult2_61;

                      succeeded = (ArgX2_59 < ArgY2_60);
                      if (succeeded)
                      {
                        SubResult2_61 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (ArgX2_59 > ArgY2_60);
                        if (succeeded)
                        {
                          SubResult2_61 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = MR_TRUE;
                          succeeded = !(succeeded);
                          if (succeeded)
                          {
                            SubResult2_61 = (MR_Integer) 0;
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                      if (succeeded)
                        CompareResult_6 = SubResult2_61;
                      else
                        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_2[4]), &CompareResult_6, ((MR_Box) (ArgX3_62)), ((MR_Box) (ArgY3_63)));
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
hlds__pred_name____Index____pred_transformation_0_0(
  MR_Word HeadVar__1_1,
  MR_Integer * HeadVar__2_2)
{
  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *HeadVar__2_2 = (MR_Integer) 12;
          break;
        case (MR_Integer) 1:
          *HeadVar__2_2 = (MR_Integer) 13;
          break;
        case (MR_Integer) 2:
          *HeadVar__2_2 = (MR_Integer) 14;
          break;
        case (MR_Integer) 3:
          *HeadVar__2_2 = (MR_Integer) 15;
          break;
        case (MR_Integer) 4:
          *HeadVar__2_2 = (MR_Integer) 16;
          break;
        case (MR_Integer) 5:
          *HeadVar__2_2 = (MR_Integer) 17;
          break;
      }
      break;
    case (MR_Integer) 1:
      *HeadVar__2_2 = (MR_Integer) 0;
      break;
    case (MR_Integer) 2:
      *HeadVar__2_2 = (MR_Integer) 1;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *HeadVar__2_2 = (MR_Integer) 2;
          break;
        case (MR_Integer) 1:
          *HeadVar__2_2 = (MR_Integer) 3;
          break;
        case (MR_Integer) 2:
          *HeadVar__2_2 = (MR_Integer) 4;
          break;
        case (MR_Integer) 3:
          *HeadVar__2_2 = (MR_Integer) 5;
          break;
        case (MR_Integer) 4:
          *HeadVar__2_2 = (MR_Integer) 6;
          break;
        case (MR_Integer) 5:
          *HeadVar__2_2 = (MR_Integer) 7;
          break;
        case (MR_Integer) 6:
          *HeadVar__2_2 = (MR_Integer) 8;
          break;
        case (MR_Integer) 7:
          *HeadVar__2_2 = (MR_Integer) 9;
          break;
        case (MR_Integer) 8:
          *HeadVar__2_2 = (MR_Integer) 10;
          break;
        case (MR_Integer) 9:
          *HeadVar__2_2 = (MR_Integer) 11;
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
  MR_Integer CastX_59 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_60 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_59 == CastY_60);
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
              MR_Integer CastX_49 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_50 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_50 == CastX_49);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer CastX_51 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_52 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_52 == CastX_51);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Word ArgY1_4;
          MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
          MR_Word ArgY2_6;
          MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2))));
          MR_Word ArgY3_8;
          MR_Integer Var_71;
          MR_Integer Var_72;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
            ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
            ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
            succeeded = (ArgX1_3 == ArgY1_4);
            if (succeeded)
            {
              succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX2_5, ArgY2_6);
              if (succeeded)
              {
                Var_71 = (MR_Integer) (ArgX3_7);
                Var_72 = (MR_Integer) (ArgY3_8);
                succeeded = (Var_71 == Var_72);
              }
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgX1_9 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 3);
          MR_Word ArgY1_10;
          MR_Word ArgX2_11 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1))));
          MR_Word ArgY2_12;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 3);
            ArgY2_12 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
            succeeded = (ArgX1_9 == ArgY1_10);
            if (succeeded)
              succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(ArgX2_11, ArgY2_12);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgX1_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_14;
              MR_Word ArgX2_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Word ArgY2_16;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_13, ArgY1_14);
                if (succeeded)
                  succeeded = hlds__pred_name____Unify____instance_method_constraints_0_0(ArgX2_15, ArgY2_16);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_18;
              MR_Word ArgX2_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Word ArgY2_20;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                succeeded = parse_tree__prog_data____Unify____class_id_0_0(ArgX1_17, ArgY1_18);
                if (succeeded)
                  succeeded = parse_tree__prog_data____Unify____pf_sym_name_arity_0_0(ArgX2_19, ArgY2_20);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer ArgX1_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Integer ArgY1_22;
              MR_Integer ArgX2_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Integer ArgY2_24;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
              if (succeeded)
              {
                ArgY1_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_24 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                succeeded = (ArgX1_21 == ArgY1_22);
                if (succeeded)
                  succeeded = (ArgX2_23 == ArgY2_24);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_String ArgX1_25 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_String ArgY1_26;
              MR_Integer ArgX2_27 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Integer ArgY2_28;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
              if (succeeded)
              {
                ArgY1_26 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_28 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                succeeded = (strcmp(ArgX1_25, ArgY1_26) == 0);
                if (succeeded)
                  succeeded = (ArgX2_27 == ArgY2_28);
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_String ArgX1_29 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_String ArgY1_30;
              MR_Integer ArgX2_31 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Integer ArgY2_32;
              MR_Integer ArgX3_33 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
              MR_Integer ArgY3_34;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4)));
              if (succeeded)
              {
                ArgY1_30 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_32 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                ArgY3_34 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                succeeded = (strcmp(ArgX1_29, ArgY1_30) == 0);
                if (succeeded)
                {
                  succeeded = (ArgX2_31 == ArgY2_32);
                  if (succeeded)
                    succeeded = (ArgX3_33 == ArgY3_34);
                }
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word ArgX1_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_36;
              MR_Word ArgX2_37 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))) & (MR_Integer) 3);
              MR_Word ArgY2_38;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5)));
              if (succeeded)
              {
                ArgY1_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_38 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 3);
                succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(ArgX1_35, ArgY1_36);
                if (succeeded)
                  succeeded = (ArgX2_37 == ArgY2_38);
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word ArgX1_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_40;
              MR_Word ArgX2_41 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))) & (MR_Integer) 1);
              MR_Word ArgY2_42;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                ArgY1_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_42 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 1);
                succeeded = parse_tree__prog_data____Unify____pf_sym_name_arity_0_0(ArgX1_39, ArgY1_40);
                if (succeeded)
                  succeeded = (ArgX2_41 == ArgY2_42);
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ArgX1_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_44;
              MR_String ArgX2_45 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_String ArgY2_46;
              MR_Word ArgX3_47 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))) & (MR_Integer) 15);
              MR_Word ArgY3_48;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 7)));
              if (succeeded)
              {
                ArgY1_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_46 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                ArgY3_48 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))) & (MR_Integer) 15);
                succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_43, ArgY1_44);
                if (succeeded)
                {
                  succeeded = (strcmp(ArgX2_45, ArgY2_46) == 0);
                  if (succeeded)
                    succeeded = (ArgX3_47 == ArgY3_48);
                }
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word ArgX1_53 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_54;
              MR_Word ArgX2_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Word ArgY2_56;
              MR_Word ArgX3_57 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
              MR_Word ArgY3_58;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 8)));
              if (succeeded)
              {
                ArgY1_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_56 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                ArgY3_58 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                succeeded = hlds__pred_name____Unify____pred_transformation_0_0(ArgX1_53, ArgY1_54);
                if (succeeded)
                {
                  succeeded = hlds__pred_name____Unify____pred_origin_0_0(ArgX2_55, ArgY2_56);
                  if (succeeded)
                    succeeded = hlds__hlds_pred____Unify____pred_id_0_0(ArgX3_57, ArgY3_58);
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
hlds__pred_name____Unify____pred_transformation_0_0(
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
        switch (MR_unmkbody(HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer CastX_49 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_50 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_50 == CastX_49);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer CastX_51 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_52 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_52 == CastX_51);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer CastX_53 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_54 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_54 == CastX_53);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Integer CastX_55 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_56 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_56 == CastX_55);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Integer CastX_57 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_58 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_58 == CastX_57);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Integer CastX_59 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_60 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_60 == CastX_59);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
          MR_Integer ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
            succeeded = (ArgX1_3 == ArgY1_4);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer ArgX1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
          MR_Integer ArgY1_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
            succeeded = (ArgX1_5 == ArgY1_6);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word TypeInfo_72_72;
              MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_8;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_8 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                TypeInfo_72_72 = (MR_Word) (&hlds__pred_name_scalar_common_2[3]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_72_72, ((MR_Box) (ArgX1_7)), ((MR_Box) (ArgY1_8)));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word TypeInfo_75_75;
              MR_Integer ArgX1_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Integer ArgY1_10;
              MR_Word ArgX2_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Word ArgY2_12;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                succeeded = (ArgX1_9 == ArgY1_10);
                if (succeeded)
                {
                  TypeInfo_75_75 = (MR_Word) (&hlds__pred_name_scalar_common_2[4]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_75_75, ((MR_Box) (ArgX2_11)), ((MR_Box) (ArgY2_12)));
                }
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word TypeInfo_63_63;
              MR_Integer ArgX1_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Integer ArgY1_14;
              MR_Word ArgX2_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Word ArgY2_16;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
              if (succeeded)
              {
                ArgY1_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                succeeded = (ArgX1_13 == ArgY1_14);
                if (succeeded)
                {
                  TypeInfo_63_63 = (MR_Word) (&hlds__pred_name_scalar_common_2[4]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_63_63, ((MR_Box) (ArgX2_15)), ((MR_Box) (ArgY2_16)));
                }
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Integer ArgX1_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Integer ArgY1_18;
              MR_Integer ArgX2_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Integer ArgY2_20;
              MR_Integer ArgX3_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
              MR_Integer ArgY3_22;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
              if (succeeded)
              {
                ArgY1_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                ArgY3_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                succeeded = (ArgX1_17 == ArgY1_18);
                if (succeeded)
                {
                  succeeded = (ArgX2_19 == ArgY2_20);
                  if (succeeded)
                    succeeded = (ArgX3_21 == ArgY3_22);
                }
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Integer ArgX1_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Integer ArgY1_24;
              MR_Integer ArgX2_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Integer ArgY2_26;
              MR_Integer ArgX3_27 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
              MR_Integer ArgY3_28;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4)));
              if (succeeded)
              {
                ArgY1_24 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_26 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                ArgY3_28 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                succeeded = (ArgX1_23 == ArgY1_24);
                if (succeeded)
                {
                  succeeded = (ArgX2_25 == ArgY2_26);
                  if (succeeded)
                    succeeded = (ArgX3_27 == ArgY3_28);
                }
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Integer ArgX1_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Integer ArgY1_30;
              MR_Integer ArgX2_31 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Integer ArgY2_32;
              MR_Integer ArgX3_33 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
              MR_Integer ArgY3_34;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5)));
              if (succeeded)
              {
                ArgY1_30 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_32 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                ArgY3_34 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                succeeded = (ArgX1_29 == ArgY1_30);
                if (succeeded)
                {
                  succeeded = (ArgX2_31 == ArgY2_32);
                  if (succeeded)
                    succeeded = (ArgX3_33 == ArgY3_34);
                }
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Integer ArgX1_35 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Integer ArgY1_36;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                ArgY1_36 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                succeeded = (ArgX1_35 == ArgY1_36);
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word TypeInfo_65_65;
              MR_Integer ArgX1_37 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Integer ArgY1_38;
              MR_Word ArgX2_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Word ArgY2_40;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 7)));
              if (succeeded)
              {
                ArgY1_38 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                succeeded = (ArgX1_37 == ArgY1_38);
                if (succeeded)
                {
                  TypeInfo_65_65 = (MR_Word) (&hlds__pred_name_scalar_common_2[4]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_65_65, ((MR_Box) (ArgX2_39)), ((MR_Box) (ArgY2_40)));
                }
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Integer ArgX1_41 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Integer ArgY1_42;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 8)));
              if (succeeded)
              {
                ArgY1_42 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                succeeded = (ArgX1_41 == ArgY1_42);
              }
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word TypeInfo_68_68;
              MR_Integer ArgX1_43 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Integer ArgY1_44;
              MR_Integer ArgX2_45 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Integer ArgY2_46;
              MR_Word ArgX3_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
              MR_Word ArgY3_48;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 9)));
              if (succeeded)
              {
                ArgY1_44 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_46 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                ArgY3_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                succeeded = (ArgX1_43 == ArgY1_44);
                if (succeeded)
                {
                  succeeded = (ArgX2_45 == ArgY2_46);
                  if (succeeded)
                  {
                    TypeInfo_68_68 = (MR_Word) (&hlds__pred_name_scalar_common_2[4]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_68_68, ((MR_Box) (ArgX3_47)), ((MR_Box) (ArgY3_48)));
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
    MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
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
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
    MR_Word SubResult1_6;

    parse_tree__prog_data____Compare____class_id_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_2[1]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_2[2]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
          parse_tree__prog_data____Compare____prog_constraints_0_0(HeadVar__1_1, ArgX4_13, ArgY4_14);
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));

    succeeded = parse_tree__prog_data____Unify____class_id_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      TypeInfo_14_14 = (MR_Word) (&hlds__pred_name_scalar_common_2[1]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        TypeInfo_15_15 = (MR_Word) (&hlds__pred_name_scalar_common_2[2]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_15, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
          succeeded = parse_tree__prog_data____Unify____prog_constraints_0_0(ArgX4_9, ArgY4_10);
      }
    }
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
hlds__pred_name__subst_to_name_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String Str_5;
  MR_Integer TVar_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
  MR_Word Type_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
  MR_String TypeStr_6;
  MR_Word Var_7;
  MR_String Var_17;
  MR_String Var_18;

  Var_7 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0));
  TypeStr_6 = parse_tree__mercury_to_mercury__mercury_type_to_string_3_f_0(Var_7, (MR_Integer) 0, Type_4);
  Var_17 = mercury__string__f_43_43_2_f_0((MR_String) "/", TypeStr_6);
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
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
  MR_Word Type_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
  MR_String VarName_8;
  MR_String TypeStr_9;
  MR_String Var_19;

  mercury__varset__lookup_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), VarSet_4, Var_5, &VarName_8);
  TypeStr_9 = parse_tree__mercury_to_mercury__mercury_type_to_string_3_f_0(VarSet_4, (MR_Integer) 0, Type_6);
  Var_19 = mercury__string__f_43_43_2_f_0((MR_String) " = ", TypeStr_9);
  Str_7 = mercury__string__f_43_43_2_f_0(VarName_8, Var_19);
  return Str_7;
}

static void MR_CALL 
hlds__pred_name__write_origin_constraint_6_p_0(
  MR_Word Stream_7,
  MR_Word TVarSet_8,
  MR_Word VarNamePrint_9,
  MR_Word Constraint_10)
{
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "%       ");
  parse_tree__mercury_to_mercury__mercury_output_constraint_6_p_0(TVarSet_8, VarNamePrint_9, Constraint_10, Stream_7);
  mercury__io__nl_3_p_0(Stream_7);
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
  TypeName_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_5, (MR_Integer) 0))));
  TypeArity_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor_5, (MR_Integer) 1))));
  TypeNameStr_8 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(TypeName_6, (MR_String) "__");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), TypeArity_7, &Var_17);
  Var_24 = mercury__string__f_43_43_2_f_0(Var_17, (MR_String) "__");
  Var_26 = mercury__string__f_43_43_2_f_0((MR_String) "__arity", Var_24);
  *Str_4 = mercury__string__f_43_43_2_f_0(TypeNameStr_8, Var_26);
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
      Name_6 = Name0_5;
      break;
    case (MR_Integer) 1:
      Name_6 = Name0_5;
      break;
    case (MR_Integer) 2:
      Name_6 = Name0_5;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Origin_4, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
        case (MR_Integer) 2:
        case (MR_Integer) 3:
        case (MR_Integer) 5:
        case (MR_Integer) 6:
        case (MR_Integer) 7:
          Name_6 = Name0_5;
          break;
        case (MR_Integer) 4:
          {
            MR_String FileName0_7 = ((MR_String) ((MR_hl_field(MR_mktag(3), Origin_4, (MR_Integer) 1))));
            MR_Integer LineNum_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Origin_4, (MR_Integer) 2))));
            MR_Integer SeqNo_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Origin_4, (MR_Integer) 3))));
            MR_String Var_10;

            succeeded = mercury__string__append_3_p_1((MR_String) "IntroducedFrom", &Var_10, Name0_5);
            if (succeeded)
            {
              MR_String FileName_11;

              mercury__string__replace_all_4_p_0(FileName0_7, (MR_String) ".", (MR_String) "_", &FileName_11);
              succeeded = (SeqNo_9 > (MR_Integer) 1);
              if (succeeded)
              {
                MR_String Var_58;
                MR_String Var_66;
                MR_String Var_67;
                MR_String Var_69;
                MR_String Var_70;
                MR_String Var_77;

                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), LineNum_8, &Var_58);
                Var_66 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_58);
                Var_67 = mercury__string__f_43_43_2_f_0(FileName_11, Var_66);
                Var_69 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_67);
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), SeqNo_9, &Var_70);
                Var_77 = mercury__string__f_43_43_2_f_0(Var_70, Var_69);
                Name_6 = mercury__string__f_43_43_2_f_0((MR_String) "lambda", Var_77);
              }
              else
              {
                MR_String Var_79;
                MR_String Var_87;
                MR_String Var_88;

                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), LineNum_8, &Var_79);
                Var_87 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_79);
                Var_88 = mercury__string__f_43_43_2_f_0(FileName_11, Var_87);
                Name_6 = mercury__string__f_43_43_2_f_0((MR_String) "lambda_", Var_88);
              }
            }
            else
              Name_6 = Name0_5;
          }
          break;
        case (MR_Integer) 8:
          {
            MR_Word Transform_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Origin_4, (MR_Integer) 1))));
            MR_Word OldOrigin_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Origin_4, (MR_Integer) 2))));
            MR_String OldName_17;

            OldName_17 = hlds__pred_name__layout_origin_name_2_f_0(OldOrigin_15, (MR_String) "");
            succeeded = (strcmp(OldName_17, (MR_String) "") == 0);
            if (!(succeeded))
              succeeded = (Transform_14 == (MR_Word) ((MR_Unsigned) 12U));
            if (succeeded)
              Name_6 = Name0_5;
            else
            {
              MR_String Var_55;
              MR_String Var_57;

              Var_57 = hlds__pred_name__layout_pred_transform_name_1_f_0(Transform_14);
              Var_55 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_57);
              Name_6 = mercury__string__f_43_43_2_f_0(OldName_17, Var_55);
            }
          }
          break;
      }
      break;
  }
  return Name_6;
}

static MR_Box MR_CALL 
hlds__pred_name__layout_pred_transform_name_1_f_0_3(
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
hlds__pred_name__layout_pred_transform_name_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv1_Str_5;

  conv1_Str_5 = hlds__pred_name__subst_to_name_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_Str_5));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__pred_name__layout_pred_transform_name_1_f_0_1(
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
hlds__pred_name__layout_pred_transform_name_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String HeadVar__2_2;

  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          HeadVar__2_2 = (MR_String) "table_gen";
          break;
        case (MR_Integer) 1:
          HeadVar__2_2 = (MR_String) "stm_expansion";
          break;
        case (MR_Integer) 2:
          HeadVar__2_2 = (MR_String) "structure_reuse";
          break;
        case (MR_Integer) 3:
          HeadVar__2_2 = (MR_String) "io_tabling";
          break;
        case (MR_Integer) 4:
          HeadVar__2_2 = (MR_String) "ssdebug";
          break;
        case (MR_Integer) 5:
          HeadVar__2_2 = (MR_String) "daio";
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Integer Seq_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
        MR_String Var_5;

        Var_5 = mercury__string__int_to_string_1_f_0(Seq_3);
        HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "ho", Var_5);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Integer ProcId_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
        MR_String Var_8;
        MR_Integer Var_9;

        Var_9 = hlds__hlds_pred__proc_id_to_int_1_f_0(ProcId_6);
        Var_8 = mercury__string__int_to_string_1_f_0(Var_9);
        HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "hoproc", Var_8);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Substs_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word Var_12;
            MR_Word Var_14;

            Var_14 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&hlds__pred_name_scalar_common_1[0]), Substs_10);
            Var_12 = mercury__list__map_2_f_0((MR_Word) (&hlds__pred_name_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__pred_name_scalar_common_1[6]), Var_14);
            HeadVar__2_2 = mercury__string__join_list_2_f_0((MR_String) "_", Var_12);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Posns_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
            MR_String Var_18;
            MR_Word Var_20;

            Var_20 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__pred_name_scalar_common_1[7]), Posns_16);
            Var_18 = mercury__string__join_list_2_f_0((MR_String) "_", Var_20);
            HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "ua_", Var_18);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Posns_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
            MR_String Var_25;
            MR_Word Var_27;

            Var_27 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__pred_name_scalar_common_1[5]), Posns_23);
            Var_25 = mercury__string__join_list_2_f_0((MR_String) "_", Var_27);
            HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "acc_", Var_25);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Integer ProcId_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
            MR_String Var_33;
            MR_Integer Var_34;

            Var_34 = hlds__hlds_pred__proc_id_to_int_1_f_0(ProcId_29);
            Var_33 = mercury__string__int_to_string_1_f_0(Var_34);
            HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "inv_", Var_33);
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Integer ProcId_35 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
            MR_String Var_39;
            MR_Integer Var_40;

            Var_40 = hlds__hlds_pred__proc_id_to_int_1_f_0(ProcId_35);
            Var_39 = mercury__string__int_to_string_1_f_0(Var_40);
            HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "tup_", Var_39);
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Integer ProcId_41 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
            MR_String Var_45;
            MR_Integer Var_46;

            Var_46 = hlds__hlds_pred__proc_id_to_int_1_f_0(ProcId_41);
            Var_45 = mercury__string__int_to_string_1_f_0(Var_46);
            HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "untup_", Var_45);
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Integer Distance_47 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
            MR_String Var_49;

            Var_49 = mercury__string__int_to_string_1_f_0(Distance_47);
            HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "distance_granularity_", Var_49);
          }
          break;
        case (MR_Integer) 7:
          HeadVar__2_2 = (MR_String) "dep_par_conj_";
          break;
        case (MR_Integer) 8:
          HeadVar__2_2 = (MR_String) "par_lc";
          break;
        case (MR_Integer) 9:
          {
            MR_Integer ProcId_53 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word ArgPos_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
            MR_String Var_57;
            MR_String Var_58;
            MR_Integer Var_59;
            MR_String Var_60;
            MR_String Var_62;

            Var_59 = hlds__hlds_pred__proc_id_to_int_1_f_0(ProcId_53);
            Var_58 = mercury__string__int_to_string_1_f_0(Var_59);
            Var_62 = hlds__pred_name__underscore_ints_to_string_1_f_0(ArgPos_55);
            Var_60 = mercury__string__f_43_43_2_f_0((MR_String) "_args", Var_62);
            Var_57 = mercury__string__f_43_43_2_f_0(Var_58, Var_60);
            HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "retptr_", Var_57);
          }
          break;
      }
      break;
  }
  return HeadVar__2_2;
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
    MR_Integer N_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Ns_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
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

void MR_CALL 
hlds__pred_name__write_origin_7_p_0(
  MR_Word Stream_8,
  MR_Word ModuleInfo_9,
  MR_Word TVarSet_10,
  MR_Word VarNamePrint_11,
  MR_Word Origin_12)
{
  switch (MR_tag((MR_Word) Origin_12)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(Origin_12)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "% initialise\n");
          break;
        case (MR_Integer) 1:
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "% finalise\n");
          break;
      }
      break;
    case (MR_Integer) 1:
      {
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word SpecialPredId_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), Origin_12, (MR_Integer) 0))) & (MR_Integer) 3);
        MR_Word TypeCtor_15 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Origin_12, (MR_Integer) 1))));
        MR_String SpecialPredIdStr_16;
        MR_String Var_70;

        switch (SpecialPredId_14) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 2:
            SpecialPredIdStr_16 = (MR_String) "compare";
            break;
          case (MR_Integer) 1:
            SpecialPredIdStr_16 = (MR_String) "index";
            break;
          case (MR_Integer) 0:
            SpecialPredIdStr_16 = (MR_String) "unify";
            break;
        }
        Var_70 = parse_tree__prog_out__type_name_to_string_1_f_0(TypeCtor_15);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "% special ");
        mercury__io__write_string_4_p_0(Stream_8, SpecialPredIdStr_16);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) " pred for ");
        mercury__io__write_string_4_p_0(Stream_8, Var_70);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Origin_12, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word MethodConstraints_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Origin_12, (MR_Integer) 2))));
            MR_Word ClassId_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MethodConstraints_18, (MR_Integer) 0))));
            MR_Word InstanceTypes_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MethodConstraints_18, (MR_Integer) 1))));
            MR_Word InstanceConstraints_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MethodConstraints_18, (MR_Integer) 2))));
            MR_Word ClassMethodConstraints_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MethodConstraints_18, (MR_Integer) 3))));
            MR_Word ClassName_23;
            MR_Word MethodUnivConstraints_25;
            MR_Word MethodExistConstraints_26;
            MR_Word Var_78;

            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "% instance method\n");
            ClassName_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassId_19, (MR_Integer) 0))));
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "% class name and instance type vector:\n");
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "%   ");
            {
              Var_78 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_78, 0) = ((MR_Box) (ClassName_23));
              MR_hl_field(MR_mktag(0), Var_78, 1) = ((MR_Box) (InstanceTypes_20));
            }
            parse_tree__mercury_to_mercury__mercury_output_constraint_6_p_0(TVarSet_10, VarNamePrint_11, Var_78, Stream_8);
            mercury__io__nl_3_p_0(Stream_8);
            hlds__pred_name__write_origin_constraints_7_p_0(Stream_8, (MR_String) "instance constraints", TVarSet_10, VarNamePrint_11, InstanceConstraints_21);
            MethodUnivConstraints_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassMethodConstraints_22, (MR_Integer) 0))));
            MethodExistConstraints_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassMethodConstraints_22, (MR_Integer) 1))));
            hlds__pred_name__write_origin_constraints_7_p_0(Stream_8, (MR_String) "method universal constraints", TVarSet_10, VarNamePrint_11, MethodUnivConstraints_25);
            hlds__pred_name__write_origin_constraints_7_p_0(Stream_8, (MR_String) "method existential constraints", TVarSet_10, VarNamePrint_11, MethodExistConstraints_26);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word MethodId_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Origin_12, (MR_Integer) 2))));
            MR_Word ClassSymName_28;
            MR_Integer ClassArity_29;
            MR_Word MethodPredOrFunc_30;
            MR_Word MethodSymName_31;
            MR_Word MethodPredFormArity_32;
            MR_Word MethodUserArity_33;
            MR_Integer MethodUserArityInt_34;
            MR_String Var_91;
            MR_String Var_94;
            MR_String Var_99;
            MR_Word ClassId_152 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Origin_12, (MR_Integer) 1))));
            MR_String Var_227;
            MR_String Var_240;

            ClassSymName_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassId_152, (MR_Integer) 0))));
            ClassArity_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ClassId_152, (MR_Integer) 1))));
            MethodPredOrFunc_30 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), MethodId_27, (MR_Integer) 0))) & (MR_Integer) 1);
            MethodSymName_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MethodId_27, (MR_Integer) 1))));
            MethodPredFormArity_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MethodId_27, (MR_Integer) 2))));
            parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(MethodPredOrFunc_30, &MethodUserArity_33, MethodPredFormArity_32);
            MethodUserArityInt_34 = (MR_Integer) (MethodUserArity_33);
            Var_91 = mdbcomp__prim_data__pred_or_func_to_string_1_f_0(MethodPredOrFunc_30);
            Var_94 = mdbcomp__sym_name__sym_name_to_string_1_f_0(MethodSymName_31);
            Var_99 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ClassSymName_28);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "% class method ");
            mercury__io__write_string_4_p_0(Stream_8, Var_91);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
            mercury__io__write_string_4_p_0(Stream_8, Var_94);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "/");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), MethodUserArityInt_34, &Var_227);
            mercury__io__write_string_4_p_0(Stream_8, Var_227);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) " for ");
            mercury__io__write_string_4_p_0(Stream_8, Var_99);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "/");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), ClassArity_29, &Var_240);
            mercury__io__write_string_4_p_0(Stream_8, Var_240);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer LineNum_40 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Origin_12, (MR_Integer) 1))));
            MR_Integer SeqNum_41 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Origin_12, (MR_Integer) 2))));
            MR_String Var_200;
            MR_String Var_210;

            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "% deforestation: line ");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), LineNum_40, &Var_200);
            mercury__io__write_string_4_p_0(Stream_8, Var_200);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", seqnum ");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), SeqNum_41, &Var_210);
            mercury__io__write_string_4_p_0(Stream_8, Var_210);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
          }
          break;
        case (MR_Integer) 3:
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "% assertion\n");
          break;
        case (MR_Integer) 4:
          {
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word SolverAuxPredKind_44 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Origin_12, (MR_Integer) 2))) & (MR_Integer) 3);
            MR_String TypeCtorStr_45;
            MR_String SolverAuxPredKindStr_46;
            MR_Word TypeCtor_153 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Origin_12, (MR_Integer) 1))));

            TypeCtorStr_45 = parse_tree__prog_out__type_ctor_to_string_1_f_0(TypeCtor_153);
            SolverAuxPredKindStr_46 = ((&hlds__pred_name_vector_common_6[17 + SolverAuxPredKind_44]))->hlds__pred_name__vector_common_type_6_0__vct_6_f_0;
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "% ");
            mercury__io__write_string_4_p_0(Stream_8, SolverAuxPredKindStr_46);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) " for ");
            mercury__io__write_string_4_p_0(Stream_8, TypeCtorStr_45);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word BasePredCallId_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Origin_12, (MR_Integer) 1))));
            MR_Word TablingAuxPredKind_48 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Origin_12, (MR_Integer) 2))) & (MR_Integer) 1);
            MR_String BasePredStr_49;
            MR_String TablingAuxPredKindStr_50;

            BasePredStr_49 = parse_tree__prog_out__pf_sym_name_orig_arity_to_string_1_f_0(BasePredCallId_47);
            switch (TablingAuxPredKind_48) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                TablingAuxPredKindStr_50 = (MR_String) "table reset predicate";
                break;
              case (MR_Integer) 0:
                TablingAuxPredKindStr_50 = (MR_String) "table statistics predicate";
                break;
            }
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "% ");
            mercury__io__write_string_4_p_0(Stream_8, TablingAuxPredKindStr_50);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) " for ");
            mercury__io__write_string_4_p_0(Stream_8, BasePredStr_49);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word MutableModuleName_51 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Origin_12, (MR_Integer) 1))));
            MR_String MutableName_52 = ((MR_String) ((MR_hl_field(MR_mktag(3), Origin_12, (MR_Integer) 2))));
            MR_Word MutablePredKind_53 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Origin_12, (MR_Integer) 3))) & (MR_Integer) 15);
            MR_String MutableModuleNameStr_54;
            MR_String MutablePredKindStr_55;

            MutableModuleNameStr_54 = mdbcomp__sym_name__sym_name_to_string_1_f_0(MutableModuleName_51);
            MutablePredKindStr_55 = ((&hlds__pred_name_vector_common_6[5 + MutablePredKind_53]))->hlds__pred_name__vector_common_type_6_0__vct_6_f_0;
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "% ");
            mercury__io__write_string_4_p_0(Stream_8, MutablePredKindStr_55);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) " for mutable ");
            mercury__io__write_string_4_p_0(Stream_8, MutableName_52);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) " in module ");
            mercury__io__write_string_4_p_0(Stream_8, MutableModuleNameStr_54);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
          }
          break;
        case (MR_Integer) 8:
          {
            MR_Word Transformation_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Origin_12, (MR_Integer) 1))));
            MR_Word OrigPredId_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Origin_12, (MR_Integer) 3))));
            MR_Integer OrigPredIdNum_38;
            MR_Word OrigPredInfo_39;
            MR_String Var_110;
            MR_String Var_158;

            OrigPredIdNum_38 = hlds__hlds_pred__pred_id_to_int_1_f_0(OrigPredId_37);
            hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_9, OrigPredId_37, &OrigPredInfo_39);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "% transformed from pred id ");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), OrigPredIdNum_38, &Var_158);
            mercury__io__write_string_4_p_0(Stream_8, Var_158);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "% ");
            Var_110 = hlds__pred_name__pred_info_id_to_string_1_f_0(OrigPredInfo_39);
            mercury__io__write_string_4_p_0(Stream_8, Var_110);
            mercury__io__nl_3_p_0(Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "% transformation: ");
            mercury__io__write_line_4_p_0((MR_Word) (&hlds__pred_name__hlds__pred_name__type_ctor_info_pred_transformation_0), Stream_8, ((MR_Box) (Transformation_35)));
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
hlds__pred_name__write_origin_constraints_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  hlds__pred_name__write_origin_constraint_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
hlds__pred_name__write_origin_constraints_7_p_0(
  MR_Word Stream_8,
  MR_String Msg_9,
  MR_Word TVarSet_10,
  MR_Word VarNamePrint_11,
  MR_Word Constraints_12)
{
  if ((Constraints_12 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "% ");
    mercury__io__write_string_4_p_0(Stream_8, Msg_9);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) ": none\n");
  }
  else
  {
    MR_Word Var_28;
    MR_Box conv0_STATE_VARIABLE_IO_17;

    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "% ");
    mercury__io__write_string_4_p_0(Stream_8, Msg_9);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) ":\n");
    {
      Var_28 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (&hlds__pred_name_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), Var_28, 1) = ((MR_Box) (hlds__pred_name__write_origin_constraints_7_p_0_1));
      MR_hl_field(MR_mktag(0), Var_28, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_28, 3) = ((MR_Box) (Stream_8));
      MR_hl_field(MR_mktag(0), Var_28, 4) = ((MR_Box) (TVarSet_10));
      MR_hl_field(MR_mktag(0), Var_28, 5) = ((MR_Box) (VarNamePrint_11));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_28, Constraints_12, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_17);
  }
}

MR_String MR_CALL 
hlds__pred_name__pred_info_id_to_string_1_f_0(
  MR_Word PredInfo_3)
{
  MR_bool succeeded;
  MR_String Str_4;
  MR_Word Module_5;
  MR_String Name_6;
  MR_Word PredFormArity_7;
  MR_Word PredOrFunc_8;
  MR_Word Origin_9;

  Module_5 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_3);
  Name_6 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_3);
  PredFormArity_7 = hlds__hlds_pred__pred_info_pred_form_arity_1_f_0(PredInfo_3);
  PredOrFunc_8 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_3);
  hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo_3, &Origin_9);
  switch (MR_tag((MR_Word) Origin_9)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word SymName_101;

        {
          SymName_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), SymName_101, 0) = ((MR_Box) (Module_5));
          MR_hl_field(MR_mktag(1), SymName_101, 1) = ((MR_Box) (Name_6));
        }
        Str_4 = parse_tree__prog_out__pf_sym_name_orig_arity_to_string_3_f_0(PredOrFunc_8, SymName_101, PredFormArity_7);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word SymName_101;

        {
          SymName_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), SymName_101, 0) = ((MR_Box) (Module_5));
          MR_hl_field(MR_mktag(1), SymName_101, 1) = ((MR_Box) (Name_6));
        }
        Str_4 = parse_tree__prog_out__pf_sym_name_orig_arity_to_string_3_f_0(PredOrFunc_8, SymName_101, PredFormArity_7);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word SpecialId_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), Origin_9, (MR_Integer) 0))) & (MR_Integer) 3);
        MR_Word TypeCtor_11 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Origin_9, (MR_Integer) 1))));
        MR_String Descr_12;
        MR_Integer TypeArity_14;
        MR_String ForStr_15;
        MR_String Var_58;
        MR_String Var_59;

        hlds__special_pred__special_pred_description_2_p_0(SpecialId_10, &Descr_12);
        TypeArity_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor_11, (MR_Integer) 1))));
        succeeded = (TypeArity_14 == (MR_Integer) 0);
        if (succeeded)
          ForStr_15 = (MR_String) " for type ";
        else
          ForStr_15 = (MR_String) " for type constructor ";
        Var_59 = parse_tree__prog_out__type_name_to_string_1_f_0(TypeCtor_11);
        Var_58 = mercury__string__f_43_43_2_f_0(ForStr_15, Var_59);
        Str_4 = mercury__string__f_43_43_2_f_0(Descr_12, Var_58);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Origin_9, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word MethodName_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Origin_9, (MR_Integer) 1))));
            MR_Word MethodConstraints_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Origin_9, (MR_Integer) 2))));
            MR_Word ClassId_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MethodConstraints_17, (MR_Integer) 0))));
            MR_Word InstanceTypes_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MethodConstraints_17, (MR_Integer) 1))));
            MR_String MethodStr_22;
            MR_Word ClassName_23;
            MR_String ClassStr_25;
            MR_String TypeStrs_26;
            MR_Word Var_60;
            MR_String Var_104;
            MR_String Var_106;
            MR_String Var_107;
            MR_String Var_109;
            MR_String Var_110;

            MethodStr_22 = parse_tree__prog_out__pf_sym_name_orig_arity_to_string_3_f_0(PredOrFunc_8, MethodName_16, PredFormArity_7);
            ClassName_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassId_18, (MR_Integer) 0))));
            ClassStr_25 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ClassName_23);
            Var_60 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0));
            TypeStrs_26 = parse_tree__mercury_to_mercury__mercury_type_list_to_string_2_f_0(Var_60, InstanceTypes_19);
            Var_104 = mercury__string__f_43_43_2_f_0(TypeStrs_26, (MR_String) ")\'");
            Var_106 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_104);
            Var_107 = mercury__string__f_43_43_2_f_0(ClassStr_25, Var_106);
            Var_109 = mercury__string__f_43_43_2_f_0((MR_String) " for \140", Var_107);
            Var_110 = mercury__string__f_43_43_2_f_0(MethodStr_22, Var_109);
            Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "instance method ", Var_110);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word MethodId_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Origin_9, (MR_Integer) 2))));
            MR_Word ClassSymName_28;
            MR_Integer ClassArity_29;
            MR_Word MethodPredOrFunc_30;
            MR_Word MethodSymName_31;
            MR_Word MethodPredFormArity_32;
            MR_Word MethodUserArity_33;
            MR_Integer MethodUserArityInt_34;
            MR_String Var_72;
            MR_String Var_75;
            MR_String Var_80;
            MR_Word ClassId_99 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Origin_9, (MR_Integer) 1))));
            MR_String Var_112;
            MR_String Var_120;
            MR_String Var_121;
            MR_String Var_123;
            MR_String Var_124;
            MR_String Var_131;
            MR_String Var_133;
            MR_String Var_134;
            MR_String Var_136;
            MR_String Var_137;

            ClassSymName_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassId_99, (MR_Integer) 0))));
            ClassArity_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ClassId_99, (MR_Integer) 1))));
            MethodPredOrFunc_30 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), MethodId_27, (MR_Integer) 0))) & (MR_Integer) 1);
            MethodSymName_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MethodId_27, (MR_Integer) 1))));
            MethodPredFormArity_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MethodId_27, (MR_Integer) 2))));
            parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(MethodPredOrFunc_30, &MethodUserArity_33, MethodPredFormArity_32);
            MethodUserArityInt_34 = (MR_Integer) (MethodUserArity_33);
            Var_72 = mdbcomp__prim_data__pred_or_func_to_string_1_f_0(MethodPredOrFunc_30);
            Var_75 = mdbcomp__sym_name__sym_name_to_string_1_f_0(MethodSymName_31);
            Var_80 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ClassSymName_28);
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), ClassArity_29, &Var_112);
            Var_120 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_112);
            Var_121 = mercury__string__f_43_43_2_f_0(Var_80, Var_120);
            Var_123 = mercury__string__f_43_43_2_f_0((MR_String) " for ", Var_121);
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), MethodUserArityInt_34, &Var_124);
            Var_131 = mercury__string__f_43_43_2_f_0(Var_124, Var_123);
            Var_133 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_131);
            Var_134 = mercury__string__f_43_43_2_f_0(Var_75, Var_133);
            Var_136 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_134);
            Var_137 = mercury__string__f_43_43_2_f_0(Var_72, Var_136);
            Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "class method ", Var_137);
          }
          break;
        case (MR_Integer) 2:
        case (MR_Integer) 4:
        case (MR_Integer) 7:
        case (MR_Integer) 8:
          {
            MR_Word SymName_101;

            {
              SymName_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), SymName_101, 0) = ((MR_Box) (Module_5));
              MR_hl_field(MR_mktag(1), SymName_101, 1) = ((MR_Box) (Name_6));
            }
            Str_4 = parse_tree__prog_out__pf_sym_name_orig_arity_to_string_3_f_0(PredOrFunc_8, SymName_101, PredFormArity_7);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_String FileName_35 = ((MR_String) ((MR_hl_field(MR_mktag(3), Origin_9, (MR_Integer) 1))));
            MR_Integer LineNumber_36 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Origin_9, (MR_Integer) 2))));
            MR_Word PromiseType_37;

            succeeded = hlds__hlds_pred__pred_info_is_promise_2_p_0(PredInfo_3, &PromiseType_37);
            if (succeeded)
            {
              MR_String Var_87;
              MR_String Var_140;
              MR_String Var_147;
              MR_String Var_149;
              MR_String Var_150;
              MR_String Var_152;
              MR_String Var_153;

              Var_87 = parse_tree__prog_out__promise_to_string_1_f_0(PromiseType_37);
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), LineNumber_36, &Var_140);
              Var_147 = mercury__string__f_43_43_2_f_0(Var_140, (MR_String) ")");
              Var_149 = mercury__string__f_43_43_2_f_0((MR_String) ":", Var_147);
              Var_150 = mercury__string__f_43_43_2_f_0(FileName_35, Var_149);
              Var_152 = mercury__string__f_43_43_2_f_0((MR_String) "\' declaration (", Var_150);
              Var_153 = mercury__string__f_43_43_2_f_0(Var_87, Var_152);
              Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "\140", Var_153);
            }
            else
            {
              MR_Word SymName_38;

              {
                SymName_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), SymName_38, 0) = ((MR_Box) (Module_5));
                MR_hl_field(MR_mktag(1), SymName_38, 1) = ((MR_Box) (Name_6));
              }
              Str_4 = parse_tree__prog_out__pf_sym_name_orig_arity_to_string_3_f_0(PredOrFunc_8, SymName_38, PredFormArity_7);
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word SolverAuxPredKind_42 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Origin_9, (MR_Integer) 2))) & (MR_Integer) 3);
            MR_String TypeCtorStr_43;
            MR_Word TypeCtor_100 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Origin_9, (MR_Integer) 1))));

            TypeCtorStr_43 = parse_tree__prog_out__type_ctor_to_string_1_f_0(TypeCtor_100);
            switch (SolverAuxPredKind_42) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 3:
                Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "from any representation predicate for ", TypeCtorStr_43);
                break;
              case (MR_Integer) 2:
                Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "from ground representation predicate for ", TypeCtorStr_43);
                break;
              case (MR_Integer) 1:
                Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "to any representation predicate for ", TypeCtorStr_43);
                break;
              case (MR_Integer) 0:
                Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "to ground representation predicate for ", TypeCtorStr_43);
                break;
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word BasePredId_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Origin_9, (MR_Integer) 1))));
            MR_Word TablingAuxPredKind_40 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Origin_9, (MR_Integer) 2))) & (MR_Integer) 1);
            MR_String BasePredIdStr_41;

            BasePredIdStr_41 = parse_tree__prog_out__pf_sym_name_orig_arity_to_string_1_f_0(BasePredId_39);
            switch (TablingAuxPredKind_40) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "table reset predicate for ", BasePredIdStr_41);
                break;
              case (MR_Integer) 0:
                Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "table statistics predicate for ", BasePredIdStr_41);
                break;
            }
          }
          break;
      }
      break;
  }
  return Str_4;
}

MR_String MR_CALL 
hlds__pred_name__uci_pred_name_2_f_0(
  MR_Word SpecialPred_4,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_String Name_7;
  MR_Word SymName_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
  MR_Integer Arity_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
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

  PromiseTypeStr_9 = parse_tree__prog_out__promise_to_string_1_f_0(PromiseType_5);
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

  mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__pred_name_scalar_common_1[4]), InstanceTypes_3, &InstanceStrs_5);
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
  MR_Word ClassName_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassId_6, (MR_Integer) 0))));
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
  MR_Word InstanceStrs_48;

  ClassNameStr_13 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(ClassName_11, (MR_String) "__");
  MethodNameStr_14 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(MethodName_7, (MR_String) "__");
  mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__pred_name_scalar_common_1[3]), InstanceTypes_9, &InstanceStrs_48);
  mercury__string__append_list_2_p_0(InstanceStrs_48, &InstanceStr_15);
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
    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *TransformedSymName_8 = base;
    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ModuleName_5));
    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TransformedName_9));
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
        MR_Integer Counter_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Transform_5, (MR_Integer) 1))));
        MR_String Var_401;
        MR_String Var_409;

        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), Counter_8, &Var_401);
        Var_409 = mercury__string__f_43_43_2_f_0((MR_String) "__ho", Var_401);
        *TransformedName_6 = mercury__string__f_43_43_2_f_0(OrigName_4, Var_409);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Integer ProcNum_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Transform_5, (MR_Integer) 1))));
        MR_Integer Version_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Transform_5, (MR_Integer) 2))));
        MR_String Var_382;
        MR_String Var_390;
        MR_String Var_391;
        MR_String Var_398;
        MR_String Var_400;

        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), Version_10, &Var_382);
        Var_390 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_382);
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), ProcNum_9, &Var_391);
        Var_398 = mercury__string__f_43_43_2_f_0(Var_391, Var_390);
        Var_400 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_398);
        *TransformedName_6 = mercury__string__f_43_43_2_f_0(OrigName_4, Var_400);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word UserArity_11 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Transform_5, (MR_Integer) 1))));
        MR_Word AuxTablingPredKind_12 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(2), Transform_5, (MR_Integer) 2))) >> 1)) & (MR_Integer) 1);
        MR_Word SingleProc_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), Transform_5, (MR_Integer) 2))) & (MR_Integer) 1);
        MR_Integer ProcIdInt_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), Transform_5, (MR_Integer) 3))));
        MR_Integer UserArityInt_15 = (MR_Integer) (UserArity_11);
        MR_String KindStr_16;

        switch (AuxTablingPredKind_12) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            KindStr_16 = (MR_String) "reset";
            break;
          case (MR_Integer) 0:
            KindStr_16 = (MR_String) "statistics";
            break;
        }
        switch (SingleProc_13) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String Var_424;
              MR_String Var_432;
              MR_String Var_433;
              MR_String Var_440;
              MR_String Var_442;
              MR_String Var_443;
              MR_String Var_445;
              MR_String Var_446;

              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), ProcIdInt_14, &Var_424);
              Var_432 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_424);
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), UserArityInt_15, &Var_433);
              Var_440 = mercury__string__f_43_43_2_f_0(Var_433, Var_432);
              Var_442 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_440);
              Var_443 = mercury__string__f_43_43_2_f_0(OrigName_4, Var_442);
              Var_445 = mercury__string__f_43_43_2_f_0((MR_String) "_for_", Var_443);
              Var_446 = mercury__string__f_43_43_2_f_0(KindStr_16, Var_445);
              *TransformedName_6 = mercury__string__f_43_43_2_f_0((MR_String) "table_", Var_446);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String Var_410;
              MR_String Var_418;
              MR_String Var_419;
              MR_String Var_421;
              MR_String Var_422;

              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), UserArityInt_15, &Var_410);
              Var_418 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_410);
              Var_419 = mercury__string__f_43_43_2_f_0(OrigName_4, Var_418);
              Var_421 = mercury__string__f_43_43_2_f_0((MR_String) "_for_", Var_419);
              Var_422 = mercury__string__f_43_43_2_f_0(KindStr_16, Var_421);
              *TransformedName_6 = mercury__string__f_43_43_2_f_0((MR_String) "table_", Var_422);
            }
            break;
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
        case (MR_Integer) 2:
        case (MR_Integer) 3:
        case (MR_Integer) 4:
        case (MR_Integer) 5:
        case (MR_Integer) 6:
        case (MR_Integer) 7:
        case (MR_Integer) 8:
        case (MR_Integer) 9:
        case (MR_Integer) 10:
        case (MR_Integer) 11:
        case (MR_Integer) 12:
        case (MR_Integer) 13:
        case (MR_Integer) 14:
        case (MR_Integer) 16:
          {
            MR_String Prefix_61;
            MR_String Suffix_63;
            MR_String Var_650;
            MR_String Var_651;
            MR_String Var_653;

            switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word PredOrFunc_58 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word LNC_59 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 2))));
                  MR_Integer Line_62;
                  MR_String Var_120;
                  MR_Integer Counter_244;
                  MR_String Var_632;
                  MR_String Var_633;
                  MR_String Var_641;
                  MR_String Var_642;

                  Var_120 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_58);
                  Var_632 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_120);
                  Prefix_61 = mercury__string__f_43_43_2_f_0((MR_String) "AccFrom", Var_632);
                  Line_62 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LNC_59, (MR_Integer) 0))));
                  Counter_244 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LNC_59, (MR_Integer) 1))));
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), Counter_244, &Var_633);
                  Var_641 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_633);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), Line_62, &Var_642);
                  Suffix_63 = mercury__string__f_43_43_2_f_0(Var_642, Var_641);
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word PredOrFunc_270 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word LNC_271 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 2))));
                  MR_Integer Line_273;
                  MR_String Var_279;
                  MR_Integer Counter_287;
                  MR_String Var_614;
                  MR_String Var_615;
                  MR_String Var_623;
                  MR_String Var_624;

                  Var_279 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_270);
                  Var_614 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_279);
                  Prefix_61 = mercury__string__f_43_43_2_f_0((MR_String) "DeforestationIn", Var_614);
                  Line_273 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LNC_271, (MR_Integer) 0))));
                  Counter_287 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LNC_271, (MR_Integer) 1))));
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), Counter_287, &Var_615);
                  Var_623 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_615);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), Line_273, &Var_624);
                  Suffix_63 = mercury__string__f_43_43_2_f_0(Var_624, Var_623);
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word PredOrFunc_288 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word LNC_289 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 2))));
                  MR_Integer Line_291;
                  MR_String Var_297;
                  MR_Integer Counter_305;
                  MR_String Var_585;
                  MR_String Var_586;
                  MR_String Var_594;
                  MR_String Var_595;

                  Var_297 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_288);
                  Var_585 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_297);
                  Prefix_61 = mercury__string__f_43_43_2_f_0((MR_String) "IntroducedFrom", Var_585);
                  Line_291 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LNC_289, (MR_Integer) 0))));
                  Counter_305 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LNC_289, (MR_Integer) 1))));
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), Counter_305, &Var_586);
                  Var_594 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_586);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), Line_291, &Var_595);
                  Suffix_63 = mercury__string__f_43_43_2_f_0(Var_595, Var_594);
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_String Var_133;
                  MR_Integer Counter_245;
                  MR_Integer ProcNum_246 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 2))));
                  MR_Word PredOrFunc_247 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word LNC_248 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 3))));
                  MR_Integer Line_250;
                  MR_String Var_550;
                  MR_String Var_551;
                  MR_String Var_559;
                  MR_String Var_560;
                  MR_String Var_567;
                  MR_String Var_569;
                  MR_String Var_570;

                  Var_133 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_247);
                  Var_550 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_133);
                  Prefix_61 = mercury__string__f_43_43_2_f_0((MR_String) "loop_inv", Var_550);
                  Line_250 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LNC_248, (MR_Integer) 0))));
                  Counter_245 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LNC_248, (MR_Integer) 1))));
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), ProcNum_246, &Var_551);
                  Var_559 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_551);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), Counter_245, &Var_560);
                  Var_567 = mercury__string__f_43_43_2_f_0(Var_560, Var_559);
                  Var_569 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_567);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), Line_250, &Var_570);
                  Suffix_63 = mercury__string__f_43_43_2_f_0(Var_570, Var_569);
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_String Var_311;
                  MR_Integer Counter_321;
                  MR_Integer ProcNum_322 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 2))));
                  MR_Word PredOrFunc_323 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word LNC_324 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 3))));
                  MR_Integer Line_326;
                  MR_String Var_487;
                  MR_String Var_488;
                  MR_String Var_496;
                  MR_String Var_497;
                  MR_String Var_504;
                  MR_String Var_506;
                  MR_String Var_507;

                  Var_311 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_323);
                  Var_487 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_311);
                  Prefix_61 = mercury__string__f_43_43_2_f_0((MR_String) "tupling", Var_487);
                  Line_326 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LNC_324, (MR_Integer) 0))));
                  Counter_321 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LNC_324, (MR_Integer) 1))));
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), ProcNum_322, &Var_488);
                  Var_496 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_488);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), Counter_321, &Var_497);
                  Var_504 = mercury__string__f_43_43_2_f_0(Var_497, Var_496);
                  Var_506 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_504);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), Line_326, &Var_507);
                  Suffix_63 = mercury__string__f_43_43_2_f_0(Var_507, Var_506);
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_String Var_332;
                  MR_Integer Counter_342;
                  MR_Integer ProcNum_343 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 2))));
                  MR_Word PredOrFunc_344 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word LNC_345 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 3))));
                  MR_Integer Line_347;
                  MR_String Var_459;
                  MR_String Var_460;
                  MR_String Var_468;
                  MR_String Var_469;
                  MR_String Var_476;
                  MR_String Var_478;
                  MR_String Var_479;

                  Var_332 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_344);
                  Var_459 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_332);
                  Prefix_61 = mercury__string__f_43_43_2_f_0((MR_String) "untupling", Var_459);
                  Line_347 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LNC_345, (MR_Integer) 0))));
                  Counter_342 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LNC_345, (MR_Integer) 1))));
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), ProcNum_343, &Var_460);
                  Var_468 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_460);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), Counter_342, &Var_469);
                  Var_476 = mercury__string__f_43_43_2_f_0(Var_469, Var_468);
                  Var_478 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_476);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), Line_347, &Var_479);
                  Suffix_63 = mercury__string__f_43_43_2_f_0(Var_479, Var_478);
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Integer VariantNum_64 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 2))));
                  MR_String Var_146;
                  MR_Word PredOrFunc_251 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 1))) & (MR_Integer) 1);

                  Var_146 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_251);
                  Prefix_61 = mercury__string__f_43_43_2_f_0((MR_String) "LCMC__", Var_146);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), VariantNum_64, &Suffix_63);
                }
                break;
              case (MR_Integer) 7:
                {
                  MR_String Var_155;
                  MR_Word PredOrFunc_252 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 1))) & (MR_Integer) 1);

                  Var_155 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_252);
                  Prefix_61 = mercury__string__f_43_43_2_f_0((MR_String) "SSDB__", Var_155);
                  Suffix_63 = (MR_String) "";
                }
                break;
              case (MR_Integer) 8:
                {
                  MR_Word ArgNums_65 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 3))));
                  MR_String Var_160;
                  MR_String Var_165;
                  MR_Integer ProcNum_253 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 2))));
                  MR_Word PredOrFunc_254 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_String Var_604;
                  MR_String Var_612;

                  Var_160 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_254);
                  Prefix_61 = mercury__string__f_43_43_2_f_0((MR_String) "Parallel__", Var_160);
                  Var_165 = hlds__pred_name__bracketed_ints_to_string_1_f_0(ArgNums_65);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), ProcNum_253, &Var_604);
                  Var_612 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_604);
                  Suffix_63 = mercury__string__f_43_43_2_f_0(Var_165, Var_612);
                }
                break;
              case (MR_Integer) 9:
                {
                  MR_Integer Distance_66 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 2))));
                  MR_String Var_172;
                  MR_Word PredOrFunc_255 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 1))) & (MR_Integer) 1);

                  Var_172 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_255);
                  Prefix_61 = mercury__string__f_43_43_2_f_0((MR_String) "DistanceGranularityFor__", Var_172);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), Distance_66, &Suffix_63);
                }
                break;
              case (MR_Integer) 10:
                {
                  MR_String Var_181;
                  MR_Integer ProcNum_256 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 2))));
                  MR_Word PredOrFunc_257 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_String Var_527;

                  Var_181 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_257);
                  Prefix_61 = mercury__string__f_43_43_2_f_0((MR_String) "LoopControl__", Var_181);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), ProcNum_256, &Var_527);
                  Suffix_63 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_527);
                }
                break;
              case (MR_Integer) 11:
                {
                  MR_String Var_190;
                  MR_String Var_197;
                  MR_Integer ProcNum_258 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 2))));
                  MR_Word PredOrFunc_259 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word ArgNums_260 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 3))));
                  MR_String Var_516;
                  MR_String Var_517;

                  Var_190 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_259);
                  Prefix_61 = mercury__string__f_43_43_2_f_0((MR_String) "ctgc__", Var_190);
                  Var_197 = hlds__pred_name__bracketed_ints_to_string_1_f_0(ArgNums_260);
                  Var_516 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_197);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), ProcNum_258, &Var_517);
                  Suffix_63 = mercury__string__f_43_43_2_f_0(Var_517, Var_516);
                }
                break;
              case (MR_Integer) 12:
                {
                  MR_Word MaybePredOrFunc_67 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 1))));
                  MR_Word VarSet_68 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 2))));
                  MR_Word TypeSubst_69 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 3))));
                  MR_String PredOrFuncStr_70;

                  if ((MaybePredOrFunc_67 == (MR_Word) ((MR_Unsigned) 0U)))
                    PredOrFuncStr_70 = (MR_String) "pred_or_func";
                  else
                  {
                    MR_Word PredOrFunc_261 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePredOrFunc_67, (MR_Integer) 0))));

                    PredOrFuncStr_70 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_261);
                  }
                  Prefix_61 = mercury__string__f_43_43_2_f_0((MR_String) "TypeSpecOf__", PredOrFuncStr_70);
                  Suffix_63 = hlds__pred_name__type_subst_to_string_2_f_0(VarSet_68, TypeSubst_69);
                }
                break;
              case (MR_Integer) 13:
                {
                  MR_String Var_206;
                  MR_Word PredOrFunc_264 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 1))) & (MR_Integer) 1);

                  Var_206 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_264);
                  Prefix_61 = mercury__string__f_43_43_2_f_0((MR_String) "OutlinedForIOTablingFrom__", Var_206);
                  Suffix_63 = (MR_String) "";
                }
                break;
              case (MR_Integer) 14:
                {
                  MR_String Var_211;
                  MR_Integer ProcNum_265 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 2))));
                  MR_Word PredOrFunc_266 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 1))) & (MR_Integer) 1);

                  Var_211 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_266);
                  Prefix_61 = mercury__string__f_43_43_2_f_0((MR_String) "GeneratorFor_", Var_211);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), ProcNum_265, &Suffix_63);
                }
                break;
              case (MR_Integer) 16:
                {
                  MR_String Var_220;
                  MR_String Var_225;
                  MR_Integer ProcNum_267 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 2))));
                  MR_Word PredOrFunc_268 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word ArgNums_269 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 3))));
                  MR_String Var_449;
                  MR_String Var_457;

                  Var_220 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_268);
                  Prefix_61 = mercury__string__f_43_43_2_f_0((MR_String) "UnusedArgs__", Var_220);
                  Var_225 = hlds__pred_name__bracketed_ints_to_string_1_f_0(ArgNums_269);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), ProcNum_267, &Var_449);
                  Var_457 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_449);
                  Suffix_63 = mercury__string__f_43_43_2_f_0(Var_225, Var_457);
                }
                break;
            }
            Var_650 = mercury__string__f_43_43_2_f_0((MR_String) "__", Suffix_63);
            Var_651 = mercury__string__f_43_43_2_f_0(OrigName_4, Var_650);
            Var_653 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_651);
            *TransformedName_6 = mercury__string__f_43_43_2_f_0(Prefix_61, Var_653);
          }
          break;
        case (MR_Integer) 15:
          {
            MR_Word CloneKind_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 1))) & (MR_Integer) 7);
            MR_Integer Arity_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 2))));
            MR_Integer PredNum_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 3))));
            MR_String CloneKindStr_20 = ((&hlds__pred_name_vector_common_6[0 + CloneKind_17]))->hlds__pred_name__vector_common_type_6_0__vct_6_f_0;
            MR_Integer Counter_243 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 4))));
            MR_String Var_348;
            MR_String Var_356;
            MR_String Var_357;
            MR_String Var_364;
            MR_String Var_366;
            MR_String Var_367;
            MR_String Var_374;
            MR_String Var_376;
            MR_String Var_377;
            MR_String Var_379;
            MR_String Var_380;

            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), Counter_243, &Var_348);
            Var_356 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_348);
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), PredNum_19, &Var_357);
            Var_364 = mercury__string__f_43_43_2_f_0(Var_357, Var_356);
            Var_366 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_364);
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), Arity_18, &Var_367);
            Var_374 = mercury__string__f_43_43_2_f_0(Var_367, Var_366);
            Var_376 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_374);
            Var_377 = mercury__string__f_43_43_2_f_0(OrigName_4, Var_376);
            Var_379 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_377);
            Var_380 = mercury__string__f_43_43_2_f_0(CloneKindStr_20, Var_379);
            *TransformedName_6 = mercury__string__f_43_43_2_f_0((MR_String) "StmExpanded_", Var_380);
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

  IntStrs_5 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__pred_name_scalar_common_1[2]), Ints_3);
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

  conv0_Str_7 = hlds__pred_name__type_var_subst_to_string_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
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
    MR_hl_field(MR_mktag(0), Var_9, 0) = ((MR_Box) (&hlds__pred_name_scalar_common_4[0]));
    MR_hl_field(MR_mktag(0), Var_9, 1) = ((MR_Box) (hlds__pred_name__type_subst_to_string_2_f_0_1));
    MR_hl_field(MR_mktag(0), Var_9, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_9, 3) = ((MR_Box) (VarSet_4));
  }
  Var_10 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&hlds__pred_name_scalar_common_1[1]), TypeSubst_5);
  TVarStrs_7 = mercury__list__map_2_f_0((MR_Word) (&hlds__pred_name_scalar_common_1[1]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_9, Var_10);
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
hlds__pred_name____Unify____pred_transformation_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__pred_name____Unify____pred_transformation_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__pred_name____Compare____pred_transformation_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__pred_name____Compare____pred_transformation_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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
	MR_register_type_ctor_info(&hlds__pred_name__hlds__pred_name__type_ctor_info_instance_method_constraints_0);
	MR_register_type_ctor_info(&hlds__pred_name__hlds__pred_name__type_ctor_info_line_number_and_counter_0);
	MR_register_type_ctor_info(&hlds__pred_name__hlds__pred_name__type_ctor_info_pred_origin_0);
	MR_register_type_ctor_info(&hlds__pred_name__hlds__pred_name__type_ctor_info_pred_transformation_0);
	MR_register_type_ctor_info(&hlds__pred_name__hlds__pred_name__type_ctor_info_stm_clone_kind_0);
	MR_register_type_ctor_info(&hlds__pred_name__hlds__pred_name__type_ctor_info_transform_name_0);
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
