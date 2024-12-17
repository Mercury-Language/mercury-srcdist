/*
** Automatically generated from `typecheck_unify_var_functor.m'
** by the Mercury compiler,
** version rotd-2024-12-17
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


// :- module check_hlds.typecheck_unify_var_functor.
// :- implementation.

/*
INIT mercury__check_hlds__typecheck_unify_var_functor__init
ENDINIT
*/

#include "check_hlds.typecheck_unify_var_functor.mih"


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
#include "check_hlds.type_assign.mih"
#include "check_hlds.type_util.mih"
#include "check_hlds.typecheck_error_type_assign.mih"
#include "check_hlds.typecheck_error_undef.mih"
#include "check_hlds.typecheck_error_util.mih"
#include "check_hlds.typecheck_errors.mih"
#include "check_hlds.typecheck_info.mih"
#include "check_hlds.typecheck_util.mih"
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
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.error_spec.mih"
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
#include "parse_tree.prog_type_construct.mih"
#include "parse_tree.prog_type_scan.mih"
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "recompilation.record_uses.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "parse_tree.module_qual.mq_info.mih"



struct check_hlds__typecheck_unify_var_functor__rename_constraint_3_p_0_env_0_s {
  MR_Word check_hlds__typecheck_unify_var_functor__rename_constraint_3_p_0_env_0__TVarRenaming_4;
  MR_bool check_hlds__typecheck_unify_var_functor__rename_constraint_3_p_0_env_0__succeeded;
  MR_Word check_hlds__typecheck_unify_var_functor__rename_constraint_3_p_0_env_0__ArgTypes0_9;
  jmp_buf check_hlds__typecheck_unify_var_functor__rename_constraint_3_p_0_env_0__commit_0;
  MR_Word check_hlds__typecheck_unify_var_functor__rename_constraint_3_p_0_env_0__TypeInfo_13_13;
  MR_Word check_hlds__typecheck_unify_var_functor__rename_constraint_3_p_0_env_0__Var_12;
};


static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_unify_var_functor__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_unify_var_functor__list__pti_list_1__plain_check_hlds__type_assign__type_ctor_info_type_assign_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_unify_var_functor__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_unify_var_functor__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__typecheck_unify_var_functor__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_EnumFunctorDesc check_hlds__typecheck_unify_var_functor__check_hlds__typecheck_unify_var_functor__enum_functor_desc_cons_constraints_action_0_0;

static const MR_EnumFunctorDesc check_hlds__typecheck_unify_var_functor__check_hlds__typecheck_unify_var_functor__enum_functor_desc_cons_constraints_action_0_1;

static const MR_EnumFunctorDesc check_hlds__typecheck_unify_var_functor__check_hlds__typecheck_unify_var_functor__enum_functor_desc_cons_constraints_action_0_2;

static const MR_EnumFunctorDescPtr check_hlds__typecheck_unify_var_functor__check_hlds__typecheck_unify_var_functor__enum_ordinal_ordered_cons_constraints_action_0[3];

static const MR_EnumFunctorDescPtr check_hlds__typecheck_unify_var_functor__check_hlds__typecheck_unify_var_functor__enum_name_ordered_cons_constraints_action_0[3];

static const MR_Integer check_hlds__typecheck_unify_var_functor__check_hlds__typecheck_unify_var_functor__functor_number_map_cons_constraints_action_0[3];

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_unify_var_functor__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_PseudoTypeInfo check_hlds__typecheck_unify_var_functor__check_hlds__typecheck_unify_var_functor__field_types_cons_type_assign_0_0[4];

static const MR_DuFunctorDesc check_hlds__typecheck_unify_var_functor__check_hlds__typecheck_unify_var_functor__du_functor_desc_cons_type_assign_0_0;

static const MR_DuFunctorDescPtr check_hlds__typecheck_unify_var_functor__check_hlds__typecheck_unify_var_functor__du_stag_ordered_cons_type_assign_0_0[1];

static const MR_DuPtagLayout check_hlds__typecheck_unify_var_functor__check_hlds__typecheck_unify_var_functor__du_ptag_ordered_cons_type_assign_0[1];

static const MR_DuFunctorDescPtr check_hlds__typecheck_unify_var_functor__check_hlds__typecheck_unify_var_functor__du_name_ordered_cons_type_assign_0[1];

static const MR_Integer check_hlds__typecheck_unify_var_functor__check_hlds__typecheck_unify_var_functor__functor_number_map_cons_type_assign_0[1];

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_unify_var_functor__list__ti_list_1check_hlds__typecheck_unify_var_functor__type_ctor_info_cons_type_assign_0;

static const MR_PseudoTypeInfo check_hlds__typecheck_unify_var_functor__check_hlds__typecheck_unify_var_functor__field_types_maybe_cons_type_info_0_0[1];

static const MR_DuFunctorDesc check_hlds__typecheck_unify_var_functor__check_hlds__typecheck_unify_var_functor__du_functor_desc_maybe_cons_type_info_0_0;

static const MR_PseudoTypeInfo check_hlds__typecheck_unify_var_functor__check_hlds__typecheck_unify_var_functor__field_types_maybe_cons_type_info_0_1[1];

static const MR_DuFunctorDesc check_hlds__typecheck_unify_var_functor__check_hlds__typecheck_unify_var_functor__du_functor_desc_maybe_cons_type_info_0_1;

static const MR_DuFunctorDescPtr check_hlds__typecheck_unify_var_functor__check_hlds__typecheck_unify_var_functor__du_stag_ordered_maybe_cons_type_info_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__typecheck_unify_var_functor__check_hlds__typecheck_unify_var_functor__du_stag_ordered_maybe_cons_type_info_0_1[1];

static const MR_DuPtagLayout check_hlds__typecheck_unify_var_functor__check_hlds__typecheck_unify_var_functor__du_ptag_ordered_maybe_cons_type_info_0[2];

static const MR_DuFunctorDescPtr check_hlds__typecheck_unify_var_functor__check_hlds__typecheck_unify_var_functor__du_name_ordered_maybe_cons_type_info_0[2];

static const MR_Integer check_hlds__typecheck_unify_var_functor__check_hlds__typecheck_unify_var_functor__functor_number_map_maybe_cons_type_info_0[2];

static MR_Word MR_CALL 
check_hlds__typecheck_unify_var_functor__IntroducedFrom__func__convert_cons_defn__502__3_1_f_0(
  MR_Word LambdaHeadVar__1_46);

static MR_Word MR_CALL 
check_hlds__typecheck_unify_var_functor__IntroducedFrom__func__convert_cons_defn__502__2_1_f_0(
  MR_Word LambdaHeadVar__1_46);

static MR_Word MR_CALL 
check_hlds__typecheck_unify_var_functor__IntroducedFrom__func__convert_cons_defn__502__1_1_f_0(
  MR_Word LambdaHeadVar__1_46);

static void MR_CALL 
check_hlds__typecheck_unify_var_functor____Compare____maybe_cons_type_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__typecheck_unify_var_functor____Unify____maybe_cons_type_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__typecheck_unify_var_functor____Compare____cons_type_assign_set_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__typecheck_unify_var_functor____Unify____cons_type_assign_set_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__typecheck_unify_var_functor____Compare____cons_type_assign_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__typecheck_unify_var_functor____Unify____cons_type_assign_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__typecheck_unify_var_functor____Compare____cons_constraints_action_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__typecheck_unify_var_functor____Unify____cons_constraints_action_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__typecheck_unify_var_functor__rename_constraint_3_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__typecheck_unify_var_functor__rename_constraint_3_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__typecheck_unify_var_functor__rename_constraint_3_p_0_3(
  void * env_ptr_arg);

static MR_bool MR_CALL 
check_hlds__typecheck_unify_var_functor__rename_constraint_3_p_0(
  MR_Word TVarRenaming_4,
  MR_Word Constraint0_5,
  MR_Word * Constraint_6);

static MR_bool MR_CALL 
check_hlds__typecheck_unify_var_functor__project_constraint_2_p_0(
  MR_Word CallTVars_3,
  MR_Word Constraint_4);

static MR_Box MR_CALL 
check_hlds__typecheck_unify_var_functor__make_field_access_function_cons_type_info_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
check_hlds__typecheck_unify_var_functor__make_field_access_function_cons_type_info_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
check_hlds__typecheck_unify_var_functor__make_field_access_function_cons_type_info_8_p_0(
  MR_Word Info_9,
  MR_Word GoalId_10,
  MR_Word FuncName_11,
  MR_Word UserArity_12,
  MR_Word AccessType_13,
  MR_Word FieldName_14,
  MR_Word FieldDefn_15,
  MR_Word * ConsTypeInfo_16);

static MR_bool MR_CALL 
check_hlds__typecheck_unify_var_functor__convert_field_access_cons_type_info_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
check_hlds__typecheck_unify_var_functor__convert_field_access_cons_type_info_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__typecheck_unify_var_functor__convert_field_access_cons_type_info_7_p_0(
  MR_Word ClassTable_8,
  MR_Word AccessType_9,
  MR_Word FieldSymName_10,
  MR_Word FieldDefn_11,
  MR_Word FunctorConsTypeInfo_12,
  MR_Word OrigExistTVars_13,
  MR_Word * ConsTypeInfo_14);

static MR_bool MR_CALL 
check_hlds__typecheck_unify_var_functor__is_field_access_function_for_type_ctor_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word AccessType_6,
  MR_Word TypeCtor_7,
  MR_Word PredId_8);

static void MR_CALL 
check_hlds__typecheck_unify_var_functor__type_assign_check_functor_type_builtin_5_p_0(
  MR_Word ConsType_6,
  MR_Word Y_7,
  MR_Word TypeAssign0_8,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_15,
  MR_Word * STATE_VARIABLE_TypeAssignSet_16);

static MR_Box MR_CALL 
check_hlds__typecheck_unify_var_functor__typecheck_unify_var_functor_std_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
check_hlds__typecheck_unify_var_functor__typecheck_unify_var_functor_std_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck_unify_var_functor__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_102_117_110_99_116_111_114_95_97_114_103_95_116_121_112_101_115_95_95_91_49_93_95_48_5_p_0(
  MR_Word ArgVars_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_4,
  MR_Word * STATE_VARIABLE_TypeAssignSet_5);

static void MR_CALL 
check_hlds__typecheck_unify_var_functor__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_97_115_115_105_103_110_115_95_118_97_114_115_95_104_97_118_101_95_116_121_112_101_115_95_95_91_49_93_95_48_6_p_0(
  MR_Word HeadVar__2_2,
  MR_Word ArgVars_3,
  MR_Word Types_4,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_5,
  MR_Word * STATE_VARIABLE_TypeAssignSet_6);

static void MR_CALL 
check_hlds__typecheck_unify_var_functor__typecheck_var_functor_types_4_p_0(
  MR_Word Var_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ArgsTypeAssignSet_0_3,
  MR_Word * STATE_VARIABLE_ArgsTypeAssignSet_4);

static void MR_CALL 
check_hlds__typecheck_unify_var_functor__get_cons_type_assigns_for_cons_defns_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word TypeAssigns_2,
  MR_Word STATE_VARIABLE_ConsTypeAssignSet_0_3,
  MR_Word * STATE_VARIABLE_ConsTypeAssignSet_4);

static void MR_CALL 
check_hlds__typecheck_unify_var_functor__get_cons_type_assigns_for_cons_defn_4_p_0(
  MR_Word ConsTypeInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ConsTypeAssignSet_0_3,
  MR_Word * STATE_VARIABLE_ConsTypeAssignSet_4);

static MR_bool MR_CALL 
check_hlds__typecheck_unify_var_functor__typecheck_info_get_ctor_list_2_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck_unify_var_functor__typecheck_info_get_ctor_list_2_6_p_0(
  MR_Word Info_7,
  MR_Word ConsId_8,
  MR_Integer Arity_9,
  MR_Word GoalId_10,
  MR_Word * ConsInfos_11,
  MR_Word * ConsErrors_12);

static MR_bool MR_CALL 
check_hlds__typecheck_unify_var_functor__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_97_112_112_108_121_95_116_121_112_101_95_95_91_49_93_95_48_4_p_0(
  MR_Word ConsId_6,
  MR_Integer Arity_7,
  MR_Word * ConsTypeInfos_8);

static void MR_CALL 
check_hlds__typecheck_unify_var_functor__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_118_101_114_116_95_99_111_110_115_95_100_101_102_110_95_108_105_115_116_95_95_91_51_93_95_48_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7);

static MR_Box MR_CALL 
check_hlds__typecheck_unify_var_functor__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_118_101_114_116_95_99_111_110_115_95_100_101_102_110_95_95_91_51_93_95_48_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__typecheck_unify_var_functor__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_118_101_114_116_95_99_111_110_115_95_100_101_102_110_95_95_91_51_93_95_48_6_p_0(
  MR_Word Info_7,
  MR_Word GoalId_8,
  MR_Word DuCtor_10,
  MR_Word ConsDefn_11,
  MR_Word * ConsTypeInfo_12);

static MR_bool MR_CALL 
check_hlds__typecheck_unify_var_functor__builtin_pred_type_5_p_0(
  MR_Word Info_6,
  MR_Word ConsId_7,
  MR_Integer Arity_8,
  MR_Word GoalId_9,
  MR_Word * ConsTypeInfos_10);

static void MR_CALL 
check_hlds__typecheck_unify_var_functor__accumulate_cons_type_infos_for_pred_ids_7_p_0(
  MR_Word Info_1,
  MR_Word PredTable_2,
  MR_Word GoalId_3,
  MR_Word HeadVar__4_4,
  MR_Integer Arity_5,
  MR_Word STATE_VARIABLE_ConsTypeInfos_0_6,
  MR_Word * STATE_VARIABLE_ConsTypeInfos_7);

static MR_bool MR_CALL 
check_hlds__typecheck_unify_var_functor__builtin_atomic_type_2_p_0(
  MR_Word ConsId_3,
  MR_String * TypeName_4);

static MR_Box MR_CALL 
check_hlds__typecheck_unify_var_functor__convert_cons_defn_list_7_p_1_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__typecheck_unify_var_functor__convert_cons_defn_list_7_p_1(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7);

static void MR_CALL 
check_hlds__typecheck_unify_var_functor__split_cons_errors_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
check_hlds__typecheck_unify_var_functor__typecheck_unify_var_functor_builtin_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__typecheck_unify_var_functor____Unify____cons_constraints_action_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck_unify_var_functor____Compare____cons_constraints_action_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__typecheck_unify_var_functor____Unify____cons_type_assign_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck_unify_var_functor____Compare____cons_type_assign_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__typecheck_unify_var_functor____Unify____cons_type_assign_set_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck_unify_var_functor____Compare____cons_type_assign_set_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__typecheck_unify_var_functor____Unify____maybe_cons_type_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck_unify_var_functor____Compare____maybe_cons_type_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__typecheck_unify_var_functor_scalar_common_1[6][2];

static /* final */ const MR_Box check_hlds__typecheck_unify_var_functor_scalar_common_2[3][1];

static /* final */ const MR_Box check_hlds__typecheck_unify_var_functor_scalar_common_3[1][8];

static /* final */ const MR_Box check_hlds__typecheck_unify_var_functor_scalar_common_4[3][5];

static /* final */ const MR_Box check_hlds__typecheck_unify_var_functor_scalar_common_5[4][3];

static /* final */ const MR_Box check_hlds__typecheck_unify_var_functor_scalar_common_8[1][11];

static /* final */ const MR_Box check_hlds__typecheck_unify_var_functor_scalar_common_9[1][6];

static /* final */ const MR_Box check_hlds__typecheck_unify_var_functor_scalar_common_10[1][7];


struct check_hlds__typecheck_unify_var_functor__vector_common_type_6_0_s {
  const MR_String check_hlds__typecheck_unify_var_functor__vector_common_type_6_0__vct_6_f_0;
};

static /* final */ const struct check_hlds__typecheck_unify_var_functor__vector_common_type_6_0_s check_hlds__typecheck_unify_var_functor_vector_common_6[5];

struct check_hlds__typecheck_unify_var_functor__vector_common_type_7_0_s {
  const MR_String check_hlds__typecheck_unify_var_functor__vector_common_type_7_0__vct_7_f_0;
  const MR_Integer check_hlds__typecheck_unify_var_functor__vector_common_type_7_0__vct_7_f_1;
};

static /* final */ const struct check_hlds__typecheck_unify_var_functor__vector_common_type_7_0_s check_hlds__typecheck_unify_var_functor_vector_common_7[4];



