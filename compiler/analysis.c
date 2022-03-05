/*
** Automatically generated from `analysis.m'
** by the Mercury compiler,
** version rotd-2022-03-05
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


// :- module analysis.
// :- implementation.

/*
INIT mercury__analysis__init
REQUIRED_INIT mercury__analysis__required_init
ENDINIT
*/

#include "analysis.mih"
#include "analysis.mh"


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
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "recompilation.mih"
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
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "analysis.file.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.proc_requests.mih"
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
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.module_cmds.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"



struct analysis__analyses_3_p_1_env_0_s {
  MR_String * analysis__analyses_3_p_1_env_0__HeadVar__2_2;
  MR_Word * analysis__analyses_3_p_1_env_0__HeadVar__3_3;
  MR_Cont analysis__analyses_3_p_1_env_0__cont;
  void * analysis__analyses_3_p_1_env_0__cont_env_ptr;
  MR_Box analysis__analyses_3_p_1_env_0__conv2_HeadVar__2_2;
  MR_Box analysis__analyses_3_p_1_env_0__conv1_HeadVar__3_3;
};


static const MR_FA_PseudoTypeInfo_Struct2 analysis__analysis__pti_analysis_result_2__pseudo_1__pseudo_2;

static const MR_FA_PseudoTypeInfo_Struct2 analysis__analysis__pti_analysis_result_2__pseudo_2__pseudo_3;

static const MR_FA_TypeInfo_Struct1 analysis__list__ti_list_1analysis__type_ctor_info_some_analysis_result_0;

static const MR_FA_PseudoTypeInfo_Struct2 analysis__tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__plain_list__ti_list_1analysis__type_ctor_info_some_analysis_result_0;

static const MR_FA_PseudoTypeInfo_Struct1 analysis__list__pti_list_1__plain_analysis__type_ctor_info_some_analysis_result_0;

static const MR_FA_TypeInfo_Struct1 analysis__list__ti_list_1analysis__type_ctor_info_imdg_arc_0;

static const MR_FA_PseudoTypeInfo_Struct2 analysis__tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__plain_list__ti_list_1analysis__type_ctor_info_imdg_arc_0;

static const MR_FA_PseudoTypeInfo_Struct1 analysis__list__pti_list_1__plain_analysis__type_ctor_info_imdg_arc_0;

static const MR_FA_TypeInfo_Struct1 analysis__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_TypeInfo_Struct1 analysis__list__ti_list_1analysis__type_ctor_info_analysis_request_0;

static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_analysis_request_0;

static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_analysis_request_0;

static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_analysis_request_0;

static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0analysis__type_ctor_info_analysis_status_0;

static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0;

static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0;

static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0;

static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_imdg_arc_0;

static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_imdg_arc_0;

static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_imdg_arc_0;

static const MR_PseudoTypeInfo analysis__analysis__field_types_analysis_info_0_0[10];

static const MR_ConstString analysis__analysis__field_names_analysis_info_0_0[10];

static const MR_DuArgLocn analysis__analysis__field_locns_analysis_info_0_0[10];

static const MR_TypeClassConstraint_1Struct analysis__analysis__exist_tc_constr_analysis_info_0_0_1;

static const MR_TypeClassConstraint analysis__analysis__exist_tc_constrs_analysis_info_0_0[1];

static const MR_DuExistLocn analysis__analysis__exist_locns_analysis_info_0_0[1];

static const MR_DuExistInfo analysis__analysis__exist_info_analysis_info_0_0;

static const MR_DuFunctorDesc analysis__analysis__du_functor_desc_analysis_info_0_0;

static const MR_DuFunctorDescPtr analysis__analysis__du_stag_ordered_analysis_info_0_0[1];

static const MR_DuPtagLayout analysis__analysis__du_ptag_ordered_analysis_info_0[1];

static const MR_DuFunctorDescPtr analysis__analysis__du_name_ordered_analysis_info_0[1];

static const MR_Integer analysis__analysis__functor_number_map_analysis_info_0[1];

static const MR_FA_PseudoTypeInfo_Struct1 analysis__list__pti_list_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct2 analysis__tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__pseudo_list__pti_list_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct2 analysis__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__pseudo_tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__pseudo_list__pti_list_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct2 analysis__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__pseudo_tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__pseudo_list__pti_list_1__pseudo_1;

static const MR_PseudoTypeInfo analysis__analysis__field_types_analysis_request_0_0[2];

static const MR_ConstString analysis__analysis__field_names_analysis_request_0_0[2];

static const MR_TypeClassConstraint_2Struct analysis__analysis__exist_tc_constr_analysis_request_0_0_1;

static const MR_TypeClassConstraint analysis__analysis__exist_tc_constrs_analysis_request_0_0[1];

static const MR_DuExistLocn analysis__analysis__exist_locns_analysis_request_0_0[2];

static const MR_DuExistInfo analysis__analysis__exist_info_analysis_request_0_0;

static const MR_DuFunctorDesc analysis__analysis__du_functor_desc_analysis_request_0_0;

static const MR_DuFunctorDescPtr analysis__analysis__du_stag_ordered_analysis_request_0_0[1];

static const MR_DuPtagLayout analysis__analysis__du_ptag_ordered_analysis_request_0[1];

static const MR_DuFunctorDescPtr analysis__analysis__du_name_ordered_analysis_request_0[1];

static const MR_Integer analysis__analysis__functor_number_map_analysis_request_0[1];

static const MR_PseudoTypeInfo analysis__analysis__field_types_analysis_result_2_0[3];

static const MR_ConstString analysis__analysis__field_names_analysis_result_2_0[3];

static const MR_DuArgLocn analysis__analysis__field_locns_analysis_result_2_0[3];

static const MR_DuFunctorDesc analysis__analysis__du_functor_desc_analysis_result_2_0;

static const MR_DuFunctorDescPtr analysis__analysis__du_stag_ordered_analysis_result_2_0[1];

static const MR_DuPtagLayout analysis__analysis__du_ptag_ordered_analysis_result_2[1];

static const MR_DuFunctorDescPtr analysis__analysis__du_name_ordered_analysis_result_2[1];

static const MR_Integer analysis__analysis__functor_number_map_analysis_result_2[1];

static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_analysis_status_0_0;

static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_analysis_status_0_1;

static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_analysis_status_0_2;

static const MR_EnumFunctorDescPtr analysis__analysis__enum_ordinal_ordered_analysis_status_0[3];

static const MR_EnumFunctorDescPtr analysis__analysis__enum_name_ordered_analysis_status_0[3];

static const MR_Integer analysis__analysis__functor_number_map_analysis_status_0[3];

static const MR_FA_PseudoTypeInfo_Struct1 analysis__unit__pti_unit_1__pseudo_514;

static const MR_FA_PseudoTypeInfo_Struct1 analysis__unit__pti_unit_1__pseudo_515;

static const MR_PseudoTypeInfo analysis__analysis__field_types_analysis_type_0_0[2];

static const MR_TypeClassConstraint_3Struct analysis__analysis__exist_tc_constr_analysis_type_0_0_1;

static const MR_TypeClassConstraint analysis__analysis__exist_tc_constrs_analysis_type_0_0[1];

static const MR_DuExistLocn analysis__analysis__exist_locns_analysis_type_0_0[3];

static const MR_DuExistInfo analysis__analysis__exist_info_analysis_type_0_0;

static const MR_DuFunctorDesc analysis__analysis__du_functor_desc_analysis_type_0_0;

static const MR_DuFunctorDescPtr analysis__analysis__du_stag_ordered_analysis_type_0_0[1];

static const MR_DuPtagLayout analysis__analysis__du_ptag_ordered_analysis_type_0[1];

static const MR_DuFunctorDescPtr analysis__analysis__du_name_ordered_analysis_type_0[1];

static const MR_Integer analysis__analysis__functor_number_map_analysis_type_0[1];

static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_any_call_0_0;

static const MR_EnumFunctorDescPtr analysis__analysis__enum_ordinal_ordered_any_call_0[1];

static const MR_EnumFunctorDescPtr analysis__analysis__enum_name_ordered_any_call_0[1];

static const MR_Integer analysis__analysis__functor_number_map_any_call_0[1];

static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_fixpoint_type_0_0;

static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_fixpoint_type_0_1;

static const MR_EnumFunctorDescPtr analysis__analysis__enum_ordinal_ordered_fixpoint_type_0[2];

static const MR_EnumFunctorDescPtr analysis__analysis__enum_name_ordered_fixpoint_type_0[2];

static const MR_Integer analysis__analysis__functor_number_map_fixpoint_type_0[2];

static const MR_PseudoTypeInfo analysis__analysis__field_types_func_id_0_0[4];

static const MR_ConstString analysis__analysis__field_names_func_id_0_0[4];

static const MR_DuArgLocn analysis__analysis__field_locns_func_id_0_0[4];

static const MR_DuFunctorDesc analysis__analysis__du_functor_desc_func_id_0_0;

static const MR_DuFunctorDescPtr analysis__analysis__du_stag_ordered_func_id_0_0[1];

static const MR_DuPtagLayout analysis__analysis__du_ptag_ordered_func_id_0[1];

static const MR_DuFunctorDescPtr analysis__analysis__du_name_ordered_func_id_0[1];

static const MR_Integer analysis__analysis__functor_number_map_func_id_0[1];

static const MR_PseudoTypeInfo analysis__analysis__field_types_imdg_arc_0_0[2];

static const MR_ConstString analysis__analysis__field_names_imdg_arc_0_0[2];

static const MR_TypeClassConstraint_2Struct analysis__analysis__exist_tc_constr_imdg_arc_0_0_1;

static const MR_TypeClassConstraint analysis__analysis__exist_tc_constrs_imdg_arc_0_0[1];

static const MR_DuExistLocn analysis__analysis__exist_locns_imdg_arc_0_0[2];

static const MR_DuExistInfo analysis__analysis__exist_info_imdg_arc_0_0;

static const MR_DuFunctorDesc analysis__analysis__du_functor_desc_imdg_arc_0_0;

static const MR_DuFunctorDescPtr analysis__analysis__du_stag_ordered_imdg_arc_0_0[1];

static const MR_DuPtagLayout analysis__analysis__du_ptag_ordered_imdg_arc_0[1];

static const MR_DuFunctorDescPtr analysis__analysis__du_name_ordered_imdg_arc_0[1];

static const MR_Integer analysis__analysis__functor_number_map_imdg_arc_0[1];

static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_make_analysis_registry_0_0;

static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_make_analysis_registry_0_1;

static const MR_EnumFunctorDescPtr analysis__analysis__enum_ordinal_ordered_make_analysis_registry_0[2];

static const MR_EnumFunctorDescPtr analysis__analysis__enum_name_ordered_make_analysis_registry_0[2];

static const MR_Integer analysis__analysis__functor_number_map_make_analysis_registry_0[2];

static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_no_func_info_0_0;

static const MR_EnumFunctorDescPtr analysis__analysis__enum_ordinal_ordered_no_func_info_0[1];

static const MR_EnumFunctorDescPtr analysis__analysis__enum_name_ordered_no_func_info_0[1];

static const MR_Integer analysis__analysis__functor_number_map_no_func_info_0[1];

static const MR_PseudoTypeInfo analysis__analysis__field_types_some_analysis_result_0_0[3];

static const MR_ConstString analysis__analysis__field_names_some_analysis_result_0_0[3];

static const MR_DuArgLocn analysis__analysis__field_locns_some_analysis_result_0_0[3];

static const MR_TypeClassConstraint_3Struct analysis__analysis__exist_tc_constr_some_analysis_result_0_0_1;

static const MR_TypeClassConstraint analysis__analysis__exist_tc_constrs_some_analysis_result_0_0[1];

static const MR_DuExistLocn analysis__analysis__exist_locns_some_analysis_result_0_0[3];

static const MR_DuExistInfo analysis__analysis__exist_info_some_analysis_result_0_0;

static const MR_DuFunctorDesc analysis__analysis__du_functor_desc_some_analysis_result_0_0;

static const MR_DuFunctorDescPtr analysis__analysis__du_stag_ordered_some_analysis_result_0_0[1];

static const MR_DuPtagLayout analysis__analysis__du_ptag_ordered_some_analysis_result_0[1];

static const MR_DuFunctorDescPtr analysis__analysis__du_name_ordered_some_analysis_result_0[1];

static const MR_Integer analysis__analysis__functor_number_map_some_analysis_result_0[1];

static const MR_ConstString analysis__analysis__type_class_id_var_names_to_term_1[1];

static const MR_TypeClassMethod analysis__analysis__type_class_id_method_ids_to_term_1[2];

static const MR_TypeClassId analysis__analysis__type_class_id_to_term_1;

static const MR_ConstString analysis__analysis__type_class_id_var_names_partial_order_2[2];

static const MR_TypeClassMethod analysis__analysis__type_class_id_method_ids_partial_order_2[2];

static const MR_TypeClassId analysis__analysis__type_class_id_partial_order_2;

static const MR_ConstString analysis__analysis__type_class_id_var_names_compiler_1[1];

static const MR_TypeClassMethod analysis__analysis__type_class_id_method_ids_compiler_1[5];

static const MR_TypeClassId analysis__analysis__type_class_id_compiler_1;

static const MR_ConstString analysis__analysis__type_class_id_var_names_call_pattern_2[2];

static const MR_TypeClassId analysis__analysis__type_class_id_call_pattern_2;

static const MR_TypeClassConstraint_2Struct analysis__analysis__type_class_decl_super_call_pattern_2_1;

static const MR_TypeClassConstraint_1Struct analysis__analysis__type_class_decl_super_call_pattern_2_2;

static const MR_TypeClassConstraint analysis__analysis__type_class_decl_supers_call_pattern_2[2];

static const MR_ConstString analysis__analysis__type_class_id_var_names_answer_pattern_2[2];

static const MR_TypeClassId analysis__analysis__type_class_id_answer_pattern_2;

static const MR_TypeClassConstraint_2Struct analysis__analysis__type_class_decl_super_answer_pattern_2_1;

static const MR_TypeClassConstraint_1Struct analysis__analysis__type_class_decl_super_answer_pattern_2_2;

static const MR_TypeClassConstraint analysis__analysis__type_class_decl_supers_answer_pattern_2[2];

static const MR_ConstString analysis__analysis__type_class_id_var_names_analysis_3[3];

static const MR_TypeClassMethod analysis__analysis__type_class_id_method_ids_analysis_3[6];

static const MR_TypeClassId analysis__analysis__type_class_id_analysis_3;

static const MR_TypeClassConstraint_2Struct analysis__analysis__type_class_decl_super_analysis_3_1;

static const MR_TypeClassConstraint_2Struct analysis__analysis__type_class_decl_super_analysis_3_2;

static const MR_TypeClassConstraint analysis__analysis__type_class_decl_supers_analysis_3[2];

static MR_bool MR_CALL 
analysis__IntroducedFrom__pred__clear_imdg_entries_pointing_at_3__1193__1_2_p_0(
  MR_Word ModuleName_4,
  MR_Word LambdaHeadVar__1_9);

static MR_bool MR_CALL 
analysis__IntroducedFrom__func__update_analysis_registry_5__976__1_1_f_0(
  MR_Word LambdaHeadVar__1_60,
  MR_Word * LambdaHeadVar__2_61);

static MR_Word MR_CALL 
analysis__IntroducedFrom__func__lookup_results_2__716__1_2_f_0(
  MR_Word TypeClassInfo_for_analysis_29,
  MR_Word LambdaHeadVar__1_24);

static MR_bool MR_CALL 
analysis__IntroducedFrom__pred__lookup_exactly_matching_result_even_from_invalid_modules__553__1_4_p_0(
  MR_Word TypeClassInfo_for_analysis_31,
  MR_Box FuncInfo_10,
  MR_Box Call_11,
  MR_Word LambdaHeadVar__1_22);

static MR_bool MR_CALL 
analysis__IntroducedFrom__func__lookup_requests__814__1_2_f_0(
  MR_Word TypeClassInfo_for_call_pattern_46,
  MR_Word LambdaHeadVar__1_22,
  MR_Box * LambdaHeadVar__2_23);

static MR_Box MR_CALL 
analysis__IntroducedFrom__func__lookup_existing_call_patterns__792__1_2_f_0(
  MR_Word TypeClassInfo_for_call_pattern_45,
  MR_Word LambdaHeadVar__1_23);

static MR_bool MR_CALL 
analysis__IntroducedFrom__pred__lookup_matching_results__731__1_4_p_0(
  MR_Word TypeClassInfo_for_analysis_21,
  MR_Box FuncInfo_10,
  MR_Box Call_11,
  MR_Word LambdaHeadVar__1_17);

static void MR_CALL 
analysis__analyses_3_p_1_1(
  void * env_ptr_arg);

static MR_Box MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_117_98_95_114_101_115_117_108_116_95_115_116_97_116_117_115_101_115_95_51_95_95_91_49_93_95_48_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_117_98_95_114_101_115_117_108_116_95_115_116_97_116_117_115_101_115_95_50_95_95_91_49_93_95_48_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
analysis__combine_func_imdg_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
analysis__clear_imdg_entries_pointing_at_3_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
analysis__clear_imdg_entries_pointing_at_2_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
analysis__update_intermodule_dependencies_2_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_49_95_95_91_51_93_95_48_3_p_0(
  MR_Word Var_11,
  MR_Word Var_12);

static void MR_CALL 
analysis__clear_imdg_entries_pointing_at_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
analysis__update_analysis_registry_5_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_bool MR_CALL 
analysis__update_analysis_registry_5_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
analysis__update_analysis_registry_5_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_52_95_95_91_54_93_95_48_3_p_0(
  MR_Word Var_11,
  MR_Word Var_12,
  MR_Word Var_13,
  MR_Box Var_14,
  MR_Box Var_15);

static void MR_CALL 
analysis__IntroducedFrom__pred__update_analysis_registry_5__914__1_7_p_0(
  MR_Word TypeClassInfo_for_analysis_148,
  MR_Word ModuleName_11,
  MR_Word FuncId_13,
  MR_Box Call_17,
  MR_Box NewAnswer_18);

static void MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_51_95_95_91_54_93_95_48_3_p_0(
  MR_Word Var_11,
  MR_Box Var_12,
  MR_Box Var_13,
  MR_Word Var_14,
  MR_Word Var_15);

static void MR_CALL 
analysis__IntroducedFrom__pred__update_analysis_registry_5__943__1_7_p_0(
  MR_Word TypeClassInfo_for_analysis_148,
  MR_Box NewAnswer_18,
  MR_Box OldAnswer_25,
  MR_Word Status_29,
  MR_Word DepModules_31);

static MR_bool MR_CALL 
analysis__imdg_dependent_modules_5_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
analysis__update_analysis_registry_4_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
analysis__update_analysis_registry_3_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
analysis__update_analysis_registry_2_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
analysis__write_analysis_files_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
analysis__write_analysis_files_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
analysis__write_analysis_files_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
analysis__write_analysis_files_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_Box MR_CALL 
analysis__lub_result_statuses_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
analysis__update_intermodule_dependencies_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
analysis__update_analysis_registry_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
analysis__prepare_intermodule_analysis_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_bool MR_CALL 
analysis__lookup_requests_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
analysis__lookup_existing_call_patterns_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
analysis__lookup_best_result_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
analysis__IntroducedFrom__pred__lookup_best_result__744__1_4_p_0(
  MR_Word ModuleName_8,
  MR_Word FuncId_9);

static MR_bool MR_CALL 
analysis__lookup_matching_results_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
analysis__lookup_exactly_matching_result_even_from_invalid_modules_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_54_95_95_91_51_93_95_48_3_p_0(
  MR_Word Var_11,
  MR_Word Var_12);

static void MR_CALL 
analysis__IntroducedFrom__pred__lookup_results_1__694__1_4_p_0(
  MR_Word TypeClassInfo_for_analysis_62,
  MR_Word ResultList_10);

static void MR_CALL 
analysis__IntroducedFrom__pred__lookup_results_1__676__1_4_p_0(
  MR_Word ModuleName_7,
  MR_Word FuncId_8);

static MR_Box MR_CALL 
analysis__lookup_results_2_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
analysis____Unify____analysis_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
analysis____Compare____analysis_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
analysis____Unify____analysis_map_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
analysis____Compare____analysis_map_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
analysis____Unify____analysis_name_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
analysis____Compare____analysis_name_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
analysis____Unify____analysis_request_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
analysis____Compare____analysis_request_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
analysis____Unify____analysis_result_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static void MR_CALL 
analysis____Compare____analysis_result_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5);

static MR_bool MR_CALL 
analysis____Unify____analysis_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
analysis____Compare____analysis_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
analysis____Unify____analysis_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
analysis____Compare____analysis_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
analysis____Unify____any_call_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
analysis____Compare____any_call_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
analysis____Unify____fixpoint_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
analysis____Compare____fixpoint_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
analysis____Unify____func_analysis_map_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
analysis____Compare____func_analysis_map_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
analysis____Unify____func_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
analysis____Compare____func_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
analysis____Unify____imdg_arc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
analysis____Compare____imdg_arc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
analysis____Unify____make_analysis_registry_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
analysis____Compare____make_analysis_registry_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
analysis____Unify____module_analysis_map_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
analysis____Compare____module_analysis_map_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
analysis____Unify____no_func_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
analysis____Compare____no_func_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
analysis____Unify____some_analysis_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
analysis____Compare____some_analysis_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_Box MR_CALL 
analysis__ClassMethod_for_analysis__to_term____analysis__any_call__arity0______analysis__to_term_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
analysis__ClassMethod_for_analysis__to_term____analysis__any_call__arity0______analysis__from_term_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__any_call__arity0______analysis__more_precise_than_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__any_call__arity0______analysis__equivalent_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box analysis_scalar_common_1[4][2];

static /* final */ const MR_Box analysis_scalar_common_2[16][3];

static /* final */ const MR_Box analysis_scalar_common_3[1][1];

static /* final */ const MR_Integer analysis_scalar_common_4[2][3];

static /* final */ const MR_Box analysis_scalar_common_5[8][6];

static /* final */ const MR_Integer analysis_scalar_common_6[1][4];

static /* final */ const MR_Box analysis_scalar_common_7[4][7];

static /* final */ const MR_Box analysis_scalar_common_8[3][8];

static /* final */ const MR_Integer analysis_scalar_common_9[1][2];

static /* final */ const MR_Box analysis_scalar_common_10[1][9];

static /* final */ const MR_Box analysis_scalar_common_11[1][11];

static /* final */ const MR_Box analysis_scalar_common_12[2][12];

static /* final */ const MR_Box analysis_scalar_common_13[1][10];

static /* final */ const MR_Box analysis_scalar_common_14[2][5];




static /* final */ const MR_Box analysis_scalar_common_1[4][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_request_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_some_analysis_result_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_imdg_arc_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};

static /* final */ const MR_Box analysis_scalar_common_2[16][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_func_id_0)),
    ((MR_Box) (&analysis_scalar_common_1[0]))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&analysis_scalar_common_2[0]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_func_id_0)),
    ((MR_Box) (&analysis_scalar_common_1[1]))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&analysis_scalar_common_2[2]))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_func_id_0)),
    ((MR_Box) (&analysis_scalar_common_1[2]))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&analysis_scalar_common_2[4]))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&analysis_scalar_common_2[1]))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_status_0))
  },
  /* row   8 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&analysis_scalar_common_2[3]))
  },
  /* row   9 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&analysis_scalar_common_2[5]))
  },
  /* row  10 */
  {
    ((MR_Box) (&analysis_scalar_common_7[2])),
    ((MR_Box) (analysis__lub_result_statuses_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&analysis_scalar_common_14[0])),
    ((MR_Box) (analysis__update_analysis_registry_5_9_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  12 */
  {
    ((MR_Box) (&analysis_scalar_common_5[4])),
    ((MR_Box) (analysis__update_intermodule_dependencies_2_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  13 */
  {
    ((MR_Box) (&analysis_scalar_common_5[6])),
    ((MR_Box) (analysis__combine_func_imdg_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  14 */
  {
    ((MR_Box) (&analysis_scalar_common_7[3])),
    ((MR_Box) (analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_117_98_95_114_101_115_117_108_116_95_115_116_97_116_117_115_101_115_95_50_95_95_91_49_93_95_48_3_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  15 */
  {
    ((MR_Box) (&analysis_scalar_common_5[7])),
    ((MR_Box) (analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_117_98_95_114_101_115_117_108_116_95_115_116_97_116_117_115_101_115_95_51_95_95_91_49_93_95_48_3_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box analysis_scalar_common_3[1][1] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_String) "any"))
  },
};

static /* final */ const MR_Integer analysis_scalar_common_4[2][3] = {
  /* row   0 */
  {
    (MR_Integer) 2,
    (MR_Integer) 67727,
    (MR_Integer) 67759
  },
  /* row   1 */
  {
    (MR_Integer) 2,
    (MR_Integer) 67695,
    (MR_Integer) 67727
  },
};

static /* final */ const MR_Box analysis_scalar_common_5[8][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (&analysis_scalar_common_4[0])),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_some_analysis_result_0)),
    ((MR_Box) (&analysis__analysis__pti_analysis_result_2__pseudo_1__pseudo_2))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (&analysis_scalar_common_9[0])),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_some_analysis_result_0)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (&analysis_scalar_common_9[0])),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_request_0)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&analysis__tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__plain_list__ti_list_1analysis__type_ctor_info_imdg_arc_0)),
    ((MR_Box) (&analysis__tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__plain_list__ti_list_1analysis__type_ctor_info_imdg_arc_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&analysis__tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__plain_list__ti_list_1analysis__type_ctor_info_imdg_arc_0)),
    ((MR_Box) (&analysis__tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__plain_list__ti_list_1analysis__type_ctor_info_imdg_arc_0)),
    ((MR_Box) (&analysis__tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__plain_list__ti_list_1analysis__type_ctor_info_imdg_arc_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&analysis__list__pti_list_1__plain_analysis__type_ctor_info_imdg_arc_0)),
    ((MR_Box) (&analysis__list__pti_list_1__plain_analysis__type_ctor_info_imdg_arc_0))
  },
  /* row   6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&analysis__list__pti_list_1__plain_analysis__type_ctor_info_imdg_arc_0)),
    ((MR_Box) (&analysis__list__pti_list_1__plain_analysis__type_ctor_info_imdg_arc_0)),
    ((MR_Box) (&analysis__list__pti_list_1__plain_analysis__type_ctor_info_imdg_arc_0))
  },
  /* row   7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_some_analysis_result_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_status_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_status_0))
  },
};

static /* final */ const MR_Integer analysis_scalar_common_6[1][4] = {
  /* row   0 */
  {
    (MR_Integer) 3,
    (MR_Integer) 67695,
    (MR_Integer) 67727,
    (MR_Integer) 67759
  },
};

static /* final */ const MR_Box analysis_scalar_common_7[4][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (&analysis_scalar_common_6[0])),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&analysis__analysis__pti_analysis_result_2__pseudo_2__pseudo_3))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_info_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_info_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&analysis__tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__plain_list__ti_list_1analysis__type_ctor_info_some_analysis_result_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_status_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_status_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_func_id_0)),
    ((MR_Box) (&analysis__list__pti_list_1__plain_analysis__type_ctor_info_some_analysis_result_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_status_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_status_0))
  },
};

static /* final */ const MR_Box analysis_scalar_common_8[3][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (&analysis_scalar_common_6[0])),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&analysis__analysis__pti_analysis_result_2__pseudo_2__pseudo_3)),
    ((MR_Box) (&analysis__analysis__pti_analysis_result_2__pseudo_2__pseudo_3)),
    ((MR_Box) (&analysis__analysis__pti_analysis_result_2__pseudo_2__pseudo_3))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_info_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (&analysis_scalar_common_4[1])),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_imdg_arc_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};

static /* final */ const MR_Integer analysis_scalar_common_9[1][2] = {
  /* row   0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 67727
  },
};

static /* final */ const MR_Box analysis_scalar_common_10[1][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_info_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box analysis_scalar_common_11[1][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&analysis__tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__plain_list__ti_list_1analysis__type_ctor_info_some_analysis_result_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_info_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box analysis_scalar_common_12[2][12] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_func_id_0)),
    ((MR_Box) (&analysis__list__pti_list_1__plain_analysis__type_ctor_info_some_analysis_result_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_info_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_func_id_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_some_analysis_result_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_info_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box analysis_scalar_common_13[1][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_status_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_info_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box analysis_scalar_common_14[2][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_request_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_imdg_arc_0))
  },
};



#include "analysis.mh"
#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#line 1405 "analysis.m"
MR_Word analysis__mutable_variable_debug_analysis;
#ifdef MR_THREAD_SAFE
    MercuryLock analysis__mutable_variable_debug_analysis_lock;
#endif


#line 1405 "analysis.m"
void 
analysis__user_init_pred_165_0(void)
#line 1405 "analysis.m"
{
#line 1405 "analysis.m"
	analysis__initialise_mutable_debug_analysis_0_p_0();
}


static const MR_FA_PseudoTypeInfo_Struct2 analysis__analysis__pti_analysis_result_2__pseudo_1__pseudo_2 = {
  &analysis__analysis__type_ctor_info_analysis_result_2,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) ((MR_Integer) 2)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 analysis__analysis__pti_analysis_result_2__pseudo_2__pseudo_3 = {
  &analysis__analysis__type_ctor_info_analysis_result_2,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 2),
    (MR_PseudoTypeInfo) ((MR_Integer) 3)
  }
};

static const MR_FA_TypeInfo_Struct1 analysis__list__ti_list_1analysis__type_ctor_info_some_analysis_result_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&analysis__analysis__type_ctor_info_some_analysis_result_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 analysis__tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__plain_list__ti_list_1analysis__type_ctor_info_some_analysis_result_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&analysis__analysis__type_ctor_info_func_id_0),
    (MR_PseudoTypeInfo) (&analysis__list__ti_list_1analysis__type_ctor_info_some_analysis_result_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 analysis__list__pti_list_1__plain_analysis__type_ctor_info_some_analysis_result_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&analysis__analysis__type_ctor_info_some_analysis_result_0)
  }
};

static const MR_FA_TypeInfo_Struct1 analysis__list__ti_list_1analysis__type_ctor_info_imdg_arc_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&analysis__analysis__type_ctor_info_imdg_arc_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 analysis__tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__plain_list__ti_list_1analysis__type_ctor_info_imdg_arc_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&analysis__analysis__type_ctor_info_func_id_0),
    (MR_PseudoTypeInfo) (&analysis__list__ti_list_1analysis__type_ctor_info_imdg_arc_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 analysis__list__pti_list_1__plain_analysis__type_ctor_info_imdg_arc_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&analysis__analysis__type_ctor_info_imdg_arc_0)
  }
};

static const MR_FA_TypeInfo_Struct1 analysis__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

static const MR_FA_TypeInfo_Struct1 analysis__list__ti_list_1analysis__type_ctor_info_analysis_request_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&analysis__analysis__type_ctor_info_analysis_request_0)
  }
};

static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_analysis_request_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&analysis__analysis__type_ctor_info_func_id_0),
    (MR_TypeInfo) (&analysis__list__ti_list_1analysis__type_ctor_info_analysis_request_0)
  }
};

static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_analysis_request_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_TypeInfo) (&analysis__tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_analysis_request_0)
  }
};

static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_analysis_request_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&analysis__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_analysis_request_0)
  }
};

static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0analysis__type_ctor_info_analysis_status_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&analysis__analysis__type_ctor_info_analysis_status_0)
  }
};

static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&analysis__analysis__type_ctor_info_func_id_0),
    (MR_TypeInfo) (&analysis__list__ti_list_1analysis__type_ctor_info_some_analysis_result_0)
  }
};

static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_TypeInfo) (&analysis__tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0)
  }
};

