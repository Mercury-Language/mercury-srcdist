/*
** Automatically generated from `inst_mode_type_prop.m'
** by the Mercury compiler,
** version rotd-2026-06-03
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


// :- module hlds.inst_mode_type_prop.
// :- implementation.

/*
INIT mercury__hlds__inst_mode_type_prop__init
ENDINIT
*/

#include "hlds.inst_mode_type_prop.mih"


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
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.error_msg_inst.mih"
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
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.inst_lookup.mih"
#include "hlds.instmap.mih"
#include "hlds.mode_util.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.type_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_util.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.error_type_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_type.mih"
#include "parse_tree.parse_tree_output.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.prog_type_test.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.record_uses.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_PseudoTypeInfo_Struct1 hlds__inst_mode_type_prop__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__inst_mode_type_prop__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_inst_0;

static const MR_FA_TypeInfo_Struct2 hlds__inst_mode_type_prop__tree234__ti_tree234_2list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_inst_0hlds__inst_mode_type_prop__type_ctor_info_tprop_cache_result_0;

static const MR_FA_TypeInfo_Struct2 hlds__inst_mode_type_prop__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_inst_0hlds__inst_mode_type_prop__type_ctor_info_tprop_cache_result_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__inst_mode_type_prop__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_inst_0hlds__inst_mode_type_prop__type_ctor_info_tprop_cache_result_0;

static const MR_Integer hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__functor_number_map_base_info_0[1];

static const MR_NotagFunctorDesc hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__notag_functor_desc_base_info_0;

static const MR_EnumFunctorDesc hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__enum_functor_desc_maybe_inside_user_inst_0_0;

static const MR_EnumFunctorDesc hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__enum_functor_desc_maybe_inside_user_inst_0_1;

static const MR_EnumFunctorDescPtr hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__enum_ordinal_ordered_maybe_inside_user_inst_0[2];

static const MR_EnumFunctorDescPtr hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__enum_name_ordered_maybe_inside_user_inst_0[2];

static const MR_Integer hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__functor_number_map_maybe_inside_user_inst_0[2];

static const MR_PseudoTypeInfo hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__field_types_tprop_args_0_0[1];

static const MR_DuFunctorDesc hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__du_functor_desc_tprop_args_0_0;

static const MR_PseudoTypeInfo hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__field_types_tprop_args_0_1[3];

static const MR_DuArgLocn hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__field_locns_tprop_args_0_1[3];

static const MR_DuFunctorDesc hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__du_functor_desc_tprop_args_0_1;

static const MR_PseudoTypeInfo hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__field_types_tprop_args_0_2[2];

static const MR_DuFunctorDesc hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__du_functor_desc_tprop_args_0_2;

static const MR_PseudoTypeInfo hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__field_types_tprop_args_0_3[1];

static const MR_DuFunctorDesc hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__du_functor_desc_tprop_args_0_3;

static const MR_PseudoTypeInfo hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__field_types_tprop_args_0_4[3];

static const MR_DuArgLocn hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__field_locns_tprop_args_0_4[3];

static const MR_DuFunctorDesc hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__du_functor_desc_tprop_args_0_4;

static const MR_DuFunctorDescPtr hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__du_stag_ordered_tprop_args_0_0[1];

static const MR_DuFunctorDescPtr hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__du_stag_ordered_tprop_args_0_1[1];

static const MR_DuFunctorDescPtr hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__du_stag_ordered_tprop_args_0_2[1];

static const MR_DuFunctorDescPtr hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__du_stag_ordered_tprop_args_0_3[2];

static const MR_DuPtagLayout hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__du_ptag_ordered_tprop_args_0[4];

static const MR_DuFunctorDescPtr hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__du_name_ordered_tprop_args_0[5];

static const MR_Integer hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__functor_number_map_tprop_args_0[5];

static const MR_FA_TypeInfo_Struct2 hlds__inst_mode_type_prop__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_mer_type_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_inst_0hlds__inst_mode_type_prop__type_ctor_info_tprop_cache_result_0;

static const MR_DuFunctorDesc hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__du_functor_desc_tprop_cache_result_0_0;

static const MR_PseudoTypeInfo hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__field_types_tprop_cache_result_0_1[3];

static const MR_DuFunctorDesc hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__du_functor_desc_tprop_cache_result_0_1;

static const MR_DuFunctorDescPtr hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__du_stag_ordered_tprop_cache_result_0_0[1];

static const MR_DuFunctorDescPtr hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__du_stag_ordered_tprop_cache_result_0_1[1];

static const MR_DuPtagLayout hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__du_ptag_ordered_tprop_cache_result_0[2];

static const MR_DuFunctorDescPtr hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__du_name_ordered_tprop_cache_result_0[2];

static const MR_Integer hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__functor_number_map_tprop_cache_result_0[2];

static const MR_PseudoTypeInfo hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__field_types_tprop_context_0_0[2];

static const MR_DuFunctorDesc hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__du_functor_desc_tprop_context_0_0;

static const MR_PseudoTypeInfo hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__field_types_tprop_context_0_1[2];

static const MR_DuFunctorDesc hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__du_functor_desc_tprop_context_0_1;

static const MR_DuFunctorDescPtr hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__du_stag_ordered_tprop_context_0_0[1];

static const MR_DuFunctorDescPtr hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__du_stag_ordered_tprop_context_0_1[1];

static const MR_DuPtagLayout hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__du_ptag_ordered_tprop_context_0[2];

static const MR_DuFunctorDescPtr hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__du_name_ordered_tprop_context_0[2];

static const MR_Integer hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__functor_number_map_tprop_context_0[2];

static const MR_Integer hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__functor_number_map_tprop_errors_0[1];

static const MR_FA_TypeInfo_Struct1 hlds__inst_mode_type_prop__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_NotagFunctorDesc hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__notag_functor_desc_tprop_errors_0;

static const MR_FA_TypeInfo_Struct1 hlds__inst_mode_type_prop__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__inst_mode_type_prop__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_PseudoTypeInfo hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__field_types_tprop_info_0_0[3];

static const MR_DuFunctorDesc hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__du_functor_desc_tprop_info_0_0;

static const MR_DuFunctorDescPtr hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__du_stag_ordered_tprop_info_0_0[1];

static const MR_DuPtagLayout hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__du_ptag_ordered_tprop_info_0[1];

static const MR_DuFunctorDescPtr hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__du_name_ordered_tprop_info_0[1];

static const MR_Integer hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__functor_number_map_tprop_info_0[1];

static const MR_PseudoTypeInfo hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__field_types_user_inst_info_0_0[3];

static const MR_DuFunctorDesc hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__du_functor_desc_user_inst_info_0_0;

static const MR_DuFunctorDescPtr hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__du_stag_ordered_user_inst_info_0_0[1];

static const MR_DuPtagLayout hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__du_ptag_ordered_user_inst_info_0[1];

static const MR_DuFunctorDescPtr hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__du_name_ordered_user_inst_info_0[1];

static const MR_Integer hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__functor_number_map_user_inst_info_0[1];

static const MR_ConstString hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__type_class_id_var_names_tprop_record_4[4];

static const MR_TypeClassMethod hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__type_class_id_method_ids_tprop_record_4[11];

static const MR_TypeClassId hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__type_class_id_tprop_record_4;

static void MR_CALL 
hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__base_info__arity0__unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______hlds__inst_mode_type_prop__report_ho_inst_for_non_ho_type_6_6_p_0(
  MR_Word HeadVar__1_40,
  MR_Word HeadVar__3_42,
  MR_Word HeadVar__4_43);

static void MR_CALL 
hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__base_info__arity0__unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______hlds__inst_mode_type_prop__report_wrong_arity_ho_inst_8_8_p_0(
  MR_Word HeadVar__1_36,
  MR_Word HeadVar__3_38,
  MR_Word HeadVar__4_39,
  MR_Word HeadVar__5_40,
  MR_Word HeadVar__6_41);

static void MR_CALL 
hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__base_info__arity0__unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______hlds__inst_mode_type_prop__report_missing_cons_id_5_5_p_0(
  MR_Word HeadVar__2_31,
  MR_Word HeadVar__3_32);

static void MR_CALL 
hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__base_info__arity0__unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______hlds__inst_mode_type_prop__check_cons_id_qualifier_8_8_p_0(
  MR_Word HeadVar__2_28,
  MR_Word HeadVar__3_29,
  MR_Word HeadVar__4_30,
  MR_String HeadVar__5_31,
  MR_Integer HeadVar__6_32);

static void MR_CALL 
hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__base_info__arity0__unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______hlds__inst_mode_type_prop__check_for_bad_use_of_user_inst_8_8_p_0(
  MR_Word HeadVar__1_21,
  MR_Word HeadVar__3_23,
  MR_Word HeadVar__4_24,
  MR_Word Cache_25,
  MR_Word * Cache_6);

static MR_bool MR_CALL 
hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__base_info__arity0__unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______hlds__inst_mode_type_prop__user_inst_expansion_to_context_3_3_p_0(
  MR_Word HeadVar__2_14);

static void MR_CALL 
hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__base_info__arity0__unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______hlds__inst_mode_type_prop__args_slot_to_context_3_3_p_0(
  MR_Integer HeadVar__2_12);

static void MR_CALL 
hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__base_info__arity0__unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______hlds__inst_mode_type_prop__step_into_ho_inst_4_4_p_0(
  MR_Word HeadVar__1_9,
  MR_Word HeadVar__2_10);

static void MR_CALL 
hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__base_info__arity0__unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______hlds__inst_mode_type_prop__step_into_tuple_inst_2_2_p_0(void);

static void MR_CALL 
hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__base_info__arity0__unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______hlds__inst_mode_type_prop__step_into_bound_functor_3_3_p_0(
  MR_Word HeadVar__1_5);

static MR_Word MR_CALL 
hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__base_info__arity0__unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______hlds__inst_mode_type_prop__get_module_info_1_1_f_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__tprop_info__arity0__hlds__inst_mode_type_prop__tprop_context__arity0__hlds__inst_mode_type_prop__tprop_args__arity0__hlds__inst_mode_type_prop__tprop_errors__arity0______hlds__inst_mode_type_prop__report_ho_inst_for_non_ho_type_6_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6);

static void MR_CALL 
hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__tprop_info__arity0__hlds__inst_mode_type_prop__tprop_context__arity0__hlds__inst_mode_type_prop__tprop_args__arity0__hlds__inst_mode_type_prop__tprop_errors__arity0______hlds__inst_mode_type_prop__report_wrong_arity_ho_inst_8_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word HeadVar__7_7,
  MR_Word * HeadVar__8_8);

static void MR_CALL 
hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__tprop_info__arity0__hlds__inst_mode_type_prop__tprop_context__arity0__hlds__inst_mode_type_prop__tprop_args__arity0__hlds__inst_mode_type_prop__tprop_errors__arity0______hlds__inst_mode_type_prop__report_missing_cons_id_5_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5);

static void MR_CALL 
hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__tprop_info__arity0__hlds__inst_mode_type_prop__tprop_context__arity0__hlds__inst_mode_type_prop__tprop_args__arity0__hlds__inst_mode_type_prop__tprop_errors__arity0______hlds__inst_mode_type_prop__check_cons_id_qualifier_8_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_String HeadVar__5_5,
  MR_Integer HeadVar__6_6,
  MR_Word HeadVar__7_7,
  MR_Word * HeadVar__8_8);

static void MR_CALL 
hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__tprop_info__arity0__hlds__inst_mode_type_prop__tprop_context__arity0__hlds__inst_mode_type_prop__tprop_args__arity0__hlds__inst_mode_type_prop__tprop_errors__arity0______hlds__inst_mode_type_prop__check_for_bad_use_of_user_inst_8_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word HeadVar__7_7,
  MR_Word * HeadVar__8_8);

static void MR_CALL 
hlds__inst_mode_type_prop__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_104_101_99_107_95_117_115_101_114_95_105_110_115_116_95_97_114_103_115_95_95_91_73_110_102_111_32_61_32_104_108_100_115_46_105_110_115_116_95_109_111_100_101_95_116_121_112_101_95_112_114_111_112_46_116_112_114_111_112_95_105_110_102_111_44_32_67_111_110_116_101_120_116_32_61_32_104_108_100_115_46_105_110_115_116_95_109_111_100_101_95_116_121_112_101_95_112_114_111_112_46_116_112_114_111_112_95_99_111_110_116_101_120_116_44_32_65_114_103_115_32_61_32_104_108_100_115_46_105_110_115_116_95_109_111_100_101_95_116_121_112_101_95_112_114_111_112_46_116_112_114_111_112_95_97_114_103_115_44_32_69_114_114_111_114_115_32_61_32_104_108_100_115_46_105_110_115_116_95_109_111_100_101_95_116_121_112_101_95_112_114_111_112_46_116_112_114_111_112_95_101_114_114_111_114_115_93_95_48_95_49_8_p_0(
  MR_Word TypeClassInfo_for_tprop_record_32,
  MR_Word ModuleInfo_9,
  MR_Word Type_10,
  MR_Word Context_11,
  MR_Word UserInstInfo_12,
  MR_Word STATE_VARIABLE_Cache_0_28,
  MR_Word * STATE_VARIABLE_Cache_29,
  MR_Word STATE_VARIABLE_Errors_0_30,
  MR_Word * STATE_VARIABLE_Errors_31);

static MR_bool MR_CALL 
hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__tprop_info__arity0__hlds__inst_mode_type_prop__tprop_context__arity0__hlds__inst_mode_type_prop__tprop_args__arity0__hlds__inst_mode_type_prop__tprop_errors__arity0______hlds__inst_mode_type_prop__user_inst_expansion_to_context_3_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__tprop_info__arity0__hlds__inst_mode_type_prop__tprop_context__arity0__hlds__inst_mode_type_prop__tprop_args__arity0__hlds__inst_mode_type_prop__tprop_errors__arity0______hlds__inst_mode_type_prop__args_slot_to_context_3_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__tprop_info__arity0__hlds__inst_mode_type_prop__tprop_context__arity0__hlds__inst_mode_type_prop__tprop_args__arity0__hlds__inst_mode_type_prop__tprop_errors__arity0______hlds__inst_mode_type_prop__step_into_ho_inst_4_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__tprop_info__arity0__hlds__inst_mode_type_prop__tprop_context__arity0__hlds__inst_mode_type_prop__tprop_args__arity0__hlds__inst_mode_type_prop__tprop_errors__arity0______hlds__inst_mode_type_prop__step_into_tuple_inst_2_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__tprop_info__arity0__hlds__inst_mode_type_prop__tprop_context__arity0__hlds__inst_mode_type_prop__tprop_args__arity0__hlds__inst_mode_type_prop__tprop_errors__arity0______hlds__inst_mode_type_prop__step_into_bound_functor_3_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static MR_Word MR_CALL 
hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__tprop_info__arity0__hlds__inst_mode_type_prop__tprop_context__arity0__hlds__inst_mode_type_prop__tprop_args__arity0__hlds__inst_mode_type_prop__tprop_errors__arity0______hlds__inst_mode_type_prop__get_module_info_1_1_f_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
hlds__inst_mode_type_prop____Compare____user_inst_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__inst_mode_type_prop____Unify____user_inst_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__inst_mode_type_prop____Compare____tprop_errors_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__inst_mode_type_prop____Unify____tprop_errors_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__inst_mode_type_prop____Compare____maybe_inside_user_inst_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__inst_mode_type_prop____Unify____maybe_inside_user_inst_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__inst_mode_type_prop____Compare____base_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__inst_mode_type_prop____Unify____base_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__inst_mode_type_prop__report_ho_inst_for_non_ho_type_6_p_0(
  MR_Word TypeClassInfo_for_tprop_record_7,
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Box HeadVar__5_5,
  MR_Box * HeadVar__6_6);

static void MR_CALL 
hlds__inst_mode_type_prop__report_wrong_arity_ho_inst_8_p_0(
  MR_Word TypeClassInfo_for_tprop_record_9,
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Box HeadVar__7_7,
  MR_Box * HeadVar__8_8);

static void MR_CALL 
hlds__inst_mode_type_prop__report_missing_cons_id_5_p_0(
  MR_Word TypeClassInfo_for_tprop_record_6,
  MR_Box HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Box HeadVar__4_4,
  MR_Box * HeadVar__5_5);

static void MR_CALL 
hlds__inst_mode_type_prop__check_cons_id_qualifier_8_p_0(
  MR_Word TypeClassInfo_for_tprop_record_9,
  MR_Box HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_String HeadVar__5_5,
  MR_Integer HeadVar__6_6,
  MR_Box HeadVar__7_7,
  MR_Box * HeadVar__8_8);

static MR_bool MR_CALL 
hlds__inst_mode_type_prop__user_inst_expansion_to_context_3_p_0(
  MR_Word TypeClassInfo_for_tprop_record_4,
  MR_Box HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box * HeadVar__3_3);

static void MR_CALL 
hlds__inst_mode_type_prop__args_slot_to_context_3_p_0(
  MR_Word TypeClassInfo_for_tprop_record_4,
  MR_Box HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Box * HeadVar__3_3);

static void MR_CALL 
hlds__inst_mode_type_prop__step_into_tuple_inst_2_p_0(
  MR_Word TypeClassInfo_for_tprop_record_3,
  MR_Box HeadVar__1_1,
  MR_Box * HeadVar__2_2);

static void MR_CALL 
hlds__inst_mode_type_prop__step_into_bound_functor_3_p_0(
  MR_Word TypeClassInfo_for_tprop_record_4,
  MR_Word HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box * HeadVar__3_3);

static void MR_CALL 
hlds__inst_mode_type_prop__do_record_bad_use_of_user_inst_6_p_0(
  MR_Word TPropContext_7,
  MR_Word InstCtor_8,
  MR_Word ForTypeCtor_9,
  MR_Word TypeCtor_10,
  MR_Word STATE_VARIABLE_Errors_0_18,
  MR_Word * STATE_VARIABLE_Errors_19);

static void MR_CALL 
hlds__inst_mode_type_prop__tprop_context_to_pieces_3_p_0(
  MR_Word TPropContext_4,
  MR_Word * Context_5,
  MR_Word * Pieces_6);

static MR_Word MR_CALL 
hlds__inst_mode_type_prop__pred_or_func_arg_desc_3_f_0(
  MR_Word PredOrFunc_5,
  MR_Word HeadVar__2_2,
  MR_Integer ArgNum_7);

static void MR_CALL 
hlds__inst_mode_type_prop__record_result_in_tprop_cache_6_p_0(
  MR_Word Type_7,
  MR_Word SymName_8,
  MR_Word ArgInsts_9,
  MR_Word Result_10,
  MR_Word STATE_VARIABLE_Cache_0_16,
  MR_Word * STATE_VARIABLE_Cache_17);

static MR_bool MR_CALL 
hlds__inst_mode_type_prop__result_is_in_tprop_cache_5_p_0(
  MR_Word Cache_6,
  MR_Word Type_7,
  MR_Word SymName_8,
  MR_Word ArgInsts_9,
  MR_Word * Result_10);

static MR_Word MR_CALL 
hlds__inst_mode_type_prop__are_we_already_inside_user_inst_expansion_2_f_0(
  MR_Word LocnContext_4,
  MR_Word SymNameArity_5);

static void MR_CALL 
hlds__inst_mode_type_prop__propagate_char_type_5_p_0(
  MR_Word TypeClassInfo_for_tprop_record_25,
  MR_Box Context_6,
  MR_Word BoundFunctor0_7,
  MR_Word * BoundFunctor_8,
  MR_Box STATE_VARIABLE_Errors_0_17,
  MR_Box * STATE_VARIABLE_Errors_18);

static void MR_CALL 
hlds__inst_mode_type_prop__propagate_types_into_tuple_9_p_0(
  MR_Word TypeClassInfo_for_tprop_record_34,
  MR_Box ModuleInfo_10,
  MR_Box Context_11,
  MR_Word TupleArgTypes_12,
  MR_Word BoundFunctor0_13,
  MR_Word * BoundFunctor_14,
  MR_Word STATE_VARIABLE_Cache_0_26,
  MR_Word * STATE_VARIABLE_Cache_27,
  MR_Box STATE_VARIABLE_Errors_0_28,
  MR_Box * STATE_VARIABLE_Errors_29);

