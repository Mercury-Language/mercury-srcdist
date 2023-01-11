/*
** Automatically generated from `inst_mode_type_prop.m'
** by the Mercury compiler,
** version rotd-2023-01-11
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
#include "check_hlds.mode_errors.mih"
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
#include "parse_tree.file_names.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
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
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__inst_mode_type_prop__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

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

static const MR_FA_TypeInfo_Struct1 check_hlds__inst_mode_type_prop__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_inst_0;

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
check_hlds__inst_mode_type_prop__ClassMethod_for_check_hlds__inst_mode_type_prop__tprop_record____unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______check_hlds__inst_mode_type_prop__check_for_bad_use_of_user_inst_7_7_p_0(
  MR_Word HeadVar__1_19,
  MR_Word HeadVar__2_20,
  MR_Word HeadVar__3_21,
  MR_Word * HeadVar__5_5);

static MR_bool MR_CALL 
check_hlds__inst_mode_type_prop__ClassMethod_for_check_hlds__inst_mode_type_prop__tprop_record____unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______check_hlds__inst_mode_type_prop__user_inst_expansion_to_context_3_3_p_0(
  MR_Word HeadVar__2_13);

static void MR_CALL 
check_hlds__inst_mode_type_prop__ClassMethod_for_check_hlds__inst_mode_type_prop__tprop_record____unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______check_hlds__inst_mode_type_prop__args_slot_to_context_3_3_p_0(
  MR_Integer HeadVar__2_11);

static void MR_CALL 
check_hlds__inst_mode_type_prop__ClassMethod_for_check_hlds__inst_mode_type_prop__tprop_record____unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______check_hlds__inst_mode_type_prop__step_into_ho_inst_4_4_p_0(
  MR_Word HeadVar__1_8,
  MR_Integer HeadVar__2_9);

static void MR_CALL 
check_hlds__inst_mode_type_prop__ClassMethod_for_check_hlds__inst_mode_type_prop__tprop_record____unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______check_hlds__inst_mode_type_prop__step_into_tuple_inst_2_2_p_0(void);

static void MR_CALL 
check_hlds__inst_mode_type_prop__ClassMethod_for_check_hlds__inst_mode_type_prop__tprop_record____unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______check_hlds__inst_mode_type_prop__step_into_bound_inst_3_3_p_0(
  MR_Word HeadVar__1_4);

static void MR_CALL 
check_hlds__inst_mode_type_prop__ClassMethod_for_check_hlds__inst_mode_type_prop__tprop_record____check_hlds__inst_mode_type_prop__tprop_context__arity0__check_hlds__inst_mode_type_prop__tprop_args__arity0__check_hlds__inst_mode_type_prop__tprop_errors__arity0______check_hlds__inst_mode_type_prop__check_for_bad_use_of_user_inst_7_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7);

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
  MR_Integer HeadVar__2_2,
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
check_hlds__inst_mode_type_prop__tprop_context_to_pieces_3_p_0(
  MR_Word TPropContext_4,
  MR_Word * Context_5,
  MR_Word * Pieces_6);

static MR_Word MR_CALL 
check_hlds__inst_mode_type_prop__pred_or_func_arg_desc_3_f_0(
  MR_Word PredOrFunc_5,
  MR_Integer NumArgs_6,
  MR_Integer ArgNum_7);

static MR_Word MR_CALL 
check_hlds__inst_mode_type_prop__are_we_already_inside_user_inst_expansion_2_f_0(
  MR_Word Context_4,
  MR_Word SymNameArity_5);

static void MR_CALL 
check_hlds__inst_mode_type_prop__propagate_char_type_2_p_0(
  MR_Word BoundInst0_3,
  MR_Word * BoundInst_4);

static void MR_CALL 
check_hlds__inst_mode_type_prop__propagate_types_into_tuple_7_p_0(
  MR_Word TypeClassInfo_for_tprop_record_28,
  MR_Word ModuleInfo_8,
  MR_Box Context_9,
  MR_Word TupleArgTypes_10,
  MR_Word BoundInst0_11,
  MR_Word * BoundInst_12,
  MR_Box STATE_VARIABLE_Errors_0_23,
  MR_Box * STATE_VARIABLE_Errors_24);

static void MR_CALL 
check_hlds__inst_mode_type_prop__propagate_types_into_insts_8_p_0(
  MR_Word TypeClassInfo_for_tprop_record_52,
  MR_Word ModuleInfo_1,
  MR_Box Args_2,
  MR_Integer ArgNum_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Box STATE_VARIABLE_Errors_0_7,
  MR_Box * STATE_VARIABLE_Errors_8);

static void MR_CALL 
check_hlds__inst_mode_type_prop__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_112_114_111_112_97_103_97_116_101_95_116_121_112_101_95_105_110_116_111_95_98_111_117_110_100_95_105_110_115_116_95_95_91_67_111_110_116_101_120_116_32_61_32_117_110_105_116_46_117_110_105_116_44_32_65_114_103_115_32_61_32_117_110_105_116_46_117_110_105_116_44_32_69_114_114_111_114_115_32_61_32_117_110_105_116_46_117_110_105_116_93_95_48_95_49_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
check_hlds__inst_mode_type_prop__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_112_114_111_112_97_103_97_116_101_95_116_121_112_101_95_105_110_116_111_95_98_111_117_110_100_95_105_110_115_116_95_95_91_67_111_110_116_101_120_116_32_61_32_117_110_105_116_46_117_110_105_116_44_32_65_114_103_115_32_61_32_117_110_105_116_46_117_110_105_116_44_32_69_114_114_111_114_115_32_61_32_117_110_105_116_46_117_110_105_116_93_95_48_95_49_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__inst_mode_type_prop__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_112_114_111_112_97_103_97_116_101_95_116_121_112_101_95_105_110_116_111_95_98_111_117_110_100_95_105_110_115_116_95_95_91_67_111_110_116_101_120_116_32_61_32_117_110_105_116_46_117_110_105_116_44_32_65_114_103_115_32_61_32_117_110_105_116_46_117_110_105_116_44_32_69_114_114_111_114_115_32_61_32_117_110_105_116_46_117_110_105_116_93_95_48_95_49_7_p_0(
  MR_Word TypeClassInfo_for_tprop_record_80,
  MR_Word ModuleInfo_8,
  MR_Word Type_10,
  MR_Word Inst0_11,
  MR_Word * Inst_12);

static void MR_CALL 
check_hlds__inst_mode_type_prop__propagate_type_into_inst_7_p_0(
  MR_Word TypeClassInfo_for_tprop_record_17,
  MR_Word ModuleInfo_8,
  MR_Box Context_9,
  MR_Word Type_10,
  MR_Word Inst0_11,
  MR_Word * Inst_12,
  MR_Box STATE_VARIABLE_Errors_0_15,
  MR_Box * STATE_VARIABLE_Errors_16);

static void MR_CALL 
check_hlds__inst_mode_type_prop__propagate_type_into_inst_lazily_7_p_0(
  MR_Word TypeClassInfo_for_tprop_record_107,
  MR_Word ModuleInfo_8,
  MR_Box Context_9,
  MR_Word Type_10,
  MR_Word Inst0_11,
  MR_Word * Inst_12,
  MR_Box STATE_VARIABLE_Errors_0_50,
  MR_Box * STATE_VARIABLE_Errors_51);

static void MR_CALL 
check_hlds__inst_mode_type_prop__propagate_type_into_inst_eagerly_8_p_0(
  MR_Word TypeClassInfo_for_tprop_record_143,
  MR_Word ModuleInfo_9,
  MR_Box Context_10,
  MR_Word Type_11,
  MR_Word Constructors_12,
  MR_Word Inst0_13,
  MR_Word * Inst_14,
  MR_Box STATE_VARIABLE_Errors_0_54,
  MR_Box * STATE_VARIABLE_Errors_55);

static void MR_CALL 
check_hlds__inst_mode_type_prop__propagate_type_into_bound_inst_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
check_hlds__inst_mode_type_prop__propagate_type_into_bound_inst_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__inst_mode_type_prop__propagate_type_into_bound_inst_7_p_0(
  MR_Word TypeClassInfo_for_tprop_record_80,
  MR_Word ModuleInfo_8,
  MR_Box Context_9,
  MR_Word Type_10,
  MR_Word Inst0_11,
  MR_Word * Inst_12,
  MR_Box STATE_VARIABLE_Errors_0_54,
  MR_Box * STATE_VARIABLE_Errors_55);

static void MR_CALL 
check_hlds__inst_mode_type_prop__propagate_types_into_modes_8_p_0(
  MR_Word TypeClassInfo_for_tprop_record_52,
  MR_Word ModuleInfo_1,
  MR_Box Args_2,
  MR_Integer ArgNum_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Box STATE_VARIABLE_Errors_0_7,
  MR_Box * STATE_VARIABLE_Errors_8);

static void MR_CALL 
check_hlds__inst_mode_type_prop__propagate_subst_type_ctor_into_bound_insts_10_p_0(
  MR_Word TypeClassInfo_for_tprop_record_56,
  MR_Word ModuleInfo_1,
  MR_Box Context_2,
  MR_Word Subst_3,
  MR_Word TypeCtor_4,
  MR_Word TypeModule_5,
  MR_Word Constructors_6,
  MR_Word HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Box STATE_VARIABLE_Errors_0_9,
  MR_Box * STATE_VARIABLE_Errors_10);

static void MR_CALL 
check_hlds__inst_mode_type_prop__default_higher_order_func_inst_6_p_0(
  MR_Word TypeClassInfo_for_tprop_record_37,
  MR_Word ModuleInfo_7,
  MR_Box Context_8,
  MR_Word PredArgTypes_9,
  MR_Word * PredInstInfo_10,
  MR_Box STATE_VARIABLE_Errors_0_22,
  MR_Box * STATE_VARIABLE_Errors_23);

static void MR_CALL 
check_hlds__inst_mode_type_prop__maybe_check_user_inst_args_6_p_0(
  MR_Word TypeClassInfo_for_tprop_record_28,
  MR_Word ModuleInfo_7,
  MR_Word Type_8,
  MR_Box Context_9,
  MR_Word MaybeUserInstInfo_10,
  MR_Box STATE_VARIABLE_Errors_0_26,
  MR_Box * STATE_VARIABLE_Errors_27);

static void MR_CALL 
check_hlds__inst_mode_type_prop__propagate_subst_types_into_insts_9_p_0(
  MR_Word TypeClassInfo_for_tprop_record_57,
  MR_Word ModuleInfo_1,
  MR_Box Args_2,
  MR_Integer ArgNum_3,
  MR_Word Subst_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Box STATE_VARIABLE_Errors_0_8,
  MR_Box * STATE_VARIABLE_Errors_9);

static void MR_CALL 
check_hlds__inst_mode_type_prop__check_for_bad_use_of_user_inst_7_p_0(
  MR_Word TypeClassInfo_for_tprop_record_8,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Box HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Box HeadVar__6_6,
  MR_Box * HeadVar__7_7);

static void MR_CALL 
check_hlds__inst_mode_type_prop__step_into_ho_inst_4_p_0(
  MR_Word TypeClassInfo_for_tprop_record_5,
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2,
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
check_hlds__inst_mode_type_prop__ClassMethod_for_check_hlds__inst_mode_type_prop__tprop_record____check_hlds__inst_mode_type_prop__tprop_context__arity0__check_hlds__inst_mode_type_prop__tprop_args__arity0__check_hlds__inst_mode_type_prop__tprop_errors__arity0______check_hlds__inst_mode_type_prop__check_for_bad_use_of_user_inst_7_7_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

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
check_hlds__inst_mode_type_prop__ClassMethod_for_check_hlds__inst_mode_type_prop__tprop_record____unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______check_hlds__inst_mode_type_prop__check_for_bad_use_of_user_inst_7_7_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);


static /* final */ const MR_Box check_hlds__inst_mode_type_prop_scalar_common_1[2][4];

static /* final */ const MR_Box check_hlds__inst_mode_type_prop_scalar_common_2[39][2];

static /* final */ const MR_Box check_hlds__inst_mode_type_prop_scalar_common_3[3][3];

static /* final */ const MR_Box check_hlds__inst_mode_type_prop_scalar_common_4[2][5];

static /* final */ const MR_Integer check_hlds__inst_mode_type_prop_scalar_common_5[1][3];

static /* final */ const MR_Box check_hlds__inst_mode_type_prop_scalar_common_6[1][11];




static /* final */ const MR_Box check_hlds__inst_mode_type_prop_scalar_common_1[2][4] = {
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

static /* final */ const MR_Box check_hlds__inst_mode_type_prop_scalar_common_2[39][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row   4 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(3, &check_hlds__inst_mode_type_prop_scalar_common_3[0])))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "error: the user defined inst"))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 35U)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 35U)),
    ((MR_Box) ((MR_Integer) -1))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is declared to be applicable only to values of type"))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "but here it is applied to values of type"))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__inst_mode_type_prop_scalar_common_2[7]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__inst_mode_type_prop_scalar_common_2[12]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__inst_mode_type_prop_scalar_common_2[11])))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in the"))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "argument of"))
  },
  /* row  16 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__inst_mode_type_prop_scalar_common_2[17]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__inst_mode_type_prop_scalar_common_2[16])))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in"))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__inst_mode_type_prop_scalar_common_2[19]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "of the higher order inst:"))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__inst_mode_type_prop_scalar_common_2[21]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__inst_mode_type_prop_scalar_common_2[16])))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "the lambda expression"))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__inst_mode_type_prop_scalar_common_2[23]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__inst_mode_type_prop_scalar_common_2[25]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "of"))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__inst_mode_type_prop_scalar_common_2[27]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "argument of tuple:"))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__inst_mode_type_prop_scalar_common_2[29]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__inst_mode_type_prop_scalar_common_2[16])))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in the expansion of the user-defined inst"))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "the result argument"))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__inst_mode_type_prop_scalar_common_2[32]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "the"))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "argument"))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__inst_mode_type_prop_scalar_common_2[35]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__inst_mode_type_prop_scalar_common_3[0]))),
    ((MR_Box) (MR_mkword(3, &check_hlds__inst_mode_type_prop_scalar_common_3[0])))
  },
  /* row  38 */
  {
    ((MR_Box) (&check_hlds__inst_mode_type_prop_scalar_common_2[4])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box check_hlds__inst_mode_type_prop_scalar_common_3[3][3] = {
  /* row   0 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   1 */
  {
    ((MR_Box) (&check_hlds__inst_mode_type_prop_scalar_common_4[0])),
    ((MR_Box) (check_hlds__inst_mode_type_prop__propagate_type_into_bound_inst_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&check_hlds__inst_mode_type_prop_scalar_common_4[0])),
    ((MR_Box) (check_hlds__inst_mode_type_prop__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_112_114_111_112_97_103_97_116_101_95_116_121_112_101_95_105_110_116_111_95_98_111_117_110_100_95_105_110_115_116_95_95_91_67_111_110_116_101_120_116_32_61_32_117_110_105_116_46_117_110_105_116_44_32_65_114_103_115_32_61_32_117_110_105_116_46_117_110_105_116_44_32_69_114_114_111_114_115_32_61_32_117_110_105_116_46_117_110_105_116_93_95_48_95_49_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
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

static /* final */ const MR_Box check_hlds__inst_mode_type_prop_scalar_common_6[1][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (&check_hlds__inst_mode_type_prop_scalar_common_5[0])),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&check_hlds__inst_mode_type_prop__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0)),
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
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
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

static const MR_PseudoTypeInfo check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__field_types_tprop_args_0_0[1] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)
};

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
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
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

static const MR_PseudoTypeInfo check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__field_types_tprop_args_0_3[1] = {
  (MR_PseudoTypeInfo) (&check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__type_ctor_info_tprop_context_0)
};

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
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
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

static const MR_DuFunctorDescPtr check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__du_stag_ordered_tprop_args_0_0[1] = {
  &check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__du_functor_desc_tprop_args_0_0
};

static const MR_DuFunctorDescPtr check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__du_stag_ordered_tprop_args_0_1[1] = {
  &check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__du_functor_desc_tprop_args_0_1
};

static const MR_DuFunctorDescPtr check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__du_stag_ordered_tprop_args_0_2[1] = {
  &check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__du_functor_desc_tprop_args_0_2
};

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

static const MR_DuFunctorDescPtr check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__du_stag_ordered_tprop_context_0_0[1] = {
  &check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__du_functor_desc_tprop_context_0_0
};

static const MR_DuFunctorDescPtr check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__du_stag_ordered_tprop_context_0_1[1] = {
  &check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__du_functor_desc_tprop_context_0_1
};

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

static const MR_Integer check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__functor_number_map_tprop_errors_0[1] = {
  (MR_Integer) 0
};

static const MR_FA_TypeInfo_Struct1 check_hlds__inst_mode_type_prop__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0)
  }
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

