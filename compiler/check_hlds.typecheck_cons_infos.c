/*
** Automatically generated from `typecheck_cons_infos.m'
** by the Mercury compiler,
** version rotd-2026-08-20
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


// :- module check_hlds.typecheck_cons_infos.
// :- implementation.

/*
INIT mercury__check_hlds__typecheck_cons_infos__init
ENDINIT
*/

#include "check_hlds.typecheck_cons_infos.mih"


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
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
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
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_assign.mih"
#include "check_hlds.typecheck_error_undef.mih"
#include "check_hlds.typecheck_error_util.mih"
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
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_proc.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_info_types.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_proc_id.mih"
#include "hlds.pred_table.mih"
#include "hlds.proc_info_types.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_rare.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_item_pragma.mih"
#include "parse_tree.prog_item_type.mih"
#include "parse_tree.prog_parse_tree.mih"
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
#include "parse_tree.module_qual.mq_info.mih"



struct check_hlds__typecheck_cons_infos__rename_constraint_3_p_0_env_0_s {
  MR_Word check_hlds__typecheck_cons_infos__rename_constraint_3_p_0_env_0__TVarRenaming_4;
  MR_bool check_hlds__typecheck_cons_infos__rename_constraint_3_p_0_env_0__succeeded;
  MR_Word check_hlds__typecheck_cons_infos__rename_constraint_3_p_0_env_0__ArgTypes0_9;
  jmp_buf check_hlds__typecheck_cons_infos__rename_constraint_3_p_0_env_0__commit_0;
  MR_Word check_hlds__typecheck_cons_infos__rename_constraint_3_p_0_env_0__TypeInfo_13_13;
  MR_Word check_hlds__typecheck_cons_infos__rename_constraint_3_p_0_env_0__Var_12;
};


static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_cons_infos__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_cons_infos__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__typecheck_cons_infos__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_EnumFunctorDesc check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__enum_functor_desc_cons_constraints_action_0_0;

static const MR_EnumFunctorDesc check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__enum_functor_desc_cons_constraints_action_0_1;

static const MR_EnumFunctorDesc check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__enum_functor_desc_cons_constraints_action_0_2;

static const MR_EnumFunctorDescPtr check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__enum_ordinal_ordered_cons_constraints_action_0[3];

static const MR_EnumFunctorDescPtr check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__enum_name_ordered_cons_constraints_action_0[3];

static const MR_Integer check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__functor_number_map_cons_constraints_action_0[3];

static const MR_PseudoTypeInfo check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__field_types_cons_info_result_0_0[2];

static const MR_DuFunctorDesc check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__du_functor_desc_cons_info_result_0_0;

static const MR_PseudoTypeInfo check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__field_types_cons_info_result_0_1[1];

static const MR_DuFunctorDesc check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__du_functor_desc_cons_info_result_0_1;

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_cons_infos__list__ti_list_1check_hlds__type_assign__type_ctor_info_cons_type_info_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_cons_infos__list__ti_list_1check_hlds__typecheck_error_undef__type_ctor_info_cons_error_0;

static const MR_PseudoTypeInfo check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__field_types_cons_info_result_0_2[3];

static const MR_DuFunctorDesc check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__du_functor_desc_cons_info_result_0_2;

static const MR_DuFunctorDesc check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__du_functor_desc_cons_info_result_0_3;

static const MR_DuFunctorDesc check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__du_functor_desc_cons_info_result_0_4;

static const MR_DuFunctorDescPtr check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__du_stag_ordered_cons_info_result_0_0[2];

static const MR_DuFunctorDescPtr check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__du_stag_ordered_cons_info_result_0_1[1];

static const MR_DuFunctorDescPtr check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__du_stag_ordered_cons_info_result_0_2[1];

static const MR_DuFunctorDescPtr check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__du_stag_ordered_cons_info_result_0_3[1];

static const MR_DuPtagLayout check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__du_ptag_ordered_cons_info_result_0[4];

static const MR_DuFunctorDescPtr check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__du_name_ordered_cons_info_result_0[5];

static const MR_Integer check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__functor_number_map_cons_info_result_0[5];

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_cons_infos__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_cons_infos__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_cons_infos__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_PseudoTypeInfo check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__field_types_du_cons_type_info_0_0[6];

static const MR_DuFunctorDesc check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__du_functor_desc_du_cons_type_info_0_0;

static const MR_DuFunctorDescPtr check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__du_stag_ordered_du_cons_type_info_0_0[1];

static const MR_DuPtagLayout check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__du_ptag_ordered_du_cons_type_info_0[1];

static const MR_DuFunctorDescPtr check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__du_name_ordered_du_cons_type_info_0[1];

static const MR_Integer check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__functor_number_map_du_cons_type_info_0[1];

static const MR_PseudoTypeInfo check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__field_types_du_cons_type_info_source_0_0[2];

static const MR_DuFunctorDesc check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__du_functor_desc_du_cons_type_info_source_0_0;

static const MR_DuFunctorDescPtr check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__du_stag_ordered_du_cons_type_info_source_0_0[1];

static const MR_DuPtagLayout check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__du_ptag_ordered_du_cons_type_info_source_0[1];

static const MR_DuFunctorDescPtr check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__du_name_ordered_du_cons_type_info_source_0[1];

static const MR_Integer check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__functor_number_map_du_cons_type_info_source_0[1];

static const MR_PseudoTypeInfo check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__field_types_maybe_cons_type_info_0_0[1];

static const MR_DuFunctorDesc check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__du_functor_desc_maybe_cons_type_info_0_0;

static const MR_PseudoTypeInfo check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__field_types_maybe_cons_type_info_0_1[1];

static const MR_DuFunctorDesc check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__du_functor_desc_maybe_cons_type_info_0_1;

static const MR_DuFunctorDescPtr check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__du_stag_ordered_maybe_cons_type_info_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__du_stag_ordered_maybe_cons_type_info_0_1[1];

static const MR_DuPtagLayout check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__du_ptag_ordered_maybe_cons_type_info_0[2];

static const MR_DuFunctorDescPtr check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__du_name_ordered_maybe_cons_type_info_0[2];

static const MR_Integer check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__functor_number_map_maybe_cons_type_info_0[2];

static const MR_PseudoTypeInfo check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__field_types_maybe_du_cons_type_info_0_0[1];

static const MR_DuFunctorDesc check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__du_functor_desc_maybe_du_cons_type_info_0_0;

static const MR_PseudoTypeInfo check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__field_types_maybe_du_cons_type_info_0_1[1];

static const MR_DuFunctorDesc check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__du_functor_desc_maybe_du_cons_type_info_0_1;

static const MR_DuFunctorDescPtr check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__du_stag_ordered_maybe_du_cons_type_info_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__du_stag_ordered_maybe_du_cons_type_info_0_1[1];

static const MR_DuPtagLayout check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__du_ptag_ordered_maybe_du_cons_type_info_0[2];

static const MR_DuFunctorDescPtr check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__du_name_ordered_maybe_du_cons_type_info_0[2];

static const MR_Integer check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__functor_number_map_maybe_du_cons_type_info_0[2];

static MR_Word MR_CALL 
check_hlds__typecheck_cons_infos__IntroducedFrom__func__hlds_cons_defn_to_maybe_cons_type_info__447__3_1_f_0(
  MR_Word LambdaHeadVar__1_47);

static MR_Word MR_CALL 
check_hlds__typecheck_cons_infos__IntroducedFrom__func__hlds_cons_defn_to_maybe_cons_type_info__447__2_1_f_0(
  MR_Word LambdaHeadVar__1_47);

static MR_Word MR_CALL 
check_hlds__typecheck_cons_infos__IntroducedFrom__func__hlds_cons_defn_to_maybe_cons_type_info__447__1_1_f_0(
  MR_Word LambdaHeadVar__1_47);

static void MR_CALL 
check_hlds__typecheck_cons_infos____Compare____maybe_du_cons_type_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__typecheck_cons_infos____Unify____maybe_du_cons_type_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__typecheck_cons_infos____Compare____maybe_cons_type_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__typecheck_cons_infos____Unify____maybe_cons_type_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__typecheck_cons_infos____Compare____du_cons_type_info_source_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__typecheck_cons_infos____Unify____du_cons_type_info_source_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__typecheck_cons_infos____Compare____du_cons_type_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__typecheck_cons_infos____Unify____du_cons_type_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__typecheck_cons_infos____Compare____cons_constraints_action_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__typecheck_cons_infos____Unify____cons_constraints_action_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__typecheck_cons_infos__rename_constraint_3_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__typecheck_cons_infos__rename_constraint_3_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__typecheck_cons_infos__rename_constraint_3_p_0_3(
  void * env_ptr_arg);

static MR_bool MR_CALL 
check_hlds__typecheck_cons_infos__rename_constraint_3_p_0(
  MR_Word TVarRenaming_4,
  MR_Word Constraint0_5,
  MR_Word * Constraint_6);

static MR_bool MR_CALL 
check_hlds__typecheck_cons_infos__project_constraint_2_p_0(
  MR_Word CallTVars_3,
  MR_Word Constraint_4);

static MR_bool MR_CALL 
check_hlds__typecheck_cons_infos__is_field_access_function_for_type_ctor_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word AccessType_6,
  MR_Word TypeCtor_7,
  MR_Word PredId_8);

static void MR_CALL 
check_hlds__typecheck_cons_infos__typecheck_info_construct_du_cons_infos_5_p_0(
  MR_Word Info_6,
  MR_Word DuCtor_7,
  MR_Integer Arity_8,
  MR_Word GoalId_9,
  MR_Word * ConsInfoResult_10);

static MR_bool MR_CALL 
check_hlds__typecheck_cons_infos__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_97_112_112_108_121_95_116_121_112_101_95_95_91_49_93_95_48_4_p_0(
  MR_Word DuCtor_6,
  MR_Integer Arity_7,
  MR_Word * ConsTypeInfo_8);

static MR_Box MR_CALL 
check_hlds__typecheck_cons_infos__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_108_100_115_95_99_111_110_115_95_100_101_102_110_115_95_116_111_95_99_111_110_115_95_116_121_112_101_95_105_110_102_111_115_95_97_110_100_95_101_114_114_111_114_115_95_95_91_51_93_95_49_7_p_1_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__typecheck_cons_infos__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_108_100_115_95_99_111_110_115_95_100_101_102_110_115_95_116_111_95_99_111_110_115_95_116_121_112_101_95_105_110_102_111_115_95_97_110_100_95_101_114_114_111_114_115_95_95_91_51_93_95_49_7_p_1(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7);

static void MR_CALL 
check_hlds__typecheck_cons_infos__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_108_100_115_95_99_111_110_115_95_100_101_102_110_115_95_116_111_95_99_111_110_115_95_116_121_112_101_95_105_110_102_111_115_95_97_110_100_95_101_114_114_111_114_115_95_95_91_51_93_95_48_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7);

static void MR_CALL 
check_hlds__typecheck_cons_infos__builtin_pred_type_5_p_0(
  MR_Word Info_6,
  MR_Word DuCtor_7,
  MR_Integer Arity_8,
  MR_Word GoalId_9,
  MR_Word * ConsTypeInfos_10);

static void MR_CALL 
check_hlds__typecheck_cons_infos__accumulate_cons_type_infos_for_pred_ids_7_p_0(
  MR_Word Info_1,
  MR_Word PredTable_2,
  MR_Word GoalId_3,
  MR_Word HeadVar__4_4,
  MR_Integer Arity_5,
  MR_Word STATE_VARIABLE_ConsTypeInfos_0_6,
  MR_Word * STATE_VARIABLE_ConsTypeInfos_7);

static MR_bool MR_CALL 
check_hlds__typecheck_cons_infos__get_auto_generated_field_access_func_cons_infos_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__typecheck_cons_infos__get_auto_generated_field_access_func_cons_infos_9_p_0(
  MR_Word Info_1,
  MR_Word GoalId_2,
  MR_Word DuCtorSymName_3,
  MR_Word UserArity_4,
  MR_Word AccessType_5,
  MR_Word FieldSymName_6,
  MR_Word HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word * HeadVar__9_9);

static MR_Box MR_CALL 
check_hlds__typecheck_cons_infos__get_auto_generated_field_access_func_cons_info_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__typecheck_cons_infos__get_auto_generated_field_access_func_cons_info_8_p_0(
  MR_Word Info_9,
  MR_Word GoalId_10,
  MR_Word AccessType_11,
  MR_Word FieldSymName_12,
  MR_Word TypeCtor_13,
  MR_Word DuCtor_14,
  MR_Word FieldDefn_15,
  MR_Word * MaybeConsTypeInfo_16);

static MR_Box MR_CALL 
check_hlds__typecheck_cons_infos__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_108_100_115_95_99_111_110_115_95_100_101_102_110_95_116_111_95_109_97_121_98_101_95_99_111_110_115_95_116_121_112_101_95_105_110_102_111_95_95_91_51_93_95_48_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__typecheck_cons_infos__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_108_100_115_95_99_111_110_115_95_100_101_102_110_95_116_111_95_109_97_121_98_101_95_99_111_110_115_95_116_121_112_101_95_105_110_102_111_95_95_91_51_93_95_48_6_p_0(
  MR_Word Info_7,
  MR_Word GoalId_8,
  MR_Word DuCtor_10,
  MR_Word ConsDefn_11,
  MR_Word * MaybeConsTypeInfo_12);

static MR_bool MR_CALL 
check_hlds__typecheck_cons_infos__functor_to_field_access_function_cons_type_info_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
check_hlds__typecheck_cons_infos__functor_to_field_access_function_cons_type_info_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__typecheck_cons_infos__functor_to_field_access_function_cons_type_info_7_p_0(
  MR_Word ClassTable_8,
  MR_Word AccessType_9,
  MR_Word FieldSymName_10,
  MR_Word FieldDefn_11,
  MR_Word FunctorConsTypeInfo_12,
  MR_Word OrigExistTVars_13,
  MR_Word * MaybeConsTypeInfo_14);

static MR_bool MR_CALL 
check_hlds__typecheck_cons_infos____Unify____cons_constraints_action_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck_cons_infos____Compare____cons_constraints_action_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__typecheck_cons_infos____Unify____cons_info_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck_cons_infos____Compare____cons_info_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__typecheck_cons_infos____Unify____du_cons_type_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck_cons_infos____Compare____du_cons_type_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__typecheck_cons_infos____Unify____du_cons_type_info_source_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck_cons_infos____Compare____du_cons_type_info_source_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__typecheck_cons_infos____Unify____maybe_cons_type_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck_cons_infos____Compare____maybe_cons_type_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__typecheck_cons_infos____Unify____maybe_du_cons_type_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck_cons_infos____Compare____maybe_du_cons_type_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__typecheck_cons_infos_scalar_common_1[8][2];

static /* final */ const MR_Box check_hlds__typecheck_cons_infos_scalar_common_2[5][1];

static /* final */ const MR_Box check_hlds__typecheck_cons_infos_scalar_common_3[2][5];

static /* final */ const MR_Box check_hlds__typecheck_cons_infos_scalar_common_4[1][6];

static /* final */ const MR_Box check_hlds__typecheck_cons_infos_scalar_common_5[3][3];

static /* final */ const MR_Box check_hlds__typecheck_cons_infos_scalar_common_6[1][7];


struct check_hlds__typecheck_cons_infos__vector_common_type_7_0_s {
  const MR_String check_hlds__typecheck_cons_infos__vector_common_type_7_0__vct_7_f_0;
  const MR_Integer check_hlds__typecheck_cons_infos__vector_common_type_7_0__vct_7_f_1;
};

static /* final */ const struct check_hlds__typecheck_cons_infos__vector_common_type_7_0_s check_hlds__typecheck_cons_infos_vector_common_7[4];

