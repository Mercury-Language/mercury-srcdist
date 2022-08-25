/*
** Automatically generated from `direct_arg_in_out.m'
** by the Mercury compiler,
** version rotd-2022-08-25
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


// :- module transform_hlds.direct_arg_in_out.
// :- implementation.

/*
INIT mercury__transform_hlds__direct_arg_in_out__init
ENDINIT
*/

#include "transform_hlds.direct_arg_in_out.mih"


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
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
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
#include "require.mih"
#include "robdd.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.inst_lookup.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.recompute_instmap_deltas.mih"
#include "check_hlds.type_util.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.goal_util.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_error_util.mih"
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
#include "hlds.make_goal.mih"
#include "hlds.passes_aux.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
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
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_goal.mih"
#include "hlds.hlds_out.hlds_out_util.mih"




static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__direct_arg_in_out__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_hlds__hlds_module__type_ctor_info_direct_arg_proc_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__direct_arg_in_out__list__pti_list_1__plain_hlds__hlds_module__type_ctor_info_pragma_exported_proc_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__direct_arg_in_out__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__direct_arg_in_out__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__direct_arg_in_out__type_ctor_info_direct_arg_proc_in_out_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__direct_arg_in_out__one_or_more__ti_one_or_more_1builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__direct_arg_in_out__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_one_or_more__ti_one_or_more_1builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__direct_arg_in_out__list__pti_list_1__plain_hlds__hlds_class__type_ctor_info_hlds_instance_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__pti_arm_varmap_1__pseudo_1;

static const MR_FA_TypeInfo_Struct1 transform_hlds__direct_arg_in_out__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__direct_arg_in_out__bimap__ti_bimap_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__field_types_arm_varmap_1_0[2];

static const MR_DuFunctorDesc transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__du_functor_desc_arm_varmap_1_0;

static const MR_DuFunctorDescPtr transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__du_stag_ordered_arm_varmap_1_0[1];

static const MR_DuPtagLayout transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__du_ptag_ordered_arm_varmap_1[1];

static const MR_DuFunctorDescPtr transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__du_name_ordered_arm_varmap_1[1];

static const MR_Integer transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__functor_number_map_arm_varmap_1[1];

static const MR_EnumFunctorDesc transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__enum_functor_desc_can_see_all_arg_modes_0_0;

static const MR_EnumFunctorDesc transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__enum_functor_desc_can_see_all_arg_modes_0_1;

static const MR_EnumFunctorDescPtr transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__enum_ordinal_ordered_can_see_all_arg_modes_0[2];

static const MR_EnumFunctorDescPtr transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__enum_name_ordered_can_see_all_arg_modes_0[2];

static const MR_Integer transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__functor_number_map_can_see_all_arg_modes_0[2];

static const MR_FA_TypeInfo_Struct1 transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__ti_arm_varmap_1hlds__hlds_goal__type_ctor_info_case_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__direct_arg_in_out__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0one_or_more__ti_one_or_more_1builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__direct_arg_in_out__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__direct_arg_in_out__type_ctor_info_direct_arg_proc_in_out_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__direct_arg_in_out__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_PseudoTypeInfo transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__field_types_daio_info_0_0[4];

static const MR_ConstString transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__field_names_daio_info_0_0[4];

static const MR_DuFunctorDesc transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__du_functor_desc_daio_info_0_0;

static const MR_DuFunctorDescPtr transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__du_stag_ordered_daio_info_0_0[1];

static const MR_DuPtagLayout transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__du_ptag_ordered_daio_info_0[1];

static const MR_DuFunctorDescPtr transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__du_name_ordered_daio_info_0[1];

static const MR_Integer transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__functor_number_map_daio_info_0[1];

static const MR_PseudoTypeInfo transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__field_types_direct_arg_proc_in_out_0_0[2];

static const MR_DuFunctorDesc transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__du_functor_desc_direct_arg_proc_in_out_0_0;

static const MR_DuFunctorDescPtr transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__du_stag_ordered_direct_arg_proc_in_out_0_0[1];

static const MR_DuPtagLayout transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__du_ptag_ordered_direct_arg_proc_in_out_0[1];

static const MR_DuFunctorDescPtr transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__du_name_ordered_direct_arg_proc_in_out_0[1];

static const MR_Integer transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__functor_number_map_direct_arg_proc_in_out_0[1];

static const MR_FA_TypeInfo_Struct1 transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__ti_arm_varmap_1hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_EnumFunctorDesc transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__enum_functor_desc_is_mode_daio_0_0;

static const MR_EnumFunctorDesc transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__enum_functor_desc_is_mode_daio_0_1;

static const MR_EnumFunctorDesc transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__enum_functor_desc_is_mode_daio_0_2;

static const MR_EnumFunctorDescPtr transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__enum_ordinal_ordered_is_mode_daio_0[3];

static const MR_EnumFunctorDescPtr transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__enum_name_ordered_is_mode_daio_0[3];

static const MR_Integer transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__functor_number_map_is_mode_daio_0[3];

static const MR_EnumFunctorDesc transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__enum_functor_desc_is_some_direct_arg_bound_0_0;

static const MR_EnumFunctorDesc transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__enum_functor_desc_is_some_direct_arg_bound_0_1;

static const MR_EnumFunctorDescPtr transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__enum_ordinal_ordered_is_some_direct_arg_bound_0[2];

static const MR_EnumFunctorDescPtr transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__enum_name_ordered_is_some_direct_arg_bound_0[2];

static const MR_Integer transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__functor_number_map_is_some_direct_arg_bound_0[2];

static const MR_ConstString transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__type_class_id_var_names_goal_like_1[1];

static const MR_TypeClassMethod transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__type_class_id_method_ids_goal_like_1[3];

static const MR_TypeClassId transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__type_class_id_goal_like_1;

static MR_Word MR_CALL 
transform_hlds__direct_arg_in_out__IntroducedFrom__func__args_may_violate_prohibition_pieces__2193__1_1_f_0(
  MR_Integer LambdaHeadVar__1_26);

static MR_Word MR_CALL 
transform_hlds__direct_arg_in_out__IntroducedFrom__func__args_violate_prohibition_pieces__2174__1_1_f_0(
  MR_Integer LambdaHeadVar__1_26);

static MR_Word MR_CALL 
transform_hlds__direct_arg_in_out__IntroducedFrom__func__generate_problem_proc_error__2028__1_1_f_0(
  MR_Integer LambdaHeadVar__1_71);

static MR_Box MR_CALL 
transform_hlds__direct_arg_in_out__IntroducedFrom__func__expand_daio_in_branches__1730__1_2_f_0(
  MR_Word TypeClassInfo_for_goal_like_67,
  MR_Word HeadVar__2_76);

static MR_bool MR_CALL 
transform_hlds__direct_arg_in_out__IntroducedFrom__pred__expand_daio_in_goal__1145__1_2_p_0(
  MR_Word RegTypes_51,
  MR_Word HeadVar__2_141);

static MR_bool MR_CALL 
transform_hlds__direct_arg_in_out__IntroducedFrom__pred__gather_direct_arg_functors__382__1_2_p_0(
  MR_Integer Arity_11,
  MR_Integer HeadVar__2_20);

static void MR_CALL 
transform_hlds__direct_arg_in_out__ClassMethod_for_transform_hlds__direct_arg_in_out__goal_like____hlds__hlds_goal__hlds_goal__arity0______transform_hlds__direct_arg_in_out__expand_daio_in_goal_like_varmap_6_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6);

static void MR_CALL 
transform_hlds__direct_arg_in_out__ClassMethod_for_transform_hlds__direct_arg_in_out__goal_like____hlds__hlds_goal__hlds_goal__arity0______transform_hlds__direct_arg_in_out__append_goal_3_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__direct_arg_in_out__ClassMethod_for_transform_hlds__direct_arg_in_out__goal_like____hlds__hlds_goal__hlds_goal__arity0______transform_hlds__direct_arg_in_out__end_is_reachable_1_1_p_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
transform_hlds__direct_arg_in_out__ClassMethod_for_transform_hlds__direct_arg_in_out__goal_like____hlds__hlds_goal__case__arity0______transform_hlds__direct_arg_in_out__expand_daio_in_goal_like_varmap_6_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6);

static void MR_CALL 
transform_hlds__direct_arg_in_out__ClassMethod_for_transform_hlds__direct_arg_in_out__goal_like____hlds__hlds_goal__case__arity0______transform_hlds__direct_arg_in_out__append_goal_3_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__direct_arg_in_out__ClassMethod_for_transform_hlds__direct_arg_in_out__goal_like____hlds__hlds_goal__case__arity0______transform_hlds__direct_arg_in_out__end_is_reachable_1_1_p_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
transform_hlds__direct_arg_in_out____Compare____is_some_direct_arg_bound_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__direct_arg_in_out____Unify____is_some_direct_arg_bound_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__direct_arg_in_out____Compare____is_mode_daio_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__direct_arg_in_out____Unify____is_mode_daio_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__direct_arg_in_out____Compare____goal_varmap_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__direct_arg_in_out____Unify____goal_varmap_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__direct_arg_in_out____Compare____direct_arg_var_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__direct_arg_in_out____Unify____direct_arg_var_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__direct_arg_in_out____Compare____direct_arg_proc_in_out_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__direct_arg_in_out____Unify____direct_arg_proc_in_out_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__direct_arg_in_out____Compare____direct_arg_proc_in_out_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__direct_arg_in_out____Unify____direct_arg_proc_in_out_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__direct_arg_in_out____Compare____daio_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__direct_arg_in_out____Unify____daio_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__direct_arg_in_out____Compare____clone_in_out_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__direct_arg_in_out____Unify____clone_in_out_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__direct_arg_in_out____Compare____case_varmap_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__direct_arg_in_out____Unify____case_varmap_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__direct_arg_in_out____Compare____can_see_all_arg_modes_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__direct_arg_in_out____Unify____can_see_all_arg_modes_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__direct_arg_in_out____Compare____arm_varmap_1_0(
  MR_Word TypeInfo_for_G_11,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__direct_arg_in_out____Unify____arm_varmap_1_0(
  MR_Word TypeInfo_for_G_9,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__direct_arg_in_out__expand_daio_in_goal_like_varmap_6_p_0(
  MR_Word TypeClassInfo_for_goal_like_7,
  MR_Word HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6);

static void MR_CALL 
transform_hlds__direct_arg_in_out__append_goal_3_p_0(
  MR_Word TypeClassInfo_for_goal_like_4,
  MR_Box HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box * HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__direct_arg_in_out__end_is_reachable_1_p_0(
  MR_Word TypeClassInfo_for_goal_like_2,
  MR_Box HeadVar__1_1);

static MR_Box MR_CALL 
transform_hlds__direct_arg_in_out__maybe_add_foreign_proc_error_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
transform_hlds__direct_arg_in_out__maybe_add_foreign_proc_error_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__direct_arg_in_out__maybe_add_foreign_proc_error_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word DirectArgProcMap_8,
  MR_Word DirectArgProcInOutMap_9,
  MR_Word PredProcId_10,
  MR_Word STATE_VARIABLE_Specs_0_17,
  MR_Word * STATE_VARIABLE_Specs_18);

static MR_Box MR_CALL 
transform_hlds__direct_arg_in_out__args_may_violate_prohibition_pieces_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
transform_hlds__direct_arg_in_out__args_may_violate_prohibition_pieces_3_f_0(
  MR_Word OfProcDescPieces_5,
  MR_Integer HeadArg_6,
  MR_Word TailArgs_7);

static MR_Box MR_CALL 
transform_hlds__direct_arg_in_out__args_violate_prohibition_pieces_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
transform_hlds__direct_arg_in_out__args_violate_prohibition_pieces_3_f_0(
  MR_Word OfProcDescPieces_5,
  MR_Integer HeadArg_6,
  MR_Word TailArgs_7);

static void MR_CALL 
transform_hlds__direct_arg_in_out__generate_error_if_cloned_proc_is_exported_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word DirectArgProcMap_9,
  MR_Word ExportedProc0_10,
  MR_Word STATE_VARIABLE_RevExportedProcs_0_25,
  MR_Word * STATE_VARIABLE_RevExportedProcs_26,
  MR_Word STATE_VARIABLE_Specs_0_27,
  MR_Word * STATE_VARIABLE_Specs_28);

static void MR_CALL 
transform_hlds__direct_arg_in_out__transform_class_instance_proc_3_p_0(
  MR_Word DirectArgProcInOutMap_4,
  MR_Word PredProcId0_5,
  MR_Word * PredProcId_6);

static void MR_CALL 
transform_hlds__direct_arg_in_out__transform_class_instance_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__direct_arg_in_out__transform_class_instance_3_p_0(
  MR_Word DirectArgProcInOutMap_4,
  MR_Word Instance0_5,
  MR_Word * Instance_6);

static void MR_CALL 
transform_hlds__direct_arg_in_out__transform_class_instances_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__direct_arg_in_out__transform_class_instances_3_p_0(
  MR_Word DirectArgProcInOutMap_4,
  MR_Word Instances0_5,
  MR_Word * Instances_6);

static void MR_CALL 
transform_hlds__direct_arg_in_out__transform_class_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__direct_arg_in_out__transform_class_3_p_0(
  MR_Word DirectArgProcInOutMap_4,
  MR_Word Class0_5,
  MR_Word * Class_6);

static void MR_CALL 
transform_hlds__direct_arg_in_out__maybe_transform_direct_arg_in_out_calls_in_proc_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__direct_arg_in_out__maybe_transform_direct_arg_in_out_calls_in_proc_11_p_0(
  MR_Word DirectArgProcMap_12,
  MR_Word DirectArgProcInOutMap_13,
  MR_Word CloneInOutMap_14,
  MR_Word PredId_15,
  MR_Integer ProcId_16,
  MR_Word STATE_VARIABLE_ProcInfo_0_20,
  MR_Word * STATE_VARIABLE_ProcInfo_21,
  MR_Word STATE_VARIABLE_ModuleInfo_0_22,
  MR_Word * STATE_VARIABLE_ModuleInfo_23,
  MR_Word STATE_VARIABLE_Specs_0_24,
  MR_Word * STATE_VARIABLE_Specs_25);

static void MR_CALL 
transform_hlds__direct_arg_in_out__expand_daio_in_if_then_else_12_p_0(
  MR_Word GoalInfo0_13,
  MR_Word Cond0_14,
  MR_Word * Cond_15,
  MR_Word Then0_16,
  MR_Word * Then_17,
  MR_Word Else0_18,
  MR_Word * Else_19,
  MR_Word InstMap0_20,
  MR_Word InitVarMap_21,
  MR_Word * MergedVarMap_22,
  MR_Word STATE_VARIABLE_Info_0_44,
  MR_Word * STATE_VARIABLE_Info_45);

static void MR_CALL 
transform_hlds__direct_arg_in_out__expand_daio_in_conj_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word InstMap0_3,
  MR_Word STATE_VARIABLE_VarMap_0_4,
  MR_Word * STATE_VARIABLE_VarMap_5,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7);

static MR_bool MR_CALL 
transform_hlds__direct_arg_in_out__expand_daio_in_goal_7_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
transform_hlds__direct_arg_in_out__expand_daio_in_goal_7_p_0(
  MR_Word Goal0_8,
  MR_Word * Goal_9,
  MR_Word InstMap0_10,
  MR_Word STATE_VARIABLE_VarMap_0_116,
  MR_Word * STATE_VARIABLE_VarMap_117,
  MR_Word STATE_VARIABLE_Info_0_118,
  MR_Word * STATE_VARIABLE_Info_119);

static MR_Box MR_CALL 
transform_hlds__direct_arg_in_out__expand_daio_in_branches_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__direct_arg_in_out__expand_daio_in_branches_8_p_0(
  MR_Word TypeClassInfo_for_goal_like_67,
  MR_Word GoalInfo0_9,
  MR_Word InstMap0_10,
  MR_Word Arms0_11,
  MR_Word * Arms_12,
  MR_Word InitVarMap_13,
  MR_Word * MergedVarMap_14,
  MR_Word STATE_VARIABLE_Info_0_27,
  MR_Word * STATE_VARIABLE_Info_28);

static void MR_CALL 
transform_hlds__direct_arg_in_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_111_114_105_103_95_118_97_114_115_95_95_91_49_93_95_48_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_OrigVars_0_2,
  MR_Word * STATE_VARIABLE_OrigVars_3);

static void MR_CALL 
transform_hlds__direct_arg_in_out__merge_branch_goals_varmaps_7_p_0(
  MR_Word TypeClassInfo_for_goal_like_31,
  MR_Word EntryVarMap_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_GoalsVarMaps_0_4,
  MR_Word * STATE_VARIABLE_GoalsVarMaps_5,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7);

static void MR_CALL 
transform_hlds__direct_arg_in_out__add_assign_of_merge_var_4_p_0(
  MR_Word TypeClassInfo_for_goal_like_22,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static MR_Word MR_CALL 
transform_hlds__direct_arg_in_out__entry_var_is_ever_changed_3_f_0(
  MR_Word TypeClassInfo_for_goal_like_16,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
transform_hlds__direct_arg_in_out__expand_daio_in_goal_likes_varmaps_6_p_0(
  MR_Word TypeClassInfo_for_goal_like_22,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word InstMap0_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6);

static void MR_CALL 
transform_hlds__direct_arg_in_out__expand_daio_in_unify_8_p_0(
  MR_Word GoalInfo0_9,
  MR_Word GoalExpr0_10,
  MR_Word * GoalExpr_11,
  MR_Word InstMap0_12,
  MR_Word STATE_VARIABLE_VarMap_0_81,
  MR_Word * STATE_VARIABLE_VarMap_82,
  MR_Word STATE_VARIABLE_Info_0_83,
  MR_Word * STATE_VARIABLE_Info_84);

static void MR_CALL 
transform_hlds__direct_arg_in_out__find_named_ctor_repn_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word SymName_2,
  MR_Integer Arity_3,
  MR_Word * SearchCtor_4);

static void MR_CALL 
transform_hlds__direct_arg_in_out__clone_in_out_args_in_call_foreign_proc_10_p_0(
  MR_Integer CurArgNum_1,
  MR_Integer HeadInOutArg_2,
  MR_Word TailInOutArgs_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * Args_6,
  MR_Word STATE_VARIABLE_VarMap_0_7,
  MR_Word * STATE_VARIABLE_VarMap_8,
  MR_Word STATE_VARIABLE_Info_0_9,
  MR_Word * STATE_VARIABLE_Info_10);

static MR_Box MR_CALL 
transform_hlds__direct_arg_in_out__clone_in_out_args_in_generic_call_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__direct_arg_in_out__clone_in_out_args_in_generic_call_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_VarMap_0_5,
  MR_Word * STATE_VARIABLE_VarMap_6,
  MR_Word STATE_VARIABLE_Info_0_7,
  MR_Word * STATE_VARIABLE_Info_8);

static void MR_CALL 
transform_hlds__direct_arg_in_out__clone_in_out_args_in_plain_call_9_p_0(
  MR_Integer CurArgNum_1,
  MR_Integer HeadInOutArg_2,
  MR_Word TailInOutArgs_3,
  MR_Word HeadVar__4_4,
  MR_Word * Vars_5,
  MR_Word STATE_VARIABLE_VarMap_0_6,
  MR_Word * STATE_VARIABLE_VarMap_7,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9);

static void MR_CALL 
transform_hlds__direct_arg_in_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_97_110_100_95_114_101_99_111_114_100_95_110_101_119_95_99_108_111_110_101_95_118_97_114_95_95_91_49_93_95_48_7_p_0(
  MR_Word HeadVar0_9,
  MR_Word * CloneVar_10,
  MR_Word STATE_VARIABLE_VarMap_0_16,
  MR_Word * STATE_VARIABLE_VarMap_17,
  MR_Word STATE_VARIABLE_Info_0_18,
  MR_Word * STATE_VARIABLE_Info_19);

static void MR_CALL 
transform_hlds__direct_arg_in_out__make_new_clone_var_4_p_0(
  MR_Word OldVar_5,
  MR_Word * NewVar_6,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17);

static void MR_CALL 
transform_hlds__direct_arg_in_out__replace_cloned_headvars_6_p_0(
  MR_Word VarMap_1,
  MR_Integer CurArgNum_2,
  MR_Integer HeadInOutArg_3,
  MR_Word TailInOutArgs_4,
  MR_Word HeadVar__5_5,
  MR_Word * Vars_6);

static void MR_CALL 
transform_hlds__direct_arg_in_out__transform_direct_arg_in_out_calls_in_pred_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
transform_hlds__direct_arg_in_out__transform_direct_arg_in_out_calls_in_pred_8_p_0(
  MR_Word DirectArgProcMap_9,
  MR_Word DirectArgProcInOutMap_10,
  MR_Word CloneInOutMap_11,
  MR_Word PredId_12,
  MR_Word STATE_VARIABLE_ModuleInfo_0_19,
  MR_Word * STATE_VARIABLE_ModuleInfo_20,
  MR_Word STATE_VARIABLE_Specs_0_21,
  MR_Word * STATE_VARIABLE_Specs_22);

static MR_Word MR_CALL 
transform_hlds__direct_arg_in_out__clobber_daio_arg_inst_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word Inst0_5);

static MR_Box MR_CALL 
transform_hlds__direct_arg_in_out__clobber_daio_bound_inst_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
transform_hlds__direct_arg_in_out__clobber_daio_bound_inst_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word BoundInst_5);

static MR_Box MR_CALL 
transform_hlds__direct_arg_in_out__make_direct_arg_clone_or_spec_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__direct_arg_in_out__make_direct_arg_clone_or_spec_10_p_0(
  MR_Word PredProcId_11,
  MR_Word DirectArgProc_12,
  MR_Word STATE_VARIABLE_DirectArgInOutMap_0_22,
  MR_Word * STATE_VARIABLE_DirectArgInOutMap_23,
  MR_Word STATE_VARIABLE_CloneInOutMap_0_24,
  MR_Word * STATE_VARIABLE_CloneInOutMap_25,
  MR_Word STATE_VARIABLE_ModuleInfo_0_26,
  MR_Word * STATE_VARIABLE_ModuleInfo_27,
  MR_Word STATE_VARIABLE_Specs_0_28,
  MR_Word * STATE_VARIABLE_Specs_29);

static void MR_CALL 
transform_hlds__direct_arg_in_out__make_direct_arg_in_out_clone_7_p_0(
  MR_Word PredProcId_8,
  MR_Word OoMInOutArgs_9,
  MR_Word * ProcInOut_10,
  MR_Word STATE_VARIABLE_CloneInOutMap_0_124,
  MR_Word * STATE_VARIABLE_CloneInOutMap_125,
  MR_Word STATE_VARIABLE_ModuleInfo_0_126,
  MR_Word * STATE_VARIABLE_ModuleInfo_127);

static MR_Box MR_CALL 
transform_hlds__direct_arg_in_out__clone_daio_pred_proc_args_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__direct_arg_in_out__clone_daio_pred_proc_args_12_p_0(
  MR_Word ModuleInfo_13,
  MR_Integer CurArgNum_14,
  MR_Integer HeadArgPosn_15,
  MR_Word TailArgPosns_16,
  MR_Word Types_17,
  MR_Word Vars_18,
  MR_Word Modes_19,
  MR_Word * CloneTypes_20,
  MR_Word * CloneVars_21,
  MR_Word * CloneModes_22,
  MR_Word STATE_VARIABLE_VarTypes_0_45,
  MR_Word * STATE_VARIABLE_VarTypes_46);

static void MR_CALL 
transform_hlds__direct_arg_in_out__do_direct_arg_in_out_transform_in_module_4_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__direct_arg_in_out__do_direct_arg_in_out_transform_in_module_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__direct_arg_in_out__do_direct_arg_in_out_transform_in_module_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__direct_arg_in_out__do_direct_arg_in_out_transform_in_module_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8,
  MR_Box wrapper_arg_9,
  MR_Box * wrapper_arg_10);

static void MR_CALL 
transform_hlds__direct_arg_in_out__do_direct_arg_in_out_transform_in_module_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__direct_arg_in_out__find_direct_arg_in_out_posns_7_p_0(
  MR_Word ModuleInfo_1,
  MR_Word VarTypes_2,
  MR_Integer CurArgNum_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7);

static void MR_CALL 
transform_hlds__direct_arg_in_out__is_direct_arg_in_out_posn_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word VarTypes_7,
  MR_Word Var_8,
  MR_Word Mode_9,
  MR_Word * IsDAIO_10);

static void MR_CALL 
transform_hlds__direct_arg_in_out__some_bound_inst_has_direct_arg_out_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Word FreeArgDirectArgFunctors_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5);

static void MR_CALL 
transform_hlds__direct_arg_in_out__some_bound_inst_has_direct_arg_free_4_p_0(
  MR_Word ModuleInfo_1,
  MR_Word DirectArgFunctors_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static MR_bool MR_CALL 
transform_hlds__direct_arg_in_out__gather_direct_arg_functors_3_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
transform_hlds__direct_arg_in_out__gather_direct_arg_functors_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_DirectArgFunctors_0_2,
  MR_Word * STATE_VARIABLE_DirectArgFunctors_3);

static MR_bool MR_CALL 
transform_hlds__direct_arg_in_out____Unify____arm_varmap_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
transform_hlds__direct_arg_in_out____Compare____arm_varmap_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
transform_hlds__direct_arg_in_out____Unify____can_see_all_arg_modes_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__direct_arg_in_out____Compare____can_see_all_arg_modes_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__direct_arg_in_out____Unify____case_varmap_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__direct_arg_in_out____Compare____case_varmap_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__direct_arg_in_out____Unify____clone_in_out_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__direct_arg_in_out____Compare____clone_in_out_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__direct_arg_in_out____Unify____daio_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__direct_arg_in_out____Compare____daio_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__direct_arg_in_out____Unify____direct_arg_proc_in_out_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__direct_arg_in_out____Compare____direct_arg_proc_in_out_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__direct_arg_in_out____Unify____direct_arg_proc_in_out_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__direct_arg_in_out____Compare____direct_arg_proc_in_out_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__direct_arg_in_out____Unify____direct_arg_var_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__direct_arg_in_out____Compare____direct_arg_var_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__direct_arg_in_out____Unify____goal_varmap_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__direct_arg_in_out____Compare____goal_varmap_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__direct_arg_in_out____Unify____is_mode_daio_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__direct_arg_in_out____Compare____is_mode_daio_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__direct_arg_in_out____Unify____is_some_direct_arg_bound_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__direct_arg_in_out____Compare____is_some_direct_arg_bound_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__direct_arg_in_out__ClassMethod_for_transform_hlds__direct_arg_in_out__goal_like____hlds__hlds_goal__case__arity0______transform_hlds__direct_arg_in_out__end_is_reachable_1_1_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__direct_arg_in_out__ClassMethod_for_transform_hlds__direct_arg_in_out__goal_like____hlds__hlds_goal__case__arity0______transform_hlds__direct_arg_in_out__append_goal_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__direct_arg_in_out__ClassMethod_for_transform_hlds__direct_arg_in_out__goal_like____hlds__hlds_goal__case__arity0______transform_hlds__direct_arg_in_out__expand_daio_in_goal_like_varmap_6_6_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static MR_bool MR_CALL 
transform_hlds__direct_arg_in_out__ClassMethod_for_transform_hlds__direct_arg_in_out__goal_like____hlds__hlds_goal__hlds_goal__arity0______transform_hlds__direct_arg_in_out__end_is_reachable_1_1_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__direct_arg_in_out__ClassMethod_for_transform_hlds__direct_arg_in_out__goal_like____hlds__hlds_goal__hlds_goal__arity0______transform_hlds__direct_arg_in_out__append_goal_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__direct_arg_in_out__ClassMethod_for_transform_hlds__direct_arg_in_out__goal_like____hlds__hlds_goal__hlds_goal__arity0______transform_hlds__direct_arg_in_out__expand_daio_in_goal_like_varmap_6_6_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);


static /* final */ const MR_Box transform_hlds__direct_arg_in_out_scalar_common_1[107][2];

static /* final */ const MR_Box transform_hlds__direct_arg_in_out_scalar_common_2[10][3];

static /* final */ const MR_Box transform_hlds__direct_arg_in_out_scalar_common_3[2][1];

static /* final */ const MR_Box transform_hlds__direct_arg_in_out_scalar_common_4[3][5];

static /* final */ const MR_Box transform_hlds__direct_arg_in_out_scalar_common_5[1][10];

static /* final */ const MR_Box transform_hlds__direct_arg_in_out_scalar_common_6[1][13];

static /* final */ const MR_Box transform_hlds__direct_arg_in_out_scalar_common_7[1][11];

static /* final */ const MR_Box transform_hlds__direct_arg_in_out_scalar_common_8[7][6];

static /* final */ const MR_Box transform_hlds__direct_arg_in_out_scalar_common_9[1][14];

static /* final */ const MR_Integer transform_hlds__direct_arg_in_out_scalar_common_10[1][2];

static /* final */ const MR_Box transform_hlds__direct_arg_in_out_scalar_common_11[1][9];




