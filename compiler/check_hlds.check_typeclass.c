/*
** Automatically generated from `check_typeclass.m'
** by the Mercury compiler,
** version rotd-2018-02-20
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
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_assign.mih"
#include "check_hlds.type_util.mih"
#include "check_hlds.typecheck_info.mih"
#include "check_hlds.typeclasses.mih"
#include "hlds.add_pred.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_code_util.mih"
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
#include "solutions.mih"
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
#include "parse_tree.equiv_type.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
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
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



struct check_hlds__check_typeclass__IntroducedFrom__pred__check_constraint_quant__1863__1_3_p_0_env_0_s {
  MR_Word check_hlds__check_typeclass__IntroducedFrom__pred__check_constraint_quant__1863__1_3_p_0_env_0__ExistQVars_6;
  MR_Word * check_hlds__check_typeclass__IntroducedFrom__pred__check_constraint_quant__1863__1_3_p_0_env_0__LambdaHeadVar__1_18;
  MR_Cont check_hlds__check_typeclass__IntroducedFrom__pred__check_constraint_quant__1863__1_3_p_0_env_0__cont;
  void * check_hlds__check_typeclass__IntroducedFrom__pred__check_constraint_quant__1863__1_3_p_0_env_0__cont_env_ptr;
  MR_bool check_hlds__check_typeclass__IntroducedFrom__pred__check_constraint_quant__1863__1_3_p_0_env_0__succeeded;
  MR_Word check_hlds__check_typeclass__IntroducedFrom__pred__check_constraint_quant__1863__1_3_p_0_env_0__TypeInfo_24_24;
  MR_Box check_hlds__check_typeclass__IntroducedFrom__pred__check_constraint_quant__1863__1_3_p_0_env_0__conv0_LambdaHeadVar__1_18;
};

struct check_hlds__check_typeclass__check_constraint_quant_3_p_0_2_env_0_s {
  MR_Box * check_hlds__check_typeclass__check_constraint_quant_3_p_0_2_env_0__wrapper_arg_1;
  MR_Cont check_hlds__check_typeclass__check_constraint_quant_3_p_0_2_env_0__cont;
  void * check_hlds__check_typeclass__check_constraint_quant_3_p_0_2_env_0__cont_env_ptr;
  MR_Word check_hlds__check_typeclass__check_constraint_quant_3_p_0_2_env_0__conv0_LambdaHeadVar__1_18;
};

struct check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_env_0_s {
  MR_bool check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_env_0__succeeded;
  MR_Word check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_env_0__AbstractTypes_10;
  MR_Word check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_env_0__ConcreteInstances_11;
  jmp_buf check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_env_0__commit_0;
  MR_Word check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_env_0__TypeInfo_94_94;
  MR_Word check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_env_0__ConcreteInstance_12;
  MR_Word check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_env_0__ConcreteTypes_13;
  MR_Box check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_env_0__conv0_ConcreteInstance_12;
};

struct check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_env_0_s {
  MR_bool check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_env_0__succeeded;
  MR_Word check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_env_0__TypeCtorInfo_57_57;
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

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__check_typeclass__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__check_typeclass__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__check_typeclass__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__check_typeclass__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__check_typeclass__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

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

static const MR_EnumFunctorDescPtr check_hlds__check_typeclass__check_hlds__check_typeclass__enum_value_ordered_bad_instance_type_kind_0[2];

static const MR_EnumFunctorDescPtr check_hlds__check_typeclass__check_hlds__check_typeclass__enum_name_ordered_bad_instance_type_kind_0[2];

static const MR_Integer check_hlds__check_typeclass__check_hlds__check_typeclass__functor_number_map_bad_instance_type_kind_0[2];

static const MR_FA_TypeInfo_Struct1 check_hlds__check_typeclass__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__check_typeclass__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__check_typeclass__list__ti_list_1check_hlds__check_typeclass__type_ctor_info_modes_and_detism_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__check_typeclass__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_PseudoTypeInfo check_hlds__check_typeclass__check_hlds__check_typeclass__field_types_check_instance_method_info_0_0[9];

static const MR_ConstString check_hlds__check_typeclass__check_hlds__check_typeclass__field_names_check_instance_method_info_0_0[9];

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

static const MR_DuFunctorDesc check_hlds__check_typeclass__check_hlds__check_typeclass__du_functor_desc_instance_arg_result_0_0;

static const MR_PseudoTypeInfo check_hlds__check_typeclass__check_hlds__check_typeclass__field_types_instance_arg_result_0_1[1];

static const MR_DuFunctorDesc check_hlds__check_typeclass__check_hlds__check_typeclass__du_functor_desc_instance_arg_result_0_1;

static const MR_DuFunctorDescPtr check_hlds__check_typeclass__check_hlds__check_typeclass__du_stag_ordered_instance_arg_result_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__check_typeclass__check_hlds__check_typeclass__du_stag_ordered_instance_arg_result_0_1[1];

static const MR_DuPtagLayout check_hlds__check_typeclass__check_hlds__check_typeclass__du_ptag_ordered_instance_arg_result_0[2];

static const MR_DuFunctorDescPtr check_hlds__check_typeclass__check_hlds__check_typeclass__du_name_ordered_instance_arg_result_0[2];

static const MR_Integer check_hlds__check_typeclass__check_hlds__check_typeclass__functor_number_map_instance_arg_result_0[2];

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

static const MR_EnumFunctorDescPtr check_hlds__check_typeclass__check_hlds__check_typeclass__enum_value_ordered_quant_error_type_0[2];

static const MR_EnumFunctorDescPtr check_hlds__check_typeclass__check_hlds__check_typeclass__enum_name_ordered_quant_error_type_0[2];

static const MR_Integer check_hlds__check_typeclass__check_hlds__check_typeclass__functor_number_map_quant_error_type_0[2];

static void MR_CALL 
check_hlds__check_typeclass__IntroducedFrom__pred__report_duplicate_method_defn__2082__1_2_p_0(
  MR_Word LambdaHeadVar__1_82,
  MR_Word * LambdaHeadVar__2_83);

static MR_String MR_CALL 
check_hlds__check_typeclass__IntroducedFrom__func__report_badly_quantified_vars__1904__1_2_f_0(
  MR_Word TVarSet_9,
  MR_Word HeadVar__2_75);

static void MR_CALL 
check_hlds__check_typeclass__IntroducedFrom__pred__check_constraint_quant__1863__1_3_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__check_typeclass__IntroducedFrom__pred__check_constraint_quant__1863__1_3_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__check_typeclass__IntroducedFrom__pred__check_constraint_quant__1863__1_3_p_0(
  MR_Word ExistQVars_6,
  MR_Word UnivTVars_10,
  MR_Word * LambdaHeadVar__1_18,
  MR_Cont cont,
  void * cont_env_ptr);

static MR_String MR_CALL 
check_hlds__check_typeclass__IntroducedFrom__func__report_unbound_tvars_in_ctor_context__1802__1_2_f_0(
  MR_Word TVarSet_10,
  MR_Word HeadVar__2_71);

static MR_String MR_CALL 
check_hlds__check_typeclass__IntroducedFrom__func__report_unbound_tvars_in_pred_context__1770__1_2_f_0(
  MR_Word TVarSet_8,
  MR_Word HeadVar__2_86);

static MR_bool MR_CALL 
check_hlds__check_typeclass__IntroducedFrom__pred__check_ctor_type_ambiguities__1724__1_2_p_0(
  MR_Word ExistQVars_18,
  MR_Word LambdaHeadVar__1_39);

static MR_Word MR_CALL 
check_hlds__check_typeclass__IntroducedFrom__func__check_ctor_type_ambiguities__1722__1_1_f_0(
  MR_Word LambdaHeadVar__1_36);

static MR_String MR_CALL 
check_hlds__check_typeclass__IntroducedFrom__func__report_coverage_error__1578__1_2_f_0(
  MR_Word TVarSet_11,
  MR_Word HeadVar__2_85);

static void MR_CALL 
check_hlds__check_typeclass__IntroducedFrom__pred__produce_auxiliary_procs__974__1_6_p_0(
  MR_Word Context_29,
  MR_Integer PredArity_77,
  MR_Word LambdaHeadVar__1_120,
  MR_Integer * LambdaHeadVar__2_121,
  MR_Word LambdaHeadVar__3_122,
  MR_Word * LambdaHeadVar__4_123);

static MR_bool MR_CALL 
check_hlds__check_typeclass__IntroducedFrom__pred__get_matching_instance_defns__846__1_2_p_0(
  MR_Word LambdaHeadVar__1_42,
  MR_Word * LambdaHeadVar__2_43);

static MR_bool MR_CALL 
check_hlds__check_typeclass__IntroducedFrom__pred__get_matching_instance_defns__827__1_4_p_0(
  MR_Word PredOrFunc_2,
  MR_Word MethodName_3,
  MR_Integer MethodArity_4,
  MR_Word LambdaHeadVar__1_40);

static void MR_CALL 
check_hlds__check_typeclass__IntroducedFrom__pred__check_instance_pred_procs__791__1_3_p_0(
  MR_Word InstancePredId_46,
  MR_Integer LambdaHeadVar__1_73,
  MR_Word * LambdaHeadVar__2_74);

static void MR_CALL 
check_hlds__check_typeclass__IntroducedFrom__pred__check_instance_pred__692__1_3_p_0(
  MR_Word ProcTable_48,
  MR_Integer LambdaHeadVar__1_84,
  MR_Word * LambdaHeadVar__2_85);

static MR_bool MR_CALL 
check_hlds__check_typeclass__IntroducedFrom__pred__check_instance_pred__664__1_3_p_0(
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
check_hlds__check_typeclass____Compare____instance_arg_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__check_typeclass____Unify____instance_arg_result_0_0(
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
check_hlds__check_typeclass__induced_fundeps_2_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__check_typeclass__induced_fundeps_2_5_p_0(
  MR_Word ClassTable_6,
  MR_Word TVarSet_7,
  MR_Word Constraint_8,
  MR_Word STATE_VARIABLE_FunDeps_0_25,
  MR_Word * STATE_VARIABLE_FunDeps_26);

static void MR_CALL 
check_hlds__check_typeclass__check_ctor_type_ambiguities_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__check_typeclass__check_ctor_type_ambiguities_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__check_typeclass__check_ctor_type_ambiguities_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__check_typeclass__check_ctor_type_ambiguities_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word TypeCtor_8,
  MR_Word TypeDefn_9,
  MR_Word Ctor_10,
  MR_Word STATE_VARIABLE_Specs_0_33,
  MR_Word * STATE_VARIABLE_Specs_34);

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
check_hlds__check_typeclass__check_ctor_constraints_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__check_typeclass__check_ctor_constraints_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19);

static void MR_CALL 
check_hlds__check_typeclass__check_pred_constraints_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__check_typeclass__check_pred_constraints_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word PredId_6,
  MR_Word STATE_VARIABLE_Specs_0_12,
  MR_Word * STATE_VARIABLE_Specs_13);

static void MR_CALL 
check_hlds__check_typeclass__check_constraint_quant_3_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__check_typeclass__check_constraint_quant_3_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
check_hlds__check_typeclass__check_constraint_quant_3_p_0(
  MR_Word PredInfo_4,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16);

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
check_hlds__check_typeclass__fundeps_closure_2_3_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_Box MR_CALL 
check_hlds__check_typeclass__fundeps_closure_2_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
check_hlds__check_typeclass__fundeps_closure_2_3_f_0(
  MR_Word FunDeps0_5,
  MR_Word NewVars0_6,
  MR_Word Result0_7);

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
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_LaterLines_0_8,
  MR_Word * STATE_VARIABLE_LaterLines_9);

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
  MR_Word STATE_VARIABLE_Specs_0_24,
  MR_Word * STATE_VARIABLE_Specs_25);

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
  MR_Word STATE_VARIABLE_Specs_0_24,
  MR_Word * STATE_VARIABLE_Specs_25);

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
  MR_Word STATE_VARIABLE_ModuleInfo_0_103,
  MR_Word * STATE_VARIABLE_ModuleInfo_104,
  MR_Word STATE_VARIABLE_QualInfo_0_105,
  MR_Word * STATE_VARIABLE_QualInfo_106,
  MR_Word STATE_VARIABLE_Specs_0_107,
  MR_Word * STATE_VARIABLE_Specs_108);

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
  MR_Word STATE_VARIABLE_Specs_0_55,
  MR_Word * STATE_VARIABLE_Specs_56);

static void MR_CALL 
check_hlds__check_typeclass__constraint_list_to_string_2_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_String * HeadVar__3_3);

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
  MR_Word STATE_VARIABLE_InstanceDefn_0_39,
  MR_Word * STATE_VARIABLE_InstanceDefn_40,
  MR_Word STATE_VARIABLE_ModuleInfo_0_41,
  MR_Word * STATE_VARIABLE_ModuleInfo_42,
  MR_Word STATE_VARIABLE_QualInfo_0_43,
  MR_Word * STATE_VARIABLE_QualInfo_44,
  MR_Word STATE_VARIABLE_Specs_0_45,
  MR_Word * STATE_VARIABLE_Specs_46);

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
check_hlds__check_typeclass__report_unknown_instance_methods_6_p_0(
  MR_Word ClassId_7,
  MR_Word HeadMethod_8,
  MR_Word TailMethods_9,
  MR_Word Context_10,
  MR_Word STATE_VARIABLE_Specs_0_27,
  MR_Word * STATE_VARIABLE_Specs_28);

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
  MR_Word STATE_VARIABLE_ModuleInfo_0_36,
  MR_Word * STATE_VARIABLE_ModuleInfo_37,
  MR_Word STATE_VARIABLE_QualInfo_0_38,
  MR_Word * STATE_VARIABLE_QualInfo_39,
  MR_Word STATE_VARIABLE_Specs_0_40,
  MR_Word * STATE_VARIABLE_Specs_41);

static void MR_CALL 
check_hlds__check_typeclass__is_valid_instance_type_10_p_0(
  MR_Word ModuleInfo_11,
  MR_Word ClassId_12,
  MR_Word InstanceDefn_13,
  MR_Word Type_14,
  MR_Integer N_15,
  MR_Integer * HeadVar__6_6,
  MR_Word STATE_VARIABLE_SeenTypes_0_51,
  MR_Word * STATE_VARIABLE_SeenTypes_52,
  MR_Word STATE_VARIABLE_Specs_0_53,
  MR_Word * STATE_VARIABLE_Specs_54);

static void MR_CALL 
check_hlds__check_typeclass__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_97_99_104_95_97_114_103_95_105_115_95_97_95_116_121_112_101_95_118_97_114_105_97_98_108_101_95_95_91_49_93_95_48_4_p_0(
  MR_Word HeadVar__2_2,
  MR_Integer N_3,
  MR_Word * HeadVar__4_4);

static MR_Word MR_CALL 
check_hlds__check_typeclass__badly_formed_instance_type_msg_4_f_0(
  MR_Word ClassId_6,
  MR_Word InstanceDefn_7,
  MR_Integer N_8,
  MR_Word Error_9);

static void MR_CALL 
check_hlds__check_typeclass__is_valid_instance_orig_type_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word ClassId_10,
  MR_Word InstanceDefn_11,
  MR_Word Type_12,
  MR_Integer N_13,
  MR_Integer * HeadVar__6_6,
  MR_Word STATE_VARIABLE_Specs_0_46,
  MR_Word * STATE_VARIABLE_Specs_47);

static MR_Word MR_CALL 
check_hlds__check_typeclass__bad_instance_type_msg_5_f_0(
  MR_Word ClassId_7,
  MR_Word InstanceDefn_8,
  MR_Integer N_9,
  MR_Word EndPieces_10,
  MR_Word Kind_11);

static void MR_CALL 
check_hlds__check_typeclass__check_instance_declaration_types_for_instance_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

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
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16);

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
check_hlds__check_typeclass____Unify____instance_arg_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__check_typeclass____Compare____instance_arg_result_0_0_10001(
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


static /* final */ const MR_Box check_hlds__check_typeclass_scalar_common_1[149][2];

static /* final */ const MR_Box check_hlds__check_typeclass_scalar_common_2[12][3];

static /* final */ const MR_Box check_hlds__check_typeclass_scalar_common_3[3][13];

static /* final */ const MR_Box check_hlds__check_typeclass_scalar_common_4[5][9];

static /* final */ const MR_Box check_hlds__check_typeclass_scalar_common_5[6][8];

static /* final */ const MR_Box check_hlds__check_typeclass_scalar_common_6[2][11];

static /* final */ const MR_Box check_hlds__check_typeclass_scalar_common_7[2][4];

static /* final */ const MR_Box check_hlds__check_typeclass_scalar_common_8[9][6];

static /* final */ const MR_Box check_hlds__check_typeclass_scalar_common_9[7][7];

static /* final */ const MR_Box check_hlds__check_typeclass_scalar_common_10[5][5];

static /* final */ const MR_Box check_hlds__check_typeclass_scalar_common_11[1][18];

static /* final */ const MR_Box check_hlds__check_typeclass_scalar_common_12[1][17];

static /* final */ const MR_Box check_hlds__check_typeclass_scalar_common_13[4][1];

static /* final */ const MR_Box check_hlds__check_typeclass_scalar_common_14[2][10];




static /* final */ const MR_Box check_hlds__check_typeclass_scalar_common_1[149][2] = {
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
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
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
    ((MR_Box) (&check_hlds__check_typeclass__check_hlds__check_typeclass__type_ctor_info_induced_fundep_0))
  },
  /* row 13 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&check_hlds__check_typeclass_scalar_common_1[5]))
  },
  /* row 14 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
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
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[21])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "instance in the implementation."))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[21])))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "has no corresponding concrete"))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[25])))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "not determined by the domain."))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[28]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[21])))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "function\'s argument or result types."))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[21])))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "predicate\'s argument types."))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[32]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[21])))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "not determined by the constructor\'s argument types."))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[34]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[21])))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "of the reference manual for details."))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[36]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[21])))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "See the \"Functional dependencies\" section"))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[37])))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[39])))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is fully determined."))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[40])))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "2) The type variable occurs in a type which"))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[42])))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[44])))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "constructor which is constrained."))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[46]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[45])))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "types of the predicate, function, or"))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[48]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[47])))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "1) The type variable occurs in the argument"))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[50]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[49])))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[51])))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "following holds:"))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[53]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[52])))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "A type variable is determined if one of the"))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[55]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[54])))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[56])))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "determined."))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[58]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[57])))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "that functional dependency are fully"))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[60]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[59])))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "the types in all of the domain arguments for"))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[62]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[61])))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "functional dependency for that class, and"))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[64]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[63])))
  },
  /* row 66 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "that argument is in the range of some"))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[66]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[65])))
  },
  /* row 68 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "2) The type occurs in a constraint argument,"))
  },
  /* row 69 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[68]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[67])))
  },
  /* row 70 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[69])))
  },
  /* row 71 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "are determined."))
  },
  /* row 72 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[71]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[70])))
  },
  /* row 73 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "1) All type variables occurring in the type"))
  },
  /* row 74 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[73]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[72])))
  },
  /* row 75 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[74])))
  },
  /* row 76 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[53]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[75])))
  },
  /* row 77 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "A type is fully determined if one of the"))
  },
  /* row 78 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[77]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[76])))
  },
  /* row 79 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "must be fully determined."))
  },
  /* row 80 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[79]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[78])))
  },
  /* row 81 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "All types occurring in typeclass constraints"))
  },
  /* row 82 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[81]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[80])))
  },
  /* row 83 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "First definition appears here."))
  },
  /* row 84 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[83]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[21])))
  },
  /* row 85 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Subsequent definition appears here."))
  },
  /* row 86 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[85]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[21])))
  },
  /* row 87 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "the type class has none of these methods:"))
  },
  /* row 88 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[87]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[21])))
  },
  /* row 89 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 90 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[89]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[88])))
  },
  /* row 91 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In instance declaration for"))
  },
  /* row 92 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 93 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[92]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 94 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "the"))
  },
  /* row 95 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "argument"))
  },
  /* row 96 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "(Types in instance declarations must be functors with variables as arguments.)"))
  },
  /* row 97 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[96]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[21])))
  },
  /* row 98 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[97])))
  },
  /* row 99 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__check_typeclass_scalar_common_1[98]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 100 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is an abstract exported equivalence type."))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[100]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is a type whose"))
  },
  /* row 103 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "argument is not a variable."))
  },
  /* row 104 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[103]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 105 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is an apply/N type."))
  },
  /* row 106 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[105]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 107 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is a higher order type."))
  },
  /* row 108 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[107]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 109 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is a type variable."))
  },
  /* row 110 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[109]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 111 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: no definition for typeclass"))
  },
  /* row 112 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 113 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row 114 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "the type class has no"))
  },
  /* row 115 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "method named"))
  },
  /* row 116 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: instance declaration for abstract typeclass"))
  },
  /* row 117 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "not satisfied:"))
  },
  /* row 118 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "multiple implementations of type class"))
  },
  /* row 119 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "method"))
  },
  /* row 120 */
  {
    ((MR_Box) (&check_hlds__check_typeclass_scalar_common_13[1])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 121 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "no implementation for type class"))
  },
  /* row 122 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: abstract instance declaration"))
  },
  /* row 123 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "for"))
  },
  /* row 124 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: cyclic superclass relation detected:"))
  },
  /* row 125 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "<="))
  },
  /* row 126 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In instance for typeclass"))
  },
  /* row 127 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "functional dependency not satisfied:"))
  },
  /* row 128 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in the range of the functional dependency, but"))
  },
  /* row 129 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Inconsistent instance declaration for typeclass"))
  },
  /* row 130 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "with functional dependency"))
  },
  /* row 131 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Here is the conflicting instance."))
  },
  /* row 132 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[131]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 133 */
  {
    ((MR_Box) (&check_hlds__check_typeclass_scalar_common_13[2])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 134 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In declaration for"))
  },
  /* row 135 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "error in type class constraints:"))
  },
  /* row 136 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in the constraints, but"))
  },
  /* row 137 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "not determined by the"))
  },
  /* row 138 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[137]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 139 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In declaration of"))
  },
  /* row 140 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[139]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 141 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "type variable"))
  },
  /* row 142 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "existentially constrained"))
  },
  /* row 143 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "universally quantified"))
  },
  /* row 144 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "universally constrained"))
  },
  /* row 145 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "existentially quantified"))
  },
  /* row 146 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "but"))
  },
  /* row 147 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In declaration for type"))
  },
  /* row 148 */
  {
    ((MR_Box) (&check_hlds__check_typeclass_scalar_common_13[3])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box check_hlds__check_typeclass_scalar_common_2[12][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&check_hlds__check_typeclass_scalar_common_1[0]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&check_hlds__check_typeclass_scalar_common_4[0])),
    ((MR_Box) (check_hlds__check_typeclass__check_for_missing_concrete_instances_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&check_hlds__check_typeclass_scalar_common_10[0])),
    ((MR_Box) (check_hlds__check_typeclass__check_one_class_10_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&check_hlds__check_typeclass_scalar_common_10[1])),
    ((MR_Box) (check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_6)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&check_hlds__check_typeclass_scalar_common_10[2])),
    ((MR_Box) (check_hlds__check_typeclass__report_duplicate_method_defn_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&check_hlds__check_typeclass_scalar_common_8[5])),
    ((MR_Box) (check_hlds__check_typeclass__report_cyclic_classes_2_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&check_hlds__check_typeclass_scalar_common_7[1])),
    ((MR_Box) (check_hlds__check_typeclass__check_fundeps_for_class_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&check_hlds__check_typeclass_scalar_common_7[1])),
    ((MR_Box) (check_hlds__check_typeclass__check_fundeps_for_class_4_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&check_hlds__check_typeclass_scalar_common_5[4])),
    ((MR_Box) (check_hlds__check_typeclass__fundeps_closure_2_3_f_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&check_hlds__check_typeclass_scalar_common_10[3])),
    ((MR_Box) (check_hlds__check_typeclass__check_ctor_type_ambiguities_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__check_typeclass_scalar_common_3[3][13] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 10)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 10)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__check_typeclass__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__check_typeclass__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 10)),
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

static /* final */ const MR_Box check_hlds__check_typeclass_scalar_common_4[5][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box check_hlds__check_typeclass_scalar_common_5[6][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&check_hlds__check_typeclass__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_class__type_ctor_info_hlds_class_defn_0)),
    ((MR_Box) (&check_hlds__check_typeclass__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_check_hlds__check_typeclass__type_ctor_info_induced_fundep_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_check_hlds__check_typeclass__type_ctor_info_induced_fundep_0))
  },
};

static /* final */ const MR_Box check_hlds__check_typeclass_scalar_common_6[2][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
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

static /* final */ const MR_Box check_hlds__check_typeclass_scalar_common_7[2][4] = {
  /* row 0 */
  {
    ((MR_Box) (&check_hlds__check_typeclass_scalar_common_6[0])),
    ((MR_Box) (check_hlds__check_typeclass__check_for_cyclic_classes_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0))
  },
};

static /* final */ const MR_Box check_hlds__check_typeclass_scalar_common_8[9][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__check_typeclass__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_class__type_ctor_info_hlds_class_defn_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__pred_table__hlds__pred_table__type_ctor_info_predicate_table_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__check_typeclass__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__check_typeclass__check_hlds__check_typeclass__type_ctor_info_modes_and_detism_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&check_hlds__check_typeclass__cord__pti_cord_1__plain_parse_tree__error_util__type_ctor_info_format_component_0)),
    ((MR_Box) (&check_hlds__check_typeclass__cord__pti_cord_1__plain_parse_tree__error_util__type_ctor_info_format_component_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__check_typeclass__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__check_typeclass__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__check_typeclass__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__check_typeclass__check_hlds__check_typeclass__type_ctor_info_induced_fundep_0)),
    ((MR_Box) (&check_hlds__check_typeclass__check_hlds__check_typeclass__type_ctor_info_induced_fundep_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__check_typeclass__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
};

static /* final */ const MR_Box check_hlds__check_typeclass_scalar_common_9[7][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&check_hlds__check_typeclass__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__check_typeclass__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_class__type_ctor_info_hlds_class_defn_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_check_hlds__check_typeclass__type_ctor_info_induced_fundep_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_check_hlds__check_typeclass__type_ctor_info_induced_fundep_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_fundep_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_check_hlds__check_typeclass__type_ctor_info_induced_fundep_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_check_hlds__check_typeclass__type_ctor_info_induced_fundep_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__check_typeclass__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__check_typeclass__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
};

static /* final */ const MR_Box check_hlds__check_typeclass_scalar_common_10[5][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_clause_info_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__check_typeclass__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
};

static /* final */ const MR_Box check_hlds__check_typeclass_scalar_common_11[1][18] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 15)),
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

static /* final */ const MR_Box check_hlds__check_typeclass_scalar_common_12[1][17] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 14)),
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

static /* final */ const MR_Box check_hlds__check_typeclass_scalar_common_13[4][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[84])))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[132])))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[86])))
  },
};

static /* final */ const MR_Box check_hlds__check_typeclass_scalar_common_14[2][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_fundep_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__check_typeclass__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_class__type_ctor_info_hlds_class_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__check_typeclass__list__pti_list_1__plain_hlds__hlds_class__type_ctor_info_hlds_instance_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__check_typeclass__list__ti_list_1hlds__hlds_class__type_ctor_info_hlds_instance_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__check_typeclass__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_list__ti_list_1hlds__hlds_class__type_ctor_info_hlds_instance_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0,
    (MR_PseudoTypeInfo) &check_hlds__check_typeclass__list__ti_list_1hlds__hlds_class__type_ctor_info_hlds_instance_defn_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_class_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__check_typeclass__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_class_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__check_typeclass__list__ti_list_1parse_tree__prog_data__type_ctor_info_class_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__check_typeclass__list__pti_list_1__plain_list__ti_list_1parse_tree__prog_data__type_ctor_info_class_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__check_typeclass__list__ti_list_1parse_tree__prog_data__type_ctor_info_class_id_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__check_typeclass__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_data__type_ctor_info_hlds_type_defn_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__check_typeclass__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__check_typeclass__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__check_typeclass__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__check_typeclass__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__check_typeclass__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__check_typeclass__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__check_typeclass__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_instance_method_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_clause_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__check_typeclass__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__check_typeclass__cord__pti_cord_1__plain_parse_tree__error_util__type_ctor_info_format_component_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__check_typeclass__list__pti_list_1__plain_hlds__hlds_class__type_ctor_info_hlds_class_fundep_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_fundep_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__check_typeclass__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__check_typeclass__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__check_typeclass__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__check_typeclass__list__pti_list_1__plain_check_hlds__check_typeclass__type_ctor_info_induced_fundep_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__check_typeclass__check_hlds__check_typeclass__type_ctor_info_induced_fundep_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__check_typeclass__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_EnumFunctorDesc check_hlds__check_typeclass__check_hlds__check_typeclass__enum_functor_desc_bad_instance_type_kind_0_0 = {
  (MR_String) "badly_formed",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc check_hlds__check_typeclass__check_hlds__check_typeclass__enum_functor_desc_bad_instance_type_kind_0_1 = {
  (MR_String) "abstract_exported_eqv",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr check_hlds__check_typeclass__check_hlds__check_typeclass__enum_value_ordered_bad_instance_type_kind_0[2] = {
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__check_typeclass____Unify____bad_instance_type_kind_0_0_10001)),
  ((MR_Box) (check_hlds__check_typeclass____Compare____bad_instance_type_kind_0_0_10001)),
  (MR_String) "check_hlds.check_typeclass",
  (MR_String) "bad_instance_type_kind",
  {     check_hlds__check_typeclass__check_hlds__check_typeclass__enum_name_ordered_bad_instance_type_kind_0 },
  {     check_hlds__check_typeclass__check_hlds__check_typeclass__enum_value_ordered_bad_instance_type_kind_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__check_typeclass__check_hlds__check_typeclass__functor_number_map_bad_instance_type_kind_0
};

static const MR_FA_TypeInfo_Struct1 check_hlds__check_typeclass__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__check_typeclass__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__check_typeclass__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__check_typeclass__list__ti_list_1check_hlds__check_typeclass__type_ctor_info_modes_and_detism_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__check_typeclass__check_hlds__check_typeclass__type_ctor_info_modes_and_detism_0
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__check_typeclass__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_PseudoTypeInfo check_hlds__check_typeclass__check_hlds__check_typeclass__field_types_check_instance_method_info_0_0[9] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0,
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &check_hlds__check_typeclass__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
  (MR_PseudoTypeInfo) &check_hlds__check_typeclass__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraints_0,
  (MR_PseudoTypeInfo) &check_hlds__check_typeclass__list__ti_list_1check_hlds__check_typeclass__type_ctor_info_modes_and_detism_0,
  (MR_PseudoTypeInfo) &check_hlds__check_typeclass__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
  (MR_PseudoTypeInfo) &hlds__status__hlds__status__type_ctor_info_instance_status_0
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

static const MR_DuFunctorDesc check_hlds__check_typeclass__check_hlds__check_typeclass__du_functor_desc_check_instance_method_info_0_0 = {
  (MR_String) "check_instance_method_info",
  (MR_Integer) 9,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__check_typeclass__check_hlds__check_typeclass__field_types_check_instance_method_info_0_0,
  check_hlds__check_typeclass__check_hlds__check_typeclass__field_names_check_instance_method_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__check_typeclass__check_hlds__check_typeclass__du_stag_ordered_check_instance_method_info_0_0[1] = {
  &check_hlds__check_typeclass__check_hlds__check_typeclass__du_functor_desc_check_instance_method_info_0_0
};

static const MR_DuPtagLayout check_hlds__check_typeclass__check_hlds__check_typeclass__du_ptag_ordered_check_instance_method_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__check_typeclass__check_hlds__check_typeclass__du_stag_ordered_check_instance_method_info_0_0
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__check_typeclass____Unify____check_instance_method_info_0_0_10001)),
  ((MR_Box) (check_hlds__check_typeclass____Compare____check_instance_method_info_0_0_10001)),
  (MR_String) "check_hlds.check_typeclass",
  (MR_String) "check_instance_method_info",
  {     check_hlds__check_typeclass__check_hlds__check_typeclass__du_name_ordered_check_instance_method_info_0 },
  {     check_hlds__check_typeclass__check_hlds__check_typeclass__du_ptag_ordered_check_instance_method_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__check_typeclass__check_hlds__check_typeclass__functor_number_map_check_instance_method_info_0
};

const MR_TypeCtorInfo_Struct check_hlds__check_typeclass__check_hlds__check_typeclass__type_ctor_info_class_path_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__check_typeclass____Unify____class_path_0_0_10001)),
  ((MR_Box) (check_hlds__check_typeclass____Compare____class_path_0_0_10001)),
  (MR_String) "check_hlds.check_typeclass",
  (MR_String) "class_path",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__check_typeclass__list__ti_list_1parse_tree__prog_data__type_ctor_info_class_id_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct1 check_hlds__check_typeclass__set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &check_hlds__check_typeclass__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_PseudoTypeInfo check_hlds__check_typeclass__check_hlds__check_typeclass__field_types_induced_fundep_0_0[2] = {
  (MR_PseudoTypeInfo) &check_hlds__check_typeclass__set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
  (MR_PseudoTypeInfo) &check_hlds__check_typeclass__set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
};

static const MR_ConstString check_hlds__check_typeclass__check_hlds__check_typeclass__field_names_induced_fundep_0_0[2] = {
  (MR_String) "domain",
  (MR_String) "range"
};

static const MR_DuFunctorDesc check_hlds__check_typeclass__check_hlds__check_typeclass__du_functor_desc_induced_fundep_0_0 = {
  (MR_String) "fundep",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__check_typeclass__check_hlds__check_typeclass__field_types_induced_fundep_0_0,
  check_hlds__check_typeclass__check_hlds__check_typeclass__field_names_induced_fundep_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__check_typeclass__check_hlds__check_typeclass__du_stag_ordered_induced_fundep_0_0[1] = {
  &check_hlds__check_typeclass__check_hlds__check_typeclass__du_functor_desc_induced_fundep_0_0
};

static const MR_DuPtagLayout check_hlds__check_typeclass__check_hlds__check_typeclass__du_ptag_ordered_induced_fundep_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__check_typeclass__check_hlds__check_typeclass__du_stag_ordered_induced_fundep_0_0
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__check_typeclass____Unify____induced_fundep_0_0_10001)),
  ((MR_Box) (check_hlds__check_typeclass____Compare____induced_fundep_0_0_10001)),
  (MR_String) "check_hlds.check_typeclass",
  (MR_String) "induced_fundep",
  {     check_hlds__check_typeclass__check_hlds__check_typeclass__du_name_ordered_induced_fundep_0 },
  {     check_hlds__check_typeclass__check_hlds__check_typeclass__du_ptag_ordered_induced_fundep_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__check_typeclass__check_hlds__check_typeclass__functor_number_map_induced_fundep_0
};

