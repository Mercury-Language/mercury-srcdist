/*
** Automatically generated from `hlds_class.m'
** by the Mercury compiler,
** version rotd-2018-07-10
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


// :- module hlds.hlds_class.
// :- implementation.

/*
INIT mercury__hlds__hlds_class__init
ENDINIT
*/

#include "hlds.hlds_class.mih"


#include "analysis.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
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
#include "hlds.vartypes.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "int.mih"
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
#include "queue.mih"
#include "random.mih"
#include "require.mih"
#include "robdd.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_class__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_class__type_ctor_info_hlds_class_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_class__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_class__set_ordlist__ti_set_ordlist_1hlds__hlds_class__type_ctor_info_hlds_constraint_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_class__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_set_ordlist__ti_set_ordlist_1hlds__hlds_class__type_ctor_info_hlds_constraint_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_class__list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_class__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0__plain_list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_class__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_class__type_ctor_info_hlds_constraint_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_class__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_class__tree234__pti_tree234_2__plain_hlds__hlds_class__type_ctor_info_constraint_id_0__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0;

static const MR_FA_TypeInfo_Struct2 hlds__hlds_class__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_prog_constraint_0list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0;

static const MR_FA_TypeInfo_Struct2 hlds__hlds_class__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_class_id_0hlds__hlds_class__type_ctor_info_hlds_class_defn_0;

static const MR_PseudoTypeInfo hlds__hlds_class__hlds__hlds_class__field_types_constraint_id_0_0[3];

static const MR_DuFunctorDesc hlds__hlds_class__hlds__hlds_class__du_functor_desc_constraint_id_0_0;

static const MR_DuFunctorDescPtr hlds__hlds_class__hlds__hlds_class__du_stag_ordered_constraint_id_0_0[1];

static const MR_DuPtagLayout hlds__hlds_class__hlds__hlds_class__du_ptag_ordered_constraint_id_0[1];

static const MR_DuFunctorDescPtr hlds__hlds_class__hlds__hlds_class__du_name_ordered_constraint_id_0[1];

static const MR_Integer hlds__hlds_class__hlds__hlds_class__functor_number_map_constraint_id_0[1];

static const MR_FA_TypeInfo_Struct2 hlds__hlds_class__tree234__ti_tree234_2hlds__hlds_class__type_ctor_info_constraint_id_0parse_tree__prog_data__type_ctor_info_prog_constraint_0;

static const MR_PseudoTypeInfo hlds__hlds_class__hlds__hlds_class__field_types_constraint_proof_0_0[1];

static const MR_DuFunctorDesc hlds__hlds_class__hlds__hlds_class__du_functor_desc_constraint_proof_0_0;

static const MR_PseudoTypeInfo hlds__hlds_class__hlds__hlds_class__field_types_constraint_proof_0_1[1];

static const MR_DuFunctorDesc hlds__hlds_class__hlds__hlds_class__du_functor_desc_constraint_proof_0_1;

static const MR_DuFunctorDescPtr hlds__hlds_class__hlds__hlds_class__du_stag_ordered_constraint_proof_0_0[1];

static const MR_DuFunctorDescPtr hlds__hlds_class__hlds__hlds_class__du_stag_ordered_constraint_proof_0_1[1];

static const MR_DuPtagLayout hlds__hlds_class__hlds__hlds_class__du_ptag_ordered_constraint_proof_0[2];

static const MR_DuFunctorDescPtr hlds__hlds_class__hlds__hlds_class__du_name_ordered_constraint_proof_0[2];

static const MR_Integer hlds__hlds_class__hlds__hlds_class__functor_number_map_constraint_proof_0[2];

static const MR_FA_TypeInfo_Struct2 hlds__hlds_class__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_prog_constraint_0hlds__hlds_class__type_ctor_info_constraint_proof_0;

static const MR_EnumFunctorDesc hlds__hlds_class__hlds__hlds_class__enum_functor_desc_constraint_type_0_0;

static const MR_EnumFunctorDesc hlds__hlds_class__hlds__hlds_class__enum_functor_desc_constraint_type_0_1;

static const MR_EnumFunctorDescPtr hlds__hlds_class__hlds__hlds_class__enum_value_ordered_constraint_type_0[2];

static const MR_EnumFunctorDescPtr hlds__hlds_class__hlds__hlds_class__enum_name_ordered_constraint_type_0[2];

static const MR_Integer hlds__hlds_class__hlds__hlds_class__functor_number_map_constraint_type_0[2];

static const MR_FA_TypeInfo_Struct1 hlds__hlds_class__list__ti_list_1hlds__hlds_class__type_ctor_info_hlds_class_fundep_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_class__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_class__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct2 hlds__hlds_class__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_kind_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_class__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_class__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_PseudoTypeInfo hlds__hlds_class__hlds__hlds_class__field_types_hlds_class_defn_0_0[10];

static const MR_ConstString hlds__hlds_class__hlds__hlds_class__field_names_hlds_class_defn_0_0[10];

static const MR_DuFunctorDesc hlds__hlds_class__hlds__hlds_class__du_functor_desc_hlds_class_defn_0_0;

static const MR_DuFunctorDescPtr hlds__hlds_class__hlds__hlds_class__du_stag_ordered_hlds_class_defn_0_0[1];

static const MR_DuPtagLayout hlds__hlds_class__hlds__hlds_class__du_ptag_ordered_hlds_class_defn_0[1];

static const MR_DuFunctorDescPtr hlds__hlds_class__hlds__hlds_class__du_name_ordered_hlds_class_defn_0[1];

static const MR_Integer hlds__hlds_class__hlds__hlds_class__functor_number_map_hlds_class_defn_0[1];

static const MR_FA_TypeInfo_Struct1 hlds__hlds_class__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0;

static const MR_PseudoTypeInfo hlds__hlds_class__hlds__hlds_class__field_types_hlds_class_fundep_0_0[2];

static const MR_ConstString hlds__hlds_class__hlds__hlds_class__field_names_hlds_class_fundep_0_0[2];

static const MR_DuFunctorDesc hlds__hlds_class__hlds__hlds_class__du_functor_desc_hlds_class_fundep_0_0;

static const MR_DuFunctorDescPtr hlds__hlds_class__hlds__hlds_class__du_stag_ordered_hlds_class_fundep_0_0[1];

static const MR_DuPtagLayout hlds__hlds_class__hlds__hlds_class__du_ptag_ordered_hlds_class_fundep_0[1];

static const MR_DuFunctorDescPtr hlds__hlds_class__hlds__hlds_class__du_name_ordered_hlds_class_fundep_0[1];

static const MR_Integer hlds__hlds_class__hlds__hlds_class__functor_number_map_hlds_class_fundep_0[1];

static const MR_FA_TypeInfo_Struct1 hlds__hlds_class__list__ti_list_1hlds__hlds_class__type_ctor_info_constraint_id_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_class__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_PseudoTypeInfo hlds__hlds_class__hlds__hlds_class__field_types_hlds_constraint_0_0[3];

static const MR_DuFunctorDesc hlds__hlds_class__hlds__hlds_class__du_functor_desc_hlds_constraint_0_0;

static const MR_DuFunctorDescPtr hlds__hlds_class__hlds__hlds_class__du_stag_ordered_hlds_constraint_0_0[1];

static const MR_DuPtagLayout hlds__hlds_class__hlds__hlds_class__du_ptag_ordered_hlds_constraint_0[1];

static const MR_DuFunctorDescPtr hlds__hlds_class__hlds__hlds_class__du_name_ordered_hlds_constraint_0[1];

static const MR_Integer hlds__hlds_class__hlds__hlds_class__functor_number_map_hlds_constraint_0[1];

static const MR_FA_TypeInfo_Struct1 hlds__hlds_class__list__ti_list_1hlds__hlds_class__type_ctor_info_hlds_constraint_0;

static const MR_FA_TypeInfo_Struct2 hlds__hlds_class__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_class_id_0set_ordlist__ti_set_ordlist_1hlds__hlds_class__type_ctor_info_hlds_constraint_0;

static const MR_PseudoTypeInfo hlds__hlds_class__hlds__hlds_class__field_types_hlds_constraints_0_0[4];

static const MR_ConstString hlds__hlds_class__hlds__hlds_class__field_names_hlds_constraints_0_0[4];

static const MR_DuFunctorDesc hlds__hlds_class__hlds__hlds_class__du_functor_desc_hlds_constraints_0_0;

static const MR_DuFunctorDescPtr hlds__hlds_class__hlds__hlds_class__du_stag_ordered_hlds_constraints_0_0[1];

static const MR_DuPtagLayout hlds__hlds_class__hlds__hlds_class__du_ptag_ordered_hlds_constraints_0[1];

static const MR_DuFunctorDescPtr hlds__hlds_class__hlds__hlds_class__du_name_ordered_hlds_constraints_0[1];

static const MR_Integer hlds__hlds_class__hlds__hlds_class__functor_number_map_hlds_constraints_0[1];

static const MR_FA_TypeInfo_Struct1 hlds__hlds_class__maybe__ti_maybe_1list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_PseudoTypeInfo hlds__hlds_class__hlds__hlds_class__field_types_hlds_instance_defn_0_0[10];

static const MR_ConstString hlds__hlds_class__hlds__hlds_class__field_names_hlds_instance_defn_0_0[10];

static const MR_DuFunctorDesc hlds__hlds_class__hlds__hlds_class__du_functor_desc_hlds_instance_defn_0_0;

static const MR_DuFunctorDescPtr hlds__hlds_class__hlds__hlds_class__du_stag_ordered_hlds_instance_defn_0_0[1];

static const MR_DuPtagLayout hlds__hlds_class__hlds__hlds_class__du_ptag_ordered_hlds_instance_defn_0[1];

static const MR_DuFunctorDescPtr hlds__hlds_class__hlds__hlds_class__du_name_ordered_hlds_instance_defn_0[1];

static const MR_Integer hlds__hlds_class__hlds__hlds_class__functor_number_map_hlds_instance_defn_0[1];

static const MR_FA_TypeInfo_Struct1 hlds__hlds_class__list__ti_list_1hlds__hlds_class__type_ctor_info_hlds_instance_defn_0;

static const MR_FA_TypeInfo_Struct2 hlds__hlds_class__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_class_id_0list__ti_list_1hlds__hlds_class__type_ctor_info_hlds_instance_defn_0;

static void MR_CALL 
hlds__hlds_class__IntroducedFrom__pred__merge_hlds_constraints__444__1_3_p_0(
  MR_Word HeadVar__1_28,
  MR_Word HeadVar__2_29,
  MR_Word * HeadVar__3_30);

static void MR_CALL 
hlds__hlds_class__IntroducedFrom__pred__merge_hlds_constraints__443__1_3_p_0(
  MR_Word HeadVar__1_22,
  MR_Word HeadVar__2_23,
  MR_Word * HeadVar__3_24);

static void MR_CALL 
hlds__hlds_class__update_ancestor_constraints_3_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_class__update_ancestor_constraints_3_6_p_0(
  MR_Word ClassTable_7,
  MR_Word TVarSet_8,
  MR_Word Descendants_9,
  MR_Word Constraint_10,
  MR_Word STATE_VARIABLE_Ancestors_0_13,
  MR_Word * STATE_VARIABLE_Ancestors_14);

static MR_bool MR_CALL 
hlds__hlds_class__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_115_104_111_114_116_101_114_95_95_91_49_93_95_48_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__hlds_class__update_ancestor_constraints_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_class__update_ancestor_constraints_5_p_0(
  MR_Word ClassTable_6,
  MR_Word TVarSet_7,
  MR_Word HLDSConstraint_8,
  MR_Word STATE_VARIABLE_Ancestors_0_11,
  MR_Word * STATE_VARIABLE_Ancestors_12);

static void MR_CALL 
hlds__hlds_class__add_redundant_constraint_3_p_0(
  MR_Word Constraint_4,
  MR_Word STATE_VARIABLE_Redundant_0_13,
  MR_Word * STATE_VARIABLE_Redundant_14);

static void MR_CALL 
hlds__hlds_class__update_redundant_constraints_2_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_class__update_redundant_constraints_2_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__hlds_class__update_redundant_constraints_2_5_p_0(
  MR_Word ClassTable_6,
  MR_Word TVarSet_7,
  MR_Word Constraint_8,
  MR_Word STATE_VARIABLE_Redundant_0_28,
  MR_Word * STATE_VARIABLE_Redundant_29);

static void MR_CALL 
hlds__hlds_class__update_constraint_map_2_4_p_0(
  MR_Word ProgConstraint_5,
  MR_Word ConstraintId_6,
  MR_Word STATE_VARIABLE_ConstraintMap_0_8,
  MR_Word * STATE_VARIABLE_ConstraintMap_9);

static void MR_CALL 
hlds__hlds_class__init_hlds_constraint_2_p_0(
  MR_Word Constraint_3,
  MR_Word * HLDSConstraint_4);

static MR_bool MR_CALL 
hlds__hlds_class__search_hlds_constraint_list_2_6_p_0(
  MR_Word ConstraintMap_7,
  MR_Word ConstraintType_8,
  MR_Word GoalId_9,
  MR_Integer Count_10,
  MR_Word STATE_VARIABLE_Constraints_0_14,
  MR_Word * STATE_VARIABLE_Constraints_15);

static void MR_CALL 
hlds__hlds_class__update_redundant_constraints_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_class__update_constraint_map_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_class__retrieve_prog_constraint_list_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__hlds_class__retrieve_prog_constraints_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__hlds_class__retrieve_prog_constraints_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__hlds_class__merge_hlds_constraints_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_class__merge_hlds_constraints_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_class__make_hlds_constraint_list_2_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ConstraintType_2,
  MR_Word GoalId_3,
  MR_Integer CurArgNum_4,
  MR_Word * HeadVar__5_5);