struct check_hlds__typecheck_cons_infos__vector_common_type_8_0_s {
  const MR_Word check_hlds__typecheck_cons_infos__vector_common_type_8_0__vct_8_f_0;
  const MR_String check_hlds__typecheck_cons_infos__vector_common_type_8_0__vct_8_f_1;
};

static /* final */ const struct check_hlds__typecheck_cons_infos__vector_common_type_8_0_s check_hlds__typecheck_cons_infos_vector_common_8[5];



static /* final */ const MR_Box check_hlds__typecheck_cons_infos_scalar_common_1[8][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_hlds_ctor_field_defn_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_cons_type_info_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__typecheck_error_undef__check_hlds__typecheck_error_undef__type_ctor_info_cons_error_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&check_hlds__typecheck_cons_infos_scalar_common_2[4])),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) "character"))
  },
  /* row   6 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "float"))
  },
  /* row   7 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "string"))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_cons_infos_scalar_common_2[5][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 0U) },
  /* row   1 */
  { ((MR_Box) ((MR_String) "{}")) },
  /* row   2 */
  { ((MR_Box) ((MR_String) "tuple")) },
  /* row   3 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
  /* row   4 */
  { ((MR_Box) ((MR_String) "character")) },
};

static /* final */ const MR_Box check_hlds__typecheck_cons_infos_scalar_common_3[2][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__typecheck_cons_infos__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_cons_infos_scalar_common_4[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__typecheck_cons_infos__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_cons_infos_scalar_common_5[3][3] = {
  /* row   0 */
  {
    ((MR_Box) (&check_hlds__typecheck_cons_infos_scalar_common_3[1])),
    ((MR_Box) (check_hlds__typecheck_cons_infos__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_108_100_115_95_99_111_110_115_95_100_101_102_110_95_116_111_95_109_97_121_98_101_95_99_111_110_115_95_116_121_112_101_95_105_110_102_111_95_95_91_51_93_95_48_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&check_hlds__typecheck_cons_infos_scalar_common_3[1])),
    ((MR_Box) (check_hlds__typecheck_cons_infos__get_auto_generated_field_access_func_cons_info_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&check_hlds__typecheck_cons_infos_scalar_common_3[1])),
    ((MR_Box) (check_hlds__typecheck_cons_infos__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_108_100_115_95_99_111_110_115_95_100_101_102_110_115_95_116_111_95_99_111_110_115_95_116_121_112_101_95_105_110_102_111_115_95_97_110_100_95_101_114_114_111_114_115_95_95_91_51_93_95_49_7_p_1_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_cons_infos_scalar_common_6[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_field_access_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_pred_id_0))
  },
};


static /* final */ const struct check_hlds__typecheck_cons_infos__vector_common_type_7_0_s check_hlds__typecheck_cons_infos_vector_common_7[4] = {
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

static /* final */ const struct check_hlds__typecheck_cons_infos__vector_common_type_8_0_s check_hlds__typecheck_cons_infos_vector_common_8[5] = {
  /* row   0 */
  {
    (MR_Word) ((MR_Unsigned) 4U),
    (MR_String) "string"
  },
  /* row   1 */
  {
    (MR_Word) (MR_mkword(1, &check_hlds__typecheck_cons_infos_scalar_common_2[0])),
    (MR_String) "int"
  },
  /* row   2 */
  {
    (MR_Word) ((MR_Unsigned) 4U),
    (MR_String) "string"
  },
  /* row   3 */
  {
    (MR_Word) ((MR_Unsigned) 4U),
    (MR_String) "string"
  },
  /* row   4 */
  {
    (MR_Word) ((MR_Unsigned) 4U),
    (MR_String) "string"
  },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_cons_infos__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_cons_infos__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&check_hlds__typecheck_cons_infos__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__typecheck_cons_infos__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&check_hlds__typecheck_cons_infos__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
    (MR_PseudoTypeInfo) (&check_hlds__typecheck_cons_infos__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_EnumFunctorDesc check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__enum_functor_desc_cons_constraints_action_0_0 = {
  (MR_String) "do_not_flip_constraints",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__enum_functor_desc_cons_constraints_action_0_1 = {
  (MR_String) "flip_constraints_for_new",
  INT32_C(1)
};

static const MR_EnumFunctorDesc check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__enum_functor_desc_cons_constraints_action_0_2 = {
  (MR_String) "flip_constraints_for_field_set",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__enum_ordinal_ordered_cons_constraints_action_0[3] = {
  &check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__enum_functor_desc_cons_constraints_action_0_0,
  &check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__enum_functor_desc_cons_constraints_action_0_1,
  &check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__enum_functor_desc_cons_constraints_action_0_2
};

static const MR_EnumFunctorDescPtr check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__enum_name_ordered_cons_constraints_action_0[3] = {
  &check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__enum_functor_desc_cons_constraints_action_0_0,
  &check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__enum_functor_desc_cons_constraints_action_0_2,
  &check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__enum_functor_desc_cons_constraints_action_0_1
};

static const MR_Integer check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__functor_number_map_cons_constraints_action_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__type_ctor_info_cons_constraints_action_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__typecheck_cons_infos____Unify____cons_constraints_action_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_cons_infos____Compare____cons_constraints_action_0_0_10001)),
  (MR_String) "check_hlds.typecheck_cons_infos",
  (MR_String) "cons_constraints_action",
  { check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__enum_name_ordered_cons_constraints_action_0 },
  { check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__enum_ordinal_ordered_cons_constraints_action_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__functor_number_map_cons_constraints_action_0,

};

static const MR_PseudoTypeInfo check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__field_types_cons_info_result_0_0[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_builtin_type_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__du_functor_desc_cons_info_result_0_0 = {
  (MR_String) "cons_info_builtin_const",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__field_types_cons_info_result_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__field_types_cons_info_result_0_1[1] = { (MR_PseudoTypeInfo) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_cons_type_info_0) };

static const MR_DuFunctorDesc check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__du_functor_desc_cons_info_result_0_1 = {
  (MR_String) "cons_info_tuple",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(1),
  check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__field_types_cons_info_result_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_cons_infos__list__ti_list_1check_hlds__type_assign__type_ctor_info_cons_type_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_cons_type_info_0) }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_cons_infos__list__ti_list_1check_hlds__typecheck_error_undef__type_ctor_info_cons_error_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&check_hlds__typecheck_error_undef__check_hlds__typecheck_error_undef__type_ctor_info_cons_error_0) }
};

static const MR_PseudoTypeInfo check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__field_types_cons_info_result_0_2[3] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_du_ctor_0),
  (MR_PseudoTypeInfo) (&check_hlds__typecheck_cons_infos__list__ti_list_1check_hlds__type_assign__type_ctor_info_cons_type_info_0),
  (MR_PseudoTypeInfo) (&check_hlds__typecheck_cons_infos__list__ti_list_1check_hlds__typecheck_error_undef__type_ctor_info_cons_error_0)
};

static const MR_DuFunctorDesc check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__du_functor_desc_cons_info_result_0_2 = {
  (MR_String) "cons_info_du_ctor",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(3),
  (MR_Integer) -1,
  INT32_C(2),
  check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__field_types_cons_info_result_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__du_functor_desc_cons_info_result_0_3 = {
  (MR_String) "cons_info_field_access_func",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(3),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__du_functor_desc_cons_info_result_0_4 = {
  (MR_String) "cons_info_comp_gen_cons_id",
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

static const MR_DuFunctorDescPtr check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__du_stag_ordered_cons_info_result_0_0[2] = {
  &check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__du_functor_desc_cons_info_result_0_3,
  &check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__du_functor_desc_cons_info_result_0_4
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__du_stag_ordered_cons_info_result_0_1[1] = { &check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__du_functor_desc_cons_info_result_0_0 };

static const MR_DuFunctorDescPtr check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__du_stag_ordered_cons_info_result_0_2[1] = { &check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__du_functor_desc_cons_info_result_0_1 };

static const MR_DuFunctorDescPtr check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__du_stag_ordered_cons_info_result_0_3[1] = { &check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__du_functor_desc_cons_info_result_0_2 };

static const MR_DuPtagLayout check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__du_ptag_ordered_cons_info_result_0[4] = {
  {
    UINT32_C(2),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__du_stag_ordered_cons_info_result_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__du_stag_ordered_cons_info_result_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__du_stag_ordered_cons_info_result_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__du_stag_ordered_cons_info_result_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__du_name_ordered_cons_info_result_0[5] = {
  &check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__du_functor_desc_cons_info_result_0_0,
  &check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__du_functor_desc_cons_info_result_0_4,
  &check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__du_functor_desc_cons_info_result_0_2,
  &check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__du_functor_desc_cons_info_result_0_3,
  &check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__du_functor_desc_cons_info_result_0_1
};

static const MR_Integer check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__functor_number_map_cons_info_result_0[5] = {
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__type_ctor_info_cons_info_result_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__typecheck_cons_infos____Unify____cons_info_result_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_cons_infos____Compare____cons_info_result_0_0_10001)),
  (MR_String) "check_hlds.typecheck_cons_infos",
  (MR_String) "cons_info_result",
  { check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__du_name_ordered_cons_info_result_0 },
  { check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__du_ptag_ordered_cons_info_result_0 },
  (MR_Integer) 5,
  UINT16_C(12),
  check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__functor_number_map_cons_info_result_0,

};

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_cons_infos__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_cons_infos__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&check_hlds__typecheck_cons_infos__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_cons_infos__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0) }
};

static const MR_PseudoTypeInfo check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__field_types_du_cons_type_info_0_0[6] = {
  (MR_PseudoTypeInfo) (&check_hlds__typecheck_cons_infos__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__typecheck_cons_infos__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__typecheck_cons_infos__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_db_0),
  (MR_PseudoTypeInfo) (&check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__type_ctor_info_du_cons_type_info_source_0)
};

static const MR_DuFunctorDesc check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__du_functor_desc_du_cons_type_info_0_0 = {
  (MR_String) "cons_type_info",
  INT16_C(6),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__field_types_du_cons_type_info_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__du_stag_ordered_du_cons_type_info_0_0[1] = { &check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__du_functor_desc_du_cons_type_info_0_0 };

static const MR_DuPtagLayout check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__du_ptag_ordered_du_cons_type_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__du_stag_ordered_du_cons_type_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__du_name_ordered_du_cons_type_info_0[1] = { &check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__du_functor_desc_du_cons_type_info_0_0 };

static const MR_Integer check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__functor_number_map_du_cons_type_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__type_ctor_info_du_cons_type_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__typecheck_cons_infos____Unify____du_cons_type_info_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_cons_infos____Compare____du_cons_type_info_0_0_10001)),
  (MR_String) "check_hlds.typecheck_cons_infos",
  (MR_String) "du_cons_type_info",
  { check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__du_name_ordered_du_cons_type_info_0 },
  { check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__du_ptag_ordered_du_cons_type_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__functor_number_map_du_cons_type_info_0,

};

static const MR_PseudoTypeInfo check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__field_types_du_cons_type_info_source_0_0[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_du_ctor_0)
};

static const MR_DuFunctorDesc check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__du_functor_desc_du_cons_type_info_source_0_0 = {
  (MR_String) "source_type",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__field_types_du_cons_type_info_source_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__du_stag_ordered_du_cons_type_info_source_0_0[1] = { &check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__du_functor_desc_du_cons_type_info_source_0_0 };

static const MR_DuPtagLayout check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__du_ptag_ordered_du_cons_type_info_source_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__du_stag_ordered_du_cons_type_info_source_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__du_name_ordered_du_cons_type_info_source_0[1] = { &check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__du_functor_desc_du_cons_type_info_source_0_0 };

static const MR_Integer check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__functor_number_map_du_cons_type_info_source_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__type_ctor_info_du_cons_type_info_source_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__typecheck_cons_infos____Unify____du_cons_type_info_source_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_cons_infos____Compare____du_cons_type_info_source_0_0_10001)),
  (MR_String) "check_hlds.typecheck_cons_infos",
  (MR_String) "du_cons_type_info_source",
  { check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__du_name_ordered_du_cons_type_info_source_0 },
  { check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__du_ptag_ordered_du_cons_type_info_source_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__functor_number_map_du_cons_type_info_source_0,

};

static const MR_PseudoTypeInfo check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__field_types_maybe_cons_type_info_0_0[1] = { (MR_PseudoTypeInfo) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_cons_type_info_0) };

static const MR_DuFunctorDesc check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__du_functor_desc_maybe_cons_type_info_0_0 = {
  (MR_String) "ok",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE_DIRECT_ARG,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__field_types_maybe_cons_type_info_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__field_types_maybe_cons_type_info_0_1[1] = { (MR_PseudoTypeInfo) (&check_hlds__typecheck_error_undef__check_hlds__typecheck_error_undef__type_ctor_info_cons_error_0) };

static const MR_DuFunctorDesc check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__du_functor_desc_maybe_cons_type_info_0_1 = {
  (MR_String) "error",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__field_types_maybe_cons_type_info_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__du_stag_ordered_maybe_cons_type_info_0_0[1] = { &check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__du_functor_desc_maybe_cons_type_info_0_0 };

static const MR_DuFunctorDescPtr check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__du_stag_ordered_maybe_cons_type_info_0_1[1] = { &check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__du_functor_desc_maybe_cons_type_info_0_1 };

static const MR_DuPtagLayout check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__du_ptag_ordered_maybe_cons_type_info_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE_DIRECT_ARG,
    check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__du_stag_ordered_maybe_cons_type_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__du_stag_ordered_maybe_cons_type_info_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__du_name_ordered_maybe_cons_type_info_0[2] = {
  &check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__du_functor_desc_maybe_cons_type_info_0_1,
  &check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__du_functor_desc_maybe_cons_type_info_0_0
};

static const MR_Integer check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__functor_number_map_maybe_cons_type_info_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__type_ctor_info_maybe_cons_type_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__typecheck_cons_infos____Unify____maybe_cons_type_info_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_cons_infos____Compare____maybe_cons_type_info_0_0_10001)),
  (MR_String) "check_hlds.typecheck_cons_infos",
  (MR_String) "maybe_cons_type_info",
  { check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__du_name_ordered_maybe_cons_type_info_0 },
  { check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__du_ptag_ordered_maybe_cons_type_info_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__functor_number_map_maybe_cons_type_info_0,

};

static const MR_PseudoTypeInfo check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__field_types_maybe_du_cons_type_info_0_0[1] = { (MR_PseudoTypeInfo) (&check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__type_ctor_info_du_cons_type_info_0) };

static const MR_DuFunctorDesc check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__du_functor_desc_maybe_du_cons_type_info_0_0 = {
  (MR_String) "ok",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE_DIRECT_ARG,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__field_types_maybe_du_cons_type_info_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__field_types_maybe_du_cons_type_info_0_1[1] = { (MR_PseudoTypeInfo) (&check_hlds__typecheck_error_undef__check_hlds__typecheck_error_undef__type_ctor_info_cons_error_0) };

static const MR_DuFunctorDesc check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__du_functor_desc_maybe_du_cons_type_info_0_1 = {
  (MR_String) "error",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__field_types_maybe_du_cons_type_info_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__du_stag_ordered_maybe_du_cons_type_info_0_0[1] = { &check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__du_functor_desc_maybe_du_cons_type_info_0_0 };

static const MR_DuFunctorDescPtr check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__du_stag_ordered_maybe_du_cons_type_info_0_1[1] = { &check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__du_functor_desc_maybe_du_cons_type_info_0_1 };

static const MR_DuPtagLayout check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__du_ptag_ordered_maybe_du_cons_type_info_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE_DIRECT_ARG,
    check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__du_stag_ordered_maybe_du_cons_type_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__du_stag_ordered_maybe_du_cons_type_info_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__du_name_ordered_maybe_du_cons_type_info_0[2] = {
  &check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__du_functor_desc_maybe_du_cons_type_info_0_1,
  &check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__du_functor_desc_maybe_du_cons_type_info_0_0
};

static const MR_Integer check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__functor_number_map_maybe_du_cons_type_info_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__type_ctor_info_maybe_du_cons_type_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__typecheck_cons_infos____Unify____maybe_du_cons_type_info_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_cons_infos____Compare____maybe_du_cons_type_info_0_0_10001)),
  (MR_String) "check_hlds.typecheck_cons_infos",
  (MR_String) "maybe_du_cons_type_info",
  { check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__du_name_ordered_maybe_du_cons_type_info_0 },
  { check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__du_ptag_ordered_maybe_du_cons_type_info_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__functor_number_map_maybe_du_cons_type_info_0,

};