static void MR_CALL 
hlds__inst_mode_type_prop__propagate_types_into_insts_10_p_0(
  MR_Word TypeClassInfo_for_tprop_record_68,
  MR_Box Info_1,
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
hlds__inst_mode_type_prop__propagate_type_into_inst_9_p_0(
  MR_Word TypeClassInfo_for_tprop_record_23,
  MR_Box Info_10,
  MR_Box Context_11,
  MR_Word Type_12,
  MR_Word Inst0_13,
  MR_Word * Inst_14,
  MR_Word STATE_VARIABLE_Cache_0_19,
  MR_Word * STATE_VARIABLE_Cache_20,
  MR_Box STATE_VARIABLE_Errors_0_21,
  MR_Box * STATE_VARIABLE_Errors_22);

static void MR_CALL 
hlds__inst_mode_type_prop__propagate_type_into_inst_lazily_9_p_0(
  MR_Word TypeClassInfo_for_tprop_record_110,
  MR_Box Info_10,
  MR_Box Context_11,
  MR_Word Type_12,
  MR_Word Inst0_13,
  MR_Word * Inst_14,
  MR_Word STATE_VARIABLE_Cache_0_45,
  MR_Word * STATE_VARIABLE_Cache_46,
  MR_Box STATE_VARIABLE_Errors_0_47,
  MR_Box * STATE_VARIABLE_Errors_48);

static void MR_CALL 
hlds__inst_mode_type_prop__propagate_type_into_inst_eagerly_10_p_0(
  MR_Word TypeClassInfo_for_tprop_record_162,
  MR_Box Info_11,
  MR_Box Context_12,
  MR_Word Type_13,
  MR_Word Constructors_14,
  MR_Word Inst0_15,
  MR_Word * Inst_16,
  MR_Word STATE_VARIABLE_Cache_0_50,
  MR_Word * STATE_VARIABLE_Cache_51,
  MR_Box STATE_VARIABLE_Errors_0_52,
  MR_Box * STATE_VARIABLE_Errors_53);

static void MR_CALL 
hlds__inst_mode_type_prop__propagate_type_into_bound_functor_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
hlds__inst_mode_type_prop__propagate_type_into_bound_functor_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__inst_mode_type_prop__propagate_type_into_bound_functor_9_p_0(
  MR_Word TypeClassInfo_for_tprop_record_90,
  MR_Box Info_10,
  MR_Box Context_11,
  MR_Word Type_12,
  MR_Word Inst0_13,
  MR_Word * Inst_14,
  MR_Word STATE_VARIABLE_Cache_0_57,
  MR_Word * STATE_VARIABLE_Cache_58,
  MR_Box STATE_VARIABLE_Errors_0_59,
  MR_Box * STATE_VARIABLE_Errors_60);

static void MR_CALL 
hlds__inst_mode_type_prop__propagate_types_into_modes_10_p_0(
  MR_Word TypeClassInfo_for_tprop_record_68,
  MR_Box ModuleInfo_1,
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
hlds__inst_mode_type_prop__propagate_subst_type_ctor_into_bound_functors_12_p_0(
  MR_Word TypeClassInfo_for_tprop_record_71,
  MR_Box Info_1,
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
hlds__inst_mode_type_prop__default_higher_order_func_inst_8_p_0(
  MR_Word TypeClassInfo_for_tprop_record_44,
  MR_Box Info_9,
  MR_Box Context_10,
  MR_Word PredArgTypes_11,
  MR_Word * PredInstInfo_12,
  MR_Word STATE_VARIABLE_Cache_0_25,
  MR_Word * STATE_VARIABLE_Cache_26,
  MR_Box STATE_VARIABLE_Errors_0_27,
  MR_Box * STATE_VARIABLE_Errors_28);

static void MR_CALL 
hlds__inst_mode_type_prop__propagate_subst_types_into_insts_11_p_0(
  MR_Word TypeClassInfo_for_tprop_record_73,
  MR_Box Info_1,
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
hlds__inst_mode_type_prop__check_for_bad_use_of_user_inst_8_p_0(
  MR_Word TypeClassInfo_for_tprop_record_9,
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Box HeadVar__7_7,
  MR_Box * HeadVar__8_8);

static void MR_CALL 
hlds__inst_mode_type_prop__step_into_ho_inst_4_p_0(
  MR_Word TypeClassInfo_for_tprop_record_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4);

static MR_Word MR_CALL 
hlds__inst_mode_type_prop__get_module_info_1_f_0(
  MR_Word TypeClassInfo_for_tprop_record_3,
  MR_Box HeadVar__1_1);

static void MR_CALL 
hlds__inst_mode_type_prop__get_constructor_arg_types_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static MR_bool MR_CALL 
hlds__inst_mode_type_prop__find_first_matching_constructor_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
hlds__inst_mode_type_prop__construct_new_bound_functor_5_p_0(
  MR_Word Uniq_6,
  MR_Word InstResults0_7,
  MR_Word PropagatedResult_8,
  MR_Word BoundFunctors_9,
  MR_Word * Inst_10);

static MR_bool MR_CALL 
hlds__inst_mode_type_prop____Unify____base_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__inst_mode_type_prop____Compare____base_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__inst_mode_type_prop____Unify____maybe_inside_user_inst_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__inst_mode_type_prop____Compare____maybe_inside_user_inst_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__inst_mode_type_prop____Unify____tprop_args_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__inst_mode_type_prop____Compare____tprop_args_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__inst_mode_type_prop____Unify____tprop_cache_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__inst_mode_type_prop____Compare____tprop_cache_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__inst_mode_type_prop____Unify____tprop_cache_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__inst_mode_type_prop____Compare____tprop_cache_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__inst_mode_type_prop____Unify____tprop_context_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__inst_mode_type_prop____Compare____tprop_context_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__inst_mode_type_prop____Unify____tprop_errors_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__inst_mode_type_prop____Compare____tprop_errors_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__inst_mode_type_prop____Unify____tprop_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__inst_mode_type_prop____Compare____tprop_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__inst_mode_type_prop____Unify____user_inst_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__inst_mode_type_prop____Compare____user_inst_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_Box MR_CALL 
hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__tprop_info__arity0__hlds__inst_mode_type_prop__tprop_context__arity0__hlds__inst_mode_type_prop__tprop_args__arity0__hlds__inst_mode_type_prop__tprop_errors__arity0______hlds__inst_mode_type_prop__get_module_info_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__tprop_info__arity0__hlds__inst_mode_type_prop__tprop_context__arity0__hlds__inst_mode_type_prop__tprop_args__arity0__hlds__inst_mode_type_prop__tprop_errors__arity0______hlds__inst_mode_type_prop__step_into_bound_functor_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__tprop_info__arity0__hlds__inst_mode_type_prop__tprop_context__arity0__hlds__inst_mode_type_prop__tprop_args__arity0__hlds__inst_mode_type_prop__tprop_errors__arity0______hlds__inst_mode_type_prop__step_into_tuple_inst_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__tprop_info__arity0__hlds__inst_mode_type_prop__tprop_context__arity0__hlds__inst_mode_type_prop__tprop_args__arity0__hlds__inst_mode_type_prop__tprop_errors__arity0______hlds__inst_mode_type_prop__step_into_ho_inst_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__tprop_info__arity0__hlds__inst_mode_type_prop__tprop_context__arity0__hlds__inst_mode_type_prop__tprop_args__arity0__hlds__inst_mode_type_prop__tprop_errors__arity0______hlds__inst_mode_type_prop__args_slot_to_context_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__tprop_info__arity0__hlds__inst_mode_type_prop__tprop_context__arity0__hlds__inst_mode_type_prop__tprop_args__arity0__hlds__inst_mode_type_prop__tprop_errors__arity0______hlds__inst_mode_type_prop__user_inst_expansion_to_context_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__tprop_info__arity0__hlds__inst_mode_type_prop__tprop_context__arity0__hlds__inst_mode_type_prop__tprop_args__arity0__hlds__inst_mode_type_prop__tprop_errors__arity0______hlds__inst_mode_type_prop__check_for_bad_use_of_user_inst_8_8_p_0_10001(
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
hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__tprop_info__arity0__hlds__inst_mode_type_prop__tprop_context__arity0__hlds__inst_mode_type_prop__tprop_args__arity0__hlds__inst_mode_type_prop__tprop_errors__arity0______hlds__inst_mode_type_prop__check_cons_id_qualifier_8_8_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__tprop_info__arity0__hlds__inst_mode_type_prop__tprop_context__arity0__hlds__inst_mode_type_prop__tprop_args__arity0__hlds__inst_mode_type_prop__tprop_errors__arity0______hlds__inst_mode_type_prop__report_missing_cons_id_5_5_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__tprop_info__arity0__hlds__inst_mode_type_prop__tprop_context__arity0__hlds__inst_mode_type_prop__tprop_args__arity0__hlds__inst_mode_type_prop__tprop_errors__arity0______hlds__inst_mode_type_prop__report_wrong_arity_ho_inst_8_8_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__tprop_info__arity0__hlds__inst_mode_type_prop__tprop_context__arity0__hlds__inst_mode_type_prop__tprop_args__arity0__hlds__inst_mode_type_prop__tprop_errors__arity0______hlds__inst_mode_type_prop__report_ho_inst_for_non_ho_type_6_6_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static MR_Box MR_CALL 
hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__base_info__arity0__unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______hlds__inst_mode_type_prop__get_module_info_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__base_info__arity0__unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______hlds__inst_mode_type_prop__step_into_bound_functor_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__base_info__arity0__unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______hlds__inst_mode_type_prop__step_into_tuple_inst_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__base_info__arity0__unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______hlds__inst_mode_type_prop__step_into_ho_inst_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__base_info__arity0__unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______hlds__inst_mode_type_prop__args_slot_to_context_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__base_info__arity0__unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______hlds__inst_mode_type_prop__user_inst_expansion_to_context_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__base_info__arity0__unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______hlds__inst_mode_type_prop__check_for_bad_use_of_user_inst_8_8_p_0_10001(
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
hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__base_info__arity0__unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______hlds__inst_mode_type_prop__check_cons_id_qualifier_8_8_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__base_info__arity0__unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______hlds__inst_mode_type_prop__report_missing_cons_id_5_5_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__base_info__arity0__unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______hlds__inst_mode_type_prop__report_wrong_arity_ho_inst_8_8_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__base_info__arity0__unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______hlds__inst_mode_type_prop__report_ho_inst_for_non_ho_type_6_6_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);


static /* final */ const MR_Box hlds__inst_mode_type_prop_scalar_common_1[84][2];

static /* final */ const MR_Box hlds__inst_mode_type_prop_scalar_common_2[3][3];

static /* final */ const MR_Box hlds__inst_mode_type_prop_scalar_common_3[3][5];

static /* final */ const MR_Integer hlds__inst_mode_type_prop_scalar_common_4[1][3];

static /* final */ const MR_Box hlds__inst_mode_type_prop_scalar_common_5[1][9];

static /* final */ const MR_Integer hlds__inst_mode_type_prop_scalar_common_6[1][4];

static /* final */ const MR_Box hlds__inst_mode_type_prop_scalar_common_7[1][13];




static /* final */ const MR_Box hlds__inst_mode_type_prop_scalar_common_1[84][2] = {
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
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row   6 */
  {
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   7 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &hlds__inst_mode_type_prop_scalar_common_1[6])))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 39U)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__inst_mode_type_prop_scalar_common_1[8]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "error: the user defined inst"))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__inst_mode_type_prop_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(1, &hlds__inst_mode_type_prop_scalar_common_1[9])))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is declared to be applicable only to values of type"))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__inst_mode_type_prop_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(1, &hlds__inst_mode_type_prop_scalar_common_1[9])))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 39U)),
    ((MR_Box) ((MR_Integer) -1))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__inst_mode_type_prop_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(1, &hlds__inst_mode_type_prop_scalar_common_1[13])))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__inst_mode_type_prop_scalar_common_1[16]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "but here it is applied to values of type"))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__inst_mode_type_prop_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(1, &hlds__inst_mode_type_prop_scalar_common_1[9])))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__inst_mode_type_prop_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(1, &hlds__inst_mode_type_prop_scalar_common_1[19])))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__inst_mode_type_prop_scalar_common_1[21]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__inst_mode_type_prop_scalar_common_1[14]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "error in bound inst: the constructor"))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "has a module qualifier,"))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__inst_mode_type_prop_scalar_common_1[25]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "that type being"))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__inst_mode_type_prop_scalar_common_1[27]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "whose instantiation state it is supposed to represent,"))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__inst_mode_type_prop_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(1, &hlds__inst_mode_type_prop_scalar_common_1[28])))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "that is incompatible with the type of the value"))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__inst_mode_type_prop_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(1, &hlds__inst_mode_type_prop_scalar_common_1[30])))
  },
  /* row  33 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__inst_mode_type_prop_scalar_common_1[24]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is supposed to describe the instantiation state"))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "of a value of type"))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "but that type has no such constructor."))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__inst_mode_type_prop_scalar_common_1[37]))),
    ((MR_Box) (MR_mkword(1, &hlds__inst_mode_type_prop_scalar_common_1[33])))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__inst_mode_type_prop_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(1, &hlds__inst_mode_type_prop_scalar_common_1[38])))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "error: the higher order inst"))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__inst_mode_type_prop_scalar_common_1[40]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "of the higher-order type"))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__inst_mode_type_prop_scalar_common_1[42]))),
    ((MR_Box) (MR_mkword(1, &hlds__inst_mode_type_prop_scalar_common_1[9])))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "cannot describe the instantiation state of a value"))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__inst_mode_type_prop_scalar_common_1[44]))),
    ((MR_Box) (MR_mkword(1, &hlds__inst_mode_type_prop_scalar_common_1[43])))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "The higher order type has"))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__inst_mode_type_prop_scalar_common_1[46]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "because they have different arities."))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__inst_mode_type_prop_scalar_common_1[48]))),
    ((MR_Box) (MR_mkword(1, &hlds__inst_mode_type_prop_scalar_common_1[47])))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__inst_mode_type_prop_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(1, &hlds__inst_mode_type_prop_scalar_common_1[49])))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "while the higher order inst has"))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__inst_mode_type_prop_scalar_common_1[51]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "arguments"))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__inst_mode_type_prop_scalar_common_1[53]))),
    ((MR_Box) (MR_mkword(1, &hlds__inst_mode_type_prop_scalar_common_1[52])))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "arguments."))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__inst_mode_type_prop_scalar_common_1[55]))),
    ((MR_Box) (MR_mkword(1, &hlds__inst_mode_type_prop_scalar_common_1[33])))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "of the non-higher-order type"))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__inst_mode_type_prop_scalar_common_1[57]))),
    ((MR_Box) (MR_mkword(1, &hlds__inst_mode_type_prop_scalar_common_1[9])))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__inst_mode_type_prop_scalar_common_1[44]))),
    ((MR_Box) (MR_mkword(1, &hlds__inst_mode_type_prop_scalar_common_1[58])))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "in the"))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "argument of"))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row  63 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__inst_mode_type_prop_scalar_common_1[62]))),
    ((MR_Box) (MR_mkword(1, &hlds__inst_mode_type_prop_scalar_common_1[33])))
  },
  /* row  64 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "in"))
  },
  /* row  65 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__inst_mode_type_prop_scalar_common_1[64]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  66 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "of the higher order inst:"))
  },
  /* row  67 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__inst_mode_type_prop_scalar_common_1[66]))),
    ((MR_Box) (MR_mkword(1, &hlds__inst_mode_type_prop_scalar_common_1[33])))
  },
  /* row  68 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the lambda expression"))
  },
  /* row  69 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__inst_mode_type_prop_scalar_common_1[68]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  70 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row  71 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__inst_mode_type_prop_scalar_common_1[70]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  72 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "of"))
  },
  /* row  73 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__inst_mode_type_prop_scalar_common_1[72]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  74 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "argument of tuple:"))
  },
  /* row  75 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__inst_mode_type_prop_scalar_common_1[74]))),
    ((MR_Box) (MR_mkword(1, &hlds__inst_mode_type_prop_scalar_common_1[33])))
  },
  /* row  76 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "in the expansion of the user-defined inst"))
  },
  /* row  77 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the result argument"))
  },
  /* row  78 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__inst_mode_type_prop_scalar_common_1[77]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  79 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the"))
  },
  /* row  80 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "argument"))
  },
  /* row  81 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__inst_mode_type_prop_scalar_common_1[80]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  82 */
  {
    ((MR_Box) (MR_mkword(1, &hlds__inst_mode_type_prop_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(1, &hlds__inst_mode_type_prop_scalar_common_1[6])))
  },
  /* row  83 */
  {
    ((MR_Box) (&hlds__inst_mode_type_prop_scalar_common_1[7])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box hlds__inst_mode_type_prop_scalar_common_2[3][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__inst_mode_type_prop_scalar_common_1[0])),
    ((MR_Box) (&hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__type_ctor_info_tprop_cache_result_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&hlds__inst_mode_type_prop_scalar_common_2[0]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__inst_mode_type_prop_scalar_common_2[1]))
  },
};

static /* final */ const MR_Box hlds__inst_mode_type_prop_scalar_common_3[3][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_hlds__inst_mode_type_prop__tprop_record__arity4__hlds__inst_mode_type_prop__base_info__arity0__unit__unit__arity0__unit__unit__arity0__unit__unit__arity0__)),
    ((MR_Box) (&hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__type_ctor_info_base_info_0)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_hlds__inst_mode_type_prop__tprop_record__arity4__hlds__inst_mode_type_prop__tprop_info__arity0__hlds__inst_mode_type_prop__tprop_context__arity0__hlds__inst_mode_type_prop__tprop_args__arity0__hlds__inst_mode_type_prop__tprop_errors__arity0__)),
    ((MR_Box) (&hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__type_ctor_info_tprop_info_0)),
    ((MR_Box) (&hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__type_ctor_info_tprop_context_0)),
    ((MR_Box) (&hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__type_ctor_info_tprop_args_0)),
    ((MR_Box) (&hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__type_ctor_info_tprop_errors_0))
  },
  /* row   2 */
  {
    (MR_Box) (((((MR_Unsigned) 2U << 2)) | (MR_Unsigned) 2U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Integer hlds__inst_mode_type_prop_scalar_common_4[1][3] = {
  /* row   0 */
  {
    (MR_Integer) 2,
    (MR_Integer) 67663,
    (MR_Integer) 67727
  },
};

static /* final */ const MR_Box hlds__inst_mode_type_prop_scalar_common_5[1][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (&hlds__inst_mode_type_prop_scalar_common_4[0])),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_functor_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_functor_0)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 2))
  },
};

static /* final */ const MR_Integer hlds__inst_mode_type_prop_scalar_common_6[1][4] = {
  /* row   0 */
  {
    (MR_Integer) 3,
    (MR_Integer) 67631,
    (MR_Integer) 67663,
    (MR_Integer) 67727
  },
};

static /* final */ const MR_Box hlds__inst_mode_type_prop_scalar_common_7[1][13] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (&hlds__inst_mode_type_prop_scalar_common_6[0])),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__inst_mode_type_prop__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_functor_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_functor_0)),
    ((MR_Box) (&hlds__inst_mode_type_prop__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_inst_0hlds__inst_mode_type_prop__type_ctor_info_tprop_cache_result_0)),
    ((MR_Box) (&hlds__inst_mode_type_prop__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_inst_0hlds__inst_mode_type_prop__type_ctor_info_tprop_cache_result_0)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) ((MR_Integer) 3))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 hlds__inst_mode_type_prop__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__inst_mode_type_prop__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0) }
};

static const MR_FA_TypeInfo_Struct2 hlds__inst_mode_type_prop__tree234__ti_tree234_2list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_inst_0hlds__inst_mode_type_prop__type_ctor_info_tprop_cache_result_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__inst_mode_type_prop__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_inst_0),
    (MR_TypeInfo) (&hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__type_ctor_info_tprop_cache_result_0)
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__inst_mode_type_prop__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_inst_0hlds__inst_mode_type_prop__type_ctor_info_tprop_cache_result_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&hlds__inst_mode_type_prop__tree234__ti_tree234_2list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_inst_0hlds__inst_mode_type_prop__type_ctor_info_tprop_cache_result_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__inst_mode_type_prop__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_inst_0hlds__inst_mode_type_prop__type_ctor_info_tprop_cache_result_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0),
    (MR_PseudoTypeInfo) (&hlds__inst_mode_type_prop__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_inst_0hlds__inst_mode_type_prop__type_ctor_info_tprop_cache_result_0)
  }
};

static const MR_Integer hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__functor_number_map_base_info_0[1] = { (MR_Integer) 0 };

static const MR_NotagFunctorDesc hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__notag_functor_desc_base_info_0 = {
  (MR_String) "base_info",
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__type_ctor_info_base_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (hlds__inst_mode_type_prop____Unify____base_info_0_0_10001)),
  ((MR_Box) (hlds__inst_mode_type_prop____Compare____base_info_0_0_10001)),
  (MR_String) "hlds.inst_mode_type_prop",
  (MR_String) "base_info",
  { &hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__notag_functor_desc_base_info_0 },
  { &hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__notag_functor_desc_base_info_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__functor_number_map_base_info_0,

};

static const MR_EnumFunctorDesc hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__enum_functor_desc_maybe_inside_user_inst_0_0 = {
  (MR_String) "not_inside_user_inst",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__enum_functor_desc_maybe_inside_user_inst_0_1 = {
  (MR_String) "inside_user_inst",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__enum_ordinal_ordered_maybe_inside_user_inst_0[2] = {
  &hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__enum_functor_desc_maybe_inside_user_inst_0_0,
  &hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__enum_functor_desc_maybe_inside_user_inst_0_1
};

static const MR_EnumFunctorDescPtr hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__enum_name_ordered_maybe_inside_user_inst_0[2] = {
  &hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__enum_functor_desc_maybe_inside_user_inst_0_1,
  &hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__enum_functor_desc_maybe_inside_user_inst_0_0
};

static const MR_Integer hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__functor_number_map_maybe_inside_user_inst_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__type_ctor_info_maybe_inside_user_inst_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__inst_mode_type_prop____Unify____maybe_inside_user_inst_0_0_10001)),
  ((MR_Box) (hlds__inst_mode_type_prop____Compare____maybe_inside_user_inst_0_0_10001)),
  (MR_String) "hlds.inst_mode_type_prop",
  (MR_String) "maybe_inside_user_inst",
  { hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__enum_name_ordered_maybe_inside_user_inst_0 },
  { hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__enum_ordinal_ordered_maybe_inside_user_inst_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__functor_number_map_maybe_inside_user_inst_0,

};

static const MR_PseudoTypeInfo hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__field_types_tprop_args_0_0[1] = { (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0) };

static const MR_DuFunctorDesc hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__du_functor_desc_tprop_args_0_0 = {
  (MR_String) "ta_pred",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__field_types_tprop_args_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__field_types_tprop_args_0_1[3] = {
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_form_arity_0),
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0)
};

static const MR_DuArgLocn hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__field_locns_tprop_args_0_1[3] = {
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

static const MR_DuFunctorDesc hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__du_functor_desc_tprop_args_0_1 = {
  (MR_String) "ta_lambda",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__field_types_tprop_args_0_1,
  NULL,
  hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__field_locns_tprop_args_0_1,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__field_types_tprop_args_0_2[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0),
  (MR_PseudoTypeInfo) (&hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__type_ctor_info_tprop_context_0)
};

static const MR_DuFunctorDesc hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__du_functor_desc_tprop_args_0_2 = {
  (MR_String) "ta_bound_functor",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__field_types_tprop_args_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__field_types_tprop_args_0_3[1] = { (MR_PseudoTypeInfo) (&hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__type_ctor_info_tprop_context_0) };

static const MR_DuFunctorDesc hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__du_functor_desc_tprop_args_0_3 = {
  (MR_String) "ta_tuple_inst",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(3),
  hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__field_types_tprop_args_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__field_types_tprop_args_0_4[3] = {
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_form_arity_0),
  (MR_PseudoTypeInfo) (&hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__type_ctor_info_tprop_context_0)
};

static const MR_DuArgLocn hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__field_locns_tprop_args_0_4[3] = {
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

static const MR_DuFunctorDesc hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__du_functor_desc_tprop_args_0_4 = {
  (MR_String) "ta_ho_inst",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(4),
  hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__field_types_tprop_args_0_4,
  NULL,
  hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__field_locns_tprop_args_0_4,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__du_stag_ordered_tprop_args_0_0[1] = { &hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__du_functor_desc_tprop_args_0_0 };

static const MR_DuFunctorDescPtr hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__du_stag_ordered_tprop_args_0_1[1] = { &hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__du_functor_desc_tprop_args_0_1 };

static const MR_DuFunctorDescPtr hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__du_stag_ordered_tprop_args_0_2[1] = { &hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__du_functor_desc_tprop_args_0_2 };

static const MR_DuFunctorDescPtr hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__du_stag_ordered_tprop_args_0_3[2] = {
  &hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__du_functor_desc_tprop_args_0_3,
  &hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__du_functor_desc_tprop_args_0_4
};

static const MR_DuPtagLayout hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__du_ptag_ordered_tprop_args_0[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__du_stag_ordered_tprop_args_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__du_stag_ordered_tprop_args_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__du_stag_ordered_tprop_args_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(2),
    MR_SECTAG_REMOTE_FULL_WORD,
    hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__du_stag_ordered_tprop_args_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__du_name_ordered_tprop_args_0[5] = {
  &hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__du_functor_desc_tprop_args_0_2,
  &hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__du_functor_desc_tprop_args_0_4,
  &hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__du_functor_desc_tprop_args_0_1,
  &hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__du_functor_desc_tprop_args_0_0,
  &hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__du_functor_desc_tprop_args_0_3
};

static const MR_Integer hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__functor_number_map_tprop_args_0[5] = {
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__type_ctor_info_tprop_args_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__inst_mode_type_prop____Unify____tprop_args_0_0_10001)),
  ((MR_Box) (hlds__inst_mode_type_prop____Compare____tprop_args_0_0_10001)),
  (MR_String) "hlds.inst_mode_type_prop",
  (MR_String) "tprop_args",
  { hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__du_name_ordered_tprop_args_0 },
  { hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__du_ptag_ordered_tprop_args_0 },
  (MR_Integer) 5,
  UINT16_C(12),
  hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__functor_number_map_tprop_args_0,

};

static const MR_FA_TypeInfo_Struct2 hlds__inst_mode_type_prop__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_mer_type_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_inst_0hlds__inst_mode_type_prop__type_ctor_info_tprop_cache_result_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0),
    (MR_TypeInfo) (&hlds__inst_mode_type_prop__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_inst_0hlds__inst_mode_type_prop__type_ctor_info_tprop_cache_result_0)
  }
};

const MR_TypeCtorInfo_Struct hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__type_ctor_info_tprop_cache_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__inst_mode_type_prop____Unify____tprop_cache_0_0_10001)),
  ((MR_Box) (hlds__inst_mode_type_prop____Compare____tprop_cache_0_0_10001)),
  (MR_String) "hlds.inst_mode_type_prop",
  (MR_String) "tprop_cache",
  { NULL },
  { (MR_PseudoTypeInfo) (&hlds__inst_mode_type_prop__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_mer_type_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_inst_0hlds__inst_mode_type_prop__type_ctor_info_tprop_cache_result_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_DuFunctorDesc hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__du_functor_desc_tprop_cache_result_0_0 = {
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

static const MR_PseudoTypeInfo hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__field_types_tprop_cache_result_0_1[3] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)
};

static const MR_DuFunctorDesc hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__du_functor_desc_tprop_cache_result_0_1 = {
  (MR_String) "tprop_cache_result_error",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__field_types_tprop_cache_result_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__du_stag_ordered_tprop_cache_result_0_0[1] = { &hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__du_functor_desc_tprop_cache_result_0_0 };

static const MR_DuFunctorDescPtr hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__du_stag_ordered_tprop_cache_result_0_1[1] = { &hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__du_functor_desc_tprop_cache_result_0_1 };

static const MR_DuPtagLayout hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__du_ptag_ordered_tprop_cache_result_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__du_stag_ordered_tprop_cache_result_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__du_stag_ordered_tprop_cache_result_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__du_name_ordered_tprop_cache_result_0[2] = {
  &hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__du_functor_desc_tprop_cache_result_0_1,
  &hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__du_functor_desc_tprop_cache_result_0_0
};

static const MR_Integer hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__functor_number_map_tprop_cache_result_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__type_ctor_info_tprop_cache_result_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__inst_mode_type_prop____Unify____tprop_cache_result_0_0_10001)),
  ((MR_Box) (hlds__inst_mode_type_prop____Compare____tprop_cache_result_0_0_10001)),
  (MR_String) "hlds.inst_mode_type_prop",
  (MR_String) "tprop_cache_result",
  { hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__du_name_ordered_tprop_cache_result_0 },
  { hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__du_ptag_ordered_tprop_cache_result_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__functor_number_map_tprop_cache_result_0,

};

static const MR_PseudoTypeInfo hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__field_types_tprop_context_0_0[2] = {
  (MR_PseudoTypeInfo) (&hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__type_ctor_info_tprop_args_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__du_functor_desc_tprop_context_0_0 = {
  (MR_String) "tprop_arg_list_slot",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__field_types_tprop_context_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__field_types_tprop_context_0_1[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0),
  (MR_PseudoTypeInfo) (&hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__type_ctor_info_tprop_context_0)
};

static const MR_DuFunctorDesc hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__du_functor_desc_tprop_context_0_1 = {
  (MR_String) "tprop_inst_name_expansion",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__field_types_tprop_context_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__du_stag_ordered_tprop_context_0_0[1] = { &hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__du_functor_desc_tprop_context_0_0 };

static const MR_DuFunctorDescPtr hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__du_stag_ordered_tprop_context_0_1[1] = { &hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__du_functor_desc_tprop_context_0_1 };

static const MR_DuPtagLayout hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__du_ptag_ordered_tprop_context_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__du_stag_ordered_tprop_context_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__du_stag_ordered_tprop_context_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__du_name_ordered_tprop_context_0[2] = {
  &hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__du_functor_desc_tprop_context_0_0,
  &hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__du_functor_desc_tprop_context_0_1
};

static const MR_Integer hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__functor_number_map_tprop_context_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__type_ctor_info_tprop_context_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__inst_mode_type_prop____Unify____tprop_context_0_0_10001)),
  ((MR_Box) (hlds__inst_mode_type_prop____Compare____tprop_context_0_0_10001)),
  (MR_String) "hlds.inst_mode_type_prop",
  (MR_String) "tprop_context",
  { hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__du_name_ordered_tprop_context_0 },
  { hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__du_ptag_ordered_tprop_context_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__functor_number_map_tprop_context_0,

};

static const MR_Integer hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__functor_number_map_tprop_errors_0[1] = { (MR_Integer) 0 };

static const MR_FA_TypeInfo_Struct1 hlds__inst_mode_type_prop__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) }
};

static const MR_NotagFunctorDesc hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__notag_functor_desc_tprop_errors_0 = {
  (MR_String) "tprop_errors",
  (MR_PseudoTypeInfo) (&hlds__inst_mode_type_prop__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__type_ctor_info_tprop_errors_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (hlds__inst_mode_type_prop____Unify____tprop_errors_0_0_10001)),
  ((MR_Box) (hlds__inst_mode_type_prop____Compare____tprop_errors_0_0_10001)),
  (MR_String) "hlds.inst_mode_type_prop",
  (MR_String) "tprop_errors",
  { &hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__notag_functor_desc_tprop_errors_0 },
  { &hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__notag_functor_desc_tprop_errors_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__functor_number_map_tprop_errors_0,

};

static const MR_FA_TypeInfo_Struct1 hlds__inst_mode_type_prop__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__inst_mode_type_prop__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0) }
};

static const MR_PseudoTypeInfo hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__field_types_tprop_info_0_0[3] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&hlds__inst_mode_type_prop__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
  (MR_PseudoTypeInfo) (&hlds__inst_mode_type_prop__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0)
};

static const MR_DuFunctorDesc hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__du_functor_desc_tprop_info_0_0 = {
  (MR_String) "tprop_info",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__field_types_tprop_info_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__du_stag_ordered_tprop_info_0_0[1] = { &hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__du_functor_desc_tprop_info_0_0 };

static const MR_DuPtagLayout hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__du_ptag_ordered_tprop_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__du_stag_ordered_tprop_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__du_name_ordered_tprop_info_0[1] = { &hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__du_functor_desc_tprop_info_0_0 };

static const MR_Integer hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__functor_number_map_tprop_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__type_ctor_info_tprop_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__inst_mode_type_prop____Unify____tprop_info_0_0_10001)),
  ((MR_Box) (hlds__inst_mode_type_prop____Compare____tprop_info_0_0_10001)),
  (MR_String) "hlds.inst_mode_type_prop",
  (MR_String) "tprop_info",
  { hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__du_name_ordered_tprop_info_0 },
  { hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__du_ptag_ordered_tprop_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__functor_number_map_tprop_info_0,

};

static const MR_PseudoTypeInfo hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__field_types_user_inst_info_0_0[3] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0),
  (MR_PseudoTypeInfo) (&hlds__inst_mode_type_prop__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_inst_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_inst_defn_0)
};

static const MR_DuFunctorDesc hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__du_functor_desc_user_inst_info_0_0 = {
  (MR_String) "user_inst_info",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__field_types_user_inst_info_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__du_stag_ordered_user_inst_info_0_0[1] = { &hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__du_functor_desc_user_inst_info_0_0 };

static const MR_DuPtagLayout hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__du_ptag_ordered_user_inst_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__du_stag_ordered_user_inst_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__du_name_ordered_user_inst_info_0[1] = { &hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__du_functor_desc_user_inst_info_0_0 };

static const MR_Integer hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__functor_number_map_user_inst_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__type_ctor_info_user_inst_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__inst_mode_type_prop____Unify____user_inst_info_0_0_10001)),
  ((MR_Box) (hlds__inst_mode_type_prop____Compare____user_inst_info_0_0_10001)),
  (MR_String) "hlds.inst_mode_type_prop",
  (MR_String) "user_inst_info",
  { hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__du_name_ordered_user_inst_info_0 },
  { hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__du_ptag_ordered_user_inst_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__functor_number_map_user_inst_info_0,

};