static void MR_CALL 
hlds__hlds_class__make_hlds_constraints_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_class__make_hlds_constraints_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_class__init_hlds_constraint_list_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__hlds_class__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_115_116_114_105_99_116_95_108_105_115_116_95_101_108_101_109_101_110_116_115_95_50_95_95_91_49_93_95_48_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer Index_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static MR_bool MR_CALL 
hlds__hlds_class____Unify____ancestor_constraints_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_class____Compare____ancestor_constraints_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_class____Unify____class_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_class____Compare____class_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_class____Unify____constraint_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_class____Compare____constraint_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_class____Unify____constraint_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_class____Compare____constraint_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_class____Unify____constraint_proof_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_class____Compare____constraint_proof_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_class____Unify____constraint_proof_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_class____Compare____constraint_proof_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_class____Unify____constraint_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_class____Compare____constraint_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_class____Unify____hlds_class_argpos_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_class____Compare____hlds_class_argpos_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_class____Unify____hlds_class_defn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_class____Compare____hlds_class_defn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_class____Unify____hlds_class_fundep_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_class____Compare____hlds_class_fundep_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_class____Unify____hlds_class_fundeps_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_class____Compare____hlds_class_fundeps_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_class____Unify____hlds_class_interface_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_class____Compare____hlds_class_interface_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_class____Unify____hlds_constraint_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_class____Compare____hlds_constraint_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_class____Unify____hlds_constraints_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_class____Compare____hlds_constraints_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_class____Unify____hlds_instance_defn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_class____Compare____hlds_instance_defn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_class____Unify____instance_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_class____Compare____instance_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_class____Unify____instance_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_class____Compare____instance_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_class____Unify____redundant_constraints_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_class____Compare____redundant_constraints_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__hlds_class_scalar_common_1[13][2];

static /* final */ const MR_Box hlds__hlds_class_scalar_common_2[15][3];

static /* final */ const MR_Box hlds__hlds_class_scalar_common_3[2][5];

static /* final */ const MR_Box hlds__hlds_class_scalar_common_4[2][8];

static /* final */ const MR_Box hlds__hlds_class_scalar_common_5[3][6];

static /* final */ const MR_Box hlds__hlds_class_scalar_common_6[1][7];

static /* final */ const MR_Box hlds__hlds_class_scalar_common_7[1][9];




static /* final */ const MR_Box hlds__hlds_class_scalar_common_1[13][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_fundep_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_class_scalar_common_1[0]))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_id_0))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0))
  },
  /* row 11 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&hlds__hlds_class_scalar_common_1[6]))
  },
  /* row 12 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0))
  },
};

static /* final */ const MR_Box hlds__hlds_class_scalar_common_2[15][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&hlds__hlds_class_scalar_common_1[1]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&hlds__hlds_class_scalar_common_1[2]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_id_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_class_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&hlds__hlds_class_scalar_common_1[12]))
  },
  /* row 7 */
  {
    ((MR_Box) (&hlds__hlds_class_scalar_common_3[0])),
    ((MR_Box) (hlds__hlds_class__init_hlds_constraint_list_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&hlds__hlds_class_scalar_common_5[0])),
    ((MR_Box) (hlds__hlds_class__merge_hlds_constraints_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&hlds__hlds_class_scalar_common_5[1])),
    ((MR_Box) (hlds__hlds_class__merge_hlds_constraints_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&hlds__hlds_class_scalar_common_3[1])),
    ((MR_Box) (hlds__hlds_class__retrieve_prog_constraints_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&hlds__hlds_class_scalar_common_3[1])),
    ((MR_Box) (hlds__hlds_class__retrieve_prog_constraints_2_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&hlds__hlds_class_scalar_common_3[1])),
    ((MR_Box) (hlds__hlds_class__retrieve_prog_constraint_list_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&hlds__hlds_class_scalar_common_3[0])),
    ((MR_Box) (hlds__hlds_class__update_redundant_constraints_2_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&hlds__hlds_class_scalar_common_5[2])),
    ((MR_Box) (hlds__hlds_class__update_redundant_constraints_2_5_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__hlds_class_scalar_common_3[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
};

static /* final */ const MR_Box hlds__hlds_class_scalar_common_4[2][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_class__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_class__type_ctor_info_hlds_class_defn_0)),
    ((MR_Box) (&hlds__hlds_class__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0)),
    ((MR_Box) (&hlds__hlds_class__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_set_ordlist__ti_set_ordlist_1hlds__hlds_class__type_ctor_info_hlds_constraint_0)),
    ((MR_Box) (&hlds__hlds_class__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_set_ordlist__ti_set_ordlist_1hlds__hlds_class__type_ctor_info_hlds_constraint_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_class__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_class__type_ctor_info_hlds_class_defn_0)),
    ((MR_Box) (&hlds__hlds_class__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0)),
    ((MR_Box) (&hlds__hlds_class__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0__plain_list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&hlds__hlds_class__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0__plain_list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
};

static /* final */ const MR_Box hlds__hlds_class_scalar_common_5[3][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_class__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_class__type_ctor_info_hlds_constraint_0)),
    ((MR_Box) (&hlds__hlds_class__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_class__type_ctor_info_hlds_constraint_0)),
    ((MR_Box) (&hlds__hlds_class__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_class__type_ctor_info_hlds_constraint_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_class__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&hlds__hlds_class__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&hlds__hlds_class__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0)),
    ((MR_Box) (&hlds__hlds_class__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_set_ordlist__ti_set_ordlist_1hlds__hlds_class__type_ctor_info_hlds_constraint_0)),
    ((MR_Box) (&hlds__hlds_class__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_set_ordlist__ti_set_ordlist_1hlds__hlds_class__type_ctor_info_hlds_constraint_0))
  },
};

static /* final */ const MR_Box hlds__hlds_class_scalar_common_6[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_id_0)),
    ((MR_Box) (&hlds__hlds_class__tree234__pti_tree234_2__plain_hlds__hlds_class__type_ctor_info_constraint_id_0__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&hlds__hlds_class__tree234__pti_tree234_2__plain_hlds__hlds_class__type_ctor_info_constraint_id_0__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
};

static /* final */ const MR_Box hlds__hlds_class_scalar_common_7[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_class__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_class__type_ctor_info_hlds_class_defn_0)),
    ((MR_Box) (&hlds__hlds_class__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_class__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&hlds__hlds_class__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0__plain_list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&hlds__hlds_class__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0__plain_list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_class__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_class__type_ctor_info_hlds_class_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_class__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_class__set_ordlist__ti_set_ordlist_1hlds__hlds_class__type_ctor_info_hlds_constraint_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_class__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_set_ordlist__ti_set_ordlist_1hlds__hlds_class__type_ctor_info_hlds_constraint_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_class__set_ordlist__ti_set_ordlist_1hlds__hlds_class__type_ctor_info_hlds_constraint_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_class__list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_class__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0__plain_list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_class__list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_class__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_class__type_ctor_info_hlds_constraint_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_class__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_class__tree234__pti_tree234_2__plain_hlds__hlds_class__type_ctor_info_constraint_id_0__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_id_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__hlds_class__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_prog_constraint_0list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0),
    (MR_TypeInfo) (&hlds__hlds_class__list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0)
  }
};

const MR_TypeCtorInfo_Struct hlds__hlds_class__hlds__hlds_class__type_ctor_info_ancestor_constraints_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__hlds_class____Unify____ancestor_constraints_0_0_10001)),
  ((MR_Box) (hlds__hlds_class____Compare____ancestor_constraints_0_0_10001)),
  (MR_String) "hlds.hlds_class",
  (MR_String) "ancestor_constraints",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&hlds__hlds_class__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_prog_constraint_0list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct2 hlds__hlds_class__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_class_id_0hlds__hlds_class__type_ctor_info_hlds_class_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0),
    (MR_TypeInfo) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0)
  }
};

const MR_TypeCtorInfo_Struct hlds__hlds_class__hlds__hlds_class__type_ctor_info_class_table_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__hlds_class____Unify____class_table_0_0_10001)),
  ((MR_Box) (hlds__hlds_class____Compare____class_table_0_0_10001)),
  (MR_String) "hlds.hlds_class",
  (MR_String) "class_table",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&hlds__hlds_class__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_class_id_0hlds__hlds_class__type_ctor_info_hlds_class_defn_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_PseudoTypeInfo hlds__hlds_class__hlds__hlds_class__field_types_constraint_id_0_0[3] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_type_0),
  (MR_PseudoTypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc hlds__hlds_class__hlds__hlds_class__du_functor_desc_constraint_id_0_0 = {
  (MR_String) "constraint_id",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__hlds_class__hlds__hlds_class__field_types_constraint_id_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__hlds_class__hlds__hlds_class__du_stag_ordered_constraint_id_0_0[1] = {
  &hlds__hlds_class__hlds__hlds_class__du_functor_desc_constraint_id_0_0
};

static const MR_DuPtagLayout hlds__hlds_class__hlds__hlds_class__du_ptag_ordered_constraint_id_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    hlds__hlds_class__hlds__hlds_class__du_stag_ordered_constraint_id_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr hlds__hlds_class__hlds__hlds_class__du_name_ordered_constraint_id_0[1] = {
  &hlds__hlds_class__hlds__hlds_class__du_functor_desc_constraint_id_0_0
};

static const MR_Integer hlds__hlds_class__hlds__hlds_class__functor_number_map_constraint_id_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_id_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_class____Unify____constraint_id_0_0_10001)),
  ((MR_Box) (hlds__hlds_class____Compare____constraint_id_0_0_10001)),
  (MR_String) "hlds.hlds_class",
  (MR_String) "constraint_id",
  {     hlds__hlds_class__hlds__hlds_class__du_name_ordered_constraint_id_0 },
  {     hlds__hlds_class__hlds__hlds_class__du_ptag_ordered_constraint_id_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__hlds_class__hlds__hlds_class__functor_number_map_constraint_id_0
};

static const MR_FA_TypeInfo_Struct2 hlds__hlds_class__tree234__ti_tree234_2hlds__hlds_class__type_ctor_info_constraint_id_0parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_id_0),
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)
  }
};

const MR_TypeCtorInfo_Struct hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__hlds_class____Unify____constraint_map_0_0_10001)),
  ((MR_Box) (hlds__hlds_class____Compare____constraint_map_0_0_10001)),
  (MR_String) "hlds.hlds_class",
  (MR_String) "constraint_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&hlds__hlds_class__tree234__ti_tree234_2hlds__hlds_class__type_ctor_info_constraint_id_0parse_tree__prog_data__type_ctor_info_prog_constraint_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_PseudoTypeInfo hlds__hlds_class__hlds__hlds_class__field_types_constraint_proof_0_0[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc hlds__hlds_class__hlds__hlds_class__du_functor_desc_constraint_proof_0_0 = {
  (MR_String) "apply_instance",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__hlds_class__hlds__hlds_class__field_types_constraint_proof_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__hlds_class__hlds__hlds_class__field_types_constraint_proof_0_1[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)
};

static const MR_DuFunctorDesc hlds__hlds_class__hlds__hlds_class__du_functor_desc_constraint_proof_0_1 = {
  (MR_String) "superclass",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  hlds__hlds_class__hlds__hlds_class__field_types_constraint_proof_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__hlds_class__hlds__hlds_class__du_stag_ordered_constraint_proof_0_0[1] = {
  &hlds__hlds_class__hlds__hlds_class__du_functor_desc_constraint_proof_0_0
};

static const MR_DuFunctorDescPtr hlds__hlds_class__hlds__hlds_class__du_stag_ordered_constraint_proof_0_1[1] = {
  &hlds__hlds_class__hlds__hlds_class__du_functor_desc_constraint_proof_0_1
};

static const MR_DuPtagLayout hlds__hlds_class__hlds__hlds_class__du_ptag_ordered_constraint_proof_0[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    hlds__hlds_class__hlds__hlds_class__du_stag_ordered_constraint_proof_0_0,
    INT8_C(-1)
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    hlds__hlds_class__hlds__hlds_class__du_stag_ordered_constraint_proof_0_1,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr hlds__hlds_class__hlds__hlds_class__du_name_ordered_constraint_proof_0[2] = {
  &hlds__hlds_class__hlds__hlds_class__du_functor_desc_constraint_proof_0_0,
  &hlds__hlds_class__hlds__hlds_class__du_functor_desc_constraint_proof_0_1
};

static const MR_Integer hlds__hlds_class__hlds__hlds_class__functor_number_map_constraint_proof_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_class____Unify____constraint_proof_0_0_10001)),
  ((MR_Box) (hlds__hlds_class____Compare____constraint_proof_0_0_10001)),
  (MR_String) "hlds.hlds_class",
  (MR_String) "constraint_proof",
  {     hlds__hlds_class__hlds__hlds_class__du_name_ordered_constraint_proof_0 },
  {     hlds__hlds_class__hlds__hlds_class__du_ptag_ordered_constraint_proof_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__hlds_class__hlds__hlds_class__functor_number_map_constraint_proof_0
};

static const MR_FA_TypeInfo_Struct2 hlds__hlds_class__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_prog_constraint_0hlds__hlds_class__type_ctor_info_constraint_proof_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0),
    (MR_TypeInfo) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0)
  }
};