static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&analysis__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0)
  }
};

static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_imdg_arc_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&analysis__analysis__type_ctor_info_func_id_0),
    (MR_TypeInfo) (&analysis__list__ti_list_1analysis__type_ctor_info_imdg_arc_0)
  }
};

static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_imdg_arc_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_TypeInfo) (&analysis__tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_imdg_arc_0)
  }
};

static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_imdg_arc_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&analysis__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_imdg_arc_0)
  }
};

static const MR_PseudoTypeInfo analysis__analysis__field_types_analysis_info_0_0[10] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 513),
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&analysis__analysis__type_ctor_info_make_analysis_registry_0),
  (MR_PseudoTypeInfo) (&analysis__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&analysis__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_analysis_request_0),
  (MR_PseudoTypeInfo) (&analysis__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0analysis__type_ctor_info_analysis_status_0),
  (MR_PseudoTypeInfo) (&analysis__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0),
  (MR_PseudoTypeInfo) (&analysis__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0),
  (MR_PseudoTypeInfo) (&analysis__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_imdg_arc_0),
  (MR_PseudoTypeInfo) (&analysis__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_imdg_arc_0)
};

static const MR_ConstString analysis__analysis__field_names_analysis_info_0_0[10] = {
  (MR_String) "compiler",
  (MR_String) "this_module",
  (MR_String) "make_analysis_registry",
  (MR_String) "local_module_names",
  (MR_String) "analysis_requests",
  (MR_String) "module_statuses",
  (MR_String) "old_analysis_results",
  (MR_String) "new_analysis_results",
  (MR_String) "old_imdg",
  (MR_String) "new_imdg"
};

static const MR_DuArgLocn analysis__analysis__field_locns_analysis_info_0_0[10] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 1
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
  },
  {
    (MR_Integer) 9,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_TypeClassConstraint_1Struct analysis__analysis__exist_tc_constr_analysis_info_0_0_1 = {
  &analysis__analysis__type_class_decl_compiler_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_TypeClassConstraint analysis__analysis__exist_tc_constrs_analysis_info_0_0[1] = {
  (MR_TypeClassConstraint) (&analysis__analysis__exist_tc_constr_analysis_info_0_0_1)
};

static const MR_DuExistLocn analysis__analysis__exist_locns_analysis_info_0_0[1] = {
  {
    INT16_C(0),
    INT16_C(1)
  }
};

static const MR_DuExistInfo analysis__analysis__exist_info_analysis_info_0_0 = {
  INT16_C(0),
  INT16_C(1),
  INT16_C(1),
  analysis__analysis__exist_locns_analysis_info_0_0,
  analysis__analysis__exist_tc_constrs_analysis_info_0_0
};

static const MR_DuFunctorDesc analysis__analysis__du_functor_desc_analysis_info_0_0 = {
  (MR_String) "analysis_info",
  INT16_C(10),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  analysis__analysis__field_types_analysis_info_0_0,
  analysis__analysis__field_names_analysis_info_0_0,
  analysis__analysis__field_locns_analysis_info_0_0,
  &analysis__analysis__exist_info_analysis_info_0_0,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr analysis__analysis__du_stag_ordered_analysis_info_0_0[1] = {
  &analysis__analysis__du_functor_desc_analysis_info_0_0
};

static const MR_DuPtagLayout analysis__analysis__du_ptag_ordered_analysis_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    analysis__analysis__du_stag_ordered_analysis_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr analysis__analysis__du_name_ordered_analysis_info_0[1] = {
  &analysis__analysis__du_functor_desc_analysis_info_0_0
};

static const MR_Integer analysis__analysis__functor_number_map_analysis_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct analysis__analysis__type_ctor_info_analysis_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (analysis____Unify____analysis_info_0_0_10001)),
  ((MR_Box) (analysis____Compare____analysis_info_0_0_10001)),
  (MR_String) "analysis",
  (MR_String) "analysis_info",
  { analysis__analysis__du_name_ordered_analysis_info_0 },
  { analysis__analysis__du_ptag_ordered_analysis_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  analysis__analysis__functor_number_map_analysis_info_0,

};

static const MR_FA_PseudoTypeInfo_Struct1 analysis__list__pti_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 analysis__tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__pseudo_list__pti_list_1__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&analysis__analysis__type_ctor_info_func_id_0),
    (MR_PseudoTypeInfo) (&analysis__list__pti_list_1__pseudo_1)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 analysis__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__pseudo_tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__pseudo_list__pti_list_1__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&analysis__tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__pseudo_list__pti_list_1__pseudo_1)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 analysis__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__pseudo_tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__pseudo_list__pti_list_1__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&analysis__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__pseudo_tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__pseudo_list__pti_list_1__pseudo_1)
  }
};

const MR_TypeCtorInfo_Struct analysis__analysis__type_ctor_info_analysis_map_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (analysis____Unify____analysis_map_1_0_10001)),
  ((MR_Box) (analysis____Compare____analysis_map_1_0_10001)),
  (MR_String) "analysis",
  (MR_String) "analysis_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&analysis__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__pseudo_tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__pseudo_list__pti_list_1__pseudo_1) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct analysis__analysis__type_ctor_info_analysis_name_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (analysis____Unify____analysis_name_0_0_10001)),
  ((MR_Box) (analysis____Compare____analysis_name_0_0_10001)),
  (MR_String) "analysis",
  (MR_String) "analysis_name",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo analysis__analysis__field_types_analysis_request_0_0[2] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 514),
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
};

static const MR_ConstString analysis__analysis__field_names_analysis_request_0_0[2] = {
  (MR_String) "req_call",
  (MR_String) "req_caller"
};

static const MR_TypeClassConstraint_2Struct analysis__analysis__exist_tc_constr_analysis_request_0_0_1 = {
  &analysis__analysis__type_class_decl_call_pattern_2,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) ((MR_Integer) 2)
  }
};

static const MR_TypeClassConstraint analysis__analysis__exist_tc_constrs_analysis_request_0_0[1] = {
  (MR_TypeClassConstraint) (&analysis__analysis__exist_tc_constr_analysis_request_0_0_1)
};

static const MR_DuExistLocn analysis__analysis__exist_locns_analysis_request_0_0[2] = {
  {
    INT16_C(0),
    INT16_C(3)
  },
  {
    INT16_C(0),
    INT16_C(4)
  }
};

static const MR_DuExistInfo analysis__analysis__exist_info_analysis_request_0_0 = {
  INT16_C(0),
  INT16_C(2),
  INT16_C(1),
  analysis__analysis__exist_locns_analysis_request_0_0,
  analysis__analysis__exist_tc_constrs_analysis_request_0_0
};

static const MR_DuFunctorDesc analysis__analysis__du_functor_desc_analysis_request_0_0 = {
  (MR_String) "analysis_request",
  INT16_C(2),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  analysis__analysis__field_types_analysis_request_0_0,
  analysis__analysis__field_names_analysis_request_0_0,
  NULL,
  &analysis__analysis__exist_info_analysis_request_0_0,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr analysis__analysis__du_stag_ordered_analysis_request_0_0[1] = {
  &analysis__analysis__du_functor_desc_analysis_request_0_0
};

static const MR_DuPtagLayout analysis__analysis__du_ptag_ordered_analysis_request_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    analysis__analysis__du_stag_ordered_analysis_request_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr analysis__analysis__du_name_ordered_analysis_request_0[1] = {
  &analysis__analysis__du_functor_desc_analysis_request_0_0
};

static const MR_Integer analysis__analysis__functor_number_map_analysis_request_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct analysis__analysis__type_ctor_info_analysis_request_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (analysis____Unify____analysis_request_0_0_10001)),
  ((MR_Box) (analysis____Compare____analysis_request_0_0_10001)),
  (MR_String) "analysis",
  (MR_String) "analysis_request",
  { analysis__analysis__du_name_ordered_analysis_request_0 },
  { analysis__analysis__du_ptag_ordered_analysis_request_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  analysis__analysis__functor_number_map_analysis_request_0,

};

static const MR_PseudoTypeInfo analysis__analysis__field_types_analysis_result_2_0[3] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) ((MR_Integer) 2),
  (MR_PseudoTypeInfo) (&analysis__analysis__type_ctor_info_analysis_status_0)
};

static const MR_ConstString analysis__analysis__field_names_analysis_result_2_0[3] = {
  (MR_String) "ar_call",
  (MR_String) "ar_answer",
  (MR_String) "ar_status"
};

static const MR_DuArgLocn analysis__analysis__field_locns_analysis_result_2_0[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 2
  }
};

static const MR_DuFunctorDesc analysis__analysis__du_functor_desc_analysis_result_2_0 = {
  (MR_String) "analysis_result",
  INT16_C(3),
  UINT16_C(3),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  analysis__analysis__field_types_analysis_result_2_0,
  analysis__analysis__field_names_analysis_result_2_0,
  analysis__analysis__field_locns_analysis_result_2_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr analysis__analysis__du_stag_ordered_analysis_result_2_0[1] = {
  &analysis__analysis__du_functor_desc_analysis_result_2_0
};

static const MR_DuPtagLayout analysis__analysis__du_ptag_ordered_analysis_result_2[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    analysis__analysis__du_stag_ordered_analysis_result_2_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr analysis__analysis__du_name_ordered_analysis_result_2[1] = {
  &analysis__analysis__du_functor_desc_analysis_result_2_0
};

static const MR_Integer analysis__analysis__functor_number_map_analysis_result_2[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct analysis__analysis__type_ctor_info_analysis_result_2 = {
  (MR_Integer) 2,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (analysis____Unify____analysis_result_2_0_10001)),
  ((MR_Box) (analysis____Compare____analysis_result_2_0_10001)),
  (MR_String) "analysis",
  (MR_String) "analysis_result",
  { analysis__analysis__du_name_ordered_analysis_result_2 },
  { analysis__analysis__du_ptag_ordered_analysis_result_2 },
  (MR_Integer) 1,
  UINT16_C(12),
  analysis__analysis__functor_number_map_analysis_result_2,

};

static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_analysis_status_0_0 = {
  (MR_String) "invalid",
  INT32_C(0)
};

static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_analysis_status_0_1 = {
  (MR_String) "suboptimal",
  INT32_C(1)
};

static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_analysis_status_0_2 = {
  (MR_String) "optimal",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr analysis__analysis__enum_ordinal_ordered_analysis_status_0[3] = {
  &analysis__analysis__enum_functor_desc_analysis_status_0_0,
  &analysis__analysis__enum_functor_desc_analysis_status_0_1,
  &analysis__analysis__enum_functor_desc_analysis_status_0_2
};

static const MR_EnumFunctorDescPtr analysis__analysis__enum_name_ordered_analysis_status_0[3] = {
  &analysis__analysis__enum_functor_desc_analysis_status_0_0,
  &analysis__analysis__enum_functor_desc_analysis_status_0_2,
  &analysis__analysis__enum_functor_desc_analysis_status_0_1
};

static const MR_Integer analysis__analysis__functor_number_map_analysis_status_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct analysis__analysis__type_ctor_info_analysis_status_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (analysis____Unify____analysis_status_0_0_10001)),
  ((MR_Box) (analysis____Compare____analysis_status_0_0_10001)),
  (MR_String) "analysis",
  (MR_String) "analysis_status",
  { analysis__analysis__enum_name_ordered_analysis_status_0 },
  { analysis__analysis__enum_ordinal_ordered_analysis_status_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  analysis__analysis__functor_number_map_analysis_status_0,

};

static const MR_FA_PseudoTypeInfo_Struct1 analysis__unit__pti_unit_1__pseudo_514 = {
  &mercury__unit__unit__type_ctor_info_unit_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 514)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 analysis__unit__pti_unit_1__pseudo_515 = {
  &mercury__unit__unit__type_ctor_info_unit_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 515)
  }
};

static const MR_PseudoTypeInfo analysis__analysis__field_types_analysis_type_0_0[2] = {
  (MR_PseudoTypeInfo) (&analysis__unit__pti_unit_1__pseudo_514),
  (MR_PseudoTypeInfo) (&analysis__unit__pti_unit_1__pseudo_515)
};

static const MR_TypeClassConstraint_3Struct analysis__analysis__exist_tc_constr_analysis_type_0_0_1 = {
  &analysis__analysis__type_class_decl_analysis_3,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) ((MR_Integer) 2),
    (MR_PseudoTypeInfo) ((MR_Integer) 3)
  }
};

static const MR_TypeClassConstraint analysis__analysis__exist_tc_constrs_analysis_type_0_0[1] = {
  (MR_TypeClassConstraint) (&analysis__analysis__exist_tc_constr_analysis_type_0_0_1)
};

static const MR_DuExistLocn analysis__analysis__exist_locns_analysis_type_0_0[3] = {
  {
    INT16_C(0),
    INT16_C(3)
  },
  {
    INT16_C(0),
    INT16_C(4)
  },
  {
    INT16_C(0),
    INT16_C(5)
  }
};

static const MR_DuExistInfo analysis__analysis__exist_info_analysis_type_0_0 = {
  INT16_C(0),
  INT16_C(3),
  INT16_C(1),
  analysis__analysis__exist_locns_analysis_type_0_0,
  analysis__analysis__exist_tc_constrs_analysis_type_0_0
};

static const MR_DuFunctorDesc analysis__analysis__du_functor_desc_analysis_type_0_0 = {
  (MR_String) "analysis_type",
  INT16_C(2),
  UINT16_C(3),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  analysis__analysis__field_types_analysis_type_0_0,
  NULL,
  NULL,
  &analysis__analysis__exist_info_analysis_type_0_0,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr analysis__analysis__du_stag_ordered_analysis_type_0_0[1] = {
  &analysis__analysis__du_functor_desc_analysis_type_0_0
};

static const MR_DuPtagLayout analysis__analysis__du_ptag_ordered_analysis_type_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    analysis__analysis__du_stag_ordered_analysis_type_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr analysis__analysis__du_name_ordered_analysis_type_0[1] = {
  &analysis__analysis__du_functor_desc_analysis_type_0_0
};

static const MR_Integer analysis__analysis__functor_number_map_analysis_type_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct analysis__analysis__type_ctor_info_analysis_type_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (analysis____Unify____analysis_type_0_0_10001)),
  ((MR_Box) (analysis____Compare____analysis_type_0_0_10001)),
  (MR_String) "analysis",
  (MR_String) "analysis_type",
  { analysis__analysis__du_name_ordered_analysis_type_0 },
  { analysis__analysis__du_ptag_ordered_analysis_type_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  analysis__analysis__functor_number_map_analysis_type_0,

};

static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_any_call_0_0 = {
  (MR_String) "any_call",
  INT32_C(0)
};

static const MR_EnumFunctorDescPtr analysis__analysis__enum_ordinal_ordered_any_call_0[1] = {
  &analysis__analysis__enum_functor_desc_any_call_0_0
};

static const MR_EnumFunctorDescPtr analysis__analysis__enum_name_ordered_any_call_0[1] = {
  &analysis__analysis__enum_functor_desc_any_call_0_0
};

static const MR_Integer analysis__analysis__functor_number_map_any_call_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct analysis__analysis__type_ctor_info_any_call_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_DUMMY,
  ((MR_Box) (analysis____Unify____any_call_0_0_10001)),
  ((MR_Box) (analysis____Compare____any_call_0_0_10001)),
  (MR_String) "analysis",
  (MR_String) "any_call",
  { analysis__analysis__enum_name_ordered_any_call_0 },
  { analysis__analysis__enum_ordinal_ordered_any_call_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  analysis__analysis__functor_number_map_any_call_0,

};

static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_fixpoint_type_0_0 = {
  (MR_String) "least_fixpoint",
  INT32_C(0)
};

static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_fixpoint_type_0_1 = {
  (MR_String) "greatest_fixpoint",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr analysis__analysis__enum_ordinal_ordered_fixpoint_type_0[2] = {
  &analysis__analysis__enum_functor_desc_fixpoint_type_0_0,
  &analysis__analysis__enum_functor_desc_fixpoint_type_0_1
};

static const MR_EnumFunctorDescPtr analysis__analysis__enum_name_ordered_fixpoint_type_0[2] = {
  &analysis__analysis__enum_functor_desc_fixpoint_type_0_1,
  &analysis__analysis__enum_functor_desc_fixpoint_type_0_0
};

static const MR_Integer analysis__analysis__functor_number_map_fixpoint_type_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct analysis__analysis__type_ctor_info_fixpoint_type_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (analysis____Unify____fixpoint_type_0_0_10001)),
  ((MR_Box) (analysis____Compare____fixpoint_type_0_0_10001)),
  (MR_String) "analysis",
  (MR_String) "fixpoint_type",
  { analysis__analysis__enum_name_ordered_fixpoint_type_0 },
  { analysis__analysis__enum_ordinal_ordered_fixpoint_type_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  analysis__analysis__functor_number_map_fixpoint_type_0,

};

const MR_TypeCtorInfo_Struct analysis__analysis__type_ctor_info_func_analysis_map_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (analysis____Unify____func_analysis_map_1_0_10001)),
  ((MR_Box) (analysis____Compare____func_analysis_map_1_0_10001)),
  (MR_String) "analysis",
  (MR_String) "func_analysis_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&analysis__tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__pseudo_list__pti_list_1__pseudo_1) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo analysis__analysis__field_types_func_id_0_0[4] = {
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_form_arity_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_ConstString analysis__analysis__field_names_func_id_0_0[4] = {
  (MR_String) "fid_pf",
  (MR_String) "fid_name",
  (MR_String) "fid_arity",
  (MR_String) "fid_mode"
};

static const MR_DuArgLocn analysis__analysis__field_locns_func_id_0_0[4] = {
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
  }
};

static const MR_DuFunctorDesc analysis__analysis__du_functor_desc_func_id_0_0 = {
  (MR_String) "func_id",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  analysis__analysis__field_types_func_id_0_0,
  analysis__analysis__field_names_func_id_0_0,
  analysis__analysis__field_locns_func_id_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr analysis__analysis__du_stag_ordered_func_id_0_0[1] = {
  &analysis__analysis__du_functor_desc_func_id_0_0
};

static const MR_DuPtagLayout analysis__analysis__du_ptag_ordered_func_id_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    analysis__analysis__du_stag_ordered_func_id_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr analysis__analysis__du_name_ordered_func_id_0[1] = {
  &analysis__analysis__du_functor_desc_func_id_0_0
};

static const MR_Integer analysis__analysis__functor_number_map_func_id_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct analysis__analysis__type_ctor_info_func_id_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (analysis____Unify____func_id_0_0_10001)),
  ((MR_Box) (analysis____Compare____func_id_0_0_10001)),
  (MR_String) "analysis",
  (MR_String) "func_id",
  { analysis__analysis__du_name_ordered_func_id_0 },
  { analysis__analysis__du_ptag_ordered_func_id_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  analysis__analysis__functor_number_map_func_id_0,

};

static const MR_PseudoTypeInfo analysis__analysis__field_types_imdg_arc_0_0[2] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 514),
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
};

static const MR_ConstString analysis__analysis__field_names_imdg_arc_0_0[2] = {
  (MR_String) "imdg_call",
  (MR_String) "imdg_caller"
};

static const MR_TypeClassConstraint_2Struct analysis__analysis__exist_tc_constr_imdg_arc_0_0_1 = {
  &analysis__analysis__type_class_decl_call_pattern_2,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) ((MR_Integer) 2)
  }
};

static const MR_TypeClassConstraint analysis__analysis__exist_tc_constrs_imdg_arc_0_0[1] = {
  (MR_TypeClassConstraint) (&analysis__analysis__exist_tc_constr_imdg_arc_0_0_1)
};

static const MR_DuExistLocn analysis__analysis__exist_locns_imdg_arc_0_0[2] = {
  {
    INT16_C(0),
    INT16_C(3)
  },
  {
    INT16_C(0),
    INT16_C(4)
  }
};

static const MR_DuExistInfo analysis__analysis__exist_info_imdg_arc_0_0 = {
  INT16_C(0),
  INT16_C(2),
  INT16_C(1),
  analysis__analysis__exist_locns_imdg_arc_0_0,
  analysis__analysis__exist_tc_constrs_imdg_arc_0_0
};

static const MR_DuFunctorDesc analysis__analysis__du_functor_desc_imdg_arc_0_0 = {
  (MR_String) "imdg_arc",
  INT16_C(2),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  analysis__analysis__field_types_imdg_arc_0_0,
  analysis__analysis__field_names_imdg_arc_0_0,
  NULL,
  &analysis__analysis__exist_info_imdg_arc_0_0,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr analysis__analysis__du_stag_ordered_imdg_arc_0_0[1] = {
  &analysis__analysis__du_functor_desc_imdg_arc_0_0
};

static const MR_DuPtagLayout analysis__analysis__du_ptag_ordered_imdg_arc_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    analysis__analysis__du_stag_ordered_imdg_arc_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr analysis__analysis__du_name_ordered_imdg_arc_0[1] = {
  &analysis__analysis__du_functor_desc_imdg_arc_0_0
};

static const MR_Integer analysis__analysis__functor_number_map_imdg_arc_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct analysis__analysis__type_ctor_info_imdg_arc_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (analysis____Unify____imdg_arc_0_0_10001)),
  ((MR_Box) (analysis____Compare____imdg_arc_0_0_10001)),
  (MR_String) "analysis",
  (MR_String) "imdg_arc",
  { analysis__analysis__du_name_ordered_imdg_arc_0 },
  { analysis__analysis__du_ptag_ordered_imdg_arc_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  analysis__analysis__functor_number_map_imdg_arc_0,

};

static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_make_analysis_registry_0_0 = {
  (MR_String) "make_analysis_registry",
  INT32_C(0)
};

static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_make_analysis_registry_0_1 = {
  (MR_String) "use_analysis_registry_only",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr analysis__analysis__enum_ordinal_ordered_make_analysis_registry_0[2] = {
  &analysis__analysis__enum_functor_desc_make_analysis_registry_0_0,
  &analysis__analysis__enum_functor_desc_make_analysis_registry_0_1
};

static const MR_EnumFunctorDescPtr analysis__analysis__enum_name_ordered_make_analysis_registry_0[2] = {
  &analysis__analysis__enum_functor_desc_make_analysis_registry_0_0,
  &analysis__analysis__enum_functor_desc_make_analysis_registry_0_1
};

static const MR_Integer analysis__analysis__functor_number_map_make_analysis_registry_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct analysis__analysis__type_ctor_info_make_analysis_registry_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (analysis____Unify____make_analysis_registry_0_0_10001)),
  ((MR_Box) (analysis____Compare____make_analysis_registry_0_0_10001)),
  (MR_String) "analysis",
  (MR_String) "make_analysis_registry",
  { analysis__analysis__enum_name_ordered_make_analysis_registry_0 },
  { analysis__analysis__enum_ordinal_ordered_make_analysis_registry_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  analysis__analysis__functor_number_map_make_analysis_registry_0,

};

const MR_TypeCtorInfo_Struct analysis__analysis__type_ctor_info_module_analysis_map_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (analysis____Unify____module_analysis_map_1_0_10001)),
  ((MR_Box) (analysis____Compare____module_analysis_map_1_0_10001)),
  (MR_String) "analysis",
  (MR_String) "module_analysis_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&analysis__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__pseudo_tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__pseudo_list__pti_list_1__pseudo_1) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_no_func_info_0_0 = {
  (MR_String) "no_func_info",
  INT32_C(0)
};

static const MR_EnumFunctorDescPtr analysis__analysis__enum_ordinal_ordered_no_func_info_0[1] = {
  &analysis__analysis__enum_functor_desc_no_func_info_0_0
};

static const MR_EnumFunctorDescPtr analysis__analysis__enum_name_ordered_no_func_info_0[1] = {
  &analysis__analysis__enum_functor_desc_no_func_info_0_0
};

static const MR_Integer analysis__analysis__functor_number_map_no_func_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct analysis__analysis__type_ctor_info_no_func_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_DUMMY,
  ((MR_Box) (analysis____Unify____no_func_info_0_0_10001)),
  ((MR_Box) (analysis____Compare____no_func_info_0_0_10001)),
  (MR_String) "analysis",
  (MR_String) "no_func_info",
  { analysis__analysis__enum_name_ordered_no_func_info_0 },
  { analysis__analysis__enum_ordinal_ordered_no_func_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  analysis__analysis__functor_number_map_no_func_info_0,

};

static const MR_PseudoTypeInfo analysis__analysis__field_types_some_analysis_result_0_0[3] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 514),
  (MR_PseudoTypeInfo) ((MR_Integer) 515),
  (MR_PseudoTypeInfo) (&analysis__analysis__type_ctor_info_analysis_status_0)
};

static const MR_ConstString analysis__analysis__field_names_some_analysis_result_0_0[3] = {
  (MR_String) "some_ar_call",
  (MR_String) "some_ar_answer",
  (MR_String) "some_ar_status"
};

static const MR_DuArgLocn analysis__analysis__field_locns_some_analysis_result_0_0[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 2
  }
};

static const MR_TypeClassConstraint_3Struct analysis__analysis__exist_tc_constr_some_analysis_result_0_0_1 = {
  &analysis__analysis__type_class_decl_analysis_3,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) ((MR_Integer) 2),
    (MR_PseudoTypeInfo) ((MR_Integer) 3)
  }
};

static const MR_TypeClassConstraint analysis__analysis__exist_tc_constrs_some_analysis_result_0_0[1] = {
  (MR_TypeClassConstraint) (&analysis__analysis__exist_tc_constr_some_analysis_result_0_0_1)
};

static const MR_DuExistLocn analysis__analysis__exist_locns_some_analysis_result_0_0[3] = {
  {
    INT16_C(0),
    INT16_C(3)
  },
  {
    INT16_C(0),
    INT16_C(4)
  },
  {
    INT16_C(0),
    INT16_C(5)
  }
};

static const MR_DuExistInfo analysis__analysis__exist_info_some_analysis_result_0_0 = {
  INT16_C(0),
  INT16_C(3),
  INT16_C(1),
  analysis__analysis__exist_locns_some_analysis_result_0_0,
  analysis__analysis__exist_tc_constrs_some_analysis_result_0_0
};

static const MR_DuFunctorDesc analysis__analysis__du_functor_desc_some_analysis_result_0_0 = {
  (MR_String) "some_analysis_result",
  INT16_C(3),
  UINT16_C(3),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  analysis__analysis__field_types_some_analysis_result_0_0,
  analysis__analysis__field_names_some_analysis_result_0_0,
  analysis__analysis__field_locns_some_analysis_result_0_0,
  &analysis__analysis__exist_info_some_analysis_result_0_0,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr analysis__analysis__du_stag_ordered_some_analysis_result_0_0[1] = {
  &analysis__analysis__du_functor_desc_some_analysis_result_0_0
};

static const MR_DuPtagLayout analysis__analysis__du_ptag_ordered_some_analysis_result_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    analysis__analysis__du_stag_ordered_some_analysis_result_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr analysis__analysis__du_name_ordered_some_analysis_result_0[1] = {
  &analysis__analysis__du_functor_desc_some_analysis_result_0_0
};

static const MR_Integer analysis__analysis__functor_number_map_some_analysis_result_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct analysis__analysis__type_ctor_info_some_analysis_result_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (analysis____Unify____some_analysis_result_0_0_10001)),
  ((MR_Box) (analysis____Compare____some_analysis_result_0_0_10001)),
  (MR_String) "analysis",
  (MR_String) "some_analysis_result",
  { analysis__analysis__du_name_ordered_some_analysis_result_0 },
  { analysis__analysis__du_ptag_ordered_some_analysis_result_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  analysis__analysis__functor_number_map_some_analysis_result_0,

};

const MR_BaseTypeclassInfo base_typeclass_info_analysis__to_term__arity1__analysis__any_call__arity0__[7] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) (analysis__ClassMethod_for_analysis__to_term____analysis__any_call__arity0______analysis__to_term_1_1_f_0_10001)),
  ((MR_Box) (analysis__ClassMethod_for_analysis__to_term____analysis__any_call__arity0______analysis__from_term_2_2_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_analysis__partial_order__arity2__analysis__no_func_info__arity0__analysis__any_call__arity0__[7] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) (analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__any_call__arity0______analysis__more_precise_than_3_3_p_0_10001)),
  ((MR_Box) (analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__any_call__arity0______analysis__equivalent_3_3_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_analysis__call_pattern__arity2__analysis__no_func_info__arity0__analysis__any_call__arity0__[5] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 0))
};

static const MR_ConstString analysis__analysis__type_class_id_var_names_to_term_1[1] = {
  (MR_String) "S"
};

static const MR_TypeClassMethod analysis__analysis__type_class_id_method_ids_to_term_1[2] = {
  {
    (MR_String) "to_term",
    (MR_Integer) 2,
    MR_FUNCTION
  },
  {
    (MR_String) "from_term",
    (MR_Integer) 2,
    MR_PREDICATE
  }
};

static const MR_TypeClassId analysis__analysis__type_class_id_to_term_1 = {
  (MR_String) "analysis",
  (MR_String) "to_term",
  (MR_Integer) 1,
  (MR_Integer) 1,
  (MR_Integer) 2,
  analysis__analysis__type_class_id_var_names_to_term_1,
  analysis__analysis__type_class_id_method_ids_to_term_1
};

const MR_TypeClassDeclStruct analysis__analysis__type_class_decl_to_term_1 = {
  &analysis__analysis__type_class_id_to_term_1,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL
};

static const MR_ConstString analysis__analysis__type_class_id_var_names_partial_order_2[2] = {
  (MR_String) "FuncInfo",
  (MR_String) "T"
};

static const MR_TypeClassMethod analysis__analysis__type_class_id_method_ids_partial_order_2[2] = {
  {
    (MR_String) "more_precise_than",
    (MR_Integer) 3,
    MR_PREDICATE
  },
  {
    (MR_String) "equivalent",
    (MR_Integer) 3,
    MR_PREDICATE
  }
};

static const MR_TypeClassId analysis__analysis__type_class_id_partial_order_2 = {
  (MR_String) "analysis",
  (MR_String) "partial_order",
  (MR_Integer) 2,
  (MR_Integer) 2,
  (MR_Integer) 2,
  analysis__analysis__type_class_id_var_names_partial_order_2,
  analysis__analysis__type_class_id_method_ids_partial_order_2
};

const MR_TypeClassDeclStruct analysis__analysis__type_class_decl_partial_order_2 = {
  &analysis__analysis__type_class_id_partial_order_2,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL
};

static const MR_ConstString analysis__analysis__type_class_id_var_names_compiler_1[1] = {
  (MR_String) "Compiler"
};

static const MR_TypeClassMethod analysis__analysis__type_class_id_method_ids_compiler_1[5] = {
  {
    (MR_String) "compiler_name",
    (MR_Integer) 2,
    MR_FUNCTION
  },
  {
    (MR_String) "analyses",
    (MR_Integer) 3,
    MR_PREDICATE
  },
  {
    (MR_String) "analyses",
    (MR_Integer) 3,
    MR_PREDICATE
  },
  {
    (MR_String) "module_name_to_read_file_name",
    (MR_Integer) 7,
    MR_PREDICATE
  },
  {
    (MR_String) "module_name_to_write_file_name",
    (MR_Integer) 7,
    MR_PREDICATE
  }
};

static const MR_TypeClassId analysis__analysis__type_class_id_compiler_1 = {
  (MR_String) "analysis",
  (MR_String) "compiler",
  (MR_Integer) 1,
  (MR_Integer) 1,
  (MR_Integer) 5,
  analysis__analysis__type_class_id_var_names_compiler_1,
  analysis__analysis__type_class_id_method_ids_compiler_1
};

const MR_TypeClassDeclStruct analysis__analysis__type_class_decl_compiler_1 = {
  &analysis__analysis__type_class_id_compiler_1,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL
};