static /* final */ const MR_Box check_hlds__typecheck_unify_var_functor_scalar_common_1[6][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_hlds_ctor_field_defn_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__typecheck_unify_var_functor__check_hlds__typecheck_unify_var_functor__type_ctor_info_cons_type_assign_0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_unify_var_functor_scalar_common_2[3][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_String) "{}")) },
  /* row   1 */
  { ((MR_Box) ((MR_String) "tuple")) },
  /* row   2 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
};

static /* final */ const MR_Box check_hlds__typecheck_unify_var_functor_scalar_common_3[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__typecheck_unify_var_functor__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0)),
    ((MR_Box) (&check_hlds__typecheck_unify_var_functor__list__pti_list_1__plain_check_hlds__type_assign__type_ctor_info_type_assign_0)),
    ((MR_Box) (&check_hlds__typecheck_unify_var_functor__list__pti_list_1__plain_check_hlds__type_assign__type_ctor_info_type_assign_0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_unify_var_functor_scalar_common_4[3][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_cons_type_info_0)),
    ((MR_Box) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_cons_type_info_source_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__typecheck_unify_var_functor__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_unify_var_functor_scalar_common_5[4][3] = {
  /* row   0 */
  {
    ((MR_Box) (&check_hlds__typecheck_unify_var_functor_scalar_common_4[0])),
    ((MR_Box) (check_hlds__typecheck_unify_var_functor__convert_cons_defn_list_7_p_1_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&check_hlds__typecheck_unify_var_functor_scalar_common_4[0])),
    ((MR_Box) (check_hlds__typecheck_unify_var_functor__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_118_101_114_116_95_99_111_110_115_95_100_101_102_110_95_95_91_51_93_95_48_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&check_hlds__typecheck_unify_var_functor_scalar_common_4[1])),
    ((MR_Box) (check_hlds__typecheck_unify_var_functor__typecheck_unify_var_functor_std_10_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&check_hlds__typecheck_unify_var_functor_scalar_common_4[0])),
    ((MR_Box) (check_hlds__typecheck_unify_var_functor__make_field_access_function_cons_type_info_8_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_unify_var_functor_scalar_common_8[1][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_user_arity_0)),
    ((MR_Box) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_field_access_type_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_hlds_ctor_field_defn_0)),
    ((MR_Box) (&check_hlds__typecheck_unify_var_functor__check_hlds__typecheck_unify_var_functor__type_ctor_info_maybe_cons_type_info_0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_unify_var_functor_scalar_common_9[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__typecheck_unify_var_functor__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_unify_var_functor_scalar_common_10[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_field_access_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
};


static /* final */ const struct check_hlds__typecheck_unify_var_functor__vector_common_type_6_0_s check_hlds__typecheck_unify_var_functor_vector_common_6[5] = {
  /* row   0 */   { (MR_String) "string" },
  /* row   1 */   { (MR_String) "int" },
  /* row   2 */   { (MR_String) "string" },
  /* row   3 */   { (MR_String) "string" },
  /* row   4 */   { (MR_String) "string" },
};

static /* final */ const struct check_hlds__typecheck_unify_var_functor__vector_common_type_7_0_s check_hlds__typecheck_unify_var_functor_vector_common_7[4] = {
  /* row   0 */
  {
    (MR_String) "",
    (MR_Integer) 0
  },
  /* row   1 */
  {
    (MR_String) "apply",
    (MR_Integer) 1
  },
  /* row   2 */
  {
    (MR_String) "impure_apply",
    (MR_Integer) 2
  },
  /* row   3 */
  {
    (MR_String) "semipure_apply",
    (MR_Integer) 3
  },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_unify_var_functor__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_unify_var_functor__list__pti_list_1__plain_check_hlds__type_assign__type_ctor_info_type_assign_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0) }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_unify_var_functor__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_unify_var_functor__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&check_hlds__typecheck_unify_var_functor__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__typecheck_unify_var_functor__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&check_hlds__typecheck_unify_var_functor__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
    (MR_PseudoTypeInfo) (&check_hlds__typecheck_unify_var_functor__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_EnumFunctorDesc check_hlds__typecheck_unify_var_functor__check_hlds__typecheck_unify_var_functor__enum_functor_desc_cons_constraints_action_0_0 = {
  (MR_String) "do_not_flip_constraints",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__typecheck_unify_var_functor__check_hlds__typecheck_unify_var_functor__enum_functor_desc_cons_constraints_action_0_1 = {
  (MR_String) "flip_constraints_for_new",
  INT32_C(1)
};

static const MR_EnumFunctorDesc check_hlds__typecheck_unify_var_functor__check_hlds__typecheck_unify_var_functor__enum_functor_desc_cons_constraints_action_0_2 = {
  (MR_String) "flip_constraints_for_field_set",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr check_hlds__typecheck_unify_var_functor__check_hlds__typecheck_unify_var_functor__enum_ordinal_ordered_cons_constraints_action_0[3] = {
  &check_hlds__typecheck_unify_var_functor__check_hlds__typecheck_unify_var_functor__enum_functor_desc_cons_constraints_action_0_0,
  &check_hlds__typecheck_unify_var_functor__check_hlds__typecheck_unify_var_functor__enum_functor_desc_cons_constraints_action_0_1,
  &check_hlds__typecheck_unify_var_functor__check_hlds__typecheck_unify_var_functor__enum_functor_desc_cons_constraints_action_0_2
};

static const MR_EnumFunctorDescPtr check_hlds__typecheck_unify_var_functor__check_hlds__typecheck_unify_var_functor__enum_name_ordered_cons_constraints_action_0[3] = {
  &check_hlds__typecheck_unify_var_functor__check_hlds__typecheck_unify_var_functor__enum_functor_desc_cons_constraints_action_0_0,
  &check_hlds__typecheck_unify_var_functor__check_hlds__typecheck_unify_var_functor__enum_functor_desc_cons_constraints_action_0_2,
  &check_hlds__typecheck_unify_var_functor__check_hlds__typecheck_unify_var_functor__enum_functor_desc_cons_constraints_action_0_1
};

static const MR_Integer check_hlds__typecheck_unify_var_functor__check_hlds__typecheck_unify_var_functor__functor_number_map_cons_constraints_action_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__typecheck_unify_var_functor__check_hlds__typecheck_unify_var_functor__type_ctor_info_cons_constraints_action_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__typecheck_unify_var_functor____Unify____cons_constraints_action_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_unify_var_functor____Compare____cons_constraints_action_0_0_10001)),
  (MR_String) "check_hlds.typecheck_unify_var_functor",
  (MR_String) "cons_constraints_action",
  { check_hlds__typecheck_unify_var_functor__check_hlds__typecheck_unify_var_functor__enum_name_ordered_cons_constraints_action_0 },
  { check_hlds__typecheck_unify_var_functor__check_hlds__typecheck_unify_var_functor__enum_ordinal_ordered_cons_constraints_action_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  check_hlds__typecheck_unify_var_functor__check_hlds__typecheck_unify_var_functor__functor_number_map_cons_constraints_action_0,

};

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_unify_var_functor__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0) }
};

static const MR_PseudoTypeInfo check_hlds__typecheck_unify_var_functor__check_hlds__typecheck_unify_var_functor__field_types_cons_type_assign_0_0[4] = {
  (MR_PseudoTypeInfo) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__typecheck_unify_var_functor__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_cons_type_info_source_0)
};

static const MR_DuFunctorDesc check_hlds__typecheck_unify_var_functor__check_hlds__typecheck_unify_var_functor__du_functor_desc_cons_type_assign_0_0 = {
  (MR_String) "cons_type_assign",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__typecheck_unify_var_functor__check_hlds__typecheck_unify_var_functor__field_types_cons_type_assign_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_unify_var_functor__check_hlds__typecheck_unify_var_functor__du_stag_ordered_cons_type_assign_0_0[1] = { &check_hlds__typecheck_unify_var_functor__check_hlds__typecheck_unify_var_functor__du_functor_desc_cons_type_assign_0_0 };

static const MR_DuPtagLayout check_hlds__typecheck_unify_var_functor__check_hlds__typecheck_unify_var_functor__du_ptag_ordered_cons_type_assign_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__typecheck_unify_var_functor__check_hlds__typecheck_unify_var_functor__du_stag_ordered_cons_type_assign_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_unify_var_functor__check_hlds__typecheck_unify_var_functor__du_name_ordered_cons_type_assign_0[1] = { &check_hlds__typecheck_unify_var_functor__check_hlds__typecheck_unify_var_functor__du_functor_desc_cons_type_assign_0_0 };

static const MR_Integer check_hlds__typecheck_unify_var_functor__check_hlds__typecheck_unify_var_functor__functor_number_map_cons_type_assign_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__typecheck_unify_var_functor__check_hlds__typecheck_unify_var_functor__type_ctor_info_cons_type_assign_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__typecheck_unify_var_functor____Unify____cons_type_assign_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_unify_var_functor____Compare____cons_type_assign_0_0_10001)),
  (MR_String) "check_hlds.typecheck_unify_var_functor",
  (MR_String) "cons_type_assign",
  { check_hlds__typecheck_unify_var_functor__check_hlds__typecheck_unify_var_functor__du_name_ordered_cons_type_assign_0 },
  { check_hlds__typecheck_unify_var_functor__check_hlds__typecheck_unify_var_functor__du_ptag_ordered_cons_type_assign_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__typecheck_unify_var_functor__check_hlds__typecheck_unify_var_functor__functor_number_map_cons_type_assign_0,

};

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_unify_var_functor__list__ti_list_1check_hlds__typecheck_unify_var_functor__type_ctor_info_cons_type_assign_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&check_hlds__typecheck_unify_var_functor__check_hlds__typecheck_unify_var_functor__type_ctor_info_cons_type_assign_0) }
};

const MR_TypeCtorInfo_Struct check_hlds__typecheck_unify_var_functor__check_hlds__typecheck_unify_var_functor__type_ctor_info_cons_type_assign_set_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__typecheck_unify_var_functor____Unify____cons_type_assign_set_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_unify_var_functor____Compare____cons_type_assign_set_0_0_10001)),
  (MR_String) "check_hlds.typecheck_unify_var_functor",
  (MR_String) "cons_type_assign_set",
  { NULL },
  { (MR_PseudoTypeInfo) (&check_hlds__typecheck_unify_var_functor__list__ti_list_1check_hlds__typecheck_unify_var_functor__type_ctor_info_cons_type_assign_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo check_hlds__typecheck_unify_var_functor__check_hlds__typecheck_unify_var_functor__field_types_maybe_cons_type_info_0_0[1] = { (MR_PseudoTypeInfo) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_cons_type_info_0) };

static const MR_DuFunctorDesc check_hlds__typecheck_unify_var_functor__check_hlds__typecheck_unify_var_functor__du_functor_desc_maybe_cons_type_info_0_0 = {
  (MR_String) "ok",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE_DIRECT_ARG,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__typecheck_unify_var_functor__check_hlds__typecheck_unify_var_functor__field_types_maybe_cons_type_info_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__typecheck_unify_var_functor__check_hlds__typecheck_unify_var_functor__field_types_maybe_cons_type_info_0_1[1] = { (MR_PseudoTypeInfo) (&check_hlds__typecheck_error_undef__check_hlds__typecheck_error_undef__type_ctor_info_cons_error_0) };

static const MR_DuFunctorDesc check_hlds__typecheck_unify_var_functor__check_hlds__typecheck_unify_var_functor__du_functor_desc_maybe_cons_type_info_0_1 = {
  (MR_String) "error",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  check_hlds__typecheck_unify_var_functor__check_hlds__typecheck_unify_var_functor__field_types_maybe_cons_type_info_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_unify_var_functor__check_hlds__typecheck_unify_var_functor__du_stag_ordered_maybe_cons_type_info_0_0[1] = { &check_hlds__typecheck_unify_var_functor__check_hlds__typecheck_unify_var_functor__du_functor_desc_maybe_cons_type_info_0_0 };

static const MR_DuFunctorDescPtr check_hlds__typecheck_unify_var_functor__check_hlds__typecheck_unify_var_functor__du_stag_ordered_maybe_cons_type_info_0_1[1] = { &check_hlds__typecheck_unify_var_functor__check_hlds__typecheck_unify_var_functor__du_functor_desc_maybe_cons_type_info_0_1 };

static const MR_DuPtagLayout check_hlds__typecheck_unify_var_functor__check_hlds__typecheck_unify_var_functor__du_ptag_ordered_maybe_cons_type_info_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE_DIRECT_ARG,
    check_hlds__typecheck_unify_var_functor__check_hlds__typecheck_unify_var_functor__du_stag_ordered_maybe_cons_type_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__typecheck_unify_var_functor__check_hlds__typecheck_unify_var_functor__du_stag_ordered_maybe_cons_type_info_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_unify_var_functor__check_hlds__typecheck_unify_var_functor__du_name_ordered_maybe_cons_type_info_0[2] = {
  &check_hlds__typecheck_unify_var_functor__check_hlds__typecheck_unify_var_functor__du_functor_desc_maybe_cons_type_info_0_1,
  &check_hlds__typecheck_unify_var_functor__check_hlds__typecheck_unify_var_functor__du_functor_desc_maybe_cons_type_info_0_0
};

static const MR_Integer check_hlds__typecheck_unify_var_functor__check_hlds__typecheck_unify_var_functor__functor_number_map_maybe_cons_type_info_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__typecheck_unify_var_functor__check_hlds__typecheck_unify_var_functor__type_ctor_info_maybe_cons_type_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__typecheck_unify_var_functor____Unify____maybe_cons_type_info_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_unify_var_functor____Compare____maybe_cons_type_info_0_0_10001)),
  (MR_String) "check_hlds.typecheck_unify_var_functor",
  (MR_String) "maybe_cons_type_info",
  { check_hlds__typecheck_unify_var_functor__check_hlds__typecheck_unify_var_functor__du_name_ordered_maybe_cons_type_info_0 },
  { check_hlds__typecheck_unify_var_functor__check_hlds__typecheck_unify_var_functor__du_ptag_ordered_maybe_cons_type_info_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__typecheck_unify_var_functor__check_hlds__typecheck_unify_var_functor__functor_number_map_maybe_cons_type_info_0,

};

static MR_Word MR_CALL 
check_hlds__typecheck_unify_var_functor__IntroducedFrom__func__convert_cons_defn__502__3_1_f_0(
  MR_Word LambdaHeadVar__1_46)
{
  MR_Word LambdaHeadVar__2_47 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_46, (MR_Integer) 1))));

  return LambdaHeadVar__2_47;
}

static MR_Word MR_CALL 
check_hlds__typecheck_unify_var_functor__IntroducedFrom__func__convert_cons_defn__502__2_1_f_0(
  MR_Word LambdaHeadVar__1_46)
{
  MR_Word LambdaHeadVar__2_47 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_46, (MR_Integer) 1))));

  return LambdaHeadVar__2_47;
}

static MR_Word MR_CALL 
check_hlds__typecheck_unify_var_functor__IntroducedFrom__func__convert_cons_defn__502__1_1_f_0(
  MR_Word LambdaHeadVar__1_46)
{
  MR_Word LambdaHeadVar__2_47 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_46, (MR_Integer) 1))));

  return LambdaHeadVar__2_47;
}

static void MR_CALL 
check_hlds__typecheck_unify_var_functor____Compare____maybe_cons_type_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_8 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_9 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_8 == CastY_9);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    {
      MR_Word ArgX1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

      check_hlds__typecheck_error_undef____Compare____cons_error_0_0(HeadVar__1_1, ArgX1_6, ArgY1_7);
    }
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_Word ArgX1_4 = (MR_Word) ((MR_Word) (HeadVar__2_2));
    MR_Word ArgY1_5 = (MR_Word) ((MR_Word) (HeadVar__3_3));

    check_hlds__type_assign____Compare____cons_type_info_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck_unify_var_functor____Unify____maybe_cons_type_info_0_0(
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
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
  {
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_6;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      succeeded = check_hlds__typecheck_error_undef____Unify____cons_error_0_0(ArgX1_5, ArgY1_6);
    }
  }
  else
  {
    MR_Word ArgX1_3 = (MR_Word) ((MR_Word) (HeadVar__1_1));
    MR_Word ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = (MR_Word) ((MR_Word) (HeadVar__2_2));
      succeeded = check_hlds__type_assign____Unify____cons_type_info_0_0(ArgX1_3, ArgY1_4);
    }
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_unify_var_functor____Compare____cons_type_assign_set_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_unify_var_functor_scalar_common_1[5]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
check_hlds__typecheck_unify_var_functor____Unify____cons_type_assign_set_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__typecheck_unify_var_functor_scalar_common_1[5]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_unify_var_functor____Compare____cons_type_assign_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Word SubResult1_6;

    check_hlds__type_assign____Compare____type_assign_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      parse_tree__prog_data____Compare____mer_type_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_unify_var_functor_scalar_common_1[4]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
          check_hlds__type_assign____Compare____cons_type_info_source_0_0(HeadVar__1_1, ArgX4_13, ArgY4_14);
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck_unify_var_functor____Unify____cons_type_assign_0_0(
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
    MR_Word TypeInfo_15_15;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));

    succeeded = check_hlds__type_assign____Unify____type_assign_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        TypeInfo_15_15 = (MR_Word) (&check_hlds__typecheck_unify_var_functor_scalar_common_1[4]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_15, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
          succeeded = check_hlds__type_assign____Unify____cons_type_info_source_0_0(ArgX4_9, ArgY4_10);
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_unify_var_functor____Compare____cons_constraints_action_0_0(
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
check_hlds__typecheck_unify_var_functor____Unify____cons_constraints_action_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_unify_var_functor__rename_constraint_3_p_0_1(
  void * env_ptr_arg)
{
  struct check_hlds__typecheck_unify_var_functor__rename_constraint_3_p_0_env_0_s * env_ptr = (struct check_hlds__typecheck_unify_var_functor__rename_constraint_3_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->check_hlds__typecheck_unify_var_functor__rename_constraint_3_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
check_hlds__typecheck_unify_var_functor__rename_constraint_3_p_0_2(
  void * env_ptr_arg)
{
  struct check_hlds__typecheck_unify_var_functor__rename_constraint_3_p_0_env_0_s * env_ptr = (struct check_hlds__typecheck_unify_var_functor__rename_constraint_3_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->check_hlds__typecheck_unify_var_functor__rename_constraint_3_p_0_env_0__TypeInfo_13_13 = (MR_Word) (&check_hlds__typecheck_unify_var_functor_scalar_common_1[2]);
  (env_ptr)->check_hlds__typecheck_unify_var_functor__rename_constraint_3_p_0_env_0__succeeded = mercury__map__contains_2_p_0((env_ptr)->check_hlds__typecheck_unify_var_functor__rename_constraint_3_p_0_env_0__TypeInfo_13_13, (env_ptr)->check_hlds__typecheck_unify_var_functor__rename_constraint_3_p_0_env_0__TypeInfo_13_13, (env_ptr)->check_hlds__typecheck_unify_var_functor__rename_constraint_3_p_0_env_0__TVarRenaming_4, ((MR_Box) ((env_ptr)->check_hlds__typecheck_unify_var_functor__rename_constraint_3_p_0_env_0__Var_12)));
  if ((env_ptr)->check_hlds__typecheck_unify_var_functor__rename_constraint_3_p_0_env_0__succeeded)
    check_hlds__typecheck_unify_var_functor__rename_constraint_3_p_0_1(env_ptr);
}

static void MR_CALL 
check_hlds__typecheck_unify_var_functor__rename_constraint_3_p_0_3(
  void * env_ptr_arg)
{
  struct check_hlds__typecheck_unify_var_functor__rename_constraint_3_p_0_env_0_s * env_ptr = (struct check_hlds__typecheck_unify_var_functor__rename_constraint_3_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->check_hlds__typecheck_unify_var_functor__rename_constraint_3_p_0_env_0__commit_0) == 0)
    {
      parse_tree__prog_type_scan__type_list_contains_var_2_p_0((env_ptr)->check_hlds__typecheck_unify_var_functor__rename_constraint_3_p_0_env_0__ArgTypes0_9, &(env_ptr)->check_hlds__typecheck_unify_var_functor__rename_constraint_3_p_0_env_0__Var_12, check_hlds__typecheck_unify_var_functor__rename_constraint_3_p_0_2, env_ptr);
      (env_ptr)->check_hlds__typecheck_unify_var_functor__rename_constraint_3_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->check_hlds__typecheck_unify_var_functor__rename_constraint_3_p_0_env_0__succeeded = MR_TRUE;
}

static MR_bool MR_CALL 
check_hlds__typecheck_unify_var_functor__rename_constraint_3_p_0(
  MR_Word TVarRenaming_4,
  MR_Word Constraint0_5,
  MR_Word * Constraint_6)
{
  struct check_hlds__typecheck_unify_var_functor__rename_constraint_3_p_0_env_0_s env;

  (env).check_hlds__typecheck_unify_var_functor__rename_constraint_3_p_0_env_0__TVarRenaming_4 = TVarRenaming_4;
  {
    MR_Word Ids_7 = ((MR_Word) ((MR_hl_field(0, Constraint0_5, (MR_Integer) 0))));
    MR_Word ClassName_8 = ((MR_Word) ((MR_hl_field(0, Constraint0_5, (MR_Integer) 1))));
    MR_Word ArgTypes_11;

    (env).check_hlds__typecheck_unify_var_functor__rename_constraint_3_p_0_env_0__ArgTypes0_9 = ((MR_Word) ((MR_hl_field(0, Constraint0_5, (MR_Integer) 2))));
    check_hlds__typecheck_unify_var_functor__rename_constraint_3_p_0_3(&env);
    if ((env).check_hlds__typecheck_unify_var_functor__rename_constraint_3_p_0_env_0__succeeded)
    {
      parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0((env).check_hlds__typecheck_unify_var_functor__rename_constraint_3_p_0_env_0__TVarRenaming_4, (env).check_hlds__typecheck_unify_var_functor__rename_constraint_3_p_0_env_0__ArgTypes0_9, &ArgTypes_11);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        *Constraint_6 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Ids_7));
        MR_hl_field(0, base, 1) = ((MR_Box) (ClassName_8));
        MR_hl_field(0, base, 2) = ((MR_Box) (ArgTypes_11));
      }
      (env).check_hlds__typecheck_unify_var_functor__rename_constraint_3_p_0_env_0__succeeded = MR_TRUE;
    }
    return (env).check_hlds__typecheck_unify_var_functor__rename_constraint_3_p_0_env_0__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck_unify_var_functor__project_constraint_2_p_0(
  MR_Word CallTVars_3,
  MR_Word Constraint_4)
{
  MR_bool succeeded;
  MR_Word TypesToCheck_7 = ((MR_Word) ((MR_hl_field(0, Constraint_4, (MR_Integer) 2))));
  MR_Word TVarsToCheck0_8;
  MR_Word TVarsToCheck_9;
  MR_Word RelevantTVars_10;

  parse_tree__prog_type_scan__type_vars_in_types_2_p_0(TypesToCheck_7, &TVarsToCheck0_8);
  mercury__set__list_to_set_2_p_0((MR_Word) (&check_hlds__typecheck_unify_var_functor_scalar_common_1[2]), TVarsToCheck0_8, &TVarsToCheck_9);
  mercury__set__intersect_3_p_0((MR_Word) (&check_hlds__typecheck_unify_var_functor_scalar_common_1[2]), TVarsToCheck_9, CallTVars_3, &RelevantTVars_10);
  succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&check_hlds__typecheck_unify_var_functor_scalar_common_1[2]), RelevantTVars_10);
  return succeeded;
}

static MR_Box MR_CALL 
check_hlds__typecheck_unify_var_functor__make_field_access_function_cons_type_info_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_47;

  conv0_LambdaHeadVar__2_47 = check_hlds__typecheck_unify_var_functor__IntroducedFrom__func__convert_cons_defn__502__2_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_47));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
