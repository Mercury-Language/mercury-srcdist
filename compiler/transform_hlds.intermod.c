/*
** Automatically generated from `intermod.m'
** by the Mercury compiler,
** version rotd-2017-10-15
** configured for x86_64-pc-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


// :- module transform_hlds.intermod.
// :- implementation.

/*
INIT mercury__transform_hlds__intermod__init
ENDINIT
*/

#include "transform_hlds.intermod.mih"


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
#include "check_hlds.mode_util.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
#include "hlds.goal_util.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_out.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
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
#include "std_util.mih"
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
#include "parse_tree.file_names.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_cmds.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_pragma.mih"
#include "parse_tree.parse_tree_out_pred_decl.mih"
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
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.inlining.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_constr_util.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_module.mih"
#include "hlds.hlds_out.hlds_out_pred.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



struct transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0_s {
  MR_bool transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__succeeded;
  MR_Word transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__PredInfo_9;
  MR_Word transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__ProcIds_11;
  jmp_buf transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__commit_0;
  MR_Word transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__TypeCtorInfo_42_42;
  MR_Word transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__TypeCtorInfo_43_43;
  MR_Word transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__TypeInfo_51_51;
  MR_Word transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__Procs_14;
  MR_Integer transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__ProcId_15;
  MR_Word transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__ProcInfo_16;
  MR_Word transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__Var_26;
  MR_Word transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__Var_46;
  MR_Box transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__conv0_ProcId_15;
};

struct transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0_s {
  MR_Word transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__PredId_10;
  MR_bool transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded;
  MR_Word transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__Clauses_46;
  jmp_buf transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__commit_0;
  MR_Word transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__Goal1_70;
  MR_Word transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__Clause1_79;
  MR_Box transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__conv1_Clause1_79;
};

struct transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0_s {
  MR_Word transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__HeadVar__1_1;
  MR_Word transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__HeadVar__2_2;
  MR_bool transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__succeeded;
  jmp_buf transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__commit_0;
  MR_Word transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__Goals_4;
  MR_Word transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__FoundBranch_8;
};


static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_data__type_ctor_info_hlds_instance_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_data__type_ctor_info_hlds_class_defn_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_instance_defn_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_instance_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__list__pti_list_1__plain_hlds__hlds_data__type_ctor_info_hlds_instance_defn_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_parse_tree__prog_data__type_ctor_info_instance_method_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__intermod__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__list__pti_list_1__plain_pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_foreign_arg_0;

static const MR_VA_PseudoTypeInfo_Struct1 transform_hlds__intermod____vpti_pred_1__plain_libs__lp_rational__type_ctor_info_constraint_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__term__ti_var_1term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__tree234__pti_tree234_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__term__pti_var_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_id_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__intermod__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_class_id_0hlds__hlds_data__type_ctor_info_hlds_instance_defn_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_class_id_0hlds__hlds_data__type_ctor_info_hlds_instance_defn_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__intermod__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

static const MR_PseudoTypeInfo transform_hlds__intermod__transform_hlds__intermod__field_types_intermod_info_0_0[7];

static const MR_ConstString transform_hlds__intermod__transform_hlds__intermod__field_names_intermod_info_0_0[7];

static const MR_DuFunctorDesc transform_hlds__intermod__transform_hlds__intermod__du_functor_desc_intermod_info_0_0;

static const MR_DuFunctorDescPtr transform_hlds__intermod__transform_hlds__intermod__du_stag_ordered_intermod_info_0_0[1];

static const MR_DuPtagLayout transform_hlds__intermod__transform_hlds__intermod__du_ptag_ordered_intermod_info_0[1];

static const MR_DuFunctorDescPtr transform_hlds__intermod__transform_hlds__intermod__du_name_ordered_intermod_info_0[1];

static const MR_Integer transform_hlds__intermod__transform_hlds__intermod__functor_number_map_intermod_info_0[1];

static const MR_EnumFunctorDesc transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_maybe_first_0_0;

static const MR_EnumFunctorDesc transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_maybe_first_0_1;

static const MR_EnumFunctorDescPtr transform_hlds__intermod__transform_hlds__intermod__enum_value_ordered_maybe_first_0[2];

static const MR_EnumFunctorDescPtr transform_hlds__intermod__transform_hlds__intermod__enum_name_ordered_maybe_first_0[2];

static const MR_Integer transform_hlds__intermod__transform_hlds__intermod__functor_number_map_maybe_first_0[2];

static const MR_EnumFunctorDesc transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_maybe_should_write_0_0;

static const MR_EnumFunctorDesc transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_maybe_should_write_0_1;

static const MR_EnumFunctorDescPtr transform_hlds__intermod__transform_hlds__intermod__enum_value_ordered_maybe_should_write_0[2];

static const MR_EnumFunctorDescPtr transform_hlds__intermod__transform_hlds__intermod__enum_name_ordered_maybe_should_write_0[2];

static const MR_Integer transform_hlds__intermod__transform_hlds__intermod__functor_number_map_maybe_should_write_0[2];

static const MR_PseudoTypeInfo transform_hlds__intermod__transform_hlds__intermod__field_types_order_pred_info_0_0[5];

static const MR_DuFunctorDesc transform_hlds__intermod__transform_hlds__intermod__du_functor_desc_order_pred_info_0_0;

static const MR_DuFunctorDescPtr transform_hlds__intermod__transform_hlds__intermod__du_stag_ordered_order_pred_info_0_0[1];

static const MR_DuPtagLayout transform_hlds__intermod__transform_hlds__intermod__du_ptag_ordered_order_pred_info_0[1];

static const MR_DuFunctorDescPtr transform_hlds__intermod__transform_hlds__intermod__du_name_ordered_order_pred_info_0[1];

static const MR_Integer transform_hlds__intermod__transform_hlds__intermod__functor_number_map_order_pred_info_0[1];

static const MR_EnumFunctorDesc transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_should_write_for_0_0;

static const MR_EnumFunctorDesc transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_should_write_for_0_1;

static const MR_EnumFunctorDescPtr transform_hlds__intermod__transform_hlds__intermod__enum_value_ordered_should_write_for_0[2];

static const MR_EnumFunctorDescPtr transform_hlds__intermod__transform_hlds__intermod__enum_name_ordered_should_write_for_0[2];

static const MR_Integer transform_hlds__intermod__transform_hlds__intermod__functor_number_map_should_write_for_0[2];

static MR_bool MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__adjust_status_of_special_preds__3352__1_4_p_0(
  MR_Word TypeCtor_4,
  MR_Word SpecPredMaps_8,
  MR_Word LambdaHeadVar__1_13,
  MR_Word * LambdaHeadVar__2_14);

static MR_String MR_CALL 
transform_hlds__intermod__IntroducedFrom__func__output_maybe_constr_arg_size_info__2839__1_2_f_0(
  MR_Word VarToVarIdMap_5,
  MR_Word LambdaHeadVar__1_20);

static MR_bool MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__output_maybe_constr_arg_size_info__2837__1_2_p_0(
  MR_Word HeadVar__1_19,
  MR_Word HeadVar__2_30);

static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__strip_headvar_unifications__2230__1_4_p_0(
  MR_Word Clause0_6,
  MR_Word HeadVarMap_15,
  MR_Word LambdaHeadVar__1_23,
  MR_Word * LambdaHeadVar__2_24);

static MR_bool MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__intermod_write_clause__2171__1_1_p_0(
  MR_Word LambdaHeadVar__1_65);

static MR_Word MR_CALL 
transform_hlds__intermod__IntroducedFrom__func__unmake_hlds_class_fundep_arg_posns__1810__1_2_f_0(
  MR_Word TVars_4,
  MR_Integer HeadVar__2_11);

static MR_Word MR_CALL 
transform_hlds__intermod__IntroducedFrom__func__find_func_matching_instance_method__1133__1_1_f_0(
  MR_Word LambdaHeadVar__1_54);

static MR_Word MR_CALL 
transform_hlds__intermod__IntroducedFrom__func__find_func_matching_instance_method__1120__1_1_f_0(
  MR_Word LambdaHeadVar__1_50);

static void MR_CALL 
transform_hlds__intermod____Compare____order_pred_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__intermod____Unify____order_pred_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__intermod____Compare____maybe_first_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__intermod____Unify____maybe_first_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__intermod____Compare____intermod_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__intermod____Unify____intermod_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_Box MR_CALL 
transform_hlds__intermod__maybe_opt_export_instance_defn_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__intermod__maybe_opt_export_instance_defn_4_p_0(
  MR_Word Instance0_5,
  MR_Word * Instance_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_22,
  MR_Word * STATE_VARIABLE_ModuleInfo_23);

static void MR_CALL 
transform_hlds__intermod__maybe_opt_export_class_instances_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__intermod__maybe_opt_export_class_instances_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_ModuleInfo_0_9,
  MR_Word * STATE_VARIABLE_ModuleInfo_10);

static MR_Box MR_CALL 
transform_hlds__intermod__maybe_opt_export_class_defn_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__intermod__maybe_opt_export_class_defn_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_ModuleInfo_0_11,
  MR_Word * STATE_VARIABLE_ModuleInfo_12);

static MR_bool MR_CALL 
transform_hlds__intermod__maybe_opt_export_type_defn_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__intermod__maybe_opt_export_type_defn_5_p_0(
  MR_Word TypeCtor_6,
  MR_Word TypeDefn0_7,
  MR_Word * TypeDefn_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_11,
  MR_Word * STATE_VARIABLE_ModuleInfo_12);

static void MR_CALL 
transform_hlds__intermod__write_pragma_unused_args_5_p_0(
  MR_Word UnusedArgInfo_6,
  MR_Word STATE_VARIABLE_First_0_9,
  MR_Word * STATE_VARIABLE_First_10);

static void MR_CALL 
transform_hlds__intermod__maybe_write_pragma_termination2_for_proc_7_p_0(
  MR_Word OrderPredInfo_8,
  MR_Integer _ProcId_9,
  MR_Word ProcInfo_10,
  MR_Word STATE_VARIABLE_First_0_33,
  MR_Word * STATE_VARIABLE_First_34);

static void MR_CALL 
transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_114_105_116_101_95_112_114_97_103_109_97_95_116_101_114_109_105_110_97_116_105_111_110_50_95_102_111_114_95_112_114_111_99_95_95_91_50_93_95_48_7_p_0(
  MR_Word OrderPredInfo_8,
  MR_Word ProcInfo_10,
  MR_Word STATE_VARIABLE_First_0_33,
  MR_Word * STATE_VARIABLE_First_34);

static MR_Box MR_CALL 
transform_hlds__intermod__output_maybe_constr_arg_size_info_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__intermod__output_maybe_constr_arg_size_info_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__intermod__output_maybe_constr_arg_size_info_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__intermod__output_maybe_constr_arg_size_info_4_p_0(
  MR_Word VarToVarIdMap_5,
  MR_Word MaybeArgSizeConstrs_6);

static void MR_CALL 
transform_hlds__intermod__write_pragma_termination2_for_pred_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
transform_hlds__intermod__write_pragma_termination2_for_pred_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word OrderPredInfo_8,
  MR_Word STATE_VARIABLE_First_0_23,
  MR_Word * STATE_VARIABLE_First_24);

static void MR_CALL 
transform_hlds__intermod__maybe_write_pragma_termination_for_proc_7_p_0(
  MR_Word OrderPredInfo_8,
  MR_Integer _ProcId_9,
  MR_Word ProcInfo_10,
  MR_Word STATE_VARIABLE_First_0_23,
  MR_Word * STATE_VARIABLE_First_24);

static void MR_CALL 
transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_114_105_116_101_95_112_114_97_103_109_97_95_116_101_114_109_105_110_97_116_105_111_110_95_102_111_114_95_112_114_111_99_95_95_91_50_93_95_48_7_p_0(
  MR_Word OrderPredInfo_8,
  MR_Word ProcInfo_10,
  MR_Word STATE_VARIABLE_First_0_23,
  MR_Word * STATE_VARIABLE_First_24);

static void MR_CALL 
transform_hlds__intermod__write_pragma_termination_for_pred_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
transform_hlds__intermod__write_pragma_termination_for_pred_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word OrderPredInfo_8,
  MR_Word STATE_VARIABLE_First_0_23,
  MR_Word * STATE_VARIABLE_First_24);

static void MR_CALL 
transform_hlds__intermod__maybe_write_pragma_structure_sharing_for_proc_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word OrderPredInfo_10,
  MR_Integer ProcId_11,
  MR_Word ProcInfo_12,
  MR_Word STATE_VARIABLE_First_0_35,
  MR_Word * STATE_VARIABLE_First_36);

static void MR_CALL 
transform_hlds__intermod__write_pragma_structure_sharing_for_pred_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
transform_hlds__intermod__write_pragma_structure_sharing_for_pred_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word OrderPredInfo_8,
  MR_Word STATE_VARIABLE_First_0_17,
  MR_Word * STATE_VARIABLE_First_18);

static void MR_CALL 
transform_hlds__intermod__maybe_write_pragma_structure_reuse_for_proc_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word OrderPredInfo_10,
  MR_Integer ProcId_11,
  MR_Word ProcInfo_12,
  MR_Word STATE_VARIABLE_First_0_35,
  MR_Word * STATE_VARIABLE_First_36);

static void MR_CALL 
transform_hlds__intermod__write_pragma_structure_reuse_for_pred_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
transform_hlds__intermod__write_pragma_structure_reuse_for_pred_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word OrderPredInfo_8,
  MR_Word STATE_VARIABLE_First_0_17,
  MR_Word * STATE_VARIABLE_First_18);

static void MR_CALL 
transform_hlds__intermod__maybe_write_pragma_mm_tabling_info_for_proc_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word OrderPredInfo_10,
  MR_Integer ProcId_11,
  MR_Word ProcInfo_12,
  MR_Word STATE_VARIABLE_First_0_30,
  MR_Word * STATE_VARIABLE_First_31);

static void MR_CALL 
transform_hlds__intermod__write_pragma_mm_tabling_info_for_pred_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
transform_hlds__intermod__write_pragma_mm_tabling_info_for_pred_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word OrderPredInfo_8,
  MR_Word STATE_VARIABLE_First_0_17,
  MR_Word * STATE_VARIABLE_First_18);

static void MR_CALL 
transform_hlds__intermod__maybe_write_pragma_trailing_info_for_proc_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word OrderPredInfo_10,
  MR_Integer ProcId_11,
  MR_Word ProcInfo_12,
  MR_Word STATE_VARIABLE_First_0_30,
  MR_Word * STATE_VARIABLE_First_31);

static void MR_CALL 
transform_hlds__intermod__write_pragma_trailing_info_for_pred_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
transform_hlds__intermod__write_pragma_trailing_info_for_pred_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word OrderPredInfo_8,
  MR_Word STATE_VARIABLE_First_0_17,
  MR_Word * STATE_VARIABLE_First_18);

static void MR_CALL 
transform_hlds__intermod__maybe_write_pragma_exceptions_for_proc_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word OrderPredInfo_10,
  MR_Integer ProcId_11,
  MR_Word ProcInfo_12,
  MR_Word STATE_VARIABLE_First_0_35,
  MR_Word * STATE_VARIABLE_First_36);

static void MR_CALL 
transform_hlds__intermod__write_pragma_exceptions_for_pred_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
transform_hlds__intermod__write_pragma_exceptions_for_pred_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word OrderPredInfo_8,
  MR_Word STATE_VARIABLE_First_0_17,
  MR_Word * STATE_VARIABLE_First_18);

static void MR_CALL 
transform_hlds__intermod__intermod_write_foreign_clause_10_p_0(
  MR_Word Procs_11,
  MR_Word PredOrFunc_12,
  MR_Word PragmaImpl_13,
  MR_Word Attributes_14,
  MR_Word Args_15,
  MR_Word ProgVarset0_16,
  MR_Word SymName_17,
  MR_Integer ProcId_18);

static void MR_CALL 
transform_hlds__intermod__get_pragma_foreign_code_vars_5_p_0(
  MR_Word Args_6,
  MR_Word Modes_7,
  MR_Word STATE_VARIABLE_VarSet_0_26,
  MR_Word * STATE_VARIABLE_VarSet_27,
  MR_Word * PragmaVars_9);

static void MR_CALL 
transform_hlds__intermod__intermod_write_clause_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__intermod__intermod_write_clause_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__intermod__intermod_write_clause_11_p_0(
  MR_Word OutInfo_12,
  MR_Word ModuleInfo_13,
  MR_Word PredId_14,
  MR_Word SymName_15,
  MR_Word PredOrFunc_16,
  MR_Word VarSet_17,
  MR_Word TypeQual_18,
  MR_Word HeadVars_19,
  MR_Word Clause0_20);

static void MR_CALL 
transform_hlds__intermod__strip_headvar_unifications_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__intermod__strip_headvar_unifications_4_p_0(
  MR_Word HeadVars_5,
  MR_Word Clause0_6,
  MR_Word * HeadTerms_7,
  MR_Word * Clause_8);

static MR_bool MR_CALL 
transform_hlds__intermod__strip_headvar_unifications_from_goal_list_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVars_2,
  MR_Word HeadVar__3_3,
  MR_Word * Goals_4,
  MR_Word STATE_VARIABLE_HeadVarMap_0_5,
  MR_Word * STATE_VARIABLE_HeadVarMap_6);

static void MR_CALL 
transform_hlds__intermod__intermod_write_foreign_import_3_p_0(
  MR_Word ForeignImport_4);

static void MR_CALL 
transform_hlds__intermod__intermod_write_instance_4_p_0(
  MR_Word OutInfo_5,
  MR_Word HeadVar__2_2);

static MR_Box MR_CALL 
transform_hlds__intermod__unmake_hlds_class_fundep_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
transform_hlds__intermod__unmake_hlds_class_fundep_2_f_0(
  MR_Word TVars_4,
  MR_Word HLDSFunDep_5);

static MR_Box MR_CALL 
transform_hlds__intermod__intermod_write_class_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__intermod__intermod_write_class_8_p_0(
  MR_Word OutInfo_9,
  MR_Word ModuleName_10,
  MR_Word ClassId_11,
  MR_Word ClassDefn_12,
  MR_Word STATE_VARIABLE_First_0_32,
  MR_Word * STATE_VARIABLE_First_33);

static void MR_CALL 
transform_hlds__intermod__intermod_write_mode_8_p_0(
  MR_Word OutInfo_9,
  MR_Word ModuleName_10,
  MR_Word ModeId_11,
  MR_Word ModeDefn_12,
  MR_Word STATE_VARIABLE_First_0_26,
  MR_Word * STATE_VARIABLE_First_27);

static void MR_CALL 
transform_hlds__intermod__intermod_write_inst_8_p_0(
  MR_Word OutInfo_9,
  MR_Word ModuleName_10,
  MR_Word InstId_11,
  MR_Word InstDefn_12,
  MR_Word STATE_VARIABLE_First_0_32,
  MR_Word * STATE_VARIABLE_First_33);

static void MR_CALL 
transform_hlds__intermod__gather_foreign_enum_value_pair_4_p_0(
  MR_Word ConsId_5,
  MR_Word ConsTag_6,
  MR_Word STATE_VARIABLE_Values_0_14,
  MR_Word * STATE_VARIABLE_Values_15);

static void MR_CALL 
transform_hlds__intermod__intermod_write_type_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__intermod__intermod_write_type_4_p_0(
  MR_Word OutInfo_5,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__intermod__intermod_write_use_module_3_p_0(
  MR_Word ModuleName_4);

static void MR_CALL 
transform_hlds__intermod__gather_opt_export_types_in_type_defn_4_p_0(
  MR_Word TypeCtor_5,
  MR_Word TypeDefn0_6,
  MR_Word STATE_VARIABLE_IntermodInfo_0_32,
  MR_Word * STATE_VARIABLE_IntermodInfo_33);

static void MR_CALL 
transform_hlds__intermod__intermod_info_set_types_3_p_0(
  MR_Word Types_4,
  MR_Word STATE_VARIABLE_IntermodInfo_0_6,
  MR_Word * STATE_VARIABLE_IntermodInfo_7);

static void MR_CALL 
transform_hlds__intermod__intermod_info_get_types_2_p_0(
  MR_Word IntermodInfo_3,
  MR_Word * X_4);

static void MR_CALL 
transform_hlds__intermod__resolve_unify_compare_overloading_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word TypeCtor_8,
  MR_Word MaybeUnifyCompare0_9,
  MR_Word * MaybeUnifyCompare_10,
  MR_Word STATE_VARIABLE_IntermodInfo_0_17,
  MR_Word * STATE_VARIABLE_IntermodInfo_18);

static void MR_CALL 
transform_hlds__intermod__resolve_foreign_type_body_overloading_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word TypeCtor_8,
  MR_Word ForeignTypeBody0_9,
  MR_Word * ForeignTypeBody_10,
  MR_Word STATE_VARIABLE_IntermodInfo_0_22,
  MR_Word * STATE_VARIABLE_IntermodInfo_23);

static void MR_CALL 
transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_115_111_108_118_101_95_102_111_114_101_105_103_110_95_116_121_112_101_95_98_111_100_121_95_111_118_101_114_108_111_97_100_105_110_103_95_50_95_95_91_49_93_95_48_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word TypeCtor_8,
  MR_Word MaybeForeignTypeLangData0_9,
  MR_Word * MaybeForeignTypeLangData_10,
  MR_Word STATE_VARIABLE_IntermodInfo_0_16,
  MR_Word * STATE_VARIABLE_IntermodInfo_17);

static void MR_CALL 
transform_hlds__intermod__resolve_user_special_pred_overloading_7_p_0(
  MR_Word ModuleInfo_1,
  MR_Word SpecialId_2,
  MR_Word TypeCtor_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_IntermodInfo_0_6,
  MR_Word * STATE_VARIABLE_IntermodInfo_7);

static void MR_CALL 
transform_hlds__intermod__qualify_instance_method_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word HeadVar__2_2,
  MR_Word * InstanceMethod_9,
  MR_Word PredIds0_10,
  MR_Word * PredIds_11);

static MR_Box MR_CALL 
transform_hlds__intermod__find_func_matching_instance_method_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
transform_hlds__intermod__find_func_matching_instance_method_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__intermod__find_func_matching_instance_method_10_p_0(
  MR_Word ModuleInfo_11,
  MR_Word InstanceMethodName0_12,
  MR_Integer MethodArity_13,
  MR_Word MethodCallTVarSet_14,
  MR_Word MethodCallExistQTVars_15,
  MR_Word MethodCallArgTypes_16,
  MR_Word MethodCallExternalTypeParams_17,
  MR_Word MethodContext_18,
  MR_Word * MaybePredId_19,
  MR_Word * InstanceMethodName_20);

static void MR_CALL 
transform_hlds__intermod__gather_opt_export_instance_in_instance_defn_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__intermod__gather_opt_export_instance_in_instance_defn_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_Box MR_CALL 
transform_hlds__intermod__gather_opt_export_instance_in_instance_defn_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__intermod__gather_opt_export_instance_in_instance_defn_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word ClassId_7,
  MR_Word InstanceDefn_8,
  MR_Word STATE_VARIABLE_IntermodInfo_0_35,
  MR_Word * STATE_VARIABLE_IntermodInfo_36);

static void MR_CALL 
transform_hlds__intermod__gather_opt_export_instances_in_class_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__intermod__gather_opt_export_instances_in_class_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word ClassId_7,
  MR_Word InstanceDefns_8,
  MR_Word STATE_VARIABLE_IntermodInfo_0_10,
  MR_Word * STATE_VARIABLE_IntermodInfo_11);

static MR_bool MR_CALL 
transform_hlds__intermod__proc_has_a_higher_order_input_arg_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word ProcInfo_4);

static MR_bool MR_CALL 
transform_hlds__intermod__some_input_arg_is_higher_order_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word VarTypes_6,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4);

static MR_bool MR_CALL 
transform_hlds__intermod__proc_eval_method_is_normal_1_p_0(
  MR_Word ProcInfo_2);

static void MR_CALL 
transform_hlds__intermod__maybe_opt_export_entities_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__intermod__maybe_opt_export_entities_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__intermod__write_trans_opt_file_3_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__intermod__write_trans_opt_file_3_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__intermod__write_trans_opt_file_3_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__intermod__write_trans_opt_file_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__intermod__write_trans_opt_file_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__intermod__write_trans_opt_file_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__intermod__write_trans_opt_file_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__intermod__append_analysis_pragmas_to_opt_file_4_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__intermod__append_analysis_pragmas_to_opt_file_4_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__intermod__append_analysis_pragmas_to_opt_file_4_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__intermod__append_analysis_pragmas_to_opt_file_4_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__intermod__append_analysis_pragmas_to_opt_file_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__intermod__append_analysis_pragmas_to_opt_file_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__intermod__append_analysis_pragmas_to_opt_file_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__intermod__append_analysis_pragmas_to_opt_file_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__intermod__write_initial_opt_file_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_111_112_116_95_101_120_112_111_114_116_95_112_114_101_100_115_95_102_105_120_112_111_105_110_116_95_95_91_50_93_95_48_7_p_0(
  MR_Word ExtraExportedPreds0_8,
  MR_Integer InlineThreshold_10,
  MR_Integer HigherOrderSizeLimit_11,
  MR_Word Deforestation_12,
  MR_Word STATE_VARIABLE_IntermodInfo_0_19,
  MR_Word * STATE_VARIABLE_IntermodInfo_20);

static void MR_CALL 
transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_111_112_116_95_101_120_112_111_114_116_95_112_114_101_100_115_95_105_110_95_108_105_115_116_95_95_91_51_93_95_48_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ProcessLocalPreds_2,
  MR_Integer InlineThreshold_4,
  MR_Integer HigherOrderSizeLimit_5,
  MR_Word Deforestation_6,
  MR_Word STATE_VARIABLE_IntermodInfo_0_7,
  MR_Word * STATE_VARIABLE_IntermodInfo_8);

static void MR_CALL 
transform_hlds__intermod__intermod_info_set_module_info_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word STATE_VARIABLE_IntermodInfo_0_6,
  MR_Word * STATE_VARIABLE_IntermodInfo_7);

static void MR_CALL 
transform_hlds__intermod__intermod_info_set_preds_3_p_0(
  MR_Word Procs_4,
  MR_Word STATE_VARIABLE_IntermodInfo_0_6,
  MR_Word * STATE_VARIABLE_IntermodInfo_7);

static void MR_CALL 
transform_hlds__intermod__gather_entities_to_opt_export_in_clauses_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_IntermodInfo_0_4,
  MR_Word * STATE_VARIABLE_IntermodInfo_5);

static void MR_CALL 
transform_hlds__intermod__module_qualify_unify_rhs_5_p_0(
  MR_Word RHS0_6,
  MR_Word * RHS_7,
  MR_Word * DoWrite_8,
  MR_Word STATE_VARIABLE_IntermodInfo_0_28,
  MR_Word * STATE_VARIABLE_IntermodInfo_29);

static void MR_CALL 
transform_hlds__intermod__gather_entities_to_opt_export_in_cases_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_IntermodInfo_0_4,
  MR_Word * STATE_VARIABLE_IntermodInfo_5);

static void MR_CALL 
transform_hlds__intermod__gather_entities_to_opt_export_in_goals_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_IntermodInfo_0_4,
  MR_Word * STATE_VARIABLE_IntermodInfo_5);

static void MR_CALL 
transform_hlds__intermod__gather_entities_to_opt_export_in_goal_expr_5_p_0(
  MR_Word GoalExpr0_6,
  MR_Word * GoalExpr_7,
  MR_Word * DoWrite_8,
  MR_Word STATE_VARIABLE_IntermodInfo_0_84,
  MR_Word * STATE_VARIABLE_IntermodInfo_85);

static void MR_CALL 
transform_hlds__intermod__gather_entities_to_opt_export_in_goal_5_p_0(
  MR_Word Goal0_6,
  MR_Word * Goal_7,
  MR_Word * DoWrite_8,
  MR_Word STATE_VARIABLE_IntermodInfo_0_13,
  MR_Word * STATE_VARIABLE_IntermodInfo_14);

static void MR_CALL 
transform_hlds__intermod__intermod_add_proc_4_p_0(
  MR_Word PredId_5,
  MR_Word * DoWrite_6,
  MR_Word STATE_VARIABLE_IntermodInfo_0_8,
  MR_Word * STATE_VARIABLE_IntermodInfo_9);

static void MR_CALL 
transform_hlds__intermod__intermod_do_add_proc_4_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__intermod__intermod_do_add_proc_4_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__intermod__intermod_do_add_proc_4_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__intermod__intermod_do_add_proc_4_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__intermod__intermod_do_add_proc_4_p_0(
  MR_Word PredId_5,
  MR_Word * DoWrite_6,
  MR_Word STATE_VARIABLE_IntermodInfo_0_24,
  MR_Word * STATE_VARIABLE_IntermodInfo_25);

static void MR_CALL 
transform_hlds__intermod__intermod_info_set_modules_3_p_0(
  MR_Word Modules_4,
  MR_Word STATE_VARIABLE_IntermodInfo_0_6,
  MR_Word * STATE_VARIABLE_IntermodInfo_7);

static MR_bool MR_CALL 
transform_hlds__intermod__should_opt_export_pred_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__intermod__should_opt_export_pred_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__intermod__should_opt_export_pred_8_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__intermod__should_opt_export_pred_8_p_0_5(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__intermod__should_opt_export_pred_8_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__intermod__should_opt_export_pred_8_p_0_6(
  void * env_ptr_arg);

static MR_bool MR_CALL 
transform_hlds__intermod__should_opt_export_pred_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word PredId_10,
  MR_Word PredInfo_11,
  MR_Word ProcessLocalPreds_12,
  MR_Word TypeSpecForcePreds_13,
  MR_Integer InlineThreshold_14,
  MR_Integer HigherOrderSizeLimit_15,
  MR_Word Deforestation_16);

static void MR_CALL 
transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_3(
  void * env_ptr_arg);

static MR_bool MR_CALL 
transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__intermod__do_maybe_opt_export_entities_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__intermod__do_maybe_opt_export_entities_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__intermod__do_maybe_opt_export_entities_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__intermod__do_maybe_opt_export_entities_3_p_0(
  MR_Word IntermodeInfo_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * STATE_VARIABLE_ModuleInfo_9);

static void MR_CALL 
transform_hlds__intermod__opt_export_preds_in_pred_table_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Preds_0_2,
  MR_Word * STATE_VARIABLE_Preds_3);

static void MR_CALL 
transform_hlds__intermod__intermod_info_get_module_info_2_p_0(
  MR_Word IntermodInfo_3,
  MR_Word * X_4);

static void MR_CALL 
transform_hlds__intermod__write_intermod_info_3_p_0(
  MR_Word IntermodInfo_4);

static void MR_CALL 
transform_hlds__intermod__write_intermod_info_body_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__intermod__write_intermod_info_body_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__intermod__write_intermod_info_body_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__intermod__write_intermod_info_body_3_p_0(
  MR_Word IntermodInfo_4);

static void MR_CALL 
transform_hlds__intermod__intermod_write_preds_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__intermod__intermod_write_preds_5_p_0(
  MR_Word OutInfo_1,
  MR_Word ModuleInfo_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
transform_hlds__intermod__intermod_write_pred_decls_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__intermod__intermod_write_pred_decls_4_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__intermod__intermod_write_pred_marker_pragmas_6_p_0(
  MR_Word PredOrFunc_1,
  MR_Word PredSymName_2,
  MR_Integer PredArity_3,
  MR_Word HeadVar__4_4);

static void MR_CALL 
transform_hlds__intermod__intermod_write_pred_valid_modes_5_p_0(
  MR_Word PredOrFunc_1,
  MR_Word PredSymName_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
transform_hlds__intermod__generate_order_pred_infos_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word PredIds_5,
  MR_Word * SortedOrderPredInfos_6);

static void MR_CALL 
transform_hlds__intermod__generate_order_pred_infos_acc_4_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_OrderPredInfos_0_3,
  MR_Word * STATE_VARIABLE_OrderPredInfos_4);

static void MR_CALL 
transform_hlds__intermod__intermod_write_instances_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__intermod__intermod_write_instances_4_p_0(
  MR_Word OutInfo_5,
  MR_Word Instances_6);

static void MR_CALL 
transform_hlds__intermod__intermod_write_classes_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
transform_hlds__intermod__intermod_write_classes_4_p_0(
  MR_Word OutInfo_5,
  MR_Word ModuleInfo_6);

static void MR_CALL 
transform_hlds__intermod__intermod_write_modes_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
transform_hlds__intermod__intermod_write_modes_4_p_0(
  MR_Word OutInfo_5,
  MR_Word ModuleInfo_6);

static void MR_CALL 
transform_hlds__intermod__intermod_write_insts_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
transform_hlds__intermod__intermod_write_insts_4_p_0(
  MR_Word OutInfo_5,
  MR_Word ModuleInfo_6);

static void MR_CALL 
transform_hlds__intermod__some_type_needs_to_be_written_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
transform_hlds__intermod__gather_opt_export_types_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__intermod__gather_opt_export_types_2_p_0(
  MR_Word STATE_VARIABLE_IntermodInfo_0_6,
  MR_Word * STATE_VARIABLE_IntermodInfo_7);

static MR_bool MR_CALL 
transform_hlds__intermod____Unify____intermod_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__intermod____Compare____intermod_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__intermod____Unify____maybe_first_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__intermod____Compare____maybe_first_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__intermod____Unify____maybe_should_write_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__intermod____Compare____maybe_should_write_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__intermod____Unify____order_pred_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__intermod____Compare____order_pred_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__intermod____Unify____should_write_for_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__intermod____Compare____should_write_for_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__intermod_scalar_common_1[17][2];

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_2[25][3];

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_3[10][7];

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_4[4][11];

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_5[6][8];

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_6[6][5];

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_7[1][14];

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_8[5][6];

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_9[1][1];

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_10[4][4];

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_11[1][9];

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_12[1][13];

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_13[1][10];




static /* final */ const MR_Box transform_hlds__intermod_scalar_common_1[17][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_instance_defn_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__intermod_scalar_common_2[2]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row 11 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__intermod_scalar_common_2[3]))
  },
  /* row 12 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__intermod_scalar_common_2[1]))
  },
  /* row 13 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0))
  },
  /* row 14 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_marker_0))
  },
  /* row 15 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_2[25][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_instance_defn_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_defn_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&transform_hlds__intermod_scalar_common_1[0]))
  },
  /* row 6 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_3[0])),
    ((MR_Box) (transform_hlds__intermod__gather_opt_export_types_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_8[0])),
    ((MR_Box) (transform_hlds__intermod__write_intermod_info_body_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_8[1])),
    ((MR_Box) (transform_hlds__intermod__write_intermod_info_body_3_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_5[1])),
    ((MR_Box) (transform_hlds__intermod__do_maybe_opt_export_entities_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_3[3])),
    ((MR_Box) (transform_hlds__intermod__do_maybe_opt_export_entities_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_3[4])),
    ((MR_Box) (transform_hlds__intermod__do_maybe_opt_export_entities_3_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_10[0])),
    ((MR_Box) (transform_hlds__intermod__should_opt_export_pred_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_5[3])),
    ((MR_Box) (transform_hlds__intermod__append_analysis_pragmas_to_opt_file_4_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_3[0])),
    ((MR_Box) (transform_hlds__intermod__maybe_opt_export_entities_2_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_6[2])),
    ((MR_Box) (transform_hlds__intermod__gather_opt_export_instance_in_instance_defn_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_3[5])),
    ((MR_Box) (transform_hlds__intermod__gather_opt_export_instance_in_instance_defn_5_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_6[3])),
    ((MR_Box) (transform_hlds__intermod__find_func_matching_instance_method_10_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 18 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_6[4])),
    ((MR_Box) (transform_hlds__intermod__find_func_matching_instance_method_10_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 19 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_3[6])),
    ((MR_Box) (transform_hlds__intermod__intermod_write_type_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 20 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_10[1])),
    ((MR_Box) (transform_hlds__intermod__intermod_write_clause_11_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 21 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_10[2])),
    ((MR_Box) (transform_hlds__intermod__output_maybe_constr_arg_size_info_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 22 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_6[2])),
    ((MR_Box) (transform_hlds__intermod__maybe_opt_export_class_defn_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 23 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_3[9])),
    ((MR_Box) (transform_hlds__intermod__maybe_opt_export_class_instances_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 24 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_6[2])),
    ((MR_Box) (transform_hlds__intermod__maybe_opt_export_instance_defn_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_3[10][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_intermod_info_0)),
    ((MR_Box) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_intermod_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__type_ctor_info_hlds_out_info_0)),
    ((MR_Box) (&transform_hlds__intermod__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_data__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__type_ctor_info_hlds_out_info_0)),
    ((MR_Box) (&transform_hlds__intermod__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__intermod__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_data__type_ctor_info_hlds_class_defn_0)),
    ((MR_Box) (&transform_hlds__intermod__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_data__type_ctor_info_hlds_class_defn_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__intermod__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&transform_hlds__intermod__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_intermod_info_0)),
    ((MR_Box) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_intermod_info_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0)),
    ((MR_Box) (&transform_hlds__intermod__list__pti_list_1__plain_pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__intermod__list__pti_list_1__plain_pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0)),
    ((MR_Box) (&transform_hlds__intermod__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__intermod__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__intermod__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__special_pred__hlds__special_pred__type_ctor_info_special_pred_maps_0)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_special_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row 9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_4[4][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__type_ctor_info_hlds_out_info_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_inst_defn_0)),
    ((MR_Box) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0)),
    ((MR_Box) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__type_ctor_info_hlds_out_info_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_id_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_mode_defn_0)),
    ((MR_Box) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0)),
    ((MR_Box) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__type_ctor_info_hlds_out_info_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_defn_0)),
    ((MR_Box) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0)),
    ((MR_Box) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_order_pred_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0)),
    ((MR_Box) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_5[6][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_type_spec_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&transform_hlds__intermod__list__pti_list_1__plain_hlds__hlds_data__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_intermod_info_0)),
    ((MR_Box) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_intermod_info_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_unused_args_0)),
    ((MR_Box) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0)),
    ((MR_Box) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_intermod_info_0)),
    ((MR_Box) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_intermod_info_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__intermod__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_parse_tree__prog_data__type_ctor_info_instance_method_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0)),
    ((MR_Box) (&transform_hlds__intermod__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&transform_hlds__intermod__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
};

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_6[6][5] = {
  /* row 0 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_5[0])),
    ((MR_Box) (transform_hlds__intermod__intermod_write_pred_decls_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_cons_defn_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__intermod____vpti_pred_1__plain_libs__lp_rational__type_ctor_info_constraint_0)),
    ((MR_Box) (&libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0))
  },
};

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_7[1][14] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 11)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__type_ctor_info_hlds_out_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0)),
    ((MR_Box) (&transform_hlds__intermod__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__vartypes__hlds__vartypes__type_ctor_info_maybe_vartypes_0)),
    ((MR_Box) (&transform_hlds__intermod__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_8[5][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_import_module_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__intermod__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_fundep_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_fundep_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__intermod__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__intermod__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__intermod__tree234__pti_tree234_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__intermod__term__pti_var_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_9[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))))
  },
};

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_10[4][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_6[5])),
    ((MR_Box) (transform_hlds__intermod__output_maybe_constr_arg_size_info_4_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&transform_hlds__intermod_scalar_common_2[21]))
  },
};

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_11[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_order_pred_info_0)),
    ((MR_Box) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0)),
    ((MR_Box) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_12[1][13] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 10)),
    ((MR_Box) (&transform_hlds__intermod__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_pragma_foreign_proc_impl_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_pragma_foreign_proc_attributes_0)),
    ((MR_Box) (&transform_hlds__intermod__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&transform_hlds__intermod__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_13[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_order_pred_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0)),
    ((MR_Box) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_data__type_ctor_info_hlds_instance_defn_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_instance_defn_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__intermod__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_data__type_ctor_info_hlds_type_defn_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_data__type_ctor_info_hlds_class_defn_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_defn_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_instance_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_instance_defn_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_instance_defn_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__intermod__list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_instance_defn_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__list__pti_list_1__plain_hlds__hlds_data__type_ctor_info_hlds_instance_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_instance_defn_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_parse_tree__prog_data__type_ctor_info_instance_method_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__intermod__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__list__pti_list_1__plain_pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__intermod__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__intermod__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__intermod__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &transform_hlds__intermod__term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_foreign_arg_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0
  }
};

static const MR_VA_PseudoTypeInfo_Struct1 transform_hlds__intermod____vpti_pred_1__plain_libs__lp_rational__type_ctor_info_constraint_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 1,
  {
    (MR_PseudoTypeInfo) &libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__tree234__pti_tree234_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__intermod__term__ti_var_1term__type_ctor_info_generic_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__term__pti_var_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__intermod__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_class_id_0hlds__hlds_data__type_ctor_info_hlds_instance_defn_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0,
    (MR_TypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_instance_defn_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_class_id_0hlds__hlds_data__type_ctor_info_hlds_instance_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__intermod__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_class_id_0hlds__hlds_data__type_ctor_info_hlds_instance_defn_0
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__intermod__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_TypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__intermod__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0
  }
};

static const MR_PseudoTypeInfo transform_hlds__intermod__transform_hlds__intermod__field_types_intermod_info_0_0[7] = {
  (MR_PseudoTypeInfo) &transform_hlds__intermod__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &transform_hlds__intermod__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &transform_hlds__intermod__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &transform_hlds__intermod__list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_class_id_0hlds__hlds_data__type_ctor_info_hlds_instance_defn_0,
  (MR_PseudoTypeInfo) &transform_hlds__intermod__list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0,
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

static const MR_ConstString transform_hlds__intermod__transform_hlds__intermod__field_names_intermod_info_0_0[7] = {
  (MR_String) "im_modules",
  (MR_String) "im_preds",
  (MR_String) "im_pred_decls",
  (MR_String) "im_instances",
  (MR_String) "im_types",
  (MR_String) "im_module_info",
  (MR_String) "im_write_foreign_header"
};

static const MR_DuFunctorDesc transform_hlds__intermod__transform_hlds__intermod__du_functor_desc_intermod_info_0_0 = {
  (MR_String) "intermod_info",
  (MR_Integer) 7,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__intermod__transform_hlds__intermod__field_types_intermod_info_0_0,
  transform_hlds__intermod__transform_hlds__intermod__field_names_intermod_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr transform_hlds__intermod__transform_hlds__intermod__du_stag_ordered_intermod_info_0_0[1] = {
  &transform_hlds__intermod__transform_hlds__intermod__du_functor_desc_intermod_info_0_0
};

static const MR_DuPtagLayout transform_hlds__intermod__transform_hlds__intermod__du_ptag_ordered_intermod_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    transform_hlds__intermod__transform_hlds__intermod__du_stag_ordered_intermod_info_0_0
  }
};

static const MR_DuFunctorDescPtr transform_hlds__intermod__transform_hlds__intermod__du_name_ordered_intermod_info_0[1] = {
  &transform_hlds__intermod__transform_hlds__intermod__du_functor_desc_intermod_info_0_0
};

static const MR_Integer transform_hlds__intermod__transform_hlds__intermod__functor_number_map_intermod_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_intermod_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__intermod____Unify____intermod_info_0_0_10001)),
  ((MR_Box) (transform_hlds__intermod____Compare____intermod_info_0_0_10001)),
  (MR_String) "transform_hlds.intermod",
  (MR_String) "intermod_info",
  {     transform_hlds__intermod__transform_hlds__intermod__du_name_ordered_intermod_info_0 },
  {     transform_hlds__intermod__transform_hlds__intermod__du_ptag_ordered_intermod_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__intermod__transform_hlds__intermod__functor_number_map_intermod_info_0
};

static const MR_EnumFunctorDesc transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_maybe_first_0_0 = {
  (MR_String) "is_not_first",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_maybe_first_0_1 = {
  (MR_String) "is_first",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr transform_hlds__intermod__transform_hlds__intermod__enum_value_ordered_maybe_first_0[2] = {
  &transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_maybe_first_0_0,
  &transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_maybe_first_0_1
};

static const MR_EnumFunctorDescPtr transform_hlds__intermod__transform_hlds__intermod__enum_name_ordered_maybe_first_0[2] = {
  &transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_maybe_first_0_1,
  &transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_maybe_first_0_0
};

static const MR_Integer transform_hlds__intermod__transform_hlds__intermod__functor_number_map_maybe_first_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__intermod____Unify____maybe_first_0_0_10001)),
  ((MR_Box) (transform_hlds__intermod____Compare____maybe_first_0_0_10001)),
  (MR_String) "transform_hlds.intermod",
  (MR_String) "maybe_first",
  {     transform_hlds__intermod__transform_hlds__intermod__enum_name_ordered_maybe_first_0 },
  {     transform_hlds__intermod__transform_hlds__intermod__enum_value_ordered_maybe_first_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  transform_hlds__intermod__transform_hlds__intermod__functor_number_map_maybe_first_0
};

static const MR_EnumFunctorDesc transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_maybe_should_write_0_0 = {
  (MR_String) "should_not_write",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_maybe_should_write_0_1 = {
  (MR_String) "should_write",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr transform_hlds__intermod__transform_hlds__intermod__enum_value_ordered_maybe_should_write_0[2] = {
  &transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_maybe_should_write_0_0,
  &transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_maybe_should_write_0_1
};

static const MR_EnumFunctorDescPtr transform_hlds__intermod__transform_hlds__intermod__enum_name_ordered_maybe_should_write_0[2] = {
  &transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_maybe_should_write_0_0,
  &transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_maybe_should_write_0_1
};

static const MR_Integer transform_hlds__intermod__transform_hlds__intermod__functor_number_map_maybe_should_write_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_should_write_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__intermod____Unify____maybe_should_write_0_0_10001)),
  ((MR_Box) (transform_hlds__intermod____Compare____maybe_should_write_0_0_10001)),
  (MR_String) "transform_hlds.intermod",
  (MR_String) "maybe_should_write",
  {     transform_hlds__intermod__transform_hlds__intermod__enum_name_ordered_maybe_should_write_0 },
  {     transform_hlds__intermod__transform_hlds__intermod__enum_value_ordered_maybe_should_write_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  transform_hlds__intermod__transform_hlds__intermod__functor_number_map_maybe_should_write_0
};

static const MR_PseudoTypeInfo transform_hlds__intermod__transform_hlds__intermod__field_types_order_pred_info_0_0[5] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0
};

static const MR_DuFunctorDesc transform_hlds__intermod__transform_hlds__intermod__du_functor_desc_order_pred_info_0_0 = {
  (MR_String) "order_pred_info",
  (MR_Integer) 5,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__intermod__transform_hlds__intermod__field_types_order_pred_info_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr transform_hlds__intermod__transform_hlds__intermod__du_stag_ordered_order_pred_info_0_0[1] = {
  &transform_hlds__intermod__transform_hlds__intermod__du_functor_desc_order_pred_info_0_0
};

static const MR_DuPtagLayout transform_hlds__intermod__transform_hlds__intermod__du_ptag_ordered_order_pred_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    transform_hlds__intermod__transform_hlds__intermod__du_stag_ordered_order_pred_info_0_0
  }
};

static const MR_DuFunctorDescPtr transform_hlds__intermod__transform_hlds__intermod__du_name_ordered_order_pred_info_0[1] = {
  &transform_hlds__intermod__transform_hlds__intermod__du_functor_desc_order_pred_info_0_0
};

static const MR_Integer transform_hlds__intermod__transform_hlds__intermod__functor_number_map_order_pred_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_order_pred_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__intermod____Unify____order_pred_info_0_0_10001)),
  ((MR_Box) (transform_hlds__intermod____Compare____order_pred_info_0_0_10001)),
  (MR_String) "transform_hlds.intermod",
  (MR_String) "order_pred_info",
  {     transform_hlds__intermod__transform_hlds__intermod__du_name_ordered_order_pred_info_0 },
  {     transform_hlds__intermod__transform_hlds__intermod__du_ptag_ordered_order_pred_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__intermod__transform_hlds__intermod__functor_number_map_order_pred_info_0
};

static const MR_EnumFunctorDesc transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_should_write_for_0_0 = {
  (MR_String) "for_analysis_framework",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_should_write_for_0_1 = {
  (MR_String) "for_pragma",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr transform_hlds__intermod__transform_hlds__intermod__enum_value_ordered_should_write_for_0[2] = {
  &transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_should_write_for_0_0,
  &transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_should_write_for_0_1
};

static const MR_EnumFunctorDescPtr transform_hlds__intermod__transform_hlds__intermod__enum_name_ordered_should_write_for_0[2] = {
  &transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_should_write_for_0_0,
  &transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_should_write_for_0_1
};

static const MR_Integer transform_hlds__intermod__transform_hlds__intermod__functor_number_map_should_write_for_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_should_write_for_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__intermod____Unify____should_write_for_0_0_10001)),
  ((MR_Box) (transform_hlds__intermod____Compare____should_write_for_0_0_10001)),
  (MR_String) "transform_hlds.intermod",
  (MR_String) "should_write_for",
  {     transform_hlds__intermod__transform_hlds__intermod__enum_name_ordered_should_write_for_0 },
  {     transform_hlds__intermod__transform_hlds__intermod__enum_value_ordered_should_write_for_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  transform_hlds__intermod__transform_hlds__intermod__functor_number_map_should_write_for_0
};

static MR_bool MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__adjust_status_of_special_preds__3352__1_4_p_0(
  MR_Word TypeCtor_4,
  MR_Word SpecPredMaps_8,
  MR_Word LambdaHeadVar__1_13,
  MR_Word * LambdaHeadVar__2_14)
{
  {
    MR_bool succeeded;

    succeeded = hlds__special_pred__search_special_pred_maps_4_p_0(SpecPredMaps_8, LambdaHeadVar__1_13, TypeCtor_4, LambdaHeadVar__2_14);
    return succeeded;
  }
}

static MR_String MR_CALL 
transform_hlds__intermod__IntroducedFrom__func__output_maybe_constr_arg_size_info__2839__1_2_f_0(
  MR_Word VarToVarIdMap_5,
  MR_Word LambdaHeadVar__1_20)
{
  {
    MR_String LambdaHeadVar__2_21;
    MR_Integer Var_22;
    MR_Box conv0_Var_22;

    conv0_Var_22 = mercury__map__det_elem_2_f_0((MR_Word) &transform_hlds__intermod_scalar_common_1[8], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (LambdaHeadVar__1_20)), VarToVarIdMap_5);
    Var_22 = ((MR_Integer) conv0_Var_22);
    LambdaHeadVar__2_21 = mercury__string__int_to_string_1_f_0(Var_22);
    return LambdaHeadVar__2_21;
  }
}

static MR_bool MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__output_maybe_constr_arg_size_info__2837__1_2_p_0(
  MR_Word HeadVar__1_19,
  MR_Word HeadVar__2_30)
{
  {
    MR_bool succeeded;

    succeeded = mercury__std_util__isnt_2_p_0((MR_Word) &libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0, HeadVar__1_19, ((MR_Box) (HeadVar__2_30)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__strip_headvar_unifications__2230__1_4_p_0(
  MR_Word Clause0_6,
  MR_Word HeadVarMap_15,
  MR_Word LambdaHeadVar__1_23,
  MR_Word * LambdaHeadVar__2_24)
{
  {
    MR_bool succeeded;
    MR_Word HeadTerm0_18;
    MR_Box conv0_HeadTerm0_18;

    succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__intermod_scalar_common_1[5], (MR_Word) &transform_hlds__intermod_scalar_common_1[6], HeadVarMap_15, ((MR_Box) (LambdaHeadVar__1_23)), &conv0_HeadTerm0_18);
    if (succeeded)
    {
      HeadTerm0_18 = ((MR_Word) conv0_HeadTerm0_18);
      succeeded = MR_TRUE;
    }
    if (succeeded)
      *LambdaHeadVar__2_24 = HeadTerm0_18;
    else
    {
      MR_Word Context_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Clause0_6, (MR_Integer) 3)));
      MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), Clause0_6, (MR_Integer) 0)));
      MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), Clause0_6, (MR_Integer) 1)));
      MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), Clause0_6, (MR_Integer) 2)));
      MR_Word Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), Clause0_6, (MR_Integer) 4)));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *LambdaHeadVar__2_24 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (LambdaHeadVar__1_23));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Context_19));
      }
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__intermod_write_clause__2171__1_1_p_0(
  MR_Word LambdaHeadVar__1_65)
{
  {
    MR_bool succeeded;
    MR_Word GE_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_65, (MR_Integer) 0)));
    MR_Word Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_65, (MR_Integer) 1)));
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Integer Var_39;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;

    succeeded = ((((MR_tag((MR_Word) GE_35)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), GE_35, (MR_Integer) 0)))) == (MR_Integer) 1)));
    if (succeeded)
    {
      Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), GE_35, (MR_Integer) 1)));
      Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), GE_35, (MR_Integer) 2)));
      Var_39 = ((MR_Integer) (MR_hl_field(MR_mktag(3), GE_35, (MR_Integer) 3)));
      Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), GE_35, (MR_Integer) 4)));
      Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), GE_35, (MR_Integer) 5)));
      Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), GE_35, (MR_Integer) 6)));
      Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), GE_35, (MR_Integer) 7)));
    }
    return succeeded;
  }
}

static MR_Word MR_CALL 
transform_hlds__intermod__IntroducedFrom__func__unmake_hlds_class_fundep_arg_posns__1810__1_2_f_0(
  MR_Word TVars_4,
  MR_Integer HeadVar__2_11)
{
  {
    MR_Word HeadVar__3_12;
    MR_Box conv0_HeadVar__3_12;

    conv0_HeadVar__3_12 = mercury__list__det_index1_2_f_0((MR_Word) &transform_hlds__intermod_scalar_common_1[4], TVars_4, HeadVar__2_11);
    HeadVar__3_12 = ((MR_Word) conv0_HeadVar__3_12);
    return HeadVar__3_12;
  }
}

static MR_Word MR_CALL 
transform_hlds__intermod__IntroducedFrom__func__find_func_matching_instance_method__1133__1_1_f_0(
  MR_Word LambdaHeadVar__1_54)
{
  {
    MR_Word LambdaHeadVar__2_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_54, (MR_Integer) 0)));
    MR_Word Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_54, (MR_Integer) 1)));
    MR_Word Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_54, (MR_Integer) 2)));
    MR_Word Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_54, (MR_Integer) 3)));
    MR_Word Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_54, (MR_Integer) 4)));
    MR_Word Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_54, (MR_Integer) 5)));
    MR_Word Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_54, (MR_Integer) 6)));
    MR_Word Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_54, (MR_Integer) 7)));

    return LambdaHeadVar__2_55;
  }
}

static MR_Word MR_CALL 
transform_hlds__intermod__IntroducedFrom__func__find_func_matching_instance_method__1120__1_1_f_0(
  MR_Word LambdaHeadVar__1_50)
{
  {
    MR_Word LambdaHeadVar__2_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_50, (MR_Integer) 2)));
    MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_50, (MR_Integer) 0)));
    MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_50, (MR_Integer) 1)));
    MR_Word Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_50, (MR_Integer) 3)));
    MR_Integer Var_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_50, (MR_Integer) 4)));

    return LambdaHeadVar__2_51;
  }
}

void MR_CALL 
transform_hlds__intermod____Compare____should_write_for_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
transform_hlds__intermod____Unify____should_write_for_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__intermod____Compare____order_pred_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_18 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_19 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_18 == CastY_19);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_String ArgX1_4 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_String ArgY1_5 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Integer ArgX2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Integer ArgY2_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
      MR_Word ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3)));
      MR_Word ArgX5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));
      MR_Word ArgY5_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4)));
      MR_Word Var_14;

      mercury__private_builtin__builtin_compare_string_3_p_0(&Var_14, ArgX1_4, ArgY1_5);
      succeeded = (Var_14 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_14;
      else
      {
        MR_Word Var_15;

        mercury__private_builtin__builtin_compare_int_3_p_0(&Var_15, ArgX2_6, ArgY2_7);
        succeeded = (Var_15 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_15;
        else
        {
          MR_Word Var_16;
          MR_Integer Var_25 = (MR_Integer) ArgX3_8;
          MR_Integer Var_26 = (MR_Integer) ArgY3_9;

          mercury__private_builtin__builtin_compare_int_3_p_0(&Var_16, Var_25, Var_26);
          succeeded = (Var_16 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_16;
          else
          {
            MR_Word Var_17;

            hlds__hlds_pred____Compare____pred_id_0_0(&Var_17, ArgX4_10, ArgY4_11);
            succeeded = (Var_17 == (MR_Integer) 0);
            succeeded = !(succeeded);
            if (succeeded)
              *HeadVar__1_1 = Var_17;
            else
              hlds__hlds_pred____Compare____pred_info_0_0(HeadVar__1_1, ArgX5_12, ArgY5_13);
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__intermod____Unify____order_pred_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_13 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_14 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_13 == CastY_14);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_String ArgX1_3 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_String ArgY1_4 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Integer ArgX2_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Integer ArgY2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Word ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)));
      MR_Word ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ArgX5_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4)));
      MR_Word ArgY5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));

      succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
      if (succeeded)
      {
        succeeded = (ArgX2_5 == ArgY2_6);
        if (succeeded)
        {
          succeeded = (ArgX3_7 == ArgY3_8);
          if (succeeded)
          {
            succeeded = hlds__hlds_pred____Unify____pred_id_0_0(ArgX4_9, ArgY4_10);
            if (succeeded)
              succeeded = hlds__hlds_pred____Unify____pred_info_0_0(ArgX5_11, ArgY5_12);
          }
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
transform_hlds__intermod____Compare____maybe_should_write_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
transform_hlds__intermod____Unify____maybe_should_write_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__intermod____Compare____maybe_first_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
transform_hlds__intermod____Unify____maybe_first_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__intermod____Compare____intermod_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_24 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_25 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_24 == CastY_25);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
      MR_Word ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3)));
      MR_Word ArgX5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));
      MR_Word ArgY5_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4)));
      MR_Word ArgX6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5)));
      MR_Word ArgY6_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5)));
      MR_Word ArgX7_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6)));
      MR_Word ArgY7_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6)));
      MR_Word Var_18;

      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__intermod_scalar_common_1[9], &Var_18, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (Var_18 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_18;
      else
      {
        MR_Word Var_19;

        mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__intermod_scalar_common_1[10], &Var_19, ((MR_Box) (ArgX2_6)), ((MR_Box) (ArgY2_7)));
        succeeded = (Var_19 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_19;
        else
        {
          MR_Word Var_20;

          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__intermod_scalar_common_1[10], &Var_20, ((MR_Box) (ArgX3_8)), ((MR_Box) (ArgY3_9)));
          succeeded = (Var_20 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_20;
          else
          {
            MR_Word Var_21;

            mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__intermod_scalar_common_1[11], &Var_21, ((MR_Box) (ArgX4_10)), ((MR_Box) (ArgY4_11)));
            succeeded = (Var_21 == (MR_Integer) 0);
            succeeded = !(succeeded);
            if (succeeded)
              *HeadVar__1_1 = Var_21;
            else
            {
              MR_Word Var_22;

              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__intermod_scalar_common_1[12], &Var_22, ((MR_Box) (ArgX5_12)), ((MR_Box) (ArgY5_13)));
              succeeded = (Var_22 == (MR_Integer) 0);
              succeeded = !(succeeded);
              if (succeeded)
                *HeadVar__1_1 = Var_22;
              else
              {
                MR_Word Var_23;

                hlds__hlds_module____Compare____module_info_0_0(&Var_23, ArgX6_14, ArgY6_15);
                succeeded = (Var_23 == (MR_Integer) 0);
                succeeded = !(succeeded);
                if (succeeded)
                  *HeadVar__1_1 = Var_23;
                else
                {
                  MR_Integer Var_33 = (MR_Integer) ArgX7_16;
                  MR_Integer Var_34 = (MR_Integer) ArgY7_17;

                  mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Var_33, Var_34);
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
transform_hlds__intermod____Unify____intermod_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_17 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_18 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_17 == CastY_18);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_20_20;
      MR_Word TypeInfo_21_21;
      MR_Word TypeInfo_22_22;
      MR_Word TypeInfo_23_23;
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Word ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)));
      MR_Word ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ArgX5_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4)));
      MR_Word ArgY5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));
      MR_Word ArgX6_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5)));
      MR_Word ArgY6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5)));
      MR_Word ArgX7_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6)));
      MR_Word ArgY7_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6)));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__intermod_scalar_common_1[9], ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_20_20 = (MR_Word) &transform_hlds__intermod_scalar_common_1[10];
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_20_20, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          TypeInfo_21_21 = (MR_Word) &transform_hlds__intermod_scalar_common_1[10];
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_21_21, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
          if (succeeded)
          {
            TypeInfo_22_22 = (MR_Word) &transform_hlds__intermod_scalar_common_1[11];
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_22_22, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
            if (succeeded)
            {
              TypeInfo_23_23 = (MR_Word) &transform_hlds__intermod_scalar_common_1[12];
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_23_23, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
              if (succeeded)
              {
                succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX6_13, ArgY6_14);
                if (succeeded)
                  succeeded = (ArgX7_15 == ArgY7_16);
              }
            }
          }
        }
      }
    }
    return succeeded;
  }
}

static MR_Box MR_CALL 
transform_hlds__intermod__maybe_opt_export_instance_defn_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = hlds__hlds_pred__pred_proc_id_project_pred_id_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
transform_hlds__intermod__maybe_opt_export_instance_defn_4_p_0(
  MR_Word Instance0_5,
  MR_Word * Instance_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_22,
  MR_Word * STATE_VARIABLE_ModuleInfo_23)
{
  {
    MR_Word InstanceModule_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Instance0_5, (MR_Integer) 0)));
    MR_Word Types_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Instance0_5, (MR_Integer) 1)));
    MR_Word OriginalTypes_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Instance0_5, (MR_Integer) 2)));
    MR_Word InstanceStatus0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Instance0_5, (MR_Integer) 3)));
    MR_Word Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Instance0_5, (MR_Integer) 4)));
    MR_Word Constraints_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Instance0_5, (MR_Integer) 5)));
    MR_Word Body_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Instance0_5, (MR_Integer) 6)));
    MR_Word HLDSClassInterface_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Instance0_5, (MR_Integer) 7)));
    MR_Word TVarSet_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Instance0_5, (MR_Integer) 8)));
    MR_Word ConstraintProofs_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Instance0_5, (MR_Integer) 9)));
    MR_Word ToWrite_18;
    MR_Word OldStatus_26 = (MR_Word) InstanceStatus0_11;

    switch (MR_tag((MR_Word) OldStatus_26)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(OldStatus_26)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            ToWrite_18 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            ToWrite_18 = (MR_Integer) 0;
            break;
          case (MR_Integer) 2:
            ToWrite_18 = (MR_Integer) 0;
            break;
          case (MR_Integer) 3:
            ToWrite_18 = (MR_Integer) 0;
            break;
          case (MR_Integer) 4:
            ToWrite_18 = (MR_Integer) 1;
            break;
          case (MR_Integer) 5:
            ToWrite_18 = (MR_Integer) 1;
            break;
          case (MR_Integer) 6:
            ToWrite_18 = (MR_Integer) 0;
            break;
          case (MR_Integer) 7:
            ToWrite_18 = (MR_Integer) 1;
            break;
          case (MR_Integer) 8:
            ToWrite_18 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Status_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), OldStatus_26, (MR_Integer) 0)));
          MR_Word Var_29;

          Var_29 = hlds__status__old_status_is_exported_1_f_0(Status_28);
          ToWrite_18 = mercury__bool__not_1_f_0(Var_29);
        }
        break;
      case (MR_Integer) 2:
        ToWrite_18 = (MR_Integer) 0;
        break;
    }
    switch (ToWrite_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *Instance_6 = Instance0_5;
          *STATE_VARIABLE_ModuleInfo_23 = STATE_VARIABLE_ModuleInfo_0_22;
        }
        break;
      case (MR_Integer) 1:
        {
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
            *Instance_6 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (InstanceModule_8));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Types_9));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (OriginalTypes_10));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))))));
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Context_12));
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Constraints_13));
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Body_14));
            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (HLDSClassInterface_15));
            MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (TVarSet_16));
            MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ConstraintProofs_17));
          }
          if ((HLDSClassInterface_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            *STATE_VARIABLE_ModuleInfo_23 = STATE_VARIABLE_ModuleInfo_0_22;
          else
          {
            MR_Word TypeCtorInfo_8_35 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
            MR_Word ClassInterface_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), HLDSClassInterface_15, (MR_Integer) 0)));
            MR_Word PredIds_21;
            MR_Word PredIds0_32;
            MR_Word Preds0_42;
            MR_Word Preds_43;

            PredIds0_32 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, TypeCtorInfo_8_35, (MR_Word) &transform_hlds__intermod_scalar_common_2[24], ClassInterface_20);
            mercury__list__sort_and_remove_dups_2_p_0(TypeCtorInfo_8_35, PredIds0_32, &PredIds_21);
            hlds__hlds_module__module_info_get_preds_2_p_0(STATE_VARIABLE_ModuleInfo_0_22, &Preds0_42);
            transform_hlds__intermod__opt_export_preds_in_pred_table_3_p_0(PredIds_21, Preds0_42, &Preds_43);
            hlds__hlds_module__module_info_set_preds_3_p_0(Preds_43, STATE_VARIABLE_ModuleInfo_0_22, STATE_VARIABLE_ModuleInfo_23);
          }
        }
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__intermod__maybe_opt_export_class_instances_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_Instance_6;
    MR_Word conv0_STATE_VARIABLE_ModuleInfo_23;

    transform_hlds__intermod__maybe_opt_export_instance_defn_4_p_0(((MR_Word) wrapper_arg_1), &conv1_Instance_6, ((MR_Word) wrapper_arg_3), &conv0_STATE_VARIABLE_ModuleInfo_23);
    *wrapper_arg_2 = ((MR_Box) (conv1_Instance_6));
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_23));
  }
}

static void MR_CALL 
transform_hlds__intermod__maybe_opt_export_class_instances_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_ModuleInfo_0_9,
  MR_Word * STATE_VARIABLE_ModuleInfo_10)
{
  {
    MR_Word TypeCtorInfo_17_17 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_instance_defn_0;
    MR_Word ClassId_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
    MR_Word InstanceList0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
    MR_Word InstanceList_7;
    MR_Box conv2_STATE_VARIABLE_ModuleInfo_10;

    mercury__list__map_foldl_5_p_0(TypeCtorInfo_17_17, TypeCtorInfo_17_17, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__intermod_scalar_common_2[23], InstanceList0_6, &InstanceList_7, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_9)), &conv2_STATE_VARIABLE_ModuleInfo_10);
    *STATE_VARIABLE_ModuleInfo_10 = ((MR_Word) conv2_STATE_VARIABLE_ModuleInfo_10);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ClassId_5));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (InstanceList_7));
    }
  }
}

static MR_Box MR_CALL 
transform_hlds__intermod__maybe_opt_export_class_defn_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = hlds__hlds_pred__pred_proc_id_project_pred_id_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
transform_hlds__intermod__maybe_opt_export_class_defn_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_ModuleInfo_0_11,
  MR_Word * STATE_VARIABLE_ModuleInfo_12)
{
  {
    MR_Word ClassId_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
    MR_Word ClassDefn0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
    MR_Word ClassDefn_7;
    MR_Word ToWrite_9;
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn0_6, (MR_Integer) 0)));
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn0_6, (MR_Integer) 1)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn0_6, (MR_Integer) 2)));
    MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn0_6, (MR_Integer) 3)));
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn0_6, (MR_Integer) 4)));
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn0_6, (MR_Integer) 5)));
    MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn0_6, (MR_Integer) 6)));
    MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn0_6, (MR_Integer) 7)));
    MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn0_6, (MR_Integer) 8)));
    MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn0_6, (MR_Integer) 9)));
    MR_Word OldStatus_46 = (MR_Word) Var_13;

    switch (MR_tag((MR_Word) OldStatus_46)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(OldStatus_46)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            ToWrite_9 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            ToWrite_9 = (MR_Integer) 0;
            break;
          case (MR_Integer) 2:
            ToWrite_9 = (MR_Integer) 0;
            break;
          case (MR_Integer) 3:
            ToWrite_9 = (MR_Integer) 0;
            break;
          case (MR_Integer) 4:
            ToWrite_9 = (MR_Integer) 1;
            break;
          case (MR_Integer) 5:
            ToWrite_9 = (MR_Integer) 1;
            break;
          case (MR_Integer) 6:
            ToWrite_9 = (MR_Integer) 0;
            break;
          case (MR_Integer) 7:
            ToWrite_9 = (MR_Integer) 1;
            break;
          case (MR_Integer) 8:
            ToWrite_9 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Status_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), OldStatus_46, (MR_Integer) 0)));
          MR_Word Var_49;

          Var_49 = hlds__status__old_status_is_exported_1_f_0(Status_48);
          ToWrite_9 = mercury__bool__not_1_f_0(Var_49);
        }
        break;
      case (MR_Integer) 2:
        ToWrite_9 = (MR_Integer) 0;
        break;
    }
    switch (ToWrite_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          ClassDefn_7 = ClassDefn0_6;
          *STATE_VARIABLE_ModuleInfo_12 = STATE_VARIABLE_ModuleInfo_0_11;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeCtorInfo_8_55;
          MR_Word PredIds_10;
          MR_Word Var_34 = Var_24;
          MR_Word PredIds0_52;
          MR_Word Preds0_62;
          MR_Word Preds_63;

          {
            ClassDefn_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ClassDefn_7, 0) = ((MR_Box) (((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))))));
            MR_hl_field(MR_mktag(0), ClassDefn_7, 1) = ((MR_Box) (Var_18));
            MR_hl_field(MR_mktag(0), ClassDefn_7, 2) = ((MR_Box) (Var_19));
            MR_hl_field(MR_mktag(0), ClassDefn_7, 3) = ((MR_Box) (Var_20));
            MR_hl_field(MR_mktag(0), ClassDefn_7, 4) = ((MR_Box) (Var_21));
            MR_hl_field(MR_mktag(0), ClassDefn_7, 5) = ((MR_Box) (Var_22));
            MR_hl_field(MR_mktag(0), ClassDefn_7, 6) = ((MR_Box) (Var_23));
            MR_hl_field(MR_mktag(0), ClassDefn_7, 7) = ((MR_Box) (Var_34));
            MR_hl_field(MR_mktag(0), ClassDefn_7, 8) = ((MR_Box) (Var_25));
            MR_hl_field(MR_mktag(0), ClassDefn_7, 9) = ((MR_Box) (Var_26));
          }
          TypeCtorInfo_8_55 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
          PredIds0_52 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, TypeCtorInfo_8_55, (MR_Word) &transform_hlds__intermod_scalar_common_2[22], Var_34);
          mercury__list__sort_and_remove_dups_2_p_0(TypeCtorInfo_8_55, PredIds0_52, &PredIds_10);
          hlds__hlds_module__module_info_get_preds_2_p_0(STATE_VARIABLE_ModuleInfo_0_11, &Preds0_62);
          transform_hlds__intermod__opt_export_preds_in_pred_table_3_p_0(PredIds_10, Preds0_62, &Preds_63);
          hlds__hlds_module__module_info_set_preds_3_p_0(Preds_63, STATE_VARIABLE_ModuleInfo_0_11, STATE_VARIABLE_ModuleInfo_12);
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ClassId_5));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ClassDefn_7));
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__intermod__maybe_opt_export_type_defn_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_14;

    succeeded = transform_hlds__intermod__IntroducedFrom__pred__adjust_status_of_special_preds__3352__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), &conv0_LambdaHeadVar__2_14);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_14));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__intermod__maybe_opt_export_type_defn_5_p_0(
  MR_Word TypeCtor_6,
  MR_Word TypeDefn0_7,
  MR_Word * TypeDefn_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_11,
  MR_Word * STATE_VARIABLE_ModuleInfo_12)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_10;
    MR_Word TypeStatus_19;
    MR_Word Name_20;
    MR_Word Var_24;
    MR_Word OldStatus_26;
    MR_Integer _Arity_21;
    MR_String Var_22;

    hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_ModuleInfo_0_11, &ModuleName_10);
    hlds__hlds_data__get_type_defn_status_2_p_0(TypeDefn0_7, &TypeStatus_19);
    Name_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeCtor_6, (MR_Integer) 0)));
    _Arity_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), TypeCtor_6, (MR_Integer) 1)));
    succeeded = ((MR_tag((MR_Word) Name_20)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), Name_20, (MR_Integer) 0)));
      Var_22 = ((MR_String) (MR_hl_field(MR_mktag(1), Name_20, (MR_Integer) 1)));
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_10, Var_24);
      if (succeeded)
      {
        OldStatus_26 = (MR_Word) TypeStatus_19;
        switch (MR_tag((MR_Word) OldStatus_26)) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            switch (MR_unmkbody(OldStatus_26)) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 4:
                succeeded = MR_TRUE;
                break;
              case (MR_Integer) 5:
                succeeded = MR_TRUE;
                break;
              case (MR_Integer) 7:
                succeeded = MR_TRUE;
                break;
              case (MR_Integer) 8:
                succeeded = MR_TRUE;
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Status_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), OldStatus_26, (MR_Integer) 0)));
              MR_Word Var_29;
              MR_Word Var_68;

              Var_29 = hlds__status__old_status_is_exported_1_f_0(Status_28);
              Var_68 = mercury__bool__not_1_f_0(Var_29);
              succeeded = (Var_68 == (MR_Integer) 1);
            }
            break;
        }
      }
    }
    if (succeeded)
    {
      MR_Word SpecialPredList_33;
      MR_Word SpecPredMaps_34;
      MR_Word PredIds_37;
      MR_Word Var_38;
      MR_Word Preds0_49;
      MR_Word Preds_50;

      hlds__hlds_data__set_type_defn_status_3_p_0((MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))), TypeDefn0_7, TypeDefn_8);
      hlds__special_pred__special_pred_list_1_p_0(&SpecialPredList_33);
      hlds__hlds_module__module_info_get_special_pred_maps_2_p_0(STATE_VARIABLE_ModuleInfo_0_11, &SpecPredMaps_34);
      {
        Var_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_3[8]));
        MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (transform_hlds__intermod__maybe_opt_export_type_defn_5_p_0_1));
        MR_hl_field(MR_mktag(0), Var_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_38, 3) = ((MR_Box) (TypeCtor_6));
        MR_hl_field(MR_mktag(0), Var_38, 4) = ((MR_Box) (SpecPredMaps_34));
      }
      mercury__list__filter_map_3_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_special_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, Var_38, SpecialPredList_33, &PredIds_37);
      hlds__hlds_module__module_info_get_preds_2_p_0(STATE_VARIABLE_ModuleInfo_0_11, &Preds0_49);
      transform_hlds__intermod__opt_export_preds_in_pred_table_3_p_0(PredIds_37, Preds0_49, &Preds_50);
      hlds__hlds_module__module_info_set_preds_3_p_0(Preds_50, STATE_VARIABLE_ModuleInfo_0_11, STATE_VARIABLE_ModuleInfo_12);
    }
    else
    {
      *TypeDefn_8 = TypeDefn0_7;
      *STATE_VARIABLE_ModuleInfo_12 = STATE_VARIABLE_ModuleInfo_0_11;
    }
  }
}

static void MR_CALL 
transform_hlds__intermod__write_pragma_unused_args_5_p_0(
  MR_Word UnusedArgInfo_6,
  MR_Word STATE_VARIABLE_First_0_9,
  MR_Word * STATE_VARIABLE_First_10)
{
  {
    switch (STATE_VARIABLE_First_0_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          mercury__io__nl_2_p_0();
          *STATE_VARIABLE_First_10 = (MR_Integer) 0;
        }
        break;
      case (MR_Integer) 0:
        *STATE_VARIABLE_First_10 = STATE_VARIABLE_First_0_9;
        break;
    }
    parse_tree__parse_tree_out_pragma__mercury_output_pragma_unused_args_3_p_0(UnusedArgInfo_6);
  }
}

static void MR_CALL 
transform_hlds__intermod__maybe_write_pragma_termination2_for_proc_7_p_0(
  MR_Word OrderPredInfo_8,
  MR_Integer _ProcId_9,
  MR_Word ProcInfo_10,
  MR_Word STATE_VARIABLE_First_0_33,
  MR_Word * STATE_VARIABLE_First_34)
{
  transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_114_105_116_101_95_112_114_97_103_109_97_95_116_101_114_109_105_110_97_116_105_111_110_50_95_102_111_114_95_112_114_111_99_95_95_91_50_93_95_48_7_p_0(OrderPredInfo_8, ProcInfo_10, STATE_VARIABLE_First_0_33, STATE_VARIABLE_First_34);
}

static void MR_CALL 
transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_114_105_116_101_95_112_114_97_103_109_97_95_116_101_114_109_105_110_97_116_105_111_110_50_95_102_111_114_95_112_114_111_99_95_95_91_50_93_95_48_7_p_0(
  MR_Word OrderPredInfo_8,
  MR_Word ProcInfo_10,
  MR_Word STATE_VARIABLE_First_0_33,
  MR_Word * STATE_VARIABLE_First_34)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_pred__proc_info_is_valid_mode_1_p_0(ProcInfo_10);
    if (succeeded)
    {
      MR_Word TypeInfo_67_67;
      MR_Word TypeCtorInfo_68_68;
      MR_String PredName_13 = ((MR_String) (MR_hl_field(MR_mktag(0), OrderPredInfo_8, (MR_Integer) 0)));
      MR_Word PredOrFunc_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), OrderPredInfo_8, (MR_Integer) 2)));
      MR_Word PredInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), OrderPredInfo_8, (MR_Integer) 4)));
      MR_Word ModuleName_18;
      MR_Word PredSymName_19;
      MR_Word ArgModes_20;
      MR_Word HeadVars_21;
      MR_Word Term2Info_22;
      MR_Word MaybeSuccess_23;
      MR_Word MaybeFailure_24;
      MR_Word MaybeTermination_25;
      MR_Word SizeVarMap_26;
      MR_Word HeadSizeVars_27;
      MR_Integer NumHeadSizeVars_30;
      MR_Word HeadSizeVarIds_31;
      MR_Word VarToVarIdMap_32;
      MR_Integer Var_50;
      MR_Word Var_52;
      MR_Integer _PredArity_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), OrderPredInfo_8, (MR_Integer) 1)));
      MR_Word _PredId_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), OrderPredInfo_8, (MR_Integer) 3)));

      ModuleName_18 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_17);
      {
        PredSymName_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), PredSymName_19, 0) = ((MR_Box) (ModuleName_18));
        MR_hl_field(MR_mktag(1), PredSymName_19, 1) = ((MR_Box) (PredName_13));
      }
      hlds__hlds_pred__proc_info_declared_argmodes_2_p_0(ProcInfo_10, &ArgModes_20);
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_10, &HeadVars_21);
      hlds__hlds_pred__proc_info_get_termination2_info_2_p_0(ProcInfo_10, &Term2Info_22);
      MaybeSuccess_23 = transform_hlds__term_constr_main_types__term2_info_get_success_constrs_1_f_0(Term2Info_22);
      MaybeFailure_24 = transform_hlds__term_constr_main_types__term2_info_get_failure_constrs_1_f_0(Term2Info_22);
      MaybeTermination_25 = transform_hlds__term_constr_main_types__term2_info_get_term_status_1_f_0(Term2Info_22);
      SizeVarMap_26 = transform_hlds__term_constr_main_types__term2_info_get_size_var_map_1_f_0(Term2Info_22);
      HeadSizeVars_27 = transform_hlds__term_constr_util__prog_vars_to_size_vars_2_f_0(SizeVarMap_26, HeadVars_21);
      switch (STATE_VARIABLE_First_0_33) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            mercury__io__nl_2_p_0();
            *STATE_VARIABLE_First_34 = (MR_Integer) 0;
          }
          break;
        case (MR_Integer) 0:
          *STATE_VARIABLE_First_34 = STATE_VARIABLE_First_0_33;
          break;
      }
      mercury__io__write_string_3_p_0((MR_String) ":- pragma termination2_info(");
      switch (PredOrFunc_15) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word FuncArgModes_28;
            MR_Word ReturnMode_29;
            MR_Word Var_42;
            MR_Box conv0_ReturnMode_29;

            parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, ArgModes_20, &FuncArgModes_28, &conv0_ReturnMode_29);
            ReturnMode_29 = ((MR_Word) conv0_ReturnMode_29);
            Var_42 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0);
            parse_tree__parse_tree_out_pred_decl__mercury_output_func_mode_subdecl_8_p_0((MR_Integer) 0, Var_42, PredSymName_19, FuncArgModes_28, ReturnMode_29, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Word Var_46;

            Var_46 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0);
            parse_tree__parse_tree_out_pred_decl__mercury_output_pred_mode_subdecl_7_p_0((MR_Integer) 0, Var_46, PredSymName_19, ArgModes_20, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
          }
          break;
      }
      TypeInfo_67_67 = (MR_Word) &transform_hlds__intermod_scalar_common_1[8];
      mercury__list__length_2_p_0(TypeInfo_67_67, HeadSizeVars_27, &NumHeadSizeVars_30);
      Var_50 = (NumHeadSizeVars_30 - (MR_Integer) 1);
      HeadSizeVarIds_31 = mercury__list__f_46_46_2_f_0((MR_Integer) 0, Var_50);
      TypeCtorInfo_68_68 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
      Var_52 = mercury__map__init_0_f_0(TypeInfo_67_67, TypeCtorInfo_68_68);
      mercury__map__det_insert_from_corresponding_lists_4_p_0(TypeInfo_67_67, TypeCtorInfo_68_68, HeadSizeVars_27, HeadSizeVarIds_31, Var_52, &VarToVarIdMap_32);
      mercury__io__write_string_3_p_0((MR_String) ", ");
      transform_hlds__intermod__output_maybe_constr_arg_size_info_4_p_0(VarToVarIdMap_32, MaybeSuccess_23);
      mercury__io__write_string_3_p_0((MR_String) ", ");
      transform_hlds__intermod__output_maybe_constr_arg_size_info_4_p_0(VarToVarIdMap_32, MaybeFailure_24);
      mercury__io__write_string_3_p_0((MR_String) ", ");
      if ((MaybeTermination_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        mercury__io__write_string_3_p_0((MR_String) "not_set");
      }
      else
      {
        MR_Word Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeTermination_25, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) Var_91)) == (MR_mktag((MR_Integer) 1))))
        {
          mercury__io__write_string_3_p_0((MR_String) "can_loop");
        }
        else
        {
          mercury__io__write_string_3_p_0((MR_String) "cannot_loop");
        }
      }
      mercury__io__write_string_3_p_0((MR_String) ").\n");
    }
    else
      *STATE_VARIABLE_First_34 = STATE_VARIABLE_First_0_33;
  }
}

static MR_Box MR_CALL 
transform_hlds__intermod__output_maybe_constr_arg_size_info_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv0_LambdaHeadVar__2_21;

    conv0_LambdaHeadVar__2_21 = transform_hlds__intermod__IntroducedFrom__func__output_maybe_constr_arg_size_info__2839__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_21));
    return wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
transform_hlds__intermod__output_maybe_constr_arg_size_info_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__intermod__IntroducedFrom__pred__output_maybe_constr_arg_size_info__2837__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__intermod__output_maybe_constr_arg_size_info_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = libs__lp_rational__nonneg_constr_1_p_0(((MR_Word) wrapper_arg_1));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__intermod__output_maybe_constr_arg_size_info_4_p_0(
  MR_Word VarToVarIdMap_5,
  MR_Word MaybeArgSizeConstrs_6)
{
  {
    MR_bool succeeded;

    if ((MaybeArgSizeConstrs_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      mercury__io__write_string_3_p_0((MR_String) "not_set");
    }
    else
    {
      MR_Word TypeCtorInfo_29_29;
      MR_Word Polyhedron_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeArgSizeConstrs_6, (MR_Integer) 0)));
      MR_Word Constraints0_9;
      MR_Word Constraints1_10;
      MR_Word Constraints_11;
      MR_Word OutputVar_12;

      mercury__io__write_string_3_p_0((MR_String) "constraints(");
      Constraints0_9 = libs__polyhedron__non_false_constraints_1_f_0(Polyhedron_8);
      TypeCtorInfo_29_29 = (MR_Word) &libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0;
      Constraints1_10 = mercury__list__filter_2_f_0(TypeCtorInfo_29_29, (MR_Word) &transform_hlds__intermod_scalar_common_10[3], Constraints0_9);
      Constraints_11 = mercury__list__sort_1_f_0(TypeCtorInfo_29_29, Constraints1_10);
      {
        OutputVar_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), OutputVar_12, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_8[4]));
        MR_hl_field(MR_mktag(0), OutputVar_12, 1) = ((MR_Box) (transform_hlds__intermod__output_maybe_constr_arg_size_info_4_p_0_3));
        MR_hl_field(MR_mktag(0), OutputVar_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), OutputVar_12, 3) = ((MR_Box) (VarToVarIdMap_5));
      }
      libs__lp_rational__output_constraints_4_p_0(OutputVar_12, Constraints_11);
      mercury__io__write_char_3_p_0((MR_Char) 41);
    }
  }
}

static void MR_CALL 
transform_hlds__intermod__write_pragma_termination2_for_pred_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_First_34;

    transform_hlds__intermod__maybe_write_pragma_termination2_for_proc_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3), &conv0_STATE_VARIABLE_First_34);
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_First_34));
  }
}

static void MR_CALL 
transform_hlds__intermod__write_pragma_termination2_for_pred_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word OrderPredInfo_8,
  MR_Word STATE_VARIABLE_First_0_23,
  MR_Word * STATE_VARIABLE_First_24)
{
  {
    MR_bool succeeded;
    MR_Word PredId_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), OrderPredInfo_8, (MR_Integer) 3)));
    MR_Word PredInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), OrderPredInfo_8, (MR_Integer) 4)));
    MR_Word PredStatus_16;
    MR_Word TypeSpecInfo_17;
    MR_Word TypeSpecForcePreds_19;
    MR_String Var_11 = ((MR_String) (MR_hl_field(MR_mktag(0), OrderPredInfo_8, (MR_Integer) 0)));
    MR_Integer Var_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), OrderPredInfo_8, (MR_Integer) 1)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), OrderPredInfo_8, (MR_Integer) 2)));
    MR_Word Var_18;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_43;
    MR_Word TypeCtorInfo_32_32;

    hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo_15, &PredStatus_16);
    hlds__hlds_module__module_info_get_type_spec_info_2_p_0(ModuleInfo_7, &TypeSpecInfo_17);
    Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeSpecInfo_17, (MR_Integer) 0)));
    TypeSpecForcePreds_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeSpecInfo_17, (MR_Integer) 1)));
    Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeSpecInfo_17, (MR_Integer) 2)));
    Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeSpecInfo_17, (MR_Integer) 3)));
    Var_43 = (MR_Word) PredStatus_16;
    if ((Var_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
      succeeded = MR_TRUE;
    else
    if ((Var_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
      succeeded = MR_TRUE;
    else
      succeeded = MR_FALSE;
    if (succeeded)
    {
      succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(PredInfo_15);
      succeeded = !(succeeded);
      if (succeeded)
      {
        TypeCtorInfo_32_32 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
        succeeded = mercury__set__member_2_p_0(TypeCtorInfo_32_32, ((MR_Box) (PredId_14)), TypeSpecForcePreds_19);
        succeeded = !(succeeded);
      }
    }
    if (succeeded)
    {
      MR_Word ProcTable_22;
      MR_Word Var_29;
      MR_Box conv2_STATE_VARIABLE_First_24;
      MR_Box conv1_STATE_VARIABLE_IO_26;

      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_15, &ProcTable_22);
      {
        Var_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_13[0]));
        MR_hl_field(MR_mktag(0), Var_29, 1) = ((MR_Box) (transform_hlds__intermod__write_pragma_termination2_for_pred_6_p_0_1));
        MR_hl_field(MR_mktag(0), Var_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_29, 3) = ((MR_Box) (OrderPredInfo_8));
      }
      mercury__map__foldl2_6_p_2((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, (MR_Word) &transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, Var_29, ProcTable_22, ((MR_Box) (STATE_VARIABLE_First_0_23)), &conv2_STATE_VARIABLE_First_24, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_26);
      *STATE_VARIABLE_First_24 = ((MR_Word) conv2_STATE_VARIABLE_First_24);
    }
    else
      *STATE_VARIABLE_First_24 = STATE_VARIABLE_First_0_23;
  }
}

static void MR_CALL 
transform_hlds__intermod__maybe_write_pragma_termination_for_proc_7_p_0(
  MR_Word OrderPredInfo_8,
  MR_Integer _ProcId_9,
  MR_Word ProcInfo_10,
  MR_Word STATE_VARIABLE_First_0_23,
  MR_Word * STATE_VARIABLE_First_24)
{
  transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_114_105_116_101_95_112_114_97_103_109_97_95_116_101_114_109_105_110_97_116_105_111_110_95_102_111_114_95_112_114_111_99_95_95_91_50_93_95_48_7_p_0(OrderPredInfo_8, ProcInfo_10, STATE_VARIABLE_First_0_23, STATE_VARIABLE_First_24);
}

static void MR_CALL 
transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_114_105_116_101_95_112_114_97_103_109_97_95_116_101_114_109_105_110_97_116_105_111_110_95_102_111_114_95_112_114_111_99_95_95_91_50_93_95_48_7_p_0(
  MR_Word OrderPredInfo_8,
  MR_Word ProcInfo_10,
  MR_Word STATE_VARIABLE_First_0_23,
  MR_Word * STATE_VARIABLE_First_24)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_pred__proc_info_is_valid_mode_1_p_0(ProcInfo_10);
    if (succeeded)
    {
      MR_String PredName_13 = ((MR_String) (MR_hl_field(MR_mktag(0), OrderPredInfo_8, (MR_Integer) 0)));
      MR_Word PredOrFunc_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), OrderPredInfo_8, (MR_Integer) 2)));
      MR_Word PredInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), OrderPredInfo_8, (MR_Integer) 4)));
      MR_Word ModuleName_18;
      MR_Word PredSymName_19;
      MR_Word ArgModes_20;
      MR_Word ArgSize_21;
      MR_Word Termination_22;
      MR_Integer _PredArity_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), OrderPredInfo_8, (MR_Integer) 1)));
      MR_Word _PredId_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), OrderPredInfo_8, (MR_Integer) 3)));

      ModuleName_18 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_17);
      {
        PredSymName_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), PredSymName_19, 0) = ((MR_Box) (ModuleName_18));
        MR_hl_field(MR_mktag(1), PredSymName_19, 1) = ((MR_Box) (PredName_13));
      }
      hlds__hlds_pred__proc_info_declared_argmodes_2_p_0(ProcInfo_10, &ArgModes_20);
      hlds__hlds_pred__proc_info_get_maybe_arg_size_info_2_p_0(ProcInfo_10, &ArgSize_21);
      hlds__hlds_pred__proc_info_get_maybe_termination_info_2_p_0(ProcInfo_10, &Termination_22);
      switch (STATE_VARIABLE_First_0_23) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            mercury__io__nl_2_p_0();
            *STATE_VARIABLE_First_24 = (MR_Integer) 0;
          }
          break;
        case (MR_Integer) 0:
          *STATE_VARIABLE_First_24 = STATE_VARIABLE_First_0_23;
          break;
      }
      parse_tree__parse_tree_out_pragma__write_pragma_termination_info_components_8_p_0((MR_Word) &transform_hlds__intermod_scalar_common_1[7], (MR_Word) &mercury__unit__unit__type_ctor_info_unit_0, (MR_Integer) 0, PredOrFunc_15, PredSymName_19, ArgModes_20, ArgSize_21, Termination_22);
    }
    else
      *STATE_VARIABLE_First_24 = STATE_VARIABLE_First_0_23;
  }
}

static void MR_CALL 
transform_hlds__intermod__write_pragma_termination_for_pred_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_First_24;

    transform_hlds__intermod__maybe_write_pragma_termination_for_proc_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3), &conv0_STATE_VARIABLE_First_24);
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_First_24));
  }
}

static void MR_CALL 
transform_hlds__intermod__write_pragma_termination_for_pred_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word OrderPredInfo_8,
  MR_Word STATE_VARIABLE_First_0_23,
  MR_Word * STATE_VARIABLE_First_24)
{
  {
    MR_bool succeeded;
    MR_Word PredId_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), OrderPredInfo_8, (MR_Integer) 3)));
    MR_Word PredInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), OrderPredInfo_8, (MR_Integer) 4)));
    MR_Word PredStatus_16;
    MR_Word TypeSpecInfo_17;
    MR_Word TypeSpecForcePreds_19;
    MR_String _PredName_11 = ((MR_String) (MR_hl_field(MR_mktag(0), OrderPredInfo_8, (MR_Integer) 0)));
    MR_Integer _PredArity_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), OrderPredInfo_8, (MR_Integer) 1)));
    MR_Word _PredOrFunc_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), OrderPredInfo_8, (MR_Integer) 2)));
    MR_Word Var_18;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_43;
    MR_Word TypeCtorInfo_32_32;

    hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo_15, &PredStatus_16);
    hlds__hlds_module__module_info_get_type_spec_info_2_p_0(ModuleInfo_7, &TypeSpecInfo_17);
    Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeSpecInfo_17, (MR_Integer) 0)));
    TypeSpecForcePreds_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeSpecInfo_17, (MR_Integer) 1)));
    Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeSpecInfo_17, (MR_Integer) 2)));
    Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeSpecInfo_17, (MR_Integer) 3)));
    Var_43 = (MR_Word) PredStatus_16;
    if ((Var_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
      succeeded = MR_TRUE;
    else
    if ((Var_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
      succeeded = MR_TRUE;
    else
      succeeded = MR_FALSE;
    if (succeeded)
    {
      succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(PredInfo_15);
      succeeded = !(succeeded);
      if (succeeded)
      {
        TypeCtorInfo_32_32 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
        succeeded = mercury__set__member_2_p_0(TypeCtorInfo_32_32, ((MR_Box) (PredId_14)), TypeSpecForcePreds_19);
        succeeded = !(succeeded);
      }
    }
    if (succeeded)
    {
      MR_Word ProcTable_22;
      MR_Word Var_29;
      MR_Box conv2_STATE_VARIABLE_First_24;
      MR_Box conv1_STATE_VARIABLE_IO_26;

      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_15, &ProcTable_22);
      {
        Var_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_13[0]));
        MR_hl_field(MR_mktag(0), Var_29, 1) = ((MR_Box) (transform_hlds__intermod__write_pragma_termination_for_pred_6_p_0_1));
        MR_hl_field(MR_mktag(0), Var_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_29, 3) = ((MR_Box) (OrderPredInfo_8));
      }
      mercury__map__foldl2_6_p_2((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, (MR_Word) &transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, Var_29, ProcTable_22, ((MR_Box) (STATE_VARIABLE_First_0_23)), &conv2_STATE_VARIABLE_First_24, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_26);
      *STATE_VARIABLE_First_24 = ((MR_Word) conv2_STATE_VARIABLE_First_24);
    }
    else
      *STATE_VARIABLE_First_24 = STATE_VARIABLE_First_0_23;
  }
}

static void MR_CALL 
transform_hlds__intermod__maybe_write_pragma_structure_sharing_for_proc_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word OrderPredInfo_10,
  MR_Integer ProcId_11,
  MR_Word ProcInfo_12,
  MR_Word STATE_VARIABLE_First_0_35,
  MR_Word * STATE_VARIABLE_First_36)
{
  {
    MR_bool succeeded;
    MR_String PredName_15 = ((MR_String) (MR_hl_field(MR_mktag(0), OrderPredInfo_10, (MR_Integer) 0)));
    MR_Word PredOrFunc_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), OrderPredInfo_10, (MR_Integer) 2)));
    MR_Word PredId_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), OrderPredInfo_10, (MR_Integer) 3)));
    MR_Word PredInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), OrderPredInfo_10, (MR_Integer) 4)));
    MR_Integer _PredArity_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), OrderPredInfo_10, (MR_Integer) 1)));
    MR_Word SharingStatus_22;
    MR_Word ShouldWrite_20;
    MR_Word MaybeSharingStatus_21;
    MR_Word Var_39;

    succeeded = hlds__hlds_pred__proc_info_is_valid_mode_1_p_0(ProcInfo_12);
    if (succeeded)
    {
      Var_39 = (MR_Integer) 1;
      transform_hlds__intermod__should_write_sharing_info_6_p_0(ModuleInfo_9, PredId_18, ProcId_11, PredInfo_19, Var_39, &ShouldWrite_20);
      succeeded = (ShouldWrite_20 == (MR_Integer) 1);
      if (succeeded)
      {
        hlds__hlds_pred__proc_info_get_structure_sharing_2_p_0(ProcInfo_12, &MaybeSharingStatus_21);
        succeeded = ((MR_tag((MR_Word) MaybeSharingStatus_21)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
          SharingStatus_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeSharingStatus_21, (MR_Integer) 0)));
      }
    }
    if (succeeded)
    {
      MR_Word VarSet_23;
      MR_Word TypeVarSet_24;
      MR_Word ModuleName_25;
      MR_Word PredSymName_26;
      MR_Word ArgModes_27;
      MR_Word PredNameModesPF_28;
      MR_Word HeadVars_29;
      MR_Word VarTypes_30;
      MR_Word HeadVarTypes_31;
      MR_Word Sharing_32;
      MR_Word SharingInfo_34;
      MR_Word Var_40;
      MR_Word Var_44;
      MR_Word Var_45;
      MR_Word _Status_33;

      hlds__hlds_pred__proc_info_get_varset_2_p_0(ProcInfo_12, &VarSet_23);
      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo_19, &TypeVarSet_24);
      ModuleName_25 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_19);
      {
        PredSymName_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), PredSymName_26, 0) = ((MR_Box) (ModuleName_25));
        MR_hl_field(MR_mktag(1), PredSymName_26, 1) = ((MR_Box) (PredName_15));
      }
      hlds__hlds_pred__proc_info_declared_argmodes_2_p_0(ProcInfo_12, &ArgModes_27);
      {
        PredNameModesPF_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), PredNameModesPF_28, 0) = ((MR_Box) (PredSymName_26));
        MR_hl_field(MR_mktag(0), PredNameModesPF_28, 1) = ((MR_Box) (ArgModes_27));
        MR_hl_field(MR_mktag(0), PredNameModesPF_28, 2) = ((MR_Box) (PredOrFunc_17));
      }
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_12, &HeadVars_29);
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo_12, &VarTypes_30);
      hlds__vartypes__lookup_var_types_3_p_0(VarTypes_30, HeadVars_29, &HeadVarTypes_31);
      Sharing_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), SharingStatus_22, (MR_Integer) 0)));
      _Status_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), SharingStatus_22, (MR_Integer) 1)));
      {
        Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (Sharing_32));
      }
      {
        SharingInfo_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), SharingInfo_34, 0) = ((MR_Box) (PredNameModesPF_28));
        MR_hl_field(MR_mktag(0), SharingInfo_34, 1) = ((MR_Box) (HeadVars_29));
        MR_hl_field(MR_mktag(0), SharingInfo_34, 2) = ((MR_Box) (HeadVarTypes_31));
        MR_hl_field(MR_mktag(0), SharingInfo_34, 3) = ((MR_Box) (Var_40));
      }
      switch (STATE_VARIABLE_First_0_35) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            mercury__io__nl_2_p_0();
            *STATE_VARIABLE_First_36 = (MR_Integer) 0;
          }
          break;
        case (MR_Integer) 0:
          *STATE_VARIABLE_First_36 = STATE_VARIABLE_First_0_35;
          break;
      }
      {
        Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (VarSet_23));
      }
      {
        Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (TypeVarSet_24));
      }
      parse_tree__parse_tree_out_pragma__write_pragma_structure_sharing_info_6_p_0((MR_Integer) 1, Var_44, Var_45, SharingInfo_34);
    }
    else
      *STATE_VARIABLE_First_36 = STATE_VARIABLE_First_0_35;
  }
}

static void MR_CALL 
transform_hlds__intermod__write_pragma_structure_sharing_for_pred_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_First_36;

    transform_hlds__intermod__maybe_write_pragma_structure_sharing_for_proc_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Integer) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3), &conv0_STATE_VARIABLE_First_36);
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_First_36));
  }
}

static void MR_CALL 
transform_hlds__intermod__write_pragma_structure_sharing_for_pred_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word OrderPredInfo_8,
  MR_Word STATE_VARIABLE_First_0_17,
  MR_Word * STATE_VARIABLE_First_18)
{
  {
    MR_Word PredInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), OrderPredInfo_8, (MR_Integer) 4)));
    MR_Word ProcTable_16;
    MR_Word Var_21;
    MR_String Var_11 = ((MR_String) (MR_hl_field(MR_mktag(0), OrderPredInfo_8, (MR_Integer) 0)));
    MR_Integer Var_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), OrderPredInfo_8, (MR_Integer) 1)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), OrderPredInfo_8, (MR_Integer) 2)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), OrderPredInfo_8, (MR_Integer) 3)));
    MR_Box conv2_STATE_VARIABLE_First_18;
    MR_Box conv1_STATE_VARIABLE_IO_20;

    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_15, &ProcTable_16);
    {
      Var_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_4[3]));
      MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (transform_hlds__intermod__write_pragma_structure_sharing_for_pred_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (ModuleInfo_7));
      MR_hl_field(MR_mktag(0), Var_21, 4) = ((MR_Box) (OrderPredInfo_8));
    }
    mercury__map__foldl2_6_p_2((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, (MR_Word) &transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, Var_21, ProcTable_16, ((MR_Box) (STATE_VARIABLE_First_0_17)), &conv2_STATE_VARIABLE_First_18, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_20);
    *STATE_VARIABLE_First_18 = ((MR_Word) conv2_STATE_VARIABLE_First_18);
  }
}

static void MR_CALL 
transform_hlds__intermod__maybe_write_pragma_structure_reuse_for_proc_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word OrderPredInfo_10,
  MR_Integer ProcId_11,
  MR_Word ProcInfo_12,
  MR_Word STATE_VARIABLE_First_0_35,
  MR_Word * STATE_VARIABLE_First_36)
{
  {
    MR_bool succeeded;
    MR_String PredName_15 = ((MR_String) (MR_hl_field(MR_mktag(0), OrderPredInfo_10, (MR_Integer) 0)));
    MR_Word PredOrFunc_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), OrderPredInfo_10, (MR_Integer) 2)));
    MR_Word PredId_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), OrderPredInfo_10, (MR_Integer) 3)));
    MR_Word PredInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), OrderPredInfo_10, (MR_Integer) 4)));
    MR_Integer _PredArity_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), OrderPredInfo_10, (MR_Integer) 1)));
    MR_Word StructureReuseDomain_22;
    MR_Word ShouldWrite_20;
    MR_Word MaybeStructureReuseDomain_21;
    MR_Word Var_39;

    succeeded = hlds__hlds_pred__proc_info_is_valid_mode_1_p_0(ProcInfo_12);
    if (succeeded)
    {
      Var_39 = (MR_Integer) 1;
      transform_hlds__intermod__should_write_reuse_info_6_p_0(ModuleInfo_9, PredId_18, ProcId_11, PredInfo_19, Var_39, &ShouldWrite_20);
      succeeded = (ShouldWrite_20 == (MR_Integer) 1);
      if (succeeded)
      {
        hlds__hlds_pred__proc_info_get_structure_reuse_2_p_0(ProcInfo_12, &MaybeStructureReuseDomain_21);
        succeeded = ((MR_tag((MR_Word) MaybeStructureReuseDomain_21)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
          StructureReuseDomain_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeStructureReuseDomain_21, (MR_Integer) 0)));
      }
    }
    if (succeeded)
    {
      MR_Word VarSet_23;
      MR_Word TypeVarSet_24;
      MR_Word ModuleName_25;
      MR_Word PredSymName_26;
      MR_Word ArgModes_27;
      MR_Word PredNameModesPF_28;
      MR_Word HeadVars_29;
      MR_Word VarTypes_30;
      MR_Word HeadVarTypes_31;
      MR_Word Reuse_32;
      MR_Word ReuseInfo_34;
      MR_Word Var_40;
      MR_Word Var_42;
      MR_Word Var_43;
      MR_Word _Status_33;

      hlds__hlds_pred__proc_info_get_varset_2_p_0(ProcInfo_12, &VarSet_23);
      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo_19, &TypeVarSet_24);
      ModuleName_25 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_19);
      {
        PredSymName_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), PredSymName_26, 0) = ((MR_Box) (ModuleName_25));
        MR_hl_field(MR_mktag(1), PredSymName_26, 1) = ((MR_Box) (PredName_15));
      }
      hlds__hlds_pred__proc_info_declared_argmodes_2_p_0(ProcInfo_12, &ArgModes_27);
      {
        PredNameModesPF_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), PredNameModesPF_28, 0) = ((MR_Box) (PredSymName_26));
        MR_hl_field(MR_mktag(0), PredNameModesPF_28, 1) = ((MR_Box) (ArgModes_27));
        MR_hl_field(MR_mktag(0), PredNameModesPF_28, 2) = ((MR_Box) (PredOrFunc_17));
      }
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_12, &HeadVars_29);
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo_12, &VarTypes_30);
      hlds__vartypes__lookup_var_types_3_p_0(VarTypes_30, HeadVars_29, &HeadVarTypes_31);
      Reuse_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), StructureReuseDomain_22, (MR_Integer) 0)));
      _Status_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), StructureReuseDomain_22, (MR_Integer) 1)));
      {
        Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (Reuse_32));
      }
      {
        ReuseInfo_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ReuseInfo_34, 0) = ((MR_Box) (PredNameModesPF_28));
        MR_hl_field(MR_mktag(0), ReuseInfo_34, 1) = ((MR_Box) (HeadVars_29));
        MR_hl_field(MR_mktag(0), ReuseInfo_34, 2) = ((MR_Box) (HeadVarTypes_31));
        MR_hl_field(MR_mktag(0), ReuseInfo_34, 3) = ((MR_Box) (Var_40));
      }
      {
        Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (VarSet_23));
      }
      {
        Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (TypeVarSet_24));
      }
      parse_tree__parse_tree_out_pragma__write_pragma_structure_reuse_info_6_p_0((MR_Integer) 1, Var_42, Var_43, ReuseInfo_34);
    }
    else
    {
    }
    *STATE_VARIABLE_First_36 = STATE_VARIABLE_First_0_35;
  }
}

static void MR_CALL 
transform_hlds__intermod__write_pragma_structure_reuse_for_pred_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_First_36;

    transform_hlds__intermod__maybe_write_pragma_structure_reuse_for_proc_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Integer) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3), &conv0_STATE_VARIABLE_First_36);
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_First_36));
  }
}

static void MR_CALL 
transform_hlds__intermod__write_pragma_structure_reuse_for_pred_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word OrderPredInfo_8,
  MR_Word STATE_VARIABLE_First_0_17,
  MR_Word * STATE_VARIABLE_First_18)
{
  {
    MR_Word PredInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), OrderPredInfo_8, (MR_Integer) 4)));
    MR_Word ProcTable_16;
    MR_Word Var_21;
    MR_String Var_11 = ((MR_String) (MR_hl_field(MR_mktag(0), OrderPredInfo_8, (MR_Integer) 0)));
    MR_Integer Var_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), OrderPredInfo_8, (MR_Integer) 1)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), OrderPredInfo_8, (MR_Integer) 2)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), OrderPredInfo_8, (MR_Integer) 3)));
    MR_Box conv2_STATE_VARIABLE_First_18;
    MR_Box conv1_STATE_VARIABLE_IO_20;

    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_15, &ProcTable_16);
    {
      Var_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_4[3]));
      MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (transform_hlds__intermod__write_pragma_structure_reuse_for_pred_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (ModuleInfo_7));
      MR_hl_field(MR_mktag(0), Var_21, 4) = ((MR_Box) (OrderPredInfo_8));
    }
    mercury__map__foldl2_6_p_2((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, (MR_Word) &transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, Var_21, ProcTable_16, ((MR_Box) (STATE_VARIABLE_First_0_17)), &conv2_STATE_VARIABLE_First_18, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_20);
    *STATE_VARIABLE_First_18 = ((MR_Word) conv2_STATE_VARIABLE_First_18);
  }
}

static void MR_CALL 
transform_hlds__intermod__maybe_write_pragma_mm_tabling_info_for_proc_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word OrderPredInfo_10,
  MR_Integer ProcId_11,
  MR_Word ProcInfo_12,
  MR_Word STATE_VARIABLE_First_0_30,
  MR_Word * STATE_VARIABLE_First_31)
{
  {
    MR_bool succeeded;
    MR_String PredName_15 = ((MR_String) (MR_hl_field(MR_mktag(0), OrderPredInfo_10, (MR_Integer) 0)));
    MR_Integer PredArity_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), OrderPredInfo_10, (MR_Integer) 1)));
    MR_Word PredOrFunc_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), OrderPredInfo_10, (MR_Integer) 2)));
    MR_Word PredId_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), OrderPredInfo_10, (MR_Integer) 3)));
    MR_Word PredInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), OrderPredInfo_10, (MR_Integer) 4)));
    MR_Word MaybeProcMMTablingInfo_20;
    MR_Word ProcMMTablingInfo_21;
    MR_Word ShouldWrite_22;
    MR_Word Var_34;

    hlds__hlds_pred__proc_info_get_mm_tabling_info_2_p_0(ProcInfo_12, &MaybeProcMMTablingInfo_20);
    succeeded = hlds__hlds_pred__proc_info_is_valid_mode_1_p_0(ProcInfo_12);
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) MaybeProcMMTablingInfo_20)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        ProcMMTablingInfo_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeProcMMTablingInfo_20, (MR_Integer) 0)));
        Var_34 = (MR_Integer) 1;
        transform_hlds__intermod__should_write_mm_tabling_info_6_p_0(ModuleInfo_9, PredId_18, ProcId_11, PredInfo_19, Var_34, &ShouldWrite_22);
        succeeded = (ShouldWrite_22 == (MR_Integer) 1);
      }
    }
    if (succeeded)
    {
      MR_Word ModuleName_23;
      MR_Word PredSymName_24;
      MR_Integer ModeNum_25;
      MR_Word PredNameArityPFMn_26;
      MR_Word Status_27;
      MR_Word MMTablingInfo_29;
      MR_Word Var_28;

      ModuleName_23 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_19);
      {
        PredSymName_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), PredSymName_24, 0) = ((MR_Box) (ModuleName_23));
        MR_hl_field(MR_mktag(1), PredSymName_24, 1) = ((MR_Box) (PredName_15));
      }
      hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_11, &ModeNum_25);
      {
        PredNameArityPFMn_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), PredNameArityPFMn_26, 0) = ((MR_Box) (PredSymName_24));
        MR_hl_field(MR_mktag(0), PredNameArityPFMn_26, 1) = ((MR_Box) (PredArity_16));
        MR_hl_field(MR_mktag(0), PredNameArityPFMn_26, 2) = ((MR_Box) (PredOrFunc_17));
        MR_hl_field(MR_mktag(0), PredNameArityPFMn_26, 3) = ((MR_Box) (ModeNum_25));
      }
      Status_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcMMTablingInfo_21, (MR_Integer) 0)));
      Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcMMTablingInfo_21, (MR_Integer) 1)));
      {
        MMTablingInfo_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), MMTablingInfo_29, 0) = ((MR_Box) (PredNameArityPFMn_26));
        MR_hl_field(MR_mktag(0), MMTablingInfo_29, 1) = ((MR_Box) (Status_27));
      }
      switch (STATE_VARIABLE_First_0_30) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            mercury__io__nl_2_p_0();
            *STATE_VARIABLE_First_31 = (MR_Integer) 0;
          }
          break;
        case (MR_Integer) 0:
          *STATE_VARIABLE_First_31 = STATE_VARIABLE_First_0_30;
          break;
      }
      parse_tree__parse_tree_out_pragma__mercury_output_pragma_mm_tabling_info_3_p_0(MMTablingInfo_29);
    }
    else
      *STATE_VARIABLE_First_31 = STATE_VARIABLE_First_0_30;
  }
}

static void MR_CALL 
transform_hlds__intermod__write_pragma_mm_tabling_info_for_pred_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_First_31;

    transform_hlds__intermod__maybe_write_pragma_mm_tabling_info_for_proc_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Integer) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3), &conv0_STATE_VARIABLE_First_31);
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_First_31));
  }
}

static void MR_CALL 
transform_hlds__intermod__write_pragma_mm_tabling_info_for_pred_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word OrderPredInfo_8,
  MR_Word STATE_VARIABLE_First_0_17,
  MR_Word * STATE_VARIABLE_First_18)
{
  {
    MR_Word PredInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), OrderPredInfo_8, (MR_Integer) 4)));
    MR_Word ProcTable_16;
    MR_Word Var_21;
    MR_String Var_11 = ((MR_String) (MR_hl_field(MR_mktag(0), OrderPredInfo_8, (MR_Integer) 0)));
    MR_Integer Var_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), OrderPredInfo_8, (MR_Integer) 1)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), OrderPredInfo_8, (MR_Integer) 2)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), OrderPredInfo_8, (MR_Integer) 3)));
    MR_Box conv2_STATE_VARIABLE_First_18;
    MR_Box conv1_STATE_VARIABLE_IO_20;

    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_15, &ProcTable_16);
    {
      Var_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_4[3]));
      MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (transform_hlds__intermod__write_pragma_mm_tabling_info_for_pred_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (ModuleInfo_7));
      MR_hl_field(MR_mktag(0), Var_21, 4) = ((MR_Box) (OrderPredInfo_8));
    }
    mercury__map__foldl2_6_p_2((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, (MR_Word) &transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, Var_21, ProcTable_16, ((MR_Box) (STATE_VARIABLE_First_0_17)), &conv2_STATE_VARIABLE_First_18, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_20);
    *STATE_VARIABLE_First_18 = ((MR_Word) conv2_STATE_VARIABLE_First_18);
  }
}

static void MR_CALL 
transform_hlds__intermod__maybe_write_pragma_trailing_info_for_proc_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word OrderPredInfo_10,
  MR_Integer ProcId_11,
  MR_Word ProcInfo_12,
  MR_Word STATE_VARIABLE_First_0_30,
  MR_Word * STATE_VARIABLE_First_31)
{
  {
    MR_bool succeeded;
    MR_String PredName_15 = ((MR_String) (MR_hl_field(MR_mktag(0), OrderPredInfo_10, (MR_Integer) 0)));
    MR_Integer PredArity_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), OrderPredInfo_10, (MR_Integer) 1)));
    MR_Word PredOrFunc_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), OrderPredInfo_10, (MR_Integer) 2)));
    MR_Word PredId_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), OrderPredInfo_10, (MR_Integer) 3)));
    MR_Word PredInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), OrderPredInfo_10, (MR_Integer) 4)));
    MR_Word MaybeProcTrailingInfo_20;
    MR_Word ProcTrailingInfo_21;
    MR_Word ShouldWrite_22;
    MR_Word Var_34;

    hlds__hlds_pred__proc_info_get_trailing_info_2_p_0(ProcInfo_12, &MaybeProcTrailingInfo_20);
    succeeded = hlds__hlds_pred__proc_info_is_valid_mode_1_p_0(ProcInfo_12);
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) MaybeProcTrailingInfo_20)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        ProcTrailingInfo_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeProcTrailingInfo_20, (MR_Integer) 0)));
        Var_34 = (MR_Integer) 1;
        transform_hlds__intermod__should_write_trailing_info_6_p_0(ModuleInfo_9, PredId_18, ProcId_11, PredInfo_19, Var_34, &ShouldWrite_22);
        succeeded = (ShouldWrite_22 == (MR_Integer) 1);
      }
    }
    if (succeeded)
    {
      MR_Word ModuleName_23;
      MR_Word PredSymName_24;
      MR_Integer ModeNum_25;
      MR_Word PredNameArityPFMn_26;
      MR_Word Status_27;
      MR_Word TrailingInfo_29;
      MR_Word Var_28;

      ModuleName_23 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_19);
      {
        PredSymName_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), PredSymName_24, 0) = ((MR_Box) (ModuleName_23));
        MR_hl_field(MR_mktag(1), PredSymName_24, 1) = ((MR_Box) (PredName_15));
      }
      hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_11, &ModeNum_25);
      {
        PredNameArityPFMn_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), PredNameArityPFMn_26, 0) = ((MR_Box) (PredSymName_24));
        MR_hl_field(MR_mktag(0), PredNameArityPFMn_26, 1) = ((MR_Box) (PredArity_16));
        MR_hl_field(MR_mktag(0), PredNameArityPFMn_26, 2) = ((MR_Box) (PredOrFunc_17));
        MR_hl_field(MR_mktag(0), PredNameArityPFMn_26, 3) = ((MR_Box) (ModeNum_25));
      }
      Status_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcTrailingInfo_21, (MR_Integer) 0)));
      Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcTrailingInfo_21, (MR_Integer) 1)));
      {
        TrailingInfo_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TrailingInfo_29, 0) = ((MR_Box) (PredNameArityPFMn_26));
        MR_hl_field(MR_mktag(0), TrailingInfo_29, 1) = ((MR_Box) (Status_27));
      }
      switch (STATE_VARIABLE_First_0_30) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            mercury__io__nl_2_p_0();
            *STATE_VARIABLE_First_31 = (MR_Integer) 0;
          }
          break;
        case (MR_Integer) 0:
          *STATE_VARIABLE_First_31 = STATE_VARIABLE_First_0_30;
          break;
      }
      parse_tree__parse_tree_out_pragma__mercury_output_pragma_trailing_info_3_p_0(TrailingInfo_29);
    }
    else
      *STATE_VARIABLE_First_31 = STATE_VARIABLE_First_0_30;
  }
}

static void MR_CALL 
transform_hlds__intermod__write_pragma_trailing_info_for_pred_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_First_31;

    transform_hlds__intermod__maybe_write_pragma_trailing_info_for_proc_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Integer) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3), &conv0_STATE_VARIABLE_First_31);
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_First_31));
  }
}

static void MR_CALL 
transform_hlds__intermod__write_pragma_trailing_info_for_pred_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word OrderPredInfo_8,
  MR_Word STATE_VARIABLE_First_0_17,
  MR_Word * STATE_VARIABLE_First_18)
{
  {
    MR_Word PredInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), OrderPredInfo_8, (MR_Integer) 4)));
    MR_Word ProcTable_16;
    MR_Word Var_21;
    MR_String Var_11 = ((MR_String) (MR_hl_field(MR_mktag(0), OrderPredInfo_8, (MR_Integer) 0)));
    MR_Integer Var_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), OrderPredInfo_8, (MR_Integer) 1)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), OrderPredInfo_8, (MR_Integer) 2)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), OrderPredInfo_8, (MR_Integer) 3)));
    MR_Box conv2_STATE_VARIABLE_First_18;
    MR_Box conv1_STATE_VARIABLE_IO_20;

    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_15, &ProcTable_16);
    {
      Var_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_4[3]));
      MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (transform_hlds__intermod__write_pragma_trailing_info_for_pred_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (ModuleInfo_7));
      MR_hl_field(MR_mktag(0), Var_21, 4) = ((MR_Box) (OrderPredInfo_8));
    }
    mercury__map__foldl2_6_p_2((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, (MR_Word) &transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, Var_21, ProcTable_16, ((MR_Box) (STATE_VARIABLE_First_0_17)), &conv2_STATE_VARIABLE_First_18, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_20);
    *STATE_VARIABLE_First_18 = ((MR_Word) conv2_STATE_VARIABLE_First_18);
  }
}

static void MR_CALL 
transform_hlds__intermod__maybe_write_pragma_exceptions_for_proc_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word OrderPredInfo_10,
  MR_Integer ProcId_11,
  MR_Word ProcInfo_12,
  MR_Word STATE_VARIABLE_First_0_35,
  MR_Word * STATE_VARIABLE_First_36)
{
  {
    MR_bool succeeded;
    MR_String PredName_15 = ((MR_String) (MR_hl_field(MR_mktag(0), OrderPredInfo_10, (MR_Integer) 0)));
    MR_Integer PredArity_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), OrderPredInfo_10, (MR_Integer) 1)));
    MR_Word PredOrFunc_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), OrderPredInfo_10, (MR_Integer) 2)));
    MR_Word PredId_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), OrderPredInfo_10, (MR_Integer) 3)));
    MR_Word PredInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), OrderPredInfo_10, (MR_Integer) 4)));
    MR_Word ProcExceptionInfo_27;
    MR_Word TypeSpecInfo_20;
    MR_Word TypeSpecForcePreds_22;
    MR_Word Markers_25;
    MR_Word MaybeProcExceptionInfo_26;
    MR_Word Var_21;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word TypeCtorInfo_44_44;
    MR_Word Var_39;
    MR_Word Var_40;

    succeeded = hlds__hlds_pred__proc_info_is_valid_mode_1_p_0(ProcInfo_12);
    if (succeeded)
    {
      succeeded = hlds__hlds_pred__procedure_is_exported_3_p_0(ModuleInfo_9, PredInfo_19, ProcId_11);
      if (succeeded)
      {
        succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(PredInfo_19);
        succeeded = !(succeeded);
        if (succeeded)
        {
          hlds__hlds_module__module_info_get_type_spec_info_2_p_0(ModuleInfo_9, &TypeSpecInfo_20);
          Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeSpecInfo_20, (MR_Integer) 0)));
          TypeSpecForcePreds_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeSpecInfo_20, (MR_Integer) 1)));
          Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeSpecInfo_20, (MR_Integer) 2)));
          Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeSpecInfo_20, (MR_Integer) 3)));
          TypeCtorInfo_44_44 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
          succeeded = mercury__set__member_2_p_0(TypeCtorInfo_44_44, ((MR_Box) (PredId_18)), TypeSpecForcePreds_22);
          succeeded = !(succeeded);
          if (succeeded)
          {
            hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_19, &Markers_25);
            Var_39 = (MR_Integer) 12;
            succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_25, Var_39);
            succeeded = !(succeeded);
            if (succeeded)
            {
              Var_40 = (MR_Integer) 13;
              succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_25, Var_40);
              succeeded = !(succeeded);
              if (succeeded)
              {
                hlds__hlds_pred__proc_info_get_exception_info_2_p_0(ProcInfo_12, &MaybeProcExceptionInfo_26);
                succeeded = ((MR_tag((MR_Word) MaybeProcExceptionInfo_26)) == (MR_mktag((MR_Integer) 1)));
                if (succeeded)
                  ProcExceptionInfo_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeProcExceptionInfo_26, (MR_Integer) 0)));
              }
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word ModuleName_28;
      MR_Word PredSymName_29;
      MR_Integer ModeNum_30;
      MR_Word PredNameArityPFMn_31;
      MR_Word Status_32;
      MR_Word ExceptionInfo_34;
      MR_Word Var_33;

      ModuleName_28 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_19);
      {
        PredSymName_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), PredSymName_29, 0) = ((MR_Box) (ModuleName_28));
        MR_hl_field(MR_mktag(1), PredSymName_29, 1) = ((MR_Box) (PredName_15));
      }
      hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_11, &ModeNum_30);
      {
        PredNameArityPFMn_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), PredNameArityPFMn_31, 0) = ((MR_Box) (PredSymName_29));
        MR_hl_field(MR_mktag(0), PredNameArityPFMn_31, 1) = ((MR_Box) (PredArity_16));
        MR_hl_field(MR_mktag(0), PredNameArityPFMn_31, 2) = ((MR_Box) (PredOrFunc_17));
        MR_hl_field(MR_mktag(0), PredNameArityPFMn_31, 3) = ((MR_Box) (ModeNum_30));
      }
      Status_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcExceptionInfo_27, (MR_Integer) 0)));
      Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcExceptionInfo_27, (MR_Integer) 1)));
      {
        ExceptionInfo_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ExceptionInfo_34, 0) = ((MR_Box) (PredNameArityPFMn_31));
        MR_hl_field(MR_mktag(0), ExceptionInfo_34, 1) = ((MR_Box) (Status_32));
      }
      switch (STATE_VARIABLE_First_0_35) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            mercury__io__nl_2_p_0();
            *STATE_VARIABLE_First_36 = (MR_Integer) 0;
          }
          break;
        case (MR_Integer) 0:
          *STATE_VARIABLE_First_36 = STATE_VARIABLE_First_0_35;
          break;
      }
      parse_tree__parse_tree_out_pragma__mercury_output_pragma_exceptions_3_p_0(ExceptionInfo_34);
    }
    else
      *STATE_VARIABLE_First_36 = STATE_VARIABLE_First_0_35;
  }
}

static void MR_CALL 
transform_hlds__intermod__write_pragma_exceptions_for_pred_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_First_36;

    transform_hlds__intermod__maybe_write_pragma_exceptions_for_proc_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Integer) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3), &conv0_STATE_VARIABLE_First_36);
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_First_36));
  }
}

static void MR_CALL 
transform_hlds__intermod__write_pragma_exceptions_for_pred_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word OrderPredInfo_8,
  MR_Word STATE_VARIABLE_First_0_17,
  MR_Word * STATE_VARIABLE_First_18)
{
  {
    MR_Word PredInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), OrderPredInfo_8, (MR_Integer) 4)));
    MR_Word ProcTable_16;
    MR_Word Var_21;
    MR_String Var_11 = ((MR_String) (MR_hl_field(MR_mktag(0), OrderPredInfo_8, (MR_Integer) 0)));
    MR_Integer Var_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), OrderPredInfo_8, (MR_Integer) 1)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), OrderPredInfo_8, (MR_Integer) 2)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), OrderPredInfo_8, (MR_Integer) 3)));
    MR_Box conv2_STATE_VARIABLE_First_18;
    MR_Box conv1_STATE_VARIABLE_IO_20;

    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_15, &ProcTable_16);
    {
      Var_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_4[3]));
      MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (transform_hlds__intermod__write_pragma_exceptions_for_pred_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (ModuleInfo_7));
      MR_hl_field(MR_mktag(0), Var_21, 4) = ((MR_Box) (OrderPredInfo_8));
    }
    mercury__map__foldl2_6_p_2((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, (MR_Word) &transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, Var_21, ProcTable_16, ((MR_Box) (STATE_VARIABLE_First_0_17)), &conv2_STATE_VARIABLE_First_18, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_20);
    *STATE_VARIABLE_First_18 = ((MR_Word) conv2_STATE_VARIABLE_First_18);
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_write_foreign_clause_10_p_0(
  MR_Word Procs_11,
  MR_Word PredOrFunc_12,
  MR_Word PragmaImpl_13,
  MR_Word Attributes_14,
  MR_Word Args_15,
  MR_Word ProgVarset0_16,
  MR_Word SymName_17,
  MR_Integer ProcId_18)
{
  {
    MR_Word ProcInfo_20;
    MR_Word MaybeArgModes_21;
    MR_Box conv0_ProcInfo_20;

    mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, Procs_11, ((MR_Box) (ProcId_18)), &conv0_ProcInfo_20);
    ProcInfo_20 = ((MR_Word) conv0_ProcInfo_20);
    hlds__hlds_pred__proc_info_get_maybe_declared_argmodes_2_p_0(ProcInfo_20, &MaybeArgModes_21);
    if ((MaybeArgModes_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.intermod", (MR_String) "predicate \140transform_hlds.intermod.intermod_write_foreign_clause\'/10", (MR_String) "no mode declaration");
        return;
      }
    }
    else
    {
      MR_Word ArgModes_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeArgModes_21, (MR_Integer) 0)));
      MR_Word ProgVarset_23;
      MR_Word PragmaVars_24;
      MR_Word InstVarset_25;
      MR_Word FPInfo_26;

      transform_hlds__intermod__get_pragma_foreign_code_vars_5_p_0(Args_15, ArgModes_22, ProgVarset0_16, &ProgVarset_23, &PragmaVars_24);
      hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(ProcInfo_20, &InstVarset_25);
      {
        FPInfo_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), FPInfo_26, 0) = ((MR_Box) (Attributes_14));
        MR_hl_field(MR_mktag(0), FPInfo_26, 1) = ((MR_Box) (SymName_17));
        MR_hl_field(MR_mktag(0), FPInfo_26, 2) = ((MR_Box) (PredOrFunc_12));
        MR_hl_field(MR_mktag(0), FPInfo_26, 3) = ((MR_Box) (PragmaVars_24));
        MR_hl_field(MR_mktag(0), FPInfo_26, 4) = ((MR_Box) (ProgVarset_23));
        MR_hl_field(MR_mktag(0), FPInfo_26, 5) = ((MR_Box) (InstVarset_25));
        MR_hl_field(MR_mktag(0), FPInfo_26, 6) = ((MR_Box) (PragmaImpl_13));
      }
      parse_tree__parse_tree_out_pragma__mercury_output_pragma_foreign_proc_4_p_0((MR_Integer) 0, FPInfo_26);
    }
  }
}

static void MR_CALL 
transform_hlds__intermod__get_pragma_foreign_code_vars_5_p_0(
  MR_Word Args_6,
  MR_Word Modes_7,
  MR_Word STATE_VARIABLE_VarSet_0_26,
  MR_Word * STATE_VARIABLE_VarSet_27,
  MR_Word * PragmaVars_9)
{
  if ((Args_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    if ((Modes_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *PragmaVars_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *STATE_VARIABLE_VarSet_27 = STATE_VARIABLE_VarSet_0_26;
    }
    else
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.intermod", (MR_String) "predicate \140transform_hlds.intermod.get_pragma_foreign_code_vars\'/5", (MR_String) "list length mismatch");
        return;
      }
    }
  else
  {
    MR_Word Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_6, (MR_Integer) 1)));
    MR_Word Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_6, (MR_Integer) 0)));

    if ((Modes_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.intermod", (MR_String) "predicate \140transform_hlds.intermod.get_pragma_foreign_code_vars\'/5", (MR_String) "list length mismatch");
        return;
      }
    }
    else
    {
      MR_Word Mode_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), Modes_7, (MR_Integer) 0)));
      MR_Word ModesTail_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), Modes_7, (MR_Integer) 1)));
      MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_40, (MR_Integer) 0)));
      MR_Word MaybeNameAndMode_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_40, (MR_Integer) 1)));
      MR_String Name_18;
      MR_Word PragmaVar_20;
      MR_Word PragmaVarsTail_21;
      MR_Word STATE_VARIABLE_VarSet_36_36;
      MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_40, (MR_Integer) 2)));
      MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_40, (MR_Integer) 3)));

      if ((MaybeNameAndMode_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        Name_18 = (MR_String) "_";
      else
      {
        MR_Word Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeNameAndMode_15, (MR_Integer) 0)));
        MR_Word _Mode2_19;

        Name_18 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_34, (MR_Integer) 0)));
        _Mode2_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_34, (MR_Integer) 1)));
      }
      {
        PragmaVar_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), PragmaVar_20, 0) = ((MR_Box) (Var_14));
        MR_hl_field(MR_mktag(0), PragmaVar_20, 1) = ((MR_Box) (Name_18));
        MR_hl_field(MR_mktag(0), PragmaVar_20, 2) = ((MR_Box) (Mode_12));
        MR_hl_field(MR_mktag(0), PragmaVar_20, 3) = ((MR_Box) ((MR_Integer) 0));
      }
      mercury__varset__name_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, Var_14, Name_18, STATE_VARIABLE_VarSet_0_26, &STATE_VARIABLE_VarSet_36_36);
      transform_hlds__intermod__get_pragma_foreign_code_vars_5_p_0(Var_39, ModesTail_13, STATE_VARIABLE_VarSet_36_36, STATE_VARIABLE_VarSet_27, &PragmaVarsTail_21);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *PragmaVars_9 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PragmaVar_20));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (PragmaVarsTail_21));
      }
    }
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_write_clause_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    transform_hlds__intermod__intermod_write_foreign_clause_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 8))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 9))), ((MR_Integer) wrapper_arg_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__intermod__intermod_write_clause_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__intermod__IntroducedFrom__pred__intermod_write_clause__2171__1_1_p_0(((MR_Word) wrapper_arg_1));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_write_clause_11_p_0(
  MR_Word OutInfo_12,
  MR_Word ModuleInfo_13,
  MR_Word PredId_14,
  MR_Word SymName_15,
  MR_Word PredOrFunc_16,
  MR_Word VarSet_17,
  MR_Word TypeQual_18,
  MR_Word HeadVars_19,
  MR_Word Clause0_20)
{
  {
    MR_bool succeeded;
    MR_Word ApplicableProcIds_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Clause0_20, (MR_Integer) 0)));
    MR_Word Goal_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Clause0_20, (MR_Integer) 1)));
    MR_Word ImplLang_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Clause0_20, (MR_Integer) 2)));
    MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), Clause0_20, (MR_Integer) 3)));
    MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), Clause0_20, (MR_Integer) 4)));

    if ((ImplLang_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word ClauseHeadVars_27;
      MR_Word Clause_28;
      MR_Word Var_76;

      transform_hlds__intermod__strip_headvar_unifications_4_p_0(HeadVars_19, Clause0_20, &ClauseHeadVars_27, &Clause_28);
      Var_76 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
      hlds__hlds_out__hlds_out_pred__write_clause_14_p_0(OutInfo_12, (MR_Integer) 0, ModuleInfo_13, PredId_14, PredOrFunc_16, Var_76, TypeQual_18, (MR_Integer) 1, (MR_Integer) 1, (MR_Integer) 1, ClauseHeadVars_27, Clause_28);
    }
    else
    {
      MR_Word PredInfo_30;
      MR_Word Procs_31;
      MR_Word Attributes_47;
      MR_Word Args_50;
      MR_Word PragmaCode_53;
      MR_Word Var_95;
      MR_Word Var_94;

      hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_13, PredId_14, &PredInfo_30);
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_30, &Procs_31);
      Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_23, (MR_Integer) 0)));
      Var_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_23, (MR_Integer) 1)));
      if (((((MR_tag((MR_Word) Var_95)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_95, (MR_Integer) 0)))) == (MR_Integer) 1))))
      {
        MR_Word Var_56;
        MR_Integer Var_57;
        MR_Word _ExtraArgs_82;
        MR_Word _MaybeTraceRuntimeCond_83;

        Attributes_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_95, (MR_Integer) 1)));
        Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_95, (MR_Integer) 2)));
        Var_57 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Var_95, (MR_Integer) 3)));
        Args_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_95, (MR_Integer) 4)));
        _ExtraArgs_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_95, (MR_Integer) 5)));
        _MaybeTraceRuntimeCond_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_95, (MR_Integer) 6)));
        PragmaCode_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_95, (MR_Integer) 7)));
        succeeded = MR_TRUE;
      }
      else
      if (((((MR_tag((MR_Word) Var_95)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_95, (MR_Integer) 0)))) == (MR_Integer) 2))))
      {
        MR_Word TypeCtorInfo_87_87;
        MR_Word TypeInfo_96_96;
        MR_Word Goals_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_95, (MR_Integer) 2)));
        MR_Word ForeignCodeGoal_44;
        MR_Word ForeignCodeGoalExpr_45;
        MR_Word Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_95, (MR_Integer) 1)));
        MR_Word Var_63;
        MR_Word Var_64;
        MR_Word Var_66;
        MR_Word Var_93;
        MR_Word Var_46;
        MR_Word Var_48;
        MR_Integer Var_49;
        MR_Word _ExtraArgs_51;
        MR_Word _MaybeTraceRuntimeCond_52;

        succeeded = (Var_62 == (MR_Integer) 0);
        if (succeeded)
        {
          Var_63 = (MR_Word) &transform_hlds__intermod_scalar_common_2[20];
          Var_66 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          TypeCtorInfo_87_87 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
          mercury__list__filter_3_p_0(TypeCtorInfo_87_87, Var_63, Goals_32, &Var_64);
          succeeded = ((MR_tag((MR_Word) Var_64)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            ForeignCodeGoal_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_64, (MR_Integer) 0)));
            Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_64, (MR_Integer) 1)));
            TypeInfo_96_96 = (MR_Word) &transform_hlds__intermod_scalar_common_1[15];
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_96_96, ((MR_Box) (Var_66)), ((MR_Box) (Var_93)));
            if (succeeded)
            {
              ForeignCodeGoalExpr_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ForeignCodeGoal_44, (MR_Integer) 0)));
              Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ForeignCodeGoal_44, (MR_Integer) 1)));
              succeeded = ((((MR_tag((MR_Word) ForeignCodeGoalExpr_45)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ForeignCodeGoalExpr_45, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                Attributes_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), ForeignCodeGoalExpr_45, (MR_Integer) 1)));
                Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), ForeignCodeGoalExpr_45, (MR_Integer) 2)));
                Var_49 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ForeignCodeGoalExpr_45, (MR_Integer) 3)));
                Args_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), ForeignCodeGoalExpr_45, (MR_Integer) 4)));
                _ExtraArgs_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), ForeignCodeGoalExpr_45, (MR_Integer) 5)));
                _MaybeTraceRuntimeCond_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), ForeignCodeGoalExpr_45, (MR_Integer) 6)));
                PragmaCode_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), ForeignCodeGoalExpr_45, (MR_Integer) 7)));
              }
            }
          }
        }
      }
      else
        succeeded = MR_FALSE;
      if (succeeded)
        if ((ApplicableProcIds_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.intermod", (MR_String) "predicate \140transform_hlds.intermod.intermod_write_clause\'/11", (MR_String) "all_modes foreign_proc");
            return;
          }
        }
        else
        {
          MR_Word ProcIds_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), ApplicableProcIds_22, (MR_Integer) 0)));
          MR_Word Var_67;
          MR_Box conv0_STATE_VARIABLE_IO_60;

          {
            Var_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_67, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_12[0]));
            MR_hl_field(MR_mktag(0), Var_67, 1) = ((MR_Box) (transform_hlds__intermod__intermod_write_clause_11_p_0_2));
            MR_hl_field(MR_mktag(0), Var_67, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
            MR_hl_field(MR_mktag(0), Var_67, 3) = ((MR_Box) (Procs_31));
            MR_hl_field(MR_mktag(0), Var_67, 4) = ((MR_Box) (PredOrFunc_16));
            MR_hl_field(MR_mktag(0), Var_67, 5) = ((MR_Box) (PragmaCode_53));
            MR_hl_field(MR_mktag(0), Var_67, 6) = ((MR_Box) (Attributes_47));
            MR_hl_field(MR_mktag(0), Var_67, 7) = ((MR_Box) (Args_50));
            MR_hl_field(MR_mktag(0), Var_67, 8) = ((MR_Box) (VarSet_17));
            MR_hl_field(MR_mktag(0), Var_67, 9) = ((MR_Box) (SymName_15));
          }
          mercury__list__foldl_4_p_2((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, Var_67, ProcIds_58, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_60);
        }
      else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.intermod", (MR_String) "predicate \140transform_hlds.intermod.intermod_write_clause\'/11", (MR_String) "did not find foreign_proc");
          return;
        }
      }
    }
  }
}

static void MR_CALL 
transform_hlds__intermod__strip_headvar_unifications_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_24;

    transform_hlds__intermod__IntroducedFrom__pred__strip_headvar_unifications__2230__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), &conv0_LambdaHeadVar__2_24);
    *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_24));
  }
}

static void MR_CALL 
transform_hlds__intermod__strip_headvar_unifications_4_p_0(
  MR_Word HeadVars_5,
  MR_Word Clause0_6,
  MR_Word * HeadTerms_7,
  MR_Word * Clause_8)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_36_36;
    MR_Word TypeInfo_37_37;
    MR_Word Goal0_9;
    MR_Word GoalInfo0_11;
    MR_Word Goals0_12;
    MR_Word HeadVarMap0_13;
    MR_Word Var_10;
    MR_Word Goals_14;
    MR_Word HeadVarMap_15;

    Goal0_9 = hlds__hlds_clauses__clause_body_1_f_0(Clause0_6);
    Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_9, (MR_Integer) 0)));
    GoalInfo0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_9, (MR_Integer) 1)));
    hlds__hlds_goal__goal_to_conj_list_2_p_0(Goal0_9, &Goals0_12);
    TypeInfo_36_36 = (MR_Word) &transform_hlds__intermod_scalar_common_1[5];
    TypeInfo_37_37 = (MR_Word) &transform_hlds__intermod_scalar_common_1[6];
    mercury__map__init_1_p_0(TypeInfo_36_36, TypeInfo_37_37, &HeadVarMap0_13);
    succeeded = transform_hlds__intermod__strip_headvar_unifications_from_goal_list_6_p_0(Goals0_12, HeadVars_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &Goals_14, HeadVarMap0_13, &HeadVarMap_15);
    if (succeeded)
    {
      MR_Word Goal_20;
      MR_Word Var_22;
      MR_Word Var_31;
      MR_Word Var_33;
      MR_Word Var_34;
      MR_Word Var_35;
      MR_Word Var_32;

      {
        Var_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_3[7]));
        MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) (transform_hlds__intermod__strip_headvar_unifications_4_p_0_1));
        MR_hl_field(MR_mktag(0), Var_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_22, 3) = ((MR_Box) (Clause0_6));
        MR_hl_field(MR_mktag(0), Var_22, 4) = ((MR_Box) (HeadVarMap_15));
      }
      mercury__list__map_3_p_0(TypeInfo_36_36, TypeInfo_37_37, Var_22, HeadVars_5, HeadTerms_7);
      hlds__hlds_goal__conj_list_to_goal_3_p_0(Goals_14, GoalInfo0_11, &Goal_20);
      Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), Clause0_6, (MR_Integer) 0)));
      Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), Clause0_6, (MR_Integer) 1)));
      Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), Clause0_6, (MR_Integer) 2)));
      Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), Clause0_6, (MR_Integer) 3)));
      Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), Clause0_6, (MR_Integer) 4)));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        *Clause_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_31));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Goal_20));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_33));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_34));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_35));
      }
    }
    else
    {
      mercury__term__var_list_to_term_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, HeadVars_5, HeadTerms_7);
      *Clause_8 = Clause0_6;
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__intermod__strip_headvar_unifications_from_goal_list_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVars_2,
  MR_Word HeadVar__3_3,
  MR_Word * Goals_4,
  MR_Word STATE_VARIABLE_HeadVarMap_0_5,
  MR_Word * STATE_VARIABLE_HeadVarMap_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      mercury__list__reverse_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, HeadVar__3_3, Goals_4);
      *STATE_VARIABLE_HeadVarMap_6 = STATE_VARIABLE_HeadVarMap_0_5;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word Goal_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Goals0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word RevGoals1_49;
      MR_Word STATE_VARIABLE_HeadVarMap_60_60;
      MR_Word LHSVar_19;
      MR_Word RHSTerm_27;
      MR_Word TypeInfo_63_63;
      MR_Word RHS_20;
      MR_Word Context_25;
      MR_Word Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_13, (MR_Integer) 0)));
      MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_13, (MR_Integer) 1)));
      MR_Word Var_21;
      MR_Word Var_22;
      MR_Word Var_23;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_HeadVarMap_0_5;

      succeeded = ((MR_tag((MR_Word) Var_52)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        LHSVar_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_52, (MR_Integer) 0)));
        RHS_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_52, (MR_Integer) 1)));
        Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_52, (MR_Integer) 2)));
        Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_52, (MR_Integer) 3)));
        Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_52, (MR_Integer) 4)));
        TypeInfo_63_63 = (MR_Word) &transform_hlds__intermod_scalar_common_1[5];
        succeeded = mercury__list__member_2_p_0(TypeInfo_63_63, ((MR_Box) (LHSVar_19)), HeadVars_2);
        if (succeeded)
        {
          mercury__term__context_init_1_p_0(&Context_25);
          if (((MR_tag((MR_Word) RHS_20)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Word ConsId_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), RHS_20, (MR_Integer) 0)));
            MR_Word Args_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), RHS_20, (MR_Integer) 2)));
            MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), RHS_20, (MR_Integer) 1)));

            switch (MR_tag((MR_Word) ConsId_28)) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_28, (MR_Integer) 0)))) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word TypeCtorInfo_66_66 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                      MR_Word SymName_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsId_28, (MR_Integer) 1)));
                      MR_Word ArgTerms_39;
                      MR_Integer Var_37 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsId_28, (MR_Integer) 2)));
                      MR_Word Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsId_28, (MR_Integer) 3)));

                      mercury__term__var_list_to_term_list_2_p_0(TypeCtorInfo_66_66, Args_30, &ArgTerms_39);
                      parse_tree__prog_util__construct_qualified_term_3_p_0(TypeCtorInfo_66_66, SymName_36, ArgTerms_39, &RHSTerm_27);
                      succeeded = MR_TRUE;
                    }
                    break;
                  case (MR_Integer) 5:
                    {
                      MR_Integer Int_31 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsId_28, (MR_Integer) 1)));

                      RHSTerm_27 = mercury__term__int_to_decimal_term_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, Int_31, Context_25);
                      succeeded = MR_TRUE;
                    }
                    break;
                  case (MR_Integer) 6:
                    {
                      MR_Unsigned UInt_32 = ((MR_Unsigned) (MR_hl_field(MR_mktag(3), ConsId_28, (MR_Integer) 1)));

                      RHSTerm_27 = mercury__term__uint_to_decimal_term_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, UInt_32, Context_25);
                      succeeded = MR_TRUE;
                    }
                    break;
                  case (MR_Integer) 13:
                    {
                      MR_Float Float_33 = MR_unbox_float((MR_hl_field(MR_mktag(3), ConsId_28, (MR_Integer) 1)));
                      MR_Word Var_58;

                      {
                        Var_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), Var_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                        MR_hl_field(MR_mktag(3), Var_58, 1) = MR_box_float(Float_33);
                      }
                      {
                        RHSTerm_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), RHSTerm_27, 0) = ((MR_Box) (Var_58));
                        MR_hl_field(MR_mktag(0), RHSTerm_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        MR_hl_field(MR_mktag(0), RHSTerm_27, 2) = ((MR_Box) (Context_25));
                      }
                      succeeded = MR_TRUE;
                    }
                    break;
                  case (MR_Integer) 14:
                    {
                      MR_Char Char_34 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_28, (MR_Integer) 1)));
                      MR_Word Var_55;
                      MR_String Var_56;

                      Var_56 = mercury__string__from_char_1_f_0(Char_34);
                      {
                        Var_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Var_55, 0) = ((MR_Box) (Var_56));
                      }
                      {
                        RHSTerm_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), RHSTerm_27, 0) = ((MR_Box) (Var_55));
                        MR_hl_field(MR_mktag(0), RHSTerm_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        MR_hl_field(MR_mktag(0), RHSTerm_27, 2) = ((MR_Box) (Context_25));
                      }
                      succeeded = MR_TRUE;
                    }
                    break;
                  case (MR_Integer) 15:
                    {
                      MR_String String_35 = ((MR_String) (MR_hl_field(MR_mktag(3), ConsId_28, (MR_Integer) 1)));
                      MR_Word Var_53;

                      {
                        Var_53 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(2), Var_53, 0) = ((MR_Box) (String_35));
                      }
                      {
                        RHSTerm_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), RHSTerm_27, 0) = ((MR_Box) (Var_53));
                        MR_hl_field(MR_mktag(0), RHSTerm_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        MR_hl_field(MR_mktag(0), RHSTerm_27, 2) = ((MR_Box) (Context_25));
                      }
                      succeeded = MR_TRUE;
                    }
                    break;
                }
                break;
            }
          }
          else
          if (((MR_tag((MR_Word) RHS_20)) == (MR_mktag((MR_Integer) 0))))
          {
            MR_Word RHSVar_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), RHS_20, (MR_Integer) 0)));

            {
              RHSTerm_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), RHSTerm_27, 0) = ((MR_Box) (RHSVar_26));
              MR_hl_field(MR_mktag(1), RHSTerm_27, 1) = ((MR_Box) (Context_25));
            }
            succeeded = MR_TRUE;
          }
          else
            succeeded = MR_FALSE;
        }
      }
      if (succeeded)
      {
        succeeded = mercury__map__insert_4_p_0((MR_Word) &transform_hlds__intermod_scalar_common_1[5], (MR_Word) &transform_hlds__intermod_scalar_common_1[6], ((MR_Box) (LHSVar_19)), ((MR_Box) (RHSTerm_27)), STATE_VARIABLE_HeadVarMap_0_5, &STATE_VARIABLE_HeadVarMap_60_60);
        if (succeeded)
        {
          RevGoals1_49 = HeadVar__3_3;
          succeeded = MR_TRUE;
        }
      }
      else
      {
        {
          RevGoals1_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), RevGoals1_49, 0) = ((MR_Box) (Goal_13));
          MR_hl_field(MR_mktag(1), RevGoals1_49, 1) = ((MR_Box) (HeadVar__3_3));
        }
        STATE_VARIABLE_HeadVarMap_60_60 = STATE_VARIABLE_HeadVarMap_0_5;
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        // direct tailcall eliminated
        next_value_of_HeadVar__1_1 = Goals0_14;
        next_value_of_HeadVar__3_3 = RevGoals1_49;
        next_value_of_STATE_VARIABLE_HeadVarMap_0_5 = STATE_VARIABLE_HeadVarMap_60_60;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        STATE_VARIABLE_HeadVarMap_0_5 = next_value_of_STATE_VARIABLE_HeadVarMap_0_5;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_write_foreign_import_3_p_0(
  MR_Word ForeignImport_4)
{
  {
    MR_Word FIMInfo_6 = (MR_Word) ForeignImport_4;

    parse_tree__parse_tree_out_pragma__mercury_output_pragma_foreign_import_module_3_p_0(FIMInfo_6);
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_write_instance_4_p_0(
  MR_Word OutInfo_5,
  MR_Word HeadVar__2_2)
{
  {
    MR_Word ClassId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
    MR_Word InstanceDefn_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
    MR_Word ModuleName_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_7, (MR_Integer) 0)));
    MR_Word Types_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_7, (MR_Integer) 1)));
    MR_Word OriginalTypes_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_7, (MR_Integer) 2)));
    MR_Word Context_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_7, (MR_Integer) 4)));
    MR_Word Constraints_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_7, (MR_Integer) 5)));
    MR_Word Body_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_7, (MR_Integer) 6)));
    MR_Word TVarSet_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_7, (MR_Integer) 8)));
    MR_Word ClassName_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassId_6, (MR_Integer) 0)));
    MR_Word ItemInstance_21;
    MR_Word Item_22;
    MR_Word MercInfo_23;
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_7, (MR_Integer) 3)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_7, (MR_Integer) 7)));
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_7, (MR_Integer) 9)));
    MR_Integer Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ClassId_6, (MR_Integer) 1)));
    MR_String Var_28;
    MR_String Var_29;
    MR_Word Var_30;
    MR_Word Var_31;

    {
      ItemInstance_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ItemInstance_21, 0) = ((MR_Box) (ClassName_19));
      MR_hl_field(MR_mktag(0), ItemInstance_21, 1) = ((MR_Box) (Types_10));
      MR_hl_field(MR_mktag(0), ItemInstance_21, 2) = ((MR_Box) (OriginalTypes_11));
      MR_hl_field(MR_mktag(0), ItemInstance_21, 3) = ((MR_Box) (Constraints_14));
      MR_hl_field(MR_mktag(0), ItemInstance_21, 4) = ((MR_Box) (Body_15));
      MR_hl_field(MR_mktag(0), ItemInstance_21, 5) = ((MR_Box) (TVarSet_17));
      MR_hl_field(MR_mktag(0), ItemInstance_21, 6) = ((MR_Box) (ModuleName_9));
      MR_hl_field(MR_mktag(0), ItemInstance_21, 7) = ((MR_Box) (Context_13));
      MR_hl_field(MR_mktag(0), ItemInstance_21, 8) = ((MR_Box) ((MR_Integer) -1));
    }
    {
      Item_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Item_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(3), Item_22, 1) = ((MR_Box) (ItemInstance_21));
    }
    Var_28 = ((MR_String) (MR_hl_field(MR_mktag(0), OutInfo_5, (MR_Integer) 0)));
    Var_29 = ((MR_String) (MR_hl_field(MR_mktag(0), OutInfo_5, (MR_Integer) 1)));
    Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), OutInfo_5, (MR_Integer) 2)));
    Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), OutInfo_5, (MR_Integer) 3)));
    MercInfo_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), OutInfo_5, (MR_Integer) 4)));
    parse_tree__parse_tree_out__mercury_output_item_4_p_0(MercInfo_23, Item_22);
  }
}

static MR_Box MR_CALL 
transform_hlds__intermod__unmake_hlds_class_fundep_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_12;

    conv0_HeadVar__3_12 = transform_hlds__intermod__IntroducedFrom__func__unmake_hlds_class_fundep_arg_posns__1810__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_12));
    return wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
transform_hlds__intermod__unmake_hlds_class_fundep_2_f_0(
  MR_Word TVars_4,
  MR_Word HLDSFunDep_5)
{
  {
    MR_Word ParseTreeFunDep_6;
    MR_Word TypeInfo_10_17 = (MR_Word) &transform_hlds__intermod_scalar_common_1[4];
    MR_Word TypeInfo_10_27;
    MR_Word DomainArgPosns_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HLDSFunDep_5, (MR_Integer) 0)));
    MR_Word RangeArgPosns_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HLDSFunDep_5, (MR_Integer) 1)));
    MR_Word DomainTVars_9;
    MR_Word RangeTVars_10;
    MR_Word ArgTVarsSet_14;
    MR_Word Var_15;
    MR_Word ArgTVarsSet_24;

    {
      Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_8[3]));
      MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (transform_hlds__intermod__unmake_hlds_class_fundep_2_f_0_1));
      MR_hl_field(MR_mktag(0), Var_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_15, 3) = ((MR_Box) (TVars_4));
    }
    ArgTVarsSet_14 = mercury__set__map_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, TypeInfo_10_17, Var_15, DomainArgPosns_7);
    mercury__set__to_sorted_list_2_p_0(TypeInfo_10_17, ArgTVarsSet_14, &DomainTVars_9);
    TypeInfo_10_27 = (MR_Word) &transform_hlds__intermod_scalar_common_1[4];
    ArgTVarsSet_24 = mercury__set__map_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, TypeInfo_10_27, Var_15, RangeArgPosns_8);
    mercury__set__to_sorted_list_2_p_0(TypeInfo_10_27, ArgTVarsSet_24, &RangeTVars_10);
    {
      ParseTreeFunDep_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ParseTreeFunDep_6, 0) = ((MR_Box) (DomainTVars_9));
      MR_hl_field(MR_mktag(0), ParseTreeFunDep_6, 1) = ((MR_Box) (RangeTVars_10));
    }
    return ParseTreeFunDep_6;
  }
}

static MR_Box MR_CALL 
transform_hlds__intermod__intermod_write_class_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_ParseTreeFunDep_6;

    conv0_ParseTreeFunDep_6 = transform_hlds__intermod__unmake_hlds_class_fundep_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_ParseTreeFunDep_6));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_write_class_8_p_0(
  MR_Word OutInfo_9,
  MR_Word ModuleName_10,
  MR_Word ClassId_11,
  MR_Word ClassDefn_12,
  MR_Word STATE_VARIABLE_First_0_32,
  MR_Word * STATE_VARIABLE_First_33)
{
  {
    MR_bool succeeded;
    MR_Word TypeClassStatus_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_12, (MR_Integer) 0)));
    MR_Word Constraints_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_12, (MR_Integer) 1)));
    MR_Word HLDSFunDeps_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_12, (MR_Integer) 2)));
    MR_Word TVars_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_12, (MR_Integer) 4)));
    MR_Word Interface_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_12, (MR_Integer) 6)));
    MR_Word TVarSet_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_12, (MR_Integer) 8)));
    MR_Word Context_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_12, (MR_Integer) 9)));
    MR_Word QualifiedClassName_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassId_11, (MR_Integer) 0)));
    MR_Word _Ancestors_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_12, (MR_Integer) 3)));
    MR_Word _Kinds_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_12, (MR_Integer) 5)));
    MR_Word _HLDSClassInterface_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_12, (MR_Integer) 7)));
    MR_Integer Var_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ClassId_11, (MR_Integer) 1)));
    MR_Word Var_50;
    MR_Word OldStatus_52;
    MR_String Var_27;

    succeeded = ((MR_tag((MR_Word) QualifiedClassName_25)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), QualifiedClassName_25, (MR_Integer) 0)));
      Var_27 = ((MR_String) (MR_hl_field(MR_mktag(1), QualifiedClassName_25, (MR_Integer) 1)));
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_10, Var_50);
      if (succeeded)
      {
        OldStatus_52 = (MR_Word) TypeClassStatus_15;
        switch (MR_tag((MR_Word) OldStatus_52)) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            switch (MR_unmkbody(OldStatus_52)) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 4:
                succeeded = MR_TRUE;
                break;
              case (MR_Integer) 5:
                succeeded = MR_TRUE;
                break;
              case (MR_Integer) 7:
                succeeded = MR_TRUE;
                break;
              case (MR_Integer) 8:
                succeeded = MR_TRUE;
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Status_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), OldStatus_52, (MR_Integer) 0)));
              MR_Word Var_55;
              MR_Word Var_80;

              Var_55 = hlds__status__old_status_is_exported_1_f_0(Status_54);
              Var_80 = mercury__bool__not_1_f_0(Var_55);
              succeeded = (Var_80 == (MR_Integer) 1);
            }
            break;
        }
      }
    }
    if (succeeded)
    {
      MR_Word FunDeps_28;
      MR_Word ItemTypeClass_29;
      MR_Word Item_30;
      MR_Word MercInfo_31;
      MR_Word Var_39;
      MR_String Var_42;
      MR_String Var_43;
      MR_Word Var_44;
      MR_Word Var_45;

      switch (STATE_VARIABLE_First_0_32) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            mercury__io__nl_2_p_0();
            *STATE_VARIABLE_First_33 = (MR_Integer) 0;
          }
          break;
        case (MR_Integer) 0:
          *STATE_VARIABLE_First_33 = STATE_VARIABLE_First_0_32;
          break;
      }
      {
        Var_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_39, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_8[2]));
        MR_hl_field(MR_mktag(0), Var_39, 1) = ((MR_Box) (transform_hlds__intermod__intermod_write_class_8_p_0_1));
        MR_hl_field(MR_mktag(0), Var_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_39, 3) = ((MR_Box) (TVars_19));
      }
      FunDeps_28 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_fundep_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_fundep_0, Var_39, HLDSFunDeps_17);
      {
        ItemTypeClass_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ItemTypeClass_29, 0) = ((MR_Box) (QualifiedClassName_25));
        MR_hl_field(MR_mktag(0), ItemTypeClass_29, 1) = ((MR_Box) (TVars_19));
        MR_hl_field(MR_mktag(0), ItemTypeClass_29, 2) = ((MR_Box) (Constraints_16));
        MR_hl_field(MR_mktag(0), ItemTypeClass_29, 3) = ((MR_Box) (FunDeps_28));
        MR_hl_field(MR_mktag(0), ItemTypeClass_29, 4) = ((MR_Box) (Interface_21));
        MR_hl_field(MR_mktag(0), ItemTypeClass_29, 5) = ((MR_Box) (TVarSet_23));
        MR_hl_field(MR_mktag(0), ItemTypeClass_29, 6) = ((MR_Box) (Context_24));
        MR_hl_field(MR_mktag(0), ItemTypeClass_29, 7) = ((MR_Box) ((MR_Integer) -1));
      }
      {
        Item_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Item_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
        MR_hl_field(MR_mktag(3), Item_30, 1) = ((MR_Box) (ItemTypeClass_29));
      }
      Var_42 = ((MR_String) (MR_hl_field(MR_mktag(0), OutInfo_9, (MR_Integer) 0)));
      Var_43 = ((MR_String) (MR_hl_field(MR_mktag(0), OutInfo_9, (MR_Integer) 1)));
      Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), OutInfo_9, (MR_Integer) 2)));
      Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), OutInfo_9, (MR_Integer) 3)));
      MercInfo_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), OutInfo_9, (MR_Integer) 4)));
      parse_tree__parse_tree_out__mercury_output_item_4_p_0(MercInfo_31, Item_30);
    }
    else
      *STATE_VARIABLE_First_33 = STATE_VARIABLE_First_0_32;
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_write_mode_8_p_0(
  MR_Word OutInfo_9,
  MR_Word ModuleName_10,
  MR_Word ModeId_11,
  MR_Word ModeDefn_12,
  MR_Word STATE_VARIABLE_First_0_26,
  MR_Word * STATE_VARIABLE_First_27)
{
  {
    MR_bool succeeded;
    MR_Word SymName_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModeId_11, (MR_Integer) 0)));
    MR_Word Varset_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModeDefn_12, (MR_Integer) 0)));
    MR_Word Args_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModeDefn_12, (MR_Integer) 1)));
    MR_Word Mode_19;
    MR_Word Context_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModeDefn_12, (MR_Integer) 3)));
    MR_Word ModeStatus_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModeDefn_12, (MR_Integer) 4)));
    MR_Word Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModeDefn_12, (MR_Integer) 2)));
    MR_Integer _Arity_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ModeId_11, (MR_Integer) 1)));
    MR_Word Var_41;
    MR_Word InstModeStatus_44;
    MR_Word InstModeExport_47;
    MR_String Var_22;

    Mode_19 = (MR_Word) Var_30;
    succeeded = ((MR_tag((MR_Word) SymName_15)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), SymName_15, (MR_Integer) 0)));
      Var_22 = ((MR_String) (MR_hl_field(MR_mktag(1), SymName_15, (MR_Integer) 1)));
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_10, Var_41);
      if (succeeded)
      {
        InstModeStatus_44 = (MR_Word) ModeStatus_21;
        succeeded = ((MR_tag((MR_Word) InstModeStatus_44)) == (MR_mktag((MR_Integer) 0)));
        if (succeeded)
        {
          InstModeExport_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstModeStatus_44, (MR_Integer) 0)));
          switch (InstModeExport_47) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 0:
            case (MR_Integer) 1:
              succeeded = MR_TRUE;
              break;
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word ItemModeDefn_23;
      MR_Word Item_24;
      MR_Word MercInfo_25;
      MR_Word Var_34;
      MR_String Var_37;
      MR_String Var_38;
      MR_Word Var_39;
      MR_Word Var_40;

      switch (STATE_VARIABLE_First_0_26) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            mercury__io__nl_2_p_0();
            *STATE_VARIABLE_First_27 = (MR_Integer) 0;
          }
          break;
        case (MR_Integer) 0:
          *STATE_VARIABLE_First_27 = STATE_VARIABLE_First_0_26;
          break;
      }
      Var_34 = (MR_Word) Mode_19;
      {
        ItemModeDefn_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ItemModeDefn_23, 0) = ((MR_Box) (SymName_15));
        MR_hl_field(MR_mktag(0), ItemModeDefn_23, 1) = ((MR_Box) (Args_18));
        MR_hl_field(MR_mktag(0), ItemModeDefn_23, 2) = ((MR_Box) (Var_34));
        MR_hl_field(MR_mktag(0), ItemModeDefn_23, 3) = ((MR_Box) (Varset_17));
        MR_hl_field(MR_mktag(0), ItemModeDefn_23, 4) = ((MR_Box) (Context_20));
        MR_hl_field(MR_mktag(0), ItemModeDefn_23, 5) = ((MR_Box) ((MR_Integer) -1));
      }
      {
        Item_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Item_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), Item_24, 1) = ((MR_Box) (ItemModeDefn_23));
      }
      Var_37 = ((MR_String) (MR_hl_field(MR_mktag(0), OutInfo_9, (MR_Integer) 0)));
      Var_38 = ((MR_String) (MR_hl_field(MR_mktag(0), OutInfo_9, (MR_Integer) 1)));
      Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), OutInfo_9, (MR_Integer) 2)));
      Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), OutInfo_9, (MR_Integer) 3)));
      MercInfo_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), OutInfo_9, (MR_Integer) 4)));
      parse_tree__parse_tree_out__mercury_output_item_4_p_0(MercInfo_25, Item_24);
    }
    else
      *STATE_VARIABLE_First_27 = STATE_VARIABLE_First_0_26;
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_write_inst_8_p_0(
  MR_Word OutInfo_9,
  MR_Word ModuleName_10,
  MR_Word InstId_11,
  MR_Word InstDefn_12,
  MR_Word STATE_VARIABLE_First_0_32,
  MR_Word * STATE_VARIABLE_First_33)
{
  {
    MR_bool succeeded;
    MR_Word SymName_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstId_11, (MR_Integer) 0)));
    MR_Word Varset_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstDefn_12, (MR_Integer) 0)));
    MR_Word Args_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstDefn_12, (MR_Integer) 1)));
    MR_Word Body_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstDefn_12, (MR_Integer) 2)));
    MR_Word IFTC_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstDefn_12, (MR_Integer) 3)));
    MR_Word Context_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstDefn_12, (MR_Integer) 4)));
    MR_Word InstStatus_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstDefn_12, (MR_Integer) 5)));
    MR_Integer _Arity_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), InstId_11, (MR_Integer) 1)));
    MR_Word Var_45;
    MR_Word InstModeStatus_48;
    MR_Word InstModeExport_51;
    MR_String Var_23;

    succeeded = ((MR_tag((MR_Word) SymName_15)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), SymName_15, (MR_Integer) 0)));
      Var_23 = ((MR_String) (MR_hl_field(MR_mktag(1), SymName_15, (MR_Integer) 1)));
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_10, Var_45);
      if (succeeded)
      {
        InstModeStatus_48 = (MR_Word) InstStatus_22;
        succeeded = ((MR_tag((MR_Word) InstModeStatus_48)) == (MR_mktag((MR_Integer) 0)));
        if (succeeded)
        {
          InstModeExport_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstModeStatus_48, (MR_Integer) 0)));
          switch (InstModeExport_51) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 0:
            case (MR_Integer) 1:
              succeeded = MR_TRUE;
              break;
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word InstBody_25;
      MR_Word MaybeForTypeCtor_27;
      MR_Word ItemInstDefn_29;
      MR_Word Item_30;
      MR_Word MercInfo_31;
      MR_String Var_41;
      MR_String Var_42;
      MR_Word Var_43;
      MR_Word Var_44;

      switch (STATE_VARIABLE_First_0_32) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            mercury__io__nl_2_p_0();
            *STATE_VARIABLE_First_33 = (MR_Integer) 0;
          }
          break;
        case (MR_Integer) 0:
          *STATE_VARIABLE_First_33 = STATE_VARIABLE_First_0_32;
          break;
      }
      if ((Body_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        InstBody_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      else
      {
        MR_Word Inst2_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body_19, (MR_Integer) 0)));

        {
          InstBody_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), InstBody_25, 0) = ((MR_Box) (Inst2_24));
        }
      }
      switch (MR_tag((MR_Word) IFTC_20)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          MaybeForTypeCtor_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          break;
        case (MR_Integer) 1:
          {
            MR_Word ForTypeCtor_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), IFTC_20, (MR_Integer) 0)));

            {
              MaybeForTypeCtor_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), MaybeForTypeCtor_27, 0) = ((MR_Box) (ForTypeCtor_26));
            }
          }
          break;
        case (MR_Integer) 2:
          MaybeForTypeCtor_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          break;
      }
      {
        ItemInstDefn_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ItemInstDefn_29, 0) = ((MR_Box) (SymName_15));
        MR_hl_field(MR_mktag(0), ItemInstDefn_29, 1) = ((MR_Box) (Args_18));
        MR_hl_field(MR_mktag(0), ItemInstDefn_29, 2) = ((MR_Box) (MaybeForTypeCtor_27));
        MR_hl_field(MR_mktag(0), ItemInstDefn_29, 3) = ((MR_Box) (InstBody_25));
        MR_hl_field(MR_mktag(0), ItemInstDefn_29, 4) = ((MR_Box) (Varset_17));
        MR_hl_field(MR_mktag(0), ItemInstDefn_29, 5) = ((MR_Box) (Context_21));
        MR_hl_field(MR_mktag(0), ItemInstDefn_29, 6) = ((MR_Box) ((MR_Integer) -1));
      }
      Item_30 = (MR_Word) MR_mkword(MR_mktag(2), (MR_Word) ItemInstDefn_29);
      Var_41 = ((MR_String) (MR_hl_field(MR_mktag(0), OutInfo_9, (MR_Integer) 0)));
      Var_42 = ((MR_String) (MR_hl_field(MR_mktag(0), OutInfo_9, (MR_Integer) 1)));
      Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), OutInfo_9, (MR_Integer) 2)));
      Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), OutInfo_9, (MR_Integer) 3)));
      MercInfo_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), OutInfo_9, (MR_Integer) 4)));
      parse_tree__parse_tree_out__mercury_output_item_4_p_0(MercInfo_31, Item_30);
    }
    else
      *STATE_VARIABLE_First_33 = STATE_VARIABLE_First_0_32;
  }
}

static void MR_CALL 
transform_hlds__intermod__gather_foreign_enum_value_pair_4_p_0(
  MR_Word ConsId_5,
  MR_Word ConsTag_6,
  MR_Word STATE_VARIABLE_Values_0_14,
  MR_Word * STATE_VARIABLE_Values_15)
{
  {
    MR_bool succeeded = ((((MR_tag((MR_Word) ConsId_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_5, (MR_Integer) 0)))) == (MR_Integer) 2)));
    MR_Word SymName_10;
    MR_String ForeignTag_13;
    MR_Word Var_24;
    MR_Word SymName0_8;
    MR_Integer Var_16;
    MR_Word Var_9;
    MR_String ForeignTag0_12;
    MR_Word _ForeignLang_11;

    if (succeeded)
    {
      SymName0_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsId_5, (MR_Integer) 1)));
      Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsId_5, (MR_Integer) 2)));
      Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsId_5, (MR_Integer) 3)));
      succeeded = (Var_16 == (MR_Integer) 0);
    }
    if (succeeded)
      SymName_10 = SymName0_8;
    else
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.intermod", (MR_String) "predicate \140transform_hlds.intermod.gather_foreign_enum_value_pair\'/4", (MR_String) "expected enumeration constant");
        return;
      }
    }
    succeeded = ((((MR_tag((MR_Word) ConsTag_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_6, (MR_Integer) 0)))) == (MR_Integer) 1)));
    if (succeeded)
    {
      _ForeignLang_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_6, (MR_Integer) 1)));
      ForeignTag0_12 = ((MR_String) (MR_hl_field(MR_mktag(3), ConsTag_6, (MR_Integer) 2)));
      ForeignTag_13 = ForeignTag0_12;
    }
    else
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.intermod", (MR_String) "predicate \140transform_hlds.intermod.gather_foreign_enum_value_pair\'/4", (MR_String) "expected foreign tag");
        return;
      }
    }
    {
      Var_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (SymName_10));
      MR_hl_field(MR_mktag(0), Var_24, 1) = ((MR_Box) (ForeignTag_13));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Values_15 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Values_0_14));
    }
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_write_type_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Values_15;

    transform_hlds__intermod__gather_foreign_enum_value_pair_4_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3), &conv0_STATE_VARIABLE_Values_15);
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Values_15));
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_write_type_4_p_0(
  MR_Word OutInfo_5,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtor_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
    MR_Word TypeDefn_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
    MR_Word VarSet_9;
    MR_Word Args_10;
    MR_Word Body_11;
    MR_Word Context_12;
    MR_Word Name_13;
    MR_Word TypeBody_24;
    MR_Word MainItemTypeDefn_30;
    MR_Word MainItem_31;
    MR_Word MercInfo_32;
    MR_Integer _Arity_14;
    MR_String Var_116;
    MR_String Var_117;
    MR_Word Var_118;
    MR_Word Var_119;
    MR_Word MaybeC_34;
    MR_Word MaybeJava_35;
    MR_Word MaybeCSharp_36;
    MR_Word MaybeErlang_37;
    MR_Word ForeignTypeBody_33;
    MR_Word ReservedTag_66;
    MR_Word Var_128;
    MR_Word Var_129;
    MR_Word Var_130;
    MR_Word Var_131;
    MR_Word Var_132;
    MR_Word Var_133;
    MR_Word Var_134;
    MR_Word Var_135;
    MR_Word ConsTagVals_70;
    MR_Word Lang_78;
    MR_Word DuTypeKind_72;
    MR_Word Var_69;
    MR_Word Var_71;
    MR_Word Var_73;
    MR_Word Var_74;
    MR_Word Var_75;
    MR_Word Var_76;
    MR_Word Var_77;

    hlds__hlds_data__get_type_defn_tvarset_2_p_0(TypeDefn_7, &VarSet_9);
    hlds__hlds_data__get_type_defn_tparams_2_p_0(TypeDefn_7, &Args_10);
    hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_7, &Body_11);
    hlds__hlds_data__get_type_defn_context_2_p_0(TypeDefn_7, &Context_12);
    Name_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeCtor_6, (MR_Integer) 0)));
    _Arity_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), TypeCtor_6, (MR_Integer) 1)));
    switch (MR_tag((MR_Word) Body_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          TypeBody_24 = (MR_Word) MR_mkword(MR_mktag(3), &transform_hlds__intermod_scalar_common_1[16]);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Ctors_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body_11, (MR_Integer) 0)));
          MR_Word MaybeUserEqComp_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body_11, (MR_Integer) 4)));
          MR_Word MaybeDirectArgCtors_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body_11, (MR_Integer) 5)));
          MR_Word DetailsDu_25;
          MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body_11, (MR_Integer) 1)));
          MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body_11, (MR_Integer) 2)));
          MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body_11, (MR_Integer) 3)));
          MR_Word Var_21 = ((((MR_Word) (MR_hl_field(MR_mktag(1), Body_11, (MR_Integer) 6)))) & (MR_Integer) 1);
          MR_Word Var_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), Body_11, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body_11, (MR_Integer) 7)));

          {
            DetailsDu_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), DetailsDu_25, 0) = ((MR_Box) (Ctors_15));
            MR_hl_field(MR_mktag(0), DetailsDu_25, 1) = ((MR_Box) (MaybeUserEqComp_19));
            MR_hl_field(MR_mktag(0), DetailsDu_25, 2) = ((MR_Box) (MaybeDirectArgCtors_20));
          }
          TypeBody_24 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) DetailsDu_25);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word EqvType_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), Body_11, (MR_Integer) 0)));
          MR_Word Var_87 = (MR_Word) EqvType_26;

          {
            TypeBody_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), TypeBody_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), TypeBody_24, 1) = ((MR_Box) (Var_87));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Body_11, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word DetailsSolver_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), Body_11, (MR_Integer) 1)));

              TypeBody_24 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) DetailsSolver_29);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Details_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), Body_11, (MR_Integer) 1)));

              {
                TypeBody_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), TypeBody_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), TypeBody_24, 1) = ((MR_Box) (Details_27));
              }
            }
            break;
        }
        break;
    }
    {
      MainItemTypeDefn_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), MainItemTypeDefn_30, 0) = ((MR_Box) (Name_13));
      MR_hl_field(MR_mktag(0), MainItemTypeDefn_30, 1) = ((MR_Box) (Args_10));
      MR_hl_field(MR_mktag(0), MainItemTypeDefn_30, 2) = ((MR_Box) (TypeBody_24));
      MR_hl_field(MR_mktag(0), MainItemTypeDefn_30, 3) = ((MR_Box) (VarSet_9));
      MR_hl_field(MR_mktag(0), MainItemTypeDefn_30, 4) = ((MR_Box) (Context_12));
      MR_hl_field(MR_mktag(0), MainItemTypeDefn_30, 5) = ((MR_Box) ((MR_Integer) -1));
    }
    MainItem_31 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) MainItemTypeDefn_30);
    Var_116 = ((MR_String) (MR_hl_field(MR_mktag(0), OutInfo_5, (MR_Integer) 0)));
    Var_117 = ((MR_String) (MR_hl_field(MR_mktag(0), OutInfo_5, (MR_Integer) 1)));
    Var_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), OutInfo_5, (MR_Integer) 2)));
    Var_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), OutInfo_5, (MR_Integer) 3)));
    MercInfo_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), OutInfo_5, (MR_Integer) 4)));
    parse_tree__parse_tree_out__mercury_output_item_4_p_0(MercInfo_32, MainItem_31);
    if (((MR_tag((MR_Word) Body_11)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body_11, (MR_Integer) 7)));
      MR_Word Var_120 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body_11, (MR_Integer) 0)));
      MR_Word Var_121 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body_11, (MR_Integer) 1)));
      MR_Word Var_122 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body_11, (MR_Integer) 2)));
      MR_Word Var_123 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body_11, (MR_Integer) 3)));
      MR_Word Var_124 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body_11, (MR_Integer) 4)));
      MR_Word Var_125 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body_11, (MR_Integer) 5)));
      MR_Word Var_126 = ((((MR_Word) (MR_hl_field(MR_mktag(1), Body_11, (MR_Integer) 6)))) & (MR_Integer) 1);
      MR_Word Var_127 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), Body_11, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

      succeeded = ((MR_tag((MR_Word) Var_90)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
        ForeignTypeBody_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_90, (MR_Integer) 0)));
    }
    else
    if (((MR_tag((MR_Word) Body_11)) == (MR_mktag((MR_Integer) 0))))
    {
      ForeignTypeBody_33 = (MR_Word) MR_body(((MR_Word) Body_11), (MR_Integer) 0);
      succeeded = MR_TRUE;
    }
    else
      succeeded = MR_FALSE;
    if (succeeded)
    {
      MaybeC_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ForeignTypeBody_33, (MR_Integer) 0)));
      MaybeJava_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ForeignTypeBody_33, (MR_Integer) 1)));
      MaybeCSharp_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ForeignTypeBody_33, (MR_Integer) 2)));
      MaybeErlang_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ForeignTypeBody_33, (MR_Integer) 3)));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      if (!((MaybeC_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
      {
        MR_Word DataC_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeC_34, (MR_Integer) 0)));
        MR_Word CForeignType_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), DataC_38, (MR_Integer) 0)));
        MR_Word CMaybeUserEqComp_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), DataC_38, (MR_Integer) 1)));
        MR_Word AssertionsC_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), DataC_38, (MR_Integer) 2)));
        MR_Word CDetailsForeign_42;
        MR_Word CItemTypeDefn_43;
        MR_Word CItem_44;
        MR_Word Var_91;
        MR_Word Var_92;

        {
          Var_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_91, 0) = ((MR_Box) (CForeignType_39));
        }
        {
          CDetailsForeign_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), CDetailsForeign_42, 0) = ((MR_Box) (Var_91));
          MR_hl_field(MR_mktag(0), CDetailsForeign_42, 1) = ((MR_Box) (CMaybeUserEqComp_40));
          MR_hl_field(MR_mktag(0), CDetailsForeign_42, 2) = ((MR_Box) (AssertionsC_41));
        }
        Var_92 = (MR_Word) MR_mkword(MR_mktag(2), (MR_Word) CDetailsForeign_42);
        {
          CItemTypeDefn_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), CItemTypeDefn_43, 0) = ((MR_Box) (Name_13));
          MR_hl_field(MR_mktag(0), CItemTypeDefn_43, 1) = ((MR_Box) (Args_10));
          MR_hl_field(MR_mktag(0), CItemTypeDefn_43, 2) = ((MR_Box) (Var_92));
          MR_hl_field(MR_mktag(0), CItemTypeDefn_43, 3) = ((MR_Box) (VarSet_9));
          MR_hl_field(MR_mktag(0), CItemTypeDefn_43, 4) = ((MR_Box) (Context_12));
          MR_hl_field(MR_mktag(0), CItemTypeDefn_43, 5) = ((MR_Box) ((MR_Integer) -1));
        }
        CItem_44 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) CItemTypeDefn_43);
        parse_tree__parse_tree_out__mercury_output_item_4_p_0(MercInfo_32, CItem_44);
      }
      if (!((MaybeJava_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
      {
        MR_Word DataJava_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeJava_35, (MR_Integer) 0)));
        MR_Word JavaForeignType_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), DataJava_45, (MR_Integer) 0)));
        MR_Word JavaMaybeUserEqComp_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), DataJava_45, (MR_Integer) 1)));
        MR_Word AssertionsJava_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), DataJava_45, (MR_Integer) 2)));
        MR_Word JavaDetailsForeign_49;
        MR_Word JavaItemTypeDefn_50;
        MR_Word JavaItem_51;
        MR_Word Var_95;
        MR_Word Var_96;

        {
          Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_95, 0) = ((MR_Box) (JavaForeignType_46));
        }
        {
          JavaDetailsForeign_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), JavaDetailsForeign_49, 0) = ((MR_Box) (Var_95));
          MR_hl_field(MR_mktag(0), JavaDetailsForeign_49, 1) = ((MR_Box) (JavaMaybeUserEqComp_47));
          MR_hl_field(MR_mktag(0), JavaDetailsForeign_49, 2) = ((MR_Box) (AssertionsJava_48));
        }
        Var_96 = (MR_Word) MR_mkword(MR_mktag(2), (MR_Word) JavaDetailsForeign_49);
        {
          JavaItemTypeDefn_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), JavaItemTypeDefn_50, 0) = ((MR_Box) (Name_13));
          MR_hl_field(MR_mktag(0), JavaItemTypeDefn_50, 1) = ((MR_Box) (Args_10));
          MR_hl_field(MR_mktag(0), JavaItemTypeDefn_50, 2) = ((MR_Box) (Var_96));
          MR_hl_field(MR_mktag(0), JavaItemTypeDefn_50, 3) = ((MR_Box) (VarSet_9));
          MR_hl_field(MR_mktag(0), JavaItemTypeDefn_50, 4) = ((MR_Box) (Context_12));
          MR_hl_field(MR_mktag(0), JavaItemTypeDefn_50, 5) = ((MR_Box) ((MR_Integer) -1));
        }
        JavaItem_51 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) JavaItemTypeDefn_50);
        parse_tree__parse_tree_out__mercury_output_item_4_p_0(MercInfo_32, JavaItem_51);
      }
      if (!((MaybeCSharp_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
      {
        MR_Word DataCSharp_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeCSharp_36, (MR_Integer) 0)));
        MR_Word CSharpForeignType_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), DataCSharp_52, (MR_Integer) 0)));
        MR_Word CSharpMaybeUserEqComp_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), DataCSharp_52, (MR_Integer) 1)));
        MR_Word AssertionsCSharp_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), DataCSharp_52, (MR_Integer) 2)));
        MR_Word CSharpDetailsForeign_56;
        MR_Word CSharpItemTypeDefn_57;
        MR_Word CSharpItem_58;
        MR_Word Var_99;
        MR_Word Var_100;

        {
          Var_99 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_99, 0) = ((MR_Box) (CSharpForeignType_53));
        }
        {
          CSharpDetailsForeign_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), CSharpDetailsForeign_56, 0) = ((MR_Box) (Var_99));
          MR_hl_field(MR_mktag(0), CSharpDetailsForeign_56, 1) = ((MR_Box) (CSharpMaybeUserEqComp_54));
          MR_hl_field(MR_mktag(0), CSharpDetailsForeign_56, 2) = ((MR_Box) (AssertionsCSharp_55));
        }
        Var_100 = (MR_Word) MR_mkword(MR_mktag(2), (MR_Word) CSharpDetailsForeign_56);
        {
          CSharpItemTypeDefn_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), CSharpItemTypeDefn_57, 0) = ((MR_Box) (Name_13));
          MR_hl_field(MR_mktag(0), CSharpItemTypeDefn_57, 1) = ((MR_Box) (Args_10));
          MR_hl_field(MR_mktag(0), CSharpItemTypeDefn_57, 2) = ((MR_Box) (Var_100));
          MR_hl_field(MR_mktag(0), CSharpItemTypeDefn_57, 3) = ((MR_Box) (VarSet_9));
          MR_hl_field(MR_mktag(0), CSharpItemTypeDefn_57, 4) = ((MR_Box) (Context_12));
          MR_hl_field(MR_mktag(0), CSharpItemTypeDefn_57, 5) = ((MR_Box) ((MR_Integer) -1));
        }
        CSharpItem_58 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) CSharpItemTypeDefn_57);
        parse_tree__parse_tree_out__mercury_output_item_4_p_0(MercInfo_32, CSharpItem_58);
      }
      if (!((MaybeErlang_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
      {
        MR_Word DataErlang_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeErlang_37, (MR_Integer) 0)));
        MR_Word ErlangMaybeUserEqComp_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), DataErlang_59, (MR_Integer) 1)));
        MR_Word AssertionsErlang_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), DataErlang_59, (MR_Integer) 2)));
        MR_Word ErlangDetailsForeign_63;
        MR_Word ErlangItemTypeDefn_64;
        MR_Word ErlangItem_65;
        MR_Word Var_103;
        MR_Word Var_104;

        {
          Var_103 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_103, 0) = NULL;
        }
        {
          ErlangDetailsForeign_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ErlangDetailsForeign_63, 0) = ((MR_Box) (Var_103));
          MR_hl_field(MR_mktag(0), ErlangDetailsForeign_63, 1) = ((MR_Box) (ErlangMaybeUserEqComp_61));
          MR_hl_field(MR_mktag(0), ErlangDetailsForeign_63, 2) = ((MR_Box) (AssertionsErlang_62));
        }
        Var_104 = (MR_Word) MR_mkword(MR_mktag(2), (MR_Word) ErlangDetailsForeign_63);
        {
          ErlangItemTypeDefn_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ErlangItemTypeDefn_64, 0) = ((MR_Box) (Name_13));
          MR_hl_field(MR_mktag(0), ErlangItemTypeDefn_64, 1) = ((MR_Box) (Args_10));
          MR_hl_field(MR_mktag(0), ErlangItemTypeDefn_64, 2) = ((MR_Box) (Var_104));
          MR_hl_field(MR_mktag(0), ErlangItemTypeDefn_64, 3) = ((MR_Box) (VarSet_9));
          MR_hl_field(MR_mktag(0), ErlangItemTypeDefn_64, 4) = ((MR_Box) (Context_12));
          MR_hl_field(MR_mktag(0), ErlangItemTypeDefn_64, 5) = ((MR_Box) ((MR_Integer) -1));
        }
        ErlangItem_65 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ErlangItemTypeDefn_64);
        parse_tree__parse_tree_out__mercury_output_item_4_p_0(MercInfo_32, ErlangItem_65);
      }
    }
    else
    {
    }
    succeeded = ((MR_tag((MR_Word) Body_11)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      Var_128 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body_11, (MR_Integer) 0)));
      Var_129 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body_11, (MR_Integer) 1)));
      Var_130 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body_11, (MR_Integer) 2)));
      Var_131 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body_11, (MR_Integer) 3)));
      Var_132 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body_11, (MR_Integer) 4)));
      Var_133 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body_11, (MR_Integer) 5)));
      ReservedTag_66 = ((((MR_Word) (MR_hl_field(MR_mktag(1), Body_11, (MR_Integer) 6)))) & (MR_Integer) 1);
      Var_134 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), Body_11, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      Var_135 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body_11, (MR_Integer) 7)));
      succeeded = (ReservedTag_66 == (MR_Integer) 0);
    }
    if (succeeded)
    {
      MR_Word ReserveItemPragma_67;
      MR_Word ReserveItem_68;
      MR_Word Var_107;

      {
        Var_107 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_107, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 30));
        MR_hl_field(MR_mktag(3), Var_107, 1) = ((MR_Box) (TypeCtor_6));
      }
      {
        ReserveItemPragma_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ReserveItemPragma_67, 0) = ((MR_Box) (Var_107));
        MR_hl_field(MR_mktag(0), ReserveItemPragma_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), ReserveItemPragma_67, 2) = ((MR_Box) (Context_12));
        MR_hl_field(MR_mktag(0), ReserveItemPragma_67, 3) = ((MR_Box) ((MR_Integer) -1));
      }
      {
        ReserveItem_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ReserveItem_68, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(3), ReserveItem_68, 1) = ((MR_Box) (ReserveItemPragma_67));
      }
      parse_tree__parse_tree_out__mercury_output_item_4_p_0(MercInfo_32, ReserveItem_68);
    }
    else
    {
    }
    succeeded = ((MR_tag((MR_Word) Body_11)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body_11, (MR_Integer) 0)));
      ConsTagVals_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body_11, (MR_Integer) 1)));
      Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body_11, (MR_Integer) 2)));
      DuTypeKind_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body_11, (MR_Integer) 3)));
      Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body_11, (MR_Integer) 4)));
      Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body_11, (MR_Integer) 5)));
      Var_75 = ((((MR_Word) (MR_hl_field(MR_mktag(1), Body_11, (MR_Integer) 6)))) & (MR_Integer) 1);
      Var_76 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), Body_11, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body_11, (MR_Integer) 7)));
      succeeded = ((MR_tag((MR_Word) DuTypeKind_72)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
        Lang_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), DuTypeKind_72, (MR_Integer) 0)));
    }
    if (succeeded)
    {
      MR_Word ForeignEnumVals_79;
      MR_Word FEInfo_80;
      MR_Word ForeignPragma_81;
      MR_Word ForeignItemPragma_82;
      MR_Word ForeignItem_83;
      MR_Box conv1_ForeignEnumVals_79;

      mercury__map__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, (MR_Word) &transform_hlds__intermod_scalar_common_1[3], (MR_Word) &transform_hlds__intermod_scalar_common_2[19], ConsTagVals_70, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &conv1_ForeignEnumVals_79);
      ForeignEnumVals_79 = ((MR_Word) conv1_ForeignEnumVals_79);
      {
        FEInfo_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), FEInfo_80, 0) = ((MR_Box) (Lang_78));
        MR_hl_field(MR_mktag(0), FEInfo_80, 1) = ((MR_Box) (TypeCtor_6));
        MR_hl_field(MR_mktag(0), FEInfo_80, 2) = ((MR_Box) (ForeignEnumVals_79));
      }
      {
        ForeignPragma_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ForeignPragma_81, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(3), ForeignPragma_81, 1) = ((MR_Box) (FEInfo_80));
      }
      {
        ForeignItemPragma_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ForeignItemPragma_82, 0) = ((MR_Box) (ForeignPragma_81));
        MR_hl_field(MR_mktag(0), ForeignItemPragma_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), ForeignItemPragma_82, 2) = ((MR_Box) (Context_12));
        MR_hl_field(MR_mktag(0), ForeignItemPragma_82, 3) = ((MR_Box) ((MR_Integer) -1));
      }
      {
        ForeignItem_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ForeignItem_83, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(3), ForeignItem_83, 1) = ((MR_Box) (ForeignItemPragma_82));
      }
      parse_tree__parse_tree_out__mercury_output_item_4_p_0(MercInfo_32, ForeignItem_83);
    }
    else
    {
    }
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_write_use_module_3_p_0(
  MR_Word ModuleName_4)
{
  {
    mercury__io__write_string_3_p_0((MR_String) ":- use_module ");
    parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(ModuleName_4);
    mercury__io__write_string_3_p_0((MR_String) ".\n");
  }
}

static void MR_CALL 
transform_hlds__intermod__gather_opt_export_types_in_type_defn_4_p_0(
  MR_Word TypeCtor_5,
  MR_Word TypeDefn0_6,
  MR_Word STATE_VARIABLE_IntermodInfo_0_32,
  MR_Word * STATE_VARIABLE_IntermodInfo_33)
{
  {
    MR_bool succeeded;
    MR_Word ModuleInfo_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_32, (MR_Integer) 5)));
    MR_Word ModuleName_9;
    MR_Word Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_32, (MR_Integer) 0)));
    MR_Word Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_32, (MR_Integer) 1)));
    MR_Word Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_32, (MR_Integer) 2)));
    MR_Word Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_32, (MR_Integer) 3)));
    MR_Word Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_32, (MR_Integer) 4)));
    MR_Word Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_32, (MR_Integer) 6)));
    MR_Word TypeStatus_58;
    MR_Word Name_59;
    MR_Word Var_63;
    MR_Word OldStatus_65;
    MR_Integer _Arity_60;
    MR_String Var_61;

    hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_8, &ModuleName_9);
    hlds__hlds_data__get_type_defn_status_2_p_0(TypeDefn0_6, &TypeStatus_58);
    Name_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeCtor_5, (MR_Integer) 0)));
    _Arity_60 = ((MR_Integer) (MR_hl_field(MR_mktag(0), TypeCtor_5, (MR_Integer) 1)));
    succeeded = ((MR_tag((MR_Word) Name_59)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), Name_59, (MR_Integer) 0)));
      Var_61 = ((MR_String) (MR_hl_field(MR_mktag(1), Name_59, (MR_Integer) 1)));
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_9, Var_63);
      if (succeeded)
      {
        OldStatus_65 = (MR_Word) TypeStatus_58;
        switch (MR_tag((MR_Word) OldStatus_65)) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            switch (MR_unmkbody(OldStatus_65)) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 4:
                succeeded = MR_TRUE;
                break;
              case (MR_Integer) 5:
                succeeded = MR_TRUE;
                break;
              case (MR_Integer) 7:
                succeeded = MR_TRUE;
                break;
              case (MR_Integer) 8:
                succeeded = MR_TRUE;
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Status_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), OldStatus_65, (MR_Integer) 0)));
              MR_Word Var_68;
              MR_Word Var_109;

              Var_68 = hlds__status__old_status_is_exported_1_f_0(Status_67);
              Var_109 = mercury__bool__not_1_f_0(Var_68);
              succeeded = (Var_109 == (MR_Integer) 1);
            }
            break;
        }
      }
    }
    if (succeeded)
    {
      MR_Word TypeBody0_10;
      MR_Word TypeDefn_27;
      MR_Word Types0_31;
      MR_Word STATE_VARIABLE_IntermodInfo_38_38;
      MR_Word Var_40;
      MR_Word Var_42;

      hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn0_6, &TypeBody0_10);
      switch (MR_tag((MR_Word) TypeBody0_10)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word STATE_VARIABLE_IntermodInfo_34_34;
            MR_Word ForeignTypeBody0_43 = (MR_Word) MR_body(((MR_Word) TypeBody0_10), (MR_Integer) 0);
            MR_Word ForeignTypeBody_44;
            MR_Word TypeBody_45;
            MR_Word Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_32, (MR_Integer) 0)));
            MR_Word Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_32, (MR_Integer) 1)));
            MR_Word Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_32, (MR_Integer) 2)));
            MR_Word Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_32, (MR_Integer) 3)));
            MR_Word Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_32, (MR_Integer) 4)));
            MR_Word Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_32, (MR_Integer) 5)));
            MR_Word Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_32, (MR_Integer) 6)));

            {
              STATE_VARIABLE_IntermodInfo_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_34_34, 0) = ((MR_Box) (Var_86));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_34_34, 1) = ((MR_Box) (Var_87));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_34_34, 2) = ((MR_Box) (Var_88));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_34_34, 3) = ((MR_Box) (Var_89));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_34_34, 4) = ((MR_Box) (Var_90));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_34_34, 5) = ((MR_Box) (Var_91));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_34_34, 6) = ((MR_Box) ((MR_Integer) 1));
            }
            transform_hlds__intermod__resolve_foreign_type_body_overloading_6_p_0(ModuleInfo_8, TypeCtor_5, ForeignTypeBody0_43, &ForeignTypeBody_44, STATE_VARIABLE_IntermodInfo_34_34, &STATE_VARIABLE_IntermodInfo_38_38);
            TypeBody_45 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) ForeignTypeBody_44);
            hlds__hlds_data__set_type_defn_body_3_p_0(TypeBody_45, TypeDefn0_6, &TypeDefn_27);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Ctors_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody0_10, (MR_Integer) 0)));
            MR_Word Tags_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody0_10, (MR_Integer) 1)));
            MR_Word CheaperTagTest_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody0_10, (MR_Integer) 2)));
            MR_Word Enum_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody0_10, (MR_Integer) 3)));
            MR_Word MaybeUserEqComp0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody0_10, (MR_Integer) 4)));
            MR_Word MaybeDirectArgCtors_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody0_10, (MR_Integer) 5)));
            MR_Word ReservedTag_17 = ((((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody0_10, (MR_Integer) 6)))) & (MR_Integer) 1);
            MR_Word ReservedAddr_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody0_10, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
            MR_Word MaybeForeign0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody0_10, (MR_Integer) 7)));
            MR_Word Globals_20;
            MR_Word Target_21;
            MR_Word MaybeForeign_24;
            MR_Word MaybeUserEqComp_25;
            MR_Word TypeBody_26;
            MR_Word ForeignTypeBody0_22;
            MR_Word Var_36;
            MR_Word Var_46;

            hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_8, &Globals_20);
            libs__globals__get_target_2_p_0(Globals_20, &Target_21);
            succeeded = ((MR_tag((MR_Word) MaybeForeign0_19)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              ForeignTypeBody0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeForeign0_19, (MR_Integer) 0)));
              Var_36 = (MR_Integer) 1;
              backend_libs__foreign__have_foreign_type_for_backend_3_p_0(Target_21, ForeignTypeBody0_22, &Var_46);
              succeeded = (Var_36 == Var_46);
            }
            if (succeeded)
            {
              MR_Word ForeignTypeBody_23;
              MR_Word STATE_VARIABLE_IntermodInfo_37_37;
              MR_Word Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_32, (MR_Integer) 0)));
              MR_Word Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_32, (MR_Integer) 1)));
              MR_Word Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_32, (MR_Integer) 2)));
              MR_Word Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_32, (MR_Integer) 3)));
              MR_Word Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_32, (MR_Integer) 4)));
              MR_Word Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_32, (MR_Integer) 5)));
              MR_Word Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_32, (MR_Integer) 6)));

              {
                STATE_VARIABLE_IntermodInfo_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_37_37, 0) = ((MR_Box) (Var_74));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_37_37, 1) = ((MR_Box) (Var_75));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_37_37, 2) = ((MR_Box) (Var_76));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_37_37, 3) = ((MR_Box) (Var_77));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_37_37, 4) = ((MR_Box) (Var_78));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_37_37, 5) = ((MR_Box) (Var_79));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_37_37, 6) = ((MR_Box) ((MR_Integer) 1));
              }
              transform_hlds__intermod__resolve_foreign_type_body_overloading_6_p_0(ModuleInfo_8, TypeCtor_5, ForeignTypeBody0_22, &ForeignTypeBody_23, STATE_VARIABLE_IntermodInfo_37_37, &STATE_VARIABLE_IntermodInfo_38_38);
              {
                MaybeForeign_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MaybeForeign_24, 0) = ((MR_Box) (ForeignTypeBody_23));
              }
              MaybeUserEqComp_25 = MaybeUserEqComp0_15;
            }
            else
            {
              transform_hlds__intermod__resolve_unify_compare_overloading_6_p_0(ModuleInfo_8, TypeCtor_5, MaybeUserEqComp0_15, &MaybeUserEqComp_25, STATE_VARIABLE_IntermodInfo_0_32, &STATE_VARIABLE_IntermodInfo_38_38);
              MaybeForeign_24 = MaybeForeign0_19;
            }
            {
              TypeBody_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), TypeBody_26, 0) = ((MR_Box) (Ctors_11));
              MR_hl_field(MR_mktag(1), TypeBody_26, 1) = ((MR_Box) (Tags_12));
              MR_hl_field(MR_mktag(1), TypeBody_26, 2) = ((MR_Box) (CheaperTagTest_13));
              MR_hl_field(MR_mktag(1), TypeBody_26, 3) = ((MR_Box) (Enum_14));
              MR_hl_field(MR_mktag(1), TypeBody_26, 4) = ((MR_Box) (MaybeUserEqComp_25));
              MR_hl_field(MR_mktag(1), TypeBody_26, 5) = ((MR_Box) (MaybeDirectArgCtors_16));
              MR_hl_field(MR_mktag(1), TypeBody_26, 6) = ((MR_Box) ((ReservedTag_17 | ((ReservedAddr_18 << (MR_Integer) 1)))));
              MR_hl_field(MR_mktag(1), TypeBody_26, 7) = ((MR_Box) (MaybeForeign_24));
            }
            hlds__hlds_data__set_type_defn_body_3_p_0(TypeBody_26, TypeDefn0_6, &TypeDefn_27);
          }
          break;
        case (MR_Integer) 2:
          {
            TypeDefn_27 = TypeDefn0_6;
            STATE_VARIABLE_IntermodInfo_38_38 = STATE_VARIABLE_IntermodInfo_0_32;
          }
          break;
        case (MR_Integer) 3:
          {
            TypeDefn_27 = TypeDefn0_6;
            STATE_VARIABLE_IntermodInfo_38_38 = STATE_VARIABLE_IntermodInfo_0_32;
          }
          break;
      }
      transform_hlds__intermod__intermod_info_get_types_2_p_0(STATE_VARIABLE_IntermodInfo_38_38, &Types0_31);
      {
        Var_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (TypeCtor_5));
        MR_hl_field(MR_mktag(0), Var_42, 1) = ((MR_Box) (TypeDefn_27));
      }
      {
        Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (Var_42));
        MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (Types0_31));
      }
      transform_hlds__intermod__intermod_info_set_types_3_p_0(Var_40, STATE_VARIABLE_IntermodInfo_38_38, STATE_VARIABLE_IntermodInfo_33);
    }
    else
      *STATE_VARIABLE_IntermodInfo_33 = STATE_VARIABLE_IntermodInfo_0_32;
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_info_set_types_3_p_0(
  MR_Word Types_4,
  MR_Word STATE_VARIABLE_IntermodInfo_0_6,
  MR_Word * STATE_VARIABLE_IntermodInfo_7)
{
  {
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_6, (MR_Integer) 0)));
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_6, (MR_Integer) 1)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_6, (MR_Integer) 2)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_6, (MR_Integer) 3)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_6, (MR_Integer) 5)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_6, (MR_Integer) 6)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_6, (MR_Integer) 4)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_IntermodInfo_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Types_4));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_15));
    }
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_info_get_types_2_p_0(
  MR_Word IntermodInfo_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), IntermodInfo_3, (MR_Integer) 0)));
    MR_Word Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), IntermodInfo_3, (MR_Integer) 1)));
    MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), IntermodInfo_3, (MR_Integer) 2)));
    MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), IntermodInfo_3, (MR_Integer) 3)));
    MR_Word Var_9;
    MR_Word Var_10;

    *X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), IntermodInfo_3, (MR_Integer) 4)));
    Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), IntermodInfo_3, (MR_Integer) 5)));
    Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), IntermodInfo_3, (MR_Integer) 6)));
  }
}

static void MR_CALL 
transform_hlds__intermod__resolve_unify_compare_overloading_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word TypeCtor_8,
  MR_Word MaybeUnifyCompare0_9,
  MR_Word * MaybeUnifyCompare_10,
  MR_Word STATE_VARIABLE_IntermodInfo_0_17,
  MR_Word * STATE_VARIABLE_IntermodInfo_18)
{
  {
    MR_bool succeeded;

    if ((MaybeUnifyCompare0_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *MaybeUnifyCompare_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *STATE_VARIABLE_IntermodInfo_18 = STATE_VARIABLE_IntermodInfo_0_17;
    }
    else
    {
      MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeUnifyCompare0_9, (MR_Integer) 0)));

      if (((MR_tag((MR_Word) Var_27)) == (MR_mktag((MR_Integer) 1))))
      {
        *MaybeUnifyCompare_10 = MaybeUnifyCompare0_9;
        *STATE_VARIABLE_IntermodInfo_18 = STATE_VARIABLE_IntermodInfo_0_17;
      }
      else
      {
        MR_Word MaybeUserEq0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_27, (MR_Integer) 0)));
        MR_Word MaybeUserCompare0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_27, (MR_Integer) 1)));
        MR_Word MaybeUserEq_15;
        MR_Word MaybeUserCompare_16;
        MR_Word STATE_VARIABLE_IntermodInfo_21_21;
        MR_Word Var_24;

        if ((MaybeUserEq0_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          MaybeUserEq_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          STATE_VARIABLE_IntermodInfo_21_21 = STATE_VARIABLE_IntermodInfo_0_17;
        }
        else
        {
          MR_Word Pred0_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeUserEq0_13, (MR_Integer) 0)));
          MR_Word Pred_38;
          MR_Word SpecialPredMaps_40;
          MR_Word SpecialPredId_41;
          MR_Word SpecialPredInfo_42;
          MR_Word TVarSet_43;
          MR_Word ExistQVars_44;
          MR_Word ArgTypes_45;
          MR_Word ExternalTypeParams_46;
          MR_Word Markers0_47;
          MR_Word Markers_48;
          MR_Word Context_49;
          MR_Word UserEqPredId_50;
          MR_Word Var_62;

          hlds__hlds_module__module_info_get_special_pred_maps_2_p_0(ModuleInfo_7, &SpecialPredMaps_40);
          hlds__special_pred__lookup_special_pred_maps_4_p_0(SpecialPredMaps_40, (MR_Integer) 0, TypeCtor_8, &SpecialPredId_41);
          hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_7, SpecialPredId_41, &SpecialPredInfo_42);
          hlds__hlds_pred__pred_info_get_arg_types_4_p_0(SpecialPredInfo_42, &TVarSet_43, &ExistQVars_44, &ArgTypes_45);
          hlds__hlds_pred__pred_info_get_external_type_params_2_p_0(SpecialPredInfo_42, &ExternalTypeParams_46);
          hlds__hlds_pred__init_markers_1_p_0(&Markers0_47);
          hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 22, Markers0_47, &Markers_48);
          hlds__hlds_pred__pred_info_get_context_2_p_0(SpecialPredInfo_42, &Context_49);
          hlds__pred_table__resolve_pred_overloading_10_p_0(ModuleInfo_7, Markers_48, TVarSet_43, ExistQVars_44, ArgTypes_45, ExternalTypeParams_46, Context_49, Pred0_37, &Pred_38, &UserEqPredId_50);
          {
            MaybeUserEq_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeUserEq_15, 0) = ((MR_Box) (Pred_38));
          }
          Var_62 = hlds__hlds_pred__invalid_pred_id_0_f_0();
          succeeded = hlds__hlds_pred____Unify____pred_id_0_0(UserEqPredId_50, Var_62);
          if (succeeded)
            STATE_VARIABLE_IntermodInfo_21_21 = STATE_VARIABLE_IntermodInfo_0_17;
          else
          {
            MR_Word Var_64;

            transform_hlds__intermod__intermod_do_add_proc_4_p_0(UserEqPredId_50, &Var_64, STATE_VARIABLE_IntermodInfo_0_17, &STATE_VARIABLE_IntermodInfo_21_21);
          }
        }
        transform_hlds__intermod__resolve_user_special_pred_overloading_7_p_0(ModuleInfo_7, (MR_Integer) 2, TypeCtor_8, MaybeUserCompare0_14, &MaybeUserCompare_16, STATE_VARIABLE_IntermodInfo_21_21, STATE_VARIABLE_IntermodInfo_18);
        {
          Var_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (MaybeUserEq_15));
          MR_hl_field(MR_mktag(0), Var_24, 1) = ((MR_Box) (MaybeUserCompare_16));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeUnifyCompare_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_24));
        }
      }
    }
  }
}

static void MR_CALL 
transform_hlds__intermod__resolve_foreign_type_body_overloading_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word TypeCtor_8,
  MR_Word ForeignTypeBody0_9,
  MR_Word * ForeignTypeBody_10,
  MR_Word STATE_VARIABLE_IntermodInfo_0_22,
  MR_Word * STATE_VARIABLE_IntermodInfo_23)
{
  {
    MR_Word MaybeC0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ForeignTypeBody0_9, (MR_Integer) 0)));
    MR_Word MaybeJava0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ForeignTypeBody0_9, (MR_Integer) 1)));
    MR_Word MaybeCSharp0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ForeignTypeBody0_9, (MR_Integer) 2)));
    MR_Word MaybeErlang0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ForeignTypeBody0_9, (MR_Integer) 3)));
    MR_Word Globals_16;
    MR_Word Target_17;
    MR_Word MaybeC_18;
    MR_Word MaybeCSharp_19;
    MR_Word MaybeJava_20;
    MR_Word MaybeErlang_21;
    MR_Word STATE_VARIABLE_IntermodInfo_24_24;
    MR_Word STATE_VARIABLE_IntermodInfo_25_25;
    MR_Word STATE_VARIABLE_IntermodInfo_26_26;

    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_7, &Globals_16);
    libs__globals__get_target_2_p_0(Globals_16, &Target_17);
    switch (Target_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 3:
        transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_115_111_108_118_101_95_102_111_114_101_105_103_110_95_116_121_112_101_95_98_111_100_121_95_111_118_101_114_108_111_97_100_105_110_103_95_50_95_95_91_49_93_95_48_6_p_0(ModuleInfo_7, TypeCtor_8, MaybeC0_12, &MaybeC_18, STATE_VARIABLE_IntermodInfo_0_22, &STATE_VARIABLE_IntermodInfo_24_24);
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          MaybeC_18 = MaybeC0_12;
          STATE_VARIABLE_IntermodInfo_24_24 = STATE_VARIABLE_IntermodInfo_0_22;
        }
        break;
    }
    switch (Target_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 3:
      case (MR_Integer) 2:
        {
          MaybeCSharp_19 = MaybeCSharp0_14;
          STATE_VARIABLE_IntermodInfo_25_25 = STATE_VARIABLE_IntermodInfo_24_24;
        }
        break;
      case (MR_Integer) 1:
        transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_115_111_108_118_101_95_102_111_114_101_105_103_110_95_116_121_112_101_95_98_111_100_121_95_111_118_101_114_108_111_97_100_105_110_103_95_50_95_95_91_49_93_95_48_6_p_0(ModuleInfo_7, TypeCtor_8, MaybeCSharp0_14, &MaybeCSharp_19, STATE_VARIABLE_IntermodInfo_24_24, &STATE_VARIABLE_IntermodInfo_25_25);
        break;
    }
    switch (Target_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
      case (MR_Integer) 3:
        {
          MaybeJava_20 = MaybeJava0_13;
          STATE_VARIABLE_IntermodInfo_26_26 = STATE_VARIABLE_IntermodInfo_25_25;
        }
        break;
      case (MR_Integer) 2:
        transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_115_111_108_118_101_95_102_111_114_101_105_103_110_95_116_121_112_101_95_98_111_100_121_95_111_118_101_114_108_111_97_100_105_110_103_95_50_95_95_91_49_93_95_48_6_p_0(ModuleInfo_7, TypeCtor_8, MaybeJava0_13, &MaybeJava_20, STATE_VARIABLE_IntermodInfo_25_25, &STATE_VARIABLE_IntermodInfo_26_26);
        break;
    }
    switch (Target_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          MaybeErlang_21 = MaybeErlang0_15;
          *STATE_VARIABLE_IntermodInfo_23 = STATE_VARIABLE_IntermodInfo_26_26;
        }
        break;
      case (MR_Integer) 3:
        transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_115_111_108_118_101_95_102_111_114_101_105_103_110_95_116_121_112_101_95_98_111_100_121_95_111_118_101_114_108_111_97_100_105_110_103_95_50_95_95_91_49_93_95_48_6_p_0(ModuleInfo_7, TypeCtor_8, MaybeErlang0_15, &MaybeErlang_21, STATE_VARIABLE_IntermodInfo_26_26, STATE_VARIABLE_IntermodInfo_23);
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *ForeignTypeBody_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MaybeC_18));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MaybeJava_20));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MaybeCSharp_19));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (MaybeErlang_21));
    }
  }
}

static void MR_CALL 
transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_115_111_108_118_101_95_102_111_114_101_105_103_110_95_116_121_112_101_95_98_111_100_121_95_111_118_101_114_108_111_97_100_105_110_103_95_50_95_95_91_49_93_95_48_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word TypeCtor_8,
  MR_Word MaybeForeignTypeLangData0_9,
  MR_Word * MaybeForeignTypeLangData_10,
  MR_Word STATE_VARIABLE_IntermodInfo_0_16,
  MR_Word * STATE_VARIABLE_IntermodInfo_17)
{
  {
    MR_bool succeeded;

    if ((MaybeForeignTypeLangData0_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *MaybeForeignTypeLangData_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *STATE_VARIABLE_IntermodInfo_17 = STATE_VARIABLE_IntermodInfo_0_16;
    }
    else
    {
      MR_Box Body_12;
      MR_Word MaybeUserEqComp0_13;
      MR_Word Assertions_14;
      MR_Word MaybeUserEqComp_15;
      MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeForeignTypeLangData0_9, (MR_Integer) 0)));
      MR_Word Var_20;

      Body_12 = (MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 0));
      MaybeUserEqComp0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 1)));
      Assertions_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 2)));
      if ((MaybeUserEqComp0_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MaybeUserEqComp_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *STATE_VARIABLE_IntermodInfo_17 = STATE_VARIABLE_IntermodInfo_0_16;
      }
      else
      {
        MR_Word Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeUserEqComp0_13, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) Var_42)) == (MR_mktag((MR_Integer) 1))))
        {
          MaybeUserEqComp_15 = MaybeUserEqComp0_13;
          *STATE_VARIABLE_IntermodInfo_17 = STATE_VARIABLE_IntermodInfo_0_16;
        }
        else
        {
          MR_Word MaybeUserEq0_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_42, (MR_Integer) 0)));
          MR_Word MaybeUserCompare0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_42, (MR_Integer) 1)));
          MR_Word MaybeUserEq_32;
          MR_Word MaybeUserCompare_33;
          MR_Word STATE_VARIABLE_IntermodInfo_21_36;
          MR_Word Var_39;

          if ((MaybeUserEq0_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MaybeUserEq_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            STATE_VARIABLE_IntermodInfo_21_36 = STATE_VARIABLE_IntermodInfo_0_16;
          }
          else
          {
            MR_Word Pred0_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeUserEq0_30, (MR_Integer) 0)));
            MR_Word Pred_53;
            MR_Word SpecialPredMaps_55;
            MR_Word SpecialPredId_56;
            MR_Word SpecialPredInfo_57;
            MR_Word TVarSet_58;
            MR_Word ExistQVars_59;
            MR_Word ArgTypes_60;
            MR_Word ExternalTypeParams_61;
            MR_Word Markers0_62;
            MR_Word Markers_63;
            MR_Word Context_64;
            MR_Word UserEqPredId_65;
            MR_Word Var_77;

            hlds__hlds_module__module_info_get_special_pred_maps_2_p_0(ModuleInfo_7, &SpecialPredMaps_55);
            hlds__special_pred__lookup_special_pred_maps_4_p_0(SpecialPredMaps_55, (MR_Integer) 0, TypeCtor_8, &SpecialPredId_56);
            hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_7, SpecialPredId_56, &SpecialPredInfo_57);
            hlds__hlds_pred__pred_info_get_arg_types_4_p_0(SpecialPredInfo_57, &TVarSet_58, &ExistQVars_59, &ArgTypes_60);
            hlds__hlds_pred__pred_info_get_external_type_params_2_p_0(SpecialPredInfo_57, &ExternalTypeParams_61);
            hlds__hlds_pred__init_markers_1_p_0(&Markers0_62);
            hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 22, Markers0_62, &Markers_63);
            hlds__hlds_pred__pred_info_get_context_2_p_0(SpecialPredInfo_57, &Context_64);
            hlds__pred_table__resolve_pred_overloading_10_p_0(ModuleInfo_7, Markers_63, TVarSet_58, ExistQVars_59, ArgTypes_60, ExternalTypeParams_61, Context_64, Pred0_52, &Pred_53, &UserEqPredId_65);
            {
              MaybeUserEq_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), MaybeUserEq_32, 0) = ((MR_Box) (Pred_53));
            }
            Var_77 = hlds__hlds_pred__invalid_pred_id_0_f_0();
            succeeded = hlds__hlds_pred____Unify____pred_id_0_0(UserEqPredId_65, Var_77);
            if (succeeded)
              STATE_VARIABLE_IntermodInfo_21_36 = STATE_VARIABLE_IntermodInfo_0_16;
            else
            {
              MR_Word Var_79;

              transform_hlds__intermod__intermod_do_add_proc_4_p_0(UserEqPredId_65, &Var_79, STATE_VARIABLE_IntermodInfo_0_16, &STATE_VARIABLE_IntermodInfo_21_36);
            }
          }
          transform_hlds__intermod__resolve_user_special_pred_overloading_7_p_0(ModuleInfo_7, (MR_Integer) 2, TypeCtor_8, MaybeUserCompare0_31, &MaybeUserCompare_33, STATE_VARIABLE_IntermodInfo_21_36, STATE_VARIABLE_IntermodInfo_17);
          {
            Var_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_39, 0) = ((MR_Box) (MaybeUserEq_32));
            MR_hl_field(MR_mktag(0), Var_39, 1) = ((MR_Box) (MaybeUserCompare_33));
          }
          {
            MaybeUserEqComp_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeUserEqComp_15, 0) = ((MR_Box) (Var_39));
          }
        }
      }
      {
        Var_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_20, 0) = Body_12;
        MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) (MaybeUserEqComp_15));
        MR_hl_field(MR_mktag(0), Var_20, 2) = ((MR_Box) (Assertions_14));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeForeignTypeLangData_10 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_20));
      }
    }
  }
}

static void MR_CALL 
transform_hlds__intermod__resolve_user_special_pred_overloading_7_p_0(
  MR_Word ModuleInfo_1,
  MR_Word SpecialId_2,
  MR_Word TypeCtor_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_IntermodInfo_0_6,
  MR_Word * STATE_VARIABLE_IntermodInfo_7)
{
  {
    MR_bool succeeded;

    if ((HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *STATE_VARIABLE_IntermodInfo_7 = STATE_VARIABLE_IntermodInfo_0_6;
    }
    else
    {
      MR_Word Pred0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0)));
      MR_Word Pred_18;
      MR_Word SpecialPredMaps_20;
      MR_Word SpecialPredId_21;
      MR_Word SpecialPredInfo_22;
      MR_Word TVarSet_23;
      MR_Word ExistQVars_24;
      MR_Word ArgTypes_25;
      MR_Word ExternalTypeParams_26;
      MR_Word Markers0_27;
      MR_Word Markers_28;
      MR_Word Context_29;
      MR_Word UserEqPredId_30;
      MR_Word Var_42;

      hlds__hlds_module__module_info_get_special_pred_maps_2_p_0(ModuleInfo_1, &SpecialPredMaps_20);
      hlds__special_pred__lookup_special_pred_maps_4_p_0(SpecialPredMaps_20, SpecialId_2, TypeCtor_3, &SpecialPredId_21);
      hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_1, SpecialPredId_21, &SpecialPredInfo_22);
      hlds__hlds_pred__pred_info_get_arg_types_4_p_0(SpecialPredInfo_22, &TVarSet_23, &ExistQVars_24, &ArgTypes_25);
      hlds__hlds_pred__pred_info_get_external_type_params_2_p_0(SpecialPredInfo_22, &ExternalTypeParams_26);
      hlds__hlds_pred__init_markers_1_p_0(&Markers0_27);
      hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 22, Markers0_27, &Markers_28);
      hlds__hlds_pred__pred_info_get_context_2_p_0(SpecialPredInfo_22, &Context_29);
      hlds__pred_table__resolve_pred_overloading_10_p_0(ModuleInfo_1, Markers_28, TVarSet_23, ExistQVars_24, ArgTypes_25, ExternalTypeParams_26, Context_29, Pred0_17, &Pred_18, &UserEqPredId_30);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__5_5 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Pred_18));
      }
      Var_42 = hlds__hlds_pred__invalid_pred_id_0_f_0();
      succeeded = hlds__hlds_pred____Unify____pred_id_0_0(UserEqPredId_30, Var_42);
      if (succeeded)
        *STATE_VARIABLE_IntermodInfo_7 = STATE_VARIABLE_IntermodInfo_0_6;
      else
      {
        MR_Word Var_44;

        transform_hlds__intermod__intermod_do_add_proc_4_p_0(UserEqPredId_30, &Var_44, STATE_VARIABLE_IntermodInfo_0_6, STATE_VARIABLE_IntermodInfo_7);
      }
    }
  }
}

static void MR_CALL 
transform_hlds__intermod__qualify_instance_method_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word HeadVar__2_2,
  MR_Word * InstanceMethod_9,
  MR_Word PredIds0_10,
  MR_Word * PredIds_11)
{
  {
    MR_bool succeeded;
    MR_Word MethodCallPredId_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
    MR_Word InstanceMethod0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
    MR_Word MethodCallPredInfo_12;
    MR_Word MethodCallTVarSet_13;
    MR_Word MethodCallExistQTVars_14;
    MR_Word MethodCallArgTypes_15;
    MR_Word MethodCallExternalTypeParams_16;
    MR_Word PredOrFunc_17;
    MR_Word MethodName_18;
    MR_Word InstanceMethodDefn0_19;
    MR_Integer MethodArity_20;
    MR_Word MethodContext_21;
    MR_Word InstanceMethodDefn_26;

    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_6, MethodCallPredId_7, &MethodCallPredInfo_12);
    hlds__hlds_pred__pred_info_get_arg_types_4_p_0(MethodCallPredInfo_12, &MethodCallTVarSet_13, &MethodCallExistQTVars_14, &MethodCallArgTypes_15);
    hlds__hlds_pred__pred_info_get_external_type_params_2_p_0(MethodCallPredInfo_12, &MethodCallExternalTypeParams_16);
    PredOrFunc_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceMethod0_8, (MR_Integer) 0)));
    MethodName_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceMethod0_8, (MR_Integer) 1)));
    InstanceMethodDefn0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceMethod0_8, (MR_Integer) 2)));
    MethodArity_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), InstanceMethod0_8, (MR_Integer) 3)));
    MethodContext_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceMethod0_8, (MR_Integer) 4)));
    if (((MR_tag((MR_Word) InstanceMethodDefn0_19)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word PredId_33;

      PredId_33 = hlds__hlds_pred__invalid_pred_id_0_f_0();
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *PredIds_11 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PredId_33));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (PredIds0_10));
      }
      InstanceMethodDefn_26 = InstanceMethodDefn0_19;
    }
    else
    {
      MR_Word Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceMethodDefn0_19, (MR_Integer) 0)));

      switch (PredOrFunc_17) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word MaybePredId_23;
            MR_Word InstanceMethodName_24;

            succeeded = transform_hlds__intermod__find_func_matching_instance_method_10_p_0(ModuleInfo_6, Var_34, MethodArity_20, MethodCallTVarSet_13, MethodCallExistQTVars_14, MethodCallArgTypes_15, MethodCallExternalTypeParams_16, MethodContext_21, &MaybePredId_23, &InstanceMethodName_24);
            if (succeeded)
            {
              if ((MaybePredId_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                *PredIds_11 = PredIds0_10;
              else
              {
                MR_Word PredId_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybePredId_23, (MR_Integer) 0)));

                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *PredIds_11 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PredId_25));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (PredIds0_10));
                }
              }
              {
                InstanceMethodDefn_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), InstanceMethodDefn_26, 0) = ((MR_Box) (InstanceMethodName_24));
              }
            }
            else
            {
              MR_Word PredId_29;

              PredId_29 = hlds__hlds_pred__invalid_pred_id_0_f_0();
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *PredIds_11 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PredId_29));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (PredIds0_10));
              }
              InstanceMethodDefn_26 = InstanceMethodDefn0_19;
            }
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Word Markers_27;
            MR_Word InstanceMethodName_31;
            MR_Word PredId_32;

            hlds__hlds_pred__init_markers_1_p_0(&Markers_27);
            hlds__pred_table__resolve_pred_overloading_10_p_0(ModuleInfo_6, Markers_27, MethodCallTVarSet_13, MethodCallExistQTVars_14, MethodCallArgTypes_15, MethodCallExternalTypeParams_16, MethodContext_21, Var_34, &InstanceMethodName_31, &PredId_32);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *PredIds_11 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PredId_32));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (PredIds0_10));
            }
            {
              InstanceMethodDefn_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), InstanceMethodDefn_26, 0) = ((MR_Box) (InstanceMethodName_31));
            }
          }
          break;
      }
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      *InstanceMethod_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (PredOrFunc_17));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MethodName_18));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (InstanceMethodDefn_26));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (MethodArity_20));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (MethodContext_21));
    }
  }
}

static MR_Box MR_CALL 
transform_hlds__intermod__find_func_matching_instance_method_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv2_LambdaHeadVar__2_55;

    conv2_LambdaHeadVar__2_55 = transform_hlds__intermod__IntroducedFrom__func__find_func_matching_instance_method__1133__1_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv2_LambdaHeadVar__2_55));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
transform_hlds__intermod__find_func_matching_instance_method_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_LambdaHeadVar__2_51;

    conv1_LambdaHeadVar__2_51 = transform_hlds__intermod__IntroducedFrom__func__find_func_matching_instance_method__1120__1_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_51));
    return wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
transform_hlds__intermod__find_func_matching_instance_method_10_p_0(
  MR_Word ModuleInfo_11,
  MR_Word InstanceMethodName0_12,
  MR_Integer MethodArity_13,
  MR_Word MethodCallTVarSet_14,
  MR_Word MethodCallExistQTVars_15,
  MR_Word MethodCallArgTypes_16,
  MR_Word MethodCallExternalTypeParams_17,
  MR_Word MethodContext_18,
  MR_Word * MaybePredId_19,
  MR_Word * InstanceMethodName_20)
{
  {
    MR_bool succeeded;
    MR_Word CtorFieldTable_21;
    MR_Word TypeCtors0_25;
    MR_Word Ctors_32;
    MR_Word TypeCtors1_35;
    MR_Word TypeCtors_37;
    MR_Word PredicateTable_38;
    MR_Word PredIds_39;
    MR_Word FieldDefns_24;
    MR_Word TypeCtorInfo_79_79;
    MR_Word TypeInfo_80_80;
    MR_Word FieldName_23;
    MR_Integer Var_86;
    MR_Word Var_22;
    MR_Box conv0_FieldDefns_24;
    MR_Word MatchingConstructors_34;
    MR_Word ConsId_33;
    MR_Word Var_52;
    MR_Word PredId_42;
    MR_Word InstanceMethodFuncName_43;
    MR_Word Var_57;
    MR_Word Var_40;
    MR_Word Var_41;

    hlds__hlds_module__module_info_get_ctor_field_table_2_p_0(ModuleInfo_11, &CtorFieldTable_21);
    succeeded = hlds__hlds_pred__is_field_access_function_name_5_p_0(ModuleInfo_11, InstanceMethodName0_12, &Var_86, &Var_22, &FieldName_23);
    if (succeeded)
    {
      succeeded = (MethodArity_13 == Var_86);
      if (succeeded)
      {
        TypeCtorInfo_79_79 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
        TypeInfo_80_80 = (MR_Word) &transform_hlds__intermod_scalar_common_1[2];
        succeeded = mercury__map__search_3_p_0(TypeCtorInfo_79_79, TypeInfo_80_80, CtorFieldTable_21, ((MR_Box) (FieldName_23)), &conv0_FieldDefns_24);
        if (succeeded)
        {
          FieldDefns_24 = ((MR_Word) conv0_FieldDefns_24);
          succeeded = MR_TRUE;
        }
      }
    }
    if (succeeded)
    {
      TypeCtors0_25 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &transform_hlds__intermod_scalar_common_2[17], FieldDefns_24);
    }
    else
      TypeCtors0_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    hlds__hlds_module__module_info_get_cons_table_2_p_0(ModuleInfo_11, &Ctors_32);
    Var_52 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
    {
      ConsId_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ConsId_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), ConsId_33, 1) = ((MR_Box) (InstanceMethodName0_12));
      MR_hl_field(MR_mktag(3), ConsId_33, 2) = ((MR_Box) (MethodArity_13));
      MR_hl_field(MR_mktag(3), ConsId_33, 3) = ((MR_Box) (Var_52));
    }
    succeeded = hlds__hlds_data__search_cons_table_3_p_0(Ctors_32, ConsId_33, &MatchingConstructors_34);
    if (succeeded)
    {
      TypeCtors1_35 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_cons_defn_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &transform_hlds__intermod_scalar_common_2[18], MatchingConstructors_34);
    }
    else
      TypeCtors1_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    TypeCtors_37 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, TypeCtors0_25, TypeCtors1_35);
    hlds__hlds_module__module_info_get_predicate_table_2_p_0(ModuleInfo_11, &PredicateTable_38);
    hlds__pred_table__predicate_table_lookup_func_sym_arity_5_p_0(PredicateTable_38, (MR_Integer) 1, InstanceMethodName0_12, MethodArity_13, &PredIds_39);
    succeeded = ((MR_tag((MR_Word) PredIds_39)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), PredIds_39, (MR_Integer) 0)));
      Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), PredIds_39, (MR_Integer) 1)));
      Var_57 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      succeeded = hlds__pred_table__find_matching_pred_id_10_p_0(ModuleInfo_11, PredIds_39, MethodCallTVarSet_14, MethodCallExistQTVars_15, MethodCallArgTypes_16, MethodCallExternalTypeParams_17, Var_57, MethodContext_18, &PredId_42, &InstanceMethodFuncName_43);
    }
    if (succeeded)
    {
      succeeded = (TypeCtors_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (succeeded)
      {
        *InstanceMethodName_20 = InstanceMethodFuncName_43;
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *MaybePredId_19 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PredId_42));
        }
        succeeded = MR_TRUE;
      }
    }
    else
    {
      MR_Word TheTypeCtor_44;
      MR_Word Var_58;
      MR_Word TypeModule_45;
      MR_Word Var_59;
      MR_Integer Var_47;
      MR_String Var_46;

      succeeded = ((MR_tag((MR_Word) TypeCtors_37)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        TheTypeCtor_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeCtors_37, (MR_Integer) 0)));
        Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeCtors_37, (MR_Integer) 1)));
        succeeded = (Var_58 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (succeeded)
        {
          *MaybePredId_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), TheTypeCtor_44, (MR_Integer) 0)));
          Var_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), TheTypeCtor_44, (MR_Integer) 1)));
          succeeded = ((MR_tag((MR_Word) Var_59)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            TypeModule_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_59, (MR_Integer) 0)));
            Var_46 = ((MR_String) (MR_hl_field(MR_mktag(1), Var_59, (MR_Integer) 1)));
            {
              MR_String UnqualMethodName_48;

              UnqualMethodName_48 = mdbcomp__sym_name__unqualify_name_1_f_0(InstanceMethodName0_12);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *InstanceMethodName_20 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TypeModule_45));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (UnqualMethodName_48));
              }
            }
          }
          else
          {
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.intermod", (MR_String) "predicate \140transform_hlds.intermod.find_func_matching_instance_method\'/10", (MR_String) "unqualified type_ctor in hlds_cons_defn or hlds_ctor_field_defn");
          }
          succeeded = MR_TRUE;
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__intermod__gather_opt_export_instance_in_instance_defn_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv5_DoWrite_6;
    MR_Word conv4_STATE_VARIABLE_IntermodInfo_9;

    transform_hlds__intermod__intermod_add_proc_4_p_0(((MR_Word) wrapper_arg_1), &conv5_DoWrite_6, ((MR_Word) wrapper_arg_3), &conv4_STATE_VARIABLE_IntermodInfo_9);
    *wrapper_arg_2 = ((MR_Box) (conv5_DoWrite_6));
    *wrapper_arg_4 = ((MR_Box) (conv4_STATE_VARIABLE_IntermodInfo_9));
  }
}

static void MR_CALL 
transform_hlds__intermod__gather_opt_export_instance_in_instance_defn_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_InstanceMethod_9;
    MR_Word conv1_PredIds_11;

    transform_hlds__intermod__qualify_instance_method_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv2_InstanceMethod_9, ((MR_Word) wrapper_arg_3), &conv1_PredIds_11);
    *wrapper_arg_2 = ((MR_Box) (conv2_InstanceMethod_9));
    *wrapper_arg_4 = ((MR_Box) (conv1_PredIds_11));
  }
}

static MR_Box MR_CALL 
transform_hlds__intermod__gather_opt_export_instance_in_instance_defn_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = hlds__hlds_pred__pred_proc_id_project_pred_id_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
transform_hlds__intermod__gather_opt_export_instance_in_instance_defn_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word ClassId_7,
  MR_Word InstanceDefn_8,
  MR_Word STATE_VARIABLE_IntermodInfo_0_35,
  MR_Word * STATE_VARIABLE_IntermodInfo_36)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_8, (MR_Integer) 0)));
    MR_Word Types_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_8, (MR_Integer) 1)));
    MR_Word OriginalTypes_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_8, (MR_Integer) 2)));
    MR_Word InstanceStatus_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_8, (MR_Integer) 3)));
    MR_Word Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_8, (MR_Integer) 4)));
    MR_Word InstanceConstraints_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_8, (MR_Integer) 5)));
    MR_Word Interface0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_8, (MR_Integer) 6)));
    MR_Word MaybePredProcIds_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_8, (MR_Integer) 7)));
    MR_Word TVarSet_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_8, (MR_Integer) 8)));
    MR_Word Proofs_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_8, (MR_Integer) 9)));
    MR_Word DefinedThisModule_20;

    DefinedThisModule_20 = hlds__status__instance_status_defined_in_this_module_1_f_0(InstanceStatus_13);
    switch (DefinedThisModule_20) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_IntermodInfo_36 = STATE_VARIABLE_IntermodInfo_0_35;
        break;
      case (MR_Integer) 1:
        {
          MR_Word Interface_31;
          MR_Word STATE_VARIABLE_IntermodInfo_45_45;
          MR_Word Var_46;

          if ((Interface0_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            Interface_31 = Interface0_16;
            STATE_VARIABLE_IntermodInfo_45_45 = STATE_VARIABLE_IntermodInfo_0_35;
          }
          else
          {
            MR_Word Methods0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), Interface0_16, (MR_Integer) 0)));
            MR_Word MethodAL_26;
            MR_Word Methods_27;
            MR_Word PredIds_28;
            MR_Word DoWriteMethodsList_29;
            MR_Word DoWriteMethods_30;
            MR_Word Var_41;
            MR_Word STATE_VARIABLE_IntermodInfo_44_44;
            MR_Box conv3_PredIds_28;
            MR_Box conv6_STATE_VARIABLE_IntermodInfo_44_44;

            if ((MaybePredProcIds_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.intermod", (MR_String) "predicate \140transform_hlds.intermod.gather_opt_export_instance_in_instance_defn\'/5", (MR_String) "method pred_proc_ids not filled in");
                return;
              }
            }
            else
            {
              MR_Word TypeCtorInfo_50_50 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
              MR_Word ClassProcs_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybePredProcIds_17, (MR_Integer) 0)));
              MR_Word ClassPreds0_24;
              MR_Word ClassPreds_25;

              ClassPreds0_24 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, TypeCtorInfo_50_50, (MR_Word) &transform_hlds__intermod_scalar_common_2[15], ClassProcs_23);
              mercury__list__remove_adjacent_dups_2_p_0(TypeCtorInfo_50_50, ClassPreds0_24, &ClassPreds_25);
              mercury__assoc_list__from_corresponding_lists_3_p_0(TypeCtorInfo_50_50, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0, ClassPreds_25, Methods0_22, &MethodAL_26);
            }
            {
              Var_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_41, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_5[5]));
              MR_hl_field(MR_mktag(0), Var_41, 1) = ((MR_Box) (transform_hlds__intermod__gather_opt_export_instance_in_instance_defn_5_p_0_2));
              MR_hl_field(MR_mktag(0), Var_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), Var_41, 3) = ((MR_Box) (ModuleInfo_6));
            }
            mercury__list__map_foldl_5_p_0((MR_Word) &transform_hlds__intermod_scalar_common_2[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0, (MR_Word) &transform_hlds__intermod_scalar_common_1[1], Var_41, MethodAL_26, &Methods_27, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &conv3_PredIds_28);
            PredIds_28 = ((MR_Word) conv3_PredIds_28);
            mercury__list__map_foldl_5_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_Word) &transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_intermod_info_0, (MR_Word) &transform_hlds__intermod_scalar_common_2[16], PredIds_28, &DoWriteMethodsList_29, ((MR_Box) (STATE_VARIABLE_IntermodInfo_0_35)), &conv6_STATE_VARIABLE_IntermodInfo_44_44);
            STATE_VARIABLE_IntermodInfo_44_44 = ((MR_Word) conv6_STATE_VARIABLE_IntermodInfo_44_44);
            mercury__bool__and_list_2_p_0(DoWriteMethodsList_29, &DoWriteMethods_30);
            switch (DoWriteMethods_30) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  Interface_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  STATE_VARIABLE_IntermodInfo_45_45 = STATE_VARIABLE_IntermodInfo_0_35;
                }
                break;
              case (MR_Integer) 1:
                {
                  {
                    Interface_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Interface_31, 0) = ((MR_Box) (Methods_27));
                  }
                  STATE_VARIABLE_IntermodInfo_45_45 = STATE_VARIABLE_IntermodInfo_44_44;
                }
                break;
            }
          }
          succeeded = (Interface_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          if (succeeded)
          {
            Var_46 = hlds__status__instance_status_is_exported_1_f_0(InstanceStatus_13);
            succeeded = (Var_46 == (MR_Integer) 0);
            succeeded = !(succeeded);
          }
          succeeded = !(succeeded);
          if (succeeded)
          {
            MR_Word InstanceDefnToWrite_32;
            MR_Word Instances0_33;
            MR_Word Instances_34;
            MR_Word Var_47;
            MR_Word Var_70;
            MR_Word Var_71;
            MR_Word Var_72;
            MR_Word Var_73;
            MR_Word Var_74;
            MR_Word Var_75;

            {
              InstanceDefnToWrite_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), InstanceDefnToWrite_32, 0) = ((MR_Box) (ModuleName_10));
              MR_hl_field(MR_mktag(0), InstanceDefnToWrite_32, 1) = ((MR_Box) (Types_11));
              MR_hl_field(MR_mktag(0), InstanceDefnToWrite_32, 2) = ((MR_Box) (OriginalTypes_12));
              MR_hl_field(MR_mktag(0), InstanceDefnToWrite_32, 3) = ((MR_Box) (InstanceStatus_13));
              MR_hl_field(MR_mktag(0), InstanceDefnToWrite_32, 4) = ((MR_Box) (Context_14));
              MR_hl_field(MR_mktag(0), InstanceDefnToWrite_32, 5) = ((MR_Box) (InstanceConstraints_15));
              MR_hl_field(MR_mktag(0), InstanceDefnToWrite_32, 6) = ((MR_Box) (Interface_31));
              MR_hl_field(MR_mktag(0), InstanceDefnToWrite_32, 7) = ((MR_Box) (MaybePredProcIds_17));
              MR_hl_field(MR_mktag(0), InstanceDefnToWrite_32, 8) = ((MR_Box) (TVarSet_18));
              MR_hl_field(MR_mktag(0), InstanceDefnToWrite_32, 9) = ((MR_Box) (Proofs_19));
            }
            Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_45_45, (MR_Integer) 0)));
            Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_45_45, (MR_Integer) 1)));
            Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_45_45, (MR_Integer) 2)));
            Instances0_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_45_45, (MR_Integer) 3)));
            Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_45_45, (MR_Integer) 4)));
            Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_45_45, (MR_Integer) 5)));
            Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_45_45, (MR_Integer) 6)));
            {
              Var_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (ClassId_7));
              MR_hl_field(MR_mktag(0), Var_47, 1) = ((MR_Box) (InstanceDefnToWrite_32));
            }
            {
              Instances_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Instances_34, 0) = ((MR_Box) (Var_47));
              MR_hl_field(MR_mktag(1), Instances_34, 1) = ((MR_Box) (Instances0_33));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_IntermodInfo_36 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_70));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_71));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_72));
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Instances_34));
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_73));
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_74));
              MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_75));
            }
          }
          else
            *STATE_VARIABLE_IntermodInfo_36 = STATE_VARIABLE_IntermodInfo_45_45;
        }
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__intermod__gather_opt_export_instances_in_class_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_IntermodInfo_36;

    transform_hlds__intermod__gather_opt_export_instance_in_instance_defn_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_STATE_VARIABLE_IntermodInfo_36);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_IntermodInfo_36));
  }
}

static void MR_CALL 
transform_hlds__intermod__gather_opt_export_instances_in_class_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word ClassId_7,
  MR_Word InstanceDefns_8,
  MR_Word STATE_VARIABLE_IntermodInfo_0_10,
  MR_Word * STATE_VARIABLE_IntermodInfo_11)
{
  {
    MR_Word Var_12;
    MR_Box conv1_STATE_VARIABLE_IntermodInfo_11;

    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_5[4]));
      MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (transform_hlds__intermod__gather_opt_export_instances_in_class_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (ModuleInfo_6));
      MR_hl_field(MR_mktag(0), Var_12, 4) = ((MR_Box) (ClassId_7));
    }
    mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_instance_defn_0, (MR_Word) &transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_intermod_info_0, Var_12, InstanceDefns_8, ((MR_Box) (STATE_VARIABLE_IntermodInfo_0_10)), &conv1_STATE_VARIABLE_IntermodInfo_11);
    *STATE_VARIABLE_IntermodInfo_11 = ((MR_Word) conv1_STATE_VARIABLE_IntermodInfo_11);
  }
}

static MR_bool MR_CALL 
transform_hlds__intermod__proc_has_a_higher_order_input_arg_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word ProcInfo_4)
{
  {
    MR_bool succeeded;
    MR_Word HeadVars_5;
    MR_Word ArgModes_6;
    MR_Word VarTypes_7;

    hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_4, &HeadVars_5);
    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_4, &ArgModes_6);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo_4, &VarTypes_7);
    succeeded = transform_hlds__intermod__some_input_arg_is_higher_order_4_p_0(ModuleInfo_3, VarTypes_7, HeadVars_5, ArgModes_6);
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__intermod__some_input_arg_is_higher_order_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word VarTypes_6,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = ((MR_tag((MR_Word) HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
    MR_Word HeadVar_7;
    MR_Word HeadVars_8;
    MR_Word ArgMode_9;
    MR_Word ArgModes_10;
    MR_Word Type_11;
    MR_Word Var_12;

    // setup for model_semi tailcalls optimized into a loop
    if (succeeded)
    {
      HeadVar_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
      HeadVars_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
      succeeded = ((MR_tag((MR_Word) HeadVar__4_4)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        ArgMode_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0)));
        ArgModes_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1)));
        succeeded = check_hlds__mode_util__mode_is_input_2_p_0(ModuleInfo_5, ArgMode_9);
        if (succeeded)
        {
          hlds__vartypes__lookup_var_type_3_p_0(VarTypes_6, HeadVar_7, &Type_11);
          Var_12 = check_hlds__type_util__classify_type_2_f_0(ModuleInfo_5, Type_11);
          succeeded = (Var_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        if (succeeded)
          succeeded = MR_TRUE;
        else
        {
          MR_Word next_value_of_HeadVar__3_3 = HeadVars_8;
          MR_Word next_value_of_HeadVar__4_4 = ArgModes_10;

          // direct tailcall eliminated
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          HeadVar__4_4 = next_value_of_HeadVar__4_4;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
transform_hlds__intermod__proc_eval_method_is_normal_1_p_0(
  MR_Word ProcInfo_2)
{
  {
    MR_bool succeeded;
    MR_Word Var_4;

    hlds__hlds_pred__proc_info_get_eval_method_2_p_0(ProcInfo_2, &Var_4);
    succeeded = parse_tree__prog_data_pragma____Unify____eval_method_0_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Var_4);
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__intermod__maybe_opt_export_entities_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_IntermodInfo_33;

    transform_hlds__intermod__gather_opt_export_types_in_type_defn_4_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3), &conv2_STATE_VARIABLE_IntermodInfo_33);
    *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_IntermodInfo_33));
  }
}

static void MR_CALL 
transform_hlds__intermod__maybe_opt_export_entities_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_IntermodInfo_11;

    transform_hlds__intermod__gather_opt_export_instances_in_class_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3), &conv0_STATE_VARIABLE_IntermodInfo_11);
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_IntermodInfo_11));
  }
}

void MR_CALL 
transform_hlds__intermod__maybe_opt_export_entities_2_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_12,
  MR_Word * STATE_VARIABLE_ModuleInfo_13)
{
  {
    MR_Word TypeCtorInfo_12_39;
    MR_Word Globals_4;
    MR_Word VeryVerbose_5;
    MR_Word PredIds_7;
    MR_Integer Threshold_8;
    MR_Word Deforestation_9;
    MR_Integer HigherOrderSizeLimit_10;
    MR_Word STATE_VARIABLE_IntermodInfo_21_21;
    MR_Word STATE_VARIABLE_IntermodInfo_23_23;
    MR_Word STATE_VARIABLE_IntermodInfo_24_24;
    MR_Word STATE_VARIABLE_IntermodInfo_25_25;
    MR_Word Modules_32;
    MR_Word Procs_33;
    MR_Word ProcDecls_34;
    MR_Word ExtraExportedPreds0_49;
    MR_Word STATE_VARIABLE_IntermodInfo_18_50;
    MR_Word ModuleInfo_56;
    MR_Word Instances_57;
    MR_Word Var_58;
    MR_Word ModuleInfo_78;
    MR_Word TypeTable_79;
    MR_Word Var_69;
    MR_Word Var_70;
    MR_Word Var_71;
    MR_Word Var_72;
    MR_Word Var_73;
    MR_Word Var_74;
    MR_Box conv1_STATE_VARIABLE_IntermodInfo_24_24;
    MR_Word Var_89;
    MR_Word Var_90;
    MR_Word Var_91;
    MR_Word Var_92;
    MR_Word Var_93;
    MR_Word Var_94;
    MR_Box conv3_STATE_VARIABLE_IntermodInfo_25_25;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_12, &Globals_4);
    libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 58, &VeryVerbose_5);
    libs__file_util__maybe_write_string_4_p_0(VeryVerbose_5, (MR_String) "% Adjusting import status of predicates in the \140.opt\' file...");
    hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(STATE_VARIABLE_ModuleInfo_0_12, &PredIds_7);
    libs__globals__lookup_int_option_3_p_0(Globals_4, (MR_Integer) 350, &Threshold_8);
    libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 398, &Deforestation_9);
    libs__globals__lookup_int_option_3_p_0(Globals_4, (MR_Integer) 362, &HigherOrderSizeLimit_10);
    mercury__set__init_1_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, &Modules_32);
    TypeCtorInfo_12_39 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
    mercury__set__init_1_p_0(TypeCtorInfo_12_39, &Procs_33);
    mercury__set__init_1_p_0(TypeCtorInfo_12_39, &ProcDecls_34);
    {
      STATE_VARIABLE_IntermodInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_21_21, 0) = ((MR_Box) (Modules_32));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_21_21, 1) = ((MR_Box) (Procs_33));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_21_21, 2) = ((MR_Box) (ProcDecls_34));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_21_21, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_21_21, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_21_21, 5) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_12));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_21_21, 6) = ((MR_Box) ((MR_Integer) 0));
    }
    transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_111_112_116_95_101_120_112_111_114_116_95_112_114_101_100_115_95_105_110_95_108_105_115_116_95_95_91_51_93_95_48_8_p_0(PredIds_7, (MR_Integer) 0, Threshold_8, HigherOrderSizeLimit_10, Deforestation_9, STATE_VARIABLE_IntermodInfo_21_21, &STATE_VARIABLE_IntermodInfo_18_50);
    mercury__set__init_1_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, &ExtraExportedPreds0_49);
    transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_111_112_116_95_101_120_112_111_114_116_95_112_114_101_100_115_95_102_105_120_112_111_105_110_116_95_95_91_50_93_95_48_7_p_0(ExtraExportedPreds0_49, Threshold_8, HigherOrderSizeLimit_10, Deforestation_9, STATE_VARIABLE_IntermodInfo_18_50, &STATE_VARIABLE_IntermodInfo_23_23);
    Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_23_23, (MR_Integer) 0)));
    Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_23_23, (MR_Integer) 1)));
    Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_23_23, (MR_Integer) 2)));
    Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_23_23, (MR_Integer) 3)));
    Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_23_23, (MR_Integer) 4)));
    ModuleInfo_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_23_23, (MR_Integer) 5)));
    Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_23_23, (MR_Integer) 6)));
    hlds__hlds_module__module_info_get_instance_table_2_p_0(ModuleInfo_56, &Instances_57);
    {
      Var_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_58, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_5[2]));
      MR_hl_field(MR_mktag(0), Var_58, 1) = ((MR_Box) (transform_hlds__intermod__maybe_opt_export_entities_2_p_0_1));
      MR_hl_field(MR_mktag(0), Var_58, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_58, 3) = ((MR_Box) (ModuleInfo_56));
    }
    mercury__map__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0, (MR_Word) &transform_hlds__intermod_scalar_common_1[0], (MR_Word) &transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_intermod_info_0, Var_58, Instances_57, ((MR_Box) (STATE_VARIABLE_IntermodInfo_23_23)), &conv1_STATE_VARIABLE_IntermodInfo_24_24);
    STATE_VARIABLE_IntermodInfo_24_24 = ((MR_Word) conv1_STATE_VARIABLE_IntermodInfo_24_24);
    Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_24_24, (MR_Integer) 0)));
    Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_24_24, (MR_Integer) 1)));
    Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_24_24, (MR_Integer) 2)));
    Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_24_24, (MR_Integer) 3)));
    Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_24_24, (MR_Integer) 4)));
    ModuleInfo_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_24_24, (MR_Integer) 5)));
    Var_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_24_24, (MR_Integer) 6)));
    hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_78, &TypeTable_79);
    hlds__hlds_data__foldl_over_type_ctor_defns_4_p_0((MR_Word) &transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_intermod_info_0, (MR_Word) &transform_hlds__intermod_scalar_common_2[14], TypeTable_79, ((MR_Box) (STATE_VARIABLE_IntermodInfo_24_24)), &conv3_STATE_VARIABLE_IntermodInfo_25_25);
    STATE_VARIABLE_IntermodInfo_25_25 = ((MR_Word) conv3_STATE_VARIABLE_IntermodInfo_25_25);
    transform_hlds__intermod__do_maybe_opt_export_entities_3_p_0(STATE_VARIABLE_IntermodInfo_25_25, STATE_VARIABLE_ModuleInfo_0_12, STATE_VARIABLE_ModuleInfo_13);
    libs__file_util__maybe_write_string_4_p_0(VeryVerbose_5, (MR_String) " done\n");
  }
}

static void MR_CALL 
transform_hlds__intermod__write_trans_opt_file_3_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv18_STATE_VARIABLE_First_18;

    transform_hlds__intermod__write_pragma_mm_tabling_info_for_pred_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv18_STATE_VARIABLE_First_18);
    *wrapper_arg_3 = ((MR_Box) (conv18_STATE_VARIABLE_First_18));
  }
}

static void MR_CALL 
transform_hlds__intermod__write_trans_opt_file_3_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv15_STATE_VARIABLE_First_18;

    transform_hlds__intermod__write_pragma_trailing_info_for_pred_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv15_STATE_VARIABLE_First_18);
    *wrapper_arg_3 = ((MR_Box) (conv15_STATE_VARIABLE_First_18));
  }
}

static void MR_CALL 
transform_hlds__intermod__write_trans_opt_file_3_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv12_STATE_VARIABLE_First_18;

    transform_hlds__intermod__write_pragma_exceptions_for_pred_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv12_STATE_VARIABLE_First_18);
    *wrapper_arg_3 = ((MR_Box) (conv12_STATE_VARIABLE_First_18));
  }
}

static void MR_CALL 
transform_hlds__intermod__write_trans_opt_file_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv9_STATE_VARIABLE_First_18;

    transform_hlds__intermod__write_pragma_structure_reuse_for_pred_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv9_STATE_VARIABLE_First_18);
    *wrapper_arg_3 = ((MR_Box) (conv9_STATE_VARIABLE_First_18));
  }
}

static void MR_CALL 
transform_hlds__intermod__write_trans_opt_file_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv6_STATE_VARIABLE_First_18;

    transform_hlds__intermod__write_pragma_structure_sharing_for_pred_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv6_STATE_VARIABLE_First_18);
    *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_First_18));
  }
}

static void MR_CALL 
transform_hlds__intermod__write_trans_opt_file_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_STATE_VARIABLE_First_24;

    transform_hlds__intermod__write_pragma_termination2_for_pred_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv3_STATE_VARIABLE_First_24);
    *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_First_24));
  }
}

static void MR_CALL 
transform_hlds__intermod__write_trans_opt_file_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_First_24;

    transform_hlds__intermod__write_pragma_termination_for_pred_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_STATE_VARIABLE_First_24);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_First_24));
  }
}

void MR_CALL 
transform_hlds__intermod__write_trans_opt_file_3_p_0(
  MR_Word ModuleInfo_4)
{
  {
    MR_bool succeeded;
    MR_Word Globals_6;
    MR_Word ModuleName_7;
    MR_String TmpOptName_8;
    MR_Word Result_9;

    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_4, &Globals_6);
    hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_4, &ModuleName_7);
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_6, (MR_Integer) 0, (MR_String) ".trans_opt.tmp", ModuleName_7, &TmpOptName_8);
    mercury__io__open_output_4_p_0(TmpOptName_8, &Result_9);
    if (((MR_tag((MR_Word) Result_9)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word Error_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), Result_9, (MR_Integer) 0)));
      MR_String Msg_11;
      MR_String ProgName_12;

      mercury__io__error_message_2_p_0(Error_10, &Msg_11);
      mercury__io__progname_base_4_p_0((MR_String) "trans_opt.m", &ProgName_12);
      mercury__io__write_string_3_p_0(ProgName_12);
      mercury__io__write_string_3_p_0((MR_String) ": cannot open transitive optimisation file \140");
      mercury__io__write_string_3_p_0(TmpOptName_8);
      mercury__io__write_string_3_p_0((MR_String) "\' \n");
      mercury__io__write_string_3_p_0(ProgName_12);
      mercury__io__write_string_3_p_0((MR_String) ": for output: ");
      mercury__io__write_string_3_p_0(Msg_11);
      mercury__io__nl_2_p_0();
      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
    }
    else
    {
      MR_Word TypeCtorInfo_94_94;
      MR_Word Stream_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Result_9, (MR_Integer) 0)));
      MR_Word OldStream_14;
      MR_Word PredIds_15;
      MR_Word PredIdsSet_16;
      MR_Word ReusePredsSet_17;
      MR_Word PredIdsNoReusePredsSet_18;
      MR_Word PredIdsNoReuseVersions_19;
      MR_Word NoReuseOrderPredInfos_20;
      MR_Word ProcAnalysisKinds_21;
      MR_String OptName_30;
      MR_Word Var_29;

      mercury__io__set_output_stream_4_p_0(Stream_13, &OldStream_14);
      mercury__io__write_string_3_p_0((MR_String) ":- module ");
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(ModuleName_7);
      mercury__io__write_string_3_p_0((MR_String) ".\n");
      hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(ModuleInfo_4, &PredIds_15);
      TypeCtorInfo_94_94 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
      PredIdsSet_16 = mercury__set__from_list_1_f_0(TypeCtorInfo_94_94, PredIds_15);
      hlds__hlds_module__module_info_get_structure_reuse_preds_2_p_0(ModuleInfo_4, &ReusePredsSet_17);
      PredIdsNoReusePredsSet_18 = mercury__set__difference_2_f_0(TypeCtorInfo_94_94, PredIdsSet_16, ReusePredsSet_17);
      PredIdsNoReuseVersions_19 = mercury__set__to_sorted_list_1_f_0(TypeCtorInfo_94_94, PredIdsNoReusePredsSet_18);
      transform_hlds__intermod__generate_order_pred_infos_3_p_0(ModuleInfo_4, PredIdsNoReuseVersions_19, &NoReuseOrderPredInfos_20);
      hlds__hlds_module__module_info_get_proc_analysis_kinds_2_p_0(ModuleInfo_4, &ProcAnalysisKinds_21);
      succeeded = mercury__set__contains_2_p_0((MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_proc_analysis_kind_0, ProcAnalysisKinds_21, ((MR_Box) ((MR_Integer) 3)));
      if (succeeded)
      {
        MR_Word Var_44;
        MR_Word Var_22;
        MR_Box conv2_Var_22;
        MR_Box conv1_STATE_VARIABLE_IO_46_46;

        {
          Var_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_44, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_11[0]));
          MR_hl_field(MR_mktag(0), Var_44, 1) = ((MR_Box) (transform_hlds__intermod__write_trans_opt_file_3_p_0_1));
          MR_hl_field(MR_mktag(0), Var_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_44, 3) = ((MR_Box) (ModuleInfo_4));
        }
        mercury__list__foldl2_6_p_2((MR_Word) &transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_order_pred_info_0, (MR_Word) &transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, Var_44, NoReuseOrderPredInfos_20, ((MR_Box) ((MR_Integer) 1)), &conv2_Var_22, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_46_46);
        Var_22 = ((MR_Word) conv2_Var_22);
      }
      else
      {
      }
      succeeded = mercury__set__contains_2_p_0((MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_proc_analysis_kind_0, ProcAnalysisKinds_21, ((MR_Box) ((MR_Integer) 4)));
      if (succeeded)
      {
        MR_Word Var_48;
        MR_Word Var_23;
        MR_Box conv5_Var_23;
        MR_Box conv4_STATE_VARIABLE_IO_50_50;

        {
          Var_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_48, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_11[0]));
          MR_hl_field(MR_mktag(0), Var_48, 1) = ((MR_Box) (transform_hlds__intermod__write_trans_opt_file_3_p_0_2));
          MR_hl_field(MR_mktag(0), Var_48, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_48, 3) = ((MR_Box) (ModuleInfo_4));
        }
        mercury__list__foldl2_6_p_2((MR_Word) &transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_order_pred_info_0, (MR_Word) &transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, Var_48, NoReuseOrderPredInfos_20, ((MR_Box) ((MR_Integer) 1)), &conv5_Var_23, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_50_50);
        Var_23 = ((MR_Word) conv5_Var_23);
      }
      else
      {
      }
      succeeded = mercury__set__contains_2_p_0((MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_proc_analysis_kind_0, ProcAnalysisKinds_21, ((MR_Box) ((MR_Integer) 5)));
      if (succeeded)
      {
        MR_Word Var_52;
        MR_Word Var_24;
        MR_Box conv8_Var_24;
        MR_Box conv7_STATE_VARIABLE_IO_54_54;

        {
          Var_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_52, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_11[0]));
          MR_hl_field(MR_mktag(0), Var_52, 1) = ((MR_Box) (transform_hlds__intermod__write_trans_opt_file_3_p_0_3));
          MR_hl_field(MR_mktag(0), Var_52, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_52, 3) = ((MR_Box) (ModuleInfo_4));
        }
        mercury__list__foldl2_6_p_2((MR_Word) &transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_order_pred_info_0, (MR_Word) &transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, Var_52, NoReuseOrderPredInfos_20, ((MR_Box) ((MR_Integer) 1)), &conv8_Var_24, ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_IO_54_54);
        Var_24 = ((MR_Word) conv8_Var_24);
      }
      else
      {
      }
      succeeded = mercury__set__contains_2_p_0((MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_proc_analysis_kind_0, ProcAnalysisKinds_21, ((MR_Box) ((MR_Integer) 6)));
      if (succeeded)
      {
        MR_Word Var_56;
        MR_Word Var_25;
        MR_Box conv11_Var_25;
        MR_Box conv10_STATE_VARIABLE_IO_58_58;

        {
          Var_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_56, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_11[0]));
          MR_hl_field(MR_mktag(0), Var_56, 1) = ((MR_Box) (transform_hlds__intermod__write_trans_opt_file_3_p_0_4));
          MR_hl_field(MR_mktag(0), Var_56, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_56, 3) = ((MR_Box) (ModuleInfo_4));
        }
        mercury__list__foldl2_6_p_2((MR_Word) &transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_order_pred_info_0, (MR_Word) &transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, Var_56, NoReuseOrderPredInfos_20, ((MR_Box) ((MR_Integer) 1)), &conv11_Var_25, ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_IO_58_58);
        Var_25 = ((MR_Word) conv11_Var_25);
      }
      else
      {
      }
      succeeded = mercury__set__contains_2_p_0((MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_proc_analysis_kind_0, ProcAnalysisKinds_21, ((MR_Box) ((MR_Integer) 0)));
      if (succeeded)
      {
        MR_Word Var_60;
        MR_Word Var_26;
        MR_Box conv14_Var_26;
        MR_Box conv13_STATE_VARIABLE_IO_62_62;

        {
          Var_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_60, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_11[0]));
          MR_hl_field(MR_mktag(0), Var_60, 1) = ((MR_Box) (transform_hlds__intermod__write_trans_opt_file_3_p_0_5));
          MR_hl_field(MR_mktag(0), Var_60, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_60, 3) = ((MR_Box) (ModuleInfo_4));
        }
        mercury__list__foldl2_6_p_2((MR_Word) &transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_order_pred_info_0, (MR_Word) &transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, Var_60, NoReuseOrderPredInfos_20, ((MR_Box) ((MR_Integer) 1)), &conv14_Var_26, ((MR_Box) ((MR_Integer) 0)), &conv13_STATE_VARIABLE_IO_62_62);
        Var_26 = ((MR_Word) conv14_Var_26);
      }
      else
      {
      }
      succeeded = mercury__set__contains_2_p_0((MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_proc_analysis_kind_0, ProcAnalysisKinds_21, ((MR_Box) ((MR_Integer) 1)));
      if (succeeded)
      {
        MR_Word Var_64;
        MR_Word Var_27;
        MR_Box conv17_Var_27;
        MR_Box conv16_STATE_VARIABLE_IO_66_66;

        {
          Var_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_64, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_11[0]));
          MR_hl_field(MR_mktag(0), Var_64, 1) = ((MR_Box) (transform_hlds__intermod__write_trans_opt_file_3_p_0_6));
          MR_hl_field(MR_mktag(0), Var_64, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_64, 3) = ((MR_Box) (ModuleInfo_4));
        }
        mercury__list__foldl2_6_p_2((MR_Word) &transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_order_pred_info_0, (MR_Word) &transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, Var_64, NoReuseOrderPredInfos_20, ((MR_Box) ((MR_Integer) 1)), &conv17_Var_27, ((MR_Box) ((MR_Integer) 0)), &conv16_STATE_VARIABLE_IO_66_66);
        Var_27 = ((MR_Word) conv17_Var_27);
      }
      else
      {
      }
      succeeded = mercury__set__contains_2_p_0((MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_proc_analysis_kind_0, ProcAnalysisKinds_21, ((MR_Box) ((MR_Integer) 2)));
      if (succeeded)
      {
        MR_Word Var_68;
        MR_Word Var_28;
        MR_Box conv20_Var_28;
        MR_Box conv19_STATE_VARIABLE_IO_70_70;

        {
          Var_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_68, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_11[0]));
          MR_hl_field(MR_mktag(0), Var_68, 1) = ((MR_Box) (transform_hlds__intermod__write_trans_opt_file_3_p_0_7));
          MR_hl_field(MR_mktag(0), Var_68, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_68, 3) = ((MR_Box) (ModuleInfo_4));
        }
        mercury__list__foldl2_6_p_2((MR_Word) &transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_order_pred_info_0, (MR_Word) &transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, Var_68, NoReuseOrderPredInfos_20, ((MR_Box) ((MR_Integer) 1)), &conv20_Var_28, ((MR_Box) ((MR_Integer) 0)), &conv19_STATE_VARIABLE_IO_70_70);
        Var_28 = ((MR_Word) conv20_Var_28);
      }
      else
      {
      }
      mercury__io__set_output_stream_4_p_0(OldStream_14, &Var_29);
      mercury__io__close_output_3_p_0(Stream_13);
      parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_6, (MR_Integer) 1, (MR_String) ".trans_opt", ModuleName_7, &OptName_30);
      parse_tree__module_cmds__update_interface_4_p_0(Globals_6, OptName_30);
      parse_tree__module_cmds__touch_interface_datestamp_5_p_0(Globals_6, ModuleName_7, (MR_String) ".trans_opt_date");
    }
  }
}

void MR_CALL 
transform_hlds__intermod__should_write_sharing_info_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word PredId_8,
  MR_Integer ProcId_9,
  MR_Word PredInfo_10,
  MR_Word WhatFor_11,
  MR_Word * ShouldWrite_12)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_pred__procedure_is_exported_3_p_0(ModuleInfo_7, PredInfo_10, ProcId_9);
    if (succeeded)
    {
      succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(PredInfo_10);
      succeeded = !(succeeded);
      if (succeeded)
        switch (WhatFor_11) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 1:
            {
              MR_Word TypeSpecInfo_13;
              MR_Word TypeSpecForcePreds_15;
              MR_Word Var_14;
              MR_Word Var_16;
              MR_Word Var_17;

              hlds__hlds_module__module_info_get_type_spec_info_2_p_0(ModuleInfo_7, &TypeSpecInfo_13);
              Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeSpecInfo_13, (MR_Integer) 0)));
              TypeSpecForcePreds_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeSpecInfo_13, (MR_Integer) 1)));
              Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeSpecInfo_13, (MR_Integer) 2)));
              Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeSpecInfo_13, (MR_Integer) 3)));
              succeeded = mercury__set__member_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, ((MR_Box) (PredId_8)), TypeSpecForcePreds_15);
              succeeded = !(succeeded);
            }
            break;
        }
    }
    if (succeeded)
      *ShouldWrite_12 = (MR_Integer) 1;
    else
      *ShouldWrite_12 = (MR_Integer) 0;
  }
}

void MR_CALL 
transform_hlds__intermod__should_write_reuse_info_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word PredId_8,
  MR_Integer ProcId_9,
  MR_Word PredInfo_10,
  MR_Word WhatFor_11,
  MR_Word * ShouldWrite_12)
{
  {
    MR_bool succeeded;
    MR_Word PredOrigin_13;
    MR_Word Var_21;
    MR_Word Var_14;
    MR_Word Var_15;

    succeeded = hlds__hlds_pred__procedure_is_exported_3_p_0(ModuleInfo_7, PredInfo_10, ProcId_9);
    if (succeeded)
    {
      succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(PredInfo_10);
      succeeded = !(succeeded);
      if (succeeded)
      {
        hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo_10, &PredOrigin_13);
        succeeded = ((MR_tag((MR_Word) PredOrigin_13)) == (MR_mktag((MR_Integer) 2)));
        if (succeeded)
        {
          Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), PredOrigin_13, (MR_Integer) 0)));
          Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), PredOrigin_13, (MR_Integer) 1)));
          Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), PredOrigin_13, (MR_Integer) 2)));
          succeeded = (Var_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
        }
        succeeded = !(succeeded);
        if (succeeded)
          switch (WhatFor_11) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              succeeded = MR_TRUE;
              break;
            case (MR_Integer) 1:
              {
                MR_Word TypeSpecInfo_16;
                MR_Word TypeSpecForcePreds_18;
                MR_Word Var_17;
                MR_Word Var_19;
                MR_Word Var_20;

                hlds__hlds_module__module_info_get_type_spec_info_2_p_0(ModuleInfo_7, &TypeSpecInfo_16);
                Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeSpecInfo_16, (MR_Integer) 0)));
                TypeSpecForcePreds_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeSpecInfo_16, (MR_Integer) 1)));
                Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeSpecInfo_16, (MR_Integer) 2)));
                Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeSpecInfo_16, (MR_Integer) 3)));
                succeeded = mercury__set__member_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, ((MR_Box) (PredId_8)), TypeSpecForcePreds_18);
                succeeded = !(succeeded);
              }
              break;
          }
      }
    }
    if (succeeded)
      *ShouldWrite_12 = (MR_Integer) 1;
    else
      *ShouldWrite_12 = (MR_Integer) 0;
  }
}

void MR_CALL 
transform_hlds__intermod__should_write_mm_tabling_info_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word PredId_8,
  MR_Integer ProcId_9,
  MR_Word PredInfo_10,
  MR_Word WhatFor_11,
  MR_Word * ShouldWrite_12)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_pred__procedure_is_exported_3_p_0(ModuleInfo_7, PredInfo_10, ProcId_9);
    if (succeeded)
    {
      succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(PredInfo_10);
      succeeded = !(succeeded);
      if (succeeded)
        switch (WhatFor_11) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 1:
            {
              MR_Word TypeSpecInfo_13;
              MR_Word TypeSpecForcePreds_15;
              MR_Word Markers_18;
              MR_Word Var_14;
              MR_Word Var_16;
              MR_Word Var_17;
              MR_Word Var_19;
              MR_Word Var_20;

              hlds__hlds_module__module_info_get_type_spec_info_2_p_0(ModuleInfo_7, &TypeSpecInfo_13);
              Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeSpecInfo_13, (MR_Integer) 0)));
              TypeSpecForcePreds_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeSpecInfo_13, (MR_Integer) 1)));
              Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeSpecInfo_13, (MR_Integer) 2)));
              Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeSpecInfo_13, (MR_Integer) 3)));
              succeeded = mercury__set__member_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, ((MR_Box) (PredId_8)), TypeSpecForcePreds_15);
              succeeded = !(succeeded);
              if (succeeded)
              {
                hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_10, &Markers_18);
                Var_19 = (MR_Integer) 12;
                succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_18, Var_19);
                succeeded = !(succeeded);
                if (succeeded)
                {
                  Var_20 = (MR_Integer) 13;
                  succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_18, Var_20);
                  succeeded = !(succeeded);
                }
              }
            }
            break;
        }
    }
    if (succeeded)
      *ShouldWrite_12 = (MR_Integer) 1;
    else
      *ShouldWrite_12 = (MR_Integer) 0;
  }
}

void MR_CALL 
transform_hlds__intermod__should_write_trailing_info_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word PredId_8,
  MR_Integer ProcId_9,
  MR_Word PredInfo_10,
  MR_Word WhatFor_11,
  MR_Word * ShouldWrite_12)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_pred__procedure_is_exported_3_p_0(ModuleInfo_7, PredInfo_10, ProcId_9);
    if (succeeded)
    {
      succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(PredInfo_10);
      succeeded = !(succeeded);
      if (succeeded)
        switch (WhatFor_11) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 1:
            {
              MR_Word TypeSpecInfo_13;
              MR_Word TypeSpecForcePreds_15;
              MR_Word Markers_18;
              MR_Word Var_14;
              MR_Word Var_16;
              MR_Word Var_17;
              MR_Word Var_19;
              MR_Word Var_20;

              hlds__hlds_module__module_info_get_type_spec_info_2_p_0(ModuleInfo_7, &TypeSpecInfo_13);
              Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeSpecInfo_13, (MR_Integer) 0)));
              TypeSpecForcePreds_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeSpecInfo_13, (MR_Integer) 1)));
              Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeSpecInfo_13, (MR_Integer) 2)));
              Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeSpecInfo_13, (MR_Integer) 3)));
              succeeded = mercury__set__member_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, ((MR_Box) (PredId_8)), TypeSpecForcePreds_15);
              succeeded = !(succeeded);
              if (succeeded)
              {
                hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_10, &Markers_18);
                Var_19 = (MR_Integer) 12;
                succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_18, Var_19);
                succeeded = !(succeeded);
                if (succeeded)
                {
                  Var_20 = (MR_Integer) 13;
                  succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_18, Var_20);
                  succeeded = !(succeeded);
                }
              }
            }
            break;
        }
    }
    if (succeeded)
      *ShouldWrite_12 = (MR_Integer) 1;
    else
      *ShouldWrite_12 = (MR_Integer) 0;
  }
}

void MR_CALL 
transform_hlds__intermod__should_write_exception_info_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word PredId_8,
  MR_Integer ProcId_9,
  MR_Word PredInfo_10,
  MR_Word WhatFor_11,
  MR_Word * ShouldWrite_12)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_pred__procedure_is_exported_3_p_0(ModuleInfo_7, PredInfo_10, ProcId_9);
    if (succeeded)
    {
      succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(PredInfo_10);
      succeeded = !(succeeded);
      if (succeeded)
        switch (WhatFor_11) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 1:
            {
              MR_Word TypeSpecInfo_13;
              MR_Word TypeSpecForcePreds_15;
              MR_Word Markers_18;
              MR_Word Var_14;
              MR_Word Var_16;
              MR_Word Var_17;
              MR_Word Var_19;
              MR_Word Var_20;

              hlds__hlds_module__module_info_get_type_spec_info_2_p_0(ModuleInfo_7, &TypeSpecInfo_13);
              Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeSpecInfo_13, (MR_Integer) 0)));
              TypeSpecForcePreds_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeSpecInfo_13, (MR_Integer) 1)));
              Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeSpecInfo_13, (MR_Integer) 2)));
              Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeSpecInfo_13, (MR_Integer) 3)));
              succeeded = mercury__set__member_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, ((MR_Box) (PredId_8)), TypeSpecForcePreds_15);
              succeeded = !(succeeded);
              if (succeeded)
              {
                hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_10, &Markers_18);
                Var_19 = (MR_Integer) 12;
                succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_18, Var_19);
                succeeded = !(succeeded);
                if (succeeded)
                {
                  Var_20 = (MR_Integer) 13;
                  succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_18, Var_20);
                  succeeded = !(succeeded);
                }
              }
            }
            break;
        }
    }
    if (succeeded)
      *ShouldWrite_12 = (MR_Integer) 1;
    else
      *ShouldWrite_12 = (MR_Integer) 0;
  }
}

static void MR_CALL 
transform_hlds__intermod__append_analysis_pragmas_to_opt_file_4_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv21_STATE_VARIABLE_First_18;

    transform_hlds__intermod__write_pragma_structure_reuse_for_pred_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv21_STATE_VARIABLE_First_18);
    *wrapper_arg_3 = ((MR_Box) (conv21_STATE_VARIABLE_First_18));
  }
}

static void MR_CALL 
transform_hlds__intermod__append_analysis_pragmas_to_opt_file_4_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv18_STATE_VARIABLE_First_18;

    transform_hlds__intermod__write_pragma_structure_sharing_for_pred_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv18_STATE_VARIABLE_First_18);
    *wrapper_arg_3 = ((MR_Box) (conv18_STATE_VARIABLE_First_18));
  }
}

static void MR_CALL 
transform_hlds__intermod__append_analysis_pragmas_to_opt_file_4_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv15_STATE_VARIABLE_First_24;

    transform_hlds__intermod__write_pragma_termination2_for_pred_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv15_STATE_VARIABLE_First_24);
    *wrapper_arg_3 = ((MR_Box) (conv15_STATE_VARIABLE_First_24));
  }
}

static void MR_CALL 
transform_hlds__intermod__append_analysis_pragmas_to_opt_file_4_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv12_STATE_VARIABLE_First_24;

    transform_hlds__intermod__write_pragma_termination_for_pred_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv12_STATE_VARIABLE_First_24);
    *wrapper_arg_3 = ((MR_Box) (conv12_STATE_VARIABLE_First_24));
  }
}

static void MR_CALL 
transform_hlds__intermod__append_analysis_pragmas_to_opt_file_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv9_STATE_VARIABLE_First_10;

    transform_hlds__intermod__write_pragma_unused_args_5_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv9_STATE_VARIABLE_First_10);
    *wrapper_arg_3 = ((MR_Box) (conv9_STATE_VARIABLE_First_10));
  }
}

static void MR_CALL 
transform_hlds__intermod__append_analysis_pragmas_to_opt_file_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv6_STATE_VARIABLE_First_18;

    transform_hlds__intermod__write_pragma_mm_tabling_info_for_pred_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv6_STATE_VARIABLE_First_18);
    *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_First_18));
  }
}

static void MR_CALL 
transform_hlds__intermod__append_analysis_pragmas_to_opt_file_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_STATE_VARIABLE_First_18;

    transform_hlds__intermod__write_pragma_trailing_info_for_pred_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv3_STATE_VARIABLE_First_18);
    *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_First_18));
  }
}

static void MR_CALL 
transform_hlds__intermod__append_analysis_pragmas_to_opt_file_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_First_18;

    transform_hlds__intermod__write_pragma_exceptions_for_pred_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_STATE_VARIABLE_First_18);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_First_18));
  }
}

void MR_CALL 
transform_hlds__intermod__append_analysis_pragmas_to_opt_file_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word UnusedArgsInfos_6)
{
  {
    MR_bool succeeded;
    MR_Word ProcAnalysisKinds_8;
    MR_Word TypeCtorInfo_79_79;

    hlds__hlds_module__module_info_get_proc_analysis_kinds_2_p_0(ModuleInfo_5, &ProcAnalysisKinds_8);
    succeeded = mercury__set__is_empty_1_p_0((MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_proc_analysis_kind_0, ProcAnalysisKinds_8);
    if (succeeded)
    {
      TypeCtorInfo_79_79 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_unused_args_0;
      succeeded = mercury__set__is_empty_1_p_0(TypeCtorInfo_79_79, UnusedArgsInfos_6);
    }
    if (!(succeeded))
    {
      MR_Word Globals_9;
      MR_Word ModuleName_10;
      MR_String OptFileName_11;
      MR_Word OptFileRes_12;

      hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_5, &Globals_9);
      hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_5, &ModuleName_10);
      parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 1, (MR_String) ".opt.tmp", ModuleName_10, &OptFileName_11);
      mercury__io__open_append_4_p_0(OptFileName_11, &OptFileRes_12);
      if (((MR_tag((MR_Word) OptFileRes_12)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word IOError_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), OptFileRes_12, (MR_Integer) 0)));
        MR_String IOErrorMessage_27;
        MR_Word Var_34;
        MR_Word Var_37;
        MR_Word Var_38;
        MR_Word Var_40;

        mercury__io__error_message_2_p_0(IOError_26, &IOErrorMessage_27);
        {
          Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (IOErrorMessage_27));
          MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) ((MR_String) "\' for output: "));
          MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (Var_40));
        }
        {
          Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (OptFileName_11));
          MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (Var_38));
        }
        {
          Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) ((MR_String) "Error opening file \140"));
          MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (Var_37));
        }
        mercury__io__write_strings_3_p_0(Var_34);
        mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
      }
      else
      {
        MR_Word OptFile_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), OptFileRes_12, (MR_Integer) 0)));
        MR_Word OldStream_14;
        MR_Word PredIds_15;
        MR_Word OrderPredInfos_16;
        MR_Word Var_25;

        mercury__io__set_output_stream_4_p_0(OptFile_13, &OldStream_14);
        hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(ModuleInfo_5, &PredIds_15);
        transform_hlds__intermod__generate_order_pred_infos_3_p_0(ModuleInfo_5, PredIds_15, &OrderPredInfos_16);
        succeeded = mercury__set__contains_2_p_0((MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_proc_analysis_kind_0, ProcAnalysisKinds_8, ((MR_Box) ((MR_Integer) 0)));
        if (succeeded)
        {
          MR_Word Var_46;
          MR_Word Var_17;
          MR_Box conv2_Var_17;
          MR_Box conv1_STATE_VARIABLE_IO_48_48;

          {
            Var_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_46, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_11[0]));
            MR_hl_field(MR_mktag(0), Var_46, 1) = ((MR_Box) (transform_hlds__intermod__append_analysis_pragmas_to_opt_file_4_p_0_1));
            MR_hl_field(MR_mktag(0), Var_46, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_46, 3) = ((MR_Box) (ModuleInfo_5));
          }
          mercury__list__foldl2_6_p_2((MR_Word) &transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_order_pred_info_0, (MR_Word) &transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, Var_46, OrderPredInfos_16, ((MR_Box) ((MR_Integer) 1)), &conv2_Var_17, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_48_48);
          Var_17 = ((MR_Word) conv2_Var_17);
        }
        else
        {
        }
        succeeded = mercury__set__contains_2_p_0((MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_proc_analysis_kind_0, ProcAnalysisKinds_8, ((MR_Box) ((MR_Integer) 1)));
        if (succeeded)
        {
          MR_Word Var_50;
          MR_Word Var_18;
          MR_Box conv5_Var_18;
          MR_Box conv4_STATE_VARIABLE_IO_52_52;

          {
            Var_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_50, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_11[0]));
            MR_hl_field(MR_mktag(0), Var_50, 1) = ((MR_Box) (transform_hlds__intermod__append_analysis_pragmas_to_opt_file_4_p_0_2));
            MR_hl_field(MR_mktag(0), Var_50, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_50, 3) = ((MR_Box) (ModuleInfo_5));
          }
          mercury__list__foldl2_6_p_2((MR_Word) &transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_order_pred_info_0, (MR_Word) &transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, Var_50, OrderPredInfos_16, ((MR_Box) ((MR_Integer) 1)), &conv5_Var_18, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_52_52);
          Var_18 = ((MR_Word) conv5_Var_18);
        }
        else
        {
        }
        succeeded = mercury__set__contains_2_p_0((MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_proc_analysis_kind_0, ProcAnalysisKinds_8, ((MR_Box) ((MR_Integer) 2)));
        if (succeeded)
        {
          MR_Word Var_54;
          MR_Word Var_19;
          MR_Box conv8_Var_19;
          MR_Box conv7_STATE_VARIABLE_IO_56_56;

          {
            Var_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_54, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_11[0]));
            MR_hl_field(MR_mktag(0), Var_54, 1) = ((MR_Box) (transform_hlds__intermod__append_analysis_pragmas_to_opt_file_4_p_0_3));
            MR_hl_field(MR_mktag(0), Var_54, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_54, 3) = ((MR_Box) (ModuleInfo_5));
          }
          mercury__list__foldl2_6_p_2((MR_Word) &transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_order_pred_info_0, (MR_Word) &transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, Var_54, OrderPredInfos_16, ((MR_Box) ((MR_Integer) 1)), &conv8_Var_19, ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_IO_56_56);
          Var_19 = ((MR_Word) conv8_Var_19);
        }
        else
        {
        }
        succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_unused_args_0, UnusedArgsInfos_6);
        if (succeeded)
        {
          MR_Word Var_20;
          MR_Box conv11_Var_20;
          MR_Box conv10_STATE_VARIABLE_IO_59_59;

          mercury__set__foldl2_6_p_2((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_unused_args_0, (MR_Word) &transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &transform_hlds__intermod_scalar_common_2[13], UnusedArgsInfos_6, ((MR_Box) ((MR_Integer) 1)), &conv11_Var_20, ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_IO_59_59);
          Var_20 = ((MR_Word) conv11_Var_20);
        }
        else
        {
        }
        succeeded = mercury__set__contains_2_p_0((MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_proc_analysis_kind_0, ProcAnalysisKinds_8, ((MR_Box) ((MR_Integer) 3)));
        if (succeeded)
        {
          MR_Word Var_61;
          MR_Word Var_21;
          MR_Box conv14_Var_21;
          MR_Box conv13_STATE_VARIABLE_IO_63_63;

          {
            Var_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_61, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_11[0]));
            MR_hl_field(MR_mktag(0), Var_61, 1) = ((MR_Box) (transform_hlds__intermod__append_analysis_pragmas_to_opt_file_4_p_0_5));
            MR_hl_field(MR_mktag(0), Var_61, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_61, 3) = ((MR_Box) (ModuleInfo_5));
          }
          mercury__list__foldl2_6_p_2((MR_Word) &transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_order_pred_info_0, (MR_Word) &transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, Var_61, OrderPredInfos_16, ((MR_Box) ((MR_Integer) 1)), &conv14_Var_21, ((MR_Box) ((MR_Integer) 0)), &conv13_STATE_VARIABLE_IO_63_63);
          Var_21 = ((MR_Word) conv14_Var_21);
        }
        else
        {
        }
        succeeded = mercury__set__contains_2_p_0((MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_proc_analysis_kind_0, ProcAnalysisKinds_8, ((MR_Box) ((MR_Integer) 4)));
        if (succeeded)
        {
          MR_Word Var_65;
          MR_Word Var_22;
          MR_Box conv17_Var_22;
          MR_Box conv16_STATE_VARIABLE_IO_67_67;

          {
            Var_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_65, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_11[0]));
            MR_hl_field(MR_mktag(0), Var_65, 1) = ((MR_Box) (transform_hlds__intermod__append_analysis_pragmas_to_opt_file_4_p_0_6));
            MR_hl_field(MR_mktag(0), Var_65, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_65, 3) = ((MR_Box) (ModuleInfo_5));
          }
          mercury__list__foldl2_6_p_2((MR_Word) &transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_order_pred_info_0, (MR_Word) &transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, Var_65, OrderPredInfos_16, ((MR_Box) ((MR_Integer) 1)), &conv17_Var_22, ((MR_Box) ((MR_Integer) 0)), &conv16_STATE_VARIABLE_IO_67_67);
          Var_22 = ((MR_Word) conv17_Var_22);
        }
        else
        {
        }
        succeeded = mercury__set__contains_2_p_0((MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_proc_analysis_kind_0, ProcAnalysisKinds_8, ((MR_Box) ((MR_Integer) 5)));
        if (succeeded)
        {
          MR_Word Var_69;
          MR_Word Var_23;
          MR_Box conv20_Var_23;
          MR_Box conv19_STATE_VARIABLE_IO_71_71;

          {
            Var_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_69, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_11[0]));
            MR_hl_field(MR_mktag(0), Var_69, 1) = ((MR_Box) (transform_hlds__intermod__append_analysis_pragmas_to_opt_file_4_p_0_7));
            MR_hl_field(MR_mktag(0), Var_69, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_69, 3) = ((MR_Box) (ModuleInfo_5));
          }
          mercury__list__foldl2_6_p_2((MR_Word) &transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_order_pred_info_0, (MR_Word) &transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, Var_69, OrderPredInfos_16, ((MR_Box) ((MR_Integer) 1)), &conv20_Var_23, ((MR_Box) ((MR_Integer) 0)), &conv19_STATE_VARIABLE_IO_71_71);
          Var_23 = ((MR_Word) conv20_Var_23);
        }
        else
        {
        }
        succeeded = mercury__set__contains_2_p_0((MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_proc_analysis_kind_0, ProcAnalysisKinds_8, ((MR_Box) ((MR_Integer) 6)));
        if (succeeded)
        {
          MR_Word Var_73;
          MR_Word Var_24;
          MR_Box conv23_Var_24;
          MR_Box conv22_STATE_VARIABLE_IO_75_75;

          {
            Var_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_73, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_11[0]));
            MR_hl_field(MR_mktag(0), Var_73, 1) = ((MR_Box) (transform_hlds__intermod__append_analysis_pragmas_to_opt_file_4_p_0_8));
            MR_hl_field(MR_mktag(0), Var_73, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_73, 3) = ((MR_Box) (ModuleInfo_5));
          }
          mercury__list__foldl2_6_p_2((MR_Word) &transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_order_pred_info_0, (MR_Word) &transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, Var_73, OrderPredInfos_16, ((MR_Box) ((MR_Integer) 1)), &conv23_Var_24, ((MR_Box) ((MR_Integer) 0)), &conv22_STATE_VARIABLE_IO_75_75);
          Var_24 = ((MR_Word) conv23_Var_24);
        }
        else
        {
        }
        mercury__io__set_output_stream_4_p_0(OldStream_14, &Var_25);
        mercury__io__close_output_3_p_0(OptFile_13);
      }
    }
  }
}

static void MR_CALL 
transform_hlds__intermod__write_initial_opt_file_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_IntermodInfo_11;

    transform_hlds__intermod__gather_opt_export_instances_in_class_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3), &conv0_STATE_VARIABLE_IntermodInfo_11);
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_IntermodInfo_11));
  }
}

void MR_CALL 
transform_hlds__intermod__write_initial_opt_file_4_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_24,
  MR_Word * STATE_VARIABLE_ModuleInfo_25)
{
  {
    MR_Word Globals_7;
    MR_Word ModuleName_8;
    MR_String TmpName_9;
    MR_Word Result_10;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_24, &Globals_7);
    hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_ModuleInfo_0_24, &ModuleName_8);
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_7, (MR_Integer) 0, (MR_String) ".opt.tmp", ModuleName_8, &TmpName_9);
    mercury__io__open_output_4_p_0(TmpName_9, &Result_10);
    if (((MR_tag((MR_Word) Result_10)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word Err_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), Result_10, (MR_Integer) 0)));
      MR_String Msg_12;

      Msg_12 = mercury__io__error_message_1_f_0(Err_11);
      mercury__io__write_string_3_p_0(Msg_12);
      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
      *STATE_VARIABLE_ModuleInfo_25 = STATE_VARIABLE_ModuleInfo_0_24;
    }
    else
    {
      MR_Word TypeCtorInfo_12_59;
      MR_Word FileStream_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Result_10, (MR_Integer) 0)));
      MR_Word OutputStream_14;
      MR_Word RealPredIds_15;
      MR_Word AssertionTable_16;
      MR_Word AssertPredIds_17;
      MR_Word PredIds_18;
      MR_Integer Threshold_19;
      MR_Word Deforestation_20;
      MR_Integer HigherOrderSizeLimit_21;
      MR_Word STATE_VARIABLE_IntermodInfo_36_36;
      MR_Word STATE_VARIABLE_IntermodInfo_38_38;
      MR_Word STATE_VARIABLE_IntermodInfo_39_39;
      MR_Word STATE_VARIABLE_IntermodInfo_40_40;
      MR_Word STATE_VARIABLE_ModuleInfo_42_42;
      MR_Word Modules_52;
      MR_Word Procs_53;
      MR_Word ProcDecls_54;
      MR_Word ExtraExportedPreds0_69;
      MR_Word STATE_VARIABLE_IntermodInfo_18_70;
      MR_Word ModuleInfo_76;
      MR_Word Instances_77;
      MR_Word Var_78;
      MR_Word Var_89;
      MR_Word Var_90;
      MR_Word Var_91;
      MR_Word Var_92;
      MR_Word Var_93;
      MR_Word Var_94;
      MR_Box conv1_STATE_VARIABLE_IntermodInfo_39_39;
      MR_Word Var_23;

      mercury__io__set_output_stream_4_p_0(FileStream_13, &OutputStream_14);
      hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(STATE_VARIABLE_ModuleInfo_0_24, &RealPredIds_15);
      hlds__hlds_module__module_info_get_assertion_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_24, &AssertionTable_16);
      hlds__hlds_data__assertion_table_pred_ids_2_p_0(AssertionTable_16, &AssertPredIds_17);
      PredIds_18 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, AssertPredIds_17, RealPredIds_15);
      libs__globals__lookup_int_option_3_p_0(Globals_7, (MR_Integer) 350, &Threshold_19);
      libs__globals__lookup_bool_option_3_p_0(Globals_7, (MR_Integer) 398, &Deforestation_20);
      libs__globals__lookup_int_option_3_p_0(Globals_7, (MR_Integer) 362, &HigherOrderSizeLimit_21);
      mercury__set__init_1_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, &Modules_52);
      TypeCtorInfo_12_59 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
      mercury__set__init_1_p_0(TypeCtorInfo_12_59, &Procs_53);
      mercury__set__init_1_p_0(TypeCtorInfo_12_59, &ProcDecls_54);
      {
        STATE_VARIABLE_IntermodInfo_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_36_36, 0) = ((MR_Box) (Modules_52));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_36_36, 1) = ((MR_Box) (Procs_53));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_36_36, 2) = ((MR_Box) (ProcDecls_54));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_36_36, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_36_36, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_36_36, 5) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_24));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_36_36, 6) = ((MR_Box) ((MR_Integer) 0));
      }
      transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_111_112_116_95_101_120_112_111_114_116_95_112_114_101_100_115_95_105_110_95_108_105_115_116_95_95_91_51_93_95_48_8_p_0(PredIds_18, (MR_Integer) 0, Threshold_19, HigherOrderSizeLimit_21, Deforestation_20, STATE_VARIABLE_IntermodInfo_36_36, &STATE_VARIABLE_IntermodInfo_18_70);
      mercury__set__init_1_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, &ExtraExportedPreds0_69);
      transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_111_112_116_95_101_120_112_111_114_116_95_112_114_101_100_115_95_102_105_120_112_111_105_110_116_95_95_91_50_93_95_48_7_p_0(ExtraExportedPreds0_69, Threshold_19, HigherOrderSizeLimit_21, Deforestation_20, STATE_VARIABLE_IntermodInfo_18_70, &STATE_VARIABLE_IntermodInfo_38_38);
      Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_38_38, (MR_Integer) 0)));
      Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_38_38, (MR_Integer) 1)));
      Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_38_38, (MR_Integer) 2)));
      Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_38_38, (MR_Integer) 3)));
      Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_38_38, (MR_Integer) 4)));
      ModuleInfo_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_38_38, (MR_Integer) 5)));
      Var_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_38_38, (MR_Integer) 6)));
      hlds__hlds_module__module_info_get_instance_table_2_p_0(ModuleInfo_76, &Instances_77);
      {
        Var_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_78, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_5[2]));
        MR_hl_field(MR_mktag(0), Var_78, 1) = ((MR_Box) (transform_hlds__intermod__write_initial_opt_file_4_p_0_1));
        MR_hl_field(MR_mktag(0), Var_78, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_78, 3) = ((MR_Box) (ModuleInfo_76));
      }
      mercury__map__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0, (MR_Word) &transform_hlds__intermod_scalar_common_1[0], (MR_Word) &transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_intermod_info_0, Var_78, Instances_77, ((MR_Box) (STATE_VARIABLE_IntermodInfo_38_38)), &conv1_STATE_VARIABLE_IntermodInfo_39_39);
      STATE_VARIABLE_IntermodInfo_39_39 = ((MR_Word) conv1_STATE_VARIABLE_IntermodInfo_39_39);
      transform_hlds__intermod__gather_opt_export_types_2_p_0(STATE_VARIABLE_IntermodInfo_39_39, &STATE_VARIABLE_IntermodInfo_40_40);
      transform_hlds__intermod__write_intermod_info_3_p_0(STATE_VARIABLE_IntermodInfo_40_40);
      transform_hlds__intermod__intermod_info_get_module_info_2_p_0(STATE_VARIABLE_IntermodInfo_40_40, &STATE_VARIABLE_ModuleInfo_42_42);
      mercury__io__set_output_stream_4_p_0(OutputStream_14, &Var_23);
      mercury__io__close_output_3_p_0(FileStream_13);
      transform_hlds__intermod__do_maybe_opt_export_entities_3_p_0(STATE_VARIABLE_IntermodInfo_40_40, STATE_VARIABLE_ModuleInfo_42_42, STATE_VARIABLE_ModuleInfo_25);
    }
  }
}

static void MR_CALL 
transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_111_112_116_95_101_120_112_111_114_116_95_112_114_101_100_115_95_102_105_120_112_111_105_110_116_95_95_91_50_93_95_48_7_p_0(
  MR_Word ExtraExportedPreds0_8,
  MR_Integer InlineThreshold_10,
  MR_Integer HigherOrderSizeLimit_11,
  MR_Word Deforestation_12,
  MR_Word STATE_VARIABLE_IntermodInfo_0_19,
  MR_Word * STATE_VARIABLE_IntermodInfo_20)
{
  while (MR_TRUE)
  {
    MR_Word TypeCtorInfo_24_24 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
    MR_Word ExtraExportedPreds_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_19, (MR_Integer) 2)));
    MR_Word NewlyExportedPreds_15;
    MR_Word Var_21;
    MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_19, (MR_Integer) 0)));
    MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_19, (MR_Integer) 1)));
    MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_19, (MR_Integer) 3)));
    MR_Word Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_19, (MR_Integer) 4)));
    MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_19, (MR_Integer) 5)));
    MR_Word Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_19, (MR_Integer) 6)));

    // setup for model_det tailcalls optimized into a loop
    Var_21 = mercury__set__difference_2_f_0(TypeCtorInfo_24_24, ExtraExportedPreds_14, ExtraExportedPreds0_8);
    NewlyExportedPreds_15 = mercury__set__to_sorted_list_1_f_0(TypeCtorInfo_24_24, Var_21);
    if ((NewlyExportedPreds_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_IntermodInfo_20 = STATE_VARIABLE_IntermodInfo_0_19;
    else
    {
      MR_Word STATE_VARIABLE_IntermodInfo_22_22;
      MR_Word next_value_of_ExtraExportedPreds0_8;
      MR_Word next_value_of_STATE_VARIABLE_IntermodInfo_0_19;

      transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_111_112_116_95_101_120_112_111_114_116_95_112_114_101_100_115_95_105_110_95_108_105_115_116_95_95_91_51_93_95_48_8_p_0(NewlyExportedPreds_15, (MR_Integer) 1, InlineThreshold_10, HigherOrderSizeLimit_11, Deforestation_12, STATE_VARIABLE_IntermodInfo_0_19, &STATE_VARIABLE_IntermodInfo_22_22);
      // direct tailcall eliminated
      next_value_of_ExtraExportedPreds0_8 = ExtraExportedPreds_14;
      next_value_of_STATE_VARIABLE_IntermodInfo_0_19 = STATE_VARIABLE_IntermodInfo_22_22;
      ExtraExportedPreds0_8 = next_value_of_ExtraExportedPreds0_8;
      STATE_VARIABLE_IntermodInfo_0_19 = next_value_of_STATE_VARIABLE_IntermodInfo_0_19;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_111_112_116_95_101_120_112_111_114_116_95_112_114_101_100_115_95_105_110_95_108_105_115_116_95_95_91_51_93_95_48_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ProcessLocalPreds_2,
  MR_Integer InlineThreshold_4,
  MR_Integer HigherOrderSizeLimit_5,
  MR_Word Deforestation_6,
  MR_Word STATE_VARIABLE_IntermodInfo_0_7,
  MR_Word * STATE_VARIABLE_IntermodInfo_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_IntermodInfo_8 = STATE_VARIABLE_IntermodInfo_0_7;
    else
    {
      MR_Word TypeCtorInfo_58_58;
      MR_Word TypeCtorInfo_59_59;
      MR_Word PredId_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word PredIds_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ModuleInfo0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_7, (MR_Integer) 5)));
      MR_Word PredTable0_26;
      MR_Word PredInfo0_27;
      MR_Word TypeSpecInfo_28;
      MR_Word TypeSpecForcePreds_30;
      MR_Word ClausesInfo0_33;
      MR_Word STATE_VARIABLE_IntermodInfo_56_56;
      MR_Word Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_7, (MR_Integer) 0)));
      MR_Word Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_7, (MR_Integer) 1)));
      MR_Word Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_7, (MR_Integer) 2)));
      MR_Word Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_7, (MR_Integer) 3)));
      MR_Word Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_7, (MR_Integer) 4)));
      MR_Word Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_7, (MR_Integer) 6)));
      MR_Box conv0_PredInfo0_27;
      MR_Word Var_29;
      MR_Word Var_31;
      MR_Word Var_32;
      MR_Word ExplicitVarTypes_34;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_IntermodInfo_0_7;

      hlds__hlds_module__module_info_get_preds_2_p_0(ModuleInfo0_25, &PredTable0_26);
      TypeCtorInfo_58_58 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
      TypeCtorInfo_59_59 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
      mercury__map__lookup_3_p_0(TypeCtorInfo_58_58, TypeCtorInfo_59_59, PredTable0_26, ((MR_Box) (PredId_17)), &conv0_PredInfo0_27);
      PredInfo0_27 = ((MR_Word) conv0_PredInfo0_27);
      hlds__hlds_module__module_info_get_type_spec_info_2_p_0(ModuleInfo0_25, &TypeSpecInfo_28);
      Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeSpecInfo_28, (MR_Integer) 0)));
      TypeSpecForcePreds_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeSpecInfo_28, (MR_Integer) 1)));
      Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeSpecInfo_28, (MR_Integer) 2)));
      Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeSpecInfo_28, (MR_Integer) 3)));
      hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(PredInfo0_27, &ClausesInfo0_33);
      hlds__hlds_clauses__clauses_info_get_explicit_vartypes_2_p_0(ClausesInfo0_33, &ExplicitVarTypes_34);
      succeeded = hlds__vartypes__vartypes_is_empty_1_p_0(ExplicitVarTypes_34);
      if (succeeded)
        succeeded = transform_hlds__intermod__should_opt_export_pred_8_p_0(ModuleInfo0_25, PredId_17, PredInfo0_27, ProcessLocalPreds_2, TypeSpecForcePreds_30, InlineThreshold_4, HigherOrderSizeLimit_5, Deforestation_6);
      if (succeeded)
      {
        MR_Word ClausesRep0_37;
        MR_Word ItemNumbers0_38;
        MR_Word Var_74;

        hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(ClausesInfo0_33, &ClausesRep0_37, &ItemNumbers0_38);
        Var_74 = hlds__hlds_pred__invalid_pred_id_0_f_0();
        succeeded = hlds__hlds_pred____Unify____pred_id_0_0(PredId_17, Var_74);
        if (succeeded)
          STATE_VARIABLE_IntermodInfo_56_56 = STATE_VARIABLE_IntermodInfo_0_7;
        else
        {
          MR_Word DoWrite0_96;
          MR_Word STATE_VARIABLE_IntermodInfo_51_97;

          transform_hlds__intermod__intermod_do_add_proc_4_p_0(PredId_17, &DoWrite0_96, STATE_VARIABLE_IntermodInfo_0_7, &STATE_VARIABLE_IntermodInfo_51_97);
          switch (DoWrite0_96) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              STATE_VARIABLE_IntermodInfo_56_56 = STATE_VARIABLE_IntermodInfo_0_7;
              break;
            case (MR_Integer) 1:
              {
                MR_Word Clauses0_39;
                MR_Word Clauses_40;
                MR_Word DoWrite_101;
                MR_Word ClausesRep_102;
                MR_Word STATE_VARIABLE_IntermodInfo_52_103;

                hlds__hlds_clauses__get_clause_list_for_replacement_2_p_0(ClausesRep0_37, &Clauses0_39);
                transform_hlds__intermod__gather_entities_to_opt_export_in_clauses_5_p_0(Clauses0_39, &Clauses_40, &DoWrite_101, STATE_VARIABLE_IntermodInfo_51_97, &STATE_VARIABLE_IntermodInfo_52_103);
                hlds__hlds_clauses__set_clause_list_2_p_0(Clauses_40, &ClausesRep_102);
                switch (DoWrite_101) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    STATE_VARIABLE_IntermodInfo_56_56 = STATE_VARIABLE_IntermodInfo_0_7;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word ClausesInfo_43;
                      MR_Word PredInfo_44;
                      MR_Word PredTable_45;
                      MR_Word ModuleInfo_46;
                      MR_Word Preds0_47;
                      MR_Word Preds_48;
                      MR_Word STATE_VARIABLE_IntermodInfo_54_54;
                      MR_Word STATE_VARIABLE_IntermodInfo_55_55;
                      MR_Word Var_78;
                      MR_Word Var_79;
                      MR_Word Var_80;
                      MR_Word Var_81;
                      MR_Word Var_82;
                      MR_Word Var_83;

                      hlds__hlds_clauses__clauses_info_set_clauses_rep_4_p_0(ClausesRep_102, ItemNumbers0_38, ClausesInfo0_33, &ClausesInfo_43);
                      hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(ClausesInfo_43, PredInfo0_27, &PredInfo_44);
                      mercury__map__det_update_4_p_0(TypeCtorInfo_58_58, TypeCtorInfo_59_59, ((MR_Box) (PredId_17)), ((MR_Box) (PredInfo_44)), PredTable0_26, &PredTable_45);
                      hlds__hlds_module__module_info_set_preds_3_p_0(PredTable_45, ModuleInfo0_25, &ModuleInfo_46);
                      Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_52_103, (MR_Integer) 0)));
                      Preds0_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_52_103, (MR_Integer) 1)));
                      Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_52_103, (MR_Integer) 2)));
                      Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_52_103, (MR_Integer) 3)));
                      Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_52_103, (MR_Integer) 4)));
                      Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_52_103, (MR_Integer) 5)));
                      Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_52_103, (MR_Integer) 6)));
                      succeeded = hlds__hlds_pred__pred_info_pragma_goal_type_1_p_0(PredInfo_44);
                      if (succeeded)
                      {
                        {
                          STATE_VARIABLE_IntermodInfo_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_54_54, 0) = ((MR_Box) (Var_78));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_54_54, 1) = ((MR_Box) (Preds0_47));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_54_54, 2) = ((MR_Box) (Var_79));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_54_54, 3) = ((MR_Box) (Var_80));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_54_54, 4) = ((MR_Box) (Var_81));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_54_54, 5) = ((MR_Box) (Var_82));
                          MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_54_54, 6) = ((MR_Box) ((MR_Integer) 1));
                        }
                      }
                      else
                        STATE_VARIABLE_IntermodInfo_54_54 = STATE_VARIABLE_IntermodInfo_52_103;
                      mercury__set__insert_3_p_0(TypeCtorInfo_58_58, ((MR_Box) (PredId_17)), Preds0_47, &Preds_48);
                      transform_hlds__intermod__intermod_info_set_preds_3_p_0(Preds_48, STATE_VARIABLE_IntermodInfo_54_54, &STATE_VARIABLE_IntermodInfo_55_55);
                      transform_hlds__intermod__intermod_info_set_module_info_3_p_0(ModuleInfo_46, STATE_VARIABLE_IntermodInfo_55_55, &STATE_VARIABLE_IntermodInfo_56_56);
                    }
                    break;
                }
              }
              break;
          }
        }
      }
      else
        STATE_VARIABLE_IntermodInfo_56_56 = STATE_VARIABLE_IntermodInfo_0_7;
      // direct tailcall eliminated
      next_value_of_HeadVar__1_1 = PredIds_18;
      next_value_of_STATE_VARIABLE_IntermodInfo_0_7 = STATE_VARIABLE_IntermodInfo_56_56;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_IntermodInfo_0_7 = next_value_of_STATE_VARIABLE_IntermodInfo_0_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_info_set_module_info_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word STATE_VARIABLE_IntermodInfo_0_6,
  MR_Word * STATE_VARIABLE_IntermodInfo_7)
{
  {
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_6, (MR_Integer) 0)));
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_6, (MR_Integer) 1)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_6, (MR_Integer) 2)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_6, (MR_Integer) 3)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_6, (MR_Integer) 4)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_6, (MR_Integer) 6)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_6, (MR_Integer) 5)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_IntermodInfo_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ModuleInfo_4));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_15));
    }
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_info_set_preds_3_p_0(
  MR_Word Procs_4,
  MR_Word STATE_VARIABLE_IntermodInfo_0_6,
  MR_Word * STATE_VARIABLE_IntermodInfo_7)
{
  {
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_6, (MR_Integer) 0)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_6, (MR_Integer) 2)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_6, (MR_Integer) 3)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_6, (MR_Integer) 4)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_6, (MR_Integer) 5)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_6, (MR_Integer) 6)));
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_6, (MR_Integer) 1)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_IntermodInfo_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Procs_4));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_15));
    }
  }
}

static void MR_CALL 
transform_hlds__intermod__gather_entities_to_opt_export_in_clauses_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_IntermodInfo_0_4,
  MR_Word * STATE_VARIABLE_IntermodInfo_5)
{
  if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *HeadVar__3_3 = (MR_Integer) 1;
    *STATE_VARIABLE_IntermodInfo_5 = STATE_VARIABLE_IntermodInfo_0_4;
  }
  else
  {
    MR_Word Clause0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
    MR_Word Clauses0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
    MR_Word Clause_11;
    MR_Word Clauses_12;
    MR_Word Goal0_15;
    MR_Word Goal_16;
    MR_Word DoWrite1_17;
    MR_Word STATE_VARIABLE_IntermodInfo_20_20;
    MR_Word GoalExpr0_33;
    MR_Word GoalInfo_34;
    MR_Word GoalExpr_35;
    MR_Word Var_22;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_23;

    Goal0_15 = hlds__hlds_clauses__clause_body_1_f_0(Clause0_9);
    GoalExpr0_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_15, (MR_Integer) 0)));
    GoalInfo_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_15, (MR_Integer) 1)));
    transform_hlds__intermod__gather_entities_to_opt_export_in_goal_expr_5_p_0(GoalExpr0_33, &GoalExpr_35, &DoWrite1_17, STATE_VARIABLE_IntermodInfo_0_4, &STATE_VARIABLE_IntermodInfo_20_20);
    {
      Goal_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Goal_16, 0) = ((MR_Box) (GoalExpr_35));
      MR_hl_field(MR_mktag(0), Goal_16, 1) = ((MR_Box) (GoalInfo_34));
    }
    Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Clause0_9, (MR_Integer) 0)));
    Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Clause0_9, (MR_Integer) 1)));
    Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Clause0_9, (MR_Integer) 2)));
    Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), Clause0_9, (MR_Integer) 3)));
    Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), Clause0_9, (MR_Integer) 4)));
    {
      Clause_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Clause_11, 0) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), Clause_11, 1) = ((MR_Box) (Goal_16));
      MR_hl_field(MR_mktag(0), Clause_11, 2) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), Clause_11, 3) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(0), Clause_11, 4) = ((MR_Box) (Var_26));
    }
    switch (DoWrite1_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          Clauses_12 = Clauses0_10;
          *HeadVar__3_3 = (MR_Integer) 0;
          *STATE_VARIABLE_IntermodInfo_5 = STATE_VARIABLE_IntermodInfo_20_20;
        }
        break;
      case (MR_Integer) 1:
        transform_hlds__intermod__gather_entities_to_opt_export_in_clauses_5_p_0(Clauses0_10, &Clauses_12, HeadVar__3_3, STATE_VARIABLE_IntermodInfo_20_20, STATE_VARIABLE_IntermodInfo_5);
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Clause_11));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Clauses_12));
    }
  }
}

static void MR_CALL 
transform_hlds__intermod__module_qualify_unify_rhs_5_p_0(
  MR_Word RHS0_6,
  MR_Word * RHS_7,
  MR_Word * DoWrite_8,
  MR_Word STATE_VARIABLE_IntermodInfo_0_28,
  MR_Word * STATE_VARIABLE_IntermodInfo_29)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) RHS0_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *RHS_7 = RHS0_6;
          *DoWrite_8 = (MR_Integer) 1;
          *STATE_VARIABLE_IntermodInfo_29 = STATE_VARIABLE_IntermodInfo_0_28;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Functor_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), RHS0_6, (MR_Integer) 0)));
          MR_Word _Exist_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), RHS0_6, (MR_Integer) 1)));
          MR_Word _Vars_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), RHS0_6, (MR_Integer) 2)));
          MR_Word ShroudedPredProcId_24;

          *RHS_7 = RHS0_6;
          succeeded = ((((MR_tag((MR_Word) Functor_21)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Functor_21, (MR_Integer) 0)))) == (MR_Integer) 4)));
          if (succeeded)
          {
            ShroudedPredProcId_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), Functor_21, (MR_Integer) 1)));
            {
              MR_Word PredId_26;
              MR_Word Var_30;
              MR_Integer Var_27;
              MR_Word Var_39;

              Var_30 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(ShroudedPredProcId_24);
              PredId_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 0)));
              Var_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 1)));
              Var_39 = hlds__hlds_pred__invalid_pred_id_0_f_0();
              succeeded = hlds__hlds_pred____Unify____pred_id_0_0(PredId_26, Var_39);
              if (succeeded)
              {
                *DoWrite_8 = (MR_Integer) 0;
                *STATE_VARIABLE_IntermodInfo_29 = STATE_VARIABLE_IntermodInfo_0_28;
              }
              else
                transform_hlds__intermod__intermod_do_add_proc_4_p_0(PredId_26, DoWrite_8, STATE_VARIABLE_IntermodInfo_0_28, STATE_VARIABLE_IntermodInfo_29);
            }
          }
          else
          {
            *DoWrite_8 = (MR_Integer) 1;
            *STATE_VARIABLE_IntermodInfo_29 = STATE_VARIABLE_IntermodInfo_0_28;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Purity_11 = ((((MR_Word) (MR_hl_field(MR_mktag(2), RHS0_6, (MR_Integer) 0)))) & (MR_Integer) 3);
          MR_Word HOGroundness_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), RHS0_6, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
          MR_Word PorF_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), RHS0_6, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
          MR_Word NonLocals_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), RHS0_6, (MR_Integer) 2)));
          MR_Word QuantVars_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), RHS0_6, (MR_Integer) 3)));
          MR_Word Modes_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), RHS0_6, (MR_Integer) 4)));
          MR_Word Detism_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), RHS0_6, (MR_Integer) 5)));
          MR_Word Goal0_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), RHS0_6, (MR_Integer) 6)));
          MR_Word Goal_20;
          MR_Word GoalExpr0_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_19, (MR_Integer) 0)));
          MR_Word GoalInfo_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_19, (MR_Integer) 1)));
          MR_Word GoalExpr_49;

          transform_hlds__intermod__gather_entities_to_opt_export_in_goal_expr_5_p_0(GoalExpr0_47, &GoalExpr_49, DoWrite_8, STATE_VARIABLE_IntermodInfo_0_28, STATE_VARIABLE_IntermodInfo_29);
          {
            Goal_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Goal_20, 0) = ((MR_Box) (GoalExpr_49));
            MR_hl_field(MR_mktag(0), Goal_20, 1) = ((MR_Box) (GoalInfo_48));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
            *RHS_7 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) ((Purity_11 | ((((HOGroundness_12 << (MR_Integer) 2)) | ((PorF_13 << (MR_Integer) 3)))))));
            MR_hl_field(MR_mktag(2), base, 1) = (MR_Integer) 0;
            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (NonLocals_15));
            MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (QuantVars_16));
            MR_hl_field(MR_mktag(2), base, 4) = ((MR_Box) (Modes_17));
            MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (Detism_18));
            MR_hl_field(MR_mktag(2), base, 6) = ((MR_Box) (Goal_20));
          }
        }
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__intermod__gather_entities_to_opt_export_in_cases_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_IntermodInfo_0_4,
  MR_Word * STATE_VARIABLE_IntermodInfo_5)
{
  if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *HeadVar__3_3 = (MR_Integer) 1;
    *STATE_VARIABLE_IntermodInfo_5 = STATE_VARIABLE_IntermodInfo_0_4;
  }
  else
  {
    MR_Word Case0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
    MR_Word Cases0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
    MR_Word Case_11;
    MR_Word Cases_12;
    MR_Word MainConsId_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case0_9, (MR_Integer) 0)));
    MR_Word OtherConsIds_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case0_9, (MR_Integer) 1)));
    MR_Word Goal0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case0_9, (MR_Integer) 2)));
    MR_Word Goal_18;
    MR_Word STATE_VARIABLE_DoWrite_22_22;
    MR_Word STATE_VARIABLE_IntermodInfo_23_23;
    MR_Word GoalExpr0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_17, (MR_Integer) 0)));
    MR_Word GoalInfo_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_17, (MR_Integer) 1)));
    MR_Word GoalExpr_34;

    transform_hlds__intermod__gather_entities_to_opt_export_in_goal_expr_5_p_0(GoalExpr0_32, &GoalExpr_34, &STATE_VARIABLE_DoWrite_22_22, STATE_VARIABLE_IntermodInfo_0_4, &STATE_VARIABLE_IntermodInfo_23_23);
    {
      Goal_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Goal_18, 0) = ((MR_Box) (GoalExpr_34));
      MR_hl_field(MR_mktag(0), Goal_18, 1) = ((MR_Box) (GoalInfo_33));
    }
    {
      Case_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Case_11, 0) = ((MR_Box) (MainConsId_15));
      MR_hl_field(MR_mktag(0), Case_11, 1) = ((MR_Box) (OtherConsIds_16));
      MR_hl_field(MR_mktag(0), Case_11, 2) = ((MR_Box) (Goal_18));
    }
    switch (STATE_VARIABLE_DoWrite_22_22) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          Cases_12 = Cases0_10;
          *HeadVar__3_3 = STATE_VARIABLE_DoWrite_22_22;
          *STATE_VARIABLE_IntermodInfo_5 = STATE_VARIABLE_IntermodInfo_23_23;
        }
        break;
      case (MR_Integer) 1:
        transform_hlds__intermod__gather_entities_to_opt_export_in_cases_5_p_0(Cases0_10, &Cases_12, HeadVar__3_3, STATE_VARIABLE_IntermodInfo_23_23, STATE_VARIABLE_IntermodInfo_5);
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Case_11));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Cases_12));
    }
  }
}

static void MR_CALL 
transform_hlds__intermod__gather_entities_to_opt_export_in_goals_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_IntermodInfo_0_4,
  MR_Word * STATE_VARIABLE_IntermodInfo_5)
{
  if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *HeadVar__3_3 = (MR_Integer) 1;
    *STATE_VARIABLE_IntermodInfo_5 = STATE_VARIABLE_IntermodInfo_0_4;
  }
  else
  {
    MR_Word Goal0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
    MR_Word Goals0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
    MR_Word Goal_11;
    MR_Word Goals_12;
    MR_Word STATE_VARIABLE_DoWrite_18_18;
    MR_Word STATE_VARIABLE_IntermodInfo_19_19;
    MR_Word GoalExpr0_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_9, (MR_Integer) 0)));
    MR_Word GoalInfo_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_9, (MR_Integer) 1)));
    MR_Word GoalExpr_30;

    transform_hlds__intermod__gather_entities_to_opt_export_in_goal_expr_5_p_0(GoalExpr0_28, &GoalExpr_30, &STATE_VARIABLE_DoWrite_18_18, STATE_VARIABLE_IntermodInfo_0_4, &STATE_VARIABLE_IntermodInfo_19_19);
    {
      Goal_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Goal_11, 0) = ((MR_Box) (GoalExpr_30));
      MR_hl_field(MR_mktag(0), Goal_11, 1) = ((MR_Box) (GoalInfo_29));
    }
    switch (STATE_VARIABLE_DoWrite_18_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          Goals_12 = Goals0_10;
          *HeadVar__3_3 = STATE_VARIABLE_DoWrite_18_18;
          *STATE_VARIABLE_IntermodInfo_5 = STATE_VARIABLE_IntermodInfo_19_19;
        }
        break;
      case (MR_Integer) 1:
        transform_hlds__intermod__gather_entities_to_opt_export_in_goals_5_p_0(Goals0_10, &Goals_12, HeadVar__3_3, STATE_VARIABLE_IntermodInfo_19_19, STATE_VARIABLE_IntermodInfo_5);
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_11));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_12));
    }
  }
}

static void MR_CALL 
transform_hlds__intermod__gather_entities_to_opt_export_in_goal_expr_5_p_0(
  MR_Word GoalExpr0_6,
  MR_Word * GoalExpr_7,
  MR_Word * DoWrite_8,
  MR_Word STATE_VARIABLE_IntermodInfo_0_84,
  MR_Word * STATE_VARIABLE_IntermodInfo_85)
{
  switch (MR_tag((MR_Word) GoalExpr0_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word SubGoal0_63 = (MR_Word) MR_body(((MR_Word) GoalExpr0_6), (MR_Integer) 0);
        MR_Word SubGoal_64;

        transform_hlds__intermod__gather_entities_to_opt_export_in_goal_5_p_0(SubGoal0_63, &SubGoal_64, DoWrite_8, STATE_VARIABLE_IntermodInfo_0_84, STATE_VARIABLE_IntermodInfo_85);
        *GoalExpr_7 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) SubGoal_64);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word LVar_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr0_6, (MR_Integer) 0)));
        MR_Word RHS0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr0_6, (MR_Integer) 1)));
        MR_Word Mode_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr0_6, (MR_Integer) 2)));
        MR_Word Kind_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr0_6, (MR_Integer) 3)));
        MR_Word UnifyContext_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr0_6, (MR_Integer) 4)));
        MR_Word RHS_15;

        transform_hlds__intermod__module_qualify_unify_rhs_5_p_0(RHS0_11, &RHS_15, DoWrite_8, STATE_VARIABLE_IntermodInfo_0_84, STATE_VARIABLE_IntermodInfo_85);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
          *GoalExpr_7 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (LVar_10));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (RHS_15));
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (Mode_12));
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (Kind_13));
          MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (UnifyContext_14));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word PredId_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr0_6, (MR_Integer) 0)));
        MR_Integer Var_17 = ((MR_Integer) (MR_hl_field(MR_mktag(2), GoalExpr0_6, (MR_Integer) 1)));
        MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr0_6, (MR_Integer) 2)));
        MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr0_6, (MR_Integer) 3)));
        MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr0_6, (MR_Integer) 4)));
        MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr0_6, (MR_Integer) 5)));

        transform_hlds__intermod__intermod_add_proc_4_p_0(PredId_16, DoWrite_8, STATE_VARIABLE_IntermodInfo_0_84, STATE_VARIABLE_IntermodInfo_85);
        *GoalExpr_7 = GoalExpr0_6;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 0)))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word CallType_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 1)));
            MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 2)));
            MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 3)));
            MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 4)));
            MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 5)));

            *GoalExpr_7 = GoalExpr0_6;
            switch (MR_tag((MR_Word) CallType_22)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *DoWrite_8 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
              case (MR_Integer) 3:
                *DoWrite_8 = (MR_Integer) 0;
                break;
            }
            *STATE_VARIABLE_IntermodInfo_85 = STATE_VARIABLE_IntermodInfo_0_84;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Attrs_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 1)));
            MR_Word MaybeMayDuplicate_44;
            MR_Word Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 2)));
            MR_Integer Var_39 = ((MR_Integer) (MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 3)));
            MR_Word Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 4)));
            MR_Word Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 5)));
            MR_Word Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 6)));
            MR_Word Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 7)));

            *GoalExpr_7 = GoalExpr0_6;
            MaybeMayDuplicate_44 = parse_tree__prog_data_foreign__get_may_duplicate_1_f_0(Attrs_37);
            if ((MaybeMayDuplicate_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              *DoWrite_8 = (MR_Integer) 1;
            else
            {
              MR_Word MayDuplicate_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeMayDuplicate_44, (MR_Integer) 0)));

              switch (MayDuplicate_45) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *DoWrite_8 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 1:
                  *DoWrite_8 = (MR_Integer) 0;
                  break;
              }
            }
            *STATE_VARIABLE_IntermodInfo_85 = STATE_VARIABLE_IntermodInfo_0_84;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConjType_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 1)));
            MR_Word Goals0_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 2)));
            MR_Word Goals_48;

            transform_hlds__intermod__gather_entities_to_opt_export_in_goals_5_p_0(Goals0_47, &Goals_48, DoWrite_8, STATE_VARIABLE_IntermodInfo_0_84, STATE_VARIABLE_IntermodInfo_85);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_7 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ConjType_46));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Goals_48));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Goals0_105 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 1)));
            MR_Word Goals_106;

            transform_hlds__intermod__gather_entities_to_opt_export_in_goals_5_p_0(Goals0_105, &Goals_106, DoWrite_8, STATE_VARIABLE_IntermodInfo_0_84, STATE_VARIABLE_IntermodInfo_85);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_7 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Goals_106));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 1)));
            MR_Word CanFail_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 2)));
            MR_Word Cases0_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 3)));
            MR_Word Cases_52;

            transform_hlds__intermod__gather_entities_to_opt_export_in_cases_5_p_0(Cases0_51, &Cases_52, DoWrite_8, STATE_VARIABLE_IntermodInfo_0_84, STATE_VARIABLE_IntermodInfo_85);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_7 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_49));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (CanFail_50));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Cases_52));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 1)));
            MR_Word SubGoal0_107 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 2)));
            MR_Word SubGoal_108;

            transform_hlds__intermod__gather_entities_to_opt_export_in_goal_5_p_0(SubGoal0_107, &SubGoal_108, DoWrite_8, STATE_VARIABLE_IntermodInfo_0_84, STATE_VARIABLE_IntermodInfo_85);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_7 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Reason_65));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubGoal_108));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Vars_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 1)));
            MR_Word Cond0_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 2)));
            MR_Word Then0_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 3)));
            MR_Word Else0_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 4)));
            MR_Word Cond_57;
            MR_Word DoWrite1_58;
            MR_Word Then_59;
            MR_Word DoWrite2_60;
            MR_Word Else_61;
            MR_Word DoWrite3_62;
            MR_Word STATE_VARIABLE_IntermodInfo_93_93;
            MR_Word STATE_VARIABLE_IntermodInfo_94_94;
            MR_Word Var_96;
            MR_Word Var_97;
            MR_Word Var_98;

            transform_hlds__intermod__gather_entities_to_opt_export_in_goal_5_p_0(Cond0_54, &Cond_57, &DoWrite1_58, STATE_VARIABLE_IntermodInfo_0_84, &STATE_VARIABLE_IntermodInfo_93_93);
            transform_hlds__intermod__gather_entities_to_opt_export_in_goal_5_p_0(Then0_55, &Then_59, &DoWrite2_60, STATE_VARIABLE_IntermodInfo_93_93, &STATE_VARIABLE_IntermodInfo_94_94);
            transform_hlds__intermod__gather_entities_to_opt_export_in_goal_5_p_0(Else0_56, &Else_61, &DoWrite3_62, STATE_VARIABLE_IntermodInfo_94_94, STATE_VARIABLE_IntermodInfo_85);
            {
              Var_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_98, 0) = ((MR_Box) (DoWrite3_62));
              MR_hl_field(MR_mktag(1), Var_98, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              Var_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_97, 0) = ((MR_Box) (DoWrite2_60));
              MR_hl_field(MR_mktag(1), Var_97, 1) = ((MR_Box) (Var_98));
            }
            {
              Var_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_96, 0) = ((MR_Box) (DoWrite1_58));
              MR_hl_field(MR_mktag(1), Var_96, 1) = ((MR_Box) (Var_97));
            }
            mercury__bool__and_list_2_p_0(Var_96, DoWrite_8);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_7 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Vars_53));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Cond_57));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Then_59));
              MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (Else_61));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word ShortHand0_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 1)));
            MR_Word ShortHand_78;

            switch (MR_tag((MR_Word) ShortHand0_66)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.intermod", (MR_String) "predicate \140transform_hlds.intermod.gather_entities_to_opt_export_in_goal_expr\'/5", (MR_String) "bi_implication");
                    return;
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word GoalType_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), ShortHand0_66, (MR_Integer) 0)));
                  MR_Word Outer_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), ShortHand0_66, (MR_Integer) 1)));
                  MR_Word Inner_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), ShortHand0_66, (MR_Integer) 2)));
                  MR_Word MaybeOutputVars_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), ShortHand0_66, (MR_Integer) 3)));
                  MR_Word MainGoal0_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), ShortHand0_66, (MR_Integer) 4)));
                  MR_Word OrElseGoals0_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), ShortHand0_66, (MR_Integer) 5)));
                  MR_Word OrElseInners_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), ShortHand0_66, (MR_Integer) 6)));
                  MR_Word MainGoal_74;
                  MR_Word DoWriteMain_75;
                  MR_Word OrElseGoals_76;
                  MR_Word DoWriteOrElse_77;
                  MR_Word STATE_VARIABLE_IntermodInfo_89_89;

                  transform_hlds__intermod__gather_entities_to_opt_export_in_goal_5_p_0(MainGoal0_71, &MainGoal_74, &DoWriteMain_75, STATE_VARIABLE_IntermodInfo_0_84, &STATE_VARIABLE_IntermodInfo_89_89);
                  transform_hlds__intermod__gather_entities_to_opt_export_in_goals_5_p_0(OrElseGoals0_72, &OrElseGoals_76, &DoWriteOrElse_77, STATE_VARIABLE_IntermodInfo_89_89, STATE_VARIABLE_IntermodInfo_85);
                  mercury__bool__and_3_p_0(DoWriteMain_75, DoWriteOrElse_77, DoWrite_8);
                  {
                    ShortHand_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ShortHand_78, 0) = ((MR_Box) (GoalType_67));
                    MR_hl_field(MR_mktag(1), ShortHand_78, 1) = ((MR_Box) (Outer_68));
                    MR_hl_field(MR_mktag(1), ShortHand_78, 2) = ((MR_Box) (Inner_69));
                    MR_hl_field(MR_mktag(1), ShortHand_78, 3) = ((MR_Box) (MaybeOutputVars_70));
                    MR_hl_field(MR_mktag(1), ShortHand_78, 4) = ((MR_Box) (MainGoal_74));
                    MR_hl_field(MR_mktag(1), ShortHand_78, 5) = ((MR_Box) (OrElseGoals_76));
                    MR_hl_field(MR_mktag(1), ShortHand_78, 6) = ((MR_Box) (OrElseInners_73));
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  *DoWrite_8 = (MR_Integer) 0;
                  ShortHand_78 = ShortHand0_66;
                  *STATE_VARIABLE_IntermodInfo_85 = STATE_VARIABLE_IntermodInfo_0_84;
                }
                break;
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_7 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ShortHand_78));
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
transform_hlds__intermod__gather_entities_to_opt_export_in_goal_5_p_0(
  MR_Word Goal0_6,
  MR_Word * Goal_7,
  MR_Word * DoWrite_8,
  MR_Word STATE_VARIABLE_IntermodInfo_0_13,
  MR_Word * STATE_VARIABLE_IntermodInfo_14)
{
  {
    MR_Word GoalExpr0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_6, (MR_Integer) 0)));
    MR_Word GoalInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_6, (MR_Integer) 1)));
    MR_Word GoalExpr_12;

    transform_hlds__intermod__gather_entities_to_opt_export_in_goal_expr_5_p_0(GoalExpr0_10, &GoalExpr_12, DoWrite_8, STATE_VARIABLE_IntermodInfo_0_13, STATE_VARIABLE_IntermodInfo_14);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_12));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_11));
    }
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_add_proc_4_p_0(
  MR_Word PredId_5,
  MR_Word * DoWrite_6,
  MR_Word STATE_VARIABLE_IntermodInfo_0_8,
  MR_Word * STATE_VARIABLE_IntermodInfo_9)
{
  {
    MR_bool succeeded;
    MR_Word Var_11;

    Var_11 = hlds__hlds_pred__invalid_pred_id_0_f_0();
    succeeded = hlds__hlds_pred____Unify____pred_id_0_0(PredId_5, Var_11);
    if (succeeded)
    {
      *DoWrite_6 = (MR_Integer) 0;
      *STATE_VARIABLE_IntermodInfo_9 = STATE_VARIABLE_IntermodInfo_0_8;
    }
    else
      transform_hlds__intermod__intermod_do_add_proc_4_p_0(PredId_5, DoWrite_6, STATE_VARIABLE_IntermodInfo_0_8, STATE_VARIABLE_IntermodInfo_9);
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_do_add_proc_4_p_0_1(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0_s * env_ptr = (struct transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0_s *) env_ptr_arg;

    MR_builtin_longjmp((env_ptr)->transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_do_add_proc_4_p_0_3(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0_s * env_ptr = (struct transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0_s *) env_ptr_arg;

    (env_ptr)->transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__ProcId_15 = ((MR_Integer) (env_ptr)->transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__conv0_ProcId_15);
    transform_hlds__intermod__intermod_do_add_proc_4_p_0_2(env_ptr);
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_do_add_proc_4_p_0_2(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0_s * env_ptr = (struct transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0_s *) env_ptr_arg;

    {
      MR_Box conv1_ProcInfo_16;

      (env_ptr)->transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__TypeCtorInfo_43_43 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
      mercury__map__lookup_3_p_0((env_ptr)->transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__TypeCtorInfo_42_42, (env_ptr)->transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__TypeCtorInfo_43_43, (env_ptr)->transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__Procs_14, ((MR_Box) ((env_ptr)->transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__ProcId_15)), &conv1_ProcInfo_16);
      (env_ptr)->transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__ProcInfo_16 = ((MR_Word) conv1_ProcInfo_16);
      (env_ptr)->transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__Var_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0((env_ptr)->transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__ProcInfo_16, &(env_ptr)->transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__Var_46);
      (env_ptr)->transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__TypeInfo_51_51 = (MR_Word) &transform_hlds__intermod_scalar_common_1[13];
      (env_ptr)->transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((env_ptr)->transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__TypeInfo_51_51, ((MR_Box) ((env_ptr)->transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__Var_26)), ((MR_Box) ((env_ptr)->transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__Var_46)));
      if ((env_ptr)->transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__succeeded)
        transform_hlds__intermod__intermod_do_add_proc_4_p_0_1(env_ptr);
    }
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_do_add_proc_4_p_0_4(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0_s * env_ptr = (struct transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0_s *) env_ptr_arg;

    if (MR_builtin_setjmp((env_ptr)->transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__commit_0) == 0)
      {
        hlds__hlds_pred__pred_info_get_proc_table_2_p_0((env_ptr)->transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__PredInfo_9, &(env_ptr)->transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__Procs_14);
        (env_ptr)->transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__TypeCtorInfo_42_42 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
        mercury__list__member_2_p_1((env_ptr)->transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__TypeCtorInfo_42_42, &(env_ptr)->transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__conv0_ProcId_15, (env_ptr)->transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__ProcIds_11, transform_hlds__intermod__intermod_do_add_proc_4_p_0_3, env_ptr);
        (env_ptr)->transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_do_add_proc_4_p_0(
  MR_Word PredId_5,
  MR_Word * DoWrite_6,
  MR_Word STATE_VARIABLE_IntermodInfo_0_24,
  MR_Word * STATE_VARIABLE_IntermodInfo_25)
{
  {
    struct transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0_s env;

    {
      MR_Word ModuleInfo_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_24, (MR_Integer) 5)));
      MR_Word PredStatus_10;
      MR_Word Markers_12;
      MR_Word Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_24, (MR_Integer) 0)));
      MR_Word Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_24, (MR_Integer) 1)));
      MR_Word Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_24, (MR_Integer) 2)));
      MR_Word Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_24, (MR_Integer) 3)));
      MR_Word Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_24, (MR_Integer) 4)));
      MR_Word Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_24, (MR_Integer) 6)));

      hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_8, PredId_5, &(env).transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__PredInfo_9);
      hlds__hlds_pred__pred_info_get_status_2_p_0((env).transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__PredInfo_9, &PredStatus_10);
      (env).transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__ProcIds_11 = hlds__hlds_pred__pred_info_procids_1_f_0((env).transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__PredInfo_9);
      hlds__hlds_pred__pred_info_get_markers_2_p_0((env).transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__PredInfo_9, &Markers_12);
      (env).transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0((env).transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__PredInfo_9);
      if (!((env).transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__succeeded))
      {
        MR_Word Var_13;

        (env).transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__succeeded = hlds__hlds_pred__pred_info_is_promise_2_p_0((env).transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__PredInfo_9, &Var_13);
      }
      if ((env).transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__succeeded)
      {
        *DoWrite_6 = (MR_Integer) 1;
        *STATE_VARIABLE_IntermodInfo_25 = STATE_VARIABLE_IntermodInfo_0_24;
      }
      else
      {
        (env).transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_12, (MR_Integer) 3);
        if (!((env).transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__succeeded))
        {
          transform_hlds__intermod__intermod_do_add_proc_4_p_0_4(&env);
        }
        if ((env).transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__succeeded)
        {
          *DoWrite_6 = (MR_Integer) 0;
          *STATE_VARIABLE_IntermodInfo_25 = STATE_VARIABLE_IntermodInfo_0_24;
        }
        else
        {
          MR_Word Var_47;
          MR_Word Var_29;

          hlds__hlds_pred__pred_info_get_purity_2_p_0((env).transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__PredInfo_9, &Var_47);
          (env).transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__succeeded = ((MR_Integer) 2 == Var_47);
          if ((env).transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__succeeded)
          {
            Var_29 = (MR_Integer) 24;
            (env).transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_12, Var_29);
            (env).transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__succeeded = !((env).transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__succeeded);
          }
          if ((env).transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__succeeded)
          {
            *DoWrite_6 = (MR_Integer) 0;
            *STATE_VARIABLE_IntermodInfo_25 = STATE_VARIABLE_IntermodInfo_0_24;
          }
          else
          {
            MR_Word Var_49 = (MR_Word) PredStatus_10;

            if ((Var_49 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
              (env).transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__succeeded = MR_TRUE;
            else
            if (((MR_tag((MR_Word) Var_49)) == (MR_mktag((MR_Integer) 1))))
            {
              MR_Word OldExternalStatus_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_49, (MR_Integer) 0)));
              MR_Word Var_31;

              Var_31 = hlds__status__old_status_is_exported_1_f_0(OldExternalStatus_17);
              (env).transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__succeeded = (Var_31 == (MR_Integer) 1);
            }
            else
              (env).transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__succeeded = MR_FALSE;
            if ((env).transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__succeeded)
            {
              *DoWrite_6 = (MR_Integer) 1;
              *STATE_VARIABLE_IntermodInfo_25 = STATE_VARIABLE_IntermodInfo_0_24;
            }
            else
            {
              MR_Word Var_33;
              MR_Word Var_48;

              hlds__hlds_pred__pred_info_get_markers_2_p_0((env).transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__PredInfo_9, &Var_48);
              (env).transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__intermod_scalar_common_1[14], ((MR_Box) (Markers_12)), ((MR_Box) (Var_48)));
              if ((env).transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__succeeded)
              {
                Var_33 = (MR_Integer) 11;
                (env).transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_12, Var_33);
              }
              if ((env).transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__succeeded)
              {
                *DoWrite_6 = (MR_Integer) 1;
                *STATE_VARIABLE_IntermodInfo_25 = STATE_VARIABLE_IntermodInfo_0_24;
              }
              else
              {
                MR_Word OldStatus_61 = (MR_Word) PredStatus_10;

                switch (MR_tag((MR_Word) OldStatus_61)) {
                  default:
                    (env).transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(OldStatus_61)) {
                      default:
                        (env).transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__succeeded = MR_FALSE;
                        break;
                      case (MR_Integer) 4:
                        (env).transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__succeeded = MR_TRUE;
                        break;
                      case (MR_Integer) 5:
                        (env).transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__succeeded = MR_TRUE;
                        break;
                      case (MR_Integer) 7:
                        (env).transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__succeeded = MR_TRUE;
                        break;
                      case (MR_Integer) 8:
                        (env).transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__succeeded = MR_TRUE;
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word Status_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), OldStatus_61, (MR_Integer) 0)));
                      MR_Word Var_64;
                      MR_Word Var_109;

                      Var_64 = hlds__status__old_status_is_exported_1_f_0(Status_63);
                      Var_109 = mercury__bool__not_1_f_0(Var_64);
                      (env).transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__succeeded = (Var_109 == (MR_Integer) 1);
                    }
                    break;
                }
                if ((env).transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__succeeded)
                {
                  MR_Word PredDecls0_18;
                  MR_Word PredDecls_19;
                  MR_Word Var_67;
                  MR_Word Var_68;
                  MR_Word Var_69;
                  MR_Word Var_70;
                  MR_Word Var_71;
                  MR_Word Var_72;
                  MR_Word Var_78;
                  MR_Word Var_79;
                  MR_Word Var_81;
                  MR_Word Var_82;
                  MR_Word Var_83;
                  MR_Word Var_84;
                  MR_Word Var_80;

                  *DoWrite_6 = (MR_Integer) 1;
                  Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_24, (MR_Integer) 0)));
                  Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_24, (MR_Integer) 1)));
                  PredDecls0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_24, (MR_Integer) 2)));
                  Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_24, (MR_Integer) 3)));
                  Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_24, (MR_Integer) 4)));
                  Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_24, (MR_Integer) 5)));
                  Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_24, (MR_Integer) 6)));
                  mercury__set__insert_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, ((MR_Box) (PredId_5)), PredDecls0_18, &PredDecls_19);
                  Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_24, (MR_Integer) 0)));
                  Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_24, (MR_Integer) 1)));
                  Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_24, (MR_Integer) 2)));
                  Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_24, (MR_Integer) 3)));
                  Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_24, (MR_Integer) 4)));
                  Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_24, (MR_Integer) 5)));
                  Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_24, (MR_Integer) 6)));
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
                    *STATE_VARIABLE_IntermodInfo_25 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_78));
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_79));
                    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (PredDecls_19));
                    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_81));
                    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_82));
                    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_83));
                    MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_84));
                  }
                }
                else
                {
                  MR_Word Var_50 = (MR_Word) PredStatus_10;

                  if ((Var_50 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    (env).transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__succeeded = MR_TRUE;
                  else
                  if (((MR_tag((MR_Word) Var_50)) == (MR_mktag((MR_Integer) 2))))
                    (env).transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__succeeded = MR_TRUE;
                  else
                    (env).transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__succeeded = MR_FALSE;
                  if ((env).transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__succeeded)
                  {
                    MR_Word PredModule_21;
                    MR_Word Modules0_22;
                    MR_Word Modules_23;
                    MR_Word Var_87;
                    MR_Word Var_88;
                    MR_Word Var_89;
                    MR_Word Var_90;
                    MR_Word Var_91;
                    MR_Word Var_92;

                    *DoWrite_6 = (MR_Integer) 1;
                    PredModule_21 = hlds__hlds_pred__pred_info_module_1_f_0((env).transform_hlds__intermod__intermod_do_add_proc_4_p_0_env_0__PredInfo_9);
                    Modules0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_24, (MR_Integer) 0)));
                    Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_24, (MR_Integer) 1)));
                    Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_24, (MR_Integer) 2)));
                    Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_24, (MR_Integer) 3)));
                    Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_24, (MR_Integer) 4)));
                    Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_24, (MR_Integer) 5)));
                    Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_24, (MR_Integer) 6)));
                    mercury__set__insert_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (PredModule_21)), Modules0_22, &Modules_23);
                    transform_hlds__intermod__intermod_info_set_modules_3_p_0(Modules_23, STATE_VARIABLE_IntermodInfo_0_24, STATE_VARIABLE_IntermodInfo_25);
                  }
                  else
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.intermod", (MR_String) "predicate \140transform_hlds.intermod.intermod_do_add_proc\'/4", (MR_String) "unexpected status");
                      return;
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

static void MR_CALL 
transform_hlds__intermod__intermod_info_set_modules_3_p_0(
  MR_Word Modules_4,
  MR_Word STATE_VARIABLE_IntermodInfo_0_6,
  MR_Word * STATE_VARIABLE_IntermodInfo_7)
{
  {
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_6, (MR_Integer) 1)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_6, (MR_Integer) 2)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_6, (MR_Integer) 3)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_6, (MR_Integer) 4)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_6, (MR_Integer) 5)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_6, (MR_Integer) 6)));
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_6, (MR_Integer) 0)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_IntermodInfo_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Modules_4));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_15));
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__intermod__should_opt_export_pred_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__intermod__proc_has_a_higher_order_input_arg_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__intermod__should_opt_export_pred_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__intermod__proc_eval_method_is_normal_1_p_0(((MR_Word) wrapper_arg_1));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__intermod__should_opt_export_pred_8_p_0_3(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0_s * env_ptr = (struct transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0_s *) env_ptr_arg;

    MR_builtin_longjmp((env_ptr)->transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
transform_hlds__intermod__should_opt_export_pred_8_p_0_5(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0_s * env_ptr = (struct transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0_s *) env_ptr_arg;

    (env_ptr)->transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__Clause1_79 = ((MR_Word) (env_ptr)->transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__conv1_Clause1_79);
    transform_hlds__intermod__should_opt_export_pred_8_p_0_4(env_ptr);
  }
}

static void MR_CALL 
transform_hlds__intermod__should_opt_export_pred_8_p_0_4(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0_s * env_ptr = (struct transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0_s *) env_ptr_arg;

    (env_ptr)->transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__Goal1_70 = hlds__hlds_clauses__clause_body_1_f_0((env_ptr)->transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__Clause1_79);
    (env_ptr)->transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded = hlds__goal_util__goal_calls_pred_id_2_p_0((env_ptr)->transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__Goal1_70, (env_ptr)->transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__PredId_10);
    if ((env_ptr)->transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded)
      transform_hlds__intermod__should_opt_export_pred_8_p_0_3(env_ptr);
  }
}

static void MR_CALL 
transform_hlds__intermod__should_opt_export_pred_8_p_0_6(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0_s * env_ptr = (struct transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0_s *) env_ptr_arg;

    if (MR_builtin_setjmp((env_ptr)->transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__commit_0) == 0)
      {
        {
          mercury__list__member_2_p_1((MR_Word) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0, &(env_ptr)->transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__conv1_Clause1_79, (env_ptr)->transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__Clauses_46, transform_hlds__intermod__should_opt_export_pred_8_p_0_5, env_ptr);
        }
        (env_ptr)->transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded = MR_TRUE;
  }
}

static MR_bool MR_CALL 
transform_hlds__intermod__should_opt_export_pred_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word PredId_10,
  MR_Word PredInfo_11,
  MR_Word ProcessLocalPreds_12,
  MR_Word TypeSpecForcePreds_13,
  MR_Integer InlineThreshold_14,
  MR_Integer HigherOrderSizeLimit_15,
  MR_Word Deforestation_16)
{
  {
    struct transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0_s env;

    (env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__PredId_10 = PredId_10;
    switch (ProcessLocalPreds_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          (env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded = hlds__hlds_pred__pred_info_is_exported_1_p_0(PredInfo_11);
          if (!((env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded))
            (env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded = hlds__hlds_pred__pred_info_is_exported_to_submodules_1_p_0(PredInfo_11);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_20;

          hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo_11, &Var_20);
          (env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded = hlds__status____Unify____pred_status_0_0((MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))), Var_20);
        }
        break;
    }
    if ((env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded)
    {
      {
        MR_Word Var_17;

        (env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded = hlds__hlds_pred__pred_info_is_promise_2_p_0(PredInfo_11, &Var_17);
      }
      if (!((env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded))
      {
        MR_Word TypeCtorInfo_16_34;
        MR_Word TypeCtorInfo_17_35;
        MR_Word Markers_25;
        MR_Word ProcTable_26;
        MR_Word ProcInfos_27;
        MR_Word Var_32;
        MR_Word ClauseInfo_43;
        MR_Word ClausesRep_44;
        MR_Integer Arity_47;
        MR_Word Var_29;
        MR_Word Var_30;
        MR_Word TypeCtorInfo_15_33;
        MR_Word Var_31;
        MR_Word _ItemNumbers_45;

        hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_11, &Markers_25);
        (env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_25, (MR_Integer) 11);
        (env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded = !((env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded);
        if ((env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded)
        {
          Var_29 = (MR_Integer) 12;
          (env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_25, Var_29);
          (env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded = !((env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded);
          if ((env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded)
          {
            Var_30 = (MR_Integer) 0;
            (env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_25, Var_30);
            (env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded = !((env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded);
            if ((env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded)
            {
              (env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(PredInfo_11);
              (env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded = !((env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded);
              if ((env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded)
              {
                (env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded = hlds__hlds_pred__pred_info_is_builtin_1_p_0(PredInfo_11);
                (env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded = !((env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded);
                if ((env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded)
                {
                  TypeCtorInfo_15_33 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
                  (env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded = mercury__set__member_2_p_0(TypeCtorInfo_15_33, ((MR_Box) ((env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__PredId_10)), TypeSpecForcePreds_13);
                  (env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded = !((env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded);
                  if ((env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded)
                  {
                    Var_31 = (MR_Integer) 8;
                    (env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_25, Var_31);
                    (env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded = !((env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded);
                    if ((env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded)
                    {
                      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_11, &ProcTable_26);
                      TypeCtorInfo_16_34 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
                      TypeCtorInfo_17_35 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
                      mercury__map__values_2_p_0(TypeCtorInfo_16_34, TypeCtorInfo_17_35, ProcTable_26, &ProcInfos_27);
                      Var_32 = (MR_Word) &transform_hlds__intermod_scalar_common_2[12];
                      (env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded = mercury__list__all_true_2_p_0(TypeCtorInfo_17_35, Var_32, ProcInfos_27);
                      if ((env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded)
                      {
                        hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(PredInfo_11, &ClauseInfo_43);
                        hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(ClauseInfo_43, &ClausesRep_44, &_ItemNumbers_45);
                        hlds__hlds_clauses__get_clause_list_maybe_repeated_2_p_0(ClausesRep_44, &(env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__Clauses_46);
                        Arity_47 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(PredInfo_11);
                        {
                          MR_Integer Var_57 = (InlineThreshold_14 + Arity_47);

                          (env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded = transform_hlds__inlining__is_simple_clause_list_2_p_0((env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__Clauses_46, Var_57);
                        }
                        if (!((env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded))
                        {
                          (env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded = hlds__hlds_pred__pred_info_requested_inlining_1_p_0(PredInfo_11);
                          if (!((env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded))
                          {
                            {
                              MR_Word Markers_48;

                              hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_11, &Markers_48);
                              (env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_48, (MR_Integer) 24);
                            }
                            if (!((env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded))
                            {
                              {
                                MR_Word TypeCtorInfo_10_65;
                                MR_Integer GoalSize_49;
                                MR_Integer Var_55;
                                MR_Word ProcTable_60;
                                MR_Word ProcInfos_61;
                                MR_Word Var_63;
                                MR_Word _FirstProcInfoWithHoInput_62;
                                MR_Box conv0__FirstProcInfoWithHoInput_62;

                                hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_11, &ProcTable_60);
                                TypeCtorInfo_10_65 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
                                mercury__map__values_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, TypeCtorInfo_10_65, ProcTable_60, &ProcInfos_61);
                                {
                                  Var_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                                  MR_hl_field(MR_mktag(0), Var_63, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_6[1]));
                                  MR_hl_field(MR_mktag(0), Var_63, 1) = ((MR_Box) (transform_hlds__intermod__should_opt_export_pred_8_p_0_2));
                                  MR_hl_field(MR_mktag(0), Var_63, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                                  MR_hl_field(MR_mktag(0), Var_63, 3) = ((MR_Box) (ModuleInfo_9));
                                }
                                (env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded = mercury__list__find_first_match_3_p_0(TypeCtorInfo_10_65, Var_63, ProcInfos_61, &conv0__FirstProcInfoWithHoInput_62);
                                if ((env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded)
                                {
                                  _FirstProcInfoWithHoInput_62 = ((MR_Word) conv0__FirstProcInfoWithHoInput_62);
                                  (env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded = MR_TRUE;
                                }
                                if ((env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded)
                                {
                                  hlds__goal_util__clause_list_size_2_p_0((env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__Clauses_46, &GoalSize_49);
                                  Var_55 = (HigherOrderSizeLimit_15 + Arity_47);
                                  (env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded = (GoalSize_49 <= Var_55);
                                }
                              }
                              if (!((env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded))
                              {
                                MR_Integer DeforestThreshold_50;
                                MR_Integer Var_51;
                                MR_Integer Var_52;
                                MR_Integer Var_53;
                                MR_Integer Var_54;
                                MR_Word Var_81;
                                MR_Word Var_82;

                                (env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded = (Deforestation_16 == (MR_Integer) 1);
                                if ((env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded)
                                {
                                  Var_52 = (MR_Integer) 2;
                                  Var_51 = (InlineThreshold_14 * Var_52);
                                  Var_53 = (MR_Integer) 1;
                                  DeforestThreshold_50 = (Var_51 + Var_53);
                                  Var_54 = (DeforestThreshold_50 + Arity_47);
                                  (env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded = transform_hlds__inlining__is_simple_clause_list_2_p_0((env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__Clauses_46, Var_54);
                                  if ((env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded)
                                  {
                                    transform_hlds__intermod__should_opt_export_pred_8_p_0_6(&env);
                                    if ((env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded)
                                    {
                                      (env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded = ((MR_tag((MR_Word) (env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__Clauses_46)) == (MR_mktag((MR_Integer) 1)));
                                      if ((env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded)
                                      {
                                        Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), (env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__Clauses_46, (MR_Integer) 0)));
                                        Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), (env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__Clauses_46, (MR_Integer) 1)));
                                        if ((Var_81 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                                        {
                                          MR_Word Goal2_75;
                                          MR_Word GoalList_76;

                                          Goal2_75 = hlds__hlds_clauses__clause_body_1_f_0(Var_82);
                                          hlds__hlds_goal__goal_to_conj_list_2_p_0(Goal2_75, &GoalList_76);
                                          (env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded = transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0(GoalList_76, (MR_Integer) 0);
                                        }
                                        else
                                          (env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded = MR_TRUE;
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
    return (env).transform_hlds__intermod__should_opt_export_pred_8_p_0_env_0__succeeded;
  }
}

static void MR_CALL 
transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_1(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0_s * env_ptr = (struct transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0_s *) env_ptr_arg;

    MR_builtin_longjmp((env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_2(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0_s * env_ptr = (struct transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0_s *) env_ptr_arg;

    (env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__succeeded = transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0((env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__Goals_4, (env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__FoundBranch_8);
    if ((env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__succeeded)
      transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_1(env_ptr);
  }
}

static void MR_CALL 
transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_3(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0_s * env_ptr = (struct transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0_s *) env_ptr_arg;

    if (MR_builtin_setjmp((env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__commit_0) == 0)
      {
        {
          MR_Word Goal_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), (env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__HeadVar__1_1, (MR_Integer) 0)));
          MR_Word GoalExpr_6;
          MR_Word Var_7;

          (env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__Goals_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), (env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__HeadVar__1_1, (MR_Integer) 1)));
          GoalExpr_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_3, (MR_Integer) 0)));
          Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_3, (MR_Integer) 1)));
          (env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__succeeded = hlds__goal_util__goal_is_branched_1_p_0(GoalExpr_6);
          if ((env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__succeeded)
          {
            (env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__succeeded = ((env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__HeadVar__2_2 == (MR_Integer) 0);
            if ((env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__succeeded)
            {
              (env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__FoundBranch_8 = (MR_Integer) 1;
              (env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__succeeded = MR_TRUE;
            }
          }
          if ((env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__succeeded)
            transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_2(env_ptr);
          {
            MR_Word Var_9;

            Var_9 = hlds__goal_form__goal_expr_has_subgoals_1_f_0(GoalExpr_6);
            (env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__succeeded = (Var_9 == (MR_Integer) 1);
            if ((env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__succeeded)
            {
              (env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__FoundBranch_8 = (env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__HeadVar__2_2;
              (env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__succeeded = MR_TRUE;
            }
            if ((env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__succeeded)
              transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_2(env_ptr);
          }
        }
        (env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__succeeded = MR_TRUE;
  }
}

static MR_bool MR_CALL 
transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    struct transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0_s env;

    (env).transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__HeadVar__1_1 = HeadVar__1_1;
    (env).transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__HeadVar__2_2 = HeadVar__2_2;
    if (((env).transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      (env).transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__succeeded = ((env).transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__HeadVar__2_2 == (MR_Integer) 1);
    else
    {
      transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_3(&env);
    }
    return (env).transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__succeeded;
  }
}

static void MR_CALL 
transform_hlds__intermod__do_maybe_opt_export_entities_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv7_HeadVar__2_2;
    MR_Word conv6_STATE_VARIABLE_ModuleInfo_10;

    transform_hlds__intermod__maybe_opt_export_class_instances_4_p_0(((MR_Word) wrapper_arg_1), &conv7_HeadVar__2_2, ((MR_Word) wrapper_arg_3), &conv6_STATE_VARIABLE_ModuleInfo_10);
    *wrapper_arg_2 = ((MR_Box) (conv7_HeadVar__2_2));
    *wrapper_arg_4 = ((MR_Box) (conv6_STATE_VARIABLE_ModuleInfo_10));
  }
}

static void MR_CALL 
transform_hlds__intermod__do_maybe_opt_export_entities_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_HeadVar__2_2;
    MR_Word conv3_STATE_VARIABLE_ModuleInfo_12;

    transform_hlds__intermod__maybe_opt_export_class_defn_4_p_0(((MR_Word) wrapper_arg_1), &conv4_HeadVar__2_2, ((MR_Word) wrapper_arg_3), &conv3_STATE_VARIABLE_ModuleInfo_12);
    *wrapper_arg_2 = ((MR_Box) (conv4_HeadVar__2_2));
    *wrapper_arg_4 = ((MR_Box) (conv3_STATE_VARIABLE_ModuleInfo_12));
  }
}

static void MR_CALL 
transform_hlds__intermod__do_maybe_opt_export_entities_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_TypeDefn_8;
    MR_Word conv0_STATE_VARIABLE_ModuleInfo_12;

    transform_hlds__intermod__maybe_opt_export_type_defn_5_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv1_TypeDefn_8, ((MR_Word) wrapper_arg_4), &conv0_STATE_VARIABLE_ModuleInfo_12);
    *wrapper_arg_3 = ((MR_Box) (conv1_TypeDefn_8));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_12));
  }
}

static void MR_CALL 
transform_hlds__intermod__do_maybe_opt_export_entities_3_p_0(
  MR_Word IntermodeInfo_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * STATE_VARIABLE_ModuleInfo_9)
{
  {
    MR_Word TypeCtorInfo_13_54;
    MR_Word TypeCtorInfo_14_55;
    MR_Word TypeInfo_19_60;
    MR_Word TypeCtorInfo_13_72;
    MR_Word TypeInfo_14_73;
    MR_Word TypeInfo_19_78;
    MR_Word PredDeclsSet_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), IntermodeInfo_4, (MR_Integer) 2)));
    MR_Word PredDecls_7;
    MR_Word STATE_VARIABLE_ModuleInfo_10_10;
    MR_Word STATE_VARIABLE_ModuleInfo_11_11;
    MR_Word STATE_VARIABLE_ModuleInfo_12_12;
    MR_Word Preds0_27;
    MR_Word Preds_28;
    MR_Word TypeTable0_33;
    MR_Word TypeTable_34;
    MR_Word STATE_VARIABLE_ModuleInfo_9_36;
    MR_Word Classes0_47;
    MR_Word ClassAL0_48;
    MR_Word ClassAL_49;
    MR_Word Classes_50;
    MR_Word STATE_VARIABLE_ModuleInfo_11_52;
    MR_Word Instances0_65;
    MR_Word InstanceAL0_66;
    MR_Word InstanceAL_67;
    MR_Word Instances_68;
    MR_Word STATE_VARIABLE_ModuleInfo_11_70;
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), IntermodeInfo_4, (MR_Integer) 0)));
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), IntermodeInfo_4, (MR_Integer) 1)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), IntermodeInfo_4, (MR_Integer) 3)));
    MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), IntermodeInfo_4, (MR_Integer) 4)));
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), IntermodeInfo_4, (MR_Integer) 5)));
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), IntermodeInfo_4, (MR_Integer) 6)));
    MR_Box conv2_STATE_VARIABLE_ModuleInfo_9_36;
    MR_Box conv5_STATE_VARIABLE_ModuleInfo_11_52;
    MR_Box conv8_STATE_VARIABLE_ModuleInfo_11_70;

    mercury__set__to_sorted_list_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, PredDeclsSet_6, &PredDecls_7);
    hlds__hlds_module__module_info_get_preds_2_p_0(STATE_VARIABLE_ModuleInfo_0_8, &Preds0_27);
    transform_hlds__intermod__opt_export_preds_in_pred_table_3_p_0(PredDecls_7, Preds0_27, &Preds_28);
    hlds__hlds_module__module_info_set_preds_3_p_0(Preds_28, STATE_VARIABLE_ModuleInfo_0_8, &STATE_VARIABLE_ModuleInfo_10_10);
    hlds__hlds_module__module_info_get_type_table_2_p_0(STATE_VARIABLE_ModuleInfo_10_10, &TypeTable0_33);
    hlds__hlds_data__map_foldl_over_type_ctor_defns_5_p_0((MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__intermod_scalar_common_2[9], TypeTable0_33, &TypeTable_34, ((MR_Box) (STATE_VARIABLE_ModuleInfo_10_10)), &conv2_STATE_VARIABLE_ModuleInfo_9_36);
    STATE_VARIABLE_ModuleInfo_9_36 = ((MR_Word) conv2_STATE_VARIABLE_ModuleInfo_9_36);
    hlds__hlds_module__module_info_set_type_table_3_p_0(TypeTable_34, STATE_VARIABLE_ModuleInfo_9_36, &STATE_VARIABLE_ModuleInfo_11_11);
    hlds__hlds_module__module_info_get_class_table_2_p_0(STATE_VARIABLE_ModuleInfo_11_11, &Classes0_47);
    TypeCtorInfo_13_54 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0;
    TypeCtorInfo_14_55 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_defn_0;
    mercury__map__to_assoc_list_2_p_0(TypeCtorInfo_13_54, TypeCtorInfo_14_55, Classes0_47, &ClassAL0_48);
    TypeInfo_19_60 = (MR_Word) &transform_hlds__intermod_scalar_common_2[4];
    mercury__list__map_foldl_5_p_0(TypeInfo_19_60, TypeInfo_19_60, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__intermod_scalar_common_2[10], ClassAL0_48, &ClassAL_49, ((MR_Box) (STATE_VARIABLE_ModuleInfo_11_11)), &conv5_STATE_VARIABLE_ModuleInfo_11_52);
    STATE_VARIABLE_ModuleInfo_11_52 = ((MR_Word) conv5_STATE_VARIABLE_ModuleInfo_11_52);
    mercury__map__from_sorted_assoc_list_2_p_0(TypeCtorInfo_13_54, TypeCtorInfo_14_55, ClassAL_49, &Classes_50);
    hlds__hlds_module__module_info_set_class_table_3_p_0(Classes_50, STATE_VARIABLE_ModuleInfo_11_52, &STATE_VARIABLE_ModuleInfo_12_12);
    hlds__hlds_module__module_info_get_instance_table_2_p_0(STATE_VARIABLE_ModuleInfo_12_12, &Instances0_65);
    TypeCtorInfo_13_72 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0;
    TypeInfo_14_73 = (MR_Word) &transform_hlds__intermod_scalar_common_1[0];
    mercury__map__to_assoc_list_2_p_0(TypeCtorInfo_13_72, TypeInfo_14_73, Instances0_65, &InstanceAL0_66);
    TypeInfo_19_78 = (MR_Word) &transform_hlds__intermod_scalar_common_2[5];
    mercury__list__map_foldl_5_p_0(TypeInfo_19_78, TypeInfo_19_78, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__intermod_scalar_common_2[11], InstanceAL0_66, &InstanceAL_67, ((MR_Box) (STATE_VARIABLE_ModuleInfo_12_12)), &conv8_STATE_VARIABLE_ModuleInfo_11_70);
    STATE_VARIABLE_ModuleInfo_11_70 = ((MR_Word) conv8_STATE_VARIABLE_ModuleInfo_11_70);
    mercury__map__from_sorted_assoc_list_2_p_0(TypeCtorInfo_13_72, TypeInfo_14_73, InstanceAL_67, &Instances_68);
    hlds__hlds_module__module_info_set_instance_table_3_p_0(Instances_68, STATE_VARIABLE_ModuleInfo_11_70, STATE_VARIABLE_ModuleInfo_9);
  }
}

static void MR_CALL 
transform_hlds__intermod__opt_export_preds_in_pred_table_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Preds_0_2,
  MR_Word * STATE_VARIABLE_Preds_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_Preds_3 = STATE_VARIABLE_Preds_0_2;
    else
    {
      MR_Word TypeCtorInfo_28_28 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
      MR_Word TypeCtorInfo_29_29 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
      MR_Word PredId_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word PredIds_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word PredInfo0_10;
      MR_Word PredStatus0_11;
      MR_Word ToWrite_12;
      MR_Word STATE_VARIABLE_Preds_26_26;
      MR_Word OldStatus_30;
      MR_Box conv0_PredInfo0_10;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Preds_0_2;

      mercury__map__lookup_3_p_0(TypeCtorInfo_28_28, TypeCtorInfo_29_29, STATE_VARIABLE_Preds_0_2, ((MR_Box) (PredId_7)), &conv0_PredInfo0_10);
      PredInfo0_10 = ((MR_Word) conv0_PredInfo0_10);
      hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo0_10, &PredStatus0_11);
      OldStatus_30 = (MR_Word) PredStatus0_11;
      switch (MR_tag((MR_Word) OldStatus_30)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(OldStatus_30)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              ToWrite_12 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              ToWrite_12 = (MR_Integer) 0;
              break;
            case (MR_Integer) 2:
              ToWrite_12 = (MR_Integer) 0;
              break;
            case (MR_Integer) 3:
              ToWrite_12 = (MR_Integer) 0;
              break;
            case (MR_Integer) 4:
              ToWrite_12 = (MR_Integer) 1;
              break;
            case (MR_Integer) 5:
              ToWrite_12 = (MR_Integer) 1;
              break;
            case (MR_Integer) 6:
              ToWrite_12 = (MR_Integer) 0;
              break;
            case (MR_Integer) 7:
              ToWrite_12 = (MR_Integer) 1;
              break;
            case (MR_Integer) 8:
              ToWrite_12 = (MR_Integer) 1;
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Status_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), OldStatus_30, (MR_Integer) 0)));
            MR_Word Var_33;

            Var_33 = hlds__status__old_status_is_exported_1_f_0(Status_32);
            ToWrite_12 = mercury__bool__not_1_f_0(Var_33);
          }
          break;
        case (MR_Integer) 2:
          ToWrite_12 = (MR_Integer) 0;
          break;
      }
      switch (ToWrite_12) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          STATE_VARIABLE_Preds_26_26 = STATE_VARIABLE_Preds_0_2;
          break;
        case (MR_Integer) 1:
          {
            MR_Word PredStatus_15;
            MR_Word PredInfo_17;
            MR_Word Origin_13;
            MR_Word Var_20;
            MR_Word Var_14;

            hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo0_10, &Origin_13);
            succeeded = ((MR_tag((MR_Word) Origin_13)) == (MR_mktag((MR_Integer) 0)));
            if (succeeded)
            {
              Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Origin_13, (MR_Integer) 0)));
              Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Origin_13, (MR_Integer) 1)));
              succeeded = (Var_20 == (MR_Integer) 0);
            }
            if (succeeded)
            {
              PredStatus_15 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
            }
            else
            {
              MR_Word Var_22 = (MR_Word) PredStatus0_11;
              MR_Word Var_16;

              succeeded = ((MR_tag((MR_Word) Var_22)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_22, (MR_Integer) 0)));
                PredStatus_15 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__intermod_scalar_common_9[0])));
              }
              else
              {
                PredStatus_15 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
              }
            }
            hlds__hlds_pred__pred_info_set_status_3_p_0(PredStatus_15, PredInfo0_10, &PredInfo_17);
            mercury__map__det_update_4_p_0(TypeCtorInfo_28_28, TypeCtorInfo_29_29, ((MR_Box) (PredId_7)), ((MR_Box) (PredInfo_17)), STATE_VARIABLE_Preds_0_2, &STATE_VARIABLE_Preds_26_26);
          }
          break;
      }
      // direct tailcall eliminated
      next_value_of_HeadVar__1_1 = PredIds_8;
      next_value_of_STATE_VARIABLE_Preds_0_2 = STATE_VARIABLE_Preds_26_26;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Preds_0_2 = next_value_of_STATE_VARIABLE_Preds_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_info_get_module_info_2_p_0(
  MR_Word IntermodInfo_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), IntermodInfo_3, (MR_Integer) 0)));
    MR_Word Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), IntermodInfo_3, (MR_Integer) 1)));
    MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), IntermodInfo_3, (MR_Integer) 2)));
    MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), IntermodInfo_3, (MR_Integer) 3)));
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), IntermodInfo_3, (MR_Integer) 4)));
    MR_Word Var_10;

    *X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), IntermodInfo_3, (MR_Integer) 5)));
    Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), IntermodInfo_3, (MR_Integer) 6)));
  }
}

static void MR_CALL 
transform_hlds__intermod__write_intermod_info_3_p_0(
  MR_Word IntermodInfo_4)
{
  {
    MR_bool succeeded;
    MR_Word ModuleInfo_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), IntermodInfo_4, (MR_Integer) 5)));
    MR_Word ModuleName_7;
    MR_Word Preds_8;
    MR_Word PredDecls_9;
    MR_Word Instances_10;
    MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), IntermodInfo_4, (MR_Integer) 0)));
    MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), IntermodInfo_4, (MR_Integer) 1)));
    MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), IntermodInfo_4, (MR_Integer) 2)));
    MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), IntermodInfo_4, (MR_Integer) 3)));
    MR_Word Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), IntermodInfo_4, (MR_Integer) 4)));
    MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), IntermodInfo_4, (MR_Integer) 6)));
    MR_Word Var_34;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word TypeCtorInfo_22_22;
    MR_Word TypeTable_11;
    MR_Word TypeCtorsDefns_12;
    MR_Word Var_20;
    MR_Word Var_23;

    hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_6, &ModuleName_7);
    mercury__io__write_string_3_p_0((MR_String) ":- module ");
    parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(ModuleName_7);
    mercury__io__write_string_3_p_0((MR_String) ".\n");
    Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), IntermodInfo_4, (MR_Integer) 0)));
    Preds_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), IntermodInfo_4, (MR_Integer) 1)));
    PredDecls_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), IntermodInfo_4, (MR_Integer) 2)));
    Instances_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), IntermodInfo_4, (MR_Integer) 3)));
    Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), IntermodInfo_4, (MR_Integer) 4)));
    Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), IntermodInfo_4, (MR_Integer) 5)));
    Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), IntermodInfo_4, (MR_Integer) 6)));
    TypeCtorInfo_22_22 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
    succeeded = mercury__set__is_empty_1_p_0(TypeCtorInfo_22_22, Preds_8);
    if (succeeded)
    {
      succeeded = mercury__set__is_empty_1_p_0(TypeCtorInfo_22_22, PredDecls_9);
      if (succeeded)
      {
        succeeded = (Instances_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (succeeded)
        {
          hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_6, &TypeTable_11);
          hlds__hlds_data__get_all_type_ctor_defns_2_p_0(TypeTable_11, &TypeCtorsDefns_12);
          Var_20 = (MR_Integer) 0;
          transform_hlds__intermod__some_type_needs_to_be_written_2_p_0(TypeCtorsDefns_12, &Var_23);
          succeeded = (Var_20 == Var_23);
        }
      }
    }
    if (!(succeeded))
      transform_hlds__intermod__write_intermod_info_body_3_p_0(IntermodInfo_4);
  }
}

static void MR_CALL 
transform_hlds__intermod__write_intermod_info_body_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    transform_hlds__intermod__intermod_write_foreign_import_3_p_0(((MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
transform_hlds__intermod__write_intermod_info_body_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    transform_hlds__intermod__intermod_write_type_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
transform_hlds__intermod__write_intermod_info_body_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    transform_hlds__intermod__intermod_write_use_module_3_p_0(((MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
transform_hlds__intermod__write_intermod_info_body_3_p_0(
  MR_Word IntermodInfo_4)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_60_60 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
    MR_Word TypeCtorInfo_61_61;
    MR_Word TypeCtorInfo_66_66;
    MR_Word WritePredPredIdSet_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), IntermodInfo_4, (MR_Integer) 1)));
    MR_Word WriteDeclPredIdSet_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), IntermodInfo_4, (MR_Integer) 2)));
    MR_Word Instances_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), IntermodInfo_4, (MR_Integer) 3)));
    MR_Word Types_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), IntermodInfo_4, (MR_Integer) 4)));
    MR_Word ModuleInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), IntermodInfo_4, (MR_Integer) 5)));
    MR_Word WriteHeader_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), IntermodInfo_4, (MR_Integer) 6)));
    MR_Word WritePredPredIds_13;
    MR_Word WriteDeclPredIds_14;
    MR_Word AvailModuleMap_15;
    MR_Word AvailModuleNames_16;
    MR_Word Globals_17;
    MR_Word OutInfo0_18;
    MR_Word MercInfo0_19;
    MR_Word MercInfo_20;
    MR_Word OutInfo_21;
    MR_Word OutInfoForPreds_22;
    MR_Word DeclOrderPredInfos_25;
    MR_Word PredOrderPredInfos_26;
    MR_String Var_51;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word OrderPredInfos_91;
    MR_Word Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), IntermodInfo_4, (MR_Integer) 0)));
    MR_Box conv0_STATE_VARIABLE_IO_32_32;
    MR_String Var_46;
    MR_String Var_47;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_String Var_50;
    MR_Word Var_54;

    mercury__set__to_sorted_list_2_p_0(TypeCtorInfo_60_60, WritePredPredIdSet_7, &WritePredPredIds_13);
    mercury__set__to_sorted_list_2_p_0(TypeCtorInfo_60_60, WriteDeclPredIdSet_8, &WriteDeclPredIds_14);
    hlds__hlds_module__module_info_get_avail_module_map_2_p_0(ModuleInfo_11, &AvailModuleMap_15);
    TypeCtorInfo_61_61 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    mercury__map__keys_2_p_0(TypeCtorInfo_61_61, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_avail_module_entry_0, AvailModuleMap_15, &AvailModuleNames_16);
    TypeCtorInfo_66_66 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
    mercury__list__foldl_4_p_2(TypeCtorInfo_61_61, TypeCtorInfo_66_66, (MR_Word) &transform_hlds__intermod_scalar_common_2[7], AvailModuleNames_16, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_32_32);
    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_11, &Globals_17);
    OutInfo0_18 = hlds__hlds_out__hlds_out_util__init_hlds_out_info_2_f_0(Globals_17, (MR_Integer) 0);
    Var_46 = ((MR_String) (MR_hl_field(MR_mktag(0), OutInfo0_18, (MR_Integer) 0)));
    Var_47 = ((MR_String) (MR_hl_field(MR_mktag(0), OutInfo0_18, (MR_Integer) 1)));
    Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), OutInfo0_18, (MR_Integer) 2)));
    Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), OutInfo0_18, (MR_Integer) 3)));
    MercInfo0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), OutInfo0_18, (MR_Integer) 4)));
    MercInfo_20 = parse_tree__parse_tree_out_info__merc_out_info_disable_line_numbers_1_f_0(MercInfo0_19);
    Var_50 = ((MR_String) (MR_hl_field(MR_mktag(0), OutInfo0_18, (MR_Integer) 0)));
    Var_51 = ((MR_String) (MR_hl_field(MR_mktag(0), OutInfo0_18, (MR_Integer) 1)));
    Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), OutInfo0_18, (MR_Integer) 2)));
    Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), OutInfo0_18, (MR_Integer) 3)));
    Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), OutInfo0_18, (MR_Integer) 4)));
    {
      OutInfo_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), OutInfo_21, 0) = ((MR_Box) (Var_50));
      MR_hl_field(MR_mktag(0), OutInfo_21, 1) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(0), OutInfo_21, 2) = ((MR_Box) (Var_52));
      MR_hl_field(MR_mktag(0), OutInfo_21, 3) = ((MR_Box) (Var_53));
      MR_hl_field(MR_mktag(0), OutInfo_21, 4) = ((MR_Box) (MercInfo_20));
    }
    {
      OutInfoForPreds_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), OutInfoForPreds_22, 0) = ((MR_Box) ((MR_String) ""));
      MR_hl_field(MR_mktag(0), OutInfoForPreds_22, 1) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(0), OutInfoForPreds_22, 2) = ((MR_Box) (Var_52));
      MR_hl_field(MR_mktag(0), OutInfoForPreds_22, 3) = ((MR_Box) (Var_53));
      MR_hl_field(MR_mktag(0), OutInfoForPreds_22, 4) = ((MR_Box) (MercInfo_20));
    }
    if (!((Types_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
    {
      MR_Word TypeInfo_16_83;
      MR_Word SortedTypes_79;
      MR_Word Var_81;
      MR_Box conv1_STATE_VARIABLE_IO_35_35;

      mercury__io__nl_2_p_0();
      TypeInfo_16_83 = (MR_Word) &transform_hlds__intermod_scalar_common_2[1];
      mercury__list__sort_2_p_0(TypeInfo_16_83, Types_10, &SortedTypes_79);
      {
        Var_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_81, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_3[2]));
        MR_hl_field(MR_mktag(0), Var_81, 1) = ((MR_Box) (transform_hlds__intermod__write_intermod_info_body_3_p_0_2));
        MR_hl_field(MR_mktag(0), Var_81, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_81, 3) = ((MR_Box) (OutInfo_21));
      }
      mercury__list__foldl_4_p_2(TypeInfo_16_83, (MR_Word) &mercury__io__io__type_ctor_info_state_0, Var_81, SortedTypes_79, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_35_35);
    }
    transform_hlds__intermod__intermod_write_insts_4_p_0(OutInfo_21, ModuleInfo_11);
    transform_hlds__intermod__intermod_write_modes_4_p_0(OutInfo_21, ModuleInfo_11);
    transform_hlds__intermod__intermod_write_classes_4_p_0(OutInfo_21, ModuleInfo_11);
    transform_hlds__intermod__intermod_write_instances_4_p_0(OutInfo_21, Instances_9);
    switch (WriteHeader_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ForeignImportModules_23;
          MR_Word ForeignImports_24;

          hlds__hlds_module__module_info_get_foreign_import_modules_2_p_0(ModuleInfo_11, &ForeignImportModules_23);
          ForeignImports_24 = parse_tree__prog_data_foreign__get_all_foreign_import_module_infos_1_f_0(ForeignImportModules_23);
          succeeded = mercury__set__is_empty_1_p_0((MR_Word) &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_import_module_info_0, ForeignImports_24);
          if (!(succeeded))
          {
            MR_Box conv2_STATE_VARIABLE_IO_42_42;

            mercury__io__nl_2_p_0();
            mercury__set__fold_4_p_2((MR_Word) &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_import_module_info_0, TypeCtorInfo_66_66, (MR_Word) &transform_hlds__intermod_scalar_common_2[8], ForeignImports_24, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_42_42);
          }
        }
        break;
    }
    transform_hlds__intermod__generate_order_pred_infos_acc_4_p_0(ModuleInfo_11, WriteDeclPredIds_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &OrderPredInfos_91);
    mercury__list__sort_2_p_0((MR_Word) &transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_order_pred_info_0, OrderPredInfos_91, &DeclOrderPredInfos_25);
    transform_hlds__intermod__generate_order_pred_infos_3_p_0(ModuleInfo_11, WritePredPredIds_13, &PredOrderPredInfos_26);
    if (!((DeclOrderPredInfos_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
    {
      mercury__io__nl_2_p_0();
      transform_hlds__intermod__intermod_write_pred_decls_4_p_0(ModuleInfo_11, DeclOrderPredInfos_25);
    }
    transform_hlds__intermod__intermod_write_preds_5_p_0(OutInfoForPreds_22, ModuleInfo_11, PredOrderPredInfos_26);
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_write_preds_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    transform_hlds__intermod__intermod_write_clause_11_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 8))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 9))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 10))), ((MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_write_preds_5_p_0(
  MR_Word OutInfo_1,
  MR_Word ModuleInfo_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if (!((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
    {
      MR_Word OrderPredInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word OrderPredInfos_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
      MR_String PredName_26;
      MR_Word PredOrFunc_28;
      MR_Word PredId_29;
      MR_Word PredInfo_30;
      MR_Word ModuleName_31;
      MR_Word PredSymName_32;
      MR_Word ClausesInfo_33;
      MR_Word VarSet_34;
      MR_Word HeadVars_35;
      MR_Word ClausesRep_36;
      MR_Word VarTypes_38;
      MR_Word Clauses_39;
      MR_Word GoalType_40;
      MR_Word ModuleName_78;
      MR_String PredName_79;
      MR_Integer PredArity_80;
      MR_Word PredOrFunc_81;
      MR_Word PredSymName_82;
      MR_Word Markers_83;
      MR_Word MarkerList_84;
      MR_Integer _PredArity_27;
      MR_Word _ItemNumbers_37;
      MR_Word next_value_of_HeadVar__3_3;

      mercury__io__nl_2_p_0();
      PredName_26 = ((MR_String) (MR_hl_field(MR_mktag(0), OrderPredInfo_13, (MR_Integer) 0)));
      _PredArity_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), OrderPredInfo_13, (MR_Integer) 1)));
      PredOrFunc_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), OrderPredInfo_13, (MR_Integer) 2)));
      PredId_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), OrderPredInfo_13, (MR_Integer) 3)));
      PredInfo_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), OrderPredInfo_13, (MR_Integer) 4)));
      ModuleName_31 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_30);
      {
        PredSymName_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), PredSymName_32, 0) = ((MR_Box) (ModuleName_31));
        MR_hl_field(MR_mktag(1), PredSymName_32, 1) = ((MR_Box) (PredName_26));
      }
      ModuleName_78 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_30);
      PredName_79 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_30);
      PredArity_80 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(PredInfo_30);
      PredOrFunc_81 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_30);
      {
        PredSymName_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), PredSymName_82, 0) = ((MR_Box) (ModuleName_78));
        MR_hl_field(MR_mktag(1), PredSymName_82, 1) = ((MR_Box) (PredName_79));
      }
      hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_30, &Markers_83);
      hlds__hlds_pred__markers_to_marker_list_2_p_0(Markers_83, &MarkerList_84);
      transform_hlds__intermod__intermod_write_pred_marker_pragmas_6_p_0(PredOrFunc_81, PredSymName_82, PredArity_80, MarkerList_84);
      hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(PredInfo_30, &ClausesInfo_33);
      hlds__hlds_clauses__clauses_info_get_varset_2_p_0(ClausesInfo_33, &VarSet_34);
      hlds__hlds_clauses__clauses_info_get_headvar_list_2_p_0(ClausesInfo_33, &HeadVars_35);
      hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(ClausesInfo_33, &ClausesRep_36, &_ItemNumbers_37);
      hlds__hlds_clauses__clauses_info_get_vartypes_2_p_0(ClausesInfo_33, &VarTypes_38);
      hlds__hlds_clauses__get_clause_list_maybe_repeated_2_p_0(ClausesRep_36, &Clauses_39);
      hlds__hlds_pred__pred_info_get_goal_type_2_p_0(PredInfo_30, &GoalType_40);
      switch (MR_tag((MR_Word) GoalType_40)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word TypeVarset_46;
            MR_Word TypeQual_47;
            MR_Word Var_50;
            MR_Box conv0_STATE_VARIABLE_IO_18_18;

            hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo_30, &TypeVarset_46);
            {
              TypeQual_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), TypeQual_47, 0) = ((MR_Box) (TypeVarset_46));
              MR_hl_field(MR_mktag(1), TypeQual_47, 1) = ((MR_Box) (VarTypes_38));
            }
            {
              Var_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_50, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_7[0]));
              MR_hl_field(MR_mktag(0), Var_50, 1) = ((MR_Box) (transform_hlds__intermod__intermod_write_preds_5_p_0_1));
              MR_hl_field(MR_mktag(0), Var_50, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
              MR_hl_field(MR_mktag(0), Var_50, 3) = ((MR_Box) (OutInfo_1));
              MR_hl_field(MR_mktag(0), Var_50, 4) = ((MR_Box) (ModuleInfo_2));
              MR_hl_field(MR_mktag(0), Var_50, 5) = ((MR_Box) (PredId_29));
              MR_hl_field(MR_mktag(0), Var_50, 6) = ((MR_Box) (PredSymName_32));
              MR_hl_field(MR_mktag(0), Var_50, 7) = ((MR_Box) (PredOrFunc_28));
              MR_hl_field(MR_mktag(0), Var_50, 8) = ((MR_Box) (VarSet_34));
              MR_hl_field(MR_mktag(0), Var_50, 9) = ((MR_Box) (TypeQual_47));
              MR_hl_field(MR_mktag(0), Var_50, 10) = ((MR_Box) (HeadVars_35));
            }
            mercury__list__foldl_4_p_2((MR_Word) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, Var_50, Clauses_39, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_18_18);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word PromiseType_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalType_40, (MR_Integer) 0)));

            if ((Clauses_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.intermod", (MR_String) "predicate \140transform_hlds.intermod.intermod_write_pred\'/5", (MR_String) "assertion not a single clause.");
                return;
              }
            }
            else
            {
              MR_Word Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), Clauses_39, (MR_Integer) 1)));
              MR_Word Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), Clauses_39, (MR_Integer) 0)));

              if ((Var_72 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                hlds__hlds_out__hlds_out_module__write_promise_13_p_0(OutInfo_1, ModuleInfo_2, VarSet_34, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 0, PromiseType_41, PredId_29, PredOrFunc_28, HeadVars_35, Var_73);
              }
              else
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.intermod", (MR_String) "predicate \140transform_hlds.intermod.intermod_write_pred\'/5", (MR_String) "assertion not a single clause.");
                  return;
                }
              }
            }
          }
          break;
      }
      // direct tailcall eliminated
      next_value_of_HeadVar__3_3 = OrderPredInfos_14;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_write_pred_decls_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_pragma__mercury_output_pragma_type_spec_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_write_pred_decls_4_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    if (!((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
    {
      MR_Word OrderPredInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word OrderPredInfos_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_String PredName_22 = ((MR_String) (MR_hl_field(MR_mktag(0), OrderPredInfo_10, (MR_Integer) 0)));
      MR_Word PredOrFunc_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), OrderPredInfo_10, (MR_Integer) 2)));
      MR_Word PredId_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), OrderPredInfo_10, (MR_Integer) 3)));
      MR_Word PredInfo_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), OrderPredInfo_10, (MR_Integer) 4)));
      MR_Word ModuleName_27;
      MR_Word TVarSet_28;
      MR_Word ExistQVars_29;
      MR_Word ArgTypes_30;
      MR_Word Purity_31;
      MR_Word ClassContext_32;
      MR_Word GoalType_33;
      MR_Word VarNamePrint_34;
      MR_Word PredSymName_36;
      MR_Word ProcMap_39;
      MR_Word SortedProcPairs_40;
      MR_Word ModuleName_55;
      MR_String PredName_56;
      MR_Integer PredArity_57;
      MR_Word PredOrFunc_58;
      MR_Word PredSymName_59;
      MR_Word Markers_60;
      MR_Word MarkerList_61;
      MR_Word TypeSpecInfo_68;
      MR_Word PragmaMap_69;
      MR_Integer _PredArity_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), OrderPredInfo_10, (MR_Integer) 1)));
      MR_Word Var_75;
      MR_Word Var_76;
      MR_Word Var_77;
      MR_Word TypeSpecPragmas_70;
      MR_Word next_value_of_HeadVar__2_2;

      ModuleName_27 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_26);
      hlds__hlds_pred__pred_info_get_arg_types_4_p_0(PredInfo_26, &TVarSet_28, &ExistQVars_29, &ArgTypes_30);
      hlds__hlds_pred__pred_info_get_purity_2_p_0(PredInfo_26, &Purity_31);
      hlds__hlds_pred__pred_info_get_class_context_2_p_0(PredInfo_26, &ClassContext_32);
      hlds__hlds_pred__pred_info_get_goal_type_2_p_0(PredInfo_26, &GoalType_33);
      switch (MR_tag((MR_Word) GoalType_33)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(GoalType_33)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 3:
              VarNamePrint_34 = (MR_Integer) 1;
              break;
            case (MR_Integer) 1:
              VarNamePrint_34 = (MR_Integer) 0;
              break;
            case (MR_Integer) 2:
              VarNamePrint_34 = (MR_Integer) 0;
              break;
          }
          break;
        case (MR_Integer) 1:
          VarNamePrint_34 = (MR_Integer) 1;
          break;
      }
      {
        PredSymName_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), PredSymName_36, 0) = ((MR_Box) (ModuleName_27));
        MR_hl_field(MR_mktag(1), PredSymName_36, 1) = ((MR_Box) (PredName_22));
      }
      switch (PredOrFunc_24) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word FuncArgTypes_37;
            MR_Word FuncRetType_38;
            MR_Box conv0_FuncRetType_38;

            parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ArgTypes_30, &FuncArgTypes_37, &conv0_FuncRetType_38);
            FuncRetType_38 = ((MR_Word) conv0_FuncRetType_38);
            parse_tree__parse_tree_out_pred_decl__mercury_output_func_type_11_p_0(TVarSet_28, VarNamePrint_34, ExistQVars_29, PredSymName_36, FuncArgTypes_37, FuncRetType_38, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Purity_31, ClassContext_32);
          }
          break;
        case (MR_Integer) 0:
          {
            parse_tree__parse_tree_out_pred_decl__mercury_output_pred_type_10_p_0(TVarSet_28, VarNamePrint_34, ExistQVars_29, PredSymName_36, ArgTypes_30, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Purity_31, ClassContext_32);
          }
          break;
      }
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_26, &ProcMap_39);
      mercury__map__to_sorted_assoc_list_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, ProcMap_39, &SortedProcPairs_40);
      transform_hlds__intermod__intermod_write_pred_valid_modes_5_p_0(PredOrFunc_24, PredSymName_36, SortedProcPairs_40);
      ModuleName_55 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_26);
      PredName_56 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_26);
      PredArity_57 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(PredInfo_26);
      PredOrFunc_58 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_26);
      {
        PredSymName_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), PredSymName_59, 0) = ((MR_Box) (ModuleName_55));
        MR_hl_field(MR_mktag(1), PredSymName_59, 1) = ((MR_Box) (PredName_56));
      }
      hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_26, &Markers_60);
      hlds__hlds_pred__markers_to_marker_list_2_p_0(Markers_60, &MarkerList_61);
      transform_hlds__intermod__intermod_write_pred_marker_pragmas_6_p_0(PredOrFunc_58, PredSymName_59, PredArity_57, MarkerList_61);
      hlds__hlds_module__module_info_get_type_spec_info_2_p_0(ModuleInfo_1, &TypeSpecInfo_68);
      Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeSpecInfo_68, (MR_Integer) 0)));
      Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeSpecInfo_68, (MR_Integer) 1)));
      Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeSpecInfo_68, (MR_Integer) 2)));
      PragmaMap_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeSpecInfo_68, (MR_Integer) 3)));
      succeeded = mercury__multi_map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_type_spec_0, PragmaMap_69, ((MR_Box) (PredId_25)), &TypeSpecPragmas_70);
      if (succeeded)
      {
        MR_Box conv1_STATE_VARIABLE_IO_15_15;

        mercury__list__foldl_4_p_2((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_type_spec_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &transform_hlds__intermod_scalar_common_6[0], TypeSpecPragmas_70, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_15_15);
      }
      else
      {
      }
      // direct tailcall eliminated
      next_value_of_HeadVar__2_2 = OrderPredInfos_11;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_write_pred_marker_pragmas_6_p_0(
  MR_Word PredOrFunc_1,
  MR_Word PredSymName_2,
  MR_Integer PredArity_3,
  MR_Word HeadVar__4_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if (!((HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
    {
      MR_Word Marker_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0)));
      MR_Word Markers_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1)));
      MR_Word next_value_of_HeadVar__4_4;

      switch (Marker_16) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
          }
          break;
        case (MR_Integer) 22:
          {
          }
          break;
        case (MR_Integer) 21:
          {
          }
          break;
        case (MR_Integer) 12:
          {
          }
          break;
        case (MR_Integer) 11:
          {
          }
          break;
        case (MR_Integer) 10:
          {
          }
          break;
        case (MR_Integer) 20:
          {
            MR_String MarkerName_20;

            hlds__hlds_out__hlds_out_pred__marker_name_2_p_0(Marker_16, &MarkerName_20);
            parse_tree__parse_tree_out_pragma__mercury_output_pragma_decl_7_p_0(PredSymName_2, PredArity_3, PredOrFunc_1, MarkerName_20, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
          }
          break;
        case (MR_Integer) 27:
          {
          }
          break;
        case (MR_Integer) 26:
          {
          }
          break;
        case (MR_Integer) 25:
          {
          }
          break;
        case (MR_Integer) 9:
          {
          }
          break;
        case (MR_Integer) 3:
          {
          }
          break;
        case (MR_Integer) 2:
          {
          }
          break;
        case (MR_Integer) 14:
          {
          }
          break;
        case (MR_Integer) 15:
          {
          }
          break;
        case (MR_Integer) 23:
          {
            MR_String MarkerName_56;

            hlds__hlds_out__hlds_out_pred__marker_name_2_p_0(Marker_16, &MarkerName_56);
            parse_tree__parse_tree_out_pragma__mercury_output_pragma_decl_7_p_0(PredSymName_2, PredArity_3, PredOrFunc_1, MarkerName_56, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
          }
          break;
        case (MR_Integer) 24:
          {
          }
          break;
        case (MR_Integer) 13:
          {
          }
          break;
        case (MR_Integer) 6:
          {
          }
          break;
        case (MR_Integer) 4:
          {
          }
          break;
        case (MR_Integer) 5:
          {
          }
          break;
        case (MR_Integer) 18:
          {
            MR_String MarkerName_70;

            hlds__hlds_out__hlds_out_pred__marker_name_2_p_0(Marker_16, &MarkerName_70);
            parse_tree__parse_tree_out_pragma__mercury_output_pragma_decl_7_p_0(PredSymName_2, PredArity_3, PredOrFunc_1, MarkerName_70, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
          }
          break;
        case (MR_Integer) 16:
          {
            MR_String MarkerName_74;

            hlds__hlds_out__hlds_out_pred__marker_name_2_p_0(Marker_16, &MarkerName_74);
            parse_tree__parse_tree_out_pragma__mercury_output_pragma_decl_7_p_0(PredSymName_2, PredArity_3, PredOrFunc_1, MarkerName_74, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
          }
          break;
        case (MR_Integer) 17:
          {
            MR_String MarkerName_78;

            hlds__hlds_out__hlds_out_pred__marker_name_2_p_0(Marker_16, &MarkerName_78);
            parse_tree__parse_tree_out_pragma__mercury_output_pragma_decl_7_p_0(PredSymName_2, PredArity_3, PredOrFunc_1, MarkerName_78, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
          }
          break;
        case (MR_Integer) 0:
          {
          }
          break;
        case (MR_Integer) 19:
          {
            MR_String MarkerName_84;

            hlds__hlds_out__hlds_out_pred__marker_name_2_p_0(Marker_16, &MarkerName_84);
            parse_tree__parse_tree_out_pragma__mercury_output_pragma_decl_7_p_0(PredSymName_2, PredArity_3, PredOrFunc_1, MarkerName_84, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
          }
          break;
        case (MR_Integer) 7:
          {
            MR_String MarkerName_88;

            hlds__hlds_out__hlds_out_pred__marker_name_2_p_0(Marker_16, &MarkerName_88);
            parse_tree__parse_tree_out_pragma__mercury_output_pragma_decl_7_p_0(PredSymName_2, PredArity_3, PredOrFunc_1, MarkerName_88, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
          }
          break;
        case (MR_Integer) 8:
          {
            MR_String MarkerName_92;

            hlds__hlds_out__hlds_out_pred__marker_name_2_p_0(Marker_16, &MarkerName_92);
            parse_tree__parse_tree_out_pragma__mercury_output_pragma_decl_7_p_0(PredSymName_2, PredArity_3, PredOrFunc_1, MarkerName_92, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
          }
          break;
      }
      // direct tailcall eliminated
      next_value_of_HeadVar__4_4 = Markers_17;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_write_pred_valid_modes_5_p_0(
  MR_Word PredOrFunc_1,
  MR_Word PredSymName_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    if (!((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
    {
      MR_Word ProcIdInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ProcIdInfos_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ProcInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcIdInfo_13, (MR_Integer) 1)));
      MR_Integer _ProcId_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ProcIdInfo_13, (MR_Integer) 0)));
      MR_Word next_value_of_HeadVar__3_3;

      succeeded = hlds__hlds_pred__proc_info_is_valid_mode_1_p_0(ProcInfo_17);
      if (succeeded)
      {
        MR_Word MaybeArgModes_28;
        MR_Word MaybeDetism_29;
        MR_Word ArgModes_32;
        MR_Word Detism_33;
        MR_Word Varset_34;
        MR_Word ArgModesPrime_30;
        MR_Word DetismPrime_31;

        hlds__hlds_pred__proc_info_get_maybe_declared_argmodes_2_p_0(ProcInfo_17, &MaybeArgModes_28);
        hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(ProcInfo_17, &MaybeDetism_29);
        succeeded = ((MR_tag((MR_Word) MaybeArgModes_28)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          ArgModesPrime_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeArgModes_28, (MR_Integer) 0)));
          succeeded = ((MR_tag((MR_Word) MaybeDetism_29)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
            DetismPrime_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeDetism_29, (MR_Integer) 0)));
        }
        if (succeeded)
        {
          ArgModes_32 = ArgModesPrime_30;
          Detism_33 = DetismPrime_31;
        }
        else
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.intermod", (MR_String) "predicate \140transform_hlds.intermod.intermod_write_pred_mode\'/5", (MR_String) "attempt to write undeclared mode");
            return;
          }
        }
        mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, &Varset_34);
        switch (PredOrFunc_1) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word FuncArgModes_35;
              MR_Word FuncRetMode_36;
              MR_Word Var_45;
              MR_Box conv0_FuncRetMode_36;

              parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, ArgModes_32, &FuncArgModes_35, &conv0_FuncRetMode_36);
              FuncRetMode_36 = ((MR_Word) conv0_FuncRetMode_36);
              {
                Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (Detism_33));
              }
              parse_tree__parse_tree_out_pred_decl__mercury_output_func_mode_decl_8_p_0((MR_Integer) 0, Varset_34, PredSymName_2, FuncArgModes_35, FuncRetMode_36, Var_45);
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word Var_42;

              {
                Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (Detism_33));
              }
              parse_tree__parse_tree_out_pred_decl__mercury_output_pred_mode_decl_8_p_0((MR_Integer) 0, Varset_34, PredSymName_2, ArgModes_32, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Var_42);
            }
            break;
        }
      }
      else
      {
      }
      // direct tailcall eliminated
      next_value_of_HeadVar__3_3 = ProcIdInfos_14;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__intermod__generate_order_pred_infos_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word PredIds_5,
  MR_Word * SortedOrderPredInfos_6)
{
  {
    MR_Word OrderPredInfos_7;

    transform_hlds__intermod__generate_order_pred_infos_acc_4_p_0(ModuleInfo_4, PredIds_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &OrderPredInfos_7);
    mercury__list__sort_2_p_0((MR_Word) &transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_order_pred_info_0, OrderPredInfos_7, SortedOrderPredInfos_6);
  }
}

static void MR_CALL 
transform_hlds__intermod__generate_order_pred_infos_acc_4_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_OrderPredInfos_0_3,
  MR_Word * STATE_VARIABLE_OrderPredInfos_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_OrderPredInfos_4 = STATE_VARIABLE_OrderPredInfos_0_3;
    else
    {
      MR_Word PredId_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word PredIds_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word PredInfo_13;
      MR_String PredName_14;
      MR_Integer PredArity_15;
      MR_Word PredOrFunc_16;
      MR_Word OrderPredInfo_17;
      MR_Word STATE_VARIABLE_OrderPredInfos_20_20;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_OrderPredInfos_0_3;

      hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_1, PredId_10, &PredInfo_13);
      PredName_14 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_13);
      PredArity_15 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(PredInfo_13);
      PredOrFunc_16 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_13);
      {
        OrderPredInfo_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), OrderPredInfo_17, 0) = ((MR_Box) (PredName_14));
        MR_hl_field(MR_mktag(0), OrderPredInfo_17, 1) = ((MR_Box) (PredArity_15));
        MR_hl_field(MR_mktag(0), OrderPredInfo_17, 2) = ((MR_Box) (PredOrFunc_16));
        MR_hl_field(MR_mktag(0), OrderPredInfo_17, 3) = ((MR_Box) (PredId_10));
        MR_hl_field(MR_mktag(0), OrderPredInfo_17, 4) = ((MR_Box) (PredInfo_13));
      }
      {
        STATE_VARIABLE_OrderPredInfos_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_OrderPredInfos_20_20, 0) = ((MR_Box) (OrderPredInfo_17));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_OrderPredInfos_20_20, 1) = ((MR_Box) (STATE_VARIABLE_OrderPredInfos_0_3));
      }
      // direct tailcall eliminated
      next_value_of_HeadVar__2_2 = PredIds_11;
      next_value_of_STATE_VARIABLE_OrderPredInfos_0_3 = STATE_VARIABLE_OrderPredInfos_20_20;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_OrderPredInfos_0_3 = next_value_of_STATE_VARIABLE_OrderPredInfos_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_write_instances_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    transform_hlds__intermod__intermod_write_instance_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_write_instances_4_p_0(
  MR_Word OutInfo_5,
  MR_Word Instances_6)
{
  if (!((Instances_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
  {
    MR_Word TypeInfo_16_16;
    MR_Word SortedInstances_10;
    MR_Word Var_14;
    MR_Box conv0_STATE_VARIABLE_IO_12;

    mercury__io__nl_2_p_0();
    TypeInfo_16_16 = (MR_Word) &transform_hlds__intermod_scalar_common_2[3];
    mercury__list__sort_2_p_0(TypeInfo_16_16, Instances_6, &SortedInstances_10);
    {
      Var_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (transform_hlds__intermod__intermod_write_instances_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_14, 3) = ((MR_Box) (OutInfo_5));
    }
    mercury__list__foldl_4_p_2(TypeInfo_16_16, (MR_Word) &mercury__io__io__type_ctor_info_state_0, Var_14, SortedInstances_10, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_12);
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_write_classes_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_First_33;

    transform_hlds__intermod__intermod_write_class_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3), &conv0_STATE_VARIABLE_First_33);
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_First_33));
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_write_classes_4_p_0(
  MR_Word OutInfo_5,
  MR_Word ModuleInfo_6)
{
  {
    MR_Word ModuleName_8;
    MR_Word ClassDefnMap_9;
    MR_Word Var_13;
    MR_Word Var_10;
    MR_Box conv2_Var_10;
    MR_Box conv1_STATE_VARIABLE_IO_12;

    hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_6, &ModuleName_8);
    hlds__hlds_module__module_info_get_class_table_2_p_0(ModuleInfo_6, &ClassDefnMap_9);
    {
      Var_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_13, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_4[2]));
      MR_hl_field(MR_mktag(0), Var_13, 1) = ((MR_Box) (transform_hlds__intermod__intermod_write_classes_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_13, 3) = ((MR_Box) (OutInfo_5));
      MR_hl_field(MR_mktag(0), Var_13, 4) = ((MR_Box) (ModuleName_8));
    }
    mercury__map__foldl2_6_p_2((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_defn_0, (MR_Word) &transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, Var_13, ClassDefnMap_9, ((MR_Box) ((MR_Integer) 1)), &conv2_Var_10, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_12);
    Var_10 = ((MR_Word) conv2_Var_10);
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_write_modes_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_First_27;

    transform_hlds__intermod__intermod_write_mode_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3), &conv0_STATE_VARIABLE_First_27);
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_First_27));
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_write_modes_4_p_0(
  MR_Word OutInfo_5,
  MR_Word ModuleInfo_6)
{
  {
    MR_Word ModuleName_8;
    MR_Word Modes_9;
    MR_Word ModeDefnMap_10;
    MR_Word Var_14;
    MR_Word Var_11;
    MR_Box conv2_Var_11;
    MR_Box conv1_STATE_VARIABLE_IO_13;

    hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_6, &ModuleName_8);
    hlds__hlds_module__module_info_get_mode_table_2_p_0(ModuleInfo_6, &Modes_9);
    hlds__hlds_data__mode_table_get_mode_defns_2_p_0(Modes_9, &ModeDefnMap_10);
    {
      Var_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_4[1]));
      MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (transform_hlds__intermod__intermod_write_modes_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_14, 3) = ((MR_Box) (OutInfo_5));
      MR_hl_field(MR_mktag(0), Var_14, 4) = ((MR_Box) (ModuleName_8));
    }
    mercury__map__foldl2_6_p_2((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_mode_defn_0, (MR_Word) &transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, Var_14, ModeDefnMap_10, ((MR_Box) ((MR_Integer) 1)), &conv2_Var_11, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_13);
    Var_11 = ((MR_Word) conv2_Var_11);
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_write_insts_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_First_33;

    transform_hlds__intermod__intermod_write_inst_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3), &conv0_STATE_VARIABLE_First_33);
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_First_33));
  }
}

static void MR_CALL 
transform_hlds__intermod__intermod_write_insts_4_p_0(
  MR_Word OutInfo_5,
  MR_Word ModuleInfo_6)
{
  {
    MR_Word ModuleName_8;
    MR_Word Insts_9;
    MR_Word UserInstMap_10;
    MR_Word Var_14;
    MR_Word Var_11;
    MR_Box conv2_Var_11;
    MR_Box conv1_STATE_VARIABLE_IO_13;

    hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_6, &ModuleName_8);
    hlds__hlds_module__module_info_get_inst_table_2_p_0(ModuleInfo_6, &Insts_9);
    hlds__hlds_data__inst_table_get_user_insts_2_p_0(Insts_9, &UserInstMap_10);
    {
      Var_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (transform_hlds__intermod__intermod_write_insts_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_14, 3) = ((MR_Box) (OutInfo_5));
      MR_hl_field(MR_mktag(0), Var_14, 4) = ((MR_Box) (ModuleName_8));
    }
    mercury__map__foldl2_6_p_2((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_inst_defn_0, (MR_Word) &transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, Var_14, UserInstMap_10, ((MR_Box) ((MR_Integer) 1)), &conv2_Var_11, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_13);
    Var_11 = ((MR_Word) conv2_Var_11);
  }
}

static void MR_CALL 
transform_hlds__intermod__some_type_needs_to_be_written_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *HeadVar__2_2 = (MR_Integer) 0;
    else
    {
      MR_Word TypeDefn_4;
      MR_Word TypeCtorDefns_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word TypeStatus_7;
      MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 0)));
      MR_Word Var_11;

      TypeDefn_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 1)));
      hlds__hlds_data__get_type_defn_status_2_p_0(TypeDefn_4, &TypeStatus_7);
      Var_11 = (MR_Word) TypeStatus_7;
      if ((Var_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
        succeeded = MR_TRUE;
      else
      if ((Var_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
        succeeded = MR_TRUE;
      else
        succeeded = MR_FALSE;
      if (succeeded)
        *HeadVar__2_2 = (MR_Integer) 1;
      else
      {
        MR_Word next_value_of_HeadVar__1_1 = TypeCtorDefns_5;

        // direct tailcall eliminated
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__intermod__gather_opt_export_types_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_IntermodInfo_33;

    transform_hlds__intermod__gather_opt_export_types_in_type_defn_4_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3), &conv0_STATE_VARIABLE_IntermodInfo_33);
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_IntermodInfo_33));
  }
}

static void MR_CALL 
transform_hlds__intermod__gather_opt_export_types_2_p_0(
  MR_Word STATE_VARIABLE_IntermodInfo_0_6,
  MR_Word * STATE_VARIABLE_IntermodInfo_7)
{
  {
    MR_Word ModuleInfo_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_6, (MR_Integer) 5)));
    MR_Word TypeTable_5;
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_6, (MR_Integer) 0)));
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_6, (MR_Integer) 1)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_6, (MR_Integer) 2)));
    MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_6, (MR_Integer) 3)));
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_6, (MR_Integer) 4)));
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IntermodInfo_0_6, (MR_Integer) 6)));
    MR_Box conv1_STATE_VARIABLE_IntermodInfo_7;

    hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_4, &TypeTable_5);
    hlds__hlds_data__foldl_over_type_ctor_defns_4_p_0((MR_Word) &transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_intermod_info_0, (MR_Word) &transform_hlds__intermod_scalar_common_2[6], TypeTable_5, ((MR_Box) (STATE_VARIABLE_IntermodInfo_0_6)), &conv1_STATE_VARIABLE_IntermodInfo_7);
    *STATE_VARIABLE_IntermodInfo_7 = ((MR_Word) conv1_STATE_VARIABLE_IntermodInfo_7);
  }
}

static MR_bool MR_CALL 
transform_hlds__intermod____Unify____intermod_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__intermod____Unify____intermod_info_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__intermod____Compare____intermod_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__intermod____Compare____intermod_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__intermod____Unify____maybe_first_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__intermod____Unify____maybe_first_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__intermod____Compare____maybe_first_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__intermod____Compare____maybe_first_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__intermod____Unify____maybe_should_write_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__intermod____Unify____maybe_should_write_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__intermod____Compare____maybe_should_write_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__intermod____Compare____maybe_should_write_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__intermod____Unify____order_pred_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__intermod____Unify____order_pred_info_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__intermod____Compare____order_pred_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__intermod____Compare____order_pred_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__intermod____Unify____should_write_for_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__intermod____Unify____should_write_for_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__intermod____Compare____should_write_for_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__intermod____Compare____should_write_for_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__transform_hlds__intermod__init(void)
{
}

void mercury__transform_hlds__intermod__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_intermod_info_0);
	MR_register_type_ctor_info(&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_first_0);
	MR_register_type_ctor_info(&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_maybe_should_write_0);
	MR_register_type_ctor_info(&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_order_pred_info_0);
	MR_register_type_ctor_info(&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_should_write_for_0);
}

void mercury__transform_hlds__intermod__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__intermod__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module transform_hlds.intermod.
