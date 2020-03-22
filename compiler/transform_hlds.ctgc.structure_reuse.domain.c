/*
** Automatically generated from `structure_reuse.domain.m'
** by the Mercury compiler,
** version rotd-2020-03-22
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


// :- module transform_hlds.ctgc.structure_reuse.domain.
// :- implementation.

/*
INIT mercury__transform_hlds__ctgc__structure_reuse__domain__init
ENDINIT
*/

#include "transform_hlds.ctgc.structure_reuse.domain.mih"


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
#include "require.mih"
#include "robdd.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "solutions.mih"
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
#include "hlds.hlds_out.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
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
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_ctgc.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.ctgc.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "transform_hlds.ctgc.datastruct.mih"
#include "transform_hlds.ctgc.livedata.mih"
#include "transform_hlds.ctgc.structure_reuse.mih"
#include "transform_hlds.ctgc.structure_sharing.mih"
#include "transform_hlds.ctgc.util.mih"
#include "transform_hlds.ctgc.structure_sharing.domain.mih"



struct transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0_s {
  MR_Word transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__ModuleInfo_7;
  MR_Word transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__ProcInfo_8;
  MR_Word transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__SharingAs_9;
  MR_Word transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__Node_10;
  MR_Word transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__OtherNodes_11;
  MR_Word * transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__AliasedNodes_12;
  MR_Cont transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__cont;
  void * transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__cont_env_ptr;
  MR_bool transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__succeeded;
  MR_Word transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__SharingNodes_14;
  MR_Word transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__SharingNode_15;
  MR_Word transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__OtherAliasedNode_16;
  MR_Word transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__Var_19;
  MR_Box transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__conv0_SharingNode_15;
};

struct transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_7_p_0_3_env_0_s {
  MR_Box * transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_7_p_0_3_env_0__wrapper_arg_1;
  MR_Cont transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_7_p_0_3_env_0__cont;
  void * transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_7_p_0_3_env_0__cont_env_ptr;
  MR_Word transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_7_p_0_3_env_0__conv1_AliasedNodes_12;
};


static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__domain__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__domain__list__pti_list_1__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__domain__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__domain__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__domain__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__domain__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__domain__list__pti_list_1__plain_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__domain__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__domain__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__domain__pair__pti_pair_2__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__domain__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__domain__list__ti_list_1builtin__type_ctor_info_int_0;

static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__field_types_ppid_no_clobbers_0_0[2];

static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_ppid_no_clobbers_0_0;

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_stag_ordered_ppid_no_clobbers_0_0[1];

static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_ptag_ordered_ppid_no_clobbers_0[1];

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_name_ordered_ppid_no_clobbers_0[1];

static const MR_Integer transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__functor_number_map_ppid_no_clobbers_0[1];

static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_as_0_0;

static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_as_0_1;

static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__domain__list__ti_list_1transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0;

static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__field_types_reuse_as_0_2[1];

static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_as_0_2;

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_stag_ordered_reuse_as_0_0[2];

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_stag_ordered_reuse_as_0_1[1];

static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_ptag_ordered_reuse_as_0[2];

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_name_ordered_reuse_as_0[3];

static const MR_Integer transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__functor_number_map_reuse_as_0[3];

static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__field_types_reuse_as_and_status_0_0[2];

static const MR_DuArgLocn transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__field_locns_reuse_as_and_status_0_0[2];

static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_as_and_status_0_0;

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_stag_ordered_reuse_as_and_status_0_0[1];

static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_ptag_ordered_reuse_as_and_status_0[1];

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_name_ordered_reuse_as_and_status_0[1];

static const MR_Integer transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__functor_number_map_reuse_as_and_status_0[1];

static const MR_FA_TypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__domain__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__domain__bimap__ti_bimap_2transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_ppid_no_clobbers_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__field_types_reuse_as_table_0_0[2];

static const MR_ConstString transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__field_names_reuse_as_table_0_0[2];

static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_as_table_0_0;

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_stag_ordered_reuse_as_table_0_0[1];

static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_ptag_ordered_reuse_as_table_0[1];

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_name_ordered_reuse_as_table_0[1];

static const MR_Integer transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__functor_number_map_reuse_as_table_0[1];

static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_condition_0_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__domain__set_ordlist__ti_set_ordlist_1parse_tree__prog_data_pragma__type_ctor_info_datastruct_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__domain__list__ti_list_1parse_tree__prog_data_pragma__type_ctor_info_datastruct_0;

static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__field_types_reuse_condition_0_1[3];

static const MR_ConstString transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__field_names_reuse_condition_0_1[3];

static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_condition_0_1;

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_stag_ordered_reuse_condition_0_0[1];

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_stag_ordered_reuse_condition_0_1[1];

static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_ptag_ordered_reuse_condition_0[2];

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_name_ordered_reuse_condition_0[2];

static const MR_Integer transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__functor_number_map_reuse_condition_0[2];

static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_not_possible_reason_0_0;

static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_not_possible_reason_0_1;

static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__domain__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__field_types_reuse_not_possible_reason_0_2[1];

static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_not_possible_reason_0_2;

static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__field_types_reuse_not_possible_reason_0_3[1];

static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_not_possible_reason_0_3;

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_stag_ordered_reuse_not_possible_reason_0_0[2];

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_stag_ordered_reuse_not_possible_reason_0_1[1];

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_stag_ordered_reuse_not_possible_reason_0_2[1];

static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_ptag_ordered_reuse_not_possible_reason_0[3];

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_name_ordered_reuse_not_possible_reason_0[4];

static const MR_Integer transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__functor_number_map_reuse_not_possible_reason_0[4];

static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_satisfied_result_0_0;

static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__field_types_reuse_satisfied_result_0_1[1];

static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_satisfied_result_0_1;

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_stag_ordered_reuse_satisfied_result_0_0[1];

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_stag_ordered_reuse_satisfied_result_0_1[1];

static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_ptag_ordered_reuse_satisfied_result_0[2];

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_name_ordered_reuse_satisfied_result_0[2];

static const MR_Integer transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__functor_number_map_reuse_satisfied_result_0[2];

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__load_structure_reuse_table_3_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word PredId_7,
  MR_Integer ProcId_8,
  MR_Word STATE_VARIABLE_ReuseTable_0_16,
  MR_Word * STATE_VARIABLE_ReuseTable_17);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__load_structure_reuse_table_2_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__load_structure_reuse_table_2_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word PredId_6,
  MR_Word STATE_VARIABLE_ReuseTable_0_10,
  MR_Word * STATE_VARIABLE_ReuseTable_11);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__dump_entries_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word PPId_7,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__to_structure_reuse_condition_1_f_0(
  MR_Word Condition_3,
  MR_Word * StructureReuseCondition_4);

static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__from_public_reuse_condition_1_f_0(
  MR_Word PublicReuseCondition_3);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__collect_aliased_vars_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Vars_0_7,
  MR_Word * STATE_VARIABLE_Vars_8);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word ProcInfo_8,
  MR_Word SharingAs_9,
  MR_Word Node_10,
  MR_Word OtherNodes_11,
  MR_Word * AliasedNodes_12,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__there_is_a_subsumption_relation_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word ProcInfo_7,
  MR_Word HeadVar__3_3,
  MR_Word DataA_10,
  MR_Word * DataB_11,
  MR_Cont cont,
  void * cont_env_ptr);

static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_condition_from_called_proc_to_local_condition_6_f_0(
  MR_Word ModuleInfo_8,
  MR_Word ProcInfo_9,
  MR_Word HeadVars_10,
  MR_Word LuData_11,
  MR_Word SharingAs_12,
  MR_Word CalledCondition_13);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_conditions_subsume_reuse_condition_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word ProcInfo_6,
  MR_Word Conds_7,
  MR_Word Cond_8);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__load_structure_reuse_table_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_maybe_dump_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__to_structure_reuse_domain_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__from_structure_reuse_domain_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_7_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_7_p_0_3(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_2_7_p_0(
  MR_Word ModuleInfo_1,
  MR_Word ProcInfo_2,
  MR_Word LiveData_3,
  MR_Word SharingAs_4,
  MR_Word StaticVars_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_from_called_procedure_to_local_reuse_as_6_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_from_called_procedure_to_local_reuse_as_6_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_conditions_add_conditions_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word ProcInfo_7,
  MR_Word NewConds_8,
  MR_Word STATE_VARIABLE_Conds_0_12,
  MR_Word * STATE_VARIABLE_Conds_13);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_condition_subsumed_by_list_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word ProcInfo_6,
  MR_Word Cond_7,
  MR_Word HeadVar__4_4);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_rename_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_subsumed_by_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_condition_rename_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_condition_init_6_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_condition_init_6_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Unify____no_clobber_args_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Compare____no_clobber_args_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Unify____ppid_no_clobbers_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Compare____ppid_no_clobbers_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_as_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_as_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_as_and_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_as_and_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_as_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_as_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_condition_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_condition_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_conditions_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_conditions_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_not_possible_reason_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_not_possible_reason_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_satisfied_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_satisfied_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__domain_scalar_common_1[7][2];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__domain_scalar_common_2[8][3];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__domain_scalar_common_3[4][5];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__domain_scalar_common_4[4][8];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__domain_scalar_common_5[4][7];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__domain_scalar_common_6[1][10];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__domain_scalar_common_7[2][1];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__domain_scalar_common_8[1][9];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__domain_scalar_common_9[1][6];




static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__domain_scalar_common_1[7][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain_scalar_common_1[0]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain_scalar_common_1[0]))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__domain_scalar_common_2[8][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__bimap__bimap__type_ctor_info_bimap_2)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_ppid_no_clobbers_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain_scalar_common_3[0])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__reuse_condition_init_6_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain_scalar_common_3[1])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain_scalar_common_9[0])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_7_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain_scalar_common_3[2])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__from_structure_reuse_domain_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain_scalar_common_3[3])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__to_structure_reuse_domain_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__domain_scalar_common_3[4][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_structure_reuse_condition_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_structure_reuse_condition_0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__domain_scalar_common_4[4][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_0)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__list__pti_list_1__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__domain_scalar_common_5[4][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__list__pti_list_1__plain_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__domain_scalar_common_6[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__list__pti_list_1__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__domain_scalar_common_7[2][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Unsigned) 4U))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__domain_scalar_common_8[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_0)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__list__pti_list_1__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__pair__pti_pair_2__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__domain_scalar_common_9[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__pair__pti_pair_2__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__domain__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__domain__list__pti_list_1__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__domain__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__domain__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__ctgc__structure_reuse__domain__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&transform_hlds__ctgc__structure_reuse__domain__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__domain__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__domain__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__ctgc__structure_reuse__domain__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__domain__list__pti_list_1__plain_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__domain__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__ctgc__structure_reuse__domain__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__domain__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__domain__pair__pti_pair_2__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0__plain_parse_tree__prog_data_pragma__type_ctor_info_datastruct_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__domain__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__ctgc__structure_reuse__domain__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__domain__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_no_clobber_args_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain____Unify____no_clobber_args_0_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain____Compare____no_clobber_args_0_0_10001)),
  (MR_String) "transform_hlds.ctgc.structure_reuse.domain",
  (MR_String) "no_clobber_args",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&transform_hlds__ctgc__structure_reuse__domain__list__ti_list_1builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__field_types_ppid_no_clobbers_0_0[2] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
  (MR_PseudoTypeInfo) (&transform_hlds__ctgc__structure_reuse__domain__list__ti_list_1builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_ppid_no_clobbers_0_0 = {
  (MR_String) "ppid_no_clobbers",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__field_types_ppid_no_clobbers_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_stag_ordered_ppid_no_clobbers_0_0[1] = {
  &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_ppid_no_clobbers_0_0
};

static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_ptag_ordered_ppid_no_clobbers_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_stag_ordered_ppid_no_clobbers_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_name_ordered_ppid_no_clobbers_0[1] = {
  &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_ppid_no_clobbers_0_0
};

static const MR_Integer transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__functor_number_map_ppid_no_clobbers_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_ppid_no_clobbers_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain____Unify____ppid_no_clobbers_0_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain____Compare____ppid_no_clobbers_0_0_10001)),
  (MR_String) "transform_hlds.ctgc.structure_reuse.domain",
  (MR_String) "ppid_no_clobbers",
  {     transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_name_ordered_ppid_no_clobbers_0 },
  {     transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_ptag_ordered_ppid_no_clobbers_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__functor_number_map_ppid_no_clobbers_0
};