static const MR_FA_TypeInfo_Struct1 check_hlds__check_typeclass__list__ti_list_1check_hlds__check_typeclass__type_ctor_info_induced_fundep_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__check_typeclass__check_hlds__check_typeclass__type_ctor_info_induced_fundep_0
  }
};

const MR_TypeCtorInfo_Struct check_hlds__check_typeclass__check_hlds__check_typeclass__type_ctor_info_induced_fundeps_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__check_typeclass____Unify____induced_fundeps_0_0_10001)),
  ((MR_Box) (check_hlds__check_typeclass____Compare____induced_fundeps_0_0_10001)),
  (MR_String) "check_hlds.check_typeclass",
  (MR_String) "induced_fundeps",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__check_typeclass__list__ti_list_1check_hlds__check_typeclass__type_ctor_info_induced_fundep_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_DuFunctorDesc check_hlds__check_typeclass__check_hlds__check_typeclass__du_functor_desc_instance_arg_result_0_0 = {
  (MR_String) "no_error",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo check_hlds__check_typeclass__check_hlds__check_typeclass__field_types_instance_arg_result_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc check_hlds__check_typeclass__check_hlds__check_typeclass__du_functor_desc_instance_arg_result_0_1 = {
  (MR_String) "arg_not_type_variable",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  check_hlds__check_typeclass__check_hlds__check_typeclass__field_types_instance_arg_result_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__check_typeclass__check_hlds__check_typeclass__du_stag_ordered_instance_arg_result_0_0[1] = {
  &check_hlds__check_typeclass__check_hlds__check_typeclass__du_functor_desc_instance_arg_result_0_0
};

static const MR_DuFunctorDescPtr check_hlds__check_typeclass__check_hlds__check_typeclass__du_stag_ordered_instance_arg_result_0_1[1] = {
  &check_hlds__check_typeclass__check_hlds__check_typeclass__du_functor_desc_instance_arg_result_0_1
};

static const MR_DuPtagLayout check_hlds__check_typeclass__check_hlds__check_typeclass__du_ptag_ordered_instance_arg_result_0[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_LOCAL,
    check_hlds__check_typeclass__check_hlds__check_typeclass__du_stag_ordered_instance_arg_result_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__check_typeclass__check_hlds__check_typeclass__du_stag_ordered_instance_arg_result_0_1
  }
};

static const MR_DuFunctorDescPtr check_hlds__check_typeclass__check_hlds__check_typeclass__du_name_ordered_instance_arg_result_0[2] = {
  &check_hlds__check_typeclass__check_hlds__check_typeclass__du_functor_desc_instance_arg_result_0_1,
  &check_hlds__check_typeclass__check_hlds__check_typeclass__du_functor_desc_instance_arg_result_0_0
};

static const MR_Integer check_hlds__check_typeclass__check_hlds__check_typeclass__functor_number_map_instance_arg_result_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__check_typeclass__check_hlds__check_typeclass__type_ctor_info_instance_arg_result_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__check_typeclass____Unify____instance_arg_result_0_0_10001)),
  ((MR_Box) (check_hlds__check_typeclass____Compare____instance_arg_result_0_0_10001)),
  (MR_String) "check_hlds.check_typeclass",
  (MR_String) "instance_arg_result",
  {     check_hlds__check_typeclass__check_hlds__check_typeclass__du_name_ordered_instance_arg_result_0 },
  {     check_hlds__check_typeclass__check_hlds__check_typeclass__du_ptag_ordered_instance_arg_result_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__check_typeclass__check_hlds__check_typeclass__functor_number_map_instance_arg_result_0
};

static const MR_FA_TypeInfo_Struct1 check_hlds__check_typeclass__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__check_typeclass__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__check_typeclass__maybe__ti_maybe_1parse_tree__prog_data__type_ctor_info_determinism_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0
  }
};

static const MR_PseudoTypeInfo check_hlds__check_typeclass__check_hlds__check_typeclass__field_types_modes_and_detism_0_0[3] = {
  (MR_PseudoTypeInfo) &check_hlds__check_typeclass__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0,
  (MR_PseudoTypeInfo) &check_hlds__check_typeclass__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__check_typeclass__maybe__ti_maybe_1parse_tree__prog_data__type_ctor_info_determinism_0
};

static const MR_DuFunctorDesc check_hlds__check_typeclass__check_hlds__check_typeclass__du_functor_desc_modes_and_detism_0_0 = {
  (MR_String) "modes_and_detism",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__check_typeclass__check_hlds__check_typeclass__field_types_modes_and_detism_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__check_typeclass__check_hlds__check_typeclass__du_stag_ordered_modes_and_detism_0_0[1] = {
  &check_hlds__check_typeclass__check_hlds__check_typeclass__du_functor_desc_modes_and_detism_0_0
};

static const MR_DuPtagLayout check_hlds__check_typeclass__check_hlds__check_typeclass__du_ptag_ordered_modes_and_detism_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__check_typeclass__check_hlds__check_typeclass__du_stag_ordered_modes_and_detism_0_0
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__check_typeclass____Unify____modes_and_detism_0_0_10001)),
  ((MR_Box) (check_hlds__check_typeclass____Compare____modes_and_detism_0_0_10001)),
  (MR_String) "check_hlds.check_typeclass",
  (MR_String) "modes_and_detism",
  {     check_hlds__check_typeclass__check_hlds__check_typeclass__du_name_ordered_modes_and_detism_0 },
  {     check_hlds__check_typeclass__check_hlds__check_typeclass__du_ptag_ordered_modes_and_detism_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__check_typeclass__check_hlds__check_typeclass__functor_number_map_modes_and_detism_0
};

static const MR_EnumFunctorDesc check_hlds__check_typeclass__check_hlds__check_typeclass__enum_functor_desc_quant_error_type_0_0 = {
  (MR_String) "universal_constraint",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc check_hlds__check_typeclass__check_hlds__check_typeclass__enum_functor_desc_quant_error_type_0_1 = {
  (MR_String) "existential_constraint",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr check_hlds__check_typeclass__check_hlds__check_typeclass__enum_value_ordered_quant_error_type_0[2] = {
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__check_typeclass____Unify____quant_error_type_0_0_10001)),
  ((MR_Box) (check_hlds__check_typeclass____Compare____quant_error_type_0_0_10001)),
  (MR_String) "check_hlds.check_typeclass",
  (MR_String) "quant_error_type",
  {     check_hlds__check_typeclass__check_hlds__check_typeclass__enum_name_ordered_quant_error_type_0 },
  {     check_hlds__check_typeclass__check_hlds__check_typeclass__enum_value_ordered_quant_error_type_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__check_typeclass__check_hlds__check_typeclass__functor_number_map_quant_error_type_0
};

static void MR_CALL 
check_hlds__check_typeclass__IntroducedFrom__pred__report_duplicate_method_defn__2082__1_2_p_0(
  MR_Word LambdaHeadVar__1_82,
  MR_Word * LambdaHeadVar__2_83)
{
  {
    MR_Word TheContext_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_82, (MR_Integer) 4)));
    MR_Word Var_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_82, (MR_Integer) 0)));
    MR_Word Var_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_82, (MR_Integer) 1)));
    MR_Word Var_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_82, (MR_Integer) 2)));
    MR_Integer Var_133 = ((MR_Integer) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_82, (MR_Integer) 3)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *LambdaHeadVar__2_83 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (TheContext_33));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[148])));
    }
  }
}

static MR_String MR_CALL 
check_hlds__check_typeclass__IntroducedFrom__func__report_badly_quantified_vars__1904__1_2_f_0(
  MR_Word TVarSet_9,
  MR_Word HeadVar__2_75)
{
  {
    MR_String HeadVar__3_76;

    HeadVar__3_76 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, TVarSet_9, HeadVar__2_75);
    return HeadVar__3_76;
  }
}

static void MR_CALL 
check_hlds__check_typeclass__IntroducedFrom__pred__check_constraint_quant__1863__1_3_p_0_2(
  void * env_ptr_arg)
{
  {
    struct check_hlds__check_typeclass__IntroducedFrom__pred__check_constraint_quant__1863__1_3_p_0_env_0_s * env_ptr = (struct check_hlds__check_typeclass__IntroducedFrom__pred__check_constraint_quant__1863__1_3_p_0_env_0_s *) env_ptr_arg;

    *((env_ptr)->check_hlds__check_typeclass__IntroducedFrom__pred__check_constraint_quant__1863__1_3_p_0_env_0__LambdaHeadVar__1_18) = ((MR_Word) (env_ptr)->check_hlds__check_typeclass__IntroducedFrom__pred__check_constraint_quant__1863__1_3_p_0_env_0__conv0_LambdaHeadVar__1_18);
    check_hlds__check_typeclass__IntroducedFrom__pred__check_constraint_quant__1863__1_3_p_0_1(env_ptr);
  }
}

static void MR_CALL 
check_hlds__check_typeclass__IntroducedFrom__pred__check_constraint_quant__1863__1_3_p_0_1(
  void * env_ptr_arg)
{
  {
    struct check_hlds__check_typeclass__IntroducedFrom__pred__check_constraint_quant__1863__1_3_p_0_env_0_s * env_ptr = (struct check_hlds__check_typeclass__IntroducedFrom__pred__check_constraint_quant__1863__1_3_p_0_env_0_s *) env_ptr_arg;

    (env_ptr)->check_hlds__check_typeclass__IntroducedFrom__pred__check_constraint_quant__1863__1_3_p_0_env_0__succeeded = mercury__list__member_2_p_0((env_ptr)->check_hlds__check_typeclass__IntroducedFrom__pred__check_constraint_quant__1863__1_3_p_0_env_0__TypeInfo_24_24, ((MR_Box) (*((env_ptr)->check_hlds__check_typeclass__IntroducedFrom__pred__check_constraint_quant__1863__1_3_p_0_env_0__LambdaHeadVar__1_18))), (env_ptr)->check_hlds__check_typeclass__IntroducedFrom__pred__check_constraint_quant__1863__1_3_p_0_env_0__ExistQVars_6);
    if ((env_ptr)->check_hlds__check_typeclass__IntroducedFrom__pred__check_constraint_quant__1863__1_3_p_0_env_0__succeeded)
      ((env_ptr)->check_hlds__check_typeclass__IntroducedFrom__pred__check_constraint_quant__1863__1_3_p_0_env_0__cont)((env_ptr)->check_hlds__check_typeclass__IntroducedFrom__pred__check_constraint_quant__1863__1_3_p_0_env_0__cont_env_ptr);
  }
}

static void MR_CALL 
check_hlds__check_typeclass__IntroducedFrom__pred__check_constraint_quant__1863__1_3_p_0(
  MR_Word ExistQVars_6,
  MR_Word UnivTVars_10,
  MR_Word * LambdaHeadVar__1_18,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct check_hlds__check_typeclass__IntroducedFrom__pred__check_constraint_quant__1863__1_3_p_0_env_0_s env;

    (env).check_hlds__check_typeclass__IntroducedFrom__pred__check_constraint_quant__1863__1_3_p_0_env_0__ExistQVars_6 = ExistQVars_6;
    (env).check_hlds__check_typeclass__IntroducedFrom__pred__check_constraint_quant__1863__1_3_p_0_env_0__LambdaHeadVar__1_18 = LambdaHeadVar__1_18;
    (env).check_hlds__check_typeclass__IntroducedFrom__pred__check_constraint_quant__1863__1_3_p_0_env_0__cont = cont;
    (env).check_hlds__check_typeclass__IntroducedFrom__pred__check_constraint_quant__1863__1_3_p_0_env_0__cont_env_ptr = cont_env_ptr;
    (env).check_hlds__check_typeclass__IntroducedFrom__pred__check_constraint_quant__1863__1_3_p_0_env_0__TypeInfo_24_24 = (MR_Word) &check_hlds__check_typeclass_scalar_common_1[5];
    mercury__list__member_2_p_1((env).check_hlds__check_typeclass__IntroducedFrom__pred__check_constraint_quant__1863__1_3_p_0_env_0__TypeInfo_24_24, &(env).check_hlds__check_typeclass__IntroducedFrom__pred__check_constraint_quant__1863__1_3_p_0_env_0__conv0_LambdaHeadVar__1_18, UnivTVars_10, check_hlds__check_typeclass__IntroducedFrom__pred__check_constraint_quant__1863__1_3_p_0_2, &env);
  }
}

static MR_String MR_CALL 
check_hlds__check_typeclass__IntroducedFrom__func__report_unbound_tvars_in_ctor_context__1802__1_2_f_0(
  MR_Word TVarSet_10,
  MR_Word HeadVar__2_71)
{
  {
    MR_String HeadVar__3_72;

    HeadVar__3_72 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, TVarSet_10, HeadVar__2_71);
    return HeadVar__3_72;
  }
}

static MR_String MR_CALL 
check_hlds__check_typeclass__IntroducedFrom__func__report_unbound_tvars_in_pred_context__1770__1_2_f_0(
  MR_Word TVarSet_8,
  MR_Word HeadVar__2_86)
{
  {
    MR_String HeadVar__3_87;

    HeadVar__3_87 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, TVarSet_8, HeadVar__2_86);
    return HeadVar__3_87;
  }
}

static MR_bool MR_CALL 
check_hlds__check_typeclass__IntroducedFrom__pred__check_ctor_type_ambiguities__1724__1_2_p_0(
  MR_Word ExistQVars_18,
  MR_Word LambdaHeadVar__1_39)
{
  {
    MR_bool succeeded;

    succeeded = mercury__list__member_2_p_0((MR_Word) &check_hlds__check_typeclass_scalar_common_1[5], ((MR_Box) (LambdaHeadVar__1_39)), ExistQVars_18);
    return succeeded;
  }
}

static MR_Word MR_CALL 
check_hlds__check_typeclass__IntroducedFrom__func__check_ctor_type_ambiguities__1722__1_1_f_0(
  MR_Word LambdaHeadVar__1_36)
{
  {
    MR_Word LambdaHeadVar__2_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_36, (MR_Integer) 1)));
    MR_Word Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_36, (MR_Integer) 0)));
    MR_Word Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_36, (MR_Integer) 2)));

    return LambdaHeadVar__2_37;
  }
}

static MR_String MR_CALL 
check_hlds__check_typeclass__IntroducedFrom__func__report_coverage_error__1578__1_2_f_0(
  MR_Word TVarSet_11,
  MR_Word HeadVar__2_85)
{
  {
    MR_String HeadVar__3_86;

    HeadVar__3_86 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, TVarSet_11, HeadVar__2_85);
    return HeadVar__3_86;
  }
}

static void MR_CALL 
check_hlds__check_typeclass__IntroducedFrom__pred__produce_auxiliary_procs__974__1_6_p_0(
  MR_Word Context_29,
  MR_Integer PredArity_77,
  MR_Word LambdaHeadVar__1_120,
  MR_Integer * LambdaHeadVar__2_121,
  MR_Word LambdaHeadVar__3_122,
  MR_Word * LambdaHeadVar__4_123)
{
  {
    MR_Word Modes_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_120, (MR_Integer) 0)));
    MR_Word InstVarSet_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_120, (MR_Integer) 1)));
    MR_Word MaybeDet_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_120, (MR_Integer) 2)));
    MR_Word Var_124;

    {
      Var_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_124, 0) = ((MR_Box) (Modes_94));
    }
    hlds__add_pred__add_new_proc_14_p_0(Context_29, (MR_Integer) -1, PredArity_77, InstVarSet_95, Modes_94, Var_124, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 1, MaybeDet_96, (MR_Integer) 0, (MR_Integer) 1, LambdaHeadVar__3_122, LambdaHeadVar__4_123, LambdaHeadVar__2_121);
  }
}

static MR_bool MR_CALL 
check_hlds__check_typeclass__IntroducedFrom__pred__get_matching_instance_defns__846__1_2_p_0(
  MR_Word LambdaHeadVar__1_42,
  MR_Word * LambdaHeadVar__2_43)
{
  {
    MR_bool succeeded;
    MR_Word Defn_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_42, (MR_Integer) 2)));
    MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_42, (MR_Integer) 0)));
    MR_Word Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_42, (MR_Integer) 1)));
    MR_Integer Var_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_42, (MR_Integer) 3)));
    MR_Word Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_42, (MR_Integer) 4)));

    succeeded = ((MR_tag((MR_Word) Defn_33)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
      *LambdaHeadVar__2_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), Defn_33, (MR_Integer) 0)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__check_typeclass__IntroducedFrom__pred__get_matching_instance_defns__827__1_4_p_0(
  MR_Word PredOrFunc_2,
  MR_Word MethodName_3,
  MR_Integer MethodArity_4,
  MR_Word LambdaHeadVar__1_40)
{
  {
    MR_bool succeeded;
    MR_Word Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_40, (MR_Integer) 0)));
    MR_Word Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_40, (MR_Integer) 1)));
    MR_Integer Var_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_40, (MR_Integer) 3)));
    MR_Word _MethodDefn_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_40, (MR_Integer) 2)));
    MR_Word _Context_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_40, (MR_Integer) 4)));

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
check_hlds__check_typeclass__IntroducedFrom__pred__check_instance_pred_procs__791__1_3_p_0(
  MR_Word InstancePredId_46,
  MR_Integer LambdaHeadVar__1_73,
  MR_Word * LambdaHeadVar__2_74)
{
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
    *LambdaHeadVar__2_74 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (InstancePredId_46));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (LambdaHeadVar__1_73));
  }
}

static void MR_CALL 
check_hlds__check_typeclass__IntroducedFrom__pred__check_instance_pred__692__1_3_p_0(
  MR_Word ProcTable_48,
  MR_Integer LambdaHeadVar__1_84,
  MR_Word * LambdaHeadVar__2_85)
{
  {
    MR_Word ProcInfo_51;
    MR_Word Modes_52;
    MR_Word MaybeDetism_53;
    MR_Word InstVarSet_54;
    MR_Box conv0_ProcInfo_51;

    mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, ProcTable_48, ((MR_Box) (LambdaHeadVar__1_84)), &conv0_ProcInfo_51);
    ProcInfo_51 = ((MR_Word) conv0_ProcInfo_51);
    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_51, &Modes_52);
    hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(ProcInfo_51, &MaybeDetism_53);
    hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(ProcInfo_51, &InstVarSet_54);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *LambdaHeadVar__2_85 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Modes_52));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (InstVarSet_54));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MaybeDetism_53));
    }
  }
}

static MR_bool MR_CALL 
check_hlds__check_typeclass__IntroducedFrom__pred__check_instance_pred__664__1_3_p_0(
  MR_Word PredId_18,
  MR_Word LambdaHeadVar__1_76,
  MR_Integer * LambdaHeadVar__2_77)
{
  {
    MR_bool succeeded;
    MR_Word Var_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_76, (MR_Integer) 0)));

    *LambdaHeadVar__2_77 = ((MR_Integer) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_76, (MR_Integer) 1)));
    succeeded = hlds__hlds_pred____Unify____pred_id_0_0(PredId_18, Var_99);
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
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
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
    MR_Integer CastX_12 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_13 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_12 == CastY_13);
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
      MR_Word Var_10;

      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__check_typeclass_scalar_common_1[18], &Var_10, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (Var_10 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_10;
      else
      {
        MR_Word Var_11;

        mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__check_typeclass_scalar_common_1[19], &Var_11, ((MR_Box) (ArgX2_6)), ((MR_Box) (ArgY2_7)));
        succeeded = (Var_11 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_11;
        else
        {
          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__check_typeclass_scalar_common_1[20], HeadVar__1_1, ((MR_Box) (ArgX3_8)), ((MR_Box) (ArgY3_9)));
        }
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
    MR_Integer CastX_9 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_10 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_12_12;
      MR_Word TypeInfo_13_13;
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Word ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__check_typeclass_scalar_common_1[18], ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_12_12 = (MR_Word) &check_hlds__check_typeclass_scalar_common_1[19];
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          TypeInfo_13_13 = (MR_Word) &check_hlds__check_typeclass_scalar_common_1[20];
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__check_typeclass____Compare____instance_arg_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_8 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_9 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_8 == CastY_9);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Integer Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

      if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Integer ArgY1_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));

        mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Var_11, ArgY1_7);
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__check_typeclass____Unify____instance_arg_result_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_8 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Integer CastX_3 = (MR_Integer) HeadVar__1_1;
      MR_Integer CastY_4 = (MR_Integer) HeadVar__2_2;

      succeeded = (CastY_4 == CastX_3);
    }
    else
    {
      MR_Integer ArgX1_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Integer ArgY1_6;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        ArgY1_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
        succeeded = (ArgX1_5 == ArgY1_6);
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

    mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__check_typeclass_scalar_common_1[12], HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
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

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__check_typeclass_scalar_common_1[12], ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
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
    MR_Integer CastX_9 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_10 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word Var_8;

      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__check_typeclass_scalar_common_1[13], &Var_8, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (Var_8 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_8;
      else
      {
        mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__check_typeclass_scalar_common_1[13], HeadVar__1_1, ((MR_Box) (ArgX2_6)), ((MR_Box) (ArgY2_7)));
      }
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
    MR_Integer CastX_7 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_8 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_10_10;
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__check_typeclass_scalar_common_1[13], ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_10_10 = (MR_Word) &check_hlds__check_typeclass_scalar_common_1[13];
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

    mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__check_typeclass_scalar_common_1[8], HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
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

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__check_typeclass_scalar_common_1[8], ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
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
    MR_Integer CastX_30 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_31 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_30 == CastY_31);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Integer ArgX3_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Integer ArgY3_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
      MR_Word ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3)));
      MR_Word ArgX5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));
      MR_Word ArgY5_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4)));
      MR_Word ArgX6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5)));
      MR_Word ArgY6_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5)));
      MR_Word ArgX7_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6)));
      MR_Word ArgY7_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6)));
      MR_Word ArgX8_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7)));
      MR_Word ArgY8_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 7)));
      MR_Word ArgX9_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 8)));
      MR_Word ArgY9_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 8)));
      MR_Word Var_22;
      MR_Integer Var_41 = (MR_Integer) ArgX1_4;
      MR_Integer Var_42 = (MR_Integer) ArgY1_5;

      mercury__private_builtin__builtin_compare_int_3_p_0(&Var_22, Var_41, Var_42);
      succeeded = (Var_22 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_22;
      else
      {
        MR_Word Var_23;

        mdbcomp__sym_name____Compare____sym_name_0_0(&Var_23, ArgX2_6, ArgY2_7);
        succeeded = (Var_23 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_23;
        else
        {
          MR_Word Var_24;

          mercury__private_builtin__builtin_compare_int_3_p_0(&Var_24, ArgX3_8, ArgY3_9);
          succeeded = (Var_24 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_24;
          else
          {
            MR_Word Var_25;

            mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__check_typeclass_scalar_common_1[14], &Var_25, ((MR_Box) (ArgX4_10)), ((MR_Box) (ArgY4_11)));
            succeeded = (Var_25 == (MR_Integer) 0);
            succeeded = !(succeeded);
            if (succeeded)
              *HeadVar__1_1 = Var_25;
            else
            {
              MR_Word Var_26;

              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__check_typeclass_scalar_common_1[15], &Var_26, ((MR_Box) (ArgX5_12)), ((MR_Box) (ArgY5_13)));
              succeeded = (Var_26 == (MR_Integer) 0);
              succeeded = !(succeeded);
              if (succeeded)
                *HeadVar__1_1 = Var_26;
              else
              {
                MR_Word Var_27;

                parse_tree__prog_data____Compare____prog_constraints_0_0(&Var_27, ArgX6_14, ArgY6_15);
                succeeded = (Var_27 == (MR_Integer) 0);
                succeeded = !(succeeded);
                if (succeeded)
                  *HeadVar__1_1 = Var_27;
                else
                {
                  MR_Word Var_28;

                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__check_typeclass_scalar_common_1[16], &Var_28, ((MR_Box) (ArgX7_16)), ((MR_Box) (ArgY7_17)));
                  succeeded = (Var_28 == (MR_Integer) 0);
                  succeeded = !(succeeded);
                  if (succeeded)
                    *HeadVar__1_1 = Var_28;
                  else
                  {
                    MR_Word Var_29;

                    mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__check_typeclass_scalar_common_1[17], &Var_29, ((MR_Box) (ArgX8_18)), ((MR_Box) (ArgY8_19)));
                    succeeded = (Var_29 == (MR_Integer) 0);
                    succeeded = !(succeeded);
                    if (succeeded)
                      *HeadVar__1_1 = Var_29;
                    else
                      hlds__status____Compare____instance_status_0_0(HeadVar__1_1, ArgX9_20, ArgY9_21);
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
    MR_Integer CastX_21 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_22 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_21 == CastY_22);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_24_24;
      MR_Word TypeInfo_25_25;
      MR_Word TypeInfo_27_27;
      MR_Word TypeInfo_28_28;
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Integer ArgX3_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Integer ArgY3_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)));
      MR_Word ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ArgX5_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4)));
      MR_Word ArgY5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));
      MR_Word ArgX6_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5)));
      MR_Word ArgY6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5)));
      MR_Word ArgX7_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6)));
      MR_Word ArgY7_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6)));
      MR_Word ArgX8_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 7)));
      MR_Word ArgY8_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7)));
      MR_Word ArgX9_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 8)));
      MR_Word ArgY9_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 8)));

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
      {
        succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
        {
          succeeded = (ArgX3_7 == ArgY3_8);
          if (succeeded)
          {
            TypeInfo_24_24 = (MR_Word) &check_hlds__check_typeclass_scalar_common_1[14];
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_24_24, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
            if (succeeded)
            {
              TypeInfo_25_25 = (MR_Word) &check_hlds__check_typeclass_scalar_common_1[15];
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_25_25, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
              if (succeeded)
              {
                succeeded = parse_tree__prog_data____Unify____prog_constraints_0_0(ArgX6_13, ArgY6_14);
                if (succeeded)
                {
                  TypeInfo_27_27 = (MR_Word) &check_hlds__check_typeclass_scalar_common_1[16];
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_27_27, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
                  if (succeeded)
                  {
                    TypeInfo_28_28 = (MR_Word) &check_hlds__check_typeclass_scalar_common_1[17];
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
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
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
    MR_Word Domain_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), FunDep_1, (MR_Integer) 0)));
    MR_Word Range_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), FunDep_1, (MR_Integer) 1)));

    succeeded = mercury__set__is_empty_1_p_0((MR_Word) &check_hlds__check_typeclass_scalar_common_1[5], Domain_7);
    if (succeeded)
    {
      *STATE_VARIABLE_Vars_14 = mercury__set__union_2_f_0((MR_Word) &check_hlds__check_typeclass_scalar_common_1[5], Range_8, STATE_VARIABLE_Vars_0_13);
      *STATE_VARIABLE_FunDeps_12 = STATE_VARIABLE_FunDeps_0_11;
    }
    else
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
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
    MR_Word TypeInfo_9_9 = (MR_Word) &check_hlds__check_typeclass_scalar_common_1[5];
    MR_Word Domain0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
    MR_Word Range0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
    MR_Word Domain_7;
    MR_Word Range_8;

    Domain_7 = mercury__set__difference_2_f_0(TypeInfo_9_9, Domain0_5, Vars_4);
    Range_8 = mercury__set__difference_2_f_0(TypeInfo_9_9, Range0_6, Vars_4);
    {
      HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
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
    MR_Word TypeInfo_11_11 = (MR_Word) &check_hlds__check_typeclass_scalar_common_1[5];
    MR_Word NewVars_8;
    MR_Word Arg_9;
    MR_Word ArgVars_10;
    MR_Box conv0_Arg_9;

    conv0_Arg_9 = mercury__list__det_index1_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, Args_5, ArgNum_6);
    Arg_9 = ((MR_Word) conv0_Arg_9);
    parse_tree__prog_type__type_vars_2_p_0(Arg_9, &ArgVars_10);
    NewVars_8 = mercury__set__list_to_set_1_f_0(TypeInfo_11_11, ArgVars_10);
    HeadVar__4_4 = mercury__set__union_2_f_0(TypeInfo_11_11, Vars_7, NewVars_8);
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

    conv0_HeadVar__4_4 = check_hlds__check_typeclass__induced_vars_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
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
    MR_Word TypeCtorInfo_19_19 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Word TypeInfo_20_20 = (MR_Word) &check_hlds__check_typeclass_scalar_common_1[13];
    MR_Word TypeInfo_24_24;
    MR_Word Domain0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
    MR_Word Range0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
    MR_Word Domain_9;
    MR_Word Range_10;
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Word Var_16;
    MR_Word Var_18;
    MR_Box conv1_Domain_9;
    MR_Box conv2_Range_10;

    {
      Var_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_13, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_9[6]));
      MR_hl_field(MR_mktag(0), Var_13, 1) = ((MR_Box) (check_hlds__check_typeclass__induced_fundep_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_13, 3) = ((MR_Box) (Args_5));
    }
    TypeInfo_24_24 = (MR_Word) &check_hlds__check_typeclass_scalar_common_1[5];
    Var_14 = mercury__set__init_0_f_0(TypeInfo_24_24);
    conv1_Domain_9 = mercury__set__fold_3_f_0(TypeCtorInfo_19_19, TypeInfo_20_20, Var_13, Domain0_6, ((MR_Box) (Var_14)));
    Domain_9 = ((MR_Word) conv1_Domain_9);
    Var_16 = mercury__set__init_0_f_0(TypeInfo_24_24);
    conv2_Range_10 = mercury__set__fold_3_f_0(TypeCtorInfo_19_19, TypeInfo_20_20, Var_13, Range0_7, ((MR_Box) (Var_16)));
    Range_10 = ((MR_Word) conv2_Range_10);
    {
      Var_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (Domain_9));
      MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) (Range_10));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
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

    check_hlds__check_typeclass__induced_fundep_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv1_STATE_VARIABLE_FunDeps_12);
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
    MR_Word Name_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Constraint_6, (MR_Integer) 0)));
    MR_Word Args_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Constraint_6, (MR_Integer) 1)));
    MR_Integer Arity_10;
    MR_Word ClassDefn_11;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Box conv0_ClassDefn_11;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Box conv2_STATE_VARIABLE_FunDeps_13;

    Arity_10 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, Args_9);
    {
      Var_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (Name_8));
      MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (Arity_10));
    }
    conv0_ClassDefn_11 = mercury__map__lookup_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0, (MR_Word) &hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0, ClassTable_5, ((MR_Box) (Var_14)));
    ClassDefn_11 = ((MR_Word) conv0_ClassDefn_11);
    {
      Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_9[5]));
      MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (check_hlds__check_typeclass__induced_fundeps_3_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_15, 3) = ((MR_Box) (Args_9));
    }
    Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_11, (MR_Integer) 0)));
    Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_11, (MR_Integer) 1)));
    Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_11, (MR_Integer) 2)));
    Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_11, (MR_Integer) 3)));
    Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_11, (MR_Integer) 4)));
    Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_11, (MR_Integer) 5)));
    Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_11, (MR_Integer) 6)));
    Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_11, (MR_Integer) 7)));
    Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_11, (MR_Integer) 8)));
    Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_11, (MR_Integer) 9)));
    mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_fundep_0, (MR_Word) &check_hlds__check_typeclass_scalar_common_1[12], Var_15, Var_16, ((MR_Box) (STATE_VARIABLE_FunDeps_0_12)), &conv2_STATE_VARIABLE_FunDeps_13);
    *STATE_VARIABLE_FunDeps_13 = ((MR_Word) conv2_STATE_VARIABLE_FunDeps_13);
  }
}

static void MR_CALL 
check_hlds__check_typeclass__induced_fundeps_2_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_FunDeps_13;

    check_hlds__check_typeclass__induced_fundeps_3_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv1_STATE_VARIABLE_FunDeps_13);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_FunDeps_13));
  }
}

static void MR_CALL 
check_hlds__check_typeclass__induced_fundeps_2_5_p_0(
  MR_Word ClassTable_6,
  MR_Word TVarSet_7,
  MR_Word Constraint_8,
  MR_Word STATE_VARIABLE_FunDeps_0_25,
  MR_Word * STATE_VARIABLE_FunDeps_26)
{
  {
    MR_Word TypeCtorInfo_57_57 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
    MR_Word Name_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Constraint_8, (MR_Integer) 0)));
    MR_Word Args_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Constraint_8, (MR_Integer) 1)));
    MR_Integer Arity_12;
    MR_Word ClassDefn_13;
    MR_Word ClassAncestors_14;
    MR_Word Var_27;
    MR_Word Var_33;
    MR_Word Var_37;
    MR_Box conv0_ClassDefn_13;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_38;

    Arity_12 = mercury__list__length_1_f_0(TypeCtorInfo_57_57, Args_11);
    {
      Var_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_27, 0) = ((MR_Box) (Name_10));
      MR_hl_field(MR_mktag(0), Var_27, 1) = ((MR_Box) (Arity_12));
    }
    conv0_ClassDefn_13 = mercury__map__lookup_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0, (MR_Word) &hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0, ClassTable_6, ((MR_Box) (Var_27)));
    ClassDefn_13 = ((MR_Word) conv0_ClassDefn_13);
    Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_13, (MR_Integer) 0)));
    Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_13, (MR_Integer) 1)));
    Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_13, (MR_Integer) 2)));
    ClassAncestors_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_13, (MR_Integer) 3)));
    Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_13, (MR_Integer) 4)));
    Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_13, (MR_Integer) 5)));
    Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_13, (MR_Integer) 6)));
    Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_13, (MR_Integer) 7)));
    Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_13, (MR_Integer) 8)));
    Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_13, (MR_Integer) 9)));
    if ((ClassAncestors_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
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
      mercury__map__from_corresponding_lists_3_p_0((MR_Word) &check_hlds__check_typeclass_scalar_common_1[5], TypeCtorInfo_57_57, RenamedParams_22, Args_11, &Subst_23);
      parse_tree__prog_type_subst__apply_subst_to_prog_constraint_list_3_p_0(Subst_23, RenamedAncestors_21, &Ancestors_24);
      {
        Var_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_9[4]));
        MR_hl_field(MR_mktag(0), Var_28, 1) = ((MR_Box) (check_hlds__check_typeclass__induced_fundeps_2_5_p_0_1));
        MR_hl_field(MR_mktag(0), Var_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_28, 3) = ((MR_Box) (ClassTable_6));
      }
      mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &check_hlds__check_typeclass_scalar_common_1[12], Var_28, Ancestors_24, ((MR_Box) (STATE_VARIABLE_FunDeps_0_25)), &conv2_STATE_VARIABLE_FunDeps_26);
      *STATE_VARIABLE_FunDeps_26 = ((MR_Word) conv2_STATE_VARIABLE_FunDeps_26);
    }
  }
}

