/*
** Automatically generated from `analysis.m'
** by the Mercury compiler,
** version rotd-2017-07-18
** configured for x86_64-apple-darwin13.4.0.
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


/* :- module analysis. */
/* :- implementation. */

/*
INIT mercury__analysis__init
REQUIRED_INIT mercury__analysis__required_init
ENDINIT
*/

#include "analysis.mih"
#include "analysis.mh"


#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "analysis.file.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
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
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
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
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



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

static const MR_DuFunctorDesc analysis__analysis__du_functor_desc_analysis_result_2_0;

static const MR_DuFunctorDescPtr analysis__analysis__du_stag_ordered_analysis_result_2_0[1];

static const MR_DuPtagLayout analysis__analysis__du_ptag_ordered_analysis_result_2[1];

static const MR_DuFunctorDescPtr analysis__analysis__du_name_ordered_analysis_result_2[1];

static const MR_Integer analysis__analysis__functor_number_map_analysis_result_2[1];

static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_analysis_status_0_0;

static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_analysis_status_0_1;

static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_analysis_status_0_2;

static const MR_EnumFunctorDescPtr analysis__analysis__enum_value_ordered_analysis_status_0[3];

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

static const MR_EnumFunctorDescPtr analysis__analysis__enum_value_ordered_any_call_0[1];

static const MR_EnumFunctorDescPtr analysis__analysis__enum_name_ordered_any_call_0[1];

static const MR_Integer analysis__analysis__functor_number_map_any_call_0[1];

static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_fixpoint_type_0_0;

static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_fixpoint_type_0_1;

static const MR_EnumFunctorDescPtr analysis__analysis__enum_value_ordered_fixpoint_type_0[2];

static const MR_EnumFunctorDescPtr analysis__analysis__enum_name_ordered_fixpoint_type_0[2];

static const MR_Integer analysis__analysis__functor_number_map_fixpoint_type_0[2];

static const MR_PseudoTypeInfo analysis__analysis__field_types_func_id_0_0[4];

static const MR_ConstString analysis__analysis__field_names_func_id_0_0[4];

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

static const MR_EnumFunctorDescPtr analysis__analysis__enum_value_ordered_make_analysis_registry_0[2];

static const MR_EnumFunctorDescPtr analysis__analysis__enum_name_ordered_make_analysis_registry_0[2];

static const MR_Integer analysis__analysis__functor_number_map_make_analysis_registry_0[2];

static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_no_func_info_0_0;

static const MR_EnumFunctorDescPtr analysis__analysis__enum_value_ordered_no_func_info_0[1];

static const MR_EnumFunctorDescPtr analysis__analysis__enum_name_ordered_no_func_info_0[1];

static const MR_Integer analysis__analysis__functor_number_map_no_func_info_0[1];

static const MR_PseudoTypeInfo analysis__analysis__field_types_some_analysis_result_0_0[3];

static const MR_ConstString analysis__analysis__field_names_some_analysis_result_0_0[3];

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
analysis____Unify____analysis_info_0_0_10001(
  MR_Box analysis__wrapper_arg_1,
  MR_Box analysis__wrapper_arg_2);

static void MR_CALL 
analysis____Compare____analysis_info_0_0_10001(
  MR_Box * analysis__wrapper_arg_1,
  MR_Box analysis__wrapper_arg_2,
  MR_Box analysis__wrapper_arg_3);

static MR_bool MR_CALL 
analysis____Unify____analysis_map_1_0_10001(
  MR_Box analysis__wrapper_arg_1,
  MR_Box analysis__wrapper_arg_2,
  MR_Box analysis__wrapper_arg_3);

static void MR_CALL 
analysis____Compare____analysis_map_1_0_10001(
  MR_Box analysis__wrapper_arg_1,
  MR_Box * analysis__wrapper_arg_2,
  MR_Box analysis__wrapper_arg_3,
  MR_Box analysis__wrapper_arg_4);

static MR_bool MR_CALL 
analysis____Unify____analysis_name_0_0_10001(
  MR_Box analysis__wrapper_arg_1,
  MR_Box analysis__wrapper_arg_2);

static void MR_CALL 
analysis____Compare____analysis_name_0_0_10001(
  MR_Box * analysis__wrapper_arg_1,
  MR_Box analysis__wrapper_arg_2,
  MR_Box analysis__wrapper_arg_3);

static MR_bool MR_CALL 
analysis____Unify____analysis_request_0_0_10001(
  MR_Box analysis__wrapper_arg_1,
  MR_Box analysis__wrapper_arg_2);

static void MR_CALL 
analysis____Compare____analysis_request_0_0_10001(
  MR_Box * analysis__wrapper_arg_1,
  MR_Box analysis__wrapper_arg_2,
  MR_Box analysis__wrapper_arg_3);

static MR_bool MR_CALL 
analysis____Unify____analysis_result_2_0_10001(
  MR_Box analysis__wrapper_arg_1,
  MR_Box analysis__wrapper_arg_2,
  MR_Box analysis__wrapper_arg_3,
  MR_Box analysis__wrapper_arg_4);

static void MR_CALL 
analysis____Compare____analysis_result_2_0_10001(
  MR_Box analysis__wrapper_arg_1,
  MR_Box analysis__wrapper_arg_2,
  MR_Box * analysis__wrapper_arg_3,
  MR_Box analysis__wrapper_arg_4,
  MR_Box analysis__wrapper_arg_5);

static MR_bool MR_CALL 
analysis____Unify____analysis_status_0_0_10001(
  MR_Box analysis__wrapper_arg_1,
  MR_Box analysis__wrapper_arg_2);

static void MR_CALL 
analysis____Compare____analysis_status_0_0_10001(
  MR_Box * analysis__wrapper_arg_1,
  MR_Box analysis__wrapper_arg_2,
  MR_Box analysis__wrapper_arg_3);

static MR_bool MR_CALL 
analysis____Unify____analysis_type_0_0_10001(
  MR_Box analysis__wrapper_arg_1,
  MR_Box analysis__wrapper_arg_2);

static void MR_CALL 
analysis____Compare____analysis_type_0_0_10001(
  MR_Box * analysis__wrapper_arg_1,
  MR_Box analysis__wrapper_arg_2,
  MR_Box analysis__wrapper_arg_3);

static MR_bool MR_CALL 
analysis____Unify____any_call_0_0_10001(
  MR_Box analysis__wrapper_arg_1,
  MR_Box analysis__wrapper_arg_2);

static void MR_CALL 
analysis____Compare____any_call_0_0_10001(
  MR_Box * analysis__wrapper_arg_1,
  MR_Box analysis__wrapper_arg_2,
  MR_Box analysis__wrapper_arg_3);

static MR_bool MR_CALL 
analysis____Unify____fixpoint_type_0_0_10001(
  MR_Box analysis__wrapper_arg_1,
  MR_Box analysis__wrapper_arg_2);

static void MR_CALL 
analysis____Compare____fixpoint_type_0_0_10001(
  MR_Box * analysis__wrapper_arg_1,
  MR_Box analysis__wrapper_arg_2,
  MR_Box analysis__wrapper_arg_3);

static MR_bool MR_CALL 
analysis____Unify____func_analysis_map_1_0_10001(
  MR_Box analysis__wrapper_arg_1,
  MR_Box analysis__wrapper_arg_2,
  MR_Box analysis__wrapper_arg_3);

static void MR_CALL 
analysis____Compare____func_analysis_map_1_0_10001(
  MR_Box analysis__wrapper_arg_1,
  MR_Box * analysis__wrapper_arg_2,
  MR_Box analysis__wrapper_arg_3,
  MR_Box analysis__wrapper_arg_4);

static MR_bool MR_CALL 
analysis____Unify____func_id_0_0_10001(
  MR_Box analysis__wrapper_arg_1,
  MR_Box analysis__wrapper_arg_2);

static void MR_CALL 
analysis____Compare____func_id_0_0_10001(
  MR_Box * analysis__wrapper_arg_1,
  MR_Box analysis__wrapper_arg_2,
  MR_Box analysis__wrapper_arg_3);

static MR_bool MR_CALL 
analysis____Unify____imdg_arc_0_0_10001(
  MR_Box analysis__wrapper_arg_1,
  MR_Box analysis__wrapper_arg_2);

static void MR_CALL 
analysis____Compare____imdg_arc_0_0_10001(
  MR_Box * analysis__wrapper_arg_1,
  MR_Box analysis__wrapper_arg_2,
  MR_Box analysis__wrapper_arg_3);

static MR_bool MR_CALL 
analysis____Unify____make_analysis_registry_0_0_10001(
  MR_Box analysis__wrapper_arg_1,
  MR_Box analysis__wrapper_arg_2);

static void MR_CALL 
analysis____Compare____make_analysis_registry_0_0_10001(
  MR_Box * analysis__wrapper_arg_1,
  MR_Box analysis__wrapper_arg_2,
  MR_Box analysis__wrapper_arg_3);

static MR_bool MR_CALL 
analysis____Unify____module_analysis_map_1_0_10001(
  MR_Box analysis__wrapper_arg_1,
  MR_Box analysis__wrapper_arg_2,
  MR_Box analysis__wrapper_arg_3);

static void MR_CALL 
analysis____Compare____module_analysis_map_1_0_10001(
  MR_Box analysis__wrapper_arg_1,
  MR_Box * analysis__wrapper_arg_2,
  MR_Box analysis__wrapper_arg_3,
  MR_Box analysis__wrapper_arg_4);

static MR_bool MR_CALL 
analysis____Unify____no_func_info_0_0_10001(
  MR_Box analysis__wrapper_arg_1,
  MR_Box analysis__wrapper_arg_2);

static void MR_CALL 
analysis____Compare____no_func_info_0_0_10001(
  MR_Box * analysis__wrapper_arg_1,
  MR_Box analysis__wrapper_arg_2,
  MR_Box analysis__wrapper_arg_3);

static MR_bool MR_CALL 
analysis____Unify____some_analysis_result_0_0_10001(
  MR_Box analysis__wrapper_arg_1,
  MR_Box analysis__wrapper_arg_2);

static void MR_CALL 
analysis____Compare____some_analysis_result_0_0_10001(
  MR_Box * analysis__wrapper_arg_1,
  MR_Box analysis__wrapper_arg_2,
  MR_Box analysis__wrapper_arg_3);

static MR_Box MR_CALL 
analysis__ClassMethod_for_analysis__to_term____analysis__any_call__arity0______analysis__to_term_1_1_f_0_10001(
  MR_Box analysis__closure_arg,
  MR_Box analysis__wrapper_arg_1);

static MR_bool MR_CALL 
analysis__ClassMethod_for_analysis__to_term____analysis__any_call__arity0______analysis__from_term_2_2_p_0_10001(
  MR_Box analysis__closure_arg,
  MR_Box analysis__wrapper_arg_1,
  MR_Box * analysis__wrapper_arg_2);

static MR_bool MR_CALL 
analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__any_call__arity0______analysis__more_precise_than_3_3_p_0_10001(
  MR_Box analysis__closure_arg,
  MR_Box analysis__wrapper_arg_1,
  MR_Box analysis__wrapper_arg_2,
  MR_Box analysis__wrapper_arg_3);

static MR_bool MR_CALL 
analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__any_call__arity0______analysis__equivalent_3_3_p_0_10001(
  MR_Box analysis__closure_arg,
  MR_Box analysis__wrapper_arg_1,
  MR_Box analysis__wrapper_arg_2,
  MR_Box analysis__wrapper_arg_3);

static MR_bool MR_CALL 
analysis__IntroducedFrom__pred__clear_imdg_entries_pointing_at_3__1180__1_2_p_0(
  MR_Word analysis__ModuleName_4,
  MR_Word analysis__LambdaHeadVar__1_9);

static MR_bool MR_CALL 
analysis__IntroducedFrom__func__update_analysis_registry_5__961__1_1_f_0(
  MR_Word analysis__LambdaHeadVar__1_60,
  MR_Word * analysis__LambdaHeadVar__2_61);

static MR_bool MR_CALL 
analysis__IntroducedFrom__pred__lookup_exactly_matching_result_even_from_invalid_modules__608__1_4_p_0(
  MR_Word analysis__TypeClassInfo_for_analysis_32,
  MR_Box analysis__FuncInfo_10,
  MR_Box analysis__Call_11,
  MR_Word analysis__LambdaHeadVar__1_22);

static MR_Word MR_CALL 
analysis__IntroducedFrom__func__lookup_results_2__540__1_2_f_0(
  MR_Word analysis__TypeClassInfo_for_analysis_29,
  MR_Word analysis__LambdaHeadVar__1_24);

static MR_bool MR_CALL 
analysis__IntroducedFrom__func__lookup_requests__683__1_2_f_0(
  MR_Word analysis__TypeClassInfo_for_call_pattern_47,
  MR_Word analysis__LambdaHeadVar__1_23,
  MR_Box * analysis__LambdaHeadVar__2_24);

static MR_bool MR_CALL 
analysis__IntroducedFrom__pred__lookup_matching_results__553__1_4_p_0(
  MR_Word analysis__TypeClassInfo_for_analysis_21,
  MR_Box analysis__FuncInfo_10,
  MR_Box analysis__Call_11,
  MR_Word analysis__LambdaHeadVar__1_17);

static MR_Box MR_CALL 
analysis__IntroducedFrom__func__lookup_existing_call_patterns__480__1_2_f_0(
  MR_Word analysis__TypeClassInfo_for_call_pattern_46,
  MR_Word analysis__LambdaHeadVar__1_24);

static void MR_CALL 
analysis__analyses_3_p_1_1(
  void * analysis__env_ptr_arg);

static MR_Box MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_117_98_95_114_101_115_117_108_116_95_115_116_97_116_117_115_101_115_95_51_95_95_91_49_93_95_48_3_f_0_1(
  MR_Box analysis__closure_arg,
  MR_Box analysis__wrapper_arg_1,
  MR_Box analysis__wrapper_arg_2);

static MR_Box MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_117_98_95_114_101_115_117_108_116_95_115_116_97_116_117_115_101_115_95_50_95_95_91_49_93_95_48_3_f_0_1(
  MR_Box analysis__closure_arg,
  MR_Box analysis__wrapper_arg_1,
  MR_Box analysis__wrapper_arg_2,
  MR_Box analysis__wrapper_arg_3);

static void MR_CALL 
analysis__combine_func_imdg_3_p_0_1(
  MR_Box analysis__closure_arg,
  MR_Box analysis__wrapper_arg_1,
  MR_Box analysis__wrapper_arg_2,
  MR_Box * analysis__wrapper_arg_3);

static MR_bool MR_CALL 
analysis__clear_imdg_entries_pointing_at_3_3_p_0_1(
  MR_Box analysis__closure_arg,
  MR_Box analysis__wrapper_arg_1);

static void MR_CALL 
analysis__clear_imdg_entries_pointing_at_2_3_p_0_1(
  MR_Box analysis__closure_arg,
  MR_Box analysis__wrapper_arg_1,
  MR_Box * analysis__wrapper_arg_2);

static void MR_CALL 
analysis__update_intermodule_dependencies_2_4_p_0_1(
  MR_Box analysis__closure_arg,
  MR_Box analysis__wrapper_arg_1,
  MR_Box analysis__wrapper_arg_2,
  MR_Box * analysis__wrapper_arg_3);

static void MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_49_95_95_91_51_93_95_48_3_p_0(
  MR_Word analysis__Var_11,
  MR_Word analysis__Var_12);

static void MR_CALL 
analysis__clear_imdg_entries_pointing_at_3_p_0_1(
  MR_Box analysis__closure_arg,
  MR_Box analysis__wrapper_arg_1,
  MR_Box * analysis__wrapper_arg_2);

static void MR_CALL 
analysis__update_analysis_registry_5_9_p_0_3(
  MR_Box analysis__closure_arg,
  MR_Box analysis__wrapper_arg_1,
  MR_Box analysis__wrapper_arg_2,
  MR_Box * analysis__wrapper_arg_3,
  MR_Box analysis__wrapper_arg_4,
  MR_Box * analysis__wrapper_arg_5);

static MR_bool MR_CALL 
analysis__update_analysis_registry_5_9_p_0_2(
  MR_Box analysis__closure_arg,
  MR_Box analysis__wrapper_arg_1,
  MR_Box * analysis__wrapper_arg_2);

static void MR_CALL 
analysis__update_analysis_registry_5_9_p_0_1(
  MR_Box analysis__closure_arg,
  MR_Box analysis__wrapper_arg_1,
  MR_Box analysis__wrapper_arg_2,
  MR_Box * analysis__wrapper_arg_3,
  MR_Box analysis__wrapper_arg_4,
  MR_Box * analysis__wrapper_arg_5);

static void MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_52_95_95_91_54_93_95_48_3_p_0(
  MR_Word analysis__Var_11,
  MR_Word analysis__Var_12,
  MR_Word analysis__Var_13,
  MR_Box analysis__Var_14,
  MR_Box analysis__Var_15);

static void MR_CALL 
analysis__IntroducedFrom__pred__update_analysis_registry_5__899__1_7_p_0(
  MR_Word analysis__TypeClassInfo_for_analysis_148,
  MR_Word analysis__ModuleName_11,
  MR_Word analysis__FuncId_13,
  MR_Box analysis__Call_17,
  MR_Box analysis__NewAnswer_18);

static void MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_51_95_95_91_54_93_95_48_3_p_0(
  MR_Word analysis__Var_11,
  MR_Box analysis__Var_12,
  MR_Box analysis__Var_13,
  MR_Word analysis__Var_14,
  MR_Word analysis__Var_15);

static void MR_CALL 
analysis__IntroducedFrom__pred__update_analysis_registry_5__928__1_7_p_0(
  MR_Word analysis__TypeClassInfo_for_analysis_148,
  MR_Box analysis__NewAnswer_18,
  MR_Box analysis__OldAnswer_25,
  MR_Word analysis__Status_29,
  MR_Word analysis__DepModules_31);

static MR_bool MR_CALL 
analysis__imdg_dependent_modules_5_f_0_1(
  MR_Box analysis__closure_arg,
  MR_Box analysis__wrapper_arg_1,
  MR_Box * analysis__wrapper_arg_2);

static void MR_CALL 
analysis__update_analysis_registry_4_9_p_0_1(
  MR_Box analysis__closure_arg,
  MR_Box analysis__wrapper_arg_1,
  MR_Box analysis__wrapper_arg_2,
  MR_Box * analysis__wrapper_arg_3,
  MR_Box analysis__wrapper_arg_4,
  MR_Box * analysis__wrapper_arg_5);

static void MR_CALL 
analysis__update_analysis_registry_3_8_p_0_1(
  MR_Box analysis__closure_arg,
  MR_Box analysis__wrapper_arg_1,
  MR_Box analysis__wrapper_arg_2,
  MR_Box analysis__wrapper_arg_3,
  MR_Box * analysis__wrapper_arg_4,
  MR_Box analysis__wrapper_arg_5,
  MR_Box * analysis__wrapper_arg_6);

static void MR_CALL 
analysis__update_analysis_registry_2_7_p_0_1(
  MR_Box analysis__closure_arg,
  MR_Box analysis__wrapper_arg_1,
  MR_Box analysis__wrapper_arg_2,
  MR_Box analysis__wrapper_arg_3,
  MR_Box * analysis__wrapper_arg_4,
  MR_Box analysis__wrapper_arg_5,
  MR_Box * analysis__wrapper_arg_6);

static void MR_CALL 
analysis__write_analysis_files_7_p_0_4(
  MR_Box analysis__closure_arg,
  MR_Box analysis__wrapper_arg_1,
  MR_Box analysis__wrapper_arg_2,
  MR_Box * analysis__wrapper_arg_3);

static void MR_CALL 
analysis__write_analysis_files_7_p_0_3(
  MR_Box analysis__closure_arg,
  MR_Box analysis__wrapper_arg_1,
  MR_Box analysis__wrapper_arg_2,
  MR_Box * analysis__wrapper_arg_3);

static void MR_CALL 
analysis__write_analysis_files_7_p_0_2(
  MR_Box analysis__closure_arg,
  MR_Box analysis__wrapper_arg_1,
  MR_Box analysis__wrapper_arg_2,
  MR_Box * analysis__wrapper_arg_3);

static void MR_CALL 
analysis__write_analysis_files_7_p_0_1(
  MR_Box analysis__closure_arg,
  MR_Box analysis__wrapper_arg_1,
  MR_Box analysis__wrapper_arg_2,
  MR_Box * analysis__wrapper_arg_3,
  MR_Box analysis__wrapper_arg_4,
  MR_Box * analysis__wrapper_arg_5);

static MR_Box MR_CALL 
analysis__lub_result_statuses_1_f_0_1(
  MR_Box analysis__closure_arg,
  MR_Box analysis__wrapper_arg_1,
  MR_Box analysis__wrapper_arg_2,
  MR_Box analysis__wrapper_arg_3);

static void MR_CALL 
analysis__update_intermodule_dependencies_4_p_0_1(
  MR_Box analysis__closure_arg,
  MR_Box analysis__wrapper_arg_1,
  MR_Box analysis__wrapper_arg_2,
  MR_Box * analysis__wrapper_arg_3);

static void MR_CALL 
analysis__update_analysis_registry_5_p_0_1(
  MR_Box analysis__closure_arg,
  MR_Box analysis__wrapper_arg_1,
  MR_Box analysis__wrapper_arg_2,
  MR_Box analysis__wrapper_arg_3,
  MR_Box * analysis__wrapper_arg_4,
  MR_Box analysis__wrapper_arg_5,
  MR_Box * analysis__wrapper_arg_6);

static void MR_CALL 
analysis__prepare_intermodule_analysis_7_p_0_1(
  MR_Box analysis__closure_arg,
  MR_Box analysis__wrapper_arg_1,
  MR_Box analysis__wrapper_arg_2,
  MR_Box * analysis__wrapper_arg_3,
  MR_Box analysis__wrapper_arg_4,
  MR_Box * analysis__wrapper_arg_5);

static MR_bool MR_CALL 
analysis__lookup_requests_5_p_0_1(
  MR_Box analysis__closure_arg,
  MR_Box analysis__wrapper_arg_1,
  MR_Box * analysis__wrapper_arg_2);

static MR_bool MR_CALL 
analysis__lookup_exactly_matching_result_even_from_invalid_modules_6_p_0_1(
  MR_Box analysis__closure_arg,
  MR_Box analysis__wrapper_arg_1);

static void MR_CALL 
analysis__lookup_best_result_6_p_0_1(
  MR_Box analysis__closure_arg,
  MR_Box analysis__wrapper_arg_1,
  MR_Box analysis__wrapper_arg_2,
  MR_Box * analysis__wrapper_arg_3);

static void MR_CALL 
analysis__IntroducedFrom__pred__lookup_best_result__564__1_4_p_0(
  MR_Word analysis__ModuleName_8,
  MR_Word analysis__FuncId_9);

static MR_bool MR_CALL 
analysis__lookup_matching_results_6_p_0_1(
  MR_Box analysis__closure_arg,
  MR_Box analysis__wrapper_arg_1);

static void MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_54_95_95_91_51_93_95_48_3_p_0(
  MR_Word analysis__Var_11,
  MR_Word analysis__Var_12);

static void MR_CALL 
analysis__IntroducedFrom__pred__lookup_results_1__518__1_4_p_0(
  MR_Word analysis__TypeClassInfo_for_analysis_62,
  MR_Word analysis__ResultList_10);

static void MR_CALL 
analysis__IntroducedFrom__pred__lookup_results_1__500__1_4_p_0(
  MR_Word analysis__ModuleName_7,
  MR_Word analysis__FuncId_8);

static MR_Box MR_CALL 
analysis__lookup_results_2_4_p_0_1(
  MR_Box analysis__closure_arg,
  MR_Box analysis__wrapper_arg_1);

static MR_Box MR_CALL 
analysis__lookup_existing_call_patterns_5_p_0_1(
  MR_Box analysis__closure_arg,
  MR_Box analysis__wrapper_arg_1);


static /* final */ const MR_Box analysis_scalar_common_1[4][2];

static /* final */ const MR_Box analysis_scalar_common_2[16][3];

static /* final */ const MR_Integer analysis_scalar_common_3[1][2];

static /* final */ const MR_Box analysis_scalar_common_4[8][6];

static /* final */ const MR_Integer analysis_scalar_common_5[2][3];

static /* final */ const MR_Integer analysis_scalar_common_6[1][4];

static /* final */ const MR_Box analysis_scalar_common_7[4][7];

static /* final */ const MR_Box analysis_scalar_common_8[3][8];

static /* final */ const MR_Box analysis_scalar_common_9[1][9];

static /* final */ const MR_Box analysis_scalar_common_10[1][11];

static /* final */ const MR_Box analysis_scalar_common_11[2][12];

static /* final */ const MR_Box analysis_scalar_common_12[1][10];

static /* final */ const MR_Box analysis_scalar_common_13[2][5];

static /* final */ const MR_Box analysis_scalar_common_14[1][1];




static /* final */ const MR_Box analysis_scalar_common_1[4][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_request_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_some_analysis_result_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_imdg_arc_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};

static /* final */ const MR_Box analysis_scalar_common_2[16][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_func_id_0)),
    ((MR_Box) (&analysis_scalar_common_1[0]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&analysis_scalar_common_2[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_func_id_0)),
    ((MR_Box) (&analysis_scalar_common_1[1]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&analysis_scalar_common_2[2]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_func_id_0)),
    ((MR_Box) (&analysis_scalar_common_1[2]))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&analysis_scalar_common_2[4]))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&analysis_scalar_common_2[1]))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_status_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&analysis_scalar_common_2[3]))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&analysis_scalar_common_2[5]))
  },
  /* row 10 */
  {
    ((MR_Box) (&analysis_scalar_common_7[2])),
    ((MR_Box) (analysis__lub_result_statuses_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&analysis_scalar_common_13[0])),
    ((MR_Box) (analysis__update_analysis_registry_5_9_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&analysis_scalar_common_4[4])),
    ((MR_Box) (analysis__update_intermodule_dependencies_2_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&analysis_scalar_common_4[6])),
    ((MR_Box) (analysis__combine_func_imdg_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&analysis_scalar_common_7[3])),
    ((MR_Box) (analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_117_98_95_114_101_115_117_108_116_95_115_116_97_116_117_115_101_115_95_50_95_95_91_49_93_95_48_3_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&analysis_scalar_common_4[7])),
    ((MR_Box) (analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_117_98_95_114_101_115_117_108_116_95_115_116_97_116_117_115_101_115_95_51_95_95_91_49_93_95_48_3_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Integer analysis_scalar_common_3[1][2] = {
  /* row 0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 67727
  },
};

static /* final */ const MR_Box analysis_scalar_common_4[8][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&analysis_scalar_common_3[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_some_analysis_result_0)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (&analysis_scalar_common_5[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_some_analysis_result_0)),
    ((MR_Box) (&analysis__analysis__pti_analysis_result_2__pseudo_1__pseudo_2))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (&analysis_scalar_common_3[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_request_0)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&analysis__tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__plain_list__ti_list_1analysis__type_ctor_info_imdg_arc_0)),
    ((MR_Box) (&analysis__tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__plain_list__ti_list_1analysis__type_ctor_info_imdg_arc_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&analysis__tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__plain_list__ti_list_1analysis__type_ctor_info_imdg_arc_0)),
    ((MR_Box) (&analysis__tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__plain_list__ti_list_1analysis__type_ctor_info_imdg_arc_0)),
    ((MR_Box) (&analysis__tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__plain_list__ti_list_1analysis__type_ctor_info_imdg_arc_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&analysis__list__pti_list_1__plain_analysis__type_ctor_info_imdg_arc_0)),
    ((MR_Box) (&analysis__list__pti_list_1__plain_analysis__type_ctor_info_imdg_arc_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&analysis__list__pti_list_1__plain_analysis__type_ctor_info_imdg_arc_0)),
    ((MR_Box) (&analysis__list__pti_list_1__plain_analysis__type_ctor_info_imdg_arc_0)),
    ((MR_Box) (&analysis__list__pti_list_1__plain_analysis__type_ctor_info_imdg_arc_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_some_analysis_result_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_status_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_status_0))
  },
};

static /* final */ const MR_Integer analysis_scalar_common_5[2][3] = {
  /* row 0 */
  {
    (MR_Integer) 2,
    (MR_Integer) 67727,
    (MR_Integer) 67759
  },
  /* row 1 */
  {
    (MR_Integer) 2,
    (MR_Integer) 67695,
    (MR_Integer) 67727
  },
};

static /* final */ const MR_Integer analysis_scalar_common_6[1][4] = {
  /* row 0 */
  {
    (MR_Integer) 3,
    (MR_Integer) 67695,
    (MR_Integer) 67727,
    (MR_Integer) 67759
  },
};

static /* final */ const MR_Box analysis_scalar_common_7[4][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&analysis_scalar_common_6[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&analysis__analysis__pti_analysis_result_2__pseudo_2__pseudo_3))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_info_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_info_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&analysis__tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__plain_list__ti_list_1analysis__type_ctor_info_some_analysis_result_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_status_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_status_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_func_id_0)),
    ((MR_Box) (&analysis__list__pti_list_1__plain_analysis__type_ctor_info_some_analysis_result_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_status_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_status_0))
  },
};

static /* final */ const MR_Box analysis_scalar_common_8[3][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&analysis_scalar_common_6[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&analysis__analysis__pti_analysis_result_2__pseudo_2__pseudo_3)),
    ((MR_Box) (&analysis__analysis__pti_analysis_result_2__pseudo_2__pseudo_3)),
    ((MR_Box) (&analysis__analysis__pti_analysis_result_2__pseudo_2__pseudo_3))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_info_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (&analysis_scalar_common_5[1])),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_imdg_arc_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};

static /* final */ const MR_Box analysis_scalar_common_9[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_info_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box analysis_scalar_common_10[1][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
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

static /* final */ const MR_Box analysis_scalar_common_11[2][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
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
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
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

static /* final */ const MR_Box analysis_scalar_common_12[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_status_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_info_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box analysis_scalar_common_13[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_request_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&analysis__analysis__type_ctor_info_imdg_arc_0))
  },
};

static /* final */ const MR_Box analysis_scalar_common_14[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "any"))
  },
};



#include "analysis.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"
#line 1389 "analysis.m"
MR_Word analysis__mutable_variable_debug_analysis;
#ifdef MR_THREAD_SAFE
    MercuryLock analysis__mutable_variable_debug_analysis_lock;
#endif

#line 1389 "analysis.m"
void 
analysis__user_init_pred_0(void)
#line 1389 "analysis.m"
{
#line 1389 "analysis.m"
	analysis__initialise_mutable_debug_analysis_0_p_0();
}


static const MR_FA_PseudoTypeInfo_Struct2 analysis__analysis__pti_analysis_result_2__pseudo_1__pseudo_2 = {
  &analysis__analysis__type_ctor_info_analysis_result_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 analysis__analysis__pti_analysis_result_2__pseudo_2__pseudo_3 = {
  &analysis__analysis__type_ctor_info_analysis_result_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 2,
    (MR_PseudoTypeInfo) (MR_Integer) 3
  }
};

static const MR_FA_TypeInfo_Struct1 analysis__list__ti_list_1analysis__type_ctor_info_some_analysis_result_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &analysis__analysis__type_ctor_info_some_analysis_result_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 analysis__tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__plain_list__ti_list_1analysis__type_ctor_info_some_analysis_result_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &analysis__analysis__type_ctor_info_func_id_0,
    (MR_PseudoTypeInfo) &analysis__list__ti_list_1analysis__type_ctor_info_some_analysis_result_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 analysis__list__pti_list_1__plain_analysis__type_ctor_info_some_analysis_result_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &analysis__analysis__type_ctor_info_some_analysis_result_0
  }
};

static const MR_FA_TypeInfo_Struct1 analysis__list__ti_list_1analysis__type_ctor_info_imdg_arc_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &analysis__analysis__type_ctor_info_imdg_arc_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 analysis__tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__plain_list__ti_list_1analysis__type_ctor_info_imdg_arc_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &analysis__analysis__type_ctor_info_func_id_0,
    (MR_PseudoTypeInfo) &analysis__list__ti_list_1analysis__type_ctor_info_imdg_arc_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 analysis__list__pti_list_1__plain_analysis__type_ctor_info_imdg_arc_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &analysis__analysis__type_ctor_info_imdg_arc_0
  }
};

static const MR_FA_TypeInfo_Struct1 analysis__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

static const MR_FA_TypeInfo_Struct1 analysis__list__ti_list_1analysis__type_ctor_info_analysis_request_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &analysis__analysis__type_ctor_info_analysis_request_0
  }
};

static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_analysis_request_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &analysis__analysis__type_ctor_info_func_id_0,
    (MR_TypeInfo) &analysis__list__ti_list_1analysis__type_ctor_info_analysis_request_0
  }
};

static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_analysis_request_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &analysis__tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_analysis_request_0
  }
};

static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_analysis_request_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &analysis__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_analysis_request_0
  }
};

static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0analysis__type_ctor_info_analysis_status_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &analysis__analysis__type_ctor_info_analysis_status_0
  }
};

static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &analysis__analysis__type_ctor_info_func_id_0,
    (MR_TypeInfo) &analysis__list__ti_list_1analysis__type_ctor_info_some_analysis_result_0
  }
};

static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &analysis__tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0
  }
};

static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &analysis__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0
  }
};

static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_imdg_arc_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &analysis__analysis__type_ctor_info_func_id_0,
    (MR_TypeInfo) &analysis__list__ti_list_1analysis__type_ctor_info_imdg_arc_0
  }
};

static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_imdg_arc_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &analysis__tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_imdg_arc_0
  }
};

static const MR_FA_TypeInfo_Struct2 analysis__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_imdg_arc_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &analysis__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_imdg_arc_0
  }
};

static const MR_PseudoTypeInfo analysis__analysis__field_types_analysis_info_0_0[10] = {
  (MR_PseudoTypeInfo) (MR_Integer) 513,
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &analysis__analysis__type_ctor_info_make_analysis_registry_0,
  (MR_PseudoTypeInfo) &analysis__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &analysis__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_analysis_request_0,
  (MR_PseudoTypeInfo) &analysis__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0analysis__type_ctor_info_analysis_status_0,
  (MR_PseudoTypeInfo) &analysis__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0,
  (MR_PseudoTypeInfo) &analysis__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0,
  (MR_PseudoTypeInfo) &analysis__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_imdg_arc_0,
  (MR_PseudoTypeInfo) &analysis__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_imdg_arc_0
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

static const MR_TypeClassConstraint_1Struct analysis__analysis__exist_tc_constr_analysis_info_0_0_1 = {
  &analysis__analysis__type_class_decl_compiler_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_TypeClassConstraint analysis__analysis__exist_tc_constrs_analysis_info_0_0[1] = {
  (MR_TypeClassConstraint) &analysis__analysis__exist_tc_constr_analysis_info_0_0_1
};

static const MR_DuExistLocn analysis__analysis__exist_locns_analysis_info_0_0[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuExistInfo analysis__analysis__exist_info_analysis_info_0_0 = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 1,
  analysis__analysis__exist_locns_analysis_info_0_0,
  analysis__analysis__exist_tc_constrs_analysis_info_0_0
};

static const MR_DuFunctorDesc analysis__analysis__du_functor_desc_analysis_info_0_0 = {
  (MR_String) "analysis_info",
  (MR_Integer) 10,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  analysis__analysis__field_types_analysis_info_0_0,
  analysis__analysis__field_names_analysis_info_0_0,
  NULL,
  &analysis__analysis__exist_info_analysis_info_0_0,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr analysis__analysis__du_stag_ordered_analysis_info_0_0[1] = {
  &analysis__analysis__du_functor_desc_analysis_info_0_0
};

static const MR_DuPtagLayout analysis__analysis__du_ptag_ordered_analysis_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    analysis__analysis__du_stag_ordered_analysis_info_0_0
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (analysis____Unify____analysis_info_0_0_10001)),
  ((MR_Box) (analysis____Compare____analysis_info_0_0_10001)),
  (MR_String) "analysis",
  (MR_String) "analysis_info",
  {     analysis__analysis__du_name_ordered_analysis_info_0 },
  {     analysis__analysis__du_ptag_ordered_analysis_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  analysis__analysis__functor_number_map_analysis_info_0
};

static const MR_FA_PseudoTypeInfo_Struct1 analysis__list__pti_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 analysis__tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__pseudo_list__pti_list_1__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &analysis__analysis__type_ctor_info_func_id_0,
    (MR_PseudoTypeInfo) &analysis__list__pti_list_1__pseudo_1
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 analysis__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__pseudo_tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__pseudo_list__pti_list_1__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &analysis__tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__pseudo_list__pti_list_1__pseudo_1
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 analysis__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__pseudo_tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__pseudo_list__pti_list_1__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &analysis__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__pseudo_tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__pseudo_list__pti_list_1__pseudo_1
  }
};

const MR_TypeCtorInfo_Struct analysis__analysis__type_ctor_info_analysis_map_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (analysis____Unify____analysis_map_1_0_10001)),
  ((MR_Box) (analysis____Compare____analysis_map_1_0_10001)),
  (MR_String) "analysis",
  (MR_String) "analysis_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &analysis__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__pseudo_tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__pseudo_list__pti_list_1__pseudo_1 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct analysis__analysis__type_ctor_info_analysis_name_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (analysis____Unify____analysis_name_0_0_10001)),
  ((MR_Box) (analysis____Compare____analysis_name_0_0_10001)),
  (MR_String) "analysis",
  (MR_String) "analysis_name",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_PseudoTypeInfo analysis__analysis__field_types_analysis_request_0_0[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 514,
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
};

static const MR_ConstString analysis__analysis__field_names_analysis_request_0_0[2] = {
  (MR_String) "req_call",
  (MR_String) "req_caller"
};

static const MR_TypeClassConstraint_2Struct analysis__analysis__exist_tc_constr_analysis_request_0_0_1 = {
  &analysis__analysis__type_class_decl_call_pattern_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

static const MR_TypeClassConstraint analysis__analysis__exist_tc_constrs_analysis_request_0_0[1] = {
  (MR_TypeClassConstraint) &analysis__analysis__exist_tc_constr_analysis_request_0_0_1
};

static const MR_DuExistLocn analysis__analysis__exist_locns_analysis_request_0_0[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 3
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 4
  }
};

static const MR_DuExistInfo analysis__analysis__exist_info_analysis_request_0_0 = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1,
  analysis__analysis__exist_locns_analysis_request_0_0,
  analysis__analysis__exist_tc_constrs_analysis_request_0_0
};

static const MR_DuFunctorDesc analysis__analysis__du_functor_desc_analysis_request_0_0 = {
  (MR_String) "analysis_request",
  (MR_Integer) 2,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  analysis__analysis__field_types_analysis_request_0_0,
  analysis__analysis__field_names_analysis_request_0_0,
  NULL,
  &analysis__analysis__exist_info_analysis_request_0_0,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr analysis__analysis__du_stag_ordered_analysis_request_0_0[1] = {
  &analysis__analysis__du_functor_desc_analysis_request_0_0
};

static const MR_DuPtagLayout analysis__analysis__du_ptag_ordered_analysis_request_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    analysis__analysis__du_stag_ordered_analysis_request_0_0
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (analysis____Unify____analysis_request_0_0_10001)),
  ((MR_Box) (analysis____Compare____analysis_request_0_0_10001)),
  (MR_String) "analysis",
  (MR_String) "analysis_request",
  {     analysis__analysis__du_name_ordered_analysis_request_0 },
  {     analysis__analysis__du_ptag_ordered_analysis_request_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  analysis__analysis__functor_number_map_analysis_request_0
};

static const MR_PseudoTypeInfo analysis__analysis__field_types_analysis_result_2_0[3] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 2,
  (MR_PseudoTypeInfo) &analysis__analysis__type_ctor_info_analysis_status_0
};

static const MR_ConstString analysis__analysis__field_names_analysis_result_2_0[3] = {
  (MR_String) "ar_call",
  (MR_String) "ar_answer",
  (MR_String) "ar_status"
};

static const MR_DuFunctorDesc analysis__analysis__du_functor_desc_analysis_result_2_0 = {
  (MR_String) "analysis_result",
  (MR_Integer) 3,
  (MR_Integer) 3,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  analysis__analysis__field_types_analysis_result_2_0,
  analysis__analysis__field_names_analysis_result_2_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr analysis__analysis__du_stag_ordered_analysis_result_2_0[1] = {
  &analysis__analysis__du_functor_desc_analysis_result_2_0
};

static const MR_DuPtagLayout analysis__analysis__du_ptag_ordered_analysis_result_2[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    analysis__analysis__du_stag_ordered_analysis_result_2_0
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (analysis____Unify____analysis_result_2_0_10001)),
  ((MR_Box) (analysis____Compare____analysis_result_2_0_10001)),
  (MR_String) "analysis",
  (MR_String) "analysis_result",
  {     analysis__analysis__du_name_ordered_analysis_result_2 },
  {     analysis__analysis__du_ptag_ordered_analysis_result_2 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  analysis__analysis__functor_number_map_analysis_result_2
};

static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_analysis_status_0_0 = {
  (MR_String) "invalid",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_analysis_status_0_1 = {
  (MR_String) "suboptimal",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_analysis_status_0_2 = {
  (MR_String) "optimal",
  (MR_Integer) 2
};

static const MR_EnumFunctorDescPtr analysis__analysis__enum_value_ordered_analysis_status_0[3] = {
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (analysis____Unify____analysis_status_0_0_10001)),
  ((MR_Box) (analysis____Compare____analysis_status_0_0_10001)),
  (MR_String) "analysis",
  (MR_String) "analysis_status",
  {     analysis__analysis__enum_name_ordered_analysis_status_0 },
  {     analysis__analysis__enum_value_ordered_analysis_status_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  analysis__analysis__functor_number_map_analysis_status_0
};

static const MR_FA_PseudoTypeInfo_Struct1 analysis__unit__pti_unit_1__pseudo_514 = {
  &mercury__unit__unit__type_ctor_info_unit_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 514
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 analysis__unit__pti_unit_1__pseudo_515 = {
  &mercury__unit__unit__type_ctor_info_unit_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 515
  }
};

static const MR_PseudoTypeInfo analysis__analysis__field_types_analysis_type_0_0[2] = {
  (MR_PseudoTypeInfo) &analysis__unit__pti_unit_1__pseudo_514,
  (MR_PseudoTypeInfo) &analysis__unit__pti_unit_1__pseudo_515
};

static const MR_TypeClassConstraint_3Struct analysis__analysis__exist_tc_constr_analysis_type_0_0_1 = {
  &analysis__analysis__type_class_decl_analysis_3,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2,
    (MR_PseudoTypeInfo) (MR_Integer) 3
  }
};

static const MR_TypeClassConstraint analysis__analysis__exist_tc_constrs_analysis_type_0_0[1] = {
  (MR_TypeClassConstraint) &analysis__analysis__exist_tc_constr_analysis_type_0_0_1
};

static const MR_DuExistLocn analysis__analysis__exist_locns_analysis_type_0_0[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 3
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 4
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 5
  }
};

static const MR_DuExistInfo analysis__analysis__exist_info_analysis_type_0_0 = {
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 1,
  analysis__analysis__exist_locns_analysis_type_0_0,
  analysis__analysis__exist_tc_constrs_analysis_type_0_0
};

static const MR_DuFunctorDesc analysis__analysis__du_functor_desc_analysis_type_0_0 = {
  (MR_String) "analysis_type",
  (MR_Integer) 2,
  (MR_Integer) 3,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  analysis__analysis__field_types_analysis_type_0_0,
  NULL,
  NULL,
  &analysis__analysis__exist_info_analysis_type_0_0,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr analysis__analysis__du_stag_ordered_analysis_type_0_0[1] = {
  &analysis__analysis__du_functor_desc_analysis_type_0_0
};

static const MR_DuPtagLayout analysis__analysis__du_ptag_ordered_analysis_type_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    analysis__analysis__du_stag_ordered_analysis_type_0_0
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (analysis____Unify____analysis_type_0_0_10001)),
  ((MR_Box) (analysis____Compare____analysis_type_0_0_10001)),
  (MR_String) "analysis",
  (MR_String) "analysis_type",
  {     analysis__analysis__du_name_ordered_analysis_type_0 },
  {     analysis__analysis__du_ptag_ordered_analysis_type_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  analysis__analysis__functor_number_map_analysis_type_0
};

static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_any_call_0_0 = {
  (MR_String) "any_call",
  (MR_Integer) 0
};

static const MR_EnumFunctorDescPtr analysis__analysis__enum_value_ordered_any_call_0[1] = {
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_DUMMY,
  ((MR_Box) (analysis____Unify____any_call_0_0_10001)),
  ((MR_Box) (analysis____Compare____any_call_0_0_10001)),
  (MR_String) "analysis",
  (MR_String) "any_call",
  {     analysis__analysis__enum_name_ordered_any_call_0 },
  {     analysis__analysis__enum_value_ordered_any_call_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  analysis__analysis__functor_number_map_any_call_0
};

static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_fixpoint_type_0_0 = {
  (MR_String) "least_fixpoint",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_fixpoint_type_0_1 = {
  (MR_String) "greatest_fixpoint",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr analysis__analysis__enum_value_ordered_fixpoint_type_0[2] = {
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (analysis____Unify____fixpoint_type_0_0_10001)),
  ((MR_Box) (analysis____Compare____fixpoint_type_0_0_10001)),
  (MR_String) "analysis",
  (MR_String) "fixpoint_type",
  {     analysis__analysis__enum_name_ordered_fixpoint_type_0 },
  {     analysis__analysis__enum_value_ordered_fixpoint_type_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  analysis__analysis__functor_number_map_fixpoint_type_0
};

const MR_TypeCtorInfo_Struct analysis__analysis__type_ctor_info_func_analysis_map_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (analysis____Unify____func_analysis_map_1_0_10001)),
  ((MR_Box) (analysis____Compare____func_analysis_map_1_0_10001)),
  (MR_String) "analysis",
  (MR_String) "func_analysis_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &analysis__tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__pseudo_list__pti_list_1__pseudo_1 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_PseudoTypeInfo analysis__analysis__field_types_func_id_0_0[4] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_ConstString analysis__analysis__field_names_func_id_0_0[4] = {
  (MR_String) "fid_pf",
  (MR_String) "fid_name",
  (MR_String) "fid_arity",
  (MR_String) "fid_mode"
};

static const MR_DuFunctorDesc analysis__analysis__du_functor_desc_func_id_0_0 = {
  (MR_String) "func_id",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  analysis__analysis__field_types_func_id_0_0,
  analysis__analysis__field_names_func_id_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr analysis__analysis__du_stag_ordered_func_id_0_0[1] = {
  &analysis__analysis__du_functor_desc_func_id_0_0
};

static const MR_DuPtagLayout analysis__analysis__du_ptag_ordered_func_id_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    analysis__analysis__du_stag_ordered_func_id_0_0
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (analysis____Unify____func_id_0_0_10001)),
  ((MR_Box) (analysis____Compare____func_id_0_0_10001)),
  (MR_String) "analysis",
  (MR_String) "func_id",
  {     analysis__analysis__du_name_ordered_func_id_0 },
  {     analysis__analysis__du_ptag_ordered_func_id_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  analysis__analysis__functor_number_map_func_id_0
};

static const MR_PseudoTypeInfo analysis__analysis__field_types_imdg_arc_0_0[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 514,
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
};

static const MR_ConstString analysis__analysis__field_names_imdg_arc_0_0[2] = {
  (MR_String) "imdg_call",
  (MR_String) "imdg_caller"
};

static const MR_TypeClassConstraint_2Struct analysis__analysis__exist_tc_constr_imdg_arc_0_0_1 = {
  &analysis__analysis__type_class_decl_call_pattern_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

static const MR_TypeClassConstraint analysis__analysis__exist_tc_constrs_imdg_arc_0_0[1] = {
  (MR_TypeClassConstraint) &analysis__analysis__exist_tc_constr_imdg_arc_0_0_1
};

static const MR_DuExistLocn analysis__analysis__exist_locns_imdg_arc_0_0[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 3
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 4
  }
};

static const MR_DuExistInfo analysis__analysis__exist_info_imdg_arc_0_0 = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1,
  analysis__analysis__exist_locns_imdg_arc_0_0,
  analysis__analysis__exist_tc_constrs_imdg_arc_0_0
};

static const MR_DuFunctorDesc analysis__analysis__du_functor_desc_imdg_arc_0_0 = {
  (MR_String) "imdg_arc",
  (MR_Integer) 2,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  analysis__analysis__field_types_imdg_arc_0_0,
  analysis__analysis__field_names_imdg_arc_0_0,
  NULL,
  &analysis__analysis__exist_info_imdg_arc_0_0,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr analysis__analysis__du_stag_ordered_imdg_arc_0_0[1] = {
  &analysis__analysis__du_functor_desc_imdg_arc_0_0
};

static const MR_DuPtagLayout analysis__analysis__du_ptag_ordered_imdg_arc_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    analysis__analysis__du_stag_ordered_imdg_arc_0_0
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (analysis____Unify____imdg_arc_0_0_10001)),
  ((MR_Box) (analysis____Compare____imdg_arc_0_0_10001)),
  (MR_String) "analysis",
  (MR_String) "imdg_arc",
  {     analysis__analysis__du_name_ordered_imdg_arc_0 },
  {     analysis__analysis__du_ptag_ordered_imdg_arc_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  analysis__analysis__functor_number_map_imdg_arc_0
};

static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_make_analysis_registry_0_0 = {
  (MR_String) "make_analysis_registry",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_make_analysis_registry_0_1 = {
  (MR_String) "use_analysis_registry_only",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr analysis__analysis__enum_value_ordered_make_analysis_registry_0[2] = {
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (analysis____Unify____make_analysis_registry_0_0_10001)),
  ((MR_Box) (analysis____Compare____make_analysis_registry_0_0_10001)),
  (MR_String) "analysis",
  (MR_String) "make_analysis_registry",
  {     analysis__analysis__enum_name_ordered_make_analysis_registry_0 },
  {     analysis__analysis__enum_value_ordered_make_analysis_registry_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  analysis__analysis__functor_number_map_make_analysis_registry_0
};

const MR_TypeCtorInfo_Struct analysis__analysis__type_ctor_info_module_analysis_map_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (analysis____Unify____module_analysis_map_1_0_10001)),
  ((MR_Box) (analysis____Compare____module_analysis_map_1_0_10001)),
  (MR_String) "analysis",
  (MR_String) "module_analysis_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &analysis__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__pseudo_tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__pseudo_list__pti_list_1__pseudo_1 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_EnumFunctorDesc analysis__analysis__enum_functor_desc_no_func_info_0_0 = {
  (MR_String) "no_func_info",
  (MR_Integer) 0
};

static const MR_EnumFunctorDescPtr analysis__analysis__enum_value_ordered_no_func_info_0[1] = {
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_DUMMY,
  ((MR_Box) (analysis____Unify____no_func_info_0_0_10001)),
  ((MR_Box) (analysis____Compare____no_func_info_0_0_10001)),
  (MR_String) "analysis",
  (MR_String) "no_func_info",
  {     analysis__analysis__enum_name_ordered_no_func_info_0 },
  {     analysis__analysis__enum_value_ordered_no_func_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  analysis__analysis__functor_number_map_no_func_info_0
};

static const MR_PseudoTypeInfo analysis__analysis__field_types_some_analysis_result_0_0[3] = {
  (MR_PseudoTypeInfo) (MR_Integer) 514,
  (MR_PseudoTypeInfo) (MR_Integer) 515,
  (MR_PseudoTypeInfo) &analysis__analysis__type_ctor_info_analysis_status_0
};

static const MR_ConstString analysis__analysis__field_names_some_analysis_result_0_0[3] = {
  (MR_String) "some_ar_call",
  (MR_String) "some_ar_answer",
  (MR_String) "some_ar_status"
};

static const MR_TypeClassConstraint_3Struct analysis__analysis__exist_tc_constr_some_analysis_result_0_0_1 = {
  &analysis__analysis__type_class_decl_analysis_3,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2,
    (MR_PseudoTypeInfo) (MR_Integer) 3
  }
};

static const MR_TypeClassConstraint analysis__analysis__exist_tc_constrs_some_analysis_result_0_0[1] = {
  (MR_TypeClassConstraint) &analysis__analysis__exist_tc_constr_some_analysis_result_0_0_1
};

static const MR_DuExistLocn analysis__analysis__exist_locns_some_analysis_result_0_0[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 3
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 4
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 5
  }
};

static const MR_DuExistInfo analysis__analysis__exist_info_some_analysis_result_0_0 = {
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 1,
  analysis__analysis__exist_locns_some_analysis_result_0_0,
  analysis__analysis__exist_tc_constrs_some_analysis_result_0_0
};

static const MR_DuFunctorDesc analysis__analysis__du_functor_desc_some_analysis_result_0_0 = {
  (MR_String) "some_analysis_result",
  (MR_Integer) 3,
  (MR_Integer) 3,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  analysis__analysis__field_types_some_analysis_result_0_0,
  analysis__analysis__field_names_some_analysis_result_0_0,
  NULL,
  &analysis__analysis__exist_info_some_analysis_result_0_0,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr analysis__analysis__du_stag_ordered_some_analysis_result_0_0[1] = {
  &analysis__analysis__du_functor_desc_some_analysis_result_0_0
};

static const MR_DuPtagLayout analysis__analysis__du_ptag_ordered_some_analysis_result_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    analysis__analysis__du_stag_ordered_some_analysis_result_0_0
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (analysis____Unify____some_analysis_result_0_0_10001)),
  ((MR_Box) (analysis____Compare____some_analysis_result_0_0_10001)),
  (MR_String) "analysis",
  (MR_String) "some_analysis_result",
  {     analysis__analysis__du_name_ordered_some_analysis_result_0 },
  {     analysis__analysis__du_ptag_ordered_some_analysis_result_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  analysis__analysis__functor_number_map_some_analysis_result_0
};

const MR_BaseTypeclassInfo base_typeclass_info_analysis__to_term__arity1__analysis__any_call__arity0__[7] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (analysis__ClassMethod_for_analysis__to_term____analysis__any_call__arity0______analysis__to_term_1_1_f_0_10001)),
  ((MR_Box) (analysis__ClassMethod_for_analysis__to_term____analysis__any_call__arity0______analysis__from_term_2_2_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_analysis__partial_order__arity2__analysis__no_func_info__arity0__analysis__any_call__arity0__[7] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__any_call__arity0______analysis__more_precise_than_3_3_p_0_10001)),
  ((MR_Box) (analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__any_call__arity0______analysis__equivalent_3_3_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_analysis__call_pattern__arity2__analysis__no_func_info__arity0__analysis__any_call__arity0__[5] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0))
};

static const MR_ConstString analysis__analysis__type_class_id_var_names_to_term_1[1] = {
  (MR_String) "S"
};

static const MR_TypeClassMethod analysis__analysis__type_class_id_method_ids_to_term_1[2] = {
  {
    (MR_String) "to_term",
    (MR_Integer) 2,
    mercury__private_builtin__MR_FUNCTION
  },
  {
    (MR_String) "from_term",
    (MR_Integer) 2,
    mercury__private_builtin__MR_PREDICATE
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
    mercury__private_builtin__MR_PREDICATE
  },
  {
    (MR_String) "equivalent",
    (MR_Integer) 3,
    mercury__private_builtin__MR_PREDICATE
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
    mercury__private_builtin__MR_FUNCTION
  },
  {
    (MR_String) "analyses",
    (MR_Integer) 3,
    mercury__private_builtin__MR_PREDICATE
  },
  {
    (MR_String) "analyses",
    (MR_Integer) 3,
    mercury__private_builtin__MR_PREDICATE
  },
  {
    (MR_String) "module_name_to_read_file_name",
    (MR_Integer) 7,
    mercury__private_builtin__MR_PREDICATE
  },
  {
    (MR_String) "module_name_to_write_file_name",
    (MR_Integer) 7,
    mercury__private_builtin__MR_PREDICATE
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
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

static const MR_TypeClassConstraint_1Struct analysis__analysis__type_class_decl_super_call_pattern_2_2 = {
  &analysis__analysis__type_class_decl_to_term_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

static const MR_TypeClassConstraint analysis__analysis__type_class_decl_supers_call_pattern_2[2] = {
  (MR_TypeClassConstraint) &analysis__analysis__type_class_decl_super_call_pattern_2_1,
  (MR_TypeClassConstraint) &analysis__analysis__type_class_decl_super_call_pattern_2_2
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
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

static const MR_TypeClassConstraint_1Struct analysis__analysis__type_class_decl_super_answer_pattern_2_2 = {
  &analysis__analysis__type_class_decl_to_term_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

static const MR_TypeClassConstraint analysis__analysis__type_class_decl_supers_answer_pattern_2[2] = {
  (MR_TypeClassConstraint) &analysis__analysis__type_class_decl_super_answer_pattern_2_1,
  (MR_TypeClassConstraint) &analysis__analysis__type_class_decl_super_answer_pattern_2_2
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
    mercury__private_builtin__MR_FUNCTION
  },
  {
    (MR_String) "analysis_version_number",
    (MR_Integer) 3,
    mercury__private_builtin__MR_FUNCTION
  },
  {
    (MR_String) "preferred_fixpoint_type",
    (MR_Integer) 3,
    mercury__private_builtin__MR_FUNCTION
  },
  {
    (MR_String) "bottom",
    (MR_Integer) 3,
    mercury__private_builtin__MR_FUNCTION
  },
  {
    (MR_String) "top",
    (MR_Integer) 3,
    mercury__private_builtin__MR_FUNCTION
  },
  {
    (MR_String) "get_func_info",
    (MR_Integer) 6,
    mercury__private_builtin__MR_PREDICATE
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
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

static const MR_TypeClassConstraint_2Struct analysis__analysis__type_class_decl_super_analysis_3_2 = {
  &analysis__analysis__type_class_decl_answer_pattern_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 3
  }
};

static const MR_TypeClassConstraint analysis__analysis__type_class_decl_supers_analysis_3[2] = {
  (MR_TypeClassConstraint) &analysis__analysis__type_class_decl_super_analysis_3_1,
  (MR_TypeClassConstraint) &analysis__analysis__type_class_decl_super_analysis_3_2
};

const MR_TypeClassDeclStruct analysis__analysis__type_class_decl_analysis_3 = {
  &analysis__analysis__type_class_id_analysis_3,
  (MR_Integer) 0,
  (MR_Integer) 2,
  NULL
};

static MR_bool MR_CALL 
analysis____Unify____analysis_info_0_0_10001(
  MR_Box analysis__wrapper_arg_1,
  MR_Box analysis__wrapper_arg_2)
{
  {
    MR_bool analysis__succeeded;

    {
      analysis__succeeded = analysis____Unify____analysis_info_0_0(((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2));
    }
    return analysis__succeeded;
  }
}

static void MR_CALL 
analysis____Compare____analysis_info_0_0_10001(
  MR_Box * analysis__wrapper_arg_1,
  MR_Box analysis__wrapper_arg_2,
  MR_Box analysis__wrapper_arg_3)
{
  {
    MR_Word analysis__conv0_HeadVar__1_1;

    {
      analysis____Compare____analysis_info_0_0(&analysis__conv0_HeadVar__1_1, ((MR_Word) analysis__wrapper_arg_2), ((MR_Word) analysis__wrapper_arg_3));
    }
    *analysis__wrapper_arg_1 = ((MR_Box) (analysis__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
analysis____Unify____analysis_map_1_0_10001(
  MR_Box analysis__wrapper_arg_1,
  MR_Box analysis__wrapper_arg_2,
  MR_Box analysis__wrapper_arg_3)
{
  {
    MR_bool analysis__succeeded;

    {
      analysis__succeeded = analysis____Unify____analysis_map_1_0(((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2), ((MR_Word) analysis__wrapper_arg_3));
    }
    return analysis__succeeded;
  }
}

static void MR_CALL 
analysis____Compare____analysis_map_1_0_10001(
  MR_Box analysis__wrapper_arg_1,
  MR_Box * analysis__wrapper_arg_2,
  MR_Box analysis__wrapper_arg_3,
  MR_Box analysis__wrapper_arg_4)
{
  {
    MR_Word analysis__conv0_HeadVar__1_1;

    {
      analysis____Compare____analysis_map_1_0(((MR_Word) analysis__wrapper_arg_1), &analysis__conv0_HeadVar__1_1, ((MR_Word) analysis__wrapper_arg_3), ((MR_Word) analysis__wrapper_arg_4));
    }
    *analysis__wrapper_arg_2 = ((MR_Box) (analysis__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
analysis____Unify____analysis_name_0_0_10001(
  MR_Box analysis__wrapper_arg_1,
  MR_Box analysis__wrapper_arg_2)
{
  {
    MR_bool analysis__succeeded;

    {
      analysis__succeeded = analysis____Unify____analysis_name_0_0(((MR_String) analysis__wrapper_arg_1), ((MR_String) analysis__wrapper_arg_2));
    }
    return analysis__succeeded;
  }
}

static void MR_CALL 
analysis____Compare____analysis_name_0_0_10001(
  MR_Box * analysis__wrapper_arg_1,
  MR_Box analysis__wrapper_arg_2,
  MR_Box analysis__wrapper_arg_3)
{
  {
    MR_Word analysis__conv0_HeadVar__1_1;

    {
      analysis____Compare____analysis_name_0_0(&analysis__conv0_HeadVar__1_1, ((MR_String) analysis__wrapper_arg_2), ((MR_String) analysis__wrapper_arg_3));
    }
    *analysis__wrapper_arg_1 = ((MR_Box) (analysis__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
analysis____Unify____analysis_request_0_0_10001(
  MR_Box analysis__wrapper_arg_1,
  MR_Box analysis__wrapper_arg_2)
{
  {
    MR_bool analysis__succeeded;

    {
      analysis__succeeded = analysis____Unify____analysis_request_0_0(((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2));
    }
    return analysis__succeeded;
  }
}

static void MR_CALL 
analysis____Compare____analysis_request_0_0_10001(
  MR_Box * analysis__wrapper_arg_1,
  MR_Box analysis__wrapper_arg_2,
  MR_Box analysis__wrapper_arg_3)
{
  {
    MR_Word analysis__conv0_HeadVar__1_1;

    {
      analysis____Compare____analysis_request_0_0(&analysis__conv0_HeadVar__1_1, ((MR_Word) analysis__wrapper_arg_2), ((MR_Word) analysis__wrapper_arg_3));
    }
    *analysis__wrapper_arg_1 = ((MR_Box) (analysis__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
analysis____Unify____analysis_result_2_0_10001(
  MR_Box analysis__wrapper_arg_1,
  MR_Box analysis__wrapper_arg_2,
  MR_Box analysis__wrapper_arg_3,
  MR_Box analysis__wrapper_arg_4)
{
  {
    MR_bool analysis__succeeded;

    {
      analysis__succeeded = analysis____Unify____analysis_result_2_0(((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2), ((MR_Word) analysis__wrapper_arg_3), ((MR_Word) analysis__wrapper_arg_4));
    }
    return analysis__succeeded;
  }
}

static void MR_CALL 
analysis____Compare____analysis_result_2_0_10001(
  MR_Box analysis__wrapper_arg_1,
  MR_Box analysis__wrapper_arg_2,
  MR_Box * analysis__wrapper_arg_3,
  MR_Box analysis__wrapper_arg_4,
  MR_Box analysis__wrapper_arg_5)
{
  {
    MR_Word analysis__conv0_HeadVar__1_1;

    {
      analysis____Compare____analysis_result_2_0(((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2), &analysis__conv0_HeadVar__1_1, ((MR_Word) analysis__wrapper_arg_4), ((MR_Word) analysis__wrapper_arg_5));
    }
    *analysis__wrapper_arg_3 = ((MR_Box) (analysis__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
analysis____Unify____analysis_status_0_0_10001(
  MR_Box analysis__wrapper_arg_1,
  MR_Box analysis__wrapper_arg_2)
{
  {
    MR_bool analysis__succeeded;

    {
      analysis__succeeded = analysis____Unify____analysis_status_0_0(((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2));
    }
    return analysis__succeeded;
  }
}

static void MR_CALL 
analysis____Compare____analysis_status_0_0_10001(
  MR_Box * analysis__wrapper_arg_1,
  MR_Box analysis__wrapper_arg_2,
  MR_Box analysis__wrapper_arg_3)
{
  {
    MR_Word analysis__conv0_HeadVar__1_1;

    {
      analysis____Compare____analysis_status_0_0(&analysis__conv0_HeadVar__1_1, ((MR_Word) analysis__wrapper_arg_2), ((MR_Word) analysis__wrapper_arg_3));
    }
    *analysis__wrapper_arg_1 = ((MR_Box) (analysis__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
analysis____Unify____analysis_type_0_0_10001(
  MR_Box analysis__wrapper_arg_1,
  MR_Box analysis__wrapper_arg_2)
{
  {
    MR_bool analysis__succeeded;

    {
      analysis__succeeded = analysis____Unify____analysis_type_0_0(((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2));
    }
    return analysis__succeeded;
  }
}

static void MR_CALL 
analysis____Compare____analysis_type_0_0_10001(
  MR_Box * analysis__wrapper_arg_1,
  MR_Box analysis__wrapper_arg_2,
  MR_Box analysis__wrapper_arg_3)
{
  {
    MR_Word analysis__conv0_HeadVar__1_1;

    {
      analysis____Compare____analysis_type_0_0(&analysis__conv0_HeadVar__1_1, ((MR_Word) analysis__wrapper_arg_2), ((MR_Word) analysis__wrapper_arg_3));
    }
    *analysis__wrapper_arg_1 = ((MR_Box) (analysis__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
analysis____Unify____any_call_0_0_10001(
  MR_Box analysis__wrapper_arg_1,
  MR_Box analysis__wrapper_arg_2)
{
  {
    MR_bool analysis__succeeded;

    {
      analysis__succeeded = analysis____Unify____any_call_0_0();
    }
    return analysis__succeeded;
  }
}

static void MR_CALL 
analysis____Compare____any_call_0_0_10001(
  MR_Box * analysis__wrapper_arg_1,
  MR_Box analysis__wrapper_arg_2,
  MR_Box analysis__wrapper_arg_3)
{
  {
    MR_Word analysis__conv0_HeadVar__1_1;

    {
      analysis____Compare____any_call_0_0(&analysis__conv0_HeadVar__1_1);
    }
    *analysis__wrapper_arg_1 = ((MR_Box) (analysis__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
analysis____Unify____fixpoint_type_0_0_10001(
  MR_Box analysis__wrapper_arg_1,
  MR_Box analysis__wrapper_arg_2)
{
  {
    MR_bool analysis__succeeded;

    {
      analysis__succeeded = analysis____Unify____fixpoint_type_0_0(((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2));
    }
    return analysis__succeeded;
  }
}

static void MR_CALL 
analysis____Compare____fixpoint_type_0_0_10001(
  MR_Box * analysis__wrapper_arg_1,
  MR_Box analysis__wrapper_arg_2,
  MR_Box analysis__wrapper_arg_3)
{
  {
    MR_Word analysis__conv0_HeadVar__1_1;

    {
      analysis____Compare____fixpoint_type_0_0(&analysis__conv0_HeadVar__1_1, ((MR_Word) analysis__wrapper_arg_2), ((MR_Word) analysis__wrapper_arg_3));
    }
    *analysis__wrapper_arg_1 = ((MR_Box) (analysis__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
analysis____Unify____func_analysis_map_1_0_10001(
  MR_Box analysis__wrapper_arg_1,
  MR_Box analysis__wrapper_arg_2,
  MR_Box analysis__wrapper_arg_3)
{
  {
    MR_bool analysis__succeeded;

    {
      analysis__succeeded = analysis____Unify____func_analysis_map_1_0(((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2), ((MR_Word) analysis__wrapper_arg_3));
    }
    return analysis__succeeded;
  }
}

static void MR_CALL 
analysis____Compare____func_analysis_map_1_0_10001(
  MR_Box analysis__wrapper_arg_1,
  MR_Box * analysis__wrapper_arg_2,
  MR_Box analysis__wrapper_arg_3,
  MR_Box analysis__wrapper_arg_4)
{
  {
    MR_Word analysis__conv0_HeadVar__1_1;

    {
      analysis____Compare____func_analysis_map_1_0(((MR_Word) analysis__wrapper_arg_1), &analysis__conv0_HeadVar__1_1, ((MR_Word) analysis__wrapper_arg_3), ((MR_Word) analysis__wrapper_arg_4));
    }
    *analysis__wrapper_arg_2 = ((MR_Box) (analysis__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
analysis____Unify____func_id_0_0_10001(
  MR_Box analysis__wrapper_arg_1,
  MR_Box analysis__wrapper_arg_2)
{
  {
    MR_bool analysis__succeeded;

    {
      analysis__succeeded = analysis____Unify____func_id_0_0(((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2));
    }
    return analysis__succeeded;
  }
}

static void MR_CALL 
analysis____Compare____func_id_0_0_10001(
  MR_Box * analysis__wrapper_arg_1,
  MR_Box analysis__wrapper_arg_2,
  MR_Box analysis__wrapper_arg_3)
{
  {
    MR_Word analysis__conv0_HeadVar__1_1;

    {
      analysis____Compare____func_id_0_0(&analysis__conv0_HeadVar__1_1, ((MR_Word) analysis__wrapper_arg_2), ((MR_Word) analysis__wrapper_arg_3));
    }
    *analysis__wrapper_arg_1 = ((MR_Box) (analysis__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
analysis____Unify____imdg_arc_0_0_10001(
  MR_Box analysis__wrapper_arg_1,
  MR_Box analysis__wrapper_arg_2)
{
  {
    MR_bool analysis__succeeded;

    {
      analysis__succeeded = analysis____Unify____imdg_arc_0_0(((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2));
    }
    return analysis__succeeded;
  }
}

static void MR_CALL 
analysis____Compare____imdg_arc_0_0_10001(
  MR_Box * analysis__wrapper_arg_1,
  MR_Box analysis__wrapper_arg_2,
  MR_Box analysis__wrapper_arg_3)
{
  {
    MR_Word analysis__conv0_HeadVar__1_1;

    {
      analysis____Compare____imdg_arc_0_0(&analysis__conv0_HeadVar__1_1, ((MR_Word) analysis__wrapper_arg_2), ((MR_Word) analysis__wrapper_arg_3));
    }
    *analysis__wrapper_arg_1 = ((MR_Box) (analysis__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
analysis____Unify____make_analysis_registry_0_0_10001(
  MR_Box analysis__wrapper_arg_1,
  MR_Box analysis__wrapper_arg_2)
{
  {
    MR_bool analysis__succeeded;

    {
      analysis__succeeded = analysis____Unify____make_analysis_registry_0_0(((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2));
    }
    return analysis__succeeded;
  }
}

static void MR_CALL 
analysis____Compare____make_analysis_registry_0_0_10001(
  MR_Box * analysis__wrapper_arg_1,
  MR_Box analysis__wrapper_arg_2,
  MR_Box analysis__wrapper_arg_3)
{
  {
    MR_Word analysis__conv0_HeadVar__1_1;

    {
      analysis____Compare____make_analysis_registry_0_0(&analysis__conv0_HeadVar__1_1, ((MR_Word) analysis__wrapper_arg_2), ((MR_Word) analysis__wrapper_arg_3));
    }
    *analysis__wrapper_arg_1 = ((MR_Box) (analysis__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
analysis____Unify____module_analysis_map_1_0_10001(
  MR_Box analysis__wrapper_arg_1,
  MR_Box analysis__wrapper_arg_2,
  MR_Box analysis__wrapper_arg_3)
{
  {
    MR_bool analysis__succeeded;

    {
      analysis__succeeded = analysis____Unify____module_analysis_map_1_0(((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2), ((MR_Word) analysis__wrapper_arg_3));
    }
    return analysis__succeeded;
  }
}

static void MR_CALL 
analysis____Compare____module_analysis_map_1_0_10001(
  MR_Box analysis__wrapper_arg_1,
  MR_Box * analysis__wrapper_arg_2,
  MR_Box analysis__wrapper_arg_3,
  MR_Box analysis__wrapper_arg_4)
{
  {
    MR_Word analysis__conv0_HeadVar__1_1;

    {
      analysis____Compare____module_analysis_map_1_0(((MR_Word) analysis__wrapper_arg_1), &analysis__conv0_HeadVar__1_1, ((MR_Word) analysis__wrapper_arg_3), ((MR_Word) analysis__wrapper_arg_4));
    }
    *analysis__wrapper_arg_2 = ((MR_Box) (analysis__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
analysis____Unify____no_func_info_0_0_10001(
  MR_Box analysis__wrapper_arg_1,
  MR_Box analysis__wrapper_arg_2)
{
  {
    MR_bool analysis__succeeded;

    {
      analysis__succeeded = analysis____Unify____no_func_info_0_0();
    }
    return analysis__succeeded;
  }
}

static void MR_CALL 
analysis____Compare____no_func_info_0_0_10001(
  MR_Box * analysis__wrapper_arg_1,
  MR_Box analysis__wrapper_arg_2,
  MR_Box analysis__wrapper_arg_3)
{
  {
    MR_Word analysis__conv0_HeadVar__1_1;

    {
      analysis____Compare____no_func_info_0_0(&analysis__conv0_HeadVar__1_1);
    }
    *analysis__wrapper_arg_1 = ((MR_Box) (analysis__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
analysis____Unify____some_analysis_result_0_0_10001(
  MR_Box analysis__wrapper_arg_1,
  MR_Box analysis__wrapper_arg_2)
{
  {
    MR_bool analysis__succeeded;

    {
      analysis__succeeded = analysis____Unify____some_analysis_result_0_0(((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2));
    }
    return analysis__succeeded;
  }
}

static void MR_CALL 
analysis____Compare____some_analysis_result_0_0_10001(
  MR_Box * analysis__wrapper_arg_1,
  MR_Box analysis__wrapper_arg_2,
  MR_Box analysis__wrapper_arg_3)
{
  {
    MR_Word analysis__conv0_HeadVar__1_1;

    {
      analysis____Compare____some_analysis_result_0_0(&analysis__conv0_HeadVar__1_1, ((MR_Word) analysis__wrapper_arg_2), ((MR_Word) analysis__wrapper_arg_3));
    }
    *analysis__wrapper_arg_1 = ((MR_Box) (analysis__conv0_HeadVar__1_1));
  }
}

static MR_Box MR_CALL 
analysis__ClassMethod_for_analysis__to_term____analysis__any_call__arity0______analysis__to_term_1_1_f_0_10001(
  MR_Box analysis__closure_arg,
  MR_Box analysis__wrapper_arg_1)
{
  {
    MR_Box analysis__wrapper_arg_2;
    MR_Box analysis__closure;
    MR_Word analysis__conv0_Term_3;

    analysis__closure = analysis__closure_arg;
    {
      analysis__conv0_Term_3 = analysis__ClassMethod_for_analysis__to_term____analysis__any_call__arity0______analysis__to_term_1_1_f_0();
    }
    analysis__wrapper_arg_2 = ((MR_Box) (analysis__conv0_Term_3));
    return analysis__wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
analysis__ClassMethod_for_analysis__to_term____analysis__any_call__arity0______analysis__from_term_2_2_p_0_10001(
  MR_Box analysis__closure_arg,
  MR_Box analysis__wrapper_arg_1,
  MR_Box * analysis__wrapper_arg_2)
{
  {
    MR_bool analysis__succeeded;
    MR_Box analysis__closure;

    analysis__closure = analysis__closure_arg;
    {
      analysis__succeeded = analysis__ClassMethod_for_analysis__to_term____analysis__any_call__arity0______analysis__from_term_2_2_p_0(((MR_Word) analysis__wrapper_arg_1));
    }
    return analysis__succeeded;
  }
}

static MR_bool MR_CALL 
analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__any_call__arity0______analysis__more_precise_than_3_3_p_0_10001(
  MR_Box analysis__closure_arg,
  MR_Box analysis__wrapper_arg_1,
  MR_Box analysis__wrapper_arg_2,
  MR_Box analysis__wrapper_arg_3)
{
  {
    MR_bool analysis__succeeded;
    MR_Box analysis__closure;

    analysis__closure = analysis__closure_arg;
    {
      analysis__succeeded = analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__any_call__arity0______analysis__more_precise_than_3_3_p_0();
    }
    return analysis__succeeded;
  }
}

static MR_bool MR_CALL 
analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__any_call__arity0______analysis__equivalent_3_3_p_0_10001(
  MR_Box analysis__closure_arg,
  MR_Box analysis__wrapper_arg_1,
  MR_Box analysis__wrapper_arg_2,
  MR_Box analysis__wrapper_arg_3)
{
  {
    MR_bool analysis__succeeded;
    MR_Box analysis__closure;

    analysis__closure = analysis__closure_arg;
    {
      analysis__succeeded = analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__any_call__arity0______analysis__equivalent_3_3_p_0();
    }
    return analysis__succeeded;
  }
}

static MR_bool MR_CALL 
analysis__IntroducedFrom__pred__clear_imdg_entries_pointing_at_3__1180__1_2_p_0(
  MR_Word analysis__ModuleName_4,
  MR_Word analysis__LambdaHeadVar__1_9)
{
  {
    MR_bool analysis__succeeded;
    MR_Word analysis__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__LambdaHeadVar__1_9, (MR_Integer) 2)));
    MR_Word analysis__TypeClassInfo_for_call_pattern_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__LambdaHeadVar__1_9, (MR_Integer) 0)));
    MR_Box analysis__Var_11 = (MR_hl_field(MR_mktag(0), analysis__LambdaHeadVar__1_9, (MR_Integer) 1));

    {
      analysis__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(analysis__ModuleName_4, analysis__Var_14);
    }
    analysis__succeeded = !(analysis__succeeded);
    return analysis__succeeded;
  }
}

static MR_bool MR_CALL 
analysis__IntroducedFrom__func__update_analysis_registry_5__961__1_1_f_0(
  MR_Word analysis__LambdaHeadVar__1_60,
  MR_Word * analysis__LambdaHeadVar__2_61)
{
  {
    MR_bool analysis__succeeded;
    MR_Word analysis__TypeClassInfo_for_call_pattern_196 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__LambdaHeadVar__1_60, (MR_Integer) 0)));
    MR_Word analysis__TypeInfo_198_198;
    MR_Word analysis__TypeInfo_199_199;
    MR_Word analysis__Var_62;
    MR_Box analysis__Call0_71 = (MR_hl_field(MR_mktag(0), analysis__LambdaHeadVar__1_60, (MR_Integer) 1));
    MR_Word analysis__Var_209;

    *analysis__LambdaHeadVar__2_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__LambdaHeadVar__1_60, (MR_Integer) 2)));
    {
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_196, (MR_Integer) 4, &analysis__TypeInfo_198_198);
    }
    {
      analysis__Var_62 = mercury__univ__univ_1_f_0(analysis__TypeInfo_198_198, analysis__Call0_71);
    }
    {
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_196, (MR_Integer) 4, &analysis__TypeInfo_199_199);
    }
    {
      analysis__Var_209 = mercury__univ__univ_1_f_0(analysis__TypeInfo_199_199, analysis__Call0_71);
    }
    {
      analysis__succeeded = mercury__univ____Unify____univ_0_0(analysis__Var_62, analysis__Var_209);
    }
    return analysis__succeeded;
  }
}

static MR_bool MR_CALL 
analysis__IntroducedFrom__pred__lookup_exactly_matching_result_even_from_invalid_modules__608__1_4_p_0(
  MR_Word analysis__TypeClassInfo_for_analysis_32,
  MR_Box analysis__FuncInfo_10,
  MR_Box analysis__Call_11,
  MR_Word analysis__LambdaHeadVar__1_22)
{
  {
    MR_bool analysis__succeeded;
    MR_Word analysis__TypeClassInfo_for_call_pattern_39;
    MR_Word analysis__TypeClassInfo_for_partial_order_41;
    MR_Box analysis__Var_23 = (MR_hl_field(MR_mktag(0), analysis__LambdaHeadVar__1_22, (MR_Integer) 0));
    MR_Box analysis__Var_30 = (MR_hl_field(MR_mktag(0), analysis__LambdaHeadVar__1_22, (MR_Integer) 1));
    MR_Word analysis__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__LambdaHeadVar__1_22, (MR_Integer) 2)));
    MR_bool MR_CALL (* analysis__func_0)(MR_Box, MR_Box, MR_Box, MR_Box);

    {
      mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_32, (MR_Integer) 1, &analysis__TypeClassInfo_for_call_pattern_39);
    }
    {
      mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_39, (MR_Integer) 1, &analysis__TypeClassInfo_for_partial_order_41);
    }
    analysis__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_partial_order_41, (MR_Integer) 0)), (MR_Integer) 6)));
    {
      analysis__succeeded = analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_partial_order_41), analysis__FuncInfo_10, analysis__Call_11, analysis__Var_23);
    }
    return analysis__succeeded;
  }
}

static MR_Word MR_CALL 
analysis__IntroducedFrom__func__lookup_results_2__540__1_2_f_0(
  MR_Word analysis__TypeClassInfo_for_analysis_29,
  MR_Word analysis__LambdaHeadVar__1_24)
{
  {
    MR_bool analysis__succeeded;
    MR_Word analysis__LambdaHeadVar__2_25;
    MR_Word analysis__TypeClassInfo_for_analysis_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__LambdaHeadVar__1_24, (MR_Integer) 0)));
    MR_Word analysis__TypeInfo_45_45;
    MR_Word analysis__TypeInfo_46_46;
    MR_Word analysis__TypeInfo_48_48;
    MR_Word analysis__TypeInfo_49_49;
    MR_Box analysis__Call_11;
    MR_Box analysis__Answer_13;
    MR_Word analysis__Status_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__LambdaHeadVar__1_24, (MR_Integer) 3)));
    MR_Box analysis__Call0_19 = (MR_hl_field(MR_mktag(0), analysis__LambdaHeadVar__1_24, (MR_Integer) 1));
    MR_Box analysis__Answer0_20 = (MR_hl_field(MR_mktag(0), analysis__LambdaHeadVar__1_24, (MR_Integer) 2));
    MR_Word analysis__Var_26;
    MR_Word analysis__Var_27;

    {
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_43, (MR_Integer) 4, &analysis__TypeInfo_45_45);
    }
    {
      analysis__Var_26 = mercury__univ__univ_1_f_0(analysis__TypeInfo_45_45, analysis__Call0_19);
    }
    {
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_29, (MR_Integer) 4, &analysis__TypeInfo_46_46);
    }
    {
      mercury__univ__det_univ_to_type_2_p_0(analysis__TypeInfo_46_46, analysis__Var_26, &analysis__Call_11);
    }
    {
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_43, (MR_Integer) 5, &analysis__TypeInfo_48_48);
    }
    {
      analysis__Var_27 = mercury__univ__univ_1_f_0(analysis__TypeInfo_48_48, analysis__Answer0_20);
    }
    {
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_29, (MR_Integer) 5, &analysis__TypeInfo_49_49);
    }
    {
      mercury__univ__det_univ_to_type_2_p_0(analysis__TypeInfo_49_49, analysis__Var_27, &analysis__Answer_13);
    }
    {
      analysis__LambdaHeadVar__2_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), analysis__LambdaHeadVar__2_25, 0) = analysis__Call_11;
      MR_hl_field(MR_mktag(0), analysis__LambdaHeadVar__2_25, 1) = analysis__Answer_13;
      MR_hl_field(MR_mktag(0), analysis__LambdaHeadVar__2_25, 2) = ((MR_Box) (analysis__Status_18));
    }
    return analysis__LambdaHeadVar__2_25;
  }
}

static MR_bool MR_CALL 
analysis__IntroducedFrom__func__lookup_requests__683__1_2_f_0(
  MR_Word analysis__TypeClassInfo_for_call_pattern_47,
  MR_Word analysis__LambdaHeadVar__1_23,
  MR_Box * analysis__LambdaHeadVar__2_24)
{
  {
    MR_bool analysis__succeeded;
    MR_Word analysis__TypeClassInfo_for_call_pattern_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__LambdaHeadVar__1_23, (MR_Integer) 0)));
    MR_Word analysis__TypeInfo_61_61;
    MR_Word analysis__TypeInfo_62_62;
    MR_Word analysis__Var_25;
    MR_Box analysis__Call0_27 = (MR_hl_field(MR_mktag(0), analysis__LambdaHeadVar__1_23, (MR_Integer) 1));
    MR_Word analysis__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__LambdaHeadVar__1_23, (MR_Integer) 2)));

    {
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_47, (MR_Integer) 4, &analysis__TypeInfo_61_61);
    }
    {
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_59, (MR_Integer) 4, &analysis__TypeInfo_62_62);
    }
    {
      analysis__Var_25 = mercury__univ__univ_1_f_0(analysis__TypeInfo_62_62, analysis__Call0_27);
    }
    {
      analysis__succeeded = mercury__univ__univ_1_f_2(analysis__TypeInfo_61_61, analysis__LambdaHeadVar__2_24, analysis__Var_25);
    }
    return analysis__succeeded;
  }
}

static MR_bool MR_CALL 
analysis__IntroducedFrom__pred__lookup_matching_results__553__1_4_p_0(
  MR_Word analysis__TypeClassInfo_for_analysis_21,
  MR_Box analysis__FuncInfo_10,
  MR_Box analysis__Call_11,
  MR_Word analysis__LambdaHeadVar__1_17)
{
  {
    MR_bool analysis__succeeded;
    MR_Box analysis__ResultCall_15 = (MR_hl_field(MR_mktag(0), analysis__LambdaHeadVar__1_17, (MR_Integer) 0));
    MR_Box analysis__Var_19 = (MR_hl_field(MR_mktag(0), analysis__LambdaHeadVar__1_17, (MR_Integer) 1));
    MR_Word analysis__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__LambdaHeadVar__1_17, (MR_Integer) 2)));

    {
      MR_Word analysis__TypeClassInfo_for_call_pattern_28;
      MR_Word analysis__TypeClassInfo_for_partial_order_30;
      MR_bool MR_CALL (* analysis__func_0)(MR_Box, MR_Box, MR_Box, MR_Box);

      {
        mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_21, (MR_Integer) 1, &analysis__TypeClassInfo_for_call_pattern_28);
      }
      {
        mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_28, (MR_Integer) 1, &analysis__TypeClassInfo_for_partial_order_30);
      }
      analysis__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_partial_order_30, (MR_Integer) 0)), (MR_Integer) 5)));
      {
        analysis__succeeded = analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_partial_order_30), analysis__FuncInfo_10, analysis__Call_11, analysis__ResultCall_15);
      }
    }
    if (!(analysis__succeeded))
      {
        MR_Word analysis__TypeClassInfo_for_call_pattern_31;
        MR_Word analysis__TypeClassInfo_for_partial_order_33;
        MR_bool MR_CALL (* analysis__func_1)(MR_Box, MR_Box, MR_Box, MR_Box);

        {
          mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_21, (MR_Integer) 1, &analysis__TypeClassInfo_for_call_pattern_31);
        }
        {
          mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_31, (MR_Integer) 1, &analysis__TypeClassInfo_for_partial_order_33);
        }
        analysis__func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_partial_order_33, (MR_Integer) 0)), (MR_Integer) 6)));
        {
          analysis__succeeded = analysis__func_1(((MR_Box) analysis__TypeClassInfo_for_partial_order_33), analysis__FuncInfo_10, analysis__Call_11, analysis__ResultCall_15);
        }
      }
    return analysis__succeeded;
  }
}

static MR_Box MR_CALL 
analysis__IntroducedFrom__func__lookup_existing_call_patterns__480__1_2_f_0(
  MR_Word analysis__TypeClassInfo_for_call_pattern_46,
  MR_Word analysis__LambdaHeadVar__1_24)
{
  {
    MR_bool analysis__succeeded;
    MR_Box analysis__LambdaHeadVar__2_25;
    MR_Word analysis__TypeClassInfo_for_analysis_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__LambdaHeadVar__1_24, (MR_Integer) 0)));
    MR_Word analysis__TypeInfo_60_60;
    MR_Word analysis__TypeInfo_61_61;
    MR_Box analysis__Call0_17 = (MR_hl_field(MR_mktag(0), analysis__LambdaHeadVar__1_24, (MR_Integer) 1));
    MR_Word analysis__Var_26;
    MR_Box analysis___Answer_18 = (MR_hl_field(MR_mktag(0), analysis__LambdaHeadVar__1_24, (MR_Integer) 2));
    MR_Word analysis___Status_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__LambdaHeadVar__1_24, (MR_Integer) 3)));

    {
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_58, (MR_Integer) 4, &analysis__TypeInfo_60_60);
    }
    {
      analysis__Var_26 = mercury__univ__univ_1_f_0(analysis__TypeInfo_60_60, analysis__Call0_17);
    }
    {
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_46, (MR_Integer) 4, &analysis__TypeInfo_61_61);
    }
    {
      mercury__univ__det_univ_to_type_2_p_0(analysis__TypeInfo_61_61, analysis__Var_26, &analysis__LambdaHeadVar__2_25);
    }
    return analysis__LambdaHeadVar__2_25;
  }
}

MR_bool MR_CALL 
analysis__ClassMethod_for_analysis__to_term____analysis__any_call__arity0______analysis__from_term_2_2_p_0(
  MR_Word analysis__Term_3)
{
  {
    MR_bool analysis__succeeded;
    MR_Word analysis__Var_5;
    MR_String analysis__Var_6;
    MR_Word analysis__Var_7;
    MR_Word analysis__Var_4;

    mercury__private_builtin__dummy_var = (MR_Integer) 0;
    analysis__succeeded = ((MR_tag((MR_Word) analysis__Term_3)) == (MR_mktag((MR_Integer) 0)));
    if (analysis__succeeded)
      {
        analysis__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Term_3, (MR_Integer) 0)));
        analysis__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Term_3, (MR_Integer) 1)));
        analysis__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Term_3, (MR_Integer) 2)));
        analysis__succeeded = (analysis__Var_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (analysis__succeeded)
          {
            analysis__succeeded = ((MR_tag((MR_Word) analysis__Var_5)) == (MR_mktag((MR_Integer) 0)));
            if (analysis__succeeded)
              {
                analysis__Var_6 = ((MR_String) (MR_hl_field(MR_mktag(0), analysis__Var_5, (MR_Integer) 0)));
                analysis__succeeded = (strcmp(analysis__Var_6, (MR_String) "any") == 0);
              }
          }
      }
    return analysis__succeeded;
  }
}

MR_Word MR_CALL 
analysis__ClassMethod_for_analysis__to_term____analysis__any_call__arity0______analysis__to_term_1_1_f_0(void)
{
  {
    MR_bool analysis__succeeded;
    MR_Word analysis__Term_3;

    {
      analysis__Term_3 = analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_116_111_95_116_101_114_109_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_116_111_95_116_101_114_109_95_49_95_95_91_49_93_95_48_1_f_0();
    }
    return analysis__Term_3;
  }
}

MR_Word MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_116_111_95_116_101_114_109_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_116_111_95_116_101_114_109_95_49_95_95_91_49_93_95_48_1_f_0(void)
{
  {
    MR_bool analysis__succeeded;
    MR_Word analysis__Term_3;
    MR_Word analysis__Var_8;

    {
      analysis__Var_8 = mercury__term__context_init_0_f_0();
    }
    {
      analysis__Term_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), analysis__Term_3, 0) = ((MR_Box) (&analysis_scalar_common_14[0]));
      MR_hl_field(MR_mktag(0), analysis__Term_3, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), analysis__Term_3, 2) = ((MR_Box) (analysis__Var_8));
    }
    return analysis__Term_3;
  }
}

MR_bool MR_CALL 
analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__any_call__arity0______analysis__equivalent_3_3_p_0(void)
{
  {
    MR_bool analysis__succeeded;

    {
      analysis__succeeded = analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_101_113_117_105_118_97_108_101_110_116_95_51_95_95_91_49_44_32_50_44_32_51_93_95_48_3_p_0();
    }
    return analysis__succeeded;
  }
}

MR_bool MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_101_113_117_105_118_97_108_101_110_116_95_51_95_95_91_49_44_32_50_44_32_51_93_95_48_3_p_0(void)
{
  {
    MR_bool analysis__succeeded;

    {
      analysis__succeeded = mercury__builtin__semidet_succeed_0_p_0();
    }
    return analysis__succeeded;
  }
}

MR_bool MR_CALL 
analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__any_call__arity0______analysis__more_precise_than_3_3_p_0(void)
{
  {
    MR_bool analysis__succeeded;

    {
      analysis__succeeded = analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_109_111_114_101_95_112_114_101_99_105_115_101_95_116_104_97_110_95_51_95_95_91_49_44_32_50_44_32_51_93_95_48_3_p_0();
    }
    return analysis__succeeded;
  }
}

MR_bool MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_109_111_114_101_95_112_114_101_99_105_115_101_95_116_104_97_110_95_51_95_95_91_49_44_32_50_44_32_51_93_95_48_3_p_0(void)
{
  {
    MR_bool analysis__succeeded;

    {
      analysis__succeeded = mercury__builtin__semidet_fail_0_p_0();
    }
    return analysis__succeeded;
  }
}

void MR_CALL 
analysis____Compare____some_analysis_result_0_0(
  MR_Word * analysis__HeadVar__1_1,
  MR_Word analysis__HeadVar__2_2,
  MR_Word analysis__HeadVar__3_3)
{
  {
    MR_bool analysis__succeeded;
    MR_Integer analysis__CastX_12 = (MR_Integer) analysis__HeadVar__2_2;
    MR_Integer analysis__CastY_13 = (MR_Integer) analysis__HeadVar__3_3;

    analysis__succeeded = (analysis__CastX_12 == analysis__CastY_13);
    if (analysis__succeeded)
      *analysis__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word analysis__TypeClassInfo_for_analysis_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word analysis__TypeClassInfo_for_analysis_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 0)));
        MR_Box analysis__ArgX1_4 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 1));
        MR_Box analysis__ArgY1_5 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 1));
        MR_Box analysis__ArgX2_6 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 2));
        MR_Box analysis__ArgY2_7 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 2));
        MR_Word analysis__ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word analysis__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word analysis__Var_10;
        MR_Word analysis__TypeInfo_17_17;
        MR_Word analysis__TypeInfo_18_18;

        {
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_14, (MR_Integer) 4, &analysis__TypeInfo_17_17);
        }
        {
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_15, (MR_Integer) 4, &analysis__TypeInfo_18_18);
        }
        {
          mercury__private_builtin__typed_compare_3_p_0(analysis__TypeInfo_17_17, analysis__TypeInfo_18_18, &analysis__Var_10, analysis__ArgX1_4, analysis__ArgY1_5);
        }
        analysis__succeeded = (analysis__Var_10 == (MR_Integer) 0);
        analysis__succeeded = !(analysis__succeeded);
        if (analysis__succeeded)
          *analysis__HeadVar__1_1 = analysis__Var_10;
        else
          {
            MR_Word analysis__Var_11;
            MR_Word analysis__TypeInfo_20_20;
            MR_Word analysis__TypeInfo_21_21;

            {
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_14, (MR_Integer) 5, &analysis__TypeInfo_20_20);
            }
            {
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_15, (MR_Integer) 5, &analysis__TypeInfo_21_21);
            }
            {
              mercury__private_builtin__typed_compare_3_p_0(analysis__TypeInfo_20_20, analysis__TypeInfo_21_21, &analysis__Var_11, analysis__ArgX2_6, analysis__ArgY2_7);
            }
            analysis__succeeded = (analysis__Var_11 == (MR_Integer) 0);
            analysis__succeeded = !(analysis__succeeded);
            if (analysis__succeeded)
              *analysis__HeadVar__1_1 = analysis__Var_11;
            else
              {
                MR_Integer analysis__Var_23 = (MR_Integer) analysis__ArgX3_8;
                MR_Integer analysis__Var_24 = (MR_Integer) analysis__ArgY3_9;

                {
                  mercury__private_builtin__builtin_compare_int_3_p_0(analysis__HeadVar__1_1, analysis__Var_23, analysis__Var_24);
                }
              }
          }
      }
  }
}

MR_bool MR_CALL 
analysis____Unify____some_analysis_result_0_0(
  MR_Word analysis__HeadVar__1_1,
  MR_Word analysis__HeadVar__2_2)
{
  {
    MR_bool analysis__succeeded;
    MR_Integer analysis__CastX_9 = (MR_Integer) analysis__HeadVar__1_1;
    MR_Integer analysis__CastY_10 = (MR_Integer) analysis__HeadVar__2_2;

    analysis__succeeded = (analysis__CastX_9 == analysis__CastY_10);
    if (analysis__succeeded)
      analysis__succeeded = MR_TRUE;
    else
      {
        MR_Word analysis__TypeClassInfo_for_analysis_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word analysis__TypeClassInfo_for_analysis_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word analysis__TypeInfo_14_14;
        MR_Word analysis__TypeInfo_15_15;
        MR_Word analysis__TypeInfo_17_17;
        MR_Word analysis__TypeInfo_18_18;
        MR_Box analysis__ArgX1_3 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 1));
        MR_Box analysis__ArgY1_4 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 1));
        MR_Box analysis__ArgX2_5 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 2));
        MR_Box analysis__ArgY2_6 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 2));
        MR_Word analysis__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word analysis__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 3)));
        MR_Integer analysis__PolyConst5_16;

        {
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_11, (MR_Integer) 4, &analysis__TypeInfo_14_14);
        }
        {
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_12, (MR_Integer) 4, &analysis__TypeInfo_15_15);
        }
        {
          analysis__succeeded = mercury__private_builtin__typed_unify_2_p_0(analysis__TypeInfo_14_14, analysis__TypeInfo_15_15, analysis__ArgX1_3, analysis__ArgY1_4);
        }
        if (analysis__succeeded)
          {
            analysis__PolyConst5_16 = (MR_Integer) 5;
            {
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_11, analysis__PolyConst5_16, &analysis__TypeInfo_17_17);
            }
            {
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_12, analysis__PolyConst5_16, &analysis__TypeInfo_18_18);
            }
            {
              analysis__succeeded = mercury__private_builtin__typed_unify_2_p_0(analysis__TypeInfo_17_17, analysis__TypeInfo_18_18, analysis__ArgX2_5, analysis__ArgY2_6);
            }
            if (analysis__succeeded)
              analysis__succeeded = (analysis__ArgX3_7 == analysis__ArgY3_8);
          }
      }
    return analysis__succeeded;
  }
}

void MR_CALL 
analysis____Compare____no_func_info_0_0(
  MR_Word * analysis__HeadVar__1_1)
{
  {
    MR_bool analysis__succeeded;

    {
      analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(analysis__HeadVar__1_1);
    }
  }
}

void MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
  MR_Word * analysis__HeadVar__1_1)
{
  {
    MR_bool analysis__succeeded;

    *analysis__HeadVar__1_1 = (MR_Integer) 0;
  }
}

MR_bool MR_CALL 
analysis____Unify____no_func_info_0_0(void)
{
  {
    MR_bool analysis__succeeded;

    {
      analysis__succeeded = analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0();
    }
    return analysis__succeeded;
  }
}

MR_bool MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0(void)
{
  {
    return MR_TRUE;
  }
}

void MR_CALL 
analysis____Compare____module_analysis_map_1_0(
  MR_Word analysis__TypeInfo_for_T_6,
  MR_Word * analysis__HeadVar__1_1,
  MR_Word analysis__HeadVar__2_2,
  MR_Word analysis__HeadVar__3_3)
{
  {
    MR_bool analysis__succeeded;
    MR_Word analysis__TypeInfo_10_10;
    MR_Word analysis__TypeInfo_12_12;
    MR_Word analysis__Cast_HeadVar1_4 = analysis__HeadVar__2_2;
    MR_Word analysis__Cast_HeadVar2_5 = analysis__HeadVar__3_3;

    {
      analysis__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_10_10, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_10_10, 1) = ((MR_Box) (analysis__TypeInfo_for_T_6));
    }
    {
      analysis__TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_12_12, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_12_12, 1) = ((MR_Box) (&analysis__analysis__type_ctor_info_func_id_0));
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_12_12, 2) = ((MR_Box) (analysis__TypeInfo_10_10));
    }
    {
      mercury__tree234____Compare____tree234_2_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, analysis__TypeInfo_12_12, analysis__HeadVar__1_1, analysis__Cast_HeadVar1_4, analysis__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
analysis____Unify____module_analysis_map_1_0(
  MR_Word analysis__TypeInfo_for_T_5,
  MR_Word analysis__HeadVar__1_1,
  MR_Word analysis__HeadVar__2_2)
{
  {
    MR_bool analysis__succeeded;
    MR_Word analysis__TypeInfo_9_9;
    MR_Word analysis__TypeInfo_11_11;
    MR_Word analysis__Cast_HeadVar1_3 = analysis__HeadVar__1_1;
    MR_Word analysis__Cast_HeadVar2_4 = analysis__HeadVar__2_2;

    {
      analysis__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_9_9, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_9_9, 1) = ((MR_Box) (analysis__TypeInfo_for_T_5));
    }
    {
      analysis__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_11_11, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_11_11, 1) = ((MR_Box) (&analysis__analysis__type_ctor_info_func_id_0));
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_11_11, 2) = ((MR_Box) (analysis__TypeInfo_9_9));
    }
    {
      analysis__succeeded = mercury__tree234____Unify____tree234_2_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, analysis__TypeInfo_11_11, analysis__Cast_HeadVar1_3, analysis__Cast_HeadVar2_4);
    }
    return analysis__succeeded;
  }
}

void MR_CALL 
analysis____Compare____make_analysis_registry_0_0(
  MR_Word * analysis__HeadVar__1_1,
  MR_Word analysis__HeadVar__2_2,
  MR_Word analysis__HeadVar__3_3)
{
  {
    MR_bool analysis__succeeded;
    MR_Integer analysis__Cast_HeadVar1_4 = (MR_Integer) analysis__HeadVar__2_2;
    MR_Integer analysis__Cast_HeadVar2_5 = (MR_Integer) analysis__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(analysis__HeadVar__1_1, analysis__Cast_HeadVar1_4, analysis__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
analysis____Unify____make_analysis_registry_0_0(
  MR_Word analysis__HeadVar__2_1,
  MR_Word analysis__HeadVar__2_2)
{
  {
    MR_bool analysis__succeeded = (analysis__HeadVar__2_1 == analysis__HeadVar__2_2);

    return analysis__succeeded;
  }
}

void MR_CALL 
analysis____Compare____imdg_arc_0_0(
  MR_Word * analysis__HeadVar__1_1,
  MR_Word analysis__HeadVar__2_2,
  MR_Word analysis__HeadVar__3_3)
{
  {
    MR_bool analysis__succeeded;
    MR_Integer analysis__CastX_9 = (MR_Integer) analysis__HeadVar__2_2;
    MR_Integer analysis__CastY_10 = (MR_Integer) analysis__HeadVar__3_3;

    analysis__succeeded = (analysis__CastX_9 == analysis__CastY_10);
    if (analysis__succeeded)
      *analysis__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word analysis__TypeClassInfo_for_call_pattern_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word analysis__TypeClassInfo_for_call_pattern_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 0)));
        MR_Box analysis__ArgX1_4 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 1));
        MR_Box analysis__ArgY1_5 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 1));
        MR_Word analysis__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word analysis__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word analysis__Var_8;
        MR_Word analysis__TypeInfo_14_14;
        MR_Word analysis__TypeInfo_15_15;

        {
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_11, (MR_Integer) 4, &analysis__TypeInfo_14_14);
        }
        {
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_12, (MR_Integer) 4, &analysis__TypeInfo_15_15);
        }
        {
          mercury__private_builtin__typed_compare_3_p_0(analysis__TypeInfo_14_14, analysis__TypeInfo_15_15, &analysis__Var_8, analysis__ArgX1_4, analysis__ArgY1_5);
        }
        analysis__succeeded = (analysis__Var_8 == (MR_Integer) 0);
        analysis__succeeded = !(analysis__succeeded);
        if (analysis__succeeded)
          *analysis__HeadVar__1_1 = analysis__Var_8;
        else
          {
            mdbcomp__sym_name____Compare____sym_name_0_0(analysis__HeadVar__1_1, analysis__ArgX2_6, analysis__ArgY2_7);
          }
      }
  }
}

MR_bool MR_CALL 
analysis____Unify____imdg_arc_0_0(
  MR_Word analysis__HeadVar__1_1,
  MR_Word analysis__HeadVar__2_2)
{
  {
    MR_bool analysis__succeeded;
    MR_Integer analysis__CastX_7 = (MR_Integer) analysis__HeadVar__1_1;
    MR_Integer analysis__CastY_8 = (MR_Integer) analysis__HeadVar__2_2;

    analysis__succeeded = (analysis__CastX_7 == analysis__CastY_8);
    if (analysis__succeeded)
      analysis__succeeded = MR_TRUE;
    else
      {
        MR_Word analysis__TypeClassInfo_for_call_pattern_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word analysis__TypeClassInfo_for_call_pattern_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word analysis__TypeInfo_12_12;
        MR_Word analysis__TypeInfo_13_13;
        MR_Box analysis__ArgX1_3 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 1));
        MR_Box analysis__ArgY1_4 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 1));
        MR_Word analysis__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word analysis__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 2)));

        {
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_9, (MR_Integer) 4, &analysis__TypeInfo_12_12);
        }
        {
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_10, (MR_Integer) 4, &analysis__TypeInfo_13_13);
        }
        {
          analysis__succeeded = mercury__private_builtin__typed_unify_2_p_0(analysis__TypeInfo_12_12, analysis__TypeInfo_13_13, analysis__ArgX1_3, analysis__ArgY1_4);
        }
        if (analysis__succeeded)
          {
            analysis__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(analysis__ArgX2_5, analysis__ArgY2_6);
          }
      }
    return analysis__succeeded;
  }
}

void MR_CALL 
analysis____Compare____func_id_0_0(
  MR_Word * analysis__HeadVar__1_1,
  MR_Word analysis__HeadVar__2_2,
  MR_Word analysis__HeadVar__3_3)
{
  {
    MR_bool analysis__succeeded;
    MR_Integer analysis__CastX_15 = (MR_Integer) analysis__HeadVar__2_2;
    MR_Integer analysis__CastY_16 = (MR_Integer) analysis__HeadVar__3_3;

    analysis__succeeded = (analysis__CastX_15 == analysis__CastY_16);
    if (analysis__succeeded)
      *analysis__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word analysis__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word analysis__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 0)));
        MR_String analysis__ArgX2_6 = ((MR_String) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 1)));
        MR_String analysis__ArgY2_7 = ((MR_String) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 1)));
        MR_Integer analysis__ArgX3_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 2)));
        MR_Integer analysis__ArgY3_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 2)));
        MR_Integer analysis__ArgX4_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 3)));
        MR_Integer analysis__ArgY4_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word analysis__Var_12;
        MR_Integer analysis__Var_21 = (MR_Integer) analysis__ArgX1_4;
        MR_Integer analysis__Var_22 = (MR_Integer) analysis__ArgY1_5;

        {
          mercury__private_builtin__builtin_compare_int_3_p_0(&analysis__Var_12, analysis__Var_21, analysis__Var_22);
        }
        analysis__succeeded = (analysis__Var_12 == (MR_Integer) 0);
        analysis__succeeded = !(analysis__succeeded);
        if (analysis__succeeded)
          *analysis__HeadVar__1_1 = analysis__Var_12;
        else
          {
            MR_Word analysis__Var_13;

            {
              mercury__private_builtin__builtin_compare_string_3_p_0(&analysis__Var_13, analysis__ArgX2_6, analysis__ArgY2_7);
            }
            analysis__succeeded = (analysis__Var_13 == (MR_Integer) 0);
            analysis__succeeded = !(analysis__succeeded);
            if (analysis__succeeded)
              *analysis__HeadVar__1_1 = analysis__Var_13;
            else
              {
                MR_Word analysis__Var_14;

                {
                  mercury__private_builtin__builtin_compare_int_3_p_0(&analysis__Var_14, analysis__ArgX3_8, analysis__ArgY3_9);
                }
                analysis__succeeded = (analysis__Var_14 == (MR_Integer) 0);
                analysis__succeeded = !(analysis__succeeded);
                if (analysis__succeeded)
                  *analysis__HeadVar__1_1 = analysis__Var_14;
                else
                  {
                    mercury__private_builtin__builtin_compare_int_3_p_0(analysis__HeadVar__1_1, analysis__ArgX4_10, analysis__ArgY4_11);
                  }
              }
          }
      }
  }
}

MR_bool MR_CALL 
analysis____Unify____func_id_0_0(
  MR_Word analysis__HeadVar__1_1,
  MR_Word analysis__HeadVar__2_2)
{
  {
    MR_bool analysis__succeeded;
    MR_Integer analysis__CastX_11 = (MR_Integer) analysis__HeadVar__1_1;
    MR_Integer analysis__CastY_12 = (MR_Integer) analysis__HeadVar__2_2;

    analysis__succeeded = (analysis__CastX_11 == analysis__CastY_12);
    if (analysis__succeeded)
      analysis__succeeded = MR_TRUE;
    else
      {
        MR_Word analysis__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word analysis__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 0)));
        MR_String analysis__ArgX2_5 = ((MR_String) (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 1)));
        MR_String analysis__ArgY2_6 = ((MR_String) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer analysis__ArgX3_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 2)));
        MR_Integer analysis__ArgY3_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 2)));
        MR_Integer analysis__ArgX4_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 3)));
        MR_Integer analysis__ArgY4_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 3)));

        analysis__succeeded = (analysis__ArgX1_3 == analysis__ArgY1_4);
        if (analysis__succeeded)
          {
            analysis__succeeded = (strcmp(analysis__ArgX2_5, analysis__ArgY2_6) == 0);
            if (analysis__succeeded)
              {
                analysis__succeeded = (analysis__ArgX3_7 == analysis__ArgY3_8);
                if (analysis__succeeded)
                  analysis__succeeded = (analysis__ArgX4_9 == analysis__ArgY4_10);
              }
          }
      }
    return analysis__succeeded;
  }
}

void MR_CALL 
analysis____Compare____func_analysis_map_1_0(
  MR_Word analysis__TypeInfo_for_T_6,
  MR_Word * analysis__HeadVar__1_1,
  MR_Word analysis__HeadVar__2_2,
  MR_Word analysis__HeadVar__3_3)
{
  {
    MR_bool analysis__succeeded;
    MR_Word analysis__TypeInfo_9_9;
    MR_Word analysis__Cast_HeadVar1_4 = analysis__HeadVar__2_2;
    MR_Word analysis__Cast_HeadVar2_5 = analysis__HeadVar__3_3;

    {
      analysis__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_9_9, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_9_9, 1) = ((MR_Box) (analysis__TypeInfo_for_T_6));
    }
    {
      mercury__tree234____Compare____tree234_2_0((MR_Word) &analysis__analysis__type_ctor_info_func_id_0, analysis__TypeInfo_9_9, analysis__HeadVar__1_1, analysis__Cast_HeadVar1_4, analysis__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
analysis____Unify____func_analysis_map_1_0(
  MR_Word analysis__TypeInfo_for_T_5,
  MR_Word analysis__HeadVar__1_1,
  MR_Word analysis__HeadVar__2_2)
{
  {
    MR_bool analysis__succeeded;
    MR_Word analysis__TypeInfo_8_8;
    MR_Word analysis__Cast_HeadVar1_3 = analysis__HeadVar__1_1;
    MR_Word analysis__Cast_HeadVar2_4 = analysis__HeadVar__2_2;

    {
      analysis__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_8_8, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_8_8, 1) = ((MR_Box) (analysis__TypeInfo_for_T_5));
    }
    {
      analysis__succeeded = mercury__tree234____Unify____tree234_2_0((MR_Word) &analysis__analysis__type_ctor_info_func_id_0, analysis__TypeInfo_8_8, analysis__Cast_HeadVar1_3, analysis__Cast_HeadVar2_4);
    }
    return analysis__succeeded;
  }
}

void MR_CALL 
analysis____Compare____fixpoint_type_0_0(
  MR_Word * analysis__HeadVar__1_1,
  MR_Word analysis__HeadVar__2_2,
  MR_Word analysis__HeadVar__3_3)
{
  {
    MR_bool analysis__succeeded;
    MR_Integer analysis__Cast_HeadVar1_4 = (MR_Integer) analysis__HeadVar__2_2;
    MR_Integer analysis__Cast_HeadVar2_5 = (MR_Integer) analysis__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(analysis__HeadVar__1_1, analysis__Cast_HeadVar1_4, analysis__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
analysis____Unify____fixpoint_type_0_0(
  MR_Word analysis__HeadVar__2_1,
  MR_Word analysis__HeadVar__2_2)
{
  {
    MR_bool analysis__succeeded = (analysis__HeadVar__2_1 == analysis__HeadVar__2_2);

    return analysis__succeeded;
  }
}

void MR_CALL 
analysis____Compare____any_call_0_0(
  MR_Word * analysis__HeadVar__1_1)
{
  {
    MR_bool analysis__succeeded;

    {
      analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(analysis__HeadVar__1_1);
    }
  }
}

void MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
  MR_Word * analysis__HeadVar__1_1)
{
  {
    MR_bool analysis__succeeded;

    *analysis__HeadVar__1_1 = (MR_Integer) 0;
  }
}

MR_bool MR_CALL 
analysis____Unify____any_call_0_0(void)
{
  {
    MR_bool analysis__succeeded;

    {
      analysis__succeeded = analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0();
    }
    return analysis__succeeded;
  }
}

MR_bool MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0(void)
{
  {
    return MR_TRUE;
  }
}

void MR_CALL 
analysis____Compare____analysis_type_0_0(
  MR_Word * analysis__HeadVar__1_1,
  MR_Word analysis__HeadVar__2_2,
  MR_Word analysis__HeadVar__3_3)
{
  {
    MR_bool analysis__succeeded;
    MR_Integer analysis__CastX_8 = (MR_Integer) analysis__HeadVar__2_2;
    MR_Integer analysis__CastY_9 = (MR_Integer) analysis__HeadVar__3_3;

    analysis__succeeded = (analysis__CastX_8 == analysis__CastY_9);
    if (analysis__succeeded)
      *analysis__HeadVar__1_1 = (MR_Integer) 0;
    else
      *analysis__HeadVar__1_1 = (MR_Integer) 0;
  }
}

MR_bool MR_CALL 
analysis____Unify____analysis_type_0_0(
  MR_Word analysis__HeadVar__1_1,
  MR_Word analysis__HeadVar__2_2)
{
  {
    MR_bool analysis__succeeded;
    MR_Integer analysis__CastX_7 = (MR_Integer) analysis__HeadVar__1_1;
    MR_Integer analysis__CastY_8 = (MR_Integer) analysis__HeadVar__2_2;

    analysis__succeeded = (analysis__CastX_7 == analysis__CastY_8);
    if (analysis__succeeded)
      {
      }
    else
      {
      }
    analysis__succeeded = MR_TRUE;
    return analysis__succeeded;
  }
}

void MR_CALL 
analysis____Compare____analysis_status_0_0(
  MR_Word * analysis__HeadVar__1_1,
  MR_Word analysis__HeadVar__2_2,
  MR_Word analysis__HeadVar__3_3)
{
  {
    MR_bool analysis__succeeded;
    MR_Integer analysis__Cast_HeadVar1_4 = (MR_Integer) analysis__HeadVar__2_2;
    MR_Integer analysis__Cast_HeadVar2_5 = (MR_Integer) analysis__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(analysis__HeadVar__1_1, analysis__Cast_HeadVar1_4, analysis__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
analysis____Unify____analysis_status_0_0(
  MR_Word analysis__HeadVar__2_1,
  MR_Word analysis__HeadVar__2_2)
{
  {
    MR_bool analysis__succeeded = (analysis__HeadVar__2_1 == analysis__HeadVar__2_2);

    return analysis__succeeded;
  }
}

void MR_CALL 
analysis____Compare____analysis_result_2_0(
  MR_Word analysis__TypeInfo_for_Call_14,
  MR_Word analysis__TypeInfo_for_Answer_15,
  MR_Word * analysis__HeadVar__1_1,
  MR_Word analysis__HeadVar__2_2,
  MR_Word analysis__HeadVar__3_3)
{
  {
    MR_bool analysis__succeeded;
    MR_Integer analysis__CastX_12 = (MR_Integer) analysis__HeadVar__2_2;
    MR_Integer analysis__CastY_13 = (MR_Integer) analysis__HeadVar__3_3;

    analysis__succeeded = (analysis__CastX_12 == analysis__CastY_13);
    if (analysis__succeeded)
      *analysis__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Box analysis__ArgX1_4 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 0));
        MR_Box analysis__ArgY1_5 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 0));
        MR_Box analysis__ArgX2_6 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 1));
        MR_Box analysis__ArgY2_7 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 1));
        MR_Word analysis__ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word analysis__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word analysis__Var_10;

        {
          mercury__builtin__compare_3_p_0(analysis__TypeInfo_for_Call_14, &analysis__Var_10, analysis__ArgX1_4, analysis__ArgY1_5);
        }
        analysis__succeeded = (analysis__Var_10 == (MR_Integer) 0);
        analysis__succeeded = !(analysis__succeeded);
        if (analysis__succeeded)
          *analysis__HeadVar__1_1 = analysis__Var_10;
        else
          {
            MR_Word analysis__Var_11;

            {
              mercury__builtin__compare_3_p_0(analysis__TypeInfo_for_Answer_15, &analysis__Var_11, analysis__ArgX2_6, analysis__ArgY2_7);
            }
            analysis__succeeded = (analysis__Var_11 == (MR_Integer) 0);
            analysis__succeeded = !(analysis__succeeded);
            if (analysis__succeeded)
              *analysis__HeadVar__1_1 = analysis__Var_11;
            else
              {
                MR_Integer analysis__Var_17 = (MR_Integer) analysis__ArgX3_8;
                MR_Integer analysis__Var_18 = (MR_Integer) analysis__ArgY3_9;

                {
                  mercury__private_builtin__builtin_compare_int_3_p_0(analysis__HeadVar__1_1, analysis__Var_17, analysis__Var_18);
                }
              }
          }
      }
  }
}

MR_bool MR_CALL 
analysis____Unify____analysis_result_2_0(
  MR_Word analysis__TypeInfo_for_Call_11,
  MR_Word analysis__TypeInfo_for_Answer_12,
  MR_Word analysis__HeadVar__1_1,
  MR_Word analysis__HeadVar__2_2)
{
  {
    MR_bool analysis__succeeded;
    MR_Integer analysis__CastX_9 = (MR_Integer) analysis__HeadVar__1_1;
    MR_Integer analysis__CastY_10 = (MR_Integer) analysis__HeadVar__2_2;

    analysis__succeeded = (analysis__CastX_9 == analysis__CastY_10);
    if (analysis__succeeded)
      analysis__succeeded = MR_TRUE;
    else
      {
        MR_Box analysis__ArgX1_3 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 0));
        MR_Box analysis__ArgY1_4 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 0));
        MR_Box analysis__ArgX2_5 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 1));
        MR_Box analysis__ArgY2_6 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 1));
        MR_Word analysis__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word analysis__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 2)));

        {
          analysis__succeeded = mercury__builtin__unify_2_p_0(analysis__TypeInfo_for_Call_11, analysis__ArgX1_3, analysis__ArgY1_4);
        }
        if (analysis__succeeded)
          {
            {
              analysis__succeeded = mercury__builtin__unify_2_p_0(analysis__TypeInfo_for_Answer_12, analysis__ArgX2_5, analysis__ArgY2_6);
            }
            if (analysis__succeeded)
              analysis__succeeded = (analysis__ArgX3_7 == analysis__ArgY3_8);
          }
      }
    return analysis__succeeded;
  }
}

void MR_CALL 
analysis____Compare____analysis_request_0_0(
  MR_Word * analysis__HeadVar__1_1,
  MR_Word analysis__HeadVar__2_2,
  MR_Word analysis__HeadVar__3_3)
{
  {
    MR_bool analysis__succeeded;
    MR_Integer analysis__CastX_9 = (MR_Integer) analysis__HeadVar__2_2;
    MR_Integer analysis__CastY_10 = (MR_Integer) analysis__HeadVar__3_3;

    analysis__succeeded = (analysis__CastX_9 == analysis__CastY_10);
    if (analysis__succeeded)
      *analysis__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word analysis__TypeClassInfo_for_call_pattern_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word analysis__TypeClassInfo_for_call_pattern_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 0)));
        MR_Box analysis__ArgX1_4 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 1));
        MR_Box analysis__ArgY1_5 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 1));
        MR_Word analysis__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word analysis__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word analysis__Var_8;
        MR_Word analysis__TypeInfo_14_14;
        MR_Word analysis__TypeInfo_15_15;

        {
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_11, (MR_Integer) 4, &analysis__TypeInfo_14_14);
        }
        {
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_12, (MR_Integer) 4, &analysis__TypeInfo_15_15);
        }
        {
          mercury__private_builtin__typed_compare_3_p_0(analysis__TypeInfo_14_14, analysis__TypeInfo_15_15, &analysis__Var_8, analysis__ArgX1_4, analysis__ArgY1_5);
        }
        analysis__succeeded = (analysis__Var_8 == (MR_Integer) 0);
        analysis__succeeded = !(analysis__succeeded);
        if (analysis__succeeded)
          *analysis__HeadVar__1_1 = analysis__Var_8;
        else
          {
            mdbcomp__sym_name____Compare____sym_name_0_0(analysis__HeadVar__1_1, analysis__ArgX2_6, analysis__ArgY2_7);
          }
      }
  }
}

MR_bool MR_CALL 
analysis____Unify____analysis_request_0_0(
  MR_Word analysis__HeadVar__1_1,
  MR_Word analysis__HeadVar__2_2)
{
  {
    MR_bool analysis__succeeded;
    MR_Integer analysis__CastX_7 = (MR_Integer) analysis__HeadVar__1_1;
    MR_Integer analysis__CastY_8 = (MR_Integer) analysis__HeadVar__2_2;

    analysis__succeeded = (analysis__CastX_7 == analysis__CastY_8);
    if (analysis__succeeded)
      analysis__succeeded = MR_TRUE;
    else
      {
        MR_Word analysis__TypeClassInfo_for_call_pattern_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word analysis__TypeClassInfo_for_call_pattern_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word analysis__TypeInfo_12_12;
        MR_Word analysis__TypeInfo_13_13;
        MR_Box analysis__ArgX1_3 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 1));
        MR_Box analysis__ArgY1_4 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 1));
        MR_Word analysis__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word analysis__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 2)));

        {
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_9, (MR_Integer) 4, &analysis__TypeInfo_12_12);
        }
        {
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_10, (MR_Integer) 4, &analysis__TypeInfo_13_13);
        }
        {
          analysis__succeeded = mercury__private_builtin__typed_unify_2_p_0(analysis__TypeInfo_12_12, analysis__TypeInfo_13_13, analysis__ArgX1_3, analysis__ArgY1_4);
        }
        if (analysis__succeeded)
          {
            analysis__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(analysis__ArgX2_5, analysis__ArgY2_6);
          }
      }
    return analysis__succeeded;
  }
}

void MR_CALL 
analysis____Compare____analysis_name_0_0(
  MR_Word * analysis__HeadVar__1_1,
  MR_String analysis__HeadVar__2_2,
  MR_String analysis__HeadVar__3_3)
{
  {
    MR_bool analysis__succeeded;
    MR_String analysis__Cast_HeadVar1_4 = analysis__HeadVar__2_2;
    MR_String analysis__Cast_HeadVar2_5 = analysis__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_string_3_p_0(analysis__HeadVar__1_1, analysis__Cast_HeadVar1_4, analysis__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
analysis____Unify____analysis_name_0_0(
  MR_String analysis__HeadVar__1_1,
  MR_String analysis__HeadVar__2_2)
{
  {
    MR_bool analysis__succeeded;
    MR_String analysis__Cast_HeadVar1_3 = analysis__HeadVar__1_1;
    MR_String analysis__Cast_HeadVar2_4 = analysis__HeadVar__2_2;

    analysis__succeeded = (strcmp(analysis__Cast_HeadVar1_3, analysis__Cast_HeadVar2_4) == 0);
    return analysis__succeeded;
  }
}

void MR_CALL 
analysis____Compare____analysis_map_1_0(
  MR_Word analysis__TypeInfo_for_T_6,
  MR_Word * analysis__HeadVar__1_1,
  MR_Word analysis__HeadVar__2_2,
  MR_Word analysis__HeadVar__3_3)
{
  {
    MR_bool analysis__succeeded;
    MR_Word analysis__TypeInfo_11_11;
    MR_Word analysis__TypeCtorInfo_12_12 = (MR_Word) &mercury__tree234__tree234__type_ctor_info_tree234_2;
    MR_Word analysis__TypeInfo_13_13;
    MR_Word analysis__TypeInfo_14_14;
    MR_Word analysis__Cast_HeadVar1_4 = analysis__HeadVar__2_2;
    MR_Word analysis__Cast_HeadVar2_5 = analysis__HeadVar__3_3;

    {
      analysis__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_11_11, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_11_11, 1) = ((MR_Box) (analysis__TypeInfo_for_T_6));
    }
    {
      analysis__TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_13_13, 0) = ((MR_Box) (analysis__TypeCtorInfo_12_12));
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_13_13, 1) = ((MR_Box) (&analysis__analysis__type_ctor_info_func_id_0));
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_13_13, 2) = ((MR_Box) (analysis__TypeInfo_11_11));
    }
    {
      analysis__TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_14_14, 0) = ((MR_Box) (analysis__TypeCtorInfo_12_12));
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_14_14, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0));
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_14_14, 2) = ((MR_Box) (analysis__TypeInfo_13_13));
    }
    {
      mercury__tree234____Compare____tree234_2_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, analysis__TypeInfo_14_14, analysis__HeadVar__1_1, analysis__Cast_HeadVar1_4, analysis__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
analysis____Unify____analysis_map_1_0(
  MR_Word analysis__TypeInfo_for_T_5,
  MR_Word analysis__HeadVar__1_1,
  MR_Word analysis__HeadVar__2_2)
{
  {
    MR_bool analysis__succeeded;
    MR_Word analysis__TypeInfo_10_10;
    MR_Word analysis__TypeCtorInfo_11_11 = (MR_Word) &mercury__tree234__tree234__type_ctor_info_tree234_2;
    MR_Word analysis__TypeInfo_12_12;
    MR_Word analysis__TypeInfo_13_13;
    MR_Word analysis__Cast_HeadVar1_3 = analysis__HeadVar__1_1;
    MR_Word analysis__Cast_HeadVar2_4 = analysis__HeadVar__2_2;

    {
      analysis__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_10_10, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_10_10, 1) = ((MR_Box) (analysis__TypeInfo_for_T_5));
    }
    {
      analysis__TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_12_12, 0) = ((MR_Box) (analysis__TypeCtorInfo_11_11));
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_12_12, 1) = ((MR_Box) (&analysis__analysis__type_ctor_info_func_id_0));
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_12_12, 2) = ((MR_Box) (analysis__TypeInfo_10_10));
    }
    {
      analysis__TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_13_13, 0) = ((MR_Box) (analysis__TypeCtorInfo_11_11));
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_13_13, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0));
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_13_13, 2) = ((MR_Box) (analysis__TypeInfo_12_12));
    }
    {
      analysis__succeeded = mercury__tree234____Unify____tree234_2_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, analysis__TypeInfo_13_13, analysis__Cast_HeadVar1_3, analysis__Cast_HeadVar2_4);
    }
    return analysis__succeeded;
  }
}

void MR_CALL 
analysis____Compare____analysis_info_0_0(
  MR_Word * analysis__HeadVar__1_1,
  MR_Word analysis__HeadVar__2_2,
  MR_Word analysis__HeadVar__3_3)
{
  {
    MR_bool analysis__succeeded;
    MR_Integer analysis__CastX_33 = (MR_Integer) analysis__HeadVar__2_2;
    MR_Integer analysis__CastY_34 = (MR_Integer) analysis__HeadVar__3_3;

    analysis__succeeded = (analysis__CastX_33 == analysis__CastY_34);
    if (analysis__succeeded)
      *analysis__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word analysis__TypeClassInfo_for_compiler_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word analysis__TypeClassInfo_for_compiler_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 0)));
        MR_Box analysis__ArgX1_4 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 1));
        MR_Box analysis__ArgY1_5 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 1));
        MR_Word analysis__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word analysis__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word analysis__ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word analysis__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word analysis__ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word analysis__ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 4)));
        MR_Word analysis__ArgX5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word analysis__ArgY5_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 5)));
        MR_Word analysis__ArgX6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 6)));
        MR_Word analysis__ArgY6_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 6)));
        MR_Word analysis__ArgX7_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 7)));
        MR_Word analysis__ArgY7_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 7)));
        MR_Word analysis__ArgX8_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 8)));
        MR_Word analysis__ArgY8_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 8)));
        MR_Word analysis__ArgX9_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 9)));
        MR_Word analysis__ArgY9_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 9)));
        MR_Word analysis__ArgX10_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 10)));
        MR_Word analysis__ArgY10_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 10)));
        MR_Word analysis__Var_24;
        MR_Word analysis__TypeInfo_38_38;
        MR_Word analysis__TypeInfo_39_39;

        {
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_compiler_35, (MR_Integer) 1, &analysis__TypeInfo_38_38);
        }
        {
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_compiler_36, (MR_Integer) 1, &analysis__TypeInfo_39_39);
        }
        {
          mercury__private_builtin__typed_compare_3_p_0(analysis__TypeInfo_38_38, analysis__TypeInfo_39_39, &analysis__Var_24, analysis__ArgX1_4, analysis__ArgY1_5);
        }
        analysis__succeeded = (analysis__Var_24 == (MR_Integer) 0);
        analysis__succeeded = !(analysis__succeeded);
        if (analysis__succeeded)
          *analysis__HeadVar__1_1 = analysis__Var_24;
        else
          {
            MR_Word analysis__Var_25;

            {
              mdbcomp__sym_name____Compare____sym_name_0_0(&analysis__Var_25, analysis__ArgX2_6, analysis__ArgY2_7);
            }
            analysis__succeeded = (analysis__Var_25 == (MR_Integer) 0);
            analysis__succeeded = !(analysis__succeeded);
            if (analysis__succeeded)
              *analysis__HeadVar__1_1 = analysis__Var_25;
            else
              {
                MR_Word analysis__Var_26;
                MR_Integer analysis__Var_49 = (MR_Integer) analysis__ArgX3_8;
                MR_Integer analysis__Var_50 = (MR_Integer) analysis__ArgY3_9;

                {
                  mercury__private_builtin__builtin_compare_int_3_p_0(&analysis__Var_26, analysis__Var_49, analysis__Var_50);
                }
                analysis__succeeded = (analysis__Var_26 == (MR_Integer) 0);
                analysis__succeeded = !(analysis__succeeded);
                if (analysis__succeeded)
                  *analysis__HeadVar__1_1 = analysis__Var_26;
                else
                  {
                    MR_Word analysis__Var_27;

                    {
                      mercury__builtin__compare_3_p_0((MR_Word) &analysis_scalar_common_1[3], &analysis__Var_27, ((MR_Box) (analysis__ArgX4_10)), ((MR_Box) (analysis__ArgY4_11)));
                    }
                    analysis__succeeded = (analysis__Var_27 == (MR_Integer) 0);
                    analysis__succeeded = !(analysis__succeeded);
                    if (analysis__succeeded)
                      *analysis__HeadVar__1_1 = analysis__Var_27;
                    else
                      {
                        MR_Word analysis__Var_28;

                        {
                          mercury__builtin__compare_3_p_0((MR_Word) &analysis_scalar_common_2[6], &analysis__Var_28, ((MR_Box) (analysis__ArgX5_12)), ((MR_Box) (analysis__ArgY5_13)));
                        }
                        analysis__succeeded = (analysis__Var_28 == (MR_Integer) 0);
                        analysis__succeeded = !(analysis__succeeded);
                        if (analysis__succeeded)
                          *analysis__HeadVar__1_1 = analysis__Var_28;
                        else
                          {
                            MR_Word analysis__Var_29;

                            {
                              mercury__builtin__compare_3_p_0((MR_Word) &analysis_scalar_common_2[7], &analysis__Var_29, ((MR_Box) (analysis__ArgX6_14)), ((MR_Box) (analysis__ArgY6_15)));
                            }
                            analysis__succeeded = (analysis__Var_29 == (MR_Integer) 0);
                            analysis__succeeded = !(analysis__succeeded);
                            if (analysis__succeeded)
                              *analysis__HeadVar__1_1 = analysis__Var_29;
                            else
                              {
                                MR_Word analysis__Var_30;

                                {
                                  mercury__builtin__compare_3_p_0((MR_Word) &analysis_scalar_common_2[8], &analysis__Var_30, ((MR_Box) (analysis__ArgX7_16)), ((MR_Box) (analysis__ArgY7_17)));
                                }
                                analysis__succeeded = (analysis__Var_30 == (MR_Integer) 0);
                                analysis__succeeded = !(analysis__succeeded);
                                if (analysis__succeeded)
                                  *analysis__HeadVar__1_1 = analysis__Var_30;
                                else
                                  {
                                    MR_Word analysis__Var_31;

                                    {
                                      mercury__builtin__compare_3_p_0((MR_Word) &analysis_scalar_common_2[3], &analysis__Var_31, ((MR_Box) (analysis__ArgX8_18)), ((MR_Box) (analysis__ArgY8_19)));
                                    }
                                    analysis__succeeded = (analysis__Var_31 == (MR_Integer) 0);
                                    analysis__succeeded = !(analysis__succeeded);
                                    if (analysis__succeeded)
                                      *analysis__HeadVar__1_1 = analysis__Var_31;
                                    else
                                      {
                                        MR_Word analysis__Var_32;

                                        {
                                          mercury__builtin__compare_3_p_0((MR_Word) &analysis_scalar_common_2[9], &analysis__Var_32, ((MR_Box) (analysis__ArgX9_20)), ((MR_Box) (analysis__ArgY9_21)));
                                        }
                                        analysis__succeeded = (analysis__Var_32 == (MR_Integer) 0);
                                        analysis__succeeded = !(analysis__succeeded);
                                        if (analysis__succeeded)
                                          *analysis__HeadVar__1_1 = analysis__Var_32;
                                        else
                                          {
                                            {
                                              mercury__builtin__compare_3_p_0((MR_Word) &analysis_scalar_common_2[9], analysis__HeadVar__1_1, ((MR_Box) (analysis__ArgX10_22)), ((MR_Box) (analysis__ArgY10_23)));
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

MR_bool MR_CALL 
analysis____Unify____analysis_info_0_0(
  MR_Word analysis__HeadVar__1_1,
  MR_Word analysis__HeadVar__2_2)
{
  {
    MR_bool analysis__succeeded;
    MR_Integer analysis__CastX_23 = (MR_Integer) analysis__HeadVar__1_1;
    MR_Integer analysis__CastY_24 = (MR_Integer) analysis__HeadVar__2_2;

    analysis__succeeded = (analysis__CastX_23 == analysis__CastY_24);
    if (analysis__succeeded)
      analysis__succeeded = MR_TRUE;
    else
      {
        MR_Word analysis__TypeClassInfo_for_compiler_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word analysis__TypeClassInfo_for_compiler_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word analysis__TypeInfo_28_28;
        MR_Word analysis__TypeInfo_29_29;
        MR_Word analysis__TypeInfo_31_31;
        MR_Word analysis__TypeInfo_32_32;
        MR_Word analysis__TypeInfo_33_33;
        MR_Word analysis__TypeInfo_34_34;
        MR_Word analysis__TypeInfo_35_35;
        MR_Word analysis__TypeInfo_36_36;
        MR_Word analysis__TypeInfo_37_37;
        MR_Box analysis__ArgX1_3 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 1));
        MR_Box analysis__ArgY1_4 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 1));
        MR_Word analysis__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word analysis__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word analysis__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word analysis__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word analysis__ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 4)));
        MR_Word analysis__ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word analysis__ArgX5_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 5)));
        MR_Word analysis__ArgY5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word analysis__ArgX6_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 6)));
        MR_Word analysis__ArgY6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 6)));
        MR_Word analysis__ArgX7_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 7)));
        MR_Word analysis__ArgY7_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 7)));
        MR_Word analysis__ArgX8_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 8)));
        MR_Word analysis__ArgY8_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 8)));
        MR_Word analysis__ArgX9_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 9)));
        MR_Word analysis__ArgY9_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 9)));
        MR_Word analysis__ArgX10_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__1_1, (MR_Integer) 10)));
        MR_Word analysis__ArgY10_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__2_2, (MR_Integer) 10)));

        {
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_compiler_25, (MR_Integer) 1, &analysis__TypeInfo_28_28);
        }
        {
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_compiler_26, (MR_Integer) 1, &analysis__TypeInfo_29_29);
        }
        {
          analysis__succeeded = mercury__private_builtin__typed_unify_2_p_0(analysis__TypeInfo_28_28, analysis__TypeInfo_29_29, analysis__ArgX1_3, analysis__ArgY1_4);
        }
        if (analysis__succeeded)
          {
            {
              analysis__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(analysis__ArgX2_5, analysis__ArgY2_6);
            }
            if (analysis__succeeded)
              {
                analysis__succeeded = (analysis__ArgX3_7 == analysis__ArgY3_8);
                if (analysis__succeeded)
                  {
                    analysis__TypeInfo_31_31 = (MR_Word) &analysis_scalar_common_1[3];
                    {
                      analysis__succeeded = mercury__builtin__unify_2_p_0(analysis__TypeInfo_31_31, ((MR_Box) (analysis__ArgX4_9)), ((MR_Box) (analysis__ArgY4_10)));
                    }
                    if (analysis__succeeded)
                      {
                        analysis__TypeInfo_32_32 = (MR_Word) &analysis_scalar_common_2[6];
                        {
                          analysis__succeeded = mercury__builtin__unify_2_p_0(analysis__TypeInfo_32_32, ((MR_Box) (analysis__ArgX5_11)), ((MR_Box) (analysis__ArgY5_12)));
                        }
                        if (analysis__succeeded)
                          {
                            analysis__TypeInfo_33_33 = (MR_Word) &analysis_scalar_common_2[7];
                            {
                              analysis__succeeded = mercury__builtin__unify_2_p_0(analysis__TypeInfo_33_33, ((MR_Box) (analysis__ArgX6_13)), ((MR_Box) (analysis__ArgY6_14)));
                            }
                            if (analysis__succeeded)
                              {
                                analysis__TypeInfo_34_34 = (MR_Word) &analysis_scalar_common_2[8];
                                {
                                  analysis__succeeded = mercury__builtin__unify_2_p_0(analysis__TypeInfo_34_34, ((MR_Box) (analysis__ArgX7_15)), ((MR_Box) (analysis__ArgY7_16)));
                                }
                                if (analysis__succeeded)
                                  {
                                    analysis__TypeInfo_35_35 = (MR_Word) &analysis_scalar_common_2[3];
                                    {
                                      analysis__succeeded = mercury__builtin__unify_2_p_0(analysis__TypeInfo_35_35, ((MR_Box) (analysis__ArgX8_17)), ((MR_Box) (analysis__ArgY8_18)));
                                    }
                                    if (analysis__succeeded)
                                      {
                                        analysis__TypeInfo_36_36 = (MR_Word) &analysis_scalar_common_2[9];
                                        {
                                          analysis__succeeded = mercury__builtin__unify_2_p_0(analysis__TypeInfo_36_36, ((MR_Box) (analysis__ArgX9_19)), ((MR_Box) (analysis__ArgY9_20)));
                                        }
                                        if (analysis__succeeded)
                                          {
                                            analysis__TypeInfo_37_37 = (MR_Word) &analysis_scalar_common_2[9];
                                            {
                                              analysis__succeeded = mercury__builtin__unify_2_p_0(analysis__TypeInfo_37_37, ((MR_Box) (analysis__ArgX10_21)), ((MR_Box) (analysis__ArgY10_22)));
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
    return analysis__succeeded;
  }
}

MR_bool MR_CALL 
analysis__from_term_2_p_0(
  MR_Word analysis__TypeClassInfo_for_to_term_3,
  MR_Word analysis__HeadVar__1_1,
  MR_Box * analysis__HeadVar__2_2)
{
  {
    MR_bool analysis__succeeded;
    MR_bool MR_CALL (* analysis__func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_to_term_3, (MR_Integer) 0)), (MR_Integer) 6)));

    {
      analysis__succeeded = analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_to_term_3), ((MR_Box) (analysis__HeadVar__1_1)), analysis__HeadVar__2_2);
    }
    return analysis__succeeded;
  }
}

MR_Word MR_CALL 
analysis__to_term_1_f_0(
  MR_Word analysis__TypeClassInfo_for_to_term_3,
  MR_Box analysis__HeadVar__1_1)
{
  {
    MR_bool analysis__succeeded;
    MR_Word analysis__HeadVar__2_2;
    MR_Box MR_CALL (* analysis__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_to_term_3, (MR_Integer) 0)), (MR_Integer) 5)));
    MR_Box analysis__conv1_HeadVar__2_2;

    {
      analysis__conv1_HeadVar__2_2 = analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_to_term_3), analysis__HeadVar__1_1);
    }
    analysis__HeadVar__2_2 = ((MR_Word) analysis__conv1_HeadVar__2_2);
    return analysis__HeadVar__2_2;
  }
}

MR_Box MR_CALL 
analysis__top_2_f_0(
  MR_Word analysis__TypeClassInfo_for_analysis_4,
  MR_Box analysis__HeadVar__1_1)
{
  {
    MR_bool analysis__succeeded;
    MR_Box analysis__HeadVar__3_3;
    MR_Box MR_CALL (* analysis__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_analysis_4, (MR_Integer) 0)), (MR_Integer) 9)));

    {
      analysis__HeadVar__3_3 = analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_analysis_4), analysis__HeadVar__1_1);
    }
    return analysis__HeadVar__3_3;
  }
}

MR_Box MR_CALL 
analysis__bottom_2_f_0(
  MR_Word analysis__TypeClassInfo_for_analysis_4,
  MR_Box analysis__HeadVar__1_1)
{
  {
    MR_bool analysis__succeeded;
    MR_Box analysis__HeadVar__3_3;
    MR_Box MR_CALL (* analysis__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_analysis_4, (MR_Integer) 0)), (MR_Integer) 8)));

    {
      analysis__HeadVar__3_3 = analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_analysis_4), analysis__HeadVar__1_1);
    }
    return analysis__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
analysis__preferred_fixpoint_type_2_f_0(
  MR_Word analysis__TypeClassInfo_for_analysis_4)
{
  {
    MR_bool analysis__succeeded;
    MR_Word analysis__HeadVar__3_3;
    MR_Box MR_CALL (* analysis__func_0)(MR_Box) = ((MR_Box MR_CALL (*)(MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_analysis_4, (MR_Integer) 0)), (MR_Integer) 7)));
    MR_Box analysis__conv1_HeadVar__3_3;

    {
      analysis__conv1_HeadVar__3_3 = analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_analysis_4));
    }
    analysis__HeadVar__3_3 = ((MR_Word) analysis__conv1_HeadVar__3_3);
    return analysis__HeadVar__3_3;
  }
}

MR_Integer MR_CALL 
analysis__analysis_version_number_2_f_0(
  MR_Word analysis__TypeClassInfo_for_analysis_4)
{
  {
    MR_bool analysis__succeeded;
    MR_Integer analysis__HeadVar__3_3;
    MR_Box MR_CALL (* analysis__func_0)(MR_Box) = ((MR_Box MR_CALL (*)(MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_analysis_4, (MR_Integer) 0)), (MR_Integer) 6)));
    MR_Box analysis__conv1_HeadVar__3_3;

    {
      analysis__conv1_HeadVar__3_3 = analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_analysis_4));
    }
    analysis__HeadVar__3_3 = ((MR_Integer) analysis__conv1_HeadVar__3_3);
    return analysis__HeadVar__3_3;
  }
}

MR_String MR_CALL 
analysis__analysis_name_2_f_0(
  MR_Word analysis__TypeClassInfo_for_analysis_4)
{
  {
    MR_bool analysis__succeeded;
    MR_String analysis__HeadVar__3_3;
    MR_Box MR_CALL (* analysis__func_0)(MR_Box) = ((MR_Box MR_CALL (*)(MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_analysis_4, (MR_Integer) 0)), (MR_Integer) 5)));
    MR_Box analysis__conv1_HeadVar__3_3;

    {
      analysis__conv1_HeadVar__3_3 = analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_analysis_4));
    }
    analysis__HeadVar__3_3 = ((MR_String) analysis__conv1_HeadVar__3_3);
    return analysis__HeadVar__3_3;
  }
}

void MR_CALL 
analysis__module_name_to_read_file_name_7_p_0(
  MR_Word analysis__TypeClassInfo_for_compiler_8,
  MR_Box analysis__HeadVar__1_1,
  MR_Word analysis__HeadVar__2_2,
  MR_Word analysis__HeadVar__3_3,
  MR_String analysis__HeadVar__4_4,
  MR_Word * analysis__HeadVar__5_5)
{
  {
    MR_bool analysis__succeeded;
    void MR_CALL (* analysis__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_compiler_8, (MR_Integer) 0)), (MR_Integer) 8)));
    MR_Box analysis__conv2_HeadVar__5_5;
    MR_Box analysis__conv1_HeadVar__7_7;

    {
      analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_compiler_8), analysis__HeadVar__1_1, ((MR_Box) (analysis__HeadVar__2_2)), ((MR_Box) (analysis__HeadVar__3_3)), ((MR_Box) (analysis__HeadVar__4_4)), &analysis__conv2_HeadVar__5_5, ((MR_Box) ((MR_Integer) 0)), &analysis__conv1_HeadVar__7_7);
    }
    *analysis__HeadVar__5_5 = ((MR_Word) analysis__conv2_HeadVar__5_5);
  }
}

static void MR_CALL 
analysis__analyses_3_p_1_1(
  void * analysis__env_ptr_arg)
{
  {
    struct analysis__analyses_3_p_1_env_0_s * analysis__env_ptr = (struct analysis__analyses_3_p_1_env_0_s *) analysis__env_ptr_arg;

    *((analysis__env_ptr)->analysis__analyses_3_p_1_env_0__HeadVar__2_2) = ((MR_String) (analysis__env_ptr)->analysis__analyses_3_p_1_env_0__conv2_HeadVar__2_2);
    *((analysis__env_ptr)->analysis__analyses_3_p_1_env_0__HeadVar__3_3) = ((MR_Word) (analysis__env_ptr)->analysis__analyses_3_p_1_env_0__conv1_HeadVar__3_3);
    {
      ((analysis__env_ptr)->analysis__analyses_3_p_1_env_0__cont)((analysis__env_ptr)->analysis__analyses_3_p_1_env_0__cont_env_ptr);
    }
  }
}

void MR_CALL 
analysis__analyses_3_p_1(
  MR_Word analysis__TypeClassInfo_for_compiler_4,
  MR_Box analysis__HeadVar__1_1,
  MR_String * analysis__HeadVar__2_2,
  MR_Word * analysis__HeadVar__3_3,
  MR_Cont analysis__cont,
  void * analysis__cont_env_ptr)
{
  {
    struct analysis__analyses_3_p_1_env_0_s analysis__env;

    (analysis__env).analysis__analyses_3_p_1_env_0__HeadVar__2_2 = analysis__HeadVar__2_2;
    (analysis__env).analysis__analyses_3_p_1_env_0__HeadVar__3_3 = analysis__HeadVar__3_3;
    (analysis__env).analysis__analyses_3_p_1_env_0__cont = analysis__cont;
    (analysis__env).analysis__analyses_3_p_1_env_0__cont_env_ptr = analysis__cont_env_ptr;
    {
      MR_bool analysis__succeeded;
      void MR_CALL (* analysis__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_compiler_4, (MR_Integer) 0)), (MR_Integer) 7)));

      {
        analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_compiler_4), analysis__HeadVar__1_1, &(analysis__env).analysis__analyses_3_p_1_env_0__conv2_HeadVar__2_2, &(analysis__env).analysis__analyses_3_p_1_env_0__conv1_HeadVar__3_3, analysis__analyses_3_p_1_1, &analysis__env);
      }
    }
  }
}

MR_bool MR_CALL 
analysis__analyses_3_p_0(
  MR_Word analysis__TypeClassInfo_for_compiler_4,
  MR_Box analysis__HeadVar__1_1,
  MR_String analysis__HeadVar__2_2,
  MR_Word * analysis__HeadVar__3_3)
{
  {
    MR_bool analysis__succeeded;
    MR_bool MR_CALL (* analysis__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_compiler_4, (MR_Integer) 0)), (MR_Integer) 6)));
    MR_Box analysis__conv1_HeadVar__3_3;

    {
      analysis__succeeded = analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_compiler_4), analysis__HeadVar__1_1, ((MR_Box) (analysis__HeadVar__2_2)), &analysis__conv1_HeadVar__3_3);
    }
    if (analysis__succeeded)
      {
        *analysis__HeadVar__3_3 = ((MR_Word) analysis__conv1_HeadVar__3_3);
        analysis__succeeded = MR_TRUE;
      }
    return analysis__succeeded;
  }
}

MR_String MR_CALL 
analysis__compiler_name_1_f_0(
  MR_Word analysis__TypeClassInfo_for_compiler_3,
  MR_Box analysis__HeadVar__1_1)
{
  {
    MR_bool analysis__succeeded;
    MR_String analysis__HeadVar__2_2;
    MR_Box MR_CALL (* analysis__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_compiler_3, (MR_Integer) 0)), (MR_Integer) 5)));
    MR_Box analysis__conv1_HeadVar__2_2;

    {
      analysis__conv1_HeadVar__2_2 = analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_compiler_3), analysis__HeadVar__1_1);
    }
    analysis__HeadVar__2_2 = ((MR_String) analysis__conv1_HeadVar__2_2);
    return analysis__HeadVar__2_2;
  }
}

void MR_CALL 
analysis__set_debug_analysis_3_p_0(
  MR_Word analysis__X_4)
{
  {
    MR_bool analysis__succeeded;

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

	X =  analysis__X_4 ;
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
}

void MR_CALL 
analysis__get_debug_analysis_3_p_0(
  MR_Word * analysis__X_4)
{
  {
    MR_bool analysis__succeeded;

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
	 *analysis__X_4  = X;
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
}

void MR_CALL 
analysis__set_debug_analysis_1_p_0(
  MR_Word analysis__X_2)
{
  {
    MR_bool analysis__succeeded;

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

	X =  analysis__X_2 ;
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
}

void MR_CALL 
analysis__get_debug_analysis_1_p_0(
  MR_Word * analysis__X_2)
{
  {
    MR_bool analysis__succeeded;

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
	 *analysis__X_2  = X;
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
}

void MR_CALL 
analysis__unsafe_set_debug_analysis_1_p_0(
  MR_Word analysis__X_1)
{
  {
    MR_bool analysis__succeeded;

{
#define MR_PROC_LABEL analysis__unsafe_set_debug_analysis_1_p_0

	MR_Word X;

	X =  analysis__X_1 ;
		{
analysis__mutable_variable_debug_analysis = X;


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
analysis__unsafe_get_debug_analysis_1_p_0(
  MR_Word * analysis__X_1)
{
  {
    MR_bool analysis__succeeded;

{
#define MR_PROC_LABEL analysis__unsafe_get_debug_analysis_1_p_0

	MR_Word X;

		{
X = analysis__mutable_variable_debug_analysis;


		;}
#undef MR_PROC_LABEL
	 *analysis__X_1  = X;
}
  }
}

void MR_CALL 
analysis__unlock_debug_analysis_0_p_0(void)
{
  {
    MR_bool analysis__succeeded;

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
}

void MR_CALL 
analysis__lock_debug_analysis_0_p_0(void)
{
  {
    MR_bool analysis__succeeded;

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
}

void MR_CALL 
analysis__initialise_mutable_debug_analysis_0_p_0(void)
{
  {
    MR_bool analysis__succeeded;

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

	X =  (MR_Integer) 0 ;
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
}

void MR_CALL 
analysis__pre_initialise_mutable_debug_analysis_0_p_0(void)
{
  {
    MR_bool analysis__succeeded;

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
}

void MR_CALL 
analysis__debug_msg_3_p_0(
  MR_Word analysis__P_4)
{
  {
    MR_bool analysis__succeeded;
    MR_Word analysis__Debug_6;

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
	 analysis__Debug_6  = X;
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
    switch (analysis__Debug_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          void MR_CALL (* analysis__func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), analysis__P_4, (MR_Integer) 1)));
          MR_Box analysis__conv1_STATE_VARIABLE_IO_8;

          {
            analysis__func_0(((MR_Box) analysis__P_4), ((MR_Box) ((MR_Integer) 0)), &analysis__conv1_STATE_VARIABLE_IO_8);
          }
        }
        break;
    }
  }
}

MR_Word MR_CALL 
analysis__lub_result_statuses_4_2_f_0(
  MR_Word analysis__Result_4,
  MR_Word analysis__Acc_5)
{
  {
    MR_bool analysis__succeeded;
    MR_Word analysis__HeadVar__3_3;
    MR_Word analysis__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Result_4, (MR_Integer) 3)));
    MR_Word analysis__TypeClassInfo_for_analysis_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Result_4, (MR_Integer) 0)));
    MR_Box analysis__Var_7 = (MR_hl_field(MR_mktag(0), analysis__Result_4, (MR_Integer) 1));
    MR_Box analysis__Var_8 = (MR_hl_field(MR_mktag(0), analysis__Result_4, (MR_Integer) 2));

    {
      analysis__HeadVar__3_3 = analysis__lub_2_f_0(analysis__Var_6, analysis__Acc_5);
    }
    return analysis__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
analysis__lub_result_statuses_3_3_f_0(
  MR_Word analysis___FuncId_5,
  MR_Word analysis__Results_6,
  MR_Word analysis__Acc_7)
{
  {
    MR_bool analysis__succeeded;
    MR_Word analysis__HeadVar__4_4;

    {
      analysis__HeadVar__4_4 = analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_117_98_95_114_101_115_117_108_116_95_115_116_97_116_117_115_101_115_95_51_95_95_91_49_93_95_48_3_f_0(analysis__Results_6, analysis__Acc_7);
    }
    return analysis__HeadVar__4_4;
  }
}

static MR_Box MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_117_98_95_114_101_115_117_108_116_95_115_116_97_116_117_115_101_115_95_51_95_95_91_49_93_95_48_3_f_0_1(
  MR_Box analysis__closure_arg,
  MR_Box analysis__wrapper_arg_1,
  MR_Box analysis__wrapper_arg_2)
{
  {
    MR_Box analysis__wrapper_arg_3;
    MR_Box analysis__closure = analysis__closure_arg;
    MR_Word analysis__conv0_HeadVar__3_3;

    {
      analysis__conv0_HeadVar__3_3 = analysis__lub_result_statuses_4_2_f_0(((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2));
    }
    analysis__wrapper_arg_3 = ((MR_Box) (analysis__conv0_HeadVar__3_3));
    return analysis__wrapper_arg_3;
  }
}

MR_Word MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_117_98_95_114_101_115_117_108_116_95_115_116_97_116_117_115_101_115_95_51_95_95_91_49_93_95_48_3_f_0(
  MR_Word analysis__Results_6,
  MR_Word analysis__Acc_7)
{
  {
    MR_bool analysis__succeeded;
    MR_Word analysis__HeadVar__4_4;
    MR_Box analysis__conv1_HeadVar__4_4;

    {
      analysis__conv1_HeadVar__4_4 = mercury__list__foldl_3_f_0((MR_Word) &analysis__analysis__type_ctor_info_some_analysis_result_0, (MR_Word) &analysis__analysis__type_ctor_info_analysis_status_0, (MR_Word) &analysis_scalar_common_2[15], analysis__Results_6, ((MR_Box) (analysis__Acc_7)));
    }
    analysis__HeadVar__4_4 = ((MR_Word) analysis__conv1_HeadVar__4_4);
    return analysis__HeadVar__4_4;
  }
}

MR_Word MR_CALL 
analysis__lub_result_statuses_2_3_f_0(
  MR_String analysis___AnalysisName_5,
  MR_Word analysis__FuncMap_6,
  MR_Word analysis__Acc_7)
{
  {
    MR_bool analysis__succeeded;
    MR_Word analysis__HeadVar__4_4;

    {
      analysis__HeadVar__4_4 = analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_117_98_95_114_101_115_117_108_116_95_115_116_97_116_117_115_101_115_95_50_95_95_91_49_93_95_48_3_f_0(analysis__FuncMap_6, analysis__Acc_7);
    }
    return analysis__HeadVar__4_4;
  }
}

static MR_Box MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_117_98_95_114_101_115_117_108_116_95_115_116_97_116_117_115_101_115_95_50_95_95_91_49_93_95_48_3_f_0_1(
  MR_Box analysis__closure_arg,
  MR_Box analysis__wrapper_arg_1,
  MR_Box analysis__wrapper_arg_2,
  MR_Box analysis__wrapper_arg_3)
{
  {
    MR_Box analysis__wrapper_arg_4;
    MR_Box analysis__closure = analysis__closure_arg;
    MR_Word analysis__conv0_HeadVar__4_4;

    {
      analysis__conv0_HeadVar__4_4 = analysis__lub_result_statuses_3_3_f_0(((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2), ((MR_Word) analysis__wrapper_arg_3));
    }
    analysis__wrapper_arg_4 = ((MR_Box) (analysis__conv0_HeadVar__4_4));
    return analysis__wrapper_arg_4;
  }
}

MR_Word MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_117_98_95_114_101_115_117_108_116_95_115_116_97_116_117_115_101_115_95_50_95_95_91_49_93_95_48_3_f_0(
  MR_Word analysis__FuncMap_6,
  MR_Word analysis__Acc_7)
{
  {
    MR_bool analysis__succeeded;
    MR_Word analysis__HeadVar__4_4;
    MR_Box analysis__conv1_HeadVar__4_4;

    {
      analysis__conv1_HeadVar__4_4 = mercury__map__foldl_3_f_0((MR_Word) &analysis__analysis__type_ctor_info_func_id_0, (MR_Word) &analysis_scalar_common_1[1], (MR_Word) &analysis__analysis__type_ctor_info_analysis_status_0, (MR_Word) &analysis_scalar_common_2[14], analysis__FuncMap_6, ((MR_Box) (analysis__Acc_7)));
    }
    analysis__HeadVar__4_4 = ((MR_Word) analysis__conv1_HeadVar__4_4);
    return analysis__HeadVar__4_4;
  }
}

void MR_CALL 
analysis__maybe_write_module_imdg_5_p_0(
  MR_Word analysis__Info_6,
  MR_Word analysis__Globals_7,
  MR_Word analysis__ModuleName_8)
{
  {
    MR_bool analysis__succeeded;
    MR_Word analysis__ModuleEntries_10;
    MR_Word analysis__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 9)));
    MR_Word analysis__TypeClassInfo_for_compiler_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 0)));
    MR_Box analysis__Var_15 = (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 1));
    MR_Word analysis__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 2)));
    MR_Word analysis__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 3)));
    MR_Word analysis__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 4)));
    MR_Word analysis__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 5)));
    MR_Word analysis__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 6)));
    MR_Word analysis__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 7)));
    MR_Word analysis__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 8)));
    MR_Word analysis__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 10)));
    MR_Box analysis__conv0_ModuleEntries_10;

    {
      analysis__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &analysis_scalar_common_2[5], analysis__Var_13, ((MR_Box) (analysis__ModuleName_8)), &analysis__conv0_ModuleEntries_10);
    }
    if (analysis__succeeded)
      {
        analysis__ModuleEntries_10 = ((MR_Word) analysis__conv0_ModuleEntries_10);
        analysis__succeeded = MR_TRUE;
      }
    if (analysis__succeeded)
      {
        analysis__file__write_module_imdg_6_p_0(analysis__Info_6, analysis__Globals_7, analysis__ModuleName_8, analysis__ModuleEntries_10);
      }
    else
      {
      }
  }
}

void MR_CALL 
analysis__maybe_write_module_requests_5_p_0(
  MR_Word analysis__Info_6,
  MR_Word analysis__Globals_7,
  MR_Word analysis__ModuleName_8)
{
  {
    MR_bool analysis__succeeded;
    MR_Word analysis__Requests_10;
    MR_Word analysis__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 5)));
    MR_Word analysis__TypeClassInfo_for_compiler_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 0)));
    MR_Box analysis__Var_15 = (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 1));
    MR_Word analysis__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 2)));
    MR_Word analysis__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 3)));
    MR_Word analysis__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 4)));
    MR_Word analysis__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 6)));
    MR_Word analysis__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 7)));
    MR_Word analysis__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 8)));
    MR_Word analysis__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 9)));
    MR_Word analysis__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 10)));
    MR_Box analysis__conv0_Requests_10;

    {
      analysis__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &analysis_scalar_common_2[1], analysis__Var_13, ((MR_Box) (analysis__ModuleName_8)), &analysis__conv0_Requests_10);
    }
    if (analysis__succeeded)
      {
        analysis__Requests_10 = ((MR_Word) analysis__conv0_Requests_10);
        analysis__succeeded = MR_TRUE;
      }
    if (analysis__succeeded)
      {
        analysis__file__write_module_analysis_requests_6_p_0(analysis__Info_6, analysis__Globals_7, analysis__ModuleName_8, analysis__Requests_10);
      }
    else
      {
      }
  }
}

void MR_CALL 
analysis__maybe_write_module_overall_status_5_p_0(
  MR_Word analysis__Info_6,
  MR_Word analysis__Globals_7,
  MR_Word analysis__ModuleName_8)
{
  {
    MR_bool analysis__succeeded;
    MR_Word analysis__Status_10;
    MR_Word analysis__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 6)));
    MR_Word analysis__TypeClassInfo_for_compiler_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 0)));
    MR_Box analysis__Var_15 = (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 1));
    MR_Word analysis__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 2)));
    MR_Word analysis__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 3)));
    MR_Word analysis__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 4)));
    MR_Word analysis__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 5)));
    MR_Word analysis__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 7)));
    MR_Word analysis__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 8)));
    MR_Word analysis__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 9)));
    MR_Word analysis__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 10)));
    MR_Box analysis__conv0_Status_10;

    {
      analysis__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &analysis__analysis__type_ctor_info_analysis_status_0, analysis__Var_13, ((MR_Box) (analysis__ModuleName_8)), &analysis__conv0_Status_10);
    }
    if (analysis__succeeded)
      {
        analysis__Status_10 = ((MR_Word) analysis__conv0_Status_10);
        analysis__succeeded = MR_TRUE;
      }
    if (analysis__succeeded)
      {
        analysis__file__write_module_overall_status_6_p_0(analysis__Info_6, analysis__Globals_7, analysis__ModuleName_8, analysis__Status_10);
      }
    else
      {
      }
  }
}

void MR_CALL 
analysis__load_module_imdg_6_p_0(
  MR_Word analysis__Globals_7,
  MR_Word analysis__ModuleName_8,
  MR_Word analysis__STATE_VARIABLE_Info_0_14,
  MR_Word * analysis__STATE_VARIABLE_Info_15)
{
  {
    MR_bool analysis__succeeded;
    MR_Word analysis__IMDG_11;
    MR_Word analysis__Map0_12;
    MR_Word analysis__Map_13;
    MR_Word analysis__TypeClassInfo_for_compiler_39;
    MR_Box analysis__Var_20;
    MR_Word analysis__Var_21;
    MR_Word analysis__Var_22;
    MR_Word analysis__Var_23;
    MR_Word analysis__Var_24;
    MR_Word analysis__Var_25;
    MR_Word analysis__Var_26;
    MR_Word analysis__Var_27;
    MR_Word analysis__Var_28;
    MR_Word analysis__TypeClassInfo_for_compiler_42;
    MR_Box analysis__Var_29;
    MR_Word analysis__Var_30;
    MR_Word analysis__Var_31;
    MR_Word analysis__Var_32;
    MR_Word analysis__Var_33;
    MR_Word analysis__Var_34;
    MR_Word analysis__Var_35;
    MR_Word analysis__Var_36;
    MR_Word analysis__Var_38;
    MR_Word analysis__Var_37;

    {
      analysis__file__read_module_imdg_6_p_0(analysis__STATE_VARIABLE_Info_0_14, analysis__Globals_7, analysis__ModuleName_8, &analysis__IMDG_11);
    }
    analysis__TypeClassInfo_for_compiler_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 0)));
    analysis__Var_20 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 1));
    analysis__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 2)));
    analysis__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 3)));
    analysis__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 4)));
    analysis__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 5)));
    analysis__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 6)));
    analysis__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 7)));
    analysis__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 8)));
    analysis__Map0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 9)));
    analysis__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 10)));
    {
      mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &analysis_scalar_common_2[5], ((MR_Box) (analysis__ModuleName_8)), ((MR_Box) (analysis__IMDG_11)), analysis__Map0_12, &analysis__Map_13);
    }
    analysis__TypeClassInfo_for_compiler_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 0)));
    analysis__Var_29 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 1));
    analysis__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 2)));
    analysis__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 3)));
    analysis__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 4)));
    analysis__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 5)));
    analysis__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 6)));
    analysis__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 7)));
    analysis__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 8)));
    analysis__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 9)));
    analysis__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_14, (MR_Integer) 10)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
      *analysis__STATE_VARIABLE_Info_15 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (analysis__TypeClassInfo_for_compiler_42));
      MR_hl_field(MR_mktag(0), base, 1) = analysis__Var_29;
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (analysis__Var_30));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (analysis__Var_31));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (analysis__Var_32));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (analysis__Var_33));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (analysis__Var_34));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (analysis__Var_35));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (analysis__Var_36));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (analysis__Map_13));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (analysis__Var_38));
    }
  }
}

void MR_CALL 
analysis__combine_imdg_lists_3_p_0(
  MR_Word analysis__ArcsA_4,
  MR_Word analysis__ArcsB_5,
  MR_Word * analysis__HeadVar__3_3)
{
  {
    MR_bool analysis__succeeded;

    {
      *analysis__HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) &analysis__analysis__type_ctor_info_imdg_arc_0, analysis__ArcsA_4, analysis__ArcsB_5);
    }
  }
}

static void MR_CALL 
analysis__combine_func_imdg_3_p_0_1(
  MR_Box analysis__closure_arg,
  MR_Box analysis__wrapper_arg_1,
  MR_Box analysis__wrapper_arg_2,
  MR_Box * analysis__wrapper_arg_3)
{
  {
    MR_Box analysis__closure = analysis__closure_arg;
    MR_Word analysis__conv0_HeadVar__3_3;

    {
      analysis__combine_imdg_lists_3_p_0(((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2), &analysis__conv0_HeadVar__3_3);
    }
    *analysis__wrapper_arg_3 = ((MR_Box) (analysis__conv0_HeadVar__3_3));
  }
}

void MR_CALL 
analysis__combine_func_imdg_3_p_0(
  MR_Word analysis__FuncImdgA_4,
  MR_Word analysis__FuncImdgB_5,
  MR_Word * analysis__FuncImdg_6)
{
  {
    MR_bool analysis__succeeded;

    {
      mercury__map__union_4_p_1((MR_Word) &analysis_scalar_common_1[2], (MR_Word) &analysis__analysis__type_ctor_info_func_id_0, (MR_Word) &analysis_scalar_common_2[13], analysis__FuncImdgA_4, analysis__FuncImdgB_5, analysis__FuncImdg_6);
    }
  }
}

static MR_bool MR_CALL 
analysis__clear_imdg_entries_pointing_at_3_3_p_0_1(
  MR_Box analysis__closure_arg,
  MR_Box analysis__wrapper_arg_1)
{
  {
    MR_bool analysis__succeeded;
    MR_Box analysis__closure = analysis__closure_arg;

    {
      analysis__succeeded = analysis__IntroducedFrom__pred__clear_imdg_entries_pointing_at_3__1180__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 3))), ((MR_Word) analysis__wrapper_arg_1));
    }
    return analysis__succeeded;
  }
}

void MR_CALL 
analysis__clear_imdg_entries_pointing_at_3_3_p_0(
  MR_Word analysis__ModuleName_4,
  MR_Word analysis__Arcs0_5,
  MR_Word * analysis__Arcs_6)
{
  {
    MR_bool analysis__succeeded;
    MR_Word analysis__Var_8;

    {
      analysis__Var_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), analysis__Var_8, 0) = ((MR_Box) (&analysis_scalar_common_13[1]));
      MR_hl_field(MR_mktag(0), analysis__Var_8, 1) = ((MR_Box) (analysis__clear_imdg_entries_pointing_at_3_3_p_0_1));
      MR_hl_field(MR_mktag(0), analysis__Var_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), analysis__Var_8, 3) = ((MR_Box) (analysis__ModuleName_4));
    }
    {
      mercury__list__filter_3_p_0((MR_Word) &analysis__analysis__type_ctor_info_imdg_arc_0, analysis__Var_8, analysis__Arcs0_5, analysis__Arcs_6);
    }
  }
}

static void MR_CALL 
analysis__clear_imdg_entries_pointing_at_2_3_p_0_1(
  MR_Box analysis__closure_arg,
  MR_Box analysis__wrapper_arg_1,
  MR_Box * analysis__wrapper_arg_2)
{
  {
    MR_Box analysis__closure = analysis__closure_arg;
    MR_Word analysis__conv0_Arcs_6;

    {
      analysis__clear_imdg_entries_pointing_at_3_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 3))), ((MR_Word) analysis__wrapper_arg_1), &analysis__conv0_Arcs_6);
    }
    *analysis__wrapper_arg_2 = ((MR_Box) (analysis__conv0_Arcs_6));
  }
}

void MR_CALL 
analysis__clear_imdg_entries_pointing_at_2_3_p_0(
  MR_Word analysis__ModuleName_4,
  MR_Word analysis__FuncMap0_5,
  MR_Word * analysis__FuncMap_6)
{
  {
    MR_bool analysis__succeeded;
    MR_Word analysis__TypeInfo_10_10;
    MR_Word analysis__Var_7;

    {
      analysis__Var_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), analysis__Var_7, 0) = ((MR_Box) (&analysis_scalar_common_4[5]));
      MR_hl_field(MR_mktag(0), analysis__Var_7, 1) = ((MR_Box) (analysis__clear_imdg_entries_pointing_at_2_3_p_0_1));
      MR_hl_field(MR_mktag(0), analysis__Var_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), analysis__Var_7, 3) = ((MR_Box) (analysis__ModuleName_4));
    }
    analysis__TypeInfo_10_10 = (MR_Word) &analysis_scalar_common_1[2];
    {
      mercury__map__map_values_only_3_p_0(analysis__TypeInfo_10_10, analysis__TypeInfo_10_10, (MR_Word) &analysis__analysis__type_ctor_info_func_id_0, analysis__Var_7, analysis__FuncMap0_5, analysis__FuncMap_6);
    }
  }
}

static void MR_CALL 
analysis__update_intermodule_dependencies_2_4_p_0_1(
  MR_Box analysis__closure_arg,
  MR_Box analysis__wrapper_arg_1,
  MR_Box analysis__wrapper_arg_2,
  MR_Box * analysis__wrapper_arg_3)
{
  {
    MR_Box analysis__closure = analysis__closure_arg;
    MR_Word analysis__conv2_FuncImdg_6;

    {
      analysis__combine_func_imdg_3_p_0(((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2), &analysis__conv2_FuncImdg_6);
    }
    *analysis__wrapper_arg_3 = ((MR_Box) (analysis__conv2_FuncImdg_6));
  }
}

void MR_CALL 
analysis__update_intermodule_dependencies_2_4_p_0(
  MR_Word analysis__ModuleName_5,
  MR_Word analysis__ImportedModuleName_6,
  MR_Word analysis__STATE_VARIABLE_Info_0_13,
  MR_Word * analysis__STATE_VARIABLE_Info_14)
{
  {
    MR_bool analysis__succeeded;
    MR_Word analysis__TypeCtorInfo_84_84 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    MR_Word analysis__TypeInfo_85_85 = (MR_Word) &analysis_scalar_common_2[5];
    MR_Word analysis__IMDG0_8;
    MR_Word analysis__IMDG1_10;
    MR_Word analysis__IMDG_12;
    MR_Word analysis__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 9)));
    MR_Word analysis__STATE_VARIABLE_Info_21_21;
    MR_Word analysis__Var_22;
    MR_Word analysis__Var_23;
    MR_Word analysis__Var_25;
    MR_Word analysis__Var_26;
    MR_Word analysis__TypeClassInfo_for_compiler_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 0)));
    MR_Box analysis__Var_27 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 1));
    MR_Word analysis__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 2)));
    MR_Word analysis__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)));
    MR_Word analysis__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 4)));
    MR_Word analysis__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 5)));
    MR_Word analysis__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 6)));
    MR_Word analysis__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 7)));
    MR_Word analysis__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 8)));
    MR_Word analysis__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 10)));
    MR_Box analysis__conv0_IMDG0_8;
    MR_Word analysis__NewArcs_11;
    MR_Word analysis__Var_19;
    MR_Word analysis__TypeClassInfo_for_compiler_88;
    MR_Box analysis__Var_36;
    MR_Word analysis__Var_37;
    MR_Word analysis__Var_38;
    MR_Word analysis__Var_39;
    MR_Word analysis__Var_40;
    MR_Word analysis__Var_41;
    MR_Word analysis__Var_42;
    MR_Word analysis__Var_43;
    MR_Word analysis__Var_44;
    MR_Box analysis__conv1_NewArcs_11;
    MR_Word analysis__TypeClassInfo_for_compiler_94;
    MR_Box analysis__Var_45;
    MR_Word analysis__Var_46;
    MR_Word analysis__Var_47;
    MR_Word analysis__Var_48;
    MR_Word analysis__Var_49;
    MR_Word analysis__Var_50;
    MR_Word analysis__Var_51;
    MR_Word analysis__Var_52;
    MR_Word analysis__Var_53;
    MR_Word analysis__TypeClassInfo_for_compiler_95;
    MR_Box analysis__Var_54;
    MR_Word analysis__Var_55;
    MR_Word analysis__Var_56;
    MR_Word analysis__Var_57;
    MR_Word analysis__Var_58;
    MR_Word analysis__Var_59;
    MR_Word analysis__Var_60;
    MR_Word analysis__Var_61;
    MR_Word analysis__Var_63;
    MR_Word analysis__Var_62;
    MR_Word analysis__TypeClassInfo_for_compiler_96;
    MR_Box analysis__Var_64;
    MR_Word analysis__Var_65;
    MR_Word analysis__Var_66;
    MR_Word analysis__Var_67;
    MR_Word analysis__Var_68;
    MR_Word analysis__Var_69;
    MR_Word analysis__Var_70;
    MR_Word analysis__Var_71;
    MR_Word analysis__Var_72;
    MR_Word analysis__TypeClassInfo_for_compiler_97;
    MR_Box analysis__Var_73;
    MR_Word analysis__Var_74;
    MR_Word analysis__Var_75;
    MR_Word analysis__Var_76;
    MR_Word analysis__Var_77;
    MR_Word analysis__Var_78;
    MR_Word analysis__Var_79;
    MR_Word analysis__Var_80;
    MR_Word analysis__Var_81;
    MR_Word analysis__Var_82;

    {
      mercury__map__lookup_3_p_0(analysis__TypeCtorInfo_84_84, analysis__TypeInfo_85_85, analysis__Var_15, ((MR_Box) (analysis__ImportedModuleName_6)), &analysis__conv0_IMDG0_8);
    }
    analysis__IMDG0_8 = ((MR_Word) analysis__conv0_IMDG0_8);
    {
      analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_49_95_95_91_51_93_95_48_3_p_0(analysis__ModuleName_5, analysis__ImportedModuleName_6);
    }
    {
      analysis__clear_imdg_entries_pointing_at_3_p_0(analysis__ModuleName_5, analysis__IMDG0_8, &analysis__IMDG1_10);
    }
    analysis__TypeClassInfo_for_compiler_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 0)));
    analysis__Var_36 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 1));
    analysis__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 2)));
    analysis__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)));
    analysis__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 4)));
    analysis__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 5)));
    analysis__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 6)));
    analysis__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 7)));
    analysis__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 8)));
    analysis__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 9)));
    analysis__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 10)));
    {
      analysis__succeeded = mercury__map__elem_2_f_0(analysis__TypeCtorInfo_84_84, analysis__TypeInfo_85_85, ((MR_Box) (analysis__ImportedModuleName_6)), analysis__Var_19, &analysis__conv1_NewArcs_11);
    }
    if (analysis__succeeded)
      {
        analysis__NewArcs_11 = ((MR_Word) analysis__conv1_NewArcs_11);
        analysis__succeeded = MR_TRUE;
      }
    if (analysis__succeeded)
      {
        {
          mercury__map__union_4_p_1((MR_Word) &analysis_scalar_common_2[4], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &analysis_scalar_common_2[12], analysis__IMDG1_10, analysis__NewArcs_11, &analysis__IMDG_12);
        }
      }
    else
      analysis__IMDG_12 = analysis__IMDG1_10;
    analysis__TypeClassInfo_for_compiler_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 0)));
    analysis__Var_45 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 1));
    analysis__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 2)));
    analysis__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)));
    analysis__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 4)));
    analysis__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 5)));
    analysis__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 6)));
    analysis__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 7)));
    analysis__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 8)));
    analysis__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 9)));
    analysis__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 10)));
    {
      analysis__Var_23 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(analysis__TypeCtorInfo_84_84, analysis__TypeInfo_85_85, ((MR_Box) (analysis__ImportedModuleName_6)), analysis__Var_22, ((MR_Box) (analysis__IMDG_12)));
    }
    analysis__TypeClassInfo_for_compiler_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 0)));
    analysis__Var_54 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 1));
    analysis__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 2)));
    analysis__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)));
    analysis__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 4)));
    analysis__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 5)));
    analysis__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 6)));
    analysis__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 7)));
    analysis__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 8)));
    analysis__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 9)));
    analysis__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 10)));
    {
      analysis__STATE_VARIABLE_Info_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, 0) = ((MR_Box) (analysis__TypeClassInfo_for_compiler_95));
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, 1) = analysis__Var_54;
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, 2) = ((MR_Box) (analysis__Var_55));
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, 3) = ((MR_Box) (analysis__Var_56));
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, 4) = ((MR_Box) (analysis__Var_57));
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, 5) = ((MR_Box) (analysis__Var_58));
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, 6) = ((MR_Box) (analysis__Var_59));
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, 7) = ((MR_Box) (analysis__Var_60));
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, 8) = ((MR_Box) (analysis__Var_61));
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, 9) = ((MR_Box) (analysis__Var_23));
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, 10) = ((MR_Box) (analysis__Var_63));
    }
    analysis__TypeClassInfo_for_compiler_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 0)));
    analysis__Var_64 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 1));
    analysis__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 2)));
    analysis__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 3)));
    analysis__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 4)));
    analysis__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 5)));
    analysis__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 6)));
    analysis__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 7)));
    analysis__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 8)));
    analysis__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 9)));
    analysis__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 10)));
    {
      analysis__Var_25 = mercury__map__delete_2_f_0(analysis__TypeCtorInfo_84_84, analysis__TypeInfo_85_85, analysis__Var_26, ((MR_Box) (analysis__ImportedModuleName_6)));
    }
    analysis__TypeClassInfo_for_compiler_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 0)));
    analysis__Var_73 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 1));
    analysis__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 2)));
    analysis__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 3)));
    analysis__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 4)));
    analysis__Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 5)));
    analysis__Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 6)));
    analysis__Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 7)));
    analysis__Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 8)));
    analysis__Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 9)));
    analysis__Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_21_21, (MR_Integer) 10)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
      *analysis__STATE_VARIABLE_Info_14 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (analysis__TypeClassInfo_for_compiler_97));
      MR_hl_field(MR_mktag(0), base, 1) = analysis__Var_73;
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (analysis__Var_74));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (analysis__Var_75));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (analysis__Var_76));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (analysis__Var_77));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (analysis__Var_78));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (analysis__Var_79));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (analysis__Var_80));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (analysis__Var_81));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (analysis__Var_25));
    }
  }
}

static void MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_49_95_95_91_51_93_95_48_3_p_0(
  MR_Word analysis__Var_11,
  MR_Word analysis__Var_12)
{
  {
    MR_bool analysis__succeeded;
    MR_Word analysis__Debug_6;

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
	 analysis__Debug_6  = X;
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
    switch (analysis__Debug_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          analysis__write_clearing_entries_4_p_0(analysis__Var_11, analysis__Var_12);
        }
        break;
    }
  }
}

void MR_CALL 
analysis__write_clearing_entries_4_p_0(
  MR_Word analysis__ModuleName_5,
  MR_Word analysis__ImportedModuleName_6)
{
  {
    MR_bool analysis__succeeded;
    MR_Word analysis__TypeCtorInfo_18_18;

    {
      mercury__io__write_string_3_p_0((MR_String) "% Clearing entries involving ");
    }
    analysis__TypeCtorInfo_18_18 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    {
      mercury__io__write_3_p_0(analysis__TypeCtorInfo_18_18, ((MR_Box) (analysis__ModuleName_5)));
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " from ");
    }
    {
      mercury__io__write_3_p_0(analysis__TypeCtorInfo_18_18, ((MR_Box) (analysis__ImportedModuleName_6)));
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\'s IMDG.\n");
    }
  }
}

static void MR_CALL 
analysis__clear_imdg_entries_pointing_at_3_p_0_1(
  MR_Box analysis__closure_arg,
  MR_Box analysis__wrapper_arg_1,
  MR_Box * analysis__wrapper_arg_2)
{
  {
    MR_Box analysis__closure = analysis__closure_arg;
    MR_Word analysis__conv0_FuncMap_6;

    {
      analysis__clear_imdg_entries_pointing_at_2_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 3))), ((MR_Word) analysis__wrapper_arg_1), &analysis__conv0_FuncMap_6);
    }
    *analysis__wrapper_arg_2 = ((MR_Box) (analysis__conv0_FuncMap_6));
  }
}

void MR_CALL 
analysis__clear_imdg_entries_pointing_at_3_p_0(
  MR_Word analysis__ModuleName_4,
  MR_Word analysis__Map0_5,
  MR_Word * analysis__Map_6)
{
  {
    MR_bool analysis__succeeded;
    MR_Word analysis__TypeInfo_10_10;
    MR_Word analysis__Var_7;

    {
      analysis__Var_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), analysis__Var_7, 0) = ((MR_Box) (&analysis_scalar_common_4[3]));
      MR_hl_field(MR_mktag(0), analysis__Var_7, 1) = ((MR_Box) (analysis__clear_imdg_entries_pointing_at_3_p_0_1));
      MR_hl_field(MR_mktag(0), analysis__Var_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), analysis__Var_7, 3) = ((MR_Box) (analysis__ModuleName_4));
    }
    analysis__TypeInfo_10_10 = (MR_Word) &analysis_scalar_common_2[4];
    {
      mercury__map__map_values_only_3_p_0(analysis__TypeInfo_10_10, analysis__TypeInfo_10_10, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, analysis__Var_7, analysis__Map0_5, analysis__Map_6);
    }
  }
}

void MR_CALL 
analysis__taint_module_overall_status_7_p_0(
  MR_Word analysis__Globals_8,
  MR_Word analysis__Status_9,
  MR_Word analysis__ModuleName_10,
  MR_Word analysis__STATE_VARIABLE_Info_0_15,
  MR_Word * analysis__STATE_VARIABLE_Info_16)
{
  {
    MR_bool analysis__succeeded;

    switch (analysis__Status_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        {
          MR_Word analysis__TypeCtorInfo_56_56;
          MR_Word analysis__TypeCtorInfo_57_57;
          MR_Word analysis__ModuleStatus0_13;
          MR_Word analysis__ModuleStatus_14;
          MR_Word analysis__STATE_VARIABLE_Info_19_19;
          MR_Word analysis__Var_21;
          MR_Word analysis__Var_25;
          MR_Word analysis__Var_26;
          MR_Word analysis__Debug_66;
          MR_Word analysis__TypeClassInfo_for_compiler_55;
          MR_Box analysis__Var_27;
          MR_Word analysis__Var_28;
          MR_Word analysis__Var_29;
          MR_Word analysis__Var_30;
          MR_Word analysis__Var_31;
          MR_Word analysis__Var_32;
          MR_Word analysis__Var_33;
          MR_Word analysis__Var_34;
          MR_Word analysis__Var_35;
          MR_Box analysis__conv0_ModuleStatus0_13;
          MR_Word analysis__TypeClassInfo_for_compiler_60;
          MR_Box analysis__Var_36;
          MR_Word analysis__Var_37;
          MR_Word analysis__Var_38;
          MR_Word analysis__Var_39;
          MR_Word analysis__Var_40;
          MR_Word analysis__Var_41;
          MR_Word analysis__Var_42;
          MR_Word analysis__Var_43;
          MR_Word analysis__Var_44;
          MR_Word analysis__TypeClassInfo_for_compiler_61;
          MR_Box analysis__Var_45;
          MR_Word analysis__Var_46;
          MR_Word analysis__Var_47;
          MR_Word analysis__Var_48;
          MR_Word analysis__Var_49;
          MR_Word analysis__Var_51;
          MR_Word analysis__Var_52;
          MR_Word analysis__Var_53;
          MR_Word analysis__Var_54;
          MR_Word analysis__Var_50;

          {
            analysis__ensure_module_status_loaded_6_p_0(analysis__Globals_8, analysis__ModuleName_10, analysis__STATE_VARIABLE_Info_0_15, &analysis__STATE_VARIABLE_Info_19_19);
          }
          analysis__TypeClassInfo_for_compiler_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 0)));
          analysis__Var_27 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 1));
          analysis__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 2)));
          analysis__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 3)));
          analysis__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 4)));
          analysis__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 5)));
          analysis__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 6)));
          analysis__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 7)));
          analysis__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 8)));
          analysis__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 9)));
          analysis__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 10)));
          analysis__TypeCtorInfo_56_56 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
          analysis__TypeCtorInfo_57_57 = (MR_Word) &analysis__analysis__type_ctor_info_analysis_status_0;
          {
            analysis__conv0_ModuleStatus0_13 = mercury__map__det_elem_2_f_0(analysis__TypeCtorInfo_56_56, analysis__TypeCtorInfo_57_57, ((MR_Box) (analysis__ModuleName_10)), analysis__Var_21);
          }
          analysis__ModuleStatus0_13 = ((MR_Word) analysis__conv0_ModuleStatus0_13);
          {
            analysis__ModuleStatus_14 = analysis__lub_2_f_0(analysis__ModuleStatus0_13, analysis__Status_9);
          }
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
	 analysis__Debug_66  = X;
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
          switch (analysis__Debug_66) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
              }
              break;
            case (MR_Integer) 1:
              {
                analysis__write_tainting_module_4_p_0(analysis__ModuleName_10, analysis__ModuleStatus_14);
              }
              break;
          }
          analysis__TypeClassInfo_for_compiler_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 0)));
          analysis__Var_36 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 1));
          analysis__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 2)));
          analysis__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 3)));
          analysis__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 4)));
          analysis__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 5)));
          analysis__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 6)));
          analysis__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 7)));
          analysis__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 8)));
          analysis__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 9)));
          analysis__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 10)));
          {
            analysis__Var_26 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(analysis__TypeCtorInfo_56_56, analysis__TypeCtorInfo_57_57, ((MR_Box) (analysis__ModuleName_10)), analysis__Var_25, ((MR_Box) (analysis__ModuleStatus_14)));
          }
          analysis__TypeClassInfo_for_compiler_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 0)));
          analysis__Var_45 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 1));
          analysis__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 2)));
          analysis__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 3)));
          analysis__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 4)));
          analysis__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 5)));
          analysis__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 6)));
          analysis__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 7)));
          analysis__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 8)));
          analysis__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 9)));
          analysis__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_19_19, (MR_Integer) 10)));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
            *analysis__STATE_VARIABLE_Info_16 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (analysis__TypeClassInfo_for_compiler_61));
            MR_hl_field(MR_mktag(0), base, 1) = analysis__Var_45;
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (analysis__Var_46));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (analysis__Var_47));
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (analysis__Var_48));
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (analysis__Var_49));
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (analysis__Var_26));
            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (analysis__Var_51));
            MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (analysis__Var_52));
            MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (analysis__Var_53));
            MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (analysis__Var_54));
          }
        }
        break;
      case (MR_Integer) 2:
        *analysis__STATE_VARIABLE_Info_16 = analysis__STATE_VARIABLE_Info_0_15;
        break;
    }
  }
}

void MR_CALL 
analysis__write_tainting_module_4_p_0(
  MR_Word analysis__ModuleName_5,
  MR_Word analysis__ModuleStatus_6)
{
  {
    MR_bool analysis__succeeded;
    MR_Word analysis__TypeCtorInfo_17_17 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;

    {
      mercury__io__print_3_p_0(analysis__TypeCtorInfo_17_17, ((MR_Box) ((MR_String) "% Tainting the overall module status of ")));
    }
    {
      mercury__io__print_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (analysis__ModuleName_5)));
    }
    {
      mercury__io__print_3_p_0(analysis__TypeCtorInfo_17_17, ((MR_Box) ((MR_String) " with ")));
    }
    {
      mercury__io__print_3_p_0((MR_Word) &analysis__analysis__type_ctor_info_analysis_status_0, ((MR_Box) (analysis__ModuleStatus_6)));
    }
    {
      mercury__io__nl_2_p_0();
    }
  }
}

void MR_CALL 
analysis__ensure_module_status_loaded_6_p_0(
  MR_Word analysis__Globals_7,
  MR_Word analysis__ModuleName_8,
  MR_Word analysis__STATE_VARIABLE_Info_0_12,
  MR_Word * analysis__STATE_VARIABLE_Info_13)
{
  {
    MR_bool analysis__succeeded;
    MR_Word analysis__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 6)));
    MR_Word analysis__TypeClassInfo_for_compiler_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 0)));
    MR_Box analysis__Var_22 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 1));
    MR_Word analysis__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 2)));
    MR_Word analysis__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 3)));
    MR_Word analysis__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 4)));
    MR_Word analysis__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 5)));
    MR_Word analysis__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 7)));
    MR_Word analysis__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 8)));
    MR_Word analysis__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 9)));
    MR_Word analysis__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 10)));

    {
      analysis__succeeded = mercury__map__contains_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &analysis__analysis__type_ctor_info_analysis_status_0, analysis__Var_16, ((MR_Box) (analysis__ModuleName_8)));
    }
    if (analysis__succeeded)
      *analysis__STATE_VARIABLE_Info_13 = analysis__STATE_VARIABLE_Info_0_12;
    else
      {
        MR_Word analysis__TypeClassInfo_for_compiler_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 0)));
        MR_Word analysis__ModuleStatus_11;
        MR_Box analysis__Var_17 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 1));
        MR_Word analysis__Var_20;
        MR_Word analysis__Var_21;
        MR_Word analysis__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 2)));
        MR_Word analysis__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 3)));
        MR_Word analysis__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 4)));
        MR_Word analysis__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 5)));
        MR_Word analysis__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 6)));
        MR_Word analysis__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 7)));
        MR_Word analysis__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 8)));
        MR_Word analysis__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 9)));
        MR_Word analysis__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 10)));
        MR_Word analysis__TypeClassInfo_for_compiler_63;
        MR_Box analysis__Var_40;
        MR_Word analysis__Var_41;
        MR_Word analysis__Var_42;
        MR_Word analysis__Var_43;
        MR_Word analysis__Var_44;
        MR_Word analysis__Var_45;
        MR_Word analysis__Var_46;
        MR_Word analysis__Var_47;
        MR_Word analysis__Var_48;
        MR_Word analysis__TypeClassInfo_for_compiler_66;
        MR_Box analysis__Var_49;
        MR_Word analysis__Var_50;
        MR_Word analysis__Var_51;
        MR_Word analysis__Var_52;
        MR_Word analysis__Var_53;
        MR_Word analysis__Var_55;
        MR_Word analysis__Var_56;
        MR_Word analysis__Var_57;
        MR_Word analysis__Var_58;
        MR_Word analysis__Var_54;

        {
          analysis__file__read_module_overall_status_6_p_0(analysis__TypeClassInfo_for_compiler_62, analysis__Var_17, analysis__Globals_7, analysis__ModuleName_8, &analysis__ModuleStatus_11);
        }
        analysis__TypeClassInfo_for_compiler_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 0)));
        analysis__Var_40 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 1));
        analysis__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 2)));
        analysis__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 3)));
        analysis__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 4)));
        analysis__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 5)));
        analysis__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 6)));
        analysis__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 7)));
        analysis__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 8)));
        analysis__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 9)));
        analysis__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 10)));
        {
          analysis__Var_21 = mercury__map__f_101_108_101_109_32_58_61_3_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &analysis__analysis__type_ctor_info_analysis_status_0, ((MR_Box) (analysis__ModuleName_8)), analysis__Var_20, ((MR_Box) (analysis__ModuleStatus_11)));
        }
        analysis__TypeClassInfo_for_compiler_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 0)));
        analysis__Var_49 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 1));
        analysis__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 2)));
        analysis__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 3)));
        analysis__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 4)));
        analysis__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 5)));
        analysis__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 6)));
        analysis__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 7)));
        analysis__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 8)));
        analysis__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 9)));
        analysis__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_12, (MR_Integer) 10)));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
          *analysis__STATE_VARIABLE_Info_13 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (analysis__TypeClassInfo_for_compiler_66));
          MR_hl_field(MR_mktag(0), base, 1) = analysis__Var_49;
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (analysis__Var_50));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (analysis__Var_51));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (analysis__Var_52));
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (analysis__Var_53));
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (analysis__Var_21));
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (analysis__Var_55));
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (analysis__Var_56));
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (analysis__Var_57));
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (analysis__Var_58));
        }
      }
  }
}

MR_bool MR_CALL 
analysis__arc_module_name_3_f_0(
  MR_Word analysis__TypeClassInfo_for_call_pattern_11,
  MR_Box analysis__FuncInfo_5,
  MR_Box analysis__CallA_6,
  MR_Word analysis__HeadVar__3_3,
  MR_Word * analysis__ModuleName_8)
{
  {
    MR_bool analysis__succeeded;
    MR_Word analysis__TypeClassInfo_for_call_pattern_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 0)));
    MR_Word analysis__TypeInfo_14_14;
    MR_Word analysis__TypeInfo_15_15;
    MR_Word analysis__TypeClassInfo_for_partial_order_16;
    MR_Box analysis__CallB0_7 = (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 1));
    MR_Box analysis__CallB_9;
    MR_Word analysis__Var_10;
    MR_bool MR_CALL (* analysis__func_0)(MR_Box, MR_Box, MR_Box, MR_Box);

    *analysis__ModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__HeadVar__3_3, (MR_Integer) 2)));
    {
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_12, (MR_Integer) 4, &analysis__TypeInfo_14_14);
    }
    {
      analysis__Var_10 = mercury__univ__univ_1_f_0(analysis__TypeInfo_14_14, analysis__CallB0_7);
    }
    {
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_11, (MR_Integer) 4, &analysis__TypeInfo_15_15);
    }
    {
      mercury__univ__det_univ_to_type_2_p_0(analysis__TypeInfo_15_15, analysis__Var_10, &analysis__CallB_9);
    }
    {
      mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_11, (MR_Integer) 1, &analysis__TypeClassInfo_for_partial_order_16);
    }
    analysis__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_partial_order_16, (MR_Integer) 0)), (MR_Integer) 6)));
    {
      analysis__succeeded = analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_partial_order_16), analysis__FuncInfo_5, analysis__CallA_6, analysis__CallB_9);
    }
    return analysis__succeeded;
  }
}

static void MR_CALL 
analysis__update_analysis_registry_5_9_p_0_3(
  MR_Box analysis__closure_arg,
  MR_Box analysis__wrapper_arg_1,
  MR_Box analysis__wrapper_arg_2,
  MR_Box * analysis__wrapper_arg_3,
  MR_Box analysis__wrapper_arg_4,
  MR_Box * analysis__wrapper_arg_5)
{
  {
    MR_Box analysis__closure = analysis__closure_arg;
    MR_Word analysis__conv9_STATE_VARIABLE_Info_16;

    {
      analysis__taint_module_overall_status_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 4))), ((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2), &analysis__conv9_STATE_VARIABLE_Info_16);
    }
    *analysis__wrapper_arg_3 = ((MR_Box) (analysis__conv9_STATE_VARIABLE_Info_16));
  }
}

static MR_bool MR_CALL 
analysis__update_analysis_registry_5_9_p_0_2(
  MR_Box analysis__closure_arg,
  MR_Box analysis__wrapper_arg_1,
  MR_Box * analysis__wrapper_arg_2)
{
  {
    MR_bool analysis__succeeded;
    MR_Box analysis__closure = analysis__closure_arg;
    MR_Word analysis__conv8_LambdaHeadVar__2_61;

    {
      analysis__succeeded = analysis__IntroducedFrom__func__update_analysis_registry_5__961__1_1_f_0(((MR_Word) analysis__wrapper_arg_1), &analysis__conv8_LambdaHeadVar__2_61);
    }
    if (analysis__succeeded)
      {
        *analysis__wrapper_arg_2 = ((MR_Box) (analysis__conv8_LambdaHeadVar__2_61));
        analysis__succeeded = MR_TRUE;
      }
    return analysis__succeeded;
  }
}

static void MR_CALL 
analysis__update_analysis_registry_5_9_p_0_1(
  MR_Box analysis__closure_arg,
  MR_Box analysis__wrapper_arg_1,
  MR_Box analysis__wrapper_arg_2,
  MR_Box * analysis__wrapper_arg_3,
  MR_Box analysis__wrapper_arg_4,
  MR_Box * analysis__wrapper_arg_5)
{
  {
    MR_Box analysis__closure = analysis__closure_arg;
    MR_Word analysis__conv2_STATE_VARIABLE_Info_16;

    {
      analysis__taint_module_overall_status_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 4))), ((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2), &analysis__conv2_STATE_VARIABLE_Info_16);
    }
    *analysis__wrapper_arg_3 = ((MR_Box) (analysis__conv2_STATE_VARIABLE_Info_16));
  }
}

void MR_CALL 
analysis__update_analysis_registry_5_9_p_0(
  MR_Word analysis__ModuleInfo_10,
  MR_Word analysis__ModuleName_11,
  MR_String analysis__AnalysisName_12,
  MR_Word analysis__FuncId_13,
  MR_Word analysis__NewResult_14,
  MR_Word analysis__STATE_VARIABLE_Info_0_42,
  MR_Word * analysis__STATE_VARIABLE_Info_43)
{
  {
    MR_bool analysis__succeeded;
    MR_Word analysis__TypeClassInfo_for_analysis_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__NewResult_14, (MR_Integer) 0)));
    MR_Box analysis__Call_17 = (MR_hl_field(MR_mktag(0), analysis__NewResult_14, (MR_Integer) 1));
    MR_Box analysis__NewAnswer_18 = (MR_hl_field(MR_mktag(0), analysis__NewResult_14, (MR_Integer) 2));
    MR_Word analysis__NewStatus_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__NewResult_14, (MR_Integer) 3)));
    MR_Box analysis__FuncInfo_20;
    MR_Word analysis__MaybeResult_21;
    MR_Word analysis__Globals_22;
    MR_Word analysis__STATE_VARIABLE_Info_49_49;
    MR_Box analysis__Var_207;
    MR_Box analysis__Var_208;
    MR_Word analysis__Requests_35;
    MR_Word analysis__TypeCtorInfo_190_190;
    MR_Word analysis__TypeInfo_191_191;
    MR_Word analysis__TypeCtorInfo_192_192;
    MR_Word analysis__TypeInfo_193_193;
    MR_Word analysis__ModuleRequests_34;
    MR_Word analysis__Var_57;
    MR_Word analysis__Var_58;
    MR_Word analysis__TypeClassInfo_for_compiler_187;
    MR_Box analysis__Var_139;
    MR_Word analysis__Var_140;
    MR_Word analysis__Var_141;
    MR_Word analysis__Var_142;
    MR_Word analysis__Var_143;
    MR_Word analysis__Var_144;
    MR_Word analysis__Var_145;
    MR_Word analysis__Var_146;
    MR_Word analysis__Var_147;
    MR_Box analysis__conv5_ModuleRequests_34;
    MR_Box analysis__conv6_Var_58;
    MR_Box analysis__conv7_Requests_35;
    MR_Word analysis__Var_36;
    MR_Word analysis__Var_37;

    {
      analysis__get_func_info_6_p_0(analysis__TypeClassInfo_for_analysis_148, analysis__ModuleInfo_10, analysis__ModuleName_11, analysis__FuncId_13, &analysis__FuncInfo_20);
    }
    {
      analysis__lookup_exactly_matching_result_even_from_invalid_modules_6_p_0(analysis__TypeClassInfo_for_analysis_148, analysis__STATE_VARIABLE_Info_0_42, analysis__ModuleName_11, analysis__FuncId_13, analysis__FuncInfo_20, analysis__Call_17, &analysis__MaybeResult_21);
    }
    {
      hlds__hlds_module__module_info_get_globals_2_p_0(analysis__ModuleInfo_10, &analysis__Globals_22);
    }
    if ((analysis__MaybeResult_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word analysis__TypeCtorInfo_184_184 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
        MR_Word analysis__TypeInfo_185_185 = (MR_Word) &analysis_scalar_common_2[3];
        MR_Word analysis__OldAnalysisResults0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 7)));
        MR_Word analysis__OldAnalysisResults_33;
        MR_Word analysis__OldMap0_69;
        MR_Word analysis__OldMap_70;
        MR_Word analysis__TypeClassInfo_for_compiler_183 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 0)));
        MR_Box analysis__Var_120 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 1));
        MR_Word analysis__Var_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 2)));
        MR_Word analysis__Var_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 3)));
        MR_Word analysis__Var_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 4)));
        MR_Word analysis__Var_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 5)));
        MR_Word analysis__Var_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 6)));
        MR_Word analysis__Var_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 8)));
        MR_Word analysis__Var_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 9)));
        MR_Word analysis__Var_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 10)));
        MR_Box analysis__conv0_OldMap0_69;
        MR_Word analysis__TypeClassInfo_for_compiler_186;
        MR_Box analysis__Var_129;
        MR_Word analysis__Var_130;
        MR_Word analysis__Var_131;
        MR_Word analysis__Var_132;
        MR_Word analysis__Var_133;
        MR_Word analysis__Var_134;
        MR_Word analysis__Var_136;
        MR_Word analysis__Var_137;
        MR_Word analysis__Var_138;
        MR_Word analysis__Var_135;

        {
          mercury__map__lookup_3_p_0(analysis__TypeCtorInfo_184_184, analysis__TypeInfo_185_185, analysis__OldAnalysisResults0_32, ((MR_Box) (analysis__ModuleName_11)), &analysis__conv0_OldMap0_69);
        }
        analysis__OldMap0_69 = ((MR_Word) analysis__conv0_OldMap0_69);
        {
          analysis__record_result_in_analysis_map_6_p_0(analysis__TypeClassInfo_for_analysis_148, analysis__FuncId_13, analysis__Call_17, analysis__NewAnswer_18, analysis__NewStatus_19, analysis__OldMap0_69, &analysis__OldMap_70);
        }
        {
          mercury__map__det_update_4_p_0(analysis__TypeCtorInfo_184_184, analysis__TypeInfo_185_185, ((MR_Box) (analysis__ModuleName_11)), ((MR_Box) (analysis__OldMap_70)), analysis__OldAnalysisResults0_32, &analysis__OldAnalysisResults_33);
        }
        analysis__TypeClassInfo_for_compiler_186 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 0)));
        analysis__Var_129 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 1));
        analysis__Var_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 2)));
        analysis__Var_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 3)));
        analysis__Var_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 4)));
        analysis__Var_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 5)));
        analysis__Var_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 6)));
        analysis__Var_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 7)));
        analysis__Var_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 8)));
        analysis__Var_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 9)));
        analysis__Var_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 10)));
        {
          analysis__STATE_VARIABLE_Info_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_49_49, 0) = ((MR_Box) (analysis__TypeClassInfo_for_compiler_186));
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_49_49, 1) = analysis__Var_129;
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_49_49, 2) = ((MR_Box) (analysis__Var_130));
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_49_49, 3) = ((MR_Box) (analysis__Var_131));
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_49_49, 4) = ((MR_Box) (analysis__Var_132));
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_49_49, 5) = ((MR_Box) (analysis__Var_133));
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_49_49, 6) = ((MR_Box) (analysis__Var_134));
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_49_49, 7) = ((MR_Box) (analysis__OldAnalysisResults_33));
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_49_49, 8) = ((MR_Box) (analysis__Var_136));
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_49_49, 9) = ((MR_Box) (analysis__Var_137));
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_49_49, 10) = ((MR_Box) (analysis__Var_138));
        }
      }
    else
      {
        MR_Word analysis__OldResult_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis__MaybeResult_21, (MR_Integer) 0)));
        MR_Box analysis__OldAnswer_25 = (MR_hl_field(MR_mktag(0), analysis__OldResult_23, (MR_Integer) 1));
        MR_Word analysis__OldStatus_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__OldResult_23, (MR_Integer) 2)));
        MR_Box analysis___OldCall_24 = (MR_hl_field(MR_mktag(0), analysis__OldResult_23, (MR_Integer) 0));
        MR_Word analysis__TypeClassInfo_for_answer_pattern_149;
        MR_Word analysis__TypeClassInfo_for_partial_order_151;

        {
          mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_148, (MR_Integer) 2, &analysis__TypeClassInfo_for_answer_pattern_149);
        }
        {
          mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_answer_pattern_149, (MR_Integer) 1, &analysis__TypeClassInfo_for_partial_order_151);
        }
        {
          analysis__succeeded = analysis__equivalent_3_p_0(analysis__TypeClassInfo_for_partial_order_151, analysis__FuncInfo_20, analysis__NewAnswer_18, analysis__OldAnswer_25);
        }
        if (analysis__succeeded)
          {
            {
              analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_52_95_95_91_54_93_95_48_3_p_0(analysis__TypeClassInfo_for_analysis_148, analysis__ModuleName_11, analysis__FuncId_13, analysis__Call_17, analysis__NewAnswer_18);
            }
            analysis__succeeded = (analysis__NewStatus_19 == analysis__OldStatus_26);
            if (analysis__succeeded)
              analysis__STATE_VARIABLE_Info_49_49 = analysis__STATE_VARIABLE_Info_0_42;
            else
              {
                MR_Word analysis__OldMap0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 7)));
                MR_Word analysis__OldMap_28;
                MR_Word analysis__TypeClassInfo_for_compiler_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 0)));
                MR_Box analysis__Var_73 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 1));
                MR_Word analysis__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 2)));
                MR_Word analysis__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 3)));
                MR_Word analysis__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 4)));
                MR_Word analysis__Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 5)));
                MR_Word analysis__Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 6)));
                MR_Word analysis__Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 8)));
                MR_Word analysis__Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 9)));
                MR_Word analysis__Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 10)));
                MR_Word analysis__TypeClassInfo_for_compiler_160;
                MR_Box analysis__Var_82;
                MR_Word analysis__Var_83;
                MR_Word analysis__Var_84;
                MR_Word analysis__Var_85;
                MR_Word analysis__Var_86;
                MR_Word analysis__Var_87;
                MR_Word analysis__Var_89;
                MR_Word analysis__Var_90;
                MR_Word analysis__Var_91;
                MR_Word analysis__Var_88;

                {
                  analysis__replace_result_in_analysis_map_8_p_0(analysis__TypeClassInfo_for_analysis_148, analysis__ModuleName_11, analysis__FuncId_13, analysis__FuncInfo_20, analysis__Call_17, analysis__NewAnswer_18, analysis__NewStatus_19, analysis__OldMap0_27, &analysis__OldMap_28);
                }
                analysis__TypeClassInfo_for_compiler_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 0)));
                analysis__Var_82 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 1));
                analysis__Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 2)));
                analysis__Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 3)));
                analysis__Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 4)));
                analysis__Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 5)));
                analysis__Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 6)));
                analysis__Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 7)));
                analysis__Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 8)));
                analysis__Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 9)));
                analysis__Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 10)));
                {
                  analysis__STATE_VARIABLE_Info_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_49_49, 0) = ((MR_Box) (analysis__TypeClassInfo_for_compiler_160));
                  MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_49_49, 1) = analysis__Var_82;
                  MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_49_49, 2) = ((MR_Box) (analysis__Var_83));
                  MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_49_49, 3) = ((MR_Box) (analysis__Var_84));
                  MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_49_49, 4) = ((MR_Box) (analysis__Var_85));
                  MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_49_49, 5) = ((MR_Box) (analysis__Var_86));
                  MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_49_49, 6) = ((MR_Box) (analysis__Var_87));
                  MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_49_49, 7) = ((MR_Box) (analysis__OldMap_28));
                  MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_49_49, 8) = ((MR_Box) (analysis__Var_89));
                  MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_49_49, 9) = ((MR_Box) (analysis__Var_90));
                  MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_49_49, 10) = ((MR_Box) (analysis__Var_91));
                }
              }
          }
        else
          {
            MR_Word analysis__TypeCtorInfo_168_168;
            MR_Word analysis__TypeClassInfo_for_call_pattern_170;
            MR_Word analysis__Status_29;
            MR_Word analysis__OldArcs_30;
            MR_Word analysis__DepModules_31;
            MR_Word analysis__STATE_VARIABLE_Info_50_50;
            MR_Word analysis__Var_51;
            MR_Word analysis__Var_54;
            MR_Word analysis__OldMap0_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 7)));
            MR_Word analysis__OldMap_68;
            MR_Word analysis__TypeClassInfo_for_compiler_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 0)));
            MR_Box analysis__Var_92 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 1));
            MR_Word analysis__Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 2)));
            MR_Word analysis__Var_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 3)));
            MR_Word analysis__Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 4)));
            MR_Word analysis__Var_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 5)));
            MR_Word analysis__Var_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 6)));
            MR_Word analysis__Var_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 8)));
            MR_Word analysis__Var_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 9)));
            MR_Word analysis__Var_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 10)));
            MR_Word analysis__TypeClassInfo_for_compiler_162;
            MR_Box analysis__Var_101;
            MR_Word analysis__Var_102;
            MR_Word analysis__Var_103;
            MR_Word analysis__Var_104;
            MR_Word analysis__Var_105;
            MR_Word analysis__Var_106;
            MR_Word analysis__Var_108;
            MR_Word analysis__Var_109;
            MR_Word analysis__Var_110;
            MR_Word analysis__Var_107;
            MR_Word analysis__TypeClassInfo_for_answer_pattern_163;
            MR_Word analysis__TypeClassInfo_for_partial_order_165;
            MR_Word analysis__TypeClassInfo_for_compiler_167;
            MR_Box analysis__Var_111;
            MR_Word analysis__Var_112;
            MR_Word analysis__Var_113;
            MR_Word analysis__Var_114;
            MR_Word analysis__Var_115;
            MR_Word analysis__Var_116;
            MR_Word analysis__Var_117;
            MR_Word analysis__Var_118;
            MR_Word analysis__Var_119;
            MR_Box analysis__conv1_OldArcs_30;
            MR_Box analysis__conv4_STATE_VARIABLE_Info_49_49;
            MR_Box analysis__conv3_STATE_VARIABLE_IO_48_48;

            {
              analysis__replace_result_in_analysis_map_8_p_0(analysis__TypeClassInfo_for_analysis_148, analysis__ModuleName_11, analysis__FuncId_13, analysis__FuncInfo_20, analysis__Call_17, analysis__NewAnswer_18, analysis__NewStatus_19, analysis__OldMap0_67, &analysis__OldMap_68);
            }
            analysis__TypeClassInfo_for_compiler_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 0)));
            analysis__Var_101 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 1));
            analysis__Var_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 2)));
            analysis__Var_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 3)));
            analysis__Var_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 4)));
            analysis__Var_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 5)));
            analysis__Var_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 6)));
            analysis__Var_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 7)));
            analysis__Var_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 8)));
            analysis__Var_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 9)));
            analysis__Var_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_42, (MR_Integer) 10)));
            {
              analysis__STATE_VARIABLE_Info_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, 0) = ((MR_Box) (analysis__TypeClassInfo_for_compiler_162));
              MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, 1) = analysis__Var_101;
              MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, 2) = ((MR_Box) (analysis__Var_102));
              MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, 3) = ((MR_Box) (analysis__Var_103));
              MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, 4) = ((MR_Box) (analysis__Var_104));
              MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, 5) = ((MR_Box) (analysis__Var_105));
              MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, 6) = ((MR_Box) (analysis__Var_106));
              MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, 7) = ((MR_Box) (analysis__OldMap_68));
              MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, 8) = ((MR_Box) (analysis__Var_108));
              MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, 9) = ((MR_Box) (analysis__Var_109));
              MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, 10) = ((MR_Box) (analysis__Var_110));
            }
            {
              mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_148, (MR_Integer) 2, &analysis__TypeClassInfo_for_answer_pattern_163);
            }
            {
              mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_answer_pattern_163, (MR_Integer) 1, &analysis__TypeClassInfo_for_partial_order_165);
            }
            {
              analysis__succeeded = analysis__more_precise_than_3_p_0(analysis__TypeClassInfo_for_partial_order_165, analysis__FuncInfo_20, analysis__NewAnswer_18, analysis__OldAnswer_25);
            }
            if (analysis__succeeded)
              analysis__Status_29 = (MR_Integer) 1;
            else
              analysis__Status_29 = (MR_Integer) 0;
            analysis__TypeClassInfo_for_compiler_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, (MR_Integer) 0)));
            analysis__Var_111 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, (MR_Integer) 1));
            analysis__Var_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, (MR_Integer) 2)));
            analysis__Var_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, (MR_Integer) 3)));
            analysis__Var_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, (MR_Integer) 4)));
            analysis__Var_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, (MR_Integer) 5)));
            analysis__Var_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, (MR_Integer) 6)));
            analysis__Var_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, (MR_Integer) 7)));
            analysis__Var_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, (MR_Integer) 8)));
            analysis__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, (MR_Integer) 9)));
            analysis__Var_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_50_50, (MR_Integer) 10)));
            analysis__TypeCtorInfo_168_168 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
            {
              mercury__map__lookup_3_p_0(analysis__TypeCtorInfo_168_168, (MR_Word) &analysis_scalar_common_2[5], analysis__Var_51, ((MR_Box) (analysis__ModuleName_11)), &analysis__conv1_OldArcs_30);
            }
            analysis__OldArcs_30 = ((MR_Word) analysis__conv1_OldArcs_30);
            {
              mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_148, (MR_Integer) 1, &analysis__TypeClassInfo_for_call_pattern_170);
            }
            {
              analysis__DepModules_31 = analysis__imdg_dependent_modules_5_f_0(analysis__TypeClassInfo_for_call_pattern_170, analysis__OldArcs_30, analysis__AnalysisName_12, analysis__FuncId_13, analysis__FuncInfo_20, analysis__Call_17);
            }
            {
              analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_51_95_95_91_54_93_95_48_3_p_0(analysis__TypeClassInfo_for_analysis_148, analysis__NewAnswer_18, analysis__OldAnswer_25, analysis__Status_29, analysis__DepModules_31);
            }
            {
              analysis__Var_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), analysis__Var_54, 0) = ((MR_Box) (&analysis_scalar_common_12[0]));
              MR_hl_field(MR_mktag(0), analysis__Var_54, 1) = ((MR_Box) (analysis__update_analysis_registry_5_9_p_0_1));
              MR_hl_field(MR_mktag(0), analysis__Var_54, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), analysis__Var_54, 3) = ((MR_Box) (analysis__Globals_22));
              MR_hl_field(MR_mktag(0), analysis__Var_54, 4) = ((MR_Box) (analysis__Status_29));
            }
            {
              mercury__set__fold2_6_p_2(analysis__TypeCtorInfo_168_168, (MR_Word) &analysis__analysis__type_ctor_info_analysis_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, analysis__Var_54, analysis__DepModules_31, ((MR_Box) (analysis__STATE_VARIABLE_Info_50_50)), &analysis__conv4_STATE_VARIABLE_Info_49_49, ((MR_Box) ((MR_Integer) 0)), &analysis__conv3_STATE_VARIABLE_IO_48_48);
            }
            analysis__STATE_VARIABLE_Info_49_49 = ((MR_Word) analysis__conv4_STATE_VARIABLE_Info_49_49);
          }
      }
    analysis__TypeClassInfo_for_compiler_187 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_49_49, (MR_Integer) 0)));
    analysis__Var_139 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_49_49, (MR_Integer) 1));
    analysis__Var_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_49_49, (MR_Integer) 2)));
    analysis__Var_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_49_49, (MR_Integer) 3)));
    analysis__Var_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_49_49, (MR_Integer) 4)));
    analysis__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_49_49, (MR_Integer) 5)));
    analysis__Var_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_49_49, (MR_Integer) 6)));
    analysis__Var_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_49_49, (MR_Integer) 7)));
    analysis__Var_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_49_49, (MR_Integer) 8)));
    analysis__Var_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_49_49, (MR_Integer) 9)));
    analysis__Var_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_49_49, (MR_Integer) 10)));
    {
      analysis__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &analysis_scalar_common_2[1], analysis__Var_57, ((MR_Box) (analysis__ModuleName_11)), &analysis__conv5_ModuleRequests_34);
    }
    if (analysis__succeeded)
      {
        analysis__ModuleRequests_34 = ((MR_Word) analysis__conv5_ModuleRequests_34);
        analysis__succeeded = MR_TRUE;
      }
    if (analysis__succeeded)
      {
        analysis__TypeCtorInfo_190_190 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
        analysis__TypeInfo_191_191 = (MR_Word) &analysis_scalar_common_2[0];
        {
          analysis__succeeded = mercury__map__elem_2_f_0(analysis__TypeCtorInfo_190_190, analysis__TypeInfo_191_191, ((MR_Box) (analysis__AnalysisName_12)), analysis__ModuleRequests_34, &analysis__conv6_Var_58);
        }
        if (analysis__succeeded)
          {
            analysis__Var_58 = ((MR_Word) analysis__conv6_Var_58);
            analysis__succeeded = MR_TRUE;
          }
        if (analysis__succeeded)
          {
            analysis__TypeCtorInfo_192_192 = (MR_Word) &analysis__analysis__type_ctor_info_func_id_0;
            analysis__TypeInfo_193_193 = (MR_Word) &analysis_scalar_common_1[0];
            {
              analysis__succeeded = mercury__map__elem_2_f_0(analysis__TypeCtorInfo_192_192, analysis__TypeInfo_193_193, ((MR_Box) (analysis__FuncId_13)), analysis__Var_58, &analysis__conv7_Requests_35);
            }
            if (analysis__succeeded)
              {
                analysis__Requests_35 = ((MR_Word) analysis__conv7_Requests_35);
                analysis__succeeded = MR_TRUE;
              }
            if (analysis__succeeded)
              {
                analysis__succeeded = ((MR_tag((MR_Word) analysis__Requests_35)) == (MR_mktag((MR_Integer) 1)));
                if (analysis__succeeded)
                  {
                    analysis__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis__Requests_35, (MR_Integer) 0)));
                    analysis__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis__Requests_35, (MR_Integer) 1)));
                  }
              }
          }
      }
    if (analysis__succeeded)
      {
        MR_Word analysis__TypeCtorInfo_195_195 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
        MR_Word analysis__Callers0_38;
        MR_Word analysis__Callers_41;
        MR_Word analysis__Var_63;
        MR_Box analysis__conv11_STATE_VARIABLE_Info_43;
        MR_Box analysis__conv10_STATE_VARIABLE_IO_45;

        {
          analysis__Callers0_38 = mercury__list__filter_map_2_f_0((MR_Word) &analysis__analysis__type_ctor_info_analysis_request_0, analysis__TypeCtorInfo_195_195, (MR_Word) &analysis_scalar_common_2[11], analysis__Requests_35);
        }
        {
          mercury__list__sort_and_remove_dups_2_p_0(analysis__TypeCtorInfo_195_195, analysis__Callers0_38, &analysis__Callers_41);
        }
        {
          analysis__Var_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), analysis__Var_63, 0) = ((MR_Box) (&analysis_scalar_common_12[0]));
          MR_hl_field(MR_mktag(0), analysis__Var_63, 1) = ((MR_Box) (analysis__update_analysis_registry_5_9_p_0_3));
          MR_hl_field(MR_mktag(0), analysis__Var_63, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), analysis__Var_63, 3) = ((MR_Box) (analysis__Globals_22));
          MR_hl_field(MR_mktag(0), analysis__Var_63, 4) = ((MR_Box) ((MR_Integer) 1));
        }
        {
          mercury__list__foldl2_6_p_2(analysis__TypeCtorInfo_195_195, (MR_Word) &analysis__analysis__type_ctor_info_analysis_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, analysis__Var_63, analysis__Callers_41, ((MR_Box) (analysis__STATE_VARIABLE_Info_49_49)), &analysis__conv11_STATE_VARIABLE_Info_43, ((MR_Box) ((MR_Integer) 0)), &analysis__conv10_STATE_VARIABLE_IO_45);
        }
        *analysis__STATE_VARIABLE_Info_43 = ((MR_Word) analysis__conv11_STATE_VARIABLE_Info_43);
      }
    else
      *analysis__STATE_VARIABLE_Info_43 = analysis__STATE_VARIABLE_Info_49_49;
  }
}

static void MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_52_95_95_91_54_93_95_48_3_p_0(
  MR_Word analysis__Var_11,
  MR_Word analysis__Var_12,
  MR_Word analysis__Var_13,
  MR_Box analysis__Var_14,
  MR_Box analysis__Var_15)
{
  {
    MR_bool analysis__succeeded;
    MR_Word analysis__Debug_6;

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
	 analysis__Debug_6  = X;
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
    switch (analysis__Debug_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          analysis__IntroducedFrom__pred__update_analysis_registry_5__899__1_7_p_0(analysis__Var_11, analysis__Var_12, analysis__Var_13, analysis__Var_14, analysis__Var_15);
        }
        break;
    }
  }
}

static void MR_CALL 
analysis__IntroducedFrom__pred__update_analysis_registry_5__899__1_7_p_0(
  MR_Word analysis__TypeClassInfo_for_analysis_148,
  MR_Word analysis__ModuleName_11,
  MR_Word analysis__FuncId_13,
  MR_Box analysis__Call_17,
  MR_Box analysis__NewAnswer_18)
{
  {
    MR_bool analysis__succeeded;
    MR_Word analysis__TypeInfo_156_156;
    MR_Word analysis__TypeInfo_158_158;

    {
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_148, (MR_Integer) 4, &analysis__TypeInfo_156_156);
    }
    {
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_148, (MR_Integer) 5, &analysis__TypeInfo_158_158);
    }
    {
      analysis__write_no_change_in_result_6_p_0(analysis__TypeInfo_156_156, analysis__TypeInfo_158_158, analysis__ModuleName_11, analysis__FuncId_13, analysis__Call_17, analysis__NewAnswer_18);
    }
  }
}

void MR_CALL 
analysis__write_no_change_in_result_6_p_0(
  MR_Word analysis__TypeInfo_for_Call_27,
  MR_Word analysis__TypeInfo_for_Answer_28,
  MR_Word analysis__ModuleName_7,
  MR_Word analysis__FuncId_8,
  MR_Box analysis__Call_9,
  MR_Box analysis__NewAnswer_10)
{
  {
    MR_bool analysis__succeeded;

    {
      mercury__io__write_string_3_p_0((MR_String) "% No change in the result ");
    }
    {
      mercury__io__write_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (analysis__ModuleName_7)));
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ".");
    }
    {
      mercury__io__write_3_p_0((MR_Word) &analysis__analysis__type_ctor_info_func_id_0, ((MR_Box) (analysis__FuncId_8)));
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ":");
    }
    {
      mercury__io__write_3_p_0(analysis__TypeInfo_for_Call_27, analysis__Call_9);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " --> ");
    }
    {
      mercury__io__write_3_p_0(analysis__TypeInfo_for_Answer_28, analysis__NewAnswer_10);
    }
    {
      mercury__io__nl_2_p_0();
    }
  }
}

static void MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_51_95_95_91_54_93_95_48_3_p_0(
  MR_Word analysis__Var_11,
  MR_Box analysis__Var_12,
  MR_Box analysis__Var_13,
  MR_Word analysis__Var_14,
  MR_Word analysis__Var_15)
{
  {
    MR_bool analysis__succeeded;
    MR_Word analysis__Debug_6;

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
	 analysis__Debug_6  = X;
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
    switch (analysis__Debug_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          analysis__IntroducedFrom__pred__update_analysis_registry_5__928__1_7_p_0(analysis__Var_11, analysis__Var_12, analysis__Var_13, analysis__Var_14, analysis__Var_15);
        }
        break;
    }
  }
}

static void MR_CALL 
analysis__IntroducedFrom__pred__update_analysis_registry_5__928__1_7_p_0(
  MR_Word analysis__TypeClassInfo_for_analysis_148,
  MR_Box analysis__NewAnswer_18,
  MR_Box analysis__OldAnswer_25,
  MR_Word analysis__Status_29,
  MR_Word analysis__DepModules_31)
{
  {
    MR_bool analysis__succeeded;
    MR_Word analysis__TypeInfo_175_175;

    {
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_148, (MR_Integer) 5, &analysis__TypeInfo_175_175);
    }
    {
      analysis__write_changed_answer_6_p_0(analysis__TypeInfo_175_175, analysis__OldAnswer_25, analysis__NewAnswer_18, analysis__Status_29, analysis__DepModules_31);
    }
  }
}

void MR_CALL 
analysis__write_changed_answer_6_p_0(
  MR_Word analysis__TypeInfo_for_Answer_29,
  MR_Box analysis__OldAnswer_7,
  MR_Box analysis__NewAnswer_8,
  MR_Word analysis__Status_9,
  MR_Word analysis__DepModules_10)
{
  {
    MR_bool analysis__succeeded;

    {
      mercury__io__write_string_3_p_0((MR_String) "% ");
    }
    {
      mercury__io__write_3_p_0(analysis__TypeInfo_for_Answer_29, analysis__OldAnswer_7);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " changed to ");
    }
    {
      mercury__io__write_3_p_0(analysis__TypeInfo_for_Answer_29, analysis__NewAnswer_8);
    }
    {
      mercury__io__nl_2_p_0();
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "Mark dependent modules as ");
    }
    {
      mercury__io__write_3_p_0((MR_Word) &analysis__analysis__type_ctor_info_analysis_status_0, ((MR_Box) (analysis__Status_9)));
    }
    {
      mercury__io__nl_2_p_0();
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "The modules to mark are: ");
    }
    {
      mercury__io__write_3_p_0((MR_Word) &analysis_scalar_common_1[3], ((MR_Box) (analysis__DepModules_10)));
    }
    {
      mercury__io__nl_2_p_0();
    }
  }
}

MR_bool MR_CALL 
analysis__equivalent_3_p_0(
  MR_Word analysis__TypeClassInfo_for_partial_order_4,
  MR_Box analysis__HeadVar__1_1,
  MR_Box analysis__HeadVar__2_2,
  MR_Box analysis__HeadVar__3_3)
{
  {
    MR_bool analysis__succeeded;
    MR_bool MR_CALL (* analysis__func_0)(MR_Box, MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_partial_order_4, (MR_Integer) 0)), (MR_Integer) 6)));

    {
      analysis__succeeded = analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_partial_order_4), analysis__HeadVar__1_1, analysis__HeadVar__2_2, analysis__HeadVar__3_3);
    }
    return analysis__succeeded;
  }
}

MR_bool MR_CALL 
analysis__more_precise_than_3_p_0(
  MR_Word analysis__TypeClassInfo_for_partial_order_4,
  MR_Box analysis__HeadVar__1_1,
  MR_Box analysis__HeadVar__2_2,
  MR_Box analysis__HeadVar__3_3)
{
  {
    MR_bool analysis__succeeded;
    MR_bool MR_CALL (* analysis__func_0)(MR_Box, MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_partial_order_4, (MR_Integer) 0)), (MR_Integer) 5)));

    {
      analysis__succeeded = analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_partial_order_4), analysis__HeadVar__1_1, analysis__HeadVar__2_2, analysis__HeadVar__3_3);
    }
    return analysis__succeeded;
  }
}

void MR_CALL 
analysis__get_func_info_6_p_0(
  MR_Word analysis__TypeClassInfo_for_analysis_7,
  MR_Word analysis__HeadVar__1_1,
  MR_Word analysis__HeadVar__2_2,
  MR_Word analysis__HeadVar__3_3,
  MR_Box * analysis__HeadVar__6_6)
{
  {
    MR_bool analysis__succeeded;
    void MR_CALL (* analysis__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_analysis_7, (MR_Integer) 0)), (MR_Integer) 10)));

    {
      analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_analysis_7), ((MR_Box) (analysis__HeadVar__1_1)), ((MR_Box) (analysis__HeadVar__2_2)), ((MR_Box) (analysis__HeadVar__3_3)), analysis__HeadVar__6_6);
    }
  }
}

static MR_bool MR_CALL 
analysis__imdg_dependent_modules_5_f_0_1(
  MR_Box analysis__closure_arg,
  MR_Box analysis__wrapper_arg_1,
  MR_Box * analysis__wrapper_arg_2)
{
  {
    MR_bool analysis__succeeded;
    MR_Box analysis__closure = analysis__closure_arg;
    MR_Word analysis__conv2_ModuleName_8;

    {
      analysis__succeeded = analysis__arc_module_name_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 3))), (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 4)), (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 5)), ((MR_Word) analysis__wrapper_arg_1), &analysis__conv2_ModuleName_8);
    }
    if (analysis__succeeded)
      {
        *analysis__wrapper_arg_2 = ((MR_Box) (analysis__conv2_ModuleName_8));
        analysis__succeeded = MR_TRUE;
      }
    return analysis__succeeded;
  }
}

MR_Word MR_CALL 
analysis__imdg_dependent_modules_5_f_0(
  MR_Word analysis__TypeClassInfo_for_call_pattern_16,
  MR_Word analysis__ModuleMap_7,
  MR_String analysis__AnalysisName_8,
  MR_Word analysis__FuncId_9,
  MR_Box analysis__FuncInfo_10,
  MR_Box analysis__Call_11)
{
  {
    MR_bool analysis__succeeded;
    MR_Word analysis__HeadVar__6_6;
    MR_Word analysis__IMDGEntries_13;
    MR_Word analysis__TypeCtorInfo_19_19;
    MR_Word analysis__TypeInfo_20_20;
    MR_Word analysis__FuncAnalysisMap_12;
    MR_Box analysis__conv0_FuncAnalysisMap_12;
    MR_Box analysis__conv1_IMDGEntries_13;

    {
      analysis__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &analysis_scalar_common_2[4], analysis__ModuleMap_7, ((MR_Box) (analysis__AnalysisName_8)), &analysis__conv0_FuncAnalysisMap_12);
    }
    if (analysis__succeeded)
      {
        analysis__FuncAnalysisMap_12 = ((MR_Word) analysis__conv0_FuncAnalysisMap_12);
        analysis__succeeded = MR_TRUE;
      }
    if (analysis__succeeded)
      {
        analysis__TypeCtorInfo_19_19 = (MR_Word) &analysis__analysis__type_ctor_info_func_id_0;
        analysis__TypeInfo_20_20 = (MR_Word) &analysis_scalar_common_1[2];
        {
          analysis__succeeded = mercury__map__search_3_p_0(analysis__TypeCtorInfo_19_19, analysis__TypeInfo_20_20, analysis__FuncAnalysisMap_12, ((MR_Box) (analysis__FuncId_9)), &analysis__conv1_IMDGEntries_13);
        }
        if (analysis__succeeded)
          {
            analysis__IMDGEntries_13 = ((MR_Word) analysis__conv1_IMDGEntries_13);
            analysis__succeeded = MR_TRUE;
          }
      }
    if (analysis__succeeded)
      {
        MR_Word analysis__TypeCtorInfo_21_21 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
        MR_Word analysis__Var_14;
        MR_Word analysis__Var_15;

        {
          analysis__Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), analysis__Var_15, 0) = ((MR_Box) (&analysis_scalar_common_8[2]));
          MR_hl_field(MR_mktag(0), analysis__Var_15, 1) = ((MR_Box) (analysis__imdg_dependent_modules_5_f_0_1));
          MR_hl_field(MR_mktag(0), analysis__Var_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(0), analysis__Var_15, 3) = ((MR_Box) (analysis__TypeClassInfo_for_call_pattern_16));
          MR_hl_field(MR_mktag(0), analysis__Var_15, 4) = analysis__FuncInfo_10;
          MR_hl_field(MR_mktag(0), analysis__Var_15, 5) = analysis__Call_11;
        }
        {
          analysis__Var_14 = mercury__list__filter_map_2_f_0((MR_Word) &analysis__analysis__type_ctor_info_imdg_arc_0, analysis__TypeCtorInfo_21_21, analysis__Var_15, analysis__IMDGEntries_13);
        }
        {
          analysis__HeadVar__6_6 = mercury__set__from_list_1_f_0(analysis__TypeCtorInfo_21_21, analysis__Var_14);
        }
      }
    else
      {
        {
          analysis__HeadVar__6_6 = mercury__set__init_0_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0);
        }
      }
    return analysis__HeadVar__6_6;
  }
}

void MR_CALL 
analysis__replace_result_in_analysis_map_8_p_0(
  MR_Word analysis__TypeClassInfo_for_analysis_24,
  MR_Word analysis__ModuleName_9,
  MR_Word analysis__FuncId_10,
  MR_Box analysis__FuncInfo_11,
  MR_Box analysis__CallPattern_12,
  MR_Box analysis__AnswerPattern_13,
  MR_Word analysis__Status_14,
  MR_Word analysis__Map0_15,
  MR_Word * analysis__Map_16)
{
  {
    MR_bool analysis__succeeded;
    MR_Word analysis__TypeCtorInfo_25_25;
    MR_Word analysis__TypeInfo_26_26;
    MR_Word analysis__TypeCtorInfo_27_27;
    MR_Word analysis__TypeInfo_28_28;
    MR_Word analysis__TypeCtorInfo_29_29;
    MR_Word analysis__TypeInfo_30_30;
    MR_String analysis__AnalysisName_17;
    MR_Word analysis__ModuleResults0_18;
    MR_Word analysis__AnalysisResults0_19;
    MR_Word analysis__FuncResults0_20;
    MR_Word analysis__FuncResults_21;
    MR_Word analysis__Var_22;
    MR_Word analysis__Var_23;
    MR_Box analysis__Var_31;
    MR_Box analysis__Var_32;
    MR_Box MR_CALL (* analysis__func_0)(MR_Box) = ((MR_Box MR_CALL (*)(MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_analysis_24, (MR_Integer) 0)), (MR_Integer) 5)));
    MR_Box analysis__conv1_AnalysisName_17;
    MR_Box analysis__conv2_ModuleResults0_18;
    MR_Box analysis__conv3_AnalysisResults0_19;
    MR_Box analysis__conv4_FuncResults0_20;

    {
      analysis__conv1_AnalysisName_17 = analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_analysis_24));
    }
    analysis__AnalysisName_17 = ((MR_String) analysis__conv1_AnalysisName_17);
    analysis__TypeCtorInfo_25_25 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    analysis__TypeInfo_26_26 = (MR_Word) &analysis_scalar_common_2[3];
    {
      analysis__conv2_ModuleResults0_18 = mercury__map__lookup_2_f_0(analysis__TypeCtorInfo_25_25, analysis__TypeInfo_26_26, analysis__Map0_15, ((MR_Box) (analysis__ModuleName_9)));
    }
    analysis__ModuleResults0_18 = ((MR_Word) analysis__conv2_ModuleResults0_18);
    analysis__TypeCtorInfo_27_27 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    analysis__TypeInfo_28_28 = (MR_Word) &analysis_scalar_common_2[2];
    {
      analysis__conv3_AnalysisResults0_19 = mercury__map__lookup_2_f_0(analysis__TypeCtorInfo_27_27, analysis__TypeInfo_28_28, analysis__ModuleResults0_18, ((MR_Box) (analysis__AnalysisName_17)));
    }
    analysis__AnalysisResults0_19 = ((MR_Word) analysis__conv3_AnalysisResults0_19);
    analysis__TypeCtorInfo_29_29 = (MR_Word) &analysis__analysis__type_ctor_info_func_id_0;
    analysis__TypeInfo_30_30 = (MR_Word) &analysis_scalar_common_1[1];
    {
      analysis__conv4_FuncResults0_20 = mercury__map__lookup_2_f_0(analysis__TypeCtorInfo_29_29, analysis__TypeInfo_30_30, analysis__AnalysisResults0_19, ((MR_Box) (analysis__FuncId_10)));
    }
    analysis__FuncResults0_20 = ((MR_Word) analysis__conv4_FuncResults0_20);
    {
      analysis__replace_result_in_list_6_p_0(analysis__TypeClassInfo_for_analysis_24, analysis__FuncInfo_11, analysis__CallPattern_12, analysis__AnswerPattern_13, analysis__Status_14, analysis__FuncResults0_20, &analysis__FuncResults_21);
    }
    {
      analysis__Var_23 = mercury__map__det_update_3_f_0(analysis__TypeCtorInfo_29_29, analysis__TypeInfo_30_30, analysis__AnalysisResults0_19, ((MR_Box) (analysis__FuncId_10)), ((MR_Box) (analysis__FuncResults_21)));
    }
    {
      analysis__Var_22 = mercury__map__det_update_3_f_0(analysis__TypeCtorInfo_27_27, analysis__TypeInfo_28_28, analysis__ModuleResults0_18, ((MR_Box) (analysis__AnalysisName_17)), ((MR_Box) (analysis__Var_23)));
    }
    {
      *analysis__Map_16 = mercury__map__det_update_3_f_0(analysis__TypeCtorInfo_25_25, analysis__TypeInfo_26_26, analysis__Map0_15, ((MR_Box) (analysis__ModuleName_9)), ((MR_Box) (analysis__Var_22)));
    }
  }
}

void MR_CALL 
analysis__replace_result_in_list_6_p_0(
  MR_Word analysis__TypeClassInfo_for_analysis_25,
  MR_Box analysis__FuncInfo_7,
  MR_Box analysis__Call_8,
  MR_Box analysis__Answer_9,
  MR_Word analysis__Status_10,
  MR_Word analysis__Results0_11,
  MR_Word * analysis__Results_12)
{
  {
    MR_bool analysis__succeeded;

    if ((analysis__Results0_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "analysis", (MR_String) "predicate \140analysis.replace_result_in_list\'/6", (MR_String) "found no result to replace");
          return;
        }
      }
    else
      {
        MR_Word analysis__TypeInfo_26_26;
        MR_Word analysis__TypeClassInfo_for_analysis_27;
        MR_Word analysis__TypeInfo_30_30;
        MR_Word analysis__H0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis__Results0_11, (MR_Integer) 0)));
        MR_Word analysis__T0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis__Results0_11, (MR_Integer) 1)));
        MR_Box analysis__HCall_15;
        MR_Word analysis__H_16;
        MR_Word analysis__T_17;
        MR_Word analysis__Var_18;
        MR_Box analysis__Var_19;
        MR_Box analysis__Var_23;
        MR_Word analysis__Var_24;
        MR_Word analysis__TypeClassInfo_for_call_pattern_31;
        MR_Word analysis__TypeClassInfo_for_partial_order_33;
        MR_bool MR_CALL (* analysis__func_0)(MR_Box, MR_Box, MR_Box, MR_Box);

        analysis__TypeClassInfo_for_analysis_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__H0_13, (MR_Integer) 0)));
        analysis__Var_19 = (MR_hl_field(MR_mktag(0), analysis__H0_13, (MR_Integer) 1));
        analysis__Var_23 = (MR_hl_field(MR_mktag(0), analysis__H0_13, (MR_Integer) 2));
        analysis__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__H0_13, (MR_Integer) 3)));
        {
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_27, (MR_Integer) 4, &analysis__TypeInfo_26_26);
        }
        {
          analysis__Var_18 = mercury__univ__univ_1_f_0(analysis__TypeInfo_26_26, analysis__Var_19);
        }
        {
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_25, (MR_Integer) 4, &analysis__TypeInfo_30_30);
        }
        {
          mercury__univ__det_univ_to_type_2_p_0(analysis__TypeInfo_30_30, analysis__Var_18, &analysis__HCall_15);
        }
        {
          mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_25, (MR_Integer) 1, &analysis__TypeClassInfo_for_call_pattern_31);
        }
        {
          mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_31, (MR_Integer) 1, &analysis__TypeClassInfo_for_partial_order_33);
        }
        analysis__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_partial_order_33, (MR_Integer) 0)), (MR_Integer) 6)));
        {
          analysis__succeeded = analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_partial_order_33), analysis__FuncInfo_7, analysis__Call_8, analysis__HCall_15);
        }
        if (analysis__succeeded)
          {
            {
              analysis__H_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), analysis__H_16, 0) = ((MR_Box) (analysis__TypeClassInfo_for_analysis_25));
              MR_hl_field(MR_mktag(0), analysis__H_16, 1) = analysis__Call_8;
              MR_hl_field(MR_mktag(0), analysis__H_16, 2) = analysis__Answer_9;
              MR_hl_field(MR_mktag(0), analysis__H_16, 3) = ((MR_Box) (analysis__Status_10));
            }
            analysis__T_17 = analysis__T0_14;
          }
        else
          {
            analysis__H_16 = analysis__H0_13;
            {
              analysis__replace_result_in_list_6_p_0(analysis__TypeClassInfo_for_analysis_25, analysis__FuncInfo_7, analysis__Call_8, analysis__Answer_9, analysis__Status_10, analysis__T0_14, &analysis__T_17);
            }
          }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *analysis__Results_12 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (analysis__H_16));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (analysis__T_17));
        }
      }
  }
}

static void MR_CALL 
analysis__update_analysis_registry_4_9_p_0_1(
  MR_Box analysis__closure_arg,
  MR_Box analysis__wrapper_arg_1,
  MR_Box analysis__wrapper_arg_2,
  MR_Box * analysis__wrapper_arg_3,
  MR_Box analysis__wrapper_arg_4,
  MR_Box * analysis__wrapper_arg_5)
{
  {
    MR_Box analysis__closure = analysis__closure_arg;
    MR_Word analysis__conv0_STATE_VARIABLE_Info_43;

    {
      analysis__update_analysis_registry_5_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 4))), ((MR_String) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 6))), ((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2), &analysis__conv0_STATE_VARIABLE_Info_43);
    }
    *analysis__wrapper_arg_3 = ((MR_Box) (analysis__conv0_STATE_VARIABLE_Info_43));
  }
}

void MR_CALL 
analysis__update_analysis_registry_4_9_p_0(
  MR_Word analysis__ModuleInfo_10,
  MR_Word analysis__ModuleName_11,
  MR_String analysis__AnalysisName_12,
  MR_Word analysis__FuncId_13,
  MR_Word analysis__NewResults_14,
  MR_Word analysis__STATE_VARIABLE_Info_0_17,
  MR_Word * analysis__STATE_VARIABLE_Info_18)
{
  {
    MR_bool analysis__succeeded;
    MR_Word analysis__Var_21;
    MR_Box analysis__conv2_STATE_VARIABLE_Info_18;
    MR_Box analysis__conv1_STATE_VARIABLE_IO_20;

    {
      analysis__Var_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), analysis__Var_21, 0) = ((MR_Box) (&analysis_scalar_common_11[1]));
      MR_hl_field(MR_mktag(0), analysis__Var_21, 1) = ((MR_Box) (analysis__update_analysis_registry_4_9_p_0_1));
      MR_hl_field(MR_mktag(0), analysis__Var_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), analysis__Var_21, 3) = ((MR_Box) (analysis__ModuleInfo_10));
      MR_hl_field(MR_mktag(0), analysis__Var_21, 4) = ((MR_Box) (analysis__ModuleName_11));
      MR_hl_field(MR_mktag(0), analysis__Var_21, 5) = ((MR_Box) (analysis__AnalysisName_12));
      MR_hl_field(MR_mktag(0), analysis__Var_21, 6) = ((MR_Box) (analysis__FuncId_13));
    }
    {
      mercury__list__foldl2_6_p_2((MR_Word) &analysis__analysis__type_ctor_info_some_analysis_result_0, (MR_Word) &analysis__analysis__type_ctor_info_analysis_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, analysis__Var_21, analysis__NewResults_14, ((MR_Box) (analysis__STATE_VARIABLE_Info_0_17)), &analysis__conv2_STATE_VARIABLE_Info_18, ((MR_Box) ((MR_Integer) 0)), &analysis__conv1_STATE_VARIABLE_IO_20);
    }
    *analysis__STATE_VARIABLE_Info_18 = ((MR_Word) analysis__conv2_STATE_VARIABLE_Info_18);
  }
}

static void MR_CALL 
analysis__update_analysis_registry_3_8_p_0_1(
  MR_Box analysis__closure_arg,
  MR_Box analysis__wrapper_arg_1,
  MR_Box analysis__wrapper_arg_2,
  MR_Box analysis__wrapper_arg_3,
  MR_Box * analysis__wrapper_arg_4,
  MR_Box analysis__wrapper_arg_5,
  MR_Box * analysis__wrapper_arg_6)
{
  {
    MR_Box analysis__closure = analysis__closure_arg;
    MR_Word analysis__conv0_STATE_VARIABLE_Info_18;

    {
      analysis__update_analysis_registry_4_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 4))), ((MR_String) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 5))), ((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2), ((MR_Word) analysis__wrapper_arg_3), &analysis__conv0_STATE_VARIABLE_Info_18);
    }
    *analysis__wrapper_arg_4 = ((MR_Box) (analysis__conv0_STATE_VARIABLE_Info_18));
  }
}

void MR_CALL 
analysis__update_analysis_registry_3_8_p_0(
  MR_Word analysis__ModuleInfo_9,
  MR_Word analysis__ModuleName_10,
  MR_String analysis__AnalysisName_11,
  MR_Word analysis__FuncMap_12,
  MR_Word analysis__STATE_VARIABLE_Info_0_15,
  MR_Word * analysis__STATE_VARIABLE_Info_16)
{
  {
    MR_bool analysis__succeeded;
    MR_Word analysis__Var_19;
    MR_Box analysis__conv2_STATE_VARIABLE_Info_16;
    MR_Box analysis__conv1_STATE_VARIABLE_IO_18;

    {
      analysis__Var_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), analysis__Var_19, 0) = ((MR_Box) (&analysis_scalar_common_11[0]));
      MR_hl_field(MR_mktag(0), analysis__Var_19, 1) = ((MR_Box) (analysis__update_analysis_registry_3_8_p_0_1));
      MR_hl_field(MR_mktag(0), analysis__Var_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), analysis__Var_19, 3) = ((MR_Box) (analysis__ModuleInfo_9));
      MR_hl_field(MR_mktag(0), analysis__Var_19, 4) = ((MR_Box) (analysis__ModuleName_10));
      MR_hl_field(MR_mktag(0), analysis__Var_19, 5) = ((MR_Box) (analysis__AnalysisName_11));
    }
    {
      mercury__map__foldl2_6_p_2((MR_Word) &analysis__analysis__type_ctor_info_func_id_0, (MR_Word) &analysis_scalar_common_1[1], (MR_Word) &analysis__analysis__type_ctor_info_analysis_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, analysis__Var_19, analysis__FuncMap_12, ((MR_Box) (analysis__STATE_VARIABLE_Info_0_15)), &analysis__conv2_STATE_VARIABLE_Info_16, ((MR_Box) ((MR_Integer) 0)), &analysis__conv1_STATE_VARIABLE_IO_18);
    }
    *analysis__STATE_VARIABLE_Info_16 = ((MR_Word) analysis__conv2_STATE_VARIABLE_Info_16);
  }
}

static void MR_CALL 
analysis__update_analysis_registry_2_7_p_0_1(
  MR_Box analysis__closure_arg,
  MR_Box analysis__wrapper_arg_1,
  MR_Box analysis__wrapper_arg_2,
  MR_Box analysis__wrapper_arg_3,
  MR_Box * analysis__wrapper_arg_4,
  MR_Box analysis__wrapper_arg_5,
  MR_Box * analysis__wrapper_arg_6)
{
  {
    MR_Box analysis__closure = analysis__closure_arg;
    MR_Word analysis__conv0_STATE_VARIABLE_Info_16;

    {
      analysis__update_analysis_registry_3_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 4))), ((MR_String) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2), ((MR_Word) analysis__wrapper_arg_3), &analysis__conv0_STATE_VARIABLE_Info_16);
    }
    *analysis__wrapper_arg_4 = ((MR_Box) (analysis__conv0_STATE_VARIABLE_Info_16));
  }
}

void MR_CALL 
analysis__update_analysis_registry_2_7_p_0(
  MR_Word analysis__ModuleInfo_8,
  MR_Word analysis__ModuleName_9,
  MR_Word analysis__ModuleMap_10,
  MR_Word analysis__STATE_VARIABLE_Info_0_13,
  MR_Word * analysis__STATE_VARIABLE_Info_14)
{
  {
    MR_bool analysis__succeeded;
    MR_Word analysis__Var_17;
    MR_Box analysis__conv2_STATE_VARIABLE_Info_14;
    MR_Box analysis__conv1_STATE_VARIABLE_IO_16;

    {
      analysis__Var_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), analysis__Var_17, 0) = ((MR_Box) (&analysis_scalar_common_10[0]));
      MR_hl_field(MR_mktag(0), analysis__Var_17, 1) = ((MR_Box) (analysis__update_analysis_registry_2_7_p_0_1));
      MR_hl_field(MR_mktag(0), analysis__Var_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), analysis__Var_17, 3) = ((MR_Box) (analysis__ModuleInfo_8));
      MR_hl_field(MR_mktag(0), analysis__Var_17, 4) = ((MR_Box) (analysis__ModuleName_9));
    }
    {
      mercury__map__foldl2_6_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &analysis_scalar_common_2[2], (MR_Word) &analysis__analysis__type_ctor_info_analysis_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, analysis__Var_17, analysis__ModuleMap_10, ((MR_Box) (analysis__STATE_VARIABLE_Info_0_13)), &analysis__conv2_STATE_VARIABLE_Info_14, ((MR_Box) ((MR_Integer) 0)), &analysis__conv1_STATE_VARIABLE_IO_16);
    }
    *analysis__STATE_VARIABLE_Info_14 = ((MR_Word) analysis__conv2_STATE_VARIABLE_Info_14);
  }
}

void MR_CALL 
analysis__more_precise_answer_4_p_0(
  MR_Word analysis__TypeClassInfo_for_analysis_15,
  MR_Box analysis__FuncInfo_5,
  MR_Word analysis__Result_6,
  MR_Word analysis__Best0_7,
  MR_Word * analysis__Best_8)
{
  {
    MR_bool analysis__succeeded;
    MR_Box analysis__ResultAnswer_9 = (MR_hl_field(MR_mktag(0), analysis__Result_6, (MR_Integer) 1));
    MR_Box analysis__BestAnswer0_10 = (MR_hl_field(MR_mktag(0), analysis__Best0_7, (MR_Integer) 1));
    MR_Box analysis__Var_11 = (MR_hl_field(MR_mktag(0), analysis__Result_6, (MR_Integer) 0));
    MR_Word analysis__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Result_6, (MR_Integer) 2)));
    MR_Box analysis__Var_13 = (MR_hl_field(MR_mktag(0), analysis__Best0_7, (MR_Integer) 0));
    MR_Word analysis__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Best0_7, (MR_Integer) 2)));
    MR_Word analysis__TypeClassInfo_for_answer_pattern_16;
    MR_Word analysis__TypeClassInfo_for_partial_order_18;
    MR_bool MR_CALL (* analysis__func_0)(MR_Box, MR_Box, MR_Box, MR_Box);

    {
      mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_15, (MR_Integer) 2, &analysis__TypeClassInfo_for_answer_pattern_16);
    }
    {
      mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_answer_pattern_16, (MR_Integer) 1, &analysis__TypeClassInfo_for_partial_order_18);
    }
    analysis__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_partial_order_18, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      analysis__succeeded = analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_partial_order_18), analysis__FuncInfo_5, analysis__ResultAnswer_9, analysis__BestAnswer0_10);
    }
    if (analysis__succeeded)
      *analysis__Best_8 = analysis__Result_6;
    else
      *analysis__Best_8 = analysis__Best0_7;
  }
}

void MR_CALL 
analysis__enable_debug_messages_3_p_0(
  MR_Word analysis__Debug_4)
{
  {
    MR_bool analysis__succeeded;

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

	X =  analysis__Debug_4 ;
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
}

static void MR_CALL 
analysis__write_analysis_files_7_p_0_4(
  MR_Box analysis__closure_arg,
  MR_Box analysis__wrapper_arg_1,
  MR_Box analysis__wrapper_arg_2,
  MR_Box * analysis__wrapper_arg_3)
{
  {
    MR_Box analysis__closure = analysis__closure_arg;

    {
      analysis__maybe_write_module_imdg_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 4))), ((MR_Word) analysis__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
analysis__write_analysis_files_7_p_0_3(
  MR_Box analysis__closure_arg,
  MR_Box analysis__wrapper_arg_1,
  MR_Box analysis__wrapper_arg_2,
  MR_Box * analysis__wrapper_arg_3)
{
  {
    MR_Box analysis__closure = analysis__closure_arg;

    {
      analysis__maybe_write_module_requests_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 4))), ((MR_Word) analysis__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
analysis__write_analysis_files_7_p_0_2(
  MR_Box analysis__closure_arg,
  MR_Box analysis__wrapper_arg_1,
  MR_Box analysis__wrapper_arg_2,
  MR_Box * analysis__wrapper_arg_3)
{
  {
    MR_Box analysis__closure = analysis__closure_arg;

    {
      analysis__maybe_write_module_overall_status_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 4))), ((MR_Word) analysis__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
analysis__write_analysis_files_7_p_0_1(
  MR_Box analysis__closure_arg,
  MR_Box analysis__wrapper_arg_1,
  MR_Box analysis__wrapper_arg_2,
  MR_Box * analysis__wrapper_arg_3,
  MR_Box analysis__wrapper_arg_4,
  MR_Box * analysis__wrapper_arg_5)
{
  {
    MR_Box analysis__closure = analysis__closure_arg;
    MR_Word analysis__conv0_STATE_VARIABLE_Info_15;

    {
      analysis__load_module_imdg_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 3))), ((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2), &analysis__conv0_STATE_VARIABLE_Info_15);
    }
    *analysis__wrapper_arg_3 = ((MR_Box) (analysis__conv0_STATE_VARIABLE_Info_15));
  }
}

void MR_CALL 
analysis__write_analysis_files_7_p_0(
  MR_Word analysis__TypeClassInfo_for_compiler_115,
  MR_Box analysis__Compiler_8,
  MR_Word analysis__ModuleInfo_9,
  MR_Word analysis__ImportedModule0_10,
  MR_Word analysis__STATE_VARIABLE_Info_0_21,
  MR_Word * analysis__STATE_VARIABLE_Info_22)
{
  {
    MR_bool analysis__succeeded;
    MR_Word analysis__TypeCtorInfo_117_117 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    MR_Word analysis__TypeCtorInfo_125_125;
    MR_Word analysis__ThisModule_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 2)));
    MR_Word analysis__ImportedModules_14;
    MR_Word analysis__LocalModules_15;
    MR_Word analysis__LocalImportedModules_16;
    MR_Word analysis__Globals_17;
    MR_Word analysis__ModuleStatus_18;
    MR_Word analysis__ModuleResults_19;
    MR_String analysis__TimestampFileName_20;
    MR_Word analysis__Var_25;
    MR_Word analysis__STATE_VARIABLE_Info_26_26;
    MR_Word analysis__STATE_VARIABLE_Info_28_28;
    MR_Word analysis__Var_30;
    MR_Word analysis__STATE_VARIABLE_Info_31_31;
    MR_Word analysis__Var_32;
    MR_Word analysis__Var_33;
    MR_Word analysis__Var_39;
    MR_Word analysis__Var_41;
    MR_Word analysis__Var_43;
    MR_Word analysis__Var_46;
    MR_Word analysis__TypeClassInfo_for_compiler_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 0)));
    MR_Box analysis__Var_51 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 1));
    MR_Word analysis__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 3)));
    MR_Word analysis__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 4)));
    MR_Word analysis__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 5)));
    MR_Word analysis__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 6)));
    MR_Word analysis__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 7)));
    MR_Word analysis__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 8)));
    MR_Word analysis__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 9)));
    MR_Word analysis__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 10)));
    MR_Word analysis__TypeClassInfo_for_compiler_118;
    MR_Box analysis__Var_60;
    MR_Word analysis__Var_61;
    MR_Word analysis__Var_62;
    MR_Word analysis__Var_63;
    MR_Word analysis__Var_64;
    MR_Word analysis__Var_65;
    MR_Word analysis__Var_66;
    MR_Word analysis__Var_67;
    MR_Word analysis__Var_68;
    MR_Box analysis__conv2_STATE_VARIABLE_Info_26_26;
    MR_Box analysis__conv1_STATE_VARIABLE_IO_27_27;
    MR_Word analysis__TypeClassInfo_for_compiler_126;
    MR_Box analysis__Var_69;
    MR_Word analysis__Var_70;
    MR_Word analysis__Var_71;
    MR_Word analysis__Var_72;
    MR_Word analysis__Var_73;
    MR_Word analysis__Var_74;
    MR_Word analysis__Var_75;
    MR_Word analysis__Var_76;
    MR_Word analysis__Var_77;
    MR_Word analysis__TypeClassInfo_for_compiler_127;
    MR_Box analysis__Var_78;
    MR_Word analysis__Var_79;
    MR_Word analysis__Var_80;
    MR_Word analysis__Var_81;
    MR_Word analysis__Var_82;
    MR_Word analysis__Var_83;
    MR_Word analysis__Var_84;
    MR_Word analysis__Var_85;
    MR_Word analysis__Var_86;
    MR_Word analysis__TypeClassInfo_for_compiler_129;
    MR_Box analysis__Var_87;
    MR_Word analysis__Var_88;
    MR_Word analysis__Var_89;
    MR_Word analysis__Var_90;
    MR_Word analysis__Var_91;
    MR_Word analysis__Var_93;
    MR_Word analysis__Var_94;
    MR_Word analysis__Var_95;
    MR_Word analysis__Var_96;
    MR_Word analysis__Var_92;
    MR_Word analysis__Var_35;
    MR_Word analysis__TypeClassInfo_for_compiler_130;
    MR_Box analysis__Var_97;
    MR_Word analysis__Var_98;
    MR_Word analysis__Var_99;
    MR_Word analysis__Var_100;
    MR_Word analysis__Var_101;
    MR_Word analysis__Var_102;
    MR_Word analysis__Var_103;
    MR_Word analysis__Var_104;
    MR_Word analysis__Var_105;
    MR_Box analysis__conv3_STATE_VARIABLE_IO_40_40;
    MR_Word analysis__TypeClassInfo_for_compiler_136;
    MR_Box analysis__Var_106;
    MR_Word analysis__Var_107;
    MR_Word analysis__Var_108;
    MR_Word analysis__Var_109;
    MR_Word analysis__Var_110;
    MR_Word analysis__Var_111;
    MR_Word analysis__Var_112;
    MR_Word analysis__Var_113;
    MR_Word analysis__Var_114;
    MR_Box analysis__conv4_ModuleResults_19;
    MR_Box analysis__conv5_STATE_VARIABLE_IO_44_44;
    MR_Box analysis__conv6_STATE_VARIABLE_IO_47_47;

    {
      analysis__ImportedModules_14 = mercury__set__delete_2_f_0(analysis__TypeCtorInfo_117_117, analysis__ImportedModule0_10, ((MR_Box) (analysis__ThisModule_13)));
    }
    analysis__TypeClassInfo_for_compiler_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 0)));
    analysis__Var_60 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 1));
    analysis__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 2)));
    analysis__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 3)));
    analysis__LocalModules_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 4)));
    analysis__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 5)));
    analysis__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 6)));
    analysis__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 7)));
    analysis__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 8)));
    analysis__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 9)));
    analysis__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 10)));
    {
      analysis__LocalImportedModules_16 = mercury__set__intersect_2_f_0(analysis__TypeCtorInfo_117_117, analysis__LocalModules_15, analysis__ImportedModules_14);
    }
    {
      hlds__hlds_module__module_info_get_globals_2_p_0(analysis__ModuleInfo_9, &analysis__Globals_17);
    }
    {
      analysis__Var_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), analysis__Var_25, 0) = ((MR_Box) (&analysis_scalar_common_9[0]));
      MR_hl_field(MR_mktag(0), analysis__Var_25, 1) = ((MR_Box) (analysis__write_analysis_files_7_p_0_1));
      MR_hl_field(MR_mktag(0), analysis__Var_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), analysis__Var_25, 3) = ((MR_Box) (analysis__Globals_17));
    }
    analysis__TypeCtorInfo_125_125 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
    {
      mercury__set__fold2_6_p_2(analysis__TypeCtorInfo_117_117, (MR_Word) &analysis__analysis__type_ctor_info_analysis_info_0, analysis__TypeCtorInfo_125_125, analysis__Var_25, analysis__LocalModules_15, ((MR_Box) (analysis__STATE_VARIABLE_Info_0_21)), &analysis__conv2_STATE_VARIABLE_Info_26_26, ((MR_Box) ((MR_Integer) 0)), &analysis__conv1_STATE_VARIABLE_IO_27_27);
    }
    analysis__STATE_VARIABLE_Info_26_26 = ((MR_Word) analysis__conv2_STATE_VARIABLE_Info_26_26);
    {
      analysis__update_analysis_registry_5_p_0(analysis__ModuleInfo_9, analysis__STATE_VARIABLE_Info_26_26, &analysis__STATE_VARIABLE_Info_28_28);
    }
    analysis__TypeClassInfo_for_compiler_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 0)));
    analysis__Var_69 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 1));
    analysis__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 2)));
    analysis__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 3)));
    analysis__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 4)));
    analysis__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 5)));
    analysis__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 6)));
    analysis__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 7)));
    analysis__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 8)));
    analysis__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 9)));
    analysis__Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 10)));
    {
      analysis__ModuleStatus_18 = analysis__lub_result_statuses_1_f_0(analysis__Var_30);
    }
    analysis__TypeClassInfo_for_compiler_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 0)));
    analysis__Var_78 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 1));
    analysis__Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 2)));
    analysis__Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 3)));
    analysis__Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 4)));
    analysis__Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 5)));
    analysis__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 6)));
    analysis__Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 7)));
    analysis__Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 8)));
    analysis__Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 9)));
    analysis__Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 10)));
    {
      analysis__Var_33 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(analysis__TypeCtorInfo_117_117, (MR_Word) &analysis__analysis__type_ctor_info_analysis_status_0, ((MR_Box) (analysis__ThisModule_13)), analysis__Var_32, ((MR_Box) (analysis__ModuleStatus_18)));
    }
    analysis__TypeClassInfo_for_compiler_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 0)));
    analysis__Var_87 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 1));
    analysis__Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 2)));
    analysis__Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 3)));
    analysis__Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 4)));
    analysis__Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 5)));
    analysis__Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 6)));
    analysis__Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 7)));
    analysis__Var_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 8)));
    analysis__Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 9)));
    analysis__Var_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_28_28, (MR_Integer) 10)));
    {
      analysis__STATE_VARIABLE_Info_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_31_31, 0) = ((MR_Box) (analysis__TypeClassInfo_for_compiler_129));
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_31_31, 1) = analysis__Var_87;
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_31_31, 2) = ((MR_Box) (analysis__Var_88));
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_31_31, 3) = ((MR_Box) (analysis__Var_89));
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_31_31, 4) = ((MR_Box) (analysis__Var_90));
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_31_31, 5) = ((MR_Box) (analysis__Var_91));
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_31_31, 6) = ((MR_Box) (analysis__Var_33));
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_31_31, 7) = ((MR_Box) (analysis__Var_93));
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_31_31, 8) = ((MR_Box) (analysis__Var_94));
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_31_31, 9) = ((MR_Box) (analysis__Var_95));
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_31_31, 10) = ((MR_Box) (analysis__Var_96));
    }
    {
      analysis__update_intermodule_dependencies_4_p_0(analysis__ThisModule_13, analysis__LocalImportedModules_16, analysis__STATE_VARIABLE_Info_31_31, analysis__STATE_VARIABLE_Info_22);
    }
    analysis__TypeClassInfo_for_compiler_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 0)));
    analysis__Var_97 = (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 1));
    analysis__Var_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 2)));
    analysis__Var_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 3)));
    analysis__Var_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 4)));
    analysis__Var_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 5)));
    analysis__Var_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 6)));
    analysis__Var_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 7)));
    analysis__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 8)));
    analysis__Var_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 9)));
    analysis__Var_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 10)));
    {
      analysis__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &analysis_scalar_common_2[2], analysis__Var_35);
    }
    if (analysis__succeeded)
      {
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "analysis", (MR_String) "predicate \140analysis.write_analysis_files\'/7", (MR_String) "new_analysis_results is not empty");
          return;
        }
      }
    {
      analysis__Var_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), analysis__Var_39, 0) = ((MR_Box) (&analysis_scalar_common_8[1]));
      MR_hl_field(MR_mktag(0), analysis__Var_39, 1) = ((MR_Box) (analysis__write_analysis_files_7_p_0_2));
      MR_hl_field(MR_mktag(0), analysis__Var_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), analysis__Var_39, 3) = ((MR_Box) (*analysis__STATE_VARIABLE_Info_22));
      MR_hl_field(MR_mktag(0), analysis__Var_39, 4) = ((MR_Box) (analysis__Globals_17));
    }
    {
      mercury__set__fold_4_p_2(analysis__TypeCtorInfo_117_117, analysis__TypeCtorInfo_125_125, analysis__Var_39, analysis__LocalModules_15, ((MR_Box) ((MR_Integer) 0)), &analysis__conv3_STATE_VARIABLE_IO_40_40);
    }
    analysis__TypeClassInfo_for_compiler_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 0)));
    analysis__Var_106 = (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 1));
    analysis__Var_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 2)));
    analysis__Var_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 3)));
    analysis__Var_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 4)));
    analysis__Var_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 5)));
    analysis__Var_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 6)));
    analysis__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 7)));
    analysis__Var_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 8)));
    analysis__Var_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 9)));
    analysis__Var_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), *analysis__STATE_VARIABLE_Info_22, (MR_Integer) 10)));
    {
      analysis__conv4_ModuleResults_19 = mercury__map__det_elem_2_f_0(analysis__TypeCtorInfo_117_117, (MR_Word) &analysis_scalar_common_2[3], ((MR_Box) (analysis__ThisModule_13)), analysis__Var_41);
    }
    analysis__ModuleResults_19 = ((MR_Word) analysis__conv4_ModuleResults_19);
    {
      analysis__file__write_module_analysis_results_6_p_0(*analysis__STATE_VARIABLE_Info_22, analysis__Globals_17, analysis__ThisModule_13, analysis__ModuleResults_19);
    }
    {
      analysis__Var_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), analysis__Var_43, 0) = ((MR_Box) (&analysis_scalar_common_8[1]));
      MR_hl_field(MR_mktag(0), analysis__Var_43, 1) = ((MR_Box) (analysis__write_analysis_files_7_p_0_3));
      MR_hl_field(MR_mktag(0), analysis__Var_43, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), analysis__Var_43, 3) = ((MR_Box) (*analysis__STATE_VARIABLE_Info_22));
      MR_hl_field(MR_mktag(0), analysis__Var_43, 4) = ((MR_Box) (analysis__Globals_17));
    }
    {
      mercury__set__fold_4_p_2(analysis__TypeCtorInfo_117_117, analysis__TypeCtorInfo_125_125, analysis__Var_43, analysis__LocalImportedModules_16, ((MR_Box) ((MR_Integer) 0)), &analysis__conv5_STATE_VARIABLE_IO_44_44);
    }
    {
      analysis__file__empty_request_file_5_p_0(*analysis__STATE_VARIABLE_Info_22, analysis__Globals_17, analysis__ThisModule_13);
    }
    {
      analysis__Var_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), analysis__Var_46, 0) = ((MR_Box) (&analysis_scalar_common_8[1]));
      MR_hl_field(MR_mktag(0), analysis__Var_46, 1) = ((MR_Box) (analysis__write_analysis_files_7_p_0_4));
      MR_hl_field(MR_mktag(0), analysis__Var_46, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), analysis__Var_46, 3) = ((MR_Box) (*analysis__STATE_VARIABLE_Info_22));
      MR_hl_field(MR_mktag(0), analysis__Var_46, 4) = ((MR_Box) (analysis__Globals_17));
    }
    {
      mercury__set__fold_4_p_2(analysis__TypeCtorInfo_117_117, analysis__TypeCtorInfo_125_125, analysis__Var_46, analysis__LocalImportedModules_16, ((MR_Box) ((MR_Integer) 0)), &analysis__conv6_STATE_VARIABLE_IO_47_47);
    }
    {
      analysis__module_name_to_write_file_name_7_p_0(analysis__TypeClassInfo_for_compiler_115, analysis__Compiler_8, analysis__Globals_17, analysis__ThisModule_13, (MR_String) ".analysis_date", &analysis__TimestampFileName_20);
    }
    {
      parse_tree__module_cmds__touch_datestamp_4_p_0(analysis__Globals_17, analysis__TimestampFileName_20);
    }
  }
}

void MR_CALL 
analysis__module_name_to_write_file_name_7_p_0(
  MR_Word analysis__TypeClassInfo_for_compiler_8,
  MR_Box analysis__HeadVar__1_1,
  MR_Word analysis__HeadVar__2_2,
  MR_Word analysis__HeadVar__3_3,
  MR_String analysis__HeadVar__4_4,
  MR_String * analysis__HeadVar__5_5)
{
  {
    MR_bool analysis__succeeded;
    void MR_CALL (* analysis__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_compiler_8, (MR_Integer) 0)), (MR_Integer) 9)));
    MR_Box analysis__conv2_HeadVar__5_5;
    MR_Box analysis__conv1_HeadVar__7_7;

    {
      analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_compiler_8), analysis__HeadVar__1_1, ((MR_Box) (analysis__HeadVar__2_2)), ((MR_Box) (analysis__HeadVar__3_3)), ((MR_Box) (analysis__HeadVar__4_4)), &analysis__conv2_HeadVar__5_5, ((MR_Box) ((MR_Integer) 0)), &analysis__conv1_HeadVar__7_7);
    }
    *analysis__HeadVar__5_5 = ((MR_String) analysis__conv2_HeadVar__5_5);
  }
}

static MR_Box MR_CALL 
analysis__lub_result_statuses_1_f_0_1(
  MR_Box analysis__closure_arg,
  MR_Box analysis__wrapper_arg_1,
  MR_Box analysis__wrapper_arg_2,
  MR_Box analysis__wrapper_arg_3)
{
  {
    MR_Box analysis__wrapper_arg_4;
    MR_Box analysis__closure = analysis__closure_arg;
    MR_Word analysis__conv0_HeadVar__4_4;

    {
      analysis__conv0_HeadVar__4_4 = analysis__lub_result_statuses_2_3_f_0(((MR_String) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2), ((MR_Word) analysis__wrapper_arg_3));
    }
    analysis__wrapper_arg_4 = ((MR_Box) (analysis__conv0_HeadVar__4_4));
    return analysis__wrapper_arg_4;
  }
}

MR_Word MR_CALL 
analysis__lub_result_statuses_1_f_0(
  MR_Word analysis__ModuleMap_3)
{
  {
    MR_bool analysis__succeeded;
    MR_Word analysis__HeadVar__2_2;
    MR_Box analysis__conv1_HeadVar__2_2;

    {
      analysis__conv1_HeadVar__2_2 = mercury__map__foldl_3_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &analysis_scalar_common_2[2], (MR_Word) &analysis__analysis__type_ctor_info_analysis_status_0, (MR_Word) &analysis_scalar_common_2[10], analysis__ModuleMap_3, ((MR_Box) ((MR_Integer) 2)));
    }
    analysis__HeadVar__2_2 = ((MR_Word) analysis__conv1_HeadVar__2_2);
    return analysis__HeadVar__2_2;
  }
}

static void MR_CALL 
analysis__update_intermodule_dependencies_4_p_0_1(
  MR_Box analysis__closure_arg,
  MR_Box analysis__wrapper_arg_1,
  MR_Box analysis__wrapper_arg_2,
  MR_Box * analysis__wrapper_arg_3)
{
  {
    MR_Box analysis__closure = analysis__closure_arg;
    MR_Word analysis__conv0_STATE_VARIABLE_Info_14;

    {
      analysis__update_intermodule_dependencies_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 3))), ((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2), &analysis__conv0_STATE_VARIABLE_Info_14);
    }
    *analysis__wrapper_arg_3 = ((MR_Box) (analysis__conv0_STATE_VARIABLE_Info_14));
  }
}

void MR_CALL 
analysis__update_intermodule_dependencies_4_p_0(
  MR_Word analysis__ModuleName_5,
  MR_Word analysis__LocalImportedModules_6,
  MR_Word analysis__STATE_VARIABLE_Info_0_8,
  MR_Word * analysis__STATE_VARIABLE_Info_9)
{
  {
    MR_bool analysis__succeeded;
    MR_Word analysis__Var_10;
    MR_Box analysis__conv1_STATE_VARIABLE_Info_9;

    {
      analysis__Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), analysis__Var_10, 0) = ((MR_Box) (&analysis_scalar_common_7[1]));
      MR_hl_field(MR_mktag(0), analysis__Var_10, 1) = ((MR_Box) (analysis__update_intermodule_dependencies_4_p_0_1));
      MR_hl_field(MR_mktag(0), analysis__Var_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), analysis__Var_10, 3) = ((MR_Box) (analysis__ModuleName_5));
    }
    {
      mercury__set__fold_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &analysis__analysis__type_ctor_info_analysis_info_0, analysis__Var_10, analysis__LocalImportedModules_6, ((MR_Box) (analysis__STATE_VARIABLE_Info_0_8)), &analysis__conv1_STATE_VARIABLE_Info_9);
    }
    *analysis__STATE_VARIABLE_Info_9 = ((MR_Word) analysis__conv1_STATE_VARIABLE_Info_9);
  }
}

static void MR_CALL 
analysis__update_analysis_registry_5_p_0_1(
  MR_Box analysis__closure_arg,
  MR_Box analysis__wrapper_arg_1,
  MR_Box analysis__wrapper_arg_2,
  MR_Box analysis__wrapper_arg_3,
  MR_Box * analysis__wrapper_arg_4,
  MR_Box analysis__wrapper_arg_5,
  MR_Box * analysis__wrapper_arg_6)
{
  {
    MR_Box analysis__closure = analysis__closure_arg;
    MR_Word analysis__conv0_STATE_VARIABLE_Info_16;

    {
      analysis__update_analysis_registry_3_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 4))), ((MR_String) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2), ((MR_Word) analysis__wrapper_arg_3), &analysis__conv0_STATE_VARIABLE_Info_16);
    }
    *analysis__wrapper_arg_4 = ((MR_Box) (analysis__conv0_STATE_VARIABLE_Info_16));
  }
}

void MR_CALL 
analysis__update_analysis_registry_5_p_0(
  MR_Word analysis__ModuleInfo_6,
  MR_Word analysis__STATE_VARIABLE_Info_0_10,
  MR_Word * analysis__STATE_VARIABLE_Info_11)
{
  {
    MR_bool analysis__succeeded;
    MR_Word analysis__NewResults_9;
    MR_Word analysis__Var_17;
    MR_Word analysis__STATE_VARIABLE_Info_18_18;
    MR_Word analysis__Var_21;
    MR_Word analysis__Debug_61;
    MR_Word analysis__Var_76;
    MR_Word analysis__TypeClassInfo_for_compiler_52;
    MR_Box analysis__Var_22;
    MR_Word analysis__Var_23;
    MR_Word analysis__Var_24;
    MR_Word analysis__Var_25;
    MR_Word analysis__Var_26;
    MR_Word analysis__Var_27;
    MR_Word analysis__Var_28;
    MR_Word analysis__Var_29;
    MR_Word analysis__Var_30;
    MR_Word analysis__TypeClassInfo_for_compiler_53;
    MR_Box analysis__Var_31;
    MR_Word analysis__Var_32;
    MR_Word analysis__Var_33;
    MR_Word analysis__Var_34;
    MR_Word analysis__Var_35;
    MR_Word analysis__Var_36;
    MR_Word analysis__Var_37;
    MR_Word analysis__Var_38;
    MR_Word analysis__Var_39;
    MR_Box analysis__conv2_STATE_VARIABLE_Info_18_18;
    MR_Box analysis__conv1_STATE_VARIABLE_IO_13;
    MR_Word analysis__TypeClassInfo_for_compiler_56;
    MR_Box analysis__Var_40;
    MR_Word analysis__Var_41;
    MR_Word analysis__Var_42;
    MR_Word analysis__Var_43;
    MR_Word analysis__Var_44;
    MR_Word analysis__Var_45;
    MR_Word analysis__Var_46;
    MR_Word analysis__Var_48;
    MR_Word analysis__Var_49;
    MR_Word analysis__Var_47;

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
	 analysis__Debug_61  = X;
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
    switch (analysis__Debug_61) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__io__write_string_3_p_0((MR_String) "% Updating analysis registry.\n");
        }
        break;
    }
    analysis__TypeClassInfo_for_compiler_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 0)));
    analysis__Var_22 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 1));
    analysis__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 2)));
    analysis__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 3)));
    analysis__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 4)));
    analysis__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 5)));
    analysis__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 6)));
    analysis__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 7)));
    analysis__NewResults_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 8)));
    analysis__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 9)));
    analysis__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 10)));
    analysis__TypeClassInfo_for_compiler_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 0)));
    analysis__Var_31 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 1));
    analysis__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 2)));
    analysis__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 3)));
    analysis__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 4)));
    analysis__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 5)));
    analysis__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 6)));
    analysis__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 7)));
    analysis__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 8)));
    analysis__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 9)));
    analysis__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_10, (MR_Integer) 10)));
    {
      analysis__Var_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), analysis__Var_76, 0) = ((MR_Box) (&analysis_scalar_common_10[0]));
      MR_hl_field(MR_mktag(0), analysis__Var_76, 1) = ((MR_Box) (analysis__update_analysis_registry_5_p_0_1));
      MR_hl_field(MR_mktag(0), analysis__Var_76, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), analysis__Var_76, 3) = ((MR_Box) (analysis__ModuleInfo_6));
      MR_hl_field(MR_mktag(0), analysis__Var_76, 4) = ((MR_Box) (analysis__Var_17));
    }
    {
      mercury__map__foldl2_6_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &analysis_scalar_common_2[2], (MR_Word) &analysis__analysis__type_ctor_info_analysis_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, analysis__Var_76, analysis__NewResults_9, ((MR_Box) (analysis__STATE_VARIABLE_Info_0_10)), &analysis__conv2_STATE_VARIABLE_Info_18_18, ((MR_Box) ((MR_Integer) 0)), &analysis__conv1_STATE_VARIABLE_IO_13);
    }
    analysis__STATE_VARIABLE_Info_18_18 = ((MR_Word) analysis__conv2_STATE_VARIABLE_Info_18_18);
    {
      analysis__Var_21 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &analysis_scalar_common_2[2]);
    }
    analysis__TypeClassInfo_for_compiler_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_18_18, (MR_Integer) 0)));
    analysis__Var_40 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_18_18, (MR_Integer) 1));
    analysis__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_18_18, (MR_Integer) 2)));
    analysis__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_18_18, (MR_Integer) 3)));
    analysis__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_18_18, (MR_Integer) 4)));
    analysis__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_18_18, (MR_Integer) 5)));
    analysis__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_18_18, (MR_Integer) 6)));
    analysis__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_18_18, (MR_Integer) 7)));
    analysis__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_18_18, (MR_Integer) 8)));
    analysis__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_18_18, (MR_Integer) 9)));
    analysis__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_18_18, (MR_Integer) 10)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
      *analysis__STATE_VARIABLE_Info_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (analysis__TypeClassInfo_for_compiler_56));
      MR_hl_field(MR_mktag(0), base, 1) = analysis__Var_40;
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (analysis__Var_41));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (analysis__Var_42));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (analysis__Var_43));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (analysis__Var_44));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (analysis__Var_45));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (analysis__Var_46));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (analysis__Var_21));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (analysis__Var_48));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (analysis__Var_49));
    }
  }
}

void MR_CALL 
analysis__module_is_local_3_p_0(
  MR_Word analysis__Info_4,
  MR_Word analysis__ModuleName_5,
  MR_Word * analysis__IsLocal_6)
{
  {
    MR_bool analysis__succeeded;
    MR_Word analysis__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_4, (MR_Integer) 4)));
    MR_Word analysis__TypeClassInfo_for_compiler_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_4, (MR_Integer) 0)));
    MR_Box analysis__Var_8 = (MR_hl_field(MR_mktag(0), analysis__Info_4, (MR_Integer) 1));
    MR_Word analysis__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_4, (MR_Integer) 2)));
    MR_Word analysis__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_4, (MR_Integer) 3)));
    MR_Word analysis__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_4, (MR_Integer) 5)));
    MR_Word analysis__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_4, (MR_Integer) 6)));
    MR_Word analysis__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_4, (MR_Integer) 7)));
    MR_Word analysis__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_4, (MR_Integer) 8)));
    MR_Word analysis__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_4, (MR_Integer) 9)));
    MR_Word analysis__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_4, (MR_Integer) 10)));

    {
      analysis__succeeded = mercury__set__contains_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, analysis__Var_7, ((MR_Box) (analysis__ModuleName_5)));
    }
    if (analysis__succeeded)
      *analysis__IsLocal_6 = (MR_Integer) 1;
    else
      *analysis__IsLocal_6 = (MR_Integer) 0;
  }
}

static void MR_CALL 
analysis__prepare_intermodule_analysis_7_p_0_1(
  MR_Box analysis__closure_arg,
  MR_Box analysis__wrapper_arg_1,
  MR_Box analysis__wrapper_arg_2,
  MR_Box * analysis__wrapper_arg_3,
  MR_Box analysis__wrapper_arg_4,
  MR_Box * analysis__wrapper_arg_5)
{
  {
    MR_Box analysis__closure = analysis__closure_arg;
    MR_Word analysis__conv0_STATE_VARIABLE_Info_14;

    {
      analysis__load_module_analysis_results_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 3))), ((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2), &analysis__conv0_STATE_VARIABLE_Info_14);
    }
    *analysis__wrapper_arg_3 = ((MR_Box) (analysis__conv0_STATE_VARIABLE_Info_14));
  }
}

void MR_CALL 
analysis__prepare_intermodule_analysis_7_p_0(
  MR_Word analysis__Globals_8,
  MR_Word analysis__ImportedModuleNames0_9,
  MR_Word analysis__LocalModuleNames_10,
  MR_Word analysis__STATE_VARIABLE_Info_0_16,
  MR_Word * analysis__STATE_VARIABLE_Info_17)
{
  {
    MR_bool analysis__succeeded;
    MR_Word analysis__TypeCtorInfo_69_69 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    MR_Word analysis__ThisModule_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 2)));
    MR_Word analysis__ImportedModuleNames_14;
    MR_Word analysis__ThisModuleRequests_15;
    MR_Word analysis__STATE_VARIABLE_Info_20_20;
    MR_Word analysis__Var_21;
    MR_Word analysis__STATE_VARIABLE_Info_22_22;
    MR_Word analysis__STATE_VARIABLE_Info_24_24;
    MR_Word analysis__Var_28;
    MR_Word analysis__Var_29;
    MR_Word analysis__TypeClassInfo_for_compiler_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 0)));
    MR_Box analysis__Var_30 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 1));
    MR_Word analysis__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)));
    MR_Word analysis__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 4)));
    MR_Word analysis__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 5)));
    MR_Word analysis__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 6)));
    MR_Word analysis__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 7)));
    MR_Word analysis__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 8)));
    MR_Word analysis__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 9)));
    MR_Word analysis__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 10)));
    MR_Word analysis__TypeClassInfo_for_compiler_70;
    MR_Box analysis__Var_39;
    MR_Word analysis__Var_40;
    MR_Word analysis__Var_41;
    MR_Word analysis__Var_43;
    MR_Word analysis__Var_44;
    MR_Word analysis__Var_45;
    MR_Word analysis__Var_46;
    MR_Word analysis__Var_47;
    MR_Word analysis__Var_48;
    MR_Word analysis__Var_42;
    MR_Box analysis__conv2_STATE_VARIABLE_Info_22_22;
    MR_Box analysis__conv1_STATE_VARIABLE_IO_23_23;
    MR_Word analysis__TypeClassInfo_for_compiler_78;
    MR_Box analysis__Var_49;
    MR_Word analysis__Var_50;
    MR_Word analysis__Var_51;
    MR_Word analysis__Var_52;
    MR_Word analysis__Var_53;
    MR_Word analysis__Var_54;
    MR_Word analysis__Var_55;
    MR_Word analysis__Var_56;
    MR_Word analysis__Var_57;
    MR_Word analysis__TypeClassInfo_for_compiler_80;
    MR_Box analysis__Var_58;
    MR_Word analysis__Var_59;
    MR_Word analysis__Var_60;
    MR_Word analysis__Var_61;
    MR_Word analysis__Var_63;
    MR_Word analysis__Var_64;
    MR_Word analysis__Var_65;
    MR_Word analysis__Var_66;
    MR_Word analysis__Var_67;
    MR_Word analysis__Var_62;

    {
      analysis__ImportedModuleNames_14 = mercury__set__delete_2_f_0(analysis__TypeCtorInfo_69_69, analysis__ImportedModuleNames0_9, ((MR_Box) (analysis__ThisModule_13)));
    }
    analysis__TypeClassInfo_for_compiler_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 0)));
    analysis__Var_39 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 1));
    analysis__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 2)));
    analysis__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)));
    analysis__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 4)));
    analysis__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 5)));
    analysis__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 6)));
    analysis__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 7)));
    analysis__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 8)));
    analysis__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 9)));
    analysis__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_16, (MR_Integer) 10)));
    {
      analysis__STATE_VARIABLE_Info_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_20_20, 0) = ((MR_Box) (analysis__TypeClassInfo_for_compiler_70));
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_20_20, 1) = analysis__Var_39;
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_20_20, 2) = ((MR_Box) (analysis__Var_40));
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_20_20, 3) = ((MR_Box) (analysis__Var_41));
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_20_20, 4) = ((MR_Box) (analysis__LocalModuleNames_10));
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_20_20, 5) = ((MR_Box) (analysis__Var_43));
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_20_20, 6) = ((MR_Box) (analysis__Var_44));
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_20_20, 7) = ((MR_Box) (analysis__Var_45));
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_20_20, 8) = ((MR_Box) (analysis__Var_46));
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_20_20, 9) = ((MR_Box) (analysis__Var_47));
      MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_20_20, 10) = ((MR_Box) (analysis__Var_48));
    }
    {
      analysis__Var_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), analysis__Var_21, 0) = ((MR_Box) (&analysis_scalar_common_9[0]));
      MR_hl_field(MR_mktag(0), analysis__Var_21, 1) = ((MR_Box) (analysis__prepare_intermodule_analysis_7_p_0_1));
      MR_hl_field(MR_mktag(0), analysis__Var_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), analysis__Var_21, 3) = ((MR_Box) (analysis__Globals_8));
    }
    {
      mercury__set__fold2_6_p_2(analysis__TypeCtorInfo_69_69, (MR_Word) &analysis__analysis__type_ctor_info_analysis_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, analysis__Var_21, analysis__ImportedModuleNames_14, ((MR_Box) (analysis__STATE_VARIABLE_Info_20_20)), &analysis__conv2_STATE_VARIABLE_Info_22_22, ((MR_Box) ((MR_Integer) 0)), &analysis__conv1_STATE_VARIABLE_IO_23_23);
    }
    analysis__STATE_VARIABLE_Info_22_22 = ((MR_Word) analysis__conv2_STATE_VARIABLE_Info_22_22);
    {
      analysis__load_module_analysis_results_6_p_0(analysis__Globals_8, analysis__ThisModule_13, analysis__STATE_VARIABLE_Info_22_22, &analysis__STATE_VARIABLE_Info_24_24);
    }
    {
      analysis__file__read_module_analysis_requests_6_p_0(analysis__STATE_VARIABLE_Info_24_24, analysis__Globals_8, analysis__ThisModule_13, &analysis__ThisModuleRequests_15);
    }
    analysis__TypeClassInfo_for_compiler_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 0)));
    analysis__Var_49 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 1));
    analysis__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 2)));
    analysis__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 3)));
    analysis__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 4)));
    analysis__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 5)));
    analysis__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 6)));
    analysis__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 7)));
    analysis__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 8)));
    analysis__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 9)));
    analysis__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 10)));
    {
      analysis__Var_29 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(analysis__TypeCtorInfo_69_69, (MR_Word) &analysis_scalar_common_2[1], ((MR_Box) (analysis__ThisModule_13)), analysis__Var_28, ((MR_Box) (analysis__ThisModuleRequests_15)));
    }
    analysis__TypeClassInfo_for_compiler_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 0)));
    analysis__Var_58 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 1));
    analysis__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 2)));
    analysis__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 3)));
    analysis__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 4)));
    analysis__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 5)));
    analysis__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 6)));
    analysis__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 7)));
    analysis__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 8)));
    analysis__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 9)));
    analysis__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_24_24, (MR_Integer) 10)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
      *analysis__STATE_VARIABLE_Info_17 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (analysis__TypeClassInfo_for_compiler_80));
      MR_hl_field(MR_mktag(0), base, 1) = analysis__Var_58;
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (analysis__Var_59));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (analysis__Var_60));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (analysis__Var_61));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (analysis__Var_29));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (analysis__Var_63));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (analysis__Var_64));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (analysis__Var_65));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (analysis__Var_66));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (analysis__Var_67));
    }
  }
}

void MR_CALL 
analysis__load_module_analysis_results_6_p_0(
  MR_Word analysis__Globals_7,
  MR_Word analysis__ModuleName_8,
  MR_Word analysis__STATE_VARIABLE_Info_0_13,
  MR_Word * analysis__STATE_VARIABLE_Info_14)
{
  {
    MR_bool analysis__succeeded;
    MR_Word analysis__Var_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 7)));
    MR_Word analysis__Var_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 6)));
    MR_Word analysis__TypeClassInfo_for_compiler_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 0)));
    MR_Word analysis__Var_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 10)));
    MR_Word analysis__Var_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 9)));
    MR_Word analysis__Var_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 8)));
    MR_Word analysis__Var_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 5)));
    MR_Word analysis__Var_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 4)));
    MR_Word analysis__Var_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)));
    MR_Word analysis__Var_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 2)));
    MR_Box analysis__Var_119 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 1));

    {
      analysis__succeeded = mercury__map__contains_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &analysis_scalar_common_2[3], analysis__Var_113, ((MR_Box) (analysis__ModuleName_8)));
    }
    if (!(analysis__succeeded))
      {
        {
          analysis__succeeded = mercury__map__contains_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &analysis__analysis__type_ctor_info_analysis_status_0, analysis__Var_114, ((MR_Box) (analysis__ModuleName_8)));
        }
      }
    if (analysis__succeeded)
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "analysis", (MR_String) "predicate \140analysis.load_module_analysis_results\'/6", (MR_String) "ensure_old_module_analysis_results_loaded");
          return;
        }
      }
    else
      {
        MR_Word analysis__TypeClassInfo_for_compiler_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 0)));
        MR_Word analysis__TypeCtorInfo_104_104;
        MR_Word analysis__ModuleStatus_11;
        MR_Word analysis__ModuleResults_12;
        MR_Box analysis__Var_22 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 1));
        MR_Word analysis__STATE_VARIABLE_Info_25_25;
        MR_Word analysis__Var_26;
        MR_Word analysis__Var_27;
        MR_Word analysis__Var_29;
        MR_Word analysis__Var_30;
        MR_Word analysis__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 2)));
        MR_Word analysis__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)));
        MR_Word analysis__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 4)));
        MR_Word analysis__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 5)));
        MR_Word analysis__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 6)));
        MR_Word analysis__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 7)));
        MR_Word analysis__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 8)));
        MR_Word analysis__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 9)));
        MR_Word analysis__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 10)));
        MR_Word analysis__TypeClassInfo_for_compiler_103;
        MR_Box analysis__Var_58;
        MR_Word analysis__Var_59;
        MR_Word analysis__Var_60;
        MR_Word analysis__Var_61;
        MR_Word analysis__Var_62;
        MR_Word analysis__Var_63;
        MR_Word analysis__Var_64;
        MR_Word analysis__Var_65;
        MR_Word analysis__Var_66;
        MR_Word analysis__TypeClassInfo_for_compiler_106;
        MR_Box analysis__Var_67;
        MR_Word analysis__Var_68;
        MR_Word analysis__Var_69;
        MR_Word analysis__Var_70;
        MR_Word analysis__Var_71;
        MR_Word analysis__Var_73;
        MR_Word analysis__Var_74;
        MR_Word analysis__Var_75;
        MR_Word analysis__Var_76;
        MR_Word analysis__Var_72;
        MR_Word analysis__TypeClassInfo_for_compiler_107;
        MR_Box analysis__Var_77;
        MR_Word analysis__Var_78;
        MR_Word analysis__Var_79;
        MR_Word analysis__Var_80;
        MR_Word analysis__Var_81;
        MR_Word analysis__Var_82;
        MR_Word analysis__Var_83;
        MR_Word analysis__Var_84;
        MR_Word analysis__Var_85;
        MR_Word analysis__TypeClassInfo_for_compiler_109;
        MR_Box analysis__Var_86;
        MR_Word analysis__Var_87;
        MR_Word analysis__Var_88;
        MR_Word analysis__Var_89;
        MR_Word analysis__Var_90;
        MR_Word analysis__Var_91;
        MR_Word analysis__Var_93;
        MR_Word analysis__Var_94;
        MR_Word analysis__Var_95;
        MR_Word analysis__Var_92;

        {
          analysis__do_read_module_overall_status_6_p_0(analysis__TypeClassInfo_for_compiler_102, analysis__Var_22, analysis__Globals_7, analysis__ModuleName_8, &analysis__ModuleStatus_11);
        }
        {
          analysis__file__read_module_analysis_results_6_p_0(analysis__STATE_VARIABLE_Info_0_13, analysis__Globals_7, analysis__ModuleName_8, &analysis__ModuleResults_12);
        }
        analysis__TypeClassInfo_for_compiler_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 0)));
        analysis__Var_58 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 1));
        analysis__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 2)));
        analysis__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)));
        analysis__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 4)));
        analysis__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 5)));
        analysis__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 6)));
        analysis__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 7)));
        analysis__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 8)));
        analysis__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 9)));
        analysis__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 10)));
        analysis__TypeCtorInfo_104_104 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
        {
          analysis__Var_27 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(analysis__TypeCtorInfo_104_104, (MR_Word) &analysis__analysis__type_ctor_info_analysis_status_0, ((MR_Box) (analysis__ModuleName_8)), analysis__Var_26, ((MR_Box) (analysis__ModuleStatus_11)));
        }
        analysis__TypeClassInfo_for_compiler_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 0)));
        analysis__Var_67 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 1));
        analysis__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 2)));
        analysis__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)));
        analysis__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 4)));
        analysis__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 5)));
        analysis__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 6)));
        analysis__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 7)));
        analysis__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 8)));
        analysis__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 9)));
        analysis__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_13, (MR_Integer) 10)));
        {
          analysis__STATE_VARIABLE_Info_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, 0) = ((MR_Box) (analysis__TypeClassInfo_for_compiler_106));
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, 1) = analysis__Var_67;
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, 2) = ((MR_Box) (analysis__Var_68));
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, 3) = ((MR_Box) (analysis__Var_69));
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, 4) = ((MR_Box) (analysis__Var_70));
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, 5) = ((MR_Box) (analysis__Var_71));
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, 6) = ((MR_Box) (analysis__Var_27));
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, 7) = ((MR_Box) (analysis__Var_73));
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, 8) = ((MR_Box) (analysis__Var_74));
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, 9) = ((MR_Box) (analysis__Var_75));
          MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, 10) = ((MR_Box) (analysis__Var_76));
        }
        analysis__TypeClassInfo_for_compiler_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 0)));
        analysis__Var_77 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 1));
        analysis__Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 2)));
        analysis__Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 3)));
        analysis__Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 4)));
        analysis__Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 5)));
        analysis__Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 6)));
        analysis__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 7)));
        analysis__Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 8)));
        analysis__Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 9)));
        analysis__Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 10)));
        {
          analysis__Var_30 = mercury__map__f_101_108_101_109_32_58_61_3_f_0(analysis__TypeCtorInfo_104_104, (MR_Word) &analysis_scalar_common_2[3], ((MR_Box) (analysis__ModuleName_8)), analysis__Var_29, ((MR_Box) (analysis__ModuleResults_12)));
        }
        analysis__TypeClassInfo_for_compiler_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 0)));
        analysis__Var_86 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 1));
        analysis__Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 2)));
        analysis__Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 3)));
        analysis__Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 4)));
        analysis__Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 5)));
        analysis__Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 6)));
        analysis__Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 7)));
        analysis__Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 8)));
        analysis__Var_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 9)));
        analysis__Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_25_25, (MR_Integer) 10)));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
          *analysis__STATE_VARIABLE_Info_14 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (analysis__TypeClassInfo_for_compiler_109));
          MR_hl_field(MR_mktag(0), base, 1) = analysis__Var_86;
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (analysis__Var_87));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (analysis__Var_88));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (analysis__Var_89));
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (analysis__Var_90));
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (analysis__Var_91));
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (analysis__Var_30));
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (analysis__Var_93));
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (analysis__Var_94));
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (analysis__Var_95));
        }
      }
  }
}

void MR_CALL 
analysis__do_read_module_overall_status_6_p_0(
  MR_Word analysis__TypeClassInfo_for_compiler_15,
  MR_Box analysis__Compiler_7,
  MR_Word analysis__Globals_8,
  MR_Word analysis__ModuleName_9,
  MR_Word * analysis__ModuleStatus_10)
{
  {
    MR_bool analysis__succeeded;

    {
      analysis__file__read_module_overall_status_6_p_0(analysis__TypeClassInfo_for_compiler_15, analysis__Compiler_7, analysis__Globals_8, analysis__ModuleName_9, analysis__ModuleStatus_10);
    }
  }
}

static MR_bool MR_CALL 
analysis__lookup_requests_5_p_0_1(
  MR_Box analysis__closure_arg,
  MR_Box analysis__wrapper_arg_1,
  MR_Box * analysis__wrapper_arg_2)
{
  {
    MR_bool analysis__succeeded;
    MR_Box analysis__closure = analysis__closure_arg;

    {
      analysis__succeeded = analysis__IntroducedFrom__func__lookup_requests__683__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 3))), ((MR_Word) analysis__wrapper_arg_1), analysis__wrapper_arg_2);
    }
    return analysis__succeeded;
  }
}

void MR_CALL 
analysis__lookup_requests_5_p_0(
  MR_Word analysis__TypeClassInfo_for_call_pattern_47,
  MR_Word analysis__Info_6,
  MR_String analysis__AnalysisName_7,
  MR_Word analysis__ModuleName_8,
  MR_Word analysis__FuncId_9,
  MR_Word * analysis__CallPatterns_10)
{
  {
    MR_bool analysis__succeeded;
    MR_Word analysis__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 2)));
    MR_Word analysis__TypeClassInfo_for_compiler_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 0)));
    MR_Box analysis__Var_29 = (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 1));
    MR_Word analysis__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 3)));
    MR_Word analysis__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 4)));
    MR_Word analysis__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 5)));
    MR_Word analysis__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 6)));
    MR_Word analysis__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 7)));
    MR_Word analysis__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 8)));
    MR_Word analysis__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 9)));
    MR_Word analysis__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 10)));
    MR_Word analysis__CallPatterns0_13;
    MR_Word analysis__TypeCtorInfo_52_52;
    MR_Word analysis__TypeInfo_53_53;
    MR_Word analysis__TypeCtorInfo_54_54;
    MR_Word analysis__TypeInfo_55_55;
    MR_Word analysis__ModuleRequests_11;
    MR_Word analysis__AnalysisRequests_12;
    MR_Word analysis__Var_21;
    MR_Word analysis__TypeClassInfo_for_compiler_49;
    MR_Box analysis__Var_38;
    MR_Word analysis__Var_39;
    MR_Word analysis__Var_40;
    MR_Word analysis__Var_41;
    MR_Word analysis__Var_42;
    MR_Word analysis__Var_43;
    MR_Word analysis__Var_44;
    MR_Word analysis__Var_45;
    MR_Word analysis__Var_46;
    MR_Box analysis__conv0_ModuleRequests_11;
    MR_Box analysis__conv1_AnalysisRequests_12;
    MR_Box analysis__conv2_CallPatterns0_13;

    {
      analysis__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(analysis__ModuleName_8, analysis__Var_64);
    }
    if (analysis__succeeded)
      {
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "analysis", (MR_String) "predicate \140analysis.lookup_requests\'/5", (MR_String) "not this_module");
          return;
        }
      }
    analysis__TypeClassInfo_for_compiler_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 0)));
    analysis__Var_38 = (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 1));
    analysis__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 2)));
    analysis__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 3)));
    analysis__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 4)));
    analysis__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 5)));
    analysis__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 6)));
    analysis__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 7)));
    analysis__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 8)));
    analysis__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 9)));
    analysis__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 10)));
    {
      analysis__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &analysis_scalar_common_2[1], analysis__Var_21, ((MR_Box) (analysis__ModuleName_8)), &analysis__conv0_ModuleRequests_11);
    }
    if (analysis__succeeded)
      {
        analysis__ModuleRequests_11 = ((MR_Word) analysis__conv0_ModuleRequests_11);
        analysis__succeeded = MR_TRUE;
      }
    if (analysis__succeeded)
      {
        analysis__TypeCtorInfo_52_52 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
        analysis__TypeInfo_53_53 = (MR_Word) &analysis_scalar_common_2[0];
        {
          analysis__succeeded = mercury__map__search_3_p_0(analysis__TypeCtorInfo_52_52, analysis__TypeInfo_53_53, analysis__ModuleRequests_11, ((MR_Box) (analysis__AnalysisName_7)), &analysis__conv1_AnalysisRequests_12);
        }
        if (analysis__succeeded)
          {
            analysis__AnalysisRequests_12 = ((MR_Word) analysis__conv1_AnalysisRequests_12);
            analysis__succeeded = MR_TRUE;
          }
        if (analysis__succeeded)
          {
            analysis__TypeCtorInfo_54_54 = (MR_Word) &analysis__analysis__type_ctor_info_func_id_0;
            analysis__TypeInfo_55_55 = (MR_Word) &analysis_scalar_common_1[0];
            {
              analysis__succeeded = mercury__map__search_3_p_0(analysis__TypeCtorInfo_54_54, analysis__TypeInfo_55_55, analysis__AnalysisRequests_12, ((MR_Box) (analysis__FuncId_9)), &analysis__conv2_CallPatterns0_13);
            }
            if (analysis__succeeded)
              {
                analysis__CallPatterns0_13 = ((MR_Word) analysis__conv2_CallPatterns0_13);
                analysis__succeeded = MR_TRUE;
              }
          }
      }
    if (analysis__succeeded)
      {
        MR_Word analysis__TypeInfo_58_58;
        MR_Word analysis__TypeInfo_63_63;
        MR_Word analysis__CallPatterns1_14;
        MR_Word analysis__Var_22;

        {
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_47, (MR_Integer) 4, &analysis__TypeInfo_58_58);
        }
        {
          analysis__Var_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), analysis__Var_22, 0) = ((MR_Box) (&analysis_scalar_common_4[2]));
          MR_hl_field(MR_mktag(0), analysis__Var_22, 1) = ((MR_Box) (analysis__lookup_requests_5_p_0_1));
          MR_hl_field(MR_mktag(0), analysis__Var_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), analysis__Var_22, 3) = ((MR_Box) (analysis__TypeClassInfo_for_call_pattern_47));
        }
        {
          analysis__CallPatterns1_14 = mercury__list__filter_map_2_f_0((MR_Word) &analysis__analysis__type_ctor_info_analysis_request_0, analysis__TypeInfo_58_58, analysis__Var_22, analysis__CallPatterns0_13);
        }
        {
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_47, (MR_Integer) 4, &analysis__TypeInfo_63_63);
        }
        {
          mercury__list__sort_and_remove_dups_2_p_0(analysis__TypeInfo_63_63, analysis__CallPatterns1_14, analysis__CallPatterns_10);
        }
      }
    else
      *analysis__CallPatterns_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  }
}

void MR_CALL 
analysis__record_dependency_7_p_0(
  MR_Word analysis__TypeClassInfo_for_analysis_47,
  MR_Word analysis__CalleeModuleName_8,
  MR_Word analysis__FuncId_9,
  MR_Box analysis__FuncInfo_10,
  MR_Box analysis__Call_11,
  MR_Word analysis__STATE_VARIABLE_Info_0_21,
  MR_Word * analysis__STATE_VARIABLE_Info_22)
{
  {
    MR_bool analysis__succeeded;
    MR_Word analysis__ThisModule_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 2)));
    MR_Word analysis__MakeAnalysisReg_15;
    MR_Word analysis__IsLocal_16;
    MR_Word analysis__TypeClassInfo_for_compiler_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 0)));
    MR_Box analysis__Var_29 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 1));
    MR_Word analysis__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 3)));
    MR_Word analysis__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 4)));
    MR_Word analysis__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 5)));
    MR_Word analysis__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 6)));
    MR_Word analysis__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 7)));
    MR_Word analysis__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 8)));
    MR_Word analysis__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 9)));
    MR_Word analysis__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 10)));
    MR_Word analysis__TypeClassInfo_for_compiler_49;
    MR_Box analysis__Var_38;
    MR_Word analysis__Var_39;
    MR_Word analysis__Var_40;
    MR_Word analysis__Var_41;
    MR_Word analysis__Var_42;
    MR_Word analysis__Var_43;
    MR_Word analysis__Var_44;
    MR_Word analysis__Var_45;
    MR_Word analysis__Var_46;
    MR_Word analysis__Var_65;
    MR_Word analysis__TypeClassInfo_for_compiler_75;
    MR_Box analysis__Var_66;
    MR_Word analysis__Var_67;
    MR_Word analysis__Var_68;
    MR_Word analysis__Var_69;
    MR_Word analysis__Var_70;
    MR_Word analysis__Var_71;
    MR_Word analysis__Var_72;
    MR_Word analysis__Var_73;
    MR_Word analysis__Var_74;

    {
      analysis__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(analysis__ThisModule_14, analysis__CalleeModuleName_8);
    }
    if (analysis__succeeded)
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "analysis", (MR_String) "predicate \140analysis.record_dependency\'/7", (MR_String) "dependency on self");
          return;
        }
      }
    else
      {
      }
    analysis__TypeClassInfo_for_compiler_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 0)));
    analysis__Var_38 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 1));
    analysis__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 2)));
    analysis__MakeAnalysisReg_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 3)));
    analysis__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 4)));
    analysis__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 5)));
    analysis__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 6)));
    analysis__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 7)));
    analysis__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 8)));
    analysis__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 9)));
    analysis__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 10)));
    analysis__TypeClassInfo_for_compiler_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 0)));
    analysis__Var_66 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 1));
    analysis__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 2)));
    analysis__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 3)));
    analysis__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 4)));
    analysis__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 5)));
    analysis__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 6)));
    analysis__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 7)));
    analysis__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 8)));
    analysis__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 9)));
    analysis__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_21, (MR_Integer) 10)));
    {
      analysis__succeeded = mercury__set__contains_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, analysis__Var_65, ((MR_Box) (analysis__CalleeModuleName_8)));
    }
    if (analysis__succeeded)
      analysis__IsLocal_16 = (MR_Integer) 1;
    else
      analysis__IsLocal_16 = (MR_Integer) 0;
    analysis__succeeded = (analysis__MakeAnalysisReg_15 == (MR_Integer) 0);
    if (analysis__succeeded)
      analysis__succeeded = (analysis__IsLocal_16 == (MR_Integer) 1);
    if (analysis__succeeded)
      {
        MR_Word analysis__TypeClassInfo_for_call_pattern_50;
        MR_String analysis__AnalysisName_17;
        MR_Word analysis__MaybeResult_18;
        MR_Word analysis__STATE_VARIABLE_Info_26_26;
        MR_Box analysis__Var_59;
        MR_Box MR_CALL (* analysis__func_0)(MR_Box) = ((MR_Box MR_CALL (*)(MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_analysis_47, (MR_Integer) 0)), (MR_Integer) 5)));
        MR_Box analysis__conv1_AnalysisName_17;

        {
          analysis__conv1_AnalysisName_17 = analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_analysis_47));
        }
        analysis__AnalysisName_17 = ((MR_String) analysis__conv1_AnalysisName_17);
        {
          mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_47, (MR_Integer) 1, &analysis__TypeClassInfo_for_call_pattern_50);
        }
        {
          analysis__record_dependency_2_7_p_0(analysis__TypeClassInfo_for_call_pattern_50, analysis__ThisModule_14, analysis__AnalysisName_17, analysis__CalleeModuleName_8, analysis__FuncId_9, analysis__Call_11, analysis__STATE_VARIABLE_Info_0_21, &analysis__STATE_VARIABLE_Info_26_26);
        }
        {
          analysis__lookup_exactly_matching_result_even_from_invalid_modules_6_p_0(analysis__TypeClassInfo_for_analysis_47, analysis__STATE_VARIABLE_Info_26_26, analysis__CalleeModuleName_8, analysis__FuncId_9, analysis__FuncInfo_10, analysis__Call_11, &analysis__MaybeResult_18);
        }
        if ((analysis__MaybeResult_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word analysis__TypeClassInfo_for_call_pattern_52;

            {
              mercury__private_builtin__superclass_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_47, (MR_Integer) 1, &analysis__TypeClassInfo_for_call_pattern_52);
            }
            {
              analysis__record_request_6_p_0(analysis__TypeClassInfo_for_call_pattern_52, analysis__AnalysisName_17, analysis__CalleeModuleName_8, analysis__FuncId_9, analysis__Call_11, analysis__STATE_VARIABLE_Info_26_26, analysis__STATE_VARIABLE_Info_22);
            }
          }
        else
          {
            MR_Word analysis__TypeInfo_54_54;
            MR_Word analysis__TypeInfo_56_56;
            MR_Word analysis__TypeInfo_58_58;
            MR_Word analysis__Var_27;
            MR_Word analysis__Var_60;

            {
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_47, (MR_Integer) 4, &analysis__TypeInfo_54_54);
            }
            {
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_47, (MR_Integer) 5, &analysis__TypeInfo_56_56);
            }
            {
              analysis__TypeInfo_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), analysis__TypeInfo_58_58, 0) = ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_result_2));
              MR_hl_field(MR_mktag(0), analysis__TypeInfo_58_58, 1) = ((MR_Box) (analysis__TypeInfo_54_54));
              MR_hl_field(MR_mktag(0), analysis__TypeInfo_58_58, 2) = ((MR_Box) (analysis__TypeInfo_56_56));
            }
            {
              mercury__type_desc__same_type_2_p_0(analysis__TypeInfo_58_58);
            }
            *analysis__STATE_VARIABLE_Info_22 = analysis__STATE_VARIABLE_Info_26_26;
          }
      }
    else
      *analysis__STATE_VARIABLE_Info_22 = analysis__STATE_VARIABLE_Info_0_21;
  }
}

void MR_CALL 
analysis__record_dependency_2_7_p_0(
  MR_Word analysis__TypeClassInfo_for_call_pattern_58,
  MR_Word analysis__CallerModuleName_8,
  MR_String analysis__AnalysisName_9,
  MR_Word analysis__CalleeModuleName_10,
  MR_Word analysis__FuncId_11,
  MR_Box analysis__Call_12,
  MR_Word analysis__STATE_VARIABLE_Info_0_22,
  MR_Word * analysis__STATE_VARIABLE_Info_23)
{
  {
    MR_bool analysis__succeeded;
    MR_Word analysis__Analyses1_15;
    MR_Word analysis__Funcs1_17;
    MR_Word analysis__FuncArcs1_19;
    MR_Word analysis__Dep_20;
    MR_Word analysis__Analyses0_14;
    MR_Word analysis__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 10)));
    MR_Word analysis__TypeClassInfo_for_compiler_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 0)));
    MR_Box analysis__Var_30 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 1));
    MR_Word analysis__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 2)));
    MR_Word analysis__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 3)));
    MR_Word analysis__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 4)));
    MR_Word analysis__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 5)));
    MR_Word analysis__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 6)));
    MR_Word analysis__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 7)));
    MR_Word analysis__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 8)));
    MR_Word analysis__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 9)));
    MR_Box analysis__conv0_Analyses0_14;
    MR_Word analysis__Funcs0_16;
    MR_Box analysis__conv1_Funcs0_16;
    MR_Word analysis__FuncArcs0_18;
    MR_Box analysis__conv2_FuncArcs0_18;

    {
      analysis__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &analysis_scalar_common_2[5], analysis__Var_24, ((MR_Box) (analysis__CalleeModuleName_10)), &analysis__conv0_Analyses0_14);
    }
    if (analysis__succeeded)
      {
        analysis__Analyses0_14 = ((MR_Word) analysis__conv0_Analyses0_14);
        analysis__succeeded = MR_TRUE;
      }
    if (analysis__succeeded)
      analysis__Analyses1_15 = analysis__Analyses0_14;
    else
      {
        {
          analysis__Analyses1_15 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &analysis_scalar_common_2[4]);
        }
      }
    {
      analysis__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &analysis_scalar_common_2[4], analysis__Analyses1_15, ((MR_Box) (analysis__AnalysisName_9)), &analysis__conv1_Funcs0_16);
    }
    if (analysis__succeeded)
      {
        analysis__Funcs0_16 = ((MR_Word) analysis__conv1_Funcs0_16);
        analysis__succeeded = MR_TRUE;
      }
    if (analysis__succeeded)
      analysis__Funcs1_17 = analysis__Funcs0_16;
    else
      {
        {
          analysis__Funcs1_17 = mercury__map__init_0_f_0((MR_Word) &analysis__analysis__type_ctor_info_func_id_0, (MR_Word) &analysis_scalar_common_1[2]);
        }
      }
    {
      analysis__succeeded = mercury__map__search_3_p_0((MR_Word) &analysis__analysis__type_ctor_info_func_id_0, (MR_Word) &analysis_scalar_common_1[2], analysis__Funcs1_17, ((MR_Box) (analysis__FuncId_11)), &analysis__conv2_FuncArcs0_18);
    }
    if (analysis__succeeded)
      {
        analysis__FuncArcs0_18 = ((MR_Word) analysis__conv2_FuncArcs0_18);
        analysis__succeeded = MR_TRUE;
      }
    if (analysis__succeeded)
      analysis__FuncArcs1_19 = analysis__FuncArcs0_18;
    else
      analysis__FuncArcs1_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      analysis__Dep_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), analysis__Dep_20, 0) = ((MR_Box) (analysis__TypeClassInfo_for_call_pattern_58));
      MR_hl_field(MR_mktag(0), analysis__Dep_20, 1) = analysis__Call_12;
      MR_hl_field(MR_mktag(0), analysis__Dep_20, 2) = ((MR_Box) (analysis__CallerModuleName_8));
    }
    {
      analysis__succeeded = mercury__list__member_2_p_0((MR_Word) &analysis__analysis__type_ctor_info_imdg_arc_0, ((MR_Box) (analysis__Dep_20)), analysis__FuncArcs1_19);
    }
    if (analysis__succeeded)
      *analysis__STATE_VARIABLE_Info_23 = analysis__STATE_VARIABLE_Info_0_22;
    else
      {
        MR_Word analysis__FuncArcs_21;
        MR_Word analysis__Var_26;
        MR_Word analysis__Var_27;
        MR_Word analysis__Var_28;
        MR_Word analysis__Var_29;
        MR_Word analysis__TypeClassInfo_for_compiler_73;
        MR_Box analysis__Var_39;
        MR_Word analysis__Var_40;
        MR_Word analysis__Var_41;
        MR_Word analysis__Var_42;
        MR_Word analysis__Var_43;
        MR_Word analysis__Var_44;
        MR_Word analysis__Var_45;
        MR_Word analysis__Var_46;
        MR_Word analysis__Var_47;
        MR_Word analysis__TypeClassInfo_for_compiler_78;
        MR_Box analysis__Var_48;
        MR_Word analysis__Var_49;
        MR_Word analysis__Var_50;
        MR_Word analysis__Var_51;
        MR_Word analysis__Var_52;
        MR_Word analysis__Var_53;
        MR_Word analysis__Var_54;
        MR_Word analysis__Var_55;
        MR_Word analysis__Var_56;
        MR_Word analysis__Var_57;

        {
          analysis__FuncArcs_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), analysis__FuncArcs_21, 0) = ((MR_Box) (analysis__Dep_20));
          MR_hl_field(MR_mktag(1), analysis__FuncArcs_21, 1) = ((MR_Box) (analysis__FuncArcs1_19));
        }
        analysis__TypeClassInfo_for_compiler_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 0)));
        analysis__Var_39 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 1));
        analysis__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 2)));
        analysis__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 3)));
        analysis__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 4)));
        analysis__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 5)));
        analysis__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 6)));
        analysis__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 7)));
        analysis__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 8)));
        analysis__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 9)));
        analysis__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 10)));
        {
          analysis__Var_29 = mercury__map__set_3_f_0((MR_Word) &analysis__analysis__type_ctor_info_func_id_0, (MR_Word) &analysis_scalar_common_1[2], analysis__Funcs1_17, ((MR_Box) (analysis__FuncId_11)), ((MR_Box) (analysis__FuncArcs_21)));
        }
        {
          analysis__Var_28 = mercury__map__set_3_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &analysis_scalar_common_2[4], analysis__Analyses1_15, ((MR_Box) (analysis__AnalysisName_9)), ((MR_Box) (analysis__Var_29)));
        }
        {
          analysis__Var_26 = mercury__map__set_3_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &analysis_scalar_common_2[5], analysis__Var_27, ((MR_Box) (analysis__CalleeModuleName_10)), ((MR_Box) (analysis__Var_28)));
        }
        analysis__TypeClassInfo_for_compiler_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 0)));
        analysis__Var_48 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 1));
        analysis__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 2)));
        analysis__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 3)));
        analysis__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 4)));
        analysis__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 5)));
        analysis__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 6)));
        analysis__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 7)));
        analysis__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 8)));
        analysis__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 9)));
        analysis__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 10)));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
          *analysis__STATE_VARIABLE_Info_23 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (analysis__TypeClassInfo_for_compiler_78));
          MR_hl_field(MR_mktag(0), base, 1) = analysis__Var_48;
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (analysis__Var_49));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (analysis__Var_50));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (analysis__Var_51));
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (analysis__Var_52));
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (analysis__Var_53));
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (analysis__Var_54));
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (analysis__Var_55));
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (analysis__Var_56));
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (analysis__Var_26));
        }
      }
  }
}

static MR_bool MR_CALL 
analysis__lookup_exactly_matching_result_even_from_invalid_modules_6_p_0_1(
  MR_Box analysis__closure_arg,
  MR_Box analysis__wrapper_arg_1)
{
  {
    MR_bool analysis__succeeded;
    MR_Box analysis__closure = analysis__closure_arg;

    {
      analysis__succeeded = analysis__IntroducedFrom__pred__lookup_exactly_matching_result_even_from_invalid_modules__608__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 3))), (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 4)), (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 5)), ((MR_Word) analysis__wrapper_arg_1));
    }
    return analysis__succeeded;
  }
}

void MR_CALL 
analysis__lookup_exactly_matching_result_even_from_invalid_modules_6_p_0(
  MR_Word analysis__TypeClassInfo_for_analysis_32,
  MR_Word analysis__Info_7,
  MR_Word analysis__ModuleName_8,
  MR_Word analysis__FuncId_9,
  MR_Box analysis__FuncInfo_10,
  MR_Box analysis__Call_11,
  MR_Word * analysis__MaybeResult_12)
{
  {
    MR_bool analysis__succeeded;
    MR_Word analysis__TypeInfo_34_34;
    MR_Word analysis__TypeInfo_36_36;
    MR_Word analysis__TypeInfo_38_38;
    MR_Word analysis__AllResultsList_14;
    MR_Word analysis__ResultList_15;
    MR_Word analysis__Var_21;

    {
      analysis__lookup_results_1_5_p_0(analysis__TypeClassInfo_for_analysis_32, analysis__Info_7, analysis__ModuleName_8, analysis__FuncId_9, (MR_Integer) 1, &analysis__AllResultsList_14);
    }
    {
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_32, (MR_Integer) 4, &analysis__TypeInfo_34_34);
    }
    {
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_32, (MR_Integer) 5, &analysis__TypeInfo_36_36);
    }
    {
      analysis__TypeInfo_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_38_38, 0) = ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_result_2));
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_38_38, 1) = ((MR_Box) (analysis__TypeInfo_34_34));
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_38_38, 2) = ((MR_Box) (analysis__TypeInfo_36_36));
    }
    {
      analysis__Var_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), analysis__Var_21, 0) = ((MR_Box) (&analysis_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), analysis__Var_21, 1) = ((MR_Box) (analysis__lookup_exactly_matching_result_even_from_invalid_modules_6_p_0_1));
      MR_hl_field(MR_mktag(0), analysis__Var_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), analysis__Var_21, 3) = ((MR_Box) (analysis__TypeClassInfo_for_analysis_32));
      MR_hl_field(MR_mktag(0), analysis__Var_21, 4) = analysis__FuncInfo_10;
      MR_hl_field(MR_mktag(0), analysis__Var_21, 5) = analysis__Call_11;
    }
    {
      analysis__ResultList_15 = mercury__list__filter_2_f_0(analysis__TypeInfo_38_38, analysis__Var_21, analysis__AllResultsList_14);
    }
    if ((analysis__ResultList_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *analysis__MaybeResult_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word analysis__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis__ResultList_15, (MR_Integer) 1)));
        MR_Word analysis__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis__ResultList_15, (MR_Integer) 0)));

        if ((analysis__Var_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *analysis__MaybeResult_12 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (analysis__Var_43));
          }
        else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "analysis", (MR_String) "predicate \140analysis.lookup_exactly_matching_result_even_from_invalid_modules\'/6", (MR_String) "zero or one exactly matching results expected");
              return;
            }
          }
      }
  }
}

void MR_CALL 
analysis__record_request_6_p_0(
  MR_Word analysis__TypeClassInfo_for_call_pattern_39,
  MR_String analysis__AnalysisName_7,
  MR_Word analysis__ModuleName_8,
  MR_Word analysis__FuncId_9,
  MR_Box analysis__CallPattern_10,
  MR_Word analysis__STATE_VARIABLE_Info_0_15,
  MR_Word * analysis__STATE_VARIABLE_Info_16)
{
  {
    MR_bool analysis__succeeded;
    MR_Word analysis__ThisModule_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 2)));
    MR_Word analysis__MakeAnalysisReg_13;
    MR_Word analysis__IsLocal_14;
    MR_Word analysis__TypeClassInfo_for_compiler_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 0)));
    MR_Box analysis__Var_21 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 1));
    MR_Word analysis__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)));
    MR_Word analysis__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 4)));
    MR_Word analysis__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 5)));
    MR_Word analysis__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 6)));
    MR_Word analysis__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 7)));
    MR_Word analysis__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 8)));
    MR_Word analysis__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 9)));
    MR_Word analysis__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 10)));
    MR_Word analysis__TypeClassInfo_for_compiler_41;
    MR_Box analysis__Var_30;
    MR_Word analysis__Var_31;
    MR_Word analysis__Var_32;
    MR_Word analysis__Var_33;
    MR_Word analysis__Var_34;
    MR_Word analysis__Var_35;
    MR_Word analysis__Var_36;
    MR_Word analysis__Var_37;
    MR_Word analysis__Var_38;
    MR_Word analysis__Var_46;
    MR_Word analysis__TypeClassInfo_for_compiler_56;
    MR_Box analysis__Var_47;
    MR_Word analysis__Var_48;
    MR_Word analysis__Var_49;
    MR_Word analysis__Var_50;
    MR_Word analysis__Var_51;
    MR_Word analysis__Var_52;
    MR_Word analysis__Var_53;
    MR_Word analysis__Var_54;
    MR_Word analysis__Var_55;

    {
      analysis__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(analysis__ThisModule_12, analysis__ModuleName_8);
    }
    if (analysis__succeeded)
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "analysis", (MR_String) "predicate \140analysis.record_request\'/6", (MR_String) "request on self");
          return;
        }
      }
    else
      {
      }
    analysis__TypeClassInfo_for_compiler_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 0)));
    analysis__Var_30 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 1));
    analysis__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 2)));
    analysis__MakeAnalysisReg_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)));
    analysis__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 4)));
    analysis__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 5)));
    analysis__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 6)));
    analysis__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 7)));
    analysis__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 8)));
    analysis__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 9)));
    analysis__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 10)));
    analysis__TypeClassInfo_for_compiler_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 0)));
    analysis__Var_47 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 1));
    analysis__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 2)));
    analysis__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)));
    analysis__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 4)));
    analysis__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 5)));
    analysis__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 6)));
    analysis__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 7)));
    analysis__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 8)));
    analysis__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 9)));
    analysis__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_15, (MR_Integer) 10)));
    {
      analysis__succeeded = mercury__set__contains_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, analysis__Var_46, ((MR_Box) (analysis__ModuleName_8)));
    }
    if (analysis__succeeded)
      analysis__IsLocal_14 = (MR_Integer) 1;
    else
      analysis__IsLocal_14 = (MR_Integer) 0;
    analysis__succeeded = (analysis__MakeAnalysisReg_13 == (MR_Integer) 0);
    if (analysis__succeeded)
      analysis__succeeded = (analysis__IsLocal_14 == (MR_Integer) 1);
    if (analysis__succeeded)
      {
        analysis__record_request_2_7_p_0(analysis__TypeClassInfo_for_call_pattern_39, analysis__ThisModule_12, analysis__AnalysisName_7, analysis__ModuleName_8, analysis__FuncId_9, analysis__CallPattern_10, analysis__STATE_VARIABLE_Info_0_15, analysis__STATE_VARIABLE_Info_16);
      }
    else
      *analysis__STATE_VARIABLE_Info_16 = analysis__STATE_VARIABLE_Info_0_15;
  }
}

void MR_CALL 
analysis__record_request_2_7_p_0(
  MR_Word analysis__TypeClassInfo_for_call_pattern_58,
  MR_Word analysis__CallerModule_8,
  MR_String analysis__AnalysisName_9,
  MR_Word analysis__ModuleName_10,
  MR_Word analysis__FuncId_11,
  MR_Box analysis__CallPattern_12,
  MR_Word analysis__STATE_VARIABLE_Info_0_22,
  MR_Word * analysis__STATE_VARIABLE_Info_23)
{
  {
    MR_bool analysis__succeeded;
    MR_Word analysis__ModuleResults1_15;
    MR_Word analysis__AnalysisResults1_17;
    MR_Word analysis__FuncResults1_19;
    MR_Word analysis__Request_20;
    MR_Word analysis__FuncResults_21;
    MR_Word analysis__Var_26;
    MR_Word analysis__Var_27;
    MR_Word analysis__Var_28;
    MR_Word analysis__Var_29;
    MR_Word analysis__ModuleResults0_14;
    MR_Word analysis__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 5)));
    MR_Word analysis__TypeClassInfo_for_compiler_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 0)));
    MR_Box analysis__Var_30 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 1));
    MR_Word analysis__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 2)));
    MR_Word analysis__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 3)));
    MR_Word analysis__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 4)));
    MR_Word analysis__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 6)));
    MR_Word analysis__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 7)));
    MR_Word analysis__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 8)));
    MR_Word analysis__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 9)));
    MR_Word analysis__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 10)));
    MR_Box analysis__conv0_ModuleResults0_14;
    MR_Word analysis__AnalysisResults0_16;
    MR_Box analysis__conv1_AnalysisResults0_16;
    MR_Word analysis__FuncResults0_18;
    MR_Box analysis__conv2_FuncResults0_18;
    MR_Word analysis__TypeClassInfo_for_compiler_72;
    MR_Box analysis__Var_39;
    MR_Word analysis__Var_40;
    MR_Word analysis__Var_41;
    MR_Word analysis__Var_42;
    MR_Word analysis__Var_43;
    MR_Word analysis__Var_44;
    MR_Word analysis__Var_45;
    MR_Word analysis__Var_46;
    MR_Word analysis__Var_47;
    MR_Word analysis__TypeClassInfo_for_compiler_77;
    MR_Box analysis__Var_48;
    MR_Word analysis__Var_49;
    MR_Word analysis__Var_50;
    MR_Word analysis__Var_51;
    MR_Word analysis__Var_53;
    MR_Word analysis__Var_54;
    MR_Word analysis__Var_55;
    MR_Word analysis__Var_56;
    MR_Word analysis__Var_57;
    MR_Word analysis__Var_52;

    {
      analysis__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &analysis_scalar_common_2[1], analysis__Var_24, ((MR_Box) (analysis__ModuleName_10)), &analysis__conv0_ModuleResults0_14);
    }
    if (analysis__succeeded)
      {
        analysis__ModuleResults0_14 = ((MR_Word) analysis__conv0_ModuleResults0_14);
        analysis__succeeded = MR_TRUE;
      }
    if (analysis__succeeded)
      analysis__ModuleResults1_15 = analysis__ModuleResults0_14;
    else
      {
        {
          analysis__ModuleResults1_15 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &analysis_scalar_common_2[0]);
        }
      }
    {
      analysis__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &analysis_scalar_common_2[0], analysis__ModuleResults1_15, ((MR_Box) (analysis__AnalysisName_9)), &analysis__conv1_AnalysisResults0_16);
    }
    if (analysis__succeeded)
      {
        analysis__AnalysisResults0_16 = ((MR_Word) analysis__conv1_AnalysisResults0_16);
        analysis__succeeded = MR_TRUE;
      }
    if (analysis__succeeded)
      analysis__AnalysisResults1_17 = analysis__AnalysisResults0_16;
    else
      {
        {
          analysis__AnalysisResults1_17 = mercury__map__init_0_f_0((MR_Word) &analysis__analysis__type_ctor_info_func_id_0, (MR_Word) &analysis_scalar_common_1[0]);
        }
      }
    {
      analysis__succeeded = mercury__map__search_3_p_0((MR_Word) &analysis__analysis__type_ctor_info_func_id_0, (MR_Word) &analysis_scalar_common_1[0], analysis__AnalysisResults1_17, ((MR_Box) (analysis__FuncId_11)), &analysis__conv2_FuncResults0_18);
    }
    if (analysis__succeeded)
      {
        analysis__FuncResults0_18 = ((MR_Word) analysis__conv2_FuncResults0_18);
        analysis__succeeded = MR_TRUE;
      }
    if (analysis__succeeded)
      analysis__FuncResults1_19 = analysis__FuncResults0_18;
    else
      analysis__FuncResults1_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      analysis__Request_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), analysis__Request_20, 0) = ((MR_Box) (analysis__TypeClassInfo_for_call_pattern_58));
      MR_hl_field(MR_mktag(0), analysis__Request_20, 1) = analysis__CallPattern_12;
      MR_hl_field(MR_mktag(0), analysis__Request_20, 2) = ((MR_Box) (analysis__CallerModule_8));
    }
    {
      analysis__FuncResults_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), analysis__FuncResults_21, 0) = ((MR_Box) (analysis__Request_20));
      MR_hl_field(MR_mktag(1), analysis__FuncResults_21, 1) = ((MR_Box) (analysis__FuncResults1_19));
    }
    analysis__TypeClassInfo_for_compiler_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 0)));
    analysis__Var_39 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 1));
    analysis__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 2)));
    analysis__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 3)));
    analysis__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 4)));
    analysis__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 5)));
    analysis__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 6)));
    analysis__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 7)));
    analysis__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 8)));
    analysis__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 9)));
    analysis__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 10)));
    {
      analysis__Var_29 = mercury__map__set_3_f_0((MR_Word) &analysis__analysis__type_ctor_info_func_id_0, (MR_Word) &analysis_scalar_common_1[0], analysis__AnalysisResults1_17, ((MR_Box) (analysis__FuncId_11)), ((MR_Box) (analysis__FuncResults_21)));
    }
    {
      analysis__Var_28 = mercury__map__set_3_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &analysis_scalar_common_2[0], analysis__ModuleResults1_15, ((MR_Box) (analysis__AnalysisName_9)), ((MR_Box) (analysis__Var_29)));
    }
    {
      analysis__Var_26 = mercury__map__set_3_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &analysis_scalar_common_2[1], analysis__Var_27, ((MR_Box) (analysis__ModuleName_10)), ((MR_Box) (analysis__Var_28)));
    }
    analysis__TypeClassInfo_for_compiler_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 0)));
    analysis__Var_48 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 1));
    analysis__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 2)));
    analysis__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 3)));
    analysis__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 4)));
    analysis__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 5)));
    analysis__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 6)));
    analysis__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 7)));
    analysis__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 8)));
    analysis__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 9)));
    analysis__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_22, (MR_Integer) 10)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
      *analysis__STATE_VARIABLE_Info_23 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (analysis__TypeClassInfo_for_compiler_77));
      MR_hl_field(MR_mktag(0), base, 1) = analysis__Var_48;
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (analysis__Var_49));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (analysis__Var_50));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (analysis__Var_51));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (analysis__Var_26));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (analysis__Var_53));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (analysis__Var_54));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (analysis__Var_55));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (analysis__Var_56));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (analysis__Var_57));
    }
  }
}

void MR_CALL 
analysis__record_result_7_p_0(
  MR_Word analysis__TypeClassInfo_for_analysis_60,
  MR_Word analysis__ModuleName_8,
  MR_Word analysis__FuncId_9,
  MR_Box analysis__CallPattern_10,
  MR_Box analysis__AnswerPattern_11,
  MR_Word analysis__Status_12,
  MR_Word analysis__STATE_VARIABLE_Info_0_17,
  MR_Word * analysis__STATE_VARIABLE_Info_18)
{
  {
    MR_bool analysis__succeeded;
    MR_Word analysis__MakeAnalysisReg_14;
    MR_Word analysis__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 2)));
    MR_Word analysis__TypeClassInfo_for_compiler_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 0)));
    MR_Box analysis__Var_23 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 1));
    MR_Word analysis__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 3)));
    MR_Word analysis__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 4)));
    MR_Word analysis__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 5)));
    MR_Word analysis__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 6)));
    MR_Word analysis__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 7)));
    MR_Word analysis__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 8)));
    MR_Word analysis__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 9)));
    MR_Word analysis__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 10)));
    MR_Word analysis__TypeClassInfo_for_compiler_62;
    MR_Box analysis__Var_32;
    MR_Word analysis__Var_33;
    MR_Word analysis__Var_34;
    MR_Word analysis__Var_35;
    MR_Word analysis__Var_36;
    MR_Word analysis__Var_37;
    MR_Word analysis__Var_38;
    MR_Word analysis__Var_39;
    MR_Word analysis__Var_40;

    {
      analysis__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(analysis__ModuleName_8, analysis__Var_65);
    }
    if (analysis__succeeded)
      {
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "analysis", (MR_String) "predicate \140analysis.record_result\'/7", (MR_String) "recording result for procedure defined in another module");
          return;
        }
      }
    analysis__TypeClassInfo_for_compiler_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 0)));
    analysis__Var_32 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 1));
    analysis__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 2)));
    analysis__MakeAnalysisReg_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 3)));
    analysis__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 4)));
    analysis__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 5)));
    analysis__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 6)));
    analysis__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 7)));
    analysis__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 8)));
    analysis__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 9)));
    analysis__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 10)));
    switch (analysis__MakeAnalysisReg_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word analysis__Map0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 8)));
          MR_Word analysis__Map_16;
          MR_Word analysis__TypeClassInfo_for_compiler_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 0)));
          MR_Box analysis__Var_41 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 1));
          MR_Word analysis__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 2)));
          MR_Word analysis__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 3)));
          MR_Word analysis__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 4)));
          MR_Word analysis__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 5)));
          MR_Word analysis__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 6)));
          MR_Word analysis__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 7)));
          MR_Word analysis__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 9)));
          MR_Word analysis__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 10)));
          MR_Word analysis__TypeClassInfo_for_compiler_64;
          MR_Box analysis__Var_50;
          MR_Word analysis__Var_51;
          MR_Word analysis__Var_52;
          MR_Word analysis__Var_53;
          MR_Word analysis__Var_54;
          MR_Word analysis__Var_55;
          MR_Word analysis__Var_56;
          MR_Word analysis__Var_58;
          MR_Word analysis__Var_59;
          MR_Word analysis__Var_57;

          {
            analysis__record_result_in_analysis_map_6_p_0(analysis__TypeClassInfo_for_analysis_60, analysis__FuncId_9, analysis__CallPattern_10, analysis__AnswerPattern_11, analysis__Status_12, analysis__Map0_15, &analysis__Map_16);
          }
          analysis__TypeClassInfo_for_compiler_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 0)));
          analysis__Var_50 = (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 1));
          analysis__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 2)));
          analysis__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 3)));
          analysis__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 4)));
          analysis__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 5)));
          analysis__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 6)));
          analysis__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 7)));
          analysis__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 8)));
          analysis__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 9)));
          analysis__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__STATE_VARIABLE_Info_0_17, (MR_Integer) 10)));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
            *analysis__STATE_VARIABLE_Info_18 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (analysis__TypeClassInfo_for_compiler_64));
            MR_hl_field(MR_mktag(0), base, 1) = analysis__Var_50;
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (analysis__Var_51));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (analysis__Var_52));
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (analysis__Var_53));
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (analysis__Var_54));
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (analysis__Var_55));
            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (analysis__Var_56));
            MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (analysis__Map_16));
            MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (analysis__Var_58));
            MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (analysis__Var_59));
          }
        }
        break;
      case (MR_Integer) 1:
        *analysis__STATE_VARIABLE_Info_18 = analysis__STATE_VARIABLE_Info_0_17;
        break;
    }
  }
}

void MR_CALL 
analysis__record_result_in_analysis_map_6_p_0(
  MR_Word analysis__TypeClassInfo_for_analysis_21,
  MR_Word analysis__FuncId_7,
  MR_Box analysis__CallPattern_8,
  MR_Box analysis__AnswerPattern_9,
  MR_Word analysis__Status_10,
  MR_Word analysis__ModuleResults0_11,
  MR_Word * analysis__ModuleResults_12)
{
  {
    MR_bool analysis__succeeded;
    MR_String analysis__AnalysisName_13;
    MR_Word analysis__AnalysisResults1_15;
    MR_Word analysis__FuncResults1_17;
    MR_Word analysis__Result_18;
    MR_Word analysis__FuncResults_19;
    MR_Word analysis__Var_20;
    MR_Box analysis__Var_32;
    MR_Box analysis__Var_33;
    MR_Box MR_CALL (* analysis__func_0)(MR_Box) = ((MR_Box MR_CALL (*)(MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_analysis_21, (MR_Integer) 0)), (MR_Integer) 5)));
    MR_Box analysis__conv1_AnalysisName_13;
    MR_Word analysis__AnalysisResults0_14;
    MR_Box analysis__conv2_AnalysisResults0_14;
    MR_Word analysis__FuncResults0_16;
    MR_Box analysis__conv3_FuncResults0_16;

    {
      analysis__conv1_AnalysisName_13 = analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_analysis_21));
    }
    analysis__AnalysisName_13 = ((MR_String) analysis__conv1_AnalysisName_13);
    {
      analysis__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &analysis_scalar_common_2[2], analysis__ModuleResults0_11, ((MR_Box) (analysis__AnalysisName_13)), &analysis__conv2_AnalysisResults0_14);
    }
    if (analysis__succeeded)
      {
        analysis__AnalysisResults0_14 = ((MR_Word) analysis__conv2_AnalysisResults0_14);
        analysis__succeeded = MR_TRUE;
      }
    if (analysis__succeeded)
      analysis__AnalysisResults1_15 = analysis__AnalysisResults0_14;
    else
      {
        {
          analysis__AnalysisResults1_15 = mercury__map__init_0_f_0((MR_Word) &analysis__analysis__type_ctor_info_func_id_0, (MR_Word) &analysis_scalar_common_1[1]);
        }
      }
    {
      analysis__succeeded = mercury__map__search_3_p_0((MR_Word) &analysis__analysis__type_ctor_info_func_id_0, (MR_Word) &analysis_scalar_common_1[1], analysis__AnalysisResults1_15, ((MR_Box) (analysis__FuncId_7)), &analysis__conv3_FuncResults0_16);
    }
    if (analysis__succeeded)
      {
        analysis__FuncResults0_16 = ((MR_Word) analysis__conv3_FuncResults0_16);
        analysis__succeeded = MR_TRUE;
      }
    if (analysis__succeeded)
      analysis__FuncResults1_17 = analysis__FuncResults0_16;
    else
      analysis__FuncResults1_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      analysis__Result_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), analysis__Result_18, 0) = ((MR_Box) (analysis__TypeClassInfo_for_analysis_21));
      MR_hl_field(MR_mktag(0), analysis__Result_18, 1) = analysis__CallPattern_8;
      MR_hl_field(MR_mktag(0), analysis__Result_18, 2) = analysis__AnswerPattern_9;
      MR_hl_field(MR_mktag(0), analysis__Result_18, 3) = ((MR_Box) (analysis__Status_10));
    }
    {
      analysis__FuncResults_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), analysis__FuncResults_19, 0) = ((MR_Box) (analysis__Result_18));
      MR_hl_field(MR_mktag(1), analysis__FuncResults_19, 1) = ((MR_Box) (analysis__FuncResults1_17));
    }
    {
      analysis__Var_20 = mercury__map__set_3_f_0((MR_Word) &analysis__analysis__type_ctor_info_func_id_0, (MR_Word) &analysis_scalar_common_1[1], analysis__AnalysisResults1_15, ((MR_Box) (analysis__FuncId_7)), ((MR_Box) (analysis__FuncResults_19)));
    }
    {
      *analysis__ModuleResults_12 = mercury__map__set_3_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &analysis_scalar_common_2[2], analysis__ModuleResults0_11, ((MR_Box) (analysis__AnalysisName_13)), ((MR_Box) (analysis__Var_20)));
    }
  }
}

static void MR_CALL 
analysis__lookup_best_result_6_p_0_1(
  MR_Box analysis__closure_arg,
  MR_Box analysis__wrapper_arg_1,
  MR_Box analysis__wrapper_arg_2,
  MR_Box * analysis__wrapper_arg_3)
{
  {
    MR_Box analysis__closure = analysis__closure_arg;
    MR_Word analysis__conv0_Best_8;

    {
      analysis__more_precise_answer_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 3))), (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 4)), ((MR_Word) analysis__wrapper_arg_1), ((MR_Word) analysis__wrapper_arg_2), &analysis__conv0_Best_8);
    }
    *analysis__wrapper_arg_3 = ((MR_Box) (analysis__conv0_Best_8));
  }
}

void MR_CALL 
analysis__lookup_best_result_6_p_0(
  MR_Word analysis__TypeClassInfo_for_analysis_35,
  MR_Word analysis__Info_7,
  MR_Word analysis__ModuleName_8,
  MR_Word analysis__FuncId_9,
  MR_Box analysis__FuncInfo_10,
  MR_Box analysis__Call_11,
  MR_Word * analysis__MaybeBestResult_12)
{
  {
    MR_bool analysis__succeeded;
    MR_Word analysis__MatchingResults_14;
    MR_Word analysis__Debug_51;

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
	 analysis__Debug_51  = X;
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
    switch (analysis__Debug_51) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          analysis__IntroducedFrom__pred__lookup_best_result__564__1_4_p_0(analysis__ModuleName_8, analysis__FuncId_9);
        }
        break;
    }
    {
      analysis__lookup_matching_results_6_p_0(analysis__TypeClassInfo_for_analysis_35, analysis__Info_7, analysis__ModuleName_8, analysis__FuncId_9, analysis__FuncInfo_10, analysis__Call_11, &analysis__MatchingResults_14);
    }
    if ((analysis__MatchingResults_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *analysis__MaybeBestResult_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word analysis__TypeInfo_42_42;
        MR_Word analysis__TypeInfo_44_44;
        MR_Word analysis__TypeInfo_46_46;
        MR_Word analysis__Result_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis__MatchingResults_14, (MR_Integer) 0)));
        MR_Word analysis__Results_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), analysis__MatchingResults_14, (MR_Integer) 1)));
        MR_Word analysis__BestResult_17;
        MR_Word analysis__Var_32;
        MR_Box analysis__conv1_BestResult_17;

        {
          analysis__Var_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), analysis__Var_32, 0) = ((MR_Box) (&analysis_scalar_common_8[0]));
          MR_hl_field(MR_mktag(0), analysis__Var_32, 1) = ((MR_Box) (analysis__lookup_best_result_6_p_0_1));
          MR_hl_field(MR_mktag(0), analysis__Var_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), analysis__Var_32, 3) = ((MR_Box) (analysis__TypeClassInfo_for_analysis_35));
          MR_hl_field(MR_mktag(0), analysis__Var_32, 4) = analysis__FuncInfo_10;
        }
        {
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_35, (MR_Integer) 4, &analysis__TypeInfo_42_42);
        }
        {
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_35, (MR_Integer) 5, &analysis__TypeInfo_44_44);
        }
        {
          analysis__TypeInfo_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), analysis__TypeInfo_46_46, 0) = ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_result_2));
          MR_hl_field(MR_mktag(0), analysis__TypeInfo_46_46, 1) = ((MR_Box) (analysis__TypeInfo_42_42));
          MR_hl_field(MR_mktag(0), analysis__TypeInfo_46_46, 2) = ((MR_Box) (analysis__TypeInfo_44_44));
        }
        {
          mercury__list__foldl_4_p_0(analysis__TypeInfo_46_46, analysis__TypeInfo_46_46, (MR_Word) analysis__Var_32, analysis__Results_16, ((MR_Box) (analysis__Result_15)), &analysis__conv1_BestResult_17);
        }
        analysis__BestResult_17 = ((MR_Word) analysis__conv1_BestResult_17);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *analysis__MaybeBestResult_12 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (analysis__BestResult_17));
        }
      }
  }
}

static void MR_CALL 
analysis__IntroducedFrom__pred__lookup_best_result__564__1_4_p_0(
  MR_Word analysis__ModuleName_8,
  MR_Word analysis__FuncId_9)
{
  {
    MR_bool analysis__succeeded;

    {
      mercury__io__write_string_3_p_0((MR_String) "% Looking up best analysis result for ");
    }
    {
      mercury__io__write_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (analysis__ModuleName_8)));
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ".");
    }
    {
      mercury__io__write_3_p_0((MR_Word) &analysis__analysis__type_ctor_info_func_id_0, ((MR_Box) (analysis__FuncId_9)));
    }
    {
      mercury__io__nl_2_p_0();
    }
  }
}

static MR_bool MR_CALL 
analysis__lookup_matching_results_6_p_0_1(
  MR_Box analysis__closure_arg,
  MR_Box analysis__wrapper_arg_1)
{
  {
    MR_bool analysis__succeeded;
    MR_Box analysis__closure = analysis__closure_arg;

    {
      analysis__succeeded = analysis__IntroducedFrom__pred__lookup_matching_results__553__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 3))), (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 4)), (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 5)), ((MR_Word) analysis__wrapper_arg_1));
    }
    return analysis__succeeded;
  }
}

void MR_CALL 
analysis__lookup_matching_results_6_p_0(
  MR_Word analysis__TypeClassInfo_for_analysis_21,
  MR_Word analysis__Info_7,
  MR_Word analysis__ModuleName_8,
  MR_Word analysis__FuncId_9,
  MR_Box analysis__FuncInfo_10,
  MR_Box analysis__Call_11,
  MR_Word * analysis__ResultList_12)
{
  {
    MR_bool analysis__succeeded;
    MR_Word analysis__TypeInfo_23_23;
    MR_Word analysis__TypeInfo_25_25;
    MR_Word analysis__TypeInfo_27_27;
    MR_Word analysis__AllResultsList_13;
    MR_Word analysis__Var_16;

    {
      analysis__lookup_results_1_5_p_0(analysis__TypeClassInfo_for_analysis_21, analysis__Info_7, analysis__ModuleName_8, analysis__FuncId_9, (MR_Integer) 0, &analysis__AllResultsList_13);
    }
    {
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_21, (MR_Integer) 4, &analysis__TypeInfo_23_23);
    }
    {
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_21, (MR_Integer) 5, &analysis__TypeInfo_25_25);
    }
    {
      analysis__TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_27_27, 0) = ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_result_2));
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_27_27, 1) = ((MR_Box) (analysis__TypeInfo_23_23));
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_27_27, 2) = ((MR_Box) (analysis__TypeInfo_25_25));
    }
    {
      analysis__Var_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), analysis__Var_16, 0) = ((MR_Box) (&analysis_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), analysis__Var_16, 1) = ((MR_Box) (analysis__lookup_matching_results_6_p_0_1));
      MR_hl_field(MR_mktag(0), analysis__Var_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), analysis__Var_16, 3) = ((MR_Box) (analysis__TypeClassInfo_for_analysis_21));
      MR_hl_field(MR_mktag(0), analysis__Var_16, 4) = analysis__FuncInfo_10;
      MR_hl_field(MR_mktag(0), analysis__Var_16, 5) = analysis__Call_11;
    }
    {
      *analysis__ResultList_12 = mercury__list__filter_2_f_0(analysis__TypeInfo_27_27, analysis__Var_16, analysis__AllResultsList_13);
    }
  }
}

void MR_CALL 
analysis__lookup_results_4_p_0(
  MR_Word analysis__TypeClassInfo_for_analysis_10,
  MR_Word analysis__Info_5,
  MR_Word analysis__ModuleName_6,
  MR_Word analysis__FuncId_7,
  MR_Word * analysis__ResultList_8)
{
  {
    MR_bool analysis__succeeded;

    {
      analysis__lookup_results_1_5_p_0(analysis__TypeClassInfo_for_analysis_10, analysis__Info_5, analysis__ModuleName_6, analysis__FuncId_7, (MR_Integer) 0, analysis__ResultList_8);
    }
  }
}

void MR_CALL 
analysis__lookup_results_1_5_p_0(
  MR_Word analysis__TypeClassInfo_for_analysis_62,
  MR_Word analysis__Info_6,
  MR_Word analysis__ModuleName_7,
  MR_Word analysis__FuncId_8,
  MR_Word analysis__AllowInvalidModules_9,
  MR_Word * analysis__ResultList_10)
{
  {
    MR_bool analysis__succeeded;
    MR_Word analysis__Debug_82;
    MR_Word analysis__TypeCtorInfo_66_66;
    MR_Word analysis__TypeCtorInfo_67_67;
    MR_Word analysis__Var_26;
    MR_Word analysis__Var_27;
    MR_Word analysis__Var_77;
    MR_Word analysis__TypeClassInfo_for_compiler_65;
    MR_Box analysis__Var_44;
    MR_Word analysis__Var_45;
    MR_Word analysis__Var_46;
    MR_Word analysis__Var_47;
    MR_Word analysis__Var_48;
    MR_Word analysis__Var_49;
    MR_Word analysis__Var_50;
    MR_Word analysis__Var_51;
    MR_Word analysis__Var_52;
    MR_Box analysis__conv0_Var_77;

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
	 analysis__Debug_82  = X;
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
    switch (analysis__Debug_82) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          analysis__IntroducedFrom__pred__lookup_results_1__500__1_4_p_0(analysis__ModuleName_7, analysis__FuncId_8);
        }
        break;
    }
    analysis__succeeded = (analysis__AllowInvalidModules_9 == (MR_Integer) 0);
    if (analysis__succeeded)
      {
        analysis__TypeClassInfo_for_compiler_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 0)));
        analysis__Var_44 = (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 1));
        analysis__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 2)));
        analysis__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 3)));
        analysis__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 4)));
        analysis__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 5)));
        analysis__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 6)));
        analysis__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 7)));
        analysis__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 8)));
        analysis__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 9)));
        analysis__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 10)));
        analysis__Var_27 = (MR_Integer) 0;
        analysis__TypeCtorInfo_66_66 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
        analysis__TypeCtorInfo_67_67 = (MR_Word) &analysis__analysis__type_ctor_info_analysis_status_0;
        {
          analysis__succeeded = mercury__map__search_3_p_0(analysis__TypeCtorInfo_66_66, analysis__TypeCtorInfo_67_67, analysis__Var_26, ((MR_Box) (analysis__ModuleName_7)), &analysis__conv0_Var_77);
        }
        if (analysis__succeeded)
          {
            analysis__Var_77 = ((MR_Word) analysis__conv0_Var_77);
            analysis__succeeded = MR_TRUE;
          }
        if (analysis__succeeded)
          analysis__succeeded = (analysis__Var_27 == analysis__Var_77);
      }
    if (analysis__succeeded)
      *analysis__ResultList_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word analysis__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 7)));
        MR_Word analysis__TypeClassInfo_for_compiler_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 0)));
        MR_Box analysis__Var_53 = (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 1));
        MR_Word analysis__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 2)));
        MR_Word analysis__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 3)));
        MR_Word analysis__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 4)));
        MR_Word analysis__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 5)));
        MR_Word analysis__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 6)));
        MR_Word analysis__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 8)));
        MR_Word analysis__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 9)));
        MR_Word analysis__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 10)));

        {
          analysis__lookup_results_2_4_p_0(analysis__TypeClassInfo_for_analysis_62, analysis__Var_28, analysis__ModuleName_7, analysis__FuncId_8, analysis__ResultList_10);
        }
        {
          analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_54_95_95_91_51_93_95_48_3_p_0(analysis__TypeClassInfo_for_analysis_62, *analysis__ResultList_10);
        }
      }
  }
}

static void MR_CALL 
analysis__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_54_95_95_91_51_93_95_48_3_p_0(
  MR_Word analysis__Var_11,
  MR_Word analysis__Var_12)
{
  {
    MR_bool analysis__succeeded;
    MR_Word analysis__Debug_6;

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
	 analysis__Debug_6  = X;
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
    switch (analysis__Debug_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          analysis__IntroducedFrom__pred__lookup_results_1__518__1_4_p_0(analysis__Var_11, analysis__Var_12);
        }
        break;
    }
  }
}

static void MR_CALL 
analysis__IntroducedFrom__pred__lookup_results_1__518__1_4_p_0(
  MR_Word analysis__TypeClassInfo_for_analysis_62,
  MR_Word analysis__ResultList_10)
{
  {
    MR_bool analysis__succeeded;
    MR_Word analysis__TypeInfo_70_70;
    MR_Word analysis__TypeInfo_72_72;
    MR_Word analysis__TypeInfo_74_74;
    MR_Word analysis__TypeInfo_76_76;

    {
      mercury__io__write_string_3_p_0((MR_String) "% Found these results: ");
    }
    {
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_62, (MR_Integer) 4, &analysis__TypeInfo_70_70);
    }
    {
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_62, (MR_Integer) 5, &analysis__TypeInfo_72_72);
    }
    {
      analysis__TypeInfo_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_74_74, 0) = ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_result_2));
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_74_74, 1) = ((MR_Box) (analysis__TypeInfo_70_70));
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_74_74, 2) = ((MR_Box) (analysis__TypeInfo_72_72));
    }
    {
      analysis__TypeInfo_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_76_76, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
      MR_hl_field(MR_mktag(0), analysis__TypeInfo_76_76, 1) = ((MR_Box) (analysis__TypeInfo_74_74));
    }
    {
      mercury__io__print_3_p_0(analysis__TypeInfo_76_76, ((MR_Box) (analysis__ResultList_10)));
    }
    {
      mercury__io__nl_2_p_0();
    }
  }
}

static void MR_CALL 
analysis__IntroducedFrom__pred__lookup_results_1__500__1_4_p_0(
  MR_Word analysis__ModuleName_7,
  MR_Word analysis__FuncId_8)
{
  {
    MR_bool analysis__succeeded;

    {
      mercury__io__write_string_3_p_0((MR_String) "% Looking up analysis results for ");
    }
    {
      mercury__io__write_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (analysis__ModuleName_7)));
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ".");
    }
    {
      mercury__io__write_3_p_0((MR_Word) &analysis__analysis__type_ctor_info_func_id_0, ((MR_Box) (analysis__FuncId_8)));
    }
    {
      mercury__io__nl_2_p_0();
    }
  }
}

static MR_Box MR_CALL 
analysis__lookup_results_2_4_p_0_1(
  MR_Box analysis__closure_arg,
  MR_Box analysis__wrapper_arg_1)
{
  {
    MR_Box analysis__wrapper_arg_2;
    MR_Box analysis__closure = analysis__closure_arg;
    MR_Word analysis__conv5_LambdaHeadVar__2_25;

    {
      analysis__conv5_LambdaHeadVar__2_25 = analysis__IntroducedFrom__func__lookup_results_2__540__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 3))), ((MR_Word) analysis__wrapper_arg_1));
    }
    analysis__wrapper_arg_2 = ((MR_Box) (analysis__conv5_LambdaHeadVar__2_25));
    return analysis__wrapper_arg_2;
  }
}

void MR_CALL 
analysis__lookup_results_2_4_p_0(
  MR_Word analysis__TypeClassInfo_for_analysis_29,
  MR_Word analysis__Map_5,
  MR_Word analysis__ModuleName_6,
  MR_Word analysis__FuncId_7,
  MR_Word * analysis__ResultList_8)
{
  {
    MR_bool analysis__succeeded;
    MR_String analysis__AnalysisName_9;
    MR_Box analysis__Var_21;
    MR_Box analysis__Var_22;
    MR_Box MR_CALL (* analysis__func_0)(MR_Box) = ((MR_Box MR_CALL (*)(MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), analysis__TypeClassInfo_for_analysis_29, (MR_Integer) 0)), (MR_Integer) 5)));
    MR_Box analysis__conv1_AnalysisName_9;
    MR_Word analysis__Results_16;
    MR_Word analysis__TypeCtorInfo_32_32;
    MR_Word analysis__TypeInfo_33_33;
    MR_Word analysis__TypeCtorInfo_34_34;
    MR_Word analysis__TypeInfo_35_35;
    MR_Word analysis__ModuleResults_14;
    MR_Word analysis__AnalysisResults_15;
    MR_Box analysis__conv2_ModuleResults_14;
    MR_Box analysis__conv3_AnalysisResults_15;
    MR_Box analysis__conv4_Results_16;

    {
      analysis__conv1_AnalysisName_9 = analysis__func_0(((MR_Box) analysis__TypeClassInfo_for_analysis_29));
    }
    analysis__AnalysisName_9 = ((MR_String) analysis__conv1_AnalysisName_9);
    {
      analysis__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &analysis_scalar_common_2[3], analysis__Map_5, ((MR_Box) (analysis__ModuleName_6)), &analysis__conv2_ModuleResults_14);
    }
    if (analysis__succeeded)
      {
        analysis__ModuleResults_14 = ((MR_Word) analysis__conv2_ModuleResults_14);
        analysis__succeeded = MR_TRUE;
      }
    if (analysis__succeeded)
      {
        analysis__TypeCtorInfo_32_32 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
        analysis__TypeInfo_33_33 = (MR_Word) &analysis_scalar_common_2[2];
        {
          analysis__succeeded = mercury__map__search_3_p_0(analysis__TypeCtorInfo_32_32, analysis__TypeInfo_33_33, analysis__ModuleResults_14, ((MR_Box) (analysis__AnalysisName_9)), &analysis__conv3_AnalysisResults_15);
        }
        if (analysis__succeeded)
          {
            analysis__AnalysisResults_15 = ((MR_Word) analysis__conv3_AnalysisResults_15);
            analysis__succeeded = MR_TRUE;
          }
        if (analysis__succeeded)
          {
            analysis__TypeCtorInfo_34_34 = (MR_Word) &analysis__analysis__type_ctor_info_func_id_0;
            analysis__TypeInfo_35_35 = (MR_Word) &analysis_scalar_common_1[1];
            {
              analysis__succeeded = mercury__map__search_3_p_0(analysis__TypeCtorInfo_34_34, analysis__TypeInfo_35_35, analysis__AnalysisResults_15, ((MR_Box) (analysis__FuncId_7)), &analysis__conv4_Results_16);
            }
            if (analysis__succeeded)
              {
                analysis__Results_16 = ((MR_Word) analysis__conv4_Results_16);
                analysis__succeeded = MR_TRUE;
              }
          }
      }
    if (analysis__succeeded)
      {
        MR_Word analysis__TypeInfo_38_38;
        MR_Word analysis__TypeInfo_40_40;
        MR_Word analysis__TypeInfo_42_42;
        MR_Word analysis__Var_23;
        MR_Word analysis__conv6_ResultList_8;

        {
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_29, (MR_Integer) 4, &analysis__TypeInfo_38_38);
        }
        {
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_analysis_29, (MR_Integer) 5, &analysis__TypeInfo_40_40);
        }
        {
          analysis__TypeInfo_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), analysis__TypeInfo_42_42, 0) = ((MR_Box) (&analysis__analysis__type_ctor_info_analysis_result_2));
          MR_hl_field(MR_mktag(0), analysis__TypeInfo_42_42, 1) = ((MR_Box) (analysis__TypeInfo_38_38));
          MR_hl_field(MR_mktag(0), analysis__TypeInfo_42_42, 2) = ((MR_Box) (analysis__TypeInfo_40_40));
        }
        {
          analysis__Var_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), analysis__Var_23, 0) = ((MR_Box) (&analysis_scalar_common_4[1]));
          MR_hl_field(MR_mktag(0), analysis__Var_23, 1) = ((MR_Box) (analysis__lookup_results_2_4_p_0_1));
          MR_hl_field(MR_mktag(0), analysis__Var_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), analysis__Var_23, 3) = ((MR_Box) (analysis__TypeClassInfo_for_analysis_29));
        }
        {
          analysis__conv6_ResultList_8 = mercury__list__map_2_f_0((MR_Word) &analysis__analysis__type_ctor_info_some_analysis_result_0, analysis__TypeInfo_42_42, (MR_Word) analysis__Var_23, analysis__Results_16);
        }
        *analysis__ResultList_8 = (MR_Word) analysis__conv6_ResultList_8;
      }
    else
      *analysis__ResultList_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  }
}

static MR_Box MR_CALL 
analysis__lookup_existing_call_patterns_5_p_0_1(
  MR_Box analysis__closure_arg,
  MR_Box analysis__wrapper_arg_1)
{
  {
    MR_Box analysis__wrapper_arg_2;
    MR_Box analysis__closure = analysis__closure_arg;

    {
      analysis__wrapper_arg_2 = analysis__IntroducedFrom__func__lookup_existing_call_patterns__480__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), analysis__closure, (MR_Integer) 3))), ((MR_Word) analysis__wrapper_arg_1));
    }
    return analysis__wrapper_arg_2;
  }
}

void MR_CALL 
analysis__lookup_existing_call_patterns_5_p_0(
  MR_Word analysis__TypeClassInfo_for_call_pattern_46,
  MR_Word analysis__Info_6,
  MR_String analysis__AnalysisName_7,
  MR_Word analysis__ModuleName_8,
  MR_Word analysis__FuncId_9,
  MR_Word * analysis__Calls_10)
{
  {
    MR_bool analysis__succeeded;
    MR_Word analysis__Map_11;
    MR_Word analysis__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 2)));
    MR_Word analysis__TypeClassInfo_for_compiler_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 0)));
    MR_Box analysis__Var_28 = (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 1));
    MR_Word analysis__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 3)));
    MR_Word analysis__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 4)));
    MR_Word analysis__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 5)));
    MR_Word analysis__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 6)));
    MR_Word analysis__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 7)));
    MR_Word analysis__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 8)));
    MR_Word analysis__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 9)));
    MR_Word analysis__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 10)));
    MR_Word analysis__TypeClassInfo_for_compiler_48;
    MR_Box analysis__Var_37;
    MR_Word analysis__Var_38;
    MR_Word analysis__Var_39;
    MR_Word analysis__Var_40;
    MR_Word analysis__Var_41;
    MR_Word analysis__Var_42;
    MR_Word analysis__Var_43;
    MR_Word analysis__Var_44;
    MR_Word analysis__Var_45;
    MR_Word analysis__Results_14;
    MR_Word analysis__TypeCtorInfo_51_51;
    MR_Word analysis__TypeInfo_52_52;
    MR_Word analysis__TypeCtorInfo_53_53;
    MR_Word analysis__TypeInfo_54_54;
    MR_Word analysis__ModuleResults_12;
    MR_Word analysis__AnalysisResults_13;
    MR_Box analysis__conv0_ModuleResults_12;
    MR_Box analysis__conv1_AnalysisResults_13;
    MR_Box analysis__conv2_Results_14;

    {
      analysis__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(analysis__ModuleName_8, analysis__Var_62);
    }
    if (analysis__succeeded)
      {
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "analysis", (MR_String) "predicate \140analysis.lookup_existing_call_patterns\'/5", (MR_String) "not this_module");
          return;
        }
      }
    analysis__TypeClassInfo_for_compiler_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 0)));
    analysis__Var_37 = (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 1));
    analysis__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 2)));
    analysis__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 3)));
    analysis__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 4)));
    analysis__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 5)));
    analysis__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 6)));
    analysis__Map_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 7)));
    analysis__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 8)));
    analysis__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 9)));
    analysis__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), analysis__Info_6, (MR_Integer) 10)));
    {
      analysis__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &analysis_scalar_common_2[3], analysis__Map_11, ((MR_Box) (analysis__ModuleName_8)), &analysis__conv0_ModuleResults_12);
    }
    if (analysis__succeeded)
      {
        analysis__ModuleResults_12 = ((MR_Word) analysis__conv0_ModuleResults_12);
        analysis__succeeded = MR_TRUE;
      }
    if (analysis__succeeded)
      {
        analysis__TypeCtorInfo_51_51 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
        analysis__TypeInfo_52_52 = (MR_Word) &analysis_scalar_common_2[2];
        {
          analysis__succeeded = mercury__map__search_3_p_0(analysis__TypeCtorInfo_51_51, analysis__TypeInfo_52_52, analysis__ModuleResults_12, ((MR_Box) (analysis__AnalysisName_7)), &analysis__conv1_AnalysisResults_13);
        }
        if (analysis__succeeded)
          {
            analysis__AnalysisResults_13 = ((MR_Word) analysis__conv1_AnalysisResults_13);
            analysis__succeeded = MR_TRUE;
          }
        if (analysis__succeeded)
          {
            analysis__TypeCtorInfo_53_53 = (MR_Word) &analysis__analysis__type_ctor_info_func_id_0;
            analysis__TypeInfo_54_54 = (MR_Word) &analysis_scalar_common_1[1];
            {
              analysis__succeeded = mercury__map__search_3_p_0(analysis__TypeCtorInfo_53_53, analysis__TypeInfo_54_54, analysis__AnalysisResults_13, ((MR_Box) (analysis__FuncId_9)), &analysis__conv2_Results_14);
            }
            if (analysis__succeeded)
              {
                analysis__Results_14 = ((MR_Word) analysis__conv2_Results_14);
                analysis__succeeded = MR_TRUE;
              }
          }
      }
    if (analysis__succeeded)
      {
        MR_Word analysis__TypeInfo_57_57;
        MR_Word analysis__Var_23;

        {
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(analysis__TypeClassInfo_for_call_pattern_46, (MR_Integer) 4, &analysis__TypeInfo_57_57);
        }
        {
          analysis__Var_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), analysis__Var_23, 0) = ((MR_Box) (&analysis_scalar_common_4[0]));
          MR_hl_field(MR_mktag(0), analysis__Var_23, 1) = ((MR_Box) (analysis__lookup_existing_call_patterns_5_p_0_1));
          MR_hl_field(MR_mktag(0), analysis__Var_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), analysis__Var_23, 3) = ((MR_Box) (analysis__TypeClassInfo_for_call_pattern_46));
        }
        {
          *analysis__Calls_10 = mercury__list__map_2_f_0((MR_Word) &analysis__analysis__type_ctor_info_some_analysis_result_0, analysis__TypeInfo_57_57, analysis__Var_23, analysis__Results_14);
        }
      }
    else
      *analysis__Calls_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  }
}

MR_Word MR_CALL 
analysis__init_analysis_info_3_f_0(
  MR_Word analysis__TypeClassInfo_for_compiler_17,
  MR_Box analysis__Compiler_5,
  MR_Word analysis__ThisModuleName_6,
  MR_Word analysis__MakeAnalysisRegBool_7)
{
  {
    MR_bool analysis__succeeded;
    MR_Word analysis__Info_8;
    MR_Word analysis__TypeCtorInfo_18_18;
    MR_Word analysis__TypeInfo_24_24;
    MR_Word analysis__MakeAnalysisReg_9;
    MR_Word analysis__Var_10;
    MR_Word analysis__Var_11;
    MR_Word analysis__Var_12;
    MR_Word analysis__Var_13;
    MR_Word analysis__Var_14;
    MR_Word analysis__Var_15;
    MR_Word analysis__Var_16;

    switch (analysis__MakeAnalysisRegBool_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        analysis__MakeAnalysisReg_9 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        analysis__MakeAnalysisReg_9 = (MR_Integer) 0;
        break;
    }
    analysis__TypeCtorInfo_18_18 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    {
      analysis__Var_10 = mercury__set__init_0_f_0(analysis__TypeCtorInfo_18_18);
    }
    {
      analysis__Var_11 = mercury__map__init_0_f_0(analysis__TypeCtorInfo_18_18, (MR_Word) &analysis_scalar_common_2[1]);
    }
    {
      analysis__Var_12 = mercury__map__init_0_f_0(analysis__TypeCtorInfo_18_18, (MR_Word) &analysis__analysis__type_ctor_info_analysis_status_0);
    }
    {
      analysis__Var_13 = mercury__map__init_0_f_0(analysis__TypeCtorInfo_18_18, (MR_Word) &analysis_scalar_common_2[3]);
    }
    {
      analysis__Var_14 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &analysis_scalar_common_2[2]);
    }
    analysis__TypeInfo_24_24 = (MR_Word) &analysis_scalar_common_2[5];
    {
      analysis__Var_15 = mercury__map__init_0_f_0(analysis__TypeCtorInfo_18_18, analysis__TypeInfo_24_24);
    }
    {
      analysis__Var_16 = mercury__map__init_0_f_0(analysis__TypeCtorInfo_18_18, analysis__TypeInfo_24_24);
    }
    {
      analysis__Info_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), analysis__Info_8, 0) = ((MR_Box) (analysis__TypeClassInfo_for_compiler_17));
      MR_hl_field(MR_mktag(0), analysis__Info_8, 1) = analysis__Compiler_5;
      MR_hl_field(MR_mktag(0), analysis__Info_8, 2) = ((MR_Box) (analysis__ThisModuleName_6));
      MR_hl_field(MR_mktag(0), analysis__Info_8, 3) = ((MR_Box) (analysis__MakeAnalysisReg_9));
      MR_hl_field(MR_mktag(0), analysis__Info_8, 4) = ((MR_Box) (analysis__Var_10));
      MR_hl_field(MR_mktag(0), analysis__Info_8, 5) = ((MR_Box) (analysis__Var_11));
      MR_hl_field(MR_mktag(0), analysis__Info_8, 6) = ((MR_Box) (analysis__Var_12));
      MR_hl_field(MR_mktag(0), analysis__Info_8, 7) = ((MR_Box) (analysis__Var_13));
      MR_hl_field(MR_mktag(0), analysis__Info_8, 8) = ((MR_Box) (analysis__Var_14));
      MR_hl_field(MR_mktag(0), analysis__Info_8, 9) = ((MR_Box) (analysis__Var_15));
      MR_hl_field(MR_mktag(0), analysis__Info_8, 10) = ((MR_Box) (analysis__Var_16));
    }
    return analysis__Info_8;
  }
}

MR_Word MR_CALL 
analysis__lub_2_f_0(
  MR_Word analysis__StatusA_4,
  MR_Word analysis__StatusB_5)
{
  {
    MR_bool analysis__succeeded;
    MR_Word analysis__Status_6;
    MR_Word analysis__Cmp_7;
    MR_Integer analysis__Var_9 = (MR_Integer) analysis__StatusA_4;
    MR_Integer analysis__Var_10 = (MR_Integer) analysis__StatusB_5;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(&analysis__Cmp_7, analysis__Var_9, analysis__Var_10);
    }
    switch (analysis__Cmp_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        analysis__Status_6 = analysis__StatusA_4;
        break;
      case (MR_Integer) 0:
        analysis__Status_6 = analysis__StatusA_4;
        break;
      case (MR_Integer) 2:
        analysis__Status_6 = analysis__StatusB_5;
        break;
    }
    return analysis__Status_6;
  }
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
	analysis__user_init_pred_0();
}

// Ensure everything is compiled with the same grade.
const char *mercury__analysis__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module analysis. */