static MR_Word MR_CALL 
check_hlds__typecheck_cons_infos__IntroducedFrom__func__hlds_cons_defn_to_maybe_cons_type_info__447__3_1_f_0(
  MR_Word LambdaHeadVar__1_47)
{
  MR_Word LambdaHeadVar__2_48 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_47, 1))));

  return LambdaHeadVar__2_48;
}

static MR_Word MR_CALL 
check_hlds__typecheck_cons_infos__IntroducedFrom__func__hlds_cons_defn_to_maybe_cons_type_info__447__2_1_f_0(
  MR_Word LambdaHeadVar__1_47)
{
  MR_Word LambdaHeadVar__2_48 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_47, 1))));

  return LambdaHeadVar__2_48;
}

static MR_Word MR_CALL 
check_hlds__typecheck_cons_infos__IntroducedFrom__func__hlds_cons_defn_to_maybe_cons_type_info__447__1_1_f_0(
  MR_Word LambdaHeadVar__1_47)
{
  MR_Word LambdaHeadVar__2_48 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_47, 1))));

  return LambdaHeadVar__2_48;
}

static void MR_CALL 
check_hlds__typecheck_cons_infos____Compare____maybe_du_cons_type_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = (MR_Word) (HeadVar__2_2);
  MR_Word Cast_HeadVar2_5 = (MR_Word) (HeadVar__3_3);

  check_hlds__typecheck_cons_infos____Compare____maybe_cons_type_info_0_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
}

static MR_bool MR_CALL 
check_hlds__typecheck_cons_infos____Unify____maybe_du_cons_type_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = (MR_Word) (HeadVar__1_1);
  MR_Word Cast_HeadVar2_4 = (MR_Word) (HeadVar__2_2);

  succeeded = check_hlds__typecheck_cons_infos____Unify____maybe_cons_type_info_0_0(Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_cons_infos____Compare____maybe_cons_type_info_0_0(
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
      MR_Word ArgX1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

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
check_hlds__typecheck_cons_infos____Unify____maybe_cons_type_info_0_0(
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
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word ArgY1_6;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
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
check_hlds__typecheck_cons_infos____Compare____du_cons_type_info_source_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = (MR_Word) (HeadVar__2_2);
  MR_Word Cast_HeadVar2_5 = (MR_Word) (HeadVar__3_3);

  check_hlds__type_assign____Compare____cons_type_info_source_0_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
}

static MR_bool MR_CALL 
check_hlds__typecheck_cons_infos____Unify____du_cons_type_info_source_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = (MR_Word) (HeadVar__1_1);
  MR_Word Cast_HeadVar2_4 = (MR_Word) (HeadVar__2_2);

  succeeded = check_hlds__type_assign____Unify____cons_type_info_source_0_0(Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_cons_infos____Compare____du_cons_type_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = (MR_Word) (HeadVar__2_2);
  MR_Word Cast_HeadVar2_5 = (MR_Word) (HeadVar__3_3);

  check_hlds__type_assign____Compare____cons_type_info_0_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
}

static MR_bool MR_CALL 
check_hlds__typecheck_cons_infos____Unify____du_cons_type_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = (MR_Word) (HeadVar__1_1);
  MR_Word Cast_HeadVar2_4 = (MR_Word) (HeadVar__2_2);

  succeeded = check_hlds__type_assign____Unify____cons_type_info_0_0(Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
check_hlds__typecheck_cons_infos____Compare____cons_info_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_19 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_20 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_19 == CastY_20);
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
              case (MR_Integer) 3:
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
              MR_String ArgX2_7 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 1))));
              MR_String ArgY2_8 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, 1))));
              MR_Word SubResult1_6;

              parse_tree__prog_data____Compare____builtin_type_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
              succeeded = (SubResult1_6 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult1_6;
              else
                mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
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
              MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 0))));
              MR_Word ArgY1_10 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, 0))));

              check_hlds__type_assign____Compare____cons_type_info_0_0(HeadVar__1_1, ArgX1_9, ArgY1_10);
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
            {
              MR_Word ArgX1_11 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 0))));
              MR_Word ArgY1_12 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 0))));
              MR_Word ArgX2_14 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
              MR_Word ArgY2_15 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));
              MR_Word ArgX3_17 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
              MR_Word ArgY3_18 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 2))));
              MR_Word SubResult1_13;

              parse_tree__prog_data____Compare____du_ctor_0_0(&SubResult1_13, ArgX1_11, ArgY1_12);
              succeeded = (SubResult1_13 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult1_13;
              else
              {
                MR_Word SubResult2_16;

                mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_cons_infos_scalar_common_1[2]), &SubResult2_16, ((MR_Box) (ArgX2_14)), ((MR_Box) (ArgY2_15)));
                succeeded = (SubResult2_16 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult2_16;
                else
                  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_cons_infos_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (ArgX3_17)), ((MR_Box) (ArgY3_18)));
              }
            }
            break;
        }
        break;
    }
}