static void MR_CALL 
check_hlds__check_typeclass__check_ctor_type_ambiguities_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_FunDeps_26;

    check_hlds__check_typeclass__induced_fundeps_2_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv1_STATE_VARIABLE_FunDeps_26);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_FunDeps_26));
  }
}

static MR_bool MR_CALL 
check_hlds__check_typeclass__check_ctor_type_ambiguities_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__check_typeclass__IntroducedFrom__pred__check_ctor_type_ambiguities__1724__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
    return succeeded;
  }
}

static MR_Box MR_CALL 
check_hlds__check_typeclass__check_ctor_type_ambiguities_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_37;

    conv0_LambdaHeadVar__2_37 = check_hlds__check_typeclass__IntroducedFrom__func__check_ctor_type_ambiguities__1722__1_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_37));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
check_hlds__check_typeclass__check_ctor_type_ambiguities_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word TypeCtor_8,
  MR_Word TypeDefn_9,
  MR_Word Ctor_10,
  MR_Word STATE_VARIABLE_Specs_0_33,
  MR_Word * STATE_VARIABLE_Specs_34)
{
  {
    MR_bool succeeded;
    MR_Word MaybeExistConstraints_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_10, (MR_Integer) 0)));
    MR_Word CtorArgs_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_10, (MR_Integer) 2)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_10, (MR_Integer) 1)));
    MR_Integer Var_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Ctor_10, (MR_Integer) 3)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_10, (MR_Integer) 4)));

    if ((MaybeExistConstraints_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_Specs_34 = STATE_VARIABLE_Specs_0_33;
    else
    {
      MR_Word TypeInfo_19_63;
      MR_Word ExistConstraints_17 = (MR_Word) MR_body(((MR_Word) MaybeExistConstraints_12), (MR_Integer) 1);
      MR_Word ExistQVars_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ExistConstraints_17, (MR_Integer) 0)));
      MR_Word Constraints_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ExistConstraints_17, (MR_Integer) 1)));
      MR_Word ArgTypes_20;
      MR_Word ArgTVars_24;
      MR_Word ExistQArgTVars_26;
      MR_Word ConstrainedTVars_27;
      MR_Word TVarSet_28;
      MR_Word UnboundTVars_29;
      MR_Word Var_38;
      MR_Word ClassTable_57;
      MR_Word InducedFunDeps_58;
      MR_Word FunDepsClosure_59;
      MR_Word UnboundTVarsSet_60;
      MR_Word Var_61;
      MR_Word Var_62;
      MR_Word Var_68;
      MR_Word Var_77;
      MR_Box conv2_InducedFunDeps_58;

      ArgTypes_20 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &check_hlds__check_typeclass_scalar_common_2[11], CtorArgs_14);
      parse_tree__prog_type__type_vars_list_2_p_0(ArgTypes_20, &ArgTVars_24);
      {
        Var_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_10[4]));
        MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (check_hlds__check_typeclass__check_ctor_type_ambiguities_6_p_0_2));
        MR_hl_field(MR_mktag(0), Var_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_38, 3) = ((MR_Box) (ExistQVars_18));
      }
      mercury__list__filter_3_p_0((MR_Word) &check_hlds__check_typeclass_scalar_common_1[5], Var_38, ArgTVars_24, &ExistQArgTVars_26);
      parse_tree__prog_type__constraint_list_get_tvars_2_p_0(Constraints_19, &ConstrainedTVars_27);
      hlds__hlds_data__get_type_defn_tvarset_2_p_0(TypeDefn_9, &TVarSet_28);
      hlds__hlds_module__module_info_get_class_table_2_p_0(ModuleInfo_7, &ClassTable_57);
      {
        Var_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_68, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_5[5]));
        MR_hl_field(MR_mktag(0), Var_68, 1) = ((MR_Box) (check_hlds__check_typeclass__check_ctor_type_ambiguities_6_p_0_3));
        MR_hl_field(MR_mktag(0), Var_68, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_68, 3) = ((MR_Box) (ClassTable_57));
        MR_hl_field(MR_mktag(0), Var_68, 4) = ((MR_Box) (TVarSet_28));
      }
      mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &check_hlds__check_typeclass_scalar_common_1[12], Var_68, Constraints_19, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &conv2_InducedFunDeps_58);
      InducedFunDeps_58 = ((MR_Word) conv2_InducedFunDeps_58);
      TypeInfo_19_63 = (MR_Word) &check_hlds__check_typeclass_scalar_common_1[5];
      Var_61 = mercury__set__list_to_set_1_f_0(TypeInfo_19_63, ExistQArgTVars_26);
      Var_77 = mercury__set__init_0_f_0((MR_Word) &check_hlds__check_typeclass_scalar_common_1[5]);
      FunDepsClosure_59 = check_hlds__check_typeclass__fundeps_closure_2_3_f_0(InducedFunDeps_58, Var_61, Var_77);
      Var_62 = mercury__set__list_to_set_1_f_0(TypeInfo_19_63, ConstrainedTVars_27);
      UnboundTVarsSet_60 = mercury__set__difference_2_f_0(TypeInfo_19_63, Var_62, FunDepsClosure_59);
      UnboundTVars_29 = mercury__set__to_sorted_list_1_f_0(TypeInfo_19_63, UnboundTVarsSet_60);
      if ((UnboundTVars_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *STATE_VARIABLE_Specs_34 = STATE_VARIABLE_Specs_0_33;
      else
      {
        MR_Word Spec_32;

        Spec_32 = check_hlds__check_typeclass__report_unbound_tvars_in_ctor_context_3_f_0(UnboundTVars_29, TypeCtor_8, TypeDefn_9);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Specs_34 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_32));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_33));
        }
      }
    }
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
    MR_String conv0_HeadVar__3_72;

    conv0_HeadVar__3_72 = check_hlds__check_typeclass__IntroducedFrom__func__report_unbound_tvars_in_ctor_context__1802__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_72));
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
    MR_Word TypeInfo_69_69;
    MR_Word TypeCtorInfo_70_70;
    MR_Word TypeCtorInfo_74_74;
    MR_Word Context_9;
    MR_Word TVarSet_10;
    MR_Word SymName_11;
    MR_Integer Arity_12;
    MR_Word VarsStrs_13;
    MR_Word Pieces_14;
    MR_Word Msg_15;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_26;
    MR_Word Var_28;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_String Var_33;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_String Var_41;
    MR_Word Var_44;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_String Var_49;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_Word Var_63;
    MR_Word Var_67;
    MR_Box conv1_Var_33;
    MR_Box conv2_Var_41;
    MR_Box conv3_Var_49;

    hlds__hlds_data__get_type_defn_context_2_p_0(TypeDefn_7, &Context_9);
    hlds__hlds_data__get_type_defn_tvarset_2_p_0(TypeDefn_7, &TVarSet_10);
    SymName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeCtor_6, (MR_Integer) 0)));
    Arity_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), TypeCtor_6, (MR_Integer) 1)));
    TypeInfo_69_69 = (MR_Word) &check_hlds__check_typeclass_scalar_common_1[5];
    TypeCtorInfo_70_70 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    {
      Var_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_8[6]));
      MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) (check_hlds__check_typeclass__report_unbound_tvars_in_ctor_context_3_f_0_1));
      MR_hl_field(MR_mktag(0), Var_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_16, 3) = ((MR_Box) (TVarSet_10));
    }
    VarsStrs_13 = mercury__list__map_2_f_0(TypeInfo_69_69, TypeCtorInfo_70_70, Var_16, Vars_5);
    TypeCtorInfo_74_74 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
    {
      Var_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (SymName_11));
      MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) (Arity_12));
    }
    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
      MR_hl_field(MR_mktag(3), Var_21, 1) = ((MR_Box) (Var_22));
    }
    conv1_Var_33 = parse_tree__error_util__choose_number_3_f_0(TypeInfo_69_69, TypeCtorInfo_70_70, Vars_5, ((MR_Box) ((MR_String) "type variable")), ((MR_Box) ((MR_String) "type variables")));
    Var_33 = ((MR_String) conv1_Var_33);
    {
      Var_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), Var_32, 1) = ((MR_Box) (Var_33));
    }
    {
      Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[135])));
      MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (Var_31));
    }
    {
      Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
      MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (Var_28));
    }
    {
      Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[92])));
      MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (Var_26));
    }
    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (Var_23));
    }
    {
      Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[147])));
      MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (Var_20));
    }
    Var_38 = parse_tree__error_util__list_to_quoted_pieces_1_f_0(VarsStrs_13);
    conv2_Var_41 = parse_tree__error_util__choose_number_3_f_0(TypeInfo_69_69, TypeCtorInfo_70_70, Vars_5, ((MR_Box) ((MR_String) "occurs")), ((MR_Box) ((MR_String) "occur")));
    Var_41 = ((MR_String) conv2_Var_41);
    {
      Var_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), Var_40, 1) = ((MR_Box) (Var_41));
    }
    conv3_Var_49 = parse_tree__error_util__choose_number_3_f_0(TypeInfo_69_69, TypeCtorInfo_70_70, Vars_5, ((MR_Box) ((MR_String) "is")), ((MR_Box) ((MR_String) "are")));
    Var_49 = ((MR_String) conv3_Var_49);
    {
      Var_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), Var_48, 1) = ((MR_Box) (Var_49));
    }
    {
      Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (Var_48));
      MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[35])));
    }
    {
      Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[136])));
      MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (Var_47));
    }
    {
      Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (Var_44));
    }
    Var_37 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_74_74, Var_38, Var_39);
    Pieces_14 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_74_74, Var_17, Var_37);
    {
      Var_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_59, 0) = ((MR_Box) (Pieces_14));
    }
    Var_63 = check_hlds__check_typeclass__report_unbound_tvars_explanation_0_f_0();
    {
      Var_61 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_61, 0) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(2), Var_61, 1) = ((MR_Box) (Var_63));
    }
    {
      Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (Var_61));
      MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (Var_59));
      MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (Var_60));
    }
    {
      Msg_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Msg_15, 0) = ((MR_Box) (Context_9));
      MR_hl_field(MR_mktag(0), Msg_15, 1) = ((MR_Box) (Var_58));
    }
    {
      Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (Msg_15));
      MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Spec_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_8, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), Spec_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
      MR_hl_field(MR_mktag(0), Spec_8, 2) = ((MR_Box) (Var_67));
    }
    return Spec_8;
  }
}

static void MR_CALL 
check_hlds__check_typeclass__check_ctor_constraints_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Specs_34;

    check_hlds__check_typeclass__check_ctor_type_ambiguities_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_STATE_VARIABLE_Specs_34);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_34));
  }
}

static void MR_CALL 
check_hlds__check_typeclass__check_ctor_constraints_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19)
{
  {
    MR_Word TypeCtor_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
    MR_Word TypeDefn_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
    MR_Word Body_9;

    hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_7, &Body_9);
    switch (MR_tag((MR_Word) Body_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_Specs_19 = STATE_VARIABLE_Specs_0_18;
        break;
      case (MR_Integer) 1:
        {
          MR_Word Ctors_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body_9, (MR_Integer) 0)));
          MR_Word Var_20;
          MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body_9, (MR_Integer) 1)));
          MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body_9, (MR_Integer) 2)));
          MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body_9, (MR_Integer) 3)));
          MR_Box conv1_STATE_VARIABLE_Specs_19;

          {
            Var_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_4[4]));
            MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) (check_hlds__check_typeclass__check_ctor_constraints_4_p_0_1));
            MR_hl_field(MR_mktag(0), Var_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(0), Var_20, 3) = ((MR_Box) (ModuleInfo_5));
            MR_hl_field(MR_mktag(0), Var_20, 4) = ((MR_Box) (TypeCtor_6));
            MR_hl_field(MR_mktag(0), Var_20, 5) = ((MR_Box) (TypeDefn_7));
          }
          mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, (MR_Word) &check_hlds__check_typeclass_scalar_common_1[1], Var_20, Ctors_10, ((MR_Box) (STATE_VARIABLE_Specs_0_18)), &conv1_STATE_VARIABLE_Specs_19);
          *STATE_VARIABLE_Specs_19 = ((MR_Word) conv1_STATE_VARIABLE_Specs_19);
        }
        break;
      case (MR_Integer) 2:
        *STATE_VARIABLE_Specs_19 = STATE_VARIABLE_Specs_0_18;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Body_9, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *STATE_VARIABLE_Specs_19 = STATE_VARIABLE_Specs_0_18;
            break;
          case (MR_Integer) 1:
            *STATE_VARIABLE_Specs_19 = STATE_VARIABLE_Specs_0_18;
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__check_typeclass__check_pred_constraints_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_FunDeps_26;

    check_hlds__check_typeclass__induced_fundeps_2_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_STATE_VARIABLE_FunDeps_26);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_FunDeps_26));
  }
}

static void MR_CALL 
check_hlds__check_typeclass__check_pred_constraints_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word PredId_6,
  MR_Word STATE_VARIABLE_Specs_0_12,
  MR_Word * STATE_VARIABLE_Specs_13)
{
  {
    MR_Word PredInfo_8;
    MR_Word Status_9;
    MR_Word NeedsAmbiguityCheck_10;
    MR_Word Var_32;

    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_5, PredId_6, &PredInfo_8);
    hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo_8, &Status_9);
    Var_32 = (MR_Word) Status_9;
    switch (MR_tag((MR_Word) Var_32)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Var_32)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            NeedsAmbiguityCheck_10 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            NeedsAmbiguityCheck_10 = (MR_Integer) 0;
            break;
          case (MR_Integer) 2:
            NeedsAmbiguityCheck_10 = (MR_Integer) 0;
            break;
          case (MR_Integer) 3:
            NeedsAmbiguityCheck_10 = (MR_Integer) 1;
            break;
          case (MR_Integer) 4:
            NeedsAmbiguityCheck_10 = (MR_Integer) 1;
            break;
          case (MR_Integer) 5:
            NeedsAmbiguityCheck_10 = (MR_Integer) 1;
            break;
          case (MR_Integer) 6:
            NeedsAmbiguityCheck_10 = (MR_Integer) 1;
            break;
          case (MR_Integer) 7:
            NeedsAmbiguityCheck_10 = (MR_Integer) 1;
            break;
          case (MR_Integer) 8:
            NeedsAmbiguityCheck_10 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
        NeedsAmbiguityCheck_10 = (MR_Integer) 1;
        break;
      case (MR_Integer) 2:
        NeedsAmbiguityCheck_10 = (MR_Integer) 0;
        break;
    }
    switch (NeedsAmbiguityCheck_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_Specs_13 = STATE_VARIABLE_Specs_0_12;
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeInfo_19_64;
          MR_Word STATE_VARIABLE_Specs_17_17;
          MR_Word TVarSet_38;
          MR_Word ArgTypes_39;
          MR_Word Constraints_40;
          MR_Word ArgTVars_41;
          MR_Word ConstrainedTVars_42;
          MR_Word UnivCs_43;
          MR_Word ExistCs_44;
          MR_Word UnboundTVars_45;
          MR_Word Var_49;
          MR_Word ClassTable_58;
          MR_Word InducedFunDeps_59;
          MR_Word FunDepsClosure_60;
          MR_Word UnboundTVarsSet_61;
          MR_Word Var_62;
          MR_Word Var_63;
          MR_Word Var_69;
          MR_Word Var_78;
          MR_Box conv1_InducedFunDeps_59;

          hlds__passes_aux__write_pred_progress_message_5_p_0((MR_String) "% Checking typeclass constraints on ", PredId_6, ModuleInfo_5);
          hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo_8, &TVarSet_38);
          hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_8, &ArgTypes_39);
          hlds__hlds_pred__pred_info_get_class_context_2_p_0(PredInfo_8, &Constraints_40);
          parse_tree__prog_type__type_vars_list_2_p_0(ArgTypes_39, &ArgTVars_41);
          parse_tree__prog_type__prog_constraints_get_tvars_2_p_0(Constraints_40, &ConstrainedTVars_42);
          UnivCs_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), Constraints_40, (MR_Integer) 0)));
          ExistCs_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), Constraints_40, (MR_Integer) 1)));
          Var_49 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, UnivCs_43, ExistCs_44);
          hlds__hlds_module__module_info_get_class_table_2_p_0(ModuleInfo_5, &ClassTable_58);
          {
            Var_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_69, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_5[5]));
            MR_hl_field(MR_mktag(0), Var_69, 1) = ((MR_Box) (check_hlds__check_typeclass__check_pred_constraints_4_p_0_1));
            MR_hl_field(MR_mktag(0), Var_69, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_69, 3) = ((MR_Box) (ClassTable_58));
            MR_hl_field(MR_mktag(0), Var_69, 4) = ((MR_Box) (TVarSet_38));
          }
          mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &check_hlds__check_typeclass_scalar_common_1[12], Var_69, Var_49, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &conv1_InducedFunDeps_59);
          InducedFunDeps_59 = ((MR_Word) conv1_InducedFunDeps_59);
          TypeInfo_19_64 = (MR_Word) &check_hlds__check_typeclass_scalar_common_1[5];
          Var_62 = mercury__set__list_to_set_1_f_0(TypeInfo_19_64, ArgTVars_41);
          Var_78 = mercury__set__init_0_f_0((MR_Word) &check_hlds__check_typeclass_scalar_common_1[5]);
          FunDepsClosure_60 = check_hlds__check_typeclass__fundeps_closure_2_3_f_0(InducedFunDeps_59, Var_62, Var_78);
          Var_63 = mercury__set__list_to_set_1_f_0(TypeInfo_19_64, ConstrainedTVars_42);
          UnboundTVarsSet_61 = mercury__set__difference_2_f_0(TypeInfo_19_64, Var_63, FunDepsClosure_60);
          UnboundTVars_45 = mercury__set__to_sorted_list_1_f_0(TypeInfo_19_64, UnboundTVarsSet_61);
          if ((UnboundTVars_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            STATE_VARIABLE_Specs_17_17 = STATE_VARIABLE_Specs_0_12;
          else
          {
            MR_Word Spec_48;

            Spec_48 = check_hlds__check_typeclass__report_unbound_tvars_in_pred_context_2_f_0(UnboundTVars_45, PredInfo_8);
            {
              STATE_VARIABLE_Specs_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_17_17, 0) = ((MR_Box) (Spec_48));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_17_17, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_12));
            }
          }
          check_hlds__check_typeclass__check_constraint_quant_3_p_0(PredInfo_8, STATE_VARIABLE_Specs_17_17, STATE_VARIABLE_Specs_13);
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__check_typeclass__check_constraint_quant_3_p_0_1(
  void * env_ptr_arg)
{
  {
    struct check_hlds__check_typeclass__check_constraint_quant_3_p_0_2_env_0_s * env_ptr = (struct check_hlds__check_typeclass__check_constraint_quant_3_p_0_2_env_0_s *) env_ptr_arg;

    *((env_ptr)->check_hlds__check_typeclass__check_constraint_quant_3_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->check_hlds__check_typeclass__check_constraint_quant_3_p_0_2_env_0__conv0_LambdaHeadVar__1_18));
    ((env_ptr)->check_hlds__check_typeclass__check_constraint_quant_3_p_0_2_env_0__cont)((env_ptr)->check_hlds__check_typeclass__check_constraint_quant_3_p_0_2_env_0__cont_env_ptr);
  }
}

static void MR_CALL 
check_hlds__check_typeclass__check_constraint_quant_3_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct check_hlds__check_typeclass__check_constraint_quant_3_p_0_2_env_0_s env;

    (env).check_hlds__check_typeclass__check_constraint_quant_3_p_0_2_env_0__wrapper_arg_1 = wrapper_arg_1;
    (env).check_hlds__check_typeclass__check_constraint_quant_3_p_0_2_env_0__cont = cont;
    (env).check_hlds__check_typeclass__check_constraint_quant_3_p_0_2_env_0__cont_env_ptr = cont_env_ptr;
    {
      MR_Box closure = closure_arg;

      check_hlds__check_typeclass__IntroducedFrom__pred__check_constraint_quant__1863__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), &(env).check_hlds__check_typeclass__check_constraint_quant_3_p_0_2_env_0__conv0_LambdaHeadVar__1_18, check_hlds__check_typeclass__check_constraint_quant_3_p_0_1, &env);
    }
  }
}

static void MR_CALL 
check_hlds__check_typeclass__check_constraint_quant_3_p_0(
  MR_Word PredInfo_4,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16)
{
  {
    MR_Word TypeInfo_25_25;
    MR_Word ExistQVars_6;
    MR_Word Constraints_7;
    MR_Word UnivCs_8;
    MR_Word ExistCs_9;
    MR_Word UnivTVars_10;
    MR_Word BadUnivTVars_12;
    MR_Word ExistTVars_13;
    MR_Word BadExistTVars_14;
    MR_Word Var_17;
    MR_Word STATE_VARIABLE_Specs_20_20;

    hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_p_0(PredInfo_4, &ExistQVars_6);
    hlds__hlds_pred__pred_info_get_class_context_2_p_0(PredInfo_4, &Constraints_7);
    UnivCs_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Constraints_7, (MR_Integer) 0)));
    ExistCs_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Constraints_7, (MR_Integer) 1)));
    parse_tree__prog_type__constraint_list_get_tvars_2_p_0(UnivCs_8, &UnivTVars_10);
    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_8[8]));
      MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (check_hlds__check_typeclass__check_constraint_quant_3_p_0_2));
      MR_hl_field(MR_mktag(0), Var_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_17, 3) = ((MR_Box) (ExistQVars_6));
      MR_hl_field(MR_mktag(0), Var_17, 4) = ((MR_Box) (UnivTVars_10));
    }
    TypeInfo_25_25 = (MR_Word) &check_hlds__check_typeclass_scalar_common_1[5];
    mercury__solutions__solutions_2_p_1(TypeInfo_25_25, Var_17, &BadUnivTVars_12);
    check_hlds__check_typeclass__maybe_report_badly_quantified_vars_5_p_0(PredInfo_4, (MR_Integer) 0, BadUnivTVars_12, STATE_VARIABLE_Specs_0_15, &STATE_VARIABLE_Specs_20_20);
    parse_tree__prog_type__constraint_list_get_tvars_2_p_0(ExistCs_9, &ExistTVars_13);
    mercury__list__delete_elems_3_p_0(TypeInfo_25_25, ExistTVars_13, ExistQVars_6, &BadExistTVars_14);
    check_hlds__check_typeclass__maybe_report_badly_quantified_vars_5_p_0(PredInfo_4, (MR_Integer) 1, BadExistTVars_14, STATE_VARIABLE_Specs_20_20, STATE_VARIABLE_Specs_16);
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
    MR_String conv1_HeadVar__3_76;

    conv1_HeadVar__3_76 = check_hlds__check_typeclass__IntroducedFrom__func__report_badly_quantified_vars__1904__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__3_76));
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
  if ((TVars_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *STATE_VARIABLE_Specs_14 = STATE_VARIABLE_Specs_0_13;
  else
  {
    MR_Word TypeCtorInfo_72_83;
    MR_Word TypeInfo_73_84;
    MR_Word TypeCtorInfo_74_85;
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
    MR_Word Msg_30;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_String Var_46;
    MR_Word Var_50;
    MR_String Var_51;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Word Var_65;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_Word Var_76;
    MR_Word Var_77;
    MR_Word Var_81;
    MR_Box conv0_Var_46;
    MR_Box conv2_Var_51;

    hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo_6, &TVarSet_20);
    hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo_6, &Context_21);
    TypeCtorInfo_72_83 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
    Var_36 = hlds__hlds_error_util__describe_one_pred_info_name_2_f_0((MR_Integer) 0, PredInfo_6);
    Var_35 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_72_83, Var_36, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[93]));
    InDeclaration_22 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_72_83, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[140]), Var_35);
    TypeInfo_73_84 = (MR_Word) &check_hlds__check_typeclass_scalar_common_1[5];
    TypeCtorInfo_74_85 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    conv0_Var_46 = parse_tree__error_util__choose_number_3_f_0(TypeInfo_73_84, TypeCtorInfo_74_85, TVars_8, ((MR_Box) ((MR_String) "")), ((MR_Box) ((MR_String) "s")));
    Var_46 = ((MR_String) conv0_Var_46);
    {
      Var_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(3), Var_45, 1) = ((MR_Box) (Var_46));
    }
    {
      Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      TypeVariables_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), TypeVariables_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[141])));
      MR_hl_field(MR_mktag(1), TypeVariables_23, 1) = ((MR_Box) (Var_44));
    }
    {
      Var_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_50, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_8[6]));
      MR_hl_field(MR_mktag(0), Var_50, 1) = ((MR_Box) (check_hlds__check_typeclass__maybe_report_badly_quantified_vars_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_50, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_50, 3) = ((MR_Box) (TVarSet_20));
    }
    TVarsStrs_24 = mercury__list__map_2_f_0(TypeInfo_73_84, TypeCtorInfo_74_85, Var_50, TVars_8);
    TVarsPart_25 = parse_tree__error_util__list_to_quoted_pieces_1_f_0(TVarsStrs_24);
    conv2_Var_51 = parse_tree__error_util__choose_number_3_f_0(TypeInfo_73_84, TypeCtorInfo_74_85, TVars_8, ((MR_Box) ((MR_String) "is")), ((MR_Box) ((MR_String) "are")));
    Var_51 = ((MR_String) conv2_Var_51);
    {
      Are_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Are_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), Are_26, 1) = ((MR_Box) (Var_51));
    }
    switch (QuantErrorType_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          BlahConstrained_27 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[142]);
          BlahQuantified_28 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[143]);
        }
        break;
      case (MR_Integer) 0:
        {
          BlahConstrained_27 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[144]);
          BlahQuantified_28 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[145]);
        }
        break;
    }
    {
      Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (BlahQuantified_28));
      MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[23])));
    }
    {
      Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (Are_26));
      MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (Var_69));
    }
    {
      Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[146])));
      MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (Var_68));
    }
    {
      Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[112])));
      MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (Var_65));
    }
    {
      Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (BlahConstrained_27));
      MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (Var_62));
    }
    {
      Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (Are_26));
      MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (Var_61));
    }
    Var_59 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_72_83, TVarsPart_25, Var_60);
    Var_58 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_72_83, TypeVariables_23, Var_59);
    Pieces_29 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_72_83, InDeclaration_22, Var_58);
    {
      Var_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_77, 0) = ((MR_Box) (Pieces_29));
    }
    {
      Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (Var_77));
      MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Msg_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Msg_30, 0) = ((MR_Box) (Context_21));
      MR_hl_field(MR_mktag(0), Msg_30, 1) = ((MR_Box) (Var_76));
    }
    {
      Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (Msg_30));
      MR_hl_field(MR_mktag(1), Var_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Spec_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), Spec_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
      MR_hl_field(MR_mktag(0), Spec_12, 2) = ((MR_Box) (Var_81));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_14 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_12));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_13));
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
    MR_String conv0_HeadVar__3_87;

    conv0_HeadVar__3_87 = check_hlds__check_typeclass__IntroducedFrom__func__report_unbound_tvars_in_pred_context__1770__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_87));
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
    MR_Word TypeInfo_84_84;
    MR_Word TypeCtorInfo_85_85;
    MR_Word TypeCtorInfo_89_89;
    MR_Word Context_7;
    MR_Word TVarSet_8;
    MR_Word ArgTypes_10;
    MR_String PredName_11;
    MR_Word Module_12;
    MR_Word SymName_13;
    MR_Integer Arity_14;
    MR_Word PredOrFunc_15;
    MR_Word VarsStrs_16;
    MR_Word Pieces0_17;
    MR_Word Pieces_18;
    MR_Word Msg_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_24;
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
    MR_Word Var_81;
    MR_Word Var_9;
    MR_Box conv1_Var_37;
    MR_Box conv2_Var_45;
    MR_Box conv3_Var_53;

    hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo_5, &Context_7);
    hlds__hlds_pred__pred_info_get_arg_types_4_p_0(PredInfo_5, &TVarSet_8, &Var_9, &ArgTypes_10);
    PredName_11 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_5);
    Module_12 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_5);
    {
      SymName_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), SymName_13, 0) = ((MR_Box) (Module_12));
      MR_hl_field(MR_mktag(1), SymName_13, 1) = ((MR_Box) (PredName_11));
    }
    Arity_14 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ArgTypes_10);
    PredOrFunc_15 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_5);
    TypeInfo_84_84 = (MR_Word) &check_hlds__check_typeclass_scalar_common_1[5];
    TypeCtorInfo_85_85 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    {
      Var_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_8[6]));
      MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) (check_hlds__check_typeclass__report_unbound_tvars_in_pred_context_2_f_0_1));
      MR_hl_field(MR_mktag(0), Var_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_20, 3) = ((MR_Box) (TVarSet_8));
    }
    VarsStrs_16 = mercury__list__map_2_f_0(TypeInfo_84_84, TypeCtorInfo_85_85, Var_20, Vars_4);
    TypeCtorInfo_89_89 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
    {
      Var_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (PredOrFunc_15));
      MR_hl_field(MR_mktag(0), Var_26, 1) = ((MR_Box) (SymName_13));
      MR_hl_field(MR_mktag(0), Var_26, 2) = ((MR_Box) (Arity_14));
    }
    {
      Var_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
      MR_hl_field(MR_mktag(3), Var_25, 1) = ((MR_Box) (Var_26));
    }
    conv1_Var_37 = parse_tree__error_util__choose_number_3_f_0(TypeInfo_84_84, TypeCtorInfo_85_85, Vars_4, ((MR_Box) ((MR_String) "type variable")), ((MR_Box) ((MR_String) "type variables")));
    Var_37 = ((MR_String) conv1_Var_37);
    {
      Var_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), Var_36, 1) = ((MR_Box) (Var_37));
    }
    {
      Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[135])));
      MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (Var_35));
    }
    {
      Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
      MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (Var_32));
    }
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[92])));
      MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (Var_30));
    }
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (Var_27));
    }
    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[134])));
      MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (Var_24));
    }
    Var_42 = parse_tree__error_util__list_to_quoted_pieces_1_f_0(VarsStrs_16);
    conv2_Var_45 = parse_tree__error_util__choose_number_3_f_0(TypeInfo_84_84, TypeCtorInfo_85_85, Vars_4, ((MR_Box) ((MR_String) "occurs")), ((MR_Box) ((MR_String) "occur")));
    Var_45 = ((MR_String) conv2_Var_45);
    {
      Var_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), Var_44, 1) = ((MR_Box) (Var_45));
    }
    conv3_Var_53 = parse_tree__error_util__choose_number_3_f_0(TypeInfo_84_84, TypeCtorInfo_85_85, Vars_4, ((MR_Box) ((MR_String) "is")), ((MR_Box) ((MR_String) "are")));
    Var_53 = ((MR_String) conv3_Var_53);
    {
      Var_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), Var_52, 1) = ((MR_Box) (Var_53));
    }
    {
      Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (Var_52));
      MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[138])));
    }
    {
      Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[136])));
      MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (Var_51));
    }
    {
      Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (Var_48));
    }
    Var_41 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_89_89, Var_42, Var_43);
    Pieces0_17 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_89_89, Var_21, Var_41);
    switch (PredOrFunc_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          Pieces_18 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_89_89, Pieces0_17, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[31]));
        }
        break;
      case (MR_Integer) 0:
        {
          Pieces_18 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_89_89, Pieces0_17, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[33]));
        }
        break;
    }
    {
      Var_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_73, 0) = ((MR_Box) (Pieces_18));
    }
    Var_77 = check_hlds__check_typeclass__report_unbound_tvars_explanation_0_f_0();
    {
      Var_75 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_75, 0) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(2), Var_75, 1) = ((MR_Box) (Var_77));
    }
    {
      Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (Var_75));
      MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (Var_73));
      MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) (Var_74));
    }
    {
      Msg_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Msg_19, 0) = ((MR_Box) (Context_7));
      MR_hl_field(MR_mktag(0), Msg_19, 1) = ((MR_Box) (Var_72));
    }
    {
      Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (Msg_19));
      MR_hl_field(MR_mktag(1), Var_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Spec_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), Spec_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
      MR_hl_field(MR_mktag(0), Spec_6, 2) = ((MR_Box) (Var_81));
    }
    return Spec_6;
  }
}

