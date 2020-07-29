/*
** Automatically generated from `add_mutable_aux_preds.m'
** by the Mercury compiler,
** version rotd-2020-07-29
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


// :- module hlds.make_hlds.add_mutable_aux_preds.
// :- implementation.

/*
INIT mercury__hlds__make_hlds__add_mutable_aux_preds__init
ENDINIT
*/

#include "hlds.make_hlds.add_mutable_aux_preds.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
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
#include "getopt_io.mih"
#include "hlds.mih"
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
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.foreign.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.add_pred.mih"
#include "hlds.const_struct.mih"
#include "hlds.error_msg_inst.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_args.mih"
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
#include "hlds.make_hlds.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
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
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.equiv_type.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_mutable.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.make_hlds.add_class.mih"
#include "hlds.make_hlds.add_clause.mih"
#include "hlds.make_hlds.add_foreign_proc.mih"
#include "hlds.make_hlds.add_pragma.mih"
#include "hlds.make_hlds.make_hlds_passes.mih"
#include "hlds.make_hlds.qual_info.mih"




static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_mutable_aux_preds__maybe__pti_maybe_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_mutable_aux_preds__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_mutable_aux_preds__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_mutable_pred_kind_0;

static const MR_EnumFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_mutable_impl_lang_0_0;

static const MR_EnumFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_mutable_impl_lang_0_1;

static const MR_EnumFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_mutable_impl_lang_0_2;

static const MR_EnumFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_mutable_impl_lang_0_3;

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_value_ordered_mutable_impl_lang_0[4];

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_name_ordered_mutable_impl_lang_0[4];

static const MR_Integer hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__functor_number_map_mutable_impl_lang_0[4];

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_mutable_aux_preds__list__ti_list_1parse_tree__prog_data__type_ctor_info_mutable_pred_kind_0;

static const MR_PseudoTypeInfo hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__field_types_mutable_target_params_0_0[8];

static const MR_ConstString hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__field_names_mutable_target_params_0_0[8];

static const MR_DuArgLocn hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__field_locns_mutable_target_params_0_0[8];

static const MR_DuFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__du_functor_desc_mutable_target_params_0_0;

static const MR_DuFunctorDescPtr hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__du_stag_ordered_mutable_target_params_0_0[1];

static const MR_DuPtagLayout hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__du_ptag_ordered_mutable_target_params_0[1];

static const MR_DuFunctorDescPtr hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__du_name_ordered_mutable_target_params_0[1];

static const MR_Integer hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__functor_number_map_mutable_target_params_0[1];

static const MR_EnumFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_lock_unlock_preds_0_0;

static const MR_EnumFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_lock_unlock_preds_0_1;

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_value_ordered_need_lock_unlock_preds_0[2];

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_name_ordered_need_lock_unlock_preds_0[2];

static const MR_Integer hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__functor_number_map_need_lock_unlock_preds_0[2];

static const MR_EnumFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_pre_init_pred_0_0;

static const MR_EnumFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_pre_init_pred_0_1;

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_value_ordered_need_pre_init_pred_0[2];

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_name_ordered_need_pre_init_pred_0[2];

static const MR_Integer hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__functor_number_map_need_pre_init_pred_0[2];

static const MR_EnumFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_unsafe_get_set_preds_0_0;

static const MR_EnumFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_unsafe_get_set_preds_0_1;

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_value_ordered_need_unsafe_get_set_preds_0[2];

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_name_ordered_need_unsafe_get_set_preds_0[2];

static const MR_Integer hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__functor_number_map_need_unsafe_get_set_preds_0[2];

static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__define_main_get_set_preds__1581__1_2_p_0(
  MR_Word AttachToIO_42,
  MR_Word HeadVar__2_277);

static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__define_unsafe_get_set_preds__1364__1_2_p_0(
  MR_Word IsConstant_33,
  MR_Word HeadVar__2_64);

static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__define_lock_unlock_preds__1277__1_2_p_0(
  MR_Word IsConstant_33,
  MR_Word HeadVar__2_55);

static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__define_pre_init_pred__1216__1_2_p_0(
  MR_Word IsConstant_33,
  MR_Word HeadVar__2_48);

static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__define_aux_preds_for_mutable__1198__1_1_p_0(
  MR_Word STATE_VARIABLE_PredKinds_81_81);

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____need_unsafe_get_set_preds_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____need_unsafe_get_set_preds_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____need_pre_init_pred_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____need_pre_init_pred_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____need_lock_unlock_preds_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____need_lock_unlock_preds_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____mutable_target_params_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____mutable_target_params_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____mutable_impl_lang_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____mutable_impl_lang_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_aux_pred_defns_for_mutable_8_p_0(
  MR_Word ItemMutable_9,
  MR_Word PredStatus_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_32,
  MR_Word * STATE_VARIABLE_ModuleInfo_33,
  MR_Word STATE_VARIABLE_QualInfo_0_34,
  MR_Word * STATE_VARIABLE_QualInfo_35,
  MR_Word STATE_VARIABLE_Specs_0_36,
  MR_Word * STATE_VARIABLE_Specs_37);

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_109_117_116_97_98_108_101_95_116_97_114_103_101_116_95_118_97_114_95_110_97_109_101_95_95_91_54_93_95_48_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word MutAttrs_9,
  MR_Word ModuleName_10,
  MR_String MutableName_11,
  MR_Word ForeignLanguage_12,
  MR_String * TargetMutableName_14);

static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_aux_preds_for_mutable_10_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_aux_preds_for_mutable_10_p_0(
  MR_Word TargetParams_11,
  MR_Word ItemMutable_12,
  MR_String TargetMutableName_13,
  MR_Word PredStatus_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_38,
  MR_Word * STATE_VARIABLE_ModuleInfo_39,
  MR_Word STATE_VARIABLE_QualInfo_0_40,
  MR_Word * STATE_VARIABLE_QualInfo_41,
  MR_Word STATE_VARIABLE_Specs_0_42,
  MR_Word * STATE_VARIABLE_Specs_43);

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_init_pred_11_p_0(
  MR_Word ItemMutable_12,
  MR_Word PredStatus_13,
  MR_Word Lang_14,
  MR_Word InitSetPredName_15,
  MR_Word MaybeCallPreInitExpr_16,
  MR_Word STATE_VARIABLE_ModuleInfo_0_41,
  MR_Word * STATE_VARIABLE_ModuleInfo_42,
  MR_Word STATE_VARIABLE_QualInfo_0_43,
  MR_Word * STATE_VARIABLE_QualInfo_44,
  MR_Word STATE_VARIABLE_Specs_0_45,
  MR_Word * STATE_VARIABLE_Specs_46);

static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_main_get_set_preds_16_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_main_get_set_preds_16_p_0(
  MR_Word TargetParams_17,
  MR_Word ItemMutable_18,
  MR_String TargetMutableName_19,
  MR_Word Attrs_20,
  MR_Word PredStatus_21,
  MR_Word MaybeLockUnlockExprs_22,
  MR_Word MaybeUnsafeGetSetExprs_23,
  MR_Word * InitSetPredName_24,
  MR_Word STATE_VARIABLE_PredKinds_0_86,
  MR_Word * STATE_VARIABLE_PredKinds_87,
  MR_Word STATE_VARIABLE_ModuleInfo_0_88,
  MR_Word * STATE_VARIABLE_ModuleInfo_89,
  MR_Word STATE_VARIABLE_QualInfo_0_90,
  MR_Word * STATE_VARIABLE_QualInfo_91,
  MR_Word STATE_VARIABLE_Specs_0_92,
  MR_Word * STATE_VARIABLE_Specs_93);

static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_unsafe_get_set_preds_12_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_unsafe_get_set_preds_12_p_0(
  MR_Word TargetParams_13,
  MR_Word ItemMutable_14,
  MR_String TargetMutableName_15,
  MR_Word Attrs_16,
  MR_Word PredStatus_17,
  MR_Tuple * UnsafeGetSetExprs_18,
  MR_Word STATE_VARIABLE_ModuleInfo_0_55,
  MR_Word * STATE_VARIABLE_ModuleInfo_56,
  MR_Word STATE_VARIABLE_QualInfo_0_57,
  MR_Word * STATE_VARIABLE_QualInfo_58,
  MR_Word STATE_VARIABLE_Specs_0_59,
  MR_Word * STATE_VARIABLE_Specs_60);

static MR_String MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__global_foreign_type_name_4_f_0(
  MR_Word BoxPolicy_6,
  MR_Word Lang_7,
  MR_Word ModuleInfo_8,
  MR_Word Type_9);

static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_lock_unlock_preds_12_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_lock_unlock_preds_12_p_0(
  MR_Word TargetParams_13,
  MR_Word ItemMutable_14,
  MR_String TargetMutableName_15,
  MR_Word Attrs_16,
  MR_Word PredStatus_17,
  MR_Tuple * LockUnlockExprs_18,
  MR_Word STATE_VARIABLE_ModuleInfo_0_46,
  MR_Word * STATE_VARIABLE_ModuleInfo_47,
  MR_Word STATE_VARIABLE_QualInfo_0_48,
  MR_Word * STATE_VARIABLE_QualInfo_49,
  MR_Word STATE_VARIABLE_Specs_0_50,
  MR_Word * STATE_VARIABLE_Specs_51);

static MR_String MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__mutable_mutex_var_name_1_f_0(
  MR_String TargetMutableVarName_3);

static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_pre_init_pred_12_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_pre_init_pred_12_p_0(
  MR_Word TargetParams_13,
  MR_Word ItemMutable_14,
  MR_String TargetMutableName_15,
  MR_Word Attrs_16,
  MR_Word PredStatus_17,
  MR_Word * CallPreInitExpr_18,
  MR_Word STATE_VARIABLE_ModuleInfo_0_39,
  MR_Word * STATE_VARIABLE_ModuleInfo_40,
  MR_Word STATE_VARIABLE_QualInfo_0_41,
  MR_Word * STATE_VARIABLE_QualInfo_42,
  MR_Word STATE_VARIABLE_Specs_0_43,
  MR_Word * STATE_VARIABLE_Specs_44);

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_mutable_global_var_java_6_p_0(
  MR_String TargetMutableName_7,
  MR_Word Type_8,
  MR_Word IsThreadLocal_9,
  MR_Word Context_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_15,
  MR_Word * STATE_VARIABLE_ModuleInfo_16);

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_mutable_global_var_c_7_p_0(
  MR_String TargetMutableName_8,
  MR_Word Type_9,
  MR_Word IsConstant_10,
  MR_Word IsThreadLocal_11,
  MR_Word Context_12,
  MR_Word STATE_VARIABLE_ModuleInfo_0_26,
  MR_Word * STATE_VARIABLE_ModuleInfo_27);

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__get_global_name_from_foreign_names_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word Context_11,
  MR_Word ModuleName_12,
  MR_String MutableName_13,
  MR_Word ForeignLanguage_14,
  MR_Word ForeignNames_15,
  MR_String * TargetMutableName_16,
  MR_Word STATE_VARIABLE_Specs_0_27,
  MR_Word * STATE_VARIABLE_Specs_28);

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__get_matching_foreign_names_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_aux_pred_decls_for_mutable_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_aux_pred_decls_for_mutable_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_aux_pred_decls_for_mutable_7_p_0(
  MR_Word PredStatus_8,
  MR_Word NeedQual_9,
  MR_Word ItemMutable_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_31,
  MR_Word * STATE_VARIABLE_ModuleInfo_32,
  MR_Word STATE_VARIABLE_Specs_0_33,
  MR_Word * STATE_VARIABLE_Specs_34);

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__get_mutable_target_params_3_p_0(
  MR_Word Globals_4,
  MR_Word MutAttrs_5,
  MR_Word * TargetParams_6);

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__check_mutable_inst_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word Context_9,
  MR_Word InstVarSet_10,
  MR_Word ParentInsts_11,
  MR_Word Inst_12,
  MR_Word STATE_VARIABLE_Specs_0_69,
  MR_Word * STATE_VARIABLE_Specs_70);

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__check_mutable_insts_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_Specs_0_6,
  MR_Word * STATE_VARIABLE_Specs_7);

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__check_mutable_bound_insts_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_Specs_0_6,
  MR_Word * STATE_VARIABLE_Specs_7);

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__check_mutable_inst_uniqueness_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word Context_10,
  MR_Word InstVarSet_11,
  MR_Word ParentInsts_12,
  MR_Word Inst_13,
  MR_Word Uniq_14,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20);

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__invalid_inst_in_mutable_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word Context_10,
  MR_Word InstVarSet_11,
  MR_Word ParentInsts_12,
  MR_Word Inst_13,
  MR_Word ProblemPieces_14,
  MR_Word STATE_VARIABLE_Specs_0_20,
  MR_Word * STATE_VARIABLE_Specs_21);

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__named_parents_to_pieces_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____mutable_impl_lang_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____mutable_impl_lang_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____mutable_target_params_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____mutable_target_params_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____need_lock_unlock_preds_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____need_lock_unlock_preds_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____need_pre_init_pred_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____need_pre_init_pred_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____need_unsafe_get_set_preds_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____need_unsafe_get_set_preds_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[66][2];

static /* final */ const MR_Box hlds__make_hlds__add_mutable_aux_preds_scalar_common_2[1][10];

static /* final */ const MR_Box hlds__make_hlds__add_mutable_aux_preds_scalar_common_3[1][11];

static /* final */ const MR_Box hlds__make_hlds__add_mutable_aux_preds_scalar_common_5[2][5];

static /* final */ const MR_Box hlds__make_hlds__add_mutable_aux_preds_scalar_common_6[1][1];

static /* final */ const MR_Box hlds__make_hlds__add_mutable_aux_preds_scalar_common_7[1][4];


/* sealed */ struct hlds__make_hlds__add_mutable_aux_preds__vector_common_type_4_0_s {
  const MR_Word hlds__make_hlds__add_mutable_aux_preds__vector_common_type_4_0__vct_4_f_0;
};

static /* final */ const struct hlds__make_hlds__add_mutable_aux_preds__vector_common_type_4_0_s hlds__make_hlds__add_mutable_aux_preds_vector_common_4[4];