MR_bool MR_CALL 
check_hlds__typecheck_cons_infos____Unify____cons_info_result_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_17 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_18 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_17 == CastY_18);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer CastX_15 = (MR_Integer) (HeadVar__1_1);
          MR_Integer CastY_16 = (MR_Integer) (HeadVar__2_2);

          succeeded = (CastY_16 == CastX_15);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
          MR_Word ArgY1_4;
          MR_String ArgX2_5 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, 1))));
          MR_String ArgY2_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
            ArgY2_6 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 1))));
            succeeded = parse_tree__prog_data____Unify____builtin_type_0_0(ArgX1_3, ArgY1_4);
            if (succeeded)
              succeeded = (strcmp(ArgX2_5, ArgY2_6) == 0);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, 0))));
          MR_Word ArgY1_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_8 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 0))));
            succeeded = check_hlds__type_assign____Unify____cons_type_info_0_0(ArgX1_7, ArgY1_8);
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word TypeInfo_21_21;
          MR_Word TypeInfo_22_22;
          MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 0))));
          MR_Word ArgY1_10;
          MR_Word ArgX2_11 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
          MR_Word ArgY2_12;
          MR_Word ArgX3_13 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 2))));
          MR_Word ArgY3_14;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3);
          if (succeeded)
          {
            ArgY1_10 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 0))));
            ArgY2_12 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
            ArgY3_14 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
            succeeded = parse_tree__prog_data____Unify____du_ctor_0_0(ArgX1_9, ArgY1_10);
            if (succeeded)
            {
              TypeInfo_21_21 = (MR_Word) (&check_hlds__typecheck_cons_infos_scalar_common_1[2]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_21_21, ((MR_Box) (ArgX2_11)), ((MR_Box) (ArgY2_12)));
              if (succeeded)
              {
                TypeInfo_22_22 = (MR_Word) (&check_hlds__typecheck_cons_infos_scalar_common_1[3]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_22_22, ((MR_Box) (ArgX3_13)), ((MR_Box) (ArgY3_14)));
              }
            }
          }
        }
        break;
    }
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_cons_infos____Compare____cons_constraints_action_0_0(
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
check_hlds__typecheck_cons_infos____Unify____cons_constraints_action_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_cons_infos__rename_constraint_3_p_0_1(
  void * env_ptr_arg)
{
  struct check_hlds__typecheck_cons_infos__rename_constraint_3_p_0_env_0_s * env_ptr = (struct check_hlds__typecheck_cons_infos__rename_constraint_3_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->check_hlds__typecheck_cons_infos__rename_constraint_3_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
check_hlds__typecheck_cons_infos__rename_constraint_3_p_0_2(
  void * env_ptr_arg)
{
  struct check_hlds__typecheck_cons_infos__rename_constraint_3_p_0_env_0_s * env_ptr = (struct check_hlds__typecheck_cons_infos__rename_constraint_3_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->check_hlds__typecheck_cons_infos__rename_constraint_3_p_0_env_0__TypeInfo_13_13 = (MR_Word) (&check_hlds__typecheck_cons_infos_scalar_common_1[0]);
  (env_ptr)->check_hlds__typecheck_cons_infos__rename_constraint_3_p_0_env_0__succeeded = mercury__map__contains_2_p_0((env_ptr)->check_hlds__typecheck_cons_infos__rename_constraint_3_p_0_env_0__TypeInfo_13_13, (env_ptr)->check_hlds__typecheck_cons_infos__rename_constraint_3_p_0_env_0__TypeInfo_13_13, (env_ptr)->check_hlds__typecheck_cons_infos__rename_constraint_3_p_0_env_0__TVarRenaming_4, ((MR_Box) ((env_ptr)->check_hlds__typecheck_cons_infos__rename_constraint_3_p_0_env_0__Var_12)));
  if ((env_ptr)->check_hlds__typecheck_cons_infos__rename_constraint_3_p_0_env_0__succeeded)
    check_hlds__typecheck_cons_infos__rename_constraint_3_p_0_1(env_ptr);
}

static void MR_CALL 
check_hlds__typecheck_cons_infos__rename_constraint_3_p_0_3(
  void * env_ptr_arg)
{
  struct check_hlds__typecheck_cons_infos__rename_constraint_3_p_0_env_0_s * env_ptr = (struct check_hlds__typecheck_cons_infos__rename_constraint_3_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->check_hlds__typecheck_cons_infos__rename_constraint_3_p_0_env_0__commit_0) == 0)
    {
      parse_tree__prog_type_scan__type_list_contains_var_2_p_0((env_ptr)->check_hlds__typecheck_cons_infos__rename_constraint_3_p_0_env_0__ArgTypes0_9, &(env_ptr)->check_hlds__typecheck_cons_infos__rename_constraint_3_p_0_env_0__Var_12, check_hlds__typecheck_cons_infos__rename_constraint_3_p_0_2, env_ptr);
      (env_ptr)->check_hlds__typecheck_cons_infos__rename_constraint_3_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->check_hlds__typecheck_cons_infos__rename_constraint_3_p_0_env_0__succeeded = MR_TRUE;
}

static MR_bool MR_CALL 
check_hlds__typecheck_cons_infos__rename_constraint_3_p_0(
  MR_Word TVarRenaming_4,
  MR_Word Constraint0_5,
  MR_Word * Constraint_6)
{
  struct check_hlds__typecheck_cons_infos__rename_constraint_3_p_0_env_0_s env;

  (env).check_hlds__typecheck_cons_infos__rename_constraint_3_p_0_env_0__TVarRenaming_4 = TVarRenaming_4;
  {
    MR_Word Ids_7 = ((MR_Word) ((MR_hl_field(0, Constraint0_5, 0))));
    MR_Word ClassName_8 = ((MR_Word) ((MR_hl_field(0, Constraint0_5, 1))));
    MR_Word ArgTypes_11;

    (env).check_hlds__typecheck_cons_infos__rename_constraint_3_p_0_env_0__ArgTypes0_9 = ((MR_Word) ((MR_hl_field(0, Constraint0_5, 2))));
    check_hlds__typecheck_cons_infos__rename_constraint_3_p_0_3(&env);
    if ((env).check_hlds__typecheck_cons_infos__rename_constraint_3_p_0_env_0__succeeded)
    {
      parse_tree__prog_type_subst__apply_renaming_to_types_3_p_0((env).check_hlds__typecheck_cons_infos__rename_constraint_3_p_0_env_0__TVarRenaming_4, (env).check_hlds__typecheck_cons_infos__rename_constraint_3_p_0_env_0__ArgTypes0_9, &ArgTypes_11);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        *Constraint_6 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Ids_7));
        MR_hl_field(0, base, 1) = ((MR_Box) (ClassName_8));
        MR_hl_field(0, base, 2) = ((MR_Box) (ArgTypes_11));
      }
      (env).check_hlds__typecheck_cons_infos__rename_constraint_3_p_0_env_0__succeeded = MR_TRUE;
    }
    return (env).check_hlds__typecheck_cons_infos__rename_constraint_3_p_0_env_0__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck_cons_infos__project_constraint_2_p_0(
  MR_Word CallTVars_3,
  MR_Word Constraint_4)
{
  MR_bool succeeded;
  MR_Word TypesToCheck_7 = ((MR_Word) ((MR_hl_field(0, Constraint_4, 2))));
  MR_Word TVarsToCheck0_8;
  MR_Word TVarsToCheck_9;
  MR_Word RelevantTVars_10;

  parse_tree__prog_type_scan__type_vars_in_types_2_p_0(TypesToCheck_7, &TVarsToCheck0_8);
  mercury__set__list_to_set_2_p_0((MR_Word) (&check_hlds__typecheck_cons_infos_scalar_common_1[0]), TVarsToCheck0_8, &TVarsToCheck_9);
  mercury__set__intersect_3_p_0((MR_Word) (&check_hlds__typecheck_cons_infos_scalar_common_1[0]), TVarsToCheck_9, CallTVars_3, &RelevantTVars_10);
  succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&check_hlds__typecheck_cons_infos_scalar_common_1[0]), RelevantTVars_10);
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__typecheck_cons_infos__is_field_access_function_for_type_ctor_4_p_0(
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
    Var_25 = ((MR_Word) ((MR_hl_field(1, ArgTypes_10, 0))));
    Var_24 = ((MR_Word) ((MR_hl_field(1, ArgTypes_10, 1))));
    succeeded = (Var_24 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_26 = ((MR_Word) ((MR_hl_field(1, Var_24, 1))));
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
              ResultType_14 = ((MR_Word) ((MR_hl_field(1, Var_26, 0))));
              Var_19 = ((MR_Word) ((MR_hl_field(1, Var_26, 1))));
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

void MR_CALL 
check_hlds__typecheck_cons_infos__typecheck_info_construct_all_cons_infos_5_p_0(
  MR_Word Info_6,
  MR_Word ConsId_7,
  MR_Integer Arity_8,
  MR_Word GoalId_9,
  MR_Word * ConsInfoResult_10)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) ConsId_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 2:
      *ConsInfoResult_10 = (MR_Word) ((MR_Unsigned) 4U);
      break;
    case (MR_Integer) 1:
      {
        MR_Word DuCtor_20 = (MR_Word) (MR_body((MR_Word) (ConsId_7), (MR_Integer) 1));
        MR_Word InFieldAccessFunc_21;
        MR_Word PredStatus_22;
        MR_Word Var_51;

        check_hlds__typecheck_info__typecheck_info_get_in_field_access_function_2_p_0(Info_6, &InFieldAccessFunc_21);
        succeeded = (InFieldAccessFunc_21 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          PredStatus_22 = ((MR_Word) ((MR_hl_field(1, InFieldAccessFunc_21, 0))));
          Var_51 = hlds__status__pred_status_defined_in_this_module_1_f_0(PredStatus_22);
          succeeded = (Var_51 == (MR_Integer) 1);
        }
        if (succeeded)
        {
          MR_Word UserArity_26 = (MR_Word) (Arity_8);
          MR_Word DuCtorSymName_27 = ((MR_Word) ((MR_hl_field(0, DuCtor_20, 0))));
          MR_Word AccessType_28;
          MR_Word FieldSymName_29;
          MR_Word FieldDefns_30;
          MR_Word TypeCtorInfo_21_66;
          MR_Word TypeInfo_22_67;
          MR_Word TypeCtorInfo_23_68;
          MR_Integer DuCtorArity_60 = ((MR_Integer) ((MR_hl_field(0, DuCtor_20, 1))));
          MR_Word ModuleInfo_62;
          MR_Word CtorFieldTable_63;
          MR_Word OoMFieldDefns_64;
          MR_Integer Var_69 = (MR_Integer) (UserArity_26);
          MR_Box conv0_OoMFieldDefns_64;

          succeeded = (DuCtorArity_60 == Var_69);
          if (succeeded)
          {
            switch (DuCtorArity_60) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 1:
                {
                  FieldSymName_29 = DuCtorSymName_27;
                  AccessType_28 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 2:
                {
                  succeeded = mdbcomp__sym_name__remove_sym_name_suffix_3_p_0(DuCtorSymName_27, (MR_String) " :=", &FieldSymName_29);
                  if (succeeded)
                  {
                    AccessType_28 = (MR_Integer) 1;
                    succeeded = MR_TRUE;
                  }
                }
                break;
            }
            if (succeeded)
            {
              check_hlds__typecheck_info__typecheck_info_get_module_info_2_p_0(Info_6, &ModuleInfo_62);
              hlds__hlds_module__module_info_get_ctor_field_table_2_p_0(ModuleInfo_62, &CtorFieldTable_63);
              TypeCtorInfo_21_66 = (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0);
              TypeInfo_22_67 = (MR_Word) (&check_hlds__typecheck_cons_infos_scalar_common_1[1]);
              succeeded = mercury__map__search_3_p_0(TypeCtorInfo_21_66, TypeInfo_22_67, CtorFieldTable_63, ((MR_Box) (FieldSymName_29)), &conv0_OoMFieldDefns_64);
              if (succeeded)
              {
                OoMFieldDefns_64 = ((MR_Word) (conv0_OoMFieldDefns_64));
                succeeded = MR_TRUE;
              }
              if (succeeded)
              {
                TypeCtorInfo_23_68 = (MR_Word) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_hlds_ctor_field_defn_0);
                FieldDefns_30 = mercury__one_or_more__one_or_more_to_list_1_f_1(TypeCtorInfo_23_68, OoMFieldDefns_64);
                succeeded = MR_TRUE;
              }
            }
          }
          if (succeeded)
          {
            MR_Word FieldAccessConsInfos_31;
            MR_Word FieldAccessConsErrors_32;

            check_hlds__typecheck_cons_infos__get_auto_generated_field_access_func_cons_infos_9_p_0(Info_6, GoalId_9, DuCtorSymName_27, UserArity_26, AccessType_28, FieldSymName_29, FieldDefns_30, &FieldAccessConsInfos_31, &FieldAccessConsErrors_32);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *ConsInfoResult_10 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) (DuCtor_20));
              MR_hl_field(3, base, 1) = ((MR_Box) (FieldAccessConsInfos_31));
              MR_hl_field(3, base, 2) = ((MR_Box) (FieldAccessConsErrors_32));
            }
          }
          else
            *ConsInfoResult_10 = (MR_Word) ((MR_Unsigned) 0U);
        }
        else
          check_hlds__typecheck_cons_infos__typecheck_info_construct_du_cons_infos_5_p_0(Info_6, DuCtor_20, Arity_8, GoalId_9, ConsInfoResult_10);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, ConsId_7, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
        case (MR_Integer) 2:
        case (MR_Integer) 3:
        case (MR_Integer) 10:
        case (MR_Integer) 11:
        case (MR_Integer) 12:
        case (MR_Integer) 13:
        case (MR_Integer) 14:
          *ConsInfoResult_10 = (MR_Word) ((MR_Unsigned) 4U);
          break;
        case (MR_Integer) 4:
          {
            MR_Word ConsInfo_19;
            MR_Word TupleConsTypeVarSet0_70;
            MR_Word TupleArgTVars_71;
            MR_Word TupleConsTypeVarSet_72;
            MR_Word TupleArgTypes_73;
            MR_Word TupleTypeCtor_74;
            MR_Word TupleConsType_75;
            MR_Word Var_77;
            MR_Word Var_80;

            mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TupleConsTypeVarSet0_70);
            mercury__varset__new_vars_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), Arity_8, &TupleArgTVars_71, TupleConsTypeVarSet0_70, &TupleConsTypeVarSet_72);
            Var_77 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__typecheck_cons_infos_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0));
            parse_tree__prog_type__var_list_to_type_list_3_p_0(Var_77, TupleArgTVars_71, &TupleArgTypes_73);
            {
              TupleTypeCtor_74 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, TupleTypeCtor_74, 0) = ((MR_Box) (&check_hlds__typecheck_cons_infos_scalar_common_2[1]));
              MR_hl_field(0, TupleTypeCtor_74, 1) = ((MR_Box) (Arity_8));
            }
            parse_tree__prog_type_construct__construct_type_3_p_0(TupleTypeCtor_74, TupleArgTypes_73, &TupleConsType_75);
            Var_80 = check_hlds__typecheck_util__empty_hlds_constraint_db_0_f_0();
            {
              ConsInfo_19 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, ConsInfo_19, 0) = ((MR_Box) (TupleConsTypeVarSet_72));
              MR_hl_field(0, ConsInfo_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, ConsInfo_19, 2) = ((MR_Box) (TupleConsType_75));
              MR_hl_field(0, ConsInfo_19, 3) = ((MR_Box) (TupleArgTypes_73));
              MR_hl_field(0, ConsInfo_19, 4) = ((MR_Box) (Var_80));
              MR_hl_field(0, ConsInfo_19, 5) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_cons_infos_scalar_common_2[2])));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *ConsInfoResult_10 = base;
              MR_hl_field(2, base, 0) = ((MR_Box) (ConsInfo_19));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word IntConst_11 = ((MR_Word) ((MR_hl_field(3, ConsId_7, 1))));
            MR_Word Var_49;
            MR_Word BuiltinType_56;
            MR_String TypeName_57;

            Var_49 = parse_tree__prog_data__type_of_int_const_1_f_0(IntConst_11);
            {
              BuiltinType_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, BuiltinType_56, 0) = (MR_Box) ((MR_Unsigned) (Var_49));
            }
            TypeName_57 = parse_tree__prog_data__type_name_of_int_const_1_f_0(IntConst_11);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *ConsInfoResult_10 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (BuiltinType_56));
              MR_hl_field(1, base, 1) = ((MR_Box) (TypeName_57));
            }
          }
          break;
        case (MR_Integer) 6:
          *ConsInfoResult_10 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_cons_infos_scalar_common_1[6]));
          break;
        case (MR_Integer) 7:
          *ConsInfoResult_10 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_cons_infos_scalar_common_1[5]));
          break;
        case (MR_Integer) 8:
          *ConsInfoResult_10 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_cons_infos_scalar_common_1[7]));
          break;
        case (MR_Integer) 9:
          {
            MR_Word IDCKind_17 = ((MR_Unsigned) ((MR_hl_field(3, ConsId_7, 1))) & (MR_Integer) 7);
            MR_Word BuiltinType_54 = ((&check_hlds__typecheck_cons_infos_vector_common_8[0 + IDCKind_17]))->check_hlds__typecheck_cons_infos__vector_common_type_8_0__vct_8_f_0;
            MR_String TypeName_55 = ((&check_hlds__typecheck_cons_infos_vector_common_8[0 + IDCKind_17]))->check_hlds__typecheck_cons_infos__vector_common_type_8_0__vct_8_f_1;

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *ConsInfoResult_10 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (BuiltinType_54));
              MR_hl_field(1, base, 1) = ((MR_Box) (TypeName_55));
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
check_hlds__typecheck_cons_infos__typecheck_info_construct_du_cons_infos_5_p_0(
  MR_Word Info_6,
  MR_Word DuCtor_7,
  MR_Integer Arity_8,
  MR_Word GoalId_9,
  MR_Word * ConsInfoResult_10)
{
  MR_bool succeeded;
  MR_Word DuConsInfos_11;
  MR_Word DuConsErrors_12;
  MR_Word UserArity_13;
  MR_Word FieldAccessConsInfos_18;
  MR_Word FieldAccessConsErrors_19;
  MR_Word SymName_20;
  MR_Word CharConsInfos_26;
  MR_Word TupleConsInfos_28;
  MR_Word PredConsInfos_29;
  MR_Word ApplyConsInfos_31;
  MR_Word ConsInfos_32;
  MR_Word ConsErrors_33;
  MR_Word Var_39;
  MR_Word Var_40;
  MR_Word Var_41;
  MR_Word Var_42;
  MR_Word Name_45 = ((MR_Word) ((MR_hl_field(0, DuCtor_7, 0))));
  MR_Integer Arity_46 = ((MR_Integer) ((MR_hl_field(0, DuCtor_7, 1))));
  MR_Word ConsIdTypeCtor_47 = ((MR_Word) ((MR_hl_field(0, DuCtor_7, 2))));
  MR_Word ConsTable_48;
  MR_Word PlainConsInfos_50;
  MR_Word PlainConsErrors_51;
  MR_Word ConsDefns_49;
  MR_Word OrigDuCtor_53;
  MR_Word ExistQConsDefns_54;
  MR_Word OrigName_52;
  MR_Word DuCtorSymName_14;
  MR_Word AccessType_15;
  MR_Word FieldSymName_16;
  MR_Word FieldDefns_17;
  MR_Word TypeCtorInfo_21_67;
  MR_Word TypeInfo_22_68;
  MR_Word TypeCtorInfo_23_69;
  MR_Integer DuCtorArity_61;
  MR_Word ModuleInfo_63;
  MR_Word CtorFieldTable_64;
  MR_Word OoMFieldDefns_65;
  MR_Integer Var_70;
  MR_Box conv0_OoMFieldDefns_65;
  MR_String String_23;
  MR_Char Var_24;
  MR_String Var_36;
  MR_Word ApplyConsInfo_30;

  check_hlds__typecheck_info__typecheck_info_get_cons_table_2_p_0(Info_6, &ConsTable_48);
  succeeded = hlds__hlds_cons__search_cons_table_3_p_0(ConsTable_48, DuCtor_7, &ConsDefns_49);
  if (succeeded)
    check_hlds__typecheck_cons_infos__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_108_100_115_95_99_111_110_115_95_100_101_102_110_115_95_116_111_95_99_111_110_115_95_116_121_112_101_95_105_110_102_111_115_95_97_110_100_95_101_114_114_111_114_115_95_95_91_51_93_95_48_7_p_0(Info_6, GoalId_9, DuCtor_7, ConsDefns_49, &PlainConsInfos_50, &PlainConsErrors_51);
  else
  {
    PlainConsInfos_50 = (MR_Word) ((MR_Unsigned) 0U);
    PlainConsErrors_51 = (MR_Word) ((MR_Unsigned) 0U);
  }
  succeeded = parse_tree__prog_type__remove_new_prefix_2_p_0(Name_45, &OrigName_52);
  if (succeeded)
  {
    {
      OrigDuCtor_53 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, OrigDuCtor_53, 0) = ((MR_Box) (OrigName_52));
      MR_hl_field(0, OrigDuCtor_53, 1) = ((MR_Box) (Arity_46));
      MR_hl_field(0, OrigDuCtor_53, 2) = ((MR_Box) (ConsIdTypeCtor_47));
    }
    succeeded = hlds__hlds_cons__search_cons_table_3_p_0(ConsTable_48, OrigDuCtor_53, &ExistQConsDefns_54);
  }
  if (succeeded)
  {
    MR_Word UnivQuantConsInfos_55;
    MR_Word UnivQuantConsErrors_56;

    check_hlds__typecheck_cons_infos__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_108_100_115_95_99_111_110_115_95_100_101_102_110_115_95_116_111_95_99_111_110_115_95_116_121_112_101_95_105_110_102_111_115_95_97_110_100_95_101_114_114_111_114_115_95_95_91_51_93_95_49_7_p_1(Info_6, GoalId_9, OrigDuCtor_53, ExistQConsDefns_54, &UnivQuantConsInfos_55, &UnivQuantConsErrors_56);
    DuConsInfos_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_cons_type_info_0), PlainConsInfos_50, UnivQuantConsInfos_55);
    DuConsErrors_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__typecheck_error_undef__check_hlds__typecheck_error_undef__type_ctor_info_cons_error_0), PlainConsErrors_51, UnivQuantConsErrors_56);
  }
  else
  {
    DuConsInfos_11 = PlainConsInfos_50;
    DuConsErrors_12 = PlainConsErrors_51;
  }
  UserArity_13 = (MR_Word) (Arity_8);
  DuCtorSymName_14 = ((MR_Word) ((MR_hl_field(0, DuCtor_7, 0))));
  DuCtorArity_61 = ((MR_Integer) ((MR_hl_field(0, DuCtor_7, 1))));
  Var_70 = (MR_Integer) (UserArity_13);
  succeeded = (DuCtorArity_61 == Var_70);
  if (succeeded)
  {
    switch (DuCtorArity_61) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 1:
        {
          FieldSymName_16 = DuCtorSymName_14;
          AccessType_15 = (MR_Integer) 0;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 2:
        {
          succeeded = mdbcomp__sym_name__remove_sym_name_suffix_3_p_0(DuCtorSymName_14, (MR_String) " :=", &FieldSymName_16);
          if (succeeded)
          {
            AccessType_15 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
        }
        break;
    }
    if (succeeded)
    {
      check_hlds__typecheck_info__typecheck_info_get_module_info_2_p_0(Info_6, &ModuleInfo_63);
      hlds__hlds_module__module_info_get_ctor_field_table_2_p_0(ModuleInfo_63, &CtorFieldTable_64);
      TypeCtorInfo_21_67 = (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0);
      TypeInfo_22_68 = (MR_Word) (&check_hlds__typecheck_cons_infos_scalar_common_1[1]);
      succeeded = mercury__map__search_3_p_0(TypeCtorInfo_21_67, TypeInfo_22_68, CtorFieldTable_64, ((MR_Box) (FieldSymName_16)), &conv0_OoMFieldDefns_65);
      if (succeeded)
      {
        OoMFieldDefns_65 = ((MR_Word) (conv0_OoMFieldDefns_65));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        TypeCtorInfo_23_69 = (MR_Word) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_hlds_ctor_field_defn_0);
        FieldDefns_17 = mercury__one_or_more__one_or_more_to_list_1_f_1(TypeCtorInfo_23_69, OoMFieldDefns_65);
        succeeded = MR_TRUE;
      }
    }
  }
  if (succeeded)
    check_hlds__typecheck_cons_infos__get_auto_generated_field_access_func_cons_infos_9_p_0(Info_6, GoalId_9, DuCtorSymName_14, UserArity_13, AccessType_15, FieldSymName_16, FieldDefns_17, &FieldAccessConsInfos_18, &FieldAccessConsErrors_19);
  else
  {
    FieldAccessConsInfos_18 = (MR_Word) ((MR_Unsigned) 0U);
    FieldAccessConsErrors_19 = (MR_Word) ((MR_Unsigned) 0U);
  }
  SymName_20 = ((MR_Word) ((MR_hl_field(0, DuCtor_7, 0))));
  succeeded = (Arity_8 == (MR_Integer) 0);
  if (succeeded)
  {
    succeeded = ((MR_tag((MR_Word) SymName_20)) == (MR_Integer) 0);
    if (succeeded)
    {
      String_23 = ((MR_String) ((MR_hl_field(0, SymName_20, 0))));
      succeeded = mercury__string__char_to_string_2_p_1(&Var_24, String_23);
    }
  }
  if (succeeded)
  {
    MR_Word CharConsInfo_25;
    MR_Word ConsType_72;
    MR_Word ConsTypeVarSet_73;
    MR_Word Var_79;

    parse_tree__prog_type_construct__construct_type_3_p_0((MR_Word) (&check_hlds__typecheck_cons_infos_scalar_common_1[4]), (MR_Word) ((MR_Unsigned) 0U), &ConsType_72);
    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &ConsTypeVarSet_73);
    Var_79 = check_hlds__typecheck_util__empty_hlds_constraint_db_0_f_0();
    {
      CharConsInfo_25 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, CharConsInfo_25, 0) = ((MR_Box) (ConsTypeVarSet_73));
      MR_hl_field(0, CharConsInfo_25, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, CharConsInfo_25, 2) = ((MR_Box) (ConsType_72));
      MR_hl_field(0, CharConsInfo_25, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, CharConsInfo_25, 4) = ((MR_Box) (Var_79));
      MR_hl_field(0, CharConsInfo_25, 5) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_cons_infos_scalar_common_2[4])));
    }
    {
      CharConsInfos_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, CharConsInfos_26, 0) = ((MR_Box) (CharConsInfo_25));
      MR_hl_field(1, CharConsInfos_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  else
    CharConsInfos_26 = (MR_Word) ((MR_Unsigned) 0U);
  succeeded = ((MR_tag((MR_Word) SymName_20)) == (MR_Integer) 0);
  if (succeeded)
  {
    Var_36 = ((MR_String) ((MR_hl_field(0, SymName_20, 0))));
    succeeded = (strcmp(Var_36, (MR_String) "{}") == 0);
  }
  if (succeeded)
  {
    MR_Word TupleConsInfo_27;
    MR_Word TupleConsTypeVarSet0_82;
    MR_Word TupleArgTVars_83;
    MR_Word TupleConsTypeVarSet_84;
    MR_Word TupleArgTypes_85;
    MR_Word TupleTypeCtor_86;
    MR_Word TupleConsType_87;
    MR_Word Var_89;
    MR_Word Var_92;

    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TupleConsTypeVarSet0_82);
    mercury__varset__new_vars_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), Arity_8, &TupleArgTVars_83, TupleConsTypeVarSet0_82, &TupleConsTypeVarSet_84);
    Var_89 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__typecheck_cons_infos_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0));
    parse_tree__prog_type__var_list_to_type_list_3_p_0(Var_89, TupleArgTVars_83, &TupleArgTypes_85);
    {
      TupleTypeCtor_86 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TupleTypeCtor_86, 0) = ((MR_Box) (&check_hlds__typecheck_cons_infos_scalar_common_2[1]));
      MR_hl_field(0, TupleTypeCtor_86, 1) = ((MR_Box) (Arity_8));
    }
    parse_tree__prog_type_construct__construct_type_3_p_0(TupleTypeCtor_86, TupleArgTypes_85, &TupleConsType_87);
    Var_92 = check_hlds__typecheck_util__empty_hlds_constraint_db_0_f_0();
    {
      TupleConsInfo_27 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TupleConsInfo_27, 0) = ((MR_Box) (TupleConsTypeVarSet_84));
      MR_hl_field(0, TupleConsInfo_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, TupleConsInfo_27, 2) = ((MR_Box) (TupleConsType_87));
      MR_hl_field(0, TupleConsInfo_27, 3) = ((MR_Box) (TupleArgTypes_85));
      MR_hl_field(0, TupleConsInfo_27, 4) = ((MR_Box) (Var_92));
      MR_hl_field(0, TupleConsInfo_27, 5) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_cons_infos_scalar_common_2[2])));
    }
    {
      TupleConsInfos_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, TupleConsInfos_28, 0) = ((MR_Box) (TupleConsInfo_27));
      MR_hl_field(1, TupleConsInfos_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  else
    TupleConsInfos_28 = (MR_Word) ((MR_Unsigned) 0U);
  check_hlds__typecheck_cons_infos__builtin_pred_type_5_p_0(Info_6, DuCtor_7, Arity_8, GoalId_9, &PredConsInfos_29);
  succeeded = check_hlds__typecheck_cons_infos__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_97_112_112_108_121_95_116_121_112_101_95_95_91_49_93_95_48_4_p_0(DuCtor_7, Arity_8, &ApplyConsInfo_30);
  if (succeeded)
    {
      ApplyConsInfos_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, ApplyConsInfos_31, 0) = ((MR_Box) (ApplyConsInfo_30));
      MR_hl_field(1, ApplyConsInfos_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  else
    ApplyConsInfos_31 = (MR_Word) ((MR_Unsigned) 0U);
  Var_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_cons_type_info_0), PredConsInfos_29, ApplyConsInfos_31);
  Var_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_cons_type_info_0), TupleConsInfos_28, Var_42);
  Var_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_cons_type_info_0), CharConsInfos_26, Var_41);
  Var_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_cons_type_info_0), FieldAccessConsInfos_18, Var_40);
  ConsInfos_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_cons_type_info_0), DuConsInfos_11, Var_39);
  ConsErrors_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__typecheck_error_undef__check_hlds__typecheck_error_undef__type_ctor_info_cons_error_0), DuConsErrors_12, FieldAccessConsErrors_19);
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    *ConsInfoResult_10 = base;
    MR_hl_field(3, base, 0) = ((MR_Box) (DuCtor_7));
    MR_hl_field(3, base, 1) = ((MR_Box) (ConsInfos_32));
    MR_hl_field(3, base, 2) = ((MR_Box) (ConsErrors_33));
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck_cons_infos__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_97_112_112_108_121_95_116_121_112_101_95_95_91_49_93_95_48_4_p_0(
  MR_Word DuCtor_6,
  MR_Integer Arity_7,
  MR_Word * ConsTypeInfo_8)
{
  MR_bool succeeded;
  MR_String ApplyName_9;
  MR_String ApplyNameToUse_12;
  MR_Word Purity_13;
  MR_Word TypeVarSet_14;
  MR_Word FuncType_15;
  MR_Word ArgTypes_16;
  MR_Word ReturnType_17;
  MR_Word ExistQVars_18;
  MR_Word ApplyArgTypes_19;
  MR_Word Source_20;
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, DuCtor_6, 0))));
  MR_Integer Var_22;
  MR_Integer Var_23;
  MR_Integer Var_24;
  MR_Word Var_25;
  MR_Integer lo_0;
  MR_Integer hi_1;
  MR_Integer mid_2;
  MR_Integer result_3;

  succeeded = ((MR_tag((MR_Word) Var_21)) == (MR_Integer) 0);
  if (succeeded)
  {
    ApplyName_9 = ((MR_String) ((MR_hl_field(0, Var_21, 0))));
    // binary string jump switch
    ;
    lo_0 = (MR_Integer) 0;
    hi_1 = (MR_Integer) 3;
    do
    {
      mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
      result_3 = MR_strcmp(ApplyName_9, ((&check_hlds__typecheck_cons_infos_vector_common_7[0 + mid_2]))->check_hlds__typecheck_cons_infos__vector_common_type_7_0__vct_7_f_0);
      if ((result_3 == (MR_Integer) 0))
      {
        switch (((&check_hlds__typecheck_cons_infos_vector_common_7[0 + mid_2]))->check_hlds__typecheck_cons_infos__vector_common_type_7_0__vct_7_f_1) {
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
        Var_24 = (MR_Integer) 1;
        Var_23 = (MR_Integer) ((MR_Unsigned) Arity_7 - (MR_Unsigned) Var_24);
        check_hlds__typecheck_util__general_higher_order_func_type_6_p_0(Purity_13, Var_23, &TypeVarSet_14, &FuncType_15, &ArgTypes_16, &ReturnType_17);
        ExistQVars_18 = (MR_Word) ((MR_Unsigned) 0U);
        {
          ApplyArgTypes_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, ApplyArgTypes_19, 0) = ((MR_Box) (FuncType_15));
          MR_hl_field(1, ApplyArgTypes_19, 1) = ((MR_Box) (ArgTypes_16));
        }
        {
          Source_20 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Source_20, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Source_20, 1) = ((MR_Box) (ApplyNameToUse_12));
        }
        Var_25 = check_hlds__typecheck_util__empty_hlds_constraint_db_0_f_0();
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          *ConsTypeInfo_8 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (TypeVarSet_14));
          MR_hl_field(0, base, 1) = ((MR_Box) (ExistQVars_18));
          MR_hl_field(0, base, 2) = ((MR_Box) (ReturnType_17));
          MR_hl_field(0, base, 3) = ((MR_Box) (ApplyArgTypes_19));
          MR_hl_field(0, base, 4) = ((MR_Box) (Var_25));
          MR_hl_field(0, base, 5) = ((MR_Box) (Source_20));
        }
        succeeded = MR_TRUE;
      }
    }
  }
  return succeeded;
}

