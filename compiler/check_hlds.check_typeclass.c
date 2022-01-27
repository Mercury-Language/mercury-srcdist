/*
** Automatically generated from `check_typeclass.m'
** by the Mercury compiler,
** version rotd-2022-01-20
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


// :- module check_hlds.check_typeclass.
// :- implementation.

/*
INIT mercury__check_hlds__check_typeclass__init
ENDINIT
*/

#include "check_hlds.check_typeclass.mih"


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
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_assign.mih"
#include "check_hlds.type_util.mih"
#include "check_hlds.typecheck_info.mih"
#include "check_hlds.typeclasses.mih"
#include "hlds.add_pred.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_code_util.mih"
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
#include "hlds.make_hlds.mih"
#include "hlds.passes_aux.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_succeeded.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.equiv_type.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.mercury_to_mercury.mih"
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
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.make_hlds.qual_info.mih"



struct check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_env_0_s {
  MR_bool check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_env_0__succeeded;
  MR_Word check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_env_0__AbstractTypes_10;
  MR_Word check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_env_0__ConcreteInstances_11;
  jmp_buf check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_env_0__commit_0;
  MR_Word check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_env_0__TypeInfo_89_89;
  MR_Word check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_env_0__ConcreteInstance_12;
  MR_Word check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_env_0__ConcreteTypes_13;
  MR_Box check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_env_0__conv0_ConcreteInstance_12;
};

struct check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_env_0_s {
  MR_bool check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_env_0__succeeded;
  MR_Word check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_env_0__MatchingMethods_17;
  jmp_buf check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_env_0__commit_0;
  MR_Word check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_env_0__DefnViaName_22;
  MR_Word check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_env_0__InstanceProcDef_25;
  MR_Box check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_env_0__conv0_DefnViaName_22;
};

struct check_hlds__check_typeclass__method_is_known_3_p_0_env_0_s {
  MR_Word check_hlds__check_typeclass__method_is_known_3_p_0_env_0__ClassPredIds_5;
  MR_bool check_hlds__check_typeclass__method_is_known_3_p_0_env_0__succeeded;
  MR_Word check_hlds__check_typeclass__method_is_known_3_p_0_env_0__MatchingPredIds_13;
  jmp_buf check_hlds__check_typeclass__method_is_known_3_p_0_env_0__commit_0;
  MR_Word check_hlds__check_typeclass__method_is_known_3_p_0_env_0__TypeCtorInfo_17_17;
  MR_Word check_hlds__check_typeclass__method_is_known_3_p_0_env_0__PredId_16;
  MR_Box check_hlds__check_typeclass__method_is_known_3_p_0_env_0__conv0_PredId_16;
};


static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__check_typeclass__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_class__type_ctor_info_hlds_class_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__check_typeclass__list__pti_list_1__plain_hlds__hlds_class__type_ctor_info_hlds_instance_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__check_typeclass__list__ti_list_1hlds__hlds_class__type_ctor_info_hlds_instance_defn_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__check_typeclass__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_list__ti_list_1hlds__hlds_class__type_ctor_info_hlds_instance_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_class_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__check_typeclass__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_class_id_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__check_typeclass__list__ti_list_1parse_tree__prog_data__type_ctor_info_class_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__check_typeclass__list__pti_list_1__plain_list__ti_list_1parse_tree__prog_data__type_ctor_info_class_id_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__check_typeclass__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__check_typeclass__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__check_typeclass__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__check_typeclass__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__check_typeclass__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__check_typeclass__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__check_typeclass__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_instance_method_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_clause_info_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__check_typeclass__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__check_typeclass__cord__pti_cord_1__plain_parse_tree__error_util__type_ctor_info_format_component_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__check_typeclass__list__pti_list_1__plain_hlds__hlds_class__type_ctor_info_hlds_class_fundep_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__check_typeclass__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__check_typeclass__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__check_typeclass__list__pti_list_1__plain_check_hlds__check_typeclass__type_ctor_info_induced_fundep_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_EnumFunctorDesc check_hlds__check_typeclass__check_hlds__check_typeclass__enum_functor_desc_bad_instance_type_kind_0_0;

static const MR_EnumFunctorDesc check_hlds__check_typeclass__check_hlds__check_typeclass__enum_functor_desc_bad_instance_type_kind_0_1;

static const MR_EnumFunctorDescPtr check_hlds__check_typeclass__check_hlds__check_typeclass__enum_ordinal_ordered_bad_instance_type_kind_0[2];

static const MR_EnumFunctorDescPtr check_hlds__check_typeclass__check_hlds__check_typeclass__enum_name_ordered_bad_instance_type_kind_0[2];

static const MR_Integer check_hlds__check_typeclass__check_hlds__check_typeclass__functor_number_map_bad_instance_type_kind_0[2];

static const MR_FA_TypeInfo_Struct1 check_hlds__check_typeclass__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__check_typeclass__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__check_typeclass__list__ti_list_1check_hlds__check_typeclass__type_ctor_info_modes_and_detism_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__check_typeclass__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_PseudoTypeInfo check_hlds__check_typeclass__check_hlds__check_typeclass__field_types_check_instance_method_info_0_0[9];

static const MR_ConstString check_hlds__check_typeclass__check_hlds__check_typeclass__field_names_check_instance_method_info_0_0[9];

static const MR_DuArgLocn check_hlds__check_typeclass__check_hlds__check_typeclass__field_locns_check_instance_method_info_0_0[9];

static const MR_DuFunctorDesc check_hlds__check_typeclass__check_hlds__check_typeclass__du_functor_desc_check_instance_method_info_0_0;

static const MR_DuFunctorDescPtr check_hlds__check_typeclass__check_hlds__check_typeclass__du_stag_ordered_check_instance_method_info_0_0[1];

static const MR_DuPtagLayout check_hlds__check_typeclass__check_hlds__check_typeclass__du_ptag_ordered_check_instance_method_info_0[1];

static const MR_DuFunctorDescPtr check_hlds__check_typeclass__check_hlds__check_typeclass__du_name_ordered_check_instance_method_info_0[1];

static const MR_Integer check_hlds__check_typeclass__check_hlds__check_typeclass__functor_number_map_check_instance_method_info_0[1];

static const MR_FA_TypeInfo_Struct1 check_hlds__check_typeclass__set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_PseudoTypeInfo check_hlds__check_typeclass__check_hlds__check_typeclass__field_types_induced_fundep_0_0[2];

static const MR_ConstString check_hlds__check_typeclass__check_hlds__check_typeclass__field_names_induced_fundep_0_0[2];

static const MR_DuFunctorDesc check_hlds__check_typeclass__check_hlds__check_typeclass__du_functor_desc_induced_fundep_0_0;

static const MR_DuFunctorDescPtr check_hlds__check_typeclass__check_hlds__check_typeclass__du_stag_ordered_induced_fundep_0_0[1];

static const MR_DuPtagLayout check_hlds__check_typeclass__check_hlds__check_typeclass__du_ptag_ordered_induced_fundep_0[1];

static const MR_DuFunctorDescPtr check_hlds__check_typeclass__check_hlds__check_typeclass__du_name_ordered_induced_fundep_0[1];

static const MR_Integer check_hlds__check_typeclass__check_hlds__check_typeclass__functor_number_map_induced_fundep_0[1];

static const MR_FA_TypeInfo_Struct1 check_hlds__check_typeclass__list__ti_list_1check_hlds__check_typeclass__type_ctor_info_induced_fundep_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__check_typeclass__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__check_typeclass__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__check_typeclass__maybe__ti_maybe_1parse_tree__prog_data__type_ctor_info_determinism_0;

static const MR_PseudoTypeInfo check_hlds__check_typeclass__check_hlds__check_typeclass__field_types_modes_and_detism_0_0[3];

static const MR_DuFunctorDesc check_hlds__check_typeclass__check_hlds__check_typeclass__du_functor_desc_modes_and_detism_0_0;

static const MR_DuFunctorDescPtr check_hlds__check_typeclass__check_hlds__check_typeclass__du_stag_ordered_modes_and_detism_0_0[1];

static const MR_DuPtagLayout check_hlds__check_typeclass__check_hlds__check_typeclass__du_ptag_ordered_modes_and_detism_0[1];

static const MR_DuFunctorDescPtr check_hlds__check_typeclass__check_hlds__check_typeclass__du_name_ordered_modes_and_detism_0[1];

static const MR_Integer check_hlds__check_typeclass__check_hlds__check_typeclass__functor_number_map_modes_and_detism_0[1];

static const MR_EnumFunctorDesc check_hlds__check_typeclass__check_hlds__check_typeclass__enum_functor_desc_quant_error_type_0_0;

static const MR_EnumFunctorDesc check_hlds__check_typeclass__check_hlds__check_typeclass__enum_functor_desc_quant_error_type_0_1;

static const MR_EnumFunctorDescPtr check_hlds__check_typeclass__check_hlds__check_typeclass__enum_ordinal_ordered_quant_error_type_0[2];

static const MR_EnumFunctorDescPtr check_hlds__check_typeclass__check_hlds__check_typeclass__enum_name_ordered_quant_error_type_0[2];

static const MR_Integer check_hlds__check_typeclass__check_hlds__check_typeclass__functor_number_map_quant_error_type_0[2];

static void MR_CALL 
check_hlds__check_typeclass__IntroducedFrom__pred__report_duplicate_method_defn__2296__1_2_p_0(
  MR_Word LambdaHeadVar__1_77,
  MR_Word * LambdaHeadVar__2_78);

static MR_String MR_CALL 
check_hlds__check_typeclass__IntroducedFrom__func__report_badly_quantified_vars__2113__1_2_f_0(
  MR_Word TVarSet_9,
  MR_Word HeadVar__2_72);

static MR_Word MR_CALL 
check_hlds__check_typeclass__IntroducedFrom__func__report_bad_class_ids__2046__1_1_f_0(
  MR_Word LambdaHeadVar__1_14);

static MR_String MR_CALL 
check_hlds__check_typeclass__IntroducedFrom__func__report_unbound_tvars_in_ctor_context__1930__1_2_f_0(
  MR_Word TVarSet_10,
  MR_Word HeadVar__2_69);

static MR_String MR_CALL 
check_hlds__check_typeclass__IntroducedFrom__func__report_unbound_tvars_in_pred_context__1900__1_2_f_0(
  MR_Word TVarSet_8,
  MR_Word HeadVar__2_87);

static MR_bool MR_CALL 
check_hlds__check_typeclass__IntroducedFrom__pred__check_typeclass_constraints_on_data_ctor__1851__1_2_p_0(
  MR_Word ExistQArgTVars_32,
  MR_Word ExistQArgTVarsB_33);

static MR_bool MR_CALL 
check_hlds__check_typeclass__IntroducedFrom__pred__check_typeclass_constraints_on_data_ctor__1850__1_2_p_0(
  MR_Word ExistQVars_19,
  MR_Word HeadVar__2_55);

static MR_bool MR_CALL 
check_hlds__check_typeclass__IntroducedFrom__pred__check_typeclass_constraints_on_data_ctor__1847__1_2_p_0(
  MR_Word ExistQVars_19,
  MR_Word LambdaHeadVar__1_44);

static MR_String MR_CALL 
check_hlds__check_typeclass__IntroducedFrom__func__report_coverage_error__1613__1_2_f_0(
  MR_Word TVarSet_9,
  MR_Word HeadVar__2_77);

static void MR_CALL 
check_hlds__check_typeclass__IntroducedFrom__pred__produce_auxiliary_procs__1009__1_6_p_0(
  MR_Word Context_29,
  MR_Integer PredArity_77,
  MR_Word LambdaHeadVar__1_121,
  MR_Integer * LambdaHeadVar__2_122,
  MR_Word LambdaHeadVar__3_123,
  MR_Word * LambdaHeadVar__4_124);

static MR_bool MR_CALL 
check_hlds__check_typeclass__IntroducedFrom__pred__get_matching_instance_defns__879__1_2_p_0(
  MR_Word LambdaHeadVar__1_42,
  MR_Word * LambdaHeadVar__2_43);

static MR_bool MR_CALL 
check_hlds__check_typeclass__IntroducedFrom__pred__get_matching_instance_defns__860__1_4_p_0(
  MR_Word PredOrFunc_2,
  MR_Word MethodName_3,
  MR_Integer MethodArity_4,
  MR_Word LambdaHeadVar__1_40);

static void MR_CALL 
check_hlds__check_typeclass__IntroducedFrom__pred__check_instance_pred_procs__824__1_3_p_0(
  MR_Word InstancePredId_46,
  MR_Integer LambdaHeadVar__1_73,
  MR_Word * LambdaHeadVar__2_74);

static void MR_CALL 
check_hlds__check_typeclass__IntroducedFrom__pred__check_instance_pred__725__1_3_p_0(
  MR_Word ProcTable_48,
  MR_Integer LambdaHeadVar__1_83,
  MR_Word * LambdaHeadVar__2_84);

static MR_bool MR_CALL 
check_hlds__check_typeclass__IntroducedFrom__pred__check_instance_pred__697__1_3_p_0(
  MR_Word PredId_18,
  MR_Word LambdaHeadVar__1_76,
  MR_Integer * LambdaHeadVar__2_77);

static void MR_CALL 
check_hlds__check_typeclass____Compare____quant_error_type_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__check_typeclass____Unify____quant_error_type_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__check_typeclass____Compare____modes_and_detism_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__check_typeclass____Unify____modes_and_detism_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__check_typeclass____Compare____induced_fundeps_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__check_typeclass____Unify____induced_fundeps_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__check_typeclass____Compare____induced_fundep_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__check_typeclass____Unify____induced_fundep_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__check_typeclass____Compare____class_path_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__check_typeclass____Unify____class_path_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__check_typeclass____Compare____check_instance_method_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__check_typeclass____Unify____check_instance_method_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__check_typeclass____Compare____bad_instance_type_kind_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__check_typeclass____Unify____bad_instance_type_kind_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__check_typeclass__collect_determined_vars_5_p_0(
  MR_Word FunDep_1,
  MR_Word STATE_VARIABLE_FunDeps_0_11,
  MR_Word * STATE_VARIABLE_FunDeps_12,
  MR_Word STATE_VARIABLE_Vars_0_13,
  MR_Word * STATE_VARIABLE_Vars_14);

static MR_Word MR_CALL 
check_hlds__check_typeclass__remove_vars_2_f_0(
  MR_Word Vars_4,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
check_hlds__check_typeclass__induced_vars_3_f_0(
  MR_Word Args_5,
  MR_Integer ArgNum_6,
  MR_Word Vars_7);

static MR_Box MR_CALL 
check_hlds__check_typeclass__induced_fundep_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__check_typeclass__induced_fundep_4_p_0(
  MR_Word Args_5,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_FunDeps_0_11,
  MR_Word * STATE_VARIABLE_FunDeps_12);

static void MR_CALL 
check_hlds__check_typeclass__induced_fundeps_3_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__check_typeclass__induced_fundeps_3_4_p_0(
  MR_Word ClassTable_5,
  MR_Word Constraint_6,
  MR_Word STATE_VARIABLE_FunDeps_0_12,
  MR_Word * STATE_VARIABLE_FunDeps_13);

static void MR_CALL 
check_hlds__check_typeclass__acc_induced_fundeps_for_constraint_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__check_typeclass__acc_induced_fundeps_for_constraint_5_p_0(
  MR_Word ClassTable_6,
  MR_Word TVarSet_7,
  MR_Word Constraint_8,
  MR_Word STATE_VARIABLE_FunDeps_0_25,
  MR_Word * STATE_VARIABLE_FunDeps_26);

static void MR_CALL 
check_hlds__check_typeclass__check_typeclass_constraints_on_data_ctor_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__check_typeclass__check_typeclass_constraints_on_data_ctor_6_p_0_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
check_hlds__check_typeclass__check_typeclass_constraints_on_data_ctor_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
check_hlds__check_typeclass__check_typeclass_constraints_on_data_ctor_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__check_typeclass__check_typeclass_constraints_on_data_ctor_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word TypeCtor_8,
  MR_Word TypeDefn_9,
  MR_Word Ctor_10,
  MR_Word STATE_VARIABLE_Specs_0_40,
  MR_Word * STATE_VARIABLE_Specs_41);

static MR_Word MR_CALL 
check_hlds__check_typeclass__report_bad_class_ids_in_data_ctor_4_f_0(
  MR_Word TypeCtor_6,
  MR_Word TypeDefn_7,
  MR_Word HeadBadClassId_8,
  MR_Word TailBadClassIds_9);

static MR_Box MR_CALL 
check_hlds__check_typeclass__report_unbound_tvars_in_ctor_context_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
check_hlds__check_typeclass__report_unbound_tvars_in_ctor_context_3_f_0(
  MR_Word Vars_5,
  MR_Word TypeCtor_6,
  MR_Word TypeDefn_7);

static void MR_CALL 
check_hlds__check_typeclass__check_typeclass_constraints_on_type_ctor_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__check_typeclass__check_typeclass_constraints_on_type_ctor_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20);

static void MR_CALL 
check_hlds__check_typeclass__check_typeclass_constraints_on_pred_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word PredId_6,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27);

static MR_Box MR_CALL 
check_hlds__check_typeclass__maybe_report_badly_quantified_vars_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__check_typeclass__maybe_report_badly_quantified_vars_5_p_0(
  MR_Word PredInfo_6,
  MR_Word QuantErrorType_7,
  MR_Word TVars_8,
  MR_Word STATE_VARIABLE_Specs_0_13,
  MR_Word * STATE_VARIABLE_Specs_14);

static MR_Word MR_CALL 
check_hlds__check_typeclass__report_bad_class_ids_in_pred_decl_4_f_0(
  MR_Word ModuleInfo_6,
  MR_Word PredInfo_7,
  MR_Word HeadBadClassId_8,
  MR_Word TailBadClassIds_9);

static MR_Box MR_CALL 
check_hlds__check_typeclass__report_bad_class_ids_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
check_hlds__check_typeclass__report_bad_class_ids_2_f_0(
  MR_Word HeadClassId_4,
  MR_Word TailClassIds_5);

static void MR_CALL 
check_hlds__check_typeclass__find_bad_class_ids_in_constraints_4_p_0(
  MR_Word ClassTable_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_BadClassIds_0_3,
  MR_Word * STATE_VARIABLE_BadClassIds_4);

static void MR_CALL 
check_hlds__check_typeclass__check_pred_type_ambiguities_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__check_typeclass__check_pred_type_ambiguities_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word PredInfo_6,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20);

static MR_Box MR_CALL 
check_hlds__check_typeclass__report_unbound_tvars_in_pred_context_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
check_hlds__check_typeclass__report_unbound_tvars_in_pred_context_2_f_0(
  MR_Word Vars_4,
  MR_Word PredInfo_5);

static MR_Word MR_CALL 
check_hlds__check_typeclass__report_unbound_tvars_explanation_0_f_0(void);

static void MR_CALL 
check_hlds__check_typeclass__check_consistency_pair_2_7_p_0(
  MR_Word ClassId_8,
  MR_Word ClassDefn_9,
  MR_Word InstanceA_10,
  MR_Word InstanceB_11,
  MR_Word FunDep_12,
  MR_Word STATE_VARIABLE_Specs_0_31,
  MR_Word * STATE_VARIABLE_Specs_32);

static MR_Word MR_CALL 
check_hlds__check_typeclass__report_consistency_error_5_f_0(
  MR_Word ClassId_7,
  MR_Word ClassDefn_8,
  MR_Word InstanceA_9,
  MR_Word InstanceB_10,
  MR_Word FunDep_11);

static void MR_CALL 
check_hlds__check_typeclass__check_consistency_pair_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__check_typeclass__check_consistency_pair_7_p_0(
  MR_Word ClassId_8,
  MR_Word ClassDefn_9,
  MR_Word FunDeps_10,
  MR_Word InstanceA_11,
  MR_Word InstanceB_12,
  MR_Word STATE_VARIABLE_Specs_0_14,
  MR_Word * STATE_VARIABLE_Specs_15);

static void MR_CALL 
check_hlds__check_typeclass__check_coverage_for_instance_defn_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__check_typeclass__check_coverage_for_instance_defn_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word ClassId_8,
  MR_Word InstanceDefn_9,
  MR_Word FunDep_10,
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26);

static void MR_CALL 
check_hlds__check_typeclass__fundeps_closure_loop_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_Box MR_CALL 
check_hlds__check_typeclass__fundeps_closure_loop_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__check_typeclass__fundeps_closure_loop_4_p_0(
  MR_Word FunDeps0_5,
  MR_Word NewVars0_6,
  MR_Word Result0_7,
  MR_Word * Result_8);

static MR_Box MR_CALL 
check_hlds__check_typeclass__report_coverage_error_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
check_hlds__check_typeclass__report_coverage_error_3_f_0(
  MR_Word ClassId_5,
  MR_Word InstanceDefn_6,
  MR_Word Vars_7);

static MR_bool MR_CALL 
check_hlds__check_typeclass__is_concrete_or_imported_instance_defn_1_p_0(
  MR_Word InstanceDefn_2);

static MR_bool MR_CALL 
check_hlds__check_typeclass__is_concrete_instance_defn_1_p_0(
  MR_Word InstanceDefn_2);

static MR_bool MR_CALL 
check_hlds__check_typeclass__check_fundeps_for_class_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
check_hlds__check_typeclass__check_fundeps_for_class_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__check_typeclass__check_fundeps_for_class_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word ClassId_6,
  MR_Word STATE_VARIABLE_Specs_0_16,
  MR_Word * STATE_VARIABLE_Specs_17);

static void MR_CALL 
check_hlds__check_typeclass__check_consistency_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__check_typeclass__check_consistency_6_p_0(
  MR_Word ClassId_1,
  MR_Word ClassDefn_2,
  MR_Word HeadVar__3_3,
  MR_Word FunDeps_4,
  MR_Word STATE_VARIABLE_Specs_0_5,
  MR_Word * STATE_VARIABLE_Specs_6);

static void MR_CALL 
check_hlds__check_typeclass__check_coverage_for_instance_defns_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__check_typeclass__check_coverage_for_instance_defns_6_p_0(
  MR_Word ModuleInfo_1,
  MR_Word ClassId_2,
  MR_Word HeadVar__3_3,
  MR_Word FunDeps_4,
  MR_Word STATE_VARIABLE_Specs_0_5,
  MR_Word * STATE_VARIABLE_Specs_6);

static void MR_CALL 
check_hlds__check_typeclass__add_path_element_3_p_0(
  MR_Word ClassId_4,
  MR_Word STATE_VARIABLE_LaterLines_0_7,
  MR_Word * STATE_VARIABLE_LaterLines_8);

static void MR_CALL 
check_hlds__check_typeclass__report_cyclic_classes_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Word MR_CALL 
check_hlds__check_typeclass__report_cyclic_classes_2_f_0(
  MR_Word ClassTable_4,
  MR_Word ClassPath_5);

static void MR_CALL 
check_hlds__check_typeclass__find_cycles_3_10_p_0(
  MR_Word Path_11,
  MR_Word Constraint_12,
  MR_Word STATE_VARIABLE_ClassTable_0_25,
  MR_Word * STATE_VARIABLE_ClassTable_26,
  MR_Word STATE_VARIABLE_Visited_0_27,
  MR_Word * STATE_VARIABLE_Visited_28,
  MR_Word STATE_VARIABLE_Cycles_0_29,
  MR_Word * STATE_VARIABLE_Cycles_30,
  MR_Word STATE_VARIABLE_Ancestors_0_31,
  MR_Word * STATE_VARIABLE_Ancestors_32);

static void MR_CALL 
check_hlds__check_typeclass__find_cycles_8_p_0(
  MR_Word Path_9,
  MR_Word ClassId_10,
  MR_Word STATE_VARIABLE_ClassTable_0_16,
  MR_Word * STATE_VARIABLE_ClassTable_17,
  MR_Word STATE_VARIABLE_Visited_0_18,
  MR_Word * STATE_VARIABLE_Visited_19,
  MR_Word STATE_VARIABLE_Cycles_0_20,
  MR_Word * STATE_VARIABLE_Cycles_21);

static void MR_CALL 
check_hlds__check_typeclass__find_cycles_2_10_p_0_1(
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
check_hlds__check_typeclass__find_cycles_2_10_p_0(
  MR_Word Path_11,
  MR_Word ClassId_12,
  MR_Word * Params_13,
  MR_Word * Ancestors_14,
  MR_Word STATE_VARIABLE_ClassTable_0_30,
  MR_Word * STATE_VARIABLE_ClassTable_31,
  MR_Word STATE_VARIABLE_Visited_0_32,
  MR_Word * STATE_VARIABLE_Visited_33,
  MR_Word STATE_VARIABLE_Cycles_0_34,
  MR_Word * STATE_VARIABLE_Cycles_35);

static MR_bool MR_CALL 
check_hlds__check_typeclass__find_cycle_4_p_0(
  MR_Word ClassId_5,
  MR_Word HeadVar__2_2,
  MR_Word Path0_8,
  MR_Word * Cycle_9);

static void MR_CALL 
check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0(
  MR_Word Concretes_6,
  MR_Word ClassId_7,
  MR_Word AbstractInstance_8,
  MR_Word STATE_VARIABLE_Specs_0_23,
  MR_Word * STATE_VARIABLE_Specs_24);

static void MR_CALL 
check_hlds__check_typeclass__check_for_corresponding_instances_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__check_typeclass__check_for_corresponding_instances_5_p_0(
  MR_Word Concretes_6,
  MR_Word ClassId_7,
  MR_Word InstanceDefns_8,
  MR_Word STATE_VARIABLE_Specs_0_10,
  MR_Word * STATE_VARIABLE_Specs_11);

static void MR_CALL 
check_hlds__check_typeclass__partition_instances_for_class_2_6_p_0(
  MR_Word ClassId_7,
  MR_Word InstanceDefn_8,
  MR_Word STATE_VARIABLE_Abstracts_0_15,
  MR_Word * STATE_VARIABLE_Abstracts_16,
  MR_Word STATE_VARIABLE_Concretes_0_17,
  MR_Word * STATE_VARIABLE_Concretes_18);

static void MR_CALL 
check_hlds__check_typeclass__partition_instances_for_class_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
check_hlds__check_typeclass__partition_instances_for_class_6_p_0(
  MR_Word ClassId_7,
  MR_Word Instances_8,
  MR_Word STATE_VARIABLE_Abstracts_0_11,
  MR_Word * STATE_VARIABLE_Abstracts_12,
  MR_Word STATE_VARIABLE_Concretes_0_13,
  MR_Word * STATE_VARIABLE_Concretes_14);

static void MR_CALL 
check_hlds__check_typeclass__check_instance_pred_14_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
check_hlds__check_typeclass__check_instance_pred_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__check_typeclass__check_instance_pred_14_p_0(
  MR_Word ClassId_15,
  MR_Word ClassVars_16,
  MR_Word ClassInterface_17,
  MR_Word PredId_18,
  MR_Word InstanceDefn0_19,
  MR_Word * InstanceDefn_20,
  MR_Word STATE_VARIABLE_RevOrderedMethods_0_68,
  MR_Word * STATE_VARIABLE_RevOrderedMethods_69,
  MR_Word STATE_VARIABLE_ModuleInfo_0_70,
  MR_Word * STATE_VARIABLE_ModuleInfo_71,
  MR_Word STATE_VARIABLE_QualInfo_0_72,
  MR_Word * STATE_VARIABLE_QualInfo_73,
  MR_Word STATE_VARIABLE_Specs_0_74,
  MR_Word * STATE_VARIABLE_Specs_75);

static void MR_CALL 
check_hlds__check_typeclass__make_introduced_pred_name_5_p_0(
  MR_Word ClassId_6,
  MR_Word MethodName_7,
  MR_Integer Arity_8,
  MR_Word InstanceTypes_9,
  MR_Word * PredName_10);

static void MR_CALL 
check_hlds__check_typeclass__check_instance_pred_procs_15_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__check_typeclass__check_instance_pred_procs_15_p_0(
  MR_Word ClassId_16,
  MR_Word ClassVars_17,
  MR_Word MethodName_18,
  MR_Word Markers_19,
  MR_Word CheckInfo_20,
  MR_Word InstanceDefn0_21,
  MR_Word * InstanceDefn_22,
  MR_Word STATE_VARIABLE_RevInstanceMethods_0_57,
  MR_Word * STATE_VARIABLE_RevInstanceMethods_58,
  MR_Word STATE_VARIABLE_ModuleInfo_0_59,
  MR_Word * STATE_VARIABLE_ModuleInfo_60,
  MR_Word STATE_VARIABLE_QualInfo_0_61,
  MR_Word * STATE_VARIABLE_QualInfo_62,
  MR_Word STATE_VARIABLE_Specs_0_63,
  MR_Word * STATE_VARIABLE_Specs_64);

static void MR_CALL 
check_hlds__check_typeclass__report_undefined_method_7_p_0(
  MR_Word ClassId_8,
  MR_Word InstanceDefn_9,
  MR_Word PredOrFunc_10,
  MR_Word MethodName_11,
  MR_Integer Arity_12,
  MR_Word STATE_VARIABLE_Specs_0_23,
  MR_Word * STATE_VARIABLE_Specs_24);

static void MR_CALL 
check_hlds__check_typeclass__report_duplicate_method_defn_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__check_typeclass__report_duplicate_method_defn_8_p_0(
  MR_Word ClassId_9,
  MR_Word InstanceDefn_10,
  MR_Word PredOrFunc_11,
  MR_Word MethodName_12,
  MR_Integer Arity_13,
  MR_Word MatchingInstanceMethods_14,
  MR_Word STATE_VARIABLE_Specs_0_37,
  MR_Word * STATE_VARIABLE_Specs_38);

static void MR_CALL 
check_hlds__check_typeclass__produce_auxiliary_procs_19_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
check_hlds__check_typeclass__produce_auxiliary_procs_19_p_0(
  MR_Word ClassId_20,
  MR_Word ClassVars_21,
  MR_Word MethodName_22,
  MR_Word Markers0_23,
  MR_Word InstanceTypes0_24,
  MR_Word InstanceConstraints0_25,
  MR_Word InstanceVarSet_26,
  MR_Word InstanceModuleName_27,
  MR_Word InstancePredDefn_28,
  MR_Word Context_29,
  MR_Word * PredId_30,
  MR_Word * InstanceProcIds_31,
  MR_Word CheckInfo0_32,
  MR_Word STATE_VARIABLE_ModuleInfo_0_104,
  MR_Word * STATE_VARIABLE_ModuleInfo_105,
  MR_Word STATE_VARIABLE_QualInfo_0_106,
  MR_Word * STATE_VARIABLE_QualInfo_107,
  MR_Word STATE_VARIABLE_Specs_0_108,
  MR_Word * STATE_VARIABLE_Specs_109);

static MR_bool MR_CALL 
check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_5(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__check_typeclass__get_matching_instance_defns_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word PredOrFunc_2,
  MR_Word MethodName_3,
  MR_Integer MethodArity_4,
  MR_Word * HeadVar__5_5);

static void MR_CALL 
check_hlds__check_typeclass__method_is_known_3_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__check_typeclass__method_is_known_3_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__check_typeclass__method_is_known_3_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__check_typeclass__method_is_known_3_p_0_4(
  void * env_ptr_arg);

static MR_bool MR_CALL 
check_hlds__check_typeclass__method_is_known_3_p_0(
  MR_Word PredTable_4,
  MR_Word ClassPredIds_5,
  MR_Word Method_6);

static void MR_CALL 
check_hlds__check_typeclass__check_class_instance_15_p_0(
  MR_Word ClassId_16,
  MR_Word SuperClasses_17,
  MR_Word Vars_18,
  MR_Word HLDSClassInterface_19,
  MR_Word ClassInterface_20,
  MR_Word ClassVarSet_21,
  MR_Word ClassPredIds_22,
  MR_Word STATE_VARIABLE_InstanceDefn_0_38,
  MR_Word * STATE_VARIABLE_InstanceDefn_39,
  MR_Word STATE_VARIABLE_ModuleInfo_0_40,
  MR_Word * STATE_VARIABLE_ModuleInfo_41,
  MR_Word STATE_VARIABLE_QualInfo_0_42,
  MR_Word * STATE_VARIABLE_QualInfo_43,
  MR_Word STATE_VARIABLE_Specs_0_44,
  MR_Word * STATE_VARIABLE_Specs_45);

static void MR_CALL 
check_hlds__check_typeclass__check_superclass_conformance_9_p_0(
  MR_Word ClassId_10,
  MR_Word ProgSuperClasses0_11,
  MR_Word ClassVars0_12,
  MR_Word ClassVarSet_13,
  MR_Word ModuleInfo_14,
  MR_Word InstanceDefn0_15,
  MR_Word * InstanceDefn_16,
  MR_Word STATE_VARIABLE_Specs_0_54,
  MR_Word * STATE_VARIABLE_Specs_55);

static void MR_CALL 
check_hlds__check_typeclass__constraint_list_to_comma_strings_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
check_hlds__check_typeclass__check_concrete_class_instance_15_p_0_1(
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
  MR_Box * wrapper_arg_11);

static void MR_CALL 
check_hlds__check_typeclass__check_concrete_class_instance_15_p_0(
  MR_Word ClassId_16,
  MR_Word Vars_17,
  MR_Word HLDSClassInterface_18,
  MR_Word ClassInterface_19,
  MR_Word ClassPredIds_20,
  MR_Word TermContext_21,
  MR_Word InstanceMethods_22,
  MR_Word STATE_VARIABLE_InstanceDefn_0_36,
  MR_Word * STATE_VARIABLE_InstanceDefn_37,
  MR_Word STATE_VARIABLE_ModuleInfo_0_38,
  MR_Word * STATE_VARIABLE_ModuleInfo_39,
  MR_Word STATE_VARIABLE_QualInfo_0_40,
  MR_Word * STATE_VARIABLE_QualInfo_41,
  MR_Word STATE_VARIABLE_Specs_0_42,
  MR_Word * STATE_VARIABLE_Specs_43);

static MR_bool MR_CALL 
check_hlds__check_typeclass__check_for_unknown_methods_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__check_typeclass__check_for_unknown_methods_7_p_0(
  MR_Word InstanceMethods_8,
  MR_Word ClassId_9,
  MR_Word ClassPredIds_10,
  MR_Word Context_11,
  MR_Word ModuleInfo_12,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20);

static void MR_CALL 
check_hlds__check_typeclass__format_method_names_3_p_0(
  MR_Word HeadMethod_4,
  MR_Word TailMethods_5,
  MR_Word * Pieces_6);

static void MR_CALL 
check_hlds__check_typeclass__check_one_class_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static MR_Box MR_CALL 
check_hlds__check_typeclass__check_one_class_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__check_typeclass__check_one_class_10_p_0(
  MR_Word ClassTable_11,
  MR_Word ClassId_12,
  MR_Word InstanceDefns0_13,
  MR_Word * InstanceDefns_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_34,
  MR_Word * STATE_VARIABLE_ModuleInfo_35,
  MR_Word STATE_VARIABLE_QualInfo_0_36,
  MR_Word * STATE_VARIABLE_QualInfo_37,
  MR_Word STATE_VARIABLE_Specs_0_38,
  MR_Word * STATE_VARIABLE_Specs_39);

static MR_Word MR_CALL 
check_hlds__check_typeclass__non_tvar_arg_to_pieces_2_f_0(
  MR_Word TVarSet_4,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__check_typeclass__is_valid_instance_type_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word ClassId_10,
  MR_Word InstanceDefn_11,
  MR_Word Type_12,
  MR_Integer N_13,
  MR_Integer * HeadVar__6_6,
  MR_Word STATE_VARIABLE_Specs_0_51,
  MR_Word * STATE_VARIABLE_Specs_52);

static MR_Box MR_CALL 
check_hlds__check_typeclass__badly_formed_instance_type_msg_5_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
check_hlds__check_typeclass__badly_formed_instance_type_msg_5_f_0(
  MR_Word ClassId_7,
  MR_Word InstanceDefn_8,
  MR_Integer N_9,
  MR_Word TypeCtor_10,
  MR_Word NonTVarArgs_11);

static void MR_CALL 
check_hlds__check_typeclass__find_non_type_variables_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer ArgNum_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
check_hlds__check_typeclass__is_valid_instance_orig_type_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word ClassId_10,
  MR_Word InstanceDefn_11,
  MR_Word Type_12,
  MR_Integer N_13,
  MR_Integer * HeadVar__6_6,
  MR_Word STATE_VARIABLE_Specs_0_43,
  MR_Word * STATE_VARIABLE_Specs_44);

static MR_Word MR_CALL 
check_hlds__check_typeclass__bad_instance_type_msg_4_f_0(
  MR_Word ClassId_6,
  MR_Word InstanceDefn_7,
  MR_Word EndPieces_8,
  MR_Word Kind_9);

static void MR_CALL 
check_hlds__check_typeclass__check_instance_declaration_types_for_instance_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
check_hlds__check_typeclass__check_instance_declaration_types_for_instance_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
check_hlds__check_typeclass__check_instance_declaration_types_for_instance_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word ClassId_7,
  MR_Word InstanceDefn_8,
  MR_Word STATE_VARIABLE_Specs_0_14,
  MR_Word * STATE_VARIABLE_Specs_15);

static void MR_CALL 
check_hlds__check_typeclass__check_instance_declaration_types_for_class_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__check_typeclass__check_instance_declaration_types_for_class_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word ClassId_7,
  MR_Word InstanceDefns_8,
  MR_Word STATE_VARIABLE_Specs_0_10,
  MR_Word * STATE_VARIABLE_Specs_11);

static void MR_CALL 
check_hlds__check_typeclass__check_typeclasses_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__check_typeclass__check_typeclasses_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
check_hlds__check_typeclass__check_typeclass_constraints_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__check_typeclass__check_typeclass_constraints_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__check_typeclass__check_typeclass_constraints_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word STATE_VARIABLE_Specs_0_9,
  MR_Word * STATE_VARIABLE_Specs_10);

static MR_Box MR_CALL 
check_hlds__check_typeclass__check_for_cyclic_classes_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__check_typeclass__check_for_cyclic_classes_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
check_hlds__check_typeclass__check_for_cyclic_classes_4_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_12,
  MR_Word * STATE_VARIABLE_ModuleInfo_13,
  MR_Word STATE_VARIABLE_Specs_0_14,
  MR_Word * STATE_VARIABLE_Specs_15);

static void MR_CALL 
check_hlds__check_typeclass__check_for_missing_concrete_instances_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
check_hlds__check_typeclass__check_for_missing_concrete_instances_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
check_hlds__check_typeclass__check_for_missing_concrete_instances_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word STATE_VARIABLE_Specs_0_9,
  MR_Word * STATE_VARIABLE_Specs_10);

static void MR_CALL 
check_hlds__check_typeclass__check_instance_decls_6_p_0_1(
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
check_hlds__check_typeclass__check_instance_decls_6_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_16,
  MR_Word * STATE_VARIABLE_ModuleInfo_17,
  MR_Word STATE_VARIABLE_QualInfo_0_18,
  MR_Word * STATE_VARIABLE_QualInfo_19,
  MR_Word STATE_VARIABLE_Specs_0_20,
  MR_Word * STATE_VARIABLE_Specs_21);

static MR_bool MR_CALL 
check_hlds__check_typeclass____Unify____bad_instance_type_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__check_typeclass____Compare____bad_instance_type_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__check_typeclass____Unify____check_instance_method_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__check_typeclass____Compare____check_instance_method_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__check_typeclass____Unify____class_path_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__check_typeclass____Compare____class_path_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__check_typeclass____Unify____induced_fundep_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__check_typeclass____Compare____induced_fundep_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__check_typeclass____Unify____induced_fundeps_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__check_typeclass____Compare____induced_fundeps_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__check_typeclass____Unify____modes_and_detism_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__check_typeclass____Compare____modes_and_detism_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__check_typeclass____Unify____quant_error_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__check_typeclass____Compare____quant_error_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__check_typeclass_scalar_common_1[166][2];

static /* final */ const MR_Box check_hlds__check_typeclass_scalar_common_2[13][3];

static /* final */ const MR_Box check_hlds__check_typeclass_scalar_common_3[4][1];

static /* final */ const MR_Box check_hlds__check_typeclass_scalar_common_4[2][13];

static /* final */ const MR_Box check_hlds__check_typeclass_scalar_common_5[5][9];

static /* final */ const MR_Box check_hlds__check_typeclass_scalar_common_6[6][8];

static /* final */ const MR_Box check_hlds__check_typeclass_scalar_common_7[2][11];

static /* final */ const MR_Box check_hlds__check_typeclass_scalar_common_8[2][4];

static /* final */ const MR_Box check_hlds__check_typeclass_scalar_common_9[9][6];

static /* final */ const MR_Box check_hlds__check_typeclass_scalar_common_10[7][7];

static /* final */ const MR_Box check_hlds__check_typeclass_scalar_common_11[6][5];

static /* final */ const MR_Box check_hlds__check_typeclass_scalar_common_12[1][18];

static /* final */ const MR_Box check_hlds__check_typeclass_scalar_common_13[1][17];

static /* final */ const MR_Box check_hlds__check_typeclass_scalar_common_14[2][10];




static /* final */ const MR_Box check_hlds__check_typeclass_scalar_common_1[166][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__check_typeclass_scalar_common_1[8]))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
  /* row 11 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0))
  },
  /* row 12 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__check_typeclass_scalar_common_1[5]))
  },
  /* row 13 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__check_typeclass__check_hlds__check_typeclass__type_ctor_info_induced_fundep_0))
  },
  /* row 14 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&check_hlds__check_typeclass_scalar_common_1[5]))
  },
  /* row 15 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 16 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__check_typeclass__check_hlds__check_typeclass__type_ctor_info_modes_and_detism_0))
  },
  /* row 17 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 18 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
  /* row 19 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 20 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is an apply/N type;"))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the"))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "instance type"))
  },
  /* row 24 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "type variables."))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[24])))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "a type constructor applied to zero or more"))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[26])))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "it should be"))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[28])))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is a higher order type;"))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is a type variable;"))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in the"))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "instance type,"))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "of the arguments of the type constructor"))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[36]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[24])))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "argument,"))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is an abstract exported equivalence type."))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[24])))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In instance declaration for"))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[42]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[24])))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "as arguments.)"))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[44]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[24])))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "a type constructor applied to zero or more type variables"))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[46]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[45])))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "(Every type in an instance declaration must consist of"))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[48]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[47])))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: no definition for typeclass"))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: instance declaration for abstract typeclass"))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the following superclass"))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "not satisfied:"))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: abstract instance declaration"))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "for"))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "instance in the implementation."))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[56]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[24])))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "has no corresponding concrete"))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[58]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[57])))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: cyclic superclass relation detected:"))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "<="))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In instance for typeclass"))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "functional dependency not satisfied:"))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in the range of the functional dependency, but"))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "not determined by the domain."))
  },
  /* row 66 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[65]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[24])))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Inconsistent instance declaration for typeclass"))
  },
  /* row 68 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "with functional dependency"))
  },
  /* row 69 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Here is the conflicting instance."))
  },
  /* row 70 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[69]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[24])))
  },
  /* row 71 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In declaration for"))
  },
  /* row 72 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error in type class constraints:"))
  },
  /* row 73 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in the constraints, but"))
  },
  /* row 74 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "not determined by the"))
  },
  /* row 75 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[74]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 76 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "function\'s argument or result types."))
  },
  /* row 77 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[76]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[24])))
  },
  /* row 78 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "predicate\'s argument types."))
  },
  /* row 79 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[78]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[24])))
  },
  /* row 80 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In declaration for type"))
  },
  /* row 81 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "not determined by the constructor\'s argument types."))
  },
  /* row 82 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[81]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[24])))
  },
  /* row 83 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "of the reference manual for details."))
  },
  /* row 84 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[83]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[24])))
  },
  /* row 85 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "See the \"Functional dependencies\" section"))
  },
  /* row 86 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[85]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[84])))
  },
  /* row 87 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[86])))
  },
  /* row 88 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is fully determined."))
  },
  /* row 89 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[88]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[87])))
  },
  /* row 90 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "2) The type variable occurs in a type which"))
  },
  /* row 91 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[90]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[89])))
  },
  /* row 92 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[91])))
  },
  /* row 93 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "constructor which is constrained."))
  },
  /* row 94 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[93]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[92])))
  },
  /* row 95 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "types of the predicate, function, or"))
  },
  /* row 96 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[95]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[94])))
  },
  /* row 97 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "1) The type variable occurs in the argument"))
  },
  /* row 98 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[97]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[96])))
  },
  /* row 99 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[98])))
  },
  /* row 100 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "following holds:"))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[100]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[99])))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "A type variable is determined if one of the"))
  },
  /* row 103 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[102]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[101])))
  },
  /* row 104 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[103])))
  },
  /* row 105 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "determined."))
  },
  /* row 106 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[105]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[104])))
  },
  /* row 107 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "that functional dependency are fully"))
  },
  /* row 108 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[107]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[106])))
  },
  /* row 109 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the types in all of the domain arguments for"))
  },
  /* row 110 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[109]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[108])))
  },
  /* row 111 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "functional dependency for that class, and"))
  },
  /* row 112 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[111]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[110])))
  },
  /* row 113 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "that argument is in the range of some"))
  },
  /* row 114 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[113]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[112])))
  },
  /* row 115 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "2) The type occurs in a constraint argument,"))
  },
  /* row 116 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[115]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[114])))
  },
  /* row 117 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[116])))
  },
  /* row 118 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "are determined."))
  },
  /* row 119 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[118]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[117])))
  },
  /* row 120 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "1) All type variables occurring in the type"))
  },
  /* row 121 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[120]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[119])))
  },
  /* row 122 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[121])))
  },
  /* row 123 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[100]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[122])))
  },
  /* row 124 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "A type is fully determined if one of the"))
  },
  /* row 125 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[124]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[123])))
  },
  /* row 126 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "must be fully determined."))
  },
  /* row 127 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[126]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[125])))
  },
  /* row 128 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "All types occurring in typeclass constraints"))
  },
  /* row 129 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[128]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[127])))
  },
  /* row 130 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error: the type class"))
  },
  /* row 131 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "does not exist."))
  },
  /* row 132 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[131]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[24])))
  },
  /* row 133 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error: the type classes"))
  },
  /* row 134 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[133]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 135 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "do not exist."))
  },
  /* row 136 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[135]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[24])))
  },
  /* row 137 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In declaration of"))
  },
  /* row 138 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[137]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 139 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "type variable"))
  },
  /* row 140 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "existentially constrained"))
  },
  /* row 141 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "universally quantified"))
  },
  /* row 142 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "universally constrained"))
  },
  /* row 143 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "existentially quantified"))
  },
  /* row 144 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 145 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "but"))
  },
  /* row 146 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "multiple implementations of type class"))
  },
  /* row 147 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "method"))
  },
  /* row 148 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "First definition appears here."))
  },
  /* row 149 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[148]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[24])))
  },
  /* row 150 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Subsequent definition appears here."))
  },
  /* row 151 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[150]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[24])))
  },
  /* row 152 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "no implementation for type class"))
  },
  /* row 153 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the type class has no"))
  },
  /* row 154 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "method named"))
  },
  /* row 155 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the type class has none of these methods:"))
  },
  /* row 156 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[155]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[24])))
  },
  /* row 157 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[156])))
  },
  /* row 158 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[42]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[157])))
  },
  /* row 159 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row 160 */
  {
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[49])))
  },
  /* row 161 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__check_typeclass_scalar_common_1[160]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 162 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[30])))
  },
  /* row 163 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[30])))
  },
  /* row 164 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[32]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[30])))
  },
  /* row 165 */
  {
    ((MR_Box) (&check_hlds__check_typeclass_scalar_common_3[3])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box check_hlds__check_typeclass_scalar_common_2[13][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&check_hlds__check_typeclass_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&check_hlds__check_typeclass_scalar_common_5[0])),
    ((MR_Box) (check_hlds__check_typeclass__check_for_missing_concrete_instances_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&check_hlds__check_typeclass_scalar_common_11[0])),
    ((MR_Box) (check_hlds__check_typeclass__check_one_class_10_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&check_hlds__check_typeclass_scalar_common_11[1])),
    ((MR_Box) (check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&check_hlds__check_typeclass_scalar_common_11[2])),
    ((MR_Box) (check_hlds__check_typeclass__report_duplicate_method_defn_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&check_hlds__check_typeclass_scalar_common_9[6])),
    ((MR_Box) (check_hlds__check_typeclass__report_cyclic_classes_2_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&check_hlds__check_typeclass_scalar_common_8[1])),
    ((MR_Box) (check_hlds__check_typeclass__check_fundeps_for_class_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&check_hlds__check_typeclass_scalar_common_8[1])),
    ((MR_Box) (check_hlds__check_typeclass__check_fundeps_for_class_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&check_hlds__check_typeclass_scalar_common_6[4])),
    ((MR_Box) (check_hlds__check_typeclass__fundeps_closure_loop_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&check_hlds__check_typeclass_scalar_common_11[3])),
    ((MR_Box) (check_hlds__check_typeclass__report_bad_class_ids_2_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__check_typeclass_scalar_common_3[4][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "{}"))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 2 */
  {
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[70])))
  },
};

static /* final */ const MR_Box check_hlds__check_typeclass_scalar_common_4[2][13] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&check_hlds__check_typeclass__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_class__type_ctor_info_hlds_class_defn_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0)),
    ((MR_Box) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&check_hlds__check_typeclass__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_class__type_ctor_info_hlds_class_defn_0)),
    ((MR_Box) (&check_hlds__check_typeclass__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_class__type_ctor_info_hlds_class_defn_0)),
    ((MR_Box) (&check_hlds__check_typeclass__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&check_hlds__check_typeclass__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_list__ti_list_1parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_list__ti_list_1parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
};

static /* final */ const MR_Box check_hlds__check_typeclass_scalar_common_5[5][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&check_hlds__check_typeclass__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_list__ti_list_1hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&check_hlds__check_typeclass__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_list__ti_list_1hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&check_hlds__check_typeclass__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_list__ti_list_1hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&check_hlds__check_typeclass__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_list__ti_list_1hlds__hlds_class__type_ctor_info_hlds_instance_defn_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__check_typeclass__check_hlds__check_typeclass__type_ctor_info_modes_and_detism_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&check_hlds__check_typeclass__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_list__ti_list_1hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&check_hlds__check_typeclass__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_list__ti_list_1hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&check_hlds__check_typeclass__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_list__ti_list_1hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&check_hlds__check_typeclass__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_list__ti_list_1hlds__hlds_class__type_ctor_info_hlds_instance_defn_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_fundep_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box check_hlds__check_typeclass_scalar_common_6[6][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&check_hlds__check_typeclass__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_list__ti_list_1hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&check_hlds__check_typeclass__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_list__ti_list_1hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&check_hlds__check_typeclass__check_hlds__check_typeclass__type_ctor_info_induced_fundep_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_check_hlds__check_typeclass__type_ctor_info_induced_fundep_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_check_hlds__check_typeclass__type_ctor_info_induced_fundep_0)),
    ((MR_Box) (&check_hlds__check_typeclass__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__check_typeclass__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&check_hlds__check_typeclass__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_class__type_ctor_info_hlds_class_defn_0)),
    ((MR_Box) (&check_hlds__check_typeclass__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_check_hlds__check_typeclass__type_ctor_info_induced_fundep_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_check_hlds__check_typeclass__type_ctor_info_induced_fundep_0))
  },
};

static /* final */ const MR_Box check_hlds__check_typeclass_scalar_common_7[2][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&check_hlds__check_typeclass__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_class__type_ctor_info_hlds_class_defn_0)),
    ((MR_Box) (&check_hlds__check_typeclass__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_class__type_ctor_info_hlds_class_defn_0)),
    ((MR_Box) (&check_hlds__check_typeclass__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&check_hlds__check_typeclass__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_list__ti_list_1parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_list__ti_list_1parse_tree__prog_data__type_ctor_info_class_id_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box check_hlds__check_typeclass_scalar_common_8[2][4] = {
  /* row 0 */
  {
    ((MR_Box) (&check_hlds__check_typeclass_scalar_common_7[0])),
    ((MR_Box) (check_hlds__check_typeclass__check_for_cyclic_classes_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0))
  },
};

static /* final */ const MR_Box check_hlds__check_typeclass_scalar_common_9[9][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__check_typeclass__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_class__type_ctor_info_hlds_class_defn_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__check_typeclass__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__check_typeclass__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__pred_table__hlds__pred_table__type_ctor_info_predicate_table_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__check_typeclass__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__check_typeclass__check_hlds__check_typeclass__type_ctor_info_modes_and_detism_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&check_hlds__check_typeclass__cord__pti_cord_1__plain_parse_tree__error_util__type_ctor_info_format_component_0)),
    ((MR_Box) (&check_hlds__check_typeclass__cord__pti_cord_1__plain_parse_tree__error_util__type_ctor_info_format_component_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__check_typeclass__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__check_typeclass__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__check_typeclass__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__check_typeclass__check_hlds__check_typeclass__type_ctor_info_induced_fundep_0)),
    ((MR_Box) (&check_hlds__check_typeclass__check_hlds__check_typeclass__type_ctor_info_induced_fundep_0))
  },
};

static /* final */ const MR_Box check_hlds__check_typeclass_scalar_common_10[7][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&check_hlds__check_typeclass__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__check_typeclass__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_class__type_ctor_info_hlds_class_defn_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_check_hlds__check_typeclass__type_ctor_info_induced_fundep_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_check_hlds__check_typeclass__type_ctor_info_induced_fundep_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_fundep_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_check_hlds__check_typeclass__type_ctor_info_induced_fundep_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_check_hlds__check_typeclass__type_ctor_info_induced_fundep_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__check_typeclass__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__check_typeclass__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
};

static /* final */ const MR_Box check_hlds__check_typeclass_scalar_common_11[6][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_clause_info_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__check_typeclass__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
};

static /* final */ const MR_Box check_hlds__check_typeclass_scalar_common_12[1][18] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 15)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_interface_0)),
    ((MR_Box) (&check_hlds__check_typeclass__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0)),
    ((MR_Box) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box check_hlds__check_typeclass_scalar_common_13[1][17] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 14)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_instance_method_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_instance_method_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0)),
    ((MR_Box) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box check_hlds__check_typeclass_scalar_common_14[2][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_hlds__hlds_class__type_ctor_info_hlds_class_fundep_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_fundep_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__check_typeclass__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_class__type_ctor_info_hlds_class_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__check_typeclass__list__pti_list_1__plain_hlds__hlds_class__type_ctor_info_hlds_instance_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__check_typeclass__list__ti_list_1hlds__hlds_class__type_ctor_info_hlds_instance_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__check_typeclass__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_list__ti_list_1hlds__hlds_class__type_ctor_info_hlds_instance_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0),
    (MR_PseudoTypeInfo) (&check_hlds__check_typeclass__list__ti_list_1hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_class_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__check_typeclass__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_class_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__check_typeclass__list__ti_list_1parse_tree__prog_data__type_ctor_info_class_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__check_typeclass__list__pti_list_1__plain_list__ti_list_1parse_tree__prog_data__type_ctor_info_class_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&check_hlds__check_typeclass__list__ti_list_1parse_tree__prog_data__type_ctor_info_class_id_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__check_typeclass__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_data__type_ctor_info_hlds_type_defn_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__check_typeclass__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__check_typeclass__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__check_typeclass__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__check_typeclass__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&check_hlds__check_typeclass__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__check_typeclass__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__check_typeclass__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_instance_method_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_clause_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__check_typeclass__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__check_typeclass__cord__pti_cord_1__plain_parse_tree__error_util__type_ctor_info_format_component_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__check_typeclass__list__pti_list_1__plain_hlds__hlds_class__type_ctor_info_hlds_class_fundep_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_fundep_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__check_typeclass__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__check_typeclass__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&check_hlds__check_typeclass__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__check_typeclass__list__pti_list_1__plain_check_hlds__check_typeclass__type_ctor_info_induced_fundep_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&check_hlds__check_typeclass__check_hlds__check_typeclass__type_ctor_info_induced_fundep_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_EnumFunctorDesc check_hlds__check_typeclass__check_hlds__check_typeclass__enum_functor_desc_bad_instance_type_kind_0_0 = {
  (MR_String) "badly_formed",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__check_typeclass__check_hlds__check_typeclass__enum_functor_desc_bad_instance_type_kind_0_1 = {
  (MR_String) "abstract_exported_eqv",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__check_typeclass__check_hlds__check_typeclass__enum_ordinal_ordered_bad_instance_type_kind_0[2] = {
  &check_hlds__check_typeclass__check_hlds__check_typeclass__enum_functor_desc_bad_instance_type_kind_0_0,
  &check_hlds__check_typeclass__check_hlds__check_typeclass__enum_functor_desc_bad_instance_type_kind_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__check_typeclass__check_hlds__check_typeclass__enum_name_ordered_bad_instance_type_kind_0[2] = {
  &check_hlds__check_typeclass__check_hlds__check_typeclass__enum_functor_desc_bad_instance_type_kind_0_1,
  &check_hlds__check_typeclass__check_hlds__check_typeclass__enum_functor_desc_bad_instance_type_kind_0_0
};

static const MR_Integer check_hlds__check_typeclass__check_hlds__check_typeclass__functor_number_map_bad_instance_type_kind_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__check_typeclass__check_hlds__check_typeclass__type_ctor_info_bad_instance_type_kind_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__check_typeclass____Unify____bad_instance_type_kind_0_0_10001)),
  ((MR_Box) (check_hlds__check_typeclass____Compare____bad_instance_type_kind_0_0_10001)),
  (MR_String) "check_hlds.check_typeclass",
  (MR_String) "bad_instance_type_kind",
  {     check_hlds__check_typeclass__check_hlds__check_typeclass__enum_name_ordered_bad_instance_type_kind_0 },
  {     check_hlds__check_typeclass__check_hlds__check_typeclass__enum_ordinal_ordered_bad_instance_type_kind_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__check_typeclass__check_hlds__check_typeclass__functor_number_map_bad_instance_type_kind_0,

};

static const MR_FA_TypeInfo_Struct1 check_hlds__check_typeclass__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&check_hlds__check_typeclass__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__check_typeclass__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__check_typeclass__list__ti_list_1check_hlds__check_typeclass__type_ctor_info_modes_and_detism_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&check_hlds__check_typeclass__check_hlds__check_typeclass__type_ctor_info_modes_and_detism_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__check_typeclass__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_PseudoTypeInfo check_hlds__check_typeclass__check_hlds__check_typeclass__field_types_check_instance_method_info_0_0[9] = {
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0),
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&check_hlds__check_typeclass__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__check_typeclass__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraints_0),
  (MR_PseudoTypeInfo) (&check_hlds__check_typeclass__list__ti_list_1check_hlds__check_typeclass__type_ctor_info_modes_and_detism_0),
  (MR_PseudoTypeInfo) (&check_hlds__check_typeclass__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
  (MR_PseudoTypeInfo) (&hlds__status__hlds__status__type_ctor_info_instance_status_0)
};

static const MR_ConstString check_hlds__check_typeclass__check_hlds__check_typeclass__field_names_check_instance_method_info_0_0[9] = {
  (MR_String) "cimi_method_pred_or_func",
  (MR_String) "cimi_introduced_pred_name",
  (MR_String) "cimi_method_arity",
  (MR_String) "cimi_existq_tvars",
  (MR_String) "cimi_expected_arg_types",
  (MR_String) "cimi_method_constraints",
  (MR_String) "cimi_modes_and_detism",
  (MR_String) "cimi_tvarset",
  (MR_String) "cimi_import_status"
};

static const MR_DuArgLocn check_hlds__check_typeclass__check_hlds__check_typeclass__field_locns_check_instance_method_info_0_0[9] = {
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
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 5,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 6,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 8,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc check_hlds__check_typeclass__check_hlds__check_typeclass__du_functor_desc_check_instance_method_info_0_0 = {
  (MR_String) "check_instance_method_info",
  INT16_C(9),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__check_typeclass__check_hlds__check_typeclass__field_types_check_instance_method_info_0_0,
  check_hlds__check_typeclass__check_hlds__check_typeclass__field_names_check_instance_method_info_0_0,
  check_hlds__check_typeclass__check_hlds__check_typeclass__field_locns_check_instance_method_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__check_typeclass__check_hlds__check_typeclass__du_stag_ordered_check_instance_method_info_0_0[1] = {
  &check_hlds__check_typeclass__check_hlds__check_typeclass__du_functor_desc_check_instance_method_info_0_0
};

static const MR_DuPtagLayout check_hlds__check_typeclass__check_hlds__check_typeclass__du_ptag_ordered_check_instance_method_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__check_typeclass__check_hlds__check_typeclass__du_stag_ordered_check_instance_method_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__check_typeclass__check_hlds__check_typeclass__du_name_ordered_check_instance_method_info_0[1] = {
  &check_hlds__check_typeclass__check_hlds__check_typeclass__du_functor_desc_check_instance_method_info_0_0
};

static const MR_Integer check_hlds__check_typeclass__check_hlds__check_typeclass__functor_number_map_check_instance_method_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__check_typeclass__check_hlds__check_typeclass__type_ctor_info_check_instance_method_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__check_typeclass____Unify____check_instance_method_info_0_0_10001)),
  ((MR_Box) (check_hlds__check_typeclass____Compare____check_instance_method_info_0_0_10001)),
  (MR_String) "check_hlds.check_typeclass",
  (MR_String) "check_instance_method_info",
  {     check_hlds__check_typeclass__check_hlds__check_typeclass__du_name_ordered_check_instance_method_info_0 },
  {     check_hlds__check_typeclass__check_hlds__check_typeclass__du_ptag_ordered_check_instance_method_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__check_typeclass__check_hlds__check_typeclass__functor_number_map_check_instance_method_info_0,

};

const MR_TypeCtorInfo_Struct check_hlds__check_typeclass__check_hlds__check_typeclass__type_ctor_info_class_path_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__check_typeclass____Unify____class_path_0_0_10001)),
  ((MR_Box) (check_hlds__check_typeclass____Compare____class_path_0_0_10001)),
  (MR_String) "check_hlds.check_typeclass",
  (MR_String) "class_path",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&check_hlds__check_typeclass__list__ti_list_1parse_tree__prog_data__type_ctor_info_class_id_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 check_hlds__check_typeclass__set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) (&check_hlds__check_typeclass__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_PseudoTypeInfo check_hlds__check_typeclass__check_hlds__check_typeclass__field_types_induced_fundep_0_0[2] = {
  (MR_PseudoTypeInfo) (&check_hlds__check_typeclass__set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__check_typeclass__set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)
};

static const MR_ConstString check_hlds__check_typeclass__check_hlds__check_typeclass__field_names_induced_fundep_0_0[2] = {
  (MR_String) "domain",
  (MR_String) "range"
};

static const MR_DuFunctorDesc check_hlds__check_typeclass__check_hlds__check_typeclass__du_functor_desc_induced_fundep_0_0 = {
  (MR_String) "fundep",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__check_typeclass__check_hlds__check_typeclass__field_types_induced_fundep_0_0,
  check_hlds__check_typeclass__check_hlds__check_typeclass__field_names_induced_fundep_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__check_typeclass__check_hlds__check_typeclass__du_stag_ordered_induced_fundep_0_0[1] = {
  &check_hlds__check_typeclass__check_hlds__check_typeclass__du_functor_desc_induced_fundep_0_0
};

static const MR_DuPtagLayout check_hlds__check_typeclass__check_hlds__check_typeclass__du_ptag_ordered_induced_fundep_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__check_typeclass__check_hlds__check_typeclass__du_stag_ordered_induced_fundep_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__check_typeclass__check_hlds__check_typeclass__du_name_ordered_induced_fundep_0[1] = {
  &check_hlds__check_typeclass__check_hlds__check_typeclass__du_functor_desc_induced_fundep_0_0
};

static const MR_Integer check_hlds__check_typeclass__check_hlds__check_typeclass__functor_number_map_induced_fundep_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__check_typeclass__check_hlds__check_typeclass__type_ctor_info_induced_fundep_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__check_typeclass____Unify____induced_fundep_0_0_10001)),
  ((MR_Box) (check_hlds__check_typeclass____Compare____induced_fundep_0_0_10001)),
  (MR_String) "check_hlds.check_typeclass",
  (MR_String) "induced_fundep",
  {     check_hlds__check_typeclass__check_hlds__check_typeclass__du_name_ordered_induced_fundep_0 },
  {     check_hlds__check_typeclass__check_hlds__check_typeclass__du_ptag_ordered_induced_fundep_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__check_typeclass__check_hlds__check_typeclass__functor_number_map_induced_fundep_0,

};

static const MR_FA_TypeInfo_Struct1 check_hlds__check_typeclass__list__ti_list_1check_hlds__check_typeclass__type_ctor_info_induced_fundep_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&check_hlds__check_typeclass__check_hlds__check_typeclass__type_ctor_info_induced_fundep_0)
  }
};

const MR_TypeCtorInfo_Struct check_hlds__check_typeclass__check_hlds__check_typeclass__type_ctor_info_induced_fundeps_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__check_typeclass____Unify____induced_fundeps_0_0_10001)),
  ((MR_Box) (check_hlds__check_typeclass____Compare____induced_fundeps_0_0_10001)),
  (MR_String) "check_hlds.check_typeclass",
  (MR_String) "induced_fundeps",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&check_hlds__check_typeclass__list__ti_list_1check_hlds__check_typeclass__type_ctor_info_induced_fundep_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 check_hlds__check_typeclass__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__check_typeclass__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__check_typeclass__maybe__ti_maybe_1parse_tree__prog_data__type_ctor_info_determinism_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0)
  }
};

static const MR_PseudoTypeInfo check_hlds__check_typeclass__check_hlds__check_typeclass__field_types_modes_and_detism_0_0[3] = {
  (MR_PseudoTypeInfo) (&check_hlds__check_typeclass__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0),
  (MR_PseudoTypeInfo) (&check_hlds__check_typeclass__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__check_typeclass__maybe__ti_maybe_1parse_tree__prog_data__type_ctor_info_determinism_0)
};

static const MR_DuFunctorDesc check_hlds__check_typeclass__check_hlds__check_typeclass__du_functor_desc_modes_and_detism_0_0 = {
  (MR_String) "modes_and_detism",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__check_typeclass__check_hlds__check_typeclass__field_types_modes_and_detism_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__check_typeclass__check_hlds__check_typeclass__du_stag_ordered_modes_and_detism_0_0[1] = {
  &check_hlds__check_typeclass__check_hlds__check_typeclass__du_functor_desc_modes_and_detism_0_0
};

static const MR_DuPtagLayout check_hlds__check_typeclass__check_hlds__check_typeclass__du_ptag_ordered_modes_and_detism_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__check_typeclass__check_hlds__check_typeclass__du_stag_ordered_modes_and_detism_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__check_typeclass__check_hlds__check_typeclass__du_name_ordered_modes_and_detism_0[1] = {
  &check_hlds__check_typeclass__check_hlds__check_typeclass__du_functor_desc_modes_and_detism_0_0
};

static const MR_Integer check_hlds__check_typeclass__check_hlds__check_typeclass__functor_number_map_modes_and_detism_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__check_typeclass__check_hlds__check_typeclass__type_ctor_info_modes_and_detism_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__check_typeclass____Unify____modes_and_detism_0_0_10001)),
  ((MR_Box) (check_hlds__check_typeclass____Compare____modes_and_detism_0_0_10001)),
  (MR_String) "check_hlds.check_typeclass",
  (MR_String) "modes_and_detism",
  {     check_hlds__check_typeclass__check_hlds__check_typeclass__du_name_ordered_modes_and_detism_0 },
  {     check_hlds__check_typeclass__check_hlds__check_typeclass__du_ptag_ordered_modes_and_detism_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__check_typeclass__check_hlds__check_typeclass__functor_number_map_modes_and_detism_0,

};

static const MR_EnumFunctorDesc check_hlds__check_typeclass__check_hlds__check_typeclass__enum_functor_desc_quant_error_type_0_0 = {
  (MR_String) "universal_constraint",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__check_typeclass__check_hlds__check_typeclass__enum_functor_desc_quant_error_type_0_1 = {
  (MR_String) "existential_constraint",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__check_typeclass__check_hlds__check_typeclass__enum_ordinal_ordered_quant_error_type_0[2] = {
  &check_hlds__check_typeclass__check_hlds__check_typeclass__enum_functor_desc_quant_error_type_0_0,
  &check_hlds__check_typeclass__check_hlds__check_typeclass__enum_functor_desc_quant_error_type_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__check_typeclass__check_hlds__check_typeclass__enum_name_ordered_quant_error_type_0[2] = {
  &check_hlds__check_typeclass__check_hlds__check_typeclass__enum_functor_desc_quant_error_type_0_1,
  &check_hlds__check_typeclass__check_hlds__check_typeclass__enum_functor_desc_quant_error_type_0_0
};

static const MR_Integer check_hlds__check_typeclass__check_hlds__check_typeclass__functor_number_map_quant_error_type_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__check_typeclass__check_hlds__check_typeclass__type_ctor_info_quant_error_type_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__check_typeclass____Unify____quant_error_type_0_0_10001)),
  ((MR_Box) (check_hlds__check_typeclass____Compare____quant_error_type_0_0_10001)),
  (MR_String) "check_hlds.check_typeclass",
  (MR_String) "quant_error_type",
  {     check_hlds__check_typeclass__check_hlds__check_typeclass__enum_name_ordered_quant_error_type_0 },
  {     check_hlds__check_typeclass__check_hlds__check_typeclass__enum_ordinal_ordered_quant_error_type_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__check_typeclass__check_hlds__check_typeclass__functor_number_map_quant_error_type_0,

};

static void MR_CALL 
check_hlds__check_typeclass__IntroducedFrom__pred__report_duplicate_method_defn__2296__1_2_p_0(
  MR_Word LambdaHeadVar__1_77,
  MR_Word * LambdaHeadVar__2_78)
{
  {
    MR_Word TheContext_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_77, (MR_Integer) 4))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *LambdaHeadVar__2_78 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (TheContext_33));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[151])));
    }
  }
}

static MR_String MR_CALL 
check_hlds__check_typeclass__IntroducedFrom__func__report_badly_quantified_vars__2113__1_2_f_0(
  MR_Word TVarSet_9,
  MR_Word HeadVar__2_72)
{
  {
    MR_String HeadVar__3_73;

    HeadVar__3_73 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TVarSet_9, HeadVar__2_72);
    return HeadVar__3_73;
  }
}

static MR_Word MR_CALL 
check_hlds__check_typeclass__IntroducedFrom__func__report_bad_class_ids__2046__1_1_f_0(
  MR_Word LambdaHeadVar__1_14)
{
  {
    MR_Word LambdaHeadVar__2_15;

    {
      LambdaHeadVar__2_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), LambdaHeadVar__2_15, 0) = ((MR_Box) ((MR_Unsigned) 22U));
      MR_hl_field(MR_mktag(3), LambdaHeadVar__2_15, 1) = ((MR_Box) (LambdaHeadVar__1_14));
    }
    return LambdaHeadVar__2_15;
  }
}

static MR_String MR_CALL 
check_hlds__check_typeclass__IntroducedFrom__func__report_unbound_tvars_in_ctor_context__1930__1_2_f_0(
  MR_Word TVarSet_10,
  MR_Word HeadVar__2_69)
{
  {
    MR_String HeadVar__3_70;

    HeadVar__3_70 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TVarSet_10, HeadVar__2_69);
    return HeadVar__3_70;
  }
}

static MR_String MR_CALL 
check_hlds__check_typeclass__IntroducedFrom__func__report_unbound_tvars_in_pred_context__1900__1_2_f_0(
  MR_Word TVarSet_8,
  MR_Word HeadVar__2_87)
{
  {
    MR_String HeadVar__3_88;

    HeadVar__3_88 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TVarSet_8, HeadVar__2_87);
    return HeadVar__3_88;
  }
}

static MR_bool MR_CALL 
check_hlds__check_typeclass__IntroducedFrom__pred__check_typeclass_constraints_on_data_ctor__1851__1_2_p_0(
  MR_Word ExistQArgTVars_32,
  MR_Word ExistQArgTVarsB_33)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[12]), ((MR_Box) (ExistQArgTVars_32)), ((MR_Box) (ExistQArgTVarsB_33)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__check_typeclass__IntroducedFrom__pred__check_typeclass_constraints_on_data_ctor__1850__1_2_p_0(
  MR_Word ExistQVars_19,
  MR_Word HeadVar__2_55)
{
  {
    MR_bool succeeded;

    succeeded = mercury__list__contains_2_p_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[5]), ExistQVars_19, ((MR_Box) (HeadVar__2_55)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__check_typeclass__IntroducedFrom__pred__check_typeclass_constraints_on_data_ctor__1847__1_2_p_0(
  MR_Word ExistQVars_19,
  MR_Word LambdaHeadVar__1_44)
{
  {
    MR_bool succeeded;

    succeeded = mercury__list__member_2_p_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[5]), ((MR_Box) (LambdaHeadVar__1_44)), ExistQVars_19);
    return succeeded;
  }
}

static MR_String MR_CALL 
check_hlds__check_typeclass__IntroducedFrom__func__report_coverage_error__1613__1_2_f_0(
  MR_Word TVarSet_9,
  MR_Word HeadVar__2_77)
{
  {
    MR_String HeadVar__3_78;

    HeadVar__3_78 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TVarSet_9, HeadVar__2_77);
    return HeadVar__3_78;
  }
}

static void MR_CALL 
check_hlds__check_typeclass__IntroducedFrom__pred__produce_auxiliary_procs__1009__1_6_p_0(
  MR_Word Context_29,
  MR_Integer PredArity_77,
  MR_Word LambdaHeadVar__1_121,
  MR_Integer * LambdaHeadVar__2_122,
  MR_Word LambdaHeadVar__3_123,
  MR_Word * LambdaHeadVar__4_124)
{
  {
    MR_Word Modes_95 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_121, (MR_Integer) 0))));
    MR_Word InstVarSet_96 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_121, (MR_Integer) 1))));
    MR_Word MaybeDet_97 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_121, (MR_Integer) 2))));
    MR_Word Var_125;

    {
      Var_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_125, 0) = ((MR_Box) (Modes_95));
    }
    hlds__add_pred__add_new_proc_14_p_0(Context_29, (MR_Word) ((MR_Unsigned) 0U), PredArity_77, InstVarSet_96, Modes_95, Var_125, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 1, MaybeDet_97, (MR_Integer) 0, (MR_Integer) 1, LambdaHeadVar__3_123, LambdaHeadVar__4_124, LambdaHeadVar__2_122);
  }
}

static MR_bool MR_CALL 
check_hlds__check_typeclass__IntroducedFrom__pred__get_matching_instance_defns__879__1_2_p_0(
  MR_Word LambdaHeadVar__1_42,
  MR_Word * LambdaHeadVar__2_43)
{
  {
    MR_bool succeeded;
    MR_Word Defn_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_42, (MR_Integer) 2))));

    succeeded = ((MR_tag((MR_Word) Defn_33)) == (MR_Integer) 1);
    if (succeeded)
      *LambdaHeadVar__2_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Defn_33, (MR_Integer) 0))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__check_typeclass__IntroducedFrom__pred__get_matching_instance_defns__860__1_4_p_0(
  MR_Word PredOrFunc_2,
  MR_Word MethodName_3,
  MR_Integer MethodArity_4,
  MR_Word LambdaHeadVar__1_40)
{
  {
    MR_bool succeeded;
    MR_Word Var_60 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_40, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_40, (MR_Integer) 1))));
    MR_Integer Var_62 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_40, (MR_Integer) 3))));

    succeeded = (PredOrFunc_2 == Var_60);
    if (succeeded)
    {
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(MethodName_3, Var_61);
      if (succeeded)
        succeeded = (MethodArity_4 == Var_62);
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__check_typeclass__IntroducedFrom__pred__check_instance_pred_procs__824__1_3_p_0(
  MR_Word InstancePredId_46,
  MR_Integer LambdaHeadVar__1_73,
  MR_Word * LambdaHeadVar__2_74)
{
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *LambdaHeadVar__2_74 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (InstancePredId_46));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (LambdaHeadVar__1_73));
  }
}

static void MR_CALL 
check_hlds__check_typeclass__IntroducedFrom__pred__check_instance_pred__725__1_3_p_0(
  MR_Word ProcTable_48,
  MR_Integer LambdaHeadVar__1_83,
  MR_Word * LambdaHeadVar__2_84)
{
  {
    MR_Word ProcInfo_51;
    MR_Word Modes_52;
    MR_Word MaybeDetism_53;
    MR_Word InstVarSet_54;
    MR_Box conv0_ProcInfo_51;

    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable_48, ((MR_Box) (LambdaHeadVar__1_83)), &conv0_ProcInfo_51);
    ProcInfo_51 = ((MR_Word) (conv0_ProcInfo_51));
    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_51, &Modes_52);
    hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(ProcInfo_51, &MaybeDetism_53);
    hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(ProcInfo_51, &InstVarSet_54);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *LambdaHeadVar__2_84 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Modes_52));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (InstVarSet_54));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MaybeDetism_53));
    }
  }
}

static MR_bool MR_CALL 
check_hlds__check_typeclass__IntroducedFrom__pred__check_instance_pred__697__1_3_p_0(
  MR_Word PredId_18,
  MR_Word LambdaHeadVar__1_76,
  MR_Integer * LambdaHeadVar__2_77)
{
  {
    MR_bool succeeded;
    MR_Word Var_98 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_76, (MR_Integer) 0))));

    *LambdaHeadVar__2_77 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_76, (MR_Integer) 1))));
    succeeded = hlds__hlds_pred____Unify____pred_id_0_0(PredId_18, Var_98);
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__check_typeclass____Compare____quant_error_type_0_0(
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
check_hlds__check_typeclass____Unify____quant_error_type_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
check_hlds__check_typeclass____Compare____modes_and_detism_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_12 == CastY_13);
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
      MR_Word SubResult1_6;

      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[18]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[19]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
          mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[20]), HeadVar__1_1, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__check_typeclass____Unify____modes_and_detism_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[18]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_12_12 = (MR_Word) (&check_hlds__check_typeclass_scalar_common_1[19]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          TypeInfo_13_13 = (MR_Word) (&check_hlds__check_typeclass_scalar_common_1[20]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__check_typeclass____Compare____induced_fundeps_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[13]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
check_hlds__check_typeclass____Unify____induced_fundeps_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[13]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__check_typeclass____Compare____induced_fundep_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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

      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[14]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[14]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
    }
  }
}

static MR_bool MR_CALL 
check_hlds__check_typeclass____Unify____induced_fundep_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[14]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_10_10 = (MR_Word) (&check_hlds__check_typeclass_scalar_common_1[14]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__check_typeclass____Compare____class_path_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[8]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
check_hlds__check_typeclass____Unify____class_path_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[8]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__check_typeclass____Compare____check_instance_method_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_30 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_31 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_30 == CastY_31);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Integer ArgX3_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Integer ArgY3_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
      MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5))));
      MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
      MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6))));
      MR_Word ArgX8_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))));
      MR_Word ArgY8_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 7))));
      MR_Word ArgX9_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 8))));
      MR_Word ArgY9_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 8))));
      MR_Word SubResult1_6;
      MR_Integer Var_41 = (MR_Integer) (ArgX1_4);
      MR_Integer Var_42 = (MR_Integer) (ArgY1_5);

      succeeded = (Var_41 < Var_42);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (Var_41 > Var_42);
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

        mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;

          succeeded = (ArgX3_10 < ArgY3_11);
          if (succeeded)
          {
            SubResult3_12 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (ArgX3_10 > ArgY3_11);
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

            mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[12]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
            succeeded = (SubResult4_15 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult4_15;
            else
            {
              MR_Word SubResult5_18;

              mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[15]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
              succeeded = (SubResult5_18 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult5_18;
              else
              {
                MR_Word SubResult6_21;

                parse_tree__prog_data____Compare____prog_constraints_0_0(&SubResult6_21, ArgX6_19, ArgY6_20);
                succeeded = (SubResult6_21 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult6_21;
                else
                {
                  MR_Word SubResult7_24;

                  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[16]), &SubResult7_24, ((MR_Box) (ArgX7_22)), ((MR_Box) (ArgY7_23)));
                  succeeded = (SubResult7_24 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult7_24;
                  else
                  {
                    MR_Word SubResult8_27;

                    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[17]), &SubResult8_27, ((MR_Box) (ArgX8_25)), ((MR_Box) (ArgY8_26)));
                    succeeded = (SubResult8_27 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult8_27;
                    else
                      hlds__status____Compare____instance_status_0_0(HeadVar__1_1, ArgX9_28, ArgY9_29);
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

static MR_bool MR_CALL 
check_hlds__check_typeclass____Unify____check_instance_method_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_21 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_22 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_21 == CastY_22);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_24_24;
      MR_Word TypeInfo_25_25;
      MR_Word TypeInfo_27_27;
      MR_Word TypeInfo_28_28;
      MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Integer ArgY3_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
      MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5))));
      MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6))));
      MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
      MR_Word ArgX8_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 7))));
      MR_Word ArgY8_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))));
      MR_Word ArgX9_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 8))));
      MR_Word ArgY9_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 8))));

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
      {
        succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
        {
          succeeded = (ArgX3_7 == ArgY3_8);
          if (succeeded)
          {
            TypeInfo_24_24 = (MR_Word) (&check_hlds__check_typeclass_scalar_common_1[12]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_24_24, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
            if (succeeded)
            {
              TypeInfo_25_25 = (MR_Word) (&check_hlds__check_typeclass_scalar_common_1[15]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_25_25, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
              if (succeeded)
              {
                succeeded = parse_tree__prog_data____Unify____prog_constraints_0_0(ArgX6_13, ArgY6_14);
                if (succeeded)
                {
                  TypeInfo_27_27 = (MR_Word) (&check_hlds__check_typeclass_scalar_common_1[16]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_27_27, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
                  if (succeeded)
                  {
                    TypeInfo_28_28 = (MR_Word) (&check_hlds__check_typeclass_scalar_common_1[17]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_28_28, ((MR_Box) (ArgX8_17)), ((MR_Box) (ArgY8_18)));
                    if (succeeded)
                      succeeded = hlds__status____Unify____instance_status_0_0(ArgX9_19, ArgY9_20);
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
check_hlds__check_typeclass____Compare____bad_instance_type_kind_0_0(
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
check_hlds__check_typeclass____Unify____bad_instance_type_kind_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
check_hlds__check_typeclass__collect_determined_vars_5_p_0(
  MR_Word FunDep_1,
  MR_Word STATE_VARIABLE_FunDeps_0_11,
  MR_Word * STATE_VARIABLE_FunDeps_12,
  MR_Word STATE_VARIABLE_Vars_0_13,
  MR_Word * STATE_VARIABLE_Vars_14)
{
  {
    MR_bool succeeded;
    MR_Word Domain_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FunDep_1, (MR_Integer) 0))));
    MR_Word Range_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FunDep_1, (MR_Integer) 1))));

    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[5]), Domain_7);
    if (succeeded)
    {
      *STATE_VARIABLE_Vars_14 = mercury__set__union_2_f_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[5]), Range_8, STATE_VARIABLE_Vars_0_13);
      *STATE_VARIABLE_FunDeps_12 = STATE_VARIABLE_FunDeps_0_11;
    }
    else
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_FunDeps_12 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (FunDep_1));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_FunDeps_0_11));
      }
      *STATE_VARIABLE_Vars_14 = STATE_VARIABLE_Vars_0_13;
    }
  }
}

static MR_Word MR_CALL 
check_hlds__check_typeclass__remove_vars_2_f_0(
  MR_Word Vars_4,
  MR_Word HeadVar__2_2)
{
  {
    MR_Word HeadVar__3_3;
    MR_Word Domain0_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Range0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Domain_7;
    MR_Word Range_8;

    Domain_7 = mercury__set__difference_2_f_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[5]), Domain0_5, Vars_4);
    Range_8 = mercury__set__difference_2_f_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[5]), Range0_6, Vars_4);
    {
      HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 0) = ((MR_Box) (Domain_7));
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 1) = ((MR_Box) (Range_8));
    }
    return HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
check_hlds__check_typeclass__induced_vars_3_f_0(
  MR_Word Args_5,
  MR_Integer ArgNum_6,
  MR_Word Vars_7)
{
  {
    MR_Word HeadVar__4_4;
    MR_Word NewVars_8;
    MR_Word Arg_9;
    MR_Word ArgVars_10;
    MR_Box conv0_Arg_9;

    conv0_Arg_9 = mercury__list__det_index1_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Args_5, ArgNum_6);
    Arg_9 = ((MR_Word) (conv0_Arg_9));
    parse_tree__prog_type__type_vars_2_p_0(Arg_9, &ArgVars_10);
    NewVars_8 = mercury__set__list_to_set_1_f_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[5]), ArgVars_10);
    HeadVar__4_4 = mercury__set__union_2_f_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[5]), Vars_7, NewVars_8);
    return HeadVar__4_4;
  }
}

static MR_Box MR_CALL 
check_hlds__check_typeclass__induced_fundep_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__4_4;

    conv0_HeadVar__4_4 = check_hlds__check_typeclass__induced_vars_3_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__4_4));
    return wrapper_arg_3;
  }
}

static void MR_CALL 
check_hlds__check_typeclass__induced_fundep_4_p_0(
  MR_Word Args_5,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_FunDeps_0_11,
  MR_Word * STATE_VARIABLE_FunDeps_12)
{
  {
    MR_Word Domain0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Range0_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Domain_9;
    MR_Word Range_10;
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Word Var_16;
    MR_Word Var_18;
    MR_Box conv1_Domain_9;
    MR_Box conv2_Range_10;

    {
      Var_13 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_13, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_10[6]));
      MR_hl_field(MR_mktag(0), Var_13, 1) = ((MR_Box) (check_hlds__check_typeclass__induced_fundep_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_13, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_13, 3) = ((MR_Box) (Args_5));
    }
    Var_14 = mercury__set__init_0_f_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[5]));
    conv1_Domain_9 = mercury__set__fold_3_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&check_hlds__check_typeclass_scalar_common_1[14]), Var_13, Domain0_6, ((MR_Box) (Var_14)));
    Domain_9 = ((MR_Word) (conv1_Domain_9));
    Var_16 = mercury__set__init_0_f_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[5]));
    conv2_Range_10 = mercury__set__fold_3_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&check_hlds__check_typeclass_scalar_common_1[14]), Var_13, Range0_7, ((MR_Box) (Var_16)));
    Range_10 = ((MR_Word) (conv2_Range_10));
    {
      Var_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (Domain_9));
      MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) (Range_10));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_FunDeps_12 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_FunDeps_0_11));
    }
  }
}

static void MR_CALL 
check_hlds__check_typeclass__induced_fundeps_3_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_FunDeps_12;

    check_hlds__check_typeclass__induced_fundep_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_FunDeps_12);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_FunDeps_12));
  }
}

static void MR_CALL 
check_hlds__check_typeclass__induced_fundeps_3_4_p_0(
  MR_Word ClassTable_5,
  MR_Word Constraint_6,
  MR_Word STATE_VARIABLE_FunDeps_0_12,
  MR_Word * STATE_VARIABLE_FunDeps_13)
{
  {
    MR_Word Name_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraint_6, (MR_Integer) 0))));
    MR_Word Args_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraint_6, (MR_Integer) 1))));
    MR_Integer Arity_10;
    MR_Word ClassDefn_11;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Box conv0_ClassDefn_11;
    MR_Box conv2_STATE_VARIABLE_FunDeps_13;

    Arity_10 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Args_9);
    {
      Var_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (Name_8));
      MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (Arity_10));
    }
    conv0_ClassDefn_11 = mercury__map__lookup_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), ClassTable_5, ((MR_Box) (Var_14)));
    ClassDefn_11 = ((MR_Word) (conv0_ClassDefn_11));
    {
      Var_15 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_10[5]));
      MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (check_hlds__check_typeclass__induced_fundeps_3_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_15, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_15, 3) = ((MR_Box) (Args_9));
    }
    Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_11, (MR_Integer) 2))));
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_fundep_0), (MR_Word) (&check_hlds__check_typeclass_scalar_common_1[13]), Var_15, Var_16, ((MR_Box) (STATE_VARIABLE_FunDeps_0_12)), &conv2_STATE_VARIABLE_FunDeps_13);
    *STATE_VARIABLE_FunDeps_13 = ((MR_Word) (conv2_STATE_VARIABLE_FunDeps_13));
  }
}

static void MR_CALL 
check_hlds__check_typeclass__acc_induced_fundeps_for_constraint_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_FunDeps_13;

    check_hlds__check_typeclass__induced_fundeps_3_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_FunDeps_13);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_FunDeps_13));
  }
}

static void MR_CALL 
check_hlds__check_typeclass__acc_induced_fundeps_for_constraint_5_p_0(
  MR_Word ClassTable_6,
  MR_Word TVarSet_7,
  MR_Word Constraint_8,
  MR_Word STATE_VARIABLE_FunDeps_0_25,
  MR_Word * STATE_VARIABLE_FunDeps_26)
{
  {
    MR_Word Name_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraint_8, (MR_Integer) 0))));
    MR_Word Args_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraint_8, (MR_Integer) 1))));
    MR_Integer Arity_12;
    MR_Word ClassDefn_13;
    MR_Word ClassAncestors_14;
    MR_Word Var_27;
    MR_Word Var_33;
    MR_Word Var_37;
    MR_Box conv0_ClassDefn_13;

    Arity_12 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Args_11);
    {
      Var_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_27, 0) = ((MR_Box) (Name_10));
      MR_hl_field(MR_mktag(0), Var_27, 1) = ((MR_Box) (Arity_12));
    }
    conv0_ClassDefn_13 = mercury__map__lookup_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), ClassTable_6, ((MR_Box) (Var_27)));
    ClassDefn_13 = ((MR_Word) (conv0_ClassDefn_13));
    ClassAncestors_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_13, (MR_Integer) 3))));
    Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_13, (MR_Integer) 4))));
    Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_13, (MR_Integer) 8))));
    if ((ClassAncestors_14 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_FunDeps_26 = STATE_VARIABLE_FunDeps_0_25;
    else
    {
      MR_Word Renaming_20;
      MR_Word RenamedAncestors_21;
      MR_Word RenamedParams_22;
      MR_Word Subst_23;
      MR_Word Ancestors_24;
      MR_Word Var_28;
      MR_Word Var_19;
      MR_Box conv2_STATE_VARIABLE_FunDeps_26;

      parse_tree__prog_data__tvarset_merge_renaming_4_p_0(TVarSet_7, Var_37, &Var_19, &Renaming_20);
      parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_p_0(Renaming_20, ClassAncestors_14, &RenamedAncestors_21);
      parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_p_0(Renaming_20, Var_33, &RenamedParams_22);
      mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[5]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), RenamedParams_22, Args_11, &Subst_23);
      parse_tree__prog_type_subst__apply_subst_to_prog_constraint_list_3_p_0(Subst_23, RenamedAncestors_21, &Ancestors_24);
      {
        Var_28 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_10[4]));
        MR_hl_field(MR_mktag(0), Var_28, 1) = ((MR_Box) (check_hlds__check_typeclass__acc_induced_fundeps_for_constraint_5_p_0_1));
        MR_hl_field(MR_mktag(0), Var_28, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_28, 3) = ((MR_Box) (ClassTable_6));
      }
      mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&check_hlds__check_typeclass_scalar_common_1[13]), Var_28, Ancestors_24, ((MR_Box) (STATE_VARIABLE_FunDeps_0_25)), &conv2_STATE_VARIABLE_FunDeps_26);
      *STATE_VARIABLE_FunDeps_26 = ((MR_Word) (conv2_STATE_VARIABLE_FunDeps_26));
    }
  }
}

static void MR_CALL 
check_hlds__check_typeclass__check_typeclass_constraints_on_data_ctor_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_FunDeps_26;

    check_hlds__check_typeclass__acc_induced_fundeps_for_constraint_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_FunDeps_26);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_FunDeps_26));
  }
}

static MR_bool MR_CALL 
check_hlds__check_typeclass__check_typeclass_constraints_on_data_ctor_6_p_0_3(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__check_typeclass__IntroducedFrom__pred__check_typeclass_constraints_on_data_ctor__1851__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__check_typeclass__check_typeclass_constraints_on_data_ctor_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__check_typeclass__IntroducedFrom__pred__check_typeclass_constraints_on_data_ctor__1850__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__check_typeclass__check_typeclass_constraints_on_data_ctor_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__check_typeclass__IntroducedFrom__pred__check_typeclass_constraints_on_data_ctor__1847__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__check_typeclass__check_typeclass_constraints_on_data_ctor_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word TypeCtor_8,
  MR_Word TypeDefn_9,
  MR_Word Ctor_10,
  MR_Word STATE_VARIABLE_Specs_0_40,
  MR_Word * STATE_VARIABLE_Specs_41)
{
  {
    MR_bool succeeded;
    MR_Word MaybeExistConstraints_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_10, (MR_Integer) 1))));
    MR_Word CtorArgs_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_10, (MR_Integer) 3))));

    if ((MaybeExistConstraints_13 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Specs_41 = STATE_VARIABLE_Specs_0_40;
    else
    {
      MR_Word ExistConstraints_18 = (MR_Word) (MR_body((MR_Word) (MaybeExistConstraints_13), (MR_Integer) 1));
      MR_Word ExistQVars_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExistConstraints_18, (MR_Integer) 0))));
      MR_Word Constraints_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExistConstraints_18, (MR_Integer) 1))));
      MR_Word ClassTable_23;
      MR_Word BadClassSNAsSet_24;
      MR_Word BadClassSNAs_25;
      MR_Word Var_42;

      hlds__hlds_module__module_info_get_class_table_2_p_0(ModuleInfo_7, &ClassTable_23);
      Var_42 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0));
      check_hlds__check_typeclass__find_bad_class_ids_in_constraints_4_p_0(ClassTable_23, Constraints_20, Var_42, &BadClassSNAsSet_24);
      mercury__set__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), BadClassSNAsSet_24, &BadClassSNAs_25);
      if ((BadClassSNAs_25 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word ArgTypes_29;
        MR_Word ArgTVars_30;
        MR_Word ExistQArgTVars_32;
        MR_Word ExistQArgTVarsB_33;
        MR_Word ConstrainedTVars_34;
        MR_Word TVarSet_35;
        MR_Word UnboundTVars_36;
        MR_Word Var_43;
        MR_Word Var_45;
        MR_Word Var_46;
        MR_Word ClassTable_64;
        MR_Word InducedFunDeps_65;
        MR_Word FunDepsClosure_66;
        MR_Word UnboundTVarsSet_67;
        MR_Word Var_68;
        MR_Word Var_69;
        MR_Word Var_75;
        MR_Word Var_85;
        MR_Box conv1_InducedFunDeps_65;

        parse_tree__prog_data__get_ctor_arg_types_2_p_0(CtorArgs_15, &ArgTypes_29);
        parse_tree__prog_type__type_vars_list_2_p_0(ArgTypes_29, &ArgTVars_30);
        {
          Var_43 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_43, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_11[4]));
          MR_hl_field(MR_mktag(0), Var_43, 1) = ((MR_Box) (check_hlds__check_typeclass__check_typeclass_constraints_on_data_ctor_6_p_0_1));
          MR_hl_field(MR_mktag(0), Var_43, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_43, 3) = ((MR_Box) (ExistQVars_19));
        }
        mercury__list__filter_3_p_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[5]), Var_43, ArgTVars_30, &ExistQArgTVars_32);
        {
          Var_45 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_45, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_11[4]));
          MR_hl_field(MR_mktag(0), Var_45, 1) = ((MR_Box) (check_hlds__check_typeclass__check_typeclass_constraints_on_data_ctor_6_p_0_2));
          MR_hl_field(MR_mktag(0), Var_45, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_45, 3) = ((MR_Box) (ExistQVars_19));
        }
        mercury__list__filter_3_p_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[5]), Var_45, ArgTVars_30, &ExistQArgTVarsB_33);
        {
          Var_46 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_46, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_11[5]));
          MR_hl_field(MR_mktag(0), Var_46, 1) = ((MR_Box) (check_hlds__check_typeclass__check_typeclass_constraints_on_data_ctor_6_p_0_3));
          MR_hl_field(MR_mktag(0), Var_46, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_46, 3) = ((MR_Box) (ExistQArgTVars_32));
          MR_hl_field(MR_mktag(0), Var_46, 4) = ((MR_Box) (ExistQArgTVarsB_33));
        }
        mercury__require__expect_3_p_0(Var_46, (MR_String) "predicate \140check_hlds.check_typeclass.check_typeclass_constraints_on_data_ctor\'/6", (MR_String) "ExistQArgTVars != ExistQArgTVarsB");
        parse_tree__prog_type__constraint_list_get_tvars_2_p_0(Constraints_20, &ConstrainedTVars_34);
        hlds__hlds_data__get_type_defn_tvarset_2_p_0(TypeDefn_9, &TVarSet_35);
        hlds__hlds_module__module_info_get_class_table_2_p_0(ModuleInfo_7, &ClassTable_64);
        {
          Var_75 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_75, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_6[5]));
          MR_hl_field(MR_mktag(0), Var_75, 1) = ((MR_Box) (check_hlds__check_typeclass__check_typeclass_constraints_on_data_ctor_6_p_0_4));
          MR_hl_field(MR_mktag(0), Var_75, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_75, 3) = ((MR_Box) (ClassTable_64));
          MR_hl_field(MR_mktag(0), Var_75, 4) = ((MR_Box) (TVarSet_35));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&check_hlds__check_typeclass_scalar_common_1[13]), Var_75, Constraints_20, ((MR_Box) ((MR_Unsigned) 0U)), &conv1_InducedFunDeps_65);
        InducedFunDeps_65 = ((MR_Word) (conv1_InducedFunDeps_65));
        Var_68 = mercury__set__list_to_set_1_f_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[5]), ExistQArgTVars_32);
        Var_85 = mercury__set__init_0_f_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[5]));
        check_hlds__check_typeclass__fundeps_closure_loop_4_p_0(InducedFunDeps_65, Var_68, Var_85, &FunDepsClosure_66);
        Var_69 = mercury__set__list_to_set_1_f_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[5]), ConstrainedTVars_34);
        UnboundTVarsSet_67 = mercury__set__difference_2_f_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[5]), Var_69, FunDepsClosure_66);
        UnboundTVars_36 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[5]), UnboundTVarsSet_67);
        if ((UnboundTVars_36 == (MR_Word) ((MR_Unsigned) 0U)))
          *STATE_VARIABLE_Specs_41 = STATE_VARIABLE_Specs_0_40;
        else
        {
          MR_Word Spec_39;

          Spec_39 = check_hlds__check_typeclass__report_unbound_tvars_in_ctor_context_3_f_0(UnboundTVars_36, TypeCtor_8, TypeDefn_9);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_41 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_39));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_40));
          }
        }
      }
      else
      {
        MR_Word HeadBadClassSNA_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BadClassSNAs_25, (MR_Integer) 0))));
        MR_Word TailBadClassSNAs_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BadClassSNAs_25, (MR_Integer) 1))));
        MR_Word BadClassIdsSpec_28;

        BadClassIdsSpec_28 = check_hlds__check_typeclass__report_bad_class_ids_in_data_ctor_4_f_0(TypeCtor_8, TypeDefn_9, HeadBadClassSNA_26, TailBadClassSNAs_27);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Specs_41 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (BadClassIdsSpec_28));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_40));
        }
      }
    }
  }
}

static MR_Word MR_CALL 
check_hlds__check_typeclass__report_bad_class_ids_in_data_ctor_4_f_0(
  MR_Word TypeCtor_6,
  MR_Word TypeDefn_7,
  MR_Word HeadBadClassId_8,
  MR_Word TailBadClassIds_9)
{
  {
    MR_Word Spec_10;
    MR_Word Context_11;
    MR_Word StartPieces_12;
    MR_Word Pieces_13;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_24;

    hlds__hlds_data__get_type_defn_context_2_p_0(TypeDefn_7, &Context_11);
    {
      Var_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_17, 0) = ((MR_Box) ((MR_Unsigned) 16U));
      MR_hl_field(MR_mktag(3), Var_17, 1) = ((MR_Box) (TypeCtor_6));
    }
    {
      Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[43])));
    }
    {
      StartPieces_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), StartPieces_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[80])));
      MR_hl_field(MR_mktag(1), StartPieces_12, 1) = ((MR_Box) (Var_16));
    }
    Var_24 = check_hlds__check_typeclass__report_bad_class_ids_2_f_0(HeadBadClassId_8, TailBadClassIds_9);
    Pieces_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), StartPieces_12, Var_24);
    {
      Spec_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_10, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.check_typeclass.report_bad_class_ids_in_data_ctor\'/4"));
      MR_hl_field(MR_mktag(1), Spec_10, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_10, 2) = ((MR_Box) ((MR_Unsigned) 48U));
      MR_hl_field(MR_mktag(1), Spec_10, 3) = ((MR_Box) (Context_11));
      MR_hl_field(MR_mktag(1), Spec_10, 4) = ((MR_Box) (Pieces_13));
    }
    return Spec_10;
  }
}

static MR_Box MR_CALL 
check_hlds__check_typeclass__report_unbound_tvars_in_ctor_context_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__3_70;

    conv0_HeadVar__3_70 = check_hlds__check_typeclass__IntroducedFrom__func__report_unbound_tvars_in_ctor_context__1930__1_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_70));
    return wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
check_hlds__check_typeclass__report_unbound_tvars_in_ctor_context_3_f_0(
  MR_Word Vars_5,
  MR_Word TypeCtor_6,
  MR_Word TypeDefn_7)
{
  {
    MR_Word Spec_8;
    MR_Word Context_9;
    MR_Word TVarSet_10;
    MR_Word VarsStrs_11;
    MR_Word Pieces_12;
    MR_Word Msg_13;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_23;
    MR_Word Var_25;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_String Var_30;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_String Var_38;
    MR_Word Var_41;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_String Var_46;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word Var_60;
    MR_Word Var_65;
    MR_Box conv1_Var_30;
    MR_Box conv2_Var_38;
    MR_Box conv3_Var_46;

    hlds__hlds_data__get_type_defn_context_2_p_0(TypeDefn_7, &Context_9);
    hlds__hlds_data__get_type_defn_tvarset_2_p_0(TypeDefn_7, &TVarSet_10);
    {
      Var_14 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_9[7]));
      MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (check_hlds__check_typeclass__report_unbound_tvars_in_ctor_context_3_f_0_1));
      MR_hl_field(MR_mktag(0), Var_14, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_14, 3) = ((MR_Box) (TVarSet_10));
    }
    VarsStrs_11 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[5]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_14, Vars_5);
    {
      Var_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_19, 0) = ((MR_Box) ((MR_Unsigned) 16U));
      MR_hl_field(MR_mktag(3), Var_19, 1) = ((MR_Box) (TypeCtor_6));
    }
    conv1_Var_30 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[5]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Vars_5, ((MR_Box) ((MR_String) "type variable")), ((MR_Box) ((MR_String) "type variables")));
    Var_30 = ((MR_String) (conv1_Var_30));
    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_29, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_29, 1) = ((MR_Box) (Var_30));
    }
    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[72])));
      MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (Var_28));
    }
    {
      Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (Var_25));
    }
    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[42])));
      MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (Var_23));
    }
    {
      Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) (Var_20));
    }
    {
      Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[80])));
      MR_hl_field(MR_mktag(1), Var_15, 1) = ((MR_Box) (Var_18));
    }
    Var_35 = parse_tree__error_util__list_to_quoted_pieces_1_f_0(VarsStrs_11);
    conv2_Var_38 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[5]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Vars_5, ((MR_Box) ((MR_String) "occurs")), ((MR_Box) ((MR_String) "occur")));
    Var_38 = ((MR_String) (conv2_Var_38));
    {
      Var_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_37, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_37, 1) = ((MR_Box) (Var_38));
    }
    conv3_Var_46 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[5]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Vars_5, ((MR_Box) ((MR_String) "is")), ((MR_Box) ((MR_String) "are")));
    Var_46 = ((MR_String) (conv3_Var_46));
    {
      Var_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_45, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_45, 1) = ((MR_Box) (Var_46));
    }
    {
      Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[82])));
    }
    {
      Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[73])));
      MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (Var_44));
    }
    {
      Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (Var_41));
    }
    Var_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_35, Var_36);
    Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_15, Var_34);
    {
      Var_56 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_56, 0) = ((MR_Box) (Pieces_12));
    }
    Var_60 = check_hlds__check_typeclass__report_unbound_tvars_explanation_0_f_0();
    {
      Var_58 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_58, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(2), Var_58, 1) = ((MR_Box) (Var_60));
    }
    {
      Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (Var_58));
      MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (Var_56));
      MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (Var_57));
    }
    {
      Msg_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Msg_13, 0) = ((MR_Box) (Context_9));
      MR_hl_field(MR_mktag(2), Msg_13, 1) = ((MR_Box) (Var_55));
    }
    {
      Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (Msg_13));
      MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_8 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_8, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.check_typeclass.report_unbound_tvars_in_ctor_context\'/3"));
      MR_hl_field(MR_mktag(0), Spec_8, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_8, 2) = ((MR_Box) ((MR_Unsigned) 48U));
      MR_hl_field(MR_mktag(0), Spec_8, 3) = ((MR_Box) (Var_65));
    }
    return Spec_8;
  }
}

static void MR_CALL 
check_hlds__check_typeclass__check_typeclass_constraints_on_type_ctor_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Specs_41;

    check_hlds__check_typeclass__check_typeclass_constraints_on_data_ctor_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Specs_41);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_41));
  }
}

static void MR_CALL 
check_hlds__check_typeclass__check_typeclass_constraints_on_type_ctor_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20)
{
  {
    MR_Word TypeCtor_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word TypeDefn_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Body_9;

    hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_7, &Body_9);
    switch (MR_tag((MR_Word) Body_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Ctors_10;
          MR_Word Var_21 = (MR_Word) ((MR_Word) (Body_9));
          MR_Word Var_22;
          MR_Word Var_23;
          MR_Box conv1_STATE_VARIABLE_Specs_20;

          Ctors_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_21, (MR_Integer) 0))));
          {
            Var_22 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_5[4]));
            MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) (check_hlds__check_typeclass__check_typeclass_constraints_on_type_ctor_4_p_0_1));
            MR_hl_field(MR_mktag(0), Var_22, 2) = ((MR_Box) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(0), Var_22, 3) = ((MR_Box) (ModuleInfo_5));
            MR_hl_field(MR_mktag(0), Var_22, 4) = ((MR_Box) (TypeCtor_6));
            MR_hl_field(MR_mktag(0), Var_22, 5) = ((MR_Box) (TypeDefn_7));
          }
          Var_23 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), Ctors_10);
          mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), (MR_Word) (&check_hlds__check_typeclass_scalar_common_1[1]), Var_22, Var_23, ((MR_Box) (STATE_VARIABLE_Specs_0_19)), &conv1_STATE_VARIABLE_Specs_20);
          *STATE_VARIABLE_Specs_20 = ((MR_Word) (conv1_STATE_VARIABLE_Specs_20));
        }
        break;
      case (MR_Integer) 1:
        *STATE_VARIABLE_Specs_20 = STATE_VARIABLE_Specs_0_19;
        break;
      case (MR_Integer) 2:
        *STATE_VARIABLE_Specs_20 = STATE_VARIABLE_Specs_0_19;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Body_9, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *STATE_VARIABLE_Specs_20 = STATE_VARIABLE_Specs_0_19;
            break;
          case (MR_Integer) 1:
            *STATE_VARIABLE_Specs_20 = STATE_VARIABLE_Specs_0_19;
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__check_typeclass__check_typeclass_constraints_on_pred_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word PredId_6,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27)
{
  {
    MR_bool succeeded;
    MR_Word PredInfo_8;
    MR_Word Constraints_9;
    MR_Word UnivConstraints_10;
    MR_Word ExistConstraints_11;

    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_5, PredId_6, &PredInfo_8);
    hlds__hlds_pred__pred_info_get_class_context_2_p_0(PredInfo_8, &Constraints_9);
    UnivConstraints_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraints_9, (MR_Integer) 0))));
    ExistConstraints_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraints_9, (MR_Integer) 1))));
    succeeded = (UnivConstraints_10 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
    }
    if (!(succeeded))
    {
      succeeded = (ExistConstraints_11 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
      }
    }
    if (succeeded)
    {
      MR_Word AllConstraints_16;
      MR_Word ClassTable_18;
      MR_Word BadClassSNAsSet_19;
      MR_Word BadClassSNAs_20;
      MR_Word Var_31;

      AllConstraints_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), UnivConstraints_10, ExistConstraints_11);
      hlds__passes_aux__write_pred_progress_message_5_p_0(ModuleInfo_5, (MR_String) "Checking typeclass constraints on", PredId_6);
      hlds__hlds_module__module_info_get_class_table_2_p_0(ModuleInfo_5, &ClassTable_18);
      Var_31 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0));
      check_hlds__check_typeclass__find_bad_class_ids_in_constraints_4_p_0(ClassTable_18, AllConstraints_16, Var_31, &BadClassSNAsSet_19);
      mercury__set__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), BadClassSNAsSet_19, &BadClassSNAs_20);
      if ((BadClassSNAs_20 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Status_24;
        MR_Word NeedsAmbiguityCheck_25;
        MR_Word Var_50;

        hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo_8, &Status_24);
        Var_50 = (MR_Word) (Status_24);
        switch (MR_tag((MR_Word) Var_50)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(Var_50)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                NeedsAmbiguityCheck_25 = (MR_Integer) 0;
                break;
              case (MR_Integer) 1:
                NeedsAmbiguityCheck_25 = (MR_Integer) 0;
                break;
              case (MR_Integer) 2:
                NeedsAmbiguityCheck_25 = (MR_Integer) 0;
                break;
              case (MR_Integer) 3:
                NeedsAmbiguityCheck_25 = (MR_Integer) 1;
                break;
              case (MR_Integer) 4:
                NeedsAmbiguityCheck_25 = (MR_Integer) 1;
                break;
              case (MR_Integer) 5:
                NeedsAmbiguityCheck_25 = (MR_Integer) 1;
                break;
              case (MR_Integer) 6:
                NeedsAmbiguityCheck_25 = (MR_Integer) 1;
                break;
              case (MR_Integer) 7:
                NeedsAmbiguityCheck_25 = (MR_Integer) 1;
                break;
              case (MR_Integer) 8:
                NeedsAmbiguityCheck_25 = (MR_Integer) 1;
                break;
            }
            break;
          case (MR_Integer) 1:
            NeedsAmbiguityCheck_25 = (MR_Integer) 1;
            break;
          case (MR_Integer) 2:
            NeedsAmbiguityCheck_25 = (MR_Integer) 0;
            break;
        }
        switch (NeedsAmbiguityCheck_25) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *STATE_VARIABLE_Specs_27 = STATE_VARIABLE_Specs_0_26;
            break;
          case (MR_Integer) 1:
            {
              MR_Word STATE_VARIABLE_Specs_32_32;
              MR_Word ExistQVars_55;
              MR_Word Constraints_56;
              MR_Word UnivCs_57;
              MR_Word ExistCs_58;
              MR_Word UnivTVars_59;
              MR_Word ExistQVarsSet_60;
              MR_Word UnivTVarsSet_61;
              MR_Word BadUnivTVarsSet_62;
              MR_Word ExistTVars_63;
              MR_Word BadExistTVars_64;
              MR_Word Var_66;
              MR_Word STATE_VARIABLE_Specs_20_67;

              check_hlds__check_typeclass__check_pred_type_ambiguities_4_p_0(ModuleInfo_5, PredInfo_8, STATE_VARIABLE_Specs_0_26, &STATE_VARIABLE_Specs_32_32);
              hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_p_0(PredInfo_8, &ExistQVars_55);
              hlds__hlds_pred__pred_info_get_class_context_2_p_0(PredInfo_8, &Constraints_56);
              UnivCs_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraints_56, (MR_Integer) 0))));
              ExistCs_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraints_56, (MR_Integer) 1))));
              parse_tree__prog_type__constraint_list_get_tvars_2_p_0(UnivCs_57, &UnivTVars_59);
              mercury__set__list_to_set_2_p_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[5]), ExistQVars_55, &ExistQVarsSet_60);
              mercury__set__list_to_set_2_p_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[5]), UnivTVars_59, &UnivTVarsSet_61);
              mercury__set__intersect_3_p_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[5]), ExistQVarsSet_60, UnivTVarsSet_61, &BadUnivTVarsSet_62);
              Var_66 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[5]), BadUnivTVarsSet_62);
              check_hlds__check_typeclass__maybe_report_badly_quantified_vars_5_p_0(PredInfo_8, (MR_Integer) 0, Var_66, STATE_VARIABLE_Specs_32_32, &STATE_VARIABLE_Specs_20_67);
              parse_tree__prog_type__constraint_list_get_tvars_2_p_0(ExistCs_58, &ExistTVars_63);
              mercury__list__delete_elems_3_p_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[5]), ExistTVars_63, ExistQVars_55, &BadExistTVars_64);
              check_hlds__check_typeclass__maybe_report_badly_quantified_vars_5_p_0(PredInfo_8, (MR_Integer) 1, BadExistTVars_64, STATE_VARIABLE_Specs_20_67, STATE_VARIABLE_Specs_27);
            }
            break;
        }
      }
      else
      {
        MR_Word HeadBadClassSNA_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BadClassSNAs_20, (MR_Integer) 0))));
        MR_Word TailBadClassSNAs_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BadClassSNAs_20, (MR_Integer) 1))));
        MR_Word BadClassIdsSpec_23;

        BadClassIdsSpec_23 = check_hlds__check_typeclass__report_bad_class_ids_in_pred_decl_4_f_0(ModuleInfo_5, PredInfo_8, HeadBadClassSNA_21, TailBadClassSNAs_22);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Specs_27 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (BadClassIdsSpec_23));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_26));
        }
      }
    }
    else
      *STATE_VARIABLE_Specs_27 = STATE_VARIABLE_Specs_0_26;
  }
}

static MR_Box MR_CALL 
check_hlds__check_typeclass__maybe_report_badly_quantified_vars_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv1_HeadVar__3_73;

    conv1_HeadVar__3_73 = check_hlds__check_typeclass__IntroducedFrom__func__report_badly_quantified_vars__2113__1_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__3_73));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
check_hlds__check_typeclass__maybe_report_badly_quantified_vars_5_p_0(
  MR_Word PredInfo_6,
  MR_Word QuantErrorType_7,
  MR_Word TVars_8,
  MR_Word STATE_VARIABLE_Specs_0_13,
  MR_Word * STATE_VARIABLE_Specs_14)
{
  if ((TVars_8 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Specs_14 = STATE_VARIABLE_Specs_0_13;
  else
  {
    MR_Word Spec_12;
    MR_Word TVarSet_20;
    MR_Word Context_21;
    MR_Word InDeclaration_22;
    MR_Word TypeVariables_23;
    MR_Word TVarsStrs_24;
    MR_Word TVarsPart_25;
    MR_Word Are_26;
    MR_Word BlahConstrained_27;
    MR_Word BlahQuantified_28;
    MR_Word Pieces_29;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_String Var_47;
    MR_Word Var_51;
    MR_String Var_52;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Word Var_63;
    MR_Word Var_66;
    MR_Word Var_69;
    MR_Word Var_70;
    MR_Box conv0_Var_47;
    MR_Box conv2_Var_52;

    hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo_6, &TVarSet_20);
    hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo_6, &Context_21);
    Var_35 = hlds__hlds_error_util__describe_one_pred_info_name_2_f_0((MR_Integer) 0, PredInfo_6);
    Var_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_35, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[43])));
    InDeclaration_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[138])), Var_34);
    conv0_Var_47 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[5]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), TVars_8, ((MR_Box) ((MR_String) "")), ((MR_Box) ((MR_String) "s")));
    Var_47 = ((MR_String) (conv0_Var_47));
    {
      Var_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_46, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(3), Var_46, 1) = ((MR_Box) (Var_47));
    }
    {
      Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      TypeVariables_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), TypeVariables_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[139])));
      MR_hl_field(MR_mktag(1), TypeVariables_23, 1) = ((MR_Box) (Var_45));
    }
    {
      Var_51 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_51, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_9[7]));
      MR_hl_field(MR_mktag(0), Var_51, 1) = ((MR_Box) (check_hlds__check_typeclass__maybe_report_badly_quantified_vars_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_51, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_51, 3) = ((MR_Box) (TVarSet_20));
    }
    TVarsStrs_24 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[5]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_51, TVars_8);
    TVarsPart_25 = parse_tree__error_util__list_to_quoted_pieces_1_f_0(TVarsStrs_24);
    conv2_Var_52 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[5]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), TVars_8, ((MR_Box) ((MR_String) "is")), ((MR_Box) ((MR_String) "are")));
    Var_52 = ((MR_String) (conv2_Var_52));
    {
      Are_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Are_26, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Are_26, 1) = ((MR_Box) (Var_52));
    }
    switch (QuantErrorType_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          BlahConstrained_27 = (MR_Word) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[140]));
          BlahQuantified_28 = (MR_Word) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[141]));
        }
        break;
      case (MR_Integer) 0:
        {
          BlahConstrained_27 = (MR_Word) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[142]));
          BlahQuantified_28 = (MR_Word) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[143]));
        }
        break;
    }
    {
      Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (BlahQuantified_28));
      MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[37])));
    }
    {
      Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (Are_26));
      MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) (Var_70));
    }
    {
      Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[145])));
      MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) (Var_69));
    }
    {
      Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[144])));
      MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) (Var_66));
    }
    {
      Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (BlahConstrained_27));
      MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (Var_63));
    }
    {
      Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (Are_26));
      MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (Var_62));
    }
    Var_60 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), TVarsPart_25, Var_61);
    Var_59 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), TypeVariables_23, Var_60);
    Pieces_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), InDeclaration_22, Var_59);
    {
      Spec_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_12, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.check_typeclass.report_badly_quantified_vars\'/3"));
      MR_hl_field(MR_mktag(1), Spec_12, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_12, 2) = ((MR_Box) ((MR_Unsigned) 48U));
      MR_hl_field(MR_mktag(1), Spec_12, 3) = ((MR_Box) (Context_21));
      MR_hl_field(MR_mktag(1), Spec_12, 4) = ((MR_Box) (Pieces_29));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_14 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_12));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_13));
    }
  }
}

static MR_Word MR_CALL 
check_hlds__check_typeclass__report_bad_class_ids_in_pred_decl_4_f_0(
  MR_Word ModuleInfo_6,
  MR_Word PredInfo_7,
  MR_Word HeadBadClassId_8,
  MR_Word TailBadClassIds_9)
{
  {
    MR_bool succeeded;
    MR_Word Spec_10;
    MR_Word Context_11;
    MR_Word PredOrFunc_12;
    MR_String PredName_13;
    MR_Word PredModuleName_14;
    MR_Word CurModuleName_15;
    MR_Word PredSymName_16;
    MR_Word ArgTypes_19;
    MR_Integer PredArity_20;
    MR_Word PFSymNameArity_21;
    MR_Word StartPieces_22;
    MR_Word Pieces_23;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_34;
    MR_Word _TVarSet_17;
    MR_Word Var_18;

    hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo_7, &Context_11);
    PredOrFunc_12 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_7);
    PredName_13 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_7);
    PredModuleName_14 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_7);
    hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_6, &CurModuleName_15);
    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(CurModuleName_15, PredModuleName_14);
    if (succeeded)
      {
        PredSymName_16 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), PredSymName_16, 0) = ((MR_Box) (PredName_13));
      }
    else
      {
        PredSymName_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), PredSymName_16, 0) = ((MR_Box) (PredModuleName_14));
        MR_hl_field(MR_mktag(1), PredSymName_16, 1) = ((MR_Box) (PredName_13));
      }
    hlds__hlds_pred__pred_info_get_arg_types_4_p_0(PredInfo_7, &_TVarSet_17, &Var_18, &ArgTypes_19);
    PredArity_20 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_19);
    {
      PFSymNameArity_21 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), PFSymNameArity_21, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_12));
      MR_hl_field(MR_mktag(0), PFSymNameArity_21, 1) = ((MR_Box) (PredSymName_16));
      MR_hl_field(MR_mktag(0), PFSymNameArity_21, 2) = ((MR_Box) (PredArity_20));
    }
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_27, 0) = ((MR_Box) ((MR_Unsigned) 13U));
      MR_hl_field(MR_mktag(3), Var_27, 1) = ((MR_Box) (PFSymNameArity_21));
    }
    {
      Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[43])));
    }
    {
      StartPieces_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), StartPieces_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[71])));
      MR_hl_field(MR_mktag(1), StartPieces_22, 1) = ((MR_Box) (Var_26));
    }
    Var_34 = check_hlds__check_typeclass__report_bad_class_ids_2_f_0(HeadBadClassId_8, TailBadClassIds_9);
    Pieces_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), StartPieces_22, Var_34);
    {
      Spec_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_10, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.check_typeclass.report_bad_class_ids_in_pred_decl\'/4"));
      MR_hl_field(MR_mktag(1), Spec_10, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_10, 2) = ((MR_Box) ((MR_Unsigned) 48U));
      MR_hl_field(MR_mktag(1), Spec_10, 3) = ((MR_Box) (Context_11));
      MR_hl_field(MR_mktag(1), Spec_10, 4) = ((MR_Box) (Pieces_23));
    }
    return Spec_10;
  }
}

static MR_Box MR_CALL 
check_hlds__check_typeclass__report_bad_class_ids_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_15;

    conv0_LambdaHeadVar__2_15 = check_hlds__check_typeclass__IntroducedFrom__func__report_bad_class_ids__2046__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_15));
    return wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
check_hlds__check_typeclass__report_bad_class_ids_2_f_0(
  MR_Word HeadClassId_4,
  MR_Word TailClassIds_5)
{
  {
    MR_Word Pieces_6;
    MR_Word QualHeadClassId_9;

    {
      QualHeadClassId_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), QualHeadClassId_9, 0) = ((MR_Box) ((MR_Unsigned) 22U));
      MR_hl_field(MR_mktag(3), QualHeadClassId_9, 1) = ((MR_Box) (HeadClassId_4));
    }
    if ((TailClassIds_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_31;

      {
        Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (QualHeadClassId_9));
        MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[132])));
      }
      {
        Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[130])));
        MR_hl_field(MR_mktag(1), Pieces_6, 1) = ((MR_Box) (Var_31));
      }
    }
    else
    {
      MR_Word QualTailClassIds_12;
      MR_Word QualClassIds_13;
      MR_Word Var_20;
      MR_Word Var_21;

      QualTailClassIds_12 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (&check_hlds__check_typeclass_scalar_common_2[12]), TailClassIds_5);
      {
        QualClassIds_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), QualClassIds_13, 0) = ((MR_Box) (QualHeadClassId_9));
        MR_hl_field(MR_mktag(1), QualClassIds_13, 1) = ((MR_Box) (QualTailClassIds_12));
      }
      Var_21 = parse_tree__error_util__component_list_to_pieces_2_f_0((MR_String) "and", QualClassIds_13);
      Var_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_21, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[136])));
      Pieces_6 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[134])), Var_20);
    }
    return Pieces_6;
  }
}

static void MR_CALL 
check_hlds__check_typeclass__find_bad_class_ids_in_constraints_4_p_0(
  MR_Word ClassTable_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_BadClassIds_0_3,
  MR_Word * STATE_VARIABLE_BadClassIds_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_BadClassIds_4 = STATE_VARIABLE_BadClassIds_0_3;
    else
    {
      MR_Word C_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Cs_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_BadClassIds_15_15;
      MR_Word ClassSymName_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), C_10, (MR_Integer) 0))));
      MR_Word ArgTypes_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), C_10, (MR_Integer) 1))));
      MR_Integer Arity_24;
      MR_Word ClassId_25;
      MR_Box conv0_Var_26;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_BadClassIds_0_3;

      mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_23, &Arity_24);
      {
        ClassId_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ClassId_25, 0) = ((MR_Box) (ClassSymName_22));
        MR_hl_field(MR_mktag(0), ClassId_25, 1) = ((MR_Box) (Arity_24));
      }
      succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), ClassTable_1, ((MR_Box) (ClassId_25)), &conv0_Var_26);
      if (succeeded)
        succeeded = MR_TRUE;
      if (succeeded)
        STATE_VARIABLE_BadClassIds_15_15 = STATE_VARIABLE_BadClassIds_0_3;
      else
        mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), ((MR_Box) (ClassId_25)), STATE_VARIABLE_BadClassIds_0_3, &STATE_VARIABLE_BadClassIds_15_15);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Cs_11;
      next_value_of_STATE_VARIABLE_BadClassIds_0_3 = STATE_VARIABLE_BadClassIds_15_15;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_BadClassIds_0_3 = next_value_of_STATE_VARIABLE_BadClassIds_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__check_typeclass__check_pred_type_ambiguities_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_FunDeps_26;

    check_hlds__check_typeclass__acc_induced_fundeps_for_constraint_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_FunDeps_26);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_FunDeps_26));
  }
}

static void MR_CALL 
check_hlds__check_typeclass__check_pred_type_ambiguities_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word PredInfo_6,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20)
{
  {
    MR_Word TVarSet_8;
    MR_Word ArgTypes_9;
    MR_Word Constraints_10;
    MR_Word ArgTVars_11;
    MR_Word ConstrainedTVars_12;
    MR_Word UnivCs_13;
    MR_Word ExistCs_14;
    MR_Word UnboundTVars_15;
    MR_Word Var_21;
    MR_Word ClassTable_30;
    MR_Word InducedFunDeps_31;
    MR_Word FunDepsClosure_32;
    MR_Word UnboundTVarsSet_33;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_41;
    MR_Word Var_51;
    MR_Box conv1_InducedFunDeps_31;

    hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo_6, &TVarSet_8);
    hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_6, &ArgTypes_9);
    hlds__hlds_pred__pred_info_get_class_context_2_p_0(PredInfo_6, &Constraints_10);
    parse_tree__prog_type__type_vars_list_2_p_0(ArgTypes_9, &ArgTVars_11);
    parse_tree__prog_type__prog_constraints_get_tvars_2_p_0(Constraints_10, &ConstrainedTVars_12);
    UnivCs_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraints_10, (MR_Integer) 0))));
    ExistCs_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraints_10, (MR_Integer) 1))));
    Var_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), UnivCs_13, ExistCs_14);
    hlds__hlds_module__module_info_get_class_table_2_p_0(ModuleInfo_5, &ClassTable_30);
    {
      Var_41 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_41, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_6[5]));
      MR_hl_field(MR_mktag(0), Var_41, 1) = ((MR_Box) (check_hlds__check_typeclass__check_pred_type_ambiguities_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_41, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_41, 3) = ((MR_Box) (ClassTable_30));
      MR_hl_field(MR_mktag(0), Var_41, 4) = ((MR_Box) (TVarSet_8));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&check_hlds__check_typeclass_scalar_common_1[13]), Var_41, Var_21, ((MR_Box) ((MR_Unsigned) 0U)), &conv1_InducedFunDeps_31);
    InducedFunDeps_31 = ((MR_Word) (conv1_InducedFunDeps_31));
    Var_34 = mercury__set__list_to_set_1_f_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[5]), ArgTVars_11);
    Var_51 = mercury__set__init_0_f_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[5]));
    check_hlds__check_typeclass__fundeps_closure_loop_4_p_0(InducedFunDeps_31, Var_34, Var_51, &FunDepsClosure_32);
    Var_35 = mercury__set__list_to_set_1_f_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[5]), ConstrainedTVars_12);
    UnboundTVarsSet_33 = mercury__set__difference_2_f_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[5]), Var_35, FunDepsClosure_32);
    UnboundTVars_15 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[5]), UnboundTVarsSet_33);
    if ((UnboundTVars_15 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Specs_20 = STATE_VARIABLE_Specs_0_19;
    else
    {
      MR_Word Spec_18;

      Spec_18 = check_hlds__check_typeclass__report_unbound_tvars_in_pred_context_2_f_0(UnboundTVars_15, PredInfo_6);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_20 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_18));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_19));
      }
    }
  }
}

static MR_Box MR_CALL 
check_hlds__check_typeclass__report_unbound_tvars_in_pred_context_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__3_88;

    conv0_HeadVar__3_88 = check_hlds__check_typeclass__IntroducedFrom__func__report_unbound_tvars_in_pred_context__1900__1_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_88));
    return wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
check_hlds__check_typeclass__report_unbound_tvars_in_pred_context_2_f_0(
  MR_Word Vars_4,
  MR_Word PredInfo_5)
{
  {
    MR_Word Spec_6;
    MR_Word Context_7;
    MR_Word TVarSet_8;
    MR_Word ArgTypes_10;
    MR_String PredName_11;
    MR_Word Module_12;
    MR_Word SymName_13;
    MR_Integer Arity_14;
    MR_Word PredOrFunc_15;
    MR_Word VarsStrs_16;
    MR_Word PFSymNameArity_17;
    MR_Word Pieces0_18;
    MR_Word Pieces_19;
    MR_Word Msg_20;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_30;
    MR_Word Var_32;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_String Var_37;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_String Var_45;
    MR_Word Var_48;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_String Var_53;
    MR_Word Var_72;
    MR_Word Var_73;
    MR_Word Var_74;
    MR_Word Var_75;
    MR_Word Var_77;
    MR_Word Var_82;
    MR_Word Var_9;
    MR_Box conv1_Var_37;
    MR_Box conv2_Var_45;
    MR_Box conv3_Var_53;

    hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo_5, &Context_7);
    hlds__hlds_pred__pred_info_get_arg_types_4_p_0(PredInfo_5, &TVarSet_8, &Var_9, &ArgTypes_10);
    PredName_11 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_5);
    Module_12 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_5);
    {
      SymName_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), SymName_13, 0) = ((MR_Box) (Module_12));
      MR_hl_field(MR_mktag(1), SymName_13, 1) = ((MR_Box) (PredName_11));
    }
    Arity_14 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_10);
    PredOrFunc_15 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_5);
    {
      Var_21 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_9[7]));
      MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (check_hlds__check_typeclass__report_unbound_tvars_in_pred_context_2_f_0_1));
      MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (TVarSet_8));
    }
    VarsStrs_16 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[5]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_21, Vars_4);
    {
      PFSymNameArity_17 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), PFSymNameArity_17, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_15));
      MR_hl_field(MR_mktag(0), PFSymNameArity_17, 1) = ((MR_Box) (SymName_13));
      MR_hl_field(MR_mktag(0), PFSymNameArity_17, 2) = ((MR_Box) (Arity_14));
    }
    {
      Var_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_26, 0) = ((MR_Box) ((MR_Unsigned) 13U));
      MR_hl_field(MR_mktag(3), Var_26, 1) = ((MR_Box) (PFSymNameArity_17));
    }
    conv1_Var_37 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[5]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Vars_4, ((MR_Box) ((MR_String) "type variable")), ((MR_Box) ((MR_String) "type variables")));
    Var_37 = ((MR_String) (conv1_Var_37));
    {
      Var_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_36, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_36, 1) = ((MR_Box) (Var_37));
    }
    {
      Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[72])));
      MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (Var_35));
    }
    {
      Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (Var_32));
    }
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[42])));
      MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (Var_30));
    }
    {
      Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (Var_27));
    }
    {
      Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[71])));
      MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (Var_25));
    }
    Var_42 = parse_tree__error_util__list_to_quoted_pieces_1_f_0(VarsStrs_16);
    conv2_Var_45 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[5]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Vars_4, ((MR_Box) ((MR_String) "occurs")), ((MR_Box) ((MR_String) "occur")));
    Var_45 = ((MR_String) (conv2_Var_45));
    {
      Var_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_44, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_44, 1) = ((MR_Box) (Var_45));
    }
    conv3_Var_53 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[5]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Vars_4, ((MR_Box) ((MR_String) "is")), ((MR_Box) ((MR_String) "are")));
    Var_53 = ((MR_String) (conv3_Var_53));
    {
      Var_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_52, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_52, 1) = ((MR_Box) (Var_53));
    }
    {
      Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (Var_52));
      MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[75])));
    }
    {
      Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[73])));
      MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (Var_51));
    }
    {
      Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (Var_48));
    }
    Var_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_42, Var_43);
    Pieces0_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_22, Var_41);
    switch (PredOrFunc_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        Pieces_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Pieces0_18, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[77])));
        break;
      case (MR_Integer) 0:
        Pieces_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Pieces0_18, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[79])));
        break;
    }
    {
      Var_73 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_73, 0) = ((MR_Box) (Pieces_19));
    }
    Var_77 = check_hlds__check_typeclass__report_unbound_tvars_explanation_0_f_0();
    {
      Var_75 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_75, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(2), Var_75, 1) = ((MR_Box) (Var_77));
    }
    {
      Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (Var_75));
      MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (Var_73));
      MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) (Var_74));
    }
    {
      Msg_20 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Msg_20, 0) = ((MR_Box) (Context_7));
      MR_hl_field(MR_mktag(2), Msg_20, 1) = ((MR_Box) (Var_72));
    }
    {
      Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_82, 0) = ((MR_Box) (Msg_20));
      MR_hl_field(MR_mktag(1), Var_82, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_6 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_6, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.check_typeclass.report_unbound_tvars_in_pred_context\'/2"));
      MR_hl_field(MR_mktag(0), Spec_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_6, 2) = ((MR_Box) ((MR_Unsigned) 48U));
      MR_hl_field(MR_mktag(0), Spec_6, 3) = ((MR_Box) (Var_82));
    }
    return Spec_6;
  }
}

static MR_Word MR_CALL 
check_hlds__check_typeclass__report_unbound_tvars_explanation_0_f_0(void)
{
  return (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[129]));
}

static void MR_CALL 
check_hlds__check_typeclass__check_consistency_pair_2_7_p_0(
  MR_Word ClassId_8,
  MR_Word ClassDefn_9,
  MR_Word InstanceA_10,
  MR_Word InstanceB_11,
  MR_Word FunDep_12,
  MR_Word STATE_VARIABLE_Specs_0_31,
  MR_Word * STATE_VARIABLE_Specs_32)
{
  {
    MR_bool succeeded;
    MR_Word TVarSetA_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceA_10, (MR_Integer) 8))));
    MR_Word TVarSetB_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceB_11, (MR_Integer) 8))));
    MR_Word Renaming_17;
    MR_Word TypesA_18;
    MR_Word TypesB0_19;
    MR_Word TypesB_20;
    MR_Word Domain_21;
    MR_Word Range_22;
    MR_Word DomainA_23;
    MR_Word DomainB_24;
    MR_Word Var_16;
    MR_Word Subst_25;
    MR_Word Var_34;

    parse_tree__prog_data__tvarset_merge_renaming_4_p_0(TVarSetA_14, TVarSetB_15, &Var_16, &Renaming_17);
    TypesA_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceA_10, (MR_Integer) 1))));
    TypesB0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceB_11, (MR_Integer) 1))));
    parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(Renaming_17, TypesB0_19, &TypesB_20);
    Domain_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FunDep_12, (MR_Integer) 0))));
    Range_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FunDep_12, (MR_Integer) 1))));
    DomainA_23 = hlds__hlds_class__restrict_list_elements_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Domain_21, TypesA_18);
    DomainB_24 = hlds__hlds_class__restrict_list_elements_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Domain_21, TypesB_20);
    Var_34 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[5]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0));
    succeeded = parse_tree__prog_type__type_unify_list_5_p_0(DomainA_23, DomainB_24, (MR_Word) ((MR_Unsigned) 0U), Var_34, &Subst_25);
    if (succeeded)
    {
      MR_Word RangeA0_26;
      MR_Word RangeB0_27;
      MR_Word RangeA_28;
      MR_Word RangeB_29;

      RangeA0_26 = hlds__hlds_class__restrict_list_elements_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Range_22, TypesA_18);
      RangeB0_27 = hlds__hlds_class__restrict_list_elements_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Range_22, TypesB_20);
      parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_p_0(Subst_25, RangeA0_26, &RangeA_28);
      parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_p_0(Subst_25, RangeB0_27, &RangeB_29);
      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[15]), ((MR_Box) (RangeA_28)), ((MR_Box) (RangeB_29)));
      if (succeeded)
        *STATE_VARIABLE_Specs_32 = STATE_VARIABLE_Specs_0_31;
      else
      {
        MR_Word Spec_30;

        Spec_30 = check_hlds__check_typeclass__report_consistency_error_5_f_0(ClassId_8, ClassDefn_9, InstanceA_10, InstanceB_11, FunDep_12);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Specs_32 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_30));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_31));
        }
      }
    }
    else
      *STATE_VARIABLE_Specs_32 = STATE_VARIABLE_Specs_0_31;
  }
}

static MR_Word MR_CALL 
check_hlds__check_typeclass__report_consistency_error_5_f_0(
  MR_Word ClassId_7,
  MR_Word ClassDefn_8,
  MR_Word InstanceA_9,
  MR_Word InstanceB_10,
  MR_Word FunDep_11)
{
  {
    MR_Word Spec_12;
    MR_Word Params_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_8, (MR_Integer) 4))));
    MR_Word TVarSet_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_8, (MR_Integer) 8))));
    MR_Word ContextA_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceA_9, (MR_Integer) 4))));
    MR_Word ContextB_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceB_10, (MR_Integer) 4))));
    MR_Word Domain_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FunDep_11, (MR_Integer) 0))));
    MR_Word Range_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FunDep_11, (MR_Integer) 1))));
    MR_Word DomainParams_19;
    MR_Word RangeParams_20;
    MR_String Domains_21;
    MR_String Ranges_22;
    MR_Word PiecesA_23;
    MR_Word MsgA_25;
    MR_Word MsgB_26;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_String Var_36;
    MR_String Var_38;
    MR_String Var_39;
    MR_String Var_41;
    MR_Word Var_54;
    MR_Word Var_63;
    MR_Word Var_64;

    DomainParams_19 = hlds__hlds_class__restrict_list_elements_2_f_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[5]), Domain_17, Params_13);
    RangeParams_20 = hlds__hlds_class__restrict_list_elements_2_f_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[5]), Range_18, Params_13);
    Domains_21 = parse_tree__parse_tree_out_term__mercury_vars_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TVarSet_14, DomainParams_19);
    Ranges_22 = parse_tree__parse_tree_out_term__mercury_vars_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TVarSet_14, RangeParams_20);
    {
      Var_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_30, 0) = ((MR_Box) ((MR_Unsigned) 22U));
      MR_hl_field(MR_mktag(3), Var_30, 1) = ((MR_Box) (ClassId_7));
    }
    Var_41 = mercury__string__f_43_43_2_f_0(Ranges_22, (MR_String) ")");
    Var_39 = mercury__string__f_43_43_2_f_0((MR_String) " -> ", Var_41);
    Var_38 = mercury__string__f_43_43_2_f_0(Domains_21, Var_39);
    Var_36 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_38);
    {
      Var_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_35, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_35, 1) = ((MR_Box) (Var_36));
    }
    {
      Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[37])));
    }
    {
      Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[68])));
      MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (Var_34));
    }
    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_31));
    }
    {
      PiecesA_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), PiecesA_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[67])));
      MR_hl_field(MR_mktag(1), PiecesA_23, 1) = ((MR_Box) (Var_29));
    }
    {
      MsgA_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), MsgA_25, 0) = ((MR_Box) (ContextA_15));
      MR_hl_field(MR_mktag(0), MsgA_25, 1) = ((MR_Box) (PiecesA_23));
    }
    {
      Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (ContextB_16));
    }
    {
      MsgB_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MsgB_26, 0) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(3), MsgB_26, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), MsgB_26, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), MsgB_26, 3) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[165])));
    }
    {
      Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (MsgB_26));
      MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (MsgA_25));
      MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) (Var_64));
    }
    {
      Spec_12 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_12, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.check_typeclass.report_consistency_error\'/5"));
      MR_hl_field(MR_mktag(0), Spec_12, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_12, 2) = ((MR_Box) ((MR_Unsigned) 40U));
      MR_hl_field(MR_mktag(0), Spec_12, 3) = ((MR_Box) (Var_63));
    }
    return Spec_12;
  }
}

static void MR_CALL 
check_hlds__check_typeclass__check_consistency_pair_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Specs_32;

    check_hlds__check_typeclass__check_consistency_pair_2_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Specs_32);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_32));
  }
}

static void MR_CALL 
check_hlds__check_typeclass__check_consistency_pair_7_p_0(
  MR_Word ClassId_8,
  MR_Word ClassDefn_9,
  MR_Word FunDeps_10,
  MR_Word InstanceA_11,
  MR_Word InstanceB_12,
  MR_Word STATE_VARIABLE_Specs_0_14,
  MR_Word * STATE_VARIABLE_Specs_15)
{
  {
    MR_bool succeeded;
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceA_11, (MR_Integer) 0))));
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceB_12, (MR_Integer) 0))));

    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Var_16, Var_53);
    if (succeeded)
    {
      Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceA_11, (MR_Integer) 3))));
      Var_17 = hlds__status__instance_status_is_imported_1_f_0(Var_18);
      succeeded = (Var_17 == (MR_Integer) 1);
    }
    if (succeeded)
      *STATE_VARIABLE_Specs_15 = STATE_VARIABLE_Specs_0_14;
    else
    {
      MR_Word Var_19;
      MR_Box conv1_STATE_VARIABLE_Specs_15;

      {
        Var_19 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_14[1]));
        MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) (check_hlds__check_typeclass__check_consistency_pair_7_p_0_1));
        MR_hl_field(MR_mktag(0), Var_19, 2) = ((MR_Box) ((MR_Integer) 4));
        MR_hl_field(MR_mktag(0), Var_19, 3) = ((MR_Box) (ClassId_8));
        MR_hl_field(MR_mktag(0), Var_19, 4) = ((MR_Box) (ClassDefn_9));
        MR_hl_field(MR_mktag(0), Var_19, 5) = ((MR_Box) (InstanceA_11));
        MR_hl_field(MR_mktag(0), Var_19, 6) = ((MR_Box) (InstanceB_12));
      }
      mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_fundep_0), (MR_Word) (&check_hlds__check_typeclass_scalar_common_1[1]), Var_19, FunDeps_10, ((MR_Box) (STATE_VARIABLE_Specs_0_14)), &conv1_STATE_VARIABLE_Specs_15);
      *STATE_VARIABLE_Specs_15 = ((MR_Word) (conv1_STATE_VARIABLE_Specs_15));
    }
  }
}

static void MR_CALL 
check_hlds__check_typeclass__check_coverage_for_instance_defn_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_FunDeps_26;

    check_hlds__check_typeclass__acc_induced_fundeps_for_constraint_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_FunDeps_26);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_FunDeps_26));
  }
}

static void MR_CALL 
check_hlds__check_typeclass__check_coverage_for_instance_defn_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word ClassId_8,
  MR_Word InstanceDefn_9,
  MR_Word FunDep_10,
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26)
{
  {
    MR_Word TVarSet_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn_9, (MR_Integer) 8))));
    MR_Word Types_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn_9, (MR_Integer) 1))));
    MR_Word Domain_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FunDep_10, (MR_Integer) 0))));
    MR_Word Range_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FunDep_10, (MR_Integer) 1))));
    MR_Word DomainTypes_16;
    MR_Word DomainVars_17;
    MR_Word RangeTypes_18;
    MR_Word RangeVars_19;
    MR_Word Constraints_20;
    MR_Word UnboundVars_21;
    MR_Word ClassTable_62;
    MR_Word InducedFunDeps_63;
    MR_Word FunDepsClosure_64;
    MR_Word UnboundTVarsSet_65;
    MR_Word Var_66;
    MR_Word Var_67;
    MR_Word Var_73;
    MR_Word Var_83;
    MR_Box conv1_InducedFunDeps_63;

    DomainTypes_16 = hlds__hlds_class__restrict_list_elements_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Domain_14, Types_13);
    parse_tree__prog_type__type_vars_list_2_p_0(DomainTypes_16, &DomainVars_17);
    RangeTypes_18 = hlds__hlds_class__restrict_list_elements_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Range_15, Types_13);
    parse_tree__prog_type__type_vars_list_2_p_0(RangeTypes_18, &RangeVars_19);
    Constraints_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn_9, (MR_Integer) 5))));
    hlds__hlds_module__module_info_get_class_table_2_p_0(ModuleInfo_7, &ClassTable_62);
    {
      Var_73 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_73, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_6[5]));
      MR_hl_field(MR_mktag(0), Var_73, 1) = ((MR_Box) (check_hlds__check_typeclass__check_coverage_for_instance_defn_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_73, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_73, 3) = ((MR_Box) (ClassTable_62));
      MR_hl_field(MR_mktag(0), Var_73, 4) = ((MR_Box) (TVarSet_12));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&check_hlds__check_typeclass_scalar_common_1[13]), Var_73, Constraints_20, ((MR_Box) ((MR_Unsigned) 0U)), &conv1_InducedFunDeps_63);
    InducedFunDeps_63 = ((MR_Word) (conv1_InducedFunDeps_63));
    Var_66 = mercury__set__list_to_set_1_f_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[5]), DomainVars_17);
    Var_83 = mercury__set__init_0_f_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[5]));
    check_hlds__check_typeclass__fundeps_closure_loop_4_p_0(InducedFunDeps_63, Var_66, Var_83, &FunDepsClosure_64);
    Var_67 = mercury__set__list_to_set_1_f_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[5]), RangeVars_19);
    UnboundTVarsSet_65 = mercury__set__difference_2_f_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[5]), Var_67, FunDepsClosure_64);
    UnboundVars_21 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[5]), UnboundTVarsSet_65);
    if ((UnboundVars_21 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Specs_26 = STATE_VARIABLE_Specs_0_25;
    else
    {
      MR_Word Spec_24;

      Spec_24 = check_hlds__check_typeclass__report_coverage_error_3_f_0(ClassId_8, InstanceDefn_9, UnboundVars_21);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_26 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_24));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_25));
      }
    }
  }
}

static void MR_CALL 
check_hlds__check_typeclass__fundeps_closure_loop_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_FunDeps_12;
    MR_Word conv1_STATE_VARIABLE_Vars_14;

    check_hlds__check_typeclass__collect_determined_vars_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_FunDeps_12, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_Vars_14);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_FunDeps_12));
    *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_Vars_14));
  }
}

static MR_Box MR_CALL 
check_hlds__check_typeclass__fundeps_closure_loop_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    conv0_HeadVar__3_3 = check_hlds__check_typeclass__remove_vars_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
check_hlds__check_typeclass__fundeps_closure_loop_4_p_0(
  MR_Word FunDeps0_5,
  MR_Word NewVars0_6,
  MR_Word Result0_7,
  MR_Word * Result_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[5]), NewVars0_6);
    if (succeeded)
      *Result_8 = Result0_7;
    else
    {
      MR_Word Result1_9;
      MR_Word FunDeps1_10;
      MR_Word FunDeps_11;
      MR_Word NewVars_12;
      MR_Word Var_13;
      MR_Word Var_16;
      MR_Box conv4_FunDeps_11;
      MR_Box conv3_NewVars_12;
      MR_Word next_value_of_FunDeps0_5;
      MR_Word next_value_of_NewVars0_6;
      MR_Word next_value_of_Result0_7;

      Result1_9 = mercury__set__union_2_f_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[5]), Result0_7, NewVars0_6);
      {
        Var_13 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_13, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_9[8]));
        MR_hl_field(MR_mktag(0), Var_13, 1) = ((MR_Box) (check_hlds__check_typeclass__fundeps_closure_loop_4_p_0_1));
        MR_hl_field(MR_mktag(0), Var_13, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_13, 3) = ((MR_Box) (NewVars0_6));
      }
      FunDeps1_10 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__check_typeclass__check_hlds__check_typeclass__type_ctor_info_induced_fundep_0), (MR_Word) (&check_hlds__check_typeclass__check_hlds__check_typeclass__type_ctor_info_induced_fundep_0), Var_13, FunDeps0_5);
      Var_16 = mercury__set__init_0_f_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[5]));
      mercury__list__foldl2_6_p_0((MR_Word) (&check_hlds__check_typeclass__check_hlds__check_typeclass__type_ctor_info_induced_fundep_0), (MR_Word) (&check_hlds__check_typeclass_scalar_common_1[13]), (MR_Word) (&check_hlds__check_typeclass_scalar_common_1[14]), (MR_Word) (&check_hlds__check_typeclass_scalar_common_2[11]), FunDeps1_10, ((MR_Box) ((MR_Unsigned) 0U)), &conv4_FunDeps_11, ((MR_Box) (Var_16)), &conv3_NewVars_12);
      FunDeps_11 = ((MR_Word) (conv4_FunDeps_11));
      NewVars_12 = ((MR_Word) (conv3_NewVars_12));
      // direct tailcall eliminated
      ;
      next_value_of_FunDeps0_5 = FunDeps_11;
      next_value_of_NewVars0_6 = NewVars_12;
      next_value_of_Result0_7 = Result1_9;
      FunDeps0_5 = next_value_of_FunDeps0_5;
      NewVars0_6 = next_value_of_NewVars0_6;
      Result0_7 = next_value_of_Result0_7;
      continue;
    }
    break;
  }
}

static MR_Box MR_CALL 
check_hlds__check_typeclass__report_coverage_error_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__3_78;

    conv0_HeadVar__3_78 = check_hlds__check_typeclass__IntroducedFrom__func__report_coverage_error__1613__1_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_78));
    return wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
check_hlds__check_typeclass__report_coverage_error_3_f_0(
  MR_Word ClassId_5,
  MR_Word InstanceDefn_6,
  MR_Word Vars_7)
{
  {
    MR_Word Spec_8;
    MR_Word TVarSet_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn_6, (MR_Integer) 8))));
    MR_Word VarsStrs_10;
    MR_Word Pieces_11;
    MR_Word Context_12;
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_22;
    MR_Word Var_24;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_String Var_29;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_String Var_37;
    MR_Word Var_40;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_String Var_45;
    MR_Box conv1_Var_29;
    MR_Box conv2_Var_37;
    MR_Box conv3_Var_45;

    {
      Var_13 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_13, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_9[7]));
      MR_hl_field(MR_mktag(0), Var_13, 1) = ((MR_Box) (check_hlds__check_typeclass__report_coverage_error_3_f_0_1));
      MR_hl_field(MR_mktag(0), Var_13, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_13, 3) = ((MR_Box) (TVarSet_9));
    }
    VarsStrs_10 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[5]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_13, Vars_7);
    {
      Var_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_18, 0) = ((MR_Box) ((MR_Unsigned) 23U));
      MR_hl_field(MR_mktag(3), Var_18, 1) = ((MR_Box) (ClassId_5));
    }
    conv1_Var_29 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[5]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Vars_7, ((MR_Box) ((MR_String) "type variable")), ((MR_Box) ((MR_String) "type variables")));
    Var_29 = ((MR_String) (conv1_Var_29));
    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_28, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_28, 1) = ((MR_Box) (Var_29));
    }
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[63])));
      MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (Var_27));
    }
    {
      Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (Var_24));
    }
    {
      Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[42])));
      MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (Var_22));
    }
    {
      Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (Var_19));
    }
    {
      Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[62])));
      MR_hl_field(MR_mktag(1), Var_14, 1) = ((MR_Box) (Var_17));
    }
    Var_34 = parse_tree__error_util__list_to_quoted_pieces_1_f_0(VarsStrs_10);
    conv2_Var_37 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[5]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Vars_7, ((MR_Box) ((MR_String) "occurs")), ((MR_Box) ((MR_String) "occur")));
    Var_37 = ((MR_String) (conv2_Var_37));
    {
      Var_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_36, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_36, 1) = ((MR_Box) (Var_37));
    }
    conv3_Var_45 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[5]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Vars_7, ((MR_Box) ((MR_String) "is")), ((MR_Box) ((MR_String) "are")));
    Var_45 = ((MR_String) (conv3_Var_45));
    {
      Var_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_44, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_44, 1) = ((MR_Box) (Var_45));
    }
    {
      Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[66])));
    }
    {
      Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[64])));
      MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (Var_43));
    }
    {
      Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (Var_40));
    }
    Var_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_34, Var_35);
    Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_14, Var_33);
    Context_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn_6, (MR_Integer) 4))));
    {
      Spec_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_8, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.check_typeclass.report_coverage_error\'/3"));
      MR_hl_field(MR_mktag(1), Spec_8, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_8, 2) = ((MR_Box) ((MR_Unsigned) 48U));
      MR_hl_field(MR_mktag(1), Spec_8, 3) = ((MR_Box) (Context_12));
      MR_hl_field(MR_mktag(1), Spec_8, 4) = ((MR_Box) (Pieces_11));
    }
    return Spec_8;
  }
}

static MR_bool MR_CALL 
check_hlds__check_typeclass__is_concrete_or_imported_instance_defn_1_p_0(
  MR_Word InstanceDefn_2)
{
  {
    MR_bool succeeded;

    {
      MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn_2, (MR_Integer) 6))));

      succeeded = (Var_16 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
      }
    }
    if (!(succeeded))
    {
      MR_Word Var_3;
      MR_Word Var_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn_2, (MR_Integer) 3))));

      Var_3 = hlds__status__instance_status_is_imported_1_f_0(Var_4);
      succeeded = (Var_3 == (MR_Integer) 1);
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__check_typeclass__is_concrete_instance_defn_1_p_0(
  MR_Word InstanceDefn_2)
{
  {
    MR_bool succeeded;
    MR_Word Var_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn_2, (MR_Integer) 6))));

    succeeded = (Var_4 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__check_typeclass__check_fundeps_for_class_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__check_typeclass__is_concrete_instance_defn_1_p_0(((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__check_typeclass__check_fundeps_for_class_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__check_typeclass__is_concrete_or_imported_instance_defn_1_p_0(((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__check_typeclass__check_fundeps_for_class_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word ClassId_6,
  MR_Word STATE_VARIABLE_Specs_0_16,
  MR_Word * STATE_VARIABLE_Specs_17)
{
  {
    MR_bool succeeded;
    MR_Word ClassTable_8;
    MR_Word ClassDefn_9;
    MR_Word InstanceTable_10;
    MR_Word InstanceDefns_11;
    MR_Word FunDeps_12;
    MR_Word Globals_13;
    MR_Word IntermodOpt_14;
    MR_Word ConcreteInstanceDefns_15;
    MR_Word STATE_VARIABLE_Specs_18_18;
    MR_Box conv0_ClassDefn_9;
    MR_Box conv1_InstanceDefns_11;

    hlds__hlds_module__module_info_get_class_table_2_p_0(ModuleInfo_5, &ClassTable_8);
    mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), ClassTable_8, ((MR_Box) (ClassId_6)), &conv0_ClassDefn_9);
    ClassDefn_9 = ((MR_Word) (conv0_ClassDefn_9));
    hlds__hlds_module__module_info_get_instance_table_2_p_0(ModuleInfo_5, &InstanceTable_10);
    mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&check_hlds__check_typeclass_scalar_common_1[0]), InstanceTable_10, ((MR_Box) (ClassId_6)), &conv1_InstanceDefns_11);
    InstanceDefns_11 = ((MR_Word) (conv1_InstanceDefns_11));
    FunDeps_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_9, (MR_Integer) 2))));
    check_hlds__check_typeclass__check_coverage_for_instance_defns_6_p_0(ModuleInfo_5, ClassId_6, InstanceDefns_11, FunDeps_12, STATE_VARIABLE_Specs_0_16, &STATE_VARIABLE_Specs_18_18);
    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_5, &Globals_13);
    libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 495, &IntermodOpt_14);
    switch (IntermodOpt_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        mercury__list__filter_3_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0), (MR_Word) (&check_hlds__check_typeclass_scalar_common_2[9]), InstanceDefns_11, &ConcreteInstanceDefns_15);
        break;
      case (MR_Integer) 1:
        mercury__list__filter_3_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0), (MR_Word) (&check_hlds__check_typeclass_scalar_common_2[10]), InstanceDefns_11, &ConcreteInstanceDefns_15);
        break;
    }
    check_hlds__check_typeclass__check_consistency_6_p_0(ClassId_6, ClassDefn_9, ConcreteInstanceDefns_15, FunDeps_12, STATE_VARIABLE_Specs_18_18, STATE_VARIABLE_Specs_17);
  }
}

static void MR_CALL 
check_hlds__check_typeclass__check_consistency_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Specs_15;

    check_hlds__check_typeclass__check_consistency_pair_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Specs_15);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_15));
  }
}

static void MR_CALL 
check_hlds__check_typeclass__check_consistency_6_p_0(
  MR_Word ClassId_1,
  MR_Word ClassDefn_2,
  MR_Word HeadVar__3_3,
  MR_Word FunDeps_4,
  MR_Word STATE_VARIABLE_Specs_0_5,
  MR_Word * STATE_VARIABLE_Specs_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Specs_6 = STATE_VARIABLE_Specs_0_5;
    else
    {
      MR_Word Instance_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Instances_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word Var_21;
      MR_Word STATE_VARIABLE_Specs_22_22;
      MR_Box conv1_STATE_VARIABLE_Specs_22_22;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_5;

      {
        Var_21 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_14[0]));
        MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (check_hlds__check_typeclass__check_consistency_6_p_0_1));
        MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) ((MR_Integer) 4));
        MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (ClassId_1));
        MR_hl_field(MR_mktag(0), Var_21, 4) = ((MR_Box) (ClassDefn_2));
        MR_hl_field(MR_mktag(0), Var_21, 5) = ((MR_Box) (FunDeps_4));
        MR_hl_field(MR_mktag(0), Var_21, 6) = ((MR_Box) (Instance_15));
      }
      mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0), (MR_Word) (&check_hlds__check_typeclass_scalar_common_1[1]), Var_21, Instances_16, ((MR_Box) (STATE_VARIABLE_Specs_0_5)), &conv1_STATE_VARIABLE_Specs_22_22);
      STATE_VARIABLE_Specs_22_22 = ((MR_Word) (conv1_STATE_VARIABLE_Specs_22_22));
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Instances_16;
      next_value_of_STATE_VARIABLE_Specs_0_5 = STATE_VARIABLE_Specs_22_22;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_Specs_0_5 = next_value_of_STATE_VARIABLE_Specs_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__check_typeclass__check_coverage_for_instance_defns_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Specs_26;

    check_hlds__check_typeclass__check_coverage_for_instance_defn_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Specs_26);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_26));
  }
}

static void MR_CALL 
check_hlds__check_typeclass__check_coverage_for_instance_defns_6_p_0(
  MR_Word ModuleInfo_1,
  MR_Word ClassId_2,
  MR_Word HeadVar__3_3,
  MR_Word FunDeps_4,
  MR_Word STATE_VARIABLE_Specs_0_5,
  MR_Word * STATE_VARIABLE_Specs_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Specs_6 = STATE_VARIABLE_Specs_0_5;
    else
    {
      MR_Word InstanceDefn_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word InstanceDefns_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word Var_21;
      MR_Word STATE_VARIABLE_Specs_22_22;
      MR_Box conv1_STATE_VARIABLE_Specs_22_22;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_5;

      {
        Var_21 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_5[3]));
        MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (check_hlds__check_typeclass__check_coverage_for_instance_defns_6_p_0_1));
        MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (ModuleInfo_1));
        MR_hl_field(MR_mktag(0), Var_21, 4) = ((MR_Box) (ClassId_2));
        MR_hl_field(MR_mktag(0), Var_21, 5) = ((MR_Box) (InstanceDefn_15));
      }
      mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_fundep_0), (MR_Word) (&check_hlds__check_typeclass_scalar_common_1[1]), Var_21, FunDeps_4, ((MR_Box) (STATE_VARIABLE_Specs_0_5)), &conv1_STATE_VARIABLE_Specs_22_22);
      STATE_VARIABLE_Specs_22_22 = ((MR_Word) (conv1_STATE_VARIABLE_Specs_22_22));
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = InstanceDefns_16;
      next_value_of_STATE_VARIABLE_Specs_0_5 = STATE_VARIABLE_Specs_22_22;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_Specs_0_5 = next_value_of_STATE_VARIABLE_Specs_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__check_typeclass__add_path_element_3_p_0(
  MR_Word ClassId_4,
  MR_Word STATE_VARIABLE_LaterLines_0_7,
  MR_Word * STATE_VARIABLE_LaterLines_8)
{
  {
    MR_Word Line_6;
    MR_Word Var_11;
    MR_Word Var_12;
    MR_Word Var_17;

    {
      Var_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_12, 0) = ((MR_Box) ((MR_Unsigned) 22U));
      MR_hl_field(MR_mktag(3), Var_12, 1) = ((MR_Box) (ClassId_4));
    }
    {
      Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_11, 0) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(1), Var_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[24])));
    }
    {
      Line_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Line_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[61])));
      MR_hl_field(MR_mktag(1), Line_6, 1) = ((MR_Box) (Var_11));
    }
    Var_17 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Line_6);
    *STATE_VARIABLE_LaterLines_8 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), STATE_VARIABLE_LaterLines_0_7, Var_17);
  }
}

static void MR_CALL 
check_hlds__check_typeclass__report_cyclic_classes_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_LaterLines_8;

    check_hlds__check_typeclass__add_path_element_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_LaterLines_8);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_LaterLines_8));
  }
}

static MR_Word MR_CALL 
check_hlds__check_typeclass__report_cyclic_classes_2_f_0(
  MR_Word ClassTable_4,
  MR_Word ClassPath_5)
{
  {
    MR_Word Spec_6;

    if ((ClassPath_5 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__require__unexpected_2_p_0((MR_String) "function \140check_hlds.check_typeclass.report_cyclic_classes\'/2", (MR_String) "empty cycle found.");
    else
    {
      MR_Word ClassId_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ClassPath_5, (MR_Integer) 0))));
      MR_Word Tail_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ClassPath_5, (MR_Integer) 1))));
      MR_Word Context_9;
      MR_Word StartPieces_10;
      MR_Word LaterLinesCord_11;
      MR_Word Pieces_12;
      MR_Word Var_13;
      MR_Word Var_16;
      MR_Word Var_18;
      MR_Word Var_19;
      MR_Word Var_24;
      MR_Word Var_25;
      MR_Box conv0_Var_13;
      MR_Box conv2_LaterLinesCord_11;

      conv0_Var_13 = mercury__map__lookup_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), ClassTable_4, ((MR_Box) (ClassId_7)));
      Var_13 = ((MR_Word) (conv0_Var_13));
      Context_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 9))));
      {
        Var_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_19, 0) = ((MR_Box) ((MR_Unsigned) 22U));
        MR_hl_field(MR_mktag(3), Var_19, 1) = ((MR_Box) (ClassId_7));
      }
      {
        Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (Var_19));
        MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[24])));
      }
      {
        Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) (Var_18));
      }
      {
        StartPieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), StartPieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[60])));
        MR_hl_field(MR_mktag(1), StartPieces_10, 1) = ((MR_Box) (Var_16));
      }
      Var_24 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0));
      mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&check_hlds__check_typeclass_scalar_common_1[11]), (MR_Word) (&check_hlds__check_typeclass_scalar_common_2[8]), Tail_8, ((MR_Box) (Var_24)), &conv2_LaterLinesCord_11);
      LaterLinesCord_11 = ((MR_Word) (conv2_LaterLinesCord_11));
      Var_25 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), LaterLinesCord_11);
      Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), StartPieces_10, Var_25);
      {
        Spec_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_6, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.check_typeclass.report_cyclic_classes\'/2"));
        MR_hl_field(MR_mktag(1), Spec_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_6, 2) = ((MR_Box) ((MR_Unsigned) 40U));
        MR_hl_field(MR_mktag(1), Spec_6, 3) = ((MR_Box) (Context_9));
        MR_hl_field(MR_mktag(1), Spec_6, 4) = ((MR_Box) (Pieces_12));
      }
    }
    return Spec_6;
  }
}

static void MR_CALL 
check_hlds__check_typeclass__find_cycles_3_10_p_0(
  MR_Word Path_11,
  MR_Word Constraint_12,
  MR_Word STATE_VARIABLE_ClassTable_0_25,
  MR_Word * STATE_VARIABLE_ClassTable_26,
  MR_Word STATE_VARIABLE_Visited_0_27,
  MR_Word * STATE_VARIABLE_Visited_28,
  MR_Word STATE_VARIABLE_Cycles_0_29,
  MR_Word * STATE_VARIABLE_Cycles_30,
  MR_Word STATE_VARIABLE_Ancestors_0_31,
  MR_Word * STATE_VARIABLE_Ancestors_32)
{
  {
    MR_Word Name_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraint_12, (MR_Integer) 0))));
    MR_Word Args_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraint_12, (MR_Integer) 1))));
    MR_Integer Arity_19;
    MR_Word ClassId_20;
    MR_Word Params_21;
    MR_Word NewAncestors0_22;
    MR_Word Binding_23;
    MR_Word NewAncestors_24;

    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Args_18, &Arity_19);
    {
      ClassId_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ClassId_20, 0) = ((MR_Box) (Name_17));
      MR_hl_field(MR_mktag(0), ClassId_20, 1) = ((MR_Box) (Arity_19));
    }
    check_hlds__check_typeclass__find_cycles_2_10_p_0(Path_11, ClassId_20, &Params_21, &NewAncestors0_22, STATE_VARIABLE_ClassTable_0_25, STATE_VARIABLE_ClassTable_26, STATE_VARIABLE_Visited_0_27, STATE_VARIABLE_Visited_28, STATE_VARIABLE_Cycles_0_29, STATE_VARIABLE_Cycles_30);
    mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[5]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Params_21, Args_18, &Binding_23);
    parse_tree__prog_type_subst__apply_subst_to_prog_constraint_list_3_p_0(Binding_23, NewAncestors0_22, &NewAncestors_24);
    mercury__list__append_3_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), NewAncestors_24, STATE_VARIABLE_Ancestors_0_31, STATE_VARIABLE_Ancestors_32);
  }
}

static void MR_CALL 
check_hlds__check_typeclass__find_cycles_8_p_0(
  MR_Word Path_9,
  MR_Word ClassId_10,
  MR_Word STATE_VARIABLE_ClassTable_0_16,
  MR_Word * STATE_VARIABLE_ClassTable_17,
  MR_Word STATE_VARIABLE_Visited_0_18,
  MR_Word * STATE_VARIABLE_Visited_19,
  MR_Word STATE_VARIABLE_Cycles_0_20,
  MR_Word * STATE_VARIABLE_Cycles_21)
{
  {
    MR_Word Var_14;
    MR_Word Var_15;

    check_hlds__check_typeclass__find_cycles_2_10_p_0(Path_9, ClassId_10, &Var_14, &Var_15, STATE_VARIABLE_ClassTable_0_16, STATE_VARIABLE_ClassTable_17, STATE_VARIABLE_Visited_0_18, STATE_VARIABLE_Visited_19, STATE_VARIABLE_Cycles_0_20, STATE_VARIABLE_Cycles_21);
  }
}

static void MR_CALL 
check_hlds__check_typeclass__find_cycles_2_10_p_0_1(
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_STATE_VARIABLE_ClassTable_26;
    MR_Word conv3_STATE_VARIABLE_Visited_28;
    MR_Word conv2_STATE_VARIABLE_Cycles_30;
    MR_Word conv1_STATE_VARIABLE_Ancestors_32;

    check_hlds__check_typeclass__find_cycles_3_10_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_ClassTable_26, ((MR_Word) (wrapper_arg_4)), &conv3_STATE_VARIABLE_Visited_28, ((MR_Word) (wrapper_arg_6)), &conv2_STATE_VARIABLE_Cycles_30, ((MR_Word) (wrapper_arg_8)), &conv1_STATE_VARIABLE_Ancestors_32);
    *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_ClassTable_26));
    *wrapper_arg_5 = ((MR_Box) (conv3_STATE_VARIABLE_Visited_28));
    *wrapper_arg_7 = ((MR_Box) (conv2_STATE_VARIABLE_Cycles_30));
    *wrapper_arg_9 = ((MR_Box) (conv1_STATE_VARIABLE_Ancestors_32));
  }
}

static void MR_CALL 
check_hlds__check_typeclass__find_cycles_2_10_p_0(
  MR_Word Path_11,
  MR_Word ClassId_12,
  MR_Word * Params_13,
  MR_Word * Ancestors_14,
  MR_Word STATE_VARIABLE_ClassTable_0_30,
  MR_Word * STATE_VARIABLE_ClassTable_31,
  MR_Word STATE_VARIABLE_Visited_0_32,
  MR_Word * STATE_VARIABLE_Visited_33,
  MR_Word STATE_VARIABLE_Cycles_0_34,
  MR_Word * STATE_VARIABLE_Cycles_35)
{
  {
    MR_bool succeeded;
    MR_Word ClassDefn0_18;
    MR_Word Kinds_19;
    MR_Box conv0_ClassDefn0_18;

    conv0_ClassDefn0_18 = mercury__map__lookup_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), STATE_VARIABLE_ClassTable_0_30, ((MR_Box) (ClassId_12)));
    ClassDefn0_18 = ((MR_Word) (conv0_ClassDefn0_18));
    *Params_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn0_18, (MR_Integer) 4))));
    Kinds_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn0_18, (MR_Integer) 5))));
    succeeded = mercury__set__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), ((MR_Box) (ClassId_12)), STATE_VARIABLE_Visited_0_32);
    if (succeeded)
    {
      MR_Word Cycle_20;
      MR_Word Var_36;

      {
        Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (ClassId_12));
        MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      succeeded = check_hlds__check_typeclass__find_cycle_4_p_0(ClassId_12, Path_11, Var_36, &Cycle_20);
      if (succeeded)
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Cycles_35 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Cycle_20));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Cycles_0_34));
        }
      else
        *STATE_VARIABLE_Cycles_35 = STATE_VARIABLE_Cycles_0_34;
      *Ancestors_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn0_18, (MR_Integer) 3))));
      *STATE_VARIABLE_Visited_33 = STATE_VARIABLE_Visited_0_32;
      *STATE_VARIABLE_ClassTable_31 = STATE_VARIABLE_ClassTable_0_30;
    }
    else
    {
      MR_Word FunDeps_21;
      MR_Word Ancestors0_22;
      MR_Word Superclasses_28;
      MR_Word ClassDefn_29;
      MR_Word STATE_VARIABLE_Visited_39_39;
      MR_Word Var_42;
      MR_Word STATE_VARIABLE_ClassTable_43_43;
      MR_Word Var_46;
      MR_Box conv8_STATE_VARIABLE_ClassTable_43_43;
      MR_Box conv7_STATE_VARIABLE_Visited_33;
      MR_Box conv6_STATE_VARIABLE_Cycles_35;
      MR_Box conv5_Ancestors_14;
      MR_Word Var_98;
      MR_Word Var_99;
      MR_Word Var_100;
      MR_Word Var_102;
      MR_Word Var_103;
      MR_Word Var_104;
      MR_Word Var_105;
      MR_Word Var_106;
      MR_Word Var_107;
      MR_Word Var_108;

      mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), ((MR_Box) (ClassId_12)), STATE_VARIABLE_Visited_0_32, &STATE_VARIABLE_Visited_39_39);
      Superclasses_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn0_18, (MR_Integer) 1))));
      FunDeps_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn0_18, (MR_Integer) 2))));
      if ((FunDeps_21 == (MR_Word) ((MR_Unsigned) 0U)))
        Ancestors0_22 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word ClassName_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassId_12, (MR_Integer) 0))));
        MR_Word Args_27;
        MR_Word Var_40;

        parse_tree__prog_type__var_list_to_type_list_3_p_0(Kinds_19, *Params_13, &Args_27);
        {
          Var_40 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_40, 0) = ((MR_Box) (ClassName_25));
          MR_hl_field(MR_mktag(0), Var_40, 1) = ((MR_Box) (Args_27));
        }
        {
          Ancestors0_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Ancestors0_22, 0) = ((MR_Box) (Var_40));
          MR_hl_field(MR_mktag(1), Ancestors0_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      {
        Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (ClassId_12));
        MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (Path_11));
      }
      {
        Var_42 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_4[1]));
        MR_hl_field(MR_mktag(0), Var_42, 1) = ((MR_Box) (check_hlds__check_typeclass__find_cycles_2_10_p_0_1));
        MR_hl_field(MR_mktag(0), Var_42, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_42, 3) = ((MR_Box) (Var_46));
      }
      mercury__list__foldl4_10_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&check_hlds__check_typeclass_scalar_common_2[2]), (MR_Word) (&check_hlds__check_typeclass_scalar_common_1[7]), (MR_Word) (&check_hlds__check_typeclass_scalar_common_1[9]), (MR_Word) (&check_hlds__check_typeclass_scalar_common_1[10]), Var_42, Superclasses_28, ((MR_Box) (STATE_VARIABLE_ClassTable_0_30)), &conv8_STATE_VARIABLE_ClassTable_43_43, ((MR_Box) (STATE_VARIABLE_Visited_39_39)), &conv7_STATE_VARIABLE_Visited_33, ((MR_Box) (STATE_VARIABLE_Cycles_0_34)), &conv6_STATE_VARIABLE_Cycles_35, ((MR_Box) (Ancestors0_22)), &conv5_Ancestors_14);
      STATE_VARIABLE_ClassTable_43_43 = ((MR_Word) (conv8_STATE_VARIABLE_ClassTable_43_43));
      *STATE_VARIABLE_Visited_33 = ((MR_Word) (conv7_STATE_VARIABLE_Visited_33));
      *STATE_VARIABLE_Cycles_35 = ((MR_Word) (conv6_STATE_VARIABLE_Cycles_35));
      *Ancestors_14 = ((MR_Word) (conv5_Ancestors_14));
      Var_98 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn0_18, (MR_Integer) 0))));
      Var_99 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn0_18, (MR_Integer) 1))));
      Var_100 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn0_18, (MR_Integer) 2))));
      Var_102 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn0_18, (MR_Integer) 4))));
      Var_103 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn0_18, (MR_Integer) 5))));
      Var_104 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn0_18, (MR_Integer) 6))));
      Var_105 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn0_18, (MR_Integer) 7))));
      Var_106 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn0_18, (MR_Integer) 8))));
      Var_107 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn0_18, (MR_Integer) 9))));
      Var_108 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ClassDefn0_18, (MR_Integer) 10))) & (MR_Integer) 1);
      {
        ClassDefn_29 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ClassDefn_29, 0) = ((MR_Box) (Var_98));
        MR_hl_field(MR_mktag(0), ClassDefn_29, 1) = ((MR_Box) (Var_99));
        MR_hl_field(MR_mktag(0), ClassDefn_29, 2) = ((MR_Box) (Var_100));
        MR_hl_field(MR_mktag(0), ClassDefn_29, 3) = ((MR_Box) (*Ancestors_14));
        MR_hl_field(MR_mktag(0), ClassDefn_29, 4) = ((MR_Box) (Var_102));
        MR_hl_field(MR_mktag(0), ClassDefn_29, 5) = ((MR_Box) (Var_103));
        MR_hl_field(MR_mktag(0), ClassDefn_29, 6) = ((MR_Box) (Var_104));
        MR_hl_field(MR_mktag(0), ClassDefn_29, 7) = ((MR_Box) (Var_105));
        MR_hl_field(MR_mktag(0), ClassDefn_29, 8) = ((MR_Box) (Var_106));
        MR_hl_field(MR_mktag(0), ClassDefn_29, 9) = ((MR_Box) (Var_107));
        MR_hl_field(MR_mktag(0), ClassDefn_29, 10) = (MR_Box) ((MR_Unsigned) (Var_108));
      }
      mercury__map__det_update_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), ((MR_Box) (ClassId_12)), ((MR_Box) (ClassDefn_29)), STATE_VARIABLE_ClassTable_43_43, STATE_VARIABLE_ClassTable_31);
    }
  }
}

static MR_bool MR_CALL 
check_hlds__check_typeclass__find_cycle_4_p_0(
  MR_Word ClassId_5,
  MR_Word HeadVar__2_2,
  MR_Word Path0_8,
  MR_Word * Cycle_9)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Head_6;
    MR_Word Tail_7;
    MR_Word Path_10;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Head_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      Tail_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      {
        Path_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Path_10, 0) = ((MR_Box) (Head_6));
        MR_hl_field(MR_mktag(1), Path_10, 1) = ((MR_Box) (Path0_8));
      }
      succeeded = parse_tree__prog_data____Unify____class_id_0_0(ClassId_5, Head_6);
      if (succeeded)
      {
        *Cycle_9 = Path_10;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word next_value_of_HeadVar__2_2 = Tail_7;
        MR_Word next_value_of_Path0_8 = Path_10;

        // direct tailcall eliminated
        ;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        Path0_8 = next_value_of_Path0_8;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_1(
  void * env_ptr_arg)
{
  {
    struct check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_env_0_s * env_ptr = (struct check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_3(
  void * env_ptr_arg)
{
  {
    struct check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_env_0_s * env_ptr = (struct check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_env_0__ConcreteInstance_12 = ((MR_Word) ((env_ptr)->check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_env_0__conv0_ConcreteInstance_12));
    check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_2(env_ptr);
  }
}

static void MR_CALL 
check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_2(
  void * env_ptr_arg)
{
  {
    struct check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_env_0_s * env_ptr = (struct check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_env_0_s *) (env_ptr_arg);

    {
      MR_Word Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_env_0__ConcreteInstance_12, (MR_Integer) 0))));
      MR_Word Var_60;
      MR_Word Var_61;
      MR_Word Var_62;
      MR_Word Var_63;
      MR_Word Var_64;
      MR_Word Var_65;
      MR_Word Var_66;
      MR_Word Var_67;

      (env_ptr)->check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_env_0__ConcreteTypes_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_env_0__ConcreteInstance_12, (MR_Integer) 1))));
      Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_env_0__ConcreteInstance_12, (MR_Integer) 2))));
      Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_env_0__ConcreteInstance_12, (MR_Integer) 3))));
      Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_env_0__ConcreteInstance_12, (MR_Integer) 4))));
      Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_env_0__ConcreteInstance_12, (MR_Integer) 5))));
      Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_env_0__ConcreteInstance_12, (MR_Integer) 6))));
      Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_env_0__ConcreteInstance_12, (MR_Integer) 7))));
      Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_env_0__ConcreteInstance_12, (MR_Integer) 8))));
      Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_env_0__ConcreteInstance_12, (MR_Integer) 9))));
      (env_ptr)->check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_env_0__TypeInfo_89_89 = (MR_Word) (&check_hlds__check_typeclass_scalar_common_1[15]);
      (env_ptr)->check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((env_ptr)->check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_env_0__TypeInfo_89_89, ((MR_Box) ((env_ptr)->check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_env_0__ConcreteTypes_13)), ((MR_Box) ((env_ptr)->check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_env_0__AbstractTypes_10)));
      if ((env_ptr)->check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_env_0__succeeded)
        check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_1(env_ptr);
    }
  }
}

static void MR_CALL 
check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_4(
  void * env_ptr_arg)
{
  {
    struct check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_env_0_s * env_ptr = (struct check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_env_0__commit_0) == 0)
      {
        mercury__list__member_2_p_1((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0), &(env_ptr)->check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_env_0__conv0_ConcreteInstance_12, (env_ptr)->check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_env_0__ConcreteInstances_11, check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_3, env_ptr);
        (env_ptr)->check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0(
  MR_Word Concretes_6,
  MR_Word ClassId_7,
  MR_Word AbstractInstance_8,
  MR_Word STATE_VARIABLE_Specs_0_23,
  MR_Word * STATE_VARIABLE_Specs_24)
{
  {
    struct check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_env_0_s env;

    {
      MR_Word Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AbstractInstance_8, (MR_Integer) 0))));
      MR_Word Var_51;
      MR_Word Var_52;
      MR_Word Var_53;
      MR_Word Var_54;
      MR_Word Var_55;
      MR_Word Var_56;
      MR_Word Var_57;
      MR_Word Var_58;

      (env).check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_env_0__AbstractTypes_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AbstractInstance_8, (MR_Integer) 1))));
      Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AbstractInstance_8, (MR_Integer) 2))));
      Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AbstractInstance_8, (MR_Integer) 3))));
      Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AbstractInstance_8, (MR_Integer) 4))));
      Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AbstractInstance_8, (MR_Integer) 5))));
      Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AbstractInstance_8, (MR_Integer) 6))));
      Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AbstractInstance_8, (MR_Integer) 7))));
      Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AbstractInstance_8, (MR_Integer) 8))));
      Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AbstractInstance_8, (MR_Integer) 9))));
      (env).check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_env_0__succeeded = mercury__multi_map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0), Concretes_6, ((MR_Box) (ClassId_7)), &(env).check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_env_0__ConcreteInstances_11);
      if ((env).check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_env_0__succeeded)
      {
        check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_4(&env);
        if ((env).check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_env_0__succeeded)
          *STATE_VARIABLE_Specs_24 = STATE_VARIABLE_Specs_0_23;
        else
        {
          MR_Word ClassName_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassId_7, (MR_Integer) 0))));
          MR_String ClassNameString_17;
          MR_String AbstractTypesString_18;
          MR_String AbstractInstanceName_19;
          MR_Word Pieces_20;
          MR_Word AbstractInstanceContext_21;
          MR_Word Spec_22;
          MR_Word Var_25;
          MR_String Var_26;
          MR_String Var_28;
          MR_Word Var_32;
          MR_Word Var_35;
          MR_Word Var_36;
          MR_Integer Var_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ClassId_7, (MR_Integer) 1))));
          MR_Word Var_68;
          MR_Word Var_69;
          MR_Word Var_70;
          MR_Word Var_71;
          MR_Word Var_73;
          MR_Word Var_74;
          MR_Word Var_75;
          MR_Word Var_76;

          ClassNameString_17 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ClassName_15);
          Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AbstractInstance_8, (MR_Integer) 0))));
          Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AbstractInstance_8, (MR_Integer) 1))));
          Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AbstractInstance_8, (MR_Integer) 2))));
          Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AbstractInstance_8, (MR_Integer) 3))));
          AbstractInstanceContext_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AbstractInstance_8, (MR_Integer) 4))));
          Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AbstractInstance_8, (MR_Integer) 5))));
          Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AbstractInstance_8, (MR_Integer) 6))));
          Var_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AbstractInstance_8, (MR_Integer) 7))));
          Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AbstractInstance_8, (MR_Integer) 8))));
          Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AbstractInstance_8, (MR_Integer) 9))));
          AbstractTypesString_18 = parse_tree__mercury_to_mercury__mercury_type_list_to_string_2_f_0(Var_25, (env).check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_env_0__AbstractTypes_10);
          Var_28 = mercury__string__f_43_43_2_f_0(AbstractTypesString_18, (MR_String) ")");
          Var_26 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_28);
          AbstractInstanceName_19 = mercury__string__f_43_43_2_f_0(ClassNameString_17, Var_26);
          {
            Var_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_36, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), Var_36, 1) = ((MR_Box) (AbstractInstanceName_19));
          }
          {
            Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Var_36));
            MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[59])));
          }
          {
            Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[55])));
            MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (Var_35));
          }
          {
            Pieces_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[54])));
            MR_hl_field(MR_mktag(1), Pieces_20, 1) = ((MR_Box) (Var_32));
          }
          {
            Spec_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_22, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.check_typeclass.check_for_corresponding_instances_2\'/5"));
            MR_hl_field(MR_mktag(1), Spec_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Spec_22, 2) = ((MR_Box) ((MR_Unsigned) 48U));
            MR_hl_field(MR_mktag(1), Spec_22, 3) = ((MR_Box) (AbstractInstanceContext_21));
            MR_hl_field(MR_mktag(1), Spec_22, 4) = ((MR_Box) (Pieces_20));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_24 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_22));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_23));
          }
        }
      }
      else
      {
        MR_Word ClassName_102 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassId_7, (MR_Integer) 0))));
        MR_String ClassNameString_104;
        MR_String AbstractTypesString_105;
        MR_String AbstractInstanceName_106;
        MR_Word Pieces_107;
        MR_Word AbstractInstanceContext_108;
        MR_Word Spec_109;
        MR_Word Var_110;
        MR_String Var_111;
        MR_String Var_113;
        MR_Word Var_116;
        MR_Word Var_118;
        MR_Word Var_119;
        MR_Integer Var_91 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ClassId_7, (MR_Integer) 1))));
        MR_Word Var_124;
        MR_Word Var_125;
        MR_Word Var_126;
        MR_Word Var_127;
        MR_Word Var_129;
        MR_Word Var_130;
        MR_Word Var_131;
        MR_Word Var_132;

        ClassNameString_104 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ClassName_102);
        Var_124 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AbstractInstance_8, (MR_Integer) 0))));
        Var_125 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AbstractInstance_8, (MR_Integer) 1))));
        Var_126 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AbstractInstance_8, (MR_Integer) 2))));
        Var_127 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AbstractInstance_8, (MR_Integer) 3))));
        AbstractInstanceContext_108 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AbstractInstance_8, (MR_Integer) 4))));
        Var_129 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AbstractInstance_8, (MR_Integer) 5))));
        Var_130 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AbstractInstance_8, (MR_Integer) 6))));
        Var_131 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AbstractInstance_8, (MR_Integer) 7))));
        Var_110 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AbstractInstance_8, (MR_Integer) 8))));
        Var_132 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AbstractInstance_8, (MR_Integer) 9))));
        AbstractTypesString_105 = parse_tree__mercury_to_mercury__mercury_type_list_to_string_2_f_0(Var_110, (env).check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_env_0__AbstractTypes_10);
        Var_113 = mercury__string__f_43_43_2_f_0(AbstractTypesString_105, (MR_String) ")");
        Var_111 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_113);
        AbstractInstanceName_106 = mercury__string__f_43_43_2_f_0(ClassNameString_104, Var_111);
        {
          Var_119 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_119, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_119, 1) = ((MR_Box) (AbstractInstanceName_106));
        }
        {
          Var_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_118, 0) = ((MR_Box) (Var_119));
          MR_hl_field(MR_mktag(1), Var_118, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[59])));
        }
        {
          Var_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_116, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[55])));
          MR_hl_field(MR_mktag(1), Var_116, 1) = ((MR_Box) (Var_118));
        }
        {
          Pieces_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_107, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[54])));
          MR_hl_field(MR_mktag(1), Pieces_107, 1) = ((MR_Box) (Var_116));
        }
        {
          Spec_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_109, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.check_typeclass.check_for_corresponding_instances_2\'/5"));
          MR_hl_field(MR_mktag(1), Spec_109, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_109, 2) = ((MR_Box) ((MR_Unsigned) 48U));
          MR_hl_field(MR_mktag(1), Spec_109, 3) = ((MR_Box) (AbstractInstanceContext_108));
          MR_hl_field(MR_mktag(1), Spec_109, 4) = ((MR_Box) (Pieces_107));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Specs_24 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_109));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_23));
        }
      }
    }
  }
}

static void MR_CALL 
check_hlds__check_typeclass__check_for_corresponding_instances_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Specs_24;

    check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Specs_24);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_24));
  }
}

static void MR_CALL 
check_hlds__check_typeclass__check_for_corresponding_instances_5_p_0(
  MR_Word Concretes_6,
  MR_Word ClassId_7,
  MR_Word InstanceDefns_8,
  MR_Word STATE_VARIABLE_Specs_0_10,
  MR_Word * STATE_VARIABLE_Specs_11)
{
  {
    MR_Word Var_12;
    MR_Box conv1_STATE_VARIABLE_Specs_11;

    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_6[3]));
      MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (check_hlds__check_typeclass__check_for_corresponding_instances_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (Concretes_6));
      MR_hl_field(MR_mktag(0), Var_12, 4) = ((MR_Box) (ClassId_7));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0), (MR_Word) (&check_hlds__check_typeclass_scalar_common_1[1]), Var_12, InstanceDefns_8, ((MR_Box) (STATE_VARIABLE_Specs_0_10)), &conv1_STATE_VARIABLE_Specs_11);
    *STATE_VARIABLE_Specs_11 = ((MR_Word) (conv1_STATE_VARIABLE_Specs_11));
  }
}

static void MR_CALL 
check_hlds__check_typeclass__partition_instances_for_class_2_6_p_0(
  MR_Word ClassId_7,
  MR_Word InstanceDefn_8,
  MR_Word STATE_VARIABLE_Abstracts_0_15,
  MR_Word * STATE_VARIABLE_Abstracts_16,
  MR_Word STATE_VARIABLE_Concretes_0_17,
  MR_Word * STATE_VARIABLE_Concretes_18)
{
  {
    MR_Word InstanceStatus_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn_8, (MR_Integer) 3))));
    MR_Word IsImported_12;

    IsImported_12 = hlds__status__instance_status_is_imported_1_f_0(InstanceStatus_11);
    switch (IsImported_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Body_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn_8, (MR_Integer) 6))));

          if ((Body_13 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            mercury__multi_map__add_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0), ((MR_Box) (ClassId_7)), ((MR_Box) (InstanceDefn_8)), STATE_VARIABLE_Abstracts_0_15, STATE_VARIABLE_Abstracts_16);
            *STATE_VARIABLE_Concretes_18 = STATE_VARIABLE_Concretes_0_17;
          }
          else
          {
            mercury__multi_map__add_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0), ((MR_Box) (ClassId_7)), ((MR_Box) (InstanceDefn_8)), STATE_VARIABLE_Concretes_0_17, STATE_VARIABLE_Concretes_18);
            *STATE_VARIABLE_Abstracts_16 = STATE_VARIABLE_Abstracts_0_15;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          *STATE_VARIABLE_Abstracts_16 = STATE_VARIABLE_Abstracts_0_15;
          *STATE_VARIABLE_Concretes_18 = STATE_VARIABLE_Concretes_0_17;
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__check_typeclass__partition_instances_for_class_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_Abstracts_16;
    MR_Word conv0_STATE_VARIABLE_Concretes_18;

    check_hlds__check_typeclass__partition_instances_for_class_2_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_Abstracts_16, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Concretes_18);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Abstracts_16));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Concretes_18));
  }
}

static void MR_CALL 
check_hlds__check_typeclass__partition_instances_for_class_6_p_0(
  MR_Word ClassId_7,
  MR_Word Instances_8,
  MR_Word STATE_VARIABLE_Abstracts_0_11,
  MR_Word * STATE_VARIABLE_Abstracts_12,
  MR_Word STATE_VARIABLE_Concretes_0_13,
  MR_Word * STATE_VARIABLE_Concretes_14)
{
  {
    MR_Word Var_15;
    MR_Box conv3_STATE_VARIABLE_Abstracts_12;
    MR_Box conv2_STATE_VARIABLE_Concretes_14;

    {
      Var_15 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_5[2]));
      MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (check_hlds__check_typeclass__partition_instances_for_class_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_15, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_15, 3) = ((MR_Box) (ClassId_7));
    }
    mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0), (MR_Word) (&check_hlds__check_typeclass_scalar_common_2[1]), (MR_Word) (&check_hlds__check_typeclass_scalar_common_2[1]), Var_15, Instances_8, ((MR_Box) (STATE_VARIABLE_Abstracts_0_11)), &conv3_STATE_VARIABLE_Abstracts_12, ((MR_Box) (STATE_VARIABLE_Concretes_0_13)), &conv2_STATE_VARIABLE_Concretes_14);
    *STATE_VARIABLE_Abstracts_12 = ((MR_Word) (conv3_STATE_VARIABLE_Abstracts_12));
    *STATE_VARIABLE_Concretes_14 = ((MR_Word) (conv2_STATE_VARIABLE_Concretes_14));
  }
}

static void MR_CALL 
check_hlds__check_typeclass__check_instance_pred_14_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_LambdaHeadVar__2_84;

    check_hlds__check_typeclass__IntroducedFrom__pred__check_instance_pred__725__1_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) (wrapper_arg_1)), &conv1_LambdaHeadVar__2_84);
    *wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_84));
  }
}

static MR_bool MR_CALL 
check_hlds__check_typeclass__check_instance_pred_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Integer conv0_LambdaHeadVar__2_77;

    succeeded = check_hlds__check_typeclass__IntroducedFrom__pred__check_instance_pred__697__1_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_77);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_77));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__check_typeclass__check_instance_pred_14_p_0(
  MR_Word ClassId_15,
  MR_Word ClassVars_16,
  MR_Word ClassInterface_17,
  MR_Word PredId_18,
  MR_Word InstanceDefn0_19,
  MR_Word * InstanceDefn_20,
  MR_Word STATE_VARIABLE_RevOrderedMethods_0_68,
  MR_Word * STATE_VARIABLE_RevOrderedMethods_69,
  MR_Word STATE_VARIABLE_ModuleInfo_0_70,
  MR_Word * STATE_VARIABLE_ModuleInfo_71,
  MR_Word STATE_VARIABLE_QualInfo_0_72,
  MR_Word * STATE_VARIABLE_QualInfo_73,
  MR_Word STATE_VARIABLE_Specs_0_74,
  MR_Word * STATE_VARIABLE_Specs_75)
{
  {
    MR_bool succeeded;
    MR_Word GetClassProcProcId_25;
    MR_Word ClassProcProcIds0_28;
    MR_Word ClassProcProcIds_29;
    MR_Word PredInfo_30;
    MR_Word ArgTypeVars_31;
    MR_Word ExistQVars_32;
    MR_Word ArgTypes_33;
    MR_Word ClassContext0_34;
    MR_Word Markers0_35;
    MR_Word Markers_36;
    MR_Word ClassContext_41;
    MR_String MethodName0_42;
    MR_Word PredModule_43;
    MR_Word MethodName_44;
    MR_Integer PredArity_45;
    MR_Word PredOrFunc_46;
    MR_Integer Arity_47;
    MR_Word ProcTable_48;
    MR_Word ArgModes_55;
    MR_Word InstanceTypes_57;
    MR_Word InstanceStatus_59;
    MR_Word PredName_66;
    MR_Word CheckInfo0_67;
    MR_Word Var_82;
    MR_Word OtherUnivCs_38;
    MR_Word ExistCs_39;
    MR_Word Var_79;

    {
      GetClassProcProcId_25 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), GetClassProcProcId_25, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_9[4]));
      MR_hl_field(MR_mktag(0), GetClassProcProcId_25, 1) = ((MR_Box) (check_hlds__check_typeclass__check_instance_pred_14_p_0_1));
      MR_hl_field(MR_mktag(0), GetClassProcProcId_25, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), GetClassProcProcId_25, 3) = ((MR_Box) (PredId_18));
    }
    mercury__list__filter_map_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), GetClassProcProcId_25, ClassInterface_17, &ClassProcProcIds0_28);
    mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), ClassProcProcIds0_28, &ClassProcProcIds_29);
    hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_70, PredId_18, &PredInfo_30);
    hlds__hlds_pred__pred_info_get_arg_types_4_p_0(PredInfo_30, &ArgTypeVars_31, &ExistQVars_32, &ArgTypes_33);
    hlds__hlds_pred__pred_info_get_class_context_2_p_0(PredInfo_30, &ClassContext0_34);
    hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_30, &Markers0_35);
    hlds__hlds_pred__remove_marker_3_p_0((MR_Integer) 10, Markers0_35, &Markers_36);
    Var_79 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassContext0_34, (MR_Integer) 0))));
    ExistCs_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassContext0_34, (MR_Integer) 1))));
    succeeded = (Var_79 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      OtherUnivCs_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_79, (MR_Integer) 1))));
      {
        ClassContext_41 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ClassContext_41, 0) = ((MR_Box) (OtherUnivCs_38));
        MR_hl_field(MR_mktag(0), ClassContext_41, 1) = ((MR_Box) (ExistCs_39));
      }
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.check_typeclass.check_instance_pred\'/14", (MR_String) "no constraint on class method");
        return;
      }
    MethodName0_42 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_30);
    PredModule_43 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_30);
    {
      MethodName_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MethodName_44, 0) = ((MR_Box) (PredModule_43));
      MR_hl_field(MR_mktag(1), MethodName_44, 1) = ((MR_Box) (MethodName0_42));
    }
    PredArity_45 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(PredInfo_30);
    PredOrFunc_46 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_30);
    parse_tree__prog_util__adjust_func_arity_3_p_1(PredOrFunc_46, &Arity_47, PredArity_45);
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_30, &ProcTable_48);
    {
      Var_82 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_82, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_9[5]));
      MR_hl_field(MR_mktag(0), Var_82, 1) = ((MR_Box) (check_hlds__check_typeclass__check_instance_pred_14_p_0_2));
      MR_hl_field(MR_mktag(0), Var_82, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_82, 3) = ((MR_Box) (ProcTable_48));
    }
    mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&check_hlds__check_typeclass__check_hlds__check_typeclass__type_ctor_info_modes_and_detism_0), Var_82, ClassProcProcIds_29, &ArgModes_55);
    InstanceTypes_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn0_19, (MR_Integer) 1))));
    InstanceStatus_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn0_19, (MR_Integer) 3))));
    check_hlds__check_typeclass__make_introduced_pred_name_5_p_0(ClassId_15, MethodName_44, Arity_47, InstanceTypes_57, &PredName_66);
    {
      CheckInfo0_67 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), CheckInfo0_67, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_46));
      MR_hl_field(MR_mktag(0), CheckInfo0_67, 1) = ((MR_Box) (PredName_66));
      MR_hl_field(MR_mktag(0), CheckInfo0_67, 2) = ((MR_Box) (Arity_47));
      MR_hl_field(MR_mktag(0), CheckInfo0_67, 3) = ((MR_Box) (ExistQVars_32));
      MR_hl_field(MR_mktag(0), CheckInfo0_67, 4) = ((MR_Box) (ArgTypes_33));
      MR_hl_field(MR_mktag(0), CheckInfo0_67, 5) = ((MR_Box) (ClassContext_41));
      MR_hl_field(MR_mktag(0), CheckInfo0_67, 6) = ((MR_Box) (ArgModes_55));
      MR_hl_field(MR_mktag(0), CheckInfo0_67, 7) = ((MR_Box) (ArgTypeVars_31));
      MR_hl_field(MR_mktag(0), CheckInfo0_67, 8) = ((MR_Box) (InstanceStatus_59));
    }
    check_hlds__check_typeclass__check_instance_pred_procs_15_p_0(ClassId_15, ClassVars_16, MethodName_44, Markers_36, CheckInfo0_67, InstanceDefn0_19, InstanceDefn_20, STATE_VARIABLE_RevOrderedMethods_0_68, STATE_VARIABLE_RevOrderedMethods_69, STATE_VARIABLE_ModuleInfo_0_70, STATE_VARIABLE_ModuleInfo_71, STATE_VARIABLE_QualInfo_0_72, STATE_VARIABLE_QualInfo_73, STATE_VARIABLE_Specs_0_74, STATE_VARIABLE_Specs_75);
  }
}

static void MR_CALL 
check_hlds__check_typeclass__make_introduced_pred_name_5_p_0(
  MR_Word ClassId_6,
  MR_Word MethodName_7,
  MR_Integer Arity_8,
  MR_Word InstanceTypes_9,
  MR_Word * PredName_10)
{
  {
    MR_Word ClassName_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassId_6, (MR_Integer) 0))));
    MR_String ClassNameString_13;
    MR_String MethodNameString_14;
    MR_String ArityString_15;
    MR_String InstanceString_16;
    MR_String PredNameString_17;
    MR_Word Var_20;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_31;

    ClassNameString_13 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(ClassName_11, (MR_String) "__");
    MethodNameString_14 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(MethodName_7, (MR_String) "__");
    mercury__string__int_to_string_2_p_0(Arity_8, &ArityString_15);
    hlds__hlds_code_util__make_instance_string_2_p_0(InstanceTypes_9, &InstanceString_16);
    {
      Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (ArityString_15));
      MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) ((MR_String) "_"));
      MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_31));
    }
    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (MethodNameString_14));
      MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (Var_29));
    }
    {
      Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) ((MR_String) "____"));
      MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (Var_28));
    }
    {
      Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (InstanceString_16));
      MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (Var_26));
    }
    {
      Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) ((MR_String) "____"));
      MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (Var_25));
    }
    {
      Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (ClassNameString_13));
      MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (Var_23));
    }
    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) ((MR_String) "ClassMethod_for_"));
      MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (Var_22));
    }
    mercury__string__append_list_2_p_0(Var_20, &PredNameString_17);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *PredName_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (PredNameString_17));
    }
  }
}

static void MR_CALL 
check_hlds__check_typeclass__check_instance_pred_procs_15_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_74;

    check_hlds__check_typeclass__IntroducedFrom__pred__check_instance_pred_procs__824__1_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_74);
    *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_74));
  }
}

static void MR_CALL 
check_hlds__check_typeclass__check_instance_pred_procs_15_p_0(
  MR_Word ClassId_16,
  MR_Word ClassVars_17,
  MR_Word MethodName_18,
  MR_Word Markers_19,
  MR_Word CheckInfo_20,
  MR_Word InstanceDefn0_21,
  MR_Word * InstanceDefn_22,
  MR_Word STATE_VARIABLE_RevInstanceMethods_0_57,
  MR_Word * STATE_VARIABLE_RevInstanceMethods_58,
  MR_Word STATE_VARIABLE_ModuleInfo_0_59,
  MR_Word * STATE_VARIABLE_ModuleInfo_60,
  MR_Word STATE_VARIABLE_QualInfo_0_61,
  MR_Word * STATE_VARIABLE_QualInfo_62,
  MR_Word STATE_VARIABLE_Specs_0_63,
  MR_Word * STATE_VARIABLE_Specs_64)
{
  {
    MR_Word InstanceModuleName_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn0_21, (MR_Integer) 0))));
    MR_Word InstanceTypes_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn0_21, (MR_Integer) 1))));
    MR_Word InstanceConstraints_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn0_21, (MR_Integer) 5))));
    MR_Word InstanceBody_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn0_21, (MR_Integer) 6))));
    MR_Word MaybeInstancePredProcs_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn0_21, (MR_Integer) 7))));
    MR_Word InstanceVarSet_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn0_21, (MR_Integer) 8))));
    MR_Word PredOrFunc_37 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), CheckInfo_20, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Integer Arity_38 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), CheckInfo_20, (MR_Integer) 2))));
    MR_Word MatchingInstanceMethods_39;

    check_hlds__check_typeclass__get_matching_instance_defns_5_p_0(InstanceBody_33, PredOrFunc_37, MethodName_18, Arity_38, &MatchingInstanceMethods_39);
    if ((MatchingInstanceMethods_39 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *InstanceDefn_22 = InstanceDefn0_21;
      check_hlds__check_typeclass__report_undefined_method_7_p_0(ClassId_16, InstanceDefn0_21, PredOrFunc_37, MethodName_18, Arity_38, STATE_VARIABLE_Specs_0_63, STATE_VARIABLE_Specs_64);
      *STATE_VARIABLE_RevInstanceMethods_58 = STATE_VARIABLE_RevInstanceMethods_0_57;
      *STATE_VARIABLE_ModuleInfo_60 = STATE_VARIABLE_ModuleInfo_0_59;
      *STATE_VARIABLE_QualInfo_62 = STATE_VARIABLE_QualInfo_0_61;
    }
    else
    {
      MR_Word Var_106 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MatchingInstanceMethods_39, (MR_Integer) 1))));
      MR_Word Var_107 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MatchingInstanceMethods_39, (MR_Integer) 0))));

      if ((Var_106 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word InstancePredDefn_43;
        MR_Word Context_45;
        MR_Word InstancePredId_46;
        MR_Word InstanceProcIds_47;
        MR_Word MakeClassProc_48;
        MR_Word InstancePredProcs1_51;
        MR_Word InstancePredProcs_53;
        MR_Word Var_75;
        MR_Word Var_94;
        MR_Word Var_95;
        MR_Word Var_96;
        MR_Word Var_97;
        MR_Word Var_98;
        MR_Word Var_99;
        MR_Word Var_100;
        MR_Word Var_102;
        MR_Word Var_103;

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_RevInstanceMethods_58 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_107));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_RevInstanceMethods_0_57));
        }
        InstancePredDefn_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_107, (MR_Integer) 2))));
        Context_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_107, (MR_Integer) 4))));
        check_hlds__check_typeclass__produce_auxiliary_procs_19_p_0(ClassId_16, ClassVars_17, MethodName_18, Markers_19, InstanceTypes_28, InstanceConstraints_32, InstanceVarSet_35, InstanceModuleName_27, InstancePredDefn_43, Context_45, &InstancePredId_46, &InstanceProcIds_47, CheckInfo_20, STATE_VARIABLE_ModuleInfo_0_59, STATE_VARIABLE_ModuleInfo_60, STATE_VARIABLE_QualInfo_0_61, STATE_VARIABLE_QualInfo_62, STATE_VARIABLE_Specs_0_63, STATE_VARIABLE_Specs_64);
        {
          MakeClassProc_48 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), MakeClassProc_48, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_9[3]));
          MR_hl_field(MR_mktag(0), MakeClassProc_48, 1) = ((MR_Box) (check_hlds__check_typeclass__check_instance_pred_procs_15_p_0_1));
          MR_hl_field(MR_mktag(0), MakeClassProc_48, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), MakeClassProc_48, 3) = ((MR_Box) (InstancePredId_46));
        }
        mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), MakeClassProc_48, InstanceProcIds_47, &InstancePredProcs1_51);
        if ((MaybeInstancePredProcs_34 == (MR_Word) ((MR_Unsigned) 0U)))
          InstancePredProcs_53 = InstancePredProcs1_51;
        else
        {
          MR_Word InstancePredProcs0_52 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeInstancePredProcs_34, (MR_Integer) 0))));

          InstancePredProcs_53 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), InstancePredProcs0_52, InstancePredProcs1_51);
        }
        {
          Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (InstancePredProcs_53));
        }
        Var_94 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn0_21, (MR_Integer) 0))));
        Var_95 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn0_21, (MR_Integer) 1))));
        Var_96 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn0_21, (MR_Integer) 2))));
        Var_97 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn0_21, (MR_Integer) 3))));
        Var_98 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn0_21, (MR_Integer) 4))));
        Var_99 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn0_21, (MR_Integer) 5))));
        Var_100 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn0_21, (MR_Integer) 6))));
        Var_102 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn0_21, (MR_Integer) 8))));
        Var_103 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn0_21, (MR_Integer) 9))));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
          *InstanceDefn_22 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_94));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_95));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_96));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_97));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_98));
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_99));
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_100));
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_75));
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_102));
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_103));
        }
      }
      else
      {
        *InstanceDefn_22 = InstanceDefn0_21;
        check_hlds__check_typeclass__report_duplicate_method_defn_8_p_0(ClassId_16, InstanceDefn0_21, PredOrFunc_37, MethodName_18, Arity_38, MatchingInstanceMethods_39, STATE_VARIABLE_Specs_0_63, STATE_VARIABLE_Specs_64);
        *STATE_VARIABLE_RevInstanceMethods_58 = STATE_VARIABLE_RevInstanceMethods_0_57;
        *STATE_VARIABLE_ModuleInfo_60 = STATE_VARIABLE_ModuleInfo_0_59;
        *STATE_VARIABLE_QualInfo_62 = STATE_VARIABLE_QualInfo_0_61;
      }
    }
  }
}

static void MR_CALL 
check_hlds__check_typeclass__report_undefined_method_7_p_0(
  MR_Word ClassId_8,
  MR_Word InstanceDefn_9,
  MR_Word PredOrFunc_10,
  MR_Word MethodName_11,
  MR_Integer Arity_12,
  MR_Word STATE_VARIABLE_Specs_0_23,
  MR_Word * STATE_VARIABLE_Specs_24)
{
  {
    MR_Word InstanceVarSet_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn_9, (MR_Integer) 8))));
    MR_Word InstanceTypes_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn_9, (MR_Integer) 1))));
    MR_Word InstanceContext_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn_9, (MR_Integer) 4))));
    MR_Word ClassName_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassId_8, (MR_Integer) 0))));
    MR_String ClassNameString_19;
    MR_String InstanceTypesString_20;
    MR_Word Pieces_21;
    MR_Word Spec_22;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_String Var_29;
    MR_String Var_30;
    MR_String Var_32;
    MR_Word Var_34;
    MR_Word Var_37;
    MR_Word Var_39;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_49;

    ClassNameString_19 = mdbcomp__sym_name__unqualify_name_1_f_0(ClassName_17);
    InstanceTypesString_20 = parse_tree__mercury_to_mercury__mercury_type_list_to_string_2_f_0(InstanceVarSet_14, InstanceTypes_15);
    Var_32 = mercury__string__f_43_43_2_f_0(InstanceTypesString_20, (MR_String) ")");
    Var_30 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_32);
    Var_29 = mercury__string__f_43_43_2_f_0(ClassNameString_19, Var_30);
    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_28, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(MR_mktag(3), Var_28, 1) = ((MR_Box) (Var_29));
    }
    {
      Var_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_43, 0) = ((MR_Box) ((MR_Unsigned) 27U));
      MR_hl_field(MR_mktag(3), Var_43, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_10));
    }
    {
      Var_49 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_49, 0) = ((MR_Box) (MethodName_11));
      MR_hl_field(MR_mktag(0), Var_49, 1) = ((MR_Box) (Arity_12));
    }
    {
      Var_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_48, 0) = ((MR_Box) ((MR_Unsigned) 11U));
      MR_hl_field(MR_mktag(3), Var_48, 1) = ((MR_Box) (Var_49));
    }
    {
      Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (Var_48));
      MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[37])));
    }
    {
      Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[147])));
      MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (Var_47));
    }
    {
      Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (Var_44));
    }
    {
      Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[152])));
      MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (Var_42));
    }
    {
      Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (Var_39));
    }
    {
      Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[42])));
      MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (Var_37));
    }
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (Var_34));
    }
    {
      Pieces_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[41])));
      MR_hl_field(MR_mktag(1), Pieces_21, 1) = ((MR_Box) (Var_27));
    }
    {
      Spec_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_22, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.check_typeclass.report_undefined_method\'/7"));
      MR_hl_field(MR_mktag(1), Spec_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_22, 2) = ((MR_Box) ((MR_Unsigned) 48U));
      MR_hl_field(MR_mktag(1), Spec_22, 3) = ((MR_Box) (InstanceContext_16));
      MR_hl_field(MR_mktag(1), Spec_22, 4) = ((MR_Box) (Pieces_21));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_24 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_22));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_23));
    }
  }
}

static void MR_CALL 
check_hlds__check_typeclass__report_duplicate_method_defn_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_78;

    check_hlds__check_typeclass__IntroducedFrom__pred__report_duplicate_method_defn__2296__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_78);
    *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_78));
  }
}

static void MR_CALL 
check_hlds__check_typeclass__report_duplicate_method_defn_8_p_0(
  MR_Word ClassId_9,
  MR_Word InstanceDefn_10,
  MR_Word PredOrFunc_11,
  MR_Word MethodName_12,
  MR_Integer Arity_13,
  MR_Word MatchingInstanceMethods_14,
  MR_Word STATE_VARIABLE_Specs_0_37,
  MR_Word * STATE_VARIABLE_Specs_38)
{
  {
    MR_Word InstanceVarSet_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn_10, (MR_Integer) 8))));
    MR_Word InstanceTypes_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn_10, (MR_Integer) 1))));
    MR_Word InstanceContext_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn_10, (MR_Integer) 4))));
    MR_Word ClassName_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassId_9, (MR_Integer) 0))));
    MR_String ClassNameString_21;
    MR_String InstanceTypesString_22;
    MR_Word HeaderPieces_23;
    MR_Word HeadingMsg_24;
    MR_Word FirstInstance_25;
    MR_Word LaterInstances_26;
    MR_Word FirstInstanceContext_27;
    MR_Word FirstMsg_29;
    MR_Word LaterMsgs_35;
    MR_Word Spec_36;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_String Var_43;
    MR_String Var_44;
    MR_String Var_46;
    MR_Word Var_48;
    MR_Word Var_51;
    MR_Word Var_53;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Word Var_63;
    MR_Word Var_87;
    MR_Word Var_88;

    ClassNameString_21 = mdbcomp__sym_name__unqualify_name_1_f_0(ClassName_19);
    InstanceTypesString_22 = parse_tree__mercury_to_mercury__mercury_type_list_to_string_2_f_0(InstanceVarSet_16, InstanceTypes_17);
    Var_46 = mercury__string__f_43_43_2_f_0(InstanceTypesString_22, (MR_String) ")");
    Var_44 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_46);
    Var_43 = mercury__string__f_43_43_2_f_0(ClassNameString_21, Var_44);
    {
      Var_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_42, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(MR_mktag(3), Var_42, 1) = ((MR_Box) (Var_43));
    }
    {
      Var_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_57, 0) = ((MR_Box) ((MR_Unsigned) 27U));
      MR_hl_field(MR_mktag(3), Var_57, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_11));
    }
    {
      Var_63 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_63, 0) = ((MR_Box) (MethodName_12));
      MR_hl_field(MR_mktag(0), Var_63, 1) = ((MR_Box) (Arity_13));
    }
    {
      Var_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_62, 0) = ((MR_Box) ((MR_Unsigned) 11U));
      MR_hl_field(MR_mktag(3), Var_62, 1) = ((MR_Box) (Var_63));
    }
    {
      Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (Var_62));
      MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[37])));
    }
    {
      Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[147])));
      MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (Var_61));
    }
    {
      Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (Var_57));
      MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (Var_58));
    }
    {
      Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[146])));
      MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Var_56));
    }
    {
      Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (Var_53));
    }
    {
      Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[42])));
      MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (Var_51));
    }
    {
      Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (Var_48));
    }
    {
      HeaderPieces_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeaderPieces_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[41])));
      MR_hl_field(MR_mktag(1), HeaderPieces_23, 1) = ((MR_Box) (Var_41));
    }
    {
      HeadingMsg_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadingMsg_24, 0) = ((MR_Box) (InstanceContext_18));
      MR_hl_field(MR_mktag(0), HeadingMsg_24, 1) = ((MR_Box) (HeaderPieces_23));
    }
    if ((MatchingInstanceMethods_14 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.check_typeclass.report_duplicate_method_defn\'/8", (MR_String) "no matching instances");
        return;
      }
    else
    {
      FirstInstance_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MatchingInstanceMethods_14, (MR_Integer) 0))));
      LaterInstances_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MatchingInstanceMethods_14, (MR_Integer) 1))));
    }
    FirstInstanceContext_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FirstInstance_25, (MR_Integer) 4))));
    {
      FirstMsg_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), FirstMsg_29, 0) = ((MR_Box) (FirstInstanceContext_27));
      MR_hl_field(MR_mktag(0), FirstMsg_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[149])));
    }
    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0), (MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0), (MR_Word) (&check_hlds__check_typeclass_scalar_common_2[7]), LaterInstances_26, &LaterMsgs_35);
    {
      Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_88, 0) = ((MR_Box) (FirstMsg_29));
      MR_hl_field(MR_mktag(1), Var_88, 1) = ((MR_Box) (LaterMsgs_35));
    }
    {
      Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_87, 0) = ((MR_Box) (HeadingMsg_24));
      MR_hl_field(MR_mktag(1), Var_87, 1) = ((MR_Box) (Var_88));
    }
    {
      Spec_36 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_36, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.check_typeclass.report_duplicate_method_defn\'/8"));
      MR_hl_field(MR_mktag(0), Spec_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_36, 2) = ((MR_Box) ((MR_Unsigned) 48U));
      MR_hl_field(MR_mktag(0), Spec_36, 3) = ((MR_Box) (Var_87));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_38 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_36));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_37));
    }
  }
}

static void MR_CALL 
check_hlds__check_typeclass__produce_auxiliary_procs_19_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv1_LambdaHeadVar__2_122;
    MR_Word conv0_LambdaHeadVar__4_124;

    check_hlds__check_typeclass__IntroducedFrom__pred__produce_auxiliary_procs__1009__1_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv1_LambdaHeadVar__2_122, ((MR_Word) (wrapper_arg_3)), &conv0_LambdaHeadVar__4_124);
    *wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_122));
    *wrapper_arg_4 = ((MR_Box) (conv0_LambdaHeadVar__4_124));
  }
}

static void MR_CALL 
check_hlds__check_typeclass__produce_auxiliary_procs_19_p_0(
  MR_Word ClassId_20,
  MR_Word ClassVars_21,
  MR_Word MethodName_22,
  MR_Word Markers0_23,
  MR_Word InstanceTypes0_24,
  MR_Word InstanceConstraints0_25,
  MR_Word InstanceVarSet_26,
  MR_Word InstanceModuleName_27,
  MR_Word InstancePredDefn_28,
  MR_Word Context_29,
  MR_Word * PredId_30,
  MR_Word * InstanceProcIds_31,
  MR_Word CheckInfo0_32,
  MR_Word STATE_VARIABLE_ModuleInfo_0_104,
  MR_Word * STATE_VARIABLE_ModuleInfo_105,
  MR_Word STATE_VARIABLE_QualInfo_0_106,
  MR_Word * STATE_VARIABLE_QualInfo_107,
  MR_Word STATE_VARIABLE_Specs_0_108,
  MR_Word * STATE_VARIABLE_Specs_109)
{
  {
    MR_Word PredOrFunc_36 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), CheckInfo0_32, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word PredName_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CheckInfo0_32, (MR_Integer) 1))));
    MR_Integer Arity_38 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), CheckInfo0_32, (MR_Integer) 2))));
    MR_Word ExistQVars0_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CheckInfo0_32, (MR_Integer) 3))));
    MR_Word ClassMethodClassContext0_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CheckInfo0_32, (MR_Integer) 5))));
    MR_Word ArgModes_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CheckInfo0_32, (MR_Integer) 6))));
    MR_Word TVarSet0_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CheckInfo0_32, (MR_Integer) 7))));
    MR_Word InstanceStatus0_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CheckInfo0_32, (MR_Integer) 8))));
    MR_Word UnsubstArgTypes_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CheckInfo0_32, (MR_Integer) 4))));
    MR_Word TVarSet1_46;
    MR_Word Renaming_47;
    MR_Word InstanceTypes1_48;
    MR_Word InstanceConstraints1_49;
    MR_Word TypeSubst_50;
    MR_Word ArgTypes1_51;
    MR_Word ClassMethodClassContext1_52;
    MR_Word ArgTVars_53;
    MR_Word MethodContextTVars_54;
    MR_Word InstanceTVars_55;
    MR_Word VarsToKeep0_56;
    MR_Word VarsToKeep_57;
    MR_Word TVarSet2_58;
    MR_Word SquashSubst_59;
    MR_Word ArgTypes_60;
    MR_Word ClassMethodClassContext_61;
    MR_Word ExistQVars_62;
    MR_Word InstanceTypes_63;
    MR_Word InstanceConstraints_64;
    MR_Word UnivConstraints1_65;
    MR_Word ExistConstraints_66;
    MR_Word UnivConstraints_67;
    MR_Word ClassContext_68;
    MR_Word Proofs_69;
    MR_Word ConstraintMap_70;
    MR_Word Markers1_71;
    MR_Word Markers_73;
    MR_Word IsImported_75;
    MR_Word InstanceStatus_76;
    MR_Integer PredArity_77;
    MR_Word ClausesInfo_78;
    MR_Word TVarSet_79;
    MR_Word MethodConstraints_80;
    MR_Word PredOrigin_81;
    MR_Word VarNameRemap_82;
    MR_Word OldImportStatus_83;
    MR_Word PredStatus_84;
    MR_Word PredInfo0_87;
    MR_Word PredInfo1_88;
    MR_Word PredInfo2_89;
    MR_Word AddProc_90;
    MR_Word PredInfo_100;
    MR_Word PredicateTable1_101;
    MR_Word PQInfo_102;
    MR_Word PredicateTable_103;
    MR_Word Var_110;
    MR_Word Var_111;
    MR_Word Var_112;
    MR_Word STATE_VARIABLE_ModuleInfo_117_117;
    MR_Box conv2_PredInfo_100;

    parse_tree__prog_data__tvarset_merge_renaming_4_p_0(TVarSet0_43, InstanceVarSet_26, &TVarSet1_46, &Renaming_47);
    parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(Renaming_47, InstanceTypes0_24, &InstanceTypes1_48);
    parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_p_0(Renaming_47, InstanceConstraints0_25, &InstanceConstraints1_49);
    mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[5]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ClassVars_21, InstanceTypes1_48, &TypeSubst_50);
    parse_tree__prog_type_subst__apply_subst_to_type_list_3_p_0(TypeSubst_50, UnsubstArgTypes_45, &ArgTypes1_51);
    parse_tree__prog_type_subst__apply_subst_to_prog_constraints_3_p_0(TypeSubst_50, ClassMethodClassContext0_41, &ClassMethodClassContext1_52);
    parse_tree__prog_type__type_vars_list_2_p_0(ArgTypes1_51, &ArgTVars_53);
    parse_tree__prog_type__prog_constraints_get_tvars_2_p_0(ClassMethodClassContext1_52, &MethodContextTVars_54);
    parse_tree__prog_type__constraint_list_get_tvars_2_p_0(InstanceConstraints1_49, &InstanceTVars_55);
    {
      Var_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_112, 0) = ((MR_Box) (InstanceTVars_55));
      MR_hl_field(MR_mktag(1), Var_112, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_111, 0) = ((MR_Box) (MethodContextTVars_54));
      MR_hl_field(MR_mktag(1), Var_111, 1) = ((MR_Box) (Var_112));
    }
    {
      Var_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_110, 0) = ((MR_Box) (ArgTVars_53));
      MR_hl_field(MR_mktag(1), Var_110, 1) = ((MR_Box) (Var_111));
    }
    mercury__list__condense_2_p_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[5]), Var_110, &VarsToKeep0_56);
    mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[5]), VarsToKeep0_56, &VarsToKeep_57);
    mercury__varset__squash_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TVarSet1_46, VarsToKeep_57, &TVarSet2_58, &SquashSubst_59);
    parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(SquashSubst_59, ArgTypes1_51, &ArgTypes_60);
    parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraints_3_p_0(SquashSubst_59, ClassMethodClassContext1_52, &ClassMethodClassContext_61);
    parse_tree__prog_type__apply_partial_map_to_list_3_p_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[5]), SquashSubst_59, ExistQVars0_39, &ExistQVars_62);
    parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(SquashSubst_59, InstanceTypes1_48, &InstanceTypes_63);
    parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_p_0(SquashSubst_59, InstanceConstraints1_49, &InstanceConstraints_64);
    UnivConstraints1_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassMethodClassContext_61, (MR_Integer) 0))));
    ExistConstraints_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassMethodClassContext_61, (MR_Integer) 1))));
    mercury__list__append_3_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), InstanceConstraints_64, UnivConstraints1_65, &UnivConstraints_67);
    {
      ClassContext_68 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ClassContext_68, 0) = ((MR_Box) (UnivConstraints_67));
      MR_hl_field(MR_mktag(0), ClassContext_68, 1) = ((MR_Box) (ExistConstraints_66));
    }
    mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0), &Proofs_69);
    mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_id_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), &ConstraintMap_70);
    hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 11, Markers0_23, &Markers1_71);
    if (((MR_tag((MR_Word) InstancePredDefn_28)) == (MR_Integer) 1))
      Markers_73 = Markers1_71;
    else
      hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 12, Markers1_71, &Markers_73);
    IsImported_75 = hlds__status__instance_status_is_imported_1_f_0(InstanceStatus0_44);
    switch (IsImported_75) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        InstanceStatus_76 = InstanceStatus0_44;
        break;
      case (MR_Integer) 1:
        InstanceStatus_76 = (MR_Word) (((MR_Box) ((MR_Unsigned) 0U)));
        break;
    }
    parse_tree__prog_util__adjust_func_arity_3_p_0(PredOrFunc_36, Arity_38, &PredArity_77);
    hlds__make_hlds__produce_instance_method_clauses_16_p_0(InstancePredDefn_28, PredOrFunc_36, PredArity_77, ArgTypes_60, Markers_73, Context_29, InstanceStatus_76, &ClausesInfo_78, TVarSet2_58, &TVarSet_79, STATE_VARIABLE_ModuleInfo_0_104, &STATE_VARIABLE_ModuleInfo_117_117, STATE_VARIABLE_QualInfo_0_106, STATE_VARIABLE_QualInfo_107, STATE_VARIABLE_Specs_0_108, STATE_VARIABLE_Specs_109);
    {
      MethodConstraints_80 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), MethodConstraints_80, 0) = ((MR_Box) (ClassId_20));
      MR_hl_field(MR_mktag(0), MethodConstraints_80, 1) = ((MR_Box) (InstanceTypes_63));
      MR_hl_field(MR_mktag(0), MethodConstraints_80, 2) = ((MR_Box) (InstanceConstraints_64));
      MR_hl_field(MR_mktag(0), MethodConstraints_80, 3) = ((MR_Box) (ClassMethodClassContext_61));
    }
    {
      PredOrigin_81 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), PredOrigin_81, 0) = ((MR_Box) (MethodName_22));
      MR_hl_field(MR_mktag(2), PredOrigin_81, 1) = ((MR_Box) (MethodConstraints_80));
    }
    mercury__map__init_1_p_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[6]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), &VarNameRemap_82);
    OldImportStatus_83 = (MR_Word) (InstanceStatus_76);
    PredStatus_84 = (MR_Word) (OldImportStatus_83);
    hlds__hlds_pred__pred_info_init_19_p_0(InstanceModuleName_27, PredName_37, PredArity_77, PredOrFunc_36, Context_29, PredOrigin_81, PredStatus_84, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) (&check_hlds__check_typeclass_scalar_common_3[2]), Markers_73, ArgTypes_60, TVarSet_79, ExistQVars_62, ClassContext_68, Proofs_69, ConstraintMap_70, ClausesInfo_78, VarNameRemap_82, &PredInfo0_87);
    hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(ClausesInfo_78, PredInfo0_87, &PredInfo1_88);
    hlds__hlds_pred__pred_info_set_instance_method_arg_types_3_p_0(UnsubstArgTypes_45, PredInfo1_88, &PredInfo2_89);
    {
      AddProc_90 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), AddProc_90, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_5[1]));
      MR_hl_field(MR_mktag(0), AddProc_90, 1) = ((MR_Box) (check_hlds__check_typeclass__produce_auxiliary_procs_19_p_0_1));
      MR_hl_field(MR_mktag(0), AddProc_90, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), AddProc_90, 3) = ((MR_Box) (Context_29));
      MR_hl_field(MR_mktag(0), AddProc_90, 4) = ((MR_Box) (PredArity_77));
    }
    mercury__list__map_foldl_5_p_0((MR_Word) (&check_hlds__check_typeclass__check_hlds__check_typeclass__type_ctor_info_modes_and_detism_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), AddProc_90, ArgModes_42, InstanceProcIds_31, ((MR_Box) (PredInfo2_89)), &conv2_PredInfo_100);
    PredInfo_100 = ((MR_Word) (conv2_PredInfo_100));
    hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_117_117, &PredicateTable1_101);
    hlds__hlds_module__module_info_get_partial_qualifier_info_2_p_0(STATE_VARIABLE_ModuleInfo_117_117, &PQInfo_102);
    hlds__pred_table__predicate_table_insert_qual_6_p_0(PredInfo_100, (MR_Integer) 1, PQInfo_102, PredId_30, PredicateTable1_101, &PredicateTable_103);
    hlds__hlds_module__module_info_set_predicate_table_3_p_0(PredicateTable_103, STATE_VARIABLE_ModuleInfo_117_117, STATE_VARIABLE_ModuleInfo_105);
  }
}

static MR_bool MR_CALL 
check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv1_LambdaHeadVar__2_43;

    succeeded = check_hlds__check_typeclass__IntroducedFrom__pred__get_matching_instance_defns__879__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_LambdaHeadVar__2_43);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_43));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__check_typeclass__IntroducedFrom__pred__get_matching_instance_defns__860__1_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_2(
  void * env_ptr_arg)
{
  {
    struct check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_env_0_s * env_ptr = (struct check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_4(
  void * env_ptr_arg)
{
  {
    struct check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_env_0_s * env_ptr = (struct check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_env_0__DefnViaName_22 = ((MR_Word) ((env_ptr)->check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_env_0__conv0_DefnViaName_22));
    check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_3(env_ptr);
  }
}

static void MR_CALL 
check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_3(
  void * env_ptr_arg)
{
  {
    struct check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_env_0_s * env_ptr = (struct check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_env_0_s *) (env_ptr_arg);

    {
      MR_Word Var_23 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), (env_ptr)->check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_env_0__DefnViaName_22, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_env_0__DefnViaName_22, (MR_Integer) 1))));
      MR_Integer Var_26;
      MR_Word Var_27;
      MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), (env_ptr)->check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_env_0__DefnViaName_22, (MR_Integer) 0)));
      MR_Word Var_28;

      (env_ptr)->check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_env_0__InstanceProcDef_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_env_0__DefnViaName_22, (MR_Integer) 2))));
      Var_26 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), (env_ptr)->check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_env_0__DefnViaName_22, (MR_Integer) 3))));
      Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_env_0__DefnViaName_22, (MR_Integer) 4))));
      (env_ptr)->check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_env_0__succeeded = parse_tree__prog_data____Unify____instance_proc_def_0_0((env_ptr)->check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_env_0__InstanceProcDef_25, (env_ptr)->check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_env_0__InstanceProcDef_25);
      if ((env_ptr)->check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_env_0__succeeded)
      {
        (env_ptr)->check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_env_0__succeeded = ((MR_tag((MR_Word) (env_ptr)->check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_env_0__InstanceProcDef_25)) == (MR_Integer) 0);
        if ((env_ptr)->check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_env_0__succeeded)
        {
          Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_env_0__InstanceProcDef_25, (MR_Integer) 0))));
          check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_2(env_ptr);
        }
      }
    }
  }
}

static void MR_CALL 
check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_5(
  void * env_ptr_arg)
{
  {
    struct check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_env_0_s * env_ptr = (struct check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_env_0__commit_0) == 0)
      {
        mercury__list__member_2_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0), &(env_ptr)->check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_env_0__conv0_DefnViaName_22, (env_ptr)->check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_env_0__MatchingMethods_17, check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_4, env_ptr);
        (env_ptr)->check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
check_hlds__check_typeclass__get_matching_instance_defns_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word PredOrFunc_2,
  MR_Word MethodName_3,
  MR_Integer MethodArity_4,
  MR_Word * HeadVar__5_5)
{
  {
    struct check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_env_0_s env;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word InstanceMethods_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Var_39;
      MR_Word FirstContext_21;
      MR_Word First_18;
      MR_Word Var_41;
      MR_Word _Second_19;
      MR_Word Var_20;
      MR_Word Var_49;
      MR_Word Var_50;
      MR_Word Var_51;
      MR_Integer Var_52;
      MR_Unsigned packed_word_0;

      {
        Var_39 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_39, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_10[3]));
        MR_hl_field(MR_mktag(0), Var_39, 1) = ((MR_Box) (check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_1));
        MR_hl_field(MR_mktag(0), Var_39, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), Var_39, 3) = ((MR_Box) (PredOrFunc_2));
        MR_hl_field(MR_mktag(0), Var_39, 4) = ((MR_Box) (MethodName_3));
        MR_hl_field(MR_mktag(0), Var_39, 5) = ((MR_Box) (MethodArity_4));
      }
      mercury__list__filter_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0), Var_39, InstanceMethods_9, &(env).check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_env_0__MatchingMethods_17);
      (env).check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_env_0__succeeded = ((env).check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_env_0__MatchingMethods_17 != (MR_Word) ((MR_Unsigned) 0U));
      if ((env).check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_env_0__succeeded)
      {
        First_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), (env).check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_env_0__MatchingMethods_17, (MR_Integer) 0))));
        Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), (env).check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_env_0__MatchingMethods_17, (MR_Integer) 1))));
        (env).check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_env_0__succeeded = (Var_41 != (MR_Word) ((MR_Unsigned) 0U));
        if ((env).check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_env_0__succeeded)
        {
          _Second_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_41, (MR_Integer) 0))));
          Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_41, (MR_Integer) 1))));
          packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), First_18, (MR_Integer) 0)));
          Var_49 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), First_18, (MR_Integer) 0))) & (MR_Integer) 1);
          Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), First_18, (MR_Integer) 1))));
          Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), First_18, (MR_Integer) 2))));
          Var_52 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), First_18, (MR_Integer) 3))));
          FirstContext_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), First_18, (MR_Integer) 4))));
          check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_5(&env);
          (env).check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_env_0__succeeded = !((env).check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_env_0__succeeded);
        }
      }
      if ((env).check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_env_0__succeeded)
      {
        MR_Word ClausesList_36;
        MR_Word FlattenedClauses_37;
        MR_Word CombinedMethod_38;
        MR_Word Var_44;

        mercury__list__filter_map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0), (MR_Word) (&check_hlds__check_typeclass_scalar_common_1[4]), (MR_Word) (&check_hlds__check_typeclass_scalar_common_2[6]), (env).check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_env_0__MatchingMethods_17, &ClausesList_36);
        mercury__list__condense_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0), ClausesList_36, &FlattenedClauses_37);
        {
          Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (FlattenedClauses_37));
        }
        {
          CombinedMethod_38 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), CombinedMethod_38, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_2));
          MR_hl_field(MR_mktag(0), CombinedMethod_38, 1) = ((MR_Box) (MethodName_3));
          MR_hl_field(MR_mktag(0), CombinedMethod_38, 2) = ((MR_Box) (Var_44));
          MR_hl_field(MR_mktag(0), CombinedMethod_38, 3) = ((MR_Box) (MethodArity_4));
          MR_hl_field(MR_mktag(0), CombinedMethod_38, 4) = ((MR_Box) (FirstContext_21));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__5_5 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (CombinedMethod_38));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      else
        *HeadVar__5_5 = (env).check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_env_0__MatchingMethods_17;
    }
  }
}

static void MR_CALL 
check_hlds__check_typeclass__method_is_known_3_p_0_1(
  void * env_ptr_arg)
{
  {
    struct check_hlds__check_typeclass__method_is_known_3_p_0_env_0_s * env_ptr = (struct check_hlds__check_typeclass__method_is_known_3_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->check_hlds__check_typeclass__method_is_known_3_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
check_hlds__check_typeclass__method_is_known_3_p_0_3(
  void * env_ptr_arg)
{
  {
    struct check_hlds__check_typeclass__method_is_known_3_p_0_env_0_s * env_ptr = (struct check_hlds__check_typeclass__method_is_known_3_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->check_hlds__check_typeclass__method_is_known_3_p_0_env_0__PredId_16 = ((MR_Word) ((env_ptr)->check_hlds__check_typeclass__method_is_known_3_p_0_env_0__conv0_PredId_16));
    check_hlds__check_typeclass__method_is_known_3_p_0_2(env_ptr);
  }
}

static void MR_CALL 
check_hlds__check_typeclass__method_is_known_3_p_0_2(
  void * env_ptr_arg)
{
  {
    struct check_hlds__check_typeclass__method_is_known_3_p_0_env_0_s * env_ptr = (struct check_hlds__check_typeclass__method_is_known_3_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->check_hlds__check_typeclass__method_is_known_3_p_0_env_0__succeeded = mercury__list__member_2_p_0((env_ptr)->check_hlds__check_typeclass__method_is_known_3_p_0_env_0__TypeCtorInfo_17_17, ((MR_Box) ((env_ptr)->check_hlds__check_typeclass__method_is_known_3_p_0_env_0__PredId_16)), (env_ptr)->check_hlds__check_typeclass__method_is_known_3_p_0_env_0__ClassPredIds_5);
    if ((env_ptr)->check_hlds__check_typeclass__method_is_known_3_p_0_env_0__succeeded)
      check_hlds__check_typeclass__method_is_known_3_p_0_1(env_ptr);
  }
}

static void MR_CALL 
check_hlds__check_typeclass__method_is_known_3_p_0_4(
  void * env_ptr_arg)
{
  {
    struct check_hlds__check_typeclass__method_is_known_3_p_0_env_0_s * env_ptr = (struct check_hlds__check_typeclass__method_is_known_3_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->check_hlds__check_typeclass__method_is_known_3_p_0_env_0__commit_0) == 0)
      {
        (env_ptr)->check_hlds__check_typeclass__method_is_known_3_p_0_env_0__TypeCtorInfo_17_17 = (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0);
        mercury__list__member_2_p_1((env_ptr)->check_hlds__check_typeclass__method_is_known_3_p_0_env_0__TypeCtorInfo_17_17, &(env_ptr)->check_hlds__check_typeclass__method_is_known_3_p_0_env_0__conv0_PredId_16, (env_ptr)->check_hlds__check_typeclass__method_is_known_3_p_0_env_0__MatchingPredIds_13, check_hlds__check_typeclass__method_is_known_3_p_0_3, env_ptr);
        (env_ptr)->check_hlds__check_typeclass__method_is_known_3_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->check_hlds__check_typeclass__method_is_known_3_p_0_env_0__succeeded = MR_TRUE;
  }
}

static MR_bool MR_CALL 
check_hlds__check_typeclass__method_is_known_3_p_0(
  MR_Word PredTable_4,
  MR_Word ClassPredIds_5,
  MR_Word Method_6)
{
  {
    struct check_hlds__check_typeclass__method_is_known_3_p_0_env_0_s env;

    (env).check_hlds__check_typeclass__method_is_known_3_p_0_env_0__ClassPredIds_5 = ClassPredIds_5;
    {
      MR_Word MethodPredOrFunc_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Method_6, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word MethodName_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Method_6, (MR_Integer) 1))));
      MR_Integer MethodArity_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Method_6, (MR_Integer) 3))));
      MR_Integer MethodPredArity_12;
      MR_Word _MethodDefn_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Method_6, (MR_Integer) 2))));
      MR_Word _Context_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Method_6, (MR_Integer) 4))));
      MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Method_6, (MR_Integer) 0)));

      parse_tree__prog_util__adjust_func_arity_3_p_0(MethodPredOrFunc_7, MethodArity_10, &MethodPredArity_12);
      hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(PredTable_4, (MR_Integer) 0, MethodPredOrFunc_7, MethodName_8, MethodPredArity_12, &(env).check_hlds__check_typeclass__method_is_known_3_p_0_env_0__MatchingPredIds_13);
      check_hlds__check_typeclass__method_is_known_3_p_0_4(&env);
      return (env).check_hlds__check_typeclass__method_is_known_3_p_0_env_0__succeeded;
    }
  }
}

static void MR_CALL 
check_hlds__check_typeclass__check_class_instance_15_p_0(
  MR_Word ClassId_16,
  MR_Word SuperClasses_17,
  MR_Word Vars_18,
  MR_Word HLDSClassInterface_19,
  MR_Word ClassInterface_20,
  MR_Word ClassVarSet_21,
  MR_Word ClassPredIds_22,
  MR_Word STATE_VARIABLE_InstanceDefn_0_38,
  MR_Word * STATE_VARIABLE_InstanceDefn_39,
  MR_Word STATE_VARIABLE_ModuleInfo_0_40,
  MR_Word * STATE_VARIABLE_ModuleInfo_41,
  MR_Word STATE_VARIABLE_QualInfo_0_42,
  MR_Word * STATE_VARIABLE_QualInfo_43,
  MR_Word STATE_VARIABLE_Specs_0_44,
  MR_Word * STATE_VARIABLE_Specs_45)
{
  {
    MR_Word TermContext_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_InstanceDefn_0_38, (MR_Integer) 4))));
    MR_Word InstanceBody_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_InstanceDefn_0_38, (MR_Integer) 6))));
    MR_Word STATE_VARIABLE_InstanceDefn_46_46;
    MR_Word STATE_VARIABLE_Specs_49_49;

    if ((InstanceBody_33 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      STATE_VARIABLE_InstanceDefn_46_46 = STATE_VARIABLE_InstanceDefn_0_38;
      *STATE_VARIABLE_ModuleInfo_41 = STATE_VARIABLE_ModuleInfo_0_40;
      *STATE_VARIABLE_QualInfo_43 = STATE_VARIABLE_QualInfo_0_42;
      STATE_VARIABLE_Specs_49_49 = STATE_VARIABLE_Specs_0_44;
    }
    else
    {
      MR_Word InstanceMethods_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstanceBody_33, (MR_Integer) 0))));

      check_hlds__check_typeclass__check_concrete_class_instance_15_p_0(ClassId_16, Vars_18, HLDSClassInterface_19, ClassInterface_20, ClassPredIds_22, TermContext_31, InstanceMethods_37, STATE_VARIABLE_InstanceDefn_0_38, &STATE_VARIABLE_InstanceDefn_46_46, STATE_VARIABLE_ModuleInfo_0_40, STATE_VARIABLE_ModuleInfo_41, STATE_VARIABLE_QualInfo_0_42, STATE_VARIABLE_QualInfo_43, STATE_VARIABLE_Specs_0_44, &STATE_VARIABLE_Specs_49_49);
    }
    check_hlds__check_typeclass__check_superclass_conformance_9_p_0(ClassId_16, SuperClasses_17, Vars_18, ClassVarSet_21, *STATE_VARIABLE_ModuleInfo_41, STATE_VARIABLE_InstanceDefn_46_46, STATE_VARIABLE_InstanceDefn_39, STATE_VARIABLE_Specs_49_49, STATE_VARIABLE_Specs_45);
  }
}

static void MR_CALL 
check_hlds__check_typeclass__check_superclass_conformance_9_p_0(
  MR_Word ClassId_10,
  MR_Word ProgSuperClasses0_11,
  MR_Word ClassVars0_12,
  MR_Word ClassVarSet_13,
  MR_Word ModuleInfo_14,
  MR_Word InstanceDefn0_15,
  MR_Word * InstanceDefn_16,
  MR_Word STATE_VARIABLE_Specs_0_54,
  MR_Word * STATE_VARIABLE_Specs_55)
{
  {
    MR_Word ModuleName_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn0_15, (MR_Integer) 0))));
    MR_Word InstanceTypes_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn0_15, (MR_Integer) 1))));
    MR_Word OriginalTypes_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn0_15, (MR_Integer) 2))));
    MR_Word Status_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn0_15, (MR_Integer) 3))));
    MR_Word Context_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn0_15, (MR_Integer) 4))));
    MR_Word InstanceProgConstraints_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn0_15, (MR_Integer) 5))));
    MR_Word Body_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn0_15, (MR_Integer) 6))));
    MR_Word Interface_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn0_15, (MR_Integer) 7))));
    MR_Word InstanceVarSet0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn0_15, (MR_Integer) 8))));
    MR_Word Proofs0_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn0_15, (MR_Integer) 9))));
    MR_Word InstanceVarSet1_28;
    MR_Word Renaming_29;
    MR_Word ProgSuperClasses_30;
    MR_Word ClassVars_31;
    MR_Word TypeSubst_32;
    MR_Word ClassTable_33;
    MR_Word InstanceTable_34;
    MR_Word SuperClasses_35;
    MR_Word InstanceConstraints_36;
    MR_Word Constraints0_37;
    MR_Word ConstraintMap0_38;
    MR_Word InstanceVarSet2_40;
    MR_Word Proofs1_41;
    MR_Word Constraints_43;
    MR_Word UnprovenConstraints_44;
    MR_Word Var_39;
    MR_Word Var_42;

    parse_tree__prog_data__tvarset_merge_renaming_4_p_0(InstanceVarSet0_26, ClassVarSet_13, &InstanceVarSet1_28, &Renaming_29);
    parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_p_0(Renaming_29, ProgSuperClasses0_11, &ProgSuperClasses_30);
    parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_p_0(Renaming_29, ClassVars0_12, &ClassVars_31);
    mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[5]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ClassVars_31, InstanceTypes_19, &TypeSubst_32);
    hlds__hlds_module__module_info_get_class_table_2_p_0(ModuleInfo_14, &ClassTable_33);
    hlds__hlds_module__module_info_get_instance_table_2_p_0(ModuleInfo_14, &InstanceTable_34);
    hlds__hlds_class__init_hlds_constraint_list_2_p_0(ProgSuperClasses_30, &SuperClasses_35);
    hlds__hlds_class__init_hlds_constraint_list_2_p_0(InstanceProgConstraints_23, &InstanceConstraints_36);
    hlds__hlds_class__make_hlds_constraints_5_p_0(ClassTable_33, InstanceVarSet1_28, SuperClasses_35, InstanceConstraints_36, &Constraints0_37);
    mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_id_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), &ConstraintMap0_38);
    check_hlds__typeclasses__reduce_context_by_rule_application_13_p_0(ClassTable_33, InstanceTable_34, ClassVars_31, TypeSubst_32, &Var_39, InstanceVarSet1_28, &InstanceVarSet2_40, Proofs0_27, &Proofs1_41, ConstraintMap0_38, &Var_42, Constraints0_37, &Constraints_43);
    UnprovenConstraints_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraints_43, (MR_Integer) 0))));
    if ((UnprovenConstraints_44 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
        *InstanceDefn_16 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleName_18));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (InstanceTypes_19));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (OriginalTypes_20));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Status_21));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Context_22));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (InstanceProgConstraints_23));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Body_24));
        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Interface_25));
        MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (InstanceVarSet2_40));
        MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Proofs1_41));
      }
      *STATE_VARIABLE_Specs_55 = STATE_VARIABLE_Specs_0_54;
    }
    else
    {
      MR_Word ClassName_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassId_10, (MR_Integer) 0))));
      MR_String ClassNameString_49;
      MR_String InstanceTypesString_50;
      MR_String ConstraintsString_51;
      MR_Word Pieces_52;
      MR_Word Spec_53;
      MR_Word Var_58;
      MR_Word Var_59;
      MR_String Var_60;
      MR_String Var_61;
      MR_String Var_63;
      MR_Word Var_65;
      MR_Word Var_68;
      MR_Word Var_70;
      MR_Word Var_73;
      MR_Word Var_74;
      MR_String Var_75;
      MR_Word Var_78;
      MR_Word Var_81;
      MR_Word Var_83;
      MR_Word Var_84;
      MR_Word C_106;
      MR_Word Cs_107;
      MR_Word P_109;
      MR_String PString_110;
      MR_Word TailStrings_111;
      MR_Word Strings_112;
      MR_Word Var_114;
      MR_Word Var_115;
      MR_Box conv0_Var_75;

      ClassNameString_49 = mdbcomp__sym_name__unqualify_name_1_f_0(ClassName_47);
      InstanceTypesString_50 = parse_tree__mercury_to_mercury__mercury_type_list_to_string_2_f_0(InstanceVarSet2_40, InstanceTypes_19);
      C_106 = ((MR_Word) ((MR_hl_field(MR_mktag(1), UnprovenConstraints_44, (MR_Integer) 0))));
      Cs_107 = ((MR_Word) ((MR_hl_field(MR_mktag(1), UnprovenConstraints_44, (MR_Integer) 1))));
      hlds__hlds_class__retrieve_prog_constraint_2_p_0(C_106, &P_109);
      PString_110 = parse_tree__mercury_to_mercury__mercury_constraint_to_string_2_f_0(ClassVarSet_13, P_109);
      check_hlds__check_typeclass__constraint_list_to_comma_strings_3_p_0(ClassVarSet_13, Cs_107, &TailStrings_111);
      {
        Var_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_115, 0) = ((MR_Box) ((MR_String) "\'"));
        MR_hl_field(MR_mktag(1), Var_115, 1) = ((MR_Box) (TailStrings_111));
      }
      {
        Var_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_114, 0) = ((MR_Box) (PString_110));
        MR_hl_field(MR_mktag(1), Var_114, 1) = ((MR_Box) (Var_115));
      }
      {
        Strings_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Strings_112, 0) = ((MR_Box) ((MR_String) "\140"));
        MR_hl_field(MR_mktag(1), Strings_112, 1) = ((MR_Box) (Var_114));
      }
      ConstraintsString_51 = mercury__string__append_list_1_f_0(Strings_112);
      Var_63 = mercury__string__f_43_43_2_f_0(InstanceTypesString_50, (MR_String) ")");
      Var_61 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_63);
      Var_60 = mercury__string__f_43_43_2_f_0(ClassNameString_49, Var_61);
      {
        Var_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_59, 0) = ((MR_Box) ((MR_Unsigned) 6U));
        MR_hl_field(MR_mktag(3), Var_59, 1) = ((MR_Box) (Var_60));
      }
      conv0_Var_75 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), UnprovenConstraints_44, ((MR_Box) ((MR_String) "constraint is")), ((MR_Box) ((MR_String) "constraints are")));
      Var_75 = ((MR_String) (conv0_Var_75));
      {
        Var_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_74, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), Var_74, 1) = ((MR_Box) (Var_75));
      }
      {
        Var_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_84, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), Var_84, 1) = ((MR_Box) (ConstraintsString_51));
      }
      {
        Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (Var_84));
        MR_hl_field(MR_mktag(1), Var_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[37])));
      }
      {
        Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(MR_mktag(1), Var_81, 1) = ((MR_Box) (Var_83));
      }
      {
        Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[53])));
        MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) (Var_81));
      }
      {
        Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (Var_74));
        MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) (Var_78));
      }
      {
        Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[52])));
        MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) (Var_73));
      }
      {
        Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (Var_70));
      }
      {
        Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[42])));
        MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (Var_68));
      }
      {
        Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (Var_59));
        MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (Var_65));
      }
      {
        Pieces_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[41])));
        MR_hl_field(MR_mktag(1), Pieces_52, 1) = ((MR_Box) (Var_58));
      }
      {
        Spec_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_53, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.check_typeclass.check_superclass_conformance\'/9"));
        MR_hl_field(MR_mktag(1), Spec_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_53, 2) = ((MR_Box) ((MR_Unsigned) 48U));
        MR_hl_field(MR_mktag(1), Spec_53, 3) = ((MR_Box) (Context_22));
        MR_hl_field(MR_mktag(1), Spec_53, 4) = ((MR_Box) (Pieces_52));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_55 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_53));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_54));
      }
      *InstanceDefn_16 = InstanceDefn0_15;
    }
  }
}

static void MR_CALL 
check_hlds__check_typeclass__constraint_list_to_comma_strings_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word C_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Cs_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word P_9;
    MR_String PString_10;
    MR_Word TailStrings_11;
    MR_Word Var_13;
    MR_Word Var_14;

    hlds__hlds_class__retrieve_prog_constraint_2_p_0(C_6, &P_9);
    PString_10 = parse_tree__mercury_to_mercury__mercury_constraint_to_string_2_f_0(HeadVar__1_1, P_9);
    check_hlds__check_typeclass__constraint_list_to_comma_strings_3_p_0(HeadVar__1_1, Cs_7, &TailStrings_11);
    {
      Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_14, 0) = ((MR_Box) ((MR_String) "\'"));
      MR_hl_field(MR_mktag(1), Var_14, 1) = ((MR_Box) (TailStrings_11));
    }
    {
      Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_13, 0) = ((MR_Box) (PString_10));
      MR_hl_field(MR_mktag(1), Var_13, 1) = ((MR_Box) (Var_14));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) ", \140"));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_13));
    }
  }
}

static void MR_CALL 
check_hlds__check_typeclass__check_concrete_class_instance_15_p_0_1(
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
  MR_Box * wrapper_arg_11)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_InstanceDefn_20;
    MR_Word conv3_STATE_VARIABLE_RevOrderedMethods_69;
    MR_Word conv2_STATE_VARIABLE_ModuleInfo_71;
    MR_Word conv1_STATE_VARIABLE_QualInfo_73;
    MR_Word conv0_STATE_VARIABLE_Specs_75;

    check_hlds__check_typeclass__check_instance_pred_14_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_InstanceDefn_20, ((MR_Word) (wrapper_arg_4)), &conv3_STATE_VARIABLE_RevOrderedMethods_69, ((MR_Word) (wrapper_arg_6)), &conv2_STATE_VARIABLE_ModuleInfo_71, ((MR_Word) (wrapper_arg_8)), &conv1_STATE_VARIABLE_QualInfo_73, ((MR_Word) (wrapper_arg_10)), &conv0_STATE_VARIABLE_Specs_75);
    *wrapper_arg_3 = ((MR_Box) (conv4_InstanceDefn_20));
    *wrapper_arg_5 = ((MR_Box) (conv3_STATE_VARIABLE_RevOrderedMethods_69));
    *wrapper_arg_7 = ((MR_Box) (conv2_STATE_VARIABLE_ModuleInfo_71));
    *wrapper_arg_9 = ((MR_Box) (conv1_STATE_VARIABLE_QualInfo_73));
    *wrapper_arg_11 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_75));
  }
}

static void MR_CALL 
check_hlds__check_typeclass__check_concrete_class_instance_15_p_0(
  MR_Word ClassId_16,
  MR_Word Vars_17,
  MR_Word HLDSClassInterface_18,
  MR_Word ClassInterface_19,
  MR_Word ClassPredIds_20,
  MR_Word TermContext_21,
  MR_Word InstanceMethods_22,
  MR_Word STATE_VARIABLE_InstanceDefn_0_36,
  MR_Word * STATE_VARIABLE_InstanceDefn_37,
  MR_Word STATE_VARIABLE_ModuleInfo_0_38,
  MR_Word * STATE_VARIABLE_ModuleInfo_39,
  MR_Word STATE_VARIABLE_QualInfo_0_40,
  MR_Word * STATE_VARIABLE_QualInfo_41,
  MR_Word STATE_VARIABLE_Specs_0_42,
  MR_Word * STATE_VARIABLE_Specs_43)
{
  if ((ClassInterface_19 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Pieces_27;
    MR_Word Spec_28;
    MR_Word Var_57;
    MR_Word Var_58;

    {
      Var_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_58, 0) = ((MR_Box) ((MR_Unsigned) 23U));
      MR_hl_field(MR_mktag(3), Var_58, 1) = ((MR_Box) (ClassId_16));
    }
    {
      Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (Var_58));
      MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[37])));
    }
    {
      Pieces_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[51])));
      MR_hl_field(MR_mktag(1), Pieces_27, 1) = ((MR_Box) (Var_57));
    }
    {
      Spec_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_28, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.check_typeclass.check_concrete_class_instance\'/15"));
      MR_hl_field(MR_mktag(1), Spec_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_28, 2) = ((MR_Box) ((MR_Unsigned) 48U));
      MR_hl_field(MR_mktag(1), Spec_28, 3) = ((MR_Box) (TermContext_21));
      MR_hl_field(MR_mktag(1), Spec_28, 4) = ((MR_Box) (Pieces_27));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_43 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_28));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_42));
    }
    *STATE_VARIABLE_InstanceDefn_37 = STATE_VARIABLE_InstanceDefn_0_36;
    *STATE_VARIABLE_ModuleInfo_39 = STATE_VARIABLE_ModuleInfo_0_38;
    *STATE_VARIABLE_QualInfo_41 = STATE_VARIABLE_QualInfo_0_40;
  }
  else
  {
    MR_Word RevInstanceMethods_30;
    MR_Word MaybePredProcs1_31;
    MR_Word MaybePredProcs_33;
    MR_Word OrderedInstanceMethods_34;
    MR_Word Context_35;
    MR_Word Var_44;
    MR_Word STATE_VARIABLE_InstanceDefn_45_45;
    MR_Word STATE_VARIABLE_Specs_49_49;
    MR_Word Var_53;
    MR_Word Var_78;
    MR_Word Var_79;
    MR_Word Var_80;
    MR_Word Var_81;
    MR_Word Var_83;
    MR_Word Var_86;
    MR_Word Var_87;
    MR_Box conv9_STATE_VARIABLE_InstanceDefn_45_45;
    MR_Box conv8_RevInstanceMethods_30;
    MR_Box conv7_STATE_VARIABLE_ModuleInfo_39;
    MR_Box conv6_STATE_VARIABLE_QualInfo_41;
    MR_Box conv5_STATE_VARIABLE_Specs_49_49;

    {
      Var_44 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_44, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_13[0]));
      MR_hl_field(MR_mktag(0), Var_44, 1) = ((MR_Box) (check_hlds__check_typeclass__check_concrete_class_instance_15_p_0_1));
      MR_hl_field(MR_mktag(0), Var_44, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_44, 3) = ((MR_Box) (ClassId_16));
      MR_hl_field(MR_mktag(0), Var_44, 4) = ((MR_Box) (Vars_17));
      MR_hl_field(MR_mktag(0), Var_44, 5) = ((MR_Box) (HLDSClassInterface_18));
    }
    mercury__list__foldl5_12_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0), (MR_Word) (&check_hlds__check_typeclass_scalar_common_1[3]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_make_hlds_qual_info_0), (MR_Word) (&check_hlds__check_typeclass_scalar_common_1[1]), Var_44, ClassPredIds_20, ((MR_Box) (STATE_VARIABLE_InstanceDefn_0_36)), &conv9_STATE_VARIABLE_InstanceDefn_45_45, ((MR_Box) ((MR_Unsigned) 0U)), &conv8_RevInstanceMethods_30, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_38)), &conv7_STATE_VARIABLE_ModuleInfo_39, ((MR_Box) (STATE_VARIABLE_QualInfo_0_40)), &conv6_STATE_VARIABLE_QualInfo_41, ((MR_Box) (STATE_VARIABLE_Specs_0_42)), &conv5_STATE_VARIABLE_Specs_49_49);
    STATE_VARIABLE_InstanceDefn_45_45 = ((MR_Word) (conv9_STATE_VARIABLE_InstanceDefn_45_45));
    RevInstanceMethods_30 = ((MR_Word) (conv8_RevInstanceMethods_30));
    *STATE_VARIABLE_ModuleInfo_39 = ((MR_Word) (conv7_STATE_VARIABLE_ModuleInfo_39));
    *STATE_VARIABLE_QualInfo_41 = ((MR_Word) (conv6_STATE_VARIABLE_QualInfo_41));
    STATE_VARIABLE_Specs_49_49 = ((MR_Word) (conv5_STATE_VARIABLE_Specs_49_49));
    MaybePredProcs1_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_InstanceDefn_45_45, (MR_Integer) 7))));
    if ((MaybePredProcs1_31 == (MR_Word) ((MR_Unsigned) 0U)))
      MaybePredProcs_33 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_3[1]));
    else
      MaybePredProcs_33 = MaybePredProcs1_31;
    OrderedInstanceMethods_34 = mercury__list__reverse_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0), RevInstanceMethods_30);
    Var_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_InstanceDefn_45_45, (MR_Integer) 0))));
    Var_79 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_InstanceDefn_45_45, (MR_Integer) 1))));
    Var_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_InstanceDefn_45_45, (MR_Integer) 2))));
    Var_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_InstanceDefn_45_45, (MR_Integer) 3))));
    Context_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_InstanceDefn_45_45, (MR_Integer) 4))));
    Var_83 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_InstanceDefn_45_45, (MR_Integer) 5))));
    Var_86 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_InstanceDefn_45_45, (MR_Integer) 8))));
    Var_87 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_InstanceDefn_45_45, (MR_Integer) 9))));
    {
      Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (OrderedInstanceMethods_34));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_InstanceDefn_37 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_78));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_79));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_80));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_81));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Context_35));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_83));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_53));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (MaybePredProcs_33));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_86));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_87));
    }
    check_hlds__check_typeclass__check_for_unknown_methods_7_p_0(InstanceMethods_22, ClassId_16, ClassPredIds_20, Context_35, *STATE_VARIABLE_ModuleInfo_39, STATE_VARIABLE_Specs_49_49, STATE_VARIABLE_Specs_43);
  }
}

static MR_bool MR_CALL 
check_hlds__check_typeclass__check_for_unknown_methods_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__check_typeclass__method_is_known_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__check_typeclass__check_for_unknown_methods_7_p_0(
  MR_Word InstanceMethods_8,
  MR_Word ClassId_9,
  MR_Word ClassPredIds_10,
  MR_Word Context_11,
  MR_Word ModuleInfo_12,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20)
{
  {
    MR_bool succeeded;
    MR_Word PredTable_14;
    MR_Word UnknownInstanceMethods_16;
    MR_Word Var_21;
    MR_Word _KnownInstanceMethods_15;

    hlds__hlds_module__module_info_get_predicate_table_2_p_0(ModuleInfo_12, &PredTable_14);
    {
      Var_21 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_9[2]));
      MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (check_hlds__check_typeclass__check_for_unknown_methods_7_p_0_1));
      MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (PredTable_14));
      MR_hl_field(MR_mktag(0), Var_21, 4) = ((MR_Box) (ClassPredIds_10));
    }
    mercury__list__filter_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0), Var_21, InstanceMethods_8, &_KnownInstanceMethods_15, &UnknownInstanceMethods_16);
    if ((UnknownInstanceMethods_16 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Specs_20 = STATE_VARIABLE_Specs_0_19;
    else
    {
      MR_Word HeadMethod_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), UnknownInstanceMethods_16, (MR_Integer) 0))));
      MR_Word TailMethods_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), UnknownInstanceMethods_16, (MR_Integer) 1))));
      MR_Word Pieces_38;
      MR_Word Spec_43;

      if ((TailMethods_18 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word HeadPredOrFunc_32 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadMethod_17, (MR_Integer) 0))) & (MR_Integer) 1);
        MR_Word HeadMethodName_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadMethod_17, (MR_Integer) 1))));
        MR_Integer HeadArity_35 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadMethod_17, (MR_Integer) 3))));
        MR_Integer HeadPredArity_37;
        MR_Word Var_61;
        MR_Word Var_62;
        MR_Word Var_63;
        MR_Word Var_66;
        MR_Word Var_68;
        MR_Word Var_71;
        MR_Word Var_72;
        MR_Word Var_73;
        MR_Word Var_76;
        MR_Word Var_77;
        MR_Word Var_78;

        parse_tree__prog_util__adjust_func_arity_3_p_0(HeadPredOrFunc_32, HeadArity_35, &HeadPredArity_37);
        {
          Var_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_62, 0) = ((MR_Box) ((MR_Unsigned) 23U));
          MR_hl_field(MR_mktag(3), Var_62, 1) = ((MR_Box) (ClassId_9));
        }
        {
          Var_72 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_72, 0) = ((MR_Box) ((MR_Unsigned) 27U));
          MR_hl_field(MR_mktag(3), Var_72, 1) = (MR_Box) ((MR_Unsigned) (HeadPredOrFunc_32));
        }
        {
          Var_78 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_78, 0) = ((MR_Box) (HeadMethodName_33));
          MR_hl_field(MR_mktag(0), Var_78, 1) = ((MR_Box) (HeadPredArity_37));
        }
        {
          Var_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_77, 0) = ((MR_Box) ((MR_Unsigned) 11U));
          MR_hl_field(MR_mktag(3), Var_77, 1) = ((MR_Box) (Var_78));
        }
        {
          Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (Var_77));
          MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[37])));
        }
        {
          Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[154])));
          MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) (Var_76));
        }
        {
          Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (Var_72));
          MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) (Var_73));
        }
        {
          Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[153])));
          MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (Var_71));
        }
        {
          Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) (Var_68));
        }
        {
          Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[42])));
          MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) (Var_66));
        }
        {
          Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (Var_62));
          MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (Var_63));
        }
        {
          Pieces_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[41])));
          MR_hl_field(MR_mktag(1), Pieces_38, 1) = ((MR_Box) (Var_61));
        }
      }
      else
      {
        MR_Word Pieces1_41;
        MR_Word Pieces2_42;
        MR_Word Var_46;
        MR_Word Var_47;

        {
          Var_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_47, 0) = ((MR_Box) ((MR_Unsigned) 23U));
          MR_hl_field(MR_mktag(3), Var_47, 1) = ((MR_Box) (ClassId_9));
        }
        {
          Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Var_47));
          MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[158])));
        }
        {
          Pieces1_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces1_41, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[41])));
          MR_hl_field(MR_mktag(1), Pieces1_41, 1) = ((MR_Box) (Var_46));
        }
        check_hlds__check_typeclass__format_method_names_3_p_0(HeadMethod_17, TailMethods_18, &Pieces2_42);
        Pieces_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Pieces1_41, Pieces2_42);
      }
      {
        Spec_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_43, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.check_typeclass.report_unknown_instance_methods\'/6"));
        MR_hl_field(MR_mktag(1), Spec_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_43, 2) = ((MR_Box) ((MR_Unsigned) 48U));
        MR_hl_field(MR_mktag(1), Spec_43, 3) = ((MR_Box) (Context_11));
        MR_hl_field(MR_mktag(1), Spec_43, 4) = ((MR_Box) (Pieces_38));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_20 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_43));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_19));
      }
    }
  }
}

static void MR_CALL 
check_hlds__check_typeclass__format_method_names_3_p_0(
  MR_Word HeadMethod_4,
  MR_Word TailMethods_5,
  MR_Word * Pieces_6)
{
  {
    MR_Word PredOrFunc_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadMethod_4, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word Name_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadMethod_4, (MR_Integer) 1))));
    MR_Integer Arity_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadMethod_4, (MR_Integer) 3))));
    MR_Integer PredArity_12;

    parse_tree__prog_util__adjust_func_arity_3_p_0(PredOrFunc_7, Arity_10, &PredArity_12);
    if ((TailMethods_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_28;
      MR_Word Var_29;
      MR_Word Var_30;
      MR_Word Var_31;

      {
        Var_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_28, 0) = ((MR_Box) ((MR_Unsigned) 27U));
        MR_hl_field(MR_mktag(3), Var_28, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_7));
      }
      {
        Var_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (Name_8));
        MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) (PredArity_12));
      }
      {
        Var_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_30, 0) = ((MR_Box) ((MR_Unsigned) 11U));
        MR_hl_field(MR_mktag(3), Var_30, 1) = ((MR_Box) (Var_31));
      }
      {
        Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (Var_30));
        MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[37])));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Pieces_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_28));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_29));
      }
    }
    else
    {
      MR_Word HeadTailMethod_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailMethods_5, (MR_Integer) 0))));
      MR_Word TailTailMethods_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailMethods_5, (MR_Integer) 1))));
      MR_Word TailPieces_15;
      MR_Word Var_16;
      MR_Word Var_17;
      MR_Word Var_18;
      MR_Word Var_19;
      MR_Word Var_20;
      MR_Word Var_23;
      MR_Word Var_26;

      check_hlds__check_typeclass__format_method_names_3_p_0(HeadTailMethod_13, TailTailMethods_14, &TailPieces_15);
      {
        Var_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_16, 0) = ((MR_Box) ((MR_Unsigned) 27U));
        MR_hl_field(MR_mktag(3), Var_16, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_7));
      }
      {
        Var_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (Name_8));
        MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) (PredArity_12));
      }
      {
        Var_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_18, 0) = ((MR_Box) ((MR_Unsigned) 11U));
        MR_hl_field(MR_mktag(3), Var_18, 1) = ((MR_Box) (Var_19));
      }
      {
        Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (TailPieces_15));
      }
      {
        Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[159])));
        MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (Var_26));
      }
      {
        Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[144])));
        MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (Var_23));
      }
      {
        Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (Var_18));
        MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (Var_20));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Pieces_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_16));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_17));
      }
    }
  }
}

static void MR_CALL 
check_hlds__check_typeclass__check_one_class_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv5_STATE_VARIABLE_InstanceDefn_39;
    MR_Word conv4_STATE_VARIABLE_ModuleInfo_41;
    MR_Word conv3_STATE_VARIABLE_QualInfo_43;
    MR_Word conv2_STATE_VARIABLE_Specs_45;

    check_hlds__check_typeclass__check_class_instance_15_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 8)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 9)))), ((MR_Word) (wrapper_arg_1)), &conv5_STATE_VARIABLE_InstanceDefn_39, ((MR_Word) (wrapper_arg_3)), &conv4_STATE_VARIABLE_ModuleInfo_41, ((MR_Word) (wrapper_arg_5)), &conv3_STATE_VARIABLE_QualInfo_43, ((MR_Word) (wrapper_arg_7)), &conv2_STATE_VARIABLE_Specs_45);
    *wrapper_arg_2 = ((MR_Box) (conv5_STATE_VARIABLE_InstanceDefn_39));
    *wrapper_arg_4 = ((MR_Box) (conv4_STATE_VARIABLE_ModuleInfo_41));
    *wrapper_arg_6 = ((MR_Box) (conv3_STATE_VARIABLE_QualInfo_43));
    *wrapper_arg_8 = ((MR_Box) (conv2_STATE_VARIABLE_Specs_45));
  }
}

static MR_Box MR_CALL 
check_hlds__check_typeclass__check_one_class_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__2_2;

    conv1_HeadVar__2_2 = hlds__hlds_pred__pred_proc_id_project_pred_id_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
check_hlds__check_typeclass__check_one_class_10_p_0(
  MR_Word ClassTable_11,
  MR_Word ClassId_12,
  MR_Word InstanceDefns0_13,
  MR_Word * InstanceDefns_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_34,
  MR_Word * STATE_VARIABLE_ModuleInfo_35,
  MR_Word STATE_VARIABLE_QualInfo_0_36,
  MR_Word * STATE_VARIABLE_QualInfo_37,
  MR_Word STATE_VARIABLE_Specs_0_38,
  MR_Word * STATE_VARIABLE_Specs_39)
{
  {
    MR_bool succeeded;
    MR_Word ClassDefn_18;
    MR_Word TypeClassStatus_19;
    MR_Word SuperClasses_20;
    MR_Word ClassVars_23;
    MR_Word Interface_25;
    MR_Word ClassInterface_26;
    MR_Word ClassVarSet_27;
    MR_Word ClassContext_28;
    MR_Word MaybeBadDefn_29;
    MR_Box conv0_ClassDefn_18;
    MR_Word Var_40;

    mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), ClassTable_11, ((MR_Box) (ClassId_12)), &conv0_ClassDefn_18);
    ClassDefn_18 = ((MR_Word) (conv0_ClassDefn_18));
    TypeClassStatus_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_18, (MR_Integer) 0))));
    SuperClasses_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_18, (MR_Integer) 1))));
    ClassVars_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_18, (MR_Integer) 4))));
    Interface_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_18, (MR_Integer) 6))));
    ClassInterface_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_18, (MR_Integer) 7))));
    ClassVarSet_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_18, (MR_Integer) 8))));
    ClassContext_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_18, (MR_Integer) 9))));
    MaybeBadDefn_29 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ClassDefn_18, (MR_Integer) 10))) & (MR_Integer) 1);
    Var_40 = hlds__status__typeclass_status_defined_in_this_module_1_f_0(TypeClassStatus_19);
    succeeded = (Var_40 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (Interface_25 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      switch (MaybeBadDefn_29) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          *STATE_VARIABLE_Specs_39 = STATE_VARIABLE_Specs_0_38;
          break;
        case (MR_Integer) 0:
          {
            MR_Word Pieces_30;
            MR_Word Spec_31;
            MR_Word Var_43;
            MR_Word Var_44;

            {
              Var_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_44, 0) = ((MR_Box) ((MR_Unsigned) 23U));
              MR_hl_field(MR_mktag(3), Var_44, 1) = ((MR_Box) (ClassId_12));
            }
            {
              Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (Var_44));
              MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[37])));
            }
            {
              Pieces_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Pieces_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[50])));
              MR_hl_field(MR_mktag(1), Pieces_30, 1) = ((MR_Box) (Var_43));
            }
            {
              Spec_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Spec_31, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.check_typeclass.check_one_class\'/10"));
              MR_hl_field(MR_mktag(1), Spec_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Spec_31, 2) = ((MR_Box) ((MR_Unsigned) 48U));
              MR_hl_field(MR_mktag(1), Spec_31, 3) = ((MR_Box) (ClassContext_28));
              MR_hl_field(MR_mktag(1), Spec_31, 4) = ((MR_Box) (Pieces_30));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Specs_39 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_31));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_38));
            }
          }
          break;
      }
      *InstanceDefns_14 = InstanceDefns0_13;
      *STATE_VARIABLE_QualInfo_37 = STATE_VARIABLE_QualInfo_0_36;
      *STATE_VARIABLE_ModuleInfo_35 = STATE_VARIABLE_ModuleInfo_0_34;
    }
    else
    {
      MR_Word ClassProcPredIds0_32;
      MR_Word ClassProcPredIds_33;
      MR_Word Var_56;
      MR_Box conv8_STATE_VARIABLE_ModuleInfo_35;
      MR_Box conv7_STATE_VARIABLE_QualInfo_37;
      MR_Box conv6_STATE_VARIABLE_Specs_39;

      ClassProcPredIds0_32 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&check_hlds__check_typeclass_scalar_common_2[5]), ClassInterface_26);
      mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ClassProcPredIds0_32, &ClassProcPredIds_33);
      {
        Var_56 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_56, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_12[0]));
        MR_hl_field(MR_mktag(0), Var_56, 1) = ((MR_Box) (check_hlds__check_typeclass__check_one_class_10_p_0_2));
        MR_hl_field(MR_mktag(0), Var_56, 2) = ((MR_Box) ((MR_Integer) 7));
        MR_hl_field(MR_mktag(0), Var_56, 3) = ((MR_Box) (ClassId_12));
        MR_hl_field(MR_mktag(0), Var_56, 4) = ((MR_Box) (SuperClasses_20));
        MR_hl_field(MR_mktag(0), Var_56, 5) = ((MR_Box) (ClassVars_23));
        MR_hl_field(MR_mktag(0), Var_56, 6) = ((MR_Box) (ClassInterface_26));
        MR_hl_field(MR_mktag(0), Var_56, 7) = ((MR_Box) (Interface_25));
        MR_hl_field(MR_mktag(0), Var_56, 8) = ((MR_Box) (ClassVarSet_27));
        MR_hl_field(MR_mktag(0), Var_56, 9) = ((MR_Box) (ClassProcPredIds_33));
      }
      mercury__list__map_foldl3_9_p_1((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_make_hlds_qual_info_0), (MR_Word) (&check_hlds__check_typeclass_scalar_common_1[1]), Var_56, InstanceDefns0_13, InstanceDefns_14, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_34)), &conv8_STATE_VARIABLE_ModuleInfo_35, ((MR_Box) (STATE_VARIABLE_QualInfo_0_36)), &conv7_STATE_VARIABLE_QualInfo_37, ((MR_Box) (STATE_VARIABLE_Specs_0_38)), &conv6_STATE_VARIABLE_Specs_39);
      *STATE_VARIABLE_ModuleInfo_35 = ((MR_Word) (conv8_STATE_VARIABLE_ModuleInfo_35));
      *STATE_VARIABLE_QualInfo_37 = ((MR_Word) (conv7_STATE_VARIABLE_QualInfo_37));
      *STATE_VARIABLE_Specs_39 = ((MR_Word) (conv6_STATE_VARIABLE_Specs_39));
    }
  }
}

static MR_Word MR_CALL 
check_hlds__check_typeclass__non_tvar_arg_to_pieces_2_f_0(
  MR_Word TVarSet_4,
  MR_Word HeadVar__2_2)
{
  {
    MR_Word Pieces_7;
    MR_Integer ArgNum_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgType_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_String TypeStr_8;
    MR_Word Var_12;
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Word Var_17;
    MR_Word Var_18;

    TypeStr_8 = parse_tree__mercury_to_mercury__mercury_type_to_string_3_f_0(TVarSet_4, (MR_Integer) 0, ArgType_6);
    {
      Var_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_13, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), Var_13, 1) = ((MR_Box) (ArgNum_5));
    }
    {
      Var_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_18, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_18, 1) = ((MR_Box) (TypeStr_8));
    }
    {
      Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[38])));
      MR_hl_field(MR_mktag(1), Var_14, 1) = ((MR_Box) (Var_17));
    }
    {
      Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_12, 0) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(1), Var_12, 1) = ((MR_Box) (Var_14));
    }
    {
      Pieces_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_7, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[22])));
      MR_hl_field(MR_mktag(1), Pieces_7, 1) = ((MR_Box) (Var_12));
    }
    return Pieces_7;
  }
}

static void MR_CALL 
check_hlds__check_typeclass__is_valid_instance_type_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word ClassId_10,
  MR_Word InstanceDefn_11,
  MR_Word Type_12,
  MR_Integer N_13,
  MR_Integer * HeadVar__6_6,
  MR_Word STATE_VARIABLE_Specs_0_51,
  MR_Word * STATE_VARIABLE_Specs_52)
{
  {
    MR_bool succeeded;

    *HeadVar__6_6 = (MR_Integer) ((MR_Unsigned) N_13 + (MR_Unsigned) 1);
    switch (MR_tag((MR_Word) Type_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word TVarSet_161 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn_11, (MR_Integer) 8))));
          MR_String TypeStr_162;
          MR_Word EndPieces_163;
          MR_Word Spec_164;
          MR_Word Var_168;
          MR_Word Var_169;
          MR_Word Var_170;
          MR_Word Var_173;
          MR_Word Var_174;

          TypeStr_162 = parse_tree__mercury_to_mercury__mercury_type_to_string_3_f_0(TVarSet_161, (MR_Integer) 0, Type_12);
          {
            Var_169 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_169, 0) = ((MR_Box) ((MR_Unsigned) 2U));
            MR_hl_field(MR_mktag(3), Var_169, 1) = ((MR_Box) (N_13));
          }
          {
            Var_174 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_174, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), Var_174, 1) = ((MR_Box) (TypeStr_162));
          }
          {
            Var_173 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_173, 0) = ((MR_Box) (Var_174));
            MR_hl_field(MR_mktag(1), Var_173, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[164])));
          }
          {
            Var_170 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_170, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[23])));
            MR_hl_field(MR_mktag(1), Var_170, 1) = ((MR_Box) (Var_173));
          }
          {
            Var_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_168, 0) = ((MR_Box) (Var_169));
            MR_hl_field(MR_mktag(1), Var_168, 1) = ((MR_Box) (Var_170));
          }
          {
            EndPieces_163 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), EndPieces_163, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[22])));
            MR_hl_field(MR_mktag(1), EndPieces_163, 1) = ((MR_Box) (Var_168));
          }
          Spec_164 = check_hlds__check_typeclass__bad_instance_type_msg_4_f_0(ClassId_10, InstanceDefn_11, EndPieces_163, (MR_Integer) 0);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_52 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_164));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_51));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeName_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Type_12, (MR_Integer) 0))));
          MR_Word ArgTypes_101 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Type_12, (MR_Integer) 1))));
          MR_Word NonTVarArgs_102;

          check_hlds__check_typeclass__find_non_type_variables_3_p_0(ArgTypes_101, (MR_Integer) 1, &NonTVarArgs_102);
          if ((NonTVarArgs_102 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word TypeDefn_39;

            succeeded = check_hlds__type_util__type_to_type_defn_3_p_0(ModuleInfo_9, Type_12, &TypeDefn_39);
            if (succeeded)
            {
              MR_Word TypeBody_40;

              hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_39, &TypeBody_40);
              switch (MR_tag((MR_Word) TypeBody_40)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *STATE_VARIABLE_Specs_52 = STATE_VARIABLE_Specs_0_51;
                  break;
                case (MR_Integer) 1:
                  *STATE_VARIABLE_Specs_52 = STATE_VARIABLE_Specs_0_51;
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word EqvType_41 = ((MR_Word) ((MR_hl_field(MR_mktag(2), TypeBody_40, (MR_Integer) 0))));
                    MR_Integer Var_42;

                    check_hlds__check_typeclass__is_valid_instance_type_8_p_0(ModuleInfo_9, ClassId_10, InstanceDefn_11, EqvType_41, N_13, &Var_42, STATE_VARIABLE_Specs_0_51, STATE_VARIABLE_Specs_52);
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeBody_40, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *STATE_VARIABLE_Specs_52 = STATE_VARIABLE_Specs_0_51;
                      break;
                    case (MR_Integer) 1:
                      *STATE_VARIABLE_Specs_52 = STATE_VARIABLE_Specs_0_51;
                      break;
                  }
                  break;
              }
            }
            else
              *STATE_VARIABLE_Specs_52 = STATE_VARIABLE_Specs_0_51;
          }
          else
          {
            MR_Integer Var_57;
            MR_Word Spec_96;
            MR_Word TypeCtor_97;

            Var_57 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_101);
            {
              TypeCtor_97 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), TypeCtor_97, 0) = ((MR_Box) (TypeName_37));
              MR_hl_field(MR_mktag(0), TypeCtor_97, 1) = ((MR_Box) (Var_57));
            }
            Spec_96 = check_hlds__check_typeclass__badly_formed_instance_type_msg_5_f_0(ClassId_10, InstanceDefn_11, N_13, TypeCtor_97, NonTVarArgs_102);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Specs_52 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_96));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_51));
            }
          }
        }
        break;
      case (MR_Integer) 2:
        *STATE_VARIABLE_Specs_52 = STATE_VARIABLE_Specs_0_51;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Type_12, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgTypes_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_12, (MR_Integer) 1))));
              MR_Word NonTVarArgs_33;

              check_hlds__check_typeclass__find_non_type_variables_3_p_0(ArgTypes_31, (MR_Integer) 1, &NonTVarArgs_33);
              if ((NonTVarArgs_33 == (MR_Word) ((MR_Unsigned) 0U)))
                *STATE_VARIABLE_Specs_52 = STATE_VARIABLE_Specs_0_51;
              else
              {
                MR_Word TypeCtor_36;
                MR_Integer Var_63;
                MR_Word Spec_93;

                Var_63 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_31);
                {
                  TypeCtor_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), TypeCtor_36, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_3[0]));
                  MR_hl_field(MR_mktag(0), TypeCtor_36, 1) = ((MR_Box) (Var_63));
                }
                Spec_93 = check_hlds__check_typeclass__badly_formed_instance_type_msg_5_f_0(ClassId_10, InstanceDefn_11, N_13, TypeCtor_36, NonTVarArgs_33);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *STATE_VARIABLE_Specs_52 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_93));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_51));
                }
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word TVarSet_125 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn_11, (MR_Integer) 8))));
              MR_String TypeStr_126;
              MR_Word EndPieces_127;
              MR_Word Spec_128;
              MR_Word Var_132;
              MR_Word Var_133;
              MR_Word Var_134;
              MR_Word Var_137;
              MR_Word Var_138;

              TypeStr_126 = parse_tree__mercury_to_mercury__mercury_type_to_string_3_f_0(TVarSet_125, (MR_Integer) 0, Type_12);
              {
                Var_133 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_133, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(MR_mktag(3), Var_133, 1) = ((MR_Box) (N_13));
              }
              {
                Var_138 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_138, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), Var_138, 1) = ((MR_Box) (TypeStr_126));
              }
              {
                Var_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_137, 0) = ((MR_Box) (Var_138));
                MR_hl_field(MR_mktag(1), Var_137, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[163])));
              }
              {
                Var_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_134, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[23])));
                MR_hl_field(MR_mktag(1), Var_134, 1) = ((MR_Box) (Var_137));
              }
              {
                Var_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_132, 0) = ((MR_Box) (Var_133));
                MR_hl_field(MR_mktag(1), Var_132, 1) = ((MR_Box) (Var_134));
              }
              {
                EndPieces_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), EndPieces_127, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[22])));
                MR_hl_field(MR_mktag(1), EndPieces_127, 1) = ((MR_Box) (Var_132));
              }
              Spec_128 = check_hlds__check_typeclass__bad_instance_type_msg_4_f_0(ClassId_10, InstanceDefn_11, EndPieces_127, (MR_Integer) 0);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_Specs_52 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_128));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_51));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word TVarSet_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn_11, (MR_Integer) 8))));
              MR_String TypeStr_28;
              MR_Word EndPieces_29;
              MR_Word Spec_30;
              MR_Word Var_71;
              MR_Word Var_72;
              MR_Word Var_73;
              MR_Word Var_76;
              MR_Word Var_77;

              TypeStr_28 = parse_tree__mercury_to_mercury__mercury_type_to_string_3_f_0(TVarSet_27, (MR_Integer) 0, Type_12);
              {
                Var_72 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_72, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(MR_mktag(3), Var_72, 1) = ((MR_Box) (N_13));
              }
              {
                Var_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_77, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), Var_77, 1) = ((MR_Box) (TypeStr_28));
              }
              {
                Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (Var_77));
                MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[162])));
              }
              {
                Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[23])));
                MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) (Var_76));
              }
              {
                Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (Var_72));
                MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) (Var_73));
              }
              {
                EndPieces_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), EndPieces_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[22])));
                MR_hl_field(MR_mktag(1), EndPieces_29, 1) = ((MR_Box) (Var_71));
              }
              Spec_30 = check_hlds__check_typeclass__bad_instance_type_msg_4_f_0(ClassId_10, InstanceDefn_11, EndPieces_29, (MR_Integer) 0);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_Specs_52 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_30));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_51));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              mercury__require__unexpected_2_p_0((MR_String) "check_typeclass", (MR_String) "kinded_type");
              return;
            }
            break;
        }
        break;
    }
  }
}

static MR_Box MR_CALL 
check_hlds__check_typeclass__badly_formed_instance_type_msg_5_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_Pieces_7;

    conv0_Pieces_7 = check_hlds__check_typeclass__non_tvar_arg_to_pieces_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_Pieces_7));
    return wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
check_hlds__check_typeclass__badly_formed_instance_type_msg_5_f_0(
  MR_Word ClassId_7,
  MR_Word InstanceDefn_8,
  MR_Integer N_9,
  MR_Word TypeCtor_10,
  MR_Word NonTVarArgs_11)
{
  {
    MR_Word Spec_12;
    MR_Word TVarSet_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn_8, (MR_Integer) 8))));
    MR_Word NonTVarArgPieceLists_14;
    MR_Word NonTVarArgPieces_15;
    MR_Word EndPieces_16;
    MR_Word Var_17;
    MR_Word Var_19;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_String Var_29;
    MR_Word Var_32;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_String Var_39;
    MR_Box conv1_Var_29;
    MR_Box conv2_Var_39;

    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_9[1]));
      MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (check_hlds__check_typeclass__badly_formed_instance_type_msg_5_f_0_1));
      MR_hl_field(MR_mktag(0), Var_17, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_17, 3) = ((MR_Box) (TVarSet_13));
    }
    NonTVarArgPieceLists_14 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_2[0]), (MR_Word) (&check_hlds__check_typeclass_scalar_common_1[2]), Var_17, NonTVarArgs_11);
    NonTVarArgPieces_15 = parse_tree__error_util__component_lists_to_pieces_2_f_0((MR_String) "and", NonTVarArgPieceLists_14);
    {
      Var_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_23, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), Var_23, 1) = ((MR_Box) (N_9));
    }
    conv1_Var_29 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_2[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), NonTVarArgs_11, ((MR_Box) ((MR_String) "one")), ((MR_Box) ((MR_String) "some")));
    Var_29 = ((MR_String) (conv1_Var_29));
    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_28, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_28, 1) = ((MR_Box) (Var_29));
    }
    {
      Var_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_36, 0) = ((MR_Box) ((MR_Unsigned) 17U));
      MR_hl_field(MR_mktag(3), Var_36, 1) = ((MR_Box) (TypeCtor_10));
    }
    conv2_Var_39 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_2[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), NonTVarArgs_11, ((MR_Box) ((MR_String) "is not a type variable, but should be. This is")), ((MR_Box) ((MR_String) "are not type variables, but should be. These are")));
    Var_39 = ((MR_String) (conv2_Var_39));
    {
      Var_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_38, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_38, 1) = ((MR_Box) (Var_39));
    }
    {
      Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (NonTVarArgPieces_15));
    }
    {
      Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (Var_37));
    }
    {
      Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[35])));
      MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (Var_35));
    }
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (Var_32));
    }
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[34])));
      MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (Var_27));
    }
    {
      Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (Var_24));
    }
    {
      Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[33])));
      MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (Var_22));
    }
    EndPieces_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_19, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[37])));
    Spec_12 = check_hlds__check_typeclass__bad_instance_type_msg_4_f_0(ClassId_7, InstanceDefn_8, EndPieces_16, (MR_Integer) 0);
    return Spec_12;
  }
}

static void MR_CALL 
check_hlds__check_typeclass__find_non_type_variables_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer ArgNum_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word ArgType_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgTypes_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word TailNonTVarArgs_9;
    MR_Integer Var_28 = (MR_Integer) ((MR_Unsigned) ArgNum_2 + (MR_Unsigned) 1);

    check_hlds__check_typeclass__find_non_type_variables_3_p_0(ArgTypes_6, Var_28, &TailNonTVarArgs_9);
    switch (MR_tag((MR_Word) ArgType_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *HeadVar__3_3 = TailNonTVarArgs_9;
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          MR_Word Var_30;

          {
            Var_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (ArgNum_2));
            MR_hl_field(MR_mktag(0), Var_30, 1) = ((MR_Box) (ArgType_5));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__3_3 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_30));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailNonTVarArgs_9));
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word Var_30;

          {
            Var_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (ArgNum_2));
            MR_hl_field(MR_mktag(0), Var_30, 1) = ((MR_Box) (ArgType_5));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__3_3 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_30));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailNonTVarArgs_9));
          }
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__check_typeclass__is_valid_instance_orig_type_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word ClassId_10,
  MR_Word InstanceDefn_11,
  MR_Word Type_12,
  MR_Integer N_13,
  MR_Integer * HeadVar__6_6,
  MR_Word STATE_VARIABLE_Specs_0_43,
  MR_Word * STATE_VARIABLE_Specs_44)
{
  {
    MR_bool succeeded;

    *HeadVar__6_6 = (MR_Integer) ((MR_Unsigned) N_13 + (MR_Unsigned) 1);
    switch (MR_tag((MR_Word) Type_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_Specs_44 = STATE_VARIABLE_Specs_0_43;
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeDefn_18;

          succeeded = check_hlds__type_util__type_to_type_defn_3_p_0(ModuleInfo_9, Type_12, &TypeDefn_18);
          if (succeeded)
          {
            MR_Word TypeBody_19;

            hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_18, &TypeBody_19);
            switch (MR_tag((MR_Word) TypeBody_19)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *STATE_VARIABLE_Specs_44 = STATE_VARIABLE_Specs_0_43;
                break;
              case (MR_Integer) 1:
                *STATE_VARIABLE_Specs_44 = STATE_VARIABLE_Specs_0_43;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word TypeDefnStatus_21;
                  MR_Word Var_58;
                  MR_Word Var_48;
                  MR_Word Var_49;

                  hlds__hlds_data__get_type_defn_status_2_p_0(TypeDefn_18, &TypeDefnStatus_21);
                  Var_48 = (MR_Word) (TypeDefnStatus_21);
                  succeeded = (Var_48 == (MR_Word) ((MR_Unsigned) 20U));
                  if (succeeded)
                  {
                    Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn_11, (MR_Integer) 6))));
                    Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn_11, (MR_Integer) 8))));
                    succeeded = (Var_49 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                    }
                  }
                  if (succeeded)
                  {
                    MR_Word Spec_23;
                    MR_String TypeStr_66;
                    MR_Word EndPieces_67;
                    MR_Word Var_71;
                    MR_Word Var_72;
                    MR_Word Var_73;
                    MR_Word Var_76;
                    MR_Word Var_77;

                    TypeStr_66 = parse_tree__mercury_to_mercury__mercury_type_to_string_3_f_0(Var_58, (MR_Integer) 0, Type_12);
                    {
                      Var_72 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_72, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(MR_mktag(3), Var_72, 1) = ((MR_Box) (N_13));
                    }
                    {
                      Var_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_77, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(3), Var_77, 1) = ((MR_Box) (TypeStr_66));
                    }
                    {
                      Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (Var_77));
                      MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[40])));
                    }
                    {
                      Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[23])));
                      MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) (Var_76));
                    }
                    {
                      Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (Var_72));
                      MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) (Var_73));
                    }
                    {
                      EndPieces_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), EndPieces_67, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[22])));
                      MR_hl_field(MR_mktag(1), EndPieces_67, 1) = ((MR_Box) (Var_71));
                    }
                    Spec_23 = check_hlds__check_typeclass__bad_instance_type_msg_4_f_0(ClassId_10, InstanceDefn_11, EndPieces_67, (MR_Integer) 1);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *STATE_VARIABLE_Specs_44 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_23));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_43));
                    }
                  }
                  else
                    *STATE_VARIABLE_Specs_44 = STATE_VARIABLE_Specs_0_43;
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeBody_19, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *STATE_VARIABLE_Specs_44 = STATE_VARIABLE_Specs_0_43;
                    break;
                  case (MR_Integer) 1:
                    *STATE_VARIABLE_Specs_44 = STATE_VARIABLE_Specs_0_43;
                    break;
                }
                break;
            }
          }
          else
            *STATE_VARIABLE_Specs_44 = STATE_VARIABLE_Specs_0_43;
        }
        break;
      case (MR_Integer) 2:
        *STATE_VARIABLE_Specs_44 = STATE_VARIABLE_Specs_0_43;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Type_12, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *STATE_VARIABLE_Specs_44 = STATE_VARIABLE_Specs_0_43;
            break;
          case (MR_Integer) 1:
            *STATE_VARIABLE_Specs_44 = STATE_VARIABLE_Specs_0_43;
            break;
          case (MR_Integer) 2:
            *STATE_VARIABLE_Specs_44 = STATE_VARIABLE_Specs_0_43;
            break;
          case (MR_Integer) 3:
            {
              mercury__require__unexpected_2_p_0((MR_String) "check_typeclass", (MR_String) "kinded_type");
              return;
            }
            break;
        }
        break;
    }
  }
}

static MR_Word MR_CALL 
check_hlds__check_typeclass__bad_instance_type_msg_4_f_0(
  MR_Word ClassId_6,
  MR_Word InstanceDefn_7,
  MR_Word EndPieces_8,
  MR_Word Kind_9)
{
  {
    MR_Word Spec_10;
    MR_Word ClassName_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassId_6, (MR_Integer) 0))));
    MR_String ClassNameString_13;
    MR_Word InstanceVarSet_14;
    MR_Word InstanceContext_15;
    MR_Word HeadingMsg_19;
    MR_Word Var_21;
    MR_Word Var_30;
    MR_Word Var_63;
    MR_Word Var_66;
    MR_Word Var_67;

    ClassNameString_13 = mdbcomp__sym_name__unqualify_name_1_f_0(ClassName_11);
    Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn_7, (MR_Integer) 1))));
    Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn_7, (MR_Integer) 2))));
    InstanceContext_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn_7, (MR_Integer) 4))));
    InstanceVarSet_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn_7, (MR_Integer) 8))));
    Var_21 = (MR_Word) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[41]));
    Var_30 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[43]));
    switch (Kind_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_String InstanceTypesString_17;
          MR_Word HeaderPieces_18;
          MR_Word Var_23;
          MR_Word Var_24;
          MR_String Var_25;
          MR_String Var_26;
          MR_String Var_28;
          MR_Word Var_55;
          MR_Word Var_56;
          MR_Word Var_57;
          MR_Word Var_58;

          InstanceTypesString_17 = parse_tree__mercury_to_mercury__mercury_type_list_to_string_2_f_0(InstanceVarSet_14, Var_67);
          Var_28 = mercury__string__f_43_43_2_f_0(InstanceTypesString_17, (MR_String) ")");
          Var_26 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_28);
          Var_25 = mercury__string__f_43_43_2_f_0(ClassNameString_13, Var_26);
          {
            Var_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_24, 0) = ((MR_Box) ((MR_Unsigned) 6U));
            MR_hl_field(MR_mktag(3), Var_24, 1) = ((MR_Box) (Var_25));
          }
          {
            Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (Var_24));
            MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (Var_30));
          }
          {
            HeaderPieces_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), HeaderPieces_18, 0) = ((MR_Box) (Var_21));
            MR_hl_field(MR_mktag(1), HeaderPieces_18, 1) = ((MR_Box) (Var_23));
          }
          {
            Var_56 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_56, 0) = ((MR_Box) (HeaderPieces_18));
          }
          {
            Var_58 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_58, 0) = ((MR_Box) (EndPieces_8));
          }
          {
            Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (Var_58));
            MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (Var_56));
            MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (Var_57));
          }
          {
            HeadingMsg_19 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), HeadingMsg_19, 0) = ((MR_Box) (InstanceContext_15));
            MR_hl_field(MR_mktag(2), HeadingMsg_19, 1) = ((MR_Box) (Var_55));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word Var_47;
          MR_Word Var_48;
          MR_Word Var_49;
          MR_Word Var_50;
          MR_String InstanceTypesString_112;
          MR_Word HeaderPieces_113;
          MR_Word Var_114;
          MR_Word Var_115;
          MR_String Var_116;
          MR_String Var_117;
          MR_String Var_118;

          InstanceTypesString_112 = parse_tree__mercury_to_mercury__mercury_type_list_to_string_2_f_0(InstanceVarSet_14, Var_66);
          Var_118 = mercury__string__f_43_43_2_f_0(InstanceTypesString_112, (MR_String) ")");
          Var_117 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_118);
          Var_116 = mercury__string__f_43_43_2_f_0(ClassNameString_13, Var_117);
          {
            Var_115 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_115, 0) = ((MR_Box) ((MR_Unsigned) 6U));
            MR_hl_field(MR_mktag(3), Var_115, 1) = ((MR_Box) (Var_116));
          }
          {
            Var_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_114, 0) = ((MR_Box) (Var_115));
            MR_hl_field(MR_mktag(1), Var_114, 1) = ((MR_Box) (Var_30));
          }
          {
            HeaderPieces_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), HeaderPieces_113, 0) = ((MR_Box) (Var_21));
            MR_hl_field(MR_mktag(1), HeaderPieces_113, 1) = ((MR_Box) (Var_114));
          }
          {
            Var_48 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_48, 0) = ((MR_Box) (HeaderPieces_113));
          }
          {
            Var_50 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_50, 0) = ((MR_Box) (EndPieces_8));
          }
          {
            Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (Var_50));
            MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[161])));
          }
          {
            Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (Var_48));
            MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (Var_49));
          }
          {
            HeadingMsg_19 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), HeadingMsg_19, 0) = ((MR_Box) (InstanceContext_15));
            MR_hl_field(MR_mktag(2), HeadingMsg_19, 1) = ((MR_Box) (Var_47));
          }
        }
        break;
    }
    {
      Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (HeadingMsg_19));
      MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_10 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_10, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.check_typeclass.bad_instance_type_msg\'/4"));
      MR_hl_field(MR_mktag(0), Spec_10, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_10, 2) = ((MR_Box) ((MR_Unsigned) 48U));
      MR_hl_field(MR_mktag(0), Spec_10, 3) = ((MR_Box) (Var_63));
    }
    return Spec_10;
  }
}

static void MR_CALL 
check_hlds__check_typeclass__check_instance_declaration_types_for_instance_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv5_HeadVar__6_6;
    MR_Word conv4_STATE_VARIABLE_Specs_52;

    check_hlds__check_typeclass__is_valid_instance_type_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv5_HeadVar__6_6, ((MR_Word) (wrapper_arg_4)), &conv4_STATE_VARIABLE_Specs_52);
    *wrapper_arg_3 = ((MR_Box) (conv5_HeadVar__6_6));
    *wrapper_arg_5 = ((MR_Box) (conv4_STATE_VARIABLE_Specs_52));
  }
}

static void MR_CALL 
check_hlds__check_typeclass__check_instance_declaration_types_for_instance_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv1_HeadVar__6_6;
    MR_Word conv0_STATE_VARIABLE_Specs_44;

    check_hlds__check_typeclass__is_valid_instance_orig_type_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv1_HeadVar__6_6, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Specs_44);
    *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__6_6));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_44));
  }
}

static void MR_CALL 
check_hlds__check_typeclass__check_instance_declaration_types_for_instance_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word ClassId_7,
  MR_Word InstanceDefn_8,
  MR_Word STATE_VARIABLE_Specs_0_14,
  MR_Word * STATE_VARIABLE_Specs_15)
{
  {
    MR_Word OriginalTypes_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn_8, (MR_Integer) 2))));
    MR_Word Types_12;
    MR_Word Var_16;
    MR_Word STATE_VARIABLE_Specs_18_18;
    MR_Word Var_19;
    MR_Box conv3_Var_11;
    MR_Box conv2_STATE_VARIABLE_Specs_18_18;
    MR_Box conv7_Var_13;
    MR_Box conv6_STATE_VARIABLE_Specs_15;

    {
      Var_16 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_7[1]));
      MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) (check_hlds__check_typeclass__check_instance_declaration_types_for_instance_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_16, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_16, 3) = ((MR_Box) (ModuleInfo_6));
      MR_hl_field(MR_mktag(0), Var_16, 4) = ((MR_Box) (ClassId_7));
      MR_hl_field(MR_mktag(0), Var_16, 5) = ((MR_Box) (InstanceDefn_8));
    }
    mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&check_hlds__check_typeclass_scalar_common_1[1]), Var_16, OriginalTypes_10, ((MR_Box) ((MR_Integer) 1)), &conv3_Var_11, ((MR_Box) (STATE_VARIABLE_Specs_0_14)), &conv2_STATE_VARIABLE_Specs_18_18);
    STATE_VARIABLE_Specs_18_18 = ((MR_Word) (conv2_STATE_VARIABLE_Specs_18_18));
    Types_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn_8, (MR_Integer) 1))));
    {
      Var_19 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_7[1]));
      MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) (check_hlds__check_typeclass__check_instance_declaration_types_for_instance_5_p_0_2));
      MR_hl_field(MR_mktag(0), Var_19, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_19, 3) = ((MR_Box) (ModuleInfo_6));
      MR_hl_field(MR_mktag(0), Var_19, 4) = ((MR_Box) (ClassId_7));
      MR_hl_field(MR_mktag(0), Var_19, 5) = ((MR_Box) (InstanceDefn_8));
    }
    mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&check_hlds__check_typeclass_scalar_common_1[1]), Var_19, Types_12, ((MR_Box) ((MR_Integer) 1)), &conv7_Var_13, ((MR_Box) (STATE_VARIABLE_Specs_18_18)), &conv6_STATE_VARIABLE_Specs_15);
    *STATE_VARIABLE_Specs_15 = ((MR_Word) (conv6_STATE_VARIABLE_Specs_15));
  }
}

static void MR_CALL 
check_hlds__check_typeclass__check_instance_declaration_types_for_class_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Specs_15;

    check_hlds__check_typeclass__check_instance_declaration_types_for_instance_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Specs_15);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_15));
  }
}

static void MR_CALL 
check_hlds__check_typeclass__check_instance_declaration_types_for_class_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word ClassId_7,
  MR_Word InstanceDefns_8,
  MR_Word STATE_VARIABLE_Specs_0_10,
  MR_Word * STATE_VARIABLE_Specs_11)
{
  {
    MR_Word Var_12;
    MR_Box conv1_STATE_VARIABLE_Specs_11;

    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_6[2]));
      MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (check_hlds__check_typeclass__check_instance_declaration_types_for_class_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (ModuleInfo_6));
      MR_hl_field(MR_mktag(0), Var_12, 4) = ((MR_Box) (ClassId_7));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0), (MR_Word) (&check_hlds__check_typeclass_scalar_common_1[1]), Var_12, InstanceDefns_8, ((MR_Box) (STATE_VARIABLE_Specs_0_10)), &conv1_STATE_VARIABLE_Specs_11);
    *STATE_VARIABLE_Specs_11 = ((MR_Word) (conv1_STATE_VARIABLE_Specs_11));
  }
}

static void MR_CALL 
check_hlds__check_typeclass__check_typeclasses_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_Specs_17;

    check_hlds__check_typeclass__check_fundeps_for_class_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_Specs_17);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_Specs_17));
  }
}

static void MR_CALL 
check_hlds__check_typeclass__check_typeclasses_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Specs_11;

    check_hlds__check_typeclass__check_instance_declaration_types_for_class_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Specs_11);
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_11));
  }
}

void MR_CALL 
check_hlds__check_typeclass__check_typeclasses_6_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_16,
  MR_Word * STATE_VARIABLE_ModuleInfo_17,
  MR_Word STATE_VARIABLE_QualInfo_0_18,
  MR_Word * STATE_VARIABLE_QualInfo_19,
  MR_Word STATE_VARIABLE_Specs_0_20,
  MR_Word * STATE_VARIABLE_Specs_21)
{
  {
    MR_Word Globals_10;
    MR_Word Verbose_11;
    MR_Word STATE_VARIABLE_Specs_28_28;
    MR_Word InstanceTable_69;
    MR_Word Var_70;
    MR_Word ProgressStream_57;
    MR_Box conv1_STATE_VARIABLE_Specs_28_28;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_16, &Globals_10);
    libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 70, &Verbose_11);
    hlds__passes_aux__get_progress_output_stream_4_p_0(STATE_VARIABLE_ModuleInfo_0_16, &ProgressStream_57);
    libs__file_util__maybe_write_string_5_p_0(ProgressStream_57, Verbose_11, (MR_String) "% Checking instance declaration types...\n");
    hlds__hlds_module__module_info_get_instance_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_16, &InstanceTable_69);
    {
      Var_70 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_70, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_6[1]));
      MR_hl_field(MR_mktag(0), Var_70, 1) = ((MR_Box) (check_hlds__check_typeclass__check_typeclasses_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_70, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_70, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_16));
    }
    mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&check_hlds__check_typeclass_scalar_common_1[0]), (MR_Word) (&check_hlds__check_typeclass_scalar_common_1[1]), Var_70, InstanceTable_69, ((MR_Box) (STATE_VARIABLE_Specs_0_20)), &conv1_STATE_VARIABLE_Specs_28_28);
    STATE_VARIABLE_Specs_28_28 = ((MR_Word) (conv1_STATE_VARIABLE_Specs_28_28));
    if ((STATE_VARIABLE_Specs_28_28 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word STATE_VARIABLE_ModuleInfo_33_33;
      MR_Word STATE_VARIABLE_Specs_35_35;
      MR_Word STATE_VARIABLE_Specs_41_41;
      MR_Word STATE_VARIABLE_Specs_46_46;
      MR_Word STATE_VARIABLE_Specs_51_51;
      MR_Word InstanceTable_83;
      MR_Word ClassIds_84;
      MR_Word Var_85;
      MR_Word ProgressStream_58;
      MR_Word ProgressStream_59;
      MR_Word ProgressStream_60;
      MR_Word ProgressStream_61;
      MR_Box conv3_STATE_VARIABLE_Specs_51_51;
      MR_Word ProgressStream_62;

      hlds__passes_aux__get_progress_output_stream_4_p_0(STATE_VARIABLE_ModuleInfo_0_16, &ProgressStream_58);
      libs__file_util__maybe_write_string_5_p_0(ProgressStream_58, Verbose_11, (MR_String) "% Checking typeclass instances...\n");
      check_hlds__check_typeclass__check_instance_decls_6_p_0(STATE_VARIABLE_ModuleInfo_0_16, &STATE_VARIABLE_ModuleInfo_33_33, STATE_VARIABLE_QualInfo_0_18, STATE_VARIABLE_QualInfo_19, STATE_VARIABLE_Specs_28_28, &STATE_VARIABLE_Specs_35_35);
      hlds__passes_aux__get_progress_output_stream_4_p_0(STATE_VARIABLE_ModuleInfo_33_33, &ProgressStream_59);
      libs__file_util__maybe_write_string_5_p_0(ProgressStream_59, Verbose_11, (MR_String) "% Checking for cyclic classes...\n");
      check_hlds__check_typeclass__check_for_cyclic_classes_4_p_0(STATE_VARIABLE_ModuleInfo_33_33, STATE_VARIABLE_ModuleInfo_17, STATE_VARIABLE_Specs_35_35, &STATE_VARIABLE_Specs_41_41);
      hlds__passes_aux__get_progress_output_stream_4_p_0(*STATE_VARIABLE_ModuleInfo_17, &ProgressStream_60);
      libs__file_util__maybe_write_string_5_p_0(ProgressStream_60, Verbose_11, (MR_String) "% Checking for missing concrete instances...\n");
      check_hlds__check_typeclass__check_for_missing_concrete_instances_3_p_0(*STATE_VARIABLE_ModuleInfo_17, STATE_VARIABLE_Specs_41_41, &STATE_VARIABLE_Specs_46_46);
      hlds__passes_aux__get_progress_output_stream_4_p_0(*STATE_VARIABLE_ModuleInfo_17, &ProgressStream_61);
      libs__file_util__maybe_write_string_5_p_0(ProgressStream_61, Verbose_11, (MR_String) "% Checking functional dependencies on instances...\n");
      hlds__hlds_module__module_info_get_instance_table_2_p_0(*STATE_VARIABLE_ModuleInfo_17, &InstanceTable_83);
      mercury__map__keys_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&check_hlds__check_typeclass_scalar_common_1[0]), InstanceTable_83, &ClassIds_84);
      {
        Var_85 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_85, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_10[2]));
        MR_hl_field(MR_mktag(0), Var_85, 1) = ((MR_Box) (check_hlds__check_typeclass__check_typeclasses_6_p_0_2));
        MR_hl_field(MR_mktag(0), Var_85, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_85, 3) = ((MR_Box) (*STATE_VARIABLE_ModuleInfo_17));
      }
      mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&check_hlds__check_typeclass_scalar_common_1[1]), Var_85, ClassIds_84, ((MR_Box) (STATE_VARIABLE_Specs_46_46)), &conv3_STATE_VARIABLE_Specs_51_51);
      STATE_VARIABLE_Specs_51_51 = ((MR_Word) (conv3_STATE_VARIABLE_Specs_51_51));
      hlds__passes_aux__get_progress_output_stream_4_p_0(*STATE_VARIABLE_ModuleInfo_17, &ProgressStream_62);
      libs__file_util__maybe_write_string_5_p_0(ProgressStream_62, Verbose_11, (MR_String) "% Checking typeclass constraints...\n");
      check_hlds__check_typeclass__check_typeclass_constraints_3_p_0(*STATE_VARIABLE_ModuleInfo_17, STATE_VARIABLE_Specs_51_51, STATE_VARIABLE_Specs_21);
    }
    else
    {
      *STATE_VARIABLE_ModuleInfo_17 = STATE_VARIABLE_ModuleInfo_0_16;
      *STATE_VARIABLE_QualInfo_19 = STATE_VARIABLE_QualInfo_0_18;
      *STATE_VARIABLE_Specs_21 = STATE_VARIABLE_Specs_28_28;
    }
  }
}

static void MR_CALL 
check_hlds__check_typeclass__check_typeclass_constraints_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_Specs_20;

    check_hlds__check_typeclass__check_typeclass_constraints_on_type_ctor_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_Specs_20);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_Specs_20));
  }
}

static void MR_CALL 
check_hlds__check_typeclass__check_typeclass_constraints_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Specs_27;

    check_hlds__check_typeclass__check_typeclass_constraints_on_pred_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Specs_27);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_27));
  }
}

static void MR_CALL 
check_hlds__check_typeclass__check_typeclass_constraints_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word STATE_VARIABLE_Specs_0_9,
  MR_Word * STATE_VARIABLE_Specs_10)
{
  {
    MR_Word PredIds_6;
    MR_Word TypeTable_7;
    MR_Word TypeCtorsDefns_8;
    MR_Word Var_11;
    MR_Word STATE_VARIABLE_Specs_12_12;
    MR_Word Var_13;
    MR_Box conv1_STATE_VARIABLE_Specs_12_12;
    MR_Box conv3_STATE_VARIABLE_Specs_10;

    hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(ModuleInfo_4, &PredIds_6);
    {
      Var_11 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_11, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_10[0]));
      MR_hl_field(MR_mktag(0), Var_11, 1) = ((MR_Box) (check_hlds__check_typeclass__check_typeclass_constraints_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_11, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_11, 3) = ((MR_Box) (ModuleInfo_4));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&check_hlds__check_typeclass_scalar_common_1[1]), Var_11, PredIds_6, ((MR_Box) (STATE_VARIABLE_Specs_0_9)), &conv1_STATE_VARIABLE_Specs_12_12);
    STATE_VARIABLE_Specs_12_12 = ((MR_Word) (conv1_STATE_VARIABLE_Specs_12_12));
    hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_4, &TypeTable_7);
    hlds__hlds_data__get_all_type_ctor_defns_2_p_0(TypeTable_7, &TypeCtorsDefns_8);
    {
      Var_13 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_13, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_10[1]));
      MR_hl_field(MR_mktag(0), Var_13, 1) = ((MR_Box) (check_hlds__check_typeclass__check_typeclass_constraints_3_p_0_2));
      MR_hl_field(MR_mktag(0), Var_13, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_13, 3) = ((MR_Box) (ModuleInfo_4));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_2[3]), (MR_Word) (&check_hlds__check_typeclass_scalar_common_1[1]), Var_13, TypeCtorsDefns_8, ((MR_Box) (STATE_VARIABLE_Specs_12_12)), &conv3_STATE_VARIABLE_Specs_10);
    *STATE_VARIABLE_Specs_10 = ((MR_Word) (conv3_STATE_VARIABLE_Specs_10));
  }
}

static MR_Box MR_CALL 
check_hlds__check_typeclass__check_for_cyclic_classes_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv6_Spec_6;

    conv6_Spec_6 = check_hlds__check_typeclass__report_cyclic_classes_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv6_Spec_6));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
check_hlds__check_typeclass__check_for_cyclic_classes_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_ClassTable_17;
    MR_Word conv1_STATE_VARIABLE_Visited_19;
    MR_Word conv0_STATE_VARIABLE_Cycles_21;

    check_hlds__check_typeclass__find_cycles_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_ClassTable_17, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_Visited_19, ((MR_Word) (wrapper_arg_6)), &conv0_STATE_VARIABLE_Cycles_21);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_ClassTable_17));
    *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_Visited_19));
    *wrapper_arg_7 = ((MR_Box) (conv0_STATE_VARIABLE_Cycles_21));
  }
}

static void MR_CALL 
check_hlds__check_typeclass__check_for_cyclic_classes_4_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_12,
  MR_Word * STATE_VARIABLE_ModuleInfo_13,
  MR_Word STATE_VARIABLE_Specs_0_14,
  MR_Word * STATE_VARIABLE_Specs_15)
{
  {
    MR_Word ClassTable0_7;
    MR_Word ClassIds_8;
    MR_Word ClassTable_9;
    MR_Word Cycles_11;
    MR_Word Var_17;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Box conv5_ClassTable_9;
    MR_Box conv4_Var_10;
    MR_Box conv3_Cycles_11;

    hlds__hlds_module__module_info_get_class_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_12, &ClassTable0_7);
    ClassIds_8 = mercury__map__keys_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), ClassTable0_7);
    Var_17 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0));
    mercury__list__foldl3_8_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&check_hlds__check_typeclass_scalar_common_2[2]), (MR_Word) (&check_hlds__check_typeclass_scalar_common_1[7]), (MR_Word) (&check_hlds__check_typeclass_scalar_common_1[9]), (MR_Word) (&check_hlds__check_typeclass_scalar_common_8[0]), ClassIds_8, ((MR_Box) (ClassTable0_7)), &conv5_ClassTable_9, ((MR_Box) (Var_17)), &conv4_Var_10, ((MR_Box) ((MR_Unsigned) 0U)), &conv3_Cycles_11);
    ClassTable_9 = ((MR_Word) (conv5_ClassTable_9));
    Cycles_11 = ((MR_Word) (conv3_Cycles_11));
    {
      Var_22 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_9[0]));
      MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) (check_hlds__check_typeclass__check_for_cyclic_classes_4_p_0_2));
      MR_hl_field(MR_mktag(0), Var_22, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_22, 3) = ((MR_Box) (ClassTable_9));
    }
    Var_21 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__check_typeclass_scalar_common_1[8]), (MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_22, Cycles_11);
    *STATE_VARIABLE_Specs_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_21, STATE_VARIABLE_Specs_0_14);
    hlds__hlds_module__module_info_set_class_table_3_p_0(ClassTable_9, STATE_VARIABLE_ModuleInfo_0_12, STATE_VARIABLE_ModuleInfo_13);
  }
}

static void MR_CALL 
check_hlds__check_typeclass__check_for_missing_concrete_instances_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_STATE_VARIABLE_Specs_11;

    check_hlds__check_typeclass__check_for_corresponding_instances_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv4_STATE_VARIABLE_Specs_11);
    *wrapper_arg_4 = ((MR_Box) (conv4_STATE_VARIABLE_Specs_11));
  }
}

static void MR_CALL 
check_hlds__check_typeclass__check_for_missing_concrete_instances_3_p_0_1(
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
    MR_Word conv1_STATE_VARIABLE_Abstracts_12;
    MR_Word conv0_STATE_VARIABLE_Concretes_14;

    check_hlds__check_typeclass__partition_instances_for_class_6_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_Abstracts_12, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_Concretes_14);
    *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_Abstracts_12));
    *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_Concretes_14));
  }
}

static void MR_CALL 
check_hlds__check_typeclass__check_for_missing_concrete_instances_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word STATE_VARIABLE_Specs_0_9,
  MR_Word * STATE_VARIABLE_Specs_10)
{
  {
    MR_Word InstanceTable_6;
    MR_Word AbstractInstances_7;
    MR_Word ConcreteInstances_8;
    MR_Word Var_11;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Box conv3_AbstractInstances_7;
    MR_Box conv2_ConcreteInstances_8;
    MR_Box conv5_STATE_VARIABLE_Specs_10;

    hlds__hlds_module__module_info_get_instance_table_2_p_0(ModuleInfo_4, &InstanceTable_6);
    Var_24 = mercury__multi_map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0));
    Var_25 = mercury__multi_map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0));
    mercury__map__foldl2_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&check_hlds__check_typeclass_scalar_common_1[0]), (MR_Word) (&check_hlds__check_typeclass_scalar_common_2[1]), (MR_Word) (&check_hlds__check_typeclass_scalar_common_2[1]), (MR_Word) (&check_hlds__check_typeclass_scalar_common_2[4]), InstanceTable_6, ((MR_Box) (Var_24)), &conv3_AbstractInstances_7, ((MR_Box) (Var_25)), &conv2_ConcreteInstances_8);
    AbstractInstances_7 = ((MR_Word) (conv3_AbstractInstances_7));
    ConcreteInstances_8 = ((MR_Word) (conv2_ConcreteInstances_8));
    {
      Var_11 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_11, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), Var_11, 1) = ((MR_Box) (check_hlds__check_typeclass__check_for_missing_concrete_instances_3_p_0_2));
      MR_hl_field(MR_mktag(0), Var_11, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_11, 3) = ((MR_Box) (ConcreteInstances_8));
    }
    mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&check_hlds__check_typeclass_scalar_common_1[0]), (MR_Word) (&check_hlds__check_typeclass_scalar_common_1[1]), Var_11, AbstractInstances_7, ((MR_Box) (STATE_VARIABLE_Specs_0_9)), &conv5_STATE_VARIABLE_Specs_10);
    *STATE_VARIABLE_Specs_10 = ((MR_Word) (conv5_STATE_VARIABLE_Specs_10));
  }
}

static void MR_CALL 
check_hlds__check_typeclass__check_instance_decls_6_p_0_1(
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_InstanceDefns_14;
    MR_Word conv2_STATE_VARIABLE_ModuleInfo_35;
    MR_Word conv1_STATE_VARIABLE_QualInfo_37;
    MR_Word conv0_STATE_VARIABLE_Specs_39;

    check_hlds__check_typeclass__check_one_class_10_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_InstanceDefns_14, ((MR_Word) (wrapper_arg_4)), &conv2_STATE_VARIABLE_ModuleInfo_35, ((MR_Word) (wrapper_arg_6)), &conv1_STATE_VARIABLE_QualInfo_37, ((MR_Word) (wrapper_arg_8)), &conv0_STATE_VARIABLE_Specs_39);
    *wrapper_arg_3 = ((MR_Box) (conv3_InstanceDefns_14));
    *wrapper_arg_5 = ((MR_Box) (conv2_STATE_VARIABLE_ModuleInfo_35));
    *wrapper_arg_7 = ((MR_Box) (conv1_STATE_VARIABLE_QualInfo_37));
    *wrapper_arg_9 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_39));
  }
}

static void MR_CALL 
check_hlds__check_typeclass__check_instance_decls_6_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_16,
  MR_Word * STATE_VARIABLE_ModuleInfo_17,
  MR_Word STATE_VARIABLE_QualInfo_0_18,
  MR_Word * STATE_VARIABLE_QualInfo_19,
  MR_Word STATE_VARIABLE_Specs_0_20,
  MR_Word * STATE_VARIABLE_Specs_21)
{
  {
    MR_Word ClassTable_10;
    MR_Word InstanceTable0_11;
    MR_Word InstanceTable_12;
    MR_Word NewSpecs_13;
    MR_Word Globals_14;
    MR_Word Errors_15;
    MR_Word Var_22;
    MR_Word STATE_VARIABLE_ModuleInfo_23_23;
    MR_Box conv6_STATE_VARIABLE_ModuleInfo_23_23;
    MR_Box conv5_STATE_VARIABLE_QualInfo_19;
    MR_Box conv4_NewSpecs_13;

    hlds__hlds_module__module_info_get_class_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_16, &ClassTable_10);
    hlds__hlds_module__module_info_get_instance_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_16, &InstanceTable0_11);
    {
      Var_22 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) (check_hlds__check_typeclass__check_instance_decls_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_22, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_22, 3) = ((MR_Box) (ClassTable_10));
    }
    mercury__map__map_foldl3_9_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&check_hlds__check_typeclass_scalar_common_1[0]), (MR_Word) (&check_hlds__check_typeclass_scalar_common_1[0]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_make_hlds_qual_info_0), (MR_Word) (&check_hlds__check_typeclass_scalar_common_1[1]), Var_22, InstanceTable0_11, &InstanceTable_12, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_16)), &conv6_STATE_VARIABLE_ModuleInfo_23_23, ((MR_Box) (STATE_VARIABLE_QualInfo_0_18)), &conv5_STATE_VARIABLE_QualInfo_19, ((MR_Box) ((MR_Unsigned) 0U)), &conv4_NewSpecs_13);
    STATE_VARIABLE_ModuleInfo_23_23 = ((MR_Word) (conv6_STATE_VARIABLE_ModuleInfo_23_23));
    *STATE_VARIABLE_QualInfo_19 = ((MR_Word) (conv5_STATE_VARIABLE_QualInfo_19));
    NewSpecs_13 = ((MR_Word) (conv4_NewSpecs_13));
    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_23_23, &Globals_14);
    Errors_15 = parse_tree__error_util__contains_errors_2_f_0(Globals_14, NewSpecs_13);
    switch (Errors_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        hlds__hlds_module__module_info_set_instance_table_3_p_0(InstanceTable_12, STATE_VARIABLE_ModuleInfo_23_23, STATE_VARIABLE_ModuleInfo_17);
        break;
      case (MR_Integer) 1:
        *STATE_VARIABLE_ModuleInfo_17 = STATE_VARIABLE_ModuleInfo_23_23;
        break;
    }
    *STATE_VARIABLE_Specs_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), NewSpecs_13, STATE_VARIABLE_Specs_0_20);
  }
}

static MR_bool MR_CALL 
check_hlds__check_typeclass____Unify____bad_instance_type_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__check_typeclass____Unify____bad_instance_type_kind_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__check_typeclass____Compare____bad_instance_type_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__check_typeclass____Compare____bad_instance_type_kind_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__check_typeclass____Unify____check_instance_method_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__check_typeclass____Unify____check_instance_method_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__check_typeclass____Compare____check_instance_method_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__check_typeclass____Compare____check_instance_method_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__check_typeclass____Unify____class_path_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__check_typeclass____Unify____class_path_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__check_typeclass____Compare____class_path_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__check_typeclass____Compare____class_path_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__check_typeclass____Unify____induced_fundep_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__check_typeclass____Unify____induced_fundep_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__check_typeclass____Compare____induced_fundep_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__check_typeclass____Compare____induced_fundep_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__check_typeclass____Unify____induced_fundeps_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__check_typeclass____Unify____induced_fundeps_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__check_typeclass____Compare____induced_fundeps_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__check_typeclass____Compare____induced_fundeps_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__check_typeclass____Unify____modes_and_detism_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__check_typeclass____Unify____modes_and_detism_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__check_typeclass____Compare____modes_and_detism_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__check_typeclass____Compare____modes_and_detism_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__check_typeclass____Unify____quant_error_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__check_typeclass____Unify____quant_error_type_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__check_typeclass____Compare____quant_error_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__check_typeclass____Compare____quant_error_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__check_hlds__check_typeclass__init(void)
{
}

void mercury__check_hlds__check_typeclass__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__check_typeclass__check_hlds__check_typeclass__type_ctor_info_bad_instance_type_kind_0);
	MR_register_type_ctor_info(&check_hlds__check_typeclass__check_hlds__check_typeclass__type_ctor_info_check_instance_method_info_0);
	MR_register_type_ctor_info(&check_hlds__check_typeclass__check_hlds__check_typeclass__type_ctor_info_class_path_0);
	MR_register_type_ctor_info(&check_hlds__check_typeclass__check_hlds__check_typeclass__type_ctor_info_induced_fundep_0);
	MR_register_type_ctor_info(&check_hlds__check_typeclass__check_hlds__check_typeclass__type_ctor_info_induced_fundeps_0);
	MR_register_type_ctor_info(&check_hlds__check_typeclass__check_hlds__check_typeclass__type_ctor_info_modes_and_detism_0);
	MR_register_type_ctor_info(&check_hlds__check_typeclass__check_hlds__check_typeclass__type_ctor_info_quant_error_type_0);
}

void mercury__check_hlds__check_typeclass__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__check_typeclass__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module check_hlds.check_typeclass.