const MR_BaseTypeclassInfo base_typeclass_info_hlds__inst_mode_type_prop__tprop_record__arity4__hlds__inst_mode_type_prop__tprop_info__arity0__hlds__inst_mode_type_prop__tprop_context__arity0__hlds__inst_mode_type_prop__tprop_args__arity0__hlds__inst_mode_type_prop__tprop_errors__arity0__[16] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 4)),
  ((MR_Box) ((MR_Integer) 11)),
  ((MR_Box) (hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__tprop_info__arity0__hlds__inst_mode_type_prop__tprop_context__arity0__hlds__inst_mode_type_prop__tprop_args__arity0__hlds__inst_mode_type_prop__tprop_errors__arity0______hlds__inst_mode_type_prop__get_module_info_1_1_f_0_10001)),
  ((MR_Box) (hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__tprop_info__arity0__hlds__inst_mode_type_prop__tprop_context__arity0__hlds__inst_mode_type_prop__tprop_args__arity0__hlds__inst_mode_type_prop__tprop_errors__arity0______hlds__inst_mode_type_prop__step_into_bound_functor_3_3_p_0_10001)),
  ((MR_Box) (hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__tprop_info__arity0__hlds__inst_mode_type_prop__tprop_context__arity0__hlds__inst_mode_type_prop__tprop_args__arity0__hlds__inst_mode_type_prop__tprop_errors__arity0______hlds__inst_mode_type_prop__step_into_tuple_inst_2_2_p_0_10001)),
  ((MR_Box) (hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__tprop_info__arity0__hlds__inst_mode_type_prop__tprop_context__arity0__hlds__inst_mode_type_prop__tprop_args__arity0__hlds__inst_mode_type_prop__tprop_errors__arity0______hlds__inst_mode_type_prop__step_into_ho_inst_4_4_p_0_10001)),
  ((MR_Box) (hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__tprop_info__arity0__hlds__inst_mode_type_prop__tprop_context__arity0__hlds__inst_mode_type_prop__tprop_args__arity0__hlds__inst_mode_type_prop__tprop_errors__arity0______hlds__inst_mode_type_prop__args_slot_to_context_3_3_p_0_10001)),
  ((MR_Box) (hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__tprop_info__arity0__hlds__inst_mode_type_prop__tprop_context__arity0__hlds__inst_mode_type_prop__tprop_args__arity0__hlds__inst_mode_type_prop__tprop_errors__arity0______hlds__inst_mode_type_prop__user_inst_expansion_to_context_3_3_p_0_10001)),
  ((MR_Box) (hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__tprop_info__arity0__hlds__inst_mode_type_prop__tprop_context__arity0__hlds__inst_mode_type_prop__tprop_args__arity0__hlds__inst_mode_type_prop__tprop_errors__arity0______hlds__inst_mode_type_prop__check_for_bad_use_of_user_inst_8_8_p_0_10001)),
  ((MR_Box) (hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__tprop_info__arity0__hlds__inst_mode_type_prop__tprop_context__arity0__hlds__inst_mode_type_prop__tprop_args__arity0__hlds__inst_mode_type_prop__tprop_errors__arity0______hlds__inst_mode_type_prop__check_cons_id_qualifier_8_8_p_0_10001)),
  ((MR_Box) (hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__tprop_info__arity0__hlds__inst_mode_type_prop__tprop_context__arity0__hlds__inst_mode_type_prop__tprop_args__arity0__hlds__inst_mode_type_prop__tprop_errors__arity0______hlds__inst_mode_type_prop__report_missing_cons_id_5_5_p_0_10001)),
  ((MR_Box) (hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__tprop_info__arity0__hlds__inst_mode_type_prop__tprop_context__arity0__hlds__inst_mode_type_prop__tprop_args__arity0__hlds__inst_mode_type_prop__tprop_errors__arity0______hlds__inst_mode_type_prop__report_wrong_arity_ho_inst_8_8_p_0_10001)),
  ((MR_Box) (hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__tprop_info__arity0__hlds__inst_mode_type_prop__tprop_context__arity0__hlds__inst_mode_type_prop__tprop_args__arity0__hlds__inst_mode_type_prop__tprop_errors__arity0______hlds__inst_mode_type_prop__report_ho_inst_for_non_ho_type_6_6_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_hlds__inst_mode_type_prop__tprop_record__arity4__hlds__inst_mode_type_prop__base_info__arity0__unit__unit__arity0__unit__unit__arity0__unit__unit__arity0__[16] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 4)),
  ((MR_Box) ((MR_Integer) 11)),
  ((MR_Box) (hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__base_info__arity0__unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______hlds__inst_mode_type_prop__get_module_info_1_1_f_0_10001)),
  ((MR_Box) (hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__base_info__arity0__unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______hlds__inst_mode_type_prop__step_into_bound_functor_3_3_p_0_10001)),
  ((MR_Box) (hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__base_info__arity0__unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______hlds__inst_mode_type_prop__step_into_tuple_inst_2_2_p_0_10001)),
  ((MR_Box) (hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__base_info__arity0__unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______hlds__inst_mode_type_prop__step_into_ho_inst_4_4_p_0_10001)),
  ((MR_Box) (hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__base_info__arity0__unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______hlds__inst_mode_type_prop__args_slot_to_context_3_3_p_0_10001)),
  ((MR_Box) (hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__base_info__arity0__unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______hlds__inst_mode_type_prop__user_inst_expansion_to_context_3_3_p_0_10001)),
  ((MR_Box) (hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__base_info__arity0__unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______hlds__inst_mode_type_prop__check_for_bad_use_of_user_inst_8_8_p_0_10001)),
  ((MR_Box) (hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__base_info__arity0__unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______hlds__inst_mode_type_prop__check_cons_id_qualifier_8_8_p_0_10001)),
  ((MR_Box) (hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__base_info__arity0__unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______hlds__inst_mode_type_prop__report_missing_cons_id_5_5_p_0_10001)),
  ((MR_Box) (hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__base_info__arity0__unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______hlds__inst_mode_type_prop__report_wrong_arity_ho_inst_8_8_p_0_10001)),
  ((MR_Box) (hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__base_info__arity0__unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______hlds__inst_mode_type_prop__report_ho_inst_for_non_ho_type_6_6_p_0_10001))
};

static const MR_ConstString hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__type_class_id_var_names_tprop_record_4[4] = {
  (MR_String) "Info",
  (MR_String) "Context",
  (MR_String) "Args",
  (MR_String) "Errors"
};

static const MR_TypeClassMethod hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__type_class_id_method_ids_tprop_record_4[11] = {
  {
    (MR_String) "get_module_info",
    (MR_Integer) 2,
    MR_FUNCTION
  },
  {
    (MR_String) "step_into_bound_functor",
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
  },
  {
    (MR_String) "check_cons_id_qualifier",
    (MR_Integer) 8,
    MR_PREDICATE
  },
  {
    (MR_String) "report_missing_cons_id",
    (MR_Integer) 5,
    MR_PREDICATE
  },
  {
    (MR_String) "report_wrong_arity_ho_inst",
    (MR_Integer) 8,
    MR_PREDICATE
  },
  {
    (MR_String) "report_ho_inst_for_non_ho_type",
    (MR_Integer) 6,
    MR_PREDICATE
  }
};

static const MR_TypeClassId hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__type_class_id_tprop_record_4 = {
  (MR_String) "hlds.inst_mode_type_prop",
  (MR_String) "tprop_record",
  (MR_Integer) 4,
  (MR_Integer) 4,
  (MR_Integer) 11,
  hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__type_class_id_var_names_tprop_record_4,
  hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__type_class_id_method_ids_tprop_record_4
};

const MR_TypeClassDeclStruct hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__type_class_decl_tprop_record_4 = {
  &hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__type_class_id_tprop_record_4,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL
};

static void MR_CALL 
hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__base_info__arity0__unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______hlds__inst_mode_type_prop__report_ho_inst_for_non_ho_type_6_6_p_0(
  MR_Word HeadVar__1_40,
  MR_Word HeadVar__3_42,
  MR_Word HeadVar__4_43)
{
}

static void MR_CALL 
hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__base_info__arity0__unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______hlds__inst_mode_type_prop__report_wrong_arity_ho_inst_8_8_p_0(
  MR_Word HeadVar__1_36,
  MR_Word HeadVar__3_38,
  MR_Word HeadVar__4_39,
  MR_Word HeadVar__5_40,
  MR_Word HeadVar__6_41)
{
}

static void MR_CALL 
hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__base_info__arity0__unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______hlds__inst_mode_type_prop__report_missing_cons_id_5_5_p_0(
  MR_Word HeadVar__2_31,
  MR_Word HeadVar__3_32)
{
}

static void MR_CALL 
hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__base_info__arity0__unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______hlds__inst_mode_type_prop__check_cons_id_qualifier_8_8_p_0(
  MR_Word HeadVar__2_28,
  MR_Word HeadVar__3_29,
  MR_Word HeadVar__4_30,
  MR_String HeadVar__5_31,
  MR_Integer HeadVar__6_32)
{
}

static void MR_CALL 
hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__base_info__arity0__unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______hlds__inst_mode_type_prop__check_for_bad_use_of_user_inst_8_8_p_0(
  MR_Word HeadVar__1_21,
  MR_Word HeadVar__3_23,
  MR_Word HeadVar__4_24,
  MR_Word Cache_25,
  MR_Word * Cache_6)
{
  *Cache_6 = Cache_25;
}

static MR_bool MR_CALL 
hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__base_info__arity0__unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______hlds__inst_mode_type_prop__user_inst_expansion_to_context_3_3_p_0(
  MR_Word HeadVar__2_14)
{
  return MR_FALSE;
}

static void MR_CALL 
hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__base_info__arity0__unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______hlds__inst_mode_type_prop__args_slot_to_context_3_3_p_0(
  MR_Integer HeadVar__2_12)
{
}

static void MR_CALL 
hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__base_info__arity0__unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______hlds__inst_mode_type_prop__step_into_ho_inst_4_4_p_0(
  MR_Word HeadVar__1_9,
  MR_Word HeadVar__2_10)
{
}

static void MR_CALL 
hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__base_info__arity0__unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______hlds__inst_mode_type_prop__step_into_tuple_inst_2_2_p_0(void)
{
}

static void MR_CALL 
hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__base_info__arity0__unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______hlds__inst_mode_type_prop__step_into_bound_functor_3_3_p_0(
  MR_Word HeadVar__1_5)
{
}

static MR_Word MR_CALL 
hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__base_info__arity0__unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______hlds__inst_mode_type_prop__get_module_info_1_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word ModuleInfo_3 = (MR_Word) (HeadVar__1_1);

  return ModuleInfo_3;
}

static void MR_CALL 
hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__tprop_info__arity0__hlds__inst_mode_type_prop__tprop_context__arity0__hlds__inst_mode_type_prop__tprop_args__arity0__hlds__inst_mode_type_prop__tprop_errors__arity0______hlds__inst_mode_type_prop__report_ho_inst_for_non_ho_type_6_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6)
{
  MR_Word ModuleInfo_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
  MR_Word TypeVarSet_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
  MR_Word InstVarSet_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
  MR_Word Context_10;
  MR_Word LocnPieces_11;
  MR_Word TypePieces_13;
  MR_Word InstPieces0_14;
  MR_Word InstPieces_15;
  MR_Word Pieces_16;
  MR_Word Spec_17;
  MR_Word Specs0_18;
  MR_Word Specs_19;
  MR_Word Var_41;
  MR_Word Var_46;
  MR_Word Var_47;
  MR_Word Var_49;
  MR_Word Var_50;
  MR_Word Var_51;

  hlds__inst_mode_type_prop__tprop_context_to_pieces_3_p_0(HeadVar__2_2, &Context_10, &LocnPieces_11);
  TypePieces_13 = parse_tree__error_type_util__type_to_pieces_6_f_0(TypeVarSet_8, InstVarSet_9, (MR_Integer) 0, (MR_Integer) 1, (MR_Word) ((MR_Unsigned) 0U), HeadVar__3_3);
  InstPieces0_14 = hlds__error_msg_inst__error_msg_inst_10_f_0(ModuleInfo_7, InstVarSet_9, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Word) (MR_mkword(1, &hlds__inst_mode_type_prop_scalar_common_1[9])), (MR_Word) (MR_mkword(1, &hlds__inst_mode_type_prop_scalar_common_1[23])), (MR_Word) (MR_mkword(1, &hlds__inst_mode_type_prop_scalar_common_1[9])), (MR_Word) (MR_mkword(1, &hlds__inst_mode_type_prop_scalar_common_1[23])), HeadVar__4_4);
  InstPieces_15 = parse_tree__error_spec__color_as_incorrect_1_f_0(InstPieces0_14);
  Var_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), TypePieces_13, (MR_Word) (MR_mkword(1, &hlds__inst_mode_type_prop_scalar_common_1[17])));
  Var_50 = parse_tree__error_spec__color_as_correct_1_f_0(Var_51);
  Var_49 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_50, (MR_Word) (MR_mkword(1, &hlds__inst_mode_type_prop_scalar_common_1[23])));
  Var_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__inst_mode_type_prop_scalar_common_1[59])), Var_49);
  Var_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InstPieces_15, Var_47);
  Var_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__inst_mode_type_prop_scalar_common_1[41])), Var_46);
  Pieces_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), LocnPieces_11, Var_41);
  {
    Spec_17 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_17, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.inst_mode_type_prop.do_report_ho_inst_for_non_ho_type\'/6"));
    MR_hl_field(0, Spec_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Spec_17, 2) = ((MR_Box) ((MR_Unsigned) 56U));
    MR_hl_field(0, Spec_17, 3) = ((MR_Box) (Context_10));
    MR_hl_field(0, Spec_17, 4) = ((MR_Box) (Pieces_16));
  }
  Specs0_18 = (MR_Word) (HeadVar__5_5);
  {
    Specs_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Specs_19, 0) = ((MR_Box) (Spec_17));
    MR_hl_field(1, Specs_19, 1) = ((MR_Box) (Specs0_18));
  }
  *HeadVar__6_6 = (MR_Word) (Specs_19);
}

static void MR_CALL 
hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__tprop_info__arity0__hlds__inst_mode_type_prop__tprop_context__arity0__hlds__inst_mode_type_prop__tprop_args__arity0__hlds__inst_mode_type_prop__tprop_errors__arity0______hlds__inst_mode_type_prop__report_wrong_arity_ho_inst_8_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word HeadVar__7_7,
  MR_Word * HeadVar__8_8)
{
  MR_Word ModuleInfo_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
  MR_Word TypeVarSet_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
  MR_Word InstVarSet_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
  MR_Word Context_12;
  MR_Word LocnPieces_13;
  MR_Word InstPieces0_14;
  MR_Word InstPieces_15;
  MR_Word TypePieces_17;
  MR_Integer TypeArity_18;
  MR_Integer InstArity_19;
  MR_Word Pieces_20;
  MR_Word Spec_21;
  MR_Word Specs0_22;
  MR_Word Specs_23;
  MR_Word Var_45;
  MR_Word Var_50;
  MR_Word Var_51;
  MR_Word Var_53;
  MR_Word Var_54;
  MR_Word Var_55;
  MR_Word Var_60;
  MR_Word Var_62;
  MR_Word Var_63;
  MR_Word Var_64;
  MR_Word Var_65;
  MR_Word Var_67;
  MR_Word Var_69;
  MR_Word Var_70;
  MR_Word Var_71;
  MR_Word Var_72;

  hlds__inst_mode_type_prop__tprop_context_to_pieces_3_p_0(HeadVar__2_2, &Context_12, &LocnPieces_13);
  InstPieces0_14 = hlds__error_msg_inst__error_msg_inst_10_f_0(ModuleInfo_9, InstVarSet_11, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Word) (MR_mkword(1, &hlds__inst_mode_type_prop_scalar_common_1[9])), (MR_Word) (MR_mkword(1, &hlds__inst_mode_type_prop_scalar_common_1[23])), (MR_Word) (MR_mkword(1, &hlds__inst_mode_type_prop_scalar_common_1[9])), (MR_Word) (MR_mkword(1, &hlds__inst_mode_type_prop_scalar_common_1[23])), HeadVar__5_5);
  InstPieces_15 = parse_tree__error_spec__color_as_incorrect_1_f_0(InstPieces0_14);
  TypePieces_17 = parse_tree__error_type_util__type_to_pieces_6_f_0(TypeVarSet_10, InstVarSet_11, (MR_Integer) 0, (MR_Integer) 1, (MR_Word) ((MR_Unsigned) 0U), HeadVar__3_3);
  mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), HeadVar__4_4, &TypeArity_18);
  mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), HeadVar__6_6, &InstArity_19);
  Var_55 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), TypePieces_17, (MR_Word) (MR_mkword(1, &hlds__inst_mode_type_prop_scalar_common_1[17])));
  Var_54 = parse_tree__error_spec__color_as_correct_1_f_0(Var_55);
  {
    Var_65 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_65, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, Var_65, 1) = ((MR_Box) (TypeArity_18));
  }
  {
    Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_64, 0) = ((MR_Box) (Var_65));
    MR_hl_field(1, Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_63 = parse_tree__error_spec__color_as_correct_1_f_0(Var_64);
  {
    Var_72 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_72, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, Var_72, 1) = ((MR_Box) (InstArity_19));
  }
  {
    Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_71, 0) = ((MR_Box) (Var_72));
    MR_hl_field(1, Var_71, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_70 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_71);
  Var_69 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_70, (MR_Word) (MR_mkword(1, &hlds__inst_mode_type_prop_scalar_common_1[56])));
  Var_67 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__inst_mode_type_prop_scalar_common_1[54])), Var_69);
  Var_62 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_63, Var_67);
  Var_60 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__inst_mode_type_prop_scalar_common_1[50])), Var_62);
  Var_53 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_54, Var_60);
  Var_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__inst_mode_type_prop_scalar_common_1[45])), Var_53);
  Var_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InstPieces_15, Var_51);
  Var_45 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__inst_mode_type_prop_scalar_common_1[41])), Var_50);
  Pieces_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), LocnPieces_13, Var_45);
  {
    Spec_21 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_21, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.inst_mode_type_prop.do_report_wrong_arity_ho_inst\'/8"));
    MR_hl_field(0, Spec_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Spec_21, 2) = ((MR_Box) ((MR_Unsigned) 56U));
    MR_hl_field(0, Spec_21, 3) = ((MR_Box) (Context_12));
    MR_hl_field(0, Spec_21, 4) = ((MR_Box) (Pieces_20));
  }
  Specs0_22 = (MR_Word) (HeadVar__7_7);
  {
    Specs_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Specs_23, 0) = ((MR_Box) (Spec_21));
    MR_hl_field(1, Specs_23, 1) = ((MR_Box) (Specs0_22));
  }
  *HeadVar__8_8 = (MR_Word) (Specs_23);
}

static void MR_CALL 
hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__tprop_info__arity0__hlds__inst_mode_type_prop__tprop_context__arity0__hlds__inst_mode_type_prop__tprop_args__arity0__hlds__inst_mode_type_prop__tprop_errors__arity0______hlds__inst_mode_type_prop__report_missing_cons_id_5_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  MR_Word Context_6;
  MR_Word TPropContextPieces_7;
  MR_Word Pieces_8;
  MR_Word Spec_9;
  MR_Word Specs0_10;
  MR_Word Specs_11;
  MR_Word Var_12;
  MR_Word Var_17;
  MR_Word Var_18;
  MR_Word Var_19;
  MR_Word Var_20;
  MR_Word Var_22;
  MR_Word Var_25;
  MR_Word Var_28;
  MR_Word Var_29;

  hlds__inst_mode_type_prop__tprop_context_to_pieces_3_p_0(HeadVar__1_1, &Context_6, &TPropContextPieces_7);
  {
    Var_20 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_20, 0) = ((MR_Box) ((MR_Unsigned) 29U));
    MR_hl_field(3, Var_20, 1) = ((MR_Box) (HeadVar__3_3));
  }
  {
    Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_19, 0) = ((MR_Box) (Var_20));
    MR_hl_field(1, Var_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_18 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_19);
  {
    Var_29 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_29, 0) = ((MR_Box) ((MR_Unsigned) 20U));
    MR_hl_field(3, Var_29, 1) = ((MR_Box) (HeadVar__2_2));
  }
  {
    Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_28, 0) = ((MR_Box) (Var_29));
    MR_hl_field(1, Var_28, 1) = ((MR_Box) (MR_mkword(1, &hlds__inst_mode_type_prop_scalar_common_1[39])));
  }
  {
    Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_25, 0) = ((MR_Box) (MR_mkword(3, &hlds__inst_mode_type_prop_scalar_common_1[36])));
    MR_hl_field(1, Var_25, 1) = ((MR_Box) (Var_28));
  }
  {
    Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_22, 0) = ((MR_Box) (MR_mkword(3, &hlds__inst_mode_type_prop_scalar_common_1[35])));
    MR_hl_field(1, Var_22, 1) = ((MR_Box) (Var_25));
  }
  Var_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_18, Var_22);
  Var_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__inst_mode_type_prop_scalar_common_1[34])), Var_17);
  Pieces_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), TPropContextPieces_7, Var_12);
  {
    Spec_9 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_9, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.inst_mode_type_prop.do_report_missing_cons_id\'/5"));
    MR_hl_field(0, Spec_9, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Spec_9, 2) = ((MR_Box) ((MR_Unsigned) 56U));
    MR_hl_field(0, Spec_9, 3) = ((MR_Box) (Context_6));
    MR_hl_field(0, Spec_9, 4) = ((MR_Box) (Pieces_8));
  }
  Specs0_10 = (MR_Word) (HeadVar__4_4);
  {
    Specs_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Specs_11, 0) = ((MR_Box) (Spec_9));
    MR_hl_field(1, Specs_11, 1) = ((MR_Box) (Specs0_10));
  }
  *HeadVar__5_5 = (MR_Word) (Specs_11);
}

static void MR_CALL 
hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__tprop_info__arity0__hlds__inst_mode_type_prop__tprop_context__arity0__hlds__inst_mode_type_prop__tprop_args__arity0__hlds__inst_mode_type_prop__tprop_errors__arity0______hlds__inst_mode_type_prop__check_cons_id_qualifier_8_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_String HeadVar__5_5,
  MR_Integer HeadVar__6_6,
  MR_Word HeadVar__7_7,
  MR_Word * HeadVar__8_8)
{
  MR_bool succeeded;

  succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0(HeadVar__4_4, HeadVar__3_3);
  if (succeeded)
    *HeadVar__8_8 = HeadVar__7_7;
  else
  {
    MR_Word Context_9;
    MR_Word LocnPieces_10;
    MR_Word ConsNA_11;
    MR_Word Pieces_12;
    MR_Word Spec_13;
    MR_Word Specs0_14;
    MR_Word Specs_15;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_34;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_39;

    hlds__inst_mode_type_prop__tprop_context_to_pieces_3_p_0(HeadVar__1_1, &Context_9, &LocnPieces_10);
    {
      ConsNA_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ConsNA_11, 0) = ((MR_Box) (HeadVar__5_5));
      MR_hl_field(0, ConsNA_11, 1) = ((MR_Box) (HeadVar__6_6));
    }
    {
      Var_21 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_21, 0) = ((MR_Box) ((MR_Unsigned) 13U));
      MR_hl_field(3, Var_21, 1) = ((MR_Box) (ConsNA_11));
    }
    {
      Var_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_20, 0) = ((MR_Box) (Var_21));
      MR_hl_field(1, Var_20, 1) = ((MR_Box) (MR_mkword(1, &hlds__inst_mode_type_prop_scalar_common_1[26])));
    }
    {
      Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_17, 0) = ((MR_Box) (MR_mkword(3, &hlds__inst_mode_type_prop_scalar_common_1[24])));
      MR_hl_field(1, Var_17, 1) = ((MR_Box) (Var_20));
    }
    {
      Var_29 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_29, 0) = ((MR_Box) ((MR_Unsigned) 11U));
      MR_hl_field(3, Var_29, 1) = ((MR_Box) (HeadVar__4_4));
    }
    {
      Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_28, 0) = ((MR_Box) (Var_29));
      MR_hl_field(1, Var_28, 1) = ((MR_Box) (MR_mkword(1, &hlds__inst_mode_type_prop_scalar_common_1[17])));
    }
    Var_27 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_28);
    {
      Var_39 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_39, 0) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(3, Var_39, 1) = ((MR_Box) (HeadVar__2_2));
    }
    {
      Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_38, 0) = ((MR_Box) (Var_39));
      MR_hl_field(1, Var_38, 1) = ((MR_Box) (MR_mkword(1, &hlds__inst_mode_type_prop_scalar_common_1[22])));
    }
    Var_37 = parse_tree__error_spec__color_as_correct_1_f_0(Var_38);
    Var_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_37, (MR_Word) (MR_mkword(1, &hlds__inst_mode_type_prop_scalar_common_1[33])));
    Var_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__inst_mode_type_prop_scalar_common_1[32])), Var_36);
    Var_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_27, Var_34);
    Var_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_17, Var_26);
    Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), LocnPieces_10, Var_16);
    {
      Spec_13 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_13, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.inst_mode_type_prop.do_check_cons_id_qualifier\'/8"));
      MR_hl_field(0, Spec_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_13, 2) = ((MR_Box) ((MR_Unsigned) 56U));
      MR_hl_field(0, Spec_13, 3) = ((MR_Box) (Context_9));
      MR_hl_field(0, Spec_13, 4) = ((MR_Box) (Pieces_12));
    }
    Specs0_14 = (MR_Word) (HeadVar__7_7);
    {
      Specs_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Specs_15, 0) = ((MR_Box) (Spec_13));
      MR_hl_field(1, Specs_15, 1) = ((MR_Box) (Specs0_14));
    }
    *HeadVar__8_8 = (MR_Word) (Specs_15);
  }
}