static MR_Word MR_CALL 
check_hlds__check_typeclass__report_unbound_tvars_explanation_0_f_0(void)
{
  {
    return (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[82]);
  }
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
    MR_Word TypeCtorInfo_72_72;
    MR_Word TVarSetA_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceA_10, (MR_Integer) 8)));
    MR_Word TVarSetB_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceB_11, (MR_Integer) 8)));
    MR_Word Renaming_17;
    MR_Word TypesA_18;
    MR_Word TypesB0_19;
    MR_Word TypesB_20;
    MR_Word Domain_21;
    MR_Word Range_22;
    MR_Word DomainA_23;
    MR_Word DomainB_24;
    MR_Word Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceA_10, (MR_Integer) 0)));
    MR_Word Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceA_10, (MR_Integer) 1)));
    MR_Word Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceA_10, (MR_Integer) 2)));
    MR_Word Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceA_10, (MR_Integer) 3)));
    MR_Word Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceA_10, (MR_Integer) 4)));
    MR_Word Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceA_10, (MR_Integer) 5)));
    MR_Word Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceA_10, (MR_Integer) 6)));
    MR_Word Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceA_10, (MR_Integer) 7)));
    MR_Word Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceA_10, (MR_Integer) 9)));
    MR_Word Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceB_11, (MR_Integer) 0)));
    MR_Word Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceB_11, (MR_Integer) 1)));
    MR_Word Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceB_11, (MR_Integer) 2)));
    MR_Word Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceB_11, (MR_Integer) 3)));
    MR_Word Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceB_11, (MR_Integer) 4)));
    MR_Word Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceB_11, (MR_Integer) 5)));
    MR_Word Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceB_11, (MR_Integer) 6)));
    MR_Word Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceB_11, (MR_Integer) 7)));
    MR_Word Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceB_11, (MR_Integer) 9)));
    MR_Word Var_16;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Word Var_63;
    MR_Word Var_64;
    MR_Word Var_65;
    MR_Word Var_66;
    MR_Word Var_67;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_Word Var_70;
    MR_Word Var_71;
    MR_Word Subst_25;
    MR_Word Var_34;

    parse_tree__prog_data__tvarset_merge_renaming_4_p_0(TVarSetA_14, TVarSetB_15, &Var_16, &Renaming_17);
    Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceA_10, (MR_Integer) 0)));
    TypesA_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceA_10, (MR_Integer) 1)));
    Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceA_10, (MR_Integer) 2)));
    Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceA_10, (MR_Integer) 3)));
    Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceA_10, (MR_Integer) 4)));
    Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceA_10, (MR_Integer) 5)));
    Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceA_10, (MR_Integer) 6)));
    Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceA_10, (MR_Integer) 7)));
    Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceA_10, (MR_Integer) 8)));
    Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceA_10, (MR_Integer) 9)));
    Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceB_11, (MR_Integer) 0)));
    TypesB0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceB_11, (MR_Integer) 1)));
    Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceB_11, (MR_Integer) 2)));
    Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceB_11, (MR_Integer) 3)));
    Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceB_11, (MR_Integer) 4)));
    Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceB_11, (MR_Integer) 5)));
    Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceB_11, (MR_Integer) 6)));
    Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceB_11, (MR_Integer) 7)));
    Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceB_11, (MR_Integer) 8)));
    Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceB_11, (MR_Integer) 9)));
    parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(Renaming_17, TypesB0_19, &TypesB_20);
    Domain_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), FunDep_12, (MR_Integer) 0)));
    Range_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), FunDep_12, (MR_Integer) 1)));
    TypeCtorInfo_72_72 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
    DomainA_23 = hlds__hlds_class__restrict_list_elements_2_f_0(TypeCtorInfo_72_72, Domain_21, TypesA_18);
    DomainB_24 = hlds__hlds_class__restrict_list_elements_2_f_0(TypeCtorInfo_72_72, Domain_21, TypesB_20);
    Var_34 = mercury__map__init_0_f_0((MR_Word) &check_hlds__check_typeclass_scalar_common_1[5], TypeCtorInfo_72_72);
    succeeded = parse_tree__prog_type__type_unify_list_5_p_0(DomainA_23, DomainB_24, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Var_34, &Subst_25);
    if (succeeded)
    {
      MR_Word RangeA0_26;
      MR_Word RangeB0_27;
      MR_Word RangeA_28;
      MR_Word RangeB_29;

      RangeA0_26 = hlds__hlds_class__restrict_list_elements_2_f_0(TypeCtorInfo_72_72, Range_22, TypesA_18);
      RangeB0_27 = hlds__hlds_class__restrict_list_elements_2_f_0(TypeCtorInfo_72_72, Range_22, TypesB_20);
      parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_p_0(Subst_25, RangeA0_26, &RangeA_28);
      parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_p_0(Subst_25, RangeB0_27, &RangeB_29);
      succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__check_typeclass_scalar_common_1[15], ((MR_Box) (RangeA_28)), ((MR_Box) (RangeB_29)));
      if (succeeded)
        *STATE_VARIABLE_Specs_32 = STATE_VARIABLE_Specs_0_31;
      else
      {
        MR_Word Spec_30;

        Spec_30 = check_hlds__check_typeclass__report_consistency_error_5_f_0(ClassId_8, ClassDefn_9, InstanceA_10, InstanceB_11, FunDep_12);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
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
    MR_Word TypeInfo_105_105 = (MR_Word) &check_hlds__check_typeclass_scalar_common_1[5];
    MR_Word TypeCtorInfo_106_106;
    MR_Word SymName_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassId_7, (MR_Integer) 0)));
    MR_Integer Arity_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ClassId_7, (MR_Integer) 1)));
    MR_Word Params_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_8, (MR_Integer) 4)));
    MR_Word TVarSet_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_8, (MR_Integer) 8)));
    MR_Word ContextA_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceA_9, (MR_Integer) 4)));
    MR_Word ContextB_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceB_10, (MR_Integer) 4)));
    MR_Word Domain_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), FunDep_11, (MR_Integer) 0)));
    MR_Word Range_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), FunDep_11, (MR_Integer) 1)));
    MR_Word DomainParams_21;
    MR_Word RangeParams_22;
    MR_String Domains_23;
    MR_String Ranges_24;
    MR_Word PiecesA_25;
    MR_Word MsgA_27;
    MR_Word MsgB_28;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_String Var_39;
    MR_String Var_41;
    MR_String Var_42;
    MR_String Var_44;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word Var_58;
    MR_Word Var_66;
    MR_Word Var_67;
    MR_Word Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_8, (MR_Integer) 0)));
    MR_Word Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_8, (MR_Integer) 1)));
    MR_Word Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_8, (MR_Integer) 2)));
    MR_Word Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_8, (MR_Integer) 3)));
    MR_Word Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_8, (MR_Integer) 5)));
    MR_Word Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_8, (MR_Integer) 6)));
    MR_Word Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_8, (MR_Integer) 7)));
    MR_Word Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_8, (MR_Integer) 9)));
    MR_Word Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceA_9, (MR_Integer) 0)));
    MR_Word Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceA_9, (MR_Integer) 1)));
    MR_Word Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceA_9, (MR_Integer) 2)));
    MR_Word Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceA_9, (MR_Integer) 3)));
    MR_Word Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceA_9, (MR_Integer) 5)));
    MR_Word Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceA_9, (MR_Integer) 6)));
    MR_Word Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceA_9, (MR_Integer) 7)));
    MR_Word Var_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceA_9, (MR_Integer) 8)));
    MR_Word Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceA_9, (MR_Integer) 9)));
    MR_Word Var_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceB_10, (MR_Integer) 0)));
    MR_Word Var_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceB_10, (MR_Integer) 1)));
    MR_Word Var_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceB_10, (MR_Integer) 2)));
    MR_Word Var_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceB_10, (MR_Integer) 3)));
    MR_Word Var_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceB_10, (MR_Integer) 5)));
    MR_Word Var_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceB_10, (MR_Integer) 6)));
    MR_Word Var_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceB_10, (MR_Integer) 7)));
    MR_Word Var_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceB_10, (MR_Integer) 8)));
    MR_Word Var_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceB_10, (MR_Integer) 9)));

    DomainParams_21 = hlds__hlds_class__restrict_list_elements_2_f_0(TypeInfo_105_105, Domain_19, Params_15);
    RangeParams_22 = hlds__hlds_class__restrict_list_elements_2_f_0(TypeInfo_105_105, Range_20, Params_15);
    TypeCtorInfo_106_106 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
    Domains_23 = parse_tree__parse_tree_out_term__mercury_vars_to_name_only_2_f_0(TypeCtorInfo_106_106, TVarSet_16, DomainParams_21);
    Ranges_24 = parse_tree__parse_tree_out_term__mercury_vars_to_name_only_2_f_0(TypeCtorInfo_106_106, TVarSet_16, RangeParams_22);
    {
      Var_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_33, 0) = ((MR_Box) (SymName_13));
      MR_hl_field(MR_mktag(0), Var_33, 1) = ((MR_Box) (Arity_14));
    }
    {
      Var_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
      MR_hl_field(MR_mktag(3), Var_32, 1) = ((MR_Box) (Var_33));
    }
    Var_44 = mercury__string__f_43_43_2_f_0(Ranges_24, (MR_String) ")");
    Var_42 = mercury__string__f_43_43_2_f_0((MR_String) " -> ", Var_44);
    Var_41 = mercury__string__f_43_43_2_f_0(Domains_23, Var_42);
    Var_39 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_41);
    {
      Var_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_38, 1) = ((MR_Box) (Var_39));
    }
    {
      Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[23])));
    }
    {
      Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[130])));
      MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (Var_37));
    }
    {
      Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (Var_34));
    }
    {
      PiecesA_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), PiecesA_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[129])));
      MR_hl_field(MR_mktag(1), PiecesA_25, 1) = ((MR_Box) (Var_31));
    }
    {
      Var_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_56, 0) = ((MR_Box) (PiecesA_25));
    }
    {
      Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (Var_56));
      MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      MsgA_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), MsgA_27, 0) = ((MR_Box) (ContextA_17));
      MR_hl_field(MR_mktag(0), MsgA_27, 1) = ((MR_Box) (Var_55));
    }
    {
      Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (ContextB_18));
    }
    {
      MsgB_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MsgB_28, 0) = ((MR_Box) (Var_58));
      MR_hl_field(MR_mktag(1), MsgB_28, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(1), MsgB_28, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(1), MsgB_28, 3) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[133])));
    }
    {
      Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (MsgB_28));
      MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (MsgA_27));
      MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) (Var_67));
    }
    {
      Spec_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), Spec_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
      MR_hl_field(MR_mktag(0), Spec_12, 2) = ((MR_Box) (Var_66));
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

    check_hlds__check_typeclass__check_consistency_pair_2_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_STATE_VARIABLE_Specs_32);
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
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceA_11, (MR_Integer) 0)));
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceB_12, (MR_Integer) 0)));
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceA_11, (MR_Integer) 1)));
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceA_11, (MR_Integer) 2)));
    MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceA_11, (MR_Integer) 3)));
    MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceA_11, (MR_Integer) 4)));
    MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceA_11, (MR_Integer) 5)));
    MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceA_11, (MR_Integer) 6)));
    MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceA_11, (MR_Integer) 7)));
    MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceA_11, (MR_Integer) 8)));
    MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceA_11, (MR_Integer) 9)));
    MR_Word Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceB_12, (MR_Integer) 1)));
    MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceB_12, (MR_Integer) 2)));
    MR_Word Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceB_12, (MR_Integer) 3)));
    MR_Word Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceB_12, (MR_Integer) 4)));
    MR_Word Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceB_12, (MR_Integer) 5)));
    MR_Word Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceB_12, (MR_Integer) 6)));
    MR_Word Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceB_12, (MR_Integer) 7)));
    MR_Word Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceB_12, (MR_Integer) 8)));
    MR_Word Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceB_12, (MR_Integer) 9)));
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_47;

    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Var_16, Var_53);
    if (succeeded)
    {
      Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceA_11, (MR_Integer) 0)));
      Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceA_11, (MR_Integer) 1)));
      Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceA_11, (MR_Integer) 2)));
      Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceA_11, (MR_Integer) 3)));
      Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceA_11, (MR_Integer) 4)));
      Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceA_11, (MR_Integer) 5)));
      Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceA_11, (MR_Integer) 6)));
      Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceA_11, (MR_Integer) 7)));
      Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceA_11, (MR_Integer) 8)));
      Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceA_11, (MR_Integer) 9)));
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
        Var_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_14[1]));
        MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) (check_hlds__check_typeclass__check_consistency_pair_7_p_0_1));
        MR_hl_field(MR_mktag(0), Var_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
        MR_hl_field(MR_mktag(0), Var_19, 3) = ((MR_Box) (ClassId_8));
        MR_hl_field(MR_mktag(0), Var_19, 4) = ((MR_Box) (ClassDefn_9));
        MR_hl_field(MR_mktag(0), Var_19, 5) = ((MR_Box) (InstanceA_11));
        MR_hl_field(MR_mktag(0), Var_19, 6) = ((MR_Box) (InstanceB_12));
      }
      mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_fundep_0, (MR_Word) &check_hlds__check_typeclass_scalar_common_1[1], Var_19, FunDeps_10, ((MR_Box) (STATE_VARIABLE_Specs_0_14)), &conv1_STATE_VARIABLE_Specs_15);
      *STATE_VARIABLE_Specs_15 = ((MR_Word) conv1_STATE_VARIABLE_Specs_15);
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

    check_hlds__check_typeclass__induced_fundeps_2_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_STATE_VARIABLE_FunDeps_26);
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
    MR_Word TypeCtorInfo_55_55 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
    MR_Word TypeInfo_19_68;
    MR_Word TVarSet_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_9, (MR_Integer) 8)));
    MR_Word Types_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_9, (MR_Integer) 1)));
    MR_Word Domain_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), FunDep_10, (MR_Integer) 0)));
    MR_Word Range_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), FunDep_10, (MR_Integer) 1)));
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
    MR_Word Var_82;
    MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_9, (MR_Integer) 0)));
    MR_Word Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_9, (MR_Integer) 2)));
    MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_9, (MR_Integer) 3)));
    MR_Word Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_9, (MR_Integer) 4)));
    MR_Word Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_9, (MR_Integer) 5)));
    MR_Word Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_9, (MR_Integer) 6)));
    MR_Word Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_9, (MR_Integer) 7)));
    MR_Word Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_9, (MR_Integer) 9)));
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Box conv1_InducedFunDeps_63;

    DomainTypes_16 = hlds__hlds_class__restrict_list_elements_2_f_0(TypeCtorInfo_55_55, Domain_14, Types_13);
    parse_tree__prog_type__type_vars_list_2_p_0(DomainTypes_16, &DomainVars_17);
    RangeTypes_18 = hlds__hlds_class__restrict_list_elements_2_f_0(TypeCtorInfo_55_55, Range_15, Types_13);
    parse_tree__prog_type__type_vars_list_2_p_0(RangeTypes_18, &RangeVars_19);
    Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_9, (MR_Integer) 0)));
    Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_9, (MR_Integer) 1)));
    Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_9, (MR_Integer) 2)));
    Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_9, (MR_Integer) 3)));
    Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_9, (MR_Integer) 4)));
    Constraints_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_9, (MR_Integer) 5)));
    Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_9, (MR_Integer) 6)));
    Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_9, (MR_Integer) 7)));
    Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_9, (MR_Integer) 8)));
    Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_9, (MR_Integer) 9)));
    hlds__hlds_module__module_info_get_class_table_2_p_0(ModuleInfo_7, &ClassTable_62);
    {
      Var_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_73, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_5[5]));
      MR_hl_field(MR_mktag(0), Var_73, 1) = ((MR_Box) (check_hlds__check_typeclass__check_coverage_for_instance_defn_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_73, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_73, 3) = ((MR_Box) (ClassTable_62));
      MR_hl_field(MR_mktag(0), Var_73, 4) = ((MR_Box) (TVarSet_12));
    }
    mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &check_hlds__check_typeclass_scalar_common_1[12], Var_73, Constraints_20, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &conv1_InducedFunDeps_63);
    InducedFunDeps_63 = ((MR_Word) conv1_InducedFunDeps_63);
    TypeInfo_19_68 = (MR_Word) &check_hlds__check_typeclass_scalar_common_1[5];
    Var_66 = mercury__set__list_to_set_1_f_0(TypeInfo_19_68, DomainVars_17);
    Var_82 = mercury__set__init_0_f_0((MR_Word) &check_hlds__check_typeclass_scalar_common_1[5]);
    FunDepsClosure_64 = check_hlds__check_typeclass__fundeps_closure_2_3_f_0(InducedFunDeps_63, Var_66, Var_82);
    Var_67 = mercury__set__list_to_set_1_f_0(TypeInfo_19_68, RangeVars_19);
    UnboundTVarsSet_65 = mercury__set__difference_2_f_0(TypeInfo_19_68, Var_67, FunDepsClosure_64);
    UnboundVars_21 = mercury__set__to_sorted_list_1_f_0(TypeInfo_19_68, UnboundTVarsSet_65);
    if ((UnboundVars_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_Specs_26 = STATE_VARIABLE_Specs_0_25;
    else
    {
      MR_Word Spec_24;

      Spec_24 = check_hlds__check_typeclass__report_coverage_error_3_f_0(ClassId_8, InstanceDefn_9, UnboundVars_21);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_26 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_24));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_25));
      }
    }
  }
}

static void MR_CALL 
check_hlds__check_typeclass__fundeps_closure_2_3_f_0_2(
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

    check_hlds__check_typeclass__collect_determined_vars_5_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv2_STATE_VARIABLE_FunDeps_12, ((MR_Word) wrapper_arg_4), &conv1_STATE_VARIABLE_Vars_14);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_FunDeps_12));
    *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_Vars_14));
  }
}

static MR_Box MR_CALL 
check_hlds__check_typeclass__fundeps_closure_2_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    conv0_HeadVar__3_3 = check_hlds__check_typeclass__remove_vars_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
    return wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
check_hlds__check_typeclass__fundeps_closure_2_3_f_0(
  MR_Word FunDeps0_5,
  MR_Word NewVars0_6,
  MR_Word Result0_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word Result_8;

    // setup for model_det tailcalls optimized into a loop
    succeeded = mercury__set__is_empty_1_p_0((MR_Word) &check_hlds__check_typeclass_scalar_common_1[5], NewVars0_6);
    if (succeeded)
      Result_8 = Result0_7;
    else
    {
      MR_Word TypeInfo_18_18 = (MR_Word) &check_hlds__check_typeclass_scalar_common_1[5];
      MR_Word TypeCtorInfo_19_19;
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

      Result1_9 = mercury__set__union_2_f_0(TypeInfo_18_18, Result0_7, NewVars0_6);
      TypeCtorInfo_19_19 = (MR_Word) &check_hlds__check_typeclass__check_hlds__check_typeclass__type_ctor_info_induced_fundep_0;
      {
        Var_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_13, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_8[7]));
        MR_hl_field(MR_mktag(0), Var_13, 1) = ((MR_Box) (check_hlds__check_typeclass__fundeps_closure_2_3_f_0_1));
        MR_hl_field(MR_mktag(0), Var_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_13, 3) = ((MR_Box) (NewVars0_6));
      }
      FunDeps1_10 = mercury__list__map_2_f_0(TypeCtorInfo_19_19, TypeCtorInfo_19_19, Var_13, FunDeps0_5);
      Var_16 = mercury__set__init_0_f_0(TypeInfo_18_18);
      mercury__list__foldl2_6_p_0(TypeCtorInfo_19_19, (MR_Word) &check_hlds__check_typeclass_scalar_common_1[12], (MR_Word) &check_hlds__check_typeclass_scalar_common_1[13], (MR_Word) &check_hlds__check_typeclass_scalar_common_2[10], FunDeps1_10, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &conv4_FunDeps_11, ((MR_Box) (Var_16)), &conv3_NewVars_12);
      FunDeps_11 = ((MR_Word) conv4_FunDeps_11);
      NewVars_12 = ((MR_Word) conv3_NewVars_12);
      // direct tailcall eliminated
      next_value_of_FunDeps0_5 = FunDeps_11;
      next_value_of_NewVars0_6 = NewVars_12;
      next_value_of_Result0_7 = Result1_9;
      FunDeps0_5 = next_value_of_FunDeps0_5;
      NewVars0_6 = next_value_of_NewVars0_6;
      Result0_7 = next_value_of_Result0_7;
      continue;
    }
    return Result_8;
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
    MR_String conv0_HeadVar__3_86;

    conv0_HeadVar__3_86 = check_hlds__check_typeclass__IntroducedFrom__func__report_coverage_error__1578__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_86));
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
    MR_Word TypeInfo_83_83 = (MR_Word) &check_hlds__check_typeclass_scalar_common_1[5];
    MR_Word TypeCtorInfo_84_84 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    MR_Word TypeCtorInfo_88_88;
    MR_Word SymName_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassId_5, (MR_Integer) 0)));
    MR_Integer Arity_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ClassId_5, (MR_Integer) 1)));
    MR_Word TVarSet_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_6, (MR_Integer) 8)));
    MR_Word Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_6, (MR_Integer) 4)));
    MR_Word VarsStrs_13;
    MR_Word Pieces_14;
    MR_Word Msg_15;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_26;
    MR_Word Var_28;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_String Var_33;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_String Var_41;
    MR_Word Var_44;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_String Var_49;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_63;
    MR_Word Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_6, (MR_Integer) 0)));
    MR_Word Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_6, (MR_Integer) 1)));
    MR_Word Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_6, (MR_Integer) 2)));
    MR_Word Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_6, (MR_Integer) 3)));
    MR_Word Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_6, (MR_Integer) 5)));
    MR_Word Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_6, (MR_Integer) 6)));
    MR_Word Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_6, (MR_Integer) 7)));
    MR_Word Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_6, (MR_Integer) 9)));
    MR_Box conv1_Var_33;
    MR_Box conv2_Var_41;
    MR_Box conv3_Var_49;

    {
      Var_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_8[6]));
      MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) (check_hlds__check_typeclass__report_coverage_error_3_f_0_1));
      MR_hl_field(MR_mktag(0), Var_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_16, 3) = ((MR_Box) (TVarSet_11));
    }
    VarsStrs_13 = mercury__list__map_2_f_0(TypeInfo_83_83, TypeCtorInfo_84_84, Var_16, Vars_7);
    TypeCtorInfo_88_88 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
    {
      Var_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (SymName_9));
      MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) (Arity_10));
    }
    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
      MR_hl_field(MR_mktag(3), Var_21, 1) = ((MR_Box) (Var_22));
    }
    conv1_Var_33 = parse_tree__error_util__choose_number_3_f_0(TypeInfo_83_83, TypeCtorInfo_84_84, Vars_7, ((MR_Box) ((MR_String) "type variable")), ((MR_Box) ((MR_String) "type variables")));
    Var_33 = ((MR_String) conv1_Var_33);
    {
      Var_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), Var_32, 1) = ((MR_Box) (Var_33));
    }
    {
      Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[127])));
      MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (Var_31));
    }
    {
      Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
      MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (Var_28));
    }
    {
      Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[92])));
      MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (Var_26));
    }
    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (Var_23));
    }
    {
      Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[126])));
      MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (Var_20));
    }
    Var_38 = parse_tree__error_util__list_to_quoted_pieces_1_f_0(VarsStrs_13);
    conv2_Var_41 = parse_tree__error_util__choose_number_3_f_0(TypeInfo_83_83, TypeCtorInfo_84_84, Vars_7, ((MR_Box) ((MR_String) "occurs")), ((MR_Box) ((MR_String) "occur")));
    Var_41 = ((MR_String) conv2_Var_41);
    {
      Var_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), Var_40, 1) = ((MR_Box) (Var_41));
    }
    conv3_Var_49 = parse_tree__error_util__choose_number_3_f_0(TypeInfo_83_83, TypeCtorInfo_84_84, Vars_7, ((MR_Box) ((MR_String) "is")), ((MR_Box) ((MR_String) "are")));
    Var_49 = ((MR_String) conv3_Var_49);
    {
      Var_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), Var_48, 1) = ((MR_Box) (Var_49));
    }
    {
      Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (Var_48));
      MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[29])));
    }
    {
      Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[128])));
      MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (Var_47));
    }
    {
      Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (Var_44));
    }
    Var_37 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_88_88, Var_38, Var_39);
    Pieces_14 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_88_88, Var_17, Var_37);
    {
      Var_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_59, 0) = ((MR_Box) (Pieces_14));
    }
    {
      Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (Var_59));
      MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Msg_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Msg_15, 0) = ((MR_Box) (Context_12));
      MR_hl_field(MR_mktag(0), Msg_15, 1) = ((MR_Box) (Var_58));
    }
    {
      Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (Msg_15));
      MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Spec_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_8, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), Spec_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
      MR_hl_field(MR_mktag(0), Spec_8, 2) = ((MR_Box) (Var_63));
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
      MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_2, (MR_Integer) 6)));
      MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_2, (MR_Integer) 0)));
      MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_2, (MR_Integer) 1)));
      MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_2, (MR_Integer) 2)));
      MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_2, (MR_Integer) 3)));
      MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_2, (MR_Integer) 4)));
      MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_2, (MR_Integer) 5)));
      MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_2, (MR_Integer) 7)));
      MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_2, (MR_Integer) 8)));
      MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_2, (MR_Integer) 9)));
      MR_Word Var_15;

      succeeded = ((MR_tag((MR_Word) Var_16)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
        Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_16, (MR_Integer) 0)));
    }
    if (!(succeeded))
    {
      MR_Word Var_3;
      MR_Word Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_2, (MR_Integer) 3)));
      MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_2, (MR_Integer) 0)));
      MR_Word Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_2, (MR_Integer) 1)));
      MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_2, (MR_Integer) 2)));
      MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_2, (MR_Integer) 4)));
      MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_2, (MR_Integer) 5)));
      MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_2, (MR_Integer) 6)));
      MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_2, (MR_Integer) 7)));
      MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_2, (MR_Integer) 8)));
      MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_2, (MR_Integer) 9)));

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
    MR_Word Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_2, (MR_Integer) 6)));
    MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_2, (MR_Integer) 0)));
    MR_Word Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_2, (MR_Integer) 1)));
    MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_2, (MR_Integer) 2)));
    MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_2, (MR_Integer) 3)));
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_2, (MR_Integer) 4)));
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_2, (MR_Integer) 5)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_2, (MR_Integer) 7)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_2, (MR_Integer) 8)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_2, (MR_Integer) 9)));
    MR_Word Var_3;

    succeeded = ((MR_tag((MR_Word) Var_4)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
      Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_4, (MR_Integer) 0)));
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

    succeeded = check_hlds__check_typeclass__is_concrete_instance_defn_1_p_0(((MR_Word) wrapper_arg_1));
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

    succeeded = check_hlds__check_typeclass__is_concrete_or_imported_instance_defn_1_p_0(((MR_Word) wrapper_arg_1));
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
    MR_Word TypeCtorInfo_32_32;
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
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_31;

    hlds__hlds_module__module_info_get_class_table_2_p_0(ModuleInfo_5, &ClassTable_8);
    TypeCtorInfo_32_32 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0;
    mercury__map__lookup_3_p_0(TypeCtorInfo_32_32, (MR_Word) &hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0, ClassTable_8, ((MR_Box) (ClassId_6)), &conv0_ClassDefn_9);
    ClassDefn_9 = ((MR_Word) conv0_ClassDefn_9);
    hlds__hlds_module__module_info_get_instance_table_2_p_0(ModuleInfo_5, &InstanceTable_10);
    mercury__map__lookup_3_p_0(TypeCtorInfo_32_32, (MR_Word) &check_hlds__check_typeclass_scalar_common_1[0], InstanceTable_10, ((MR_Box) (ClassId_6)), &conv1_InstanceDefns_11);
    InstanceDefns_11 = ((MR_Word) conv1_InstanceDefns_11);
    Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_9, (MR_Integer) 0)));
    Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_9, (MR_Integer) 1)));
    FunDeps_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_9, (MR_Integer) 2)));
    Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_9, (MR_Integer) 3)));
    Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_9, (MR_Integer) 4)));
    Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_9, (MR_Integer) 5)));
    Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_9, (MR_Integer) 6)));
    Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_9, (MR_Integer) 7)));
    Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_9, (MR_Integer) 8)));
    Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_9, (MR_Integer) 9)));
    check_hlds__check_typeclass__check_coverage_for_instance_defns_6_p_0(ModuleInfo_5, ClassId_6, InstanceDefns_11, FunDeps_12, STATE_VARIABLE_Specs_0_16, &STATE_VARIABLE_Specs_18_18);
    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_5, &Globals_13);
    libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 333, &IntermodOpt_14);
    switch (IntermodOpt_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mercury__list__filter_3_p_0((MR_Word) &hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0, (MR_Word) &check_hlds__check_typeclass_scalar_common_2[8], InstanceDefns_11, &ConcreteInstanceDefns_15);
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__list__filter_3_p_0((MR_Word) &hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0, (MR_Word) &check_hlds__check_typeclass_scalar_common_2[9], InstanceDefns_11, &ConcreteInstanceDefns_15);
        }
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

    check_hlds__check_typeclass__check_consistency_pair_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_STATE_VARIABLE_Specs_15);
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
    if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_Specs_6 = STATE_VARIABLE_Specs_0_5;
    else
    {
      MR_Word Instance_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word Instances_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word Var_21;
      MR_Word STATE_VARIABLE_Specs_22_22;
      MR_Box conv1_STATE_VARIABLE_Specs_22_22;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_5;

      {
        Var_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_14[0]));
        MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (check_hlds__check_typeclass__check_consistency_6_p_0_1));
        MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
        MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (ClassId_1));
        MR_hl_field(MR_mktag(0), Var_21, 4) = ((MR_Box) (ClassDefn_2));
        MR_hl_field(MR_mktag(0), Var_21, 5) = ((MR_Box) (FunDeps_4));
        MR_hl_field(MR_mktag(0), Var_21, 6) = ((MR_Box) (Instance_15));
      }
      mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0, (MR_Word) &check_hlds__check_typeclass_scalar_common_1[1], Var_21, Instances_16, ((MR_Box) (STATE_VARIABLE_Specs_0_5)), &conv1_STATE_VARIABLE_Specs_22_22);
      STATE_VARIABLE_Specs_22_22 = ((MR_Word) conv1_STATE_VARIABLE_Specs_22_22);
      // direct tailcall eliminated
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

    check_hlds__check_typeclass__check_coverage_for_instance_defn_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_STATE_VARIABLE_Specs_26);
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
    if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_Specs_6 = STATE_VARIABLE_Specs_0_5;
    else
    {
      MR_Word InstanceDefn_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word InstanceDefns_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word Var_21;
      MR_Word STATE_VARIABLE_Specs_22_22;
      MR_Box conv1_STATE_VARIABLE_Specs_22_22;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_5;

      {
        Var_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_4[3]));
        MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (check_hlds__check_typeclass__check_coverage_for_instance_defns_6_p_0_1));
        MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (ModuleInfo_1));
        MR_hl_field(MR_mktag(0), Var_21, 4) = ((MR_Box) (ClassId_2));
        MR_hl_field(MR_mktag(0), Var_21, 5) = ((MR_Box) (InstanceDefn_15));
      }
      mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_fundep_0, (MR_Word) &check_hlds__check_typeclass_scalar_common_1[1], Var_21, FunDeps_4, ((MR_Box) (STATE_VARIABLE_Specs_0_5)), &conv1_STATE_VARIABLE_Specs_22_22);
      STATE_VARIABLE_Specs_22_22 = ((MR_Word) conv1_STATE_VARIABLE_Specs_22_22);
      // direct tailcall eliminated
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
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_LaterLines_0_8,
  MR_Word * STATE_VARIABLE_LaterLines_9)
{
  {
    MR_Word TypeCtorInfo_20_20;
    MR_Word SymName_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
    MR_Integer Arity_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
    MR_Word Line_7;
    MR_Word Var_12;
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Word Var_19;

    {
      Var_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (SymName_4));
      MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (Arity_5));
    }
    {
      Var_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_13, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
      MR_hl_field(MR_mktag(3), Var_13, 1) = ((MR_Box) (Var_14));
    }
    {
      Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_12, 0) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(1), Var_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[21])));
    }
    {
      Line_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Line_7, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[125])));
      MR_hl_field(MR_mktag(1), Line_7, 1) = ((MR_Box) (Var_12));
    }
    TypeCtorInfo_20_20 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
    Var_19 = mercury__cord__from_list_1_f_0(TypeCtorInfo_20_20, Line_7);
    *STATE_VARIABLE_LaterLines_9 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_20_20, STATE_VARIABLE_LaterLines_0_8, Var_19);
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
    MR_Word conv1_STATE_VARIABLE_LaterLines_9;

    check_hlds__check_typeclass__add_path_element_3_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv1_STATE_VARIABLE_LaterLines_9);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_LaterLines_9));
  }
}