check_hlds__typecheck_unify_var_functor__make_field_access_function_cons_type_info_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__typecheck_unify_var_functor__is_field_access_function_for_type_ctor_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__typecheck_unify_var_functor__make_field_access_function_cons_type_info_8_p_0(
  MR_Word Info_9,
  MR_Word GoalId_10,
  MR_Word FuncName_11,
  MR_Word UserArity_12,
  MR_Word AccessType_13,
  MR_Word FieldName_14,
  MR_Word FieldDefn_15,
  MR_Word * ConsTypeInfo_16)
{
  MR_bool succeeded;
  MR_Word OrigExistTVars_17;
  MR_Word MaybeFunctorConsTypeInfo_18;
  MR_Word TypeCtor_25 = ((MR_Word) ((MR_hl_field(0, FieldDefn_15, (MR_Integer) 2))));
  MR_Word DuCtor_26 = ((MR_Word) ((MR_hl_field(0, FieldDefn_15, (MR_Integer) 3))));
  MR_Word TypeModule_28;
  MR_Word ModuleInfo_31;
  MR_Word PredTable_32;
  MR_String UnqualFuncName_33;
  MR_Word IsFieldAccessFunc_34;
  MR_Word ConsTable_36;
  MR_Word ConsDefn_37;
  MR_Word MaybeExistConstraints_38;
  MR_Word Var_44 = ((MR_Word) ((MR_hl_field(0, TypeCtor_25, (MR_Integer) 0))));
  MR_Word Var_48;
  MR_Word Var_49;
  MR_Word Var_50;
  MR_Word Var_51;
  MR_Word Var_52;

  succeeded = ((MR_tag((MR_Word) Var_44)) == (MR_Integer) 1);
  if (succeeded)
  {
    TypeModule_28 = ((MR_Word) ((MR_hl_field(1, Var_44, (MR_Integer) 0))));
    check_hlds__typecheck_info__typecheck_info_get_module_info_2_p_0(Info_9, &ModuleInfo_31);
    hlds__hlds_module__module_info_get_predicate_table_2_p_0(ModuleInfo_31, &PredTable_32);
    UnqualFuncName_33 = mdbcomp__sym_name__unqualify_name_1_f_0(FuncName_11);
    check_hlds__typecheck_info__typecheck_info_get_is_field_access_function_2_p_0(Info_9, &IsFieldAccessFunc_34);
    if ((IsFieldAccessFunc_34 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word PredIds_35;
      MR_Word Var_46;

      hlds__pred_table__predicate_table_lookup_func_m_n_a_6_p_0(PredTable_32, (MR_Integer) 0, TypeModule_28, UnqualFuncName_33, UserArity_12, &PredIds_35);
      {
        Var_46 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_46, 0) = ((MR_Box) (&check_hlds__typecheck_unify_var_functor_scalar_common_10[0]));
        MR_hl_field(0, Var_46, 1) = ((MR_Box) (check_hlds__typecheck_unify_var_functor__make_field_access_function_cons_type_info_8_p_0_1));
        MR_hl_field(0, Var_46, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(0, Var_46, 3) = ((MR_Box) (ModuleInfo_31));
        MR_hl_field(0, Var_46, 4) = ((MR_Box) (AccessType_13));
        MR_hl_field(0, Var_46, 5) = ((MR_Box) (TypeCtor_25));
      }
      succeeded = mercury__list__all_false_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), Var_46, PredIds_35);
    }
    else
      succeeded = MR_TRUE;
    if (succeeded)
    {
      hlds__hlds_module__module_info_get_cons_table_2_p_0(ModuleInfo_31, &ConsTable_36);
      hlds__hlds_cons__lookup_cons_table_of_type_ctor_4_p_0(ConsTable_36, TypeCtor_25, DuCtor_26, &ConsDefn_37);
      Var_48 = ((MR_Word) ((MR_hl_field(0, ConsDefn_37, (MR_Integer) 0))));
      Var_49 = ((MR_Word) ((MR_hl_field(0, ConsDefn_37, (MR_Integer) 1))));
      Var_50 = ((MR_Word) ((MR_hl_field(0, ConsDefn_37, (MR_Integer) 2))));
      Var_51 = ((MR_Word) ((MR_hl_field(0, ConsDefn_37, (MR_Integer) 3))));
      MaybeExistConstraints_38 = ((MR_Word) ((MR_hl_field(0, ConsDefn_37, (MR_Integer) 4))));
      Var_52 = ((MR_Word) ((MR_hl_field(0, ConsDefn_37, (MR_Integer) 5))));
      if ((MaybeExistConstraints_38 == (MR_Word) ((MR_Unsigned) 0U)))
        OrigExistTVars_17 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word ExistConstraints_39 = (MR_Word) (MR_body((MR_Word) (MaybeExistConstraints_38), (MR_Integer) 1));

        OrigExistTVars_17 = ((MR_Word) ((MR_hl_field(0, ExistConstraints_39, (MR_Integer) 0))));
      }
      switch (AccessType_13) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          check_hlds__typecheck_unify_var_functor__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_118_101_114_116_95_99_111_110_115_95_100_101_102_110_95_95_91_51_93_95_48_6_p_0(Info_9, GoalId_10, DuCtor_26, ConsDefn_37, &MaybeFunctorConsTypeInfo_18);
          break;
        case (MR_Integer) 1:
          {
            MR_Word ArgTypes_62;
            MR_Word TypeTable_63;
            MR_Word TypeDefn_64;
            MR_Word Body_65;
            MR_Word PredId_66;
            MR_Word ModuleInfo_67;
            MR_Word PredInfo_68;
            MR_Word PredStatus_69;
            MR_Word BodyDu_70;
            MR_Word GoalType_72;
            MR_Word Var_85;
            MR_Word Var_86;
            MR_Word Var_87;

            ArgTypes_62 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&check_hlds__typecheck_unify_var_functor_scalar_common_5[3]), Var_52);
            check_hlds__typecheck_info__typecheck_info_get_type_table_2_p_0(Info_9, &TypeTable_63);
            hlds__hlds_data__lookup_type_ctor_defn_3_p_0(TypeTable_63, Var_48, &TypeDefn_64);
            hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_64, &Body_65);
            check_hlds__typecheck_info__typecheck_info_get_pred_id_2_p_0(Info_9, &PredId_66);
            check_hlds__typecheck_info__typecheck_info_get_module_info_2_p_0(Info_9, &ModuleInfo_67);
            hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_67, PredId_66, &PredInfo_68);
            hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo_68, &PredStatus_69);
            succeeded = ((MR_tag((MR_Word) Body_65)) == (MR_Integer) 0);
            if (succeeded)
            {
              BodyDu_70 = (MR_Word) ((MR_Word) (Body_65));
              Var_85 = ((MR_Word) ((MR_hl_field(0, BodyDu_70, (MR_Integer) 4))));
              succeeded = (Var_85 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                hlds__hlds_pred__pred_info_get_goal_type_2_p_0(PredInfo_68, &GoalType_72);
                succeeded = ((MR_tag((MR_Word) GoalType_72)) == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_86 = ((MR_Unsigned) ((MR_hl_field(0, GoalType_72, (MR_Integer) 0))) & (MR_Integer) 3);
                  succeeded = (Var_86 == (MR_Integer) 3);
                }
                succeeded = !(succeeded);
                if (succeeded)
                {
                  succeeded = hlds__hlds_pred__is_unify_index_or_compare_pred_1_p_0(PredInfo_68);
                  succeeded = !(succeeded);
                  if (succeeded)
                  {
                    Var_87 = (MR_Word) (PredStatus_69);
                    succeeded = (Var_87 != (MR_Word) ((MR_Unsigned) 0U));
                  }
                }
              }
            }
            if (succeeded)
            {
              MR_Word Var_88;

              {
                Var_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_88, 0) = ((MR_Box) (Var_48));
                MR_hl_field(1, Var_88, 1) = ((MR_Box) (TypeDefn_64));
              }
              {
                MaybeFunctorConsTypeInfo_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, MaybeFunctorConsTypeInfo_18, 0) = ((MR_Box) (Var_88));
              }
            }
            else
            {
              MR_Word TypeStatus_73;
              MR_Word Var_89;
              MR_Word Var_90;

              hlds__hlds_data__get_type_defn_status_2_p_0(TypeDefn_64, &TypeStatus_73);
              Var_89 = (MR_Word) (TypeStatus_73);
              succeeded = (Var_89 == (MR_Word) ((MR_Unsigned) 4U));
              if (succeeded)
              {
                succeeded = hlds__hlds_pred__is_unify_index_or_compare_pred_1_p_0(PredInfo_68);
                succeeded = !(succeeded);
                if (succeeded)
                {
                  Var_90 = (MR_Word) (PredStatus_69);
                  succeeded = (Var_90 != (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
                MaybeFunctorConsTypeInfo_18 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_unify_var_functor_scalar_common_2[2]));
              else
              {
                MR_Word ConsTypeArgs_74;
                MR_Word ConsType_75;
                MR_Word ExistProgConstraints_76;
                MR_Word ProgConstraints_80;
                MR_Word ExistQVars_81;
                MR_Word ClassTable_82;
                MR_Word Constraints_83;
                MR_Word Var_91;
                MR_Word Var_92;

                parse_tree__prog_type__var_list_to_type_list_3_p_0(Var_51, Var_50, &ConsTypeArgs_74);
                parse_tree__prog_type_construct__construct_type_3_p_0(Var_48, ConsTypeArgs_74, &ConsType_75);
                if ((MaybeExistConstraints_38 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  ExistQVars_81 = (MR_Word) ((MR_Unsigned) 0U);
                  ExistProgConstraints_76 = (MR_Word) ((MR_Unsigned) 0U);
                }
                else
                {
                  MR_Word ExistConstraints_77 = (MR_Word) (MR_body((MR_Word) (MaybeExistConstraints_38), (MR_Integer) 1));

                  ExistQVars_81 = ((MR_Word) ((MR_hl_field(0, ExistConstraints_77, (MR_Integer) 0))));
                  ExistProgConstraints_76 = ((MR_Word) ((MR_hl_field(0, ExistConstraints_77, (MR_Integer) 1))));
                }
                {
                  ProgConstraints_80 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, ProgConstraints_80, 0) = ((MR_Box) (ExistProgConstraints_76));
                  MR_hl_field(0, ProgConstraints_80, 1) = ((MR_Box) (ExistProgConstraints_76));
                }
                hlds__hlds_module__module_info_get_class_table_2_p_0(ModuleInfo_67, &ClassTable_82);
                hlds__hlds_class__make_body_hlds_constraints_5_p_0(ClassTable_82, Var_49, GoalId_10, ProgConstraints_80, &Constraints_83);
                {
                  Var_92 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_92, 0) = ((MR_Box) (Var_48));
                  MR_hl_field(0, Var_92, 1) = ((MR_Box) (DuCtor_26));
                }
                {
                  Var_91 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_91, 0) = ((MR_Box) (Var_49));
                  MR_hl_field(0, Var_91, 1) = ((MR_Box) (ExistQVars_81));
                  MR_hl_field(0, Var_91, 2) = ((MR_Box) (ConsType_75));
                  MR_hl_field(0, Var_91, 3) = ((MR_Box) (ArgTypes_62));
                  MR_hl_field(0, Var_91, 4) = ((MR_Box) (Constraints_83));
                  MR_hl_field(0, Var_91, 5) = ((MR_Box) (Var_92));
                }
                MaybeFunctorConsTypeInfo_18 = (MR_Word) ((MR_Word) (Var_91));
              }
            }
          }
          break;
      }
      if (((MR_tag((MR_Word) MaybeFunctorConsTypeInfo_18)) == (MR_Integer) 1))
        *ConsTypeInfo_16 = MaybeFunctorConsTypeInfo_18;
      else
      {
        MR_Word FunctorConsTypeInfo_19 = (MR_Word) ((MR_Word) (MaybeFunctorConsTypeInfo_18));
        MR_Word ModuleInfo_20;
        MR_Word ClassTable_21;

        check_hlds__typecheck_info__typecheck_info_get_module_info_2_p_0(Info_9, &ModuleInfo_20);
        hlds__hlds_module__module_info_get_class_table_2_p_0(ModuleInfo_20, &ClassTable_21);
        check_hlds__typecheck_unify_var_functor__convert_field_access_cons_type_info_7_p_0(ClassTable_21, AccessType_13, FieldName_14, FieldDefn_15, FunctorConsTypeInfo_19, OrigExistTVars_17, ConsTypeInfo_16);
      }
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__typecheck_unify_var_functor__convert_field_access_cons_type_info_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv1_Constraint_6;

  succeeded = check_hlds__typecheck_unify_var_functor__rename_constraint_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_Constraint_6);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv1_Constraint_6));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__typecheck_unify_var_functor__convert_field_access_cons_type_info_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__typecheck_unify_var_functor__project_constraint_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_unify_var_functor__convert_field_access_cons_type_info_7_p_0(
  MR_Word ClassTable_8,
  MR_Word AccessType_9,
  MR_Word FieldSymName_10,
  MR_Word FieldDefn_11,
  MR_Word FunctorConsTypeInfo_12,
  MR_Word OrigExistTVars_13,
  MR_Word * ConsTypeInfo_14)
{
  MR_bool succeeded;
  MR_Word TVarSet0_15 = ((MR_Word) ((MR_hl_field(0, FunctorConsTypeInfo_12, (MR_Integer) 0))));
  MR_Word ExistQVars_16 = ((MR_Word) ((MR_hl_field(0, FunctorConsTypeInfo_12, (MR_Integer) 1))));
  MR_Word FunctorType_17 = ((MR_Word) ((MR_hl_field(0, FunctorConsTypeInfo_12, (MR_Integer) 2))));
  MR_Word ConsArgTypes_18 = ((MR_Word) ((MR_hl_field(0, FunctorConsTypeInfo_12, (MR_Integer) 3))));
  MR_Word Constraints0_19 = ((MR_Word) ((MR_hl_field(0, FunctorConsTypeInfo_12, (MR_Integer) 4))));
  MR_Word Source0_20 = ((MR_Word) ((MR_hl_field(0, FunctorConsTypeInfo_12, (MR_Integer) 5))));
  MR_Word SourceType_21;
  MR_Word ConsId_22;
  MR_Integer FieldNumber_34;
  MR_Word FieldType_35;
  MR_String FieldName_36;
  MR_Box conv0_FieldType_35;

  switch (MR_tag((MR_Word) Source0_20)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        SourceType_21 = ((MR_Word) ((MR_hl_field(0, Source0_20, (MR_Integer) 0))));
        ConsId_22 = ((MR_Word) ((MR_hl_field(0, Source0_20, (MR_Integer) 1))));
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
    case (MR_Integer) 3:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck_unify_var_functor.convert_field_access_cons_type_info\'/7", (MR_String) "not type");
        return;
      }
      break;
  }
  FieldNumber_34 = ((MR_Integer) ((MR_hl_field(0, FieldDefn_11, (MR_Integer) 4))));
  mercury__list__det_index1_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ConsArgTypes_18, FieldNumber_34, &conv0_FieldType_35);
  FieldType_35 = ((MR_Word) (conv0_FieldType_35));
  FieldName_36 = mdbcomp__sym_name__unqualify_name_1_f_0(FieldSymName_10);
  switch (AccessType_9) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Source_37;
        MR_Word ArgTypes_39;
        MR_Word Var_62;

        {
          Source_37 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Source_37, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(2, Source_37, 1) = ((MR_Box) (SourceType_21));
          MR_hl_field(2, Source_37, 2) = ((MR_Box) (ConsId_22));
          MR_hl_field(2, Source_37, 3) = ((MR_Box) (FieldName_36));
        }
        {
          ArgTypes_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, ArgTypes_39, 0) = ((MR_Box) (FunctorType_17));
          MR_hl_field(1, ArgTypes_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_62 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_62, 0) = ((MR_Box) (TVarSet0_15));
          MR_hl_field(0, Var_62, 1) = ((MR_Box) (ExistQVars_16));
          MR_hl_field(0, Var_62, 2) = ((MR_Box) (FieldType_35));
          MR_hl_field(0, Var_62, 3) = ((MR_Box) (ArgTypes_39));
          MR_hl_field(0, Var_62, 4) = ((MR_Box) (Constraints0_19));
          MR_hl_field(0, Var_62, 5) = ((MR_Box) (Source_37));
        }
        *ConsTypeInfo_14 = (MR_Word) ((MR_Word) (Var_62));
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word TVarsInField_40;
        MR_Word Source_89;

        {
          Source_89 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Source_89, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
          MR_hl_field(2, Source_89, 1) = ((MR_Box) (SourceType_21));
          MR_hl_field(2, Source_89, 2) = ((MR_Box) (ConsId_22));
          MR_hl_field(2, Source_89, 3) = ((MR_Box) (FieldName_36));
        }
        parse_tree__prog_type_scan__type_vars_in_type_2_p_0(FieldType_35, &TVarsInField_40);
        if ((TVarsInField_40 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Var_64;
          MR_Word Var_66;
          MR_Word ArgTypes_80;

          {
            Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_64, 0) = ((MR_Box) (FieldType_35));
            MR_hl_field(1, Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            ArgTypes_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, ArgTypes_80, 0) = ((MR_Box) (FunctorType_17));
            MR_hl_field(1, ArgTypes_80, 1) = ((MR_Box) (Var_64));
          }
          {
            Var_66 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_66, 0) = ((MR_Box) (TVarSet0_15));
            MR_hl_field(0, Var_66, 1) = ((MR_Box) (ExistQVars_16));
            MR_hl_field(0, Var_66, 2) = ((MR_Box) (FunctorType_17));
            MR_hl_field(0, Var_66, 3) = ((MR_Box) (ArgTypes_80));
            MR_hl_field(0, Var_66, 4) = ((MR_Box) (Constraints0_19));
            MR_hl_field(0, Var_66, 5) = ((MR_Box) (Source_89));
          }
          *ConsTypeInfo_14 = (MR_Word) ((MR_Word) (Var_66));
        }
        else
        {
          MR_Word ArgTypesWithoutField_43;
          MR_Word TVarsInOtherArgs_44;
          MR_Word ExistQVarsInFieldAndOthers_45;
          MR_Word Var_67;
          MR_Word Var_68;
          MR_Word Var_69;
          MR_Word Var_70;
          MR_Word Var_71;

          Var_67 = parse_tree__builtin_lib_types__int_type_0_f_0();
          mercury__list__det_replace_nth_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ConsArgTypes_18, FieldNumber_34, ((MR_Box) (Var_67)), &ArgTypesWithoutField_43);
          parse_tree__prog_type_scan__type_vars_in_types_2_p_0(ArgTypesWithoutField_43, &TVarsInOtherArgs_44);
          Var_68 = mercury__set__list_to_set_1_f_0((MR_Word) (&check_hlds__typecheck_unify_var_functor_scalar_common_1[2]), TVarsInField_40);
          Var_70 = mercury__set__list_to_set_1_f_0((MR_Word) (&check_hlds__typecheck_unify_var_functor_scalar_common_1[2]), TVarsInOtherArgs_44);
          Var_71 = mercury__set__list_to_set_1_f_0((MR_Word) (&check_hlds__typecheck_unify_var_functor_scalar_common_1[2]), OrigExistTVars_13);
          Var_69 = mercury__set__intersect_2_f_0((MR_Word) (&check_hlds__typecheck_unify_var_functor_scalar_common_1[2]), Var_70, Var_71);
          mercury__set__intersect_3_p_0((MR_Word) (&check_hlds__typecheck_unify_var_functor_scalar_common_1[2]), Var_68, Var_69, &ExistQVarsInFieldAndOthers_45);
          succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&check_hlds__typecheck_unify_var_functor_scalar_common_1[2]), ExistQVarsInFieldAndOthers_45);
          if (succeeded)
          {
            MR_Word TVarsOnlyInField0_46;
            MR_Word TVarsOnlyInField_47;
            MR_Integer NumNewTVars_48;
            MR_Word NewTVars_49;
            MR_Word TVarSet_50;
            MR_Word TVarRenaming_51;
            MR_Word RenamedFieldType_52;
            MR_Word CallTVars0_54;
            MR_Word CallTVars_55;
            MR_Word Constraints_56;
            MR_Word Var_72;
            MR_Word Var_73;
            MR_Word Var_75;
            MR_Word Var_77;
            MR_Word RetType_81;
            MR_Word ArgTypes_82;
            MR_Word Unproven0_93;
            MR_Word Assumed_94;
            MR_Word Redundant0_95;
            MR_Word Ancestors_96;
            MR_Word NewUnproven0_97;
            MR_Word NewUnproven_98;
            MR_Word Redundant_99;
            MR_Word Unproven_100;
            MR_Word Var_101;
            MR_Word Var_102;

            mercury__list__delete_elems_3_p_0((MR_Word) (&check_hlds__typecheck_unify_var_functor_scalar_common_1[2]), TVarsInField_40, TVarsInOtherArgs_44, &TVarsOnlyInField0_46);
            mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&check_hlds__typecheck_unify_var_functor_scalar_common_1[2]), TVarsOnlyInField0_46, &TVarsOnlyInField_47);
            mercury__list__length_2_p_0((MR_Word) (&check_hlds__typecheck_unify_var_functor_scalar_common_1[2]), TVarsOnlyInField_47, &NumNewTVars_48);
            mercury__varset__new_vars_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), NumNewTVars_48, &NewTVars_49, TVarSet0_15, &TVarSet_50);
            mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&check_hlds__typecheck_unify_var_functor_scalar_common_1[2]), (MR_Word) (&check_hlds__typecheck_unify_var_functor_scalar_common_1[2]), TVarsOnlyInField_47, NewTVars_49, &TVarRenaming_51);
            parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0(TVarRenaming_51, FieldType_35, &RenamedFieldType_52);
            parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0(TVarRenaming_51, FunctorType_17, &RetType_81);
            {
              Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_73, 0) = ((MR_Box) (FieldType_35));
              MR_hl_field(1, Var_73, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_72, 0) = ((MR_Box) (FunctorType_17));
              MR_hl_field(1, Var_72, 1) = ((MR_Box) (Var_73));
            }
            parse_tree__prog_type_scan__type_vars_in_types_2_p_0(Var_72, &CallTVars0_54);
            mercury__set__list_to_set_2_p_0((MR_Word) (&check_hlds__typecheck_unify_var_functor_scalar_common_1[2]), CallTVars0_54, &CallTVars_55);
            Unproven0_93 = ((MR_Word) ((MR_hl_field(0, Constraints0_19, (MR_Integer) 0))));
            Assumed_94 = ((MR_Word) ((MR_hl_field(0, Constraints0_19, (MR_Integer) 1))));
            Redundant0_95 = ((MR_Word) ((MR_hl_field(0, Constraints0_19, (MR_Integer) 2))));
            Ancestors_96 = ((MR_Word) ((MR_hl_field(0, Constraints0_19, (MR_Integer) 3))));
            {
              Var_101 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_101, 0) = ((MR_Box) (&check_hlds__typecheck_unify_var_functor_scalar_common_4[2]));
              MR_hl_field(0, Var_101, 1) = ((MR_Box) (check_hlds__typecheck_unify_var_functor__convert_field_access_cons_type_info_7_p_0_1));
              MR_hl_field(0, Var_101, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_101, 3) = ((MR_Box) (CallTVars_55));
            }
            mercury__list__filter_3_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), Var_101, Unproven0_93, &NewUnproven0_97);
            {
              Var_102 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_102, 0) = ((MR_Box) (&check_hlds__typecheck_unify_var_functor_scalar_common_9[0]));
              MR_hl_field(0, Var_102, 1) = ((MR_Box) (check_hlds__typecheck_unify_var_functor__convert_field_access_cons_type_info_7_p_0_2));
              MR_hl_field(0, Var_102, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_102, 3) = ((MR_Box) (TVarRenaming_51));
            }
            mercury__list__filter_map_3_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), Var_102, NewUnproven0_97, &NewUnproven_98);
            hlds__hlds_class__update_redundant_constraints_5_p_0(ClassTable_8, TVarSet_50, NewUnproven_98, Redundant0_95, &Redundant_99);
            mercury__list__append_3_p_1((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), NewUnproven_98, Unproven0_93, &Unproven_100);
            {
              Constraints_56 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Constraints_56, 0) = ((MR_Box) (Unproven_100));
              MR_hl_field(0, Constraints_56, 1) = ((MR_Box) (Assumed_94));
              MR_hl_field(0, Constraints_56, 2) = ((MR_Box) (Redundant_99));
              MR_hl_field(0, Constraints_56, 3) = ((MR_Box) (Ancestors_96));
            }
            {
              Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_75, 0) = ((MR_Box) (RenamedFieldType_52));
              MR_hl_field(1, Var_75, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              ArgTypes_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, ArgTypes_82, 0) = ((MR_Box) (FunctorType_17));
              MR_hl_field(1, ArgTypes_82, 1) = ((MR_Box) (Var_75));
            }
            {
              Var_77 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_77, 0) = ((MR_Box) (TVarSet_50));
              MR_hl_field(0, Var_77, 1) = ((MR_Box) (ExistQVars_16));
              MR_hl_field(0, Var_77, 2) = ((MR_Box) (RetType_81));
              MR_hl_field(0, Var_77, 3) = ((MR_Box) (ArgTypes_82));
              MR_hl_field(0, Var_77, 4) = ((MR_Box) (Constraints_56));
              MR_hl_field(0, Var_77, 5) = ((MR_Box) (Source_89));
            }
            *ConsTypeInfo_14 = (MR_Word) ((MR_Word) (Var_77));
          }
          else
          {
            MR_Word ExistQVarsInFieldAndOthers1_57;
            MR_Word Var_78;

            mercury__set__to_sorted_list_2_p_0((MR_Word) (&check_hlds__typecheck_unify_var_functor_scalar_common_1[2]), ExistQVarsInFieldAndOthers_45, &ExistQVarsInFieldAndOthers1_57);
            {
              Var_78 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Var_78, 0) = ((MR_Box) (FieldSymName_10));
              MR_hl_field(2, Var_78, 1) = ((MR_Box) (FieldDefn_11));
              MR_hl_field(2, Var_78, 2) = ((MR_Box) (TVarSet0_15));
              MR_hl_field(2, Var_78, 3) = ((MR_Box) (ExistQVarsInFieldAndOthers1_57));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *ConsTypeInfo_14 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Var_78));
            }
          }
        }
      }
      break;
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck_unify_var_functor__is_field_access_function_for_type_ctor_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word AccessType_6,
  MR_Word TypeCtor_7,
  MR_Word PredId_8)
{
  MR_bool succeeded;
  MR_Word PredInfo_9;
  MR_Word ArgTypes_10;
  MR_Word Var_24;
  MR_Word Var_25;
  MR_Word Var_26;

  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_5, PredId_8, &PredInfo_9);
  hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_9, &ArgTypes_10);
  succeeded = (ArgTypes_10 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    Var_25 = ((MR_Word) ((MR_hl_field(1, ArgTypes_10, (MR_Integer) 0))));
    Var_24 = ((MR_Word) ((MR_hl_field(1, ArgTypes_10, (MR_Integer) 1))));
    succeeded = (Var_24 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_26 = ((MR_Word) ((MR_hl_field(1, Var_24, (MR_Integer) 1))));
      switch (AccessType_6) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_21;

            succeeded = (Var_26 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(Var_25, &Var_21);
              if (succeeded)
                succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(TypeCtor_7, Var_21);
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ResultType_14;
            MR_Word Var_19;
            MR_Word Var_22;
            MR_Word Var_23;

            succeeded = (Var_26 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              ResultType_14 = ((MR_Word) ((MR_hl_field(1, Var_26, (MR_Integer) 0))));
              Var_19 = ((MR_Word) ((MR_hl_field(1, Var_26, (MR_Integer) 1))));
              succeeded = (Var_19 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(Var_25, &Var_22);
                if (succeeded)
                {
                  succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(TypeCtor_7, Var_22);
                  if (succeeded)
                  {
                    succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(ResultType_14, &Var_23);
                    if (succeeded)
                      succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(TypeCtor_7, Var_23);
                  }
                }
              }
            }
          }
          break;
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_unify_var_functor__type_assign_check_functor_type_builtin_5_p_0(
  MR_Word ConsType_6,
  MR_Word Y_7,
  MR_Word TypeAssign0_8,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_15,
  MR_Word * STATE_VARIABLE_TypeAssignSet_16)
{
  MR_bool succeeded;
  MR_Word VarTypes0_10;
  MR_Word MaybeTypeY_11;
  MR_Word VarTypes_12;

  check_hlds__type_assign__type_assign_get_var_types_2_p_0(TypeAssign0_8, &VarTypes0_10);
  parse_tree__vartypes__search_insert_var_type_5_p_0(Y_7, ConsType_6, &MaybeTypeY_11, VarTypes0_10, &VarTypes_12);
  if ((MaybeTypeY_11 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word TypeAssign_19;

    check_hlds__type_assign__type_assign_set_var_types_3_p_0(VarTypes_12, TypeAssign0_8, &TypeAssign_19);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_TypeAssignSet_16 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (TypeAssign_19));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_TypeAssignSet_0_15));
    }
  }
  else
  {
    MR_Word TypeY_13 = ((MR_Word) ((MR_hl_field(1, MaybeTypeY_11, (MR_Integer) 0))));
    MR_Word TypeAssign_14;

    succeeded = check_hlds__typecheck_util__type_assign_unify_type_4_p_0(ConsType_6, TypeY_13, TypeAssign0_8, &TypeAssign_14);
    if (succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_TypeAssignSet_16 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (TypeAssign_14));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_TypeAssignSet_0_15));
      }
    else
      *STATE_VARIABLE_TypeAssignSet_16 = STATE_VARIABLE_TypeAssignSet_0_15;
  }
}