static void MR_CALL 
hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__tprop_info__arity0__hlds__inst_mode_type_prop__tprop_context__arity0__hlds__inst_mode_type_prop__tprop_args__arity0__hlds__inst_mode_type_prop__tprop_errors__arity0______hlds__inst_mode_type_prop__check_for_bad_use_of_user_inst_8_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word HeadVar__7_7,
  MR_Word * HeadVar__8_8)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) HeadVar__3_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word SymName_29 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
        MR_Word ArgInsts_30 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
        MR_Word Result_31;

        succeeded = hlds__inst_mode_type_prop__result_is_in_tprop_cache_5_p_0(HeadVar__5_5, HeadVar__4_4, SymName_29, ArgInsts_30, &Result_31);
        if (succeeded)
        {
          if ((Result_31 == (MR_Word) ((MR_Unsigned) 0U)))
            *HeadVar__8_8 = HeadVar__7_7;
          else
          {
            MR_Word InstCtor_32 = ((MR_Word) ((MR_hl_field(1, Result_31, 0))));
            MR_Word InstForTypeCtor_33 = ((MR_Word) ((MR_hl_field(1, Result_31, 1))));
            MR_Word TypeCtor_34 = ((MR_Word) ((MR_hl_field(1, Result_31, 2))));

            hlds__inst_mode_type_prop__do_record_bad_use_of_user_inst_6_p_0(HeadVar__2_2, InstCtor_32, InstForTypeCtor_33, TypeCtor_34, HeadVar__7_7, HeadVar__8_8);
          }
          *HeadVar__6_6 = HeadVar__5_5;
        }
        else
        {
          MR_Word ModuleInfo_37 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
          MR_Word InstTable_40;
          MR_Word UserInstTable_41;
          MR_Integer Arity_42;
          MR_Word InstCtor_67;
          MR_Word InstDefn_43;
          MR_Box conv0_InstDefn_43;

          hlds__hlds_module__module_info_get_inst_table_2_p_0(ModuleInfo_37, &InstTable_40);
          hlds__hlds_inst_mode__inst_table_get_user_insts_2_p_0(InstTable_40, &UserInstTable_41);
          mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), ArgInsts_30, &Arity_42);
          {
            InstCtor_67 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, InstCtor_67, 0) = ((MR_Box) (SymName_29));
            MR_hl_field(0, InstCtor_67, 1) = ((MR_Box) (Arity_42));
          }
          succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_inst_defn_0), UserInstTable_41, ((MR_Box) (InstCtor_67)), &conv0_InstDefn_43);
          if (succeeded)
          {
            InstDefn_43 = ((MR_Word) (conv0_InstDefn_43));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            MR_Word SymNameArity_44;
            MR_Word UserInstInfo_45;
            MR_Word STATE_VARIABLE_Errors_2_62;
            MR_Word STATE_VARIABLE_Cache_1_63;
            MR_Word Result_66;
            MR_Word InstForTypeCtor_64;
            MR_Word TypeCtor_65;
            MR_Word MaybeInstForTypeCtor_46;

            {
              SymNameArity_44 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, SymNameArity_44, 0) = ((MR_Box) (SymName_29));
              MR_hl_field(0, SymNameArity_44, 1) = ((MR_Box) (Arity_42));
            }
            {
              UserInstInfo_45 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, UserInstInfo_45, 0) = ((MR_Box) (SymNameArity_44));
              MR_hl_field(0, UserInstInfo_45, 1) = ((MR_Box) (ArgInsts_30));
              MR_hl_field(0, UserInstInfo_45, 2) = ((MR_Box) (InstDefn_43));
            }
            MaybeInstForTypeCtor_46 = ((MR_Word) ((MR_hl_field(0, InstDefn_43, 3))));
            succeeded = ((MR_tag((MR_Word) MaybeInstForTypeCtor_46)) == (MR_Integer) 1);
            if (succeeded)
            {
              InstForTypeCtor_64 = ((MR_Word) ((MR_hl_field(1, MaybeInstForTypeCtor_46, 0))));
              succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(HeadVar__4_4, &TypeCtor_65);
              if (succeeded)
              {
                succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(TypeCtor_65, InstForTypeCtor_64);
                succeeded = !(succeeded);
              }
            }
            if (succeeded)
            {
              {
                Result_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Result_66, 0) = ((MR_Box) (InstCtor_67));
                MR_hl_field(1, Result_66, 1) = ((MR_Box) (InstForTypeCtor_64));
                MR_hl_field(1, Result_66, 2) = ((MR_Box) (TypeCtor_65));
              }
              hlds__inst_mode_type_prop__do_record_bad_use_of_user_inst_6_p_0(HeadVar__2_2, InstCtor_67, InstForTypeCtor_64, TypeCtor_65, HeadVar__7_7, &STATE_VARIABLE_Errors_2_62);
            }
            else
            {
              Result_66 = (MR_Word) ((MR_Unsigned) 0U);
              STATE_VARIABLE_Errors_2_62 = HeadVar__7_7;
            }
            hlds__inst_mode_type_prop__record_result_in_tprop_cache_6_p_0(HeadVar__4_4, SymName_29, ArgInsts_30, Result_66, HeadVar__5_5, &STATE_VARIABLE_Cache_1_63);
            hlds__inst_mode_type_prop__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_104_101_99_107_95_117_115_101_114_95_105_110_115_116_95_97_114_103_115_95_95_91_73_110_102_111_32_61_32_104_108_100_115_46_105_110_115_116_95_109_111_100_101_95_116_121_112_101_95_112_114_111_112_46_116_112_114_111_112_95_105_110_102_111_44_32_67_111_110_116_101_120_116_32_61_32_104_108_100_115_46_105_110_115_116_95_109_111_100_101_95_116_121_112_101_95_112_114_111_112_46_116_112_114_111_112_95_99_111_110_116_101_120_116_44_32_65_114_103_115_32_61_32_104_108_100_115_46_105_110_115_116_95_109_111_100_101_95_116_121_112_101_95_112_114_111_112_46_116_112_114_111_112_95_97_114_103_115_44_32_69_114_114_111_114_115_32_61_32_104_108_100_115_46_105_110_115_116_95_109_111_100_101_95_116_121_112_101_95_112_114_111_112_46_116_112_114_111_112_95_101_114_114_111_114_115_93_95_48_95_49_8_p_0((MR_Word) (&hlds__inst_mode_type_prop_scalar_common_3[1]), HeadVar__1_1, HeadVar__4_4, HeadVar__2_2, UserInstInfo_45, STATE_VARIABLE_Cache_1_63, HeadVar__6_6, STATE_VARIABLE_Errors_2_62, HeadVar__8_8);
          }
          else
          {
            *HeadVar__8_8 = HeadVar__7_7;
            *HeadVar__6_6 = HeadVar__5_5;
          }
        }
      }
      break;
    case (MR_Integer) 1:
      {
        *HeadVar__6_6 = HeadVar__5_5;
        *HeadVar__8_8 = HeadVar__7_7;
      }
      break;
    case (MR_Integer) 2:
      {
        *HeadVar__6_6 = HeadVar__5_5;
        *HeadVar__8_8 = HeadVar__7_7;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *HeadVar__6_6 = HeadVar__5_5;
            *HeadVar__8_8 = HeadVar__7_7;
          }
          break;
        case (MR_Integer) 1:
          {
            *HeadVar__6_6 = HeadVar__5_5;
            *HeadVar__8_8 = HeadVar__7_7;
          }
          break;
        case (MR_Integer) 2:
          {
            *HeadVar__6_6 = HeadVar__5_5;
            *HeadVar__8_8 = HeadVar__7_7;
          }
          break;
        case (MR_Integer) 3:
          {
            *HeadVar__6_6 = HeadVar__5_5;
            *HeadVar__8_8 = HeadVar__7_7;
          }
          break;
        case (MR_Integer) 4:
          {
            *HeadVar__6_6 = HeadVar__5_5;
            *HeadVar__8_8 = HeadVar__7_7;
          }
          break;
        case (MR_Integer) 5:
          {
            *HeadVar__6_6 = HeadVar__5_5;
            *HeadVar__8_8 = HeadVar__7_7;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
hlds__inst_mode_type_prop__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_104_101_99_107_95_117_115_101_114_95_105_110_115_116_95_97_114_103_115_95_95_91_73_110_102_111_32_61_32_104_108_100_115_46_105_110_115_116_95_109_111_100_101_95_116_121_112_101_95_112_114_111_112_46_116_112_114_111_112_95_105_110_102_111_44_32_67_111_110_116_101_120_116_32_61_32_104_108_100_115_46_105_110_115_116_95_109_111_100_101_95_116_121_112_101_95_112_114_111_112_46_116_112_114_111_112_95_99_111_110_116_101_120_116_44_32_65_114_103_115_32_61_32_104_108_100_115_46_105_110_115_116_95_109_111_100_101_95_116_121_112_101_95_112_114_111_112_46_116_112_114_111_112_95_97_114_103_115_44_32_69_114_114_111_114_115_32_61_32_104_108_100_115_46_105_110_115_116_95_109_111_100_101_95_116_121_112_101_95_112_114_111_112_46_116_112_114_111_112_95_101_114_114_111_114_115_93_95_48_95_49_8_p_0(
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
  MR_Word SymNameArity_15 = ((MR_Word) ((MR_hl_field(0, UserInstInfo_12, 0))));
  MR_Word InstArgs_16 = ((MR_Word) ((MR_hl_field(0, UserInstInfo_12, 1))));
  MR_Word InstDefn_17 = ((MR_Word) ((MR_hl_field(0, UserInstInfo_12, 2))));
  MR_Word Params_19 = ((MR_Word) ((MR_hl_field(0, InstDefn_17, 1))));
  MR_Word InstBody_20 = ((MR_Word) ((MR_hl_field(0, InstDefn_17, 2))));
  MR_Word Inst0_24 = (MR_Word) (InstBody_20);
  MR_Word Inst1_25;
  MR_Word SubContext_26;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv1_SubContext_26;

  parse_tree__prog_mode__inst_substitute_arg_list_4_p_0(Params_19, InstArgs_16, Inst0_24, &Inst1_25);
  func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_tprop_record_32, 0)), 10))));
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
      MR_Word ModuleInfo_33;
      MR_Box MR_CALL (* func_2)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_tprop_record_32, 0)), 5))));
      MR_Box conv3_ModuleInfo_33;
      MR_Word Constructors_34;

      conv3_ModuleInfo_33 = func_2(((MR_Box) (TypeClassInfo_for_tprop_record_32)), ((MR_Box) (ModuleInfo_9)));
      ModuleInfo_33 = ((MR_Word) (conv3_ModuleInfo_33));
      succeeded = hlds__type_util__type_constructors_3_p_0(ModuleInfo_33, Type_10, &Constructors_34);
      if (succeeded)
      {
        MR_Word _Inst_27;
        MR_Box conv4_STATE_VARIABLE_Errors_31;

        hlds__inst_mode_type_prop__propagate_type_into_inst_eagerly_10_p_0(TypeClassInfo_for_tprop_record_32, ((MR_Box) (ModuleInfo_9)), ((MR_Box) (SubContext_26)), Type_10, Constructors_34, Inst1_25, &_Inst_27, STATE_VARIABLE_Cache_0_28, STATE_VARIABLE_Cache_29, ((MR_Box) (STATE_VARIABLE_Errors_0_30)), &conv4_STATE_VARIABLE_Errors_31);
        *STATE_VARIABLE_Errors_31 = ((MR_Word) (conv4_STATE_VARIABLE_Errors_31));
      }
      else
      {
        *STATE_VARIABLE_Errors_31 = STATE_VARIABLE_Errors_0_30;
        *STATE_VARIABLE_Cache_29 = STATE_VARIABLE_Cache_0_28;
      }
    }
    else
    {
      MR_Word _Inst_37;
      MR_Box conv5_STATE_VARIABLE_Errors_31;

      hlds__inst_mode_type_prop__propagate_type_into_inst_lazily_9_p_0(TypeClassInfo_for_tprop_record_32, ((MR_Box) (ModuleInfo_9)), ((MR_Box) (SubContext_26)), Type_10, Inst1_25, &_Inst_37, STATE_VARIABLE_Cache_0_28, STATE_VARIABLE_Cache_29, ((MR_Box) (STATE_VARIABLE_Errors_0_30)), &conv5_STATE_VARIABLE_Errors_31);
      *STATE_VARIABLE_Errors_31 = ((MR_Word) (conv5_STATE_VARIABLE_Errors_31));
    }
  }
  else
  {
    *STATE_VARIABLE_Errors_31 = STATE_VARIABLE_Errors_0_30;
    *STATE_VARIABLE_Cache_29 = STATE_VARIABLE_Cache_0_28;
  }
}

static MR_bool MR_CALL 
hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__tprop_info__arity0__hlds__inst_mode_type_prop__tprop_context__arity0__hlds__inst_mode_type_prop__tprop_args__arity0__hlds__inst_mode_type_prop__tprop_errors__arity0______hlds__inst_mode_type_prop__user_inst_expansion_to_context_3_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Word Inside_4;

  Inside_4 = hlds__inst_mode_type_prop__are_we_already_inside_user_inst_expansion_2_f_0(HeadVar__1_1, HeadVar__2_2);
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
hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__tprop_info__arity0__hlds__inst_mode_type_prop__tprop_context__arity0__hlds__inst_mode_type_prop__tprop_args__arity0__hlds__inst_mode_type_prop__tprop_errors__arity0______hlds__inst_mode_type_prop__args_slot_to_context_3_3_p_0(
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
hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__tprop_info__arity0__hlds__inst_mode_type_prop__tprop_context__arity0__hlds__inst_mode_type_prop__tprop_args__arity0__hlds__inst_mode_type_prop__tprop_errors__arity0______hlds__inst_mode_type_prop__step_into_ho_inst_4_4_p_0(
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
hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__tprop_info__arity0__hlds__inst_mode_type_prop__tprop_context__arity0__hlds__inst_mode_type_prop__tprop_args__arity0__hlds__inst_mode_type_prop__tprop_errors__arity0______hlds__inst_mode_type_prop__step_into_tuple_inst_2_2_p_0(
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
hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__tprop_info__arity0__hlds__inst_mode_type_prop__tprop_context__arity0__hlds__inst_mode_type_prop__tprop_args__arity0__hlds__inst_mode_type_prop__tprop_errors__arity0______hlds__inst_mode_type_prop__step_into_bound_functor_3_3_p_0(
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

static MR_Word MR_CALL 
hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__tprop_info__arity0__hlds__inst_mode_type_prop__tprop_context__arity0__hlds__inst_mode_type_prop__tprop_args__arity0__hlds__inst_mode_type_prop__tprop_errors__arity0______hlds__inst_mode_type_prop__get_module_info_1_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word ModuleInfo_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));

  return ModuleInfo_3;
}

static void MR_CALL 
hlds__inst_mode_type_prop____Compare____user_inst_info_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word SubResult1_6;

    parse_tree__prog_data____Compare____sym_name_arity_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__inst_mode_type_prop_scalar_common_1[0]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
        hlds__hlds_inst_mode____Compare____hlds_inst_defn_0_0(HeadVar__1_1, ArgX3_10, ArgY3_11);
    }
  }
}

static MR_bool MR_CALL 
hlds__inst_mode_type_prop____Unify____user_inst_info_0_0(
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));

    succeeded = parse_tree__prog_data____Unify____sym_name_arity_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      TypeInfo_12_12 = (MR_Word) (&hlds__inst_mode_type_prop_scalar_common_1[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
        succeeded = hlds__hlds_inst_mode____Unify____hlds_inst_defn_0_0(ArgX3_7, ArgY3_8);
    }
  }
  return succeeded;
}

void MR_CALL 
hlds__inst_mode_type_prop____Compare____tprop_info_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word SubResult1_6;

    hlds__hlds_module____Compare____module_info_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__inst_mode_type_prop_scalar_common_1[4]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__inst_mode_type_prop_scalar_common_1[5]), HeadVar__1_1, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
    }
  }
}

MR_bool MR_CALL 
hlds__inst_mode_type_prop____Unify____tprop_info_0_0(
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
    MR_Word TypeInfo_13_13;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));

    succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      TypeInfo_12_12 = (MR_Word) (&hlds__inst_mode_type_prop_scalar_common_1[4]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        TypeInfo_13_13 = (MR_Word) (&hlds__inst_mode_type_prop_scalar_common_1[5]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
hlds__inst_mode_type_prop____Compare____tprop_errors_0_0(
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

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__inst_mode_type_prop_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
  }
}

static MR_bool MR_CALL 
hlds__inst_mode_type_prop____Unify____tprop_errors_0_0(
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

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__inst_mode_type_prop_scalar_common_1[3]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
  }
  return succeeded;
}

void MR_CALL 
hlds__inst_mode_type_prop____Compare____tprop_cache_result_0_0(
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
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 2))));
    MR_Word SubResult1_6;

    parse_tree__prog_data____Compare____inst_ctor_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      parse_tree__prog_data____Compare____type_ctor_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
        parse_tree__prog_data____Compare____type_ctor_0_0(HeadVar__1_1, ArgX3_10, ArgY3_11);
    }
  }
}

MR_bool MR_CALL 
hlds__inst_mode_type_prop____Unify____tprop_cache_result_0_0(
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
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_10 == CastX_9);
  }
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word ArgY1_4;
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word ArgY2_6;
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 2))));
    MR_Word ArgY3_8;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      ArgY2_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      ArgY3_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
      succeeded = parse_tree__prog_data____Unify____inst_ctor_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
          succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(ArgX3_7, ArgY3_8);
      }
    }
  }
  return succeeded;
}

void MR_CALL 
hlds__inst_mode_type_prop____Compare____tprop_cache_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&hlds__inst_mode_type_prop_scalar_common_2[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
hlds__inst_mode_type_prop____Unify____tprop_cache_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__inst_mode_type_prop_scalar_common_2[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
hlds__inst_mode_type_prop____Compare____tprop_args_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_29 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_30 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_29 == CastY_30);
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

              hlds__hlds_pred____Compare____pred_info_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
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
              MR_Word ArgX1_6 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 0))) & (MR_Integer) 1);
              MR_Word ArgY1_7 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, 0))) & (MR_Integer) 1);
              MR_Word ArgX2_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
              MR_Word ArgY2_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
              MR_Word ArgX3_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
              MR_Word ArgY3_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 2))));
              MR_Word SubResult1_8;
              MR_Integer Var_45 = (MR_Integer) (ArgX1_6);
              MR_Integer Var_46 = (MR_Integer) (ArgY1_7);

              succeeded = (Var_45 < Var_46);
              if (succeeded)
              {
                SubResult1_8 = (MR_Integer) 1;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = (Var_45 > Var_46);
                if (succeeded)
                {
                  SubResult1_8 = (MR_Integer) 2;
                  succeeded = MR_TRUE;
                }
              }
              if (succeeded)
                *HeadVar__1_1 = SubResult1_8;
              else
              {
                MR_Word SubResult2_11;
                MR_Integer Var_47 = (MR_Integer) (ArgX2_9);
                MR_Integer Var_48 = (MR_Integer) (ArgY2_10);

                succeeded = (Var_47 < Var_48);
                if (succeeded)
                {
                  SubResult2_11 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = (Var_47 > Var_48);
                  if (succeeded)
                  {
                    SubResult2_11 = (MR_Integer) 2;
                    succeeded = MR_TRUE;
                  }
                }
                if (succeeded)
                  *HeadVar__1_1 = SubResult2_11;
                else
                  mercury__term_context____Compare____term_context_0_0(HeadVar__1_1, ArgX3_12, ArgY3_13);
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
              MR_Word ArgX2_17 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 1))));
              MR_Word ArgY2_18 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, 1))));
              MR_Word SubResult1_16;

              parse_tree__prog_data____Compare____cons_id_0_0(&SubResult1_16, ArgX1_14, ArgY1_15);
              succeeded = (SubResult1_16 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult1_16;
              else
                hlds__inst_mode_type_prop____Compare____tprop_context_0_0(HeadVar__1_1, ArgX2_17, ArgY2_18);
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

                      hlds__inst_mode_type_prop____Compare____tprop_context_0_0(HeadVar__1_1, ArgX1_19, ArgY1_20);
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
                      MR_Word ArgX1_21 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 1))) & (MR_Integer) 1);
                      MR_Word ArgY1_22 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, 1))) & (MR_Integer) 1);
                      MR_Word ArgX2_24 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                      MR_Word ArgY2_25 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 2))));
                      MR_Word ArgX3_27 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                      MR_Word ArgY3_28 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 3))));
                      MR_Word SubResult1_23;
                      MR_Integer Var_41 = (MR_Integer) (ArgX1_21);
                      MR_Integer Var_42 = (MR_Integer) (ArgY1_22);

                      succeeded = (Var_41 < Var_42);
                      if (succeeded)
                      {
                        SubResult1_23 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (Var_41 > Var_42);
                        if (succeeded)
                        {
                          SubResult1_23 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                      }
                      if (succeeded)
                        *HeadVar__1_1 = SubResult1_23;
                      else
                      {
                        MR_Word SubResult2_26;
                        MR_Integer Var_43 = (MR_Integer) (ArgX2_24);
                        MR_Integer Var_44 = (MR_Integer) (ArgY2_25);

                        succeeded = (Var_43 < Var_44);
                        if (succeeded)
                        {
                          SubResult2_26 = (MR_Integer) 1;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = (Var_43 > Var_44);
                          if (succeeded)
                          {
                            SubResult2_26 = (MR_Integer) 2;
                            succeeded = MR_TRUE;
                          }
                        }
                        if (succeeded)
                          *HeadVar__1_1 = SubResult2_26;
                        else
                          hlds__inst_mode_type_prop____Compare____tprop_context_0_0(HeadVar__1_1, ArgX3_27, ArgY3_28);
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
hlds__inst_mode_type_prop____Compare____tprop_context_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer CastX_14 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_15 = (MR_Integer) (HeadVar__3_3);

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = (CastX_14 == CastY_15);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
      {
        MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
        MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
        MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
        MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 1))));
        MR_Word SubResult1_6;

        hlds__inst_mode_type_prop____Compare____tprop_args_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
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
      else
        *HeadVar__1_1 = (MR_Integer) 1;
    else
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
      *HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word ArgY1_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word ArgX2_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word ArgY2_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word SubResult1_11;

      parse_tree__prog_data____Compare____sym_name_arity_0_0(&SubResult1_11, ArgX1_9, ArgY1_10);
      succeeded = (SubResult1_11 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_11;
      else
      {
        MR_Word next_value_of_HeadVar__2_2 = ArgX2_12;
        MR_Word next_value_of_HeadVar__3_3 = ArgY2_13;

        // direct tailcall eliminated
        ;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        continue;
      }
    }
    break;
  }
}

MR_bool MR_CALL 
hlds__inst_mode_type_prop____Unify____tprop_args_0_0(
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
          MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
          MR_Word ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
            succeeded = hlds__hlds_pred____Unify____pred_info_0_0(ArgX1_3, ArgY1_4);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_5 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, 0))) & (MR_Integer) 1);
          MR_Word ArgY1_6;
          MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
          MR_Word ArgY2_8;
          MR_Word ArgX3_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 2))));
          MR_Word ArgY3_10;
          MR_Integer Var_32;
          MR_Integer Var_33;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 0))) & (MR_Integer) 1);
            ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
            ArgY3_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
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
          MR_Word ArgX1_11 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, 0))));
          MR_Word ArgY1_12;
          MR_Word ArgX2_13 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, 1))));
          MR_Word ArgY2_14;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_12 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 0))));
            ArgY2_14 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 1))));
            succeeded = parse_tree__prog_data____Unify____cons_id_0_0(ArgX1_11, ArgY1_12);
            if (succeeded)
              succeeded = hlds__inst_mode_type_prop____Unify____tprop_context_0_0(ArgX2_13, ArgY2_14);
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

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_16 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                succeeded = hlds__inst_mode_type_prop____Unify____tprop_context_0_0(ArgX1_15, ArgY1_16);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_17 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, 1))) & (MR_Integer) 1);
              MR_Word ArgY1_18;
              MR_Word ArgX2_19 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Word ArgY2_20;
              MR_Word ArgX3_21 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_Word ArgY3_22;
              MR_Integer Var_30;
              MR_Integer Var_31;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_18 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 1))) & (MR_Integer) 1);
                ArgY2_20 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                ArgY3_22 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                succeeded = (ArgX1_17 == ArgY1_18);
                if (succeeded)
                {
                  Var_30 = (MR_Integer) (ArgX2_19);
                  Var_31 = (MR_Integer) (ArgY2_20);
                  succeeded = (Var_30 == Var_31);
                  if (succeeded)
                    succeeded = hlds__inst_mode_type_prop____Unify____tprop_context_0_0(ArgX3_21, ArgY3_22);
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
hlds__inst_mode_type_prop____Unify____tprop_context_0_0(
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
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
      MR_Word ArgY1_4;
      MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 1))));
      MR_Integer ArgY2_6;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
      if (succeeded)
      {
        ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
        ArgY2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
        succeeded = hlds__inst_mode_type_prop____Unify____tprop_args_0_0(ArgX1_3, ArgY1_4);
        if (succeeded)
          succeeded = (ArgX2_5 == ArgY2_6);
      }
    }
    else
    {
      MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word ArgY1_8;
      MR_Word ArgX2_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word ArgY2_10;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
      if (succeeded)
      {
        ArgY1_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
        ArgY2_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
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
hlds__inst_mode_type_prop____Compare____maybe_inside_user_inst_0_0(
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
hlds__inst_mode_type_prop____Unify____maybe_inside_user_inst_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
hlds__inst_mode_type_prop____Compare____base_info_0_0(
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

    hlds__hlds_module____Compare____module_info_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
  }
}

static MR_bool MR_CALL 
hlds__inst_mode_type_prop____Unify____base_info_0_0(
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

    succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
  }
  return succeeded;
}

static void MR_CALL 
hlds__inst_mode_type_prop__report_ho_inst_for_non_ho_type_6_p_0(
  MR_Word TypeClassInfo_for_tprop_record_7,
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Box HeadVar__5_5,
  MR_Box * HeadVar__6_6)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_tprop_record_7, 0)), 15))));

  func_0(((MR_Box) (TypeClassInfo_for_tprop_record_7)), HeadVar__1_1, HeadVar__2_2, ((MR_Box) (HeadVar__3_3)), ((MR_Box) (HeadVar__4_4)), HeadVar__5_5, HeadVar__6_6);
}

static void MR_CALL 
hlds__inst_mode_type_prop__report_wrong_arity_ho_inst_8_p_0(
  MR_Word TypeClassInfo_for_tprop_record_9,
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Box HeadVar__7_7,
  MR_Box * HeadVar__8_8)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_tprop_record_9, 0)), 14))));

  func_0(((MR_Box) (TypeClassInfo_for_tprop_record_9)), HeadVar__1_1, HeadVar__2_2, ((MR_Box) (HeadVar__3_3)), ((MR_Box) (HeadVar__4_4)), ((MR_Box) (HeadVar__5_5)), ((MR_Box) (HeadVar__6_6)), HeadVar__7_7, HeadVar__8_8);
}

static void MR_CALL 
hlds__inst_mode_type_prop__report_missing_cons_id_5_p_0(
  MR_Word TypeClassInfo_for_tprop_record_6,
  MR_Box HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Box HeadVar__4_4,
  MR_Box * HeadVar__5_5)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_tprop_record_6, 0)), 13))));

  func_0(((MR_Box) (TypeClassInfo_for_tprop_record_6)), HeadVar__1_1, ((MR_Box) (HeadVar__2_2)), ((MR_Box) (HeadVar__3_3)), HeadVar__4_4, HeadVar__5_5);
}

static void MR_CALL 
hlds__inst_mode_type_prop__check_cons_id_qualifier_8_p_0(
  MR_Word TypeClassInfo_for_tprop_record_9,
  MR_Box HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_String HeadVar__5_5,
  MR_Integer HeadVar__6_6,
  MR_Box HeadVar__7_7,
  MR_Box * HeadVar__8_8)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_tprop_record_9, 0)), 12))));

  func_0(((MR_Box) (TypeClassInfo_for_tprop_record_9)), HeadVar__1_1, ((MR_Box) (HeadVar__2_2)), ((MR_Box) (HeadVar__3_3)), ((MR_Box) (HeadVar__4_4)), ((MR_Box) (HeadVar__5_5)), ((MR_Box) (HeadVar__6_6)), HeadVar__7_7, HeadVar__8_8);
}

static MR_bool MR_CALL 
hlds__inst_mode_type_prop__user_inst_expansion_to_context_3_p_0(
  MR_Word TypeClassInfo_for_tprop_record_4,
  MR_Box HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box * HeadVar__3_3)
{
  MR_bool succeeded;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_tprop_record_4, 0)), 10))));

  succeeded = func_0(((MR_Box) (TypeClassInfo_for_tprop_record_4)), HeadVar__1_1, ((MR_Box) (HeadVar__2_2)), HeadVar__3_3);
  return succeeded;
}

static void MR_CALL 
hlds__inst_mode_type_prop__args_slot_to_context_3_p_0(
  MR_Word TypeClassInfo_for_tprop_record_4,
  MR_Box HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Box * HeadVar__3_3)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_tprop_record_4, 0)), 9))));

  func_0(((MR_Box) (TypeClassInfo_for_tprop_record_4)), HeadVar__1_1, ((MR_Box) (HeadVar__2_2)), HeadVar__3_3);
}

static void MR_CALL 
hlds__inst_mode_type_prop__step_into_tuple_inst_2_p_0(
  MR_Word TypeClassInfo_for_tprop_record_3,
  MR_Box HeadVar__1_1,
  MR_Box * HeadVar__2_2)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_tprop_record_3, 0)), 7))));

  func_0(((MR_Box) (TypeClassInfo_for_tprop_record_3)), HeadVar__1_1, HeadVar__2_2);
}

static void MR_CALL 
hlds__inst_mode_type_prop__step_into_bound_functor_3_p_0(
  MR_Word TypeClassInfo_for_tprop_record_4,
  MR_Word HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box * HeadVar__3_3)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_tprop_record_4, 0)), 6))));

  func_0(((MR_Box) (TypeClassInfo_for_tprop_record_4)), ((MR_Box) (HeadVar__1_1)), HeadVar__2_2, HeadVar__3_3);
}

static void MR_CALL 
hlds__inst_mode_type_prop__do_record_bad_use_of_user_inst_6_p_0(
  MR_Word TPropContext_7,
  MR_Word InstCtor_8,
  MR_Word ForTypeCtor_9,
  MR_Word TypeCtor_10,
  MR_Word STATE_VARIABLE_Errors_0_18,
  MR_Word * STATE_VARIABLE_Errors_19)
{
  MR_Word Context_12;
  MR_Word LocnPieces_13;
  MR_Word Pieces_14;
  MR_Word Spec_15;
  MR_Word Specs0_16;
  MR_Word Specs_17;
  MR_Word Var_20;
  MR_Word Var_28;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word Var_31;
  MR_Word Var_33;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Word Var_46;
  MR_Word Var_47;
  MR_Word Var_52;
  MR_Word Var_63;
  MR_Word Var_64;
  MR_Word Var_65;
  MR_Word Var_66;

  hlds__inst_mode_type_prop__tprop_context_to_pieces_3_p_0(TPropContext_7, &Context_12, &LocnPieces_13);
  {
    Var_31 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_31, 0) = ((MR_Box) ((MR_Unsigned) 22U));
    MR_hl_field(3, Var_31, 1) = ((MR_Box) (InstCtor_8));
  }
  {
    Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_30, 0) = ((MR_Box) (Var_31));
    MR_hl_field(1, Var_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_29 = parse_tree__error_spec__color_as_subject_1_f_0(Var_30);
  {
    Var_47 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_47, 0) = ((MR_Box) ((MR_Unsigned) 20U));
    MR_hl_field(3, Var_47, 1) = ((MR_Box) (ForTypeCtor_9));
  }
  {
    Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_46, 0) = ((MR_Box) (Var_47));
    MR_hl_field(1, Var_46, 1) = ((MR_Box) (MR_mkword(1, &hlds__inst_mode_type_prop_scalar_common_1[17])));
  }
  Var_45 = parse_tree__error_spec__color_as_correct_1_f_0(Var_46);
  {
    Var_66 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_66, 0) = ((MR_Box) ((MR_Unsigned) 20U));
    MR_hl_field(3, Var_66, 1) = ((MR_Box) (TypeCtor_10));
  }
  {
    Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_65, 0) = ((MR_Box) (Var_66));
    MR_hl_field(1, Var_65, 1) = ((MR_Box) (MR_mkword(1, &hlds__inst_mode_type_prop_scalar_common_1[22])));
  }
  Var_64 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_65);
  Var_63 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_64, (MR_Word) (MR_mkword(1, &hlds__inst_mode_type_prop_scalar_common_1[23])));
  Var_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__inst_mode_type_prop_scalar_common_1[20])), Var_63);
  Var_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_45, Var_52);
  Var_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__inst_mode_type_prop_scalar_common_1[15])), Var_44);
  Var_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_29, Var_33);
  Var_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__inst_mode_type_prop_scalar_common_1[11])), Var_28);
  Pieces_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), LocnPieces_13, Var_20);
  {
    Spec_15 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_15, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.inst_mode_type_prop.do_record_bad_use_of_user_inst\'/6"));
    MR_hl_field(0, Spec_15, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Spec_15, 2) = ((MR_Box) ((MR_Unsigned) 56U));
    MR_hl_field(0, Spec_15, 3) = ((MR_Box) (Context_12));
    MR_hl_field(0, Spec_15, 4) = ((MR_Box) (Pieces_14));
  }
  Specs0_16 = (MR_Word) (STATE_VARIABLE_Errors_0_18);
  {
    Specs_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Specs_17, 0) = ((MR_Box) (Spec_15));
    MR_hl_field(1, Specs_17, 1) = ((MR_Box) (Specs0_16));
  }
  *STATE_VARIABLE_Errors_19 = (MR_Word) (Specs_17);
}