static MR_Word MR_CALL 
check_hlds__check_typeclass__report_cyclic_classes_2_f_0(
  MR_Word ClassTable_4,
  MR_Word ClassPath_5)
{
  {
    MR_Word Spec_6;

    if ((ClassPath_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.check_typeclass", (MR_String) "function \140check_hlds.check_typeclass.report_cyclic_classes\'/2", (MR_String) "empty cycle found.");
    }
    else
    {
      MR_Word TypeCtorInfo_49_49 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0;
      MR_Word TypeCtorInfo_54_54;
      MR_Word ClassId_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ClassPath_5, (MR_Integer) 0)));
      MR_Word Tail_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ClassPath_5, (MR_Integer) 1)));
      MR_Word Context_9;
      MR_Word Name_10;
      MR_Integer Arity_11;
      MR_Word StartPieces_12;
      MR_Word LaterLinesCord_13;
      MR_Word Pieces_14;
      MR_Word Msg_15;
      MR_Word Var_16;
      MR_Word Var_19;
      MR_Word Var_21;
      MR_Word Var_22;
      MR_Word Var_23;
      MR_Word Var_28;
      MR_Word Var_29;
      MR_Word Var_30;
      MR_Word Var_31;
      MR_Word Var_35;
      MR_Box conv0_Var_16;
      MR_Word Var_40;
      MR_Word Var_41;
      MR_Word Var_42;
      MR_Word Var_43;
      MR_Word Var_44;
      MR_Word Var_45;
      MR_Word Var_46;
      MR_Word Var_47;
      MR_Word Var_48;
      MR_Box conv2_LaterLinesCord_13;

      conv0_Var_16 = mercury__map__lookup_2_f_0(TypeCtorInfo_49_49, (MR_Word) &hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0, ClassTable_4, ((MR_Box) (ClassId_7)));
      Var_16 = ((MR_Word) conv0_Var_16);
      Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 0)));
      Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 1)));
      Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 2)));
      Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 3)));
      Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 4)));
      Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 5)));
      Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 6)));
      Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 7)));
      Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 8)));
      Context_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 9)));
      Name_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassId_7, (MR_Integer) 0)));
      Arity_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ClassId_7, (MR_Integer) 1)));
      {
        Var_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (Name_10));
        MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (Arity_11));
      }
      {
        Var_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
        MR_hl_field(MR_mktag(3), Var_22, 1) = ((MR_Box) (Var_23));
      }
      {
        Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (Var_22));
        MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[21])));
      }
      {
        Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
        MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (Var_21));
      }
      {
        StartPieces_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), StartPieces_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[124])));
        MR_hl_field(MR_mktag(1), StartPieces_12, 1) = ((MR_Box) (Var_19));
      }
      TypeCtorInfo_54_54 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
      Var_28 = mercury__cord__init_0_f_0(TypeCtorInfo_54_54);
      mercury__list__foldl_4_p_0(TypeCtorInfo_49_49, (MR_Word) &check_hlds__check_typeclass_scalar_common_1[11], (MR_Word) &check_hlds__check_typeclass_scalar_common_2[7], Tail_8, ((MR_Box) (Var_28)), &conv2_LaterLinesCord_13);
      LaterLinesCord_13 = ((MR_Word) conv2_LaterLinesCord_13);
      Var_29 = mercury__cord__list_1_f_0(TypeCtorInfo_54_54, LaterLinesCord_13);
      Pieces_14 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_54_54, StartPieces_12, Var_29);
      {
        Var_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (Pieces_14));
      }
      {
        Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (Var_31));
        MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Msg_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Msg_15, 0) = ((MR_Box) (Context_9));
        MR_hl_field(MR_mktag(0), Msg_15, 1) = ((MR_Box) (Var_30));
      }
      {
        Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Msg_15));
        MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Spec_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), Spec_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
        MR_hl_field(MR_mktag(0), Spec_6, 2) = ((MR_Box) (Var_35));
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
    MR_Word TypeCtorInfo_37_37 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
    MR_Word Name_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Constraint_12, (MR_Integer) 0)));
    MR_Word Args_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Constraint_12, (MR_Integer) 1)));
    MR_Integer Arity_19;
    MR_Word ClassId_20;
    MR_Word Params_21;
    MR_Word NewAncestors0_22;
    MR_Word Binding_23;
    MR_Word NewAncestors_24;

    mercury__list__length_2_p_0(TypeCtorInfo_37_37, Args_18, &Arity_19);
    {
      ClassId_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ClassId_20, 0) = ((MR_Box) (Name_17));
      MR_hl_field(MR_mktag(0), ClassId_20, 1) = ((MR_Box) (Arity_19));
    }
    check_hlds__check_typeclass__find_cycles_2_10_p_0(Path_11, ClassId_20, &Params_21, &NewAncestors0_22, STATE_VARIABLE_ClassTable_0_25, STATE_VARIABLE_ClassTable_26, STATE_VARIABLE_Visited_0_27, STATE_VARIABLE_Visited_28, STATE_VARIABLE_Cycles_0_29, STATE_VARIABLE_Cycles_30);
    mercury__map__from_corresponding_lists_3_p_0((MR_Word) &check_hlds__check_typeclass_scalar_common_1[5], TypeCtorInfo_37_37, Params_21, Args_18, &Binding_23);
    parse_tree__prog_type_subst__apply_subst_to_prog_constraint_list_3_p_0(Binding_23, NewAncestors0_22, &NewAncestors_24);
    mercury__list__append_3_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, NewAncestors_24, STATE_VARIABLE_Ancestors_0_31, STATE_VARIABLE_Ancestors_32);
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

    check_hlds__check_typeclass__find_cycles_3_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv4_STATE_VARIABLE_ClassTable_26, ((MR_Word) wrapper_arg_4), &conv3_STATE_VARIABLE_Visited_28, ((MR_Word) wrapper_arg_6), &conv2_STATE_VARIABLE_Cycles_30, ((MR_Word) wrapper_arg_8), &conv1_STATE_VARIABLE_Ancestors_32);
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
    MR_Word TypeCtorInfo_103_103 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0;
    MR_Word TypeCtorInfo_104_104 = (MR_Word) &hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0;
    MR_Word ClassDefn0_18;
    MR_Word Kinds_19;
    MR_Box conv0_ClassDefn0_18;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_56;

    conv0_ClassDefn0_18 = mercury__map__lookup_2_f_0(TypeCtorInfo_103_103, TypeCtorInfo_104_104, STATE_VARIABLE_ClassTable_0_30, ((MR_Box) (ClassId_12)));
    ClassDefn0_18 = ((MR_Word) conv0_ClassDefn0_18);
    Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn0_18, (MR_Integer) 0)));
    Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn0_18, (MR_Integer) 1)));
    Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn0_18, (MR_Integer) 2)));
    Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn0_18, (MR_Integer) 3)));
    *Params_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn0_18, (MR_Integer) 4)));
    Kinds_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn0_18, (MR_Integer) 5)));
    Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn0_18, (MR_Integer) 6)));
    Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn0_18, (MR_Integer) 7)));
    Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn0_18, (MR_Integer) 8)));
    Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn0_18, (MR_Integer) 9)));
    succeeded = mercury__set__member_2_p_0(TypeCtorInfo_103_103, ((MR_Box) (ClassId_12)), STATE_VARIABLE_Visited_0_32);
    if (succeeded)
    {
      MR_Word Cycle_20;
      MR_Word Var_36;
      MR_Word Var_66;
      MR_Word Var_67;
      MR_Word Var_68;
      MR_Word Var_69;
      MR_Word Var_70;
      MR_Word Var_71;
      MR_Word Var_72;
      MR_Word Var_73;
      MR_Word Var_74;

      {
        Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (ClassId_12));
        MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      succeeded = check_hlds__check_typeclass__find_cycle_4_p_0(ClassId_12, Path_11, Var_36, &Cycle_20);
      if (succeeded)
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Cycles_35 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Cycle_20));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Cycles_0_34));
        }
      else
        *STATE_VARIABLE_Cycles_35 = STATE_VARIABLE_Cycles_0_34;
      Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn0_18, (MR_Integer) 0)));
      Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn0_18, (MR_Integer) 1)));
      Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn0_18, (MR_Integer) 2)));
      *Ancestors_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn0_18, (MR_Integer) 3)));
      Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn0_18, (MR_Integer) 4)));
      Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn0_18, (MR_Integer) 5)));
      Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn0_18, (MR_Integer) 6)));
      Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn0_18, (MR_Integer) 7)));
      Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn0_18, (MR_Integer) 8)));
      Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn0_18, (MR_Integer) 9)));
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
      MR_Word Var_75;
      MR_Word Var_77;
      MR_Word Var_78;
      MR_Word Var_79;
      MR_Word Var_80;
      MR_Word Var_81;
      MR_Word Var_82;
      MR_Word Var_83;
      MR_Box conv8_STATE_VARIABLE_ClassTable_43_43;
      MR_Box conv7_STATE_VARIABLE_Visited_33;
      MR_Box conv6_STATE_VARIABLE_Cycles_35;
      MR_Box conv5_Ancestors_14;
      MR_Word Var_93;
      MR_Word Var_94;
      MR_Word Var_95;
      MR_Word Var_97;
      MR_Word Var_98;
      MR_Word Var_99;
      MR_Word Var_100;
      MR_Word Var_101;
      MR_Word Var_102;
      MR_Word Var_96;

      mercury__set__insert_3_p_0(TypeCtorInfo_103_103, ((MR_Box) (ClassId_12)), STATE_VARIABLE_Visited_0_32, &STATE_VARIABLE_Visited_39_39);
      Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn0_18, (MR_Integer) 0)));
      Superclasses_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn0_18, (MR_Integer) 1)));
      FunDeps_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn0_18, (MR_Integer) 2)));
      Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn0_18, (MR_Integer) 3)));
      Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn0_18, (MR_Integer) 4)));
      Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn0_18, (MR_Integer) 5)));
      Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn0_18, (MR_Integer) 6)));
      Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn0_18, (MR_Integer) 7)));
      Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn0_18, (MR_Integer) 8)));
      Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn0_18, (MR_Integer) 9)));
      if ((FunDeps_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        Ancestors0_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      else
      {
        MR_Word ClassName_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassId_12, (MR_Integer) 0)));
        MR_Word Args_27;
        MR_Word Var_40;
        MR_Integer Var_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ClassId_12, (MR_Integer) 1)));

        parse_tree__prog_type__var_list_to_type_list_3_p_0(Kinds_19, *Params_13, &Args_27);
        {
          Var_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_40, 0) = ((MR_Box) (ClassName_25));
          MR_hl_field(MR_mktag(0), Var_40, 1) = ((MR_Box) (Args_27));
        }
        {
          Ancestors0_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Ancestors0_22, 0) = ((MR_Box) (Var_40));
          MR_hl_field(MR_mktag(1), Ancestors0_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      }
      {
        Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (ClassId_12));
        MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (Path_11));
      }
      {
        Var_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_3[2]));
        MR_hl_field(MR_mktag(0), Var_42, 1) = ((MR_Box) (check_hlds__check_typeclass__find_cycles_2_10_p_0_1));
        MR_hl_field(MR_mktag(0), Var_42, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_42, 3) = ((MR_Box) (Var_46));
      }
      mercury__list__foldl4_10_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &check_hlds__check_typeclass_scalar_common_2[1], (MR_Word) &check_hlds__check_typeclass_scalar_common_1[7], (MR_Word) &check_hlds__check_typeclass_scalar_common_1[9], (MR_Word) &check_hlds__check_typeclass_scalar_common_1[10], Var_42, Superclasses_28, ((MR_Box) (STATE_VARIABLE_ClassTable_0_30)), &conv8_STATE_VARIABLE_ClassTable_43_43, ((MR_Box) (STATE_VARIABLE_Visited_39_39)), &conv7_STATE_VARIABLE_Visited_33, ((MR_Box) (STATE_VARIABLE_Cycles_0_34)), &conv6_STATE_VARIABLE_Cycles_35, ((MR_Box) (Ancestors0_22)), &conv5_Ancestors_14);
      STATE_VARIABLE_ClassTable_43_43 = ((MR_Word) conv8_STATE_VARIABLE_ClassTable_43_43);
      *STATE_VARIABLE_Visited_33 = ((MR_Word) conv7_STATE_VARIABLE_Visited_33);
      *STATE_VARIABLE_Cycles_35 = ((MR_Word) conv6_STATE_VARIABLE_Cycles_35);
      *Ancestors_14 = ((MR_Word) conv5_Ancestors_14);
      Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn0_18, (MR_Integer) 0)));
      Var_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn0_18, (MR_Integer) 1)));
      Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn0_18, (MR_Integer) 2)));
      Var_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn0_18, (MR_Integer) 3)));
      Var_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn0_18, (MR_Integer) 4)));
      Var_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn0_18, (MR_Integer) 5)));
      Var_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn0_18, (MR_Integer) 6)));
      Var_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn0_18, (MR_Integer) 7)));
      Var_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn0_18, (MR_Integer) 8)));
      Var_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn0_18, (MR_Integer) 9)));
      {
        ClassDefn_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ClassDefn_29, 0) = ((MR_Box) (Var_93));
        MR_hl_field(MR_mktag(0), ClassDefn_29, 1) = ((MR_Box) (Var_94));
        MR_hl_field(MR_mktag(0), ClassDefn_29, 2) = ((MR_Box) (Var_95));
        MR_hl_field(MR_mktag(0), ClassDefn_29, 3) = ((MR_Box) (*Ancestors_14));
        MR_hl_field(MR_mktag(0), ClassDefn_29, 4) = ((MR_Box) (Var_97));
        MR_hl_field(MR_mktag(0), ClassDefn_29, 5) = ((MR_Box) (Var_98));
        MR_hl_field(MR_mktag(0), ClassDefn_29, 6) = ((MR_Box) (Var_99));
        MR_hl_field(MR_mktag(0), ClassDefn_29, 7) = ((MR_Box) (Var_100));
        MR_hl_field(MR_mktag(0), ClassDefn_29, 8) = ((MR_Box) (Var_101));
        MR_hl_field(MR_mktag(0), ClassDefn_29, 9) = ((MR_Box) (Var_102));
      }
      mercury__map__det_update_4_p_0(TypeCtorInfo_103_103, TypeCtorInfo_104_104, ((MR_Box) (ClassId_12)), ((MR_Box) (ClassDefn_29)), STATE_VARIABLE_ClassTable_43_43, STATE_VARIABLE_ClassTable_31);
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
    MR_bool succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
    MR_Word Head_6;
    MR_Word Tail_7;
    MR_Word Path_10;

    // setup for model_semi tailcalls optimized into a loop
    if (succeeded)
    {
      Head_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      Tail_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      {
        Path_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
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
    struct check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_env_0_s * env_ptr = (struct check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_env_0_s *) env_ptr_arg;

    MR_builtin_longjmp((env_ptr)->check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_3(
  void * env_ptr_arg)
{
  {
    struct check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_env_0_s * env_ptr = (struct check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_env_0_s *) env_ptr_arg;

    (env_ptr)->check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_env_0__ConcreteInstance_12 = ((MR_Word) (env_ptr)->check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_env_0__conv0_ConcreteInstance_12);
    check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_2(env_ptr);
  }
}

static void MR_CALL 
check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_2(
  void * env_ptr_arg)
{
  {
    struct check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_env_0_s * env_ptr = (struct check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_env_0_s *) env_ptr_arg;

    {
      MR_Word Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_env_0__ConcreteInstance_12, (MR_Integer) 0)));
      MR_Word Var_65;
      MR_Word Var_66;
      MR_Word Var_67;
      MR_Word Var_68;
      MR_Word Var_69;
      MR_Word Var_70;
      MR_Word Var_71;
      MR_Word Var_72;

      (env_ptr)->check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_env_0__ConcreteTypes_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_env_0__ConcreteInstance_12, (MR_Integer) 1)));
      Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_env_0__ConcreteInstance_12, (MR_Integer) 2)));
      Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_env_0__ConcreteInstance_12, (MR_Integer) 3)));
      Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_env_0__ConcreteInstance_12, (MR_Integer) 4)));
      Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_env_0__ConcreteInstance_12, (MR_Integer) 5)));
      Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_env_0__ConcreteInstance_12, (MR_Integer) 6)));
      Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_env_0__ConcreteInstance_12, (MR_Integer) 7)));
      Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_env_0__ConcreteInstance_12, (MR_Integer) 8)));
      Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_env_0__ConcreteInstance_12, (MR_Integer) 9)));
      (env_ptr)->check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_env_0__TypeInfo_94_94 = (MR_Word) &check_hlds__check_typeclass_scalar_common_1[15];
      (env_ptr)->check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((env_ptr)->check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_env_0__TypeInfo_94_94, ((MR_Box) ((env_ptr)->check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_env_0__ConcreteTypes_13)), ((MR_Box) ((env_ptr)->check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_env_0__AbstractTypes_10)));
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
    struct check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_env_0_s * env_ptr = (struct check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_env_0_s *) env_ptr_arg;

    if (MR_builtin_setjmp((env_ptr)->check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_env_0__commit_0) == 0)
      {
        {
          mercury__list__member_2_p_1((MR_Word) &hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0, &(env_ptr)->check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_env_0__conv0_ConcreteInstance_12, (env_ptr)->check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_env_0__ConcreteInstances_11, check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_3, env_ptr);
        }
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
  MR_Word STATE_VARIABLE_Specs_0_24,
  MR_Word * STATE_VARIABLE_Specs_25)
{
  {
    struct check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_env_0_s env;

    {
      MR_Word Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), AbstractInstance_8, (MR_Integer) 0)));
      MR_Word Var_56;
      MR_Word Var_57;
      MR_Word Var_58;
      MR_Word Var_59;
      MR_Word Var_60;
      MR_Word Var_61;
      MR_Word Var_62;
      MR_Word Var_63;

      (env).check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_env_0__AbstractTypes_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), AbstractInstance_8, (MR_Integer) 1)));
      Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), AbstractInstance_8, (MR_Integer) 2)));
      Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), AbstractInstance_8, (MR_Integer) 3)));
      Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), AbstractInstance_8, (MR_Integer) 4)));
      Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), AbstractInstance_8, (MR_Integer) 5)));
      Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), AbstractInstance_8, (MR_Integer) 6)));
      Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), AbstractInstance_8, (MR_Integer) 7)));
      Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), AbstractInstance_8, (MR_Integer) 8)));
      Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), AbstractInstance_8, (MR_Integer) 9)));
      (env).check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_env_0__succeeded = mercury__multi_map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0, (MR_Word) &hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0, Concretes_6, ((MR_Box) (ClassId_7)), &(env).check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_env_0__ConcreteInstances_11);
      if ((env).check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_env_0__succeeded)
      {
        check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_4(&env);
        if ((env).check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_env_0__succeeded)
          *STATE_VARIABLE_Specs_25 = STATE_VARIABLE_Specs_0_24;
        else
        {
          MR_Word ClassName_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassId_7, (MR_Integer) 0)));
          MR_String ClassNameString_17;
          MR_String AbstractTypesString_18;
          MR_String AbstractInstanceName_19;
          MR_Word Pieces_20;
          MR_Word AbstractInstanceContext_21;
          MR_Word Msg_22;
          MR_Word Spec_23;
          MR_Word Var_26;
          MR_String Var_27;
          MR_String Var_29;
          MR_Word Var_33;
          MR_Word Var_36;
          MR_Word Var_37;
          MR_Word Var_47;
          MR_Word Var_48;
          MR_Word Var_52;
          MR_Integer Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ClassId_7, (MR_Integer) 1)));
          MR_Word Var_73;
          MR_Word Var_74;
          MR_Word Var_75;
          MR_Word Var_76;
          MR_Word Var_78;
          MR_Word Var_79;
          MR_Word Var_80;
          MR_Word Var_81;

          ClassNameString_17 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ClassName_15);
          Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), AbstractInstance_8, (MR_Integer) 0)));
          Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), AbstractInstance_8, (MR_Integer) 1)));
          Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), AbstractInstance_8, (MR_Integer) 2)));
          Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), AbstractInstance_8, (MR_Integer) 3)));
          AbstractInstanceContext_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), AbstractInstance_8, (MR_Integer) 4)));
          Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), AbstractInstance_8, (MR_Integer) 5)));
          Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), AbstractInstance_8, (MR_Integer) 6)));
          Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), AbstractInstance_8, (MR_Integer) 7)));
          Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), AbstractInstance_8, (MR_Integer) 8)));
          Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), AbstractInstance_8, (MR_Integer) 9)));
          AbstractTypesString_18 = parse_tree__mercury_to_mercury__mercury_type_list_to_string_2_f_0(Var_26, (env).check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_env_0__AbstractTypes_10);
          Var_29 = mercury__string__f_43_43_2_f_0(AbstractTypesString_18, (MR_String) ")");
          Var_27 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_29);
          AbstractInstanceName_19 = mercury__string__f_43_43_2_f_0(ClassNameString_17, Var_27);
          {
            Var_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), Var_37, 1) = ((MR_Box) (AbstractInstanceName_19));
          }
          {
            Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (Var_37));
            MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[27])));
          }
          {
            Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[123])));
            MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (Var_36));
          }
          {
            Pieces_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[122])));
            MR_hl_field(MR_mktag(1), Pieces_20, 1) = ((MR_Box) (Var_33));
          }
          {
            Var_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_48, 0) = ((MR_Box) (Pieces_20));
          }
          {
            Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (Var_48));
            MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            Msg_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Msg_22, 0) = ((MR_Box) (AbstractInstanceContext_21));
            MR_hl_field(MR_mktag(0), Msg_22, 1) = ((MR_Box) (Var_47));
          }
          {
            Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (Msg_22));
            MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            Spec_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Spec_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), Spec_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
            MR_hl_field(MR_mktag(0), Spec_23, 2) = ((MR_Box) (Var_52));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_25 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_23));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_24));
          }
        }
      }
      else
      {
        MR_Word ClassName_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassId_7, (MR_Integer) 0)));
        MR_String ClassNameString_109;
        MR_String AbstractTypesString_110;
        MR_String AbstractInstanceName_111;
        MR_Word Pieces_112;
        MR_Word AbstractInstanceContext_113;
        MR_Word Msg_114;
        MR_Word Spec_115;
        MR_Word Var_116;
        MR_String Var_117;
        MR_String Var_119;
        MR_Word Var_123;
        MR_Word Var_126;
        MR_Word Var_127;
        MR_Word Var_129;
        MR_Word Var_130;
        MR_Word Var_134;
        MR_Integer Var_96 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ClassId_7, (MR_Integer) 1)));
        MR_Word Var_136;
        MR_Word Var_137;
        MR_Word Var_138;
        MR_Word Var_139;
        MR_Word Var_141;
        MR_Word Var_142;
        MR_Word Var_143;
        MR_Word Var_144;

        ClassNameString_109 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ClassName_107);
        Var_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), AbstractInstance_8, (MR_Integer) 0)));
        Var_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), AbstractInstance_8, (MR_Integer) 1)));
        Var_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), AbstractInstance_8, (MR_Integer) 2)));
        Var_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), AbstractInstance_8, (MR_Integer) 3)));
        AbstractInstanceContext_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), AbstractInstance_8, (MR_Integer) 4)));
        Var_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), AbstractInstance_8, (MR_Integer) 5)));
        Var_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), AbstractInstance_8, (MR_Integer) 6)));
        Var_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), AbstractInstance_8, (MR_Integer) 7)));
        Var_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), AbstractInstance_8, (MR_Integer) 8)));
        Var_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), AbstractInstance_8, (MR_Integer) 9)));
        AbstractTypesString_110 = parse_tree__mercury_to_mercury__mercury_type_list_to_string_2_f_0(Var_116, (env).check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0_env_0__AbstractTypes_10);
        Var_119 = mercury__string__f_43_43_2_f_0(AbstractTypesString_110, (MR_String) ")");
        Var_117 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_119);
        AbstractInstanceName_111 = mercury__string__f_43_43_2_f_0(ClassNameString_109, Var_117);
        {
          Var_127 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_127, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), Var_127, 1) = ((MR_Box) (AbstractInstanceName_111));
        }
        {
          Var_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_126, 0) = ((MR_Box) (Var_127));
          MR_hl_field(MR_mktag(1), Var_126, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[27])));
        }
        {
          Var_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_123, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[123])));
          MR_hl_field(MR_mktag(1), Var_123, 1) = ((MR_Box) (Var_126));
        }
        {
          Pieces_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_112, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[122])));
          MR_hl_field(MR_mktag(1), Pieces_112, 1) = ((MR_Box) (Var_123));
        }
        {
          Var_130 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_130, 0) = ((MR_Box) (Pieces_112));
        }
        {
          Var_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_129, 0) = ((MR_Box) (Var_130));
          MR_hl_field(MR_mktag(1), Var_129, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          Msg_114 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Msg_114, 0) = ((MR_Box) (AbstractInstanceContext_113));
          MR_hl_field(MR_mktag(0), Msg_114, 1) = ((MR_Box) (Var_129));
        }
        {
          Var_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_134, 0) = ((MR_Box) (Msg_114));
          MR_hl_field(MR_mktag(1), Var_134, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          Spec_115 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_115, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), Spec_115, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
          MR_hl_field(MR_mktag(0), Spec_115, 2) = ((MR_Box) (Var_134));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Specs_25 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_115));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_24));
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
    MR_Word conv0_STATE_VARIABLE_Specs_25;

    check_hlds__check_typeclass__check_for_corresponding_instances_2_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_STATE_VARIABLE_Specs_25);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_25));
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
      Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_5[3]));
      MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (check_hlds__check_typeclass__check_for_corresponding_instances_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (Concretes_6));
      MR_hl_field(MR_mktag(0), Var_12, 4) = ((MR_Box) (ClassId_7));
    }
    mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0, (MR_Word) &check_hlds__check_typeclass_scalar_common_1[1], Var_12, InstanceDefns_8, ((MR_Box) (STATE_VARIABLE_Specs_0_10)), &conv1_STATE_VARIABLE_Specs_11);
    *STATE_VARIABLE_Specs_11 = ((MR_Word) conv1_STATE_VARIABLE_Specs_11);
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
    MR_Word InstanceStatus_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_8, (MR_Integer) 3)));
    MR_Word IsImported_12;
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_8, (MR_Integer) 0)));
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_8, (MR_Integer) 1)));
    MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_8, (MR_Integer) 2)));
    MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_8, (MR_Integer) 4)));
    MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_8, (MR_Integer) 5)));
    MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_8, (MR_Integer) 6)));
    MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_8, (MR_Integer) 7)));
    MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_8, (MR_Integer) 8)));
    MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_8, (MR_Integer) 9)));

    IsImported_12 = hlds__status__instance_status_is_imported_1_f_0(InstanceStatus_11);
    switch (IsImported_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Body_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_8, (MR_Integer) 6)));
          MR_Word Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_8, (MR_Integer) 0)));
          MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_8, (MR_Integer) 1)));
          MR_Word Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_8, (MR_Integer) 2)));
          MR_Word Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_8, (MR_Integer) 3)));
          MR_Word Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_8, (MR_Integer) 4)));
          MR_Word Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_8, (MR_Integer) 5)));
          MR_Word Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_8, (MR_Integer) 7)));
          MR_Word Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_8, (MR_Integer) 8)));
          MR_Word Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_8, (MR_Integer) 9)));

          if ((Body_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            mercury__multi_map__add_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0, (MR_Word) &hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0, ((MR_Box) (ClassId_7)), ((MR_Box) (InstanceDefn_8)), STATE_VARIABLE_Abstracts_0_15, STATE_VARIABLE_Abstracts_16);
            *STATE_VARIABLE_Concretes_18 = STATE_VARIABLE_Concretes_0_17;
          }
          else
          {
            mercury__multi_map__add_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0, (MR_Word) &hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0, ((MR_Box) (ClassId_7)), ((MR_Box) (InstanceDefn_8)), STATE_VARIABLE_Concretes_0_17, STATE_VARIABLE_Concretes_18);
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

    check_hlds__check_typeclass__partition_instances_for_class_2_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv1_STATE_VARIABLE_Abstracts_16, ((MR_Word) wrapper_arg_4), &conv0_STATE_VARIABLE_Concretes_18);
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
    MR_Word TypeInfo_24_24;
    MR_Word Var_15;
    MR_Box conv3_STATE_VARIABLE_Abstracts_12;
    MR_Box conv2_STATE_VARIABLE_Concretes_14;

    {
      Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_4[2]));
      MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (check_hlds__check_typeclass__partition_instances_for_class_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_15, 3) = ((MR_Box) (ClassId_7));
    }
    TypeInfo_24_24 = (MR_Word) &check_hlds__check_typeclass_scalar_common_2[0];
    mercury__list__foldl2_6_p_0((MR_Word) &hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0, TypeInfo_24_24, TypeInfo_24_24, Var_15, Instances_8, ((MR_Box) (STATE_VARIABLE_Abstracts_0_11)), &conv3_STATE_VARIABLE_Abstracts_12, ((MR_Box) (STATE_VARIABLE_Concretes_0_13)), &conv2_STATE_VARIABLE_Concretes_14);
    *STATE_VARIABLE_Abstracts_12 = ((MR_Word) conv3_STATE_VARIABLE_Abstracts_12);
    *STATE_VARIABLE_Concretes_14 = ((MR_Word) conv2_STATE_VARIABLE_Concretes_14);
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
    MR_Word conv1_LambdaHeadVar__2_85;

    check_hlds__check_typeclass__IntroducedFrom__pred__check_instance_pred__692__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) wrapper_arg_1), &conv1_LambdaHeadVar__2_85);
    *wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_85));
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

    succeeded = check_hlds__check_typeclass__IntroducedFrom__pred__check_instance_pred__664__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv0_LambdaHeadVar__2_77);
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
    MR_Word TypeCtorInfo_95_95;
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
    MR_Word Var_83;
    MR_Word OtherUnivCs_38;
    MR_Word ExistCs_39;
    MR_Word Var_79;
    MR_Word Var_37;
    MR_Word Var_56;
    MR_Word Var_58;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Word Var_63;
    MR_Word Var_64;
    MR_Word Var_65;

    {
      GetClassProcProcId_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), GetClassProcProcId_25, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_8[3]));
      MR_hl_field(MR_mktag(0), GetClassProcProcId_25, 1) = ((MR_Box) (check_hlds__check_typeclass__check_instance_pred_14_p_0_1));
      MR_hl_field(MR_mktag(0), GetClassProcProcId_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), GetClassProcProcId_25, 3) = ((MR_Box) (PredId_18));
    }
    TypeCtorInfo_95_95 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
    mercury__list__filter_map_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, TypeCtorInfo_95_95, GetClassProcProcId_25, ClassInterface_17, &ClassProcProcIds0_28);
    mercury__list__sort_and_remove_dups_2_p_0(TypeCtorInfo_95_95, ClassProcProcIds0_28, &ClassProcProcIds_29);
    hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_70, PredId_18, &PredInfo_30);
    hlds__hlds_pred__pred_info_get_arg_types_4_p_0(PredInfo_30, &ArgTypeVars_31, &ExistQVars_32, &ArgTypes_33);
    hlds__hlds_pred__pred_info_get_class_context_2_p_0(PredInfo_30, &ClassContext0_34);
    hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_30, &Markers0_35);
    hlds__hlds_pred__remove_marker_3_p_0((MR_Integer) 11, Markers0_35, &Markers_36);
    Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassContext0_34, (MR_Integer) 0)));
    ExistCs_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassContext0_34, (MR_Integer) 1)));
    succeeded = ((MR_tag((MR_Word) Var_79)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_79, (MR_Integer) 0)));
      OtherUnivCs_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_79, (MR_Integer) 1)));
      {
        ClassContext_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ClassContext_41, 0) = ((MR_Box) (OtherUnivCs_38));
        MR_hl_field(MR_mktag(0), ClassContext_41, 1) = ((MR_Box) (ExistCs_39));
      }
    }
    else
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "check_hlds.check_typeclass", (MR_String) "predicate \140check_hlds.check_typeclass.check_instance_pred\'/14", (MR_String) "no constraint on class method");
        return;
      }
    }
    MethodName0_42 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_30);
    PredModule_43 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_30);
    {
      MethodName_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MethodName_44, 0) = ((MR_Box) (PredModule_43));
      MR_hl_field(MR_mktag(1), MethodName_44, 1) = ((MR_Box) (MethodName0_42));
    }
    PredArity_45 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(PredInfo_30);
    PredOrFunc_46 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_30);
    parse_tree__prog_util__adjust_func_arity_3_p_1(PredOrFunc_46, &Arity_47, PredArity_45);
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_30, &ProcTable_48);
    {
      Var_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_83, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_8[4]));
      MR_hl_field(MR_mktag(0), Var_83, 1) = ((MR_Box) (check_hlds__check_typeclass__check_instance_pred_14_p_0_2));
      MR_hl_field(MR_mktag(0), Var_83, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_83, 3) = ((MR_Box) (ProcTable_48));
    }
    mercury__list__map_3_p_0(TypeCtorInfo_95_95, (MR_Word) &check_hlds__check_typeclass__check_hlds__check_typeclass__type_ctor_info_modes_and_detism_0, Var_83, ClassProcProcIds_29, &ArgModes_55);
    Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn0_19, (MR_Integer) 0)));
    InstanceTypes_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn0_19, (MR_Integer) 1)));
    Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn0_19, (MR_Integer) 2)));
    InstanceStatus_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn0_19, (MR_Integer) 3)));
    Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn0_19, (MR_Integer) 4)));
    Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn0_19, (MR_Integer) 5)));
    Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn0_19, (MR_Integer) 6)));
    Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn0_19, (MR_Integer) 7)));
    Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn0_19, (MR_Integer) 8)));
    Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn0_19, (MR_Integer) 9)));
    check_hlds__check_typeclass__make_introduced_pred_name_5_p_0(ClassId_15, MethodName_44, Arity_47, InstanceTypes_57, &PredName_66);
    {
      CheckInfo0_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), CheckInfo0_67, 0) = ((MR_Box) (PredOrFunc_46));
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
    MR_Word ClassName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassId_6, (MR_Integer) 0)));
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
    MR_Integer _ClassArity_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ClassId_6, (MR_Integer) 1)));

    ClassNameString_13 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(ClassName_11, (MR_String) "__");
    MethodNameString_14 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(MethodName_7, (MR_String) "__");
    mercury__string__int_to_string_2_p_0(Arity_8, &ArityString_15);
    hlds__hlds_code_util__make_instance_string_2_p_0(InstanceTypes_9, &InstanceString_16);
    {
      Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (ArityString_15));
      MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) ((MR_String) "_"));
      MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_31));
    }
    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (MethodNameString_14));
      MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (Var_29));
    }
    {
      Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) ((MR_String) "____"));
      MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (Var_28));
    }
    {
      Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (InstanceString_16));
      MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (Var_26));
    }
    {
      Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) ((MR_String) "____"));
      MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (Var_25));
    }
    {
      Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (ClassNameString_13));
      MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (Var_23));
    }
    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) ((MR_String) "ClassMethod_for_"));
      MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (Var_22));
    }
    mercury__string__append_list_2_p_0(Var_20, &PredNameString_17);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
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

    check_hlds__check_typeclass__IntroducedFrom__pred__check_instance_pred_procs__791__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) wrapper_arg_1), &conv0_LambdaHeadVar__2_74);
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
    MR_Word InstanceModuleName_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn0_21, (MR_Integer) 0)));
    MR_Word InstanceTypes_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn0_21, (MR_Integer) 1)));
    MR_Word InstanceConstraints_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn0_21, (MR_Integer) 5)));
    MR_Word InstanceBody_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn0_21, (MR_Integer) 6)));
    MR_Word MaybeInstancePredProcs_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn0_21, (MR_Integer) 7)));
    MR_Word InstanceVarSet_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn0_21, (MR_Integer) 8)));
    MR_Word PredOrFunc_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), CheckInfo_20, (MR_Integer) 0)));
    MR_Integer Arity_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), CheckInfo_20, (MR_Integer) 2)));
    MR_Word MatchingInstanceMethods_39;
    MR_Word _OriginalTypes_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn0_21, (MR_Integer) 2)));
    MR_Word _InstanceStatus_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn0_21, (MR_Integer) 3)));
    MR_Word _InstanceContext_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn0_21, (MR_Integer) 4)));
    MR_Word _InstanceProofs_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn0_21, (MR_Integer) 9)));
    MR_Word Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), CheckInfo_20, (MR_Integer) 1)));
    MR_Word Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), CheckInfo_20, (MR_Integer) 3)));
    MR_Word Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), CheckInfo_20, (MR_Integer) 4)));
    MR_Word Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), CheckInfo_20, (MR_Integer) 5)));
    MR_Word Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), CheckInfo_20, (MR_Integer) 6)));
    MR_Word Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), CheckInfo_20, (MR_Integer) 7)));
    MR_Word Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), CheckInfo_20, (MR_Integer) 8)));

    check_hlds__check_typeclass__get_matching_instance_defns_5_p_0(InstanceBody_33, PredOrFunc_37, MethodName_18, Arity_38, &MatchingInstanceMethods_39);
    if ((MatchingInstanceMethods_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *InstanceDefn_22 = InstanceDefn0_21;
      check_hlds__check_typeclass__report_undefined_method_7_p_0(ClassId_16, InstanceDefn0_21, PredOrFunc_37, MethodName_18, Arity_38, STATE_VARIABLE_Specs_0_63, STATE_VARIABLE_Specs_64);
      *STATE_VARIABLE_RevInstanceMethods_58 = STATE_VARIABLE_RevInstanceMethods_0_57;
      *STATE_VARIABLE_ModuleInfo_60 = STATE_VARIABLE_ModuleInfo_0_59;
      *STATE_VARIABLE_QualInfo_62 = STATE_VARIABLE_QualInfo_0_61;
    }
    else
    {
      MR_Word Var_106 = ((MR_Word) (MR_hl_field(MR_mktag(1), MatchingInstanceMethods_39, (MR_Integer) 1)));
      MR_Word Var_107 = ((MR_Word) (MR_hl_field(MR_mktag(1), MatchingInstanceMethods_39, (MR_Integer) 0)));

      if ((Var_106 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word TypeCtorInfo_105_105;
        MR_Word InstancePredDefn_43;
        MR_Word Context_45;
        MR_Word InstancePredId_46;
        MR_Word InstanceProcIds_47;
        MR_Word MakeClassProc_48;
        MR_Word InstancePredProcs1_51;
        MR_Word InstancePredProcs_53;
        MR_Word Var_75;
        MR_Word Var_41;
        MR_Word Var_42;
        MR_Integer Var_44;
        MR_Word Var_94;
        MR_Word Var_95;
        MR_Word Var_96;
        MR_Word Var_97;
        MR_Word Var_98;
        MR_Word Var_99;
        MR_Word Var_100;
        MR_Word Var_102;
        MR_Word Var_103;
        MR_Word Var_101;

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_RevInstanceMethods_58 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_107));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_RevInstanceMethods_0_57));
        }
        Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_107, (MR_Integer) 0)));
        Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_107, (MR_Integer) 1)));
        InstancePredDefn_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_107, (MR_Integer) 2)));
        Var_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_107, (MR_Integer) 3)));
        Context_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_107, (MR_Integer) 4)));
        check_hlds__check_typeclass__produce_auxiliary_procs_19_p_0(ClassId_16, ClassVars_17, MethodName_18, Markers_19, InstanceTypes_28, InstanceConstraints_32, InstanceVarSet_35, InstanceModuleName_27, InstancePredDefn_43, Context_45, &InstancePredId_46, &InstanceProcIds_47, CheckInfo_20, STATE_VARIABLE_ModuleInfo_0_59, STATE_VARIABLE_ModuleInfo_60, STATE_VARIABLE_QualInfo_0_61, STATE_VARIABLE_QualInfo_62, STATE_VARIABLE_Specs_0_63, STATE_VARIABLE_Specs_64);
        {
          MakeClassProc_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), MakeClassProc_48, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_8[2]));
          MR_hl_field(MR_mktag(0), MakeClassProc_48, 1) = ((MR_Box) (check_hlds__check_typeclass__check_instance_pred_procs_15_p_0_1));
          MR_hl_field(MR_mktag(0), MakeClassProc_48, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), MakeClassProc_48, 3) = ((MR_Box) (InstancePredId_46));
        }
        TypeCtorInfo_105_105 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
        mercury__list__map_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, TypeCtorInfo_105_105, MakeClassProc_48, InstanceProcIds_47, &InstancePredProcs1_51);
        if ((MaybeInstancePredProcs_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          InstancePredProcs_53 = InstancePredProcs1_51;
        else
        {
          MR_Word InstancePredProcs0_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeInstancePredProcs_34, (MR_Integer) 0)));

          InstancePredProcs_53 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_105_105, InstancePredProcs0_52, InstancePredProcs1_51);
        }
        {
          Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (InstancePredProcs_53));
        }
        Var_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn0_21, (MR_Integer) 0)));
        Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn0_21, (MR_Integer) 1)));
        Var_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn0_21, (MR_Integer) 2)));
        Var_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn0_21, (MR_Integer) 3)));
        Var_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn0_21, (MR_Integer) 4)));
        Var_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn0_21, (MR_Integer) 5)));
        Var_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn0_21, (MR_Integer) 6)));
        Var_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn0_21, (MR_Integer) 7)));
        Var_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn0_21, (MR_Integer) 8)));
        Var_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn0_21, (MR_Integer) 9)));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
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
  MR_Word STATE_VARIABLE_Specs_0_24,
  MR_Word * STATE_VARIABLE_Specs_25)
{
  {
    MR_Word InstanceVarSet_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_9, (MR_Integer) 8)));
    MR_Word InstanceTypes_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_9, (MR_Integer) 1)));
    MR_Word InstanceContext_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_9, (MR_Integer) 4)));
    MR_Word ClassName_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassId_8, (MR_Integer) 0)));
    MR_String ClassNameString_19;
    MR_String InstanceTypesString_20;
    MR_Word Pieces_21;
    MR_Word Msg_22;
    MR_Word Spec_23;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_String Var_30;
    MR_String Var_31;
    MR_String Var_33;
    MR_Word Var_35;
    MR_Word Var_38;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word Var_60;
    MR_Word Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_9, (MR_Integer) 0)));
    MR_Word Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_9, (MR_Integer) 2)));
    MR_Word Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_9, (MR_Integer) 3)));
    MR_Word Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_9, (MR_Integer) 5)));
    MR_Word Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_9, (MR_Integer) 6)));
    MR_Word Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_9, (MR_Integer) 7)));
    MR_Word Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_9, (MR_Integer) 9)));
    MR_Integer _ClassArity_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ClassId_8, (MR_Integer) 1)));

    ClassNameString_19 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ClassName_17);
    InstanceTypesString_20 = parse_tree__mercury_to_mercury__mercury_type_list_to_string_2_f_0(InstanceVarSet_14, InstanceTypes_15);
    Var_33 = mercury__string__f_43_43_2_f_0(InstanceTypesString_20, (MR_String) ")");
    Var_31 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_33);
    Var_30 = mercury__string__f_43_43_2_f_0(ClassNameString_19, Var_31);
    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(3), Var_29, 1) = ((MR_Box) (Var_30));
    }
    {
      Var_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
      MR_hl_field(MR_mktag(3), Var_42, 1) = ((MR_Box) (PredOrFunc_10));
    }
    {
      Var_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_48, 0) = ((MR_Box) (MethodName_11));
      MR_hl_field(MR_mktag(0), Var_48, 1) = ((MR_Box) (Arity_12));
    }
    {
      Var_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
      MR_hl_field(MR_mktag(3), Var_47, 1) = ((MR_Box) (Var_48));
    }
    {
      Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[23])));
    }
    {
      Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[119])));
      MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (Var_46));
    }
    {
      Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (Var_43));
    }
    {
      Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[121])));
      MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (Var_41));
    }
    {
      Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[92])));
      MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (Var_38));
    }
    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (Var_35));
    }
    {
      Pieces_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[91])));
      MR_hl_field(MR_mktag(1), Pieces_21, 1) = ((MR_Box) (Var_28));
    }
    {
      Var_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_56, 0) = ((MR_Box) (Pieces_21));
    }
    {
      Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (Var_56));
      MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Msg_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Msg_22, 0) = ((MR_Box) (InstanceContext_16));
      MR_hl_field(MR_mktag(0), Msg_22, 1) = ((MR_Box) (Var_55));
    }
    {
      Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (Msg_22));
      MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Spec_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), Spec_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
      MR_hl_field(MR_mktag(0), Spec_23, 2) = ((MR_Box) (Var_60));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_25 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_23));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_24));
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
    MR_Word conv0_LambdaHeadVar__2_83;

    check_hlds__check_typeclass__IntroducedFrom__pred__report_duplicate_method_defn__2082__1_2_p_0(((MR_Word) wrapper_arg_1), &conv0_LambdaHeadVar__2_83);
    *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_83));
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
    MR_Word InstanceVarSet_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_10, (MR_Integer) 8)));
    MR_Word InstanceTypes_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_10, (MR_Integer) 1)));
    MR_Word InstanceContext_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_10, (MR_Integer) 4)));
    MR_Word ClassName_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassId_9, (MR_Integer) 0)));
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
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_Word Var_94;
    MR_Word Var_95;
    MR_Word Var_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_10, (MR_Integer) 0)));
    MR_Word Var_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_10, (MR_Integer) 2)));
    MR_Word Var_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_10, (MR_Integer) 3)));
    MR_Word Var_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_10, (MR_Integer) 5)));
    MR_Word Var_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_10, (MR_Integer) 6)));
    MR_Word Var_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_10, (MR_Integer) 7)));
    MR_Word Var_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_10, (MR_Integer) 9)));
    MR_Integer _ClassArity_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ClassId_9, (MR_Integer) 1)));
    MR_Word Var_126;
    MR_Word Var_127;
    MR_Word Var_128;
    MR_Integer Var_129;

    ClassNameString_21 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ClassName_19);
    InstanceTypesString_22 = parse_tree__mercury_to_mercury__mercury_type_list_to_string_2_f_0(InstanceVarSet_16, InstanceTypes_17);
    Var_46 = mercury__string__f_43_43_2_f_0(InstanceTypesString_22, (MR_String) ")");
    Var_44 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_46);
    Var_43 = mercury__string__f_43_43_2_f_0(ClassNameString_21, Var_44);
    {
      Var_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(3), Var_42, 1) = ((MR_Box) (Var_43));
    }
    {
      Var_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
      MR_hl_field(MR_mktag(3), Var_55, 1) = ((MR_Box) (PredOrFunc_11));
    }
    {
      Var_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_61, 0) = ((MR_Box) (MethodName_12));
      MR_hl_field(MR_mktag(0), Var_61, 1) = ((MR_Box) (Arity_13));
    }
    {
      Var_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
      MR_hl_field(MR_mktag(3), Var_60, 1) = ((MR_Box) (Var_61));
    }
    {
      Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (Var_60));
      MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[23])));
    }
    {
      Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[119])));
      MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (Var_59));
    }
    {
      Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (Var_55));
      MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (Var_56));
    }
    {
      Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[118])));
      MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (Var_54));
    }
    {
      Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[92])));
      MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (Var_51));
    }
    {
      Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (Var_48));
    }
    {
      HeaderPieces_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeaderPieces_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[91])));
      MR_hl_field(MR_mktag(1), HeaderPieces_23, 1) = ((MR_Box) (Var_41));
    }
    {
      Var_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_69, 0) = ((MR_Box) (HeaderPieces_23));
    }
    {
      Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (Var_69));
      MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      HeadingMsg_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadingMsg_24, 0) = ((MR_Box) (InstanceContext_18));
      MR_hl_field(MR_mktag(0), HeadingMsg_24, 1) = ((MR_Box) (Var_68));
    }
    if ((MatchingInstanceMethods_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "check_hlds.check_typeclass", (MR_String) "predicate \140check_hlds.check_typeclass.report_duplicate_method_defn\'/8", (MR_String) "no matching instances");
        return;
      }
    }
    else
    {
      FirstInstance_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), MatchingInstanceMethods_14, (MR_Integer) 0)));
      LaterInstances_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), MatchingInstanceMethods_14, (MR_Integer) 1)));
    }
    Var_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), FirstInstance_25, (MR_Integer) 0)));
    Var_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), FirstInstance_25, (MR_Integer) 1)));
    Var_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), FirstInstance_25, (MR_Integer) 2)));
    Var_129 = ((MR_Integer) (MR_hl_field(MR_mktag(0), FirstInstance_25, (MR_Integer) 3)));
    FirstInstanceContext_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), FirstInstance_25, (MR_Integer) 4)));
    {
      FirstMsg_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), FirstMsg_29, 0) = ((MR_Box) (FirstInstanceContext_27));
      MR_hl_field(MR_mktag(0), FirstMsg_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[120])));
    }
    mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0, (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0, (MR_Word) &check_hlds__check_typeclass_scalar_common_2[6], LaterInstances_26, &LaterMsgs_35);
    {
      Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_95, 0) = ((MR_Box) (FirstMsg_29));
      MR_hl_field(MR_mktag(1), Var_95, 1) = ((MR_Box) (LaterMsgs_35));
    }
    {
      Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_94, 0) = ((MR_Box) (HeadingMsg_24));
      MR_hl_field(MR_mktag(1), Var_94, 1) = ((MR_Box) (Var_95));
    }
    {
      Spec_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), Spec_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
      MR_hl_field(MR_mktag(0), Spec_36, 2) = ((MR_Box) (Var_94));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
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
    MR_Integer conv1_LambdaHeadVar__2_121;
    MR_Word conv0_LambdaHeadVar__4_123;

    check_hlds__check_typeclass__IntroducedFrom__pred__produce_auxiliary_procs__974__1_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), &conv1_LambdaHeadVar__2_121, ((MR_Word) wrapper_arg_3), &conv0_LambdaHeadVar__4_123);
    *wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_121));
    *wrapper_arg_4 = ((MR_Box) (conv0_LambdaHeadVar__4_123));
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
  MR_Word STATE_VARIABLE_ModuleInfo_0_103,
  MR_Word * STATE_VARIABLE_ModuleInfo_104,
  MR_Word STATE_VARIABLE_QualInfo_0_105,
  MR_Word * STATE_VARIABLE_QualInfo_106,
  MR_Word STATE_VARIABLE_Specs_0_107,
  MR_Word * STATE_VARIABLE_Specs_108)
{
  {
    MR_Word TypeInfo_134_134;
    MR_Word TypeCtorInfo_137_137;
    MR_Word PredOrFunc_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), CheckInfo0_32, (MR_Integer) 0)));
    MR_Word PredName_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), CheckInfo0_32, (MR_Integer) 1)));
    MR_Integer Arity_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), CheckInfo0_32, (MR_Integer) 2)));
    MR_Word ExistQVars0_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), CheckInfo0_32, (MR_Integer) 3)));
    MR_Word ClassMethodClassContext0_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), CheckInfo0_32, (MR_Integer) 5)));
    MR_Word ArgModes_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), CheckInfo0_32, (MR_Integer) 6)));
    MR_Word TVarSet0_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), CheckInfo0_32, (MR_Integer) 7)));
    MR_Word InstanceStatus0_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), CheckInfo0_32, (MR_Integer) 8)));
    MR_Word UnsubstArgTypes_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), CheckInfo0_32, (MR_Integer) 4)));
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
    MR_Word PredInfo0_86;
    MR_Word PredInfo1_87;
    MR_Word PredInfo2_88;
    MR_Word AddProc_89;
    MR_Word PredInfo_99;
    MR_Word PredicateTable1_100;
    MR_Word PQInfo_101;
    MR_Word PredicateTable_102;
    MR_Word Var_109;
    MR_Word Var_110;
    MR_Word Var_111;
    MR_Word STATE_VARIABLE_ModuleInfo_116_116;
    MR_Box conv2_PredInfo_99;

    parse_tree__prog_data__tvarset_merge_renaming_4_p_0(TVarSet0_43, InstanceVarSet_26, &TVarSet1_46, &Renaming_47);
    parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(Renaming_47, InstanceTypes0_24, &InstanceTypes1_48);
    parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_p_0(Renaming_47, InstanceConstraints0_25, &InstanceConstraints1_49);
    TypeInfo_134_134 = (MR_Word) &check_hlds__check_typeclass_scalar_common_1[5];
    mercury__map__from_corresponding_lists_3_p_0(TypeInfo_134_134, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ClassVars_21, InstanceTypes1_48, &TypeSubst_50);
    parse_tree__prog_type_subst__apply_subst_to_type_list_3_p_0(TypeSubst_50, UnsubstArgTypes_45, &ArgTypes1_51);
    parse_tree__prog_type_subst__apply_subst_to_prog_constraints_3_p_0(TypeSubst_50, ClassMethodClassContext0_41, &ClassMethodClassContext1_52);
    parse_tree__prog_type__type_vars_list_2_p_0(ArgTypes1_51, &ArgTVars_53);
    parse_tree__prog_type__prog_constraints_get_tvars_2_p_0(ClassMethodClassContext1_52, &MethodContextTVars_54);
    parse_tree__prog_type__constraint_list_get_tvars_2_p_0(InstanceConstraints1_49, &InstanceTVars_55);
    {
      Var_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_111, 0) = ((MR_Box) (InstanceTVars_55));
      MR_hl_field(MR_mktag(1), Var_111, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_110, 0) = ((MR_Box) (MethodContextTVars_54));
      MR_hl_field(MR_mktag(1), Var_110, 1) = ((MR_Box) (Var_111));
    }
    {
      Var_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_109, 0) = ((MR_Box) (ArgTVars_53));
      MR_hl_field(MR_mktag(1), Var_109, 1) = ((MR_Box) (Var_110));
    }
    mercury__list__condense_2_p_0(TypeInfo_134_134, Var_109, &VarsToKeep0_56);
    mercury__list__sort_and_remove_dups_2_p_0(TypeInfo_134_134, VarsToKeep0_56, &VarsToKeep_57);
    mercury__varset__squash_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, TVarSet1_46, VarsToKeep_57, &TVarSet2_58, &SquashSubst_59);
    parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(SquashSubst_59, ArgTypes1_51, &ArgTypes_60);
    parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraints_3_p_0(SquashSubst_59, ClassMethodClassContext1_52, &ClassMethodClassContext_61);
    parse_tree__prog_type__apply_partial_map_to_list_3_p_0(TypeInfo_134_134, SquashSubst_59, ExistQVars0_39, &ExistQVars_62);
    parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(SquashSubst_59, InstanceTypes1_48, &InstanceTypes_63);
    parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_p_0(SquashSubst_59, InstanceConstraints1_49, &InstanceConstraints_64);
    UnivConstraints1_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassMethodClassContext_61, (MR_Integer) 0)));
    ExistConstraints_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassMethodClassContext_61, (MR_Integer) 1)));
    TypeCtorInfo_137_137 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
    mercury__list__append_3_p_1(TypeCtorInfo_137_137, InstanceConstraints_64, UnivConstraints1_65, &UnivConstraints_67);
    {
      ClassContext_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ClassContext_68, 0) = ((MR_Box) (UnivConstraints_67));
      MR_hl_field(MR_mktag(0), ClassContext_68, 1) = ((MR_Box) (ExistConstraints_66));
    }
    mercury__map__init_1_p_0(TypeCtorInfo_137_137, (MR_Word) &hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0, &Proofs_69);
    mercury__map__init_1_p_0((MR_Word) &hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_id_0, TypeCtorInfo_137_137, &ConstraintMap_70);
    hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 12, Markers0_23, &Markers1_71);
    if (((MR_tag((MR_Word) InstancePredDefn_28)) == (MR_mktag((MR_Integer) 1))))
      Markers_73 = Markers1_71;
    else
    {
      hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 13, Markers1_71, &Markers_73);
    }
    IsImported_75 = hlds__status__instance_status_is_imported_1_f_0(InstanceStatus0_44);
    switch (IsImported_75) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        InstanceStatus_76 = InstanceStatus0_44;
        break;
      case (MR_Integer) 1:
        {
          InstanceStatus_76 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        break;
    }
    parse_tree__prog_util__adjust_func_arity_3_p_0(PredOrFunc_36, Arity_38, &PredArity_77);
    hlds__make_hlds__produce_instance_method_clauses_16_p_0(InstancePredDefn_28, PredOrFunc_36, PredArity_77, ArgTypes_60, Markers_73, Context_29, InstanceStatus_76, &ClausesInfo_78, TVarSet2_58, &TVarSet_79, STATE_VARIABLE_ModuleInfo_0_103, &STATE_VARIABLE_ModuleInfo_116_116, STATE_VARIABLE_QualInfo_0_105, STATE_VARIABLE_QualInfo_106, STATE_VARIABLE_Specs_0_107, STATE_VARIABLE_Specs_108);
    {
      MethodConstraints_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), MethodConstraints_80, 0) = ((MR_Box) (ClassId_20));
      MR_hl_field(MR_mktag(0), MethodConstraints_80, 1) = ((MR_Box) (InstanceTypes_63));
      MR_hl_field(MR_mktag(0), MethodConstraints_80, 2) = ((MR_Box) (InstanceConstraints_64));
      MR_hl_field(MR_mktag(0), MethodConstraints_80, 3) = ((MR_Box) (ClassMethodClassContext_61));
    }
    {
      PredOrigin_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), PredOrigin_81, 0) = ((MR_Box) (MethodName_22));
      MR_hl_field(MR_mktag(1), PredOrigin_81, 1) = ((MR_Box) (MethodConstraints_80));
    }
    mercury__map__init_1_p_0((MR_Word) &check_hlds__check_typeclass_scalar_common_1[6], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, &VarNameRemap_82);
    OldImportStatus_83 = (MR_Word) InstanceStatus_76;
    PredStatus_84 = (MR_Word) OldImportStatus_83;
    hlds__hlds_pred__pred_info_init_19_p_0(InstanceModuleName_27, PredName_37, PredArity_77, PredOrFunc_36, Context_29, PredOrigin_81, PredStatus_84, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)), Markers_73, ArgTypes_60, TVarSet_79, ExistQVars_62, ClassContext_68, Proofs_69, ConstraintMap_70, ClausesInfo_78, VarNameRemap_82, &PredInfo0_86);
    hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(ClausesInfo_78, PredInfo0_86, &PredInfo1_87);
    hlds__hlds_pred__pred_info_set_instance_method_arg_types_3_p_0(UnsubstArgTypes_45, PredInfo1_87, &PredInfo2_88);
    {
      AddProc_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), AddProc_89, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_4[1]));
      MR_hl_field(MR_mktag(0), AddProc_89, 1) = ((MR_Box) (check_hlds__check_typeclass__produce_auxiliary_procs_19_p_0_1));
      MR_hl_field(MR_mktag(0), AddProc_89, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), AddProc_89, 3) = ((MR_Box) (Context_29));
      MR_hl_field(MR_mktag(0), AddProc_89, 4) = ((MR_Box) (PredArity_77));
    }
    mercury__list__map_foldl_5_p_0((MR_Word) &check_hlds__check_typeclass__check_hlds__check_typeclass__type_ctor_info_modes_and_detism_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, AddProc_89, ArgModes_42, InstanceProcIds_31, ((MR_Box) (PredInfo2_88)), &conv2_PredInfo_99);
    PredInfo_99 = ((MR_Word) conv2_PredInfo_99);
    hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_116_116, &PredicateTable1_100);
    hlds__hlds_module__module_info_get_partial_qualifier_info_2_p_0(STATE_VARIABLE_ModuleInfo_116_116, &PQInfo_101);
    hlds__pred_table__predicate_table_insert_qual_6_p_0(PredInfo_99, (MR_Integer) 1, PQInfo_101, PredId_30, PredicateTable1_100, &PredicateTable_102);
    hlds__hlds_module__module_info_set_predicate_table_3_p_0(PredicateTable_102, STATE_VARIABLE_ModuleInfo_116_116, STATE_VARIABLE_ModuleInfo_104);
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

    succeeded = check_hlds__check_typeclass__IntroducedFrom__pred__get_matching_instance_defns__846__1_2_p_0(((MR_Word) wrapper_arg_1), &conv1_LambdaHeadVar__2_43);
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

    succeeded = check_hlds__check_typeclass__IntroducedFrom__pred__get_matching_instance_defns__827__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) wrapper_arg_1));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_2(
  void * env_ptr_arg)
{
  {
    struct check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_env_0_s * env_ptr = (struct check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_env_0_s *) env_ptr_arg;

    MR_builtin_longjmp((env_ptr)->check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_4(
  void * env_ptr_arg)
{
  {
    struct check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_env_0_s * env_ptr = (struct check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_env_0_s *) env_ptr_arg;

    (env_ptr)->check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_env_0__DefnViaName_22 = ((MR_Word) (env_ptr)->check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_env_0__conv0_DefnViaName_22);
    check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_3(env_ptr);
  }
}

static void MR_CALL 
check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_3(
  void * env_ptr_arg)
{
  {
    struct check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_env_0_s * env_ptr = (struct check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_env_0_s *) env_ptr_arg;

    {
      MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_env_0__DefnViaName_22, (MR_Integer) 0)));
      MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_env_0__DefnViaName_22, (MR_Integer) 1)));
      MR_Integer Var_26;
      MR_Word Var_27;
      MR_Word Var_28;

      (env_ptr)->check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_env_0__InstanceProcDef_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_env_0__DefnViaName_22, (MR_Integer) 2)));
      Var_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), (env_ptr)->check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_env_0__DefnViaName_22, (MR_Integer) 3)));
      Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_env_0__DefnViaName_22, (MR_Integer) 4)));
      (env_ptr)->check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_env_0__succeeded = parse_tree__prog_data____Unify____instance_proc_def_0_0((env_ptr)->check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_env_0__InstanceProcDef_25, (env_ptr)->check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_env_0__InstanceProcDef_25);
      if ((env_ptr)->check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_env_0__succeeded)
      {
        (env_ptr)->check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_env_0__succeeded = ((MR_tag((MR_Word) (env_ptr)->check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_env_0__InstanceProcDef_25)) == (MR_mktag((MR_Integer) 0)));
        if ((env_ptr)->check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_env_0__succeeded)
        {
          Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_env_0__InstanceProcDef_25, (MR_Integer) 0)));
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
    struct check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_env_0_s * env_ptr = (struct check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_env_0_s *) env_ptr_arg;

    if (MR_builtin_setjmp((env_ptr)->check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_env_0__commit_0) == 0)
      {
        mercury__list__member_2_p_1((env_ptr)->check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_env_0__TypeCtorInfo_57_57, &(env_ptr)->check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_env_0__conv0_DefnViaName_22, (env_ptr)->check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_env_0__MatchingMethods_17, check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_4, env_ptr);
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

    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word InstanceMethods_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
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

      {
        Var_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_39, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_9[3]));
        MR_hl_field(MR_mktag(0), Var_39, 1) = ((MR_Box) (check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_1));
        MR_hl_field(MR_mktag(0), Var_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), Var_39, 3) = ((MR_Box) (PredOrFunc_2));
        MR_hl_field(MR_mktag(0), Var_39, 4) = ((MR_Box) (MethodName_3));
        MR_hl_field(MR_mktag(0), Var_39, 5) = ((MR_Box) (MethodArity_4));
      }
      (env).check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_env_0__TypeCtorInfo_57_57 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0;
      mercury__list__filter_3_p_0((env).check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_env_0__TypeCtorInfo_57_57, Var_39, InstanceMethods_9, &(env).check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_env_0__MatchingMethods_17);
      (env).check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_env_0__succeeded = ((MR_tag((MR_Word) (env).check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_env_0__MatchingMethods_17)) == (MR_mktag((MR_Integer) 1)));
      if ((env).check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_env_0__succeeded)
      {
        First_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), (env).check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_env_0__MatchingMethods_17, (MR_Integer) 0)));
        Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), (env).check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_env_0__MatchingMethods_17, (MR_Integer) 1)));
        (env).check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_env_0__succeeded = ((MR_tag((MR_Word) Var_41)) == (MR_mktag((MR_Integer) 1)));
        if ((env).check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_env_0__succeeded)
        {
          _Second_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_41, (MR_Integer) 0)));
          Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_41, (MR_Integer) 1)));
          Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), First_18, (MR_Integer) 0)));
          Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), First_18, (MR_Integer) 1)));
          Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), First_18, (MR_Integer) 2)));
          Var_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), First_18, (MR_Integer) 3)));
          FirstContext_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), First_18, (MR_Integer) 4)));
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

        mercury__list__filter_map_3_p_0((env).check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_env_0__TypeCtorInfo_57_57, (MR_Word) &check_hlds__check_typeclass_scalar_common_1[4], (MR_Word) &check_hlds__check_typeclass_scalar_common_2[5], (env).check_hlds__check_typeclass__get_matching_instance_defns_5_p_0_env_0__MatchingMethods_17, &ClausesList_36);
        mercury__list__condense_2_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0, ClausesList_36, &FlattenedClauses_37);
        {
          Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (FlattenedClauses_37));
        }
        {
          CombinedMethod_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), CombinedMethod_38, 0) = ((MR_Box) (PredOrFunc_2));
          MR_hl_field(MR_mktag(0), CombinedMethod_38, 1) = ((MR_Box) (MethodName_3));
          MR_hl_field(MR_mktag(0), CombinedMethod_38, 2) = ((MR_Box) (Var_44));
          MR_hl_field(MR_mktag(0), CombinedMethod_38, 3) = ((MR_Box) (MethodArity_4));
          MR_hl_field(MR_mktag(0), CombinedMethod_38, 4) = ((MR_Box) (FirstContext_21));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__5_5 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (CombinedMethod_38));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
    struct check_hlds__check_typeclass__method_is_known_3_p_0_env_0_s * env_ptr = (struct check_hlds__check_typeclass__method_is_known_3_p_0_env_0_s *) env_ptr_arg;

    MR_builtin_longjmp((env_ptr)->check_hlds__check_typeclass__method_is_known_3_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
check_hlds__check_typeclass__method_is_known_3_p_0_3(
  void * env_ptr_arg)
{
  {
    struct check_hlds__check_typeclass__method_is_known_3_p_0_env_0_s * env_ptr = (struct check_hlds__check_typeclass__method_is_known_3_p_0_env_0_s *) env_ptr_arg;

    (env_ptr)->check_hlds__check_typeclass__method_is_known_3_p_0_env_0__PredId_16 = ((MR_Word) (env_ptr)->check_hlds__check_typeclass__method_is_known_3_p_0_env_0__conv0_PredId_16);
    check_hlds__check_typeclass__method_is_known_3_p_0_2(env_ptr);
  }
}

static void MR_CALL 
check_hlds__check_typeclass__method_is_known_3_p_0_2(
  void * env_ptr_arg)
{
  {
    struct check_hlds__check_typeclass__method_is_known_3_p_0_env_0_s * env_ptr = (struct check_hlds__check_typeclass__method_is_known_3_p_0_env_0_s *) env_ptr_arg;

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
    struct check_hlds__check_typeclass__method_is_known_3_p_0_env_0_s * env_ptr = (struct check_hlds__check_typeclass__method_is_known_3_p_0_env_0_s *) env_ptr_arg;

    if (MR_builtin_setjmp((env_ptr)->check_hlds__check_typeclass__method_is_known_3_p_0_env_0__commit_0) == 0)
      {
        (env_ptr)->check_hlds__check_typeclass__method_is_known_3_p_0_env_0__TypeCtorInfo_17_17 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
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
      MR_Word MethodPredOrFunc_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Method_6, (MR_Integer) 0)));
      MR_Word MethodName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Method_6, (MR_Integer) 1)));
      MR_Integer MethodArity_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Method_6, (MR_Integer) 3)));
      MR_Integer MethodPredArity_12;
      MR_Word _MethodDefn_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Method_6, (MR_Integer) 2)));
      MR_Word _Context_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Method_6, (MR_Integer) 4)));

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
    MR_Word TermContext_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InstanceDefn_0_38, (MR_Integer) 4)));
    MR_Word InstanceBody_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InstanceDefn_0_38, (MR_Integer) 6)));
    MR_Word STATE_VARIABLE_InstanceDefn_46_46;
    MR_Word STATE_VARIABLE_Specs_49_49;
    MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InstanceDefn_0_38, (MR_Integer) 0)));
    MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InstanceDefn_0_38, (MR_Integer) 1)));
    MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InstanceDefn_0_38, (MR_Integer) 2)));
    MR_Word Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InstanceDefn_0_38, (MR_Integer) 3)));
    MR_Word Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InstanceDefn_0_38, (MR_Integer) 5)));
    MR_Word Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InstanceDefn_0_38, (MR_Integer) 7)));
    MR_Word Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InstanceDefn_0_38, (MR_Integer) 8)));
    MR_Word Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InstanceDefn_0_38, (MR_Integer) 9)));

    if ((InstanceBody_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      STATE_VARIABLE_InstanceDefn_46_46 = STATE_VARIABLE_InstanceDefn_0_38;
      *STATE_VARIABLE_ModuleInfo_41 = STATE_VARIABLE_ModuleInfo_0_40;
      *STATE_VARIABLE_QualInfo_43 = STATE_VARIABLE_QualInfo_0_42;
      STATE_VARIABLE_Specs_49_49 = STATE_VARIABLE_Specs_0_44;
    }
    else
    {
      MR_Word InstanceMethods_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), InstanceBody_33, (MR_Integer) 0)));

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
  MR_Word STATE_VARIABLE_Specs_0_55,
  MR_Word * STATE_VARIABLE_Specs_56)
{
  {
    MR_Word ModuleName_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn0_15, (MR_Integer) 0)));
    MR_Word InstanceTypes_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn0_15, (MR_Integer) 1)));
    MR_Word OriginalTypes_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn0_15, (MR_Integer) 2)));
    MR_Word Status_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn0_15, (MR_Integer) 3)));
    MR_Word Context_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn0_15, (MR_Integer) 4)));
    MR_Word InstanceProgConstraints_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn0_15, (MR_Integer) 5)));
    MR_Word Body_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn0_15, (MR_Integer) 6)));
    MR_Word Interface_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn0_15, (MR_Integer) 7)));
    MR_Word InstanceVarSet0_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn0_15, (MR_Integer) 8)));
    MR_Word Proofs0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn0_15, (MR_Integer) 9)));
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
    MR_Word Var_90;
    MR_Word Var_91;
    MR_Word Var_92;

    parse_tree__prog_data__tvarset_merge_renaming_4_p_0(InstanceVarSet0_26, ClassVarSet_13, &InstanceVarSet1_28, &Renaming_29);
    parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_p_0(Renaming_29, ProgSuperClasses0_11, &ProgSuperClasses_30);
    parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_p_0(Renaming_29, ClassVars0_12, &ClassVars_31);
    mercury__map__from_corresponding_lists_3_p_0((MR_Word) &check_hlds__check_typeclass_scalar_common_1[5], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ClassVars_31, InstanceTypes_19, &TypeSubst_32);
    hlds__hlds_module__module_info_get_class_table_2_p_0(ModuleInfo_14, &ClassTable_33);
    hlds__hlds_module__module_info_get_instance_table_2_p_0(ModuleInfo_14, &InstanceTable_34);
    hlds__hlds_class__init_hlds_constraint_list_2_p_0(ProgSuperClasses_30, &SuperClasses_35);
    hlds__hlds_class__init_hlds_constraint_list_2_p_0(InstanceProgConstraints_23, &InstanceConstraints_36);
    hlds__hlds_class__make_hlds_constraints_5_p_0(ClassTable_33, InstanceVarSet1_28, SuperClasses_35, InstanceConstraints_36, &Constraints0_37);
    mercury__map__init_1_p_0((MR_Word) &hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_id_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, &ConstraintMap0_38);
    check_hlds__typeclasses__reduce_context_by_rule_application_13_p_0(ClassTable_33, InstanceTable_34, ClassVars_31, TypeSubst_32, &Var_39, InstanceVarSet1_28, &InstanceVarSet2_40, Proofs0_27, &Proofs1_41, ConstraintMap0_38, &Var_42, Constraints0_37, &Constraints_43);
    UnprovenConstraints_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), Constraints_43, (MR_Integer) 0)));
    Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), Constraints_43, (MR_Integer) 1)));
    Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), Constraints_43, (MR_Integer) 2)));
    Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), Constraints_43, (MR_Integer) 3)));
    if ((UnprovenConstraints_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
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
      *STATE_VARIABLE_Specs_56 = STATE_VARIABLE_Specs_0_55;
    }
    else
    {
      MR_Word UnprovenConstraintsTail_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), UnprovenConstraints_44, (MR_Integer) 1)));
      MR_Word ClassName_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassId_10, (MR_Integer) 0)));
      MR_String ClassNameString_49;
      MR_String InstanceTypesString_50;
      MR_String ConstraintsString_51;
      MR_Word Pieces_52;
      MR_Word Msg_53;
      MR_Word Spec_54;
      MR_Word Var_59;
      MR_Word Var_60;
      MR_String Var_61;
      MR_String Var_62;
      MR_String Var_64;
      MR_Word Var_66;
      MR_Word Var_67;
      MR_String Var_68;
      MR_Word Var_71;
      MR_Word Var_74;
      MR_Word Var_75;
      MR_Word Var_82;
      MR_Word Var_83;
      MR_Word Var_87;
      MR_Word C_101;
      MR_Word Cs_102;
      MR_Word P_104;
      MR_String String0_105;
      MR_String String1_106;
      MR_Word Var_107;
      MR_Word Var_109;
      MR_Word Var_110;
      MR_Word Var_112;
      MR_Word Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), UnprovenConstraints_44, (MR_Integer) 0)));
      MR_Integer _ClassArity_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ClassId_10, (MR_Integer) 1)));
      MR_Box conv0_Var_68;

      ClassNameString_49 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ClassName_47);
      InstanceTypesString_50 = parse_tree__mercury_to_mercury__mercury_type_list_to_string_2_f_0(InstanceVarSet2_40, InstanceTypes_19);
      C_101 = ((MR_Word) (MR_hl_field(MR_mktag(1), UnprovenConstraints_44, (MR_Integer) 0)));
      Cs_102 = ((MR_Word) (MR_hl_field(MR_mktag(1), UnprovenConstraints_44, (MR_Integer) 1)));
      hlds__hlds_class__retrieve_prog_constraint_2_p_0(C_101, &P_104);
      String0_105 = parse_tree__mercury_to_mercury__mercury_constraint_to_string_2_f_0(ClassVarSet_13, P_104);
      check_hlds__check_typeclass__constraint_list_to_string_2_3_p_0(ClassVarSet_13, Cs_102, &String1_106);
      {
        Var_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_112, 0) = ((MR_Box) (String1_106));
        MR_hl_field(MR_mktag(1), Var_112, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Var_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_110, 0) = ((MR_Box) ((MR_String) "\'"));
        MR_hl_field(MR_mktag(1), Var_110, 1) = ((MR_Box) (Var_112));
      }
      {
        Var_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_109, 0) = ((MR_Box) (String0_105));
        MR_hl_field(MR_mktag(1), Var_109, 1) = ((MR_Box) (Var_110));
      }
      {
        Var_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_107, 0) = ((MR_Box) ((MR_String) "\140"));
        MR_hl_field(MR_mktag(1), Var_107, 1) = ((MR_Box) (Var_109));
      }
      mercury__string__append_list_2_p_0(Var_107, &ConstraintsString_51);
      Var_64 = mercury__string__f_43_43_2_f_0(InstanceTypesString_50, (MR_String) ")");
      Var_62 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_64);
      Var_61 = mercury__string__f_43_43_2_f_0(ClassNameString_49, Var_62);
      {
        Var_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
        MR_hl_field(MR_mktag(3), Var_60, 1) = ((MR_Box) (Var_61));
      }
      conv0_Var_68 = parse_tree__error_util__choose_number_3_f_0((MR_Word) &hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, UnprovenConstraintsTail_46, ((MR_Box) ((MR_String) "superclass constraint")), ((MR_Box) ((MR_String) "superclass constraints")));
      Var_68 = ((MR_String) conv0_Var_68);
      {
        Var_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
        MR_hl_field(MR_mktag(3), Var_67, 1) = ((MR_Box) (Var_68));
      }
      {
        Var_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_75, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
        MR_hl_field(MR_mktag(3), Var_75, 1) = ((MR_Box) (ConstraintsString_51));
      }
      {
        Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (Var_75));
        MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[23])));
      }
      {
        Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[117])));
        MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) (Var_74));
      }
      {
        Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (Var_67));
        MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) (Var_71));
      }
      {
        Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (Var_60));
        MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (Var_66));
      }
      {
        Pieces_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[91])));
        MR_hl_field(MR_mktag(1), Pieces_52, 1) = ((MR_Box) (Var_59));
      }
      {
        Var_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_83, 0) = ((MR_Box) (Pieces_52));
      }
      {
        Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_82, 0) = ((MR_Box) (Var_83));
        MR_hl_field(MR_mktag(1), Var_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Msg_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Msg_53, 0) = ((MR_Box) (Context_22));
        MR_hl_field(MR_mktag(0), Msg_53, 1) = ((MR_Box) (Var_82));
      }
      {
        Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_87, 0) = ((MR_Box) (Msg_53));
        MR_hl_field(MR_mktag(1), Var_87, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Spec_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), Spec_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
        MR_hl_field(MR_mktag(0), Spec_54, 2) = ((MR_Box) (Var_87));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_56 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_54));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_55));
      }
      *InstanceDefn_16 = InstanceDefn0_15;
    }
  }
}