static /* final */ const MR_Box hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[66][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mutable_pred_kind_0))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration in non-trailing grade."))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[4]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[3])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 19U)),
    ((MR_Box) ((MR_String) "mutable"))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[5])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: trailed"))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[7])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declarations."))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[10]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[11])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "may not appear in"))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[12])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is abstract, and thus"))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[14])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is constrained, and thus"))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[14])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "which may not appear in"))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[12])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[20])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[3])))
  },
  /* row 25 */
  {
    ((MR_Box) ((MR_String) "#endif\n")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 26 */
  {
    ((MR_Box) ((MR_String) ";\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[25])))
  },
  /* row 27 */
  {
    ((MR_Box) ((MR_String) ", MR_MUTEX_ATTR);\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[25])))
  },
  /* row 28 */
  {
    ((MR_Box) ((MR_String) "end\n")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 29 */
  {
    ((MR_Box) ((MR_String) "       X = Value\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[28])))
  },
  /* row 30 */
  {
    ((MR_Box) ((MR_String) "   {get_mutable_ack, Value} ->\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[29])))
  },
  /* row 31 */
  {
    ((MR_Box) ((MR_String) "receive\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[30])))
  },
  /* row 32 */
  {
    ((MR_Box) ((MR_String) ", self()},\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[31])))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "backend."))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[3])))
  },
  /* row 35 */
  {
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 36 */
  {
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[35])))
  },
  /* row 37 */
  {
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 38 */
  {
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[37])))
  },
  /* row 39 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in the expansion of the named inst"))
  },
  /* row 40 */
  {
    ((MR_Box) ((MR_Unsigned) 21U)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[40]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 42 */
  {
    ((MR_Box) ((MR_Unsigned) 21U)),
    ((MR_Box) ((MR_Integer) -1))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[42]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 44 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 45 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the inst"))
  },
  /* row 46 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "has uniqueness"))
  },
  /* row 47 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "clobbered"))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[47]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[22])))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[46]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[48])))
  },
  /* row 50 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "mostly_clobbered"))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[50]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[22])))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[46]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[51])))
  },
  /* row 53 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "mostly_unique"))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[53]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[22])))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[46]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[54])))
  },
  /* row 56 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "unique"))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[56]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[22])))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[46]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[57])))
  },
  /* row 59 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is not defined."))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[59]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 61 */
  {
    ((MR_Box) ((MR_Integer) 11)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 62 */
  {
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 63 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: multiple foreign_name attributes"))
  },
  /* row 64 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "specified for the"))
  },
  /* row 65 */
  {
    ((MR_Box) ((MR_String) ">();\n")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_mutable_aux_preds_scalar_common_2[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mutable_pred_kind_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_mutable_aux_preds_scalar_common_3[1][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_pred_status_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_need_qualifier_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0)),
    ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds__maybe__pti_maybe_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_mutable_aux_preds_scalar_common_5[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mutable_constant_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mutable_constant_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mutable_attach_to_io_state_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mutable_attach_to_io_state_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_mutable_aux_preds_scalar_common_6[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_mutable_aux_preds_scalar_common_7[1][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_mutable_pred_kind_0))
  },
};


static /* final */ const struct hlds__make_hlds__add_mutable_aux_preds__vector_common_type_4_0_s hlds__make_hlds__add_mutable_aux_preds_vector_common_4[4] = {
  /* row 0 */   {     (MR_Integer) 0 },
  /* row 1 */   {     (MR_Integer) 1 },
  /* row 2 */   {     (MR_Integer) 2 },
  /* row 3 */   {     (MR_Integer) 3 },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_mutable_aux_preds__maybe__pti_maybe_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_mutable_aux_preds__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_mutable_aux_preds__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_mutable_pred_kind_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mutable_pred_kind_0)
  }
};

static const MR_EnumFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_mutable_impl_lang_0_0 = {
  (MR_String) "mutable_lang_c",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_mutable_impl_lang_0_1 = {
  (MR_String) "mutable_lang_csharp",
  INT32_C(1)
};

static const MR_EnumFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_mutable_impl_lang_0_2 = {
  (MR_String) "mutable_lang_java",
  INT32_C(2)
};

static const MR_EnumFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_mutable_impl_lang_0_3 = {
  (MR_String) "mutable_lang_erlang",
  INT32_C(3)
};

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_value_ordered_mutable_impl_lang_0[4] = {
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_mutable_impl_lang_0_0,
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_mutable_impl_lang_0_1,
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_mutable_impl_lang_0_2,
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_mutable_impl_lang_0_3
};

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_name_ordered_mutable_impl_lang_0[4] = {
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_mutable_impl_lang_0_0,
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_mutable_impl_lang_0_1,
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_mutable_impl_lang_0_3,
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_mutable_impl_lang_0_2
};

static const MR_Integer hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__functor_number_map_mutable_impl_lang_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__type_ctor_info_mutable_impl_lang_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds____Unify____mutable_impl_lang_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds____Compare____mutable_impl_lang_0_0_10001)),
  (MR_String) "hlds.make_hlds.add_mutable_aux_preds",
  (MR_String) "mutable_impl_lang",
  {     hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_name_ordered_mutable_impl_lang_0 },
  {     hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_value_ordered_mutable_impl_lang_0 },
  (MR_Integer) 4,
  UINT16_C(4),
  hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__functor_number_map_mutable_impl_lang_0
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_mutable_aux_preds__list__ti_list_1parse_tree__prog_data__type_ctor_info_mutable_pred_kind_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mutable_pred_kind_0)
  }
};

static const MR_PseudoTypeInfo hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__field_types_mutable_target_params_0_0[8] = {
  (MR_PseudoTypeInfo) (&hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__type_ctor_info_mutable_impl_lang_0),
  (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_box_policy_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__type_ctor_info_need_pre_init_pred_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__type_ctor_info_need_lock_unlock_preds_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__type_ctor_info_need_unsafe_get_set_preds_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__add_mutable_aux_preds__list__ti_list_1parse_tree__prog_data__type_ctor_info_mutable_pred_kind_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__add_mutable_aux_preds__list__ti_list_1parse_tree__prog_data__type_ctor_info_mutable_pred_kind_0)
};

static const MR_ConstString hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__field_names_mutable_target_params_0_0[8] = {
  (MR_String) "mtp_mutable_impl_lang",
  (MR_String) "mtp_target_lang",
  (MR_String) "mtp_box_policy",
  (MR_String) "mtp_need_pre_init",
  (MR_String) "mtp_need_locking",
  (MR_String) "mtp_need_unsafe_get_set",
  (MR_String) "mtp_private_aux_preds",
  (MR_String) "mtp_public_aux_preds"
};

static const MR_DuArgLocn hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__field_locns_mutable_target_params_0_0[8] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 6,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 4,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 3,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 2,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
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

static const MR_DuFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__du_functor_desc_mutable_target_params_0_0 = {
  (MR_String) "mutable_target_params",
  INT16_C(8),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__field_types_mutable_target_params_0_0,
  hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__field_names_mutable_target_params_0_0,
  hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__field_locns_mutable_target_params_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__du_stag_ordered_mutable_target_params_0_0[1] = {
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__du_functor_desc_mutable_target_params_0_0
};

static const MR_DuPtagLayout hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__du_ptag_ordered_mutable_target_params_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__du_stag_ordered_mutable_target_params_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__du_name_ordered_mutable_target_params_0[1] = {
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__du_functor_desc_mutable_target_params_0_0
};

static const MR_Integer hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__functor_number_map_mutable_target_params_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__type_ctor_info_mutable_target_params_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds____Unify____mutable_target_params_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds____Compare____mutable_target_params_0_0_10001)),
  (MR_String) "hlds.make_hlds.add_mutable_aux_preds",
  (MR_String) "mutable_target_params",
  {     hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__du_name_ordered_mutable_target_params_0 },
  {     hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__du_ptag_ordered_mutable_target_params_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__functor_number_map_mutable_target_params_0
};

static const MR_EnumFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_lock_unlock_preds_0_0 = {
  (MR_String) "dont_need_lock_unlock_preds",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_lock_unlock_preds_0_1 = {
  (MR_String) "need_lock_unlock_preds",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_value_ordered_need_lock_unlock_preds_0[2] = {
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_lock_unlock_preds_0_0,
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_lock_unlock_preds_0_1
};

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_name_ordered_need_lock_unlock_preds_0[2] = {
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_lock_unlock_preds_0_0,
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_lock_unlock_preds_0_1
};

static const MR_Integer hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__functor_number_map_need_lock_unlock_preds_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__type_ctor_info_need_lock_unlock_preds_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds____Unify____need_lock_unlock_preds_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds____Compare____need_lock_unlock_preds_0_0_10001)),
  (MR_String) "hlds.make_hlds.add_mutable_aux_preds",
  (MR_String) "need_lock_unlock_preds",
  {     hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_name_ordered_need_lock_unlock_preds_0 },
  {     hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_value_ordered_need_lock_unlock_preds_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__functor_number_map_need_lock_unlock_preds_0
};

static const MR_EnumFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_pre_init_pred_0_0 = {
  (MR_String) "dont_need_pre_init_pred",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_pre_init_pred_0_1 = {
  (MR_String) "need_pre_init_pred",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_value_ordered_need_pre_init_pred_0[2] = {
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_pre_init_pred_0_0,
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_pre_init_pred_0_1
};

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_name_ordered_need_pre_init_pred_0[2] = {
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_pre_init_pred_0_0,
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_pre_init_pred_0_1
};

static const MR_Integer hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__functor_number_map_need_pre_init_pred_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__type_ctor_info_need_pre_init_pred_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds____Unify____need_pre_init_pred_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds____Compare____need_pre_init_pred_0_0_10001)),
  (MR_String) "hlds.make_hlds.add_mutable_aux_preds",
  (MR_String) "need_pre_init_pred",
  {     hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_name_ordered_need_pre_init_pred_0 },
  {     hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_value_ordered_need_pre_init_pred_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__functor_number_map_need_pre_init_pred_0
};

static const MR_EnumFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_unsafe_get_set_preds_0_0 = {
  (MR_String) "dont_need_unsafe_get_set_preds",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_unsafe_get_set_preds_0_1 = {
  (MR_String) "need_unsafe_get_set_preds",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_value_ordered_need_unsafe_get_set_preds_0[2] = {
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_unsafe_get_set_preds_0_0,
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_unsafe_get_set_preds_0_1
};

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_name_ordered_need_unsafe_get_set_preds_0[2] = {
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_unsafe_get_set_preds_0_0,
  &hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_need_unsafe_get_set_preds_0_1
};

static const MR_Integer hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__functor_number_map_need_unsafe_get_set_preds_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__type_ctor_info_need_unsafe_get_set_preds_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds____Unify____need_unsafe_get_set_preds_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds____Compare____need_unsafe_get_set_preds_0_0_10001)),
  (MR_String) "hlds.make_hlds.add_mutable_aux_preds",
  (MR_String) "need_unsafe_get_set_preds",
  {     hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_name_ordered_need_unsafe_get_set_preds_0 },
  {     hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_value_ordered_need_unsafe_get_set_preds_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__functor_number_map_need_unsafe_get_set_preds_0
};

static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__define_main_get_set_preds__1581__1_2_p_0(
  MR_Word AttachToIO_42,
  MR_Word HeadVar__2_277)
{
  {
    MR_bool succeeded = (AttachToIO_42 == HeadVar__2_277);

    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__define_unsafe_get_set_preds__1364__1_2_p_0(
  MR_Word IsConstant_33,
  MR_Word HeadVar__2_64)
{
  {
    MR_bool succeeded = (IsConstant_33 == HeadVar__2_64);

    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__define_lock_unlock_preds__1277__1_2_p_0(
  MR_Word IsConstant_33,
  MR_Word HeadVar__2_55)
{
  {
    MR_bool succeeded = (IsConstant_33 == HeadVar__2_55);

    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__define_pre_init_pred__1216__1_2_p_0(
  MR_Word IsConstant_33,
  MR_Word HeadVar__2_48)
{
  {
    MR_bool succeeded = (IsConstant_33 == HeadVar__2_48);

    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__define_aux_preds_for_mutable__1198__1_1_p_0(
  MR_Word STATE_VARIABLE_PredKinds_81_81)
{
  {
    MR_bool succeeded;

    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mutable_pred_kind_0), STATE_VARIABLE_PredKinds_81_81);
    return succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____need_unsafe_get_set_preds_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
}

static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____need_unsafe_get_set_preds_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____need_pre_init_pred_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
}

static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____need_pre_init_pred_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____need_lock_unlock_preds_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
}

static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____need_lock_unlock_preds_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____mutable_target_params_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_27 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_28 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_27 == CastY_28);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 6)) & (MR_Integer) 3);
      MR_Word ArgY1_5 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 6)) & (MR_Integer) 3);
      MR_Word ArgX2_7 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 4)) & (MR_Integer) 3);
      MR_Word ArgY2_8 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 4)) & (MR_Integer) 3);
      MR_Word ArgX3_10 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);
      MR_Word ArgY3_11 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);
      MR_Word ArgX4_13 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgY4_14 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgX5_16 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgY5_17 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgX6_19 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgY6_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX8_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY8_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word SubResult1_6;
      MR_Integer Var_37 = (MR_Integer) (ArgX1_4);
      MR_Integer Var_38 = (MR_Integer) (ArgY1_5);

      succeeded = (Var_37 < Var_38);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (Var_37 > Var_38);
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
        MR_Integer Var_39 = (MR_Integer) (ArgX2_7);
        MR_Integer Var_40 = (MR_Integer) (ArgY2_8);

        succeeded = (Var_39 < Var_40);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (Var_39 > Var_40);
          if (succeeded)
          {
            SubResult2_9 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = MR_TRUE;
            succeeded = !(succeeded);
            if (succeeded)
            {
              SubResult2_9 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
          }
        }
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;
          MR_Integer Var_41 = (MR_Integer) (ArgX3_10);
          MR_Integer Var_42 = (MR_Integer) (ArgY3_11);

          succeeded = (Var_41 < Var_42);
          if (succeeded)
          {
            SubResult3_12 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (Var_41 > Var_42);
            if (succeeded)
            {
              SubResult3_12 = (MR_Integer) 2;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = MR_TRUE;
              succeeded = !(succeeded);
              if (succeeded)
              {
                SubResult3_12 = (MR_Integer) 0;
                succeeded = MR_TRUE;
              }
            }
          }
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
          {
            MR_Word SubResult4_15;
            MR_Integer Var_43 = (MR_Integer) (ArgX4_13);
            MR_Integer Var_44 = (MR_Integer) (ArgY4_14);

            succeeded = (Var_43 < Var_44);
            if (succeeded)
            {
              SubResult4_15 = (MR_Integer) 1;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = (Var_43 > Var_44);
              if (succeeded)
              {
                SubResult4_15 = (MR_Integer) 2;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = MR_TRUE;
                succeeded = !(succeeded);
                if (succeeded)
                {
                  SubResult4_15 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
              }
            }
            if (succeeded)
              *HeadVar__1_1 = SubResult4_15;
            else
            {
              MR_Word SubResult5_18;
              MR_Integer Var_45 = (MR_Integer) (ArgX5_16);
              MR_Integer Var_46 = (MR_Integer) (ArgY5_17);

              succeeded = (Var_45 < Var_46);
              if (succeeded)
              {
                SubResult5_18 = (MR_Integer) 1;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = (Var_45 > Var_46);
                if (succeeded)
                {
                  SubResult5_18 = (MR_Integer) 2;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = MR_TRUE;
                  succeeded = !(succeeded);
                  if (succeeded)
                  {
                    SubResult5_18 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                }
              }
              if (succeeded)
                *HeadVar__1_1 = SubResult5_18;
              else
              {
                MR_Word SubResult6_21;
                MR_Integer Var_47 = (MR_Integer) (ArgX6_19);
                MR_Integer Var_48 = (MR_Integer) (ArgY6_20);

                succeeded = (Var_47 < Var_48);
                if (succeeded)
                {
                  SubResult6_21 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = (Var_47 > Var_48);
                  if (succeeded)
                  {
                    SubResult6_21 = (MR_Integer) 2;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = MR_TRUE;
                    succeeded = !(succeeded);
                    if (succeeded)
                    {
                      SubResult6_21 = (MR_Integer) 0;
                      succeeded = MR_TRUE;
                    }
                  }
                }
                if (succeeded)
                  *HeadVar__1_1 = SubResult6_21;
                else
                {
                  MR_Word SubResult7_24;

                  mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[2]), &SubResult7_24, ((MR_Box) (ArgX7_22)), ((MR_Box) (ArgY7_23)));
                  succeeded = (SubResult7_24 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult7_24;
                  else
                    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (ArgX8_25)), ((MR_Box) (ArgY8_26)));
                }
              }
            }
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____mutable_target_params_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_19 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_20 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_19 == CastY_20);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_21_21;
      MR_Word TypeInfo_22_22;
      MR_Word ArgX1_3 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 6)) & (MR_Integer) 3);
      MR_Word ArgY1_4 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 6)) & (MR_Integer) 3);
      MR_Word ArgX2_5 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 4)) & (MR_Integer) 3);
      MR_Word ArgY2_6 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 4)) & (MR_Integer) 3);
      MR_Word ArgX3_7 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);
      MR_Word ArgY3_8 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);
      MR_Word ArgX4_9 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgY4_10 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgX5_11 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgY5_12 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgX6_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgY6_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX8_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY8_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
      {
        succeeded = (ArgX2_5 == ArgY2_6);
        if (succeeded)
        {
          succeeded = (ArgX3_7 == ArgY3_8);
          if (succeeded)
          {
            succeeded = (ArgX4_9 == ArgY4_10);
            if (succeeded)
            {
              succeeded = (ArgX5_11 == ArgY5_12);
              if (succeeded)
              {
                succeeded = (ArgX6_13 == ArgY6_14);
                if (succeeded)
                {
                  TypeInfo_21_21 = (MR_Word) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[2]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_21_21, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
                  if (succeeded)
                  {
                    TypeInfo_22_22 = (MR_Word) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[2]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_22_22, ((MR_Box) (ArgX8_17)), ((MR_Box) (ArgY8_18)));
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

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____mutable_impl_lang_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
}

static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____mutable_impl_lang_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_aux_pred_defns_for_mutable_if_local_7_p_0(
  MR_Word SectionItem_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_19,
  MR_Word * STATE_VARIABLE_ModuleInfo_20,
  MR_Word STATE_VARIABLE_QualInfo_0_21,
  MR_Word * STATE_VARIABLE_QualInfo_22,
  MR_Word STATE_VARIABLE_Specs_0_23,
  MR_Word * STATE_VARIABLE_Specs_24)
{
  {
    MR_Word SectionInfo_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SectionItem_8, (MR_Integer) 0))));
    MR_Word ItemMutable_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SectionItem_8, (MR_Integer) 1))));
    MR_Word ItemMercuryStatus_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SectionInfo_12, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) ItemMercuryStatus_14)) == (MR_Integer) 1))
    {
      *STATE_VARIABLE_ModuleInfo_20 = STATE_VARIABLE_ModuleInfo_0_19;
      *STATE_VARIABLE_QualInfo_22 = STATE_VARIABLE_QualInfo_0_21;
      *STATE_VARIABLE_Specs_24 = STATE_VARIABLE_Specs_0_23;
    }
    else
    {
      MR_Word PredStatus_17;

      hlds__status__item_mercury_status_to_pred_status_2_p_0(ItemMercuryStatus_14, &PredStatus_17);
      hlds__make_hlds__add_mutable_aux_preds__add_aux_pred_defns_for_mutable_8_p_0(ItemMutable_13, PredStatus_17, STATE_VARIABLE_ModuleInfo_0_19, STATE_VARIABLE_ModuleInfo_20, STATE_VARIABLE_QualInfo_0_21, STATE_VARIABLE_QualInfo_22, STATE_VARIABLE_Specs_0_23, STATE_VARIABLE_Specs_24);
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_aux_pred_defns_for_mutable_8_p_0(
  MR_Word ItemMutable_9,
  MR_Word PredStatus_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_32,
  MR_Word * STATE_VARIABLE_ModuleInfo_33,
  MR_Word STATE_VARIABLE_QualInfo_0_34,
  MR_Word * STATE_VARIABLE_QualInfo_35,
  MR_Word STATE_VARIABLE_Specs_0_36,
  MR_Word * STATE_VARIABLE_Specs_37)
{
  {
    MR_bool succeeded;
    MR_String MutableName_14 = ((MR_String) ((MR_hl_field(MR_mktag(0), ItemMutable_9, (MR_Integer) 0))));
    MR_Word Type_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable_9, (MR_Integer) 2))));
    MR_Word MutAttrs_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable_9, (MR_Integer) 7))));
    MR_Word Context_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable_9, (MR_Integer) 8))));
    MR_Word Globals_24;
    MR_Word TargetParams_25;
    MR_Word IsConstant_26;
    MR_Word IsThreadLocal_27;
    MR_Word ImplLang_28;
    MR_Word Lang_29;
    MR_Word ModuleName_30;
    MR_String TargetMutableName_31;
    MR_Word STATE_VARIABLE_ModuleInfo_40_40;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_32, &Globals_24);
    hlds__make_hlds__add_mutable_aux_preds__get_mutable_target_params_3_p_0(Globals_24, MutAttrs_21, &TargetParams_25);
    IsConstant_26 = parse_tree__prog_item__mutable_var_constant_1_f_0(MutAttrs_21);
    IsThreadLocal_27 = parse_tree__prog_item__mutable_var_thread_local_1_f_0(MutAttrs_21);
    ImplLang_28 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), TargetParams_25, (MR_Integer) 0))) >> 6)) & (MR_Integer) 3);
    Lang_29 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), TargetParams_25, (MR_Integer) 0))) >> 4)) & (MR_Integer) 3);
    hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_ModuleInfo_0_32, &ModuleName_30);
    hlds__make_hlds__add_mutable_aux_preds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_109_117_116_97_98_108_101_95_116_97_114_103_101_116_95_118_97_114_95_110_97_109_101_95_95_91_54_93_95_48_7_p_0(STATE_VARIABLE_ModuleInfo_0_32, MutAttrs_21, ModuleName_30, MutableName_14, Lang_29, &TargetMutableName_31);
    switch (ImplLang_28) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        hlds__make_hlds__add_mutable_aux_preds__define_mutable_global_var_c_7_p_0(TargetMutableName_31, Type_16, IsConstant_26, IsThreadLocal_27, Context_22, STATE_VARIABLE_ModuleInfo_0_32, &STATE_VARIABLE_ModuleInfo_40_40);
        break;
      case (MR_Integer) 1:
        {
          MR_String TypeStr_65;
          MR_String DefnBody_66;
          MR_Word DefnForeignBodyCode_67;
          MR_String Var_69;
          MR_String Var_70;
          MR_String Var_72;
          MR_Word Var_75;

          switch (IsThreadLocal_27) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Var_77;

                Var_77 = parse_tree__builtin_lib_types__int_type_0_f_0();
                succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Type_16, Var_77);
                if (succeeded)
                  TypeStr_65 = (MR_String) "int";
                else
                  TypeStr_65 = (MR_String) "object";
              }
              break;
            case (MR_Integer) 1:
              TypeStr_65 = (MR_String) "int";
              break;
          }
          Var_72 = mercury__string__f_43_43_2_f_0(TargetMutableName_31, (MR_String) ";\n");
          Var_70 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_72);
          Var_69 = mercury__string__f_43_43_2_f_0(TypeStr_65, Var_70);
          DefnBody_66 = mercury__string__f_43_43_2_f_0((MR_String) "static ", Var_69);
          {
            Var_75 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_75, 0) = ((MR_Box) (DefnBody_66));
          }
          {
            DefnForeignBodyCode_67 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), DefnForeignBodyCode_67, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), DefnForeignBodyCode_67, 1) = ((MR_Box) (Var_75));
            MR_hl_field(MR_mktag(0), DefnForeignBodyCode_67, 2) = ((MR_Box) (Context_22));
          }
          hlds__hlds_module__module_add_foreign_body_code_3_p_0(DefnForeignBodyCode_67, STATE_VARIABLE_ModuleInfo_0_32, &STATE_VARIABLE_ModuleInfo_40_40);
        }
        break;
      case (MR_Integer) 3:
        STATE_VARIABLE_ModuleInfo_40_40 = STATE_VARIABLE_ModuleInfo_0_32;
        break;
      case (MR_Integer) 2:
        hlds__make_hlds__add_mutable_aux_preds__define_mutable_global_var_java_6_p_0(TargetMutableName_31, Type_16, IsThreadLocal_27, Context_22, STATE_VARIABLE_ModuleInfo_0_32, &STATE_VARIABLE_ModuleInfo_40_40);
        break;
    }
    hlds__make_hlds__add_mutable_aux_preds__define_aux_preds_for_mutable_10_p_0(TargetParams_25, ItemMutable_9, TargetMutableName_31, PredStatus_10, STATE_VARIABLE_ModuleInfo_40_40, STATE_VARIABLE_ModuleInfo_33, STATE_VARIABLE_QualInfo_0_34, STATE_VARIABLE_QualInfo_35, STATE_VARIABLE_Specs_0_36, STATE_VARIABLE_Specs_37);
  }
}

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_109_117_116_97_98_108_101_95_116_97_114_103_101_116_95_118_97_114_95_110_97_109_101_95_95_91_54_93_95_48_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word MutAttrs_9,
  MR_Word ModuleName_10,
  MR_String MutableName_11,
  MR_Word ForeignLanguage_12,
  MR_String * TargetMutableName_14)
{
  {
    MR_bool succeeded;
    MR_Word MaybeForeignNames_15;

    MaybeForeignNames_15 = parse_tree__prog_item__mutable_var_maybe_foreign_names_1_f_0(MutAttrs_9);
    if ((MaybeForeignNames_15 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_String RawCVarName_22;
      MR_Word QualifiedCVarName0_23;
      MR_Word QualifiedCVarName_24;

      RawCVarName_22 = mercury__string__f_43_43_2_f_0((MR_String) "mutable_variable_", MutableName_11);
      {
        QualifiedCVarName0_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), QualifiedCVarName0_23, 0) = ((MR_Box) (ModuleName_10));
        MR_hl_field(MR_mktag(1), QualifiedCVarName0_23, 1) = ((MR_Box) (RawCVarName_22));
      }
      succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(ModuleName_10);
      if (succeeded)
        QualifiedCVarName_24 = mdbcomp__sym_name__add_outermost_qualifier_2_f_0((MR_String) "mercury", QualifiedCVarName0_23);
      else
        QualifiedCVarName_24 = QualifiedCVarName0_23;
      *TargetMutableName_14 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(QualifiedCVarName_24);
    }
    else
    {
      MR_Word ForeignNames_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeForeignNames_15, (MR_Integer) 0))));
      MR_Word TargetMutableNames_37;

      hlds__make_hlds__add_mutable_aux_preds__get_matching_foreign_names_3_p_0(ForeignNames_16, ForeignLanguage_12, &TargetMutableNames_37);
      if ((TargetMutableNames_37 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_String RawCVarName_72;
        MR_Word QualifiedCVarName0_73;
        MR_Word QualifiedCVarName_74;

        RawCVarName_72 = mercury__string__f_43_43_2_f_0((MR_String) "mutable_variable_", MutableName_11);
        {
          QualifiedCVarName0_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), QualifiedCVarName0_73, 0) = ((MR_Box) (ModuleName_10));
          MR_hl_field(MR_mktag(1), QualifiedCVarName0_73, 1) = ((MR_Box) (RawCVarName_72));
        }
        succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(ModuleName_10);
        if (succeeded)
          QualifiedCVarName_74 = mdbcomp__sym_name__add_outermost_qualifier_2_f_0((MR_String) "mercury", QualifiedCVarName0_73);
        else
          QualifiedCVarName_74 = QualifiedCVarName0_73;
        *TargetMutableName_14 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(QualifiedCVarName_74);
      }
      else
      {
        MR_Word Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TargetMutableNames_37, (MR_Integer) 1))));
        MR_Word Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TargetMutableNames_37, (MR_Integer) 0))));

        if ((Var_67 == (MR_Word) ((MR_Unsigned) 0U)))
          *TargetMutableName_14 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_68, (MR_Integer) 1))));
        else
        {
          MR_Word Globals_42;
          MR_Word CompilationTarget_43;
          MR_String RawCVarName_80;
          MR_Word QualifiedCVarName0_81;
          MR_Word QualifiedCVarName_82;
          MR_String Var_54;

          hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_8, &Globals_42);
          libs__globals__get_target_2_p_0(Globals_42, &CompilationTarget_43);
          Var_54 = libs__globals__compilation_target_string_1_f_0(CompilationTarget_43);
          RawCVarName_80 = mercury__string__f_43_43_2_f_0((MR_String) "mutable_variable_", MutableName_11);
          {
            QualifiedCVarName0_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), QualifiedCVarName0_81, 0) = ((MR_Box) (ModuleName_10));
            MR_hl_field(MR_mktag(1), QualifiedCVarName0_81, 1) = ((MR_Box) (RawCVarName_80));
          }
          succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(ModuleName_10);
          if (succeeded)
            QualifiedCVarName_82 = mdbcomp__sym_name__add_outermost_qualifier_2_f_0((MR_String) "mercury", QualifiedCVarName0_81);
          else
            QualifiedCVarName_82 = QualifiedCVarName0_81;
          *TargetMutableName_14 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(QualifiedCVarName_82);
        }
      }
    }
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_aux_preds_for_mutable_10_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__define_aux_preds_for_mutable__1198__1_1_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))));
    return succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_aux_preds_for_mutable_10_p_0(
  MR_Word TargetParams_11,
  MR_Word ItemMutable_12,
  MR_String TargetMutableName_13,
  MR_Word PredStatus_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_38,
  MR_Word * STATE_VARIABLE_ModuleInfo_39,
  MR_Word STATE_VARIABLE_QualInfo_0_40,
  MR_Word * STATE_VARIABLE_QualInfo_41,
  MR_Word STATE_VARIABLE_Specs_0_42,
  MR_Word * STATE_VARIABLE_Specs_43)
{
  {
    MR_bool succeeded;
    MR_Word ImplLang_18 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), TargetParams_11, (MR_Integer) 0))) >> 6)) & (MR_Integer) 3);
    MR_Word Lang_19 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), TargetParams_11, (MR_Integer) 0))) >> 4)) & (MR_Integer) 3);
    MR_Word BoxPolicy_20 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), TargetParams_11, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);
    MR_Word PrivatePredKinds_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TargetParams_11, (MR_Integer) 1))));
    MR_Word PublicPredKinds_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TargetParams_11, (MR_Integer) 2))));
    MR_Word NeededPredKinds_26;
    MR_Word Attrs0_27;
    MR_Word Attrs_29;
    MR_Word MaybeCallPreInitExpr_32;
    MR_Word MaybeLockUnlockExprs_34;
    MR_Word MaybeUnsafeGetSetExprs_36;
    MR_Word InitSetPredName_37;
    MR_Word STATE_VARIABLE_PredKinds_47_47;
    MR_Word STATE_VARIABLE_ModuleInfo_50_50;
    MR_Word STATE_VARIABLE_QualInfo_51_51;
    MR_Word STATE_VARIABLE_Specs_52_52;
    MR_Word STATE_VARIABLE_PredKinds_53_53;
    MR_Word STATE_VARIABLE_ModuleInfo_58_58;
    MR_Word STATE_VARIABLE_QualInfo_59_59;
    MR_Word STATE_VARIABLE_Specs_60_60;
    MR_Word STATE_VARIABLE_PredKinds_61_61;
    MR_Word STATE_VARIABLE_ModuleInfo_66_66;
    MR_Word STATE_VARIABLE_QualInfo_67_67;
    MR_Word STATE_VARIABLE_Specs_68_68;
    MR_Word STATE_VARIABLE_PredKinds_69_69;
    MR_Word STATE_VARIABLE_PredKinds_70_70;
    MR_Word STATE_VARIABLE_ModuleInfo_71_71;
    MR_Word STATE_VARIABLE_QualInfo_72_72;
    MR_Word STATE_VARIABLE_Specs_73_73;
    MR_Word STATE_VARIABLE_PredKinds_81_81;
    MR_Word Var_82;
    MR_Word STATE_VARIABLE_PredKinds_49_49;
    MR_Word STATE_VARIABLE_PredKinds_57_57;
    MR_Word STATE_VARIABLE_PredKinds_55_55;
    MR_Word Var_56;
    MR_Word STATE_VARIABLE_PredKinds_65_65;
    MR_Word STATE_VARIABLE_PredKinds_63_63;
    MR_Word Var_64;
    MR_Word STATE_VARIABLE_PredKinds_75_75;

    NeededPredKinds_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mutable_pred_kind_0), PublicPredKinds_25, PrivatePredKinds_24);
    Attrs0_27 = parse_tree__prog_data_foreign__default_attributes_1_f_0(Lang_19);
    switch (ImplLang_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Attrs1_28;

          parse_tree__prog_data_foreign__set_box_policy_3_p_0(BoxPolicy_20, Attrs0_27, &Attrs1_28);
          parse_tree__prog_data_foreign__set_may_call_mercury_3_p_0((MR_Integer) 1, Attrs1_28, &Attrs_29);
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        parse_tree__prog_data_foreign__set_may_duplicate_3_p_0((MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_6[0])), Attrs0_27, &Attrs_29);
        break;
      case (MR_Integer) 3:
        Attrs_29 = Attrs0_27;
        break;
    }
    mercury__set__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mutable_pred_kind_0), NeededPredKinds_26, &STATE_VARIABLE_PredKinds_47_47);
    succeeded = mercury__set__remove_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mutable_pred_kind_0), ((MR_Box) ((MR_Integer) 10)), STATE_VARIABLE_PredKinds_47_47, &STATE_VARIABLE_PredKinds_49_49);
    if (succeeded)
    {
      MR_Word CallPreInitExpr_31;

      STATE_VARIABLE_PredKinds_53_53 = STATE_VARIABLE_PredKinds_49_49;
      hlds__make_hlds__add_mutable_aux_preds__define_pre_init_pred_12_p_0(TargetParams_11, ItemMutable_12, TargetMutableName_13, Attrs_29, PredStatus_14, &CallPreInitExpr_31, STATE_VARIABLE_ModuleInfo_0_38, &STATE_VARIABLE_ModuleInfo_50_50, STATE_VARIABLE_QualInfo_0_40, &STATE_VARIABLE_QualInfo_51_51, STATE_VARIABLE_Specs_0_42, &STATE_VARIABLE_Specs_52_52);
      {
        MaybeCallPreInitExpr_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeCallPreInitExpr_32, 0) = ((MR_Box) (CallPreInitExpr_31));
      }
    }
    else
    {
      MaybeCallPreInitExpr_32 = (MR_Word) ((MR_Unsigned) 0U);
      STATE_VARIABLE_PredKinds_53_53 = STATE_VARIABLE_PredKinds_47_47;
      STATE_VARIABLE_Specs_52_52 = STATE_VARIABLE_Specs_0_42;
      STATE_VARIABLE_QualInfo_51_51 = STATE_VARIABLE_QualInfo_0_40;
      STATE_VARIABLE_ModuleInfo_50_50 = STATE_VARIABLE_ModuleInfo_0_38;
    }
    succeeded = mercury__set__remove_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mutable_pred_kind_0), ((MR_Box) ((MR_Integer) 8)), STATE_VARIABLE_PredKinds_53_53, &STATE_VARIABLE_PredKinds_55_55);
    if (succeeded)
    {
      Var_56 = (MR_Integer) 9;
      succeeded = mercury__set__remove_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mutable_pred_kind_0), ((MR_Box) (Var_56)), STATE_VARIABLE_PredKinds_55_55, &STATE_VARIABLE_PredKinds_57_57);
    }
    if (succeeded)
    {
      MR_Tuple LockUnlockExprs_33;

      STATE_VARIABLE_PredKinds_61_61 = STATE_VARIABLE_PredKinds_57_57;
      hlds__make_hlds__add_mutable_aux_preds__define_lock_unlock_preds_12_p_0(TargetParams_11, ItemMutable_12, TargetMutableName_13, Attrs_29, PredStatus_14, &LockUnlockExprs_33, STATE_VARIABLE_ModuleInfo_50_50, &STATE_VARIABLE_ModuleInfo_58_58, STATE_VARIABLE_QualInfo_51_51, &STATE_VARIABLE_QualInfo_59_59, STATE_VARIABLE_Specs_52_52, &STATE_VARIABLE_Specs_60_60);
      {
        MaybeLockUnlockExprs_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeLockUnlockExprs_34, 0) = ((MR_Box) (LockUnlockExprs_33));
      }
    }
    else
    {
      MaybeLockUnlockExprs_34 = (MR_Word) ((MR_Unsigned) 0U);
      STATE_VARIABLE_PredKinds_61_61 = STATE_VARIABLE_PredKinds_53_53;
      STATE_VARIABLE_Specs_60_60 = STATE_VARIABLE_Specs_52_52;
      STATE_VARIABLE_QualInfo_59_59 = STATE_VARIABLE_QualInfo_51_51;
      STATE_VARIABLE_ModuleInfo_58_58 = STATE_VARIABLE_ModuleInfo_50_50;
    }
    succeeded = mercury__set__remove_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mutable_pred_kind_0), ((MR_Box) ((MR_Integer) 6)), STATE_VARIABLE_PredKinds_61_61, &STATE_VARIABLE_PredKinds_63_63);
    if (succeeded)
    {
      Var_64 = (MR_Integer) 7;
      succeeded = mercury__set__remove_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mutable_pred_kind_0), ((MR_Box) (Var_64)), STATE_VARIABLE_PredKinds_63_63, &STATE_VARIABLE_PredKinds_65_65);
    }
    if (succeeded)
    {
      MR_Tuple UnsafeGetSetExprs_35;

      STATE_VARIABLE_PredKinds_69_69 = STATE_VARIABLE_PredKinds_65_65;
      hlds__make_hlds__add_mutable_aux_preds__define_unsafe_get_set_preds_12_p_0(TargetParams_11, ItemMutable_12, TargetMutableName_13, Attrs_29, PredStatus_14, &UnsafeGetSetExprs_35, STATE_VARIABLE_ModuleInfo_58_58, &STATE_VARIABLE_ModuleInfo_66_66, STATE_VARIABLE_QualInfo_59_59, &STATE_VARIABLE_QualInfo_67_67, STATE_VARIABLE_Specs_60_60, &STATE_VARIABLE_Specs_68_68);
      {
        MaybeUnsafeGetSetExprs_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeUnsafeGetSetExprs_36, 0) = ((MR_Box) (UnsafeGetSetExprs_35));
      }
    }
    else
    {
      MaybeUnsafeGetSetExprs_36 = (MR_Word) ((MR_Unsigned) 0U);
      STATE_VARIABLE_PredKinds_69_69 = STATE_VARIABLE_PredKinds_61_61;
      STATE_VARIABLE_Specs_68_68 = STATE_VARIABLE_Specs_60_60;
      STATE_VARIABLE_QualInfo_67_67 = STATE_VARIABLE_QualInfo_59_59;
      STATE_VARIABLE_ModuleInfo_66_66 = STATE_VARIABLE_ModuleInfo_58_58;
    }
    hlds__make_hlds__add_mutable_aux_preds__define_main_get_set_preds_16_p_0(TargetParams_11, ItemMutable_12, TargetMutableName_13, Attrs_29, PredStatus_14, MaybeLockUnlockExprs_34, MaybeUnsafeGetSetExprs_36, &InitSetPredName_37, STATE_VARIABLE_PredKinds_69_69, &STATE_VARIABLE_PredKinds_70_70, STATE_VARIABLE_ModuleInfo_66_66, &STATE_VARIABLE_ModuleInfo_71_71, STATE_VARIABLE_QualInfo_67_67, &STATE_VARIABLE_QualInfo_72_72, STATE_VARIABLE_Specs_68_68, &STATE_VARIABLE_Specs_73_73);
    succeeded = mercury__set__remove_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mutable_pred_kind_0), ((MR_Box) ((MR_Integer) 11)), STATE_VARIABLE_PredKinds_70_70, &STATE_VARIABLE_PredKinds_75_75);
    if (succeeded)
    {
      STATE_VARIABLE_PredKinds_81_81 = STATE_VARIABLE_PredKinds_75_75;
      hlds__make_hlds__add_mutable_aux_preds__define_init_pred_11_p_0(ItemMutable_12, PredStatus_14, Lang_19, InitSetPredName_37, MaybeCallPreInitExpr_32, STATE_VARIABLE_ModuleInfo_71_71, STATE_VARIABLE_ModuleInfo_39, STATE_VARIABLE_QualInfo_72_72, STATE_VARIABLE_QualInfo_41, STATE_VARIABLE_Specs_73_73, STATE_VARIABLE_Specs_43);
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.define_aux_preds_for_mutable\'/10", (MR_String) "mutable does not need init predicate");
        return;
      }
    {
      Var_82 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_82, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), Var_82, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__define_aux_preds_for_mutable_10_p_0_1));
      MR_hl_field(MR_mktag(0), Var_82, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_82, 3) = ((MR_Box) (STATE_VARIABLE_PredKinds_81_81));
    }
    mercury__require__expect_3_p_0(Var_82, (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.define_aux_preds_for_mutable\'/10", (MR_String) "!.PredKinds is not empty");
  }
}

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_init_pred_11_p_0(
  MR_Word ItemMutable_12,
  MR_Word PredStatus_13,
  MR_Word Lang_14,
  MR_Word InitSetPredName_15,
  MR_Word MaybeCallPreInitExpr_16,
  MR_Word STATE_VARIABLE_ModuleInfo_0_41,
  MR_Word * STATE_VARIABLE_ModuleInfo_42,
  MR_Word STATE_VARIABLE_QualInfo_0_43,
  MR_Word * STATE_VARIABLE_QualInfo_44,
  MR_Word STATE_VARIABLE_Specs_0_45,
  MR_Word * STATE_VARIABLE_Specs_46)
{
  {
    MR_Word ModuleName_20;
    MR_String MutableName_21;
    MR_Word InitTerm_26;
    MR_Word VarSetMutable_27;
    MR_Word Context_29;
    MR_Word X_31;
    MR_Word VarSetMutableX_32;
    MR_Word VarX_33;
    MR_Word UnifyExpr_34;
    MR_Word CallSetExpr_35;
    MR_Word UnifyCallSetExpr_36;
    MR_Word InitPredExpr_37;
    MR_Word InitPredName_39;
    MR_Word Var_49;
    MR_Word Var_54;
    MR_Word STATE_VARIABLE_ModuleInfo_57_57;
    MR_Word STATE_VARIABLE_Specs_59_59;
    MR_Word Attrs_76;
    MR_Word Origin_77;
    MR_String CName_78;
    MR_Word PredNameModesPF_79;
    MR_Word FPEInfo_80;
    MR_Word Var_81;
    MR_Word STATE_VARIABLE_ModuleInfo_30_83;

    hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_ModuleInfo_0_41, &ModuleName_20);
    MutableName_21 = ((MR_String) ((MR_hl_field(MR_mktag(0), ItemMutable_12, (MR_Integer) 0))));
    InitTerm_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable_12, (MR_Integer) 5))));
    VarSetMutable_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable_12, (MR_Integer) 6))));
    Context_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable_12, (MR_Integer) 8))));
    mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_String) "X", &X_31, VarSetMutable_27, &VarSetMutableX_32);
    {
      VarX_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), VarX_33, 0) = ((MR_Box) (X_31));
      MR_hl_field(MR_mktag(1), VarX_33, 1) = ((MR_Box) (Context_29));
    }
    {
      UnifyExpr_34 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), UnifyExpr_34, 0) = ((MR_Box) (Context_29));
      MR_hl_field(MR_mktag(0), UnifyExpr_34, 1) = ((MR_Box) (VarX_33));
      MR_hl_field(MR_mktag(0), UnifyExpr_34, 2) = ((MR_Box) (InitTerm_26));
      MR_hl_field(MR_mktag(0), UnifyExpr_34, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
    }
    {
      Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (VarX_33));
      MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      CallSetExpr_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), CallSetExpr_35, 0) = ((MR_Box) (Context_29));
      MR_hl_field(MR_mktag(1), CallSetExpr_35, 1) = ((MR_Box) (InitSetPredName_15));
      MR_hl_field(MR_mktag(1), CallSetExpr_35, 2) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(1), CallSetExpr_35, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
    }
    {
      UnifyCallSetExpr_36 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), UnifyCallSetExpr_36, 0) = ((MR_Box) (Context_29));
      MR_hl_field(MR_mktag(2), UnifyCallSetExpr_36, 1) = ((MR_Box) (UnifyExpr_34));
      MR_hl_field(MR_mktag(2), UnifyCallSetExpr_36, 2) = ((MR_Box) (CallSetExpr_35));
    }
    if ((MaybeCallPreInitExpr_16 == (MR_Word) ((MR_Unsigned) 0U)))
      InitPredExpr_37 = UnifyCallSetExpr_36;
    else
    {
      MR_Word CallPreInitExpr_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCallPreInitExpr_16, (MR_Integer) 0))));

      {
        InitPredExpr_37 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), InitPredExpr_37, 0) = ((MR_Box) (Context_29));
        MR_hl_field(MR_mktag(2), InitPredExpr_37, 1) = ((MR_Box) (CallPreInitExpr_38));
        MR_hl_field(MR_mktag(2), InitPredExpr_37, 2) = ((MR_Box) (UnifyCallSetExpr_36));
      }
    }
    InitPredName_39 = parse_tree__prog_mutable__mutable_init_pred_sym_name_2_f_0(ModuleName_20, MutableName_21);
    {
      Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (InitPredExpr_37));
      MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    hlds__make_hlds__add_clause__module_add_clause_15_p_0(VarSetMutableX_32, (MR_Integer) 0, InitPredName_39, (MR_Word) ((MR_Unsigned) 0U), Var_54, PredStatus_13, Context_29, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 12U), STATE_VARIABLE_ModuleInfo_0_41, &STATE_VARIABLE_ModuleInfo_57_57, STATE_VARIABLE_QualInfo_0_43, STATE_VARIABLE_QualInfo_44, STATE_VARIABLE_Specs_0_45, &STATE_VARIABLE_Specs_59_59);
    {
      Var_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_81, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_81, 1) = ((MR_Box) (ModuleName_20));
      MR_hl_field(MR_mktag(3), Var_81, 2) = ((MR_Box) (MutableName_21));
      MR_hl_field(MR_mktag(3), Var_81, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 11));
    }
    Attrs_76 = (MR_Word) (Var_81);
    {
      Origin_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Origin_77, 0) = ((MR_Box) (Attrs_76));
    }
    hlds__hlds_module__module_info_new_user_init_pred_5_p_0(InitPredName_39, (MR_Integer) 0, &CName_78, STATE_VARIABLE_ModuleInfo_57_57, &STATE_VARIABLE_ModuleInfo_30_83);
    {
      PredNameModesPF_79 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), PredNameModesPF_79, 0) = ((MR_Box) (InitPredName_39));
      MR_hl_field(MR_mktag(0), PredNameModesPF_79, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), PredNameModesPF_79, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    {
      FPEInfo_80 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), FPEInfo_80, 0) = ((MR_Box) (Origin_77));
      MR_hl_field(MR_mktag(0), FPEInfo_80, 1) = (MR_Box) ((MR_Unsigned) (Lang_14));
      MR_hl_field(MR_mktag(0), FPEInfo_80, 2) = ((MR_Box) (PredNameModesPF_79));
      MR_hl_field(MR_mktag(0), FPEInfo_80, 3) = ((MR_Box) (CName_78));
    }
    hlds__make_hlds__add_pragma__add_pragma_foreign_proc_export_6_p_0(FPEInfo_80, Context_29, STATE_VARIABLE_ModuleInfo_30_83, STATE_VARIABLE_ModuleInfo_42, STATE_VARIABLE_Specs_59_59, STATE_VARIABLE_Specs_46);
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_main_get_set_preds_16_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__define_main_get_set_preds__1581__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_main_get_set_preds_16_p_0(
  MR_Word TargetParams_17,
  MR_Word ItemMutable_18,
  MR_String TargetMutableName_19,
  MR_Word Attrs_20,
  MR_Word PredStatus_21,
  MR_Word MaybeLockUnlockExprs_22,
  MR_Word MaybeUnsafeGetSetExprs_23,
  MR_Word * InitSetPredName_24,
  MR_Word STATE_VARIABLE_PredKinds_0_86,
  MR_Word * STATE_VARIABLE_PredKinds_87,
  MR_Word STATE_VARIABLE_ModuleInfo_0_88,
  MR_Word * STATE_VARIABLE_ModuleInfo_89,
  MR_Word STATE_VARIABLE_QualInfo_0_90,
  MR_Word * STATE_VARIABLE_QualInfo_91,
  MR_Word STATE_VARIABLE_Specs_0_92,
  MR_Word * STATE_VARIABLE_Specs_93)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_29;
    MR_String MutableName_30;
    MR_Word Inst_34;
    MR_Word MutAttrs_37;
    MR_Word Context_38;
    MR_Word IsConstant_40;
    MR_Word IsThreadLocal_41;
    MR_Word AttachToIO_42;
    MR_Word ImplLang_43;
    MR_Word BoxPolicy_44;
    MR_Word X_45;
    MR_Word VarSetOnlyX_46;
    MR_Word Var_95;

    hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_ModuleInfo_0_88, &ModuleName_29);
    MutableName_30 = ((MR_String) ((MR_hl_field(MR_mktag(0), ItemMutable_18, (MR_Integer) 0))));
    Inst_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable_18, (MR_Integer) 4))));
    MutAttrs_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable_18, (MR_Integer) 7))));
    Context_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable_18, (MR_Integer) 8))));
    IsConstant_40 = parse_tree__prog_item__mutable_var_constant_1_f_0(MutAttrs_37);
    IsThreadLocal_41 = parse_tree__prog_item__mutable_var_thread_local_1_f_0(MutAttrs_37);
    AttachToIO_42 = parse_tree__prog_item__mutable_var_attach_to_io_state_1_f_0(MutAttrs_37);
    ImplLang_43 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), TargetParams_17, (MR_Integer) 0))) >> 6)) & (MR_Integer) 3);
    BoxPolicy_44 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), TargetParams_17, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);
    Var_95 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
    mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_String) "X", &X_45, Var_95, &VarSetOnlyX_46);
    switch (IsConstant_40) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word ConstantGetPredName_47;
          MR_Word ConstantGetAttrs0_49;
          MR_Word ConstantGetAttrs_50;
          MR_String ConstantGetCode_52;
          MR_String ConstantSetCode_53;
          MR_Word ConstantGetFCInfo_54;
          MR_Word ConstantSetFCInfo_55;
          MR_Word Var_247;
          MR_Word Var_248;
          MR_Word Var_250;
          MR_Word Var_252;
          MR_Word Var_253;
          MR_Word Var_254;
          MR_Word Var_256;
          MR_Word Var_257;
          MR_Word Var_259;
          MR_Word Var_261;
          MR_Word Var_262;
          MR_Word STATE_VARIABLE_ModuleInfo_265_265;
          MR_Word STATE_VARIABLE_Specs_266_266;
          MR_Word STATE_VARIABLE_PredKinds_271_271;
          MR_Word Var_274;

          ConstantGetPredName_47 = parse_tree__prog_mutable__mutable_get_pred_sym_name_2_f_0(ModuleName_29, MutableName_30);
          *InitSetPredName_24 = parse_tree__prog_mutable__mutable_secret_set_pred_sym_name_2_f_0(ModuleName_29, MutableName_30);
          parse_tree__prog_data_foreign__set_purity_3_p_0((MR_Integer) 0, Attrs_20, &ConstantGetAttrs0_49);
          parse_tree__prog_data_foreign__set_thread_safe_3_p_0((MR_Integer) 1, ConstantGetAttrs0_49, &ConstantGetAttrs_50);
          switch (ImplLang_43) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              {
                MR_String Var_243;

                Var_243 = mercury__string__f_43_43_2_f_0(TargetMutableName_19, (MR_String) ";\n");
                ConstantGetCode_52 = mercury__string__f_43_43_2_f_0((MR_String) "X = ", Var_243);
                ConstantSetCode_53 = mercury__string__f_43_43_2_f_0(TargetMutableName_19, (MR_String) " = X;\n");
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Var_225;
                MR_Word Var_227;
                MR_String Var_240;

                {
                  Var_227 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_227, 0) = ((MR_Box) (TargetMutableName_19));
                  MR_hl_field(MR_mktag(1), Var_227, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[32])));
                }
                {
                  Var_225 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_225, 0) = ((MR_Box) ((MR_String) "\'ML_erlang_global_server\' ! {get_mutable, "));
                  MR_hl_field(MR_mktag(1), Var_225, 1) = ((MR_Box) (Var_227));
                }
                ConstantGetCode_52 = mercury__string__append_list_1_f_0(Var_225);
                Var_240 = mercury__string__f_43_43_2_f_0(TargetMutableName_19, (MR_String) ", X}");
                ConstantSetCode_53 = mercury__string__f_43_43_2_f_0((MR_String) "\'ML_erlang_global_server\' ! {set_mutable, ", Var_240);
              }
              break;
          }
          Var_250 = parse_tree__prog_mode__out_mode_1_f_0(Inst_34);
          {
            Var_248 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_248, 0) = ((MR_Box) (X_45));
            MR_hl_field(MR_mktag(0), Var_248, 1) = ((MR_Box) ((MR_String) "X"));
            MR_hl_field(MR_mktag(0), Var_248, 2) = ((MR_Box) (Var_250));
            MR_hl_field(MR_mktag(0), Var_248, 3) = (MR_Box) ((MR_Unsigned) (BoxPolicy_44));
          }
          {
            Var_247 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_247, 0) = ((MR_Box) (Var_248));
            MR_hl_field(MR_mktag(1), Var_247, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Var_252 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0));
          {
            Var_254 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_254, 0) = ((MR_Box) (Context_38));
          }
          {
            Var_253 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_253, 0) = ((MR_Box) (ConstantGetCode_52));
            MR_hl_field(MR_mktag(0), Var_253, 1) = ((MR_Box) (Var_254));
          }
          {
            ConstantGetFCInfo_54 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ConstantGetFCInfo_54, 0) = ((MR_Box) (ConstantGetAttrs_50));
            MR_hl_field(MR_mktag(0), ConstantGetFCInfo_54, 1) = ((MR_Box) (ConstantGetPredName_47));
            MR_hl_field(MR_mktag(0), ConstantGetFCInfo_54, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(0), ConstantGetFCInfo_54, 3) = ((MR_Box) (Var_247));
            MR_hl_field(MR_mktag(0), ConstantGetFCInfo_54, 4) = ((MR_Box) (VarSetOnlyX_46));
            MR_hl_field(MR_mktag(0), ConstantGetFCInfo_54, 5) = ((MR_Box) (Var_252));
            MR_hl_field(MR_mktag(0), ConstantGetFCInfo_54, 6) = ((MR_Box) (Var_253));
          }
          Var_259 = parse_tree__prog_mode__in_mode_1_f_0(Inst_34);
          {
            Var_257 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_257, 0) = ((MR_Box) (X_45));
            MR_hl_field(MR_mktag(0), Var_257, 1) = ((MR_Box) ((MR_String) "X"));
            MR_hl_field(MR_mktag(0), Var_257, 2) = ((MR_Box) (Var_259));
            MR_hl_field(MR_mktag(0), Var_257, 3) = (MR_Box) ((MR_Unsigned) (BoxPolicy_44));
          }
          {
            Var_256 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_256, 0) = ((MR_Box) (Var_257));
            MR_hl_field(MR_mktag(1), Var_256, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Var_261 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0));
          {
            Var_262 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_262, 0) = ((MR_Box) (ConstantSetCode_53));
            MR_hl_field(MR_mktag(0), Var_262, 1) = ((MR_Box) (Var_254));
          }
          {
            ConstantSetFCInfo_55 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ConstantSetFCInfo_55, 0) = ((MR_Box) (Attrs_20));
            MR_hl_field(MR_mktag(0), ConstantSetFCInfo_55, 1) = ((MR_Box) (*InitSetPredName_24));
            MR_hl_field(MR_mktag(0), ConstantSetFCInfo_55, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(0), ConstantSetFCInfo_55, 3) = ((MR_Box) (Var_256));
            MR_hl_field(MR_mktag(0), ConstantSetFCInfo_55, 4) = ((MR_Box) (VarSetOnlyX_46));
            MR_hl_field(MR_mktag(0), ConstantSetFCInfo_55, 5) = ((MR_Box) (Var_261));
            MR_hl_field(MR_mktag(0), ConstantSetFCInfo_55, 6) = ((MR_Box) (Var_262));
          }
          hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(ConstantGetFCInfo_54, PredStatus_21, Context_38, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModuleInfo_0_88, &STATE_VARIABLE_ModuleInfo_265_265, STATE_VARIABLE_Specs_0_92, &STATE_VARIABLE_Specs_266_266);
          hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(ConstantSetFCInfo_55, PredStatus_21, Context_38, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModuleInfo_265_265, STATE_VARIABLE_ModuleInfo_89, STATE_VARIABLE_Specs_266_266, STATE_VARIABLE_Specs_93);
          mercury__set__det_remove_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mutable_pred_kind_0), ((MR_Box) ((MR_Integer) 4)), STATE_VARIABLE_PredKinds_0_86, &STATE_VARIABLE_PredKinds_271_271);
          mercury__set__det_remove_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mutable_pred_kind_0), ((MR_Box) ((MR_Integer) 5)), STATE_VARIABLE_PredKinds_271_271, STATE_VARIABLE_PredKinds_87);
          {
            Var_274 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_274, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_5[1]));
            MR_hl_field(MR_mktag(0), Var_274, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__define_main_get_set_preds_16_p_0_1));
            MR_hl_field(MR_mktag(0), Var_274, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_274, 3) = ((MR_Box) (AttachToIO_42));
            MR_hl_field(MR_mktag(0), Var_274, 4) = ((MR_Box) ((MR_Integer) 0));
          }
          mercury__require__expect_3_p_0(Var_274, (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.define_main_get_set_preds\'/16", (MR_String) "AttachToIO = mutable_attach_to_io_state");
          *STATE_VARIABLE_QualInfo_91 = STATE_VARIABLE_QualInfo_0_90;
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word StdGetPredName_56;
          MR_Word ImpureGetExpr_60;
          MR_Word ImpureSetExpr_61;
          MR_Word STATE_VARIABLE_ModuleInfo_179_179;
          MR_Word STATE_VARIABLE_QualInfo_180_180;
          MR_Word STATE_VARIABLE_Specs_181_181;
          MR_Word STATE_VARIABLE_PredKinds_186_186;

          StdGetPredName_56 = parse_tree__prog_mutable__mutable_get_pred_sym_name_2_f_0(ModuleName_29, MutableName_30);
          *InitSetPredName_24 = parse_tree__prog_mutable__mutable_set_pred_sym_name_2_f_0(ModuleName_29, MutableName_30);
          switch (ImplLang_43) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              {
                MR_Word CallUnsafeGetExpr_58;
                MR_Word CallUnsafeSetExpr_59;
                MR_Word StdPredArgs_64;
                MR_Word StdGetPredExpr_65;
                MR_Word Var_164;
                MR_Word Var_168;
                MR_Word STATE_VARIABLE_ModuleInfo_171_171;
                MR_Word STATE_VARIABLE_QualInfo_172_172;
                MR_Word STATE_VARIABLE_Specs_173_173;
                MR_Word Var_176;
                MR_Word STATE_VARIABLE_PredKinds_184_184;

                if ((MaybeUnsafeGetSetExprs_23 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.define_main_get_set_preds\'/16", (MR_String) "mutable_not_constant but MaybeUnsafeGetSetExprs = no");
                    return;
                  }
                else
                {
                  MR_Tuple Var_160 = ((MR_Tuple) ((MR_hl_field(MR_mktag(1), MaybeUnsafeGetSetExprs_23, (MR_Integer) 0))));

                  CallUnsafeGetExpr_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_160, (MR_Integer) 0))));
                  CallUnsafeSetExpr_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_160, (MR_Integer) 1))));
                }
                if ((MaybeLockUnlockExprs_22 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  ImpureGetExpr_60 = CallUnsafeGetExpr_58;
                  ImpureSetExpr_61 = CallUnsafeSetExpr_59;
                }
                else
                {
                  MR_Word CallLockExpr_62;
                  MR_Word CallUnlockExpr_63;
                  MR_Tuple Var_161 = ((MR_Tuple) ((MR_hl_field(MR_mktag(1), MaybeLockUnlockExprs_22, (MR_Integer) 0))));
                  MR_Word Var_162;
                  MR_Word Var_163;

                  CallLockExpr_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_161, (MR_Integer) 0))));
                  CallUnlockExpr_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_161, (MR_Integer) 1))));
                  {
                    Var_162 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), Var_162, 0) = ((MR_Box) (Context_38));
                    MR_hl_field(MR_mktag(2), Var_162, 1) = ((MR_Box) (CallUnsafeGetExpr_58));
                    MR_hl_field(MR_mktag(2), Var_162, 2) = ((MR_Box) (CallUnlockExpr_63));
                  }
                  {
                    ImpureGetExpr_60 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), ImpureGetExpr_60, 0) = ((MR_Box) (Context_38));
                    MR_hl_field(MR_mktag(2), ImpureGetExpr_60, 1) = ((MR_Box) (CallLockExpr_62));
                    MR_hl_field(MR_mktag(2), ImpureGetExpr_60, 2) = ((MR_Box) (Var_162));
                  }
                  {
                    Var_163 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), Var_163, 0) = ((MR_Box) (Context_38));
                    MR_hl_field(MR_mktag(2), Var_163, 1) = ((MR_Box) (CallUnsafeSetExpr_59));
                    MR_hl_field(MR_mktag(2), Var_163, 2) = ((MR_Box) (CallUnlockExpr_63));
                  }
                  {
                    ImpureSetExpr_61 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), ImpureSetExpr_61, 0) = ((MR_Box) (Context_38));
                    MR_hl_field(MR_mktag(2), ImpureSetExpr_61, 1) = ((MR_Box) (CallLockExpr_62));
                    MR_hl_field(MR_mktag(2), ImpureSetExpr_61, 2) = ((MR_Box) (Var_163));
                  }
                }
                {
                  Var_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_164, 0) = ((MR_Box) (X_45));
                  MR_hl_field(MR_mktag(1), Var_164, 1) = ((MR_Box) (Context_38));
                }
                {
                  StdPredArgs_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), StdPredArgs_64, 0) = ((MR_Box) (Var_164));
                  MR_hl_field(MR_mktag(1), StdPredArgs_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  StdGetPredExpr_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), StdGetPredExpr_65, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                  MR_hl_field(MR_mktag(3), StdGetPredExpr_65, 1) = ((MR_Box) (Context_38));
                  MR_hl_field(MR_mktag(3), StdGetPredExpr_65, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), StdGetPredExpr_65, 3) = ((MR_Box) (ImpureGetExpr_60));
                }
                {
                  Var_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_168, 0) = ((MR_Box) (StdGetPredExpr_65));
                  MR_hl_field(MR_mktag(1), Var_168, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                hlds__make_hlds__add_clause__module_add_clause_15_p_0(VarSetOnlyX_46, (MR_Integer) 0, StdGetPredName_56, StdPredArgs_64, Var_168, PredStatus_21, Context_38, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 12U), STATE_VARIABLE_ModuleInfo_0_88, &STATE_VARIABLE_ModuleInfo_171_171, STATE_VARIABLE_QualInfo_0_90, &STATE_VARIABLE_QualInfo_172_172, STATE_VARIABLE_Specs_0_92, &STATE_VARIABLE_Specs_173_173);
                {
                  Var_176 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_176, 0) = ((MR_Box) (ImpureSetExpr_61));
                  MR_hl_field(MR_mktag(1), Var_176, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                hlds__make_hlds__add_clause__module_add_clause_15_p_0(VarSetOnlyX_46, (MR_Integer) 0, *InitSetPredName_24, StdPredArgs_64, Var_176, PredStatus_21, Context_38, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 12U), STATE_VARIABLE_ModuleInfo_171_171, &STATE_VARIABLE_ModuleInfo_179_179, STATE_VARIABLE_QualInfo_172_172, &STATE_VARIABLE_QualInfo_180_180, STATE_VARIABLE_Specs_173_173, &STATE_VARIABLE_Specs_181_181);
                mercury__set__det_remove_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mutable_pred_kind_0), ((MR_Box) ((MR_Integer) 0)), STATE_VARIABLE_PredKinds_0_86, &STATE_VARIABLE_PredKinds_184_184);
                mercury__set__det_remove_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mutable_pred_kind_0), ((MR_Box) ((MR_Integer) 1)), STATE_VARIABLE_PredKinds_184_184, &STATE_VARIABLE_PredKinds_186_186);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word ThreadSafeAttrs_67;
                MR_Word ErlangGetAttrs_68;
                MR_Word ErlangSetAttrs_69;
                MR_String StdGetCode_70;
                MR_String StdSetCode_71;
                MR_Word StdGetFCInfo_72;
                MR_Word StdSetFCInfo_73;
                MR_Word Var_123;
                MR_Word Var_124;
                MR_Word Var_126;
                MR_Word Var_128;
                MR_Word Var_129;
                MR_Word Var_130;
                MR_Word Var_132;
                MR_Word Var_133;
                MR_Word Var_135;
                MR_Word Var_137;
                MR_Word Var_138;
                MR_Word STATE_VARIABLE_ModuleInfo_141_141;
                MR_Word STATE_VARIABLE_Specs_142_142;
                MR_Word STATE_VARIABLE_PredKinds_147_147;
                MR_Word Var_150;
                MR_Word Var_151;

                parse_tree__prog_data_foreign__set_thread_safe_3_p_0((MR_Integer) 1, Attrs_20, &ThreadSafeAttrs_67);
                parse_tree__prog_data_foreign__set_purity_3_p_0((MR_Integer) 1, ThreadSafeAttrs_67, &ErlangGetAttrs_68);
                parse_tree__prog_data_foreign__set_purity_3_p_0((MR_Integer) 2, ThreadSafeAttrs_67, &ErlangSetAttrs_69);
                switch (IsThreadLocal_41) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word Var_99;
                      MR_Word Var_101;
                      MR_String Var_114;

                      {
                        Var_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_101, 0) = ((MR_Box) (TargetMutableName_19));
                        MR_hl_field(MR_mktag(1), Var_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[32])));
                      }
                      {
                        Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_99, 0) = ((MR_Box) ((MR_String) "\'ML_erlang_global_server\' ! {get_mutable, "));
                        MR_hl_field(MR_mktag(1), Var_99, 1) = ((MR_Box) (Var_101));
                      }
                      StdGetCode_70 = mercury__string__append_list_1_f_0(Var_99);
                      Var_114 = mercury__string__f_43_43_2_f_0(TargetMutableName_19, (MR_String) ", X}");
                      StdSetCode_71 = mercury__string__f_43_43_2_f_0((MR_String) "\'ML_erlang_global_server\' ! {set_mutable, ", Var_114);
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_String Var_117;
                      MR_String Var_120;

                      Var_117 = mercury__string__f_43_43_2_f_0(TargetMutableName_19, (MR_String) "})");
                      StdGetCode_70 = mercury__string__f_43_43_2_f_0((MR_String) "X = get({\'MR_thread_local_mutable\', ", Var_117);
                      Var_120 = mercury__string__f_43_43_2_f_0(TargetMutableName_19, (MR_String) "}, X)");
                      StdSetCode_71 = mercury__string__f_43_43_2_f_0((MR_String) "put({\'MR_thread_local_mutable\', ", Var_120);
                    }
                    break;
                }
                Var_126 = parse_tree__prog_mode__out_mode_1_f_0(Inst_34);
                {
                  Var_124 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_124, 0) = ((MR_Box) (X_45));
                  MR_hl_field(MR_mktag(0), Var_124, 1) = ((MR_Box) ((MR_String) "X"));
                  MR_hl_field(MR_mktag(0), Var_124, 2) = ((MR_Box) (Var_126));
                  MR_hl_field(MR_mktag(0), Var_124, 3) = (MR_Box) ((MR_Unsigned) (BoxPolicy_44));
                }
                {
                  Var_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_123, 0) = ((MR_Box) (Var_124));
                  MR_hl_field(MR_mktag(1), Var_123, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                Var_128 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0));
                {
                  Var_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_130, 0) = ((MR_Box) (Context_38));
                }
                {
                  Var_129 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_129, 0) = ((MR_Box) (StdGetCode_70));
                  MR_hl_field(MR_mktag(0), Var_129, 1) = ((MR_Box) (Var_130));
                }
                {
                  StdGetFCInfo_72 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), StdGetFCInfo_72, 0) = ((MR_Box) (ErlangGetAttrs_68));
                  MR_hl_field(MR_mktag(0), StdGetFCInfo_72, 1) = ((MR_Box) (StdGetPredName_56));
                  MR_hl_field(MR_mktag(0), StdGetFCInfo_72, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(0), StdGetFCInfo_72, 3) = ((MR_Box) (Var_123));
                  MR_hl_field(MR_mktag(0), StdGetFCInfo_72, 4) = ((MR_Box) (VarSetOnlyX_46));
                  MR_hl_field(MR_mktag(0), StdGetFCInfo_72, 5) = ((MR_Box) (Var_128));
                  MR_hl_field(MR_mktag(0), StdGetFCInfo_72, 6) = ((MR_Box) (Var_129));
                }
                Var_135 = parse_tree__prog_mode__in_mode_1_f_0(Inst_34);
                {
                  Var_133 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_133, 0) = ((MR_Box) (X_45));
                  MR_hl_field(MR_mktag(0), Var_133, 1) = ((MR_Box) ((MR_String) "X"));
                  MR_hl_field(MR_mktag(0), Var_133, 2) = ((MR_Box) (Var_135));
                  MR_hl_field(MR_mktag(0), Var_133, 3) = (MR_Box) ((MR_Unsigned) (BoxPolicy_44));
                }
                {
                  Var_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_132, 0) = ((MR_Box) (Var_133));
                  MR_hl_field(MR_mktag(1), Var_132, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                Var_137 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0));
                {
                  Var_138 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_138, 0) = ((MR_Box) (StdSetCode_71));
                  MR_hl_field(MR_mktag(0), Var_138, 1) = ((MR_Box) (Var_130));
                }
                {
                  StdSetFCInfo_73 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), StdSetFCInfo_73, 0) = ((MR_Box) (ErlangSetAttrs_69));
                  MR_hl_field(MR_mktag(0), StdSetFCInfo_73, 1) = ((MR_Box) (*InitSetPredName_24));
                  MR_hl_field(MR_mktag(0), StdSetFCInfo_73, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(0), StdSetFCInfo_73, 3) = ((MR_Box) (Var_132));
                  MR_hl_field(MR_mktag(0), StdSetFCInfo_73, 4) = ((MR_Box) (VarSetOnlyX_46));
                  MR_hl_field(MR_mktag(0), StdSetFCInfo_73, 5) = ((MR_Box) (Var_137));
                  MR_hl_field(MR_mktag(0), StdSetFCInfo_73, 6) = ((MR_Box) (Var_138));
                }
                hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(StdGetFCInfo_72, PredStatus_21, Context_38, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModuleInfo_0_88, &STATE_VARIABLE_ModuleInfo_141_141, STATE_VARIABLE_Specs_0_92, &STATE_VARIABLE_Specs_142_142);
                hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(StdSetFCInfo_73, PredStatus_21, Context_38, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModuleInfo_141_141, &STATE_VARIABLE_ModuleInfo_179_179, STATE_VARIABLE_Specs_142_142, &STATE_VARIABLE_Specs_181_181);
                mercury__set__det_remove_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mutable_pred_kind_0), ((MR_Box) ((MR_Integer) 0)), STATE_VARIABLE_PredKinds_0_86, &STATE_VARIABLE_PredKinds_147_147);
                mercury__set__det_remove_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mutable_pred_kind_0), ((MR_Box) ((MR_Integer) 1)), STATE_VARIABLE_PredKinds_147_147, &STATE_VARIABLE_PredKinds_186_186);
                {
                  Var_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_151, 0) = ((MR_Box) (X_45));
                  MR_hl_field(MR_mktag(1), Var_151, 1) = ((MR_Box) (Context_38));
                }
                {
                  Var_150 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_150, 0) = ((MR_Box) (Var_151));
                  MR_hl_field(MR_mktag(1), Var_150, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  ImpureGetExpr_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ImpureGetExpr_60, 0) = ((MR_Box) (Context_38));
                  MR_hl_field(MR_mktag(1), ImpureGetExpr_60, 1) = ((MR_Box) (StdGetPredName_56));
                  MR_hl_field(MR_mktag(1), ImpureGetExpr_60, 2) = ((MR_Box) (Var_150));
                  MR_hl_field(MR_mktag(1), ImpureGetExpr_60, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                }
                {
                  ImpureSetExpr_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ImpureSetExpr_61, 0) = ((MR_Box) (Context_38));
                  MR_hl_field(MR_mktag(1), ImpureSetExpr_61, 1) = ((MR_Box) (*InitSetPredName_24));
                  MR_hl_field(MR_mktag(1), ImpureSetExpr_61, 2) = ((MR_Box) (Var_150));
                  MR_hl_field(MR_mktag(1), ImpureSetExpr_61, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
                }
                STATE_VARIABLE_QualInfo_180_180 = STATE_VARIABLE_QualInfo_0_90;
              }
              break;
          }
          switch (AttachToIO_42) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Word IO0_75;
                MR_Word IO_76;
                MR_Word VarSetXandIOs_77;
                MR_Word IOPredArgs_80;
                MR_Word CopyIOExpr_81;
                MR_Word IOGetPredExpr_82;
                MR_Word IOSetPredExpr_83;
                MR_Word PureIOGetPredExpr_84;
                MR_Word PureIOSetPredExpr_85;
                MR_Word STATE_VARIABLE_VarSet_189_189;
                MR_Word Var_192;
                MR_Word Var_193;
                MR_Word Var_194;
                MR_Word Var_195;
                MR_Word Var_196;
                MR_Word Var_204;
                MR_Word STATE_VARIABLE_ModuleInfo_207_207;
                MR_Word STATE_VARIABLE_QualInfo_208_208;
                MR_Word STATE_VARIABLE_Specs_209_209;
                MR_Word Var_212;
                MR_Word STATE_VARIABLE_PredKinds_220_220;

                mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_String) "IO0", &IO0_75, VarSetOnlyX_46, &STATE_VARIABLE_VarSet_189_189);
                mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_String) "IO", &IO_76, STATE_VARIABLE_VarSet_189_189, &VarSetXandIOs_77);
                {
                  Var_192 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_192, 0) = ((MR_Box) (X_45));
                  MR_hl_field(MR_mktag(1), Var_192, 1) = ((MR_Box) (Context_38));
                }
                {
                  Var_194 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_194, 0) = ((MR_Box) (IO0_75));
                  MR_hl_field(MR_mktag(1), Var_194, 1) = ((MR_Box) (Context_38));
                }
                {
                  Var_196 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_196, 0) = ((MR_Box) (IO_76));
                  MR_hl_field(MR_mktag(1), Var_196, 1) = ((MR_Box) (Context_38));
                }
                {
                  Var_195 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_195, 0) = ((MR_Box) (Var_196));
                  MR_hl_field(MR_mktag(1), Var_195, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_193 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_193, 0) = ((MR_Box) (Var_194));
                  MR_hl_field(MR_mktag(1), Var_193, 1) = ((MR_Box) (Var_195));
                }
                {
                  IOPredArgs_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), IOPredArgs_80, 0) = ((MR_Box) (Var_192));
                  MR_hl_field(MR_mktag(1), IOPredArgs_80, 1) = ((MR_Box) (Var_193));
                }
                {
                  CopyIOExpr_81 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), CopyIOExpr_81, 0) = ((MR_Box) (Context_38));
                  MR_hl_field(MR_mktag(0), CopyIOExpr_81, 1) = ((MR_Box) (Var_194));
                  MR_hl_field(MR_mktag(0), CopyIOExpr_81, 2) = ((MR_Box) (Var_196));
                  MR_hl_field(MR_mktag(0), CopyIOExpr_81, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
                }
                {
                  IOGetPredExpr_82 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), IOGetPredExpr_82, 0) = ((MR_Box) (Context_38));
                  MR_hl_field(MR_mktag(2), IOGetPredExpr_82, 1) = ((MR_Box) (ImpureGetExpr_60));
                  MR_hl_field(MR_mktag(2), IOGetPredExpr_82, 2) = ((MR_Box) (CopyIOExpr_81));
                }
                {
                  IOSetPredExpr_83 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), IOSetPredExpr_83, 0) = ((MR_Box) (Context_38));
                  MR_hl_field(MR_mktag(2), IOSetPredExpr_83, 1) = ((MR_Box) (ImpureSetExpr_61));
                  MR_hl_field(MR_mktag(2), IOSetPredExpr_83, 2) = ((MR_Box) (CopyIOExpr_81));
                }
                {
                  PureIOGetPredExpr_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), PureIOGetPredExpr_84, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                  MR_hl_field(MR_mktag(3), PureIOGetPredExpr_84, 1) = ((MR_Box) (Context_38));
                  MR_hl_field(MR_mktag(3), PureIOGetPredExpr_84, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(3), PureIOGetPredExpr_84, 3) = ((MR_Box) (IOGetPredExpr_82));
                }
                {
                  PureIOSetPredExpr_85 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), PureIOSetPredExpr_85, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                  MR_hl_field(MR_mktag(3), PureIOSetPredExpr_85, 1) = ((MR_Box) (Context_38));
                  MR_hl_field(MR_mktag(3), PureIOSetPredExpr_85, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(3), PureIOSetPredExpr_85, 3) = ((MR_Box) (IOSetPredExpr_83));
                }
                {
                  Var_204 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_204, 0) = ((MR_Box) (PureIOGetPredExpr_84));
                  MR_hl_field(MR_mktag(1), Var_204, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                hlds__make_hlds__add_clause__module_add_clause_15_p_0(VarSetXandIOs_77, (MR_Integer) 0, StdGetPredName_56, IOPredArgs_80, Var_204, PredStatus_21, Context_38, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 12U), STATE_VARIABLE_ModuleInfo_179_179, &STATE_VARIABLE_ModuleInfo_207_207, STATE_VARIABLE_QualInfo_180_180, &STATE_VARIABLE_QualInfo_208_208, STATE_VARIABLE_Specs_181_181, &STATE_VARIABLE_Specs_209_209);
                {
                  Var_212 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_212, 0) = ((MR_Box) (PureIOSetPredExpr_85));
                  MR_hl_field(MR_mktag(1), Var_212, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                hlds__make_hlds__add_clause__module_add_clause_15_p_0(VarSetXandIOs_77, (MR_Integer) 0, *InitSetPredName_24, IOPredArgs_80, Var_212, PredStatus_21, Context_38, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 12U), STATE_VARIABLE_ModuleInfo_207_207, STATE_VARIABLE_ModuleInfo_89, STATE_VARIABLE_QualInfo_208_208, STATE_VARIABLE_QualInfo_91, STATE_VARIABLE_Specs_209_209, STATE_VARIABLE_Specs_93);
                mercury__set__det_remove_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mutable_pred_kind_0), ((MR_Box) ((MR_Integer) 2)), STATE_VARIABLE_PredKinds_186_186, &STATE_VARIABLE_PredKinds_220_220);
                mercury__set__det_remove_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mutable_pred_kind_0), ((MR_Box) ((MR_Integer) 3)), STATE_VARIABLE_PredKinds_220_220, STATE_VARIABLE_PredKinds_87);
              }
              break;
            case (MR_Integer) 0:
              {
                *STATE_VARIABLE_PredKinds_87 = STATE_VARIABLE_PredKinds_186_186;
                *STATE_VARIABLE_ModuleInfo_89 = STATE_VARIABLE_ModuleInfo_179_179;
                *STATE_VARIABLE_QualInfo_91 = STATE_VARIABLE_QualInfo_180_180;
                *STATE_VARIABLE_Specs_93 = STATE_VARIABLE_Specs_181_181;
              }
              break;
          }
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_unsafe_get_set_preds_12_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__define_unsafe_get_set_preds__1364__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_unsafe_get_set_preds_12_p_0(
  MR_Word TargetParams_13,
  MR_Word ItemMutable_14,
  MR_String TargetMutableName_15,
  MR_Word Attrs_16,
  MR_Word PredStatus_17,
  MR_Tuple * UnsafeGetSetExprs_18,
  MR_Word STATE_VARIABLE_ModuleInfo_0_55,
  MR_Word * STATE_VARIABLE_ModuleInfo_56,
  MR_Word STATE_VARIABLE_QualInfo_0_57,
  MR_Word * STATE_VARIABLE_QualInfo_58,
  MR_Word STATE_VARIABLE_Specs_0_59,
  MR_Word * STATE_VARIABLE_Specs_60)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_22;
    MR_String MutableName_23;
    MR_Word Type_25;
    MR_Word Inst_27;
    MR_Word MutAttrs_30;
    MR_Word Context_31;
    MR_Word IsConstant_33;
    MR_Word IsThreadLocal_34;
    MR_Word ImplLang_35;
    MR_Word Lang_36;
    MR_Word BoxPolicy_37;
    MR_Word X_38;
    MR_Word VarSetOnlyX_39;
    MR_Word UnsafeGetAttrs_41;
    MR_Word UnsafeSetAttrs_42;
    MR_Word TrailedMutable_43;
    MR_String TrailCode_44;
    MR_String UnsafeGetCode_45;
    MR_String UnsafeSetCode_46;
    MR_Word UnsafeGetPredName_49;
    MR_Word UnsafeSetPredName_50;
    MR_Word UnsafeGetFCInfo_51;
    MR_Word UnsafeSetFCInfo_52;
    MR_Word CallUnsafeGetExpr0_53;
    MR_Word CallUnsafeSetExpr0_54;
    MR_Word Var_61;
    MR_Word Var_66;
    MR_Word Var_118;
    MR_Word Var_119;
    MR_Word Var_121;
    MR_Word Var_123;
    MR_Word Var_124;
    MR_Word Var_125;
    MR_Word Var_127;
    MR_Word Var_128;
    MR_Word Var_130;
    MR_Word Var_132;
    MR_Word Var_133;
    MR_String Var_134;
    MR_Word STATE_VARIABLE_ModuleInfo_137_137;
    MR_Word STATE_VARIABLE_Specs_138_138;
    MR_Word Var_142;
    MR_Word Var_143;

    hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_ModuleInfo_0_55, &ModuleName_22);
    MutableName_23 = ((MR_String) ((MR_hl_field(MR_mktag(0), ItemMutable_14, (MR_Integer) 0))));
    Type_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable_14, (MR_Integer) 2))));
    Inst_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable_14, (MR_Integer) 4))));
    MutAttrs_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable_14, (MR_Integer) 7))));
    Context_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable_14, (MR_Integer) 8))));
    IsConstant_33 = parse_tree__prog_item__mutable_var_constant_1_f_0(MutAttrs_30);
    {
      Var_61 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_61, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_61, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__define_unsafe_get_set_preds_12_p_0_1));
      MR_hl_field(MR_mktag(0), Var_61, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_61, 3) = ((MR_Box) (IsConstant_33));
      MR_hl_field(MR_mktag(0), Var_61, 4) = ((MR_Box) ((MR_Integer) 0));
    }
    mercury__require__expect_3_p_0(Var_61, (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.define_unsafe_get_set_preds\'/12", (MR_String) "need_unsafe_get_set_preds, but IsConstant = mutable_constant");
    IsThreadLocal_34 = parse_tree__prog_item__mutable_var_thread_local_1_f_0(MutAttrs_30);
    ImplLang_35 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), TargetParams_13, (MR_Integer) 0))) >> 6)) & (MR_Integer) 3);
    Lang_36 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), TargetParams_13, (MR_Integer) 0))) >> 4)) & (MR_Integer) 3);
    BoxPolicy_37 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), TargetParams_13, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);
    Var_66 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
    mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_String) "X", &X_38, Var_66, &VarSetOnlyX_39);
    parse_tree__prog_data_foreign__set_thread_safe_3_p_0((MR_Integer) 1, Attrs_16, &UnsafeSetAttrs_42);
    parse_tree__prog_data_foreign__set_purity_3_p_0((MR_Integer) 1, UnsafeSetAttrs_42, &UnsafeGetAttrs_41);
    TrailedMutable_43 = parse_tree__prog_item__mutable_var_trailed_1_f_0(MutAttrs_30);
    switch (ImplLang_35) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          switch (TrailedMutable_43) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_String Var_99;

                Var_99 = mercury__string__f_43_43_2_f_0(TargetMutableName_15, (MR_String) ");\n");
                TrailCode_44 = mercury__string__f_43_43_2_f_0((MR_String) "MR_trail_current_value(&", Var_99);
              }
              break;
            case (MR_Integer) 0:
              TrailCode_44 = (MR_String) "";
              break;
          }
          switch (IsThreadLocal_34) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_String Var_114;

                Var_114 = mercury__string__f_43_43_2_f_0(TargetMutableName_15, (MR_String) ";\n");
                UnsafeGetCode_45 = mercury__string__f_43_43_2_f_0((MR_String) "X = ", Var_114);
                UnsafeSetCode_46 = mercury__string__f_43_43_2_f_0(TargetMutableName_15, (MR_String) " = X;\n");
              }
              break;
            case (MR_Integer) 1:
              {
                MR_String TypeName_47;
                MR_String Var_102;
                MR_String Var_103;
                MR_String Var_105;
                MR_String Var_108;
                MR_String Var_109;
                MR_String Var_111;

                TypeName_47 = hlds__make_hlds__add_mutable_aux_preds__global_foreign_type_name_4_f_0(BoxPolicy_37, Lang_36, STATE_VARIABLE_ModuleInfo_0_55, Type_25);
                Var_105 = mercury__string__f_43_43_2_f_0(TargetMutableName_15, (MR_String) ");\n");
                Var_103 = mercury__string__f_43_43_2_f_0((MR_String) ", X, ", Var_105);
                Var_102 = mercury__string__f_43_43_2_f_0(TypeName_47, Var_103);
                UnsafeGetCode_45 = mercury__string__f_43_43_2_f_0((MR_String) "MR_get_thread_local_mutable(", Var_102);
                Var_111 = mercury__string__f_43_43_2_f_0(TargetMutableName_15, (MR_String) ");\n");
                Var_109 = mercury__string__f_43_43_2_f_0((MR_String) ", X, ", Var_111);
                Var_108 = mercury__string__f_43_43_2_f_0(TypeName_47, Var_109);
                UnsafeSetCode_46 = mercury__string__f_43_43_2_f_0((MR_String) "MR_set_thread_local_mutable(", Var_108);
              }
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          TrailCode_44 = (MR_String) "";
          switch (IsThreadLocal_34) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_String Var_93;
                MR_String Var_96;

                Var_93 = mercury__string__f_43_43_2_f_0(TargetMutableName_15, (MR_String) ";\n");
                UnsafeGetCode_45 = mercury__string__f_43_43_2_f_0((MR_String) "\tX = ", Var_93);
                Var_96 = mercury__string__f_43_43_2_f_0(TargetMutableName_15, (MR_String) " = X;\n");
                UnsafeSetCode_46 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_96);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_String Cast_48;
                MR_String Var_84;
                MR_String Var_85;
                MR_String Var_87;
                MR_String Var_90;
                MR_Word Var_174;

                Var_174 = parse_tree__builtin_lib_types__int_type_0_f_0();
                succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Type_25, Var_174);
                if (succeeded)
                  Cast_48 = (MR_String) "(int) ";
                else
                  Cast_48 = (MR_String) "";
                Var_87 = mercury__string__f_43_43_2_f_0(TargetMutableName_15, (MR_String) ");\n");
                Var_85 = mercury__string__f_43_43_2_f_0((MR_String) "runtime.ThreadLocalMutables.get(", Var_87);
                Var_84 = mercury__string__f_43_43_2_f_0(Cast_48, Var_85);
                UnsafeGetCode_45 = mercury__string__f_43_43_2_f_0((MR_String) "\tX = ", Var_84);
                Var_90 = mercury__string__f_43_43_2_f_0(TargetMutableName_15, (MR_String) ", X);\n");
                UnsafeSetCode_46 = mercury__string__f_43_43_2_f_0((MR_String) "\truntime.ThreadLocalMutables.set(", Var_90);
              }
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.define_unsafe_get_set_preds\'/12", (MR_String) "unsafe_get_set for erlang");
          return;
        }
        break;
      case (MR_Integer) 2:
        {
          TrailCode_44 = (MR_String) "";
          switch (IsThreadLocal_34) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_String Var_78;
                MR_String Var_81;

                Var_78 = mercury__string__f_43_43_2_f_0(TargetMutableName_15, (MR_String) ";\n");
                UnsafeGetCode_45 = mercury__string__f_43_43_2_f_0((MR_String) "\tX = ", Var_78);
                Var_81 = mercury__string__f_43_43_2_f_0(TargetMutableName_15, (MR_String) " = X;\n");
                UnsafeSetCode_46 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_81);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_String Var_72;
                MR_String Var_75;

                Var_72 = mercury__string__f_43_43_2_f_0(TargetMutableName_15, (MR_String) ".get();\n");
                UnsafeGetCode_45 = mercury__string__f_43_43_2_f_0((MR_String) "\tX = ", Var_72);
                Var_75 = mercury__string__f_43_43_2_f_0(TargetMutableName_15, (MR_String) ".set(X);\n");
                UnsafeSetCode_46 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_75);
              }
              break;
          }
        }
        break;
    }
    UnsafeGetPredName_49 = parse_tree__prog_mutable__mutable_unsafe_get_pred_sym_name_2_f_0(ModuleName_22, MutableName_23);
    UnsafeSetPredName_50 = parse_tree__prog_mutable__mutable_unsafe_set_pred_sym_name_2_f_0(ModuleName_22, MutableName_23);
    Var_121 = parse_tree__prog_mode__out_mode_1_f_0(Inst_27);
    {
      Var_119 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_119, 0) = ((MR_Box) (X_38));
      MR_hl_field(MR_mktag(0), Var_119, 1) = ((MR_Box) ((MR_String) "X"));
      MR_hl_field(MR_mktag(0), Var_119, 2) = ((MR_Box) (Var_121));
      MR_hl_field(MR_mktag(0), Var_119, 3) = (MR_Box) ((MR_Unsigned) (BoxPolicy_37));
    }
    {
      Var_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_118, 0) = ((MR_Box) (Var_119));
      MR_hl_field(MR_mktag(1), Var_118, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_123 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0));
    {
      Var_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_125, 0) = ((MR_Box) (Context_31));
    }
    {
      Var_124 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_124, 0) = ((MR_Box) (UnsafeGetCode_45));
      MR_hl_field(MR_mktag(0), Var_124, 1) = ((MR_Box) (Var_125));
    }
    {
      UnsafeGetFCInfo_51 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), UnsafeGetFCInfo_51, 0) = ((MR_Box) (UnsafeGetAttrs_41));
      MR_hl_field(MR_mktag(0), UnsafeGetFCInfo_51, 1) = ((MR_Box) (UnsafeGetPredName_49));
      MR_hl_field(MR_mktag(0), UnsafeGetFCInfo_51, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), UnsafeGetFCInfo_51, 3) = ((MR_Box) (Var_118));
      MR_hl_field(MR_mktag(0), UnsafeGetFCInfo_51, 4) = ((MR_Box) (VarSetOnlyX_39));
      MR_hl_field(MR_mktag(0), UnsafeGetFCInfo_51, 5) = ((MR_Box) (Var_123));
      MR_hl_field(MR_mktag(0), UnsafeGetFCInfo_51, 6) = ((MR_Box) (Var_124));
    }
    Var_130 = parse_tree__prog_mode__in_mode_1_f_0(Inst_27);
    {
      Var_128 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_128, 0) = ((MR_Box) (X_38));
      MR_hl_field(MR_mktag(0), Var_128, 1) = ((MR_Box) ((MR_String) "X"));
      MR_hl_field(MR_mktag(0), Var_128, 2) = ((MR_Box) (Var_130));
      MR_hl_field(MR_mktag(0), Var_128, 3) = (MR_Box) ((MR_Unsigned) (BoxPolicy_37));
    }
    {
      Var_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_127, 0) = ((MR_Box) (Var_128));
      MR_hl_field(MR_mktag(1), Var_127, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_132 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0));
    Var_134 = mercury__string__f_43_43_2_f_0(TrailCode_44, UnsafeSetCode_46);
    {
      Var_133 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_133, 0) = ((MR_Box) (Var_134));
      MR_hl_field(MR_mktag(0), Var_133, 1) = ((MR_Box) (Var_125));
    }
    {
      UnsafeSetFCInfo_52 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), UnsafeSetFCInfo_52, 0) = ((MR_Box) (UnsafeSetAttrs_42));
      MR_hl_field(MR_mktag(0), UnsafeSetFCInfo_52, 1) = ((MR_Box) (UnsafeSetPredName_50));
      MR_hl_field(MR_mktag(0), UnsafeSetFCInfo_52, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), UnsafeSetFCInfo_52, 3) = ((MR_Box) (Var_127));
      MR_hl_field(MR_mktag(0), UnsafeSetFCInfo_52, 4) = ((MR_Box) (VarSetOnlyX_39));
      MR_hl_field(MR_mktag(0), UnsafeSetFCInfo_52, 5) = ((MR_Box) (Var_132));
      MR_hl_field(MR_mktag(0), UnsafeSetFCInfo_52, 6) = ((MR_Box) (Var_133));
    }
    hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(UnsafeGetFCInfo_51, PredStatus_17, Context_31, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModuleInfo_0_55, &STATE_VARIABLE_ModuleInfo_137_137, STATE_VARIABLE_Specs_0_59, &STATE_VARIABLE_Specs_138_138);
    hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(UnsafeSetFCInfo_52, PredStatus_17, Context_31, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModuleInfo_137_137, STATE_VARIABLE_ModuleInfo_56, STATE_VARIABLE_Specs_138_138, STATE_VARIABLE_Specs_60);
    {
      Var_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_143, 0) = ((MR_Box) (X_38));
      MR_hl_field(MR_mktag(1), Var_143, 1) = ((MR_Box) (Context_31));
    }
    {
      Var_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_142, 0) = ((MR_Box) (Var_143));
      MR_hl_field(MR_mktag(1), Var_142, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      CallUnsafeGetExpr0_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), CallUnsafeGetExpr0_53, 0) = ((MR_Box) (Context_31));
      MR_hl_field(MR_mktag(1), CallUnsafeGetExpr0_53, 1) = ((MR_Box) (UnsafeGetPredName_49));
      MR_hl_field(MR_mktag(1), CallUnsafeGetExpr0_53, 2) = ((MR_Box) (Var_142));
      MR_hl_field(MR_mktag(1), CallUnsafeGetExpr0_53, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    }
    {
      CallUnsafeSetExpr0_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), CallUnsafeSetExpr0_54, 0) = ((MR_Box) (Context_31));
      MR_hl_field(MR_mktag(1), CallUnsafeSetExpr0_54, 1) = ((MR_Box) (UnsafeSetPredName_50));
      MR_hl_field(MR_mktag(1), CallUnsafeSetExpr0_54, 2) = ((MR_Box) (Var_142));
      MR_hl_field(MR_mktag(1), CallUnsafeSetExpr0_54, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
    }
    {
      MR_Tuple base;
      base = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
      *UnsafeGetSetExprs_18 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (CallUnsafeGetExpr0_53));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (CallUnsafeSetExpr0_54));
    }
    *STATE_VARIABLE_QualInfo_58 = STATE_VARIABLE_QualInfo_0_57;
  }
}