static void MR_CALL 
hlds__inst_mode_type_prop__tprop_context_to_pieces_3_p_0(
  MR_Word TPropContext_4,
  MR_Word * Context_5,
  MR_Word * Pieces_6)
{
  if (((MR_tag((MR_Word) TPropContext_4)) == (MR_Integer) 0))
  {
    MR_Word Args_7 = ((MR_Word) ((MR_hl_field(0, TPropContext_4, 0))));
    MR_Integer ArgNum_8 = ((MR_Integer) ((MR_hl_field(0, TPropContext_4, 1))));

    switch (MR_tag((MR_Word) Args_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word PredInfo_9 = ((MR_Word) ((MR_hl_field(0, Args_7, 0))));
          MR_Word PredOrFunc_110;
          MR_Word PredFormArity_111;
          MR_Word PredPieces_112;
          MR_Word ArgDescPieces_113;
          MR_Word Var_115;
          MR_Word Var_116;
          MR_Word Var_118;

          hlds__hlds_pred__pred_info_get_is_pred_or_func_2_p_0(PredInfo_9, &PredOrFunc_110);
          hlds__hlds_pred__pred_info_get_orig_arity_2_p_0(PredInfo_9, &PredFormArity_111);
          hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo_9, Context_5);
          PredPieces_112 = hlds__hlds_error_util__describe_one_pred_info_name_4_f_0((MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 1, (MR_Word) ((MR_Unsigned) 0U), PredInfo_9);
          ArgDescPieces_113 = hlds__inst_mode_type_prop__pred_or_func_arg_desc_3_f_0(PredOrFunc_110, PredFormArity_111, ArgNum_8);
          Var_118 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PredPieces_112, (MR_Word) (MR_mkword(1, &hlds__inst_mode_type_prop_scalar_common_1[63])));
          Var_116 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__inst_mode_type_prop_scalar_common_1[73])), Var_118);
          Var_115 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ArgDescPieces_113, Var_116);
          *Pieces_6 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__inst_mode_type_prop_scalar_common_1[71])), Var_115);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word PredOrFunc_10 = ((MR_Unsigned) ((MR_hl_field(1, Args_7, 0))) & (MR_Integer) 1);
          MR_Word PredFormArity_11 = ((MR_Word) ((MR_hl_field(1, Args_7, 1))));
          MR_Word ArgDescPieces_13;
          MR_Word Var_30;
          MR_Word Var_31;
          MR_Word Var_36;

          *Context_5 = ((MR_Word) ((MR_hl_field(1, Args_7, 2))));
          ArgDescPieces_13 = hlds__inst_mode_type_prop__pred_or_func_arg_desc_3_f_0(PredOrFunc_10, PredFormArity_11, ArgNum_8);
          Var_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__inst_mode_type_prop_scalar_common_1[69])), (MR_Word) (MR_mkword(1, &hlds__inst_mode_type_prop_scalar_common_1[63])));
          Var_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__inst_mode_type_prop_scalar_common_1[73])), Var_36);
          Var_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ArgDescPieces_13, Var_31);
          *Pieces_6 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__inst_mode_type_prop_scalar_common_1[71])), Var_30);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ConsId_14 = ((MR_Word) ((MR_hl_field(2, Args_7, 0))));
          MR_Word OuterTPropContext_15 = ((MR_Word) ((MR_hl_field(2, Args_7, 1))));
          MR_Word InnerPieces_16;
          MR_Word OuterPieces_18;
          MR_Word Var_45;
          MR_Word Var_46;
          MR_Word Var_47;
          MR_Word Var_50;
          MR_Word Var_51;

          {
            Var_46 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_46, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(3, Var_46, 1) = ((MR_Box) (ArgNum_8));
          }
          {
            Var_51 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_51, 0) = ((MR_Box) ((MR_Unsigned) 29U));
            MR_hl_field(3, Var_51, 1) = ((MR_Box) (ConsId_14));
          }
          {
            Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_50, 0) = ((MR_Box) (Var_51));
            MR_hl_field(1, Var_50, 1) = ((MR_Box) (MR_mkword(1, &hlds__inst_mode_type_prop_scalar_common_1[63])));
          }
          {
            Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_47, 0) = ((MR_Box) (MR_mkword(3, &hlds__inst_mode_type_prop_scalar_common_1[61])));
            MR_hl_field(1, Var_47, 1) = ((MR_Box) (Var_50));
          }
          {
            Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_45, 0) = ((MR_Box) (Var_46));
            MR_hl_field(1, Var_45, 1) = ((MR_Box) (Var_47));
          }
          {
            InnerPieces_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, InnerPieces_16, 0) = ((MR_Box) (MR_mkword(3, &hlds__inst_mode_type_prop_scalar_common_1[60])));
            MR_hl_field(1, InnerPieces_16, 1) = ((MR_Box) (Var_45));
          }
          hlds__inst_mode_type_prop__tprop_context_to_pieces_3_p_0(OuterTPropContext_15, Context_5, &OuterPieces_18);
          *Pieces_6 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), OuterPieces_18, InnerPieces_16);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Args_7, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_60;
              MR_Word Var_61;
              MR_Word OuterTPropContext_106 = ((MR_Word) ((MR_hl_field(3, Args_7, 1))));
              MR_Word InnerPieces_107;
              MR_Word OuterPieces_108;

              {
                Var_61 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_61, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(3, Var_61, 1) = ((MR_Box) (ArgNum_8));
              }
              {
                Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_60, 0) = ((MR_Box) (Var_61));
                MR_hl_field(1, Var_60, 1) = ((MR_Box) (MR_mkword(1, &hlds__inst_mode_type_prop_scalar_common_1[75])));
              }
              {
                InnerPieces_107 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, InnerPieces_107, 0) = ((MR_Box) (MR_mkword(3, &hlds__inst_mode_type_prop_scalar_common_1[60])));
                MR_hl_field(1, InnerPieces_107, 1) = ((MR_Box) (Var_60));
              }
              hlds__inst_mode_type_prop__tprop_context_to_pieces_3_p_0(OuterTPropContext_106, Context_5, &OuterPieces_108);
              *Pieces_6 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), OuterPieces_108, InnerPieces_107);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word NumArgs_17 = ((MR_Word) ((MR_hl_field(3, Args_7, 2))));
              MR_Word Var_72;
              MR_Word PredOrFunc_89 = ((MR_Unsigned) ((MR_hl_field(3, Args_7, 1))) & (MR_Integer) 1);
              MR_Word ArgDescPieces_90;
              MR_Word OuterTPropContext_102 = ((MR_Word) ((MR_hl_field(3, Args_7, 3))));
              MR_Word InnerPieces_103;
              MR_Word OuterPieces_104;

              ArgDescPieces_90 = hlds__inst_mode_type_prop__pred_or_func_arg_desc_3_f_0(PredOrFunc_89, NumArgs_17, ArgNum_8);
              Var_72 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ArgDescPieces_90, (MR_Word) (MR_mkword(1, &hlds__inst_mode_type_prop_scalar_common_1[67])));
              InnerPieces_103 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__inst_mode_type_prop_scalar_common_1[65])), Var_72);
              hlds__inst_mode_type_prop__tprop_context_to_pieces_3_p_0(OuterTPropContext_102, Context_5, &OuterPieces_104);
              *Pieces_6 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), OuterPieces_104, InnerPieces_103);
            }
            break;
        }
        break;
    }
  }
  else
  {
    MR_Word InstNameArity_19 = ((MR_Word) ((MR_hl_field(1, TPropContext_4, 0))));
    MR_Word Var_81;
    MR_Word Var_82;
    MR_Word OuterTPropContext_95 = ((MR_Word) ((MR_hl_field(1, TPropContext_4, 1))));
    MR_Word InnerPieces_96;
    MR_Word OuterPieces_97;

    hlds__inst_mode_type_prop__tprop_context_to_pieces_3_p_0(OuterTPropContext_95, Context_5, &OuterPieces_97);
    {
      Var_82 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_82, 0) = ((MR_Box) ((MR_Unsigned) 14U));
      MR_hl_field(3, Var_82, 1) = ((MR_Box) (InstNameArity_19));
    }
    {
      Var_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_81, 0) = ((MR_Box) (Var_82));
      MR_hl_field(1, Var_81, 1) = ((MR_Box) (MR_mkword(1, &hlds__inst_mode_type_prop_scalar_common_1[63])));
    }
    {
      InnerPieces_96 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, InnerPieces_96, 0) = ((MR_Box) (MR_mkword(3, &hlds__inst_mode_type_prop_scalar_common_1[76])));
      MR_hl_field(1, InnerPieces_96, 1) = ((MR_Box) (Var_81));
    }
    *Pieces_6 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), OuterPieces_97, InnerPieces_96);
  }
}

static MR_Word MR_CALL 
hlds__inst_mode_type_prop__pred_or_func_arg_desc_3_f_0(
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
    Pieces_8 = (MR_Word) (MR_mkword(1, &hlds__inst_mode_type_prop_scalar_common_1[78]));
  else
  {
    MR_Word Var_14;
    MR_Word Var_15;

    {
      Var_15 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_15, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(3, Var_15, 1) = ((MR_Box) (ArgNum_7));
    }
    {
      Var_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_14, 0) = ((MR_Box) (Var_15));
      MR_hl_field(1, Var_14, 1) = ((MR_Box) (MR_mkword(1, &hlds__inst_mode_type_prop_scalar_common_1[81])));
    }
    {
      Pieces_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_8, 0) = ((MR_Box) (MR_mkword(3, &hlds__inst_mode_type_prop_scalar_common_1[79])));
      MR_hl_field(1, Pieces_8, 1) = ((MR_Box) (Var_14));
    }
  }
  return Pieces_8;
}

static void MR_CALL 
hlds__inst_mode_type_prop__record_result_in_tprop_cache_6_p_0(
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

  succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&hlds__inst_mode_type_prop_scalar_common_2[1]), STATE_VARIABLE_Cache_0_16, ((MR_Box) (Type_7)), &conv0_TypeMap0_12);
  if (succeeded)
  {
    TypeMap0_12 = ((MR_Word) (conv0_TypeMap0_12));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word TypeNameMap0_13;
    MR_Box conv1_TypeNameMap0_13;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&hlds__inst_mode_type_prop_scalar_common_2[0]), TypeMap0_12, ((MR_Box) (SymName_8)), &conv1_TypeNameMap0_13);
    if (succeeded)
    {
      TypeNameMap0_13 = ((MR_Word) (conv1_TypeNameMap0_13));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word TypeNameMap_14;
      MR_Word TypeMap_15;

      mercury__map__set_4_p_0((MR_Word) (&hlds__inst_mode_type_prop_scalar_common_1[0]), (MR_Word) (&hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__type_ctor_info_tprop_cache_result_0), ((MR_Box) (ArgInsts_9)), ((MR_Box) (Result_10)), TypeNameMap0_13, &TypeNameMap_14);
      mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&hlds__inst_mode_type_prop_scalar_common_2[0]), ((MR_Box) (SymName_8)), ((MR_Box) (TypeNameMap_14)), TypeMap0_12, &TypeMap_15);
      mercury__map__det_update_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&hlds__inst_mode_type_prop_scalar_common_2[1]), ((MR_Box) (Type_7)), ((MR_Box) (TypeMap_15)), STATE_VARIABLE_Cache_0_16, STATE_VARIABLE_Cache_17);
    }
    else
    {
      MR_Word TypeNameMap_22;
      MR_Word TypeMap_23;

      TypeNameMap_22 = mercury__map__singleton_2_f_0((MR_Word) (&hlds__inst_mode_type_prop_scalar_common_1[0]), (MR_Word) (&hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__type_ctor_info_tprop_cache_result_0), ((MR_Box) (ArgInsts_9)), ((MR_Box) (Result_10)));
      mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&hlds__inst_mode_type_prop_scalar_common_2[0]), ((MR_Box) (SymName_8)), ((MR_Box) (TypeNameMap_22)), TypeMap0_12, &TypeMap_23);
      mercury__map__det_update_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&hlds__inst_mode_type_prop_scalar_common_2[1]), ((MR_Box) (Type_7)), ((MR_Box) (TypeMap_23)), STATE_VARIABLE_Cache_0_16, STATE_VARIABLE_Cache_17);
    }
  }
  else
  {
    MR_Word Var_20;
    MR_Word TypeNameMap_24;
    MR_Word TypeMap_25;

    TypeNameMap_24 = mercury__map__singleton_2_f_0((MR_Word) (&hlds__inst_mode_type_prop_scalar_common_1[0]), (MR_Word) (&hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__type_ctor_info_tprop_cache_result_0), ((MR_Box) (ArgInsts_9)), ((MR_Box) (Result_10)));
    Var_20 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&hlds__inst_mode_type_prop_scalar_common_2[0]));
    mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&hlds__inst_mode_type_prop_scalar_common_2[0]), ((MR_Box) (SymName_8)), ((MR_Box) (TypeNameMap_24)), Var_20, &TypeMap_25);
    mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&hlds__inst_mode_type_prop_scalar_common_2[1]), ((MR_Box) (Type_7)), ((MR_Box) (TypeMap_25)), STATE_VARIABLE_Cache_0_16, STATE_VARIABLE_Cache_17);
  }
}

static MR_bool MR_CALL 
hlds__inst_mode_type_prop__result_is_in_tprop_cache_5_p_0(
  MR_Word Cache_6,
  MR_Word Type_7,
  MR_Word SymName_8,
  MR_Word ArgInsts_9,
  MR_Word * Result_10)
{
  MR_bool succeeded;
  MR_Word TypeCtorInfo_15_15;
  MR_Word TypeInfo_16_16;
  MR_Word TypeInfo_17_17;
  MR_Word TypeCtorInfo_18_18;
  MR_Word CacheTypeMap0_11;
  MR_Word CacheTypeNameMap0_12;
  MR_Box conv0_CacheTypeMap0_11;
  MR_Box conv1_CacheTypeNameMap0_12;
  MR_Box conv2_Result_10;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&hlds__inst_mode_type_prop_scalar_common_2[1]), Cache_6, ((MR_Box) (Type_7)), &conv0_CacheTypeMap0_11);
  if (succeeded)
  {
    CacheTypeMap0_11 = ((MR_Word) (conv0_CacheTypeMap0_11));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    TypeCtorInfo_15_15 = (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0);
    TypeInfo_16_16 = (MR_Word) (&hlds__inst_mode_type_prop_scalar_common_2[0]);
    succeeded = mercury__map__search_3_p_0(TypeCtorInfo_15_15, TypeInfo_16_16, CacheTypeMap0_11, ((MR_Box) (SymName_8)), &conv1_CacheTypeNameMap0_12);
    if (succeeded)
    {
      CacheTypeNameMap0_12 = ((MR_Word) (conv1_CacheTypeNameMap0_12));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      TypeInfo_17_17 = (MR_Word) (&hlds__inst_mode_type_prop_scalar_common_1[0]);
      TypeCtorInfo_18_18 = (MR_Word) (&hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__type_ctor_info_tprop_cache_result_0);
      succeeded = mercury__map__search_3_p_0(TypeInfo_17_17, TypeCtorInfo_18_18, CacheTypeNameMap0_12, ((MR_Box) (ArgInsts_9)), &conv2_Result_10);
      if (succeeded)
      {
        *Result_10 = ((MR_Word) (conv2_Result_10));
        succeeded = MR_TRUE;
      }
    }
  }
  return succeeded;
}

static MR_Word MR_CALL 
hlds__inst_mode_type_prop__are_we_already_inside_user_inst_expansion_2_f_0(
  MR_Word LocnContext_4,
  MR_Word SymNameArity_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word Inside_6;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) LocnContext_4)) == (MR_Integer) 0))
    {
      MR_Word Args_7 = ((MR_Word) ((MR_hl_field(0, LocnContext_4, 0))));

      switch (MR_tag((MR_Word) Args_7)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          Inside_6 = (MR_Integer) 0;
          break;
        case (MR_Integer) 2:
          {
            MR_Word OuterContext_14 = ((MR_Word) ((MR_hl_field(2, Args_7, 1))));
            MR_Word next_value_of_LocnContext_4 = OuterContext_14;

            // direct tailcall eliminated
            ;
            LocnContext_4 = next_value_of_LocnContext_4;
            continue;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, Args_7, 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word OuterContext_20 = ((MR_Word) ((MR_hl_field(3, Args_7, 1))));
                MR_Word next_value_of_LocnContext_4 = OuterContext_20;

                // direct tailcall eliminated
                ;
                LocnContext_4 = next_value_of_LocnContext_4;
                continue;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word OuterContext_19 = ((MR_Word) ((MR_hl_field(3, Args_7, 3))));
                MR_Word next_value_of_LocnContext_4 = OuterContext_19;

                // direct tailcall eliminated
                ;
                LocnContext_4 = next_value_of_LocnContext_4;
                continue;
              }
              break;
          }
          break;
      }
    }
    else
    {
      MR_Word InstNameArity_17 = ((MR_Word) ((MR_hl_field(1, LocnContext_4, 0))));
      MR_Word OuterContext_18 = ((MR_Word) ((MR_hl_field(1, LocnContext_4, 1))));

      succeeded = parse_tree__prog_data____Unify____sym_name_arity_0_0(SymNameArity_5, InstNameArity_17);
      if (succeeded)
        Inside_6 = (MR_Integer) 1;
      else
      {
        MR_Word next_value_of_LocnContext_4 = OuterContext_18;

        // direct tailcall eliminated
        ;
        LocnContext_4 = next_value_of_LocnContext_4;
        continue;
      }
    }
    return Inside_6;
    break;
  }
}

static void MR_CALL 
hlds__inst_mode_type_prop__propagate_char_type_5_p_0(
  MR_Word TypeClassInfo_for_tprop_record_25,
  MR_Box Context_6,
  MR_Word BoundFunctor0_7,
  MR_Word * BoundFunctor_8,
  MR_Box STATE_VARIABLE_Errors_0_17,
  MR_Box * STATE_VARIABLE_Errors_18)
{
  MR_bool succeeded;
  MR_Word ConsId0_10 = ((MR_Word) ((MR_hl_field(0, BoundFunctor0_7, 0))));
  MR_Word ArgInsts0_11 = ((MR_Word) ((MR_hl_field(0, BoundFunctor0_7, 1))));
  MR_Char NameChar_15;
  MR_String Name_12;
  MR_Word NameChars_14;
  MR_Word Var_19;
  MR_Word Var_20;
  MR_Integer Var_21;
  MR_Word Var_22;

  succeeded = ((MR_tag((MR_Word) ConsId0_10)) == (MR_Integer) 1);
  if (succeeded)
  {
    Var_19 = (MR_Word) (MR_body((MR_Word) (ConsId0_10), (MR_Integer) 1));
    Var_20 = ((MR_Word) ((MR_hl_field(0, Var_19, 0))));
    Var_21 = ((MR_Integer) ((MR_hl_field(0, Var_19, 1))));
    succeeded = ((MR_tag((MR_Word) Var_20)) == (MR_Integer) 0);
    if (succeeded)
    {
      Name_12 = ((MR_String) ((MR_hl_field(0, Var_20, 0))));
      succeeded = (Var_21 == (MR_Integer) 0);
      if (succeeded)
      {
        mercury__string__to_char_list_2_p_0(Name_12, &NameChars_14);
        succeeded = (NameChars_14 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          NameChar_15 = ((MR_Char) (MR_Word) (MR_hl_field(1, NameChars_14, 0)));
          Var_22 = ((MR_Word) ((MR_hl_field(1, NameChars_14, 1))));
          succeeded = (Var_22 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
            succeeded = (ArgInsts0_11 == (MR_Word) ((MR_Unsigned) 0U));
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Word ConsId_16;

    {
      ConsId_16 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, ConsId_16, 0) = ((MR_Box) ((MR_Unsigned) 7U));
      MR_hl_field(3, ConsId_16, 1) = ((MR_Box) (MR_Word) (NameChar_15));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *BoundFunctor_8 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (ConsId_16));
      MR_hl_field(0, base, 1) = ((MR_Box) (ArgInsts0_11));
    }
    *STATE_VARIABLE_Errors_18 = STATE_VARIABLE_Errors_0_17;
  }
  else
  {
    MR_Word Var_24;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    Var_24 = parse_tree__builtin_lib_types__char_type_ctor_0_f_0();
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_tprop_record_25, 0)), 13))));
    func_0(((MR_Box) (TypeClassInfo_for_tprop_record_25)), Context_6, ((MR_Box) (Var_24)), ((MR_Box) (ConsId0_10)), STATE_VARIABLE_Errors_0_17, STATE_VARIABLE_Errors_18);
    *BoundFunctor_8 = BoundFunctor0_7;
  }
}

static void MR_CALL 
hlds__inst_mode_type_prop__propagate_types_into_tuple_9_p_0(
  MR_Word TypeClassInfo_for_tprop_record_34,
  MR_Box ModuleInfo_10,
  MR_Box Context_11,
  MR_Word TupleArgTypes_12,
  MR_Word BoundFunctor0_13,
  MR_Word * BoundFunctor_14,
  MR_Word STATE_VARIABLE_Cache_0_26,
  MR_Word * STATE_VARIABLE_Cache_27,
  MR_Box STATE_VARIABLE_Errors_0_28,
  MR_Box * STATE_VARIABLE_Errors_29)
{
  MR_bool succeeded;
  MR_Word Functor_17 = ((MR_Word) ((MR_hl_field(0, BoundFunctor0_13, 0))));
  MR_Word ArgInsts0_18 = ((MR_Word) ((MR_hl_field(0, BoundFunctor0_13, 1))));
  MR_Word ArgInsts_25;
  MR_Word TypeCtorInfo_35_35;
  MR_Word TypeCtorInfo_36_36;
  MR_Integer ArgInstsLen_22;
  MR_Integer TupleArgTypesLen_23;

  if (((MR_tag((MR_Word) Functor_17)) == (MR_Integer) 1))
  {
    MR_Word Var_30 = (MR_Word) (MR_body((MR_Word) (Functor_17), (MR_Integer) 1));
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(0, Var_30, 0))));
    MR_String Var_32;

    succeeded = ((MR_tag((MR_Word) Var_31)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_32 = ((MR_String) ((MR_hl_field(0, Var_31, 0))));
      succeeded = (strcmp(Var_32, (MR_String) "{}") == 0);
    }
  }
  else
  if (((((MR_tag((MR_Word) Functor_17)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Functor_17, 0)))) == (MR_Integer) 4))))
    succeeded = MR_TRUE;
  else
    succeeded = MR_FALSE;
  if (succeeded)
  {
    TypeCtorInfo_35_35 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0);
    mercury__list__length_2_p_0(TypeCtorInfo_35_35, ArgInsts0_18, &ArgInstsLen_22);
    TypeCtorInfo_36_36 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
    mercury__list__length_2_p_0(TypeCtorInfo_36_36, TupleArgTypes_12, &TupleArgTypesLen_23);
    succeeded = (ArgInstsLen_22 == TupleArgTypesLen_23);
  }
  if (succeeded)
  {
    MR_Box Args_24;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_tprop_record_34, 0)), 7))));

    func_0(((MR_Box) (TypeClassInfo_for_tprop_record_34)), Context_11, &Args_24);
    hlds__inst_mode_type_prop__propagate_types_into_insts_10_p_0(TypeClassInfo_for_tprop_record_34, ModuleInfo_10, Args_24, (MR_Integer) 1, TupleArgTypes_12, ArgInsts0_18, &ArgInsts_25, STATE_VARIABLE_Cache_0_26, STATE_VARIABLE_Cache_27, STATE_VARIABLE_Errors_0_28, STATE_VARIABLE_Errors_29);
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
    *BoundFunctor_14 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Functor_17));
    MR_hl_field(0, base, 1) = ((MR_Box) (ArgInsts_25));
  }
}

static void MR_CALL 
hlds__inst_mode_type_prop__propagate_types_into_insts_10_p_0(
  MR_Word TypeClassInfo_for_tprop_record_68,
  MR_Box Info_1,
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
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.inst_mode_type_prop.propagate_types_into_insts\'/10", (MR_String) "length mismatch");
        return;
      }
    }
  else
  {
    MR_Word Var_69 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
    MR_Word Var_70 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));

    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.inst_mode_type_prop.propagate_types_into_insts\'/10", (MR_String) "length mismatch");
        return;
      }
    }
    else
    {
      MR_Word Inst0_51 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 0))));
      MR_Word Insts0_52 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 1))));
      MR_Word Inst_53;
      MR_Word Insts_54;
      MR_Box Context_57;
      MR_Word STATE_VARIABLE_Cache_1_62;
      MR_Box STATE_VARIABLE_Errors_1_63;
      MR_Integer Var_64;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_tprop_record_68, 0)), 9))));

      func_0(((MR_Box) (TypeClassInfo_for_tprop_record_68)), Args_2, ((MR_Box) (ArgNum_3)), &Context_57);
      succeeded = mercury__builtin__semidet_fail_0_p_0();
      if (succeeded)
      {
        MR_Word ModuleInfo_71;
        MR_Word Constructors_72;

        ModuleInfo_71 = hlds__inst_mode_type_prop__get_module_info_1_f_0(TypeClassInfo_for_tprop_record_68, Info_1);
        succeeded = hlds__type_util__type_constructors_3_p_0(ModuleInfo_71, Var_70, &Constructors_72);
        if (succeeded)
          hlds__inst_mode_type_prop__propagate_type_into_inst_eagerly_10_p_0(TypeClassInfo_for_tprop_record_68, Info_1, Context_57, Var_70, Constructors_72, Inst0_51, &Inst_53, STATE_VARIABLE_Cache_0_7, &STATE_VARIABLE_Cache_1_62, STATE_VARIABLE_Errors_0_9, &STATE_VARIABLE_Errors_1_63);
        else
        {
          Inst_53 = Inst0_51;
          STATE_VARIABLE_Errors_1_63 = STATE_VARIABLE_Errors_0_9;
          STATE_VARIABLE_Cache_1_62 = STATE_VARIABLE_Cache_0_7;
        }
      }
      else
        hlds__inst_mode_type_prop__propagate_type_into_inst_lazily_9_p_0(TypeClassInfo_for_tprop_record_68, Info_1, Context_57, Var_70, Inst0_51, &Inst_53, STATE_VARIABLE_Cache_0_7, &STATE_VARIABLE_Cache_1_62, STATE_VARIABLE_Errors_0_9, &STATE_VARIABLE_Errors_1_63);
      Var_64 = (MR_Integer) ((MR_Unsigned) ArgNum_3 + (MR_Unsigned) 1);
      hlds__inst_mode_type_prop__propagate_types_into_insts_10_p_0(TypeClassInfo_for_tprop_record_68, Info_1, Args_2, Var_64, Var_69, Insts0_52, &Insts_54, STATE_VARIABLE_Cache_1_62, STATE_VARIABLE_Cache_8, STATE_VARIABLE_Errors_1_63, STATE_VARIABLE_Errors_10);
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
hlds__inst_mode_type_prop__propagate_checked_type_into_mode_9_p_0(
  MR_Word Info_10,
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
  MR_Word ModuleInfo_24;
  MR_Word InitialInst0_25;
  MR_Word FinalInst0_26;
  MR_Word InitialInst_27;
  MR_Word FinalInst_28;
  MR_Word STATE_VARIABLE_Cache_1_29;
  MR_Word STATE_VARIABLE_Errors_1_30;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&hlds__inst_mode_type_prop_scalar_common_3[1]), 0)), 5))));
  MR_Box conv1_ModuleInfo_24;
  MR_Box conv2_STATE_VARIABLE_Errors_1_30;
  MR_Box conv3_Errors_18;

  conv1_ModuleInfo_24 = func_0(((MR_Box) ((MR_Word) (&hlds__inst_mode_type_prop_scalar_common_3[1]))), ((MR_Box) (Info_10)));
  ModuleInfo_24 = ((MR_Word) (conv1_ModuleInfo_24));
  hlds__mode_util__mode_get_insts_4_p_0(ModuleInfo_24, Mode0_13, &InitialInst0_25, &FinalInst0_26);
  hlds__inst_mode_type_prop__propagate_type_into_inst_lazily_9_p_0((MR_Word) (&hlds__inst_mode_type_prop_scalar_common_3[1]), ((MR_Box) (Info_10)), ((MR_Box) (Context_11)), Type_12, InitialInst0_25, &InitialInst_27, STATE_VARIABLE_Cache_0_19, &STATE_VARIABLE_Cache_1_29, ((MR_Box) (Errors0_17)), &conv2_STATE_VARIABLE_Errors_1_30);
  STATE_VARIABLE_Errors_1_30 = ((MR_Word) (conv2_STATE_VARIABLE_Errors_1_30));
  hlds__inst_mode_type_prop__propagate_type_into_inst_lazily_9_p_0((MR_Word) (&hlds__inst_mode_type_prop_scalar_common_3[1]), ((MR_Box) (Info_10)), ((MR_Box) (Context_11)), Type_12, FinalInst0_26, &FinalInst_28, STATE_VARIABLE_Cache_1_29, STATE_VARIABLE_Cache_20, ((MR_Box) (STATE_VARIABLE_Errors_1_30)), &conv3_Errors_18);
  Errors_18 = ((MR_Word) (conv3_Errors_18));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Mode_14 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (InitialInst_27));
    MR_hl_field(0, base, 1) = ((MR_Box) (FinalInst_28));
  }
  *STATE_VARIABLE_Specs_22 = (MR_Word) (Errors_18);
}

