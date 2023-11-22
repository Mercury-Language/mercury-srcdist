/*
** Automatically generated from `inst_mode_type_prop.m'
** by the Mercury compiler,
** version rotd-2023-11-22
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


// :- module check_hlds.inst_mode_type_prop.
// :- implementation.

/*
INIT mercury__check_hlds__inst_mode_type_prop__init
ENDINIT
*/

#include "check_hlds.inst_mode_type_prop.mih"


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
#include "check_hlds.mode_util.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
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
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_type.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.prog_type_test.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__inst_mode_type_prop__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__inst_mode_type_prop__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_inst_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__inst_mode_type_prop__tree234__ti_tree234_2list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_inst_0check_hlds__inst_mode_type_prop__type_ctor_info_tprop_cache_result_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__inst_mode_type_prop__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_inst_0check_hlds__inst_mode_type_prop__type_ctor_info_tprop_cache_result_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__inst_mode_type_prop__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_inst_0check_hlds__inst_mode_type_prop__type_ctor_info_tprop_cache_result_0;

static const MR_EnumFunctorDesc check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__enum_functor_desc_maybe_inside_user_inst_0_0;

static const MR_EnumFunctorDesc check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__enum_functor_desc_maybe_inside_user_inst_0_1;

static const MR_EnumFunctorDescPtr check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__enum_ordinal_ordered_maybe_inside_user_inst_0[2];

static const MR_EnumFunctorDescPtr check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__enum_name_ordered_maybe_inside_user_inst_0[2];

static const MR_Integer check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__functor_number_map_maybe_inside_user_inst_0[2];

static const MR_PseudoTypeInfo check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__field_types_tprop_args_0_0[1];

static const MR_DuFunctorDesc check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__du_functor_desc_tprop_args_0_0;

static const MR_PseudoTypeInfo check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__field_types_tprop_args_0_1[3];

static const MR_DuArgLocn check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__field_locns_tprop_args_0_1[3];

static const MR_DuFunctorDesc check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__du_functor_desc_tprop_args_0_1;

static const MR_PseudoTypeInfo check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__field_types_tprop_args_0_2[2];

static const MR_DuFunctorDesc check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__du_functor_desc_tprop_args_0_2;

static const MR_PseudoTypeInfo check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__field_types_tprop_args_0_3[1];

static const MR_DuFunctorDesc check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__du_functor_desc_tprop_args_0_3;

static const MR_PseudoTypeInfo check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__field_types_tprop_args_0_4[3];

static const MR_DuArgLocn check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__field_locns_tprop_args_0_4[3];

static const MR_DuFunctorDesc check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__du_functor_desc_tprop_args_0_4;

static const MR_DuFunctorDescPtr check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__du_stag_ordered_tprop_args_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__du_stag_ordered_tprop_args_0_1[1];

static const MR_DuFunctorDescPtr check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__du_stag_ordered_tprop_args_0_2[1];

static const MR_DuFunctorDescPtr check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__du_stag_ordered_tprop_args_0_3[2];

static const MR_DuPtagLayout check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__du_ptag_ordered_tprop_args_0[4];

static const MR_DuFunctorDescPtr check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__du_name_ordered_tprop_args_0[5];

static const MR_Integer check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__functor_number_map_tprop_args_0[5];

static const MR_FA_TypeInfo_Struct2 check_hlds__inst_mode_type_prop__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_mer_type_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_inst_0check_hlds__inst_mode_type_prop__type_ctor_info_tprop_cache_result_0;

static const MR_DuFunctorDesc check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__du_functor_desc_tprop_cache_result_0_0;

static const MR_PseudoTypeInfo check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__field_types_tprop_cache_result_0_1[3];

static const MR_DuFunctorDesc check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__du_functor_desc_tprop_cache_result_0_1;

static const MR_DuFunctorDescPtr check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__du_stag_ordered_tprop_cache_result_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__du_stag_ordered_tprop_cache_result_0_1[1];

static const MR_DuPtagLayout check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__du_ptag_ordered_tprop_cache_result_0[2];

static const MR_DuFunctorDescPtr check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__du_name_ordered_tprop_cache_result_0[2];

static const MR_Integer check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__functor_number_map_tprop_cache_result_0[2];

static const MR_PseudoTypeInfo check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__field_types_tprop_context_0_0[2];

static const MR_DuFunctorDesc check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__du_functor_desc_tprop_context_0_0;

static const MR_PseudoTypeInfo check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__field_types_tprop_context_0_1[2];

static const MR_DuFunctorDesc check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__du_functor_desc_tprop_context_0_1;

static const MR_DuFunctorDescPtr check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__du_stag_ordered_tprop_context_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__du_stag_ordered_tprop_context_0_1[1];

static const MR_DuPtagLayout check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__du_ptag_ordered_tprop_context_0[2];

static const MR_DuFunctorDescPtr check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__du_name_ordered_tprop_context_0[2];

static const MR_Integer check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__functor_number_map_tprop_context_0[2];

static const MR_Integer check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__functor_number_map_tprop_errors_0[1];

static const MR_FA_TypeInfo_Struct1 check_hlds__inst_mode_type_prop__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_NotagFunctorDesc check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__notag_functor_desc_tprop_errors_0;

static const MR_PseudoTypeInfo check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__field_types_user_inst_info_0_0[3];

static const MR_DuFunctorDesc check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__du_functor_desc_user_inst_info_0_0;

static const MR_DuFunctorDescPtr check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__du_stag_ordered_user_inst_info_0_0[1];

static const MR_DuPtagLayout check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__du_ptag_ordered_user_inst_info_0[1];

static const MR_DuFunctorDescPtr check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__du_name_ordered_user_inst_info_0[1];

static const MR_Integer check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__functor_number_map_user_inst_info_0[1];

static const MR_ConstString check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__type_class_id_var_names_tprop_record_3[3];

static const MR_TypeClassMethod check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__type_class_id_method_ids_tprop_record_3[6];

static const MR_TypeClassId check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__type_class_id_tprop_record_3;

static void MR_CALL 
check_hlds__inst_mode_type_prop__ClassMethod_for_check_hlds__inst_mode_type_prop__tprop_record____unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______check_hlds__inst_mode_type_prop__check_for_bad_use_of_user_inst_8_8_p_0(
  MR_Word HeadVar__1_20,
  MR_Word HeadVar__3_22,
  MR_Word HeadVar__4_23,
  MR_Word Cache_24,
  MR_Word * Cache_6);

static MR_bool MR_CALL 
check_hlds__inst_mode_type_prop__ClassMethod_for_check_hlds__inst_mode_type_prop__tprop_record____unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______check_hlds__inst_mode_type_prop__user_inst_expansion_to_context_3_3_p_0(
  MR_Word HeadVar__2_13);

static void MR_CALL 
check_hlds__inst_mode_type_prop__ClassMethod_for_check_hlds__inst_mode_type_prop__tprop_record____unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______check_hlds__inst_mode_type_prop__args_slot_to_context_3_3_p_0(
  MR_Integer HeadVar__2_11);

static void MR_CALL 
check_hlds__inst_mode_type_prop__ClassMethod_for_check_hlds__inst_mode_type_prop__tprop_record____unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______check_hlds__inst_mode_type_prop__step_into_ho_inst_4_4_p_0(
  MR_Word HeadVar__1_8,
  MR_Word HeadVar__2_9);

static void MR_CALL 
check_hlds__inst_mode_type_prop__ClassMethod_for_check_hlds__inst_mode_type_prop__tprop_record____unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______check_hlds__inst_mode_type_prop__step_into_tuple_inst_2_2_p_0(void);

static void MR_CALL 
check_hlds__inst_mode_type_prop__ClassMethod_for_check_hlds__inst_mode_type_prop__tprop_record____unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______check_hlds__inst_mode_type_prop__step_into_bound_inst_3_3_p_0(
  MR_Word HeadVar__1_4);

static void MR_CALL 
check_hlds__inst_mode_type_prop__ClassMethod_for_check_hlds__inst_mode_type_prop__tprop_record____check_hlds__inst_mode_type_prop__tprop_context__arity0__check_hlds__inst_mode_type_prop__tprop_args__arity0__check_hlds__inst_mode_type_prop__tprop_errors__arity0______check_hlds__inst_mode_type_prop__check_for_bad_use_of_user_inst_8_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word HeadVar__7_7,
  MR_Word * HeadVar__8_8);

static MR_bool MR_CALL 
check_hlds__inst_mode_type_prop__ClassMethod_for_check_hlds__inst_mode_type_prop__tprop_record____check_hlds__inst_mode_type_prop__tprop_context__arity0__check_hlds__inst_mode_type_prop__tprop_args__arity0__check_hlds__inst_mode_type_prop__tprop_errors__arity0______check_hlds__inst_mode_type_prop__user_inst_expansion_to_context_3_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
check_hlds__inst_mode_type_prop__ClassMethod_for_check_hlds__inst_mode_type_prop__tprop_record____check_hlds__inst_mode_type_prop__tprop_context__arity0__check_hlds__inst_mode_type_prop__tprop_args__arity0__check_hlds__inst_mode_type_prop__tprop_errors__arity0______check_hlds__inst_mode_type_prop__args_slot_to_context_3_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
check_hlds__inst_mode_type_prop__ClassMethod_for_check_hlds__inst_mode_type_prop__tprop_record____check_hlds__inst_mode_type_prop__tprop_context__arity0__check_hlds__inst_mode_type_prop__tprop_args__arity0__check_hlds__inst_mode_type_prop__tprop_errors__arity0______check_hlds__inst_mode_type_prop__step_into_ho_inst_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
check_hlds__inst_mode_type_prop__ClassMethod_for_check_hlds__inst_mode_type_prop__tprop_record____check_hlds__inst_mode_type_prop__tprop_context__arity0__check_hlds__inst_mode_type_prop__tprop_args__arity0__check_hlds__inst_mode_type_prop__tprop_errors__arity0______check_hlds__inst_mode_type_prop__step_into_tuple_inst_2_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
check_hlds__inst_mode_type_prop__ClassMethod_for_check_hlds__inst_mode_type_prop__tprop_record____check_hlds__inst_mode_type_prop__tprop_context__arity0__check_hlds__inst_mode_type_prop__tprop_args__arity0__check_hlds__inst_mode_type_prop__tprop_errors__arity0______check_hlds__inst_mode_type_prop__step_into_bound_inst_3_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
check_hlds__inst_mode_type_prop____Compare____user_inst_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__inst_mode_type_prop____Unify____user_inst_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__inst_mode_type_prop____Compare____tprop_errors_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__inst_mode_type_prop____Unify____tprop_errors_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__inst_mode_type_prop____Compare____maybe_inside_user_inst_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__inst_mode_type_prop____Unify____maybe_inside_user_inst_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
check_hlds__inst_mode_type_prop__user_inst_expansion_to_context_3_p_0(
  MR_Word TypeClassInfo_for_tprop_record_4,
  MR_Box HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box * HeadVar__3_3);

static void MR_CALL 
check_hlds__inst_mode_type_prop__args_slot_to_context_3_p_0(
  MR_Word TypeClassInfo_for_tprop_record_4,
  MR_Box HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Box * HeadVar__3_3);

static void MR_CALL 
check_hlds__inst_mode_type_prop__step_into_tuple_inst_2_p_0(
  MR_Word TypeClassInfo_for_tprop_record_3,
  MR_Box HeadVar__1_1,
  MR_Box * HeadVar__2_2);

static void MR_CALL 
check_hlds__inst_mode_type_prop__step_into_bound_inst_3_p_0(
  MR_Word TypeClassInfo_for_tprop_record_4,
  MR_Word HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box * HeadVar__3_3);

static void MR_CALL 
check_hlds__inst_mode_type_prop__do_check_for_bad_use_of_user_inst_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word TPropContext_10,
  MR_Word InstName_11,
  MR_Word Type_12,
  MR_Word STATE_VARIABLE_Cache_0_51,
  MR_Word * STATE_VARIABLE_Cache_52,
  MR_Word STATE_VARIABLE_Errors_0_53,
  MR_Word * STATE_VARIABLE_Errors_54);

static void MR_CALL 
check_hlds__inst_mode_type_prop__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_104_101_99_107_95_117_115_101_114_95_105_110_115_116_95_97_114_103_115_95_95_91_67_111_110_116_101_120_116_32_61_32_99_104_101_99_107_95_104_108_100_115_46_105_110_115_116_95_109_111_100_101_95_116_121_112_101_95_112_114_111_112_46_116_112_114_111_112_95_99_111_110_116_101_120_116_44_32_65_114_103_115_32_61_32_99_104_101_99_107_95_104_108_100_115_46_105_110_115_116_95_109_111_100_101_95_116_121_112_101_95_112_114_111_112_46_116_112_114_111_112_95_97_114_103_115_44_32_69_114_114_111_114_115_32_61_32_99_104_101_99_107_95_104_108_100_115_46_105_110_115_116_95_109_111_100_101_95_116_121_112_101_95_112_114_111_112_46_116_112_114_111_112_95_101_114_114_111_114_115_93_95_48_95_49_8_p_0(
  MR_Word TypeClassInfo_for_tprop_record_32,
  MR_Word ModuleInfo_9,
  MR_Word Type_10,
  MR_Word Context_11,
  MR_Word UserInstInfo_12,
  MR_Word STATE_VARIABLE_Cache_0_28,
  MR_Word * STATE_VARIABLE_Cache_29,
  MR_Word STATE_VARIABLE_Errors_0_30,
  MR_Word * STATE_VARIABLE_Errors_31);

static void MR_CALL 
check_hlds__inst_mode_type_prop__do_record_bad_use_of_user_inst_6_p_0(
  MR_Word InstCtor_7,
  MR_Word ForTypeCtor_8,
  MR_Word TypeCtor_9,
  MR_Word TPropContext_10,
  MR_Word STATE_VARIABLE_Errors_0_18,
  MR_Word * STATE_VARIABLE_Errors_19);

static void MR_CALL 
check_hlds__inst_mode_type_prop__tprop_context_to_pieces_3_p_0(
  MR_Word TPropContext_4,
  MR_Word * Context_5,
  MR_Word * Pieces_6);

static MR_Word MR_CALL 
check_hlds__inst_mode_type_prop__pred_or_func_arg_desc_3_f_0(
  MR_Word PredOrFunc_5,
  MR_Word HeadVar__2_2,
  MR_Integer ArgNum_7);

static void MR_CALL 
check_hlds__inst_mode_type_prop__record_result_in_tprop_cache_6_p_0(
  MR_Word Type_7,
  MR_Word SymName_8,
  MR_Word ArgInsts_9,
  MR_Word Result_10,
  MR_Word STATE_VARIABLE_Cache_0_16,
  MR_Word * STATE_VARIABLE_Cache_17);

static MR_Word MR_CALL 
check_hlds__inst_mode_type_prop__are_we_already_inside_user_inst_expansion_2_f_0(
  MR_Word Context_4,
  MR_Word SymNameArity_5);

static void MR_CALL 
check_hlds__inst_mode_type_prop__propagate_char_type_2_p_0(
  MR_Word BoundInst0_3,
  MR_Word * BoundInst_4);

static void MR_CALL 
check_hlds__inst_mode_type_prop__propagate_types_into_tuple_9_p_0(
  MR_Word TypeClassInfo_for_tprop_record_33,
  MR_Word ModuleInfo_10,
  MR_Box Context_11,
  MR_Word TupleArgTypes_12,
  MR_Word BoundInst0_13,
  MR_Word * BoundInst_14,
  MR_Word STATE_VARIABLE_Cache_0_26,
  MR_Word * STATE_VARIABLE_Cache_27,
  MR_Box STATE_VARIABLE_Errors_0_28,
  MR_Box * STATE_VARIABLE_Errors_29);

static void MR_CALL 
check_hlds__inst_mode_type_prop__propagate_types_into_insts_10_p_0(
  MR_Word TypeClassInfo_for_tprop_record_68,
  MR_Word ModuleInfo_1,
  MR_Box Args_2,
  MR_Integer ArgNum_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_Cache_0_7,
  MR_Word * STATE_VARIABLE_Cache_8,
  MR_Box STATE_VARIABLE_Errors_0_9,
  MR_Box * STATE_VARIABLE_Errors_10);

static void MR_CALL 
check_hlds__inst_mode_type_prop__propagate_unchecked_type_into_bound_inst_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
check_hlds__inst_mode_type_prop__propagate_unchecked_type_into_bound_inst_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__inst_mode_type_prop__propagate_type_into_inst_9_p_0(
  MR_Word TypeClassInfo_for_tprop_record_22,
  MR_Word ModuleInfo_10,
  MR_Box Context_11,
  MR_Word Type_12,
  MR_Word Inst0_13,
  MR_Word * Inst_14,
  MR_Word STATE_VARIABLE_Cache_0_18,
  MR_Word * STATE_VARIABLE_Cache_19,
  MR_Box STATE_VARIABLE_Errors_0_20,
  MR_Box * STATE_VARIABLE_Errors_21);

static void MR_CALL 
check_hlds__inst_mode_type_prop__propagate_type_into_inst_lazily_9_p_0(
  MR_Word TypeClassInfo_for_tprop_record_112,
  MR_Word ModuleInfo_10,
  MR_Box Context_11,
  MR_Word Type_12,
  MR_Word Inst0_13,
  MR_Word * Inst_14,
  MR_Word STATE_VARIABLE_Cache_0_49,
  MR_Word * STATE_VARIABLE_Cache_50,
  MR_Box STATE_VARIABLE_Errors_0_51,
  MR_Box * STATE_VARIABLE_Errors_52);

static void MR_CALL 
check_hlds__inst_mode_type_prop__propagate_type_into_inst_eagerly_10_p_0(
  MR_Word TypeClassInfo_for_tprop_record_149,
  MR_Word ModuleInfo_11,
  MR_Box Context_12,
  MR_Word Type_13,
  MR_Word Constructors_14,
  MR_Word Inst0_15,
  MR_Word * Inst_16,
  MR_Word STATE_VARIABLE_Cache_0_53,
  MR_Word * STATE_VARIABLE_Cache_54,
  MR_Box STATE_VARIABLE_Errors_0_55,
  MR_Box * STATE_VARIABLE_Errors_56);

static void MR_CALL 
check_hlds__inst_mode_type_prop__propagate_type_into_bound_inst_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
check_hlds__inst_mode_type_prop__propagate_type_into_bound_inst_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__inst_mode_type_prop__propagate_type_into_bound_inst_9_p_0(
  MR_Word TypeClassInfo_for_tprop_record_88,
  MR_Word ModuleInfo_10,
  MR_Box Context_11,
  MR_Word Type_12,
  MR_Word Inst0_13,
  MR_Word * Inst_14,
  MR_Word STATE_VARIABLE_Cache_0_57,
  MR_Word * STATE_VARIABLE_Cache_58,
  MR_Box STATE_VARIABLE_Errors_0_59,
  MR_Box * STATE_VARIABLE_Errors_60);

static void MR_CALL 
check_hlds__inst_mode_type_prop__propagate_types_into_modes_10_p_0(
  MR_Word TypeClassInfo_for_tprop_record_68,
  MR_Word ModuleInfo_1,
  MR_Box Args_2,
  MR_Integer ArgNum_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_Cache_0_7,
  MR_Word * STATE_VARIABLE_Cache_8,
  MR_Box STATE_VARIABLE_Errors_0_9,
  MR_Box * STATE_VARIABLE_Errors_10);

static void MR_CALL 
check_hlds__inst_mode_type_prop__propagate_subst_type_ctor_into_bound_insts_12_p_0(
  MR_Word TypeClassInfo_for_tprop_record_65,
  MR_Word ModuleInfo_1,
  MR_Box Context_2,
  MR_Word Subst_3,
  MR_Word TypeCtor_4,
  MR_Word TypeModule_5,
  MR_Word Constructors_6,
  MR_Word HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word STATE_VARIABLE_Cache_0_9,
  MR_Word * STATE_VARIABLE_Cache_10,
  MR_Box STATE_VARIABLE_Errors_0_11,
  MR_Box * STATE_VARIABLE_Errors_12);

static void MR_CALL 
check_hlds__inst_mode_type_prop__default_higher_order_func_inst_8_p_0(
  MR_Word TypeClassInfo_for_tprop_record_44,
  MR_Word ModuleInfo_9,
  MR_Box Context_10,
  MR_Word PredArgTypes_11,
  MR_Word * PredInstInfo_12,
  MR_Word STATE_VARIABLE_Cache_0_25,
  MR_Word * STATE_VARIABLE_Cache_26,
  MR_Box STATE_VARIABLE_Errors_0_27,
  MR_Box * STATE_VARIABLE_Errors_28);

static void MR_CALL 
check_hlds__inst_mode_type_prop__propagate_subst_types_into_insts_11_p_0(
  MR_Word TypeClassInfo_for_tprop_record_73,
  MR_Word ModuleInfo_1,
  MR_Box Args_2,
  MR_Integer ArgNum_3,
  MR_Word Subst_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_Cache_0_8,
  MR_Word * STATE_VARIABLE_Cache_9,
  MR_Box STATE_VARIABLE_Errors_0_10,
  MR_Box * STATE_VARIABLE_Errors_11);

static void MR_CALL 
check_hlds__inst_mode_type_prop__check_for_bad_use_of_user_inst_8_p_0(
  MR_Word TypeClassInfo_for_tprop_record_9,
  MR_Word HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Box HeadVar__7_7,
  MR_Box * HeadVar__8_8);

static void MR_CALL 
check_hlds__inst_mode_type_prop__step_into_ho_inst_4_p_0(
  MR_Word TypeClassInfo_for_tprop_record_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4);

static void MR_CALL 
check_hlds__inst_mode_type_prop__get_constructor_arg_types_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static MR_bool MR_CALL 
check_hlds__inst_mode_type_prop__find_first_matching_constructor_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
check_hlds__inst_mode_type_prop__construct_new_bound_inst_5_p_0(
  MR_Word Uniq_6,
  MR_Word InstResults0_7,
  MR_Word PropagatedResult_8,
  MR_Word BoundInsts_9,
  MR_Word * Inst_10);

static MR_bool MR_CALL 
check_hlds__inst_mode_type_prop____Unify____maybe_inside_user_inst_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__inst_mode_type_prop____Compare____maybe_inside_user_inst_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__inst_mode_type_prop____Unify____tprop_args_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__inst_mode_type_prop____Compare____tprop_args_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__inst_mode_type_prop____Unify____tprop_cache_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__inst_mode_type_prop____Compare____tprop_cache_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__inst_mode_type_prop____Unify____tprop_cache_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__inst_mode_type_prop____Compare____tprop_cache_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__inst_mode_type_prop____Unify____tprop_context_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__inst_mode_type_prop____Compare____tprop_context_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__inst_mode_type_prop____Unify____tprop_errors_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__inst_mode_type_prop____Compare____tprop_errors_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__inst_mode_type_prop____Unify____user_inst_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__inst_mode_type_prop____Compare____user_inst_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
check_hlds__inst_mode_type_prop__ClassMethod_for_check_hlds__inst_mode_type_prop__tprop_record____check_hlds__inst_mode_type_prop__tprop_context__arity0__check_hlds__inst_mode_type_prop__tprop_args__arity0__check_hlds__inst_mode_type_prop__tprop_errors__arity0______check_hlds__inst_mode_type_prop__step_into_bound_inst_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__inst_mode_type_prop__ClassMethod_for_check_hlds__inst_mode_type_prop__tprop_record____check_hlds__inst_mode_type_prop__tprop_context__arity0__check_hlds__inst_mode_type_prop__tprop_args__arity0__check_hlds__inst_mode_type_prop__tprop_errors__arity0______check_hlds__inst_mode_type_prop__step_into_tuple_inst_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__inst_mode_type_prop__ClassMethod_for_check_hlds__inst_mode_type_prop__tprop_record____check_hlds__inst_mode_type_prop__tprop_context__arity0__check_hlds__inst_mode_type_prop__tprop_args__arity0__check_hlds__inst_mode_type_prop__tprop_errors__arity0______check_hlds__inst_mode_type_prop__step_into_ho_inst_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
check_hlds__inst_mode_type_prop__ClassMethod_for_check_hlds__inst_mode_type_prop__tprop_record____check_hlds__inst_mode_type_prop__tprop_context__arity0__check_hlds__inst_mode_type_prop__tprop_args__arity0__check_hlds__inst_mode_type_prop__tprop_errors__arity0______check_hlds__inst_mode_type_prop__args_slot_to_context_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__inst_mode_type_prop__ClassMethod_for_check_hlds__inst_mode_type_prop__tprop_record____check_hlds__inst_mode_type_prop__tprop_context__arity0__check_hlds__inst_mode_type_prop__tprop_args__arity0__check_hlds__inst_mode_type_prop__tprop_errors__arity0______check_hlds__inst_mode_type_prop__user_inst_expansion_to_context_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__inst_mode_type_prop__ClassMethod_for_check_hlds__inst_mode_type_prop__tprop_record____check_hlds__inst_mode_type_prop__tprop_context__arity0__check_hlds__inst_mode_type_prop__tprop_args__arity0__check_hlds__inst_mode_type_prop__tprop_errors__arity0______check_hlds__inst_mode_type_prop__check_for_bad_use_of_user_inst_8_8_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
check_hlds__inst_mode_type_prop__ClassMethod_for_check_hlds__inst_mode_type_prop__tprop_record____unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______check_hlds__inst_mode_type_prop__step_into_bound_inst_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__inst_mode_type_prop__ClassMethod_for_check_hlds__inst_mode_type_prop__tprop_record____unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______check_hlds__inst_mode_type_prop__step_into_tuple_inst_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__inst_mode_type_prop__ClassMethod_for_check_hlds__inst_mode_type_prop__tprop_record____unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______check_hlds__inst_mode_type_prop__step_into_ho_inst_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
check_hlds__inst_mode_type_prop__ClassMethod_for_check_hlds__inst_mode_type_prop__tprop_record____unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______check_hlds__inst_mode_type_prop__args_slot_to_context_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__inst_mode_type_prop__ClassMethod_for_check_hlds__inst_mode_type_prop__tprop_record____unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______check_hlds__inst_mode_type_prop__user_inst_expansion_to_context_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__inst_mode_type_prop__ClassMethod_for_check_hlds__inst_mode_type_prop__tprop_record____unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______check_hlds__inst_mode_type_prop__check_for_bad_use_of_user_inst_8_8_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);


static /* final */ const MR_Box check_hlds__inst_mode_type_prop_scalar_common_1[40][2];