static const MR_ConstString analysis__analysis__type_class_id_var_names_call_pattern_2[2] = {
  (MR_String) "FuncInfo",
  (MR_String) "Call"
};

static const MR_TypeClassId analysis__analysis__type_class_id_call_pattern_2 = {
  (MR_String) "analysis",
  (MR_String) "call_pattern",
  (MR_Integer) 2,
  (MR_Integer) 2,
  (MR_Integer) 0,
  analysis__analysis__type_class_id_var_names_call_pattern_2,
  NULL
};

static const MR_TypeClassConstraint_2Struct analysis__analysis__type_class_decl_super_call_pattern_2_1 = {
  &analysis__analysis__type_class_decl_partial_order_2,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) ((MR_Integer) 2)
  }
};

static const MR_TypeClassConstraint_1Struct analysis__analysis__type_class_decl_super_call_pattern_2_2 = {
  &analysis__analysis__type_class_decl_to_term_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 2)
  }
};

static const MR_TypeClassConstraint analysis__analysis__type_class_decl_supers_call_pattern_2[2] = {
  (MR_TypeClassConstraint) (&analysis__analysis__type_class_decl_super_call_pattern_2_1),
  (MR_TypeClassConstraint) (&analysis__analysis__type_class_decl_super_call_pattern_2_2)
};

const MR_TypeClassDeclStruct analysis__analysis__type_class_decl_call_pattern_2 = {
  &analysis__analysis__type_class_id_call_pattern_2,
  (MR_Integer) 0,
  (MR_Integer) 2,
  NULL
};

static const MR_ConstString analysis__analysis__type_class_id_var_names_answer_pattern_2[2] = {
  (MR_String) "FuncInfo",
  (MR_String) "Answer"
};

static const MR_TypeClassId analysis__analysis__type_class_id_answer_pattern_2 = {
  (MR_String) "analysis",
  (MR_String) "answer_pattern",
  (MR_Integer) 2,
  (MR_Integer) 2,
  (MR_Integer) 0,
  analysis__analysis__type_class_id_var_names_answer_pattern_2,
  NULL
};

static const MR_TypeClassConstraint_2Struct analysis__analysis__type_class_decl_super_answer_pattern_2_1 = {
  &analysis__analysis__type_class_decl_partial_order_2,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) ((MR_Integer) 2)
  }
};

static const MR_TypeClassConstraint_1Struct analysis__analysis__type_class_decl_super_answer_pattern_2_2 = {
  &analysis__analysis__type_class_decl_to_term_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 2)
  }
};

static const MR_TypeClassConstraint analysis__analysis__type_class_decl_supers_answer_pattern_2[2] = {
  (MR_TypeClassConstraint) (&analysis__analysis__type_class_decl_super_answer_pattern_2_1),
  (MR_TypeClassConstraint) (&analysis__analysis__type_class_decl_super_answer_pattern_2_2)
};

const MR_TypeClassDeclStruct analysis__analysis__type_class_decl_answer_pattern_2 = {
  &analysis__analysis__type_class_id_answer_pattern_2,
  (MR_Integer) 0,
  (MR_Integer) 2,
  NULL
};

static const MR_ConstString analysis__analysis__type_class_id_var_names_analysis_3[3] = {
  (MR_String) "FuncInfo",
  (MR_String) "Call",
  (MR_String) "Answer"
};

static const MR_TypeClassMethod analysis__analysis__type_class_id_method_ids_analysis_3[6] = {
  {
    (MR_String) "analysis_name",
    (MR_Integer) 3,
    MR_FUNCTION
  },
  {
    (MR_String) "analysis_version_number",
    (MR_Integer) 3,
    MR_FUNCTION
  },
  {
    (MR_String) "preferred_fixpoint_type",
    (MR_Integer) 3,
    MR_FUNCTION
  },
  {
    (MR_String) "bottom",
    (MR_Integer) 3,
    MR_FUNCTION
  },
  {
    (MR_String) "top",
    (MR_Integer) 3,
    MR_FUNCTION
  },
  {
    (MR_String) "get_func_info",
    (MR_Integer) 6,
    MR_PREDICATE
  }
};

static const MR_TypeClassId analysis__analysis__type_class_id_analysis_3 = {
  (MR_String) "analysis",
  (MR_String) "analysis",
  (MR_Integer) 3,
  (MR_Integer) 3,
  (MR_Integer) 6,
  analysis__analysis__type_class_id_var_names_analysis_3,
  analysis__analysis__type_class_id_method_ids_analysis_3
};

static const MR_TypeClassConstraint_2Struct analysis__analysis__type_class_decl_super_analysis_3_1 = {
  &analysis__analysis__type_class_decl_call_pattern_2,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) ((MR_Integer) 2)
  }
};

static const MR_TypeClassConstraint_2Struct analysis__analysis__type_class_decl_super_analysis_3_2 = {
  &analysis__analysis__type_class_decl_answer_pattern_2,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) ((MR_Integer) 3)
  }
};

static const MR_TypeClassConstraint analysis__analysis__type_class_decl_supers_analysis_3[2] = {
  (MR_TypeClassConstraint) (&analysis__analysis__type_class_decl_super_analysis_3_1),
  (MR_TypeClassConstraint) (&analysis__analysis__type_class_decl_super_analysis_3_2)
};

const MR_TypeClassDeclStruct analysis__analysis__type_class_decl_analysis_3 = {
  &analysis__analysis__type_class_id_analysis_3,
  (MR_Integer) 0,
  (MR_Integer) 2,
  NULL
};

static MR_bool MR_CALL 
analysis__IntroducedFrom__pred__clear_imdg_entries_pointing_at_3__1193__1_2_p_0(
  MR_Word ModuleName_4,
  MR_Word LambdaHeadVar__1_9)
{
  MR_bool succeeded;
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_9, (MR_Integer) 2))));

  succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_4, Var_14);
  succeeded = !(succeeded);
  return succeeded;
}

static MR_bool MR_CALL 
analysis__IntroducedFrom__func__update_analysis_registry_5__976__1_1_f_0(
  MR_Word LambdaHeadVar__1_60,
  MR_Word * LambdaHeadVar__2_61)
{
  MR_bool succeeded;
  MR_Word TypeClassInfo_for_call_pattern_196 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_60, (MR_Integer) 0))));
  MR_Word TypeInfo_198_198;
  MR_Word TypeInfo_199_199;
  MR_Word Var_62;
  MR_Box Call0_71 = (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_60, (MR_Integer) 1));
  MR_Word Var_209;

  *LambdaHeadVar__2_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_60, (MR_Integer) 2))));
  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_call_pattern_196, (MR_Integer) 4, &TypeInfo_198_198);
  Var_62 = mercury__univ__univ_1_f_0(TypeInfo_198_198, Call0_71);
  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_call_pattern_196, (MR_Integer) 4, &TypeInfo_199_199);
  Var_209 = mercury__univ__univ_1_f_0(TypeInfo_199_199, Call0_71);
  succeeded = mercury__univ____Unify____univ_0_0(Var_62, Var_209);
  return succeeded;
}

static MR_Word MR_CALL 
analysis__IntroducedFrom__func__lookup_results_2__716__1_2_f_0(
  MR_Word TypeClassInfo_for_analysis_29,
  MR_Word LambdaHeadVar__1_24)
{
  MR_Word LambdaHeadVar__2_25;
  MR_Word TypeClassInfo_for_analysis_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_24, (MR_Integer) 0))));
  MR_Word TypeInfo_45_45;
  MR_Word TypeInfo_46_46;
  MR_Word TypeInfo_48_48;
  MR_Word TypeInfo_49_49;
  MR_Box Call_11;
  MR_Box Answer_13;
  MR_Word Status_18 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_24, (MR_Integer) 3))) & (MR_Integer) 3);
  MR_Box Call0_19 = (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_24, (MR_Integer) 1));
  MR_Box Answer0_20 = (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_24, (MR_Integer) 2));
  MR_Word Var_26;
  MR_Word Var_27;

  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_analysis_43, (MR_Integer) 4, &TypeInfo_45_45);
  Var_26 = mercury__univ__univ_1_f_0(TypeInfo_45_45, Call0_19);
  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_analysis_29, (MR_Integer) 4, &TypeInfo_46_46);
  mercury__univ__det_univ_to_type_2_p_0(TypeInfo_46_46, Var_26, &Call_11);
  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_analysis_43, (MR_Integer) 5, &TypeInfo_48_48);
  Var_27 = mercury__univ__univ_1_f_0(TypeInfo_48_48, Answer0_20);
  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_analysis_29, (MR_Integer) 5, &TypeInfo_49_49);
  mercury__univ__det_univ_to_type_2_p_0(TypeInfo_49_49, Var_27, &Answer_13);
  {
    LambdaHeadVar__2_25 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), LambdaHeadVar__2_25, 0) = Call_11;
    MR_hl_field(MR_mktag(0), LambdaHeadVar__2_25, 1) = Answer_13;
    MR_hl_field(MR_mktag(0), LambdaHeadVar__2_25, 2) = (MR_Box) ((MR_Unsigned) (Status_18));
  }
  return LambdaHeadVar__2_25;
}

static MR_bool MR_CALL 
analysis__IntroducedFrom__pred__lookup_exactly_matching_result_even_from_invalid_modules__553__1_4_p_0(
  MR_Word TypeClassInfo_for_analysis_31,
  MR_Box FuncInfo_10,
  MR_Box Call_11,
  MR_Word LambdaHeadVar__1_22)
{
  MR_bool succeeded;
  MR_Word TypeClassInfo_for_call_pattern_38;
  MR_Word TypeClassInfo_for_partial_order_40;
  MR_Box Var_23 = (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_22, (MR_Integer) 0));
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box);

  mercury__private_builtin__superclass_from_typeclass_info_3_p_0(TypeClassInfo_for_analysis_31, (MR_Integer) 1, &TypeClassInfo_for_call_pattern_38);
  mercury__private_builtin__superclass_from_typeclass_info_3_p_0(TypeClassInfo_for_call_pattern_38, (MR_Integer) 1, &TypeClassInfo_for_partial_order_40);
  func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_partial_order_40, (MR_Integer) 0)), (MR_Integer) 6))));
  succeeded = func_0(((MR_Box) (TypeClassInfo_for_partial_order_40)), FuncInfo_10, Call_11, Var_23);
  return succeeded;
}

static MR_bool MR_CALL 
analysis__IntroducedFrom__func__lookup_requests__814__1_2_f_0(
  MR_Word TypeClassInfo_for_call_pattern_46,
  MR_Word LambdaHeadVar__1_22,
  MR_Box * LambdaHeadVar__2_23)
{
  MR_bool succeeded;
  MR_Word TypeClassInfo_for_call_pattern_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_22, (MR_Integer) 0))));
  MR_Word TypeInfo_60_60;
  MR_Word TypeInfo_61_61;
  MR_Word Var_24;
  MR_Box Call0_26 = (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_22, (MR_Integer) 1));

  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_call_pattern_46, (MR_Integer) 4, &TypeInfo_60_60);
  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_call_pattern_58, (MR_Integer) 4, &TypeInfo_61_61);
  Var_24 = mercury__univ__univ_1_f_0(TypeInfo_61_61, Call0_26);
  succeeded = mercury__univ__univ_1_f_2(TypeInfo_60_60, LambdaHeadVar__2_23, Var_24);
  return succeeded;
}

static MR_Box MR_CALL 
analysis__IntroducedFrom__func__lookup_existing_call_patterns__792__1_2_f_0(
  MR_Word TypeClassInfo_for_call_pattern_45,
  MR_Word LambdaHeadVar__1_23)
{
  MR_Box LambdaHeadVar__2_24;
  MR_Word TypeClassInfo_for_analysis_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_23, (MR_Integer) 0))));
  MR_Word TypeInfo_59_59;
  MR_Word TypeInfo_60_60;
  MR_Box Call0_17 = (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_23, (MR_Integer) 1));
  MR_Word Var_25;

  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_analysis_57, (MR_Integer) 4, &TypeInfo_59_59);
  Var_25 = mercury__univ__univ_1_f_0(TypeInfo_59_59, Call0_17);
  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_call_pattern_45, (MR_Integer) 4, &TypeInfo_60_60);
  mercury__univ__det_univ_to_type_2_p_0(TypeInfo_60_60, Var_25, &LambdaHeadVar__2_24);
  return LambdaHeadVar__2_24;
}

static MR_bool MR_CALL 
analysis__IntroducedFrom__pred__lookup_matching_results__731__1_4_p_0(
  MR_Word TypeClassInfo_for_analysis_21,
  MR_Box FuncInfo_10,
  MR_Box Call_11,
  MR_Word LambdaHeadVar__1_17)
{
  MR_bool succeeded;
  MR_Box ResultCall_15 = (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_17, (MR_Integer) 0));

  {
    MR_Word TypeClassInfo_for_call_pattern_28;
    MR_Word TypeClassInfo_for_partial_order_30;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box);

    mercury__private_builtin__superclass_from_typeclass_info_3_p_0(TypeClassInfo_for_analysis_21, (MR_Integer) 1, &TypeClassInfo_for_call_pattern_28);
    mercury__private_builtin__superclass_from_typeclass_info_3_p_0(TypeClassInfo_for_call_pattern_28, (MR_Integer) 1, &TypeClassInfo_for_partial_order_30);
    func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_partial_order_30, (MR_Integer) 0)), (MR_Integer) 5))));
    succeeded = func_0(((MR_Box) (TypeClassInfo_for_partial_order_30)), FuncInfo_10, Call_11, ResultCall_15);
  }
  if (!(succeeded))
  {
    MR_Word TypeClassInfo_for_call_pattern_31;
    MR_Word TypeClassInfo_for_partial_order_33;
    MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box);

    mercury__private_builtin__superclass_from_typeclass_info_3_p_0(TypeClassInfo_for_analysis_21, (MR_Integer) 1, &TypeClassInfo_for_call_pattern_31);
    mercury__private_builtin__superclass_from_typeclass_info_3_p_0(TypeClassInfo_for_call_pattern_31, (MR_Integer) 1, &TypeClassInfo_for_partial_order_33);
    func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_partial_order_33, (MR_Integer) 0)), (MR_Integer) 6))));
    succeeded = func_1(((MR_Box) (TypeClassInfo_for_partial_order_33)), FuncInfo_10, Call_11, ResultCall_15);
  }
  return succeeded;
}

MR_bool MR_CALL 
analysis__ClassMethod_for_analysis__to_term____analysis__any_call__arity0______analysis__from_term_2_2_p_0(
  MR_Word Term_3)
{
  MR_bool succeeded;
  MR_Word Var_5;
  MR_String Var_6;
  MR_Word Var_7;

  succeeded = ((MR_tag((MR_Word) Term_3)) == (MR_Integer) 0);
  if (succeeded)
  {
    Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 0))));
    Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 1))));
    succeeded = (Var_7 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) Var_5)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_6 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 0))));
        succeeded = (strcmp(Var_6, (MR_String) "any") == 0);
      }
    }
  }
  return succeeded;
}

MR_Word MR_CALL 
analysis__ClassMethod_for_analysis__to_term____analysis__any_call__arity0______analysis__to_term_1_1_f_0(void)
{
  MR_Word Term_3;
  MR_Word Var_8;

  Var_8 = mercury__term__context_init_0_f_0();
  {
    Term_3 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Term_3, 0) = ((MR_Box) (&analysis_scalar_common_3[0]));
    MR_hl_field(MR_mktag(0), Term_3, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(0), Term_3, 2) = ((MR_Box) (Var_8));
  }
  return Term_3;
}

MR_bool MR_CALL 
analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__any_call__arity0______analysis__equivalent_3_3_p_0(void)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__semidet_succeed_0_p_0();
  return succeeded;
}

MR_bool MR_CALL 
analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__any_call__arity0______analysis__more_precise_than_3_3_p_0(void)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__semidet_fail_0_p_0();
  return succeeded;
}

void MR_CALL 
analysis____Compare____some_analysis_result_0_0(
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
    MR_Word TypeClassInfo_for_analysis_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word TypeClassInfo_for_analysis_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
    MR_Box ArgX1_4 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1));
    MR_Box ArgY1_5 = (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1));
    MR_Box ArgX2_7 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2));
    MR_Box ArgY2_8 = (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2));
    MR_Word ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))) & (MR_Integer) 3);
    MR_Word ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))) & (MR_Integer) 3);
    MR_Word SubResult1_6;
    MR_Word TypeInfo_17_17;
    MR_Word TypeInfo_18_18;

    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_analysis_14, (MR_Integer) 4, &TypeInfo_17_17);
    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_analysis_15, (MR_Integer) 4, &TypeInfo_18_18);
    mercury__private_builtin__typed_compare_3_p_0(TypeInfo_17_17, TypeInfo_18_18, &SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;
      MR_Word TypeInfo_20_20;
      MR_Word TypeInfo_21_21;

      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_analysis_14, (MR_Integer) 5, &TypeInfo_20_20);
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_analysis_15, (MR_Integer) 5, &TypeInfo_21_21);
      mercury__private_builtin__typed_compare_3_p_0(TypeInfo_20_20, TypeInfo_21_21, &SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Integer Var_23 = (MR_Integer) (ArgX3_10);
        MR_Integer Var_24 = (MR_Integer) (ArgY3_11);

        succeeded = (Var_23 < Var_24);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 1;
        else
        {
          succeeded = (Var_23 > Var_24);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 2;
          else
            *HeadVar__1_1 = (MR_Integer) 0;
        }
      }
    }
  }
}

MR_bool MR_CALL 
analysis____Unify____some_analysis_result_0_0(
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
    MR_Word TypeClassInfo_for_analysis_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word TypeClassInfo_for_analysis_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word TypeInfo_14_14;
    MR_Word TypeInfo_15_15;
    MR_Word TypeInfo_17_17;
    MR_Word TypeInfo_18_18;
    MR_Box ArgX1_3 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1));
    MR_Box ArgY1_4 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1));
    MR_Box ArgX2_5 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2));
    MR_Box ArgY2_6 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2));
    MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))) & (MR_Integer) 3);
    MR_Word ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))) & (MR_Integer) 3);
    MR_Integer PolyConst5_16;

    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_analysis_11, (MR_Integer) 4, &TypeInfo_14_14);
    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_analysis_12, (MR_Integer) 4, &TypeInfo_15_15);
    succeeded = mercury__private_builtin__typed_unify_2_p_0(TypeInfo_14_14, TypeInfo_15_15, ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      PolyConst5_16 = (MR_Integer) 5;
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_analysis_11, PolyConst5_16, &TypeInfo_17_17);
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_analysis_12, PolyConst5_16, &TypeInfo_18_18);
      succeeded = mercury__private_builtin__typed_unify_2_p_0(TypeInfo_17_17, TypeInfo_18_18, ArgX2_5, ArgY2_6);
      if (succeeded)
        succeeded = (ArgX3_7 == ArgY3_8);
    }
  }
  return succeeded;
}

void MR_CALL 
analysis____Compare____no_func_info_0_0(
  MR_Word * HeadVar__1_1)
{
  analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(HeadVar__1_1);
}

void MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1)
{
  *HeadVar__1_1 = (MR_Integer) 0;
}

MR_bool MR_CALL 
analysis____Unify____no_func_info_0_0(void)
{
  return MR_TRUE;
}

void MR_CALL 
analysis____Compare____module_analysis_map_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word TypeInfo_10_10;
  MR_Word TypeInfo_12_12;
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  {
    TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeInfo_10_10, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
    MR_hl_field(MR_mktag(0), TypeInfo_10_10, 1) = ((MR_Box) (TypeInfo_for_T_6));
  }
  {
    TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeInfo_12_12, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
    MR_hl_field(MR_mktag(0), TypeInfo_12_12, 1) = ((MR_Box) (&analysis__analysis__type_ctor_info_func_id_0));
    MR_hl_field(MR_mktag(0), TypeInfo_12_12, 2) = ((MR_Box) (TypeInfo_10_10));
  }
  mercury__tree234____Compare____tree234_2_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), TypeInfo_12_12, HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
}

MR_bool MR_CALL 
analysis____Unify____module_analysis_map_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word TypeInfo_9_9;
  MR_Word TypeInfo_11_11;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  {
    TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeInfo_9_9, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
    MR_hl_field(MR_mktag(0), TypeInfo_9_9, 1) = ((MR_Box) (TypeInfo_for_T_5));
  }
  {
    TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeInfo_11_11, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
    MR_hl_field(MR_mktag(0), TypeInfo_11_11, 1) = ((MR_Box) (&analysis__analysis__type_ctor_info_func_id_0));
    MR_hl_field(MR_mktag(0), TypeInfo_11_11, 2) = ((MR_Box) (TypeInfo_9_9));
  }
  succeeded = mercury__tree234____Unify____tree234_2_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), TypeInfo_11_11, Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
analysis____Compare____make_analysis_registry_0_0(
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

MR_bool MR_CALL 
analysis____Unify____make_analysis_registry_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
analysis____Compare____imdg_arc_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word TypeClassInfo_for_call_pattern_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word TypeClassInfo_for_call_pattern_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
    MR_Box ArgX1_4 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1));
    MR_Box ArgY1_5 = (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
    MR_Word SubResult1_6;
    MR_Word TypeInfo_14_14;
    MR_Word TypeInfo_15_15;

    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_call_pattern_11, (MR_Integer) 4, &TypeInfo_14_14);
    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_call_pattern_12, (MR_Integer) 4, &TypeInfo_15_15);
    mercury__private_builtin__typed_compare_3_p_0(TypeInfo_14_14, TypeInfo_15_15, &SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mdbcomp__sym_name____Compare____sym_name_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

MR_bool MR_CALL 
analysis____Unify____imdg_arc_0_0(
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
  {
    MR_Word TypeClassInfo_for_call_pattern_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word TypeClassInfo_for_call_pattern_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word TypeInfo_12_12;
    MR_Word TypeInfo_13_13;
    MR_Box ArgX1_3 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1));
    MR_Box ArgY1_4 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));

    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_call_pattern_9, (MR_Integer) 4, &TypeInfo_12_12);
    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_call_pattern_10, (MR_Integer) 4, &TypeInfo_13_13);
    succeeded = mercury__private_builtin__typed_unify_2_p_0(TypeInfo_12_12, TypeInfo_13_13, ArgX1_3, ArgY1_4);
    if (succeeded)
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX2_5, ArgY2_6);
  }
  return succeeded;
}

void MR_CALL 
analysis____Compare____func_id_0_0(
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
    MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_String ArgX2_7 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_String ArgY2_8 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
    MR_Integer ArgX4_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
    MR_Integer ArgY4_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
    MR_Word SubResult1_6;
    MR_Integer Var_21 = (MR_Integer) (ArgX1_4);
    MR_Integer Var_22 = (MR_Integer) (ArgY1_5);

    succeeded = (Var_21 < Var_22);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (Var_21 > Var_22);
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

      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;
        MR_Integer Var_23 = (MR_Integer) (ArgX3_10);
        MR_Integer Var_24 = (MR_Integer) (ArgY3_11);

        succeeded = (Var_23 < Var_24);
        if (succeeded)
        {
          SubResult3_12 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (Var_23 > Var_24);
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
          succeeded = (ArgX4_13 < ArgY4_14);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 1;
          else
          {
            succeeded = (ArgX4_13 > ArgY4_14);
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

MR_bool MR_CALL 
analysis____Unify____func_id_0_0(
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
    MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_String ArgX2_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_String ArgY2_6 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
    MR_Integer ArgX4_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
    MR_Integer ArgY4_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
    MR_Integer Var_15;
    MR_Integer Var_16;

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      succeeded = (strcmp(ArgX2_5, ArgY2_6) == 0);
      if (succeeded)
      {
        Var_15 = (MR_Integer) (ArgX3_7);
        Var_16 = (MR_Integer) (ArgY3_8);
        succeeded = (Var_15 == Var_16);
        if (succeeded)
          succeeded = (ArgX4_9 == ArgY4_10);
      }
    }
  }
  return succeeded;
}

void MR_CALL 
analysis____Compare____func_analysis_map_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word TypeInfo_9_9;
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  {
    TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeInfo_9_9, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
    MR_hl_field(MR_mktag(0), TypeInfo_9_9, 1) = ((MR_Box) (TypeInfo_for_T_6));
  }
  mercury__tree234____Compare____tree234_2_0((MR_Word) (&analysis__analysis__type_ctor_info_func_id_0), TypeInfo_9_9, HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
}

MR_bool MR_CALL 
analysis____Unify____func_analysis_map_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word TypeInfo_8_8;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  {
    TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeInfo_8_8, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
    MR_hl_field(MR_mktag(0), TypeInfo_8_8, 1) = ((MR_Box) (TypeInfo_for_T_5));
  }
  succeeded = mercury__tree234____Unify____tree234_2_0((MR_Word) (&analysis__analysis__type_ctor_info_func_id_0), TypeInfo_8_8, Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
analysis____Compare____fixpoint_type_0_0(
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

MR_bool MR_CALL 
analysis____Unify____fixpoint_type_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
analysis____Compare____any_call_0_0(
  MR_Word * HeadVar__1_1)
{
  analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(HeadVar__1_1);
}

void MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1)
{
  *HeadVar__1_1 = (MR_Integer) 0;
}

MR_bool MR_CALL 
analysis____Unify____any_call_0_0(void)
{
  return MR_TRUE;
}

void MR_CALL 
analysis____Compare____analysis_type_0_0(
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
    *HeadVar__1_1 = (MR_Integer) 0;
}

MR_bool MR_CALL 
analysis____Unify____analysis_type_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
  {
  }
  succeeded = MR_TRUE;
  return succeeded;
}

void MR_CALL 
analysis____Compare____analysis_status_0_0(
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

MR_bool MR_CALL 
analysis____Unify____analysis_status_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
analysis____Compare____analysis_result_2_0(
  MR_Word TypeInfo_for_Call_14,
  MR_Word TypeInfo_for_Answer_15,
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
    MR_Box ArgX1_4 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));
    MR_Box ArgY1_5 = (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0));
    MR_Box ArgX2_7 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1));
    MR_Box ArgY2_8 = (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1));
    MR_Word ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 3);
    MR_Word ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))) & (MR_Integer) 3);
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0(TypeInfo_for_Call_14, &SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0(TypeInfo_for_Answer_15, &SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Integer Var_17 = (MR_Integer) (ArgX3_10);
        MR_Integer Var_18 = (MR_Integer) (ArgY3_11);

        succeeded = (Var_17 < Var_18);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 1;
        else
        {
          succeeded = (Var_17 > Var_18);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 2;
          else
            *HeadVar__1_1 = (MR_Integer) 0;
        }
      }
    }
  }
}

MR_bool MR_CALL 
analysis____Unify____analysis_result_2_0(
  MR_Word TypeInfo_for_Call_11,
  MR_Word TypeInfo_for_Answer_12,
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
    MR_Box ArgX1_3 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0));
    MR_Box ArgY1_4 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));
    MR_Box ArgX2_5 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1));
    MR_Box ArgY2_6 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1));
    MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))) & (MR_Integer) 3);
    MR_Word ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 3);

    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_Call_11, ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_Answer_12, ArgX2_5, ArgY2_6);
      if (succeeded)
        succeeded = (ArgX3_7 == ArgY3_8);
    }
  }
  return succeeded;
}

void MR_CALL 
analysis____Compare____analysis_request_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word TypeClassInfo_for_call_pattern_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word TypeClassInfo_for_call_pattern_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
    MR_Box ArgX1_4 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1));
    MR_Box ArgY1_5 = (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
    MR_Word SubResult1_6;
    MR_Word TypeInfo_14_14;
    MR_Word TypeInfo_15_15;

    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_call_pattern_11, (MR_Integer) 4, &TypeInfo_14_14);
    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_call_pattern_12, (MR_Integer) 4, &TypeInfo_15_15);
    mercury__private_builtin__typed_compare_3_p_0(TypeInfo_14_14, TypeInfo_15_15, &SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mdbcomp__sym_name____Compare____sym_name_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

MR_bool MR_CALL 
analysis____Unify____analysis_request_0_0(
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
  {
    MR_Word TypeClassInfo_for_call_pattern_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word TypeClassInfo_for_call_pattern_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word TypeInfo_12_12;
    MR_Word TypeInfo_13_13;
    MR_Box ArgX1_3 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1));
    MR_Box ArgY1_4 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));

    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_call_pattern_9, (MR_Integer) 4, &TypeInfo_12_12);
    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_call_pattern_10, (MR_Integer) 4, &TypeInfo_13_13);
    succeeded = mercury__private_builtin__typed_unify_2_p_0(TypeInfo_12_12, TypeInfo_13_13, ArgX1_3, ArgY1_4);
    if (succeeded)
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX2_5, ArgY2_6);
  }
  return succeeded;
}

void MR_CALL 
analysis____Compare____analysis_name_0_0(
  MR_Word * HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_String HeadVar__3_3)
{
  MR_String Cast_HeadVar1_4 = HeadVar__2_2;
  MR_String Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
}

MR_bool MR_CALL 
analysis____Unify____analysis_name_0_0(
  MR_String HeadVar__1_1,
  MR_String HeadVar__2_2)
{
  MR_bool succeeded;
  MR_String Cast_HeadVar1_3 = HeadVar__1_1;
  MR_String Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = (strcmp(Cast_HeadVar1_3, Cast_HeadVar2_4) == 0);
  return succeeded;
}

void MR_CALL 
analysis____Compare____analysis_map_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word TypeInfo_11_11;
  MR_Word TypeInfo_13_13;
  MR_Word TypeInfo_14_14;
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  {
    TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeInfo_11_11, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
    MR_hl_field(MR_mktag(0), TypeInfo_11_11, 1) = ((MR_Box) (TypeInfo_for_T_6));
  }
  {
    TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeInfo_13_13, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
    MR_hl_field(MR_mktag(0), TypeInfo_13_13, 1) = ((MR_Box) (&analysis__analysis__type_ctor_info_func_id_0));
    MR_hl_field(MR_mktag(0), TypeInfo_13_13, 2) = ((MR_Box) (TypeInfo_11_11));
  }
  {
    TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeInfo_14_14, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
    MR_hl_field(MR_mktag(0), TypeInfo_14_14, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0));
    MR_hl_field(MR_mktag(0), TypeInfo_14_14, 2) = ((MR_Box) (TypeInfo_13_13));
  }
  mercury__tree234____Compare____tree234_2_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), TypeInfo_14_14, HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
}

MR_bool MR_CALL 
analysis____Unify____analysis_map_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word TypeInfo_10_10;
  MR_Word TypeInfo_12_12;
  MR_Word TypeInfo_13_13;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  {
    TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeInfo_10_10, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
    MR_hl_field(MR_mktag(0), TypeInfo_10_10, 1) = ((MR_Box) (TypeInfo_for_T_5));
  }
  {
    TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeInfo_12_12, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
    MR_hl_field(MR_mktag(0), TypeInfo_12_12, 1) = ((MR_Box) (&analysis__analysis__type_ctor_info_func_id_0));
    MR_hl_field(MR_mktag(0), TypeInfo_12_12, 2) = ((MR_Box) (TypeInfo_10_10));
  }
  {
    TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeInfo_13_13, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
    MR_hl_field(MR_mktag(0), TypeInfo_13_13, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0));
    MR_hl_field(MR_mktag(0), TypeInfo_13_13, 2) = ((MR_Box) (TypeInfo_12_12));
  }
  succeeded = mercury__tree234____Unify____tree234_2_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), TypeInfo_13_13, Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