void MR_CALL 
hlds__inst_mode_type_prop__propagate_checked_types_into_modes_9_p_0(
  MR_Word Info_10,
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
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.inst_mode_type_prop.propagate_types_into_modes\'/10", (MR_String) "length mismatch");
        return;
      }
    }
  else
  {
    MR_Word Var_72 = ((MR_Word) ((MR_hl_field(1, Types_12, 1))));
    MR_Word Var_73 = ((MR_Word) ((MR_hl_field(1, Types_12, 0))));

    if ((Modes0_13 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *Modes_14 = (MR_Word) ((MR_Unsigned) 0U);
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.inst_mode_type_prop.propagate_types_into_modes\'/10", (MR_String) "length mismatch");
        return;
      }
    }
    else
    {
      MR_Word Mode0_59 = ((MR_Word) ((MR_hl_field(1, Modes0_13, 0))));
      MR_Word Modes0_60 = ((MR_Word) ((MR_hl_field(1, Modes0_13, 1))));
      MR_Word Mode_61;
      MR_Word Modes_62;
      MR_Box Context_63;
      MR_Word STATE_VARIABLE_Cache_1_68;
      MR_Word STATE_VARIABLE_Errors_1_69;
      MR_Word ModuleInfo_74;
      MR_Word InitialInst0_75;
      MR_Word FinalInst0_76;
      MR_Word InitialInst_77;
      MR_Word FinalInst_78;
      MR_Word STATE_VARIABLE_Cache_1_79;
      MR_Word STATE_VARIABLE_Errors_1_80;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&hlds__inst_mode_type_prop_scalar_common_3[1]), 0)), 9))));
      MR_Box MR_CALL (* func_1)(MR_Box, MR_Box);
      MR_Box conv2_ModuleInfo_74;
      MR_Box conv3_STATE_VARIABLE_Errors_1_80;
      MR_Box conv4_STATE_VARIABLE_Errors_1_69;
      MR_Box conv5_Errors_18;

      func_0(((MR_Box) ((MR_Word) (&hlds__inst_mode_type_prop_scalar_common_3[1]))), ((MR_Box) (Args_11)), ((MR_Box) ((MR_Integer) 1)), &Context_63);
      func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&hlds__inst_mode_type_prop_scalar_common_3[1]), 0)), 5))));
      conv2_ModuleInfo_74 = func_1(((MR_Box) ((MR_Word) (&hlds__inst_mode_type_prop_scalar_common_3[1]))), ((MR_Box) (Info_10)));
      ModuleInfo_74 = ((MR_Word) (conv2_ModuleInfo_74));
      hlds__mode_util__mode_get_insts_4_p_0(ModuleInfo_74, Mode0_59, &InitialInst0_75, &FinalInst0_76);
      hlds__inst_mode_type_prop__propagate_type_into_inst_lazily_9_p_0((MR_Word) (&hlds__inst_mode_type_prop_scalar_common_3[1]), ((MR_Box) (Info_10)), Context_63, Var_73, InitialInst0_75, &InitialInst_77, STATE_VARIABLE_Cache_0_19, &STATE_VARIABLE_Cache_1_79, ((MR_Box) (Errors0_17)), &conv3_STATE_VARIABLE_Errors_1_80);
      STATE_VARIABLE_Errors_1_80 = ((MR_Word) (conv3_STATE_VARIABLE_Errors_1_80));
      hlds__inst_mode_type_prop__propagate_type_into_inst_lazily_9_p_0((MR_Word) (&hlds__inst_mode_type_prop_scalar_common_3[1]), ((MR_Box) (Info_10)), Context_63, Var_73, FinalInst0_76, &FinalInst_78, STATE_VARIABLE_Cache_1_79, &STATE_VARIABLE_Cache_1_68, ((MR_Box) (STATE_VARIABLE_Errors_1_80)), &conv4_STATE_VARIABLE_Errors_1_69);
      STATE_VARIABLE_Errors_1_69 = ((MR_Word) (conv4_STATE_VARIABLE_Errors_1_69));
      {
        Mode_61 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Mode_61, 0) = ((MR_Box) (InitialInst_77));
        MR_hl_field(0, Mode_61, 1) = ((MR_Box) (FinalInst_78));
      }
      hlds__inst_mode_type_prop__propagate_types_into_modes_10_p_0((MR_Word) (&hlds__inst_mode_type_prop_scalar_common_3[1]), ((MR_Box) (Info_10)), ((MR_Box) (Args_11)), (MR_Integer) ((MR_Unsigned) 1 + (MR_Unsigned) 1), Var_72, Modes0_60, &Modes_62, STATE_VARIABLE_Cache_1_68, STATE_VARIABLE_Cache_20, ((MR_Box) (STATE_VARIABLE_Errors_1_69)), &conv5_Errors_18);
      Errors_18 = ((MR_Word) (conv5_Errors_18));
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

void MR_CALL 
hlds__inst_mode_type_prop__propagate_unchecked_type_into_bound_functor_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Type_6,
  MR_Word Inst0_7,
  MR_Word * Inst_8)
{
  MR_Word Info_9 = (MR_Word) (ModuleInfo_5);
  MR_Word Var_13;
  MR_Word Var_10;
  MR_Box conv0_Var_11;

  Var_13 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&hlds__inst_mode_type_prop_scalar_common_2[1]));
  hlds__inst_mode_type_prop__propagate_type_into_bound_functor_9_p_0((MR_Word) (&hlds__inst_mode_type_prop_scalar_common_3[0]), ((MR_Box) (Info_9)), ((MR_Box) ((MR_Integer) 0)), Type_6, Inst0_7, Inst_8, Var_13, &Var_10, ((MR_Box) ((MR_Integer) 0)), &conv0_Var_11);
}

void MR_CALL 
hlds__inst_mode_type_prop__propagate_unchecked_type_into_inst_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Type_6,
  MR_Word Inst0_7,
  MR_Word * Inst_8)
{
  MR_bool succeeded;
  MR_Word Info_9 = (MR_Word) (ModuleInfo_5);
  MR_Word Var_13;

  Var_13 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&hlds__inst_mode_type_prop_scalar_common_2[1]));
  succeeded = mercury__builtin__semidet_fail_0_p_0();
  if (succeeded)
  {
    MR_Word ModuleInfo_18;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&hlds__inst_mode_type_prop_scalar_common_3[0]), 0)), 5))));
    MR_Box conv1_ModuleInfo_18;
    MR_Word Constructors_19;

    conv1_ModuleInfo_18 = func_0(((MR_Box) ((MR_Word) (&hlds__inst_mode_type_prop_scalar_common_3[0]))), ((MR_Box) (Info_9)));
    ModuleInfo_18 = ((MR_Word) (conv1_ModuleInfo_18));
    succeeded = hlds__type_util__type_constructors_3_p_0(ModuleInfo_18, Type_6, &Constructors_19);
    if (succeeded)
    {
      MR_Word Var_10;
      MR_Box conv2_Var_11;

      hlds__inst_mode_type_prop__propagate_type_into_inst_eagerly_10_p_0((MR_Word) (&hlds__inst_mode_type_prop_scalar_common_3[0]), ((MR_Box) (Info_9)), ((MR_Box) ((MR_Integer) 0)), Type_6, Constructors_19, Inst0_7, Inst_8, Var_13, &Var_10, ((MR_Box) ((MR_Integer) 0)), &conv2_Var_11);
    }
    else
      *Inst_8 = Inst0_7;
  }
  else
  {
    MR_Word Var_24;
    MR_Box conv3_Var_25;

    hlds__inst_mode_type_prop__propagate_type_into_inst_lazily_9_p_0((MR_Word) (&hlds__inst_mode_type_prop_scalar_common_3[0]), ((MR_Box) (Info_9)), ((MR_Box) ((MR_Integer) 0)), Type_6, Inst0_7, Inst_8, Var_13, &Var_24, ((MR_Box) ((MR_Integer) 0)), &conv3_Var_25);
  }
}

static void MR_CALL 
hlds__inst_mode_type_prop__propagate_type_into_inst_9_p_0(
  MR_Word TypeClassInfo_for_tprop_record_23,
  MR_Box Info_10,
  MR_Box Context_11,
  MR_Word Type_12,
  MR_Word Inst0_13,
  MR_Word * Inst_14,
  MR_Word STATE_VARIABLE_Cache_0_19,
  MR_Word * STATE_VARIABLE_Cache_20,
  MR_Box STATE_VARIABLE_Errors_0_21,
  MR_Box * STATE_VARIABLE_Errors_22)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__semidet_fail_0_p_0();
  if (succeeded)
  {
    MR_Word ModuleInfo_17;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_tprop_record_23, 0)), 5))));
    MR_Box conv1_ModuleInfo_17;
    MR_Word Constructors_18;

    conv1_ModuleInfo_17 = func_0(((MR_Box) (TypeClassInfo_for_tprop_record_23)), Info_10);
    ModuleInfo_17 = ((MR_Word) (conv1_ModuleInfo_17));
    succeeded = hlds__type_util__type_constructors_3_p_0(ModuleInfo_17, Type_12, &Constructors_18);
    if (succeeded)
      hlds__inst_mode_type_prop__propagate_type_into_inst_eagerly_10_p_0(TypeClassInfo_for_tprop_record_23, Info_10, Context_11, Type_12, Constructors_18, Inst0_13, Inst_14, STATE_VARIABLE_Cache_0_19, STATE_VARIABLE_Cache_20, STATE_VARIABLE_Errors_0_21, STATE_VARIABLE_Errors_22);
    else
    {
      *Inst_14 = Inst0_13;
      *STATE_VARIABLE_Errors_22 = STATE_VARIABLE_Errors_0_21;
      *STATE_VARIABLE_Cache_20 = STATE_VARIABLE_Cache_0_19;
    }
  }
  else
    hlds__inst_mode_type_prop__propagate_type_into_inst_lazily_9_p_0(TypeClassInfo_for_tprop_record_23, Info_10, Context_11, Type_12, Inst0_13, Inst_14, STATE_VARIABLE_Cache_0_19, STATE_VARIABLE_Cache_20, STATE_VARIABLE_Errors_0_21, STATE_VARIABLE_Errors_22);
}

static void MR_CALL 
hlds__inst_mode_type_prop__propagate_type_into_inst_lazily_9_p_0(
  MR_Word TypeClassInfo_for_tprop_record_110,
  MR_Box Info_10,
  MR_Box Context_11,
  MR_Word Type_12,
  MR_Word Inst0_13,
  MR_Word * Inst_14,
  MR_Word STATE_VARIABLE_Cache_0_45,
  MR_Word * STATE_VARIABLE_Cache_46,
  MR_Box STATE_VARIABLE_Errors_0_47,
  MR_Box * STATE_VARIABLE_Errors_48)
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
            *STATE_VARIABLE_Cache_46 = STATE_VARIABLE_Cache_0_45;
            *STATE_VARIABLE_Errors_48 = STATE_VARIABLE_Errors_0_47;
          }
          break;
        case (MR_Integer) 1:
          {
            *Inst_14 = Inst0_13;
            *STATE_VARIABLE_Cache_46 = STATE_VARIABLE_Cache_0_45;
            *STATE_VARIABLE_Errors_48 = STATE_VARIABLE_Errors_0_47;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Uniq_17 = ((MR_Unsigned) ((MR_hl_field(1, Inst0_13, 0))) & (MR_Integer) 7);
        MR_Word HOInstInfo0_18 = ((MR_Word) ((MR_hl_field(1, Inst0_13, 1))));

        if ((HOInstInfo0_18 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word ArgTypes_20;
          MR_Word Var_117;
          MR_Word Var_19;

          succeeded = parse_tree__prog_type_test__type_is_higher_order_details_4_p_0(Type_12, &Var_19, &Var_117, &ArgTypes_20);
          if (succeeded)
            succeeded = ((MR_Integer) 1 == Var_117);
          if (succeeded)
          {
            MR_Word HOInstInfo_21;
            MR_Word Var_52;

            hlds__inst_mode_type_prop__default_higher_order_func_inst_8_p_0(TypeClassInfo_for_tprop_record_110, Info_10, Context_11, ArgTypes_20, &HOInstInfo_21, STATE_VARIABLE_Cache_0_45, STATE_VARIABLE_Cache_46, STATE_VARIABLE_Errors_0_47, STATE_VARIABLE_Errors_48);
            Var_52 = (MR_Word) (MR_mkword(1, (MR_Word) (HOInstInfo_21)));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Inst_14 = base;
              MR_hl_field(1, base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_17));
              MR_hl_field(1, base, 1) = ((MR_Box) (Var_52));
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
            *STATE_VARIABLE_Errors_48 = STATE_VARIABLE_Errors_0_47;
            *STATE_VARIABLE_Cache_46 = STATE_VARIABLE_Cache_0_45;
          }
        }
        else
        {
          MR_Word PredInstInfo0_22 = (MR_Word) (MR_body((MR_Word) (HOInstInfo0_18), (MR_Integer) 1));
          MR_Word PredOrFunc_23 = ((MR_Unsigned) ((MR_hl_field(0, PredInstInfo0_22, 0))) & (MR_Integer) 1);
          MR_Word Modes0_24 = ((MR_Word) ((MR_hl_field(0, PredInstInfo0_22, 1))));
          MR_Word MaybeArgRegs_25 = ((MR_Word) ((MR_hl_field(0, PredInstInfo0_22, 2))));
          MR_Word Detism_26 = ((MR_Unsigned) ((MR_hl_field(0, PredInstInfo0_22, 3))) & (MR_Integer) 7);
          MR_Word Modes_30;
          MR_Word PredInstInfo_31;
          MR_Word Var_59;
          MR_Word ArgTypes_75;
          MR_Word Var_118;
          MR_Word Var_27;

          succeeded = parse_tree__prog_type_test__type_is_higher_order_details_4_p_0(Type_12, &Var_27, &Var_118, &ArgTypes_75);
          if (succeeded)
            succeeded = (PredOrFunc_23 == Var_118);
          if (succeeded)
          {
            succeeded = mercury__list__same_length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ArgTypes_75, Modes0_24);
            if (succeeded)
            {
              MR_Word PredFormArity_28;
              MR_Box Args_29;
              void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

              PredFormArity_28 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_75);
              func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_tprop_record_110, 0)), 8))));
              func_3(((MR_Box) (TypeClassInfo_for_tprop_record_110)), ((MR_Box) (PredOrFunc_23)), ((MR_Box) (PredFormArity_28)), Context_11, &Args_29);
              hlds__inst_mode_type_prop__propagate_types_into_modes_10_p_0(TypeClassInfo_for_tprop_record_110, Info_10, Args_29, (MR_Integer) 1, ArgTypes_75, Modes0_24, &Modes_30, STATE_VARIABLE_Cache_0_45, STATE_VARIABLE_Cache_46, STATE_VARIABLE_Errors_0_47, STATE_VARIABLE_Errors_48);
            }
            else
            {
              void MR_CALL (* func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_tprop_record_110, 0)), 14))));

              func_4(((MR_Box) (TypeClassInfo_for_tprop_record_110)), Info_10, Context_11, ((MR_Box) (Type_12)), ((MR_Box) (ArgTypes_75)), ((MR_Box) (Inst0_13)), ((MR_Box) (Modes0_24)), STATE_VARIABLE_Errors_0_47, STATE_VARIABLE_Errors_48);
              Modes_30 = Modes0_24;
              *STATE_VARIABLE_Cache_46 = STATE_VARIABLE_Cache_0_45;
            }
          }
          else
          {
            void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_tprop_record_110, 0)), 15))));

            func_5(((MR_Box) (TypeClassInfo_for_tprop_record_110)), Info_10, Context_11, ((MR_Box) (Type_12)), ((MR_Box) (Inst0_13)), STATE_VARIABLE_Errors_0_47, STATE_VARIABLE_Errors_48);
            Modes_30 = Modes0_24;
            *STATE_VARIABLE_Cache_46 = STATE_VARIABLE_Cache_0_45;
          }
          {
            PredInstInfo_31 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, PredInstInfo_31, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_23));
            MR_hl_field(0, PredInstInfo_31, 1) = ((MR_Box) (Modes_30));
            MR_hl_field(0, PredInstInfo_31, 2) = ((MR_Box) (MaybeArgRegs_25));
            MR_hl_field(0, PredInstInfo_31, 3) = (MR_Box) ((MR_Unsigned) (Detism_26));
          }
          Var_59 = (MR_Word) (MR_mkword(1, (MR_Word) (PredInstInfo_31)));
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Inst_14 = base;
            MR_hl_field(1, base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_17));
            MR_hl_field(1, base, 1) = ((MR_Box) (Var_59));
          }
        }
      }
      break;
    case (MR_Integer) 2:
      hlds__inst_mode_type_prop__propagate_type_into_bound_functor_9_p_0(TypeClassInfo_for_tprop_record_110, Info_10, Context_11, Type_12, Inst0_13, Inst_14, STATE_VARIABLE_Cache_0_45, STATE_VARIABLE_Cache_46, STATE_VARIABLE_Errors_0_47, STATE_VARIABLE_Errors_48);
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Inst0_13, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word InstName0_41 = ((MR_Word) ((MR_hl_field(3, Inst0_13, 1))));
            void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_tprop_record_110, 0)), 11))));
            MR_Box conv2_STATE_VARIABLE_Cache_46;

            func_1(((MR_Box) (TypeClassInfo_for_tprop_record_110)), Info_10, Context_11, ((MR_Box) (InstName0_41)), ((MR_Box) (Type_12)), ((MR_Box) (STATE_VARIABLE_Cache_0_45)), &conv2_STATE_VARIABLE_Cache_46, STATE_VARIABLE_Errors_0_47, STATE_VARIABLE_Errors_48);
            *STATE_VARIABLE_Cache_46 = ((MR_Word) (conv2_STATE_VARIABLE_Cache_46));
            succeeded = ((((MR_tag((MR_Word) InstName0_41)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, InstName0_41, 0)))) == (MR_Integer) 5)));
            if (succeeded)
              *Inst_14 = Inst0_13;
            else
            {
              MR_Word InstName_44;

              {
                InstName_44 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, InstName_44, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(3, InstName_44, 1) = ((MR_Box) (Type_12));
                MR_hl_field(3, InstName_44, 2) = ((MR_Box) (InstName0_41));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Inst_14 = base;
                MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, base, 1) = ((MR_Box) (InstName_44));
              }
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word InstVars_38 = ((MR_Word) ((MR_hl_field(3, Inst0_13, 1))));
            MR_Word SubInst0_39 = ((MR_Word) ((MR_hl_field(3, Inst0_13, 2))));
            MR_Word SubInst_40;

            hlds__inst_mode_type_prop__propagate_type_into_inst_lazily_9_p_0(TypeClassInfo_for_tprop_record_110, Info_10, Context_11, Type_12, SubInst0_39, &SubInst_40, STATE_VARIABLE_Cache_0_45, STATE_VARIABLE_Cache_46, STATE_VARIABLE_Errors_0_47, STATE_VARIABLE_Errors_48);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Inst_14 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, base, 1) = ((MR_Box) (InstVars_38));
              MR_hl_field(3, base, 2) = ((MR_Box) (SubInst_40));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Uniq_108 = ((MR_Unsigned) ((MR_hl_field(3, Inst0_13, 1))) & (MR_Integer) 7);
            MR_Word HOInstInfo0_109 = ((MR_Word) ((MR_hl_field(3, Inst0_13, 2))));

            if ((HOInstInfo0_109 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word ArgTypes_78;
              MR_Word Var_119;
              MR_Word Var_32;

              succeeded = parse_tree__prog_type_test__type_is_higher_order_details_4_p_0(Type_12, &Var_32, &Var_119, &ArgTypes_78);
              if (succeeded)
                succeeded = ((MR_Integer) 1 == Var_119);
              if (succeeded)
              {
                MR_Word Var_63;
                MR_Word HOInstInfo_77;

                hlds__inst_mode_type_prop__default_higher_order_func_inst_8_p_0(TypeClassInfo_for_tprop_record_110, Info_10, Context_11, ArgTypes_78, &HOInstInfo_77, STATE_VARIABLE_Cache_0_45, STATE_VARIABLE_Cache_46, STATE_VARIABLE_Errors_0_47, STATE_VARIABLE_Errors_48);
                Var_63 = (MR_Word) (MR_mkword(1, (MR_Word) (HOInstInfo_77)));
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  *Inst_14 = base;
                  MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                  MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_108));
                  MR_hl_field(3, base, 2) = ((MR_Box) (Var_63));
                }
              }
              else
              {
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  *Inst_14 = base;
                  MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                  MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_108));
                  MR_hl_field(3, base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                *STATE_VARIABLE_Errors_48 = STATE_VARIABLE_Errors_0_47;
                *STATE_VARIABLE_Cache_46 = STATE_VARIABLE_Cache_0_45;
              }
            }
            else
            {
              MR_Word Var_68;
              MR_Word PredInstInfo0_88 = (MR_Word) (MR_body((MR_Word) (HOInstInfo0_109), (MR_Integer) 1));
              MR_Word PredOrFunc_89 = ((MR_Unsigned) ((MR_hl_field(0, PredInstInfo0_88, 0))) & (MR_Integer) 1);
              MR_Word Modes0_90 = ((MR_Word) ((MR_hl_field(0, PredInstInfo0_88, 1))));
              MR_Word MaybeArgRegs_91 = ((MR_Word) ((MR_hl_field(0, PredInstInfo0_88, 2))));
              MR_Word Detism_92 = ((MR_Unsigned) ((MR_hl_field(0, PredInstInfo0_88, 3))) & (MR_Integer) 7);
              MR_Word Modes_95;
              MR_Word PredInstInfo_96;
              MR_Word ArgTypes_84;
              MR_Word TypeCtorInfo_114_114;
              MR_Word TypeCtorInfo_115_115;
              MR_Word Var_120;
              MR_Word Var_33;

              succeeded = parse_tree__prog_type_test__type_is_higher_order_details_4_p_0(Type_12, &Var_33, &Var_120, &ArgTypes_84);
              if (succeeded)
              {
                succeeded = (PredOrFunc_89 == Var_120);
                if (succeeded)
                {
                  TypeCtorInfo_114_114 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
                  TypeCtorInfo_115_115 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0);
                  succeeded = mercury__list__same_length_2_p_0(TypeCtorInfo_114_114, TypeCtorInfo_115_115, ArgTypes_84, Modes0_90);
                }
              }
              if (succeeded)
              {
                MR_Word PredFormArity_82;
                MR_Box Args_83;
                void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

                PredFormArity_82 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_84);
                func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_tprop_record_110, 0)), 8))));
                func_0(((MR_Box) (TypeClassInfo_for_tprop_record_110)), ((MR_Box) (PredOrFunc_89)), ((MR_Box) (PredFormArity_82)), Context_11, &Args_83);
                hlds__inst_mode_type_prop__propagate_types_into_modes_10_p_0(TypeClassInfo_for_tprop_record_110, Info_10, Args_83, (MR_Integer) 1, ArgTypes_84, Modes0_90, &Modes_95, STATE_VARIABLE_Cache_0_45, STATE_VARIABLE_Cache_46, STATE_VARIABLE_Errors_0_47, STATE_VARIABLE_Errors_48);
              }
              else
              {
                Modes_95 = Modes0_90;
                *STATE_VARIABLE_Errors_48 = STATE_VARIABLE_Errors_0_47;
                *STATE_VARIABLE_Cache_46 = STATE_VARIABLE_Cache_0_45;
              }
              {
                PredInstInfo_96 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, PredInstInfo_96, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_89));
                MR_hl_field(0, PredInstInfo_96, 1) = ((MR_Box) (Modes_95));
                MR_hl_field(0, PredInstInfo_96, 2) = ((MR_Box) (MaybeArgRegs_91));
                MR_hl_field(0, PredInstInfo_96, 3) = (MR_Box) ((MR_Unsigned) (Detism_92));
              }
              Var_68 = (MR_Word) (MR_mkword(1, (MR_Word) (PredInstInfo_96)));
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *Inst_14 = base;
                MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_108));
                MR_hl_field(3, base, 2) = ((MR_Box) (Var_68));
              }
            }
          }
          break;
        case (MR_Integer) 3:
          {
            *Inst_14 = Inst0_13;
            *STATE_VARIABLE_Cache_46 = STATE_VARIABLE_Cache_0_45;
            *STATE_VARIABLE_Errors_48 = STATE_VARIABLE_Errors_0_47;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
hlds__inst_mode_type_prop__propagate_type_into_inst_eagerly_10_p_0(
  MR_Word TypeClassInfo_for_tprop_record_162,
  MR_Box Info_11,
  MR_Box Context_12,
  MR_Word Type_13,
  MR_Word Constructors_14,
  MR_Word Inst0_15,
  MR_Word * Inst_16,
  MR_Word STATE_VARIABLE_Cache_0_50,
  MR_Word * STATE_VARIABLE_Cache_51,
  MR_Box STATE_VARIABLE_Errors_0_52,
  MR_Box * STATE_VARIABLE_Errors_53)
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
              *STATE_VARIABLE_Cache_51 = STATE_VARIABLE_Cache_0_50;
              *STATE_VARIABLE_Errors_53 = STATE_VARIABLE_Errors_0_52;
            }
            break;
          case (MR_Integer) 1:
            {
              *Inst_16 = Inst0_15;
              *STATE_VARIABLE_Cache_51 = STATE_VARIABLE_Cache_0_50;
              *STATE_VARIABLE_Errors_53 = STATE_VARIABLE_Errors_0_52;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Uniq_19 = ((MR_Unsigned) ((MR_hl_field(1, Inst0_15, 0))) & (MR_Integer) 7);
          MR_Word HOInstInfo0_20 = ((MR_Word) ((MR_hl_field(1, Inst0_15, 1))));
          MR_Word ModuleInfo_21;

          ModuleInfo_21 = hlds__inst_mode_type_prop__get_module_info_1_f_0(TypeClassInfo_for_tprop_record_162, Info_11);
          if ((HOInstInfo0_20 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word ArgTypes_23;
            MR_Word Var_177;
            MR_Word Var_22;

            succeeded = parse_tree__prog_type_test__type_is_higher_order_details_4_p_0(Type_13, &Var_22, &Var_177, &ArgTypes_23);
            if (succeeded)
              succeeded = ((MR_Integer) 1 == Var_177);
            if (succeeded)
            {
              MR_Word HigherOrderInstInfo_24;
              MR_Word Var_57;

              hlds__inst_mode_type_prop__default_higher_order_func_inst_8_p_0(TypeClassInfo_for_tprop_record_162, Info_11, Context_12, ArgTypes_23, &HigherOrderInstInfo_24, STATE_VARIABLE_Cache_0_50, STATE_VARIABLE_Cache_51, STATE_VARIABLE_Errors_0_52, STATE_VARIABLE_Errors_53);
              Var_57 = (MR_Word) (MR_mkword(1, (MR_Word) (HigherOrderInstInfo_24)));
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Inst_16 = base;
                MR_hl_field(1, base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_19));
                MR_hl_field(1, base, 1) = ((MR_Box) (Var_57));
              }
            }
            else
            {
              MR_Word TypeCtor_25;
              MR_Word BoundFunctors0_26;
              MR_Word BoundFunctors_27;
              MR_Word InstResults_28;
              MR_Word Var_60;
              MR_Word Var_61;
              MR_Word Var_62;
              MR_Word Var_63;
              MR_Word Var_64;
              MR_Word Var_65;
              MR_Word Var_66;

              parse_tree__prog_type__type_to_ctor_det_2_p_0(Type_13, &TypeCtor_25);
              hlds__mode_util__constructors_to_bound_functors_5_p_0(ModuleInfo_21, Uniq_19, TypeCtor_25, Constructors_14, &BoundFunctors0_26);
              mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_functor_0), BoundFunctors0_26, &BoundFunctors_27);
              Var_61 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0));
              {
                Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_60, 0) = ((MR_Box) (Var_61));
              }
              Var_63 = mercury__set__init_0_f_0((MR_Word) (&hlds__inst_mode_type_prop_scalar_common_1[2]));
              {
                Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_62, 0) = ((MR_Box) (Var_63));
              }
              Var_65 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
              {
                Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_64, 0) = ((MR_Box) (Var_65));
              }
              Var_66 = (MR_Word) (MR_mkword(1, (MR_Word) (TypeCtor_25)));
              {
                InstResults_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, InstResults_28, 0) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 2)) | (MR_Unsigned) ((MR_Integer) 0)));
                MR_hl_field(1, InstResults_28, 1) = ((MR_Box) (Var_60));
                MR_hl_field(1, InstResults_28, 2) = ((MR_Box) (Var_62));
                MR_hl_field(1, InstResults_28, 3) = ((MR_Box) (Var_64));
                MR_hl_field(1, InstResults_28, 4) = ((MR_Box) (Var_66));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *Inst_16 = base;
                MR_hl_field(2, base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_19));
                MR_hl_field(2, base, 1) = ((MR_Box) (InstResults_28));
                MR_hl_field(2, base, 2) = ((MR_Box) (BoundFunctors_27));
              }
              *STATE_VARIABLE_Errors_53 = STATE_VARIABLE_Errors_0_52;
              *STATE_VARIABLE_Cache_51 = STATE_VARIABLE_Cache_0_50;
            }
          }
          else
          {
            MR_Word PredInstInfo0_29 = (MR_Word) (MR_body((MR_Word) (HOInstInfo0_20), (MR_Integer) 1));
            MR_Word PredOrFunc_30 = ((MR_Unsigned) ((MR_hl_field(0, PredInstInfo0_29, 0))) & (MR_Integer) 1);
            MR_Word Modes0_31 = ((MR_Word) ((MR_hl_field(0, PredInstInfo0_29, 1))));
            MR_Word MaybeArgRegs_32 = ((MR_Word) ((MR_hl_field(0, PredInstInfo0_29, 2))));
            MR_Word Detism_33 = ((MR_Unsigned) ((MR_hl_field(0, PredInstInfo0_29, 3))) & (MR_Integer) 7);
            MR_Word Modes_37;
            MR_Word PredInstInfo_38;
            MR_Word Var_70;
            MR_Word ArgTypes_96;
            MR_Word TypeCtorInfo_167_167;
            MR_Word TypeCtorInfo_168_168;
            MR_Word Var_178;
            MR_Word Var_34;

            succeeded = parse_tree__prog_type_test__type_is_higher_order_details_4_p_0(Type_13, &Var_34, &Var_178, &ArgTypes_96);
            if (succeeded)
            {
              succeeded = (PredOrFunc_30 == Var_178);
              if (succeeded)
              {
                TypeCtorInfo_167_167 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
                TypeCtorInfo_168_168 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0);
                succeeded = mercury__list__same_length_2_p_0(TypeCtorInfo_167_167, TypeCtorInfo_168_168, ArgTypes_96, Modes0_31);
              }
            }
            if (succeeded)
            {
              MR_Word PredFormArity_35;
              MR_Box Args_36;

              PredFormArity_35 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_96);
              hlds__inst_mode_type_prop__step_into_ho_inst_4_p_0(TypeClassInfo_for_tprop_record_162, PredOrFunc_30, PredFormArity_35, Context_12, &Args_36);
              hlds__inst_mode_type_prop__propagate_types_into_modes_10_p_0(TypeClassInfo_for_tprop_record_162, Info_11, Args_36, (MR_Integer) 1, ArgTypes_96, Modes0_31, &Modes_37, STATE_VARIABLE_Cache_0_50, STATE_VARIABLE_Cache_51, STATE_VARIABLE_Errors_0_52, STATE_VARIABLE_Errors_53);
            }
            else
            {
              Modes_37 = Modes0_31;
              *STATE_VARIABLE_Errors_53 = STATE_VARIABLE_Errors_0_52;
              *STATE_VARIABLE_Cache_51 = STATE_VARIABLE_Cache_0_50;
            }
            {
              PredInstInfo_38 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, PredInstInfo_38, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_30));
              MR_hl_field(0, PredInstInfo_38, 1) = ((MR_Box) (Modes_37));
              MR_hl_field(0, PredInstInfo_38, 2) = ((MR_Box) (MaybeArgRegs_32));
              MR_hl_field(0, PredInstInfo_38, 3) = (MR_Box) ((MR_Unsigned) (Detism_33));
            }
            Var_70 = (MR_Word) (MR_mkword(1, (MR_Word) (PredInstInfo_38)));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Inst_16 = base;
              MR_hl_field(1, base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_19));
              MR_hl_field(1, base, 1) = ((MR_Box) (Var_70));
            }
          }
        }
        break;
      case (MR_Integer) 2:
        hlds__inst_mode_type_prop__propagate_type_into_bound_functor_9_p_0(TypeClassInfo_for_tprop_record_162, Info_11, Context_12, Type_13, Inst0_15, Inst_16, STATE_VARIABLE_Cache_0_50, STATE_VARIABLE_Cache_51, STATE_VARIABLE_Errors_0_52, STATE_VARIABLE_Errors_53);
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Inst0_15, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word InstName_48 = ((MR_Word) ((MR_hl_field(3, Inst0_15, 1))));
              MR_Word NamedInst_49;
              MR_Word STATE_VARIABLE_Cache_7_92;
              MR_Box STATE_VARIABLE_Errors_7_93;
              MR_Word ModuleInfo_161;
              MR_Word next_value_of_Inst0_15;
              MR_Word next_value_of_STATE_VARIABLE_Cache_0_50;
              MR_Box next_value_of_STATE_VARIABLE_Errors_0_52;

              hlds__inst_mode_type_prop__check_for_bad_use_of_user_inst_8_p_0(TypeClassInfo_for_tprop_record_162, Info_11, Context_12, InstName_48, Type_13, STATE_VARIABLE_Cache_0_50, &STATE_VARIABLE_Cache_7_92, STATE_VARIABLE_Errors_0_52, &STATE_VARIABLE_Errors_7_93);
              ModuleInfo_161 = hlds__inst_mode_type_prop__get_module_info_1_f_0(TypeClassInfo_for_tprop_record_162, Info_11);
              hlds__inst_lookup__inst_lookup_3_p_0(ModuleInfo_161, InstName_48, &NamedInst_49);
              // direct tailcall eliminated
              ;
              next_value_of_Inst0_15 = NamedInst_49;
              next_value_of_STATE_VARIABLE_Cache_0_50 = STATE_VARIABLE_Cache_7_92;
              next_value_of_STATE_VARIABLE_Errors_0_52 = STATE_VARIABLE_Errors_7_93;
              Inst0_15 = next_value_of_Inst0_15;
              STATE_VARIABLE_Cache_0_50 = next_value_of_STATE_VARIABLE_Cache_0_50;
              STATE_VARIABLE_Errors_0_52 = next_value_of_STATE_VARIABLE_Errors_0_52;
              continue;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word InstVars_45 = ((MR_Word) ((MR_hl_field(3, Inst0_15, 1))));
              MR_Word SubInst0_46 = ((MR_Word) ((MR_hl_field(3, Inst0_15, 2))));
              MR_Word SubInst_47;

              hlds__inst_mode_type_prop__propagate_type_into_inst_eagerly_10_p_0(TypeClassInfo_for_tprop_record_162, Info_11, Context_12, Type_13, Constructors_14, SubInst0_46, &SubInst_47, STATE_VARIABLE_Cache_0_50, STATE_VARIABLE_Cache_51, STATE_VARIABLE_Errors_0_52, STATE_VARIABLE_Errors_53);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *Inst_16 = base;
                MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(3, base, 1) = ((MR_Box) (InstVars_45));
                MR_hl_field(3, base, 2) = ((MR_Box) (SubInst_47));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Uniq_144 = ((MR_Unsigned) ((MR_hl_field(3, Inst0_15, 1))) & (MR_Integer) 7);
              MR_Word HOInstInfo0_145 = ((MR_Word) ((MR_hl_field(3, Inst0_15, 2))));
              MR_Word ModuleInfo_146;

              ModuleInfo_146 = hlds__inst_mode_type_prop__get_module_info_1_f_0(TypeClassInfo_for_tprop_record_162, Info_11);
              if ((HOInstInfo0_145 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word ArgTypes_103;
                MR_Word Var_179;
                MR_Word Var_39;

                succeeded = parse_tree__prog_type_test__type_is_higher_order_details_4_p_0(Type_13, &Var_39, &Var_179, &ArgTypes_103);
                if (succeeded)
                  succeeded = ((MR_Integer) 1 == Var_179);
                if (succeeded)
                {
                  MR_Word Var_74;
                  MR_Word PredInstInfo_98;

                  hlds__inst_mode_type_prop__default_higher_order_func_inst_8_p_0(TypeClassInfo_for_tprop_record_162, Info_11, Context_12, ArgTypes_103, &PredInstInfo_98, STATE_VARIABLE_Cache_0_50, STATE_VARIABLE_Cache_51, STATE_VARIABLE_Errors_0_52, STATE_VARIABLE_Errors_53);
                  Var_74 = (MR_Word) (MR_mkword(1, (MR_Word) (PredInstInfo_98)));
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    *Inst_16 = base;
                    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                    MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_144));
                    MR_hl_field(3, base, 2) = ((MR_Box) (Var_74));
                  }
                }
                else
                {
                  MR_Word Var_77;
                  MR_Word Var_78;
                  MR_Word Var_79;
                  MR_Word Var_80;
                  MR_Word Var_81;
                  MR_Word Var_82;
                  MR_Word Var_83;
                  MR_Word TypeCtor_99;
                  MR_Word BoundFunctors0_100;
                  MR_Word BoundFunctors_101;
                  MR_Word InstResults_102;

                  parse_tree__prog_type__type_to_ctor_det_2_p_0(Type_13, &TypeCtor_99);
                  hlds__mode_util__constructors_to_bound_any_insts_5_p_0(ModuleInfo_146, Uniq_144, TypeCtor_99, Constructors_14, &BoundFunctors0_100);
                  mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_functor_0), BoundFunctors0_100, &BoundFunctors_101);
                  Var_78 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0));
                  {
                    Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_77, 0) = ((MR_Box) (Var_78));
                  }
                  Var_80 = mercury__set__init_0_f_0((MR_Word) (&hlds__inst_mode_type_prop_scalar_common_1[2]));
                  {
                    Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_79, 0) = ((MR_Box) (Var_80));
                  }
                  Var_82 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
                  {
                    Var_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_81, 0) = ((MR_Box) (Var_82));
                  }
                  Var_83 = (MR_Word) (MR_mkword(1, (MR_Word) (TypeCtor_99)));
                  {
                    InstResults_102 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, InstResults_102, 0) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 2) << 2)) | (MR_Unsigned) ((MR_Integer) 2)));
                    MR_hl_field(1, InstResults_102, 1) = ((MR_Box) (Var_77));
                    MR_hl_field(1, InstResults_102, 2) = ((MR_Box) (Var_79));
                    MR_hl_field(1, InstResults_102, 3) = ((MR_Box) (Var_81));
                    MR_hl_field(1, InstResults_102, 4) = ((MR_Box) (Var_83));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    *Inst_16 = base;
                    MR_hl_field(2, base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_144));
                    MR_hl_field(2, base, 1) = ((MR_Box) (InstResults_102));
                    MR_hl_field(2, base, 2) = ((MR_Box) (BoundFunctors_101));
                  }
                  *STATE_VARIABLE_Errors_53 = STATE_VARIABLE_Errors_0_52;
                  *STATE_VARIABLE_Cache_51 = STATE_VARIABLE_Cache_0_50;
                }
              }
              else
              {
                MR_Word Var_87;
                MR_Word PredInstInfo0_121 = (MR_Word) (MR_body((MR_Word) (HOInstInfo0_145), (MR_Integer) 1));
                MR_Word PredOrFunc_122 = ((MR_Unsigned) ((MR_hl_field(0, PredInstInfo0_121, 0))) & (MR_Integer) 1);
                MR_Word Modes0_123 = ((MR_Word) ((MR_hl_field(0, PredInstInfo0_121, 1))));
                MR_Word MaybeArgRegs_124 = ((MR_Word) ((MR_hl_field(0, PredInstInfo0_121, 2))));
                MR_Word Detism_125 = ((MR_Unsigned) ((MR_hl_field(0, PredInstInfo0_121, 3))) & (MR_Integer) 7);
                MR_Word Modes_128;
                MR_Word PredInstInfo_129;
                MR_Word ArgTypes_117;
                MR_Word TypeCtorInfo_174_174;
                MR_Word TypeCtorInfo_175_175;
                MR_Word Var_180;
                MR_Word Var_40;

                succeeded = parse_tree__prog_type_test__type_is_higher_order_details_4_p_0(Type_13, &Var_40, &Var_180, &ArgTypes_117);
                if (succeeded)
                {
                  succeeded = (PredOrFunc_122 == Var_180);
                  if (succeeded)
                  {
                    TypeCtorInfo_174_174 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
                    TypeCtorInfo_175_175 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0);
                    succeeded = mercury__list__same_length_2_p_0(TypeCtorInfo_174_174, TypeCtorInfo_175_175, ArgTypes_117, Modes0_123);
                  }
                }
                if (succeeded)
                {
                  MR_Word PredFormArity_115;
                  MR_Box Args_116;

                  PredFormArity_115 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_117);
                  hlds__inst_mode_type_prop__step_into_ho_inst_4_p_0(TypeClassInfo_for_tprop_record_162, PredOrFunc_122, PredFormArity_115, Context_12, &Args_116);
                  hlds__inst_mode_type_prop__propagate_types_into_modes_10_p_0(TypeClassInfo_for_tprop_record_162, Info_11, Args_116, (MR_Integer) 1, ArgTypes_117, Modes0_123, &Modes_128, STATE_VARIABLE_Cache_0_50, STATE_VARIABLE_Cache_51, STATE_VARIABLE_Errors_0_52, STATE_VARIABLE_Errors_53);
                }
                else
                {
                  Modes_128 = Modes0_123;
                  *STATE_VARIABLE_Errors_53 = STATE_VARIABLE_Errors_0_52;
                  *STATE_VARIABLE_Cache_51 = STATE_VARIABLE_Cache_0_50;
                }
                {
                  PredInstInfo_129 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, PredInstInfo_129, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_122));
                  MR_hl_field(0, PredInstInfo_129, 1) = ((MR_Box) (Modes_128));
                  MR_hl_field(0, PredInstInfo_129, 2) = ((MR_Box) (MaybeArgRegs_124));
                  MR_hl_field(0, PredInstInfo_129, 3) = (MR_Box) ((MR_Unsigned) (Detism_125));
                }
                Var_87 = (MR_Word) (MR_mkword(1, (MR_Word) (PredInstInfo_129)));
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  *Inst_16 = base;
                  MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                  MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_144));
                  MR_hl_field(3, base, 2) = ((MR_Box) (Var_87));
                }
              }
            }
            break;
          case (MR_Integer) 3:
            {
              *Inst_16 = Inst0_15;
              *STATE_VARIABLE_Cache_51 = STATE_VARIABLE_Cache_0_50;
              *STATE_VARIABLE_Errors_53 = STATE_VARIABLE_Errors_0_52;
            }
            break;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