static MR_Box MR_CALL 
check_hlds__typecheck_unify_var_functor__typecheck_unify_var_functor_std_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__2_2;

  conv2_HeadVar__2_2 = check_hlds__type_assign__project_cons_type_info_source_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
check_hlds__typecheck_unify_var_functor__typecheck_unify_var_functor_std_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv1_ConsTypeInfo_16;

  succeeded = check_hlds__typecheck_unify_var_functor__make_field_access_function_cons_type_info_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 8)))), ((MR_Word) (wrapper_arg_1)), &conv1_ConsTypeInfo_16);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv1_ConsTypeInfo_16));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

void MR_CALL 
check_hlds__typecheck_unify_var_functor__typecheck_unify_var_functor_std_10_p_0(
  MR_Word UnifyContext_11,
  MR_Word Context_12,
  MR_Word LHSVar_13,
  MR_Word ConsId_14,
  MR_Word ArgVars_15,
  MR_Word GoalId_16,
  MR_Word TypeAssignSet0_17,
  MR_Word * TypeAssignSet_18,
  MR_Word STATE_VARIABLE_Info_0_45,
  MR_Word * STATE_VARIABLE_Info_46)
{
  MR_bool succeeded;
  MR_Integer Arity_20;
  MR_Word ConsTypeInfos_21;
  MR_Word ConsErrors_22;
  MR_Word IsFieldAccessFunc_123;
  MR_Word PredStatus_124;
  MR_Word Var_126;

  mercury__list__length_2_p_0((MR_Word) (&check_hlds__typecheck_unify_var_functor_scalar_common_1[1]), ArgVars_15, &Arity_20);
  check_hlds__typecheck_info__typecheck_info_get_is_field_access_function_2_p_0(STATE_VARIABLE_Info_0_45, &IsFieldAccessFunc_123);
  succeeded = (IsFieldAccessFunc_123 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    PredStatus_124 = ((MR_Word) ((MR_hl_field(1, IsFieldAccessFunc_123, (MR_Integer) 0))));
    Var_126 = (MR_Word) (PredStatus_124);
    succeeded = (Var_126 != (MR_Word) ((MR_Unsigned) 0U));
  }
  if (succeeded)
  {
    MR_Word FieldAccessConsInfos_125;
    MR_Word TypeCtorInfo_21_137;
    MR_Word TypeInfo_22_138;
    MR_Word TypeCtorInfo_25_139;
    MR_Word TypeCtorInfo_26_140;
    MR_Word Name_127;
    MR_Word ModuleInfo_129;
    MR_Word AccessType_130;
    MR_Word FieldName_131;
    MR_Word CtorFieldTable_132;
    MR_Word FieldDefns_133;
    MR_Word UserArity_134;
    MR_Word Var_135;
    MR_Word Var_136;
    MR_Integer Var_141;
    MR_Integer Var_142;
    MR_Box conv0_FieldDefns_133;

    succeeded = ((MR_tag((MR_Word) ConsId_14)) == (MR_Integer) 1);
    if (succeeded)
    {
      Var_135 = (MR_Word) (MR_body((MR_Word) (ConsId_14), (MR_Integer) 1));
      Name_127 = ((MR_Word) ((MR_hl_field(0, Var_135, (MR_Integer) 0))));
      Var_141 = ((MR_Integer) ((MR_hl_field(0, Var_135, (MR_Integer) 1))));
      succeeded = (Arity_20 == Var_141);
      if (succeeded)
      {
        check_hlds__typecheck_info__typecheck_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_45, &ModuleInfo_129);
        succeeded = hlds__hlds_pred__is_field_access_function_name_5_p_0(ModuleInfo_129, Name_127, &Var_142, &AccessType_130, &FieldName_131);
        if (succeeded)
        {
          succeeded = (Arity_20 == Var_142);
          if (succeeded)
          {
            hlds__hlds_module__module_info_get_ctor_field_table_2_p_0(ModuleInfo_129, &CtorFieldTable_132);
            TypeCtorInfo_21_137 = (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0);
            TypeInfo_22_138 = (MR_Word) (&check_hlds__typecheck_unify_var_functor_scalar_common_1[3]);
            succeeded = mercury__map__search_3_p_0(TypeCtorInfo_21_137, TypeInfo_22_138, CtorFieldTable_132, ((MR_Box) (FieldName_131)), &conv0_FieldDefns_133);
            if (succeeded)
            {
              FieldDefns_133 = ((MR_Word) (conv0_FieldDefns_133));
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              TypeCtorInfo_25_139 = (MR_Word) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_hlds_ctor_field_defn_0);
              TypeCtorInfo_26_140 = (MR_Word) (&check_hlds__typecheck_unify_var_functor__check_hlds__typecheck_unify_var_functor__type_ctor_info_maybe_cons_type_info_0);
              UserArity_134 = (MR_Word) (Arity_20);
              {
                Var_136 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_136, 0) = ((MR_Box) (&check_hlds__typecheck_unify_var_functor_scalar_common_8[0]));
                MR_hl_field(0, Var_136, 1) = ((MR_Box) (check_hlds__typecheck_unify_var_functor__typecheck_unify_var_functor_std_10_p_0_1));
                MR_hl_field(0, Var_136, 2) = ((MR_Box) ((MR_Integer) 6));
                MR_hl_field(0, Var_136, 3) = ((MR_Box) (STATE_VARIABLE_Info_0_45));
                MR_hl_field(0, Var_136, 4) = ((MR_Box) (GoalId_16));
                MR_hl_field(0, Var_136, 5) = ((MR_Box) (Name_127));
                MR_hl_field(0, Var_136, 6) = ((MR_Box) (UserArity_134));
                MR_hl_field(0, Var_136, 7) = ((MR_Box) (AccessType_130));
                MR_hl_field(0, Var_136, 8) = ((MR_Box) (FieldName_131));
              }
              mercury__list__filter_map_3_p_0(TypeCtorInfo_25_139, TypeCtorInfo_26_140, Var_136, FieldDefns_133, &FieldAccessConsInfos_125);
              succeeded = MR_TRUE;
            }
          }
        }
      }
    }
    if (succeeded)
      check_hlds__typecheck_unify_var_functor__split_cons_errors_3_p_0(FieldAccessConsInfos_125, &ConsTypeInfos_21, &ConsErrors_22);
    else
    {
      ConsTypeInfos_21 = (MR_Word) ((MR_Unsigned) 0U);
      ConsErrors_22 = (MR_Word) ((MR_Unsigned) 0U);
    }
  }
  else
    check_hlds__typecheck_unify_var_functor__typecheck_info_get_ctor_list_2_6_p_0(STATE_VARIABLE_Info_0_45, ConsId_14, Arity_20, GoalId_16, &ConsTypeInfos_21, &ConsErrors_22);
  if ((ConsTypeInfos_21 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word ClauseContext_23;
    MR_Word GoalContext_24;
    MR_Word Spec_25;

    check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(STATE_VARIABLE_Info_0_45, &ClauseContext_23);
    *TypeAssignSet_18 = TypeAssignSet0_17;
    {
      GoalContext_24 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, GoalContext_24, 0) = ((MR_Box) (UnifyContext_11));
    }
    Spec_25 = check_hlds__typecheck_error_undef__report_error_undef_cons_5_f_0(ClauseContext_23, GoalContext_24, Context_12, ConsErrors_22, ConsId_14);
    check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(Spec_25, STATE_VARIABLE_Info_0_45, STATE_VARIABLE_Info_46);
  }
  else
  {
    MR_Word Var_121 = ((MR_Word) ((MR_hl_field(1, ConsTypeInfos_21, (MR_Integer) 1))));
    MR_Word Var_122 = ((MR_Word) ((MR_hl_field(1, ConsTypeInfos_21, (MR_Integer) 0))));

    if ((Var_121 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word ConsTypeAssignSet_32;
      MR_Word ArgsTypeAssignSet_35;
      MR_Word TypeAssignSet1_39;
      MR_Word STATE_VARIABLE_Info_56_56;
      MR_Word STATE_VARIABLE_ConsTypeAssignSet_15_151;

      check_hlds__typecheck_unify_var_functor__get_cons_type_assigns_for_cons_defn_4_p_0(Var_122, TypeAssignSet0_17, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_ConsTypeAssignSet_15_151);
      check_hlds__typecheck_unify_var_functor__get_cons_type_assigns_for_cons_defns_4_p_0(Var_121, TypeAssignSet0_17, STATE_VARIABLE_ConsTypeAssignSet_15_151, &ConsTypeAssignSet_32);
      succeeded = (ConsTypeAssignSet_32 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = (TypeAssignSet0_17 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
        }
      }
      if (succeeded)
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck_unify_var_functor.typecheck_unify_var_functor_std\'/10", (MR_String) "undefined cons\?");
          return;
        }
      check_hlds__typecheck_unify_var_functor__typecheck_var_functor_types_4_p_0(LHSVar_13, ConsTypeAssignSet_32, (MR_Word) ((MR_Unsigned) 0U), &ArgsTypeAssignSet_35);
      succeeded = (ArgsTypeAssignSet_35 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = (ConsTypeAssignSet_32 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
        }
      }
      if (succeeded)
      {
        MR_Word ConsIdSpec_38;

        ConsIdSpec_38 = check_hlds__typecheck_errors__report_error_unify_var_functor_result_8_f_0(STATE_VARIABLE_Info_0_45, UnifyContext_11, Context_12, LHSVar_13, ConsTypeInfos_21, ConsId_14, Arity_20, TypeAssignSet0_17);
        check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(ConsIdSpec_38, STATE_VARIABLE_Info_0_45, &STATE_VARIABLE_Info_56_56);
      }
      else
        STATE_VARIABLE_Info_56_56 = STATE_VARIABLE_Info_0_45;
      check_hlds__typecheck_unify_var_functor__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_102_117_110_99_116_111_114_95_97_114_103_95_116_121_112_101_115_95_95_91_49_93_95_48_5_p_0(ArgVars_15, ArgsTypeAssignSet_35, (MR_Word) ((MR_Unsigned) 0U), &TypeAssignSet1_39);
      if ((TypeAssignSet1_39 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *TypeAssignSet_18 = TypeAssignSet0_17;
        if ((ArgsTypeAssignSet_35 == (MR_Word) ((MR_Unsigned) 0U)))
          *STATE_VARIABLE_Info_46 = STATE_VARIABLE_Info_56_56;
        else
        {
          MR_Word ArgSpec_44;

          ArgSpec_44 = check_hlds__typecheck_errors__report_error_unify_var_functor_args_8_f_0(STATE_VARIABLE_Info_56_56, UnifyContext_11, Context_12, LHSVar_13, ConsTypeInfos_21, ConsId_14, ArgVars_15, ArgsTypeAssignSet_35);
          check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(ArgSpec_44, STATE_VARIABLE_Info_56_56, STATE_VARIABLE_Info_46);
        }
      }
      else
      {
        *TypeAssignSet_18 = TypeAssignSet1_39;
        *STATE_VARIABLE_Info_46 = STATE_VARIABLE_Info_56_56;
      }
    }
    else
    {
      MR_Word Sources_30;
      MR_Word Symbol_31;
      MR_Word ConsTypeAssignSet_101;
      MR_Word ArgsTypeAssignSet_104;
      MR_Word TypeAssignSet1_108;
      MR_Word STATE_VARIABLE_Info_51_114;
      MR_Word STATE_VARIABLE_Info_56_119;
      MR_Word ConsTypeInfo_155;
      MR_Word ConsTypeInfos_156;
      MR_Word STATE_VARIABLE_ConsTypeAssignSet_15_160;

      Sources_30 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_cons_type_info_0), (MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_cons_type_info_source_0), (MR_Word) (&check_hlds__typecheck_unify_var_functor_scalar_common_5[2]), ConsTypeInfos_21);
      {
        Symbol_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Symbol_31, 0) = ((MR_Box) (ConsId_14));
        MR_hl_field(1, Symbol_31, 1) = ((MR_Box) (Sources_30));
      }
      check_hlds__typecheck_info__typecheck_info_add_overloaded_symbol_4_p_0(Symbol_31, Context_12, STATE_VARIABLE_Info_0_45, &STATE_VARIABLE_Info_51_114);
      ConsTypeInfo_155 = ((MR_Word) ((MR_hl_field(1, ConsTypeInfos_21, (MR_Integer) 0))));
      ConsTypeInfos_156 = ((MR_Word) ((MR_hl_field(1, ConsTypeInfos_21, (MR_Integer) 1))));
      check_hlds__typecheck_unify_var_functor__get_cons_type_assigns_for_cons_defn_4_p_0(ConsTypeInfo_155, TypeAssignSet0_17, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_ConsTypeAssignSet_15_160);
      check_hlds__typecheck_unify_var_functor__get_cons_type_assigns_for_cons_defns_4_p_0(ConsTypeInfos_156, TypeAssignSet0_17, STATE_VARIABLE_ConsTypeAssignSet_15_160, &ConsTypeAssignSet_101);
      succeeded = (ConsTypeAssignSet_101 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = (TypeAssignSet0_17 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
        }
      }
      if (succeeded)
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck_unify_var_functor.typecheck_unify_var_functor_std\'/10", (MR_String) "undefined cons\?");
          return;
        }
      check_hlds__typecheck_unify_var_functor__typecheck_var_functor_types_4_p_0(LHSVar_13, ConsTypeAssignSet_101, (MR_Word) ((MR_Unsigned) 0U), &ArgsTypeAssignSet_104);
      succeeded = (ArgsTypeAssignSet_104 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = (ConsTypeAssignSet_101 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
        }
      }
      if (succeeded)
      {
        MR_Word ConsIdSpec_77;

        ConsIdSpec_77 = check_hlds__typecheck_errors__report_error_unify_var_functor_result_8_f_0(STATE_VARIABLE_Info_51_114, UnifyContext_11, Context_12, LHSVar_13, ConsTypeInfos_21, ConsId_14, Arity_20, TypeAssignSet0_17);
        check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(ConsIdSpec_77, STATE_VARIABLE_Info_51_114, &STATE_VARIABLE_Info_56_119);
      }
      else
        STATE_VARIABLE_Info_56_119 = STATE_VARIABLE_Info_51_114;
      check_hlds__typecheck_unify_var_functor__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_102_117_110_99_116_111_114_95_97_114_103_95_116_121_112_101_115_95_95_91_49_93_95_48_5_p_0(ArgVars_15, ArgsTypeAssignSet_104, (MR_Word) ((MR_Unsigned) 0U), &TypeAssignSet1_108);
      if ((TypeAssignSet1_108 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *TypeAssignSet_18 = TypeAssignSet0_17;
        if ((ArgsTypeAssignSet_104 == (MR_Word) ((MR_Unsigned) 0U)))
          *STATE_VARIABLE_Info_46 = STATE_VARIABLE_Info_56_119;
        else
        {
          MR_Word ArgSpec_89;

          ArgSpec_89 = check_hlds__typecheck_errors__report_error_unify_var_functor_args_8_f_0(STATE_VARIABLE_Info_56_119, UnifyContext_11, Context_12, LHSVar_13, ConsTypeInfos_21, ConsId_14, ArgVars_15, ArgsTypeAssignSet_104);
          check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(ArgSpec_89, STATE_VARIABLE_Info_56_119, STATE_VARIABLE_Info_46);
        }
      }
      else
      {
        *TypeAssignSet_18 = TypeAssignSet1_108;
        *STATE_VARIABLE_Info_46 = STATE_VARIABLE_Info_56_119;
      }
    }
  }
}