analysis____Compare____analysis_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_33 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_34 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_33 == CastY_34);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word TypeClassInfo_for_compiler_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word TypeClassInfo_for_compiler_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
    MR_Box ArgX1_4 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1));
    MR_Box ArgY1_5 = (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))) & (MR_Integer) 1);
    MR_Word ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))) & (MR_Integer) 1);
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6))));
    MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))));
    MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 7))));
    MR_Word ArgX8_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 8))));
    MR_Word ArgY8_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 8))));
    MR_Word ArgX9_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 9))));
    MR_Word ArgY9_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 9))));
    MR_Word ArgX10_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 10))));
    MR_Word ArgY10_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 10))));
    MR_Word SubResult1_6;
    MR_Word TypeInfo_38_38;
    MR_Word TypeInfo_39_39;

    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_compiler_35, (MR_Integer) 1, &TypeInfo_38_38);
    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_compiler_36, (MR_Integer) 1, &TypeInfo_39_39);
    mercury__private_builtin__typed_compare_3_p_0(TypeInfo_38_38, TypeInfo_39_39, &SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
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
        MR_Integer Var_49 = (MR_Integer) (ArgX3_10);
        MR_Integer Var_50 = (MR_Integer) (ArgY3_11);

        succeeded = (Var_49 < Var_50);
        if (succeeded)
        {
          SubResult3_12 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (Var_49 > Var_50);
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

          mercury__builtin__compare_3_p_0((MR_Word) (&analysis_scalar_common_1[3]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            mercury__builtin__compare_3_p_0((MR_Word) (&analysis_scalar_common_2[6]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              mercury__builtin__compare_3_p_0((MR_Word) (&analysis_scalar_common_2[7]), &SubResult6_21, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
              succeeded = (SubResult6_21 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
              {
                MR_Word SubResult7_24;

                mercury__builtin__compare_3_p_0((MR_Word) (&analysis_scalar_common_2[8]), &SubResult7_24, ((MR_Box) (ArgX7_22)), ((MR_Box) (ArgY7_23)));
                succeeded = (SubResult7_24 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult7_24;
                else
                {
                  MR_Word SubResult8_27;

                  mercury__builtin__compare_3_p_0((MR_Word) (&analysis_scalar_common_2[3]), &SubResult8_27, ((MR_Box) (ArgX8_25)), ((MR_Box) (ArgY8_26)));
                  succeeded = (SubResult8_27 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult8_27;
                  else
                  {
                    MR_Word SubResult9_30;

                    mercury__builtin__compare_3_p_0((MR_Word) (&analysis_scalar_common_2[9]), &SubResult9_30, ((MR_Box) (ArgX9_28)), ((MR_Box) (ArgY9_29)));
                    succeeded = (SubResult9_30 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult9_30;
                    else
                      mercury__builtin__compare_3_p_0((MR_Word) (&analysis_scalar_common_2[9]), HeadVar__1_1, ((MR_Box) (ArgX10_31)), ((MR_Box) (ArgY10_32)));
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

MR_bool MR_CALL 
analysis____Unify____analysis_info_0_0(
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
  {
    MR_Word TypeClassInfo_for_compiler_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word TypeClassInfo_for_compiler_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word TypeInfo_28_28;
    MR_Word TypeInfo_29_29;
    MR_Word TypeInfo_31_31;
    MR_Word TypeInfo_32_32;
    MR_Word TypeInfo_33_33;
    MR_Word TypeInfo_34_34;
    MR_Word TypeInfo_35_35;
    MR_Word TypeInfo_36_36;
    MR_Word TypeInfo_37_37;
    MR_Box ArgX1_3 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1));
    MR_Box ArgY1_4 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))) & (MR_Integer) 1);
    MR_Word ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))) & (MR_Integer) 1);
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
    MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 7))));
    MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))));
    MR_Word ArgX8_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 8))));
    MR_Word ArgY8_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 8))));
    MR_Word ArgX9_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 9))));
    MR_Word ArgY9_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 9))));
    MR_Word ArgX10_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 10))));
    MR_Word ArgY10_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 10))));

    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_compiler_25, (MR_Integer) 1, &TypeInfo_28_28);
    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_compiler_26, (MR_Integer) 1, &TypeInfo_29_29);
    succeeded = mercury__private_builtin__typed_unify_2_p_0(TypeInfo_28_28, TypeInfo_29_29, ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        succeeded = (ArgX3_7 == ArgY3_8);
        if (succeeded)
        {
          TypeInfo_31_31 = (MR_Word) (&analysis_scalar_common_1[3]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_31_31, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          if (succeeded)
          {
            TypeInfo_32_32 = (MR_Word) (&analysis_scalar_common_2[6]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_32_32, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
            if (succeeded)
            {
              TypeInfo_33_33 = (MR_Word) (&analysis_scalar_common_2[7]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_33_33, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
              if (succeeded)
              {
                TypeInfo_34_34 = (MR_Word) (&analysis_scalar_common_2[8]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_34_34, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
                if (succeeded)
                {
                  TypeInfo_35_35 = (MR_Word) (&analysis_scalar_common_2[3]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_35_35, ((MR_Box) (ArgX8_17)), ((MR_Box) (ArgY8_18)));
                  if (succeeded)
                  {
                    TypeInfo_36_36 = (MR_Word) (&analysis_scalar_common_2[9]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_36_36, ((MR_Box) (ArgX9_19)), ((MR_Box) (ArgY9_20)));
                    if (succeeded)
                    {
                      TypeInfo_37_37 = (MR_Word) (&analysis_scalar_common_2[9]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_37_37, ((MR_Box) (ArgX10_21)), ((MR_Box) (ArgY10_22)));
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
  return succeeded;
}

MR_bool MR_CALL 
analysis__from_term_2_p_0(
  MR_Word TypeClassInfo_for_to_term_3,
  MR_Word HeadVar__1_1,
  MR_Box * HeadVar__2_2)
{
  MR_bool succeeded;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_to_term_3, (MR_Integer) 0)), (MR_Integer) 6))));

  succeeded = func_0(((MR_Box) (TypeClassInfo_for_to_term_3)), ((MR_Box) (HeadVar__1_1)), HeadVar__2_2);
  return succeeded;
}

MR_Word MR_CALL 
analysis__to_term_1_f_0(
  MR_Word TypeClassInfo_for_to_term_3,
  MR_Box HeadVar__1_1)
{
  MR_Word HeadVar__2_2;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_to_term_3, (MR_Integer) 0)), (MR_Integer) 5))));
  MR_Box conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = func_0(((MR_Box) (TypeClassInfo_for_to_term_3)), HeadVar__1_1);
  HeadVar__2_2 = ((MR_Word) (conv1_HeadVar__2_2));
  return HeadVar__2_2;
}

MR_Box MR_CALL 
analysis__top_2_f_0(
  MR_Word TypeClassInfo_for_analysis_4,
  MR_Box HeadVar__1_1)
{
  MR_Box HeadVar__3_3;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_analysis_4, (MR_Integer) 0)), (MR_Integer) 9))));

  HeadVar__3_3 = func_0(((MR_Box) (TypeClassInfo_for_analysis_4)), HeadVar__1_1);
  return HeadVar__3_3;
}

MR_Box MR_CALL 
analysis__bottom_2_f_0(
  MR_Word TypeClassInfo_for_analysis_4,
  MR_Box HeadVar__1_1)
{
  MR_Box HeadVar__3_3;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_analysis_4, (MR_Integer) 0)), (MR_Integer) 8))));

  HeadVar__3_3 = func_0(((MR_Box) (TypeClassInfo_for_analysis_4)), HeadVar__1_1);
  return HeadVar__3_3;
}

MR_Word MR_CALL 
analysis__preferred_fixpoint_type_2_f_0(
  MR_Word TypeClassInfo_for_analysis_4)
{
  MR_Word HeadVar__3_3;
  MR_Box MR_CALL (* func_0)(MR_Box) = ((MR_Box MR_CALL (*)(MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_analysis_4, (MR_Integer) 0)), (MR_Integer) 7))));
  MR_Box conv1_HeadVar__3_3;

  conv1_HeadVar__3_3 = func_0(((MR_Box) (TypeClassInfo_for_analysis_4)));
  HeadVar__3_3 = ((MR_Word) (conv1_HeadVar__3_3));
  return HeadVar__3_3;
}

MR_Integer MR_CALL 
analysis__analysis_version_number_2_f_0(
  MR_Word TypeClassInfo_for_analysis_4)
{
  MR_Integer HeadVar__3_3;
  MR_Box MR_CALL (* func_0)(MR_Box) = ((MR_Box MR_CALL (*)(MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_analysis_4, (MR_Integer) 0)), (MR_Integer) 6))));
  MR_Box conv1_HeadVar__3_3;

  conv1_HeadVar__3_3 = func_0(((MR_Box) (TypeClassInfo_for_analysis_4)));
  HeadVar__3_3 = ((MR_Integer) (conv1_HeadVar__3_3));
  return HeadVar__3_3;
}

MR_String MR_CALL 
analysis__analysis_name_2_f_0(
  MR_Word TypeClassInfo_for_analysis_4)
{
  MR_String HeadVar__3_3;
  MR_Box MR_CALL (* func_0)(MR_Box) = ((MR_Box MR_CALL (*)(MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_analysis_4, (MR_Integer) 0)), (MR_Integer) 5))));
  MR_Box conv1_HeadVar__3_3;

  conv1_HeadVar__3_3 = func_0(((MR_Box) (TypeClassInfo_for_analysis_4)));
  HeadVar__3_3 = ((MR_String) (conv1_HeadVar__3_3));
  return HeadVar__3_3;
}

void MR_CALL 
analysis__module_name_to_read_file_name_7_p_0(
  MR_Word TypeClassInfo_for_compiler_8,
  MR_Box HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_compiler_8, (MR_Integer) 0)), (MR_Integer) 8))));
  MR_Box conv2_HeadVar__5_5;
  MR_Box conv1_HeadVar__7_7;

  func_0(((MR_Box) (TypeClassInfo_for_compiler_8)), HeadVar__1_1, ((MR_Box) (HeadVar__2_2)), ((MR_Box) (HeadVar__3_3)), ((MR_Box) (HeadVar__4_4)), &conv2_HeadVar__5_5, ((MR_Box) ((MR_Integer) 0)), &conv1_HeadVar__7_7);
  *HeadVar__5_5 = ((MR_Word) (conv2_HeadVar__5_5));
}

static void MR_CALL 
analysis__analyses_3_p_1_1(
  void * env_ptr_arg)
{
  struct analysis__analyses_3_p_1_env_0_s * env_ptr = (struct analysis__analyses_3_p_1_env_0_s *) (env_ptr_arg);

  *((env_ptr)->analysis__analyses_3_p_1_env_0__HeadVar__2_2) = ((MR_String) ((env_ptr)->analysis__analyses_3_p_1_env_0__conv2_HeadVar__2_2));
  *((env_ptr)->analysis__analyses_3_p_1_env_0__HeadVar__3_3) = ((MR_Word) ((env_ptr)->analysis__analyses_3_p_1_env_0__conv1_HeadVar__3_3));
  ((env_ptr)->analysis__analyses_3_p_1_env_0__cont)((env_ptr)->analysis__analyses_3_p_1_env_0__cont_env_ptr);
}

void MR_CALL 
analysis__analyses_3_p_1(
  MR_Word TypeClassInfo_for_compiler_4,
  MR_Box HeadVar__1_1,
  MR_String * HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct analysis__analyses_3_p_1_env_0_s env;

  (env).analysis__analyses_3_p_1_env_0__HeadVar__2_2 = HeadVar__2_2;
  (env).analysis__analyses_3_p_1_env_0__HeadVar__3_3 = HeadVar__3_3;
  (env).analysis__analyses_3_p_1_env_0__cont = cont;
  (env).analysis__analyses_3_p_1_env_0__cont_env_ptr = cont_env_ptr;
  {
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Cont, void *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_compiler_4, (MR_Integer) 0)), (MR_Integer) 7))));

    func_0(((MR_Box) (TypeClassInfo_for_compiler_4)), HeadVar__1_1, &(env).analysis__analyses_3_p_1_env_0__conv2_HeadVar__2_2, &(env).analysis__analyses_3_p_1_env_0__conv1_HeadVar__3_3, analysis__analyses_3_p_1_1, &env);
  }
}

MR_bool MR_CALL 
analysis__analyses_3_p_0(
  MR_Word TypeClassInfo_for_compiler_4,
  MR_Box HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  MR_bool succeeded;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_compiler_4, (MR_Integer) 0)), (MR_Integer) 6))));
  MR_Box conv1_HeadVar__3_3;

  succeeded = func_0(((MR_Box) (TypeClassInfo_for_compiler_4)), HeadVar__1_1, ((MR_Box) (HeadVar__2_2)), &conv1_HeadVar__3_3);
  if (succeeded)
  {
    *HeadVar__3_3 = ((MR_Word) (conv1_HeadVar__3_3));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_String MR_CALL 
analysis__compiler_name_1_f_0(
  MR_Word TypeClassInfo_for_compiler_3,
  MR_Box HeadVar__1_1)
{
  MR_String HeadVar__2_2;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_compiler_3, (MR_Integer) 0)), (MR_Integer) 5))));
  MR_Box conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = func_0(((MR_Box) (TypeClassInfo_for_compiler_3)), HeadVar__1_1);
  HeadVar__2_2 = ((MR_String) (conv1_HeadVar__2_2));
  return HeadVar__2_2;
}

void MR_CALL 
analysis__unsafe_set_debug_analysis_1_p_0(
  MR_Word X_1)
{
{
#define MR_PROC_LABEL analysis__unsafe_set_debug_analysis_1_p_0

	MR_Word X;

	X = X_1 ;
		{
analysis__mutable_variable_debug_analysis = X;


		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
analysis__unsafe_get_debug_analysis_1_p_0(
  MR_Word * X_1)
{
{
#define MR_PROC_LABEL analysis__unsafe_get_debug_analysis_1_p_0

	MR_Word X;

		{
X = analysis__mutable_variable_debug_analysis;


		;}
#undef MR_PROC_LABEL
	 *X_1  = X;
}
}

void MR_CALL 
analysis__unlock_debug_analysis_0_p_0(void)
{
{
#define MR_PROC_LABEL analysis__unlock_debug_analysis_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
analysis__lock_debug_analysis_0_p_0(void)
{
{
#define MR_PROC_LABEL analysis__lock_debug_analysis_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
analysis__pre_initialise_mutable_debug_analysis_0_p_0(void)
{
{
#define MR_PROC_LABEL analysis__pre_initialise_mutable_debug_analysis_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&analysis__mutable_variable_debug_analysis_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
analysis__set_debug_analysis_3_p_0(
  MR_Word X_4)
{
{
#define MR_PROC_LABEL analysis__set_debug_analysis_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL analysis__set_debug_analysis_3_p_0

	MR_Word X;

	X = X_4 ;
		{
analysis__mutable_variable_debug_analysis = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL analysis__set_debug_analysis_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
analysis__get_debug_analysis_3_p_0(
  MR_Word * X_4)
{
{
#define MR_PROC_LABEL analysis__get_debug_analysis_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL analysis__get_debug_analysis_3_p_0

	MR_Word X;

		{
X = analysis__mutable_variable_debug_analysis;


		;}
#undef MR_PROC_LABEL
	 *X_4  = X;
}
{
#define MR_PROC_LABEL analysis__get_debug_analysis_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
analysis__set_debug_analysis_1_p_0(
  MR_Word X_2)
{
{
#define MR_PROC_LABEL analysis__set_debug_analysis_1_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL analysis__set_debug_analysis_1_p_0

	MR_Word X;

	X = X_2 ;
		{
analysis__mutable_variable_debug_analysis = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL analysis__set_debug_analysis_1_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
analysis__get_debug_analysis_1_p_0(
  MR_Word * X_2)
{
{
#define MR_PROC_LABEL analysis__get_debug_analysis_1_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL analysis__get_debug_analysis_1_p_0

	MR_Word X;

		{
X = analysis__mutable_variable_debug_analysis;


		;}
#undef MR_PROC_LABEL
	 *X_2  = X;
}
{
#define MR_PROC_LABEL analysis__get_debug_analysis_1_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
analysis__initialise_mutable_debug_analysis_0_p_0(void)
{
{
#define MR_PROC_LABEL analysis__initialise_mutable_debug_analysis_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&analysis__mutable_variable_debug_analysis_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL analysis__initialise_mutable_debug_analysis_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL analysis__initialise_mutable_debug_analysis_0_p_0

	MR_Word X;

	X = (MR_Integer) 0 ;
		{
analysis__mutable_variable_debug_analysis = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL analysis__initialise_mutable_debug_analysis_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
analysis__debug_msg_3_p_0(
  MR_Word P_4)
{
  MR_Word Debug_6;

{
#define MR_PROC_LABEL analysis__debug_msg_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL analysis__debug_msg_3_p_0

	MR_Word X;

		{
X = analysis__mutable_variable_debug_analysis;


		;}
#undef MR_PROC_LABEL
	 Debug_6  = X;
}
{
#define MR_PROC_LABEL analysis__debug_msg_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  switch (Debug_6) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_4, (MR_Integer) 1))));
        MR_Box conv1_STATE_VARIABLE_IO_8;

        func_0(((MR_Box) (P_4)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_8);
      }
      break;
  }
}

MR_Word MR_CALL 
analysis__lub_result_statuses_4_2_f_0(
  MR_Word Result_4,
  MR_Word Acc_5)
{
  MR_Word HeadVar__3_3;
  MR_Word Var_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Result_4, (MR_Integer) 3))) & (MR_Integer) 3);

  HeadVar__3_3 = analysis__lub_2_f_0(Var_6, Acc_5);
  return HeadVar__3_3;
}

MR_Word MR_CALL 
analysis__lub_result_statuses_3_3_f_0(
  MR_Word _FuncId_5,
  MR_Word Results_6,
  MR_Word Acc_7)
{
  MR_Word HeadVar__4_4;

  HeadVar__4_4 = analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_117_98_95_114_101_115_117_108_116_95_115_116_97_116_117_115_101_115_95_51_95_95_91_49_93_95_48_3_f_0(Results_6, Acc_7);
  return HeadVar__4_4;
}

static MR_Box MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_117_98_95_114_101_115_117_108_116_95_115_116_97_116_117_115_101_115_95_51_95_95_91_49_93_95_48_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = analysis__lub_result_statuses_4_2_f_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

MR_Word MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_117_98_95_114_101_115_117_108_116_95_115_116_97_116_117_115_101_115_95_51_95_95_91_49_93_95_48_3_f_0(
  MR_Word Results_6,
  MR_Word Acc_7)
{
  MR_Word HeadVar__4_4;
  MR_Box conv1_HeadVar__4_4;

  conv1_HeadVar__4_4 = mercury__list__foldl_3_f_0((MR_Word) (&analysis__analysis__type_ctor_info_some_analysis_result_0), (MR_Word) (&analysis__analysis__type_ctor_info_analysis_status_0), (MR_Word) (&analysis_scalar_common_2[15]), Results_6, ((MR_Box) (Acc_7)));
  HeadVar__4_4 = ((MR_Word) (conv1_HeadVar__4_4));
  return HeadVar__4_4;
}

MR_Word MR_CALL 
analysis__lub_result_statuses_2_3_f_0(
  MR_String _AnalysisName_5,
  MR_Word FuncMap_6,
  MR_Word Acc_7)
{
  MR_Word HeadVar__4_4;

  HeadVar__4_4 = analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_117_98_95_114_101_115_117_108_116_95_115_116_97_116_117_115_101_115_95_50_95_95_91_49_93_95_48_3_f_0(FuncMap_6, Acc_7);
  return HeadVar__4_4;
}

static MR_Box MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_117_98_95_114_101_115_117_108_116_95_115_116_97_116_117_115_101_115_95_50_95_95_91_49_93_95_48_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Box wrapper_arg_4;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__4_4;

  conv0_HeadVar__4_4 = analysis__lub_result_statuses_3_3_f_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
  return wrapper_arg_4;
}

MR_Word MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_117_98_95_114_101_115_117_108_116_95_115_116_97_116_117_115_101_115_95_50_95_95_91_49_93_95_48_3_f_0(
  MR_Word FuncMap_6,
  MR_Word Acc_7)
{
  MR_Word HeadVar__4_4;
  MR_Box conv1_HeadVar__4_4;

  conv1_HeadVar__4_4 = mercury__map__foldl_3_f_0((MR_Word) (&analysis__analysis__type_ctor_info_func_id_0), (MR_Word) (&analysis_scalar_common_1[1]), (MR_Word) (&analysis__analysis__type_ctor_info_analysis_status_0), (MR_Word) (&analysis_scalar_common_2[14]), FuncMap_6, ((MR_Box) (Acc_7)));
  HeadVar__4_4 = ((MR_Word) (conv1_HeadVar__4_4));
  return HeadVar__4_4;
}

void MR_CALL 
analysis__maybe_write_module_imdg_5_p_0(
  MR_Word Info_6,
  MR_Word Globals_7,
  MR_Word ModuleName_8)
{
  MR_bool succeeded;
  MR_Word ModuleEntries_10;
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 9))));
  MR_Box conv0_ModuleEntries_10;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&analysis_scalar_common_2[5]), Var_13, ((MR_Box) (ModuleName_8)), &conv0_ModuleEntries_10);
  if (succeeded)
  {
    ModuleEntries_10 = ((MR_Word) (conv0_ModuleEntries_10));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    analysis__file__write_module_imdg_6_p_0(Info_6, Globals_7, ModuleName_8, ModuleEntries_10);
}

void MR_CALL 
analysis__maybe_write_module_requests_5_p_0(
  MR_Word Info_6,
  MR_Word Globals_7,
  MR_Word ModuleName_8)
{
  MR_bool succeeded;
  MR_Word Requests_10;
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 5))));
  MR_Box conv0_Requests_10;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&analysis_scalar_common_2[1]), Var_13, ((MR_Box) (ModuleName_8)), &conv0_Requests_10);
  if (succeeded)
  {
    Requests_10 = ((MR_Word) (conv0_Requests_10));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    analysis__file__write_module_analysis_requests_6_p_0(Info_6, Globals_7, ModuleName_8, Requests_10);
}

void MR_CALL 
analysis__maybe_write_module_overall_status_5_p_0(
  MR_Word Info_6,
  MR_Word Globals_7,
  MR_Word ModuleName_8)
{
  MR_bool succeeded;
  MR_Word Status_10;
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 6))));
  MR_Box conv0_Status_10;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&analysis__analysis__type_ctor_info_analysis_status_0), Var_13, ((MR_Box) (ModuleName_8)), &conv0_Status_10);
  if (succeeded)
  {
    Status_10 = ((MR_Word) (conv0_Status_10));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    analysis__file__write_module_overall_status_6_p_0(Info_6, Globals_7, ModuleName_8, Status_10);
}

void MR_CALL 
analysis__load_module_imdg_6_p_0(
  MR_Word Globals_7,
  MR_Word ModuleName_8,
  MR_Word STATE_VARIABLE_Info_0_14,
  MR_Word * STATE_VARIABLE_Info_15)
{
  MR_Word IMDG_11;
  MR_Word Map0_12;
  MR_Word Map_13;
  MR_Word TypeClassInfo_for_compiler_42;
  MR_Box Var_29;
  MR_Word Var_30;
  MR_Word Var_31;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Var_35;
  MR_Word Var_36;
  MR_Word Var_38;

  analysis__file__read_module_imdg_6_p_0(STATE_VARIABLE_Info_0_14, Globals_7, ModuleName_8, &IMDG_11);
  Map0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 9))));
  mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&analysis_scalar_common_2[5]), ((MR_Box) (ModuleName_8)), ((MR_Box) (IMDG_11)), Map0_12, &Map_13);
  TypeClassInfo_for_compiler_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 0))));
  Var_29 = (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 1));
  Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 2))));
  Var_31 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 3))) & (MR_Integer) 1);
  Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 4))));
  Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 5))));
  Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 6))));
  Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 7))));
  Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 8))));
  Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 10))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_15 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (TypeClassInfo_for_compiler_42));
    MR_hl_field(MR_mktag(0), base, 1) = Var_29;
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_30));
    MR_hl_field(MR_mktag(0), base, 3) = (MR_Box) ((MR_Unsigned) (Var_31));
    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_32));
    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_33));
    MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_34));
    MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_35));
    MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_36));
    MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Map_13));
    MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_38));
  }
}

void MR_CALL 
analysis__combine_imdg_lists_3_p_0(
  MR_Word ArcsA_4,
  MR_Word ArcsB_5,
  MR_Word * HeadVar__3_3)
{
  *HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) (&analysis__analysis__type_ctor_info_imdg_arc_0), ArcsA_4, ArcsB_5);
}

static void MR_CALL 
analysis__combine_func_imdg_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  analysis__combine_imdg_lists_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
}

void MR_CALL 
analysis__combine_func_imdg_3_p_0(
  MR_Word FuncImdgA_4,
  MR_Word FuncImdgB_5,
  MR_Word * FuncImdg_6)
{
  mercury__map__union_4_p_1((MR_Word) (&analysis_scalar_common_1[2]), (MR_Word) (&analysis__analysis__type_ctor_info_func_id_0), (MR_Word) (&analysis_scalar_common_2[13]), FuncImdgA_4, FuncImdgB_5, FuncImdg_6);
}

static MR_bool MR_CALL 
analysis__clear_imdg_entries_pointing_at_3_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = analysis__IntroducedFrom__pred__clear_imdg_entries_pointing_at_3__1193__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

void MR_CALL 
analysis__clear_imdg_entries_pointing_at_3_3_p_0(
  MR_Word ModuleName_4,
  MR_Word Arcs0_5,
  MR_Word * Arcs_6)
{
  MR_bool succeeded;
  MR_Word Var_8;

  {
    Var_8 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_8, 0) = ((MR_Box) (&analysis_scalar_common_14[1]));
    MR_hl_field(MR_mktag(0), Var_8, 1) = ((MR_Box) (analysis__clear_imdg_entries_pointing_at_3_3_p_0_1));
    MR_hl_field(MR_mktag(0), Var_8, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_8, 3) = ((MR_Box) (ModuleName_4));
  }
  mercury__list__filter_3_p_0((MR_Word) (&analysis__analysis__type_ctor_info_imdg_arc_0), Var_8, Arcs0_5, Arcs_6);
}

static void MR_CALL 
analysis__clear_imdg_entries_pointing_at_2_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Arcs_6;

  analysis__clear_imdg_entries_pointing_at_3_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Arcs_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_Arcs_6));
}

void MR_CALL 
analysis__clear_imdg_entries_pointing_at_2_3_p_0(
  MR_Word ModuleName_4,
  MR_Word FuncMap0_5,
  MR_Word * FuncMap_6)
{
  MR_Word Var_7;

  {
    Var_7 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_7, 0) = ((MR_Box) (&analysis_scalar_common_5[5]));
    MR_hl_field(MR_mktag(0), Var_7, 1) = ((MR_Box) (analysis__clear_imdg_entries_pointing_at_2_3_p_0_1));
    MR_hl_field(MR_mktag(0), Var_7, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_7, 3) = ((MR_Box) (ModuleName_4));
  }
  mercury__map__map_values_only_3_p_0((MR_Word) (&analysis_scalar_common_1[2]), (MR_Word) (&analysis_scalar_common_1[2]), (MR_Word) (&analysis__analysis__type_ctor_info_func_id_0), Var_7, FuncMap0_5, FuncMap_6);
}

static void MR_CALL 
analysis__update_intermodule_dependencies_2_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_FuncImdg_6;

  analysis__combine_func_imdg_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_FuncImdg_6);
  *wrapper_arg_3 = ((MR_Box) (conv2_FuncImdg_6));
}

void MR_CALL 
analysis__update_intermodule_dependencies_2_4_p_0(
  MR_Word ModuleName_5,
  MR_Word ImportedModuleName_6,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14)
{
  MR_bool succeeded;
  MR_Word IMDG0_8;
  MR_Word IMDG1_10;
  MR_Word IMDG_12;
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_13, (MR_Integer) 9))));
  MR_Word STATE_VARIABLE_Info_21_21;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Word Var_25;
  MR_Word Var_63;
  MR_Box conv0_IMDG0_8;
  MR_Word NewArcs_11;
  MR_Word Var_19;
  MR_Box conv1_NewArcs_11;
  MR_Word TypeClassInfo_for_compiler_96;
  MR_Box Var_54;
  MR_Word Var_55;
  MR_Word Var_56;
  MR_Word Var_57;
  MR_Word Var_58;
  MR_Word Var_59;
  MR_Word Var_60;
  MR_Word Var_61;
  MR_Word TypeClassInfo_for_compiler_97;
  MR_Box Var_73;
  MR_Word Var_74;
  MR_Word Var_75;
  MR_Word Var_76;
  MR_Word Var_77;
  MR_Word Var_78;
  MR_Word Var_79;
  MR_Word Var_80;
  MR_Word Var_81;

  mercury__map__lookup_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&analysis_scalar_common_2[5]), Var_15, ((MR_Box) (ImportedModuleName_6)), &conv0_IMDG0_8);
  IMDG0_8 = ((MR_Word) (conv0_IMDG0_8));
  analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_49_95_95_91_51_93_95_48_3_p_0(ModuleName_5, ImportedModuleName_6);
  analysis__clear_imdg_entries_pointing_at_3_p_0(ModuleName_5, IMDG0_8, &IMDG1_10);
  Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_13, (MR_Integer) 10))));
  succeeded = mercury__map__elem_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&analysis_scalar_common_2[5]), ((MR_Box) (ImportedModuleName_6)), Var_19, &conv1_NewArcs_11);
  if (succeeded)
  {
    NewArcs_11 = ((MR_Word) (conv1_NewArcs_11));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    mercury__map__union_4_p_1((MR_Word) (&analysis_scalar_common_2[4]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&analysis_scalar_common_2[12]), IMDG1_10, NewArcs_11, &IMDG_12);
  else
    IMDG_12 = IMDG1_10;
  Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_13, (MR_Integer) 9))));
  Var_23 = mercury__map__f_101_108_101_109_32_58_61_3_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&analysis_scalar_common_2[5]), ((MR_Box) (ImportedModuleName_6)), Var_22, ((MR_Box) (IMDG_12)));
  TypeClassInfo_for_compiler_96 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_13, (MR_Integer) 0))));
  Var_54 = (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_13, (MR_Integer) 1));
  Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_13, (MR_Integer) 2))));
  Var_56 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_13, (MR_Integer) 3))) & (MR_Integer) 1);
  Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_13, (MR_Integer) 4))));
  Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_13, (MR_Integer) 5))));
  Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_13, (MR_Integer) 6))));
  Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_13, (MR_Integer) 7))));
  Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_13, (MR_Integer) 8))));
  Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_13, (MR_Integer) 10))));
  {
    STATE_VARIABLE_Info_21_21 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, 0) = ((MR_Box) (TypeClassInfo_for_compiler_96));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, 1) = Var_54;
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, 2) = ((MR_Box) (Var_55));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, 3) = (MR_Box) ((MR_Unsigned) (Var_56));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, 4) = ((MR_Box) (Var_57));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, 5) = ((MR_Box) (Var_58));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, 6) = ((MR_Box) (Var_59));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, 7) = ((MR_Box) (Var_60));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, 8) = ((MR_Box) (Var_61));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, 9) = ((MR_Box) (Var_23));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, 10) = ((MR_Box) (Var_63));
  }
  Var_25 = mercury__map__delete_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&analysis_scalar_common_2[5]), Var_63, ((MR_Box) (ImportedModuleName_6)));
  TypeClassInfo_for_compiler_97 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, (MR_Integer) 0))));
  Var_73 = (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, (MR_Integer) 1));
  Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, (MR_Integer) 2))));
  Var_75 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, (MR_Integer) 3))) & (MR_Integer) 1);
  Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, (MR_Integer) 4))));
  Var_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, (MR_Integer) 5))));
  Var_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, (MR_Integer) 6))));
  Var_79 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, (MR_Integer) 7))));
  Var_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, (MR_Integer) 8))));
  Var_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, (MR_Integer) 9))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_14 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (TypeClassInfo_for_compiler_97));
    MR_hl_field(MR_mktag(0), base, 1) = Var_73;
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_74));
    MR_hl_field(MR_mktag(0), base, 3) = (MR_Box) ((MR_Unsigned) (Var_75));
    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_76));
    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_77));
    MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_78));
    MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_79));
    MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_80));
    MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_81));
    MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_25));
  }
}