hlds__inst_mode_type_prop__propagate_type_into_bound_functor_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_BoundFunctor_14;
  MR_Word conv3_STATE_VARIABLE_Cache_27;

  hlds__inst_mode_type_prop__propagate_types_into_tuple_9_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), (MR_hl_field(0, closure, 4)), (MR_hl_field(0, closure, 5)), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)), &conv4_BoundFunctor_14, ((MR_Word) (wrapper_arg_3)), &conv3_STATE_VARIABLE_Cache_27, wrapper_arg_5, wrapper_arg_6);
  *wrapper_arg_2 = ((MR_Box) (conv4_BoundFunctor_14));
  *wrapper_arg_4 = ((MR_Box) (conv3_STATE_VARIABLE_Cache_27));
}

static void MR_CALL 
hlds__inst_mode_type_prop__propagate_type_into_bound_functor_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_BoundFunctor_8;

  hlds__inst_mode_type_prop__propagate_char_type_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), (MR_hl_field(0, closure, 4)), ((MR_Word) (wrapper_arg_1)), &conv0_BoundFunctor_8, wrapper_arg_3, wrapper_arg_4);
  *wrapper_arg_2 = ((MR_Box) (conv0_BoundFunctor_8));
}

static void MR_CALL 
hlds__inst_mode_type_prop__propagate_type_into_bound_functor_9_p_0(
  MR_Word TypeClassInfo_for_tprop_record_90,
  MR_Box Info_10,
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
    MR_Word Uniq_17 = ((MR_Unsigned) ((MR_hl_field(2, Inst0_13, 0))) & (MR_Integer) 7);
    MR_Word InstResults0_18 = ((MR_Word) ((MR_hl_field(2, Inst0_13, 1))));
    MR_Word BoundFunctors0_19 = ((MR_Word) ((MR_hl_field(2, Inst0_13, 2))));

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
          MR_Word SymName_35 = ((MR_Word) ((MR_hl_field(1, Type_12, 0))));
          MR_Word ArgTypes_82 = ((MR_Word) ((MR_hl_field(1, Type_12, 1))));
          MR_Word TypeModule_36;
          MR_Word TypeCtor_40;
          MR_Word TypeParams_42;
          MR_Word TypeBodyDu_44;
          MR_Word TypeCtorInfo_108_108;
          MR_Word ModuleInfo_38;
          MR_Word TypeTable_39;
          MR_Word TypeDefn_41;
          MR_Word TypeBody_43;
          MR_Integer Var_66;
          MR_Box MR_CALL (* func_1)(MR_Box, MR_Box);
          MR_Box conv2_ModuleInfo_38;

          succeeded = ((MR_tag((MR_Word) SymName_35)) == (MR_Integer) 1);
          if (succeeded)
          {
            TypeModule_36 = ((MR_Word) ((MR_hl_field(1, SymName_35, 0))));
            func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_tprop_record_90, 0)), 5))));
            conv2_ModuleInfo_38 = func_1(((MR_Box) (TypeClassInfo_for_tprop_record_90)), Info_10);
            ModuleInfo_38 = ((MR_Word) (conv2_ModuleInfo_38));
            hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_38, &TypeTable_39);
            TypeCtorInfo_108_108 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
            Var_66 = mercury__list__length_1_f_0(TypeCtorInfo_108_108, ArgTypes_82);
            {
              TypeCtor_40 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, TypeCtor_40, 0) = ((MR_Box) (SymName_35));
              MR_hl_field(0, TypeCtor_40, 1) = ((MR_Box) (Var_66));
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
              PropagatedResult0_50 = ((MR_Word) ((MR_hl_field(1, InstResults0_18, 4))));
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
              MR_Word BoundFunctors1_55;
              MR_Word BoundFunctors_74;
              MR_Word PropagatedResult_75;

              mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&hlds__inst_mode_type_prop_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TypeParams_42, ArgTypes_82, &ArgSubst_52);
              OoMConstructors_53 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_44, 0))));
              Constructors_54 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), OoMConstructors_53);
              hlds__inst_mode_type_prop__propagate_subst_type_ctor_into_bound_functors_12_p_0(TypeClassInfo_for_tprop_record_90, Info_10, Context_11, ArgSubst_52, TypeCtor_40, TypeModule_36, Constructors_54, BoundFunctors0_19, &BoundFunctors1_55, STATE_VARIABLE_Cache_0_57, STATE_VARIABLE_Cache_58, STATE_VARIABLE_Errors_0_59, STATE_VARIABLE_Errors_60);
              mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_functor_0), BoundFunctors1_55, &BoundFunctors_74);
              PropagatedResult_75 = (MR_Word) (MR_mkword(1, (MR_Word) (TypeCtor_40)));
              hlds__inst_mode_type_prop__construct_new_bound_functor_5_p_0(Uniq_17, InstResults0_18, PropagatedResult_75, BoundFunctors_74, Inst_14);
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
          MR_Word BuiltinType_20 = ((MR_Word) ((MR_hl_field(2, Type_12, 0))));

          switch (MR_tag((MR_Word) BuiltinType_20)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(BuiltinType_20)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 1:
                  {
                    *Inst_14 = Inst0_13;
                    *STATE_VARIABLE_Errors_60 = STATE_VARIABLE_Errors_0_59;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word TypeInfo_97_97;
                    MR_Word BoundFunctors_21;
                    MR_Word Var_61;

                    {
                      Var_61 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_61, 0) = ((MR_Box) (&hlds__inst_mode_type_prop_scalar_common_5[0]));
                      MR_hl_field(0, Var_61, 1) = ((MR_Box) (hlds__inst_mode_type_prop__propagate_type_into_bound_functor_9_p_0_1));
                      MR_hl_field(0, Var_61, 2) = ((MR_Box) ((MR_Integer) 2));
                      MR_hl_field(0, Var_61, 3) = ((MR_Box) (TypeClassInfo_for_tprop_record_90));
                      MR_hl_field(0, Var_61, 4) = Context_11;
                    }
                    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_tprop_record_90, (MR_Integer) 4, &TypeInfo_97_97);
                    mercury__list__map_foldl_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_functor_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_functor_0), TypeInfo_97_97, Var_61, BoundFunctors0_19, &BoundFunctors_21, STATE_VARIABLE_Errors_0_59, STATE_VARIABLE_Errors_60);
                    if ((BoundFunctors_21 == (MR_Word) ((MR_Unsigned) 0U)))
                      *Inst_14 = (MR_Word) ((MR_Unsigned) 4U);
                    else
                    {
                      MR_Word InstResults_116;

                      switch (MR_tag((MR_Word) InstResults0_18)) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          switch (MR_unmkbody(InstResults0_18)) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 0:
                              InstResults_116 = (MR_Word) (MR_mkword(1, &hlds__inst_mode_type_prop_scalar_common_3[2]));
                              break;
                            case (MR_Integer) 1:
                              InstResults_116 = InstResults0_18;
                              break;
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(1, InstResults0_18, 0)));

                            {
                              InstResults_116 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, InstResults_116, 0) = (MR_Box) (packed_word_1);
                              MR_hl_field(1, InstResults_116, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                              MR_hl_field(1, InstResults_116, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                              MR_hl_field(1, InstResults_116, 3) = ((MR_Box) ((MR_Unsigned) 0U));
                              MR_hl_field(1, InstResults_116, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                            }
                          }
                          break;
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        *Inst_14 = base;
                        MR_hl_field(2, base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_17));
                        MR_hl_field(2, base, 1) = ((MR_Box) (InstResults_116));
                        MR_hl_field(2, base, 2) = ((MR_Box) (BoundFunctors_21));
                      }
                    }
                  }
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                *Inst_14 = Inst0_13;
                *STATE_VARIABLE_Errors_60 = STATE_VARIABLE_Errors_0_59;
              }
              break;
          }
          *STATE_VARIABLE_Cache_58 = STATE_VARIABLE_Cache_0_57;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Type_12, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word TypeInfo_107_107;
              MR_Word ArgTypes_24 = ((MR_Word) ((MR_hl_field(3, Type_12, 1))));
              MR_Word Var_63;
              MR_Word BoundFunctors_71;
              MR_Box conv5_STATE_VARIABLE_Cache_58;

              {
                Var_63 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_63, 0) = ((MR_Box) (&hlds__inst_mode_type_prop_scalar_common_7[0]));
                MR_hl_field(0, Var_63, 1) = ((MR_Box) (hlds__inst_mode_type_prop__propagate_type_into_bound_functor_9_p_0_2));
                MR_hl_field(0, Var_63, 2) = ((MR_Box) ((MR_Integer) 4));
                MR_hl_field(0, Var_63, 3) = ((MR_Box) (TypeClassInfo_for_tprop_record_90));
                MR_hl_field(0, Var_63, 4) = Info_10;
                MR_hl_field(0, Var_63, 5) = Context_11;
                MR_hl_field(0, Var_63, 6) = ((MR_Box) (ArgTypes_24));
              }
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_tprop_record_90, (MR_Integer) 4, &TypeInfo_107_107);
              mercury__list__map_foldl2_7_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_functor_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_functor_0), (MR_Word) (&hlds__inst_mode_type_prop_scalar_common_2[2]), TypeInfo_107_107, Var_63, BoundFunctors0_19, &BoundFunctors_71, ((MR_Box) (STATE_VARIABLE_Cache_0_57)), &conv5_STATE_VARIABLE_Cache_58, STATE_VARIABLE_Errors_0_59, STATE_VARIABLE_Errors_60);
              *STATE_VARIABLE_Cache_58 = ((MR_Word) (conv5_STATE_VARIABLE_Cache_58));
              hlds__inst_mode_type_prop__construct_new_bound_functor_5_p_0(Uniq_17, InstResults0_18, (MR_Word) ((MR_Unsigned) 0U), BoundFunctors_71, Inst_14);
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
              MR_Word KindedType_56 = ((MR_Word) ((MR_hl_field(3, Type_12, 1))));
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
hlds__inst_mode_type_prop__propagate_types_into_modes_10_p_0(
  MR_Word TypeClassInfo_for_tprop_record_68,
  MR_Box ModuleInfo_1,
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
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.inst_mode_type_prop.propagate_types_into_modes\'/10", (MR_String) "length mismatch");
        return;
      }
    }
  else
  {
    MR_Word Var_69 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
    MR_Word Var_70 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));

    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.inst_mode_type_prop.propagate_types_into_modes\'/10", (MR_String) "length mismatch");
        return;
      }
    }
    else
    {
      MR_Word Mode0_51 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 0))));
      MR_Word Modes0_52 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 1))));
      MR_Word Mode_53;
      MR_Word Modes_54;
      MR_Box Context_57;
      MR_Word STATE_VARIABLE_Cache_1_62;
      MR_Box STATE_VARIABLE_Errors_1_63;
      MR_Integer Var_64;
      MR_Word ModuleInfo_71;
      MR_Word InitialInst0_72;
      MR_Word FinalInst0_73;
      MR_Word InitialInst_74;
      MR_Word FinalInst_75;
      MR_Word STATE_VARIABLE_Cache_1_76;
      MR_Box STATE_VARIABLE_Errors_1_77;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_tprop_record_68, 0)), 9))));

      func_0(((MR_Box) (TypeClassInfo_for_tprop_record_68)), Args_2, ((MR_Box) (ArgNum_3)), &Context_57);
      ModuleInfo_71 = hlds__inst_mode_type_prop__get_module_info_1_f_0(TypeClassInfo_for_tprop_record_68, ModuleInfo_1);
      hlds__mode_util__mode_get_insts_4_p_0(ModuleInfo_71, Mode0_51, &InitialInst0_72, &FinalInst0_73);
      hlds__inst_mode_type_prop__propagate_type_into_inst_lazily_9_p_0(TypeClassInfo_for_tprop_record_68, ModuleInfo_1, Context_57, Var_70, InitialInst0_72, &InitialInst_74, STATE_VARIABLE_Cache_0_7, &STATE_VARIABLE_Cache_1_76, STATE_VARIABLE_Errors_0_9, &STATE_VARIABLE_Errors_1_77);
      hlds__inst_mode_type_prop__propagate_type_into_inst_lazily_9_p_0(TypeClassInfo_for_tprop_record_68, ModuleInfo_1, Context_57, Var_70, FinalInst0_73, &FinalInst_75, STATE_VARIABLE_Cache_1_76, &STATE_VARIABLE_Cache_1_62, STATE_VARIABLE_Errors_1_77, &STATE_VARIABLE_Errors_1_63);
      {
        Mode_53 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Mode_53, 0) = ((MR_Box) (InitialInst_74));
        MR_hl_field(0, Mode_53, 1) = ((MR_Box) (FinalInst_75));
      }
      Var_64 = (MR_Integer) ((MR_Unsigned) ArgNum_3 + (MR_Unsigned) 1);
      hlds__inst_mode_type_prop__propagate_types_into_modes_10_p_0(TypeClassInfo_for_tprop_record_68, ModuleInfo_1, Args_2, Var_64, Var_69, Modes0_52, &Modes_54, STATE_VARIABLE_Cache_1_62, STATE_VARIABLE_Cache_8, STATE_VARIABLE_Errors_1_63, STATE_VARIABLE_Errors_10);
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
hlds__inst_mode_type_prop__propagate_subst_type_ctor_into_bound_functors_12_p_0(
  MR_Word TypeClassInfo_for_tprop_record_71,
  MR_Box Info_1,
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
    MR_Word BoundFunctor0_31 = ((MR_Word) ((MR_hl_field(1, HeadVar__7_7, 0))));
    MR_Word BoundFunctors0_32 = ((MR_Word) ((MR_hl_field(1, HeadVar__7_7, 1))));
    MR_Word BoundFunctor_33;
    MR_Word BoundFunctors_34;
    MR_Word ConsId0_37 = ((MR_Word) ((MR_hl_field(0, BoundFunctor0_31, 0))));
    MR_Word ArgInsts0_38 = ((MR_Word) ((MR_hl_field(0, BoundFunctor0_31, 1))));
    MR_Word STATE_VARIABLE_Cache_1_64;
    MR_Box STATE_VARIABLE_Errors_2_65;
    MR_Word ConsSymName0_39;
    MR_Integer ConsArity_40;
    MR_Word Var_60;

    succeeded = ((MR_tag((MR_Word) ConsId0_37)) == (MR_Integer) 1);
    if (succeeded)
    {
      Var_60 = (MR_Word) (MR_body((MR_Word) (ConsId0_37), (MR_Integer) 1));
      ConsSymName0_39 = ((MR_Word) ((MR_hl_field(0, Var_60, 0))));
      ConsArity_40 = ((MR_Integer) ((MR_hl_field(0, Var_60, 1))));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word ConsSymName_43;
      MR_Word ConsId_45;
      MR_Box STATE_VARIABLE_Errors_1_61;
      MR_Word Var_62;
      MR_Word MatchingConstructor_46;

      if (((MR_tag((MR_Word) ConsSymName0_39)) == (MR_Integer) 1))
      {
        MR_Word ConsModule0_44 = ((MR_Word) ((MR_hl_field(1, ConsSymName0_39, 0))));
        MR_String ConsName_70 = ((MR_String) ((MR_hl_field(1, ConsSymName0_39, 1))));
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_tprop_record_71, 0)), 12))));

        func_0(((MR_Box) (TypeClassInfo_for_tprop_record_71)), Context_2, ((MR_Box) (TypeCtor_4)), ((MR_Box) (TypeModule_5)), ((MR_Box) (ConsModule0_44)), ((MR_Box) (ConsName_70)), ((MR_Box) (ConsArity_40)), STATE_VARIABLE_Errors_0_11, &STATE_VARIABLE_Errors_1_61);
        {
          ConsSymName_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, ConsSymName_43, 0) = ((MR_Box) (TypeModule_5));
          MR_hl_field(1, ConsSymName_43, 1) = ((MR_Box) (ConsName_70));
        }
      }
      else
      {
        MR_String ConsName_42 = ((MR_String) ((MR_hl_field(0, ConsSymName0_39, 0))));

        {
          ConsSymName_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, ConsSymName_43, 0) = ((MR_Box) (TypeModule_5));
          MR_hl_field(1, ConsSymName_43, 1) = ((MR_Box) (ConsName_42));
        }
        STATE_VARIABLE_Errors_1_61 = STATE_VARIABLE_Errors_0_11;
      }
      {
        Var_62 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_62, 0) = ((MR_Box) (ConsSymName_43));
        MR_hl_field(0, Var_62, 1) = ((MR_Box) (ConsArity_40));
        MR_hl_field(0, Var_62, 2) = ((MR_Box) (TypeCtor_4));
      }
      ConsId_45 = (MR_Word) (MR_mkword(1, (MR_Word) (Var_62)));
      succeeded = hlds__inst_mode_type_prop__find_first_matching_constructor_4_p_0(ConsSymName_43, ConsArity_40, Constructors_6, &MatchingConstructor_46);
      if (succeeded)
      {
        MR_Word CtorArgs_50 = ((MR_Word) ((MR_hl_field(0, MatchingConstructor_46, 3))));
        MR_Word ArgTypes_53;
        MR_Box Args_54;
        MR_Word ArgInsts_55;
        void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);

        hlds__inst_mode_type_prop__get_constructor_arg_types_2_p_0(CtorArgs_50, &ArgTypes_53);
        func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_tprop_record_71, 0)), 6))));
        func_1(((MR_Box) (TypeClassInfo_for_tprop_record_71)), ((MR_Box) (ConsId_45)), Context_2, &Args_54);
        hlds__inst_mode_type_prop__propagate_subst_types_into_insts_11_p_0(TypeClassInfo_for_tprop_record_71, Info_1, Args_54, (MR_Integer) 1, Subst_3, ArgTypes_53, ArgInsts0_38, &ArgInsts_55, STATE_VARIABLE_Cache_0_9, &STATE_VARIABLE_Cache_1_64, STATE_VARIABLE_Errors_1_61, &STATE_VARIABLE_Errors_2_65);
        {
          BoundFunctor_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, BoundFunctor_33, 0) = ((MR_Box) (ConsId_45));
          MR_hl_field(0, BoundFunctor_33, 1) = ((MR_Box) (ArgInsts_55));
        }
      }
      else
      {
        void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_tprop_record_71, 0)), 13))));

        func_2(((MR_Box) (TypeClassInfo_for_tprop_record_71)), Context_2, ((MR_Box) (TypeCtor_4)), ((MR_Box) (ConsId0_37)), STATE_VARIABLE_Errors_1_61, &STATE_VARIABLE_Errors_2_65);
        {
          BoundFunctor_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, BoundFunctor_33, 0) = ((MR_Box) (ConsId_45));
          MR_hl_field(0, BoundFunctor_33, 1) = ((MR_Box) (ArgInsts0_38));
        }
        STATE_VARIABLE_Cache_1_64 = STATE_VARIABLE_Cache_0_9;
      }
    }
    else
    {
      void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_tprop_record_71, 0)), 13))));

      func_3(((MR_Box) (TypeClassInfo_for_tprop_record_71)), Context_2, ((MR_Box) (TypeCtor_4)), ((MR_Box) (ConsId0_37)), STATE_VARIABLE_Errors_0_11, &STATE_VARIABLE_Errors_2_65);
      BoundFunctor_33 = BoundFunctor0_31;
      STATE_VARIABLE_Cache_1_64 = STATE_VARIABLE_Cache_0_9;
    }
    hlds__inst_mode_type_prop__propagate_subst_type_ctor_into_bound_functors_12_p_0(TypeClassInfo_for_tprop_record_71, Info_1, Context_2, Subst_3, TypeCtor_4, TypeModule_5, Constructors_6, BoundFunctors0_32, &BoundFunctors_34, STATE_VARIABLE_Cache_1_64, STATE_VARIABLE_Cache_10, STATE_VARIABLE_Errors_2_65, STATE_VARIABLE_Errors_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__8_8 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (BoundFunctor_33));
      MR_hl_field(1, base, 1) = ((MR_Box) (BoundFunctors_34));
    }
  }
}