static void MR_CALL 
check_hlds__typecheck_unify_var_functor__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_102_117_110_99_116_111_114_95_97_114_103_95_116_121_112_101_115_95_95_91_49_93_95_48_5_p_0(
  MR_Word ArgVars_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_4,
  MR_Word * STATE_VARIABLE_TypeAssignSet_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_TypeAssignSet_5 = STATE_VARIABLE_TypeAssignSet_0_4;
    else
    {
      MR_Word ArgsTypeAssign_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgsTypeAssigns_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word TypeAssign_16 = ((MR_Word) ((MR_hl_field(0, ArgsTypeAssign_13, (MR_Integer) 0))));
      MR_Word ArgTypes_17 = ((MR_Word) ((MR_hl_field(0, ArgsTypeAssign_13, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_TypeAssignSet_22_22;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_TypeAssignSet_0_4;

      if ((ArgVars_2 == (MR_Word) ((MR_Unsigned) 0U)))
        if ((ArgTypes_17 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            STATE_VARIABLE_TypeAssignSet_22_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, STATE_VARIABLE_TypeAssignSet_22_22, 0) = ((MR_Box) (TypeAssign_16));
            MR_hl_field(1, STATE_VARIABLE_TypeAssignSet_22_22, 1) = ((MR_Box) (STATE_VARIABLE_TypeAssignSet_0_4));
          }
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck_unify_var_functor.type_assign_vars_have_types\'/6", (MR_String) "length mismatch");
            return;
          }
      else
      {
        MR_Word Var_52 = ((MR_Word) ((MR_hl_field(1, ArgVars_2, (MR_Integer) 1))));
        MR_Word Var_53 = ((MR_Word) ((MR_hl_field(1, ArgVars_2, (MR_Integer) 0))));

        if ((ArgTypes_17 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck_unify_var_functor.type_assign_vars_have_types\'/6", (MR_String) "length mismatch");
            return;
          }
        else
        {
          MR_Word Type_46 = ((MR_Word) ((MR_hl_field(1, ArgTypes_17, (MR_Integer) 0))));
          MR_Word Types_47 = ((MR_Word) ((MR_hl_field(1, ArgTypes_17, (MR_Integer) 1))));
          MR_Word TypeAssignSet1_50;

          check_hlds__typecheck_util__type_assign_var_has_type_5_p_0(TypeAssign_16, Var_53, Type_46, (MR_Word) ((MR_Unsigned) 0U), &TypeAssignSet1_50);
          check_hlds__typecheck_unify_var_functor__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_97_115_115_105_103_110_115_95_118_97_114_115_95_104_97_118_101_95_116_121_112_101_115_95_95_91_49_93_95_48_6_p_0(TypeAssignSet1_50, Var_52, Types_47, STATE_VARIABLE_TypeAssignSet_0_4, &STATE_VARIABLE_TypeAssignSet_22_22);
        }
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = ArgsTypeAssigns_14;
      next_value_of_STATE_VARIABLE_TypeAssignSet_0_4 = STATE_VARIABLE_TypeAssignSet_22_22;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_TypeAssignSet_0_4 = next_value_of_STATE_VARIABLE_TypeAssignSet_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__typecheck_unify_var_functor__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_97_115_115_105_103_110_115_95_118_97_114_115_95_104_97_118_101_95_116_121_112_101_115_95_95_91_49_93_95_48_6_p_0(
  MR_Word HeadVar__2_2,
  MR_Word ArgVars_3,
  MR_Word Types_4,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_5,
  MR_Word * STATE_VARIABLE_TypeAssignSet_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_TypeAssignSet_6 = STATE_VARIABLE_TypeAssignSet_0_5;
    else
    {
      MR_Word TypeAssign_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word TypeAssigns_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_TypeAssignSet_21_21;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_TypeAssignSet_0_5;

      if ((ArgVars_3 == (MR_Word) ((MR_Unsigned) 0U)))
        if ((Types_4 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            STATE_VARIABLE_TypeAssignSet_21_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, STATE_VARIABLE_TypeAssignSet_21_21, 0) = ((MR_Box) (TypeAssign_14));
            MR_hl_field(1, STATE_VARIABLE_TypeAssignSet_21_21, 1) = ((MR_Box) (STATE_VARIABLE_TypeAssignSet_0_5));
          }
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck_unify_var_functor.type_assign_vars_have_types\'/6", (MR_String) "length mismatch");
            return;
          }
      else
      {
        MR_Word Var_51 = ((MR_Word) ((MR_hl_field(1, ArgVars_3, (MR_Integer) 1))));
        MR_Word Var_52 = ((MR_Word) ((MR_hl_field(1, ArgVars_3, (MR_Integer) 0))));

        if ((Types_4 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck_unify_var_functor.type_assign_vars_have_types\'/6", (MR_String) "length mismatch");
            return;
          }
        else
        {
          MR_Word Type_45 = ((MR_Word) ((MR_hl_field(1, Types_4, (MR_Integer) 0))));
          MR_Word Types_46 = ((MR_Word) ((MR_hl_field(1, Types_4, (MR_Integer) 1))));
          MR_Word TypeAssignSet1_49;

          check_hlds__typecheck_util__type_assign_var_has_type_5_p_0(TypeAssign_14, Var_52, Type_45, (MR_Word) ((MR_Unsigned) 0U), &TypeAssignSet1_49);
          check_hlds__typecheck_unify_var_functor__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_97_115_115_105_103_110_115_95_118_97_114_115_95_104_97_118_101_95_116_121_112_101_115_95_95_91_49_93_95_48_6_p_0(TypeAssignSet1_49, Var_51, Types_46, STATE_VARIABLE_TypeAssignSet_0_5, &STATE_VARIABLE_TypeAssignSet_21_21);
        }
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = TypeAssigns_15;
      next_value_of_STATE_VARIABLE_TypeAssignSet_0_5 = STATE_VARIABLE_TypeAssignSet_21_21;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_TypeAssignSet_0_5 = next_value_of_STATE_VARIABLE_TypeAssignSet_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__typecheck_unify_var_functor__typecheck_var_functor_types_4_p_0(
  MR_Word Var_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ArgsTypeAssignSet_0_3,
  MR_Word * STATE_VARIABLE_ArgsTypeAssignSet_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ArgsTypeAssignSet_4 = STATE_VARIABLE_ArgsTypeAssignSet_0_3;
    else
    {
      MR_Word ConsTypeAssign_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ConsTypeAssigns_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_ArgsTypeAssignSet_15_15;
      MR_Word TypeAssign0_16 = ((MR_Word) ((MR_hl_field(0, ConsTypeAssign_10, (MR_Integer) 0))));
      MR_Word ConsType_17 = ((MR_Word) ((MR_hl_field(0, ConsTypeAssign_10, (MR_Integer) 1))));
      MR_Word ConsArgTypes_18 = ((MR_Word) ((MR_hl_field(0, ConsTypeAssign_10, (MR_Integer) 2))));
      MR_Word Source0_19 = ((MR_Word) ((MR_hl_field(0, ConsTypeAssign_10, (MR_Integer) 3))));
      MR_Word VarTypes0_20;
      MR_Word MaybeOldVarType_21;
      MR_Word VarTypes_22;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_ArgsTypeAssignSet_0_3;

      check_hlds__type_assign__type_assign_get_var_types_2_p_0(TypeAssign0_16, &VarTypes0_20);
      parse_tree__vartypes__search_insert_var_type_5_p_0(Var_1, ConsType_17, &MaybeOldVarType_21, VarTypes0_20, &VarTypes_22);
      if ((MaybeOldVarType_21 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_28;
        MR_Word Var_29;
        MR_Word TypeAssign_30;
        MR_Word ArgsTypeAssign_31;

        check_hlds__type_assign__type_assign_set_var_types_3_p_0(VarTypes_22, TypeAssign0_16, &TypeAssign_30);
        Var_28 = check_hlds__typecheck_util__empty_hlds_constraints_0_f_0();
        {
          Var_29 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_29, 0) = ((MR_Box) (Source0_19));
        }
        {
          ArgsTypeAssign_31 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ArgsTypeAssign_31, 0) = ((MR_Box) (TypeAssign_30));
          MR_hl_field(0, ArgsTypeAssign_31, 1) = ((MR_Box) (ConsArgTypes_18));
          MR_hl_field(0, ArgsTypeAssign_31, 2) = ((MR_Box) (Var_28));
          MR_hl_field(0, ArgsTypeAssign_31, 3) = ((MR_Box) (Var_29));
        }
        {
          STATE_VARIABLE_ArgsTypeAssignSet_15_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_ArgsTypeAssignSet_15_15, 0) = ((MR_Box) (ArgsTypeAssign_31));
          MR_hl_field(1, STATE_VARIABLE_ArgsTypeAssignSet_15_15, 1) = ((MR_Box) (STATE_VARIABLE_ArgsTypeAssignSet_0_3));
        }
      }
      else
      {
        MR_Word OldVarType_23 = ((MR_Word) ((MR_hl_field(1, MaybeOldVarType_21, (MR_Integer) 0))));
        MR_Word TypeAssign_24;

        succeeded = check_hlds__typecheck_util__type_assign_unify_type_4_p_0(ConsType_17, OldVarType_23, TypeAssign0_16, &TypeAssign_24);
        if (succeeded)
        {
          MR_Word ArgsTypeAssign_25;
          MR_Word Var_26;
          MR_Word Var_27;

          Var_26 = check_hlds__typecheck_util__empty_hlds_constraints_0_f_0();
          {
            Var_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_27, 0) = ((MR_Box) (Source0_19));
          }
          {
            ArgsTypeAssign_25 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, ArgsTypeAssign_25, 0) = ((MR_Box) (TypeAssign_24));
            MR_hl_field(0, ArgsTypeAssign_25, 1) = ((MR_Box) (ConsArgTypes_18));
            MR_hl_field(0, ArgsTypeAssign_25, 2) = ((MR_Box) (Var_26));
            MR_hl_field(0, ArgsTypeAssign_25, 3) = ((MR_Box) (Var_27));
          }
          {
            STATE_VARIABLE_ArgsTypeAssignSet_15_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, STATE_VARIABLE_ArgsTypeAssignSet_15_15, 0) = ((MR_Box) (ArgsTypeAssign_25));
            MR_hl_field(1, STATE_VARIABLE_ArgsTypeAssignSet_15_15, 1) = ((MR_Box) (STATE_VARIABLE_ArgsTypeAssignSet_0_3));
          }
        }
        else
          STATE_VARIABLE_ArgsTypeAssignSet_15_15 = STATE_VARIABLE_ArgsTypeAssignSet_0_3;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = ConsTypeAssigns_11;
      next_value_of_STATE_VARIABLE_ArgsTypeAssignSet_0_3 = STATE_VARIABLE_ArgsTypeAssignSet_15_15;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_ArgsTypeAssignSet_0_3 = next_value_of_STATE_VARIABLE_ArgsTypeAssignSet_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__typecheck_unify_var_functor__get_cons_type_assigns_for_cons_defns_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word TypeAssigns_2,
  MR_Word STATE_VARIABLE_ConsTypeAssignSet_0_3,
  MR_Word * STATE_VARIABLE_ConsTypeAssignSet_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ConsTypeAssignSet_4 = STATE_VARIABLE_ConsTypeAssignSet_0_3;
    else
    {
      MR_Word ConsTypeInfo_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ConsTypeInfos_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_ConsTypeAssignSet_15_15;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ConsTypeAssignSet_0_3;

      check_hlds__typecheck_unify_var_functor__get_cons_type_assigns_for_cons_defn_4_p_0(ConsTypeInfo_9, TypeAssigns_2, STATE_VARIABLE_ConsTypeAssignSet_0_3, &STATE_VARIABLE_ConsTypeAssignSet_15_15);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = ConsTypeInfos_10;
      next_value_of_STATE_VARIABLE_ConsTypeAssignSet_0_3 = STATE_VARIABLE_ConsTypeAssignSet_15_15;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ConsTypeAssignSet_0_3 = next_value_of_STATE_VARIABLE_ConsTypeAssignSet_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__typecheck_unify_var_functor__get_cons_type_assigns_for_cons_defn_4_p_0(
  MR_Word ConsTypeInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ConsTypeAssignSet_0_3,
  MR_Word * STATE_VARIABLE_ConsTypeAssignSet_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ConsTypeAssignSet_4 = STATE_VARIABLE_ConsTypeAssignSet_0_3;
    else
    {
      MR_Word TypeAssign_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word TypeAssigns_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ConsTypeAssign_13;
      MR_Word STATE_VARIABLE_ConsTypeAssignSet_16_16;
      MR_Word ConsTypeVarSet_17 = ((MR_Word) ((MR_hl_field(0, ConsTypeInfo_1, (MR_Integer) 0))));
      MR_Word ConsExistQVars0_18 = ((MR_Word) ((MR_hl_field(0, ConsTypeInfo_1, (MR_Integer) 1))));
      MR_Word ConsType0_19 = ((MR_Word) ((MR_hl_field(0, ConsTypeInfo_1, (MR_Integer) 2))));
      MR_Word ArgTypes0_20 = ((MR_Word) ((MR_hl_field(0, ConsTypeInfo_1, (MR_Integer) 3))));
      MR_Word ClassConstraints0_21 = ((MR_Word) ((MR_hl_field(0, ConsTypeInfo_1, (MR_Integer) 4))));
      MR_Word Source_22 = ((MR_Word) ((MR_hl_field(0, ConsTypeInfo_1, (MR_Integer) 5))));
      MR_Word ConsType_23;
      MR_Word ArgTypes_24;
      MR_Word TypeAssign2_25;
      MR_Word ConstraintsToAdd_26;
      MR_Word OldConstraints_34;
      MR_Word ClassConstraints_35;
      MR_Word TypeAssign_36;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_ConsTypeAssignSet_0_3;

      succeeded = mercury__varset__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), ConsTypeVarSet_17);
      if (succeeded)
      {
        ConsType_23 = ConsType0_19;
        ArgTypes_24 = ArgTypes0_20;
        TypeAssign2_25 = TypeAssign_10;
        ConstraintsToAdd_26 = ClassConstraints0_21;
      }
      else
      {
        MR_Word TypeAssign1_27;
        MR_Word ConsType1_28;
        MR_Word ArgTypes1_29;
        MR_Word Renaming_30;
        MR_Word Var_37;
        MR_Word Var_38;

        {
          Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_37, 0) = ((MR_Box) (ConsType0_19));
          MR_hl_field(1, Var_37, 1) = ((MR_Box) (ArgTypes0_20));
        }
        check_hlds__typecheck_util__type_assign_rename_apart_6_p_0(TypeAssign_10, ConsTypeVarSet_17, Var_37, &TypeAssign1_27, &Var_38, &Renaming_30);
        succeeded = (Var_38 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ConsType1_28 = ((MR_Word) ((MR_hl_field(1, Var_38, (MR_Integer) 0))));
          ArgTypes1_29 = ((MR_Word) ((MR_hl_field(1, Var_38, (MR_Integer) 1))));
          {
            MR_Word ConsExistQVars_31;
            MR_Word ExistQTVars0_32;
            MR_Word ExistQTVars_33;

            parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_p_0(Renaming_30, ConsExistQVars0_18, &ConsExistQVars_31);
            check_hlds__type_util__apply_variable_renaming_to_constraints_3_p_0(Renaming_30, ClassConstraints0_21, &ConstraintsToAdd_26);
            check_hlds__type_assign__type_assign_get_existq_tvars_2_p_0(TypeAssign1_27, &ExistQTVars0_32);
            ExistQTVars_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__typecheck_unify_var_functor_scalar_common_1[2]), ConsExistQVars_31, ExistQTVars0_32);
            check_hlds__type_assign__type_assign_set_existq_tvars_3_p_0(ExistQTVars_33, TypeAssign1_27, &TypeAssign2_25);
            ConsType_23 = ConsType1_28;
            ArgTypes_24 = ArgTypes1_29;
          }
        }
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck_unify_var_functor.get_cons_type_assign\'/3", (MR_String) "type_assign_rename_apart failed");
            return;
          }
      }
      check_hlds__type_assign__type_assign_get_typeclass_constraints_2_p_0(TypeAssign2_25, &OldConstraints_34);
      hlds__hlds_class__merge_hlds_constraints_3_p_0(ConstraintsToAdd_26, OldConstraints_34, &ClassConstraints_35);
      check_hlds__type_assign__type_assign_set_typeclass_constraints_3_p_0(ClassConstraints_35, TypeAssign2_25, &TypeAssign_36);
      {
        ConsTypeAssign_13 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ConsTypeAssign_13, 0) = ((MR_Box) (TypeAssign_36));
        MR_hl_field(0, ConsTypeAssign_13, 1) = ((MR_Box) (ConsType_23));
        MR_hl_field(0, ConsTypeAssign_13, 2) = ((MR_Box) (ArgTypes_24));
        MR_hl_field(0, ConsTypeAssign_13, 3) = ((MR_Box) (Source_22));
      }
      {
        STATE_VARIABLE_ConsTypeAssignSet_16_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_ConsTypeAssignSet_16_16, 0) = ((MR_Box) (ConsTypeAssign_13));
        MR_hl_field(1, STATE_VARIABLE_ConsTypeAssignSet_16_16, 1) = ((MR_Box) (STATE_VARIABLE_ConsTypeAssignSet_0_3));
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = TypeAssigns_11;
      next_value_of_STATE_VARIABLE_ConsTypeAssignSet_0_3 = STATE_VARIABLE_ConsTypeAssignSet_16_16;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_ConsTypeAssignSet_0_3 = next_value_of_STATE_VARIABLE_ConsTypeAssignSet_0_3;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck_unify_var_functor__typecheck_info_get_ctor_list_2_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv1_ConsTypeInfo_16;

  succeeded = check_hlds__typecheck_unify_var_functor__make_field_access_function_cons_type_info_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 8)))), ((MR_Word) (wrapper_arg_1)), &conv1_ConsTypeInfo_16);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv1_ConsTypeInfo_16));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_unify_var_functor__typecheck_info_get_ctor_list_2_6_p_0(
  MR_Word Info_7,
  MR_Word ConsId_8,
  MR_Integer Arity_9,
  MR_Word GoalId_10,
  MR_Word * ConsInfos_11,
  MR_Word * ConsErrors_12)
{
  MR_bool succeeded = ((MR_tag((MR_Word) ConsId_8)) == (MR_Integer) 1);
  MR_Word DuConsInfos_13;
  MR_Word DuConsErrors_14;
  MR_Word FieldAccessConsInfos_16;
  MR_Word FieldAccessConsErrors_17;
  MR_Word BuiltinConsInfos_23;
  MR_Word TupleConsInfos_34;
  MR_Word PredConsInfos_36;
  MR_Word ApplyConsInfos_38;
  MR_Word Var_57;
  MR_Word Var_58;
  MR_Word Var_59;
  MR_Word Var_60;
  MR_Word DuCtor_67;
  MR_Word FieldAccessMaybeConsInfosPrime_15;
  MR_Word TypeCtorInfo_21_94;
  MR_Word TypeInfo_22_95;
  MR_Word TypeCtorInfo_25_96;
  MR_Word TypeCtorInfo_26_97;
  MR_Word Name_84;
  MR_Word ModuleInfo_86;
  MR_Word AccessType_87;
  MR_Word FieldName_88;
  MR_Word CtorFieldTable_89;
  MR_Word FieldDefns_90;
  MR_Word UserArity_91;
  MR_Word Var_92;
  MR_Word Var_93;
  MR_Integer Var_98;
  MR_Integer Var_99;
  MR_Box conv0_FieldDefns_90;
  MR_String BuiltInTypeName_18;
  MR_Integer TupleArity_24;
  MR_Word PredConsInfosPrime_35;
  MR_Word ApplyConsInfosPrime_37;

  if (succeeded)
  {
    DuCtor_67 = (MR_Word) (MR_body((MR_Word) (ConsId_8), (MR_Integer) 1));
    {
      MR_Word Name_68 = ((MR_Word) ((MR_hl_field(0, DuCtor_67, (MR_Integer) 0))));
      MR_Integer Arity_69 = ((MR_Integer) ((MR_hl_field(0, DuCtor_67, (MR_Integer) 1))));
      MR_Word ConsIdTypeCtor_70 = ((MR_Word) ((MR_hl_field(0, DuCtor_67, (MR_Integer) 2))));
      MR_Word ConsTable_71;
      MR_Word PlainConsInfos_73;
      MR_Word PlainConsErrors_74;
      MR_Word ConsDefns_72;
      MR_Word OrigDuCtor_76;
      MR_Word ExistQConsDefns_77;
      MR_Word OrigName_75;

      check_hlds__typecheck_info__typecheck_info_get_cons_table_2_p_0(Info_7, &ConsTable_71);
      succeeded = hlds__hlds_cons__search_cons_table_3_p_0(ConsTable_71, DuCtor_67, &ConsDefns_72);
      if (succeeded)
        check_hlds__typecheck_unify_var_functor__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_118_101_114_116_95_99_111_110_115_95_100_101_102_110_95_108_105_115_116_95_95_91_51_93_95_48_7_p_0(Info_7, GoalId_10, DuCtor_67, ConsDefns_72, &PlainConsInfos_73, &PlainConsErrors_74);
      else
      {
        PlainConsInfos_73 = (MR_Word) ((MR_Unsigned) 0U);
        PlainConsErrors_74 = (MR_Word) ((MR_Unsigned) 0U);
      }
      succeeded = parse_tree__prog_type__remove_new_prefix_2_p_0(Name_68, &OrigName_75);
      if (succeeded)
      {
        {
          OrigDuCtor_76 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, OrigDuCtor_76, 0) = ((MR_Box) (OrigName_75));
          MR_hl_field(0, OrigDuCtor_76, 1) = ((MR_Box) (Arity_69));
          MR_hl_field(0, OrigDuCtor_76, 2) = ((MR_Box) (ConsIdTypeCtor_70));
        }
        succeeded = hlds__hlds_cons__search_cons_table_3_p_0(ConsTable_71, OrigDuCtor_76, &ExistQConsDefns_77);
      }
      if (succeeded)
      {
        MR_Word UnivQuantConsInfos_78;
        MR_Word UnivQuantConsErrors_79;

        check_hlds__typecheck_unify_var_functor__convert_cons_defn_list_7_p_1(Info_7, GoalId_10, (MR_Integer) 1, OrigDuCtor_76, ExistQConsDefns_77, &UnivQuantConsInfos_78, &UnivQuantConsErrors_79);
        DuConsInfos_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_cons_type_info_0), PlainConsInfos_73, UnivQuantConsInfos_78);
        DuConsErrors_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__typecheck_error_undef__check_hlds__typecheck_error_undef__type_ctor_info_cons_error_0), PlainConsErrors_74, UnivQuantConsErrors_79);
      }
      else
      {
        DuConsInfos_13 = PlainConsInfos_73;
        DuConsErrors_14 = PlainConsErrors_74;
      }
    }
  }
  else
  {
    DuConsInfos_13 = (MR_Word) ((MR_Unsigned) 0U);
    DuConsErrors_14 = (MR_Word) ((MR_Unsigned) 0U);
  }
  succeeded = ((MR_tag((MR_Word) ConsId_8)) == (MR_Integer) 1);
  if (succeeded)
  {
    Var_92 = (MR_Word) (MR_body((MR_Word) (ConsId_8), (MR_Integer) 1));
    Name_84 = ((MR_Word) ((MR_hl_field(0, Var_92, (MR_Integer) 0))));
    Var_98 = ((MR_Integer) ((MR_hl_field(0, Var_92, (MR_Integer) 1))));
    succeeded = (Arity_9 == Var_98);
    if (succeeded)
    {
      check_hlds__typecheck_info__typecheck_info_get_module_info_2_p_0(Info_7, &ModuleInfo_86);
      succeeded = hlds__hlds_pred__is_field_access_function_name_5_p_0(ModuleInfo_86, Name_84, &Var_99, &AccessType_87, &FieldName_88);
      if (succeeded)
      {
        succeeded = (Arity_9 == Var_99);
        if (succeeded)
        {
          hlds__hlds_module__module_info_get_ctor_field_table_2_p_0(ModuleInfo_86, &CtorFieldTable_89);
          TypeCtorInfo_21_94 = (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0);
          TypeInfo_22_95 = (MR_Word) (&check_hlds__typecheck_unify_var_functor_scalar_common_1[3]);
          succeeded = mercury__map__search_3_p_0(TypeCtorInfo_21_94, TypeInfo_22_95, CtorFieldTable_89, ((MR_Box) (FieldName_88)), &conv0_FieldDefns_90);
          if (succeeded)
          {
            FieldDefns_90 = ((MR_Word) (conv0_FieldDefns_90));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            TypeCtorInfo_25_96 = (MR_Word) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_hlds_ctor_field_defn_0);
            TypeCtorInfo_26_97 = (MR_Word) (&check_hlds__typecheck_unify_var_functor__check_hlds__typecheck_unify_var_functor__type_ctor_info_maybe_cons_type_info_0);
            UserArity_91 = (MR_Word) (Arity_9);
            {
              Var_93 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_93, 0) = ((MR_Box) (&check_hlds__typecheck_unify_var_functor_scalar_common_8[0]));
              MR_hl_field(0, Var_93, 1) = ((MR_Box) (check_hlds__typecheck_unify_var_functor__typecheck_info_get_ctor_list_2_6_p_0_1));
              MR_hl_field(0, Var_93, 2) = ((MR_Box) ((MR_Integer) 6));
              MR_hl_field(0, Var_93, 3) = ((MR_Box) (Info_7));
              MR_hl_field(0, Var_93, 4) = ((MR_Box) (GoalId_10));
              MR_hl_field(0, Var_93, 5) = ((MR_Box) (Name_84));
              MR_hl_field(0, Var_93, 6) = ((MR_Box) (UserArity_91));
              MR_hl_field(0, Var_93, 7) = ((MR_Box) (AccessType_87));
              MR_hl_field(0, Var_93, 8) = ((MR_Box) (FieldName_88));
            }
            mercury__list__filter_map_3_p_0(TypeCtorInfo_25_96, TypeCtorInfo_26_97, Var_93, FieldDefns_90, &FieldAccessMaybeConsInfosPrime_15);
            succeeded = MR_TRUE;
          }
        }
      }
    }
  }
  if (succeeded)
    check_hlds__typecheck_unify_var_functor__split_cons_errors_3_p_0(FieldAccessMaybeConsInfosPrime_15, &FieldAccessConsInfos_16, &FieldAccessConsErrors_17);
  else
  {
    FieldAccessConsInfos_16 = (MR_Word) ((MR_Unsigned) 0U);
    FieldAccessConsErrors_17 = (MR_Word) ((MR_Unsigned) 0U);
  }
  succeeded = (Arity_9 == (MR_Integer) 0);
  if (succeeded)
    succeeded = check_hlds__typecheck_unify_var_functor__builtin_atomic_type_2_p_0(ConsId_8, &BuiltInTypeName_18);
  if (succeeded)
  {
    MR_Word TypeCtor_19;
    MR_Word ConsType_20;
    MR_Word ConsTypeVarSet_21;
    MR_Word ConsInfo_22;
    MR_Word Var_39;
    MR_Word Var_44;
    MR_Word Var_45;

    {
      Var_39 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_39, 0) = ((MR_Box) (BuiltInTypeName_18));
    }
    {
      TypeCtor_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeCtor_19, 0) = ((MR_Box) (Var_39));
      MR_hl_field(0, TypeCtor_19, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    parse_tree__prog_type_construct__construct_type_3_p_0(TypeCtor_19, (MR_Word) ((MR_Unsigned) 0U), &ConsType_20);
    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &ConsTypeVarSet_21);
    Var_44 = check_hlds__typecheck_util__empty_hlds_constraints_0_f_0();
    {
      Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_45, 0) = ((MR_Box) (BuiltInTypeName_18));
    }
    {
      ConsInfo_22 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ConsInfo_22, 0) = ((MR_Box) (ConsTypeVarSet_21));
      MR_hl_field(0, ConsInfo_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, ConsInfo_22, 2) = ((MR_Box) (ConsType_20));
      MR_hl_field(0, ConsInfo_22, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, ConsInfo_22, 4) = ((MR_Box) (Var_44));
      MR_hl_field(0, ConsInfo_22, 5) = ((MR_Box) (Var_45));
    }
    {
      BuiltinConsInfos_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, BuiltinConsInfos_23, 0) = ((MR_Box) (ConsInfo_22));
      MR_hl_field(1, BuiltinConsInfos_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  else
    BuiltinConsInfos_23 = (MR_Word) ((MR_Unsigned) 0U);
  if (((MR_tag((MR_Word) ConsId_8)) == (MR_Integer) 1))
  {
    MR_Word Var_47 = (MR_Word) (MR_body((MR_Word) (ConsId_8), (MR_Integer) 1));
    MR_Word Var_48 = ((MR_Word) ((MR_hl_field(0, Var_47, (MR_Integer) 0))));
    MR_String Var_49;

    TupleArity_24 = ((MR_Integer) ((MR_hl_field(0, Var_47, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_48)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_49 = ((MR_String) ((MR_hl_field(0, Var_48, (MR_Integer) 0))));
      succeeded = (strcmp(Var_49, (MR_String) "{}") == 0);
    }
  }
  else
  if (((((MR_tag((MR_Word) ConsId_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConsId_8, (MR_Integer) 0)))) == (MR_Integer) 4))))
  {
    TupleArity_24 = ((MR_Integer) ((MR_hl_field(3, ConsId_8, (MR_Integer) 1))));
    succeeded = MR_TRUE;
  }
  else
    succeeded = MR_FALSE;
  if (succeeded)
  {
    MR_Word TupleConsTypeVarSet0_26;
    MR_Word TupleArgTVars_27;
    MR_Word TupleConsTypeVarSet_28;
    MR_Word TupleArgTypes_29;
    MR_Word TupleTypeCtor_30;
    MR_Word TupleConsType_31;
    MR_Word TupleConsInfo_33;
    MR_Word Var_50;
    MR_Word Var_53;

    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TupleConsTypeVarSet0_26);
    mercury__varset__new_vars_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TupleArity_24, &TupleArgTVars_27, TupleConsTypeVarSet0_26, &TupleConsTypeVarSet_28);
    Var_50 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__typecheck_unify_var_functor_scalar_common_1[2]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0));
    parse_tree__prog_type__var_list_to_type_list_3_p_0(Var_50, TupleArgTVars_27, &TupleArgTypes_29);
    {
      TupleTypeCtor_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TupleTypeCtor_30, 0) = ((MR_Box) (&check_hlds__typecheck_unify_var_functor_scalar_common_2[0]));
      MR_hl_field(0, TupleTypeCtor_30, 1) = ((MR_Box) (TupleArity_24));
    }
    parse_tree__prog_type_construct__construct_type_3_p_0(TupleTypeCtor_30, TupleArgTypes_29, &TupleConsType_31);
    Var_53 = check_hlds__typecheck_util__empty_hlds_constraints_0_f_0();
    {
      TupleConsInfo_33 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TupleConsInfo_33, 0) = ((MR_Box) (TupleConsTypeVarSet_28));
      MR_hl_field(0, TupleConsInfo_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, TupleConsInfo_33, 2) = ((MR_Box) (TupleConsType_31));
      MR_hl_field(0, TupleConsInfo_33, 3) = ((MR_Box) (TupleArgTypes_29));
      MR_hl_field(0, TupleConsInfo_33, 4) = ((MR_Box) (Var_53));
      MR_hl_field(0, TupleConsInfo_33, 5) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_unify_var_functor_scalar_common_2[1])));
    }
    {
      TupleConsInfos_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, TupleConsInfos_34, 0) = ((MR_Box) (TupleConsInfo_33));
      MR_hl_field(1, TupleConsInfos_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  else
    TupleConsInfos_34 = (MR_Word) ((MR_Unsigned) 0U);
  succeeded = check_hlds__typecheck_unify_var_functor__builtin_pred_type_5_p_0(Info_7, ConsId_8, Arity_9, GoalId_10, &PredConsInfosPrime_35);
  if (succeeded)
    PredConsInfos_36 = PredConsInfosPrime_35;
  else
    PredConsInfos_36 = (MR_Word) ((MR_Unsigned) 0U);
  succeeded = check_hlds__typecheck_unify_var_functor__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_97_112_112_108_121_95_116_121_112_101_95_95_91_49_93_95_48_4_p_0(ConsId_8, Arity_9, &ApplyConsInfosPrime_37);
  if (succeeded)
    ApplyConsInfos_38 = ApplyConsInfosPrime_37;
  else
    ApplyConsInfos_38 = (MR_Word) ((MR_Unsigned) 0U);
  Var_60 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_cons_type_info_0), PredConsInfos_36, ApplyConsInfos_38);
  Var_59 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_cons_type_info_0), TupleConsInfos_34, Var_60);
  Var_58 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_cons_type_info_0), BuiltinConsInfos_23, Var_59);
  Var_57 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_cons_type_info_0), FieldAccessConsInfos_16, Var_58);
  *ConsInfos_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_cons_type_info_0), DuConsInfos_13, Var_57);
  *ConsErrors_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__typecheck_error_undef__check_hlds__typecheck_error_undef__type_ctor_info_cons_error_0), DuConsErrors_14, FieldAccessConsErrors_17);
}