static /* final */ const MR_Box check_hlds__inst_mode_type_prop_scalar_common_2[5][3];

static /* final */ const MR_Box check_hlds__inst_mode_type_prop_scalar_common_3[2][4];

static /* final */ const MR_Box check_hlds__inst_mode_type_prop_scalar_common_4[2][5];

static /* final */ const MR_Integer check_hlds__inst_mode_type_prop_scalar_common_5[1][3];

static /* final */ const MR_Box check_hlds__inst_mode_type_prop_scalar_common_6[1][13];




static /* final */ const MR_Box check_hlds__inst_mode_type_prop_scalar_common_1[40][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   4 */
  {
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   5 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &check_hlds__inst_mode_type_prop_scalar_common_1[4])))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "error: the user defined inst"))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 35U)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 35U)),
    ((MR_Box) ((MR_Integer) -1))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is declared to be applicable only to values of type"))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "but here it is applied to values of type"))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__inst_mode_type_prop_scalar_common_1[8]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__inst_mode_type_prop_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__inst_mode_type_prop_scalar_common_1[12])))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in the"))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "argument of"))
  },
  /* row  17 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__inst_mode_type_prop_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__inst_mode_type_prop_scalar_common_1[17])))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in"))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__inst_mode_type_prop_scalar_common_1[20]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "of the higher order inst:"))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__inst_mode_type_prop_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__inst_mode_type_prop_scalar_common_1[17])))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "the lambda expression"))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__inst_mode_type_prop_scalar_common_1[24]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__inst_mode_type_prop_scalar_common_1[26]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "of"))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__inst_mode_type_prop_scalar_common_1[28]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "argument of tuple:"))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__inst_mode_type_prop_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__inst_mode_type_prop_scalar_common_1[17])))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in the expansion of the user-defined inst"))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "the result argument"))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__inst_mode_type_prop_scalar_common_1[33]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "the"))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "argument"))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__inst_mode_type_prop_scalar_common_1[36]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_mkword(1, &check_hlds__inst_mode_type_prop_scalar_common_1[4]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__inst_mode_type_prop_scalar_common_1[4])))
  },
  /* row  39 */
  {
    ((MR_Box) (&check_hlds__inst_mode_type_prop_scalar_common_1[5])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box check_hlds__inst_mode_type_prop_scalar_common_2[5][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__inst_mode_type_prop_scalar_common_1[0])),
    ((MR_Box) (&check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__type_ctor_info_tprop_cache_result_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&check_hlds__inst_mode_type_prop_scalar_common_2[0]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__inst_mode_type_prop_scalar_common_2[1]))
  },
  /* row   3 */
  {
    ((MR_Box) (&check_hlds__inst_mode_type_prop_scalar_common_4[0])),
    ((MR_Box) (check_hlds__inst_mode_type_prop__propagate_type_into_bound_inst_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&check_hlds__inst_mode_type_prop_scalar_common_4[0])),
    ((MR_Box) (check_hlds__inst_mode_type_prop__propagate_unchecked_type_into_bound_inst_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__inst_mode_type_prop_scalar_common_3[2][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_check_hlds__inst_mode_type_prop__tprop_record__arity3__unit__unit__arity0__unit__unit__arity0__unit__unit__arity0__)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_check_hlds__inst_mode_type_prop__tprop_record__arity3__check_hlds__inst_mode_type_prop__tprop_context__arity0__check_hlds__inst_mode_type_prop__tprop_args__arity0__check_hlds__inst_mode_type_prop__tprop_errors__arity0__)),
    ((MR_Box) (&check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__type_ctor_info_tprop_context_0)),
    ((MR_Box) (&check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__type_ctor_info_tprop_args_0)),
    ((MR_Box) (&check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__type_ctor_info_tprop_errors_0))
  },
};

static /* final */ const MR_Box check_hlds__inst_mode_type_prop_scalar_common_4[2][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0))
  },
  /* row   1 */
  {
    (MR_Box) (((((MR_Unsigned) 2U << 2)) | (MR_Unsigned) 2U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Integer check_hlds__inst_mode_type_prop_scalar_common_5[1][3] = {
  /* row   0 */
  {
    (MR_Integer) 2,
    (MR_Integer) 67631,
    (MR_Integer) 67695
  },
};

static /* final */ const MR_Box check_hlds__inst_mode_type_prop_scalar_common_6[1][13] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (&check_hlds__inst_mode_type_prop_scalar_common_5[0])),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&check_hlds__inst_mode_type_prop__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0)),
    ((MR_Box) (&check_hlds__inst_mode_type_prop__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_inst_0check_hlds__inst_mode_type_prop__type_ctor_info_tprop_cache_result_0)),
    ((MR_Box) (&check_hlds__inst_mode_type_prop__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_inst_0check_hlds__inst_mode_type_prop__type_ctor_info_tprop_cache_result_0)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 2))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__inst_mode_type_prop__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0) }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__inst_mode_type_prop__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0) }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__inst_mode_type_prop__tree234__ti_tree234_2list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_inst_0check_hlds__inst_mode_type_prop__type_ctor_info_tprop_cache_result_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&check_hlds__inst_mode_type_prop__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_inst_0),
    (MR_TypeInfo) (&check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__type_ctor_info_tprop_cache_result_0)
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__inst_mode_type_prop__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_inst_0check_hlds__inst_mode_type_prop__type_ctor_info_tprop_cache_result_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&check_hlds__inst_mode_type_prop__tree234__ti_tree234_2list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_inst_0check_hlds__inst_mode_type_prop__type_ctor_info_tprop_cache_result_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__inst_mode_type_prop__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_inst_0check_hlds__inst_mode_type_prop__type_ctor_info_tprop_cache_result_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0),
    (MR_PseudoTypeInfo) (&check_hlds__inst_mode_type_prop__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_inst_0check_hlds__inst_mode_type_prop__type_ctor_info_tprop_cache_result_0)
  }
};

static const MR_EnumFunctorDesc check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__enum_functor_desc_maybe_inside_user_inst_0_0 = {
  (MR_String) "not_inside_user_inst",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__enum_functor_desc_maybe_inside_user_inst_0_1 = {
  (MR_String) "inside_user_inst",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__enum_ordinal_ordered_maybe_inside_user_inst_0[2] = {
  &check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__enum_functor_desc_maybe_inside_user_inst_0_0,
  &check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__enum_functor_desc_maybe_inside_user_inst_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__enum_name_ordered_maybe_inside_user_inst_0[2] = {
  &check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__enum_functor_desc_maybe_inside_user_inst_0_1,
  &check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__enum_functor_desc_maybe_inside_user_inst_0_0
};

static const MR_Integer check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__functor_number_map_maybe_inside_user_inst_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__type_ctor_info_maybe_inside_user_inst_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__inst_mode_type_prop____Unify____maybe_inside_user_inst_0_0_10001)),
  ((MR_Box) (check_hlds__inst_mode_type_prop____Compare____maybe_inside_user_inst_0_0_10001)),
  (MR_String) "check_hlds.inst_mode_type_prop",
  (MR_String) "maybe_inside_user_inst",
  { check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__enum_name_ordered_maybe_inside_user_inst_0 },
  { check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__enum_ordinal_ordered_maybe_inside_user_inst_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__functor_number_map_maybe_inside_user_inst_0,

};

static const MR_PseudoTypeInfo check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__field_types_tprop_args_0_0[1] = { (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0) };

static const MR_DuFunctorDesc check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__du_functor_desc_tprop_args_0_0 = {
  (MR_String) "ta_pred",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__field_types_tprop_args_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__field_types_tprop_args_0_1[3] = {
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_form_arity_0),
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0)
};

static const MR_DuArgLocn check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__field_locns_tprop_args_0_1[3] = {
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

static const MR_DuFunctorDesc check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__du_functor_desc_tprop_args_0_1 = {
  (MR_String) "ta_lambda",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__field_types_tprop_args_0_1,
  NULL,
  check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__field_locns_tprop_args_0_1,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__field_types_tprop_args_0_2[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0),
  (MR_PseudoTypeInfo) (&check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__type_ctor_info_tprop_context_0)
};

static const MR_DuFunctorDesc check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__du_functor_desc_tprop_args_0_2 = {
  (MR_String) "ta_bound_inst",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__field_types_tprop_args_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__field_types_tprop_args_0_3[1] = { (MR_PseudoTypeInfo) (&check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__type_ctor_info_tprop_context_0) };

static const MR_DuFunctorDesc check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__du_functor_desc_tprop_args_0_3 = {
  (MR_String) "ta_tuple_inst",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(3),
  check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__field_types_tprop_args_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__field_types_tprop_args_0_4[3] = {
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_form_arity_0),
  (MR_PseudoTypeInfo) (&check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__type_ctor_info_tprop_context_0)
};

static const MR_DuArgLocn check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__field_locns_tprop_args_0_4[3] = {
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

static const MR_DuFunctorDesc check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__du_functor_desc_tprop_args_0_4 = {
  (MR_String) "ta_ho_inst",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(4),
  check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__field_types_tprop_args_0_4,
  NULL,
  check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__field_locns_tprop_args_0_4,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__du_stag_ordered_tprop_args_0_0[1] = { &check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__du_functor_desc_tprop_args_0_0 };

static const MR_DuFunctorDescPtr check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__du_stag_ordered_tprop_args_0_1[1] = { &check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__du_functor_desc_tprop_args_0_1 };

static const MR_DuFunctorDescPtr check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__du_stag_ordered_tprop_args_0_2[1] = { &check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__du_functor_desc_tprop_args_0_2 };

static const MR_DuFunctorDescPtr check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__du_stag_ordered_tprop_args_0_3[2] = {
  &check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__du_functor_desc_tprop_args_0_3,
  &check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__du_functor_desc_tprop_args_0_4
};

static const MR_DuPtagLayout check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__du_ptag_ordered_tprop_args_0[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__du_stag_ordered_tprop_args_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__du_stag_ordered_tprop_args_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__du_stag_ordered_tprop_args_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(2),
    MR_SECTAG_REMOTE_FULL_WORD,
    check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__du_stag_ordered_tprop_args_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__du_name_ordered_tprop_args_0[5] = {
  &check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__du_functor_desc_tprop_args_0_2,
  &check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__du_functor_desc_tprop_args_0_4,
  &check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__du_functor_desc_tprop_args_0_1,
  &check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__du_functor_desc_tprop_args_0_0,
  &check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__du_functor_desc_tprop_args_0_3
};

static const MR_Integer check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__functor_number_map_tprop_args_0[5] = {
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__type_ctor_info_tprop_args_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__inst_mode_type_prop____Unify____tprop_args_0_0_10001)),
  ((MR_Box) (check_hlds__inst_mode_type_prop____Compare____tprop_args_0_0_10001)),
  (MR_String) "check_hlds.inst_mode_type_prop",
  (MR_String) "tprop_args",
  { check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__du_name_ordered_tprop_args_0 },
  { check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__du_ptag_ordered_tprop_args_0 },
  (MR_Integer) 5,
  UINT16_C(12),
  check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__functor_number_map_tprop_args_0,

};

static const MR_FA_TypeInfo_Struct2 check_hlds__inst_mode_type_prop__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_mer_type_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_inst_0check_hlds__inst_mode_type_prop__type_ctor_info_tprop_cache_result_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0),
    (MR_TypeInfo) (&check_hlds__inst_mode_type_prop__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_inst_0check_hlds__inst_mode_type_prop__type_ctor_info_tprop_cache_result_0)
  }
};

const MR_TypeCtorInfo_Struct check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__type_ctor_info_tprop_cache_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__inst_mode_type_prop____Unify____tprop_cache_0_0_10001)),
  ((MR_Box) (check_hlds__inst_mode_type_prop____Compare____tprop_cache_0_0_10001)),
  (MR_String) "check_hlds.inst_mode_type_prop",
  (MR_String) "tprop_cache",
  { NULL },
  { (MR_PseudoTypeInfo) (&check_hlds__inst_mode_type_prop__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_mer_type_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_inst_0check_hlds__inst_mode_type_prop__type_ctor_info_tprop_cache_result_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_DuFunctorDesc check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__du_functor_desc_tprop_cache_result_0_0 = {
  (MR_String) "tprop_cache_result_ok",
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

static const MR_PseudoTypeInfo check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__field_types_tprop_cache_result_0_1[3] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)
};

static const MR_DuFunctorDesc check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__du_functor_desc_tprop_cache_result_0_1 = {
  (MR_String) "tprop_cache_result_error",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__field_types_tprop_cache_result_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__du_stag_ordered_tprop_cache_result_0_0[1] = { &check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__du_functor_desc_tprop_cache_result_0_0 };

static const MR_DuFunctorDescPtr check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__du_stag_ordered_tprop_cache_result_0_1[1] = { &check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__du_functor_desc_tprop_cache_result_0_1 };

static const MR_DuPtagLayout check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__du_ptag_ordered_tprop_cache_result_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__du_stag_ordered_tprop_cache_result_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__du_stag_ordered_tprop_cache_result_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__du_name_ordered_tprop_cache_result_0[2] = {
  &check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__du_functor_desc_tprop_cache_result_0_1,
  &check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__du_functor_desc_tprop_cache_result_0_0
};

static const MR_Integer check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__functor_number_map_tprop_cache_result_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__type_ctor_info_tprop_cache_result_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__inst_mode_type_prop____Unify____tprop_cache_result_0_0_10001)),
  ((MR_Box) (check_hlds__inst_mode_type_prop____Compare____tprop_cache_result_0_0_10001)),
  (MR_String) "check_hlds.inst_mode_type_prop",
  (MR_String) "tprop_cache_result",
  { check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__du_name_ordered_tprop_cache_result_0 },
  { check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__du_ptag_ordered_tprop_cache_result_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__functor_number_map_tprop_cache_result_0,

};

static const MR_PseudoTypeInfo check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__field_types_tprop_context_0_0[2] = {
  (MR_PseudoTypeInfo) (&check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__type_ctor_info_tprop_args_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__du_functor_desc_tprop_context_0_0 = {
  (MR_String) "tprop_arg_list_slot",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__field_types_tprop_context_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__field_types_tprop_context_0_1[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0),
  (MR_PseudoTypeInfo) (&check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__type_ctor_info_tprop_context_0)
};

static const MR_DuFunctorDesc check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__du_functor_desc_tprop_context_0_1 = {
  (MR_String) "tprop_inst_name_expansion",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__field_types_tprop_context_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__du_stag_ordered_tprop_context_0_0[1] = { &check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__du_functor_desc_tprop_context_0_0 };

static const MR_DuFunctorDescPtr check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__du_stag_ordered_tprop_context_0_1[1] = { &check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__du_functor_desc_tprop_context_0_1 };

static const MR_DuPtagLayout check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__du_ptag_ordered_tprop_context_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__du_stag_ordered_tprop_context_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__du_stag_ordered_tprop_context_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__du_name_ordered_tprop_context_0[2] = {
  &check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__du_functor_desc_tprop_context_0_0,
  &check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__du_functor_desc_tprop_context_0_1
};

static const MR_Integer check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__functor_number_map_tprop_context_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__type_ctor_info_tprop_context_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__inst_mode_type_prop____Unify____tprop_context_0_0_10001)),
  ((MR_Box) (check_hlds__inst_mode_type_prop____Compare____tprop_context_0_0_10001)),
  (MR_String) "check_hlds.inst_mode_type_prop",
  (MR_String) "tprop_context",
  { check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__du_name_ordered_tprop_context_0 },
  { check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__du_ptag_ordered_tprop_context_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__functor_number_map_tprop_context_0,

};

static const MR_Integer check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__functor_number_map_tprop_errors_0[1] = { (MR_Integer) 0 };

static const MR_FA_TypeInfo_Struct1 check_hlds__inst_mode_type_prop__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) }
};

static const MR_NotagFunctorDesc check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__notag_functor_desc_tprop_errors_0 = {
  (MR_String) "tprop_errors",
  (MR_PseudoTypeInfo) (&check_hlds__inst_mode_type_prop__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__type_ctor_info_tprop_errors_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (check_hlds__inst_mode_type_prop____Unify____tprop_errors_0_0_10001)),
  ((MR_Box) (check_hlds__inst_mode_type_prop____Compare____tprop_errors_0_0_10001)),
  (MR_String) "check_hlds.inst_mode_type_prop",
  (MR_String) "tprop_errors",
  { &check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__notag_functor_desc_tprop_errors_0 },
  { &check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__notag_functor_desc_tprop_errors_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__functor_number_map_tprop_errors_0,

};

static const MR_PseudoTypeInfo check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__field_types_user_inst_info_0_0[3] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0),
  (MR_PseudoTypeInfo) (&check_hlds__inst_mode_type_prop__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_inst_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_inst_defn_0)
};

static const MR_DuFunctorDesc check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__du_functor_desc_user_inst_info_0_0 = {
  (MR_String) "user_inst_info",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__field_types_user_inst_info_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__du_stag_ordered_user_inst_info_0_0[1] = { &check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__du_functor_desc_user_inst_info_0_0 };

static const MR_DuPtagLayout check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__du_ptag_ordered_user_inst_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__du_stag_ordered_user_inst_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__du_name_ordered_user_inst_info_0[1] = { &check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__du_functor_desc_user_inst_info_0_0 };

static const MR_Integer check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__functor_number_map_user_inst_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__type_ctor_info_user_inst_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__inst_mode_type_prop____Unify____user_inst_info_0_0_10001)),
  ((MR_Box) (check_hlds__inst_mode_type_prop____Compare____user_inst_info_0_0_10001)),
  (MR_String) "check_hlds.inst_mode_type_prop",
  (MR_String) "user_inst_info",
  { check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__du_name_ordered_user_inst_info_0 },
  { check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__du_ptag_ordered_user_inst_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__functor_number_map_user_inst_info_0,

};

const MR_BaseTypeclassInfo base_typeclass_info_check_hlds__inst_mode_type_prop__tprop_record__arity3__check_hlds__inst_mode_type_prop__tprop_context__arity0__check_hlds__inst_mode_type_prop__tprop_args__arity0__check_hlds__inst_mode_type_prop__tprop_errors__arity0__[11] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 3)),
  ((MR_Box) ((MR_Integer) 6)),
  ((MR_Box) (check_hlds__inst_mode_type_prop__ClassMethod_for_check_hlds__inst_mode_type_prop__tprop_record____check_hlds__inst_mode_type_prop__tprop_context__arity0__check_hlds__inst_mode_type_prop__tprop_args__arity0__check_hlds__inst_mode_type_prop__tprop_errors__arity0______check_hlds__inst_mode_type_prop__step_into_bound_inst_3_3_p_0_10001)),
  ((MR_Box) (check_hlds__inst_mode_type_prop__ClassMethod_for_check_hlds__inst_mode_type_prop__tprop_record____check_hlds__inst_mode_type_prop__tprop_context__arity0__check_hlds__inst_mode_type_prop__tprop_args__arity0__check_hlds__inst_mode_type_prop__tprop_errors__arity0______check_hlds__inst_mode_type_prop__step_into_tuple_inst_2_2_p_0_10001)),
  ((MR_Box) (check_hlds__inst_mode_type_prop__ClassMethod_for_check_hlds__inst_mode_type_prop__tprop_record____check_hlds__inst_mode_type_prop__tprop_context__arity0__check_hlds__inst_mode_type_prop__tprop_args__arity0__check_hlds__inst_mode_type_prop__tprop_errors__arity0______check_hlds__inst_mode_type_prop__step_into_ho_inst_4_4_p_0_10001)),
  ((MR_Box) (check_hlds__inst_mode_type_prop__ClassMethod_for_check_hlds__inst_mode_type_prop__tprop_record____check_hlds__inst_mode_type_prop__tprop_context__arity0__check_hlds__inst_mode_type_prop__tprop_args__arity0__check_hlds__inst_mode_type_prop__tprop_errors__arity0______check_hlds__inst_mode_type_prop__args_slot_to_context_3_3_p_0_10001)),
  ((MR_Box) (check_hlds__inst_mode_type_prop__ClassMethod_for_check_hlds__inst_mode_type_prop__tprop_record____check_hlds__inst_mode_type_prop__tprop_context__arity0__check_hlds__inst_mode_type_prop__tprop_args__arity0__check_hlds__inst_mode_type_prop__tprop_errors__arity0______check_hlds__inst_mode_type_prop__user_inst_expansion_to_context_3_3_p_0_10001)),
  ((MR_Box) (check_hlds__inst_mode_type_prop__ClassMethod_for_check_hlds__inst_mode_type_prop__tprop_record____check_hlds__inst_mode_type_prop__tprop_context__arity0__check_hlds__inst_mode_type_prop__tprop_args__arity0__check_hlds__inst_mode_type_prop__tprop_errors__arity0______check_hlds__inst_mode_type_prop__check_for_bad_use_of_user_inst_8_8_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_check_hlds__inst_mode_type_prop__tprop_record__arity3__unit__unit__arity0__unit__unit__arity0__unit__unit__arity0__[11] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 3)),
  ((MR_Box) ((MR_Integer) 6)),
  ((MR_Box) (check_hlds__inst_mode_type_prop__ClassMethod_for_check_hlds__inst_mode_type_prop__tprop_record____unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______check_hlds__inst_mode_type_prop__step_into_bound_inst_3_3_p_0_10001)),
  ((MR_Box) (check_hlds__inst_mode_type_prop__ClassMethod_for_check_hlds__inst_mode_type_prop__tprop_record____unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______check_hlds__inst_mode_type_prop__step_into_tuple_inst_2_2_p_0_10001)),
  ((MR_Box) (check_hlds__inst_mode_type_prop__ClassMethod_for_check_hlds__inst_mode_type_prop__tprop_record____unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______check_hlds__inst_mode_type_prop__step_into_ho_inst_4_4_p_0_10001)),
  ((MR_Box) (check_hlds__inst_mode_type_prop__ClassMethod_for_check_hlds__inst_mode_type_prop__tprop_record____unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______check_hlds__inst_mode_type_prop__args_slot_to_context_3_3_p_0_10001)),
  ((MR_Box) (check_hlds__inst_mode_type_prop__ClassMethod_for_check_hlds__inst_mode_type_prop__tprop_record____unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______check_hlds__inst_mode_type_prop__user_inst_expansion_to_context_3_3_p_0_10001)),
  ((MR_Box) (check_hlds__inst_mode_type_prop__ClassMethod_for_check_hlds__inst_mode_type_prop__tprop_record____unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______check_hlds__inst_mode_type_prop__check_for_bad_use_of_user_inst_8_8_p_0_10001))
};

static const MR_ConstString check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__type_class_id_var_names_tprop_record_3[3] = {
  (MR_String) "Context",
  (MR_String) "Args",
  (MR_String) "Errors"
};

static const MR_TypeClassMethod check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__type_class_id_method_ids_tprop_record_3[6] = {
  {
    (MR_String) "step_into_bound_inst",
    (MR_Integer) 3,
    MR_PREDICATE
  },
  {
    (MR_String) "step_into_tuple_inst",
    (MR_Integer) 2,
    MR_PREDICATE
  },
  {
    (MR_String) "step_into_ho_inst",
    (MR_Integer) 4,
    MR_PREDICATE
  },
  {
    (MR_String) "args_slot_to_context",
    (MR_Integer) 3,
    MR_PREDICATE
  },
  {
    (MR_String) "user_inst_expansion_to_context",
    (MR_Integer) 3,
    MR_PREDICATE
  },
  {
    (MR_String) "check_for_bad_use_of_user_inst",
    (MR_Integer) 8,
    MR_PREDICATE
  }
};

static const MR_TypeClassId check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__type_class_id_tprop_record_3 = {
  (MR_String) "check_hlds.inst_mode_type_prop",
  (MR_String) "tprop_record",
  (MR_Integer) 3,
  (MR_Integer) 3,
  (MR_Integer) 6,
  check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__type_class_id_var_names_tprop_record_3,
  check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__type_class_id_method_ids_tprop_record_3
};

const MR_TypeClassDeclStruct check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__type_class_decl_tprop_record_3 = {
  &check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__type_class_id_tprop_record_3,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL
};

static void MR_CALL 
check_hlds__inst_mode_type_prop__ClassMethod_for_check_hlds__inst_mode_type_prop__tprop_record____unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______check_hlds__inst_mode_type_prop__check_for_bad_use_of_user_inst_8_8_p_0(
  MR_Word HeadVar__1_20,
  MR_Word HeadVar__3_22,
  MR_Word HeadVar__4_23,
  MR_Word Cache_24,
  MR_Word * Cache_6)
{
  *Cache_6 = Cache_24;
}

static MR_bool MR_CALL 
check_hlds__inst_mode_type_prop__ClassMethod_for_check_hlds__inst_mode_type_prop__tprop_record____unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______check_hlds__inst_mode_type_prop__user_inst_expansion_to_context_3_3_p_0(
  MR_Word HeadVar__2_13)
{
  return MR_FALSE;
}

static void MR_CALL 
check_hlds__inst_mode_type_prop__ClassMethod_for_check_hlds__inst_mode_type_prop__tprop_record____unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______check_hlds__inst_mode_type_prop__args_slot_to_context_3_3_p_0(
  MR_Integer HeadVar__2_11)
{
}

static void MR_CALL 
check_hlds__inst_mode_type_prop__ClassMethod_for_check_hlds__inst_mode_type_prop__tprop_record____unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______check_hlds__inst_mode_type_prop__step_into_ho_inst_4_4_p_0(
  MR_Word HeadVar__1_8,
  MR_Word HeadVar__2_9)
{
}

static void MR_CALL 
check_hlds__inst_mode_type_prop__ClassMethod_for_check_hlds__inst_mode_type_prop__tprop_record____unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______check_hlds__inst_mode_type_prop__step_into_tuple_inst_2_2_p_0(void)
{
}

static void MR_CALL 
check_hlds__inst_mode_type_prop__ClassMethod_for_check_hlds__inst_mode_type_prop__tprop_record____unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______check_hlds__inst_mode_type_prop__step_into_bound_inst_3_3_p_0(
  MR_Word HeadVar__1_4)
{
}

static void MR_CALL 
check_hlds__inst_mode_type_prop__ClassMethod_for_check_hlds__inst_mode_type_prop__tprop_record____check_hlds__inst_mode_type_prop__tprop_context__arity0__check_hlds__inst_mode_type_prop__tprop_args__arity0__check_hlds__inst_mode_type_prop__tprop_errors__arity0______check_hlds__inst_mode_type_prop__check_for_bad_use_of_user_inst_8_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word HeadVar__7_7,
  MR_Word * HeadVar__8_8)
{
  check_hlds__inst_mode_type_prop__do_check_for_bad_use_of_user_inst_8_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, HeadVar__4_4, HeadVar__5_5, HeadVar__6_6, HeadVar__7_7, HeadVar__8_8);
}