static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_as_0_0 = {
  (MR_String) "no_reuse",
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

static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_as_0_1 = {
  (MR_String) "unconditional",
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

static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__domain__list__ti_list_1transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0)
  }
};

static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__field_types_reuse_as_0_2[1] = {
  (MR_PseudoTypeInfo) (&transform_hlds__ctgc__structure_reuse__domain__list__ti_list_1transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0)
};

static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_as_0_2 = {
  (MR_String) "conditional",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(2),
  transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__field_types_reuse_as_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_stag_ordered_reuse_as_0_0[2] = {
  &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_as_0_0,
  &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_as_0_1
};

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_stag_ordered_reuse_as_0_1[1] = {
  &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_as_0_2
};

static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_ptag_ordered_reuse_as_0[2] = {
  {
    UINT32_C(2),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_stag_ordered_reuse_as_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_stag_ordered_reuse_as_0_1,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_name_ordered_reuse_as_0[3] = {
  &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_as_0_2,
  &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_as_0_0,
  &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_as_0_1
};

static const MR_Integer transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__functor_number_map_reuse_as_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_as_0_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_as_0_0_10001)),
  (MR_String) "transform_hlds.ctgc.structure_reuse.domain",
  (MR_String) "reuse_as",
  {     transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_name_ordered_reuse_as_0 },
  {     transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_ptag_ordered_reuse_as_0 },
  (MR_Integer) 3,
  UINT16_C(4),
  transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__functor_number_map_reuse_as_0
};

static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__field_types_reuse_as_and_status_0_0[2] = {
  (MR_PseudoTypeInfo) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_0),
  (MR_PseudoTypeInfo) (&analysis__analysis__type_ctor_info_analysis_status_0)
};

static const MR_DuArgLocn transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__field_locns_reuse_as_and_status_0_0[2] = {
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

static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_as_and_status_0_0 = {
  (MR_String) "reuse_as_and_status",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__field_types_reuse_as_and_status_0_0,
  NULL,
  transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__field_locns_reuse_as_and_status_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_stag_ordered_reuse_as_and_status_0_0[1] = {
  &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_as_and_status_0_0
};

static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_ptag_ordered_reuse_as_and_status_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_stag_ordered_reuse_as_and_status_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_name_ordered_reuse_as_and_status_0[1] = {
  &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_as_and_status_0_0
};

static const MR_Integer transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__functor_number_map_reuse_as_and_status_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_as_and_status_0_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_as_and_status_0_0_10001)),
  (MR_String) "transform_hlds.ctgc.structure_reuse.domain",
  (MR_String) "reuse_as_and_status",
  {     transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_name_ordered_reuse_as_and_status_0 },
  {     transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_ptag_ordered_reuse_as_and_status_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__functor_number_map_reuse_as_and_status_0
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__domain__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_TypeInfo) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0)
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__domain__bimap__ti_bimap_2transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_ppid_no_clobbers_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__bimap__bimap__type_ctor_info_bimap_2,
  {
    (MR_TypeInfo) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_ppid_no_clobbers_0),
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)
  }
};

static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__field_types_reuse_as_table_0_0[2] = {
  (MR_PseudoTypeInfo) (&transform_hlds__ctgc__structure_reuse__domain__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0),
  (MR_PseudoTypeInfo) (&transform_hlds__ctgc__structure_reuse__domain__bimap__ti_bimap_2transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_ppid_no_clobbers_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0)
};

static const MR_ConstString transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__field_names_reuse_as_table_0_0[2] = {
  (MR_String) "reuse_info_map",
  (MR_String) "reuse_version_map"
};

static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_as_table_0_0 = {
  (MR_String) "reuse_as_table",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__field_types_reuse_as_table_0_0,
  transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__field_names_reuse_as_table_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_stag_ordered_reuse_as_table_0_0[1] = {
  &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_as_table_0_0
};

static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_ptag_ordered_reuse_as_table_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_stag_ordered_reuse_as_table_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_name_ordered_reuse_as_table_0[1] = {
  &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_as_table_0_0
};

static const MR_Integer transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__functor_number_map_reuse_as_table_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_as_table_0_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_as_table_0_0_10001)),
  (MR_String) "transform_hlds.ctgc.structure_reuse.domain",
  (MR_String) "reuse_as_table",
  {     transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_name_ordered_reuse_as_table_0 },
  {     transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_ptag_ordered_reuse_as_table_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__functor_number_map_reuse_as_table_0
};

static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_condition_0_0 = {
  (MR_String) "always",
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

static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__domain__set_ordlist__ti_set_ordlist_1parse_tree__prog_data_pragma__type_ctor_info_datastruct_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__domain__list__ti_list_1parse_tree__prog_data_pragma__type_ctor_info_datastruct_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0)
  }
};

static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__field_types_reuse_condition_0_1[3] = {
  (MR_PseudoTypeInfo) (&transform_hlds__ctgc__structure_reuse__domain__set_ordlist__ti_set_ordlist_1parse_tree__prog_data_pragma__type_ctor_info_datastruct_0),
  (MR_PseudoTypeInfo) (&transform_hlds__ctgc__structure_reuse__domain__list__ti_list_1parse_tree__prog_data_pragma__type_ctor_info_datastruct_0),
  (MR_PseudoTypeInfo) (&transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_0)
};

static const MR_ConstString transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__field_names_reuse_condition_0_1[3] = {
  (MR_String) "reuseable_nodes",
  (MR_String) "local_use_headvars",
  (MR_String) "local_sharing_headvars"
};

static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_condition_0_1 = {
  (MR_String) "condition",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__field_types_reuse_condition_0_1,
  transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__field_names_reuse_condition_0_1,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_stag_ordered_reuse_condition_0_0[1] = {
  &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_condition_0_0
};

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_stag_ordered_reuse_condition_0_1[1] = {
  &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_condition_0_1
};

static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_ptag_ordered_reuse_condition_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_stag_ordered_reuse_condition_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_stag_ordered_reuse_condition_0_1,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_name_ordered_reuse_condition_0[2] = {
  &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_condition_0_0,
  &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_condition_0_1
};

static const MR_Integer transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__functor_number_map_reuse_condition_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_condition_0_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_condition_0_0_10001)),
  (MR_String) "transform_hlds.ctgc.structure_reuse.domain",
  (MR_String) "reuse_condition",
  {     transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_name_ordered_reuse_condition_0 },
  {     transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_ptag_ordered_reuse_condition_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__functor_number_map_reuse_condition_0
};

const MR_TypeCtorInfo_Struct transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_conditions_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_conditions_0_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_conditions_0_0_10001)),
  (MR_String) "transform_hlds.ctgc.structure_reuse.domain",
  (MR_String) "reuse_conditions",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&transform_hlds__ctgc__structure_reuse__domain__list__ti_list_1transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_not_possible_reason_0_0 = {
  (MR_String) "no_reuse",
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

static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_not_possible_reason_0_1 = {
  (MR_String) "unknown_livedata",
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

static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__domain__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&transform_hlds__ctgc__structure_reuse__domain__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__field_types_reuse_not_possible_reason_0_2[1] = {
  (MR_PseudoTypeInfo) (&transform_hlds__ctgc__structure_reuse__domain__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_not_possible_reason_0_2 = {
  (MR_String) "reuse_condition_violated",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(2),
  transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__field_types_reuse_not_possible_reason_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__field_types_reuse_not_possible_reason_0_3[1] = {
  (MR_PseudoTypeInfo) (&transform_hlds__ctgc__structure_reuse__domain__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_not_possible_reason_0_3 = {
  (MR_String) "reuse_nodes_have_sharing",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(3),
  transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__field_types_reuse_not_possible_reason_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_stag_ordered_reuse_not_possible_reason_0_0[2] = {
  &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_not_possible_reason_0_0,
  &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_not_possible_reason_0_1
};

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_stag_ordered_reuse_not_possible_reason_0_1[1] = {
  &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_not_possible_reason_0_2
};

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_stag_ordered_reuse_not_possible_reason_0_2[1] = {
  &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_not_possible_reason_0_3
};

static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_ptag_ordered_reuse_not_possible_reason_0[3] = {
  {
    UINT32_C(2),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_stag_ordered_reuse_not_possible_reason_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_stag_ordered_reuse_not_possible_reason_0_1,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_stag_ordered_reuse_not_possible_reason_0_2,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_name_ordered_reuse_not_possible_reason_0[4] = {
  &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_not_possible_reason_0_0,
  &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_not_possible_reason_0_2,
  &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_not_possible_reason_0_3,
  &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_not_possible_reason_0_1
};

static const MR_Integer transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__functor_number_map_reuse_not_possible_reason_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_not_possible_reason_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_not_possible_reason_0_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_not_possible_reason_0_0_10001)),
  (MR_String) "transform_hlds.ctgc.structure_reuse.domain",
  (MR_String) "reuse_not_possible_reason",
  {     transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_name_ordered_reuse_not_possible_reason_0 },
  {     transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_ptag_ordered_reuse_not_possible_reason_0 },
  (MR_Integer) 4,
  UINT16_C(4),
  transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__functor_number_map_reuse_not_possible_reason_0
};

static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_satisfied_result_0_0 = {
  (MR_String) "reuse_possible",
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

static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__field_types_reuse_satisfied_result_0_1[1] = {
  (MR_PseudoTypeInfo) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_not_possible_reason_0)
};

static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_satisfied_result_0_1 = {
  (MR_String) "reuse_not_possible",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__field_types_reuse_satisfied_result_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_stag_ordered_reuse_satisfied_result_0_0[1] = {
  &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_satisfied_result_0_0
};

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_stag_ordered_reuse_satisfied_result_0_1[1] = {
  &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_satisfied_result_0_1
};

static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_ptag_ordered_reuse_satisfied_result_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_stag_ordered_reuse_satisfied_result_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_stag_ordered_reuse_satisfied_result_0_1,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_name_ordered_reuse_satisfied_result_0[2] = {
  &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_satisfied_result_0_1,
  &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_functor_desc_reuse_satisfied_result_0_0
};

static const MR_Integer transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__functor_number_map_reuse_satisfied_result_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_satisfied_result_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_satisfied_result_0_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_satisfied_result_0_0_10001)),
  (MR_String) "transform_hlds.ctgc.structure_reuse.domain",
  (MR_String) "reuse_satisfied_result",
  {     transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_name_ordered_reuse_satisfied_result_0 },
  {     transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__du_ptag_ordered_reuse_satisfied_result_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__functor_number_map_reuse_satisfied_result_0
};

void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_satisfied_result_0_0(
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
        *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

        transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_not_possible_reason_0_0(HeadVar__1_1, Var_11, ArgY1_7);
      }
    }
  }
}

MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_satisfied_result_0_0(
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
      MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
      MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

      succeeded = (CastY_4 == CastX_3);
    }
    else
    {
      MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_6;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        succeeded = transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_not_possible_reason_0_0(ArgX1_5, ArgY1_6);
      }
    }
    return succeeded;
  }
}

