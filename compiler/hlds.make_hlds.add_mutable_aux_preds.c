/*
** Automatically generated from `add_mutable_aux_preds.m'
** by the Mercury compiler,
** version rotd-2019-05-03
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
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "backend_libs.foreign.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
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
#include "hlds.make_hlds_error.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
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
#include "mdbcomp.builtin_modules.mih"
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
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.equiv_type.mih"
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
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_mutable.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.make_hlds.add_class.mih"
#include "hlds.make_hlds.add_clause.mih"
#include "hlds.make_hlds.add_foreign_proc.mih"
#include "hlds.make_hlds.make_hlds_passes.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_mutable_aux_preds__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_mutable_aux_preds__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_mutable_aux_preds__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_mutable_aux_preds__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_mutable_aux_preds__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_mutable_aux_preds__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_mutable_aux_preds__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_determinism_0;

static const MR_EnumFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_mutable_impl_lang_0_0;

static const MR_EnumFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_mutable_impl_lang_0_1;

static const MR_EnumFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_mutable_impl_lang_0_2;

static const MR_EnumFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_functor_desc_mutable_impl_lang_0_3;

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_value_ordered_mutable_impl_lang_0[4];

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__enum_name_ordered_mutable_impl_lang_0[4];

static const MR_Integer hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__functor_number_map_mutable_impl_lang_0[4];

static const MR_PseudoTypeInfo hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__field_types_mutable_target_params_0_0[6];

static const MR_DuArgLocn hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__field_locns_mutable_target_params_0_0[6];

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
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__define_main_get_set_preds__1330__1_2_p_0(
  MR_Word AttachToIO_39,
  MR_Word HeadVar__2_256);

static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__define_unsafe_get_set_preds__1131__1_2_p_0(
  MR_Word IsConstant_33,
  MR_Word HeadVar__2_67);

static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__define_lock_unlock_preds__1043__1_2_p_0(
  MR_Word IsConstant_33,
  MR_Word HeadVar__2_60);

static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__define_pre_init_pred__981__1_2_p_0(
  MR_Word IsConstant_33,
  MR_Word HeadVar__2_53);

static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__657__1_2_p_0(
  MR_Word Constraints_33,
  MR_Word HeadVar__2_74);

static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__655__1_2_p_0(
  MR_Word MaybeDetism_27,
  MR_Word HeadVar__2_69);

static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__654__1_2_p_0(
  MR_Word WithInst_26,
  MR_Word HeadVar__2_65);

static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__653__1_2_p_0(
  MR_Word WithType_25,
  MR_Word HeadVar__2_61);

static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__651__1_2_p_0(
  MR_Word PredOrFunc_23,
  MR_Word HeadVar__2_57);

static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__650__1_2_p_0(
  MR_Word ExistQVars_31,
  MR_Word HeadVar__2_53);

static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__648__1_2_p_0(
  MR_Word InstVarSet_30,
  MR_Word HeadVar__2_49);

static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__646__1_2_p_0(
  MR_Word TypeVarSet_29,
  MR_Word HeadVar__2_45);

static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_aux_pred_decls_for_mutable__468__1_2_p_0(
  MR_Word AttachToIO_33,
  MR_Word HeadVar__2_83);

static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_aux_pred_decls_for_mutable__466__1_2_p_0(
  MR_Word UnsafeAccess_30,
  MR_Word HeadVar__2_79);

static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_aux_pred_decls_for_mutable__464__1_2_p_0(
  MR_Word LockUnlock_29,
  MR_Word HeadVar__2_75);

static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_aux_pred_decls_for_mutable__462__1_2_p_0(
  MR_Word PreInit_28,
  MR_Word HeadVar__2_71);

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
  MR_Word STATE_VARIABLE_ModuleInfo_0_36,
  MR_Word * STATE_VARIABLE_ModuleInfo_37,
  MR_Word STATE_VARIABLE_QualInfo_0_38,
  MR_Word * STATE_VARIABLE_QualInfo_39,
  MR_Word STATE_VARIABLE_Specs_0_40,
  MR_Word * STATE_VARIABLE_Specs_41);

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_109_117_116_97_98_108_101_95_116_97_114_103_101_116_95_118_97_114_95_110_97_109_101_95_95_91_54_93_95_48_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word MutAttrs_9,
  MR_Word ModuleName_10,
  MR_String MutableName_11,
  MR_Word ForeignLanguage_12,
  MR_String * TargetMutableName_14);

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_aux_preds_10_p_0(
  MR_Word ItemMutable_11,
  MR_Word TargetParams_12,
  MR_String TargetMutableName_13,
  MR_Word PredStatus_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_34,
  MR_Word * STATE_VARIABLE_ModuleInfo_35,
  MR_Word STATE_VARIABLE_QualInfo_0_36,
  MR_Word * STATE_VARIABLE_QualInfo_37,
  MR_Word STATE_VARIABLE_Specs_0_38,
  MR_Word * STATE_VARIABLE_Specs_39);

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_init_pred_11_p_0(
  MR_Word ItemMutable_12,
  MR_Word MaybeCallPreInitExpr_13,
  MR_Word InitSetPredName_14,
  MR_Word Lang_15,
  MR_Word PredStatus_16,
  MR_Word STATE_VARIABLE_ModuleInfo_0_41,
  MR_Word * STATE_VARIABLE_ModuleInfo_42,
  MR_Word STATE_VARIABLE_QualInfo_0_43,
  MR_Word * STATE_VARIABLE_QualInfo_44,
  MR_Word STATE_VARIABLE_Specs_0_45,
  MR_Word * STATE_VARIABLE_Specs_46);

static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_main_get_set_preds_14_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_main_get_set_preds_14_p_0(
  MR_Word ItemMutable_15,
  MR_Word TargetParams_16,
  MR_String TargetMutableName_17,
  MR_Word Attrs_18,
  MR_Word MaybeLockUnlockExprs_19,
  MR_Word MaybeUnsafeGetSetExprs_20,
  MR_Word * InitSetPredName_21,
  MR_Word PredStatus_22,
  MR_Word STATE_VARIABLE_ModuleInfo_0_87,
  MR_Word * STATE_VARIABLE_ModuleInfo_88,
  MR_Word STATE_VARIABLE_QualInfo_0_89,
  MR_Word * STATE_VARIABLE_QualInfo_90,
  MR_Word STATE_VARIABLE_Specs_0_91,
  MR_Word * STATE_VARIABLE_Specs_92);

static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_unsafe_get_set_preds_12_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_unsafe_get_set_preds_12_p_0(
  MR_Word ItemMutable_13,
  MR_Word TargetParams_14,
  MR_String TargetMutableName_15,
  MR_Word Attrs_16,
  MR_Tuple * UnsafeGetSetExprs_17,
  MR_Word PredStatus_18,
  MR_Word STATE_VARIABLE_ModuleInfo_0_58,
  MR_Word * STATE_VARIABLE_ModuleInfo_59,
  MR_Word STATE_VARIABLE_QualInfo_0_60,
  MR_Word * STATE_VARIABLE_QualInfo_61,
  MR_Word STATE_VARIABLE_Specs_0_62,
  MR_Word * STATE_VARIABLE_Specs_63);

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
  MR_Word ItemMutable_13,
  MR_Word TargetParams_14,
  MR_String TargetMutableName_15,
  MR_Word Attrs_16,
  MR_Tuple * LockUnlockExprs_17,
  MR_Word PredStatus_18,
  MR_Word STATE_VARIABLE_ModuleInfo_0_51,
  MR_Word * STATE_VARIABLE_ModuleInfo_52,
  MR_Word STATE_VARIABLE_QualInfo_0_53,
  MR_Word * STATE_VARIABLE_QualInfo_54,
  MR_Word STATE_VARIABLE_Specs_0_55,
  MR_Word * STATE_VARIABLE_Specs_56);

static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_pre_init_pred_12_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_pre_init_pred_12_p_0(
  MR_Word ItemMutable_13,
  MR_Word TargetParams_14,
  MR_String TargetMutableName_15,
  MR_Word Attrs_16,
  MR_Word * CallPreInitExpr_17,
  MR_Word PredStatus_18,
  MR_Word STATE_VARIABLE_ModuleInfo_0_44,
  MR_Word * STATE_VARIABLE_ModuleInfo_45,
  MR_Word STATE_VARIABLE_QualInfo_0_46,
  MR_Word * STATE_VARIABLE_QualInfo_47,
  MR_Word STATE_VARIABLE_Specs_0_48,
  MR_Word * STATE_VARIABLE_Specs_49);

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_global_var_java_6_p_0(
  MR_String TargetMutableName_7,
  MR_Word Type_8,
  MR_Word IsThreadLocal_9,
  MR_Word Context_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_15,
  MR_Word * STATE_VARIABLE_ModuleInfo_16);

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_global_var_c_7_p_0(
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
  MR_Word STATE_VARIABLE_Specs_0_28,
  MR_Word * STATE_VARIABLE_Specs_29);

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__get_matching_foreign_names_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_aux_pred_decls_for_mutable_7_p_0_4(
  MR_Box closure_arg);

static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_aux_pred_decls_for_mutable_7_p_0_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_aux_pred_decls_for_mutable_7_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_aux_pred_decls_for_mutable_7_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_aux_pred_decls_for_mutable_7_p_0(
  MR_Word ItemMutable_8,
  MR_Word PredStatus_9,
  MR_Word NeedQual_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_40,
  MR_Word * STATE_VARIABLE_ModuleInfo_41,
  MR_Word STATE_VARIABLE_Specs_0_42,
  MR_Word * STATE_VARIABLE_Specs_43);

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__get_mutable_target_params_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word MutAttrs_5,
  MR_Word * MaybeTargetParams_6);

static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0_8(
  MR_Box closure_arg);

static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0_7(
  MR_Box closure_arg);

static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0_6(
  MR_Box closure_arg);

static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0_5(
  MR_Box closure_arg);

static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0_4(
  MR_Box closure_arg);

static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0(
  MR_Word ItemPredDecl_11,
  MR_Word ModuleName_12,
  MR_String MutableName_13,
  MR_Word Kind_14,
  MR_Word PredStatus_15,
  MR_Word NeedQual_16,
  MR_Word STATE_VARIABLE_ModuleInfo_0_38,
  MR_Word * STATE_VARIABLE_ModuleInfo_39,
  MR_Word STATE_VARIABLE_Specs_0_40,
  MR_Word * STATE_VARIABLE_Specs_41);

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_pre_init_pred_decl_9_p_0(
  MR_Word ModuleName_10,
  MR_String MutableName_11,
  MR_Word PredStatus_12,
  MR_Word NeedQual_13,
  MR_Word Context_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_19,
  MR_Word * STATE_VARIABLE_ModuleInfo_20,
  MR_Word STATE_VARIABLE_Specs_0_21,
  MR_Word * STATE_VARIABLE_Specs_22);

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_init_pred_decl_9_p_0(
  MR_Word ModuleName_10,
  MR_String MutableName_11,
  MR_Word PredStatus_12,
  MR_Word NeedQual_13,
  MR_Word Context_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_19,
  MR_Word * STATE_VARIABLE_ModuleInfo_20,
  MR_Word STATE_VARIABLE_Specs_0_21,
  MR_Word * STATE_VARIABLE_Specs_22);

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_unlock_pred_decl_9_p_0(
  MR_Word ModuleName_10,
  MR_String MutableName_11,
  MR_Word PredStatus_12,
  MR_Word NeedQual_13,
  MR_Word Context_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_19,
  MR_Word * STATE_VARIABLE_ModuleInfo_20,
  MR_Word STATE_VARIABLE_Specs_0_21,
  MR_Word * STATE_VARIABLE_Specs_22);

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_lock_pred_decl_9_p_0(
  MR_Word ModuleName_10,
  MR_String MutableName_11,
  MR_Word PredStatus_12,
  MR_Word NeedQual_13,
  MR_Word Context_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_19,
  MR_Word * STATE_VARIABLE_ModuleInfo_20,
  MR_Word STATE_VARIABLE_Specs_0_21,
  MR_Word * STATE_VARIABLE_Specs_22);

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_unsafe_set_pred_decl_11_p_0(
  MR_Word ModuleName_12,
  MR_String MutableName_13,
  MR_Word Type_14,
  MR_Word Inst_15,
  MR_Word PredStatus_16,
  MR_Word NeedQual_17,
  MR_Word Context_18,
  MR_Word STATE_VARIABLE_ModuleInfo_0_23,
  MR_Word * STATE_VARIABLE_ModuleInfo_24,
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26);

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_unsafe_get_pred_decl_11_p_0(
  MR_Word ModuleName_12,
  MR_String MutableName_13,
  MR_Word Type_14,
  MR_Word Inst_15,
  MR_Word PredStatus_16,
  MR_Word NeedQual_17,
  MR_Word Context_18,
  MR_Word STATE_VARIABLE_ModuleInfo_0_23,
  MR_Word * STATE_VARIABLE_ModuleInfo_24,
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26);

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_decl_13_p_0(
  MR_Word ModuleName_14,
  MR_String MutableName_15,
  MR_Word Kind_16,
  MR_Word PredName_17,
  MR_Word ArgTypesAndModes_18,
  MR_Word Purity_19,
  MR_Word PredStatus_20,
  MR_Word NeedQual_21,
  MR_Word Context_22,
  MR_Word STATE_VARIABLE_ModuleInfo_0_34,
  MR_Word * STATE_VARIABLE_ModuleInfo_35,
  MR_Word STATE_VARIABLE_Specs_0_36,
  MR_Word * STATE_VARIABLE_Specs_37);

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
  MR_Word STATE_VARIABLE_Specs_0_21,
  MR_Word * STATE_VARIABLE_Specs_22);

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


static /* final */ const MR_Box hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[70][2];

static /* final */ const MR_Box hlds__make_hlds__add_mutable_aux_preds_scalar_common_2[4][1];

static /* final */ const MR_Box hlds__make_hlds__add_mutable_aux_preds_scalar_common_3[13][5];


/* sealed */ struct hlds__make_hlds__add_mutable_aux_preds__vector_common_type_4_0_s {
  const MR_Word hlds__make_hlds__add_mutable_aux_preds__vector_common_type_4_0__vct_4_f_0;
};

static /* final */ const struct hlds__make_hlds__add_mutable_aux_preds__vector_common_type_4_0_s hlds__make_hlds__add_mutable_aux_preds_vector_common_4[4];