static MR_bool MR_CALL 
check_hlds__inst_mode_type_prop__ClassMethod_for_check_hlds__inst_mode_type_prop__tprop_record____check_hlds__inst_mode_type_prop__tprop_context__arity0__check_hlds__inst_mode_type_prop__tprop_args__arity0__check_hlds__inst_mode_type_prop__tprop_errors__arity0______check_hlds__inst_mode_type_prop__user_inst_expansion_to_context_3_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Word Inside_4;

  Inside_4 = check_hlds__inst_mode_type_prop__are_we_already_inside_user_inst_expansion_2_f_0(HeadVar__1_1, HeadVar__2_2);
  succeeded = (Inside_4 == (MR_Integer) 0);
  if (succeeded)
  {
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (HeadVar__2_2));
      MR_hl_field(1, base, 1) = ((MR_Box) (HeadVar__1_1));
    }
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__inst_mode_type_prop__ClassMethod_for_check_hlds__inst_mode_type_prop__tprop_record____check_hlds__inst_mode_type_prop__tprop_context__arity0__check_hlds__inst_mode_type_prop__tprop_args__arity0__check_hlds__inst_mode_type_prop__tprop_errors__arity0______check_hlds__inst_mode_type_prop__args_slot_to_context_3_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__3_3 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (HeadVar__1_1));
    MR_hl_field(0, base, 1) = ((MR_Box) (HeadVar__2_2));
  }
}

static void MR_CALL 
check_hlds__inst_mode_type_prop__ClassMethod_for_check_hlds__inst_mode_type_prop__tprop_record____check_hlds__inst_mode_type_prop__tprop_context__arity0__check_hlds__inst_mode_type_prop__tprop_args__arity0__check_hlds__inst_mode_type_prop__tprop_errors__arity0______check_hlds__inst_mode_type_prop__step_into_ho_inst_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    *HeadVar__4_4 = base;
    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (HeadVar__1_1));
    MR_hl_field(3, base, 2) = ((MR_Box) (HeadVar__2_2));
    MR_hl_field(3, base, 3) = ((MR_Box) (HeadVar__3_3));
  }
}

static void MR_CALL 
check_hlds__inst_mode_type_prop__ClassMethod_for_check_hlds__inst_mode_type_prop__tprop_record____check_hlds__inst_mode_type_prop__tprop_context__arity0__check_hlds__inst_mode_type_prop__tprop_args__arity0__check_hlds__inst_mode_type_prop__tprop_errors__arity0______check_hlds__inst_mode_type_prop__step_into_tuple_inst_2_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *HeadVar__2_2 = base;
    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, base, 1) = ((MR_Box) (HeadVar__1_1));
  }
}

static void MR_CALL 
check_hlds__inst_mode_type_prop__ClassMethod_for_check_hlds__inst_mode_type_prop__tprop_record____check_hlds__inst_mode_type_prop__tprop_context__arity0__check_hlds__inst_mode_type_prop__tprop_args__arity0__check_hlds__inst_mode_type_prop__tprop_errors__arity0______check_hlds__inst_mode_type_prop__step_into_bound_inst_3_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *HeadVar__3_3 = base;
    MR_hl_field(2, base, 0) = ((MR_Box) (HeadVar__1_1));
    MR_hl_field(2, base, 1) = ((MR_Box) (HeadVar__2_2));
  }
}

static void MR_CALL 
check_hlds__inst_mode_type_prop____Compare____user_inst_info_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word SubResult1_6;

    parse_tree__prog_data____Compare____sym_name_arity_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__inst_mode_type_prop_scalar_common_1[0]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
        hlds__hlds_inst_mode____Compare____hlds_inst_defn_0_0(HeadVar__1_1, ArgX3_10, ArgY3_11);
    }
  }
}

static MR_bool MR_CALL 
check_hlds__inst_mode_type_prop____Unify____user_inst_info_0_0(
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));

    succeeded = parse_tree__prog_data____Unify____sym_name_arity_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      TypeInfo_12_12 = (MR_Word) (&check_hlds__inst_mode_type_prop_scalar_common_1[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
        succeeded = hlds__hlds_inst_mode____Unify____hlds_inst_defn_0_0(ArgX3_7, ArgY3_8);
    }
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__inst_mode_type_prop____Compare____tprop_errors_0_0(
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

    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__inst_mode_type_prop_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
  }
}

static MR_bool MR_CALL 
check_hlds__inst_mode_type_prop____Unify____tprop_errors_0_0(
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

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__inst_mode_type_prop_scalar_common_1[3]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
  }
  return succeeded;
}

void MR_CALL 
check_hlds__inst_mode_type_prop____Compare____tprop_cache_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Var_25 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_Word ArgY1_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgY2_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgY3_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 2))));
      MR_Word SubResult1_12;

      parse_tree__prog_data____Compare____inst_ctor_0_0(&SubResult1_12, Var_25, ArgY1_11);
      succeeded = (SubResult1_12 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_12;
      else
      {
        MR_Word SubResult2_15;

        parse_tree__prog_data____Compare____type_ctor_0_0(&SubResult2_15, Var_24, ArgY2_14);
        succeeded = (SubResult2_15 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_15;
        else
          parse_tree__prog_data____Compare____type_ctor_0_0(HeadVar__1_1, Var_23, ArgY3_17);
      }
    }
  }
}

MR_bool MR_CALL 
check_hlds__inst_mode_type_prop____Unify____tprop_cache_result_0_0(
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
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_4 == CastX_3);
  }
  else
  {
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_6;
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_8;
    MR_Word ArgX3_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_10;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      ArgY3_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
      succeeded = parse_tree__prog_data____Unify____inst_ctor_0_0(ArgX1_5, ArgY1_6);
      if (succeeded)
      {
        succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(ArgX2_7, ArgY2_8);
        if (succeeded)
          succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(ArgX3_9, ArgY3_10);
      }
    }
  }
  return succeeded;
}

void MR_CALL 
check_hlds__inst_mode_type_prop____Compare____tprop_cache_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__inst_mode_type_prop_scalar_common_2[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
check_hlds__inst_mode_type_prop____Unify____tprop_cache_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__inst_mode_type_prop_scalar_common_2[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
check_hlds__inst_mode_type_prop____Compare____tprop_args_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_109 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_110 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_109 == CastY_110);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_129 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));

                hlds__hlds_pred____Compare____pred_info_0_0(HeadVar__1_1, Var_129, ArgY1_5);
              }
              break;
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
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
          MR_Word Var_126 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Var_127 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_128 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgY1_24 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
                MR_Word ArgY2_27 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
                MR_Word ArgY3_30 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 2))));
                MR_Word SubResult1_25;
                MR_Integer Var_135 = (MR_Integer) (Var_128);
                MR_Integer Var_136 = (MR_Integer) (ArgY1_24);

                succeeded = (Var_135 < Var_136);
                if (succeeded)
                {
                  SubResult1_25 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = (Var_135 > Var_136);
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
                  *HeadVar__1_1 = SubResult1_25;
                else
                {
                  MR_Word SubResult2_28;
                  MR_Integer Var_137 = (MR_Integer) (Var_127);
                  MR_Integer Var_138 = (MR_Integer) (ArgY2_27);

                  succeeded = (Var_137 < Var_138);
                  if (succeeded)
                  {
                    SubResult2_28 = (MR_Integer) 1;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = (Var_137 > Var_138);
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
                    *HeadVar__1_1 = SubResult2_28;
                  else
                    mercury__term_context____Compare____term_context_0_0(HeadVar__1_1, Var_126, ArgY3_30);
                }
              }
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
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
          MR_Word Var_121 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_122 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));

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
                MR_Word ArgY1_55 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))));
                MR_Word ArgY2_58 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 1))));
                MR_Word SubResult1_56;

                parse_tree__prog_data____Compare____cons_id_0_0(&SubResult1_56, Var_122, ArgY1_55);
                succeeded = (SubResult1_56 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_56;
                else
                  check_hlds__inst_mode_type_prop____Compare____tprop_context_0_0(HeadVar__1_1, Var_121, ArgY2_58);
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
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
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_130 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));

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
                  switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word ArgY1_77 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));

                        check_hlds__inst_mode_type_prop____Compare____tprop_context_0_0(HeadVar__1_1, Var_130, ArgY1_77);
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
              MR_Word Var_123 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 3))));
              MR_Word Var_124 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
              MR_Word Var_125 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);

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
                  switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word ArgY1_102 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
                        MR_Word ArgY2_105 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 2))));
                        MR_Word ArgY3_108 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 3))));
                        MR_Word SubResult1_103;
                        MR_Integer Var_131 = (MR_Integer) (Var_125);
                        MR_Integer Var_132 = (MR_Integer) (ArgY1_102);

                        succeeded = (Var_131 < Var_132);
                        if (succeeded)
                        {
                          SubResult1_103 = (MR_Integer) 1;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = (Var_131 > Var_132);
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
                          *HeadVar__1_1 = SubResult1_103;
                        else
                        {
                          MR_Word SubResult2_106;
                          MR_Integer Var_133 = (MR_Integer) (Var_124);
                          MR_Integer Var_134 = (MR_Integer) (ArgY2_105);

                          succeeded = (Var_133 < Var_134);
                          if (succeeded)
                          {
                            SubResult2_106 = (MR_Integer) 1;
                            succeeded = MR_TRUE;
                          }
                          else
                          {
                            succeeded = (Var_133 > Var_134);
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
                            *HeadVar__1_1 = SubResult2_106;
                          else
                            check_hlds__inst_mode_type_prop____Compare____tprop_context_0_0(HeadVar__1_1, Var_123, ArgY3_108);
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
check_hlds__inst_mode_type_prop____Compare____tprop_context_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer CastX_22 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_23 = (MR_Integer) (HeadVar__3_3);

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = (CastX_22 == CastY_23);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
    {
      MR_Integer Var_28 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
      {
        MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
        MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
        MR_Word SubResult1_6;

        check_hlds__inst_mode_type_prop____Compare____tprop_args_0_0(&SubResult1_6, Var_29, ArgY1_5);
        succeeded = (SubResult1_6 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult1_6;
        else
        {
          succeeded = (Var_28 < ArgY2_8);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 1;
          else
          {
            succeeded = (Var_28 > ArgY2_8);
            if (succeeded)
              *HeadVar__1_1 = (MR_Integer) 2;
            else
              *HeadVar__1_1 = (MR_Integer) 0;
          }
        }
      }
      else
        *HeadVar__1_1 = (MR_Integer) 1;
    }
    else
    {
      MR_Word Var_30 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_31 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word ArgY1_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
        MR_Word ArgY2_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
        MR_Word SubResult1_19;

        parse_tree__prog_data____Compare____sym_name_arity_0_0(&SubResult1_19, Var_31, ArgY1_18);
        succeeded = (SubResult1_19 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult1_19;
        else
        {
          MR_Word next_value_of_HeadVar__2_2 = Var_30;
          MR_Word next_value_of_HeadVar__3_3 = ArgY2_21;

          // direct tailcall eliminated
          ;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          continue;
        }
      }
    }
    break;
  }
}

MR_bool MR_CALL 
check_hlds__inst_mode_type_prop____Unify____tprop_args_0_0(
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
          MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = hlds__hlds_pred____Unify____pred_info_0_0(ArgX1_3, ArgY1_4);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_5 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Word ArgY1_6;
          MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
          MR_Word ArgY2_8;
          MR_Word ArgX3_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 2))));
          MR_Word ArgY3_10;
          MR_Integer Var_32;
          MR_Integer Var_33;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
            ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
            ArgY3_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
            succeeded = (ArgX1_5 == ArgY1_6);
            if (succeeded)
            {
              Var_32 = (MR_Integer) (ArgX2_7);
              Var_33 = (MR_Integer) (ArgY2_8);
              succeeded = (Var_32 == Var_33);
              if (succeeded)
                succeeded = mercury__term_context____Unify____term_context_0_0(ArgX3_9, ArgY3_10);
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgX1_11 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_12;
          MR_Word ArgX2_13 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 1))));
          MR_Word ArgY2_14;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_12 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_14 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 1))));
            succeeded = parse_tree__prog_data____Unify____cons_id_0_0(ArgX1_11, ArgY1_12);
            if (succeeded)
              succeeded = check_hlds__inst_mode_type_prop____Unify____tprop_context_0_0(ArgX2_13, ArgY2_14);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgX1_15 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_16;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_16 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                succeeded = check_hlds__inst_mode_type_prop____Unify____tprop_context_0_0(ArgX1_15, ArgY1_16);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_17 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word ArgY1_18;
              MR_Word ArgX2_19 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 2))));
              MR_Word ArgY2_20;
              MR_Word ArgX3_21 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 3))));
              MR_Word ArgY3_22;
              MR_Integer Var_30;
              MR_Integer Var_31;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_18 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                ArgY2_20 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                ArgY3_22 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 3))));
                succeeded = (ArgX1_17 == ArgY1_18);
                if (succeeded)
                {
                  Var_30 = (MR_Integer) (ArgX2_19);
                  Var_31 = (MR_Integer) (ArgY2_20);
                  succeeded = (Var_30 == Var_31);
                  if (succeeded)
                    succeeded = check_hlds__inst_mode_type_prop____Unify____tprop_context_0_0(ArgX3_21, ArgY3_22);
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
check_hlds__inst_mode_type_prop____Unify____tprop_context_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

    // setup for model_semi tailcalls optimized into a loop
    ;
    succeeded = (CastX_11 == CastY_12);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
    {
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4;
      MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer ArgY2_6;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
      if (succeeded)
      {
        ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
        ArgY2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
        succeeded = check_hlds__inst_mode_type_prop____Unify____tprop_args_0_0(ArgX1_3, ArgY1_4);
        if (succeeded)
          succeeded = (ArgX2_5 == ArgY2_6);
      }
    }
    else
    {
      MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_8;
      MR_Word ArgX2_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_10;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
      if (succeeded)
      {
        ArgY1_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
        ArgY2_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
        succeeded = parse_tree__prog_data____Unify____sym_name_arity_0_0(ArgX1_7, ArgY1_8);
        if (succeeded)
        {
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__1_1 = ArgX2_9;
          next_value_of_HeadVar__2_2 = ArgY2_10;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
check_hlds__inst_mode_type_prop____Compare____maybe_inside_user_inst_0_0(
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
check_hlds__inst_mode_type_prop____Unify____maybe_inside_user_inst_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__inst_mode_type_prop__user_inst_expansion_to_context_3_p_0(
  MR_Word TypeClassInfo_for_tprop_record_4,
  MR_Box HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box * HeadVar__3_3)
{
  MR_bool succeeded;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_tprop_record_4, (MR_Integer) 0)), (MR_Integer) 9))));

  succeeded = func_0(((MR_Box) (TypeClassInfo_for_tprop_record_4)), HeadVar__1_1, ((MR_Box) (HeadVar__2_2)), HeadVar__3_3);
  return succeeded;
}

static void MR_CALL 
check_hlds__inst_mode_type_prop__args_slot_to_context_3_p_0(
  MR_Word TypeClassInfo_for_tprop_record_4,
  MR_Box HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Box * HeadVar__3_3)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_tprop_record_4, (MR_Integer) 0)), (MR_Integer) 8))));

  func_0(((MR_Box) (TypeClassInfo_for_tprop_record_4)), HeadVar__1_1, ((MR_Box) (HeadVar__2_2)), HeadVar__3_3);
}

static void MR_CALL 
check_hlds__inst_mode_type_prop__step_into_tuple_inst_2_p_0(
  MR_Word TypeClassInfo_for_tprop_record_3,
  MR_Box HeadVar__1_1,
  MR_Box * HeadVar__2_2)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_tprop_record_3, (MR_Integer) 0)), (MR_Integer) 6))));

  func_0(((MR_Box) (TypeClassInfo_for_tprop_record_3)), HeadVar__1_1, HeadVar__2_2);
}

static void MR_CALL 
check_hlds__inst_mode_type_prop__step_into_bound_inst_3_p_0(
  MR_Word TypeClassInfo_for_tprop_record_4,
  MR_Word HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box * HeadVar__3_3)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_tprop_record_4, (MR_Integer) 0)), (MR_Integer) 5))));

  func_0(((MR_Box) (TypeClassInfo_for_tprop_record_4)), ((MR_Box) (HeadVar__1_1)), HeadVar__2_2, HeadVar__3_3);
}

static void MR_CALL 
check_hlds__inst_mode_type_prop__do_check_for_bad_use_of_user_inst_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word TPropContext_10,
  MR_Word InstName_11,
  MR_Word Type_12,
  MR_Word STATE_VARIABLE_Cache_0_51,
  MR_Word * STATE_VARIABLE_Cache_52,
  MR_Word STATE_VARIABLE_Errors_0_53,
  MR_Word * STATE_VARIABLE_Errors_54)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) InstName_11)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word SymName_35 = ((MR_Word) ((MR_hl_field(0, InstName_11, (MR_Integer) 0))));
        MR_Word ArgInsts_36 = ((MR_Word) ((MR_hl_field(0, InstName_11, (MR_Integer) 1))));
        MR_Word Result_37;
        MR_Word TypeCtorInfo_15_111;
        MR_Word TypeInfo_16_112;
        MR_Word TypeInfo_17_113;
        MR_Word TypeCtorInfo_18_114;
        MR_Word CacheTypeMap0_107;
        MR_Word CacheTypeNameMap0_108;
        MR_Box conv0_CacheTypeMap0_107;
        MR_Box conv1_CacheTypeNameMap0_108;
        MR_Box conv2_Result_37;

        succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&check_hlds__inst_mode_type_prop_scalar_common_2[1]), STATE_VARIABLE_Cache_0_51, ((MR_Box) (Type_12)), &conv0_CacheTypeMap0_107);
        if (succeeded)
        {
          CacheTypeMap0_107 = ((MR_Word) (conv0_CacheTypeMap0_107));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          TypeCtorInfo_15_111 = (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0);
          TypeInfo_16_112 = (MR_Word) (&check_hlds__inst_mode_type_prop_scalar_common_2[0]);
          succeeded = mercury__map__search_3_p_0(TypeCtorInfo_15_111, TypeInfo_16_112, CacheTypeMap0_107, ((MR_Box) (SymName_35)), &conv1_CacheTypeNameMap0_108);
          if (succeeded)
          {
            CacheTypeNameMap0_108 = ((MR_Word) (conv1_CacheTypeNameMap0_108));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            TypeInfo_17_113 = (MR_Word) (&check_hlds__inst_mode_type_prop_scalar_common_1[0]);
            TypeCtorInfo_18_114 = (MR_Word) (&check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__type_ctor_info_tprop_cache_result_0);
            succeeded = mercury__map__search_3_p_0(TypeInfo_17_113, TypeCtorInfo_18_114, CacheTypeNameMap0_108, ((MR_Box) (ArgInsts_36)), &conv2_Result_37);
            if (succeeded)
            {
              Result_37 = ((MR_Word) (conv2_Result_37));
              succeeded = MR_TRUE;
            }
          }
        }
        if (succeeded)
        {
          if ((Result_37 == (MR_Word) ((MR_Unsigned) 0U)))
            *STATE_VARIABLE_Errors_54 = STATE_VARIABLE_Errors_0_53;
          else
          {
            MR_Word InstCtor_38 = ((MR_Word) ((MR_hl_field(1, Result_37, (MR_Integer) 0))));
            MR_Word InstForTypeCtor_39 = ((MR_Word) ((MR_hl_field(1, Result_37, (MR_Integer) 1))));
            MR_Word TypeCtor_40 = ((MR_Word) ((MR_hl_field(1, Result_37, (MR_Integer) 2))));

            check_hlds__inst_mode_type_prop__do_record_bad_use_of_user_inst_6_p_0(InstCtor_38, InstForTypeCtor_39, TypeCtor_40, TPropContext_10, STATE_VARIABLE_Errors_0_53, STATE_VARIABLE_Errors_54);
          }
          *STATE_VARIABLE_Cache_52 = STATE_VARIABLE_Cache_0_51;
        }
        else
        {
          MR_Word InstTable_44;
          MR_Word UserInstTable_45;
          MR_Integer Arity_46;
          MR_Word InstCtor_84;
          MR_Word InstDefn_47;
          MR_Box conv3_InstDefn_47;

          hlds__hlds_module__module_info_get_inst_table_2_p_0(ModuleInfo_9, &InstTable_44);
          hlds__hlds_inst_mode__inst_table_get_user_insts_2_p_0(InstTable_44, &UserInstTable_45);
          mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), ArgInsts_36, &Arity_46);
          {
            InstCtor_84 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, InstCtor_84, 0) = ((MR_Box) (SymName_35));
            MR_hl_field(0, InstCtor_84, 1) = ((MR_Box) (Arity_46));
          }
          succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_inst_defn_0), UserInstTable_45, ((MR_Box) (InstCtor_84)), &conv3_InstDefn_47);
          if (succeeded)
          {
            InstDefn_47 = ((MR_Word) (conv3_InstDefn_47));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            MR_Word SymNameArity_48;
            MR_Word UserInstInfo_49;
            MR_Word STATE_VARIABLE_Errors_71_71;
            MR_Word STATE_VARIABLE_Cache_72_72;
            MR_Word Result_77;
            MR_Word InstForTypeCtor_75;
            MR_Word TypeCtor_76;
            MR_Word MaybeInstForTypeCtor_50;

            {
              SymNameArity_48 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, SymNameArity_48, 0) = ((MR_Box) (SymName_35));
              MR_hl_field(0, SymNameArity_48, 1) = ((MR_Box) (Arity_46));
            }
            {
              UserInstInfo_49 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, UserInstInfo_49, 0) = ((MR_Box) (SymNameArity_48));
              MR_hl_field(0, UserInstInfo_49, 1) = ((MR_Box) (ArgInsts_36));
              MR_hl_field(0, UserInstInfo_49, 2) = ((MR_Box) (InstDefn_47));
            }
            MaybeInstForTypeCtor_50 = ((MR_Word) ((MR_hl_field(0, InstDefn_47, (MR_Integer) 3))));
            succeeded = ((MR_tag((MR_Word) MaybeInstForTypeCtor_50)) == (MR_Integer) 1);
            if (succeeded)
            {
              InstForTypeCtor_75 = ((MR_Word) ((MR_hl_field(1, MaybeInstForTypeCtor_50, (MR_Integer) 0))));
              succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(Type_12, &TypeCtor_76);
              if (succeeded)
              {
                succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(TypeCtor_76, InstForTypeCtor_75);
                succeeded = !(succeeded);
              }
            }
            if (succeeded)
            {
              {
                Result_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Result_77, 0) = ((MR_Box) (InstCtor_84));
                MR_hl_field(1, Result_77, 1) = ((MR_Box) (InstForTypeCtor_75));
                MR_hl_field(1, Result_77, 2) = ((MR_Box) (TypeCtor_76));
              }
              check_hlds__inst_mode_type_prop__do_record_bad_use_of_user_inst_6_p_0(InstCtor_84, InstForTypeCtor_75, TypeCtor_76, TPropContext_10, STATE_VARIABLE_Errors_0_53, &STATE_VARIABLE_Errors_71_71);
            }
            else
            {
              Result_77 = (MR_Word) ((MR_Unsigned) 0U);
              STATE_VARIABLE_Errors_71_71 = STATE_VARIABLE_Errors_0_53;
            }
            check_hlds__inst_mode_type_prop__record_result_in_tprop_cache_6_p_0(Type_12, SymName_35, ArgInsts_36, Result_77, STATE_VARIABLE_Cache_0_51, &STATE_VARIABLE_Cache_72_72);
            check_hlds__inst_mode_type_prop__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_104_101_99_107_95_117_115_101_114_95_105_110_115_116_95_97_114_103_115_95_95_91_67_111_110_116_101_120_116_32_61_32_99_104_101_99_107_95_104_108_100_115_46_105_110_115_116_95_109_111_100_101_95_116_121_112_101_95_112_114_111_112_46_116_112_114_111_112_95_99_111_110_116_101_120_116_44_32_65_114_103_115_32_61_32_99_104_101_99_107_95_104_108_100_115_46_105_110_115_116_95_109_111_100_101_95_116_121_112_101_95_112_114_111_112_46_116_112_114_111_112_95_97_114_103_115_44_32_69_114_114_111_114_115_32_61_32_99_104_101_99_107_95_104_108_100_115_46_105_110_115_116_95_109_111_100_101_95_116_121_112_101_95_112_114_111_112_46_116_112_114_111_112_95_101_114_114_111_114_115_93_95_48_95_49_8_p_0((MR_Word) (&check_hlds__inst_mode_type_prop_scalar_common_3[1]), ModuleInfo_9, Type_12, TPropContext_10, UserInstInfo_49, STATE_VARIABLE_Cache_72_72, STATE_VARIABLE_Cache_52, STATE_VARIABLE_Errors_71_71, STATE_VARIABLE_Errors_54);
          }
          else
          {
            *STATE_VARIABLE_Errors_54 = STATE_VARIABLE_Errors_0_53;
            *STATE_VARIABLE_Cache_52 = STATE_VARIABLE_Cache_0_51;
          }
        }
      }
      break;
    case (MR_Integer) 1:
      {
        *STATE_VARIABLE_Cache_52 = STATE_VARIABLE_Cache_0_51;
        *STATE_VARIABLE_Errors_54 = STATE_VARIABLE_Errors_0_53;
      }
      break;
    case (MR_Integer) 2:
      {
        *STATE_VARIABLE_Cache_52 = STATE_VARIABLE_Cache_0_51;
        *STATE_VARIABLE_Errors_54 = STATE_VARIABLE_Errors_0_53;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, InstName_11, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *STATE_VARIABLE_Cache_52 = STATE_VARIABLE_Cache_0_51;
            *STATE_VARIABLE_Errors_54 = STATE_VARIABLE_Errors_0_53;
          }
          break;
        case (MR_Integer) 1:
          {
            *STATE_VARIABLE_Cache_52 = STATE_VARIABLE_Cache_0_51;
            *STATE_VARIABLE_Errors_54 = STATE_VARIABLE_Errors_0_53;
          }
          break;
        case (MR_Integer) 2:
          {
            *STATE_VARIABLE_Cache_52 = STATE_VARIABLE_Cache_0_51;
            *STATE_VARIABLE_Errors_54 = STATE_VARIABLE_Errors_0_53;
          }
          break;
        case (MR_Integer) 3:
          {
            *STATE_VARIABLE_Cache_52 = STATE_VARIABLE_Cache_0_51;
            *STATE_VARIABLE_Errors_54 = STATE_VARIABLE_Errors_0_53;
          }
          break;
        case (MR_Integer) 4:
          {
            *STATE_VARIABLE_Cache_52 = STATE_VARIABLE_Cache_0_51;
            *STATE_VARIABLE_Errors_54 = STATE_VARIABLE_Errors_0_53;
          }
          break;
        case (MR_Integer) 5:
          {
            *STATE_VARIABLE_Cache_52 = STATE_VARIABLE_Cache_0_51;
            *STATE_VARIABLE_Errors_54 = STATE_VARIABLE_Errors_0_53;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
check_hlds__inst_mode_type_prop__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_104_101_99_107_95_117_115_101_114_95_105_110_115_116_95_97_114_103_115_95_95_91_67_111_110_116_101_120_116_32_61_32_99_104_101_99_107_95_104_108_100_115_46_105_110_115_116_95_109_111_100_101_95_116_121_112_101_95_112_114_111_112_46_116_112_114_111_112_95_99_111_110_116_101_120_116_44_32_65_114_103_115_32_61_32_99_104_101_99_107_95_104_108_100_115_46_105_110_115_116_95_109_111_100_101_95_116_121_112_101_95_112_114_111_112_46_116_112_114_111_112_95_97_114_103_115_44_32_69_114_114_111_114_115_32_61_32_99_104_101_99_107_95_104_108_100_115_46_105_110_115_116_95_109_111_100_101_95_116_121_112_101_95_112_114_111_112_46_116_112_114_111_112_95_101_114_114_111_114_115_93_95_48_95_49_8_p_0(
  MR_Word TypeClassInfo_for_tprop_record_32,
  MR_Word ModuleInfo_9,
  MR_Word Type_10,
  MR_Word Context_11,
  MR_Word UserInstInfo_12,
  MR_Word STATE_VARIABLE_Cache_0_28,
  MR_Word * STATE_VARIABLE_Cache_29,
  MR_Word STATE_VARIABLE_Errors_0_30,
  MR_Word * STATE_VARIABLE_Errors_31)
{
  MR_bool succeeded;
  MR_Word SymNameArity_15 = ((MR_Word) ((MR_hl_field(0, UserInstInfo_12, (MR_Integer) 0))));
  MR_Word InstArgs_16 = ((MR_Word) ((MR_hl_field(0, UserInstInfo_12, (MR_Integer) 1))));
  MR_Word InstDefn_17 = ((MR_Word) ((MR_hl_field(0, UserInstInfo_12, (MR_Integer) 2))));
  MR_Word Params_19 = ((MR_Word) ((MR_hl_field(0, InstDefn_17, (MR_Integer) 1))));
  MR_Word InstBody_20 = ((MR_Word) ((MR_hl_field(0, InstDefn_17, (MR_Integer) 2))));
  MR_Word Inst0_24 = (MR_Word) (InstBody_20);
  MR_Word Inst1_25;
  MR_Word SubContext_26;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv1_SubContext_26;

  parse_tree__prog_mode__inst_substitute_arg_list_4_p_0(Params_19, InstArgs_16, Inst0_24, &Inst1_25);
  func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_tprop_record_32, (MR_Integer) 0)), (MR_Integer) 9))));
  succeeded = func_0(((MR_Box) (TypeClassInfo_for_tprop_record_32)), ((MR_Box) (Context_11)), ((MR_Box) (SymNameArity_15)), &conv1_SubContext_26);
  if (succeeded)
  {
    SubContext_26 = ((MR_Word) (conv1_SubContext_26));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    succeeded = mercury__builtin__semidet_fail_0_p_0();
    if (succeeded)
    {
      MR_Word Constructors_33;

      succeeded = check_hlds__type_util__type_constructors_3_p_0(ModuleInfo_9, Type_10, &Constructors_33);
      if (succeeded)
      {
        MR_Word _Inst_27;
        MR_Box conv2_STATE_VARIABLE_Errors_31;

        check_hlds__inst_mode_type_prop__propagate_type_into_inst_eagerly_10_p_0(TypeClassInfo_for_tprop_record_32, ModuleInfo_9, ((MR_Box) (SubContext_26)), Type_10, Constructors_33, Inst1_25, &_Inst_27, STATE_VARIABLE_Cache_0_28, STATE_VARIABLE_Cache_29, ((MR_Box) (STATE_VARIABLE_Errors_0_30)), &conv2_STATE_VARIABLE_Errors_31);
        *STATE_VARIABLE_Errors_31 = ((MR_Word) (conv2_STATE_VARIABLE_Errors_31));
      }
      else
      {
        *STATE_VARIABLE_Errors_31 = STATE_VARIABLE_Errors_0_30;
        *STATE_VARIABLE_Cache_29 = STATE_VARIABLE_Cache_0_28;
      }
    }
    else
    {
      MR_Word _Inst_36;
      MR_Box conv3_STATE_VARIABLE_Errors_31;

      check_hlds__inst_mode_type_prop__propagate_type_into_inst_lazily_9_p_0(TypeClassInfo_for_tprop_record_32, ModuleInfo_9, ((MR_Box) (SubContext_26)), Type_10, Inst1_25, &_Inst_36, STATE_VARIABLE_Cache_0_28, STATE_VARIABLE_Cache_29, ((MR_Box) (STATE_VARIABLE_Errors_0_30)), &conv3_STATE_VARIABLE_Errors_31);
      *STATE_VARIABLE_Errors_31 = ((MR_Word) (conv3_STATE_VARIABLE_Errors_31));
    }
  }
  else
  {
    *STATE_VARIABLE_Errors_31 = STATE_VARIABLE_Errors_0_30;
    *STATE_VARIABLE_Cache_29 = STATE_VARIABLE_Cache_0_28;
  }
}