const MR_TypeCtorInfo_Struct hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__hlds_class____Unify____constraint_proof_map_0_0_10001)),
  ((MR_Box) (hlds__hlds_class____Compare____constraint_proof_map_0_0_10001)),
  (MR_String) "hlds.hlds_class",
  (MR_String) "constraint_proof_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&hlds__hlds_class__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_prog_constraint_0hlds__hlds_class__type_ctor_info_constraint_proof_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_EnumFunctorDesc hlds__hlds_class__hlds__hlds_class__enum_functor_desc_constraint_type_0_0 = {
  (MR_String) "unproven",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc hlds__hlds_class__hlds__hlds_class__enum_functor_desc_constraint_type_0_1 = {
  (MR_String) "assumed",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr hlds__hlds_class__hlds__hlds_class__enum_value_ordered_constraint_type_0[2] = {
  &hlds__hlds_class__hlds__hlds_class__enum_functor_desc_constraint_type_0_0,
  &hlds__hlds_class__hlds__hlds_class__enum_functor_desc_constraint_type_0_1
};

static const MR_EnumFunctorDescPtr hlds__hlds_class__hlds__hlds_class__enum_name_ordered_constraint_type_0[2] = {
  &hlds__hlds_class__hlds__hlds_class__enum_functor_desc_constraint_type_0_1,
  &hlds__hlds_class__hlds__hlds_class__enum_functor_desc_constraint_type_0_0
};

static const MR_Integer hlds__hlds_class__hlds__hlds_class__functor_number_map_constraint_type_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__hlds_class____Unify____constraint_type_0_0_10001)),
  ((MR_Box) (hlds__hlds_class____Compare____constraint_type_0_0_10001)),
  (MR_String) "hlds.hlds_class",
  (MR_String) "constraint_type",
  {     hlds__hlds_class__hlds__hlds_class__enum_name_ordered_constraint_type_0 },
  {     hlds__hlds_class__hlds__hlds_class__enum_value_ordered_constraint_type_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__hlds_class__hlds__hlds_class__functor_number_map_constraint_type_0
};

const MR_TypeCtorInfo_Struct hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_argpos_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__hlds_class____Unify____hlds_class_argpos_0_0_10001)),
  ((MR_Box) (hlds__hlds_class____Compare____hlds_class_argpos_0_0_10001)),
  (MR_String) "hlds.hlds_class",
  (MR_String) "hlds_class_argpos",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_class__list__ti_list_1hlds__hlds_class__type_ctor_info_hlds_class_fundep_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_fundep_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_class__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_class__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&hlds__hlds_class__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__hlds_class__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_kind_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__hlds_class__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_class__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_class__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_PseudoTypeInfo hlds__hlds_class__hlds__hlds_class__field_types_hlds_class_defn_0_0[10] = {
  (MR_PseudoTypeInfo) (&hlds__status__hlds__status__type_ctor_info_typeclass_status_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_class__list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_class__list__ti_list_1hlds__hlds_class__type_ctor_info_hlds_class_fundep_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_class__list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_class__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_class__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_kind_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_interface_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_class__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_class__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
  (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0)
};

static const MR_ConstString hlds__hlds_class__hlds__hlds_class__field_names_hlds_class_defn_0_0[10] = {
  (MR_String) "classdefn_status",
  (MR_String) "classdefn_supers",
  (MR_String) "classdefn_fundeps",
  (MR_String) "classdefn_fundep_ancestors",
  (MR_String) "classdefn_vars",
  (MR_String) "classdefn_kinds",
  (MR_String) "classdefn_interface",
  (MR_String) "classdefn_hlds_interface",
  (MR_String) "classdefn_tvarset",
  (MR_String) "classdefn_context"
};

static const MR_DuFunctorDesc hlds__hlds_class__hlds__hlds_class__du_functor_desc_hlds_class_defn_0_0 = {
  (MR_String) "hlds_class_defn",
  (MR_Integer) 10,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__hlds_class__hlds__hlds_class__field_types_hlds_class_defn_0_0,
  hlds__hlds_class__hlds__hlds_class__field_names_hlds_class_defn_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__hlds_class__hlds__hlds_class__du_stag_ordered_hlds_class_defn_0_0[1] = {
  &hlds__hlds_class__hlds__hlds_class__du_functor_desc_hlds_class_defn_0_0
};

static const MR_DuPtagLayout hlds__hlds_class__hlds__hlds_class__du_ptag_ordered_hlds_class_defn_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    hlds__hlds_class__hlds__hlds_class__du_stag_ordered_hlds_class_defn_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr hlds__hlds_class__hlds__hlds_class__du_name_ordered_hlds_class_defn_0[1] = {
  &hlds__hlds_class__hlds__hlds_class__du_functor_desc_hlds_class_defn_0_0
};

static const MR_Integer hlds__hlds_class__hlds__hlds_class__functor_number_map_hlds_class_defn_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_class____Unify____hlds_class_defn_0_0_10001)),
  ((MR_Box) (hlds__hlds_class____Compare____hlds_class_defn_0_0_10001)),
  (MR_String) "hlds.hlds_class",
  (MR_String) "hlds_class_defn",
  {     hlds__hlds_class__hlds__hlds_class__du_name_ordered_hlds_class_defn_0 },
  {     hlds__hlds_class__hlds__hlds_class__du_ptag_ordered_hlds_class_defn_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__hlds_class__hlds__hlds_class__functor_number_map_hlds_class_defn_0
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_class__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_PseudoTypeInfo hlds__hlds_class__hlds__hlds_class__field_types_hlds_class_fundep_0_0[2] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_class__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_class__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0)
};

static const MR_ConstString hlds__hlds_class__hlds__hlds_class__field_names_hlds_class_fundep_0_0[2] = {
  (MR_String) "domain",
  (MR_String) "range"
};

static const MR_DuFunctorDesc hlds__hlds_class__hlds__hlds_class__du_functor_desc_hlds_class_fundep_0_0 = {
  (MR_String) "fundep",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__hlds_class__hlds__hlds_class__field_types_hlds_class_fundep_0_0,
  hlds__hlds_class__hlds__hlds_class__field_names_hlds_class_fundep_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__hlds_class__hlds__hlds_class__du_stag_ordered_hlds_class_fundep_0_0[1] = {
  &hlds__hlds_class__hlds__hlds_class__du_functor_desc_hlds_class_fundep_0_0
};

static const MR_DuPtagLayout hlds__hlds_class__hlds__hlds_class__du_ptag_ordered_hlds_class_fundep_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    hlds__hlds_class__hlds__hlds_class__du_stag_ordered_hlds_class_fundep_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr hlds__hlds_class__hlds__hlds_class__du_name_ordered_hlds_class_fundep_0[1] = {
  &hlds__hlds_class__hlds__hlds_class__du_functor_desc_hlds_class_fundep_0_0
};

static const MR_Integer hlds__hlds_class__hlds__hlds_class__functor_number_map_hlds_class_fundep_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_fundep_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_class____Unify____hlds_class_fundep_0_0_10001)),
  ((MR_Box) (hlds__hlds_class____Compare____hlds_class_fundep_0_0_10001)),
  (MR_String) "hlds.hlds_class",
  (MR_String) "hlds_class_fundep",
  {     hlds__hlds_class__hlds__hlds_class__du_name_ordered_hlds_class_fundep_0 },
  {     hlds__hlds_class__hlds__hlds_class__du_ptag_ordered_hlds_class_fundep_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__hlds_class__hlds__hlds_class__functor_number_map_hlds_class_fundep_0
};

const MR_TypeCtorInfo_Struct hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_fundeps_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__hlds_class____Unify____hlds_class_fundeps_0_0_10001)),
  ((MR_Box) (hlds__hlds_class____Compare____hlds_class_fundeps_0_0_10001)),
  (MR_String) "hlds.hlds_class",
  (MR_String) "hlds_class_fundeps",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&hlds__hlds_class__list__ti_list_1hlds__hlds_class__type_ctor_info_hlds_class_fundep_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_interface_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__hlds_class____Unify____hlds_class_interface_0_0_10001)),
  ((MR_Box) (hlds__hlds_class____Compare____hlds_class_interface_0_0_10001)),
  (MR_String) "hlds.hlds_class",
  (MR_String) "hlds_class_interface",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&hlds__hlds_class__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_class__list__ti_list_1hlds__hlds_class__type_ctor_info_constraint_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_id_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_class__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_PseudoTypeInfo hlds__hlds_class__hlds__hlds_class__field_types_hlds_constraint_0_0[3] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_class__list__ti_list_1hlds__hlds_class__type_ctor_info_constraint_id_0),
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_class__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0)
};

static const MR_DuFunctorDesc hlds__hlds_class__hlds__hlds_class__du_functor_desc_hlds_constraint_0_0 = {
  (MR_String) "hlds_constraint",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__hlds_class__hlds__hlds_class__field_types_hlds_constraint_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__hlds_class__hlds__hlds_class__du_stag_ordered_hlds_constraint_0_0[1] = {
  &hlds__hlds_class__hlds__hlds_class__du_functor_desc_hlds_constraint_0_0
};

static const MR_DuPtagLayout hlds__hlds_class__hlds__hlds_class__du_ptag_ordered_hlds_constraint_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    hlds__hlds_class__hlds__hlds_class__du_stag_ordered_hlds_constraint_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr hlds__hlds_class__hlds__hlds_class__du_name_ordered_hlds_constraint_0[1] = {
  &hlds__hlds_class__hlds__hlds_class__du_functor_desc_hlds_constraint_0_0
};

static const MR_Integer hlds__hlds_class__hlds__hlds_class__functor_number_map_hlds_constraint_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_class____Unify____hlds_constraint_0_0_10001)),
  ((MR_Box) (hlds__hlds_class____Compare____hlds_constraint_0_0_10001)),
  (MR_String) "hlds.hlds_class",
  (MR_String) "hlds_constraint",
  {     hlds__hlds_class__hlds__hlds_class__du_name_ordered_hlds_constraint_0 },
  {     hlds__hlds_class__hlds__hlds_class__du_ptag_ordered_hlds_constraint_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__hlds_class__hlds__hlds_class__functor_number_map_hlds_constraint_0
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_class__list__ti_list_1hlds__hlds_class__type_ctor_info_hlds_constraint_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0)
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__hlds_class__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_class_id_0set_ordlist__ti_set_ordlist_1hlds__hlds_class__type_ctor_info_hlds_constraint_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0),
    (MR_TypeInfo) (&hlds__hlds_class__set_ordlist__ti_set_ordlist_1hlds__hlds_class__type_ctor_info_hlds_constraint_0)
  }
};

static const MR_PseudoTypeInfo hlds__hlds_class__hlds__hlds_class__field_types_hlds_constraints_0_0[4] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_class__list__ti_list_1hlds__hlds_class__type_ctor_info_hlds_constraint_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_class__list__ti_list_1hlds__hlds_class__type_ctor_info_hlds_constraint_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_class__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_class_id_0set_ordlist__ti_set_ordlist_1hlds__hlds_class__type_ctor_info_hlds_constraint_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_class__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_prog_constraint_0list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0)
};

static const MR_ConstString hlds__hlds_class__hlds__hlds_class__field_names_hlds_constraints_0_0[4] = {
  (MR_String) "hcs_unproven",
  (MR_String) "hcs_assumed",
  (MR_String) "hcs_redundant",
  (MR_String) "hcs_ancestors"
};

static const MR_DuFunctorDesc hlds__hlds_class__hlds__hlds_class__du_functor_desc_hlds_constraints_0_0 = {
  (MR_String) "hlds_constraints",
  (MR_Integer) 4,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__hlds_class__hlds__hlds_class__field_types_hlds_constraints_0_0,
  hlds__hlds_class__hlds__hlds_class__field_names_hlds_constraints_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__hlds_class__hlds__hlds_class__du_stag_ordered_hlds_constraints_0_0[1] = {
  &hlds__hlds_class__hlds__hlds_class__du_functor_desc_hlds_constraints_0_0
};

static const MR_DuPtagLayout hlds__hlds_class__hlds__hlds_class__du_ptag_ordered_hlds_constraints_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    hlds__hlds_class__hlds__hlds_class__du_stag_ordered_hlds_constraints_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr hlds__hlds_class__hlds__hlds_class__du_name_ordered_hlds_constraints_0[1] = {
  &hlds__hlds_class__hlds__hlds_class__du_functor_desc_hlds_constraints_0_0
};

static const MR_Integer hlds__hlds_class__hlds__hlds_class__functor_number_map_hlds_constraints_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraints_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_class____Unify____hlds_constraints_0_0_10001)),
  ((MR_Box) (hlds__hlds_class____Compare____hlds_constraints_0_0_10001)),
  (MR_String) "hlds.hlds_class",
  (MR_String) "hlds_constraints",
  {     hlds__hlds_class__hlds__hlds_class__du_name_ordered_hlds_constraints_0 },
  {     hlds__hlds_class__hlds__hlds_class__du_ptag_ordered_hlds_constraints_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__hlds_class__hlds__hlds_class__functor_number_map_hlds_constraints_0
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_class__maybe__ti_maybe_1list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&hlds__hlds_class__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0)
  }
};

static const MR_PseudoTypeInfo hlds__hlds_class__hlds__hlds_class__field_types_hlds_instance_defn_0_0[10] = {
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_class__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_class__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&hlds__status__hlds__status__type_ctor_info_instance_status_0),
  (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_class__list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_body_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_class__maybe__ti_maybe_1list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_class__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_class__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_prog_constraint_0hlds__hlds_class__type_ctor_info_constraint_proof_0)
};