static const MR_FA_TypeInfo_Struct1 check_hlds__inst_mode_type_prop__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)
  }
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

static const MR_DuFunctorDescPtr check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__du_stag_ordered_user_inst_info_0_0[1] = {
  &check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__du_functor_desc_user_inst_info_0_0
};

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

static const MR_DuFunctorDescPtr check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__du_name_ordered_user_inst_info_0[1] = {
  &check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__du_functor_desc_user_inst_info_0_0
};

static const MR_Integer check_hlds__inst_mode_type_prop__check_hlds__inst_mode_type_prop__functor_number_map_user_inst_info_0[1] = {
  (MR_Integer) 0
};

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
  ((MR_Box) (check_hlds__inst_mode_type_prop__ClassMethod_for_check_hlds__inst_mode_type_prop__tprop_record____check_hlds__inst_mode_type_prop__tprop_context__arity0__check_hlds__inst_mode_type_prop__tprop_args__arity0__check_hlds__inst_mode_type_prop__tprop_errors__arity0______check_hlds__inst_mode_type_prop__check_for_bad_use_of_user_inst_7_7_p_0_10001))
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
  ((MR_Box) (check_hlds__inst_mode_type_prop__ClassMethod_for_check_hlds__inst_mode_type_prop__tprop_record____unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______check_hlds__inst_mode_type_prop__check_for_bad_use_of_user_inst_7_7_p_0_10001))
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
    (MR_Integer) 7,
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
check_hlds__inst_mode_type_prop__ClassMethod_for_check_hlds__inst_mode_type_prop__tprop_record____unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______check_hlds__inst_mode_type_prop__check_for_bad_use_of_user_inst_7_7_p_0(
  MR_Word HeadVar__1_19,
  MR_Word HeadVar__2_20,
  MR_Word HeadVar__3_21,
  MR_Word * HeadVar__5_5)
{
  *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
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
  MR_Integer HeadVar__2_9)
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
check_hlds__inst_mode_type_prop__ClassMethod_for_check_hlds__inst_mode_type_prop__tprop_record____check_hlds__inst_mode_type_prop__tprop_context__arity0__check_hlds__inst_mode_type_prop__tprop_args__arity0__check_hlds__inst_mode_type_prop__tprop_errors__arity0______check_hlds__inst_mode_type_prop__check_for_bad_use_of_user_inst_7_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) HeadVar__2_2)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word SymName_28 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
        MR_Word ArgInsts_29 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
        MR_Word InstTable_30;
        MR_Word UserInstTable_31;
        MR_Integer Arity_32;
        MR_Word InstCtor_33;
        MR_Word InstDefn_34;
        MR_Box conv0_InstDefn_34;

        hlds__hlds_module__module_info_get_inst_table_2_p_0(HeadVar__1_1, &InstTable_30);
        hlds__hlds_inst_mode__inst_table_get_user_insts_2_p_0(InstTable_30, &UserInstTable_31);
        mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), ArgInsts_29, &Arity_32);
        {
          InstCtor_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, InstCtor_33, 0) = ((MR_Box) (SymName_28));
          MR_hl_field(0, InstCtor_33, 1) = ((MR_Box) (Arity_32));
        }
        succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_inst_defn_0), UserInstTable_31, ((MR_Box) (InstCtor_33)), &conv0_InstDefn_34);
        if (succeeded)
        {
          InstDefn_34 = ((MR_Word) (conv0_InstDefn_34));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word SymNameArity_35;
          MR_Word UserInstInfo_36;
          MR_Word InstForTypeCtor_38;
          MR_Word TypeCtor_39;
          MR_Word MaybeInstForTypeCtor_37;

          {
            SymNameArity_35 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, SymNameArity_35, 0) = ((MR_Box) (SymName_28));
            MR_hl_field(0, SymNameArity_35, 1) = ((MR_Box) (Arity_32));
          }
          {
            UserInstInfo_36 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, UserInstInfo_36, 0) = ((MR_Box) (SymNameArity_35));
            MR_hl_field(0, UserInstInfo_36, 1) = ((MR_Box) (ArgInsts_29));
            MR_hl_field(0, UserInstInfo_36, 2) = ((MR_Box) (InstDefn_34));
          }
          MaybeInstForTypeCtor_37 = ((MR_Word) ((MR_hl_field(0, InstDefn_34, (MR_Integer) 3))));
          succeeded = ((MR_tag((MR_Word) MaybeInstForTypeCtor_37)) == (MR_Integer) 1);
          if (succeeded)
          {
            InstForTypeCtor_38 = ((MR_Word) ((MR_hl_field(1, MaybeInstForTypeCtor_37, (MR_Integer) 0))));
            succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(HeadVar__3_3, &TypeCtor_39);
            if (succeeded)
            {
              succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(TypeCtor_39, InstForTypeCtor_38);
              succeeded = !(succeeded);
            }
          }
          if (succeeded)
          {
            MR_Word Specs0_49 = (MR_Word) (HeadVar__6_6);
            MR_Word Context_50;
            MR_Word TPropContextPieces_51;
            MR_Word Pieces_52;
            MR_Word Spec_53;
            MR_Word Specs_54;
            MR_Word Var_55;
            MR_Word Var_58;
            MR_Word Var_59;
            MR_Word Var_61;
            MR_Word Var_62;
            MR_Word Var_63;
            MR_Word Var_64;
            MR_Word Var_66;
            MR_Word Var_69;
            MR_Word Var_72;
            MR_Word Var_73;
            MR_Word Var_74;
            MR_Word Var_77;
            MR_Word Var_80;
            MR_Word Var_83;
            MR_Word Var_86;
            MR_Word Var_87;

            check_hlds__inst_mode_type_prop__tprop_context_to_pieces_3_p_0(HeadVar__4_4, &Context_50, &TPropContextPieces_51);
            Var_59 = (MR_Word) (MR_mkword(3, &check_hlds__inst_mode_type_prop_scalar_common_2[6]));
            {
              Var_62 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_62, 0) = ((MR_Box) ((MR_Unsigned) 19U));
              MR_hl_field(3, Var_62, 1) = ((MR_Box) (InstCtor_33));
            }
            Var_64 = (MR_Word) (MR_mkword(3, &check_hlds__inst_mode_type_prop_scalar_common_2[7]));
            {
              Var_73 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_73, 0) = ((MR_Box) ((MR_Unsigned) 17U));
              MR_hl_field(3, Var_73, 1) = ((MR_Box) (InstForTypeCtor_38));
            }
            {
              Var_87 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_87, 0) = ((MR_Box) ((MR_Unsigned) 17U));
              MR_hl_field(3, Var_87, 1) = ((MR_Box) (TypeCtor_39));
            }
            {
              Var_86 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_86, 0) = ((MR_Box) (Var_87));
              MR_hl_field(1, Var_86, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__inst_mode_type_prop_scalar_common_2[13])));
            }
            {
              Var_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_83, 0) = ((MR_Box) (Var_59));
              MR_hl_field(1, Var_83, 1) = ((MR_Box) (Var_86));
            }
            {
              Var_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_80, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__inst_mode_type_prop_scalar_common_2[10])));
              MR_hl_field(1, Var_80, 1) = ((MR_Box) (Var_83));
            }
            {
              Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_77, 0) = ((MR_Box) (Var_64));
              MR_hl_field(1, Var_77, 1) = ((MR_Box) (Var_80));
            }
            {
              Var_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_74, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__inst_mode_type_prop_scalar_common_2[9])));
              MR_hl_field(1, Var_74, 1) = ((MR_Box) (Var_77));
            }
            {
              Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_72, 0) = ((MR_Box) (Var_73));
              MR_hl_field(1, Var_72, 1) = ((MR_Box) (Var_74));
            }
            {
              Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_69, 0) = ((MR_Box) (Var_59));
              MR_hl_field(1, Var_69, 1) = ((MR_Box) (Var_72));
            }
            {
              Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_66, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__inst_mode_type_prop_scalar_common_2[8])));
              MR_hl_field(1, Var_66, 1) = ((MR_Box) (Var_69));
            }
            {
              Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_63, 0) = ((MR_Box) (Var_64));
              MR_hl_field(1, Var_63, 1) = ((MR_Box) (Var_66));
            }
            {
              Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_61, 0) = ((MR_Box) (Var_62));
              MR_hl_field(1, Var_61, 1) = ((MR_Box) (Var_63));
            }
            {
              Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_58, 0) = ((MR_Box) (Var_59));
              MR_hl_field(1, Var_58, 1) = ((MR_Box) (Var_61));
            }
            {
              Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_55, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__inst_mode_type_prop_scalar_common_2[5])));
              MR_hl_field(1, Var_55, 1) = ((MR_Box) (Var_58));
            }
            Pieces_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), TPropContextPieces_51, Var_55);
            {
              Spec_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Spec_53, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.inst_mode_type_prop.do_record_bad_use_of_user_inst\'/6"));
              MR_hl_field(1, Spec_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(1, Spec_53, 2) = ((MR_Box) ((MR_Unsigned) 52U));
              MR_hl_field(1, Spec_53, 3) = ((MR_Box) (Context_50));
              MR_hl_field(1, Spec_53, 4) = ((MR_Box) (Pieces_52));
            }
            {
              Specs_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Specs_54, 0) = ((MR_Box) (Spec_53));
              MR_hl_field(1, Specs_54, 1) = ((MR_Box) (Specs0_49));
            }
            *HeadVar__7_7 = (MR_Word) (Specs_54);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__5_5 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (UserInstInfo_36));
            }
          }
          else
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__5_5 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (UserInstInfo_36));
            }
            *HeadVar__7_7 = HeadVar__6_6;
          }
        }
        else
        {
          *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
          *HeadVar__7_7 = HeadVar__6_6;
        }
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      {
        *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
        *HeadVar__7_7 = HeadVar__6_6;
      }
      break;
    case (MR_Integer) 3:
      {
        *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
        *HeadVar__7_7 = HeadVar__6_6;
      }
      break;
  }
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
  MR_Integer HeadVar__2_2,
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

      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__inst_mode_type_prop_scalar_common_2[3]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
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
      TypeInfo_12_12 = (MR_Word) (&check_hlds__inst_mode_type_prop_scalar_common_2[3]);
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

    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__inst_mode_type_prop_scalar_common_2[2]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
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

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__inst_mode_type_prop_scalar_common_2[2]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
  }
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
          MR_Integer Var_127 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_128 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgY1_24 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
                MR_Integer ArgY2_27 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
                MR_Word ArgY3_30 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 2))));
                MR_Word SubResult1_25;
                MR_Integer Var_133 = (MR_Integer) (Var_128);
                MR_Integer Var_134 = (MR_Integer) (ArgY1_24);

                succeeded = (Var_133 < Var_134);
                if (succeeded)
                {
                  SubResult1_25 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = (Var_133 > Var_134);
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

                  succeeded = (Var_127 < ArgY2_27);
                  if (succeeded)
                  {
                    SubResult2_28 = (MR_Integer) 1;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = (Var_127 > ArgY2_27);
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
              MR_Integer Var_124 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
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
                        MR_Integer ArgY2_105 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 2))));
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

                          succeeded = (Var_124 < ArgY2_105);
                          if (succeeded)
                          {
                            SubResult2_106 = (MR_Integer) 1;
                            succeeded = MR_TRUE;
                          }
                          else
                          {
                            succeeded = (Var_124 > ArgY2_105);
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
          MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
          MR_Integer ArgY2_8;
          MR_Word ArgX3_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 2))));
          MR_Word ArgY3_10;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
            ArgY2_8 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
            ArgY3_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
            succeeded = (ArgX1_5 == ArgY1_6);
            if (succeeded)
            {
              succeeded = (ArgX2_7 == ArgY2_8);
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
              MR_Integer ArgX2_19 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 2))));
              MR_Integer ArgY2_20;
              MR_Word ArgX3_21 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 3))));
              MR_Word ArgY3_22;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_18 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                ArgY2_20 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                ArgY3_22 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 3))));
                succeeded = (ArgX1_17 == ArgY1_18);
                if (succeeded)
                {
                  succeeded = (ArgX2_19 == ArgY2_20);
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
          MR_Word PredOrFunc_106;
          MR_Integer NumArgs_107;
          MR_Word PredPieces_108;
          MR_Word ArgDescPieces_109;
          MR_Word Var_114;
          MR_Word Var_115;
          MR_Word Var_120;

          hlds__hlds_pred__pred_info_get_is_pred_or_func_2_p_0(PredInfo_9, &PredOrFunc_106);
          hlds__hlds_pred__pred_info_get_orig_arity_2_p_0(PredInfo_9, &NumArgs_107);
          hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo_9, Context_5);
          PredPieces_108 = hlds__hlds_error_util__describe_one_pred_info_name_2_f_0((MR_Integer) 1, PredInfo_9);
          ArgDescPieces_109 = check_hlds__inst_mode_type_prop__pred_or_func_arg_desc_3_f_0(PredOrFunc_106, NumArgs_107, ArgNum_8);
          Var_120 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PredPieces_108, (MR_Word) (MR_mkword(1, &check_hlds__inst_mode_type_prop_scalar_common_2[18])));
          Var_115 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__inst_mode_type_prop_scalar_common_2[28])), Var_120);
          Var_114 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ArgDescPieces_109, Var_115);
          *Pieces_6 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__inst_mode_type_prop_scalar_common_2[26])), Var_114);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word PredOrFunc_10 = ((MR_Unsigned) ((MR_hl_field(1, Args_7, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Integer NumArgs_11 = ((MR_Integer) ((MR_hl_field(1, Args_7, (MR_Integer) 1))));
          MR_Word ArgDescPieces_13;
          MR_Word Var_27;
          MR_Word Var_28;
          MR_Word Var_33;

          *Context_5 = ((MR_Word) ((MR_hl_field(1, Args_7, (MR_Integer) 2))));
          ArgDescPieces_13 = check_hlds__inst_mode_type_prop__pred_or_func_arg_desc_3_f_0(PredOrFunc_10, NumArgs_11, ArgNum_8);
          Var_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__inst_mode_type_prop_scalar_common_2[24])), (MR_Word) (MR_mkword(1, &check_hlds__inst_mode_type_prop_scalar_common_2[18])));
          Var_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__inst_mode_type_prop_scalar_common_2[28])), Var_33);
          Var_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ArgDescPieces_13, Var_28);
          *Pieces_6 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__inst_mode_type_prop_scalar_common_2[26])), Var_27);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ConsId_14 = ((MR_Word) ((MR_hl_field(2, Args_7, (MR_Integer) 0))));
          MR_Word OuterTPropContext_15 = ((MR_Word) ((MR_hl_field(2, Args_7, (MR_Integer) 1))));
          MR_Word InnerPieces_16;
          MR_Word OuterPieces_17;
          MR_Word Var_42;
          MR_Word Var_43;
          MR_Word Var_44;
          MR_Word Var_47;
          MR_Word Var_48;

          {
            Var_43 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_43, 0) = ((MR_Box) ((MR_Unsigned) 3U));
            MR_hl_field(3, Var_43, 1) = ((MR_Box) (ArgNum_8));
          }
          {
            Var_48 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_48, 0) = ((MR_Box) ((MR_Unsigned) 26U));
            MR_hl_field(3, Var_48, 1) = ((MR_Box) (ConsId_14));
          }
          {
            Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_47, 0) = ((MR_Box) (Var_48));
            MR_hl_field(1, Var_47, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__inst_mode_type_prop_scalar_common_2[18])));
          }
          {
            Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_44, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__inst_mode_type_prop_scalar_common_2[15])));
            MR_hl_field(1, Var_44, 1) = ((MR_Box) (Var_47));
          }
          {
            Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_42, 0) = ((MR_Box) (Var_43));
            MR_hl_field(1, Var_42, 1) = ((MR_Box) (Var_44));
          }
          {
            InnerPieces_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, InnerPieces_16, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__inst_mode_type_prop_scalar_common_2[14])));
            MR_hl_field(1, InnerPieces_16, 1) = ((MR_Box) (Var_42));
          }
          check_hlds__inst_mode_type_prop__tprop_context_to_pieces_3_p_0(OuterTPropContext_15, Context_5, &OuterPieces_17);
          *Pieces_6 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), OuterPieces_17, InnerPieces_16);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Args_7, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_57;
              MR_Word Var_58;
              MR_Word OuterTPropContext_123 = ((MR_Word) ((MR_hl_field(3, Args_7, (MR_Integer) 1))));
              MR_Word InnerPieces_124;
              MR_Word OuterPieces_125;

              {
                Var_58 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_58, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(3, Var_58, 1) = ((MR_Box) (ArgNum_8));
              }
              {
                Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_57, 0) = ((MR_Box) (Var_58));
                MR_hl_field(1, Var_57, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__inst_mode_type_prop_scalar_common_2[30])));
              }
              {
                InnerPieces_124 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, InnerPieces_124, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__inst_mode_type_prop_scalar_common_2[14])));
                MR_hl_field(1, InnerPieces_124, 1) = ((MR_Box) (Var_57));
              }
              check_hlds__inst_mode_type_prop__tprop_context_to_pieces_3_p_0(OuterTPropContext_123, Context_5, &OuterPieces_125);
              *Pieces_6 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), OuterPieces_125, InnerPieces_124);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_69;
              MR_Word PredOrFunc_86 = ((MR_Unsigned) ((MR_hl_field(3, Args_7, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Integer NumArgs_87 = ((MR_Integer) ((MR_hl_field(3, Args_7, (MR_Integer) 2))));
              MR_Word ArgDescPieces_88;
              MR_Word OuterTPropContext_102 = ((MR_Word) ((MR_hl_field(3, Args_7, (MR_Integer) 3))));
              MR_Word InnerPieces_103;
              MR_Word OuterPieces_104;

              ArgDescPieces_88 = check_hlds__inst_mode_type_prop__pred_or_func_arg_desc_3_f_0(PredOrFunc_86, NumArgs_87, ArgNum_8);
              Var_69 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ArgDescPieces_88, (MR_Word) (MR_mkword(1, &check_hlds__inst_mode_type_prop_scalar_common_2[22])));
              InnerPieces_103 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__inst_mode_type_prop_scalar_common_2[20])), Var_69);
              check_hlds__inst_mode_type_prop__tprop_context_to_pieces_3_p_0(OuterTPropContext_102, Context_5, &OuterPieces_104);
              *Pieces_6 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), OuterPieces_104, InnerPieces_103);
            }
            break;
        }
        break;
    }
  }
  else
  {
    MR_Word InstNameArity_18 = ((MR_Word) ((MR_hl_field(1, TPropContext_4, (MR_Integer) 0))));
    MR_Word Var_78;
    MR_Word Var_79;
    MR_Word OuterTPropContext_95 = ((MR_Word) ((MR_hl_field(1, TPropContext_4, (MR_Integer) 1))));
    MR_Word InnerPieces_96;
    MR_Word OuterPieces_97;

    check_hlds__inst_mode_type_prop__tprop_context_to_pieces_3_p_0(OuterTPropContext_95, Context_5, &OuterPieces_97);
    {
      Var_79 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_79, 0) = ((MR_Box) ((MR_Unsigned) 11U));
      MR_hl_field(3, Var_79, 1) = ((MR_Box) (InstNameArity_18));
    }
    {
      Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_78, 0) = ((MR_Box) (Var_79));
      MR_hl_field(1, Var_78, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__inst_mode_type_prop_scalar_common_2[18])));
    }
    {
      InnerPieces_96 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, InnerPieces_96, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__inst_mode_type_prop_scalar_common_2[31])));
      MR_hl_field(1, InnerPieces_96, 1) = ((MR_Box) (Var_78));
    }
    *Pieces_6 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), OuterPieces_97, InnerPieces_96);
  }
}