static /* final */ const MR_Box hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[70][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[2]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[7]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 16U)),
    ((MR_Box) ((MR_String) "mutable"))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[8])))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration in non-trailing grade."))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[11])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[13])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: trailed"))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[14])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declarations."))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[17]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[18])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "may not appear in"))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[19])))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is abstract, and thus"))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[21])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is constrained, and thus"))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[21])))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "which may not appear in"))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[19])))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[28]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[27])))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[11])))
  },
  /* row 32 */
  {
    ((MR_Box) ((MR_String) "#endif\n")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 33 */
  {
    ((MR_Box) ((MR_String) ";\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[32])))
  },
  /* row 34 */
  {
    ((MR_Box) ((MR_String) ", MR_MUTEX_ATTR);\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[32])))
  },
  /* row 35 */
  {
    ((MR_Box) ((MR_String) "end\n")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 36 */
  {
    ((MR_Box) ((MR_String) "       X = Value\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[35])))
  },
  /* row 37 */
  {
    ((MR_Box) ((MR_String) "   {get_mutable_ack, Value} ->\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[36])))
  },
  /* row 38 */
  {
    ((MR_Box) ((MR_String) "receive\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[37])))
  },
  /* row 39 */
  {
    ((MR_Box) ((MR_String) ", self()},\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[38])))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "backend."))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[40]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[11])))
  },
  /* row 42 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in the expansion of the named inst"))
  },
  /* row 43 */
  {
    ((MR_Box) ((MR_Unsigned) 18U)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[43]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 45 */
  {
    ((MR_Box) ((MR_Unsigned) 18U)),
    ((MR_Box) ((MR_Integer) -1))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[45]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 47 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 48 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the inst"))
  },
  /* row 49 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "has uniqueness"))
  },
  /* row 50 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "clobbered"))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[50]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[29])))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[51])))
  },
  /* row 53 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "mostly_clobbered"))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[53]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[29])))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[54])))
  },
  /* row 56 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "mostly_unique"))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[56]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[29])))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[57])))
  },
  /* row 59 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "unique"))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[59]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[29])))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[60])))
  },
  /* row 62 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is not defined."))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[62]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 64 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 65 */
  {
    ((MR_Box) ((MR_Integer) 24)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 66 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: multiple foreign_name attributes"))
  },
  /* row 67 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "specified for the"))
  },
  /* row 68 */
  {
    ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_2[1])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 69 */
  {
    ((MR_Box) ((MR_String) ">();\n")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_mutable_aux_preds_scalar_common_2[4][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[16])))
  },
  /* row 2 */
  {
    (MR_Box) (((((MR_Unsigned) 1U << 1)) | (MR_Unsigned) 1U))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_mutable_aux_preds_scalar_common_3[13][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_determinism_0)),
    ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_determinism_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraints_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraints_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__type_ctor_info_need_pre_init_pred_0)),
    ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__type_ctor_info_need_pre_init_pred_0))
  },
  /* row 9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__type_ctor_info_need_lock_unlock_preds_0)),
    ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__type_ctor_info_need_lock_unlock_preds_0))
  },
  /* row 10 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__type_ctor_info_need_unsafe_get_set_preds_0)),
    ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__type_ctor_info_need_unsafe_get_set_preds_0))
  },
  /* row 11 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mutable_attach_to_io_state_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mutable_attach_to_io_state_0))
  },
  /* row 12 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mutable_constant_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mutable_constant_0))
  },
};


static /* final */ const struct hlds__make_hlds__add_mutable_aux_preds__vector_common_type_4_0_s hlds__make_hlds__add_mutable_aux_preds_vector_common_4[4] = {
  /* row 0 */   {     (MR_Integer) 0 },
  /* row 1 */   {     (MR_Integer) 1 },
  /* row 2 */   {     (MR_Integer) 2 },
  /* row 3 */   {     (MR_Integer) 3 },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_mutable_aux_preds__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_mutable_aux_preds__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_mutable_aux_preds__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_mutable_aux_preds__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&hlds__make_hlds__add_mutable_aux_preds__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_mutable_aux_preds__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_mutable_aux_preds__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_mutable_aux_preds__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_determinism_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0)
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

static const MR_PseudoTypeInfo hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__field_types_mutable_target_params_0_0[6] = {
  (MR_PseudoTypeInfo) (&hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__type_ctor_info_mutable_impl_lang_0),
  (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_box_policy_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__type_ctor_info_need_pre_init_pred_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__type_ctor_info_need_lock_unlock_preds_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__type_ctor_info_need_unsafe_get_set_preds_0)
};

static const MR_DuArgLocn hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__field_locns_mutable_target_params_0_0[6] = {
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
  }
};

static const MR_DuFunctorDesc hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__du_functor_desc_mutable_target_params_0_0 = {
  (MR_String) "mutable_target_params",
  INT16_C(6),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__make_hlds__add_mutable_aux_preds__hlds__make_hlds__add_mutable_aux_preds__field_types_mutable_target_params_0_0,
  NULL,
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
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__define_main_get_set_preds__1330__1_2_p_0(
  MR_Word AttachToIO_39,
  MR_Word HeadVar__2_256)
{
  {
    MR_bool succeeded = (AttachToIO_39 == HeadVar__2_256);

    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__define_unsafe_get_set_preds__1131__1_2_p_0(
  MR_Word IsConstant_33,
  MR_Word HeadVar__2_67)
{
  {
    MR_bool succeeded = (IsConstant_33 == HeadVar__2_67);

    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__define_lock_unlock_preds__1043__1_2_p_0(
  MR_Word IsConstant_33,
  MR_Word HeadVar__2_60)
{
  {
    MR_bool succeeded = (IsConstant_33 == HeadVar__2_60);

    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__define_pre_init_pred__981__1_2_p_0(
  MR_Word IsConstant_33,
  MR_Word HeadVar__2_53)
{
  {
    MR_bool succeeded = (IsConstant_33 == HeadVar__2_53);

    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__657__1_2_p_0(
  MR_Word Constraints_33,
  MR_Word HeadVar__2_74)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__prog_data____Unify____prog_constraints_0_0(Constraints_33, HeadVar__2_74);
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__655__1_2_p_0(
  MR_Word MaybeDetism_27,
  MR_Word HeadVar__2_69)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[6]), ((MR_Box) (MaybeDetism_27)), ((MR_Box) (HeadVar__2_69)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__654__1_2_p_0(
  MR_Word WithInst_26,
  MR_Word HeadVar__2_65)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[5]), ((MR_Box) (WithInst_26)), ((MR_Box) (HeadVar__2_65)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__653__1_2_p_0(
  MR_Word WithType_25,
  MR_Word HeadVar__2_61)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[4]), ((MR_Box) (WithType_25)), ((MR_Box) (HeadVar__2_61)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__651__1_2_p_0(
  MR_Word PredOrFunc_23,
  MR_Word HeadVar__2_57)
{
  {
    MR_bool succeeded = (PredOrFunc_23 == HeadVar__2_57);

    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__650__1_2_p_0(
  MR_Word ExistQVars_31,
  MR_Word HeadVar__2_53)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[3]), ((MR_Box) (ExistQVars_31)), ((MR_Box) (HeadVar__2_53)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__648__1_2_p_0(
  MR_Word InstVarSet_30,
  MR_Word HeadVar__2_49)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[1]), ((MR_Box) (InstVarSet_30)), ((MR_Box) (HeadVar__2_49)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__646__1_2_p_0(
  MR_Word TypeVarSet_29,
  MR_Word HeadVar__2_45)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[0]), ((MR_Box) (TypeVarSet_29)), ((MR_Box) (HeadVar__2_45)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_aux_pred_decls_for_mutable__468__1_2_p_0(
  MR_Word AttachToIO_33,
  MR_Word HeadVar__2_83)
{
  {
    MR_bool succeeded = (AttachToIO_33 == HeadVar__2_83);

    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_aux_pred_decls_for_mutable__466__1_2_p_0(
  MR_Word UnsafeAccess_30,
  MR_Word HeadVar__2_79)
{
  {
    MR_bool succeeded = (UnsafeAccess_30 == HeadVar__2_79);

    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_aux_pred_decls_for_mutable__464__1_2_p_0(
  MR_Word LockUnlock_29,
  MR_Word HeadVar__2_75)
{
  {
    MR_bool succeeded = (LockUnlock_29 == HeadVar__2_75);

    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_aux_pred_decls_for_mutable__462__1_2_p_0(
  MR_Word PreInit_28,
  MR_Word HeadVar__2_71)
{
  {
    MR_bool succeeded = (PreInit_28 == HeadVar__2_71);

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
    MR_Integer CastX_21 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_22 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_21 == CastY_22);
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
      MR_Word SubResult1_6;
      MR_Integer Var_29 = (MR_Integer) (ArgX1_4);
      MR_Integer Var_30 = (MR_Integer) (ArgY1_5);

      succeeded = (Var_29 < Var_30);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (Var_29 > Var_30);
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
        MR_Integer Var_31 = (MR_Integer) (ArgX2_7);
        MR_Integer Var_32 = (MR_Integer) (ArgY2_8);

        succeeded = (Var_31 < Var_32);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (Var_31 > Var_32);
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
          MR_Integer Var_33 = (MR_Integer) (ArgX3_10);
          MR_Integer Var_34 = (MR_Integer) (ArgY3_11);

          succeeded = (Var_33 < Var_34);
          if (succeeded)
          {
            SubResult3_12 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (Var_33 > Var_34);
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
            MR_Integer Var_35 = (MR_Integer) (ArgX4_13);
            MR_Integer Var_36 = (MR_Integer) (ArgY4_14);

            succeeded = (Var_35 < Var_36);
            if (succeeded)
            {
              SubResult4_15 = (MR_Integer) 1;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = (Var_35 > Var_36);
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
              MR_Integer Var_37 = (MR_Integer) (ArgX5_16);
              MR_Integer Var_38 = (MR_Integer) (ArgY5_17);

              succeeded = (Var_37 < Var_38);
              if (succeeded)
              {
                SubResult5_18 = (MR_Integer) 1;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = (Var_37 > Var_38);
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
                MR_Integer Var_39 = (MR_Integer) (ArgX6_19);
                MR_Integer Var_40 = (MR_Integer) (ArgY6_20);

                succeeded = (Var_39 < Var_40);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 1;
                else
                {
                  succeeded = (Var_39 > Var_40);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 2;
                  else
                    *HeadVar__1_1 = (MR_Integer) 0;
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
    MR_Integer CastX_15 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_16 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_15 == CastY_16);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
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
                succeeded = (ArgX6_13 == ArgY6_14);
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
  MR_Word STATE_VARIABLE_ModuleInfo_0_36,
  MR_Word * STATE_VARIABLE_ModuleInfo_37,
  MR_Word STATE_VARIABLE_QualInfo_0_38,
  MR_Word * STATE_VARIABLE_QualInfo_39,
  MR_Word STATE_VARIABLE_Specs_0_40,
  MR_Word * STATE_VARIABLE_Specs_41)
{
  {
    MR_bool succeeded;
    MR_String MutableName_14 = ((MR_String) ((MR_hl_field(MR_mktag(0), ItemMutable_9, (MR_Integer) 0))));
    MR_Word Type_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable_9, (MR_Integer) 2))));
    MR_Word MutAttrs_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable_9, (MR_Integer) 7))));
    MR_Word Context_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable_9, (MR_Integer) 8))));
    MR_Word TargetParams_25;
    MR_Word ImplLang_26;
    MR_Word Lang_27;
    MR_Word _BoxPolicy_28;
    MR_Word _PreInit_29;
    MR_Word _LockUnlock_30;
    MR_Word _UnsafeAccess_31;
    MR_Word IsConstant_32;
    MR_Word IsThreadLocal_33;
    MR_Word ModuleName_34;
    MR_String TargetMutableName_35;
    MR_Word STATE_VARIABLE_ModuleInfo_44_44;
    MR_Word Globals_51;
    MR_Word CompilationTarget_52;
    MR_Word PreInit0_55;
    MR_Word LockUnlock0_56;
    MR_Word UnsafeAccess0_57;
    MR_Word IsConstant_61;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_36, &Globals_51);
    libs__globals__get_target_2_p_0(Globals_51, &CompilationTarget_52);
    switch (CompilationTarget_52) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word HighLevelCode_58;

          ImplLang_26 = (MR_Integer) 0;
          Lang_27 = (MR_Integer) 0;
          PreInit0_55 = (MR_Integer) 1;
          LockUnlock0_56 = (MR_Integer) 1;
          UnsafeAccess0_57 = (MR_Integer) 1;
          libs__globals__lookup_bool_option_3_p_0(Globals_51, (MR_Integer) 281, &HighLevelCode_58);
          switch (HighLevelCode_58) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              _BoxPolicy_28 = (MR_Integer) 1;
              break;
            case (MR_Integer) 1:
              _BoxPolicy_28 = (MR_Integer) 0;
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word IsThreadLocal_60;

          ImplLang_26 = (MR_Integer) 1;
          Lang_27 = (MR_Integer) 1;
          IsThreadLocal_60 = parse_tree__prog_item__mutable_var_thread_local_1_f_0(MutAttrs_21);
          switch (IsThreadLocal_60) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              PreInit0_55 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              PreInit0_55 = (MR_Integer) 1;
              break;
          }
          LockUnlock0_56 = (MR_Integer) 0;
          UnsafeAccess0_57 = (MR_Integer) 1;
          _BoxPolicy_28 = (MR_Integer) 0;
        }
        break;
      case (MR_Integer) 3:
        {
          ImplLang_26 = (MR_Integer) 3;
          Lang_27 = (MR_Integer) 3;
          PreInit0_55 = (MR_Integer) 0;
          LockUnlock0_56 = (MR_Integer) 0;
          UnsafeAccess0_57 = (MR_Integer) 0;
          _BoxPolicy_28 = (MR_Integer) 0;
        }
        break;
      case (MR_Integer) 2:
        {
          ImplLang_26 = (MR_Integer) 2;
          Lang_27 = (MR_Integer) 2;
          PreInit0_55 = (MR_Integer) 0;
          LockUnlock0_56 = (MR_Integer) 0;
          UnsafeAccess0_57 = (MR_Integer) 1;
          _BoxPolicy_28 = (MR_Integer) 0;
        }
        break;
    }
    IsConstant_61 = parse_tree__prog_item__mutable_var_constant_1_f_0(MutAttrs_21);
    switch (IsConstant_61) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          _PreInit_29 = (MR_Integer) 0;
          _LockUnlock_30 = (MR_Integer) 0;
          _UnsafeAccess_31 = (MR_Integer) 0;
        }
        break;
      case (MR_Integer) 0:
        {
          _PreInit_29 = PreInit0_55;
          _LockUnlock_30 = LockUnlock0_56;
          _UnsafeAccess_31 = UnsafeAccess0_57;
        }
        break;
    }
    {
      TargetParams_25 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TargetParams_25, 0) = (MR_Box) (((((MR_Unsigned) (ImplLang_26) << 6)) | (((((MR_Unsigned) (Lang_27) << 4)) | (((((MR_Unsigned) (_BoxPolicy_28) << 3)) | (((((MR_Unsigned) (_PreInit_29) << 2)) | (((((MR_Unsigned) (_LockUnlock_30) << 1)) | (MR_Unsigned) (_UnsafeAccess_31)))))))))));
    }
    IsConstant_32 = parse_tree__prog_item__mutable_var_constant_1_f_0(MutAttrs_21);
    IsThreadLocal_33 = parse_tree__prog_item__mutable_var_thread_local_1_f_0(MutAttrs_21);
    hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_ModuleInfo_0_36, &ModuleName_34);
    hlds__make_hlds__add_mutable_aux_preds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_109_117_116_97_98_108_101_95_116_97_114_103_101_116_95_118_97_114_95_110_97_109_101_95_95_91_54_93_95_48_7_p_0(STATE_VARIABLE_ModuleInfo_0_36, MutAttrs_21, ModuleName_34, MutableName_14, Lang_27, &TargetMutableName_35);
    switch (ImplLang_26) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        hlds__make_hlds__add_mutable_aux_preds__define_global_var_c_7_p_0(TargetMutableName_35, Type_16, IsConstant_32, IsThreadLocal_33, Context_22, STATE_VARIABLE_ModuleInfo_0_36, &STATE_VARIABLE_ModuleInfo_44_44);
        break;
      case (MR_Integer) 1:
        {
          MR_String TypeStr_74;
          MR_String DefnBody_75;
          MR_Word DefnForeignBodyCode_76;
          MR_String Var_78;
          MR_String Var_79;
          MR_String Var_81;
          MR_Word Var_84;

          switch (IsThreadLocal_33) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Var_86;

                Var_86 = parse_tree__builtin_lib_types__int_type_0_f_0();
                succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Type_16, Var_86);
                if (succeeded)
                  TypeStr_74 = (MR_String) "int";
                else
                  TypeStr_74 = (MR_String) "object";
              }
              break;
            case (MR_Integer) 1:
              TypeStr_74 = (MR_String) "int";
              break;
          }
          Var_81 = mercury__string__f_43_43_2_f_0(TargetMutableName_35, (MR_String) ";\n");
          Var_79 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_81);
          Var_78 = mercury__string__f_43_43_2_f_0(TypeStr_74, Var_79);
          DefnBody_75 = mercury__string__f_43_43_2_f_0((MR_String) "static ", Var_78);
          {
            Var_84 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_84, 0) = ((MR_Box) (DefnBody_75));
          }
          {
            DefnForeignBodyCode_76 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), DefnForeignBodyCode_76, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), DefnForeignBodyCode_76, 1) = ((MR_Box) (Var_84));
            MR_hl_field(MR_mktag(0), DefnForeignBodyCode_76, 2) = ((MR_Box) (Context_22));
          }
          hlds__hlds_module__module_add_foreign_body_code_3_p_0(DefnForeignBodyCode_76, STATE_VARIABLE_ModuleInfo_0_36, &STATE_VARIABLE_ModuleInfo_44_44);
        }
        break;
      case (MR_Integer) 3:
        STATE_VARIABLE_ModuleInfo_44_44 = STATE_VARIABLE_ModuleInfo_0_36;
        break;
      case (MR_Integer) 2:
        hlds__make_hlds__add_mutable_aux_preds__define_global_var_java_6_p_0(TargetMutableName_35, Type_16, IsThreadLocal_33, Context_22, STATE_VARIABLE_ModuleInfo_0_36, &STATE_VARIABLE_ModuleInfo_44_44);
        break;
    }
    hlds__make_hlds__add_mutable_aux_preds__define_aux_preds_10_p_0(ItemMutable_9, TargetParams_25, TargetMutableName_35, PredStatus_10, STATE_VARIABLE_ModuleInfo_44_44, STATE_VARIABLE_ModuleInfo_37, STATE_VARIABLE_QualInfo_0_38, STATE_VARIABLE_QualInfo_39, STATE_VARIABLE_Specs_0_40, STATE_VARIABLE_Specs_41);
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
    MR_Word MaybeForeignNames_15;

    MaybeForeignNames_15 = parse_tree__prog_item__mutable_var_maybe_foreign_names_1_f_0(MutAttrs_9);
    if ((MaybeForeignNames_15 == (MR_Word) ((MR_Unsigned) 0U)))
      *TargetMutableName_14 = parse_tree__prog_mutable__mutable_c_var_name_2_f_0(ModuleName_10, MutableName_11);
    else
    {
      MR_Word ForeignNames_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeForeignNames_15, (MR_Integer) 0))));
      MR_Word TargetMutableNames_29;

      hlds__make_hlds__add_mutable_aux_preds__get_matching_foreign_names_3_p_0(ForeignNames_16, ForeignLanguage_12, &TargetMutableNames_29);
      if ((TargetMutableNames_29 == (MR_Word) ((MR_Unsigned) 0U)))
        *TargetMutableName_14 = parse_tree__prog_mutable__mutable_c_var_name_2_f_0(ModuleName_10, MutableName_11);
      else
      {
        MR_Word Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TargetMutableNames_29, (MR_Integer) 1))));
        MR_Word Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TargetMutableNames_29, (MR_Integer) 0))));

        if ((Var_64 == (MR_Word) ((MR_Unsigned) 0U)))
          *TargetMutableName_14 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_65, (MR_Integer) 1))));
        else
        {
          MR_Word Globals_34;
          MR_Word CompilationTarget_35;
          MR_String Var_47;

          hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_8, &Globals_34);
          libs__globals__get_target_2_p_0(Globals_34, &CompilationTarget_35);
          Var_47 = libs__globals__compilation_target_string_1_f_0(CompilationTarget_35);
          *TargetMutableName_14 = parse_tree__prog_mutable__mutable_c_var_name_2_f_0(ModuleName_10, MutableName_11);
        }
      }
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_aux_preds_10_p_0(
  MR_Word ItemMutable_11,
  MR_Word TargetParams_12,
  MR_String TargetMutableName_13,
  MR_Word PredStatus_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_34,
  MR_Word * STATE_VARIABLE_ModuleInfo_35,
  MR_Word STATE_VARIABLE_QualInfo_0_36,
  MR_Word * STATE_VARIABLE_QualInfo_37,
  MR_Word STATE_VARIABLE_Specs_0_38,
  MR_Word * STATE_VARIABLE_Specs_39)
{
  {
    MR_Word ImplLang_18 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), TargetParams_12, (MR_Integer) 0))) >> 6)) & (MR_Integer) 3);
    MR_Word Lang_19 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), TargetParams_12, (MR_Integer) 0))) >> 4)) & (MR_Integer) 3);
    MR_Word BoxPolicy_20 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), TargetParams_12, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);
    MR_Word PreInit_21 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), TargetParams_12, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
    MR_Word LockUnlock_22 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), TargetParams_12, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    MR_Word UnsafeAccess_23 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), TargetParams_12, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word Attrs0_24;
    MR_Word Attrs_26;
    MR_Word MaybeCallPreInitExpr_27;
    MR_Word MaybeLockUnlockExprs_29;
    MR_Word MaybeUnsafeGetSetExprs_31;
    MR_Word InitSetPredName_33;
    MR_Word STATE_VARIABLE_ModuleInfo_43_43;
    MR_Word STATE_VARIABLE_QualInfo_44_44;
    MR_Word STATE_VARIABLE_Specs_45_45;
    MR_Word STATE_VARIABLE_ModuleInfo_46_46;
    MR_Word STATE_VARIABLE_QualInfo_47_47;
    MR_Word STATE_VARIABLE_Specs_48_48;
    MR_Word STATE_VARIABLE_ModuleInfo_49_49;
    MR_Word STATE_VARIABLE_QualInfo_50_50;
    MR_Word STATE_VARIABLE_Specs_51_51;
    MR_Word STATE_VARIABLE_ModuleInfo_52_52;
    MR_Word STATE_VARIABLE_QualInfo_53_53;
    MR_Word STATE_VARIABLE_Specs_54_54;

    Attrs0_24 = parse_tree__prog_data_foreign__default_attributes_1_f_0(Lang_19);
    switch (ImplLang_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Attrs1_25;

          parse_tree__prog_data_foreign__set_box_policy_3_p_0(BoxPolicy_20, Attrs0_24, &Attrs1_25);
          parse_tree__prog_data_foreign__set_may_call_mercury_3_p_0((MR_Integer) 1, Attrs1_25, &Attrs_26);
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          parse_tree__prog_data_foreign__set_may_duplicate_3_p_0((MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_2[3])), Attrs0_24, &Attrs_26);
        }
        break;
      case (MR_Integer) 3:
        Attrs_26 = Attrs0_24;
        break;
    }
    switch (PreInit_21) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MaybeCallPreInitExpr_27 = (MR_Word) ((MR_Unsigned) 0U);
          STATE_VARIABLE_ModuleInfo_43_43 = STATE_VARIABLE_ModuleInfo_0_34;
          STATE_VARIABLE_QualInfo_44_44 = STATE_VARIABLE_QualInfo_0_36;
          STATE_VARIABLE_Specs_45_45 = STATE_VARIABLE_Specs_0_38;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word CallPreInitExpr_28;

          hlds__make_hlds__add_mutable_aux_preds__define_pre_init_pred_12_p_0(ItemMutable_11, TargetParams_12, TargetMutableName_13, Attrs_26, &CallPreInitExpr_28, PredStatus_14, STATE_VARIABLE_ModuleInfo_0_34, &STATE_VARIABLE_ModuleInfo_43_43, STATE_VARIABLE_QualInfo_0_36, &STATE_VARIABLE_QualInfo_44_44, STATE_VARIABLE_Specs_0_38, &STATE_VARIABLE_Specs_45_45);
          {
            MaybeCallPreInitExpr_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeCallPreInitExpr_27, 0) = ((MR_Box) (CallPreInitExpr_28));
          }
        }
        break;
    }
    switch (LockUnlock_22) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MaybeLockUnlockExprs_29 = (MR_Word) ((MR_Unsigned) 0U);
          STATE_VARIABLE_ModuleInfo_46_46 = STATE_VARIABLE_ModuleInfo_43_43;
          STATE_VARIABLE_QualInfo_47_47 = STATE_VARIABLE_QualInfo_44_44;
          STATE_VARIABLE_Specs_48_48 = STATE_VARIABLE_Specs_45_45;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Tuple LockUnlockExprs_30;

          hlds__make_hlds__add_mutable_aux_preds__define_lock_unlock_preds_12_p_0(ItemMutable_11, TargetParams_12, TargetMutableName_13, Attrs_26, &LockUnlockExprs_30, PredStatus_14, STATE_VARIABLE_ModuleInfo_43_43, &STATE_VARIABLE_ModuleInfo_46_46, STATE_VARIABLE_QualInfo_44_44, &STATE_VARIABLE_QualInfo_47_47, STATE_VARIABLE_Specs_45_45, &STATE_VARIABLE_Specs_48_48);
          {
            MaybeLockUnlockExprs_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeLockUnlockExprs_29, 0) = ((MR_Box) (LockUnlockExprs_30));
          }
        }
        break;
    }
    switch (UnsafeAccess_23) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MaybeUnsafeGetSetExprs_31 = (MR_Word) ((MR_Unsigned) 0U);
          STATE_VARIABLE_ModuleInfo_49_49 = STATE_VARIABLE_ModuleInfo_46_46;
          STATE_VARIABLE_QualInfo_50_50 = STATE_VARIABLE_QualInfo_47_47;
          STATE_VARIABLE_Specs_51_51 = STATE_VARIABLE_Specs_48_48;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Tuple UnsafeGetSetExprs_32;

          hlds__make_hlds__add_mutable_aux_preds__define_unsafe_get_set_preds_12_p_0(ItemMutable_11, TargetParams_12, TargetMutableName_13, Attrs_26, &UnsafeGetSetExprs_32, PredStatus_14, STATE_VARIABLE_ModuleInfo_46_46, &STATE_VARIABLE_ModuleInfo_49_49, STATE_VARIABLE_QualInfo_47_47, &STATE_VARIABLE_QualInfo_50_50, STATE_VARIABLE_Specs_48_48, &STATE_VARIABLE_Specs_51_51);
          {
            MaybeUnsafeGetSetExprs_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeUnsafeGetSetExprs_31, 0) = ((MR_Box) (UnsafeGetSetExprs_32));
          }
        }
        break;
    }
    hlds__make_hlds__add_mutable_aux_preds__define_main_get_set_preds_14_p_0(ItemMutable_11, TargetParams_12, TargetMutableName_13, Attrs_26, MaybeLockUnlockExprs_29, MaybeUnsafeGetSetExprs_31, &InitSetPredName_33, PredStatus_14, STATE_VARIABLE_ModuleInfo_49_49, &STATE_VARIABLE_ModuleInfo_52_52, STATE_VARIABLE_QualInfo_50_50, &STATE_VARIABLE_QualInfo_53_53, STATE_VARIABLE_Specs_51_51, &STATE_VARIABLE_Specs_54_54);
    hlds__make_hlds__add_mutable_aux_preds__define_init_pred_11_p_0(ItemMutable_11, MaybeCallPreInitExpr_27, InitSetPredName_33, Lang_19, PredStatus_14, STATE_VARIABLE_ModuleInfo_52_52, STATE_VARIABLE_ModuleInfo_35, STATE_VARIABLE_QualInfo_53_53, STATE_VARIABLE_QualInfo_37, STATE_VARIABLE_Specs_54_54, STATE_VARIABLE_Specs_39);
  }
}

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_init_pred_11_p_0(
  MR_Word ItemMutable_12,
  MR_Word MaybeCallPreInitExpr_13,
  MR_Word InitSetPredName_14,
  MR_Word Lang_15,
  MR_Word PredStatus_16,
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
    MR_String CName_73;
    MR_Word PredNameModesPF_74;
    MR_Word FPEInfo_75;
    MR_Word STATE_VARIABLE_ModuleInfo_24_78;

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
      MR_hl_field(MR_mktag(1), CallSetExpr_35, 1) = ((MR_Box) (InitSetPredName_14));
      MR_hl_field(MR_mktag(1), CallSetExpr_35, 2) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(1), CallSetExpr_35, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
    }
    {
      UnifyCallSetExpr_36 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), UnifyCallSetExpr_36, 0) = ((MR_Box) (Context_29));
      MR_hl_field(MR_mktag(2), UnifyCallSetExpr_36, 1) = ((MR_Box) (UnifyExpr_34));
      MR_hl_field(MR_mktag(2), UnifyCallSetExpr_36, 2) = ((MR_Box) (CallSetExpr_35));
    }
    if ((MaybeCallPreInitExpr_13 == (MR_Word) ((MR_Unsigned) 0U)))
      InitPredExpr_37 = UnifyCallSetExpr_36;
    else
    {
      MR_Word CallPreInitExpr_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCallPreInitExpr_13, (MR_Integer) 0))));

      {
        InitPredExpr_37 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), InitPredExpr_37, 0) = ((MR_Box) (Context_29));
        MR_hl_field(MR_mktag(2), InitPredExpr_37, 1) = ((MR_Box) (CallPreInitExpr_38));
        MR_hl_field(MR_mktag(2), InitPredExpr_37, 2) = ((MR_Box) (UnifyCallSetExpr_36));
      }
    }
    InitPredName_39 = parse_tree__prog_mutable__mutable_init_pred_sym_name_2_f_0(ModuleName_20, MutableName_21);
    {
      Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (InitPredExpr_37));
    }
    hlds__make_hlds__add_clause__module_add_clause_15_p_0(VarSetMutableX_32, (MR_Integer) 0, InitPredName_39, (MR_Word) ((MR_Unsigned) 0U), Var_54, PredStatus_16, Context_29, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 12U), STATE_VARIABLE_ModuleInfo_0_41, &STATE_VARIABLE_ModuleInfo_57_57, STATE_VARIABLE_QualInfo_0_43, STATE_VARIABLE_QualInfo_44, STATE_VARIABLE_Specs_0_45, &STATE_VARIABLE_Specs_59_59);
    hlds__hlds_module__module_info_new_user_init_pred_5_p_0(InitPredName_39, (MR_Integer) 0, &CName_73, STATE_VARIABLE_ModuleInfo_57_57, &STATE_VARIABLE_ModuleInfo_24_78);
    {
      PredNameModesPF_74 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), PredNameModesPF_74, 0) = ((MR_Box) (InitPredName_39));
      MR_hl_field(MR_mktag(0), PredNameModesPF_74, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), PredNameModesPF_74, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    {
      FPEInfo_75 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), FPEInfo_75, 0) = (MR_Box) ((MR_Unsigned) (Lang_15));
      MR_hl_field(MR_mktag(0), FPEInfo_75, 1) = ((MR_Box) (PredNameModesPF_74));
      MR_hl_field(MR_mktag(0), FPEInfo_75, 2) = ((MR_Box) (CName_73));
    }
    hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_export_7_p_0((MR_Word) (MR_mkword(MR_mktag(1), ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_2[2])))), FPEInfo_75, Context_29, STATE_VARIABLE_ModuleInfo_24_78, STATE_VARIABLE_ModuleInfo_42, STATE_VARIABLE_Specs_59_59, STATE_VARIABLE_Specs_46);
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_main_get_set_preds_14_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__define_main_get_set_preds__1330__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_main_get_set_preds_14_p_0(
  MR_Word ItemMutable_15,
  MR_Word TargetParams_16,
  MR_String TargetMutableName_17,
  MR_Word Attrs_18,
  MR_Word MaybeLockUnlockExprs_19,
  MR_Word MaybeUnsafeGetSetExprs_20,
  MR_Word * InitSetPredName_21,
  MR_Word PredStatus_22,
  MR_Word STATE_VARIABLE_ModuleInfo_0_87,
  MR_Word * STATE_VARIABLE_ModuleInfo_88,
  MR_Word STATE_VARIABLE_QualInfo_0_89,
  MR_Word * STATE_VARIABLE_QualInfo_90,
  MR_Word STATE_VARIABLE_Specs_0_91,
  MR_Word * STATE_VARIABLE_Specs_92)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_26;
    MR_String MutableName_27;
    MR_Word Inst_31;
    MR_Word MutAttrs_34;
    MR_Word Context_35;
    MR_Word IsConstant_37;
    MR_Word IsThreadLocal_38;
    MR_Word AttachToIO_39;
    MR_Word ImplLang_40;
    MR_Word BoxPolicy_42;
    MR_Word X_46;
    MR_Word VarSetOnlyX_47;
    MR_Word Var_94;

    hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_ModuleInfo_0_87, &ModuleName_26);
    MutableName_27 = ((MR_String) ((MR_hl_field(MR_mktag(0), ItemMutable_15, (MR_Integer) 0))));
    Inst_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable_15, (MR_Integer) 4))));
    MutAttrs_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable_15, (MR_Integer) 7))));
    Context_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable_15, (MR_Integer) 8))));
    IsConstant_37 = parse_tree__prog_item__mutable_var_constant_1_f_0(MutAttrs_34);
    IsThreadLocal_38 = parse_tree__prog_item__mutable_var_thread_local_1_f_0(MutAttrs_34);
    AttachToIO_39 = parse_tree__prog_item__mutable_var_attach_to_io_state_1_f_0(MutAttrs_34);
    ImplLang_40 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), TargetParams_16, (MR_Integer) 0))) >> 6)) & (MR_Integer) 3);
    BoxPolicy_42 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), TargetParams_16, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);
    Var_94 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
    mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_String) "X", &X_46, Var_94, &VarSetOnlyX_47);
    switch (IsConstant_37) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word ConstantGetPredName_48;
          MR_Word ConstantGetAttrs0_50;
          MR_Word ConstantGetAttrs_51;
          MR_String ConstantGetCode_53;
          MR_String ConstantSetCode_54;
          MR_Word ConstantGetFCInfo_55;
          MR_Word ConstantSetFCInfo_56;
          MR_Word Var_230;
          MR_Word Var_231;
          MR_Word Var_233;
          MR_Word Var_235;
          MR_Word Var_236;
          MR_Word Var_237;
          MR_Word Var_239;
          MR_Word Var_240;
          MR_Word Var_242;
          MR_Word Var_244;
          MR_Word Var_245;
          MR_Word STATE_VARIABLE_ModuleInfo_248_248;
          MR_Word STATE_VARIABLE_Specs_249_249;
          MR_Word Var_253;

          ConstantGetPredName_48 = parse_tree__prog_mutable__mutable_get_pred_sym_name_2_f_0(ModuleName_26, MutableName_27);
          *InitSetPredName_21 = parse_tree__prog_mutable__mutable_secret_set_pred_sym_name_2_f_0(ModuleName_26, MutableName_27);
          parse_tree__prog_data_foreign__set_purity_3_p_0((MR_Integer) 0, Attrs_18, &ConstantGetAttrs0_50);
          parse_tree__prog_data_foreign__set_thread_safe_3_p_0((MR_Integer) 1, ConstantGetAttrs0_50, &ConstantGetAttrs_51);
          switch (ImplLang_40) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              {
                MR_String Var_226;

                Var_226 = mercury__string__f_43_43_2_f_0(TargetMutableName_17, (MR_String) ";\n");
                ConstantGetCode_53 = mercury__string__f_43_43_2_f_0((MR_String) "X = ", Var_226);
                ConstantSetCode_54 = mercury__string__f_43_43_2_f_0(TargetMutableName_17, (MR_String) " = X;\n");
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Var_208;
                MR_Word Var_210;
                MR_String Var_223;

                {
                  Var_210 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_210, 0) = ((MR_Box) (TargetMutableName_17));
                  MR_hl_field(MR_mktag(1), Var_210, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[39])));
                }
                {
                  Var_208 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_208, 0) = ((MR_Box) ((MR_String) "\'ML_erlang_global_server\' ! {get_mutable, "));
                  MR_hl_field(MR_mktag(1), Var_208, 1) = ((MR_Box) (Var_210));
                }
                ConstantGetCode_53 = mercury__string__append_list_1_f_0(Var_208);
                Var_223 = mercury__string__f_43_43_2_f_0(TargetMutableName_17, (MR_String) ", X}");
                ConstantSetCode_54 = mercury__string__f_43_43_2_f_0((MR_String) "\'ML_erlang_global_server\' ! {set_mutable, ", Var_223);
              }
              break;
          }
          Var_233 = parse_tree__prog_mode__out_mode_1_f_0(Inst_31);
          {
            Var_231 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_231, 0) = ((MR_Box) (X_46));
            MR_hl_field(MR_mktag(0), Var_231, 1) = ((MR_Box) ((MR_String) "X"));
            MR_hl_field(MR_mktag(0), Var_231, 2) = ((MR_Box) (Var_233));
            MR_hl_field(MR_mktag(0), Var_231, 3) = (MR_Box) ((MR_Unsigned) (BoxPolicy_42));
          }
          {
            Var_230 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_230, 0) = ((MR_Box) (Var_231));
            MR_hl_field(MR_mktag(1), Var_230, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Var_235 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0));
          {
            Var_237 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_237, 0) = ((MR_Box) (Context_35));
          }
          {
            Var_236 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_236, 0) = ((MR_Box) (ConstantGetCode_53));
            MR_hl_field(MR_mktag(0), Var_236, 1) = ((MR_Box) (Var_237));
          }
          {
            ConstantGetFCInfo_55 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ConstantGetFCInfo_55, 0) = ((MR_Box) (ConstantGetAttrs_51));
            MR_hl_field(MR_mktag(0), ConstantGetFCInfo_55, 1) = ((MR_Box) (ConstantGetPredName_48));
            MR_hl_field(MR_mktag(0), ConstantGetFCInfo_55, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(0), ConstantGetFCInfo_55, 3) = ((MR_Box) (Var_230));
            MR_hl_field(MR_mktag(0), ConstantGetFCInfo_55, 4) = ((MR_Box) (VarSetOnlyX_47));
            MR_hl_field(MR_mktag(0), ConstantGetFCInfo_55, 5) = ((MR_Box) (Var_235));
            MR_hl_field(MR_mktag(0), ConstantGetFCInfo_55, 6) = ((MR_Box) (Var_236));
          }
          Var_242 = parse_tree__prog_mode__in_mode_1_f_0(Inst_31);
          {
            Var_240 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_240, 0) = ((MR_Box) (X_46));
            MR_hl_field(MR_mktag(0), Var_240, 1) = ((MR_Box) ((MR_String) "X"));
            MR_hl_field(MR_mktag(0), Var_240, 2) = ((MR_Box) (Var_242));
            MR_hl_field(MR_mktag(0), Var_240, 3) = (MR_Box) ((MR_Unsigned) (BoxPolicy_42));
          }
          {
            Var_239 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_239, 0) = ((MR_Box) (Var_240));
            MR_hl_field(MR_mktag(1), Var_239, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Var_244 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0));
          {
            Var_245 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_245, 0) = ((MR_Box) (ConstantSetCode_54));
            MR_hl_field(MR_mktag(0), Var_245, 1) = ((MR_Box) (Var_237));
          }
          {
            ConstantSetFCInfo_56 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ConstantSetFCInfo_56, 0) = ((MR_Box) (Attrs_18));
            MR_hl_field(MR_mktag(0), ConstantSetFCInfo_56, 1) = ((MR_Box) (*InitSetPredName_21));
            MR_hl_field(MR_mktag(0), ConstantSetFCInfo_56, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(0), ConstantSetFCInfo_56, 3) = ((MR_Box) (Var_239));
            MR_hl_field(MR_mktag(0), ConstantSetFCInfo_56, 4) = ((MR_Box) (VarSetOnlyX_47));
            MR_hl_field(MR_mktag(0), ConstantSetFCInfo_56, 5) = ((MR_Box) (Var_244));
            MR_hl_field(MR_mktag(0), ConstantSetFCInfo_56, 6) = ((MR_Box) (Var_245));
          }
          hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(ConstantGetFCInfo_55, PredStatus_22, Context_35, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModuleInfo_0_87, &STATE_VARIABLE_ModuleInfo_248_248, STATE_VARIABLE_Specs_0_91, &STATE_VARIABLE_Specs_249_249);
          hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(ConstantSetFCInfo_56, PredStatus_22, Context_35, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModuleInfo_248_248, STATE_VARIABLE_ModuleInfo_88, STATE_VARIABLE_Specs_249_249, STATE_VARIABLE_Specs_92);
          {
            Var_253 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_253, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_3[11]));
            MR_hl_field(MR_mktag(0), Var_253, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__define_main_get_set_preds_14_p_0_1));
            MR_hl_field(MR_mktag(0), Var_253, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_253, 3) = ((MR_Box) (AttachToIO_39));
            MR_hl_field(MR_mktag(0), Var_253, 4) = ((MR_Box) ((MR_Integer) 0));
          }
          mercury__require__expect_3_p_0(Var_253, (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.define_main_get_set_preds\'/14", (MR_String) "AttachToIO = mutable_attach_to_io_state");
          *STATE_VARIABLE_QualInfo_90 = STATE_VARIABLE_QualInfo_0_89;
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word StdGetPredName_57;
          MR_Word ImpureGetExpr_61;
          MR_Word ImpureSetExpr_62;
          MR_Word STATE_VARIABLE_ModuleInfo_173_173;
          MR_Word STATE_VARIABLE_QualInfo_174_174;
          MR_Word STATE_VARIABLE_Specs_175_175;

          StdGetPredName_57 = parse_tree__prog_mutable__mutable_get_pred_sym_name_2_f_0(ModuleName_26, MutableName_27);
          *InitSetPredName_21 = parse_tree__prog_mutable__mutable_set_pred_sym_name_2_f_0(ModuleName_26, MutableName_27);
          switch (ImplLang_40) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              {
                MR_Word CallUnsafeGetExpr_59;
                MR_Word CallUnsafeSetExpr_60;
                MR_Word StdPredArgs_65;
                MR_Word StdGetPredExpr_66;
                MR_Word Var_159;
                MR_Word Var_163;
                MR_Word STATE_VARIABLE_ModuleInfo_166_166;
                MR_Word STATE_VARIABLE_QualInfo_167_167;
                MR_Word STATE_VARIABLE_Specs_168_168;
                MR_Word Var_170;

                if ((MaybeUnsafeGetSetExprs_20 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.define_main_get_set_preds\'/14", (MR_String) "mutable_not_constant but MaybeUnsafeGetSetExprs = no");
                    return;
                  }
                }
                else
                {
                  MR_Tuple Var_155 = ((MR_Tuple) ((MR_hl_field(MR_mktag(1), MaybeUnsafeGetSetExprs_20, (MR_Integer) 0))));

                  CallUnsafeGetExpr_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_155, (MR_Integer) 0))));
                  CallUnsafeSetExpr_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_155, (MR_Integer) 1))));
                }
                if ((MaybeLockUnlockExprs_19 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  ImpureGetExpr_61 = CallUnsafeGetExpr_59;
                  ImpureSetExpr_62 = CallUnsafeSetExpr_60;
                }
                else
                {
                  MR_Word CallLockExpr_63;
                  MR_Word CallUnlockExpr_64;
                  MR_Tuple Var_156 = ((MR_Tuple) ((MR_hl_field(MR_mktag(1), MaybeLockUnlockExprs_19, (MR_Integer) 0))));
                  MR_Word Var_157;
                  MR_Word Var_158;

                  CallLockExpr_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_156, (MR_Integer) 0))));
                  CallUnlockExpr_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_156, (MR_Integer) 1))));
                  {
                    Var_157 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), Var_157, 0) = ((MR_Box) (Context_35));
                    MR_hl_field(MR_mktag(2), Var_157, 1) = ((MR_Box) (CallUnsafeGetExpr_59));
                    MR_hl_field(MR_mktag(2), Var_157, 2) = ((MR_Box) (CallUnlockExpr_64));
                  }
                  {
                    ImpureGetExpr_61 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), ImpureGetExpr_61, 0) = ((MR_Box) (Context_35));
                    MR_hl_field(MR_mktag(2), ImpureGetExpr_61, 1) = ((MR_Box) (CallLockExpr_63));
                    MR_hl_field(MR_mktag(2), ImpureGetExpr_61, 2) = ((MR_Box) (Var_157));
                  }
                  {
                    Var_158 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), Var_158, 0) = ((MR_Box) (Context_35));
                    MR_hl_field(MR_mktag(2), Var_158, 1) = ((MR_Box) (CallUnsafeSetExpr_60));
                    MR_hl_field(MR_mktag(2), Var_158, 2) = ((MR_Box) (CallUnlockExpr_64));
                  }
                  {
                    ImpureSetExpr_62 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), ImpureSetExpr_62, 0) = ((MR_Box) (Context_35));
                    MR_hl_field(MR_mktag(2), ImpureSetExpr_62, 1) = ((MR_Box) (CallLockExpr_63));
                    MR_hl_field(MR_mktag(2), ImpureSetExpr_62, 2) = ((MR_Box) (Var_158));
                  }
                }
                {
                  Var_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_159, 0) = ((MR_Box) (X_46));
                  MR_hl_field(MR_mktag(1), Var_159, 1) = ((MR_Box) (Context_35));
                }
                {
                  StdPredArgs_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), StdPredArgs_65, 0) = ((MR_Box) (Var_159));
                  MR_hl_field(MR_mktag(1), StdPredArgs_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  StdGetPredExpr_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), StdGetPredExpr_66, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                  MR_hl_field(MR_mktag(3), StdGetPredExpr_66, 1) = ((MR_Box) (Context_35));
                  MR_hl_field(MR_mktag(3), StdGetPredExpr_66, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), StdGetPredExpr_66, 3) = ((MR_Box) (ImpureGetExpr_61));
                }
                {
                  Var_163 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_163, 0) = ((MR_Box) (StdGetPredExpr_66));
                }
                hlds__make_hlds__add_clause__module_add_clause_15_p_0(VarSetOnlyX_47, (MR_Integer) 0, StdGetPredName_57, StdPredArgs_65, Var_163, PredStatus_22, Context_35, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 12U), STATE_VARIABLE_ModuleInfo_0_87, &STATE_VARIABLE_ModuleInfo_166_166, STATE_VARIABLE_QualInfo_0_89, &STATE_VARIABLE_QualInfo_167_167, STATE_VARIABLE_Specs_0_91, &STATE_VARIABLE_Specs_168_168);
                {
                  Var_170 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_170, 0) = ((MR_Box) (ImpureSetExpr_62));
                }
                hlds__make_hlds__add_clause__module_add_clause_15_p_0(VarSetOnlyX_47, (MR_Integer) 0, *InitSetPredName_21, StdPredArgs_65, Var_170, PredStatus_22, Context_35, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 12U), STATE_VARIABLE_ModuleInfo_166_166, &STATE_VARIABLE_ModuleInfo_173_173, STATE_VARIABLE_QualInfo_167_167, &STATE_VARIABLE_QualInfo_174_174, STATE_VARIABLE_Specs_168_168, &STATE_VARIABLE_Specs_175_175);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word ThreadSafeAttrs_68;
                MR_Word ErlangGetAttrs_69;
                MR_Word ErlangSetAttrs_70;
                MR_String StdGetCode_71;
                MR_String StdSetCode_72;
                MR_Word StdGetFCInfo_73;
                MR_Word StdSetFCInfo_74;
                MR_Word Var_122;
                MR_Word Var_123;
                MR_Word Var_125;
                MR_Word Var_127;
                MR_Word Var_128;
                MR_Word Var_129;
                MR_Word Var_131;
                MR_Word Var_132;
                MR_Word Var_134;
                MR_Word Var_136;
                MR_Word Var_137;
                MR_Word STATE_VARIABLE_ModuleInfo_140_140;
                MR_Word STATE_VARIABLE_Specs_141_141;
                MR_Word Var_145;
                MR_Word Var_146;

                parse_tree__prog_data_foreign__set_thread_safe_3_p_0((MR_Integer) 1, Attrs_18, &ThreadSafeAttrs_68);
                parse_tree__prog_data_foreign__set_purity_3_p_0((MR_Integer) 1, ThreadSafeAttrs_68, &ErlangGetAttrs_69);
                parse_tree__prog_data_foreign__set_purity_3_p_0((MR_Integer) 2, ThreadSafeAttrs_68, &ErlangSetAttrs_70);
                switch (IsThreadLocal_38) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word Var_98;
                      MR_Word Var_100;
                      MR_String Var_113;

                      {
                        Var_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_100, 0) = ((MR_Box) (TargetMutableName_17));
                        MR_hl_field(MR_mktag(1), Var_100, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[39])));
                      }
                      {
                        Var_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_98, 0) = ((MR_Box) ((MR_String) "\'ML_erlang_global_server\' ! {get_mutable, "));
                        MR_hl_field(MR_mktag(1), Var_98, 1) = ((MR_Box) (Var_100));
                      }
                      StdGetCode_71 = mercury__string__append_list_1_f_0(Var_98);
                      Var_113 = mercury__string__f_43_43_2_f_0(TargetMutableName_17, (MR_String) ", X}");
                      StdSetCode_72 = mercury__string__f_43_43_2_f_0((MR_String) "\'ML_erlang_global_server\' ! {set_mutable, ", Var_113);
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_String Var_116;
                      MR_String Var_119;

                      Var_116 = mercury__string__f_43_43_2_f_0(TargetMutableName_17, (MR_String) "})");
                      StdGetCode_71 = mercury__string__f_43_43_2_f_0((MR_String) "X = get({\'MR_thread_local_mutable\', ", Var_116);
                      Var_119 = mercury__string__f_43_43_2_f_0(TargetMutableName_17, (MR_String) "}, X)");
                      StdSetCode_72 = mercury__string__f_43_43_2_f_0((MR_String) "put({\'MR_thread_local_mutable\', ", Var_119);
                    }
                    break;
                }
                Var_125 = parse_tree__prog_mode__out_mode_1_f_0(Inst_31);
                {
                  Var_123 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_123, 0) = ((MR_Box) (X_46));
                  MR_hl_field(MR_mktag(0), Var_123, 1) = ((MR_Box) ((MR_String) "X"));
                  MR_hl_field(MR_mktag(0), Var_123, 2) = ((MR_Box) (Var_125));
                  MR_hl_field(MR_mktag(0), Var_123, 3) = (MR_Box) ((MR_Unsigned) (BoxPolicy_42));
                }
                {
                  Var_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_122, 0) = ((MR_Box) (Var_123));
                  MR_hl_field(MR_mktag(1), Var_122, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                Var_127 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0));
                {
                  Var_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_129, 0) = ((MR_Box) (Context_35));
                }
                {
                  Var_128 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_128, 0) = ((MR_Box) (StdGetCode_71));
                  MR_hl_field(MR_mktag(0), Var_128, 1) = ((MR_Box) (Var_129));
                }
                {
                  StdGetFCInfo_73 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), StdGetFCInfo_73, 0) = ((MR_Box) (ErlangGetAttrs_69));
                  MR_hl_field(MR_mktag(0), StdGetFCInfo_73, 1) = ((MR_Box) (StdGetPredName_57));
                  MR_hl_field(MR_mktag(0), StdGetFCInfo_73, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(0), StdGetFCInfo_73, 3) = ((MR_Box) (Var_122));
                  MR_hl_field(MR_mktag(0), StdGetFCInfo_73, 4) = ((MR_Box) (VarSetOnlyX_47));
                  MR_hl_field(MR_mktag(0), StdGetFCInfo_73, 5) = ((MR_Box) (Var_127));
                  MR_hl_field(MR_mktag(0), StdGetFCInfo_73, 6) = ((MR_Box) (Var_128));
                }
                Var_134 = parse_tree__prog_mode__in_mode_1_f_0(Inst_31);
                {
                  Var_132 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_132, 0) = ((MR_Box) (X_46));
                  MR_hl_field(MR_mktag(0), Var_132, 1) = ((MR_Box) ((MR_String) "X"));
                  MR_hl_field(MR_mktag(0), Var_132, 2) = ((MR_Box) (Var_134));
                  MR_hl_field(MR_mktag(0), Var_132, 3) = (MR_Box) ((MR_Unsigned) (BoxPolicy_42));
                }
                {
                  Var_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_131, 0) = ((MR_Box) (Var_132));
                  MR_hl_field(MR_mktag(1), Var_131, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                Var_136 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0));
                {
                  Var_137 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_137, 0) = ((MR_Box) (StdSetCode_72));
                  MR_hl_field(MR_mktag(0), Var_137, 1) = ((MR_Box) (Var_129));
                }
                {
                  StdSetFCInfo_74 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), StdSetFCInfo_74, 0) = ((MR_Box) (ErlangSetAttrs_70));
                  MR_hl_field(MR_mktag(0), StdSetFCInfo_74, 1) = ((MR_Box) (*InitSetPredName_21));
                  MR_hl_field(MR_mktag(0), StdSetFCInfo_74, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(0), StdSetFCInfo_74, 3) = ((MR_Box) (Var_131));
                  MR_hl_field(MR_mktag(0), StdSetFCInfo_74, 4) = ((MR_Box) (VarSetOnlyX_47));
                  MR_hl_field(MR_mktag(0), StdSetFCInfo_74, 5) = ((MR_Box) (Var_136));
                  MR_hl_field(MR_mktag(0), StdSetFCInfo_74, 6) = ((MR_Box) (Var_137));
                }
                hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(StdGetFCInfo_73, PredStatus_22, Context_35, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModuleInfo_0_87, &STATE_VARIABLE_ModuleInfo_140_140, STATE_VARIABLE_Specs_0_91, &STATE_VARIABLE_Specs_141_141);
                hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(StdSetFCInfo_74, PredStatus_22, Context_35, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModuleInfo_140_140, &STATE_VARIABLE_ModuleInfo_173_173, STATE_VARIABLE_Specs_141_141, &STATE_VARIABLE_Specs_175_175);
                {
                  Var_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_146, 0) = ((MR_Box) (X_46));
                  MR_hl_field(MR_mktag(1), Var_146, 1) = ((MR_Box) (Context_35));
                }
                {
                  Var_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_145, 0) = ((MR_Box) (Var_146));
                  MR_hl_field(MR_mktag(1), Var_145, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  ImpureGetExpr_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ImpureGetExpr_61, 0) = ((MR_Box) (Context_35));
                  MR_hl_field(MR_mktag(1), ImpureGetExpr_61, 1) = ((MR_Box) (StdGetPredName_57));
                  MR_hl_field(MR_mktag(1), ImpureGetExpr_61, 2) = ((MR_Box) (Var_145));
                  MR_hl_field(MR_mktag(1), ImpureGetExpr_61, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                }
                {
                  ImpureSetExpr_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ImpureSetExpr_62, 0) = ((MR_Box) (Context_35));
                  MR_hl_field(MR_mktag(1), ImpureSetExpr_62, 1) = ((MR_Box) (*InitSetPredName_21));
                  MR_hl_field(MR_mktag(1), ImpureSetExpr_62, 2) = ((MR_Box) (Var_145));
                  MR_hl_field(MR_mktag(1), ImpureSetExpr_62, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
                }
                STATE_VARIABLE_QualInfo_174_174 = STATE_VARIABLE_QualInfo_0_89;
              }
              break;
          }
          switch (AttachToIO_39) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Word IO0_76;
                MR_Word IO_77;
                MR_Word VarSetXandIOs_78;
                MR_Word IOPredArgs_81;
                MR_Word CopyIOExpr_82;
                MR_Word IOGetPredExpr_83;
                MR_Word IOSetPredExpr_84;
                MR_Word PureIOGetPredExpr_85;
                MR_Word PureIOSetPredExpr_86;
                MR_Word STATE_VARIABLE_VarSet_178_178;
                MR_Word Var_181;
                MR_Word Var_182;
                MR_Word Var_183;
                MR_Word Var_184;
                MR_Word Var_185;
                MR_Word Var_193;
                MR_Word STATE_VARIABLE_ModuleInfo_196_196;
                MR_Word STATE_VARIABLE_QualInfo_197_197;
                MR_Word STATE_VARIABLE_Specs_198_198;
                MR_Word Var_200;

                mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_String) "IO0", &IO0_76, VarSetOnlyX_47, &STATE_VARIABLE_VarSet_178_178);
                mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_String) "IO", &IO_77, STATE_VARIABLE_VarSet_178_178, &VarSetXandIOs_78);
                {
                  Var_181 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_181, 0) = ((MR_Box) (X_46));
                  MR_hl_field(MR_mktag(1), Var_181, 1) = ((MR_Box) (Context_35));
                }
                {
                  Var_183 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_183, 0) = ((MR_Box) (IO0_76));
                  MR_hl_field(MR_mktag(1), Var_183, 1) = ((MR_Box) (Context_35));
                }
                {
                  Var_185 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_185, 0) = ((MR_Box) (IO_77));
                  MR_hl_field(MR_mktag(1), Var_185, 1) = ((MR_Box) (Context_35));
                }
                {
                  Var_184 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_184, 0) = ((MR_Box) (Var_185));
                  MR_hl_field(MR_mktag(1), Var_184, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_182 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_182, 0) = ((MR_Box) (Var_183));
                  MR_hl_field(MR_mktag(1), Var_182, 1) = ((MR_Box) (Var_184));
                }
                {
                  IOPredArgs_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), IOPredArgs_81, 0) = ((MR_Box) (Var_181));
                  MR_hl_field(MR_mktag(1), IOPredArgs_81, 1) = ((MR_Box) (Var_182));
                }
                {
                  CopyIOExpr_82 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), CopyIOExpr_82, 0) = ((MR_Box) (Context_35));
                  MR_hl_field(MR_mktag(0), CopyIOExpr_82, 1) = ((MR_Box) (Var_183));
                  MR_hl_field(MR_mktag(0), CopyIOExpr_82, 2) = ((MR_Box) (Var_185));
                  MR_hl_field(MR_mktag(0), CopyIOExpr_82, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
                }
                {
                  IOGetPredExpr_83 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), IOGetPredExpr_83, 0) = ((MR_Box) (Context_35));
                  MR_hl_field(MR_mktag(2), IOGetPredExpr_83, 1) = ((MR_Box) (ImpureGetExpr_61));
                  MR_hl_field(MR_mktag(2), IOGetPredExpr_83, 2) = ((MR_Box) (CopyIOExpr_82));
                }
                {
                  IOSetPredExpr_84 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), IOSetPredExpr_84, 0) = ((MR_Box) (Context_35));
                  MR_hl_field(MR_mktag(2), IOSetPredExpr_84, 1) = ((MR_Box) (ImpureSetExpr_62));
                  MR_hl_field(MR_mktag(2), IOSetPredExpr_84, 2) = ((MR_Box) (CopyIOExpr_82));
                }
                {
                  PureIOGetPredExpr_85 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), PureIOGetPredExpr_85, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                  MR_hl_field(MR_mktag(3), PureIOGetPredExpr_85, 1) = ((MR_Box) (Context_35));
                  MR_hl_field(MR_mktag(3), PureIOGetPredExpr_85, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(3), PureIOGetPredExpr_85, 3) = ((MR_Box) (IOGetPredExpr_83));
                }
                {
                  PureIOSetPredExpr_86 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), PureIOSetPredExpr_86, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                  MR_hl_field(MR_mktag(3), PureIOSetPredExpr_86, 1) = ((MR_Box) (Context_35));
                  MR_hl_field(MR_mktag(3), PureIOSetPredExpr_86, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(3), PureIOSetPredExpr_86, 3) = ((MR_Box) (IOSetPredExpr_84));
                }
                {
                  Var_193 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_193, 0) = ((MR_Box) (PureIOGetPredExpr_85));
                }
                hlds__make_hlds__add_clause__module_add_clause_15_p_0(VarSetXandIOs_78, (MR_Integer) 0, StdGetPredName_57, IOPredArgs_81, Var_193, PredStatus_22, Context_35, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 12U), STATE_VARIABLE_ModuleInfo_173_173, &STATE_VARIABLE_ModuleInfo_196_196, STATE_VARIABLE_QualInfo_174_174, &STATE_VARIABLE_QualInfo_197_197, STATE_VARIABLE_Specs_175_175, &STATE_VARIABLE_Specs_198_198);
                {
                  Var_200 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_200, 0) = ((MR_Box) (PureIOSetPredExpr_86));
                }
                hlds__make_hlds__add_clause__module_add_clause_15_p_0(VarSetXandIOs_78, (MR_Integer) 0, *InitSetPredName_21, IOPredArgs_81, Var_200, PredStatus_22, Context_35, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 12U), STATE_VARIABLE_ModuleInfo_196_196, STATE_VARIABLE_ModuleInfo_88, STATE_VARIABLE_QualInfo_197_197, STATE_VARIABLE_QualInfo_90, STATE_VARIABLE_Specs_198_198, STATE_VARIABLE_Specs_92);
              }
              break;
            case (MR_Integer) 0:
              {
                *STATE_VARIABLE_ModuleInfo_88 = STATE_VARIABLE_ModuleInfo_173_173;
                *STATE_VARIABLE_QualInfo_90 = STATE_VARIABLE_QualInfo_174_174;
                *STATE_VARIABLE_Specs_92 = STATE_VARIABLE_Specs_175_175;
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

    succeeded = hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__define_unsafe_get_set_preds__1131__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_unsafe_get_set_preds_12_p_0(
  MR_Word ItemMutable_13,
  MR_Word TargetParams_14,
  MR_String TargetMutableName_15,
  MR_Word Attrs_16,
  MR_Tuple * UnsafeGetSetExprs_17,
  MR_Word PredStatus_18,
  MR_Word STATE_VARIABLE_ModuleInfo_0_58,
  MR_Word * STATE_VARIABLE_ModuleInfo_59,
  MR_Word STATE_VARIABLE_QualInfo_0_60,
  MR_Word * STATE_VARIABLE_QualInfo_61,
  MR_Word STATE_VARIABLE_Specs_0_62,
  MR_Word * STATE_VARIABLE_Specs_63)
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
    MR_Word X_41;
    MR_Word VarSetOnlyX_42;
    MR_Word UnsafeGetAttrs_44;
    MR_Word UnsafeSetAttrs_45;
    MR_Word TrailedMutable_46;
    MR_String TrailCode_47;
    MR_String UnsafeGetCode_48;
    MR_String UnsafeSetCode_49;
    MR_Word UnsafeGetPredName_52;
    MR_Word UnsafeSetPredName_53;
    MR_Word UnsafeGetFCInfo_54;
    MR_Word UnsafeSetFCInfo_55;
    MR_Word CallUnsafeGetExpr0_56;
    MR_Word CallUnsafeSetExpr0_57;
    MR_Word Var_64;
    MR_Word Var_69;
    MR_Word Var_121;
    MR_Word Var_122;
    MR_Word Var_124;
    MR_Word Var_126;
    MR_Word Var_127;
    MR_Word Var_128;
    MR_Word Var_130;
    MR_Word Var_131;
    MR_Word Var_133;
    MR_Word Var_135;
    MR_Word Var_136;
    MR_String Var_137;
    MR_Word STATE_VARIABLE_ModuleInfo_140_140;
    MR_Word STATE_VARIABLE_Specs_141_141;
    MR_Word Var_145;
    MR_Word Var_146;

    hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_ModuleInfo_0_58, &ModuleName_22);
    MutableName_23 = ((MR_String) ((MR_hl_field(MR_mktag(0), ItemMutable_13, (MR_Integer) 0))));
    Type_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable_13, (MR_Integer) 2))));
    Inst_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable_13, (MR_Integer) 4))));
    MutAttrs_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable_13, (MR_Integer) 7))));
    Context_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable_13, (MR_Integer) 8))));
    IsConstant_33 = parse_tree__prog_item__mutable_var_constant_1_f_0(MutAttrs_30);
    IsThreadLocal_34 = parse_tree__prog_item__mutable_var_thread_local_1_f_0(MutAttrs_30);
    ImplLang_35 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), TargetParams_14, (MR_Integer) 0))) >> 6)) & (MR_Integer) 3);
    Lang_36 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), TargetParams_14, (MR_Integer) 0))) >> 4)) & (MR_Integer) 3);
    BoxPolicy_37 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), TargetParams_14, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);
    {
      Var_64 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_64, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_3[12]));
      MR_hl_field(MR_mktag(0), Var_64, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__define_unsafe_get_set_preds_12_p_0_1));
      MR_hl_field(MR_mktag(0), Var_64, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_64, 3) = ((MR_Box) (IsConstant_33));
      MR_hl_field(MR_mktag(0), Var_64, 4) = ((MR_Box) ((MR_Integer) 0));
    }
    mercury__require__expect_3_p_0(Var_64, (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.define_unsafe_get_set_preds\'/12", (MR_String) "need_unsafe_get_set_preds, but IsConstant = mutable_constant");
    Var_69 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
    mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_String) "X", &X_41, Var_69, &VarSetOnlyX_42);
    parse_tree__prog_data_foreign__set_thread_safe_3_p_0((MR_Integer) 1, Attrs_16, &UnsafeSetAttrs_45);
    parse_tree__prog_data_foreign__set_purity_3_p_0((MR_Integer) 1, UnsafeSetAttrs_45, &UnsafeGetAttrs_44);
    TrailedMutable_46 = parse_tree__prog_item__mutable_var_trailed_1_f_0(MutAttrs_30);
    switch (ImplLang_35) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          switch (TrailedMutable_46) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_String Var_102;

                Var_102 = mercury__string__f_43_43_2_f_0(TargetMutableName_15, (MR_String) ");\n");
                TrailCode_47 = mercury__string__f_43_43_2_f_0((MR_String) "MR_trail_current_value(&", Var_102);
              }
              break;
            case (MR_Integer) 0:
              TrailCode_47 = (MR_String) "";
              break;
          }
          switch (IsThreadLocal_34) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_String Var_117;

                Var_117 = mercury__string__f_43_43_2_f_0(TargetMutableName_15, (MR_String) ";\n");
                UnsafeGetCode_48 = mercury__string__f_43_43_2_f_0((MR_String) "X = ", Var_117);
                UnsafeSetCode_49 = mercury__string__f_43_43_2_f_0(TargetMutableName_15, (MR_String) " = X;\n");
              }
              break;
            case (MR_Integer) 1:
              {
                MR_String TypeName_50;
                MR_String Var_105;
                MR_String Var_106;
                MR_String Var_108;
                MR_String Var_111;
                MR_String Var_112;
                MR_String Var_114;

                TypeName_50 = hlds__make_hlds__add_mutable_aux_preds__global_foreign_type_name_4_f_0(BoxPolicy_37, Lang_36, STATE_VARIABLE_ModuleInfo_0_58, Type_25);
                Var_108 = mercury__string__f_43_43_2_f_0(TargetMutableName_15, (MR_String) ");\n");
                Var_106 = mercury__string__f_43_43_2_f_0((MR_String) ", X, ", Var_108);
                Var_105 = mercury__string__f_43_43_2_f_0(TypeName_50, Var_106);
                UnsafeGetCode_48 = mercury__string__f_43_43_2_f_0((MR_String) "MR_get_thread_local_mutable(", Var_105);
                Var_114 = mercury__string__f_43_43_2_f_0(TargetMutableName_15, (MR_String) ");\n");
                Var_112 = mercury__string__f_43_43_2_f_0((MR_String) ", X, ", Var_114);
                Var_111 = mercury__string__f_43_43_2_f_0(TypeName_50, Var_112);
                UnsafeSetCode_49 = mercury__string__f_43_43_2_f_0((MR_String) "MR_set_thread_local_mutable(", Var_111);
              }
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          TrailCode_47 = (MR_String) "";
          switch (IsThreadLocal_34) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_String Var_96;
                MR_String Var_99;

                Var_96 = mercury__string__f_43_43_2_f_0(TargetMutableName_15, (MR_String) ";\n");
                UnsafeGetCode_48 = mercury__string__f_43_43_2_f_0((MR_String) "\tX = ", Var_96);
                Var_99 = mercury__string__f_43_43_2_f_0(TargetMutableName_15, (MR_String) " = X;\n");
                UnsafeSetCode_49 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_99);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_String Cast_51;
                MR_String Var_87;
                MR_String Var_88;
                MR_String Var_90;
                MR_String Var_93;
                MR_Word Var_156;

                Var_156 = parse_tree__builtin_lib_types__int_type_0_f_0();
                succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Type_25, Var_156);
                if (succeeded)
                  Cast_51 = (MR_String) "(int) ";
                else
                  Cast_51 = (MR_String) "";
                Var_90 = mercury__string__f_43_43_2_f_0(TargetMutableName_15, (MR_String) ");\n");
                Var_88 = mercury__string__f_43_43_2_f_0((MR_String) "runtime.ThreadLocalMutables.get(", Var_90);
                Var_87 = mercury__string__f_43_43_2_f_0(Cast_51, Var_88);
                UnsafeGetCode_48 = mercury__string__f_43_43_2_f_0((MR_String) "\tX = ", Var_87);
                Var_93 = mercury__string__f_43_43_2_f_0(TargetMutableName_15, (MR_String) ", X);\n");
                UnsafeSetCode_49 = mercury__string__f_43_43_2_f_0((MR_String) "\truntime.ThreadLocalMutables.set(", Var_93);
              }
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.define_unsafe_get_set_preds\'/12", (MR_String) "unsafe_get_set for erlang");
            return;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          TrailCode_47 = (MR_String) "";
          switch (IsThreadLocal_34) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_String Var_81;
                MR_String Var_84;

                Var_81 = mercury__string__f_43_43_2_f_0(TargetMutableName_15, (MR_String) ";\n");
                UnsafeGetCode_48 = mercury__string__f_43_43_2_f_0((MR_String) "\tX = ", Var_81);
                Var_84 = mercury__string__f_43_43_2_f_0(TargetMutableName_15, (MR_String) " = X;\n");
                UnsafeSetCode_49 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_84);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_String Var_75;
                MR_String Var_78;

                Var_75 = mercury__string__f_43_43_2_f_0(TargetMutableName_15, (MR_String) ".get();\n");
                UnsafeGetCode_48 = mercury__string__f_43_43_2_f_0((MR_String) "\tX = ", Var_75);
                Var_78 = mercury__string__f_43_43_2_f_0(TargetMutableName_15, (MR_String) ".set(X);\n");
                UnsafeSetCode_49 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_78);
              }
              break;
          }
        }
        break;
    }
    UnsafeGetPredName_52 = parse_tree__prog_mutable__mutable_unsafe_get_pred_sym_name_2_f_0(ModuleName_22, MutableName_23);
    UnsafeSetPredName_53 = parse_tree__prog_mutable__mutable_unsafe_set_pred_sym_name_2_f_0(ModuleName_22, MutableName_23);
    Var_124 = parse_tree__prog_mode__out_mode_1_f_0(Inst_27);
    {
      Var_122 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_122, 0) = ((MR_Box) (X_41));
      MR_hl_field(MR_mktag(0), Var_122, 1) = ((MR_Box) ((MR_String) "X"));
      MR_hl_field(MR_mktag(0), Var_122, 2) = ((MR_Box) (Var_124));
      MR_hl_field(MR_mktag(0), Var_122, 3) = (MR_Box) ((MR_Unsigned) (BoxPolicy_37));
    }
    {
      Var_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_121, 0) = ((MR_Box) (Var_122));
      MR_hl_field(MR_mktag(1), Var_121, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_126 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0));
    {
      Var_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_128, 0) = ((MR_Box) (Context_31));
    }
    {
      Var_127 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_127, 0) = ((MR_Box) (UnsafeGetCode_48));
      MR_hl_field(MR_mktag(0), Var_127, 1) = ((MR_Box) (Var_128));
    }
    {
      UnsafeGetFCInfo_54 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), UnsafeGetFCInfo_54, 0) = ((MR_Box) (UnsafeGetAttrs_44));
      MR_hl_field(MR_mktag(0), UnsafeGetFCInfo_54, 1) = ((MR_Box) (UnsafeGetPredName_52));
      MR_hl_field(MR_mktag(0), UnsafeGetFCInfo_54, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), UnsafeGetFCInfo_54, 3) = ((MR_Box) (Var_121));
      MR_hl_field(MR_mktag(0), UnsafeGetFCInfo_54, 4) = ((MR_Box) (VarSetOnlyX_42));
      MR_hl_field(MR_mktag(0), UnsafeGetFCInfo_54, 5) = ((MR_Box) (Var_126));
      MR_hl_field(MR_mktag(0), UnsafeGetFCInfo_54, 6) = ((MR_Box) (Var_127));
    }
    Var_133 = parse_tree__prog_mode__in_mode_1_f_0(Inst_27);
    {
      Var_131 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_131, 0) = ((MR_Box) (X_41));
      MR_hl_field(MR_mktag(0), Var_131, 1) = ((MR_Box) ((MR_String) "X"));
      MR_hl_field(MR_mktag(0), Var_131, 2) = ((MR_Box) (Var_133));
      MR_hl_field(MR_mktag(0), Var_131, 3) = (MR_Box) ((MR_Unsigned) (BoxPolicy_37));
    }
    {
      Var_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_130, 0) = ((MR_Box) (Var_131));
      MR_hl_field(MR_mktag(1), Var_130, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_135 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0));
    Var_137 = mercury__string__f_43_43_2_f_0(TrailCode_47, UnsafeSetCode_49);
    {
      Var_136 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_136, 0) = ((MR_Box) (Var_137));
      MR_hl_field(MR_mktag(0), Var_136, 1) = ((MR_Box) (Var_128));
    }
    {
      UnsafeSetFCInfo_55 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), UnsafeSetFCInfo_55, 0) = ((MR_Box) (UnsafeSetAttrs_45));
      MR_hl_field(MR_mktag(0), UnsafeSetFCInfo_55, 1) = ((MR_Box) (UnsafeSetPredName_53));
      MR_hl_field(MR_mktag(0), UnsafeSetFCInfo_55, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), UnsafeSetFCInfo_55, 3) = ((MR_Box) (Var_130));
      MR_hl_field(MR_mktag(0), UnsafeSetFCInfo_55, 4) = ((MR_Box) (VarSetOnlyX_42));
      MR_hl_field(MR_mktag(0), UnsafeSetFCInfo_55, 5) = ((MR_Box) (Var_135));
      MR_hl_field(MR_mktag(0), UnsafeSetFCInfo_55, 6) = ((MR_Box) (Var_136));
    }
    hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(UnsafeGetFCInfo_54, PredStatus_18, Context_31, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModuleInfo_0_58, &STATE_VARIABLE_ModuleInfo_140_140, STATE_VARIABLE_Specs_0_62, &STATE_VARIABLE_Specs_141_141);
    hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(UnsafeSetFCInfo_55, PredStatus_18, Context_31, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModuleInfo_140_140, STATE_VARIABLE_ModuleInfo_59, STATE_VARIABLE_Specs_141_141, STATE_VARIABLE_Specs_63);
    {
      Var_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_146, 0) = ((MR_Box) (X_41));
      MR_hl_field(MR_mktag(1), Var_146, 1) = ((MR_Box) (Context_31));
    }
    {
      Var_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_145, 0) = ((MR_Box) (Var_146));
      MR_hl_field(MR_mktag(1), Var_145, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      CallUnsafeGetExpr0_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), CallUnsafeGetExpr0_56, 0) = ((MR_Box) (Context_31));
      MR_hl_field(MR_mktag(1), CallUnsafeGetExpr0_56, 1) = ((MR_Box) (UnsafeGetPredName_52));
      MR_hl_field(MR_mktag(1), CallUnsafeGetExpr0_56, 2) = ((MR_Box) (Var_145));
      MR_hl_field(MR_mktag(1), CallUnsafeGetExpr0_56, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    }
    {
      CallUnsafeSetExpr0_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), CallUnsafeSetExpr0_57, 0) = ((MR_Box) (Context_31));
      MR_hl_field(MR_mktag(1), CallUnsafeSetExpr0_57, 1) = ((MR_Box) (UnsafeSetPredName_53));
      MR_hl_field(MR_mktag(1), CallUnsafeSetExpr0_57, 2) = ((MR_Box) (Var_145));
      MR_hl_field(MR_mktag(1), CallUnsafeSetExpr0_57, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
    }
    {
      MR_Tuple base;
      base = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
      *UnsafeGetSetExprs_17 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (CallUnsafeGetExpr0_56));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (CallUnsafeSetExpr0_57));
    }
    *STATE_VARIABLE_QualInfo_61 = STATE_VARIABLE_QualInfo_0_60;
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

    succeeded = hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__define_lock_unlock_preds__1043__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_lock_unlock_preds_12_p_0(
  MR_Word ItemMutable_13,
  MR_Word TargetParams_14,
  MR_String TargetMutableName_15,
  MR_Word Attrs_16,
  MR_Tuple * LockUnlockExprs_17,
  MR_Word PredStatus_18,
  MR_Word STATE_VARIABLE_ModuleInfo_0_51,
  MR_Word * STATE_VARIABLE_ModuleInfo_52,
  MR_Word STATE_VARIABLE_QualInfo_0_53,
  MR_Word * STATE_VARIABLE_QualInfo_54,
  MR_Word STATE_VARIABLE_Specs_0_55,
  MR_Word * STATE_VARIABLE_Specs_56)
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
    MR_Word Var_57;

    hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_ModuleInfo_0_51, &ModuleName_22);
    MutableName_23 = ((MR_String) ((MR_hl_field(MR_mktag(0), ItemMutable_13, (MR_Integer) 0))));
    MutAttrs_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable_13, (MR_Integer) 7))));
    Context_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable_13, (MR_Integer) 8))));
    IsConstant_33 = parse_tree__prog_item__mutable_var_constant_1_f_0(MutAttrs_30);
    IsThreadLocal_34 = parse_tree__prog_item__mutable_var_thread_local_1_f_0(MutAttrs_30);
    ImplLang_35 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), TargetParams_14, (MR_Integer) 0))) >> 6)) & (MR_Integer) 3);
    {
      Var_57 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_57, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_3[12]));
      MR_hl_field(MR_mktag(0), Var_57, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__define_lock_unlock_preds_12_p_0_1));
      MR_hl_field(MR_mktag(0), Var_57, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_57, 3) = ((MR_Box) (IsConstant_33));
      MR_hl_field(MR_mktag(0), Var_57, 4) = ((MR_Box) ((MR_Integer) 0));
    }
    mercury__require__expect_3_p_0(Var_57, (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.define_lock_unlock_preds\'/12", (MR_String) "need_lock_unlock_preds, but IsConstant = mutable_constant");
    switch (ImplLang_35) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word LockAndUnlockAttrs_41;
          MR_String MutableMutexVarName_42;
          MR_String LockForeignProcBody_43;
          MR_String UnlockForeignProcBody_44;
          MR_Word LockPredName_45;
          MR_Word UnlockPredName_46;
          MR_Word LockFCInfo_47;
          MR_Word UnlockFCInfo_48;
          MR_Word CallLockExpr0_49;
          MR_Word CallUnlockExpr0_50;
          MR_Word Var_96;
          MR_Word Var_97;
          MR_Word Var_98;
          MR_Word Var_99;
          MR_Word Var_102;
          MR_Word Var_103;
          MR_Word Var_104;
          MR_Word STATE_VARIABLE_ModuleInfo_107_107;
          MR_Word STATE_VARIABLE_Specs_108_108;

          parse_tree__prog_data_foreign__set_thread_safe_3_p_0((MR_Integer) 1, Attrs_16, &LockAndUnlockAttrs_41);
          MutableMutexVarName_42 = parse_tree__prog_mutable__mutable_mutex_var_name_1_f_0(TargetMutableName_15);
          switch (IsThreadLocal_34) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Var_68;
                MR_Word Var_70;
                MR_String Var_71;
                MR_String Var_73;
                MR_String Var_74;
                MR_String Var_76;
                MR_Word Var_81;
                MR_Word Var_83;
                MR_String Var_84;
                MR_String Var_86;
                MR_String Var_87;
                MR_String Var_89;

                Var_76 = mercury__string__f_43_43_2_f_0(MutableMutexVarName_42, (MR_String) "\");\n#endif\n");
                Var_74 = mercury__string__f_43_43_2_f_0((MR_String) ",\n                    \"", Var_76);
                Var_73 = mercury__string__f_43_43_2_f_0(MutableMutexVarName_42, Var_74);
                Var_71 = mercury__string__f_43_43_2_f_0((MR_String) "  MR_LOCK(&", Var_73);
                {
                  Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (Var_71));
                  MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) ((MR_String) "#ifdef MR_THREAD_SAFE\n"));
                  MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (Var_70));
                }
                LockForeignProcBody_43 = mercury__string__append_list_1_f_0(Var_68);
                Var_89 = mercury__string__f_43_43_2_f_0(MutableMutexVarName_42, (MR_String) "\");\n#endif\n");
                Var_87 = mercury__string__f_43_43_2_f_0((MR_String) ",\n                    \"", Var_89);
                Var_86 = mercury__string__f_43_43_2_f_0(MutableMutexVarName_42, Var_87);
                Var_84 = mercury__string__f_43_43_2_f_0((MR_String) "  MR_UNLOCK(&", Var_86);
                {
                  Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (Var_84));
                  MR_hl_field(MR_mktag(1), Var_83, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) ((MR_String) "#ifdef MR_THREAD_SAFE\n"));
                  MR_hl_field(MR_mktag(1), Var_81, 1) = ((MR_Box) (Var_83));
                }
                UnlockForeignProcBody_44 = mercury__string__append_list_1_f_0(Var_81);
              }
              break;
            case (MR_Integer) 1:
              {
                LockForeignProcBody_43 = (MR_String) "";
                UnlockForeignProcBody_44 = (MR_String) "";
              }
              break;
          }
          LockPredName_45 = parse_tree__prog_mutable__mutable_lock_pred_sym_name_2_f_0(ModuleName_22, MutableName_23);
          UnlockPredName_46 = parse_tree__prog_mutable__mutable_unlock_pred_sym_name_2_f_0(ModuleName_22, MutableName_23);
          Var_96 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
          Var_97 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0));
          {
            Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_99, 0) = ((MR_Box) (Context_31));
          }
          {
            Var_98 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_98, 0) = ((MR_Box) (LockForeignProcBody_43));
            MR_hl_field(MR_mktag(0), Var_98, 1) = ((MR_Box) (Var_99));
          }
          {
            LockFCInfo_47 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), LockFCInfo_47, 0) = ((MR_Box) (LockAndUnlockAttrs_41));
            MR_hl_field(MR_mktag(0), LockFCInfo_47, 1) = ((MR_Box) (LockPredName_45));
            MR_hl_field(MR_mktag(0), LockFCInfo_47, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(0), LockFCInfo_47, 3) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), LockFCInfo_47, 4) = ((MR_Box) (Var_96));
            MR_hl_field(MR_mktag(0), LockFCInfo_47, 5) = ((MR_Box) (Var_97));
            MR_hl_field(MR_mktag(0), LockFCInfo_47, 6) = ((MR_Box) (Var_98));
          }
          Var_102 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
          Var_103 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0));
          {
            Var_104 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_104, 0) = ((MR_Box) (UnlockForeignProcBody_44));
            MR_hl_field(MR_mktag(0), Var_104, 1) = ((MR_Box) (Var_99));
          }
          {
            UnlockFCInfo_48 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), UnlockFCInfo_48, 0) = ((MR_Box) (LockAndUnlockAttrs_41));
            MR_hl_field(MR_mktag(0), UnlockFCInfo_48, 1) = ((MR_Box) (UnlockPredName_46));
            MR_hl_field(MR_mktag(0), UnlockFCInfo_48, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(0), UnlockFCInfo_48, 3) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), UnlockFCInfo_48, 4) = ((MR_Box) (Var_102));
            MR_hl_field(MR_mktag(0), UnlockFCInfo_48, 5) = ((MR_Box) (Var_103));
            MR_hl_field(MR_mktag(0), UnlockFCInfo_48, 6) = ((MR_Box) (Var_104));
          }
          hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(LockFCInfo_47, PredStatus_18, Context_31, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModuleInfo_0_51, &STATE_VARIABLE_ModuleInfo_107_107, STATE_VARIABLE_Specs_0_55, &STATE_VARIABLE_Specs_108_108);
          hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(UnlockFCInfo_48, PredStatus_18, Context_31, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModuleInfo_107_107, STATE_VARIABLE_ModuleInfo_52, STATE_VARIABLE_Specs_108_108, STATE_VARIABLE_Specs_56);
          {
            CallLockExpr0_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), CallLockExpr0_49, 0) = ((MR_Box) (Context_31));
            MR_hl_field(MR_mktag(1), CallLockExpr0_49, 1) = ((MR_Box) (LockPredName_45));
            MR_hl_field(MR_mktag(1), CallLockExpr0_49, 2) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), CallLockExpr0_49, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
          }
          {
            CallUnlockExpr0_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), CallUnlockExpr0_50, 0) = ((MR_Box) (Context_31));
            MR_hl_field(MR_mktag(1), CallUnlockExpr0_50, 1) = ((MR_Box) (UnlockPredName_46));
            MR_hl_field(MR_mktag(1), CallUnlockExpr0_50, 2) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), CallUnlockExpr0_50, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
          }
          {
            MR_Tuple base;
            base = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
            *LockUnlockExprs_17 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (CallLockExpr0_49));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (CallUnlockExpr0_50));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.define_lock_unlock_preds\'/12", (MR_String) "lock_unlock for csharp");
            return;
          }
        }
        break;
      case (MR_Integer) 3:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.define_lock_unlock_preds\'/12", (MR_String) "lock_unlock for erlang");
            return;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.define_lock_unlock_preds\'/12", (MR_String) "lock_unlock for java");
            return;
          }
        }
        break;
    }
    *STATE_VARIABLE_QualInfo_54 = STATE_VARIABLE_QualInfo_0_53;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_pre_init_pred_12_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__define_pre_init_pred__981__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_pre_init_pred_12_p_0(
  MR_Word ItemMutable_13,
  MR_Word TargetParams_14,
  MR_String TargetMutableName_15,
  MR_Word Attrs_16,
  MR_Word * CallPreInitExpr_17,
  MR_Word PredStatus_18,
  MR_Word STATE_VARIABLE_ModuleInfo_0_44,
  MR_Word * STATE_VARIABLE_ModuleInfo_45,
  MR_Word STATE_VARIABLE_QualInfo_0_46,
  MR_Word * STATE_VARIABLE_QualInfo_47,
  MR_Word STATE_VARIABLE_Specs_0_48,
  MR_Word * STATE_VARIABLE_Specs_49)
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
    MR_Word PreInitPredName_41;
    MR_String PreInitCode_42;
    MR_Word PreInitFCInfo_43;
    MR_Word Var_50;
    MR_Word Var_73;
    MR_Word Var_74;
    MR_Word Var_75;
    MR_Word Var_76;

    hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_ModuleInfo_0_44, &ModuleName_22);
    MutableName_23 = ((MR_String) ((MR_hl_field(MR_mktag(0), ItemMutable_13, (MR_Integer) 0))));
    MutAttrs_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable_13, (MR_Integer) 7))));
    Context_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable_13, (MR_Integer) 8))));
    IsConstant_33 = parse_tree__prog_item__mutable_var_constant_1_f_0(MutAttrs_30);
    IsThreadLocal_34 = parse_tree__prog_item__mutable_var_thread_local_1_f_0(MutAttrs_30);
    ImplLang_35 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), TargetParams_14, (MR_Integer) 0))) >> 6)) & (MR_Integer) 3);
    {
      Var_50 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_50, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_3[12]));
      MR_hl_field(MR_mktag(0), Var_50, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__define_pre_init_pred_12_p_0_1));
      MR_hl_field(MR_mktag(0), Var_50, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_50, 3) = ((MR_Box) (IsConstant_33));
      MR_hl_field(MR_mktag(0), Var_50, 4) = ((MR_Box) ((MR_Integer) 0));
    }
    mercury__require__expect_3_p_0(Var_50, (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.define_pre_init_pred\'/12", (MR_String) "need_pre_init_pred, but IsConstant = mutable_constant");
    PreInitPredName_41 = parse_tree__prog_mutable__mutable_pre_init_pred_sym_name_2_f_0(ModuleName_22, MutableName_23);
    switch (ImplLang_35) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (IsThreadLocal_34) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_60;
              MR_Word Var_62;
              MR_Word Var_64;
              MR_String Var_65;

              Var_65 = parse_tree__prog_mutable__mutable_mutex_var_name_1_f_0(TargetMutableName_15);
              {
                Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (Var_65));
                MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[34])));
              }
              {
                Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) ((MR_String) "   pthread_mutex_init(&"));
                MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (Var_64));
              }
              {
                Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) ((MR_String) "#ifdef MR_THREAD_SAFE\n"));
                MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (Var_62));
              }
              PreInitCode_42 = mercury__string__append_list_1_f_0(Var_60);
            }
            break;
          case (MR_Integer) 1:
            {
              PreInitCode_42 = mercury__string__f_43_43_2_f_0(TargetMutableName_15, (MR_String) " = MR_new_thread_local_mutable_index();\n");
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          PreInitCode_42 = mercury__string__f_43_43_2_f_0(TargetMutableName_15, (MR_String) " = runtime.ThreadLocalMutables.new_index();\n");
        }
        break;
      case (MR_Integer) 3:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.define_pre_init_pred\'/12", (MR_String) "preinit for erlang");
            return;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.define_pre_init_pred\'/12", (MR_String) "preinit for java");
            return;
          }
        }
        break;
    }
    Var_73 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
    Var_74 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0));
    {
      Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (Context_31));
    }
    {
      Var_75 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_75, 0) = ((MR_Box) (PreInitCode_42));
      MR_hl_field(MR_mktag(0), Var_75, 1) = ((MR_Box) (Var_76));
    }
    {
      PreInitFCInfo_43 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), PreInitFCInfo_43, 0) = ((MR_Box) (Attrs_16));
      MR_hl_field(MR_mktag(0), PreInitFCInfo_43, 1) = ((MR_Box) (PreInitPredName_41));
      MR_hl_field(MR_mktag(0), PreInitFCInfo_43, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), PreInitFCInfo_43, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), PreInitFCInfo_43, 4) = ((MR_Box) (Var_73));
      MR_hl_field(MR_mktag(0), PreInitFCInfo_43, 5) = ((MR_Box) (Var_74));
      MR_hl_field(MR_mktag(0), PreInitFCInfo_43, 6) = ((MR_Box) (Var_75));
    }
    hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(PreInitFCInfo_43, PredStatus_18, Context_31, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModuleInfo_0_44, STATE_VARIABLE_ModuleInfo_45, STATE_VARIABLE_Specs_0_48, STATE_VARIABLE_Specs_49);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      *CallPreInitExpr_17 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Context_31));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (PreInitPredName_41));
      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), base, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
    }
    *STATE_VARIABLE_QualInfo_47 = STATE_VARIABLE_QualInfo_0_46;
  }
}

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__define_global_var_java_6_p_0(
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
            MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[69])));
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
hlds__make_hlds__add_mutable_aux_preds__define_global_var_c_7_p_0(
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
          libs__globals__lookup_bool_option_3_p_0(Globals_16, (MR_Integer) 281, &HighLevelCode_17);
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

      MutexVarName_21 = parse_tree__prog_mutable__mutable_mutex_var_name_1_f_0(TargetMutableName_8);
      {
        Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (MutexVarName_21));
        MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[33])));
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
        Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) ((MR_String) "    MercuryLock "));
        MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (Var_36));
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
    hlds__hlds_module__module_add_foreign_decl_code_3_p_0(ForeignDeclCode_23, STATE_VARIABLE_ModuleInfo_0_26, &STATE_VARIABLE_ModuleInfo_76_76);
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
      MR_Word ItemExport_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ItemMercuryStatus_11, (MR_Integer) 0))) & (MR_Integer) 3);
      MR_Word PredStatus_14;
      MR_Word STATE_VARIABLE_Specs_20_20;
      MR_String MutableName_29 = ((MR_String) ((MR_hl_field(MR_mktag(0), ItemMutable_10, (MR_Integer) 0))));
      MR_Word OrigInst_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable_10, (MR_Integer) 3))));
      MR_Word Inst_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable_10, (MR_Integer) 4))));
      MR_Word MutAttrs_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable_10, (MR_Integer) 7))));
      MR_Word Context_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable_10, (MR_Integer) 8))));
      MR_Word Globals_39;
      MR_Word CompilationTarget_40;
      MR_Word ForeignLanguage_41;
      MR_Word MaybeForeignNames_42;
      MR_Word TrailMutableUpdates_46;
      MR_Word UseTrail_47;
      MR_Word DummyInstVarSet_51;
      MR_Word ExpandedInstSpecs_52;
      MR_Word STATE_VARIABLE_Specs_42_59;
      MR_Word STATE_VARIABLE_Specs_49_66;
      MR_Word STATE_VARIABLE_Specs_69_86;

      switch (ItemExport_13) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 2:
          {
            hlds__make_hlds_error__error_is_exported_4_p_0(Context_37, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[10])), STATE_VARIABLE_Specs_0_18, &STATE_VARIABLE_Specs_42_59);
          }
          break;
        case (MR_Integer) 0:
          STATE_VARIABLE_Specs_42_59 = STATE_VARIABLE_Specs_0_18;
          break;
        case (MR_Integer) 1:
          STATE_VARIABLE_Specs_42_59 = STATE_VARIABLE_Specs_0_18;
          break;
      }
      hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_16, &Globals_39);
      libs__globals__get_target_2_p_0(Globals_39, &CompilationTarget_40);
      ForeignLanguage_41 = ((&hlds__make_hlds__add_mutable_aux_preds_vector_common_4[0 + CompilationTarget_40]))->hlds__make_hlds__add_mutable_aux_preds__vector_common_type_4_0__vct_4_f_0;
      MaybeForeignNames_42 = parse_tree__prog_item__mutable_var_maybe_foreign_names_1_f_0(MutAttrs_36);
      if ((MaybeForeignNames_42 == (MR_Word) ((MR_Unsigned) 0U)))
        STATE_VARIABLE_Specs_49_66 = STATE_VARIABLE_Specs_42_59;
      else
      {
        MR_Word ForeignNames_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeForeignNames_42, (MR_Integer) 0))));
        MR_Word ModuleName_44;
        MR_String _TargetMutableName_45;

        hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_ModuleInfo_0_16, &ModuleName_44);
        hlds__make_hlds__add_mutable_aux_preds__get_global_name_from_foreign_names_9_p_0(STATE_VARIABLE_ModuleInfo_0_16, Context_37, ModuleName_44, MutableName_29, ForeignLanguage_41, ForeignNames_43, &_TargetMutableName_45, STATE_VARIABLE_Specs_42_59, &STATE_VARIABLE_Specs_49_66);
      }
      TrailMutableUpdates_46 = parse_tree__prog_item__mutable_var_trailed_1_f_0(MutAttrs_36);
      libs__globals__lookup_bool_option_3_p_0(Globals_39, (MR_Integer) 240, &UseTrail_47);
      succeeded = (TrailMutableUpdates_46 == (MR_Integer) 1);
      if (succeeded)
        succeeded = (UseTrail_47 == (MR_Integer) 0);
      if (succeeded)
      {
        MR_Word TrailMsg_49;
        MR_Word TrailSpec_50;
        MR_Word Var_84;

        {
          TrailMsg_49 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TrailMsg_49, 0) = ((MR_Box) (Context_37));
          MR_hl_field(MR_mktag(0), TrailMsg_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[68])));
        }
        {
          Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (TrailMsg_49));
          MR_hl_field(MR_mktag(1), Var_84, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          TrailSpec_50 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TrailSpec_50, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), TrailSpec_50, 1) = ((MR_Box) ((MR_Unsigned) 16U));
          MR_hl_field(MR_mktag(0), TrailSpec_50, 2) = ((MR_Box) (Var_84));
        }
        {
          STATE_VARIABLE_Specs_69_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_69_86, 0) = ((MR_Box) (TrailSpec_50));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_69_86, 1) = ((MR_Box) (STATE_VARIABLE_Specs_49_66));
        }
      }
      else
        STATE_VARIABLE_Specs_69_86 = STATE_VARIABLE_Specs_49_66;
      DummyInstVarSet_51 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0));
      hlds__make_hlds__add_mutable_aux_preds__check_mutable_inst_7_p_0(STATE_VARIABLE_ModuleInfo_0_16, Context_37, DummyInstVarSet_51, (MR_Word) ((MR_Unsigned) 0U), Inst_33, (MR_Word) ((MR_Unsigned) 0U), &ExpandedInstSpecs_52);
      if ((ExpandedInstSpecs_52 == (MR_Word) ((MR_Unsigned) 0U)))
        STATE_VARIABLE_Specs_20_20 = STATE_VARIABLE_Specs_69_86;
      else
      {
        MR_Word UnexpandedInstSpecs_55;

        hlds__make_hlds__add_mutable_aux_preds__check_mutable_inst_7_p_0(STATE_VARIABLE_ModuleInfo_0_16, Context_37, DummyInstVarSet_51, (MR_Word) ((MR_Unsigned) 0U), OrigInst_32, (MR_Word) ((MR_Unsigned) 0U), &UnexpandedInstSpecs_55);
        if ((UnexpandedInstSpecs_55 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          STATE_VARIABLE_Specs_20_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), ExpandedInstSpecs_52, STATE_VARIABLE_Specs_69_86);
        }
        else
        {
          STATE_VARIABLE_Specs_20_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), UnexpandedInstSpecs_55, STATE_VARIABLE_Specs_69_86);
        }
      }
      hlds__status__item_mercury_status_to_pred_status_2_p_0(ItemMercuryStatus_11, &PredStatus_14);
      hlds__make_hlds__add_mutable_aux_preds__add_aux_pred_decls_for_mutable_7_p_0(ItemMutable_10, PredStatus_14, NeedQual_12, STATE_VARIABLE_ModuleInfo_0_16, STATE_VARIABLE_ModuleInfo_17, STATE_VARIABLE_Specs_20_20, STATE_VARIABLE_Specs_19);
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
  MR_Word STATE_VARIABLE_Specs_0_28,
  MR_Word * STATE_VARIABLE_Specs_29)
{
  {
    MR_Word TargetMutableNames_18;

    hlds__make_hlds__add_mutable_aux_preds__get_matching_foreign_names_3_p_0(ForeignNames_15, ForeignLanguage_14, &TargetMutableNames_18);
    if ((TargetMutableNames_18 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *TargetMutableName_16 = parse_tree__prog_mutable__mutable_c_var_name_2_f_0(ModuleName_12, MutableName_13);
      *STATE_VARIABLE_Specs_29 = STATE_VARIABLE_Specs_0_28;
    }
    else
    {
      MR_Word Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TargetMutableNames_18, (MR_Integer) 1))));
      MR_Word Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TargetMutableNames_18, (MR_Integer) 0))));

      if ((Var_55 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *TargetMutableName_16 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_56, (MR_Integer) 1))));
        *STATE_VARIABLE_Specs_29 = STATE_VARIABLE_Specs_0_28;
      }
      else
      {
        MR_Word Globals_23;
        MR_Word CompilationTarget_24;
        MR_Word Pieces_25;
        MR_Word Msg_26;
        MR_Word Spec_27;
        MR_Word Var_33;
        MR_Word Var_36;
        MR_Word Var_37;
        MR_String Var_38;
        MR_Word Var_45;
        MR_Word Var_46;
        MR_Word Var_50;

        hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_10, &Globals_23);
        libs__globals__get_target_2_p_0(Globals_23, &CompilationTarget_24);
        Var_38 = libs__globals__compilation_target_string_1_f_0(CompilationTarget_24);
        {
          Var_37 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_37, 0) = ((MR_Box) (Var_38));
        }
        {
          Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (Var_37));
          MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[41])));
        }
        {
          Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[67])));
          MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (Var_36));
        }
        {
          Pieces_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[66])));
          MR_hl_field(MR_mktag(1), Pieces_25, 1) = ((MR_Box) (Var_33));
        }
        {
          Var_46 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_46, 0) = ((MR_Box) (Pieces_25));
        }
        {
          Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (Var_46));
          MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Msg_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Msg_26, 0) = ((MR_Box) (Context_11));
          MR_hl_field(MR_mktag(0), Msg_26, 1) = ((MR_Box) (Var_45));
        }
        {
          Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (Msg_26));
          MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Spec_27 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_27, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Spec_27, 1) = ((MR_Box) ((MR_Unsigned) 16U));
          MR_hl_field(MR_mktag(0), Spec_27, 2) = ((MR_Box) (Var_50));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Specs_29 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_27));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_28));
        }
        *TargetMutableName_16 = parse_tree__prog_mutable__mutable_c_var_name_2_f_0(ModuleName_12, MutableName_13);
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