static void MR_CALL 
check_hlds__check_typeclass__constraint_list_to_string_2_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_String * HeadVar__3_3)
{
  if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *HeadVar__3_3 = (MR_String) "";
  else
  {
    MR_Word C_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
    MR_Word Cs_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
    MR_Word P_9;
    MR_String String0_10;
    MR_String String1_11;
    MR_Word Var_12;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Word Var_17;

    hlds__hlds_class__retrieve_prog_constraint_2_p_0(C_6, &P_9);
    String0_10 = parse_tree__mercury_to_mercury__mercury_constraint_to_string_2_f_0(HeadVar__1_1, P_9);
    check_hlds__check_typeclass__constraint_list_to_string_2_3_p_0(HeadVar__1_1, Cs_7, &String1_11);
    {
      Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (String1_11));
      MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_15, 0) = ((MR_Box) ((MR_String) "\'"));
      MR_hl_field(MR_mktag(1), Var_15, 1) = ((MR_Box) (Var_17));
    }
    {
      Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_14, 0) = ((MR_Box) (String0_10));
      MR_hl_field(MR_mktag(1), Var_14, 1) = ((MR_Box) (Var_15));
    }
    {
      Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_12, 0) = ((MR_Box) ((MR_String) ", \140"));
      MR_hl_field(MR_mktag(1), Var_12, 1) = ((MR_Box) (Var_14));
    }
    mercury__string__append_list_2_p_0(Var_12, HeadVar__3_3);
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

    check_hlds__check_typeclass__check_instance_pred_14_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv4_InstanceDefn_20, ((MR_Word) wrapper_arg_4), &conv3_STATE_VARIABLE_RevOrderedMethods_69, ((MR_Word) wrapper_arg_6), &conv2_STATE_VARIABLE_ModuleInfo_71, ((MR_Word) wrapper_arg_8), &conv1_STATE_VARIABLE_QualInfo_73, ((MR_Word) wrapper_arg_10), &conv0_STATE_VARIABLE_Specs_75);
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
  MR_Word STATE_VARIABLE_InstanceDefn_0_39,
  MR_Word * STATE_VARIABLE_InstanceDefn_40,
  MR_Word STATE_VARIABLE_ModuleInfo_0_41,
  MR_Word * STATE_VARIABLE_ModuleInfo_42,
  MR_Word STATE_VARIABLE_QualInfo_0_43,
  MR_Word * STATE_VARIABLE_QualInfo_44,
  MR_Word STATE_VARIABLE_Specs_0_45,
  MR_Word * STATE_VARIABLE_Specs_46)
{
  if ((ClassInterface_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    MR_Word ClassName_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassId_16, (MR_Integer) 0)));
    MR_Integer ClassArity_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ClassId_16, (MR_Integer) 1)));
    MR_Word Pieces_29;
    MR_Word Msg_30;
    MR_Word Spec_31;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Word Var_69;
    MR_Word Var_70;
    MR_Word Var_74;

    {
      Var_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_62, 0) = ((MR_Box) (ClassName_27));
      MR_hl_field(MR_mktag(0), Var_62, 1) = ((MR_Box) (ClassArity_28));
    }
    {
      Var_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
      MR_hl_field(MR_mktag(3), Var_61, 1) = ((MR_Box) (Var_62));
    }
    {
      Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (Var_61));
      MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[23])));
    }
    {
      Pieces_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[116])));
      MR_hl_field(MR_mktag(1), Pieces_29, 1) = ((MR_Box) (Var_60));
    }
    {
      Var_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_70, 0) = ((MR_Box) (Pieces_29));
    }
    {
      Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (Var_70));
      MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Msg_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Msg_30, 0) = ((MR_Box) (TermContext_21));
      MR_hl_field(MR_mktag(0), Msg_30, 1) = ((MR_Box) (Var_69));
    }
    {
      Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (Msg_30));
      MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Spec_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), Spec_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
      MR_hl_field(MR_mktag(0), Spec_31, 2) = ((MR_Box) (Var_74));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_46 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_31));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_45));
    }
    *STATE_VARIABLE_InstanceDefn_40 = STATE_VARIABLE_InstanceDefn_0_39;
    *STATE_VARIABLE_ModuleInfo_42 = STATE_VARIABLE_ModuleInfo_0_41;
    *STATE_VARIABLE_QualInfo_44 = STATE_VARIABLE_QualInfo_0_43;
  }
  else
  {
    MR_Word RevInstanceMethods_33;
    MR_Word MaybePredProcs1_34;
    MR_Word MaybePredProcs_36;
    MR_Word OrderedInstanceMethods_37;
    MR_Word Context_38;
    MR_Word Var_47;
    MR_Word STATE_VARIABLE_InstanceDefn_48_48;
    MR_Word STATE_VARIABLE_Specs_52_52;
    MR_Word Var_56;
    MR_Word Var_86;
    MR_Word Var_87;
    MR_Word Var_88;
    MR_Word Var_89;
    MR_Word Var_90;
    MR_Word Var_91;
    MR_Word Var_94;
    MR_Word Var_95;
    MR_Box conv9_STATE_VARIABLE_InstanceDefn_48_48;
    MR_Box conv8_RevInstanceMethods_33;
    MR_Box conv7_STATE_VARIABLE_ModuleInfo_42;
    MR_Box conv6_STATE_VARIABLE_QualInfo_44;
    MR_Box conv5_STATE_VARIABLE_Specs_52_52;
    MR_Word Var_77;
    MR_Word Var_78;
    MR_Word Var_79;
    MR_Word Var_80;
    MR_Word Var_81;
    MR_Word Var_82;
    MR_Word Var_83;
    MR_Word Var_84;
    MR_Word Var_85;
    MR_Word Var_92;
    MR_Word Var_93;

    {
      Var_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_12[0]));
      MR_hl_field(MR_mktag(0), Var_47, 1) = ((MR_Box) (check_hlds__check_typeclass__check_concrete_class_instance_15_p_0_1));
      MR_hl_field(MR_mktag(0), Var_47, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_47, 3) = ((MR_Box) (ClassId_16));
      MR_hl_field(MR_mktag(0), Var_47, 4) = ((MR_Box) (Vars_17));
      MR_hl_field(MR_mktag(0), Var_47, 5) = ((MR_Box) (HLDSClassInterface_18));
    }
    mercury__list__foldl5_12_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0, (MR_Word) &check_hlds__check_typeclass_scalar_common_1[3], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &hlds__make_hlds__hlds__make_hlds__type_ctor_info_make_hlds_qual_info_0, (MR_Word) &check_hlds__check_typeclass_scalar_common_1[1], Var_47, ClassPredIds_20, ((MR_Box) (STATE_VARIABLE_InstanceDefn_0_39)), &conv9_STATE_VARIABLE_InstanceDefn_48_48, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &conv8_RevInstanceMethods_33, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_41)), &conv7_STATE_VARIABLE_ModuleInfo_42, ((MR_Box) (STATE_VARIABLE_QualInfo_0_43)), &conv6_STATE_VARIABLE_QualInfo_44, ((MR_Box) (STATE_VARIABLE_Specs_0_45)), &conv5_STATE_VARIABLE_Specs_52_52);
    STATE_VARIABLE_InstanceDefn_48_48 = ((MR_Word) conv9_STATE_VARIABLE_InstanceDefn_48_48);
    RevInstanceMethods_33 = ((MR_Word) conv8_RevInstanceMethods_33);
    *STATE_VARIABLE_ModuleInfo_42 = ((MR_Word) conv7_STATE_VARIABLE_ModuleInfo_42);
    *STATE_VARIABLE_QualInfo_44 = ((MR_Word) conv6_STATE_VARIABLE_QualInfo_44);
    STATE_VARIABLE_Specs_52_52 = ((MR_Word) conv5_STATE_VARIABLE_Specs_52_52);
    Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InstanceDefn_48_48, (MR_Integer) 0)));
    Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InstanceDefn_48_48, (MR_Integer) 1)));
    Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InstanceDefn_48_48, (MR_Integer) 2)));
    Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InstanceDefn_48_48, (MR_Integer) 3)));
    Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InstanceDefn_48_48, (MR_Integer) 4)));
    Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InstanceDefn_48_48, (MR_Integer) 5)));
    Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InstanceDefn_48_48, (MR_Integer) 6)));
    MaybePredProcs1_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InstanceDefn_48_48, (MR_Integer) 7)));
    Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InstanceDefn_48_48, (MR_Integer) 8)));
    Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InstanceDefn_48_48, (MR_Integer) 9)));
    if ((MaybePredProcs1_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MaybePredProcs_36 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_13[0]);
    }
    else
      MaybePredProcs_36 = MaybePredProcs1_34;
    OrderedInstanceMethods_37 = mercury__list__reverse_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0, RevInstanceMethods_33);
    Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InstanceDefn_48_48, (MR_Integer) 0)));
    Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InstanceDefn_48_48, (MR_Integer) 1)));
    Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InstanceDefn_48_48, (MR_Integer) 2)));
    Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InstanceDefn_48_48, (MR_Integer) 3)));
    Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InstanceDefn_48_48, (MR_Integer) 4)));
    Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InstanceDefn_48_48, (MR_Integer) 5)));
    Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InstanceDefn_48_48, (MR_Integer) 6)));
    Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InstanceDefn_48_48, (MR_Integer) 7)));
    Var_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InstanceDefn_48_48, (MR_Integer) 8)));
    Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_InstanceDefn_48_48, (MR_Integer) 9)));
    {
      Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (OrderedInstanceMethods_37));
    }
    Context_38 = Var_90;
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_InstanceDefn_40 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_86));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_87));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_88));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_89));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Context_38));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_91));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_56));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (MaybePredProcs_36));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_94));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_95));
    }
    check_hlds__check_typeclass__check_for_unknown_methods_7_p_0(InstanceMethods_22, ClassId_16, ClassPredIds_20, Context_38, *STATE_VARIABLE_ModuleInfo_42, STATE_VARIABLE_Specs_52_52, STATE_VARIABLE_Specs_46);
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

    succeeded = check_hlds__check_typeclass__method_is_known_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1));
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
      Var_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_8[1]));
      MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (check_hlds__check_typeclass__check_for_unknown_methods_7_p_0_1));
      MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (PredTable_14));
      MR_hl_field(MR_mktag(0), Var_21, 4) = ((MR_Box) (ClassPredIds_10));
    }
    mercury__list__filter_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0, Var_21, InstanceMethods_8, &_KnownInstanceMethods_15, &UnknownInstanceMethods_16);
    if ((UnknownInstanceMethods_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_Specs_20 = STATE_VARIABLE_Specs_0_19;
    else
    {
      MR_Word HeadMethod_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), UnknownInstanceMethods_16, (MR_Integer) 0)));
      MR_Word TailMethods_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), UnknownInstanceMethods_16, (MR_Integer) 1)));

      check_hlds__check_typeclass__report_unknown_instance_methods_6_p_0(ClassId_9, HeadMethod_17, TailMethods_18, Context_11, STATE_VARIABLE_Specs_0_19, STATE_VARIABLE_Specs_20);
    }
  }
}