static MR_Word MR_CALL 
check_hlds__inst_mode_type_prop__pred_or_func_arg_desc_3_f_0(
  MR_Word PredOrFunc_5,
  MR_Integer NumArgs_6,
  MR_Integer ArgNum_7)
{
  MR_bool succeeded = (PredOrFunc_5 == (MR_Integer) 1);
  MR_Word Pieces_8;

  if (succeeded)
    succeeded = (ArgNum_7 == NumArgs_6);
  if (succeeded)
    Pieces_8 = (MR_Word) (MR_mkword(1, &check_hlds__inst_mode_type_prop_scalar_common_2[33]));
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
      MR_hl_field(1, Var_14, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__inst_mode_type_prop_scalar_common_2[36])));
    }
    {
      Pieces_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_8, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__inst_mode_type_prop_scalar_common_2[34])));
      MR_hl_field(1, Pieces_8, 1) = ((MR_Box) (Var_14));
    }
  }
  return Pieces_8;
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
check_hlds__inst_mode_type_prop__propagate_types_into_tuple_7_p_0(
  MR_Word TypeClassInfo_for_tprop_record_28,
  MR_Word ModuleInfo_8,
  MR_Box Context_9,
  MR_Word TupleArgTypes_10,
  MR_Word BoundInst0_11,
  MR_Word * BoundInst_12,
  MR_Box STATE_VARIABLE_Errors_0_23,
  MR_Box * STATE_VARIABLE_Errors_24)
{
  MR_bool succeeded;
  MR_Word Functor_14 = ((MR_Word) ((MR_hl_field(0, BoundInst0_11, (MR_Integer) 0))));
  MR_Word ArgInsts0_15 = ((MR_Word) ((MR_hl_field(0, BoundInst0_11, (MR_Integer) 1))));
  MR_Word ArgInsts_22;
  MR_Word TypeCtorInfo_29_29;
  MR_Word TypeCtorInfo_30_30;
  MR_Integer ArgInstsLen_19;
  MR_Integer TupleArgTypesLen_20;

  if (((((MR_tag((MR_Word) Functor_14)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Functor_14, (MR_Integer) 0)))) == (MR_Integer) 2))))
  {
    MR_Word Var_25 = ((MR_Word) ((MR_hl_field(3, Functor_14, (MR_Integer) 1))));
    MR_String Var_26;

    succeeded = ((MR_tag((MR_Word) Var_25)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_26 = ((MR_String) ((MR_hl_field(0, Var_25, (MR_Integer) 0))));
      succeeded = (strcmp(Var_26, (MR_String) "{}") == 0);
    }
  }
  else
  if (((((MR_tag((MR_Word) Functor_14)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Functor_14, (MR_Integer) 0)))) == (MR_Integer) 3))))
    succeeded = MR_TRUE;
  else
    succeeded = MR_FALSE;
  if (succeeded)
  {
    TypeCtorInfo_29_29 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0);
    mercury__list__length_2_p_0(TypeCtorInfo_29_29, ArgInsts0_15, &ArgInstsLen_19);
    TypeCtorInfo_30_30 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
    mercury__list__length_2_p_0(TypeCtorInfo_30_30, TupleArgTypes_10, &TupleArgTypesLen_20);
    succeeded = (ArgInstsLen_19 == TupleArgTypesLen_20);
  }
  if (succeeded)
  {
    MR_Box Args_21;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_tprop_record_28, (MR_Integer) 0)), (MR_Integer) 6))));

    func_0(((MR_Box) (TypeClassInfo_for_tprop_record_28)), Context_9, &Args_21);
    check_hlds__inst_mode_type_prop__propagate_types_into_insts_8_p_0(TypeClassInfo_for_tprop_record_28, ModuleInfo_8, Args_21, (MR_Integer) 1, TupleArgTypes_10, ArgInsts0_15, &ArgInsts_22, STATE_VARIABLE_Errors_0_23, STATE_VARIABLE_Errors_24);
  }
  else
  {
    ArgInsts_22 = ArgInsts0_15;
    *STATE_VARIABLE_Errors_24 = STATE_VARIABLE_Errors_0_23;
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *BoundInst_12 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Functor_14));
    MR_hl_field(0, base, 1) = ((MR_Box) (ArgInsts_22));
  }
}

static void MR_CALL 
check_hlds__inst_mode_type_prop__propagate_types_into_insts_8_p_0(
  MR_Word TypeClassInfo_for_tprop_record_52,
  MR_Word ModuleInfo_1,
  MR_Box Args_2,
  MR_Integer ArgNum_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Box STATE_VARIABLE_Errors_0_7,
  MR_Box * STATE_VARIABLE_Errors_8)
{
  MR_bool succeeded;

  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Errors_8 = STATE_VARIABLE_Errors_0_7;
    }
    else
    {
      *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_mode_type_prop.propagate_types_into_insts\'/8", (MR_String) "length mismatch");
        return;
      }
    }
  else
  {
    MR_Word Var_53 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
    MR_Word Var_54 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));

    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_mode_type_prop.propagate_types_into_insts\'/8", (MR_String) "length mismatch");
        return;
      }
    }
    else
    {
      MR_Word Inst0_40 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 0))));
      MR_Word Insts0_41 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 1))));
      MR_Word Inst_42;
      MR_Word Insts_43;
      MR_Box Context_45;
      MR_Box STATE_VARIABLE_Errors_48_48;
      MR_Integer Var_49;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_tprop_record_52, (MR_Integer) 0)), (MR_Integer) 8))));

      func_0(((MR_Box) (TypeClassInfo_for_tprop_record_52)), Args_2, ((MR_Box) (ArgNum_3)), &Context_45);
      succeeded = mercury__builtin__semidet_fail_0_p_0();
      if (succeeded)
      {
        MR_Word Constructors_55;

        succeeded = check_hlds__type_util__type_constructors_3_p_0(ModuleInfo_1, Var_54, &Constructors_55);
        if (succeeded)
          check_hlds__inst_mode_type_prop__propagate_type_into_inst_eagerly_8_p_0(TypeClassInfo_for_tprop_record_52, ModuleInfo_1, Context_45, Var_54, Constructors_55, Inst0_40, &Inst_42, STATE_VARIABLE_Errors_0_7, &STATE_VARIABLE_Errors_48_48);
        else
        {
          Inst_42 = Inst0_40;
          STATE_VARIABLE_Errors_48_48 = STATE_VARIABLE_Errors_0_7;
        }
      }
      else
        check_hlds__inst_mode_type_prop__propagate_type_into_inst_lazily_7_p_0(TypeClassInfo_for_tprop_record_52, ModuleInfo_1, Context_45, Var_54, Inst0_40, &Inst_42, STATE_VARIABLE_Errors_0_7, &STATE_VARIABLE_Errors_48_48);
      Var_49 = (MR_Integer) ((MR_Unsigned) ArgNum_3 + (MR_Unsigned) 1);
      check_hlds__inst_mode_type_prop__propagate_types_into_insts_8_p_0(TypeClassInfo_for_tprop_record_52, ModuleInfo_1, Args_2, Var_49, Var_53, Insts0_41, &Insts_43, STATE_VARIABLE_Errors_48_48, STATE_VARIABLE_Errors_8);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__6_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Inst_42));
        MR_hl_field(1, base, 1) = ((MR_Box) (Insts_43));
      }
    }
  }
}

void MR_CALL 
check_hlds__inst_mode_type_prop__propagate_checked_type_into_mode_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word Context_9,
  MR_Word Type_10,
  MR_Word Mode0_11,
  MR_Word * Mode_12,
  MR_Word STATE_VARIABLE_Specs_0_16,
  MR_Word * STATE_VARIABLE_Specs_17)
{
  MR_Word Errors0_14 = (MR_Word) (STATE_VARIABLE_Specs_0_16);
  MR_Word Errors_15;
  MR_Word InitialInst0_19;
  MR_Word FinalInst0_20;
  MR_Word InitialInst_21;
  MR_Word FinalInst_22;
  MR_Word STATE_VARIABLE_Errors_20_23;
  MR_Box conv0_STATE_VARIABLE_Errors_20_23;
  MR_Box conv1_Errors_15;

  check_hlds__mode_util__mode_get_insts_4_p_0(ModuleInfo_8, Mode0_11, &InitialInst0_19, &FinalInst0_20);
  check_hlds__inst_mode_type_prop__propagate_type_into_inst_lazily_7_p_0((MR_Word) (&check_hlds__inst_mode_type_prop_scalar_common_1[1]), ModuleInfo_8, ((MR_Box) (Context_9)), Type_10, InitialInst0_19, &InitialInst_21, ((MR_Box) (Errors0_14)), &conv0_STATE_VARIABLE_Errors_20_23);
  STATE_VARIABLE_Errors_20_23 = ((MR_Word) (conv0_STATE_VARIABLE_Errors_20_23));
  check_hlds__inst_mode_type_prop__propagate_type_into_inst_lazily_7_p_0((MR_Word) (&check_hlds__inst_mode_type_prop_scalar_common_1[1]), ModuleInfo_8, ((MR_Box) (Context_9)), Type_10, FinalInst0_20, &FinalInst_22, ((MR_Box) (STATE_VARIABLE_Errors_20_23)), &conv1_Errors_15);
  Errors_15 = ((MR_Word) (conv1_Errors_15));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Mode_12 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (InitialInst_21));
    MR_hl_field(0, base, 1) = ((MR_Box) (FinalInst_22));
  }
  *STATE_VARIABLE_Specs_17 = (MR_Word) (Errors_15);
}

void MR_CALL 
check_hlds__inst_mode_type_prop__propagate_checked_types_into_modes_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word Args_9,
  MR_Word Types_10,
  MR_Word Modes0_11,
  MR_Word * Modes_12,
  MR_Word STATE_VARIABLE_Specs_0_16,
  MR_Word * STATE_VARIABLE_Specs_17)
{
  MR_Word Errors0_14 = (MR_Word) (STATE_VARIABLE_Specs_0_16);
  MR_Word Errors_15;

  if ((Types_10 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((Modes0_11 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *Modes_12 = (MR_Word) ((MR_Unsigned) 0U);
      Errors_15 = Errors0_14;
    }
    else
    {
      *Modes_12 = (MR_Word) ((MR_Unsigned) 0U);
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_mode_type_prop.propagate_types_into_modes\'/8", (MR_String) "length mismatch");
        return;
      }
    }
  else
  {
    MR_Word Var_58 = ((MR_Word) ((MR_hl_field(1, Types_10, (MR_Integer) 1))));
    MR_Word Var_59 = ((MR_Word) ((MR_hl_field(1, Types_10, (MR_Integer) 0))));

    if ((Modes0_11 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *Modes_12 = (MR_Word) ((MR_Unsigned) 0U);
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_mode_type_prop.propagate_types_into_modes\'/8", (MR_String) "length mismatch");
        return;
      }
    }
    else
    {
      MR_Word Mode0_48 = ((MR_Word) ((MR_hl_field(1, Modes0_11, (MR_Integer) 0))));
      MR_Word Modes0_49 = ((MR_Word) ((MR_hl_field(1, Modes0_11, (MR_Integer) 1))));
      MR_Word Mode_50;
      MR_Word Modes_51;
      MR_Box Context_52;
      MR_Word STATE_VARIABLE_Errors_48_55;
      MR_Word InitialInst0_60;
      MR_Word FinalInst0_61;
      MR_Word InitialInst_62;
      MR_Word FinalInst_63;
      MR_Word STATE_VARIABLE_Errors_20_64;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&check_hlds__inst_mode_type_prop_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 8))));
      MR_Box conv1_STATE_VARIABLE_Errors_20_64;
      MR_Box conv2_STATE_VARIABLE_Errors_48_55;
      MR_Box conv3_Errors_15;

      func_0(((MR_Box) ((MR_Word) (&check_hlds__inst_mode_type_prop_scalar_common_1[1]))), ((MR_Box) (Args_9)), ((MR_Box) ((MR_Integer) 1)), &Context_52);
      check_hlds__mode_util__mode_get_insts_4_p_0(ModuleInfo_8, Mode0_48, &InitialInst0_60, &FinalInst0_61);
      check_hlds__inst_mode_type_prop__propagate_type_into_inst_lazily_7_p_0((MR_Word) (&check_hlds__inst_mode_type_prop_scalar_common_1[1]), ModuleInfo_8, Context_52, Var_59, InitialInst0_60, &InitialInst_62, ((MR_Box) (Errors0_14)), &conv1_STATE_VARIABLE_Errors_20_64);
      STATE_VARIABLE_Errors_20_64 = ((MR_Word) (conv1_STATE_VARIABLE_Errors_20_64));
      check_hlds__inst_mode_type_prop__propagate_type_into_inst_lazily_7_p_0((MR_Word) (&check_hlds__inst_mode_type_prop_scalar_common_1[1]), ModuleInfo_8, Context_52, Var_59, FinalInst0_61, &FinalInst_63, ((MR_Box) (STATE_VARIABLE_Errors_20_64)), &conv2_STATE_VARIABLE_Errors_48_55);
      STATE_VARIABLE_Errors_48_55 = ((MR_Word) (conv2_STATE_VARIABLE_Errors_48_55));
      {
        Mode_50 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Mode_50, 0) = ((MR_Box) (InitialInst_62));
        MR_hl_field(0, Mode_50, 1) = ((MR_Box) (FinalInst_63));
      }
      check_hlds__inst_mode_type_prop__propagate_types_into_modes_8_p_0((MR_Word) (&check_hlds__inst_mode_type_prop_scalar_common_1[1]), ModuleInfo_8, ((MR_Box) (Args_9)), (MR_Integer) ((MR_Unsigned) 1 + (MR_Unsigned) 1), Var_58, Modes0_49, &Modes_51, ((MR_Box) (STATE_VARIABLE_Errors_48_55)), &conv3_Errors_15);
      Errors_15 = ((MR_Word) (conv3_Errors_15));
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Modes_12 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Mode_50));
        MR_hl_field(1, base, 1) = ((MR_Box) (Modes_51));
      }
    }
  }
  *STATE_VARIABLE_Specs_17 = (MR_Word) (Errors_15);
}