static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_aux_pred_decls_for_mutable_7_p_0_4(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_aux_pred_decls_for_mutable__468__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_aux_pred_decls_for_mutable_7_p_0_3(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_aux_pred_decls_for_mutable__466__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_aux_pred_decls_for_mutable_7_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_aux_pred_decls_for_mutable__464__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_aux_pred_decls_for_mutable_7_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_aux_pred_decls_for_mutable__462__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_aux_pred_decls_for_mutable_7_p_0(
  MR_Word ItemMutable_8,
  MR_Word PredStatus_9,
  MR_Word NeedQual_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_40,
  MR_Word * STATE_VARIABLE_ModuleInfo_41,
  MR_Word STATE_VARIABLE_Specs_0_42,
  MR_Word * STATE_VARIABLE_Specs_43)
{
  {
    MR_bool succeeded;
    MR_String MutableName_13 = ((MR_String) ((MR_hl_field(MR_mktag(0), ItemMutable_8, (MR_Integer) 0))));
    MR_Word Type_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable_8, (MR_Integer) 2))));
    MR_Word Inst_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable_8, (MR_Integer) 4))));
    MR_Word MutAttrs_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable_8, (MR_Integer) 7))));
    MR_Word Context_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable_8, (MR_Integer) 8))));
    MR_Word MaybeTargetParams_23;

    hlds__make_hlds__add_mutable_aux_preds__get_mutable_target_params_3_p_0(STATE_VARIABLE_ModuleInfo_0_40, MutAttrs_20, &MaybeTargetParams_23);
    if ((MaybeTargetParams_23 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ModuleInfo_41 = STATE_VARIABLE_ModuleInfo_0_40;
      *STATE_VARIABLE_Specs_43 = STATE_VARIABLE_Specs_0_42;
    }
    else
    {
      MR_Word TargetParams_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTargetParams_23, (MR_Integer) 0))));
      MR_Word PreInit_28 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), TargetParams_24, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
      MR_Word LockUnlock_29 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), TargetParams_24, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
      MR_Word UnsafeAccess_30 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), TargetParams_24, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ModuleName_31;
      MR_Word IsConstant_32;
      MR_Word AttachToIO_33;
      MR_Word STATE_VARIABLE_ModuleInfo_44_44;
      MR_Word STATE_VARIABLE_Specs_45_45;
      MR_Word STATE_VARIABLE_ModuleInfo_46_46;
      MR_Word STATE_VARIABLE_Specs_47_47;
      MR_Word STATE_VARIABLE_ModuleInfo_50_50;
      MR_Word STATE_VARIABLE_Specs_51_51;
      MR_Word STATE_VARIABLE_ModuleInfo_54_54;
      MR_Word STATE_VARIABLE_Specs_55_55;

      hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_ModuleInfo_0_40, &ModuleName_31);
      switch (PreInit_28) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            STATE_VARIABLE_ModuleInfo_44_44 = STATE_VARIABLE_ModuleInfo_0_40;
            STATE_VARIABLE_Specs_45_45 = STATE_VARIABLE_Specs_0_42;
          }
          break;
        case (MR_Integer) 1:
          hlds__make_hlds__add_mutable_aux_preds__add_mutable_pre_init_pred_decl_9_p_0(ModuleName_31, MutableName_13, PredStatus_9, NeedQual_10, Context_21, STATE_VARIABLE_ModuleInfo_0_40, &STATE_VARIABLE_ModuleInfo_44_44, STATE_VARIABLE_Specs_0_42, &STATE_VARIABLE_Specs_45_45);
          break;
      }
      hlds__make_hlds__add_mutable_aux_preds__add_mutable_init_pred_decl_9_p_0(ModuleName_31, MutableName_13, PredStatus_9, NeedQual_10, Context_21, STATE_VARIABLE_ModuleInfo_44_44, &STATE_VARIABLE_ModuleInfo_46_46, STATE_VARIABLE_Specs_45_45, &STATE_VARIABLE_Specs_47_47);
      switch (LockUnlock_29) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            STATE_VARIABLE_ModuleInfo_50_50 = STATE_VARIABLE_ModuleInfo_46_46;
            STATE_VARIABLE_Specs_51_51 = STATE_VARIABLE_Specs_47_47;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word STATE_VARIABLE_ModuleInfo_48_48;
            MR_Word STATE_VARIABLE_Specs_49_49;

            hlds__make_hlds__add_mutable_aux_preds__add_mutable_lock_pred_decl_9_p_0(ModuleName_31, MutableName_13, PredStatus_9, NeedQual_10, Context_21, STATE_VARIABLE_ModuleInfo_46_46, &STATE_VARIABLE_ModuleInfo_48_48, STATE_VARIABLE_Specs_47_47, &STATE_VARIABLE_Specs_49_49);
            hlds__make_hlds__add_mutable_aux_preds__add_mutable_unlock_pred_decl_9_p_0(ModuleName_31, MutableName_13, PredStatus_9, NeedQual_10, Context_21, STATE_VARIABLE_ModuleInfo_48_48, &STATE_VARIABLE_ModuleInfo_50_50, STATE_VARIABLE_Specs_49_49, &STATE_VARIABLE_Specs_51_51);
          }
          break;
      }
      switch (UnsafeAccess_30) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            STATE_VARIABLE_ModuleInfo_54_54 = STATE_VARIABLE_ModuleInfo_50_50;
            STATE_VARIABLE_Specs_55_55 = STATE_VARIABLE_Specs_51_51;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word STATE_VARIABLE_ModuleInfo_52_52;
            MR_Word STATE_VARIABLE_Specs_53_53;

            hlds__make_hlds__add_mutable_aux_preds__add_mutable_unsafe_get_pred_decl_11_p_0(ModuleName_31, MutableName_13, Type_15, Inst_17, PredStatus_9, NeedQual_10, Context_21, STATE_VARIABLE_ModuleInfo_50_50, &STATE_VARIABLE_ModuleInfo_52_52, STATE_VARIABLE_Specs_51_51, &STATE_VARIABLE_Specs_53_53);
            hlds__make_hlds__add_mutable_aux_preds__add_mutable_unsafe_set_pred_decl_11_p_0(ModuleName_31, MutableName_13, Type_15, Inst_17, PredStatus_9, NeedQual_10, Context_21, STATE_VARIABLE_ModuleInfo_52_52, &STATE_VARIABLE_ModuleInfo_54_54, STATE_VARIABLE_Specs_53_53, &STATE_VARIABLE_Specs_55_55);
          }
          break;
      }
      IsConstant_32 = parse_tree__prog_item__mutable_var_constant_1_f_0(MutAttrs_20);
      AttachToIO_33 = parse_tree__prog_item__mutable_var_attach_to_io_state_1_f_0(MutAttrs_20);
      switch (IsConstant_32) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word ConstantGetPredDecl_34;
            MR_Word ConstantSetPredDecl_35;
            MR_Word Var_68;
            MR_Word Var_72;
            MR_Word Var_76;
            MR_Word Var_80;
            MR_Word STATE_VARIABLE_ModuleInfo_85_85;
            MR_Word STATE_VARIABLE_Specs_86_86;

            {
              Var_68 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_68, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_3[8]));
              MR_hl_field(MR_mktag(0), Var_68, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__add_aux_pred_decls_for_mutable_7_p_0_1));
              MR_hl_field(MR_mktag(0), Var_68, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), Var_68, 3) = ((MR_Box) (PreInit_28));
              MR_hl_field(MR_mktag(0), Var_68, 4) = ((MR_Box) ((MR_Integer) 0));
            }
            mercury__require__expect_3_p_0(Var_68, (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.add_aux_pred_decls_for_mutable\'/7", (MR_String) "PreInit = need_pre_init_pred");
            {
              Var_72 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_72, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_3[9]));
              MR_hl_field(MR_mktag(0), Var_72, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__add_aux_pred_decls_for_mutable_7_p_0_2));
              MR_hl_field(MR_mktag(0), Var_72, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), Var_72, 3) = ((MR_Box) (LockUnlock_29));
              MR_hl_field(MR_mktag(0), Var_72, 4) = ((MR_Box) ((MR_Integer) 0));
            }
            mercury__require__expect_3_p_0(Var_72, (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.add_aux_pred_decls_for_mutable\'/7", (MR_String) "LockUnlock = need_lock_unlock_preds");
            {
              Var_76 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_76, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_3[10]));
              MR_hl_field(MR_mktag(0), Var_76, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__add_aux_pred_decls_for_mutable_7_p_0_3));
              MR_hl_field(MR_mktag(0), Var_76, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), Var_76, 3) = ((MR_Box) (UnsafeAccess_30));
              MR_hl_field(MR_mktag(0), Var_76, 4) = ((MR_Box) ((MR_Integer) 0));
            }
            mercury__require__expect_3_p_0(Var_76, (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.add_aux_pred_decls_for_mutable\'/7", (MR_String) "UnsafeAccess = need_unsafe_get_set_preds");
            {
              Var_80 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_80, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_3[11]));
              MR_hl_field(MR_mktag(0), Var_80, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__add_aux_pred_decls_for_mutable_7_p_0_4));
              MR_hl_field(MR_mktag(0), Var_80, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), Var_80, 3) = ((MR_Box) (AttachToIO_33));
              MR_hl_field(MR_mktag(0), Var_80, 4) = ((MR_Box) ((MR_Integer) 0));
            }
            mercury__require__expect_3_p_0(Var_80, (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.add_aux_pred_decls_for_mutable\'/7", (MR_String) "AttachToIO = mutable_attach_to_io_state");
            ConstantGetPredDecl_34 = parse_tree__prog_mutable__constant_get_pred_decl_5_f_0(ModuleName_31, MutableName_13, Type_15, Inst_17, Context_21);
            ConstantSetPredDecl_35 = parse_tree__prog_mutable__constant_set_pred_decl_5_f_0(ModuleName_31, MutableName_13, Type_15, Inst_17, Context_21);
            hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0(ConstantGetPredDecl_34, ModuleName_31, MutableName_13, (MR_Integer) 6, PredStatus_9, NeedQual_10, STATE_VARIABLE_ModuleInfo_54_54, &STATE_VARIABLE_ModuleInfo_85_85, STATE_VARIABLE_Specs_55_55, &STATE_VARIABLE_Specs_86_86);
            hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0(ConstantSetPredDecl_35, ModuleName_31, MutableName_13, (MR_Integer) 7, PredStatus_9, NeedQual_10, STATE_VARIABLE_ModuleInfo_85_85, STATE_VARIABLE_ModuleInfo_41, STATE_VARIABLE_Specs_86_86, STATE_VARIABLE_Specs_43);
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Word StdGetPredDecl_36;
            MR_Word StdSetPredDecl_37;
            MR_Word STATE_VARIABLE_ModuleInfo_57_57;
            MR_Word STATE_VARIABLE_Specs_58_58;
            MR_Word STATE_VARIABLE_ModuleInfo_60_60;
            MR_Word STATE_VARIABLE_Specs_61_61;

            StdGetPredDecl_36 = parse_tree__prog_mutable__std_get_pred_decl_5_f_0(ModuleName_31, MutableName_13, Type_15, Inst_17, Context_21);
            StdSetPredDecl_37 = parse_tree__prog_mutable__std_set_pred_decl_5_f_0(ModuleName_31, MutableName_13, Type_15, Inst_17, Context_21);
            hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0(StdGetPredDecl_36, ModuleName_31, MutableName_13, (MR_Integer) 0, PredStatus_9, NeedQual_10, STATE_VARIABLE_ModuleInfo_54_54, &STATE_VARIABLE_ModuleInfo_57_57, STATE_VARIABLE_Specs_55_55, &STATE_VARIABLE_Specs_58_58);
            hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0(StdSetPredDecl_37, ModuleName_31, MutableName_13, (MR_Integer) 1, PredStatus_9, NeedQual_10, STATE_VARIABLE_ModuleInfo_57_57, &STATE_VARIABLE_ModuleInfo_60_60, STATE_VARIABLE_Specs_58_58, &STATE_VARIABLE_Specs_61_61);
            switch (AttachToIO_33) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word IOGetPredDecl_38;
                  MR_Word IOSetPredDecl_39;
                  MR_Word STATE_VARIABLE_ModuleInfo_63_63;
                  MR_Word STATE_VARIABLE_Specs_64_64;

                  IOGetPredDecl_38 = parse_tree__prog_mutable__io_get_pred_decl_5_f_0(ModuleName_31, MutableName_13, Type_15, Inst_17, Context_21);
                  IOSetPredDecl_39 = parse_tree__prog_mutable__io_set_pred_decl_5_f_0(ModuleName_31, MutableName_13, Type_15, Inst_17, Context_21);
                  hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0(IOGetPredDecl_38, ModuleName_31, MutableName_13, (MR_Integer) 2, PredStatus_9, NeedQual_10, STATE_VARIABLE_ModuleInfo_60_60, &STATE_VARIABLE_ModuleInfo_63_63, STATE_VARIABLE_Specs_61_61, &STATE_VARIABLE_Specs_64_64);
                  hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0(IOSetPredDecl_39, ModuleName_31, MutableName_13, (MR_Integer) 3, PredStatus_9, NeedQual_10, STATE_VARIABLE_ModuleInfo_63_63, STATE_VARIABLE_ModuleInfo_41, STATE_VARIABLE_Specs_64_64, STATE_VARIABLE_Specs_43);
                }
                break;
              case (MR_Integer) 0:
                {
                  *STATE_VARIABLE_ModuleInfo_41 = STATE_VARIABLE_ModuleInfo_60_60;
                  *STATE_VARIABLE_Specs_43 = STATE_VARIABLE_Specs_61_61;
                }
                break;
            }
          }
          break;
      }
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__get_mutable_target_params_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word MutAttrs_5,
  MR_Word * MaybeTargetParams_6)
{
  {
    MR_Word Globals_7;
    MR_Word CompilationTarget_8;
    MR_Word ImplLang_9;
    MR_Word Lang_10;
    MR_Word PreInit0_11;
    MR_Word LockUnlock0_12;
    MR_Word UnsafeAccess0_13;
    MR_Word BoxPolicy_15;
    MR_Word IsConstant_17;
    MR_Word PreInit_18;
    MR_Word LockUnlock_19;
    MR_Word UnsafeAccess_20;
    MR_Word TargetParams_21;

    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_4, &Globals_7);
    libs__globals__get_target_2_p_0(Globals_7, &CompilationTarget_8);
    switch (CompilationTarget_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word HighLevelCode_14;

          ImplLang_9 = (MR_Integer) 0;
          Lang_10 = (MR_Integer) 0;
          PreInit0_11 = (MR_Integer) 1;
          LockUnlock0_12 = (MR_Integer) 1;
          UnsafeAccess0_13 = (MR_Integer) 1;
          libs__globals__lookup_bool_option_3_p_0(Globals_7, (MR_Integer) 281, &HighLevelCode_14);
          switch (HighLevelCode_14) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              BoxPolicy_15 = (MR_Integer) 1;
              break;
            case (MR_Integer) 1:
              BoxPolicy_15 = (MR_Integer) 0;
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word IsThreadLocal_16;

          ImplLang_9 = (MR_Integer) 1;
          Lang_10 = (MR_Integer) 1;
          IsThreadLocal_16 = parse_tree__prog_item__mutable_var_thread_local_1_f_0(MutAttrs_5);
          switch (IsThreadLocal_16) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              PreInit0_11 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              PreInit0_11 = (MR_Integer) 1;
              break;
          }
          LockUnlock0_12 = (MR_Integer) 0;
          UnsafeAccess0_13 = (MR_Integer) 1;
          BoxPolicy_15 = (MR_Integer) 0;
        }
        break;
      case (MR_Integer) 3:
        {
          ImplLang_9 = (MR_Integer) 3;
          Lang_10 = (MR_Integer) 3;
          PreInit0_11 = (MR_Integer) 0;
          LockUnlock0_12 = (MR_Integer) 0;
          UnsafeAccess0_13 = (MR_Integer) 0;
          BoxPolicy_15 = (MR_Integer) 0;
        }
        break;
      case (MR_Integer) 2:
        {
          ImplLang_9 = (MR_Integer) 2;
          Lang_10 = (MR_Integer) 2;
          PreInit0_11 = (MR_Integer) 0;
          LockUnlock0_12 = (MR_Integer) 0;
          UnsafeAccess0_13 = (MR_Integer) 1;
          BoxPolicy_15 = (MR_Integer) 0;
        }
        break;
    }
    IsConstant_17 = parse_tree__prog_item__mutable_var_constant_1_f_0(MutAttrs_5);
    switch (IsConstant_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          PreInit_18 = (MR_Integer) 0;
          LockUnlock_19 = (MR_Integer) 0;
          UnsafeAccess_20 = (MR_Integer) 0;
        }
        break;
      case (MR_Integer) 0:
        {
          PreInit_18 = PreInit0_11;
          LockUnlock_19 = LockUnlock0_12;
          UnsafeAccess_20 = UnsafeAccess0_13;
        }
        break;
    }
    {
      TargetParams_21 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TargetParams_21, 0) = (MR_Box) (((((MR_Unsigned) (ImplLang_9) << 6)) | (((((MR_Unsigned) (Lang_10) << 4)) | (((((MR_Unsigned) (BoxPolicy_15) << 3)) | (((((MR_Unsigned) (PreInit_18) << 2)) | (((((MR_Unsigned) (LockUnlock_19) << 1)) | (MR_Unsigned) (UnsafeAccess_20)))))))))));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeTargetParams_6 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TargetParams_21));
    }
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0_8(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__657__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0_7(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__655__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0_6(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__654__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0_5(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__653__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0_4(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__651__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0_3(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__650__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__648__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__646__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0(
  MR_Word ItemPredDecl_11,
  MR_Word ModuleName_12,
  MR_String MutableName_13,
  MR_Word Kind_14,
  MR_Word PredStatus_15,
  MR_Word NeedQual_16,
  MR_Word STATE_VARIABLE_ModuleInfo_0_38,
  MR_Word * STATE_VARIABLE_ModuleInfo_39,
  MR_Word STATE_VARIABLE_Specs_0_40,
  MR_Word * STATE_VARIABLE_Specs_41)
{
  {
    MR_bool succeeded;
    MR_Word PredOrigin_19;
    MR_Word PredName_22;
    MR_Word PredOrFunc_23;
    MR_Word TypesAndModes_24;
    MR_Word WithType_25;
    MR_Word WithInst_26;
    MR_Word MaybeDetism_27;
    MR_Word TypeVarSet_29;
    MR_Word InstVarSet_30;
    MR_Word ExistQVars_31;
    MR_Word Purity_32;
    MR_Word Constraints_33;
    MR_Word Context_34;
    MR_Word Markers_36;
    MR_Word Var_42;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_54;
    MR_Word Var_58;
    MR_Word Var_62;
    MR_Word Var_66;
    MR_Word Var_71;
    MR_Word Var_37;

    {
      PredOrigin_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), PredOrigin_19, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), PredOrigin_19, 1) = ((MR_Box) (ModuleName_12));
      MR_hl_field(MR_mktag(3), PredOrigin_19, 2) = ((MR_Box) (MutableName_13));
      MR_hl_field(MR_mktag(3), PredOrigin_19, 3) = (MR_Box) ((MR_Unsigned) (Kind_14));
    }
    PredName_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl_11, (MR_Integer) 0))));
    PredOrFunc_23 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ItemPredDecl_11, (MR_Integer) 1))) & (MR_Integer) 1);
    TypesAndModes_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl_11, (MR_Integer) 2))));
    WithType_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl_11, (MR_Integer) 3))));
    WithInst_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl_11, (MR_Integer) 4))));
    MaybeDetism_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl_11, (MR_Integer) 5))));
    TypeVarSet_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl_11, (MR_Integer) 7))));
    InstVarSet_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl_11, (MR_Integer) 8))));
    ExistQVars_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl_11, (MR_Integer) 9))));
    Purity_32 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ItemPredDecl_11, (MR_Integer) 10))) & (MR_Integer) 3);
    Constraints_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl_11, (MR_Integer) 11))));
    Context_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl_11, (MR_Integer) 12))));
    Var_45 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0));
    {
      Var_42 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_42, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0_1));
      MR_hl_field(MR_mktag(0), Var_42, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_42, 3) = ((MR_Box) (TypeVarSet_29));
      MR_hl_field(MR_mktag(0), Var_42, 4) = ((MR_Box) (Var_45));
    }
    mercury__require__expect_3_p_0(Var_42, (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.add_pred_decl_info_for_mutable_aux_pred\'/10", (MR_String) "TypeVarSet != varset.init");
    Var_49 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0));
    {
      Var_46 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_46, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), Var_46, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0_2));
      MR_hl_field(MR_mktag(0), Var_46, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_46, 3) = ((MR_Box) (InstVarSet_30));
      MR_hl_field(MR_mktag(0), Var_46, 4) = ((MR_Box) (Var_49));
    }
    mercury__require__expect_3_p_0(Var_46, (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.add_pred_decl_info_for_mutable_aux_pred\'/10", (MR_String) "InstVarSet != varset.init");
    {
      Var_50 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_50, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_3[2]));
      MR_hl_field(MR_mktag(0), Var_50, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0_3));
      MR_hl_field(MR_mktag(0), Var_50, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_50, 3) = ((MR_Box) (ExistQVars_31));
      MR_hl_field(MR_mktag(0), Var_50, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__require__expect_3_p_0(Var_50, (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.add_pred_decl_info_for_mutable_aux_pred\'/10", (MR_String) "ExistQVars != []");
    {
      Var_54 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_54, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_3[3]));
      MR_hl_field(MR_mktag(0), Var_54, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0_4));
      MR_hl_field(MR_mktag(0), Var_54, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_54, 3) = ((MR_Box) (PredOrFunc_23));
      MR_hl_field(MR_mktag(0), Var_54, 4) = ((MR_Box) ((MR_Integer) 0));
    }
    mercury__require__expect_3_p_0(Var_54, (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.add_pred_decl_info_for_mutable_aux_pred\'/10", (MR_String) "PredOrFunc != pf_predicate");
    {
      Var_58 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_58, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_3[4]));
      MR_hl_field(MR_mktag(0), Var_58, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0_5));
      MR_hl_field(MR_mktag(0), Var_58, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_58, 3) = ((MR_Box) (WithType_25));
      MR_hl_field(MR_mktag(0), Var_58, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__require__expect_3_p_0(Var_58, (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.add_pred_decl_info_for_mutable_aux_pred\'/10", (MR_String) "WithType != no");
    {
      Var_62 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_62, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_3[5]));
      MR_hl_field(MR_mktag(0), Var_62, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0_6));
      MR_hl_field(MR_mktag(0), Var_62, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_62, 3) = ((MR_Box) (WithInst_26));
      MR_hl_field(MR_mktag(0), Var_62, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__require__expect_3_p_0(Var_62, (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.add_pred_decl_info_for_mutable_aux_pred\'/10", (MR_String) "WithInst != no");
    {
      Var_66 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_66, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_3[6]));
      MR_hl_field(MR_mktag(0), Var_66, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0_7));
      MR_hl_field(MR_mktag(0), Var_66, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_66, 3) = ((MR_Box) (MaybeDetism_27));
      MR_hl_field(MR_mktag(0), Var_66, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_2[0])));
    }
    mercury__require__expect_3_p_0(Var_66, (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.add_pred_decl_info_for_mutable_aux_pred\'/10", (MR_String) "MaybeDet != yes(detism_det)");
    {
      Var_71 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_71, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_3[7]));
      MR_hl_field(MR_mktag(0), Var_71, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_10_p_0_8));
      MR_hl_field(MR_mktag(0), Var_71, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_71, 3) = ((MR_Box) (Constraints_33));
      MR_hl_field(MR_mktag(0), Var_71, 4) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[64]));
    }
    mercury__require__expect_3_p_0(Var_71, (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.add_pred_decl_info_for_mutable_aux_pred\'/10", (MR_String) "Constraints != constraints([], [])");
    hlds__hlds_pred__marker_list_to_markers_2_p_0((MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[65])), &Markers_36);
    hlds__add_pred__module_add_pred_or_func_21_p_0(PredOrigin_19, Context_34, (MR_Integer) -1, (MR_Word) ((MR_Unsigned) 0U), PredStatus_15, NeedQual_16, PredOrFunc_23, PredName_22, TypeVarSet_29, InstVarSet_30, ExistQVars_31, TypesAndModes_24, Constraints_33, MaybeDetism_27, Purity_32, Markers_36, &Var_37, STATE_VARIABLE_ModuleInfo_0_38, STATE_VARIABLE_ModuleInfo_39, STATE_VARIABLE_Specs_0_40, STATE_VARIABLE_Specs_41);
  }
}

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_pre_init_pred_decl_9_p_0(
  MR_Word ModuleName_10,
  MR_String MutableName_11,
  MR_Word PredStatus_12,
  MR_Word NeedQual_13,
  MR_Word Context_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_19,
  MR_Word * STATE_VARIABLE_ModuleInfo_20,
  MR_Word STATE_VARIABLE_Specs_0_21,
  MR_Word * STATE_VARIABLE_Specs_22)
{
  {
    MR_Word PredName_17;

    PredName_17 = parse_tree__prog_mutable__mutable_pre_init_pred_sym_name_2_f_0(ModuleName_10, MutableName_11);
    hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_decl_13_p_0(ModuleName_10, MutableName_11, (MR_Integer) 10, PredName_17, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 2, PredStatus_12, NeedQual_13, Context_14, STATE_VARIABLE_ModuleInfo_0_19, STATE_VARIABLE_ModuleInfo_20, STATE_VARIABLE_Specs_0_21, STATE_VARIABLE_Specs_22);
  }
}

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_init_pred_decl_9_p_0(
  MR_Word ModuleName_10,
  MR_String MutableName_11,
  MR_Word PredStatus_12,
  MR_Word NeedQual_13,
  MR_Word Context_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_19,
  MR_Word * STATE_VARIABLE_ModuleInfo_20,
  MR_Word STATE_VARIABLE_Specs_0_21,
  MR_Word * STATE_VARIABLE_Specs_22)
{
  {
    MR_Word PredName_17;

    PredName_17 = parse_tree__prog_mutable__mutable_init_pred_sym_name_2_f_0(ModuleName_10, MutableName_11);
    hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_decl_13_p_0(ModuleName_10, MutableName_11, (MR_Integer) 10, PredName_17, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 2, PredStatus_12, NeedQual_13, Context_14, STATE_VARIABLE_ModuleInfo_0_19, STATE_VARIABLE_ModuleInfo_20, STATE_VARIABLE_Specs_0_21, STATE_VARIABLE_Specs_22);
  }
}

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_unlock_pred_decl_9_p_0(
  MR_Word ModuleName_10,
  MR_String MutableName_11,
  MR_Word PredStatus_12,
  MR_Word NeedQual_13,
  MR_Word Context_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_19,
  MR_Word * STATE_VARIABLE_ModuleInfo_20,
  MR_Word STATE_VARIABLE_Specs_0_21,
  MR_Word * STATE_VARIABLE_Specs_22)
{
  {
    MR_Word PredName_17;

    PredName_17 = parse_tree__prog_mutable__mutable_unlock_pred_sym_name_2_f_0(ModuleName_10, MutableName_11);
    hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_decl_13_p_0(ModuleName_10, MutableName_11, (MR_Integer) 9, PredName_17, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 2, PredStatus_12, NeedQual_13, Context_14, STATE_VARIABLE_ModuleInfo_0_19, STATE_VARIABLE_ModuleInfo_20, STATE_VARIABLE_Specs_0_21, STATE_VARIABLE_Specs_22);
  }
}

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_lock_pred_decl_9_p_0(
  MR_Word ModuleName_10,
  MR_String MutableName_11,
  MR_Word PredStatus_12,
  MR_Word NeedQual_13,
  MR_Word Context_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_19,
  MR_Word * STATE_VARIABLE_ModuleInfo_20,
  MR_Word STATE_VARIABLE_Specs_0_21,
  MR_Word * STATE_VARIABLE_Specs_22)
{
  {
    MR_Word PredName_17;

    PredName_17 = parse_tree__prog_mutable__mutable_lock_pred_sym_name_2_f_0(ModuleName_10, MutableName_11);
    hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_decl_13_p_0(ModuleName_10, MutableName_11, (MR_Integer) 8, PredName_17, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 2, PredStatus_12, NeedQual_13, Context_14, STATE_VARIABLE_ModuleInfo_0_19, STATE_VARIABLE_ModuleInfo_20, STATE_VARIABLE_Specs_0_21, STATE_VARIABLE_Specs_22);
  }
}

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_unsafe_set_pred_decl_11_p_0(
  MR_Word ModuleName_12,
  MR_String MutableName_13,
  MR_Word Type_14,
  MR_Word Inst_15,
  MR_Word PredStatus_16,
  MR_Word NeedQual_17,
  MR_Word Context_18,
  MR_Word STATE_VARIABLE_ModuleInfo_0_23,
  MR_Word * STATE_VARIABLE_ModuleInfo_24,
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26)
{
  {
    MR_Word PredName_21;
    MR_Word ArgTypesAndModes_22;
    MR_Word Var_27;
    MR_Word Var_28;

    PredName_21 = parse_tree__prog_mutable__mutable_unsafe_set_pred_sym_name_2_f_0(ModuleName_12, MutableName_13);
    Var_28 = parse_tree__prog_mode__in_mode_1_f_0(Inst_15);
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (Type_14));
      MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (Var_28));
    }
    {
      ArgTypesAndModes_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ArgTypesAndModes_22, 0) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(1), ArgTypesAndModes_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_decl_13_p_0(ModuleName_12, MutableName_13, (MR_Integer) 5, PredName_21, ArgTypesAndModes_22, (MR_Integer) 2, PredStatus_16, NeedQual_17, Context_18, STATE_VARIABLE_ModuleInfo_0_23, STATE_VARIABLE_ModuleInfo_24, STATE_VARIABLE_Specs_0_25, STATE_VARIABLE_Specs_26);
  }
}

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_unsafe_get_pred_decl_11_p_0(
  MR_Word ModuleName_12,
  MR_String MutableName_13,
  MR_Word Type_14,
  MR_Word Inst_15,
  MR_Word PredStatus_16,
  MR_Word NeedQual_17,
  MR_Word Context_18,
  MR_Word STATE_VARIABLE_ModuleInfo_0_23,
  MR_Word * STATE_VARIABLE_ModuleInfo_24,
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26)
{
  {
    MR_Word PredName_21;
    MR_Word ArgTypesAndModes_22;
    MR_Word Var_27;
    MR_Word Var_28;

    PredName_21 = parse_tree__prog_mutable__mutable_unsafe_get_pred_sym_name_2_f_0(ModuleName_12, MutableName_13);
    Var_28 = parse_tree__prog_mode__out_mode_1_f_0(Inst_15);
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (Type_14));
      MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (Var_28));
    }
    {
      ArgTypesAndModes_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ArgTypesAndModes_22, 0) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(1), ArgTypesAndModes_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_decl_13_p_0(ModuleName_12, MutableName_13, (MR_Integer) 4, PredName_21, ArgTypesAndModes_22, (MR_Integer) 1, PredStatus_16, NeedQual_17, Context_18, STATE_VARIABLE_ModuleInfo_0_23, STATE_VARIABLE_ModuleInfo_24, STATE_VARIABLE_Specs_0_25, STATE_VARIABLE_Specs_26);
  }
}