static void MR_CALL 
check_hlds__inst_mode_type_prop__do_record_bad_use_of_user_inst_6_p_0(
  MR_Word InstCtor_7,
  MR_Word ForTypeCtor_8,
  MR_Word TypeCtor_9,
  MR_Word TPropContext_10,
  MR_Word STATE_VARIABLE_Errors_0_18,
  MR_Word * STATE_VARIABLE_Errors_19)
{
  MR_Word Specs0_12 = (MR_Word) (STATE_VARIABLE_Errors_0_18);
  MR_Word Context_13;
  MR_Word TPropContextPieces_14;
  MR_Word Pieces_15;
  MR_Word Spec_16;
  MR_Word Specs_17;
  MR_Word Var_20;
  MR_Word Var_23;
  MR_Word Var_24;
  MR_Word Var_26;
  MR_Word Var_27;
  MR_Word Var_28;
  MR_Word Var_29;
  MR_Word Var_31;
  MR_Word Var_34;
  MR_Word Var_37;
  MR_Word Var_38;
  MR_Word Var_39;
  MR_Word Var_42;
  MR_Word Var_45;
  MR_Word Var_48;
  MR_Word Var_51;
  MR_Word Var_52;

  check_hlds__inst_mode_type_prop__tprop_context_to_pieces_3_p_0(TPropContext_10, &Context_13, &TPropContextPieces_14);
  Var_24 = (MR_Word) (MR_mkword(3, &check_hlds__inst_mode_type_prop_scalar_common_1[7]));
  {
    Var_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_27, 0) = ((MR_Box) ((MR_Unsigned) 19U));
    MR_hl_field(3, Var_27, 1) = ((MR_Box) (InstCtor_7));
  }
  Var_29 = (MR_Word) (MR_mkword(3, &check_hlds__inst_mode_type_prop_scalar_common_1[8]));
  {
    Var_38 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_38, 0) = ((MR_Box) ((MR_Unsigned) 17U));
    MR_hl_field(3, Var_38, 1) = ((MR_Box) (ForTypeCtor_8));
  }
  {
    Var_52 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_52, 0) = ((MR_Box) ((MR_Unsigned) 17U));
    MR_hl_field(3, Var_52, 1) = ((MR_Box) (TypeCtor_9));
  }
  {
    Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_51, 0) = ((MR_Box) (Var_52));
    MR_hl_field(1, Var_51, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__inst_mode_type_prop_scalar_common_1[14])));
  }
  {
    Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_48, 0) = ((MR_Box) (Var_24));
    MR_hl_field(1, Var_48, 1) = ((MR_Box) (Var_51));
  }
  {
    Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_45, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__inst_mode_type_prop_scalar_common_1[11])));
    MR_hl_field(1, Var_45, 1) = ((MR_Box) (Var_48));
  }
  {
    Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_42, 0) = ((MR_Box) (Var_29));
    MR_hl_field(1, Var_42, 1) = ((MR_Box) (Var_45));
  }
  {
    Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_39, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__inst_mode_type_prop_scalar_common_1[10])));
    MR_hl_field(1, Var_39, 1) = ((MR_Box) (Var_42));
  }
  {
    Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_37, 0) = ((MR_Box) (Var_38));
    MR_hl_field(1, Var_37, 1) = ((MR_Box) (Var_39));
  }
  {
    Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_34, 0) = ((MR_Box) (Var_24));
    MR_hl_field(1, Var_34, 1) = ((MR_Box) (Var_37));
  }
  {
    Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_31, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__inst_mode_type_prop_scalar_common_1[9])));
    MR_hl_field(1, Var_31, 1) = ((MR_Box) (Var_34));
  }
  {
    Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_28, 0) = ((MR_Box) (Var_29));
    MR_hl_field(1, Var_28, 1) = ((MR_Box) (Var_31));
  }
  {
    Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_26, 0) = ((MR_Box) (Var_27));
    MR_hl_field(1, Var_26, 1) = ((MR_Box) (Var_28));
  }
  {
    Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_23, 0) = ((MR_Box) (Var_24));
    MR_hl_field(1, Var_23, 1) = ((MR_Box) (Var_26));
  }
  {
    Var_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_20, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__inst_mode_type_prop_scalar_common_1[6])));
    MR_hl_field(1, Var_20, 1) = ((MR_Box) (Var_23));
  }
  Pieces_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), TPropContextPieces_14, Var_20);
  {
    Spec_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Spec_16, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.inst_mode_type_prop.do_record_bad_use_of_user_inst\'/6"));
    MR_hl_field(1, Spec_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(1, Spec_16, 2) = ((MR_Box) ((MR_Unsigned) 56U));
    MR_hl_field(1, Spec_16, 3) = ((MR_Box) (Context_13));
    MR_hl_field(1, Spec_16, 4) = ((MR_Box) (Pieces_15));
  }
  {
    Specs_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Specs_17, 0) = ((MR_Box) (Spec_16));
    MR_hl_field(1, Specs_17, 1) = ((MR_Box) (Specs0_12));
  }
  *STATE_VARIABLE_Errors_19 = (MR_Word) (Specs_17);
}

static void MR_CALL 
check_hlds__inst_mode_type_prop__tprop_context_to_pieces_3_p_0(
  MR_Word TPropContext_4,
  MR_Word * Context_5,
  MR_Word * Pieces_6)
{
  if (((MR_tag((MR_Word) TPropContext_4)) == (MR_Integer) 0))
  {
    MR_Word Args_7 = ((MR_Word) ((MR_hl_field(0, TPropContext_4, (MR_Integer) 0))));
    MR_Integer ArgNum_8 = ((MR_Integer) ((MR_hl_field(0, TPropContext_4, (MR_Integer) 1))));

    switch (MR_tag((MR_Word) Args_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word PredInfo_9 = ((MR_Word) ((MR_hl_field(0, Args_7, (MR_Integer) 0))));
          MR_Word PredOrFunc_104;
          MR_Word PredFormArity_105;
          MR_Word PredPieces_106;
          MR_Word ArgDescPieces_107;
          MR_Word Var_112;
          MR_Word Var_113;
          MR_Word Var_118;

          hlds__hlds_pred__pred_info_get_is_pred_or_func_2_p_0(PredInfo_9, &PredOrFunc_104);
          hlds__hlds_pred__pred_info_get_orig_arity_2_p_0(PredInfo_9, &PredFormArity_105);
          hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo_9, Context_5);
          PredPieces_106 = hlds__hlds_error_util__describe_one_pred_info_name_2_f_0((MR_Integer) 1, PredInfo_9);
          ArgDescPieces_107 = check_hlds__inst_mode_type_prop__pred_or_func_arg_desc_3_f_0(PredOrFunc_104, PredFormArity_105, ArgNum_8);
          Var_118 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PredPieces_106, (MR_Word) (MR_mkword(1, &check_hlds__inst_mode_type_prop_scalar_common_1[19])));
          Var_113 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__inst_mode_type_prop_scalar_common_1[29])), Var_118);
          Var_112 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ArgDescPieces_107, Var_113);
          *Pieces_6 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__inst_mode_type_prop_scalar_common_1[27])), Var_112);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word PredOrFunc_10 = ((MR_Unsigned) ((MR_hl_field(1, Args_7, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Word PredFormArity_11 = ((MR_Word) ((MR_hl_field(1, Args_7, (MR_Integer) 1))));
          MR_Word ArgDescPieces_13;
          MR_Word Var_28;
          MR_Word Var_29;
          MR_Word Var_34;

          *Context_5 = ((MR_Word) ((MR_hl_field(1, Args_7, (MR_Integer) 2))));
          ArgDescPieces_13 = check_hlds__inst_mode_type_prop__pred_or_func_arg_desc_3_f_0(PredOrFunc_10, PredFormArity_11, ArgNum_8);
          Var_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__inst_mode_type_prop_scalar_common_1[25])), (MR_Word) (MR_mkword(1, &check_hlds__inst_mode_type_prop_scalar_common_1[19])));
          Var_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__inst_mode_type_prop_scalar_common_1[29])), Var_34);
          Var_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ArgDescPieces_13, Var_29);
          *Pieces_6 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__inst_mode_type_prop_scalar_common_1[27])), Var_28);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ConsId_14 = ((MR_Word) ((MR_hl_field(2, Args_7, (MR_Integer) 0))));
          MR_Word OuterTPropContext_15 = ((MR_Word) ((MR_hl_field(2, Args_7, (MR_Integer) 1))));
          MR_Word InnerPieces_16;
          MR_Word OuterPieces_18;
          MR_Word Var_43;
          MR_Word Var_44;
          MR_Word Var_45;
          MR_Word Var_48;
          MR_Word Var_49;

          {
            Var_44 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_44, 0) = ((MR_Box) ((MR_Unsigned) 3U));
            MR_hl_field(3, Var_44, 1) = ((MR_Box) (ArgNum_8));
          }
          {
            Var_49 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_49, 0) = ((MR_Box) ((MR_Unsigned) 26U));
            MR_hl_field(3, Var_49, 1) = ((MR_Box) (ConsId_14));
          }
          {
            Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_48, 0) = ((MR_Box) (Var_49));
            MR_hl_field(1, Var_48, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__inst_mode_type_prop_scalar_common_1[19])));
          }
          {
            Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_45, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__inst_mode_type_prop_scalar_common_1[16])));
            MR_hl_field(1, Var_45, 1) = ((MR_Box) (Var_48));
          }
          {
            Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_43, 0) = ((MR_Box) (Var_44));
            MR_hl_field(1, Var_43, 1) = ((MR_Box) (Var_45));
          }
          {
            InnerPieces_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, InnerPieces_16, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__inst_mode_type_prop_scalar_common_1[15])));
            MR_hl_field(1, InnerPieces_16, 1) = ((MR_Box) (Var_43));
          }
          check_hlds__inst_mode_type_prop__tprop_context_to_pieces_3_p_0(OuterTPropContext_15, Context_5, &OuterPieces_18);
          *Pieces_6 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), OuterPieces_18, InnerPieces_16);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Args_7, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_58;
              MR_Word Var_59;
              MR_Word OuterTPropContext_121 = ((MR_Word) ((MR_hl_field(3, Args_7, (MR_Integer) 1))));
              MR_Word InnerPieces_122;
              MR_Word OuterPieces_123;

              {
                Var_59 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_59, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(3, Var_59, 1) = ((MR_Box) (ArgNum_8));
              }
              {
                Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_58, 0) = ((MR_Box) (Var_59));
                MR_hl_field(1, Var_58, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__inst_mode_type_prop_scalar_common_1[31])));
              }
              {
                InnerPieces_122 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, InnerPieces_122, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__inst_mode_type_prop_scalar_common_1[15])));
                MR_hl_field(1, InnerPieces_122, 1) = ((MR_Box) (Var_58));
              }
              check_hlds__inst_mode_type_prop__tprop_context_to_pieces_3_p_0(OuterTPropContext_121, Context_5, &OuterPieces_123);
              *Pieces_6 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), OuterPieces_123, InnerPieces_122);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word NumArgs_17 = ((MR_Word) ((MR_hl_field(3, Args_7, (MR_Integer) 2))));
              MR_Word Var_70;
              MR_Word PredOrFunc_87 = ((MR_Unsigned) ((MR_hl_field(3, Args_7, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word ArgDescPieces_88;
              MR_Word OuterTPropContext_100 = ((MR_Word) ((MR_hl_field(3, Args_7, (MR_Integer) 3))));
              MR_Word InnerPieces_101;
              MR_Word OuterPieces_102;

              ArgDescPieces_88 = check_hlds__inst_mode_type_prop__pred_or_func_arg_desc_3_f_0(PredOrFunc_87, NumArgs_17, ArgNum_8);
              Var_70 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ArgDescPieces_88, (MR_Word) (MR_mkword(1, &check_hlds__inst_mode_type_prop_scalar_common_1[23])));
              InnerPieces_101 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__inst_mode_type_prop_scalar_common_1[21])), Var_70);
              check_hlds__inst_mode_type_prop__tprop_context_to_pieces_3_p_0(OuterTPropContext_100, Context_5, &OuterPieces_102);
              *Pieces_6 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), OuterPieces_102, InnerPieces_101);
            }
            break;
        }
        break;
    }
  }
  else
  {
    MR_Word InstNameArity_19 = ((MR_Word) ((MR_hl_field(1, TPropContext_4, (MR_Integer) 0))));
    MR_Word Var_79;
    MR_Word Var_80;
    MR_Word OuterTPropContext_93 = ((MR_Word) ((MR_hl_field(1, TPropContext_4, (MR_Integer) 1))));
    MR_Word InnerPieces_94;
    MR_Word OuterPieces_95;

    check_hlds__inst_mode_type_prop__tprop_context_to_pieces_3_p_0(OuterTPropContext_93, Context_5, &OuterPieces_95);
    {
      Var_80 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_80, 0) = ((MR_Box) ((MR_Unsigned) 11U));
      MR_hl_field(3, Var_80, 1) = ((MR_Box) (InstNameArity_19));
    }
    {
      Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_79, 0) = ((MR_Box) (Var_80));
      MR_hl_field(1, Var_79, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__inst_mode_type_prop_scalar_common_1[19])));
    }
    {
      InnerPieces_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, InnerPieces_94, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__inst_mode_type_prop_scalar_common_1[32])));
      MR_hl_field(1, InnerPieces_94, 1) = ((MR_Box) (Var_79));
    }
    *Pieces_6 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), OuterPieces_95, InnerPieces_94);
  }
}

static MR_Word MR_CALL 
check_hlds__inst_mode_type_prop__pred_or_func_arg_desc_3_f_0(
  MR_Word PredOrFunc_5,
  MR_Word HeadVar__2_2,
  MR_Integer ArgNum_7)
{
  MR_bool succeeded = (PredOrFunc_5 == (MR_Integer) 1);
  MR_Word Pieces_8;
  MR_Integer NumArgs_6 = (MR_Integer) (HeadVar__2_2);

  if (succeeded)
    succeeded = (ArgNum_7 == NumArgs_6);
  if (succeeded)
    Pieces_8 = (MR_Word) (MR_mkword(1, &check_hlds__inst_mode_type_prop_scalar_common_1[34]));
  else
  {
    MR_Word Var_14;
    MR_Word Var_15;

    {
      Var_15 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_15, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(3, Var_15, 1) = ((MR_Box) (ArgNum_7));
    }
    {
      Var_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_14, 0) = ((MR_Box) (Var_15));
      MR_hl_field(1, Var_14, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__inst_mode_type_prop_scalar_common_1[37])));
    }
    {
      Pieces_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_8, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__inst_mode_type_prop_scalar_common_1[35])));
      MR_hl_field(1, Pieces_8, 1) = ((MR_Box) (Var_14));
    }
  }
  return Pieces_8;
}

static void MR_CALL 
check_hlds__inst_mode_type_prop__record_result_in_tprop_cache_6_p_0(
  MR_Word Type_7,
  MR_Word SymName_8,
  MR_Word ArgInsts_9,
  MR_Word Result_10,
  MR_Word STATE_VARIABLE_Cache_0_16,
  MR_Word * STATE_VARIABLE_Cache_17)
{
  MR_bool succeeded;
  MR_Word TypeMap0_12;
  MR_Box conv0_TypeMap0_12;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&check_hlds__inst_mode_type_prop_scalar_common_2[1]), STATE_VARIABLE_Cache_0_16, ((MR_Box) (Type_7)), &conv0_TypeMap0_12);
  if (succeeded)
  {
    TypeMap0_12 = ((MR_Word) (conv0_TypeMap0_12));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word TypeNameMap0_13;
    MR_Box conv1_TypeNameMap0_13;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&check_hlds__inst_mode_type_prop_scalar_common_2[0]), TypeMap0_12, ((MR_Box) (SymName_8)), &conv1_TypeNameMap0_13);
    if (succeeded)
    {
      TypeNameMap0_13 = ((MR_Word) (conv1_TypeNameMap0_13));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word TypeNameMap_14;
      MR_Word TypeMap_15;

      mercury__map__set_4_p_0((MR_Word) (&check_hlds__inst_mode_type_prop_scalar_common_1[0]), (MR_Word) (&check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__type_ctor_info_tprop_cache_result_0), ((MR_Box) (ArgInsts_9)), ((MR_Box) (Result_10)), TypeNameMap0_13, &TypeNameMap_14);
      mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&check_hlds__inst_mode_type_prop_scalar_common_2[0]), ((MR_Box) (SymName_8)), ((MR_Box) (TypeNameMap_14)), TypeMap0_12, &TypeMap_15);
      mercury__map__det_update_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&check_hlds__inst_mode_type_prop_scalar_common_2[1]), ((MR_Box) (Type_7)), ((MR_Box) (TypeMap_15)), STATE_VARIABLE_Cache_0_16, STATE_VARIABLE_Cache_17);
    }
    else
    {
      MR_Word TypeNameMap_22;
      MR_Word TypeMap_23;

      TypeNameMap_22 = mercury__map__singleton_2_f_0((MR_Word) (&check_hlds__inst_mode_type_prop_scalar_common_1[0]), (MR_Word) (&check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__type_ctor_info_tprop_cache_result_0), ((MR_Box) (ArgInsts_9)), ((MR_Box) (Result_10)));
      mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&check_hlds__inst_mode_type_prop_scalar_common_2[0]), ((MR_Box) (SymName_8)), ((MR_Box) (TypeNameMap_22)), TypeMap0_12, &TypeMap_23);
      mercury__map__det_update_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&check_hlds__inst_mode_type_prop_scalar_common_2[1]), ((MR_Box) (Type_7)), ((MR_Box) (TypeMap_23)), STATE_VARIABLE_Cache_0_16, STATE_VARIABLE_Cache_17);
    }
  }
  else
  {
    MR_Word Var_20;
    MR_Word TypeNameMap_24;
    MR_Word TypeMap_25;

    TypeNameMap_24 = mercury__map__singleton_2_f_0((MR_Word) (&check_hlds__inst_mode_type_prop_scalar_common_1[0]), (MR_Word) (&check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__type_ctor_info_tprop_cache_result_0), ((MR_Box) (ArgInsts_9)), ((MR_Box) (Result_10)));
    Var_20 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&check_hlds__inst_mode_type_prop_scalar_common_2[0]));
    mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&check_hlds__inst_mode_type_prop_scalar_common_2[0]), ((MR_Box) (SymName_8)), ((MR_Box) (TypeNameMap_24)), Var_20, &TypeMap_25);
    mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&check_hlds__inst_mode_type_prop_scalar_common_2[1]), ((MR_Box) (Type_7)), ((MR_Box) (TypeMap_25)), STATE_VARIABLE_Cache_0_16, STATE_VARIABLE_Cache_17);
  }
}

static MR_Word MR_CALL 
check_hlds__inst_mode_type_prop__are_we_already_inside_user_inst_expansion_2_f_0(
  MR_Word Context_4,
  MR_Word SymNameArity_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word Inside_6;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) Context_4)) == (MR_Integer) 0))
    {
      MR_Word Args_7 = ((MR_Word) ((MR_hl_field(0, Context_4, (MR_Integer) 0))));

      switch (MR_tag((MR_Word) Args_7)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          Inside_6 = (MR_Integer) 0;
          break;
        case (MR_Integer) 2:
          {
            MR_Word OuterContext_14 = ((MR_Word) ((MR_hl_field(2, Args_7, (MR_Integer) 1))));
            MR_Word next_value_of_Context_4 = OuterContext_14;

            // direct tailcall eliminated
            ;
            Context_4 = next_value_of_Context_4;
            continue;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, Args_7, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word OuterContext_20 = ((MR_Word) ((MR_hl_field(3, Args_7, (MR_Integer) 1))));
                MR_Word next_value_of_Context_4 = OuterContext_20;

                // direct tailcall eliminated
                ;
                Context_4 = next_value_of_Context_4;
                continue;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word OuterContext_19 = ((MR_Word) ((MR_hl_field(3, Args_7, (MR_Integer) 3))));
                MR_Word next_value_of_Context_4 = OuterContext_19;

                // direct tailcall eliminated
                ;
                Context_4 = next_value_of_Context_4;
                continue;
              }
              break;
          }
          break;
      }
    }
    else
    {
      MR_Word InstNameArity_17 = ((MR_Word) ((MR_hl_field(1, Context_4, (MR_Integer) 0))));
      MR_Word OuterContext_18 = ((MR_Word) ((MR_hl_field(1, Context_4, (MR_Integer) 1))));

      succeeded = parse_tree__prog_data____Unify____sym_name_arity_0_0(SymNameArity_5, InstNameArity_17);
      if (succeeded)
        Inside_6 = (MR_Integer) 1;
      else
      {
        MR_Word next_value_of_Context_4 = OuterContext_18;

        // direct tailcall eliminated
        ;
        Context_4 = next_value_of_Context_4;
        continue;
      }
    }
    return Inside_6;
    break;
  }
}