static MR_Box MR_CALL 
check_hlds__typecheck_cons_infos__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_108_100_115_95_99_111_110_115_95_100_101_102_110_115_95_116_111_95_99_111_110_115_95_116_121_112_101_95_105_110_102_111_115_95_97_110_100_95_101_114_114_111_114_115_95_95_91_51_93_95_49_7_p_1_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_48;

  conv0_LambdaHeadVar__2_48 = check_hlds__typecheck_cons_infos__IntroducedFrom__func__hlds_cons_defn_to_maybe_cons_type_info__447__3_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_48));
  return wrapper_arg_2;
}

static void MR_CALL 
check_hlds__typecheck_cons_infos__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_108_100_115_95_99_111_110_115_95_100_101_102_110_115_95_116_111_95_99_111_110_115_95_116_121_112_101_95_105_110_102_111_115_95_97_110_100_95_101_114_114_111_114_115_95_95_91_51_93_95_49_7_p_1(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
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
    MR_Word ConsDefn_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 0))));
    MR_Word ConsDefns_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 1))));
    MR_Word TailConsTypeInfos_21;
    MR_Word TailConsErrors_22;
    MR_Word TypeCtor_26 = ((MR_Word) ((MR_hl_field(0, ConsDefn_16, 0))));
    MR_Word ConsTypeVarSet_27 = ((MR_Word) ((MR_hl_field(0, ConsDefn_16, 1))));
    MR_Word ConsTypeParams_28 = ((MR_Word) ((MR_hl_field(0, ConsDefn_16, 2))));
    MR_Word ConsTypeKinds_29 = ((MR_Word) ((MR_hl_field(0, ConsDefn_16, 3))));
    MR_Word MaybeExistConstraints_30 = ((MR_Word) ((MR_hl_field(0, ConsDefn_16, 4))));
    MR_Word Args_31 = ((MR_Word) ((MR_hl_field(0, ConsDefn_16, 5))));
    MR_Word ArgTypes_33;
    MR_Word TypeTable_34;
    MR_Word TypeDefn_35;
    MR_Word Body_36;
    MR_Word PredId_37;
    MR_Word ModuleInfo_38;
    MR_Word PredInfo_39;
    MR_Word PredStatus_40;
    MR_Word BodyDu_41;
    MR_Word GoalType_43;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_61;

    ArgTypes_33 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&check_hlds__typecheck_cons_infos_scalar_common_5[2]), Args_31);
    check_hlds__typecheck_info__typecheck_info_get_type_table_2_p_0(HeadVar__1_1, &TypeTable_34);
    hlds__hlds_data__lookup_type_ctor_defn_3_p_0(TypeTable_34, TypeCtor_26, &TypeDefn_35);
    hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_35, &Body_36);
    check_hlds__typecheck_info__typecheck_info_get_pred_id_2_p_0(HeadVar__1_1, &PredId_37);
    check_hlds__typecheck_info__typecheck_info_get_module_info_2_p_0(HeadVar__1_1, &ModuleInfo_38);
    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_38, PredId_37, &PredInfo_39);
    hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo_39, &PredStatus_40);
    check_hlds__typecheck_cons_infos__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_108_100_115_95_99_111_110_115_95_100_101_102_110_115_95_116_111_95_99_111_110_115_95_116_121_112_101_95_105_110_102_111_115_95_97_110_100_95_101_114_114_111_114_115_95_95_91_51_93_95_49_7_p_1(HeadVar__1_1, HeadVar__2_2, HeadVar__4_4, ConsDefns_17, &TailConsTypeInfos_21, &TailConsErrors_22);
    succeeded = ((MR_tag((MR_Word) Body_36)) == (MR_Integer) 0);
    if (succeeded)
    {
      BodyDu_41 = (MR_Word) ((MR_Word) (Body_36));
      Var_59 = ((MR_Word) ((MR_hl_field(0, BodyDu_41, 5))));
      succeeded = (Var_59 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        hlds__hlds_pred__pred_info_get_goal_type_2_p_0(PredInfo_39, &GoalType_43);
        succeeded = ((MR_tag((MR_Word) GoalType_43)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_60 = ((MR_Unsigned) ((MR_hl_field(0, GoalType_43, 0))) & (MR_Integer) 3);
          succeeded = (Var_60 == (MR_Integer) 3);
        }
        succeeded = !(succeeded);
        if (succeeded)
        {
          succeeded = hlds__hlds_pred__is_unify_index_or_compare_pred_1_p_0(PredInfo_39);
          succeeded = !(succeeded);
          if (succeeded)
          {
            Var_61 = (MR_Word) (PredStatus_40);
            succeeded = (Var_61 != (MR_Word) ((MR_Unsigned) 0U));
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word HeadConsError_24;

      {
        HeadConsError_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadConsError_24, 0) = ((MR_Box) (TypeCtor_26));
        MR_hl_field(1, HeadConsError_24, 1) = ((MR_Box) (TypeDefn_35));
      }
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
      MR_Word TypeStatus_44;
      MR_Word Var_63;
      MR_Word Var_64;

      hlds__hlds_data__get_type_defn_status_2_p_0(TypeDefn_35, &TypeStatus_44);
      Var_63 = (MR_Word) (TypeStatus_44);
      succeeded = (Var_63 == (MR_Word) ((MR_Unsigned) 4U));
      if (succeeded)
      {
        succeeded = hlds__hlds_pred__is_unify_index_or_compare_pred_1_p_0(PredInfo_39);
        succeeded = !(succeeded);
        if (succeeded)
        {
          Var_64 = (MR_Word) (PredStatus_40);
          succeeded = (Var_64 != (MR_Word) ((MR_Unsigned) 0U));
        }
      }
      if (succeeded)
      {
        MR_Word HeadConsError_76 = ((MR_Word) ((MR_hl_field(1, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_cons_infos_scalar_common_2[3])), 0))));

        *HeadVar__6_6 = TailConsTypeInfos_21;
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__7_7 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (HeadConsError_76));
          MR_hl_field(1, base, 1) = ((MR_Box) (TailConsErrors_22));
        }
      }
      else
      {
        MR_Word HeadMaybeConsTypeInfo_83;

        succeeded = (MaybeExistConstraints_30 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          MR_Word Var_65;

          {
            Var_65 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_65, 0) = ((MR_Box) (TypeCtor_26));
          }
          {
            HeadMaybeConsTypeInfo_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, HeadMaybeConsTypeInfo_83, 0) = ((MR_Box) (Var_65));
          }
        }
        else
        {
          MR_Word ConsTypeArgs_45;
          MR_Word ConsType_46;
          MR_Word ExistProgConstraints_49;
          MR_Word ProgConstraints_53;
          MR_Word ClassTable_55;
          MR_Word ConstraintDb_56;
          MR_Word ConsTypeInfo_57;
          MR_Word Var_66;

          parse_tree__prog_type__var_list_to_type_list_3_p_0(ConsTypeKinds_29, ConsTypeParams_28, &ConsTypeArgs_45);
          parse_tree__prog_type_construct__construct_type_3_p_0(TypeCtor_26, ConsTypeArgs_45, &ConsType_46);
          if ((MaybeExistConstraints_30 == (MR_Word) ((MR_Unsigned) 0U)))
            ExistProgConstraints_49 = (MR_Word) ((MR_Unsigned) 0U);
          else
          {
            MR_Word ExistConstraints_50 = (MR_Word) (MR_body((MR_Word) (MaybeExistConstraints_30), (MR_Integer) 1));

            ExistProgConstraints_49 = ((MR_Word) ((MR_hl_field(0, ExistConstraints_50, 1))));
          }
          {
            ProgConstraints_53 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, ProgConstraints_53, 0) = ((MR_Box) (ExistProgConstraints_49));
            MR_hl_field(0, ProgConstraints_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          hlds__hlds_module__module_info_get_class_table_2_p_0(ModuleInfo_38, &ClassTable_55);
          hlds__hlds_class__make_body_hlds_constraint_db_5_p_0(ClassTable_55, ConsTypeVarSet_27, HeadVar__2_2, ProgConstraints_53, &ConstraintDb_56);
          {
            Var_66 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_66, 0) = ((MR_Box) (TypeCtor_26));
            MR_hl_field(0, Var_66, 1) = ((MR_Box) (HeadVar__4_4));
          }
          {
            ConsTypeInfo_57 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, ConsTypeInfo_57, 0) = ((MR_Box) (ConsTypeVarSet_27));
            MR_hl_field(0, ConsTypeInfo_57, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, ConsTypeInfo_57, 2) = ((MR_Box) (ConsType_46));
            MR_hl_field(0, ConsTypeInfo_57, 3) = ((MR_Box) (ArgTypes_33));
            MR_hl_field(0, ConsTypeInfo_57, 4) = ((MR_Box) (ConstraintDb_56));
            MR_hl_field(0, ConsTypeInfo_57, 5) = ((MR_Box) (Var_66));
          }
          HeadMaybeConsTypeInfo_83 = (MR_Word) ((MR_Word) (ConsTypeInfo_57));
        }
        if (((MR_tag((MR_Word) HeadMaybeConsTypeInfo_83)) == (MR_Integer) 1))
        {
          MR_Word HeadConsError_80 = ((MR_Word) ((MR_hl_field(1, HeadMaybeConsTypeInfo_83, 0))));

          *HeadVar__6_6 = TailConsTypeInfos_21;
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__7_7 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (HeadConsError_80));
            MR_hl_field(1, base, 1) = ((MR_Box) (TailConsErrors_22));
          }
        }
        else
        {
          MR_Word HeadConsTypeInfo_23 = (MR_Word) ((MR_Word) (HeadMaybeConsTypeInfo_83));
          MR_Word Var_25 = (MR_Word) (HeadConsTypeInfo_23);

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__6_6 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Var_25));
            MR_hl_field(1, base, 1) = ((MR_Box) (TailConsTypeInfos_21));
          }
          *HeadVar__7_7 = TailConsErrors_22;
        }
      }
    }
  }
}