void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_not_possible_reason_0_0(
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
                  *HeadVar__1_1 = (MR_Integer) 1;
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
                  *HeadVar__1_1 = (MR_Integer) 1;
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
            MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

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
                {
                  MR_Word ArgY1_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

                  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__domain_scalar_common_1[6]), HeadVar__1_1, ((MR_Box) (Var_24)), ((MR_Box) (ArgY1_11)));
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
            MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

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
                  MR_Word ArgY1_19 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));

                  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__domain_scalar_common_1[6]), HeadVar__1_1, ((MR_Box) (Var_25)), ((MR_Box) (ArgY1_19)));
                }
                break;
            }
          }
          break;
      }
  }
}

MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_not_possible_reason_0_0(
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
                MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_4 == CastX_3);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_6 == CastX_5);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word TypeInfo_13_13;
            MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_8;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              TypeInfo_13_13 = (MR_Word) (&transform_hlds__ctgc__structure_reuse__domain_scalar_common_1[6]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX1_7)), ((MR_Box) (ArgY1_8)));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word TypeInfo_14_14;
            MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_10;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_10 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              TypeInfo_14_14 = (MR_Word) (&transform_hlds__ctgc__structure_reuse__domain_scalar_common_1[6]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX1_9)), ((MR_Box) (ArgY1_10)));
            }
          }
          break;
      }
    return succeeded;
  }
}

void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_conditions_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__domain_scalar_common_1[5]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_conditions_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__domain_scalar_common_1[5]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_condition_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_18 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_19 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_18 == CastY_19);
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
      MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word ArgY1_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_Word ArgY2_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word ArgY3_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 2))));
        MR_Word SubResult1_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__domain_scalar_common_1[2]), &SubResult1_12, ((MR_Box) (Var_25)), ((MR_Box) (ArgY1_11)));
        succeeded = (SubResult1_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult1_12;
        else
        {
          MR_Word SubResult2_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__domain_scalar_common_1[1]), &SubResult2_15, ((MR_Box) (Var_24)), ((MR_Box) (ArgY2_14)));
          succeeded = (SubResult2_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult2_15;
          else
            transform_hlds__ctgc__structure_sharing__domain____Compare____sharing_as_0_0(HeadVar__1_1, Var_23, ArgY3_17);
        }
      }
    }
  }
}

MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_condition_0_0(
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
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
      MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

      succeeded = (CastY_4 == CastX_3);
    }
    else
    {
      MR_Word TypeInfo_13_13;
      MR_Word TypeInfo_14_14;
      MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_6;
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_8;
      MR_Word ArgX3_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_10;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        ArgY3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
        TypeInfo_13_13 = (MR_Word) (&transform_hlds__ctgc__structure_reuse__domain_scalar_common_1[2]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
        if (succeeded)
        {
          TypeInfo_14_14 = (MR_Word) (&transform_hlds__ctgc__structure_reuse__domain_scalar_common_1[1]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
          if (succeeded)
            succeeded = transform_hlds__ctgc__structure_sharing__domain____Unify____sharing_as_0_0(ArgX3_9, ArgY3_10);
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_as_table_0_0(
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

      mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__domain_scalar_common_2[1]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__domain_scalar_common_2[2]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
    }
  }
}

MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_as_table_0_0(
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

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__domain_scalar_common_2[1]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_10_10 = (MR_Word) (&transform_hlds__ctgc__structure_reuse__domain_scalar_common_2[2]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      }
    }
    return succeeded;
  }
}

void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_as_and_status_0_0(
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
      MR_Word ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 3);
      MR_Word ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 3);
      MR_Word SubResult1_6;

      transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_as_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Integer Var_13 = (MR_Integer) (ArgX2_7);
        MR_Integer Var_14 = (MR_Integer) (ArgY2_8);

        succeeded = (Var_13 < Var_14);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 1;
        else
        {
          succeeded = (Var_13 > Var_14);
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
transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_as_and_status_0_0(
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
      MR_Word ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 3);
      MR_Word ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 3);

      succeeded = transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_as_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
        succeeded = (ArgX2_5 == ArgY2_6);
    }
    return succeeded;
  }
}

void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_as_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

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
                {
                  MR_Word ArgY1_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

                  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__domain_scalar_common_1[5]), HeadVar__1_1, ((MR_Box) (Var_13)), ((MR_Box) (ArgY1_9)));
                }
                break;
            }
          }
          break;
      }
  }
}

MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_as_0_0(
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
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_4 == CastX_3);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_6 == CastX_5);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word TypeInfo_11_11;
            MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_8;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              TypeInfo_11_11 = (MR_Word) (&transform_hlds__ctgc__structure_reuse__domain_scalar_common_1[5]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ArgX1_7)), ((MR_Box) (ArgY1_8)));
            }
          }
          break;
      }
    return succeeded;
  }
}

void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Compare____ppid_no_clobbers_0_0(
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

      hlds__hlds_pred____Compare____pred_proc_id_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__domain_scalar_common_1[4]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
    }
  }
}

MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Unify____ppid_no_clobbers_0_0(
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

      succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        TypeInfo_10_10 = (MR_Word) (&transform_hlds__ctgc__structure_reuse__domain_scalar_common_1[4]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      }
    }
    return succeeded;
  }
}