static const MR_ConstString hlds__hlds_class__hlds__hlds_class__field_names_hlds_instance_defn_0_0[10] = {
  (MR_String) "instdefn_module",
  (MR_String) "instdefn_types",
  (MR_String) "instdefn_orig_types",
  (MR_String) "instdefn_status",
  (MR_String) "instdefn_context",
  (MR_String) "instdefn_constraints",
  (MR_String) "instdefn_body",
  (MR_String) "instdefn_hlds_interface",
  (MR_String) "instdefn_tvarset",
  (MR_String) "instdefn_proofs"
};

static const MR_DuFunctorDesc hlds__hlds_class__hlds__hlds_class__du_functor_desc_hlds_instance_defn_0_0 = {
  (MR_String) "hlds_instance_defn",
  (MR_Integer) 10,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__hlds_class__hlds__hlds_class__field_types_hlds_instance_defn_0_0,
  hlds__hlds_class__hlds__hlds_class__field_names_hlds_instance_defn_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__hlds_class__hlds__hlds_class__du_stag_ordered_hlds_instance_defn_0_0[1] = {
  &hlds__hlds_class__hlds__hlds_class__du_functor_desc_hlds_instance_defn_0_0
};

static const MR_DuPtagLayout hlds__hlds_class__hlds__hlds_class__du_ptag_ordered_hlds_instance_defn_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    hlds__hlds_class__hlds__hlds_class__du_stag_ordered_hlds_instance_defn_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr hlds__hlds_class__hlds__hlds_class__du_name_ordered_hlds_instance_defn_0[1] = {
  &hlds__hlds_class__hlds__hlds_class__du_functor_desc_hlds_instance_defn_0_0
};

static const MR_Integer hlds__hlds_class__hlds__hlds_class__functor_number_map_hlds_instance_defn_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_class____Unify____hlds_instance_defn_0_0_10001)),
  ((MR_Box) (hlds__hlds_class____Compare____hlds_instance_defn_0_0_10001)),
  (MR_String) "hlds.hlds_class",
  (MR_String) "hlds_instance_defn",
  {     hlds__hlds_class__hlds__hlds_class__du_name_ordered_hlds_instance_defn_0 },
  {     hlds__hlds_class__hlds__hlds_class__du_ptag_ordered_hlds_instance_defn_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__hlds_class__hlds__hlds_class__functor_number_map_hlds_instance_defn_0
};

const MR_TypeCtorInfo_Struct hlds__hlds_class__hlds__hlds_class__type_ctor_info_instance_id_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__hlds_class____Unify____instance_id_0_0_10001)),
  ((MR_Box) (hlds__hlds_class____Compare____instance_id_0_0_10001)),
  (MR_String) "hlds.hlds_class",
  (MR_String) "instance_id",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_class__list__ti_list_1hlds__hlds_class__type_ctor_info_hlds_instance_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__hlds_class__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_class_id_0list__ti_list_1hlds__hlds_class__type_ctor_info_hlds_instance_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0),
    (MR_TypeInfo) (&hlds__hlds_class__list__ti_list_1hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)
  }
};

const MR_TypeCtorInfo_Struct hlds__hlds_class__hlds__hlds_class__type_ctor_info_instance_table_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__hlds_class____Unify____instance_table_0_0_10001)),
  ((MR_Box) (hlds__hlds_class____Compare____instance_table_0_0_10001)),
  (MR_String) "hlds.hlds_class",
  (MR_String) "instance_table",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&hlds__hlds_class__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_class_id_0list__ti_list_1hlds__hlds_class__type_ctor_info_hlds_instance_defn_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct hlds__hlds_class__hlds__hlds_class__type_ctor_info_redundant_constraints_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__hlds_class____Unify____redundant_constraints_0_0_10001)),
  ((MR_Box) (hlds__hlds_class____Compare____redundant_constraints_0_0_10001)),
  (MR_String) "hlds.hlds_class",
  (MR_String) "redundant_constraints",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&hlds__hlds_class__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_class_id_0set_ordlist__ti_set_ordlist_1hlds__hlds_class__type_ctor_info_hlds_constraint_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static void MR_CALL 
hlds__hlds_class__IntroducedFrom__pred__merge_hlds_constraints__444__1_3_p_0(
  MR_Word HeadVar__1_28,
  MR_Word HeadVar__2_29,
  MR_Word * HeadVar__3_30)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_class__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_115_104_111_114_116_101_114_95_95_91_49_93_95_48_2_p_0(HeadVar__1_28, HeadVar__2_29);
    if (succeeded)
      *HeadVar__3_30 = HeadVar__1_28;
    else
      *HeadVar__3_30 = HeadVar__2_29;
  }
}

static void MR_CALL 
hlds__hlds_class__IntroducedFrom__pred__merge_hlds_constraints__443__1_3_p_0(
  MR_Word HeadVar__1_22,
  MR_Word HeadVar__2_23,
  MR_Word * HeadVar__3_24)
{
  {
    mercury__set__union_3_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), HeadVar__1_22, HeadVar__2_23, HeadVar__3_24);
  }
}

void MR_CALL 
hlds__hlds_class____Compare____redundant_constraints_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_class_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
hlds__hlds_class____Unify____redundant_constraints_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__hlds_class_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
hlds__hlds_class____Compare____instance_table_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_class_scalar_common_2[6]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
hlds__hlds_class____Unify____instance_table_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__hlds_class_scalar_common_2[6]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
hlds__hlds_class____Compare____instance_id_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
hlds__hlds_class____Unify____instance_id_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
    return succeeded;
  }
}

void MR_CALL 
hlds__hlds_class____Compare____hlds_instance_defn_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_33 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_34 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_33 == CastY_34);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word ArgX4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgY4_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word ArgX5_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgY5_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
      MR_Word ArgX6_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Word ArgY6_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5))));
      MR_Word ArgX7_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
      MR_Word ArgY7_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6))));
      MR_Word ArgX8_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))));
      MR_Word ArgY8_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 7))));
      MR_Word ArgX9_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 8))));
      MR_Word ArgY9_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 8))));
      MR_Word ArgX10_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 9))));
      MR_Word ArgY10_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 9))));
      MR_Word Var_24;

      mdbcomp__sym_name____Compare____sym_name_0_0(&Var_24, ArgX1_4, ArgY1_5);
      succeeded = (Var_24 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_24;
      else
      {
        MR_Word Var_25;

        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_class_scalar_common_1[3]), &Var_25, ((MR_Box) (ArgX2_6)), ((MR_Box) (ArgY2_7)));
        succeeded = (Var_25 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_25;
        else
        {
          MR_Word Var_26;

          mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_class_scalar_common_1[3]), &Var_26, ((MR_Box) (ArgX3_8)), ((MR_Box) (ArgY3_9)));
          succeeded = (Var_26 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_26;
          else
          {
            MR_Word Var_27;

            hlds__status____Compare____instance_status_0_0(&Var_27, ArgX4_10, ArgY4_11);
            succeeded = (Var_27 == (MR_Integer) 0);
            succeeded = !(succeeded);
            if (succeeded)
              *HeadVar__1_1 = Var_27;
            else
            {
              MR_Word Var_28;

              mercury__term____Compare____context_0_0(&Var_28, ArgX5_12, ArgY5_13);
              succeeded = (Var_28 == (MR_Integer) 0);
              succeeded = !(succeeded);
              if (succeeded)
                *HeadVar__1_1 = Var_28;
              else
              {
                MR_Word Var_29;

                mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_class_scalar_common_1[2]), &Var_29, ((MR_Box) (ArgX6_14)), ((MR_Box) (ArgY6_15)));
                succeeded = (Var_29 == (MR_Integer) 0);
                succeeded = !(succeeded);
                if (succeeded)
                  *HeadVar__1_1 = Var_29;
                else
                {
                  MR_Word Var_30;

                  parse_tree__prog_data____Compare____instance_body_0_0(&Var_30, ArgX7_16, ArgY7_17);
                  succeeded = (Var_30 == (MR_Integer) 0);
                  succeeded = !(succeeded);
                  if (succeeded)
                    *HeadVar__1_1 = Var_30;
                  else
                  {
                    MR_Word Var_31;

                    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_class_scalar_common_1[11]), &Var_31, ((MR_Box) (ArgX8_18)), ((MR_Box) (ArgY8_19)));
                    succeeded = (Var_31 == (MR_Integer) 0);
                    succeeded = !(succeeded);
                    if (succeeded)
                      *HeadVar__1_1 = Var_31;
                    else
                    {
                      MR_Word Var_32;

                      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_class_scalar_common_1[7]), &Var_32, ((MR_Box) (ArgX9_20)), ((MR_Box) (ArgY9_21)));
                      succeeded = (Var_32 == (MR_Integer) 0);
                      succeeded = !(succeeded);
                      if (succeeded)
                        *HeadVar__1_1 = Var_32;
                      else
                      {
                        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_class_scalar_common_2[4]), HeadVar__1_1, ((MR_Box) (ArgX10_22)), ((MR_Box) (ArgY10_23)));
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

MR_bool MR_CALL 
hlds__hlds_class____Unify____hlds_instance_defn_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_23 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_24 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_23 == CastY_24);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_26_26;
      MR_Word TypeInfo_27_27;
      MR_Word TypeInfo_30_30;
      MR_Word TypeInfo_32_32;
      MR_Word TypeInfo_33_33;
      MR_Word TypeInfo_34_34;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
      MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5))));
      MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6))));
      MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
      MR_Word ArgX8_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 7))));
      MR_Word ArgY8_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))));
      MR_Word ArgX9_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 8))));
      MR_Word ArgY9_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 8))));
      MR_Word ArgX10_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 9))));
      MR_Word ArgY10_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 9))));

      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        TypeInfo_26_26 = (MR_Word) (&hlds__hlds_class_scalar_common_1[3]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_26_26, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          TypeInfo_27_27 = (MR_Word) (&hlds__hlds_class_scalar_common_1[3]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_27_27, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
          if (succeeded)
          {
            succeeded = hlds__status____Unify____instance_status_0_0(ArgX4_9, ArgY4_10);
            if (succeeded)
            {
              succeeded = mercury__term____Unify____context_0_0(ArgX5_11, ArgY5_12);
              if (succeeded)
              {
                TypeInfo_30_30 = (MR_Word) (&hlds__hlds_class_scalar_common_1[2]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_30_30, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
                if (succeeded)
                {
                  succeeded = parse_tree__prog_data____Unify____instance_body_0_0(ArgX7_15, ArgY7_16);
                  if (succeeded)
                  {
                    TypeInfo_32_32 = (MR_Word) (&hlds__hlds_class_scalar_common_1[11]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_32_32, ((MR_Box) (ArgX8_17)), ((MR_Box) (ArgY8_18)));
                    if (succeeded)
                    {
                      TypeInfo_33_33 = (MR_Word) (&hlds__hlds_class_scalar_common_1[7]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_33_33, ((MR_Box) (ArgX9_19)), ((MR_Box) (ArgY9_20)));
                      if (succeeded)
                      {
                        TypeInfo_34_34 = (MR_Word) (&hlds__hlds_class_scalar_common_2[4]);
                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_34_34, ((MR_Box) (ArgX10_21)), ((MR_Box) (ArgY10_22)));
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
}

void MR_CALL 
hlds__hlds_class____Compare____hlds_constraints_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
      MR_Word ArgX2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word ArgX4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgY4_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word Var_12;

      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_class_scalar_common_1[10]), &Var_12, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (Var_12 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_12;
      else
      {
        MR_Word Var_13;

        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_class_scalar_common_1[10]), &Var_13, ((MR_Box) (ArgX2_6)), ((MR_Box) (ArgY2_7)));
        succeeded = (Var_13 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_13;
        else
        {
          MR_Word Var_14;

          mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_class_scalar_common_2[0]), &Var_14, ((MR_Box) (ArgX3_8)), ((MR_Box) (ArgY3_9)));
          succeeded = (Var_14 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_14;
          else
          {
            mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_class_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (ArgX4_10)), ((MR_Box) (ArgY4_11)));
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
hlds__hlds_class____Unify____hlds_constraints_0_0(
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
    {
      MR_Word TypeInfo_14_14;
      MR_Word TypeInfo_15_15;
      MR_Word TypeInfo_16_16;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__hlds_class_scalar_common_1[10]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_14_14 = (MR_Word) (&hlds__hlds_class_scalar_common_1[10]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          TypeInfo_15_15 = (MR_Word) (&hlds__hlds_class_scalar_common_2[0]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_15, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
          if (succeeded)
          {
            TypeInfo_16_16 = (MR_Word) (&hlds__hlds_class_scalar_common_2[1]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          }
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
hlds__hlds_class____Compare____hlds_constraint_0_0(
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
      MR_Word ArgX2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word Var_10;

      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_class_scalar_common_1[9]), &Var_10, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (Var_10 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_10;
      else
      {
        MR_Word Var_11;

        mdbcomp__sym_name____Compare____sym_name_0_0(&Var_11, ArgX2_6, ArgY2_7);
        succeeded = (Var_11 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_11;
        else
        {
          mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_class_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (ArgX3_8)), ((MR_Box) (ArgY3_9)));
        }
      }
    }
  }
}

MR_bool MR_CALL 
hlds__hlds_class____Unify____hlds_constraint_0_0(
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
      MR_Word TypeInfo_13_13;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__hlds_class_scalar_common_1[9]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
        {
          TypeInfo_13_13 = (MR_Word) (&hlds__hlds_class_scalar_common_1[3]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
hlds__hlds_class____Compare____hlds_class_interface_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_class_scalar_common_1[6]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
hlds__hlds_class____Unify____hlds_class_interface_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__hlds_class_scalar_common_1[6]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
hlds__hlds_class____Compare____hlds_class_fundeps_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_class_scalar_common_1[4]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
hlds__hlds_class____Unify____hlds_class_fundeps_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__hlds_class_scalar_common_1[4]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
hlds__hlds_class____Compare____hlds_class_fundep_0_0(
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
      MR_Word ArgX2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word Var_8;

      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_class_scalar_common_1[8]), &Var_8, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (Var_8 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_8;
      else
      {
        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_class_scalar_common_1[8]), HeadVar__1_1, ((MR_Box) (ArgX2_6)), ((MR_Box) (ArgY2_7)));
      }
    }
  }
}

MR_bool MR_CALL 
hlds__hlds_class____Unify____hlds_class_fundep_0_0(
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

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__hlds_class_scalar_common_1[8]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_10_10 = (MR_Word) (&hlds__hlds_class_scalar_common_1[8]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      }
    }
    return succeeded;
  }
}

void MR_CALL 
hlds__hlds_class____Compare____hlds_class_defn_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_33 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_34 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_33 == CastY_34);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word ArgX4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgY4_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word ArgX5_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgY5_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
      MR_Word ArgX6_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Word ArgY6_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5))));
      MR_Word ArgX7_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
      MR_Word ArgY7_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6))));
      MR_Word ArgX8_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))));
      MR_Word ArgY8_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 7))));
      MR_Word ArgX9_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 8))));
      MR_Word ArgY9_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 8))));
      MR_Word ArgX10_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 9))));
      MR_Word ArgY10_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 9))));
      MR_Word Var_24;

      hlds__status____Compare____typeclass_status_0_0(&Var_24, ArgX1_4, ArgY1_5);
      succeeded = (Var_24 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_24;
      else
      {
        MR_Word Var_25;

        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_class_scalar_common_1[2]), &Var_25, ((MR_Box) (ArgX2_6)), ((MR_Box) (ArgY2_7)));
        succeeded = (Var_25 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_25;
        else
        {
          MR_Word Var_26;

          mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_class_scalar_common_1[4]), &Var_26, ((MR_Box) (ArgX3_8)), ((MR_Box) (ArgY3_9)));
          succeeded = (Var_26 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_26;
          else
          {
            MR_Word Var_27;

            mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_class_scalar_common_1[2]), &Var_27, ((MR_Box) (ArgX4_10)), ((MR_Box) (ArgY4_11)));
            succeeded = (Var_27 == (MR_Integer) 0);
            succeeded = !(succeeded);
            if (succeeded)
              *HeadVar__1_1 = Var_27;
            else
            {
              MR_Word Var_28;

              mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_class_scalar_common_1[5]), &Var_28, ((MR_Box) (ArgX5_12)), ((MR_Box) (ArgY5_13)));
              succeeded = (Var_28 == (MR_Integer) 0);
              succeeded = !(succeeded);
              if (succeeded)
                *HeadVar__1_1 = Var_28;
              else
              {
                MR_Word Var_29;

                mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_class_scalar_common_2[5]), &Var_29, ((MR_Box) (ArgX6_14)), ((MR_Box) (ArgY6_15)));
                succeeded = (Var_29 == (MR_Integer) 0);
                succeeded = !(succeeded);
                if (succeeded)
                  *HeadVar__1_1 = Var_29;
                else
                {
                  MR_Word Var_30;

                  parse_tree__prog_data____Compare____class_interface_0_0(&Var_30, ArgX7_16, ArgY7_17);
                  succeeded = (Var_30 == (MR_Integer) 0);
                  succeeded = !(succeeded);
                  if (succeeded)
                    *HeadVar__1_1 = Var_30;
                  else
                  {
                    MR_Word Var_31;

                    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_class_scalar_common_1[6]), &Var_31, ((MR_Box) (ArgX8_18)), ((MR_Box) (ArgY8_19)));
                    succeeded = (Var_31 == (MR_Integer) 0);
                    succeeded = !(succeeded);
                    if (succeeded)
                      *HeadVar__1_1 = Var_31;
                    else
                    {
                      MR_Word Var_32;

                      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_class_scalar_common_1[7]), &Var_32, ((MR_Box) (ArgX9_20)), ((MR_Box) (ArgY9_21)));
                      succeeded = (Var_32 == (MR_Integer) 0);
                      succeeded = !(succeeded);
                      if (succeeded)
                        *HeadVar__1_1 = Var_32;
                      else
                        mercury__term____Compare____context_0_0(HeadVar__1_1, ArgX10_22, ArgY10_23);
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