static /* final */ const MR_Box transform_hlds__direct_arg_in_out_scalar_common_1[107][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_pragma_exported_proc_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   5 */
  {
    ((MR_Box) (base_typeclass_info_transform_hlds__direct_arg_in_out__goal_like__arity1__hlds__hlds_goal__hlds_goal__arity0__)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row   6 */
  {
    ((MR_Box) (base_typeclass_info_transform_hlds__direct_arg_in_out__goal_like__arity1__hlds__hlds_goal__case__arity0__)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__type_ctor_info_arm_varmap_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0))
  },
  /* row   8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row   9 */
  {
    ((MR_Box) (&transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__type_ctor_info_arm_varmap_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the compiler cannot implement"))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "argument passing for the"))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "argument of"))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__direct_arg_in_out_scalar_common_1[12]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  14 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "to apply this special handling or not."))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__direct_arg_in_out_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__direct_arg_in_out_scalar_common_1[14])))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "prevents the compiler from knowing whether"))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__direct_arg_in_out_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__direct_arg_in_out_scalar_common_1[16])))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "containing either abstract insts or inst vars,"))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__direct_arg_in_out_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__direct_arg_in_out_scalar_common_1[18])))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "but the mode of this argument,"))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__direct_arg_in_out_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__direct_arg_in_out_scalar_common_1[20])))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "used with partially instantiated data structures,"))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__direct_arg_in_out_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__direct_arg_in_out_scalar_common_1[22])))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "which requires special handling when"))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__direct_arg_in_out_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__direct_arg_in_out_scalar_common_1[24])))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "data representations optimization,"))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__direct_arg_in_out_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__direct_arg_in_out_scalar_common_1[26])))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "direct_arg"))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__direct_arg_in_out_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__direct_arg_in_out_scalar_common_1[28])))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "uses the"))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__direct_arg_in_out_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__direct_arg_in_out_scalar_common_1[30])))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "because the type of this argument"))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__direct_arg_in_out_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__direct_arg_in_out_scalar_common_1[32])))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__direct_arg_in_out_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__direct_arg_in_out_scalar_common_1[34])))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__direct_arg_in_out_scalar_common_1[11]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__direct_arg_in_out_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__direct_arg_in_out_scalar_common_1[37])))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "arguments of"))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__direct_arg_in_out_scalar_common_1[39]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "prevent the compiler from knowing whether"))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__direct_arg_in_out_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__direct_arg_in_out_scalar_common_1[16])))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__direct_arg_in_out_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__direct_arg_in_out_scalar_common_1[42])))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "but the modes of these arguments,"))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__direct_arg_in_out_scalar_common_1[44]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__direct_arg_in_out_scalar_common_1[43])))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__direct_arg_in_out_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__direct_arg_in_out_scalar_common_1[45])))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__direct_arg_in_out_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__direct_arg_in_out_scalar_common_1[46])))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__direct_arg_in_out_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__direct_arg_in_out_scalar_common_1[47])))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__direct_arg_in_out_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__direct_arg_in_out_scalar_common_1[48])))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "use the"))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__direct_arg_in_out_scalar_common_1[50]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__direct_arg_in_out_scalar_common_1[49])))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "because the types of these arguments"))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__direct_arg_in_out_scalar_common_1[52]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__direct_arg_in_out_scalar_common_1[51])))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__direct_arg_in_out_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__direct_arg_in_out_scalar_common_1[53])))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the C code for"))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "cannot be exported to C"))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "as"))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "because"))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "data representation optimization."))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__direct_arg_in_out_scalar_common_1[59]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__direct_arg_in_out_scalar_common_1[14])))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__direct_arg_in_out_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__direct_arg_in_out_scalar_common_1[60])))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "and the"))
  },
  /* row  63 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__direct_arg_in_out_scalar_common_1[62]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__direct_arg_in_out_scalar_common_1[61])))
  },
  /* row  64 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "partially instantiated data structures"))
  },
  /* row  65 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__direct_arg_in_out_scalar_common_1[64]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__direct_arg_in_out_scalar_common_1[63])))
  },
  /* row  66 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "due to interactions between its use of"))
  },
  /* row  67 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__direct_arg_in_out_scalar_common_1[66]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__direct_arg_in_out_scalar_common_1[65])))
  },
  /* row  68 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "a nonstandard and undocumented calling convention"))
  },
  /* row  69 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__direct_arg_in_out_scalar_common_1[68]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__direct_arg_in_out_scalar_common_1[67])))
  },
  /* row  70 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "has"))
  },
  /* row  71 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__direct_arg_in_out_scalar_common_1[70]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__direct_arg_in_out_scalar_common_1[69])))
  },
  /* row  72 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "partially instantiated terms."))
  },
  /* row  73 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__direct_arg_in_out_scalar_common_1[72]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  74 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "and whose modes indicate that they fill in"))
  },
  /* row  75 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__direct_arg_in_out_scalar_common_1[74]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__direct_arg_in_out_scalar_common_1[73])))
  },
  /* row  76 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__direct_arg_in_out_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__direct_arg_in_out_scalar_common_1[75])))
  },
  /* row  77 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__direct_arg_in_out_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__direct_arg_in_out_scalar_common_1[76])))
  },
  /* row  78 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "whose types use the"))
  },
  /* row  79 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__direct_arg_in_out_scalar_common_1[78]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__direct_arg_in_out_scalar_common_1[77])))
  },
  /* row  80 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "may not have any arguments"))
  },
  /* row  81 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__direct_arg_in_out_scalar_common_1[80]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__direct_arg_in_out_scalar_common_1[79])))
  },
  /* row  82 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row  83 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__direct_arg_in_out_scalar_common_1[82]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__direct_arg_in_out_scalar_common_1[81])))
  },
  /* row  84 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 29U)),
    ((MR_Box) ((MR_String) "foreign_proc"))
  },
  /* row  85 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__direct_arg_in_out_scalar_common_1[84]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__direct_arg_in_out_scalar_common_1[83])))
  },
  /* row  86 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: a procedure implemented using a"))
  },
  /* row  87 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__direct_arg_in_out_scalar_common_1[86]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__direct_arg_in_out_scalar_common_1[85])))
  },
  /* row  88 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "of"))
  },
  /* row  89 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__direct_arg_in_out_scalar_common_1[88]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  90 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  91 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__direct_arg_in_out_scalar_common_1[90]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__direct_arg_in_out_scalar_common_1[14])))
  },
  /* row  92 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  93 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row  94 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__direct_arg_in_out_scalar_common_1[93]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__direct_arg_in_out_scalar_common_1[92])))
  },
  /* row  95 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__direct_arg_in_out_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__direct_arg_in_out_scalar_common_1[94])))
  },
  /* row  96 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "as well."))
  },
  /* row  97 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__direct_arg_in_out_scalar_common_1[96]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__direct_arg_in_out_scalar_common_1[14])))
  },
  /* row  98 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Argument"))
  },
  /* row  99 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "violates this prohibition"))
  },
  /* row 100 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__direct_arg_in_out_scalar_common_1[99]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Arguments"))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__direct_arg_in_out_scalar_common_1[101]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 103 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "violate this prohibition"))
  },
  /* row 104 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__direct_arg_in_out_scalar_common_1[103]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 105 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "may violate this prohibition"))
  },
  /* row 106 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__direct_arg_in_out_scalar_common_1[105]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box transform_hlds__direct_arg_in_out_scalar_common_2[10][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__type_ctor_info_direct_arg_proc_in_out_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__direct_arg_in_out_scalar_common_1[2]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__bimap__bimap__type_ctor_info_bimap_2)),
    ((MR_Box) (&transform_hlds__direct_arg_in_out_scalar_common_1[4])),
    ((MR_Box) (&transform_hlds__direct_arg_in_out_scalar_common_1[4]))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 3U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   4 */
  {
    ((MR_Box) (&transform_hlds__direct_arg_in_out_scalar_common_6[0])),
    ((MR_Box) (transform_hlds__direct_arg_in_out__do_direct_arg_in_out_transform_in_module_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&transform_hlds__direct_arg_in_out_scalar_common_4[1])),
    ((MR_Box) (transform_hlds__direct_arg_in_out__make_direct_arg_clone_or_spec_10_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&transform_hlds__direct_arg_in_out_scalar_common_4[1])),
    ((MR_Box) (transform_hlds__direct_arg_in_out__args_violate_prohibition_pieces_3_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&transform_hlds__direct_arg_in_out_scalar_common_4[1])),
    ((MR_Box) (transform_hlds__direct_arg_in_out__args_may_violate_prohibition_pieces_3_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&transform_hlds__direct_arg_in_out_scalar_common_4[1])),
    ((MR_Box) (transform_hlds__direct_arg_in_out__maybe_add_foreign_proc_error_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&transform_hlds__direct_arg_in_out_scalar_common_4[1])),
    ((MR_Box) (transform_hlds__direct_arg_in_out__maybe_add_foreign_proc_error_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__direct_arg_in_out_scalar_common_3[2][1] = {
  /* row   0 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
  /* row   1 */
  {
    ((MR_Box) ((MR_String) "direct_arg_in_out_call"))
  },
};

static /* final */ const MR_Box transform_hlds__direct_arg_in_out_scalar_common_4[3][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_reg_type_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_reg_type_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__direct_arg_in_out_scalar_common_5[1][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__direct_arg_in_out__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_hlds__hlds_module__type_ctor_info_direct_arg_proc_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_pragma_exported_proc_0)),
    ((MR_Box) (&transform_hlds__direct_arg_in_out__list__pti_list_1__plain_hlds__hlds_module__type_ctor_info_pragma_exported_proc_0)),
    ((MR_Box) (&transform_hlds__direct_arg_in_out__list__pti_list_1__plain_hlds__hlds_module__type_ctor_info_pragma_exported_proc_0)),
    ((MR_Box) (&transform_hlds__direct_arg_in_out__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&transform_hlds__direct_arg_in_out__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box transform_hlds__direct_arg_in_out_scalar_common_6[1][13] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_direct_arg_proc_0)),
    ((MR_Box) (&transform_hlds__direct_arg_in_out__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__direct_arg_in_out__type_ctor_info_direct_arg_proc_in_out_0)),
    ((MR_Box) (&transform_hlds__direct_arg_in_out__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__direct_arg_in_out__type_ctor_info_direct_arg_proc_in_out_0)),
    ((MR_Box) (&transform_hlds__direct_arg_in_out__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_one_or_more__ti_one_or_more_1builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__direct_arg_in_out__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_one_or_more__ti_one_or_more_1builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__direct_arg_in_out__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&transform_hlds__direct_arg_in_out__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box transform_hlds__direct_arg_in_out_scalar_common_7[1][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&transform_hlds__direct_arg_in_out__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_hlds__hlds_module__type_ctor_info_direct_arg_proc_0)),
    ((MR_Box) (&transform_hlds__direct_arg_in_out__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__direct_arg_in_out__type_ctor_info_direct_arg_proc_in_out_0)),
    ((MR_Box) (&transform_hlds__direct_arg_in_out__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_one_or_more__ti_one_or_more_1builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__direct_arg_in_out__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&transform_hlds__direct_arg_in_out__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box transform_hlds__direct_arg_in_out_scalar_common_8[7][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__direct_arg_in_out__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__direct_arg_in_out__type_ctor_info_direct_arg_proc_in_out_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__direct_arg_in_out__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__direct_arg_in_out__type_ctor_info_direct_arg_proc_in_out_0)),
    ((MR_Box) (&transform_hlds__direct_arg_in_out__list__pti_list_1__plain_hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&transform_hlds__direct_arg_in_out__list__pti_list_1__plain_hlds__hlds_class__type_ctor_info_hlds_instance_defn_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (&transform_hlds__direct_arg_in_out_scalar_common_10[0])),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__pti_arm_varmap_1__pseudo_1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__direct_arg_in_out__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__direct_arg_in_out__type_ctor_info_direct_arg_proc_in_out_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row   6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__direct_arg_in_out__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__direct_arg_in_out__type_ctor_info_direct_arg_proc_in_out_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0))
  },
};

static /* final */ const MR_Box transform_hlds__direct_arg_in_out_scalar_common_9[1][14] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 11)),
    ((MR_Box) (&transform_hlds__direct_arg_in_out__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_hlds__hlds_module__type_ctor_info_direct_arg_proc_0)),
    ((MR_Box) (&transform_hlds__direct_arg_in_out__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__direct_arg_in_out__type_ctor_info_direct_arg_proc_in_out_0)),
    ((MR_Box) (&transform_hlds__direct_arg_in_out__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_one_or_more__ti_one_or_more_1builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__direct_arg_in_out__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&transform_hlds__direct_arg_in_out__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Integer transform_hlds__direct_arg_in_out_scalar_common_10[1][2] = {
  /* row   0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 67631
  },
};

static /* final */ const MR_Box transform_hlds__direct_arg_in_out_scalar_common_11[1][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__direct_arg_in_out__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_hlds__hlds_module__type_ctor_info_direct_arg_proc_0)),
    ((MR_Box) (&transform_hlds__direct_arg_in_out__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__direct_arg_in_out__type_ctor_info_direct_arg_proc_in_out_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__direct_arg_in_out__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&transform_hlds__direct_arg_in_out__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__direct_arg_in_out__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_hlds__hlds_module__type_ctor_info_direct_arg_proc_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_direct_arg_proc_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__direct_arg_in_out__list__pti_list_1__plain_hlds__hlds_module__type_ctor_info_pragma_exported_proc_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_pragma_exported_proc_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__direct_arg_in_out__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__direct_arg_in_out__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__direct_arg_in_out__type_ctor_info_direct_arg_proc_in_out_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_PseudoTypeInfo) (&transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__type_ctor_info_direct_arg_proc_in_out_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__direct_arg_in_out__one_or_more__ti_one_or_more_1builtin__type_ctor_info_int_0 = {
  &mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__direct_arg_in_out__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_one_or_more__ti_one_or_more_1builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_PseudoTypeInfo) (&transform_hlds__direct_arg_in_out__one_or_more__ti_one_or_more_1builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__direct_arg_in_out__list__pti_list_1__plain_hlds__hlds_class__type_ctor_info_hlds_instance_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__pti_arm_varmap_1__pseudo_1 = {
  &transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__type_ctor_info_arm_varmap_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__direct_arg_in_out__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__direct_arg_in_out__bimap__ti_bimap_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__bimap__bimap__type_ctor_info_bimap_2,
  {
    (MR_TypeInfo) (&transform_hlds__direct_arg_in_out__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&transform_hlds__direct_arg_in_out__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_PseudoTypeInfo transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__field_types_arm_varmap_1_0[2] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) (&transform_hlds__direct_arg_in_out__bimap__ti_bimap_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_DuFunctorDesc transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__du_functor_desc_arm_varmap_1_0 = {
  (MR_String) "arm_varmap",
  INT16_C(2),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__field_types_arm_varmap_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__du_stag_ordered_arm_varmap_1_0[1] = {
  &transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__du_functor_desc_arm_varmap_1_0
};

static const MR_DuPtagLayout transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__du_ptag_ordered_arm_varmap_1[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__du_stag_ordered_arm_varmap_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__du_name_ordered_arm_varmap_1[1] = {
  &transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__du_functor_desc_arm_varmap_1_0
};

static const MR_Integer transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__functor_number_map_arm_varmap_1[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__type_ctor_info_arm_varmap_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__direct_arg_in_out____Unify____arm_varmap_1_0_10001)),
  ((MR_Box) (transform_hlds__direct_arg_in_out____Compare____arm_varmap_1_0_10001)),
  (MR_String) "transform_hlds.direct_arg_in_out",
  (MR_String) "arm_varmap",
  { transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__du_name_ordered_arm_varmap_1 },
  { transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__du_ptag_ordered_arm_varmap_1 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__functor_number_map_arm_varmap_1,

};

static const MR_EnumFunctorDesc transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__enum_functor_desc_can_see_all_arg_modes_0_0 = {
  (MR_String) "cannot_see_all_arg_modes",
  INT32_C(0)
};

static const MR_EnumFunctorDesc transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__enum_functor_desc_can_see_all_arg_modes_0_1 = {
  (MR_String) "can_see_all_arg_modes",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__enum_ordinal_ordered_can_see_all_arg_modes_0[2] = {
  &transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__enum_functor_desc_can_see_all_arg_modes_0_0,
  &transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__enum_functor_desc_can_see_all_arg_modes_0_1
};

static const MR_EnumFunctorDescPtr transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__enum_name_ordered_can_see_all_arg_modes_0[2] = {
  &transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__enum_functor_desc_can_see_all_arg_modes_0_1,
  &transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__enum_functor_desc_can_see_all_arg_modes_0_0
};

static const MR_Integer transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__functor_number_map_can_see_all_arg_modes_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__type_ctor_info_can_see_all_arg_modes_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__direct_arg_in_out____Unify____can_see_all_arg_modes_0_0_10001)),
  ((MR_Box) (transform_hlds__direct_arg_in_out____Compare____can_see_all_arg_modes_0_0_10001)),
  (MR_String) "transform_hlds.direct_arg_in_out",
  (MR_String) "can_see_all_arg_modes",
  { transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__enum_name_ordered_can_see_all_arg_modes_0 },
  { transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__enum_ordinal_ordered_can_see_all_arg_modes_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__functor_number_map_can_see_all_arg_modes_0,

};

static const MR_FA_TypeInfo_Struct1 transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__ti_arm_varmap_1hlds__hlds_goal__type_ctor_info_case_0 = {
  &transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__type_ctor_info_arm_varmap_1,
  {
    (MR_TypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__type_ctor_info_case_varmap_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__direct_arg_in_out____Unify____case_varmap_0_0_10001)),
  ((MR_Box) (transform_hlds__direct_arg_in_out____Compare____case_varmap_0_0_10001)),
  (MR_String) "transform_hlds.direct_arg_in_out",
  (MR_String) "case_varmap",
  { NULL },
  { (MR_PseudoTypeInfo) (&transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__ti_arm_varmap_1hlds__hlds_goal__type_ctor_info_case_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct2 transform_hlds__direct_arg_in_out__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0one_or_more__ti_one_or_more_1builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_TypeInfo) (&transform_hlds__direct_arg_in_out__one_or_more__ti_one_or_more_1builtin__type_ctor_info_int_0)
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__type_ctor_info_clone_in_out_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__direct_arg_in_out____Unify____clone_in_out_map_0_0_10001)),
  ((MR_Box) (transform_hlds__direct_arg_in_out____Compare____clone_in_out_map_0_0_10001)),
  (MR_String) "transform_hlds.direct_arg_in_out",
  (MR_String) "clone_in_out_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&transform_hlds__direct_arg_in_out__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0one_or_more__ti_one_or_more_1builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct2 transform_hlds__direct_arg_in_out__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__direct_arg_in_out__type_ctor_info_direct_arg_proc_in_out_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_TypeInfo) (&transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__type_ctor_info_direct_arg_proc_in_out_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__direct_arg_in_out__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)
  }
};

static const MR_PseudoTypeInfo transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__field_types_daio_info_0_0[4] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&transform_hlds__direct_arg_in_out__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__direct_arg_in_out__type_ctor_info_direct_arg_proc_in_out_0),
  (MR_PseudoTypeInfo) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0),
  (MR_PseudoTypeInfo) (&transform_hlds__direct_arg_in_out__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0)
};

static const MR_ConstString transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__field_names_daio_info_0_0[4] = {
  (MR_String) "daio_module_info",
  (MR_String) "daio_proc_map",
  (MR_String) "daio_var_table",
  (MR_String) "daio_clone_foreign_procs"
};

static const MR_DuFunctorDesc transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__du_functor_desc_daio_info_0_0 = {
  (MR_String) "daio_info",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__field_types_daio_info_0_0,
  transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__field_names_daio_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__du_stag_ordered_daio_info_0_0[1] = {
  &transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__du_functor_desc_daio_info_0_0
};

static const MR_DuPtagLayout transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__du_ptag_ordered_daio_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__du_stag_ordered_daio_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__du_name_ordered_daio_info_0[1] = {
  &transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__du_functor_desc_daio_info_0_0
};

static const MR_Integer transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__functor_number_map_daio_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__type_ctor_info_daio_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__direct_arg_in_out____Unify____daio_info_0_0_10001)),
  ((MR_Box) (transform_hlds__direct_arg_in_out____Compare____daio_info_0_0_10001)),
  (MR_String) "transform_hlds.direct_arg_in_out",
  (MR_String) "daio_info",
  { transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__du_name_ordered_daio_info_0 },
  { transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__du_ptag_ordered_daio_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__functor_number_map_daio_info_0,

};

static const MR_PseudoTypeInfo transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__field_types_direct_arg_proc_in_out_0_0[2] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
  (MR_PseudoTypeInfo) (&transform_hlds__direct_arg_in_out__one_or_more__ti_one_or_more_1builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__du_functor_desc_direct_arg_proc_in_out_0_0 = {
  (MR_String) "direct_arg_proc_in_out",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__field_types_direct_arg_proc_in_out_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__du_stag_ordered_direct_arg_proc_in_out_0_0[1] = {
  &transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__du_functor_desc_direct_arg_proc_in_out_0_0
};

static const MR_DuPtagLayout transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__du_ptag_ordered_direct_arg_proc_in_out_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__du_stag_ordered_direct_arg_proc_in_out_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__du_name_ordered_direct_arg_proc_in_out_0[1] = {
  &transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__du_functor_desc_direct_arg_proc_in_out_0_0
};

static const MR_Integer transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__functor_number_map_direct_arg_proc_in_out_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__type_ctor_info_direct_arg_proc_in_out_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__direct_arg_in_out____Unify____direct_arg_proc_in_out_0_0_10001)),
  ((MR_Box) (transform_hlds__direct_arg_in_out____Compare____direct_arg_proc_in_out_0_0_10001)),
  (MR_String) "transform_hlds.direct_arg_in_out",
  (MR_String) "direct_arg_proc_in_out",
  { transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__du_name_ordered_direct_arg_proc_in_out_0 },
  { transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__du_ptag_ordered_direct_arg_proc_in_out_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__functor_number_map_direct_arg_proc_in_out_0,

};

const MR_TypeCtorInfo_Struct transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__type_ctor_info_direct_arg_proc_in_out_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__direct_arg_in_out____Unify____direct_arg_proc_in_out_map_0_0_10001)),
  ((MR_Box) (transform_hlds__direct_arg_in_out____Compare____direct_arg_proc_in_out_map_0_0_10001)),
  (MR_String) "transform_hlds.direct_arg_in_out",
  (MR_String) "direct_arg_proc_in_out_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&transform_hlds__direct_arg_in_out__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__direct_arg_in_out__type_ctor_info_direct_arg_proc_in_out_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__type_ctor_info_direct_arg_var_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__direct_arg_in_out____Unify____direct_arg_var_map_0_0_10001)),
  ((MR_Box) (transform_hlds__direct_arg_in_out____Compare____direct_arg_var_map_0_0_10001)),
  (MR_String) "transform_hlds.direct_arg_in_out",
  (MR_String) "direct_arg_var_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&transform_hlds__direct_arg_in_out__bimap__ti_bimap_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__ti_arm_varmap_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__type_ctor_info_arm_varmap_1,
  {
    (MR_TypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__type_ctor_info_goal_varmap_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__direct_arg_in_out____Unify____goal_varmap_0_0_10001)),
  ((MR_Box) (transform_hlds__direct_arg_in_out____Compare____goal_varmap_0_0_10001)),
  (MR_String) "transform_hlds.direct_arg_in_out",
  (MR_String) "goal_varmap",
  { NULL },
  { (MR_PseudoTypeInfo) (&transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__ti_arm_varmap_1hlds__hlds_goal__type_ctor_info_hlds_goal_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_EnumFunctorDesc transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__enum_functor_desc_is_mode_daio_0_0 = {
  (MR_String) "mode_is_not_daio",
  INT32_C(0)
};

static const MR_EnumFunctorDesc transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__enum_functor_desc_is_mode_daio_0_1 = {
  (MR_String) "mode_is_daio",
  INT32_C(1)
};

static const MR_EnumFunctorDesc transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__enum_functor_desc_is_mode_daio_0_2 = {
  (MR_String) "mode_may_be_daio",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__enum_ordinal_ordered_is_mode_daio_0[3] = {
  &transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__enum_functor_desc_is_mode_daio_0_0,
  &transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__enum_functor_desc_is_mode_daio_0_1,
  &transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__enum_functor_desc_is_mode_daio_0_2
};

static const MR_EnumFunctorDescPtr transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__enum_name_ordered_is_mode_daio_0[3] = {
  &transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__enum_functor_desc_is_mode_daio_0_1,
  &transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__enum_functor_desc_is_mode_daio_0_0,
  &transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__enum_functor_desc_is_mode_daio_0_2
};

static const MR_Integer transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__functor_number_map_is_mode_daio_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__type_ctor_info_is_mode_daio_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__direct_arg_in_out____Unify____is_mode_daio_0_0_10001)),
  ((MR_Box) (transform_hlds__direct_arg_in_out____Compare____is_mode_daio_0_0_10001)),
  (MR_String) "transform_hlds.direct_arg_in_out",
  (MR_String) "is_mode_daio",
  { transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__enum_name_ordered_is_mode_daio_0 },
  { transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__enum_ordinal_ordered_is_mode_daio_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__functor_number_map_is_mode_daio_0,

};

static const MR_EnumFunctorDesc transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__enum_functor_desc_is_some_direct_arg_bound_0_0 = {
  (MR_String) "no_direct_arg_is_bound",
  INT32_C(0)
};

static const MR_EnumFunctorDesc transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__enum_functor_desc_is_some_direct_arg_bound_0_1 = {
  (MR_String) "some_direct_arg_is_bound",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__enum_ordinal_ordered_is_some_direct_arg_bound_0[2] = {
  &transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__enum_functor_desc_is_some_direct_arg_bound_0_0,
  &transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__enum_functor_desc_is_some_direct_arg_bound_0_1
};

static const MR_EnumFunctorDescPtr transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__enum_name_ordered_is_some_direct_arg_bound_0[2] = {
  &transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__enum_functor_desc_is_some_direct_arg_bound_0_0,
  &transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__enum_functor_desc_is_some_direct_arg_bound_0_1
};

static const MR_Integer transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__functor_number_map_is_some_direct_arg_bound_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__type_ctor_info_is_some_direct_arg_bound_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__direct_arg_in_out____Unify____is_some_direct_arg_bound_0_0_10001)),
  ((MR_Box) (transform_hlds__direct_arg_in_out____Compare____is_some_direct_arg_bound_0_0_10001)),
  (MR_String) "transform_hlds.direct_arg_in_out",
  (MR_String) "is_some_direct_arg_bound",
  { transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__enum_name_ordered_is_some_direct_arg_bound_0 },
  { transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__enum_ordinal_ordered_is_some_direct_arg_bound_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__functor_number_map_is_some_direct_arg_bound_0,

};

const MR_BaseTypeclassInfo base_typeclass_info_transform_hlds__direct_arg_in_out__goal_like__arity1__hlds__hlds_goal__case__arity0__[8] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 3)),
  ((MR_Box) (transform_hlds__direct_arg_in_out__ClassMethod_for_transform_hlds__direct_arg_in_out__goal_like____hlds__hlds_goal__case__arity0______transform_hlds__direct_arg_in_out__end_is_reachable_1_1_p_0_10001)),
  ((MR_Box) (transform_hlds__direct_arg_in_out__ClassMethod_for_transform_hlds__direct_arg_in_out__goal_like____hlds__hlds_goal__case__arity0______transform_hlds__direct_arg_in_out__append_goal_3_3_p_0_10001)),
  ((MR_Box) (transform_hlds__direct_arg_in_out__ClassMethod_for_transform_hlds__direct_arg_in_out__goal_like____hlds__hlds_goal__case__arity0______transform_hlds__direct_arg_in_out__expand_daio_in_goal_like_varmap_6_6_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_transform_hlds__direct_arg_in_out__goal_like__arity1__hlds__hlds_goal__hlds_goal__arity0__[8] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 3)),
  ((MR_Box) (transform_hlds__direct_arg_in_out__ClassMethod_for_transform_hlds__direct_arg_in_out__goal_like____hlds__hlds_goal__hlds_goal__arity0______transform_hlds__direct_arg_in_out__end_is_reachable_1_1_p_0_10001)),
  ((MR_Box) (transform_hlds__direct_arg_in_out__ClassMethod_for_transform_hlds__direct_arg_in_out__goal_like____hlds__hlds_goal__hlds_goal__arity0______transform_hlds__direct_arg_in_out__append_goal_3_3_p_0_10001)),
  ((MR_Box) (transform_hlds__direct_arg_in_out__ClassMethod_for_transform_hlds__direct_arg_in_out__goal_like____hlds__hlds_goal__hlds_goal__arity0______transform_hlds__direct_arg_in_out__expand_daio_in_goal_like_varmap_6_6_p_0_10001))
};

static const MR_ConstString transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__type_class_id_var_names_goal_like_1[1] = {
  (MR_String) "G"
};

static const MR_TypeClassMethod transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__type_class_id_method_ids_goal_like_1[3] = {
  {
    (MR_String) "end_is_reachable",
    (MR_Integer) 1,
    MR_PREDICATE
  },
  {
    (MR_String) "append_goal",
    (MR_Integer) 3,
    MR_PREDICATE
  },
  {
    (MR_String) "expand_daio_in_goal_like_varmap",
    (MR_Integer) 6,
    MR_PREDICATE
  }
};

static const MR_TypeClassId transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__type_class_id_goal_like_1 = {
  (MR_String) "transform_hlds.direct_arg_in_out",
  (MR_String) "goal_like",
  (MR_Integer) 1,
  (MR_Integer) 1,
  (MR_Integer) 3,
  transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__type_class_id_var_names_goal_like_1,
  transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__type_class_id_method_ids_goal_like_1
};

const MR_TypeClassDeclStruct transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__type_class_decl_goal_like_1 = {
  &transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__type_class_id_goal_like_1,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL
};

static MR_Word MR_CALL 
transform_hlds__direct_arg_in_out__IntroducedFrom__func__args_may_violate_prohibition_pieces__2193__1_1_f_0(
  MR_Integer LambdaHeadVar__1_26)
{
  MR_Word LambdaHeadVar__2_27;

  {
    LambdaHeadVar__2_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), LambdaHeadVar__2_27, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(MR_mktag(3), LambdaHeadVar__2_27, 1) = ((MR_Box) (LambdaHeadVar__1_26));
  }
  return LambdaHeadVar__2_27;
}

static MR_Word MR_CALL 
transform_hlds__direct_arg_in_out__IntroducedFrom__func__args_violate_prohibition_pieces__2174__1_1_f_0(
  MR_Integer LambdaHeadVar__1_26)
{
  MR_Word LambdaHeadVar__2_27;

  {
    LambdaHeadVar__2_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), LambdaHeadVar__2_27, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(MR_mktag(3), LambdaHeadVar__2_27, 1) = ((MR_Box) (LambdaHeadVar__1_26));
  }
  return LambdaHeadVar__2_27;
}

static MR_Word MR_CALL 
transform_hlds__direct_arg_in_out__IntroducedFrom__func__generate_problem_proc_error__2028__1_1_f_0(
  MR_Integer LambdaHeadVar__1_71)
{
  MR_Word LambdaHeadVar__2_72;

  {
    LambdaHeadVar__2_72 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), LambdaHeadVar__2_72, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(MR_mktag(3), LambdaHeadVar__2_72, 1) = ((MR_Box) (LambdaHeadVar__1_71));
  }
  return LambdaHeadVar__2_72;
}

static MR_Box MR_CALL 
transform_hlds__direct_arg_in_out__IntroducedFrom__func__expand_daio_in_branches__1730__1_2_f_0(
  MR_Word TypeClassInfo_for_goal_like_67,
  MR_Word HeadVar__2_76)
{
  MR_Box HeadVar__3_77;
  MR_Word TypeInfo_79_79;

  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_goal_like_67, (MR_Integer) 1, &TypeInfo_79_79);
  HeadVar__3_77 = (MR_hl_field(MR_mktag(0), HeadVar__2_76, (MR_Integer) 0));
  return HeadVar__3_77;
}

static MR_bool MR_CALL 
transform_hlds__direct_arg_in_out__IntroducedFrom__pred__expand_daio_in_goal__1145__1_2_p_0(
  MR_Word RegTypes_51,
  MR_Word HeadVar__2_141)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_data____Unify____arg_reg_type_info_0_0(RegTypes_51, HeadVar__2_141);
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__direct_arg_in_out__IntroducedFrom__pred__gather_direct_arg_functors__382__1_2_p_0(
  MR_Integer Arity_11,
  MR_Integer HeadVar__2_20)
{
  MR_bool succeeded = (Arity_11 == HeadVar__2_20);

  return succeeded;
}

static void MR_CALL 
transform_hlds__direct_arg_in_out__ClassMethod_for_transform_hlds__direct_arg_in_out__goal_like____hlds__hlds_goal__hlds_goal__arity0______transform_hlds__direct_arg_in_out__expand_daio_in_goal_like_varmap_6_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6)
{
  MR_Word Goal_7;
  MR_Word VarMap_8;

  transform_hlds__direct_arg_in_out__expand_daio_in_goal_7_p_0(HeadVar__2_2, &Goal_7, HeadVar__3_3, HeadVar__1_1, &VarMap_8, HeadVar__5_5, HeadVar__6_6);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__4_4 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Goal_7));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (VarMap_8));
  }
}

static void MR_CALL 
transform_hlds__direct_arg_in_out__ClassMethod_for_transform_hlds__direct_arg_in_out__goal_like____hlds__hlds_goal__hlds_goal__arity0______transform_hlds__direct_arg_in_out__append_goal_3_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Word GoalExpr0_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
  MR_Word GoalInfo0_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
  MR_Word GoalExpr_7;
  MR_Word Conjuncts0_6;
  MR_Word Var_8;

  succeeded = ((((MR_tag((MR_Word) GoalExpr0_4)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr0_4, (MR_Integer) 0)))) == (MR_Integer) 2)));
  if (succeeded)
  {
    Var_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_4, (MR_Integer) 1))) & (MR_Integer) 1);
    Conjuncts0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_4, (MR_Integer) 2))));
    succeeded = (Var_8 == (MR_Integer) 0);
  }
  if (succeeded)
  {
    MR_Word Var_10;
    MR_Word Var_11;

    {
      Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_11, 0) = ((MR_Box) (HeadVar__2_2));
      MR_hl_field(MR_mktag(1), Var_11, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Conjuncts0_6, Var_11);
    {
      GoalExpr_7 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), GoalExpr_7, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), GoalExpr_7, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), GoalExpr_7, 2) = ((MR_Box) (Var_10));
    }
  }
  else
  {
    MR_Word Var_14;
    MR_Word Var_15;

    {
      Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_15, 0) = ((MR_Box) (HeadVar__2_2));
      MR_hl_field(MR_mktag(1), Var_15, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_14, 0) = ((MR_Box) (HeadVar__1_1));
      MR_hl_field(MR_mktag(1), Var_14, 1) = ((MR_Box) (Var_15));
    }
    {
      GoalExpr_7 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), GoalExpr_7, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), GoalExpr_7, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), GoalExpr_7, 2) = ((MR_Box) (Var_14));
    }
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__3_3 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_7));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_5));
  }
}

static MR_bool MR_CALL 
transform_hlds__direct_arg_in_out__ClassMethod_for_transform_hlds__direct_arg_in_out__goal_like____hlds__hlds_goal__hlds_goal__arity0______transform_hlds__direct_arg_in_out__end_is_reachable_1_1_p_0(
  MR_Word HeadVar__1_1)
{
  MR_bool succeeded;
  MR_Word GoalInfo_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
  MR_Word InstMapDelta_4;

  InstMapDelta_4 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_3);
  succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(InstMapDelta_4);
  return succeeded;
}

static void MR_CALL 
transform_hlds__direct_arg_in_out__ClassMethod_for_transform_hlds__direct_arg_in_out__goal_like____hlds__hlds_goal__case__arity0______transform_hlds__direct_arg_in_out__expand_daio_in_goal_like_varmap_6_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6)
{
  MR_Word MainConsId_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
  MR_Word OtherConsIds_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
  MR_Word Goal0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
  MR_Word Goal_10;
  MR_Word VarMap_11;
  MR_Word Case_12;

  transform_hlds__direct_arg_in_out__expand_daio_in_goal_7_p_0(Goal0_9, &Goal_10, HeadVar__3_3, HeadVar__1_1, &VarMap_11, HeadVar__5_5, HeadVar__6_6);
  {
    Case_12 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Case_12, 0) = ((MR_Box) (MainConsId_7));
    MR_hl_field(MR_mktag(0), Case_12, 1) = ((MR_Box) (OtherConsIds_8));
    MR_hl_field(MR_mktag(0), Case_12, 2) = ((MR_Box) (Goal_10));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__4_4 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Case_12));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (VarMap_11));
  }
}

static void MR_CALL 
transform_hlds__direct_arg_in_out__ClassMethod_for_transform_hlds__direct_arg_in_out__goal_like____hlds__hlds_goal__case__arity0______transform_hlds__direct_arg_in_out__append_goal_3_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Word MainConsId_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
  MR_Word OtherConsIds_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
  MR_Word Goal0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
  MR_Word Goal_7;
  MR_Word GoalExpr0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_6, (MR_Integer) 0))));
  MR_Word GoalInfo0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_6, (MR_Integer) 1))));
  MR_Word GoalExpr_11;
  MR_Word Conjuncts0_10;
  MR_Word Var_12;

  succeeded = ((((MR_tag((MR_Word) GoalExpr0_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 0)))) == (MR_Integer) 2)));
  if (succeeded)
  {
    Var_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 1))) & (MR_Integer) 1);
    Conjuncts0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 2))));
    succeeded = (Var_12 == (MR_Integer) 0);
  }
  if (succeeded)
  {
    MR_Word Var_14;
    MR_Word Var_15;

    {
      Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_15, 0) = ((MR_Box) (HeadVar__2_2));
      MR_hl_field(MR_mktag(1), Var_15, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Conjuncts0_10, Var_15);
    {
      GoalExpr_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), GoalExpr_11, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), GoalExpr_11, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), GoalExpr_11, 2) = ((MR_Box) (Var_14));
    }
  }
  else
  {
    MR_Word Var_18;
    MR_Word Var_19;

    {
      Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (HeadVar__2_2));
      MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (Goal0_6));
      MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) (Var_19));
    }
    {
      GoalExpr_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), GoalExpr_11, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), GoalExpr_11, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), GoalExpr_11, 2) = ((MR_Box) (Var_18));
    }
  }
  {
    Goal_7 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Goal_7, 0) = ((MR_Box) (GoalExpr_11));
    MR_hl_field(MR_mktag(0), Goal_7, 1) = ((MR_Box) (GoalInfo0_9));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__3_3 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MainConsId_4));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (OtherConsIds_5));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Goal_7));
  }
}