static void MR_CALL 
hlds__inst_mode_type_prop__default_higher_order_func_inst_8_p_0(
  MR_Word TypeClassInfo_for_tprop_record_44,
  MR_Box Info_9,
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
  mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), NumFuncArgs_19, ((MR_Box) (&hlds__inst_mode_type_prop_scalar_common_1[82])), &FuncArgModes_20);
  PredArgModes0_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), FuncArgModes_20, (MR_Word) (MR_mkword(1, &hlds__inst_mode_type_prop_scalar_common_1[83])));
  Var_37 = (MR_Word) (NumPredArgs_18);
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_tprop_record_44, 0)), 8))));
  func_0(((MR_Box) (TypeClassInfo_for_tprop_record_44)), ((MR_Box) ((MR_Integer) 1)), ((MR_Box) (Var_37)), Context_10, &Args_23);
  hlds__inst_mode_type_prop__propagate_types_into_modes_10_p_0(TypeClassInfo_for_tprop_record_44, Info_9, Args_23, (MR_Integer) 1, PredArgTypes_11, PredArgModes0_22, &PredArgModes_24, STATE_VARIABLE_Cache_0_25, STATE_VARIABLE_Cache_26, STATE_VARIABLE_Errors_0_27, STATE_VARIABLE_Errors_28);
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
hlds__inst_mode_type_prop__propagate_subst_types_into_insts_11_p_0(
  MR_Word TypeClassInfo_for_tprop_record_73,
  MR_Box Info_1,
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
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.inst_mode_type_prop.propagate_subst_types_into_insts\'/11", (MR_String) "length mismatch");
        return;
      }
    }
  else
  {
    MR_Word Var_74 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 1))));
    MR_Word Var_75 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 0))));

    if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.inst_mode_type_prop.propagate_subst_types_into_insts\'/11", (MR_String) "length mismatch");
        return;
      }
    }
    else
    {
      MR_Word Inst0_56 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, 0))));
      MR_Word Insts0_57 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, 1))));
      MR_Word Inst_58;
      MR_Word Insts_59;
      MR_Box Context_62;
      MR_Word STATE_VARIABLE_Cache_1_67;
      MR_Box STATE_VARIABLE_Errors_1_68;
      MR_Integer Var_69;
      MR_Word Type_76;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_tprop_record_73, 0)), 9))));

      func_0(((MR_Box) (TypeClassInfo_for_tprop_record_73)), Args_2, ((MR_Box) (ArgNum_3)), &Context_62);
      succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&hlds__inst_mode_type_prop_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Subst_4);
      if (succeeded)
        Type_76 = Var_75;
      else
        parse_tree__prog_type_subst__apply_subst_to_type_3_p_0(Subst_4, Var_75, &Type_76);
      hlds__inst_mode_type_prop__propagate_type_into_inst_9_p_0(TypeClassInfo_for_tprop_record_73, Info_1, Context_62, Type_76, Inst0_56, &Inst_58, STATE_VARIABLE_Cache_0_8, &STATE_VARIABLE_Cache_1_67, STATE_VARIABLE_Errors_0_10, &STATE_VARIABLE_Errors_1_68);
      Var_69 = (MR_Integer) ((MR_Unsigned) ArgNum_3 + (MR_Unsigned) 1);
      hlds__inst_mode_type_prop__propagate_subst_types_into_insts_11_p_0(TypeClassInfo_for_tprop_record_73, Info_1, Args_2, Var_69, Subst_4, Var_74, Insts0_57, &Insts_59, STATE_VARIABLE_Cache_1_67, STATE_VARIABLE_Cache_9, STATE_VARIABLE_Errors_1_68, STATE_VARIABLE_Errors_11);
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
hlds__inst_mode_type_prop__check_for_bad_use_of_user_inst_8_p_0(
  MR_Word TypeClassInfo_for_tprop_record_9,
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Box HeadVar__7_7,
  MR_Box * HeadVar__8_8)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_tprop_record_9, 0)), 11))));
  MR_Box conv1_HeadVar__6_6;

  func_0(((MR_Box) (TypeClassInfo_for_tprop_record_9)), HeadVar__1_1, HeadVar__2_2, ((MR_Box) (HeadVar__3_3)), ((MR_Box) (HeadVar__4_4)), ((MR_Box) (HeadVar__5_5)), &conv1_HeadVar__6_6, HeadVar__7_7, HeadVar__8_8);
  *HeadVar__6_6 = ((MR_Word) (conv1_HeadVar__6_6));
}

static void MR_CALL 
hlds__inst_mode_type_prop__step_into_ho_inst_4_p_0(
  MR_Word TypeClassInfo_for_tprop_record_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_tprop_record_5, 0)), 8))));

  func_0(((MR_Box) (TypeClassInfo_for_tprop_record_5)), ((MR_Box) (HeadVar__1_1)), ((MR_Box) (HeadVar__2_2)), HeadVar__3_3, HeadVar__4_4);
}

static MR_Word MR_CALL 
hlds__inst_mode_type_prop__get_module_info_1_f_0(
  MR_Word TypeClassInfo_for_tprop_record_3,
  MR_Box HeadVar__1_1)
{
  MR_Word HeadVar__2_2;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_tprop_record_3, 0)), 5))));
  MR_Box conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = func_0(((MR_Box) (TypeClassInfo_for_tprop_record_3)), HeadVar__1_1);
  HeadVar__2_2 = ((MR_Word) (conv1_HeadVar__2_2));
  return HeadVar__2_2;
}

static void MR_CALL 
hlds__inst_mode_type_prop__get_constructor_arg_types_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Arg_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Args_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word ArgType_5 = ((MR_Word) ((MR_hl_field(0, Arg_3, 1))));
    MR_Word ArgTypes_6;

    hlds__inst_mode_type_prop__get_constructor_arg_types_2_p_0(Args_4, &ArgTypes_6);
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
hlds__inst_mode_type_prop__find_first_matching_constructor_4_p_0(
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
      Ctor_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      Ctors_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      Var_17 = ((MR_Word) ((MR_hl_field(0, Ctor_10, 2))));
      Var_18 = ((MR_Integer) ((MR_hl_field(0, Ctor_10, 4))));
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
hlds__inst_mode_type_prop__construct_new_bound_functor_5_p_0(
  MR_Word Uniq_6,
  MR_Word InstResults0_7,
  MR_Word PropagatedResult_8,
  MR_Word BoundFunctors_9,
  MR_Word * Inst_10)
{
  if ((BoundFunctors_9 == (MR_Word) ((MR_Unsigned) 0U)))
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
          MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(1, InstResults0_7, 0)));

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
      MR_hl_field(2, base, 2) = ((MR_Box) (BoundFunctors_9));
    }
  }
}

static MR_bool MR_CALL 
hlds__inst_mode_type_prop____Unify____base_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__inst_mode_type_prop____Unify____base_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__inst_mode_type_prop____Compare____base_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__inst_mode_type_prop____Compare____base_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__inst_mode_type_prop____Unify____maybe_inside_user_inst_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__inst_mode_type_prop____Unify____maybe_inside_user_inst_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__inst_mode_type_prop____Compare____maybe_inside_user_inst_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__inst_mode_type_prop____Compare____maybe_inside_user_inst_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__inst_mode_type_prop____Unify____tprop_args_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__inst_mode_type_prop____Unify____tprop_args_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__inst_mode_type_prop____Compare____tprop_args_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__inst_mode_type_prop____Compare____tprop_args_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__inst_mode_type_prop____Unify____tprop_cache_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__inst_mode_type_prop____Unify____tprop_cache_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__inst_mode_type_prop____Compare____tprop_cache_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__inst_mode_type_prop____Compare____tprop_cache_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__inst_mode_type_prop____Unify____tprop_cache_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__inst_mode_type_prop____Unify____tprop_cache_result_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__inst_mode_type_prop____Compare____tprop_cache_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__inst_mode_type_prop____Compare____tprop_cache_result_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__inst_mode_type_prop____Unify____tprop_context_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__inst_mode_type_prop____Unify____tprop_context_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__inst_mode_type_prop____Compare____tprop_context_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__inst_mode_type_prop____Compare____tprop_context_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__inst_mode_type_prop____Unify____tprop_errors_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__inst_mode_type_prop____Unify____tprop_errors_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__inst_mode_type_prop____Compare____tprop_errors_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__inst_mode_type_prop____Compare____tprop_errors_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__inst_mode_type_prop____Unify____tprop_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__inst_mode_type_prop____Unify____tprop_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__inst_mode_type_prop____Compare____tprop_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__inst_mode_type_prop____Compare____tprop_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__inst_mode_type_prop____Unify____user_inst_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__inst_mode_type_prop____Unify____user_inst_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__inst_mode_type_prop____Compare____user_inst_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__inst_mode_type_prop____Compare____user_inst_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_Box MR_CALL 
hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__tprop_info__arity0__hlds__inst_mode_type_prop__tprop_context__arity0__hlds__inst_mode_type_prop__tprop_args__arity0__hlds__inst_mode_type_prop__tprop_errors__arity0______hlds__inst_mode_type_prop__get_module_info_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_ModuleInfo_3;

  conv0_ModuleInfo_3 = hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__tprop_info__arity0__hlds__inst_mode_type_prop__tprop_context__arity0__hlds__inst_mode_type_prop__tprop_args__arity0__hlds__inst_mode_type_prop__tprop_errors__arity0______hlds__inst_mode_type_prop__get_module_info_1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_ModuleInfo_3));
  return wrapper_arg_2;
}

static void MR_CALL 
hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__tprop_info__arity0__hlds__inst_mode_type_prop__tprop_context__arity0__hlds__inst_mode_type_prop__tprop_args__arity0__hlds__inst_mode_type_prop__tprop_errors__arity0______hlds__inst_mode_type_prop__step_into_bound_functor_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__tprop_info__arity0__hlds__inst_mode_type_prop__tprop_context__arity0__hlds__inst_mode_type_prop__tprop_args__arity0__hlds__inst_mode_type_prop__tprop_errors__arity0______hlds__inst_mode_type_prop__step_into_bound_functor_3_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
}

static void MR_CALL 
hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__tprop_info__arity0__hlds__inst_mode_type_prop__tprop_context__arity0__hlds__inst_mode_type_prop__tprop_args__arity0__hlds__inst_mode_type_prop__tprop_errors__arity0______hlds__inst_mode_type_prop__step_into_tuple_inst_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__tprop_info__arity0__hlds__inst_mode_type_prop__tprop_context__arity0__hlds__inst_mode_type_prop__tprop_args__arity0__hlds__inst_mode_type_prop__tprop_errors__arity0______hlds__inst_mode_type_prop__step_into_tuple_inst_2_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
}

static void MR_CALL 
hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__tprop_info__arity0__hlds__inst_mode_type_prop__tprop_context__arity0__hlds__inst_mode_type_prop__tprop_args__arity0__hlds__inst_mode_type_prop__tprop_errors__arity0______hlds__inst_mode_type_prop__step_into_ho_inst_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__4_4;

  hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__tprop_info__arity0__hlds__inst_mode_type_prop__tprop_context__arity0__hlds__inst_mode_type_prop__tprop_args__arity0__hlds__inst_mode_type_prop__tprop_errors__arity0______hlds__inst_mode_type_prop__step_into_ho_inst_4_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_HeadVar__4_4);
  *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
}

static void MR_CALL 
hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__tprop_info__arity0__hlds__inst_mode_type_prop__tprop_context__arity0__hlds__inst_mode_type_prop__tprop_args__arity0__hlds__inst_mode_type_prop__tprop_errors__arity0______hlds__inst_mode_type_prop__args_slot_to_context_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__tprop_info__arity0__hlds__inst_mode_type_prop__tprop_context__arity0__hlds__inst_mode_type_prop__tprop_args__arity0__hlds__inst_mode_type_prop__tprop_errors__arity0______hlds__inst_mode_type_prop__args_slot_to_context_3_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv0_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
}

static MR_bool MR_CALL 
hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__tprop_info__arity0__hlds__inst_mode_type_prop__tprop_context__arity0__hlds__inst_mode_type_prop__tprop_args__arity0__hlds__inst_mode_type_prop__tprop_errors__arity0______hlds__inst_mode_type_prop__user_inst_expansion_to_context_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  succeeded = hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__tprop_info__arity0__hlds__inst_mode_type_prop__tprop_context__arity0__hlds__inst_mode_type_prop__tprop_args__arity0__hlds__inst_mode_type_prop__tprop_errors__arity0______hlds__inst_mode_type_prop__user_inst_expansion_to_context_3_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_3);
  if (succeeded)
  {
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__tprop_info__arity0__hlds__inst_mode_type_prop__tprop_context__arity0__hlds__inst_mode_type_prop__tprop_args__arity0__hlds__inst_mode_type_prop__tprop_errors__arity0______hlds__inst_mode_type_prop__check_for_bad_use_of_user_inst_8_8_p_0_10001(
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

  hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__tprop_info__arity0__hlds__inst_mode_type_prop__tprop_context__arity0__hlds__inst_mode_type_prop__tprop_args__arity0__hlds__inst_mode_type_prop__tprop_errors__arity0______hlds__inst_mode_type_prop__check_for_bad_use_of_user_inst_8_8_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)), &conv1_HeadVar__6_6, ((MR_Word) (wrapper_arg_7)), &conv0_HeadVar__8_8);
  *wrapper_arg_6 = ((MR_Box) (conv1_HeadVar__6_6));
  *wrapper_arg_8 = ((MR_Box) (conv0_HeadVar__8_8));
}

static void MR_CALL 
hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__tprop_info__arity0__hlds__inst_mode_type_prop__tprop_context__arity0__hlds__inst_mode_type_prop__tprop_args__arity0__hlds__inst_mode_type_prop__tprop_errors__arity0______hlds__inst_mode_type_prop__check_cons_id_qualifier_8_8_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__8_8;

  hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__tprop_info__arity0__hlds__inst_mode_type_prop__tprop_context__arity0__hlds__inst_mode_type_prop__tprop_args__arity0__hlds__inst_mode_type_prop__tprop_errors__arity0______hlds__inst_mode_type_prop__check_cons_id_qualifier_8_8_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)), ((MR_String) (wrapper_arg_5)), ((MR_Integer) (wrapper_arg_6)), ((MR_Word) (wrapper_arg_7)), &conv0_HeadVar__8_8);
  *wrapper_arg_8 = ((MR_Box) (conv0_HeadVar__8_8));
}

static void MR_CALL 
hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__tprop_info__arity0__hlds__inst_mode_type_prop__tprop_context__arity0__hlds__inst_mode_type_prop__tprop_args__arity0__hlds__inst_mode_type_prop__tprop_errors__arity0______hlds__inst_mode_type_prop__report_missing_cons_id_5_5_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__5_5;

  hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__tprop_info__arity0__hlds__inst_mode_type_prop__tprop_context__arity0__hlds__inst_mode_type_prop__tprop_args__arity0__hlds__inst_mode_type_prop__tprop_errors__arity0______hlds__inst_mode_type_prop__report_missing_cons_id_5_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)), &conv0_HeadVar__5_5);
  *wrapper_arg_5 = ((MR_Box) (conv0_HeadVar__5_5));
}

static void MR_CALL 
hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__tprop_info__arity0__hlds__inst_mode_type_prop__tprop_context__arity0__hlds__inst_mode_type_prop__tprop_args__arity0__hlds__inst_mode_type_prop__tprop_errors__arity0______hlds__inst_mode_type_prop__report_wrong_arity_ho_inst_8_8_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__8_8;

  hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__tprop_info__arity0__hlds__inst_mode_type_prop__tprop_context__arity0__hlds__inst_mode_type_prop__tprop_args__arity0__hlds__inst_mode_type_prop__tprop_errors__arity0______hlds__inst_mode_type_prop__report_wrong_arity_ho_inst_8_8_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)), ((MR_Word) (wrapper_arg_6)), ((MR_Word) (wrapper_arg_7)), &conv0_HeadVar__8_8);
  *wrapper_arg_8 = ((MR_Box) (conv0_HeadVar__8_8));
}

static void MR_CALL 
hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__tprop_info__arity0__hlds__inst_mode_type_prop__tprop_context__arity0__hlds__inst_mode_type_prop__tprop_args__arity0__hlds__inst_mode_type_prop__tprop_errors__arity0______hlds__inst_mode_type_prop__report_ho_inst_for_non_ho_type_6_6_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__6_6;

  hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__tprop_info__arity0__hlds__inst_mode_type_prop__tprop_context__arity0__hlds__inst_mode_type_prop__tprop_args__arity0__hlds__inst_mode_type_prop__tprop_errors__arity0______hlds__inst_mode_type_prop__report_ho_inst_for_non_ho_type_6_6_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)), &conv0_HeadVar__6_6);
  *wrapper_arg_6 = ((MR_Box) (conv0_HeadVar__6_6));
}

static MR_Box MR_CALL 
hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__base_info__arity0__unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______hlds__inst_mode_type_prop__get_module_info_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_ModuleInfo_3;

  conv0_ModuleInfo_3 = hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__base_info__arity0__unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______hlds__inst_mode_type_prop__get_module_info_1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_ModuleInfo_3));
  return wrapper_arg_2;
}

static void MR_CALL 
hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__base_info__arity0__unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______hlds__inst_mode_type_prop__step_into_bound_functor_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__base_info__arity0__unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______hlds__inst_mode_type_prop__step_into_bound_functor_3_3_p_0(((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__base_info__arity0__unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______hlds__inst_mode_type_prop__step_into_tuple_inst_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;

  hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__base_info__arity0__unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______hlds__inst_mode_type_prop__step_into_tuple_inst_2_2_p_0();
}

static void MR_CALL 
hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__base_info__arity0__unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______hlds__inst_mode_type_prop__step_into_ho_inst_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__base_info__arity0__unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______hlds__inst_mode_type_prop__step_into_ho_inst_4_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__base_info__arity0__unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______hlds__inst_mode_type_prop__args_slot_to_context_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__base_info__arity0__unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______hlds__inst_mode_type_prop__args_slot_to_context_3_3_p_0(((MR_Integer) (wrapper_arg_2)));
}

static MR_bool MR_CALL 
hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__base_info__arity0__unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______hlds__inst_mode_type_prop__user_inst_expansion_to_context_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__base_info__arity0__unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______hlds__inst_mode_type_prop__user_inst_expansion_to_context_3_3_p_0(((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__base_info__arity0__unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______hlds__inst_mode_type_prop__check_for_bad_use_of_user_inst_8_8_p_0_10001(
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

  hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__base_info__arity0__unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______hlds__inst_mode_type_prop__check_for_bad_use_of_user_inst_8_8_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)), &conv0_Cache_6);
  *wrapper_arg_6 = ((MR_Box) (conv0_Cache_6));
}

static void MR_CALL 
hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__base_info__arity0__unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______hlds__inst_mode_type_prop__check_cons_id_qualifier_8_8_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;

  hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__base_info__arity0__unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______hlds__inst_mode_type_prop__check_cons_id_qualifier_8_8_p_0(((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)), ((MR_String) (wrapper_arg_5)), ((MR_Integer) (wrapper_arg_6)));
}

static void MR_CALL 
hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__base_info__arity0__unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______hlds__inst_mode_type_prop__report_missing_cons_id_5_5_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;

  hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__base_info__arity0__unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______hlds__inst_mode_type_prop__report_missing_cons_id_5_5_p_0(((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
}

static void MR_CALL 
hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__base_info__arity0__unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______hlds__inst_mode_type_prop__report_wrong_arity_ho_inst_8_8_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;

  hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__base_info__arity0__unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______hlds__inst_mode_type_prop__report_wrong_arity_ho_inst_8_8_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)), ((MR_Word) (wrapper_arg_6)));
}

static void MR_CALL 
hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__base_info__arity0__unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______hlds__inst_mode_type_prop__report_ho_inst_for_non_ho_type_6_6_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;

  hlds__inst_mode_type_prop__ClassMethod_for_hlds__inst_mode_type_prop__tprop_record____hlds__inst_mode_type_prop__base_info__arity0__unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______hlds__inst_mode_type_prop__report_ho_inst_for_non_ho_type_6_6_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
}

void mercury__hlds__inst_mode_type_prop__init(void)
{
}

void mercury__hlds__inst_mode_type_prop__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__type_ctor_info_base_info_0);
  MR_register_type_ctor_info(&hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__type_ctor_info_maybe_inside_user_inst_0);
  MR_register_type_ctor_info(&hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__type_ctor_info_tprop_args_0);
  MR_register_type_ctor_info(&hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__type_ctor_info_tprop_cache_0);
  MR_register_type_ctor_info(&hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__type_ctor_info_tprop_cache_result_0);
  MR_register_type_ctor_info(&hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__type_ctor_info_tprop_context_0);
  MR_register_type_ctor_info(&hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__type_ctor_info_tprop_errors_0);
  MR_register_type_ctor_info(&hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__type_ctor_info_tprop_info_0);
  MR_register_type_ctor_info(&hlds__inst_mode_type_prop__hlds__inst_mode_type_prop__type_ctor_info_user_inst_info_0);
}

void mercury__hlds__inst_mode_type_prop__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__inst_mode_type_prop__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module hlds.inst_mode_type_prop.