static void MR_CALL 
check_hlds__check_typeclass__report_unknown_instance_methods_6_p_0(
  MR_Word ClassId_7,
  MR_Word HeadMethod_8,
  MR_Word TailMethods_9,
  MR_Word Context_10,
  MR_Word STATE_VARIABLE_Specs_0_27,
  MR_Word * STATE_VARIABLE_Specs_28)
{
  {
    MR_Word ClassName_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassId_7, (MR_Integer) 0)));
    MR_Integer ClassArity_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ClassId_7, (MR_Integer) 1)));
    MR_Word Pieces_20;
    MR_Word Msg_25;
    MR_Word Spec_26;
    MR_Word Var_70;
    MR_Word Var_71;
    MR_Word Var_75;

    if ((TailMethods_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word HeadPredOrFunc_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadMethod_8, (MR_Integer) 0)));
      MR_Word HeadMethodName_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadMethod_8, (MR_Integer) 1)));
      MR_Integer HeadArity_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadMethod_8, (MR_Integer) 3)));
      MR_Integer HeadPredArity_19;
      MR_Word Var_45;
      MR_Word Var_46;
      MR_Word Var_47;
      MR_Word Var_48;
      MR_Word Var_51;
      MR_Word Var_53;
      MR_Word Var_56;
      MR_Word Var_57;
      MR_Word Var_58;
      MR_Word Var_61;
      MR_Word Var_62;
      MR_Word Var_63;
      MR_Word _Defn_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadMethod_8, (MR_Integer) 2)));
      MR_Word _Context_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadMethod_8, (MR_Integer) 4)));

      parse_tree__prog_util__adjust_func_arity_3_p_0(HeadPredOrFunc_14, HeadArity_17, &HeadPredArity_19);
      {
        Var_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (ClassName_12));
        MR_hl_field(MR_mktag(0), Var_47, 1) = ((MR_Box) (ClassArity_13));
      }
      {
        Var_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
        MR_hl_field(MR_mktag(3), Var_46, 1) = ((MR_Box) (Var_47));
      }
      {
        Var_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
        MR_hl_field(MR_mktag(3), Var_57, 1) = ((MR_Box) (HeadPredOrFunc_14));
      }
      {
        Var_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_63, 0) = ((MR_Box) (HeadMethodName_15));
        MR_hl_field(MR_mktag(0), Var_63, 1) = ((MR_Box) (HeadPredArity_19));
      }
      {
        Var_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_62, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
        MR_hl_field(MR_mktag(3), Var_62, 1) = ((MR_Box) (Var_63));
      }
      {
        Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (Var_62));
        MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[23])));
      }
      {
        Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[115])));
        MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (Var_61));
      }
      {
        Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (Var_57));
        MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (Var_58));
      }
      {
        Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[114])));
        MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Var_56));
      }
      {
        Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
        MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (Var_53));
      }
      {
        Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[92])));
        MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (Var_51));
      }
      {
        Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (Var_46));
        MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (Var_48));
      }
      {
        Pieces_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[91])));
        MR_hl_field(MR_mktag(1), Pieces_20, 1) = ((MR_Box) (Var_45));
      }
    }
    else
    {
      MR_Word Pieces1_23;
      MR_Word Pieces2_24;
      MR_Word Var_31;
      MR_Word Var_32;
      MR_Word Var_33;

      {
        Var_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_33, 0) = ((MR_Box) (ClassName_12));
        MR_hl_field(MR_mktag(0), Var_33, 1) = ((MR_Box) (ClassArity_13));
      }
      {
        Var_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
        MR_hl_field(MR_mktag(3), Var_32, 1) = ((MR_Box) (Var_33));
      }
      {
        Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (Var_32));
        MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[90])));
      }
      {
        Pieces1_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces1_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[91])));
        MR_hl_field(MR_mktag(1), Pieces1_23, 1) = ((MR_Box) (Var_31));
      }
      check_hlds__check_typeclass__format_method_names_3_p_0(HeadMethod_8, TailMethods_9, &Pieces2_24);
      Pieces_20 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, Pieces1_23, Pieces2_24);
    }
    {
      Var_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_71, 0) = ((MR_Box) (Pieces_20));
    }
    {
      Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (Var_71));
      MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Msg_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Msg_25, 0) = ((MR_Box) (Context_10));
      MR_hl_field(MR_mktag(0), Msg_25, 1) = ((MR_Box) (Var_70));
    }
    {
      Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (Msg_25));
      MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Spec_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), Spec_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
      MR_hl_field(MR_mktag(0), Spec_26, 2) = ((MR_Box) (Var_75));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_28 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_26));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_27));
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
    MR_Word PredOrFunc_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadMethod_4, (MR_Integer) 0)));
    MR_Word Name_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadMethod_4, (MR_Integer) 1)));
    MR_Integer Arity_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadMethod_4, (MR_Integer) 3)));
    MR_Integer PredArity_12;
    MR_Word _Defn_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadMethod_4, (MR_Integer) 2)));
    MR_Word _Context_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadMethod_4, (MR_Integer) 4)));

    parse_tree__prog_util__adjust_func_arity_3_p_0(PredOrFunc_7, Arity_10, &PredArity_12);
    if ((TailMethods_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word Var_28;
      MR_Word Var_29;
      MR_Word Var_30;
      MR_Word Var_31;

      {
        Var_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
        MR_hl_field(MR_mktag(3), Var_28, 1) = ((MR_Box) (PredOrFunc_7));
      }
      {
        Var_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (Name_8));
        MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) (PredArity_12));
      }
      {
        Var_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
        MR_hl_field(MR_mktag(3), Var_30, 1) = ((MR_Box) (Var_31));
      }
      {
        Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (Var_30));
        MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[23])));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *Pieces_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_28));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_29));
      }
    }
    else
    {
      MR_Word HeadTailMethod_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), TailMethods_5, (MR_Integer) 0)));
      MR_Word TailTailMethods_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), TailMethods_5, (MR_Integer) 1)));
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
        Var_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
        MR_hl_field(MR_mktag(3), Var_16, 1) = ((MR_Box) (PredOrFunc_7));
      }
      {
        Var_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (Name_8));
        MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) (PredArity_12));
      }
      {
        Var_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
        MR_hl_field(MR_mktag(3), Var_18, 1) = ((MR_Box) (Var_19));
      }
      {
        Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
        MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (TailPieces_15));
      }
      {
        Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[113])));
        MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (Var_26));
      }
      {
        Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[112])));
        MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (Var_23));
      }
      {
        Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (Var_18));
        MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (Var_20));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
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

    check_hlds__check_typeclass__check_class_instance_15_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 8))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 9))), ((MR_Word) wrapper_arg_1), &conv5_STATE_VARIABLE_InstanceDefn_39, ((MR_Word) wrapper_arg_3), &conv4_STATE_VARIABLE_ModuleInfo_41, ((MR_Word) wrapper_arg_5), &conv3_STATE_VARIABLE_QualInfo_43, ((MR_Word) wrapper_arg_7), &conv2_STATE_VARIABLE_Specs_45);
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

    conv1_HeadVar__2_2 = hlds__hlds_pred__pred_proc_id_project_pred_id_1_f_0(((MR_Word) wrapper_arg_1));
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
  MR_Word STATE_VARIABLE_ModuleInfo_0_36,
  MR_Word * STATE_VARIABLE_ModuleInfo_37,
  MR_Word STATE_VARIABLE_QualInfo_0_38,
  MR_Word * STATE_VARIABLE_QualInfo_39,
  MR_Word STATE_VARIABLE_Specs_0_40,
  MR_Word * STATE_VARIABLE_Specs_41)
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
    MR_Word TermContext_28;
    MR_Box conv0_ClassDefn_18;
    MR_Word _FunDeps_21;
    MR_Word _Ancestors_22;
    MR_Word _Kinds_24;
    MR_Word Var_42;

    mercury__map__lookup_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0, (MR_Word) &hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0, ClassTable_11, ((MR_Box) (ClassId_12)), &conv0_ClassDefn_18);
    ClassDefn_18 = ((MR_Word) conv0_ClassDefn_18);
    TypeClassStatus_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_18, (MR_Integer) 0)));
    SuperClasses_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_18, (MR_Integer) 1)));
    _FunDeps_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_18, (MR_Integer) 2)));
    _Ancestors_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_18, (MR_Integer) 3)));
    ClassVars_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_18, (MR_Integer) 4)));
    _Kinds_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_18, (MR_Integer) 5)));
    Interface_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_18, (MR_Integer) 6)));
    ClassInterface_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_18, (MR_Integer) 7)));
    ClassVarSet_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_18, (MR_Integer) 8)));
    TermContext_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_18, (MR_Integer) 9)));
    Var_42 = hlds__status__typeclass_status_defined_in_this_module_1_f_0(TypeClassStatus_19);
    succeeded = (Var_42 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (Interface_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (succeeded)
    {
      MR_Word ClassName_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassId_12, (MR_Integer) 0)));
      MR_Integer ClassArity_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ClassId_12, (MR_Integer) 1)));
      MR_Word Pieces_31;
      MR_Word Msg_32;
      MR_Word Spec_33;
      MR_Word Var_45;
      MR_Word Var_46;
      MR_Word Var_47;
      MR_Word Var_54;
      MR_Word Var_55;
      MR_Word Var_59;

      {
        Var_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (ClassName_29));
        MR_hl_field(MR_mktag(0), Var_47, 1) = ((MR_Box) (ClassArity_30));
      }
      {
        Var_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
        MR_hl_field(MR_mktag(3), Var_46, 1) = ((MR_Box) (Var_47));
      }
      {
        Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (Var_46));
        MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[23])));
      }
      {
        Pieces_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[111])));
        MR_hl_field(MR_mktag(1), Pieces_31, 1) = ((MR_Box) (Var_45));
      }
      {
        Var_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_55, 0) = ((MR_Box) (Pieces_31));
      }
      {
        Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (Var_55));
        MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Msg_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Msg_32, 0) = ((MR_Box) (TermContext_28));
        MR_hl_field(MR_mktag(0), Msg_32, 1) = ((MR_Box) (Var_54));
      }
      {
        Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (Msg_32));
        MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Spec_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), Spec_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
        MR_hl_field(MR_mktag(0), Spec_33, 2) = ((MR_Box) (Var_59));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_41 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_33));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_40));
      }
      *InstanceDefns_14 = InstanceDefns0_13;
      *STATE_VARIABLE_QualInfo_39 = STATE_VARIABLE_QualInfo_0_38;
      *STATE_VARIABLE_ModuleInfo_37 = STATE_VARIABLE_ModuleInfo_0_36;
    }
    else
    {
      MR_Word TypeCtorInfo_70_70 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
      MR_Word TypeCtorInfo_81_81;
      MR_Word ClassProcPredIds0_34;
      MR_Word ClassProcPredIds_35;
      MR_Word Var_63;
      MR_Box conv8_STATE_VARIABLE_ModuleInfo_37;
      MR_Box conv7_STATE_VARIABLE_QualInfo_39;
      MR_Box conv6_STATE_VARIABLE_Specs_41;

      ClassProcPredIds0_34 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, TypeCtorInfo_70_70, (MR_Word) &check_hlds__check_typeclass_scalar_common_2[4], ClassInterface_26);
      mercury__list__sort_and_remove_dups_2_p_0(TypeCtorInfo_70_70, ClassProcPredIds0_34, &ClassProcPredIds_35);
      {
        Var_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_63, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_11[0]));
        MR_hl_field(MR_mktag(0), Var_63, 1) = ((MR_Box) (check_hlds__check_typeclass__check_one_class_10_p_0_2));
        MR_hl_field(MR_mktag(0), Var_63, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
        MR_hl_field(MR_mktag(0), Var_63, 3) = ((MR_Box) (ClassId_12));
        MR_hl_field(MR_mktag(0), Var_63, 4) = ((MR_Box) (SuperClasses_20));
        MR_hl_field(MR_mktag(0), Var_63, 5) = ((MR_Box) (ClassVars_23));
        MR_hl_field(MR_mktag(0), Var_63, 6) = ((MR_Box) (ClassInterface_26));
        MR_hl_field(MR_mktag(0), Var_63, 7) = ((MR_Box) (Interface_25));
        MR_hl_field(MR_mktag(0), Var_63, 8) = ((MR_Box) (ClassVarSet_27));
        MR_hl_field(MR_mktag(0), Var_63, 9) = ((MR_Box) (ClassProcPredIds_35));
      }
      TypeCtorInfo_81_81 = (MR_Word) &hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0;
      mercury__list__map_foldl3_9_p_1(TypeCtorInfo_81_81, TypeCtorInfo_81_81, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &hlds__make_hlds__hlds__make_hlds__type_ctor_info_make_hlds_qual_info_0, (MR_Word) &check_hlds__check_typeclass_scalar_common_1[1], Var_63, InstanceDefns0_13, InstanceDefns_14, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_36)), &conv8_STATE_VARIABLE_ModuleInfo_37, ((MR_Box) (STATE_VARIABLE_QualInfo_0_38)), &conv7_STATE_VARIABLE_QualInfo_39, ((MR_Box) (STATE_VARIABLE_Specs_0_40)), &conv6_STATE_VARIABLE_Specs_41);
      *STATE_VARIABLE_ModuleInfo_37 = ((MR_Word) conv8_STATE_VARIABLE_ModuleInfo_37);
      *STATE_VARIABLE_QualInfo_39 = ((MR_Word) conv7_STATE_VARIABLE_QualInfo_39);
      *STATE_VARIABLE_Specs_41 = ((MR_Word) conv6_STATE_VARIABLE_Specs_41);
    }
  }
}

static void MR_CALL 
check_hlds__check_typeclass__is_valid_instance_type_10_p_0(
  MR_Word ModuleInfo_11,
  MR_Word ClassId_12,
  MR_Word InstanceDefn_13,
  MR_Word Type_14,
  MR_Integer N_15,
  MR_Integer * HeadVar__6_6,
  MR_Word STATE_VARIABLE_SeenTypes_0_51,
  MR_Word * STATE_VARIABLE_SeenTypes_52,
  MR_Word STATE_VARIABLE_Specs_0_53,
  MR_Word * STATE_VARIABLE_Specs_54)
{
  {
    MR_bool succeeded;

    *HeadVar__6_6 = (N_15 + (MR_Integer) 1);
    switch (MR_tag((MR_Word) Type_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Spec_91;

          Spec_91 = check_hlds__check_typeclass__bad_instance_type_msg_5_f_0(ClassId_12, InstanceDefn_13, N_15, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[110]), (MR_Integer) 0);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_54 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_91));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_53));
          }
          *STATE_VARIABLE_SeenTypes_52 = STATE_VARIABLE_SeenTypes_0_51;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Args_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), Type_14, (MR_Integer) 1)));
          MR_Word Result_84;
          MR_Word _TypeName_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), Type_14, (MR_Integer) 0)));
          MR_Word Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), Type_14, (MR_Integer) 2)));

          check_hlds__check_typeclass__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_97_99_104_95_97_114_103_95_105_115_95_97_95_116_121_112_101_95_118_97_114_105_97_98_108_101_95_95_91_49_93_95_48_4_p_0(Args_83, (MR_Integer) 1, &Result_84);
          if ((Result_84 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word STATE_VARIABLE_SeenTypes_58_58;
            MR_Word TypeDefn_39;

            mercury__set__insert_list_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, Args_83, STATE_VARIABLE_SeenTypes_0_51, &STATE_VARIABLE_SeenTypes_58_58);
            succeeded = check_hlds__type_util__type_to_type_defn_3_p_0(ModuleInfo_11, Type_14, &TypeDefn_39);
            if (succeeded)
            {
              MR_Word TypeBody_40;

              hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_39, &TypeBody_40);
              switch (MR_tag((MR_Word) TypeBody_40)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    *STATE_VARIABLE_SeenTypes_52 = STATE_VARIABLE_SeenTypes_58_58;
                    *STATE_VARIABLE_Specs_54 = STATE_VARIABLE_Specs_0_53;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    *STATE_VARIABLE_SeenTypes_52 = STATE_VARIABLE_SeenTypes_58_58;
                    *STATE_VARIABLE_Specs_54 = STATE_VARIABLE_Specs_0_53;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word EqvType_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), TypeBody_40, (MR_Integer) 0)));
                    MR_Integer Var_42;

                    check_hlds__check_typeclass__is_valid_instance_type_10_p_0(ModuleInfo_11, ClassId_12, InstanceDefn_13, EqvType_41, N_15, &Var_42, STATE_VARIABLE_SeenTypes_58_58, STATE_VARIABLE_SeenTypes_52, STATE_VARIABLE_Specs_0_53, STATE_VARIABLE_Specs_54);
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), TypeBody_40, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        *STATE_VARIABLE_SeenTypes_52 = STATE_VARIABLE_SeenTypes_58_58;
                        *STATE_VARIABLE_Specs_54 = STATE_VARIABLE_Specs_0_53;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        *STATE_VARIABLE_SeenTypes_52 = STATE_VARIABLE_SeenTypes_58_58;
                        *STATE_VARIABLE_Specs_54 = STATE_VARIABLE_Specs_0_53;
                      }
                      break;
                  }
                  break;
              }
            }
            else
            {
              *STATE_VARIABLE_Specs_54 = STATE_VARIABLE_Specs_0_53;
              *STATE_VARIABLE_SeenTypes_52 = STATE_VARIABLE_SeenTypes_58_58;
            }
          }
          else
          {
            MR_Word Spec_80;

            Spec_80 = check_hlds__check_typeclass__badly_formed_instance_type_msg_4_f_0(ClassId_12, InstanceDefn_13, N_15, Result_84);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Specs_54 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_80));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_53));
            }
            *STATE_VARIABLE_SeenTypes_52 = STATE_VARIABLE_SeenTypes_0_51;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          *STATE_VARIABLE_SeenTypes_52 = STATE_VARIABLE_SeenTypes_0_51;
          *STATE_VARIABLE_Specs_54 = STATE_VARIABLE_Specs_0_53;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Type_14, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Args_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), Type_14, (MR_Integer) 1)));
              MR_Word Result_33;
              MR_Word Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), Type_14, (MR_Integer) 2)));

              check_hlds__check_typeclass__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_97_99_104_95_97_114_103_95_105_115_95_97_95_116_121_112_101_95_118_97_114_105_97_98_108_101_95_95_91_49_93_95_48_4_p_0(Args_31, (MR_Integer) 1, &Result_33);
              if ((Result_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                mercury__set__insert_list_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, Args_31, STATE_VARIABLE_SeenTypes_0_51, STATE_VARIABLE_SeenTypes_52);
                *STATE_VARIABLE_Specs_54 = STATE_VARIABLE_Specs_0_53;
              }
              else
              {
                MR_Word Spec_77;

                Spec_77 = check_hlds__check_typeclass__badly_formed_instance_type_msg_4_f_0(ClassId_12, InstanceDefn_13, N_15, Result_33);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *STATE_VARIABLE_Specs_54 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_77));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_53));
                }
                *STATE_VARIABLE_SeenTypes_52 = STATE_VARIABLE_SeenTypes_0_51;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Spec_88;

              Spec_88 = check_hlds__check_typeclass__bad_instance_type_msg_5_f_0(ClassId_12, InstanceDefn_13, N_15, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[108]), (MR_Integer) 0);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_Specs_54 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_88));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_53));
              }
              *STATE_VARIABLE_SeenTypes_52 = STATE_VARIABLE_SeenTypes_0_51;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Spec_30;

              Spec_30 = check_hlds__check_typeclass__bad_instance_type_msg_5_f_0(ClassId_12, InstanceDefn_13, N_15, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[106]), (MR_Integer) 0);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_Specs_54 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_30));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_53));
              }
              *STATE_VARIABLE_SeenTypes_52 = STATE_VARIABLE_SeenTypes_0_51;
            }
            break;
          case (MR_Integer) 3:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "check_typeclass", (MR_String) "kinded_type");
                return;
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__check_typeclass__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_97_99_104_95_97_114_103_95_105_115_95_97_95_116_121_112_101_95_118_97_114_105_97_98_108_101_95_95_91_49_93_95_48_4_p_0(
  MR_Word HeadVar__2_2,
  MR_Integer N_3,
  MR_Word * HeadVar__4_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word Type_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word Types_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));

      switch (MR_tag((MR_Word) Type_8)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer Var_30 = (N_3 + (MR_Integer) 1);
            MR_Word next_value_of_HeadVar__2_2 = Types_9;
            MR_Integer next_value_of_N_3 = Var_30;

            // direct tailcall eliminated
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            N_3 = next_value_of_N_3;
            continue;
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__4_4 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (N_3));
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__4_4 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (N_3));
          }
          break;
      }
    }
    break;
  }
}