void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Compare____no_clobber_args_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__domain_scalar_common_1[4]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Unify____no_clobber_args_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__domain_scalar_common_1[4]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__load_structure_reuse_table_3_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word PredId_7,
  MR_Integer ProcId_8,
  MR_Word STATE_VARIABLE_ReuseTable_0_16,
  MR_Word * STATE_VARIABLE_ReuseTable_17)
{
  {
    MR_Word ProcInfo_10;
    MR_Word MaybePublicReuse_11;

    hlds__hlds_module__module_info_proc_info_4_p_0(ModuleInfo_6, PredId_7, ProcId_8, &ProcInfo_10);
    hlds__hlds_pred__proc_info_get_structure_reuse_2_p_0(ProcInfo_10, &MaybePublicReuse_11);
    if ((MaybePublicReuse_11 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ReuseTable_17 = STATE_VARIABLE_ReuseTable_0_16;
    else
    {
      MR_Word PublicReuse_12;
      MR_Word Status_13;
      MR_Word PPId_14;
      MR_Word PrivateReuse_15;
      MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePublicReuse_11, (MR_Integer) 0))));
      MR_Word Var_19;
      MR_Word T0_26;
      MR_Word T_27;
      MR_Word Var_31;

      PublicReuse_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 0))));
      Status_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 1))) & (MR_Integer) 3);
      {
        PPId_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), PPId_14, 0) = ((MR_Box) (PredId_7));
        MR_hl_field(MR_mktag(0), PPId_14, 1) = ((MR_Box) (ProcId_8));
      }
      PrivateReuse_15 = transform_hlds__ctgc__structure_reuse__domain__from_structure_reuse_domain_1_f_0(PublicReuse_12);
      {
        Var_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (PrivateReuse_15));
        MR_hl_field(MR_mktag(0), Var_19, 1) = (MR_Box) ((MR_Unsigned) (Status_13));
      }
      T0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ReuseTable_0_16, (MR_Integer) 0))));
      mercury__map__set_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0), ((MR_Box) (PPId_14)), ((MR_Box) (Var_19)), T0_26, &T_27);
      Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ReuseTable_0_16, (MR_Integer) 1))));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_ReuseTable_17 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (T_27));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_31));
      }
    }
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__load_structure_reuse_table_2_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_ReuseTable_17;

    transform_hlds__ctgc__structure_reuse__domain__load_structure_reuse_table_3_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ReuseTable_17);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ReuseTable_17));
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__load_structure_reuse_table_2_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word PredId_6,
  MR_Word STATE_VARIABLE_ReuseTable_0_10,
  MR_Word * STATE_VARIABLE_ReuseTable_11)
{
  {
    MR_Word PredInfo_8;
    MR_Word ProcIds_9;
    MR_Word Var_12;
    MR_Box conv1_STATE_VARIABLE_ReuseTable_11;

    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_5, PredId_6, &PredInfo_8);
    ProcIds_9 = hlds__hlds_pred__pred_info_procids_1_f_0(PredInfo_8);
    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain_scalar_common_4[3]));
      MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__load_structure_reuse_table_2_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (ModuleInfo_5));
      MR_hl_field(MR_mktag(0), Var_12, 4) = ((MR_Box) (PredId_6));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0), Var_12, ProcIds_9, ((MR_Box) (STATE_VARIABLE_ReuseTable_0_10)), &conv1_STATE_VARIABLE_ReuseTable_11);
    *STATE_VARIABLE_ReuseTable_11 = ((MR_Word) (conv1_STATE_VARIABLE_ReuseTable_11));
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__dump_entries_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word PPId_7,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word ReuseAs_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
    MR_String Var_18;

    mercury__io__write_string_3_p_0((MR_String) "% ");
    hlds__hlds_out__hlds_out_util__write_pred_proc_id_4_p_0(ModuleInfo_6, PPId_7);
    mercury__io__write_string_3_p_0((MR_String) "\t--> ");
    Var_18 = transform_hlds__ctgc__structure_reuse__domain__reuse_as_short_description_1_f_0(ReuseAs_8);
    mercury__io__write_string_3_p_0(Var_18);
    mercury__io__nl_2_p_0();
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__to_structure_reuse_condition_1_f_0(
  MR_Word Condition_3,
  MR_Word * StructureReuseCondition_4)
{
  {
    MR_bool succeeded = (Condition_3 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word DeadNodes_5;
    MR_Word LiveNodes_6;
    MR_Word SharingAs_7;
    MR_Word Var_8;

    if (succeeded)
    {
      DeadNodes_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Condition_3, (MR_Integer) 0))));
      LiveNodes_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Condition_3, (MR_Integer) 1))));
      SharingAs_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Condition_3, (MR_Integer) 2))));
      Var_8 = transform_hlds__ctgc__structure_sharing__domain__to_structure_sharing_domain_1_f_0(SharingAs_7);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        *StructureReuseCondition_4 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (DeadNodes_5));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (LiveNodes_6));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_8));
      }
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__from_public_reuse_condition_1_f_0(
  MR_Word PublicReuseCondition_3)
{
  {
    MR_Word ReuseCondition_4;
    MR_Word DeadNodes_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PublicReuseCondition_3, (MR_Integer) 0))));
    MR_Word LiveNodes_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PublicReuseCondition_3, (MR_Integer) 1))));
    MR_Word PublicSharing_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PublicReuseCondition_3, (MR_Integer) 2))));
    MR_Word Var_8;

    Var_8 = transform_hlds__ctgc__structure_sharing__domain__from_structure_sharing_domain_1_f_0(PublicSharing_7);
    {
      ReuseCondition_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ReuseCondition_4, 0) = ((MR_Box) (DeadNodes_5));
      MR_hl_field(MR_mktag(1), ReuseCondition_4, 1) = ((MR_Box) (LiveNodes_6));
      MR_hl_field(MR_mktag(1), ReuseCondition_4, 2) = ((MR_Box) (Var_8));
    }
    return ReuseCondition_4;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__collect_aliased_vars_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Vars_0_7,
  MR_Word * STATE_VARIABLE_Vars_8)
{
  {
    MR_Word DataA_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word DataB_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DataA_4, (MR_Integer) 0))));
    MR_Word STATE_VARIABLE_Vars_10_10;
    MR_Word Var_11;

    mercury__set__insert_3_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__domain_scalar_common_1[0]), ((MR_Box) (Var_9)), STATE_VARIABLE_Vars_0_7, &STATE_VARIABLE_Vars_10_10);
    Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DataB_5, (MR_Integer) 0))));
    mercury__set__insert_3_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__domain_scalar_common_1[0]), ((MR_Box) (Var_11)), STATE_VARIABLE_Vars_10_10, STATE_VARIABLE_Vars_8);
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_3(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0_s * env_ptr = (struct transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__SharingNode_15 = ((MR_Word) ((env_ptr)->transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__conv0_SharingNode_15));
    transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_2(env_ptr);
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_4(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0_s * env_ptr = (struct transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0_s *) (env_ptr_arg);

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *((env_ptr)->transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__AliasedNodes_12) = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((env_ptr)->transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__SharingNode_15));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((env_ptr)->transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__OtherAliasedNode_16));
    }
    ((env_ptr)->transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__cont)((env_ptr)->transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__cont_env_ptr);
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_2(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0_s * env_ptr = (struct transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0_s *) (env_ptr_arg);

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      (env_ptr)->transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__Var_19 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((env_ptr)->transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__Node_10));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((env_ptr)->transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__OtherNodes_11));
    }
    transform_hlds__ctgc__structure_reuse__domain__there_is_a_subsumption_relation_5_p_0((env_ptr)->transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__ModuleInfo_7, (env_ptr)->transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__ProcInfo_8, (env_ptr)->transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__Var_19, (env_ptr)->transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__SharingNode_15, &(env_ptr)->transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__OtherAliasedNode_16, transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_4, env_ptr);
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_1(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0_s * env_ptr = (struct transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0_s *) (env_ptr_arg);

    mercury__list__member_2_p_1((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0), &(env_ptr)->transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__conv0_SharingNode_15, (env_ptr)->transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__SharingNodes_14, transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_3, env_ptr);
    {
      MR_Word NextNode_17;
      MR_Word NextOtherNodes_18;

      (env_ptr)->transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__succeeded = ((env_ptr)->transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__OtherNodes_11 != (MR_Word) ((MR_Unsigned) 0U));
      if ((env_ptr)->transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__succeeded)
      {
        NextNode_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), (env_ptr)->transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__OtherNodes_11, (MR_Integer) 0))));
        NextOtherNodes_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), (env_ptr)->transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__OtherNodes_11, (MR_Integer) 1))));
        transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0((env_ptr)->transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__ModuleInfo_7, (env_ptr)->transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__ProcInfo_8, (env_ptr)->transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__SharingAs_9, NextNode_17, NextOtherNodes_18, (env_ptr)->transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__AliasedNodes_12, (env_ptr)->transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__cont, (env_ptr)->transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__cont_env_ptr);
      }
    }
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word ProcInfo_8,
  MR_Word SharingAs_9,
  MR_Word Node_10,
  MR_Word OtherNodes_11,
  MR_Word * AliasedNodes_12,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0_s env;

    (env).transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__ModuleInfo_7 = ModuleInfo_7;
    (env).transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__ProcInfo_8 = ProcInfo_8;
    (env).transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__SharingAs_9 = SharingAs_9;
    (env).transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__Node_10 = Node_10;
    (env).transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__OtherNodes_11 = OtherNodes_11;
    (env).transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__AliasedNodes_12 = AliasedNodes_12;
    (env).transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__cont = cont;
    (env).transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__cont_env_ptr = cont_env_ptr;
    {
      MR_Word SharingNodes0_13;

      SharingNodes0_13 = transform_hlds__ctgc__structure_sharing__domain__extend_datastruct_4_f_0((env).transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__ModuleInfo_7, (env).transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__ProcInfo_8, (env).transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__SharingAs_9, (env).transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__Node_10);
      mercury__list__delete_3_p_1((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0), SharingNodes0_13, ((MR_Box) ((env).transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__Node_10)), &(env).transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_env_0__SharingNodes_14, transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0_1, &env);
    }
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__there_is_a_subsumption_relation_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word ProcInfo_7,
  MR_Word HeadVar__3_3,
  MR_Word DataA_10,
  MR_Word * DataB_11,
  MR_Cont cont,
  void * cont_env_ptr)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__3_3 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word DataB0_8;
    MR_Word DataBs_9;

    // setup for model_non tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      DataB0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      DataBs_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      *DataB_11 = DataB0_8;
      succeeded = transform_hlds__ctgc__datastruct__datastruct_subsumed_by_4_p_0(ModuleInfo_6, ProcInfo_7, DataA_10, *DataB_11);
      if (succeeded)
        cont(cont_env_ptr);
      *DataB_11 = DataB0_8;
      succeeded = transform_hlds__ctgc__datastruct__datastruct_subsumed_by_4_p_0(ModuleInfo_6, ProcInfo_7, *DataB_11, DataA_10);
      if (succeeded)
        cont(cont_env_ptr);
      {
        MR_Word next_value_of_HeadVar__3_3 = DataBs_9;

        // direct tailcall eliminated
        ;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        continue;
      }
    }
    break;
  }
}

static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_condition_from_called_proc_to_local_condition_6_f_0(
  MR_Word ModuleInfo_8,
  MR_Word ProcInfo_9,
  MR_Word HeadVars_10,
  MR_Word LuData_11,
  MR_Word SharingAs_12,
  MR_Word CalledCondition_13)
{
  {
    MR_Word LocalCondition_14;

    if ((CalledCondition_13 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__require__unexpected_2_p_0((MR_String) "function \140transform_hlds.ctgc.structure_reuse.domain.reuse_condition_from_called_proc_to_local_condition\'/6", (MR_String) "explicit condition expected");
    else
    {
      MR_Word CalledDeadNodes_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CalledCondition_13, (MR_Integer) 0))));
      MR_Word CalledInUseNodes_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CalledCondition_13, (MR_Integer) 1))));
      MR_Word CalledSharingAs_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CalledCondition_13, (MR_Integer) 2))));
      MR_Word AllDeadNodes_18;
      MR_Word AllDeadHeadVarNodes_19;
      MR_Word Var_26;

      Var_26 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0), CalledDeadNodes_15);
      AllDeadNodes_18 = transform_hlds__ctgc__structure_sharing__domain__extend_datastructs_4_f_0(ModuleInfo_8, ProcInfo_9, SharingAs_12, Var_26);
      AllDeadHeadVarNodes_19 = transform_hlds__ctgc__datastruct__datastructs_project_2_f_0(HeadVars_10, AllDeadNodes_18);
      if ((AllDeadHeadVarNodes_19 == (MR_Word) ((MR_Unsigned) 0U)))
        LocalCondition_14 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word AllInUseNodes_22;
        MR_Word AllInUseHeadVarNodes_23;
        MR_Word AllLocalSharing_24;
        MR_Word AllHeadVarLocalSharing_25;
        MR_Word Var_27;
        MR_Word Var_28;

        Var_27 = mercury__list__append_2_f_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0), LuData_11, CalledInUseNodes_16);
        AllInUseNodes_22 = transform_hlds__ctgc__structure_sharing__domain__extend_datastructs_4_f_0(ModuleInfo_8, ProcInfo_9, SharingAs_12, Var_27);
        AllInUseHeadVarNodes_23 = transform_hlds__ctgc__datastruct__datastructs_project_2_f_0(HeadVars_10, AllInUseNodes_22);
        AllLocalSharing_24 = transform_hlds__ctgc__structure_sharing__domain__sharing_as_comb_4_f_0(ModuleInfo_8, ProcInfo_9, CalledSharingAs_17, SharingAs_12);
        AllHeadVarLocalSharing_25 = transform_hlds__ctgc__structure_sharing__domain__sharing_as_project_2_f_0(HeadVars_10, AllLocalSharing_24);
        Var_28 = mercury__set__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0), AllDeadHeadVarNodes_19);
        {
          LocalCondition_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), LocalCondition_14, 0) = ((MR_Box) (Var_28));
          MR_hl_field(MR_mktag(1), LocalCondition_14, 1) = ((MR_Box) (AllInUseHeadVarNodes_23));
          MR_hl_field(MR_mktag(1), LocalCondition_14, 2) = ((MR_Box) (AllHeadVarLocalSharing_25));
        }
      }
    }
    return LocalCondition_14;
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_conditions_subsume_reuse_condition_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word ProcInfo_6,
  MR_Word Conds_7,
  MR_Word Cond_8)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_condition_subsumed_by_list_4_p_0(ModuleInfo_5, ProcInfo_6, Cond_8, Conds_7);
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__load_structure_reuse_table_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_ReuseTable_11;

    transform_hlds__ctgc__structure_reuse__domain__load_structure_reuse_table_2_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ReuseTable_11);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ReuseTable_11));
  }
}

MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__load_structure_reuse_table_1_f_0(
  MR_Word ModuleInfo_3)
{
  {
    MR_Word ReuseTable_4;
    MR_Word PredIds_5;
    MR_Word Var_6;
    MR_Word Var_7;
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Box conv1_ReuseTable_4;

    hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(ModuleInfo_3, &PredIds_5);
    {
      Var_6 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_6, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain_scalar_common_5[3]));
      MR_hl_field(MR_mktag(0), Var_6, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__load_structure_reuse_table_1_f_0_1));
      MR_hl_field(MR_mktag(0), Var_6, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_6, 3) = ((MR_Box) (ModuleInfo_3));
    }
    Var_13 = mercury__map__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0));
    Var_14 = mercury__bimap__init_0_f_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_ppid_no_clobbers_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0));
    {
      Var_7 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_7, 0) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), Var_7, 1) = ((MR_Box) (Var_14));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0), Var_6, PredIds_5, ((MR_Box) (Var_7)), &conv1_ReuseTable_4);
    ReuseTable_4 = ((MR_Word) (conv1_ReuseTable_4));
    return ReuseTable_4;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_maybe_dump_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    transform_hlds__ctgc__structure_reuse__domain__dump_entries_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  }
}