MR_bool MR_CALL 
hlds__hlds_class____Unify____hlds_class_defn_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_23 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_24 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_23 == CastY_24);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_26_26;
      MR_Word TypeInfo_27_27;
      MR_Word TypeInfo_28_28;
      MR_Word TypeInfo_29_29;
      MR_Word TypeInfo_30_30;
      MR_Word TypeInfo_32_32;
      MR_Word TypeInfo_33_33;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
      MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5))));
      MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6))));
      MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
      MR_Word ArgX8_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 7))));
      MR_Word ArgY8_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))));
      MR_Word ArgX9_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 8))));
      MR_Word ArgY9_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 8))));
      MR_Word ArgX10_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 9))));
      MR_Word ArgY10_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 9))));

      succeeded = hlds__status____Unify____typeclass_status_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        TypeInfo_26_26 = (MR_Word) (&hlds__hlds_class_scalar_common_1[2]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_26_26, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          TypeInfo_27_27 = (MR_Word) (&hlds__hlds_class_scalar_common_1[4]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_27_27, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
          if (succeeded)
          {
            TypeInfo_28_28 = (MR_Word) (&hlds__hlds_class_scalar_common_1[2]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_28_28, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
            if (succeeded)
            {
              TypeInfo_29_29 = (MR_Word) (&hlds__hlds_class_scalar_common_1[5]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_29_29, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
              if (succeeded)
              {
                TypeInfo_30_30 = (MR_Word) (&hlds__hlds_class_scalar_common_2[5]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_30_30, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
                if (succeeded)
                {
                  succeeded = parse_tree__prog_data____Unify____class_interface_0_0(ArgX7_15, ArgY7_16);
                  if (succeeded)
                  {
                    TypeInfo_32_32 = (MR_Word) (&hlds__hlds_class_scalar_common_1[6]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_32_32, ((MR_Box) (ArgX8_17)), ((MR_Box) (ArgY8_18)));
                    if (succeeded)
                    {
                      TypeInfo_33_33 = (MR_Word) (&hlds__hlds_class_scalar_common_1[7]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_33_33, ((MR_Box) (ArgX9_19)), ((MR_Box) (ArgY9_20)));
                      if (succeeded)
                        succeeded = mercury__term____Unify____context_0_0(ArgX10_21, ArgY10_22);
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
}

void MR_CALL 
hlds__hlds_class____Compare____hlds_class_argpos_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
hlds__hlds_class____Unify____hlds_class_argpos_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
    return succeeded;
  }
}

void MR_CALL 
hlds__hlds_class____Compare____constraint_type_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
hlds__hlds_class____Unify____constraint_type_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
hlds__hlds_class____Compare____constraint_proof_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_class_scalar_common_2[4]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
hlds__hlds_class____Unify____constraint_proof_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__hlds_class_scalar_common_2[4]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
hlds__hlds_class____Compare____constraint_proof_0_0(
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
      MR_Integer Var_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
      {
        MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));

        mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Var_16, ArgY1_5);
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

        parse_tree__prog_data____Compare____prog_constraint_0_0(HeadVar__1_1, Var_17, ArgY1_11);
      }
    }
  }
}

MR_bool MR_CALL 
hlds__hlds_class____Unify____constraint_proof_0_0(
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
      MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Integer ArgY1_4;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
      if (succeeded)
      {
        ArgY1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
        succeeded = (ArgX1_3 == ArgY1_4);
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
        succeeded = parse_tree__prog_data____Unify____prog_constraint_0_0(ArgX1_5, ArgY1_6);
      }
    }
    return succeeded;
  }
}

void MR_CALL 
hlds__hlds_class____Compare____constraint_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_class_scalar_common_2[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
hlds__hlds_class____Unify____constraint_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__hlds_class_scalar_common_2[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
hlds__hlds_class____Compare____constraint_id_0_0(
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
      MR_Word ArgX2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Integer ArgX3_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Integer ArgY3_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word Var_10;
      MR_Integer Var_17 = (MR_Integer) (ArgX1_4);
      MR_Integer Var_18 = (MR_Integer) (ArgY1_5);

      mercury__private_builtin__builtin_compare_int_3_p_0(&Var_10, Var_17, Var_18);
      succeeded = (Var_10 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_10;
      else
      {
        MR_Word Var_11;
        MR_Integer Var_19 = (MR_Integer) (ArgX2_6);
        MR_Integer Var_20 = (MR_Integer) (ArgY2_7);

        mercury__private_builtin__builtin_compare_int_3_p_0(&Var_11, Var_19, Var_20);
        succeeded = (Var_11 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_11;
        else
          mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, ArgX3_8, ArgY3_9);
      }
    }
  }
}

MR_bool MR_CALL 
hlds__hlds_class____Unify____constraint_id_0_0(
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
      MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Integer ArgY3_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Integer Var_12;
      MR_Integer Var_13;

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
      {
        Var_12 = (MR_Integer) (ArgX2_5);
        Var_13 = (MR_Integer) (ArgY2_6);
        succeeded = (Var_12 == Var_13);
        if (succeeded)
          succeeded = (ArgX3_7 == ArgY3_8);
      }
    }
    return succeeded;
  }
}

void MR_CALL 
hlds__hlds_class____Compare____class_table_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_class_scalar_common_2[3]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
hlds__hlds_class____Unify____class_table_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__hlds_class_scalar_common_2[3]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
hlds__hlds_class____Compare____ancestor_constraints_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_class_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
hlds__hlds_class____Unify____ancestor_constraints_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__hlds_class_scalar_common_2[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_class__update_ancestor_constraints_3_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_Ancestors_14;

    hlds__hlds_class__update_ancestor_constraints_3_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_Ancestors_14);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_Ancestors_14));
  }
}

static void MR_CALL 
hlds__hlds_class__update_ancestor_constraints_3_6_p_0(
  MR_Word ClassTable_7,
  MR_Word TVarSet_8,
  MR_Word Descendants_9,
  MR_Word Constraint_10,
  MR_Word STATE_VARIABLE_Ancestors_0_13,
  MR_Word * STATE_VARIABLE_Ancestors_14)
{
  {
    MR_bool succeeded;
    MR_Word OldDescendants_12;
    MR_Box conv0_OldDescendants_12;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__hlds_class_scalar_common_1[2]), STATE_VARIABLE_Ancestors_0_13, ((MR_Box) (Constraint_10)), &conv0_OldDescendants_12);
    if (succeeded)
    {
      OldDescendants_12 = ((MR_Word) (conv0_OldDescendants_12));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      succeeded = hlds__hlds_class__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_115_104_111_114_116_101_114_95_95_91_49_93_95_48_2_p_0(OldDescendants_12, Descendants_9);
    if (succeeded)
      *STATE_VARIABLE_Ancestors_14 = STATE_VARIABLE_Ancestors_0_13;
    else
    {
      MR_Word STATE_VARIABLE_Ancestors_15_15;
      MR_Word ClassName_28;
      MR_Word ArgTypes_29;
      MR_Integer Arity_30;
      MR_Word ClassId_31;
      MR_Word ClassDefn_32;
      MR_Word Renaming_34;
      MR_Word RenamedSupers_35;
      MR_Word RenamedParams_36;
      MR_Word Subst_37;
      MR_Word Supers_38;
      MR_Word Descendants_39;
      MR_Word Var_40;
      MR_Word Var_41;
      MR_Word Var_42;
      MR_Word Var_43;
      MR_Box conv1_ClassDefn_32;
      MR_Word Var_33;
      MR_Box conv3_STATE_VARIABLE_Ancestors_14;

      mercury__map__set_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__hlds_class_scalar_common_1[2]), ((MR_Box) (Constraint_10)), ((MR_Box) (Descendants_9)), STATE_VARIABLE_Ancestors_0_13, &STATE_VARIABLE_Ancestors_15_15);
      ClassName_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraint_10, (MR_Integer) 0))));
      ArgTypes_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraint_10, (MR_Integer) 1))));
      mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_29, &Arity_30);
      {
        ClassId_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ClassId_31, 0) = ((MR_Box) (ClassName_28));
        MR_hl_field(MR_mktag(0), ClassId_31, 1) = ((MR_Box) (Arity_30));
      }
      mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), ClassTable_7, ((MR_Box) (ClassId_31)), &conv1_ClassDefn_32);
      ClassDefn_32 = ((MR_Word) (conv1_ClassDefn_32));
      Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_32, (MR_Integer) 8))));
      parse_tree__prog_data__tvarset_merge_renaming_4_p_0(TVarSet_8, Var_40, &Var_33, &Renaming_34);
      Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_32, (MR_Integer) 1))));
      parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_p_0(Renaming_34, Var_41, &RenamedSupers_35);
      Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_32, (MR_Integer) 4))));
      parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_p_0(Renaming_34, Var_42, &RenamedParams_36);
      mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&hlds__hlds_class_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), RenamedParams_36, ArgTypes_29, &Subst_37);
      parse_tree__prog_type_subst__apply_subst_to_prog_constraint_list_3_p_0(Subst_37, RenamedSupers_35, &Supers_38);
      {
        Descendants_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Descendants_39, 0) = ((MR_Box) (Constraint_10));
        MR_hl_field(MR_mktag(1), Descendants_39, 1) = ((MR_Box) (Descendants_9));
      }
      {
        Var_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_43, 0) = ((MR_Box) (&hlds__hlds_class_scalar_common_7[0]));
        MR_hl_field(MR_mktag(0), Var_43, 1) = ((MR_Box) (hlds__hlds_class__update_ancestor_constraints_3_6_p_0_1));
        MR_hl_field(MR_mktag(0), Var_43, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), Var_43, 3) = ((MR_Box) (ClassTable_7));
        MR_hl_field(MR_mktag(0), Var_43, 4) = ((MR_Box) (TVarSet_8));
        MR_hl_field(MR_mktag(0), Var_43, 5) = ((MR_Box) (Descendants_39));
      }
      mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__hlds_class_scalar_common_2[1]), Var_43, Supers_38, ((MR_Box) (STATE_VARIABLE_Ancestors_15_15)), &conv3_STATE_VARIABLE_Ancestors_14);
      *STATE_VARIABLE_Ancestors_14 = ((MR_Word) (conv3_STATE_VARIABLE_Ancestors_14));
    }
  }
}