static void MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_49_95_95_91_51_93_95_48_3_p_0(
  MR_Word Var_11,
  MR_Word Var_12)
{
  MR_Word Debug_6;

{
#define MR_PROC_LABEL analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_49_95_95_91_51_93_95_48_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_49_95_95_91_51_93_95_48_3_p_0

	MR_Word X;

		{
X = analysis__mutable_variable_debug_analysis;


		;}
#undef MR_PROC_LABEL
	 Debug_6  = X;
}
{
#define MR_PROC_LABEL analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_49_95_95_91_51_93_95_48_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  switch (Debug_6) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      analysis__write_clearing_entries_4_p_0(Var_11, Var_12);
      break;
  }
}

void MR_CALL 
analysis__write_clearing_entries_4_p_0(
  MR_Word ModuleName_5,
  MR_Word ImportedModuleName_6)
{
  mercury__io__write_string_3_p_0((MR_String) "% Clearing entries involving ");
  mercury__io__write_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_5)));
  mercury__io__write_string_3_p_0((MR_String) " from ");
  mercury__io__write_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ImportedModuleName_6)));
  mercury__io__write_string_3_p_0((MR_String) "\'s IMDG.\n");
}

static void MR_CALL 
analysis__clear_imdg_entries_pointing_at_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_FuncMap_6;

  analysis__clear_imdg_entries_pointing_at_2_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_FuncMap_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_FuncMap_6));
}

void MR_CALL 
analysis__clear_imdg_entries_pointing_at_3_p_0(
  MR_Word ModuleName_4,
  MR_Word Map0_5,
  MR_Word * Map_6)
{
  MR_Word Var_7;

  {
    Var_7 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_7, 0) = ((MR_Box) (&analysis_scalar_common_5[3]));
    MR_hl_field(MR_mktag(0), Var_7, 1) = ((MR_Box) (analysis__clear_imdg_entries_pointing_at_3_p_0_1));
    MR_hl_field(MR_mktag(0), Var_7, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_7, 3) = ((MR_Box) (ModuleName_4));
  }
  mercury__map__map_values_only_3_p_0((MR_Word) (&analysis_scalar_common_2[4]), (MR_Word) (&analysis_scalar_common_2[4]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_7, Map0_5, Map_6);
}

void MR_CALL 
analysis__taint_module_overall_status_7_p_0(
  MR_Word Globals_8,
  MR_Word Status_9,
  MR_Word ModuleName_10,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16)
{
  switch (Status_9) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
      {
        MR_Word ModuleStatus0_13;
        MR_Word ModuleStatus_14;
        MR_Word STATE_VARIABLE_Info_19_19;
        MR_Word Var_21;
        MR_Word Var_25;
        MR_Word Var_26;
        MR_Word Debug_66;
        MR_Box conv0_ModuleStatus0_13;
        MR_Word TypeClassInfo_for_compiler_61;
        MR_Box Var_45;
        MR_Word Var_46;
        MR_Word Var_47;
        MR_Word Var_48;
        MR_Word Var_49;
        MR_Word Var_51;
        MR_Word Var_52;
        MR_Word Var_53;
        MR_Word Var_54;

        analysis__ensure_module_status_loaded_6_p_0(Globals_8, ModuleName_10, STATE_VARIABLE_Info_0_15, &STATE_VARIABLE_Info_19_19);
        Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_19_19, (MR_Integer) 6))));
        conv0_ModuleStatus0_13 = mercury__map__det_elem_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&analysis__analysis__type_ctor_info_analysis_status_0), ((MR_Box) (ModuleName_10)), Var_21);
        ModuleStatus0_13 = ((MR_Word) (conv0_ModuleStatus0_13));
        ModuleStatus_14 = analysis__lub_2_f_0(ModuleStatus0_13, Status_9);
{
#define MR_PROC_LABEL analysis__taint_module_overall_status_7_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL analysis__taint_module_overall_status_7_p_0

	MR_Word X;

		{
X = analysis__mutable_variable_debug_analysis;


		;}
#undef MR_PROC_LABEL
	 Debug_66  = X;
}
{
#define MR_PROC_LABEL analysis__taint_module_overall_status_7_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
        switch (Debug_66) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
            analysis__write_tainting_module_4_p_0(ModuleName_10, ModuleStatus_14);
            break;
        }
        Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_19_19, (MR_Integer) 6))));
        Var_26 = mercury__map__f_101_108_101_109_32_58_61_3_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&analysis__analysis__type_ctor_info_analysis_status_0), ((MR_Box) (ModuleName_10)), Var_25, ((MR_Box) (ModuleStatus_14)));
        TypeClassInfo_for_compiler_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_19_19, (MR_Integer) 0))));
        Var_45 = (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_19_19, (MR_Integer) 1));
        Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_19_19, (MR_Integer) 2))));
        Var_47 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_19_19, (MR_Integer) 3))) & (MR_Integer) 1);
        Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_19_19, (MR_Integer) 4))));
        Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_19_19, (MR_Integer) 5))));
        Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_19_19, (MR_Integer) 7))));
        Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_19_19, (MR_Integer) 8))));
        Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_19_19, (MR_Integer) 9))));
        Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_19_19, (MR_Integer) 10))));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_Info_16 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (TypeClassInfo_for_compiler_61));
          MR_hl_field(MR_mktag(0), base, 1) = Var_45;
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_46));
          MR_hl_field(MR_mktag(0), base, 3) = (MR_Box) ((MR_Unsigned) (Var_47));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_48));
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_49));
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_26));
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_51));
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_52));
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_53));
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_54));
        }
      }
      break;
    case (MR_Integer) 2:
      *STATE_VARIABLE_Info_16 = STATE_VARIABLE_Info_0_15;
      break;
  }
}

void MR_CALL 
analysis__write_tainting_module_4_p_0(
  MR_Word ModuleName_5,
  MR_Word ModuleStatus_6)
{
  mercury__io__print_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "% Tainting the overall module status of ")));
  mercury__io__print_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_5)));
  mercury__io__print_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) " with ")));
  mercury__io__print_3_p_0((MR_Word) (&analysis__analysis__type_ctor_info_analysis_status_0), ((MR_Box) (ModuleStatus_6)));
  mercury__io__nl_2_p_0();
}

void MR_CALL 
analysis__ensure_module_status_loaded_6_p_0(
  MR_Word Globals_7,
  MR_Word ModuleName_8,
  MR_Word STATE_VARIABLE_Info_0_12,
  MR_Word * STATE_VARIABLE_Info_13)
{
  MR_bool succeeded;
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_12, (MR_Integer) 6))));

  succeeded = mercury__map__contains_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&analysis__analysis__type_ctor_info_analysis_status_0), Var_16, ((MR_Box) (ModuleName_8)));
  if (succeeded)
    *STATE_VARIABLE_Info_13 = STATE_VARIABLE_Info_0_12;
  else
  {
    MR_Word TypeClassInfo_for_compiler_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_12, (MR_Integer) 0))));
    MR_Word ModuleStatus_11;
    MR_Box Var_17 = (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_12, (MR_Integer) 1));
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word TypeClassInfo_for_compiler_66;
    MR_Box Var_49;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_58;

    analysis__file__read_module_overall_status_6_p_0(TypeClassInfo_for_compiler_62, Var_17, Globals_7, ModuleName_8, &ModuleStatus_11);
    Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_12, (MR_Integer) 6))));
    Var_21 = mercury__map__f_101_108_101_109_32_58_61_3_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&analysis__analysis__type_ctor_info_analysis_status_0), ((MR_Box) (ModuleName_8)), Var_20, ((MR_Box) (ModuleStatus_11)));
    TypeClassInfo_for_compiler_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_12, (MR_Integer) 0))));
    Var_49 = (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_12, (MR_Integer) 1));
    Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_12, (MR_Integer) 2))));
    Var_51 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_12, (MR_Integer) 3))) & (MR_Integer) 1);
    Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_12, (MR_Integer) 4))));
    Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_12, (MR_Integer) 5))));
    Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_12, (MR_Integer) 7))));
    Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_12, (MR_Integer) 8))));
    Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_12, (MR_Integer) 9))));
    Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_12, (MR_Integer) 10))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_13 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (TypeClassInfo_for_compiler_66));
      MR_hl_field(MR_mktag(0), base, 1) = Var_49;
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_50));
      MR_hl_field(MR_mktag(0), base, 3) = (MR_Box) ((MR_Unsigned) (Var_51));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_52));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_53));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_55));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_56));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_57));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_58));
    }
  }
}

MR_bool MR_CALL 
analysis__arc_module_name_3_f_0(
  MR_Word TypeClassInfo_for_call_pattern_11,
  MR_Box FuncInfo_5,
  MR_Box CallA_6,
  MR_Word HeadVar__3_3,
  MR_Word * ModuleName_8)
{
  MR_bool succeeded;
  MR_Word TypeClassInfo_for_call_pattern_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
  MR_Word TypeInfo_14_14;
  MR_Word TypeInfo_15_15;
  MR_Word TypeClassInfo_for_partial_order_16;
  MR_Box CallB0_7 = (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1));
  MR_Box CallB_9;
  MR_Word Var_10;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box);

  *ModuleName_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_call_pattern_12, (MR_Integer) 4, &TypeInfo_14_14);
  Var_10 = mercury__univ__univ_1_f_0(TypeInfo_14_14, CallB0_7);
  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_call_pattern_11, (MR_Integer) 4, &TypeInfo_15_15);
  mercury__univ__det_univ_to_type_2_p_0(TypeInfo_15_15, Var_10, &CallB_9);
  mercury__private_builtin__superclass_from_typeclass_info_3_p_0(TypeClassInfo_for_call_pattern_11, (MR_Integer) 1, &TypeClassInfo_for_partial_order_16);
  func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_partial_order_16, (MR_Integer) 0)), (MR_Integer) 6))));
  succeeded = func_0(((MR_Box) (TypeClassInfo_for_partial_order_16)), FuncInfo_5, CallA_6, CallB_9);
  return succeeded;
}

static void MR_CALL 
analysis__update_analysis_registry_5_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv9_STATE_VARIABLE_Info_16;

  analysis__taint_module_overall_status_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv9_STATE_VARIABLE_Info_16);
  *wrapper_arg_3 = ((MR_Box) (conv9_STATE_VARIABLE_Info_16));
}

static MR_bool MR_CALL 
analysis__update_analysis_registry_5_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv8_LambdaHeadVar__2_61;

  succeeded = analysis__IntroducedFrom__func__update_analysis_registry_5__976__1_1_f_0(((MR_Word) (wrapper_arg_1)), &conv8_LambdaHeadVar__2_61);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv8_LambdaHeadVar__2_61));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
analysis__update_analysis_registry_5_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_Info_16;

  analysis__taint_module_overall_status_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_Info_16);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_Info_16));
}

void MR_CALL 
analysis__update_analysis_registry_5_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word ModuleName_11,
  MR_String AnalysisName_12,
  MR_Word FuncId_13,
  MR_Word NewResult_14,
  MR_Word STATE_VARIABLE_Info_0_42,
  MR_Word * STATE_VARIABLE_Info_43)
{
  MR_bool succeeded;
  MR_Word TypeClassInfo_for_analysis_148 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NewResult_14, (MR_Integer) 0))));
  MR_Box Call_17 = (MR_hl_field(MR_mktag(0), NewResult_14, (MR_Integer) 1));
  MR_Box NewAnswer_18 = (MR_hl_field(MR_mktag(0), NewResult_14, (MR_Integer) 2));
  MR_Word NewStatus_19 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), NewResult_14, (MR_Integer) 3))) & (MR_Integer) 3);
  MR_Box FuncInfo_20;
  MR_Word MaybeResult_21;
  MR_Word Globals_22;
  MR_Word STATE_VARIABLE_Info_49_49;
  MR_Word Requests_35;
  MR_Word TypeCtorInfo_190_190;
  MR_Word TypeInfo_191_191;
  MR_Word TypeCtorInfo_192_192;
  MR_Word TypeInfo_193_193;
  MR_Word ModuleRequests_34;
  MR_Word Var_57;
  MR_Word Var_58;
  MR_Box conv5_ModuleRequests_34;
  MR_Box conv6_Var_58;
  MR_Box conv7_Requests_35;

  analysis__get_func_info_6_p_0(TypeClassInfo_for_analysis_148, ModuleInfo_10, ModuleName_11, FuncId_13, &FuncInfo_20);
  analysis__lookup_exactly_matching_result_even_from_invalid_modules_6_p_0(TypeClassInfo_for_analysis_148, STATE_VARIABLE_Info_0_42, ModuleName_11, FuncId_13, FuncInfo_20, Call_17, &MaybeResult_21);
  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_10, &Globals_22);
  if ((MaybeResult_21 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word OldAnalysisResults0_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_42, (MR_Integer) 7))));
    MR_Word OldAnalysisResults_33;
    MR_Word OldMap0_69;
    MR_Word OldMap_70;
    MR_Box conv0_OldMap0_69;
    MR_Word TypeClassInfo_for_compiler_186;
    MR_Box Var_129;
    MR_Word Var_130;
    MR_Word Var_131;
    MR_Word Var_132;
    MR_Word Var_133;
    MR_Word Var_134;
    MR_Word Var_136;
    MR_Word Var_137;
    MR_Word Var_138;

    mercury__map__lookup_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&analysis_scalar_common_2[3]), OldAnalysisResults0_32, ((MR_Box) (ModuleName_11)), &conv0_OldMap0_69);
    OldMap0_69 = ((MR_Word) (conv0_OldMap0_69));
    analysis__record_result_in_analysis_map_6_p_0(TypeClassInfo_for_analysis_148, FuncId_13, Call_17, NewAnswer_18, NewStatus_19, OldMap0_69, &OldMap_70);
    mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&analysis_scalar_common_2[3]), ((MR_Box) (ModuleName_11)), ((MR_Box) (OldMap_70)), OldAnalysisResults0_32, &OldAnalysisResults_33);
    TypeClassInfo_for_compiler_186 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_42, (MR_Integer) 0))));
    Var_129 = (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_42, (MR_Integer) 1));
    Var_130 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_42, (MR_Integer) 2))));
    Var_131 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_42, (MR_Integer) 3))) & (MR_Integer) 1);
    Var_132 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_42, (MR_Integer) 4))));
    Var_133 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_42, (MR_Integer) 5))));
    Var_134 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_42, (MR_Integer) 6))));
    Var_136 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_42, (MR_Integer) 8))));
    Var_137 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_42, (MR_Integer) 9))));
    Var_138 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_42, (MR_Integer) 10))));
    {
      STATE_VARIABLE_Info_49_49 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_49_49, 0) = ((MR_Box) (TypeClassInfo_for_compiler_186));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_49_49, 1) = Var_129;
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_49_49, 2) = ((MR_Box) (Var_130));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_49_49, 3) = (MR_Box) ((MR_Unsigned) (Var_131));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_49_49, 4) = ((MR_Box) (Var_132));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_49_49, 5) = ((MR_Box) (Var_133));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_49_49, 6) = ((MR_Box) (Var_134));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_49_49, 7) = ((MR_Box) (OldAnalysisResults_33));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_49_49, 8) = ((MR_Box) (Var_136));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_49_49, 9) = ((MR_Box) (Var_137));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_49_49, 10) = ((MR_Box) (Var_138));
    }
  }
  else
  {
    MR_Word OldResult_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeResult_21, (MR_Integer) 0))));
    MR_Box OldAnswer_25 = (MR_hl_field(MR_mktag(0), OldResult_23, (MR_Integer) 1));
    MR_Word OldStatus_26 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), OldResult_23, (MR_Integer) 2))) & (MR_Integer) 3);
    MR_Word TypeClassInfo_for_answer_pattern_149;
    MR_Word TypeClassInfo_for_partial_order_151;

    mercury__private_builtin__superclass_from_typeclass_info_3_p_0(TypeClassInfo_for_analysis_148, (MR_Integer) 2, &TypeClassInfo_for_answer_pattern_149);
    mercury__private_builtin__superclass_from_typeclass_info_3_p_0(TypeClassInfo_for_answer_pattern_149, (MR_Integer) 1, &TypeClassInfo_for_partial_order_151);
    succeeded = analysis__equivalent_3_p_0(TypeClassInfo_for_partial_order_151, FuncInfo_20, NewAnswer_18, OldAnswer_25);
    if (succeeded)
    {
      analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_52_95_95_91_54_93_95_48_3_p_0(TypeClassInfo_for_analysis_148, ModuleName_11, FuncId_13, Call_17, NewAnswer_18);
      succeeded = (NewStatus_19 == OldStatus_26);
      if (succeeded)
        STATE_VARIABLE_Info_49_49 = STATE_VARIABLE_Info_0_42;
      else
      {
        MR_Word OldMap0_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_42, (MR_Integer) 7))));
        MR_Word OldMap_28;
        MR_Word TypeClassInfo_for_compiler_160;
        MR_Box Var_82;
        MR_Word Var_83;
        MR_Word Var_84;
        MR_Word Var_85;
        MR_Word Var_86;
        MR_Word Var_87;
        MR_Word Var_89;
        MR_Word Var_90;
        MR_Word Var_91;

        analysis__replace_result_in_analysis_map_8_p_0(TypeClassInfo_for_analysis_148, ModuleName_11, FuncId_13, FuncInfo_20, Call_17, NewAnswer_18, NewStatus_19, OldMap0_27, &OldMap_28);
        TypeClassInfo_for_compiler_160 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_42, (MR_Integer) 0))));
        Var_82 = (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_42, (MR_Integer) 1));
        Var_83 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_42, (MR_Integer) 2))));
        Var_84 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_42, (MR_Integer) 3))) & (MR_Integer) 1);
        Var_85 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_42, (MR_Integer) 4))));
        Var_86 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_42, (MR_Integer) 5))));
        Var_87 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_42, (MR_Integer) 6))));
        Var_89 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_42, (MR_Integer) 8))));
        Var_90 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_42, (MR_Integer) 9))));
        Var_91 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_42, (MR_Integer) 10))));
        {
          STATE_VARIABLE_Info_49_49 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_49_49, 0) = ((MR_Box) (TypeClassInfo_for_compiler_160));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_49_49, 1) = Var_82;
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_49_49, 2) = ((MR_Box) (Var_83));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_49_49, 3) = (MR_Box) ((MR_Unsigned) (Var_84));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_49_49, 4) = ((MR_Box) (Var_85));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_49_49, 5) = ((MR_Box) (Var_86));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_49_49, 6) = ((MR_Box) (Var_87));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_49_49, 7) = ((MR_Box) (OldMap_28));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_49_49, 8) = ((MR_Box) (Var_89));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_49_49, 9) = ((MR_Box) (Var_90));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_49_49, 10) = ((MR_Box) (Var_91));
        }
      }
    }
    else
    {
      MR_Word TypeClassInfo_for_call_pattern_170;
      MR_Word Status_29;
      MR_Word OldArcs_30;
      MR_Word DepModules_31;
      MR_Word STATE_VARIABLE_Info_50_50;
      MR_Word Var_51;
      MR_Word Var_54;
      MR_Word OldMap0_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_42, (MR_Integer) 7))));
      MR_Word OldMap_68;
      MR_Word TypeClassInfo_for_compiler_162;
      MR_Box Var_101;
      MR_Word Var_102;
      MR_Word Var_103;
      MR_Word Var_104;
      MR_Word Var_105;
      MR_Word Var_106;
      MR_Word Var_108;
      MR_Word Var_109;
      MR_Word Var_110;
      MR_Word TypeClassInfo_for_answer_pattern_163;
      MR_Word TypeClassInfo_for_partial_order_165;
      MR_Box conv1_OldArcs_30;
      MR_Box conv4_STATE_VARIABLE_Info_49_49;
      MR_Box conv3_STATE_VARIABLE_IO_48_48;

      analysis__replace_result_in_analysis_map_8_p_0(TypeClassInfo_for_analysis_148, ModuleName_11, FuncId_13, FuncInfo_20, Call_17, NewAnswer_18, NewStatus_19, OldMap0_67, &OldMap_68);
      TypeClassInfo_for_compiler_162 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_42, (MR_Integer) 0))));
      Var_101 = (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_42, (MR_Integer) 1));
      Var_102 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_42, (MR_Integer) 2))));
      Var_103 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_42, (MR_Integer) 3))) & (MR_Integer) 1);
      Var_104 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_42, (MR_Integer) 4))));
      Var_105 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_42, (MR_Integer) 5))));
      Var_106 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_42, (MR_Integer) 6))));
      Var_108 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_42, (MR_Integer) 8))));
      Var_109 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_42, (MR_Integer) 9))));
      Var_110 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_42, (MR_Integer) 10))));
      {
        STATE_VARIABLE_Info_50_50 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_50_50, 0) = ((MR_Box) (TypeClassInfo_for_compiler_162));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_50_50, 1) = Var_101;
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_50_50, 2) = ((MR_Box) (Var_102));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_50_50, 3) = (MR_Box) ((MR_Unsigned) (Var_103));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_50_50, 4) = ((MR_Box) (Var_104));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_50_50, 5) = ((MR_Box) (Var_105));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_50_50, 6) = ((MR_Box) (Var_106));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_50_50, 7) = ((MR_Box) (OldMap_68));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_50_50, 8) = ((MR_Box) (Var_108));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_50_50, 9) = ((MR_Box) (Var_109));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_50_50, 10) = ((MR_Box) (Var_110));
      }
      mercury__private_builtin__superclass_from_typeclass_info_3_p_0(TypeClassInfo_for_analysis_148, (MR_Integer) 2, &TypeClassInfo_for_answer_pattern_163);
      mercury__private_builtin__superclass_from_typeclass_info_3_p_0(TypeClassInfo_for_answer_pattern_163, (MR_Integer) 1, &TypeClassInfo_for_partial_order_165);
      succeeded = analysis__more_precise_than_3_p_0(TypeClassInfo_for_partial_order_165, FuncInfo_20, NewAnswer_18, OldAnswer_25);
      if (succeeded)
        Status_29 = (MR_Integer) 1;
      else
        Status_29 = (MR_Integer) 0;
      Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_50_50, (MR_Integer) 9))));
      mercury__map__lookup_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&analysis_scalar_common_2[5]), Var_51, ((MR_Box) (ModuleName_11)), &conv1_OldArcs_30);
      OldArcs_30 = ((MR_Word) (conv1_OldArcs_30));
      mercury__private_builtin__superclass_from_typeclass_info_3_p_0(TypeClassInfo_for_analysis_148, (MR_Integer) 1, &TypeClassInfo_for_call_pattern_170);
      DepModules_31 = analysis__imdg_dependent_modules_5_f_0(TypeClassInfo_for_call_pattern_170, OldArcs_30, AnalysisName_12, FuncId_13, FuncInfo_20, Call_17);
      analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_51_95_95_91_54_93_95_48_3_p_0(TypeClassInfo_for_analysis_148, NewAnswer_18, OldAnswer_25, Status_29, DepModules_31);
      {
        Var_54 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_54, 0) = ((MR_Box) (&analysis_scalar_common_13[0]));
        MR_hl_field(MR_mktag(0), Var_54, 1) = ((MR_Box) (analysis__update_analysis_registry_5_9_p_0_1));
        MR_hl_field(MR_mktag(0), Var_54, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_54, 3) = ((MR_Box) (Globals_22));
        MR_hl_field(MR_mktag(0), Var_54, 4) = ((MR_Box) (Status_29));
      }
      mercury__set__fold2_6_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&analysis__analysis__type_ctor_info_analysis_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_54, DepModules_31, ((MR_Box) (STATE_VARIABLE_Info_50_50)), &conv4_STATE_VARIABLE_Info_49_49, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_48_48);
      STATE_VARIABLE_Info_49_49 = ((MR_Word) (conv4_STATE_VARIABLE_Info_49_49));
    }
  }
  Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_49_49, (MR_Integer) 5))));
  succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&analysis_scalar_common_2[1]), Var_57, ((MR_Box) (ModuleName_11)), &conv5_ModuleRequests_34);
  if (succeeded)
  {
    ModuleRequests_34 = ((MR_Word) (conv5_ModuleRequests_34));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    TypeCtorInfo_190_190 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0);
    TypeInfo_191_191 = (MR_Word) (&analysis_scalar_common_2[0]);
    succeeded = mercury__map__elem_2_f_0(TypeCtorInfo_190_190, TypeInfo_191_191, ((MR_Box) (AnalysisName_12)), ModuleRequests_34, &conv6_Var_58);
    if (succeeded)
    {
      Var_58 = ((MR_Word) (conv6_Var_58));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      TypeCtorInfo_192_192 = (MR_Word) (&analysis__analysis__type_ctor_info_func_id_0);
      TypeInfo_193_193 = (MR_Word) (&analysis_scalar_common_1[0]);
      succeeded = mercury__map__elem_2_f_0(TypeCtorInfo_192_192, TypeInfo_193_193, ((MR_Box) (FuncId_13)), Var_58, &conv7_Requests_35);
      if (succeeded)
      {
        Requests_35 = ((MR_Word) (conv7_Requests_35));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        succeeded = (Requests_35 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Word Callers0_38;
    MR_Word Callers_41;
    MR_Word Var_63;
    MR_Box conv11_STATE_VARIABLE_Info_43;
    MR_Box conv10_STATE_VARIABLE_IO_45;

    Callers0_38 = mercury__list__filter_map_2_f_0((MR_Word) (&analysis__analysis__type_ctor_info_analysis_request_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&analysis_scalar_common_2[11]), Requests_35);
    mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Callers0_38, &Callers_41);
    {
      Var_63 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_63, 0) = ((MR_Box) (&analysis_scalar_common_13[0]));
      MR_hl_field(MR_mktag(0), Var_63, 1) = ((MR_Box) (analysis__update_analysis_registry_5_9_p_0_3));
      MR_hl_field(MR_mktag(0), Var_63, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_63, 3) = ((MR_Box) (Globals_22));
      MR_hl_field(MR_mktag(0), Var_63, 4) = ((MR_Box) ((MR_Integer) 1));
    }
    mercury__list__foldl2_6_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&analysis__analysis__type_ctor_info_analysis_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_63, Callers_41, ((MR_Box) (STATE_VARIABLE_Info_49_49)), &conv11_STATE_VARIABLE_Info_43, ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_IO_45);
    *STATE_VARIABLE_Info_43 = ((MR_Word) (conv11_STATE_VARIABLE_Info_43));
  }
  else
    *STATE_VARIABLE_Info_43 = STATE_VARIABLE_Info_49_49;
}

static void MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_52_95_95_91_54_93_95_48_3_p_0(
  MR_Word Var_11,
  MR_Word Var_12,
  MR_Word Var_13,
  MR_Box Var_14,
  MR_Box Var_15)
{
  MR_Word Debug_6;

{
#define MR_PROC_LABEL analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_52_95_95_91_54_93_95_48_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_52_95_95_91_54_93_95_48_3_p_0

	MR_Word X;

		{
X = analysis__mutable_variable_debug_analysis;


		;}
#undef MR_PROC_LABEL
	 Debug_6  = X;
}
{
#define MR_PROC_LABEL analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_52_95_95_91_54_93_95_48_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  switch (Debug_6) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      analysis__IntroducedFrom__pred__update_analysis_registry_5__914__1_7_p_0(Var_11, Var_12, Var_13, Var_14, Var_15);
      break;
  }
}

static void MR_CALL 
analysis__IntroducedFrom__pred__update_analysis_registry_5__914__1_7_p_0(
  MR_Word TypeClassInfo_for_analysis_148,
  MR_Word ModuleName_11,
  MR_Word FuncId_13,
  MR_Box Call_17,
  MR_Box NewAnswer_18)
{
  MR_Word TypeInfo_156_156;
  MR_Word TypeInfo_158_158;

  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_analysis_148, (MR_Integer) 4, &TypeInfo_156_156);
  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_analysis_148, (MR_Integer) 5, &TypeInfo_158_158);
  analysis__write_no_change_in_result_6_p_0(TypeInfo_156_156, TypeInfo_158_158, ModuleName_11, FuncId_13, Call_17, NewAnswer_18);
}

void MR_CALL 
analysis__write_no_change_in_result_6_p_0(
  MR_Word TypeInfo_for_Call_27,
  MR_Word TypeInfo_for_Answer_28,
  MR_Word ModuleName_7,
  MR_Word FuncId_8,
  MR_Box Call_9,
  MR_Box NewAnswer_10)
{
  mercury__io__write_string_3_p_0((MR_String) "% No change in the result ");
  mercury__io__write_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_7)));
  mercury__io__write_string_3_p_0((MR_String) ".");
  mercury__io__write_3_p_0((MR_Word) (&analysis__analysis__type_ctor_info_func_id_0), ((MR_Box) (FuncId_8)));
  mercury__io__write_string_3_p_0((MR_String) ":");
  mercury__io__write_3_p_0(TypeInfo_for_Call_27, Call_9);
  mercury__io__write_string_3_p_0((MR_String) " --> ");
  mercury__io__write_3_p_0(TypeInfo_for_Answer_28, NewAnswer_10);
  mercury__io__nl_2_p_0();
}

static void MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_51_95_95_91_54_93_95_48_3_p_0(
  MR_Word Var_11,
  MR_Box Var_12,
  MR_Box Var_13,
  MR_Word Var_14,
  MR_Word Var_15)
{
  MR_Word Debug_6;

{
#define MR_PROC_LABEL analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_51_95_95_91_54_93_95_48_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_51_95_95_91_54_93_95_48_3_p_0

	MR_Word X;

		{
X = analysis__mutable_variable_debug_analysis;


		;}
#undef MR_PROC_LABEL
	 Debug_6  = X;
}
{
#define MR_PROC_LABEL analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_51_95_95_91_54_93_95_48_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  switch (Debug_6) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      analysis__IntroducedFrom__pred__update_analysis_registry_5__943__1_7_p_0(Var_11, Var_12, Var_13, Var_14, Var_15);
      break;
  }
}

static void MR_CALL 
analysis__IntroducedFrom__pred__update_analysis_registry_5__943__1_7_p_0(
  MR_Word TypeClassInfo_for_analysis_148,
  MR_Box NewAnswer_18,
  MR_Box OldAnswer_25,
  MR_Word Status_29,
  MR_Word DepModules_31)
{
  MR_Word TypeInfo_175_175;

  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_analysis_148, (MR_Integer) 5, &TypeInfo_175_175);
  analysis__write_changed_answer_6_p_0(TypeInfo_175_175, OldAnswer_25, NewAnswer_18, Status_29, DepModules_31);
}

void MR_CALL 
analysis__write_changed_answer_6_p_0(
  MR_Word TypeInfo_for_Answer_29,
  MR_Box OldAnswer_7,
  MR_Box NewAnswer_8,
  MR_Word Status_9,
  MR_Word DepModules_10)
{
  mercury__io__write_string_3_p_0((MR_String) "% ");
  mercury__io__write_3_p_0(TypeInfo_for_Answer_29, OldAnswer_7);
  mercury__io__write_string_3_p_0((MR_String) " changed to ");
  mercury__io__write_3_p_0(TypeInfo_for_Answer_29, NewAnswer_8);
  mercury__io__nl_2_p_0();
  mercury__io__write_string_3_p_0((MR_String) "Mark dependent modules as ");
  mercury__io__write_3_p_0((MR_Word) (&analysis__analysis__type_ctor_info_analysis_status_0), ((MR_Box) (Status_9)));
  mercury__io__nl_2_p_0();
  mercury__io__write_string_3_p_0((MR_String) "The modules to mark are: ");
  mercury__io__write_3_p_0((MR_Word) (&analysis_scalar_common_1[3]), ((MR_Box) (DepModules_10)));
  mercury__io__nl_2_p_0();
}