static MR_bool MR_CALL 
transform_hlds__direct_arg_in_out__ClassMethod_for_transform_hlds__direct_arg_in_out__goal_like____hlds__hlds_goal__case__arity0______transform_hlds__direct_arg_in_out__end_is_reachable_1_1_p_0(
  MR_Word HeadVar__1_1)
{
  MR_bool succeeded;
  MR_Word Goal_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
  MR_Word GoalInfo_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_4, (MR_Integer) 1))));
  MR_Word InstMapDelta_7;

  InstMapDelta_7 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_6);
  succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(InstMapDelta_7);
  return succeeded;
}

static void MR_CALL 
transform_hlds__direct_arg_in_out____Compare____is_some_direct_arg_bound_0_0(
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
transform_hlds__direct_arg_in_out____Unify____is_some_direct_arg_bound_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
transform_hlds__direct_arg_in_out____Compare____is_mode_daio_0_0(
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
transform_hlds__direct_arg_in_out____Unify____is_mode_daio_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
transform_hlds__direct_arg_in_out____Compare____goal_varmap_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__direct_arg_in_out_scalar_common_1[9]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
transform_hlds__direct_arg_in_out____Unify____goal_varmap_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = transform_hlds__direct_arg_in_out____Unify____arm_varmap_1_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

static void MR_CALL 
transform_hlds__direct_arg_in_out____Compare____direct_arg_var_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__direct_arg_in_out_scalar_common_2[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
transform_hlds__direct_arg_in_out____Unify____direct_arg_var_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__direct_arg_in_out_scalar_common_2[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__direct_arg_in_out____Compare____direct_arg_proc_in_out_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__direct_arg_in_out_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
transform_hlds__direct_arg_in_out____Unify____direct_arg_proc_in_out_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__direct_arg_in_out_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__direct_arg_in_out____Compare____direct_arg_proc_in_out_0_0(
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
      mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__direct_arg_in_out_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

static MR_bool MR_CALL 
transform_hlds__direct_arg_in_out____Unify____direct_arg_proc_in_out_0_0(
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

    succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      TypeInfo_10_10 = (MR_Word) (&transform_hlds__direct_arg_in_out_scalar_common_1[2]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
    }
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__direct_arg_in_out____Compare____daio_info_0_0(
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

    hlds__hlds_module____Compare____module_info_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__direct_arg_in_out_scalar_common_2[0]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        parse_tree__var_table____Compare____var_table_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
          mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__direct_arg_in_out_scalar_common_1[8]), HeadVar__1_1, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
      }
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__direct_arg_in_out____Unify____daio_info_0_0(
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
    MR_Word TypeInfo_16_16;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));

    succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      TypeInfo_14_14 = (MR_Word) (&transform_hlds__direct_arg_in_out_scalar_common_2[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        succeeded = parse_tree__var_table____Unify____var_table_0_0(ArgX3_7, ArgY3_8);
        if (succeeded)
        {
          TypeInfo_16_16 = (MR_Word) (&transform_hlds__direct_arg_in_out_scalar_common_1[8]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__direct_arg_in_out____Compare____clone_in_out_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__direct_arg_in_out_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
transform_hlds__direct_arg_in_out____Unify____clone_in_out_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__direct_arg_in_out_scalar_common_2[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__direct_arg_in_out____Compare____case_varmap_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__direct_arg_in_out_scalar_common_1[7]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
transform_hlds__direct_arg_in_out____Unify____case_varmap_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = transform_hlds__direct_arg_in_out____Unify____arm_varmap_1_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

static void MR_CALL 
transform_hlds__direct_arg_in_out____Compare____can_see_all_arg_modes_0_0(
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
transform_hlds__direct_arg_in_out____Unify____can_see_all_arg_modes_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
transform_hlds__direct_arg_in_out____Compare____arm_varmap_1_0(
  MR_Word TypeInfo_for_G_11,
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
    MR_Box ArgX1_4 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));
    MR_Box ArgY1_5 = (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0(TypeInfo_for_G_11, &SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__direct_arg_in_out_scalar_common_2[2]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

static MR_bool MR_CALL 
transform_hlds__direct_arg_in_out____Unify____arm_varmap_1_0(
  MR_Word TypeInfo_for_G_9,
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
    MR_Box ArgX1_3 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0));
    MR_Box ArgY1_4 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_G_9, ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      TypeInfo_10_10 = (MR_Word) (&transform_hlds__direct_arg_in_out_scalar_common_2[2]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
    }
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__direct_arg_in_out__expand_daio_in_goal_like_varmap_6_p_0(
  MR_Word TypeClassInfo_for_goal_like_7,
  MR_Word HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_goal_like_7, (MR_Integer) 0)), (MR_Integer) 7))));
  MR_Box conv2_HeadVar__4_4;
  MR_Box conv1_HeadVar__6_6;

  func_0(((MR_Box) (TypeClassInfo_for_goal_like_7)), ((MR_Box) (HeadVar__1_1)), HeadVar__2_2, ((MR_Box) (HeadVar__3_3)), &conv2_HeadVar__4_4, ((MR_Box) (HeadVar__5_5)), &conv1_HeadVar__6_6);
  *HeadVar__4_4 = ((MR_Word) (conv2_HeadVar__4_4));
  *HeadVar__6_6 = ((MR_Word) (conv1_HeadVar__6_6));
}

static void MR_CALL 
transform_hlds__direct_arg_in_out__append_goal_3_p_0(
  MR_Word TypeClassInfo_for_goal_like_4,
  MR_Box HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box * HeadVar__3_3)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_goal_like_4, (MR_Integer) 0)), (MR_Integer) 6))));

  func_0(((MR_Box) (TypeClassInfo_for_goal_like_4)), HeadVar__1_1, ((MR_Box) (HeadVar__2_2)), HeadVar__3_3);
}

static MR_bool MR_CALL 
transform_hlds__direct_arg_in_out__end_is_reachable_1_p_0(
  MR_Word TypeClassInfo_for_goal_like_2,
  MR_Box HeadVar__1_1)
{
  MR_bool succeeded;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_goal_like_2, (MR_Integer) 0)), (MR_Integer) 5))));

  succeeded = func_0(((MR_Box) (TypeClassInfo_for_goal_like_2)), HeadVar__1_1);
  return succeeded;
}

static MR_Box MR_CALL 
transform_hlds__direct_arg_in_out__maybe_add_foreign_proc_error_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv3_LambdaHeadVar__2_27;

  conv3_LambdaHeadVar__2_27 = transform_hlds__direct_arg_in_out__IntroducedFrom__func__args_may_violate_prohibition_pieces__2193__1_1_f_0(((MR_Integer) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv3_LambdaHeadVar__2_27));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
transform_hlds__direct_arg_in_out__maybe_add_foreign_proc_error_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv2_LambdaHeadVar__2_27;

  conv2_LambdaHeadVar__2_27 = transform_hlds__direct_arg_in_out__IntroducedFrom__func__args_violate_prohibition_pieces__2174__1_1_f_0(((MR_Integer) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_LambdaHeadVar__2_27));
  return wrapper_arg_2;
}

static void MR_CALL 
transform_hlds__direct_arg_in_out__maybe_add_foreign_proc_error_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word DirectArgProcMap_8,
  MR_Word DirectArgProcInOutMap_9,
  MR_Word PredProcId_10,
  MR_Word STATE_VARIABLE_Specs_0_17,
  MR_Word * STATE_VARIABLE_Specs_18)
{
  MR_bool succeeded;
  MR_Word DirectArgProc_12;
  MR_Box conv0_DirectArgProc_12;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_direct_arg_proc_0), DirectArgProcMap_8, ((MR_Box) (PredProcId_10)), &conv0_DirectArgProc_12);
  if (succeeded)
  {
    DirectArgProc_12 = ((MR_Word) (conv0_DirectArgProc_12));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word ProcInOut_13;
    MR_Word ClonePredProcId_14;
    MR_Word Spec_16;
    MR_Word StartPieces_23;
    MR_Word ProcDescPieces_24;
    MR_Word OfProcDescPieces_25;
    MR_Word Pieces_29;
    MR_Word ProcInfo_34;
    MR_Word Context_35;
    MR_Box conv1_ProcInOut_13;

    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__type_ctor_info_direct_arg_proc_in_out_0), DirectArgProcInOutMap_9, ((MR_Box) (PredProcId_10)), &conv1_ProcInOut_13);
    ProcInOut_13 = ((MR_Word) (conv1_ProcInOut_13));
    ClonePredProcId_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProcInOut_13, (MR_Integer) 0))));
    StartPieces_23 = (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__direct_arg_in_out_scalar_common_1[87]));
    ProcDescPieces_24 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(ModuleInfo_7, (MR_Integer) 1, ClonePredProcId_14);
    OfProcDescPieces_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__direct_arg_in_out_scalar_common_1[89])), ProcDescPieces_24);
    if (((MR_tag((MR_Word) DirectArgProc_12)) == (MR_Integer) 0))
    {
      MR_Word OoMCloneArgs_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DirectArgProc_12, (MR_Integer) 0))));
      MR_Integer HeadCloneArg_27 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OoMCloneArgs_26, (MR_Integer) 0))));
      MR_Word TailCloneArgs_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OoMCloneArgs_26, (MR_Integer) 1))));
      MR_Word Var_41;
      MR_Word Var_42;

      if ((TailCloneArgs_28 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_62;
        MR_Word Var_64;
        MR_Word Var_65;
        MR_Word Var_67;

        {
          Var_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_65, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(MR_mktag(3), Var_65, 1) = ((MR_Box) (HeadCloneArg_27));
        }
        {
          Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (Var_65));
          MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__direct_arg_in_out_scalar_common_1[98])));
          MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (Var_64));
        }
        Var_67 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), OfProcDescPieces_25, (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__direct_arg_in_out_scalar_common_1[100])));
        Var_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_62, Var_67);
      }
      else
      {
        MR_Word ArgPieces_60;
        MR_Word ArgsPieces_61;
        MR_Word Var_70;
        MR_Word Var_73;
        MR_Word Var_74;

        {
          Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (HeadCloneArg_27));
          MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) (TailCloneArgs_28));
        }
        ArgPieces_60 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (&transform_hlds__direct_arg_in_out_scalar_common_2[8]), Var_70);
        ArgsPieces_61 = parse_tree__error_util__component_list_to_pieces_2_f_0((MR_String) "and", ArgPieces_60);
        Var_74 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), OfProcDescPieces_25, (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__direct_arg_in_out_scalar_common_1[104])));
        Var_73 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ArgsPieces_61, Var_74);
        Var_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__direct_arg_in_out_scalar_common_1[102])), Var_73);
      }
      Var_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_42, (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__direct_arg_in_out_scalar_common_1[91])));
      Pieces_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), StartPieces_23, Var_41);
    }
    else
    {
      MR_Word OoMProblemArgs_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DirectArgProc_12, (MR_Integer) 0))));
      MR_Word CloneArgs_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DirectArgProc_12, (MR_Integer) 1))));
      MR_Integer HeadProblemArg_32 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OoMProblemArgs_30, (MR_Integer) 0))));
      MR_Word TailProblemArgs_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OoMProblemArgs_30, (MR_Integer) 1))));

      if ((CloneArgs_31 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_44;
        MR_Word Var_45;

        if ((TailProblemArgs_33 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Var_81;
          MR_Word Var_83;
          MR_Word Var_84;
          MR_Word Var_86;

          {
            Var_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_84, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), Var_84, 1) = ((MR_Box) (HeadProblemArg_32));
          }
          {
            Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (Var_84));
            MR_hl_field(MR_mktag(1), Var_83, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__direct_arg_in_out_scalar_common_1[98])));
            MR_hl_field(MR_mktag(1), Var_81, 1) = ((MR_Box) (Var_83));
          }
          Var_86 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), OfProcDescPieces_25, (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__direct_arg_in_out_scalar_common_1[106])));
          Var_45 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_81, Var_86);
        }
        else
        {
          MR_Word ArgPieces_79;
          MR_Word ArgsPieces_80;
          MR_Word Var_89;
          MR_Word Var_92;
          MR_Word Var_93;

          {
            Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_89, 0) = ((MR_Box) (HeadProblemArg_32));
            MR_hl_field(MR_mktag(1), Var_89, 1) = ((MR_Box) (TailProblemArgs_33));
          }
          ArgPieces_79 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (&transform_hlds__direct_arg_in_out_scalar_common_2[9]), Var_89);
          ArgsPieces_80 = parse_tree__error_util__component_list_to_pieces_2_f_0((MR_String) "and", ArgPieces_79);
          Var_93 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), OfProcDescPieces_25, (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__direct_arg_in_out_scalar_common_1[106])));
          Var_92 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ArgsPieces_80, Var_93);
          Var_45 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__direct_arg_in_out_scalar_common_1[102])), Var_92);
        }
        Var_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_45, (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__direct_arg_in_out_scalar_common_1[91])));
        Pieces_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), StartPieces_23, Var_44);
      }
      else
      {
        MR_Word Var_47;
        MR_Word Var_48;
        MR_Word Var_49;
        MR_Word Var_51;
        MR_Word Var_52;
        MR_Integer HeadCloneArg_57 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), CloneArgs_31, (MR_Integer) 0))));
        MR_Word TailCloneArgs_58 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CloneArgs_31, (MR_Integer) 1))));

        Var_48 = transform_hlds__direct_arg_in_out__args_violate_prohibition_pieces_3_f_0(OfProcDescPieces_25, HeadCloneArg_57, TailCloneArgs_58);
        Var_52 = transform_hlds__direct_arg_in_out__args_may_violate_prohibition_pieces_3_f_0(OfProcDescPieces_25, HeadProblemArg_32, TailProblemArgs_33);
        Var_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_52, (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__direct_arg_in_out_scalar_common_1[97])));
        Var_49 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__direct_arg_in_out_scalar_common_1[95])), Var_51);
        Var_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_48, Var_49);
        Pieces_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), StartPieces_23, Var_47);
      }
    }
    hlds__hlds_module__module_info_proc_info_3_p_0(ModuleInfo_7, ClonePredProcId_14, &ProcInfo_34);
    hlds__hlds_pred__proc_info_get_context_2_p_0(ProcInfo_34, &Context_35);
    {
      Spec_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_16, 0) = ((MR_Box) ((MR_String) "predicate \140transform_hlds.direct_arg_in_out.generate_call_foreign_proc_error\'/4"));
      MR_hl_field(MR_mktag(1), Spec_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_16, 2) = ((MR_Box) ((MR_Unsigned) 76U));
      MR_hl_field(MR_mktag(1), Spec_16, 3) = ((MR_Box) (Context_35));
      MR_hl_field(MR_mktag(1), Spec_16, 4) = ((MR_Box) (Pieces_29));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_18 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_16));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_17));
    }
  }
  else
    *STATE_VARIABLE_Specs_18 = STATE_VARIABLE_Specs_0_17;
}

static MR_Box MR_CALL 
transform_hlds__direct_arg_in_out__args_may_violate_prohibition_pieces_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_27;

  conv0_LambdaHeadVar__2_27 = transform_hlds__direct_arg_in_out__IntroducedFrom__func__args_may_violate_prohibition_pieces__2193__1_1_f_0(((MR_Integer) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_27));
  return wrapper_arg_2;
}

static MR_Word MR_CALL 
transform_hlds__direct_arg_in_out__args_may_violate_prohibition_pieces_3_f_0(
  MR_Word OfProcDescPieces_5,
  MR_Integer HeadArg_6,
  MR_Word TailArgs_7)
{
  MR_Word Pieces_8;

  if ((TailArgs_7 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_14;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_20;

    {
      Var_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_18, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), Var_18, 1) = ((MR_Box) (HeadArg_6));
    }
    {
      Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__direct_arg_in_out_scalar_common_1[98])));
      MR_hl_field(MR_mktag(1), Var_14, 1) = ((MR_Box) (Var_17));
    }
    Var_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), OfProcDescPieces_5, (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__direct_arg_in_out_scalar_common_1[106])));
    Pieces_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_14, Var_20);
  }
  else
  {
    MR_Word ArgPieces_11;
    MR_Word ArgsPieces_13;
    MR_Word Var_28;
    MR_Word Var_34;
    MR_Word Var_35;

    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (HeadArg_6));
      MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (TailArgs_7));
    }
    ArgPieces_11 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (&transform_hlds__direct_arg_in_out_scalar_common_2[7]), Var_28);
    ArgsPieces_13 = parse_tree__error_util__component_list_to_pieces_2_f_0((MR_String) "and", ArgPieces_11);
    Var_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), OfProcDescPieces_5, (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__direct_arg_in_out_scalar_common_1[106])));
    Var_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ArgsPieces_13, Var_35);
    Pieces_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__direct_arg_in_out_scalar_common_1[102])), Var_34);
  }
  return Pieces_8;
}

static MR_Box MR_CALL 
transform_hlds__direct_arg_in_out__args_violate_prohibition_pieces_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_27;

  conv0_LambdaHeadVar__2_27 = transform_hlds__direct_arg_in_out__IntroducedFrom__func__args_violate_prohibition_pieces__2174__1_1_f_0(((MR_Integer) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_27));
  return wrapper_arg_2;
}

static MR_Word MR_CALL 
transform_hlds__direct_arg_in_out__args_violate_prohibition_pieces_3_f_0(
  MR_Word OfProcDescPieces_5,
  MR_Integer HeadArg_6,
  MR_Word TailArgs_7)
{
  MR_Word Pieces_8;

  if ((TailArgs_7 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_14;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_20;

    {
      Var_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_18, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), Var_18, 1) = ((MR_Box) (HeadArg_6));
    }
    {
      Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__direct_arg_in_out_scalar_common_1[98])));
      MR_hl_field(MR_mktag(1), Var_14, 1) = ((MR_Box) (Var_17));
    }
    Var_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), OfProcDescPieces_5, (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__direct_arg_in_out_scalar_common_1[100])));
    Pieces_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_14, Var_20);
  }
  else
  {
    MR_Word ArgPieces_11;
    MR_Word ArgsPieces_13;
    MR_Word Var_28;
    MR_Word Var_34;
    MR_Word Var_35;

    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (HeadArg_6));
      MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (TailArgs_7));
    }
    ArgPieces_11 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (&transform_hlds__direct_arg_in_out_scalar_common_2[6]), Var_28);
    ArgsPieces_13 = parse_tree__error_util__component_list_to_pieces_2_f_0((MR_String) "and", ArgPieces_11);
    Var_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), OfProcDescPieces_5, (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__direct_arg_in_out_scalar_common_1[104])));
    Var_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ArgsPieces_13, Var_35);
    Pieces_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__direct_arg_in_out_scalar_common_1[102])), Var_34);
  }
  return Pieces_8;
}

static void MR_CALL 
transform_hlds__direct_arg_in_out__generate_error_if_cloned_proc_is_exported_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word DirectArgProcMap_9,
  MR_Word ExportedProc0_10,
  MR_Word STATE_VARIABLE_RevExportedProcs_0_25,
  MR_Word * STATE_VARIABLE_RevExportedProcs_26,
  MR_Word STATE_VARIABLE_Specs_0_27,
  MR_Word * STATE_VARIABLE_Specs_28)
{
  MR_bool succeeded;
  MR_Word Lang_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ExportedProc0_10, (MR_Integer) 0))) & (MR_Integer) 3);
  MR_Word PredId_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExportedProc0_10, (MR_Integer) 1))));
  MR_Integer ProcId_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ExportedProc0_10, (MR_Integer) 2))));
  MR_String ExportedName_16 = ((MR_String) ((MR_hl_field(MR_mktag(0), ExportedProc0_10, (MR_Integer) 3))));
  MR_Word Context_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExportedProc0_10, (MR_Integer) 4))));
  MR_Word PredProcId_18;
  MR_Box conv0_Var_19;

  {
    PredProcId_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), PredProcId_18, 0) = ((MR_Box) (PredId_14));
    MR_hl_field(MR_mktag(0), PredProcId_18, 1) = ((MR_Box) (ProcId_15));
  }
  succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_direct_arg_proc_0), DirectArgProcMap_9, ((MR_Box) (PredProcId_18)), &conv0_Var_19);
  if (succeeded)
    succeeded = MR_TRUE;
  if (succeeded)
    succeeded = (Lang_13 == (MR_Integer) 0);
  if (succeeded)
  {
    MR_Word PredInfo_20;
    MR_String PredName_21;
    MR_Integer OrigArity_22;
    MR_Word PredSNA_23;
    MR_Word Spec_24;
    MR_Word Var_29;
    MR_Word Pieces_32;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_40;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_48;
    MR_Word Var_51;

    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_8, PredId_14, &PredInfo_20);
    hlds__hlds_pred__pred_info_get_name_2_p_0(PredInfo_20, &PredName_21);
    hlds__hlds_pred__pred_info_get_orig_arity_2_p_0(PredInfo_20, &OrigArity_22);
    {
      Var_29 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (PredName_21));
    }
    {
      PredSNA_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), PredSNA_23, 0) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), PredSNA_23, 1) = ((MR_Box) (OrigArity_22));
    }
    {
      Var_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_36, 0) = ((MR_Box) ((MR_Unsigned) 11U));
      MR_hl_field(MR_mktag(3), Var_36, 1) = ((MR_Box) (PredSNA_23));
    }
    {
      Var_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_44, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_44, 1) = ((MR_Box) (ExportedName_16));
    }
    {
      Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__direct_arg_in_out_scalar_common_1[71])));
    }
    {
      Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__direct_arg_in_out_scalar_common_1[58])));
      MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (Var_51));
    }
    {
      Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__direct_arg_in_out_scalar_common_1[35])));
      MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (Var_48));
    }
    {
      Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (Var_45));
    }
    {
      Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__direct_arg_in_out_scalar_common_1[57])));
      MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (Var_43));
    }
    {
      Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__direct_arg_in_out_scalar_common_1[56])));
      MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (Var_40));
    }
    {
      Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (Var_37));
    }
    {
      Pieces_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__direct_arg_in_out_scalar_common_1[55])));
      MR_hl_field(MR_mktag(1), Pieces_32, 1) = ((MR_Box) (Var_35));
    }
    {
      Spec_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_24, 0) = ((MR_Box) ((MR_String) "predicate \140transform_hlds.direct_arg_in_out.generate_foreign_export_error\'/4"));
      MR_hl_field(MR_mktag(1), Spec_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_24, 2) = ((MR_Box) ((MR_Unsigned) 76U));
      MR_hl_field(MR_mktag(1), Spec_24, 3) = ((MR_Box) (Context_17));
      MR_hl_field(MR_mktag(1), Spec_24, 4) = ((MR_Box) (Pieces_32));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_28 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_24));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_27));
    }
    *STATE_VARIABLE_RevExportedProcs_26 = STATE_VARIABLE_RevExportedProcs_0_25;
  }
  else
  {
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_RevExportedProcs_26 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ExportedProc0_10));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_RevExportedProcs_0_25));
    }
    *STATE_VARIABLE_Specs_28 = STATE_VARIABLE_Specs_0_27;
  }
}

static void MR_CALL 
transform_hlds__direct_arg_in_out__transform_class_instance_proc_3_p_0(
  MR_Word DirectArgProcInOutMap_4,
  MR_Word PredProcId0_5,
  MR_Word * PredProcId_6)
{
  MR_bool succeeded;
  MR_Word ProcInOut_7;
  MR_Box conv0_ProcInOut_7;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__type_ctor_info_direct_arg_proc_in_out_0), DirectArgProcInOutMap_4, ((MR_Box) (PredProcId0_5)), &conv0_ProcInOut_7);
  if (succeeded)
  {
    ProcInOut_7 = ((MR_Word) (conv0_ProcInOut_7));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    *PredProcId_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProcInOut_7, (MR_Integer) 0))));
  else
    *PredProcId_6 = PredProcId0_5;
}

static void MR_CALL 
transform_hlds__direct_arg_in_out__transform_class_instance_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_PredProcId_6;

  transform_hlds__direct_arg_in_out__transform_class_instance_proc_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_PredProcId_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_PredProcId_6));
}

static void MR_CALL 
transform_hlds__direct_arg_in_out__transform_class_instance_3_p_0(
  MR_Word DirectArgProcInOutMap_4,
  MR_Word Instance0_5,
  MR_Word * Instance_6)
{
  MR_Word MaybeMethodPredProcIds0_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instance0_5, (MR_Integer) 8))));

  if ((MaybeMethodPredProcIds0_7 == (MR_Word) ((MR_Unsigned) 0U)))
    *Instance_6 = Instance0_5;
  else
  {
    MR_Word MethodPredProcIds0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeMethodPredProcIds0_7, (MR_Integer) 0))));
    MR_Word MethodPredProcIds_9;
    MR_Word MaybeMethodPredProcIds_10;
    MR_Word Var_11;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_31;
    MR_Word Var_32;

    {
      Var_11 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_11, 0) = ((MR_Box) (&transform_hlds__direct_arg_in_out_scalar_common_8[5]));
      MR_hl_field(MR_mktag(0), Var_11, 1) = ((MR_Box) (transform_hlds__direct_arg_in_out__transform_class_instance_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_11, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_11, 3) = ((MR_Box) (DirectArgProcInOutMap_4));
    }
    mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), Var_11, MethodPredProcIds0_8, &MethodPredProcIds_9);
    {
      MaybeMethodPredProcIds_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybeMethodPredProcIds_10, 0) = ((MR_Box) (MethodPredProcIds_9));
    }
    Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instance0_5, (MR_Integer) 0))));
    Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instance0_5, (MR_Integer) 1))));
    Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instance0_5, (MR_Integer) 2))));
    Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instance0_5, (MR_Integer) 3))));
    Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instance0_5, (MR_Integer) 4))));
    Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instance0_5, (MR_Integer) 5))));
    Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instance0_5, (MR_Integer) 6))));
    Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instance0_5, (MR_Integer) 7))));
    Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instance0_5, (MR_Integer) 9))));
    Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instance0_5, (MR_Integer) 10))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
      *Instance_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (MaybeMethodPredProcIds_10));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_32));
    }
  }
}

static void MR_CALL 
transform_hlds__direct_arg_in_out__transform_class_instances_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Instance_6;

  transform_hlds__direct_arg_in_out__transform_class_instance_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Instance_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_Instance_6));
}

static void MR_CALL 
transform_hlds__direct_arg_in_out__transform_class_instances_3_p_0(
  MR_Word DirectArgProcInOutMap_4,
  MR_Word Instances0_5,
  MR_Word * Instances_6)
{
  MR_Word Var_7;

  {
    Var_7 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_7, 0) = ((MR_Box) (&transform_hlds__direct_arg_in_out_scalar_common_8[6]));
    MR_hl_field(MR_mktag(0), Var_7, 1) = ((MR_Box) (transform_hlds__direct_arg_in_out__transform_class_instances_3_p_0_1));
    MR_hl_field(MR_mktag(0), Var_7, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_7, 3) = ((MR_Box) (DirectArgProcInOutMap_4));
  }
  mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0), Var_7, Instances0_5, Instances_6);
}

static void MR_CALL 
transform_hlds__direct_arg_in_out__transform_class_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_PredProcId_6;

  transform_hlds__direct_arg_in_out__transform_class_instance_proc_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_PredProcId_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_PredProcId_6));
}

static void MR_CALL 
transform_hlds__direct_arg_in_out__transform_class_3_p_0(
  MR_Word DirectArgProcInOutMap_4,
  MR_Word Class0_5,
  MR_Word * Class_6)
{
  MR_Word PredProcIds0_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Class0_5, (MR_Integer) 7))));
  MR_Word PredProcIds_8;
  MR_Word Var_9;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Word Var_24;
  MR_Word Var_25;
  MR_Word Var_26;
  MR_Word Var_28;
  MR_Word Var_29;
  MR_Word Var_30;

  {
    Var_9 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_9, 0) = ((MR_Box) (&transform_hlds__direct_arg_in_out_scalar_common_8[5]));
    MR_hl_field(MR_mktag(0), Var_9, 1) = ((MR_Box) (transform_hlds__direct_arg_in_out__transform_class_3_p_0_1));
    MR_hl_field(MR_mktag(0), Var_9, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_9, 3) = ((MR_Box) (DirectArgProcInOutMap_4));
  }
  mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), Var_9, PredProcIds0_7, &PredProcIds_8);
  Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Class0_5, (MR_Integer) 0))));
  Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Class0_5, (MR_Integer) 1))));
  Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Class0_5, (MR_Integer) 2))));
  Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Class0_5, (MR_Integer) 3))));
  Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Class0_5, (MR_Integer) 4))));
  Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Class0_5, (MR_Integer) 5))));
  Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Class0_5, (MR_Integer) 6))));
  Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Class0_5, (MR_Integer) 8))));
  Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Class0_5, (MR_Integer) 9))));
  Var_30 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Class0_5, (MR_Integer) 10))) & (MR_Integer) 1);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
    *Class_6 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_20));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_21));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_22));
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_23));
    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_24));
    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_25));
    MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_26));
    MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (PredProcIds_8));
    MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_28));
    MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_29));
    MR_hl_field(MR_mktag(0), base, 10) = (MR_Box) ((MR_Unsigned) (Var_30));
  }
}

static void MR_CALL 
transform_hlds__direct_arg_in_out__maybe_transform_direct_arg_in_out_calls_in_proc_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_Specs_18;

  transform_hlds__direct_arg_in_out__maybe_add_foreign_proc_error_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_Specs_18);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Specs_18));
}

static void MR_CALL 
transform_hlds__direct_arg_in_out__maybe_transform_direct_arg_in_out_calls_in_proc_11_p_0(
  MR_Word DirectArgProcMap_12,
  MR_Word DirectArgProcInOutMap_13,
  MR_Word CloneInOutMap_14,
  MR_Word PredId_15,
  MR_Integer ProcId_16,
  MR_Word STATE_VARIABLE_ProcInfo_0_20,
  MR_Word * STATE_VARIABLE_ProcInfo_21,
  MR_Word STATE_VARIABLE_ModuleInfo_0_22,
  MR_Word * STATE_VARIABLE_ModuleInfo_23,
  MR_Word STATE_VARIABLE_Specs_0_24,
  MR_Word * STATE_VARIABLE_Specs_25)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_pred__proc_info_is_valid_mode_1_p_0(STATE_VARIABLE_ProcInfo_0_20);
  if (succeeded)
  {
    MR_Word Globals_26;
    MR_Word VeryVerbose_27;
    MR_Word VarTable0_28;
    MR_Word Goal0_29;
    MR_Word VarMap0_31;
    MR_Word Info0_32;
    MR_Word InstMap0_33;
    MR_Word Goal_34;
    MR_Word VarMap_35;
    MR_Word Info_36;
    MR_Word PredProcId_37;
    MR_Word HeadVars0_38;
    MR_Word VarTable_41;
    MR_Word CloneForeignProcs_42;
    MR_Word STATE_VARIABLE_ProcInfo_67_52;
    MR_Word STATE_VARIABLE_ProcInfo_68_53;
    MR_Word STATE_VARIABLE_ProcInfo_76_55;
    MR_Word Var_56;
    MR_Word STATE_VARIABLE_ProcInfo_80_58;
    MR_Word ModuleName_30;
    MR_Word OoMInOutArgs_43;
    MR_Box conv0_OoMInOutArgs_43;
    MR_Box conv2_STATE_VARIABLE_Specs_25;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_22, &Globals_26);
    libs__globals__lookup_bool_option_3_p_0(Globals_26, (MR_Integer) 73, &VeryVerbose_27);
    switch (VeryVerbose_27) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        hlds__passes_aux__write_proc_progress_message_6_p_0(STATE_VARIABLE_ModuleInfo_0_22, (MR_String) "Direct arg in out transforming", PredId_15, ProcId_16);
        break;
    }
    hlds__hlds_pred__proc_info_get_var_table_2_p_0(STATE_VARIABLE_ProcInfo_0_20, &VarTable0_28);
    hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_0_20, &Goal0_29);
    hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_ModuleInfo_0_22, &ModuleName_30);
    mercury__bimap__init_1_p_0((MR_Word) (&transform_hlds__direct_arg_in_out_scalar_common_1[4]), (MR_Word) (&transform_hlds__direct_arg_in_out_scalar_common_1[4]), &VarMap0_31);
    {
      Info0_32 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Info0_32, 0) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_22));
      MR_hl_field(MR_mktag(0), Info0_32, 1) = ((MR_Box) (DirectArgProcInOutMap_13));
      MR_hl_field(MR_mktag(0), Info0_32, 2) = ((MR_Box) (VarTable0_28));
      MR_hl_field(MR_mktag(0), Info0_32, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(STATE_VARIABLE_ModuleInfo_0_22, STATE_VARIABLE_ProcInfo_0_20, &InstMap0_33);
    transform_hlds__direct_arg_in_out__expand_daio_in_goal_7_p_0(Goal0_29, &Goal_34, InstMap0_33, VarMap0_31, &VarMap_35, Info0_32, &Info_36);
    {
      PredProcId_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), PredProcId_37, 0) = ((MR_Box) (PredId_15));
      MR_hl_field(MR_mktag(0), PredProcId_37, 1) = ((MR_Box) (ProcId_16));
    }
    hlds__hlds_pred__proc_info_get_headvars_2_p_0(STATE_VARIABLE_ProcInfo_0_20, &HeadVars0_38);
    VarTable_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_36, (MR_Integer) 2))));
    CloneForeignProcs_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_36, (MR_Integer) 3))));
    hlds__hlds_pred__proc_info_set_var_table_3_p_0(VarTable_41, STATE_VARIABLE_ProcInfo_0_20, &STATE_VARIABLE_ProcInfo_67_52);
    hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_34, STATE_VARIABLE_ProcInfo_67_52, &STATE_VARIABLE_ProcInfo_68_53);
    succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__direct_arg_in_out_scalar_common_1[2]), CloneInOutMap_14, ((MR_Box) (PredProcId_37)), &conv0_OoMInOutArgs_43);
    if (succeeded)
    {
      OoMInOutArgs_43 = ((MR_Word) (conv0_OoMInOutArgs_43));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      succeeded = (CloneForeignProcs_42 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      MR_Integer HeadInOutArg_44 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OoMInOutArgs_43, (MR_Integer) 0))));
      MR_Word TailInOutArgs_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OoMInOutArgs_43, (MR_Integer) 1))));
      MR_Word HeadVars_46;

      transform_hlds__direct_arg_in_out__replace_cloned_headvars_6_p_0(VarMap_35, (MR_Integer) 1, HeadInOutArg_44, TailInOutArgs_45, HeadVars0_38, &HeadVars_46);
      hlds__hlds_pred__proc_info_set_headvars_3_p_0(HeadVars_46, STATE_VARIABLE_ProcInfo_68_53, &STATE_VARIABLE_ProcInfo_76_55);
    }
    else
      STATE_VARIABLE_ProcInfo_76_55 = STATE_VARIABLE_ProcInfo_68_53;
    {
      Var_56 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_56, 0) = ((MR_Box) (&transform_hlds__direct_arg_in_out_scalar_common_11[0]));
      MR_hl_field(MR_mktag(0), Var_56, 1) = ((MR_Box) (transform_hlds__direct_arg_in_out__maybe_transform_direct_arg_in_out_calls_in_proc_11_p_0_1));
      MR_hl_field(MR_mktag(0), Var_56, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_56, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_22));
      MR_hl_field(MR_mktag(0), Var_56, 4) = ((MR_Box) (DirectArgProcMap_12));
      MR_hl_field(MR_mktag(0), Var_56, 5) = ((MR_Box) (DirectArgProcInOutMap_13));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__direct_arg_in_out_scalar_common_1[1]), Var_56, CloneForeignProcs_42, ((MR_Box) (STATE_VARIABLE_Specs_0_24)), &conv2_STATE_VARIABLE_Specs_25);
    *STATE_VARIABLE_Specs_25 = ((MR_Word) (conv2_STATE_VARIABLE_Specs_25));
    hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 0, STATE_VARIABLE_ProcInfo_76_55, &STATE_VARIABLE_ProcInfo_80_58);
    check_hlds__recompute_instmap_deltas__recompute_instmap_delta_proc_5_p_0((MR_Integer) 0, STATE_VARIABLE_ProcInfo_80_58, STATE_VARIABLE_ProcInfo_21, STATE_VARIABLE_ModuleInfo_0_22, STATE_VARIABLE_ModuleInfo_23);
  }
  else
  {
    *STATE_VARIABLE_Specs_25 = STATE_VARIABLE_Specs_0_24;
    *STATE_VARIABLE_ModuleInfo_23 = STATE_VARIABLE_ModuleInfo_0_22;
    *STATE_VARIABLE_ProcInfo_21 = STATE_VARIABLE_ProcInfo_0_20;
  }
}