void MR_CALL 
check_hlds__inst_mode_type_prop__propagate_unchecked_type_into_bound_inst_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Type_6,
  MR_Word Inst0_7,
  MR_Word * Inst_8)
{
  check_hlds__inst_mode_type_prop__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_112_114_111_112_97_103_97_116_101_95_116_121_112_101_95_105_110_116_111_95_98_111_117_110_100_95_105_110_115_116_95_95_91_67_111_110_116_101_120_116_32_61_32_117_110_105_116_46_117_110_105_116_44_32_65_114_103_115_32_61_32_117_110_105_116_46_117_110_105_116_44_32_69_114_114_111_114_115_32_61_32_117_110_105_116_46_117_110_105_116_93_95_48_95_49_7_p_0((MR_Word) (&check_hlds__inst_mode_type_prop_scalar_common_1[0]), ModuleInfo_5, Type_6, Inst0_7, Inst_8);
}

static void MR_CALL 
check_hlds__inst_mode_type_prop__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_112_114_111_112_97_103_97_116_101_95_116_121_112_101_95_105_110_116_111_95_98_111_117_110_100_95_105_110_115_116_95_95_91_67_111_110_116_101_120_116_32_61_32_117_110_105_116_46_117_110_105_116_44_32_65_114_103_115_32_61_32_117_110_105_116_46_117_110_105_116_44_32_69_114_114_111_114_115_32_61_32_117_110_105_116_46_117_110_105_116_93_95_48_95_49_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_BoundInst_12;

  check_hlds__inst_mode_type_prop__propagate_types_into_tuple_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), (MR_hl_field(0, closure, (MR_Integer) 5)), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), &conv3_BoundInst_12, wrapper_arg_3, wrapper_arg_4);
  *wrapper_arg_2 = ((MR_Box) (conv3_BoundInst_12));
}

static void MR_CALL 
check_hlds__inst_mode_type_prop__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_112_114_111_112_97_103_97_116_101_95_116_121_112_101_95_105_110_116_111_95_98_111_117_110_100_95_105_110_115_116_95_95_91_67_111_110_116_101_120_116_32_61_32_117_110_105_116_46_117_110_105_116_44_32_65_114_103_115_32_61_32_117_110_105_116_46_117_110_105_116_44_32_69_114_114_111_114_115_32_61_32_117_110_105_116_46_117_110_105_116_93_95_48_95_49_7_p_0_1(
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
check_hlds__inst_mode_type_prop__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_112_114_111_112_97_103_97_116_101_95_116_121_112_101_95_105_110_116_111_95_98_111_117_110_100_95_105_110_115_116_95_95_91_67_111_110_116_101_120_116_32_61_32_117_110_105_116_46_117_110_105_116_44_32_65_114_103_115_32_61_32_117_110_105_116_46_117_110_105_116_44_32_69_114_114_111_114_115_32_61_32_117_110_105_116_46_117_110_105_116_93_95_48_95_49_7_p_0(
  MR_Word TypeClassInfo_for_tprop_record_80,
  MR_Word ModuleInfo_8,
  MR_Word Type_10,
  MR_Word Inst0_11,
  MR_Word * Inst_12)
{
  MR_bool succeeded;
  MR_Word Uniq_14 = ((MR_Unsigned) ((MR_hl_field(3, Inst0_11, (MR_Integer) 1))) & (MR_Integer) 7);
  MR_Word InstResults0_15 = ((MR_Word) ((MR_hl_field(3, Inst0_11, (MR_Integer) 2))));
  MR_Word BoundInsts0_16 = ((MR_Word) ((MR_hl_field(3, Inst0_11, (MR_Integer) 3))));

  switch (MR_tag((MR_Word) Type_10)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *Inst_12 = Inst0_11;
      break;
    case (MR_Integer) 1:
      {
        MR_Word SymName_33 = ((MR_Word) ((MR_hl_field(1, Type_10, (MR_Integer) 0))));
        MR_Word ArgTypes_73 = ((MR_Word) ((MR_hl_field(1, Type_10, (MR_Integer) 1))));
        MR_Word TypeModule_34;
        MR_Word TypeCtor_37;
        MR_Word TypeParams_39;
        MR_Word TypeBodyDu_41;
        MR_Word TypeCtorInfo_91_91;
        MR_Word TypeTable_36;
        MR_Word TypeDefn_38;
        MR_Word TypeBody_40;
        MR_Integer Var_59;

        succeeded = ((MR_tag((MR_Word) SymName_33)) == (MR_Integer) 1);
        if (succeeded)
        {
          TypeModule_34 = ((MR_Word) ((MR_hl_field(1, SymName_33, (MR_Integer) 0))));
          hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_8, &TypeTable_36);
          TypeCtorInfo_91_91 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
          Var_59 = mercury__list__length_1_f_0(TypeCtorInfo_91_91, ArgTypes_73);
          {
            TypeCtor_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, TypeCtor_37, 0) = ((MR_Box) (SymName_33));
            MR_hl_field(0, TypeCtor_37, 1) = ((MR_Box) (Var_59));
          }
          succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_36, TypeCtor_37, &TypeDefn_38);
          if (succeeded)
          {
            hlds__hlds_data__get_type_defn_tparams_2_p_0(TypeDefn_38, &TypeParams_39);
            hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_38, &TypeBody_40);
            succeeded = ((MR_tag((MR_Word) TypeBody_40)) == (MR_Integer) 0);
            if (succeeded)
              TypeBodyDu_41 = (MR_Word) ((MR_Word) (TypeBody_40));
          }
        }
        if (succeeded)
        {
          MR_Word PropagatedResult0_47;
          MR_Word PropagatedTypeCtor0_48;

          succeeded = ((MR_tag((MR_Word) InstResults0_15)) == (MR_Integer) 1);
          if (succeeded)
          {
            PropagatedResult0_47 = ((MR_Word) ((MR_hl_field(1, InstResults0_15, (MR_Integer) 4))));
            succeeded = (PropagatedResult0_47 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              PropagatedTypeCtor0_48 = (MR_Word) (MR_body((MR_Word) (PropagatedResult0_47), (MR_Integer) 1));
              succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(PropagatedTypeCtor0_48, TypeCtor_37);
              if (succeeded)
                succeeded = (TypeParams_39 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
          if (succeeded)
            *Inst_12 = Inst0_11;
          else
          {
            MR_Word ArgSubst_49;
            MR_Word OoMConstructors_50;
            MR_Word Constructors_51;
            MR_Word BoundInsts1_52;
            MR_Word BoundInsts_65;
            MR_Word PropagatedResult_66;
            MR_Box conv1_STATE_VARIABLE_Errors_55;

            mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&check_hlds__inst_mode_type_prop_scalar_common_2[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TypeParams_39, ArgTypes_73, &ArgSubst_49);
            OoMConstructors_50 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_41, (MR_Integer) 0))));
            Constructors_51 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), OoMConstructors_50);
            check_hlds__inst_mode_type_prop__propagate_subst_type_ctor_into_bound_insts_10_p_0(TypeClassInfo_for_tprop_record_80, ModuleInfo_8, ((MR_Box) ((MR_Integer) 0)), ArgSubst_49, TypeCtor_37, TypeModule_34, Constructors_51, BoundInsts0_16, &BoundInsts1_52, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_Errors_55);
            mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0), BoundInsts1_52, &BoundInsts_65);
            PropagatedResult_66 = (MR_Word) (MR_mkword(1, (MR_Word) (TypeCtor_37)));
            if ((BoundInsts_65 == (MR_Word) ((MR_Unsigned) 0U)))
              *Inst_12 = (MR_Word) ((MR_Unsigned) 4U);
            else
            {
              MR_Word InstResults_116;

              switch (MR_tag((MR_Word) InstResults0_15)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(InstResults0_15)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        InstResults_116 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, InstResults_116, 0) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 2) << 2)) | (MR_Unsigned) ((MR_Integer) 2)));
                        MR_hl_field(1, InstResults_116, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(1, InstResults_116, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(1, InstResults_116, 3) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(1, InstResults_116, 4) = ((MR_Box) (PropagatedResult_66));
                      }
                      break;
                    case (MR_Integer) 1:
                      InstResults_116 = InstResults0_15;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Unsigned packed_word_3 = (MR_Unsigned) ((MR_hl_field(1, InstResults0_15, (MR_Integer) 0)));

                    {
                      InstResults_116 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, InstResults_116, 0) = (MR_Box) (packed_word_3);
                      MR_hl_field(1, InstResults_116, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(1, InstResults_116, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(1, InstResults_116, 3) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(1, InstResults_116, 4) = ((MR_Box) (PropagatedResult_66));
                    }
                  }
                  break;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                *Inst_12 = base;
                MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_14));
                MR_hl_field(3, base, 2) = ((MR_Box) (InstResults_116));
                MR_hl_field(3, base, 3) = ((MR_Box) (BoundInsts_65));
              }
            }
          }
        }
        else
          *Inst_12 = Inst0_11;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word BuiltinType_17 = ((MR_Word) ((MR_hl_field(2, Type_10, (MR_Integer) 0))));

        switch (MR_tag((MR_Word) BuiltinType_17)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(BuiltinType_17)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
                *Inst_12 = Inst0_11;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word BoundInsts_18;

                  mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0), (MR_Word) (&check_hlds__inst_mode_type_prop_scalar_common_3[2]), BoundInsts0_16, &BoundInsts_18);
                  if ((BoundInsts_18 == (MR_Word) ((MR_Unsigned) 0U)))
                    *Inst_12 = (MR_Word) ((MR_Unsigned) 4U);
                  else
                  {
                    MR_Word InstResults_99;

                    switch (MR_tag((MR_Word) InstResults0_15)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        switch (MR_unmkbody(InstResults0_15)) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            InstResults_99 = (MR_Word) (MR_mkword(1, &check_hlds__inst_mode_type_prop_scalar_common_4[1]));
                            break;
                          case (MR_Integer) 1:
                            InstResults_99 = InstResults0_15;
                            break;
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(1, InstResults0_15, (MR_Integer) 0)));

                          {
                            InstResults_99 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, InstResults_99, 0) = (MR_Box) (packed_word_1);
                            MR_hl_field(1, InstResults_99, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                            MR_hl_field(1, InstResults_99, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                            MR_hl_field(1, InstResults_99, 3) = ((MR_Box) ((MR_Unsigned) 0U));
                            MR_hl_field(1, InstResults_99, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                          }
                        }
                        break;
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      *Inst_12 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_14));
                      MR_hl_field(3, base, 2) = ((MR_Box) (InstResults_99));
                      MR_hl_field(3, base, 3) = ((MR_Box) (BoundInsts_18));
                    }
                  }
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            *Inst_12 = Inst0_11;
            break;
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Type_10, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word TypeInfo_90_90;
            MR_Word ArgTypes_21 = ((MR_Word) ((MR_hl_field(3, Type_10, (MR_Integer) 1))));
            MR_Word Var_57;
            MR_Word BoundInsts_62;
            MR_Box conv4_STATE_VARIABLE_Errors_55;

            {
              Var_57 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_57, 0) = ((MR_Box) (&check_hlds__inst_mode_type_prop_scalar_common_6[0]));
              MR_hl_field(0, Var_57, 1) = ((MR_Box) (check_hlds__inst_mode_type_prop__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_112_114_111_112_97_103_97_116_101_95_116_121_112_101_95_105_110_116_111_95_98_111_117_110_100_95_105_110_115_116_95_95_91_67_111_110_116_101_120_116_32_61_32_117_110_105_116_46_117_110_105_116_44_32_65_114_103_115_32_61_32_117_110_105_116_46_117_110_105_116_44_32_69_114_114_111_114_115_32_61_32_117_110_105_116_46_117_110_105_116_93_95_48_95_49_7_p_0_2));
              MR_hl_field(0, Var_57, 2) = ((MR_Box) ((MR_Integer) 4));
              MR_hl_field(0, Var_57, 3) = ((MR_Box) (TypeClassInfo_for_tprop_record_80));
              MR_hl_field(0, Var_57, 4) = ((MR_Box) (ModuleInfo_8));
              MR_hl_field(0, Var_57, 5) = NULL;
              MR_hl_field(0, Var_57, 6) = ((MR_Box) (ArgTypes_21));
            }
            mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_tprop_record_80, (MR_Integer) 3, &TypeInfo_90_90);
            mercury__list__map_foldl_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0), TypeInfo_90_90, Var_57, BoundInsts0_16, &BoundInsts_62, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_Errors_55);
            check_hlds__inst_mode_type_prop__construct_new_bound_inst_5_p_0(Uniq_14, InstResults0_15, (MR_Word) ((MR_Unsigned) 0U), BoundInsts_62, Inst_12);
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          *Inst_12 = Inst0_11;
          break;
        case (MR_Integer) 3:
          {
            MR_Word KindedType_53 = ((MR_Word) ((MR_hl_field(3, Type_10, (MR_Integer) 1))));
            MR_Box conv2_STATE_VARIABLE_Errors_55;

            check_hlds__inst_mode_type_prop__propagate_type_into_bound_inst_7_p_0(TypeClassInfo_for_tprop_record_80, ModuleInfo_8, ((MR_Box) ((MR_Integer) 0)), KindedType_53, Inst0_11, Inst_12, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_Errors_55);
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

  succeeded = mercury__builtin__semidet_fail_0_p_0();
  if (succeeded)
  {
    MR_Word Constructors_13;

    succeeded = check_hlds__type_util__type_constructors_3_p_0(ModuleInfo_5, Type_6, &Constructors_13);
    if (succeeded)
    {
      MR_Box conv0_Var_9;

      check_hlds__inst_mode_type_prop__propagate_type_into_inst_eagerly_8_p_0((MR_Word) (&check_hlds__inst_mode_type_prop_scalar_common_1[0]), ModuleInfo_5, ((MR_Box) ((MR_Integer) 0)), Type_6, Constructors_13, Inst0_7, Inst_8, ((MR_Box) ((MR_Integer) 0)), &conv0_Var_9);
    }
    else
      *Inst_8 = Inst0_7;
  }
  else
  {
    MR_Box conv1_Var_16;

    check_hlds__inst_mode_type_prop__propagate_type_into_inst_lazily_7_p_0((MR_Word) (&check_hlds__inst_mode_type_prop_scalar_common_1[0]), ModuleInfo_5, ((MR_Box) ((MR_Integer) 0)), Type_6, Inst0_7, Inst_8, ((MR_Box) ((MR_Integer) 0)), &conv1_Var_16);
  }
}