MR_bool MR_CALL 
analysis__equivalent_3_p_0(
  MR_Word TypeClassInfo_for_partial_order_4,
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3)
{
  MR_bool succeeded;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_partial_order_4, (MR_Integer) 0)), (MR_Integer) 6))));

  succeeded = func_0(((MR_Box) (TypeClassInfo_for_partial_order_4)), HeadVar__1_1, HeadVar__2_2, HeadVar__3_3);
  return succeeded;
}

MR_bool MR_CALL 
analysis__more_precise_than_3_p_0(
  MR_Word TypeClassInfo_for_partial_order_4,
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3)
{
  MR_bool succeeded;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_partial_order_4, (MR_Integer) 0)), (MR_Integer) 5))));

  succeeded = func_0(((MR_Box) (TypeClassInfo_for_partial_order_4)), HeadVar__1_1, HeadVar__2_2, HeadVar__3_3);
  return succeeded;
}

void MR_CALL 
analysis__get_func_info_6_p_0(
  MR_Word TypeClassInfo_for_analysis_7,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Box * HeadVar__6_6)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_analysis_7, (MR_Integer) 0)), (MR_Integer) 10))));

  func_0(((MR_Box) (TypeClassInfo_for_analysis_7)), ((MR_Box) (HeadVar__1_1)), ((MR_Box) (HeadVar__2_2)), ((MR_Box) (HeadVar__3_3)), HeadVar__6_6);
}

static MR_bool MR_CALL 
analysis__imdg_dependent_modules_5_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv2_ModuleName_8;

  succeeded = analysis__arc_module_name_3_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)), (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)), ((MR_Word) (wrapper_arg_1)), &conv2_ModuleName_8);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv2_ModuleName_8));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_Word MR_CALL 
analysis__imdg_dependent_modules_5_f_0(
  MR_Word TypeClassInfo_for_call_pattern_16,
  MR_Word ModuleMap_7,
  MR_String AnalysisName_8,
  MR_Word FuncId_9,
  MR_Box FuncInfo_10,
  MR_Box Call_11)
{
  MR_bool succeeded;
  MR_Word HeadVar__6_6;
  MR_Word IMDGEntries_13;
  MR_Word TypeCtorInfo_19_19;
  MR_Word TypeInfo_20_20;
  MR_Word FuncAnalysisMap_12;
  MR_Box conv0_FuncAnalysisMap_12;
  MR_Box conv1_IMDGEntries_13;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&analysis_scalar_common_2[4]), ModuleMap_7, ((MR_Box) (AnalysisName_8)), &conv0_FuncAnalysisMap_12);
  if (succeeded)
  {
    FuncAnalysisMap_12 = ((MR_Word) (conv0_FuncAnalysisMap_12));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    TypeCtorInfo_19_19 = (MR_Word) (&analysis__analysis__type_ctor_info_func_id_0);
    TypeInfo_20_20 = (MR_Word) (&analysis_scalar_common_1[2]);
    succeeded = mercury__map__search_3_p_0(TypeCtorInfo_19_19, TypeInfo_20_20, FuncAnalysisMap_12, ((MR_Box) (FuncId_9)), &conv1_IMDGEntries_13);
    if (succeeded)
    {
      IMDGEntries_13 = ((MR_Word) (conv1_IMDGEntries_13));
      succeeded = MR_TRUE;
    }
  }
  if (succeeded)
  {
    MR_Word Var_14;
    MR_Word Var_15;

    {
      Var_15 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (&analysis_scalar_common_8[2]));
      MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (analysis__imdg_dependent_modules_5_f_0_1));
      MR_hl_field(MR_mktag(0), Var_15, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_15, 3) = ((MR_Box) (TypeClassInfo_for_call_pattern_16));
      MR_hl_field(MR_mktag(0), Var_15, 4) = FuncInfo_10;
      MR_hl_field(MR_mktag(0), Var_15, 5) = Call_11;
    }
    Var_14 = mercury__list__filter_map_2_f_0((MR_Word) (&analysis__analysis__type_ctor_info_imdg_arc_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_15, IMDGEntries_13);
    HeadVar__6_6 = mercury__set__list_to_set_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_14);
  }
  else
    HeadVar__6_6 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
  return HeadVar__6_6;
}

void MR_CALL 
analysis__replace_result_in_analysis_map_8_p_0(
  MR_Word TypeClassInfo_for_analysis_24,
  MR_Word ModuleName_9,
  MR_Word FuncId_10,
  MR_Box FuncInfo_11,
  MR_Box CallPattern_12,
  MR_Box AnswerPattern_13,
  MR_Word Status_14,
  MR_Word Map0_15,
  MR_Word * Map_16)
{
  MR_String AnalysisName_17;
  MR_Word ModuleResults0_18;
  MR_Word AnalysisResults0_19;
  MR_Word FuncResults0_20;
  MR_Word FuncResults_21;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Box MR_CALL (* func_0)(MR_Box) = ((MR_Box MR_CALL (*)(MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_analysis_24, (MR_Integer) 0)), (MR_Integer) 5))));
  MR_Box conv1_AnalysisName_17;
  MR_Box conv2_ModuleResults0_18;
  MR_Box conv3_AnalysisResults0_19;
  MR_Box conv4_FuncResults0_20;

  conv1_AnalysisName_17 = func_0(((MR_Box) (TypeClassInfo_for_analysis_24)));
  AnalysisName_17 = ((MR_String) (conv1_AnalysisName_17));
  conv2_ModuleResults0_18 = mercury__map__lookup_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&analysis_scalar_common_2[3]), Map0_15, ((MR_Box) (ModuleName_9)));
  ModuleResults0_18 = ((MR_Word) (conv2_ModuleResults0_18));
  conv3_AnalysisResults0_19 = mercury__map__lookup_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&analysis_scalar_common_2[2]), ModuleResults0_18, ((MR_Box) (AnalysisName_17)));
  AnalysisResults0_19 = ((MR_Word) (conv3_AnalysisResults0_19));
  conv4_FuncResults0_20 = mercury__map__lookup_2_f_0((MR_Word) (&analysis__analysis__type_ctor_info_func_id_0), (MR_Word) (&analysis_scalar_common_1[1]), AnalysisResults0_19, ((MR_Box) (FuncId_10)));
  FuncResults0_20 = ((MR_Word) (conv4_FuncResults0_20));
  analysis__replace_result_in_list_6_p_0(TypeClassInfo_for_analysis_24, FuncInfo_11, CallPattern_12, AnswerPattern_13, Status_14, FuncResults0_20, &FuncResults_21);
  Var_23 = mercury__map__det_update_3_f_0((MR_Word) (&analysis__analysis__type_ctor_info_func_id_0), (MR_Word) (&analysis_scalar_common_1[1]), AnalysisResults0_19, ((MR_Box) (FuncId_10)), ((MR_Box) (FuncResults_21)));
  Var_22 = mercury__map__det_update_3_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&analysis_scalar_common_2[2]), ModuleResults0_18, ((MR_Box) (AnalysisName_17)), ((MR_Box) (Var_23)));
  *Map_16 = mercury__map__det_update_3_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&analysis_scalar_common_2[3]), Map0_15, ((MR_Box) (ModuleName_9)), ((MR_Box) (Var_22)));
}

void MR_CALL 
analysis__replace_result_in_list_6_p_0(
  MR_Word TypeClassInfo_for_analysis_24,
  MR_Box FuncInfo_7,
  MR_Box Call_8,
  MR_Box Answer_9,
  MR_Word Status_10,
  MR_Word Results0_11,
  MR_Word * Results_12)
{
  MR_bool succeeded;

  if ((Results0_11 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140analysis.replace_result_in_list\'/6", (MR_String) "found no result to replace");
      return;
    }
  else
  {
    MR_Word TypeInfo_25_25;
    MR_Word TypeClassInfo_for_analysis_26;
    MR_Word TypeInfo_29_29;
    MR_Word H0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Results0_11, (MR_Integer) 0))));
    MR_Word T0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Results0_11, (MR_Integer) 1))));
    MR_Box HCall_15;
    MR_Word H_16;
    MR_Word T_17;
    MR_Word Var_18;
    MR_Box Var_19;
    MR_Word TypeClassInfo_for_call_pattern_30;
    MR_Word TypeClassInfo_for_partial_order_32;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box);

    TypeClassInfo_for_analysis_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), H0_13, (MR_Integer) 0))));
    Var_19 = (MR_hl_field(MR_mktag(0), H0_13, (MR_Integer) 1));
    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_analysis_26, (MR_Integer) 4, &TypeInfo_25_25);
    Var_18 = mercury__univ__univ_1_f_0(TypeInfo_25_25, Var_19);
    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_analysis_24, (MR_Integer) 4, &TypeInfo_29_29);
    mercury__univ__det_univ_to_type_2_p_0(TypeInfo_29_29, Var_18, &HCall_15);
    mercury__private_builtin__superclass_from_typeclass_info_3_p_0(TypeClassInfo_for_analysis_24, (MR_Integer) 1, &TypeClassInfo_for_call_pattern_30);
    mercury__private_builtin__superclass_from_typeclass_info_3_p_0(TypeClassInfo_for_call_pattern_30, (MR_Integer) 1, &TypeClassInfo_for_partial_order_32);
    func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_partial_order_32, (MR_Integer) 0)), (MR_Integer) 6))));
    succeeded = func_0(((MR_Box) (TypeClassInfo_for_partial_order_32)), FuncInfo_7, Call_8, HCall_15);
    if (succeeded)
    {
      {
        H_16 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), H_16, 0) = ((MR_Box) (TypeClassInfo_for_analysis_24));
        MR_hl_field(MR_mktag(0), H_16, 1) = Call_8;
        MR_hl_field(MR_mktag(0), H_16, 2) = Answer_9;
        MR_hl_field(MR_mktag(0), H_16, 3) = (MR_Box) ((MR_Unsigned) (Status_10));
      }
      T_17 = T0_14;
    }
    else
    {
      H_16 = H0_13;
      analysis__replace_result_in_list_6_p_0(TypeClassInfo_for_analysis_24, FuncInfo_7, Call_8, Answer_9, Status_10, T0_14, &T_17);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Results_12 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (H_16));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (T_17));
    }
  }
}

static void MR_CALL 
analysis__update_analysis_registry_4_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Info_43;

  analysis__update_analysis_registry_5_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Info_43);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Info_43));
}

void MR_CALL 
analysis__update_analysis_registry_4_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word ModuleName_11,
  MR_String AnalysisName_12,
  MR_Word FuncId_13,
  MR_Word NewResults_14,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18)
{
  MR_Word Var_21;
  MR_Box conv2_STATE_VARIABLE_Info_18;
  MR_Box conv1_STATE_VARIABLE_IO_20;

  {
    Var_21 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&analysis_scalar_common_12[1]));
    MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (analysis__update_analysis_registry_4_9_p_0_1));
    MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (ModuleInfo_10));
    MR_hl_field(MR_mktag(0), Var_21, 4) = ((MR_Box) (ModuleName_11));
    MR_hl_field(MR_mktag(0), Var_21, 5) = ((MR_Box) (AnalysisName_12));
    MR_hl_field(MR_mktag(0), Var_21, 6) = ((MR_Box) (FuncId_13));
  }
  mercury__list__foldl2_6_p_2((MR_Word) (&analysis__analysis__type_ctor_info_some_analysis_result_0), (MR_Word) (&analysis__analysis__type_ctor_info_analysis_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_21, NewResults_14, ((MR_Box) (STATE_VARIABLE_Info_0_17)), &conv2_STATE_VARIABLE_Info_18, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_20);
  *STATE_VARIABLE_Info_18 = ((MR_Word) (conv2_STATE_VARIABLE_Info_18));
}

static void MR_CALL 
analysis__update_analysis_registry_3_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Info_18;

  analysis__update_analysis_registry_4_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Info_18);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Info_18));
}

void MR_CALL 
analysis__update_analysis_registry_3_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word ModuleName_10,
  MR_String AnalysisName_11,
  MR_Word FuncMap_12,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16)
{
  MR_Word Var_19;
  MR_Box conv2_STATE_VARIABLE_Info_16;
  MR_Box conv1_STATE_VARIABLE_IO_18;

  {
    Var_19 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (&analysis_scalar_common_12[0]));
    MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) (analysis__update_analysis_registry_3_8_p_0_1));
    MR_hl_field(MR_mktag(0), Var_19, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(MR_mktag(0), Var_19, 3) = ((MR_Box) (ModuleInfo_9));
    MR_hl_field(MR_mktag(0), Var_19, 4) = ((MR_Box) (ModuleName_10));
    MR_hl_field(MR_mktag(0), Var_19, 5) = ((MR_Box) (AnalysisName_11));
  }
  mercury__map__foldl2_6_p_2((MR_Word) (&analysis__analysis__type_ctor_info_func_id_0), (MR_Word) (&analysis_scalar_common_1[1]), (MR_Word) (&analysis__analysis__type_ctor_info_analysis_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_19, FuncMap_12, ((MR_Box) (STATE_VARIABLE_Info_0_15)), &conv2_STATE_VARIABLE_Info_16, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_18);
  *STATE_VARIABLE_Info_16 = ((MR_Word) (conv2_STATE_VARIABLE_Info_16));
}

static void MR_CALL 
analysis__update_analysis_registry_2_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Info_16;

  analysis__update_analysis_registry_3_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Info_16);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Info_16));
}

void MR_CALL 
analysis__update_analysis_registry_2_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word ModuleName_9,
  MR_Word ModuleMap_10,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14)
{
  MR_Word Var_17;
  MR_Box conv2_STATE_VARIABLE_Info_14;
  MR_Box conv1_STATE_VARIABLE_IO_16;

  {
    Var_17 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (&analysis_scalar_common_11[0]));
    MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (analysis__update_analysis_registry_2_7_p_0_1));
    MR_hl_field(MR_mktag(0), Var_17, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(MR_mktag(0), Var_17, 3) = ((MR_Box) (ModuleInfo_8));
    MR_hl_field(MR_mktag(0), Var_17, 4) = ((MR_Box) (ModuleName_9));
  }
  mercury__map__foldl2_6_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&analysis_scalar_common_2[2]), (MR_Word) (&analysis__analysis__type_ctor_info_analysis_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_17, ModuleMap_10, ((MR_Box) (STATE_VARIABLE_Info_0_13)), &conv2_STATE_VARIABLE_Info_14, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_16);
  *STATE_VARIABLE_Info_14 = ((MR_Word) (conv2_STATE_VARIABLE_Info_14));
}

void MR_CALL 
analysis__more_precise_answer_4_p_0(
  MR_Word TypeClassInfo_for_analysis_15,
  MR_Box FuncInfo_5,
  MR_Word Result_6,
  MR_Word Best0_7,
  MR_Word * Best_8)
{
  MR_bool succeeded;
  MR_Box ResultAnswer_9 = (MR_hl_field(MR_mktag(0), Result_6, (MR_Integer) 1));
  MR_Box BestAnswer0_10 = (MR_hl_field(MR_mktag(0), Best0_7, (MR_Integer) 1));
  MR_Word TypeClassInfo_for_answer_pattern_16;
  MR_Word TypeClassInfo_for_partial_order_18;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box);

  mercury__private_builtin__superclass_from_typeclass_info_3_p_0(TypeClassInfo_for_analysis_15, (MR_Integer) 2, &TypeClassInfo_for_answer_pattern_16);
  mercury__private_builtin__superclass_from_typeclass_info_3_p_0(TypeClassInfo_for_answer_pattern_16, (MR_Integer) 1, &TypeClassInfo_for_partial_order_18);
  func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_partial_order_18, (MR_Integer) 0)), (MR_Integer) 5))));
  succeeded = func_0(((MR_Box) (TypeClassInfo_for_partial_order_18)), FuncInfo_5, ResultAnswer_9, BestAnswer0_10);
  if (succeeded)
    *Best_8 = Result_6;
  else
    *Best_8 = Best0_7;
}

void MR_CALL 
analysis__enable_debug_messages_3_p_0(
  MR_Word Debug_4)
{
{
#define MR_PROC_LABEL analysis__enable_debug_messages_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL analysis__enable_debug_messages_3_p_0

	MR_Word X;

	X = Debug_4 ;
		{
analysis__mutable_variable_debug_analysis = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL analysis__enable_debug_messages_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

MR_Word MR_CALL 
analysis__lub_2_f_0(
  MR_Word StatusA_4,
  MR_Word StatusB_5)
{
  MR_bool succeeded;
  MR_Word Status_6;
  MR_Integer Var_9 = (MR_Integer) (StatusA_4);
  MR_Integer Var_10 = (MR_Integer) (StatusB_5);

  succeeded = (Var_9 < Var_10);
  if (succeeded)
    Status_6 = StatusA_4;
  else
  {
    succeeded = (Var_9 > Var_10);
    if (succeeded)
      Status_6 = StatusB_5;
    else
      Status_6 = StatusA_4;
  }
  return Status_6;
}

static void MR_CALL 
analysis__write_analysis_files_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  analysis__maybe_write_module_imdg_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
analysis__write_analysis_files_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  analysis__maybe_write_module_requests_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
analysis__write_analysis_files_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  analysis__maybe_write_module_overall_status_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
analysis__write_analysis_files_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Info_15;

  analysis__load_module_imdg_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Info_15);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Info_15));
}

void MR_CALL 
analysis__write_analysis_files_7_p_0(
  MR_Word TypeClassInfo_for_compiler_120,
  MR_Box Compiler_8,
  MR_Word ModuleInfo_9,
  MR_Word ImportedModule0_10,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25)
{
  MR_bool succeeded;
  MR_Word ThisModule_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_24, (MR_Integer) 2))));
  MR_Word ImportedModules_14;
  MR_Word LocalModules_15;
  MR_Word LocalImportedModules_16;
  MR_Word Globals_17;
  MR_Word ModuleStatus_18;
  MR_Word ModuleResults_19;
  MR_String TimestampFileName_20;
  MR_Word ProgressStream_21;
  MR_Word ErrorStream_22;
  MR_Word Var_28;
  MR_Word STATE_VARIABLE_Info_29_29;
  MR_Word STATE_VARIABLE_Info_31_31;
  MR_Word Var_33;
  MR_Word STATE_VARIABLE_Info_34_34;
  MR_Word Var_35;
  MR_Word Var_36;
  MR_Word Var_41;
  MR_Word Var_43;
  MR_Word Var_45;
  MR_Word Var_48;
  MR_Box conv2_STATE_VARIABLE_Info_29_29;
  MR_Box conv1_STATE_VARIABLE_IO_30_30;
  MR_Word TypeClassInfo_for_compiler_134;
  MR_Box Var_92;
  MR_Word Var_93;
  MR_Word Var_94;
  MR_Word Var_95;
  MR_Word Var_96;
  MR_Word Var_98;
  MR_Word Var_99;
  MR_Word Var_100;
  MR_Word Var_101;
  MR_Word Var_38;
  MR_Box conv3_STATE_VARIABLE_IO_42_42;
  MR_Box conv4_ModuleResults_19;
  MR_Box conv5_STATE_VARIABLE_IO_46_46;
  MR_Box conv6_STATE_VARIABLE_IO_49_49;
  MR_Word _Succeeded_23;

  ImportedModules_14 = mercury__set__delete_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImportedModule0_10, ((MR_Box) (ThisModule_13)));
  LocalModules_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_24, (MR_Integer) 4))));
  LocalImportedModules_16 = mercury__set__intersect_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), LocalModules_15, ImportedModules_14);
  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_9, &Globals_17);
  {
    Var_28 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (&analysis_scalar_common_10[0]));
    MR_hl_field(MR_mktag(0), Var_28, 1) = ((MR_Box) (analysis__write_analysis_files_7_p_0_1));
    MR_hl_field(MR_mktag(0), Var_28, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_28, 3) = ((MR_Box) (Globals_17));
  }
  mercury__set__fold2_6_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&analysis__analysis__type_ctor_info_analysis_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_28, LocalModules_15, ((MR_Box) (STATE_VARIABLE_Info_0_24)), &conv2_STATE_VARIABLE_Info_29_29, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_30_30);
  STATE_VARIABLE_Info_29_29 = ((MR_Word) (conv2_STATE_VARIABLE_Info_29_29));
  analysis__update_analysis_registry_5_p_0(ModuleInfo_9, STATE_VARIABLE_Info_29_29, &STATE_VARIABLE_Info_31_31);
  Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 8))));
  ModuleStatus_18 = analysis__lub_result_statuses_1_f_0(Var_33);
  Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 6))));
  Var_36 = mercury__map__f_101_108_101_109_32_58_61_3_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&analysis__analysis__type_ctor_info_analysis_status_0), ((MR_Box) (ThisModule_13)), Var_35, ((MR_Box) (ModuleStatus_18)));
  TypeClassInfo_for_compiler_134 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 0))));
  Var_92 = (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 1));
  Var_93 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 2))));
  Var_94 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 3))) & (MR_Integer) 1);
  Var_95 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 4))));
  Var_96 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 5))));
  Var_98 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 7))));
  Var_99 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 8))));
  Var_100 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 9))));
  Var_101 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 10))));
  {
    STATE_VARIABLE_Info_34_34 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_34_34, 0) = ((MR_Box) (TypeClassInfo_for_compiler_134));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_34_34, 1) = Var_92;
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_34_34, 2) = ((MR_Box) (Var_93));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_34_34, 3) = (MR_Box) ((MR_Unsigned) (Var_94));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_34_34, 4) = ((MR_Box) (Var_95));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_34_34, 5) = ((MR_Box) (Var_96));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_34_34, 6) = ((MR_Box) (Var_36));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_34_34, 7) = ((MR_Box) (Var_98));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_34_34, 8) = ((MR_Box) (Var_99));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_34_34, 9) = ((MR_Box) (Var_100));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_34_34, 10) = ((MR_Box) (Var_101));
  }
  analysis__update_intermodule_dependencies_4_p_0(ThisModule_13, LocalImportedModules_16, STATE_VARIABLE_Info_34_34, STATE_VARIABLE_Info_25);
  Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), *STATE_VARIABLE_Info_25, (MR_Integer) 8))));
  succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&analysis_scalar_common_2[2]), Var_38);
  if (!(succeeded))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140analysis.write_analysis_files\'/7", (MR_String) "new_analysis_results is not empty");
      return;
    }
  {
    Var_41 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_41, 0) = ((MR_Box) (&analysis_scalar_common_8[1]));
    MR_hl_field(MR_mktag(0), Var_41, 1) = ((MR_Box) (analysis__write_analysis_files_7_p_0_2));
    MR_hl_field(MR_mktag(0), Var_41, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(MR_mktag(0), Var_41, 3) = ((MR_Box) (*STATE_VARIABLE_Info_25));
    MR_hl_field(MR_mktag(0), Var_41, 4) = ((MR_Box) (Globals_17));
  }
  mercury__set__fold_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_41, LocalModules_15, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_42_42);
  Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), *STATE_VARIABLE_Info_25, (MR_Integer) 7))));
  conv4_ModuleResults_19 = mercury__map__det_elem_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&analysis_scalar_common_2[3]), ((MR_Box) (ThisModule_13)), Var_43);
  ModuleResults_19 = ((MR_Word) (conv4_ModuleResults_19));
  analysis__file__write_module_analysis_results_6_p_0(*STATE_VARIABLE_Info_25, Globals_17, ThisModule_13, ModuleResults_19);
  {
    Var_45 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_45, 0) = ((MR_Box) (&analysis_scalar_common_8[1]));
    MR_hl_field(MR_mktag(0), Var_45, 1) = ((MR_Box) (analysis__write_analysis_files_7_p_0_3));
    MR_hl_field(MR_mktag(0), Var_45, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(MR_mktag(0), Var_45, 3) = ((MR_Box) (*STATE_VARIABLE_Info_25));
    MR_hl_field(MR_mktag(0), Var_45, 4) = ((MR_Box) (Globals_17));
  }
  mercury__set__fold_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_45, LocalImportedModules_16, ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_46_46);
  analysis__file__empty_request_file_5_p_0(*STATE_VARIABLE_Info_25, Globals_17, ThisModule_13);
  {
    Var_48 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_48, 0) = ((MR_Box) (&analysis_scalar_common_8[1]));
    MR_hl_field(MR_mktag(0), Var_48, 1) = ((MR_Box) (analysis__write_analysis_files_7_p_0_4));
    MR_hl_field(MR_mktag(0), Var_48, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(MR_mktag(0), Var_48, 3) = ((MR_Box) (*STATE_VARIABLE_Info_25));
    MR_hl_field(MR_mktag(0), Var_48, 4) = ((MR_Box) (Globals_17));
  }
  mercury__set__fold_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_48, LocalImportedModules_16, ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_IO_49_49);
  analysis__module_name_to_write_file_name_7_p_0(TypeClassInfo_for_compiler_120, Compiler_8, Globals_17, (MR_Word) (((MR_Box) ((MR_String) ".analysis_date"))), ThisModule_13, &TimestampFileName_20);
  hlds__passes_aux__get_progress_output_stream_4_p_0(ModuleInfo_9, &ProgressStream_21);
  hlds__passes_aux__get_error_output_stream_4_p_0(ModuleInfo_9, &ErrorStream_22);
  parse_tree__module_cmds__touch_datestamp_7_p_0(Globals_17, ProgressStream_21, ErrorStream_22, TimestampFileName_20, &_Succeeded_23);
}

void MR_CALL 
analysis__module_name_to_write_file_name_7_p_0(
  MR_Word TypeClassInfo_for_compiler_8,
  MR_Box HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_String * HeadVar__5_5)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_compiler_8, (MR_Integer) 0)), (MR_Integer) 9))));
  MR_Box conv2_HeadVar__5_5;
  MR_Box conv1_HeadVar__7_7;

  func_0(((MR_Box) (TypeClassInfo_for_compiler_8)), HeadVar__1_1, ((MR_Box) (HeadVar__2_2)), ((MR_Box) (HeadVar__3_3)), ((MR_Box) (HeadVar__4_4)), &conv2_HeadVar__5_5, ((MR_Box) ((MR_Integer) 0)), &conv1_HeadVar__7_7);
  *HeadVar__5_5 = ((MR_String) (conv2_HeadVar__5_5));
}

static MR_Box MR_CALL 
analysis__lub_result_statuses_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Box wrapper_arg_4;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__4_4;

  conv0_HeadVar__4_4 = analysis__lub_result_statuses_2_3_f_0(((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
  return wrapper_arg_4;
}

MR_Word MR_CALL 
analysis__lub_result_statuses_1_f_0(
  MR_Word ModuleMap_3)
{
  MR_Word HeadVar__2_2;
  MR_Box conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = mercury__map__foldl_3_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&analysis_scalar_common_2[2]), (MR_Word) (&analysis__analysis__type_ctor_info_analysis_status_0), (MR_Word) (&analysis_scalar_common_2[10]), ModuleMap_3, ((MR_Box) ((MR_Integer) 2)));
  HeadVar__2_2 = ((MR_Word) (conv1_HeadVar__2_2));
  return HeadVar__2_2;
}

static void MR_CALL 
analysis__update_intermodule_dependencies_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Info_14;

  analysis__update_intermodule_dependencies_2_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Info_14);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Info_14));
}

void MR_CALL 
analysis__update_intermodule_dependencies_4_p_0(
  MR_Word ModuleName_5,
  MR_Word LocalImportedModules_6,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9)
{
  MR_Word Var_10;
  MR_Box conv1_STATE_VARIABLE_Info_9;

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (&analysis_scalar_common_7[1]));
    MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (analysis__update_intermodule_dependencies_4_p_0_1));
    MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (ModuleName_5));
  }
  mercury__set__fold_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&analysis__analysis__type_ctor_info_analysis_info_0), Var_10, LocalImportedModules_6, ((MR_Box) (STATE_VARIABLE_Info_0_8)), &conv1_STATE_VARIABLE_Info_9);
  *STATE_VARIABLE_Info_9 = ((MR_Word) (conv1_STATE_VARIABLE_Info_9));
}

static void MR_CALL 
analysis__update_analysis_registry_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Info_16;

  analysis__update_analysis_registry_3_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Info_16);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Info_16));
}

void MR_CALL 
analysis__update_analysis_registry_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word STATE_VARIABLE_Info_0_10,
  MR_Word * STATE_VARIABLE_Info_11)
{
  MR_Word NewResults_9;
  MR_Word STATE_VARIABLE_Info_18_18;
  MR_Word Var_21;
  MR_Word Var_23;
  MR_Word Debug_61;
  MR_Word Var_76;
  MR_Box conv2_STATE_VARIABLE_Info_18_18;
  MR_Box conv1_STATE_VARIABLE_IO_13;
  MR_Word TypeClassInfo_for_compiler_56;
  MR_Box Var_40;
  MR_Word Var_41;
  MR_Word Var_42;
  MR_Word Var_43;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Word Var_46;
  MR_Word Var_48;
  MR_Word Var_49;

{
#define MR_PROC_LABEL analysis__update_analysis_registry_5_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL analysis__update_analysis_registry_5_p_0

	MR_Word X;

		{
X = analysis__mutable_variable_debug_analysis;


		;}
#undef MR_PROC_LABEL
	 Debug_61  = X;
}
{
#define MR_PROC_LABEL analysis__update_analysis_registry_5_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  switch (Debug_61) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      mercury__io__write_string_3_p_0((MR_String) "% Updating analysis registry.\n");
      break;
  }
  Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_10, (MR_Integer) 2))));
  NewResults_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_10, (MR_Integer) 8))));
  {
    Var_76 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_76, 0) = ((MR_Box) (&analysis_scalar_common_11[0]));
    MR_hl_field(MR_mktag(0), Var_76, 1) = ((MR_Box) (analysis__update_analysis_registry_5_p_0_1));
    MR_hl_field(MR_mktag(0), Var_76, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(MR_mktag(0), Var_76, 3) = ((MR_Box) (ModuleInfo_6));
    MR_hl_field(MR_mktag(0), Var_76, 4) = ((MR_Box) (Var_23));
  }
  mercury__map__foldl2_6_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&analysis_scalar_common_2[2]), (MR_Word) (&analysis__analysis__type_ctor_info_analysis_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_76, NewResults_9, ((MR_Box) (STATE_VARIABLE_Info_0_10)), &conv2_STATE_VARIABLE_Info_18_18, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_13);
  STATE_VARIABLE_Info_18_18 = ((MR_Word) (conv2_STATE_VARIABLE_Info_18_18));
  Var_21 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&analysis_scalar_common_2[2]));
  TypeClassInfo_for_compiler_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_18_18, (MR_Integer) 0))));
  Var_40 = (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_18_18, (MR_Integer) 1));
  Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_18_18, (MR_Integer) 2))));
  Var_42 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_18_18, (MR_Integer) 3))) & (MR_Integer) 1);
  Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_18_18, (MR_Integer) 4))));
  Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_18_18, (MR_Integer) 5))));
  Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_18_18, (MR_Integer) 6))));
  Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_18_18, (MR_Integer) 7))));
  Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_18_18, (MR_Integer) 9))));
  Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_18_18, (MR_Integer) 10))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_11 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (TypeClassInfo_for_compiler_56));
    MR_hl_field(MR_mktag(0), base, 1) = Var_40;
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_41));
    MR_hl_field(MR_mktag(0), base, 3) = (MR_Box) ((MR_Unsigned) (Var_42));
    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_43));
    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_44));
    MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_45));
    MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_46));
    MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_21));
    MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_48));
    MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_49));
  }
}