static MR_bool MR_CALL 
hlds__hlds_class__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_115_104_111_114_116_101_114_95_95_91_49_93_95_48_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    {
      MR_Word As_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Bs_7;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
      if (succeeded)
      {
        Bs_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = As_5;
        next_value_of_HeadVar__2_2 = Bs_7;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
hlds__hlds_class__update_ancestor_constraints_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_Ancestors_14;

    hlds__hlds_class__update_ancestor_constraints_3_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_Ancestors_14);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Ancestors_14));
  }
}

static void MR_CALL 
hlds__hlds_class__update_ancestor_constraints_5_p_0(
  MR_Word ClassTable_6,
  MR_Word TVarSet_7,
  MR_Word HLDSConstraint_8,
  MR_Word STATE_VARIABLE_Ancestors_0_11,
  MR_Word * STATE_VARIABLE_Ancestors_12)
{
  {
    MR_Word Constraint_10;
    MR_Word ClassName_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HLDSConstraint_8, (MR_Integer) 1))));
    MR_Word ArgTypes_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HLDSConstraint_8, (MR_Integer) 2))));
    MR_Integer Arity_29;
    MR_Word ClassId_30;
    MR_Word ClassDefn_31;
    MR_Word Renaming_33;
    MR_Word RenamedSupers_34;
    MR_Word RenamedParams_35;
    MR_Word Subst_36;
    MR_Word Supers_37;
    MR_Word Descendants_38;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Box conv0_ClassDefn_31;
    MR_Word Var_32;
    MR_Box conv2_STATE_VARIABLE_Ancestors_12;

    {
      Constraint_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Constraint_10, 0) = ((MR_Box) (ClassName_27));
      MR_hl_field(MR_mktag(0), Constraint_10, 1) = ((MR_Box) (ArgTypes_28));
    }
    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_28, &Arity_29);
    {
      ClassId_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ClassId_30, 0) = ((MR_Box) (ClassName_27));
      MR_hl_field(MR_mktag(0), ClassId_30, 1) = ((MR_Box) (Arity_29));
    }
    mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), ClassTable_6, ((MR_Box) (ClassId_30)), &conv0_ClassDefn_31);
    ClassDefn_31 = ((MR_Word) (conv0_ClassDefn_31));
    Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_31, (MR_Integer) 8))));
    parse_tree__prog_data__tvarset_merge_renaming_4_p_0(TVarSet_7, Var_39, &Var_32, &Renaming_33);
    Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_31, (MR_Integer) 1))));
    parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_p_0(Renaming_33, Var_40, &RenamedSupers_34);
    Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_31, (MR_Integer) 4))));
    parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_p_0(Renaming_33, Var_41, &RenamedParams_35);
    mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&hlds__hlds_class_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), RenamedParams_35, ArgTypes_28, &Subst_36);
    parse_tree__prog_type_subst__apply_subst_to_prog_constraint_list_3_p_0(Subst_36, RenamedSupers_34, &Supers_37);
    {
      Descendants_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Descendants_38, 0) = ((MR_Box) (Constraint_10));
      MR_hl_field(MR_mktag(1), Descendants_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (&hlds__hlds_class_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), Var_42, 1) = ((MR_Box) (hlds__hlds_class__update_ancestor_constraints_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_42, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_42, 3) = ((MR_Box) (ClassTable_6));
      MR_hl_field(MR_mktag(0), Var_42, 4) = ((MR_Box) (TVarSet_7));
      MR_hl_field(MR_mktag(0), Var_42, 5) = ((MR_Box) (Descendants_38));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__hlds_class_scalar_common_2[1]), Var_42, Supers_37, ((MR_Box) (STATE_VARIABLE_Ancestors_0_11)), &conv2_STATE_VARIABLE_Ancestors_12);
    *STATE_VARIABLE_Ancestors_12 = ((MR_Word) (conv2_STATE_VARIABLE_Ancestors_12));
  }
}

static void MR_CALL 
hlds__hlds_class__add_redundant_constraint_3_p_0(
  MR_Word Constraint_4,
  MR_Word STATE_VARIABLE_Redundant_0_13,
  MR_Word * STATE_VARIABLE_Redundant_14)
{
  {
    MR_bool succeeded;
    MR_Word ClassName_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraint_4, (MR_Integer) 1))));
    MR_Word ArgTypes_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraint_4, (MR_Integer) 2))));
    MR_Integer Arity_9;
    MR_Word ClassId_10;
    MR_Word Constraints0_11;
    MR_Box conv0_Constraints0_11;

    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_8, &Arity_9);
    {
      ClassId_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ClassId_10, 0) = ((MR_Box) (ClassName_7));
      MR_hl_field(MR_mktag(0), ClassId_10, 1) = ((MR_Box) (Arity_9));
    }
    succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class_scalar_common_1[1]), STATE_VARIABLE_Redundant_0_13, ((MR_Box) (ClassId_10)), &conv0_Constraints0_11);
    if (succeeded)
    {
      Constraints0_11 = ((MR_Word) (conv0_Constraints0_11));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word Constraints_12;

      mercury__set__insert_3_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), ((MR_Box) (Constraint_4)), Constraints0_11, &Constraints_12);
      mercury__map__det_update_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class_scalar_common_1[1]), ((MR_Box) (ClassId_10)), ((MR_Box) (Constraints_12)), STATE_VARIABLE_Redundant_0_13, STATE_VARIABLE_Redundant_14);
    }
    else
    {
      MR_Word Constraints_17;

      Constraints_17 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), ((MR_Box) (Constraint_4)));
      mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class_scalar_common_1[1]), ((MR_Box) (ClassId_10)), ((MR_Box) (Constraints_17)), STATE_VARIABLE_Redundant_0_13, STATE_VARIABLE_Redundant_14);
    }
  }
}

static void MR_CALL 
hlds__hlds_class__update_redundant_constraints_2_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_Redundant_14;

    hlds__hlds_class__add_redundant_constraint_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_Redundant_14);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_Redundant_14));
  }
}

static void MR_CALL 
hlds__hlds_class__update_redundant_constraints_2_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HLDSConstraint_4;

    hlds__hlds_class__init_hlds_constraint_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_HLDSConstraint_4);
    *wrapper_arg_2 = ((MR_Box) (conv1_HLDSConstraint_4));
  }
}

static void MR_CALL 
hlds__hlds_class__update_redundant_constraints_2_5_p_0(
  MR_Word ClassTable_6,
  MR_Word TVarSet_7,
  MR_Word Constraint_8,
  MR_Word STATE_VARIABLE_Redundant_0_28,
  MR_Word * STATE_VARIABLE_Redundant_29)
{
  {
    MR_Word ClassName_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraint_8, (MR_Integer) 1))));
    MR_Word ArgTypes_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraint_8, (MR_Integer) 2))));
    MR_Integer Arity_13;
    MR_Word ClassId_14;
    MR_Word ClassDefn_15;
    MR_Word ClassAncestors0_16;
    MR_Word ClassAncestors_17;
    MR_Box conv0_ClassDefn_15;

    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_12, &Arity_13);
    {
      ClassId_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ClassId_14, 0) = ((MR_Box) (ClassName_11));
      MR_hl_field(MR_mktag(0), ClassId_14, 1) = ((MR_Box) (Arity_13));
    }
    mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), ClassTable_6, ((MR_Box) (ClassId_14)), &conv0_ClassDefn_15);
    ClassDefn_15 = ((MR_Word) (conv0_ClassDefn_15));
    ClassAncestors0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_15, (MR_Integer) 3))));
    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), (MR_Word) (&hlds__hlds_class_scalar_common_2[13]), ClassAncestors0_16, &ClassAncestors_17);
    if ((ClassAncestors_17 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Redundant_29 = STATE_VARIABLE_Redundant_0_28;
    else
    {
      MR_Word ClassTVarSet_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_15, (MR_Integer) 8))));
      MR_Word ClassParams_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_15, (MR_Integer) 4))));
      MR_Word Renaming_23;
      MR_Word RenamedAncestors_24;
      MR_Word RenamedParams_25;
      MR_Word Subst_26;
      MR_Word Ancestors_27;
      MR_Word Var_22;
      MR_Box conv3_STATE_VARIABLE_Redundant_29;

      parse_tree__prog_data__tvarset_merge_renaming_4_p_0(TVarSet_7, ClassTVarSet_20, &Var_22, &Renaming_23);
      check_hlds__type_util__apply_variable_renaming_to_constraint_list_3_p_0(Renaming_23, ClassAncestors_17, &RenamedAncestors_24);
      parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_p_0(Renaming_23, ClassParams_21, &RenamedParams_25);
      mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&hlds__hlds_class_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), RenamedParams_25, ArgTypes_12, &Subst_26);
      check_hlds__type_util__apply_subst_to_constraint_list_3_p_0(Subst_26, RenamedAncestors_24, &Ancestors_27);
      mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), (MR_Word) (&hlds__hlds_class_scalar_common_2[0]), (MR_Word) (&hlds__hlds_class_scalar_common_2[14]), Ancestors_27, ((MR_Box) (STATE_VARIABLE_Redundant_0_28)), &conv3_STATE_VARIABLE_Redundant_29);
      *STATE_VARIABLE_Redundant_29 = ((MR_Word) (conv3_STATE_VARIABLE_Redundant_29));
    }
  }
}

static void MR_CALL 
hlds__hlds_class__update_constraint_map_2_4_p_0(
  MR_Word ProgConstraint_5,
  MR_Word ConstraintId_6,
  MR_Word STATE_VARIABLE_ConstraintMap_0_8,
  MR_Word * STATE_VARIABLE_ConstraintMap_9)
{
  {
    mercury__map__set_4_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_id_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), ((MR_Box) (ConstraintId_6)), ((MR_Box) (ProgConstraint_5)), STATE_VARIABLE_ConstraintMap_0_8, STATE_VARIABLE_ConstraintMap_9);
  }
}

static void MR_CALL 
hlds__hlds_class__init_hlds_constraint_2_p_0(
  MR_Word Constraint_3,
  MR_Word * HLDSConstraint_4)
{
  {
    MR_Word ClassName_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraint_3, (MR_Integer) 0))));
    MR_Word ArgTypes_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraint_3, (MR_Integer) 1))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *HLDSConstraint_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ClassName_5));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ArgTypes_6));
    }
  }
}

MR_bool MR_CALL 
hlds__hlds_class__search_hlds_constraint_list_5_p_0(
  MR_Word ConstraintMap_6,
  MR_Word ConstraintType_7,
  MR_Word GoalId_8,
  MR_Integer Count_9,
  MR_Word * Constraints_10)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_class__search_hlds_constraint_list_2_6_p_0(ConstraintMap_6, ConstraintType_7, GoalId_8, Count_9, (MR_Word) ((MR_Unsigned) 0U), Constraints_10);
    return succeeded;
  }
}

void MR_CALL 
hlds__hlds_class__lookup_hlds_constraint_list_5_p_0(
  MR_Word ConstraintMap_6,
  MR_Word ConstraintType_7,
  MR_Word GoalId_8,
  MR_Integer Count_9,
  MR_Word * Constraints_10)
{
  {
    MR_bool succeeded;
    MR_Word ConstraintsPrime_11;

    succeeded = hlds__hlds_class__search_hlds_constraint_list_2_6_p_0(ConstraintMap_6, ConstraintType_7, GoalId_8, Count_9, (MR_Word) ((MR_Unsigned) 0U), &ConstraintsPrime_11);
    if (succeeded)
      *Constraints_10 = ConstraintsPrime_11;
    else
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_class", (MR_String) "predicate \140hlds.hlds_class.lookup_hlds_constraint_list\'/5", (MR_String) "not found");
        return;
      }
    }
  }
}

