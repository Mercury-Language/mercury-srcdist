/*
** Automatically generated from `pred_name.m'
** by the Mercury compiler,
** version rotd-2022-07-23
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

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_compiler_made_0_5;

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_compiler_made_0_6;

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_stag_ordered_compiler_made_0_0[2];

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_stag_ordered_compiler_made_0_1[1];

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_stag_ordered_compiler_made_0_2[1];

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_stag_ordered_compiler_made_0_3[3];

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

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_pred_transform_0_3;

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_pred_transform_0_4;

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_stag_ordered_pred_transform_0_0[3];

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_stag_ordered_pred_transform_0_1[1];

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_stag_ordered_pred_transform_0_2[1];

static const MR_DuPtagLayout hlds__pred_name__hlds__pred_name__du_ptag_ordered_pred_transform_0[3];

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

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_user_made_0_0[3];

static const MR_DuArgLocn hlds__pred_name__hlds__pred_name__field_locns_user_made_0_0[3];

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_user_made_0_0;

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_user_made_0_1[3];

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_user_made_0_1;

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_user_made_0_2[2];

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_user_made_0_2;

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_user_made_0_3[2];

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_user_made_0_3;

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_user_made_0_4[2];

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_user_made_0_4;

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_stag_ordered_user_made_0_0[1];

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_stag_ordered_user_made_0_1[1];

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_stag_ordered_user_made_0_2[1];

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_stag_ordered_user_made_0_3[2];

static const MR_DuPtagLayout hlds__pred_name__hlds__pred_name__du_ptag_ordered_user_made_0[4];

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_name_ordered_user_made_0[5];

static const MR_Integer hlds__pred_name__hlds__pred_name__functor_number_map_user_made_0[5];

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
    ((MR_Box) (&hlds__pred_name_scalar_common_5[2])),
    ((MR_Box) (hlds__pred_name__layout_pred_transform_name_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&hlds__pred_name_scalar_common_5[0])),
    ((MR_Box) (hlds__pred_name__layout_proc_transform_name_2_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&hlds__pred_name_scalar_common_5[0])),
    ((MR_Box) (hlds__pred_name__layout_proc_transform_name_2_f_0_2)),
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
  UINT8_C(1),
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
  UINT8_C(2),
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
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_solver_type_pred_kind_0)
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
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(2),
  hlds__pred_name__hlds__pred_name__field_types_compiler_made_0_2,
  NULL,
  hlds__pred_name__hlds__pred_name__field_locns_compiler_made_0_2,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_compiler_made_0_3[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pf_sym_name_arity_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tabling_aux_pred_kind_0)
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
  (MR_Integer) 1,
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
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mutable_pred_kind_0)
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
  (MR_Integer) 2,
  INT32_C(4),
  hlds__pred_name__hlds__pred_name__field_types_compiler_made_0_4,
  NULL,
  hlds__pred_name__hlds__pred_name__field_locns_compiler_made_0_4,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_compiler_made_0_5 = {
  (MR_String) "made_for_initialise",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(5),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_compiler_made_0_6 = {
  (MR_String) "made_for_finalise",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(6),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_stag_ordered_compiler_made_0_0[2] = {
  &hlds__pred_name__hlds__pred_name__du_functor_desc_compiler_made_0_5,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_compiler_made_0_6
};

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_stag_ordered_compiler_made_0_1[1] = {
  &hlds__pred_name__hlds__pred_name__du_functor_desc_compiler_made_0_0
};

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_stag_ordered_compiler_made_0_2[1] = {
  &hlds__pred_name__hlds__pred_name__du_functor_desc_compiler_made_0_1
};

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_stag_ordered_compiler_made_0_3[3] = {
  &hlds__pred_name__hlds__pred_name__du_functor_desc_compiler_made_0_2,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_compiler_made_0_3,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_compiler_made_0_4
};

static const MR_DuPtagLayout hlds__pred_name__hlds__pred_name__du_ptag_ordered_compiler_made_0[4] = {
  {
    UINT32_C(2),
    MR_SECTAG_LOCAL_REST_OF_WORD,
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
    UINT32_C(3),
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

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_pred_origin_0_0[1] = {
  (MR_PseudoTypeInfo) (&hlds__pred_name__hlds__pred_name__type_ctor_info_user_made_0)
};

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

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_pred_origin_0_1[1] = {
  (MR_PseudoTypeInfo) (&hlds__pred_name__hlds__pred_name__type_ctor_info_compiler_made_0)
};

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
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)
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
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
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

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_stag_ordered_pred_origin_0_0[1] = {
  &hlds__pred_name__hlds__pred_name__du_functor_desc_pred_origin_0_0
};

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_stag_ordered_pred_origin_0_1[1] = {
  &hlds__pred_name__hlds__pred_name__du_functor_desc_pred_origin_0_1
};

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_stag_ordered_pred_origin_0_2[1] = {
  &hlds__pred_name__hlds__pred_name__du_functor_desc_pred_origin_0_2
};

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_stag_ordered_pred_origin_0_3[1] = {
  &hlds__pred_name__hlds__pred_name__du_functor_desc_pred_origin_0_3
};

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
  {
    (MR_TypeInfo) (&hlds__pred_name__pair__ti_pair_2builtin__type_ctor_info_int_0parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_pred_transform_0_0[1] = {
  (MR_PseudoTypeInfo) (&hlds__pred_name__one_or_more__ti_one_or_more_1pair__ti_pair_2builtin__type_ctor_info_int_0parse_tree__prog_data__type_ctor_info_mer_type_0)
};

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_pred_transform_0_0 = {
  (MR_String) "pred_transform_type_spec",
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

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_pred_transform_0_1[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

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

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_pred_transform_0_3 = {
  (MR_String) "pred_transform_ssdebug",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(3),
  NULL,
  NULL,
  NULL,
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
  (MR_Integer) 2,
  INT32_C(4),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_stag_ordered_pred_transform_0_0[3] = {
  &hlds__pred_name__hlds__pred_name__du_functor_desc_pred_transform_0_2,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_pred_transform_0_3,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_pred_transform_0_4
};

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_stag_ordered_pred_transform_0_1[1] = {
  &hlds__pred_name__hlds__pred_name__du_functor_desc_pred_transform_0_0
};

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_stag_ordered_pred_transform_0_2[1] = {
  &hlds__pred_name__hlds__pred_name__du_functor_desc_pred_transform_0_1
};

static const MR_DuPtagLayout hlds__pred_name__hlds__pred_name__du_ptag_ordered_pred_transform_0[3] = {
  {
    UINT32_C(3),
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
  }
};

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_name_ordered_pred_transform_0[5] = {
  &hlds__pred_name__hlds__pred_name__du_functor_desc_pred_transform_0_1,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_pred_transform_0_3,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_pred_transform_0_4,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_pred_transform_0_2,
  &hlds__pred_name__hlds__pred_name__du_functor_desc_pred_transform_0_0
};

static const MR_Integer hlds__pred_name__hlds__pred_name__functor_number_map_pred_transform_0[5] = {
  (MR_Integer) 4,
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct hlds__pred_name__hlds__pred_name__type_ctor_info_pred_transform_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(3),
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
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
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

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_proc_transform_0_1[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

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
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
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

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_proc_transform_0_3[1] = {
  (MR_PseudoTypeInfo) (&hlds__pred_name__list__ti_list_1builtin__type_ctor_info_int_0)
};

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

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_proc_transform_0_7[1] = {
  (MR_PseudoTypeInfo) (&hlds__pred_name__list__ti_list_1builtin__type_ctor_info_int_0)
};

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

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_stag_ordered_proc_transform_0_1[1] = {
  &hlds__pred_name__hlds__pred_name__du_functor_desc_proc_transform_0_0
};

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_stag_ordered_proc_transform_0_2[1] = {
  &hlds__pred_name__hlds__pred_name__du_functor_desc_proc_transform_0_1
};

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
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
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
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pf_sym_name_arity_0)
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
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
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

static const MR_PseudoTypeInfo hlds__pred_name__hlds__pred_name__field_types_user_made_0_4[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc hlds__pred_name__hlds__pred_name__du_functor_desc_user_made_0_4 = {
  (MR_String) "user_made_assertion",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(4),
  hlds__pred_name__hlds__pred_name__field_types_user_made_0_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_stag_ordered_user_made_0_0[1] = {
  &hlds__pred_name__hlds__pred_name__du_functor_desc_user_made_0_0
};

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_stag_ordered_user_made_0_1[1] = {
  &hlds__pred_name__hlds__pred_name__du_functor_desc_user_made_0_1
};

static const MR_DuFunctorDescPtr hlds__pred_name__hlds__pred_name__du_stag_ordered_user_made_0_2[1] = {
  &hlds__pred_name__hlds__pred_name__du_functor_desc_user_made_0_2
};

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
              MR_Word ArgX1_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
              MR_Word ArgY1_8;
              MR_Integer ArgX2_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
              MR_Integer ArgY2_11;
              MR_Word SubResult1_9;
              MR_Integer Var_215;
              MR_Integer Var_216;

              succeeded = ((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0);
              if (succeeded)
              {
                ArgY1_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
                ArgY2_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
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
              MR_Word ArgX2_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
              MR_Word ArgY2_16;
              MR_Integer ArgX3_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
              MR_Integer ArgY3_19;
              MR_Integer ArgX4_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))));
              MR_Integer ArgY4_22;
              MR_Word SubResult1_14;
              MR_Integer Var_245;
              MR_Integer Var_246;

              succeeded = ((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1);
              if (succeeded)
              {
                ArgY1_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
                ArgY2_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
                ArgY3_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 2))));
                ArgY4_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 3))));
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

                  hlds__hlds_pred____Compare____pred_id_0_0(&SubResult2_17, ArgX2_15, ArgY2_16);
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
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult3_20 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
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
              MR_Word ArgX1_23 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
              MR_Word ArgY1_24;
              MR_Word ArgX2_26 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
              MR_Word ArgY2_27;
              MR_Word ArgX3_29 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2))) >> 1)) & (MR_Integer) 1);
              MR_Word ArgY3_30;
              MR_Word ArgX4_32 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 1);
              MR_Word ArgY4_33;
              MR_Integer ArgX5_35 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3))));
              MR_Integer ArgY5_36;
              MR_Word SubResult1_25;
              MR_Integer Var_203;
              MR_Integer Var_204;

              succeeded = ((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 2);
              if (succeeded)
              {
                ArgY1_24 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
                ArgY2_27 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 1))));
                ArgY3_30 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 2))) >> 1)) & (MR_Integer) 1);
                ArgY4_33 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 2))) & (MR_Integer) 1);
                ArgY5_36 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 3))));
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
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult3_31 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
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
                        else
                        {
                          succeeded = MR_TRUE;
                          succeeded = !(succeeded);
                          if (succeeded)
                          {
                            SubResult4_34 = (MR_Integer) 0;
                            succeeded = MR_TRUE;
                          }
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
            switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ArgX1_37 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word ArgY1_38;
                  MR_Word ArgX2_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  MR_Word ArgY2_41;
                  MR_Word SubResult1_39;
                  MR_Integer Var_201;
                  MR_Integer Var_202;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (succeeded)
                  {
                    ArgY1_38 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
                    ArgY2_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
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
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult1_39 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
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
                  MR_Word ArgX1_42 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word ArgY1_43;
                  MR_Word ArgX2_45 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  MR_Word ArgY2_46;
                  MR_Word SubResult1_44;
                  MR_Integer Var_211;
                  MR_Integer Var_212;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1)));
                  if (succeeded)
                  {
                    ArgY1_43 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
                    ArgY2_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
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
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult1_44 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
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
                  MR_Word ArgX1_47 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word ArgY1_48;
                  MR_Word ArgX2_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  MR_Word ArgY2_51;
                  MR_Word SubResult1_49;
                  MR_Integer Var_219;
                  MR_Integer Var_220;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2)));
                  if (succeeded)
                  {
                    ArgY1_48 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
                    ArgY2_51 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
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
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult1_49 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
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
                  MR_Word ArgX1_52 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word ArgY1_53;
                  MR_Integer ArgX2_55 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  MR_Integer ArgY2_56;
                  MR_Word ArgX3_58 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                  MR_Word ArgY3_59;
                  MR_Word SubResult1_54;
                  MR_Integer Var_223;
                  MR_Integer Var_224;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3)));
                  if (succeeded)
                  {
                    ArgY1_53 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
                    ArgY2_56 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                    ArgY3_59 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
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
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult1_54 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
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
                        else
                        {
                          succeeded = MR_TRUE;
                          succeeded = !(succeeded);
                          if (succeeded)
                          {
                            SubResult2_57 = (MR_Integer) 0;
                            succeeded = MR_TRUE;
                          }
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
                  MR_Word ArgX1_60 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word ArgY1_61;
                  MR_Integer ArgX2_63 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  MR_Integer ArgY2_64;
                  MR_Word ArgX3_66 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                  MR_Word ArgY3_67;
                  MR_Word SubResult1_62;
                  MR_Integer Var_239;
                  MR_Integer Var_240;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4)));
                  if (succeeded)
                  {
                    ArgY1_61 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
                    ArgY2_64 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                    ArgY3_67 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
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
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult1_62 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
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
                        else
                        {
                          succeeded = MR_TRUE;
                          succeeded = !(succeeded);
                          if (succeeded)
                          {
                            SubResult2_65 = (MR_Integer) 0;
                            succeeded = MR_TRUE;
                          }
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
                  MR_Word ArgX1_68 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word ArgY1_69;
                  MR_Integer ArgX2_71 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  MR_Integer ArgY2_72;
                  MR_Word ArgX3_74 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                  MR_Word ArgY3_75;
                  MR_Word SubResult1_70;
                  MR_Integer Var_241;
                  MR_Integer Var_242;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5)));
                  if (succeeded)
                  {
                    ArgY1_69 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
                    ArgY2_72 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                    ArgY3_75 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
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
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult1_70 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
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
                        else
                        {
                          succeeded = MR_TRUE;
                          succeeded = !(succeeded);
                          if (succeeded)
                          {
                            SubResult2_73 = (MR_Integer) 0;
                            succeeded = MR_TRUE;
                          }
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
                  MR_Word ArgX1_76 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word ArgY1_77;
                  MR_Integer ArgX2_79 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  MR_Integer ArgY2_80;
                  MR_Word SubResult1_78;
                  MR_Integer Var_221;
                  MR_Integer Var_222;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 6)));
                  if (succeeded)
                  {
                    ArgY1_77 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
                    ArgY2_80 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
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
                  MR_Word ArgX1_81 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word ArgY1_82;
                  MR_Integer Var_231;
                  MR_Integer Var_232;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 7)));
                  if (succeeded)
                  {
                    ArgY1_82 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
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
                  MR_Word ArgX1_83 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word ArgY1_84;
                  MR_Integer ArgX2_86 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  MR_Integer ArgY2_87;
                  MR_Word ArgX3_89 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                  MR_Word ArgY3_90;
                  MR_Word SubResult1_85;
                  MR_Integer Var_213;
                  MR_Integer Var_214;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 8)));
                  if (succeeded)
                  {
                    ArgY1_84 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
                    ArgY2_87 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                    ArgY3_90 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
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
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult1_85 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
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
                        else
                        {
                          succeeded = MR_TRUE;
                          succeeded = !(succeeded);
                          if (succeeded)
                          {
                            SubResult2_88 = (MR_Integer) 0;
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                      if (succeeded)
                        CompareResult_6 = SubResult2_88;
                      else
                        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_2[4]), &CompareResult_6, ((MR_Box) (ArgX3_89)), ((MR_Box) (ArgY3_90)));
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 9:
                {
                  MR_Word ArgX1_91 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word ArgY1_92;
                  MR_Integer ArgX2_94 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  MR_Integer ArgY2_95;
                  MR_Word SubResult1_93;
                  MR_Integer Var_227;
                  MR_Integer Var_228;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 9)));
                  if (succeeded)
                  {
                    ArgY1_92 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
                    ArgY2_95 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
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
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult1_93 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
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
                  MR_Word ArgX1_96 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word ArgY1_97;
                  MR_Integer ArgX2_99 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  MR_Integer ArgY2_100;
                  MR_Word SubResult1_98;
                  MR_Integer Var_229;
                  MR_Integer Var_230;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 10)));
                  if (succeeded)
                  {
                    ArgY1_97 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
                    ArgY2_100 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
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
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult1_98 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
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
                  MR_Word ArgX1_101 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word ArgY1_102;
                  MR_Integer ArgX2_104 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  MR_Integer ArgY2_105;
                  MR_Word ArgX3_107 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                  MR_Word ArgY3_108;
                  MR_Word SubResult1_103;
                  MR_Integer Var_237;
                  MR_Integer Var_238;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 11)));
                  if (succeeded)
                  {
                    ArgY1_102 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
                    ArgY2_105 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                    ArgY3_108 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
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
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult1_103 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
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
                        else
                        {
                          succeeded = MR_TRUE;
                          succeeded = !(succeeded);
                          if (succeeded)
                          {
                            SubResult2_106 = (MR_Integer) 0;
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                      if (succeeded)
                        CompareResult_6 = SubResult2_106;
                      else
                        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_2[4]), &CompareResult_6, ((MR_Box) (ArgX3_107)), ((MR_Box) (ArgY3_108)));
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 12:
                {
                  MR_Word ArgX1_109 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  MR_Word ArgY1_110;
                  MR_Word ArgX2_112 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  MR_Word ArgY2_113;
                  MR_Word ArgX3_115 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                  MR_Word ArgY3_116;
                  MR_Word SubResult1_111;
                  MR_Word TypeInfo_187_187;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 12)));
                  if (succeeded)
                  {
                    ArgY1_110 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                    ArgY2_113 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                    ArgY3_116 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
                    TypeInfo_187_187 = (MR_Word) (&hlds__pred_name_scalar_common_2[5]);
                    mercury__builtin__compare_3_p_0(TypeInfo_187_187, &SubResult1_111, ((MR_Box) (ArgX1_109)), ((MR_Box) (ArgY1_110)));
                    succeeded = (SubResult1_111 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_111;
                    else
                    {
                      MR_Word SubResult2_114;

                      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_2[6]), &SubResult2_114, ((MR_Box) (ArgX2_112)), ((MR_Box) (ArgY2_113)));
                      succeeded = (SubResult2_114 != (MR_Integer) 0);
                      if (succeeded)
                        CompareResult_6 = SubResult2_114;
                      else
                        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_2[7]), &CompareResult_6, ((MR_Box) (ArgX3_115)), ((MR_Box) (ArgY3_116)));
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 13:
                {
                  MR_Word ArgX1_117 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word ArgY1_118;
                  MR_Integer Var_217;
                  MR_Integer Var_218;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 13)));
                  if (succeeded)
                  {
                    ArgY1_118 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
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
                  MR_Word ArgX1_119 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word ArgY1_120;
                  MR_Integer ArgX2_122 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  MR_Integer ArgY2_123;
                  MR_Word SubResult1_121;
                  MR_Integer Var_225;
                  MR_Integer Var_226;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 14)));
                  if (succeeded)
                  {
                    ArgY1_120 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
                    ArgY2_123 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
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
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult1_121 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
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
                  MR_Word ArgX1_124 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) >> 3)) & (MR_Integer) 1);
                  MR_Word ArgY1_125;
                  MR_Word ArgX2_127 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 7);
                  MR_Word ArgY2_128;
                  MR_Integer ArgX3_130 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  MR_Integer ArgY3_131;
                  MR_Integer ArgX4_133 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                  MR_Integer ArgY4_134;
                  MR_Integer ArgX5_136 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4))));
                  MR_Integer ArgY5_137;
                  MR_Word SubResult1_126;
                  MR_Integer Var_233;
                  MR_Integer Var_234;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 15)));
                  if (succeeded)
                  {
                    ArgY1_125 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))) >> 3)) & (MR_Integer) 1);
                    ArgY2_128 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 7);
                    ArgY3_131 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                    ArgY4_134 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
                    ArgY5_137 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 4))));
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
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult1_126 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
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
                        else
                        {
                          succeeded = MR_TRUE;
                          succeeded = !(succeeded);
                          if (succeeded)
                          {
                            SubResult2_129 = (MR_Integer) 0;
                            succeeded = MR_TRUE;
                          }
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
                          else
                          {
                            succeeded = MR_TRUE;
                            succeeded = !(succeeded);
                            if (succeeded)
                            {
                              SubResult3_132 = (MR_Integer) 0;
                              succeeded = MR_TRUE;
                            }
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
                            else
                            {
                              succeeded = MR_TRUE;
                              succeeded = !(succeeded);
                              if (succeeded)
                              {
                                SubResult4_135 = (MR_Integer) 0;
                                succeeded = MR_TRUE;
                              }
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
                  MR_Word ArgX1_138 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word ArgY1_139;
                  MR_Integer ArgX2_141 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  MR_Integer ArgY2_142;
                  MR_Word ArgX3_144 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                  MR_Word ArgY3_145;
                  MR_Word SubResult1_140;
                  MR_Integer Var_243;
                  MR_Integer Var_244;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 16)));
                  if (succeeded)
                  {
                    ArgY1_139 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
                    ArgY2_142 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                    ArgY3_145 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
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
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult1_140 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
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
                        else
                        {
                          succeeded = MR_TRUE;
                          succeeded = !(succeeded);
                          if (succeeded)
                          {
                            SubResult2_143 = (MR_Integer) 0;
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                      if (succeeded)
                        CompareResult_6 = SubResult2_143;
                      else
                        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_2[4]), &CompareResult_6, ((MR_Box) (ArgX3_144)), ((MR_Box) (ArgY3_145)));
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
          MR_Word ArgX2_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
          MR_Word ArgY2_10;
          MR_Integer ArgX3_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2))));
          MR_Integer ArgY3_12;
          MR_Integer ArgX4_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 3))));
          MR_Integer ArgY4_14;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
            ArgY2_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
            ArgY3_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
            ArgY4_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))));
            succeeded = (ArgX1_7 == ArgY1_8);
            if (succeeded)
            {
              succeeded = hlds__hlds_pred____Unify____pred_id_0_0(ArgX2_9, ArgY2_10);
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
          MR_Word ArgX1_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Word ArgY1_16;
          MR_Word ArgX2_17 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1))));
          MR_Word ArgY2_18;
          MR_Word ArgX3_19 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 2))) >> 1)) & (MR_Integer) 1);
          MR_Word ArgY3_20;
          MR_Word ArgX4_21 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 2))) & (MR_Integer) 1);
          MR_Word ArgY4_22;
          MR_Integer ArgX5_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 3))));
          MR_Integer ArgY5_24;
          MR_Integer Var_120;
          MR_Integer Var_121;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
            ArgY2_18 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
            ArgY3_20 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2))) >> 1)) & (MR_Integer) 1);
            ArgY4_22 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 1);
            ArgY5_24 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3))));
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
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgX1_25 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word ArgY1_26;
              MR_Word ArgX2_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Word ArgY2_28;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_26 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                ArgY2_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                succeeded = (ArgX1_25 == ArgY1_26);
                if (succeeded)
                  succeeded = hlds__pred_name____Unify____line_number_and_counter_0_0(ArgX2_27, ArgY2_28);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_29 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word ArgY1_30;
              MR_Word ArgX2_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Word ArgY2_32;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_30 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                ArgY2_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                succeeded = (ArgX1_29 == ArgY1_30);
                if (succeeded)
                  succeeded = hlds__pred_name____Unify____line_number_and_counter_0_0(ArgX2_31, ArgY2_32);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgX1_33 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word ArgY1_34;
              MR_Word ArgX2_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Word ArgY2_36;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
              if (succeeded)
              {
                ArgY1_34 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                ArgY2_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                succeeded = (ArgX1_33 == ArgY1_34);
                if (succeeded)
                  succeeded = hlds__pred_name____Unify____line_number_and_counter_0_0(ArgX2_35, ArgY2_36);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ArgX1_37 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word ArgY1_38;
              MR_Integer ArgX2_39 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Integer ArgY2_40;
              MR_Word ArgX3_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
              MR_Word ArgY3_42;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
              if (succeeded)
              {
                ArgY1_38 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                ArgY2_40 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                ArgY3_42 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
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
              MR_Word ArgX1_43 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word ArgY1_44;
              MR_Integer ArgX2_45 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Integer ArgY2_46;
              MR_Word ArgX3_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
              MR_Word ArgY3_48;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4)));
              if (succeeded)
              {
                ArgY1_44 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                ArgY2_46 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                ArgY3_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
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
              MR_Word ArgX1_49 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word ArgY1_50;
              MR_Integer ArgX2_51 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Integer ArgY2_52;
              MR_Word ArgX3_53 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
              MR_Word ArgY3_54;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5)));
              if (succeeded)
              {
                ArgY1_50 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                ArgY2_52 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                ArgY3_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
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
              MR_Word ArgX1_55 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word ArgY1_56;
              MR_Integer ArgX2_57 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Integer ArgY2_58;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                ArgY1_56 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                ArgY2_58 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                succeeded = (ArgX1_55 == ArgY1_56);
                if (succeeded)
                  succeeded = (ArgX2_57 == ArgY2_58);
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ArgX1_59 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word ArgY1_60;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 7)));
              if (succeeded)
              {
                ArgY1_60 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                succeeded = (ArgX1_59 == ArgY1_60);
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word TypeInfo_112_112;
              MR_Word ArgX1_61 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word ArgY1_62;
              MR_Integer ArgX2_63 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Integer ArgY2_64;
              MR_Word ArgX3_65 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
              MR_Word ArgY3_66;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 8)));
              if (succeeded)
              {
                ArgY1_62 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                ArgY2_64 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                ArgY3_66 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                succeeded = (ArgX1_61 == ArgY1_62);
                if (succeeded)
                {
                  succeeded = (ArgX2_63 == ArgY2_64);
                  if (succeeded)
                  {
                    TypeInfo_112_112 = (MR_Word) (&hlds__pred_name_scalar_common_2[4]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_112_112, ((MR_Box) (ArgX3_65)), ((MR_Box) (ArgY3_66)));
                  }
                }
              }
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word ArgX1_67 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word ArgY1_68;
              MR_Integer ArgX2_69 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Integer ArgY2_70;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 9)));
              if (succeeded)
              {
                ArgY1_68 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                ArgY2_70 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                succeeded = (ArgX1_67 == ArgY1_68);
                if (succeeded)
                  succeeded = (ArgX2_69 == ArgY2_70);
              }
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word ArgX1_71 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word ArgY1_72;
              MR_Integer ArgX2_73 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Integer ArgY2_74;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 10)));
              if (succeeded)
              {
                ArgY1_72 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                ArgY2_74 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                succeeded = (ArgX1_71 == ArgY1_72);
                if (succeeded)
                  succeeded = (ArgX2_73 == ArgY2_74);
              }
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word TypeInfo_116_116;
              MR_Word ArgX1_75 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word ArgY1_76;
              MR_Integer ArgX2_77 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Integer ArgY2_78;
              MR_Word ArgX3_79 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
              MR_Word ArgY3_80;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 11)));
              if (succeeded)
              {
                ArgY1_76 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                ArgY2_78 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                ArgY3_80 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                succeeded = (ArgX1_75 == ArgY1_76);
                if (succeeded)
                {
                  succeeded = (ArgX2_77 == ArgY2_78);
                  if (succeeded)
                  {
                    TypeInfo_116_116 = (MR_Word) (&hlds__pred_name_scalar_common_2[4]);
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
              MR_Word ArgX1_81 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_82;
              MR_Word ArgX2_83 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Word ArgY2_84;
              MR_Word ArgX3_85 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
              MR_Word ArgY3_86;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 12)));
              if (succeeded)
              {
                ArgY1_82 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_84 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                ArgY3_86 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                TypeInfo_113_113 = (MR_Word) (&hlds__pred_name_scalar_common_2[5]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_113_113, ((MR_Box) (ArgX1_81)), ((MR_Box) (ArgY1_82)));
                if (succeeded)
                {
                  TypeInfo_114_114 = (MR_Word) (&hlds__pred_name_scalar_common_2[6]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_114_114, ((MR_Box) (ArgX2_83)), ((MR_Box) (ArgY2_84)));
                  if (succeeded)
                  {
                    TypeInfo_115_115 = (MR_Word) (&hlds__pred_name_scalar_common_2[7]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_115_115, ((MR_Box) (ArgX3_85)), ((MR_Box) (ArgY3_86)));
                  }
                }
              }
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word ArgX1_87 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word ArgY1_88;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 13)));
              if (succeeded)
              {
                ArgY1_88 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                succeeded = (ArgX1_87 == ArgY1_88);
              }
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Word ArgX1_89 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word ArgY1_90;
              MR_Integer ArgX2_91 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Integer ArgY2_92;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 14)));
              if (succeeded)
              {
                ArgY1_90 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                ArgY2_92 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                succeeded = (ArgX1_89 == ArgY1_90);
                if (succeeded)
                  succeeded = (ArgX2_91 == ArgY2_92);
              }
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Word ArgX1_93 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) >> 3)) & (MR_Integer) 1);
              MR_Word ArgY1_94;
              MR_Word ArgX2_95 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 7);
              MR_Word ArgY2_96;
              MR_Integer ArgX3_97 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Integer ArgY3_98;
              MR_Integer ArgX4_99 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
              MR_Integer ArgY4_100;
              MR_Integer ArgX5_101 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 4))));
              MR_Integer ArgY5_102;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 15)));
              if (succeeded)
              {
                ArgY1_94 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) >> 3)) & (MR_Integer) 1);
                ArgY2_96 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 7);
                ArgY3_98 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                ArgY4_100 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                ArgY5_102 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4))));
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
              MR_Word ArgX1_103 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word ArgY1_104;
              MR_Integer ArgX2_105 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Integer ArgY2_106;
              MR_Word ArgX3_107 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
              MR_Word ArgY3_108;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 16)));
              if (succeeded)
              {
                ArgY1_104 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                ArgY2_106 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                ArgY3_108 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                succeeded = (ArgX1_103 == ArgY1_104);
                if (succeeded)
                {
                  succeeded = (ArgX2_105 == ArgY2_106);
                  if (succeeded)
                  {
                    TypeInfo_117_117 = (MR_Word) (&hlds__pred_name_scalar_common_2[4]);
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
  MR_Integer CastX_81 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_82 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_81 == CastY_82);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_100 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));

                hlds__pred_name____Compare____user_made_0_0(HeadVar__1_1, Var_100, ArgY1_5);
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
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_92 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgY1_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

                hlds__pred_name____Compare____compiler_made_0_0(HeadVar__1_1, Var_92, ArgY1_20);
              }
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 3:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_93 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Var_94 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_95 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

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
                MR_Word ArgY1_39 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));
                MR_Word ArgY2_42 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 1))));
                MR_Word ArgY3_45 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 2))));
                MR_Word SubResult1_40;

                hlds__pred_name____Compare____pred_transform_0_0(&SubResult1_40, Var_95, ArgY1_39);
                succeeded = (SubResult1_40 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_40;
                else
                {
                  MR_Word SubResult2_43;

                  hlds__pred_name____Compare____pred_origin_0_0(&SubResult2_43, Var_94, ArgY2_42);
                  succeeded = (SubResult2_43 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult2_43;
                  else
                    hlds__hlds_pred____Compare____pred_id_0_0(HeadVar__1_1, Var_93, ArgY3_45);
                }
              }
              break;
            case (MR_Integer) 3:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Integer Var_96 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
          MR_Word Var_97 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Var_98 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_99 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
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
                MR_Word ArgY1_71 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))));
                MR_Word ArgY2_74 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                MR_Word ArgY3_77 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                MR_Integer ArgY4_80 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
                MR_Word SubResult1_72;

                hlds__pred_name____Compare____proc_transform_0_0(&SubResult1_72, Var_99, ArgY1_71);
                succeeded = (SubResult1_72 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_72;
                else
                {
                  MR_Word SubResult2_75;

                  hlds__pred_name____Compare____pred_origin_0_0(&SubResult2_75, Var_98, ArgY2_74);
                  succeeded = (SubResult2_75 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult2_75;
                  else
                  {
                    MR_Word SubResult3_78;

                    hlds__hlds_pred____Compare____pred_id_0_0(&SubResult3_78, Var_97, ArgY3_77);
                    succeeded = (SubResult3_78 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult3_78;
                    else
                    {
                      succeeded = (Var_96 < ArgY4_80);
                      if (succeeded)
                        *HeadVar__1_1 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (Var_96 > ArgY4_80);
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
  MR_Integer CastX_131 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_132 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_131 == CastY_132);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_154 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Var_155 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_156 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
                MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
                MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
                MR_Word SubResult1_6;
                MR_Integer Var_157 = (MR_Integer) (Var_156);
                MR_Integer Var_158 = (MR_Integer) (ArgY1_5);

                succeeded = (Var_157 < Var_158);
                if (succeeded)
                {
                  SubResult1_6 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = (Var_157 > Var_158);
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

                  mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult2_9, Var_155, ArgY2_8);
                  succeeded = (SubResult2_9 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult2_9;
                  else
                  {
                    MR_Integer Var_159 = (MR_Integer) (Var_154);
                    MR_Integer Var_160 = (MR_Integer) (ArgY3_11);

                    succeeded = (Var_159 < Var_160);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (Var_159 > Var_160);
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
              }
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer Var_151 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
          MR_Integer Var_152 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
          MR_String Var_153 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 1:
              {
                MR_String ArgY1_40 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
                MR_Integer ArgY2_43 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
                MR_Integer ArgY3_46 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 2))));
                MR_Word SubResult1_41;

                mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_41, Var_153, ArgY1_40);
                succeeded = (SubResult1_41 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_41;
                else
                {
                  MR_Word SubResult2_44;

                  succeeded = (Var_152 < ArgY2_43);
                  if (succeeded)
                  {
                    SubResult2_44 = (MR_Integer) 1;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = (Var_152 > ArgY2_43);
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
                    *HeadVar__1_1 = SubResult2_44;
                  else
                  {
                    succeeded = (Var_151 < ArgY3_46);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (Var_151 > ArgY3_46);
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
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_147 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_148 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

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
                MR_Word ArgY1_73 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));
                MR_Word ArgY2_76 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 1))));
                MR_Word SubResult1_74;

                parse_tree__prog_data____Compare____class_id_0_0(&SubResult1_74, Var_148, ArgY1_73);
                succeeded = (SubResult1_74 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_74;
                else
                  parse_tree__prog_data____Compare____pf_sym_name_arity_0_0(HeadVar__1_1, Var_147, ArgY2_76);
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
              MR_Word Var_149 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
              MR_Word Var_150 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) HeadVar__3_3)) {
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
                  switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word ArgY1_100 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                        MR_Word ArgY2_103 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                        MR_Word SubResult1_101;

                        mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult1_101, Var_150, ArgY1_100);
                        succeeded = (SubResult1_101 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult1_101;
                        else
                          hlds__pred_name____Compare____instance_method_constraints_0_0(HeadVar__1_1, Var_149, ArgY2_103);
                      }
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer Var_145 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
              MR_String Var_146 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) HeadVar__3_3)) {
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
                  switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_String ArgY1_127 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                        MR_Integer ArgY2_130 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                        MR_Word SubResult1_128;

                        mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_128, Var_146, ArgY1_127);
                        succeeded = (SubResult1_128 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult1_128;
                        else
                        {
                          succeeded = (Var_145 < ArgY2_130);
                          if (succeeded)
                            *HeadVar__1_1 = (MR_Integer) 1;
                          else
                          {
                            succeeded = (Var_145 > ArgY2_130);
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
  MR_Integer CastX_400 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_401 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_400 == CastY_401);
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
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
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
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
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
                }
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
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
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
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
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
                }
                break;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer Var_430 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_431 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

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
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 3:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
                MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
                MR_Word SubResult1_6;

                hlds__hlds_pred____Compare____pred_id_0_0(&SubResult1_6, Var_431, ArgY1_5);
                succeeded = (SubResult1_6 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_6;
                else
                {
                  succeeded = (Var_430 < ArgY2_8);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (Var_430 > ArgY2_8);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 2;
                    else
                      *HeadVar__1_1 = (MR_Integer) 0;
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
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer Var_420 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

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
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 3:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 2:
              {
                MR_Integer ArgY1_50 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));

                succeeded = (Var_420 < ArgY1_50);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 1;
                else
                {
                  succeeded = (Var_420 > ArgY1_50);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 2;
                  else
                    *HeadVar__1_1 = (MR_Integer) 0;
                }
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
              MR_Word Var_417 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
              MR_Integer Var_418 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

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
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 3:
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
                        MR_Integer ArgY1_82 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                        MR_Word ArgY2_85 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                        MR_Word SubResult1_83;

                        succeeded = (Var_418 < ArgY1_82);
                        if (succeeded)
                        {
                          SubResult1_83 = (MR_Integer) 1;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = (Var_418 > ArgY1_82);
                          if (succeeded)
                          {
                            SubResult1_83 = (MR_Integer) 2;
                            succeeded = MR_TRUE;
                          }
                          else
                          {
                            succeeded = MR_TRUE;
                            succeeded = !(succeeded);
                            if (succeeded)
                            {
                              SubResult1_83 = (MR_Integer) 0;
                              succeeded = MR_TRUE;
                            }
                          }
                        }
                        if (succeeded)
                          *HeadVar__1_1 = SubResult1_83;
                        else
                          mercury__builtin__compare_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_2[4]), HeadVar__1_1, ((MR_Box) (Var_417)), ((MR_Box) (ArgY2_85)));
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
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_429 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

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
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 3:
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
                        MR_Word ArgY1_125 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));

                        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_2[4]), HeadVar__1_1, ((MR_Box) (Var_429)), ((MR_Box) (ArgY1_125)));
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
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer Var_423 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
              MR_Integer Var_424 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

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
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 3:
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
                        MR_Integer ArgY1_159 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                        MR_Integer ArgY2_162 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                        MR_Word SubResult1_160;

                        succeeded = (Var_424 < ArgY1_159);
                        if (succeeded)
                        {
                          SubResult1_160 = (MR_Integer) 1;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = (Var_424 > ArgY1_159);
                          if (succeeded)
                          {
                            SubResult1_160 = (MR_Integer) 2;
                            succeeded = MR_TRUE;
                          }
                          else
                          {
                            succeeded = MR_TRUE;
                            succeeded = !(succeeded);
                            if (succeeded)
                            {
                              SubResult1_160 = (MR_Integer) 0;
                              succeeded = MR_TRUE;
                            }
                          }
                        }
                        if (succeeded)
                          *HeadVar__1_1 = SubResult1_160;
                        else
                        {
                          succeeded = (Var_423 < ArgY2_162);
                          if (succeeded)
                            *HeadVar__1_1 = (MR_Integer) 1;
                          else
                          {
                            succeeded = (Var_423 > ArgY2_162);
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
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Integer Var_425 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
              MR_Integer Var_426 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

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
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 3:
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
                        MR_Integer ArgY1_205 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                        MR_Integer ArgY2_208 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                        MR_Word SubResult1_206;

                        succeeded = (Var_426 < ArgY1_205);
                        if (succeeded)
                        {
                          SubResult1_206 = (MR_Integer) 1;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = (Var_426 > ArgY1_205);
                          if (succeeded)
                          {
                            SubResult1_206 = (MR_Integer) 2;
                            succeeded = MR_TRUE;
                          }
                          else
                          {
                            succeeded = MR_TRUE;
                            succeeded = !(succeeded);
                            if (succeeded)
                            {
                              SubResult1_206 = (MR_Integer) 0;
                              succeeded = MR_TRUE;
                            }
                          }
                        }
                        if (succeeded)
                          *HeadVar__1_1 = SubResult1_206;
                        else
                        {
                          succeeded = (Var_425 < ArgY2_208);
                          if (succeeded)
                            *HeadVar__1_1 = (MR_Integer) 1;
                          else
                          {
                            succeeded = (Var_425 > ArgY2_208);
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
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Integer Var_427 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
              MR_Integer Var_428 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

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
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 3:
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
                        MR_Integer ArgY1_251 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                        MR_Integer ArgY2_254 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                        MR_Word SubResult1_252;

                        succeeded = (Var_428 < ArgY1_251);
                        if (succeeded)
                        {
                          SubResult1_252 = (MR_Integer) 1;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = (Var_428 > ArgY1_251);
                          if (succeeded)
                          {
                            SubResult1_252 = (MR_Integer) 2;
                            succeeded = MR_TRUE;
                          }
                          else
                          {
                            succeeded = MR_TRUE;
                            succeeded = !(succeeded);
                            if (succeeded)
                            {
                              SubResult1_252 = (MR_Integer) 0;
                              succeeded = MR_TRUE;
                            }
                          }
                        }
                        if (succeeded)
                          *HeadVar__1_1 = SubResult1_252;
                        else
                        {
                          succeeded = (Var_427 < ArgY2_254);
                          if (succeeded)
                            *HeadVar__1_1 = (MR_Integer) 1;
                          else
                          {
                            succeeded = (Var_427 > ArgY2_254);
                            if (succeeded)
                              *HeadVar__1_1 = (MR_Integer) 2;
                            else
                              *HeadVar__1_1 = (MR_Integer) 0;
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
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Var_419 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

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
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 3:
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
                        MR_Word ArgY1_290 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));

                        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_2[4]), HeadVar__1_1, ((MR_Box) (Var_419)), ((MR_Box) (ArgY1_290)));
                      }
                      break;
                    case (MR_Integer) 6:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Var_421 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
              MR_Integer Var_422 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

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
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 3:
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
                        MR_Integer ArgY1_345 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                        MR_Word ArgY2_348 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                        MR_Word SubResult1_346;

                        succeeded = (Var_422 < ArgY1_345);
                        if (succeeded)
                        {
                          SubResult1_346 = (MR_Integer) 1;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = (Var_422 > ArgY1_345);
                          if (succeeded)
                          {
                            SubResult1_346 = (MR_Integer) 2;
                            succeeded = MR_TRUE;
                          }
                          else
                          {
                            succeeded = MR_TRUE;
                            succeeded = !(succeeded);
                            if (succeeded)
                            {
                              SubResult1_346 = (MR_Integer) 0;
                              succeeded = MR_TRUE;
                            }
                          }
                        }
                        if (succeeded)
                          *HeadVar__1_1 = SubResult1_346;
                        else
                          mercury__builtin__compare_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_2[4]), HeadVar__1_1, ((MR_Box) (Var_421)), ((MR_Box) (ArgY2_348)));
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
hlds__pred_name____Compare____pred_transform_0_0(
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
                  case (MR_Integer) 2:
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
            }
            break;
          case (MR_Integer) 2:
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
                  case (MR_Integer) 2:
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
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

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
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

                mercury__builtin__compare_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_2[3]), HeadVar__1_1, ((MR_Box) (Var_29)), ((MR_Box) (ArgY1_5)));
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
          MR_Integer Var_28 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

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
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 2:
              {
                MR_Integer ArgY1_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));

                succeeded = (Var_28 < ArgY1_14);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 1;
                else
                {
                  succeeded = (Var_28 > ArgY1_14);
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
          MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
            succeeded = hlds__pred_name____Unify____user_made_0_0(ArgX1_3, ArgY1_4);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
            succeeded = hlds__pred_name____Unify____compiler_made_0_0(ArgX1_5, ArgY1_6);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_8;
          MR_Word ArgX2_9 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1))));
          MR_Word ArgY2_10;
          MR_Word ArgX3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 2))));
          MR_Word ArgY3_12;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_8 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_10 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
            ArgY3_12 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2))));
            succeeded = hlds__pred_name____Unify____pred_transform_0_0(ArgX1_7, ArgY1_8);
            if (succeeded)
            {
              succeeded = hlds__pred_name____Unify____pred_origin_0_0(ArgX2_9, ArgY2_10);
              if (succeeded)
                succeeded = hlds__hlds_pred____Unify____pred_id_0_0(ArgX3_11, ArgY3_12);
            }
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word ArgX1_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_14;
          MR_Word ArgX2_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
          MR_Word ArgY2_16;
          MR_Word ArgX3_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
          MR_Word ArgY3_18;
          MR_Integer ArgX4_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
          MR_Integer ArgY4_20;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3);
          if (succeeded)
          {
            ArgY1_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
            ArgY3_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
            ArgY4_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
            succeeded = hlds__pred_name____Unify____proc_transform_0_0(ArgX1_13, ArgY1_14);
            if (succeeded)
            {
              succeeded = hlds__pred_name____Unify____pred_origin_0_0(ArgX2_15, ArgY2_16);
              if (succeeded)
              {
                succeeded = hlds__hlds_pred____Unify____pred_id_0_0(ArgX3_17, ArgY3_18);
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
  MR_Integer CastX_27 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_28 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_27 == CastY_28);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Word ArgY1_4;
          MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
          MR_Word ArgY2_6;
          MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
          MR_Word ArgY3_8;
          MR_Integer Var_34;
          MR_Integer Var_35;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
            ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
            ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
            succeeded = (ArgX1_3 == ArgY1_4);
            if (succeeded)
            {
              succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX2_5, ArgY2_6);
              if (succeeded)
              {
                Var_34 = (MR_Integer) (ArgX3_7);
                Var_35 = (MR_Integer) (ArgY3_8);
                succeeded = (Var_34 == Var_35);
              }
            }
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String ArgX1_9 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
          MR_String ArgY1_10;
          MR_Integer ArgX2_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
          MR_Integer ArgY2_12;
          MR_Integer ArgX3_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2))));
          MR_Integer ArgY3_14;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_10 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
            ArgY3_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
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
          MR_Word ArgX1_15 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_16;
          MR_Word ArgX2_17 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1))));
          MR_Word ArgY2_18;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_16 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_18 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
            succeeded = parse_tree__prog_data____Unify____class_id_0_0(ArgX1_15, ArgY1_16);
            if (succeeded)
              succeeded = parse_tree__prog_data____Unify____pf_sym_name_arity_0_0(ArgX2_17, ArgY2_18);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgX1_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_20;
              MR_Word ArgX2_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Word ArgY2_22;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_19, ArgY1_20);
                if (succeeded)
                  succeeded = hlds__pred_name____Unify____instance_method_constraints_0_0(ArgX2_21, ArgY2_22);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String ArgX1_23 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_String ArgY1_24;
              MR_Integer ArgX2_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Integer ArgY2_26;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_24 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_26 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                succeeded = (strcmp(ArgX1_23, ArgY1_24) == 0);
                if (succeeded)
                  succeeded = (ArgX2_25 == ArgY2_26);
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
  MR_Integer CastX_41 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_42 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_41 == CastY_42);
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
              MR_Integer CastX_29 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_30 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_30 == CastX_29);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer CastX_35 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_36 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_36 == CastX_35);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer CastX_37 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_38 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_38 == CastX_37);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Integer CastX_39 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_40 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_40 == CastX_39);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_4;
          MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
          MR_Integer ArgY2_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
            succeeded = hlds__hlds_pred____Unify____pred_id_0_0(ArgX1_3, ArgY1_4);
            if (succeeded)
              succeeded = (ArgX2_5 == ArgY2_6);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer ArgX1_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
          MR_Integer ArgY1_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
            succeeded = (ArgX1_7 == ArgY1_8);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word TypeInfo_43_43;
              MR_Integer ArgX1_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Integer ArgY1_10;
              MR_Word ArgX2_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Word ArgY2_12;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                succeeded = (ArgX1_9 == ArgY1_10);
                if (succeeded)
                {
                  TypeInfo_43_43 = (MR_Word) (&hlds__pred_name_scalar_common_2[4]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_43_43, ((MR_Box) (ArgX2_11)), ((MR_Box) (ArgY2_12)));
                }
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word TypeInfo_46_46;
              MR_Word ArgX1_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_14;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                TypeInfo_46_46 = (MR_Word) (&hlds__pred_name_scalar_common_2[4]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_46_46, ((MR_Box) (ArgX1_13)), ((MR_Box) (ArgY1_14)));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer ArgX1_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Integer ArgY1_16;
              MR_Integer ArgX2_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Integer ArgY2_18;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
              if (succeeded)
              {
                ArgY1_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                succeeded = (ArgX1_15 == ArgY1_16);
                if (succeeded)
                  succeeded = (ArgX2_17 == ArgY2_18);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Integer ArgX1_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Integer ArgY1_20;
              MR_Integer ArgX2_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Integer ArgY2_22;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
              if (succeeded)
              {
                ArgY1_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                succeeded = (ArgX1_19 == ArgY1_20);
                if (succeeded)
                  succeeded = (ArgX2_21 == ArgY2_22);
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Integer ArgX1_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Integer ArgY1_24;
              MR_Integer ArgX2_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Integer ArgY2_26;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4)));
              if (succeeded)
              {
                ArgY1_24 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_26 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                succeeded = (ArgX1_23 == ArgY1_24);
                if (succeeded)
                  succeeded = (ArgX2_25 == ArgY2_26);
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word TypeInfo_44_44;
              MR_Word ArgX1_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_28;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5)));
              if (succeeded)
              {
                ArgY1_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                TypeInfo_44_44 = (MR_Word) (&hlds__pred_name_scalar_common_2[4]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_44_44, ((MR_Box) (ArgX1_27)), ((MR_Box) (ArgY1_28)));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word TypeInfo_45_45;
              MR_Integer ArgX1_31 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Integer ArgY1_32;
              MR_Word ArgX2_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Word ArgY2_34;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                ArgY1_32 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                succeeded = (ArgX1_31 == ArgY1_32);
                if (succeeded)
                {
                  TypeInfo_45_45 = (MR_Word) (&hlds__pred_name_scalar_common_2[4]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_45_45, ((MR_Box) (ArgX2_33)), ((MR_Box) (ArgY2_34)));
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
  MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_13 == CastY_14);
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
              MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_8 == CastX_7);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_10 == CastX_9);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_12 == CastX_11);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeInfo_15_15;
          MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
            TypeInfo_15_15 = (MR_Word) (&hlds__pred_name_scalar_common_2[3]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_15, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
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
hlds__pred_name____Compare____compiler_made_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_164 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_165 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_164 == CastY_165);
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
                }
                break;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_186 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_187 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 3);

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
                MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 3);
                MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
                MR_Word SubResult1_6;
                MR_Integer Var_194 = (MR_Integer) (Var_187);
                MR_Integer Var_195 = (MR_Integer) (ArgY1_5);

                succeeded = (Var_194 < Var_195);
                if (succeeded)
                {
                  SubResult1_6 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = (Var_194 > Var_195);
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
                  parse_tree__prog_data____Compare____type_ctor_0_0(HeadVar__1_1, Var_186, ArgY2_8);
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
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer Var_177 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
          MR_Integer Var_178 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

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
                MR_Integer ArgY1_35 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));
                MR_Integer ArgY2_38 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 1))));
                MR_Word SubResult1_36;

                succeeded = (Var_178 < ArgY1_35);
                if (succeeded)
                {
                  SubResult1_36 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = (Var_178 > ArgY1_35);
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
                  *HeadVar__1_1 = SubResult1_36;
                else
                {
                  succeeded = (Var_177 < ArgY2_38);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (Var_177 > ArgY2_38);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 2;
                    else
                      *HeadVar__1_1 = (MR_Integer) 0;
                  }
                }
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
              MR_Word Var_182 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 3);
              MR_Word Var_183 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

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
                        MR_Word ArgY1_65 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                        MR_Word ArgY2_68 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))) & (MR_Integer) 3);
                        MR_Word SubResult1_66;

                        parse_tree__prog_data____Compare____type_ctor_0_0(&SubResult1_66, Var_183, ArgY1_65);
                        succeeded = (SubResult1_66 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult1_66;
                        else
                        {
                          MR_Integer Var_190 = (MR_Integer) (Var_182);
                          MR_Integer Var_191 = (MR_Integer) (ArgY2_68);

                          succeeded = (Var_190 < Var_191);
                          if (succeeded)
                            *HeadVar__1_1 = (MR_Integer) 1;
                          else
                          {
                            succeeded = (Var_190 > Var_191);
                            if (succeeded)
                              *HeadVar__1_1 = (MR_Integer) 2;
                            else
                              *HeadVar__1_1 = (MR_Integer) 0;
                          }
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
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_184 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 1);
              MR_Word Var_185 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

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
                        MR_Word ArgY1_95 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                        MR_Word ArgY2_98 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))) & (MR_Integer) 1);
                        MR_Word SubResult1_96;

                        parse_tree__prog_data____Compare____pf_sym_name_arity_0_0(&SubResult1_96, Var_185, ArgY1_95);
                        succeeded = (SubResult1_96 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult1_96;
                        else
                        {
                          MR_Integer Var_192 = (MR_Integer) (Var_184);
                          MR_Integer Var_193 = (MR_Integer) (ArgY2_98);

                          succeeded = (Var_192 < Var_193);
                          if (succeeded)
                            *HeadVar__1_1 = (MR_Integer) 1;
                          else
                          {
                            succeeded = (Var_192 > Var_193);
                            if (succeeded)
                              *HeadVar__1_1 = (MR_Integer) 2;
                            else
                              *HeadVar__1_1 = (MR_Integer) 0;
                          }
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Var_179 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))) & (MR_Integer) 15);
              MR_String Var_180 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
              MR_Word Var_181 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

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
                        MR_Word ArgY1_129 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                        MR_String ArgY2_132 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                        MR_Word ArgY3_135 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))) & (MR_Integer) 15);
                        MR_Word SubResult1_130;

                        mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult1_130, Var_181, ArgY1_129);
                        succeeded = (SubResult1_130 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult1_130;
                        else
                        {
                          MR_Word SubResult2_133;

                          mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult2_133, Var_180, ArgY2_132);
                          succeeded = (SubResult2_133 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult2_133;
                          else
                          {
                            MR_Integer Var_188 = (MR_Integer) (Var_179);
                            MR_Integer Var_189 = (MR_Integer) (ArgY3_135);

                            succeeded = (Var_188 < Var_189);
                            if (succeeded)
                              *HeadVar__1_1 = (MR_Integer) 1;
                            else
                            {
                              succeeded = (Var_188 > Var_189);
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
  MR_Integer CastX_29 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_30 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_29 == CastY_30);
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
              MR_Integer CastX_25 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_26 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_26 == CastX_25);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer CastX_27 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_28 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_28 == CastX_27);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 3);
          MR_Word ArgY1_4;
          MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
          MR_Word ArgY2_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 3);
            ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
            succeeded = (ArgX1_3 == ArgY1_4);
            if (succeeded)
              succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(ArgX2_5, ArgY2_6);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer ArgX1_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
          MR_Integer ArgY1_8;
          MR_Integer ArgX2_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1))));
          MR_Integer ArgY2_10;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
            succeeded = (ArgX1_7 == ArgY1_8);
            if (succeeded)
              succeeded = (ArgX2_9 == ArgY2_10);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgX1_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_12;
              MR_Word ArgX2_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))) & (MR_Integer) 3);
              MR_Word ArgY2_14;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 3);
                succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(ArgX1_11, ArgY1_12);
                if (succeeded)
                  succeeded = (ArgX2_13 == ArgY2_14);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_16;
              MR_Word ArgX2_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))) & (MR_Integer) 1);
              MR_Word ArgY2_18;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_18 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 1);
                succeeded = parse_tree__prog_data____Unify____pf_sym_name_arity_0_0(ArgX1_15, ArgY1_16);
                if (succeeded)
                  succeeded = (ArgX2_17 == ArgY2_18);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgX1_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_20;
              MR_String ArgX2_21 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_String ArgY2_22;
              MR_Word ArgX3_23 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))) & (MR_Integer) 15);
              MR_Word ArgY3_24;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
              if (succeeded)
              {
                ArgY1_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_22 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                ArgY3_24 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))) & (MR_Integer) 15);
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
      {
        MR_Word OriginUser_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Origin_4, (MR_Integer) 0))));

        switch (MR_tag((MR_Word) OriginUser_7)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 2:
            Name_6 = Name0_5;
            break;
          case (MR_Integer) 1:
            {
              MR_String FileName0_17 = ((MR_String) ((MR_hl_field(MR_mktag(1), OriginUser_7, (MR_Integer) 0))));
              MR_Integer LineNum_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), OriginUser_7, (MR_Integer) 1))));
              MR_Integer SeqNo_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), OriginUser_7, (MR_Integer) 2))));
              MR_String Var_20;

              succeeded = mercury__string__append_3_p_1((MR_String) "IntroducedFrom", &Var_20, Name0_5);
              if (succeeded)
              {
                MR_String FileName_21;

                mercury__string__replace_all_4_p_0(FileName0_17, (MR_String) ".", (MR_String) "_", &FileName_21);
                succeeded = (SeqNo_19 > (MR_Integer) 1);
                if (succeeded)
                {
                  MR_String Var_69;
                  MR_String Var_77;
                  MR_String Var_78;
                  MR_String Var_80;
                  MR_String Var_81;
                  MR_String Var_88;

                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), LineNum_18, &Var_69);
                  Var_77 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_69);
                  Var_78 = mercury__string__f_43_43_2_f_0(FileName_21, Var_77);
                  Var_80 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_78);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), SeqNo_19, &Var_81);
                  Var_88 = mercury__string__f_43_43_2_f_0(Var_81, Var_80);
                  Name_6 = mercury__string__f_43_43_2_f_0((MR_String) "lambda", Var_88);
                }
                else
                {
                  MR_String Var_90;
                  MR_String Var_98;
                  MR_String Var_99;

                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), LineNum_18, &Var_90);
                  Var_98 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_90);
                  Var_99 = mercury__string__f_43_43_2_f_0(FileName_21, Var_98);
                  Name_6 = mercury__string__f_43_43_2_f_0((MR_String) "lambda_", Var_99);
                }
              }
              else
                Name_6 = Name0_5;
            }
            break;
          case (MR_Integer) 3:
            Name_6 = Name0_5;
            break;
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word OriginCompiler_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Origin_4, (MR_Integer) 0))));

        switch (MR_tag((MR_Word) OriginCompiler_22)) {
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
            Name_6 = Name0_5;
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word PredTransform_34 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Origin_4, (MR_Integer) 0))));
        MR_Word OldOrigin_35 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Origin_4, (MR_Integer) 1))));
        MR_String OldName_37;

        OldName_37 = hlds__pred_name__layout_origin_name_2_f_0(OldOrigin_35, (MR_String) "");
        succeeded = (strcmp(OldName_37, (MR_String) "") == 0);
        if (succeeded)
          Name_6 = Name0_5;
        else
        {
          MR_String Var_60;
          MR_String Var_62;

          Var_62 = hlds__pred_name__layout_pred_transform_name_1_f_0(PredTransform_34);
          Var_60 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_62);
          Name_6 = mercury__string__f_43_43_2_f_0(OldName_37, Var_60);
        }
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word ProcTransform_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Origin_4, (MR_Integer) 0))));
        MR_Integer ProcId_40 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Origin_4, (MR_Integer) 3))));
        MR_Word OldOrigin_67 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Origin_4, (MR_Integer) 1))));
        MR_String OldName_68;

        OldName_68 = hlds__pred_name__layout_origin_name_2_f_0(OldOrigin_67, (MR_String) "");
        succeeded = (strcmp(OldName_68, (MR_String) "") == 0);
        if (!(succeeded))
          succeeded = (ProcTransform_38 == (MR_Word) ((MR_Unsigned) 8U));
        if (succeeded)
          Name_6 = Name0_5;
        else
        {
          MR_String Var_64;
          MR_String Var_66;

          Var_66 = hlds__pred_name__layout_proc_transform_name_2_f_0(ProcTransform_38, ProcId_40);
          Var_64 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_66);
          Name_6 = mercury__string__f_43_43_2_f_0(OldName_68, Var_64);
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
        MR_Integer CallerProcId_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), ProcTransform_4, (MR_Integer) 1))));
        MR_String Var_16;
        MR_Integer Var_17;

        Var_17 = hlds__hlds_pred__proc_id_to_int_1_f_0(CallerProcId_8);
        Var_16 = mercury__string__int_to_string_1_f_0(Var_17);
        Name_6 = mercury__string__f_43_43_2_f_0((MR_String) "hoproc", Var_16);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Integer SeqNum_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), ProcTransform_4, (MR_Integer) 0))));
        MR_String Var_19;

        Var_19 = mercury__string__int_to_string_1_f_0(SeqNum_9);
        Name_6 = mercury__string__f_43_43_2_f_0((MR_String) "ho", Var_19);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ProcTransform_4, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String Var_26;
            MR_Word Var_28;
            MR_Word Posns_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ProcTransform_4, (MR_Integer) 2))));

            Var_28 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__pred_name_scalar_common_1[6]), Posns_46);
            Var_26 = mercury__string__join_list_2_f_0((MR_String) "_", Var_28);
            Name_6 = mercury__string__f_43_43_2_f_0((MR_String) "acc_", Var_26);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Posns_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ProcTransform_4, (MR_Integer) 1))));
            MR_String Var_21;
            MR_Word Var_23;

            Var_23 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__pred_name_scalar_common_1[7]), Posns_10);
            Var_21 = mercury__string__join_list_2_f_0((MR_String) "_", Var_23);
            Name_6 = mercury__string__f_43_43_2_f_0((MR_String) "ua_", Var_21);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String Var_31;
            MR_Integer Var_32;

            Var_32 = hlds__hlds_pred__proc_id_to_int_1_f_0(ProcId_5);
            Var_31 = mercury__string__int_to_string_1_f_0(Var_32);
            Name_6 = mercury__string__f_43_43_2_f_0((MR_String) "inv_", Var_31);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_String Var_34;
            MR_Integer Var_35;

            Var_35 = hlds__hlds_pred__proc_id_to_int_1_f_0(ProcId_5);
            Var_34 = mercury__string__int_to_string_1_f_0(Var_35);
            Name_6 = mercury__string__f_43_43_2_f_0((MR_String) "tup_", Var_34);
          }
          break;
        case (MR_Integer) 4:
          {
            MR_String Var_37;
            MR_Integer Var_38;

            Var_38 = hlds__hlds_pred__proc_id_to_int_1_f_0(ProcId_5);
            Var_37 = mercury__string__int_to_string_1_f_0(Var_38);
            Name_6 = mercury__string__f_43_43_2_f_0((MR_String) "untup_", Var_37);
          }
          break;
        case (MR_Integer) 5:
          Name_6 = (MR_String) "dep_par_conj_";
          break;
        case (MR_Integer) 6:
          {
            MR_Word ArgPos_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ProcTransform_4, (MR_Integer) 2))));
            MR_String Var_40;
            MR_String Var_41;
            MR_Integer Var_42;
            MR_String Var_43;
            MR_String Var_45;

            Var_42 = hlds__hlds_pred__proc_id_to_int_1_f_0(ProcId_5);
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
          Name_4 = (MR_String) "ssdebug";
          break;
        case (MR_Integer) 2:
          Name_4 = (MR_String) "structure_reuse";
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Substs_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredTransform_3, (MR_Integer) 0))));
        MR_Word Var_8;
        MR_Word Var_10;

        Var_10 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&hlds__pred_name_scalar_common_1[0]), Substs_5);
        Var_8 = mercury__list__map_2_f_0((MR_Word) (&hlds__pred_name_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__pred_name_scalar_common_1[5]), Var_10);
        Name_4 = mercury__string__join_list_2_f_0((MR_String) "_", Var_8);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Integer Distance_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), PredTransform_3, (MR_Integer) 0))));
        MR_String Var_12;

        Var_12 = mercury__string__int_to_string_1_f_0(Distance_6);
        Name_4 = mercury__string__f_43_43_2_f_0((MR_String) "distance_granularity_", Var_12);
      }
      break;
  }
  return Name_4;
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
      {
        MR_Word OriginUser_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Origin_12, (MR_Integer) 0))));

        switch (MR_tag((MR_Word) OriginUser_14)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
            {
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ClassId_21 = ((MR_Word) ((MR_hl_field(MR_mktag(2), OriginUser_14, (MR_Integer) 0))));
              MR_Word MethodId_22 = ((MR_Word) ((MR_hl_field(MR_mktag(2), OriginUser_14, (MR_Integer) 1))));
              MR_Word ClassSymName_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassId_21, (MR_Integer) 0))));
              MR_Integer ClassArity_24 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ClassId_21, (MR_Integer) 1))));
              MR_Word MethodPredOrFunc_25 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), MethodId_22, (MR_Integer) 0))) & (MR_Integer) 1);
              MR_Word MethodSymName_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MethodId_22, (MR_Integer) 1))));
              MR_Word MethodPredFormArity_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MethodId_22, (MR_Integer) 2))));
              MR_Word MethodUserArity_28;
              MR_Integer MethodUserArityInt_29;
              MR_String Var_74;
              MR_String Var_77;
              MR_String Var_82;
              MR_String Var_190;
              MR_String Var_203;

              parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(MethodPredOrFunc_25, &MethodUserArity_28, MethodPredFormArity_27);
              MethodUserArityInt_29 = (MR_Integer) (MethodUserArity_28);
              Var_74 = mdbcomp__prim_data__pred_or_func_to_string_1_f_0(MethodPredOrFunc_25);
              Var_77 = mdbcomp__sym_name__sym_name_to_string_1_f_0(MethodSymName_26);
              Var_82 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ClassSymName_23);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "% class method ");
              mercury__io__write_string_4_p_0(Stream_8, Var_74);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
              mercury__io__write_string_4_p_0(Stream_8, Var_77);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "/");
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), MethodUserArityInt_29, &Var_190);
              mercury__io__write_string_4_p_0(Stream_8, Var_190);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) " for ");
              mercury__io__write_string_4_p_0(Stream_8, Var_82);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "/");
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), ClassArity_24, &Var_203);
              mercury__io__write_string_4_p_0(Stream_8, Var_203);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), OriginUser_14, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word MethodConstraints_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OriginUser_14, (MR_Integer) 2))));
                  MR_Word InstanceTypes_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MethodConstraints_31, (MR_Integer) 1))));
                  MR_Word InstanceConstraints_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MethodConstraints_31, (MR_Integer) 2))));
                  MR_Word ClassMethodConstraints_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MethodConstraints_31, (MR_Integer) 3))));
                  MR_Word ClassName_35;
                  MR_Word MethodUnivConstraints_37;
                  MR_Word MethodExistConstraints_38;
                  MR_Word Var_92;
                  MR_Word ClassId_174 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MethodConstraints_31, (MR_Integer) 0))));

                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "% instance method\n");
                  ClassName_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassId_174, (MR_Integer) 0))));
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "% class name and instance type vector:\n");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "%   ");
                  {
                    Var_92 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_92, 0) = ((MR_Box) (ClassName_35));
                    MR_hl_field(MR_mktag(0), Var_92, 1) = ((MR_Box) (InstanceTypes_32));
                  }
                  parse_tree__mercury_to_mercury__mercury_output_constraint_6_p_0(TVarSet_10, VarNamePrint_11, Var_92, Stream_8);
                  mercury__io__nl_3_p_0(Stream_8);
                  hlds__pred_name__write_origin_constraints_7_p_0(Stream_8, (MR_String) "instance constraints", TVarSet_10, VarNamePrint_11, InstanceConstraints_33);
                  MethodUnivConstraints_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassMethodConstraints_34, (MR_Integer) 0))));
                  MethodExistConstraints_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassMethodConstraints_34, (MR_Integer) 1))));
                  hlds__pred_name__write_origin_constraints_7_p_0(Stream_8, (MR_String) "method universal constraints", TVarSet_10, VarNamePrint_11, MethodUnivConstraints_37);
                  hlds__pred_name__write_origin_constraints_7_p_0(Stream_8, (MR_String) "method existential constraints", TVarSet_10, VarNamePrint_11, MethodExistConstraints_38);
                }
                break;
              case (MR_Integer) 1:
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "% assertion\n");
                break;
            }
            break;
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word OriginCompiler_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Origin_12, (MR_Integer) 0))));

        switch (MR_tag((MR_Word) OriginCompiler_41)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(OriginCompiler_41)) {
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
              MR_Word SpecialPredId_42 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), OriginCompiler_41, (MR_Integer) 0))) & (MR_Integer) 3);
              MR_Word TypeCtor_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OriginCompiler_41, (MR_Integer) 1))));
              MR_String SpecialPredIdStr_44;
              MR_String Var_109;

              switch (SpecialPredId_42) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 2:
                  SpecialPredIdStr_44 = (MR_String) "compare";
                  break;
                case (MR_Integer) 1:
                  SpecialPredIdStr_44 = (MR_String) "index";
                  break;
                case (MR_Integer) 0:
                  SpecialPredIdStr_44 = (MR_String) "unify";
                  break;
              }
              Var_109 = parse_tree__prog_out__type_name_to_string_1_f_0(TypeCtor_43);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "% special ");
              mercury__io__write_string_4_p_0(Stream_8, SpecialPredIdStr_44);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) " pred for ");
              mercury__io__write_string_4_p_0(Stream_8, Var_109);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer LineNum_45 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), OriginCompiler_41, (MR_Integer) 0))));
              MR_Integer SeqNum_46 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), OriginCompiler_41, (MR_Integer) 1))));
              MR_String Var_281;
              MR_String Var_291;

              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "% deforestation: line ");
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), LineNum_45, &Var_281);
              mercury__io__write_string_4_p_0(Stream_8, Var_281);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", seqnum ");
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), SeqNum_46, &Var_291);
              mercury__io__write_string_4_p_0(Stream_8, Var_291);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), OriginCompiler_41, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word SolverAuxPredKind_47 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), OriginCompiler_41, (MR_Integer) 2))) & (MR_Integer) 3);
                  MR_String TypeCtorStr_48;
                  MR_String SolverAuxPredKindStr_49;
                  MR_Word TypeCtor_175 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OriginCompiler_41, (MR_Integer) 1))));

                  TypeCtorStr_48 = parse_tree__prog_out__type_ctor_to_string_1_f_0(TypeCtor_175);
                  SolverAuxPredKindStr_49 = ((&hlds__pred_name_vector_common_6[17 + SolverAuxPredKind_47]))->hlds__pred_name__vector_common_type_6_0__vct_6_f_0;
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "% ");
                  mercury__io__write_string_4_p_0(Stream_8, SolverAuxPredKindStr_49);
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) " for ");
                  mercury__io__write_string_4_p_0(Stream_8, TypeCtorStr_48);
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word BasePredCallId_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OriginCompiler_41, (MR_Integer) 1))));
                  MR_Word TablingAuxPredKind_51 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), OriginCompiler_41, (MR_Integer) 2))) & (MR_Integer) 1);
                  MR_String BasePredStr_52;
                  MR_String TablingAuxPredKindStr_53;

                  BasePredStr_52 = parse_tree__prog_out__pf_sym_name_orig_arity_to_string_1_f_0(BasePredCallId_50);
                  switch (TablingAuxPredKind_51) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      TablingAuxPredKindStr_53 = (MR_String) "table reset predicate";
                      break;
                    case (MR_Integer) 0:
                      TablingAuxPredKindStr_53 = (MR_String) "table statistics predicate";
                      break;
                  }
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "% ");
                  mercury__io__write_string_4_p_0(Stream_8, TablingAuxPredKindStr_53);
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) " for ");
                  mercury__io__write_string_4_p_0(Stream_8, BasePredStr_52);
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word MutableModuleName_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OriginCompiler_41, (MR_Integer) 1))));
                  MR_String MutableName_55 = ((MR_String) ((MR_hl_field(MR_mktag(3), OriginCompiler_41, (MR_Integer) 2))));
                  MR_Word MutablePredKind_56 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), OriginCompiler_41, (MR_Integer) 3))) & (MR_Integer) 15);
                  MR_String MutableModuleNameStr_57;
                  MR_String MutablePredKindStr_58;

                  MutableModuleNameStr_57 = mdbcomp__sym_name__sym_name_to_string_1_f_0(MutableModuleName_54);
                  MutablePredKindStr_58 = ((&hlds__pred_name_vector_common_6[5 + MutablePredKind_56]))->hlds__pred_name__vector_common_type_6_0__vct_6_f_0;
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "% ");
                  mercury__io__write_string_4_p_0(Stream_8, MutablePredKindStr_58);
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) " for mutable ");
                  mercury__io__write_string_4_p_0(Stream_8, MutableName_55);
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) " in module ");
                  mercury__io__write_string_4_p_0(Stream_8, MutableModuleNameStr_57);
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
                }
                break;
            }
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word PredTransform_59 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Origin_12, (MR_Integer) 0))));
        MR_Word OrigPredId_61 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Origin_12, (MR_Integer) 2))));
        MR_Integer OrigPredIdNum_62;
        MR_Word OrigPredInfo_63;
        MR_String Var_152;
        MR_String Var_239;

        OrigPredIdNum_62 = hlds__hlds_pred__pred_id_to_int_1_f_0(OrigPredId_61);
        hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_9, OrigPredId_61, &OrigPredInfo_63);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "% transformed from pred id ");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), OrigPredIdNum_62, &Var_239);
        mercury__io__write_string_4_p_0(Stream_8, Var_239);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "% ");
        Var_152 = hlds__pred_name__pred_info_id_to_string_1_f_0(OrigPredInfo_63);
        mercury__io__write_string_4_p_0(Stream_8, Var_152);
        mercury__io__nl_3_p_0(Stream_8);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "% pred transformation: ");
        mercury__io__write_line_4_p_0((MR_Word) (&hlds__pred_name__hlds__pred_name__type_ctor_info_pred_transform_0), Stream_8, ((MR_Box) (PredTransform_59)));
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word ProcTransform_64 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Origin_12, (MR_Integer) 0))));
        MR_Integer OrigProcId_66 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Origin_12, (MR_Integer) 3))));
        MR_Integer OrigProcIdNum_67;
        MR_String Var_169;
        MR_Word OrigPredId_176 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Origin_12, (MR_Integer) 2))));
        MR_Integer OrigPredIdNum_177;
        MR_Word OrigPredInfo_178;
        MR_String Var_214;
        MR_String Var_224;

        OrigPredIdNum_177 = hlds__hlds_pred__pred_id_to_int_1_f_0(OrigPredId_176);
        OrigProcIdNum_67 = hlds__hlds_pred__proc_id_to_int_1_f_0(OrigProcId_66);
        hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_9, OrigPredId_176, &OrigPredInfo_178);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "% transformed from pred id ");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), OrigPredIdNum_177, &Var_214);
        mercury__io__write_string_4_p_0(Stream_8, Var_214);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", proc id ");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), OrigProcIdNum_67, &Var_224);
        mercury__io__write_string_4_p_0(Stream_8, Var_224);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
        Var_169 = hlds__pred_name__pred_info_id_to_string_1_f_0(OrigPredInfo_178);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "% ");
        mercury__io__write_string_4_p_0(Stream_8, Var_169);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "% proc transformation: ");
        mercury__io__write_line_4_p_0((MR_Word) (&hlds__pred_name__hlds__pred_name__type_ctor_info_proc_transform_0), Stream_8, ((MR_Box) (ProcTransform_64)));
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
        MR_Word OriginUser_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Origin_9, (MR_Integer) 0))));

        switch (MR_tag((MR_Word) OriginUser_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            {
              MR_Word SymName_17;

              {
                SymName_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), SymName_17, 0) = ((MR_Box) (Module_5));
                MR_hl_field(MR_mktag(1), SymName_17, 1) = ((MR_Box) (Name_6));
              }
              Str_4 = parse_tree__prog_out__pf_sym_name_orig_arity_to_string_3_f_0(PredOrFunc_8, SymName_17, PredFormArity_7);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ClassId_18 = ((MR_Word) ((MR_hl_field(MR_mktag(2), OriginUser_10, (MR_Integer) 0))));
              MR_Word MethodId_19 = ((MR_Word) ((MR_hl_field(MR_mktag(2), OriginUser_10, (MR_Integer) 1))));
              MR_Word ClassSymName_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassId_18, (MR_Integer) 0))));
              MR_Integer ClassArity_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ClassId_18, (MR_Integer) 1))));
              MR_Word MethodPredOrFunc_22 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), MethodId_19, (MR_Integer) 0))) & (MR_Integer) 1);
              MR_Word MethodSymName_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MethodId_19, (MR_Integer) 1))));
              MR_Word MethodPredFormArity_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MethodId_19, (MR_Integer) 2))));
              MR_Word MethodUserArity_25;
              MR_Integer MethodUserArityInt_26;
              MR_String Var_67;
              MR_String Var_70;
              MR_String Var_75;
              MR_String Var_124;
              MR_String Var_132;
              MR_String Var_133;
              MR_String Var_135;
              MR_String Var_136;
              MR_String Var_143;
              MR_String Var_145;
              MR_String Var_146;
              MR_String Var_148;
              MR_String Var_149;

              parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(MethodPredOrFunc_22, &MethodUserArity_25, MethodPredFormArity_24);
              MethodUserArityInt_26 = (MR_Integer) (MethodUserArity_25);
              Var_67 = mdbcomp__prim_data__pred_or_func_to_string_1_f_0(MethodPredOrFunc_22);
              Var_70 = mdbcomp__sym_name__sym_name_to_string_1_f_0(MethodSymName_23);
              Var_75 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ClassSymName_20);
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), ClassArity_21, &Var_124);
              Var_132 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_124);
              Var_133 = mercury__string__f_43_43_2_f_0(Var_75, Var_132);
              Var_135 = mercury__string__f_43_43_2_f_0((MR_String) " for ", Var_133);
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), MethodUserArityInt_26, &Var_136);
              Var_143 = mercury__string__f_43_43_2_f_0(Var_136, Var_135);
              Var_145 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_143);
              Var_146 = mercury__string__f_43_43_2_f_0(Var_70, Var_145);
              Var_148 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_146);
              Var_149 = mercury__string__f_43_43_2_f_0(Var_67, Var_148);
              Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "class method ", Var_149);
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), OriginUser_10, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word MethodName_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OriginUser_10, (MR_Integer) 1))));
                  MR_Word MethodConstraints_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OriginUser_10, (MR_Integer) 2))));
                  MR_Word InstanceTypes_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MethodConstraints_28, (MR_Integer) 1))));
                  MR_String MethodStr_32;
                  MR_Word ClassName_33;
                  MR_String ClassStr_35;
                  MR_String TypeStrs_36;
                  MR_Word Var_79;
                  MR_Word ClassId_105 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MethodConstraints_28, (MR_Integer) 0))));
                  MR_String Var_116;
                  MR_String Var_118;
                  MR_String Var_119;
                  MR_String Var_121;
                  MR_String Var_122;

                  MethodStr_32 = parse_tree__prog_out__pf_sym_name_orig_arity_to_string_3_f_0(PredOrFunc_8, MethodName_27, PredFormArity_7);
                  ClassName_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassId_105, (MR_Integer) 0))));
                  ClassStr_35 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ClassName_33);
                  Var_79 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0));
                  TypeStrs_36 = parse_tree__mercury_to_mercury__mercury_type_list_to_string_2_f_0(Var_79, InstanceTypes_29);
                  Var_116 = mercury__string__f_43_43_2_f_0(TypeStrs_36, (MR_String) ")\'");
                  Var_118 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_116);
                  Var_119 = mercury__string__f_43_43_2_f_0(ClassStr_35, Var_118);
                  Var_121 = mercury__string__f_43_43_2_f_0((MR_String) " for \140", Var_119);
                  Var_122 = mercury__string__f_43_43_2_f_0(MethodStr_32, Var_121);
                  Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "instance method ", Var_122);
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_String FileName_37 = ((MR_String) ((MR_hl_field(MR_mktag(3), OriginUser_10, (MR_Integer) 1))));
                  MR_Integer LineNumber_38 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), OriginUser_10, (MR_Integer) 2))));
                  MR_Word PromiseType_39;

                  succeeded = hlds__hlds_pred__pred_info_is_promise_2_p_0(PredInfo_3, &PromiseType_39);
                  if (succeeded)
                  {
                    MR_String Var_91;
                    MR_String Var_152;
                    MR_String Var_159;
                    MR_String Var_161;
                    MR_String Var_162;
                    MR_String Var_164;
                    MR_String Var_165;

                    Var_91 = parse_tree__prog_out__promise_to_string_1_f_0(PromiseType_39);
                    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), LineNumber_38, &Var_152);
                    Var_159 = mercury__string__f_43_43_2_f_0(Var_152, (MR_String) ")");
                    Var_161 = mercury__string__f_43_43_2_f_0((MR_String) ":", Var_159);
                    Var_162 = mercury__string__f_43_43_2_f_0(FileName_37, Var_161);
                    Var_164 = mercury__string__f_43_43_2_f_0((MR_String) "\' declaration (", Var_162);
                    Var_165 = mercury__string__f_43_43_2_f_0(Var_91, Var_164);
                    Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "\140", Var_165);
                  }
                  else
                  {
                    MR_Word SymName_106;

                    {
                      SymName_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), SymName_106, 0) = ((MR_Box) (Module_5));
                      MR_hl_field(MR_mktag(1), SymName_106, 1) = ((MR_Box) (Name_6));
                    }
                    Str_4 = parse_tree__prog_out__pf_sym_name_orig_arity_to_string_3_f_0(PredOrFunc_8, SymName_106, PredFormArity_7);
                  }
                }
                break;
            }
            break;
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word OriginCompiler_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Origin_9, (MR_Integer) 0))));

        switch (MR_tag((MR_Word) OriginCompiler_40)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word SymName_110;

              {
                SymName_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), SymName_110, 0) = ((MR_Box) (Module_5));
                MR_hl_field(MR_mktag(1), SymName_110, 1) = ((MR_Box) (Name_6));
              }
              Str_4 = parse_tree__prog_out__pf_sym_name_orig_arity_to_string_3_f_0(PredOrFunc_8, SymName_110, PredFormArity_7);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word SpecialId_41 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), OriginCompiler_40, (MR_Integer) 0))) & (MR_Integer) 3);
              MR_Word TypeCtor_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OriginCompiler_40, (MR_Integer) 1))));
              MR_String Descr_43;
              MR_Integer TypeArity_45;
              MR_String ForStr_46;
              MR_String Var_97;
              MR_String Var_98;

              hlds__special_pred__special_pred_description_2_p_0(SpecialId_41, &Descr_43);
              TypeArity_45 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor_42, (MR_Integer) 1))));
              succeeded = (TypeArity_45 == (MR_Integer) 0);
              if (succeeded)
                ForStr_46 = (MR_String) " for type ";
              else
                ForStr_46 = (MR_String) " for type constructor ";
              Var_98 = parse_tree__prog_out__type_name_to_string_1_f_0(TypeCtor_42);
              Var_97 = mercury__string__f_43_43_2_f_0(ForStr_46, Var_98);
              Str_4 = mercury__string__f_43_43_2_f_0(Descr_43, Var_97);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word SymName_110;

              {
                SymName_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), SymName_110, 0) = ((MR_Box) (Module_5));
                MR_hl_field(MR_mktag(1), SymName_110, 1) = ((MR_Box) (Name_6));
              }
              Str_4 = parse_tree__prog_out__pf_sym_name_orig_arity_to_string_3_f_0(PredOrFunc_8, SymName_110, PredFormArity_7);
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), OriginCompiler_40, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word SolverAuxPredKind_50 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), OriginCompiler_40, (MR_Integer) 2))) & (MR_Integer) 3);
                  MR_String TypeCtorStr_51;
                  MR_Word TypeCtor_109 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OriginCompiler_40, (MR_Integer) 1))));

                  TypeCtorStr_51 = parse_tree__prog_out__type_ctor_to_string_1_f_0(TypeCtor_109);
                  switch (SolverAuxPredKind_50) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 3:
                      Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "from any representation predicate for ", TypeCtorStr_51);
                      break;
                    case (MR_Integer) 2:
                      Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "from ground representation predicate for ", TypeCtorStr_51);
                      break;
                    case (MR_Integer) 1:
                      Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "to any representation predicate for ", TypeCtorStr_51);
                      break;
                    case (MR_Integer) 0:
                      Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "to ground representation predicate for ", TypeCtorStr_51);
                      break;
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word BasePredId_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OriginCompiler_40, (MR_Integer) 1))));
                  MR_Word TablingAuxPredKind_48 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), OriginCompiler_40, (MR_Integer) 2))) & (MR_Integer) 1);
                  MR_String BasePredIdStr_49;

                  BasePredIdStr_49 = parse_tree__prog_out__pf_sym_name_orig_arity_to_string_1_f_0(BasePredId_47);
                  switch (TablingAuxPredKind_48) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "table reset predicate for ", BasePredIdStr_49);
                      break;
                    case (MR_Integer) 0:
                      Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "table statistics predicate for ", BasePredIdStr_49);
                      break;
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word SymName_110;

                  {
                    SymName_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), SymName_110, 0) = ((MR_Box) (Module_5));
                    MR_hl_field(MR_mktag(1), SymName_110, 1) = ((MR_Box) (Name_6));
                  }
                  Str_4 = parse_tree__prog_out__pf_sym_name_orig_arity_to_string_3_f_0(PredOrFunc_8, SymName_110, PredFormArity_7);
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
        MR_Word SymName_113;

        {
          SymName_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), SymName_113, 0) = ((MR_Box) (Module_5));
          MR_hl_field(MR_mktag(1), SymName_113, 1) = ((MR_Box) (Name_6));
        }
        Str_4 = parse_tree__prog_out__pf_sym_name_orig_arity_to_string_3_f_0(PredOrFunc_8, SymName_113, PredFormArity_7);
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
        MR_String Var_403;
        MR_String Var_411;

        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), Counter_8, &Var_403);
        Var_411 = mercury__string__f_43_43_2_f_0((MR_String) "__ho", Var_403);
        *TransformedName_6 = mercury__string__f_43_43_2_f_0(OrigName_4, Var_411);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Integer ProcId_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Transform_5, (MR_Integer) 2))));
        MR_Integer Version_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Transform_5, (MR_Integer) 3))));
        MR_Integer ProcNum_12;
        MR_String Var_350;
        MR_String Var_358;
        MR_String Var_359;
        MR_String Var_366;
        MR_String Var_368;

        ProcNum_12 = hlds__hlds_pred__proc_id_to_int_1_f_0(ProcId_10);
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), Version_11, &Var_350);
        Var_358 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_350);
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), ProcNum_12, &Var_359);
        Var_366 = mercury__string__f_43_43_2_f_0(Var_359, Var_358);
        Var_368 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_366);
        *TransformedName_6 = mercury__string__f_43_43_2_f_0(OrigName_4, Var_368);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word UserArity_13 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Transform_5, (MR_Integer) 1))));
        MR_Word AuxTablingPredKind_14 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(2), Transform_5, (MR_Integer) 2))) >> 1)) & (MR_Integer) 1);
        MR_Word SingleProc_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), Transform_5, (MR_Integer) 2))) & (MR_Integer) 1);
        MR_Integer ProcIdInt_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), Transform_5, (MR_Integer) 3))));
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
              MR_String Var_426;
              MR_String Var_434;
              MR_String Var_435;
              MR_String Var_442;
              MR_String Var_444;
              MR_String Var_445;
              MR_String Var_447;
              MR_String Var_448;

              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), ProcIdInt_16, &Var_426);
              Var_434 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_426);
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), UserArityInt_17, &Var_435);
              Var_442 = mercury__string__f_43_43_2_f_0(Var_435, Var_434);
              Var_444 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_442);
              Var_445 = mercury__string__f_43_43_2_f_0(OrigName_4, Var_444);
              Var_447 = mercury__string__f_43_43_2_f_0((MR_String) "_for_", Var_445);
              Var_448 = mercury__string__f_43_43_2_f_0(KindStr_18, Var_447);
              *TransformedName_6 = mercury__string__f_43_43_2_f_0((MR_String) "table_", Var_448);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String Var_412;
              MR_String Var_420;
              MR_String Var_421;
              MR_String Var_423;
              MR_String Var_424;

              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), UserArityInt_17, &Var_412);
              Var_420 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_412);
              Var_421 = mercury__string__f_43_43_2_f_0(OrigName_4, Var_420);
              Var_423 = mercury__string__f_43_43_2_f_0((MR_String) "_for_", Var_421);
              Var_424 = mercury__string__f_43_43_2_f_0(KindStr_18, Var_423);
              *TransformedName_6 = mercury__string__f_43_43_2_f_0((MR_String) "table_", Var_424);
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
            MR_String Prefix_63;
            MR_String Suffix_65;
            MR_String Var_652;
            MR_String Var_653;
            MR_String Var_655;

            switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word PredOrFunc_60 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word LNC_61 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 2))));
                  MR_Integer Line_64;
                  MR_String Var_122;
                  MR_Integer Counter_246;
                  MR_String Var_634;
                  MR_String Var_635;
                  MR_String Var_643;
                  MR_String Var_644;

                  Var_122 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_60);
                  Var_634 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_122);
                  Prefix_63 = mercury__string__f_43_43_2_f_0((MR_String) "AccFrom", Var_634);
                  Line_64 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LNC_61, (MR_Integer) 0))));
                  Counter_246 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LNC_61, (MR_Integer) 1))));
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), Counter_246, &Var_635);
                  Var_643 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_635);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), Line_64, &Var_644);
                  Suffix_65 = mercury__string__f_43_43_2_f_0(Var_644, Var_643);
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word PredOrFunc_272 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word LNC_273 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 2))));
                  MR_Integer Line_275;
                  MR_String Var_281;
                  MR_Integer Counter_289;
                  MR_String Var_616;
                  MR_String Var_617;
                  MR_String Var_625;
                  MR_String Var_626;

                  Var_281 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_272);
                  Var_616 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_281);
                  Prefix_63 = mercury__string__f_43_43_2_f_0((MR_String) "DeforestationIn", Var_616);
                  Line_275 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LNC_273, (MR_Integer) 0))));
                  Counter_289 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LNC_273, (MR_Integer) 1))));
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), Counter_289, &Var_617);
                  Var_625 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_617);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), Line_275, &Var_626);
                  Suffix_65 = mercury__string__f_43_43_2_f_0(Var_626, Var_625);
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word PredOrFunc_290 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word LNC_291 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 2))));
                  MR_Integer Line_293;
                  MR_String Var_299;
                  MR_Integer Counter_307;
                  MR_String Var_587;
                  MR_String Var_588;
                  MR_String Var_596;
                  MR_String Var_597;

                  Var_299 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_290);
                  Var_587 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_299);
                  Prefix_63 = mercury__string__f_43_43_2_f_0((MR_String) "IntroducedFrom", Var_587);
                  Line_293 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LNC_291, (MR_Integer) 0))));
                  Counter_307 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LNC_291, (MR_Integer) 1))));
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), Counter_307, &Var_588);
                  Var_596 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_588);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), Line_293, &Var_597);
                  Suffix_65 = mercury__string__f_43_43_2_f_0(Var_597, Var_596);
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_String Var_135;
                  MR_Integer Counter_247;
                  MR_Integer ProcNum_248 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 2))));
                  MR_Word PredOrFunc_249 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word LNC_250 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 3))));
                  MR_Integer Line_252;
                  MR_String Var_552;
                  MR_String Var_553;
                  MR_String Var_561;
                  MR_String Var_562;
                  MR_String Var_569;
                  MR_String Var_571;
                  MR_String Var_572;

                  Var_135 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_249);
                  Var_552 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_135);
                  Prefix_63 = mercury__string__f_43_43_2_f_0((MR_String) "loop_inv", Var_552);
                  Line_252 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LNC_250, (MR_Integer) 0))));
                  Counter_247 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LNC_250, (MR_Integer) 1))));
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), ProcNum_248, &Var_553);
                  Var_561 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_553);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), Counter_247, &Var_562);
                  Var_569 = mercury__string__f_43_43_2_f_0(Var_562, Var_561);
                  Var_571 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_569);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), Line_252, &Var_572);
                  Suffix_65 = mercury__string__f_43_43_2_f_0(Var_572, Var_571);
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_String Var_313;
                  MR_Integer Counter_323;
                  MR_Integer ProcNum_324 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 2))));
                  MR_Word PredOrFunc_325 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word LNC_326 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 3))));
                  MR_Integer Line_328;
                  MR_String Var_489;
                  MR_String Var_490;
                  MR_String Var_498;
                  MR_String Var_499;
                  MR_String Var_506;
                  MR_String Var_508;
                  MR_String Var_509;

                  Var_313 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_325);
                  Var_489 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_313);
                  Prefix_63 = mercury__string__f_43_43_2_f_0((MR_String) "tupling", Var_489);
                  Line_328 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LNC_326, (MR_Integer) 0))));
                  Counter_323 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LNC_326, (MR_Integer) 1))));
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), ProcNum_324, &Var_490);
                  Var_498 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_490);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), Counter_323, &Var_499);
                  Var_506 = mercury__string__f_43_43_2_f_0(Var_499, Var_498);
                  Var_508 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_506);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), Line_328, &Var_509);
                  Suffix_65 = mercury__string__f_43_43_2_f_0(Var_509, Var_508);
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_String Var_334;
                  MR_Integer Counter_344;
                  MR_Integer ProcNum_345 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 2))));
                  MR_Word PredOrFunc_346 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word LNC_347 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 3))));
                  MR_Integer Line_349;
                  MR_String Var_461;
                  MR_String Var_462;
                  MR_String Var_470;
                  MR_String Var_471;
                  MR_String Var_478;
                  MR_String Var_480;
                  MR_String Var_481;

                  Var_334 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_346);
                  Var_461 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_334);
                  Prefix_63 = mercury__string__f_43_43_2_f_0((MR_String) "untupling", Var_461);
                  Line_349 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LNC_347, (MR_Integer) 0))));
                  Counter_344 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LNC_347, (MR_Integer) 1))));
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), ProcNum_345, &Var_462);
                  Var_470 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_462);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), Counter_344, &Var_471);
                  Var_478 = mercury__string__f_43_43_2_f_0(Var_471, Var_470);
                  Var_480 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_478);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), Line_349, &Var_481);
                  Suffix_65 = mercury__string__f_43_43_2_f_0(Var_481, Var_480);
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Integer VariantNum_66 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 2))));
                  MR_String Var_148;
                  MR_Word PredOrFunc_253 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 1))) & (MR_Integer) 1);

                  Var_148 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_253);
                  Prefix_63 = mercury__string__f_43_43_2_f_0((MR_String) "LCMC__", Var_148);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), VariantNum_66, &Suffix_65);
                }
                break;
              case (MR_Integer) 7:
                {
                  MR_String Var_157;
                  MR_Word PredOrFunc_254 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 1))) & (MR_Integer) 1);

                  Var_157 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_254);
                  Prefix_63 = mercury__string__f_43_43_2_f_0((MR_String) "SSDB__", Var_157);
                  Suffix_65 = (MR_String) "";
                }
                break;
              case (MR_Integer) 8:
                {
                  MR_Word ArgNums_67 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 3))));
                  MR_String Var_162;
                  MR_String Var_167;
                  MR_Integer ProcNum_255 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 2))));
                  MR_Word PredOrFunc_256 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_String Var_606;
                  MR_String Var_614;

                  Var_162 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_256);
                  Prefix_63 = mercury__string__f_43_43_2_f_0((MR_String) "Parallel__", Var_162);
                  Var_167 = hlds__pred_name__bracketed_ints_to_string_1_f_0(ArgNums_67);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), ProcNum_255, &Var_606);
                  Var_614 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_606);
                  Suffix_65 = mercury__string__f_43_43_2_f_0(Var_167, Var_614);
                }
                break;
              case (MR_Integer) 9:
                {
                  MR_Integer Distance_68 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 2))));
                  MR_String Var_174;
                  MR_Word PredOrFunc_257 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 1))) & (MR_Integer) 1);

                  Var_174 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_257);
                  Prefix_63 = mercury__string__f_43_43_2_f_0((MR_String) "DistanceGranularityFor__", Var_174);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), Distance_68, &Suffix_65);
                }
                break;
              case (MR_Integer) 10:
                {
                  MR_String Var_183;
                  MR_Integer ProcNum_258 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 2))));
                  MR_Word PredOrFunc_259 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_String Var_529;

                  Var_183 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_259);
                  Prefix_63 = mercury__string__f_43_43_2_f_0((MR_String) "LoopControl__", Var_183);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), ProcNum_258, &Var_529);
                  Suffix_65 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_529);
                }
                break;
              case (MR_Integer) 11:
                {
                  MR_String Var_192;
                  MR_String Var_199;
                  MR_Integer ProcNum_260 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 2))));
                  MR_Word PredOrFunc_261 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word ArgNums_262 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 3))));
                  MR_String Var_518;
                  MR_String Var_519;

                  Var_192 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_261);
                  Prefix_63 = mercury__string__f_43_43_2_f_0((MR_String) "ctgc__", Var_192);
                  Var_199 = hlds__pred_name__bracketed_ints_to_string_1_f_0(ArgNums_262);
                  Var_518 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_199);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), ProcNum_260, &Var_519);
                  Suffix_65 = mercury__string__f_43_43_2_f_0(Var_519, Var_518);
                }
                break;
              case (MR_Integer) 12:
                {
                  MR_Word MaybePredOrFunc_69 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 1))));
                  MR_Word VarSet_70 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 2))));
                  MR_Word TypeSubst_71 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 3))));
                  MR_String PredOrFuncStr_72;

                  if ((MaybePredOrFunc_69 == (MR_Word) ((MR_Unsigned) 0U)))
                    PredOrFuncStr_72 = (MR_String) "pred_or_func";
                  else
                  {
                    MR_Word PredOrFunc_263 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePredOrFunc_69, (MR_Integer) 0))));

                    PredOrFuncStr_72 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_263);
                  }
                  Prefix_63 = mercury__string__f_43_43_2_f_0((MR_String) "TypeSpecOf__", PredOrFuncStr_72);
                  Suffix_65 = hlds__pred_name__type_subst_to_string_2_f_0(VarSet_70, TypeSubst_71);
                }
                break;
              case (MR_Integer) 13:
                {
                  MR_String Var_208;
                  MR_Word PredOrFunc_266 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 1))) & (MR_Integer) 1);

                  Var_208 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_266);
                  Prefix_63 = mercury__string__f_43_43_2_f_0((MR_String) "OutlinedForIOTablingFrom__", Var_208);
                  Suffix_65 = (MR_String) "";
                }
                break;
              case (MR_Integer) 14:
                {
                  MR_String Var_213;
                  MR_Integer ProcNum_267 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 2))));
                  MR_Word PredOrFunc_268 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 1))) & (MR_Integer) 1);

                  Var_213 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_268);
                  Prefix_63 = mercury__string__f_43_43_2_f_0((MR_String) "GeneratorFor_", Var_213);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), ProcNum_267, &Suffix_65);
                }
                break;
              case (MR_Integer) 16:
                {
                  MR_String Var_222;
                  MR_String Var_227;
                  MR_Integer ProcNum_269 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 2))));
                  MR_Word PredOrFunc_270 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word ArgNums_271 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 3))));
                  MR_String Var_451;
                  MR_String Var_459;

                  Var_222 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_270);
                  Prefix_63 = mercury__string__f_43_43_2_f_0((MR_String) "UnusedArgs__", Var_222);
                  Var_227 = hlds__pred_name__bracketed_ints_to_string_1_f_0(ArgNums_271);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), ProcNum_269, &Var_451);
                  Var_459 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_451);
                  Suffix_65 = mercury__string__f_43_43_2_f_0(Var_227, Var_459);
                }
                break;
            }
            Var_652 = mercury__string__f_43_43_2_f_0((MR_String) "__", Suffix_65);
            Var_653 = mercury__string__f_43_43_2_f_0(OrigName_4, Var_652);
            Var_655 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_653);
            *TransformedName_6 = mercury__string__f_43_43_2_f_0(Prefix_63, Var_655);
          }
          break;
        case (MR_Integer) 15:
          {
            MR_Word CloneKind_19 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 1))) & (MR_Integer) 7);
            MR_Integer Arity_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 2))));
            MR_Integer PredNum_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 3))));
            MR_String CloneKindStr_22 = ((&hlds__pred_name_vector_common_6[0 + CloneKind_19]))->hlds__pred_name__vector_common_type_6_0__vct_6_f_0;
            MR_Integer Counter_245 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 4))));
            MR_String Var_369;
            MR_String Var_377;
            MR_String Var_378;
            MR_String Var_385;
            MR_String Var_387;
            MR_String Var_388;
            MR_String Var_395;
            MR_String Var_397;
            MR_String Var_398;
            MR_String Var_400;
            MR_String Var_401;

            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), Counter_245, &Var_369);
            Var_377 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_369);
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), PredNum_21, &Var_378);
            Var_385 = mercury__string__f_43_43_2_f_0(Var_378, Var_377);
            Var_387 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_385);
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__pred_name_scalar_common_3[0]), Arity_20, &Var_388);
            Var_395 = mercury__string__f_43_43_2_f_0(Var_388, Var_387);
            Var_397 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_395);
            Var_398 = mercury__string__f_43_43_2_f_0(OrigName_4, Var_397);
            Var_400 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_398);
            Var_401 = mercury__string__f_43_43_2_f_0(CloneKindStr_22, Var_400);
            *TransformedName_6 = mercury__string__f_43_43_2_f_0((MR_String) "StmExpanded_", Var_401);
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
