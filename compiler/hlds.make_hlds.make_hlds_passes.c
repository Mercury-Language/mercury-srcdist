/*
** Automatically generated from `make_hlds_passes.m'
** by the Mercury compiler,
** version rotd-2026-08-31
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


// :- module hlds.make_hlds.make_hlds_passes.
// :- implementation.

/*
INIT mercury__hlds__make_hlds__make_hlds_passes__init
ENDINIT
*/

#include "hlds.make_hlds.make_hlds_passes.mih"


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
#include "term_subst.mih"
#include "termination.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.add_special_pred.mih"
#include "hlds.const_struct.mih"
#include "hlds.default_func_mode.mih"
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
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_proc.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.make_hlds.mih"
#include "hlds.pred_info_types.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_proc_id.mih"
#include "hlds.pred_table.mih"
#include "hlds.proc_info_types.mih"
#include "hlds.proc_table_struct.mih"
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optdb_help.mih"
#include "libs.optimization_options.mih"
#include "libs.option_categories.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.build_eqv_maps.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.find_module.mih"
#include "parse_tree.get_dependencies.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_rare.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_item_inst_mode.mih"
#include "parse_tree.prog_item_pragma.mih"
#include "parse_tree.prog_item_pred_proc_id.mih"
#include "parse_tree.prog_item_stats.mih"
#include "parse_tree.prog_item_type.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_construct.mih"
#include "parse_tree.prog_type_test.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "recompilation.item_types.mih"
#include "recompilation.record_uses.mih"
#include "termination.term_constr.mih"
#include "termination.term_osi.mih"
#include "hlds.make_hlds.add_class.mih"
#include "hlds.make_hlds.add_clause.mih"
#include "hlds.make_hlds.add_foreign_proc.mih"
#include "hlds.make_hlds.add_mode.mih"
#include "hlds.make_hlds.add_mutable_aux_preds.mih"
#include "hlds.make_hlds.add_pragma_decl.mih"
#include "hlds.make_hlds.add_pragma_gen.mih"
#include "hlds.make_hlds.add_pragma_impl.mih"
#include "hlds.make_hlds.add_pred.mih"
#include "hlds.make_hlds.add_solver.mih"
#include "hlds.make_hlds.add_type.mih"
#include "hlds.make_hlds.check_field_access_functions.mih"
#include "hlds.make_hlds.make_hlds_separate_items.mih"
#include "hlds.make_hlds.make_hlds_types.mih"
#include "hlds.make_hlds.make_hlds_warn.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "mdbcomp.feedback.feedback_info.mih"
#include "parse_tree.module_qual.id_set.mih"
#include "parse_tree.module_qual.mq_info.mih"
#include "termination.term_constr.term_constr_errors.mih"
#include "termination.term_constr.term_constr_main_types.mih"
#include "termination.term_osi.term_osi_errors.mih"
#include "termination.term_osi.term_osi_util.mih"



struct hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0_s {
  MR_Word * hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__ExpectedHeadModes_4;
  MR_bool hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__succeeded;
  MR_Word hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__ProcInfos_7;
  jmp_buf hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__commit_0;
  MR_Word hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__TypeInfo_26_26;
  MR_Word hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__MaybeHeadModes_12;
  MR_Word hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__HeadModes_13;
  MR_Word hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__MaybeDetism_14;
  MR_Word hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__Detism_15;
  MR_Word hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__ProcInfo_23;
  MR_Box hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__conv0_ProcInfo_23;
};


static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__set_ordlist__pti_set_ordlist_1__plain_term_context__type_ctor_info_term_context_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__parse_tree__prog_item_type__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__hlds__make_hlds__make_hlds_types__ti_sec_sub_list_1parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__cord__pti_cord_1__plain_hlds__make_hlds__make_hlds_types__ti_sec_sub_list_1parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_foreign_proc_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__cord__pti_cord_1__plain_hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_foreign_proc_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__hlds__make_hlds__make_hlds_types__ti_sec_sub_list_1parse_tree__prog_item__type_ctor_info_item_mutable_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__cord__pti_cord_1__plain_hlds__make_hlds__make_hlds_types__ti_sec_sub_list_1parse_tree__prog_item__type_ctor_info_item_mutable_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_warn_spec_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__parse_tree__prog_item_inst_mode__pti_item_inst_defn_info_general_1__plain_parse_tree__prog_item_inst_mode__type_ctor_info_maybe_abstract_inst_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__parse_tree__prog_item_inst_mode__pti_item_mode_defn_info_general_1__plain_parse_tree__prog_item_inst_mode__type_ctor_info_maybe_abstract_mode_defn_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__maybe__ti_maybe_1builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__make_hlds_passes__pair__ti_pair_2hlds__pred_proc_id__type_ctor_info_pred_id_0maybe__ti_maybe_1builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__maybe__pti_maybe_1__plain_pair__ti_pair_2hlds__pred_proc_id__type_ctor_info_pred_id_0maybe__ti_maybe_1builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__cord__pti_cord_1__plain_parse_tree__prog_item_pragma__type_ctor_info_impl_pragma_fproc_export_info_0;

static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__make_hlds_passes__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__make_hlds_passes__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

static const MR_EnumFunctorDesc hlds__make_hlds__make_hlds_passes__hlds__make_hlds__make_hlds_passes__enum_functor_desc_init_or_final_0_0;

static const MR_EnumFunctorDesc hlds__make_hlds__make_hlds_passes__hlds__make_hlds__make_hlds_passes__enum_functor_desc_init_or_final_0_1;

static const MR_EnumFunctorDescPtr hlds__make_hlds__make_hlds_passes__hlds__make_hlds__make_hlds_passes__enum_ordinal_ordered_init_or_final_0[2];

static const MR_EnumFunctorDescPtr hlds__make_hlds__make_hlds_passes__hlds__make_hlds__make_hlds_passes__enum_name_ordered_init_or_final_0[2];

static const MR_Integer hlds__make_hlds__make_hlds_passes__hlds__make_hlds__make_hlds_passes__functor_number_map_init_or_final_0[2];

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__IntroducedFrom__pred__parse_tree_to_hlds__181__1_1_p_0(
  MR_Word LambdaHeadVar__1_143);

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__IntroducedFrom__pred__parse_tree_to_hlds__176__1_1_p_0(
  MR_Word LambdaHeadVar__1_141);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes____Compare____init_or_final_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes____Unify____init_or_final_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__update_module_item_version_numbers_4_p_0(
  MR_Word ModuleName_5,
  MR_Word ModuleItemVersionNumbers_6,
  MR_Word STATE_VARIABLE_RecompInfo_0_10,
  MR_Word * STATE_VARIABLE_RecompInfo_11);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_module_item_version_numbers_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_module_item_version_numbers_4_p_0(
  MR_Word ModuleName_5,
  MR_Word ModuleItemVersionNumbers_6,
  MR_Word STATE_VARIABLE_QualInfo_0_8,
  MR_Word * STATE_VARIABLE_QualInfo_9);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_finalise_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word ItemMercuryStatus_11,
  MR_Word FinaliseInfo_12,
  MR_Word STATE_VARIABLE_PragmaFPEInfoCord_0_24,
  MR_Word * STATE_VARIABLE_PragmaFPEInfoCord_25,
  MR_Word STATE_VARIABLE_PredTargetNames_0_26,
  MR_Word * STATE_VARIABLE_PredTargetNames_27,
  MR_Word STATE_VARIABLE_Specs_0_28,
  MR_Word * STATE_VARIABLE_Specs_29);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_initialise_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word ItemMercuryStatus_11,
  MR_Word Initialise_12,
  MR_Word STATE_VARIABLE_PragmaFPEInfoCord_0_24,
  MR_Word * STATE_VARIABLE_PragmaFPEInfoCord_25,
  MR_Word STATE_VARIABLE_PredTargetNames_0_26,
  MR_Word * STATE_VARIABLE_PredTargetNames_27,
  MR_Word STATE_VARIABLE_Specs_0_28,
  MR_Word * STATE_VARIABLE_Specs_29);

static MR_Box MR_CALL 
hlds__make_hlds__make_hlds_passes__implement_initialise_finalise_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__implement_initialise_finalise_12_p_0(
  MR_Word ModuleInfo_13,
  MR_Word InitOrFinal_14,
  MR_Word SymName_15,
  MR_Word UserArity_16,
  MR_Word Context_17,
  MR_Word SeqNum_18,
  MR_Word STATE_VARIABLE_PragmaFPEInfoCord_0_43,
  MR_Word * STATE_VARIABLE_PragmaFPEInfoCord_44,
  MR_Word STATE_VARIABLE_PredTargetNames_0_45,
  MR_Word * STATE_VARIABLE_PredTargetNames_46,
  MR_Word STATE_VARIABLE_Specs_0_47,
  MR_Word * STATE_VARIABLE_Specs_48);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_pragma_foreign_proc_export_7_p_0(
  MR_Word Globals_8,
  MR_Word SymName_9,
  MR_Word HeadModes_10,
  MR_String CName_11,
  MR_Word Origin_12,
  MR_Word Context_13,
  MR_Word * FPEInfo_14);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_4(
  void * env_ptr_arg);

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0(
  MR_Word PredInfo_3,
  MR_Word * ExpectedHeadModes_4);

static MR_Word MR_CALL 
hlds__make_hlds__make_hlds_passes__get_qual_pred_desc_piece_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word PredId_5);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_promise_11_p_0(
  MR_Word ProgressStream_12,
  MR_Word PredStatus_13,
  MR_Word PromiseInfo_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_40,
  MR_Word * STATE_VARIABLE_ModuleInfo_41,
  MR_Word STATE_VARIABLE_QualInfo_0_42,
  MR_Word * STATE_VARIABLE_QualInfo_43,
  MR_Word STATE_VARIABLE_ErrSpecs_0_44,
  MR_Word * STATE_VARIABLE_ErrSpecs_45,
  MR_Word STATE_VARIABLE_WarnSpecs_0_46,
  MR_Word * STATE_VARIABLE_WarnSpecs_47);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__maybe_add_default_mode_3_p_0(
  MR_Word PredDecl_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_30,
  MR_Word * STATE_VARIABLE_ModuleInfo_31);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_type_defn_17_p_0(
  MR_Word SectionInfo_18,
  MR_Word TypeStatus_19,
  MR_Word TypeDefnInfo_20,
  MR_Word STATE_VARIABLE_ModuleInfo_0_55,
  MR_Word * STATE_VARIABLE_ModuleInfo_56,
  MR_Word STATE_VARIABLE_PredDeclCord_0_57,
  MR_Word * STATE_VARIABLE_PredDeclCord_58,
  MR_Word STATE_VARIABLE_ForeignProcCord_0_59,
  MR_Word * STATE_VARIABLE_ForeignProcCord_60,
  MR_Word STATE_VARIABLE_MutableCord_0_61,
  MR_Word * STATE_VARIABLE_MutableCord_62,
  MR_Word STATE_VARIABLE_InvalidTypeSpecs_0_63,
  MR_Word * STATE_VARIABLE_InvalidTypeSpecs_64,
  MR_Word STATE_VARIABLE_ErrSpecs_0_65,
  MR_Word * STATE_VARIABLE_ErrSpecs_66,
  MR_Word STATE_VARIABLE_WarnSpecs_0_67,
  MR_Word * STATE_VARIABLE_WarnSpecs_68);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_item_avail_4_p_0(
  MR_Word ItemMercuryStatus_5,
  MR_Word Avail_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_16,
  MR_Word * STATE_VARIABLE_ModuleInfo_17);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_builtin_type_ctor_special_preds_in_builtin_module_3_p_0(
  MR_Word TypeCtor_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_10,
  MR_Word * STATE_VARIABLE_ModuleInfo_11);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__acc_include_contexts_3_p_0(
  MR_Word IncludeModuleInfo_4,
  MR_Word STATE_VARIABLE_ContextSet_0_8,
  MR_Word * STATE_VARIABLE_ContextSet_9);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__parse_tree_to_hlds_15_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__parse_tree_to_hlds_15_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__parse_tree_to_hlds_15_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__parse_tree_to_hlds_15_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__parse_tree_to_hlds_15_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__parse_tree_to_hlds_15_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__parse_tree_to_hlds_15_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__parse_tree_to_hlds_15_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__parse_tree_to_hlds_15_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__parse_tree_to_hlds_15_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__parse_tree_to_hlds_15_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__parse_tree_to_hlds_15_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__parse_tree_to_hlds_15_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_finalises_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_finalises_8_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_PragmaFPEInfoCord_0_3,
  MR_Word * STATE_VARIABLE_PragmaFPEInfoCord_4,
  MR_Word STATE_VARIABLE_PredTargetNames_0_5,
  MR_Word * STATE_VARIABLE_PredTargetNames_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_initialises_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_initialises_8_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_PragmaFPEInfoCord_0_3,
  MR_Word * STATE_VARIABLE_PragmaFPEInfoCord_4,
  MR_Word STATE_VARIABLE_PredTargetNames_0_5,
  MR_Word * STATE_VARIABLE_PredTargetNames_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_promises_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_promises_10_p_0(
  MR_Word ProgressStream_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ModuleInfo_0_3,
  MR_Word * STATE_VARIABLE_ModuleInfo_4,
  MR_Word STATE_VARIABLE_QualInfo_0_5,
  MR_Word * STATE_VARIABLE_QualInfo_6,
  MR_Word STATE_VARIABLE_ErrSpecs_0_7,
  MR_Word * STATE_VARIABLE_ErrSpecs_8,
  MR_Word STATE_VARIABLE_WarnSpecs_0_9,
  MR_Word * STATE_VARIABLE_WarnSpecs_10);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_clauses_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_clauses_10_p_0(
  MR_Word ProgressStream_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ModuleInfo_0_3,
  MR_Word * STATE_VARIABLE_ModuleInfo_4,
  MR_Word STATE_VARIABLE_QualInfo_0_5,
  MR_Word * STATE_VARIABLE_QualInfo_6,
  MR_Word STATE_VARIABLE_ErrSpecs_0_7,
  MR_Word * STATE_VARIABLE_ErrSpecs_8,
  MR_Word STATE_VARIABLE_WarnSpecs_0_9,
  MR_Word * STATE_VARIABLE_WarnSpecs_10);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__maybe_add_default_modes_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__maybe_add_default_modes_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ModuleInfo_0_2,
  MR_Word * STATE_VARIABLE_ModuleInfo_3);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_mode_decls_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_mode_decls_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ModuleInfo_0_2,
  MR_Word * STATE_VARIABLE_ModuleInfo_3,
  MR_Word STATE_VARIABLE_ErrSpecs_0_4,
  MR_Word * STATE_VARIABLE_ErrSpecs_5);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pred_decls_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pred_decls_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ModuleInfo_0_2,
  MR_Word * STATE_VARIABLE_ModuleInfo_3,
  MR_Word STATE_VARIABLE_ErrSpecs_0_4,
  MR_Word * STATE_VARIABLE_ErrSpecs_5);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_mode_defns_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_mode_defns_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ModuleInfo_0_2,
  MR_Word * STATE_VARIABLE_ModuleInfo_3,
  MR_Word STATE_VARIABLE_ErrSpecs_0_4,
  MR_Word * STATE_VARIABLE_ErrSpecs_5);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_inst_defns_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_inst_defns_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ModuleInfo_0_2,
  MR_Word * STATE_VARIABLE_ModuleInfo_3,
  MR_Word STATE_VARIABLE_ErrSpecs_0_4,
  MR_Word * STATE_VARIABLE_ErrSpecs_5,
  MR_Word STATE_VARIABLE_WarnSpecs_0_6,
  MR_Word * STATE_VARIABLE_WarnSpecs_7);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_type_defns_15_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9,
  MR_Box wrapper_arg_10,
  MR_Box * wrapper_arg_11,
  MR_Box wrapper_arg_12,
  MR_Box * wrapper_arg_13,
  MR_Box wrapper_arg_14,
  MR_Box * wrapper_arg_15);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_type_defns_15_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ModuleInfo_0_2,
  MR_Word * STATE_VARIABLE_ModuleInfo_3,
  MR_Word STATE_VARIABLE_PredDeclCord_0_4,
  MR_Word * STATE_VARIABLE_PredDeclCord_5,
  MR_Word STATE_VARIABLE_ForeignProcCord_0_6,
  MR_Word * STATE_VARIABLE_ForeignProcCord_7,
  MR_Word STATE_VARIABLE_MutableCord_0_8,
  MR_Word * STATE_VARIABLE_MutableCord_9,
  MR_Word STATE_VARIABLE_InvalidTypeSpecs_0_10,
  MR_Word * STATE_VARIABLE_InvalidTypeSpecs_11,
  MR_Word STATE_VARIABLE_ErrSpecs_0_12,
  MR_Word * STATE_VARIABLE_ErrSpecs_13,
  MR_Word STATE_VARIABLE_WarnSpecs_0_14,
  MR_Word * STATE_VARIABLE_WarnSpecs_15);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_item_avails_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_item_avails_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ModuleInfo_0_2,
  MR_Word * STATE_VARIABLE_ModuleInfo_3);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__maybe_warn_include_and_non_include_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__maybe_warn_include_and_non_include_3_p_0(
  MR_Word Globals_4,
  MR_Word ParseTreeModuleSrc_5,
  MR_Word * Specs_6);

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__imports_only_implicit_builtins_1_p_0(
  MR_Word ImportUseMap_2);

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__imports_only_implicit_builtins_test_all_1_p_0(
  MR_Word HeadVar__1_1);

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes____Unify____init_or_final_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes____Compare____init_or_final_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_1[102][2];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_2[15][3];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_3[1][1];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_4[7][6];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_5[3][7];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_6[1][20];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_7[1][11];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_8[1][9];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_9[4][12];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_10[1][13];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_11[1][15];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_12[1][14];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_13[1][4];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_14[5][8];