static void MR_CALL 
check_hlds__inst_mode_type_prop__propagate_char_type_2_p_0(
  MR_Word BoundInst0_3,
  MR_Word * BoundInst_4)
{
  MR_bool succeeded;
  MR_Word Functor0_5 = ((MR_Word) ((MR_hl_field(0, BoundInst0_3, (MR_Integer) 0))));
  MR_Word ArgInsts0_6 = ((MR_Word) ((MR_hl_field(0, BoundInst0_3, (MR_Integer) 1))));
  MR_Char NameChar_10;
  MR_String Name_7;
  MR_Word NameChars_9;
  MR_Word Var_12;
  MR_Integer Var_13;
  MR_Word Var_14;

  succeeded = ((((MR_tag((MR_Word) Functor0_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Functor0_5, (MR_Integer) 0)))) == (MR_Integer) 2)));
  if (succeeded)
  {
    Var_12 = ((MR_Word) ((MR_hl_field(3, Functor0_5, (MR_Integer) 1))));
    Var_13 = ((MR_Integer) ((MR_hl_field(3, Functor0_5, (MR_Integer) 2))));
    succeeded = ((MR_tag((MR_Word) Var_12)) == (MR_Integer) 0);
    if (succeeded)
    {
      Name_7 = ((MR_String) ((MR_hl_field(0, Var_12, (MR_Integer) 0))));
      succeeded = (Var_13 == (MR_Integer) 0);
      if (succeeded)
      {
        mercury__string__to_char_list_2_p_0(Name_7, &NameChars_9);
        succeeded = (NameChars_9 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          NameChar_10 = ((MR_Char) (MR_Word) (MR_hl_field(1, NameChars_9, (MR_Integer) 0)));
          Var_14 = ((MR_Word) ((MR_hl_field(1, NameChars_9, (MR_Integer) 1))));
          succeeded = (Var_14 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
            succeeded = (ArgInsts0_6 == (MR_Word) ((MR_Unsigned) 0U));
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Word Functor_11;

    {
      Functor_11 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Functor_11, 0) = ((MR_Box) ((MR_Unsigned) 7U));
      MR_hl_field(3, Functor_11, 1) = ((MR_Box) (MR_Word) (NameChar_10));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *BoundInst_4 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Functor_11));
      MR_hl_field(0, base, 1) = ((MR_Box) (ArgInsts0_6));
    }
  }
  else
    *BoundInst_4 = BoundInst0_3;
}

static void MR_CALL 
check_hlds__inst_mode_type_prop__propagate_types_into_tuple_9_p_0(
  MR_Word TypeClassInfo_for_tprop_record_33,
  MR_Word ModuleInfo_10,
  MR_Box Context_11,
  MR_Word TupleArgTypes_12,
  MR_Word BoundInst0_13,
  MR_Word * BoundInst_14,
  MR_Word STATE_VARIABLE_Cache_0_26,
  MR_Word * STATE_VARIABLE_Cache_27,
  MR_Box STATE_VARIABLE_Errors_0_28,
  MR_Box * STATE_VARIABLE_Errors_29)
{
  MR_bool succeeded;
  MR_Word Functor_17 = ((MR_Word) ((MR_hl_field(0, BoundInst0_13, (MR_Integer) 0))));
  MR_Word ArgInsts0_18 = ((MR_Word) ((MR_hl_field(0, BoundInst0_13, (MR_Integer) 1))));
  MR_Word ArgInsts_25;
  MR_Word TypeCtorInfo_34_34;
  MR_Word TypeCtorInfo_35_35;
  MR_Integer ArgInstsLen_22;
  MR_Integer TupleArgTypesLen_23;

  if (((((MR_tag((MR_Word) Functor_17)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Functor_17, (MR_Integer) 0)))) == (MR_Integer) 2))))
  {
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(3, Functor_17, (MR_Integer) 1))));
    MR_String Var_31;

    succeeded = ((MR_tag((MR_Word) Var_30)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_31 = ((MR_String) ((MR_hl_field(0, Var_30, (MR_Integer) 0))));
      succeeded = (strcmp(Var_31, (MR_String) "{}") == 0);
    }
  }
  else
  if (((((MR_tag((MR_Word) Functor_17)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Functor_17, (MR_Integer) 0)))) == (MR_Integer) 3))))
    succeeded = MR_TRUE;
  else
    succeeded = MR_FALSE;
  if (succeeded)
  {
    TypeCtorInfo_34_34 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0);
    mercury__list__length_2_p_0(TypeCtorInfo_34_34, ArgInsts0_18, &ArgInstsLen_22);
    TypeCtorInfo_35_35 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
    mercury__list__length_2_p_0(TypeCtorInfo_35_35, TupleArgTypes_12, &TupleArgTypesLen_23);
    succeeded = (ArgInstsLen_22 == TupleArgTypesLen_23);
  }
  if (succeeded)
  {
    MR_Box Args_24;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_tprop_record_33, (MR_Integer) 0)), (MR_Integer) 6))));

    func_0(((MR_Box) (TypeClassInfo_for_tprop_record_33)), Context_11, &Args_24);
    check_hlds__inst_mode_type_prop__propagate_types_into_insts_10_p_0(TypeClassInfo_for_tprop_record_33, ModuleInfo_10, Args_24, (MR_Integer) 1, TupleArgTypes_12, ArgInsts0_18, &ArgInsts_25, STATE_VARIABLE_Cache_0_26, STATE_VARIABLE_Cache_27, STATE_VARIABLE_Errors_0_28, STATE_VARIABLE_Errors_29);
  }
  else
  {
    ArgInsts_25 = ArgInsts0_18;
    *STATE_VARIABLE_Errors_29 = STATE_VARIABLE_Errors_0_28;
    *STATE_VARIABLE_Cache_27 = STATE_VARIABLE_Cache_0_26;
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *BoundInst_14 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Functor_17));
    MR_hl_field(0, base, 1) = ((MR_Box) (ArgInsts_25));
  }
}

static void MR_CALL 
check_hlds__inst_mode_type_prop__propagate_types_into_insts_10_p_0(
  MR_Word TypeClassInfo_for_tprop_record_68,
  MR_Word ModuleInfo_1,
  MR_Box Args_2,
  MR_Integer ArgNum_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_Cache_0_7,
  MR_Word * STATE_VARIABLE_Cache_8,
  MR_Box STATE_VARIABLE_Errors_0_9,
  MR_Box * STATE_VARIABLE_Errors_10)
{
  MR_bool succeeded;

  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Errors_10 = STATE_VARIABLE_Errors_0_9;
      *STATE_VARIABLE_Cache_8 = STATE_VARIABLE_Cache_0_7;
    }
    else
    {
      *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_mode_type_prop.propagate_types_into_insts\'/10", (MR_String) "length mismatch");
        return;
      }
    }
  else
  {
    MR_Word Var_69 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
    MR_Word Var_70 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));

    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_mode_type_prop.propagate_types_into_insts\'/10", (MR_String) "length mismatch");
        return;
      }
    }
    else
    {
      MR_Word Inst0_51 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 0))));
      MR_Word Insts0_52 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 1))));
      MR_Word Inst_53;
      MR_Word Insts_54;
      MR_Box Context_57;
      MR_Word STATE_VARIABLE_Cache_62_62;
      MR_Box STATE_VARIABLE_Errors_63_63;
      MR_Integer Var_64;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_tprop_record_68, (MR_Integer) 0)), (MR_Integer) 8))));

      func_0(((MR_Box) (TypeClassInfo_for_tprop_record_68)), Args_2, ((MR_Box) (ArgNum_3)), &Context_57);
      succeeded = mercury__builtin__semidet_fail_0_p_0();
      if (succeeded)
      {
        MR_Word Constructors_71;

        succeeded = check_hlds__type_util__type_constructors_3_p_0(ModuleInfo_1, Var_70, &Constructors_71);
        if (succeeded)
          check_hlds__inst_mode_type_prop__propagate_type_into_inst_eagerly_10_p_0(TypeClassInfo_for_tprop_record_68, ModuleInfo_1, Context_57, Var_70, Constructors_71, Inst0_51, &Inst_53, STATE_VARIABLE_Cache_0_7, &STATE_VARIABLE_Cache_62_62, STATE_VARIABLE_Errors_0_9, &STATE_VARIABLE_Errors_63_63);
        else
        {
          Inst_53 = Inst0_51;
          STATE_VARIABLE_Errors_63_63 = STATE_VARIABLE_Errors_0_9;
          STATE_VARIABLE_Cache_62_62 = STATE_VARIABLE_Cache_0_7;
        }
      }
      else
        check_hlds__inst_mode_type_prop__propagate_type_into_inst_lazily_9_p_0(TypeClassInfo_for_tprop_record_68, ModuleInfo_1, Context_57, Var_70, Inst0_51, &Inst_53, STATE_VARIABLE_Cache_0_7, &STATE_VARIABLE_Cache_62_62, STATE_VARIABLE_Errors_0_9, &STATE_VARIABLE_Errors_63_63);
      Var_64 = (MR_Integer) ((MR_Unsigned) ArgNum_3 + (MR_Unsigned) 1);
      check_hlds__inst_mode_type_prop__propagate_types_into_insts_10_p_0(TypeClassInfo_for_tprop_record_68, ModuleInfo_1, Args_2, Var_64, Var_69, Insts0_52, &Insts_54, STATE_VARIABLE_Cache_62_62, STATE_VARIABLE_Cache_8, STATE_VARIABLE_Errors_63_63, STATE_VARIABLE_Errors_10);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__6_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Inst_53));
        MR_hl_field(1, base, 1) = ((MR_Box) (Insts_54));
      }
    }
  }
}

void MR_CALL 
check_hlds__inst_mode_type_prop__propagate_checked_type_into_mode_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word Context_11,
  MR_Word Type_12,
  MR_Word Mode0_13,
  MR_Word * Mode_14,
  MR_Word STATE_VARIABLE_Cache_0_19,
  MR_Word * STATE_VARIABLE_Cache_20,
  MR_Word STATE_VARIABLE_Specs_0_21,
  MR_Word * STATE_VARIABLE_Specs_22)
{
  MR_Word Errors0_17 = (MR_Word) (STATE_VARIABLE_Specs_0_21);
  MR_Word Errors_18;
  MR_Word InitialInst0_24;
  MR_Word FinalInst0_25;
  MR_Word InitialInst_26;
  MR_Word FinalInst_27;
  MR_Word STATE_VARIABLE_Cache_25_28;
  MR_Word STATE_VARIABLE_Errors_26_29;
  MR_Box conv0_STATE_VARIABLE_Errors_26_29;
  MR_Box conv1_Errors_18;

  check_hlds__mode_util__mode_get_insts_4_p_0(ModuleInfo_10, Mode0_13, &InitialInst0_24, &FinalInst0_25);
  check_hlds__inst_mode_type_prop__propagate_type_into_inst_lazily_9_p_0((MR_Word) (&check_hlds__inst_mode_type_prop_scalar_common_3[1]), ModuleInfo_10, ((MR_Box) (Context_11)), Type_12, InitialInst0_24, &InitialInst_26, STATE_VARIABLE_Cache_0_19, &STATE_VARIABLE_Cache_25_28, ((MR_Box) (Errors0_17)), &conv0_STATE_VARIABLE_Errors_26_29);
  STATE_VARIABLE_Errors_26_29 = ((MR_Word) (conv0_STATE_VARIABLE_Errors_26_29));
  check_hlds__inst_mode_type_prop__propagate_type_into_inst_lazily_9_p_0((MR_Word) (&check_hlds__inst_mode_type_prop_scalar_common_3[1]), ModuleInfo_10, ((MR_Box) (Context_11)), Type_12, FinalInst0_25, &FinalInst_27, STATE_VARIABLE_Cache_25_28, STATE_VARIABLE_Cache_20, ((MR_Box) (STATE_VARIABLE_Errors_26_29)), &conv1_Errors_18);
  Errors_18 = ((MR_Word) (conv1_Errors_18));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Mode_14 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (InitialInst_26));
    MR_hl_field(0, base, 1) = ((MR_Box) (FinalInst_27));
  }
  *STATE_VARIABLE_Specs_22 = (MR_Word) (Errors_18);
}

void MR_CALL 
check_hlds__inst_mode_type_prop__propagate_checked_types_into_modes_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word Args_11,
  MR_Word Types_12,
  MR_Word Modes0_13,
  MR_Word * Modes_14,
  MR_Word STATE_VARIABLE_Cache_0_19,
  MR_Word * STATE_VARIABLE_Cache_20,
  MR_Word STATE_VARIABLE_Specs_0_21,
  MR_Word * STATE_VARIABLE_Specs_22)
{
  MR_Word Errors0_17 = (MR_Word) (STATE_VARIABLE_Specs_0_21);
  MR_Word Errors_18;

  if ((Types_12 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((Modes0_13 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *Modes_14 = (MR_Word) ((MR_Unsigned) 0U);
      Errors_18 = Errors0_17;
      *STATE_VARIABLE_Cache_20 = STATE_VARIABLE_Cache_0_19;
    }
    else
    {
      *Modes_14 = (MR_Word) ((MR_Unsigned) 0U);
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_mode_type_prop.propagate_types_into_modes\'/10", (MR_String) "length mismatch");
        return;
      }
    }
  else
  {
    MR_Word Var_72 = ((MR_Word) ((MR_hl_field(1, Types_12, (MR_Integer) 1))));
    MR_Word Var_73 = ((MR_Word) ((MR_hl_field(1, Types_12, (MR_Integer) 0))));

    if ((Modes0_13 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *Modes_14 = (MR_Word) ((MR_Unsigned) 0U);
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_mode_type_prop.propagate_types_into_modes\'/10", (MR_String) "length mismatch");
        return;
      }
    }
    else
    {
      MR_Word Mode0_59 = ((MR_Word) ((MR_hl_field(1, Modes0_13, (MR_Integer) 0))));
      MR_Word Modes0_60 = ((MR_Word) ((MR_hl_field(1, Modes0_13, (MR_Integer) 1))));
      MR_Word Mode_61;
      MR_Word Modes_62;
      MR_Box Context_63;
      MR_Word STATE_VARIABLE_Cache_62_68;
      MR_Word STATE_VARIABLE_Errors_63_69;
      MR_Word InitialInst0_74;
      MR_Word FinalInst0_75;
      MR_Word InitialInst_76;
      MR_Word FinalInst_77;
      MR_Word STATE_VARIABLE_Cache_25_78;
      MR_Word STATE_VARIABLE_Errors_26_79;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&check_hlds__inst_mode_type_prop_scalar_common_3[1]), (MR_Integer) 0)), (MR_Integer) 8))));
      MR_Box conv1_STATE_VARIABLE_Errors_26_79;
      MR_Box conv2_STATE_VARIABLE_Errors_63_69;
      MR_Box conv3_Errors_18;

      func_0(((MR_Box) ((MR_Word) (&check_hlds__inst_mode_type_prop_scalar_common_3[1]))), ((MR_Box) (Args_11)), ((MR_Box) ((MR_Integer) 1)), &Context_63);
      check_hlds__mode_util__mode_get_insts_4_p_0(ModuleInfo_10, Mode0_59, &InitialInst0_74, &FinalInst0_75);
      check_hlds__inst_mode_type_prop__propagate_type_into_inst_lazily_9_p_0((MR_Word) (&check_hlds__inst_mode_type_prop_scalar_common_3[1]), ModuleInfo_10, Context_63, Var_73, InitialInst0_74, &InitialInst_76, STATE_VARIABLE_Cache_0_19, &STATE_VARIABLE_Cache_25_78, ((MR_Box) (Errors0_17)), &conv1_STATE_VARIABLE_Errors_26_79);
      STATE_VARIABLE_Errors_26_79 = ((MR_Word) (conv1_STATE_VARIABLE_Errors_26_79));
      check_hlds__inst_mode_type_prop__propagate_type_into_inst_lazily_9_p_0((MR_Word) (&check_hlds__inst_mode_type_prop_scalar_common_3[1]), ModuleInfo_10, Context_63, Var_73, FinalInst0_75, &FinalInst_77, STATE_VARIABLE_Cache_25_78, &STATE_VARIABLE_Cache_62_68, ((MR_Box) (STATE_VARIABLE_Errors_26_79)), &conv2_STATE_VARIABLE_Errors_63_69);
      STATE_VARIABLE_Errors_63_69 = ((MR_Word) (conv2_STATE_VARIABLE_Errors_63_69));
      {
        Mode_61 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Mode_61, 0) = ((MR_Box) (InitialInst_76));
        MR_hl_field(0, Mode_61, 1) = ((MR_Box) (FinalInst_77));
      }
      check_hlds__inst_mode_type_prop__propagate_types_into_modes_10_p_0((MR_Word) (&check_hlds__inst_mode_type_prop_scalar_common_3[1]), ModuleInfo_10, ((MR_Box) (Args_11)), (MR_Integer) ((MR_Unsigned) 1 + (MR_Unsigned) 1), Var_72, Modes0_60, &Modes_62, STATE_VARIABLE_Cache_62_68, STATE_VARIABLE_Cache_20, ((MR_Box) (STATE_VARIABLE_Errors_63_69)), &conv3_Errors_18);
      Errors_18 = ((MR_Word) (conv3_Errors_18));
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Modes_14 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Mode_61));
        MR_hl_field(1, base, 1) = ((MR_Box) (Modes_62));
      }
    }
  }
  *STATE_VARIABLE_Specs_22 = (MR_Word) (Errors_18);
}

static void MR_CALL 
check_hlds__inst_mode_type_prop__propagate_unchecked_type_into_bound_inst_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_BoundInst_14;
  MR_Word conv3_STATE_VARIABLE_Cache_27;

  check_hlds__inst_mode_type_prop__propagate_types_into_tuple_9_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), (MR_hl_field(0, closure, (MR_Integer) 5)), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), &conv4_BoundInst_14, ((MR_Word) (wrapper_arg_3)), &conv3_STATE_VARIABLE_Cache_27, wrapper_arg_5, wrapper_arg_6);
  *wrapper_arg_2 = ((MR_Box) (conv4_BoundInst_14));
  *wrapper_arg_4 = ((MR_Box) (conv3_STATE_VARIABLE_Cache_27));
}

static void MR_CALL 
check_hlds__inst_mode_type_prop__propagate_unchecked_type_into_bound_inst_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_BoundInst_4;

  check_hlds__inst_mode_type_prop__propagate_char_type_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_BoundInst_4);
  *wrapper_arg_2 = ((MR_Box) (conv0_BoundInst_4));
}

void MR_CALL 
check_hlds__inst_mode_type_prop__propagate_unchecked_type_into_bound_inst_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Type_6,
  MR_Word Inst0_7,
  MR_Word * Inst_8)
{
  MR_bool succeeded;
  MR_Word Var_12;
  MR_Word Uniq_17;
  MR_Word InstResults0_18;
  MR_Word BoundInsts0_19;

  Var_12 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&check_hlds__inst_mode_type_prop_scalar_common_2[1]));
  Uniq_17 = ((MR_Unsigned) ((MR_hl_field(2, Inst0_7, (MR_Integer) 0))) & (MR_Integer) 7);
  InstResults0_18 = ((MR_Word) ((MR_hl_field(2, Inst0_7, (MR_Integer) 1))));
  BoundInsts0_19 = ((MR_Word) ((MR_hl_field(2, Inst0_7, (MR_Integer) 2))));
  switch (MR_tag((MR_Word) Type_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *Inst_8 = Inst0_7;
      break;
    case (MR_Integer) 1:
      {
        MR_Word SymName_25 = ((MR_Word) ((MR_hl_field(1, Type_6, (MR_Integer) 0))));
        MR_Word ArgTypes_54 = ((MR_Word) ((MR_hl_field(1, Type_6, (MR_Integer) 1))));
        MR_Word TypeModule_26;
        MR_Word TypeCtor_29;
        MR_Word TypeParams_31;
        MR_Word TypeBodyDu_33;
        MR_Word TypeCtorInfo_102_65;
        MR_Word TypeTable_28;
        MR_Word TypeDefn_30;
        MR_Word TypeBody_32;
        MR_Integer Var_48;

        succeeded = ((MR_tag((MR_Word) SymName_25)) == (MR_Integer) 1);
        if (succeeded)
        {
          TypeModule_26 = ((MR_Word) ((MR_hl_field(1, SymName_25, (MR_Integer) 0))));
          hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_5, &TypeTable_28);
          TypeCtorInfo_102_65 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
          Var_48 = mercury__list__length_1_f_0(TypeCtorInfo_102_65, ArgTypes_54);
          {
            TypeCtor_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, TypeCtor_29, 0) = ((MR_Box) (SymName_25));
            MR_hl_field(0, TypeCtor_29, 1) = ((MR_Box) (Var_48));
          }
          succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_28, TypeCtor_29, &TypeDefn_30);
          if (succeeded)
          {
            hlds__hlds_data__get_type_defn_tparams_2_p_0(TypeDefn_30, &TypeParams_31);
            hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_30, &TypeBody_32);
            succeeded = ((MR_tag((MR_Word) TypeBody_32)) == (MR_Integer) 0);
            if (succeeded)
              TypeBodyDu_33 = (MR_Word) ((MR_Word) (TypeBody_32));
          }
        }
        if (succeeded)
        {
          MR_Word PropagatedResult0_39;
          MR_Word PropagatedTypeCtor0_40;

          succeeded = ((MR_tag((MR_Word) InstResults0_18)) == (MR_Integer) 1);
          if (succeeded)
          {
            PropagatedResult0_39 = ((MR_Word) ((MR_hl_field(1, InstResults0_18, (MR_Integer) 4))));
            succeeded = (PropagatedResult0_39 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              PropagatedTypeCtor0_40 = (MR_Word) (MR_body((MR_Word) (PropagatedResult0_39), (MR_Integer) 1));
              succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(PropagatedTypeCtor0_40, TypeCtor_29);
              if (succeeded)
                succeeded = (TypeParams_31 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
          if (succeeded)
            *Inst_8 = Inst0_7;
          else
          {
            MR_Word ArgSubst_41;
            MR_Word OoMConstructors_42;
            MR_Word Constructors_43;
            MR_Word BoundInsts1_44;
            MR_Word BoundInsts_52;
            MR_Word PropagatedResult_53;
            MR_Word Var_96;
            MR_Box conv1_Var_97;

            mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&check_hlds__inst_mode_type_prop_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TypeParams_31, ArgTypes_54, &ArgSubst_41);
            OoMConstructors_42 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_33, (MR_Integer) 0))));
            Constructors_43 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), OoMConstructors_42);
            check_hlds__inst_mode_type_prop__propagate_subst_type_ctor_into_bound_insts_12_p_0((MR_Word) (&check_hlds__inst_mode_type_prop_scalar_common_3[0]), ModuleInfo_5, ((MR_Box) ((MR_Integer) 0)), ArgSubst_41, TypeCtor_29, TypeModule_26, Constructors_43, BoundInsts0_19, &BoundInsts1_44, Var_12, &Var_96, ((MR_Box) ((MR_Integer) 0)), &conv1_Var_97);
            mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0), BoundInsts1_44, &BoundInsts_52);
            PropagatedResult_53 = (MR_Word) (MR_mkword(1, (MR_Word) (TypeCtor_29)));
            check_hlds__inst_mode_type_prop__construct_new_bound_inst_5_p_0(Uniq_17, InstResults0_18, PropagatedResult_53, BoundInsts_52, Inst_8);
          }
        }
        else
          *Inst_8 = Inst0_7;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word BuiltinType_20 = ((MR_Word) ((MR_hl_field(2, Type_6, (MR_Integer) 0))));

        switch (MR_tag((MR_Word) BuiltinType_20)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(BuiltinType_20)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
                *Inst_8 = Inst0_7;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word BoundInsts_21;

                  mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0), (MR_Word) (&check_hlds__inst_mode_type_prop_scalar_common_2[4]), BoundInsts0_19, &BoundInsts_21);
                  if ((BoundInsts_21 == (MR_Word) ((MR_Unsigned) 0U)))
                    *Inst_8 = (MR_Word) ((MR_Unsigned) 4U);
                  else
                  {
                    MR_Word InstResults_73;

                    switch (MR_tag((MR_Word) InstResults0_18)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        switch (MR_unmkbody(InstResults0_18)) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            InstResults_73 = (MR_Word) (MR_mkword(1, &check_hlds__inst_mode_type_prop_scalar_common_4[1]));
                            break;
                          case (MR_Integer) 1:
                            InstResults_73 = InstResults0_18;
                            break;
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(1, InstResults0_18, (MR_Integer) 0)));

                          {
                            InstResults_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, InstResults_73, 0) = (MR_Box) (packed_word_1);
                            MR_hl_field(1, InstResults_73, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                            MR_hl_field(1, InstResults_73, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                            MR_hl_field(1, InstResults_73, 3) = ((MR_Box) ((MR_Unsigned) 0U));
                            MR_hl_field(1, InstResults_73, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                          }
                        }
                        break;
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      *Inst_8 = base;
                      MR_hl_field(2, base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_17));
                      MR_hl_field(2, base, 1) = ((MR_Box) (InstResults_73));
                      MR_hl_field(2, base, 2) = ((MR_Box) (BoundInsts_21));
                    }
                  }
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            *Inst_8 = Inst0_7;
            break;
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Type_6, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word TypeInfo_101_64;
            MR_Word ArgTypes_23 = ((MR_Word) ((MR_hl_field(3, Type_6, (MR_Integer) 1))));
            MR_Word Var_47;
            MR_Word BoundInsts_49;
            MR_Box conv6_Var_114;
            MR_Box conv5_Var_115;

            {
              Var_47 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_47, 0) = ((MR_Box) (&check_hlds__inst_mode_type_prop_scalar_common_6[0]));
              MR_hl_field(0, Var_47, 1) = ((MR_Box) (check_hlds__inst_mode_type_prop__propagate_unchecked_type_into_bound_inst_4_p_0_2));
              MR_hl_field(0, Var_47, 2) = ((MR_Box) ((MR_Integer) 4));
              MR_hl_field(0, Var_47, 3) = ((MR_Box) (&check_hlds__inst_mode_type_prop_scalar_common_3[0]));
              MR_hl_field(0, Var_47, 4) = ((MR_Box) (ModuleInfo_5));
              MR_hl_field(0, Var_47, 5) = NULL;
              MR_hl_field(0, Var_47, 6) = ((MR_Box) (ArgTypes_23));
            }
            mercury__private_builtin__type_info_from_typeclass_info_3_p_0((MR_Word) (&check_hlds__inst_mode_type_prop_scalar_common_3[0]), (MR_Integer) 3, &TypeInfo_101_64);
            mercury__list__map_foldl2_7_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0), (MR_Word) (&check_hlds__inst_mode_type_prop_scalar_common_2[2]), TypeInfo_101_64, Var_47, BoundInsts0_19, &BoundInsts_49, ((MR_Box) (Var_12)), &conv6_Var_114, ((MR_Box) ((MR_Integer) 0)), &conv5_Var_115);
            check_hlds__inst_mode_type_prop__construct_new_bound_inst_5_p_0(Uniq_17, InstResults0_18, (MR_Word) ((MR_Unsigned) 0U), BoundInsts_49, Inst_8);
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          *Inst_8 = Inst0_7;
          break;
        case (MR_Integer) 3:
          {
            MR_Word KindedType_45 = ((MR_Word) ((MR_hl_field(3, Type_6, (MR_Integer) 1))));
            MR_Word Var_110;
            MR_Box conv2_Var_111;

            check_hlds__inst_mode_type_prop__propagate_type_into_bound_inst_9_p_0((MR_Word) (&check_hlds__inst_mode_type_prop_scalar_common_3[0]), ModuleInfo_5, ((MR_Box) ((MR_Integer) 0)), KindedType_45, Inst0_7, Inst_8, Var_12, &Var_110, ((MR_Box) ((MR_Integer) 0)), &conv2_Var_111);
          }
          break;
      }
      break;
  }
}