static void MR_CALL 
check_hlds__inst_mode_type_prop__propagate_type_into_inst_7_p_0(
  MR_Word TypeClassInfo_for_tprop_record_17,
  MR_Word ModuleInfo_8,
  MR_Box Context_9,
  MR_Word Type_10,
  MR_Word Inst0_11,
  MR_Word * Inst_12,
  MR_Box STATE_VARIABLE_Errors_0_15,
  MR_Box * STATE_VARIABLE_Errors_16)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__semidet_fail_0_p_0();
  if (succeeded)
  {
    MR_Word Constructors_14;

    succeeded = check_hlds__type_util__type_constructors_3_p_0(ModuleInfo_8, Type_10, &Constructors_14);
    if (succeeded)
      check_hlds__inst_mode_type_prop__propagate_type_into_inst_eagerly_8_p_0(TypeClassInfo_for_tprop_record_17, ModuleInfo_8, Context_9, Type_10, Constructors_14, Inst0_11, Inst_12, STATE_VARIABLE_Errors_0_15, STATE_VARIABLE_Errors_16);
    else
    {
      *Inst_12 = Inst0_11;
      *STATE_VARIABLE_Errors_16 = STATE_VARIABLE_Errors_0_15;
    }
  }
  else
    check_hlds__inst_mode_type_prop__propagate_type_into_inst_lazily_7_p_0(TypeClassInfo_for_tprop_record_17, ModuleInfo_8, Context_9, Type_10, Inst0_11, Inst_12, STATE_VARIABLE_Errors_0_15, STATE_VARIABLE_Errors_16);
}