void MR_CALL 
analysis__module_is_local_3_p_0(
  MR_Word Info_4,
  MR_Word ModuleName_5,
  MR_Word * IsLocal_6)
{
  MR_bool succeeded;
  MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 4))));

  succeeded = mercury__set__contains_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_7, ((MR_Box) (ModuleName_5)));
  if (succeeded)
    *IsLocal_6 = (MR_Integer) 1;
  else
    *IsLocal_6 = (MR_Integer) 0;
}

static void MR_CALL 
analysis__prepare_intermodule_analysis_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Info_14;

  analysis__load_module_analysis_results_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Info_14);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Info_14));
}

void MR_CALL 
analysis__prepare_intermodule_analysis_7_p_0(
  MR_Word Globals_8,
  MR_Word ImportedModuleNames0_9,
  MR_Word LocalModuleNames_10,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17)
{
  MR_Word ThisModule_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 2))));
  MR_Word ImportedModuleNames_14;
  MR_Word ThisModuleRequests_15;
  MR_Word STATE_VARIABLE_Info_20_20;
  MR_Word Var_21;
  MR_Word STATE_VARIABLE_Info_22_22;
  MR_Word STATE_VARIABLE_Info_24_24;
  MR_Word Var_28;
  MR_Word Var_29;
  MR_Word TypeClassInfo_for_compiler_70;
  MR_Box Var_39;
  MR_Word Var_40;
  MR_Word Var_41;
  MR_Word Var_43;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Word Var_46;
  MR_Word Var_47;
  MR_Word Var_48;
  MR_Box conv2_STATE_VARIABLE_Info_22_22;
  MR_Box conv1_STATE_VARIABLE_IO_23_23;
  MR_Word TypeClassInfo_for_compiler_80;
  MR_Box Var_58;
  MR_Word Var_59;
  MR_Word Var_60;
  MR_Word Var_61;
  MR_Word Var_63;
  MR_Word Var_64;
  MR_Word Var_65;
  MR_Word Var_66;
  MR_Word Var_67;

  ImportedModuleNames_14 = mercury__set__delete_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImportedModuleNames0_9, ((MR_Box) (ThisModule_13)));
  TypeClassInfo_for_compiler_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 0))));
  Var_39 = (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 1));
  Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 2))));
  Var_41 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 3))) & (MR_Integer) 1);
  Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 5))));
  Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 6))));
  Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 7))));
  Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 8))));
  Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 9))));
  Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 10))));
  {
    STATE_VARIABLE_Info_20_20 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_20_20, 0) = ((MR_Box) (TypeClassInfo_for_compiler_70));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_20_20, 1) = Var_39;
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_20_20, 2) = ((MR_Box) (Var_40));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_20_20, 3) = (MR_Box) ((MR_Unsigned) (Var_41));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_20_20, 4) = ((MR_Box) (LocalModuleNames_10));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_20_20, 5) = ((MR_Box) (Var_43));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_20_20, 6) = ((MR_Box) (Var_44));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_20_20, 7) = ((MR_Box) (Var_45));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_20_20, 8) = ((MR_Box) (Var_46));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_20_20, 9) = ((MR_Box) (Var_47));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_20_20, 10) = ((MR_Box) (Var_48));
  }
  {
    Var_21 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&analysis_scalar_common_10[0]));
    MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (analysis__prepare_intermodule_analysis_7_p_0_1));
    MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (Globals_8));
  }
  mercury__set__fold2_6_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&analysis__analysis__type_ctor_info_analysis_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_21, ImportedModuleNames_14, ((MR_Box) (STATE_VARIABLE_Info_20_20)), &conv2_STATE_VARIABLE_Info_22_22, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_23_23);
  STATE_VARIABLE_Info_22_22 = ((MR_Word) (conv2_STATE_VARIABLE_Info_22_22));
  analysis__load_module_analysis_results_6_p_0(Globals_8, ThisModule_13, STATE_VARIABLE_Info_22_22, &STATE_VARIABLE_Info_24_24);
  analysis__file__read_module_analysis_requests_6_p_0(STATE_VARIABLE_Info_24_24, Globals_8, ThisModule_13, &ThisModuleRequests_15);
  Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_24_24, (MR_Integer) 5))));
  Var_29 = mercury__map__f_101_108_101_109_32_58_61_3_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&analysis_scalar_common_2[1]), ((MR_Box) (ThisModule_13)), Var_28, ((MR_Box) (ThisModuleRequests_15)));
  TypeClassInfo_for_compiler_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_24_24, (MR_Integer) 0))));
  Var_58 = (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_24_24, (MR_Integer) 1));
  Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_24_24, (MR_Integer) 2))));
  Var_60 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_24_24, (MR_Integer) 3))) & (MR_Integer) 1);
  Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_24_24, (MR_Integer) 4))));
  Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_24_24, (MR_Integer) 6))));
  Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_24_24, (MR_Integer) 7))));
  Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_24_24, (MR_Integer) 8))));
  Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_24_24, (MR_Integer) 9))));
  Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_24_24, (MR_Integer) 10))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_17 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (TypeClassInfo_for_compiler_80));
    MR_hl_field(MR_mktag(0), base, 1) = Var_58;
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_59));
    MR_hl_field(MR_mktag(0), base, 3) = (MR_Box) ((MR_Unsigned) (Var_60));
    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_61));
    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_29));
    MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_63));
    MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_64));
    MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_65));
    MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_66));
    MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_67));
  }
}

void MR_CALL 
analysis__load_module_analysis_results_6_p_0(
  MR_Word Globals_7,
  MR_Word ModuleName_8,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14)
{
  MR_bool succeeded;
  MR_Word Var_112 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_13, (MR_Integer) 7))));
  MR_Word Var_113 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_13, (MR_Integer) 6))));

  succeeded = mercury__map__contains_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&analysis_scalar_common_2[3]), Var_112, ((MR_Box) (ModuleName_8)));
  if (!(succeeded))
    succeeded = mercury__map__contains_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&analysis__analysis__type_ctor_info_analysis_status_0), Var_113, ((MR_Box) (ModuleName_8)));
  if (succeeded)
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140analysis.load_module_analysis_results\'/6", (MR_String) "ensure_old_module_analysis_results_loaded");
      return;
    }
  else
  {
    MR_Word TypeClassInfo_for_compiler_101 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_13, (MR_Integer) 0))));
    MR_Word ModuleStatus_11;
    MR_Word ModuleResults_12;
    MR_Box Var_21 = (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_13, (MR_Integer) 1));
    MR_Word STATE_VARIABLE_Info_24_24;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_29;
    MR_Word Var_72;
    MR_Word TypeClassInfo_for_compiler_106;
    MR_Box Var_66;
    MR_Word Var_67;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_Word Var_70;
    MR_Word Var_73;
    MR_Word Var_74;
    MR_Word Var_75;
    MR_Word TypeClassInfo_for_compiler_108;
    MR_Box Var_85;
    MR_Word Var_86;
    MR_Word Var_87;
    MR_Word Var_88;
    MR_Word Var_89;
    MR_Word Var_90;
    MR_Word Var_92;
    MR_Word Var_93;
    MR_Word Var_94;

    analysis__do_read_module_overall_status_6_p_0(TypeClassInfo_for_compiler_101, Var_21, Globals_7, ModuleName_8, &ModuleStatus_11);
    analysis__file__read_module_analysis_results_6_p_0(STATE_VARIABLE_Info_0_13, Globals_7, ModuleName_8, &ModuleResults_12);
    Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_13, (MR_Integer) 6))));
    Var_26 = mercury__map__f_101_108_101_109_32_58_61_3_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&analysis__analysis__type_ctor_info_analysis_status_0), ((MR_Box) (ModuleName_8)), Var_25, ((MR_Box) (ModuleStatus_11)));
    TypeClassInfo_for_compiler_106 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_13, (MR_Integer) 0))));
    Var_66 = (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_13, (MR_Integer) 1));
    Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_13, (MR_Integer) 2))));
    Var_68 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_13, (MR_Integer) 3))) & (MR_Integer) 1);
    Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_13, (MR_Integer) 4))));
    Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_13, (MR_Integer) 5))));
    Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_13, (MR_Integer) 7))));
    Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_13, (MR_Integer) 8))));
    Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_13, (MR_Integer) 9))));
    Var_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_13, (MR_Integer) 10))));
    {
      STATE_VARIABLE_Info_24_24 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_24_24, 0) = ((MR_Box) (TypeClassInfo_for_compiler_106));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_24_24, 1) = Var_66;
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_24_24, 2) = ((MR_Box) (Var_67));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_24_24, 3) = (MR_Box) ((MR_Unsigned) (Var_68));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_24_24, 4) = ((MR_Box) (Var_69));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_24_24, 5) = ((MR_Box) (Var_70));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_24_24, 6) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_24_24, 7) = ((MR_Box) (Var_72));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_24_24, 8) = ((MR_Box) (Var_73));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_24_24, 9) = ((MR_Box) (Var_74));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_24_24, 10) = ((MR_Box) (Var_75));
    }
    Var_29 = mercury__map__f_101_108_101_109_32_58_61_3_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&analysis_scalar_common_2[3]), ((MR_Box) (ModuleName_8)), Var_72, ((MR_Box) (ModuleResults_12)));
    TypeClassInfo_for_compiler_108 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_24_24, (MR_Integer) 0))));
    Var_85 = (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_24_24, (MR_Integer) 1));
    Var_86 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_24_24, (MR_Integer) 2))));
    Var_87 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_24_24, (MR_Integer) 3))) & (MR_Integer) 1);
    Var_88 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_24_24, (MR_Integer) 4))));
    Var_89 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_24_24, (MR_Integer) 5))));
    Var_90 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_24_24, (MR_Integer) 6))));
    Var_92 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_24_24, (MR_Integer) 8))));
    Var_93 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_24_24, (MR_Integer) 9))));
    Var_94 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_24_24, (MR_Integer) 10))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_14 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (TypeClassInfo_for_compiler_108));
      MR_hl_field(MR_mktag(0), base, 1) = Var_85;
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_86));
      MR_hl_field(MR_mktag(0), base, 3) = (MR_Box) ((MR_Unsigned) (Var_87));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_88));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_89));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_90));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_92));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_93));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_94));
    }
  }
}

void MR_CALL 
analysis__do_read_module_overall_status_6_p_0(
  MR_Word TypeClassInfo_for_compiler_15,
  MR_Box Compiler_7,
  MR_Word Globals_8,
  MR_Word ModuleName_9,
  MR_Word * ModuleStatus_10)
{
  analysis__file__read_module_overall_status_6_p_0(TypeClassInfo_for_compiler_15, Compiler_7, Globals_8, ModuleName_9, ModuleStatus_10);
}

static MR_bool MR_CALL 
analysis__lookup_requests_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = analysis__IntroducedFrom__func__lookup_requests__814__1_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), wrapper_arg_2);
  return succeeded;
}

void MR_CALL 
analysis__lookup_requests_5_p_0(
  MR_Word TypeClassInfo_for_call_pattern_46,
  MR_Word Info_6,
  MR_String AnalysisName_7,
  MR_Word ModuleName_8,
  MR_Word FuncId_9,
  MR_Word * CallPatterns_10)
{
  MR_bool succeeded;
  MR_Word Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 2))));
  MR_Word CallPatterns0_13;
  MR_Word TypeCtorInfo_51_51;
  MR_Word TypeInfo_52_52;
  MR_Word TypeCtorInfo_53_53;
  MR_Word TypeInfo_54_54;
  MR_Word ModuleRequests_11;
  MR_Word AnalysisRequests_12;
  MR_Word Var_20;
  MR_Box conv0_ModuleRequests_11;
  MR_Box conv1_AnalysisRequests_12;
  MR_Box conv2_CallPatterns0_13;

  succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_8, Var_63);
  if (!(succeeded))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140analysis.lookup_requests\'/5", (MR_String) "not this_module");
      return;
    }
  Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 5))));
  succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&analysis_scalar_common_2[1]), Var_20, ((MR_Box) (ModuleName_8)), &conv0_ModuleRequests_11);
  if (succeeded)
  {
    ModuleRequests_11 = ((MR_Word) (conv0_ModuleRequests_11));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    TypeCtorInfo_51_51 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0);
    TypeInfo_52_52 = (MR_Word) (&analysis_scalar_common_2[0]);
    succeeded = mercury__map__search_3_p_0(TypeCtorInfo_51_51, TypeInfo_52_52, ModuleRequests_11, ((MR_Box) (AnalysisName_7)), &conv1_AnalysisRequests_12);
    if (succeeded)
    {
      AnalysisRequests_12 = ((MR_Word) (conv1_AnalysisRequests_12));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      TypeCtorInfo_53_53 = (MR_Word) (&analysis__analysis__type_ctor_info_func_id_0);
      TypeInfo_54_54 = (MR_Word) (&analysis_scalar_common_1[0]);
      succeeded = mercury__map__search_3_p_0(TypeCtorInfo_53_53, TypeInfo_54_54, AnalysisRequests_12, ((MR_Box) (FuncId_9)), &conv2_CallPatterns0_13);
      if (succeeded)
      {
        CallPatterns0_13 = ((MR_Word) (conv2_CallPatterns0_13));
        succeeded = MR_TRUE;
      }
    }
  }
  if (succeeded)
  {
    MR_Word TypeInfo_57_57;
    MR_Word TypeInfo_62_62;
    MR_Word CallPatterns1_14;
    MR_Word Var_21;

    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_call_pattern_46, (MR_Integer) 4, &TypeInfo_57_57);
    {
      Var_21 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&analysis_scalar_common_5[2]));
      MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (analysis__lookup_requests_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (TypeClassInfo_for_call_pattern_46));
    }
    CallPatterns1_14 = mercury__list__filter_map_2_f_0((MR_Word) (&analysis__analysis__type_ctor_info_analysis_request_0), TypeInfo_57_57, Var_21, CallPatterns0_13);
    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_call_pattern_46, (MR_Integer) 4, &TypeInfo_62_62);
    mercury__list__sort_and_remove_dups_2_p_0(TypeInfo_62_62, CallPatterns1_14, CallPatterns_10);
  }
  else
    *CallPatterns_10 = (MR_Word) ((MR_Unsigned) 0U);
}

static MR_Box MR_CALL 
analysis__lookup_existing_call_patterns_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;

  wrapper_arg_2 = analysis__IntroducedFrom__func__lookup_existing_call_patterns__792__1_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return wrapper_arg_2;
}

void MR_CALL 
analysis__lookup_existing_call_patterns_5_p_0(
  MR_Word TypeClassInfo_for_call_pattern_45,
  MR_Word Info_6,
  MR_String AnalysisName_7,
  MR_Word ModuleName_8,
  MR_Word FuncId_9,
  MR_Word * Calls_10)
{
  MR_bool succeeded;
  MR_Word Map_11;
  MR_Word Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 2))));
  MR_Word Results_14;
  MR_Word TypeCtorInfo_50_50;
  MR_Word TypeInfo_51_51;
  MR_Word TypeCtorInfo_52_52;
  MR_Word TypeInfo_53_53;
  MR_Word ModuleResults_12;
  MR_Word AnalysisResults_13;
  MR_Box conv0_ModuleResults_12;
  MR_Box conv1_AnalysisResults_13;
  MR_Box conv2_Results_14;

  succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_8, Var_61);
  if (!(succeeded))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140analysis.lookup_existing_call_patterns\'/5", (MR_String) "not this_module");
      return;
    }
  Map_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 7))));
  succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&analysis_scalar_common_2[3]), Map_11, ((MR_Box) (ModuleName_8)), &conv0_ModuleResults_12);
  if (succeeded)
  {
    ModuleResults_12 = ((MR_Word) (conv0_ModuleResults_12));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    TypeCtorInfo_50_50 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0);
    TypeInfo_51_51 = (MR_Word) (&analysis_scalar_common_2[2]);
    succeeded = mercury__map__search_3_p_0(TypeCtorInfo_50_50, TypeInfo_51_51, ModuleResults_12, ((MR_Box) (AnalysisName_7)), &conv1_AnalysisResults_13);
    if (succeeded)
    {
      AnalysisResults_13 = ((MR_Word) (conv1_AnalysisResults_13));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      TypeCtorInfo_52_52 = (MR_Word) (&analysis__analysis__type_ctor_info_func_id_0);
      TypeInfo_53_53 = (MR_Word) (&analysis_scalar_common_1[1]);
      succeeded = mercury__map__search_3_p_0(TypeCtorInfo_52_52, TypeInfo_53_53, AnalysisResults_13, ((MR_Box) (FuncId_9)), &conv2_Results_14);
      if (succeeded)
      {
        Results_14 = ((MR_Word) (conv2_Results_14));
        succeeded = MR_TRUE;
      }
    }
  }
  if (succeeded)
  {
    MR_Word TypeInfo_56_56;
    MR_Word Var_22;

    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_call_pattern_45, (MR_Integer) 4, &TypeInfo_56_56);
    {
      Var_22 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (&analysis_scalar_common_5[1]));
      MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) (analysis__lookup_existing_call_patterns_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_22, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_22, 3) = ((MR_Box) (TypeClassInfo_for_call_pattern_45));
    }
    *Calls_10 = mercury__list__map_2_f_0((MR_Word) (&analysis__analysis__type_ctor_info_some_analysis_result_0), TypeInfo_56_56, Var_22, Results_14);
  }
  else
    *Calls_10 = (MR_Word) ((MR_Unsigned) 0U);
}

static void MR_CALL 
analysis__lookup_best_result_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Best_8;

  analysis__more_precise_answer_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_Best_8);
  *wrapper_arg_3 = ((MR_Box) (conv0_Best_8));
}

void MR_CALL 
analysis__lookup_best_result_6_p_0(
  MR_Word TypeClassInfo_for_analysis_35,
  MR_Word Info_7,
  MR_Word ModuleName_8,
  MR_Word FuncId_9,
  MR_Box FuncInfo_10,
  MR_Box Call_11,
  MR_Word * MaybeBestResult_12)
{
  MR_Word MatchingResults_14;
  MR_Word Debug_51;

{
#define MR_PROC_LABEL analysis__lookup_best_result_6_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL analysis__lookup_best_result_6_p_0

	MR_Word X;

		{
X = analysis__mutable_variable_debug_analysis;


		;}
#undef MR_PROC_LABEL
	 Debug_51  = X;
}
{
#define MR_PROC_LABEL analysis__lookup_best_result_6_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  switch (Debug_51) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      analysis__IntroducedFrom__pred__lookup_best_result__744__1_4_p_0(ModuleName_8, FuncId_9);
      break;
  }
  analysis__lookup_matching_results_6_p_0(TypeClassInfo_for_analysis_35, Info_7, ModuleName_8, FuncId_9, FuncInfo_10, Call_11, &MatchingResults_14);
  if ((MatchingResults_14 == (MR_Word) ((MR_Unsigned) 0U)))
    *MaybeBestResult_12 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word TypeInfo_42_42;
    MR_Word TypeInfo_44_44;
    MR_Word TypeInfo_46_46;
    MR_Word Result_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MatchingResults_14, (MR_Integer) 0))));
    MR_Word Results_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MatchingResults_14, (MR_Integer) 1))));
    MR_Word BestResult_17;
    MR_Word Var_32;
    MR_Box conv1_BestResult_17;

    {
      Var_32 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (&analysis_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), Var_32, 1) = ((MR_Box) (analysis__lookup_best_result_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_32, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_32, 3) = ((MR_Box) (TypeClassInfo_for_analysis_35));
      MR_hl_field(MR_mktag(0), Var_32, 4) = FuncInfo_10;
    }
    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_analysis_35, (MR_Integer) 4, &TypeInfo_42_42);
    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_analysis_35, (MR_Integer) 5, &TypeInfo_44_44);
    {
      TypeInfo_46_46 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_46_46, 0) = ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_result_2));
      MR_hl_field(MR_mktag(0), TypeInfo_46_46, 1) = ((MR_Box) (TypeInfo_42_42));
      MR_hl_field(MR_mktag(0), TypeInfo_46_46, 2) = ((MR_Box) (TypeInfo_44_44));
    }
    mercury__list__foldl_4_p_0(TypeInfo_46_46, TypeInfo_46_46, (MR_Word) (Var_32), Results_16, ((MR_Box) (Result_15)), &conv1_BestResult_17);
    BestResult_17 = ((MR_Word) (conv1_BestResult_17));
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeBestResult_12 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (BestResult_17));
    }
  }
}

static void MR_CALL 
analysis__IntroducedFrom__pred__lookup_best_result__744__1_4_p_0(
  MR_Word ModuleName_8,
  MR_Word FuncId_9)
{
  mercury__io__write_string_3_p_0((MR_String) "% Looking up best analysis result for ");
  mercury__io__write_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_8)));
  mercury__io__write_string_3_p_0((MR_String) ".");
  mercury__io__write_3_p_0((MR_Word) (&analysis__analysis__type_ctor_info_func_id_0), ((MR_Box) (FuncId_9)));
  mercury__io__nl_2_p_0();
}

static MR_bool MR_CALL 
analysis__lookup_matching_results_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = analysis__IntroducedFrom__pred__lookup_matching_results__731__1_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)), (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

void MR_CALL 
analysis__lookup_matching_results_6_p_0(
  MR_Word TypeClassInfo_for_analysis_21,
  MR_Word Info_7,
  MR_Word ModuleName_8,
  MR_Word FuncId_9,
  MR_Box FuncInfo_10,
  MR_Box Call_11,
  MR_Word * ResultList_12)
{
  MR_bool succeeded;
  MR_Word TypeInfo_23_23;
  MR_Word TypeInfo_25_25;
  MR_Word TypeInfo_27_27;
  MR_Word AllResultsList_13;
  MR_Word Var_16;

  analysis__lookup_results_1_5_p_0(TypeClassInfo_for_analysis_21, Info_7, ModuleName_8, FuncId_9, (MR_Integer) 0, &AllResultsList_13);
  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_analysis_21, (MR_Integer) 4, &TypeInfo_23_23);
  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_analysis_21, (MR_Integer) 5, &TypeInfo_25_25);
  {
    TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeInfo_27_27, 0) = ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_result_2));
    MR_hl_field(MR_mktag(0), TypeInfo_27_27, 1) = ((MR_Box) (TypeInfo_23_23));
    MR_hl_field(MR_mktag(0), TypeInfo_27_27, 2) = ((MR_Box) (TypeInfo_25_25));
  }
  {
    Var_16 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (&analysis_scalar_common_7[0]));
    MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) (analysis__lookup_matching_results_6_p_0_1));
    MR_hl_field(MR_mktag(0), Var_16, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(MR_mktag(0), Var_16, 3) = ((MR_Box) (TypeClassInfo_for_analysis_21));
    MR_hl_field(MR_mktag(0), Var_16, 4) = FuncInfo_10;
    MR_hl_field(MR_mktag(0), Var_16, 5) = Call_11;
  }
  *ResultList_12 = mercury__list__filter_2_f_0(TypeInfo_27_27, Var_16, AllResultsList_13);
}

void MR_CALL 
analysis__lookup_results_4_p_0(
  MR_Word TypeClassInfo_for_analysis_10,
  MR_Word Info_5,
  MR_Word ModuleName_6,
  MR_Word FuncId_7,
  MR_Word * ResultList_8)
{
  analysis__lookup_results_1_5_p_0(TypeClassInfo_for_analysis_10, Info_5, ModuleName_6, FuncId_7, (MR_Integer) 0, ResultList_8);
}

void MR_CALL 
analysis__record_result_7_p_0(
  MR_Word TypeClassInfo_for_analysis_59,
  MR_Word ModuleName_8,
  MR_Word FuncId_9,
  MR_Box CallPattern_10,
  MR_Box AnswerPattern_11,
  MR_Word Status_12,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18)
{
  MR_bool succeeded;
  MR_Word MakeAnalysisReg_14;
  MR_Word Var_37;
  MR_Word Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 2))));

  succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_8, Var_64);
  if (!(succeeded))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140analysis.record_result\'/7", (MR_String) "recording result for procedure defined in another module");
      return;
    }
  MakeAnalysisReg_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 3))) & (MR_Integer) 1);
  Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 8))));
  switch (MakeAnalysisReg_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Map_16;
        MR_Word TypeClassInfo_for_compiler_63;
        MR_Box Var_49;
        MR_Word Var_50;
        MR_Word Var_51;
        MR_Word Var_52;
        MR_Word Var_53;
        MR_Word Var_54;
        MR_Word Var_55;
        MR_Word Var_57;
        MR_Word Var_58;

        analysis__record_result_in_analysis_map_6_p_0(TypeClassInfo_for_analysis_59, FuncId_9, CallPattern_10, AnswerPattern_11, Status_12, Var_37, &Map_16);
        TypeClassInfo_for_compiler_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 0))));
        Var_49 = (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 1));
        Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 2))));
        Var_51 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 3))) & (MR_Integer) 1);
        Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 4))));
        Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 5))));
        Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 6))));
        Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 7))));
        Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 9))));
        Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 10))));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_Info_18 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (TypeClassInfo_for_compiler_63));
          MR_hl_field(MR_mktag(0), base, 1) = Var_49;
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_50));
          MR_hl_field(MR_mktag(0), base, 3) = (MR_Box) ((MR_Unsigned) (Var_51));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_52));
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_53));
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_54));
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_55));
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Map_16));
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_57));
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_58));
        }
      }
      break;
    case (MR_Integer) 1:
      *STATE_VARIABLE_Info_18 = STATE_VARIABLE_Info_0_17;
      break;
  }
}

void MR_CALL 
analysis__record_result_in_analysis_map_6_p_0(
  MR_Word TypeClassInfo_for_analysis_21,
  MR_Word FuncId_7,
  MR_Box CallPattern_8,
  MR_Box AnswerPattern_9,
  MR_Word Status_10,
  MR_Word ModuleResults0_11,
  MR_Word * ModuleResults_12)
{
  MR_bool succeeded;
  MR_String AnalysisName_13;
  MR_Word AnalysisResults1_15;
  MR_Word FuncResults1_17;
  MR_Word Result_18;
  MR_Word FuncResults_19;
  MR_Word Var_20;
  MR_Box MR_CALL (* func_0)(MR_Box) = ((MR_Box MR_CALL (*)(MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_analysis_21, (MR_Integer) 0)), (MR_Integer) 5))));
  MR_Box conv1_AnalysisName_13;
  MR_Word AnalysisResults0_14;
  MR_Box conv2_AnalysisResults0_14;
  MR_Word FuncResults0_16;
  MR_Box conv3_FuncResults0_16;

  conv1_AnalysisName_13 = func_0(((MR_Box) (TypeClassInfo_for_analysis_21)));
  AnalysisName_13 = ((MR_String) (conv1_AnalysisName_13));
  succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&analysis_scalar_common_2[2]), ModuleResults0_11, ((MR_Box) (AnalysisName_13)), &conv2_AnalysisResults0_14);
  if (succeeded)
  {
    AnalysisResults0_14 = ((MR_Word) (conv2_AnalysisResults0_14));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    AnalysisResults1_15 = AnalysisResults0_14;
  else
    AnalysisResults1_15 = mercury__map__init_0_f_0((MR_Word) (&analysis__analysis__type_ctor_info_func_id_0), (MR_Word) (&analysis_scalar_common_1[1]));
  succeeded = mercury__map__search_3_p_0((MR_Word) (&analysis__analysis__type_ctor_info_func_id_0), (MR_Word) (&analysis_scalar_common_1[1]), AnalysisResults1_15, ((MR_Box) (FuncId_7)), &conv3_FuncResults0_16);
  if (succeeded)
  {
    FuncResults0_16 = ((MR_Word) (conv3_FuncResults0_16));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    FuncResults1_17 = FuncResults0_16;
  else
    FuncResults1_17 = (MR_Word) ((MR_Unsigned) 0U);
  {
    Result_18 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Result_18, 0) = ((MR_Box) (TypeClassInfo_for_analysis_21));
    MR_hl_field(MR_mktag(0), Result_18, 1) = CallPattern_8;
    MR_hl_field(MR_mktag(0), Result_18, 2) = AnswerPattern_9;
    MR_hl_field(MR_mktag(0), Result_18, 3) = (MR_Box) ((MR_Unsigned) (Status_10));
  }
  {
    FuncResults_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), FuncResults_19, 0) = ((MR_Box) (Result_18));
    MR_hl_field(MR_mktag(1), FuncResults_19, 1) = ((MR_Box) (FuncResults1_17));
  }
  Var_20 = mercury__map__set_3_f_0((MR_Word) (&analysis__analysis__type_ctor_info_func_id_0), (MR_Word) (&analysis_scalar_common_1[1]), AnalysisResults1_15, ((MR_Box) (FuncId_7)), ((MR_Box) (FuncResults_19)));
  *ModuleResults_12 = mercury__map__set_3_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&analysis_scalar_common_2[2]), ModuleResults0_11, ((MR_Box) (AnalysisName_13)), ((MR_Box) (Var_20)));
}

void MR_CALL 
analysis__record_dependency_7_p_0(
  MR_Word TypeClassInfo_for_analysis_46,
  MR_Word CalleeModuleName_8,
  MR_Word FuncId_9,
  MR_Box FuncInfo_10,
  MR_Box Call_11,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22)
{
  MR_bool succeeded;
  MR_Word ThisModule_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 2))));
  MR_Word MakeAnalysisReg_15;
  MR_Word IsLocal_16;
  MR_Word Var_64;

  succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ThisModule_14, CalleeModuleName_8);
  if (succeeded)
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140analysis.record_dependency\'/7", (MR_String) "dependency on self");
      return;
    }
  MakeAnalysisReg_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 3))) & (MR_Integer) 1);
  Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 4))));
  succeeded = mercury__set__contains_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_64, ((MR_Box) (CalleeModuleName_8)));
  if (succeeded)
    IsLocal_16 = (MR_Integer) 1;
  else
    IsLocal_16 = (MR_Integer) 0;
  succeeded = (MakeAnalysisReg_15 == (MR_Integer) 0);
  if (succeeded)
    succeeded = (IsLocal_16 == (MR_Integer) 1);
  if (succeeded)
  {
    MR_Word TypeClassInfo_for_call_pattern_49;
    MR_String AnalysisName_17;
    MR_Word MaybeResult_18;
    MR_Word STATE_VARIABLE_Info_25_25;
    MR_Box MR_CALL (* func_0)(MR_Box) = ((MR_Box MR_CALL (*)(MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_analysis_46, (MR_Integer) 0)), (MR_Integer) 5))));
    MR_Box conv1_AnalysisName_17;

    conv1_AnalysisName_17 = func_0(((MR_Box) (TypeClassInfo_for_analysis_46)));
    AnalysisName_17 = ((MR_String) (conv1_AnalysisName_17));
    mercury__private_builtin__superclass_from_typeclass_info_3_p_0(TypeClassInfo_for_analysis_46, (MR_Integer) 1, &TypeClassInfo_for_call_pattern_49);
    analysis__record_dependency_2_7_p_0(TypeClassInfo_for_call_pattern_49, ThisModule_14, AnalysisName_17, CalleeModuleName_8, FuncId_9, Call_11, STATE_VARIABLE_Info_0_21, &STATE_VARIABLE_Info_25_25);
    analysis__lookup_exactly_matching_result_even_from_invalid_modules_6_p_0(TypeClassInfo_for_analysis_46, STATE_VARIABLE_Info_25_25, CalleeModuleName_8, FuncId_9, FuncInfo_10, Call_11, &MaybeResult_18);
    if ((MaybeResult_18 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word TypeClassInfo_for_call_pattern_51;

      mercury__private_builtin__superclass_from_typeclass_info_3_p_0(TypeClassInfo_for_analysis_46, (MR_Integer) 1, &TypeClassInfo_for_call_pattern_51);
      analysis__record_request_6_p_0(TypeClassInfo_for_call_pattern_51, AnalysisName_17, CalleeModuleName_8, FuncId_9, Call_11, STATE_VARIABLE_Info_25_25, STATE_VARIABLE_Info_22);
    }
    else
    {
      MR_Word TypeInfo_53_53;
      MR_Word TypeInfo_55_55;
      MR_Word TypeInfo_57_57;

      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_analysis_46, (MR_Integer) 4, &TypeInfo_53_53);
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_analysis_46, (MR_Integer) 5, &TypeInfo_55_55);
      {
        TypeInfo_57_57 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_57_57, 0) = ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_result_2));
        MR_hl_field(MR_mktag(0), TypeInfo_57_57, 1) = ((MR_Box) (TypeInfo_53_53));
        MR_hl_field(MR_mktag(0), TypeInfo_57_57, 2) = ((MR_Box) (TypeInfo_55_55));
      }
      mercury__type_desc__same_type_2_p_0(TypeInfo_57_57);
      *STATE_VARIABLE_Info_22 = STATE_VARIABLE_Info_25_25;
    }
  }
  else
    *STATE_VARIABLE_Info_22 = STATE_VARIABLE_Info_0_21;
}