void MR_CALL 
check_hlds__inst_mode_type_prop__propagate_unchecked_type_into_inst_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Type_6,
  MR_Word Inst0_7,
  MR_Word * Inst_8)
{
  MR_bool succeeded;
  MR_Word Var_12;

  Var_12 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&check_hlds__inst_mode_type_prop_scalar_common_2[1]));
  succeeded = mercury__builtin__semidet_fail_0_p_0();
  if (succeeded)
  {
    MR_Word Constructors_17;

    succeeded = check_hlds__type_util__type_constructors_3_p_0(ModuleInfo_5, Type_6, &Constructors_17);
    if (succeeded)
    {
      MR_Word Var_9;
      MR_Box conv0_Var_10;

      check_hlds__inst_mode_type_prop__propagate_type_into_inst_eagerly_10_p_0((MR_Word) (&check_hlds__inst_mode_type_prop_scalar_common_3[0]), ModuleInfo_5, ((MR_Box) ((MR_Integer) 0)), Type_6, Constructors_17, Inst0_7, Inst_8, Var_12, &Var_9, ((MR_Box) ((MR_Integer) 0)), &conv0_Var_10);
    }
    else
      *Inst_8 = Inst0_7;
  }
  else
  {
    MR_Word Var_22;
    MR_Box conv1_Var_23;

    check_hlds__inst_mode_type_prop__propagate_type_into_inst_lazily_9_p_0((MR_Word) (&check_hlds__inst_mode_type_prop_scalar_common_3[0]), ModuleInfo_5, ((MR_Box) ((MR_Integer) 0)), Type_6, Inst0_7, Inst_8, Var_12, &Var_22, ((MR_Box) ((MR_Integer) 0)), &conv1_Var_23);
  }
}

static void MR_CALL 
check_hlds__inst_mode_type_prop__propagate_type_into_inst_9_p_0(
  MR_Word TypeClassInfo_for_tprop_record_22,
  MR_Word ModuleInfo_10,
  MR_Box Context_11,
  MR_Word Type_12,
  MR_Word Inst0_13,
  MR_Word * Inst_14,
  MR_Word STATE_VARIABLE_Cache_0_18,
  MR_Word * STATE_VARIABLE_Cache_19,
  MR_Box STATE_VARIABLE_Errors_0_20,
  MR_Box * STATE_VARIABLE_Errors_21)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__semidet_fail_0_p_0();
  if (succeeded)
  {
    MR_Word Constructors_17;

    succeeded = check_hlds__type_util__type_constructors_3_p_0(ModuleInfo_10, Type_12, &Constructors_17);
    if (succeeded)
      check_hlds__inst_mode_type_prop__propagate_type_into_inst_eagerly_10_p_0(TypeClassInfo_for_tprop_record_22, ModuleInfo_10, Context_11, Type_12, Constructors_17, Inst0_13, Inst_14, STATE_VARIABLE_Cache_0_18, STATE_VARIABLE_Cache_19, STATE_VARIABLE_Errors_0_20, STATE_VARIABLE_Errors_21);
    else
    {
      *Inst_14 = Inst0_13;
      *STATE_VARIABLE_Errors_21 = STATE_VARIABLE_Errors_0_20;
      *STATE_VARIABLE_Cache_19 = STATE_VARIABLE_Cache_0_18;
    }
  }
  else
    check_hlds__inst_mode_type_prop__propagate_type_into_inst_lazily_9_p_0(TypeClassInfo_for_tprop_record_22, ModuleInfo_10, Context_11, Type_12, Inst0_13, Inst_14, STATE_VARIABLE_Cache_0_18, STATE_VARIABLE_Cache_19, STATE_VARIABLE_Errors_0_20, STATE_VARIABLE_Errors_21);
}

static void MR_CALL 
check_hlds__inst_mode_type_prop__propagate_type_into_inst_lazily_9_p_0(
  MR_Word TypeClassInfo_for_tprop_record_112,
  MR_Word ModuleInfo_10,
  MR_Box Context_11,
  MR_Word Type_12,
  MR_Word Inst0_13,
  MR_Word * Inst_14,
  MR_Word STATE_VARIABLE_Cache_0_49,
  MR_Word * STATE_VARIABLE_Cache_50,
  MR_Box STATE_VARIABLE_Errors_0_51,
  MR_Box * STATE_VARIABLE_Errors_52)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) Inst0_13)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(Inst0_13)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *Inst_14 = (MR_Word) ((MR_Unsigned) 0U);
            *STATE_VARIABLE_Cache_50 = STATE_VARIABLE_Cache_0_49;
            *STATE_VARIABLE_Errors_52 = STATE_VARIABLE_Errors_0_51;
          }
          break;
        case (MR_Integer) 1:
          {
            *Inst_14 = Inst0_13;
            *STATE_VARIABLE_Cache_50 = STATE_VARIABLE_Cache_0_49;
            *STATE_VARIABLE_Errors_52 = STATE_VARIABLE_Errors_0_51;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Uniq_17 = ((MR_Unsigned) ((MR_hl_field(1, Inst0_13, (MR_Integer) 0))) & (MR_Integer) 7);
        MR_Word HOInstInfo0_18 = ((MR_Word) ((MR_hl_field(1, Inst0_13, (MR_Integer) 1))));

        if ((HOInstInfo0_18 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word ArgTypes_21;
          MR_Word Var_119;
          MR_Word Var_19;

          succeeded = parse_tree__prog_type_test__type_is_higher_order_details_5_p_0(Type_12, &Var_19, &Var_119, &ArgTypes_21);
          if (succeeded)
            succeeded = ((MR_Integer) 1 == Var_119);
          if (succeeded)
          {
            MR_Word HOInstInfo_22;
            MR_Word Var_56;

            check_hlds__inst_mode_type_prop__default_higher_order_func_inst_8_p_0(TypeClassInfo_for_tprop_record_112, ModuleInfo_10, Context_11, ArgTypes_21, &HOInstInfo_22, STATE_VARIABLE_Cache_0_49, STATE_VARIABLE_Cache_50, STATE_VARIABLE_Errors_0_51, STATE_VARIABLE_Errors_52);
            Var_56 = (MR_Word) (MR_mkword(1, (MR_Word) (HOInstInfo_22)));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Inst_14 = base;
              MR_hl_field(1, base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_17));
              MR_hl_field(1, base, 1) = ((MR_Box) (Var_56));
            }
          }
          else
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Inst_14 = base;
              MR_hl_field(1, base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_17));
              MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            *STATE_VARIABLE_Errors_52 = STATE_VARIABLE_Errors_0_51;
            *STATE_VARIABLE_Cache_50 = STATE_VARIABLE_Cache_0_49;
          }
        }
        else
        {
          MR_Word PredInstInfo0_23 = (MR_Word) (MR_body((MR_Word) (HOInstInfo0_18), (MR_Integer) 1));
          MR_Word PredOrFunc_24 = ((MR_Unsigned) ((MR_hl_field(0, PredInstInfo0_23, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Word Modes0_25 = ((MR_Word) ((MR_hl_field(0, PredInstInfo0_23, (MR_Integer) 1))));
          MR_Word MaybeArgRegs_26 = ((MR_Word) ((MR_hl_field(0, PredInstInfo0_23, (MR_Integer) 2))));
          MR_Word Detism_27 = ((MR_Unsigned) ((MR_hl_field(0, PredInstInfo0_23, (MR_Integer) 3))) & (MR_Integer) 7);
          MR_Word Modes_32;
          MR_Word PredInstInfo_33;
          MR_Word Var_61;
          MR_Word ArgTypes_77;
          MR_Word TypeCtorInfo_113_113;
          MR_Word TypeCtorInfo_114_114;
          MR_Word Var_120;
          MR_Word Var_28;

          succeeded = parse_tree__prog_type_test__type_is_higher_order_details_5_p_0(Type_12, &Var_28, &Var_120, &ArgTypes_77);
          if (succeeded)
          {
            succeeded = (PredOrFunc_24 == Var_120);
            if (succeeded)
            {
              TypeCtorInfo_113_113 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
              TypeCtorInfo_114_114 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0);
              succeeded = mercury__list__same_length_2_p_0(TypeCtorInfo_113_113, TypeCtorInfo_114_114, ArgTypes_77, Modes0_25);
            }
          }
          if (succeeded)
          {
            MR_Word PredFormArity_30;
            MR_Box Args_31;
            void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

            PredFormArity_30 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_77);
            func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_tprop_record_112, (MR_Integer) 0)), (MR_Integer) 7))));
            func_3(((MR_Box) (TypeClassInfo_for_tprop_record_112)), ((MR_Box) (PredOrFunc_24)), ((MR_Box) (PredFormArity_30)), Context_11, &Args_31);
            check_hlds__inst_mode_type_prop__propagate_types_into_modes_10_p_0(TypeClassInfo_for_tprop_record_112, ModuleInfo_10, Args_31, (MR_Integer) 1, ArgTypes_77, Modes0_25, &Modes_32, STATE_VARIABLE_Cache_0_49, STATE_VARIABLE_Cache_50, STATE_VARIABLE_Errors_0_51, STATE_VARIABLE_Errors_52);
          }
          else
          {
            Modes_32 = Modes0_25;
            *STATE_VARIABLE_Errors_52 = STATE_VARIABLE_Errors_0_51;
            *STATE_VARIABLE_Cache_50 = STATE_VARIABLE_Cache_0_49;
          }
          {
            PredInstInfo_33 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, PredInstInfo_33, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_24));
            MR_hl_field(0, PredInstInfo_33, 1) = ((MR_Box) (Modes_32));
            MR_hl_field(0, PredInstInfo_33, 2) = ((MR_Box) (MaybeArgRegs_26));
            MR_hl_field(0, PredInstInfo_33, 3) = (MR_Box) ((MR_Unsigned) (Detism_27));
          }
          Var_61 = (MR_Word) (MR_mkword(1, (MR_Word) (PredInstInfo_33)));
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Inst_14 = base;
            MR_hl_field(1, base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_17));
            MR_hl_field(1, base, 1) = ((MR_Box) (Var_61));
          }
        }
      }
      break;
    case (MR_Integer) 2:
      check_hlds__inst_mode_type_prop__propagate_type_into_bound_inst_9_p_0(TypeClassInfo_for_tprop_record_112, ModuleInfo_10, Context_11, Type_12, Inst0_13, Inst_14, STATE_VARIABLE_Cache_0_49, STATE_VARIABLE_Cache_50, STATE_VARIABLE_Errors_0_51, STATE_VARIABLE_Errors_52);
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Inst0_13, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word InstName0_45 = ((MR_Word) ((MR_hl_field(3, Inst0_13, (MR_Integer) 1))));
            void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_tprop_record_112, (MR_Integer) 0)), (MR_Integer) 10))));
            MR_Box conv2_STATE_VARIABLE_Cache_50;

            func_1(((MR_Box) (TypeClassInfo_for_tprop_record_112)), ((MR_Box) (ModuleInfo_10)), Context_11, ((MR_Box) (InstName0_45)), ((MR_Box) (Type_12)), ((MR_Box) (STATE_VARIABLE_Cache_0_49)), &conv2_STATE_VARIABLE_Cache_50, STATE_VARIABLE_Errors_0_51, STATE_VARIABLE_Errors_52);
            *STATE_VARIABLE_Cache_50 = ((MR_Word) (conv2_STATE_VARIABLE_Cache_50));
            succeeded = ((((MR_tag((MR_Word) InstName0_45)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, InstName0_45, (MR_Integer) 0)))) == (MR_Integer) 5)));
            if (succeeded)
              *Inst_14 = Inst0_13;
            else
            {
              MR_Word InstName_48;

              {
                InstName_48 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, InstName_48, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(3, InstName_48, 1) = ((MR_Box) (Type_12));
                MR_hl_field(3, InstName_48, 2) = ((MR_Box) (InstName0_45));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Inst_14 = base;
                MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, base, 1) = ((MR_Box) (InstName_48));
              }
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word InstVars_42 = ((MR_Word) ((MR_hl_field(3, Inst0_13, (MR_Integer) 1))));
            MR_Word SubInst0_43 = ((MR_Word) ((MR_hl_field(3, Inst0_13, (MR_Integer) 2))));
            MR_Word SubInst_44;

            check_hlds__inst_mode_type_prop__propagate_type_into_inst_lazily_9_p_0(TypeClassInfo_for_tprop_record_112, ModuleInfo_10, Context_11, Type_12, SubInst0_43, &SubInst_44, STATE_VARIABLE_Cache_0_49, STATE_VARIABLE_Cache_50, STATE_VARIABLE_Errors_0_51, STATE_VARIABLE_Errors_52);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Inst_14 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, base, 1) = ((MR_Box) (InstVars_42));
              MR_hl_field(3, base, 2) = ((MR_Box) (SubInst_44));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Uniq_110 = ((MR_Unsigned) ((MR_hl_field(3, Inst0_13, (MR_Integer) 1))) & (MR_Integer) 7);
            MR_Word HOInstInfo0_111 = ((MR_Word) ((MR_hl_field(3, Inst0_13, (MR_Integer) 2))));

            if ((HOInstInfo0_111 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word ArgTypes_80;
              MR_Word Var_121;
              MR_Word Var_34;

              succeeded = parse_tree__prog_type_test__type_is_higher_order_details_5_p_0(Type_12, &Var_34, &Var_121, &ArgTypes_80);
              if (succeeded)
                succeeded = ((MR_Integer) 1 == Var_121);
              if (succeeded)
              {
                MR_Word Var_65;
                MR_Word HOInstInfo_79;

                check_hlds__inst_mode_type_prop__default_higher_order_func_inst_8_p_0(TypeClassInfo_for_tprop_record_112, ModuleInfo_10, Context_11, ArgTypes_80, &HOInstInfo_79, STATE_VARIABLE_Cache_0_49, STATE_VARIABLE_Cache_50, STATE_VARIABLE_Errors_0_51, STATE_VARIABLE_Errors_52);
                Var_65 = (MR_Word) (MR_mkword(1, (MR_Word) (HOInstInfo_79)));
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  *Inst_14 = base;
                  MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                  MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_110));
                  MR_hl_field(3, base, 2) = ((MR_Box) (Var_65));
                }
              }
              else
              {
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  *Inst_14 = base;
                  MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                  MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_110));
                  MR_hl_field(3, base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                *STATE_VARIABLE_Errors_52 = STATE_VARIABLE_Errors_0_51;
                *STATE_VARIABLE_Cache_50 = STATE_VARIABLE_Cache_0_49;
              }
            }
            else
            {
              MR_Word Var_70;
              MR_Word PredInstInfo0_90 = (MR_Word) (MR_body((MR_Word) (HOInstInfo0_111), (MR_Integer) 1));
              MR_Word PredOrFunc_91 = ((MR_Unsigned) ((MR_hl_field(0, PredInstInfo0_90, (MR_Integer) 0))) & (MR_Integer) 1);
              MR_Word Modes0_92 = ((MR_Word) ((MR_hl_field(0, PredInstInfo0_90, (MR_Integer) 1))));
              MR_Word MaybeArgRegs_93 = ((MR_Word) ((MR_hl_field(0, PredInstInfo0_90, (MR_Integer) 2))));
              MR_Word Detism_94 = ((MR_Unsigned) ((MR_hl_field(0, PredInstInfo0_90, (MR_Integer) 3))) & (MR_Integer) 7);
              MR_Word Modes_97;
              MR_Word PredInstInfo_98;
              MR_Word ArgTypes_86;
              MR_Word TypeCtorInfo_116_116;
              MR_Word TypeCtorInfo_117_117;
              MR_Word Var_122;
              MR_Word Var_36;

              succeeded = parse_tree__prog_type_test__type_is_higher_order_details_5_p_0(Type_12, &Var_36, &Var_122, &ArgTypes_86);
              if (succeeded)
              {
                succeeded = (PredOrFunc_91 == Var_122);
                if (succeeded)
                {
                  TypeCtorInfo_116_116 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
                  TypeCtorInfo_117_117 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0);
                  succeeded = mercury__list__same_length_2_p_0(TypeCtorInfo_116_116, TypeCtorInfo_117_117, ArgTypes_86, Modes0_92);
                }
              }
              if (succeeded)
              {
                MR_Word PredFormArity_84;
                MR_Box Args_85;
                void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

                PredFormArity_84 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_86);
                func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_tprop_record_112, (MR_Integer) 0)), (MR_Integer) 7))));
                func_0(((MR_Box) (TypeClassInfo_for_tprop_record_112)), ((MR_Box) (PredOrFunc_91)), ((MR_Box) (PredFormArity_84)), Context_11, &Args_85);
                check_hlds__inst_mode_type_prop__propagate_types_into_modes_10_p_0(TypeClassInfo_for_tprop_record_112, ModuleInfo_10, Args_85, (MR_Integer) 1, ArgTypes_86, Modes0_92, &Modes_97, STATE_VARIABLE_Cache_0_49, STATE_VARIABLE_Cache_50, STATE_VARIABLE_Errors_0_51, STATE_VARIABLE_Errors_52);
              }
              else
              {
                Modes_97 = Modes0_92;
                *STATE_VARIABLE_Errors_52 = STATE_VARIABLE_Errors_0_51;
                *STATE_VARIABLE_Cache_50 = STATE_VARIABLE_Cache_0_49;
              }
              {
                PredInstInfo_98 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, PredInstInfo_98, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_91));
                MR_hl_field(0, PredInstInfo_98, 1) = ((MR_Box) (Modes_97));
                MR_hl_field(0, PredInstInfo_98, 2) = ((MR_Box) (MaybeArgRegs_93));
                MR_hl_field(0, PredInstInfo_98, 3) = (MR_Box) ((MR_Unsigned) (Detism_94));
              }
              Var_70 = (MR_Word) (MR_mkword(1, (MR_Word) (PredInstInfo_98)));
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *Inst_14 = base;
                MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_110));
                MR_hl_field(3, base, 2) = ((MR_Box) (Var_70));
              }
            }
          }
          break;
        case (MR_Integer) 3:
          {
            *Inst_14 = Inst0_13;
            *STATE_VARIABLE_Cache_50 = STATE_VARIABLE_Cache_0_49;
            *STATE_VARIABLE_Errors_52 = STATE_VARIABLE_Errors_0_51;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
check_hlds__inst_mode_type_prop__propagate_type_into_inst_eagerly_10_p_0(
  MR_Word TypeClassInfo_for_tprop_record_149,
  MR_Word ModuleInfo_11,
  MR_Box Context_12,
  MR_Word Type_13,
  MR_Word Constructors_14,
  MR_Word Inst0_15,
  MR_Word * Inst_16,
  MR_Word STATE_VARIABLE_Cache_0_53,
  MR_Word * STATE_VARIABLE_Cache_54,
  MR_Box STATE_VARIABLE_Errors_0_55,
  MR_Box * STATE_VARIABLE_Errors_56)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Inst0_15)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Inst0_15)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *Inst_16 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_Cache_54 = STATE_VARIABLE_Cache_0_53;
              *STATE_VARIABLE_Errors_56 = STATE_VARIABLE_Errors_0_55;
            }
            break;
          case (MR_Integer) 1:
            {
              *Inst_16 = Inst0_15;
              *STATE_VARIABLE_Cache_54 = STATE_VARIABLE_Cache_0_53;
              *STATE_VARIABLE_Errors_56 = STATE_VARIABLE_Errors_0_55;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Uniq_19 = ((MR_Unsigned) ((MR_hl_field(1, Inst0_15, (MR_Integer) 0))) & (MR_Integer) 7);
          MR_Word HOInstInfo0_20 = ((MR_Word) ((MR_hl_field(1, Inst0_15, (MR_Integer) 1))));

          if ((HOInstInfo0_20 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word ArgTypes_23;
            MR_Word Var_164;
            MR_Word Var_21;

            succeeded = parse_tree__prog_type_test__type_is_higher_order_details_5_p_0(Type_13, &Var_21, &Var_164, &ArgTypes_23);
            if (succeeded)
              succeeded = ((MR_Integer) 1 == Var_164);
            if (succeeded)
            {
              MR_Word HigherOrderInstInfo_24;
              MR_Word Var_60;

              check_hlds__inst_mode_type_prop__default_higher_order_func_inst_8_p_0(TypeClassInfo_for_tprop_record_149, ModuleInfo_11, Context_12, ArgTypes_23, &HigherOrderInstInfo_24, STATE_VARIABLE_Cache_0_53, STATE_VARIABLE_Cache_54, STATE_VARIABLE_Errors_0_55, STATE_VARIABLE_Errors_56);
              Var_60 = (MR_Word) (MR_mkword(1, (MR_Word) (HigherOrderInstInfo_24)));
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Inst_16 = base;
                MR_hl_field(1, base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_19));
                MR_hl_field(1, base, 1) = ((MR_Box) (Var_60));
              }
            }
            else
            {
              MR_Word TypeCtor_25;
              MR_Word BoundInsts0_26;
              MR_Word BoundInsts_27;
              MR_Word InstResults_28;
              MR_Word Var_63;
              MR_Word Var_64;
              MR_Word Var_65;
              MR_Word Var_66;
              MR_Word Var_67;
              MR_Word Var_68;
              MR_Word Var_69;

              parse_tree__prog_type__type_to_ctor_det_2_p_0(Type_13, &TypeCtor_25);
              check_hlds__mode_util__constructors_to_bound_insts_5_p_0(ModuleInfo_11, Uniq_19, TypeCtor_25, Constructors_14, &BoundInsts0_26);
              mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0), BoundInsts0_26, &BoundInsts_27);
              Var_64 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0));
              {
                Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_63, 0) = ((MR_Box) (Var_64));
              }
              Var_66 = mercury__set__init_0_f_0((MR_Word) (&check_hlds__inst_mode_type_prop_scalar_common_1[2]));
              {
                Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_65, 0) = ((MR_Box) (Var_66));
              }
              Var_68 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
              {
                Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_67, 0) = ((MR_Box) (Var_68));
              }
              Var_69 = (MR_Word) (MR_mkword(1, (MR_Word) (TypeCtor_25)));
              {
                InstResults_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, InstResults_28, 0) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 2)) | (MR_Unsigned) ((MR_Integer) 0)));
                MR_hl_field(1, InstResults_28, 1) = ((MR_Box) (Var_63));
                MR_hl_field(1, InstResults_28, 2) = ((MR_Box) (Var_65));
                MR_hl_field(1, InstResults_28, 3) = ((MR_Box) (Var_67));
                MR_hl_field(1, InstResults_28, 4) = ((MR_Box) (Var_69));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *Inst_16 = base;
                MR_hl_field(2, base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_19));
                MR_hl_field(2, base, 1) = ((MR_Box) (InstResults_28));
                MR_hl_field(2, base, 2) = ((MR_Box) (BoundInsts_27));
              }
              *STATE_VARIABLE_Errors_56 = STATE_VARIABLE_Errors_0_55;
              *STATE_VARIABLE_Cache_54 = STATE_VARIABLE_Cache_0_53;
            }
          }
          else
          {
            MR_Word PredInstInfo0_29 = (MR_Word) (MR_body((MR_Word) (HOInstInfo0_20), (MR_Integer) 1));
            MR_Word PredOrFunc_30 = ((MR_Unsigned) ((MR_hl_field(0, PredInstInfo0_29, (MR_Integer) 0))) & (MR_Integer) 1);
            MR_Word Modes0_31 = ((MR_Word) ((MR_hl_field(0, PredInstInfo0_29, (MR_Integer) 1))));
            MR_Word MaybeArgRegs_32 = ((MR_Word) ((MR_hl_field(0, PredInstInfo0_29, (MR_Integer) 2))));
            MR_Word Detism_33 = ((MR_Unsigned) ((MR_hl_field(0, PredInstInfo0_29, (MR_Integer) 3))) & (MR_Integer) 7);
            MR_Word Modes_38;
            MR_Word PredInstInfo_39;
            MR_Word Var_73;
            MR_Word ArgTypes_99;
            MR_Word TypeCtorInfo_154_154;
            MR_Word TypeCtorInfo_155_155;
            MR_Word Var_165;
            MR_Word Var_34;

            succeeded = parse_tree__prog_type_test__type_is_higher_order_details_5_p_0(Type_13, &Var_34, &Var_165, &ArgTypes_99);
            if (succeeded)
            {
              succeeded = (PredOrFunc_30 == Var_165);
              if (succeeded)
              {
                TypeCtorInfo_154_154 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
                TypeCtorInfo_155_155 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0);
                succeeded = mercury__list__same_length_2_p_0(TypeCtorInfo_154_154, TypeCtorInfo_155_155, ArgTypes_99, Modes0_31);
              }
            }
            if (succeeded)
            {
              MR_Word PredFormArity_36;
              MR_Box Args_37;

              PredFormArity_36 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_99);
              check_hlds__inst_mode_type_prop__step_into_ho_inst_4_p_0(TypeClassInfo_for_tprop_record_149, PredOrFunc_30, PredFormArity_36, Context_12, &Args_37);
              check_hlds__inst_mode_type_prop__propagate_types_into_modes_10_p_0(TypeClassInfo_for_tprop_record_149, ModuleInfo_11, Args_37, (MR_Integer) 1, ArgTypes_99, Modes0_31, &Modes_38, STATE_VARIABLE_Cache_0_53, STATE_VARIABLE_Cache_54, STATE_VARIABLE_Errors_0_55, STATE_VARIABLE_Errors_56);
            }
            else
            {
              Modes_38 = Modes0_31;
              *STATE_VARIABLE_Errors_56 = STATE_VARIABLE_Errors_0_55;
              *STATE_VARIABLE_Cache_54 = STATE_VARIABLE_Cache_0_53;
            }
            {
              PredInstInfo_39 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, PredInstInfo_39, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_30));
              MR_hl_field(0, PredInstInfo_39, 1) = ((MR_Box) (Modes_38));
              MR_hl_field(0, PredInstInfo_39, 2) = ((MR_Box) (MaybeArgRegs_32));
              MR_hl_field(0, PredInstInfo_39, 3) = (MR_Box) ((MR_Unsigned) (Detism_33));
            }
            Var_73 = (MR_Word) (MR_mkword(1, (MR_Word) (PredInstInfo_39)));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Inst_16 = base;
              MR_hl_field(1, base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_19));
              MR_hl_field(1, base, 1) = ((MR_Box) (Var_73));
            }
          }
        }
        break;
      case (MR_Integer) 2:
        check_hlds__inst_mode_type_prop__propagate_type_into_bound_inst_9_p_0(TypeClassInfo_for_tprop_record_149, ModuleInfo_11, Context_12, Type_13, Inst0_15, Inst_16, STATE_VARIABLE_Cache_0_53, STATE_VARIABLE_Cache_54, STATE_VARIABLE_Errors_0_55, STATE_VARIABLE_Errors_56);
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Inst0_15, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word InstName_51 = ((MR_Word) ((MR_hl_field(3, Inst0_15, (MR_Integer) 1))));
              MR_Word NamedInst_52;
              MR_Word STATE_VARIABLE_Cache_95_95;
              MR_Box STATE_VARIABLE_Errors_96_96;
              MR_Word next_value_of_Inst0_15;
              MR_Word next_value_of_STATE_VARIABLE_Cache_0_53;
              MR_Box next_value_of_STATE_VARIABLE_Errors_0_55;

              check_hlds__inst_mode_type_prop__check_for_bad_use_of_user_inst_8_p_0(TypeClassInfo_for_tprop_record_149, ModuleInfo_11, Context_12, InstName_51, Type_13, STATE_VARIABLE_Cache_0_53, &STATE_VARIABLE_Cache_95_95, STATE_VARIABLE_Errors_0_55, &STATE_VARIABLE_Errors_96_96);
              check_hlds__inst_lookup__inst_lookup_3_p_0(ModuleInfo_11, InstName_51, &NamedInst_52);
              // direct tailcall eliminated
              ;
              next_value_of_Inst0_15 = NamedInst_52;
              next_value_of_STATE_VARIABLE_Cache_0_53 = STATE_VARIABLE_Cache_95_95;
              next_value_of_STATE_VARIABLE_Errors_0_55 = STATE_VARIABLE_Errors_96_96;
              Inst0_15 = next_value_of_Inst0_15;
              STATE_VARIABLE_Cache_0_53 = next_value_of_STATE_VARIABLE_Cache_0_53;
              STATE_VARIABLE_Errors_0_55 = next_value_of_STATE_VARIABLE_Errors_0_55;
              continue;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word InstVars_48 = ((MR_Word) ((MR_hl_field(3, Inst0_15, (MR_Integer) 1))));
              MR_Word SubInst0_49 = ((MR_Word) ((MR_hl_field(3, Inst0_15, (MR_Integer) 2))));
              MR_Word SubInst_50;

              check_hlds__inst_mode_type_prop__propagate_type_into_inst_eagerly_10_p_0(TypeClassInfo_for_tprop_record_149, ModuleInfo_11, Context_12, Type_13, Constructors_14, SubInst0_49, &SubInst_50, STATE_VARIABLE_Cache_0_53, STATE_VARIABLE_Cache_54, STATE_VARIABLE_Errors_0_55, STATE_VARIABLE_Errors_56);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *Inst_16 = base;
                MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(3, base, 1) = ((MR_Box) (InstVars_48));
                MR_hl_field(3, base, 2) = ((MR_Box) (SubInst_50));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Uniq_147 = ((MR_Unsigned) ((MR_hl_field(3, Inst0_15, (MR_Integer) 1))) & (MR_Integer) 7);
              MR_Word HOInstInfo0_148 = ((MR_Word) ((MR_hl_field(3, Inst0_15, (MR_Integer) 2))));

              if ((HOInstInfo0_148 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word ArgTypes_106;
                MR_Word Var_166;
                MR_Word Var_40;

                succeeded = parse_tree__prog_type_test__type_is_higher_order_details_5_p_0(Type_13, &Var_40, &Var_166, &ArgTypes_106);
                if (succeeded)
                  succeeded = ((MR_Integer) 1 == Var_166);
                if (succeeded)
                {
                  MR_Word Var_77;
                  MR_Word PredInstInfo_101;

                  check_hlds__inst_mode_type_prop__default_higher_order_func_inst_8_p_0(TypeClassInfo_for_tprop_record_149, ModuleInfo_11, Context_12, ArgTypes_106, &PredInstInfo_101, STATE_VARIABLE_Cache_0_53, STATE_VARIABLE_Cache_54, STATE_VARIABLE_Errors_0_55, STATE_VARIABLE_Errors_56);
                  Var_77 = (MR_Word) (MR_mkword(1, (MR_Word) (PredInstInfo_101)));
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    *Inst_16 = base;
                    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                    MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_147));
                    MR_hl_field(3, base, 2) = ((MR_Box) (Var_77));
                  }
                }
                else
                {
                  MR_Word Var_80;
                  MR_Word Var_81;
                  MR_Word Var_82;
                  MR_Word Var_83;
                  MR_Word Var_84;
                  MR_Word Var_85;
                  MR_Word Var_86;
                  MR_Word TypeCtor_102;
                  MR_Word BoundInsts0_103;
                  MR_Word BoundInsts_104;
                  MR_Word InstResults_105;

                  parse_tree__prog_type__type_to_ctor_det_2_p_0(Type_13, &TypeCtor_102);
                  check_hlds__mode_util__constructors_to_bound_any_insts_5_p_0(ModuleInfo_11, Uniq_147, TypeCtor_102, Constructors_14, &BoundInsts0_103);
                  mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0), BoundInsts0_103, &BoundInsts_104);
                  Var_81 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0));
                  {
                    Var_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_80, 0) = ((MR_Box) (Var_81));
                  }
                  Var_83 = mercury__set__init_0_f_0((MR_Word) (&check_hlds__inst_mode_type_prop_scalar_common_1[2]));
                  {
                    Var_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_82, 0) = ((MR_Box) (Var_83));
                  }
                  Var_85 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
                  {
                    Var_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_84, 0) = ((MR_Box) (Var_85));
                  }
                  Var_86 = (MR_Word) (MR_mkword(1, (MR_Word) (TypeCtor_102)));
                  {
                    InstResults_105 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, InstResults_105, 0) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 2) << 2)) | (MR_Unsigned) ((MR_Integer) 2)));
                    MR_hl_field(1, InstResults_105, 1) = ((MR_Box) (Var_80));
                    MR_hl_field(1, InstResults_105, 2) = ((MR_Box) (Var_82));
                    MR_hl_field(1, InstResults_105, 3) = ((MR_Box) (Var_84));
                    MR_hl_field(1, InstResults_105, 4) = ((MR_Box) (Var_86));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    *Inst_16 = base;
                    MR_hl_field(2, base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_147));
                    MR_hl_field(2, base, 1) = ((MR_Box) (InstResults_105));
                    MR_hl_field(2, base, 2) = ((MR_Box) (BoundInsts_104));
                  }
                  *STATE_VARIABLE_Errors_56 = STATE_VARIABLE_Errors_0_55;
                  *STATE_VARIABLE_Cache_54 = STATE_VARIABLE_Cache_0_53;
                }
              }
              else
              {
                MR_Word Var_90;
                MR_Word PredInstInfo0_124 = (MR_Word) (MR_body((MR_Word) (HOInstInfo0_148), (MR_Integer) 1));
                MR_Word PredOrFunc_125 = ((MR_Unsigned) ((MR_hl_field(0, PredInstInfo0_124, (MR_Integer) 0))) & (MR_Integer) 1);
                MR_Word Modes0_126 = ((MR_Word) ((MR_hl_field(0, PredInstInfo0_124, (MR_Integer) 1))));
                MR_Word MaybeArgRegs_127 = ((MR_Word) ((MR_hl_field(0, PredInstInfo0_124, (MR_Integer) 2))));
                MR_Word Detism_128 = ((MR_Unsigned) ((MR_hl_field(0, PredInstInfo0_124, (MR_Integer) 3))) & (MR_Integer) 7);
                MR_Word Modes_131;
                MR_Word PredInstInfo_132;
                MR_Word ArgTypes_120;
                MR_Word TypeCtorInfo_161_161;
                MR_Word TypeCtorInfo_162_162;
                MR_Word Var_167;
                MR_Word Var_42;

                succeeded = parse_tree__prog_type_test__type_is_higher_order_details_5_p_0(Type_13, &Var_42, &Var_167, &ArgTypes_120);
                if (succeeded)
                {
                  succeeded = (PredOrFunc_125 == Var_167);
                  if (succeeded)
                  {
                    TypeCtorInfo_161_161 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
                    TypeCtorInfo_162_162 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0);
                    succeeded = mercury__list__same_length_2_p_0(TypeCtorInfo_161_161, TypeCtorInfo_162_162, ArgTypes_120, Modes0_126);
                  }
                }
                if (succeeded)
                {
                  MR_Word PredFormArity_118;
                  MR_Box Args_119;

                  PredFormArity_118 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_120);
                  check_hlds__inst_mode_type_prop__step_into_ho_inst_4_p_0(TypeClassInfo_for_tprop_record_149, PredOrFunc_125, PredFormArity_118, Context_12, &Args_119);
                  check_hlds__inst_mode_type_prop__propagate_types_into_modes_10_p_0(TypeClassInfo_for_tprop_record_149, ModuleInfo_11, Args_119, (MR_Integer) 1, ArgTypes_120, Modes0_126, &Modes_131, STATE_VARIABLE_Cache_0_53, STATE_VARIABLE_Cache_54, STATE_VARIABLE_Errors_0_55, STATE_VARIABLE_Errors_56);
                }
                else
                {
                  Modes_131 = Modes0_126;
                  *STATE_VARIABLE_Errors_56 = STATE_VARIABLE_Errors_0_55;
                  *STATE_VARIABLE_Cache_54 = STATE_VARIABLE_Cache_0_53;
                }
                {
                  PredInstInfo_132 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, PredInstInfo_132, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_125));
                  MR_hl_field(0, PredInstInfo_132, 1) = ((MR_Box) (Modes_131));
                  MR_hl_field(0, PredInstInfo_132, 2) = ((MR_Box) (MaybeArgRegs_127));
                  MR_hl_field(0, PredInstInfo_132, 3) = (MR_Box) ((MR_Unsigned) (Detism_128));
                }
                Var_90 = (MR_Word) (MR_mkword(1, (MR_Word) (PredInstInfo_132)));
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  *Inst_16 = base;
                  MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                  MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_147));
                  MR_hl_field(3, base, 2) = ((MR_Box) (Var_90));
                }
              }
            }
            break;
          case (MR_Integer) 3:
            {
              *Inst_16 = Inst0_15;
              *STATE_VARIABLE_Cache_54 = STATE_VARIABLE_Cache_0_53;
              *STATE_VARIABLE_Errors_56 = STATE_VARIABLE_Errors_0_55;
            }
            break;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__inst_mode_type_prop__propagate_type_into_bound_inst_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_BoundInst_14;
  MR_Word conv1_STATE_VARIABLE_Cache_27;

  check_hlds__inst_mode_type_prop__propagate_types_into_tuple_9_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), (MR_hl_field(0, closure, (MR_Integer) 5)), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), &conv2_BoundInst_14, ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_Cache_27, wrapper_arg_5, wrapper_arg_6);
  *wrapper_arg_2 = ((MR_Box) (conv2_BoundInst_14));
  *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_Cache_27));
}