static void MR_CALL 
check_hlds__inst_mode_type_prop__propagate_type_into_inst_lazily_7_p_0(
  MR_Word TypeClassInfo_for_tprop_record_107,
  MR_Word ModuleInfo_8,
  MR_Box Context_9,
  MR_Word Type_10,
  MR_Word Inst0_11,
  MR_Word * Inst_12,
  MR_Box STATE_VARIABLE_Errors_0_50,
  MR_Box * STATE_VARIABLE_Errors_51)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) Inst0_11)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(Inst0_11)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *Inst_12 = (MR_Word) ((MR_Unsigned) 0U);
            *STATE_VARIABLE_Errors_51 = STATE_VARIABLE_Errors_0_50;
          }
          break;
        case (MR_Integer) 1:
          {
            *Inst_12 = Inst0_11;
            *STATE_VARIABLE_Errors_51 = STATE_VARIABLE_Errors_0_50;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_mode_type_prop.propagate_type_into_inst_lazily\'/7", (MR_String) "typeinfo already present");
        return;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Uniq_105 = ((MR_Unsigned) ((MR_hl_field(2, Inst0_11, (MR_Integer) 0))) & (MR_Integer) 7);
        MR_Word HOInstInfo0_106 = ((MR_Word) ((MR_hl_field(2, Inst0_11, (MR_Integer) 1))));

        if ((HOInstInfo0_106 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word ArgTypes_75;
          MR_Word Var_116;
          MR_Word Var_32;

          succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(Type_10, &Var_32, &Var_116, &ArgTypes_75);
          if (succeeded)
            succeeded = ((MR_Integer) 1 == Var_116);
          if (succeeded)
          {
            MR_Word Var_63;
            MR_Word HOInstInfo_74;

            check_hlds__inst_mode_type_prop__default_higher_order_func_inst_6_p_0(TypeClassInfo_for_tprop_record_107, ModuleInfo_8, Context_9, ArgTypes_75, &HOInstInfo_74, STATE_VARIABLE_Errors_0_50, STATE_VARIABLE_Errors_51);
            Var_63 = (MR_Word) (MR_mkword(1, (MR_Word) (HOInstInfo_74)));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Inst_12 = base;
              MR_hl_field(2, base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_105));
              MR_hl_field(2, base, 1) = ((MR_Box) (Var_63));
            }
          }
          else
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Inst_12 = base;
              MR_hl_field(2, base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_105));
              MR_hl_field(2, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            *STATE_VARIABLE_Errors_51 = STATE_VARIABLE_Errors_0_50;
          }
        }
        else
        {
          MR_Word Var_67;
          MR_Word PredInstInfo0_85 = (MR_Word) (MR_body((MR_Word) (HOInstInfo0_106), (MR_Integer) 1));
          MR_Word PredOrFunc_86 = ((MR_Unsigned) ((MR_hl_field(0, PredInstInfo0_85, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Word Modes0_87 = ((MR_Word) ((MR_hl_field(0, PredInstInfo0_85, (MR_Integer) 1))));
          MR_Word MaybeArgRegs_88 = ((MR_Word) ((MR_hl_field(0, PredInstInfo0_85, (MR_Integer) 2))));
          MR_Word Detism_89 = ((MR_Unsigned) ((MR_hl_field(0, PredInstInfo0_85, (MR_Integer) 3))) & (MR_Integer) 7);
          MR_Word Modes_92;
          MR_Word PredInstInfo_93;
          MR_Word ArgTypes_81;
          MR_Word TypeCtorInfo_111_111;
          MR_Word TypeCtorInfo_112_112;
          MR_Word Var_117;
          MR_Word Var_34;

          succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(Type_10, &Var_34, &Var_117, &ArgTypes_81);
          if (succeeded)
          {
            succeeded = (PredOrFunc_86 == Var_117);
            if (succeeded)
            {
              TypeCtorInfo_111_111 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
              TypeCtorInfo_112_112 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0);
              succeeded = mercury__list__same_length_2_p_0(TypeCtorInfo_111_111, TypeCtorInfo_112_112, ArgTypes_81, Modes0_87);
            }
          }
          if (succeeded)
          {
            MR_Integer NumArgTypes_79;
            MR_Box Args_80;
            void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

            mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_81, &NumArgTypes_79);
            func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_tprop_record_107, (MR_Integer) 0)), (MR_Integer) 7))));
            func_0(((MR_Box) (TypeClassInfo_for_tprop_record_107)), ((MR_Box) (PredOrFunc_86)), ((MR_Box) (NumArgTypes_79)), Context_9, &Args_80);
            check_hlds__inst_mode_type_prop__propagate_types_into_modes_8_p_0(TypeClassInfo_for_tprop_record_107, ModuleInfo_8, Args_80, (MR_Integer) 1, ArgTypes_81, Modes0_87, &Modes_92, STATE_VARIABLE_Errors_0_50, STATE_VARIABLE_Errors_51);
          }
          else
          {
            Modes_92 = Modes0_87;
            *STATE_VARIABLE_Errors_51 = STATE_VARIABLE_Errors_0_50;
          }
          {
            PredInstInfo_93 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, PredInstInfo_93, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_86));
            MR_hl_field(0, PredInstInfo_93, 1) = ((MR_Box) (Modes_92));
            MR_hl_field(0, PredInstInfo_93, 2) = ((MR_Box) (MaybeArgRegs_88));
            MR_hl_field(0, PredInstInfo_93, 3) = (MR_Box) ((MR_Unsigned) (Detism_89));
          }
          Var_67 = (MR_Word) (MR_mkword(1, (MR_Word) (PredInstInfo_93)));
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Inst_12 = base;
            MR_hl_field(2, base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_105));
            MR_hl_field(2, base, 1) = ((MR_Box) (Var_67));
          }
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Inst0_11, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          check_hlds__inst_mode_type_prop__propagate_type_into_bound_inst_7_p_0(TypeClassInfo_for_tprop_record_107, ModuleInfo_8, Context_9, Type_10, Inst0_11, Inst_12, STATE_VARIABLE_Errors_0_50, STATE_VARIABLE_Errors_51);
          break;
        case (MR_Integer) 1:
          {
            MR_Word Uniq_15 = ((MR_Unsigned) ((MR_hl_field(3, Inst0_11, (MR_Integer) 1))) & (MR_Integer) 7);
            MR_Word HOInstInfo0_16 = ((MR_Word) ((MR_hl_field(3, Inst0_11, (MR_Integer) 2))));

            if ((HOInstInfo0_16 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word ArgTypes_19;
              MR_Word Var_114;
              MR_Word Var_17;

              succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(Type_10, &Var_17, &Var_114, &ArgTypes_19);
              if (succeeded)
                succeeded = ((MR_Integer) 1 == Var_114);
              if (succeeded)
              {
                MR_Word HOInstInfo_20;
                MR_Word Var_56;

                check_hlds__inst_mode_type_prop__default_higher_order_func_inst_6_p_0(TypeClassInfo_for_tprop_record_107, ModuleInfo_8, Context_9, ArgTypes_19, &HOInstInfo_20, STATE_VARIABLE_Errors_0_50, STATE_VARIABLE_Errors_51);
                Var_56 = (MR_Word) (MR_mkword(1, (MR_Word) (HOInstInfo_20)));
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  *Inst_12 = base;
                  MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_15));
                  MR_hl_field(3, base, 2) = ((MR_Box) (Var_56));
                }
              }
              else
              {
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  *Inst_12 = base;
                  MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_15));
                  MR_hl_field(3, base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                *STATE_VARIABLE_Errors_51 = STATE_VARIABLE_Errors_0_50;
              }
            }
            else
            {
              MR_Word PredInstInfo0_21 = (MR_Word) (MR_body((MR_Word) (HOInstInfo0_16), (MR_Integer) 1));
              MR_Word PredOrFunc_22 = ((MR_Unsigned) ((MR_hl_field(0, PredInstInfo0_21, (MR_Integer) 0))) & (MR_Integer) 1);
              MR_Word Modes0_23 = ((MR_Word) ((MR_hl_field(0, PredInstInfo0_21, (MR_Integer) 1))));
              MR_Word MaybeArgRegs_24 = ((MR_Word) ((MR_hl_field(0, PredInstInfo0_21, (MR_Integer) 2))));
              MR_Word Detism_25 = ((MR_Unsigned) ((MR_hl_field(0, PredInstInfo0_21, (MR_Integer) 3))) & (MR_Integer) 7);
              MR_Word Modes_30;
              MR_Word PredInstInfo_31;
              MR_Word Var_60;
              MR_Word ArgTypes_72;
              MR_Word TypeCtorInfo_108_108;
              MR_Word TypeCtorInfo_109_109;
              MR_Word Var_115;
              MR_Word Var_26;

              succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(Type_10, &Var_26, &Var_115, &ArgTypes_72);
              if (succeeded)
              {
                succeeded = (PredOrFunc_22 == Var_115);
                if (succeeded)
                {
                  TypeCtorInfo_108_108 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
                  TypeCtorInfo_109_109 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0);
                  succeeded = mercury__list__same_length_2_p_0(TypeCtorInfo_108_108, TypeCtorInfo_109_109, ArgTypes_72, Modes0_23);
                }
              }
              if (succeeded)
              {
                MR_Integer NumArgTypes_28;
                MR_Box Args_29;
                void MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

                mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_72, &NumArgTypes_28);
                func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_tprop_record_107, (MR_Integer) 0)), (MR_Integer) 7))));
                func_3(((MR_Box) (TypeClassInfo_for_tprop_record_107)), ((MR_Box) (PredOrFunc_22)), ((MR_Box) (NumArgTypes_28)), Context_9, &Args_29);
                check_hlds__inst_mode_type_prop__propagate_types_into_modes_8_p_0(TypeClassInfo_for_tprop_record_107, ModuleInfo_8, Args_29, (MR_Integer) 1, ArgTypes_72, Modes0_23, &Modes_30, STATE_VARIABLE_Errors_0_50, STATE_VARIABLE_Errors_51);
              }
              else
              {
                Modes_30 = Modes0_23;
                *STATE_VARIABLE_Errors_51 = STATE_VARIABLE_Errors_0_50;
              }
              {
                PredInstInfo_31 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, PredInstInfo_31, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_22));
                MR_hl_field(0, PredInstInfo_31, 1) = ((MR_Box) (Modes_30));
                MR_hl_field(0, PredInstInfo_31, 2) = ((MR_Box) (MaybeArgRegs_24));
                MR_hl_field(0, PredInstInfo_31, 3) = (MR_Box) ((MR_Unsigned) (Detism_25));
              }
              Var_60 = (MR_Word) (MR_mkword(1, (MR_Word) (PredInstInfo_31)));
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *Inst_12 = base;
                MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_15));
                MR_hl_field(3, base, 2) = ((MR_Box) (Var_60));
              }
            }
          }
          break;
        case (MR_Integer) 2:
          {
            *Inst_12 = Inst0_11;
            *STATE_VARIABLE_Errors_51 = STATE_VARIABLE_Errors_0_50;
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word InstVars_40 = ((MR_Word) ((MR_hl_field(3, Inst0_11, (MR_Integer) 1))));
            MR_Word SubInst0_41 = ((MR_Word) ((MR_hl_field(3, Inst0_11, (MR_Integer) 2))));
            MR_Word SubInst_42;

            check_hlds__inst_mode_type_prop__propagate_type_into_inst_lazily_7_p_0(TypeClassInfo_for_tprop_record_107, ModuleInfo_8, Context_9, Type_10, SubInst0_41, &SubInst_42, STATE_VARIABLE_Errors_0_50, STATE_VARIABLE_Errors_51);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Inst_12 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, base, 1) = ((MR_Box) (InstVars_40));
              MR_hl_field(3, base, 2) = ((MR_Box) (SubInst_42));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word InstName0_45 = ((MR_Word) ((MR_hl_field(3, Inst0_11, (MR_Integer) 1))));
            MR_Word MaybeUserInstInfo_46;
            MR_Box STATE_VARIABLE_Errors_70_70;
            void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_tprop_record_107, (MR_Integer) 0)), (MR_Integer) 10))));
            MR_Box conv2_MaybeUserInstInfo_46;

            func_1(((MR_Box) (TypeClassInfo_for_tprop_record_107)), ((MR_Box) (ModuleInfo_8)), ((MR_Box) (InstName0_45)), ((MR_Box) (Type_10)), Context_9, &conv2_MaybeUserInstInfo_46, STATE_VARIABLE_Errors_0_50, &STATE_VARIABLE_Errors_70_70);
            MaybeUserInstInfo_46 = ((MR_Word) (conv2_MaybeUserInstInfo_46));
            succeeded = ((((MR_tag((MR_Word) InstName0_45)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, InstName0_45, (MR_Integer) 0)))) == (MR_Integer) 5)));
            if (succeeded)
            {
              *Inst_12 = Inst0_11;
              *STATE_VARIABLE_Errors_51 = STATE_VARIABLE_Errors_70_70;
            }
            else
            {
              MR_Word InstName_49;

              {
                InstName_49 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, InstName_49, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(3, InstName_49, 1) = ((MR_Box) (Type_10));
                MR_hl_field(3, InstName_49, 2) = ((MR_Box) (InstName0_45));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Inst_12 = base;
                MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(3, base, 1) = ((MR_Box) (InstName_49));
              }
              check_hlds__inst_mode_type_prop__maybe_check_user_inst_args_6_p_0(TypeClassInfo_for_tprop_record_107, ModuleInfo_8, Type_10, Context_9, MaybeUserInstInfo_46, STATE_VARIABLE_Errors_70_70, STATE_VARIABLE_Errors_51);
            }
          }
          break;
        case (MR_Integer) 5:
          {
            *Inst_12 = Inst0_11;
            *STATE_VARIABLE_Errors_51 = STATE_VARIABLE_Errors_0_50;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
check_hlds__inst_mode_type_prop__propagate_type_into_inst_eagerly_8_p_0(
  MR_Word TypeClassInfo_for_tprop_record_143,
  MR_Word ModuleInfo_9,
  MR_Box Context_10,
  MR_Word Type_11,
  MR_Word Constructors_12,
  MR_Word Inst0_13,
  MR_Word * Inst_14,
  MR_Box STATE_VARIABLE_Errors_0_54,
  MR_Box * STATE_VARIABLE_Errors_55)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Inst0_13)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Inst0_13)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *Inst_14 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_Errors_55 = STATE_VARIABLE_Errors_0_54;
            }
            break;
          case (MR_Integer) 1:
            {
              *Inst_14 = Inst0_13;
              *STATE_VARIABLE_Errors_55 = STATE_VARIABLE_Errors_0_54;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_mode_type_prop.propagate_type_into_inst_eagerly\'/8", (MR_String) "type info already present");
          return;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Uniq_141 = ((MR_Unsigned) ((MR_hl_field(2, Inst0_13, (MR_Integer) 0))) & (MR_Integer) 7);
          MR_Word HOInstInfo0_142 = ((MR_Word) ((MR_hl_field(2, Inst0_13, (MR_Integer) 1))));

          if ((HOInstInfo0_142 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word ArgTypes_100;
            MR_Word Var_160;
            MR_Word Var_38;

            succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(Type_11, &Var_38, &Var_160, &ArgTypes_100);
            if (succeeded)
              succeeded = ((MR_Integer) 1 == Var_160);
            if (succeeded)
            {
              MR_Word Var_75;
              MR_Word PredInstInfo_95;

              check_hlds__inst_mode_type_prop__default_higher_order_func_inst_6_p_0(TypeClassInfo_for_tprop_record_143, ModuleInfo_9, Context_10, ArgTypes_100, &PredInstInfo_95, STATE_VARIABLE_Errors_0_54, STATE_VARIABLE_Errors_55);
              Var_75 = (MR_Word) (MR_mkword(1, (MR_Word) (PredInstInfo_95)));
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Inst_14 = base;
                MR_hl_field(2, base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_141));
                MR_hl_field(2, base, 1) = ((MR_Box) (Var_75));
              }
            }
            else
            {
              MR_Word Var_78;
              MR_Word Var_79;
              MR_Word Var_80;
              MR_Word Var_81;
              MR_Word Var_82;
              MR_Word Var_83;
              MR_Word Var_84;
              MR_Word TypeCtor_96;
              MR_Word BoundInsts0_97;
              MR_Word BoundInsts_98;
              MR_Word InstResults_99;

              parse_tree__prog_type__type_to_ctor_det_2_p_0(Type_11, &TypeCtor_96);
              check_hlds__mode_util__constructors_to_bound_any_insts_5_p_0(ModuleInfo_9, Uniq_141, TypeCtor_96, Constructors_12, &BoundInsts0_97);
              mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0), BoundInsts0_97, &BoundInsts_98);
              Var_79 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0));
              {
                Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_78, 0) = ((MR_Box) (Var_79));
              }
              Var_81 = mercury__set__init_0_f_0((MR_Word) (&check_hlds__inst_mode_type_prop_scalar_common_2[1]));
              {
                Var_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_80, 0) = ((MR_Box) (Var_81));
              }
              Var_83 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
              {
                Var_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_82, 0) = ((MR_Box) (Var_83));
              }
              Var_84 = (MR_Word) (MR_mkword(1, (MR_Word) (TypeCtor_96)));
              {
                InstResults_99 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, InstResults_99, 0) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 2) << 2)) | (MR_Unsigned) ((MR_Integer) 2)));
                MR_hl_field(1, InstResults_99, 1) = ((MR_Box) (Var_78));
                MR_hl_field(1, InstResults_99, 2) = ((MR_Box) (Var_80));
                MR_hl_field(1, InstResults_99, 3) = ((MR_Box) (Var_82));
                MR_hl_field(1, InstResults_99, 4) = ((MR_Box) (Var_84));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                *Inst_14 = base;
                MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_141));
                MR_hl_field(3, base, 2) = ((MR_Box) (InstResults_99));
                MR_hl_field(3, base, 3) = ((MR_Box) (BoundInsts_98));
              }
              *STATE_VARIABLE_Errors_55 = STATE_VARIABLE_Errors_0_54;
            }
          }
          else
          {
            MR_Word Var_87;
            MR_Word PredInstInfo0_118 = (MR_Word) (MR_body((MR_Word) (HOInstInfo0_142), (MR_Integer) 1));
            MR_Word PredOrFunc_119 = ((MR_Unsigned) ((MR_hl_field(0, PredInstInfo0_118, (MR_Integer) 0))) & (MR_Integer) 1);
            MR_Word Modes0_120 = ((MR_Word) ((MR_hl_field(0, PredInstInfo0_118, (MR_Integer) 1))));
            MR_Word MaybeArgRegs_121 = ((MR_Word) ((MR_hl_field(0, PredInstInfo0_118, (MR_Integer) 2))));
            MR_Word Detism_122 = ((MR_Unsigned) ((MR_hl_field(0, PredInstInfo0_118, (MR_Integer) 3))) & (MR_Integer) 7);
            MR_Word Modes_125;
            MR_Word PredInstInfo_126;
            MR_Word ArgTypes_114;
            MR_Word TypeCtorInfo_155_155;
            MR_Word TypeCtorInfo_156_156;
            MR_Word Var_161;
            MR_Word Var_40;

            succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(Type_11, &Var_40, &Var_161, &ArgTypes_114);
            if (succeeded)
            {
              succeeded = (PredOrFunc_119 == Var_161);
              if (succeeded)
              {
                TypeCtorInfo_155_155 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
                TypeCtorInfo_156_156 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0);
                succeeded = mercury__list__same_length_2_p_0(TypeCtorInfo_155_155, TypeCtorInfo_156_156, ArgTypes_114, Modes0_120);
              }
            }
            if (succeeded)
            {
              MR_Integer NumArgTypes_112;
              MR_Box Args_113;

              mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_114, &NumArgTypes_112);
              check_hlds__inst_mode_type_prop__step_into_ho_inst_4_p_0(TypeClassInfo_for_tprop_record_143, PredOrFunc_119, NumArgTypes_112, Context_10, &Args_113);
              check_hlds__inst_mode_type_prop__propagate_types_into_modes_8_p_0(TypeClassInfo_for_tprop_record_143, ModuleInfo_9, Args_113, (MR_Integer) 1, ArgTypes_114, Modes0_120, &Modes_125, STATE_VARIABLE_Errors_0_54, STATE_VARIABLE_Errors_55);
            }
            else
            {
              Modes_125 = Modes0_120;
              *STATE_VARIABLE_Errors_55 = STATE_VARIABLE_Errors_0_54;
            }
            {
              PredInstInfo_126 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, PredInstInfo_126, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_119));
              MR_hl_field(0, PredInstInfo_126, 1) = ((MR_Box) (Modes_125));
              MR_hl_field(0, PredInstInfo_126, 2) = ((MR_Box) (MaybeArgRegs_121));
              MR_hl_field(0, PredInstInfo_126, 3) = (MR_Box) ((MR_Unsigned) (Detism_122));
            }
            Var_87 = (MR_Word) (MR_mkword(1, (MR_Word) (PredInstInfo_126)));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Inst_14 = base;
              MR_hl_field(2, base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_141));
              MR_hl_field(2, base, 1) = ((MR_Box) (Var_87));
            }
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Inst0_13, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            check_hlds__inst_mode_type_prop__propagate_type_into_bound_inst_7_p_0(TypeClassInfo_for_tprop_record_143, ModuleInfo_9, Context_10, Type_11, Inst0_13, Inst_14, STATE_VARIABLE_Errors_0_54, STATE_VARIABLE_Errors_55);
            break;
          case (MR_Integer) 1:
            {
              MR_Word Uniq_17 = ((MR_Unsigned) ((MR_hl_field(3, Inst0_13, (MR_Integer) 1))) & (MR_Integer) 7);
              MR_Word HOInstInfo0_18 = ((MR_Word) ((MR_hl_field(3, Inst0_13, (MR_Integer) 2))));

              if ((HOInstInfo0_18 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word ArgTypes_21;
                MR_Word Var_158;
                MR_Word Var_19;

                succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(Type_11, &Var_19, &Var_158, &ArgTypes_21);
                if (succeeded)
                  succeeded = ((MR_Integer) 1 == Var_158);
                if (succeeded)
                {
                  MR_Word HigherOrderInstInfo_22;
                  MR_Word Var_60;

                  check_hlds__inst_mode_type_prop__default_higher_order_func_inst_6_p_0(TypeClassInfo_for_tprop_record_143, ModuleInfo_9, Context_10, ArgTypes_21, &HigherOrderInstInfo_22, STATE_VARIABLE_Errors_0_54, STATE_VARIABLE_Errors_55);
                  Var_60 = (MR_Word) (MR_mkword(1, (MR_Word) (HigherOrderInstInfo_22)));
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    *Inst_14 = base;
                    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                    MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_17));
                    MR_hl_field(3, base, 2) = ((MR_Box) (Var_60));
                  }
                }
                else
                {
                  MR_Word TypeCtor_23;
                  MR_Word BoundInsts0_24;
                  MR_Word BoundInsts_25;
                  MR_Word InstResults_26;
                  MR_Word Var_63;
                  MR_Word Var_64;
                  MR_Word Var_65;
                  MR_Word Var_66;
                  MR_Word Var_67;
                  MR_Word Var_68;
                  MR_Word Var_69;

                  parse_tree__prog_type__type_to_ctor_det_2_p_0(Type_11, &TypeCtor_23);
                  check_hlds__mode_util__constructors_to_bound_insts_5_p_0(ModuleInfo_9, Uniq_17, TypeCtor_23, Constructors_12, &BoundInsts0_24);
                  mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0), BoundInsts0_24, &BoundInsts_25);
                  Var_64 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0));
                  {
                    Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_63, 0) = ((MR_Box) (Var_64));
                  }
                  Var_66 = mercury__set__init_0_f_0((MR_Word) (&check_hlds__inst_mode_type_prop_scalar_common_2[1]));
                  {
                    Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_65, 0) = ((MR_Box) (Var_66));
                  }
                  Var_68 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
                  {
                    Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_67, 0) = ((MR_Box) (Var_68));
                  }
                  Var_69 = (MR_Word) (MR_mkword(1, (MR_Word) (TypeCtor_23)));
                  {
                    InstResults_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, InstResults_26, 0) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 2)) | (MR_Unsigned) ((MR_Integer) 0)));
                    MR_hl_field(1, InstResults_26, 1) = ((MR_Box) (Var_63));
                    MR_hl_field(1, InstResults_26, 2) = ((MR_Box) (Var_65));
                    MR_hl_field(1, InstResults_26, 3) = ((MR_Box) (Var_67));
                    MR_hl_field(1, InstResults_26, 4) = ((MR_Box) (Var_69));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    *Inst_14 = base;
                    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_17));
                    MR_hl_field(3, base, 2) = ((MR_Box) (InstResults_26));
                    MR_hl_field(3, base, 3) = ((MR_Box) (BoundInsts_25));
                  }
                  *STATE_VARIABLE_Errors_55 = STATE_VARIABLE_Errors_0_54;
                }
              }
              else
              {
                MR_Word PredInstInfo0_27 = (MR_Word) (MR_body((MR_Word) (HOInstInfo0_18), (MR_Integer) 1));
                MR_Word PredOrFunc_28 = ((MR_Unsigned) ((MR_hl_field(0, PredInstInfo0_27, (MR_Integer) 0))) & (MR_Integer) 1);
                MR_Word Modes0_29 = ((MR_Word) ((MR_hl_field(0, PredInstInfo0_27, (MR_Integer) 1))));
                MR_Word MaybeArgRegs_30 = ((MR_Word) ((MR_hl_field(0, PredInstInfo0_27, (MR_Integer) 2))));
                MR_Word Detism_31 = ((MR_Unsigned) ((MR_hl_field(0, PredInstInfo0_27, (MR_Integer) 3))) & (MR_Integer) 7);
                MR_Word Modes_36;
                MR_Word PredInstInfo_37;
                MR_Word Var_72;
                MR_Word ArgTypes_93;
                MR_Word TypeCtorInfo_148_148;
                MR_Word TypeCtorInfo_149_149;
                MR_Word Var_159;
                MR_Word Var_32;

                succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(Type_11, &Var_32, &Var_159, &ArgTypes_93);
                if (succeeded)
                {
                  succeeded = (PredOrFunc_28 == Var_159);
                  if (succeeded)
                  {
                    TypeCtorInfo_148_148 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
                    TypeCtorInfo_149_149 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0);
                    succeeded = mercury__list__same_length_2_p_0(TypeCtorInfo_148_148, TypeCtorInfo_149_149, ArgTypes_93, Modes0_29);
                  }
                }
                if (succeeded)
                {
                  MR_Integer NumArgTypes_34;
                  MR_Box Args_35;

                  mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_93, &NumArgTypes_34);
                  check_hlds__inst_mode_type_prop__step_into_ho_inst_4_p_0(TypeClassInfo_for_tprop_record_143, PredOrFunc_28, NumArgTypes_34, Context_10, &Args_35);
                  check_hlds__inst_mode_type_prop__propagate_types_into_modes_8_p_0(TypeClassInfo_for_tprop_record_143, ModuleInfo_9, Args_35, (MR_Integer) 1, ArgTypes_93, Modes0_29, &Modes_36, STATE_VARIABLE_Errors_0_54, STATE_VARIABLE_Errors_55);
                }
                else
                {
                  Modes_36 = Modes0_29;
                  *STATE_VARIABLE_Errors_55 = STATE_VARIABLE_Errors_0_54;
                }
                {
                  PredInstInfo_37 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, PredInstInfo_37, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_28));
                  MR_hl_field(0, PredInstInfo_37, 1) = ((MR_Box) (Modes_36));
                  MR_hl_field(0, PredInstInfo_37, 2) = ((MR_Box) (MaybeArgRegs_30));
                  MR_hl_field(0, PredInstInfo_37, 3) = (MR_Box) ((MR_Unsigned) (Detism_31));
                }
                Var_72 = (MR_Word) (MR_mkword(1, (MR_Word) (PredInstInfo_37)));
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  *Inst_14 = base;
                  MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_17));
                  MR_hl_field(3, base, 2) = ((MR_Box) (Var_72));
                }
              }
            }
            break;
          case (MR_Integer) 2:
            {
              *Inst_14 = Inst0_13;
              *STATE_VARIABLE_Errors_55 = STATE_VARIABLE_Errors_0_54;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word InstVars_46 = ((MR_Word) ((MR_hl_field(3, Inst0_13, (MR_Integer) 1))));
              MR_Word SubInst0_47 = ((MR_Word) ((MR_hl_field(3, Inst0_13, (MR_Integer) 2))));
              MR_Word SubInst_48;

              check_hlds__inst_mode_type_prop__propagate_type_into_inst_eagerly_8_p_0(TypeClassInfo_for_tprop_record_143, ModuleInfo_9, Context_10, Type_11, Constructors_12, SubInst0_47, &SubInst_48, STATE_VARIABLE_Errors_0_54, STATE_VARIABLE_Errors_55);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *Inst_14 = base;
                MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(3, base, 1) = ((MR_Box) (InstVars_46));
                MR_hl_field(3, base, 2) = ((MR_Box) (SubInst_48));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word InstName_51 = ((MR_Word) ((MR_hl_field(3, Inst0_13, (MR_Integer) 1))));
              MR_Word MaybeUserInstInfo_52;
              MR_Word NamedInst_53;
              MR_Box STATE_VARIABLE_Errors_90_90;
              MR_Box STATE_VARIABLE_Errors_91_91;
              MR_Word next_value_of_Inst0_13;
              MR_Box next_value_of_STATE_VARIABLE_Errors_0_54;

              check_hlds__inst_mode_type_prop__check_for_bad_use_of_user_inst_7_p_0(TypeClassInfo_for_tprop_record_143, ModuleInfo_9, InstName_51, Type_11, Context_10, &MaybeUserInstInfo_52, STATE_VARIABLE_Errors_0_54, &STATE_VARIABLE_Errors_90_90);
              check_hlds__inst_mode_type_prop__maybe_check_user_inst_args_6_p_0(TypeClassInfo_for_tprop_record_143, ModuleInfo_9, Type_11, Context_10, MaybeUserInstInfo_52, STATE_VARIABLE_Errors_90_90, &STATE_VARIABLE_Errors_91_91);
              check_hlds__inst_lookup__inst_lookup_3_p_0(ModuleInfo_9, InstName_51, &NamedInst_53);
              // direct tailcall eliminated
              ;
              next_value_of_Inst0_13 = NamedInst_53;
              next_value_of_STATE_VARIABLE_Errors_0_54 = STATE_VARIABLE_Errors_91_91;
              Inst0_13 = next_value_of_Inst0_13;
              STATE_VARIABLE_Errors_0_54 = next_value_of_STATE_VARIABLE_Errors_0_54;
              continue;
            }
            break;
          case (MR_Integer) 5:
            {
              *Inst_14 = Inst0_13;
              *STATE_VARIABLE_Errors_55 = STATE_VARIABLE_Errors_0_54;
            }
            break;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__inst_mode_type_prop__propagate_type_into_bound_inst_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_BoundInst_12;

  check_hlds__inst_mode_type_prop__propagate_types_into_tuple_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), (MR_hl_field(0, closure, (MR_Integer) 5)), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), &conv1_BoundInst_12, wrapper_arg_3, wrapper_arg_4);
  *wrapper_arg_2 = ((MR_Box) (conv1_BoundInst_12));
}