static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_1[102][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_sec_sub_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_ims_sub_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_proc_info_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_sec_sub_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_warn_spec_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_ims_sub_list_1)),
    ((MR_Box) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_impl_pragma_tabled_info_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0))
  },
  /* row   8 */
  {
    ((MR_Box) (&parse_tree__prog_item_type__parse_tree__prog_item_type__type_ctor_info_item_type_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0))
  },
  /* row   9 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[1]))
  },
  /* row  10 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[2]))
  },
  /* row  11 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[3]))
  },
  /* row  12 */
  {
    ((MR_Box) (&parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_item_inst_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_maybe_abstract_inst_defn_0))
  },
  /* row  13 */
  {
    ((MR_Box) (&parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_item_mode_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_maybe_abstract_mode_defn_0))
  },
  /* row  14 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_proc_id_0))
  },
  /* row  15 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_2[0]))
  },
  /* row  16 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row  17 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_impl_pragma_fproc_export_info_0))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Warning:"))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__make_hlds_passes_scalar_common_1[18]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "module"))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "contains"))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__make_hlds_passes_scalar_common_1[21]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "both"))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__make_hlds_passes_scalar_common_1[23]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declarations"))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__make_hlds_passes_scalar_common_1[25]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 35U)),
    ((MR_Box) ((MR_String) "include_module"))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__make_hlds_passes_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__make_hlds_passes_scalar_common_1[26])))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__make_hlds_passes_scalar_common_1[29]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "other kinds of entities."))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__make_hlds_passes_scalar_common_1[31]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  33 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "after a change."))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__make_hlds_passes_scalar_common_1[34]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__make_hlds_passes_scalar_common_1[33])))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the number of modules needing to be recompiled"))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__make_hlds_passes_scalar_common_1[36]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__make_hlds_passes_scalar_common_1[35])))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Moving those entities to other modules can reduce"))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__make_hlds_passes_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__make_hlds_passes_scalar_common_1[37])))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "for many kinds of changes to those other entities."))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__make_hlds_passes_scalar_common_1[40]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__make_hlds_passes_scalar_common_1[39])))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "of all the included submodules"))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__make_hlds_passes_scalar_common_1[42]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__make_hlds_passes_scalar_common_1[41])))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "This will result in the recompilation"))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__make_hlds_passes_scalar_common_1[44]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__make_hlds_passes_scalar_common_1[43])))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: the name/arity pair in this"))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declaration,"))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__make_hlds_passes_scalar_common_1[48]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__make_hlds_passes_scalar_common_1[50]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "does not match"))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__make_hlds_passes_scalar_common_1[52]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declaration."))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__make_hlds_passes_scalar_common_1[54]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 35U)),
    ((MR_Box) ((MR_String) "pred"))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__make_hlds_passes_scalar_common_1[56]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__make_hlds_passes_scalar_common_1[55])))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "any visible"))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__make_hlds_passes_scalar_common_1[58]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__make_hlds_passes_scalar_common_1[57])))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: the predicate named by this"))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "has an invalid signature."))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__make_hlds_passes_scalar_common_1[61]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  63 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "A predicate may be used in a"))
  },
  /* row  64 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 39U)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row  65 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__make_hlds_passes_scalar_common_1[64]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  66 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "only if its signature has one of these two forms:"))
  },
  /* row  67 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__make_hlds_passes_scalar_common_1[66]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__make_hlds_passes_scalar_common_1[65])))
  },
  /* row  68 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row  69 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__make_hlds_passes_scalar_common_1[68]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__make_hlds_passes_scalar_common_1[67])))
  },
  /* row  70 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) ":- impure pred <predname> is <detism>."))
  },
  /* row  71 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__make_hlds_passes_scalar_common_1[70]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  72 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__make_hlds_passes_scalar_common_1[71])))
  },
  /* row  73 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) ":- pred <predname>(io::di, io::uo) is <detism>."))
  },
  /* row  74 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__make_hlds_passes_scalar_common_1[73]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__make_hlds_passes_scalar_common_1[72])))
  },
  /* row  75 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  76 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__make_hlds_passes_scalar_common_1[75]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__make_hlds_passes_scalar_common_1[33])))
  },
  /* row  77 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "cc_multi"))
  },
  /* row  78 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__make_hlds_passes_scalar_common_1[77]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__make_hlds_passes_scalar_common_1[76])))
  },
  /* row  79 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row  80 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__make_hlds_passes_scalar_common_1[79]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__make_hlds_passes_scalar_common_1[78])))
  },
  /* row  81 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "det"))
  },
  /* row  82 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__make_hlds_passes_scalar_common_1[81]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__make_hlds_passes_scalar_common_1[80])))
  },
  /* row  83 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is either"))
  },
  /* row  84 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__make_hlds_passes_scalar_common_1[83]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__make_hlds_passes_scalar_common_1[82])))
  },
  /* row  85 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "<detism>"))
  },
  /* row  86 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__make_hlds_passes_scalar_common_1[85]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__make_hlds_passes_scalar_common_1[84])))
  },
  /* row  87 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "where"))
  },
  /* row  88 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__make_hlds_passes_scalar_common_1[87]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__make_hlds_passes_scalar_common_1[86])))
  },
  /* row  89 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 39U)),
    ((MR_Box) ((MR_Integer) -1))
  },
  /* row  90 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__make_hlds_passes_scalar_common_1[89]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__make_hlds_passes_scalar_common_1[88])))
  },
  /* row  91 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "matches"))
  },
  /* row  92 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__make_hlds_passes_scalar_common_1[91]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  93 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "more than one visible"))
  },
  /* row  94 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__make_hlds_passes_scalar_common_1[93]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  95 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "These are:"))
  },
  /* row  96 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__make_hlds_passes_scalar_common_1[95]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__make_hlds_passes_scalar_common_1[65])))
  },
  /* row  97 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__make_hlds_passes_scalar_common_1[54]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__make_hlds_passes_scalar_common_1[96])))
  },
  /* row  98 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__make_hlds_passes_scalar_common_1[56]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__make_hlds_passes_scalar_common_1[97])))
  },
  /* row  99 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__make_hlds_passes_scalar_common_1[75]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 100 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__make_hlds_passes_scalar_common_1[89]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 101 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_2[15][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[14]))
  },
  /* row   1 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_4[0])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__maybe_warn_include_and_non_include_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_4[1])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__maybe_add_default_modes_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_13[0])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__parse_tree_to_hlds_15_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_13[0])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__parse_tree_to_hlds_15_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_4[2])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__parse_tree_to_hlds_15_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_4[3])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__parse_tree_to_hlds_15_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_14[0])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__parse_tree_to_hlds_15_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_4[4])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__parse_tree_to_hlds_15_p_0_7)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_4[5])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__parse_tree_to_hlds_15_p_0_8)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_14[1])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__parse_tree_to_hlds_15_p_0_9)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_14[2])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__parse_tree_to_hlds_15_p_0_10)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  12 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_14[3])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__parse_tree_to_hlds_15_p_0_11)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  13 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_14[4])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__parse_tree_to_hlds_15_p_0_12)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  14 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_5[1])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__parse_tree_to_hlds_15_p_0_13)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_3[1][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 219U) },
};

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_4[7][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_include_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__set_ordlist__pti_set_ordlist_1__plain_term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__set_ordlist__pti_set_ordlist_1__plain_term_context__type_ctor_info_term_context_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row   6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_pred_id_0)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_5[3][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_item_mercury_status_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&recompilation__item_types__recompilation__item_types__type_ctor_info_module_item_version_numbers_0)),
    ((MR_Box) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0)),
    ((MR_Box) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&recompilation__item_types__recompilation__item_types__type_ctor_info_module_item_version_numbers_0)),
    ((MR_Box) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_recompilation_info_0)),
    ((MR_Box) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_recompilation_info_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_6[1][20] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 17)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_sec_info_0)),
    ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_type_status_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__parse_tree__prog_item_type__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__cord__pti_cord_1__plain_hlds__make_hlds__make_hlds_types__ti_sec_sub_list_1parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__cord__pti_cord_1__plain_hlds__make_hlds__make_hlds_types__ti_sec_sub_list_1parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__cord__pti_cord_1__plain_hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_foreign_proc_info_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__cord__pti_cord_1__plain_hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_foreign_proc_info_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__cord__pti_cord_1__plain_hlds__make_hlds__make_hlds_types__ti_sec_sub_list_1parse_tree__prog_item__type_ctor_info_item_mutable_info_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__cord__pti_cord_1__plain_hlds__make_hlds__make_hlds_types__ti_sec_sub_list_1parse_tree__prog_item__type_ctor_info_item_mutable_info_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_warn_spec_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_warn_spec_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_7[1][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_inst_status_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__parse_tree__prog_item_inst_mode__pti_item_inst_defn_info_general_1__plain_parse_tree__prog_item_inst_mode__type_ctor_info_maybe_abstract_inst_defn_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_warn_spec_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_warn_spec_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_8[1][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_mode_status_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__parse_tree__prog_item_inst_mode__pti_item_mode_defn_info_general_1__plain_parse_tree__prog_item_inst_mode__type_ctor_info_maybe_abstract_mode_defn_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_9[4][12] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_item_mercury_status_0)),
    ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_pred_status_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_need_qualifier_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__maybe__pti_maybe_1__plain_pair__ti_pair_2hlds__pred_proc_id__type_ctor_info_pred_id_0maybe__ti_maybe_1builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_item_mercury_status_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_initialise_info_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__cord__pti_cord_1__plain_parse_tree__prog_item_pragma__type_ctor_info_impl_pragma_fproc_export_info_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__cord__pti_cord_1__plain_parse_tree__prog_item_pragma__type_ctor_info_impl_pragma_fproc_export_info_0)),
    ((MR_Box) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_pred_target_names_0)),
    ((MR_Box) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_pred_target_names_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_item_mercury_status_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_finalise_info_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__cord__pti_cord_1__plain_parse_tree__prog_item_pragma__type_ctor_info_impl_pragma_fproc_export_info_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__cord__pti_cord_1__plain_parse_tree__prog_item_pragma__type_ctor_info_impl_pragma_fproc_export_info_0)),
    ((MR_Box) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_pred_target_names_0)),
    ((MR_Box) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_pred_target_names_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_warn_spec_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_warn_spec_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_10[1][13] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&hlds__make_hlds__add_pred__hlds__make_hlds__add_pred__type_ctor_info_part_of_predmode_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_maybe_class_method_0)),
    ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_item_mercury_status_0)),
    ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_pred_status_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0)),
    ((MR_Box) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_11[1][15] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 12)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_pred_status_0)),
    ((MR_Box) (&hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__type_ctor_info_clause_type_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0)),
    ((MR_Box) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_warn_spec_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_warn_spec_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_12[1][14] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 11)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_pred_status_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0)),
    ((MR_Box) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_warn_spec_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_warn_spec_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_13[1][4] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_14[5][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_impl_pragma_fproc_export_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_gen_pragma_unused_args_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_gen_pragma_exceptions_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_gen_pragma_trailing_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_gen_pragma_mm_tabling_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__set_ordlist__pti_set_ordlist_1__plain_term_context__type_ctor_info_term_context_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__parse_tree__prog_item_type__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0 = {
  &parse_tree__prog_item_type__parse_tree__prog_item_type__type_ctor_info_item_type_defn_info_general_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__hlds__make_hlds__make_hlds_types__ti_sec_sub_list_1parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0 = {
  &hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_sec_sub_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__cord__pti_cord_1__plain_hlds__make_hlds__make_hlds_types__ti_sec_sub_list_1parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_passes__hlds__make_hlds__make_hlds_types__ti_sec_sub_list_1parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_foreign_proc_info_0 = {
  &hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_ims_sub_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_proc_info_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__cord__pti_cord_1__plain_hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_foreign_proc_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_passes__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_foreign_proc_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__hlds__make_hlds__make_hlds_types__ti_sec_sub_list_1parse_tree__prog_item__type_ctor_info_item_mutable_info_0 = {
  &hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_sec_sub_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__cord__pti_cord_1__plain_hlds__make_hlds__make_hlds_types__ti_sec_sub_list_1parse_tree__prog_item__type_ctor_info_item_mutable_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_passes__hlds__make_hlds__make_hlds_types__ti_sec_sub_list_1parse_tree__prog_item__type_ctor_info_item_mutable_info_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_err_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_warn_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_warn_spec_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__parse_tree__prog_item_inst_mode__pti_item_inst_defn_info_general_1__plain_parse_tree__prog_item_inst_mode__type_ctor_info_maybe_abstract_inst_defn_0 = {
  &parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_item_inst_defn_info_general_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_maybe_abstract_inst_defn_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__parse_tree__prog_item_inst_mode__pti_item_mode_defn_info_general_1__plain_parse_tree__prog_item_inst_mode__type_ctor_info_maybe_abstract_mode_defn_0 = {
  &parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_item_mode_defn_info_general_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_maybe_abstract_mode_defn_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__maybe__ti_maybe_1builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) }
};

static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__make_hlds_passes__pair__ti_pair_2hlds__pred_proc_id__type_ctor_info_pred_id_0maybe__ti_maybe_1builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_pred_id_0),
    (MR_TypeInfo) (&hlds__make_hlds__make_hlds_passes__maybe__ti_maybe_1builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__maybe__pti_maybe_1__plain_pair__ti_pair_2hlds__pred_proc_id__type_ctor_info_pred_id_0maybe__ti_maybe_1builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_passes__pair__ti_pair_2hlds__pred_proc_id__type_ctor_info_pred_id_0maybe__ti_maybe_1builtin__type_ctor_info_int_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__cord__pti_cord_1__plain_parse_tree__prog_item_pragma__type_ctor_info_impl_pragma_fproc_export_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_impl_pragma_fproc_export_info_0) }
};

static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__make_hlds_passes__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_TypeInfo) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__make_hlds_passes__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_passes__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0)
  }
};

static const MR_EnumFunctorDesc hlds__make_hlds__make_hlds_passes__hlds__make_hlds__make_hlds_passes__enum_functor_desc_init_or_final_0_0 = {
  (MR_String) "iof_init",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__make_hlds__make_hlds_passes__hlds__make_hlds__make_hlds_passes__enum_functor_desc_init_or_final_0_1 = {
  (MR_String) "iof_final",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__make_hlds__make_hlds_passes__hlds__make_hlds__make_hlds_passes__enum_ordinal_ordered_init_or_final_0[2] = {
  &hlds__make_hlds__make_hlds_passes__hlds__make_hlds__make_hlds_passes__enum_functor_desc_init_or_final_0_0,
  &hlds__make_hlds__make_hlds_passes__hlds__make_hlds__make_hlds_passes__enum_functor_desc_init_or_final_0_1
};

static const MR_EnumFunctorDescPtr hlds__make_hlds__make_hlds_passes__hlds__make_hlds__make_hlds_passes__enum_name_ordered_init_or_final_0[2] = {
  &hlds__make_hlds__make_hlds_passes__hlds__make_hlds__make_hlds_passes__enum_functor_desc_init_or_final_0_1,
  &hlds__make_hlds__make_hlds_passes__hlds__make_hlds__make_hlds_passes__enum_functor_desc_init_or_final_0_0
};

static const MR_Integer hlds__make_hlds__make_hlds_passes__hlds__make_hlds__make_hlds_passes__functor_number_map_init_or_final_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__make_hlds_passes__hlds__make_hlds__make_hlds_passes__type_ctor_info_init_or_final_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__make_hlds__make_hlds_passes____Unify____init_or_final_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__make_hlds_passes____Compare____init_or_final_0_0_10001)),
  (MR_String) "hlds.make_hlds.make_hlds_passes",
  (MR_String) "init_or_final",
  { hlds__make_hlds__make_hlds_passes__hlds__make_hlds__make_hlds_passes__enum_name_ordered_init_or_final_0 },
  { hlds__make_hlds__make_hlds_passes__hlds__make_hlds__make_hlds_passes__enum_ordinal_ordered_init_or_final_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__make_hlds__make_hlds_passes__hlds__make_hlds__make_hlds_passes__functor_number_map_init_or_final_0,

};

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__IntroducedFrom__pred__parse_tree_to_hlds__181__1_1_p_0(
  MR_Word LambdaHeadVar__1_143)
{
  MR_bool succeeded;
  MR_Word Var_144 = (MR_Word) (LambdaHeadVar__1_143);
  MR_Word Phase_302;

  parse_tree__error_spec__extract_spec_phase_2_p_0(Var_144, &Phase_302);
  succeeded = (Phase_302 == (MR_Word) ((MR_Unsigned) 36U));
  return succeeded;
}

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__IntroducedFrom__pred__parse_tree_to_hlds__176__1_1_p_0(
  MR_Word LambdaHeadVar__1_141)
{
  MR_bool succeeded;
  MR_Word Phase_46;
  MR_Word Var_142 = (MR_Word) (LambdaHeadVar__1_141);

  parse_tree__error_spec__extract_spec_phase_2_p_0(Var_142, &Phase_46);
  succeeded = (Phase_46 == (MR_Word) ((MR_Unsigned) 32U));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes____Compare____init_or_final_0_0(
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
hlds__make_hlds__make_hlds_passes____Unify____init_or_final_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__update_module_item_version_numbers_4_p_0(
  MR_Word ModuleName_5,
  MR_Word ModuleItemVersionNumbers_6,
  MR_Word STATE_VARIABLE_RecompInfo_0_10,
  MR_Word * STATE_VARIABLE_RecompInfo_11)
{
  MR_Word VersionNumbersMap0_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_RecompInfo_0_10, 3))));
  MR_Word VersionNumbersMap_9;
  MR_Word Var_15;
  MR_Word Var_16;
  MR_Word Var_17;

  mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__item_types__recompilation__item_types__type_ctor_info_module_item_version_numbers_0), ((MR_Box) (ModuleName_5)), ((MR_Box) (ModuleItemVersionNumbers_6)), VersionNumbersMap0_8, &VersionNumbersMap_9);
  Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_RecompInfo_0_10, 0))));
  Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_RecompInfo_0_10, 1))));
  Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_RecompInfo_0_10, 2))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_RecompInfo_11 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 3) = ((MR_Box) (VersionNumbersMap_9));
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_module_item_version_numbers_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_RecompInfo_11;

  hlds__make_hlds__make_hlds_passes__update_module_item_version_numbers_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_STATE_VARIABLE_RecompInfo_11);
  *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_RecompInfo_11));
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_module_item_version_numbers_4_p_0(
  MR_Word ModuleName_5,
  MR_Word ModuleItemVersionNumbers_6,
  MR_Word STATE_VARIABLE_QualInfo_0_8,
  MR_Word * STATE_VARIABLE_QualInfo_9)
{
  MR_Word Var_10;

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_5[2]));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__add_module_item_version_numbers_4_p_0_1));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (ModuleName_5));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (ModuleItemVersionNumbers_6));
  }
  hlds__make_hlds__qual_info__apply_to_recompilation_info_3_p_0(Var_10, STATE_VARIABLE_QualInfo_0_8, STATE_VARIABLE_QualInfo_9);
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_finalise_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word ItemMercuryStatus_11,
  MR_Word FinaliseInfo_12,
  MR_Word STATE_VARIABLE_PragmaFPEInfoCord_0_24,
  MR_Word * STATE_VARIABLE_PragmaFPEInfoCord_25,
  MR_Word STATE_VARIABLE_PredTargetNames_0_26,
  MR_Word * STATE_VARIABLE_PredTargetNames_27,
  MR_Word STATE_VARIABLE_Specs_0_28,
  MR_Word * STATE_VARIABLE_Specs_29)
{
  MR_Word SymName_16 = ((MR_Word) ((MR_hl_field(0, FinaliseInfo_12, 0))));
  MR_Word Arity_17 = ((MR_Word) ((MR_hl_field(0, FinaliseInfo_12, 1))));
  MR_Word Origin_18 = ((MR_Word) ((MR_hl_field(0, FinaliseInfo_12, 2))));
  MR_Word Context_19 = ((MR_Word) ((MR_hl_field(0, FinaliseInfo_12, 3))));
  MR_Word SeqNum_20 = ((MR_Word) ((MR_hl_field(0, FinaliseInfo_12, 4))));

  if (((MR_tag((MR_Word) ItemMercuryStatus_11)) == (MR_Integer) 1))
  {
    *STATE_VARIABLE_PragmaFPEInfoCord_25 = STATE_VARIABLE_PragmaFPEInfoCord_0_24;
    *STATE_VARIABLE_PredTargetNames_27 = STATE_VARIABLE_PredTargetNames_0_26;
    *STATE_VARIABLE_Specs_29 = STATE_VARIABLE_Specs_0_28;
  }
  else
  if ((Origin_18 == (MR_Word) ((MR_Unsigned) 0U)))
    hlds__make_hlds__make_hlds_passes__implement_initialise_finalise_12_p_0(ModuleInfo_10, (MR_Integer) 1, SymName_16, Arity_17, Context_19, SeqNum_20, STATE_VARIABLE_PragmaFPEInfoCord_0_24, STATE_VARIABLE_PragmaFPEInfoCord_25, STATE_VARIABLE_PredTargetNames_0_26, STATE_VARIABLE_PredTargetNames_27, STATE_VARIABLE_Specs_0_28, STATE_VARIABLE_Specs_29);
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.make_hlds_passes.add_finalise\'/9", (MR_String) "bad introduced finalise declaration");
      return;
    }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_initialise_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word ItemMercuryStatus_11,
  MR_Word Initialise_12,
  MR_Word STATE_VARIABLE_PragmaFPEInfoCord_0_24,
  MR_Word * STATE_VARIABLE_PragmaFPEInfoCord_25,
  MR_Word STATE_VARIABLE_PredTargetNames_0_26,
  MR_Word * STATE_VARIABLE_PredTargetNames_27,
  MR_Word STATE_VARIABLE_Specs_0_28,
  MR_Word * STATE_VARIABLE_Specs_29)
{
  MR_Word SymName_16 = ((MR_Word) ((MR_hl_field(0, Initialise_12, 0))));
  MR_Word Arity_17 = ((MR_Word) ((MR_hl_field(0, Initialise_12, 1))));
  MR_Word Origin_18 = ((MR_Word) ((MR_hl_field(0, Initialise_12, 2))));
  MR_Word Context_19 = ((MR_Word) ((MR_hl_field(0, Initialise_12, 3))));
  MR_Word SeqNum_20 = ((MR_Word) ((MR_hl_field(0, Initialise_12, 4))));

  if (((MR_tag((MR_Word) ItemMercuryStatus_11)) == (MR_Integer) 1))
  {
    *STATE_VARIABLE_PragmaFPEInfoCord_25 = STATE_VARIABLE_PragmaFPEInfoCord_0_24;
    *STATE_VARIABLE_PredTargetNames_27 = STATE_VARIABLE_PredTargetNames_0_26;
    *STATE_VARIABLE_Specs_29 = STATE_VARIABLE_Specs_0_28;
  }
  else
  if ((Origin_18 == (MR_Word) ((MR_Unsigned) 0U)))
    hlds__make_hlds__make_hlds_passes__implement_initialise_finalise_12_p_0(ModuleInfo_10, (MR_Integer) 0, SymName_16, Arity_17, Context_19, SeqNum_20, STATE_VARIABLE_PragmaFPEInfoCord_0_24, STATE_VARIABLE_PragmaFPEInfoCord_25, STATE_VARIABLE_PredTargetNames_0_26, STATE_VARIABLE_PredTargetNames_27, STATE_VARIABLE_Specs_0_28, STATE_VARIABLE_Specs_29);
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.make_hlds_passes.add_initialise\'/9", (MR_String) "bad introduced initialise declaration");
      return;
    }
}

static MR_Box MR_CALL 
hlds__make_hlds__make_hlds_passes__implement_initialise_finalise_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_Piece_6;

  conv0_Piece_6 = hlds__make_hlds__make_hlds_passes__get_qual_pred_desc_piece_2_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Piece_6));
  return wrapper_arg_2;
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__implement_initialise_finalise_12_p_0(
  MR_Word ModuleInfo_13,
  MR_Word InitOrFinal_14,
  MR_Word SymName_15,
  MR_Word UserArity_16,
  MR_Word Context_17,
  MR_Word SeqNum_18,
  MR_Word STATE_VARIABLE_PragmaFPEInfoCord_0_43,
  MR_Word * STATE_VARIABLE_PragmaFPEInfoCord_44,
  MR_Word STATE_VARIABLE_PredTargetNames_0_45,
  MR_Word * STATE_VARIABLE_PredTargetNames_46,
  MR_Word STATE_VARIABLE_Specs_0_47,
  MR_Word * STATE_VARIABLE_Specs_48)
{
  MR_bool succeeded;
  MR_Word PredTable_22;
  MR_Integer UserArityInt_23;
  MR_Word PredIds_24;
  MR_String DeclName_25;

  hlds__hlds_module__module_info_get_predicate_table_2_p_0(ModuleInfo_13, &PredTable_22);
  UserArityInt_23 = (MR_Integer) (UserArity_16);
  hlds__pred_table__predicate_table_lookup_pred_sym_name_arity_5_p_0(PredTable_22, (MR_Integer) 1, SymName_15, UserArity_16, &PredIds_24);
  switch (InitOrFinal_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      DeclName_25 = (MR_String) "finalise";
      break;
    case (MR_Integer) 0:
      DeclName_25 = (MR_String) "initialise";
      break;
  }
  if ((PredIds_24 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word SNA_26;
    MR_Word Pieces_27;
    MR_Word Spec_28;
    MR_Word Var_50;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Word Var_67;
    MR_Word Var_68;
    MR_Word Var_73;

    {
      SNA_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, SNA_26, 0) = ((MR_Box) (SymName_15));
      MR_hl_field(0, SNA_26, 1) = ((MR_Box) (UserArityInt_23));
    }
    {
      Var_54 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_54, 0) = ((MR_Box) ((MR_Unsigned) 35U));
      MR_hl_field(3, Var_54, 1) = ((MR_Box) (DeclName_25));
    }
    {
      Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_53, 0) = ((MR_Box) (Var_54));
      MR_hl_field(1, Var_53, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__make_hlds_passes_scalar_common_1[49])));
    }
    {
      Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_50, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__make_hlds_passes_scalar_common_1[47])));
      MR_hl_field(1, Var_50, 1) = ((MR_Box) (Var_53));
    }
    {
      Var_62 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_62, 0) = ((MR_Box) ((MR_Unsigned) 14U));
      MR_hl_field(3, Var_62, 1) = ((MR_Box) (SNA_26));
    }
    {
      Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_61, 0) = ((MR_Box) (Var_62));
      MR_hl_field(1, Var_61, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__make_hlds_passes_scalar_common_1[51])));
    }
    Var_60 = parse_tree__error_spec__color_as_subject_1_f_0(Var_61);
    Var_68 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__make_hlds_passes_scalar_common_1[53])));
    Var_73 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__make_hlds_passes_scalar_common_1[59])), (MR_Word) (MR_mkword(1, &hlds__make_hlds__make_hlds_passes_scalar_common_1[33])));
    Var_67 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_68, Var_73);
    Var_59 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_60, Var_67);
    Pieces_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_50, Var_59);
    {
      Spec_28 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_28, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.make_hlds_passes.implement_initialise_finalise\'/12"));
      MR_hl_field(0, Spec_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_28, 2) = ((MR_Box) ((MR_Unsigned) 48U));
      MR_hl_field(0, Spec_28, 3) = ((MR_Box) (Context_17));
      MR_hl_field(0, Spec_28, 4) = ((MR_Box) (Pieces_27));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_48 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_28));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_47));
    }
    *STATE_VARIABLE_PragmaFPEInfoCord_44 = STATE_VARIABLE_PragmaFPEInfoCord_0_43;
    *STATE_VARIABLE_PredTargetNames_46 = STATE_VARIABLE_PredTargetNames_0_45;
  }
  else
  {
    MR_Word Var_251 = ((MR_Word) ((MR_hl_field(1, PredIds_24, 1))));
    MR_Word Var_252 = ((MR_Word) ((MR_hl_field(1, PredIds_24, 0))));

    if ((Var_251 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word PredInfo_30;
      MR_Word ExpectedHeadModes_31;

      hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_13, Var_252, &PredInfo_30);
      succeeded = hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0(PredInfo_30, &ExpectedHeadModes_31);
      if (succeeded)
      {
        MR_Word ModuleName_32;
        MR_String NameIoF_33;
        MR_Word Origin_34;
        MR_String TargetName_35;
        MR_Word Globals_36;
        MR_Word PragmaFPEInfo_37;

        hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_13, &ModuleName_32);
        switch (InitOrFinal_14) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              NameIoF_33 = (MR_String) "final";
              Origin_34 = (MR_Word) ((MR_Unsigned) 4U);
            }
            break;
          case (MR_Integer) 0:
            {
              NameIoF_33 = (MR_String) "init";
              Origin_34 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
        }
        parse_tree__prog_foreign__new_user_init_or_final_pred_target_name_8_p_0(ModuleName_32, NameIoF_33, SeqNum_18, SymName_15, UserArity_16, &TargetName_35, STATE_VARIABLE_PredTargetNames_0_45, STATE_VARIABLE_PredTargetNames_46);
        hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_13, &Globals_36);
        hlds__make_hlds__make_hlds_passes__make_pragma_foreign_proc_export_7_p_0(Globals_36, SymName_15, ExpectedHeadModes_31, TargetName_35, Origin_34, Context_17, &PragmaFPEInfo_37);
        mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_impl_pragma_fproc_export_info_0), ((MR_Box) (PragmaFPEInfo_37)), STATE_VARIABLE_PragmaFPEInfoCord_0_43, STATE_VARIABLE_PragmaFPEInfoCord_44);
        *STATE_VARIABLE_Specs_48 = STATE_VARIABLE_Specs_0_47;
      }
      else
      {
        MR_Word PredDescPiece_38;
        MR_Word Var_94;
        MR_Word Var_97;
        MR_Word Var_98;
        MR_Word Var_103;
        MR_Word Var_104;
        MR_Word Var_105;
        MR_Word Var_110;
        MR_Word Var_111;
        MR_Word Var_116;
        MR_Word Var_117;
        MR_Word Var_119;
        MR_Word Var_122;
        MR_Word Var_134;
        MR_Word Var_135;
        MR_Word Pieces_235;
        MR_Word Spec_236;

        PredDescPiece_38 = hlds__make_hlds__make_hlds_passes__get_qual_pred_desc_piece_2_f_0(ModuleInfo_13, Var_252);
        {
          Var_98 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_98, 0) = ((MR_Box) ((MR_Unsigned) 35U));
          MR_hl_field(3, Var_98, 1) = ((MR_Box) (DeclName_25));
        }
        {
          Var_97 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_97, 0) = ((MR_Box) (Var_98));
          MR_hl_field(1, Var_97, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__make_hlds_passes_scalar_common_1[49])));
        }
        {
          Var_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_94, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__make_hlds_passes_scalar_common_1[60])));
          MR_hl_field(1, Var_94, 1) = ((MR_Box) (Var_97));
        }
        {
          Var_105 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_105, 0) = ((MR_Box) (PredDescPiece_38));
          MR_hl_field(1, Var_105, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__make_hlds_passes_scalar_common_1[51])));
        }
        Var_104 = parse_tree__error_spec__color_as_subject_1_f_0(Var_105);
        Var_111 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__make_hlds_passes_scalar_common_1[62])));
        {
          Var_122 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_122, 0) = ((MR_Box) (Var_98));
          MR_hl_field(1, Var_122, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__make_hlds_passes_scalar_common_1[69])));
        }
        {
          Var_119 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_119, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__make_hlds_passes_scalar_common_1[63])));
          MR_hl_field(1, Var_119, 1) = ((MR_Box) (Var_122));
        }
        {
          Var_117 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_117, 0) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(1, Var_117, 1) = ((MR_Box) (Var_119));
        }
        Var_135 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__make_hlds_passes_scalar_common_1[74])));
        Var_134 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_135, (MR_Word) (MR_mkword(1, &hlds__make_hlds__make_hlds_passes_scalar_common_1[90])));
        Var_116 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_117, Var_134);
        Var_110 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_111, Var_116);
        Var_103 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_104, Var_110);
        Pieces_235 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_94, Var_103);
        {
          Spec_236 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_236, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.make_hlds_passes.implement_initialise_finalise\'/12"));
          MR_hl_field(0, Spec_236, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_236, 2) = ((MR_Box) ((MR_Unsigned) 48U));
          MR_hl_field(0, Spec_236, 3) = ((MR_Box) (Context_17));
          MR_hl_field(0, Spec_236, 4) = ((MR_Box) (Pieces_235));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Specs_48 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Spec_236));
          MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_47));
        }
        *STATE_VARIABLE_PredTargetNames_46 = STATE_VARIABLE_PredTargetNames_0_45;
        *STATE_VARIABLE_PragmaFPEInfoCord_44 = STATE_VARIABLE_PragmaFPEInfoCord_0_43;
      }
    }
    else
    {
      MR_Word PredDescPieces_42;
      MR_Word Var_177;
      MR_Word Var_178;
      MR_Word Var_181;
      MR_Word Var_182;
      MR_Word Var_187;
      MR_Word Var_188;
      MR_Word Var_189;
      MR_Word Var_190;
      MR_Word Var_195;
      MR_Word Var_200;
      MR_Word Var_201;
      MR_Word Var_206;
      MR_Word Var_220;
      MR_Word Var_221;
      MR_Word SNA_241;
      MR_Word Pieces_242;
      MR_Word Spec_243;

      {
        SNA_241 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, SNA_241, 0) = ((MR_Box) (SymName_15));
        MR_hl_field(0, SNA_241, 1) = ((MR_Box) (UserArityInt_23));
      }
      {
        Var_177 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_177, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_4[6]));
        MR_hl_field(0, Var_177, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__implement_initialise_finalise_12_p_0_1));
        MR_hl_field(0, Var_177, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_177, 3) = ((MR_Box) (ModuleInfo_13));
      }
      PredDescPieces_42 = mercury__list__map_2_f_0((MR_Word) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_pred_id_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_177, PredIds_24);
      {
        Var_182 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_182, 0) = ((MR_Box) ((MR_Unsigned) 35U));
        MR_hl_field(3, Var_182, 1) = ((MR_Box) (DeclName_25));
      }
      {
        Var_181 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_181, 0) = ((MR_Box) (Var_182));
        MR_hl_field(1, Var_181, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__make_hlds_passes_scalar_common_1[49])));
      }
      {
        Var_178 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_178, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__make_hlds_passes_scalar_common_1[47])));
        MR_hl_field(1, Var_178, 1) = ((MR_Box) (Var_181));
      }
      {
        Var_190 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_190, 0) = ((MR_Box) ((MR_Unsigned) 14U));
        MR_hl_field(3, Var_190, 1) = ((MR_Box) (SNA_241));
      }
      {
        Var_189 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_189, 0) = ((MR_Box) (Var_190));
        MR_hl_field(1, Var_189, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__make_hlds_passes_scalar_common_1[51])));
      }
      Var_188 = parse_tree__error_spec__color_as_subject_1_f_0(Var_189);
      Var_201 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__make_hlds_passes_scalar_common_1[94])));
      Var_221 = parse_tree__error_spec__piece_list_to_color_line_pieces_3_f_0((MR_Integer) 4, (MR_Word) (MR_mkword(1, &hlds__make_hlds__make_hlds_passes_scalar_common_1[99])), PredDescPieces_42);
      Var_220 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_221, (MR_Word) (MR_mkword(1, &hlds__make_hlds__make_hlds_passes_scalar_common_1[100])));
      Var_206 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__make_hlds_passes_scalar_common_1[98])), Var_220);
      Var_200 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_201, Var_206);
      Var_195 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__make_hlds_passes_scalar_common_1[92])), Var_200);
      Var_187 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_188, Var_195);
      Pieces_242 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_178, Var_187);
      {
        Spec_243 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_243, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.make_hlds_passes.implement_initialise_finalise\'/12"));
        MR_hl_field(0, Spec_243, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_243, 2) = ((MR_Box) ((MR_Unsigned) 48U));
        MR_hl_field(0, Spec_243, 3) = ((MR_Box) (Context_17));
        MR_hl_field(0, Spec_243, 4) = ((MR_Box) (Pieces_242));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_48 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Spec_243));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_47));
      }
      *STATE_VARIABLE_PragmaFPEInfoCord_44 = STATE_VARIABLE_PragmaFPEInfoCord_0_43;
      *STATE_VARIABLE_PredTargetNames_46 = STATE_VARIABLE_PredTargetNames_0_45;
    }
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_pragma_foreign_proc_export_7_p_0(
  MR_Word Globals_8,
  MR_Word SymName_9,
  MR_Word HeadModes_10,
  MR_String CName_11,
  MR_Word Origin_12,
  MR_Word Context_13,
  MR_Word * FPEInfo_14)
{
  MR_Word Attrs_15 = (MR_Word) (Origin_12);
  MR_Word PEOrigin_16;
  MR_Word CompilationTarget_17;
  MR_Word ExportLang_18;
  MR_Word PredNameModesPF_19;
  MR_Word VarSet_20;

  {
    PEOrigin_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, PEOrigin_16, 0) = ((MR_Box) (Attrs_15));
  }
  libs__globals__get_target_2_p_0(Globals_8, &CompilationTarget_17);
  ExportLang_18 = libs__globals__target_lang_to_foreign_export_lang_1_f_0(CompilationTarget_17);
  {
    PredNameModesPF_19 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PredNameModesPF_19, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(0, PredNameModesPF_19, 1) = ((MR_Box) (SymName_9));
    MR_hl_field(0, PredNameModesPF_19, 2) = ((MR_Box) (HeadModes_10));
  }
  mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &VarSet_20);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    *FPEInfo_14 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (PEOrigin_16));
    MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) (ExportLang_18));
    MR_hl_field(0, base, 2) = ((MR_Box) (PredNameModesPF_19));
    MR_hl_field(0, base, 3) = ((MR_Box) (CName_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (VarSet_20));
    MR_hl_field(0, base, 5) = ((MR_Box) (Context_13));
    MR_hl_field(0, base, 6) = ((MR_Box) ((MR_Unsigned) 0U));
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_1(
  void * env_ptr_arg)
{
  struct hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0_s * env_ptr = (struct hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_3(
  void * env_ptr_arg)
{
  struct hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0_s * env_ptr = (struct hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__ProcInfo_23 = ((MR_Word) ((env_ptr)->hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__conv0_ProcInfo_23));
  hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_2(env_ptr);
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_2(
  void * env_ptr_arg)
{
  struct hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0_s * env_ptr = (struct hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0_s *) (env_ptr_arg);

  hlds__hlds_proc__proc_info_get_maybe_declared_argmodes_2_p_0((env_ptr)->hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__ProcInfo_23, &(env_ptr)->hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__MaybeHeadModes_12);
  (env_ptr)->hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__succeeded = ((env_ptr)->hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__MaybeHeadModes_12 != (MR_Word) ((MR_Unsigned) 0U));
  if ((env_ptr)->hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__succeeded)
  {
    (env_ptr)->hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__HeadModes_13 = ((MR_Word) ((MR_hl_field(1, (env_ptr)->hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__MaybeHeadModes_12, 0))));
    (env_ptr)->hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__TypeInfo_26_26 = (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[101]);
    (env_ptr)->hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((env_ptr)->hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__TypeInfo_26_26, ((MR_Box) ((env_ptr)->hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__HeadModes_13)), ((MR_Box) (*((env_ptr)->hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__ExpectedHeadModes_4))));
    if ((env_ptr)->hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__succeeded)
    {
      hlds__hlds_proc__proc_info_get_declared_determinism_2_p_0((env_ptr)->hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__ProcInfo_23, &(env_ptr)->hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__MaybeDetism_14);
      (env_ptr)->hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__succeeded = ((env_ptr)->hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__MaybeDetism_14 != (MR_Word) ((MR_Unsigned) 0U));
      if ((env_ptr)->hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__succeeded)
      {
        (env_ptr)->hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__Detism_15 = ((MR_Word) ((MR_hl_field(1, (env_ptr)->hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__MaybeDetism_14, 0))));
        switch ((env_ptr)->hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__Detism_15) {
          default:
            (env_ptr)->hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 4:
            (env_ptr)->hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__succeeded = MR_TRUE;
            break;
          case (MR_Integer) 0:
            (env_ptr)->hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__succeeded = MR_TRUE;
            break;
        }
        if ((env_ptr)->hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__succeeded)
          hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_1(env_ptr);
      }
    }
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_4(
  void * env_ptr_arg)
{
  struct hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0_s * env_ptr = (struct hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__commit_0) == 0)
    {
      mercury__list__member_2_p_1((MR_Word) (&hlds__hlds_proc__hlds__hlds_proc__type_ctor_info_proc_info_0), &(env_ptr)->hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__conv0_ProcInfo_23, (env_ptr)->hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__ProcInfos_7, hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_3, env_ptr);
      (env_ptr)->hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__succeeded = MR_TRUE;
}

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0(
  MR_Word PredInfo_3,
  MR_Word * ExpectedHeadModes_4)
{
  struct hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0_s env;

  (env).hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__ExpectedHeadModes_4 = ExpectedHeadModes_4;
  {
    MR_Word ArgTypes_5;
    MR_Word ProcTable_6;
    MR_Word ExpectedPurity_10;
    MR_Word Purity_16;

    hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_3, &ArgTypes_5);
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_3, &ProcTable_6);
    (env).hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__ProcInfos_7 = mercury__map__values_1_f_0((MR_Word) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_proc__hlds__hlds_proc__type_ctor_info_proc_info_0), ProcTable_6);
    if ((ArgTypes_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *((env).hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__ExpectedHeadModes_4) = (MR_Word) ((MR_Unsigned) 0U);
      ExpectedPurity_10 = (MR_Integer) 2;
      (env).hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__succeeded = MR_TRUE;
    }
    else
    {
      MR_Word Arg1Type_8 = ((MR_Word) ((MR_hl_field(1, ArgTypes_5, 0))));
      MR_Word Arg2Type_9;
      MR_Word Var_17 = ((MR_Word) ((MR_hl_field(1, ArgTypes_5, 1))));
      MR_Word Var_18;
      MR_Word Var_19;
      MR_Word Var_20;
      MR_Word Var_21;
      MR_Word Var_22;

      (env).hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__succeeded = (Var_17 != (MR_Word) ((MR_Unsigned) 0U));
      if ((env).hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__succeeded)
      {
        Arg2Type_9 = ((MR_Word) ((MR_hl_field(1, Var_17, 0))));
        Var_18 = ((MR_Word) ((MR_hl_field(1, Var_17, 1))));
        (env).hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__succeeded = (Var_18 == (MR_Word) ((MR_Unsigned) 0U));
        if ((env).hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__succeeded)
        {
          (env).hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__succeeded = parse_tree__prog_type_test__type_is_io_state_1_p_0(Arg1Type_8);
          if ((env).hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__succeeded)
          {
            (env).hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__succeeded = parse_tree__prog_type_test__type_is_io_state_1_p_0(Arg2Type_9);
            if ((env).hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__succeeded)
            {
              Var_19 = parse_tree__prog_mode__di_mode_0_f_0();
              Var_21 = parse_tree__prog_mode__uo_mode_0_f_0();
              Var_22 = (MR_Word) ((MR_Unsigned) 0U);
              ExpectedPurity_10 = (MR_Integer) 0;
              {
                Var_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_20, 0) = ((MR_Box) (Var_21));
                MR_hl_field(1, Var_20, 1) = ((MR_Box) (Var_22));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *((env).hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__ExpectedHeadModes_4) = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Var_19));
                MR_hl_field(1, base, 1) = ((MR_Box) (Var_20));
              }
              (env).hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__succeeded = MR_TRUE;
            }
          }
        }
      }
    }
    if ((env).hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__succeeded)
    {
      hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_4(&env);
      if ((env).hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__succeeded)
      {
        hlds__hlds_pred__pred_info_get_purity_2_p_0(PredInfo_3, &Purity_16);
        (env).hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__succeeded = (Purity_16 == ExpectedPurity_10);
      }
    }
    return (env).hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__succeeded;
  }
}

static MR_Word MR_CALL 
hlds__make_hlds__make_hlds_passes__get_qual_pred_desc_piece_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word PredId_5)
{
  MR_Word Piece_6;
  MR_Word PredInfo_7;
  MR_Word PFSNA_8;

  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_4, PredId_5, &PredInfo_7);
  hlds__hlds_pred__pred_info_get_pf_sym_name_pred_form_arity_2_p_0(PredInfo_7, &PFSNA_8);
  {
    Piece_6 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Piece_6, 0) = ((MR_Box) ((MR_Unsigned) 16U));
    MR_hl_field(3, Piece_6, 1) = ((MR_Box) (PFSNA_8));
  }
  return Piece_6;
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_promise_11_p_0(
  MR_Word ProgressStream_12,
  MR_Word PredStatus_13,
  MR_Word PromiseInfo_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_40,
  MR_Word * STATE_VARIABLE_ModuleInfo_41,
  MR_Word STATE_VARIABLE_QualInfo_0_42,
  MR_Word * STATE_VARIABLE_QualInfo_43,
  MR_Word STATE_VARIABLE_ErrSpecs_0_44,
  MR_Word * STATE_VARIABLE_ErrSpecs_45,
  MR_Word STATE_VARIABLE_WarnSpecs_0_46,
  MR_Word * STATE_VARIABLE_WarnSpecs_47)
{
  MR_Word PromiseType_19 = ((MR_Unsigned) ((MR_hl_field(0, PromiseInfo_14, 0))) & (MR_Integer) 3);
  MR_Word Goal_20 = ((MR_Word) ((MR_hl_field(0, PromiseInfo_14, 1))));
  MR_Word VarSet_21 = ((MR_Word) ((MR_hl_field(0, PromiseInfo_14, 2))));
  MR_Word Context_23 = ((MR_Word) ((MR_hl_field(0, PromiseInfo_14, 4))));
  MR_Word SeqNum_24 = ((MR_Word) ((MR_hl_field(0, PromiseInfo_14, 5))));
  MR_Word GoalType_25;
  MR_Word ClauseType_26;
  MR_String FileName_27;
  MR_Integer LineNumber_28;
  MR_String PromisePredName_29;
  MR_Word PromiseModuleName_31;
  MR_Word PromisePredSymName_32;
  MR_Word HeadVars_33 = ((MR_Word) ((MR_hl_field(0, PromiseInfo_14, 3))));
  MR_Word PredFormArity_34;
  MR_Word ClausesInfo_35;
  MR_Word PredOrigin_36;
  MR_Word HeadVarTerms_38;
  MR_Word ClauseInfo_39;
  MR_Word STATE_VARIABLE_ErrSpecs_1_48;
  MR_Word Var_49;
  MR_Word STATE_VARIABLE_ModuleInfo_1_51;
  MR_Word Var_53;
  MR_Word _PredId_37;

  switch (PromiseType_19) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 2:
    case (MR_Integer) 1:
      hlds__make_hlds__make_hlds_warn__check_promise_ex_decl_6_p_0(HeadVars_33, PromiseType_19, Goal_20, Context_23, STATE_VARIABLE_ErrSpecs_0_44, &STATE_VARIABLE_ErrSpecs_1_48);
      break;
    case (MR_Integer) 3:
      STATE_VARIABLE_ErrSpecs_1_48 = STATE_VARIABLE_ErrSpecs_0_44;
      break;
  }
  {
    GoalType_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, GoalType_25, 0) = (MR_Box) ((MR_Unsigned) (PromiseType_19));
  }
  {
    ClauseType_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ClauseType_26, 0) = (MR_Box) ((MR_Unsigned) (PromiseType_19));
  }
  FileName_27 = mercury__term_context__context_file_1_f_0(Context_23);
  LineNumber_28 = mercury__term_context__context_line_1_f_0(Context_23);
  PromisePredName_29 = hlds__pred_name__promise_pred_name_3_f_0(PromiseType_19, FileName_27, LineNumber_28);
  hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_ModuleInfo_0_40, &PromiseModuleName_31);
  {
    PromisePredSymName_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, PromisePredSymName_32, 0) = ((MR_Box) (PromiseModuleName_31));
    MR_hl_field(1, PromisePredSymName_32, 1) = ((MR_Box) (PromisePredName_29));
  }
  PredFormArity_34 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[16]), HeadVars_33);
  hlds__hlds_clauses__clauses_info_init_for_assertion_2_p_0(HeadVars_33, &ClausesInfo_35);
  {
    Var_49 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_49, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_49, 1) = (MR_Box) ((MR_Unsigned) (PromiseType_19));
    MR_hl_field(3, Var_49, 2) = ((MR_Box) (FileName_27));
    MR_hl_field(3, Var_49, 3) = ((MR_Box) (LineNumber_28));
  }
  {
    PredOrigin_36 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PredOrigin_36, 0) = ((MR_Box) (Var_49));
  }
  hlds__make_hlds__add_pred__add_implicit_pred_decl_12_p_0((MR_Integer) 0, PromiseModuleName_31, PromisePredName_29, PredFormArity_34, PredStatus_13, Context_23, PredOrigin_36, GoalType_25, ClausesInfo_35, &_PredId_37, STATE_VARIABLE_ModuleInfo_0_40, &STATE_VARIABLE_ModuleInfo_1_51);
  mercury__term_subst__var_list_to_term_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVars_33, &HeadVarTerms_38);
  {
    Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_53, 0) = ((MR_Box) (Goal_20));
    MR_hl_field(1, Var_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    ClauseInfo_39 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ClauseInfo_39, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(0, ClauseInfo_39, 1) = ((MR_Box) (PromisePredSymName_32));
    MR_hl_field(0, ClauseInfo_39, 2) = ((MR_Box) (HeadVarTerms_38));
    MR_hl_field(0, ClauseInfo_39, 3) = ((MR_Box) (VarSet_21));
    MR_hl_field(0, ClauseInfo_39, 4) = ((MR_Box) (Var_53));
    MR_hl_field(0, ClauseInfo_39, 5) = ((MR_Box) (Context_23));
    MR_hl_field(0, ClauseInfo_39, 6) = ((MR_Box) (SeqNum_24));
  }
  hlds__make_hlds__add_clause__module_add_clause_12_p_0(ProgressStream_12, PredStatus_13, ClauseType_26, ClauseInfo_39, STATE_VARIABLE_ModuleInfo_1_51, STATE_VARIABLE_ModuleInfo_41, STATE_VARIABLE_QualInfo_0_42, STATE_VARIABLE_QualInfo_43, STATE_VARIABLE_ErrSpecs_1_48, STATE_VARIABLE_ErrSpecs_45, STATE_VARIABLE_WarnSpecs_0_46, STATE_VARIABLE_WarnSpecs_47);
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__maybe_add_default_mode_3_p_0(
  MR_Word PredDecl_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_30,
  MR_Word * STATE_VARIABLE_ModuleInfo_31)
{
  MR_bool succeeded;
  MR_Word PredSymName_6 = ((MR_Word) ((MR_hl_field(0, PredDecl_4, 0))));
  MR_Word PredOrFunc_7 = ((MR_Unsigned) ((MR_hl_field(0, PredDecl_4, 1))) & (MR_Integer) 1);
  MR_Word TypesAndMaybeModes_8 = ((MR_Word) ((MR_hl_field(0, PredDecl_4, 2))));
  MR_String PredName_20;

  PredName_20 = mdbcomp__sym_name__unqualify_name_1_f_0(PredSymName_6);
  succeeded = (strcmp(PredName_20, (MR_String) "") == 0);
  if (succeeded)
    *STATE_VARIABLE_ModuleInfo_31 = STATE_VARIABLE_ModuleInfo_0_30;
  else
    switch (PredOrFunc_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word PredFormArity_21;
          MR_Word UserArity_22;
          MR_Word PredTable0_23;
          MR_Word PredIds_24;

          PredFormArity_21 = parse_tree__prog_item__types_and_maybe_modes_arity_1_f_0(TypesAndMaybeModes_8);
          parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_7, &UserArity_22, PredFormArity_21);
          hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_30, &PredTable0_23);
          hlds__pred_table__predicate_table_lookup_func_sym_name_arity_5_p_0(PredTable0_23, (MR_Integer) 0, PredSymName_6, UserArity_22, &PredIds_24);
          if ((PredIds_24 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.make_hlds_passes.maybe_add_default_mode\'/3", (MR_String) "can\'t find func declaration");
              return;
            }
          else
          {
            MR_Word PredIdTable0_27;
            MR_Word PredIdTable_28;
            MR_Word PredTable_29;

            hlds__pred_table__predicate_table_get_pred_id_table_2_p_0(PredTable0_23, &PredIdTable0_27);
            hlds__default_func_mode__maybe_add_default_func_modes_4_p_0(STATE_VARIABLE_ModuleInfo_0_30, PredIds_24, PredIdTable0_27, &PredIdTable_28);
            hlds__pred_table__predicate_table_set_pred_id_table_3_p_0(PredIdTable_28, PredTable0_23, &PredTable_29);
            hlds__hlds_module__module_info_set_predicate_table_3_p_0(PredTable_29, STATE_VARIABLE_ModuleInfo_0_30, STATE_VARIABLE_ModuleInfo_31);
          }
        }
        break;
      case (MR_Integer) 0:
        *STATE_VARIABLE_ModuleInfo_31 = STATE_VARIABLE_ModuleInfo_0_30;
        break;
    }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_type_defn_17_p_0(
  MR_Word SectionInfo_18,
  MR_Word TypeStatus_19,
  MR_Word TypeDefnInfo_20,
  MR_Word STATE_VARIABLE_ModuleInfo_0_55,
  MR_Word * STATE_VARIABLE_ModuleInfo_56,
  MR_Word STATE_VARIABLE_PredDeclCord_0_57,
  MR_Word * STATE_VARIABLE_PredDeclCord_58,
  MR_Word STATE_VARIABLE_ForeignProcCord_0_59,
  MR_Word * STATE_VARIABLE_ForeignProcCord_60,
  MR_Word STATE_VARIABLE_MutableCord_0_61,
  MR_Word * STATE_VARIABLE_MutableCord_62,
  MR_Word STATE_VARIABLE_InvalidTypeSpecs_0_63,
  MR_Word * STATE_VARIABLE_InvalidTypeSpecs_64,
  MR_Word STATE_VARIABLE_ErrSpecs_0_65,
  MR_Word * STATE_VARIABLE_ErrSpecs_66,
  MR_Word STATE_VARIABLE_WarnSpecs_0_67,
  MR_Word * STATE_VARIABLE_WarnSpecs_68)
{
  MR_Word ItemMercuryStatus_28 = ((MR_Word) ((MR_hl_field(0, SectionInfo_18, 0))));
  MR_Word NeedQual_29 = ((MR_Unsigned) ((MR_hl_field(0, SectionInfo_18, 1))) & (MR_Integer) 1);
  MR_Word SymName_30 = ((MR_Word) ((MR_hl_field(0, TypeDefnInfo_20, 0))));
  MR_Word TypeParams_31 = ((MR_Word) ((MR_hl_field(0, TypeDefnInfo_20, 1))));
  MR_Word TypeDefn_32 = ((MR_Word) ((MR_hl_field(0, TypeDefnInfo_20, 2))));
  MR_Word TypeVarSet_33 = ((MR_Word) ((MR_hl_field(0, TypeDefnInfo_20, 3))));
  MR_Word Context_34 = ((MR_Word) ((MR_hl_field(0, TypeDefnInfo_20, 4))));

  switch (MR_tag((MR_Word) TypeDefn_32)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *STATE_VARIABLE_PredDeclCord_58 = STATE_VARIABLE_PredDeclCord_0_57;
        *STATE_VARIABLE_ForeignProcCord_60 = STATE_VARIABLE_ForeignProcCord_0_59;
        *STATE_VARIABLE_MutableCord_62 = STATE_VARIABLE_MutableCord_0_61;
      }
      break;
    case (MR_Integer) 1:
      {
        *STATE_VARIABLE_PredDeclCord_58 = STATE_VARIABLE_PredDeclCord_0_57;
        *STATE_VARIABLE_ForeignProcCord_60 = STATE_VARIABLE_ForeignProcCord_0_59;
        *STATE_VARIABLE_MutableCord_62 = STATE_VARIABLE_MutableCord_0_61;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Detailssolver_36 = (MR_Word) (MR_body((MR_Word) (TypeDefn_32), (MR_Integer) 2));
        MR_Word SolverTypeDetails_37 = ((MR_Word) ((MR_hl_field(0, Detailssolver_36, 0))));
        MR_Word SolverAuxPredInfo_39;
        MR_Word PredDeclInfos_40;
        MR_Word PredDeclList_41;

        {
          SolverAuxPredInfo_39 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, SolverAuxPredInfo_39, 0) = ((MR_Box) (SymName_30));
          MR_hl_field(0, SolverAuxPredInfo_39, 1) = ((MR_Box) (TypeParams_31));
          MR_hl_field(0, SolverAuxPredInfo_39, 2) = ((MR_Box) (TypeVarSet_33));
          MR_hl_field(0, SolverAuxPredInfo_39, 3) = ((MR_Box) (SolverTypeDetails_37));
          MR_hl_field(0, SolverAuxPredInfo_39, 4) = ((MR_Box) (Context_34));
        }
        hlds__make_hlds__add_solver__get_solver_type_aux_pred_decls_2_p_0(SolverAuxPredInfo_39, &PredDeclInfos_40);
        {
          PredDeclList_41 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, PredDeclList_41, 0) = ((MR_Box) (SectionInfo_18));
          MR_hl_field(0, PredDeclList_41, 1) = ((MR_Box) (PredDeclInfos_40));
        }
        mercury__cord__snoc_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[1]), ((MR_Box) (PredDeclList_41)), STATE_VARIABLE_PredDeclCord_0_57, STATE_VARIABLE_PredDeclCord_58);
        if (((MR_tag((MR_Word) ItemMercuryStatus_28)) == (MR_Integer) 1))
        {
          *STATE_VARIABLE_ForeignProcCord_60 = STATE_VARIABLE_ForeignProcCord_0_59;
          *STATE_VARIABLE_MutableCord_62 = STATE_VARIABLE_MutableCord_0_61;
        }
        else
        {
          MR_Word Globals_43;
          MR_Word Target_44;
          MR_Word ForeignProcInfos_45;
          MR_Word ForeignProcList_46;
          MR_Word MutableItems_47;
          MR_Word MutableList_48;

          hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_55, &Globals_43);
          libs__globals__get_target_2_p_0(Globals_43, &Target_44);
          hlds__make_hlds__add_solver__get_solver_type_aux_pred_defns_3_p_0(Target_44, SolverAuxPredInfo_39, &ForeignProcInfos_45);
          {
            ForeignProcList_46 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, ForeignProcList_46, 0) = ((MR_Box) (ItemMercuryStatus_28));
            MR_hl_field(0, ForeignProcList_46, 1) = ((MR_Box) (ForeignProcInfos_45));
          }
          mercury__cord__snoc_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[2]), ((MR_Box) (ForeignProcList_46)), STATE_VARIABLE_ForeignProcCord_0_59, STATE_VARIABLE_ForeignProcCord_60);
          MutableItems_47 = ((MR_Word) ((MR_hl_field(0, SolverTypeDetails_37, 3))));
          {
            MutableList_48 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, MutableList_48, 0) = ((MR_Box) (SectionInfo_18));
            MR_hl_field(0, MutableList_48, 1) = ((MR_Box) (MutableItems_47));
          }
          mercury__cord__snoc_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[3]), ((MR_Box) (MutableList_48)), STATE_VARIABLE_MutableCord_0_61, STATE_VARIABLE_MutableCord_62);
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, TypeDefn_32, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *STATE_VARIABLE_PredDeclCord_58 = STATE_VARIABLE_PredDeclCord_0_57;
            *STATE_VARIABLE_ForeignProcCord_60 = STATE_VARIABLE_ForeignProcCord_0_59;
            *STATE_VARIABLE_MutableCord_62 = STATE_VARIABLE_MutableCord_0_61;
          }
          break;
        case (MR_Integer) 1:
          {
            *STATE_VARIABLE_PredDeclCord_58 = STATE_VARIABLE_PredDeclCord_0_57;
            *STATE_VARIABLE_ForeignProcCord_60 = STATE_VARIABLE_ForeignProcCord_0_59;
            *STATE_VARIABLE_MutableCord_62 = STATE_VARIABLE_MutableCord_0_61;
          }
          break;
        case (MR_Integer) 2:
          {
            *STATE_VARIABLE_PredDeclCord_58 = STATE_VARIABLE_PredDeclCord_0_57;
            *STATE_VARIABLE_ForeignProcCord_60 = STATE_VARIABLE_ForeignProcCord_0_59;
            *STATE_VARIABLE_MutableCord_62 = STATE_VARIABLE_MutableCord_0_61;
          }
          break;
      }
      break;
  }
  hlds__make_hlds__add_type__module_add_type_defn_11_p_0(TypeStatus_19, NeedQual_29, TypeDefnInfo_20, STATE_VARIABLE_ModuleInfo_0_55, STATE_VARIABLE_ModuleInfo_56, STATE_VARIABLE_InvalidTypeSpecs_0_63, STATE_VARIABLE_InvalidTypeSpecs_64, STATE_VARIABLE_ErrSpecs_0_65, STATE_VARIABLE_ErrSpecs_66, STATE_VARIABLE_WarnSpecs_0_67, STATE_VARIABLE_WarnSpecs_68);
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_item_avail_4_p_0(
  MR_Word ItemMercuryStatus_5,
  MR_Word Avail_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_16,
  MR_Word * STATE_VARIABLE_ModuleInfo_17)
{
  MR_Word ModuleName_8;
  MR_Word Context_9;
  MR_Word ImportOrUse_11;

  if (((MR_tag((MR_Word) Avail_6)) == (MR_Integer) 0))
  {
    MR_Word Var_18 = (MR_Word) ((MR_Word) (Avail_6));

    ModuleName_8 = ((MR_Word) ((MR_hl_field(0, Var_18, 0))));
    Context_9 = ((MR_Word) ((MR_hl_field(0, Var_18, 1))));
    ImportOrUse_11 = (MR_Integer) 0;
  }
  else
  {
    MR_Word Var_19 = (MR_Word) (MR_body((MR_Word) (Avail_6), (MR_Integer) 1));

    ModuleName_8 = ((MR_Word) ((MR_hl_field(0, Var_19, 0))));
    Context_9 = ((MR_Word) ((MR_hl_field(0, Var_19, 1))));
    ImportOrUse_11 = (MR_Integer) 1;
  }
  if (((MR_tag((MR_Word) ItemMercuryStatus_5)) == (MR_Integer) 1))
  {
    MR_Word ItemImport_14 = ((MR_Word) ((MR_hl_field(1, ItemMercuryStatus_5, 0))));

    switch (MR_tag((MR_Word) ItemImport_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ItemImport_14)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            hlds__hlds_module__module_add_indirectly_imported_module_3_p_0(ModuleName_8, STATE_VARIABLE_ModuleInfo_0_16, STATE_VARIABLE_ModuleInfo_17);
            break;
          case (MR_Integer) 1:
            hlds__hlds_module__module_add_imported_for_opt_module_3_p_0(ModuleName_8, STATE_VARIABLE_ModuleInfo_0_16, STATE_VARIABLE_ModuleInfo_17);
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ImportLocn_15 = ((MR_Unsigned) ((MR_hl_field(1, ItemImport_14, 0))) & (MR_Integer) 7);

          switch (ImportLocn_15) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 4:
              hlds__hlds_module__module_add_avail_module_in_ancestor_6_p_0(ModuleName_8, (MR_Integer) 1, ImportOrUse_11, Context_9, STATE_VARIABLE_ModuleInfo_0_16, STATE_VARIABLE_ModuleInfo_17);
              break;
            case (MR_Integer) 3:
              hlds__hlds_module__module_add_avail_module_in_ancestor_6_p_0(ModuleName_8, (MR_Integer) 0, ImportOrUse_11, Context_9, STATE_VARIABLE_ModuleInfo_0_16, STATE_VARIABLE_ModuleInfo_17);
              break;
            case (MR_Integer) 0:
            case (MR_Integer) 2:
            case (MR_Integer) 1:
              hlds__hlds_module__module_add_indirectly_imported_module_3_p_0(ModuleName_8, STATE_VARIABLE_ModuleInfo_0_16, STATE_VARIABLE_ModuleInfo_17);
              break;
          }
        }
        break;
    }
  }
  else
  {
    MR_Word ItemExport_12 = ((MR_Unsigned) ((MR_hl_field(0, ItemMercuryStatus_5, 0))) & (MR_Integer) 3);
    MR_Word Section_13;

    switch (ItemExport_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        Section_13 = (MR_Integer) 0;
        break;
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        Section_13 = (MR_Integer) 1;
        break;
    }
    hlds__hlds_module__module_add_avail_module_in_cur_module_6_p_0(ModuleName_8, Section_13, ImportOrUse_11, Context_9, STATE_VARIABLE_ModuleInfo_0_16, STATE_VARIABLE_ModuleInfo_17);
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_builtin_type_ctor_special_preds_in_builtin_module_3_p_0(
  MR_Word TypeCtor_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_10,
  MR_Word * STATE_VARIABLE_ModuleInfo_11)
{
  MR_Word TVarSet_6;
  MR_Word Type_8;
  MR_Word Var_15;

  mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TVarSet_6);
  parse_tree__prog_type_construct__construct_type_3_p_0(TypeCtor_4, (MR_Word) ((MR_Unsigned) 0U), &Type_8);
  Var_15 = mercury__term_context__dummy_context_0_f_0();
  hlds__add_special_pred__add_special_pred_decl_defns_for_type_eagerly_8_p_0(TVarSet_6, Type_8, TypeCtor_4, (MR_Word) (MR_mkword(3, &hlds__make_hlds__make_hlds_passes_scalar_common_1[46])), (MR_Word) (((MR_Box) ((MR_Unsigned) 32U))), Var_15, STATE_VARIABLE_ModuleInfo_0_10, STATE_VARIABLE_ModuleInfo_11);
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__acc_include_contexts_3_p_0(
  MR_Word IncludeModuleInfo_4,
  MR_Word STATE_VARIABLE_ContextSet_0_8,
  MR_Word * STATE_VARIABLE_ContextSet_9)
{
  MR_Word Context_7 = ((MR_Word) ((MR_hl_field(0, IncludeModuleInfo_4, 1))));

  mercury__set__insert_3_p_0((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), ((MR_Box) (Context_7)), STATE_VARIABLE_ContextSet_0_8, STATE_VARIABLE_ContextSet_9);
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__parse_tree_to_hlds_15_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv34_STATE_VARIABLE_QualInfo_9;

  hlds__make_hlds__make_hlds_passes__add_module_item_version_numbers_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv34_STATE_VARIABLE_QualInfo_9);
  *wrapper_arg_4 = ((MR_Box) (conv34_STATE_VARIABLE_QualInfo_9));
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__parse_tree_to_hlds_15_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv31_HeadVar__3_3;
  MR_Word conv30_HeadVar__5_5;

  hlds__make_hlds__add_pragma_gen__add_gen_pragma_mm_tabling_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv31_HeadVar__3_3, ((MR_Word) (wrapper_arg_4)), &conv30_HeadVar__5_5);
  *wrapper_arg_3 = ((MR_Box) (conv31_HeadVar__3_3));
  *wrapper_arg_5 = ((MR_Box) (conv30_HeadVar__5_5));
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__parse_tree_to_hlds_15_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv27_HeadVar__3_3;
  MR_Word conv26_HeadVar__5_5;

  hlds__make_hlds__add_pragma_gen__add_gen_pragma_trailing_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv27_HeadVar__3_3, ((MR_Word) (wrapper_arg_4)), &conv26_HeadVar__5_5);
  *wrapper_arg_3 = ((MR_Box) (conv27_HeadVar__3_3));
  *wrapper_arg_5 = ((MR_Box) (conv26_HeadVar__5_5));
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__parse_tree_to_hlds_15_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv23_HeadVar__3_3;
  MR_Word conv22_HeadVar__5_5;

  hlds__make_hlds__add_pragma_gen__add_gen_pragma_exceptions_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv23_HeadVar__3_3, ((MR_Word) (wrapper_arg_4)), &conv22_HeadVar__5_5);
  *wrapper_arg_3 = ((MR_Box) (conv23_HeadVar__3_3));
  *wrapper_arg_5 = ((MR_Box) (conv22_HeadVar__5_5));
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__parse_tree_to_hlds_15_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv19_HeadVar__3_3;
  MR_Word conv18_HeadVar__5_5;

  hlds__make_hlds__add_pragma_gen__add_gen_pragma_unused_args_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv19_HeadVar__3_3, ((MR_Word) (wrapper_arg_4)), &conv18_HeadVar__5_5);
  *wrapper_arg_3 = ((MR_Box) (conv19_HeadVar__3_3));
  *wrapper_arg_5 = ((MR_Box) (conv18_HeadVar__5_5));
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__parse_tree_to_hlds_15_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv16_HeadVar__3_3;

  hlds__hlds_module__module_add_foreign_body_code_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv16_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv16_HeadVar__3_3));
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__parse_tree_to_hlds_15_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv14_HeadVar__3_3;

  hlds__hlds_module__module_add_foreign_decl_code_aux_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv14_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv14_HeadVar__3_3));
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__parse_tree_to_hlds_15_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv11_HeadVar__3_3;
  MR_Word conv10_HeadVar__5_5;

  hlds__make_hlds__add_pragma_impl__add_pragma_foreign_proc_export_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv11_HeadVar__3_3, ((MR_Word) (wrapper_arg_4)), &conv10_HeadVar__5_5);
  *wrapper_arg_3 = ((MR_Box) (conv11_HeadVar__3_3));
  *wrapper_arg_5 = ((MR_Box) (conv10_HeadVar__5_5));
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__parse_tree_to_hlds_15_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv8_STATE_VARIABLE_ModuleInfo_11;

  hlds__make_hlds__make_hlds_passes__add_builtin_type_ctor_special_preds_in_builtin_module_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_STATE_VARIABLE_ModuleInfo_11);
  *wrapper_arg_3 = ((MR_Box) (conv8_STATE_VARIABLE_ModuleInfo_11));
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__parse_tree_to_hlds_15_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_HeadVar__3_3;

  hlds__hlds_module__module_add_item_fim_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv6_HeadVar__3_3));
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__parse_tree_to_hlds_15_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__5_5;
  MR_Word conv1_HeadVar__7_7;
  MR_Word conv0_HeadVar__9_9;

  hlds__make_hlds__add_type__add_du_ctors_check_subtype_check_foreign_type_9_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv2_HeadVar__5_5, ((MR_Word) (wrapper_arg_5)), &conv1_HeadVar__7_7, ((MR_Word) (wrapper_arg_7)), &conv0_HeadVar__9_9);
  *wrapper_arg_4 = ((MR_Box) (conv2_HeadVar__5_5));
  *wrapper_arg_6 = ((MR_Box) (conv1_HeadVar__7_7));
  *wrapper_arg_8 = ((MR_Box) (conv0_HeadVar__9_9));
}

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__parse_tree_to_hlds_15_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__make_hlds__make_hlds_passes__IntroducedFrom__pred__parse_tree_to_hlds__181__1_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__parse_tree_to_hlds_15_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__make_hlds__make_hlds_passes__IntroducedFrom__pred__parse_tree_to_hlds__176__1_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

void MR_CALL 
hlds__make_hlds__make_hlds_passes__parse_tree_to_hlds_15_p_0(
  MR_Word ProgressStream_16,
  MR_Word AugCompUnit_17,
  MR_Word Globals_18,
  MR_String DumpBaseFileName_19,
  MR_Word MQInfo0_20,
  MR_Word TypeEqvMap_21,
  MR_Word UsedEqvModules_22,
  MR_Word UnusedInterfaceImports_23,
  MR_Word * STATE_VARIABLE_QualInfo_125,
  MR_Word * STATE_VARIABLE_ModuleInfo_126,
  MR_Word * STATE_VARIABLE_InvalidTypeSpecs_127,
  MR_Word * STATE_VARIABLE_InvalidInstModeSpecs_128,
  MR_Word * STATE_VARIABLE_ErrSpecs_129,
  MR_Word * STATE_VARIABLE_WarnSpecs_130,
  MR_Word * STATE_VARIABLE_InfoSpecs_131)
{
  MR_bool succeeded;
  MR_Word WarnSpecs_29;
  MR_Word ParseTreeModuleSrc_31 = ((MR_Word) ((MR_hl_field(0, AugCompUnit_17, 0))));
  MR_Word ModuleName_32;
  MR_Word ModuleNameContext_33;
  MR_Word ImplicitlyUsedModules_34;
  MR_Word PQInfo_35;
  MR_Word TypeErrSpecs_40;
  MR_Word TypeWarnSpecs_41;
  MR_Word InstModeErrSpecs_42;
  MR_Word InstModeWarnSpecs_43;
  MR_Word InclMap_48;
  MR_Word Avails_49;
  MR_Word FIMs_50;
  MR_Word TypeDefnsAbstract_51;
  MR_Word TypeDefnsMercury_52;
  MR_Word TypeDefnsForeign_53;
  MR_Word InstDefns_54;
  MR_Word ModeDefns_55;
  MR_Word PredDecls_56;
  MR_Word ModeDecls_57;
  MR_Word Promises_58;
  MR_Word Typeclasses_59;
  MR_Word IntInstances_60;
  MR_Word ImpInstances_61;
  MR_Word Initialises_62;
  MR_Word Finalises_63;
  MR_Word Mutables_64;
  MR_Word TypeRepnMap_65;
  MR_Word ForeignEnums_66;
  MR_Word ForeignExportEnums_67;
  MR_Word DeclPragmas_68;
  MR_Word DeclMarkers_69;
  MR_Word DeclTypeSpecConstr_70;
  MR_Word DeclTypeSpec_71;
  MR_Word DeclInputSpec_72;
  MR_Word DeclTermination_73;
  MR_Word DeclTermination2_74;
  MR_Word DeclSharing_75;
  MR_Word DeclReuse_76;
  MR_Word ImplPragmas_77;
  MR_Word ImplMarkers_78;
  MR_Word GenUnusedArgs_79;
  MR_Word GenExceptions_80;
  MR_Word GenTrailing_81;
  MR_Word GenMMTabling_82;
  MR_Word Clauses_83;
  MR_Word ForeignProcs_84;
  MR_Word IntBadClauses_85;
  MR_Word DirectArgMap_86;
  MR_Word TypeRepnDec_87;
  MR_Word SolverPredDecls_91;
  MR_Word SolverForeignProcs_92;
  MR_Word SolverMutables_93;
  MR_Word AllMutables_97;
  MR_Word InitPredTargetNames0_98;
  MR_Word MQUndefInstSpecs0_99;
  MR_Word MQUndefInstsSet0_100;
  MR_Word MQUndefInsts0_101;
  MR_Word MutablePredDecls_102;
  MR_Word MutableClauses_103;
  MR_Word MutableForeignProcs_104;
  MR_Word MutableForeignDeclCodes_105;
  MR_Word MutableForeignBodyCodes_106;
  MR_Word FPEInfosCord1_107;
  MR_Word InitPredTargetNames1_108;
  MR_Word FinalPredTargetNames1_109;
  MR_Word FPEInfosCord2_110;
  MR_Word InitPredTargetNames_111;
  MR_Word FPEInfosCord_112;
  MR_Word FinalPredTargetNames_113;
  MR_Word PragmaTabledCord_114;
  MR_Word PragmasTabled_115;
  MR_Word FPEInfos_116;
  MR_Word ModuleItemVersionNumbers_117;
  MR_Word ExportedProcsCord0_118;
  MR_Word ExportedProcs_119;
  MR_Word ExportedProcsCord_120;
  MR_Word MQInfo_121;
  MR_Word MQInvalidTypeSpecs_122;
  MR_Word MQInvalidInstModeSpecs_123;
  MR_Word MQNonBlockingUndefSpecs_124;
  MR_Word STATE_VARIABLE_WarnSpecs_1_132;
  MR_Word STATE_VARIABLE_ErrSpecs_1_138;
  MR_Word STATE_VARIABLE_WarnSpecs_2_139;
  MR_Word Var_140;
  MR_Word STATE_VARIABLE_InvalidTypeSpecs_1_145;
  MR_Word STATE_VARIABLE_InvalidInstModeSpecs_1_146;
  MR_Word STATE_VARIABLE_ModuleInfo_1_148;
  MR_Word STATE_VARIABLE_ModuleInfo_2_149;
  MR_Word STATE_VARIABLE_SolverPredDeclCord_1_150;
  MR_Word STATE_VARIABLE_SolverForeignProcCord_1_151;
  MR_Word STATE_VARIABLE_SolverMutableCord_1_152;
  MR_Word STATE_VARIABLE_ModuleInfo_3_153;
  MR_Word STATE_VARIABLE_SolverPredDeclCord_2_154;
  MR_Word STATE_VARIABLE_SolverForeignProcCord_2_155;
  MR_Word STATE_VARIABLE_SolverMutableCord_2_156;
  MR_Word STATE_VARIABLE_InvalidTypeSpecs_2_157;
  MR_Word STATE_VARIABLE_ErrSpecs_2_158;
  MR_Word STATE_VARIABLE_WarnSpecs_3_159;
  MR_Word STATE_VARIABLE_ModuleInfo_4_160;
  MR_Word STATE_VARIABLE_SolverPredDeclCord_3_161;
  MR_Word STATE_VARIABLE_SolverForeignProcCord_3_162;
  MR_Word STATE_VARIABLE_SolverMutableCord_3_163;
  MR_Word STATE_VARIABLE_InvalidTypeSpecs_3_164;
  MR_Word STATE_VARIABLE_ErrSpecs_3_165;
  MR_Word STATE_VARIABLE_WarnSpecs_4_166;
  MR_Word STATE_VARIABLE_ModuleInfo_5_167;
  MR_Word STATE_VARIABLE_SolverPredDeclCord_4_168;
  MR_Word STATE_VARIABLE_SolverForeignProcCord_4_169;
  MR_Word STATE_VARIABLE_SolverMutableCord_4_170;
  MR_Word STATE_VARIABLE_InvalidTypeSpecs_4_171;
  MR_Word STATE_VARIABLE_ErrSpecs_4_172;
  MR_Word STATE_VARIABLE_WarnSpecs_5_173;
  MR_Word STATE_VARIABLE_ModuleInfo_6_174;
  MR_Word STATE_VARIABLE_ErrSpecs_5_175;
  MR_Word STATE_VARIABLE_WarnSpecs_6_176;
  MR_Word STATE_VARIABLE_InvalidInstModeSpecs_2_177;
  MR_Word STATE_VARIABLE_ModuleInfo_7_178;
  MR_Word STATE_VARIABLE_ErrSpecs_6_179;
  MR_Word STATE_VARIABLE_InvalidInstModeSpecs_3_180;
  MR_Word STATE_VARIABLE_ModuleInfo_8_182;
  MR_Word STATE_VARIABLE_InvalidTypeSpecs_5_183;
  MR_Word STATE_VARIABLE_WarnSpecs_7_184;
  MR_Word STATE_VARIABLE_ModuleInfo_9_185;
  MR_Word STATE_VARIABLE_ErrSpecs_7_186;
  MR_Word STATE_VARIABLE_ModuleInfo_10_187;
  MR_Word STATE_VARIABLE_ErrSpecs_8_188;
  MR_Word STATE_VARIABLE_ModuleInfo_11_189;
  MR_Word STATE_VARIABLE_ErrSpecs_9_190;
  MR_Word STATE_VARIABLE_ErrSpecs_10_191;
  MR_Word STATE_VARIABLE_ModuleInfo_12_192;
  MR_Word STATE_VARIABLE_ErrSpecs_11_193;
  MR_Word STATE_VARIABLE_ModuleInfo_13_194;
  MR_Word STATE_VARIABLE_ErrSpecs_12_195;
  MR_Word STATE_VARIABLE_ModuleInfo_14_196;
  MR_Word STATE_VARIABLE_ModuleInfo_15_197;
  MR_Word STATE_VARIABLE_ErrSpecs_13_198;
  MR_Word STATE_VARIABLE_ModuleInfo_16_199;
  MR_Word STATE_VARIABLE_ErrSpecs_14_200;
  MR_Word STATE_VARIABLE_ModuleInfo_17_202;
  MR_Word STATE_VARIABLE_ModuleInfo_18_205;
  MR_Word STATE_VARIABLE_ModuleInfo_19_206;
  MR_Word STATE_VARIABLE_QualInfo_1_207;
  MR_Word STATE_VARIABLE_ModuleInfo_20_208;
  MR_Word STATE_VARIABLE_QualInfo_2_209;
  MR_Word STATE_VARIABLE_ErrSpecs_15_210;
  MR_Word STATE_VARIABLE_WarnSpecs_8_211;
  MR_Word STATE_VARIABLE_ModuleInfo_21_212;
  MR_Word STATE_VARIABLE_QualInfo_3_213;
  MR_Word STATE_VARIABLE_ErrSpecs_16_214;
  MR_Word STATE_VARIABLE_WarnSpecs_9_215;
  MR_Word STATE_VARIABLE_ModuleInfo_22_216;
  MR_Word STATE_VARIABLE_QualInfo_4_217;
  MR_Word STATE_VARIABLE_ErrSpecs_17_218;
  MR_Word STATE_VARIABLE_WarnSpecs_10_219;
  MR_Word STATE_VARIABLE_ModuleInfo_23_220;
  MR_Word STATE_VARIABLE_ModuleInfo_24_221;
  MR_Word STATE_VARIABLE_ErrSpecs_18_222;
  MR_Word STATE_VARIABLE_WarnSpecs_11_223;
  MR_Word STATE_VARIABLE_ModuleInfo_25_224;
  MR_Word STATE_VARIABLE_ErrSpecs_19_225;
  MR_Word STATE_VARIABLE_WarnSpecs_12_226;
  MR_Word STATE_VARIABLE_ModuleInfo_26_227;
  MR_Word STATE_VARIABLE_ErrSpecs_20_228;
  MR_Word STATE_VARIABLE_WarnSpecs_13_229;
  MR_Word STATE_VARIABLE_ModuleInfo_27_230;
  MR_Word STATE_VARIABLE_ErrSpecs_21_231;
  MR_Word STATE_VARIABLE_WarnSpecs_14_232;
  MR_Word STATE_VARIABLE_ModuleInfo_28_233;
  MR_Word STATE_VARIABLE_ErrSpecs_22_234;
  MR_Word STATE_VARIABLE_WarnSpecs_15_235;
  MR_Word STATE_VARIABLE_ErrSpecs_23_236;
  MR_Word STATE_VARIABLE_ErrSpecs_24_237;
  MR_Word STATE_VARIABLE_ModuleInfo_29_238;
  MR_Word STATE_VARIABLE_ModuleInfo_30_239;
  MR_Word STATE_VARIABLE_ModuleInfo_31_241;
  MR_Word STATE_VARIABLE_QualInfo_5_242;
  MR_Word STATE_VARIABLE_ErrSpecs_25_243;
  MR_Word STATE_VARIABLE_WarnSpecs_16_244;
  MR_Word STATE_VARIABLE_InfoSpecs_2_245;
  MR_Word STATE_VARIABLE_ModuleInfo_32_246;
  MR_Word STATE_VARIABLE_QualInfo_6_247;
  MR_Word STATE_VARIABLE_ErrSpecs_26_248;
  MR_Word STATE_VARIABLE_WarnSpecs_17_249;
  MR_Word STATE_VARIABLE_ModuleInfo_33_251;
  MR_Word STATE_VARIABLE_QualInfo_7_252;
  MR_Word STATE_VARIABLE_ErrSpecs_27_253;
  MR_Word STATE_VARIABLE_WarnSpecs_18_254;
  MR_Word STATE_VARIABLE_ModuleInfo_34_255;
  MR_Word STATE_VARIABLE_ErrSpecs_28_256;
  MR_Word STATE_VARIABLE_ModuleInfo_35_257;
  MR_Word STATE_VARIABLE_ErrSpecs_29_258;
  MR_Word STATE_VARIABLE_ModuleInfo_36_259;
  MR_Word STATE_VARIABLE_ErrSpecs_30_260;
  MR_Word STATE_VARIABLE_ModuleInfo_37_261;
  MR_Word STATE_VARIABLE_ErrSpecs_31_262;
  MR_Word STATE_VARIABLE_ModuleInfo_38_263;
  MR_Word STATE_VARIABLE_ErrSpecs_32_264;
  MR_Word Var_265;
  MR_Word STATE_VARIABLE_ModuleInfo_39_266;
  MR_Word STATE_VARIABLE_ErrSpecs_33_267;
  MR_Word STATE_VARIABLE_WarnSpecs_19_268;
  MR_Word STATE_VARIABLE_ModuleInfo_40_269;
  MR_Word STATE_VARIABLE_QualInfo_8_270;
  MR_Word STATE_VARIABLE_ErrSpecs_34_271;
  MR_Word STATE_VARIABLE_WarnSpecs_20_272;
  MR_Word STATE_VARIABLE_ModuleInfo_41_274;
  MR_Word STATE_VARIABLE_ErrSpecs_35_275;
  MR_Word STATE_VARIABLE_ModuleInfo_42_277;
  MR_Word STATE_VARIABLE_ModuleInfo_43_279;
  MR_Word STATE_VARIABLE_ModuleInfo_44_281;
  MR_Word STATE_VARIABLE_ErrSpecs_36_282;
  MR_Word STATE_VARIABLE_ModuleInfo_45_284;
  MR_Word STATE_VARIABLE_ErrSpecs_37_285;
  MR_Word STATE_VARIABLE_ModuleInfo_46_287;
  MR_Word STATE_VARIABLE_ErrSpecs_38_288;
  MR_Word STATE_VARIABLE_ModuleInfo_47_290;
  MR_Word STATE_VARIABLE_ErrSpecs_39_291;
  MR_Word STATE_VARIABLE_ErrSpecs_40_292;
  MR_Box conv7_STATE_VARIABLE_ModuleInfo_17_202;
  MR_Word Var_617;
  MR_Box conv13_STATE_VARIABLE_ModuleInfo_41_274;
  MR_Box conv12_STATE_VARIABLE_ErrSpecs_35_275;
  MR_Box conv15_STATE_VARIABLE_ModuleInfo_42_277;
  MR_Box conv17_STATE_VARIABLE_ModuleInfo_43_279;
  MR_Box conv21_STATE_VARIABLE_ModuleInfo_44_281;
  MR_Box conv20_STATE_VARIABLE_ErrSpecs_36_282;
  MR_Box conv25_STATE_VARIABLE_ModuleInfo_45_284;
  MR_Box conv24_STATE_VARIABLE_ErrSpecs_37_285;
  MR_Box conv29_STATE_VARIABLE_ModuleInfo_46_287;
  MR_Box conv28_STATE_VARIABLE_ErrSpecs_38_288;
  MR_Box conv33_STATE_VARIABLE_ModuleInfo_47_290;
  MR_Box conv32_STATE_VARIABLE_ErrSpecs_39_291;
  MR_Box conv35_STATE_VARIABLE_QualInfo_125;

  hlds__make_hlds__make_hlds_passes__maybe_warn_include_and_non_include_3_p_0(Globals_18, ParseTreeModuleSrc_31, &STATE_VARIABLE_WarnSpecs_1_132);
  ModuleName_32 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_31, 0))));
  ModuleNameContext_33 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_31, 1))));
  parse_tree__get_dependencies__get_implicit_avail_needs_in_aug_compilation_unit_3_p_0(Globals_18, AugCompUnit_17, &ImplicitlyUsedModules_34);
  parse_tree__module_qual__mq_info__mq_info_get_partial_qualifier_info_2_p_0(MQInfo0_20, &PQInfo_35);
  TypeErrSpecs_40 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_31, 11))));
  TypeWarnSpecs_41 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_31, 12))));
  InstModeErrSpecs_42 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_31, 13))));
  InstModeWarnSpecs_43 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_31, 14))));
  STATE_VARIABLE_ErrSpecs_1_138 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), TypeErrSpecs_40, InstModeErrSpecs_42);
  Var_140 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_warn_spec_0), InstModeWarnSpecs_43, STATE_VARIABLE_WarnSpecs_1_132);
  STATE_VARIABLE_WarnSpecs_2_139 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_warn_spec_0), TypeWarnSpecs_41, Var_140);
  mercury__list__filter_3_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_2[3]), TypeErrSpecs_40, &STATE_VARIABLE_InvalidTypeSpecs_1_145);
  mercury__list__filter_3_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_2[4]), InstModeErrSpecs_42, &STATE_VARIABLE_InvalidInstModeSpecs_1_146);
  hlds__make_hlds__make_hlds_separate_items__separate_items_in_aug_comp_unit_39_p_0(AugCompUnit_17, &InclMap_48, &Avails_49, &FIMs_50, &TypeDefnsAbstract_51, &TypeDefnsMercury_52, &TypeDefnsForeign_53, &InstDefns_54, &ModeDefns_55, &PredDecls_56, &ModeDecls_57, &Promises_58, &Typeclasses_59, &IntInstances_60, &ImpInstances_61, &Initialises_62, &Finalises_63, &Mutables_64, &TypeRepnMap_65, &ForeignEnums_66, &ForeignExportEnums_67, &DeclPragmas_68, &DeclMarkers_69, &DeclTypeSpecConstr_70, &DeclTypeSpec_71, &DeclInputSpec_72, &DeclTermination_73, &DeclTermination2_74, &DeclSharing_75, &DeclReuse_76, &ImplPragmas_77, &ImplMarkers_78, &GenUnusedArgs_79, &GenExceptions_80, &GenTrailing_81, &GenMMTabling_82, &Clauses_83, &ForeignProcs_84, &IntBadClauses_85);
  mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[0]), &DirectArgMap_86);
  {
    TypeRepnDec_87 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeRepnDec_87, 0) = ((MR_Box) (TypeRepnMap_65));
    MR_hl_field(0, TypeRepnDec_87, 1) = ((MR_Box) (DirectArgMap_86));
    MR_hl_field(0, TypeRepnDec_87, 2) = ((MR_Box) (ForeignEnums_66));
    MR_hl_field(0, TypeRepnDec_87, 3) = ((MR_Box) (ForeignExportEnums_67));
  }
  hlds__hlds_module__module_info_init_12_p_0(Globals_18, ModuleName_32, ModuleNameContext_33, DumpBaseFileName_19, InclMap_48, UsedEqvModules_22, ImplicitlyUsedModules_34, UnusedInterfaceImports_23, PQInfo_35, (MR_Word) ((MR_Unsigned) 0U), TypeRepnDec_87, &STATE_VARIABLE_ModuleInfo_1_148);
  hlds__make_hlds__make_hlds_passes__add_item_avails_3_p_0(Avails_49, STATE_VARIABLE_ModuleInfo_1_148, &STATE_VARIABLE_ModuleInfo_2_149);
  STATE_VARIABLE_SolverPredDeclCord_1_150 = mercury__cord__init_0_f_0((MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[1]));
  STATE_VARIABLE_SolverForeignProcCord_1_151 = mercury__cord__init_0_f_0((MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[2]));
  STATE_VARIABLE_SolverMutableCord_1_152 = mercury__cord__init_0_f_0((MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[3]));
  hlds__make_hlds__make_hlds_passes__add_type_defns_15_p_0(TypeDefnsAbstract_51, STATE_VARIABLE_ModuleInfo_2_149, &STATE_VARIABLE_ModuleInfo_3_153, STATE_VARIABLE_SolverPredDeclCord_1_150, &STATE_VARIABLE_SolverPredDeclCord_2_154, STATE_VARIABLE_SolverForeignProcCord_1_151, &STATE_VARIABLE_SolverForeignProcCord_2_155, STATE_VARIABLE_SolverMutableCord_1_152, &STATE_VARIABLE_SolverMutableCord_2_156, STATE_VARIABLE_InvalidTypeSpecs_1_145, &STATE_VARIABLE_InvalidTypeSpecs_2_157, STATE_VARIABLE_ErrSpecs_1_138, &STATE_VARIABLE_ErrSpecs_2_158, STATE_VARIABLE_WarnSpecs_2_139, &STATE_VARIABLE_WarnSpecs_3_159);
  hlds__make_hlds__make_hlds_passes__add_type_defns_15_p_0(TypeDefnsMercury_52, STATE_VARIABLE_ModuleInfo_3_153, &STATE_VARIABLE_ModuleInfo_4_160, STATE_VARIABLE_SolverPredDeclCord_2_154, &STATE_VARIABLE_SolverPredDeclCord_3_161, STATE_VARIABLE_SolverForeignProcCord_2_155, &STATE_VARIABLE_SolverForeignProcCord_3_162, STATE_VARIABLE_SolverMutableCord_2_156, &STATE_VARIABLE_SolverMutableCord_3_163, STATE_VARIABLE_InvalidTypeSpecs_2_157, &STATE_VARIABLE_InvalidTypeSpecs_3_164, STATE_VARIABLE_ErrSpecs_2_158, &STATE_VARIABLE_ErrSpecs_3_165, STATE_VARIABLE_WarnSpecs_3_159, &STATE_VARIABLE_WarnSpecs_4_166);
  hlds__make_hlds__make_hlds_passes__add_type_defns_15_p_0(TypeDefnsForeign_53, STATE_VARIABLE_ModuleInfo_4_160, &STATE_VARIABLE_ModuleInfo_5_167, STATE_VARIABLE_SolverPredDeclCord_3_161, &STATE_VARIABLE_SolverPredDeclCord_4_168, STATE_VARIABLE_SolverForeignProcCord_3_162, &STATE_VARIABLE_SolverForeignProcCord_4_169, STATE_VARIABLE_SolverMutableCord_3_163, &STATE_VARIABLE_SolverMutableCord_4_170, STATE_VARIABLE_InvalidTypeSpecs_3_164, &STATE_VARIABLE_InvalidTypeSpecs_4_171, STATE_VARIABLE_ErrSpecs_3_165, &STATE_VARIABLE_ErrSpecs_4_172, STATE_VARIABLE_WarnSpecs_4_166, &STATE_VARIABLE_WarnSpecs_5_173);
  SolverPredDecls_91 = mercury__cord__list_1_f_0((MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[1]), STATE_VARIABLE_SolverPredDeclCord_4_168);
  SolverForeignProcs_92 = mercury__cord__list_1_f_0((MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[2]), STATE_VARIABLE_SolverForeignProcCord_4_169);
  SolverMutables_93 = mercury__cord__list_1_f_0((MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[3]), STATE_VARIABLE_SolverMutableCord_4_170);
  hlds__make_hlds__make_hlds_passes__add_inst_defns_7_p_0(InstDefns_54, STATE_VARIABLE_ModuleInfo_5_167, &STATE_VARIABLE_ModuleInfo_6_174, STATE_VARIABLE_ErrSpecs_4_172, &STATE_VARIABLE_ErrSpecs_5_175, STATE_VARIABLE_WarnSpecs_5_173, &STATE_VARIABLE_WarnSpecs_6_176);
  hlds__make_hlds__add_mode__check_inst_defns_4_p_0(STATE_VARIABLE_ModuleInfo_6_174, InstDefns_54, STATE_VARIABLE_InvalidInstModeSpecs_1_146, &STATE_VARIABLE_InvalidInstModeSpecs_2_177);
  hlds__make_hlds__make_hlds_passes__add_mode_defns_5_p_0(ModeDefns_55, STATE_VARIABLE_ModuleInfo_6_174, &STATE_VARIABLE_ModuleInfo_7_178, STATE_VARIABLE_ErrSpecs_5_175, &STATE_VARIABLE_ErrSpecs_6_179);
  hlds__make_hlds__add_mode__check_mode_defns_4_p_0(STATE_VARIABLE_ModuleInfo_7_178, ModeDefns_55, STATE_VARIABLE_InvalidInstModeSpecs_2_177, &STATE_VARIABLE_InvalidInstModeSpecs_3_180);
  if ((STATE_VARIABLE_InvalidTypeSpecs_4_171 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word TypeTable0_94;
    MR_Word Var_181;
    MR_Box conv5_STATE_VARIABLE_ModuleInfo_8_182;
    MR_Box conv4_STATE_VARIABLE_InvalidTypeSpecs_5_183;
    MR_Box conv3_STATE_VARIABLE_WarnSpecs_7_184;

    hlds__hlds_module__module_info_get_type_table_2_p_0(STATE_VARIABLE_ModuleInfo_7_178, &TypeTable0_94);
    {
      Var_181 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_181, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_9[3]));
      MR_hl_field(0, Var_181, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__parse_tree_to_hlds_15_p_0_3));
      MR_hl_field(0, Var_181, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_181, 3) = ((MR_Box) (TypeTable0_94));
    }
    hlds__hlds_data__foldl3_over_type_ctor_defns_8_p_0((MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[4]), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[5]), Var_181, TypeTable0_94, ((MR_Box) (STATE_VARIABLE_ModuleInfo_7_178)), &conv5_STATE_VARIABLE_ModuleInfo_8_182, ((MR_Box) (STATE_VARIABLE_InvalidTypeSpecs_4_171)), &conv4_STATE_VARIABLE_InvalidTypeSpecs_5_183, ((MR_Box) (STATE_VARIABLE_WarnSpecs_6_176)), &conv3_STATE_VARIABLE_WarnSpecs_7_184);
    STATE_VARIABLE_ModuleInfo_8_182 = ((MR_Word) (conv5_STATE_VARIABLE_ModuleInfo_8_182));
    STATE_VARIABLE_InvalidTypeSpecs_5_183 = ((MR_Word) (conv4_STATE_VARIABLE_InvalidTypeSpecs_5_183));
    STATE_VARIABLE_WarnSpecs_7_184 = ((MR_Word) (conv3_STATE_VARIABLE_WarnSpecs_7_184));
  }
  else
  {
    STATE_VARIABLE_ModuleInfo_8_182 = STATE_VARIABLE_ModuleInfo_7_178;
    STATE_VARIABLE_InvalidTypeSpecs_5_183 = STATE_VARIABLE_InvalidTypeSpecs_4_171;
    STATE_VARIABLE_WarnSpecs_7_184 = STATE_VARIABLE_WarnSpecs_6_176;
  }
  hlds__make_hlds__make_hlds_passes__add_pred_decls_5_p_0(PredDecls_56, STATE_VARIABLE_ModuleInfo_8_182, &STATE_VARIABLE_ModuleInfo_9_185, STATE_VARIABLE_ErrSpecs_6_179, &STATE_VARIABLE_ErrSpecs_7_186);
  hlds__make_hlds__make_hlds_passes__add_pred_decls_5_p_0(SolverPredDecls_91, STATE_VARIABLE_ModuleInfo_9_185, &STATE_VARIABLE_ModuleInfo_10_187, STATE_VARIABLE_ErrSpecs_7_186, &STATE_VARIABLE_ErrSpecs_8_188);
  hlds__make_hlds__make_hlds_passes__add_mode_decls_5_p_0(ModeDecls_57, STATE_VARIABLE_ModuleInfo_10_187, &STATE_VARIABLE_ModuleInfo_11_189, STATE_VARIABLE_ErrSpecs_8_188, &STATE_VARIABLE_ErrSpecs_9_190);
  AllMutables_97 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[3]), Mutables_64, SolverMutables_93);
  hlds__hlds_module__module_info_get_user_init_pred_target_names_2_p_0(STATE_VARIABLE_ModuleInfo_11_189, &InitPredTargetNames0_98);
  parse_tree__module_qual__mq_info__mq_info_get_undef_insts_2_p_0(MQInfo0_20, &MQUndefInstSpecs0_99);
  mercury__one_or_more_map__keys_as_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), MQUndefInstSpecs0_99, &MQUndefInstsSet0_100);
  MQUndefInsts0_101 = mercury__set_tree234__from_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), MQUndefInstsSet0_100);
  hlds__make_hlds__add_mutable_aux_preds__implement_mutables_if_local_13_p_0(STATE_VARIABLE_ModuleInfo_11_189, MQUndefInsts0_101, AllMutables_97, &MutablePredDecls_102, &MutableClauses_103, &MutableForeignProcs_104, &MutableForeignDeclCodes_105, &MutableForeignBodyCodes_106, &FPEInfosCord1_107, InitPredTargetNames0_98, &InitPredTargetNames1_108, STATE_VARIABLE_ErrSpecs_9_190, &STATE_VARIABLE_ErrSpecs_10_191);
  hlds__make_hlds__make_hlds_passes__add_pred_decls_5_p_0(MutablePredDecls_102, STATE_VARIABLE_ModuleInfo_11_189, &STATE_VARIABLE_ModuleInfo_12_192, STATE_VARIABLE_ErrSpecs_10_191, &STATE_VARIABLE_ErrSpecs_11_193);
  hlds__make_hlds__add_class__add_typeclass_defns_5_p_0(Typeclasses_59, STATE_VARIABLE_ModuleInfo_12_192, &STATE_VARIABLE_ModuleInfo_13_194, STATE_VARIABLE_ErrSpecs_11_193, &STATE_VARIABLE_ErrSpecs_12_195);
  hlds__make_hlds__make_hlds_passes__maybe_add_default_modes_3_p_0(PredDecls_56, STATE_VARIABLE_ModuleInfo_13_194, &STATE_VARIABLE_ModuleInfo_14_196);
  hlds__make_hlds__add_class__add_abstract_instance_defns_5_p_0(IntInstances_60, STATE_VARIABLE_ModuleInfo_14_196, &STATE_VARIABLE_ModuleInfo_15_197, STATE_VARIABLE_ErrSpecs_12_195, &STATE_VARIABLE_ErrSpecs_13_198);
  hlds__make_hlds__add_class__add_full_instance_defns_5_p_0(ImpInstances_61, STATE_VARIABLE_ModuleInfo_15_197, &STATE_VARIABLE_ModuleInfo_16_199, STATE_VARIABLE_ErrSpecs_13_198, &STATE_VARIABLE_ErrSpecs_14_200);
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_2[5]), FIMs_50, ((MR_Box) (STATE_VARIABLE_ModuleInfo_16_199)), &conv7_STATE_VARIABLE_ModuleInfo_17_202);
  STATE_VARIABLE_ModuleInfo_17_202 = ((MR_Word) (conv7_STATE_VARIABLE_ModuleInfo_17_202));
  Var_617 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
  succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_32, Var_617);
  if (succeeded)
    succeeded = hlds__special_pred__compiler_generated_rtti_for_builtins_1_p_0(STATE_VARIABLE_ModuleInfo_17_202);
  if (succeeded)
  {
    MR_Word Var_204;
    MR_Box conv9_STATE_VARIABLE_ModuleInfo_18_205;

    Var_204 = parse_tree__prog_type__builtin_type_ctors_with_no_hlds_type_defn_0_f_0();
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_2[6]), Var_204, ((MR_Box) (STATE_VARIABLE_ModuleInfo_17_202)), &conv9_STATE_VARIABLE_ModuleInfo_18_205);
    STATE_VARIABLE_ModuleInfo_18_205 = ((MR_Word) (conv9_STATE_VARIABLE_ModuleInfo_18_205));
  }
  else
    STATE_VARIABLE_ModuleInfo_18_205 = STATE_VARIABLE_ModuleInfo_17_202;
  hlds__hlds_module__module_info_optimize_2_p_0(STATE_VARIABLE_ModuleInfo_18_205, &STATE_VARIABLE_ModuleInfo_19_206);
  hlds__make_hlds__qual_info__init_qual_info_3_p_0(MQInfo0_20, TypeEqvMap_21, &STATE_VARIABLE_QualInfo_1_207);
  hlds__make_hlds__make_hlds_passes__add_clauses_10_p_0(ProgressStream_16, Clauses_83, STATE_VARIABLE_ModuleInfo_19_206, &STATE_VARIABLE_ModuleInfo_20_208, STATE_VARIABLE_QualInfo_1_207, &STATE_VARIABLE_QualInfo_2_209, STATE_VARIABLE_ErrSpecs_14_200, &STATE_VARIABLE_ErrSpecs_15_210, STATE_VARIABLE_WarnSpecs_7_184, &STATE_VARIABLE_WarnSpecs_8_211);
  hlds__make_hlds__make_hlds_passes__add_clauses_10_p_0(ProgressStream_16, MutableClauses_103, STATE_VARIABLE_ModuleInfo_20_208, &STATE_VARIABLE_ModuleInfo_21_212, STATE_VARIABLE_QualInfo_2_209, &STATE_VARIABLE_QualInfo_3_213, STATE_VARIABLE_ErrSpecs_15_210, &STATE_VARIABLE_ErrSpecs_16_214, STATE_VARIABLE_WarnSpecs_8_211, &STATE_VARIABLE_WarnSpecs_9_215);
  hlds__make_hlds__make_hlds_passes__add_promises_10_p_0(ProgressStream_16, Promises_58, STATE_VARIABLE_ModuleInfo_21_212, &STATE_VARIABLE_ModuleInfo_22_216, STATE_VARIABLE_QualInfo_3_213, &STATE_VARIABLE_QualInfo_4_217, STATE_VARIABLE_ErrSpecs_16_214, &STATE_VARIABLE_ErrSpecs_17_218, STATE_VARIABLE_WarnSpecs_9_215, &STATE_VARIABLE_WarnSpecs_10_219);
  hlds__hlds_module__module_info_set_int_bad_clauses_3_p_0(IntBadClauses_85, STATE_VARIABLE_ModuleInfo_22_216, &STATE_VARIABLE_ModuleInfo_23_220);
  hlds__make_hlds__add_pragma_decl__add_decl_markers_7_p_0(DeclMarkers_69, STATE_VARIABLE_ModuleInfo_23_220, &STATE_VARIABLE_ModuleInfo_24_221, STATE_VARIABLE_ErrSpecs_17_218, &STATE_VARIABLE_ErrSpecs_18_222, STATE_VARIABLE_WarnSpecs_10_219, &STATE_VARIABLE_WarnSpecs_11_223);
  hlds__make_hlds__add_pragma_impl__add_impl_markers_7_p_0(ImplMarkers_78, STATE_VARIABLE_ModuleInfo_24_221, &STATE_VARIABLE_ModuleInfo_25_224, STATE_VARIABLE_ErrSpecs_18_222, &STATE_VARIABLE_ErrSpecs_19_225, STATE_VARIABLE_WarnSpecs_11_223, &STATE_VARIABLE_WarnSpecs_12_226);
  hlds__make_hlds__add_foreign_proc__add_foreign_procs_8_p_0(ProgressStream_16, ForeignProcs_84, STATE_VARIABLE_ModuleInfo_25_224, &STATE_VARIABLE_ModuleInfo_26_227, STATE_VARIABLE_ErrSpecs_19_225, &STATE_VARIABLE_ErrSpecs_20_228, STATE_VARIABLE_WarnSpecs_12_226, &STATE_VARIABLE_WarnSpecs_13_229);
  hlds__make_hlds__add_foreign_proc__add_foreign_procs_8_p_0(ProgressStream_16, SolverForeignProcs_92, STATE_VARIABLE_ModuleInfo_26_227, &STATE_VARIABLE_ModuleInfo_27_230, STATE_VARIABLE_ErrSpecs_20_228, &STATE_VARIABLE_ErrSpecs_21_231, STATE_VARIABLE_WarnSpecs_13_229, &STATE_VARIABLE_WarnSpecs_14_232);
  hlds__make_hlds__add_foreign_proc__add_foreign_procs_8_p_0(ProgressStream_16, MutableForeignProcs_104, STATE_VARIABLE_ModuleInfo_27_230, &STATE_VARIABLE_ModuleInfo_28_233, STATE_VARIABLE_ErrSpecs_21_231, &STATE_VARIABLE_ErrSpecs_22_234, STATE_VARIABLE_WarnSpecs_14_232, &STATE_VARIABLE_WarnSpecs_15_235);
  hlds__hlds_module__module_info_get_user_final_pred_target_names_2_p_0(STATE_VARIABLE_ModuleInfo_28_233, &FinalPredTargetNames1_109);
  hlds__make_hlds__make_hlds_passes__add_initialises_8_p_0(STATE_VARIABLE_ModuleInfo_28_233, Initialises_62, FPEInfosCord1_107, &FPEInfosCord2_110, InitPredTargetNames1_108, &InitPredTargetNames_111, STATE_VARIABLE_ErrSpecs_22_234, &STATE_VARIABLE_ErrSpecs_23_236);
  hlds__make_hlds__make_hlds_passes__add_finalises_8_p_0(STATE_VARIABLE_ModuleInfo_28_233, Finalises_63, FPEInfosCord2_110, &FPEInfosCord_112, FinalPredTargetNames1_109, &FinalPredTargetNames_113, STATE_VARIABLE_ErrSpecs_23_236, &STATE_VARIABLE_ErrSpecs_24_237);
  hlds__hlds_module__module_info_set_user_init_pred_target_names_3_p_0(InitPredTargetNames_111, STATE_VARIABLE_ModuleInfo_28_233, &STATE_VARIABLE_ModuleInfo_29_238);
  hlds__hlds_module__module_info_set_user_final_pred_target_names_3_p_0(FinalPredTargetNames_113, STATE_VARIABLE_ModuleInfo_29_238, &STATE_VARIABLE_ModuleInfo_30_239);
  hlds__make_hlds__add_pragma_decl__add_decl_pragmas_12_p_0(ProgressStream_16, DeclPragmas_68, STATE_VARIABLE_ModuleInfo_30_239, &STATE_VARIABLE_ModuleInfo_31_241, STATE_VARIABLE_QualInfo_4_217, &STATE_VARIABLE_QualInfo_5_242, STATE_VARIABLE_ErrSpecs_24_237, &STATE_VARIABLE_ErrSpecs_25_243, STATE_VARIABLE_WarnSpecs_15_235, &STATE_VARIABLE_WarnSpecs_16_244, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_InfoSpecs_2_245);
  hlds__make_hlds__add_pragma_decl__add_decl_pragmas_type_spec_constr_12_p_0(ProgressStream_16, DeclTypeSpecConstr_70, STATE_VARIABLE_ModuleInfo_31_241, &STATE_VARIABLE_ModuleInfo_32_246, STATE_VARIABLE_QualInfo_5_242, &STATE_VARIABLE_QualInfo_6_247, STATE_VARIABLE_ErrSpecs_25_243, &STATE_VARIABLE_ErrSpecs_26_248, STATE_VARIABLE_WarnSpecs_16_244, &STATE_VARIABLE_WarnSpecs_17_249, STATE_VARIABLE_InfoSpecs_2_245, STATE_VARIABLE_InfoSpecs_131);
  hlds__make_hlds__add_pragma_decl__add_decl_pragmas_type_spec_9_p_0(DeclTypeSpec_71, STATE_VARIABLE_ModuleInfo_32_246, &STATE_VARIABLE_ModuleInfo_33_251, STATE_VARIABLE_QualInfo_6_247, &STATE_VARIABLE_QualInfo_7_252, STATE_VARIABLE_ErrSpecs_26_248, &STATE_VARIABLE_ErrSpecs_27_253, STATE_VARIABLE_WarnSpecs_17_249, &STATE_VARIABLE_WarnSpecs_18_254);
  hlds__make_hlds__add_pragma_decl__add_decl_pragmas_input_mode_spec_5_p_0(DeclInputSpec_72, STATE_VARIABLE_ModuleInfo_33_251, &STATE_VARIABLE_ModuleInfo_34_255, STATE_VARIABLE_ErrSpecs_27_253, &STATE_VARIABLE_ErrSpecs_28_256);
  hlds__make_hlds__add_pragma_decl__add_decl_pragmas_termination_5_p_0(DeclTermination_73, STATE_VARIABLE_ModuleInfo_34_255, &STATE_VARIABLE_ModuleInfo_35_257, STATE_VARIABLE_ErrSpecs_28_256, &STATE_VARIABLE_ErrSpecs_29_258);
  hlds__make_hlds__add_pragma_decl__add_decl_pragmas_termination2_5_p_0(DeclTermination2_74, STATE_VARIABLE_ModuleInfo_35_257, &STATE_VARIABLE_ModuleInfo_36_259, STATE_VARIABLE_ErrSpecs_29_258, &STATE_VARIABLE_ErrSpecs_30_260);
  hlds__make_hlds__add_pragma_decl__add_decl_pragmas_sharing_5_p_0(DeclSharing_75, STATE_VARIABLE_ModuleInfo_36_259, &STATE_VARIABLE_ModuleInfo_37_261, STATE_VARIABLE_ErrSpecs_30_260, &STATE_VARIABLE_ErrSpecs_31_262);
  hlds__make_hlds__add_pragma_decl__add_decl_pragmas_reuse_5_p_0(DeclReuse_76, STATE_VARIABLE_ModuleInfo_37_261, &STATE_VARIABLE_ModuleInfo_38_263, STATE_VARIABLE_ErrSpecs_31_262, &STATE_VARIABLE_ErrSpecs_32_264);
  Var_265 = mercury__cord__init_0_f_0((MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[6]));
  hlds__make_hlds__add_pragma_impl__add_impl_pragmas_10_p_0(ProgressStream_16, ImplPragmas_77, Var_265, &PragmaTabledCord_114, STATE_VARIABLE_ModuleInfo_38_263, &STATE_VARIABLE_ModuleInfo_39_266, STATE_VARIABLE_ErrSpecs_32_264, &STATE_VARIABLE_ErrSpecs_33_267, STATE_VARIABLE_WarnSpecs_18_254, &STATE_VARIABLE_WarnSpecs_19_268);
  PragmasTabled_115 = mercury__cord__list_1_f_0((MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[6]), PragmaTabledCord_114);
  hlds__make_hlds__add_pragma_impl__add_impl_pragmas_tabled_10_p_0(ProgressStream_16, PragmasTabled_115, STATE_VARIABLE_ModuleInfo_39_266, &STATE_VARIABLE_ModuleInfo_40_269, STATE_VARIABLE_QualInfo_7_252, &STATE_VARIABLE_QualInfo_8_270, STATE_VARIABLE_ErrSpecs_33_267, &STATE_VARIABLE_ErrSpecs_34_271, STATE_VARIABLE_WarnSpecs_19_268, &STATE_VARIABLE_WarnSpecs_20_272);
  FPEInfos_116 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_impl_pragma_fproc_export_info_0), FPEInfosCord_112);
  mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_impl_pragma_fproc_export_info_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[4]), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_2[7]), FPEInfos_116, ((MR_Box) (STATE_VARIABLE_ModuleInfo_40_269)), &conv13_STATE_VARIABLE_ModuleInfo_41_274, ((MR_Box) (STATE_VARIABLE_ErrSpecs_34_271)), &conv12_STATE_VARIABLE_ErrSpecs_35_275);
  STATE_VARIABLE_ModuleInfo_41_274 = ((MR_Word) (conv13_STATE_VARIABLE_ModuleInfo_41_274));
  STATE_VARIABLE_ErrSpecs_35_275 = ((MR_Word) (conv12_STATE_VARIABLE_ErrSpecs_35_275));
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_2[8]), MutableForeignDeclCodes_105, ((MR_Box) (STATE_VARIABLE_ModuleInfo_41_274)), &conv15_STATE_VARIABLE_ModuleInfo_42_277);
  STATE_VARIABLE_ModuleInfo_42_277 = ((MR_Word) (conv15_STATE_VARIABLE_ModuleInfo_42_277));
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_2[9]), MutableForeignBodyCodes_106, ((MR_Box) (STATE_VARIABLE_ModuleInfo_42_277)), &conv17_STATE_VARIABLE_ModuleInfo_43_279);
  STATE_VARIABLE_ModuleInfo_43_279 = ((MR_Word) (conv17_STATE_VARIABLE_ModuleInfo_43_279));
  mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_gen_pragma_unused_args_info_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[4]), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_2[10]), GenUnusedArgs_79, ((MR_Box) (STATE_VARIABLE_ModuleInfo_43_279)), &conv21_STATE_VARIABLE_ModuleInfo_44_281, ((MR_Box) (STATE_VARIABLE_ErrSpecs_35_275)), &conv20_STATE_VARIABLE_ErrSpecs_36_282);
  STATE_VARIABLE_ModuleInfo_44_281 = ((MR_Word) (conv21_STATE_VARIABLE_ModuleInfo_44_281));
  STATE_VARIABLE_ErrSpecs_36_282 = ((MR_Word) (conv20_STATE_VARIABLE_ErrSpecs_36_282));
  mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_gen_pragma_exceptions_info_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[4]), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_2[11]), GenExceptions_80, ((MR_Box) (STATE_VARIABLE_ModuleInfo_44_281)), &conv25_STATE_VARIABLE_ModuleInfo_45_284, ((MR_Box) (STATE_VARIABLE_ErrSpecs_36_282)), &conv24_STATE_VARIABLE_ErrSpecs_37_285);
  STATE_VARIABLE_ModuleInfo_45_284 = ((MR_Word) (conv25_STATE_VARIABLE_ModuleInfo_45_284));
  STATE_VARIABLE_ErrSpecs_37_285 = ((MR_Word) (conv24_STATE_VARIABLE_ErrSpecs_37_285));
  mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_gen_pragma_trailing_info_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[4]), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_2[12]), GenTrailing_81, ((MR_Box) (STATE_VARIABLE_ModuleInfo_45_284)), &conv29_STATE_VARIABLE_ModuleInfo_46_287, ((MR_Box) (STATE_VARIABLE_ErrSpecs_37_285)), &conv28_STATE_VARIABLE_ErrSpecs_38_288);
  STATE_VARIABLE_ModuleInfo_46_287 = ((MR_Word) (conv29_STATE_VARIABLE_ModuleInfo_46_287));
  STATE_VARIABLE_ErrSpecs_38_288 = ((MR_Word) (conv28_STATE_VARIABLE_ErrSpecs_38_288));
  mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__prog_item_pragma__parse_tree__prog_item_pragma__type_ctor_info_gen_pragma_mm_tabling_info_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[4]), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_2[13]), GenMMTabling_82, ((MR_Box) (STATE_VARIABLE_ModuleInfo_46_287)), &conv33_STATE_VARIABLE_ModuleInfo_47_290, ((MR_Box) (STATE_VARIABLE_ErrSpecs_38_288)), &conv32_STATE_VARIABLE_ErrSpecs_39_291);
  STATE_VARIABLE_ModuleInfo_47_290 = ((MR_Word) (conv33_STATE_VARIABLE_ModuleInfo_47_290));
  STATE_VARIABLE_ErrSpecs_39_291 = ((MR_Word) (conv32_STATE_VARIABLE_ErrSpecs_39_291));
  hlds__make_hlds__check_field_access_functions__check_preds_if_field_access_function_4_p_0(STATE_VARIABLE_ModuleInfo_47_290, PredDecls_56, STATE_VARIABLE_ErrSpecs_39_291, &STATE_VARIABLE_ErrSpecs_40_292);
  ModuleItemVersionNumbers_117 = ((MR_Word) ((MR_hl_field(0, AugCompUnit_17, 8))));
  mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__item_types__recompilation__item_types__type_ctor_info_module_item_version_numbers_0), (MR_Word) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_2[14]), ModuleItemVersionNumbers_117, ((MR_Box) (STATE_VARIABLE_QualInfo_8_270)), &conv35_STATE_VARIABLE_QualInfo_125);
  *STATE_VARIABLE_QualInfo_125 = ((MR_Word) (conv35_STATE_VARIABLE_QualInfo_125));
  hlds__hlds_module__module_info_get_pragma_exported_procs_2_p_0(STATE_VARIABLE_ModuleInfo_47_290, &ExportedProcsCord0_118);
  ExportedProcs_119 = mercury__cord__list_1_f_0((MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_pragma_exported_proc_0), ExportedProcsCord0_118);
  ExportedProcsCord_120 = mercury__cord__from_list_1_f_0((MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_pragma_exported_proc_0), ExportedProcs_119);
  hlds__hlds_module__module_info_set_pragma_exported_procs_3_p_0(ExportedProcsCord_120, STATE_VARIABLE_ModuleInfo_47_290, STATE_VARIABLE_ModuleInfo_126);
  hlds__make_hlds__qual_info__qual_info_get_mq_info_2_p_0(*STATE_VARIABLE_QualInfo_125, &MQInfo_121);
  parse_tree__module_qual__mq_info__get_err_specs_in_mq_info_5_p_0(MQInfo_121, &MQInvalidTypeSpecs_122, &MQInvalidInstModeSpecs_123, &MQNonBlockingUndefSpecs_124, &WarnSpecs_29);
  *STATE_VARIABLE_InvalidTypeSpecs_127 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), MQInvalidTypeSpecs_122, STATE_VARIABLE_InvalidTypeSpecs_5_183);
  *STATE_VARIABLE_InvalidInstModeSpecs_128 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), MQInvalidInstModeSpecs_123, STATE_VARIABLE_InvalidInstModeSpecs_3_180);
  *STATE_VARIABLE_ErrSpecs_129 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_err_spec_0), MQNonBlockingUndefSpecs_124, STATE_VARIABLE_ErrSpecs_40_292);
  *STATE_VARIABLE_WarnSpecs_130 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_warn_spec_0), WarnSpecs_29, STATE_VARIABLE_WarnSpecs_20_272);
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_finalises_8_p_0_1(
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
  MR_Word conv2_STATE_VARIABLE_PragmaFPEInfoCord_25;
  MR_Word conv1_STATE_VARIABLE_PredTargetNames_27;
  MR_Word conv0_STATE_VARIABLE_Specs_29;

  hlds__make_hlds__make_hlds_passes__add_finalise_9_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_PragmaFPEInfoCord_25, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_PredTargetNames_27, ((MR_Word) (wrapper_arg_6)), &conv0_STATE_VARIABLE_Specs_29);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_PragmaFPEInfoCord_25));
  *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_PredTargetNames_27));
  *wrapper_arg_7 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_29));
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_finalises_8_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_PragmaFPEInfoCord_0_3,
  MR_Word * STATE_VARIABLE_PragmaFPEInfoCord_4,
  MR_Word STATE_VARIABLE_PredTargetNames_0_5,
  MR_Word * STATE_VARIABLE_PredTargetNames_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_8 = STATE_VARIABLE_Specs_0_7;
      *STATE_VARIABLE_PredTargetNames_6 = STATE_VARIABLE_PredTargetNames_0_5;
      *STATE_VARIABLE_PragmaFPEInfoCord_4 = STATE_VARIABLE_PragmaFPEInfoCord_0_3;
    }
    else
    {
      MR_Word ImsList_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word ImsLists_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word ItemMercuryStatus_25 = ((MR_Word) ((MR_hl_field(0, ImsList_20, 0))));
      MR_Word Items_26 = ((MR_Word) ((MR_hl_field(0, ImsList_20, 1))));
      MR_Word Var_33;
      MR_Word STATE_VARIABLE_PragmaFPEInfoCord_1_34;
      MR_Word STATE_VARIABLE_PredTargetNames_1_35;
      MR_Word STATE_VARIABLE_Specs_1_36;
      MR_Box conv5_STATE_VARIABLE_PragmaFPEInfoCord_1_34;
      MR_Box conv4_STATE_VARIABLE_PredTargetNames_1_35;
      MR_Box conv3_STATE_VARIABLE_Specs_1_36;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_PragmaFPEInfoCord_0_3;
      MR_Word next_value_of_STATE_VARIABLE_PredTargetNames_0_5;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_7;

      {
        Var_33 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_33, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_9[2]));
        MR_hl_field(0, Var_33, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__add_finalises_8_p_0_1));
        MR_hl_field(0, Var_33, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_33, 3) = ((MR_Box) (ModuleInfo_1));
        MR_hl_field(0, Var_33, 4) = ((MR_Box) (ItemMercuryStatus_25));
      }
      mercury__list__foldl3_8_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_finalise_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[17]), (MR_Word) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_pred_target_names_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[4]), Var_33, Items_26, ((MR_Box) (STATE_VARIABLE_PragmaFPEInfoCord_0_3)), &conv5_STATE_VARIABLE_PragmaFPEInfoCord_1_34, ((MR_Box) (STATE_VARIABLE_PredTargetNames_0_5)), &conv4_STATE_VARIABLE_PredTargetNames_1_35, ((MR_Box) (STATE_VARIABLE_Specs_0_7)), &conv3_STATE_VARIABLE_Specs_1_36);
      STATE_VARIABLE_PragmaFPEInfoCord_1_34 = ((MR_Word) (conv5_STATE_VARIABLE_PragmaFPEInfoCord_1_34));
      STATE_VARIABLE_PredTargetNames_1_35 = ((MR_Word) (conv4_STATE_VARIABLE_PredTargetNames_1_35));
      STATE_VARIABLE_Specs_1_36 = ((MR_Word) (conv3_STATE_VARIABLE_Specs_1_36));
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = ImsLists_21;
      next_value_of_STATE_VARIABLE_PragmaFPEInfoCord_0_3 = STATE_VARIABLE_PragmaFPEInfoCord_1_34;
      next_value_of_STATE_VARIABLE_PredTargetNames_0_5 = STATE_VARIABLE_PredTargetNames_1_35;
      next_value_of_STATE_VARIABLE_Specs_0_7 = STATE_VARIABLE_Specs_1_36;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_PragmaFPEInfoCord_0_3 = next_value_of_STATE_VARIABLE_PragmaFPEInfoCord_0_3;
      STATE_VARIABLE_PredTargetNames_0_5 = next_value_of_STATE_VARIABLE_PredTargetNames_0_5;
      STATE_VARIABLE_Specs_0_7 = next_value_of_STATE_VARIABLE_Specs_0_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_initialises_8_p_0_1(
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
  MR_Word conv2_STATE_VARIABLE_PragmaFPEInfoCord_25;
  MR_Word conv1_STATE_VARIABLE_PredTargetNames_27;
  MR_Word conv0_STATE_VARIABLE_Specs_29;

  hlds__make_hlds__make_hlds_passes__add_initialise_9_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_PragmaFPEInfoCord_25, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_PredTargetNames_27, ((MR_Word) (wrapper_arg_6)), &conv0_STATE_VARIABLE_Specs_29);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_PragmaFPEInfoCord_25));
  *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_PredTargetNames_27));
  *wrapper_arg_7 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_29));
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_initialises_8_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_PragmaFPEInfoCord_0_3,
  MR_Word * STATE_VARIABLE_PragmaFPEInfoCord_4,
  MR_Word STATE_VARIABLE_PredTargetNames_0_5,
  MR_Word * STATE_VARIABLE_PredTargetNames_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_8 = STATE_VARIABLE_Specs_0_7;
      *STATE_VARIABLE_PredTargetNames_6 = STATE_VARIABLE_PredTargetNames_0_5;
      *STATE_VARIABLE_PragmaFPEInfoCord_4 = STATE_VARIABLE_PragmaFPEInfoCord_0_3;
    }
    else
    {
      MR_Word ImsList_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word ImsLists_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word ItemMercuryStatus_25 = ((MR_Word) ((MR_hl_field(0, ImsList_20, 0))));
      MR_Word Items_26 = ((MR_Word) ((MR_hl_field(0, ImsList_20, 1))));
      MR_Word Var_33;
      MR_Word STATE_VARIABLE_PragmaFPEInfoCord_1_34;
      MR_Word STATE_VARIABLE_PredTargetNames_1_35;
      MR_Word STATE_VARIABLE_Specs_1_36;
      MR_Box conv5_STATE_VARIABLE_PragmaFPEInfoCord_1_34;
      MR_Box conv4_STATE_VARIABLE_PredTargetNames_1_35;
      MR_Box conv3_STATE_VARIABLE_Specs_1_36;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_PragmaFPEInfoCord_0_3;
      MR_Word next_value_of_STATE_VARIABLE_PredTargetNames_0_5;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_7;

      {
        Var_33 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_33, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_9[1]));
        MR_hl_field(0, Var_33, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__add_initialises_8_p_0_1));
        MR_hl_field(0, Var_33, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_33, 3) = ((MR_Box) (ModuleInfo_1));
        MR_hl_field(0, Var_33, 4) = ((MR_Box) (ItemMercuryStatus_25));
      }
      mercury__list__foldl3_8_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_initialise_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[17]), (MR_Word) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_pred_target_names_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[4]), Var_33, Items_26, ((MR_Box) (STATE_VARIABLE_PragmaFPEInfoCord_0_3)), &conv5_STATE_VARIABLE_PragmaFPEInfoCord_1_34, ((MR_Box) (STATE_VARIABLE_PredTargetNames_0_5)), &conv4_STATE_VARIABLE_PredTargetNames_1_35, ((MR_Box) (STATE_VARIABLE_Specs_0_7)), &conv3_STATE_VARIABLE_Specs_1_36);
      STATE_VARIABLE_PragmaFPEInfoCord_1_34 = ((MR_Word) (conv5_STATE_VARIABLE_PragmaFPEInfoCord_1_34));
      STATE_VARIABLE_PredTargetNames_1_35 = ((MR_Word) (conv4_STATE_VARIABLE_PredTargetNames_1_35));
      STATE_VARIABLE_Specs_1_36 = ((MR_Word) (conv3_STATE_VARIABLE_Specs_1_36));
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = ImsLists_21;
      next_value_of_STATE_VARIABLE_PragmaFPEInfoCord_0_3 = STATE_VARIABLE_PragmaFPEInfoCord_1_34;
      next_value_of_STATE_VARIABLE_PredTargetNames_0_5 = STATE_VARIABLE_PredTargetNames_1_35;
      next_value_of_STATE_VARIABLE_Specs_0_7 = STATE_VARIABLE_Specs_1_36;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_PragmaFPEInfoCord_0_3 = next_value_of_STATE_VARIABLE_PragmaFPEInfoCord_0_3;
      STATE_VARIABLE_PredTargetNames_0_5 = next_value_of_STATE_VARIABLE_PredTargetNames_0_5;
      STATE_VARIABLE_Specs_0_7 = next_value_of_STATE_VARIABLE_Specs_0_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_promises_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_STATE_VARIABLE_ModuleInfo_41;
  MR_Word conv2_STATE_VARIABLE_QualInfo_43;
  MR_Word conv1_STATE_VARIABLE_ErrSpecs_45;
  MR_Word conv0_STATE_VARIABLE_WarnSpecs_47;

  hlds__make_hlds__make_hlds_passes__add_promise_11_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_ModuleInfo_41, ((MR_Word) (wrapper_arg_4)), &conv2_STATE_VARIABLE_QualInfo_43, ((MR_Word) (wrapper_arg_6)), &conv1_STATE_VARIABLE_ErrSpecs_45, ((MR_Word) (wrapper_arg_8)), &conv0_STATE_VARIABLE_WarnSpecs_47);
  *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_ModuleInfo_41));
  *wrapper_arg_5 = ((MR_Box) (conv2_STATE_VARIABLE_QualInfo_43));
  *wrapper_arg_7 = ((MR_Box) (conv1_STATE_VARIABLE_ErrSpecs_45));
  *wrapper_arg_9 = ((MR_Box) (conv0_STATE_VARIABLE_WarnSpecs_47));
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_promises_10_p_0(
  MR_Word ProgressStream_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ModuleInfo_0_3,
  MR_Word * STATE_VARIABLE_ModuleInfo_4,
  MR_Word STATE_VARIABLE_QualInfo_0_5,
  MR_Word * STATE_VARIABLE_QualInfo_6,
  MR_Word STATE_VARIABLE_ErrSpecs_0_7,
  MR_Word * STATE_VARIABLE_ErrSpecs_8,
  MR_Word STATE_VARIABLE_WarnSpecs_0_9,
  MR_Word * STATE_VARIABLE_WarnSpecs_10)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_WarnSpecs_10 = STATE_VARIABLE_WarnSpecs_0_9;
      *STATE_VARIABLE_ErrSpecs_8 = STATE_VARIABLE_ErrSpecs_0_7;
      *STATE_VARIABLE_QualInfo_6 = STATE_VARIABLE_QualInfo_0_5;
      *STATE_VARIABLE_ModuleInfo_4 = STATE_VARIABLE_ModuleInfo_0_3;
    }
    else
    {
      MR_Word ImsList_25 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word ImsLists_26 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word ItemMercuryStatus_31 = ((MR_Word) ((MR_hl_field(0, ImsList_25, 0))));
      MR_Word Items_32 = ((MR_Word) ((MR_hl_field(0, ImsList_25, 1))));
      MR_Word PredStatus_33;
      MR_Word Var_42;
      MR_Word STATE_VARIABLE_ModuleInfo_1_43;
      MR_Word STATE_VARIABLE_QualInfo_1_44;
      MR_Word STATE_VARIABLE_ErrSpecs_1_45;
      MR_Word STATE_VARIABLE_WarnSpecs_1_46;
      MR_Box conv7_STATE_VARIABLE_ModuleInfo_1_43;
      MR_Box conv6_STATE_VARIABLE_QualInfo_1_44;
      MR_Box conv5_STATE_VARIABLE_ErrSpecs_1_45;
      MR_Box conv4_STATE_VARIABLE_WarnSpecs_1_46;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_3;
      MR_Word next_value_of_STATE_VARIABLE_QualInfo_0_5;
      MR_Word next_value_of_STATE_VARIABLE_ErrSpecs_0_7;
      MR_Word next_value_of_STATE_VARIABLE_WarnSpecs_0_9;

      hlds__status__item_mercury_status_to_pred_status_2_p_0(ItemMercuryStatus_31, &PredStatus_33);
      {
        Var_42 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_42, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_12[0]));
        MR_hl_field(0, Var_42, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__add_promises_10_p_0_1));
        MR_hl_field(0, Var_42, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_42, 3) = ((MR_Box) (ProgressStream_1));
        MR_hl_field(0, Var_42, 4) = ((MR_Box) (PredStatus_33));
      }
      mercury__list__foldl4_10_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[4]), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[5]), Var_42, Items_32, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_3)), &conv7_STATE_VARIABLE_ModuleInfo_1_43, ((MR_Box) (STATE_VARIABLE_QualInfo_0_5)), &conv6_STATE_VARIABLE_QualInfo_1_44, ((MR_Box) (STATE_VARIABLE_ErrSpecs_0_7)), &conv5_STATE_VARIABLE_ErrSpecs_1_45, ((MR_Box) (STATE_VARIABLE_WarnSpecs_0_9)), &conv4_STATE_VARIABLE_WarnSpecs_1_46);
      STATE_VARIABLE_ModuleInfo_1_43 = ((MR_Word) (conv7_STATE_VARIABLE_ModuleInfo_1_43));
      STATE_VARIABLE_QualInfo_1_44 = ((MR_Word) (conv6_STATE_VARIABLE_QualInfo_1_44));
      STATE_VARIABLE_ErrSpecs_1_45 = ((MR_Word) (conv5_STATE_VARIABLE_ErrSpecs_1_45));
      STATE_VARIABLE_WarnSpecs_1_46 = ((MR_Word) (conv4_STATE_VARIABLE_WarnSpecs_1_46));
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = ImsLists_26;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_3 = STATE_VARIABLE_ModuleInfo_1_43;
      next_value_of_STATE_VARIABLE_QualInfo_0_5 = STATE_VARIABLE_QualInfo_1_44;
      next_value_of_STATE_VARIABLE_ErrSpecs_0_7 = STATE_VARIABLE_ErrSpecs_1_45;
      next_value_of_STATE_VARIABLE_WarnSpecs_0_9 = STATE_VARIABLE_WarnSpecs_1_46;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_ModuleInfo_0_3 = next_value_of_STATE_VARIABLE_ModuleInfo_0_3;
      STATE_VARIABLE_QualInfo_0_5 = next_value_of_STATE_VARIABLE_QualInfo_0_5;
      STATE_VARIABLE_ErrSpecs_0_7 = next_value_of_STATE_VARIABLE_ErrSpecs_0_7;
      STATE_VARIABLE_WarnSpecs_0_9 = next_value_of_STATE_VARIABLE_WarnSpecs_0_9;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_clauses_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_HeadVar__6_6;
  MR_Word conv2_HeadVar__8_8;
  MR_Word conv1_HeadVar__10_10;
  MR_Word conv0_HeadVar__12_12;

  hlds__make_hlds__add_clause__module_add_clause_12_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_HeadVar__6_6, ((MR_Word) (wrapper_arg_4)), &conv2_HeadVar__8_8, ((MR_Word) (wrapper_arg_6)), &conv1_HeadVar__10_10, ((MR_Word) (wrapper_arg_8)), &conv0_HeadVar__12_12);
  *wrapper_arg_3 = ((MR_Box) (conv3_HeadVar__6_6));
  *wrapper_arg_5 = ((MR_Box) (conv2_HeadVar__8_8));
  *wrapper_arg_7 = ((MR_Box) (conv1_HeadVar__10_10));
  *wrapper_arg_9 = ((MR_Box) (conv0_HeadVar__12_12));
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_clauses_10_p_0(
  MR_Word ProgressStream_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ModuleInfo_0_3,
  MR_Word * STATE_VARIABLE_ModuleInfo_4,
  MR_Word STATE_VARIABLE_QualInfo_0_5,
  MR_Word * STATE_VARIABLE_QualInfo_6,
  MR_Word STATE_VARIABLE_ErrSpecs_0_7,
  MR_Word * STATE_VARIABLE_ErrSpecs_8,
  MR_Word STATE_VARIABLE_WarnSpecs_0_9,
  MR_Word * STATE_VARIABLE_WarnSpecs_10)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_WarnSpecs_10 = STATE_VARIABLE_WarnSpecs_0_9;
      *STATE_VARIABLE_ErrSpecs_8 = STATE_VARIABLE_ErrSpecs_0_7;
      *STATE_VARIABLE_QualInfo_6 = STATE_VARIABLE_QualInfo_0_5;
      *STATE_VARIABLE_ModuleInfo_4 = STATE_VARIABLE_ModuleInfo_0_3;
    }
    else
    {
      MR_Word ImsList_25 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word ImsLists_26 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word ItemMercuryStatus_31 = ((MR_Word) ((MR_hl_field(0, ImsList_25, 0))));
      MR_Word Items_32 = ((MR_Word) ((MR_hl_field(0, ImsList_25, 1))));
      MR_Word PredStatus_34;
      MR_Word Var_43;
      MR_Word STATE_VARIABLE_ModuleInfo_1_44;
      MR_Word STATE_VARIABLE_QualInfo_1_45;
      MR_Word STATE_VARIABLE_ErrSpecs_1_46;
      MR_Word STATE_VARIABLE_WarnSpecs_1_47;
      MR_Box conv7_STATE_VARIABLE_ModuleInfo_1_44;
      MR_Box conv6_STATE_VARIABLE_QualInfo_1_45;
      MR_Box conv5_STATE_VARIABLE_ErrSpecs_1_46;
      MR_Box conv4_STATE_VARIABLE_WarnSpecs_1_47;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_3;
      MR_Word next_value_of_STATE_VARIABLE_QualInfo_0_5;
      MR_Word next_value_of_STATE_VARIABLE_ErrSpecs_0_7;
      MR_Word next_value_of_STATE_VARIABLE_WarnSpecs_0_9;

      hlds__status__item_mercury_status_to_pred_status_2_p_0(ItemMercuryStatus_31, &PredStatus_34);
      {
        Var_43 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_43, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_11[0]));
        MR_hl_field(0, Var_43, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__add_clauses_10_p_0_1));
        MR_hl_field(0, Var_43, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(0, Var_43, 3) = ((MR_Box) (ProgressStream_1));
        MR_hl_field(0, Var_43, 4) = ((MR_Box) (PredStatus_34));
        MR_hl_field(0, Var_43, 5) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__list__foldl4_10_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[4]), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[5]), Var_43, Items_32, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_3)), &conv7_STATE_VARIABLE_ModuleInfo_1_44, ((MR_Box) (STATE_VARIABLE_QualInfo_0_5)), &conv6_STATE_VARIABLE_QualInfo_1_45, ((MR_Box) (STATE_VARIABLE_ErrSpecs_0_7)), &conv5_STATE_VARIABLE_ErrSpecs_1_46, ((MR_Box) (STATE_VARIABLE_WarnSpecs_0_9)), &conv4_STATE_VARIABLE_WarnSpecs_1_47);
      STATE_VARIABLE_ModuleInfo_1_44 = ((MR_Word) (conv7_STATE_VARIABLE_ModuleInfo_1_44));
      STATE_VARIABLE_QualInfo_1_45 = ((MR_Word) (conv6_STATE_VARIABLE_QualInfo_1_45));
      STATE_VARIABLE_ErrSpecs_1_46 = ((MR_Word) (conv5_STATE_VARIABLE_ErrSpecs_1_46));
      STATE_VARIABLE_WarnSpecs_1_47 = ((MR_Word) (conv4_STATE_VARIABLE_WarnSpecs_1_47));
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = ImsLists_26;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_3 = STATE_VARIABLE_ModuleInfo_1_44;
      next_value_of_STATE_VARIABLE_QualInfo_0_5 = STATE_VARIABLE_QualInfo_1_45;
      next_value_of_STATE_VARIABLE_ErrSpecs_0_7 = STATE_VARIABLE_ErrSpecs_1_46;
      next_value_of_STATE_VARIABLE_WarnSpecs_0_9 = STATE_VARIABLE_WarnSpecs_1_47;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_ModuleInfo_0_3 = next_value_of_STATE_VARIABLE_ModuleInfo_0_3;
      STATE_VARIABLE_QualInfo_0_5 = next_value_of_STATE_VARIABLE_QualInfo_0_5;
      STATE_VARIABLE_ErrSpecs_0_7 = next_value_of_STATE_VARIABLE_ErrSpecs_0_7;
      STATE_VARIABLE_WarnSpecs_0_9 = next_value_of_STATE_VARIABLE_WarnSpecs_0_9;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__maybe_add_default_modes_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ModuleInfo_31;

  hlds__make_hlds__make_hlds_passes__maybe_add_default_mode_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ModuleInfo_31);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_31));
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__maybe_add_default_modes_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ModuleInfo_0_2,
  MR_Word * STATE_VARIABLE_ModuleInfo_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ModuleInfo_3 = STATE_VARIABLE_ModuleInfo_0_2;
    else
    {
      MR_Word SecSubList_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word SecSubLists_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word Items_11 = ((MR_Word) ((MR_hl_field(0, SecSubList_7, 1))));
      MR_Word STATE_VARIABLE_ModuleInfo_1_15;
      MR_Box conv1_STATE_VARIABLE_ModuleInfo_1_15;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_2;

      mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_2[2]), Items_11, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_2)), &conv1_STATE_VARIABLE_ModuleInfo_1_15);
      STATE_VARIABLE_ModuleInfo_1_15 = ((MR_Word) (conv1_STATE_VARIABLE_ModuleInfo_1_15));
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = SecSubLists_8;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_2 = STATE_VARIABLE_ModuleInfo_1_15;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ModuleInfo_0_2 = next_value_of_STATE_VARIABLE_ModuleInfo_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_mode_decls_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__6_6;
  MR_Word conv1_HeadVar__8_8;
  MR_Word conv0_HeadVar__10_10;

  hlds__make_hlds__add_pred__module_add_mode_decl_10_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)), &conv2_HeadVar__6_6, ((MR_Word) (wrapper_arg_3)), &conv1_HeadVar__8_8, ((MR_Word) (wrapper_arg_5)), &conv0_HeadVar__10_10);
  *wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__6_6));
  *wrapper_arg_4 = ((MR_Box) (conv1_HeadVar__8_8));
  *wrapper_arg_6 = ((MR_Box) (conv0_HeadVar__10_10));
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_mode_decls_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ModuleInfo_0_2,
  MR_Word * STATE_VARIABLE_ModuleInfo_3,
  MR_Word STATE_VARIABLE_ErrSpecs_0_4,
  MR_Word * STATE_VARIABLE_ErrSpecs_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ErrSpecs_5 = STATE_VARIABLE_ErrSpecs_0_4;
      *STATE_VARIABLE_ModuleInfo_3 = STATE_VARIABLE_ModuleInfo_0_2;
    }
    else
    {
      MR_Word SecSubList_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word SecSubLists_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word ItemMercuryStatus_16 = ((MR_Word) ((MR_hl_field(0, SecSubList_12, 0))));
      MR_Word ModeDecls_17 = ((MR_Word) ((MR_hl_field(0, SecSubList_12, 1))));
      MR_Word PredStatus_18;
      MR_Word Var_24;
      MR_Word STATE_VARIABLE_ModuleInfo_1_25;
      MR_Word STATE_VARIABLE_ErrSpecs_1_26;
      MR_Word _PredProcIds_19;
      MR_Box conv4_STATE_VARIABLE_ModuleInfo_1_25;
      MR_Box conv3_STATE_VARIABLE_ErrSpecs_1_26;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_2;
      MR_Word next_value_of_STATE_VARIABLE_ErrSpecs_0_4;

      hlds__status__item_mercury_status_to_pred_status_2_p_0(ItemMercuryStatus_16, &PredStatus_18);
      {
        Var_24 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_24, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_10[0]));
        MR_hl_field(0, Var_24, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__add_mode_decls_5_p_0_1));
        MR_hl_field(0, Var_24, 2) = ((MR_Box) ((MR_Integer) 4));
        MR_hl_field(0, Var_24, 3) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(0, Var_24, 4) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(0, Var_24, 5) = ((MR_Box) (ItemMercuryStatus_16));
        MR_hl_field(0, Var_24, 6) = ((MR_Box) (PredStatus_18));
      }
      mercury__list__map_foldl2_7_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), (MR_Word) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[4]), Var_24, ModeDecls_17, &_PredProcIds_19, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_2)), &conv4_STATE_VARIABLE_ModuleInfo_1_25, ((MR_Box) (STATE_VARIABLE_ErrSpecs_0_4)), &conv3_STATE_VARIABLE_ErrSpecs_1_26);
      STATE_VARIABLE_ModuleInfo_1_25 = ((MR_Word) (conv4_STATE_VARIABLE_ModuleInfo_1_25));
      STATE_VARIABLE_ErrSpecs_1_26 = ((MR_Word) (conv3_STATE_VARIABLE_ErrSpecs_1_26));
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = SecSubLists_13;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_2 = STATE_VARIABLE_ModuleInfo_1_25;
      next_value_of_STATE_VARIABLE_ErrSpecs_0_4 = STATE_VARIABLE_ErrSpecs_1_26;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ModuleInfo_0_2 = next_value_of_STATE_VARIABLE_ModuleInfo_0_2;
      STATE_VARIABLE_ErrSpecs_0_4 = next_value_of_STATE_VARIABLE_ErrSpecs_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pred_decls_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__5_5;
  MR_Word conv1_HeadVar__7_7;
  MR_Word conv0_HeadVar__9_9;

  hlds__make_hlds__add_pred__module_add_pred_decl_9_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), &conv2_HeadVar__5_5, ((MR_Word) (wrapper_arg_3)), &conv1_HeadVar__7_7, ((MR_Word) (wrapper_arg_5)), &conv0_HeadVar__9_9);
  *wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__5_5));
  *wrapper_arg_4 = ((MR_Box) (conv1_HeadVar__7_7));
  *wrapper_arg_6 = ((MR_Box) (conv0_HeadVar__9_9));
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pred_decls_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ModuleInfo_0_2,
  MR_Word * STATE_VARIABLE_ModuleInfo_3,
  MR_Word STATE_VARIABLE_ErrSpecs_0_4,
  MR_Word * STATE_VARIABLE_ErrSpecs_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ErrSpecs_5 = STATE_VARIABLE_ErrSpecs_0_4;
      *STATE_VARIABLE_ModuleInfo_3 = STATE_VARIABLE_ModuleInfo_0_2;
    }
    else
    {
      MR_Word SecSubList_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word SecSubLists_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word SectionInfo_16 = ((MR_Word) ((MR_hl_field(0, SecSubList_12, 0))));
      MR_Word PredDecls_17 = ((MR_Word) ((MR_hl_field(0, SecSubList_12, 1))));
      MR_Word ItemMercuryStatus_18 = ((MR_Word) ((MR_hl_field(0, SectionInfo_16, 0))));
      MR_Word NeedQual_19 = ((MR_Unsigned) ((MR_hl_field(0, SectionInfo_16, 1))) & (MR_Integer) 1);
      MR_Word PredStatus_20;
      MR_Word Var_26;
      MR_Word STATE_VARIABLE_ModuleInfo_1_27;
      MR_Word STATE_VARIABLE_ErrSpecs_1_28;
      MR_Word _MaybePredProcIds_21;
      MR_Box conv4_STATE_VARIABLE_ModuleInfo_1_27;
      MR_Box conv3_STATE_VARIABLE_ErrSpecs_1_28;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_2;
      MR_Word next_value_of_STATE_VARIABLE_ErrSpecs_0_4;

      hlds__status__item_mercury_status_to_pred_status_2_p_0(ItemMercuryStatus_18, &PredStatus_20);
      {
        Var_26 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_26, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_9[0]));
        MR_hl_field(0, Var_26, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__add_pred_decls_5_p_0_1));
        MR_hl_field(0, Var_26, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(0, Var_26, 3) = ((MR_Box) (ItemMercuryStatus_18));
        MR_hl_field(0, Var_26, 4) = ((MR_Box) (PredStatus_20));
        MR_hl_field(0, Var_26, 5) = ((MR_Box) (NeedQual_19));
      }
      mercury__list__map_foldl2_7_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[15]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[4]), Var_26, PredDecls_17, &_MaybePredProcIds_21, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_2)), &conv4_STATE_VARIABLE_ModuleInfo_1_27, ((MR_Box) (STATE_VARIABLE_ErrSpecs_0_4)), &conv3_STATE_VARIABLE_ErrSpecs_1_28);
      STATE_VARIABLE_ModuleInfo_1_27 = ((MR_Word) (conv4_STATE_VARIABLE_ModuleInfo_1_27));
      STATE_VARIABLE_ErrSpecs_1_28 = ((MR_Word) (conv3_STATE_VARIABLE_ErrSpecs_1_28));
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = SecSubLists_13;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_2 = STATE_VARIABLE_ModuleInfo_1_27;
      next_value_of_STATE_VARIABLE_ErrSpecs_0_4 = STATE_VARIABLE_ErrSpecs_1_28;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ModuleInfo_0_2 = next_value_of_STATE_VARIABLE_ModuleInfo_0_2;
      STATE_VARIABLE_ErrSpecs_0_4 = next_value_of_STATE_VARIABLE_ErrSpecs_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_mode_defns_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__4_4;
  MR_Word conv0_HeadVar__6_6;

  hlds__make_hlds__add_mode__module_add_mode_defn_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_HeadVar__4_4, ((MR_Word) (wrapper_arg_4)), &conv0_HeadVar__6_6);
  *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__4_4));
  *wrapper_arg_5 = ((MR_Box) (conv0_HeadVar__6_6));
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_mode_defns_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ModuleInfo_0_2,
  MR_Word * STATE_VARIABLE_ModuleInfo_3,
  MR_Word STATE_VARIABLE_ErrSpecs_0_4,
  MR_Word * STATE_VARIABLE_ErrSpecs_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ErrSpecs_5 = STATE_VARIABLE_ErrSpecs_0_4;
      *STATE_VARIABLE_ModuleInfo_3 = STATE_VARIABLE_ModuleInfo_0_2;
    }
    else
    {
      MR_Word ImsSubList_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word ImsSubLists_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word ItemMercuryStatus_16 = ((MR_Word) ((MR_hl_field(0, ImsSubList_12, 0))));
      MR_Word ModeDefns_17 = ((MR_Word) ((MR_hl_field(0, ImsSubList_12, 1))));
      MR_Word ModeStatus_18;
      MR_Word Var_23;
      MR_Word STATE_VARIABLE_ModuleInfo_1_24;
      MR_Word STATE_VARIABLE_ErrSpecs_1_25;
      MR_Box conv3_STATE_VARIABLE_ModuleInfo_1_24;
      MR_Box conv2_STATE_VARIABLE_ErrSpecs_1_25;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_2;
      MR_Word next_value_of_STATE_VARIABLE_ErrSpecs_0_4;

      hlds__status__item_mercury_status_to_mode_status_2_p_0(ItemMercuryStatus_16, &ModeStatus_18);
      {
        Var_23 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_23, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_8[0]));
        MR_hl_field(0, Var_23, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__add_mode_defns_5_p_0_1));
        MR_hl_field(0, Var_23, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_23, 3) = ((MR_Box) (ModeStatus_18));
      }
      mercury__list__foldl2_6_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[13]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[4]), Var_23, ModeDefns_17, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_2)), &conv3_STATE_VARIABLE_ModuleInfo_1_24, ((MR_Box) (STATE_VARIABLE_ErrSpecs_0_4)), &conv2_STATE_VARIABLE_ErrSpecs_1_25);
      STATE_VARIABLE_ModuleInfo_1_24 = ((MR_Word) (conv3_STATE_VARIABLE_ModuleInfo_1_24));
      STATE_VARIABLE_ErrSpecs_1_25 = ((MR_Word) (conv2_STATE_VARIABLE_ErrSpecs_1_25));
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = ImsSubLists_13;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_2 = STATE_VARIABLE_ModuleInfo_1_24;
      next_value_of_STATE_VARIABLE_ErrSpecs_0_4 = STATE_VARIABLE_ErrSpecs_1_25;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ModuleInfo_0_2 = next_value_of_STATE_VARIABLE_ModuleInfo_0_2;
      STATE_VARIABLE_ErrSpecs_0_4 = next_value_of_STATE_VARIABLE_ErrSpecs_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_inst_defns_7_p_0_1(
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
  MR_Word conv2_HeadVar__4_4;
  MR_Word conv1_HeadVar__6_6;
  MR_Word conv0_HeadVar__8_8;

  hlds__make_hlds__add_mode__module_add_inst_defn_8_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_HeadVar__4_4, ((MR_Word) (wrapper_arg_4)), &conv1_HeadVar__6_6, ((MR_Word) (wrapper_arg_6)), &conv0_HeadVar__8_8);
  *wrapper_arg_3 = ((MR_Box) (conv2_HeadVar__4_4));
  *wrapper_arg_5 = ((MR_Box) (conv1_HeadVar__6_6));
  *wrapper_arg_7 = ((MR_Box) (conv0_HeadVar__8_8));
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_inst_defns_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ModuleInfo_0_2,
  MR_Word * STATE_VARIABLE_ModuleInfo_3,
  MR_Word STATE_VARIABLE_ErrSpecs_0_4,
  MR_Word * STATE_VARIABLE_ErrSpecs_5,
  MR_Word STATE_VARIABLE_WarnSpecs_0_6,
  MR_Word * STATE_VARIABLE_WarnSpecs_7)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_WarnSpecs_7 = STATE_VARIABLE_WarnSpecs_0_6;
      *STATE_VARIABLE_ErrSpecs_5 = STATE_VARIABLE_ErrSpecs_0_4;
      *STATE_VARIABLE_ModuleInfo_3 = STATE_VARIABLE_ModuleInfo_0_2;
    }
    else
    {
      MR_Word ImsSubList_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word ImsSubLists_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word ItemMercuryStatus_22 = ((MR_Word) ((MR_hl_field(0, ImsSubList_17, 0))));
      MR_Word InstDefns_23 = ((MR_Word) ((MR_hl_field(0, ImsSubList_17, 1))));
      MR_Word InstStatus_24;
      MR_Word Var_31;
      MR_Word STATE_VARIABLE_ModuleInfo_1_32;
      MR_Word STATE_VARIABLE_ErrSpecs_1_33;
      MR_Word STATE_VARIABLE_WarnSpecs_1_34;
      MR_Box conv5_STATE_VARIABLE_ModuleInfo_1_32;
      MR_Box conv4_STATE_VARIABLE_ErrSpecs_1_33;
      MR_Box conv3_STATE_VARIABLE_WarnSpecs_1_34;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_2;
      MR_Word next_value_of_STATE_VARIABLE_ErrSpecs_0_4;
      MR_Word next_value_of_STATE_VARIABLE_WarnSpecs_0_6;

      hlds__status__item_mercury_status_to_inst_status_2_p_0(ItemMercuryStatus_22, &InstStatus_24);
      {
        Var_31 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_31, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_7[0]));
        MR_hl_field(0, Var_31, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__add_inst_defns_7_p_0_1));
        MR_hl_field(0, Var_31, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_31, 3) = ((MR_Box) (InstStatus_24));
      }
      mercury__list__foldl3_8_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[12]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[4]), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[5]), Var_31, InstDefns_23, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_2)), &conv5_STATE_VARIABLE_ModuleInfo_1_32, ((MR_Box) (STATE_VARIABLE_ErrSpecs_0_4)), &conv4_STATE_VARIABLE_ErrSpecs_1_33, ((MR_Box) (STATE_VARIABLE_WarnSpecs_0_6)), &conv3_STATE_VARIABLE_WarnSpecs_1_34);
      STATE_VARIABLE_ModuleInfo_1_32 = ((MR_Word) (conv5_STATE_VARIABLE_ModuleInfo_1_32));
      STATE_VARIABLE_ErrSpecs_1_33 = ((MR_Word) (conv4_STATE_VARIABLE_ErrSpecs_1_33));
      STATE_VARIABLE_WarnSpecs_1_34 = ((MR_Word) (conv3_STATE_VARIABLE_WarnSpecs_1_34));
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = ImsSubLists_18;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_2 = STATE_VARIABLE_ModuleInfo_1_32;
      next_value_of_STATE_VARIABLE_ErrSpecs_0_4 = STATE_VARIABLE_ErrSpecs_1_33;
      next_value_of_STATE_VARIABLE_WarnSpecs_0_6 = STATE_VARIABLE_WarnSpecs_1_34;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ModuleInfo_0_2 = next_value_of_STATE_VARIABLE_ModuleInfo_0_2;
      STATE_VARIABLE_ErrSpecs_0_4 = next_value_of_STATE_VARIABLE_ErrSpecs_0_4;
      STATE_VARIABLE_WarnSpecs_0_6 = next_value_of_STATE_VARIABLE_WarnSpecs_0_6;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_type_defns_15_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9,
  MR_Box wrapper_arg_10,
  MR_Box * wrapper_arg_11,
  MR_Box wrapper_arg_12,
  MR_Box * wrapper_arg_13,
  MR_Box wrapper_arg_14,
  MR_Box * wrapper_arg_15)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_STATE_VARIABLE_ModuleInfo_56;
  MR_Word conv5_STATE_VARIABLE_PredDeclCord_58;
  MR_Word conv4_STATE_VARIABLE_ForeignProcCord_60;
  MR_Word conv3_STATE_VARIABLE_MutableCord_62;
  MR_Word conv2_STATE_VARIABLE_InvalidTypeSpecs_64;
  MR_Word conv1_STATE_VARIABLE_ErrSpecs_66;
  MR_Word conv0_STATE_VARIABLE_WarnSpecs_68;

  hlds__make_hlds__make_hlds_passes__add_type_defn_17_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_ModuleInfo_56, ((MR_Word) (wrapper_arg_4)), &conv5_STATE_VARIABLE_PredDeclCord_58, ((MR_Word) (wrapper_arg_6)), &conv4_STATE_VARIABLE_ForeignProcCord_60, ((MR_Word) (wrapper_arg_8)), &conv3_STATE_VARIABLE_MutableCord_62, ((MR_Word) (wrapper_arg_10)), &conv2_STATE_VARIABLE_InvalidTypeSpecs_64, ((MR_Word) (wrapper_arg_12)), &conv1_STATE_VARIABLE_ErrSpecs_66, ((MR_Word) (wrapper_arg_14)), &conv0_STATE_VARIABLE_WarnSpecs_68);
  *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_ModuleInfo_56));
  *wrapper_arg_5 = ((MR_Box) (conv5_STATE_VARIABLE_PredDeclCord_58));
  *wrapper_arg_7 = ((MR_Box) (conv4_STATE_VARIABLE_ForeignProcCord_60));
  *wrapper_arg_9 = ((MR_Box) (conv3_STATE_VARIABLE_MutableCord_62));
  *wrapper_arg_11 = ((MR_Box) (conv2_STATE_VARIABLE_InvalidTypeSpecs_64));
  *wrapper_arg_13 = ((MR_Box) (conv1_STATE_VARIABLE_ErrSpecs_66));
  *wrapper_arg_15 = ((MR_Box) (conv0_STATE_VARIABLE_WarnSpecs_68));
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_type_defns_15_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ModuleInfo_0_2,
  MR_Word * STATE_VARIABLE_ModuleInfo_3,
  MR_Word STATE_VARIABLE_PredDeclCord_0_4,
  MR_Word * STATE_VARIABLE_PredDeclCord_5,
  MR_Word STATE_VARIABLE_ForeignProcCord_0_6,
  MR_Word * STATE_VARIABLE_ForeignProcCord_7,
  MR_Word STATE_VARIABLE_MutableCord_0_8,
  MR_Word * STATE_VARIABLE_MutableCord_9,
  MR_Word STATE_VARIABLE_InvalidTypeSpecs_0_10,
  MR_Word * STATE_VARIABLE_InvalidTypeSpecs_11,
  MR_Word STATE_VARIABLE_ErrSpecs_0_12,
  MR_Word * STATE_VARIABLE_ErrSpecs_13,
  MR_Word STATE_VARIABLE_WarnSpecs_0_14,
  MR_Word * STATE_VARIABLE_WarnSpecs_15)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_WarnSpecs_15 = STATE_VARIABLE_WarnSpecs_0_14;
      *STATE_VARIABLE_ErrSpecs_13 = STATE_VARIABLE_ErrSpecs_0_12;
      *STATE_VARIABLE_InvalidTypeSpecs_11 = STATE_VARIABLE_InvalidTypeSpecs_0_10;
      *STATE_VARIABLE_MutableCord_9 = STATE_VARIABLE_MutableCord_0_8;
      *STATE_VARIABLE_ForeignProcCord_7 = STATE_VARIABLE_ForeignProcCord_0_6;
      *STATE_VARIABLE_PredDeclCord_5 = STATE_VARIABLE_PredDeclCord_0_4;
      *STATE_VARIABLE_ModuleInfo_3 = STATE_VARIABLE_ModuleInfo_0_2;
    }
    else
    {
      MR_Word SecList_37 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word SecLists_38 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word SectionInfo_46 = ((MR_Word) ((MR_hl_field(0, SecList_37, 0))));
      MR_Word TypeDefns_47 = ((MR_Word) ((MR_hl_field(0, SecList_37, 1))));
      MR_Word ItemMercuryStatus_48 = ((MR_Word) ((MR_hl_field(0, SectionInfo_46, 0))));
      MR_Word TypeStatus_50;
      MR_Word Var_65;
      MR_Word STATE_VARIABLE_ModuleInfo_1_66;
      MR_Word STATE_VARIABLE_PredDeclCord_1_67;
      MR_Word STATE_VARIABLE_ForeignProcCord_1_68;
      MR_Word STATE_VARIABLE_MutableCord_1_69;
      MR_Word STATE_VARIABLE_InvalidTypeSpecs_1_70;
      MR_Word STATE_VARIABLE_ErrSpecs_1_71;
      MR_Word STATE_VARIABLE_WarnSpecs_1_72;
      MR_Box conv13_STATE_VARIABLE_ModuleInfo_1_66;
      MR_Box conv12_STATE_VARIABLE_PredDeclCord_1_67;
      MR_Box conv11_STATE_VARIABLE_ForeignProcCord_1_68;
      MR_Box conv10_STATE_VARIABLE_MutableCord_1_69;
      MR_Box conv9_STATE_VARIABLE_InvalidTypeSpecs_1_70;
      MR_Box conv8_STATE_VARIABLE_ErrSpecs_1_71;
      MR_Box conv7_STATE_VARIABLE_WarnSpecs_1_72;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_2;
      MR_Word next_value_of_STATE_VARIABLE_PredDeclCord_0_4;
      MR_Word next_value_of_STATE_VARIABLE_ForeignProcCord_0_6;
      MR_Word next_value_of_STATE_VARIABLE_MutableCord_0_8;
      MR_Word next_value_of_STATE_VARIABLE_InvalidTypeSpecs_0_10;
      MR_Word next_value_of_STATE_VARIABLE_ErrSpecs_0_12;
      MR_Word next_value_of_STATE_VARIABLE_WarnSpecs_0_14;

      hlds__status__item_mercury_status_to_type_status_2_p_0(ItemMercuryStatus_48, &TypeStatus_50);
      {
        Var_65 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_65, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_6[0]));
        MR_hl_field(0, Var_65, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__add_type_defns_15_p_0_1));
        MR_hl_field(0, Var_65, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_65, 3) = ((MR_Box) (SectionInfo_46));
        MR_hl_field(0, Var_65, 4) = ((MR_Box) (TypeStatus_50));
      }
      mercury__list__foldl7_16_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[8]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[9]), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[10]), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[11]), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[4]), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[4]), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[5]), Var_65, TypeDefns_47, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_2)), &conv13_STATE_VARIABLE_ModuleInfo_1_66, ((MR_Box) (STATE_VARIABLE_PredDeclCord_0_4)), &conv12_STATE_VARIABLE_PredDeclCord_1_67, ((MR_Box) (STATE_VARIABLE_ForeignProcCord_0_6)), &conv11_STATE_VARIABLE_ForeignProcCord_1_68, ((MR_Box) (STATE_VARIABLE_MutableCord_0_8)), &conv10_STATE_VARIABLE_MutableCord_1_69, ((MR_Box) (STATE_VARIABLE_InvalidTypeSpecs_0_10)), &conv9_STATE_VARIABLE_InvalidTypeSpecs_1_70, ((MR_Box) (STATE_VARIABLE_ErrSpecs_0_12)), &conv8_STATE_VARIABLE_ErrSpecs_1_71, ((MR_Box) (STATE_VARIABLE_WarnSpecs_0_14)), &conv7_STATE_VARIABLE_WarnSpecs_1_72);
      STATE_VARIABLE_ModuleInfo_1_66 = ((MR_Word) (conv13_STATE_VARIABLE_ModuleInfo_1_66));
      STATE_VARIABLE_PredDeclCord_1_67 = ((MR_Word) (conv12_STATE_VARIABLE_PredDeclCord_1_67));
      STATE_VARIABLE_ForeignProcCord_1_68 = ((MR_Word) (conv11_STATE_VARIABLE_ForeignProcCord_1_68));
      STATE_VARIABLE_MutableCord_1_69 = ((MR_Word) (conv10_STATE_VARIABLE_MutableCord_1_69));
      STATE_VARIABLE_InvalidTypeSpecs_1_70 = ((MR_Word) (conv9_STATE_VARIABLE_InvalidTypeSpecs_1_70));
      STATE_VARIABLE_ErrSpecs_1_71 = ((MR_Word) (conv8_STATE_VARIABLE_ErrSpecs_1_71));
      STATE_VARIABLE_WarnSpecs_1_72 = ((MR_Word) (conv7_STATE_VARIABLE_WarnSpecs_1_72));
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = SecLists_38;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_2 = STATE_VARIABLE_ModuleInfo_1_66;
      next_value_of_STATE_VARIABLE_PredDeclCord_0_4 = STATE_VARIABLE_PredDeclCord_1_67;
      next_value_of_STATE_VARIABLE_ForeignProcCord_0_6 = STATE_VARIABLE_ForeignProcCord_1_68;
      next_value_of_STATE_VARIABLE_MutableCord_0_8 = STATE_VARIABLE_MutableCord_1_69;
      next_value_of_STATE_VARIABLE_InvalidTypeSpecs_0_10 = STATE_VARIABLE_InvalidTypeSpecs_1_70;
      next_value_of_STATE_VARIABLE_ErrSpecs_0_12 = STATE_VARIABLE_ErrSpecs_1_71;
      next_value_of_STATE_VARIABLE_WarnSpecs_0_14 = STATE_VARIABLE_WarnSpecs_1_72;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ModuleInfo_0_2 = next_value_of_STATE_VARIABLE_ModuleInfo_0_2;
      STATE_VARIABLE_PredDeclCord_0_4 = next_value_of_STATE_VARIABLE_PredDeclCord_0_4;
      STATE_VARIABLE_ForeignProcCord_0_6 = next_value_of_STATE_VARIABLE_ForeignProcCord_0_6;
      STATE_VARIABLE_MutableCord_0_8 = next_value_of_STATE_VARIABLE_MutableCord_0_8;
      STATE_VARIABLE_InvalidTypeSpecs_0_10 = next_value_of_STATE_VARIABLE_InvalidTypeSpecs_0_10;
      STATE_VARIABLE_ErrSpecs_0_12 = next_value_of_STATE_VARIABLE_ErrSpecs_0_12;
      STATE_VARIABLE_WarnSpecs_0_14 = next_value_of_STATE_VARIABLE_WarnSpecs_0_14;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_item_avails_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ModuleInfo_17;

  hlds__make_hlds__make_hlds_passes__add_item_avail_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ModuleInfo_17);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_17));
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_item_avails_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ModuleInfo_0_2,
  MR_Word * STATE_VARIABLE_ModuleInfo_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ModuleInfo_3 = STATE_VARIABLE_ModuleInfo_0_2;
    else
    {
      MR_Word ImsList_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word ImsLists_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word ItemMercuryStatus_10 = ((MR_Word) ((MR_hl_field(0, ImsList_7, 0))));
      MR_Word Avails_11 = ((MR_Word) ((MR_hl_field(0, ImsList_7, 1))));
      MR_Word Var_14;
      MR_Word STATE_VARIABLE_ModuleInfo_1_15;
      MR_Box conv1_STATE_VARIABLE_ModuleInfo_1_15;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_2;

      {
        Var_14 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_14, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_5[0]));
        MR_hl_field(0, Var_14, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__add_item_avails_3_p_0_1));
        MR_hl_field(0, Var_14, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_14, 3) = ((MR_Box) (ItemMercuryStatus_10));
      }
      mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), Var_14, Avails_11, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_2)), &conv1_STATE_VARIABLE_ModuleInfo_1_15);
      STATE_VARIABLE_ModuleInfo_1_15 = ((MR_Word) (conv1_STATE_VARIABLE_ModuleInfo_1_15));
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = ImsLists_8;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_2 = STATE_VARIABLE_ModuleInfo_1_15;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ModuleInfo_0_2 = next_value_of_STATE_VARIABLE_ModuleInfo_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__maybe_warn_include_and_non_include_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ContextSet_9;

  hlds__make_hlds__make_hlds_passes__acc_include_contexts_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ContextSet_9);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ContextSet_9));
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__maybe_warn_include_and_non_include_3_p_0(
  MR_Word Globals_4,
  MR_Word ParseTreeModuleSrc_5,
  MR_Word * Specs_6)
{
  MR_bool succeeded;
  MR_Word WarnIncludeAndNonInclude_7;
  MR_Word ModuleName_8;
  MR_Word InclMap_10;
  MR_Word ImportUseMap_11;
  MR_Word IntFIMs_12;
  MR_Word ImpFIMs_13;
  MR_Word IntSelfFIMLangs_14;
  MR_Word ImpSelfFIMLangs_15;
  MR_Word TypeDefnMap_16;
  MR_Word InstDefnMap_17;
  MR_Word ModeDefnMap_18;
  MR_Word IntTypeClasses_23;
  MR_Word IntInstances_24;
  MR_Word IntPredDecls_25;
  MR_Word IntModeDecls_26;
  MR_Word IntDeclPragmas_27;
  MR_Word IntDeclMarkers_28;
  MR_Word IntPromises_29;
  MR_Word IntBadClauses_30;
  MR_Word ImpTypeClasses_31;
  MR_Word ImpInstances_32;
  MR_Word ImpPredDecls_33;
  MR_Word ImpModeDecls_34;
  MR_Word ImpClauses_35;
  MR_Word ImpForeignProcs_36;
  MR_Word ImpFEEs_37;
  MR_Word ImpDeclPragmas_38;
  MR_Word ImpDeclMarkers_39;
  MR_Word ImpImplPragmas_40;
  MR_Word ImpImplMarkers_41;
  MR_Word ImpPromises_42;
  MR_Word ImpInitialises_43;
  MR_Word ImpFinalises_44;
  MR_Word ImpMutables_45;
  MR_Word TypeCtorInfo_167_167;
  MR_Word TypeCtorInfo_168_168;

  libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 219, &WarnIncludeAndNonInclude_7);
  ModuleName_8 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_5, 0))));
  InclMap_10 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_5, 2))));
  ImportUseMap_11 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_5, 3))));
  IntFIMs_12 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_5, 4))));
  ImpFIMs_13 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_5, 5))));
  IntSelfFIMLangs_14 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_5, 6))));
  ImpSelfFIMLangs_15 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_5, 7))));
  TypeDefnMap_16 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_5, 8))));
  InstDefnMap_17 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_5, 9))));
  ModeDefnMap_18 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_5, 10))));
  IntTypeClasses_23 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_5, 15))));
  IntInstances_24 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_5, 16))));
  IntPredDecls_25 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_5, 17))));
  IntModeDecls_26 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_5, 18))));
  IntDeclPragmas_27 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_5, 19))));
  IntDeclMarkers_28 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_5, 20))));
  IntPromises_29 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_5, 21))));
  IntBadClauses_30 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_5, 22))));
  ImpTypeClasses_31 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_5, 23))));
  ImpInstances_32 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_5, 24))));
  ImpPredDecls_33 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_5, 25))));
  ImpModeDecls_34 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_5, 26))));
  ImpClauses_35 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_5, 27))));
  ImpForeignProcs_36 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_5, 28))));
  ImpFEEs_37 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_5, 29))));
  ImpDeclPragmas_38 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_5, 30))));
  ImpDeclMarkers_39 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_5, 31))));
  ImpImplPragmas_40 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_5, 32))));
  ImpImplMarkers_41 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_5, 33))));
  ImpPromises_42 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_5, 34))));
  ImpInitialises_43 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_5, 35))));
  ImpFinalises_44 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_5, 36))));
  ImpMutables_45 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_5, 37))));
  succeeded = (WarnIncludeAndNonInclude_7 == (MR_Integer) 1);
  if (succeeded)
  {
    TypeCtorInfo_167_167 = (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0);
    TypeCtorInfo_168_168 = (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_include_module_info_0);
    succeeded = mercury__map__is_non_empty_1_p_0(TypeCtorInfo_167_167, TypeCtorInfo_168_168, InclMap_10);
    if (succeeded)
    {
      succeeded = mercury__map__is_non_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item_type__parse_tree__prog_item_type__type_ctor_info_type_ctor_checked_defn_0), TypeDefnMap_16);
      if (!(succeeded))
      {
        succeeded = mercury__map__is_non_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_inst_ctor_checked_defn_0), InstDefnMap_17);
        if (!(succeeded))
        {
          succeeded = mercury__map__is_non_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), (MR_Word) (&parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_mode_ctor_checked_defn_0), ModeDefnMap_18);
          if (!(succeeded))
          {
            succeeded = (IntTypeClasses_23 != (MR_Word) ((MR_Unsigned) 0U));
            if (!(succeeded))
            {
              succeeded = (IntInstances_24 != (MR_Word) ((MR_Unsigned) 0U));
              if (!(succeeded))
              {
                succeeded = (IntPredDecls_25 != (MR_Word) ((MR_Unsigned) 0U));
                if (!(succeeded))
                {
                  succeeded = (IntModeDecls_26 != (MR_Word) ((MR_Unsigned) 0U));
                  if (!(succeeded))
                  {
                    succeeded = (IntDeclPragmas_27 != (MR_Word) ((MR_Unsigned) 0U));
                    if (!(succeeded))
                    {
                      succeeded = (IntDeclMarkers_28 != (MR_Word) ((MR_Unsigned) 0U));
                      if (!(succeeded))
                      {
                        succeeded = (IntPromises_29 != (MR_Word) ((MR_Unsigned) 0U));
                        if (!(succeeded))
                        {
                          succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pf_sym_name_user_arity_0), IntBadClauses_30);
                          if (!(succeeded))
                          {
                            succeeded = (ImpTypeClasses_31 != (MR_Word) ((MR_Unsigned) 0U));
                            if (!(succeeded))
                            {
                              succeeded = (ImpInstances_32 != (MR_Word) ((MR_Unsigned) 0U));
                              if (!(succeeded))
                              {
                                succeeded = (ImpPredDecls_33 != (MR_Word) ((MR_Unsigned) 0U));
                                if (!(succeeded))
                                {
                                  succeeded = (ImpModeDecls_34 != (MR_Word) ((MR_Unsigned) 0U));
                                  if (!(succeeded))
                                  {
                                    succeeded = (ImpClauses_35 != (MR_Word) ((MR_Unsigned) 0U));
                                    if (!(succeeded))
                                    {
                                      succeeded = (ImpForeignProcs_36 != (MR_Word) ((MR_Unsigned) 0U));
                                      if (!(succeeded))
                                      {
                                        succeeded = (ImpFEEs_37 != (MR_Word) ((MR_Unsigned) 0U));
                                        if (!(succeeded))
                                        {
                                          succeeded = (ImpDeclPragmas_38 != (MR_Word) ((MR_Unsigned) 0U));
                                          if (!(succeeded))
                                          {
                                            succeeded = (ImpDeclMarkers_39 != (MR_Word) ((MR_Unsigned) 0U));
                                            if (!(succeeded))
                                            {
                                              succeeded = (ImpImplPragmas_40 != (MR_Word) ((MR_Unsigned) 0U));
                                              if (!(succeeded))
                                              {
                                                succeeded = (ImpImplMarkers_41 != (MR_Word) ((MR_Unsigned) 0U));
                                                if (!(succeeded))
                                                {
                                                  succeeded = (ImpPromises_42 != (MR_Word) ((MR_Unsigned) 0U));
                                                  if (!(succeeded))
                                                  {
                                                    succeeded = (ImpInitialises_43 != (MR_Word) ((MR_Unsigned) 0U));
                                                    if (!(succeeded))
                                                    {
                                                      succeeded = (ImpFinalises_44 != (MR_Word) ((MR_Unsigned) 0U));
                                                      if (!(succeeded))
                                                      {
                                                        succeeded = (ImpMutables_45 != (MR_Word) ((MR_Unsigned) 0U));
                                                        if (!(succeeded))
                                                        {
                                                          succeeded = mercury__map__is_non_empty_1_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), IntFIMs_12);
                                                          if (!(succeeded))
                                                          {
                                                            succeeded = mercury__map__is_non_empty_1_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), ImpFIMs_13);
                                                            if (!(succeeded))
                                                            {
                                                              succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), IntSelfFIMLangs_14);
                                                              if (!(succeeded))
                                                              {
                                                                succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ImpSelfFIMLangs_15);
                                                                if (!(succeeded))
                                                                {
                                                                  succeeded = hlds__make_hlds__make_hlds_passes__imports_only_implicit_builtins_1_p_0(ImportUseMap_11);
                                                                  succeeded = !(succeeded);
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
    MR_Word InclContextSet_90;
    MR_Word InclContexts_91;
    MR_Word Context_92;
    MR_Word Pieces_93;
    MR_Word Spec_95;
    MR_Word Var_98;
    MR_Word Var_103;
    MR_Word Var_104;
    MR_Word Var_105;
    MR_Word Var_108;
    MR_Word Var_109;
    MR_Word Var_111;
    MR_Word Var_116;
    MR_Word Var_117;
    MR_Word Var_122;
    MR_Word Var_123;
    MR_Word Var_131;
    MR_Word Var_136;
    MR_Word Var_137;
    MR_Box conv1_InclContextSet_90;
    MR_Box conv2_Context_92;

    Var_98 = mercury__set__init_0_f_0((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0));
    mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_include_module_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[7]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_2[1]), InclMap_10, ((MR_Box) (Var_98)), &conv1_InclContextSet_90);
    InclContextSet_90 = ((MR_Word) (conv1_InclContextSet_90));
    mercury__set__to_sorted_list_2_p_0((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), InclContextSet_90, &InclContexts_91);
    mercury__list__det_head_2_p_0((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), InclContexts_91, &conv2_Context_92);
    Context_92 = ((MR_Word) (conv2_Context_92));
    {
      Var_109 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_109, 0) = ((MR_Box) ((MR_Unsigned) 11U));
      MR_hl_field(3, Var_109, 1) = ((MR_Box) (ModuleName_8));
    }
    {
      Var_108 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_108, 0) = ((MR_Box) (Var_109));
      MR_hl_field(1, Var_108, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_105 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_105, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__make_hlds_passes_scalar_common_1[20])));
      MR_hl_field(1, Var_105, 1) = ((MR_Box) (Var_108));
    }
    Var_104 = parse_tree__error_spec__color_as_subject_1_f_0(Var_105);
    Var_117 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__make_hlds_passes_scalar_common_1[24])));
    Var_123 = parse_tree__error_spec__color_as_inconsistent_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__make_hlds_passes_scalar_common_1[28])));
    Var_137 = parse_tree__error_spec__color_as_inconsistent_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__make_hlds_passes_scalar_common_1[32])));
    Var_136 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_137, (MR_Word) (MR_mkword(1, &hlds__make_hlds__make_hlds_passes_scalar_common_1[45])));
    Var_131 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__make_hlds_passes_scalar_common_1[30])), Var_136);
    Var_122 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_123, Var_131);
    Var_116 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_117, Var_122);
    Var_111 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__make_hlds_passes_scalar_common_1[22])), Var_116);
    Var_103 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_104, Var_111);
    Pieces_93 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__make_hlds_passes_scalar_common_1[19])), Var_103);
    {
      Spec_95 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_95, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.make_hlds_passes.maybe_warn_include_and_non_include\'/3"));
      MR_hl_field(0, Spec_95, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__make_hlds_passes_scalar_common_3[0])));
      MR_hl_field(0, Spec_95, 2) = ((MR_Box) ((MR_Unsigned) 48U));
      MR_hl_field(0, Spec_95, 3) = ((MR_Box) (Context_92));
      MR_hl_field(0, Spec_95, 4) = ((MR_Box) (Pieces_93));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Specs_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_95));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  else
    *Specs_6 = (MR_Word) ((MR_Unsigned) 0U);
}

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__imports_only_implicit_builtins_1_p_0(
  MR_Word ImportUseMap_2)
{
  MR_bool succeeded;
  MR_Word ImportUseAL_3;

  mercury__map__to_sorted_assoc_list_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_maybe_implicit_import_and_or_use_0), ImportUseMap_2, &ImportUseAL_3);
  succeeded = hlds__make_hlds__make_hlds_passes__imports_only_implicit_builtins_test_all_1_p_0(ImportUseAL_3);
  return succeeded;
}

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__imports_only_implicit_builtins_test_all_1_p_0(
  MR_Word HeadVar__1_1)
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
      MR_Word Pair_2 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Pairs_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word MaybeImplicit_5 = ((MR_Word) ((MR_hl_field(0, Pair_2, 1))));
      MR_Word next_value_of_HeadVar__1_1;

      succeeded = ((MR_tag((MR_Word) MaybeImplicit_5)) == (MR_Integer) 1);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Pairs_3;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes____Unify____init_or_final_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__make_hlds_passes____Unify____init_or_final_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes____Compare____init_or_final_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__make_hlds_passes____Compare____init_or_final_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__hlds__make_hlds__make_hlds_passes__init(void)
{
}

void mercury__hlds__make_hlds__make_hlds_passes__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&hlds__make_hlds__make_hlds_passes__hlds__make_hlds__make_hlds_passes__type_ctor_info_init_or_final_0);
}

void mercury__hlds__make_hlds__make_hlds_passes__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__make_hlds__make_hlds_passes__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module hlds.make_hlds.make_hlds_passes.