static MR_bool MR_CALL 
hlds__hlds_class__search_hlds_constraint_list_2_6_p_0(
  MR_Word ConstraintMap_7,
  MR_Word ConstraintType_8,
  MR_Word GoalId_9,
  MR_Integer Count_10,
  MR_Word STATE_VARIABLE_Constraints_0_14,
  MR_Word * STATE_VARIABLE_Constraints_15)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Count_10 == (MR_Integer) 0);

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *STATE_VARIABLE_Constraints_15 = STATE_VARIABLE_Constraints_0_14;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word ConstraintId_12;
      MR_Word Constraint_13;
      MR_Word STATE_VARIABLE_Constraints_16_16;
      MR_Integer Var_17;
      MR_Integer Var_19;
      MR_Box conv0_Constraint_13;
      MR_Integer next_value_of_Count_10;
      MR_Word next_value_of_STATE_VARIABLE_Constraints_0_14;

      {
        ConstraintId_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ConstraintId_12, 0) = ((MR_Box) (ConstraintType_8));
        MR_hl_field(MR_mktag(0), ConstraintId_12, 1) = ((MR_Box) (GoalId_9));
        MR_hl_field(MR_mktag(0), ConstraintId_12, 2) = ((MR_Box) (Count_10));
      }
      succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_id_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), ConstraintMap_7, ((MR_Box) (ConstraintId_12)), &conv0_Constraint_13);
      if (succeeded)
      {
        Constraint_13 = ((MR_Word) (conv0_Constraint_13));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        Var_19 = (MR_Integer) 1;
        Var_17 = (MR_Integer) ((MR_Unsigned) Count_10 - (MR_Unsigned) Var_19);
        {
          STATE_VARIABLE_Constraints_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Constraints_16_16, 0) = ((MR_Box) (Constraint_13));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Constraints_16_16, 1) = ((MR_Box) (STATE_VARIABLE_Constraints_0_14));
        }
        // direct tailcall eliminated
        ;
        next_value_of_Count_10 = Var_17;
        next_value_of_STATE_VARIABLE_Constraints_0_14 = STATE_VARIABLE_Constraints_16_16;
        Count_10 = next_value_of_Count_10;
        STATE_VARIABLE_Constraints_0_14 = next_value_of_STATE_VARIABLE_Constraints_0_14;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
hlds__hlds_class__update_redundant_constraints_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Redundant_29;

    hlds__hlds_class__update_redundant_constraints_2_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Redundant_29);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Redundant_29));
  }
}

void MR_CALL 
hlds__hlds_class__update_redundant_constraints_5_p_0(
  MR_Word ClassTable_6,
  MR_Word TVarSet_7,
  MR_Word Constraints_8,
  MR_Word STATE_VARIABLE_Redundant_0_10,
  MR_Word * STATE_VARIABLE_Redundant_11)
{
  {
    MR_Word Var_12;
    MR_Box conv1_STATE_VARIABLE_Redundant_11;

    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (&hlds__hlds_class_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (hlds__hlds_class__update_redundant_constraints_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (ClassTable_6));
      MR_hl_field(MR_mktag(0), Var_12, 4) = ((MR_Box) (TVarSet_7));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), (MR_Word) (&hlds__hlds_class_scalar_common_2[0]), Var_12, Constraints_8, ((MR_Box) (STATE_VARIABLE_Redundant_0_10)), &conv1_STATE_VARIABLE_Redundant_11);
    *STATE_VARIABLE_Redundant_11 = ((MR_Word) (conv1_STATE_VARIABLE_Redundant_11));
  }
}

static void MR_CALL 
hlds__hlds_class__update_constraint_map_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_ConstraintMap_9;

    hlds__hlds_class__update_constraint_map_2_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ConstraintMap_9);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ConstraintMap_9));
  }
}

void MR_CALL 
hlds__hlds_class__update_constraint_map_3_p_0(
  MR_Word HLDSConstraint_4,
  MR_Word STATE_VARIABLE_ConstraintMap_0_10,
  MR_Word * STATE_VARIABLE_ConstraintMap_11)
{
  {
    MR_Word Ids_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HLDSConstraint_4, (MR_Integer) 0))));
    MR_Word ClassName_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HLDSConstraint_4, (MR_Integer) 1))));
    MR_Word ArgTypes_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HLDSConstraint_4, (MR_Integer) 2))));
    MR_Word ProgConstraint_9;
    MR_Word Var_12;
    MR_Box conv1_STATE_VARIABLE_ConstraintMap_11;

    {
      ProgConstraint_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ProgConstraint_9, 0) = ((MR_Box) (ClassName_7));
      MR_hl_field(MR_mktag(0), ProgConstraint_9, 1) = ((MR_Box) (ArgTypes_8));
    }
    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (&hlds__hlds_class_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (hlds__hlds_class__update_constraint_map_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (ProgConstraint_9));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_id_0), (MR_Word) (&hlds__hlds_class_scalar_common_2[2]), Var_12, Ids_6, ((MR_Box) (STATE_VARIABLE_ConstraintMap_0_10)), &conv1_STATE_VARIABLE_ConstraintMap_11);
    *STATE_VARIABLE_ConstraintMap_11 = ((MR_Word) (conv1_STATE_VARIABLE_ConstraintMap_11));
  }
}

void MR_CALL 
hlds__hlds_class__compare_hlds_constraints_3_p_0(
  MR_Word ConstraintA_4,
  MR_Word ConstraintB_5,
  MR_Word * CmpRes_6)
{
  {
    MR_Word ClassNameA_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConstraintA_4, (MR_Integer) 1))));
    MR_Word ArgTypesA_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConstraintA_4, (MR_Integer) 2))));
    MR_Word ClassNameB_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConstraintB_5, (MR_Integer) 1))));
    MR_Word ArgTypesB_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConstraintB_5, (MR_Integer) 2))));
    MR_Word NameCmpRes_13;

    mdbcomp__sym_name____Compare____sym_name_0_0(&NameCmpRes_13, ClassNameA_8, ClassNameB_11);
    switch (NameCmpRes_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        *CmpRes_6 = NameCmpRes_13;
        break;
      case (MR_Integer) 0:
        {
          mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_class_scalar_common_1[3]), CmpRes_6, ((MR_Box) (ArgTypesA_9)), ((MR_Box) (ArgTypesB_12)));
        }
        break;
    }
  }
}

MR_bool MR_CALL 
hlds__hlds_class__matching_constraints_2_p_0(
  MR_Word ConstraintA_3,
  MR_Word ConstraintB_4)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_12_12;
    MR_Word ClassName_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConstraintA_3, (MR_Integer) 1))));
    MR_Word ArgTypes_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConstraintA_3, (MR_Integer) 2))));
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConstraintB_4, (MR_Integer) 1))));
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConstraintB_4, (MR_Integer) 2))));

    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ClassName_6, Var_9);
    if (succeeded)
    {
      TypeInfo_12_12 = (MR_Word) (&hlds__hlds_class_scalar_common_1[3]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgTypes_7)), ((MR_Box) (Var_10)));
    }
    return succeeded;
  }
}

void MR_CALL 
hlds__hlds_class__retrieve_prog_constraint_2_p_0(
  MR_Word Constraint_3,
  MR_Word * ProgConstraint_4)
{
  {
    MR_Word ClassName_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraint_3, (MR_Integer) 1))));
    MR_Word ArgTypes_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraint_3, (MR_Integer) 2))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *ProgConstraint_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ClassName_6));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ArgTypes_7));
    }
  }
}

static void MR_CALL 
hlds__hlds_class__retrieve_prog_constraint_list_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_ProgConstraint_4;

    hlds__hlds_class__retrieve_prog_constraint_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_ProgConstraint_4);
    *wrapper_arg_2 = ((MR_Box) (conv0_ProgConstraint_4));
  }
}

void MR_CALL 
hlds__hlds_class__retrieve_prog_constraint_list_2_p_0(
  MR_Word Constraints_3,
  MR_Word * ProgConstraints_4)
{
  {
    mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__hlds_class_scalar_common_2[12]), Constraints_3, ProgConstraints_4);
  }
}

static void MR_CALL 
hlds__hlds_class__retrieve_prog_constraints_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_ProgConstraint_4;

    hlds__hlds_class__retrieve_prog_constraint_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_ProgConstraint_4);
    *wrapper_arg_2 = ((MR_Box) (conv1_ProgConstraint_4));
  }
}

static void MR_CALL 
hlds__hlds_class__retrieve_prog_constraints_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_ProgConstraint_4;

    hlds__hlds_class__retrieve_prog_constraint_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_ProgConstraint_4);
    *wrapper_arg_2 = ((MR_Box) (conv0_ProgConstraint_4));
  }
}

void MR_CALL 
hlds__hlds_class__retrieve_prog_constraints_2_p_0(
  MR_Word Constraints_3,
  MR_Word * ProgConstraints_4)
{
  {
    MR_Word Unproven_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraints_3, (MR_Integer) 0))));
    MR_Word Assumed_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraints_3, (MR_Integer) 1))));
    MR_Word UnivProgConstraints_9;
    MR_Word ExistProgConstraints_10;

    mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__hlds_class_scalar_common_2[10]), Unproven_5, &UnivProgConstraints_9);
    mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__hlds_class_scalar_common_2[11]), Assumed_6, &ExistProgConstraints_10);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *ProgConstraints_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (UnivProgConstraints_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ExistProgConstraints_10));
    }
  }
}

static void MR_CALL 
hlds__hlds_class__merge_hlds_constraints_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__3_30;

    hlds__hlds_class__IntroducedFrom__pred__merge_hlds_constraints__444__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_HeadVar__3_30);
    *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__3_30));
  }
}

static void MR_CALL 
hlds__hlds_class__merge_hlds_constraints_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_24;

    hlds__hlds_class__IntroducedFrom__pred__merge_hlds_constraints__443__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_24);
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_24));
  }
}

void MR_CALL 
hlds__hlds_class__merge_hlds_constraints_3_p_0(
  MR_Word ConstraintsA_4,
  MR_Word ConstraintsB_5,
  MR_Word * Constraints_6)
{
  {
    MR_Word UnprovenA_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConstraintsA_4, (MR_Integer) 0))));
    MR_Word AssumedA_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConstraintsA_4, (MR_Integer) 1))));
    MR_Word RedundantA_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConstraintsA_4, (MR_Integer) 2))));
    MR_Word AncestorsA_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConstraintsA_4, (MR_Integer) 3))));
    MR_Word UnprovenB_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConstraintsB_5, (MR_Integer) 0))));
    MR_Word AssumedB_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConstraintsB_5, (MR_Integer) 1))));
    MR_Word RedundantB_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConstraintsB_5, (MR_Integer) 2))));
    MR_Word AncestorsB_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConstraintsB_5, (MR_Integer) 3))));
    MR_Word Unproven_15;
    MR_Word Assumed_16;
    MR_Word Redundant_17;
    MR_Word Ancestors_18;

    Unproven_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), UnprovenA_7, UnprovenB_11);
    Assumed_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), AssumedA_8, AssumedB_12);
    mercury__map__union_4_p_1((MR_Word) (&hlds__hlds_class_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class_scalar_common_2[8]), RedundantA_9, RedundantB_13, &Redundant_17);
    mercury__map__union_4_p_1((MR_Word) (&hlds__hlds_class_scalar_common_1[2]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__hlds_class_scalar_common_2[9]), AncestorsA_10, AncestorsB_14, &Ancestors_18);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *Constraints_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Unproven_15));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Assumed_16));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Redundant_17));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Ancestors_18));
    }
  }
}

void MR_CALL 
hlds__hlds_class__make_hlds_constraint_list_4_p_0(
  MR_Word ProgConstraints_5,
  MR_Word ConstraintType_6,
  MR_Word GoalId_7,
  MR_Word * Constraints_8)
{
  {
    hlds__hlds_class__make_hlds_constraint_list_2_5_p_0(ProgConstraints_5, ConstraintType_6, GoalId_7, (MR_Integer) 1, Constraints_8);
  }
}

void MR_CALL 
hlds__hlds_class__make_body_hlds_constraints_5_p_0(
  MR_Word ClassTable_6,
  MR_Word TVarSet_7,
  MR_Word GoalId_8,
  MR_Word ProgConstraints_9,
  MR_Word * Constraints_10)
{
  {
    MR_Word UnivConstraints_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProgConstraints_9, (MR_Integer) 0))));
    MR_Word ExistConstraints_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProgConstraints_9, (MR_Integer) 1))));
    MR_Word UnprovenConstraints_13;
    MR_Word AssumedConstraints_14;

    hlds__hlds_class__make_hlds_constraint_list_2_5_p_0(UnivConstraints_11, (MR_Integer) 0, GoalId_8, (MR_Integer) 1, &UnprovenConstraints_13);
    hlds__hlds_class__make_hlds_constraint_list_2_5_p_0(ExistConstraints_12, (MR_Integer) 1, GoalId_8, (MR_Integer) 1, &AssumedConstraints_14);
    hlds__hlds_class__make_hlds_constraints_5_p_0(ClassTable_6, TVarSet_7, UnprovenConstraints_13, AssumedConstraints_14, Constraints_10);
  }
}

void MR_CALL 
hlds__hlds_class__make_head_hlds_constraints_4_p_0(
  MR_Word ClassTable_5,
  MR_Word TVarSet_6,
  MR_Word ProgConstraints_7,
  MR_Word * Constraints_8)
{
  {
    MR_Word UnivConstraints_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProgConstraints_7, (MR_Integer) 0))));
    MR_Word ExistConstraints_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProgConstraints_7, (MR_Integer) 1))));
    MR_Word GoalId_11;
    MR_Word AssumedConstraints_12;
    MR_Word UnprovenConstraints_13;

    GoalId_11 = mdbcomp__goal_path__goal_id_for_head_constraints_0_f_0();
    hlds__hlds_class__make_hlds_constraint_list_2_5_p_0(UnivConstraints_9, (MR_Integer) 1, GoalId_11, (MR_Integer) 1, &AssumedConstraints_12);
    hlds__hlds_class__make_hlds_constraint_list_2_5_p_0(ExistConstraints_10, (MR_Integer) 0, GoalId_11, (MR_Integer) 1, &UnprovenConstraints_13);
    hlds__hlds_class__make_hlds_constraints_5_p_0(ClassTable_5, TVarSet_6, UnprovenConstraints_13, AssumedConstraints_12, Constraints_8);
  }
}