void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_maybe_dump_5_p_0(
  MR_Word DoDump_6,
  MR_Word ModuleInfo_7,
  MR_Word Table_8)
{
  {
    MR_bool succeeded;

    switch (DoDump_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ReuseInfoMap_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Table_8, (MR_Integer) 0))));

          succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0), ReuseInfoMap_18);
          if (succeeded)
            mercury__io__write_string_3_p_0((MR_String) "% ReuseTable: Empty\n");
          else
          {
            MR_Word Var_23;
            MR_Box conv0_STATE_VARIABLE_IO_11;

            mercury__io__write_string_3_p_0((MR_String) "% ReuseTable: PPId --> Reuse\n");
            {
              Var_23 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain_scalar_common_4[2]));
              MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_maybe_dump_5_p_0_1));
              MR_hl_field(MR_mktag(0), Var_23, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), Var_23, 3) = ((MR_Box) (ModuleInfo_7));
            }
            mercury__map__foldl_4_p_2((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_23, ReuseInfoMap_18, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_11);
          }
        }
        break;
    }
  }
}

void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_insert_reuse_version_proc_5_p_0(
  MR_Word PPId_6,
  MR_Word NoClobbers_7,
  MR_Word NewPPId_8,
  MR_Word STATE_VARIABLE_Table_0_12,
  MR_Word * STATE_VARIABLE_Table_13)
{
  {
    MR_Word T0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Table_0_12, (MR_Integer) 1))));
    MR_Word T_11;
    MR_Word Var_14;
    MR_Word Var_17;

    {
      Var_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (PPId_6));
      MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (NoClobbers_7));
    }
    mercury__bimap__det_insert_4_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_ppid_no_clobbers_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), ((MR_Box) (Var_14)), ((MR_Box) (NewPPId_8)), T0_10, &T_11);
    Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Table_0_12, (MR_Integer) 0))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Table_13 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (T_11));
    }
  }
}

void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_set_4_p_0(
  MR_Word PPId_5,
  MR_Word ReuseAs_Status_6,
  MR_Word STATE_VARIABLE_Table_0_10,
  MR_Word * STATE_VARIABLE_Table_11)
{
  {
    MR_Word T0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Table_0_10, (MR_Integer) 0))));
    MR_Word T_9;
    MR_Word Var_15;

    mercury__map__set_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0), ((MR_Box) (PPId_5)), ((MR_Box) (ReuseAs_Status_6)), T0_8, &T_9);
    Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Table_0_10, (MR_Integer) 1))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Table_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (T_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_15));
    }
  }
}

void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_reverse_search_reuse_version_proc_4_p_0(
  MR_Word Table_5,
  MR_Word NewPPId_6,
  MR_Word * OrigPPId_7,
  MR_Word * NoClobbers_8)
{
  {
    MR_Word Key_9;
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Table_5, (MR_Integer) 1))));
    MR_Box conv0_Key_9;

    mercury__bimap__reverse_lookup_3_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_ppid_no_clobbers_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), Var_10, &conv0_Key_9, ((MR_Box) (NewPPId_6)));
    Key_9 = ((MR_Word) (conv0_Key_9));
    *OrigPPId_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Key_9, (MR_Integer) 0))));
    *NoClobbers_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Key_9, (MR_Integer) 1))));
  }
}

MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_search_reuse_version_proc_4_p_0(
  MR_Word Table_5,
  MR_Word PPId_6,
  MR_Word NoClobbers_7,
  MR_Word * NewPPId_8)
{
  {
    MR_bool succeeded;
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Table_5, (MR_Integer) 1))));
    MR_Word Var_10;
    MR_Box conv0_NewPPId_8;

    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (PPId_6));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (NoClobbers_7));
    }
    succeeded = mercury__bimap__search_3_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_ppid_no_clobbers_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), Var_9, ((MR_Box) (Var_10)), &conv0_NewPPId_8);
    if (succeeded)
    {
      *NewPPId_8 = ((MR_Word) (conv0_NewPPId_8));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_search_3_p_0(
  MR_Word Table_4,
  MR_Word PPId_5,
  MR_Word * ReuseAs_Status_6)
{
  {
    MR_bool succeeded;
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Table_4, (MR_Integer) 0))));
    MR_Box conv0_ReuseAs_Status_6;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0), Var_7, ((MR_Box) (PPId_5)), &conv0_ReuseAs_Status_6);
    if (succeeded)
    {
      *ReuseAs_Status_6 = ((MR_Word) (conv0_ReuseAs_Status_6));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_init_0_f_0(void)
{
  {
    MR_Word HeadVar__1_1;
    MR_Word Var_2;
    MR_Word Var_3;

    Var_2 = mercury__map__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0));
    Var_3 = mercury__bimap__init_0_f_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_ppid_no_clobbers_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0));
    {
      HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__1_1, 0) = ((MR_Box) (Var_2));
      MR_hl_field(MR_mktag(0), HeadVar__1_1, 1) = ((MR_Box) (Var_3));
    }
    return HeadVar__1_1;
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__to_structure_reuse_domain_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv0_StructureReuseCondition_4;

    succeeded = transform_hlds__ctgc__structure_reuse__domain__to_structure_reuse_condition_1_f_0(((MR_Word) (wrapper_arg_1)), &conv0_StructureReuseCondition_4);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv0_StructureReuseCondition_4));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__to_structure_reuse_domain_1_f_0(
  MR_Word ReuseAs_3)
{
  {
    MR_bool succeeded;
    MR_Word ReuseDomain_4;

    switch (MR_tag((MR_Word) ReuseAs_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ReuseAs_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            ReuseDomain_4 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 1:
            ReuseDomain_4 = (MR_Word) ((MR_Unsigned) 4U);
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ReuseConditions_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ReuseAs_3, (MR_Integer) 0))));
          MR_Word Var_6;

          Var_6 = mercury__list__filter_map_2_f_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0), (MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_structure_reuse_condition_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__domain_scalar_common_2[7]), ReuseConditions_5);
          {
            ReuseDomain_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ReuseDomain_4, 0) = ((MR_Box) (Var_6));
          }
        }
        break;
    }
    return ReuseDomain_4;
  }
}

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__from_structure_reuse_domain_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_ReuseCondition_4;

    conv0_ReuseCondition_4 = transform_hlds__ctgc__structure_reuse__domain__from_public_reuse_condition_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_ReuseCondition_4));
    return wrapper_arg_2;
  }
}

MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__from_structure_reuse_domain_1_f_0(
  MR_Word ReuseDomain_3)
{
  {
    MR_Word ReuseAs_4;

    switch (MR_tag((MR_Word) ReuseDomain_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ReuseDomain_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            ReuseAs_4 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 1:
            ReuseAs_4 = (MR_Word) ((MR_Unsigned) 4U);
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word PublicReuseConditions_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ReuseDomain_3, (MR_Integer) 0))));
          MR_Word Var_6;

          Var_6 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_structure_reuse_condition_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__domain_scalar_common_2[6]), PublicReuseConditions_5);
          {
            ReuseAs_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ReuseAs_4, 0) = ((MR_Box) (Var_6));
          }
        }
        break;
    }
    return ReuseAs_4;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_Vars_8;

    transform_hlds__ctgc__structure_reuse__domain__collect_aliased_vars_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_Vars_8);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_Vars_8));
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_7_p_0_2(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_7_p_0_3_env_0_s * env_ptr = (struct transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_7_p_0_3_env_0_s *) (env_ptr_arg);

    *((env_ptr)->transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_7_p_0_3_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_7_p_0_3_env_0__conv1_AliasedNodes_12));
    ((env_ptr)->transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_7_p_0_3_env_0__cont)((env_ptr)->transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_7_p_0_3_env_0__cont_env_ptr);
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_7_p_0_3(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_7_p_0_3_env_0_s env;

    (env).transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_7_p_0_3_env_0__wrapper_arg_1 = wrapper_arg_1;
    (env).transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_7_p_0_3_env_0__cont = cont;
    (env).transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_7_p_0_3_env_0__cont_env_ptr = cont_env_ptr;
    {
      MR_Box closure = closure_arg;

      transform_hlds__ctgc__structure_reuse__domain__aliases_between_reuse_nodes_2_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), &(env).transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_7_p_0_3_env_0__conv1_AliasedNodes_12, transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_7_p_0_2, &env);
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv0_Nodes_3;

    succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_condition_reusable_nodes_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_Nodes_3);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv0_Nodes_3));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word ProcInfo_9,
  MR_Word LiveData_10,
  MR_Word SharingAs_11,
  MR_Word StaticVars_12,
  MR_Word ReuseAs_13,
  MR_Word * Result_14)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) ReuseAs_13)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ReuseAs_13)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *Result_14 = (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__ctgc__structure_reuse__domain_scalar_common_7[1]));
            break;
          case (MR_Integer) 1:
            *Result_14 = (MR_Word) ((MR_Unsigned) 0U);
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Conditions_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ReuseAs_13, (MR_Integer) 0))));
          MR_Word Result0_16;

          transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_2_7_p_0(ModuleInfo_8, ProcInfo_9, LiveData_10, SharingAs_11, StaticVars_12, Conditions_15, &Result0_16);
          if ((Result0_16 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word AliasedVars_17;
            MR_Word ListNodes_28;
            MR_Word AllNodes0_29;
            MR_Word AllNodes_30;

            mercury__list__filter_map_3_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__domain_scalar_common_1[2]), (MR_Word) (&transform_hlds__ctgc__structure_reuse__domain_scalar_common_2[4]), Conditions_15, &ListNodes_28);
            AllNodes0_29 = mercury__set__union_list_1_f_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0), ListNodes_28);
            AllNodes_30 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0), AllNodes0_29);
            if ((AllNodes_30 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.domain.aliases_between_reuse_nodes\'/5", (MR_String) "no nodes");
                return;
              }
            else
            {
              MR_Word Node_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AllNodes_30, (MR_Integer) 0))));
              MR_Word Rest_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AllNodes_30, (MR_Integer) 1))));
              MR_Word AliasedVarsSet_33;
              MR_Word Var_37;
              MR_Word Var_39;
              MR_Box conv3_AliasedVarsSet_33;

              {
                Var_37 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_37, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain_scalar_common_8[0]));
                MR_hl_field(MR_mktag(0), Var_37, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_7_p_0_3));
                MR_hl_field(MR_mktag(0), Var_37, 2) = ((MR_Box) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(0), Var_37, 3) = ((MR_Box) (ModuleInfo_8));
                MR_hl_field(MR_mktag(0), Var_37, 4) = ((MR_Box) (ProcInfo_9));
                MR_hl_field(MR_mktag(0), Var_37, 5) = ((MR_Box) (SharingAs_11));
                MR_hl_field(MR_mktag(0), Var_37, 6) = ((MR_Box) (Node_31));
                MR_hl_field(MR_mktag(0), Var_37, 7) = ((MR_Box) (Rest_32));
              }
              Var_39 = mercury__set__init_0_f_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__domain_scalar_common_1[0]));
              mercury__solutions__aggregate_4_p_3((MR_Word) (&transform_hlds__ctgc__structure_reuse__domain_scalar_common_2[0]), (MR_Word) (&transform_hlds__ctgc__structure_reuse__domain_scalar_common_1[3]), Var_37, (MR_Word) (&transform_hlds__ctgc__structure_reuse__domain_scalar_common_2[5]), ((MR_Box) (Var_39)), &conv3_AliasedVarsSet_33);
              AliasedVarsSet_33 = ((MR_Word) (conv3_AliasedVarsSet_33));
              AliasedVars_17 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__domain_scalar_common_1[0]), AliasedVarsSet_33);
            }
            if ((AliasedVars_17 == (MR_Word) ((MR_Unsigned) 0U)))
              *Result_14 = (MR_Word) ((MR_Unsigned) 0U);
            else
            {
              MR_Word Var_21;

              {
                Var_21 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_21, 0) = ((MR_Box) (AliasedVars_17));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *Result_14 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_21));
              }
            }
          }
          else
            *Result_14 = Result0_16;
        }
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_2_7_p_0(
  MR_Word ModuleInfo_1,
  MR_Word ProcInfo_2,
  MR_Word LiveData_3,
  MR_Word SharingAs_4,
  MR_Word StaticVars_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Cond_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 0))));
      MR_Word Conds_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 1))));

      if ((Cond_18 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word next_value_of_HeadVar__6_6 = Conds_19;

        // direct tailcall eliminated
        ;
        HeadVar__6_6 = next_value_of_HeadVar__6_6;
        continue;
      }
      else
      {
        MR_Word DeadNodes0_54 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cond_18, (MR_Integer) 0))));
        MR_Word InUseNodes_55 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cond_18, (MR_Integer) 1))));
        MR_Word SharingNodes_56 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cond_18, (MR_Integer) 2))));
        MR_Word DeadNodes_57;
        MR_Word StaticDeadNodes_58;

        DeadNodes_57 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0), DeadNodes0_54);
        StaticDeadNodes_58 = transform_hlds__ctgc__datastruct__datastructs_project_2_f_0(StaticVars_5, DeadNodes_57);
        if ((StaticDeadNodes_58 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word NewSharing_59;
          MR_Word UpdatedLiveData_60;
          MR_Word NotLiveResult_61;

          NewSharing_59 = transform_hlds__ctgc__structure_sharing__domain__sharing_as_comb_4_f_0(ModuleInfo_1, ProcInfo_2, SharingNodes_56, SharingAs_4);
          UpdatedLiveData_60 = transform_hlds__ctgc__livedata__livedata_add_liveness_5_f_0(ModuleInfo_1, ProcInfo_2, InUseNodes_55, NewSharing_59, LiveData_3);
          transform_hlds__ctgc__livedata__nodes_are_not_live_5_p_0(ModuleInfo_1, ProcInfo_2, DeadNodes_57, UpdatedLiveData_60, &NotLiveResult_61);
          if ((NotLiveResult_61 == (MR_Word) ((MR_Unsigned) 0U)))
            *HeadVar__7_7 = (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__ctgc__structure_reuse__domain_scalar_common_7[0]));
          else
          {
            MR_Word StillLive_62 = ((MR_Word) ((MR_hl_field(MR_mktag(1), NotLiveResult_61, (MR_Integer) 0))));

            if ((StillLive_62 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word next_value_of_HeadVar__6_6 = Conds_19;

              // direct tailcall eliminated
              ;
              HeadVar__6_6 = next_value_of_HeadVar__6_6;
              continue;
            }
            else
            {
              MR_Word Vars_65;
              MR_Word Var_69;
              MR_Word Result1_195;
              MR_Word Result0_268;

              Vars_65 = transform_hlds__ctgc__datastruct__datastructs_vars_1_f_0(StillLive_62);
              {
                Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (Vars_65));
              }
              {
                Result0_268 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Result0_268, 0) = ((MR_Box) (Var_69));
              }
              transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_2_7_p_0(ModuleInfo_1, ProcInfo_2, LiveData_3, SharingAs_4, StaticVars_5, Conds_19, &Result1_195);
              if ((Result1_195 == (MR_Word) ((MR_Unsigned) 0U)))
                *HeadVar__7_7 = Result0_268;
              else
              {
                MR_Word Var_183 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Result1_195, (MR_Integer) 0))));

                switch (MR_tag((MR_Word) Var_183)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(Var_183)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *HeadVar__7_7 = Result0_268;
                        break;
                      case (MR_Integer) 1:
                        {
                          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.domain.reuse_as_satisfied_2\'/7", (MR_String) "unexpected result");
                          return;
                        }
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word Vars1_156 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_183, (MR_Integer) 0))));
                      MR_Word Vars_157;
                      MR_Word Var_158;
                      MR_Word Var_159;

                      Var_158 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__domain_scalar_common_1[0]), Vars_65, Vars1_156);
                      Vars_157 = mercury__list__sort_and_remove_dups_1_f_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__domain_scalar_common_1[0]), Var_158);
                      {
                        Var_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_159, 0) = ((MR_Box) (Vars_157));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        *HeadVar__7_7 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_159));
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.domain.reuse_as_satisfied_2\'/7", (MR_String) "unexpected result");
                      return;
                    }
                    break;
                }
              }
            }
          }
        }
        else
        {
          MR_Word Var_68;
          MR_Word Vars_71;
          MR_Word Result1_113;
          MR_Word Result0_155;

          Vars_71 = transform_hlds__ctgc__datastruct__datastructs_vars_1_f_0(StaticDeadNodes_58);
          {
            Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (Vars_71));
          }
          {
            Result0_155 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Result0_155, 0) = ((MR_Box) (Var_68));
          }
          transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_2_7_p_0(ModuleInfo_1, ProcInfo_2, LiveData_3, SharingAs_4, StaticVars_5, Conds_19, &Result1_113);
          if ((Result1_113 == (MR_Word) ((MR_Unsigned) 0U)))
            *HeadVar__7_7 = Result0_155;
          else
          {
            MR_Word Var_101 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Result1_113, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) Var_101)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(Var_101)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__7_7 = Result0_155;
                    break;
                  case (MR_Integer) 1:
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.domain.reuse_as_satisfied_2\'/7", (MR_String) "unexpected result");
                      return;
                    }
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Vars1_74 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_101, (MR_Integer) 0))));
                  MR_Word Vars_75;
                  MR_Word Var_76;
                  MR_Word Var_77;

                  Var_76 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__domain_scalar_common_1[0]), Vars_71, Vars1_74);
                  Vars_75 = mercury__list__sort_and_remove_dups_1_f_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__domain_scalar_common_1[0]), Var_76);
                  {
                    Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (Vars_75));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *HeadVar__7_7 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_77));
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.domain.reuse_as_satisfied_2\'/7", (MR_String) "unexpected result");
                  return;
                }
                break;
            }
          }
        }
      }
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_from_called_procedure_to_local_reuse_as_6_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_ReuseAs_16;

    transform_hlds__ctgc__structure_reuse__domain__reuse_as_add_condition_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_ReuseAs_16);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_ReuseAs_16));
  }
}

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_from_called_procedure_to_local_reuse_as_6_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LocalCondition_14;

    conv0_LocalCondition_14 = transform_hlds__ctgc__structure_reuse__domain__reuse_condition_from_called_proc_to_local_condition_6_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_LocalCondition_14));
    return wrapper_arg_2;
  }
}

MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_from_called_procedure_to_local_reuse_as_6_f_0(
  MR_Word ModuleInfo_8,
  MR_Word ProcInfo_9,
  MR_Word HeadVars_10,
  MR_Word LuData_11,
  MR_Word SharingAs_12,
  MR_Word CalledReuseAs_13)
{
  {
    MR_Word LocalReuseAs_14;

    switch (MR_tag((MR_Word) CalledReuseAs_13)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(CalledReuseAs_13)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            mercury__require__unexpected_2_p_0((MR_String) "function \140transform_hlds.ctgc.structure_reuse.domain.reuse_as_from_called_procedure_to_local_reuse_as\'/6", (MR_String) "reuse_as does not specify any reuses");
            break;
          case (MR_Integer) 1:
            mercury__require__unexpected_2_p_0((MR_String) "function \140transform_hlds.ctgc.structure_reuse.domain.reuse_as_from_called_procedure_to_local_reuse_as\'/6", (MR_String) "reuse_as is unconditional");
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ConditionsCaller_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CalledReuseAs_13, (MR_Integer) 0))));
          MR_Word ConditionsCallee_16;
          MR_Word Var_17;
          MR_Word Var_18;
          MR_Box conv2_LocalReuseAs_14;

          {
            Var_17 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain_scalar_common_6[0]));
            MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__reuse_as_from_called_procedure_to_local_reuse_as_6_f_0_1));
            MR_hl_field(MR_mktag(0), Var_17, 2) = ((MR_Box) ((MR_Integer) 5));
            MR_hl_field(MR_mktag(0), Var_17, 3) = ((MR_Box) (ModuleInfo_8));
            MR_hl_field(MR_mktag(0), Var_17, 4) = ((MR_Box) (ProcInfo_9));
            MR_hl_field(MR_mktag(0), Var_17, 5) = ((MR_Box) (HeadVars_10));
            MR_hl_field(MR_mktag(0), Var_17, 6) = ((MR_Box) (LuData_11));
            MR_hl_field(MR_mktag(0), Var_17, 7) = ((MR_Box) (SharingAs_12));
          }
          ConditionsCallee_16 = mercury__list__map_2_f_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0), Var_17, ConditionsCaller_15);
          {
            Var_18 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain_scalar_common_4[1]));
            MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__reuse_as_from_called_procedure_to_local_reuse_as_6_f_0_2));
            MR_hl_field(MR_mktag(0), Var_18, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_18, 3) = ((MR_Box) (ModuleInfo_8));
            MR_hl_field(MR_mktag(0), Var_18, 4) = ((MR_Box) (ProcInfo_9));
          }
          mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_0), Var_18, ConditionsCallee_16, ((MR_Box) ((MR_Unsigned) 0U)), &conv2_LocalReuseAs_14);
          LocalReuseAs_14 = ((MR_Word) (conv2_LocalReuseAs_14));
        }
        break;
    }
    return LocalReuseAs_14;
  }
}

MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_least_upper_bound_4_f_0(
  MR_Word ModuleInfo_6,
  MR_Word ProcInfo_7,
  MR_Word Reuse1_8,
  MR_Word Reuse2_9)
{
  {
    MR_Word Reuse_10;

    transform_hlds__ctgc__structure_reuse__domain__reuse_as_least_upper_bound_5_p_0(ModuleInfo_6, ProcInfo_7, Reuse1_8, Reuse2_9, &Reuse_10);
    return Reuse_10;
  }
}