static void MR_CALL 
transform_hlds__direct_arg_in_out__expand_daio_in_if_then_else_12_p_0(
  MR_Word GoalInfo0_13,
  MR_Word Cond0_14,
  MR_Word * Cond_15,
  MR_Word Then0_16,
  MR_Word * Then_17,
  MR_Word Else0_18,
  MR_Word * Else_19,
  MR_Word InstMap0_20,
  MR_Word InitVarMap_21,
  MR_Word * MergedVarMap_22,
  MR_Word STATE_VARIABLE_Info_0_44,
  MR_Word * STATE_VARIABLE_Info_45)
{
  MR_Word CondVarMap_24;
  MR_Word InstMap1_25;
  MR_Word Then1_26;
  MR_Word ThenVarMap_27;
  MR_Word Else1_28;
  MR_Word ElseVarMap_29;
  MR_Word ThenArmVarMap1_30;
  MR_Word ElseArmVarMap1_31;
  MR_Word NonLocals_32;
  MR_Word VarMapVars_33;
  MR_Word VarsToMerge_34;
  MR_Word MergedVarMapEntries_35;
  MR_Word MergedDisjunctsVarMaps_36;
  MR_Word STATE_VARIABLE_Info_46_46;
  MR_Word STATE_VARIABLE_Info_47_47;
  MR_Word STATE_VARIABLE_Info_48_48;
  MR_Word Var_49;
  MR_Word Var_50;
  MR_Word Var_51;
  MR_Word Var_52;
  MR_Word Var_53;
  MR_Word Var_54;
  MR_Word Var_55;
  MR_Word Var_56;
  MR_Word Var_58;

  transform_hlds__direct_arg_in_out__expand_daio_in_goal_7_p_0(Cond0_14, Cond_15, InstMap0_20, InitVarMap_21, &CondVarMap_24, STATE_VARIABLE_Info_0_44, &STATE_VARIABLE_Info_46_46);
  hlds__goal_util__update_instmap_3_p_0(Cond0_14, InstMap0_20, &InstMap1_25);
  transform_hlds__direct_arg_in_out__expand_daio_in_goal_7_p_0(Then0_16, &Then1_26, InstMap1_25, CondVarMap_24, &ThenVarMap_27, STATE_VARIABLE_Info_46_46, &STATE_VARIABLE_Info_47_47);
  transform_hlds__direct_arg_in_out__expand_daio_in_goal_7_p_0(Else0_18, &Else1_28, InstMap0_20, InitVarMap_21, &ElseVarMap_29, STATE_VARIABLE_Info_47_47, &STATE_VARIABLE_Info_48_48);
  {
    ThenArmVarMap1_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), ThenArmVarMap1_30, 0) = ((MR_Box) (Then1_26));
    MR_hl_field(MR_mktag(0), ThenArmVarMap1_30, 1) = ((MR_Box) (ThenVarMap_27));
  }
  {
    ElseArmVarMap1_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), ElseArmVarMap1_31, 0) = ((MR_Box) (Else1_28));
    MR_hl_field(MR_mktag(0), ElseArmVarMap1_31, 1) = ((MR_Box) (ElseVarMap_29));
  }
  NonLocals_32 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_13);
  Var_50 = mercury__bimap__ordinates_1_f_0((MR_Word) (&transform_hlds__direct_arg_in_out_scalar_common_1[4]), (MR_Word) (&transform_hlds__direct_arg_in_out_scalar_common_1[4]), InitVarMap_21);
  Var_52 = mercury__bimap__ordinates_1_f_0((MR_Word) (&transform_hlds__direct_arg_in_out_scalar_common_1[4]), (MR_Word) (&transform_hlds__direct_arg_in_out_scalar_common_1[4]), ThenVarMap_27);
  Var_53 = mercury__bimap__ordinates_1_f_0((MR_Word) (&transform_hlds__direct_arg_in_out_scalar_common_1[4]), (MR_Word) (&transform_hlds__direct_arg_in_out_scalar_common_1[4]), ElseVarMap_29);
  Var_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__direct_arg_in_out_scalar_common_1[4]), Var_52, Var_53);
  Var_49 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__direct_arg_in_out_scalar_common_1[4]), Var_50, Var_51);
  VarMapVars_33 = mercury__set__list_to_set_1_f_0((MR_Word) (&transform_hlds__direct_arg_in_out_scalar_common_1[4]), Var_49);
  Var_54 = parse_tree__set_of_var__bitset_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_32);
  mercury__set__intersect_3_p_0((MR_Word) (&transform_hlds__direct_arg_in_out_scalar_common_1[4]), Var_54, VarMapVars_33, &VarsToMerge_34);
  Var_55 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&transform_hlds__direct_arg_in_out_scalar_common_1[4]), VarsToMerge_34);
  {
    Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (ElseArmVarMap1_31));
    MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (ThenArmVarMap1_30));
    MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (Var_58));
  }
  transform_hlds__direct_arg_in_out__merge_branch_goals_varmaps_7_p_0((MR_Word) (&transform_hlds__direct_arg_in_out_scalar_common_1[5]), InitVarMap_21, Var_55, &MergedVarMapEntries_35, Var_56, &MergedDisjunctsVarMaps_36, STATE_VARIABLE_Info_48_48, STATE_VARIABLE_Info_45);
  mercury__bimap__det_from_assoc_list_2_p_0((MR_Word) (&transform_hlds__direct_arg_in_out_scalar_common_1[4]), (MR_Word) (&transform_hlds__direct_arg_in_out_scalar_common_1[4]), MergedVarMapEntries_35, MergedVarMap_22);
  if ((MergedDisjunctsVarMaps_36 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.direct_arg_in_out.expand_daio_in_if_then_else\'/12", (MR_String) "then and else not length 2");
      return;
    }
  else
  {
    MR_Word Var_78 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MergedDisjunctsVarMaps_36, (MR_Integer) 1))));
    MR_Word Var_79 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MergedDisjunctsVarMaps_36, (MR_Integer) 0))));

    if ((Var_78 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.direct_arg_in_out.expand_daio_in_if_then_else\'/12", (MR_String) "then and else not length 2");
        return;
      }
    else
    {
      MR_Word Var_80 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_78, (MR_Integer) 1))));
      MR_Word Var_81 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_78, (MR_Integer) 0))));

      if ((Var_80 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *Then_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_79, (MR_Integer) 0))));
        *Else_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_81, (MR_Integer) 0))));
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.direct_arg_in_out.expand_daio_in_if_then_else\'/12", (MR_String) "then and else not length 2");
          return;
        }
    }
  }
}

static void MR_CALL 
transform_hlds__direct_arg_in_out__expand_daio_in_conj_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word InstMap0_3,
  MR_Word STATE_VARIABLE_VarMap_0_4,
  MR_Word * STATE_VARIABLE_VarMap_5,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_7 = STATE_VARIABLE_Info_0_6;
    *STATE_VARIABLE_VarMap_5 = STATE_VARIABLE_VarMap_0_4;
  }
  else
  {
    MR_Word Goal0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Goals0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Goal_17;
    MR_Word Goals_18;
    MR_Word InstMap1_22;
    MR_Word STATE_VARIABLE_VarMap_27_27;
    MR_Word STATE_VARIABLE_Info_28_28;

    transform_hlds__direct_arg_in_out__expand_daio_in_goal_7_p_0(Goal0_15, &Goal_17, InstMap0_3, STATE_VARIABLE_VarMap_0_4, &STATE_VARIABLE_VarMap_27_27, STATE_VARIABLE_Info_0_6, &STATE_VARIABLE_Info_28_28);
    hlds__goal_util__update_instmap_3_p_0(Goal0_15, InstMap0_3, &InstMap1_22);
    transform_hlds__direct_arg_in_out__expand_daio_in_conj_7_p_0(Goals0_16, &Goals_18, InstMap1_22, STATE_VARIABLE_VarMap_27_27, STATE_VARIABLE_VarMap_5, STATE_VARIABLE_Info_28_28, STATE_VARIABLE_Info_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_17));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_18));
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__direct_arg_in_out__expand_daio_in_goal_7_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__direct_arg_in_out__IntroducedFrom__pred__expand_daio_in_goal__1145__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
transform_hlds__direct_arg_in_out__expand_daio_in_goal_7_p_0(
  MR_Word Goal0_8,
  MR_Word * Goal_9,
  MR_Word InstMap0_10,
  MR_Word STATE_VARIABLE_VarMap_0_116,
  MR_Word * STATE_VARIABLE_VarMap_117,
  MR_Word STATE_VARIABLE_Info_0_118,
  MR_Word * STATE_VARIABLE_Info_119)
{
  MR_bool succeeded;
  MR_Word GoalExpr0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_8, (MR_Integer) 0))));
  MR_Word GoalInfo0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_8, (MR_Integer) 1))));
  MR_Word VarRename_15;
  MR_Word GoalInfo1_16;
  MR_Word GoalExpr_47;

  VarRename_15 = mercury__bimap__forward_map_1_f_0((MR_Word) (&transform_hlds__direct_arg_in_out_scalar_common_1[4]), (MR_Word) (&transform_hlds__direct_arg_in_out_scalar_common_1[4]), STATE_VARIABLE_VarMap_0_116);
  hlds__hlds_goal__rename_vars_in_goal_info_4_p_0((MR_Integer) 1, VarRename_15, GoalInfo0_14, &GoalInfo1_16);
  switch (MR_tag((MR_Word) GoalExpr0_13)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word SubGoal0_87 = (MR_Word) ((MR_Word) (GoalExpr0_13));
        MR_Word SubGoal_88;
        MR_Word Var_89;

        transform_hlds__direct_arg_in_out__expand_daio_in_goal_7_p_0(SubGoal0_87, &SubGoal_88, InstMap0_10, STATE_VARIABLE_VarMap_0_116, &Var_89, STATE_VARIABLE_Info_0_118, STATE_VARIABLE_Info_119);
        GoalExpr_47 = (MR_Word) ((MR_Word) (SubGoal_88));
        *STATE_VARIABLE_VarMap_117 = STATE_VARIABLE_VarMap_0_116;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Unification_66 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_13, (MR_Integer) 3))));
        MR_Word GoalExpr2_78;
        MR_Word GoalExpr1_233;
        MR_Word TypeCtorInfo_275_275;
        MR_Word TypeCtorInfo_276_276;
        MR_Word ConsId_69;
        MR_Word ShroudedPredProcId_75;
        MR_Word ClosurePredProcId_77;
        MR_Word ProcMap_231;

        succeeded = ((MR_tag((MR_Word) Unification_66)) == (MR_Integer) 0);
        if (succeeded)
        {
          ConsId_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_66, (MR_Integer) 1))));
          succeeded = ((((MR_tag((MR_Word) ConsId_69)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_69, (MR_Integer) 0)))) == (MR_Integer) 4)));
          if (succeeded)
          {
            ShroudedPredProcId_75 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_69, (MR_Integer) 1))));
            ClosurePredProcId_77 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(ShroudedPredProcId_75);
            ProcMap_231 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_118, (MR_Integer) 1))));
            TypeCtorInfo_275_275 = (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0);
            TypeCtorInfo_276_276 = (MR_Word) (&transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__type_ctor_info_direct_arg_proc_in_out_0);
            succeeded = mercury__map__contains_2_p_0(TypeCtorInfo_275_275, TypeCtorInfo_276_276, ProcMap_231, ((MR_Box) (ClosurePredProcId_77)));
          }
        }
        if (succeeded)
        {
          MR_String Var_150;

          Var_150 = mercury__string__f_43_43_2_f_0((MR_String) "cannot construct closure with partially-instantiated ", (MR_String) "direct_arg arguments");
          {
            mercury__require__sorry_2_p_0((MR_String) "predicate \140transform_hlds.direct_arg_in_out.expand_daio_in_goal\'/7", Var_150);
            return;
          }
        }
        else
          GoalExpr1_233 = GoalExpr0_13;
        hlds__hlds_goal__rename_vars_in_goal_expr_4_p_0((MR_Integer) 1, VarRename_15, GoalExpr1_233, &GoalExpr2_78);
        transform_hlds__direct_arg_in_out__expand_daio_in_unify_8_p_0(GoalInfo1_16, GoalExpr2_78, &GoalExpr_47, InstMap0_10, STATE_VARIABLE_VarMap_0_116, STATE_VARIABLE_VarMap_117, STATE_VARIABLE_Info_0_118, STATE_VARIABLE_Info_119);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word GoalExpr1_23;
        MR_Word CalleePredId_24;
        MR_Integer CalleeProcId_25;
        MR_Word Args0_26;
        MR_Word BuiltinState_27;
        MR_Word MaybeUnifyContext_28;
        MR_Word ProcMap_30;
        MR_Word CalleePredProcId_31;
        MR_Word CloneProc_32;
        MR_Box conv1_CloneProc_32;

        hlds__hlds_goal__rename_vars_in_goal_expr_4_p_1((MR_Integer) 1, VarRename_15, GoalExpr0_13, &GoalExpr1_23);
        CalleePredId_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr1_23, (MR_Integer) 0))));
        CalleeProcId_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), GoalExpr1_23, (MR_Integer) 1))));
        Args0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr1_23, (MR_Integer) 2))));
        BuiltinState_27 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), GoalExpr1_23, (MR_Integer) 3))) & (MR_Integer) 1);
        MaybeUnifyContext_28 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr1_23, (MR_Integer) 4))));
        ProcMap_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_118, (MR_Integer) 1))));
        {
          CalleePredProcId_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), CalleePredProcId_31, 0) = ((MR_Box) (CalleePredId_24));
          MR_hl_field(MR_mktag(0), CalleePredProcId_31, 1) = ((MR_Box) (CalleeProcId_25));
        }
        succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__type_ctor_info_direct_arg_proc_in_out_0), ProcMap_30, ((MR_Box) (CalleePredProcId_31)), &conv1_CloneProc_32);
        if (succeeded)
        {
          CloneProc_32 = ((MR_Word) (conv1_CloneProc_32));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word ClonePredProcId_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CloneProc_32, (MR_Integer) 0))));
          MR_Word OoMInOutArgs_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CloneProc_32, (MR_Integer) 1))));
          MR_Word ClonePredId_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClonePredProcId_35, (MR_Integer) 0))));
          MR_Integer CloneProcId_38 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ClonePredProcId_35, (MR_Integer) 1))));
          MR_Integer HeadInOutArg_39 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OoMInOutArgs_36, (MR_Integer) 0))));
          MR_Word TailInOutArgs_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OoMInOutArgs_36, (MR_Integer) 1))));
          MR_Word Args_41;
          MR_Word ModuleInfo_42;
          MR_Word ModuleName_43;
          MR_Word ClonePredInfo_44;
          MR_String ClonePredName_45;
          MR_Word CloneSymName_46;

          transform_hlds__direct_arg_in_out__clone_in_out_args_in_plain_call_9_p_0((MR_Integer) 1, HeadInOutArg_39, TailInOutArgs_40, Args0_26, &Args_41, STATE_VARIABLE_VarMap_0_116, STATE_VARIABLE_VarMap_117, STATE_VARIABLE_Info_0_118, STATE_VARIABLE_Info_119);
          ModuleInfo_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), *STATE_VARIABLE_Info_119, (MR_Integer) 0))));
          hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_42, &ModuleName_43);
          hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_42, ClonePredId_37, &ClonePredInfo_44);
          hlds__hlds_pred__pred_info_get_name_2_p_0(ClonePredInfo_44, &ClonePredName_45);
          {
            CloneSymName_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), CloneSymName_46, 0) = ((MR_Box) (ModuleName_43));
            MR_hl_field(MR_mktag(1), CloneSymName_46, 1) = ((MR_Box) (ClonePredName_45));
          }
          {
            GoalExpr_47 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), GoalExpr_47, 0) = ((MR_Box) (ClonePredId_37));
            MR_hl_field(MR_mktag(2), GoalExpr_47, 1) = ((MR_Box) (CloneProcId_38));
            MR_hl_field(MR_mktag(2), GoalExpr_47, 2) = ((MR_Box) (Args_41));
            MR_hl_field(MR_mktag(2), GoalExpr_47, 3) = (MR_Box) ((MR_Unsigned) (BuiltinState_27));
            MR_hl_field(MR_mktag(2), GoalExpr_47, 4) = ((MR_Box) (MaybeUnifyContext_28));
            MR_hl_field(MR_mktag(2), GoalExpr_47, 5) = ((MR_Box) (CloneSymName_46));
          }
        }
        else
        {
          GoalExpr_47 = GoalExpr1_23;
          *STATE_VARIABLE_Info_119 = STATE_VARIABLE_Info_0_118;
          *STATE_VARIABLE_VarMap_117 = STATE_VARIABLE_VarMap_0_116;
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr0_13, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word GenericCall_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_13, (MR_Integer) 1))));
            MR_Word ArgVars0_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_13, (MR_Integer) 2))));
            MR_Word ArgModes0_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_13, (MR_Integer) 3))));
            MR_Word RegTypes_51 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_13, (MR_Integer) 4))));
            MR_Word Detism_52 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_13, (MR_Integer) 5))) & (MR_Integer) 7);
            MR_Word ArgVars_53;
            MR_Word ArgModes_54;
            MR_Word Var_138;
            MR_Word GoalExpr1_196;

            transform_hlds__direct_arg_in_out__clone_in_out_args_in_generic_call_8_p_0(ArgVars0_49, &ArgVars_53, ArgModes0_50, &ArgModes_54, STATE_VARIABLE_VarMap_0_116, STATE_VARIABLE_VarMap_117, STATE_VARIABLE_Info_0_118, STATE_VARIABLE_Info_119);
            {
              Var_138 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_138, 0) = ((MR_Box) (&transform_hlds__direct_arg_in_out_scalar_common_4[2]));
              MR_hl_field(MR_mktag(0), Var_138, 1) = ((MR_Box) (transform_hlds__direct_arg_in_out__expand_daio_in_goal_7_p_0_1));
              MR_hl_field(MR_mktag(0), Var_138, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), Var_138, 3) = ((MR_Box) (RegTypes_51));
              MR_hl_field(MR_mktag(0), Var_138, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            mercury__require__expect_3_p_0(Var_138, (MR_String) "predicate \140transform_hlds.direct_arg_in_out.expand_daio_in_goal\'/7", (MR_String) "arg reg types set");
            {
              GoalExpr1_196 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), GoalExpr1_196, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), GoalExpr1_196, 1) = ((MR_Box) (GenericCall_48));
              MR_hl_field(MR_mktag(3), GoalExpr1_196, 2) = ((MR_Box) (ArgVars_53));
              MR_hl_field(MR_mktag(3), GoalExpr1_196, 3) = ((MR_Box) (ArgModes_54));
              MR_hl_field(MR_mktag(3), GoalExpr1_196, 4) = ((MR_Box) (RegTypes_51));
              MR_hl_field(MR_mktag(3), GoalExpr1_196, 5) = (MR_Box) ((MR_Unsigned) (Detism_52));
            }
            hlds__hlds_goal__rename_vars_in_goal_expr_4_p_2((MR_Integer) 1, VarRename_15, GoalExpr1_196, &GoalExpr_47);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Attrs_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_13, (MR_Integer) 1))));
            MR_Word ExtraArgs_56 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_13, (MR_Integer) 5))));
            MR_Word TraceCond_57 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_13, (MR_Integer) 6))));
            MR_Word Impl_58 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_13, (MR_Integer) 7))));
            MR_Word CalleePredId_217 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_13, (MR_Integer) 2))));
            MR_Integer CalleeProcId_218 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr0_13, (MR_Integer) 3))));
            MR_Word Args0_219 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_13, (MR_Integer) 4))));
            MR_Word ProcMap_220;
            MR_Word CalleePredProcId_221;
            MR_Word CloneProc_207;
            MR_Box conv0_CloneProc_207;

            {
              CalleePredProcId_221 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), CalleePredProcId_221, 0) = ((MR_Box) (CalleePredId_217));
              MR_hl_field(MR_mktag(0), CalleePredProcId_221, 1) = ((MR_Box) (CalleeProcId_218));
            }
            ProcMap_220 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_118, (MR_Integer) 1))));
            succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__type_ctor_info_direct_arg_proc_in_out_0), ProcMap_220, ((MR_Box) (CalleePredProcId_221)), &conv0_CloneProc_207);
            if (succeeded)
            {
              CloneProc_207 = ((MR_Word) (conv0_CloneProc_207));
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              MR_Word CloneProcInfo_59;
              MR_Word CloneArgModes_60;
              MR_Word CloneForeignProcs0_61;
              MR_Word CloneForeignProcs_62;
              MR_Word STATE_VARIABLE_Info_145_145;
              MR_Word GoalExpr1_197;
              MR_Word ClonePredProcId_198 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CloneProc_207, (MR_Integer) 0))));
              MR_Word OoMInOutArgs_199 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CloneProc_207, (MR_Integer) 1))));
              MR_Word ClonePredId_200 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClonePredProcId_198, (MR_Integer) 0))));
              MR_Integer CloneProcId_201 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ClonePredProcId_198, (MR_Integer) 1))));
              MR_Integer HeadInOutArg_202 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OoMInOutArgs_199, (MR_Integer) 0))));
              MR_Word TailInOutArgs_203 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OoMInOutArgs_199, (MR_Integer) 1))));
              MR_Word Args_204;
              MR_Word ModuleInfo_205 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_118, (MR_Integer) 0))));
              MR_Word Var_259;
              MR_Word Var_260;
              MR_Word Var_261;

              hlds__hlds_module__module_info_proc_info_3_p_0(ModuleInfo_205, ClonePredProcId_198, &CloneProcInfo_59);
              hlds__hlds_pred__proc_info_get_argmodes_2_p_0(CloneProcInfo_59, &CloneArgModes_60);
              transform_hlds__direct_arg_in_out__clone_in_out_args_in_call_foreign_proc_10_p_0((MR_Integer) 1, HeadInOutArg_202, TailInOutArgs_203, Args0_219, CloneArgModes_60, &Args_204, STATE_VARIABLE_VarMap_0_116, STATE_VARIABLE_VarMap_117, STATE_VARIABLE_Info_0_118, &STATE_VARIABLE_Info_145_145);
              {
                GoalExpr1_197 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr1_197, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), GoalExpr1_197, 1) = ((MR_Box) (Attrs_55));
                MR_hl_field(MR_mktag(3), GoalExpr1_197, 2) = ((MR_Box) (ClonePredId_200));
                MR_hl_field(MR_mktag(3), GoalExpr1_197, 3) = ((MR_Box) (CloneProcId_201));
                MR_hl_field(MR_mktag(3), GoalExpr1_197, 4) = ((MR_Box) (Args_204));
                MR_hl_field(MR_mktag(3), GoalExpr1_197, 5) = ((MR_Box) (ExtraArgs_56));
                MR_hl_field(MR_mktag(3), GoalExpr1_197, 6) = ((MR_Box) (TraceCond_57));
                MR_hl_field(MR_mktag(3), GoalExpr1_197, 7) = ((MR_Box) (Impl_58));
              }
              hlds__hlds_goal__rename_vars_in_goal_expr_4_p_3((MR_Integer) 1, VarRename_15, GoalExpr1_197, &GoalExpr_47);
              Var_259 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_145_145, (MR_Integer) 0))));
              Var_260 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_145_145, (MR_Integer) 1))));
              Var_261 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_145_145, (MR_Integer) 2))));
              CloneForeignProcs0_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_145_145, (MR_Integer) 3))));
              {
                CloneForeignProcs_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), CloneForeignProcs_62, 0) = ((MR_Box) (CalleePredProcId_221));
                MR_hl_field(MR_mktag(1), CloneForeignProcs_62, 1) = ((MR_Box) (CloneForeignProcs0_61));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                *STATE_VARIABLE_Info_119 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_259));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_260));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_261));
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (CloneForeignProcs_62));
              }
            }
            else
            {
              hlds__hlds_goal__rename_vars_in_goal_expr_4_p_3((MR_Integer) 1, VarRename_15, GoalExpr0_13, &GoalExpr_47);
              *STATE_VARIABLE_Info_119 = STATE_VARIABLE_Info_0_118;
              *STATE_VARIABLE_VarMap_117 = STATE_VARIABLE_VarMap_0_116;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConjType_79 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_13, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word Goals0_80 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_13, (MR_Integer) 2))));
            MR_Word Goals_81;

            transform_hlds__direct_arg_in_out__expand_daio_in_conj_7_p_0(Goals0_80, &Goals_81, InstMap0_10, STATE_VARIABLE_VarMap_0_116, STATE_VARIABLE_VarMap_117, STATE_VARIABLE_Info_0_118, STATE_VARIABLE_Info_119);
            {
              GoalExpr_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), GoalExpr_47, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(MR_mktag(3), GoalExpr_47, 1) = (MR_Box) ((MR_Unsigned) (ConjType_79));
              MR_hl_field(MR_mktag(3), GoalExpr_47, 2) = ((MR_Box) (Goals_81));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Goals0_237 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_13, (MR_Integer) 1))));
            MR_Word Goals_238;

            transform_hlds__direct_arg_in_out__expand_daio_in_branches_8_p_0((MR_Word) (&transform_hlds__direct_arg_in_out_scalar_common_1[5]), GoalInfo0_14, InstMap0_10, Goals0_237, &Goals_238, STATE_VARIABLE_VarMap_0_116, STATE_VARIABLE_VarMap_117, STATE_VARIABLE_Info_0_118, STATE_VARIABLE_Info_119);
            {
              GoalExpr_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), GoalExpr_47, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(MR_mktag(3), GoalExpr_47, 1) = ((MR_Box) (Goals_238));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var0_82 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_13, (MR_Integer) 1))));
            MR_Word CanFail_83 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_13, (MR_Integer) 2))) & (MR_Integer) 1);
            MR_Word Cases0_84 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_13, (MR_Integer) 3))));
            MR_Word Var_85;
            MR_Word Cases_86;

            parse_tree__prog_rename__rename_var_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, VarRename_15, Var0_82, &Var_85);
            transform_hlds__direct_arg_in_out__expand_daio_in_branches_8_p_0((MR_Word) (&transform_hlds__direct_arg_in_out_scalar_common_1[6]), GoalInfo0_14, InstMap0_10, Cases0_84, &Cases_86, STATE_VARIABLE_VarMap_0_116, STATE_VARIABLE_VarMap_117, STATE_VARIABLE_Info_0_118, STATE_VARIABLE_Info_119);
            {
              GoalExpr_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), GoalExpr_47, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(3), GoalExpr_47, 1) = ((MR_Box) (Var_85));
              MR_hl_field(MR_mktag(3), GoalExpr_47, 2) = (MR_Box) ((MR_Unsigned) (CanFail_83));
              MR_hl_field(MR_mktag(3), GoalExpr_47, 3) = ((MR_Box) (Cases_86));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason_97 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_13, (MR_Integer) 1))));
            MR_Word SubGoal0_243 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_13, (MR_Integer) 2))));
            MR_Word FGT_99;

            succeeded = ((((MR_tag((MR_Word) Reason_97)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason_97, (MR_Integer) 0)))) == (MR_Integer) 6)));
            if (succeeded)
            {
              FGT_99 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason_97, (MR_Integer) 2))) & (MR_Integer) 3);
              switch (FGT_99) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 1:
                  succeeded = MR_TRUE;
                  break;
                case (MR_Integer) 2:
                  succeeded = MR_TRUE;
                  break;
              }
            }
            if (succeeded)
            {
              GoalExpr_47 = GoalExpr0_13;
              *STATE_VARIABLE_Info_119 = STATE_VARIABLE_Info_0_118;
              *STATE_VARIABLE_VarMap_117 = STATE_VARIABLE_VarMap_0_116;
            }
            else
            {
              MR_Word SubGoal_241;

              transform_hlds__direct_arg_in_out__expand_daio_in_goal_7_p_0(SubGoal0_243, &SubGoal_241, InstMap0_10, STATE_VARIABLE_VarMap_0_116, STATE_VARIABLE_VarMap_117, STATE_VARIABLE_Info_0_118, STATE_VARIABLE_Info_119);
              {
                GoalExpr_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_47, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), GoalExpr_47, 1) = ((MR_Box) (Reason_97));
                MR_hl_field(MR_mktag(3), GoalExpr_47, 2) = ((MR_Box) (SubGoal_241));
              }
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Vars_90 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_13, (MR_Integer) 1))));
            MR_Word Cond0_91 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_13, (MR_Integer) 2))));
            MR_Word Then0_92 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_13, (MR_Integer) 3))));
            MR_Word Else0_93 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_13, (MR_Integer) 4))));
            MR_Word Cond_94;
            MR_Word Then_95;
            MR_Word Else_96;

            transform_hlds__direct_arg_in_out__expand_daio_in_if_then_else_12_p_0(GoalInfo0_14, Cond0_91, &Cond_94, Then0_92, &Then_95, Else0_93, &Else_96, InstMap0_10, STATE_VARIABLE_VarMap_0_116, STATE_VARIABLE_VarMap_117, STATE_VARIABLE_Info_0_118, STATE_VARIABLE_Info_119);
            {
              GoalExpr_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), GoalExpr_47, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(MR_mktag(3), GoalExpr_47, 1) = ((MR_Box) (Vars_90));
              MR_hl_field(MR_mktag(3), GoalExpr_47, 2) = ((MR_Box) (Cond_94));
              MR_hl_field(MR_mktag(3), GoalExpr_47, 3) = ((MR_Box) (Then_95));
              MR_hl_field(MR_mktag(3), GoalExpr_47, 4) = ((MR_Box) (Else_96));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word ShortHand0_100 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_13, (MR_Integer) 1))));
            MR_Word ShortHand_111;

            switch (MR_tag((MR_Word) ShortHand0_100)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.direct_arg_in_out.expand_daio_in_goal\'/7", (MR_String) "bi_implication");
                  return;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word GoalType_101 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), ShortHand0_100, (MR_Integer) 0))) & (MR_Integer) 3);
                  MR_Word Outer_102 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_100, (MR_Integer) 1))));
                  MR_Word Inner_103 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_100, (MR_Integer) 2))));
                  MR_Word MaybeOutputVars_104 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_100, (MR_Integer) 3))));
                  MR_Word MainGoal0_105 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_100, (MR_Integer) 4))));
                  MR_Word OrElseGoals0_106 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_100, (MR_Integer) 5))));
                  MR_Word OrElseInners_107 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_100, (MR_Integer) 6))));
                  MR_Word MainOrElseGoals_108;
                  MR_Word MainGoal_109;
                  MR_Word OrElseGoals_110;
                  MR_Word Var_188;
                  MR_Box conv2_MainGoal_109;

                  {
                    Var_188 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_188, 0) = ((MR_Box) (MainGoal0_105));
                    MR_hl_field(MR_mktag(1), Var_188, 1) = ((MR_Box) (OrElseGoals0_106));
                  }
                  transform_hlds__direct_arg_in_out__expand_daio_in_branches_8_p_0((MR_Word) (&transform_hlds__direct_arg_in_out_scalar_common_1[5]), GoalInfo1_16, InstMap0_10, Var_188, &MainOrElseGoals_108, STATE_VARIABLE_VarMap_0_116, STATE_VARIABLE_VarMap_117, STATE_VARIABLE_Info_0_118, STATE_VARIABLE_Info_119);
                  mercury__list__det_head_tail_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), MainOrElseGoals_108, &conv2_MainGoal_109, &OrElseGoals_110);
                  MainGoal_109 = ((MR_Word) (conv2_MainGoal_109));
                  {
                    ShortHand_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ShortHand_111, 0) = (MR_Box) ((MR_Unsigned) (GoalType_101));
                    MR_hl_field(MR_mktag(1), ShortHand_111, 1) = ((MR_Box) (Outer_102));
                    MR_hl_field(MR_mktag(1), ShortHand_111, 2) = ((MR_Box) (Inner_103));
                    MR_hl_field(MR_mktag(1), ShortHand_111, 3) = ((MR_Box) (MaybeOutputVars_104));
                    MR_hl_field(MR_mktag(1), ShortHand_111, 4) = ((MR_Box) (MainGoal_109));
                    MR_hl_field(MR_mktag(1), ShortHand_111, 5) = ((MR_Box) (OrElseGoals_110));
                    MR_hl_field(MR_mktag(1), ShortHand_111, 6) = ((MR_Box) (OrElseInners_107));
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word MaybeIO_112 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand0_100, (MR_Integer) 0))));
                  MR_Word ResultVar_113 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand0_100, (MR_Integer) 1))));
                  MR_Word SubGoal0_245 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand0_100, (MR_Integer) 2))));
                  MR_Word SubGoal_246;

                  transform_hlds__direct_arg_in_out__expand_daio_in_goal_7_p_0(SubGoal0_245, &SubGoal_246, InstMap0_10, STATE_VARIABLE_VarMap_0_116, STATE_VARIABLE_VarMap_117, STATE_VARIABLE_Info_0_118, STATE_VARIABLE_Info_119);
                  {
                    ShortHand_111 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), ShortHand_111, 0) = ((MR_Box) (MaybeIO_112));
                    MR_hl_field(MR_mktag(2), ShortHand_111, 1) = ((MR_Box) (ResultVar_113));
                    MR_hl_field(MR_mktag(2), ShortHand_111, 2) = ((MR_Box) (SubGoal_246));
                  }
                }
                break;
            }
            {
              GoalExpr_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), GoalExpr_47, 0) = ((MR_Box) ((MR_Unsigned) 7U));
              MR_hl_field(MR_mktag(3), GoalExpr_47, 1) = ((MR_Box) (ShortHand_111));
            }
          }
          break;
      }
      break;
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_9 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_47));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo1_16));
  }
}