static void MR_CALL 
hlds__hlds_class__make_hlds_constraint_list_2_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ConstraintType_2,
  MR_Word GoalId_3,
  MR_Integer CurArgNum_4,
  MR_Word * HeadVar__5_5)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word ProgConstraint_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ProgConstraints_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word HLDSConstraint_14;
    MR_Word HLDSConstraints_15;
    MR_Word ClassName_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProgConstraint_9, (MR_Integer) 0))));
    MR_Word ArgTypes_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProgConstraint_9, (MR_Integer) 1))));
    MR_Word Id_18;
    MR_Word Var_19;
    MR_Integer Var_21;

    {
      Id_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Id_18, 0) = ((MR_Box) (ConstraintType_2));
      MR_hl_field(MR_mktag(0), Id_18, 1) = ((MR_Box) (GoalId_3));
      MR_hl_field(MR_mktag(0), Id_18, 2) = ((MR_Box) (CurArgNum_4));
    }
    {
      Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (Id_18));
      MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      HLDSConstraint_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HLDSConstraint_14, 0) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), HLDSConstraint_14, 1) = ((MR_Box) (ClassName_16));
      MR_hl_field(MR_mktag(0), HLDSConstraint_14, 2) = ((MR_Box) (ArgTypes_17));
    }
    Var_21 = (MR_Integer) ((MR_Unsigned) CurArgNum_4 + (MR_Unsigned) (MR_Integer) 1);
    hlds__hlds_class__make_hlds_constraint_list_2_5_p_0(ProgConstraints_10, ConstraintType_2, GoalId_3, Var_21, &HLDSConstraints_15);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__5_5 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HLDSConstraint_14));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (HLDSConstraints_15));
    }
  }
}

static void MR_CALL 
hlds__hlds_class__make_hlds_constraints_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_STATE_VARIABLE_Ancestors_12;

    hlds__hlds_class__update_ancestor_constraints_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_Ancestors_12);
    *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_Ancestors_12));
  }
}

static void MR_CALL 
hlds__hlds_class__make_hlds_constraints_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Redundant_29;

    hlds__hlds_class__update_redundant_constraints_2_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Redundant_29);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Redundant_29));
  }
}

void MR_CALL 
hlds__hlds_class__make_hlds_constraints_5_p_0(
  MR_Word ClassTable_6,
  MR_Word TVarSet_7,
  MR_Word Unproven_8,
  MR_Word Assumed_9,
  MR_Word * Constraints_10)
{
  {
    MR_Word Redundant0_11;
    MR_Word Redundant_12;
    MR_Word Ancestors_13;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Box conv1_Redundant0_11;
    MR_Box conv2_Redundant_12;
    MR_Box conv4_Ancestors_13;

    {
      Var_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (&hlds__hlds_class_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (hlds__hlds_class__make_hlds_constraints_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_14, 3) = ((MR_Box) (ClassTable_6));
      MR_hl_field(MR_mktag(0), Var_14, 4) = ((MR_Box) (TVarSet_7));
    }
    Var_15 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class_scalar_common_1[1]));
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), (MR_Word) (&hlds__hlds_class_scalar_common_2[0]), Var_14, Unproven_8, ((MR_Box) (Var_15)), &conv1_Redundant0_11);
    Redundant0_11 = ((MR_Word) (conv1_Redundant0_11));
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), (MR_Word) (&hlds__hlds_class_scalar_common_2[0]), Var_14, Assumed_9, ((MR_Box) (Redundant0_11)), &conv2_Redundant_12);
    Redundant_12 = ((MR_Word) (conv2_Redundant_12));
    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (&hlds__hlds_class_scalar_common_4[1]));
      MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (hlds__hlds_class__make_hlds_constraints_5_p_0_2));
      MR_hl_field(MR_mktag(0), Var_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_17, 3) = ((MR_Box) (ClassTable_6));
      MR_hl_field(MR_mktag(0), Var_17, 4) = ((MR_Box) (TVarSet_7));
    }
    Var_18 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__hlds_class_scalar_common_1[2]));
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), (MR_Word) (&hlds__hlds_class_scalar_common_2[1]), Var_17, Assumed_9, ((MR_Box) (Var_18)), &conv4_Ancestors_13);
    Ancestors_13 = ((MR_Word) (conv4_Ancestors_13));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *Constraints_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Unproven_8));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Assumed_9));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Redundant_12));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Ancestors_13));
    }
  }
}

static void MR_CALL 
hlds__hlds_class__init_hlds_constraint_list_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HLDSConstraint_4;

    hlds__hlds_class__init_hlds_constraint_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HLDSConstraint_4);
    *wrapper_arg_2 = ((MR_Box) (conv0_HLDSConstraint_4));
  }
}

void MR_CALL 
hlds__hlds_class__init_hlds_constraint_list_2_p_0(
  MR_Word ProgConstraints_3,
  MR_Word * Constraints_4)
{
  {
    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), (MR_Word) (&hlds__hlds_class_scalar_common_2[7]), ProgConstraints_3, Constraints_4);
  }
}

void MR_CALL 
hlds__hlds_class__empty_hlds_constraints_1_p_0(
  MR_Word * Constraints_2)
{
  {
    MR_Word Var_5;
    MR_Word Var_6;

    Var_5 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class_scalar_common_1[1]));
    Var_6 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__hlds_class_scalar_common_1[2]));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *Constraints_2 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_5));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_6));
    }
  }
}

void MR_CALL 
hlds__hlds_class__num_extra_instance_args_2_p_0(
  MR_Word InstanceDefn_3,
  MR_Integer * NumExtra_4)
{
  {
    MR_Word InstanceTypes_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn_3, (MR_Integer) 1))));
    MR_Word InstanceConstraints_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn_3, (MR_Integer) 5))));
    MR_Word TypeVars_15;
    MR_Word Unconstrained_16;
    MR_Integer NumConstraints_17;
    MR_Integer NumUnconstrained_18;

    parse_tree__prog_type__type_vars_list_2_p_0(InstanceTypes_6, &TypeVars_15);
    parse_tree__prog_type__get_unconstrained_tvars_3_p_0(TypeVars_15, InstanceConstraints_10, &Unconstrained_16);
    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), InstanceConstraints_10, &NumConstraints_17);
    mercury__list__length_2_p_0((MR_Word) (&hlds__hlds_class_scalar_common_1[0]), Unconstrained_16, &NumUnconstrained_18);
    *NumExtra_4 = (MR_Integer) ((MR_Unsigned) NumConstraints_17 + (MR_Unsigned) NumUnconstrained_18);
  }
}

MR_Word MR_CALL 
hlds__hlds_class__restrict_list_elements_2_f_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word Elements_4,
  MR_Word List_5)
{
  {
    MR_Word RestrictedList_6;
    MR_Word SortedElements_7;

    mercury__set__to_sorted_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Elements_4, &SortedElements_7);
    hlds__hlds_class__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_115_116_114_105_99_116_95_108_105_115_116_95_101_108_101_109_101_110_116_115_95_50_95_95_91_49_93_95_48_4_p_0(SortedElements_7, (MR_Integer) 1, List_5, &RestrictedList_6);
    return RestrictedList_6;
  }
}

static void MR_CALL 
hlds__hlds_class__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_115_116_114_105_99_116_95_108_105_115_116_95_101_108_101_109_101_110_116_115_95_50_95_95_91_49_93_95_48_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer Index_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Box Var_27 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0));

      if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Integer Posn_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
        MR_Word Posns_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));

        succeeded = (Index_2 == Posn_10);
        if (succeeded)
        {
          MR_Word TailRestrictedXs_16;
          MR_Integer Var_17 = (MR_Integer) ((MR_Unsigned) Index_2 + (MR_Unsigned) (MR_Integer) 1);

          hlds__hlds_class__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_115_116_114_105_99_116_95_108_105_115_116_95_101_108_101_109_101_110_116_115_95_50_95_95_91_49_93_95_48_4_p_0(Posns_11, Var_17, Var_26, &TailRestrictedXs_16);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__4_4 = base;
            MR_hl_field(MR_mktag(1), base, 0) = Var_27;
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailRestrictedXs_16));
          }
        }
        else
        {
          succeeded = (Index_2 < Posn_10);
          if (succeeded)
          {
            MR_Integer Var_20 = (MR_Integer) ((MR_Unsigned) Index_2 + (MR_Unsigned) (MR_Integer) 1);
            MR_Integer next_value_of_Index_2 = Var_20;
            MR_Word next_value_of_HeadVar__3_3 = Var_26;

            // direct tailcall eliminated
            ;
            Index_2 = next_value_of_Index_2;
            HeadVar__3_3 = next_value_of_HeadVar__3_3;
            continue;
          }
          else
          {
            MR_Integer Var_22 = (MR_Integer) ((MR_Unsigned) Index_2 + (MR_Unsigned) (MR_Integer) 1);
            MR_Word next_value_of_HeadVar__1_1 = Posns_11;
            MR_Integer next_value_of_Index_2 = Var_22;

            // direct tailcall eliminated
            ;
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            Index_2 = next_value_of_Index_2;
            continue;
          }
        }
      }
    }
    break;
  }
}

static MR_bool MR_CALL 
hlds__hlds_class____Unify____ancestor_constraints_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_class____Unify____ancestor_constraints_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_class____Compare____ancestor_constraints_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_class____Compare____ancestor_constraints_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_class____Unify____class_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_class____Unify____class_table_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_class____Compare____class_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_class____Compare____class_table_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_class____Unify____constraint_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_class____Unify____constraint_id_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_class____Compare____constraint_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_class____Compare____constraint_id_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_class____Unify____constraint_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_class____Unify____constraint_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_class____Compare____constraint_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_class____Compare____constraint_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_class____Unify____constraint_proof_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_class____Unify____constraint_proof_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_class____Compare____constraint_proof_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_class____Compare____constraint_proof_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_class____Unify____constraint_proof_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_class____Unify____constraint_proof_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_class____Compare____constraint_proof_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_class____Compare____constraint_proof_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_class____Unify____constraint_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_class____Unify____constraint_type_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_class____Compare____constraint_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_class____Compare____constraint_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_class____Unify____hlds_class_argpos_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_class____Unify____hlds_class_argpos_0_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_class____Compare____hlds_class_argpos_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_class____Compare____hlds_class_argpos_0_0(&conv0_HeadVar__1_1, ((MR_Integer) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_class____Unify____hlds_class_defn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_class____Unify____hlds_class_defn_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_class____Compare____hlds_class_defn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_class____Compare____hlds_class_defn_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_class____Unify____hlds_class_fundep_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_class____Unify____hlds_class_fundep_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_class____Compare____hlds_class_fundep_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_class____Compare____hlds_class_fundep_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_class____Unify____hlds_class_fundeps_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_class____Unify____hlds_class_fundeps_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_class____Compare____hlds_class_fundeps_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_class____Compare____hlds_class_fundeps_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_class____Unify____hlds_class_interface_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_class____Unify____hlds_class_interface_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_class____Compare____hlds_class_interface_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_class____Compare____hlds_class_interface_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_class____Unify____hlds_constraint_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_class____Unify____hlds_constraint_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_class____Compare____hlds_constraint_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_class____Compare____hlds_constraint_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_class____Unify____hlds_constraints_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_class____Unify____hlds_constraints_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_class____Compare____hlds_constraints_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_class____Compare____hlds_constraints_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_class____Unify____hlds_instance_defn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_class____Unify____hlds_instance_defn_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_class____Compare____hlds_instance_defn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_class____Compare____hlds_instance_defn_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_class____Unify____instance_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_class____Unify____instance_id_0_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_class____Compare____instance_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_class____Compare____instance_id_0_0(&conv0_HeadVar__1_1, ((MR_Integer) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_class____Unify____instance_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_class____Unify____instance_table_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_class____Compare____instance_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_class____Compare____instance_table_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_class____Unify____redundant_constraints_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_class____Unify____redundant_constraints_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_class____Compare____redundant_constraints_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_class____Compare____redundant_constraints_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__hlds__hlds_class__init(void)
{
}

void mercury__hlds__hlds_class__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__hlds_class__hlds__hlds_class__type_ctor_info_ancestor_constraints_0);
	MR_register_type_ctor_info(&hlds__hlds_class__hlds__hlds_class__type_ctor_info_class_table_0);
	MR_register_type_ctor_info(&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_id_0);
	MR_register_type_ctor_info(&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_map_0);
	MR_register_type_ctor_info(&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0);
	MR_register_type_ctor_info(&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_map_0);
	MR_register_type_ctor_info(&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_type_0);
	MR_register_type_ctor_info(&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_argpos_0);
	MR_register_type_ctor_info(&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0);
	MR_register_type_ctor_info(&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_fundep_0);
	MR_register_type_ctor_info(&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_fundeps_0);
	MR_register_type_ctor_info(&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_interface_0);
	MR_register_type_ctor_info(&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0);
	MR_register_type_ctor_info(&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraints_0);
	MR_register_type_ctor_info(&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0);
	MR_register_type_ctor_info(&hlds__hlds_class__hlds__hlds_class__type_ctor_info_instance_id_0);
	MR_register_type_ctor_info(&hlds__hlds_class__hlds__hlds_class__type_ctor_info_instance_table_0);
	MR_register_type_ctor_info(&hlds__hlds_class__hlds__hlds_class__type_ctor_info_redundant_constraints_0);
}

void mercury__hlds__hlds_class__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__hlds_class__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module hlds.hlds_class.