static MR_String MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__global_foreign_type_name_4_f_0(
  MR_Word BoxPolicy_6,
  MR_Word Lang_7,
  MR_Word ModuleInfo_8,
  MR_Word Type_9)
{
  {
    MR_String String_10;

    switch (BoxPolicy_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        String_10 = (MR_String) "MR_Word";
        break;
      case (MR_Integer) 0:
        String_10 = backend_libs__foreign__exported_type_to_string_3_f_0(ModuleInfo_8, Lang_7, Type_9);
        break;
    }
    return String_10;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_lock_unlock_preds_12_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__define_lock_unlock_preds__1277__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_lock_unlock_preds_12_p_0(
  MR_Word TargetParams_13,
  MR_Word ItemMutable_14,
  MR_String TargetMutableName_15,
  MR_Word Attrs_16,
  MR_Word PredStatus_17,
  MR_Tuple * LockUnlockExprs_18,
  MR_Word STATE_VARIABLE_ModuleInfo_0_46,
  MR_Word * STATE_VARIABLE_ModuleInfo_47,
  MR_Word STATE_VARIABLE_QualInfo_0_48,
  MR_Word * STATE_VARIABLE_QualInfo_49,
  MR_Word STATE_VARIABLE_Specs_0_50,
  MR_Word * STATE_VARIABLE_Specs_51)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_22;
    MR_String MutableName_23;
    MR_Word MutAttrs_30;
    MR_Word Context_31;
    MR_Word IsConstant_33;
    MR_Word IsThreadLocal_34;
    MR_Word ImplLang_35;
    MR_Word Var_52;

    hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_ModuleInfo_0_46, &ModuleName_22);
    MutableName_23 = ((MR_String) ((MR_hl_field(MR_mktag(0), ItemMutable_14, (MR_Integer) 0))));
    MutAttrs_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable_14, (MR_Integer) 7))));
    Context_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable_14, (MR_Integer) 8))));
    IsConstant_33 = parse_tree__prog_item__mutable_var_constant_1_f_0(MutAttrs_30);
    {
      Var_52 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_52, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_52, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__define_lock_unlock_preds_12_p_0_1));
      MR_hl_field(MR_mktag(0), Var_52, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_52, 3) = ((MR_Box) (IsConstant_33));
      MR_hl_field(MR_mktag(0), Var_52, 4) = ((MR_Box) ((MR_Integer) 0));
    }
    mercury__require__expect_3_p_0(Var_52, (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.define_lock_unlock_preds\'/12", (MR_String) "need_lock_unlock_preds, but IsConstant = mutable_constant");
    IsThreadLocal_34 = parse_tree__prog_item__mutable_var_thread_local_1_f_0(MutAttrs_30);
    ImplLang_35 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), TargetParams_13, (MR_Integer) 0))) >> 6)) & (MR_Integer) 3);
    switch (ImplLang_35) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word LockAndUnlockAttrs_36;
          MR_String MutableMutexVarName_37;
          MR_String LockForeignProcBody_38;
          MR_String UnlockForeignProcBody_39;
          MR_Word LockPredName_40;
          MR_Word UnlockPredName_41;
          MR_Word LockFCInfo_42;
          MR_Word UnlockFCInfo_43;
          MR_Word CallLockExpr0_44;
          MR_Word CallUnlockExpr0_45;
          MR_Word Var_91;
          MR_Word Var_92;
          MR_Word Var_93;
          MR_Word Var_94;
          MR_Word Var_97;
          MR_Word Var_98;
          MR_Word Var_99;
          MR_Word STATE_VARIABLE_ModuleInfo_102_102;
          MR_Word STATE_VARIABLE_Specs_103_103;

          parse_tree__prog_data_foreign__set_thread_safe_3_p_0((MR_Integer) 1, Attrs_16, &LockAndUnlockAttrs_36);
          MutableMutexVarName_37 = hlds__make_hlds__add_mutable_aux_preds__mutable_mutex_var_name_1_f_0(TargetMutableName_15);
          switch (IsThreadLocal_34) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Var_63;
                MR_Word Var_65;
                MR_String Var_66;
                MR_String Var_68;
                MR_String Var_69;
                MR_String Var_71;
                MR_Word Var_76;
                MR_Word Var_78;
                MR_String Var_79;
                MR_String Var_81;
                MR_String Var_82;
                MR_String Var_84;

                Var_71 = mercury__string__f_43_43_2_f_0(MutableMutexVarName_37, (MR_String) "\");\n#endif\n");
                Var_69 = mercury__string__f_43_43_2_f_0((MR_String) ",\n                    \"", Var_71);
                Var_68 = mercury__string__f_43_43_2_f_0(MutableMutexVarName_37, Var_69);
                Var_66 = mercury__string__f_43_43_2_f_0((MR_String) "  MR_LOCK(&", Var_68);
                {
                  Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (Var_66));
                  MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) ((MR_String) "#ifdef MR_THREAD_SAFE\n"));
                  MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) (Var_65));
                }
                LockForeignProcBody_38 = mercury__string__append_list_1_f_0(Var_63);
                Var_84 = mercury__string__f_43_43_2_f_0(MutableMutexVarName_37, (MR_String) "\");\n#endif\n");
                Var_82 = mercury__string__f_43_43_2_f_0((MR_String) ",\n                    \"", Var_84);
                Var_81 = mercury__string__f_43_43_2_f_0(MutableMutexVarName_37, Var_82);
                Var_79 = mercury__string__f_43_43_2_f_0((MR_String) "  MR_UNLOCK(&", Var_81);
                {
                  Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (Var_79));
                  MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) ((MR_String) "#ifdef MR_THREAD_SAFE\n"));
                  MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) (Var_78));
                }
                UnlockForeignProcBody_39 = mercury__string__append_list_1_f_0(Var_76);
              }
              break;
            case (MR_Integer) 1:
              {
                LockForeignProcBody_38 = (MR_String) "";
                UnlockForeignProcBody_39 = (MR_String) "";
              }
              break;
          }
          LockPredName_40 = parse_tree__prog_mutable__mutable_lock_pred_sym_name_2_f_0(ModuleName_22, MutableName_23);
          UnlockPredName_41 = parse_tree__prog_mutable__mutable_unlock_pred_sym_name_2_f_0(ModuleName_22, MutableName_23);
          Var_91 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
          Var_92 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0));
          {
            Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_94, 0) = ((MR_Box) (Context_31));
          }
          {
            Var_93 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_93, 0) = ((MR_Box) (LockForeignProcBody_38));
            MR_hl_field(MR_mktag(0), Var_93, 1) = ((MR_Box) (Var_94));
          }
          {
            LockFCInfo_42 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), LockFCInfo_42, 0) = ((MR_Box) (LockAndUnlockAttrs_36));
            MR_hl_field(MR_mktag(0), LockFCInfo_42, 1) = ((MR_Box) (LockPredName_40));
            MR_hl_field(MR_mktag(0), LockFCInfo_42, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(0), LockFCInfo_42, 3) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), LockFCInfo_42, 4) = ((MR_Box) (Var_91));
            MR_hl_field(MR_mktag(0), LockFCInfo_42, 5) = ((MR_Box) (Var_92));
            MR_hl_field(MR_mktag(0), LockFCInfo_42, 6) = ((MR_Box) (Var_93));
          }
          Var_97 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
          Var_98 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0));
          {
            Var_99 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_99, 0) = ((MR_Box) (UnlockForeignProcBody_39));
            MR_hl_field(MR_mktag(0), Var_99, 1) = ((MR_Box) (Var_94));
          }
          {
            UnlockFCInfo_43 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), UnlockFCInfo_43, 0) = ((MR_Box) (LockAndUnlockAttrs_36));
            MR_hl_field(MR_mktag(0), UnlockFCInfo_43, 1) = ((MR_Box) (UnlockPredName_41));
            MR_hl_field(MR_mktag(0), UnlockFCInfo_43, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(0), UnlockFCInfo_43, 3) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), UnlockFCInfo_43, 4) = ((MR_Box) (Var_97));
            MR_hl_field(MR_mktag(0), UnlockFCInfo_43, 5) = ((MR_Box) (Var_98));
            MR_hl_field(MR_mktag(0), UnlockFCInfo_43, 6) = ((MR_Box) (Var_99));
          }
          hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(LockFCInfo_42, PredStatus_17, Context_31, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModuleInfo_0_46, &STATE_VARIABLE_ModuleInfo_102_102, STATE_VARIABLE_Specs_0_50, &STATE_VARIABLE_Specs_103_103);
          hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(UnlockFCInfo_43, PredStatus_17, Context_31, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModuleInfo_102_102, STATE_VARIABLE_ModuleInfo_47, STATE_VARIABLE_Specs_103_103, STATE_VARIABLE_Specs_51);
          {
            CallLockExpr0_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), CallLockExpr0_44, 0) = ((MR_Box) (Context_31));
            MR_hl_field(MR_mktag(1), CallLockExpr0_44, 1) = ((MR_Box) (LockPredName_40));
            MR_hl_field(MR_mktag(1), CallLockExpr0_44, 2) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), CallLockExpr0_44, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
          }
          {
            CallUnlockExpr0_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), CallUnlockExpr0_45, 0) = ((MR_Box) (Context_31));
            MR_hl_field(MR_mktag(1), CallUnlockExpr0_45, 1) = ((MR_Box) (UnlockPredName_41));
            MR_hl_field(MR_mktag(1), CallUnlockExpr0_45, 2) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), CallUnlockExpr0_45, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
          }
          {
            MR_Tuple base;
            base = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
            *LockUnlockExprs_18 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (CallLockExpr0_44));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (CallUnlockExpr0_45));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.define_lock_unlock_preds\'/12", (MR_String) "lock_unlock for csharp");
          return;
        }
        break;
      case (MR_Integer) 3:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.define_lock_unlock_preds\'/12", (MR_String) "lock_unlock for erlang");
          return;
        }
        break;
      case (MR_Integer) 2:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.define_lock_unlock_preds\'/12", (MR_String) "lock_unlock for java");
          return;
        }
        break;
    }
    *STATE_VARIABLE_QualInfo_49 = STATE_VARIABLE_QualInfo_0_48;
  }
}