static MR_bool MR_CALL 
check_hlds__typecheck_unify_var_functor__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_97_112_112_108_121_95_116_121_112_101_95_95_91_49_93_95_48_4_p_0(
  MR_Word ConsId_6,
  MR_Integer Arity_7,
  MR_Word * ConsTypeInfos_8)
{
  MR_bool succeeded = ((MR_tag((MR_Word) ConsId_6)) == (MR_Integer) 1);
  MR_String ApplyName_9;
  MR_String ApplyNameToUse_12;
  MR_Word Purity_13;
  MR_Integer Arity1_14;
  MR_Word TypeVarSet_15;
  MR_Word FuncType_16;
  MR_Word ArgTypes_17;
  MR_Word RetType_18;
  MR_Word ExistQVars_19;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Integer Var_22;
  MR_Integer Var_23;
  MR_Word Var_24;
  MR_Word Var_25;
  MR_Word Var_26;
  MR_Word Var_27;
  MR_Integer lo_0;
  MR_Integer hi_1;
  MR_Integer mid_2;
  MR_Integer result_3;

  if (succeeded)
  {
    Var_20 = (MR_Word) (MR_body((MR_Word) (ConsId_6), (MR_Integer) 1));
    Var_21 = ((MR_Word) ((MR_hl_field(0, Var_20, (MR_Integer) 0))));
    succeeded = ((MR_tag((MR_Word) Var_21)) == (MR_Integer) 0);
    if (succeeded)
    {
      ApplyName_9 = ((MR_String) ((MR_hl_field(0, Var_21, (MR_Integer) 0))));
      // binary string jump switch
      ;
      lo_0 = (MR_Integer) 0;
      hi_1 = (MR_Integer) 3;
      do
      {
        mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
        result_3 = MR_strcmp(ApplyName_9, ((&check_hlds__typecheck_unify_var_functor_vector_common_7[0 + mid_2]))->check_hlds__typecheck_unify_var_functor__vector_common_type_7_0__vct_7_f_0);
        if ((result_3 == (MR_Integer) 0))
        {
          switch (((&check_hlds__typecheck_unify_var_functor_vector_common_7[0 + mid_2]))->check_hlds__typecheck_unify_var_functor__vector_common_type_7_0__vct_7_f_1) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                // case ""
                ;
                ApplyNameToUse_12 = (MR_String) "apply";
                Purity_13 = (MR_Integer) 0;
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 1:
              {
                // case "apply"
                ;
                ApplyNameToUse_12 = ApplyName_9;
                Purity_13 = (MR_Integer) 0;
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 2:
              {
                // case "impure_apply"
                ;
                ApplyNameToUse_12 = ApplyName_9;
                Purity_13 = (MR_Integer) 2;
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 3:
              {
                // case "semipure_apply"
                ;
                ApplyNameToUse_12 = ApplyName_9;
                Purity_13 = (MR_Integer) 1;
                succeeded = MR_TRUE;
              }
              break;
          }
          // jump out of search loop
          ;
          goto label_0;
        }
        else
        if ((result_3 < (MR_Integer) 0))
          hi_1 = (MR_Integer) ((MR_Unsigned) mid_2 - (MR_Unsigned) 1);
        else
          lo_0 = (MR_Integer) ((MR_Unsigned) mid_2 + (MR_Unsigned) 1);
      }
      while ((lo_0 <= hi_1));
      succeeded = MR_FALSE;
    label_0:;
      if (succeeded)
      {
        Var_22 = (MR_Integer) 1;
        succeeded = (Arity_7 >= Var_22);
        if (succeeded)
        {
          Var_23 = (MR_Integer) 1;
          Arity1_14 = (MR_Integer) ((MR_Unsigned) Arity_7 - (MR_Unsigned) Var_23);
          check_hlds__typecheck_util__higher_order_func_type_6_p_0(Purity_13, Arity1_14, &TypeVarSet_15, &FuncType_16, &ArgTypes_17, &RetType_18);
          ExistQVars_19 = (MR_Word) ((MR_Unsigned) 0U);
          {
            Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_25, 0) = ((MR_Box) (FuncType_16));
            MR_hl_field(1, Var_25, 1) = ((MR_Box) (ArgTypes_17));
          }
          Var_26 = check_hlds__typecheck_util__empty_hlds_constraints_0_f_0();
          {
            Var_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_27, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_27, 1) = ((MR_Box) (ApplyNameToUse_12));
          }
          {
            Var_24 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_24, 0) = ((MR_Box) (TypeVarSet_15));
            MR_hl_field(0, Var_24, 1) = ((MR_Box) (ExistQVars_19));
            MR_hl_field(0, Var_24, 2) = ((MR_Box) (RetType_18));
            MR_hl_field(0, Var_24, 3) = ((MR_Box) (Var_25));
            MR_hl_field(0, Var_24, 4) = ((MR_Box) (Var_26));
            MR_hl_field(0, Var_24, 5) = ((MR_Box) (Var_27));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *ConsTypeInfos_8 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Var_24));
            MR_hl_field(1, base, 1) = ((MR_Box) (ExistQVars_19));
          }
          succeeded = MR_TRUE;
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_unify_var_functor__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_118_101_114_116_95_99_111_110_115_95_100_101_102_110_95_108_105_115_116_95_95_91_51_93_95_48_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7)
{
  if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word ConsDefn_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 0))));
    MR_Word ConsDefns_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 1))));
    MR_Word HeadMaybeConsTypeInfo_20;
    MR_Word TailConsTypeInfos_21;
    MR_Word TailConsErrors_22;

    check_hlds__typecheck_unify_var_functor__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_118_101_114_116_95_99_111_110_115_95_100_101_102_110_95_95_91_51_93_95_48_6_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__4_4, ConsDefn_16, &HeadMaybeConsTypeInfo_20);
    check_hlds__typecheck_unify_var_functor__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_118_101_114_116_95_99_111_110_115_95_100_101_102_110_95_108_105_115_116_95_95_91_51_93_95_48_7_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__4_4, ConsDefns_17, &TailConsTypeInfos_21, &TailConsErrors_22);
    if (((MR_tag((MR_Word) HeadMaybeConsTypeInfo_20)) == (MR_Integer) 1))
    {
      MR_Word HeadConsError_24 = ((MR_Word) ((MR_hl_field(1, HeadMaybeConsTypeInfo_20, (MR_Integer) 0))));

      *HeadVar__6_6 = TailConsTypeInfos_21;
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__7_7 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (HeadConsError_24));
        MR_hl_field(1, base, 1) = ((MR_Box) (TailConsErrors_22));
      }
    }
    else
    {
      MR_Word HeadConsTypeInfo_23 = (MR_Word) ((MR_Word) (HeadMaybeConsTypeInfo_20));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__6_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (HeadConsTypeInfo_23));
        MR_hl_field(1, base, 1) = ((MR_Box) (TailConsTypeInfos_21));
      }
      *HeadVar__7_7 = TailConsErrors_22;
    }
  }
}