void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_least_upper_bound_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word ProcInfo_7,
  MR_Word NewReuseAs_8,
  MR_Word STATE_VARIABLE_ReuseAs_0_13,
  MR_Word * STATE_VARIABLE_ReuseAs_14)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) NewReuseAs_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(NewReuseAs_8)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *STATE_VARIABLE_ReuseAs_14 = STATE_VARIABLE_ReuseAs_0_13;
            break;
          case (MR_Integer) 1:
            {
              succeeded = (STATE_VARIABLE_ReuseAs_0_13 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
                *STATE_VARIABLE_ReuseAs_14 = (MR_Word) ((MR_Unsigned) 4U);
              else
                *STATE_VARIABLE_ReuseAs_14 = STATE_VARIABLE_ReuseAs_0_13;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word NewConditions_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), NewReuseAs_8, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) STATE_VARIABLE_ReuseAs_0_13)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(STATE_VARIABLE_ReuseAs_0_13)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *STATE_VARIABLE_ReuseAs_14 = NewReuseAs_8;
                  break;
                case (MR_Integer) 1:
                  *STATE_VARIABLE_ReuseAs_14 = NewReuseAs_8;
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Conditions_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_ReuseAs_0_13, (MR_Integer) 0))));
                MR_Word AllConditions_12;

                transform_hlds__ctgc__structure_reuse__domain__reuse_conditions_add_conditions_5_p_0(ModuleInfo_6, ProcInfo_7, NewConditions_10, Conditions_11, &AllConditions_12);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *STATE_VARIABLE_ReuseAs_14 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (AllConditions_12));
                }
              }
              break;
          }
        }
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_conditions_add_conditions_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word ProcInfo_7,
  MR_Word NewConds_8,
  MR_Word STATE_VARIABLE_Conds_0_12,
  MR_Word * STATE_VARIABLE_Conds_13)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((NewConds_8 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Conds_13 = STATE_VARIABLE_Conds_0_12;
    else
    {
      MR_Word Cond_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), NewConds_8, (MR_Integer) 0))));
      MR_Word RemainingConds_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), NewConds_8, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Conds_14_14;
      MR_Word next_value_of_NewConds_8;
      MR_Word next_value_of_STATE_VARIABLE_Conds_0_12;

      succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_condition_subsumed_by_list_4_p_0(ModuleInfo_6, ProcInfo_7, Cond_10, STATE_VARIABLE_Conds_0_12);
      if (succeeded)
        STATE_VARIABLE_Conds_14_14 = STATE_VARIABLE_Conds_0_12;
      else
        {
          STATE_VARIABLE_Conds_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Conds_14_14, 0) = ((MR_Box) (Cond_10));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Conds_14_14, 1) = ((MR_Box) (STATE_VARIABLE_Conds_0_12));
        }
      // direct tailcall eliminated
      ;
      next_value_of_NewConds_8 = RemainingConds_11;
      next_value_of_STATE_VARIABLE_Conds_0_12 = STATE_VARIABLE_Conds_14_14;
      NewConds_8 = next_value_of_NewConds_8;
      STATE_VARIABLE_Conds_0_12 = next_value_of_STATE_VARIABLE_Conds_0_12;
      continue;
    }
    break;
  }
}

void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_add_unconditional_2_p_0(
  MR_Word STATE_VARIABLE_ReuseAs_0_5,
  MR_Word * STATE_VARIABLE_ReuseAs_6)
{
  switch (MR_tag((MR_Word) STATE_VARIABLE_ReuseAs_0_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(STATE_VARIABLE_ReuseAs_0_5)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *STATE_VARIABLE_ReuseAs_6 = (MR_Word) ((MR_Unsigned) 4U);
          break;
        case (MR_Integer) 1:
          *STATE_VARIABLE_ReuseAs_6 = STATE_VARIABLE_ReuseAs_0_5;
          break;
      }
      break;
    case (MR_Integer) 1:
      *STATE_VARIABLE_ReuseAs_6 = STATE_VARIABLE_ReuseAs_0_5;
      break;
  }
}

void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_add_condition_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word ProcInfo_7,
  MR_Word Condition_8,
  MR_Word STATE_VARIABLE_ReuseAs_0_15,
  MR_Word * STATE_VARIABLE_ReuseAs_16)
{
  {
    MR_bool succeeded;

    if ((Condition_8 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      succeeded = (STATE_VARIABLE_ReuseAs_0_15 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        *STATE_VARIABLE_ReuseAs_16 = (MR_Word) ((MR_Unsigned) 4U);
      else
        *STATE_VARIABLE_ReuseAs_16 = STATE_VARIABLE_ReuseAs_0_15;
    }
    else
      switch (MR_tag((MR_Word) STATE_VARIABLE_ReuseAs_0_15)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(STATE_VARIABLE_ReuseAs_0_15)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Var_22;

                {
                  Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (Condition_8));
                  MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *STATE_VARIABLE_ReuseAs_16 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_22));
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_19;

                {
                  Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (Condition_8));
                  MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *STATE_VARIABLE_ReuseAs_16 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_19));
                }
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Conditions_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_ReuseAs_0_15, (MR_Integer) 0))));
            MR_Word NewConditions_14;

            succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_condition_subsumed_by_list_4_p_0(ModuleInfo_6, ProcInfo_7, Condition_8, Conditions_13);
            if (succeeded)
              NewConditions_14 = Conditions_13;
            else
              {
                NewConditions_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), NewConditions_14, 0) = ((MR_Box) (Condition_8));
                MR_hl_field(MR_mktag(1), NewConditions_14, 1) = ((MR_Box) (Conditions_13));
              }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_ReuseAs_16 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (NewConditions_14));
            }
          }
          break;
      }
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_condition_subsumed_by_list_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word ProcInfo_6,
  MR_Word Cond_7,
  MR_Word HeadVar__4_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__4_4 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Cond1_8;
    MR_Word Rest_9;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Cond1_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      Rest_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      if ((Cond_7 == (MR_Word) ((MR_Unsigned) 0U)))
        succeeded = MR_TRUE;
      else
      {
        MR_Word TypeCtorInfo_15_20;
        MR_Word Nodes1_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cond_7, (MR_Integer) 0))));
        MR_Word LocalUse1_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cond_7, (MR_Integer) 1))));
        MR_Word LocalSharing1_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cond_7, (MR_Integer) 2))));
        MR_Word Nodes2_17;
        MR_Word LocalUse2_18;
        MR_Word LocalSharing2_19;

        succeeded = (Cond1_8 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Nodes2_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cond1_8, (MR_Integer) 0))));
          LocalUse2_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cond1_8, (MR_Integer) 1))));
          LocalSharing2_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cond1_8, (MR_Integer) 2))));
          TypeCtorInfo_15_20 = (MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0);
          succeeded = mercury__set__subset_2_p_0(TypeCtorInfo_15_20, Nodes1_14, Nodes2_17);
          if (succeeded)
          {
            succeeded = transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0(ModuleInfo_5, ProcInfo_6, LocalUse1_15, LocalUse2_18);
            if (succeeded)
              succeeded = transform_hlds__ctgc__structure_sharing__domain__sharing_as_is_subsumed_by_4_p_0(ModuleInfo_5, ProcInfo_6, LocalSharing1_16, LocalSharing2_19);
          }
        }
      }
      if (!(succeeded))
      {
        MR_Word next_value_of_HeadVar__4_4 = Rest_9;

        // direct tailcall eliminated
        ;
        HeadVar__4_4 = next_value_of_HeadVar__4_4;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_rename_using_module_info_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word PPId_10,
  MR_Word ActualArgs_11,
  MR_Word ActualTypes_12,
  MR_Word CallerTypeVarSet_13,
  MR_Word CallerExternalTypeParams_14,
  MR_Word FormalReuse_15,
  MR_Word * ActualReuse_16)
{
  {
    MR_Word VarRenaming_17;
    MR_Word TypeSubst_18;

    VarRenaming_17 = transform_hlds__ctgc__util__get_variable_renaming_3_f_0(ModuleInfo_9, PPId_10, ActualArgs_11);
    TypeSubst_18 = transform_hlds__ctgc__util__get_type_substitution_5_f_0(ModuleInfo_9, PPId_10, ActualTypes_12, CallerTypeVarSet_13, CallerExternalTypeParams_14);
    transform_hlds__ctgc__structure_reuse__domain__reuse_as_rename_4_p_0(VarRenaming_17, TypeSubst_18, FormalReuse_15, ActualReuse_16);
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_rename_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_RenamedCondition_8;

    transform_hlds__ctgc__structure_reuse__domain__reuse_condition_rename_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_RenamedCondition_8);
    *wrapper_arg_2 = ((MR_Box) (conv0_RenamedCondition_8));
  }
}

void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_rename_4_p_0(
  MR_Word MapVar_5,
  MR_Word TypeSubst_6,
  MR_Word ReuseAs_7,
  MR_Word * RenamedReuseAs_8)
{
  switch (MR_tag((MR_Word) ReuseAs_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(ReuseAs_7)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *RenamedReuseAs_8 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 1:
          *RenamedReuseAs_8 = (MR_Word) ((MR_Unsigned) 4U);
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ReuseConditions_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ReuseAs_7, (MR_Integer) 0))));
        MR_Word RenamedReuseConditions_10;
        MR_Word Var_11;

        {
          Var_11 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_11, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain_scalar_common_5[2]));
          MR_hl_field(MR_mktag(0), Var_11, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__reuse_as_rename_4_p_0_1));
          MR_hl_field(MR_mktag(0), Var_11, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_11, 3) = ((MR_Box) (MapVar_5));
          MR_hl_field(MR_mktag(0), Var_11, 4) = ((MR_Box) (TypeSubst_6));
        }
        mercury__list__map_3_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0), Var_11, ReuseConditions_9, &RenamedReuseConditions_10);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *RenamedReuseAs_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (RenamedReuseConditions_10));
        }
      }
      break;
  }
}

MR_Integer MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_count_conditions_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Integer HeadVar__2_2;

    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            HeadVar__2_2 = (MR_Integer) 0;
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Conds_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

          HeadVar__2_2 = mercury__list__length_1_f_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0), Conds_3);
        }
        break;
    }
    return HeadVar__2_2;
  }
}

MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_conditional_reuses_1_p_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1);

    if (succeeded)
    {
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_all_unconditional_reuses_1_p_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_bool succeeded = (HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 4U));

    return succeeded;
  }
}

MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_no_reuses_1_p_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_bool succeeded = (HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U));

    return succeeded;
  }
}

MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_and_status_subsumed_by_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word ProcInfo_6,
  MR_Word ReuseAs_Status1_7,
  MR_Word ReuseAs_Status2_8)
{
  {
    MR_bool succeeded;
    MR_Word Reuse1_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ReuseAs_Status1_7, (MR_Integer) 0))));
    MR_Word Reuse2_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ReuseAs_Status2_8, (MR_Integer) 0))));

    succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_as_subsumed_by_4_p_0(ModuleInfo_5, ProcInfo_6, Reuse1_9, Reuse2_11);
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_subsumed_by_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_conditions_subsume_reuse_condition_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_subsumed_by_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word ProcInfo_6,
  MR_Word FirstReuseAs_7,
  MR_Word SecondReuseAs_8)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) FirstReuseAs_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(FirstReuseAs_7)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 1:
            if ((SecondReuseAs_8 == (MR_Word) ((MR_Unsigned) 4U)))
              succeeded = MR_TRUE;
            else
            if (((MR_tag((MR_Word) SecondReuseAs_8)) == (MR_Integer) 1))
              succeeded = MR_TRUE;
            else
              succeeded = MR_FALSE;
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeCtorInfo_15_15;
          MR_Word ReuseConditionsFirst_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FirstReuseAs_7, (MR_Integer) 0))));
          MR_Word ReuseConditionsSecond_11;
          MR_Word NotSubsumed_12;
          MR_Word Var_13;

          succeeded = ((MR_tag((MR_Word) SecondReuseAs_8)) == (MR_Integer) 1);
          if (succeeded)
          {
            ReuseConditionsSecond_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SecondReuseAs_8, (MR_Integer) 0))));
            TypeCtorInfo_15_15 = (MR_Word) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0);
            {
              Var_13 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_13, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain_scalar_common_5[1]));
              MR_hl_field(MR_mktag(0), Var_13, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__reuse_as_subsumed_by_4_p_0_1));
              MR_hl_field(MR_mktag(0), Var_13, 2) = ((MR_Box) ((MR_Integer) 3));
              MR_hl_field(MR_mktag(0), Var_13, 3) = ((MR_Box) (ModuleInfo_5));
              MR_hl_field(MR_mktag(0), Var_13, 4) = ((MR_Box) (ProcInfo_6));
              MR_hl_field(MR_mktag(0), Var_13, 5) = ((MR_Box) (ReuseConditionsSecond_11));
            }
            mercury__list__drop_while_3_p_0(TypeCtorInfo_15_15, Var_13, ReuseConditionsFirst_10, &NotSubsumed_12);
            succeeded = (NotSubsumed_12 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
        break;
    }
    return succeeded;
  }
}