static MR_String MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__mutable_mutex_var_name_1_f_0(
  MR_String TargetMutableVarName_3)
{
  {
    MR_String MutexVarName_4;

    MutexVarName_4 = mercury__string__f_43_43_2_f_0(TargetMutableVarName_3, (MR_String) "_lock");
    return MutexVarName_4;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_pre_init_pred_12_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__define_pre_init_pred__1216__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_pre_init_pred_12_p_0(
  MR_Word TargetParams_13,
  MR_Word ItemMutable_14,
  MR_String TargetMutableName_15,
  MR_Word Attrs_16,
  MR_Word PredStatus_17,
  MR_Word * CallPreInitExpr_18,
  MR_Word STATE_VARIABLE_ModuleInfo_0_39,
  MR_Word * STATE_VARIABLE_ModuleInfo_40,
  MR_Word STATE_VARIABLE_QualInfo_0_41,
  MR_Word * STATE_VARIABLE_QualInfo_42,
  MR_Word STATE_VARIABLE_Specs_0_43,
  MR_Word * STATE_VARIABLE_Specs_44)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_22;
    MR_String MutableName_23;
    MR_Word MutAttrs_30;
    MR_Word Context_31;
    MR_Word IsConstant_33;
    MR_Word IsThreadLocal_34;
    MR_Word ImplLang_35;
    MR_Word PreInitPredName_36;
    MR_String PreInitCode_37;
    MR_Word PreInitFCInfo_38;
    MR_Word Var_45;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_Word Var_70;
    MR_Word Var_71;

    hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_ModuleInfo_0_39, &ModuleName_22);
    MutableName_23 = ((MR_String) ((MR_hl_field(MR_mktag(0), ItemMutable_14, (MR_Integer) 0))));
    MutAttrs_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable_14, (MR_Integer) 7))));
    Context_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable_14, (MR_Integer) 8))));
    IsConstant_33 = parse_tree__prog_item__mutable_var_constant_1_f_0(MutAttrs_30);
    {
      Var_45 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_45, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_45, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__define_pre_init_pred_12_p_0_1));
      MR_hl_field(MR_mktag(0), Var_45, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_45, 3) = ((MR_Box) (IsConstant_33));
      MR_hl_field(MR_mktag(0), Var_45, 4) = ((MR_Box) ((MR_Integer) 0));
    }
    mercury__require__expect_3_p_0(Var_45, (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.define_pre_init_pred\'/12", (MR_String) "need_pre_init_pred, but IsConstant = mutable_constant");
    IsThreadLocal_34 = parse_tree__prog_item__mutable_var_thread_local_1_f_0(MutAttrs_30);
    ImplLang_35 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), TargetParams_13, (MR_Integer) 0))) >> 6)) & (MR_Integer) 3);
    PreInitPredName_36 = parse_tree__prog_mutable__mutable_pre_init_pred_sym_name_2_f_0(ModuleName_22, MutableName_23);
    switch (ImplLang_35) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (IsThreadLocal_34) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_55;
              MR_Word Var_57;
              MR_Word Var_59;
              MR_String Var_60;

              Var_60 = mercury__string__f_43_43_2_f_0(TargetMutableName_15, (MR_String) "_lock");
              {
                Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (Var_60));
                MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[27])));
              }
              {
                Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) ((MR_String) "   pthread_mutex_init(&"));
                MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (Var_59));
              }
              {
                Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) ((MR_String) "#ifdef MR_THREAD_SAFE\n"));
                MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (Var_57));
              }
              PreInitCode_37 = mercury__string__append_list_1_f_0(Var_55);
            }
            break;
          case (MR_Integer) 1:
            PreInitCode_37 = mercury__string__f_43_43_2_f_0(TargetMutableName_15, (MR_String) " = MR_new_thread_local_mutable_index();\n");
            break;
        }
        break;
      case (MR_Integer) 1:
        PreInitCode_37 = mercury__string__f_43_43_2_f_0(TargetMutableName_15, (MR_String) " = runtime.ThreadLocalMutables.new_index();\n");
        break;
      case (MR_Integer) 3:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.define_pre_init_pred\'/12", (MR_String) "preinit for erlang");
          return;
        }
        break;
      case (MR_Integer) 2:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.define_pre_init_pred\'/12", (MR_String) "preinit for java");
          return;
        }
        break;
    }
    Var_68 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
    Var_69 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0));
    {
      Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (Context_31));
    }
    {
      Var_70 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_70, 0) = ((MR_Box) (PreInitCode_37));
      MR_hl_field(MR_mktag(0), Var_70, 1) = ((MR_Box) (Var_71));
    }
    {
      PreInitFCInfo_38 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), PreInitFCInfo_38, 0) = ((MR_Box) (Attrs_16));
      MR_hl_field(MR_mktag(0), PreInitFCInfo_38, 1) = ((MR_Box) (PreInitPredName_36));
      MR_hl_field(MR_mktag(0), PreInitFCInfo_38, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), PreInitFCInfo_38, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), PreInitFCInfo_38, 4) = ((MR_Box) (Var_68));
      MR_hl_field(MR_mktag(0), PreInitFCInfo_38, 5) = ((MR_Box) (Var_69));
      MR_hl_field(MR_mktag(0), PreInitFCInfo_38, 6) = ((MR_Box) (Var_70));
    }
    hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(PreInitFCInfo_38, PredStatus_17, Context_31, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModuleInfo_0_39, STATE_VARIABLE_ModuleInfo_40, STATE_VARIABLE_Specs_0_43, STATE_VARIABLE_Specs_44);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      *CallPreInitExpr_18 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Context_31));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (PreInitPredName_36));
      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), base, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
    }
    *STATE_VARIABLE_QualInfo_42 = STATE_VARIABLE_QualInfo_0_41;
  }
}

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_mutable_global_var_java_6_p_0(
  MR_String TargetMutableName_7,
  MR_Word Type_8,
  MR_Word IsThreadLocal_9,
  MR_Word Context_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_15,
  MR_Word * STATE_VARIABLE_ModuleInfo_16)
{
  {
    MR_bool succeeded;
    MR_String DefnBody_13;
    MR_Word DefnForeignBodyCode_14;
    MR_Word Var_36;

    switch (IsThreadLocal_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String TypeStr_12;
          MR_String Var_30;
          MR_String Var_31;
          MR_String Var_33;
          MR_Word Var_39;

          Var_39 = parse_tree__builtin_lib_types__int_type_0_f_0();
          succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Type_8, Var_39);
          if (succeeded)
            TypeStr_12 = (MR_String) "int";
          else
            TypeStr_12 = (MR_String) "java.lang.Object";
          Var_33 = mercury__string__f_43_43_2_f_0(TargetMutableName_7, (MR_String) ";\n");
          Var_31 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_33);
          Var_30 = mercury__string__f_43_43_2_f_0(TypeStr_12, Var_31);
          DefnBody_13 = mercury__string__f_43_43_2_f_0((MR_String) "static ", Var_30);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_17;
          MR_Word Var_19;
          MR_Word Var_20;
          MR_Word Var_22;
          MR_Word Var_23;
          MR_Word Var_25;
          MR_String TypeStr_38;
          MR_Word Var_40;

          Var_40 = parse_tree__builtin_lib_types__int_type_0_f_0();
          succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Type_8, Var_40);
          if (succeeded)
            TypeStr_38 = (MR_String) "java.lang.Integer";
          else
            TypeStr_38 = (MR_String) "java.lang.Object";
          {
            Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (TypeStr_38));
            MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[65])));
          }
          {
            Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) ((MR_String) " = new java.lang.InheritableThreadLocal<"));
            MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (Var_25));
          }
          {
            Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (TargetMutableName_7));
            MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (Var_23));
          }
          {
            Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) ((MR_String) "> "));
            MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (Var_22));
          }
          {
            Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (TypeStr_38));
            MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (Var_20));
          }
          {
            Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) ((MR_String) "static java.lang.ThreadLocal<"));
            MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (Var_19));
          }
          DefnBody_13 = mercury__string__append_list_1_f_0(Var_17);
        }
        break;
    }
    {
      Var_36 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_36, 0) = ((MR_Box) (DefnBody_13));
    }
    {
      DefnForeignBodyCode_14 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), DefnForeignBodyCode_14, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), DefnForeignBodyCode_14, 1) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(0), DefnForeignBodyCode_14, 2) = ((MR_Box) (Context_10));
    }
    hlds__hlds_module__module_add_foreign_body_code_3_p_0(DefnForeignBodyCode_14, STATE_VARIABLE_ModuleInfo_0_15, STATE_VARIABLE_ModuleInfo_16);
  }
}

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_mutable_global_var_c_7_p_0(
  MR_String TargetMutableName_8,
  MR_Word Type_9,
  MR_Word IsConstant_10,
  MR_Word IsThreadLocal_11,
  MR_Word Context_12,
  MR_Word STATE_VARIABLE_ModuleInfo_0_26,
  MR_Word * STATE_VARIABLE_ModuleInfo_27)
{
  {
    MR_bool succeeded;
    MR_String HighLevelTypeName_14;
    MR_String LowLevelTypeName_15;
    MR_String TypeName_18;
    MR_Word LockDeclStrs_19;
    MR_Word LockDefnStrs_20;
    MR_String DeclBody_22;
    MR_Word ForeignDeclCode_23;
    MR_String DefnBody_24;
    MR_Word ForeignBodyCode_25;
    MR_Word Var_51;
    MR_Word Var_53;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_61;
    MR_Word Var_63;
    MR_Word Var_65;
    MR_Word Var_66;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_Word Var_71;
    MR_Word Var_75;
    MR_Word STATE_VARIABLE_ModuleInfo_76_76;
    MR_Word Var_77;
    MR_Word Var_78;
    MR_Word Var_80;
    MR_Word Var_81;
    MR_Word Var_84;

    switch (IsThreadLocal_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Globals_16;
          MR_Word HighLevelCode_17;

          HighLevelTypeName_14 = backend_libs__foreign__exported_type_to_string_3_f_0(STATE_VARIABLE_ModuleInfo_0_26, (MR_Integer) 0, Type_9);
          LowLevelTypeName_15 = (MR_String) "MR_Word";
          hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_26, &Globals_16);
          libs__globals__lookup_bool_option_3_p_0(Globals_16, (MR_Integer) 288, &HighLevelCode_17);
          switch (HighLevelCode_17) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              TypeName_18 = LowLevelTypeName_15;
              break;
            case (MR_Integer) 1:
              TypeName_18 = HighLevelTypeName_14;
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          TypeName_18 = (MR_String) "MR_Unsigned";
          HighLevelTypeName_14 = TypeName_18;
          LowLevelTypeName_15 = TypeName_18;
        }
        break;
    }
    succeeded = (IsConstant_10 == (MR_Integer) 1);
    if (!(succeeded))
      succeeded = (IsThreadLocal_11 == (MR_Integer) 1);
    if (succeeded)
    {
      LockDeclStrs_19 = (MR_Word) ((MR_Unsigned) 0U);
      LockDefnStrs_20 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_String MutexVarName_21;
      MR_Word Var_34;
      MR_Word Var_36;
      MR_Word Var_43;
      MR_Word Var_45;

      MutexVarName_21 = mercury__string__f_43_43_2_f_0(TargetMutableName_8, (MR_String) "_lock");
      {
        Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (MutexVarName_21));
        MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[26])));
      }
      {
        Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) ((MR_String) "    extern MercuryLock "));
        MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (Var_36));
      }
      {
        LockDeclStrs_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), LockDeclStrs_19, 0) = ((MR_Box) ((MR_String) "#ifdef MR_THREAD_SAFE\n"));
        MR_hl_field(MR_mktag(1), LockDeclStrs_19, 1) = ((MR_Box) (Var_34));
      }
      {
        Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (MutexVarName_21));
        MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[26])));
      }
      {
        Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) ((MR_String) "    MercuryLock "));
        MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (Var_45));
      }
      {
        LockDefnStrs_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), LockDefnStrs_20, 0) = ((MR_Box) ((MR_String) "#ifdef MR_THREAD_SAFE\n"));
        MR_hl_field(MR_mktag(1), LockDefnStrs_20, 1) = ((MR_Box) (Var_43));
      }
    }
    {
      Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) ((MR_String) "#endif\n"));
      MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) (LockDeclStrs_19));
    }
    {
      Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) ((MR_String) ";\n"));
      MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) (Var_71));
    }
    {
      Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (TargetMutableName_8));
      MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (Var_69));
    }
    {
      Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) (Var_68));
    }
    {
      Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (LowLevelTypeName_15));
      MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (Var_66));
    }
    {
      Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) ((MR_String) "    extern "));
      MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) (Var_65));
    }
    {
      Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) ((MR_String) "#else\n"));
      MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (Var_63));
    }
    {
      Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) ((MR_String) ";\n"));
      MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (Var_61));
    }
    {
      Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (TargetMutableName_8));
      MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (Var_59));
    }
    {
      Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (Var_58));
    }
    {
      Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (HighLevelTypeName_14));
      MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (Var_56));
    }
    {
      Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) ((MR_String) "    extern "));
      MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Var_55));
    }
    {
      Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) ((MR_String) "#ifdef MR_HIGHLEVEL_CODE\n"));
      MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (Var_53));
    }
    DeclBody_22 = mercury__string__append_list_1_f_0(Var_51);
    {
      Var_75 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_75, 0) = ((MR_Box) (DeclBody_22));
    }
    {
      ForeignDeclCode_23 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ForeignDeclCode_23, 0) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
      MR_hl_field(MR_mktag(0), ForeignDeclCode_23, 1) = ((MR_Box) (Var_75));
      MR_hl_field(MR_mktag(0), ForeignDeclCode_23, 2) = ((MR_Box) (Context_12));
    }
    hlds__hlds_module__module_add_foreign_decl_code_aux_3_p_0(ForeignDeclCode_23, STATE_VARIABLE_ModuleInfo_0_26, &STATE_VARIABLE_ModuleInfo_76_76);
    {
      Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) ((MR_String) ";\n"));
      MR_hl_field(MR_mktag(1), Var_81, 1) = ((MR_Box) (LockDefnStrs_20));
    }
    {
      Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) (TargetMutableName_8));
      MR_hl_field(MR_mktag(1), Var_80, 1) = ((MR_Box) (Var_81));
    }
    {
      Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) (Var_80));
    }
    {
      Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (TypeName_18));
      MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) (Var_78));
    }
    DefnBody_24 = mercury__string__append_list_1_f_0(Var_77);
    {
      Var_84 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_84, 0) = ((MR_Box) (DefnBody_24));
    }
    {
      ForeignBodyCode_25 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ForeignBodyCode_25, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), ForeignBodyCode_25, 1) = ((MR_Box) (Var_84));
      MR_hl_field(MR_mktag(0), ForeignBodyCode_25, 2) = ((MR_Box) (Context_12));
    }
    hlds__hlds_module__module_add_foreign_body_code_3_p_0(ForeignBodyCode_25, STATE_VARIABLE_ModuleInfo_76_76, STATE_VARIABLE_ModuleInfo_27);
  }
}