static void MR_CALL 
check_hlds__inst_mode_type_prop__propagate_type_into_bound_inst_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_BoundInst_4;

  check_hlds__inst_mode_type_prop__propagate_char_type_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_BoundInst_4);
  *wrapper_arg_2 = ((MR_Box) (conv0_BoundInst_4));
}

static void MR_CALL 
check_hlds__inst_mode_type_prop__propagate_type_into_bound_inst_9_p_0(
  MR_Word TypeClassInfo_for_tprop_record_88,
  MR_Word ModuleInfo_10,
  MR_Box Context_11,
  MR_Word Type_12,
  MR_Word Inst0_13,
  MR_Word * Inst_14,
  MR_Word STATE_VARIABLE_Cache_0_57,
  MR_Word * STATE_VARIABLE_Cache_58,
  MR_Box STATE_VARIABLE_Errors_0_59,
  MR_Box * STATE_VARIABLE_Errors_60)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word Uniq_17 = ((MR_Unsigned) ((MR_hl_field(2, Inst0_13, (MR_Integer) 0))) & (MR_Integer) 7);
    MR_Word InstResults0_18 = ((MR_Word) ((MR_hl_field(2, Inst0_13, (MR_Integer) 1))));
    MR_Word BoundInsts0_19 = ((MR_Word) ((MR_hl_field(2, Inst0_13, (MR_Integer) 2))));

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Type_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *Inst_14 = Inst0_13;
          *STATE_VARIABLE_Cache_58 = STATE_VARIABLE_Cache_0_57;
          *STATE_VARIABLE_Errors_60 = STATE_VARIABLE_Errors_0_59;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word SymName_36 = ((MR_Word) ((MR_hl_field(1, Type_12, (MR_Integer) 0))));
          MR_Word ArgTypes_81 = ((MR_Word) ((MR_hl_field(1, Type_12, (MR_Integer) 1))));
          MR_Word TypeModule_37;
          MR_Word TypeCtor_40;
          MR_Word TypeParams_42;
          MR_Word TypeBodyDu_44;
          MR_Word TypeCtorInfo_102_102;
          MR_Word TypeTable_39;
          MR_Word TypeDefn_41;
          MR_Word TypeBody_43;
          MR_Integer Var_65;

          succeeded = ((MR_tag((MR_Word) SymName_36)) == (MR_Integer) 1);
          if (succeeded)
          {
            TypeModule_37 = ((MR_Word) ((MR_hl_field(1, SymName_36, (MR_Integer) 0))));
            hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_10, &TypeTable_39);
            TypeCtorInfo_102_102 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
            Var_65 = mercury__list__length_1_f_0(TypeCtorInfo_102_102, ArgTypes_81);
            {
              TypeCtor_40 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, TypeCtor_40, 0) = ((MR_Box) (SymName_36));
              MR_hl_field(0, TypeCtor_40, 1) = ((MR_Box) (Var_65));
            }
            succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_39, TypeCtor_40, &TypeDefn_41);
            if (succeeded)
            {
              hlds__hlds_data__get_type_defn_tparams_2_p_0(TypeDefn_41, &TypeParams_42);
              hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_41, &TypeBody_43);
              succeeded = ((MR_tag((MR_Word) TypeBody_43)) == (MR_Integer) 0);
              if (succeeded)
                TypeBodyDu_44 = (MR_Word) ((MR_Word) (TypeBody_43));
            }
          }
          if (succeeded)
          {
            MR_Word PropagatedResult0_50;
            MR_Word PropagatedTypeCtor0_51;

            succeeded = ((MR_tag((MR_Word) InstResults0_18)) == (MR_Integer) 1);
            if (succeeded)
            {
              PropagatedResult0_50 = ((MR_Word) ((MR_hl_field(1, InstResults0_18, (MR_Integer) 4))));
              succeeded = (PropagatedResult0_50 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                PropagatedTypeCtor0_51 = (MR_Word) (MR_body((MR_Word) (PropagatedResult0_50), (MR_Integer) 1));
                succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(PropagatedTypeCtor0_51, TypeCtor_40);
                if (succeeded)
                  succeeded = (TypeParams_42 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
            if (succeeded)
            {
              *Inst_14 = Inst0_13;
              *STATE_VARIABLE_Errors_60 = STATE_VARIABLE_Errors_0_59;
              *STATE_VARIABLE_Cache_58 = STATE_VARIABLE_Cache_0_57;
            }
            else
            {
              MR_Word ArgSubst_52;
              MR_Word OoMConstructors_53;
              MR_Word Constructors_54;
              MR_Word BoundInsts1_55;
              MR_Word BoundInsts_73;
              MR_Word PropagatedResult_74;

              mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&check_hlds__inst_mode_type_prop_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TypeParams_42, ArgTypes_81, &ArgSubst_52);
              OoMConstructors_53 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_44, (MR_Integer) 0))));
              Constructors_54 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), OoMConstructors_53);
              check_hlds__inst_mode_type_prop__propagate_subst_type_ctor_into_bound_insts_12_p_0(TypeClassInfo_for_tprop_record_88, ModuleInfo_10, Context_11, ArgSubst_52, TypeCtor_40, TypeModule_37, Constructors_54, BoundInsts0_19, &BoundInsts1_55, STATE_VARIABLE_Cache_0_57, STATE_VARIABLE_Cache_58, STATE_VARIABLE_Errors_0_59, STATE_VARIABLE_Errors_60);
              mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0), BoundInsts1_55, &BoundInsts_73);
              PropagatedResult_74 = (MR_Word) (MR_mkword(1, (MR_Word) (TypeCtor_40)));
              check_hlds__inst_mode_type_prop__construct_new_bound_inst_5_p_0(Uniq_17, InstResults0_18, PropagatedResult_74, BoundInsts_73, Inst_14);
            }
          }
          else
          {
            *Inst_14 = Inst0_13;
            *STATE_VARIABLE_Errors_60 = STATE_VARIABLE_Errors_0_59;
            *STATE_VARIABLE_Cache_58 = STATE_VARIABLE_Cache_0_57;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word BuiltinType_20 = ((MR_Word) ((MR_hl_field(2, Type_12, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) BuiltinType_20)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(BuiltinType_20)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 1:
                  *Inst_14 = Inst0_13;
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word BoundInsts_21;

                    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0), (MR_Word) (&check_hlds__inst_mode_type_prop_scalar_common_2[3]), BoundInsts0_19, &BoundInsts_21);
                    if ((BoundInsts_21 == (MR_Word) ((MR_Unsigned) 0U)))
                      *Inst_14 = (MR_Word) ((MR_Unsigned) 4U);
                    else
                    {
                      MR_Word InstResults_110;

                      switch (MR_tag((MR_Word) InstResults0_18)) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          switch (MR_unmkbody(InstResults0_18)) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 0:
                              InstResults_110 = (MR_Word) (MR_mkword(1, &check_hlds__inst_mode_type_prop_scalar_common_4[1]));
                              break;
                            case (MR_Integer) 1:
                              InstResults_110 = InstResults0_18;
                              break;
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(1, InstResults0_18, (MR_Integer) 0)));

                            {
                              InstResults_110 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, InstResults_110, 0) = (MR_Box) (packed_word_1);
                              MR_hl_field(1, InstResults_110, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                              MR_hl_field(1, InstResults_110, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                              MR_hl_field(1, InstResults_110, 3) = ((MR_Box) ((MR_Unsigned) 0U));
                              MR_hl_field(1, InstResults_110, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                            }
                          }
                          break;
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        *Inst_14 = base;
                        MR_hl_field(2, base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_17));
                        MR_hl_field(2, base, 1) = ((MR_Box) (InstResults_110));
                        MR_hl_field(2, base, 2) = ((MR_Box) (BoundInsts_21));
                      }
                    }
                  }
                  break;
              }
              break;
            case (MR_Integer) 1:
              *Inst_14 = Inst0_13;
              break;
          }
          *STATE_VARIABLE_Cache_58 = STATE_VARIABLE_Cache_0_57;
          *STATE_VARIABLE_Errors_60 = STATE_VARIABLE_Errors_0_59;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Type_12, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word TypeInfo_101_101;
              MR_Word ArgTypes_24 = ((MR_Word) ((MR_hl_field(3, Type_12, (MR_Integer) 1))));
              MR_Word Var_62;
              MR_Word BoundInsts_70;
              MR_Box conv3_STATE_VARIABLE_Cache_58;

              {
                Var_62 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_62, 0) = ((MR_Box) (&check_hlds__inst_mode_type_prop_scalar_common_6[0]));
                MR_hl_field(0, Var_62, 1) = ((MR_Box) (check_hlds__inst_mode_type_prop__propagate_type_into_bound_inst_9_p_0_2));
                MR_hl_field(0, Var_62, 2) = ((MR_Box) ((MR_Integer) 4));
                MR_hl_field(0, Var_62, 3) = ((MR_Box) (TypeClassInfo_for_tprop_record_88));
                MR_hl_field(0, Var_62, 4) = ((MR_Box) (ModuleInfo_10));
                MR_hl_field(0, Var_62, 5) = Context_11;
                MR_hl_field(0, Var_62, 6) = ((MR_Box) (ArgTypes_24));
              }
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_tprop_record_88, (MR_Integer) 3, &TypeInfo_101_101);
              mercury__list__map_foldl2_7_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0), (MR_Word) (&check_hlds__inst_mode_type_prop_scalar_common_2[2]), TypeInfo_101_101, Var_62, BoundInsts0_19, &BoundInsts_70, ((MR_Box) (STATE_VARIABLE_Cache_0_57)), &conv3_STATE_VARIABLE_Cache_58, STATE_VARIABLE_Errors_0_59, STATE_VARIABLE_Errors_60);
              *STATE_VARIABLE_Cache_58 = ((MR_Word) (conv3_STATE_VARIABLE_Cache_58));
              check_hlds__inst_mode_type_prop__construct_new_bound_inst_5_p_0(Uniq_17, InstResults0_18, (MR_Word) ((MR_Unsigned) 0U), BoundInsts_70, Inst_14);
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              *Inst_14 = Inst0_13;
              *STATE_VARIABLE_Cache_58 = STATE_VARIABLE_Cache_0_57;
              *STATE_VARIABLE_Errors_60 = STATE_VARIABLE_Errors_0_59;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word KindedType_56 = ((MR_Word) ((MR_hl_field(3, Type_12, (MR_Integer) 1))));
              MR_Word next_value_of_Type_12 = KindedType_56;

              // direct tailcall eliminated
              ;
              Type_12 = next_value_of_Type_12;
              continue;
            }
            break;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__inst_mode_type_prop__propagate_types_into_modes_10_p_0(
  MR_Word TypeClassInfo_for_tprop_record_68,
  MR_Word ModuleInfo_1,
  MR_Box Args_2,
  MR_Integer ArgNum_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_Cache_0_7,
  MR_Word * STATE_VARIABLE_Cache_8,
  MR_Box STATE_VARIABLE_Errors_0_9,
  MR_Box * STATE_VARIABLE_Errors_10)
{
  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Errors_10 = STATE_VARIABLE_Errors_0_9;
      *STATE_VARIABLE_Cache_8 = STATE_VARIABLE_Cache_0_7;
    }
    else
    {
      *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_mode_type_prop.propagate_types_into_modes\'/10", (MR_String) "length mismatch");
        return;
      }
    }
  else
  {
    MR_Word Var_69 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
    MR_Word Var_70 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));

    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_mode_type_prop.propagate_types_into_modes\'/10", (MR_String) "length mismatch");
        return;
      }
    }
    else
    {
      MR_Word Mode0_51 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 0))));
      MR_Word Modes0_52 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 1))));
      MR_Word Mode_53;
      MR_Word Modes_54;
      MR_Box Context_57;
      MR_Word STATE_VARIABLE_Cache_62_62;
      MR_Box STATE_VARIABLE_Errors_63_63;
      MR_Integer Var_64;
      MR_Word InitialInst0_71;
      MR_Word FinalInst0_72;
      MR_Word InitialInst_73;
      MR_Word FinalInst_74;
      MR_Word STATE_VARIABLE_Cache_25_75;
      MR_Box STATE_VARIABLE_Errors_26_76;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_tprop_record_68, (MR_Integer) 0)), (MR_Integer) 8))));

      func_0(((MR_Box) (TypeClassInfo_for_tprop_record_68)), Args_2, ((MR_Box) (ArgNum_3)), &Context_57);
      check_hlds__mode_util__mode_get_insts_4_p_0(ModuleInfo_1, Mode0_51, &InitialInst0_71, &FinalInst0_72);
      check_hlds__inst_mode_type_prop__propagate_type_into_inst_lazily_9_p_0(TypeClassInfo_for_tprop_record_68, ModuleInfo_1, Context_57, Var_70, InitialInst0_71, &InitialInst_73, STATE_VARIABLE_Cache_0_7, &STATE_VARIABLE_Cache_25_75, STATE_VARIABLE_Errors_0_9, &STATE_VARIABLE_Errors_26_76);
      check_hlds__inst_mode_type_prop__propagate_type_into_inst_lazily_9_p_0(TypeClassInfo_for_tprop_record_68, ModuleInfo_1, Context_57, Var_70, FinalInst0_72, &FinalInst_74, STATE_VARIABLE_Cache_25_75, &STATE_VARIABLE_Cache_62_62, STATE_VARIABLE_Errors_26_76, &STATE_VARIABLE_Errors_63_63);
      {
        Mode_53 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Mode_53, 0) = ((MR_Box) (InitialInst_73));
        MR_hl_field(0, Mode_53, 1) = ((MR_Box) (FinalInst_74));
      }
      Var_64 = (MR_Integer) ((MR_Unsigned) ArgNum_3 + (MR_Unsigned) 1);
      check_hlds__inst_mode_type_prop__propagate_types_into_modes_10_p_0(TypeClassInfo_for_tprop_record_68, ModuleInfo_1, Args_2, Var_64, Var_69, Modes0_52, &Modes_54, STATE_VARIABLE_Cache_62_62, STATE_VARIABLE_Cache_8, STATE_VARIABLE_Errors_63_63, STATE_VARIABLE_Errors_10);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__6_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Mode_53));
        MR_hl_field(1, base, 1) = ((MR_Box) (Modes_54));
      }
    }
  }
}