static MR_bool MR_CALL 
analysis__lookup_exactly_matching_result_even_from_invalid_modules_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = analysis__IntroducedFrom__pred__lookup_exactly_matching_result_even_from_invalid_modules__553__1_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)), (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

void MR_CALL 
analysis__lookup_exactly_matching_result_even_from_invalid_modules_6_p_0(
  MR_Word TypeClassInfo_for_analysis_31,
  MR_Word Info_7,
  MR_Word ModuleName_8,
  MR_Word FuncId_9,
  MR_Box FuncInfo_10,
  MR_Box Call_11,
  MR_Word * MaybeResult_12)
{
  MR_bool succeeded;
  MR_Word TypeInfo_33_33;
  MR_Word TypeInfo_35_35;
  MR_Word TypeInfo_37_37;
  MR_Word AllResultsList_14;
  MR_Word ResultList_15;
  MR_Word Var_21;

  analysis__lookup_results_1_5_p_0(TypeClassInfo_for_analysis_31, Info_7, ModuleName_8, FuncId_9, (MR_Integer) 1, &AllResultsList_14);
  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_analysis_31, (MR_Integer) 4, &TypeInfo_33_33);
  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_analysis_31, (MR_Integer) 5, &TypeInfo_35_35);
  {
    TypeInfo_37_37 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeInfo_37_37, 0) = ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_result_2));
    MR_hl_field(MR_mktag(0), TypeInfo_37_37, 1) = ((MR_Box) (TypeInfo_33_33));
    MR_hl_field(MR_mktag(0), TypeInfo_37_37, 2) = ((MR_Box) (TypeInfo_35_35));
  }
  {
    Var_21 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&analysis_scalar_common_7[0]));
    MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (analysis__lookup_exactly_matching_result_even_from_invalid_modules_6_p_0_1));
    MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (TypeClassInfo_for_analysis_31));
    MR_hl_field(MR_mktag(0), Var_21, 4) = FuncInfo_10;
    MR_hl_field(MR_mktag(0), Var_21, 5) = Call_11;
  }
  ResultList_15 = mercury__list__filter_2_f_0(TypeInfo_37_37, Var_21, AllResultsList_14);
  if ((ResultList_15 == (MR_Word) ((MR_Unsigned) 0U)))
    *MaybeResult_12 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ResultList_15, (MR_Integer) 1))));
    MR_Word Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ResultList_15, (MR_Integer) 0))));

    if ((Var_41 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeResult_12 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_42));
      }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140analysis.lookup_exactly_matching_result_even_from_invalid_modules\'/6", (MR_String) "zero or one exactly matching results expected");
        return;
      }
  }
}

void MR_CALL 
analysis__lookup_results_1_5_p_0(
  MR_Word TypeClassInfo_for_analysis_62,
  MR_Word Info_6,
  MR_Word ModuleName_7,
  MR_Word FuncId_8,
  MR_Word AllowInvalidModules_9,
  MR_Word * ResultList_10)
{
  MR_bool succeeded;
  MR_Word Debug_82;
  MR_Word TypeCtorInfo_66_66;
  MR_Word TypeCtorInfo_67_67;
  MR_Word Var_26;
  MR_Word Var_27;
  MR_Word Var_77;
  MR_Box conv0_Var_77;

{
#define MR_PROC_LABEL analysis__lookup_results_1_5_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL analysis__lookup_results_1_5_p_0

	MR_Word X;

		{
X = analysis__mutable_variable_debug_analysis;


		;}
#undef MR_PROC_LABEL
	 Debug_82  = X;
}
{
#define MR_PROC_LABEL analysis__lookup_results_1_5_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  switch (Debug_82) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      analysis__IntroducedFrom__pred__lookup_results_1__676__1_4_p_0(ModuleName_7, FuncId_8);
      break;
  }
  succeeded = (AllowInvalidModules_9 == (MR_Integer) 0);
  if (succeeded)
  {
    Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 6))));
    Var_27 = (MR_Integer) 0;
    TypeCtorInfo_66_66 = (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0);
    TypeCtorInfo_67_67 = (MR_Word) (&analysis__analysis__type_ctor_info_analysis_status_0);
    succeeded = mercury__map__search_3_p_0(TypeCtorInfo_66_66, TypeCtorInfo_67_67, Var_26, ((MR_Box) (ModuleName_7)), &conv0_Var_77);
    if (succeeded)
    {
      Var_77 = ((MR_Word) (conv0_Var_77));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      succeeded = (Var_27 == Var_77);
  }
  if (succeeded)
    *ResultList_10 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 7))));

    analysis__lookup_results_2_4_p_0(TypeClassInfo_for_analysis_62, Var_28, ModuleName_7, FuncId_8, ResultList_10);
    analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_54_95_95_91_51_93_95_48_3_p_0(TypeClassInfo_for_analysis_62, *ResultList_10);
  }
}

static void MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_54_95_95_91_51_93_95_48_3_p_0(
  MR_Word Var_11,
  MR_Word Var_12)
{
  MR_Word Debug_6;

{
#define MR_PROC_LABEL analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_54_95_95_91_51_93_95_48_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_54_95_95_91_51_93_95_48_3_p_0

	MR_Word X;

		{
X = analysis__mutable_variable_debug_analysis;


		;}
#undef MR_PROC_LABEL
	 Debug_6  = X;
}
{
#define MR_PROC_LABEL analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_54_95_95_91_51_93_95_48_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&analysis__mutable_variable_debug_analysis_lock,
                    "analysis__mutable_variable_debug_analysis_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  switch (Debug_6) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      analysis__IntroducedFrom__pred__lookup_results_1__694__1_4_p_0(Var_11, Var_12);
      break;
  }
}

static void MR_CALL 
analysis__IntroducedFrom__pred__lookup_results_1__694__1_4_p_0(
  MR_Word TypeClassInfo_for_analysis_62,
  MR_Word ResultList_10)
{
  MR_Word TypeInfo_70_70;
  MR_Word TypeInfo_72_72;
  MR_Word TypeInfo_74_74;
  MR_Word TypeInfo_76_76;

  mercury__io__write_string_3_p_0((MR_String) "% Found these results: ");
  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_analysis_62, (MR_Integer) 4, &TypeInfo_70_70);
  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_analysis_62, (MR_Integer) 5, &TypeInfo_72_72);
  {
    TypeInfo_74_74 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeInfo_74_74, 0) = ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_result_2));
    MR_hl_field(MR_mktag(0), TypeInfo_74_74, 1) = ((MR_Box) (TypeInfo_70_70));
    MR_hl_field(MR_mktag(0), TypeInfo_74_74, 2) = ((MR_Box) (TypeInfo_72_72));
  }
  {
    TypeInfo_76_76 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeInfo_76_76, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
    MR_hl_field(MR_mktag(0), TypeInfo_76_76, 1) = ((MR_Box) (TypeInfo_74_74));
  }
  mercury__io__print_3_p_0(TypeInfo_76_76, ((MR_Box) (ResultList_10)));
  mercury__io__nl_2_p_0();
}

static void MR_CALL 
analysis__IntroducedFrom__pred__lookup_results_1__676__1_4_p_0(
  MR_Word ModuleName_7,
  MR_Word FuncId_8)
{
  mercury__io__write_string_3_p_0((MR_String) "% Looking up analysis results for ");
  mercury__io__write_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_7)));
  mercury__io__write_string_3_p_0((MR_String) ".");
  mercury__io__write_3_p_0((MR_Word) (&analysis__analysis__type_ctor_info_func_id_0), ((MR_Box) (FuncId_8)));
  mercury__io__nl_2_p_0();
}

static MR_Box MR_CALL 
analysis__lookup_results_2_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv5_LambdaHeadVar__2_25;

  conv5_LambdaHeadVar__2_25 = analysis__IntroducedFrom__func__lookup_results_2__716__1_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv5_LambdaHeadVar__2_25));
  return wrapper_arg_2;
}

void MR_CALL 
analysis__lookup_results_2_4_p_0(
  MR_Word TypeClassInfo_for_analysis_29,
  MR_Word Map_5,
  MR_Word ModuleName_6,
  MR_Word FuncId_7,
  MR_Word * ResultList_8)
{
  MR_bool succeeded;
  MR_String AnalysisName_9;
  MR_Box MR_CALL (* func_0)(MR_Box) = ((MR_Box MR_CALL (*)(MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_analysis_29, (MR_Integer) 0)), (MR_Integer) 5))));
  MR_Box conv1_AnalysisName_9;
  MR_Word Results_16;
  MR_Word TypeCtorInfo_32_32;
  MR_Word TypeInfo_33_33;
  MR_Word TypeCtorInfo_34_34;
  MR_Word TypeInfo_35_35;
  MR_Word ModuleResults_14;
  MR_Word AnalysisResults_15;
  MR_Box conv2_ModuleResults_14;
  MR_Box conv3_AnalysisResults_15;
  MR_Box conv4_Results_16;

  conv1_AnalysisName_9 = func_0(((MR_Box) (TypeClassInfo_for_analysis_29)));
  AnalysisName_9 = ((MR_String) (conv1_AnalysisName_9));
  succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&analysis_scalar_common_2[3]), Map_5, ((MR_Box) (ModuleName_6)), &conv2_ModuleResults_14);
  if (succeeded)
  {
    ModuleResults_14 = ((MR_Word) (conv2_ModuleResults_14));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    TypeCtorInfo_32_32 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0);
    TypeInfo_33_33 = (MR_Word) (&analysis_scalar_common_2[2]);
    succeeded = mercury__map__search_3_p_0(TypeCtorInfo_32_32, TypeInfo_33_33, ModuleResults_14, ((MR_Box) (AnalysisName_9)), &conv3_AnalysisResults_15);
    if (succeeded)
    {
      AnalysisResults_15 = ((MR_Word) (conv3_AnalysisResults_15));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      TypeCtorInfo_34_34 = (MR_Word) (&analysis__analysis__type_ctor_info_func_id_0);
      TypeInfo_35_35 = (MR_Word) (&analysis_scalar_common_1[1]);
      succeeded = mercury__map__search_3_p_0(TypeCtorInfo_34_34, TypeInfo_35_35, AnalysisResults_15, ((MR_Box) (FuncId_7)), &conv4_Results_16);
      if (succeeded)
      {
        Results_16 = ((MR_Word) (conv4_Results_16));
        succeeded = MR_TRUE;
      }
    }
  }
  if (succeeded)
  {
    MR_Word TypeInfo_38_38;
    MR_Word TypeInfo_40_40;
    MR_Word TypeInfo_42_42;
    MR_Word Var_23;
    MR_Word conv6_ResultList_8;

    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_analysis_29, (MR_Integer) 4, &TypeInfo_38_38);
    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_analysis_29, (MR_Integer) 5, &TypeInfo_40_40);
    {
      TypeInfo_42_42 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_42_42, 0) = ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_result_2));
      MR_hl_field(MR_mktag(0), TypeInfo_42_42, 1) = ((MR_Box) (TypeInfo_38_38));
      MR_hl_field(MR_mktag(0), TypeInfo_42_42, 2) = ((MR_Box) (TypeInfo_40_40));
    }
    {
      Var_23 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (&analysis_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (analysis__lookup_results_2_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_23, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_23, 3) = ((MR_Box) (TypeClassInfo_for_analysis_29));
    }
    conv6_ResultList_8 = mercury__list__map_2_f_0((MR_Word) (&analysis__analysis__type_ctor_info_some_analysis_result_0), TypeInfo_42_42, (MR_Word) (Var_23), Results_16);
    *ResultList_8 = (MR_Word) (conv6_ResultList_8);
  }
  else
    *ResultList_8 = (MR_Word) ((MR_Unsigned) 0U);
}

void MR_CALL 
analysis__record_dependency_2_7_p_0(
  MR_Word TypeClassInfo_for_call_pattern_58,
  MR_Word CallerModuleName_8,
  MR_String AnalysisName_9,
  MR_Word CalleeModuleName_10,
  MR_Word FuncId_11,
  MR_Box Call_12,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23)
{
  MR_bool succeeded;
  MR_Word Analyses1_15;
  MR_Word Funcs1_17;
  MR_Word FuncArcs1_19;
  MR_Word Dep_20;
  MR_Word Analyses0_14;
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_22, (MR_Integer) 10))));
  MR_Box conv0_Analyses0_14;
  MR_Word Funcs0_16;
  MR_Box conv1_Funcs0_16;
  MR_Word FuncArcs0_18;
  MR_Box conv2_FuncArcs0_18;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&analysis_scalar_common_2[5]), Var_24, ((MR_Box) (CalleeModuleName_10)), &conv0_Analyses0_14);
  if (succeeded)
  {
    Analyses0_14 = ((MR_Word) (conv0_Analyses0_14));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    Analyses1_15 = Analyses0_14;
  else
    Analyses1_15 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&analysis_scalar_common_2[4]));
  succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&analysis_scalar_common_2[4]), Analyses1_15, ((MR_Box) (AnalysisName_9)), &conv1_Funcs0_16);
  if (succeeded)
  {
    Funcs0_16 = ((MR_Word) (conv1_Funcs0_16));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    Funcs1_17 = Funcs0_16;
  else
    Funcs1_17 = mercury__map__init_0_f_0((MR_Word) (&analysis__analysis__type_ctor_info_func_id_0), (MR_Word) (&analysis_scalar_common_1[2]));
  succeeded = mercury__map__search_3_p_0((MR_Word) (&analysis__analysis__type_ctor_info_func_id_0), (MR_Word) (&analysis_scalar_common_1[2]), Funcs1_17, ((MR_Box) (FuncId_11)), &conv2_FuncArcs0_18);
  if (succeeded)
  {
    FuncArcs0_18 = ((MR_Word) (conv2_FuncArcs0_18));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    FuncArcs1_19 = FuncArcs0_18;
  else
    FuncArcs1_19 = (MR_Word) ((MR_Unsigned) 0U);
  {
    Dep_20 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Dep_20, 0) = ((MR_Box) (TypeClassInfo_for_call_pattern_58));
    MR_hl_field(MR_mktag(0), Dep_20, 1) = Call_12;
    MR_hl_field(MR_mktag(0), Dep_20, 2) = ((MR_Box) (CallerModuleName_8));
  }
  succeeded = mercury__list__member_2_p_0((MR_Word) (&analysis__analysis__type_ctor_info_imdg_arc_0), ((MR_Box) (Dep_20)), FuncArcs1_19);
  if (succeeded)
    *STATE_VARIABLE_Info_23 = STATE_VARIABLE_Info_0_22;
  else
  {
    MR_Word FuncArcs_21;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word TypeClassInfo_for_compiler_78;
    MR_Box Var_48;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_56;

    {
      FuncArcs_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), FuncArcs_21, 0) = ((MR_Box) (Dep_20));
      MR_hl_field(MR_mktag(1), FuncArcs_21, 1) = ((MR_Box) (FuncArcs1_19));
    }
    Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_22, (MR_Integer) 10))));
    Var_29 = mercury__map__set_3_f_0((MR_Word) (&analysis__analysis__type_ctor_info_func_id_0), (MR_Word) (&analysis_scalar_common_1[2]), Funcs1_17, ((MR_Box) (FuncId_11)), ((MR_Box) (FuncArcs_21)));
    Var_28 = mercury__map__set_3_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&analysis_scalar_common_2[4]), Analyses1_15, ((MR_Box) (AnalysisName_9)), ((MR_Box) (Var_29)));
    Var_26 = mercury__map__set_3_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&analysis_scalar_common_2[5]), Var_27, ((MR_Box) (CalleeModuleName_10)), ((MR_Box) (Var_28)));
    TypeClassInfo_for_compiler_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_22, (MR_Integer) 0))));
    Var_48 = (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_22, (MR_Integer) 1));
    Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_22, (MR_Integer) 2))));
    Var_50 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_22, (MR_Integer) 3))) & (MR_Integer) 1);
    Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_22, (MR_Integer) 4))));
    Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_22, (MR_Integer) 5))));
    Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_22, (MR_Integer) 6))));
    Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_22, (MR_Integer) 7))));
    Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_22, (MR_Integer) 8))));
    Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_22, (MR_Integer) 9))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_23 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (TypeClassInfo_for_compiler_78));
      MR_hl_field(MR_mktag(0), base, 1) = Var_48;
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(0), base, 3) = (MR_Box) ((MR_Unsigned) (Var_50));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_52));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_53));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_55));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_56));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_26));
    }
  }
}

void MR_CALL 
analysis__record_request_6_p_0(
  MR_Word TypeClassInfo_for_call_pattern_38,
  MR_String AnalysisName_7,
  MR_Word ModuleName_8,
  MR_Word FuncId_9,
  MR_Box CallPattern_10,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16)
{
  MR_bool succeeded;
  MR_Word ThisModule_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_15, (MR_Integer) 2))));
  MR_Word MakeAnalysisReg_13;
  MR_Word IsLocal_14;
  MR_Word Var_45;

  succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ThisModule_12, ModuleName_8);
  if (succeeded)
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140analysis.record_request\'/6", (MR_String) "request on self");
      return;
    }
  MakeAnalysisReg_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_15, (MR_Integer) 3))) & (MR_Integer) 1);
  Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_15, (MR_Integer) 4))));
  succeeded = mercury__set__contains_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_45, ((MR_Box) (ModuleName_8)));
  if (succeeded)
    IsLocal_14 = (MR_Integer) 1;
  else
    IsLocal_14 = (MR_Integer) 0;
  succeeded = (MakeAnalysisReg_13 == (MR_Integer) 0);
  if (succeeded)
    succeeded = (IsLocal_14 == (MR_Integer) 1);
  if (succeeded)
    analysis__record_request_2_7_p_0(TypeClassInfo_for_call_pattern_38, ThisModule_12, AnalysisName_7, ModuleName_8, FuncId_9, CallPattern_10, STATE_VARIABLE_Info_0_15, STATE_VARIABLE_Info_16);
  else
    *STATE_VARIABLE_Info_16 = STATE_VARIABLE_Info_0_15;
}

void MR_CALL 
analysis__record_request_2_7_p_0(
  MR_Word TypeClassInfo_for_call_pattern_58,
  MR_Word CallerModule_8,
  MR_String AnalysisName_9,
  MR_Word ModuleName_10,
  MR_Word FuncId_11,
  MR_Box CallPattern_12,
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24)
{
  MR_bool succeeded;
  MR_Word RequestMap_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 5))));
  MR_Word ModuleResults1_16;
  MR_Word AnalysisResults1_18;
  MR_Word FuncResults1_20;
  MR_Word Request_21;
  MR_Word FuncResults_22;
  MR_Word Var_26;
  MR_Word Var_27;
  MR_Word Var_28;
  MR_Word Var_29;
  MR_Word ModuleResults0_15;
  MR_Box conv0_ModuleResults0_15;
  MR_Word AnalysisResults0_17;
  MR_Box conv1_AnalysisResults0_17;
  MR_Word FuncResults0_19;
  MR_Box conv2_FuncResults0_19;
  MR_Word TypeClassInfo_for_compiler_77;
  MR_Box Var_48;
  MR_Word Var_49;
  MR_Word Var_50;
  MR_Word Var_51;
  MR_Word Var_53;
  MR_Word Var_54;
  MR_Word Var_55;
  MR_Word Var_56;
  MR_Word Var_57;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&analysis_scalar_common_2[1]), RequestMap_14, ((MR_Box) (ModuleName_10)), &conv0_ModuleResults0_15);
  if (succeeded)
  {
    ModuleResults0_15 = ((MR_Word) (conv0_ModuleResults0_15));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    ModuleResults1_16 = ModuleResults0_15;
  else
    ModuleResults1_16 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&analysis_scalar_common_2[0]));
  succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&analysis_scalar_common_2[0]), ModuleResults1_16, ((MR_Box) (AnalysisName_9)), &conv1_AnalysisResults0_17);
  if (succeeded)
  {
    AnalysisResults0_17 = ((MR_Word) (conv1_AnalysisResults0_17));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    AnalysisResults1_18 = AnalysisResults0_17;
  else
    AnalysisResults1_18 = mercury__map__init_0_f_0((MR_Word) (&analysis__analysis__type_ctor_info_func_id_0), (MR_Word) (&analysis_scalar_common_1[0]));
  succeeded = mercury__map__search_3_p_0((MR_Word) (&analysis__analysis__type_ctor_info_func_id_0), (MR_Word) (&analysis_scalar_common_1[0]), AnalysisResults1_18, ((MR_Box) (FuncId_11)), &conv2_FuncResults0_19);
  if (succeeded)
  {
    FuncResults0_19 = ((MR_Word) (conv2_FuncResults0_19));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    FuncResults1_20 = FuncResults0_19;
  else
    FuncResults1_20 = (MR_Word) ((MR_Unsigned) 0U);
  {
    Request_21 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Request_21, 0) = ((MR_Box) (TypeClassInfo_for_call_pattern_58));
    MR_hl_field(MR_mktag(0), Request_21, 1) = CallPattern_12;
    MR_hl_field(MR_mktag(0), Request_21, 2) = ((MR_Box) (CallerModule_8));
  }
  {
    FuncResults_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), FuncResults_22, 0) = ((MR_Box) (Request_21));
    MR_hl_field(MR_mktag(1), FuncResults_22, 1) = ((MR_Box) (FuncResults1_20));
  }
  Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 5))));
  Var_29 = mercury__map__set_3_f_0((MR_Word) (&analysis__analysis__type_ctor_info_func_id_0), (MR_Word) (&analysis_scalar_common_1[0]), AnalysisResults1_18, ((MR_Box) (FuncId_11)), ((MR_Box) (FuncResults_22)));
  Var_28 = mercury__map__set_3_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&analysis_scalar_common_2[0]), ModuleResults1_16, ((MR_Box) (AnalysisName_9)), ((MR_Box) (Var_29)));
  Var_26 = mercury__map__set_3_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&analysis_scalar_common_2[1]), Var_27, ((MR_Box) (ModuleName_10)), ((MR_Box) (Var_28)));
  TypeClassInfo_for_compiler_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 0))));
  Var_48 = (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 1));
  Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 2))));
  Var_50 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 3))) & (MR_Integer) 1);
  Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 4))));
  Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 6))));
  Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 7))));
  Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 8))));
  Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 9))));
  Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_23, (MR_Integer) 10))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_24 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (TypeClassInfo_for_compiler_77));
    MR_hl_field(MR_mktag(0), base, 1) = Var_48;
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_49));
    MR_hl_field(MR_mktag(0), base, 3) = (MR_Box) ((MR_Unsigned) (Var_50));
    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_51));
    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_26));
    MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_53));
    MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_54));
    MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_55));
    MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_56));
    MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_57));
  }
}

MR_Word MR_CALL 
analysis__init_analysis_info_3_f_0(
  MR_Word TypeClassInfo_for_compiler_17,
  MR_Box Compiler_5,
  MR_Word ThisModuleName_6,
  MR_Word MakeAnalysisRegBool_7)
{
  MR_Word Info_8;
  MR_Word MakeAnalysisReg_9;
  MR_Word Var_10;
  MR_Word Var_11;
  MR_Word Var_12;
  MR_Word Var_13;
  MR_Word Var_14;
  MR_Word Var_15;
  MR_Word Var_16;

  switch (MakeAnalysisRegBool_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      MakeAnalysisReg_9 = (MR_Integer) 1;
      break;
    case (MR_Integer) 1:
      MakeAnalysisReg_9 = (MR_Integer) 0;
      break;
  }
  Var_10 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
  Var_11 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&analysis_scalar_common_2[1]));
  Var_12 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&analysis__analysis__type_ctor_info_analysis_status_0));
  Var_13 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&analysis_scalar_common_2[3]));
  Var_14 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&analysis_scalar_common_2[2]));
  Var_15 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&analysis_scalar_common_2[5]));
  Var_16 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&analysis_scalar_common_2[5]));
  {
    Info_8 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Info_8, 0) = ((MR_Box) (TypeClassInfo_for_compiler_17));
    MR_hl_field(MR_mktag(0), Info_8, 1) = Compiler_5;
    MR_hl_field(MR_mktag(0), Info_8, 2) = ((MR_Box) (ThisModuleName_6));
    MR_hl_field(MR_mktag(0), Info_8, 3) = (MR_Box) ((MR_Unsigned) (MakeAnalysisReg_9));
    MR_hl_field(MR_mktag(0), Info_8, 4) = ((MR_Box) (Var_10));
    MR_hl_field(MR_mktag(0), Info_8, 5) = ((MR_Box) (Var_11));
    MR_hl_field(MR_mktag(0), Info_8, 6) = ((MR_Box) (Var_12));
    MR_hl_field(MR_mktag(0), Info_8, 7) = ((MR_Box) (Var_13));
    MR_hl_field(MR_mktag(0), Info_8, 8) = ((MR_Box) (Var_14));
    MR_hl_field(MR_mktag(0), Info_8, 9) = ((MR_Box) (Var_15));
    MR_hl_field(MR_mktag(0), Info_8, 10) = ((MR_Box) (Var_16));
  }
  return Info_8;
}

static MR_bool MR_CALL 
analysis____Unify____analysis_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = analysis____Unify____analysis_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
analysis____Compare____analysis_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  analysis____Compare____analysis_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
analysis____Unify____analysis_map_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = analysis____Unify____analysis_map_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
analysis____Compare____analysis_map_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  analysis____Compare____analysis_map_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
analysis____Unify____analysis_name_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = analysis____Unify____analysis_name_0_0(((MR_String) (wrapper_arg_1)), ((MR_String) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
analysis____Compare____analysis_name_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  analysis____Compare____analysis_name_0_0(&conv0_HeadVar__1_1, ((MR_String) (wrapper_arg_2)), ((MR_String) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
analysis____Unify____analysis_request_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = analysis____Unify____analysis_request_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
analysis____Compare____analysis_request_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  analysis____Compare____analysis_request_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
analysis____Unify____analysis_result_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_bool succeeded;

  succeeded = analysis____Unify____analysis_result_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  return succeeded;
}

static void MR_CALL 
analysis____Compare____analysis_result_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5)
{
  MR_Word conv0_HeadVar__1_1;

  analysis____Compare____analysis_result_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)));
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
analysis____Unify____analysis_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = analysis____Unify____analysis_status_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
analysis____Compare____analysis_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  analysis____Compare____analysis_status_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
analysis____Unify____analysis_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = analysis____Unify____analysis_type_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
analysis____Compare____analysis_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  analysis____Compare____analysis_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
analysis____Unify____any_call_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = analysis____Unify____any_call_0_0();
  return succeeded;
}

static void MR_CALL 
analysis____Compare____any_call_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  analysis____Compare____any_call_0_0(&conv0_HeadVar__1_1);
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
analysis____Unify____fixpoint_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = analysis____Unify____fixpoint_type_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
analysis____Compare____fixpoint_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  analysis____Compare____fixpoint_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
analysis____Unify____func_analysis_map_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = analysis____Unify____func_analysis_map_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
analysis____Compare____func_analysis_map_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  analysis____Compare____func_analysis_map_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
analysis____Unify____func_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = analysis____Unify____func_id_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
analysis____Compare____func_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  analysis____Compare____func_id_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
analysis____Unify____imdg_arc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = analysis____Unify____imdg_arc_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
analysis____Compare____imdg_arc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  analysis____Compare____imdg_arc_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
analysis____Unify____make_analysis_registry_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = analysis____Unify____make_analysis_registry_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
analysis____Compare____make_analysis_registry_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  analysis____Compare____make_analysis_registry_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
analysis____Unify____module_analysis_map_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = analysis____Unify____module_analysis_map_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
analysis____Compare____module_analysis_map_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  analysis____Compare____module_analysis_map_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
analysis____Unify____no_func_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = analysis____Unify____no_func_info_0_0();
  return succeeded;
}

static void MR_CALL 
analysis____Compare____no_func_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  analysis____Compare____no_func_info_0_0(&conv0_HeadVar__1_1);
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
analysis____Unify____some_analysis_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = analysis____Unify____some_analysis_result_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
analysis____Compare____some_analysis_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  analysis____Compare____some_analysis_result_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_Box MR_CALL 
analysis__ClassMethod_for_analysis__to_term____analysis__any_call__arity0______analysis__to_term_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_Term_3;

  conv0_Term_3 = analysis__ClassMethod_for_analysis__to_term____analysis__any_call__arity0______analysis__to_term_1_1_f_0();
  wrapper_arg_2 = ((MR_Box) (conv0_Term_3));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
analysis__ClassMethod_for_analysis__to_term____analysis__any_call__arity0______analysis__from_term_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = analysis__ClassMethod_for_analysis__to_term____analysis__any_call__arity0______analysis__from_term_2_2_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__any_call__arity0______analysis__more_precise_than_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__any_call__arity0______analysis__more_precise_than_3_3_p_0();
  return succeeded;
}

static MR_bool MR_CALL 
analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__any_call__arity0______analysis__equivalent_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__any_call__arity0______analysis__equivalent_3_3_p_0();
  return succeeded;
}

void mercury__analysis__init(void)
{
}

void mercury__analysis__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&analysis__analysis__type_ctor_info_analysis_info_0);
	MR_register_type_ctor_info(&analysis__analysis__type_ctor_info_analysis_map_1);
	MR_register_type_ctor_info(&analysis__analysis__type_ctor_info_analysis_name_0);
	MR_register_type_ctor_info(&analysis__analysis__type_ctor_info_analysis_request_0);
	MR_register_type_ctor_info(&analysis__analysis__type_ctor_info_analysis_result_2);
	MR_register_type_ctor_info(&analysis__analysis__type_ctor_info_analysis_status_0);
	MR_register_type_ctor_info(&analysis__analysis__type_ctor_info_analysis_type_0);
	MR_register_type_ctor_info(&analysis__analysis__type_ctor_info_any_call_0);
	MR_register_type_ctor_info(&analysis__analysis__type_ctor_info_fixpoint_type_0);
	MR_register_type_ctor_info(&analysis__analysis__type_ctor_info_func_analysis_map_1);
	MR_register_type_ctor_info(&analysis__analysis__type_ctor_info_func_id_0);
	MR_register_type_ctor_info(&analysis__analysis__type_ctor_info_imdg_arc_0);
	MR_register_type_ctor_info(&analysis__analysis__type_ctor_info_make_analysis_registry_0);
	MR_register_type_ctor_info(&analysis__analysis__type_ctor_info_module_analysis_map_1);
	MR_register_type_ctor_info(&analysis__analysis__type_ctor_info_no_func_info_0);
	MR_register_type_ctor_info(&analysis__analysis__type_ctor_info_some_analysis_result_0);
}

void mercury__analysis__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

void mercury__analysis__required_init(void)
{
	analysis__user_init_pred_165_0();
}

// Ensure everything is compiled with the same grade.
const char *mercury__analysis__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module analysis.