static void MR_CALL 
check_hlds__inst_mode_type_prop__propagate_type_into_bound_inst_7_p_0_1(
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
check_hlds__inst_mode_type_prop__propagate_type_into_bound_inst_7_p_0(
  MR_Word TypeClassInfo_for_tprop_record_80,
  MR_Word ModuleInfo_8,
  MR_Box Context_9,
  MR_Word Type_10,
  MR_Word Inst0_11,
  MR_Word * Inst_12,
  MR_Box STATE_VARIABLE_Errors_0_54,
  MR_Box * STATE_VARIABLE_Errors_55)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word Uniq_14 = ((MR_Unsigned) ((MR_hl_field(3, Inst0_11, (MR_Integer) 1))) & (MR_Integer) 7);
    MR_Word InstResults0_15 = ((MR_Word) ((MR_hl_field(3, Inst0_11, (MR_Integer) 2))));
    MR_Word BoundInsts0_16 = ((MR_Word) ((MR_hl_field(3, Inst0_11, (MR_Integer) 3))));

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Type_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *Inst_12 = Inst0_11;
          *STATE_VARIABLE_Errors_55 = STATE_VARIABLE_Errors_0_54;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word SymName_33 = ((MR_Word) ((MR_hl_field(1, Type_10, (MR_Integer) 0))));
          MR_Word ArgTypes_73 = ((MR_Word) ((MR_hl_field(1, Type_10, (MR_Integer) 1))));
          MR_Word TypeModule_34;
          MR_Word TypeCtor_37;
          MR_Word TypeParams_39;
          MR_Word TypeBodyDu_41;
          MR_Word TypeCtorInfo_91_91;
          MR_Word TypeTable_36;
          MR_Word TypeDefn_38;
          MR_Word TypeBody_40;
          MR_Integer Var_59;

          succeeded = ((MR_tag((MR_Word) SymName_33)) == (MR_Integer) 1);
          if (succeeded)
          {
            TypeModule_34 = ((MR_Word) ((MR_hl_field(1, SymName_33, (MR_Integer) 0))));
            hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_8, &TypeTable_36);
            TypeCtorInfo_91_91 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
            Var_59 = mercury__list__length_1_f_0(TypeCtorInfo_91_91, ArgTypes_73);
            {
              TypeCtor_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, TypeCtor_37, 0) = ((MR_Box) (SymName_33));
              MR_hl_field(0, TypeCtor_37, 1) = ((MR_Box) (Var_59));
            }
            succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_36, TypeCtor_37, &TypeDefn_38);
            if (succeeded)
            {
              hlds__hlds_data__get_type_defn_tparams_2_p_0(TypeDefn_38, &TypeParams_39);
              hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_38, &TypeBody_40);
              succeeded = ((MR_tag((MR_Word) TypeBody_40)) == (MR_Integer) 0);
              if (succeeded)
                TypeBodyDu_41 = (MR_Word) ((MR_Word) (TypeBody_40));
            }
          }
          if (succeeded)
          {
            MR_Word PropagatedResult0_47;
            MR_Word PropagatedTypeCtor0_48;

            succeeded = ((MR_tag((MR_Word) InstResults0_15)) == (MR_Integer) 1);
            if (succeeded)
            {
              PropagatedResult0_47 = ((MR_Word) ((MR_hl_field(1, InstResults0_15, (MR_Integer) 4))));
              succeeded = (PropagatedResult0_47 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                PropagatedTypeCtor0_48 = (MR_Word) (MR_body((MR_Word) (PropagatedResult0_47), (MR_Integer) 1));
                succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(PropagatedTypeCtor0_48, TypeCtor_37);
                if (succeeded)
                  succeeded = (TypeParams_39 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
            if (succeeded)
            {
              *Inst_12 = Inst0_11;
              *STATE_VARIABLE_Errors_55 = STATE_VARIABLE_Errors_0_54;
            }
            else
            {
              MR_Word ArgSubst_49;
              MR_Word OoMConstructors_50;
              MR_Word Constructors_51;
              MR_Word BoundInsts1_52;
              MR_Word BoundInsts_65;
              MR_Word PropagatedResult_66;

              mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&check_hlds__inst_mode_type_prop_scalar_common_2[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TypeParams_39, ArgTypes_73, &ArgSubst_49);
              OoMConstructors_50 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_41, (MR_Integer) 0))));
              Constructors_51 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), OoMConstructors_50);
              check_hlds__inst_mode_type_prop__propagate_subst_type_ctor_into_bound_insts_10_p_0(TypeClassInfo_for_tprop_record_80, ModuleInfo_8, Context_9, ArgSubst_49, TypeCtor_37, TypeModule_34, Constructors_51, BoundInsts0_16, &BoundInsts1_52, STATE_VARIABLE_Errors_0_54, STATE_VARIABLE_Errors_55);
              mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0), BoundInsts1_52, &BoundInsts_65);
              PropagatedResult_66 = (MR_Word) (MR_mkword(1, (MR_Word) (TypeCtor_37)));
              if ((BoundInsts_65 == (MR_Word) ((MR_Unsigned) 0U)))
                *Inst_12 = (MR_Word) ((MR_Unsigned) 4U);
              else
              {
                MR_Word InstResults_116;

                switch (MR_tag((MR_Word) InstResults0_15)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(InstResults0_15)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          InstResults_116 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, InstResults_116, 0) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 2) << 2)) | (MR_Unsigned) ((MR_Integer) 2)));
                          MR_hl_field(1, InstResults_116, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                          MR_hl_field(1, InstResults_116, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                          MR_hl_field(1, InstResults_116, 3) = ((MR_Box) ((MR_Unsigned) 0U));
                          MR_hl_field(1, InstResults_116, 4) = ((MR_Box) (PropagatedResult_66));
                        }
                        break;
                      case (MR_Integer) 1:
                        InstResults_116 = InstResults0_15;
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Unsigned packed_word_3 = (MR_Unsigned) ((MR_hl_field(1, InstResults0_15, (MR_Integer) 0)));

                      {
                        InstResults_116 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, InstResults_116, 0) = (MR_Box) (packed_word_3);
                        MR_hl_field(1, InstResults_116, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(1, InstResults_116, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(1, InstResults_116, 3) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(1, InstResults_116, 4) = ((MR_Box) (PropagatedResult_66));
                      }
                    }
                    break;
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  *Inst_12 = base;
                  MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_14));
                  MR_hl_field(3, base, 2) = ((MR_Box) (InstResults_116));
                  MR_hl_field(3, base, 3) = ((MR_Box) (BoundInsts_65));
                }
              }
            }
          }
          else
          {
            *Inst_12 = Inst0_11;
            *STATE_VARIABLE_Errors_55 = STATE_VARIABLE_Errors_0_54;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word BuiltinType_17 = ((MR_Word) ((MR_hl_field(2, Type_10, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) BuiltinType_17)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(BuiltinType_17)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 1:
                  *Inst_12 = Inst0_11;
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word BoundInsts_18;

                    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0), (MR_Word) (&check_hlds__inst_mode_type_prop_scalar_common_3[1]), BoundInsts0_16, &BoundInsts_18);
                    if ((BoundInsts_18 == (MR_Word) ((MR_Unsigned) 0U)))
                      *Inst_12 = (MR_Word) ((MR_Unsigned) 4U);
                    else
                    {
                      MR_Word InstResults_99;

                      switch (MR_tag((MR_Word) InstResults0_15)) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          switch (MR_unmkbody(InstResults0_15)) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 0:
                              InstResults_99 = (MR_Word) (MR_mkword(1, &check_hlds__inst_mode_type_prop_scalar_common_4[1]));
                              break;
                            case (MR_Integer) 1:
                              InstResults_99 = InstResults0_15;
                              break;
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(1, InstResults0_15, (MR_Integer) 0)));

                            {
                              InstResults_99 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, InstResults_99, 0) = (MR_Box) (packed_word_1);
                              MR_hl_field(1, InstResults_99, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                              MR_hl_field(1, InstResults_99, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                              MR_hl_field(1, InstResults_99, 3) = ((MR_Box) ((MR_Unsigned) 0U));
                              MR_hl_field(1, InstResults_99, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                            }
                          }
                          break;
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                        *Inst_12 = base;
                        MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_14));
                        MR_hl_field(3, base, 2) = ((MR_Box) (InstResults_99));
                        MR_hl_field(3, base, 3) = ((MR_Box) (BoundInsts_18));
                      }
                    }
                  }
                  break;
              }
              break;
            case (MR_Integer) 1:
              *Inst_12 = Inst0_11;
              break;
          }
          *STATE_VARIABLE_Errors_55 = STATE_VARIABLE_Errors_0_54;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Type_10, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word TypeInfo_90_90;
              MR_Word ArgTypes_21 = ((MR_Word) ((MR_hl_field(3, Type_10, (MR_Integer) 1))));
              MR_Word Var_57;
              MR_Word BoundInsts_62;

              {
                Var_57 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_57, 0) = ((MR_Box) (&check_hlds__inst_mode_type_prop_scalar_common_6[0]));
                MR_hl_field(0, Var_57, 1) = ((MR_Box) (check_hlds__inst_mode_type_prop__propagate_type_into_bound_inst_7_p_0_2));
                MR_hl_field(0, Var_57, 2) = ((MR_Box) ((MR_Integer) 4));
                MR_hl_field(0, Var_57, 3) = ((MR_Box) (TypeClassInfo_for_tprop_record_80));
                MR_hl_field(0, Var_57, 4) = ((MR_Box) (ModuleInfo_8));
                MR_hl_field(0, Var_57, 5) = Context_9;
                MR_hl_field(0, Var_57, 6) = ((MR_Box) (ArgTypes_21));
              }
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_tprop_record_80, (MR_Integer) 3, &TypeInfo_90_90);
              mercury__list__map_foldl_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0), TypeInfo_90_90, Var_57, BoundInsts0_16, &BoundInsts_62, STATE_VARIABLE_Errors_0_54, STATE_VARIABLE_Errors_55);
              check_hlds__inst_mode_type_prop__construct_new_bound_inst_5_p_0(Uniq_14, InstResults0_15, (MR_Word) ((MR_Unsigned) 0U), BoundInsts_62, Inst_12);
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              *Inst_12 = Inst0_11;
              *STATE_VARIABLE_Errors_55 = STATE_VARIABLE_Errors_0_54;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word KindedType_53 = ((MR_Word) ((MR_hl_field(3, Type_10, (MR_Integer) 1))));
              MR_Word next_value_of_Type_10 = KindedType_53;

              // direct tailcall eliminated
              ;
              Type_10 = next_value_of_Type_10;
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
check_hlds__inst_mode_type_prop__propagate_types_into_modes_8_p_0(
  MR_Word TypeClassInfo_for_tprop_record_52,
  MR_Word ModuleInfo_1,
  MR_Box Args_2,
  MR_Integer ArgNum_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Box STATE_VARIABLE_Errors_0_7,
  MR_Box * STATE_VARIABLE_Errors_8)
{
  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Errors_8 = STATE_VARIABLE_Errors_0_7;
    }
    else
    {
      *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_mode_type_prop.propagate_types_into_modes\'/8", (MR_String) "length mismatch");
        return;
      }
    }
  else
  {
    MR_Word Var_53 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
    MR_Word Var_54 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));

    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_mode_type_prop.propagate_types_into_modes\'/8", (MR_String) "length mismatch");
        return;
      }
    }
    else
    {
      MR_Word Mode0_40 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 0))));
      MR_Word Modes0_41 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 1))));
      MR_Word Mode_42;
      MR_Word Modes_43;
      MR_Box Context_45;
      MR_Box STATE_VARIABLE_Errors_48_48;
      MR_Integer Var_49;
      MR_Word InitialInst0_55;
      MR_Word FinalInst0_56;
      MR_Word InitialInst_57;
      MR_Word FinalInst_58;
      MR_Box STATE_VARIABLE_Errors_20_59;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_tprop_record_52, (MR_Integer) 0)), (MR_Integer) 8))));

      func_0(((MR_Box) (TypeClassInfo_for_tprop_record_52)), Args_2, ((MR_Box) (ArgNum_3)), &Context_45);
      check_hlds__mode_util__mode_get_insts_4_p_0(ModuleInfo_1, Mode0_40, &InitialInst0_55, &FinalInst0_56);
      check_hlds__inst_mode_type_prop__propagate_type_into_inst_lazily_7_p_0(TypeClassInfo_for_tprop_record_52, ModuleInfo_1, Context_45, Var_54, InitialInst0_55, &InitialInst_57, STATE_VARIABLE_Errors_0_7, &STATE_VARIABLE_Errors_20_59);
      check_hlds__inst_mode_type_prop__propagate_type_into_inst_lazily_7_p_0(TypeClassInfo_for_tprop_record_52, ModuleInfo_1, Context_45, Var_54, FinalInst0_56, &FinalInst_58, STATE_VARIABLE_Errors_20_59, &STATE_VARIABLE_Errors_48_48);
      {
        Mode_42 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Mode_42, 0) = ((MR_Box) (InitialInst_57));
        MR_hl_field(0, Mode_42, 1) = ((MR_Box) (FinalInst_58));
      }
      Var_49 = (MR_Integer) ((MR_Unsigned) ArgNum_3 + (MR_Unsigned) 1);
      check_hlds__inst_mode_type_prop__propagate_types_into_modes_8_p_0(TypeClassInfo_for_tprop_record_52, ModuleInfo_1, Args_2, Var_49, Var_53, Modes0_41, &Modes_43, STATE_VARIABLE_Errors_48_48, STATE_VARIABLE_Errors_8);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__6_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Mode_42));
        MR_hl_field(1, base, 1) = ((MR_Box) (Modes_43));
      }
    }
  }
}