static MR_Box MR_CALL 
transform_hlds__direct_arg_in_out__expand_daio_in_branches_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;

  wrapper_arg_2 = transform_hlds__direct_arg_in_out__IntroducedFrom__func__expand_daio_in_branches__1730__1_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return wrapper_arg_2;
}

static void MR_CALL 
transform_hlds__direct_arg_in_out__expand_daio_in_branches_8_p_0(
  MR_Word TypeClassInfo_for_goal_like_67,
  MR_Word GoalInfo0_9,
  MR_Word InstMap0_10,
  MR_Word Arms0_11,
  MR_Word * Arms_12,
  MR_Word InitVarMap_13,
  MR_Word * MergedVarMap_14,
  MR_Word STATE_VARIABLE_Info_0_27,
  MR_Word * STATE_VARIABLE_Info_28)
{
  MR_Word TypeInfo_72_72;
  MR_Word TypeInfo_74_74;
  MR_Word TypeInfo_75_75;
  MR_Word ArmsVarMaps_16;
  MR_Word NonLocals_17;
  MR_Word NonLocalsSet_18;
  MR_Word VarMapVars0_19;
  MR_Word VarMapVars_20;
  MR_Word VarsToMerge_21;
  MR_Word MergedVarMapEntries_22;
  MR_Word MergedArmsVarMaps_23;
  MR_Word STATE_VARIABLE_Info_29_29;
  MR_Word Var_30;
  MR_Word Var_31;
  MR_Word Var_63;
  MR_Word TypeInfo_71_71;

  transform_hlds__direct_arg_in_out__expand_daio_in_goal_likes_varmaps_6_p_0(TypeClassInfo_for_goal_like_67, InitVarMap_13, Arms0_11, InstMap0_10, &ArmsVarMaps_16, STATE_VARIABLE_Info_0_27, &STATE_VARIABLE_Info_29_29);
  NonLocals_17 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_9);
  NonLocalsSet_18 = parse_tree__set_of_var__bitset_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_17);
  Var_30 = mercury__bimap__ordinates_1_f_0((MR_Word) (&transform_hlds__direct_arg_in_out_scalar_common_1[4]), (MR_Word) (&transform_hlds__direct_arg_in_out_scalar_common_1[4]), InitVarMap_13);
  VarMapVars0_19 = mercury__set__list_to_set_1_f_0((MR_Word) (&transform_hlds__direct_arg_in_out_scalar_common_1[4]), Var_30);
  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_goal_like_67, (MR_Integer) 1, &TypeInfo_71_71);
  transform_hlds__direct_arg_in_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_111_114_105_103_95_118_97_114_115_95_95_91_49_93_95_48_3_p_0(ArmsVarMaps_16, VarMapVars0_19, &VarMapVars_20);
  mercury__set__intersect_3_p_0((MR_Word) (&transform_hlds__direct_arg_in_out_scalar_common_1[4]), NonLocalsSet_18, VarMapVars_20, &VarsToMerge_21);
  Var_31 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&transform_hlds__direct_arg_in_out_scalar_common_1[4]), VarsToMerge_21);
  transform_hlds__direct_arg_in_out__merge_branch_goals_varmaps_7_p_0(TypeClassInfo_for_goal_like_67, InitVarMap_13, Var_31, &MergedVarMapEntries_22, ArmsVarMaps_16, &MergedArmsVarMaps_23, STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Info_28);
  mercury__bimap__det_from_assoc_list_2_p_0((MR_Word) (&transform_hlds__direct_arg_in_out_scalar_common_1[4]), (MR_Word) (&transform_hlds__direct_arg_in_out_scalar_common_1[4]), MergedVarMapEntries_22, MergedVarMap_14);
  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_goal_like_67, (MR_Integer) 1, &TypeInfo_72_72);
  {
    TypeInfo_74_74 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeInfo_74_74, 0) = ((MR_Box) (&transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__type_ctor_info_arm_varmap_1));
    MR_hl_field(MR_mktag(0), TypeInfo_74_74, 1) = ((MR_Box) (TypeInfo_72_72));
  }
  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_goal_like_67, (MR_Integer) 1, &TypeInfo_75_75);
  {
    Var_63 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_63, 0) = ((MR_Box) (&transform_hlds__direct_arg_in_out_scalar_common_8[4]));
    MR_hl_field(MR_mktag(0), Var_63, 1) = ((MR_Box) (transform_hlds__direct_arg_in_out__expand_daio_in_branches_8_p_0_1));
    MR_hl_field(MR_mktag(0), Var_63, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_63, 3) = ((MR_Box) (TypeClassInfo_for_goal_like_67));
  }
  *Arms_12 = mercury__list__map_2_f_0(TypeInfo_74_74, TypeInfo_75_75, (MR_Word) (Var_63), (MR_Word) (MergedArmsVarMaps_23));
}

static void MR_CALL 
transform_hlds__direct_arg_in_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_111_114_105_103_95_118_97_114_115_95_95_91_49_93_95_48_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_OrigVars_0_2,
  MR_Word * STATE_VARIABLE_OrigVars_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_OrigVars_3 = STATE_VARIABLE_OrigVars_0_2;
    else
    {
      MR_Word ArmVarMap_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArmVarMaps_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word VarMap_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArmVarMap_7, (MR_Integer) 1))));
      MR_Word Var_14;
      MR_Word STATE_VARIABLE_OrigVars_15_15;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_OrigVars_0_2;

      Var_14 = mercury__bimap__ordinates_1_f_0((MR_Word) (&transform_hlds__direct_arg_in_out_scalar_common_1[4]), (MR_Word) (&transform_hlds__direct_arg_in_out_scalar_common_1[4]), VarMap_11);
      mercury__set__insert_list_3_p_0((MR_Word) (&transform_hlds__direct_arg_in_out_scalar_common_1[4]), Var_14, STATE_VARIABLE_OrigVars_0_2, &STATE_VARIABLE_OrigVars_15_15);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = ArmVarMaps_8;
      next_value_of_STATE_VARIABLE_OrigVars_0_2 = STATE_VARIABLE_OrigVars_15_15;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_OrigVars_0_2 = next_value_of_STATE_VARIABLE_OrigVars_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__direct_arg_in_out__merge_branch_goals_varmaps_7_p_0(
  MR_Word TypeClassInfo_for_goal_like_31,
  MR_Word EntryVarMap_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_GoalsVarMaps_0_4,
  MR_Word * STATE_VARIABLE_GoalsVarMaps_5,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_7 = STATE_VARIABLE_Info_0_6;
    *STATE_VARIABLE_GoalsVarMaps_5 = STATE_VARIABLE_GoalsVarMaps_0_4;
  }
  else
  {
    MR_Word OrigVar_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word OrigVars_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word MergeVar_18;
    MR_Word OrigMergeVars_19;
    MR_Word Var_27;
    MR_Word STATE_VARIABLE_Info_29_29;
    MR_Word STATE_VARIABLE_GoalsVarMaps_30_30;
    MR_Word EntryVar_22;
    MR_Word Var_28;
    MR_Box conv0_EntryVar_22;

    succeeded = mercury__bimap__search_3_p_0((MR_Word) (&transform_hlds__direct_arg_in_out_scalar_common_1[4]), (MR_Word) (&transform_hlds__direct_arg_in_out_scalar_common_1[4]), EntryVarMap_1, ((MR_Box) (OrigVar_16)), &conv0_EntryVar_22);
    if (succeeded)
    {
      EntryVar_22 = ((MR_Word) (conv0_EntryVar_22));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      Var_28 = transform_hlds__direct_arg_in_out__entry_var_is_ever_changed_3_f_0(TypeClassInfo_for_goal_like_31, OrigVar_16, EntryVar_22, STATE_VARIABLE_GoalsVarMaps_0_4);
      succeeded = (Var_28 == (MR_Integer) 0);
    }
    if (succeeded)
    {
      MergeVar_18 = EntryVar_22;
      STATE_VARIABLE_Info_29_29 = STATE_VARIABLE_Info_0_6;
      STATE_VARIABLE_GoalsVarMaps_30_30 = STATE_VARIABLE_GoalsVarMaps_0_4;
    }
    else
    {
      MR_Word VarTable0_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 2))));
      MR_Word OldVarEntry_34;
      MR_String OldVarName_35;
      MR_Word OldVarType_36;
      MR_Word OldVarIsDummy_37;
      MR_String NewVarName_38;
      MR_Word NewVarEntry_39;
      MR_Word VarTable_40;
      MR_Word Var_44;
      MR_Word Var_45;
      MR_Word Var_47;

      parse_tree__var_table__lookup_var_entry_3_p_0(VarTable0_33, OrigVar_16, &OldVarEntry_34);
      OldVarName_35 = ((MR_String) ((MR_hl_field(MR_mktag(0), OldVarEntry_34, (MR_Integer) 0))));
      OldVarType_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OldVarEntry_34, (MR_Integer) 1))));
      OldVarIsDummy_37 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), OldVarEntry_34, (MR_Integer) 2))) & (MR_Integer) 1);
      succeeded = (strcmp(OldVarName_35, (MR_String) "") == 0);
      if (succeeded)
        NewVarName_38 = (MR_String) "";
      else
        NewVarName_38 = OldVarName_35;
      {
        NewVarEntry_39 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), NewVarEntry_39, 0) = ((MR_Box) (NewVarName_38));
        MR_hl_field(MR_mktag(0), NewVarEntry_39, 1) = ((MR_Box) (OldVarType_36));
        MR_hl_field(MR_mktag(0), NewVarEntry_39, 2) = (MR_Box) ((MR_Unsigned) (OldVarIsDummy_37));
      }
      parse_tree__var_table__add_var_entry_4_p_0(NewVarEntry_39, &MergeVar_18, VarTable0_33, &VarTable_40);
      Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 0))));
      Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 1))));
      Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 3))));
      {
        STATE_VARIABLE_Info_29_29 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, 0) = ((MR_Box) (Var_44));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, 1) = ((MR_Box) (Var_45));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, 2) = ((MR_Box) (VarTable_40));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, 3) = ((MR_Box) (Var_47));
      }
      transform_hlds__direct_arg_in_out__add_assign_of_merge_var_4_p_0(TypeClassInfo_for_goal_like_31, OrigVar_16, MergeVar_18, STATE_VARIABLE_GoalsVarMaps_0_4, &STATE_VARIABLE_GoalsVarMaps_30_30);
    }
    {
      Var_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_27, 0) = ((MR_Box) (OrigVar_16));
      MR_hl_field(MR_mktag(0), Var_27, 1) = ((MR_Box) (MergeVar_18));
    }
    transform_hlds__direct_arg_in_out__merge_branch_goals_varmaps_7_p_0(TypeClassInfo_for_goal_like_31, EntryVarMap_1, OrigVars_17, &OrigMergeVars_19, STATE_VARIABLE_GoalsVarMaps_30_30, STATE_VARIABLE_GoalsVarMaps_5, STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Info_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (OrigMergeVars_19));
    }
  }
}

static void MR_CALL 
transform_hlds__direct_arg_in_out__add_assign_of_merge_var_4_p_0(
  MR_Word TypeClassInfo_for_goal_like_22,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  MR_bool succeeded;

  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word GoalVarMap0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word GoalVarMaps0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word GoalVarMap_11;
    MR_Word GoalsVarMaps_12;
    MR_Box Goal0_13 = (MR_hl_field(MR_mktag(0), GoalVarMap0_9, (MR_Integer) 0));
    MR_Word VarMap_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GoalVarMap0_9, (MR_Integer) 1))));
    MR_Box Goal_20;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_goal_like_22, (MR_Integer) 0)), (MR_Integer) 5))));

    succeeded = func_0(((MR_Box) (TypeClassInfo_for_goal_like_22)), Goal0_13);
    if (succeeded)
    {
      MR_Word CurVar_16;
      MR_Word AssignGoal_19;
      MR_Word CurVarPrime_15;
      MR_Box conv1_CurVarPrime_15;
      void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box *);

      succeeded = mercury__bimap__search_3_p_0((MR_Word) (&transform_hlds__direct_arg_in_out_scalar_common_1[4]), (MR_Word) (&transform_hlds__direct_arg_in_out_scalar_common_1[4]), VarMap_14, ((MR_Box) (HeadVar__1_1)), &conv1_CurVarPrime_15);
      if (succeeded)
      {
        CurVarPrime_15 = ((MR_Word) (conv1_CurVarPrime_15));
        succeeded = MR_TRUE;
      }
      if (succeeded)
        CurVar_16 = CurVarPrime_15;
      else
        CurVar_16 = HeadVar__1_1;
      hlds__make_goal__make_simple_assign_5_p_0(HeadVar__2_2, CurVar_16, (MR_Word) (MR_mkword(MR_mktag(3), &transform_hlds__direct_arg_in_out_scalar_common_3[1])), (MR_Word) ((MR_Unsigned) 0U), &AssignGoal_19);
      func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_goal_like_22, (MR_Integer) 0)), (MR_Integer) 6))));
      func_2(((MR_Box) (TypeClassInfo_for_goal_like_22)), Goal0_13, ((MR_Box) (AssignGoal_19)), &Goal_20);
    }
    else
      Goal_20 = Goal0_13;
    {
      GoalVarMap_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), GoalVarMap_11, 0) = Goal_20;
      MR_hl_field(MR_mktag(0), GoalVarMap_11, 1) = ((MR_Box) (VarMap_14));
    }
    transform_hlds__direct_arg_in_out__add_assign_of_merge_var_4_p_0(TypeClassInfo_for_goal_like_22, HeadVar__1_1, HeadVar__2_2, GoalVarMaps0_10, &GoalsVarMaps_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (GoalVarMap_11));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (GoalsVarMaps_12));
    }
  }
}

static MR_Word MR_CALL 
transform_hlds__direct_arg_in_out__entry_var_is_ever_changed_3_f_0(
  MR_Word TypeClassInfo_for_goal_like_16,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Word HeadVar__4_4;

  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__4_4 = (MR_Integer) 0;
  else
  {
    MR_Word GoalVarMap_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word GoalsVarMaps_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word IsChangedTail_12;
    MR_Box Goal_13;
    MR_Word VarMap_14;
    MR_Word AfterVar_15;
    MR_Box conv0_AfterVar_15;

    IsChangedTail_12 = transform_hlds__direct_arg_in_out__entry_var_is_ever_changed_3_f_0(TypeClassInfo_for_goal_like_16, HeadVar__1_1, HeadVar__2_2, GoalsVarMaps_10);
    Goal_13 = (MR_hl_field(MR_mktag(0), GoalVarMap_9, (MR_Integer) 0));
    VarMap_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GoalVarMap_9, (MR_Integer) 1))));
    mercury__bimap__lookup_3_p_0((MR_Word) (&transform_hlds__direct_arg_in_out_scalar_common_1[4]), (MR_Word) (&transform_hlds__direct_arg_in_out_scalar_common_1[4]), VarMap_14, ((MR_Box) (HeadVar__1_1)), &conv0_AfterVar_15);
    AfterVar_15 = ((MR_Word) (conv0_AfterVar_15));
    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__direct_arg_in_out_scalar_common_1[4]), ((MR_Box) (AfterVar_15)), ((MR_Box) (HeadVar__2_2)));
    if (succeeded)
      HeadVar__4_4 = IsChangedTail_12;
    else
    {
      MR_bool MR_CALL (* func_1)(MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_goal_like_16, (MR_Integer) 0)), (MR_Integer) 5))));

      succeeded = func_1(((MR_Box) (TypeClassInfo_for_goal_like_16)), Goal_13);
      if (succeeded)
        HeadVar__4_4 = (MR_Integer) 1;
      else
        HeadVar__4_4 = IsChangedTail_12;
    }
  }
  return HeadVar__4_4;
}

static void MR_CALL 
transform_hlds__direct_arg_in_out__expand_daio_in_goal_likes_varmaps_6_p_0(
  MR_Word TypeClassInfo_for_goal_like_22,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word InstMap0_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
  }
  else
  {
    MR_Box Goal0_13 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
    MR_Word Goals0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word GoalVarMap_16;
    MR_Word GoalsVarMaps_17;
    MR_Word STATE_VARIABLE_Info_21_21;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_goal_like_22, (MR_Integer) 0)), (MR_Integer) 7))));
    MR_Box conv2_GoalVarMap_16;
    MR_Box conv1_STATE_VARIABLE_Info_21_21;

    func_0(((MR_Box) (TypeClassInfo_for_goal_like_22)), ((MR_Box) (HeadVar__1_1)), Goal0_13, ((MR_Box) (InstMap0_3)), &conv2_GoalVarMap_16, ((MR_Box) (STATE_VARIABLE_Info_0_5)), &conv1_STATE_VARIABLE_Info_21_21);
    GoalVarMap_16 = ((MR_Word) (conv2_GoalVarMap_16));
    STATE_VARIABLE_Info_21_21 = ((MR_Word) (conv1_STATE_VARIABLE_Info_21_21));
    transform_hlds__direct_arg_in_out__expand_daio_in_goal_likes_varmaps_6_p_0(TypeClassInfo_for_goal_like_22, HeadVar__1_1, Goals0_14, InstMap0_3, &GoalsVarMaps_17, STATE_VARIABLE_Info_21_21, STATE_VARIABLE_Info_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (GoalVarMap_16));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (GoalsVarMaps_17));
    }
  }
}

static void MR_CALL 
transform_hlds__direct_arg_in_out__expand_daio_in_unify_8_p_0(
  MR_Word GoalInfo0_9,
  MR_Word GoalExpr0_10,
  MR_Word * GoalExpr_11,
  MR_Word InstMap0_12,
  MR_Word STATE_VARIABLE_VarMap_0_81,
  MR_Word * STATE_VARIABLE_VarMap_82,
  MR_Word STATE_VARIABLE_Info_0_83,
  MR_Word * STATE_VARIABLE_Info_84)
{
  MR_bool succeeded;
  MR_Word Unification0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_10, (MR_Integer) 3))));

  switch (MR_tag((MR_Word) Unification0_18)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 2:
      {
        *GoalExpr_11 = GoalExpr0_10;
        *STATE_VARIABLE_VarMap_82 = STATE_VARIABLE_VarMap_0_81;
        *STATE_VARIABLE_Info_84 = STATE_VARIABLE_Info_0_83;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word X_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification0_18, (MR_Integer) 0))));
        MR_Word ConsId_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification0_18, (MR_Integer) 1))));
        MR_Word UnifyModes_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification0_18, (MR_Integer) 3))));
        MR_Word ModuleInfo_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_83, (MR_Integer) 0))));
        MR_Word UnifyMode_40;
        MR_Word LI_41;
        MR_Word LF_42;
        MR_Word ConsIdSymName_47;
        MR_Integer ConsIdArity_48;
        MR_Word ConsIdTypeCtor_49;
        MR_Word TypeTable_50;
        MR_Word TypeDefn_51;
        MR_Word TypeBody_52;
        MR_Word TypeBodyDu_53;
        MR_Word MaybeRepn_57;
        MR_Word Repn_59;
        MR_Word CtorRepns_60;
        MR_Word ConsIdCtorRepn_61;
        MR_Word Var_92;
        MR_Word Var_95;

        succeeded = (UnifyModes_34 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          UnifyMode_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), UnifyModes_34, (MR_Integer) 0))));
          Var_92 = ((MR_Word) ((MR_hl_field(MR_mktag(1), UnifyModes_34, (MR_Integer) 1))));
          succeeded = (Var_92 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            LI_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyMode_40, (MR_Integer) 0))));
            LF_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyMode_40, (MR_Integer) 1))));
            if ((LI_41 == (MR_Word) ((MR_Unsigned) 0U)))
              succeeded = MR_TRUE;
            else
            if (((MR_tag((MR_Word) LI_41)) == (MR_Integer) 1))
              succeeded = MR_TRUE;
            else
              succeeded = MR_FALSE;
            if (succeeded)
            {
              if ((LF_42 == (MR_Word) ((MR_Unsigned) 0U)))
                succeeded = MR_TRUE;
              else
              if (((MR_tag((MR_Word) LF_42)) == (MR_Integer) 1))
                succeeded = MR_TRUE;
              else
                succeeded = MR_FALSE;
              succeeded = !(succeeded);
              if (succeeded)
              {
                succeeded = ((((MR_tag((MR_Word) ConsId_32)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_32, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (succeeded)
                {
                  ConsIdSymName_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_32, (MR_Integer) 1))));
                  ConsIdArity_48 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_32, (MR_Integer) 2))));
                  ConsIdTypeCtor_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_32, (MR_Integer) 3))));
                  hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_37, &TypeTable_50);
                  succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_50, ConsIdTypeCtor_49, &TypeDefn_51);
                  if (succeeded)
                  {
                    hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_51, &TypeBody_52);
                    succeeded = ((MR_tag((MR_Word) TypeBody_52)) == (MR_Integer) 0);
                    if (succeeded)
                    {
                      TypeBodyDu_53 = (MR_Word) ((MR_Word) (TypeBody_52));
                      MaybeRepn_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeBodyDu_53, (MR_Integer) 3))));
                      if ((MaybeRepn_57 == (MR_Word) ((MR_Unsigned) 0U)))
                        {
                          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.direct_arg_in_out.expand_daio_in_unify\'/8", (MR_String) "MaybeRepn = no");
                          return;
                        }
                      else
                        Repn_59 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRepn_57, (MR_Integer) 0))));
                      CtorRepns_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Repn_59, (MR_Integer) 0))));
                      transform_hlds__direct_arg_in_out__find_named_ctor_repn_4_p_0(CtorRepns_60, ConsIdSymName_47, ConsIdArity_48, &ConsIdCtorRepn_61);
                      Var_95 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsIdCtorRepn_61, (MR_Integer) 3))));
                      succeeded = ((((MR_tag((MR_Word) Var_95)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_95, (MR_Integer) 0)))) == (MR_Integer) 13)));
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
          MR_Word CloneX_63;
          MR_Word PredTable_64;
          MR_Word CopySymName_65;
          MR_Word CopyPredId_66;
          MR_Integer CopyProcId_67;
          MR_Word CopyGoalExpr_69;
          MR_Word Context_70;
          MR_Word NonLocals_71;
          MR_Word InitInstOfX_72;
          MR_Word InstMapDelta_74;
          MR_Word CopyGoalInfo_75;
          MR_Word CopyGoal_76;
          MR_Word Goal0_77;
          MR_Word Var_98;
          MR_Word Var_104;
          MR_Word Var_105;
          MR_Word Var_113;
          MR_Word Var_114;
          MR_Word Var_115;
          MR_Word Var_116;
          MR_Word Var_121;
          MR_Word Var_122;

          transform_hlds__direct_arg_in_out__make_new_clone_var_4_p_0(X_31, &CloneX_63, STATE_VARIABLE_Info_0_83, STATE_VARIABLE_Info_84);
          mercury__bimap__set_4_p_0((MR_Word) (&transform_hlds__direct_arg_in_out_scalar_common_1[4]), (MR_Word) (&transform_hlds__direct_arg_in_out_scalar_common_1[4]), ((MR_Box) (X_31)), ((MR_Box) (CloneX_63)), STATE_VARIABLE_VarMap_0_81, STATE_VARIABLE_VarMap_82);
          hlds__hlds_module__module_info_get_predicate_table_2_p_0(ModuleInfo_37, &PredTable_64);
          Var_98 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
          {
            CopySymName_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), CopySymName_65, 0) = ((MR_Box) (Var_98));
            MR_hl_field(MR_mktag(1), CopySymName_65, 1) = ((MR_Box) ((MR_String) "partial_inst_copy"));
          }
          hlds__pred_table__predicate_table_lookup_pred_sym_arity_one_5_p_0(PredTable_64, (MR_Integer) 0, CopySymName_65, (MR_Word) (((MR_Box) ((MR_Integer) 2))), &CopyPredId_66);
          hlds__hlds_pred__proc_id_to_int_2_p_1(&CopyProcId_67, (MR_Integer) 0);
          {
            Var_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_105, 0) = ((MR_Box) (CloneX_63));
            MR_hl_field(MR_mktag(1), Var_105, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_104, 0) = ((MR_Box) (X_31));
            MR_hl_field(MR_mktag(1), Var_104, 1) = ((MR_Box) (Var_105));
          }
          {
            CopyGoalExpr_69 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), CopyGoalExpr_69, 0) = ((MR_Box) (CopyPredId_66));
            MR_hl_field(MR_mktag(2), CopyGoalExpr_69, 1) = ((MR_Box) (CopyProcId_67));
            MR_hl_field(MR_mktag(2), CopyGoalExpr_69, 2) = ((MR_Box) (Var_104));
            MR_hl_field(MR_mktag(2), CopyGoalExpr_69, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(2), CopyGoalExpr_69, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(2), CopyGoalExpr_69, 5) = ((MR_Box) (CopySymName_65));
          }
          Context_70 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_9);
          parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_104, &NonLocals_71);
          hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_12, X_31, &InitInstOfX_72);
          {
            Var_114 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_114, 0) = ((MR_Box) (X_31));
            MR_hl_field(MR_mktag(0), Var_114, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__direct_arg_in_out_scalar_common_2[3])));
          }
          {
            Var_116 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_116, 0) = ((MR_Box) (CloneX_63));
            MR_hl_field(MR_mktag(0), Var_116, 1) = ((MR_Box) (InitInstOfX_72));
          }
          {
            Var_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_115, 0) = ((MR_Box) (Var_116));
            MR_hl_field(MR_mktag(1), Var_115, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_113, 0) = ((MR_Box) (Var_114));
            MR_hl_field(MR_mktag(1), Var_113, 1) = ((MR_Box) (Var_115));
          }
          InstMapDelta_74 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_113);
          hlds__hlds_goal__goal_info_init_6_p_0(NonLocals_71, InstMapDelta_74, (MR_Integer) 0, (MR_Integer) 0, Context_70, &CopyGoalInfo_75);
          {
            CopyGoal_76 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), CopyGoal_76, 0) = ((MR_Box) (CopyGoalExpr_69));
            MR_hl_field(MR_mktag(0), CopyGoal_76, 1) = ((MR_Box) (CopyGoalInfo_75));
          }
          {
            Goal0_77 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Goal0_77, 0) = ((MR_Box) (GoalExpr0_10));
            MR_hl_field(MR_mktag(0), Goal0_77, 1) = ((MR_Box) (GoalInfo0_9));
          }
          {
            Var_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_122, 0) = ((MR_Box) (CopyGoal_76));
            MR_hl_field(MR_mktag(1), Var_122, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_121, 0) = ((MR_Box) (Goal0_77));
            MR_hl_field(MR_mktag(1), Var_121, 1) = ((MR_Box) (Var_122));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            *GoalExpr_11 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
            MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Var_121));
          }
        }
        else
        {
          *GoalExpr_11 = GoalExpr0_10;
          *STATE_VARIABLE_Info_84 = STATE_VARIABLE_Info_0_83;
          *STATE_VARIABLE_VarMap_82 = STATE_VARIABLE_VarMap_0_81;
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Unification0_18, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *GoalExpr_11 = GoalExpr0_10;
            *STATE_VARIABLE_VarMap_82 = STATE_VARIABLE_VarMap_0_81;
            *STATE_VARIABLE_Info_84 = STATE_VARIABLE_Info_0_83;
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.direct_arg_in_out.expand_daio_in_unify\'/8", (MR_String) "complicated_unify");
            return;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
transform_hlds__direct_arg_in_out__find_named_ctor_repn_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word SymName_2,
  MR_Integer Arity_3,
  MR_Word * SearchCtor_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.direct_arg_in_out.find_named_ctor_repn\'/4", (MR_String) "did not find constructor");
        return;
      }
    else
    {
      MR_Word Ctor_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Ctors_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word TypeCtorInfo_28_28;
      MR_Word Var_15;
      MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_10, (MR_Integer) 2))));
      MR_Integer Var_30;

      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(SymName_2, Var_29);
      if (succeeded)
      {
        Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_10, (MR_Integer) 4))));
        TypeCtorInfo_28_28 = (MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_arg_repn_0);
        mercury__list__length_2_p_0(TypeCtorInfo_28_28, Var_15, &Var_30);
        succeeded = (Arity_3 == Var_30);
      }
      if (succeeded)
        *SearchCtor_4 = Ctor_10;
      else
      {
        MR_Word next_value_of_HeadVar__1_1 = Ctors_11;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__direct_arg_in_out__clone_in_out_args_in_call_foreign_proc_10_p_0(
  MR_Integer CurArgNum_1,
  MR_Integer HeadInOutArg_2,
  MR_Word TailInOutArgs_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * Args_6,
  MR_Word STATE_VARIABLE_VarMap_0_7,
  MR_Word * STATE_VARIABLE_VarMap_8,
  MR_Word STATE_VARIABLE_Info_0_9,
  MR_Word * STATE_VARIABLE_Info_10)
{
  MR_bool succeeded;

  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.direct_arg_in_out.clone_in_out_args_in_call_foreign_proc\'/10", (MR_String) "ran out of arguments");
      return;
    }
  else
  {
    MR_Word Var_88 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
    MR_Word Var_89 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));

    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.direct_arg_in_out.clone_in_out_args_in_call_foreign_proc\'/10", (MR_String) "ran out of modes");
        return;
      }
    else
    {
      MR_Word HeadCloneMode0_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0))));
      MR_Word TailCloneModes0_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1))));

      succeeded = (CurArgNum_1 == HeadInOutArg_2);
      if (succeeded)
      {
        MR_Word HeadVar0_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_89, (MR_Integer) 0))));
        MR_Word HeadMaybeNameMode0_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_89, (MR_Integer) 1))));
        MR_Word HeadType_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_89, (MR_Integer) 2))));
        MR_Word HeadBoxPolicy_51 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_89, (MR_Integer) 3))) & (MR_Integer) 1);
        MR_Word CloneVar_52;
        MR_Word CloneMode_53;
        MR_Word TailCloneModes1_54;
        MR_Word HeadMaybeNameMode_55;
        MR_Word CloneMaybeNameMode_56;
        MR_Word HeadArg_63;
        MR_Word CloneArg_64;
        MR_Word STATE_VARIABLE_VarMap_73_73;
        MR_Word STATE_VARIABLE_Info_74_74;
        MR_Box conv0_CloneMode_53;

        transform_hlds__direct_arg_in_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_97_110_100_95_114_101_99_111_114_100_95_110_101_119_95_99_108_111_110_101_95_118_97_114_95_95_91_49_93_95_48_7_p_0(HeadVar0_48, &CloneVar_52, STATE_VARIABLE_VarMap_0_7, &STATE_VARIABLE_VarMap_73_73, STATE_VARIABLE_Info_0_9, &STATE_VARIABLE_Info_74_74);
        mercury__list__det_head_tail_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), TailCloneModes0_44, &conv0_CloneMode_53, &TailCloneModes1_54);
        CloneMode_53 = ((MR_Word) (conv0_CloneMode_53));
        if ((HeadMaybeNameMode0_49 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          HeadMaybeNameMode_55 = (MR_Word) ((MR_Unsigned) 0U);
          CloneMaybeNameMode_56 = (MR_Word) ((MR_Unsigned) 0U);
        }
        else
        {
          MR_Word HeadNameMode0_57 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadMaybeNameMode0_49, (MR_Integer) 0))));
          MR_String HeadName_58 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadNameMode0_57, (MR_Integer) 0))));
          MR_Word HeadNameMode_60;
          MR_String CloneName_61;
          MR_Word CloneNameMode_62;

          {
            HeadNameMode_60 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), HeadNameMode_60, 0) = ((MR_Box) (HeadName_58));
            MR_hl_field(MR_mktag(0), HeadNameMode_60, 1) = ((MR_Box) (HeadCloneMode0_43));
          }
          {
            HeadMaybeNameMode_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), HeadMaybeNameMode_55, 0) = ((MR_Box) (HeadNameMode_60));
          }
          CloneName_61 = mercury__string__f_43_43_2_f_0((MR_String) "clone_of_", HeadName_58);
          {
            CloneNameMode_62 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), CloneNameMode_62, 0) = ((MR_Box) (CloneName_61));
            MR_hl_field(MR_mktag(0), CloneNameMode_62, 1) = ((MR_Box) (CloneMode_53));
          }
          {
            CloneMaybeNameMode_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), CloneMaybeNameMode_56, 0) = ((MR_Box) (CloneNameMode_62));
          }
        }
        {
          HeadArg_63 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), HeadArg_63, 0) = ((MR_Box) (HeadVar0_48));
          MR_hl_field(MR_mktag(0), HeadArg_63, 1) = ((MR_Box) (HeadMaybeNameMode_55));
          MR_hl_field(MR_mktag(0), HeadArg_63, 2) = ((MR_Box) (HeadType_50));
          MR_hl_field(MR_mktag(0), HeadArg_63, 3) = (MR_Box) ((MR_Unsigned) (HeadBoxPolicy_51));
        }
        {
          CloneArg_64 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), CloneArg_64, 0) = ((MR_Box) (CloneVar_52));
          MR_hl_field(MR_mktag(0), CloneArg_64, 1) = ((MR_Box) (CloneMaybeNameMode_56));
          MR_hl_field(MR_mktag(0), CloneArg_64, 2) = ((MR_Box) (HeadType_50));
          MR_hl_field(MR_mktag(0), CloneArg_64, 3) = (MR_Box) ((MR_Unsigned) (HeadBoxPolicy_51));
        }
        if ((TailInOutArgs_3 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Var_76;

          {
            Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (CloneArg_64));
            MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) (Var_88));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Args_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadArg_63));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_76));
          }
          *STATE_VARIABLE_VarMap_8 = STATE_VARIABLE_VarMap_73_73;
          *STATE_VARIABLE_Info_10 = STATE_VARIABLE_Info_74_74;
        }
        else
        {
          MR_Integer HeadTailInOutArg_65 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), TailInOutArgs_3, (MR_Integer) 0))));
          MR_Word TailTailInOutArgs_66 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailInOutArgs_3, (MR_Integer) 1))));
          MR_Word TailArgs_67;
          MR_Integer Var_77 = (MR_Integer) ((MR_Unsigned) CurArgNum_1 + (MR_Unsigned) 1);
          MR_Word Var_81;

          transform_hlds__direct_arg_in_out__clone_in_out_args_in_call_foreign_proc_10_p_0(Var_77, HeadTailInOutArg_65, TailTailInOutArgs_66, Var_88, TailCloneModes1_54, &TailArgs_67, STATE_VARIABLE_VarMap_73_73, STATE_VARIABLE_VarMap_8, STATE_VARIABLE_Info_74_74, STATE_VARIABLE_Info_10);
          {
            Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (CloneArg_64));
            MR_hl_field(MR_mktag(1), Var_81, 1) = ((MR_Box) (TailArgs_67));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Args_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadArg_63));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_81));
          }
        }
      }
      else
      {
        MR_Integer Var_82 = (MR_Integer) ((MR_Unsigned) CurArgNum_1 + (MR_Unsigned) 1);
        MR_Word TailArgs_86;

        transform_hlds__direct_arg_in_out__clone_in_out_args_in_call_foreign_proc_10_p_0(Var_82, HeadInOutArg_2, TailInOutArgs_3, Var_88, TailCloneModes0_44, &TailArgs_86, STATE_VARIABLE_VarMap_0_7, STATE_VARIABLE_VarMap_8, STATE_VARIABLE_Info_0_9, STATE_VARIABLE_Info_10);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Args_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_89));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailArgs_86));
        }
      }
    }
  }
}