static void MR_CALL 
check_hlds__typecheck_cons_infos__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_108_100_115_95_99_111_110_115_95_100_101_102_110_115_95_116_111_95_99_111_110_115_95_116_121_112_101_95_105_110_102_111_115_95_97_110_100_95_101_114_114_111_114_115_95_95_91_51_93_95_48_7_p_0(
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
    MR_Word ConsDefn_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 0))));
    MR_Word ConsDefns_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 1))));
    MR_Word HeadMaybeConsTypeInfo_20;
    MR_Word TailConsTypeInfos_21;
    MR_Word TailConsErrors_22;

    check_hlds__typecheck_cons_infos__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_108_100_115_95_99_111_110_115_95_100_101_102_110_95_116_111_95_109_97_121_98_101_95_99_111_110_115_95_116_121_112_101_95_105_110_102_111_95_95_91_51_93_95_48_6_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__4_4, ConsDefn_16, &HeadMaybeConsTypeInfo_20);
    check_hlds__typecheck_cons_infos__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_108_100_115_95_99_111_110_115_95_100_101_102_110_115_95_116_111_95_99_111_110_115_95_116_121_112_101_95_105_110_102_111_115_95_97_110_100_95_101_114_114_111_114_115_95_95_91_51_93_95_48_7_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__4_4, ConsDefns_17, &TailConsTypeInfos_21, &TailConsErrors_22);
    if (((MR_tag((MR_Word) HeadMaybeConsTypeInfo_20)) == (MR_Integer) 1))
    {
      MR_Word HeadConsError_24 = ((MR_Word) ((MR_hl_field(1, HeadMaybeConsTypeInfo_20, 0))));

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
      MR_Word Var_25 = (MR_Word) (HeadConsTypeInfo_23);

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__6_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_25));
        MR_hl_field(1, base, 1) = ((MR_Box) (TailConsTypeInfos_21));
      }
      *HeadVar__7_7 = TailConsErrors_22;
    }
  }
}

static void MR_CALL 
check_hlds__typecheck_cons_infos__builtin_pred_type_5_p_0(
  MR_Word Info_6,
  MR_Word DuCtor_7,
  MR_Integer Arity_8,
  MR_Word GoalId_9,
  MR_Word * ConsTypeInfos_10)
{
  MR_Word SymName_11 = ((MR_Word) ((MR_hl_field(0, DuCtor_7, 0))));
  MR_Word PredicateTable_14;
  MR_Word IsFullyQualified_15;
  MR_Word PredIds_16;

  check_hlds__typecheck_info__typecheck_info_get_predicate_table_2_p_0(Info_6, &PredicateTable_14);
  check_hlds__typecheck_info__typecheck_info_get_calls_are_fully_qualified_2_p_0(Info_6, &IsFullyQualified_15);
  hlds__pred_table__predicate_table_lookup_sym_name_4_p_0(PredicateTable_14, IsFullyQualified_15, SymName_11, &PredIds_16);
  if ((PredIds_16 == (MR_Word) ((MR_Unsigned) 0U)))
    *ConsTypeInfos_10 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word PredIdTable_19;

    hlds__pred_table__predicate_table_get_pred_id_table_2_p_0(PredicateTable_14, &PredIdTable_19);
    check_hlds__typecheck_cons_infos__accumulate_cons_type_infos_for_pred_ids_7_p_0(Info_6, PredIdTable_19, GoalId_9, PredIds_16, Arity_8, (MR_Word) ((MR_Unsigned) 0U), ConsTypeInfos_10);
  }
}

static void MR_CALL 
check_hlds__typecheck_cons_infos__accumulate_cons_type_infos_for_pred_ids_7_p_0(
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
      MR_Word PredId_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
      MR_Word PredIds_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
      MR_Word STATE_VARIABLE_ConsTypeInfos_1_24;
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
      mercury__map__lookup_3_p_0((MR_Word) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredTable_2, ((MR_Box) (PredId_18)), &conv0_PredInfo_27);
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
        MR_Word PredConstraintDb_38;
        MR_Word ConsTypeInfo_39;
        MR_Word Var_49;

        mercury__list__det_split_list_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Arity_5, CompleteArgTypes_33, &ArgTypes_35, &PredTypeParams_36);
        parse_tree__prog_type_construct__construct_higher_order_pred_type_3_p_0(Purity_34, PredTypeParams_36, &PredType_37);
        hlds__hlds_class__make_body_hlds_constraint_db_5_p_0(ClassTable_26, PredTypeVarSet_31, GoalId_3, PredClassContext_30, &PredConstraintDb_38);
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
          MR_hl_field(0, ConsTypeInfo_39, 4) = ((MR_Box) (PredConstraintDb_38));
          MR_hl_field(0, ConsTypeInfo_39, 5) = ((MR_Box) (Var_49));
        }
        {
          STATE_VARIABLE_ConsTypeInfos_1_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_ConsTypeInfos_1_24, 0) = ((MR_Box) (ConsTypeInfo_39));
          MR_hl_field(1, STATE_VARIABLE_ConsTypeInfos_1_24, 1) = ((MR_Box) (STATE_VARIABLE_ConsTypeInfos_0_6));
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
          MR_Word PredConstraintDb_52;
          MR_Word ConsTypeInfo_53;
          MR_Box conv1_FuncReturnTypeParam_44;

          mercury__list__det_split_list_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Arity_5, CompleteArgTypes_33, &FuncArgTypes_41, &FuncTypeParams_42);
          parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), FuncTypeParams_42, &FuncArgTypeParams_43, &conv1_FuncReturnTypeParam_44);
          FuncReturnTypeParam_44 = ((MR_Word) (conv1_FuncReturnTypeParam_44));
          if ((FuncArgTypeParams_43 == (MR_Word) ((MR_Unsigned) 0U)))
            FuncType_45 = FuncReturnTypeParam_44;
          else
            parse_tree__prog_type_construct__construct_higher_order_func_type_4_p_0(Purity_34, FuncArgTypeParams_43, FuncReturnTypeParam_44, &FuncType_45);
          hlds__hlds_class__make_body_hlds_constraint_db_5_p_0(ClassTable_26, PredTypeVarSet_31, GoalId_3, PredClassContext_30, &PredConstraintDb_52);
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
            MR_hl_field(0, ConsTypeInfo_53, 4) = ((MR_Box) (PredConstraintDb_52));
            MR_hl_field(0, ConsTypeInfo_53, 5) = ((MR_Box) (Var_51));
          }
          {
            STATE_VARIABLE_ConsTypeInfos_1_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, STATE_VARIABLE_ConsTypeInfos_1_24, 0) = ((MR_Box) (ConsTypeInfo_53));
            MR_hl_field(1, STATE_VARIABLE_ConsTypeInfos_1_24, 1) = ((MR_Box) (STATE_VARIABLE_ConsTypeInfos_0_6));
          }
        }
        else
          STATE_VARIABLE_ConsTypeInfos_1_24 = STATE_VARIABLE_ConsTypeInfos_0_6;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = PredIds_19;
      next_value_of_STATE_VARIABLE_ConsTypeInfos_0_6 = STATE_VARIABLE_ConsTypeInfos_1_24;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_ConsTypeInfos_0_6 = next_value_of_STATE_VARIABLE_ConsTypeInfos_0_6;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck_cons_infos__get_auto_generated_field_access_func_cons_infos_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__typecheck_cons_infos__is_field_access_function_for_type_ctor_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_cons_infos__get_auto_generated_field_access_func_cons_infos_9_p_0(
  MR_Word Info_1,
  MR_Word GoalId_2,
  MR_Word DuCtorSymName_3,
  MR_Word UserArity_4,
  MR_Word AccessType_5,
  MR_Word FieldSymName_6,
  MR_Word HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word * HeadVar__9_9)
{
  MR_bool succeeded;

  if ((HeadVar__7_7 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__8_8 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__9_9 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word FieldDefn_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__7_7, 0))));
    MR_Word FieldDefns_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__7_7, 1))));
    MR_Word TailConsTypeInfos_26;
    MR_Word TailConsErrors_27;
    MR_Word ModuleInfo_28;
    MR_Word InFieldAccessFunc_29;
    MR_Word TypeCtor_30;
    MR_Word DuCtor_31;
    MR_Word TypeModule_38;
    MR_Word Var_44;

    check_hlds__typecheck_cons_infos__get_auto_generated_field_access_func_cons_infos_9_p_0(Info_1, GoalId_2, DuCtorSymName_3, UserArity_4, AccessType_5, FieldSymName_6, FieldDefns_23, &TailConsTypeInfos_26, &TailConsErrors_27);
    check_hlds__typecheck_info__typecheck_info_get_module_info_2_p_0(Info_1, &ModuleInfo_28);
    check_hlds__typecheck_info__typecheck_info_get_in_field_access_function_2_p_0(Info_1, &InFieldAccessFunc_29);
    TypeCtor_30 = ((MR_Word) ((MR_hl_field(0, FieldDefn_22, 2))));
    DuCtor_31 = ((MR_Word) ((MR_hl_field(0, FieldDefn_22, 3))));
    Var_44 = ((MR_Word) ((MR_hl_field(0, TypeCtor_30, 0))));
    succeeded = ((MR_tag((MR_Word) Var_44)) == (MR_Integer) 1);
    if (succeeded)
    {
      TypeModule_38 = ((MR_Word) ((MR_hl_field(1, Var_44, 0))));
      if ((InFieldAccessFunc_29 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word PredTable_41;
        MR_String DuCtorName_42;
        MR_Word PredIds_43;
        MR_Word Var_46;

        hlds__hlds_module__module_info_get_predicate_table_2_p_0(ModuleInfo_28, &PredTable_41);
        DuCtorName_42 = mdbcomp__sym_name__unqualify_name_1_f_0(DuCtorSymName_3);
        hlds__pred_table__predicate_table_lookup_func_m_n_ua_6_p_0(PredTable_41, (MR_Integer) 0, TypeModule_38, DuCtorName_42, UserArity_4, &PredIds_43);
        {
          Var_46 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_46, 0) = ((MR_Box) (&check_hlds__typecheck_cons_infos_scalar_common_6[0]));
          MR_hl_field(0, Var_46, 1) = ((MR_Box) (check_hlds__typecheck_cons_infos__get_auto_generated_field_access_func_cons_infos_9_p_0_1));
          MR_hl_field(0, Var_46, 2) = ((MR_Box) ((MR_Integer) 3));
          MR_hl_field(0, Var_46, 3) = ((MR_Box) (ModuleInfo_28));
          MR_hl_field(0, Var_46, 4) = ((MR_Box) (AccessType_5));
          MR_hl_field(0, Var_46, 5) = ((MR_Box) (TypeCtor_30));
        }
        succeeded = mercury__list__all_false_2_p_0((MR_Word) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_pred_id_0), Var_46, PredIds_43);
      }
      else
        succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word MaybeConsTypeInfo_32;

      check_hlds__typecheck_cons_infos__get_auto_generated_field_access_func_cons_info_8_p_0(Info_1, GoalId_2, AccessType_5, FieldSymName_6, TypeCtor_30, DuCtor_31, FieldDefn_22, &MaybeConsTypeInfo_32);
      if (((MR_tag((MR_Word) MaybeConsTypeInfo_32)) == (MR_Integer) 1))
      {
        MR_Word ConsError_34 = ((MR_Word) ((MR_hl_field(1, MaybeConsTypeInfo_32, 0))));

        *HeadVar__8_8 = TailConsTypeInfos_26;
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__9_9 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (ConsError_34));
          MR_hl_field(1, base, 1) = ((MR_Box) (TailConsErrors_27));
        }
      }
      else
      {
        MR_Word ConsTypeInfo_33 = (MR_Word) ((MR_Word) (MaybeConsTypeInfo_32));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__8_8 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (ConsTypeInfo_33));
          MR_hl_field(1, base, 1) = ((MR_Box) (TailConsTypeInfos_26));
        }
        *HeadVar__9_9 = TailConsErrors_27;
      }
    }
    else
    {
      *HeadVar__8_8 = TailConsTypeInfos_26;
      *HeadVar__9_9 = TailConsErrors_27;
    }
  }
}

static MR_Box MR_CALL 
check_hlds__typecheck_cons_infos__get_auto_generated_field_access_func_cons_info_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_48;

  conv0_LambdaHeadVar__2_48 = check_hlds__typecheck_cons_infos__IntroducedFrom__func__hlds_cons_defn_to_maybe_cons_type_info__447__2_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_48));
  return wrapper_arg_2;
}