MR_String MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_short_description_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_String HeadVar__2_2;

    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            HeadVar__2_2 = (MR_String) "no_reuse";
            break;
          case (MR_Integer) 1:
            HeadVar__2_2 = (MR_String) "uncond";
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Conds_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
          MR_String Size_4;
          MR_String Var_6;
          MR_Integer Var_8;

          Var_8 = mercury__list__length_1_f_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0), Conds_3);
          Size_4 = mercury__string__int_to_string_1_f_0(Var_8);
          Var_6 = mercury__string__f_43_43_2_f_0(Size_4, (MR_String) ")");
          HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "cond(", Var_6);
        }
        break;
    }
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_init_with_one_condition_1_f_0(
  MR_Word ReuseCondition_3)
{
  {
    MR_bool succeeded = (ReuseCondition_3 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word ReuseAs_4;

    if (succeeded)
    {
      MR_Word Var_5;

      {
        Var_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_5, 0) = ((MR_Box) (ReuseCondition_3));
        MR_hl_field(MR_mktag(1), Var_5, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        ReuseAs_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ReuseAs_4, 0) = ((MR_Box) (Var_5));
      }
    }
    else
      ReuseAs_4 = (MR_Word) ((MR_Unsigned) 4U);
    return ReuseAs_4;
  }
}

MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_as_init_0_f_0(void)
{
  return (MR_Word) ((MR_Unsigned) 0U);
}

MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_condition_subsumed_by_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word ProcInfo_6,
  MR_Word Cond1_7,
  MR_Word Cond2_8)
{
  {
    MR_bool succeeded;

    if ((Cond1_7 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeCtorInfo_15_15;
      MR_Word Nodes1_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cond1_7, (MR_Integer) 0))));
      MR_Word LocalUse1_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cond1_7, (MR_Integer) 1))));
      MR_Word LocalSharing1_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cond1_7, (MR_Integer) 2))));
      MR_Word Nodes2_12;
      MR_Word LocalUse2_13;
      MR_Word LocalSharing2_14;

      succeeded = (Cond2_8 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Nodes2_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cond2_8, (MR_Integer) 0))));
        LocalUse2_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cond2_8, (MR_Integer) 1))));
        LocalSharing2_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cond2_8, (MR_Integer) 2))));
        TypeCtorInfo_15_15 = (MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0);
        succeeded = mercury__set__subset_2_p_0(TypeCtorInfo_15_15, Nodes1_9, Nodes2_12);
        if (succeeded)
        {
          succeeded = transform_hlds__ctgc__datastruct__datastructs_subsumed_by_list_4_p_0(ModuleInfo_5, ProcInfo_6, LocalUse1_10, LocalUse2_13);
          if (succeeded)
            succeeded = transform_hlds__ctgc__structure_sharing__domain__sharing_as_is_subsumed_by_4_p_0(ModuleInfo_5, ProcInfo_6, LocalSharing1_11, LocalSharing2_14);
        }
      }
    }
    return succeeded;
  }
}

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_condition_rename_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__4_4;

    conv0_HeadVar__4_4 = parse_tree__prog_ctgc__rename_datastruct_3_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__4_4));
    return wrapper_arg_2;
  }
}

void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_condition_rename_4_p_0(
  MR_Word MapVar_5,
  MR_Word TypeSubst_6,
  MR_Word Condition_7,
  MR_Word * RenamedCondition_8)
{
  if ((Condition_7 == (MR_Word) ((MR_Unsigned) 0U)))
    *RenamedCondition_8 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word DeadNodes_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Condition_7, (MR_Integer) 0))));
    MR_Word InUseNodes_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Condition_7, (MR_Integer) 1))));
    MR_Word LocalSharing_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Condition_7, (MR_Integer) 2))));
    MR_Word RenamedDeadNodes_12;
    MR_Word RenamedInUseNodes_13;
    MR_Word RenamedLocalSharing_14;
    MR_Word Var_15;

    {
      Var_15 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__reuse_condition_rename_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_15, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_15, 3) = ((MR_Box) (MapVar_5));
      MR_hl_field(MR_mktag(0), Var_15, 4) = ((MR_Box) (TypeSubst_6));
    }
    RenamedDeadNodes_12 = mercury__set__map_2_f_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0), (MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0), Var_15, DeadNodes_9);
    RenamedInUseNodes_13 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0), (MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0), Var_15, InUseNodes_10);
    transform_hlds__ctgc__structure_sharing__domain__sharing_as_rename_4_p_0(MapVar_5, TypeSubst_6, LocalSharing_11, &RenamedLocalSharing_14);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      *RenamedCondition_8 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (RenamedDeadNodes_12));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (RenamedInUseNodes_13));
      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (RenamedLocalSharing_14));
    }
  }
}

MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_condition_reusable_nodes_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * Nodes_3)
{
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));

    if (succeeded)
      *Nodes_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    return succeeded;
  }
}

MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_condition_is_conditional_1_p_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));

    if (succeeded)
    {
    }
    return succeeded;
  }
}

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_condition_init_6_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__5_5;

    conv1_HeadVar__5_5 = transform_hlds__ctgc__structure_sharing__domain__extend_datastruct_4_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__5_5));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_condition_init_6_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = transform_hlds__ctgc__datastruct__datastruct_init_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__domain__reuse_condition_init_6_f_0(
  MR_Word ModuleInfo_8,
  MR_Word ProcInfo_9,
  MR_Word DeadVar_10,
  MR_Word LFU_11,
  MR_Word LBU_12,
  MR_Word Sharing_13)
{
  {
    MR_bool succeeded;
    MR_Word Condition_14;
    MR_Word HeadVars_15;
    MR_Word TopCell_16;
    MR_Word Nodes_17;

    hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_9, &HeadVars_15);
    TopCell_16 = transform_hlds__ctgc__datastruct__datastruct_init_1_f_0(DeadVar_10);
    succeeded = mercury__list__member_2_p_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__domain_scalar_common_1[0]), ((MR_Box) (DeadVar_10)), HeadVars_15);
    if (succeeded)
      {
        Nodes_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Nodes_17, 0) = ((MR_Box) (TopCell_16));
        MR_hl_field(MR_mktag(1), Nodes_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    else
    {
      MR_Word SharedDatastructs_18;

      SharedDatastructs_18 = transform_hlds__ctgc__structure_sharing__domain__extend_datastruct_4_f_0(ModuleInfo_8, ProcInfo_9, Sharing_13, TopCell_16);
      Nodes_17 = transform_hlds__ctgc__datastruct__datastructs_project_2_f_0(HeadVars_15, SharedDatastructs_18);
    }
    if ((Nodes_17 == (MR_Word) ((MR_Unsigned) 0U)))
      Condition_14 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word LU_21;
      MR_Word LuData_22;
      MR_Word ExtendedLuData_23;
      MR_Word SharedLU_24;
      MR_Word HeadVarSharedLU_25;
      MR_Word HeadVarSharing_26;
      MR_Word Var_29;
      MR_Word Var_30;
      MR_Word Var_31;

      parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LFU_11, LBU_12, &LU_21);
      Var_29 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LU_21);
      LuData_22 = mercury__list__map_2_f_0((MR_Word) (&transform_hlds__ctgc__structure_reuse__domain_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__domain_scalar_common_2[3]), Var_29);
      {
        Var_30 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain_scalar_common_4[0]));
        MR_hl_field(MR_mktag(0), Var_30, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__domain__reuse_condition_init_6_f_0_2));
        MR_hl_field(MR_mktag(0), Var_30, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), Var_30, 3) = ((MR_Box) (ModuleInfo_8));
        MR_hl_field(MR_mktag(0), Var_30, 4) = ((MR_Box) (ProcInfo_9));
        MR_hl_field(MR_mktag(0), Var_30, 5) = ((MR_Box) (Sharing_13));
      }
      ExtendedLuData_23 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0), (MR_Word) (&transform_hlds__ctgc__structure_reuse__domain_scalar_common_1[1]), Var_30, LuData_22);
      SharedLU_24 = mercury__list__condense_1_f_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0), ExtendedLuData_23);
      HeadVarSharedLU_25 = transform_hlds__ctgc__datastruct__datastructs_project_2_f_0(HeadVars_15, SharedLU_24);
      transform_hlds__ctgc__structure_sharing__domain__sharing_as_project_3_p_0(HeadVars_15, Sharing_13, &HeadVarSharing_26);
      Var_31 = mercury__set__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0), Nodes_17);
      {
        Condition_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Condition_14, 0) = ((MR_Box) (Var_31));
        MR_hl_field(MR_mktag(1), Condition_14, 1) = ((MR_Box) (HeadVarSharedLU_25));
        MR_hl_field(MR_mktag(1), Condition_14, 2) = ((MR_Box) (HeadVarSharing_26));
      }
    }
    return Condition_14;
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Unify____no_clobber_args_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__ctgc__structure_reuse__domain____Unify____no_clobber_args_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Compare____no_clobber_args_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__ctgc__structure_reuse__domain____Compare____no_clobber_args_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Unify____ppid_no_clobbers_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__ctgc__structure_reuse__domain____Unify____ppid_no_clobbers_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Compare____ppid_no_clobbers_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__ctgc__structure_reuse__domain____Compare____ppid_no_clobbers_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_as_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_as_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_as_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_as_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_as_and_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_as_and_status_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_as_and_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_as_and_status_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_as_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_as_table_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_as_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_as_table_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_condition_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_condition_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_condition_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_condition_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_conditions_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_conditions_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_conditions_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_conditions_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_not_possible_reason_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_not_possible_reason_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_not_possible_reason_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_not_possible_reason_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_satisfied_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_satisfied_result_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_satisfied_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_satisfied_result_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__transform_hlds__ctgc__structure_reuse__domain__init(void)
{
}

void mercury__transform_hlds__ctgc__structure_reuse__domain__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_no_clobber_args_0);
	MR_register_type_ctor_info(&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_ppid_no_clobbers_0);
	MR_register_type_ctor_info(&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_0);
	MR_register_type_ctor_info(&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0);
	MR_register_type_ctor_info(&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0);
	MR_register_type_ctor_info(&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0);
	MR_register_type_ctor_info(&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_conditions_0);
	MR_register_type_ctor_info(&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_not_possible_reason_0);
	MR_register_type_ctor_info(&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_satisfied_result_0);
}

void mercury__transform_hlds__ctgc__structure_reuse__domain__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__ctgc__structure_reuse__domain__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module transform_hlds.ctgc.structure_reuse.domain.