static MR_Box MR_CALL 
check_hlds__typecheck_unify_var_functor__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_118_101_114_116_95_99_111_110_115_95_100_101_102_110_95_95_91_51_93_95_48_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_47;

  conv0_LambdaHeadVar__2_47 = check_hlds__typecheck_unify_var_functor__IntroducedFrom__func__convert_cons_defn__502__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_47));
  return wrapper_arg_2;
}

static void MR_CALL 
check_hlds__typecheck_unify_var_functor__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_118_101_114_116_95_99_111_110_115_95_100_101_102_110_95_95_91_51_93_95_48_6_p_0(
  MR_Word Info_7,
  MR_Word GoalId_8,
  MR_Word DuCtor_10,
  MR_Word ConsDefn_11,
  MR_Word * ConsTypeInfo_12)
{
  MR_bool succeeded;
  MR_Word TypeCtor_13 = ((MR_Word) ((MR_hl_field(0, ConsDefn_11, (MR_Integer) 0))));
  MR_Word ConsTypeVarSet_14 = ((MR_Word) ((MR_hl_field(0, ConsDefn_11, (MR_Integer) 1))));
  MR_Word ConsTypeParams_15 = ((MR_Word) ((MR_hl_field(0, ConsDefn_11, (MR_Integer) 2))));
  MR_Word ConsTypeKinds_16 = ((MR_Word) ((MR_hl_field(0, ConsDefn_11, (MR_Integer) 3))));
  MR_Word MaybeExistConstraints_17 = ((MR_Word) ((MR_hl_field(0, ConsDefn_11, (MR_Integer) 4))));
  MR_Word Args_18 = ((MR_Word) ((MR_hl_field(0, ConsDefn_11, (MR_Integer) 5))));
  MR_Word ArgTypes_20;
  MR_Word TypeTable_22;
  MR_Word TypeDefn_23;
  MR_Word Body_24;
  MR_Word PredId_25;
  MR_Word ModuleInfo_26;
  MR_Word PredInfo_27;
  MR_Word PredStatus_28;
  MR_Word BodyDu_29;
  MR_Word GoalType_31;
  MR_Word Var_48;
  MR_Word Var_49;
  MR_Word Var_50;

  ArgTypes_20 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&check_hlds__typecheck_unify_var_functor_scalar_common_5[1]), Args_18);
  check_hlds__typecheck_info__typecheck_info_get_type_table_2_p_0(Info_7, &TypeTable_22);
  hlds__hlds_data__lookup_type_ctor_defn_3_p_0(TypeTable_22, TypeCtor_13, &TypeDefn_23);
  hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_23, &Body_24);
  check_hlds__typecheck_info__typecheck_info_get_pred_id_2_p_0(Info_7, &PredId_25);
  check_hlds__typecheck_info__typecheck_info_get_module_info_2_p_0(Info_7, &ModuleInfo_26);
  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_26, PredId_25, &PredInfo_27);
  hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo_27, &PredStatus_28);
  succeeded = ((MR_tag((MR_Word) Body_24)) == (MR_Integer) 0);
  if (succeeded)
  {
    BodyDu_29 = (MR_Word) ((MR_Word) (Body_24));
    Var_48 = ((MR_Word) ((MR_hl_field(0, BodyDu_29, (MR_Integer) 4))));
    succeeded = (Var_48 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      hlds__hlds_pred__pred_info_get_goal_type_2_p_0(PredInfo_27, &GoalType_31);
      succeeded = ((MR_tag((MR_Word) GoalType_31)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_49 = ((MR_Unsigned) ((MR_hl_field(0, GoalType_31, (MR_Integer) 0))) & (MR_Integer) 3);
        succeeded = (Var_49 == (MR_Integer) 3);
      }
      succeeded = !(succeeded);
      if (succeeded)
      {
        succeeded = hlds__hlds_pred__is_unify_index_or_compare_pred_1_p_0(PredInfo_27);
        succeeded = !(succeeded);
        if (succeeded)
        {
          Var_50 = (MR_Word) (PredStatus_28);
          succeeded = (Var_50 != (MR_Word) ((MR_Unsigned) 0U));
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Word Var_51;

    {
      Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_51, 0) = ((MR_Box) (TypeCtor_13));
      MR_hl_field(1, Var_51, 1) = ((MR_Box) (TypeDefn_23));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *ConsTypeInfo_12 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_51));
    }
  }
  else
  {
    MR_Word TypeStatus_32;
    MR_Word Var_52;
    MR_Word Var_53;

    hlds__hlds_data__get_type_defn_status_2_p_0(TypeDefn_23, &TypeStatus_32);
    Var_52 = (MR_Word) (TypeStatus_32);
    succeeded = (Var_52 == (MR_Word) ((MR_Unsigned) 4U));
    if (succeeded)
    {
      succeeded = hlds__hlds_pred__is_unify_index_or_compare_pred_1_p_0(PredInfo_27);
      succeeded = !(succeeded);
      if (succeeded)
      {
        Var_53 = (MR_Word) (PredStatus_28);
        succeeded = (Var_53 != (MR_Word) ((MR_Unsigned) 0U));
      }
    }
    if (succeeded)
      *ConsTypeInfo_12 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_unify_var_functor_scalar_common_2[2]));
    else
    {
      MR_Word ConsTypeArgs_33;
      MR_Word ConsType_34;
      MR_Word ExistProgConstraints_37;
      MR_Word ProgConstraints_41;
      MR_Word ExistQVars_42;
      MR_Word ClassTable_43;
      MR_Word Constraints_44;
      MR_Word Var_57;
      MR_Word Var_58;

      parse_tree__prog_type__var_list_to_type_list_3_p_0(ConsTypeKinds_16, ConsTypeParams_15, &ConsTypeArgs_33);
      parse_tree__prog_type_construct__construct_type_3_p_0(TypeCtor_13, ConsTypeArgs_33, &ConsType_34);
      if ((MaybeExistConstraints_17 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        ExistQVars_42 = (MR_Word) ((MR_Unsigned) 0U);
        ExistProgConstraints_37 = (MR_Word) ((MR_Unsigned) 0U);
      }
      else
      {
        MR_Word ExistConstraints_38 = (MR_Word) (MR_body((MR_Word) (MaybeExistConstraints_17), (MR_Integer) 1));

        ExistQVars_42 = ((MR_Word) ((MR_hl_field(0, ExistConstraints_38, (MR_Integer) 0))));
        ExistProgConstraints_37 = ((MR_Word) ((MR_hl_field(0, ExistConstraints_38, (MR_Integer) 1))));
      }
      {
        ProgConstraints_41 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ProgConstraints_41, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, ProgConstraints_41, 1) = ((MR_Box) (ExistProgConstraints_37));
      }
      hlds__hlds_module__module_info_get_class_table_2_p_0(ModuleInfo_26, &ClassTable_43);
      hlds__hlds_class__make_body_hlds_constraints_5_p_0(ClassTable_43, ConsTypeVarSet_14, GoalId_8, ProgConstraints_41, &Constraints_44);
      {
        Var_58 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_58, 0) = ((MR_Box) (TypeCtor_13));
        MR_hl_field(0, Var_58, 1) = ((MR_Box) (DuCtor_10));
      }
      {
        Var_57 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_57, 0) = ((MR_Box) (ConsTypeVarSet_14));
        MR_hl_field(0, Var_57, 1) = ((MR_Box) (ExistQVars_42));
        MR_hl_field(0, Var_57, 2) = ((MR_Box) (ConsType_34));
        MR_hl_field(0, Var_57, 3) = ((MR_Box) (ArgTypes_20));
        MR_hl_field(0, Var_57, 4) = ((MR_Box) (Constraints_44));
        MR_hl_field(0, Var_57, 5) = ((MR_Box) (Var_58));
      }
      *ConsTypeInfo_12 = (MR_Word) ((MR_Word) (Var_57));
    }
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck_unify_var_functor__builtin_pred_type_5_p_0(
  MR_Word Info_6,
  MR_Word ConsId_7,
  MR_Integer Arity_8,
  MR_Word GoalId_9,
  MR_Word * ConsTypeInfos_10)
{
  MR_bool succeeded = ((MR_tag((MR_Word) ConsId_7)) == (MR_Integer) 1);
  MR_Word SymName_11;
  MR_Word PredicateTable_14;
  MR_Word IsFullyQualified_15;
  MR_Word PredIds_16;
  MR_Word Var_20;

  if (succeeded)
  {
    Var_20 = (MR_Word) (MR_body((MR_Word) (ConsId_7), (MR_Integer) 1));
    SymName_11 = ((MR_Word) ((MR_hl_field(0, Var_20, (MR_Integer) 0))));
    check_hlds__typecheck_info__typecheck_info_get_predicate_table_2_p_0(Info_6, &PredicateTable_14);
    check_hlds__typecheck_info__typecheck_info_get_calls_are_fully_qualified_2_p_0(Info_6, &IsFullyQualified_15);
    hlds__pred_table__predicate_table_lookup_sym_4_p_0(PredicateTable_14, IsFullyQualified_15, SymName_11, &PredIds_16);
    if ((PredIds_16 == (MR_Word) ((MR_Unsigned) 0U)))
      *ConsTypeInfos_10 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word PredIdTable_19;

      hlds__pred_table__predicate_table_get_pred_id_table_2_p_0(PredicateTable_14, &PredIdTable_19);
      check_hlds__typecheck_unify_var_functor__accumulate_cons_type_infos_for_pred_ids_7_p_0(Info_6, PredIdTable_19, GoalId_9, PredIds_16, Arity_8, (MR_Word) ((MR_Unsigned) 0U), ConsTypeInfos_10);
    }
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_unify_var_functor__accumulate_cons_type_infos_for_pred_ids_7_p_0(
  MR_Word Info_1,
  MR_Word PredTable_2,
  MR_Word GoalId_3,
  MR_Word HeadVar__4_4,
  MR_Integer Arity_5,
  MR_Word STATE_VARIABLE_ConsTypeInfos_0_6,
  MR_Word * STATE_VARIABLE_ConsTypeInfos_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ConsTypeInfos_7 = STATE_VARIABLE_ConsTypeInfos_0_6;
    else
    {
      MR_Word PredId_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
      MR_Word PredIds_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_ConsTypeInfos_24_24;
      MR_Word ModuleInfo_25;
      MR_Word ClassTable_26;
      MR_Word PredInfo_27;
      MR_Integer PredFormArityInt_28;
      MR_Word IsPredOrFunc_29;
      MR_Word PredClassContext_30;
      MR_Word PredTypeVarSet_31;
      MR_Word PredExistQVars_32;
      MR_Word CompleteArgTypes_33;
      MR_Word Purity_34;
      MR_Word Var_48;
      MR_Box conv0_PredInfo_27;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_ConsTypeInfos_0_6;

      check_hlds__typecheck_info__typecheck_info_get_module_info_2_p_0(Info_1, &ModuleInfo_25);
      hlds__hlds_module__module_info_get_class_table_2_p_0(ModuleInfo_25, &ClassTable_26);
      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredTable_2, ((MR_Box) (PredId_18)), &conv0_PredInfo_27);
      PredInfo_27 = ((MR_Word) (conv0_PredInfo_27));
      hlds__hlds_pred__pred_info_get_orig_arity_2_p_0(PredInfo_27, &Var_48);
      PredFormArityInt_28 = (MR_Integer) (Var_48);
      hlds__hlds_pred__pred_info_get_is_pred_or_func_2_p_0(PredInfo_27, &IsPredOrFunc_29);
      hlds__hlds_pred__pred_info_get_class_context_2_p_0(PredInfo_27, &PredClassContext_30);
      hlds__hlds_pred__pred_info_get_arg_types_4_p_0(PredInfo_27, &PredTypeVarSet_31, &PredExistQVars_32, &CompleteArgTypes_33);
      hlds__hlds_pred__pred_info_get_purity_2_p_0(PredInfo_27, &Purity_34);
      succeeded = (IsPredOrFunc_29 == (MR_Integer) 0);
      if (succeeded)
      {
        succeeded = (PredFormArityInt_28 >= Arity_5);
        if (succeeded)
          succeeded = (PredExistQVars_32 == (MR_Word) ((MR_Unsigned) 0U));
      }
      if (succeeded)
      {
        MR_Word ArgTypes_35;
        MR_Word PredTypeParams_36;
        MR_Word PredType_37;
        MR_Word PredConstraints_38;
        MR_Word ConsTypeInfo_39;
        MR_Word Var_49;

        mercury__list__det_split_list_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Arity_5, CompleteArgTypes_33, &ArgTypes_35, &PredTypeParams_36);
        parse_tree__prog_type_construct__construct_higher_order_pred_type_3_p_0(Purity_34, PredTypeParams_36, &PredType_37);
        hlds__hlds_class__make_body_hlds_constraints_5_p_0(ClassTable_26, PredTypeVarSet_31, GoalId_3, PredClassContext_30, &PredConstraints_38);
        {
          Var_49 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_49, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, Var_49, 1) = ((MR_Box) (PredId_18));
        }
        {
          ConsTypeInfo_39 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ConsTypeInfo_39, 0) = ((MR_Box) (PredTypeVarSet_31));
          MR_hl_field(0, ConsTypeInfo_39, 1) = ((MR_Box) (PredExistQVars_32));
          MR_hl_field(0, ConsTypeInfo_39, 2) = ((MR_Box) (PredType_37));
          MR_hl_field(0, ConsTypeInfo_39, 3) = ((MR_Box) (ArgTypes_35));
          MR_hl_field(0, ConsTypeInfo_39, 4) = ((MR_Box) (PredConstraints_38));
          MR_hl_field(0, ConsTypeInfo_39, 5) = ((MR_Box) (Var_49));
        }
        {
          STATE_VARIABLE_ConsTypeInfos_24_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_ConsTypeInfos_24_24, 0) = ((MR_Box) (ConsTypeInfo_39));
          MR_hl_field(1, STATE_VARIABLE_ConsTypeInfos_24_24, 1) = ((MR_Box) (STATE_VARIABLE_ConsTypeInfos_0_6));
        }
      }
      else
      {
        MR_Integer PredAsFuncArity_40;
        MR_Integer Var_50;

        succeeded = (IsPredOrFunc_29 == (MR_Integer) 1);
        if (succeeded)
        {
          Var_50 = (MR_Integer) 1;
          PredAsFuncArity_40 = (MR_Integer) ((MR_Unsigned) PredFormArityInt_28 - (MR_Unsigned) Var_50);
          succeeded = (PredAsFuncArity_40 >= Arity_5);
          if (succeeded)
          {
            succeeded = (PredExistQVars_32 == (MR_Word) ((MR_Unsigned) 0U));
            if (!(succeeded))
              succeeded = (PredAsFuncArity_40 == Arity_5);
          }
        }
        if (succeeded)
        {
          MR_Word FuncArgTypes_41;
          MR_Word FuncTypeParams_42;
          MR_Word FuncArgTypeParams_43;
          MR_Word FuncReturnTypeParam_44;
          MR_Word FuncType_45;
          MR_Word Var_51;
          MR_Word PredConstraints_52;
          MR_Word ConsTypeInfo_53;
          MR_Box conv1_FuncReturnTypeParam_44;

          mercury__list__det_split_list_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Arity_5, CompleteArgTypes_33, &FuncArgTypes_41, &FuncTypeParams_42);
          parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), FuncTypeParams_42, &FuncArgTypeParams_43, &conv1_FuncReturnTypeParam_44);
          FuncReturnTypeParam_44 = ((MR_Word) (conv1_FuncReturnTypeParam_44));
          if ((FuncArgTypeParams_43 == (MR_Word) ((MR_Unsigned) 0U)))
            FuncType_45 = FuncReturnTypeParam_44;
          else
            parse_tree__prog_type_construct__construct_higher_order_func_type_4_p_0(Purity_34, FuncArgTypeParams_43, FuncReturnTypeParam_44, &FuncType_45);
          hlds__hlds_class__make_body_hlds_constraints_5_p_0(ClassTable_26, PredTypeVarSet_31, GoalId_3, PredClassContext_30, &PredConstraints_52);
          {
            Var_51 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_51, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(3, Var_51, 1) = ((MR_Box) (PredId_18));
          }
          {
            ConsTypeInfo_53 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, ConsTypeInfo_53, 0) = ((MR_Box) (PredTypeVarSet_31));
            MR_hl_field(0, ConsTypeInfo_53, 1) = ((MR_Box) (PredExistQVars_32));
            MR_hl_field(0, ConsTypeInfo_53, 2) = ((MR_Box) (FuncType_45));
            MR_hl_field(0, ConsTypeInfo_53, 3) = ((MR_Box) (FuncArgTypes_41));
            MR_hl_field(0, ConsTypeInfo_53, 4) = ((MR_Box) (PredConstraints_52));
            MR_hl_field(0, ConsTypeInfo_53, 5) = ((MR_Box) (Var_51));
          }
          {
            STATE_VARIABLE_ConsTypeInfos_24_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, STATE_VARIABLE_ConsTypeInfos_24_24, 0) = ((MR_Box) (ConsTypeInfo_53));
            MR_hl_field(1, STATE_VARIABLE_ConsTypeInfos_24_24, 1) = ((MR_Box) (STATE_VARIABLE_ConsTypeInfos_0_6));
          }
        }
        else
          STATE_VARIABLE_ConsTypeInfos_24_24 = STATE_VARIABLE_ConsTypeInfos_0_6;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = PredIds_19;
      next_value_of_STATE_VARIABLE_ConsTypeInfos_0_6 = STATE_VARIABLE_ConsTypeInfos_24_24;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_ConsTypeInfos_0_6 = next_value_of_STATE_VARIABLE_ConsTypeInfos_0_6;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck_unify_var_functor__builtin_atomic_type_2_p_0(
  MR_Word ConsId_3,
  MR_String * TypeName_4)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) ConsId_3)) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Integer) 1:
      {
        MR_Word DuCtor_9 = (MR_Word) (MR_body((MR_Word) (ConsId_3), (MR_Integer) 1));
        MR_Word SymName_10 = ((MR_Word) ((MR_hl_field(0, DuCtor_9, (MR_Integer) 0))));
        MR_Integer Arity_11 = ((MR_Integer) ((MR_hl_field(0, DuCtor_9, (MR_Integer) 1))));
        MR_String String_13;
        MR_Char Var_14;

        succeeded = ((MR_tag((MR_Word) SymName_10)) == (MR_Integer) 0);
        if (succeeded)
        {
          String_13 = ((MR_String) ((MR_hl_field(0, SymName_10, (MR_Integer) 0))));
          succeeded = mercury__string__char_to_string_2_p_1(&Var_14, String_13);
          if (succeeded)
          {
            succeeded = (Arity_11 == (MR_Integer) 0);
            if (succeeded)
            {
              *TypeName_4 = (MR_String) "character";
              succeeded = MR_TRUE;
            }
          }
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, ConsId_3, (MR_Integer) 0))))) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 5:
          {
            MR_Word IntConst_5 = ((MR_Word) ((MR_hl_field(3, ConsId_3, (MR_Integer) 1))));

            *TypeName_4 = parse_tree__prog_data__type_name_of_int_const_1_f_0(IntConst_5);
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 6:
          {
            *TypeName_4 = (MR_String) "float";
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 7:
          {
            *TypeName_4 = (MR_String) "character";
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 8:
          {
            *TypeName_4 = (MR_String) "string";
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 9:
          {
            MR_Word IDCKind_15 = ((MR_Unsigned) ((MR_hl_field(3, ConsId_3, (MR_Integer) 1))) & (MR_Integer) 7);

            *TypeName_4 = ((&check_hlds__typecheck_unify_var_functor_vector_common_6[0 + IDCKind_15]))->check_hlds__typecheck_unify_var_functor__vector_common_type_6_0__vct_6_f_0;
            succeeded = MR_TRUE;
          }
          break;
      }
      break;
  }
  return succeeded;
}

static MR_Box MR_CALL 
check_hlds__typecheck_unify_var_functor__convert_cons_defn_list_7_p_1_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_47;

  conv0_LambdaHeadVar__2_47 = check_hlds__typecheck_unify_var_functor__IntroducedFrom__func__convert_cons_defn__502__3_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_47));
  return wrapper_arg_2;
}