static MR_Word MR_CALL 
check_hlds__check_typeclass__badly_formed_instance_type_msg_4_f_0(
  MR_Word ClassId_6,
  MR_Word InstanceDefn_7,
  MR_Integer N_8,
  MR_Word Error_9)
{
  {
    MR_Word Spec_10;
    MR_Integer ArgNum_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), Error_9, (MR_Integer) 0)));
    MR_Word EndPieces_12;
    MR_Word Var_15;
    MR_Word Var_16;

    {
      Var_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), Var_16, 1) = ((MR_Box) (ArgNum_11));
    }
    {
      Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_15, 0) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(1), Var_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[104])));
    }
    {
      EndPieces_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), EndPieces_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[102])));
      MR_hl_field(MR_mktag(1), EndPieces_12, 1) = ((MR_Box) (Var_15));
    }
    Spec_10 = check_hlds__check_typeclass__bad_instance_type_msg_5_f_0(ClassId_6, InstanceDefn_7, N_8, EndPieces_12, (MR_Integer) 0);
    return Spec_10;
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
  MR_Word STATE_VARIABLE_Specs_0_46,
  MR_Word * STATE_VARIABLE_Specs_47)
{
  {
    MR_bool succeeded;

    *HeadVar__6_6 = (N_13 + (MR_Integer) 1);
    switch (MR_tag((MR_Word) Type_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_Specs_47 = STATE_VARIABLE_Specs_0_46;
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
                *STATE_VARIABLE_Specs_47 = STATE_VARIABLE_Specs_0_46;
                break;
              case (MR_Integer) 1:
                *STATE_VARIABLE_Specs_47 = STATE_VARIABLE_Specs_0_46;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word TypeDefnStatus_21;
                  MR_Word Var_51;
                  MR_Word Var_52;
                  MR_Word Var_54;
                  MR_Word Var_55;
                  MR_Word Var_56;
                  MR_Word Var_57;
                  MR_Word Var_58;
                  MR_Word Var_59;
                  MR_Word Var_60;
                  MR_Word Var_61;
                  MR_Word Var_62;
                  MR_Word Var_22;

                  hlds__hlds_data__get_type_defn_status_2_p_0(TypeDefn_18, &TypeDefnStatus_21);
                  Var_51 = (MR_Word) TypeDefnStatus_21;
                  succeeded = (Var_51 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
                  if (succeeded)
                  {
                    Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_11, (MR_Integer) 0)));
                    Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_11, (MR_Integer) 1)));
                    Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_11, (MR_Integer) 2)));
                    Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_11, (MR_Integer) 3)));
                    Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_11, (MR_Integer) 4)));
                    Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_11, (MR_Integer) 5)));
                    Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_11, (MR_Integer) 6)));
                    Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_11, (MR_Integer) 7)));
                    Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_11, (MR_Integer) 8)));
                    Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_11, (MR_Integer) 9)));
                    succeeded = ((MR_tag((MR_Word) Var_52)) == (MR_mktag((MR_Integer) 1)));
                    if (succeeded)
                      Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_52, (MR_Integer) 0)));
                  }
                  if (succeeded)
                  {
                    MR_Word Spec_23;

                    Spec_23 = check_hlds__check_typeclass__bad_instance_type_msg_5_f_0(ClassId_10, InstanceDefn_11, N_13, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[101]), (MR_Integer) 1);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *STATE_VARIABLE_Specs_47 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_23));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_46));
                    }
                  }
                  else
                    *STATE_VARIABLE_Specs_47 = STATE_VARIABLE_Specs_0_46;
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), TypeBody_19, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *STATE_VARIABLE_Specs_47 = STATE_VARIABLE_Specs_0_46;
                    break;
                  case (MR_Integer) 1:
                    *STATE_VARIABLE_Specs_47 = STATE_VARIABLE_Specs_0_46;
                    break;
                }
                break;
            }
          }
          else
            *STATE_VARIABLE_Specs_47 = STATE_VARIABLE_Specs_0_46;
        }
        break;
      case (MR_Integer) 2:
        *STATE_VARIABLE_Specs_47 = STATE_VARIABLE_Specs_0_46;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Type_12, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *STATE_VARIABLE_Specs_47 = STATE_VARIABLE_Specs_0_46;
            break;
          case (MR_Integer) 1:
            *STATE_VARIABLE_Specs_47 = STATE_VARIABLE_Specs_0_46;
            break;
          case (MR_Integer) 2:
            *STATE_VARIABLE_Specs_47 = STATE_VARIABLE_Specs_0_46;
            break;
          case (MR_Integer) 3:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "check_typeclass", (MR_String) "kinded_type");
                return;
              }
            }
            break;
        }
        break;
    }
  }
}

static MR_Word MR_CALL 
check_hlds__check_typeclass__bad_instance_type_msg_5_f_0(
  MR_Word ClassId_7,
  MR_Word InstanceDefn_8,
  MR_Integer N_9,
  MR_Word EndPieces_10,
  MR_Word Kind_11)
{
  {
    MR_Word Spec_12;
    MR_Word ClassName_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassId_7, (MR_Integer) 0)));
    MR_String ClassNameString_15;
    MR_Word InstanceVarSet_16;
    MR_Word InstanceContext_17;
    MR_Word ArgNumPieces_21;
    MR_Word HeadingMsg_22;
    MR_Word Var_24;
    MR_Word Var_33;
    MR_Word Var_37;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_70;
    MR_Word Var_73;
    MR_Word Var_74;
    MR_Integer Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ClassId_7, (MR_Integer) 1)));
    MR_Word Var_72;
    MR_Word Var_75;
    MR_Word Var_77;
    MR_Word Var_78;
    MR_Word Var_79;
    MR_Word Var_80;

    ClassNameString_15 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ClassName_13);
    Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_8, (MR_Integer) 0)));
    Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_8, (MR_Integer) 1)));
    Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_8, (MR_Integer) 2)));
    Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_8, (MR_Integer) 3)));
    InstanceContext_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_8, (MR_Integer) 4)));
    Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_8, (MR_Integer) 5)));
    Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_8, (MR_Integer) 6)));
    Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_8, (MR_Integer) 7)));
    InstanceVarSet_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_8, (MR_Integer) 8)));
    Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_8, (MR_Integer) 9)));
    Var_24 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[91]);
    Var_33 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[93]);
    {
      Var_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), Var_41, 1) = ((MR_Box) (N_9));
    }
    {
      Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[95])));
      MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (EndPieces_10));
    }
    {
      Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (Var_42));
    }
    {
      Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_typeclass_scalar_common_1[94])));
      MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (Var_40));
    }
    ArgNumPieces_21 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, Var_37, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[21]));
    switch (Kind_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_String InstanceTypesString_19;
          MR_Word HeaderPieces_20;
          MR_Word Var_26;
          MR_Word Var_27;
          MR_String Var_28;
          MR_String Var_29;
          MR_String Var_31;
          MR_Word Var_63;
          MR_Word Var_64;
          MR_Word Var_65;
          MR_Word Var_66;

          InstanceTypesString_19 = parse_tree__mercury_to_mercury__mercury_type_list_to_string_2_f_0(InstanceVarSet_16, Var_74);
          Var_31 = mercury__string__f_43_43_2_f_0(InstanceTypesString_19, (MR_String) ")");
          Var_29 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_31);
          Var_28 = mercury__string__f_43_43_2_f_0(ClassNameString_15, Var_29);
          {
            Var_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
            MR_hl_field(MR_mktag(3), Var_27, 1) = ((MR_Box) (Var_28));
          }
          {
            Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (Var_27));
            MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (Var_33));
          }
          {
            HeaderPieces_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), HeaderPieces_20, 0) = ((MR_Box) (Var_24));
            MR_hl_field(MR_mktag(1), HeaderPieces_20, 1) = ((MR_Box) (Var_26));
          }
          {
            Var_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_64, 0) = ((MR_Box) (HeaderPieces_20));
          }
          {
            Var_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_66, 0) = ((MR_Box) (ArgNumPieces_21));
          }
          {
            Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (Var_66));
            MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (Var_64));
            MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) (Var_65));
          }
          {
            HeadingMsg_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), HeadingMsg_22, 0) = ((MR_Box) (InstanceContext_17));
            MR_hl_field(MR_mktag(0), HeadingMsg_22, 1) = ((MR_Box) (Var_63));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word Var_55;
          MR_Word Var_56;
          MR_Word Var_57;
          MR_Word Var_58;
          MR_String InstanceTypesString_120;
          MR_Word HeaderPieces_121;
          MR_Word Var_122;
          MR_Word Var_123;
          MR_String Var_124;
          MR_String Var_125;
          MR_String Var_126;

          InstanceTypesString_120 = parse_tree__mercury_to_mercury__mercury_type_list_to_string_2_f_0(InstanceVarSet_16, Var_73);
          Var_126 = mercury__string__f_43_43_2_f_0(InstanceTypesString_120, (MR_String) ")");
          Var_125 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_126);
          Var_124 = mercury__string__f_43_43_2_f_0(ClassNameString_15, Var_125);
          {
            Var_123 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_123, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
            MR_hl_field(MR_mktag(3), Var_123, 1) = ((MR_Box) (Var_124));
          }
          {
            Var_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_122, 0) = ((MR_Box) (Var_123));
            MR_hl_field(MR_mktag(1), Var_122, 1) = ((MR_Box) (Var_33));
          }
          {
            HeaderPieces_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), HeaderPieces_121, 0) = ((MR_Box) (Var_24));
            MR_hl_field(MR_mktag(1), HeaderPieces_121, 1) = ((MR_Box) (Var_122));
          }
          {
            Var_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_56, 0) = ((MR_Box) (HeaderPieces_121));
          }
          {
            Var_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_58, 0) = ((MR_Box) (ArgNumPieces_21));
          }
          {
            Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (Var_58));
            MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_typeclass_scalar_common_1[99])));
          }
          {
            Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (Var_56));
            MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (Var_57));
          }
          {
            HeadingMsg_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), HeadingMsg_22, 0) = ((MR_Box) (InstanceContext_17));
            MR_hl_field(MR_mktag(0), HeadingMsg_22, 1) = ((MR_Box) (Var_55));
          }
        }
        break;
    }
    {
      Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (HeadingMsg_22));
      MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Spec_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), Spec_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
      MR_hl_field(MR_mktag(0), Spec_12, 2) = ((MR_Box) (Var_70));
    }
    return Spec_12;
  }
}

static void MR_CALL 
check_hlds__check_typeclass__check_instance_declaration_types_for_instance_5_p_0_2(
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
    MR_Integer conv6_HeadVar__6_6;
    MR_Word conv5_STATE_VARIABLE_SeenTypes_52;
    MR_Word conv4_STATE_VARIABLE_Specs_54;

    check_hlds__check_typeclass__is_valid_instance_type_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) wrapper_arg_1), ((MR_Integer) wrapper_arg_2), &conv6_HeadVar__6_6, ((MR_Word) wrapper_arg_4), &conv5_STATE_VARIABLE_SeenTypes_52, ((MR_Word) wrapper_arg_6), &conv4_STATE_VARIABLE_Specs_54);
    *wrapper_arg_3 = ((MR_Box) (conv6_HeadVar__6_6));
    *wrapper_arg_5 = ((MR_Box) (conv5_STATE_VARIABLE_SeenTypes_52));
    *wrapper_arg_7 = ((MR_Box) (conv4_STATE_VARIABLE_Specs_54));
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
    MR_Word conv0_STATE_VARIABLE_Specs_47;

    check_hlds__check_typeclass__is_valid_instance_orig_type_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) wrapper_arg_1), ((MR_Integer) wrapper_arg_2), &conv1_HeadVar__6_6, ((MR_Word) wrapper_arg_4), &conv0_STATE_VARIABLE_Specs_47);
    *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__6_6));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_47));
  }
}

static void MR_CALL 
check_hlds__check_typeclass__check_instance_declaration_types_for_instance_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word ClassId_7,
  MR_Word InstanceDefn_8,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16)
{
  {
    MR_Word TypeCtorInfo_47_47;
    MR_Word TypeCtorInfo_48_48;
    MR_Word TypeInfo_49_49;
    MR_Word OriginalTypes_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_8, (MR_Integer) 2)));
    MR_Word Types_12;
    MR_Word Var_17;
    MR_Word STATE_VARIABLE_Specs_19_19;
    MR_Word Var_20;
    MR_Word Var_22;
    MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_8, (MR_Integer) 0)));
    MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_8, (MR_Integer) 1)));
    MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_8, (MR_Integer) 3)));
    MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_8, (MR_Integer) 4)));
    MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_8, (MR_Integer) 5)));
    MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_8, (MR_Integer) 6)));
    MR_Word Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_8, (MR_Integer) 7)));
    MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_8, (MR_Integer) 8)));
    MR_Word Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_8, (MR_Integer) 9)));
    MR_Integer Var_11;
    MR_Box conv3_Var_11;
    MR_Box conv2_STATE_VARIABLE_Specs_19_19;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Integer Var_13;
    MR_Word Var_14;
    MR_Box conv9_Var_13;
    MR_Box conv8_Var_14;
    MR_Box conv7_STATE_VARIABLE_Specs_16;

    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_6[1]));
      MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (check_hlds__check_typeclass__check_instance_declaration_types_for_instance_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_17, 3) = ((MR_Box) (ModuleInfo_6));
      MR_hl_field(MR_mktag(0), Var_17, 4) = ((MR_Box) (ClassId_7));
      MR_hl_field(MR_mktag(0), Var_17, 5) = ((MR_Box) (InstanceDefn_8));
    }
    TypeCtorInfo_47_47 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
    TypeCtorInfo_48_48 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    TypeInfo_49_49 = (MR_Word) &check_hlds__check_typeclass_scalar_common_1[1];
    mercury__list__foldl2_6_p_0(TypeCtorInfo_47_47, TypeCtorInfo_48_48, TypeInfo_49_49, Var_17, OriginalTypes_10, ((MR_Box) ((MR_Integer) 1)), &conv3_Var_11, ((MR_Box) (STATE_VARIABLE_Specs_0_15)), &conv2_STATE_VARIABLE_Specs_19_19);
    Var_11 = ((MR_Integer) conv3_Var_11);
    STATE_VARIABLE_Specs_19_19 = ((MR_Word) conv2_STATE_VARIABLE_Specs_19_19);
    Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_8, (MR_Integer) 0)));
    Types_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_8, (MR_Integer) 1)));
    Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_8, (MR_Integer) 2)));
    Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_8, (MR_Integer) 3)));
    Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_8, (MR_Integer) 4)));
    Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_8, (MR_Integer) 5)));
    Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_8, (MR_Integer) 6)));
    Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_8, (MR_Integer) 7)));
    Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_8, (MR_Integer) 8)));
    Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstanceDefn_8, (MR_Integer) 9)));
    {
      Var_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) (check_hlds__check_typeclass__check_instance_declaration_types_for_instance_5_p_0_2));
      MR_hl_field(MR_mktag(0), Var_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_20, 3) = ((MR_Box) (ModuleInfo_6));
      MR_hl_field(MR_mktag(0), Var_20, 4) = ((MR_Box) (ClassId_7));
      MR_hl_field(MR_mktag(0), Var_20, 5) = ((MR_Box) (InstanceDefn_8));
    }
    Var_22 = mercury__set__init_0_f_0(TypeCtorInfo_47_47);
    mercury__list__foldl3_8_p_0(TypeCtorInfo_47_47, TypeCtorInfo_48_48, (MR_Word) &check_hlds__check_typeclass_scalar_common_1[2], TypeInfo_49_49, Var_20, Types_12, ((MR_Box) ((MR_Integer) 1)), &conv9_Var_13, ((MR_Box) (Var_22)), &conv8_Var_14, ((MR_Box) (STATE_VARIABLE_Specs_19_19)), &conv7_STATE_VARIABLE_Specs_16);
    Var_13 = ((MR_Integer) conv9_Var_13);
    Var_14 = ((MR_Word) conv8_Var_14);
    *STATE_VARIABLE_Specs_16 = ((MR_Word) conv7_STATE_VARIABLE_Specs_16);
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
    MR_Word conv0_STATE_VARIABLE_Specs_16;

    check_hlds__check_typeclass__check_instance_declaration_types_for_instance_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_STATE_VARIABLE_Specs_16);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_16));
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
      Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_5[2]));
      MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (check_hlds__check_typeclass__check_instance_declaration_types_for_class_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (ModuleInfo_6));
      MR_hl_field(MR_mktag(0), Var_12, 4) = ((MR_Box) (ClassId_7));
    }
    mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0, (MR_Word) &check_hlds__check_typeclass_scalar_common_1[1], Var_12, InstanceDefns_8, ((MR_Box) (STATE_VARIABLE_Specs_0_10)), &conv1_STATE_VARIABLE_Specs_11);
    *STATE_VARIABLE_Specs_11 = ((MR_Word) conv1_STATE_VARIABLE_Specs_11);
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

    check_hlds__check_typeclass__check_fundeps_for_class_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv2_STATE_VARIABLE_Specs_17);
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

    check_hlds__check_typeclass__check_instance_declaration_types_for_class_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3), &conv0_STATE_VARIABLE_Specs_11);
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_11));
  }
}

void MR_CALL 
check_hlds__check_typeclass__check_typeclasses_6_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_20,
  MR_Word * STATE_VARIABLE_ModuleInfo_21,
  MR_Word STATE_VARIABLE_QualInfo_0_22,
  MR_Word * STATE_VARIABLE_QualInfo_23,
  MR_Word STATE_VARIABLE_Specs_0_24,
  MR_Word * STATE_VARIABLE_Specs_25)
{
  {
    MR_Word Globals_10;
    MR_Word Verbose_11;
    MR_Word STATE_VARIABLE_Specs_31_31;
    MR_Word InstanceTable_61;
    MR_Word Var_62;
    MR_Box conv1_STATE_VARIABLE_Specs_31_31;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_20, &Globals_10);
    libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 58, &Verbose_11);
    libs__file_util__maybe_write_string_4_p_0(Verbose_11, (MR_String) "% Checking instance declaration types...\n");
    hlds__hlds_module__module_info_get_instance_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_20, &InstanceTable_61);
    {
      Var_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_62, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_5[1]));
      MR_hl_field(MR_mktag(0), Var_62, 1) = ((MR_Box) (check_hlds__check_typeclass__check_typeclasses_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_62, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_62, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_20));
    }
    mercury__map__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0, (MR_Word) &check_hlds__check_typeclass_scalar_common_1[0], (MR_Word) &check_hlds__check_typeclass_scalar_common_1[1], Var_62, InstanceTable_61, ((MR_Box) (STATE_VARIABLE_Specs_0_24)), &conv1_STATE_VARIABLE_Specs_31_31);
    STATE_VARIABLE_Specs_31_31 = ((MR_Word) conv1_STATE_VARIABLE_Specs_31_31);
    if ((STATE_VARIABLE_Specs_31_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word TypeCtorInfo_12_79;
      MR_Word STATE_VARIABLE_ModuleInfo_35_35;
      MR_Word STATE_VARIABLE_Specs_37_37;
      MR_Word STATE_VARIABLE_Specs_42_42;
      MR_Word STATE_VARIABLE_Specs_46_46;
      MR_Word STATE_VARIABLE_Specs_50_50;
      MR_Word InstanceTable_75;
      MR_Word ClassIds_76;
      MR_Word Var_77;
      MR_Box conv3_STATE_VARIABLE_Specs_50_50;

      libs__file_util__maybe_write_string_4_p_0(Verbose_11, (MR_String) "% Checking typeclass instances...\n");
      check_hlds__check_typeclass__check_instance_decls_6_p_0(STATE_VARIABLE_ModuleInfo_0_20, &STATE_VARIABLE_ModuleInfo_35_35, STATE_VARIABLE_QualInfo_0_22, STATE_VARIABLE_QualInfo_23, STATE_VARIABLE_Specs_31_31, &STATE_VARIABLE_Specs_37_37);
      libs__file_util__maybe_write_string_4_p_0(Verbose_11, (MR_String) "% Checking for cyclic classes...\n");
      check_hlds__check_typeclass__check_for_cyclic_classes_4_p_0(STATE_VARIABLE_ModuleInfo_35_35, STATE_VARIABLE_ModuleInfo_21, STATE_VARIABLE_Specs_37_37, &STATE_VARIABLE_Specs_42_42);
      libs__file_util__maybe_write_string_4_p_0(Verbose_11, (MR_String) "% Checking for missing concrete instances...\n");
      check_hlds__check_typeclass__check_for_missing_concrete_instances_3_p_0(*STATE_VARIABLE_ModuleInfo_21, STATE_VARIABLE_Specs_42_42, &STATE_VARIABLE_Specs_46_46);
      libs__file_util__maybe_write_string_4_p_0(Verbose_11, (MR_String) "% Checking functional dependencies on instances...\n");
      hlds__hlds_module__module_info_get_instance_table_2_p_0(*STATE_VARIABLE_ModuleInfo_21, &InstanceTable_75);
      TypeCtorInfo_12_79 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0;
      mercury__map__keys_2_p_0(TypeCtorInfo_12_79, (MR_Word) &check_hlds__check_typeclass_scalar_common_1[0], InstanceTable_75, &ClassIds_76);
      {
        Var_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_77, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_9[2]));
        MR_hl_field(MR_mktag(0), Var_77, 1) = ((MR_Box) (check_hlds__check_typeclass__check_typeclasses_6_p_0_2));
        MR_hl_field(MR_mktag(0), Var_77, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_77, 3) = ((MR_Box) (*STATE_VARIABLE_ModuleInfo_21));
      }
      mercury__list__foldl_4_p_0(TypeCtorInfo_12_79, (MR_Word) &check_hlds__check_typeclass_scalar_common_1[1], Var_77, ClassIds_76, ((MR_Box) (STATE_VARIABLE_Specs_46_46)), &conv3_STATE_VARIABLE_Specs_50_50);
      STATE_VARIABLE_Specs_50_50 = ((MR_Word) conv3_STATE_VARIABLE_Specs_50_50);
      libs__file_util__maybe_write_string_4_p_0(Verbose_11, (MR_String) "% Checking typeclass constraints...\n");
      check_hlds__check_typeclass__check_typeclass_constraints_3_p_0(*STATE_VARIABLE_ModuleInfo_21, STATE_VARIABLE_Specs_50_50, STATE_VARIABLE_Specs_25);
    }
    else
    {
      *STATE_VARIABLE_ModuleInfo_21 = STATE_VARIABLE_ModuleInfo_0_20;
      *STATE_VARIABLE_QualInfo_23 = STATE_VARIABLE_QualInfo_0_22;
      *STATE_VARIABLE_Specs_25 = STATE_VARIABLE_Specs_31_31;
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
    MR_Word conv2_STATE_VARIABLE_Specs_19;

    check_hlds__check_typeclass__check_ctor_constraints_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv2_STATE_VARIABLE_Specs_19);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_Specs_19));
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
    MR_Word conv0_STATE_VARIABLE_Specs_13;

    check_hlds__check_typeclass__check_pred_constraints_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_STATE_VARIABLE_Specs_13);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_13));
  }
}

static void MR_CALL 
check_hlds__check_typeclass__check_typeclass_constraints_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word STATE_VARIABLE_Specs_0_9,
  MR_Word * STATE_VARIABLE_Specs_10)
{
  {
    MR_Word TypeInfo_19_19;
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
      Var_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_11, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_9[0]));
      MR_hl_field(MR_mktag(0), Var_11, 1) = ((MR_Box) (check_hlds__check_typeclass__check_typeclass_constraints_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_11, 3) = ((MR_Box) (ModuleInfo_4));
    }
    TypeInfo_19_19 = (MR_Word) &check_hlds__check_typeclass_scalar_common_1[1];
    mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, TypeInfo_19_19, Var_11, PredIds_6, ((MR_Box) (STATE_VARIABLE_Specs_0_9)), &conv1_STATE_VARIABLE_Specs_12_12);
    STATE_VARIABLE_Specs_12_12 = ((MR_Word) conv1_STATE_VARIABLE_Specs_12_12);
    hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_4, &TypeTable_7);
    hlds__hlds_data__get_all_type_ctor_defns_2_p_0(TypeTable_7, &TypeCtorsDefns_8);
    {
      Var_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_13, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_9[1]));
      MR_hl_field(MR_mktag(0), Var_13, 1) = ((MR_Box) (check_hlds__check_typeclass__check_typeclass_constraints_3_p_0_2));
      MR_hl_field(MR_mktag(0), Var_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_13, 3) = ((MR_Box) (ModuleInfo_4));
    }
    mercury__list__foldl_4_p_0((MR_Word) &check_hlds__check_typeclass_scalar_common_2[2], TypeInfo_19_19, Var_13, TypeCtorsDefns_8, ((MR_Box) (STATE_VARIABLE_Specs_12_12)), &conv3_STATE_VARIABLE_Specs_10);
    *STATE_VARIABLE_Specs_10 = ((MR_Word) conv3_STATE_VARIABLE_Specs_10);
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

    conv6_Spec_6 = check_hlds__check_typeclass__report_cyclic_classes_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
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

    check_hlds__check_typeclass__find_cycles_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv2_STATE_VARIABLE_ClassTable_17, ((MR_Word) wrapper_arg_4), &conv1_STATE_VARIABLE_Visited_19, ((MR_Word) wrapper_arg_6), &conv0_STATE_VARIABLE_Cycles_21);
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
    MR_Word TypeCtorInfo_24_24;
    MR_Word TypeCtorInfo_36_36;
    MR_Word ClassTable0_7;
    MR_Word ClassIds_8;
    MR_Word ClassTable_9;
    MR_Word Cycles_11;
    MR_Word Var_17;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_10;
    MR_Box conv5_ClassTable_9;
    MR_Box conv4_Var_10;
    MR_Box conv3_Cycles_11;

    hlds__hlds_module__module_info_get_class_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_12, &ClassTable0_7);
    TypeCtorInfo_24_24 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0;
    ClassIds_8 = mercury__map__keys_1_f_0(TypeCtorInfo_24_24, (MR_Word) &hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0, ClassTable0_7);
    Var_17 = mercury__set__init_0_f_0(TypeCtorInfo_24_24);
    mercury__list__foldl3_8_p_0(TypeCtorInfo_24_24, (MR_Word) &check_hlds__check_typeclass_scalar_common_2[1], (MR_Word) &check_hlds__check_typeclass_scalar_common_1[7], (MR_Word) &check_hlds__check_typeclass_scalar_common_1[9], (MR_Word) &check_hlds__check_typeclass_scalar_common_7[0], ClassIds_8, ((MR_Box) (ClassTable0_7)), &conv5_ClassTable_9, ((MR_Box) (Var_17)), &conv4_Var_10, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &conv3_Cycles_11);
    ClassTable_9 = ((MR_Word) conv5_ClassTable_9);
    Var_10 = ((MR_Word) conv4_Var_10);
    Cycles_11 = ((MR_Word) conv3_Cycles_11);
    TypeCtorInfo_36_36 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
    {
      Var_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) (check_hlds__check_typeclass__check_for_cyclic_classes_4_p_0_2));
      MR_hl_field(MR_mktag(0), Var_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_22, 3) = ((MR_Box) (ClassTable_9));
    }
    Var_21 = mercury__list__map_2_f_0((MR_Word) &check_hlds__check_typeclass_scalar_common_1[8], TypeCtorInfo_36_36, Var_22, Cycles_11);
    *STATE_VARIABLE_Specs_15 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_36_36, Var_21, STATE_VARIABLE_Specs_0_14);
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

    check_hlds__check_typeclass__check_for_corresponding_instances_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3), &conv4_STATE_VARIABLE_Specs_11);
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

    check_hlds__check_typeclass__partition_instances_for_class_6_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3), &conv1_STATE_VARIABLE_Abstracts_12, ((MR_Word) wrapper_arg_5), &conv0_STATE_VARIABLE_Concretes_14);
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
    MR_Word TypeCtorInfo_16_32;
    MR_Word TypeCtorInfo_17_33;
    MR_Word TypeInfo_19_35;
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
    TypeCtorInfo_16_32 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0;
    TypeCtorInfo_17_33 = (MR_Word) &hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0;
    Var_24 = mercury__multi_map__init_0_f_0(TypeCtorInfo_16_32, TypeCtorInfo_17_33);
    Var_25 = mercury__multi_map__init_0_f_0(TypeCtorInfo_16_32, TypeCtorInfo_17_33);
    TypeInfo_19_35 = (MR_Word) &check_hlds__check_typeclass_scalar_common_2[0];
    mercury__map__foldl2_6_p_0(TypeCtorInfo_16_32, (MR_Word) &check_hlds__check_typeclass_scalar_common_1[0], TypeInfo_19_35, TypeInfo_19_35, (MR_Word) &check_hlds__check_typeclass_scalar_common_2[3], InstanceTable_6, ((MR_Box) (Var_24)), &conv3_AbstractInstances_7, ((MR_Box) (Var_25)), &conv2_ConcreteInstances_8);
    AbstractInstances_7 = ((MR_Word) conv3_AbstractInstances_7);
    ConcreteInstances_8 = ((MR_Word) conv2_ConcreteInstances_8);
    {
      Var_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_11, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_11, 1) = ((MR_Box) (check_hlds__check_typeclass__check_for_missing_concrete_instances_3_p_0_2));
      MR_hl_field(MR_mktag(0), Var_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_11, 3) = ((MR_Box) (ConcreteInstances_8));
    }
    mercury__map__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0, (MR_Word) &check_hlds__check_typeclass_scalar_common_1[0], (MR_Word) &check_hlds__check_typeclass_scalar_common_1[1], Var_11, AbstractInstances_7, ((MR_Box) (STATE_VARIABLE_Specs_0_9)), &conv5_STATE_VARIABLE_Specs_10);
    *STATE_VARIABLE_Specs_10 = ((MR_Word) conv5_STATE_VARIABLE_Specs_10);
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
    MR_Word conv2_STATE_VARIABLE_ModuleInfo_37;
    MR_Word conv1_STATE_VARIABLE_QualInfo_39;
    MR_Word conv0_STATE_VARIABLE_Specs_41;

    check_hlds__check_typeclass__check_one_class_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv3_InstanceDefns_14, ((MR_Word) wrapper_arg_4), &conv2_STATE_VARIABLE_ModuleInfo_37, ((MR_Word) wrapper_arg_6), &conv1_STATE_VARIABLE_QualInfo_39, ((MR_Word) wrapper_arg_8), &conv0_STATE_VARIABLE_Specs_41);
    *wrapper_arg_3 = ((MR_Box) (conv3_InstanceDefns_14));
    *wrapper_arg_5 = ((MR_Box) (conv2_STATE_VARIABLE_ModuleInfo_37));
    *wrapper_arg_7 = ((MR_Box) (conv1_STATE_VARIABLE_QualInfo_39));
    *wrapper_arg_9 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_41));
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
    MR_Word TypeInfo_38_38;
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
      Var_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (&check_hlds__check_typeclass_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) (check_hlds__check_typeclass__check_instance_decls_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_22, 3) = ((MR_Box) (ClassTable_10));
    }
    TypeInfo_38_38 = (MR_Word) &check_hlds__check_typeclass_scalar_common_1[0];
    mercury__map__map_foldl3_9_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0, TypeInfo_38_38, TypeInfo_38_38, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &hlds__make_hlds__hlds__make_hlds__type_ctor_info_make_hlds_qual_info_0, (MR_Word) &check_hlds__check_typeclass_scalar_common_1[1], Var_22, InstanceTable0_11, &InstanceTable_12, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_16)), &conv6_STATE_VARIABLE_ModuleInfo_23_23, ((MR_Box) (STATE_VARIABLE_QualInfo_0_18)), &conv5_STATE_VARIABLE_QualInfo_19, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &conv4_NewSpecs_13);
    STATE_VARIABLE_ModuleInfo_23_23 = ((MR_Word) conv6_STATE_VARIABLE_ModuleInfo_23_23);
    *STATE_VARIABLE_QualInfo_19 = ((MR_Word) conv5_STATE_VARIABLE_QualInfo_19);
    NewSpecs_13 = ((MR_Word) conv4_NewSpecs_13);
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
    *STATE_VARIABLE_Specs_21 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, NewSpecs_13, STATE_VARIABLE_Specs_0_20);
  }
}

static MR_bool MR_CALL 
check_hlds__check_typeclass____Unify____bad_instance_type_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__check_typeclass____Unify____bad_instance_type_kind_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
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

    check_hlds__check_typeclass____Compare____bad_instance_type_kind_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
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

    succeeded = check_hlds__check_typeclass____Unify____check_instance_method_info_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
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

    check_hlds__check_typeclass____Compare____check_instance_method_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
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

    succeeded = check_hlds__check_typeclass____Unify____class_path_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
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

    check_hlds__check_typeclass____Compare____class_path_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
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

    succeeded = check_hlds__check_typeclass____Unify____induced_fundep_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
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

    check_hlds__check_typeclass____Compare____induced_fundep_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
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

    succeeded = check_hlds__check_typeclass____Unify____induced_fundeps_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
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

    check_hlds__check_typeclass____Compare____induced_fundeps_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__check_typeclass____Unify____instance_arg_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__check_typeclass____Unify____instance_arg_result_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__check_typeclass____Compare____instance_arg_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__check_typeclass____Compare____instance_arg_result_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
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

    succeeded = check_hlds__check_typeclass____Unify____modes_and_detism_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
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

    check_hlds__check_typeclass____Compare____modes_and_detism_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
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

    succeeded = check_hlds__check_typeclass____Unify____quant_error_type_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
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

    check_hlds__check_typeclass____Compare____quant_error_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
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
	MR_register_type_ctor_info(&check_hlds__check_typeclass__check_hlds__check_typeclass__type_ctor_info_instance_arg_result_0);
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