void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_aux_pred_decls_for_mutable_if_local_5_p_0(
  MR_Word SectionItem_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_16,
  MR_Word * STATE_VARIABLE_ModuleInfo_17,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19)
{
  {
    MR_bool succeeded;
    MR_Word SectionInfo_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SectionItem_6, (MR_Integer) 0))));
    MR_Word ItemMutable_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SectionItem_6, (MR_Integer) 1))));
    MR_Word ItemMercuryStatus_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SectionInfo_9, (MR_Integer) 0))));
    MR_Word NeedQual_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), SectionInfo_9, (MR_Integer) 1))) & (MR_Integer) 1);

    if (((MR_tag((MR_Word) ItemMercuryStatus_11)) == (MR_Integer) 1))
    {
      *STATE_VARIABLE_ModuleInfo_17 = STATE_VARIABLE_ModuleInfo_0_16;
      *STATE_VARIABLE_Specs_19 = STATE_VARIABLE_Specs_0_18;
    }
    else
    {
      MR_Word PredStatus_14;
      MR_Word STATE_VARIABLE_Specs_20_20;
      MR_String MutableName_28 = ((MR_String) ((MR_hl_field(MR_mktag(0), ItemMutable_10, (MR_Integer) 0))));
      MR_Word OrigInst_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable_10, (MR_Integer) 3))));
      MR_Word Inst_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable_10, (MR_Integer) 4))));
      MR_Word MutAttrs_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable_10, (MR_Integer) 7))));
      MR_Word Context_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable_10, (MR_Integer) 8))));
      MR_Word Globals_38;
      MR_Word CompilationTarget_39;
      MR_Word ForeignLanguage_40;
      MR_Word MaybeForeignNames_41;
      MR_Word TrailMutableUpdates_45;
      MR_Word UseTrail_46;
      MR_Word DummyInstVarSet_49;
      MR_Word ExpandedInstSpecs_50;
      MR_Word STATE_VARIABLE_Specs_38_56;
      MR_Word STATE_VARIABLE_Specs_54_72;

      hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_16, &Globals_38);
      libs__globals__get_target_2_p_0(Globals_38, &CompilationTarget_39);
      ForeignLanguage_40 = ((&hlds__make_hlds__add_mutable_aux_preds_vector_common_4[0 + CompilationTarget_39]))->hlds__make_hlds__add_mutable_aux_preds__vector_common_type_4_0__vct_4_f_0;
      MaybeForeignNames_41 = parse_tree__prog_item__mutable_var_maybe_foreign_names_1_f_0(MutAttrs_35);
      if ((MaybeForeignNames_41 == (MR_Word) ((MR_Unsigned) 0U)))
        STATE_VARIABLE_Specs_38_56 = STATE_VARIABLE_Specs_0_18;
      else
      {
        MR_Word ForeignNames_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeForeignNames_41, (MR_Integer) 0))));
        MR_Word ModuleName_43;
        MR_String _TargetMutableName_44;

        hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_ModuleInfo_0_16, &ModuleName_43);
        hlds__make_hlds__add_mutable_aux_preds__get_global_name_from_foreign_names_9_p_0(STATE_VARIABLE_ModuleInfo_0_16, Context_36, ModuleName_43, MutableName_28, ForeignLanguage_40, ForeignNames_42, &_TargetMutableName_44, STATE_VARIABLE_Specs_0_18, &STATE_VARIABLE_Specs_38_56);
      }
      TrailMutableUpdates_45 = parse_tree__prog_item__mutable_var_trailed_1_f_0(MutAttrs_35);
      libs__globals__lookup_bool_option_3_p_0(Globals_38, (MR_Integer) 246, &UseTrail_46);
      succeeded = (TrailMutableUpdates_45 == (MR_Integer) 1);
      if (succeeded)
        succeeded = (UseTrail_46 == (MR_Integer) 0);
      if (succeeded)
      {
        MR_Word TrailSpec_48;

        {
          TrailSpec_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), TrailSpec_48, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.check_mutable\'/4"));
          MR_hl_field(MR_mktag(1), TrailSpec_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), TrailSpec_48, 2) = ((MR_Box) ((MR_Unsigned) 16U));
          MR_hl_field(MR_mktag(1), TrailSpec_48, 3) = ((MR_Box) (Context_36));
          MR_hl_field(MR_mktag(1), TrailSpec_48, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[9])));
        }
        {
          STATE_VARIABLE_Specs_54_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_54_72, 0) = ((MR_Box) (TrailSpec_48));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_54_72, 1) = ((MR_Box) (STATE_VARIABLE_Specs_38_56));
        }
      }
      else
        STATE_VARIABLE_Specs_54_72 = STATE_VARIABLE_Specs_38_56;
      DummyInstVarSet_49 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0));
      hlds__make_hlds__add_mutable_aux_preds__check_mutable_inst_7_p_0(STATE_VARIABLE_ModuleInfo_0_16, Context_36, DummyInstVarSet_49, (MR_Word) ((MR_Unsigned) 0U), Inst_32, (MR_Word) ((MR_Unsigned) 0U), &ExpandedInstSpecs_50);
      if ((ExpandedInstSpecs_50 == (MR_Word) ((MR_Unsigned) 0U)))
        STATE_VARIABLE_Specs_20_20 = STATE_VARIABLE_Specs_54_72;
      else
      {
        MR_Word UnexpandedInstSpecs_53;

        hlds__make_hlds__add_mutable_aux_preds__check_mutable_inst_7_p_0(STATE_VARIABLE_ModuleInfo_0_16, Context_36, DummyInstVarSet_49, (MR_Word) ((MR_Unsigned) 0U), OrigInst_31, (MR_Word) ((MR_Unsigned) 0U), &UnexpandedInstSpecs_53);
        if ((UnexpandedInstSpecs_53 == (MR_Word) ((MR_Unsigned) 0U)))
          STATE_VARIABLE_Specs_20_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), ExpandedInstSpecs_50, STATE_VARIABLE_Specs_54_72);
        else
          STATE_VARIABLE_Specs_20_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), UnexpandedInstSpecs_53, STATE_VARIABLE_Specs_54_72);
      }
      hlds__status__item_mercury_status_to_pred_status_2_p_0(ItemMercuryStatus_11, &PredStatus_14);
      hlds__make_hlds__add_mutable_aux_preds__add_aux_pred_decls_for_mutable_7_p_0(PredStatus_14, NeedQual_12, ItemMutable_10, STATE_VARIABLE_ModuleInfo_0_16, STATE_VARIABLE_ModuleInfo_17, STATE_VARIABLE_Specs_20_20, STATE_VARIABLE_Specs_19);
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__get_global_name_from_foreign_names_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word Context_11,
  MR_Word ModuleName_12,
  MR_String MutableName_13,
  MR_Word ForeignLanguage_14,
  MR_Word ForeignNames_15,
  MR_String * TargetMutableName_16,
  MR_Word STATE_VARIABLE_Specs_0_27,
  MR_Word * STATE_VARIABLE_Specs_28)
{
  {
    MR_bool succeeded;
    MR_Word TargetMutableNames_18;

    hlds__make_hlds__add_mutable_aux_preds__get_matching_foreign_names_3_p_0(ForeignNames_15, ForeignLanguage_14, &TargetMutableNames_18);
    if ((TargetMutableNames_18 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_String RawCVarName_55;
      MR_Word QualifiedCVarName0_56;
      MR_Word QualifiedCVarName_57;

      RawCVarName_55 = mercury__string__f_43_43_2_f_0((MR_String) "mutable_variable_", MutableName_13);
      {
        QualifiedCVarName0_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), QualifiedCVarName0_56, 0) = ((MR_Box) (ModuleName_12));
        MR_hl_field(MR_mktag(1), QualifiedCVarName0_56, 1) = ((MR_Box) (RawCVarName_55));
      }
      succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(ModuleName_12);
      if (succeeded)
        QualifiedCVarName_57 = mdbcomp__sym_name__add_outermost_qualifier_2_f_0((MR_String) "mercury", QualifiedCVarName0_56);
      else
        QualifiedCVarName_57 = QualifiedCVarName0_56;
      *TargetMutableName_16 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(QualifiedCVarName_57);
      *STATE_VARIABLE_Specs_28 = STATE_VARIABLE_Specs_0_27;
    }
    else
    {
      MR_Word Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TargetMutableNames_18, (MR_Integer) 1))));
      MR_Word Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TargetMutableNames_18, (MR_Integer) 0))));

      if ((Var_50 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *TargetMutableName_16 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_51, (MR_Integer) 1))));
        *STATE_VARIABLE_Specs_28 = STATE_VARIABLE_Specs_0_27;
      }
      else
      {
        MR_Word Globals_23;
        MR_Word CompilationTarget_24;
        MR_Word Pieces_25;
        MR_Word Spec_26;
        MR_Word Var_32;
        MR_Word Var_35;
        MR_Word Var_36;
        MR_String Var_37;
        MR_String RawCVarName_63;
        MR_Word QualifiedCVarName0_64;
        MR_Word QualifiedCVarName_65;

        hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_10, &Globals_23);
        libs__globals__get_target_2_p_0(Globals_23, &CompilationTarget_24);
        Var_37 = libs__globals__compilation_target_string_1_f_0(CompilationTarget_24);
        {
          Var_36 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_36, 0) = ((MR_Box) (Var_37));
        }
        {
          Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Var_36));
          MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[34])));
        }
        {
          Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[64])));
          MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (Var_35));
        }
        {
          Pieces_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[63])));
          MR_hl_field(MR_mktag(1), Pieces_25, 1) = ((MR_Box) (Var_32));
        }
        {
          Spec_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_26, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.get_global_name_from_foreign_names\'/9"));
          MR_hl_field(MR_mktag(1), Spec_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_26, 2) = ((MR_Box) ((MR_Unsigned) 16U));
          MR_hl_field(MR_mktag(1), Spec_26, 3) = ((MR_Box) (Context_11));
          MR_hl_field(MR_mktag(1), Spec_26, 4) = ((MR_Box) (Pieces_25));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Specs_28 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_26));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_27));
        }
        RawCVarName_63 = mercury__string__f_43_43_2_f_0((MR_String) "mutable_variable_", MutableName_13);
        {
          QualifiedCVarName0_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), QualifiedCVarName0_64, 0) = ((MR_Box) (ModuleName_12));
          MR_hl_field(MR_mktag(1), QualifiedCVarName0_64, 1) = ((MR_Box) (RawCVarName_63));
        }
        succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(ModuleName_12);
        if (succeeded)
          QualifiedCVarName_65 = mdbcomp__sym_name__add_outermost_qualifier_2_f_0((MR_String) "mercury", QualifiedCVarName0_64);
        else
          QualifiedCVarName_65 = QualifiedCVarName0_64;
        *TargetMutableName_16 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(QualifiedCVarName_65);
      }
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__get_matching_foreign_names_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word ForeignName_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ForeignNames_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word TailMatchingForeignNames_9;
      MR_Word ForeignLanguage_10;

      hlds__make_hlds__add_mutable_aux_preds__get_matching_foreign_names_3_p_0(ForeignNames_6, HeadVar__2_2, &TailMatchingForeignNames_9);
      ForeignLanguage_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ForeignName_5, (MR_Integer) 0))) & (MR_Integer) 3);
      succeeded = (ForeignLanguage_10 == HeadVar__2_2);
      if (succeeded)
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ForeignName_5));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailMatchingForeignNames_9));
        }
      else
        *HeadVar__3_3 = TailMatchingForeignNames_9;
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_aux_pred_decls_for_mutable_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_HeadVar__4_4;
    MR_Word conv2_HeadVar__6_6;
    MR_Word conv1_HeadVar__8_8;

    hlds__add_pred__module_add_pred_decl_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv3_HeadVar__4_4, ((MR_Word) (wrapper_arg_3)), &conv2_HeadVar__6_6, ((MR_Word) (wrapper_arg_5)), &conv1_HeadVar__8_8);
    *wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__4_4));
    *wrapper_arg_4 = ((MR_Box) (conv2_HeadVar__6_6));
    *wrapper_arg_6 = ((MR_Box) (conv1_HeadVar__8_8));
  }
}

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_aux_pred_decls_for_mutable_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__7_7;

    parse_tree__prog_mutable__make_mutable_aux_pred_decl_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__7_7);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__7_7));
  }
}

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_aux_pred_decls_for_mutable_7_p_0(
  MR_Word PredStatus_8,
  MR_Word NeedQual_9,
  MR_Word ItemMutable_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_31,
  MR_Word * STATE_VARIABLE_ModuleInfo_32,
  MR_Word STATE_VARIABLE_Specs_0_33,
  MR_Word * STATE_VARIABLE_Specs_34)
{
  {
    MR_String MutableName_13 = ((MR_String) ((MR_hl_field(MR_mktag(0), ItemMutable_10, (MR_Integer) 0))));
    MR_Word Type_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable_10, (MR_Integer) 2))));
    MR_Word Inst_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable_10, (MR_Integer) 4))));
    MR_Word MutAttrs_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable_10, (MR_Integer) 7))));
    MR_Word Context_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable_10, (MR_Integer) 8))));
    MR_Word Globals_23;
    MR_Word TargetParams_24;
    MR_Word PublicPredKinds_25;
    MR_Word PrivatePredKinds_26;
    MR_Word NeededPredKinds_27;
    MR_Word ModuleName_28;
    MR_Word NeededPredDecls_29;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word _MaybePredProcIds_30;
    MR_Box conv5_STATE_VARIABLE_ModuleInfo_32;
    MR_Box conv4_STATE_VARIABLE_Specs_34;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_31, &Globals_23);
    hlds__make_hlds__add_mutable_aux_preds__get_mutable_target_params_3_p_0(Globals_23, MutAttrs_20, &TargetParams_24);
    PrivatePredKinds_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TargetParams_24, (MR_Integer) 1))));
    PublicPredKinds_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TargetParams_24, (MR_Integer) 2))));
    NeededPredKinds_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mutable_pred_kind_0), PublicPredKinds_25, PrivatePredKinds_26);
    hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_ModuleInfo_0_31, &ModuleName_28);
    {
      Var_35 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_35, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_2[0]));
      MR_hl_field(MR_mktag(0), Var_35, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__add_aux_pred_decls_for_mutable_7_p_0_1));
      MR_hl_field(MR_mktag(0), Var_35, 2) = ((MR_Box) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(0), Var_35, 3) = ((MR_Box) (ModuleName_28));
      MR_hl_field(MR_mktag(0), Var_35, 4) = ((MR_Box) (MutableName_13));
      MR_hl_field(MR_mktag(0), Var_35, 5) = ((MR_Box) (Type_15));
      MR_hl_field(MR_mktag(0), Var_35, 6) = ((MR_Box) (Inst_17));
      MR_hl_field(MR_mktag(0), Var_35, 7) = ((MR_Box) (Context_21));
    }
    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mutable_pred_kind_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), Var_35, NeededPredKinds_27, &NeededPredDecls_29);
    {
      Var_36 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_36, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_36, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__add_aux_pred_decls_for_mutable_7_p_0_2));
      MR_hl_field(MR_mktag(0), Var_36, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_36, 3) = ((MR_Box) (PredStatus_8));
      MR_hl_field(MR_mktag(0), Var_36, 4) = ((MR_Box) (NeedQual_9));
    }
    mercury__list__map_foldl2_7_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), (MR_Word) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[0]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[1]), Var_36, NeededPredDecls_29, &_MaybePredProcIds_30, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_31)), &conv5_STATE_VARIABLE_ModuleInfo_32, ((MR_Box) (STATE_VARIABLE_Specs_0_33)), &conv4_STATE_VARIABLE_Specs_34);
    *STATE_VARIABLE_ModuleInfo_32 = ((MR_Word) (conv5_STATE_VARIABLE_ModuleInfo_32));
    *STATE_VARIABLE_Specs_34 = ((MR_Word) (conv4_STATE_VARIABLE_Specs_34));
  }
}

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__get_mutable_target_params_3_p_0(
  MR_Word Globals_4,
  MR_Word MutAttrs_5,
  MR_Word * TargetParams_6)
{
  {
    MR_Word CompilationTarget_7;
    MR_Word ImplLang_8;
    MR_Word Lang_9;
    MR_Word PreInit0_10;
    MR_Word LockUnlock0_11;
    MR_Word UnsafeAccess0_12;
    MR_Word BoxPolicy_14;
    MR_Word IsConstant_16;
    MR_Word PreInit_17;
    MR_Word LockUnlock_18;
    MR_Word UnsafeAccess_19;
    MR_Word PrivatePredKinds_20;
    MR_Word PublicPredKinds_21;
    MR_Word PreInitPreds_28;
    MR_Word UnsafeAccessPreds_29;
    MR_Word LockUnlockPreds_30;
    MR_Word Var_43;
    MR_Word Var_44;

    libs__globals__get_target_2_p_0(Globals_4, &CompilationTarget_7);
    switch (CompilationTarget_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word HighLevelCode_13;

          ImplLang_8 = (MR_Integer) 0;
          Lang_9 = (MR_Integer) 0;
          PreInit0_10 = (MR_Integer) 1;
          LockUnlock0_11 = (MR_Integer) 1;
          UnsafeAccess0_12 = (MR_Integer) 1;
          libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 288, &HighLevelCode_13);
          switch (HighLevelCode_13) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              BoxPolicy_14 = (MR_Integer) 1;
              break;
            case (MR_Integer) 1:
              BoxPolicy_14 = (MR_Integer) 0;
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word IsThreadLocal_15;

          ImplLang_8 = (MR_Integer) 1;
          Lang_9 = (MR_Integer) 1;
          IsThreadLocal_15 = parse_tree__prog_item__mutable_var_thread_local_1_f_0(MutAttrs_5);
          switch (IsThreadLocal_15) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              PreInit0_10 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              PreInit0_10 = (MR_Integer) 1;
              break;
          }
          LockUnlock0_11 = (MR_Integer) 0;
          UnsafeAccess0_12 = (MR_Integer) 1;
          BoxPolicy_14 = (MR_Integer) 0;
        }
        break;
      case (MR_Integer) 3:
        {
          ImplLang_8 = (MR_Integer) 3;
          Lang_9 = (MR_Integer) 3;
          PreInit0_10 = (MR_Integer) 0;
          LockUnlock0_11 = (MR_Integer) 0;
          UnsafeAccess0_12 = (MR_Integer) 0;
          BoxPolicy_14 = (MR_Integer) 0;
        }
        break;
      case (MR_Integer) 2:
        {
          ImplLang_8 = (MR_Integer) 2;
          Lang_9 = (MR_Integer) 2;
          PreInit0_10 = (MR_Integer) 0;
          LockUnlock0_11 = (MR_Integer) 0;
          UnsafeAccess0_12 = (MR_Integer) 1;
          BoxPolicy_14 = (MR_Integer) 0;
        }
        break;
    }
    IsConstant_16 = parse_tree__prog_item__mutable_var_constant_1_f_0(MutAttrs_5);
    switch (IsConstant_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          PreInit_17 = (MR_Integer) 0;
          LockUnlock_18 = (MR_Integer) 0;
          UnsafeAccess_19 = (MR_Integer) 0;
          PreInitPreds_28 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 0:
        {
          PreInit_17 = PreInit0_10;
          LockUnlock_18 = LockUnlock0_11;
          UnsafeAccess_19 = UnsafeAccess0_12;
          switch (PreInit_17) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              PreInitPreds_28 = (MR_Word) ((MR_Unsigned) 0U);
              break;
            case (MR_Integer) 1:
              PreInitPreds_28 = (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[62]));
              break;
          }
        }
        break;
    }
    switch (UnsafeAccess_19) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        UnsafeAccessPreds_29 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 1:
        UnsafeAccessPreds_29 = (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[36]));
        break;
    }
    switch (LockUnlock_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        LockUnlockPreds_30 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 1:
        LockUnlockPreds_30 = (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[38]));
        break;
    }
    Var_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mutable_pred_kind_0), UnsafeAccessPreds_29, LockUnlockPreds_30);
    Var_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mutable_pred_kind_0), PreInitPreds_28, Var_44);
    PrivatePredKinds_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mutable_pred_kind_0), (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[61])), Var_43);
    parse_tree__prog_mutable__compute_needed_public_mutable_aux_preds_2_p_0(MutAttrs_5, &PublicPredKinds_21);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *TargetParams_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = (MR_Box) (((((MR_Unsigned) (ImplLang_8) << 6)) | (((((MR_Unsigned) (Lang_9) << 4)) | (((((MR_Unsigned) (BoxPolicy_14) << 3)) | (((((MR_Unsigned) (PreInit_17) << 2)) | (((((MR_Unsigned) (LockUnlock_18) << 1)) | (MR_Unsigned) (UnsafeAccess_19)))))))))));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (PrivatePredKinds_20));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (PublicPredKinds_21));
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__check_mutable_inst_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word Context_9,
  MR_Word InstVarSet_10,
  MR_Word ParentInsts_11,
  MR_Word Inst_12,
  MR_Word STATE_VARIABLE_Specs_0_69,
  MR_Word * STATE_VARIABLE_Specs_70)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Inst_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Inst_12)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            hlds__make_hlds__add_mutable_aux_preds__invalid_inst_in_mutable_8_p_0(ModuleInfo_8, Context_9, InstVarSet_10, ParentInsts_11, Inst_12, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[14])), STATE_VARIABLE_Specs_0_69, STATE_VARIABLE_Specs_70);
            break;
          case (MR_Integer) 1:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.check_mutable_inst\'/7", (MR_String) "not_reached");
              return;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        hlds__make_hlds__add_mutable_aux_preds__invalid_inst_in_mutable_8_p_0(ModuleInfo_8, Context_9, InstVarSet_10, ParentInsts_11, Inst_12, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[14])), STATE_VARIABLE_Specs_0_69, STATE_VARIABLE_Specs_70);
        break;
      case (MR_Integer) 2:
        {
          MR_Word Uniq_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), Inst_12, (MR_Integer) 0))) & (MR_Integer) 7);

          hlds__make_hlds__add_mutable_aux_preds__check_mutable_inst_uniqueness_8_p_0(ModuleInfo_8, Context_9, InstVarSet_10, ParentInsts_11, Inst_12, Uniq_14, STATE_VARIABLE_Specs_0_69, STATE_VARIABLE_Specs_70);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Inst_12, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word BoundInsts_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_12, (MR_Integer) 3))));
              MR_Word STATE_VARIABLE_Specs_128_128;
              MR_Word Uniq_131 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst_12, (MR_Integer) 1))) & (MR_Integer) 7);

              hlds__make_hlds__add_mutable_aux_preds__check_mutable_inst_uniqueness_8_p_0(ModuleInfo_8, Context_9, InstVarSet_10, ParentInsts_11, Inst_12, Uniq_131, STATE_VARIABLE_Specs_0_69, &STATE_VARIABLE_Specs_128_128);
              hlds__make_hlds__add_mutable_aux_preds__check_mutable_bound_insts_7_p_0(ModuleInfo_8, Context_9, InstVarSet_10, ParentInsts_11, BoundInsts_18, STATE_VARIABLE_Specs_128_128, STATE_VARIABLE_Specs_70);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Uniq_138 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst_12, (MR_Integer) 1))) & (MR_Integer) 7);

              hlds__make_hlds__add_mutable_aux_preds__check_mutable_inst_uniqueness_8_p_0(ModuleInfo_8, Context_9, InstVarSet_10, ParentInsts_11, Inst_12, Uniq_138, STATE_VARIABLE_Specs_0_69, STATE_VARIABLE_Specs_70);
            }
            break;
          case (MR_Integer) 2:
            *STATE_VARIABLE_Specs_70 = STATE_VARIABLE_Specs_0_69;
            break;
          case (MR_Integer) 3:
            hlds__make_hlds__add_mutable_aux_preds__invalid_inst_in_mutable_8_p_0(ModuleInfo_8, Context_9, InstVarSet_10, ParentInsts_11, Inst_12, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[18])), STATE_VARIABLE_Specs_0_69, STATE_VARIABLE_Specs_70);
            break;
          case (MR_Integer) 4:
            {
              MR_Word InstName_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_12, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) InstName_19)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word UserInstSymName_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstName_19, (MR_Integer) 0))));
                    MR_Word UserInstArgs_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstName_19, (MR_Integer) 1))));
                    MR_Integer UserInstArity_22;
                    MR_Word UserInstCtor_23;

                    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), UserInstArgs_21, &UserInstArity_22);
                    {
                      UserInstCtor_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), UserInstCtor_23, 0) = ((MR_Box) (UserInstSymName_20));
                      MR_hl_field(MR_mktag(0), UserInstCtor_23, 1) = ((MR_Box) (UserInstArity_22));
                    }
                    succeeded = mercury__list__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), ((MR_Box) (UserInstCtor_23)), ParentInsts_11);
                    if (succeeded)
                      *STATE_VARIABLE_Specs_70 = STATE_VARIABLE_Specs_0_69;
                    else
                    {
                      MR_String UserInstBaseName_25;
                      MR_Word UserInstModuleName_24;
                      MR_Word Var_137;

                      succeeded = ((MR_tag((MR_Word) UserInstSymName_20)) == (MR_Integer) 1);
                      if (succeeded)
                      {
                        UserInstModuleName_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), UserInstSymName_20, (MR_Integer) 0))));
                        UserInstBaseName_25 = ((MR_String) ((MR_hl_field(MR_mktag(1), UserInstSymName_20, (MR_Integer) 1))));
                        Var_137 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
                        succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(UserInstModuleName_24, Var_137);
                        if (succeeded)
                        {
                          succeeded = (UserInstArity_22 == (MR_Integer) 0);
                          if (succeeded)
                          {
                            if ((strcmp(UserInstBaseName_25, (MR_String) "dead") == 0))
                              succeeded = MR_TRUE;
                            else
                            if ((strcmp(UserInstBaseName_25, (MR_String) "mostly_dead") == 0))
                              succeeded = MR_TRUE;
                            else
                              succeeded = MR_FALSE;
                          }
                        }
                      }
                      if (succeeded)
                      {
                        MR_Word UnqualInstName_27;
                        MR_Word UnqualInst_28;
                        MR_Word Var_120;

                        {
                          Var_120 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), Var_120, 0) = ((MR_Box) (UserInstBaseName_25));
                        }
                        {
                          UnqualInstName_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), UnqualInstName_27, 0) = ((MR_Box) (Var_120));
                          MR_hl_field(MR_mktag(0), UnqualInstName_27, 1) = ((MR_Box) (UserInstArgs_21));
                        }
                        {
                          UnqualInst_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), UnqualInst_28, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                          MR_hl_field(MR_mktag(3), UnqualInst_28, 1) = ((MR_Box) (UnqualInstName_27));
                        }
                        hlds__make_hlds__add_mutable_aux_preds__invalid_inst_in_mutable_8_p_0(ModuleInfo_8, Context_9, InstVarSet_10, ParentInsts_11, UnqualInst_28, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[14])), STATE_VARIABLE_Specs_0_69, STATE_VARIABLE_Specs_70);
                      }
                      else
                      {
                        MR_Word InstTable_29;
                        MR_Word UserInstTable_30;
                        MR_Word STATE_VARIABLE_Specs_122_122;
                        MR_Word InstDefn_31;
                        MR_Box conv0_InstDefn_31;

                        hlds__make_hlds__add_mutable_aux_preds__check_mutable_insts_7_p_0(ModuleInfo_8, Context_9, InstVarSet_10, ParentInsts_11, UserInstArgs_21, STATE_VARIABLE_Specs_0_69, &STATE_VARIABLE_Specs_122_122);
                        hlds__hlds_module__module_info_get_inst_table_2_p_0(ModuleInfo_8, &InstTable_29);
                        hlds__hlds_inst_mode__inst_table_get_user_insts_2_p_0(InstTable_29, &UserInstTable_30);
                        succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_inst_defn_0), UserInstTable_30, ((MR_Box) (UserInstCtor_23)), &conv0_InstDefn_31);
                        if (succeeded)
                        {
                          InstDefn_31 = ((MR_Word) (conv0_InstDefn_31));
                          succeeded = MR_TRUE;
                        }
                        if (succeeded)
                        {
                          MR_Word DefnInstVarSet_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstDefn_31, (MR_Integer) 0))));
                          MR_Word InstBody_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstDefn_31, (MR_Integer) 2))));
                          MR_Word EqvInst_38 = (MR_Word) (InstBody_34);
                          MR_Word DefnParentInsts_39;
                          MR_Word next_value_of_InstVarSet_10;
                          MR_Word next_value_of_ParentInsts_11;
                          MR_Word next_value_of_Inst_12;
                          MR_Word next_value_of_STATE_VARIABLE_Specs_0_69;

                          {
                            DefnParentInsts_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), DefnParentInsts_39, 0) = ((MR_Box) (UserInstCtor_23));
                            MR_hl_field(MR_mktag(1), DefnParentInsts_39, 1) = ((MR_Box) (ParentInsts_11));
                          }
                          // direct tailcall eliminated
                          ;
                          next_value_of_InstVarSet_10 = DefnInstVarSet_32;
                          next_value_of_ParentInsts_11 = DefnParentInsts_39;
                          next_value_of_Inst_12 = EqvInst_38;
                          next_value_of_STATE_VARIABLE_Specs_0_69 = STATE_VARIABLE_Specs_122_122;
                          InstVarSet_10 = next_value_of_InstVarSet_10;
                          ParentInsts_11 = next_value_of_ParentInsts_11;
                          Inst_12 = next_value_of_Inst_12;
                          STATE_VARIABLE_Specs_0_69 = next_value_of_STATE_VARIABLE_Specs_0_69;
                          continue;
                        }
                        else
                          hlds__make_hlds__add_mutable_aux_preds__invalid_inst_in_mutable_8_p_0(ModuleInfo_8, Context_9, InstVarSet_10, ParentInsts_11, Inst_12, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[60])), STATE_VARIABLE_Specs_122_122, STATE_VARIABLE_Specs_70);
                      }
                    }
                  }
                  break;
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.check_mutable_inst\'/7", (MR_String) "non-user inst");
                    return;
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.check_mutable_inst\'/7", (MR_String) "non-user inst");
                    return;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 5:
            hlds__make_hlds__add_mutable_aux_preds__invalid_inst_in_mutable_8_p_0(ModuleInfo_8, Context_9, InstVarSet_10, ParentInsts_11, Inst_12, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[16])), STATE_VARIABLE_Specs_0_69, STATE_VARIABLE_Specs_70);
            break;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__check_mutable_insts_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_Specs_0_6,
  MR_Word * STATE_VARIABLE_Specs_7)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Specs_7 = STATE_VARIABLE_Specs_0_6;
    else
    {
      MR_Word Inst_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0))));
      MR_Word Insts_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Specs_24_24;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_6;

      hlds__make_hlds__add_mutable_aux_preds__check_mutable_inst_7_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, HeadVar__4_4, Inst_19, STATE_VARIABLE_Specs_0_6, &STATE_VARIABLE_Specs_24_24);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__5_5 = Insts_20;
      next_value_of_STATE_VARIABLE_Specs_0_6 = STATE_VARIABLE_Specs_24_24;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      STATE_VARIABLE_Specs_0_6 = next_value_of_STATE_VARIABLE_Specs_0_6;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__check_mutable_bound_insts_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_Specs_0_6,
  MR_Word * STATE_VARIABLE_Specs_7)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Specs_7 = STATE_VARIABLE_Specs_0_6;
    else
    {
      MR_Word BoundInst_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0))));
      MR_Word BoundInsts_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1))));
      MR_Word ArgInsts_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BoundInst_19, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Specs_26_26;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_6;

      hlds__make_hlds__add_mutable_aux_preds__check_mutable_insts_7_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, HeadVar__4_4, ArgInsts_23, STATE_VARIABLE_Specs_0_6, &STATE_VARIABLE_Specs_26_26);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__5_5 = BoundInsts_20;
      next_value_of_STATE_VARIABLE_Specs_0_6 = STATE_VARIABLE_Specs_26_26;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      STATE_VARIABLE_Specs_0_6 = next_value_of_STATE_VARIABLE_Specs_0_6;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__check_mutable_inst_uniqueness_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word Context_10,
  MR_Word InstVarSet_11,
  MR_Word ParentInsts_12,
  MR_Word Inst_13,
  MR_Word Uniq_14,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20)
{
  {
    MR_bool succeeded;

    switch (Uniq_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
        {
          MR_Word UniqPieces_18;
          MR_Word Var_48;

          succeeded = ((((MR_tag((MR_Word) Inst_13)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Inst_13, (MR_Integer) 0)))) == (MR_Integer) 1)));
          if (succeeded)
          {
            Var_48 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst_13, (MR_Integer) 1))) & (MR_Integer) 7);
            succeeded = (Uniq_14 == Var_48);
          }
          if (succeeded)
            UniqPieces_18 = (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[14]));
          else
            UniqPieces_18 = (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[49]));
          hlds__make_hlds__add_mutable_aux_preds__invalid_inst_in_mutable_8_p_0(ModuleInfo_9, Context_10, InstVarSet_11, ParentInsts_12, Inst_13, UniqPieces_18, STATE_VARIABLE_Specs_0_19, STATE_VARIABLE_Specs_20);
        }
        break;
      case (MR_Integer) 4:
        {
          MR_Word UniqPieces_66;
          MR_Word Var_51;

          succeeded = ((((MR_tag((MR_Word) Inst_13)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Inst_13, (MR_Integer) 0)))) == (MR_Integer) 1)));
          if (succeeded)
          {
            Var_51 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst_13, (MR_Integer) 1))) & (MR_Integer) 7);
            succeeded = (Uniq_14 == Var_51);
          }
          if (succeeded)
            UniqPieces_66 = (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[14]));
          else
            UniqPieces_66 = (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[52]));
          hlds__make_hlds__add_mutable_aux_preds__invalid_inst_in_mutable_8_p_0(ModuleInfo_9, Context_10, InstVarSet_11, ParentInsts_12, Inst_13, UniqPieces_66, STATE_VARIABLE_Specs_0_19, STATE_VARIABLE_Specs_20);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word UniqPieces_90;
          MR_Word Var_75;

          succeeded = ((((MR_tag((MR_Word) Inst_13)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Inst_13, (MR_Integer) 0)))) == (MR_Integer) 1)));
          if (succeeded)
          {
            Var_75 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst_13, (MR_Integer) 1))) & (MR_Integer) 7);
            succeeded = (Uniq_14 == Var_75);
          }
          if (succeeded)
            UniqPieces_90 = (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[14]));
          else
            UniqPieces_90 = (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[55]));
          hlds__make_hlds__add_mutable_aux_preds__invalid_inst_in_mutable_8_p_0(ModuleInfo_9, Context_10, InstVarSet_11, ParentInsts_12, Inst_13, UniqPieces_90, STATE_VARIABLE_Specs_0_19, STATE_VARIABLE_Specs_20);
        }
        break;
      case (MR_Integer) 0:
        *STATE_VARIABLE_Specs_20 = STATE_VARIABLE_Specs_0_19;
        break;
      case (MR_Integer) 1:
        {
          MR_Word UniqPieces_114;
          MR_Word Var_99;

          succeeded = ((((MR_tag((MR_Word) Inst_13)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Inst_13, (MR_Integer) 0)))) == (MR_Integer) 1)));
          if (succeeded)
          {
            Var_99 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst_13, (MR_Integer) 1))) & (MR_Integer) 7);
            succeeded = (Uniq_14 == Var_99);
          }
          if (succeeded)
            UniqPieces_114 = (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[14]));
          else
            UniqPieces_114 = (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[58]));
          hlds__make_hlds__add_mutable_aux_preds__invalid_inst_in_mutable_8_p_0(ModuleInfo_9, Context_10, InstVarSet_11, ParentInsts_12, Inst_13, UniqPieces_114, STATE_VARIABLE_Specs_0_19, STATE_VARIABLE_Specs_20);
        }
        break;
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__invalid_inst_in_mutable_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word Context_10,
  MR_Word InstVarSet_11,
  MR_Word ParentInsts_12,
  MR_Word Inst_13,
  MR_Word ProblemPieces_14,
  MR_Word STATE_VARIABLE_Specs_0_20,
  MR_Word * STATE_VARIABLE_Specs_21)
{
  {
    MR_Word ParentPieces_16;
    MR_Word InstPieces_17;
    MR_Word Pieces_18;
    MR_Word Spec_19;
    MR_Word Var_33;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_40;

    hlds__make_hlds__add_mutable_aux_preds__named_parents_to_pieces_2_p_0(ParentInsts_12, &ParentPieces_16);
    InstPieces_17 = hlds__error_msg_inst__error_msg_inst_8_f_0(ModuleInfo_9, InstVarSet_11, (MR_Integer) 0, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[41])), (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[43])), Inst_13);
    {
      Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[44])));
      MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (ParentPieces_16));
    }
    {
      Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[45])));
      MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (InstPieces_17));
    }
    Var_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ProblemPieces_14, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[3])));
    Var_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_37, Var_40);
    Pieces_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_33, Var_36);
    {
      Spec_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_19, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.invalid_inst_in_mutable\'/8"));
      MR_hl_field(MR_mktag(1), Spec_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_19, 2) = ((MR_Box) ((MR_Unsigned) 16U));
      MR_hl_field(MR_mktag(1), Spec_19, 3) = ((MR_Box) (Context_10));
      MR_hl_field(MR_mktag(1), Spec_19, 4) = ((MR_Box) (Pieces_18));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_21 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_19));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_20));
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__named_parents_to_pieces_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word InstCtor_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word InstCtors_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word HeadPieces_6;
    MR_Word TailPieces_7;
    MR_Word InstName_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstCtor_3, (MR_Integer) 0))));
    MR_Integer InstArity_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), InstCtor_3, (MR_Integer) 1))));
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_17;

    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (InstName_11));
      MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (InstArity_12));
    }
    {
      Var_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_16, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(MR_mktag(3), Var_16, 1) = ((MR_Box) (Var_17));
    }
    {
      Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_15, 0) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(1), Var_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[24])));
    }
    {
      HeadPieces_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadPieces_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[39])));
      MR_hl_field(MR_mktag(1), HeadPieces_6, 1) = ((MR_Box) (Var_15));
    }
    hlds__make_hlds__add_mutable_aux_preds__named_parents_to_pieces_2_p_0(InstCtors_4, &TailPieces_7);
    *HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), HeadPieces_6, TailPieces_7);
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____mutable_impl_lang_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__make_hlds__add_mutable_aux_preds____Unify____mutable_impl_lang_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____mutable_impl_lang_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__make_hlds__add_mutable_aux_preds____Compare____mutable_impl_lang_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____mutable_target_params_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__make_hlds__add_mutable_aux_preds____Unify____mutable_target_params_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____mutable_target_params_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__make_hlds__add_mutable_aux_preds____Compare____mutable_target_params_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____need_lock_unlock_preds_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__make_hlds__add_mutable_aux_preds____Unify____need_lock_unlock_preds_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____need_lock_unlock_preds_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__make_hlds__add_mutable_aux_preds____Compare____need_lock_unlock_preds_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____need_pre_init_pred_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__make_hlds__add_mutable_aux_preds____Unify____need_pre_init_pred_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____need_pre_init_pred_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__make_hlds__add_mutable_aux_preds____Compare____need_pre_init_pred_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Unify____need_unsafe_get_set_preds_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__make_hlds__add_mutable_aux_preds____Unify____need_unsafe_get_set_preds_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds____Compare____need_unsafe_get_set_preds_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__make_hlds__add_mutable_aux_preds____Compare____need_unsafe_get_set_preds_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__hlds__make_hlds__add_mutable_aux_preds__init(void)
{
}

void mercury__hlds__make_hlds__add_mutable_aux_preds__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__type_ctor_info_mutable_impl_lang_0);
	MR_register_type_ctor_info(&hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__type_ctor_info_mutable_target_params_0);
	MR_register_type_ctor_info(&hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__type_ctor_info_need_lock_unlock_preds_0);
	MR_register_type_ctor_info(&hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__type_ctor_info_need_pre_init_pred_0);
	MR_register_type_ctor_info(&hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__type_ctor_info_need_unsafe_get_set_preds_0);
}

void mercury__hlds__make_hlds__add_mutable_aux_preds__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__make_hlds__add_mutable_aux_preds__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module hlds.make_hlds.add_mutable_aux_preds.