static void MR_CALL 
check_hlds__typecheck_unify_var_functor__convert_cons_defn_list_7_p_1(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7)
{
  MR_bool succeeded;

  if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word ConsDefn_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 0))));
    MR_Word ConsDefns_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 1))));
    MR_Word TypeCtor_25 = ((MR_Word) ((MR_hl_field(0, ConsDefn_16, (MR_Integer) 0))));
    MR_Word ConsTypeVarSet_26 = ((MR_Word) ((MR_hl_field(0, ConsDefn_16, (MR_Integer) 1))));
    MR_Word ConsTypeParams_27 = ((MR_Word) ((MR_hl_field(0, ConsDefn_16, (MR_Integer) 2))));
    MR_Word ConsTypeKinds_28 = ((MR_Word) ((MR_hl_field(0, ConsDefn_16, (MR_Integer) 3))));
    MR_Word MaybeExistConstraints_29 = ((MR_Word) ((MR_hl_field(0, ConsDefn_16, (MR_Integer) 4))));
    MR_Word Args_30 = ((MR_Word) ((MR_hl_field(0, ConsDefn_16, (MR_Integer) 5))));
    MR_Word ArgTypes_32;
    MR_Word TypeTable_33;
    MR_Word TypeDefn_34;
    MR_Word Body_35;
    MR_Word PredId_36;
    MR_Word ModuleInfo_37;
    MR_Word PredInfo_38;
    MR_Word PredStatus_39;
    MR_Word BodyDu_40;
    MR_Word GoalType_42;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word Var_59;

    ArgTypes_32 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&check_hlds__typecheck_unify_var_functor_scalar_common_5[0]), Args_30);
    check_hlds__typecheck_info__typecheck_info_get_type_table_2_p_0(HeadVar__1_1, &TypeTable_33);
    hlds__hlds_data__lookup_type_ctor_defn_3_p_0(TypeTable_33, TypeCtor_25, &TypeDefn_34);
    hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_34, &Body_35);
    check_hlds__typecheck_info__typecheck_info_get_pred_id_2_p_0(HeadVar__1_1, &PredId_36);
    check_hlds__typecheck_info__typecheck_info_get_module_info_2_p_0(HeadVar__1_1, &ModuleInfo_37);
    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_37, PredId_36, &PredInfo_38);
    hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo_38, &PredStatus_39);
    succeeded = ((MR_tag((MR_Word) Body_35)) == (MR_Integer) 0);
    if (succeeded)
    {
      BodyDu_40 = (MR_Word) ((MR_Word) (Body_35));
      Var_57 = ((MR_Word) ((MR_hl_field(0, BodyDu_40, (MR_Integer) 4))));
      succeeded = (Var_57 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        hlds__hlds_pred__pred_info_get_goal_type_2_p_0(PredInfo_38, &GoalType_42);
        succeeded = ((MR_tag((MR_Word) GoalType_42)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_58 = ((MR_Unsigned) ((MR_hl_field(0, GoalType_42, (MR_Integer) 0))) & (MR_Integer) 3);
          succeeded = (Var_58 == (MR_Integer) 3);
        }
        succeeded = !(succeeded);
        if (succeeded)
        {
          succeeded = hlds__hlds_pred__is_unify_index_or_compare_pred_1_p_0(PredInfo_38);
          succeeded = !(succeeded);
          if (succeeded)
          {
            Var_59 = (MR_Word) (PredStatus_39);
            succeeded = (Var_59 != (MR_Word) ((MR_Unsigned) 0U));
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word TailConsErrors_22;
      MR_Word HeadConsError_24;

      {
        HeadConsError_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadConsError_24, 0) = ((MR_Box) (TypeCtor_25));
        MR_hl_field(1, HeadConsError_24, 1) = ((MR_Box) (TypeDefn_34));
      }
      check_hlds__typecheck_unify_var_functor__convert_cons_defn_list_7_p_1(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, HeadVar__4_4, ConsDefns_17, HeadVar__6_6, &TailConsErrors_22);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__7_7 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (HeadConsError_24));
        MR_hl_field(1, base, 1) = ((MR_Box) (TailConsErrors_22));
      }
    }
    else
    {
      MR_Word TypeStatus_43;
      MR_Word Var_61;
      MR_Word Var_62;

      hlds__hlds_data__get_type_defn_status_2_p_0(TypeDefn_34, &TypeStatus_43);
      Var_61 = (MR_Word) (TypeStatus_43);
      succeeded = (Var_61 == (MR_Word) ((MR_Unsigned) 4U));
      if (succeeded)
      {
        succeeded = hlds__hlds_pred__is_unify_index_or_compare_pred_1_p_0(PredInfo_38);
        succeeded = !(succeeded);
        if (succeeded)
        {
          Var_62 = (MR_Word) (PredStatus_39);
          succeeded = (Var_62 != (MR_Word) ((MR_Unsigned) 0U));
        }
      }
      if (succeeded)
      {
        MR_Word HeadConsError_74;
        MR_Word TailConsErrors_78;

        check_hlds__typecheck_unify_var_functor__convert_cons_defn_list_7_p_1(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, HeadVar__4_4, ConsDefns_17, HeadVar__6_6, &TailConsErrors_78);
        HeadConsError_74 = ((MR_Word) ((MR_hl_field(1, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_unify_var_functor_scalar_common_2[2])), (MR_Integer) 0))));
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__7_7 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (HeadConsError_74));
          MR_hl_field(1, base, 1) = ((MR_Box) (TailConsErrors_78));
        }
      }
      else
      {
        MR_Word HeadMaybeConsTypeInfo_83;
        MR_Word TailConsTypeInfos_84;
        MR_Word TailConsErrors_85;

        succeeded = (HeadVar__3_3 == (MR_Integer) 1);
        if (succeeded)
          succeeded = (MaybeExistConstraints_29 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          MR_Word Var_63;

          {
            Var_63 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_63, 0) = ((MR_Box) (TypeCtor_25));
          }
          {
            HeadMaybeConsTypeInfo_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, HeadMaybeConsTypeInfo_83, 0) = ((MR_Box) (Var_63));
          }
        }
        else
        {
          MR_Word ConsTypeArgs_44;
          MR_Word ConsType_45;
          MR_Word ExistProgConstraints_48;
          MR_Word ProgConstraints_52;
          MR_Word ClassTable_54;
          MR_Word Constraints_55;
          MR_Word Var_64;
          MR_Word Var_65;

          parse_tree__prog_type__var_list_to_type_list_3_p_0(ConsTypeKinds_28, ConsTypeParams_27, &ConsTypeArgs_44);
          parse_tree__prog_type_construct__construct_type_3_p_0(TypeCtor_25, ConsTypeArgs_44, &ConsType_45);
          if ((MaybeExistConstraints_29 == (MR_Word) ((MR_Unsigned) 0U)))
            ExistProgConstraints_48 = (MR_Word) ((MR_Unsigned) 0U);
          else
          {
            MR_Word ExistConstraints_49 = (MR_Word) (MR_body((MR_Word) (MaybeExistConstraints_29), (MR_Integer) 1));

            ExistProgConstraints_48 = ((MR_Word) ((MR_hl_field(0, ExistConstraints_49, (MR_Integer) 1))));
          }
          {
            ProgConstraints_52 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, ProgConstraints_52, 0) = ((MR_Box) (ExistProgConstraints_48));
            MR_hl_field(0, ProgConstraints_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          hlds__hlds_module__module_info_get_class_table_2_p_0(ModuleInfo_37, &ClassTable_54);
          hlds__hlds_class__make_body_hlds_constraints_5_p_0(ClassTable_54, ConsTypeVarSet_26, HeadVar__2_2, ProgConstraints_52, &Constraints_55);
          {
            Var_65 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_65, 0) = ((MR_Box) (TypeCtor_25));
            MR_hl_field(0, Var_65, 1) = ((MR_Box) (HeadVar__4_4));
          }
          {
            Var_64 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_64, 0) = ((MR_Box) (ConsTypeVarSet_26));
            MR_hl_field(0, Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Var_64, 2) = ((MR_Box) (ConsType_45));
            MR_hl_field(0, Var_64, 3) = ((MR_Box) (ArgTypes_32));
            MR_hl_field(0, Var_64, 4) = ((MR_Box) (Constraints_55));
            MR_hl_field(0, Var_64, 5) = ((MR_Box) (Var_65));
          }
          HeadMaybeConsTypeInfo_83 = (MR_Word) ((MR_Word) (Var_64));
        }
        check_hlds__typecheck_unify_var_functor__convert_cons_defn_list_7_p_1(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, HeadVar__4_4, ConsDefns_17, &TailConsTypeInfos_84, &TailConsErrors_85);
        if (((MR_tag((MR_Word) HeadMaybeConsTypeInfo_83)) == (MR_Integer) 1))
        {
          MR_Word HeadConsError_80 = ((MR_Word) ((MR_hl_field(1, HeadMaybeConsTypeInfo_83, (MR_Integer) 0))));

          *HeadVar__6_6 = TailConsTypeInfos_84;
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__7_7 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (HeadConsError_80));
            MR_hl_field(1, base, 1) = ((MR_Box) (TailConsErrors_85));
          }
        }
        else
        {
          MR_Word HeadConsTypeInfo_23 = (MR_Word) ((MR_Word) (HeadMaybeConsTypeInfo_83));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__6_6 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (HeadConsTypeInfo_23));
            MR_hl_field(1, base, 1) = ((MR_Box) (TailConsTypeInfos_84));
          }
          *HeadVar__7_7 = TailConsErrors_85;
        }
      }
    }
  }
}

static void MR_CALL 
check_hlds__typecheck_unify_var_functor__split_cons_errors_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word MaybeConsInfo_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word MaybeConsInfos_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word InfosTail_8;
    MR_Word ErrorsTail_9;

    check_hlds__typecheck_unify_var_functor__split_cons_errors_3_p_0(MaybeConsInfos_5, &InfosTail_8, &ErrorsTail_9);
    if (((MR_tag((MR_Word) MaybeConsInfo_4)) == (MR_Integer) 1))
    {
      MR_Word ConsError_11 = ((MR_Word) ((MR_hl_field(1, MaybeConsInfo_4, (MR_Integer) 0))));

      *HeadVar__2_2 = InfosTail_8;
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (ConsError_11));
        MR_hl_field(1, base, 1) = ((MR_Box) (ErrorsTail_9));
      }
    }
    else
    {
      MR_Word ConsInfo_10 = (MR_Word) ((MR_Word) (MaybeConsInfo_4));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__2_2 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (ConsInfo_10));
        MR_hl_field(1, base, 1) = ((MR_Box) (InfosTail_8));
      }
      *HeadVar__3_3 = ErrorsTail_9;
    }
  }
}

static void MR_CALL 
check_hlds__typecheck_unify_var_functor__typecheck_unify_var_functor_builtin_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_TypeAssignSet_16;

  check_hlds__typecheck_unify_var_functor__type_assign_check_functor_type_builtin_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_TypeAssignSet_16);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_TypeAssignSet_16));
}

void MR_CALL 
check_hlds__typecheck_unify_var_functor__typecheck_unify_var_functor_builtin_10_p_0(
  MR_Word UnifyContext_11,
  MR_Word Context_12,
  MR_Word LHSVar_13,
  MR_Word ConsId_14,
  MR_Word BuiltinType_15,
  MR_String BuiltinTypeName_16,
  MR_Word TypeAssignSet0_17,
  MR_Word * TypeAssignSet_18,
  MR_Word STATE_VARIABLE_Info_0_29,
  MR_Word * STATE_VARIABLE_Info_30)
{
  MR_bool succeeded = ((MR_tag((MR_Word) BuiltinType_15)) == (MR_Integer) 1);
  MR_Word ConsType_20;
  MR_Word TypeAssignSet1_21;
  MR_Word STATE_VARIABLE_Info_32_32;
  MR_Word Var_33;
  MR_Word Var_31;
  MR_Box conv1_TypeAssignSet1_21;

  if (succeeded)
  {
    Var_31 = ((MR_Unsigned) ((MR_hl_field(1, BuiltinType_15, (MR_Integer) 0))) & (MR_Integer) 15);
    succeeded = (Var_31 == (MR_Integer) 0);
  }
  if (succeeded)
    check_hlds__typecheck_info__typecheck_info_add_nosuffix_integer_var_3_p_0(LHSVar_13, STATE_VARIABLE_Info_0_29, &STATE_VARIABLE_Info_32_32);
  else
    STATE_VARIABLE_Info_32_32 = STATE_VARIABLE_Info_0_29;
  {
    ConsType_20 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, ConsType_20, 0) = ((MR_Box) (BuiltinType_15));
  }
  {
    Var_33 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_33, 0) = ((MR_Box) (&check_hlds__typecheck_unify_var_functor_scalar_common_3[0]));
    MR_hl_field(0, Var_33, 1) = ((MR_Box) (check_hlds__typecheck_unify_var_functor__typecheck_unify_var_functor_builtin_10_p_0_1));
    MR_hl_field(0, Var_33, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_33, 3) = ((MR_Box) (ConsType_20));
    MR_hl_field(0, Var_33, 4) = ((MR_Box) (LHSVar_13));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0), (MR_Word) (&check_hlds__typecheck_unify_var_functor_scalar_common_1[0]), Var_33, TypeAssignSet0_17, ((MR_Box) ((MR_Unsigned) 0U)), &conv1_TypeAssignSet1_21);
  TypeAssignSet1_21 = ((MR_Word) (conv1_TypeAssignSet1_21));
  if ((TypeAssignSet1_21 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *TypeAssignSet_18 = TypeAssignSet0_17;
    if ((TypeAssignSet0_17 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Info_30 = STATE_VARIABLE_Info_32_32;
    else
    {
      MR_Word ConsTypeVarSet_26;
      MR_Word ConsTypeInfo_27;
      MR_Word ConsIdSpec_28;
      MR_Word Var_37;
      MR_Word Var_38;
      MR_Word Var_39;

      mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &ConsTypeVarSet_26);
      Var_37 = check_hlds__typecheck_util__empty_hlds_constraints_0_f_0();
      {
        Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_38, 0) = ((MR_Box) (BuiltinTypeName_16));
      }
      {
        ConsTypeInfo_27 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ConsTypeInfo_27, 0) = ((MR_Box) (ConsTypeVarSet_26));
        MR_hl_field(0, ConsTypeInfo_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, ConsTypeInfo_27, 2) = ((MR_Box) (ConsType_20));
        MR_hl_field(0, ConsTypeInfo_27, 3) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, ConsTypeInfo_27, 4) = ((MR_Box) (Var_37));
        MR_hl_field(0, ConsTypeInfo_27, 5) = ((MR_Box) (Var_38));
      }
      {
        Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_39, 0) = ((MR_Box) (ConsTypeInfo_27));
        MR_hl_field(1, Var_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      ConsIdSpec_28 = check_hlds__typecheck_errors__report_error_unify_var_functor_result_8_f_0(STATE_VARIABLE_Info_32_32, UnifyContext_11, Context_12, LHSVar_13, Var_39, ConsId_14, (MR_Integer) 0, TypeAssignSet0_17);
      check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(ConsIdSpec_28, STATE_VARIABLE_Info_32_32, STATE_VARIABLE_Info_30);
    }
  }
  else
  {
    *TypeAssignSet_18 = TypeAssignSet1_21;
    *STATE_VARIABLE_Info_30 = STATE_VARIABLE_Info_32_32;
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck_unify_var_functor____Unify____cons_constraints_action_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__typecheck_unify_var_functor____Unify____cons_constraints_action_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_unify_var_functor____Compare____cons_constraints_action_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__typecheck_unify_var_functor____Compare____cons_constraints_action_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__typecheck_unify_var_functor____Unify____cons_type_assign_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__typecheck_unify_var_functor____Unify____cons_type_assign_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_unify_var_functor____Compare____cons_type_assign_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__typecheck_unify_var_functor____Compare____cons_type_assign_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__typecheck_unify_var_functor____Unify____cons_type_assign_set_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__typecheck_unify_var_functor____Unify____cons_type_assign_set_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_unify_var_functor____Compare____cons_type_assign_set_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__typecheck_unify_var_functor____Compare____cons_type_assign_set_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__typecheck_unify_var_functor____Unify____maybe_cons_type_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__typecheck_unify_var_functor____Unify____maybe_cons_type_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_unify_var_functor____Compare____maybe_cons_type_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__typecheck_unify_var_functor____Compare____maybe_cons_type_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__check_hlds__typecheck_unify_var_functor__init(void)
{
}

void mercury__check_hlds__typecheck_unify_var_functor__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__typecheck_unify_var_functor__check_hlds__typecheck_unify_var_functor__type_ctor_info_cons_constraints_action_0);
	MR_register_type_ctor_info(&check_hlds__typecheck_unify_var_functor__check_hlds__typecheck_unify_var_functor__type_ctor_info_cons_type_assign_0);
	MR_register_type_ctor_info(&check_hlds__typecheck_unify_var_functor__check_hlds__typecheck_unify_var_functor__type_ctor_info_cons_type_assign_set_0);
	MR_register_type_ctor_info(&check_hlds__typecheck_unify_var_functor__check_hlds__typecheck_unify_var_functor__type_ctor_info_maybe_cons_type_info_0);
}

void mercury__check_hlds__typecheck_unify_var_functor__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__typecheck_unify_var_functor__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module check_hlds.typecheck_unify_var_functor.