static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_decl_13_p_0(
  MR_Word ModuleName_14,
  MR_String MutableName_15,
  MR_Word Kind_16,
  MR_Word PredName_17,
  MR_Word ArgTypesAndModes_18,
  MR_Word Purity_19,
  MR_Word PredStatus_20,
  MR_Word NeedQual_21,
  MR_Word Context_22,
  MR_Word STATE_VARIABLE_ModuleInfo_0_34,
  MR_Word * STATE_VARIABLE_ModuleInfo_35,
  MR_Word STATE_VARIABLE_Specs_0_36,
  MR_Word * STATE_VARIABLE_Specs_37)
{
  {
    MR_Word PredOrigin_25;
    MR_Word TypeVarSet_28;
    MR_Word InstVarSet_29;
    MR_Word Markers_32;
    MR_Word Var_33;

    {
      PredOrigin_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), PredOrigin_25, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), PredOrigin_25, 1) = ((MR_Box) (ModuleName_14));
      MR_hl_field(MR_mktag(3), PredOrigin_25, 2) = ((MR_Box) (MutableName_15));
      MR_hl_field(MR_mktag(3), PredOrigin_25, 3) = (MR_Box) ((MR_Unsigned) (Kind_16));
    }
    TypeVarSet_28 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0));
    InstVarSet_29 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0));
    hlds__hlds_pred__marker_list_to_markers_2_p_0((MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[65])), &Markers_32);
    hlds__add_pred__module_add_pred_or_func_21_p_0(PredOrigin_25, Context_22, (MR_Integer) -1, (MR_Word) ((MR_Unsigned) 0U), PredStatus_20, NeedQual_21, (MR_Integer) 0, PredName_17, TypeVarSet_28, InstVarSet_29, (MR_Word) ((MR_Unsigned) 0U), ArgTypesAndModes_18, (MR_Word) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[64]), (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_2[0])), Purity_19, Markers_32, &Var_33, STATE_VARIABLE_ModuleInfo_0_34, STATE_VARIABLE_ModuleInfo_35, STATE_VARIABLE_Specs_0_36, STATE_VARIABLE_Specs_37);
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
            {
              hlds__make_hlds__add_mutable_aux_preds__invalid_inst_in_mutable_8_p_0(ModuleInfo_8, Context_9, InstVarSet_10, ParentInsts_11, Inst_12, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[21])), STATE_VARIABLE_Specs_0_69, STATE_VARIABLE_Specs_70);
            }
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.check_mutable_inst\'/7", (MR_String) "not_reached");
                return;
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          hlds__make_hlds__add_mutable_aux_preds__invalid_inst_in_mutable_8_p_0(ModuleInfo_8, Context_9, InstVarSet_10, ParentInsts_11, Inst_12, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[21])), STATE_VARIABLE_Specs_0_69, STATE_VARIABLE_Specs_70);
        }
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
            {
              hlds__make_hlds__add_mutable_aux_preds__invalid_inst_in_mutable_8_p_0(ModuleInfo_8, Context_9, InstVarSet_10, ParentInsts_11, Inst_12, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[25])), STATE_VARIABLE_Specs_0_69, STATE_VARIABLE_Specs_70);
            }
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
                    MR_Word UserInstId_23;

                    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), UserInstArgs_21, &UserInstArity_22);
                    {
                      UserInstId_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), UserInstId_23, 0) = ((MR_Box) (UserInstSymName_20));
                      MR_hl_field(MR_mktag(0), UserInstId_23, 1) = ((MR_Box) (UserInstArity_22));
                    }
                    succeeded = mercury__list__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0), ((MR_Box) (UserInstId_23)), ParentInsts_11);
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
                        hlds__make_hlds__add_mutable_aux_preds__invalid_inst_in_mutable_8_p_0(ModuleInfo_8, Context_9, InstVarSet_10, ParentInsts_11, UnqualInst_28, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[21])), STATE_VARIABLE_Specs_0_69, STATE_VARIABLE_Specs_70);
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
                        succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_inst_defn_0), UserInstTable_30, ((MR_Box) (UserInstId_23)), &conv0_InstDefn_31);
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
                            MR_hl_field(MR_mktag(1), DefnParentInsts_39, 0) = ((MR_Box) (UserInstId_23));
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
                        {
                          hlds__make_hlds__add_mutable_aux_preds__invalid_inst_in_mutable_8_p_0(ModuleInfo_8, Context_9, InstVarSet_10, ParentInsts_11, Inst_12, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[63])), STATE_VARIABLE_Specs_122_122, STATE_VARIABLE_Specs_70);
                        }
                      }
                    }
                  }
                  break;
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                  {
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.check_mutable_inst\'/7", (MR_String) "non-user inst");
                      return;
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.check_mutable_inst\'/7", (MR_String) "non-user inst");
                      return;
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 5:
            {
              hlds__make_hlds__add_mutable_aux_preds__invalid_inst_in_mutable_8_p_0(ModuleInfo_8, Context_9, InstVarSet_10, ParentInsts_11, Inst_12, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[23])), STATE_VARIABLE_Specs_0_69, STATE_VARIABLE_Specs_70);
            }
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
            UniqPieces_18 = (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[21]));
          else
            UniqPieces_18 = (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[52]));
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
            UniqPieces_66 = (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[21]));
          else
            UniqPieces_66 = (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[55]));
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
            UniqPieces_90 = (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[21]));
          else
            UniqPieces_90 = (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[58]));
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
            UniqPieces_114 = (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[21]));
          else
            UniqPieces_114 = (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[61]));
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
  MR_Word STATE_VARIABLE_Specs_0_21,
  MR_Word * STATE_VARIABLE_Specs_22)
{
  {
    MR_Word ParentPieces_16;
    MR_Word InstPieces_17;
    MR_Word Pieces_18;
    MR_Word Msg_19;
    MR_Word Spec_20;
    MR_Word Var_34;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_41;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_50;

    hlds__make_hlds__add_mutable_aux_preds__named_parents_to_pieces_2_p_0(ParentInsts_12, &ParentPieces_16);
    InstPieces_17 = hlds__error_msg_inst__error_msg_inst_8_f_0(ModuleInfo_9, InstVarSet_11, (MR_Integer) 0, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[44])), (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[46])), Inst_13);
    {
      Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[47])));
      MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (ParentPieces_16));
    }
    {
      Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[48])));
      MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (InstPieces_17));
    }
    Var_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ProblemPieces_14, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[11])));
    Var_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_38, Var_41);
    Pieces_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_34, Var_37);
    {
      Var_46 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_46, 0) = ((MR_Box) (Pieces_18));
    }
    {
      Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Msg_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Msg_19, 0) = ((MR_Box) (Context_10));
      MR_hl_field(MR_mktag(0), Msg_19, 1) = ((MR_Box) (Var_45));
    }
    {
      Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (Msg_19));
      MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_20 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_20, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_20, 1) = ((MR_Box) ((MR_Unsigned) 16U));
      MR_hl_field(MR_mktag(0), Spec_20, 2) = ((MR_Box) (Var_50));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_22 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_20));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_21));
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
    MR_Word InstId_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word InstIds_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word HeadPieces_6;
    MR_Word TailPieces_7;
    MR_Word InstName_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstId_3, (MR_Integer) 0))));
    MR_Integer InstArity_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), InstId_3, (MR_Integer) 1))));
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
      MR_hl_field(MR_mktag(1), Var_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[31])));
    }
    {
      HeadPieces_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadPieces_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[42])));
      MR_hl_field(MR_mktag(1), HeadPieces_6, 1) = ((MR_Box) (Var_15));
    }
    hlds__make_hlds__add_mutable_aux_preds__named_parents_to_pieces_2_p_0(InstIds_4, &TailPieces_7);
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