static void MR_CALL 
check_hlds__typecheck_cons_infos__get_auto_generated_field_access_func_cons_info_8_p_0(
  MR_Word Info_9,
  MR_Word GoalId_10,
  MR_Word AccessType_11,
  MR_Word FieldSymName_12,
  MR_Word TypeCtor_13,
  MR_Word DuCtor_14,
  MR_Word FieldDefn_15,
  MR_Word * MaybeConsTypeInfo_16)
{
  MR_bool succeeded;
  MR_Word ModuleInfo_17;
  MR_Word ConsTable_18;
  MR_Word ConsDefn_19;
  MR_Word MaybeExistConstraints_20;
  MR_Word OrigExistTVars_21;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Var_35;
  MR_Word Var_36;

  check_hlds__typecheck_info__typecheck_info_get_module_info_2_p_0(Info_9, &ModuleInfo_17);
  hlds__hlds_module__module_info_get_cons_table_2_p_0(ModuleInfo_17, &ConsTable_18);
  hlds__hlds_cons__lookup_cons_table_of_type_ctor_4_p_0(ConsTable_18, TypeCtor_13, DuCtor_14, &ConsDefn_19);
  Var_32 = ((MR_Word) ((MR_hl_field(0, ConsDefn_19, 0))));
  Var_33 = ((MR_Word) ((MR_hl_field(0, ConsDefn_19, 1))));
  Var_34 = ((MR_Word) ((MR_hl_field(0, ConsDefn_19, 2))));
  Var_35 = ((MR_Word) ((MR_hl_field(0, ConsDefn_19, 3))));
  MaybeExistConstraints_20 = ((MR_Word) ((MR_hl_field(0, ConsDefn_19, 4))));
  Var_36 = ((MR_Word) ((MR_hl_field(0, ConsDefn_19, 5))));
  if ((MaybeExistConstraints_20 == (MR_Word) ((MR_Unsigned) 0U)))
    OrigExistTVars_21 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word ExistConstraints_22 = (MR_Word) (MR_body((MR_Word) (MaybeExistConstraints_20), (MR_Integer) 1));

    OrigExistTVars_21 = ((MR_Word) ((MR_hl_field(0, ExistConstraints_22, 0))));
  }
  switch (AccessType_11) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word MaybeFunctorConsTypeInfo_27;

        check_hlds__typecheck_cons_infos__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_108_100_115_95_99_111_110_115_95_100_101_102_110_95_116_111_95_109_97_121_98_101_95_99_111_110_115_95_116_121_112_101_95_105_110_102_111_95_95_91_51_93_95_48_6_p_0(Info_9, GoalId_10, DuCtor_14, ConsDefn_19, &MaybeFunctorConsTypeInfo_27);
        if (((MR_tag((MR_Word) MaybeFunctorConsTypeInfo_27)) == (MR_Integer) 1))
        {
          MR_Word ConsError_30 = ((MR_Word) ((MR_hl_field(1, MaybeFunctorConsTypeInfo_27, 0))));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeConsTypeInfo_16 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (ConsError_30));
          }
        }
        else
        {
          MR_Word FunctorConsTypeInfo_28 = (MR_Word) ((MR_Word) (MaybeFunctorConsTypeInfo_27));
          MR_Word ClassTable_29;

          hlds__hlds_module__module_info_get_class_table_2_p_0(ModuleInfo_17, &ClassTable_29);
          check_hlds__typecheck_cons_infos__functor_to_field_access_function_cons_type_info_7_p_0(ClassTable_29, AccessType_11, FieldSymName_12, FieldDefn_15, FunctorConsTypeInfo_28, OrigExistTVars_21, MaybeConsTypeInfo_16);
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ArgTypes_45;
        MR_Word TypeTable_46;
        MR_Word TypeDefn_47;
        MR_Word Body_48;
        MR_Word PredId_49;
        MR_Word ModuleInfo_50;
        MR_Word PredInfo_51;
        MR_Word PredStatus_52;
        MR_Word BodyDu_53;
        MR_Word GoalType_55;
        MR_Word Var_69;
        MR_Word Var_70;
        MR_Word Var_71;

        ArgTypes_45 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&check_hlds__typecheck_cons_infos_scalar_common_5[1]), Var_36);
        check_hlds__typecheck_info__typecheck_info_get_type_table_2_p_0(Info_9, &TypeTable_46);
        hlds__hlds_data__lookup_type_ctor_defn_3_p_0(TypeTable_46, Var_32, &TypeDefn_47);
        hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_47, &Body_48);
        check_hlds__typecheck_info__typecheck_info_get_pred_id_2_p_0(Info_9, &PredId_49);
        check_hlds__typecheck_info__typecheck_info_get_module_info_2_p_0(Info_9, &ModuleInfo_50);
        hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_50, PredId_49, &PredInfo_51);
        hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo_51, &PredStatus_52);
        succeeded = ((MR_tag((MR_Word) Body_48)) == (MR_Integer) 0);
        if (succeeded)
        {
          BodyDu_53 = (MR_Word) ((MR_Word) (Body_48));
          Var_69 = ((MR_Word) ((MR_hl_field(0, BodyDu_53, 5))));
          succeeded = (Var_69 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            hlds__hlds_pred__pred_info_get_goal_type_2_p_0(PredInfo_51, &GoalType_55);
            succeeded = ((MR_tag((MR_Word) GoalType_55)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_70 = ((MR_Unsigned) ((MR_hl_field(0, GoalType_55, 0))) & (MR_Integer) 3);
              succeeded = (Var_70 == (MR_Integer) 3);
            }
            succeeded = !(succeeded);
            if (succeeded)
            {
              succeeded = hlds__hlds_pred__is_unify_index_or_compare_pred_1_p_0(PredInfo_51);
              succeeded = !(succeeded);
              if (succeeded)
              {
                Var_71 = (MR_Word) (PredStatus_52);
                succeeded = (Var_71 != (MR_Word) ((MR_Unsigned) 0U));
              }
            }
          }
        }
        if (succeeded)
        {
          MR_Word ConsError_83;

          {
            ConsError_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, ConsError_83, 0) = ((MR_Box) (Var_32));
            MR_hl_field(1, ConsError_83, 1) = ((MR_Box) (TypeDefn_47));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeConsTypeInfo_16 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (ConsError_83));
          }
        }
        else
        {
          MR_Word MaybeFunctorConsTypeInfo_96;
          MR_Word TypeStatus_56;
          MR_Word Var_73;
          MR_Word Var_74;

          hlds__hlds_data__get_type_defn_status_2_p_0(TypeDefn_47, &TypeStatus_56);
          Var_73 = (MR_Word) (TypeStatus_56);
          succeeded = (Var_73 == (MR_Word) ((MR_Unsigned) 4U));
          if (succeeded)
          {
            succeeded = hlds__hlds_pred__is_unify_index_or_compare_pred_1_p_0(PredInfo_51);
            succeeded = !(succeeded);
            if (succeeded)
            {
              Var_74 = (MR_Word) (PredStatus_52);
              succeeded = (Var_74 != (MR_Word) ((MR_Unsigned) 0U));
            }
          }
          if (succeeded)
            MaybeFunctorConsTypeInfo_96 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_cons_infos_scalar_common_2[3]));
          else
          {
            MR_Word ConsTypeArgs_57;
            MR_Word ConsType_58;
            MR_Word ExistProgConstraints_59;
            MR_Word ProgConstraints_63;
            MR_Word ExistQVars_64;
            MR_Word ClassTable_65;
            MR_Word ConstraintDb_66;
            MR_Word ConsTypeInfo_67;
            MR_Word Var_75;

            parse_tree__prog_type__var_list_to_type_list_3_p_0(Var_35, Var_34, &ConsTypeArgs_57);
            parse_tree__prog_type_construct__construct_type_3_p_0(Var_32, ConsTypeArgs_57, &ConsType_58);
            if ((MaybeExistConstraints_20 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              ExistQVars_64 = (MR_Word) ((MR_Unsigned) 0U);
              ExistProgConstraints_59 = (MR_Word) ((MR_Unsigned) 0U);
            }
            else
            {
              MR_Word ExistConstraints_60 = (MR_Word) (MR_body((MR_Word) (MaybeExistConstraints_20), (MR_Integer) 1));

              ExistQVars_64 = ((MR_Word) ((MR_hl_field(0, ExistConstraints_60, 0))));
              ExistProgConstraints_59 = ((MR_Word) ((MR_hl_field(0, ExistConstraints_60, 1))));
            }
            {
              ProgConstraints_63 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, ProgConstraints_63, 0) = ((MR_Box) (ExistProgConstraints_59));
              MR_hl_field(0, ProgConstraints_63, 1) = ((MR_Box) (ExistProgConstraints_59));
            }
            hlds__hlds_module__module_info_get_class_table_2_p_0(ModuleInfo_50, &ClassTable_65);
            hlds__hlds_class__make_body_hlds_constraint_db_5_p_0(ClassTable_65, Var_33, GoalId_10, ProgConstraints_63, &ConstraintDb_66);
            {
              Var_75 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_75, 0) = ((MR_Box) (Var_32));
              MR_hl_field(0, Var_75, 1) = ((MR_Box) (DuCtor_14));
            }
            {
              ConsTypeInfo_67 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, ConsTypeInfo_67, 0) = ((MR_Box) (Var_33));
              MR_hl_field(0, ConsTypeInfo_67, 1) = ((MR_Box) (ExistQVars_64));
              MR_hl_field(0, ConsTypeInfo_67, 2) = ((MR_Box) (ConsType_58));
              MR_hl_field(0, ConsTypeInfo_67, 3) = ((MR_Box) (ArgTypes_45));
              MR_hl_field(0, ConsTypeInfo_67, 4) = ((MR_Box) (ConstraintDb_66));
              MR_hl_field(0, ConsTypeInfo_67, 5) = ((MR_Box) (Var_75));
            }
            MaybeFunctorConsTypeInfo_96 = (MR_Word) ((MR_Word) (ConsTypeInfo_67));
          }
          if (((MR_tag((MR_Word) MaybeFunctorConsTypeInfo_96)) == (MR_Integer) 1))
          {
            MR_Word ConsError_93 = ((MR_Word) ((MR_hl_field(1, MaybeFunctorConsTypeInfo_96, 0))));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeConsTypeInfo_16 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (ConsError_93));
            }
          }
          else
          {
            MR_Word FunctorConsTypeInfo_84 = (MR_Word) ((MR_Word) (MaybeFunctorConsTypeInfo_96));
            MR_Word ClassTable_85;

            hlds__hlds_module__module_info_get_class_table_2_p_0(ModuleInfo_17, &ClassTable_85);
            check_hlds__typecheck_cons_infos__functor_to_field_access_function_cons_type_info_7_p_0(ClassTable_85, AccessType_11, FieldSymName_12, FieldDefn_15, FunctorConsTypeInfo_84, OrigExistTVars_21, MaybeConsTypeInfo_16);
          }
        }
      }
      break;
  }
}

static MR_Box MR_CALL 
check_hlds__typecheck_cons_infos__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_108_100_115_95_99_111_110_115_95_100_101_102_110_95_116_111_95_109_97_121_98_101_95_99_111_110_115_95_116_121_112_101_95_105_110_102_111_95_95_91_51_93_95_48_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_48;

  conv0_LambdaHeadVar__2_48 = check_hlds__typecheck_cons_infos__IntroducedFrom__func__hlds_cons_defn_to_maybe_cons_type_info__447__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_48));
  return wrapper_arg_2;
}