static void MR_CALL 
check_hlds__inst_mode_type_prop__propagate_subst_type_ctor_into_bound_insts_12_p_0(
  MR_Word TypeClassInfo_for_tprop_record_65,
  MR_Word ModuleInfo_1,
  MR_Box Context_2,
  MR_Word Subst_3,
  MR_Word TypeCtor_4,
  MR_Word TypeModule_5,
  MR_Word Constructors_6,
  MR_Word HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word STATE_VARIABLE_Cache_0_9,
  MR_Word * STATE_VARIABLE_Cache_10,
  MR_Box STATE_VARIABLE_Errors_0_11,
  MR_Box * STATE_VARIABLE_Errors_12)
{
  MR_bool succeeded;

  if ((HeadVar__7_7 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__8_8 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Errors_12 = STATE_VARIABLE_Errors_0_11;
    *STATE_VARIABLE_Cache_10 = STATE_VARIABLE_Cache_0_9;
  }
  else
  {
    MR_Word BoundInst0_31 = ((MR_Word) ((MR_hl_field(1, HeadVar__7_7, (MR_Integer) 0))));
    MR_Word BoundInsts0_32 = ((MR_Word) ((MR_hl_field(1, HeadVar__7_7, (MR_Integer) 1))));
    MR_Word BoundInst_33;
    MR_Word BoundInsts_34;
    MR_Word ConsId0_37 = ((MR_Word) ((MR_hl_field(0, BoundInst0_31, (MR_Integer) 0))));
    MR_Word ArgInsts0_38 = ((MR_Word) ((MR_hl_field(0, BoundInst0_31, (MR_Integer) 1))));
    MR_Word ConsId_42;
    MR_Word STATE_VARIABLE_Cache_63_63;
    MR_Box STATE_VARIABLE_Errors_64_64;
    MR_String Name_39;
    MR_Integer ConsArity_40;
    MR_Word Var_60;
    MR_Word MatchingConstructor_46;
    MR_Word ConsName_43;
    MR_Integer Arity_44;

    succeeded = ((((MR_tag((MR_Word) ConsId0_37)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConsId0_37, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (succeeded)
    {
      Var_60 = ((MR_Word) ((MR_hl_field(3, ConsId0_37, (MR_Integer) 1))));
      ConsArity_40 = ((MR_Integer) ((MR_hl_field(3, ConsId0_37, (MR_Integer) 2))));
      succeeded = ((MR_tag((MR_Word) Var_60)) == (MR_Integer) 0);
      if (succeeded)
        Name_39 = ((MR_String) ((MR_hl_field(0, Var_60, (MR_Integer) 0))));
    }
    if (succeeded)
    {
      MR_Word Var_61;

      {
        Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_61, 0) = ((MR_Box) (TypeModule_5));
        MR_hl_field(1, Var_61, 1) = ((MR_Box) (Name_39));
      }
      {
        ConsId_42 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, ConsId_42, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(3, ConsId_42, 1) = ((MR_Box) (Var_61));
        MR_hl_field(3, ConsId_42, 2) = ((MR_Box) (ConsArity_40));
        MR_hl_field(3, ConsId_42, 3) = ((MR_Box) (TypeCtor_4));
      }
    }
    else
      ConsId_42 = ConsId0_37;
    succeeded = ((((MR_tag((MR_Word) ConsId_42)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConsId_42, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (succeeded)
    {
      ConsName_43 = ((MR_Word) ((MR_hl_field(3, ConsId_42, (MR_Integer) 1))));
      Arity_44 = ((MR_Integer) ((MR_hl_field(3, ConsId_42, (MR_Integer) 2))));
      succeeded = check_hlds__inst_mode_type_prop__find_first_matching_constructor_4_p_0(ConsName_43, Arity_44, Constructors_6, &MatchingConstructor_46);
    }
    if (succeeded)
    {
      MR_Word CtorArgs_50 = ((MR_Word) ((MR_hl_field(0, MatchingConstructor_46, (MR_Integer) 3))));
      MR_Word ArgTypes_53;
      MR_Box Args_54;
      MR_Word ArgInsts_55;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

      check_hlds__inst_mode_type_prop__get_constructor_arg_types_2_p_0(CtorArgs_50, &ArgTypes_53);
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_tprop_record_65, (MR_Integer) 0)), (MR_Integer) 5))));
      func_0(((MR_Box) (TypeClassInfo_for_tprop_record_65)), ((MR_Box) (ConsId_42)), Context_2, &Args_54);
      check_hlds__inst_mode_type_prop__propagate_subst_types_into_insts_11_p_0(TypeClassInfo_for_tprop_record_65, ModuleInfo_1, Args_54, (MR_Integer) 1, Subst_3, ArgTypes_53, ArgInsts0_38, &ArgInsts_55, STATE_VARIABLE_Cache_0_9, &STATE_VARIABLE_Cache_63_63, STATE_VARIABLE_Errors_0_11, &STATE_VARIABLE_Errors_64_64);
      {
        BoundInst_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, BoundInst_33, 0) = ((MR_Box) (ConsId_42));
        MR_hl_field(0, BoundInst_33, 1) = ((MR_Box) (ArgInsts_55));
      }
    }
    else
    {
      {
        BoundInst_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, BoundInst_33, 0) = ((MR_Box) (ConsId_42));
        MR_hl_field(0, BoundInst_33, 1) = ((MR_Box) (ArgInsts0_38));
      }
      STATE_VARIABLE_Errors_64_64 = STATE_VARIABLE_Errors_0_11;
      STATE_VARIABLE_Cache_63_63 = STATE_VARIABLE_Cache_0_9;
    }
    check_hlds__inst_mode_type_prop__propagate_subst_type_ctor_into_bound_insts_12_p_0(TypeClassInfo_for_tprop_record_65, ModuleInfo_1, Context_2, Subst_3, TypeCtor_4, TypeModule_5, Constructors_6, BoundInsts0_32, &BoundInsts_34, STATE_VARIABLE_Cache_63_63, STATE_VARIABLE_Cache_10, STATE_VARIABLE_Errors_64_64, STATE_VARIABLE_Errors_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__8_8 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (BoundInst_33));
      MR_hl_field(1, base, 1) = ((MR_Box) (BoundInsts_34));
    }
  }
}

static void MR_CALL 
check_hlds__inst_mode_type_prop__default_higher_order_func_inst_8_p_0(
  MR_Word TypeClassInfo_for_tprop_record_44,
  MR_Word ModuleInfo_9,
  MR_Box Context_10,
  MR_Word PredArgTypes_11,
  MR_Word * PredInstInfo_12,
  MR_Word STATE_VARIABLE_Cache_0_25,
  MR_Word * STATE_VARIABLE_Cache_26,
  MR_Box STATE_VARIABLE_Errors_0_27,
  MR_Box * STATE_VARIABLE_Errors_28)
{
  MR_Integer NumPredArgs_18;
  MR_Integer NumFuncArgs_19;
  MR_Word FuncArgModes_20;
  MR_Word PredArgModes0_22;
  MR_Box Args_23;
  MR_Word PredArgModes_24;
  MR_Word Var_37;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), PredArgTypes_11, &NumPredArgs_18);
  NumFuncArgs_19 = (MR_Integer) ((MR_Unsigned) NumPredArgs_18 - (MR_Unsigned) 1);
  mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), NumFuncArgs_19, ((MR_Box) (&check_hlds__inst_mode_type_prop_scalar_common_1[38])), &FuncArgModes_20);
  PredArgModes0_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), FuncArgModes_20, (MR_Word) (MR_mkword(1, &check_hlds__inst_mode_type_prop_scalar_common_1[39])));
  Var_37 = (MR_Word) (NumPredArgs_18);
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_tprop_record_44, (MR_Integer) 0)), (MR_Integer) 7))));
  func_0(((MR_Box) (TypeClassInfo_for_tprop_record_44)), ((MR_Box) ((MR_Integer) 1)), ((MR_Box) (Var_37)), Context_10, &Args_23);
  check_hlds__inst_mode_type_prop__propagate_types_into_modes_10_p_0(TypeClassInfo_for_tprop_record_44, ModuleInfo_9, Args_23, (MR_Integer) 1, PredArgTypes_11, PredArgModes0_22, &PredArgModes_24, STATE_VARIABLE_Cache_0_25, STATE_VARIABLE_Cache_26, STATE_VARIABLE_Errors_0_27, STATE_VARIABLE_Errors_28);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    *PredInstInfo_12 = base;
    MR_hl_field(0, base, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(0, base, 1) = ((MR_Box) (PredArgModes_24));
    MR_hl_field(0, base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
}

static void MR_CALL 
check_hlds__inst_mode_type_prop__propagate_subst_types_into_insts_11_p_0(
  MR_Word TypeClassInfo_for_tprop_record_73,
  MR_Word ModuleInfo_1,
  MR_Box Args_2,
  MR_Integer ArgNum_3,
  MR_Word Subst_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_Cache_0_8,
  MR_Word * STATE_VARIABLE_Cache_9,
  MR_Box STATE_VARIABLE_Errors_0_10,
  MR_Box * STATE_VARIABLE_Errors_11)
{
  MR_bool succeeded;

  if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Errors_11 = STATE_VARIABLE_Errors_0_10;
      *STATE_VARIABLE_Cache_9 = STATE_VARIABLE_Cache_0_8;
    }
    else
    {
      *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_mode_type_prop.propagate_subst_types_into_insts\'/11", (MR_String) "length mismatch");
        return;
      }
    }
  else
  {
    MR_Word Var_74 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 1))));
    MR_Word Var_75 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 0))));

    if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_mode_type_prop.propagate_subst_types_into_insts\'/11", (MR_String) "length mismatch");
        return;
      }
    }
    else
    {
      MR_Word Inst0_56 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, (MR_Integer) 0))));
      MR_Word Insts0_57 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, (MR_Integer) 1))));
      MR_Word Inst_58;
      MR_Word Insts_59;
      MR_Box Context_62;
      MR_Word STATE_VARIABLE_Cache_67_67;
      MR_Box STATE_VARIABLE_Errors_68_68;
      MR_Integer Var_69;
      MR_Word Type_76;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_tprop_record_73, (MR_Integer) 0)), (MR_Integer) 8))));

      func_0(((MR_Box) (TypeClassInfo_for_tprop_record_73)), Args_2, ((MR_Box) (ArgNum_3)), &Context_62);
      succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&check_hlds__inst_mode_type_prop_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Subst_4);
      if (succeeded)
        Type_76 = Var_75;
      else
        parse_tree__prog_type_subst__apply_subst_to_type_3_p_0(Subst_4, Var_75, &Type_76);
      check_hlds__inst_mode_type_prop__propagate_type_into_inst_9_p_0(TypeClassInfo_for_tprop_record_73, ModuleInfo_1, Context_62, Type_76, Inst0_56, &Inst_58, STATE_VARIABLE_Cache_0_8, &STATE_VARIABLE_Cache_67_67, STATE_VARIABLE_Errors_0_10, &STATE_VARIABLE_Errors_68_68);
      Var_69 = (MR_Integer) ((MR_Unsigned) ArgNum_3 + (MR_Unsigned) 1);
      check_hlds__inst_mode_type_prop__propagate_subst_types_into_insts_11_p_0(TypeClassInfo_for_tprop_record_73, ModuleInfo_1, Args_2, Var_69, Subst_4, Var_74, Insts0_57, &Insts_59, STATE_VARIABLE_Cache_67_67, STATE_VARIABLE_Cache_9, STATE_VARIABLE_Errors_68_68, STATE_VARIABLE_Errors_11);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__7_7 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Inst_58));
        MR_hl_field(1, base, 1) = ((MR_Box) (Insts_59));
      }
    }
  }
}

static void MR_CALL 
check_hlds__inst_mode_type_prop__check_for_bad_use_of_user_inst_8_p_0(
  MR_Word TypeClassInfo_for_tprop_record_9,
  MR_Word HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Box HeadVar__7_7,
  MR_Box * HeadVar__8_8)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_tprop_record_9, (MR_Integer) 0)), (MR_Integer) 10))));
  MR_Box conv1_HeadVar__6_6;

  func_0(((MR_Box) (TypeClassInfo_for_tprop_record_9)), ((MR_Box) (HeadVar__1_1)), HeadVar__2_2, ((MR_Box) (HeadVar__3_3)), ((MR_Box) (HeadVar__4_4)), ((MR_Box) (HeadVar__5_5)), &conv1_HeadVar__6_6, HeadVar__7_7, HeadVar__8_8);
  *HeadVar__6_6 = ((MR_Word) (conv1_HeadVar__6_6));
}

static void MR_CALL 
check_hlds__inst_mode_type_prop__step_into_ho_inst_4_p_0(
  MR_Word TypeClassInfo_for_tprop_record_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_tprop_record_5, (MR_Integer) 0)), (MR_Integer) 7))));

  func_0(((MR_Box) (TypeClassInfo_for_tprop_record_5)), ((MR_Box) (HeadVar__1_1)), ((MR_Box) (HeadVar__2_2)), HeadVar__3_3, HeadVar__4_4);
}

static void MR_CALL 
check_hlds__inst_mode_type_prop__get_constructor_arg_types_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Arg_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Args_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgType_5 = ((MR_Word) ((MR_hl_field(0, Arg_3, (MR_Integer) 1))));
    MR_Word ArgTypes_6;

    check_hlds__inst_mode_type_prop__get_constructor_arg_types_2_p_0(Args_4, &ArgTypes_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ArgType_5));
      MR_hl_field(1, base, 1) = ((MR_Box) (ArgTypes_6));
    }
  }
}

static MR_bool MR_CALL 
check_hlds__inst_mode_type_prop__find_first_matching_constructor_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__3_3 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Ctor_10;
    MR_Word Ctors_11;
    MR_Word Var_17;
    MR_Integer Var_18;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Ctor_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      Ctors_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      Var_17 = ((MR_Word) ((MR_hl_field(0, Ctor_10, (MR_Integer) 2))));
      Var_18 = ((MR_Integer) ((MR_hl_field(0, Ctor_10, (MR_Integer) 4))));
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(HeadVar__1_1, Var_17);
      if (succeeded)
        succeeded = (HeadVar__2_2 == Var_18);
      if (succeeded)
      {
        *HeadVar__4_4 = Ctor_10;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word next_value_of_HeadVar__3_3 = Ctors_11;

        // direct tailcall eliminated
        ;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
check_hlds__inst_mode_type_prop__construct_new_bound_inst_5_p_0(
  MR_Word Uniq_6,
  MR_Word InstResults0_7,
  MR_Word PropagatedResult_8,
  MR_Word BoundInsts_9,
  MR_Word * Inst_10)
{
  if ((BoundInsts_9 == (MR_Word) ((MR_Unsigned) 0U)))
    *Inst_10 = (MR_Word) ((MR_Unsigned) 4U);
  else
  {
    MR_Word InstResults_13;

    switch (MR_tag((MR_Word) InstResults0_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(InstResults0_7)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              InstResults_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, InstResults_13, 0) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 2) << 2)) | (MR_Unsigned) ((MR_Integer) 2)));
              MR_hl_field(1, InstResults_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(1, InstResults_13, 2) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(1, InstResults_13, 3) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(1, InstResults_13, 4) = ((MR_Box) (PropagatedResult_8));
            }
            break;
          case (MR_Integer) 1:
            InstResults_13 = InstResults0_7;
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(1, InstResults0_7, (MR_Integer) 0)));

          {
            InstResults_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, InstResults_13, 0) = (MR_Box) (packed_word_0);
            MR_hl_field(1, InstResults_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(1, InstResults_13, 2) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(1, InstResults_13, 3) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(1, InstResults_13, 4) = ((MR_Box) (PropagatedResult_8));
          }
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      *Inst_10 = base;
      MR_hl_field(2, base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_6));
      MR_hl_field(2, base, 1) = ((MR_Box) (InstResults_13));
      MR_hl_field(2, base, 2) = ((MR_Box) (BoundInsts_9));
    }
  }
}

static MR_bool MR_CALL 
check_hlds__inst_mode_type_prop____Unify____maybe_inside_user_inst_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__inst_mode_type_prop____Unify____maybe_inside_user_inst_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__inst_mode_type_prop____Compare____maybe_inside_user_inst_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__inst_mode_type_prop____Compare____maybe_inside_user_inst_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__inst_mode_type_prop____Unify____tprop_args_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__inst_mode_type_prop____Unify____tprop_args_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__inst_mode_type_prop____Compare____tprop_args_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__inst_mode_type_prop____Compare____tprop_args_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__inst_mode_type_prop____Unify____tprop_cache_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__inst_mode_type_prop____Unify____tprop_cache_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__inst_mode_type_prop____Compare____tprop_cache_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__inst_mode_type_prop____Compare____tprop_cache_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__inst_mode_type_prop____Unify____tprop_cache_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__inst_mode_type_prop____Unify____tprop_cache_result_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__inst_mode_type_prop____Compare____tprop_cache_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__inst_mode_type_prop____Compare____tprop_cache_result_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__inst_mode_type_prop____Unify____tprop_context_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__inst_mode_type_prop____Unify____tprop_context_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__inst_mode_type_prop____Compare____tprop_context_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__inst_mode_type_prop____Compare____tprop_context_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__inst_mode_type_prop____Unify____tprop_errors_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__inst_mode_type_prop____Unify____tprop_errors_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__inst_mode_type_prop____Compare____tprop_errors_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__inst_mode_type_prop____Compare____tprop_errors_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__inst_mode_type_prop____Unify____user_inst_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__inst_mode_type_prop____Unify____user_inst_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__inst_mode_type_prop____Compare____user_inst_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__inst_mode_type_prop____Compare____user_inst_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static void MR_CALL 
check_hlds__inst_mode_type_prop__ClassMethod_for_check_hlds__inst_mode_type_prop__tprop_record____check_hlds__inst_mode_type_prop__tprop_context__arity0__check_hlds__inst_mode_type_prop__tprop_args__arity0__check_hlds__inst_mode_type_prop__tprop_errors__arity0______check_hlds__inst_mode_type_prop__step_into_bound_inst_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  check_hlds__inst_mode_type_prop__ClassMethod_for_check_hlds__inst_mode_type_prop__tprop_record____check_hlds__inst_mode_type_prop__tprop_context__arity0__check_hlds__inst_mode_type_prop__tprop_args__arity0__check_hlds__inst_mode_type_prop__tprop_errors__arity0______check_hlds__inst_mode_type_prop__step_into_bound_inst_3_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
}

static void MR_CALL 
check_hlds__inst_mode_type_prop__ClassMethod_for_check_hlds__inst_mode_type_prop__tprop_record____check_hlds__inst_mode_type_prop__tprop_context__arity0__check_hlds__inst_mode_type_prop__tprop_args__arity0__check_hlds__inst_mode_type_prop__tprop_errors__arity0______check_hlds__inst_mode_type_prop__step_into_tuple_inst_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  check_hlds__inst_mode_type_prop__ClassMethod_for_check_hlds__inst_mode_type_prop__tprop_record____check_hlds__inst_mode_type_prop__tprop_context__arity0__check_hlds__inst_mode_type_prop__tprop_args__arity0__check_hlds__inst_mode_type_prop__tprop_errors__arity0______check_hlds__inst_mode_type_prop__step_into_tuple_inst_2_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
}

static void MR_CALL 
check_hlds__inst_mode_type_prop__ClassMethod_for_check_hlds__inst_mode_type_prop__tprop_record____check_hlds__inst_mode_type_prop__tprop_context__arity0__check_hlds__inst_mode_type_prop__tprop_args__arity0__check_hlds__inst_mode_type_prop__tprop_errors__arity0______check_hlds__inst_mode_type_prop__step_into_ho_inst_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__4_4;

  check_hlds__inst_mode_type_prop__ClassMethod_for_check_hlds__inst_mode_type_prop__tprop_record____check_hlds__inst_mode_type_prop__tprop_context__arity0__check_hlds__inst_mode_type_prop__tprop_args__arity0__check_hlds__inst_mode_type_prop__tprop_errors__arity0______check_hlds__inst_mode_type_prop__step_into_ho_inst_4_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_HeadVar__4_4);
  *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
}

static void MR_CALL 
check_hlds__inst_mode_type_prop__ClassMethod_for_check_hlds__inst_mode_type_prop__tprop_record____check_hlds__inst_mode_type_prop__tprop_context__arity0__check_hlds__inst_mode_type_prop__tprop_args__arity0__check_hlds__inst_mode_type_prop__tprop_errors__arity0______check_hlds__inst_mode_type_prop__args_slot_to_context_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  check_hlds__inst_mode_type_prop__ClassMethod_for_check_hlds__inst_mode_type_prop__tprop_record____check_hlds__inst_mode_type_prop__tprop_context__arity0__check_hlds__inst_mode_type_prop__tprop_args__arity0__check_hlds__inst_mode_type_prop__tprop_errors__arity0______check_hlds__inst_mode_type_prop__args_slot_to_context_3_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv0_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
}

static MR_bool MR_CALL 
check_hlds__inst_mode_type_prop__ClassMethod_for_check_hlds__inst_mode_type_prop__tprop_record____check_hlds__inst_mode_type_prop__tprop_context__arity0__check_hlds__inst_mode_type_prop__tprop_args__arity0__check_hlds__inst_mode_type_prop__tprop_errors__arity0______check_hlds__inst_mode_type_prop__user_inst_expansion_to_context_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  succeeded = check_hlds__inst_mode_type_prop__ClassMethod_for_check_hlds__inst_mode_type_prop__tprop_record____check_hlds__inst_mode_type_prop__tprop_context__arity0__check_hlds__inst_mode_type_prop__tprop_args__arity0__check_hlds__inst_mode_type_prop__tprop_errors__arity0______check_hlds__inst_mode_type_prop__user_inst_expansion_to_context_3_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_3);
  if (succeeded)
  {
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__inst_mode_type_prop__ClassMethod_for_check_hlds__inst_mode_type_prop__tprop_record____check_hlds__inst_mode_type_prop__tprop_context__arity0__check_hlds__inst_mode_type_prop__tprop_args__arity0__check_hlds__inst_mode_type_prop__tprop_errors__arity0______check_hlds__inst_mode_type_prop__check_for_bad_use_of_user_inst_8_8_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__6_6;
  MR_Word conv0_HeadVar__8_8;

  check_hlds__inst_mode_type_prop__ClassMethod_for_check_hlds__inst_mode_type_prop__tprop_record____check_hlds__inst_mode_type_prop__tprop_context__arity0__check_hlds__inst_mode_type_prop__tprop_args__arity0__check_hlds__inst_mode_type_prop__tprop_errors__arity0______check_hlds__inst_mode_type_prop__check_for_bad_use_of_user_inst_8_8_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)), &conv1_HeadVar__6_6, ((MR_Word) (wrapper_arg_7)), &conv0_HeadVar__8_8);
  *wrapper_arg_6 = ((MR_Box) (conv1_HeadVar__6_6));
  *wrapper_arg_8 = ((MR_Box) (conv0_HeadVar__8_8));
}

static void MR_CALL 
check_hlds__inst_mode_type_prop__ClassMethod_for_check_hlds__inst_mode_type_prop__tprop_record____unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______check_hlds__inst_mode_type_prop__step_into_bound_inst_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  check_hlds__inst_mode_type_prop__ClassMethod_for_check_hlds__inst_mode_type_prop__tprop_record____unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______check_hlds__inst_mode_type_prop__step_into_bound_inst_3_3_p_0(((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
check_hlds__inst_mode_type_prop__ClassMethod_for_check_hlds__inst_mode_type_prop__tprop_record____unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______check_hlds__inst_mode_type_prop__step_into_tuple_inst_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;

  check_hlds__inst_mode_type_prop__ClassMethod_for_check_hlds__inst_mode_type_prop__tprop_record____unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______check_hlds__inst_mode_type_prop__step_into_tuple_inst_2_2_p_0();
}

static void MR_CALL 
check_hlds__inst_mode_type_prop__ClassMethod_for_check_hlds__inst_mode_type_prop__tprop_record____unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______check_hlds__inst_mode_type_prop__step_into_ho_inst_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  check_hlds__inst_mode_type_prop__ClassMethod_for_check_hlds__inst_mode_type_prop__tprop_record____unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______check_hlds__inst_mode_type_prop__step_into_ho_inst_4_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
check_hlds__inst_mode_type_prop__ClassMethod_for_check_hlds__inst_mode_type_prop__tprop_record____unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______check_hlds__inst_mode_type_prop__args_slot_to_context_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  check_hlds__inst_mode_type_prop__ClassMethod_for_check_hlds__inst_mode_type_prop__tprop_record____unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______check_hlds__inst_mode_type_prop__args_slot_to_context_3_3_p_0(((MR_Integer) (wrapper_arg_2)));
}

static MR_bool MR_CALL 
check_hlds__inst_mode_type_prop__ClassMethod_for_check_hlds__inst_mode_type_prop__tprop_record____unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______check_hlds__inst_mode_type_prop__user_inst_expansion_to_context_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__inst_mode_type_prop__ClassMethod_for_check_hlds__inst_mode_type_prop__tprop_record____unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______check_hlds__inst_mode_type_prop__user_inst_expansion_to_context_3_3_p_0(((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__inst_mode_type_prop__ClassMethod_for_check_hlds__inst_mode_type_prop__tprop_record____unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______check_hlds__inst_mode_type_prop__check_for_bad_use_of_user_inst_8_8_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Cache_6;

  check_hlds__inst_mode_type_prop__ClassMethod_for_check_hlds__inst_mode_type_prop__tprop_record____unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______check_hlds__inst_mode_type_prop__check_for_bad_use_of_user_inst_8_8_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)), &conv0_Cache_6);
  *wrapper_arg_6 = ((MR_Box) (conv0_Cache_6));
}

void mercury__check_hlds__inst_mode_type_prop__init(void)
{
}

void mercury__check_hlds__inst_mode_type_prop__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__type_ctor_info_maybe_inside_user_inst_0);
	MR_register_type_ctor_info(&check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__type_ctor_info_tprop_args_0);
	MR_register_type_ctor_info(&check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__type_ctor_info_tprop_cache_0);
	MR_register_type_ctor_info(&check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__type_ctor_info_tprop_cache_result_0);
	MR_register_type_ctor_info(&check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__type_ctor_info_tprop_context_0);
	MR_register_type_ctor_info(&check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__type_ctor_info_tprop_errors_0);
	MR_register_type_ctor_info(&check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__type_ctor_info_user_inst_info_0);
}

void mercury__check_hlds__inst_mode_type_prop__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__inst_mode_type_prop__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module check_hlds.inst_mode_type_prop.