static MR_Box MR_CALL 
transform_hlds__direct_arg_in_out__clone_in_out_args_in_generic_call_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_ClobberedBoundInst_6;

  conv0_ClobberedBoundInst_6 = transform_hlds__direct_arg_in_out__clobber_daio_bound_inst_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_ClobberedBoundInst_6));
  return wrapper_arg_2;
}

static void MR_CALL 
transform_hlds__direct_arg_in_out__clone_in_out_args_in_generic_call_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_VarMap_0_5,
  MR_Word * STATE_VARIABLE_VarMap_6,
  MR_Word STATE_VARIABLE_Info_0_7,
  MR_Word * STATE_VARIABLE_Info_8)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Info_8 = STATE_VARIABLE_Info_0_7;
      *STATE_VARIABLE_VarMap_6 = STATE_VARIABLE_VarMap_0_5;
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.direct_arg_in_out.clone_in_out_args_in_generic_call\'/8", (MR_String) "list length mismatch");
        return;
      }
  else
  {
    MR_Word Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Var_77 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.direct_arg_in_out.clone_in_out_args_in_generic_call\'/8", (MR_String) "list length mismatch");
        return;
      }
    else
    {
      MR_Word HeadMode0_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word TailModes0_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ModuleInfo0_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_7, (MR_Integer) 0))));
      MR_Word VarTable0_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_7, (MR_Integer) 2))));
      MR_Word IsDAIO_49;

      transform_hlds__direct_arg_in_out__is_direct_arg_in_out_posn_5_p_0(ModuleInfo0_47, VarTable0_48, Var_77, HeadMode0_42, &IsDAIO_49);
      switch (IsDAIO_49) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word CloneVar_50;
            MR_Word ClobberedHeadMode_51;
            MR_Word CloneMode_52;
            MR_Word TailVars_53;
            MR_Word TailModes_54;
            MR_Word STATE_VARIABLE_VarMap_60_60;
            MR_Word STATE_VARIABLE_Info_61_61;
            MR_Word Var_64;
            MR_Word Var_65;
            MR_Word FromInst_78;
            MR_Word ToInst_79;
            MR_Word ClobberedFromInst_80;
            MR_Word Inst_82;

            transform_hlds__direct_arg_in_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_97_110_100_95_114_101_99_111_114_100_95_110_101_119_95_99_108_111_110_101_95_118_97_114_95_95_91_49_93_95_48_7_p_0(Var_77, &CloneVar_50, STATE_VARIABLE_VarMap_0_5, &STATE_VARIABLE_VarMap_60_60, STATE_VARIABLE_Info_0_7, &STATE_VARIABLE_Info_61_61);
            check_hlds__mode_util__mode_get_insts_4_p_0(ModuleInfo0_47, HeadMode0_42, &FromInst_78, &ToInst_79);
            check_hlds__inst_lookup__inst_expand_3_p_0(ModuleInfo0_47, FromInst_78, &Inst_82);
            switch (MR_tag((MR_Word) Inst_82)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "function \140transform_hlds.direct_arg_in_out.clobber_daio_inst\'/2", (MR_String) "inst is not a daio inst");
                  return;
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "function \140transform_hlds.direct_arg_in_out.clobber_daio_inst\'/2", (MR_String) "inst is not a daio inst");
                  return;
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Inst_82, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word TestResults_84 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_82, (MR_Integer) 2))));
                      MR_Word BoundInsts_85 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_82, (MR_Integer) 3))));
                      MR_Word ClobberedTestResults_86;
                      MR_Word ClobberedBoundInsts_87;
                      MR_Word Var_88;

                      switch (MR_tag((MR_Word) TestResults_84)) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          switch (MR_unmkbody(TestResults_84)) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 0:
                              ClobberedTestResults_86 = TestResults_84;
                              break;
                            case (MR_Integer) 1:
                              ClobberedTestResults_86 = TestResults_84;
                              break;
                          }
                          break;
                        case (MR_Integer) 1:
                          ClobberedTestResults_86 = TestResults_84;
                          break;
                      }
                      {
                        Var_88 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Var_88, 0) = ((MR_Box) (&transform_hlds__direct_arg_in_out_scalar_common_8[2]));
                        MR_hl_field(MR_mktag(0), Var_88, 1) = ((MR_Box) (transform_hlds__direct_arg_in_out__clone_in_out_args_in_generic_call_8_p_0_1));
                        MR_hl_field(MR_mktag(0), Var_88, 2) = ((MR_Box) ((MR_Integer) 1));
                        MR_hl_field(MR_mktag(0), Var_88, 3) = ((MR_Box) (ModuleInfo0_47));
                      }
                      ClobberedBoundInsts_87 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0), Var_88, BoundInsts_85);
                      {
                        ClobberedFromInst_80 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), ClobberedFromInst_80, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(MR_mktag(3), ClobberedFromInst_80, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 3));
                        MR_hl_field(MR_mktag(3), ClobberedFromInst_80, 2) = ((MR_Box) (ClobberedTestResults_86));
                        MR_hl_field(MR_mktag(3), ClobberedFromInst_80, 3) = ((MR_Box) (ClobberedBoundInsts_87));
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                  case (MR_Integer) 5:
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "function \140transform_hlds.direct_arg_in_out.clobber_daio_inst\'/2", (MR_String) "inst is not a daio inst");
                      return;
                    }
                    break;
                  case (MR_Integer) 3:
                  case (MR_Integer) 4:
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "function \140transform_hlds.direct_arg_in_out.clobber_daio_inst\'/2", (MR_String) "unexpanded inst");
                      return;
                    }
                    break;
                }
                break;
            }
            {
              ClobberedHeadMode_51 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ClobberedHeadMode_51, 0) = ((MR_Box) (FromInst_78));
              MR_hl_field(MR_mktag(0), ClobberedHeadMode_51, 1) = ((MR_Box) (ClobberedFromInst_80));
            }
            {
              CloneMode_52 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), CloneMode_52, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), CloneMode_52, 1) = ((MR_Box) (ToInst_79));
            }
            transform_hlds__direct_arg_in_out__clone_in_out_args_in_generic_call_8_p_0(Var_76, &TailVars_53, TailModes0_43, &TailModes_54, STATE_VARIABLE_VarMap_60_60, STATE_VARIABLE_VarMap_6, STATE_VARIABLE_Info_61_61, STATE_VARIABLE_Info_8);
            {
              Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (CloneVar_50));
              MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) (TailVars_53));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__2_2 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_77));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_64));
            }
            {
              Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (CloneMode_52));
              MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (TailModes_54));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__4_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ClobberedHeadMode_51));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_65));
            }
          }
          break;
        case (MR_Integer) 0:
        case (MR_Integer) 2:
          {
            MR_Word TailVars_68;
            MR_Word TailModes_69;

            transform_hlds__direct_arg_in_out__clone_in_out_args_in_generic_call_8_p_0(Var_76, &TailVars_68, TailModes0_43, &TailModes_69, STATE_VARIABLE_VarMap_0_5, STATE_VARIABLE_VarMap_6, STATE_VARIABLE_Info_0_7, STATE_VARIABLE_Info_8);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__2_2 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_77));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailVars_68));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__4_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadMode0_42));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailModes_69));
            }
          }
          break;
      }
    }
  }
}

static void MR_CALL 
transform_hlds__direct_arg_in_out__clone_in_out_args_in_plain_call_9_p_0(
  MR_Integer CurArgNum_1,
  MR_Integer HeadInOutArg_2,
  MR_Word TailInOutArgs_3,
  MR_Word HeadVar__4_4,
  MR_Word * Vars_5,
  MR_Word STATE_VARIABLE_VarMap_0_6,
  MR_Word * STATE_VARIABLE_VarMap_7,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9)
{
  MR_bool succeeded;

  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.direct_arg_in_out.clone_in_out_args_in_plain_call\'/9", (MR_String) "ran out of arguments");
      return;
    }
  else
  {
    MR_Word HeadVar0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
    MR_Word TailVars0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));

    succeeded = (CurArgNum_1 == HeadInOutArg_2);
    if (succeeded)
    {
      MR_Word CloneVar_30;
      MR_Word STATE_VARIABLE_VarMap_39_39;
      MR_Word STATE_VARIABLE_Info_40_40;

      transform_hlds__direct_arg_in_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_97_110_100_95_114_101_99_111_114_100_95_110_101_119_95_99_108_111_110_101_95_118_97_114_95_95_91_49_93_95_48_7_p_0(HeadVar0_25, &CloneVar_30, STATE_VARIABLE_VarMap_0_6, &STATE_VARIABLE_VarMap_39_39, STATE_VARIABLE_Info_0_8, &STATE_VARIABLE_Info_40_40);
      if ((TailInOutArgs_3 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_41;

        {
          Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (CloneVar_30));
          MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (TailVars0_26));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Vars_5 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadVar0_25));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_41));
        }
        *STATE_VARIABLE_VarMap_7 = STATE_VARIABLE_VarMap_39_39;
        *STATE_VARIABLE_Info_9 = STATE_VARIABLE_Info_40_40;
      }
      else
      {
        MR_Integer HeadTailInOutArg_31 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), TailInOutArgs_3, (MR_Integer) 0))));
        MR_Word TailTailInOutArgs_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailInOutArgs_3, (MR_Integer) 1))));
        MR_Word TailVars_33;
        MR_Integer Var_42 = (MR_Integer) ((MR_Unsigned) CurArgNum_1 + (MR_Unsigned) 1);
        MR_Word Var_46;

        transform_hlds__direct_arg_in_out__clone_in_out_args_in_plain_call_9_p_0(Var_42, HeadTailInOutArg_31, TailTailInOutArgs_32, TailVars0_26, &TailVars_33, STATE_VARIABLE_VarMap_39_39, STATE_VARIABLE_VarMap_7, STATE_VARIABLE_Info_40_40, STATE_VARIABLE_Info_9);
        {
          Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (CloneVar_30));
          MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (TailVars_33));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Vars_5 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadVar0_25));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_46));
        }
      }
    }
    else
    {
      MR_Integer Var_47 = (MR_Integer) ((MR_Unsigned) CurArgNum_1 + (MR_Unsigned) 1);
      MR_Word TailVars_51;

      transform_hlds__direct_arg_in_out__clone_in_out_args_in_plain_call_9_p_0(Var_47, HeadInOutArg_2, TailInOutArgs_3, TailVars0_26, &TailVars_51, STATE_VARIABLE_VarMap_0_6, STATE_VARIABLE_VarMap_7, STATE_VARIABLE_Info_0_8, STATE_VARIABLE_Info_9);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Vars_5 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadVar0_25));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailVars_51));
      }
    }
  }
}

static void MR_CALL 
transform_hlds__direct_arg_in_out__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_97_110_100_95_114_101_99_111_114_100_95_110_101_119_95_99_108_111_110_101_95_118_97_114_95_95_91_49_93_95_48_7_p_0(
  MR_Word HeadVar0_9,
  MR_Word * CloneVar_10,
  MR_Word STATE_VARIABLE_VarMap_0_16,
  MR_Word * STATE_VARIABLE_VarMap_17,
  MR_Word STATE_VARIABLE_Info_0_18,
  MR_Word * STATE_VARIABLE_Info_19)
{
  MR_bool succeeded;
  MR_Word OrigVar_13;
  MR_Box conv0_OrigVar_13;

  transform_hlds__direct_arg_in_out__make_new_clone_var_4_p_0(HeadVar0_9, CloneVar_10, STATE_VARIABLE_Info_0_18, STATE_VARIABLE_Info_19);
  succeeded = mercury__bimap__reverse_search_3_p_0((MR_Word) (&transform_hlds__direct_arg_in_out_scalar_common_1[4]), (MR_Word) (&transform_hlds__direct_arg_in_out_scalar_common_1[4]), STATE_VARIABLE_VarMap_0_16, &conv0_OrigVar_13, ((MR_Box) (HeadVar0_9)));
  if (succeeded)
  {
    OrigVar_13 = ((MR_Word) (conv0_OrigVar_13));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    mercury__bimap__set_4_p_0((MR_Word) (&transform_hlds__direct_arg_in_out_scalar_common_1[4]), (MR_Word) (&transform_hlds__direct_arg_in_out_scalar_common_1[4]), ((MR_Box) (OrigVar_13)), ((MR_Box) (*CloneVar_10)), STATE_VARIABLE_VarMap_0_16, STATE_VARIABLE_VarMap_17);
  else
    mercury__bimap__det_insert_4_p_0((MR_Word) (&transform_hlds__direct_arg_in_out_scalar_common_1[4]), (MR_Word) (&transform_hlds__direct_arg_in_out_scalar_common_1[4]), ((MR_Box) (HeadVar0_9)), ((MR_Box) (*CloneVar_10)), STATE_VARIABLE_VarMap_0_16, STATE_VARIABLE_VarMap_17);
}

static void MR_CALL 
transform_hlds__direct_arg_in_out__make_new_clone_var_4_p_0(
  MR_Word OldVar_5,
  MR_Word * NewVar_6,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17)
{
  MR_bool succeeded;
  MR_Word VarTable0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 2))));
  MR_Word OldVarEntry_9;
  MR_String OldVarName_10;
  MR_Word OldVarType_11;
  MR_Word OldVarIsDummy_12;
  MR_String NewVarName_13;
  MR_Word NewVarEntry_14;
  MR_Word VarTable_15;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_24;

  parse_tree__var_table__lookup_var_entry_3_p_0(VarTable0_8, OldVar_5, &OldVarEntry_9);
  OldVarName_10 = ((MR_String) ((MR_hl_field(MR_mktag(0), OldVarEntry_9, (MR_Integer) 0))));
  OldVarType_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OldVarEntry_9, (MR_Integer) 1))));
  OldVarIsDummy_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), OldVarEntry_9, (MR_Integer) 2))) & (MR_Integer) 1);
  succeeded = (strcmp(OldVarName_10, (MR_String) "") == 0);
  if (succeeded)
    NewVarName_13 = (MR_String) "";
  else
    NewVarName_13 = OldVarName_10;
  {
    NewVarEntry_14 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), NewVarEntry_14, 0) = ((MR_Box) (NewVarName_13));
    MR_hl_field(MR_mktag(0), NewVarEntry_14, 1) = ((MR_Box) (OldVarType_11));
    MR_hl_field(MR_mktag(0), NewVarEntry_14, 2) = (MR_Box) ((MR_Unsigned) (OldVarIsDummy_12));
  }
  parse_tree__var_table__add_var_entry_4_p_0(NewVarEntry_14, NewVar_6, VarTable0_8, &VarTable_15);
  Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 0))));
  Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 1))));
  Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 3))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_17 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_21));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_22));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (VarTable_15));
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_24));
  }
}

static void MR_CALL 
transform_hlds__direct_arg_in_out__replace_cloned_headvars_6_p_0(
  MR_Word VarMap_1,
  MR_Integer CurArgNum_2,
  MR_Integer HeadInOutArg_3,
  MR_Word TailInOutArgs_4,
  MR_Word HeadVar__5_5,
  MR_Word * Vars_6)
{
  MR_bool succeeded;

  if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.direct_arg_in_out.replace_cloned_headvars\'/6", (MR_String) "ran out of headvars");
      return;
    }
  else
  {
    MR_Word HeadVar_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0))));
    MR_Word TailVars0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1))));

    succeeded = (CurArgNum_2 == HeadInOutArg_3);
    if (succeeded)
    {
      MR_Word TailVars1_22;
      MR_Word UpdatedHeadVar_23;
      MR_Box conv0__CloneVar_21;
      MR_Box conv1_UpdatedHeadVar_23;

      mercury__list__det_head_tail_3_p_0((MR_Word) (&transform_hlds__direct_arg_in_out_scalar_common_1[4]), TailVars0_19, &conv0__CloneVar_21, &TailVars1_22);
      mercury__bimap__lookup_3_p_0((MR_Word) (&transform_hlds__direct_arg_in_out_scalar_common_1[4]), (MR_Word) (&transform_hlds__direct_arg_in_out_scalar_common_1[4]), VarMap_1, ((MR_Box) (HeadVar_18)), &conv1_UpdatedHeadVar_23);
      UpdatedHeadVar_23 = ((MR_Word) (conv1_UpdatedHeadVar_23));
      if ((TailInOutArgs_4 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_27;

        {
          Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (UpdatedHeadVar_23));
          MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (TailVars1_22));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Vars_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadVar_18));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_27));
        }
      }
      else
      {
        MR_Integer HeadTailInOutArg_24 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), TailInOutArgs_4, (MR_Integer) 0))));
        MR_Word TailTailInOutArgs_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailInOutArgs_4, (MR_Integer) 1))));
        MR_Word TailVars_26;
        MR_Integer Var_28 = (MR_Integer) ((MR_Unsigned) CurArgNum_2 + (MR_Unsigned) 1);
        MR_Word Var_30;

        transform_hlds__direct_arg_in_out__replace_cloned_headvars_6_p_0(VarMap_1, Var_28, HeadTailInOutArg_24, TailTailInOutArgs_25, TailVars1_22, &TailVars_26);
        {
          Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (UpdatedHeadVar_23));
          MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (TailVars_26));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Vars_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadVar_18));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_30));
        }
      }
    }
    else
    {
      MR_Integer Var_31 = (MR_Integer) ((MR_Unsigned) CurArgNum_2 + (MR_Unsigned) 1);
      MR_Word TailVars_33;

      transform_hlds__direct_arg_in_out__replace_cloned_headvars_6_p_0(VarMap_1, Var_31, HeadInOutArg_3, TailInOutArgs_4, TailVars0_19, &TailVars_33);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Vars_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadVar_18));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailVars_33));
      }
    }
  }
}

static void MR_CALL 
transform_hlds__direct_arg_in_out__transform_direct_arg_in_out_calls_in_pred_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_ProcInfo_21;
  MR_Word conv1_STATE_VARIABLE_ModuleInfo_23;
  MR_Word conv0_STATE_VARIABLE_Specs_25;

  transform_hlds__direct_arg_in_out__maybe_transform_direct_arg_in_out_calls_in_proc_11_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_ProcInfo_21, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_ModuleInfo_23, ((MR_Word) (wrapper_arg_6)), &conv0_STATE_VARIABLE_Specs_25);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_ProcInfo_21));
  *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_ModuleInfo_23));
  *wrapper_arg_7 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_25));
}

static void MR_CALL 
transform_hlds__direct_arg_in_out__transform_direct_arg_in_out_calls_in_pred_8_p_0(
  MR_Word DirectArgProcMap_9,
  MR_Word DirectArgProcInOutMap_10,
  MR_Word CloneInOutMap_11,
  MR_Word PredId_12,
  MR_Word STATE_VARIABLE_ModuleInfo_0_19,
  MR_Word * STATE_VARIABLE_ModuleInfo_20,
  MR_Word STATE_VARIABLE_Specs_0_21,
  MR_Word * STATE_VARIABLE_Specs_22)
{
  MR_Word PredInfo0_15;
  MR_Word ProcTable0_16;
  MR_Word ProcTable_17;
  MR_Word PredInfo_18;
  MR_Word Var_23;
  MR_Word STATE_VARIABLE_ModuleInfo_24_24;
  MR_Box conv4_STATE_VARIABLE_ModuleInfo_24_24;
  MR_Box conv3_STATE_VARIABLE_Specs_22;

  hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_19, PredId_12, &PredInfo0_15);
  hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_15, &ProcTable0_16);
  {
    Var_23 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (&transform_hlds__direct_arg_in_out_scalar_common_9[0]));
    MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (transform_hlds__direct_arg_in_out__transform_direct_arg_in_out_calls_in_pred_8_p_0_1));
    MR_hl_field(MR_mktag(0), Var_23, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(MR_mktag(0), Var_23, 3) = ((MR_Box) (DirectArgProcMap_9));
    MR_hl_field(MR_mktag(0), Var_23, 4) = ((MR_Box) (DirectArgProcInOutMap_10));
    MR_hl_field(MR_mktag(0), Var_23, 5) = ((MR_Box) (CloneInOutMap_11));
    MR_hl_field(MR_mktag(0), Var_23, 6) = ((MR_Box) (PredId_12));
  }
  mercury__map__map_foldl2_7_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&transform_hlds__direct_arg_in_out_scalar_common_1[1]), Var_23, ProcTable0_16, &ProcTable_17, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_19)), &conv4_STATE_VARIABLE_ModuleInfo_24_24, ((MR_Box) (STATE_VARIABLE_Specs_0_21)), &conv3_STATE_VARIABLE_Specs_22);
  STATE_VARIABLE_ModuleInfo_24_24 = ((MR_Word) (conv4_STATE_VARIABLE_ModuleInfo_24_24));
  *STATE_VARIABLE_Specs_22 = ((MR_Word) (conv3_STATE_VARIABLE_Specs_22));
  hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcTable_17, PredInfo0_15, &PredInfo_18);
  hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_12, PredInfo_18, STATE_VARIABLE_ModuleInfo_24_24, STATE_VARIABLE_ModuleInfo_20);
}

static MR_Word MR_CALL 
transform_hlds__direct_arg_in_out__clobber_daio_arg_inst_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word Inst0_5)
{
  MR_Word ClobberedInst_6;
  MR_Word Inst_7;

  check_hlds__inst_lookup__inst_expand_3_p_0(ModuleInfo_4, Inst0_5, &Inst_7);
  switch (MR_tag((MR_Word) Inst_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(Inst_7)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          ClobberedInst_6 = (MR_Word) (MR_mkword(MR_mktag(3), &transform_hlds__direct_arg_in_out_scalar_common_2[3]));
          break;
        case (MR_Integer) 1:
          mercury__require__unexpected_2_p_0((MR_String) "function \140transform_hlds.direct_arg_in_out.clobber_daio_arg_inst\'/2", (MR_String) "inst is not a daio arg inst");
          break;
      }
      break;
    case (MR_Integer) 1:
      ClobberedInst_6 = (MR_Word) (MR_mkword(MR_mktag(3), &transform_hlds__direct_arg_in_out_scalar_common_2[3]));
      break;
    case (MR_Integer) 2:
      mercury__require__unexpected_2_p_0((MR_String) "function \140transform_hlds.direct_arg_in_out.clobber_daio_arg_inst\'/2", (MR_String) "inst is not a daio arg inst");
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Inst_7, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          ClobberedInst_6 = (MR_Word) (MR_mkword(MR_mktag(3), &transform_hlds__direct_arg_in_out_scalar_common_2[3]));
          break;
        case (MR_Integer) 1:
          {
            MR_Word HOInstInfo_9 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_7, (MR_Integer) 2))));

            {
              ClobberedInst_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ClobberedInst_6, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), ClobberedInst_6, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 3));
              MR_hl_field(MR_mktag(3), ClobberedInst_6, 2) = ((MR_Box) (HOInstInfo_9));
            }
          }
          break;
        case (MR_Integer) 2:
        case (MR_Integer) 5:
          mercury__require__unexpected_2_p_0((MR_String) "function \140transform_hlds.direct_arg_in_out.clobber_daio_arg_inst\'/2", (MR_String) "inst is not a daio arg inst");
          break;
        case (MR_Integer) 3:
        case (MR_Integer) 4:
          mercury__require__unexpected_2_p_0((MR_String) "function \140transform_hlds.direct_arg_in_out.clobber_daio_arg_inst\'/2", (MR_String) "unexpanded arg inst");
          break;
      }
      break;
  }
  return ClobberedInst_6;
}

static MR_Box MR_CALL 
transform_hlds__direct_arg_in_out__clobber_daio_bound_inst_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_ClobberedInst_6;

  conv0_ClobberedInst_6 = transform_hlds__direct_arg_in_out__clobber_daio_arg_inst_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_ClobberedInst_6));
  return wrapper_arg_2;
}

static MR_Word MR_CALL 
transform_hlds__direct_arg_in_out__clobber_daio_bound_inst_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word BoundInst_5)
{
  MR_Word ClobberedBoundInst_6;
  MR_Word ConsId_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BoundInst_5, (MR_Integer) 0))));
  MR_Word ArgInsts_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BoundInst_5, (MR_Integer) 1))));
  MR_Word ClobberedArgInsts_9;
  MR_Word Var_10;

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (&transform_hlds__direct_arg_in_out_scalar_common_8[3]));
    MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (transform_hlds__direct_arg_in_out__clobber_daio_bound_inst_2_f_0_1));
    MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (ModuleInfo_4));
  }
  ClobberedArgInsts_9 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Var_10, ArgInsts_8);
  {
    ClobberedBoundInst_6 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), ClobberedBoundInst_6, 0) = ((MR_Box) (ConsId_7));
    MR_hl_field(MR_mktag(0), ClobberedBoundInst_6, 1) = ((MR_Box) (ClobberedArgInsts_9));
  }
  return ClobberedBoundInst_6;
}

static MR_Box MR_CALL 
transform_hlds__direct_arg_in_out__make_direct_arg_clone_or_spec_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_72;

  conv0_LambdaHeadVar__2_72 = transform_hlds__direct_arg_in_out__IntroducedFrom__func__generate_problem_proc_error__2028__1_1_f_0(((MR_Integer) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_72));
  return wrapper_arg_2;
}

static void MR_CALL 
transform_hlds__direct_arg_in_out__make_direct_arg_clone_or_spec_10_p_0(
  MR_Word PredProcId_11,
  MR_Word DirectArgProc_12,
  MR_Word STATE_VARIABLE_DirectArgInOutMap_0_22,
  MR_Word * STATE_VARIABLE_DirectArgInOutMap_23,
  MR_Word STATE_VARIABLE_CloneInOutMap_0_24,
  MR_Word * STATE_VARIABLE_CloneInOutMap_25,
  MR_Word STATE_VARIABLE_ModuleInfo_0_26,
  MR_Word * STATE_VARIABLE_ModuleInfo_27,
  MR_Word STATE_VARIABLE_Specs_0_28,
  MR_Word * STATE_VARIABLE_Specs_29)
{
  if (((MR_tag((MR_Word) DirectArgProc_12)) == (MR_Integer) 0))
  {
    MR_Word OoMInOutArgs_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DirectArgProc_12, (MR_Integer) 0))));
    MR_Word ProcInOut_18;

    transform_hlds__direct_arg_in_out__make_direct_arg_in_out_clone_7_p_0(PredProcId_11, OoMInOutArgs_17, &ProcInOut_18, STATE_VARIABLE_CloneInOutMap_0_24, STATE_VARIABLE_CloneInOutMap_25, STATE_VARIABLE_ModuleInfo_0_26, STATE_VARIABLE_ModuleInfo_27);
    mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__type_ctor_info_direct_arg_proc_in_out_0), ((MR_Box) (PredProcId_11)), ((MR_Box) (ProcInOut_18)), STATE_VARIABLE_DirectArgInOutMap_0_22, STATE_VARIABLE_DirectArgInOutMap_23);
    *STATE_VARIABLE_Specs_29 = STATE_VARIABLE_Specs_0_28;
  }
  else
  {
    MR_Word OoMProblemArgs_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DirectArgProc_12, (MR_Integer) 0))));
    MR_Word Spec_21;
    MR_Integer HeadProblemArg_32 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OoMProblemArgs_19, (MR_Integer) 0))));
    MR_Word TailProblemArgs_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OoMProblemArgs_19, (MR_Integer) 1))));
    MR_Word ProcDescPieces_34;
    MR_Word Pieces_35;
    MR_Word ProcInfo_38;
    MR_Word Context_39;

    ProcDescPieces_34 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(STATE_VARIABLE_ModuleInfo_0_26, (MR_Integer) 1, PredProcId_11);
    if ((TailProblemArgs_33 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_41;
      MR_Word Var_43;
      MR_Word Var_45;
      MR_Word Var_46;
      MR_Word Var_48;

      {
        Var_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_46, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(MR_mktag(3), Var_46, 1) = ((MR_Box) (HeadProblemArg_32));
      }
      {
        Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (Var_46));
        MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__direct_arg_in_out_scalar_common_1[13])));
      }
      {
        Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__direct_arg_in_out_scalar_common_1[11])));
        MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (Var_45));
      }
      {
        Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__direct_arg_in_out_scalar_common_1[10])));
        MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (Var_43));
      }
      Var_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ProcDescPieces_34, (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__direct_arg_in_out_scalar_common_1[36])));
      Pieces_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_41, Var_48);
    }
    else
    {
      MR_Word ProblemArgPieces_36;
      MR_Word ProblemArgListPieces_37;
      MR_Word Var_51;
      MR_Word Var_54;
      MR_Word Var_55;
      MR_Word Var_57;

      {
        Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (HeadProblemArg_32));
        MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (TailProblemArgs_33));
      }
      ProblemArgPieces_36 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (&transform_hlds__direct_arg_in_out_scalar_common_2[5]), Var_51);
      ProblemArgListPieces_37 = parse_tree__error_util__component_list_to_pieces_2_f_0((MR_String) "and", ProblemArgPieces_36);
      Var_57 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ProcDescPieces_34, (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__direct_arg_in_out_scalar_common_1[54])));
      Var_55 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__direct_arg_in_out_scalar_common_1[40])), Var_57);
      Var_54 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ProblemArgListPieces_37, Var_55);
      Pieces_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__direct_arg_in_out_scalar_common_1[38])), Var_54);
    }
    hlds__hlds_module__module_info_proc_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_26, PredProcId_11, &ProcInfo_38);
    hlds__hlds_pred__proc_info_get_context_2_p_0(ProcInfo_38, &Context_39);
    {
      Spec_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_21, 0) = ((MR_Box) ((MR_String) "predicate \140transform_hlds.direct_arg_in_out.generate_problem_proc_error\'/4"));
      MR_hl_field(MR_mktag(1), Spec_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_21, 2) = ((MR_Box) ((MR_Unsigned) 76U));
      MR_hl_field(MR_mktag(1), Spec_21, 3) = ((MR_Box) (Context_39));
      MR_hl_field(MR_mktag(1), Spec_21, 4) = ((MR_Box) (Pieces_35));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_29 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_21));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_28));
    }
    *STATE_VARIABLE_DirectArgInOutMap_23 = STATE_VARIABLE_DirectArgInOutMap_0_22;
    *STATE_VARIABLE_CloneInOutMap_25 = STATE_VARIABLE_CloneInOutMap_0_24;
    *STATE_VARIABLE_ModuleInfo_27 = STATE_VARIABLE_ModuleInfo_0_26;
  }
}