static void MR_CALL 
check_hlds__typecheck_cons_infos__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_108_100_115_95_99_111_110_115_95_100_101_102_110_95_116_111_95_109_97_121_98_101_95_99_111_110_115_95_116_121_112_101_95_105_110_102_111_95_95_91_51_93_95_48_6_p_0(
  MR_Word Info_7,
  MR_Word GoalId_8,
  MR_Word DuCtor_10,
  MR_Word ConsDefn_11,
  MR_Word * MaybeConsTypeInfo_12)
{
  MR_bool succeeded;
  MR_Word TypeCtor_13 = ((MR_Word) ((MR_hl_field(0, ConsDefn_11, 0))));
  MR_Word ConsTypeVarSet_14 = ((MR_Word) ((MR_hl_field(0, ConsDefn_11, 1))));
  MR_Word ConsTypeParams_15 = ((MR_Word) ((MR_hl_field(0, ConsDefn_11, 2))));
  MR_Word ConsTypeKinds_16 = ((MR_Word) ((MR_hl_field(0, ConsDefn_11, 3))));
  MR_Word MaybeExistConstraints_17 = ((MR_Word) ((MR_hl_field(0, ConsDefn_11, 4))));
  MR_Word Args_18 = ((MR_Word) ((MR_hl_field(0, ConsDefn_11, 5))));
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
  MR_Word Var_49;
  MR_Word Var_50;
  MR_Word Var_51;

  ArgTypes_20 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&check_hlds__typecheck_cons_infos_scalar_common_5[0]), Args_18);
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
    Var_49 = ((MR_Word) ((MR_hl_field(0, BodyDu_29, 5))));
    succeeded = (Var_49 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      hlds__hlds_pred__pred_info_get_goal_type_2_p_0(PredInfo_27, &GoalType_31);
      succeeded = ((MR_tag((MR_Word) GoalType_31)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_50 = ((MR_Unsigned) ((MR_hl_field(0, GoalType_31, 0))) & (MR_Integer) 3);
        succeeded = (Var_50 == (MR_Integer) 3);
      }
      succeeded = !(succeeded);
      if (succeeded)
      {
        succeeded = hlds__hlds_pred__is_unify_index_or_compare_pred_1_p_0(PredInfo_27);
        succeeded = !(succeeded);
        if (succeeded)
        {
          Var_51 = (MR_Word) (PredStatus_28);
          succeeded = (Var_51 != (MR_Word) ((MR_Unsigned) 0U));
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Word Var_52;

    {
      Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_52, 0) = ((MR_Box) (TypeCtor_13));
      MR_hl_field(1, Var_52, 1) = ((MR_Box) (TypeDefn_23));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeConsTypeInfo_12 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_52));
    }
  }
  else
  {
    MR_Word TypeStatus_32;
    MR_Word Var_53;
    MR_Word Var_54;

    hlds__hlds_data__get_type_defn_status_2_p_0(TypeDefn_23, &TypeStatus_32);
    Var_53 = (MR_Word) (TypeStatus_32);
    succeeded = (Var_53 == (MR_Word) ((MR_Unsigned) 4U));
    if (succeeded)
    {
      succeeded = hlds__hlds_pred__is_unify_index_or_compare_pred_1_p_0(PredInfo_27);
      succeeded = !(succeeded);
      if (succeeded)
      {
        Var_54 = (MR_Word) (PredStatus_28);
        succeeded = (Var_54 != (MR_Word) ((MR_Unsigned) 0U));
      }
    }
    if (succeeded)
      *MaybeConsTypeInfo_12 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_cons_infos_scalar_common_2[3]));
    else
    {
      MR_Word ConsTypeArgs_33;
      MR_Word ConsType_34;
      MR_Word ExistProgConstraints_37;
      MR_Word ProgConstraints_41;
      MR_Word ExistQVars_42;
      MR_Word ClassTable_43;
      MR_Word ConstraintDb_44;
      MR_Word ConsTypeInfo_45;
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

        ExistQVars_42 = ((MR_Word) ((MR_hl_field(0, ExistConstraints_38, 0))));
        ExistProgConstraints_37 = ((MR_Word) ((MR_hl_field(0, ExistConstraints_38, 1))));
      }
      {
        ProgConstraints_41 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ProgConstraints_41, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, ProgConstraints_41, 1) = ((MR_Box) (ExistProgConstraints_37));
      }
      hlds__hlds_module__module_info_get_class_table_2_p_0(ModuleInfo_26, &ClassTable_43);
      hlds__hlds_class__make_body_hlds_constraint_db_5_p_0(ClassTable_43, ConsTypeVarSet_14, GoalId_8, ProgConstraints_41, &ConstraintDb_44);
      {
        Var_58 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_58, 0) = ((MR_Box) (TypeCtor_13));
        MR_hl_field(0, Var_58, 1) = ((MR_Box) (DuCtor_10));
      }
      {
        ConsTypeInfo_45 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ConsTypeInfo_45, 0) = ((MR_Box) (ConsTypeVarSet_14));
        MR_hl_field(0, ConsTypeInfo_45, 1) = ((MR_Box) (ExistQVars_42));
        MR_hl_field(0, ConsTypeInfo_45, 2) = ((MR_Box) (ConsType_34));
        MR_hl_field(0, ConsTypeInfo_45, 3) = ((MR_Box) (ArgTypes_20));
        MR_hl_field(0, ConsTypeInfo_45, 4) = ((MR_Box) (ConstraintDb_44));
        MR_hl_field(0, ConsTypeInfo_45, 5) = ((MR_Box) (Var_58));
      }
      *MaybeConsTypeInfo_12 = (MR_Word) ((MR_Word) (ConsTypeInfo_45));
    }
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck_cons_infos__functor_to_field_access_function_cons_type_info_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv1_Constraint_6;

  succeeded = check_hlds__typecheck_cons_infos__rename_constraint_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_Constraint_6);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv1_Constraint_6));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__typecheck_cons_infos__functor_to_field_access_function_cons_type_info_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__typecheck_cons_infos__project_constraint_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_cons_infos__functor_to_field_access_function_cons_type_info_7_p_0(
  MR_Word ClassTable_8,
  MR_Word AccessType_9,
  MR_Word FieldSymName_10,
  MR_Word FieldDefn_11,
  MR_Word FunctorConsTypeInfo_12,
  MR_Word OrigExistTVars_13,
  MR_Word * MaybeConsTypeInfo_14)
{
  MR_bool succeeded;
  MR_Word TVarSet0_15 = ((MR_Word) ((MR_hl_field(0, FunctorConsTypeInfo_12, 0))));
  MR_Word ExistQVars_16 = ((MR_Word) ((MR_hl_field(0, FunctorConsTypeInfo_12, 1))));
  MR_Word FunctorType_17 = ((MR_Word) ((MR_hl_field(0, FunctorConsTypeInfo_12, 2))));
  MR_Word ConsArgTypes_18 = ((MR_Word) ((MR_hl_field(0, FunctorConsTypeInfo_12, 3))));
  MR_Word Constraints0_19 = ((MR_Word) ((MR_hl_field(0, FunctorConsTypeInfo_12, 4))));
  MR_Word Source0_20 = ((MR_Word) ((MR_hl_field(0, FunctorConsTypeInfo_12, 5))));
  MR_Word SourceType_21 = ((MR_Word) ((MR_hl_field(0, Source0_20, 0))));
  MR_Word ConsId_22 = ((MR_Word) ((MR_hl_field(0, Source0_20, 1))));
  MR_Integer FieldNumber_27 = ((MR_Integer) ((MR_hl_field(0, FieldDefn_11, 4))));
  MR_Word FieldType_28;
  MR_String FieldName_29;
  MR_Box conv0_FieldType_28;

  mercury__list__det_index1_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ConsArgTypes_18, FieldNumber_27, &conv0_FieldType_28);
  FieldType_28 = ((MR_Word) (conv0_FieldType_28));
  FieldName_29 = mdbcomp__sym_name__unqualify_name_1_f_0(FieldSymName_10);
  switch (AccessType_9) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Source_30;
        MR_Word ArgTypes_32;
        MR_Word Var_54;

        {
          Source_30 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Source_30, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(2, Source_30, 1) = ((MR_Box) (SourceType_21));
          MR_hl_field(2, Source_30, 2) = ((MR_Box) (ConsId_22));
          MR_hl_field(2, Source_30, 3) = ((MR_Box) (FieldName_29));
        }
        {
          ArgTypes_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, ArgTypes_32, 0) = ((MR_Box) (FunctorType_17));
          MR_hl_field(1, ArgTypes_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_54 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_54, 0) = ((MR_Box) (TVarSet0_15));
          MR_hl_field(0, Var_54, 1) = ((MR_Box) (ExistQVars_16));
          MR_hl_field(0, Var_54, 2) = ((MR_Box) (FieldType_28));
          MR_hl_field(0, Var_54, 3) = ((MR_Box) (ArgTypes_32));
          MR_hl_field(0, Var_54, 4) = ((MR_Box) (Constraints0_19));
          MR_hl_field(0, Var_54, 5) = ((MR_Box) (Source_30));
        }
        *MaybeConsTypeInfo_14 = (MR_Word) ((MR_Word) (Var_54));
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word TVarsInField_33;
        MR_Word Source_79;

        {
          Source_79 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Source_79, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
          MR_hl_field(2, Source_79, 1) = ((MR_Box) (SourceType_21));
          MR_hl_field(2, Source_79, 2) = ((MR_Box) (ConsId_22));
          MR_hl_field(2, Source_79, 3) = ((MR_Box) (FieldName_29));
        }
        parse_tree__prog_type_scan__type_vars_in_type_2_p_0(FieldType_28, &TVarsInField_33);
        if ((TVarsInField_33 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Var_56;
          MR_Word Var_58;
          MR_Word ArgTypes_71;

          {
            Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_56, 0) = ((MR_Box) (FieldType_28));
            MR_hl_field(1, Var_56, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            ArgTypes_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, ArgTypes_71, 0) = ((MR_Box) (FunctorType_17));
            MR_hl_field(1, ArgTypes_71, 1) = ((MR_Box) (Var_56));
          }
          {
            Var_58 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_58, 0) = ((MR_Box) (TVarSet0_15));
            MR_hl_field(0, Var_58, 1) = ((MR_Box) (ExistQVars_16));
            MR_hl_field(0, Var_58, 2) = ((MR_Box) (FunctorType_17));
            MR_hl_field(0, Var_58, 3) = ((MR_Box) (ArgTypes_71));
            MR_hl_field(0, Var_58, 4) = ((MR_Box) (Constraints0_19));
            MR_hl_field(0, Var_58, 5) = ((MR_Box) (Source_79));
          }
          *MaybeConsTypeInfo_14 = (MR_Word) ((MR_Word) (Var_58));
        }
        else
        {
          MR_Word ArgTypesWithoutField_37;
          MR_Word TVarsInOtherArgs_38;
          MR_Word ExistQVarsInFieldAndOthers_39;
          MR_Word Var_59;
          MR_Word Var_60;
          MR_Word Var_61;
          MR_Word Var_62;
          MR_Word Var_63;

          Var_59 = parse_tree__builtin_lib_types__int_type_0_f_0();
          mercury__list__det_replace_nth_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ConsArgTypes_18, FieldNumber_27, ((MR_Box) (Var_59)), &ArgTypesWithoutField_37);
          parse_tree__prog_type_scan__type_vars_in_types_2_p_0(ArgTypesWithoutField_37, &TVarsInOtherArgs_38);
          Var_60 = mercury__set__list_to_set_1_f_0((MR_Word) (&check_hlds__typecheck_cons_infos_scalar_common_1[0]), TVarsInField_33);
          Var_62 = mercury__set__list_to_set_1_f_0((MR_Word) (&check_hlds__typecheck_cons_infos_scalar_common_1[0]), TVarsInOtherArgs_38);
          Var_63 = mercury__set__list_to_set_1_f_0((MR_Word) (&check_hlds__typecheck_cons_infos_scalar_common_1[0]), OrigExistTVars_13);
          Var_61 = mercury__set__intersect_2_f_0((MR_Word) (&check_hlds__typecheck_cons_infos_scalar_common_1[0]), Var_62, Var_63);
          mercury__set__intersect_3_p_0((MR_Word) (&check_hlds__typecheck_cons_infos_scalar_common_1[0]), Var_60, Var_61, &ExistQVarsInFieldAndOthers_39);
          succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&check_hlds__typecheck_cons_infos_scalar_common_1[0]), ExistQVarsInFieldAndOthers_39);
          if (succeeded)
          {
            MR_Word TVarsOnlyInField0_40;
            MR_Word TVarsOnlyInField_41;
            MR_Integer NumNewTVars_42;
            MR_Word NewTVars_43;
            MR_Word TVarSet_44;
            MR_Word TVarRenaming_45;
            MR_Word RenamedFieldType_46;
            MR_Word CallTVars0_48;
            MR_Word CallTVars_49;
            MR_Word Constraints_50;
            MR_Word Var_64;
            MR_Word Var_65;
            MR_Word Var_67;
            MR_Word Var_69;
            MR_Word ArgTypes_72;
            MR_Word RetType_73;
            MR_Word Unproven0_83;
            MR_Word Assumed_84;
            MR_Word Redundant0_85;
            MR_Word Ancestors_86;
            MR_Word NewUnproven0_87;
            MR_Word NewUnproven_88;
            MR_Word Redundant_89;
            MR_Word Unproven_90;
            MR_Word Var_91;
            MR_Word Var_92;

            mercury__list__delete_elems_3_p_0((MR_Word) (&check_hlds__typecheck_cons_infos_scalar_common_1[0]), TVarsInField_33, TVarsInOtherArgs_38, &TVarsOnlyInField0_40);
            mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&check_hlds__typecheck_cons_infos_scalar_common_1[0]), TVarsOnlyInField0_40, &TVarsOnlyInField_41);
            mercury__list__length_2_p_0((MR_Word) (&check_hlds__typecheck_cons_infos_scalar_common_1[0]), TVarsOnlyInField_41, &NumNewTVars_42);
            mercury__varset__new_vars_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), NumNewTVars_42, &NewTVars_43, TVarSet0_15, &TVarSet_44);
            mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&check_hlds__typecheck_cons_infos_scalar_common_1[0]), (MR_Word) (&check_hlds__typecheck_cons_infos_scalar_common_1[0]), TVarsOnlyInField_41, NewTVars_43, &TVarRenaming_45);
            parse_tree__prog_type_subst__apply_renaming_to_type_3_p_0(TVarRenaming_45, FieldType_28, &RenamedFieldType_46);
            parse_tree__prog_type_subst__apply_renaming_to_type_3_p_0(TVarRenaming_45, FunctorType_17, &RetType_73);
            {
              Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_65, 0) = ((MR_Box) (FieldType_28));
              MR_hl_field(1, Var_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_64, 0) = ((MR_Box) (FunctorType_17));
              MR_hl_field(1, Var_64, 1) = ((MR_Box) (Var_65));
            }
            parse_tree__prog_type_scan__type_vars_in_types_2_p_0(Var_64, &CallTVars0_48);
            mercury__set__list_to_set_2_p_0((MR_Word) (&check_hlds__typecheck_cons_infos_scalar_common_1[0]), CallTVars0_48, &CallTVars_49);
            Unproven0_83 = ((MR_Word) ((MR_hl_field(0, Constraints0_19, 0))));
            Assumed_84 = ((MR_Word) ((MR_hl_field(0, Constraints0_19, 1))));
            Redundant0_85 = ((MR_Word) ((MR_hl_field(0, Constraints0_19, 2))));
            Ancestors_86 = ((MR_Word) ((MR_hl_field(0, Constraints0_19, 3))));
            {
              Var_91 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_91, 0) = ((MR_Box) (&check_hlds__typecheck_cons_infos_scalar_common_3[0]));
              MR_hl_field(0, Var_91, 1) = ((MR_Box) (check_hlds__typecheck_cons_infos__functor_to_field_access_function_cons_type_info_7_p_0_1));
              MR_hl_field(0, Var_91, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_91, 3) = ((MR_Box) (CallTVars_49));
            }
            mercury__list__filter_3_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), Var_91, Unproven0_83, &NewUnproven0_87);
            {
              Var_92 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_92, 0) = ((MR_Box) (&check_hlds__typecheck_cons_infos_scalar_common_4[0]));
              MR_hl_field(0, Var_92, 1) = ((MR_Box) (check_hlds__typecheck_cons_infos__functor_to_field_access_function_cons_type_info_7_p_0_2));
              MR_hl_field(0, Var_92, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_92, 3) = ((MR_Box) (TVarRenaming_45));
            }
            mercury__list__filter_map_3_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), Var_92, NewUnproven0_87, &NewUnproven_88);
            hlds__hlds_class__update_redundant_constraints_5_p_0(ClassTable_8, TVarSet_44, NewUnproven_88, Redundant0_85, &Redundant_89);
            mercury__list__append_3_p_1((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), NewUnproven_88, Unproven0_83, &Unproven_90);
            {
              Constraints_50 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Constraints_50, 0) = ((MR_Box) (Unproven_90));
              MR_hl_field(0, Constraints_50, 1) = ((MR_Box) (Assumed_84));
              MR_hl_field(0, Constraints_50, 2) = ((MR_Box) (Redundant_89));
              MR_hl_field(0, Constraints_50, 3) = ((MR_Box) (Ancestors_86));
            }
            {
              Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_67, 0) = ((MR_Box) (RenamedFieldType_46));
              MR_hl_field(1, Var_67, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              ArgTypes_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, ArgTypes_72, 0) = ((MR_Box) (FunctorType_17));
              MR_hl_field(1, ArgTypes_72, 1) = ((MR_Box) (Var_67));
            }
            {
              Var_69 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_69, 0) = ((MR_Box) (TVarSet_44));
              MR_hl_field(0, Var_69, 1) = ((MR_Box) (ExistQVars_16));
              MR_hl_field(0, Var_69, 2) = ((MR_Box) (RetType_73));
              MR_hl_field(0, Var_69, 3) = ((MR_Box) (ArgTypes_72));
              MR_hl_field(0, Var_69, 4) = ((MR_Box) (Constraints_50));
              MR_hl_field(0, Var_69, 5) = ((MR_Box) (Source_79));
            }
            *MaybeConsTypeInfo_14 = (MR_Word) ((MR_Word) (Var_69));
          }
          else
          {
            MR_Word ExistQVarsInFieldAndOthers1_51;
            MR_Word Var_70;

            mercury__set__to_sorted_list_2_p_0((MR_Word) (&check_hlds__typecheck_cons_infos_scalar_common_1[0]), ExistQVarsInFieldAndOthers_39, &ExistQVarsInFieldAndOthers1_51);
            {
              Var_70 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Var_70, 0) = ((MR_Box) (FieldSymName_10));
              MR_hl_field(2, Var_70, 1) = ((MR_Box) (FieldDefn_11));
              MR_hl_field(2, Var_70, 2) = ((MR_Box) (TVarSet0_15));
              MR_hl_field(2, Var_70, 3) = ((MR_Box) (ExistQVarsInFieldAndOthers1_51));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeConsTypeInfo_14 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Var_70));
            }
          }
        }
      }
      break;
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck_cons_infos____Unify____cons_constraints_action_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__typecheck_cons_infos____Unify____cons_constraints_action_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_cons_infos____Compare____cons_constraints_action_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__typecheck_cons_infos____Compare____cons_constraints_action_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__typecheck_cons_infos____Unify____cons_info_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__typecheck_cons_infos____Unify____cons_info_result_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_cons_infos____Compare____cons_info_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__typecheck_cons_infos____Compare____cons_info_result_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__typecheck_cons_infos____Unify____du_cons_type_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__typecheck_cons_infos____Unify____du_cons_type_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_cons_infos____Compare____du_cons_type_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__typecheck_cons_infos____Compare____du_cons_type_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__typecheck_cons_infos____Unify____du_cons_type_info_source_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__typecheck_cons_infos____Unify____du_cons_type_info_source_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_cons_infos____Compare____du_cons_type_info_source_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__typecheck_cons_infos____Compare____du_cons_type_info_source_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__typecheck_cons_infos____Unify____maybe_cons_type_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__typecheck_cons_infos____Unify____maybe_cons_type_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_cons_infos____Compare____maybe_cons_type_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__typecheck_cons_infos____Compare____maybe_cons_type_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__typecheck_cons_infos____Unify____maybe_du_cons_type_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__typecheck_cons_infos____Unify____maybe_du_cons_type_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_cons_infos____Compare____maybe_du_cons_type_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__typecheck_cons_infos____Compare____maybe_du_cons_type_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__check_hlds__typecheck_cons_infos__init(void)
{
}

void mercury__check_hlds__typecheck_cons_infos__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__type_ctor_info_cons_constraints_action_0);
  MR_register_type_ctor_info(&check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__type_ctor_info_cons_info_result_0);
  MR_register_type_ctor_info(&check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__type_ctor_info_du_cons_type_info_0);
  MR_register_type_ctor_info(&check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__type_ctor_info_du_cons_type_info_source_0);
  MR_register_type_ctor_info(&check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__type_ctor_info_maybe_cons_type_info_0);
  MR_register_type_ctor_info(&check_hlds__typecheck_cons_infos__check_hlds__typecheck_cons_infos__type_ctor_info_maybe_du_cons_type_info_0);
}

void mercury__check_hlds__typecheck_cons_infos__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__typecheck_cons_infos__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module check_hlds.typecheck_cons_infos.