static void MR_CALL 
check_hlds__inst_mode_type_prop__propagate_subst_type_ctor_into_bound_insts_10_p_0(
  MR_Word TypeClassInfo_for_tprop_record_56,
  MR_Word ModuleInfo_1,
  MR_Box Context_2,
  MR_Word Subst_3,
  MR_Word TypeCtor_4,
  MR_Word TypeModule_5,
  MR_Word Constructors_6,
  MR_Word HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Box STATE_VARIABLE_Errors_0_9,
  MR_Box * STATE_VARIABLE_Errors_10)
{
  MR_bool succeeded;

  if ((HeadVar__7_7 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__8_8 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Errors_10 = STATE_VARIABLE_Errors_0_9;
  }
  else
  {
    MR_Word BoundInst0_26 = ((MR_Word) ((MR_hl_field(1, HeadVar__7_7, (MR_Integer) 0))));
    MR_Word BoundInsts0_27 = ((MR_Word) ((MR_hl_field(1, HeadVar__7_7, (MR_Integer) 1))));
    MR_Word BoundInst_28;
    MR_Word BoundInsts_29;
    MR_Word ConsId0_31 = ((MR_Word) ((MR_hl_field(0, BoundInst0_26, (MR_Integer) 0))));
    MR_Word ArgInsts0_32 = ((MR_Word) ((MR_hl_field(0, BoundInst0_26, (MR_Integer) 1))));
    MR_Word ConsId_36;
    MR_Box STATE_VARIABLE_Errors_55_55;
    MR_String Name_33;
    MR_Integer ConsArity_34;
    MR_Word Var_52;
    MR_Word MatchingConstructor_40;
    MR_Word ConsName_37;
    MR_Integer Arity_38;

    succeeded = ((((MR_tag((MR_Word) ConsId0_31)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConsId0_31, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (succeeded)
    {
      Var_52 = ((MR_Word) ((MR_hl_field(3, ConsId0_31, (MR_Integer) 1))));
      ConsArity_34 = ((MR_Integer) ((MR_hl_field(3, ConsId0_31, (MR_Integer) 2))));
      succeeded = ((MR_tag((MR_Word) Var_52)) == (MR_Integer) 0);
      if (succeeded)
        Name_33 = ((MR_String) ((MR_hl_field(0, Var_52, (MR_Integer) 0))));
    }
    if (succeeded)
    {
      MR_Word Var_53;

      {
        Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_53, 0) = ((MR_Box) (TypeModule_5));
        MR_hl_field(1, Var_53, 1) = ((MR_Box) (Name_33));
      }
      {
        ConsId_36 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, ConsId_36, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(3, ConsId_36, 1) = ((MR_Box) (Var_53));
        MR_hl_field(3, ConsId_36, 2) = ((MR_Box) (ConsArity_34));
        MR_hl_field(3, ConsId_36, 3) = ((MR_Box) (TypeCtor_4));
      }
    }
    else
      ConsId_36 = ConsId0_31;
    succeeded = ((((MR_tag((MR_Word) ConsId_36)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConsId_36, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (succeeded)
    {
      ConsName_37 = ((MR_Word) ((MR_hl_field(3, ConsId_36, (MR_Integer) 1))));
      Arity_38 = ((MR_Integer) ((MR_hl_field(3, ConsId_36, (MR_Integer) 2))));
      succeeded = check_hlds__inst_mode_type_prop__find_first_matching_constructor_4_p_0(ConsName_37, Arity_38, Constructors_6, &MatchingConstructor_40);
    }
    if (succeeded)
    {
      MR_Word CtorArgs_44 = ((MR_Word) ((MR_hl_field(0, MatchingConstructor_40, (MR_Integer) 3))));
      MR_Word ArgTypes_47;
      MR_Box Args_48;
      MR_Word ArgInsts_49;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

      check_hlds__inst_mode_type_prop__get_constructor_arg_types_2_p_0(CtorArgs_44, &ArgTypes_47);
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_tprop_record_56, (MR_Integer) 0)), (MR_Integer) 5))));
      func_0(((MR_Box) (TypeClassInfo_for_tprop_record_56)), ((MR_Box) (ConsId_36)), Context_2, &Args_48);
      check_hlds__inst_mode_type_prop__propagate_subst_types_into_insts_9_p_0(TypeClassInfo_for_tprop_record_56, ModuleInfo_1, Args_48, (MR_Integer) 1, Subst_3, ArgTypes_47, ArgInsts0_32, &ArgInsts_49, STATE_VARIABLE_Errors_0_9, &STATE_VARIABLE_Errors_55_55);
      {
        BoundInst_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, BoundInst_28, 0) = ((MR_Box) (ConsId_36));
        MR_hl_field(0, BoundInst_28, 1) = ((MR_Box) (ArgInsts_49));
      }
    }
    else
    {
      {
        BoundInst_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, BoundInst_28, 0) = ((MR_Box) (ConsId_36));
        MR_hl_field(0, BoundInst_28, 1) = ((MR_Box) (ArgInsts0_32));
      }
      STATE_VARIABLE_Errors_55_55 = STATE_VARIABLE_Errors_0_9;
    }
    check_hlds__inst_mode_type_prop__propagate_subst_type_ctor_into_bound_insts_10_p_0(TypeClassInfo_for_tprop_record_56, ModuleInfo_1, Context_2, Subst_3, TypeCtor_4, TypeModule_5, Constructors_6, BoundInsts0_27, &BoundInsts_29, STATE_VARIABLE_Errors_55_55, STATE_VARIABLE_Errors_10);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__8_8 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (BoundInst_28));
      MR_hl_field(1, base, 1) = ((MR_Box) (BoundInsts_29));
    }
  }
}

static void MR_CALL 
check_hlds__inst_mode_type_prop__default_higher_order_func_inst_6_p_0(
  MR_Word TypeClassInfo_for_tprop_record_37,
  MR_Word ModuleInfo_7,
  MR_Box Context_8,
  MR_Word PredArgTypes_9,
  MR_Word * PredInstInfo_10,
  MR_Box STATE_VARIABLE_Errors_0_22,
  MR_Box * STATE_VARIABLE_Errors_23)
{
  MR_Integer NumPredArgs_15;
  MR_Integer NumFuncArgs_16;
  MR_Word FuncArgModes_17;
  MR_Word PredArgModes0_19;
  MR_Box Args_20;
  MR_Word PredArgModes_21;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), PredArgTypes_9, &NumPredArgs_15);
  NumFuncArgs_16 = (MR_Integer) ((MR_Unsigned) NumPredArgs_15 - (MR_Unsigned) 1);
  mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), NumFuncArgs_16, ((MR_Box) (&check_hlds__inst_mode_type_prop_scalar_common_2[37])), &FuncArgModes_17);
  PredArgModes0_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), FuncArgModes_17, (MR_Word) (MR_mkword(1, &check_hlds__inst_mode_type_prop_scalar_common_2[38])));
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_tprop_record_37, (MR_Integer) 0)), (MR_Integer) 7))));
  func_0(((MR_Box) (TypeClassInfo_for_tprop_record_37)), ((MR_Box) ((MR_Integer) 1)), ((MR_Box) (NumPredArgs_15)), Context_8, &Args_20);
  check_hlds__inst_mode_type_prop__propagate_types_into_modes_8_p_0(TypeClassInfo_for_tprop_record_37, ModuleInfo_7, Args_20, (MR_Integer) 1, PredArgTypes_9, PredArgModes0_19, &PredArgModes_21, STATE_VARIABLE_Errors_0_22, STATE_VARIABLE_Errors_23);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    *PredInstInfo_10 = base;
    MR_hl_field(0, base, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(0, base, 1) = ((MR_Box) (PredArgModes_21));
    MR_hl_field(0, base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
}

static void MR_CALL 
check_hlds__inst_mode_type_prop__maybe_check_user_inst_args_6_p_0(
  MR_Word TypeClassInfo_for_tprop_record_28,
  MR_Word ModuleInfo_7,
  MR_Word Type_8,
  MR_Box Context_9,
  MR_Word MaybeUserInstInfo_10,
  MR_Box STATE_VARIABLE_Errors_0_26,
  MR_Box * STATE_VARIABLE_Errors_27)
{
  MR_bool succeeded;

  if ((MaybeUserInstInfo_10 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Errors_27 = STATE_VARIABLE_Errors_0_26;
  else
  {
    MR_Word UserInstInfo_12 = ((MR_Word) ((MR_hl_field(1, MaybeUserInstInfo_10, (MR_Integer) 0))));
    MR_Word SymNameArity_13 = ((MR_Word) ((MR_hl_field(0, UserInstInfo_12, (MR_Integer) 0))));
    MR_Word InstArgs_14 = ((MR_Word) ((MR_hl_field(0, UserInstInfo_12, (MR_Integer) 1))));
    MR_Word InstDefn_15 = ((MR_Word) ((MR_hl_field(0, UserInstInfo_12, (MR_Integer) 2))));
    MR_Word Params_17 = ((MR_Word) ((MR_hl_field(0, InstDefn_15, (MR_Integer) 1))));
    MR_Word InstBody_18 = ((MR_Word) ((MR_hl_field(0, InstDefn_15, (MR_Integer) 2))));
    MR_Word Inst0_22 = (MR_Word) (InstBody_18);
    MR_Word Inst1_23;
    MR_Box SubContext_24;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

    parse_tree__prog_mode__inst_substitute_arg_list_4_p_0(Params_17, InstArgs_14, Inst0_22, &Inst1_23);
    func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_tprop_record_28, (MR_Integer) 0)), (MR_Integer) 9))));
    succeeded = func_0(((MR_Box) (TypeClassInfo_for_tprop_record_28)), Context_9, ((MR_Box) (SymNameArity_13)), &SubContext_24);
    if (succeeded)
    {
      succeeded = mercury__builtin__semidet_fail_0_p_0();
      if (succeeded)
      {
        MR_Word Constructors_29;

        succeeded = check_hlds__type_util__type_constructors_3_p_0(ModuleInfo_7, Type_8, &Constructors_29);
        if (succeeded)
        {
          MR_Word _Inst_25;

          check_hlds__inst_mode_type_prop__propagate_type_into_inst_eagerly_8_p_0(TypeClassInfo_for_tprop_record_28, ModuleInfo_7, SubContext_24, Type_8, Constructors_29, Inst1_23, &_Inst_25, STATE_VARIABLE_Errors_0_26, STATE_VARIABLE_Errors_27);
        }
        else
          *STATE_VARIABLE_Errors_27 = STATE_VARIABLE_Errors_0_26;
      }
      else
      {
        MR_Word _Inst_32;

        check_hlds__inst_mode_type_prop__propagate_type_into_inst_lazily_7_p_0(TypeClassInfo_for_tprop_record_28, ModuleInfo_7, SubContext_24, Type_8, Inst1_23, &_Inst_32, STATE_VARIABLE_Errors_0_26, STATE_VARIABLE_Errors_27);
      }
    }
    else
      *STATE_VARIABLE_Errors_27 = STATE_VARIABLE_Errors_0_26;
  }
}

static void MR_CALL 
check_hlds__inst_mode_type_prop__propagate_subst_types_into_insts_9_p_0(
  MR_Word TypeClassInfo_for_tprop_record_57,
  MR_Word ModuleInfo_1,
  MR_Box Args_2,
  MR_Integer ArgNum_3,
  MR_Word Subst_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Box STATE_VARIABLE_Errors_0_8,
  MR_Box * STATE_VARIABLE_Errors_9)
{
  MR_bool succeeded;

  if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Errors_9 = STATE_VARIABLE_Errors_0_8;
    }
    else
    {
      *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_mode_type_prop.propagate_subst_types_into_insts\'/9", (MR_String) "length mismatch");
        return;
      }
    }
  else
  {
    MR_Word Var_58 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 1))));
    MR_Word Var_59 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 0))));

    if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_mode_type_prop.propagate_subst_types_into_insts\'/9", (MR_String) "length mismatch");
        return;
      }
    }
    else
    {
      MR_Word Inst0_45 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, (MR_Integer) 0))));
      MR_Word Insts0_46 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, (MR_Integer) 1))));
      MR_Word Inst_47;
      MR_Word Insts_48;
      MR_Box Context_50;
      MR_Box STATE_VARIABLE_Errors_53_53;
      MR_Integer Var_54;
      MR_Word Type_60;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_tprop_record_57, (MR_Integer) 0)), (MR_Integer) 8))));

      func_0(((MR_Box) (TypeClassInfo_for_tprop_record_57)), Args_2, ((MR_Box) (ArgNum_3)), &Context_50);
      succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&check_hlds__inst_mode_type_prop_scalar_common_2[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Subst_4);
      if (succeeded)
        Type_60 = Var_59;
      else
        parse_tree__prog_type_subst__apply_subst_to_type_3_p_0(Subst_4, Var_59, &Type_60);
      check_hlds__inst_mode_type_prop__propagate_type_into_inst_7_p_0(TypeClassInfo_for_tprop_record_57, ModuleInfo_1, Context_50, Type_60, Inst0_45, &Inst_47, STATE_VARIABLE_Errors_0_8, &STATE_VARIABLE_Errors_53_53);
      Var_54 = (MR_Integer) ((MR_Unsigned) ArgNum_3 + (MR_Unsigned) 1);
      check_hlds__inst_mode_type_prop__propagate_subst_types_into_insts_9_p_0(TypeClassInfo_for_tprop_record_57, ModuleInfo_1, Args_2, Var_54, Subst_4, Var_58, Insts0_46, &Insts_48, STATE_VARIABLE_Errors_53_53, STATE_VARIABLE_Errors_9);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__7_7 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Inst_47));
        MR_hl_field(1, base, 1) = ((MR_Box) (Insts_48));
      }
    }
  }
}

static void MR_CALL 
check_hlds__inst_mode_type_prop__check_for_bad_use_of_user_inst_7_p_0(
  MR_Word TypeClassInfo_for_tprop_record_8,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Box HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Box HeadVar__6_6,
  MR_Box * HeadVar__7_7)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_tprop_record_8, (MR_Integer) 0)), (MR_Integer) 10))));
  MR_Box conv1_HeadVar__5_5;

  func_0(((MR_Box) (TypeClassInfo_for_tprop_record_8)), ((MR_Box) (HeadVar__1_1)), ((MR_Box) (HeadVar__2_2)), ((MR_Box) (HeadVar__3_3)), HeadVar__4_4, &conv1_HeadVar__5_5, HeadVar__6_6, HeadVar__7_7);
  *HeadVar__5_5 = ((MR_Word) (conv1_HeadVar__5_5));
}

static void MR_CALL 
check_hlds__inst_mode_type_prop__step_into_ho_inst_4_p_0(
  MR_Word TypeClassInfo_for_tprop_record_5,
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2,
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
      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      *Inst_10 = base;
      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_6));
      MR_hl_field(3, base, 2) = ((MR_Box) (InstResults_13));
      MR_hl_field(3, base, 3) = ((MR_Box) (BoundInsts_9));
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

  check_hlds__inst_mode_type_prop__ClassMethod_for_check_hlds__inst_mode_type_prop__tprop_record____check_hlds__inst_mode_type_prop__tprop_context__arity0__check_hlds__inst_mode_type_prop__tprop_args__arity0__check_hlds__inst_mode_type_prop__tprop_errors__arity0______check_hlds__inst_mode_type_prop__step_into_ho_inst_4_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_HeadVar__4_4);
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
check_hlds__inst_mode_type_prop__ClassMethod_for_check_hlds__inst_mode_type_prop__tprop_record____check_hlds__inst_mode_type_prop__tprop_context__arity0__check_hlds__inst_mode_type_prop__tprop_args__arity0__check_hlds__inst_mode_type_prop__tprop_errors__arity0______check_hlds__inst_mode_type_prop__check_for_bad_use_of_user_inst_7_7_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__5_5;
  MR_Word conv0_HeadVar__7_7;

  check_hlds__inst_mode_type_prop__ClassMethod_for_check_hlds__inst_mode_type_prop__tprop_record____check_hlds__inst_mode_type_prop__tprop_context__arity0__check_hlds__inst_mode_type_prop__tprop_args__arity0__check_hlds__inst_mode_type_prop__tprop_errors__arity0______check_hlds__inst_mode_type_prop__check_for_bad_use_of_user_inst_7_7_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)), &conv1_HeadVar__5_5, ((MR_Word) (wrapper_arg_6)), &conv0_HeadVar__7_7);
  *wrapper_arg_5 = ((MR_Box) (conv1_HeadVar__5_5));
  *wrapper_arg_7 = ((MR_Box) (conv0_HeadVar__7_7));
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

  check_hlds__inst_mode_type_prop__ClassMethod_for_check_hlds__inst_mode_type_prop__tprop_record____unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______check_hlds__inst_mode_type_prop__step_into_ho_inst_4_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
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
check_hlds__inst_mode_type_prop__ClassMethod_for_check_hlds__inst_mode_type_prop__tprop_record____unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______check_hlds__inst_mode_type_prop__check_for_bad_use_of_user_inst_7_7_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__5_5;

  check_hlds__inst_mode_type_prop__ClassMethod_for_check_hlds__inst_mode_type_prop__tprop_record____unit__unit__arity0__unit__unit__arity0__unit__unit__arity0______check_hlds__inst_mode_type_prop__check_for_bad_use_of_user_inst_7_7_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_HeadVar__5_5);
  *wrapper_arg_5 = ((MR_Box) (conv0_HeadVar__5_5));
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