static void MR_CALL 
transform_hlds__direct_arg_in_out__make_direct_arg_in_out_clone_7_p_0(
  MR_Word PredProcId_8,
  MR_Word OoMInOutArgs_9,
  MR_Word * ProcInOut_10,
  MR_Word STATE_VARIABLE_CloneInOutMap_0_124,
  MR_Word * STATE_VARIABLE_CloneInOutMap_125,
  MR_Word STATE_VARIABLE_ModuleInfo_0_126,
  MR_Word * STATE_VARIABLE_ModuleInfo_127)
{
  MR_bool succeeded;
  MR_Word Globals_13;
  MR_Word VeryVerbose_14;
  MR_Word PredId_16;
  MR_Integer ProcId_17;
  MR_Word PredInfo0_18;
  MR_Word ProcTable0_19;
  MR_Word ProcInfo_20;
  MR_Word ProcTable_21;
  MR_Word HeadVars_23;
  MR_Word Goal_24;
  MR_Word VarTable_25;
  MR_Word RttiVarMaps_26;
  MR_Word InstVarSet_27;
  MR_Word DeclaredModes_28;
  MR_Word Modes_29;
  MR_Word MaybeDeclaredDetism_31;
  MR_Word Detism_32;
  MR_Word EvalMethod_33;
  MR_Word MainContext_35;
  MR_Word ItemNumber_36;
  MR_Word CanProcess_37;
  MR_Word MaybeUntupleInfo_41;
  MR_Word VarNameRemap_42;
  MR_Word DeletedCallees_44;
  MR_Word IsAddressTaken_45;
  MR_Word HasForeignProcExports_46;
  MR_Word HasParallelConj_47;
  MR_Word HasUserEvent_48;
  MR_Word HasTailCallEvent_49;
  MR_Word OisuKinds_50;
  MR_Word MaybeRequireTailRecursion_51;
  MR_Word RegR_HeadVars_52;
  MR_Word MaybeArgPassInfo_53;
  MR_Word MaybeSpecialReturn_54;
  MR_Word InitialLiveness_55;
  MR_Word StackSlots_56;
  MR_Word NeedsMaxfrSlot_57;
  MR_Word MaybeCallTableTip_58;
  MR_Word MaybeTableIOInfo_59;
  MR_Word MaybeTableAttrs_60;
  MR_Word MaybeObsoleteInFavourOf_61;
  MR_Word MaybeDeepProfProcInfo_62;
  MR_Word MaybeArgSizes_63;
  MR_Word MaybeTermInfo_64;
  MR_Word Term2Info_65;
  MR_Word MaybeExceptionInfo_66;
  MR_Word MaybeTrailingInfo_67;
  MR_Word MaybeMMTablingInfo_68;
  MR_Word SharingInfo_69;
  MR_Word ReuseInfo_70;
  MR_Word ModuleName_71;
  MR_String PredName_72;
  MR_Integer OrigArity_73;
  MR_Word PredOrFunc_74;
  MR_Word Origin_75;
  MR_Word Status_76;
  MR_Word Markers_77;
  MR_Word ArgTypes_78;
  MR_Word DeclTypeVarSet_79;
  MR_Word TypeVarSet_80;
  MR_Word ExistQVars_81;
  MR_Word ClassContext_82;
  MR_Word ClausesInfo_83;
  MR_Word Context_85;
  MR_Word CurUserDecl_86;
  MR_Word GoalType_87;
  MR_Word Kinds_88;
  MR_Word ExistQVarBindings_89;
  MR_Word HeadTypeParams_90;
  MR_Word ClassProofs_91;
  MR_Word ClassConstraintMap_92;
  MR_Word UnprovenBodyConstraints_93;
  MR_Word InstGraphInfo_94;
  MR_Word ArgModesMaps_95;
  MR_Word PredVarNameRemap_96;
  MR_Word Assertions_97;
  MR_Word ObsoleteInFavourOf_98;
  MR_Word InstanceMethodArgTypes_99;
  MR_Integer HeadArgPos_100;
  MR_Word TailArgPosns_101;
  MR_Word CloneArgTypes_102;
  MR_Word CloneHeadVars_103;
  MR_Word CloneModes_104;
  MR_Word CloneVarTable_105;
  MR_Word CloneDeclaredModes_106;
  MR_Word CloneProcInfo_114;
  MR_String ClonePredName_115;
  MR_Word CloneOrigin_116;
  MR_Word CloneProcTable_117;
  MR_Word ClonePredInfo_118;
  MR_Word PredicateTable0_119;
  MR_Word ClonePredId_120;
  MR_Word PredicateTable_121;
  MR_Word ClonePredProcId_122;
  MR_Word STATE_VARIABLE_ModuleInfo_132_132;
  MR_Integer Var_138;
  MR_String Var_174;
  MR_String Var_175;
  MR_String Var_182;
  MR_Box conv0_ProcInfo_20;
  MR_Word _MaybeArgLives_30;
  MR_Word _ModeErrors_34;
  MR_Word _MaybeHeadModesConstr_38;
  MR_Word _DetismDecl_39;
  MR_Word _CseNopullContexts_40;
  MR_Word _StateVarWarnings_43;
  MR_Word _ProcTable_84;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_126, &Globals_13);
  libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 73, &VeryVerbose_14);
  switch (VeryVerbose_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      hlds__passes_aux__write_proc_progress_message_5_p_0(STATE_VARIABLE_ModuleInfo_0_126, (MR_String) "Cloning", PredProcId_8);
      break;
  }
  PredId_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredProcId_8, (MR_Integer) 0))));
  ProcId_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredProcId_8, (MR_Integer) 1))));
  hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_126, PredId_16, &PredInfo0_18);
  hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_18, &ProcTable0_19);
  mercury__map__det_remove_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_17)), &conv0_ProcInfo_20, ProcTable0_19, &ProcTable_21);
  ProcInfo_20 = ((MR_Word) (conv0_ProcInfo_20));
  succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable_21);
  if (succeeded)
    hlds__hlds_module__module_info_remove_predicate_3_p_0(PredId_16, STATE_VARIABLE_ModuleInfo_0_126, &STATE_VARIABLE_ModuleInfo_132_132);
  else
  {
    MR_Word PredInfo_22;

    hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcTable_21, PredInfo0_18, &PredInfo_22);
    hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_16, PredInfo_22, STATE_VARIABLE_ModuleInfo_0_126, &STATE_VARIABLE_ModuleInfo_132_132);
  }
  hlds__hlds_pred__proc_prepare_to_clone_49_p_0(ProcInfo_20, &HeadVars_23, &Goal_24, &VarTable_25, &RttiVarMaps_26, &InstVarSet_27, &DeclaredModes_28, &Modes_29, &_MaybeArgLives_30, &MaybeDeclaredDetism_31, &Detism_32, &EvalMethod_33, &_ModeErrors_34, &MainContext_35, &ItemNumber_36, &CanProcess_37, &_MaybeHeadModesConstr_38, &_DetismDecl_39, &_CseNopullContexts_40, &MaybeUntupleInfo_41, &VarNameRemap_42, &_StateVarWarnings_43, &DeletedCallees_44, &IsAddressTaken_45, &HasForeignProcExports_46, &HasParallelConj_47, &HasUserEvent_48, &HasTailCallEvent_49, &OisuKinds_50, &MaybeRequireTailRecursion_51, &RegR_HeadVars_52, &MaybeArgPassInfo_53, &MaybeSpecialReturn_54, &InitialLiveness_55, &StackSlots_56, &NeedsMaxfrSlot_57, &MaybeCallTableTip_58, &MaybeTableIOInfo_59, &MaybeTableAttrs_60, &MaybeObsoleteInFavourOf_61, &MaybeDeepProfProcInfo_62, &MaybeArgSizes_63, &MaybeTermInfo_64, &Term2Info_65, &MaybeExceptionInfo_66, &MaybeTrailingInfo_67, &MaybeMMTablingInfo_68, &SharingInfo_69, &ReuseInfo_70);
  hlds__hlds_pred__pred_prepare_to_clone_30_p_0(PredInfo0_18, &ModuleName_71, &PredName_72, &OrigArity_73, &PredOrFunc_74, &Origin_75, &Status_76, &Markers_77, &ArgTypes_78, &DeclTypeVarSet_79, &TypeVarSet_80, &ExistQVars_81, &ClassContext_82, &ClausesInfo_83, &_ProcTable_84, &Context_85, &CurUserDecl_86, &GoalType_87, &Kinds_88, &ExistQVarBindings_89, &HeadTypeParams_90, &ClassProofs_91, &ClassConstraintMap_92, &UnprovenBodyConstraints_93, &InstGraphInfo_94, &ArgModesMaps_95, &PredVarNameRemap_96, &Assertions_97, &ObsoleteInFavourOf_98, &InstanceMethodArgTypes_99);
  HeadArgPos_100 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OoMInOutArgs_9, (MR_Integer) 0))));
  TailArgPosns_101 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OoMInOutArgs_9, (MR_Integer) 1))));
  transform_hlds__direct_arg_in_out__clone_daio_pred_proc_args_12_p_0(STATE_VARIABLE_ModuleInfo_132_132, (MR_Integer) 1, HeadArgPos_100, TailArgPosns_101, ArgTypes_78, HeadVars_23, Modes_29, &CloneArgTypes_102, &CloneHeadVars_103, &CloneModes_104, VarTable_25, &CloneVarTable_105);
  if ((DeclaredModes_28 == (MR_Word) ((MR_Unsigned) 0U)))
    CloneDeclaredModes_106 = (MR_Word) ((MR_Unsigned) 0U);
  else
    {
      CloneDeclaredModes_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), CloneDeclaredModes_106, 0) = ((MR_Box) (CloneModes_104));
    }
  hlds__hlds_pred__proc_create_49_p_0(CloneHeadVars_103, Goal_24, CloneVarTable_105, RttiVarMaps_26, InstVarSet_27, CloneDeclaredModes_106, CloneModes_104, (MR_Word) ((MR_Unsigned) 0U), MaybeDeclaredDetism_31, Detism_32, EvalMethod_33, (MR_Word) ((MR_Unsigned) 0U), MainContext_35, ItemNumber_36, CanProcess_37, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 2, (MR_Word) ((MR_Unsigned) 0U), MaybeUntupleInfo_41, VarNameRemap_42, (MR_Word) ((MR_Unsigned) 0U), DeletedCallees_44, IsAddressTaken_45, HasForeignProcExports_46, HasParallelConj_47, HasUserEvent_48, HasTailCallEvent_49, OisuKinds_50, MaybeRequireTailRecursion_51, RegR_HeadVars_52, MaybeArgPassInfo_53, MaybeSpecialReturn_54, InitialLiveness_55, StackSlots_56, NeedsMaxfrSlot_57, MaybeCallTableTip_58, MaybeTableIOInfo_59, MaybeTableAttrs_60, MaybeObsoleteInFavourOf_61, MaybeDeepProfProcInfo_62, MaybeArgSizes_63, MaybeTermInfo_64, Term2Info_65, MaybeExceptionInfo_66, MaybeTrailingInfo_67, MaybeMMTablingInfo_68, SharingInfo_69, ReuseInfo_70, &CloneProcInfo_114);
  Var_138 = hlds__hlds_pred__proc_id_to_int_1_f_0(ProcId_17);
  Var_174 = mercury__string__f_43_43_2_f_0((MR_String) "_", PredName_72);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&transform_hlds__direct_arg_in_out_scalar_common_3[0]), Var_138, &Var_175);
  Var_182 = mercury__string__f_43_43_2_f_0(Var_175, Var_174);
  ClonePredName_115 = mercury__string__f_43_43_2_f_0((MR_String) "direct_arg_in_out_", Var_182);
  {
    CloneOrigin_116 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), CloneOrigin_116, 0) = ((MR_Box) ((MR_Unsigned) 12U));
    MR_hl_field(MR_mktag(3), CloneOrigin_116, 1) = ((MR_Box) (Origin_75));
    MR_hl_field(MR_mktag(3), CloneOrigin_116, 2) = ((MR_Box) (PredId_16));
    MR_hl_field(MR_mktag(3), CloneOrigin_116, 3) = ((MR_Box) (ProcId_17));
  }
  CloneProcTable_117 = mercury__map__singleton_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_17)), ((MR_Box) (CloneProcInfo_114)));
  hlds__hlds_pred__pred_create_30_p_0(ModuleName_71, ClonePredName_115, OrigArity_73, PredOrFunc_74, CloneOrigin_116, Status_76, Markers_77, CloneArgTypes_102, DeclTypeVarSet_79, TypeVarSet_80, ExistQVars_81, ClassContext_82, ClausesInfo_83, CloneProcTable_117, Context_85, CurUserDecl_86, GoalType_87, Kinds_88, ExistQVarBindings_89, HeadTypeParams_90, ClassProofs_91, ClassConstraintMap_92, UnprovenBodyConstraints_93, InstGraphInfo_94, ArgModesMaps_95, PredVarNameRemap_96, Assertions_97, ObsoleteInFavourOf_98, InstanceMethodArgTypes_99, &ClonePredInfo_118);
  hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_132_132, &PredicateTable0_119);
  hlds__pred_table__predicate_table_insert_4_p_0(ClonePredInfo_118, &ClonePredId_120, PredicateTable0_119, &PredicateTable_121);
  hlds__hlds_module__module_info_set_predicate_table_3_p_0(PredicateTable_121, STATE_VARIABLE_ModuleInfo_132_132, STATE_VARIABLE_ModuleInfo_127);
  {
    ClonePredProcId_122 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), ClonePredProcId_122, 0) = ((MR_Box) (ClonePredId_120));
    MR_hl_field(MR_mktag(0), ClonePredProcId_122, 1) = ((MR_Box) (ProcId_17));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *ProcInOut_10 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ClonePredProcId_122));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (OoMInOutArgs_9));
  }
  mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__direct_arg_in_out_scalar_common_1[2]), ((MR_Box) (ClonePredProcId_122)), ((MR_Box) (OoMInOutArgs_9)), STATE_VARIABLE_CloneInOutMap_0_124, STATE_VARIABLE_CloneInOutMap_125);
}

static MR_Box MR_CALL 
transform_hlds__direct_arg_in_out__clone_daio_pred_proc_args_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_ClobberedBoundInst_6;

  conv0_ClobberedBoundInst_6 = transform_hlds__direct_arg_in_out__clobber_daio_bound_inst_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_ClobberedBoundInst_6));
  return wrapper_arg_2;
}

static void MR_CALL 
transform_hlds__direct_arg_in_out__clone_daio_pred_proc_args_12_p_0(
  MR_Word ModuleInfo_13,
  MR_Integer CurArgNum_14,
  MR_Integer HeadArgPosn_15,
  MR_Word TailArgPosns_16,
  MR_Word Types_17,
  MR_Word Vars_18,
  MR_Word Modes_19,
  MR_Word * CloneTypes_20,
  MR_Word * CloneVars_21,
  MR_Word * CloneModes_22,
  MR_Word STATE_VARIABLE_VarTypes_0_45,
  MR_Word * STATE_VARIABLE_VarTypes_46)
{
  MR_bool succeeded = (Types_17 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word HeadType_24;
  MR_Word TailTypes_25;
  MR_Word HeadVar_26;
  MR_Word TailVars_27;
  MR_Word HeadMode_28;
  MR_Word TailModes_29;

  if (succeeded)
  {
    HeadType_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Types_17, (MR_Integer) 0))));
    TailTypes_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Types_17, (MR_Integer) 1))));
    succeeded = (Vars_18 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      HeadVar_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Vars_18, (MR_Integer) 0))));
      TailVars_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Vars_18, (MR_Integer) 1))));
      succeeded = (Modes_19 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        HeadMode_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Modes_19, (MR_Integer) 0))));
        TailModes_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Modes_19, (MR_Integer) 1))));
      }
    }
  }
  if (succeeded)
  {
    succeeded = (HeadArgPosn_15 == CurArgNum_14);
    if (succeeded)
    {
      MR_Word HeadVarEntry_30;
      MR_String HeadVarName_31;
      MR_String NewVarName_34;
      MR_Word NewVarIsDummy_35;
      MR_Word NewVarEntry_36;
      MR_Word NewVar_37;
      MR_Word ClobberedHeadMode_38;
      MR_Word CloneMode_39;
      MR_Word STATE_VARIABLE_VarTypes_47_47;
      MR_Word FromInst_65;
      MR_Word ToInst_66;
      MR_Word ClobberedFromInst_67;
      MR_Word Inst_69;

      parse_tree__var_table__lookup_var_entry_3_p_0(STATE_VARIABLE_VarTypes_0_45, HeadVar_26, &HeadVarEntry_30);
      HeadVarName_31 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVarEntry_30, (MR_Integer) 0))));
      succeeded = (strcmp(HeadVarName_31, (MR_String) "") == 0);
      if (succeeded)
        NewVarName_34 = (MR_String) "";
      else
        NewVarName_34 = HeadVarName_31;
      NewVarIsDummy_35 = check_hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_13, HeadType_24);
      {
        NewVarEntry_36 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), NewVarEntry_36, 0) = ((MR_Box) (NewVarName_34));
        MR_hl_field(MR_mktag(0), NewVarEntry_36, 1) = ((MR_Box) (HeadType_24));
        MR_hl_field(MR_mktag(0), NewVarEntry_36, 2) = (MR_Box) ((MR_Unsigned) (NewVarIsDummy_35));
      }
      parse_tree__var_table__add_var_entry_4_p_0(NewVarEntry_36, &NewVar_37, STATE_VARIABLE_VarTypes_0_45, &STATE_VARIABLE_VarTypes_47_47);
      check_hlds__mode_util__mode_get_insts_4_p_0(ModuleInfo_13, HeadMode_28, &FromInst_65, &ToInst_66);
      check_hlds__inst_lookup__inst_expand_3_p_0(ModuleInfo_13, FromInst_65, &Inst_69);
      switch (MR_tag((MR_Word) Inst_69)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            mercury__require__unexpected_2_p_0((MR_String) "function \140transform_hlds.direct_arg_in_out.clobber_daio_inst\'/2", (MR_String) "inst is not a daio inst");
            return;
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            mercury__require__unexpected_2_p_0((MR_String) "function \140transform_hlds.direct_arg_in_out.clobber_daio_inst\'/2", (MR_String) "inst is not a daio inst");
            return;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Inst_69, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word TestResults_71 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_69, (MR_Integer) 2))));
                MR_Word BoundInsts_72 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_69, (MR_Integer) 3))));
                MR_Word ClobberedTestResults_73;
                MR_Word ClobberedBoundInsts_74;
                MR_Word Var_75;

                switch (MR_tag((MR_Word) TestResults_71)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(TestResults_71)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        ClobberedTestResults_73 = TestResults_71;
                        break;
                      case (MR_Integer) 1:
                        ClobberedTestResults_73 = TestResults_71;
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    ClobberedTestResults_73 = TestResults_71;
                    break;
                }
                {
                  Var_75 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_75, 0) = ((MR_Box) (&transform_hlds__direct_arg_in_out_scalar_common_8[2]));
                  MR_hl_field(MR_mktag(0), Var_75, 1) = ((MR_Box) (transform_hlds__direct_arg_in_out__clone_daio_pred_proc_args_12_p_0_1));
                  MR_hl_field(MR_mktag(0), Var_75, 2) = ((MR_Box) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), Var_75, 3) = ((MR_Box) (ModuleInfo_13));
                }
                ClobberedBoundInsts_74 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0), Var_75, BoundInsts_72);
                {
                  ClobberedFromInst_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ClobberedFromInst_67, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(3), ClobberedFromInst_67, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 3));
                  MR_hl_field(MR_mktag(3), ClobberedFromInst_67, 2) = ((MR_Box) (ClobberedTestResults_73));
                  MR_hl_field(MR_mktag(3), ClobberedFromInst_67, 3) = ((MR_Box) (ClobberedBoundInsts_74));
                }
              }
              break;
            case (MR_Integer) 1:
            case (MR_Integer) 2:
            case (MR_Integer) 5:
              {
                mercury__require__unexpected_2_p_0((MR_String) "function \140transform_hlds.direct_arg_in_out.clobber_daio_inst\'/2", (MR_String) "inst is not a daio inst");
                return;
              }
              break;
            case (MR_Integer) 3:
            case (MR_Integer) 4:
              {
                mercury__require__unexpected_2_p_0((MR_String) "function \140transform_hlds.direct_arg_in_out.clobber_daio_inst\'/2", (MR_String) "unexpanded inst");
                return;
              }
              break;
          }
          break;
      }
      {
        ClobberedHeadMode_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ClobberedHeadMode_38, 0) = ((MR_Box) (FromInst_65));
        MR_hl_field(MR_mktag(0), ClobberedHeadMode_38, 1) = ((MR_Box) (ClobberedFromInst_67));
      }
      {
        CloneMode_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), CloneMode_39, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), CloneMode_39, 1) = ((MR_Box) (ToInst_66));
      }
      if ((TailArgPosns_16 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_49;
        MR_Word Var_50;

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *CloneTypes_20 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadType_24));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Types_17));
        }
        {
          Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (NewVar_37));
          MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (TailVars_27));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *CloneVars_21 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadVar_26));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_49));
        }
        {
          Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (CloneMode_39));
          MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (TailModes_29));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *CloneModes_22 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ClobberedHeadMode_38));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_50));
        }
        *STATE_VARIABLE_VarTypes_46 = STATE_VARIABLE_VarTypes_47_47;
      }
      else
      {
        MR_Integer HeadTailArgPosn_40 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), TailArgPosns_16, (MR_Integer) 0))));
        MR_Word TailTailArgPosns_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailArgPosns_16, (MR_Integer) 1))));
        MR_Word TailCloneTypes_42;
        MR_Word TailCloneVars_43;
        MR_Word TailCloneModes_44;
        MR_Integer Var_51 = (MR_Integer) ((MR_Unsigned) CurArgNum_14 + (MR_Unsigned) 1);
        MR_Word Var_54;
        MR_Word Var_55;
        MR_Word Var_56;

        transform_hlds__direct_arg_in_out__clone_daio_pred_proc_args_12_p_0(ModuleInfo_13, Var_51, HeadTailArgPosn_40, TailTailArgPosns_41, TailTypes_25, TailVars_27, TailModes_29, &TailCloneTypes_42, &TailCloneVars_43, &TailCloneModes_44, STATE_VARIABLE_VarTypes_47_47, STATE_VARIABLE_VarTypes_46);
        {
          Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (HeadType_24));
          MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (TailCloneTypes_42));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *CloneTypes_20 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadType_24));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_54));
        }
        {
          Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (NewVar_37));
          MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (TailCloneVars_43));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *CloneVars_21 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadVar_26));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_55));
        }
        {
          Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (CloneMode_39));
          MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (TailCloneModes_44));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *CloneModes_22 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ClobberedHeadMode_38));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_56));
        }
      }
    }
    else
    {
      MR_Integer Var_57 = (MR_Integer) ((MR_Unsigned) CurArgNum_14 + (MR_Unsigned) 1);
      MR_Word TailCloneTypes_62;
      MR_Word TailCloneVars_63;
      MR_Word TailCloneModes_64;

      transform_hlds__direct_arg_in_out__clone_daio_pred_proc_args_12_p_0(ModuleInfo_13, Var_57, HeadArgPosn_15, TailArgPosns_16, TailTypes_25, TailVars_27, TailModes_29, &TailCloneTypes_62, &TailCloneVars_63, &TailCloneModes_64, STATE_VARIABLE_VarTypes_0_45, STATE_VARIABLE_VarTypes_46);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *CloneTypes_20 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadType_24));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailCloneTypes_62));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *CloneVars_21 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadVar_26));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailCloneVars_63));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *CloneModes_22 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadMode_28));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailCloneModes_64));
      }
    }
  }
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.direct_arg_in_out.clone_daio_pred_proc_args\'/12", (MR_String) "ran out of arguments");
      return;
    }
}

static void MR_CALL 
transform_hlds__direct_arg_in_out__do_direct_arg_in_out_transform_in_module_4_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv17_Instances_6;

  transform_hlds__direct_arg_in_out__transform_class_instances_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv17_Instances_6);
  *wrapper_arg_2 = ((MR_Box) (conv17_Instances_6));
}

static void MR_CALL 
transform_hlds__direct_arg_in_out__do_direct_arg_in_out_transform_in_module_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv16_Class_6;

  transform_hlds__direct_arg_in_out__transform_class_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv16_Class_6);
  *wrapper_arg_2 = ((MR_Box) (conv16_Class_6));
}

static void MR_CALL 
transform_hlds__direct_arg_in_out__do_direct_arg_in_out_transform_in_module_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv13_STATE_VARIABLE_ModuleInfo_20;
  MR_Word conv12_STATE_VARIABLE_Specs_22;

  transform_hlds__direct_arg_in_out__transform_direct_arg_in_out_calls_in_pred_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv13_STATE_VARIABLE_ModuleInfo_20, ((MR_Word) (wrapper_arg_4)), &conv12_STATE_VARIABLE_Specs_22);
  *wrapper_arg_3 = ((MR_Box) (conv13_STATE_VARIABLE_ModuleInfo_20));
  *wrapper_arg_5 = ((MR_Box) (conv12_STATE_VARIABLE_Specs_22));
}

static void MR_CALL 
transform_hlds__direct_arg_in_out__do_direct_arg_in_out_transform_in_module_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8,
  MR_Box wrapper_arg_9,
  MR_Box * wrapper_arg_10)
{
  MR_Box closure = closure_arg;
  MR_Word conv7_STATE_VARIABLE_DirectArgInOutMap_23;
  MR_Word conv6_STATE_VARIABLE_CloneInOutMap_25;
  MR_Word conv5_STATE_VARIABLE_ModuleInfo_27;
  MR_Word conv4_STATE_VARIABLE_Specs_29;

  transform_hlds__direct_arg_in_out__make_direct_arg_clone_or_spec_10_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv7_STATE_VARIABLE_DirectArgInOutMap_23, ((MR_Word) (wrapper_arg_5)), &conv6_STATE_VARIABLE_CloneInOutMap_25, ((MR_Word) (wrapper_arg_7)), &conv5_STATE_VARIABLE_ModuleInfo_27, ((MR_Word) (wrapper_arg_9)), &conv4_STATE_VARIABLE_Specs_29);
  *wrapper_arg_4 = ((MR_Box) (conv7_STATE_VARIABLE_DirectArgInOutMap_23));
  *wrapper_arg_6 = ((MR_Box) (conv6_STATE_VARIABLE_CloneInOutMap_25));
  *wrapper_arg_8 = ((MR_Box) (conv5_STATE_VARIABLE_ModuleInfo_27));
  *wrapper_arg_10 = ((MR_Box) (conv4_STATE_VARIABLE_Specs_29));
}

static void MR_CALL 
transform_hlds__direct_arg_in_out__do_direct_arg_in_out_transform_in_module_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_RevExportedProcs_26;
  MR_Word conv0_STATE_VARIABLE_Specs_28;

  transform_hlds__direct_arg_in_out__generate_error_if_cloned_proc_is_exported_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_RevExportedProcs_26, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Specs_28);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_RevExportedProcs_26));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_28));
}

void MR_CALL 
transform_hlds__direct_arg_in_out__do_direct_arg_in_out_transform_in_module_4_p_0(
  MR_Word DirectArgProcMap_5,
  MR_Word STATE_VARIABLE_ModuleInfo_0_20,
  MR_Word * STATE_VARIABLE_ModuleInfo_21,
  MR_Word * STATE_VARIABLE_Specs_22)
{
  MR_Word ExportedProcsCord0_8;
  MR_Word ExportedProcs0_9;
  MR_Word RevExportedProcs_10;
  MR_Word ExportedProcs_11;
  MR_Word ExportedProcsCord_12;
  MR_Word DirectArgProcInOutMap_13;
  MR_Word CloneInOutMap_14;
  MR_Word PredIds_15;
  MR_Word ClassTable0_16;
  MR_Word ClassTable_17;
  MR_Word InstanceTable0_18;
  MR_Word InstanceTable_19;
  MR_Word Var_24;
  MR_Word STATE_VARIABLE_Specs_26_26;
  MR_Word STATE_VARIABLE_ModuleInfo_27_27;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word STATE_VARIABLE_ModuleInfo_31_31;
  MR_Word STATE_VARIABLE_Specs_32_32;
  MR_Word Var_33;
  MR_Word STATE_VARIABLE_ModuleInfo_34_34;
  MR_Word Var_36;
  MR_Word STATE_VARIABLE_ModuleInfo_37_37;
  MR_Word Var_38;
  MR_Box conv3_RevExportedProcs_10;
  MR_Box conv2_STATE_VARIABLE_Specs_26_26;
  MR_Box conv11_DirectArgProcInOutMap_13;
  MR_Box conv10_CloneInOutMap_14;
  MR_Box conv9_STATE_VARIABLE_ModuleInfo_31_31;
  MR_Box conv8_STATE_VARIABLE_Specs_32_32;
  MR_Box conv15_STATE_VARIABLE_ModuleInfo_34_34;
  MR_Box conv14_STATE_VARIABLE_Specs_22;

  hlds__hlds_module__module_info_get_pragma_exported_procs_2_p_0(STATE_VARIABLE_ModuleInfo_0_20, &ExportedProcsCord0_8);
  ExportedProcs0_9 = mercury__cord__list_1_f_0((MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_pragma_exported_proc_0), ExportedProcsCord0_8);
  {
    Var_24 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (&transform_hlds__direct_arg_in_out_scalar_common_5[0]));
    MR_hl_field(MR_mktag(0), Var_24, 1) = ((MR_Box) (transform_hlds__direct_arg_in_out__do_direct_arg_in_out_transform_in_module_4_p_0_1));
    MR_hl_field(MR_mktag(0), Var_24, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(MR_mktag(0), Var_24, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_20));
    MR_hl_field(MR_mktag(0), Var_24, 4) = ((MR_Box) (DirectArgProcMap_5));
  }
  mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_pragma_exported_proc_0), (MR_Word) (&transform_hlds__direct_arg_in_out_scalar_common_1[0]), (MR_Word) (&transform_hlds__direct_arg_in_out_scalar_common_1[1]), Var_24, ExportedProcs0_9, ((MR_Box) ((MR_Unsigned) 0U)), &conv3_RevExportedProcs_10, ((MR_Box) ((MR_Unsigned) 0U)), &conv2_STATE_VARIABLE_Specs_26_26);
  RevExportedProcs_10 = ((MR_Word) (conv3_RevExportedProcs_10));
  STATE_VARIABLE_Specs_26_26 = ((MR_Word) (conv2_STATE_VARIABLE_Specs_26_26));
  mercury__list__reverse_2_p_0((MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_pragma_exported_proc_0), RevExportedProcs_10, &ExportedProcs_11);
  ExportedProcsCord_12 = mercury__cord__from_list_1_f_0((MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_pragma_exported_proc_0), ExportedProcs_11);
  hlds__hlds_module__module_info_set_pragma_exported_procs_3_p_0(ExportedProcsCord_12, STATE_VARIABLE_ModuleInfo_0_20, &STATE_VARIABLE_ModuleInfo_27_27);
  Var_29 = mercury__map__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__type_ctor_info_direct_arg_proc_in_out_0));
  Var_30 = mercury__map__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__direct_arg_in_out_scalar_common_1[2]));
  mercury__map__foldl4_10_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_direct_arg_proc_0), (MR_Word) (&transform_hlds__direct_arg_in_out_scalar_common_2[0]), (MR_Word) (&transform_hlds__direct_arg_in_out_scalar_common_2[1]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&transform_hlds__direct_arg_in_out_scalar_common_1[1]), (MR_Word) (&transform_hlds__direct_arg_in_out_scalar_common_2[4]), DirectArgProcMap_5, ((MR_Box) (Var_29)), &conv11_DirectArgProcInOutMap_13, ((MR_Box) (Var_30)), &conv10_CloneInOutMap_14, ((MR_Box) (STATE_VARIABLE_ModuleInfo_27_27)), &conv9_STATE_VARIABLE_ModuleInfo_31_31, ((MR_Box) (STATE_VARIABLE_Specs_26_26)), &conv8_STATE_VARIABLE_Specs_32_32);
  DirectArgProcInOutMap_13 = ((MR_Word) (conv11_DirectArgProcInOutMap_13));
  CloneInOutMap_14 = ((MR_Word) (conv10_CloneInOutMap_14));
  STATE_VARIABLE_ModuleInfo_31_31 = ((MR_Word) (conv9_STATE_VARIABLE_ModuleInfo_31_31));
  STATE_VARIABLE_Specs_32_32 = ((MR_Word) (conv8_STATE_VARIABLE_Specs_32_32));
  hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(STATE_VARIABLE_ModuleInfo_31_31, &PredIds_15);
  {
    Var_33 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_33, 0) = ((MR_Box) (&transform_hlds__direct_arg_in_out_scalar_common_7[0]));
    MR_hl_field(MR_mktag(0), Var_33, 1) = ((MR_Box) (transform_hlds__direct_arg_in_out__do_direct_arg_in_out_transform_in_module_4_p_0_3));
    MR_hl_field(MR_mktag(0), Var_33, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(MR_mktag(0), Var_33, 3) = ((MR_Box) (DirectArgProcMap_5));
    MR_hl_field(MR_mktag(0), Var_33, 4) = ((MR_Box) (DirectArgProcInOutMap_13));
    MR_hl_field(MR_mktag(0), Var_33, 5) = ((MR_Box) (CloneInOutMap_14));
  }
  mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&transform_hlds__direct_arg_in_out_scalar_common_1[1]), Var_33, PredIds_15, ((MR_Box) (STATE_VARIABLE_ModuleInfo_31_31)), &conv15_STATE_VARIABLE_ModuleInfo_34_34, ((MR_Box) (STATE_VARIABLE_Specs_32_32)), &conv14_STATE_VARIABLE_Specs_22);
  STATE_VARIABLE_ModuleInfo_34_34 = ((MR_Word) (conv15_STATE_VARIABLE_ModuleInfo_34_34));
  *STATE_VARIABLE_Specs_22 = ((MR_Word) (conv14_STATE_VARIABLE_Specs_22));
  hlds__hlds_module__module_info_get_class_table_2_p_0(STATE_VARIABLE_ModuleInfo_34_34, &ClassTable0_16);
  {
    Var_36 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_36, 0) = ((MR_Box) (&transform_hlds__direct_arg_in_out_scalar_common_8[0]));
    MR_hl_field(MR_mktag(0), Var_36, 1) = ((MR_Box) (transform_hlds__direct_arg_in_out__do_direct_arg_in_out_transform_in_module_4_p_0_4));
    MR_hl_field(MR_mktag(0), Var_36, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_36, 3) = ((MR_Box) (DirectArgProcInOutMap_13));
  }
  mercury__map__map_values_only_3_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), Var_36, ClassTable0_16, &ClassTable_17);
  hlds__hlds_module__module_info_set_class_table_3_p_0(ClassTable_17, STATE_VARIABLE_ModuleInfo_34_34, &STATE_VARIABLE_ModuleInfo_37_37);
  hlds__hlds_module__module_info_get_instance_table_2_p_0(STATE_VARIABLE_ModuleInfo_37_37, &InstanceTable0_18);
  {
    Var_38 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (&transform_hlds__direct_arg_in_out_scalar_common_8[1]));
    MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (transform_hlds__direct_arg_in_out__do_direct_arg_in_out_transform_in_module_4_p_0_5));
    MR_hl_field(MR_mktag(0), Var_38, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_38, 3) = ((MR_Box) (DirectArgProcInOutMap_13));
  }
  mercury__map__map_values_only_3_p_0((MR_Word) (&transform_hlds__direct_arg_in_out_scalar_common_1[3]), (MR_Word) (&transform_hlds__direct_arg_in_out_scalar_common_1[3]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), Var_38, InstanceTable0_18, &InstanceTable_19);
  hlds__hlds_module__module_info_set_instance_table_3_p_0(InstanceTable_19, STATE_VARIABLE_ModuleInfo_37_37, STATE_VARIABLE_ModuleInfo_21);
}

void MR_CALL 
transform_hlds__direct_arg_in_out__find_and_record_any_direct_arg_in_out_posns_7_p_0(
  MR_Word PredId_8,
  MR_Integer ProcId_9,
  MR_Word VarTypes_10,
  MR_Word Vars_11,
  MR_Word Modes_12,
  MR_Word STATE_VARIABLE_ModuleInfo_0_23,
  MR_Word * STATE_VARIABLE_ModuleInfo_24)
{
  MR_Word DirectArgInOutPosns_14;
  MR_Word ProblemPosns_15;

  transform_hlds__direct_arg_in_out__find_direct_arg_in_out_posns_7_p_0(STATE_VARIABLE_ModuleInfo_0_23, VarTypes_10, (MR_Integer) 1, Vars_11, Modes_12, &DirectArgInOutPosns_14, &ProblemPosns_15);
  if ((ProblemPosns_15 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((DirectArgInOutPosns_14 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ModuleInfo_24 = STATE_VARIABLE_ModuleInfo_0_23;
    else
    {
      MR_Integer HeadPosn_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), DirectArgInOutPosns_14, (MR_Integer) 0))));
      MR_Word TailPosns_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DirectArgInOutPosns_14, (MR_Integer) 1))));
      MR_Word OoMDirectArgInOutPosns_18;
      MR_Word DirectArgProcMap0_19;
      MR_Word DirectArgProc_20;
      MR_Word DirectArgProcMap_21;
      MR_Word Var_26;

      {
        OoMDirectArgInOutPosns_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), OoMDirectArgInOutPosns_18, 0) = ((MR_Box) (HeadPosn_16));
        MR_hl_field(MR_mktag(0), OoMDirectArgInOutPosns_18, 1) = ((MR_Box) (TailPosns_17));
      }
      hlds__hlds_module__module_info_get_direct_arg_proc_map_2_p_0(STATE_VARIABLE_ModuleInfo_0_23, &DirectArgProcMap0_19);
      {
        DirectArgProc_20 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), DirectArgProc_20, 0) = ((MR_Box) (OoMDirectArgInOutPosns_18));
      }
      {
        Var_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (PredId_8));
        MR_hl_field(MR_mktag(0), Var_26, 1) = ((MR_Box) (ProcId_9));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_direct_arg_proc_0), ((MR_Box) (Var_26)), ((MR_Box) (DirectArgProc_20)), DirectArgProcMap0_19, &DirectArgProcMap_21);
      hlds__hlds_module__module_info_set_direct_arg_proc_map_3_p_0(DirectArgProcMap_21, STATE_VARIABLE_ModuleInfo_0_23, STATE_VARIABLE_ModuleInfo_24);
    }
  else
  {
    MR_Word OoMDirectArgPosns_22;
    MR_Word Var_28;
    MR_Integer HeadPosn_30 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), ProblemPosns_15, (MR_Integer) 0))));
    MR_Word TailPosns_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ProblemPosns_15, (MR_Integer) 1))));
    MR_Word DirectArgProcMap0_32;
    MR_Word DirectArgProc_33;
    MR_Word DirectArgProcMap_34;

    {
      OoMDirectArgPosns_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), OoMDirectArgPosns_22, 0) = ((MR_Box) (HeadPosn_30));
      MR_hl_field(MR_mktag(0), OoMDirectArgPosns_22, 1) = ((MR_Box) (TailPosns_31));
    }
    hlds__hlds_module__module_info_get_direct_arg_proc_map_2_p_0(STATE_VARIABLE_ModuleInfo_0_23, &DirectArgProcMap0_32);
    {
      DirectArgProc_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), DirectArgProc_33, 0) = ((MR_Box) (OoMDirectArgPosns_22));
      MR_hl_field(MR_mktag(1), DirectArgProc_33, 1) = ((MR_Box) (DirectArgInOutPosns_14));
    }
    {
      Var_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (PredId_8));
      MR_hl_field(MR_mktag(0), Var_28, 1) = ((MR_Box) (ProcId_9));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_direct_arg_proc_0), ((MR_Box) (Var_28)), ((MR_Box) (DirectArgProc_33)), DirectArgProcMap0_32, &DirectArgProcMap_34);
    hlds__hlds_module__module_info_set_direct_arg_proc_map_3_p_0(DirectArgProcMap_34, STATE_VARIABLE_ModuleInfo_0_23, STATE_VARIABLE_ModuleInfo_24);
  }
}

static void MR_CALL 
transform_hlds__direct_arg_in_out__find_direct_arg_in_out_posns_7_p_0(
  MR_Word ModuleInfo_1,
  MR_Word VarTypes_2,
  MR_Integer CurArgNum_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7)
{
  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.direct_arg_in_out.find_direct_arg_in_out_posns\'/7", (MR_String) "list length mismatch");
        return;
      }
  else
  {
    MR_Word Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
    MR_Word Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));

    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.direct_arg_in_out.find_direct_arg_in_out_posns\'/7", (MR_String) "list length mismatch");
        return;
      }
    else
    {
      MR_Word Mode_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0))));
      MR_Word Modes_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1))));
      MR_Word TailDirectArgInOutPosns_38;
      MR_Word TailProblemPosns_39;
      MR_Word IsDAIO_40;
      MR_Integer Var_41 = (MR_Integer) ((MR_Unsigned) CurArgNum_3 + (MR_Unsigned) 1);

      transform_hlds__direct_arg_in_out__find_direct_arg_in_out_posns_7_p_0(ModuleInfo_1, VarTypes_2, Var_41, Var_43, Modes_35, &TailDirectArgInOutPosns_38, &TailProblemPosns_39);
      transform_hlds__direct_arg_in_out__is_direct_arg_in_out_posn_5_p_0(ModuleInfo_1, VarTypes_2, Var_44, Mode_34, &IsDAIO_40);
      switch (IsDAIO_40) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__6_6 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (CurArgNum_3));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailDirectArgInOutPosns_38));
            }
            *HeadVar__7_7 = TailProblemPosns_39;
          }
          break;
        case (MR_Integer) 0:
          {
            *HeadVar__6_6 = TailDirectArgInOutPosns_38;
            *HeadVar__7_7 = TailProblemPosns_39;
          }
          break;
        case (MR_Integer) 2:
          {
            *HeadVar__6_6 = TailDirectArgInOutPosns_38;
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__7_7 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (CurArgNum_3));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailProblemPosns_39));
            }
          }
          break;
      }
    }
  }
}

static void MR_CALL 
transform_hlds__direct_arg_in_out__is_direct_arg_in_out_posn_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word VarTypes_7,
  MR_Word Var_8,
  MR_Word Mode_9,
  MR_Word * IsDAIO_10)
{
  MR_bool succeeded;
  MR_Word TypeTable_11;
  MR_Word Type_12;
  MR_Word TypeDefn_14;
  MR_Word TypeCtor_13;

  hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_6, &TypeTable_11);
  parse_tree__var_table__lookup_var_type_3_p_0(VarTypes_7, Var_8, &Type_12);
  succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(Type_12, &TypeCtor_13);
  if (succeeded)
    succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_11, TypeCtor_13, &TypeDefn_14);
  if (succeeded)
  {
    MR_Word TypeBody_15;

    hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_14, &TypeBody_15);
    switch (MR_tag((MR_Word) TypeBody_15)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word TypeBodyDu_16 = (MR_Word) ((MR_Word) (TypeBody_15));
          MR_Word MaybeRepn_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeBodyDu_16, (MR_Integer) 3))));
          MR_Word Repn_22;
          MR_Word CtorRepns_23;
          MR_Word DirectArgFunctors_24;

          if ((MaybeRepn_20 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.direct_arg_in_out.is_direct_arg_in_out_posn\'/5", (MR_String) "MaybeRepn = no");
              return;
            }
          else
            Repn_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRepn_20, (MR_Integer) 0))));
          CtorRepns_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Repn_22, (MR_Integer) 0))));
          transform_hlds__direct_arg_in_out__gather_direct_arg_functors_3_p_0(CtorRepns_23, (MR_Word) ((MR_Unsigned) 0U), &DirectArgFunctors_24);
          if ((DirectArgFunctors_24 == (MR_Word) ((MR_Unsigned) 0U)))
            *IsDAIO_10 = (MR_Integer) 0;
          else
          {
            MR_Word FromToInsts_27;
            MR_Word FromInst0_28;
            MR_Word ToInst0_29;
            MR_Word FromInst_30;
            MR_Word ToInst_31;

            FromToInsts_27 = check_hlds__mode_util__mode_to_from_to_insts_2_f_0(ModuleInfo_6, Mode_9);
            FromInst0_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FromToInsts_27, (MR_Integer) 0))));
            ToInst0_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FromToInsts_27, (MR_Integer) 1))));
            check_hlds__inst_lookup__inst_expand_and_remove_constrained_inst_vars_3_p_0(ModuleInfo_6, FromInst0_28, &FromInst_30);
            check_hlds__inst_lookup__inst_expand_and_remove_constrained_inst_vars_3_p_0(ModuleInfo_6, ToInst0_29, &ToInst_31);
            switch (MR_tag((MR_Word) FromInst_30)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *IsDAIO_10 = (MR_Integer) 0;
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *IsDAIO_10 = (MR_Integer) 0;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), FromInst_30, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word FromBoundInsts_53 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FromInst_30, (MR_Integer) 3))));
                      MR_Word FreeArgDirectArgFunctors_54;

                      transform_hlds__direct_arg_in_out__some_bound_inst_has_direct_arg_free_4_p_0(ModuleInfo_6, DirectArgFunctors_24, FromBoundInsts_53, &FreeArgDirectArgFunctors_54);
                      if ((FreeArgDirectArgFunctors_54 == (MR_Word) ((MR_Unsigned) 0U)))
                        *IsDAIO_10 = (MR_Integer) 0;
                      else
                        switch (MR_tag((MR_Word) ToInst_31)) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            switch (MR_unmkbody(ToInst_31)) {
                              default: /*NOTREACHED*/ MR_assert(0);
                              case (MR_Integer) 0:
                                {
                                  mercury__require__unexpected_2_p_0((MR_String) "function \140transform_hlds.direct_arg_in_out.mode_needs_direct_arg_in_out\'/4", (MR_String) "bound to free");
                                  return;
                                }
                                break;
                              case (MR_Integer) 1:
                                *IsDAIO_10 = (MR_Integer) 0;
                                break;
                            }
                            break;
                          case (MR_Integer) 1:
                            {
                              mercury__require__unexpected_2_p_0((MR_String) "function \140transform_hlds.direct_arg_in_out.mode_needs_direct_arg_in_out\'/4", (MR_String) "bound to free");
                              return;
                            }
                            break;
                          case (MR_Integer) 2:
                            *IsDAIO_10 = (MR_Integer) 0;
                            break;
                          case (MR_Integer) 3:
                            switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ToInst_31, (MR_Integer) 0))))) {
                              default: /*NOTREACHED*/ MR_assert(0);
                              case (MR_Integer) 0:
                                {
                                  MR_Word ToBoundInsts_67 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ToInst_31, (MR_Integer) 3))));
                                  MR_Word SomeDirectArgIsBound_68;
                                  MR_Word CanSeeAllArgModes_69;

                                  transform_hlds__direct_arg_in_out__some_bound_inst_has_direct_arg_out_5_p_0(ModuleInfo_6, FreeArgDirectArgFunctors_54, ToBoundInsts_67, &SomeDirectArgIsBound_68, &CanSeeAllArgModes_69);
                                  switch (CanSeeAllArgModes_69) {
                                    default: /*NOTREACHED*/ MR_assert(0);
                                    case (MR_Integer) 1:
                                      switch (SomeDirectArgIsBound_68) {
                                        default: /*NOTREACHED*/ MR_assert(0);
                                        case (MR_Integer) 0:
                                          *IsDAIO_10 = (MR_Integer) 0;
                                          break;
                                        case (MR_Integer) 1:
                                          *IsDAIO_10 = (MR_Integer) 1;
                                          break;
                                      }
                                      break;
                                    case (MR_Integer) 0:
                                      *IsDAIO_10 = (MR_Integer) 2;
                                      break;
                                  }
                                }
                                break;
                              case (MR_Integer) 1:
                                *IsDAIO_10 = (MR_Integer) 1;
                                break;
                              case (MR_Integer) 2:
                                {
                                  MR_String Var_83;

                                  Var_83 = mercury__string__f_43_43_2_f_0((MR_String) "NYI: inst var in predicate mode in a module ", (MR_String) "that uses partially-instantiated direct_arg terms");
                                  {
                                    mercury__require__unexpected_2_p_0((MR_String) "function \140transform_hlds.direct_arg_in_out.mode_needs_direct_arg_in_out\'/4", Var_83);
                                    return;
                                  }
                                }
                                break;
                              case (MR_Integer) 3:
                                {
                                  mercury__require__unexpected_2_p_0((MR_String) "function \140transform_hlds.direct_arg_in_out.mode_needs_direct_arg_in_out\'/4", (MR_String) "unexpanded constrained_inst_vars");
                                  return;
                                }
                                break;
                              case (MR_Integer) 4:
                                {
                                  mercury__require__unexpected_2_p_0((MR_String) "function \140transform_hlds.direct_arg_in_out.mode_needs_direct_arg_in_out\'/4", (MR_String) "unexpanded defined_inst");
                                  return;
                                }
                                break;
                              case (MR_Integer) 5:
                                {
                                  MR_String Var_79;

                                  Var_79 = mercury__string__f_43_43_2_f_0((MR_String) "NYI: abstract inst in predicate mode in a module ", (MR_String) "that uses partially-instantiated direct_arg terms");
                                  {
                                    mercury__require__unexpected_2_p_0((MR_String) "function \140transform_hlds.direct_arg_in_out.mode_needs_direct_arg_in_out\'/4", Var_79);
                                    return;
                                  }
                                }
                                break;
                            }
                            break;
                        }
                    }
                    break;
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                  case (MR_Integer) 5:
                    *IsDAIO_10 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 3:
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "function \140transform_hlds.direct_arg_in_out.mode_needs_direct_arg_in_out\'/4", (MR_String) "unexpanded constrained_inst_vars");
                      return;
                    }
                    break;
                  case (MR_Integer) 4:
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "function \140transform_hlds.direct_arg_in_out.mode_needs_direct_arg_in_out\'/4", (MR_String) "unexpanded defined_inst");
                      return;
                    }
                    break;
                }
                break;
            }
          }
        }
        break;
      case (MR_Integer) 1:
        *IsDAIO_10 = (MR_Integer) 0;
        break;
      case (MR_Integer) 2:
        *IsDAIO_10 = (MR_Integer) 0;
        break;
      case (MR_Integer) 3:
        *IsDAIO_10 = (MR_Integer) 0;
        break;
    }
  }
  else
    *IsDAIO_10 = (MR_Integer) 0;
}

static void MR_CALL 
transform_hlds__direct_arg_in_out__some_bound_inst_has_direct_arg_out_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Word FreeArgDirectArgFunctors_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  MR_bool succeeded;

  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Integer) 0;
    *HeadVar__5_5 = (MR_Integer) 1;
  }
  else
  {
    MR_Word ToBoundInst_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ToBoundInsts_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word TailSomeDirectArgIsBound_14;
    MR_Word TailCanSeeAllArgModes_15;
    MR_Word ConsId_16;
    MR_Word ArgInsts0_17;
    MR_Word TypeCtorInfo_48_48;
    MR_Word SymName_18;
    MR_Integer Arity_19;

    transform_hlds__direct_arg_in_out__some_bound_inst_has_direct_arg_out_5_p_0(ModuleInfo_1, FreeArgDirectArgFunctors_2, ToBoundInsts_11, &TailSomeDirectArgIsBound_14, &TailCanSeeAllArgModes_15);
    ConsId_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ToBoundInst_10, (MR_Integer) 0))));
    ArgInsts0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ToBoundInst_10, (MR_Integer) 1))));
    succeeded = ((((MR_tag((MR_Word) ConsId_16)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_16, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (succeeded)
    {
      SymName_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_16, (MR_Integer) 1))));
      Arity_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_16, (MR_Integer) 2))));
      succeeded = (Arity_19 == (MR_Integer) 1);
      if (succeeded)
      {
        TypeCtorInfo_48_48 = (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0);
        succeeded = mercury__list__member_2_p_0(TypeCtorInfo_48_48, ((MR_Box) (SymName_18)), FreeArgDirectArgFunctors_2);
      }
    }
    if (succeeded)
    {
      MR_Word ArgInst0_21;
      MR_Word ArgInst_25;

      if ((ArgInsts0_17 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.direct_arg_in_out.some_bound_inst_has_direct_arg_out\'/5", (MR_String) "Arity = 1 but ArgInsts0 != [_]");
          return;
        }
      else
      {
        MR_Word Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgInsts0_17, (MR_Integer) 1))));
        MR_Word Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgInsts0_17, (MR_Integer) 0))));

        if ((Var_53 == (MR_Word) ((MR_Unsigned) 0U)))
          ArgInst0_21 = Var_54;
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.direct_arg_in_out.some_bound_inst_has_direct_arg_out\'/5", (MR_String) "Arity = 1 but ArgInsts0 != [_]");
            return;
          }
      }
      check_hlds__inst_lookup__inst_expand_and_remove_constrained_inst_vars_3_p_0(ModuleInfo_1, ArgInst0_21, &ArgInst_25);
      switch (MR_tag((MR_Word) ArgInst_25)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(ArgInst_25)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                *HeadVar__4_4 = TailSomeDirectArgIsBound_14;
                *HeadVar__5_5 = TailCanSeeAllArgModes_15;
              }
              break;
            case (MR_Integer) 1:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.direct_arg_in_out.some_bound_inst_has_direct_arg_out\'/5", (MR_String) "not_reached arg in reachable term");
                return;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            *HeadVar__4_4 = TailSomeDirectArgIsBound_14;
            *HeadVar__5_5 = TailCanSeeAllArgModes_15;
          }
          break;
        case (MR_Integer) 2:
          {
            *HeadVar__4_4 = (MR_Integer) 1;
            *HeadVar__5_5 = TailCanSeeAllArgModes_15;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ArgInst_25, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
              {
                *HeadVar__4_4 = (MR_Integer) 1;
                *HeadVar__5_5 = TailCanSeeAllArgModes_15;
              }
              break;
            case (MR_Integer) 2:
            case (MR_Integer) 5:
              {
                *HeadVar__4_4 = TailSomeDirectArgIsBound_14;
                *HeadVar__5_5 = (MR_Integer) 0;
              }
              break;
            case (MR_Integer) 3:
            case (MR_Integer) 4:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.direct_arg_in_out.some_bound_inst_has_direct_arg_out\'/5", (MR_String) "unexpanded inst");
                return;
              }
              break;
          }
          break;
      }
    }
    else
    {
      *HeadVar__4_4 = TailSomeDirectArgIsBound_14;
      *HeadVar__5_5 = TailCanSeeAllArgModes_15;
    }
  }
}

static void MR_CALL 
transform_hlds__direct_arg_in_out__some_bound_inst_has_direct_arg_free_4_p_0(
  MR_Word ModuleInfo_1,
  MR_Word DirectArgFunctors_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  MR_bool succeeded;

  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word FromBoundInst_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word FromBoundInsts_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ConsId_12;
    MR_Word ArgInsts0_13;
    MR_Word STATE_VARIABLE_FreeArgDirectArgFunctors_21_21;
    MR_Word SymName_14;
    MR_Word TypeCtorInfo_23_23;
    MR_Integer Arity_15;
    MR_Word ArgInst0_17;
    MR_Word ArgInst_18;
    MR_Word Var_22;

    transform_hlds__direct_arg_in_out__some_bound_inst_has_direct_arg_free_4_p_0(ModuleInfo_1, DirectArgFunctors_2, FromBoundInsts_10, &STATE_VARIABLE_FreeArgDirectArgFunctors_21_21);
    ConsId_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FromBoundInst_9, (MR_Integer) 0))));
    ArgInsts0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FromBoundInst_9, (MR_Integer) 1))));
    succeeded = ((((MR_tag((MR_Word) ConsId_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_12, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (succeeded)
    {
      SymName_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_12, (MR_Integer) 1))));
      Arity_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_12, (MR_Integer) 2))));
      succeeded = (Arity_15 == (MR_Integer) 1);
      if (succeeded)
      {
        TypeCtorInfo_23_23 = (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0);
        succeeded = mercury__list__member_2_p_0(TypeCtorInfo_23_23, ((MR_Box) (SymName_14)), DirectArgFunctors_2);
        if (succeeded)
        {
          succeeded = (ArgInsts0_13 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            ArgInst0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgInsts0_13, (MR_Integer) 0))));
            Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgInsts0_13, (MR_Integer) 1))));
            succeeded = (Var_22 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              check_hlds__inst_lookup__inst_expand_and_remove_constrained_inst_vars_3_p_0(ModuleInfo_1, ArgInst0_17, &ArgInst_18);
              if ((ArgInst_18 == (MR_Word) ((MR_Unsigned) 0U)))
                succeeded = MR_TRUE;
              else
              if (((MR_tag((MR_Word) ArgInst_18)) == (MR_Integer) 1))
                succeeded = MR_TRUE;
              else
                succeeded = MR_FALSE;
            }
          }
        }
      }
    }
    if (succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__4_4 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (SymName_14));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_FreeArgDirectArgFunctors_21_21));
      }
    else
      *HeadVar__4_4 = STATE_VARIABLE_FreeArgDirectArgFunctors_21_21;
  }
}

static MR_bool MR_CALL 
transform_hlds__direct_arg_in_out__gather_direct_arg_functors_3_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__direct_arg_in_out__IntroducedFrom__pred__gather_direct_arg_functors__382__1_2_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
transform_hlds__direct_arg_in_out__gather_direct_arg_functors_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_DirectArgFunctors_0_2,
  MR_Word * STATE_VARIABLE_DirectArgFunctors_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_DirectArgFunctors_3 = STATE_VARIABLE_DirectArgFunctors_0_2;
    else
    {
      MR_Word CtorRepn_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word CtorRepns_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_DirectArgFunctors_21_21;
      MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorRepn_7, (MR_Integer) 4))));
      MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorRepn_7, (MR_Integer) 3))));
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_DirectArgFunctors_0_2;

      succeeded = ((((MR_tag((MR_Word) Var_15)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_15, (MR_Integer) 0)))) == (MR_Integer) 13)));
      if (succeeded)
      {
        MR_Integer Arity_11;
        MR_Word DirectArgFunctor_12;
        MR_Word Var_17;

        mercury__list__length_2_p_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_arg_repn_0), Var_25, &Arity_11);
        {
          Var_17 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (&transform_hlds__direct_arg_in_out_scalar_common_4[0]));
          MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (transform_hlds__direct_arg_in_out__gather_direct_arg_functors_3_p_0_1));
          MR_hl_field(MR_mktag(0), Var_17, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_17, 3) = ((MR_Box) (Arity_11));
          MR_hl_field(MR_mktag(0), Var_17, 4) = ((MR_Box) ((MR_Integer) 1));
        }
        mercury__require__expect_3_p_0(Var_17, (MR_String) "predicate \140transform_hlds.direct_arg_in_out.gather_direct_arg_functors\'/3", (MR_String) "direct arg functor arity != 1");
        DirectArgFunctor_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorRepn_7, (MR_Integer) 2))));
        {
          STATE_VARIABLE_DirectArgFunctors_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_DirectArgFunctors_21_21, 0) = ((MR_Box) (DirectArgFunctor_12));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_DirectArgFunctors_21_21, 1) = ((MR_Box) (STATE_VARIABLE_DirectArgFunctors_0_2));
        }
      }
      else
        STATE_VARIABLE_DirectArgFunctors_21_21 = STATE_VARIABLE_DirectArgFunctors_0_2;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = CtorRepns_8;
      next_value_of_STATE_VARIABLE_DirectArgFunctors_0_2 = STATE_VARIABLE_DirectArgFunctors_21_21;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_DirectArgFunctors_0_2 = next_value_of_STATE_VARIABLE_DirectArgFunctors_0_2;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
transform_hlds__direct_arg_in_out____Unify____arm_varmap_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = transform_hlds__direct_arg_in_out____Unify____arm_varmap_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__direct_arg_in_out____Compare____arm_varmap_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__direct_arg_in_out____Compare____arm_varmap_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__direct_arg_in_out____Unify____can_see_all_arg_modes_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__direct_arg_in_out____Unify____can_see_all_arg_modes_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__direct_arg_in_out____Compare____can_see_all_arg_modes_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__direct_arg_in_out____Compare____can_see_all_arg_modes_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__direct_arg_in_out____Unify____case_varmap_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__direct_arg_in_out____Unify____case_varmap_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__direct_arg_in_out____Compare____case_varmap_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__direct_arg_in_out____Compare____case_varmap_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__direct_arg_in_out____Unify____clone_in_out_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__direct_arg_in_out____Unify____clone_in_out_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__direct_arg_in_out____Compare____clone_in_out_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__direct_arg_in_out____Compare____clone_in_out_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__direct_arg_in_out____Unify____daio_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__direct_arg_in_out____Unify____daio_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__direct_arg_in_out____Compare____daio_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__direct_arg_in_out____Compare____daio_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__direct_arg_in_out____Unify____direct_arg_proc_in_out_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__direct_arg_in_out____Unify____direct_arg_proc_in_out_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__direct_arg_in_out____Compare____direct_arg_proc_in_out_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__direct_arg_in_out____Compare____direct_arg_proc_in_out_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__direct_arg_in_out____Unify____direct_arg_proc_in_out_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__direct_arg_in_out____Unify____direct_arg_proc_in_out_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__direct_arg_in_out____Compare____direct_arg_proc_in_out_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__direct_arg_in_out____Compare____direct_arg_proc_in_out_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__direct_arg_in_out____Unify____direct_arg_var_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__direct_arg_in_out____Unify____direct_arg_var_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__direct_arg_in_out____Compare____direct_arg_var_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__direct_arg_in_out____Compare____direct_arg_var_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__direct_arg_in_out____Unify____goal_varmap_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__direct_arg_in_out____Unify____goal_varmap_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__direct_arg_in_out____Compare____goal_varmap_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__direct_arg_in_out____Compare____goal_varmap_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__direct_arg_in_out____Unify____is_mode_daio_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__direct_arg_in_out____Unify____is_mode_daio_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__direct_arg_in_out____Compare____is_mode_daio_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__direct_arg_in_out____Compare____is_mode_daio_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__direct_arg_in_out____Unify____is_some_direct_arg_bound_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__direct_arg_in_out____Unify____is_some_direct_arg_bound_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__direct_arg_in_out____Compare____is_some_direct_arg_bound_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__direct_arg_in_out____Compare____is_some_direct_arg_bound_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__direct_arg_in_out__ClassMethod_for_transform_hlds__direct_arg_in_out__goal_like____hlds__hlds_goal__case__arity0______transform_hlds__direct_arg_in_out__end_is_reachable_1_1_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__direct_arg_in_out__ClassMethod_for_transform_hlds__direct_arg_in_out__goal_like____hlds__hlds_goal__case__arity0______transform_hlds__direct_arg_in_out__end_is_reachable_1_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__direct_arg_in_out__ClassMethod_for_transform_hlds__direct_arg_in_out__goal_like____hlds__hlds_goal__case__arity0______transform_hlds__direct_arg_in_out__append_goal_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  transform_hlds__direct_arg_in_out__ClassMethod_for_transform_hlds__direct_arg_in_out__goal_like____hlds__hlds_goal__case__arity0______transform_hlds__direct_arg_in_out__append_goal_3_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
}

static void MR_CALL 
transform_hlds__direct_arg_in_out__ClassMethod_for_transform_hlds__direct_arg_in_out__goal_like____hlds__hlds_goal__case__arity0______transform_hlds__direct_arg_in_out__expand_daio_in_goal_like_varmap_6_6_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__4_4;
  MR_Word conv0_HeadVar__6_6;

  transform_hlds__direct_arg_in_out__ClassMethod_for_transform_hlds__direct_arg_in_out__goal_like____hlds__hlds_goal__case__arity0______transform_hlds__direct_arg_in_out__expand_daio_in_goal_like_varmap_6_6_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv1_HeadVar__4_4, ((MR_Word) (wrapper_arg_5)), &conv0_HeadVar__6_6);
  *wrapper_arg_4 = ((MR_Box) (conv1_HeadVar__4_4));
  *wrapper_arg_6 = ((MR_Box) (conv0_HeadVar__6_6));
}

static MR_bool MR_CALL 
transform_hlds__direct_arg_in_out__ClassMethod_for_transform_hlds__direct_arg_in_out__goal_like____hlds__hlds_goal__hlds_goal__arity0______transform_hlds__direct_arg_in_out__end_is_reachable_1_1_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__direct_arg_in_out__ClassMethod_for_transform_hlds__direct_arg_in_out__goal_like____hlds__hlds_goal__hlds_goal__arity0______transform_hlds__direct_arg_in_out__end_is_reachable_1_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__direct_arg_in_out__ClassMethod_for_transform_hlds__direct_arg_in_out__goal_like____hlds__hlds_goal__hlds_goal__arity0______transform_hlds__direct_arg_in_out__append_goal_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  transform_hlds__direct_arg_in_out__ClassMethod_for_transform_hlds__direct_arg_in_out__goal_like____hlds__hlds_goal__hlds_goal__arity0______transform_hlds__direct_arg_in_out__append_goal_3_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
}

static void MR_CALL 
transform_hlds__direct_arg_in_out__ClassMethod_for_transform_hlds__direct_arg_in_out__goal_like____hlds__hlds_goal__hlds_goal__arity0______transform_hlds__direct_arg_in_out__expand_daio_in_goal_like_varmap_6_6_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__4_4;
  MR_Word conv0_HeadVar__6_6;

  transform_hlds__direct_arg_in_out__ClassMethod_for_transform_hlds__direct_arg_in_out__goal_like____hlds__hlds_goal__hlds_goal__arity0______transform_hlds__direct_arg_in_out__expand_daio_in_goal_like_varmap_6_6_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv1_HeadVar__4_4, ((MR_Word) (wrapper_arg_5)), &conv0_HeadVar__6_6);
  *wrapper_arg_4 = ((MR_Box) (conv1_HeadVar__4_4));
  *wrapper_arg_6 = ((MR_Box) (conv0_HeadVar__6_6));
}

void mercury__transform_hlds__direct_arg_in_out__init(void)
{
}

void mercury__transform_hlds__direct_arg_in_out__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__type_ctor_info_arm_varmap_1);
	MR_register_type_ctor_info(&transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__type_ctor_info_can_see_all_arg_modes_0);
	MR_register_type_ctor_info(&transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__type_ctor_info_case_varmap_0);
	MR_register_type_ctor_info(&transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__type_ctor_info_clone_in_out_map_0);
	MR_register_type_ctor_info(&transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__type_ctor_info_daio_info_0);
	MR_register_type_ctor_info(&transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__type_ctor_info_direct_arg_proc_in_out_0);
	MR_register_type_ctor_info(&transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__type_ctor_info_direct_arg_proc_in_out_map_0);
	MR_register_type_ctor_info(&transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__type_ctor_info_direct_arg_var_map_0);
	MR_register_type_ctor_info(&transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__type_ctor_info_goal_varmap_0);
	MR_register_type_ctor_info(&transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__type_ctor_info_is_mode_daio_0);
	MR_register_type_ctor_info(&transform_hlds__direct_arg_in_out__transform_hlds__direct_arg_in_out__type_ctor_info_is_some_direct_arg_bound_0);
}

void mercury__transform_hlds__direct_arg_in_out__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__direct_arg_in_out__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module transform_hlds.direct_arg_in_out.
